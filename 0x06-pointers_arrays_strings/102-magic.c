#include <stdio.h>

int main(void)
{
int n;
int a[5];
int *p;

<<<<<<< HEAD
a[2] = 1024;
=======
a[2] = 61024;
>>>>>>> 1cc8efba2081d1f5d559573de76089111d7bfc0a
p = &n;
/*
* write your line of code here...
* Remember:
* - you are not allowed to use a
* - you are not allowed to modify p
* - only one statement
* - you are not allowed to code anything else than this line of code
*/
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
