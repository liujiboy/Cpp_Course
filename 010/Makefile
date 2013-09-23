createdir:
	-mkdir build
debug:  createdir main.cpp
	g++ -DDEBUG main.cpp -o build/debug 
	./build/debug
release: createdir main.cpp
	g++ main.cpp -o build/release
	./build/release
clean:
	-rm -rf build
