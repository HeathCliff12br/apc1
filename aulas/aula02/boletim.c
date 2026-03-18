#include <stdio.h>


int main() {

    printf("===================\n");
    printf("   Boletim de notas\n");
    printf("===================\n");
    printf("Cod  Disciplinas   A1     A2     A3     MF\n");

    int codigo_disciplina;
    float nota_a1;
    float nota_a2;
    float nota_a3;
    float media_final;

    
    codigo_disciplina = 118;
    nota_a1 = 10.2f;
    nota_a2 = 2.3f;
    nota_a3 = 6.0f;
    media_final = 5.9f;

    printf("%-4i %-13s %5.1f %5.1f %5.1f %5.1f\n",
           codigo_disciplina, "APC1", nota_a1, nota_a2, nota_a3, media_final);

    
    codigo_disciplina = 257;
    nota_a1 = 6.7f;
    nota_a2 = 7.8f;
    nota_a3 = 8.9f;
    media_final = 9.0f;

    printf("%-4i %-13s %5.1f %5.1f %5.1f %5.1f\n",
           codigo_disciplina, "Matematica", nota_a1, nota_a2, nota_a3, media_final);

    
    codigo_disciplina = 300;
    nota_a1 = 6.7f;
    nota_a2 = 7.8f;
    nota_a3 = 8.9f;
    media_final = 9.0f;

    printf("%-4i %-13s %5.1f %5.1f %5.1f %5.1f\n",
           codigo_disciplina, "Calculo", nota_a1, nota_a2, nota_a3, media_final);

    return 0;
}


