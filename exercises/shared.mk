##
## EPITECH POOL CHALLENGE, 2023
## shared makefile
##

.SUFFIXES: .o

OBJ	= $(SRC:.c=.o)

COV = $(wildcard *.gc??)

TESTNAME = test.bin
TESTFILE = tests.c

CRITOPATH := ../../criterion

all: $(TESTNAME)

clean:
	@ $(RM) $(OBJ)
	@ echo "Cleaned .o"

fclean: clean
	@ $(RM) $(TESTNAME) $(COV)
	@ echo "Cleaned '$(TESTNAME)' binary & residual files"

.NOTPARALLEL: re
re:	fclean all

$(TESTNAME): $(OBJ)
	@ gcc -o $(TESTNAME) $(OBJ)                     \
		-fprofile-arcs -ftest-coverage -w -g3       \
		-I $(CRITOPATH)/include -L $(CRITOPATH)/lib \
		-lcriterion

run: $(TESTNAME)
	@ ./$(TESTNAME) --verbose

runc: run
	@ gcovr --exclude tests.c               \
		--exclude-unreachable-branches      \
		--sort-percentage                   \
		--print-summary

.PHONY: all clean fclean re test run runc
