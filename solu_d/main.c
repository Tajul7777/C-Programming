#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testCase;
    scanf("%d",&testCase);

    while(testCase>0){
        int a1,d1,k1;
        int a2,d2,k2;
        scanf("%d%d%d",&a1,&d1,&k1);
        scanf("%d%d%d",&a2,&d2,&k2);

        int sum=0;
        sum=((k1/2)*((2*a1)+(k1-1)*d1))+((k2/2)*((2*a2)+(k2-1)*d2));
        printf("%d",sum);
    }
    return 0;
}
