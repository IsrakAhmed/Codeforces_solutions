#include<stdio.h>
#include<string.h>

int searchChar(char ch,char *temp){

    int size = strlen(temp);

    int i;
    for(i = 0; i < size; i++){
        if(ch == temp[i]){
            return 1;
        }
    }

    return 0;
}

int checkDistinctCharacters(char *name){

    char temp[100] = "";

    int size = strlen(name);
    int i,j;
    int count = 0;
    j = 0;

    for(i = 0; i < size; i++){
        char tempChar = name[i];
        if(!searchChar(tempChar,temp)){
            count++;
            temp[j] = tempChar;
            j++;
        }
    }

    return count;
}

int main(){

    char name[100];
    scanf("%s",name);

    int count = checkDistinctCharacters(name);

    if(count % 2 == 0){
        printf("CHAT WITH HER!\n");
    }

    else{
        printf("IGNORE HIM!\n");
    }

    return 0;
}
