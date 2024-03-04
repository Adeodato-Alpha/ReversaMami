#include <stdio.h>
#include <string.h>
void swaping(char *cadena);

void swaping(char *cadena){
    int i=1;
    while(i-1 < strlen(cadena)-i){
       *(cadena + ( strlen(cadena)-i)) =*(cadena + (i-1))+*(cadena + ( strlen(cadena)-i));
       *(cadena + (i-1)) =*(cadena + ( strlen(cadena)-i))-*(cadena + (i-1));
       *(cadena + ( strlen(cadena)-i)) =-*(cadena + (i-1))+*(cadena + ( strlen(cadena)-i));
        i++;
    }
    printf("\n%s",cadena);
}
int main(){
    char cadena[100];
    printf("input: ");
    fgets(cadena, sizeof(cadena), stdin);
// Eliminar el salto de línea al final de la cadena
    cadena[strcspn(cadena, "\n")] = '\0';
    swaping(cadena);
    //printf("%s", homelo);
}
