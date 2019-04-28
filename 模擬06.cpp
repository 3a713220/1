#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int i;
 for(i=1; i<=100; i++)
 if(i%7==0) printf("%3d,", i);
 printf("\n");
 system("pause");
 return 0;
}
