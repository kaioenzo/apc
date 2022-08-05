.POSIX:

ifndef P
P = next
endif

#----------------------------------------------

all: build

#-----------------------------------------------

clean:
	rm    -r bin/A1/

prepare:
	mkdir -p bin/${P}

#-----------------------------------------------

build: prepare
	gcc   -c ${P}.c        -o bin/${P}/function.o
	gcc   -c ${P}_main.c   -o bin/${P}/main.o
	gcc      bin/${P}/*.o  -o bin/${P}/exec       -lm

.PHONY: all prepare build clean
