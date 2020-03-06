#include <stdio.h>
#include <stdlib.h>

int main()
{int sum=1;
int n;
scanf("%d",&n);
int i=1;
 printf("%d",sum);
while(n>1){
        printf(",");
    sum=sum+2;
    n--;
    printf("%d",sum);
}

    return 0;
}
