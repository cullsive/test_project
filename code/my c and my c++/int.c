#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include "code.h"
#include <ctype.h>
#include <time.h>


int ft_atoi(char* del){
    int i = 0; 
    int resultat = 0; 
    int sign = 1; 
    while(del[i] == ' ' || (del[i] >= 9 && del[i] <= 13))
    i++; 
    if(del[i] == '-' || del[i] - '+') {
        if(del[i] == '-')
        del[i] = -1 ; 
        i++; 
    }

    while(del[i] >= '9' && del[i] <= '13'){
        resultat = resultat * 10 + (del[i] == '-'); 
    }
     
    return resultat * sign; 
}



int ft_strcmp(char* l, char* n){
    int i = 0; 
    while(l[i] != '\0' && n[i] != '\0' && l[i] == n[i]){
        i++; 
    }
    return (l[i] - n[i]); 
}


char* ft_strcpy(char* name , char* lora){
    int i = 0; 
    while(lora[i] != '\0'){
        name[i] = lora[i]; 
        i++; 
    }
    name[i] = '\0'; 
    return name; 
}

int ft_strlen(char* lora){
    int i = 0; 
    while(lora[i] != '\0'){
        i++;
    }
    return i; 
}


void ft_putstr(char *str){
    int  i = 0; 
    while(str[i] != '\0'){
        write(1, &str[i],1); 
        i++; 
    }
}





// int ft_atoi(char *str)
// {
//     int i = 0;
//     int sign = 1;
//     int result = 0;

//     while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
//         i++;

//     if (str[i] == '-' || str[i] == '+')
//     {
//         if (str[i] == '-')
//             sign = -1;
//         i++;
//     }

//     while (str[i] >= '0' && str[i] <= '9')
//     {
//         result = result * 10 + (str[i] - '0');
//         i++;
//     }

//     return result * sign;
// }



// //-----------------------------------------------------


// int ft_strcmp(char *s1, char *s2)
// {
//     int i = 0;

//     while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
//         i++;

//     return (s1[i] - s2[i]);
// }



// //----------------------------------------------

// char *ft_strcpy(char *dest, char *src)
// {
//     int i = 0;
//     while (src[i] != '\0')
//     {
//         dest[i] = src[i];
//         i++;
//     }
//     dest[i] = '\0';
//     return dest;
// }







// //------------------------------------------------

// void ft_putstr(char* str){
//     int i = 0;  
//     while(str[i] != '\0'){
//         write(1,&str[i],1); 
//         i++; 
//     }
// }

// //----------------------------------------------------


// int ft_strlen(char *str)
// {
//     int i = 0;
//     while (str[i] != '\0'){
//         i++;
//     }
        
//     return i;
// }



// // ----------------------------------------------------

// void max(int nb){
//     if(nb == -2147483648){
//         write(1, "-2147483648", 11); 
//         return; 
//     }
//      if(nb < 0){
//         write(1, "-",1); 
//         nb = -nb; 
//     }if(nb >= 10){
//         max(nb / 10); 
//     }
//             char c = '0' + ( nb % 10); 
//          write(1 , &c , 1); 
// }





// //------------------------------------------

// void ft_printf(void){
//     int nb1 = 0; 
//     int nb2; 

//     while(nb1 <= 98){
//         nb2 = nb1 + 1 ; 
//         while(nb2 <= 99){
//             char a1  = '0' + (nb1 / 10); 
//             char a  = '0' + (nb1 % 10); 
//             char b1 = '0' + (nb2 / 10); 
//             char b = '0' + (nb2 % 10); 

//             write(1, &a1 , 1);  
//             write(1, &a , 1); 
//             write(1, " " , 1); 
//             write(1, &b1 , 1);  
//             write(1, &b , 1);

//             if(nb1 != 98){
//                 write(1, ", ", 2); 
//             }
//             nb2++; 
//         }
//         nb1++; 
//     }
// }









// //----------------------------------------------

// void fr(void){
//     char lera = '0'; 
//     char mora ; 
//     char para; 

//     while(lera <= '7'){
//         mora = lera + 1;  
//         while(mora <= '8'){
//             para = mora + 1; 
//             while(para <='9'){
//                 write(1, &lera, 1);
//                 write(1, &mora, 1);
//                 write(1, &para, 1);
//                 if (lera != '7')
//                     write(1, ", ", 2);
//                 para++; 
//             }
//             mora++;
//         }
//         lera++; 
//     }
// }



