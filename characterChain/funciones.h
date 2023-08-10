#ifndef CHARACTERCHAIN_FUNCIONES_H
#define CHARACTERCHAIN_FUNCIONES_H

//Prototipos de "String.h"
int strcmp(char* a, char* b);
void strcpy(char* a, char* b);
int strlen(char* a);
char* strcat(char* a, char* b);



//strcmp

int strcmp(char* a, char* b){
    while (*a != '\0' && *b != '\0') {
        if(*a > *b){
            return -1;
        } else if(*a < *b){
            return 1;
        }
        a++;
        b++;
    }
    if(*a == '\0' && *b == '\0'){
        return 0; //Las cadenas son iguales
    } else if(*a == '\0'){
        return -1; //La cadena a es mas corta
    }else {
        return 1;//La cadena b es mas corta
    }
}

//strcopy
void strcpy(char* a, char* b) { //Copia las cadenas
int i = 0;
    while(a[i] != '\0') {
    b[i] = a[i];
    i++;
}
    b[i] = '\0';
}

//strlen
int strlen(char* a){
    int i = 0;
    while(a[i] != '\0'){
        i++;
    }
    return i;
}

char* strcat(char* a, char* b){
    int i = 0, j = 0;
    while(a[i] != '\0'){
        i++;
    }
    while(b[j] != '\0'){
        a[i] = b[j];
        i++;
        j++;
    }
    a[i] = '\0';
    return a;
}







#endif //CHARACTERCHAIN_FUNCIONES_H
