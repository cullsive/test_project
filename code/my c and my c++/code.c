#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include "code.h"
#include <ctype.h>
#include <time.h>

#define valider "\033[7;32m"
#define nonvalider "\033[7;31m"
#define colorfin "\033[0m"
#define compteur "\033[1;35m"
#define leader "\033[7;36m"

/////////////////////////////////////////////////////////////////



void you(char* myname , int mysizeof , const char* myprompt , int mytime ){
   do{
      printf("%s",myprompt); 
      fgets(myname, mysizeof, stdin);
      myname[strcspn(myname , "\n")] = '\0'; 

      if(strlen(myname) >= mytime){
      break;
      }else{
         printf("\nnon valider entre inferieux a 3 contenue : %s \n", myname); 
      }
   }while(1); 
}



// void agee(int* age , const char* prompt , char* recuperation){
// while(1){
//    printf("%s",prompt); 
//    if(scanf("%d",age) != 1){
   
//    if(fgets(recuperation , sizeof(recuperation), stdin) != 0){
//       printf("\nnon valider vous devez entre des nombres et pas des lettre : %s",recuperation); 
//    }else{
//       while(getchar() != '\n');
//    }

//    }else{
//       while(getchar() != '\n'); 
//       break;
//    }
// }
// }


void agee(int *age, const char *prompt, char *recuperation, size_t rec_size) {
    while (1) {
        printf("%s", prompt);

        if (scanf("%d", age) != 1) {

            // Lire la ligne invalide
            if (fgets(recuperation, rec_size, stdin) != NULL) {
                printf("\nnon valider, vous devez entrer un nombre et pas : %s\n", recuperation);
            } else {
                // Si fgets échoue, vider le buffer
                while (getchar() != '\n');
            }

        } else {
            // Nettoyer le buffer après un nombre valide
            while (getchar() != '\n');
            break;
        }
    }
}



char* social(int entre , int conparatif){
return(entre >= conparatif) ? "vous etes adult" : "vous etes mineur"; 
}






















































































































//////////////////////////////////////////////////////////////

// void you(char *myname, int mysizeof, const char *myprompt, int mytime)
// {

//    do
//    {
//       printf("%s", myprompt);      
//       fgets(myname, mysizeof, stdin);
//       myname[strcspn(myname, "\n")] = '\0';

//       if (strlen(myname) >= mytime)
//       {
//          break;
//       }
//       else
//       {
//          printf(nonvalider "\nnon valider\n" colorfin);
//       }
//    } while (1);
// }

// void agee(int *age, char *prompt)
// {
//    while (1)
//    {
//       printf("%s", prompt);
//       if (scanf("%d", age) != 1)
//       {
//          printf(nonvalider "\nnon valider\n" colorfin);
//          while (getchar() != '\n')
//             ;
//       }
//       else
//       {
//          while (getchar() != '\n')
//             ;
//          break;
//       }
//    }
// }

// char *social(int lo, int max)
// {
//    return (lo >= max) ? valider "l'utilisateur est adult" colorfin : nonvalider "l'utilisateur est mineur" colorfin;
// }

// void isal(int *lettre, int *chiffre, int *espace, int *majuscull, char *me)
// {
//    for (int i = 0; me[i] != '\0'; i++)
//    {
//       if (isalpha(me[i]))
//       {
//          (*lettre)++;
//          if (isupper(me[i]))
//          {
//             (*majuscull)++;
//          }
//       }
//       else if (isdigit(me[i]))
//       {
//          (*chiffre)++;
//       }
//       else if (isspace(me[i]))
//       {
//          (*espace)++;
//       }
//    }
// }







/////////////////////////////////////////////////////////////////////////

// liste* nouvelle_liste(const char *nom, int age)
// {

//    liste *l = malloc(sizeof(liste));
//    if (!l)
//    {
//       fprintf(stderr, "malloc non valider\n");
//       exit(EXIT_FAILURE);
//    }

//    l->tete = NULL;
//    l->taille = 0;
//    strcpy(l->nom, nom);
//    l->age = age;

//    return l;
// }

// void ajouter_utilisateur(liste *l)
// {
//    char name[50];
//    int age;

//    you(name, sizeof(name), "\nentre votre nom : ", 3);
//    agee(&age, "\nentre votre age : ");
//    ajouter_fin(l, name, age);
// }

// void ajouter_tete(liste *l, const char *lora, int x)
// {

//    cullsive *element = malloc(sizeof(cullsive));
//    if (!element)
//    {
//       fprintf(stderr, "malloc non valider\n");
//       exit(EXIT_FAILURE);
//    }

//    strcpy(element->name, lora);
//    element->agee = x;
//    element->suivant = l->tete;
//    l->tete = element;
//    l->taille++;
// }

