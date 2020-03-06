#include<stdio.h>
int main(){

int testCase;
scanf("%d",&testCase);
int party;
int numCus;
int i=0,j=1;
int cus[100];
int count=0;
int k=1;
printf("\n\n");
while(testCase>0){
    scanf("%d",&party);
    scanf("%d",&numCus);
    for(;i<party;i++){
        scanf("%d",&cus[i]);
    }printf("\n\n");
    for(i=0;i<party,j<party-1;i++,j++){
        if(cus[i]==cus[j]){
            numCus++;
        }

    }
    printf("Case %d: %d\n",k,numCus);
k++;
    testCase--;

}

return 0;}


