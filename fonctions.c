//
// Created by User on 29/09/2021.
//
#include <stdio.h>
#include "fonctions.h"

int GetMax(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int saisirEntier()
{
    int a=0;
    printf("Saisissez un entier :");
    scanf("%d", &a);
    return a;
}

int calculAire(int longueur, int largeur)
{
    return longueur*largeur;
}

int calculPerimetre(int longueur, int largeur)
{
    return 2*(largeur+longueur);
}

int multiple(int a, int b)
{
    if(a%b==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int moyenne(int a, int b, int c)
{
    return (a+b+c)/3;
}

