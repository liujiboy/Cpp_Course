all:  test1 test2 test3 test4 test5

test1: createdir Test1/Test1/main.cpp
	g++ Test1/Test1/main.cpp -o build/Test1
test2: createdir Test2/Test2/main.cpp
	g++ Test2/Test2/main.cpp -o build/Test2
test3: createdir Test3/Test3/main.cpp
	g++ Test3/Test3/main.cpp -o build/Test3
test4: createdir Test4/Test4/main.cpp
	g++ Test4/Test4/main.cpp -o build/Test4
test5: createdir Test5/Test5/main.cpp
	g++ Test5/Test5/main.cpp -o build/Test5
test6: createdir Test6/Test6/main.cpp
	g++ Test6/Test6/main.cpp -o build/Test6
test7: createdir Test7/Test7/main.cpp
	g++ Test7/Test7/main.cpp -o build/Test7
run1:	test1
	./build/Test1
run2:	test2
	./build/Test2
run3:	test3
	./build/Test3
run4:	test4
	./build/Test4
run5:	test5
	./build/Test5
run6:	test6
	./build/Test6
run7:	test7
	./build/Test7
createdir:
	-mkdir build
clean:
	-rm -rf build
