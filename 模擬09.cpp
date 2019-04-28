#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int year;
 printf("請輸入西元年分:");
 scanf("%d", &year);
 if(year%4==0)
 if(year%100==0 && year%400!=0)
 printf("西元%d年不是閏年\n", year);
 else printf("西元%d年是閏年\n", year);
 else printf("西元%d年不是閏年\n", year);
 system("pause");
 return 0;
}