// void ajouter_fin(liste *l, const char *lora, int x)
// {
//    cullsive *element = malloc(sizeof(cullsive));
//    if (!element)
//    {
//       fprintf(stderr, "malloc non valider\n");
//       exit(EXIT_FAILURE);
//    }

//    strcpy(element->name, lora);
//    element->agee = x;
//    element->suivant = NULL;

//    if (!l->tete)
//    {
//       l->tete = element;
//    }
//    else
//    {
//       cullsive *temp = l->tete; 
//       while(temp -> suivant != NULL){
//          temp = temp -> suivant; 
//       }
//       temp -> suivant =element; 
//    }
//    l->taille++; 
// }



// void affiche (liste* l){
//    if(!l->tete){
//       printf("rien a signale\n"); 
//       return; 
//    }else{
//       cullsive* temp = l->tete; 
//       int i = 1; 
//       while(temp != NULL){
//          printf("\n=============MENU=============\n"); 
//          printf("\nUTILISATEUR %d\n", i++); 
//          printf("\nName : %s\n",temp -> name); 
//          printf("Age : %dans\n", temp -> agee); 
//          printf("Social : %s\n",social(temp ->agee , 18)); 
//          printf("-------------------------------\n"); 
//          temp = temp -> suivant; 
//       }
//    }
// }


// cullsive* rechercher_nom(liste* l, const char* lora){

// cullsive* temp = l->tete; 

// while(temp != NULL){
//    if(strcmp(temp -> name , lora) == 0){
//       return temp; 
//    }
//    temp = temp -> suivant; 
// }
// return NULL;
// }


// void libre(liste* l){
//    cullsive* temp; 
//    while(l->tete != NULL){
//       temp = l->tete; 
//       l->tete = l->tete -> suivant; 
//       free(temp); 
//    }
//    free(l); 
// }



//--------------------------------------------------------------------------



// liste* nouvelle_liste(const char* nom , int age){

// liste* l = malloc(sizeof(liste)); 

// if(!l){
//    fprintf(stderr,"malloc no valider\n"); 
//    exit(EXIT_FAILURE); 
// }

// l->tete = NULL; 
// l->taille = 0; 
// strcpy(l -> nom , nom); 
// l ->age = age; 

// return l; 
// }



// void ajouter_utilisateur(liste* l){

// char name [50]; 
// int age = 0; 


// you(name , sizeof(name),"\nentre votre name : ",3); 
// agee(&age , "\nentre votre age : "); 

// ajouter_fin(l,name, age); 
// }


// void ajouter_tete(liste* l, const char* lora, int x){

//    cullsive* element = malloc(sizeof(cullsive)); 

//    if(!element){
//       fprintf(stderr,"malloc non valider\n"); 
//       exit(EXIT_FAILURE); 
//    }

//    strcpy(element -> name, lora); 
//    element -> agee = x; 
//    element -> suivant = l->tete; 

//    l->tete = element; 
//    l->taille++; 
// }



// void ajouter_fin(liste* l, const char* lora , int x){
//    cullsive* element = malloc(sizeof(cullsive)); 
//    if(!element){
//       fprintf(stderr,"malloc non valider\n"); 
//       exit(EXIT_FAILURE); 
//       }

//       strcpy(element -> name , lora ); 
//       element -> agee = x;
//       element -> suivant = NULL;

//       if(!l->tete){
//       l->tete = element; 
//       }else{
      
//          cullsive* temp = l->tete; 
//          while(temp -> suivant != NULL){
//             temp = temp -> suivant; 
//          }
//          temp -> suivant = element; 
//       }
//       l->taille++; 
// }




// void affiche(liste* l){

// if(!l->tete){
//    printf("rien a signale\n"); 
//    return; 
// }else{
//    cullsive* temp = l->tete; 
//    int i = 1;
//    while(temp != NULL){
//       printf("-----------------------------------\n"); 
//       printf("\nUTILISATEUR %d\n",i++); 
//       printf("\nname : %s\n",temp->name); 
//       printf("age : %d\n",temp->agee); 
//       printf("social : %s\n",social(temp->agee, 18));  
//       printf("\n-----------------------------------");
//       temp = temp -> suivant;
//    }
// }

// }


// void sauvegarder(liste* l, const char* lien){
//    FILE* fiche = fopen(lien, "w"); 
//    if(!fiche){
//       printf("fiche non valider\n"); 
//       return; 
//    }else{
       
