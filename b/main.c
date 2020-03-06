#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testCase;
    int sum;
    int num1,num2;
    int rev=0, reverse=0,reverse2=0;
    scanf("%d",&testCase);
    while(testCase!=0){
        scanf("%d %d",&num1,&num2);



       while (num1 != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + num1%10;
      num1      = num1/10;
   }
    while (num2 != 0)
   {
      reverse2 = reverse2 * 10;
      reverse2 = reverse2 + num2%10;
      num2      = num2/10;
   }

   sum=reverse2+reverse;

   while (sum != 0)
   {
      rev = rev * 10;
      rev = rev + sum%10;
      sum      = sum/10;
   }


     printf("%d\n",rev);
        testCase--;
        reverse2=0;
        reverse=0;
        rev=0;
    }

    return 0;
}
