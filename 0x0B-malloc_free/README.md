# Malloc free

## Resources

>> * concepts on malloc free[here](https://alx-intranet.hbtn.io/concepts/62)
>> * Resource one :[malloc & free - quick overview.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/a094c90e7f466bbeaa49cb24c8f04e7f27aaad41.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20220406%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20220406T080843Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=433b02780a5830d215580e9441fe8f93d194829887d0c3779d2b40f3fd2e6aec)
>> * Resource two: [Dynamic memory allocation in C - malloc calloc realloc free](https://www.youtube.com/watch?v=xDVC3wKjS64)

### Files

* 0-create_array.c - function that creates an array of chars, and initializes it with specific char
* 1-strdup.c - Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.

>> * The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.
>> * On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

* 2-str_concat.c - concatenates two strings

>> * The returned pointer should point to a newly allocated space in memory which contains the contents of s1, followed by the contents of s2, and null terminated
>> * if NULL is passed, treat it as an empty string
>> * The function should return NULL on failure

* 3-alloc_grid.c - returns a pointer to a 2 dimensional array of integers
* 4-free_grid.c - frees a 2 dimensional grid previously created by your alloc_grid function.
* 100-argstostr.c - concatenates all the arguments of your program.
* 101-strtow. - splits a string into words.

>> * Each element of this array should contain a single word, null-terminated
>> * The last element of the returned array should be NULL
>> * Words are separated by spaces
