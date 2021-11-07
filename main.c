#include <stdio.h>
#include <stdlib.h>

const int Nmax=20;

int main()
{

    //Declaration tableau "tab" de taille Nmax
    float tab[Nmax];
    int N=30,i,j,k,l; //Declaration de variables
    do{
    printf("La taille Max du tableau est de %d\n",Nmax);
    printf("Donnez la taille du tableau N= "); //Demande de la taille du tableau
    scanf("%d",&N);//Lecture de la taille du tableau
    }while(N>20);
    printf("Veillez remplire le tableau\n");
    //Demande de remplissage du tableau
    for (i=0; i<N;i++) {
        printf("Donner T[%d]= ",i+1);
        scanf("%f",&tab[i]);
    }
    printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");//Separateur
    printf("Affichage de tableau :\n");
    //Affichage du tableau de taille N
    for (i=0; i<N; i++) {
        printf("|| %.1f ",tab[i]);
    }
    // le tableau croissant
     printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    printf("voici le tableau trier par ordre croissant\n");

    for(i=0;i<N-1;i++)
    {
        for(j=i+1;j<N;j++)
        {
            if(tab[i]>tab[j])
            {
                  l=tab[i];
                  tab[i]=tab[j];
                  tab[j]=l;
            }
        }




    }
     for (i=0; i<N; i++) {
        printf("|| %.1f ",tab[i]);}




    return 0;
}
