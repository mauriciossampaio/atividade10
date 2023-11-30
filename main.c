int main() {
    hash_table_put("chave1", "12");
    hash_table_put("chave2", "24");

    printf("Valor para chave1: %s\n", hash_table_get("chave1"));
    printf("Valor para chave2: %s\n", hash_table_get("chave2"));

    printf("A tabela contem chave1? %s\n", hash_table_contains("chave1") ? "sim" : "nao");
    printf("A tabela contem chave3? %s\n", hash_table_contains("chave3") ? "sim" : "nao");

    hash_table_remove("chave1");

    printf("A tabela contem chave1 apos a remocao? %s\n", hash_table_contains("chave1") ? "sim" : "nao");

    liberar_tabela_hash();

    return 0;
}
