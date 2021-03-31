#****** make  --> 编译当前工程
#****** make lib  -->生成静态库
#****** make clean-->删除当前文件夹的obj文件
#****** make clib -->删除库文件及其obj文件
exe:main.c show/show.c
	gcc $^ -Llib/ -ltest -o $@
	@echo "/***********************/\n"
	@echo "exe built successfully!!\n"
	@echo "/***********************/\n"
.PHONY:clean clib lib
lib:
	cd lib && make
clean:
	rm -rf *.o exe show/*.o
	@echo "/********************************/\n"
	@echo "*.o && exe deleted successfully!!\n"
	@echo "/********************************/\n"
clib:
	cd lib && make clib && make clean
	@echo "/*********************************/\n"
	@echo "lib.a && *.o deleted successfully!!\n"
	@echo "/*********************************/\n" 
