# argc and argv

## Resources

>> * Resource one: [Arguments to main](https://publications.gbdirect.co.uk//c_book/chapter10/arguments_to_main.html)
>> * Resource two: [argc and argv](http://crasseux.com/books/ctutorial/argc-and-argv.html)
>> * Resource three: [What does argc and argv mean?](https://www.youtube.com/watch?v=aP1ijjeZc24)
>> * Resource four: [how to compile with unused variables](https://www.google.com/webhp?q=unused+variable+C)

### Files

* 0-whatsmyname.c - write a program prints its name, followed by a new line

>> * If you rename the program, it will print the new name, without having to compile it agin
>> * You should not remove the path before the name of the program

* 1-args.c - program that prints the number of arguments passed into it

>> * Your program should print a number followed by a new line

* 2-args.c - program that prints all arguments it receives

>> * All arguments should be printed, including the first one
>> * Only print one argument per line, ending with a new line

* 3-mul.c - program that multiples two numbers

>> * Program should print the result of the multiplication can be stored in an integer
>> * You can assume that the two numbers and result of the multiplication can be stored in an integer
>> * If the program does not receive two arguments, your program should print Error,followed by a new line and return

* 4-add.c -adds positive numbers

>> * print the result, followed by a new line
>> * If no number is passed to the program, print 0 followed by a new line
>> * If one of the number contains symbols that are not digits, print Error, followed by a new line, and return 1
>> * You can assume that numbers and the addition of all the numbers can be stored in an int

* 100-change.c - prints the minimum number of coins to make change for an amount of money

>> * Usage: ./change cents
>> * where cents is the amount of cents you need to give back
>> * if the number of arguments passed to your program is not exactly 1, print Error, followed by a new line, and return 1
>> * you should use atoi to parse the parameter passed to your program
>> * If the number passed as the argument is negative, print 0, followed by a new line
>> * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
