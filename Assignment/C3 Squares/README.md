# 翻译代码

1. 完成squares.c中的任务，其中步骤1-4已经完成，通过阅读注释，完成各个函数的编写。
2. 我们提供了squares_test.o，它有一个主函数该函数接受四个命令行参数（size1,x_offset,y_offset,size2)。并使用这些参数调用你的squares函数，你可以编译你的代码并使其与这个对象文件连接起来以制作程序。

```
	gcc -o squares -Wall -Werror -std=gnu99 -pedantic squares.c squares_test.o
```

3. 然后你可以像这样运行它`./squares 4 1 2 3`这将会调用你的square函数，其中`size1=4`、`x_offset=1`、`y_offset=2`、`size2=3`。

4. 应该会产生类似的输出

   ```
   ####
   #  #
   #***
   #*#*
    ***
   ```

5. 我们提供了三个文件，显示三个输入的正确结果。文件以ans\_开头（然后在其名称中包含参数值。用\_分隔)

> For windows
>
> gcc -o squares.exe -Wall -Werror -std=gnu99 -pedantic squares.c main.o
>
> 在命令行中使用.\squares.exe 4 1 2 3即可
