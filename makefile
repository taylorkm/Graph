# Compiler flags
CPPFLAGS= -std=gnu++11 -stdlib=libc++

# Variable list of source files. The other cpp files are actually included 
# in the .hpp files: a strange, but legal technique to separate definition 
# and declarations with templates in class definition.
SRCS=main.cpp 

# Each .cc file needs associated object file
OBJS=$(subst .cpp,.o,$(SRCS))

# Executible has no extension for linux 
EXE=mainProgram



# Targets
all: $(OBJS)
	clang++ $(CPPFLAGS) -o $(EXE) $(OBJS)

clean:
	\rm -rf $(OBJS) $(EXE) 

