#include <stdio.h>

int main() {
    float notas[5][5], media_aluno[5], media_classe = 0;
    char nomes[5][50], situacao[5][15];

    // Loop para receber as notas e os nomes dos 5 alunos em 5 provas diferentes
    for (int i = 0; i < 5; i++) {
        printf("Nome do aluno %d: ", i+1);
        scanf("%s", nomes[i]);

        printf("Notas do aluno %s:\n", nomes[i]);
        for (int j = 0; j < 5; j++) {
            printf("Prova %d: ", j+1);
            scanf("%f", &notas[i][j]);
        }

        // Cálculo da média aritmética das notas de cada aluno
        media_aluno[i] = (notas[i][0] + notas[i][1] + notas[i][2] + notas[i][3] + notas[i][4]) / 5.0;

        // Determinação da situação de cada aluno com base na média aritmética obtida
        if (media_aluno[i] >= 7.0) {
            sprintf(situacao[i], "Aprovado");
        } else if (media_aluno[i] >= 4.0) {
            sprintf(situacao[i], "Exame");
        } else {
            sprintf(situacao[i], "Reprovado");
        }

        // Cálculo da média da classe
        media_classe += media_aluno[i];
    }

    media_classe /= 5.0;  // Divisão da soma das médias dos alunos pela quantidade de alunos

    // Loop para imprimir as informações de cada aluno
    printf("\nNome    | Media  | Situacao\n");
    printf("---------------------------\n");
    for (int i = 0; i < 5; i++) {
        printf("%-7s | %-6.2f | %s\n", nomes[i], media_aluno[i], situacao[i]);
    }

    // Impressão da média da classe
    printf("\nMedia da classe: %.2f\n", media_classe);

    return 0;
}

