#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>
#include"structure2.0.c"
// les fonctions :    
    void ajoute_client (client *x , int n ){
    	int i;
    	if(x){
    	   for(i=0;i<n;i++){
    	   	  printf("\nAJOUTER LE CLIENT N°%d  ...................\n",i+1);
              printf("\n\t\tNom           : ");
              scanf("%s",(x+i)->nom);
              fflush(stdin);
              
              printf("\n\t\tPrenom        : ");
              scanf("%s",(x+i)->prenom);
              
              printf("\n\t\tNumero de telephone        : ");
              scanf("%d",&(x+i)->telephone);
              
              printf("\n\t\tVille         : ");
              scanf("%s",(x+i)->ville);
              
              printf("\n\t\tCode postal   : ");
              scanf("%d",&(x+i)->cpostal);
              
              printf("\n\t\tN° permis  : ");
              scanf("%d",&(x+i)->num_permi);
              
              printf("\n\t\tNum. CIN      : ");
              scanf("%d",&(x+i)->cin);
              do{
              printf("\n\t\tDate de naissance (jj/mm/aaaa)  : ");
              scanf("%d/%d/%d",&(x+i)->ddn.jj,&(x+i)->ddn.mm,&(x+i)->ddn.aa); 
			  }while((x+i)->ddn.jj<1||(x+i)->ddn.jj>31||(x+i)->ddn.mm<1||(x+i)->ddn.mm>12||(x+i)->ddn.aa<1930||(x+i)->ddn.aa>2030);
		     }
		   }
		   else{
    	   puts("Erreur d'allocation!!!");
	    }
   }
//......................................................
   void ajoute_voiture (voiture *v , int n ){
    	int i;
    	if(v){
    	   for(i=0;i<n;i++){
    	   	  printf("\nAJOUTER LA VOITURE DU CLIENT N°%d  ...................\n",i+1);
              printf("\n\t\tLA MARQUE           : ");
              scanf("%s",(v+i)->marque);
              fflush(stdin);
              
              printf("\n\t\tType        : ");
              scanf("%s",(v+i)->type);
              
              printf("\n\t\tPuissance      : ");
              scanf("%d",&(v+i)->puissance);
              
              printf("\n\t\tmoteur         : ");
              scanf("%s",(v+i)->moteur);
              
              printf("\n\t\tNumarticle   : ");
              scanf("%d",&(v+i)->numarticle);
              
              printf("\n\t\tPrix  : ");
              scanf("%d",&(v+i)->prix);
              
              printf("\n\t\tChiffre d affaire : ");
              scanf("%d",&(v+i)->chiffre);
              
              do{
              printf("\n\t\tDate de mise en circulation (jj/mm/aaaa)  : ");
              scanf("%d/%d/%d",&(v+i)->ddm.jj,&(v+i)->ddm.mm,&(v+i)->ddm.aa); 
              }while((v+i)->ddm.jj<1||(v+i)->ddm.jj>31||(v+i)->ddm.mm<1||(v+i)->ddm.mm>12||(v+i)->ddm.aa<1930||(v+i)->ddm.aa>2030);
		     }
		   }
		   else{
    	   puts("Erreur d'allocation!!!");
	    }
   }
