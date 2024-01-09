#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
// les structures : 
   typedef struct{
    int jj;
    int mm;
    int aa;
   }date;
   typedef struct{
    char marque[15];
    char type[15]; //touristique ou commerciale
    int puissance;
    date ddm;
    char moteur[15];
    int numarticle;
    int prix ;
    int chiffre;
    }voiture;

    typedef struct{ 
    int cin_client;
    int num_matricul;
    date ddl;
    int duree;
     }location;
     
    typedef struct{
    int cin;
    char prenom[20];
    char nom[20];
    date ddn;
    int cpostal;
    char ville[15];
    int num_permi;
    int telephone;
    }client;
