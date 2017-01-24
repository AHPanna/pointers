#include <iostream>
using namespace std;


void moy(float *somme, int *N){ // ma fonction qui calcule la moyenne

        float moyenne;
        moyenne=*somme / *N;
        cout<<"la moyenne est "<< moyenne <<endl;
    }


int main(){
    int N=20, i=1; //init Attention N a modifier pour le Nombre de note a definir.
    float somme=0, moyenne, note; //init
    for (i=1; i<=N; i++){
        cout<<"veuiller entrer la : " <<i<<"eme note"<<endl;
        cin>>note;
        somme+=note; //calcule la somme de chaque note entrées
        cout<<"la somme est : "<<somme<<endl;
    }


    float *sum = &somme; //initialisation des pointeur pour la somme
    int *num =&N; // Initialisation pour le nombre de note entrées

    moy(sum,num); //la fonction qui calcule la moyenne en mettant en parametre sum=Somme et num=N.
   return 0;
}