//......................................................
   void ajoute_location (location *a , int n ){
    	int i;
    	
    	if(a){
    	   for(i=0;i<n;i++){
    	   	  printf("\nAJOUTER LA LOCATION DU CLIENT N°%d  ...................\n",i+1);
              printf("\n\t\tCin_client      : ");
              scanf("%d",&(a+i)->cin_client);
              
              printf("\n\t\tNum_matricul   : ");
              scanf("%d",&(a+i)->num_matricul);
              
               printf("\n\t\tla duree   : ");
               scanf("%d",&(a+i)->duree);
               
              do{
              printf("\n\t\tDate de mise en circulation (jj/mm/aaaa)  : ");
              scanf("%d/%d/%d",&(a+i)->ddl.jj,&(a+i)->ddl.mm,&(a+i)->ddl.aa); 
              }while((a+i)->ddl.jj<1||(a+i)->ddl.jj>31||(a+i)->ddl.mm<1||(a+i)->ddl.mm>12||(a+i)->ddl.aa<1930||(a+i)->ddl.aa>2030);
		     
		   }}else{
    	   puts("Erreur d'allocation!!!");
	    }
} 
//......................................................
void ajouter_client_a_pos(client *x,int p,int n) {	
  int i;
  x = (client*)realloc(x,(n+1)*sizeof(client));
  for (i = n ; i > p; i--) {
    *(x+i) = *(x+i-1);
  }
     printf("\nAJOUTER LE NOUVEAU CLIENT N°%d  ...................\n",p);
              printf("\n\t\tNom           : ");
              scanf("%s",(x+p)->nom);
              fflush(stdin);
              
              printf("\n\t\tPrenom        : ");
              scanf("%s",(x+p)->prenom);
              
              printf("\n\t\tNumero de telephone        : ");
              scanf("%d",&(x+p)->telephone);
              
              printf("\n\t\tVille         : ");
              scanf("%s",(x+p)->ville);
              
              printf("\n\t\tCode postal   : ");
              scanf("%d",&(x+p)->cpostal);
              
              printf("\n\t\tNÂ° permis  : ");
              scanf("%d",&(x+p)->num_permi);
              
              printf("\n\t\tNum. CIN      : ");
              scanf("%d",&(x+p)->cin);
              do{
              printf("\n\t\tDate de naissance (jj/mm/aaaa)  : ");
              scanf("%d/%d/%d",&(x+p)->ddn.jj,&(x+p)->ddn.mm,&(x+p)->ddn.aa); 
			  }while((x+p)->ddn.jj<1||(x+p)->ddn.jj>31||(x+p)->ddn.mm<1||(x+p)->ddn.mm>12||(x+p)->ddn.aa<1930||(x+p)->ddn.aa>2030);    
}
//......................................................
void ajouter_voiture_a_pos(voiture *v ,int p,int n) {	
  int i;
  v = (voiture*)realloc(v, (n+1)*sizeof(voiture));
  for (i = n ; i > p; i--) {
    *(v+i) = *(v+i-1);
  }
    printf("\nAJOUTER LA NOUVELLE VOITURE A LA POSITION %d  ...................\n",p);
              printf("\n\t\tLA MARQUE           : ");
              scanf("%s",(v+p)->marque);
              fflush(stdin);
              
              printf("\n\t\tType        : ");
              scanf("%s",(v+p)->type);
              
              printf("\n\t\tPuissance      : ");
              scanf("%d",&(v+p)->puissance);
              
              printf("\n\t\tmoteur         : ");
              scanf("%s",(v+p)->moteur);
              
              printf("\n\t\tNumarticle   : ");
              scanf("%d",&(v+p)->numarticle);
              
              printf("\n\t\tPrix  : ");
              scanf("%d",&(v+p)->prix);
              do{
              printf("\n\t\tDate de mise en circulation (jj/mm/aaaa)  : ");
              scanf("%d/%d/%d",&(v+p)->ddm.jj,&(v+p)->ddm.mm,&(v+p)->ddm.aa); 
              }while((v+p)->ddm.jj<1||(v+p)->ddm.jj>31||(v+p)->ddm.mm<1||(v+p)->ddm.mm>12||(v+p)->ddm.aa<1930||(v+p)->ddm.aa>2030);
		     
}
//......................................................
void ajouter_location_a_pos(location *a ,int p,int n) {	
  int i;
  a = (location*)realloc(a, (n+1)*sizeof(location));
  for (i = n ; i > p; i--) {
    *(a+i) = *(a+i-1);
  }
    printf("\nAJOUTER LA NOUVEAU LOCATION A LA POSITION %d  ...................\n",p);
               printf("\nAJOUTER LA LOCATION DU CLIENT NÂ°%d  ...................\n",i+1);
              printf("\n\t\tCin_client      : ");
              scanf("%d",&(a+p)->cin_client);
              
              printf("\n\t\tNum_matricul   : ");
              scanf("%d",&(a+p)->num_matricul);
              
              printf("\n\t\tla duree   : ");
              scanf("%d",&(a+p)->duree);
              
              do{
              printf("\n\t\tDate de mise en circulation (jj/mm/aaaa)  : ");
              scanf("%d/%d/%d",&(a+p)->ddl.jj,&(a+p)->ddl.mm,&(a+p)->ddl.aa); 
              }while((a+p)->ddl.jj<1||(a+p)->ddl.jj>31||(a+p)->ddl.mm<1||(a+p)->ddl.mm>12||(a+p)->ddl.aa<1930||(a+p)->ddl.aa>2030);   
}
//......................................................
void afficherToutesLesVoitures(voiture *v , int n) {
 int i;
printf("Liste de toutes les voitures :\n");
for (i = 0; i < n; i++) {
printf("Voiture %d : %s de type %s\n", i+1, (v+i)->marque,(v+i)->type);
}
}
//......................................................
void afficherVoituresParMarque(voiture *v , int n, char marque[]) {
 int i;
printf("Liste des voitures de marque %s :\n\n", marque);
for (i = 0; i < n; i++) {
if (strcmp((v+i)->marque, marque) == 0) {
printf("Voiture %d : %s \n", i+1,(v+i)->marque);
}
}
}
//......................................................
void afficherVoituresPartype(voiture *v , int n, char type[]) {
 int i;
printf("Liste des voitures de type %s :\n\n", type);
for (i = 0; i < n; i++) {
if (strcmp((v+i)->type,type) == 0) {
printf("Voiture %d : %s \n", i+1,(v+i)->type);
}
}
}
//......................................................
void afficherToutesLesclients(client *x , int n) {
 int i;
printf("Liste des clients :\n\n");
for (i = 0; i < n; i++) {
printf("Client %d : %s %s de CIN : %d dans %s \n", i+1,(x+i)->nom,(x+i)->prenom,(x+i)->cin,(x+i)->ville);
}
}
//......................................................
void afficherclientsParville(client *x , int n, char ville[]){
 int i;
printf("Liste des clients de ville %s :\n\n", ville);
for (i = 0; i < n; i++) {
if (strcmp((x+i)->ville, ville) == 0) {
printf("client %d du %s \n", i+1,(x+i)->ville);
}
}
}
//......................................................
void afficherclientsParCin(client *x , int n, int cin) {
 int i;
printf("Liste des clients de cin %d :\n\n", cin);
for (i = 0; i < n; i++) {
if ((x+i)->cin==cin) {
printf("client : %s %s  de cin : %d \n",(x+i)->nom,(x+i)->prenom,(x+i)->cin);
}
}
}
//......................................................
void afficherlocationParnom(client *x,location*a,int n,char nom[]) {
 int i;
printf("Liste des location par nom :\n\n");
for (i = 0; i < n; i++) {
if (strcmp((x+i)->nom ,nom) ==0){
printf("Location de %s est de cin %d et de num_immatriculation %d le %d/%d/%d \n",(x+i)->nom,(a+i)->num_matricul,(x+i)->cin,(a+i)->ddl.jj,(a+i)->ddl.mm,(a+i)->ddl.aa);
}
}
}
//......................................................
void afficherlocationParvoiture(voiture *v,location*a,int n,int matricule) {
 int i;
printf("Liste des location par voiture :\n\n");
for (i = 0; i < n; i++) {
if ((v+i)->numarticle==matricule){
printf(" location de cin %d est de num_immatriculation %d le %d/%d/%d \n",(a+i)->cin_client,(a+i)->num_matricul,(a+i)->ddl.jj,(a+i)->ddl.mm,(a+i)->ddl.aa);
}
}
}
//......................................................
void afficherlocationParduree(location*a,int n,int duree) {
 int i;
printf("Liste des location par duree :\n\n");
for (i = 0; i < n; i++) {
if ((a+i)->duree==duree){
printf(" location de cin %d est de num_immatriculation %d le %d/%d/%d \n",(a+i)->cin_client,(a+i)->num_matricul,(a+i)->ddl.jj,(a+i)->ddl.mm,(a+i)->ddl.aa);
}
}
}
//......................................................
void afficherlocationParddl(location*a,int n,date d) {
 int i;
printf("Liste des location par date de location :\n\n");
for (i = 0; i < n; i++) {
if ((a+i)->ddl.jj==d.jj&&(a+i)->ddl.mm==d.mm&&(a+i)->ddl.aa==d.aa){
printf(" location de cin %d est de num_immatriculation %d le %d/%d/%d \n",(a+i)->cin_client,(a+i)->num_matricul,(a+i)->ddl.jj,(a+i)->ddl.mm,(a+i)->ddl.aa);
}
}
}
//......................................................
void afficher_clients_par_lettre(client *x, int n, char lettre[]) {
	int i;
	printf("Liste des clients par la lettre %s :\n\n",lettre);
    for (i = 0; i < n; i++) {
        if(strcmp((x+i+0)->nom ,lettre ) == 0 ) {
        printf("Client %d : %s %s de CIN : %d dans %s \n", i+1,(x+i)->nom,(x+i)->prenom,(x+i)->cin,(x+i)->ville);
       }
		}
		}
