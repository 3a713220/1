#include <stdio.h>
#include <stdlib.h>
int main(void)
{
 int coin;
 int ten, five, one;
 int thousand, hundred;
 printf("請輸入十圓硬幣有幾個?:");
 scanf("%d", &ten);
 printf("請輸入五圓硬幣有幾個?:");
 scanf("%d", &five);
 printf("請輸入壹圓硬幣有幾個?:");
 scanf("%d", &one);
 coin=10*ten+5*five+1*one;
 printf("\n總共收您 %d元硬幣\n", coin);
 printf("要換給您千元鈔票 %d張\n", thousand=coin/1000);
 printf("要換給您百元鈔票 %d張\n", hundred=coin%1000/100);
 printf("不足百元的零錢退給您 %d元\n", coin%1000%100);
 system("pause");
 return 0;
}
