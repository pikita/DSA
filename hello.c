
#include <stdio.h>

int main(){

char parola[] = "ciaone";

int i;
for (i = 0; ; i++) {
    printf("%d %c\n", i, parola[i]);

    if (parola[i] == '\0'){
        printf("parola è lungo: %d\ncompreso il \\%d\n", i+1, parola[i]);
        break;
    } 
}

printf("%s \n%d\n", parola, i);

int j;
char flag;
for (j = 0; j < i; j++, i--) {
    flag = parola[j];
    parola[j] = parola[i-1];
    parola[i-1] = flag; 
    printf("%d %c\n", i-1, parola[j]);
}

printf("%s \n", parola);

return 0;
}

