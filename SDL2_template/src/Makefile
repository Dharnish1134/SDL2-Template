CXX = g++
CXXFLAGS = -Wall -std=c++11 `sdl2-config --cflags`
LDFLAGS = `sdl2-config --libs` -lSDL2_image
OUTPUT_DIR = ../build

SRC := $(firstword $(filter %.cpp,$(MAKECMDGOALS)))
SRC := $(if $(SRC), $(SRC),main.cpp)
TARGET = $(basename $(SRC))

OBJ = $(TARGET).o
EXEC = $(OUTPUT_DIR)/$(TARGET)

all:$(EXEC)

$(OBJ):$(SRC)
	@mkdir -p $(OUTPUT_DIR)
	$(CXX) $(CXXFLAGS) -c $(SRC) -o $(OBJ)

$(EXEC): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(EXEC) $(LDFLAGS)

.PHONY:force_build
force_build:$(EXEC)
	@echo "Rebuilding $(EXEC) Complete!!!"
	@echo "Running $(EXEC)...;D"
	./$(EXEC)

run:force_build

clean:
	rm -f $(EXEC) $(OBJ)

%.cpp:
	@:
%:
	@:
