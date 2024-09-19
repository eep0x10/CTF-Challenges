#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
// Função para criar uma nova string juntando 5 strings
char* suspect_function() {
    // Calcula o tamanho total da nova string
    const char* str2 = "W4k3_";
    const char* str1 = "flag{";
    const char* str3 = "uP_";
    const char* str9 = "g0nn4_give_u_up!";
    const char* str5 = "_!}";
    const char* str6 = "Sl33p";
    const char* str7 = "my_d34r";
    const char* str8 = "_n3V3r";
    const char* str11 = "n3V3r_";
    const char* str10 = "g0nna_l3t_u_d0wn";
    
    const char* str4 = "S4mur41";
    size_t totalLength = strlen(str1) + strlen(str2) + strlen(str3) + strlen(str4) + strlen(str5) + 1;

    // Aloca memória para a nova string
    char* resultado = (char*)malloc(totalLength * sizeof(char));
    if (resultado == NULL) {
        perror("Error");
        exit(EXIT_FAILURE);
    }

    // Concatena as strings
    strcpy(resultado, str1);
    strcat(resultado, str2);
    strcat(resultado, str3);
    strcat(resultado, str4);
    strcat(resultado, str5);
    printf("%s\n", resultado);
    return resultado;
}

// Função de loop infinito
void loopInfinito() {
    while (1) {
        // Imprime uma mensagem a cada segundo
        //printf("[+] Hacking your mainframe...\n");
        system("clear");
        printf("[👶]\n");
        sleep(2);
        system("clear");
        printf("[👦]\n");
        sleep(2);
        system("clear");
        printf("[👨]\n");
        sleep(2);
        system("clear");
        printf("[👴]\n");
        sleep(2);
        system("clear");
        printf("[💀]\n");
        sleep(2);
    }
}

int main() {
    loopInfinito();
    suspect_function();
    return 0;
}
