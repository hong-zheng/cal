#我的第一个makefile
# $@ 目标
# $^ 所有依赖文件
# $< 第一个依赖文件
# .PHONY 后面写的目标，不论是否是最新的，强制执行
.PHONY: clean main

CC=gcc
# $(wildcard *.c) 的结果 main.c parse.c add.c sub.c mul.c
SRCS=$(wildcard *.c)  #当前目录下的所有.c文件

# main.o parse.o add.o sub.o mul.o
OBJS=$(SRCS:.c=.o) #将SRCS对应的.c换成.o

main : $(OBJS)
	# @echo $(SRCS)
	# @echo $(OBJS)
	$(CC) -o $@ $^

# %通配符
%.o : %.c
	$(CC) -c $< -o $@

clean :
	rm -rf $(OBJS)
