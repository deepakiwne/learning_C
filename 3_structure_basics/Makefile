iexecutable: main.o person.o 
	gcc main.o person.o  -o myapp.out

object: person.c main.c
	gcc -c person.c
	gcc -c main.c

clean:
	rm -rf *.o myapp.out
