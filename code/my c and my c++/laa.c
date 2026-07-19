#include <stdio.h>
#include <math.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#include <ctype.h>

/////////////////////////////////////////////////////////////////////////
void isal(int *lettre, int *chiffre, int *espace, int *majuscull, char *text);
void you(char *myname, int mysizeof, const char *myprompt, int mytime);
char *social(int foryou, int forget);
void agede(int *my, char *prompt);
void fr(int *mass, int la);
////////////////////////////////////////////////////////////////////////

typedef struct
{

  char name[30];
  char genre[30];
  int age;
  char adress[50];
  char ville[50];
  int lettre;
  int chiffre;
  int espace;
  int majuscull;
} cullsive;

int main(void)
{

  FILE *me = fopen("C:\\Users\\culls\\OneDrive\\Desktop\\la.txt", "w");

  if (me == NULL)
  {
    printf("fiche non valider");
    return 1;
  }

  int nb = 1;
  cullsive *culls = malloc(nb * sizeof(cullsive));

  if (culls == NULL)
  {
    printf("non valider");
    return 1;
  }

  ////////////////////edition 1 entre utilisateur/////////////////////////

  for (int i = 0; i < nb; i++)
  {

    printf("\nUTILISATEUR %d\n", i + 1);
    culls[i].lettre = 0;
    culls[i].chiffre = 0;
    culls[i].espace = 0;
    culls[i].majuscull = 0;

    
    you(culls[i].genre, sizeof(culls[i].genre), "\nentre votre genre : ", 3);
    isal(&culls[i].lettre, &culls[i].chiffre, &culls[i].espace, &culls[i].majuscull, culls[i].genre);


    you(culls[i].name, sizeof(culls[i].name), "\nentre votre nom : ", 3);
    isal(&culls[i].lettre, &culls[i].chiffre, &culls[i].espace, &culls[i].majuscull, culls[i].name);


    agede(&culls[i].age, "\nentre votre age : ");


    while (getchar() != '\n');

    you(culls[i].adress, sizeof(culls[i].adress), "\nentre votre adress : ", 3);
    isal(&culls[i].lettre, &culls[i].chiffre, &culls[i].espace, &culls[i].majuscull, culls[i].adress);


    you(culls[i].ville, sizeof(culls[i].ville), "\nentre votre ville : ", 3);
    isal(&culls[i].lettre, &culls[i].chiffre, &culls[i].espace, &culls[i].majuscull, culls[i].ville);
  }

  ////////////////////edition 2 resultat/////////////////////////

  for (int i = 0; i < nb; i++)
  {
    fprintf(me, "\n");
    fprintf(me, "\n----------\033[0;33m------#DRATY %d------\033[0m-----------\n", i + 1);
    fprintf(me, "\nPERSONNE %d\n", i + 1);
    fprintf(me, "\ngenre : %s\n", culls[i].genre);
    fprintf(me, "name : %s\n", culls[i].name);
    fprintf(me, "age : %d ans\n", culls[i].age);
    fprintf(me, "adress : %s\n", culls[i].adress);
    fprintf(me, "ville : %s\n", culls[i].ville);
    fprintf(me, "social : %s\n", social(culls[i].age, 18));

    fprintf(me, "\n");

    fprintf(me, "\033[0;35m-----------------------------------------\n\033[0m");
    fprintf(me, "\033[0;36m\nDONNE UTLISATEUR TP %d\n\033[0m", i + 1);
    fprintf(me, "\nlettre : %d\n", culls[i].lettre);
    fprintf(me, "espace : %d\n", culls[i].espace);
    fprintf(me, "chiffre : %d\n", culls[i].chiffre);
    fprintf(me, "majuscull : %d\n", culls[i].majuscull);
    fprintf(me, "\033[0;35m\n-----------------------------------------\n\033[0m");

    fprintf(me, "\n");

    fprintf(me, "                \n....**....\n");
  }

  free(culls);
culls= NULL;

  ///// pas dedant EX--?///////////////////////////////

  // srand(time(NULL) + getpid());

  // int min = 10;
  // int max = 90;

  // int nb = (rand() % (max - min  + 1 )) + min;
  // int nb1 = (rand() % (max - min  + 1 )) + min;
  // int nb2 = (rand() % (max - min  + 1 )) + min;

  // int tab [3]= {nb ,nb1,nb2};

  // fr(tab, 3);

  // for(int i = 0; i < 3;i++){
  //   printf("%d ", tab[i]);
  // }

  ///// pas dedant EX--?///////////////////////////////

  fclose(me);

  return 0;
}

////////char fonction ///////////////

void you(char *myname, int mysizeof, const char *myprompt, int mytime)
{
  do
  {
    printf("%s", myprompt);
    fgets(myname, mysizeof, stdin);
    myname[strcspn(myname, "\n")] = '\0';

    if (strlen(myname) >= mytime)
    {
      break;
    }
    else
    {
      printf("\033[0;31m\nnon valider\n\033[0m");
    }

  } while (1);
}
/////////// int fonction///////////
void agede(int *my, char *prompt)
{
  while (1)
  {
    printf("%s", prompt);
    if (scanf("%d", my) != 1)
    {
      printf("\033[0;31m\nnon valider\n\033[0m");
      while (getchar() != '\n')
        ;
    }
    else
    {
      break;
    }
  }
}

////////////// fonstion social ////////////

char* social(int foryou, int forget)
{
  return (foryou >= forget) ? "\033[0;32mla personne est adult\033[0m" : "\033[0;31mla personne est mineur\033[0m";
}

////////////fonction lettre //////////////

void isal(int *lettre, int *chiffre, int *espace, int *majuscull, char *text)
{

  for (int i = 0; text[i] != '\0'; i++)
  {

    if (isalpha(text[i]))
    {
      (*lettre)++;
      if (isupper(text[i]))
        (*majuscull)++;
    }
    else if (isspace(text[i]))
    {
      (*espace)++;
    }
    else if (isdigit(text[i]))
    {
      (*chiffre)++;
    }
  }
}

////////////fonction rand//////////////

void fr(int *mass, int la)
{
  for (int i = la - 1; i > 0; i--)
  {

    int j = rand() % (i + 1);
    int mot = mass[i];
    mass[i] = mass[j];
    mass[j] = mot;
  }
}