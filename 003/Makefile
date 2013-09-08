number: createdir main.o fun.o
	g++ build/main.o build/fun.o -o build/number
main.o: main.cpp fun.h
	g++ -c main.cpp -o build/main.o
fun.o:  fun.o
	g++ -c fun.cpp -o build/fun.o
createdir:
	-mkdir build
run:   number
	./build/number
clean:
	-rm -rf build
