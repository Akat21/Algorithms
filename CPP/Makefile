all: compile link

compile:
	g++ -c BinaryTree/BST.cpp Other/UnionFind.cpp main.cpp

link:
	g++ BST.o main.o UnionFind.o -o main.exe

clean:
	rm -f *.o main