prog: createdir main.o fun.o
	g++ build/main.o build/fun.o -o build/prog
main.o: main.cpp fun.h
	g++ -c main.cpp -o build/main.o
fun.o:  fun.cpp
	g++ -c fun.cpp -o build/fun.o
createdir:
	-mkdir build
run:   prog
	./build/prog
clean:
	-rm -rf build
