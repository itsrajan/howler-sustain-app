# compiler goes here
CC = g++

# compiler flags
CFLAGS = -Iinclude

# link flags
LFLAGS = -Llib/SFML -lbin/SFML/sfml-graphics -lbin/SFML/sfml-window -lbin/SFML/sfml-system

.PHONY : clean all compile link

all: compile link

compile: bin/obj/main.o

link:
	@${CC} ${LFLAGS} bin/obj/main.o \
	-o bin/release/main
	@echo "Built: main.exe"

# objects

bin/obj/main.o : src/main.cpp
	@${CC} ${CFLAGS} -c src/main.cpp \
	-o $@
	@echo "Built: $@"

# clean 
clean :
	@rm -f bin/release/*
	@rm -f bin/obj/*
	@echo "Cleanup complete."