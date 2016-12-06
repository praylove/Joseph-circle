objects = init.o main.o printOrder.o

a: $(objects)
	gcc -g -o a $(objects) 
$(objects): circle.h

.PHONY: clean
clean:
	rm a *.o
