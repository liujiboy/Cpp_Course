SRC=ArrayList/ArrayList
CPP:=$(SRC)/*.cpp
all:  ArrayList
ArrayList: createdir $(CPP) 
	g++ -c $(SRC)/ArrayList.cpp -o build/ArrayList.o
	g++ -c $(SRC)/main.cpp -o build/main.o	
	g++ build/main.o build/ArrayList.o -o build/ArrayList
run:	ArrayList
	./build/ArrayList
createdir:
	-mkdir build
clean:
	-rm -rf build
