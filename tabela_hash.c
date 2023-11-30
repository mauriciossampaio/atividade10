char* hash_table_get(char* chave) {
    int indice = hash(chave);
    return tabela_hash[indice];
}
void hash_table_put(char* chave, char* dado) {
    int indice = hash(chave);
    tabela_hash[indice] = strdup(dado);
}
int hash_table_contains(char* chave) {
    int indice = hash(chave);
    return tabela_hash[indice] != NULL;
}
void hash_table_remove(char* chave) {
    int indice = hash(chave);
    free(tabela_hash[indice]);
    tabela_hash[indice] = NULL;
}
void liberar_tabela_hash() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        free(tabela_hash[i]);
        tabela_hash[i] = NULL;
    }
}