//    cullsive* temp = l->tete; 
//    int i = 1;
//    while(temp != NULL){
//       fprintf(fiche,"-----------------------------------\n"); 
//       fprintf(fiche,"\nUTILISATEUR %d\n",i++); 
//       fprintf(fiche,"name : %s\n",temp->name); 
//       fprintf(fiche,"age : %d\n",temp->agee); 
//       fprintf(fiche,"social : %s\n",social(temp->agee, 18)); 
//       fprintf(fiche,"\n-----------------------------------");
//       temp = temp -> suivant; 
//    }
      
//    }
//    fclose(fiche); 
// }

// void libre(liste* l){
//    cullsive* temp;  
//    while (l->tete != NULL)
//    {
//    temp = l->tete;
//    l->tete = l->tete -> suivant; 
//    free(temp); 
//    }
//    free(l); 
// }




































































































































































































































































































///////--------------------project-------------------------------
//////////////////////////////////////////////////////////////////////////

// liste* nouvelle_liste(const char* nom , int age, const char* ville, const char* adress , const char* numero, const char* travaille){
//     liste* l = malloc(sizeof(liste));
//     if(!l){
//         fprintf(stderr,"\nmalloc non valider\n");
//         exit(EXIT_FAILURE);
//     }

//     l->tete = NULL;
//     l->taille = 0;
//     strcpy(l->nom, nom);
//     strcpy(l->ville, ville);
//     strcpy(l->adress, adress);
//     strcpy(l->numero, numero);
//     strcpy(l->travaille,travaille);
//     l->age = age;
//     return l;
// }

// void ajouter_utilisateur(liste* l){
//     char name[50];
//     char ville[50];
//     char adress[50];
//     char numero[50];
//     char travaille[50];
//     int age ;

//     you(name , sizeof(name),"\nentre votre nom : ",3);
//     agee(&age,"\nentre votre age : ");
//     you(ville , sizeof(ville),"\nentre votre ville : ",3);
//     you(adress , sizeof(adress),"\nentre votre adress : ",3);
//     you(numero , sizeof(numero),"\nentre votre numero : ",3);
//     you(travaille , sizeof(travaille),"\nentre votre travaille : ",3);
//     ajouter_fin(l, name , age , ville , adress , numero , travaille);
// }

// void ajouter_tete(liste* l, const char* lora, int x , const char* villez, const char* adressz , const char* numeroz, const char* travaillez ){
//     cullsive* element = malloc(sizeof(cullsive));
//     if(-!element){
//         fprintf(stderr,"\nmalloc non valider\n");
//         exit(EXIT_FAILURE);
//     }

//     strcpy(element -> name, lora);
//     strcpy(element->villee, villez);
//     strcpy(element->adresss, adressz);
//     strcpy(element->numeroo, numeroz);
//     strcpy(element->travaillee,travaillez);
//     element -> agee = x;
//     element -> suivant = l-> tete;
//     l->tete = element;
//     l->taille++;
// }

// void ajouter_fin(liste* l, const char* lora, int x , const char* villez, const char* adressz , const char* numeroz, const char* travaillez ){
//     cullsive* element = malloc(sizeof(cullsive));
//     if(!element){
//         fprintf(stderr,"\nmalloc non valider\n");
//         exit(EXIT_FAILURE);
//     }
//     strcpy(element -> name , lora);
//     strcpy(element->villee, villez);
//     strcpy(element->adresss, adressz);
//     strcpy(element->numeroo, numeroz);
//     strcpy(element->travaillee,travaillez);
//     element -> agee = x;
//     element -> suivant = NULL;
//     if(!l->tete){
//         l->tete = element;
//     }
//     else{
//         cullsive* temp = l -> tete;
//         while(temp -> suivant != NULL){
//             temp = temp -> suivant;
//         }
//         temp -> suivant = element;
//     }
//     l->taille++;
// }

// void affiche(liste* l){
//     if(!l->tete){
//         printf("\nrien a signale\n");
//         return;
//     }
//     else{
//         cullsive* temp = l->tete;
//         int i = 1;
//         while(temp != NULL){

//          printf("\nPERSONNE : %d\n", i++);
//          printf("\nName : %s\n",temp -> name);
//          printf("Age : %dans\n",temp -> agee);
//          printf("Ville : %s\n",temp -> villee);
//          printf("Adress : %s\n",temp -> adresss);
//          printf("Numero : %s\n",temp -> numeroo);
//          printf("Travaille : %s\n",temp -> travaillee);
//          printf("Social : %s\n",social(temp -> agee, 18));
//          printf("-------------------------------------\n");
//             temp = temp -> suivant;
//         }
//     }
// }

// cullsive* rechercher_nom(liste* l, const char* lora){
//     cullsive* temp = l->tete;
//     while(temp != NULL){
//         if(strcmp(temp -> name, lora) == 0){
//             return temp;
//         }
//         temp = temp -> suivant;
//     }
//     return NULL;
// }

