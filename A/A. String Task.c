#include<stdio.h>
#include<string.h>

int main(){

    char line[100];

    scanf("%s",line);

    int i;

    for(i = 0; i < strlen(line); i++){

        if(line[i] != 'a' && line [i] != 'e' && line [i] != 'i' && line [i] != 'o' && line [i] != 'u' && line [i] != 'y'){
            if((line[i] != 'A' && line [i] != 'E' && line [i] != 'I' && line [i] != 'O' && line [i] != 'U' && line [i] != 'Y')){

                printf(".");
                int x = line[i];

                if(x >= 65 && x <= 90) x += 32;

                printf("%c",x);

            }
        }
    }

    return 0;
}
