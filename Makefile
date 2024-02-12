all: compile link

compile:
	gcc -c C/BubbleSort.c C/SelectionSort.c main.c

link:
	gcc -o main BubbleSort.o SelectionSort.o main.o

clean:
	rm -f *.o main