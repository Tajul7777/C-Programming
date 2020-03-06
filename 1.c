#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x;
   scanf("%d",&x);
   int num;
   int pos=0;
   int neg=0;
   while(x>0){
    scanf("%d",&num);

    if(num>0){
    pos=pos+1;
    }
    else if(num<0){
        neg=neg+1;
    }
    x--;
   }
   printf("%d %d",pos,neg);
    return 0;
}
