#include <stdio.h>

/*int main() {
    printf("Hello, World!\n");
    return 0;
}*/

/*Exo1*/
/*int main(){
    int a = 0, b = 0;
    printf("le premier entier est ");
    scanf("%d", &a);
    printf(" et le deuxieme est ");
    scanf("%d", &b);
    if(a<b)
    {
        printf("Le plus grand entier est %d", b);
    }
    else
    {
        printf("Le plus grand entier est %d", a);
    }
    return 0;
}*/

/*Exo2*/
/*int main(){
    int largeur = 0, longueur = 0;
    printf("la largeur fait");
    scanf("%d", &largeur);
    printf("la longueur fait");
    scanf("%d", &longueur);
    printf("Le perimetre du rectangle fait %d et l'aire du rectangle fait %d", 2*(longueur+largeur), longueur*largeur);
    return 0;
}*/

/*Exo3*/
/*int main(){
    int a = 0;
    printf("Saissisez un entier :");
    scanf("%d", &a);
    if(a%3==0)
    {
        printf("Cet entier est un multiple de 3");
    }
    else
    {
        printf("Cet entier n'est pas un multiple de 3");
    }
    if(a>=10)
    {
        printf("\nCet entier est superieur ou egal a 10");
    }
    else
    {
        printf("\nCet entier n'est pas superieur ou egal a 10");
    }
    return 0;
}*/

/*Exo4*/
/*int main(){
    int age = 0, etudiant = 0;
    printf("saissisez votre age :");
    scanf("%d", &age);
    printf("\nEtes vous etudiant ? Ecrivez 1 pour oui et 2 pour non");
    scanf("%d", &etudiant);
    if(age > 0 && age < 12)
    {
        printf("\nle tarif est de 4 euros");
    }
    if(age >= 12 && age <= 17 || age >= 65 || etudiant == 1 && age <= 27)
    {
        printf("\nle tarif est de 6 euros");
    }
    if(age > 17 && age < 65 && etudiant == 2)
    {
        printf("\nle tarif est de 9 euros");
    }
    return 0;
}*/

/*Exo5*/
/*int main(){
    int numero = 0;
    printf("Tapez le numero de votre boisson");
    scanf("%d", &numero);
    if(numero==1)
    {
        printf("Biere Blonde");
    }
    else if(numero==2)
    {
        printf("Biere Brune");
    }
    else if(numero==3)
    {
        printf("Picon Biere");
    }
    else if(numero==10)
    {
        printf("Irish Coffee");
    }
    else if(numero==11)
    {
        printf("Vin Chaud");
    }
    else
    {
        printf("Erreur - Le numero indique ne correspond a aucune boisson");
    }
    return 0;
}*/

/*Exo6*/
/*int main(){
    float noteUne = 0.0f, noteDeux = 0.0f, noteTrois = 0.0f, moyenne = 0.0f ;
    do
    {
        printf("\nEntrez votre premiere note :");
        scanf("%f", &noteUne);
        printf("\nvotre premiere note est %f", noteUne);
        printf("\nEntrez votre deuxieme note :");
        scanf("%f", &noteDeux);
        printf("\nvotre deuxieme note est %f", noteDeux);
        printf("\nEntrez votre troisieme note :");
        scanf("%f", &noteTrois);
        printf("\nvotre troisieme note est %f", noteTrois);
    }
    while ((noteUne<0.0f || noteUne>20.0f)||(noteDeux<0.0f || noteDeux>20.0f)||(noteTrois<0.0f || noteTrois>20.0f));
    moyenne = ((noteUne + noteDeux + noteTrois) / 3.0f);
    printf("\nvotre moyenne est de : %f", moyenne);
    return 0;
}*/

/*Exo7*/
/*int main(){
    int classe = 0, eleve = 0, totalEleve = 0;
    printf("Ecrivez le nombre de classe ouverte :");
    scanf("%d", &classe);
    for(int a=0; a<(classe); a++)
    {
        printf("le nombre d'eleve dans cette classe est de");
        scanf("%d", &eleve);
        totalEleve += eleve;
    }
    printf("Il y a %d d'eleve dans l'ecole", totalEleve);
    return 0;
}*/

/*Exo8*/
/*int main()
{
    int nombre = 0;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);
    while(nombre % 2 != 0 || nombre % 7 != 0)
    {
        printf("le nombre saisi n'est ni un multiple de 2 ni de 7, recommencez : ");
        scanf("%d",&nombre);
    }
    printf("le nombre est un multiple de 2 ou de 7");
    return 0;
}*/

/*Exo9*/
/*int main()
{
    int nbpierre = 0, i = 1;
    printf("Entrez le nombre de pierres disponibles : ");
    scanf("%d", &nbpierre);
    while((i*i) % nbpierre == 0)
    {
        i = i +;
    }
    printf("il y a %d d'etages possibles", );
    return 0;
}*/

/*Exo10*/
int main()
{
    int nombre=0, somme=0, moyenne=0, nbTotal=0;
    while(nombre>0)
    {
        printf("Entrez un nombre positif (ou negatif pour arreter");
        scanf("%d", &nombre);
        somme= somme + nombre;
        nbTotal= nbTotal + 1;
    }
    moyenne=somme/nbTotal;
    printf("la moyenne est de %d", moyenne);
    return 0;
}