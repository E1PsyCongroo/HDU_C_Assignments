# 退休问题

对于这个问题，你要写一个 "退休储蓄 "计算器。我们将消除通货膨胀的影响，并使用一个 "Rate of return"表示。

 1. 创建一个名为 "retirement.c "的文件。 包括通常的头文件文件（stdlib.h和stdio.h）放在最上面。

 2. 我们将对储蓄（工作时）和支出（退休时）进行建模。事实证明，这两个模型都需要的基本信息，所以我们将建立一个结构来表示这一点。声明一个`struct _retire_info`，它有三个字段。

     1. 一个名为 "months"的int变量，表示适用的月数。
     2. 一个名为 "contribution"的double变量，表示一个月有多少美元收入（如果是负数，则支出多少）。
     3. 一个名为 "rate_of_return"的double变量，表示收益率。(我们将假设为 "扣除通货膨胀")。 

    在你声明了这个结构后，请使用typedef将 "retire_info"作为这个结构的另一个名称。

 3. 编写函数

    ```
    void retirement (int startAge,   	//in months 以月为单位
                     double initial, 	//initial savings in dollars 初始存款
                     retire_info working, //info about working		 关于工作信息
                     retire_info retired) //info about being retired 关于退休信息
    ```

    这个函数应该执行两个任务（这两个任务很相似——寻找机会将它们抽象成一个函数！）。

    首先，它应该计算你在工作期间每个月的退休账户余额。要做到这一点，你需要计算从收益中增加的账户余额（`余额 * rate_of_return`），并将其加入到当前的余额中。例如，如果你的账户有1000美元，每月有0.5%的rate of return以及100美元的收入。你将获得`1000 * 0.005 = 5`美元的利息收入。 然后你把这些钱加上每月的收支100美元，最后在账户中的余额为1105美元。

    在每个月开始的时候（在余额变化之前），你应该打印出当前的余额，其格式如下。 `"Age %3d month %2d you have $%.2lf\n"`前两个格式转换是储蓄者的年龄，单位是岁和月。第三种格式转换是账户余额,这个计算将持续到指定的月数（在"working"工作信息结构中指定的月数。）。

    其次，你应该对退休的每个月进行非常类似的计算。 这里的区别是，你将使用"retired"退休信息，而不是使用 "woking"工作信息结构中的信息。你应该打印出和上面一样的信息。

    [提示：既然你在进行非常相似的计算。想一想如何将这两部分内容抽象成一个函数。并重新使用它，而不是重写它。]

 4. 写一个主函数，计算退休假设。

    ```
    Working:
    --------
    
     Months: 489
     Per Month Savings: $1000
     Rate of Return:  4.5% per year ( 0.045/12 per month) 
    
    Retired:
    --------
    
      Months: 384
      Per Month Spending: -4000
      Rate of Return: 1% per year ( 0.01/12 per month) 
    
    Starting conditions:
    -------------------
    
       Age: 327 months (27 years, 3 months)
       Savings: $21,345
    ```

 5. 编译你的代码`gcc -o retirement -pedantic -std=gnu99 -Wall -Werror retirement.c`并测试它（我们提供了输出文件：retirement_ans.txt）。

