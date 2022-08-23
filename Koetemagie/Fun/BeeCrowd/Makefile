.POSIX:

include config.mk

#---------------------------------------------

all: build

#-----------------------------------------------

#install:
#	cp    -f ./bin/$(NAME_PROGRAM)-$(VERSION) ${DESTDIR}/bin/$(NAME_PROGRAM)
#
#clean:
#	rm    -r bin
#
#uninstall:
#	rm    -f ${DESTDIR}/bin/$(NAME_PROGRAM)

build:
	mkdir -p ./bin
	g++   $(S).c++ $(CPP_VERSION) $(CPP_FLAGS) $(CPP_LIBS) -o ./bin/$(S)

.PHONY: all build install clean uninstall
