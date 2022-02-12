SRC = src/project_main.c\
src/menu.c\
src/help.c\
src/file.c\
src/quizC.c\
src/quizCpp.c\
src/quizJava.c\

INC = -Iinc\

PROJECT_NAME = QUIZ.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME) -lncurses

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
doc:
	make -C documentation

clean:
	rm -rf $(PROJECT_NAME) documentation/html

coverage:${PROJECT_NAME}
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(PROJECT_NAME)
	./${PROJECT_NAME}
	gcov -a src/factorial.c src/menu.c  src/help.c  src/file.c  src/quizC.c  src/quizcpp.c src/quizJava.c
