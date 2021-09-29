//
// Created by User on 29/09/2021.
//
#include <stdio.h>
#include "fonctions.h"
#include "exercices.h"
#define DIX 10

void exercice1()
{
    int a = 0, b = 0;
    printf("Saisissez deux entiers :");
    scanf("%d %d", &a, &b);
    printf("Le plus grand des deux entiers est %d", GetMax(a, b));
}

void exercice2()
{
    int a = 0;
    saisirEntier(a);
}

void exercice3()
{
    int longueur = 0, largeur = 0;
    longueur = saisirEntier();
    largeur = saisirEntier();
    printf("Le perimetre fait %d et l'aire fait %d", calculPerimetre(longueur, largeur), calculAire(longueur, largeur));
}

void exercice4()
{
    int a = 0, b = 3;
    a = saisirEntier();
    printf("%d est un multiple de 3 est vrai (1) et faux (0) : %d", a, multiple(a,b));
    if(a>DIX)
    {
        printf("\nL'entier saisi est aussi plus grand que 10");
    }
    else
    {
        printf("\nL'entier saisi n'est pas plus grand que 10");
    }
}

void exercice5()
{
    int a = 0, b = 0, c = 0;
    do
    {
        a = saisirEntier();
        b = saisirEntier();
        c = saisirEntier();
    }
    while ((a<0 || a>20)||(b<0 || b>20)||(c<0 || c>20));
    printf("Votre moyenne est de %d", moyenne(a,b,c));
}

void exercice6()
{
    int classe = 0, eleve = 0, totalEleve = 0;
    classe = saisirEntier();
    for(int a=0; a<(classe); a++)
    {
        printf("le nombre d'eleve dans cette classe est de");
        scanf("%d", &eleve);
        totalEleve += eleve;
    }
    printf("Il y a %d d'eleve dans l'ecole", totalEleve);
}