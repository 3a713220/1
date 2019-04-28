#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int i, total=0;
 for(i=100; i>=1; i--)
  total+=i;
 printf("100+99+98+....+1=%d\n",total);
 system("pause");
 return 0;
}