// void sauvegarder(liste* l, const char* lien){

//     FILE* fiche = fopen(lien , "w");
//     if(!fiche){
//         fprintf(stderr,valider"\nfiche non valider\n"colorfin);
//         return;
//     }
//     else{
//     cullsive* temp = l->tete;
//     int i = 1;
//     while(temp != NULL){
//         fprintf(fiche,"\n-----------------------------------------------\n");
//         fprintf(fiche,"\nPERSONNE %d\n",i++);
//         fprintf(fiche,"\nName %s\n",temp -> name);
//         fprintf(fiche,"Age %dans\n",temp -> agee);
//         fprintf(fiche,"Ville : %s\n",temp -> villee);
//         fprintf(fiche,"Adress : %s\n",temp -> adresss);
//         fprintf(fiche,"Numero : %s\n",temp -> numeroo);
//         fprintf(fiche,"Travaille : %s\n",temp -> travaillee);
//         fprintf(fiche,"Sacial %s\n",social(temp -> agee , 18));
//         temp = temp -> suivant;
//         fprintf(fiche,"\n-----------------------------------------------\n");
//     }
//     }

//     fclose(fiche);

// }

// void save(liste* l , const char* nomFichier){
//     char vraiNom[1024];
//  snprintf(vraiNom, sizeof(vraiNom), "%s.txt", nomFichier);
//  FILE* fiche = fopen(vraiNom, "a");
//  if(!fiche){
//        fprintf(stderr, "Erreur : impossible d'ouvrir %s\n", vraiNom);
//         return;
//  }
//   else{
//     cullsive* temp = l->tete;
//     int i = 1;
//     while(temp != NULL){
//         fprintf(fiche,"\n-----------------------------------------------\n");
//         fprintf(fiche,"\nPERSONNE %d\n",i++);
//         fprintf(fiche,"\nName %s\n",temp -> name);
//         fprintf(fiche,"Age %dans\n",temp -> agee);
//         fprintf(fiche,"Ville : %s\n",temp -> villee);
//         fprintf(fiche,"Adress : %s\n",temp -> adresss);
//         fprintf(fiche,"Numero : %s\n",temp -> numeroo);
//         fprintf(fiche,"Travaille : %s\n",temp -> travaillee);
//         fprintf(fiche,"Sacial %s\n",social(temp -> agee , 18));
//         temp = temp -> suivant;
//         fprintf(fiche,"\n-----------------------------------------------\n");

//     }
//     }

//  fclose(fiche);
// }

// void save2(liste* l , const char* nomFichier){
//     char vraiNom[1024];
//  snprintf(vraiNom, sizeof(vraiNom), "%s.txt", nomFichier);
//  FILE* fiche = fopen(vraiNom, "a");
//  if(!fiche){
//        fprintf(stderr, "Erreur : impossible d'ouvrir %s\n", vraiNom);
//         return;
//  }
//   else{
//     cullsive* temp = l->tete;
//     int i = 1;
//     while(temp != NULL){
//         fprintf(fiche,"\n-----------------------------------------------\n");
//         fprintf(fiche,"\nPERSONNE %d\n",i++);
//         fprintf(fiche,"\nName : %s\n",temp -> name);
//         fprintf(fiche,"Age : %dans\n",temp -> agee);
//         fprintf(fiche,"Sacial : %s\n",social(temp -> agee , 18));
//         temp = temp -> suivant;
//         fprintf(fiche,"\n-----------------------------------------------\n");

//     }
//     }

//  fclose(fiche);
// }

// void recharger(const char* lienn ){
//      char vraiNom[1024];
//  snprintf(vraiNom, sizeof(vraiNom), "%s.txt", lienn);
//     FILE* fiche = fopen(lienn , "r");
//     if(!fiche){
//         fprintf(stderr,"\n\033[0;31mFiche Introuvable\033[0m\n");
//         return;
//     }

//     char lire[1024] = {0};
//     while(fgets(lire , sizeof(lire),fiche) != NULL){
//      printf("%s",lire);
//     }
//     fclose(fiche);
// }

// //---------------------------------------------------------
// cullsive* rechercher_nom(liste* l, const char* lora) {
//     cullsive* temp = l->tete;

//     while (temp != NULL) {
//         if (strcmp(temp->name, lora) == 0) {
//             return temp; // trouvé
//         }
//         temp = temp->suivant;
//     }

//     return NULL; // pas trouvé
// }
// //---------------------------------------------------------

// void libre(liste* l){
//     cullsive* temp;
//     while(l->tete != NULL){
//         temp = l->tete;
//         l->tete = l->tete -> suivant;
//         free(temp);
//     }
//     free(l);
// }

// finish
