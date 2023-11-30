#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TABLE_SIZE 99
char* tabela_hash[TABLE_SIZE];
int hash(char* chave) {
    int hash = 0;
    while (*chave) {
        hash = (hash + *chave) % TABLE_SIZE;
        chave++;
    }
    return hash;
