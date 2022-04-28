#include <stdio.h>
#include <stdlib.h>
//obs: vetor de strings nomes de matérias calc, alg, estDados, fis, fisExp, cienMat
void weekend();
void week();

int main(){
    int option, aula;
    do{
        system("clear");
        printf("1 - Domingo\n");
        printf("2 - Segunda\n");
        printf("3 - Terça\n");
        printf("4 - Quarta\n");
        printf("5 - Quinta\n");
        printf("6 - Sexta\n");
        printf("7 - Sábado\n");
        printf("\nEntre com o dia da semana:");
        scanf("%d", &option);
        switch (option){
            case 1: weekend();
            break;
            case 2: printf("O professor de álgebra vai da aula?");
            scanf("%d", &aula);
            printf("Aula de álgebra II 8:50\n");
            week(aula, option);
            printf("O professor de cálculo vai da aula?");
            scanf("%d", &aula);
            printf("Aula de cálculo II 16:10\n");
            week(aula, option);
            break;
            case 3:  printf("O professor de física I vai da aula?");
            scanf("%d", &aula);
            printf("Aula de física I 7:00\n");
            week(aula, option);
            printf("O professor de cálculo vai da aula?");
            scanf("%d", &aula);
            printf("Aula de cálculo II 14:20\n");
            week(aula, option);
            break;
            case 4: printf("O professor de física exp vai da aula?");
            scanf("%d", &aula);
            printf("Aula de física exp 18:20\n");
            week(aula, option);
            printf("O professor de ciências dos materiais vai da aula?");
            scanf("%d", &aula);
            printf("Aula de ciências dos materiais 20:00\n");
            week(aula, option);
            break;
            case 5:  printf("O professor de estrutura de dados vai da aula?");
            scanf("%d", &aula);
            printf("Aula de estrutura de dados 14:20\n");
            week(aula, option);
            break;
            case 6: week(aula, option);
            break;
            case 7: weekend();
            break;
        }
        system("sleep 5");
    } while (option <= 7 && option >= 1);
}
void weekend(){
    printf("\nNenhum compromisso\n");
}
void week(int aula, int option){
    if(option == 6){
        printf("Estude uma matéria:\n");
    }else{
        if (aula > 0){
            printf("Entre no link: ###\n");
        }
        else{
            printf("Não vai ter aula, estude para alguma outra matéria.\n");
        }
    }
}
