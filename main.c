int main() {
    // Exemplo de uso
    hash_table_put("chave1", "valor1");
    hash_table_put("chave2", "valor2");

    printf("Valor para chave1: %s\n", hash_table_get("chave1"));
    printf("Valor para chave2: %s\n", hash_table_get("chave2"));

    printf("A tabela contém chave1? %s\n", hash_table_contains("chave1") ? "Sim" : "Não");
    printf("A tabela contém chave3? %s\n", hash_table_contains("chave3") ? "Sim" : "Não");

    hash_table_remove("chave1");

    printf("A tabela contém chave1 após a remoção? %s\n", hash_table_contains("chave1") ? "Sim" : "Não");

    liberar_tabela_hash(); // Libera a memória alocada pela tabela hash

    return 0;
}
