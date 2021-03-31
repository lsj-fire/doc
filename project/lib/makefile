all:formula/formula.c seq/seq.c
	gcc -c $^
	ar crv libtest.a *.o
	@echo "/*************************/\n"
	@echo "lib.a built successfully!!\n"
	@echo "/*************************/\n"
.PHONY:clean clib
clean:
	rm -rf *.o
clib:
	rm -rf *.a
#*******************静态库中的函数***********************
#***********int *max(int *addr,int num);****************
#***********int *min(int *addr,int num);****************
#***********int *median(int *addr,int num);*************
#***********int *ascend(int *addr,int num);*************
#***********int *descend(int *addr,int num);************
#***********float *average(int *addr,int num);**********
