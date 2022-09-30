# if you type 'make' without arguments, this is the default
PROG = omit
all: $(PROG)

# Tell make about the file dependecies
HEAD	= #FILL IN HERE
OBJ     = #FILL IN HERE

# special libraries This can be blank
LIB	=

# select the compiler and flags
# you can over-ride these on the command line e.g. make DEBUG= 
CC      = gcc
DEBUG	= -ggdb
CSTD	=
WARN	= -Wall -Wextra -Werror
CDEFS	=
CFLAGS	= -I. $(DEBUG) $(WARN) $(CSTD) $(CDEFS)

$(OBJ):	$(HEAD)

# specify how to compile the target
$(PROG):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIB) -o $@

# remove binaries
.PHONY: clean 
clean:
	rm -f $(OBJ) $(PROG)
