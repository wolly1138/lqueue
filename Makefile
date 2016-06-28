objects = main.o lqueue.o

test : $(objects)
	cc -o main $(objects)

#lqueue.o : lqueue.h


.PHONY : clean
clean :
	rm main $(objects)
