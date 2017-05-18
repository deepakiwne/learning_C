executable: main.o add.o multiply.o
	gcc main.o add.o multiply.o -o myapp.out

object: add.c multiply.c main.c
	gcc -c add.c
	gcc -c main.c
	gcc -c multiply.c

clean:
	rm -rf *.o myapp.out
