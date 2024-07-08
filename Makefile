##
## EPITECH POOL CHALLENGE, 2023
## general makefile
##

.SUFFIXES: .o

SRC := $(shell find . -name "*.c")
OBJ := $(SRC:.c=.o)

COV = $(wildcard *.gc??)

NAME := superlib.a
TESTNAME := test.bin

CRITOPATH := ./criterion

all: $(NAME)

$(NAME): $(OBJ)
	@ $(AR) rc $@ $^
	@ echo "Library compiled successfully"

clean:
	@ $(RM) $(OBJ)
	@ echo "Cleaned .o"

fclean: clean
	@ $(RM) $(NAME)
	@ echo "Cleaned '$(NAME)'"
	@ $(RM) $(TESTNAME) $(COV)
	@ echo "Cleaned '$(TESTNAME)' binary & residual files"

.NOTPARALLEL: re
re: fclean all

$(TESTNAME): $(OBJ)
	@ gcc -o $(TESTNAME) $(OBJ)                     \
		-fprofile-arcs -ftest-coverage -g3          \
		-I $(CRITOPATH)/include -L $(CRITOPATH)/lib \
		-lcriterion

.NOTPARALLEL: run
run: fclean $(TESTNAME)
	@ ./$(TESTNAME) --verbose

runc: run
	@ gcovr                                       \
		--exclude $(wildcard exercises/*/tests.c) \
		--exclude-unreachable-branches            \
		--sort-key uncovered-percent              \
		--print-summary

norm:
	@ ruby normono.rb

.PHONY: all clean fclean re run runc norm
