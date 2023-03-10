/*
 * @Author: JIANG Yilun, Kante MAMADOU Diouhe
 * @Date: 2023-01-26 08:53:57
 * @LastEditTime: 2023-03-04 22:50:03
 * @LastEditors: ThearchyHelios
 * @Description:
 * @FilePath: /TP4/calculette.c
 */
# include <stdio.h>
# include <stdlib.h>

# include "analyse_syntaxique.h"

int main(int argc, char *argv[])
{
    printf("main");
    Ast *arbre = malloc(sizeof(Ast));
    if (argc != 2)
    {
        printf("Usage : %s fichier \n", argv[0]);
        exit(1);
    }
    analyser(argv[1], arbre);
    // printf("Resultat : %d \n", resultat);
    return 0;
}