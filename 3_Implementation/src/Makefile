CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -pedantic -std=c++17 -g -fsanitize=address
LDFLAGS =  -fsanitize=address

SRC = src/project_main.c src/menu.c src/menu.h src/help.c src/file.c src/quizC.c src/quizCpp.c src/quizJava.c
OBJ = $(SRC:.cc=.o)
EXEC = quiz.out

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CXX) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)