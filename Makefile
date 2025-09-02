CXX = g++
# OpenCV configuration (adjust paths if necessary)
OPENCV_INCLUDE = third_party/opencv/include
OPENCV_LIB_DIR = third_party/opencv/x64/mingw/lib # Adjust for your Visual Studio version and architecture

CXXFLAGS = -Wall -Wextra -std=c++17 -Iinclude -I$(OPENCV_INCLUDE)
LDFLAGS = -L$(OPENCV_LIB_DIR) -lopencv_objdetect455 -lopencv_core455 -lopencv_imgproc455

SRCDIR = src
OBJDIR = obj
BINDIR = bin

SOURCES = $(wildcard $(SRCDIR)/*.cpp)
OBJECTS = $(patsubst $(SRCDIR)/%.cpp,$(OBJDIR)/%.o,$(SOURCES))
TARGET = $(BINDIR)/MyCppProject

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJECTS) | $(BINDIR)
	$(CXX) $(OBJECTS) -o $@ $(LDFLAGS)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp | $(OBJDIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BINDIR):
	mkdir -p $(BINDIR)

$(OBJDIR):
	mkdir -p $(OBJDIR)

clean:
	rm -rf $(OBJDIR) $(BINDIR)
