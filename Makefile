
CFLAG = -c -O3 -std=c++14 -pedantic

all: readParaFile particle main

readParaFile:	readParaFile.h readParaFile.cpp type.h 
	g++ $(CFLAG) readParaFile.cpp -o readParaFile.o

particle: particle.h particle.cpp type.h 
	g++ $(CFLAG) particle.cpp -o particle.o


main:	main.cpp type.h
	g++ -O3 -std=c++11 main.cpp readParaFile.o particle.o -o result

clean:
	rm *.o
