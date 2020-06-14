cc = gcc 
cflags = -g -Wall -i #后面可以跟文件的文字，文件里包含其他源或头
my_str : main.o my_str.o
	$(cc) main.o my_str.o -o $@
#.PHONY:clean
#clean:
#	rm -rf *.o my_str
