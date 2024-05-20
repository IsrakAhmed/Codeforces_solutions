#include<stdio.h>

int distancE(int students,int swaps,int rival1,int rival2);

int main(){
    int testCase,distance;

    scanf("%d",&testCase);

    while(testCase != 0){
        int students,swaps,rival1,rival2;

        scanf("%d%d%d%d",&students,&swaps,&rival1,&rival2);

        if(rival1 < rival2){
            int temp = rival1;
            rival1 = rival2;
            rival2 = temp;
        }

        distance = distancE(students,swaps,rival1,rival2);

        printf("%d\n",distance);

        testCase--;
    }

    return 0;
}

int distancE(int students,int swaps,int rival1,int rival2){
    int distance;

    while(swaps != 0){

        if(rival1 == students && rival2 == 1){
            break;
        }

        if(rival1 != students && students - rival1 >= rival2 - 1){
            rival1++;
        }

        else if(rival2 != 1 && students - rival1 <= rival2 - 1){
            rival2--;
        }

        swaps--;
    }

    distance = rival1 - rival2;

    return distance;
}
