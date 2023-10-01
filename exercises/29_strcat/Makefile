##
## EPITECH POOL CHALLENGE, 2023
## strcat makefile
##

SRC	=	strcat.c
SIDE	=	../06_strlen/strlen.c

OBJ	=	$(SRC:.c=.o) $(SIDE:.c=.o)
COV	=	./*.gcda ./*.gcno

NAME	=	strcat.bin
TESTNAME=	test.bin
TESTFILE=	tests.c
CRITOPATH=	../../criterion/

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -o $(NAME) $(SRC) $(SIDE) -g3
	@echo "$(NAME) compiled successfully"

clean:
	@rm -f $(OBJ)
	@echo "Cleaned .o"

fclean: clean
	@rm -f $(NAME)
	@echo "Cleaned '$(NAME)'"
	@rm -f $(TESTNAME) $(COV)
	@echo "Cleaned '$(TESTNAME)' binary & residual files"

re:	fclean all

test:
	@gcc -fprofile-arcs -ftest-coverage -o $(TESTNAME) $(TESTFILE) $(SRC) $(SIDE) \
		-g3 -I$(CRITOPATH)include -L$(CRITOPATH)lib -lcriterion -lm

run:	fclean test
	@./$(TESTNAME) --verbose
runc:	run
	@gcovr --exclude tests.c --exclude-unreachable-branches --sort-uncovered --print-summary

.PHONY: all clean fclean re test run runc