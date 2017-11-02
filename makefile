compile : stat.c
	gcc stat.c
run : compile
	./a.out
clear :
	rm *.o
	rm *~
