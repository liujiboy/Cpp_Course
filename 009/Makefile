all:  test1 test2 test3

test1: createdir Test1/Test1/main.cpp
	g++ Test1/Test1/main.cpp -o build/Test1
test2: createdir Test2/Test2/main.cpp
	g++ Test2/Test2/main.cpp -o build/Test2
test3: createdir Test3/Test3/main.cpp
	g++ Test3/Test3/main.cpp -o build/Test3
run1:	test1
	./build/Test1
run2:	test2
	./build/Test2
run3:	test3
	./build/Test3
createdir:
	-mkdir build
clean:
	-rm -rf build
