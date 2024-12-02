
#include <stdio.h>

typedef struct
{
    char *nome;
    int costo;
} Menu;


int main(){
/*
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
*/
int number = 42;
    
// Pointer declaration and initialization
int *ptr = &number;
    
// Double pointer declaration
int **doublePtr = &ptr;
    
    // Printing values and addresses
printf("Value of number: %d\n", number);
printf("Address of number: %p\n", (void*)&number);
printf("Value of ptr (address it points to): %p\n", (void*)ptr);
printf("Value pointed to by ptr: %d\n", *ptr);
printf("Address of ptr itself: %p\n", (void*)&ptr);
printf("Value pointed to by doublePtr: %p\n", (void*)*doublePtr);
printf("Value pointed to by dereferencing doublePtr twice: %d\n", **doublePtr);
    


long int array[] = {1, 2, 3, 4};
long int *arrayPtr = array;
printf("puntatore dell'array: %p\n", array);
printf("puntatore dell'array: %p\n", array+1);// Traversing array using pointer arithmetic
for(int i = 0; i < 4; i++) {
    printf("Element %d: %ld >>indirizzo: %p\n", i, *(arrayPtr + i), &arrayPtr[i]);
    // arrayPtr + i calculates the address of the i-th element
    // *(arrayPtr + i) dereferences that address to get the value
}

Menu item1;
item1.nome= "Culunrgiones";
item1.costo= 23;

printf("elemento del menu %s\n", item1.nome);
//printf("elemento del menu %s\n", *item1.nome);
printf("elemento del menu %d\n", sizeof(item1));
printf("elemento del menu %c\n", item1.nome[0]);
printf("elemento del menu %c\n", 65);


Menu menuPizzeriaDaAie[10];
int counter = 0;

do {
    int scelta;
    printf("cosa vuoi fare?\n");
    printf("1) Inserisci una pizza nel menu\n");
    printf("2) Elimina una pizza\n");
    printf("3) Guarda il menu\n");
    scanf("%d", &scelta);
    while ((getchar()) != '\n');
    printf("scelta: %d\n ", scelta);

    switch (scelta)
    {
    case 1:
        inserisciPizza(menuPizzeriaDaAie, &counter);
        printf("%d\n",counter);
        break;
    
    default:
        break;
    }
} while (getchar() != 'q');


return 0;
}

void inserisciPizza(Menu menu[],int *count){ 
    (*count)++;
    printf("sono in inserisci pizza e count vale: %d\n", *count);
}
