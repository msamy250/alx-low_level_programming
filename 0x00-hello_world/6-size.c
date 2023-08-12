#include <stdio.h>
/**
 *main : prints the size of various types on the computer it is compiled and run on
 *Return:0
*/
int main(void)
{
printf("Size of a char: %zu bytes\n", sizeof(char));
printf("Size of a int: %zu bytes\n", sizeof(int));
printf("Size of a long: %zu bytes\n", sizeof(long));
printf("Size of a long long: %zu bytes\n", sizeof(long long));
printf("Size of a float: %zu bytes\n", sizeof(float));

return (0);

}
