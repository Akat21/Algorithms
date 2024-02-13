all: compile link

compile:
	gcc -c Sort/BubbleSort.c Sort/SelectionSort.c Sort/QuickSort.c LinkedLists/LinkedList.c main.c

link:
	gcc -o main BubbleSort.o SelectionSort.o QuickSort.o LinkedList.o main.o

clean:
	rm -f *.o main