// //----------------------------------------------





// void ft_is_negative(int n)
// {
//     if (n < 0)
//         write(1, "N", 1);
//     else
//         write(1, "P", 1);
// }


// //----------------------------------------------

// void lara(void){
//     char n = '0'; 
//     while(n <= '9'){
//         write(1, &n , 1); 
//         n++; 
//     }
// }

// //----------------------------------------------

// void la(void){
//     char c = 'a'; 
//     while(c <= 'z'){
//         write(1 , &c , 1); 
//        c++; 
//     }
// }

// //----------------------------------------------


// //----------------------------------------------

// void print_number(int nb){
//     char tens = '0' + (nb / 10); 
//     char ones = '0' + (nb % 10); 
//     if(nb >= 10){
//         write(1 , &tens, 1); 
        
//     }
//      write(1, &ones, 1);
// }

//----------------------------------------------

int main(void){


// char name [50]; 
// int age = 0; 
// char recuperation[200]; 
; 
// agee(&age , "\nentre votre age : ",recuperation,sizeof(recuperation)); 

// you(name , sizeof(name),"\nentre votre nom : ", 3);


// printf("\nboujours madame monsieur : %s vous avez  maintenant : %d ans et vous etes : %s\n",name , age , social(age , 18)); 


// int age = 10; 

// while(age <= 99){


// char a = '0' + (age / 10);
// char b = '0' + (age % 10);


// write(1, &a, 1);
// write(1, &b, 1 );

// write(1 , " " , 1);

//     age++; 
// }





// char name [10] = {'l', 'o' , 'r' , 'a'}; 
// int i = 0; 
// while(i < 4){
//     write(1,&name[i],1); 
//     write(1 , " ", 1); 
    
//     i++; 
// }


// char name [] = {'l', 'o' , 'r' , 'a'}; 
// int i = 0; 
// while(i < 4){
//     write(1,&name[i],1); 
    
//     i++; 
// }


// char lettre []  = "cullsive"; 
// char *p = lettre; 


// while(*p){
//     write(1 , p , 1); 
//     write(1 , " : ", 3); 
    
    
//     int lot = *p; 

//     char tens = '0' + (lot / 10); 
//     char tenss = '0' + (lot / 10 %10); 
//     char ones = '0' + (lot % 10); 

//     write(1 , &tens,1); 
//     write(1 , &tenss,1); 
//     write(1, &ones, 1); 

//     write(1 , "\n",1); 
//     p++; 
// }










// char name[] = "cullsive"; 
// int i = 0; 

// while(name[i] != '\0'){
//     write(1, &name[i], 1); 
//     write(1 , " : " , 3); 
//     write(1, "0", 1);
//     write(1, "\n", 1);
    

//     i++; 
//



































// liste* l = nouvelle_liste("myname" , 0); 

// int nb = 1; 

// for(int i = 0; i < nb ; i++){
// ajouter_utilisateur(l); 
// }

// affiche(l); 
// sauvegarder(l,"laz.txt"); 
// libre(l); 
// printf("\nle libre good\n"); 













































































char name [] = "lora"; 

ft_putstr(name); 




























































































































































































/////////---------------------priject c----------------------------


// char app[50]; 

// while(1){

// printf("\nvoulez vous reelement ouvrire l'app (y,n) : "); 
// fgets(app,sizeof(app),stdin); 
// app[strcspn(app,"\n")] = '\0'; 
 

// if(strcmp("y",app) == 0){
//    printf("\nouverture encours..");
//    puts("\n"); 
//    for (int i = 0; i <= 100; i += 10) {
//     printf("\r\033[1;32mProgression %-10s %d%%\033[0m", "___________" + (10 - i/10), i);
//     fflush(stdout);
//     sleep(1);
// }
// break;
// }

// else if(strcmp("n" , app) == 0){
//    printf("sortie valider fermeture de l'app\n"); 
//    exit(1); 
// }
// }

// puts("\n");
// puts("\n================ MENU DE PRINCIPALE ================");
// liste* l = nouvelle_liste("ma liste", 0 ,"l","la","le","li"); 

// int nb = 1; 
 
// printf("\n\033[7;35mEntre les imformation suivant\033[0m\n");

// agee(&nb ,"\nentre le nombre de personne a enregistre dans la base (!0) : "); 

// for(int i = 0; i < nb ; i++){
//     printf("\nPERSONNE %d\n",i + 1 ); 
//     ajouter_utilisateur(l); 
// }

// sauvegarder(l,"la.txt"); 

// printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
// //------------------------------------------------
// char rechercher [50]; 
// char press[50]; 
// char s[50]; 
// char v[50]; 
// char base[50]; 
// //------------------------------------------------
// while(1){

// puts("\n================ MENU DE BASE ================\n"); 


// printf("Entre le nom rechercher : "); 
// scanf("%49s",rechercher); 
// while(getchar() != '\n');
// cullsive* info = rechercher_nom(l , rechercher);

// if(info != NULL){
//  printf("\n\033[0;32m=======\033[0m UTILISATEUR TROUVÉ \033[0;32m=======\033[0m\n");
//  printf("Name : %s\n", info->name); 
//  printf("Age : %dans\n", info->agee); 
//  printf("Social : %s\n", social(info ->agee , 18)); 
//  printf("==================================="); 
// }

//  else if(strcmp("sortie", rechercher)== 0){
//    puts("\n\033[0;30m---->-Lodash\033[0m");
// puts("_______________________________________________"); 
//     exit(1); 
//  }
//  else if(strcmp("ajj" , rechercher) == 0){
// puts("\n\033[0;30m---->-Lodash\033[0m");
// printf("\n\033[0;34mredirection ver le Menu principale\033[0m\n");
// puts("_______________________________________________"); 
// //...
//    puts("\n"); 
// for (int i = 0; i <= 60; i += 10) {
//     printf("\r\033[1;32mProgression %-10s\033[0m", ".........." + (10 - i/10), i);
//     fflush(stdout);
//     sleep(1);
// }
// puts("\n"); 

// puts("\n============== MENU DE PRINCIPALE ==============");

// printf("\n\033[7;35mEntre les imformation suivant\033[0m\n");

// agee(&nb ,"\nentre le nombre de personne a ajouter dans la base (!0) : "); 

// for(int i = 0; i < nb ; i++){
//     printf("\nPERSONNE %d\n",i + 1 ); 
//     ajouter_utilisateur(l); 
// }
// sauvegarder(l,"la.txt"); 
// //...
// if(nb == 0){
//    printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
// continue;
//   }

// continue;
//  }
// else if(strcmp("aff",rechercher)==0){
// puts("\n\033[0;30m---->-Lodash\033[0m");
// printf("\n\033[0;34mredirection ver le Menu aff\033[0m\n");
// puts("_______________________________________________"); 
//    puts("\n"); 
// for (int i = 0; i <= 60; i += 10) {
//     printf("\r\033[1;32mProgression %-10s\033[0m", ".........." + (10 - i/10), i);
//     fflush(stdout);
//     sleep(1);
// }
// puts("\n"); 
//   puts("\n================= MENU D'AFF =================\n"); 
  
//   printf("\nvoulez le vous affiche tout les donne de la base : "); 
//   fgets(rechercher, sizeof(rechercher) , stdin); 
//  rechercher[strcspn(rechercher, "\n")] = '\0'; 
  
//   if(strcmp("oui" , rechercher) == 0){
// puts("\n"); 
// for (int i = 0; i <= 30; i += 10) {
//     printf("\r\033[1;32mProgression %-10s\033[0m", ">>>>>>>>>>" + (10 - i/10), i);
//     fflush(stdout);
//     sleep(1);
// }
// puts("\n"); 
//     printf("\n-------------------------------------\n");
//     affiche(l); 
//     puts("\033[0;32m...\033[0m");
//     printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
//    continue;
   
//   }else if(strcmp("non" , rechercher) == 0){

//   printf("\nvoulez le vous affiche d'un dossie particulier (y,n) : "); 
//   fgets(rechercher, sizeof(rechercher) , stdin); 
//  rechercher[strcspn(rechercher, "\n")] = '\0'; 
  
//  if(strcmp("y" ,rechercher) == 0){

//    printf("\nentre le nom du dossie : "); 
//    fgets(base, sizeof(base) , stdin); 
//    base[strcspn(base, "\n")] = '\0'; 


// puts("\n"); 
// for (int i = 0; i <= 30; i += 10) {
//     printf("\r\033[1;32mProgression %-10s\033[0m", ">>>>>>>>>>" + (10 - i/10), i);
//     fflush(stdout);
//     sleep(1);
// }
// puts("\n"); 

//    recharger(base); 
//    puts("\033[0;32m...\033[0m");
//  printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
//  continue;
//  }else if(strcmp("n" ,rechercher) == 0){
//     printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n"); 
// continue;
//  }else{
//    puts("\033[0;32m...\033[0m");
//    printf("\n\033[0;31mFiche Introuvable\033[0m\n");
//  printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
//  continue;
//  }


//   }
//   else if(strcmp("sortie", rechercher) ==0){
//    printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
// continue;
//   }else{
//    puts("\033[0;31m...\033[0m");
//    printf("\n\033[0;31mFiche Introuvable\033[0m\n");
//    printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
//    continue;
//   }

//  }

// else{
// puts("\033[0;31m...\033[0m");
// printf("\n\033[0;31mAucun information trouvez a partie de se nom\033[0m\n"); 
// continue;
// }



// do{
// printf("\n\nvoulez vous plus d'info sur la sible : ");
// fgets(press,sizeof(press), stdin); 
// press[strcspn(press,"\n")] = '\0'; 


//  if(strcmp("oui" ,press)== 0){
//     printf("\n\n\033[0;33m------------------Info plus------------------\033[0m\n"); 
//  printf("\nName : %s\n", info->name); 
//  printf("Age : %dans\n", info->agee); 
// printf("Ville : %s\n",info-> villee); 
// printf("Adress : %s\n",info -> adresss); 
// printf("Numero : %s\n",info -> numeroo); 
// printf("Travaille : %s\n",info -> travaillee);
// printf("Social : %s\n", social(info ->agee , 18)); 

//   printf("\nvoulez vous sauvegarder la rechercher (y,n) : "); 
//  fgets(s,sizeof(s),stdin); 
// s[strcspn(s,"\n")] = '\0'; 

//  if(strcmp("y",s) == 0){

//    printf("\nentre le nom de la sauvegarder : "); 
//    fgets(v, sizeof(v), stdin); 
//    v[strcspn(v, "\n")] = '\0'; 
//    if(strcmp("sortie" , v) == 0){
//          printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
//       break;
//    }
// puts("\n"); 
// for (int i = 0; i <= 30; i += 10) {
//     printf("\r\033[1;32mProgression %-10s\033[0m", "<<<<<<<<<<" + (10 - i/10), i);
//     fflush(stdout);
//     sleep(1);
// }
// puts("\n");
// save(l,v); 
// puts("\033[0;32m...\033[0m");
// printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
//  break;
//  }else if(strcmp("n",s) == 0){
//    printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
//    break;
//  }else{
// printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
// break;
//  }
//    break;  
//  }
 
//  else if(strcmp("non" , press) == 0){


//   printf("\nvoulez vous sauvegarder la rechercher (y,n) : "); 
//  fgets(s,sizeof(s),stdin); 
// s[strcspn(s,"\n")] = '\0'; 

//  if(strcmp("y",s) == 0){

//    printf("\nentre le nom de sauvegarder : "); 
//    fgets(v, sizeof(v), stdin); 
//    v[strcspn(v, "\n")] = '\0'; 
//          if(strcmp("sortie" , v) == 0){
// printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
//       break;
//    }
// puts("\n"); 
// for (int i = 0; i <= 30; i += 10) {
//     printf("\r\033[1;32mProgression %-10s\033[0m", "<<<<<<<<<<" + (10 - i/10), i);
//     fflush(stdout);
//     sleep(1);
// }
// puts("\n");
//    save2(l,v); 
// puts("\033[0;32m...\033[0m");
// printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
//  break;
//  }else if(strcmp("n",s) == 0){
//    printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
//    break;
//  }

//     printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n"); 
//   break;
//  }
 
//  else if(strcmp("sortie", press)== 0){
//  printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
//     break;
//  }
 
//  else{
//   puts("\033[0;31m...\033[0m");
//   printf("\n\033[0;31mreponse nom valider\033[0m\n"); 
//   printf("\n\033[0;34mredirection ver le Menu de base\033[0m\n");
//   break;
//  }


// }while(1); 


// puts("\n\033[0;30m---->-Lodash\033[0m");
// puts("_______________________________________________"); 

// }
/////////---------------------priject c----------------------------
printf("\n\n"); 
return 0; 
}