//......................................................
// Fonction pour supprimer un client par CIN
void supprimerClient( client *x, int n,int CIN) {
  int i,j;  
  // Rechercher le client dans le tableau
  for (i = 0; i < n ; i++) {
    if ((x+i)->cin == CIN) {
      // Decaler les elements du tableau
      for (j = i; j <n - 1; j++) {
        *(x+j) = *(x+j+1);
      }
      // Reduire la taille du tableau
      n=n-1;
      x = (client*)realloc(x,n * sizeof(client));
      printf("Client supprime !\n");
  }
  }
  printf("Le client avec le CIN %d n'a pas ete trouve !\n", CIN);
}
//......................................................
// Fonction pour supprimer une voiture par num d'immatriculation
void supprimerVoiture(voiture *v, int *n,int m) {
  int i,j;
  // Rechercher la voiture dans le tableau
  for (i = 0; i <*n; i++) {
    if ((v+i)->numarticle == m) {
      // Decaler les elements du tableau
      for (j = i; j <*n - 1; j++) {
        *(v+j) = *(v+j+1);
      }
      // Reduire la taille du tableau
      *n=*n-1;
      v = (voiture*)realloc(v,*n * sizeof(voiture));

      printf("Voiture supprime  !\n");
      
    }
  }
  printf("La voiture avec le num d'immatriculation %s n'a pas ete trouve !\n", m);
}
//......................................................
void supprimercontact(client *x, int n,char v[]) {
  int i,j;
  for (i = 0; i <n; i++) {
    if (strcmp((x+i)->ville,v)==0){
      for (j = i; j <n - 1; j++) {
        *(x+j) = *(x+j+1);
      }
      n=n-1;
      x = (client*)realloc(x,n * sizeof(client));

      printf("suppression avec succes !\n");
      
    }
  }
     printf("Le contact %s n'a pas ete trouve !\n", v);
  }
//......................................................
void afficherlechiffre(voiture *x,location*a,int n, int mat) {
 int i;
for (i = 0; i < n; i++) {
if ((x+i)->numarticle==mat){
	(x+i)->chiffre = (a+i)->duree * (x+i)->prix + (x+i)->chiffre;
}
}
printf("le chiffre de %s de %d est %d ",(x+i)->marque,mat,(x+i)->chiffre);
}
//......................................................
void compter_contacts_ville(client *x, int n,char v[]) {
int i, compt = 0;
for (i = 0; i<n; i++) {
if (strcmp((x+i)->ville , v) == 0) {
compt++;
}
}
printf("le nombre de contact de %s est : %d",v,compt);
}
//......................................................
void afficherlesinformationchiffre(voiture *x,location*a,int n) {
 int i,max;
 max=(x+i+0)->chiffre;
 printf("les informatins  de la voiture ayant realise le chiffre le plus eleve :\n\n");
for (i = 0; i < n; i++) {
if (max<(x+i+0)->chiffre){
	max=(x+i)->chiffre ;
	printf(" %s de type %s\n", i+1, (x+i)->marque,(x+i)->type);
}
}
}
