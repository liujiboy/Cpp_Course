hello: mkdir hello.o
	g++ build/hello.o -o build/hello
hello.o: hello.cpp
	g++ -c hello.cpp -o build/hello.o
mkdir:
	-mkdir build
run:   hello
	./build/hello
clean:
	-rm -rf build
