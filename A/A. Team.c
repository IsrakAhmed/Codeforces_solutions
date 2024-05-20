#include<stdio.h>

int main(){

    int testCases,petya,vasya,tonya,total;
    int totalImplemented = 0;

    scanf("%d",&testCases);

    while(testCases--){

        scanf("%d%d%d",&petya,&vasya,&tonya);

        total = petya + vasya + tonya;

        totalImplemented += (total >= 2) ? 1 : 0;
    }

    printf("%d\n",totalImplemented);

    return 0;
}
