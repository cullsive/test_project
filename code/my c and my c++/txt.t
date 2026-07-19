puts("\n alert (ce programe de facturation est limiter a 5 facturation a la foix a utilise inteligenment)"); 
///////////////////////////////////////////////////////
float totalpremiere= 0.0f; 
float totalpremiere2= 0.0f; 
///////////////////////////////////////////////////////
float totalfinal=0.0f;
float totalfinal2=0.0f;
//////////////////////////////////////////////////////

    // facture info 1 /////////////////////////////////////
int client1 = 0; 
char name1 [50]=""; 
int heuredetravail1= 0; 
const float Prix1 = 12.5; 
const float TVA1 = 0.08; 
float total1 = 0.0f; 
float total11= 0.0f; 


// facture info 2/*///////////////////////////////////////////////*/


int client2 = 0; 
char name2 [50]=""; 
int heuredetravail2= 0; 
const float Prix2 = 12.5; 
const float TVA2 = 0.08; 
float total2 = 0.0f; 
float total22= 0.0f; 


// decision////////////////////////////////////////////////
char decision[50]=""; 
// decision////////////////////////////////////////////////


// facture info 3/*///////////////////////////////////////////////*/
int client3 = 0; 
char name3 [50]=""; 
int heuredetravail3= 0; 
const float Prix3 = 12.5; 
const float TVA3 = 0.08; 
float total3 = 0.0f; 
float total33= 0.0f; 

// facture info 4/*///////////////////////////////////////////////*/

int client4 = 0; 
char name4 [50]=""; 
int heuredetravail4= 0; 
const float Prix4 = 12.5; 
const float TVA4 = 0.08; 
float total4 = 0.0f; 
float total44= 0.0f; 


// facture info 5/*///////////////////////////////////////////////*/

int client5 = 0; 
char name5 [50]=""; 
int heuredetravail5= 0; 
const float Prix5 = 12.5; 
const float TVA5 = 0.08; 
float total5 = 0.0f; 
float total55= 0.0f; 


// / decision////////////////////////////////////////////////
char decisionfinal[50]=""; 
// decision////////////////////////////////////////////////

// facture client premient generation1----------------///////////////////////////////////////////

printf("\nentre le numero du client (1 ou 2 etc..) : "); 
if(scanf("%d", &client1) != 1){
    puts("erreur 404"); 
    return 1; 
}

getchar(); 

printf("\nentre le nom du client %d : ",client1); 
fgets(name1 , sizeof(name1), stdin); 
name1[strcspn(name1 , "\n")]='\0'; 


printf("\nentre l'heure de travail du client %d : ",client1); 
if(scanf("%d", &heuredetravail1) != 1){
puts("erreur 404"); 
return 1; 
}

puts("\nannalise...");
sleep(2); 

total1= (heuredetravail1 * Prix1) * (1 + TVA1); 

printf("\n----------facture du client %d-------------\n",client1);

total11= (heuredetravail1 * Prix1); 

printf("%d %s : HT = $%.2f |-->(TVA)| TTC = $%.2f \n" , client1, name1, total1, total11); 

// facture client suivent generation 2 ..................../////////////////////////////////////////////////

printf("\nentre le numero du client (1 ou 2 etc..) : "); 
if(scanf("%d", &client2) != 1){
    puts("erreur 404"); 
    return 1; 
}

getchar(); 

printf("\nentre le nom du client %d : ",client2); 
fgets(name2 , sizeof(name2), stdin); 
name2[strcspn(name2 , "\n")]='\0'; 


printf("\nentre l'heure de travail du client %d : ",client2); 
if(scanf("%d", &heuredetravail2) != 1){
puts("erreur 404"); 
return 1; 
}

puts("\nannalise...");
sleep(2); 


total2= (heuredetravail2 * Prix2) * (1 + TVA2); 

printf("\n----------facture du client %d-------------\n",client2);

total22= (heuredetravail2 * Prix2); 

printf("%d %s : HT = $%.2f |-->(TVA)| TTC = $%.2f \n" , client2, name2, total2, total22); 

// decision continue la facturation oui ou non //////////////////////////////////////////////

while (getchar() != '\n' && getchar() != EOF);

do{
printf("\nvoulez vous continue la facturation ..(oui ou non) : "); 
fgets(decision, sizeof(decision), stdin);
decision[strcspn(decision, "\n")]='\0'; 

if(strcmp(decision, "oui")== 0){
puts("\ncontinue...\n"); 
sleep(2); 
break;
}else if(strcmp(decision, "non")== 0){
    puts("\nfinal...\n"); 
    sleep(2); 
    puts("\nla facture final a ete calcule avec succes\n");
    // facture1-----------------------------
    printf("\n----------facture du client %d-------------\n",client1);
    printf("%d %s : HT = $%.2f |-->(TVA)| TTC = $%.2f \n" , client1, name1, total1, total11);
// facture2-----------------------------
 printf("\n----------facture du client %d-------------\n",client2);
    printf("%d %s : HT = $%.2f |-->(TVA)| TTC = $%.2f \n" , client2, name2, total2, total22); 

puts("\n+++++++++++++++++++++---------------------++++++++++++++++++++++"); 
   puts("\n---------------------facture combine---------------------"); 

totalpremiere= (total1 + total2) * (1 + TVA1 + TVA2);
totalpremiere2= (total1 + total2) ; 
printf("la facture combine de %s et %s est de HT : $%.2f |-->(TVA)| TTC $%.2f\n",name1,name2, totalpremiere,totalpremiere2 ); 

    return 1; 
}else{
    printf("\nmessage non comprise\n"); 
}



}while (1); 


// facture client suivent generation 3 +++++++++++++++++/////////////////////////////////////////////////

printf("\nentre le numero du client (1 ou 2 etc..) : "); 
if(scanf("%d", &client3) != 1){
    puts("erreur 404"); 
    return 1; 
}

getchar(); 

printf("\nentre le nom du client %d : ",client3); 
fgets(name3 , sizeof(name3), stdin); 
name3[strcspn(name3 , "\n")]='\0'; 


printf("\nentre l'heure de travail du client %d : ",client3); 
if(scanf("%d", &heuredetravail3) != 1){
puts("erreur 404"); 
return 1; 
}



puts("\nannalise...");
sleep(2); 


total3= (heuredetravail3 * Prix3) * (1 + TVA3); 

printf("\n----------facture du client %d-------------\n",client3);

total33= (heuredetravail3 * Prix3); 

printf("%d %s : HT = $%.2f |-->(TVA)| TTC = $%.2f \n" , client3, name3, total3, total33);




// facture client suivent generation 4//******** */ +++++++++++++++++/////////////////////////////////////////////////


printf("\nentre le numero du client (1 ou 2 etc..) : "); 
if(scanf("%d", &client4) != 1){
    puts("erreur 404"); 
    return 1; 
}

getchar(); 

printf("\nentre le nom du client %d : ",client4); 
fgets(name4 , sizeof(name4), stdin); 
name4[strcspn(name4 , "\n")]='\0'; 


printf("\nentre l'heure de travail du client %d : ",client4); 
if(scanf("%d", &heuredetravail4) != 1){
puts("erreur 404"); 
return 1; 
}



puts("\nannalise...");
sleep(2); 


total4= (heuredetravail4 * Prix4) * (1 + TVA4); 

printf("\n----------facture du client %d-------------\n",client4);

total44= (heuredetravail4 * Prix4); 

printf("%d %s : HT = $%.2f |-->(TVA)| TTC = $%.2f \n" , client4, name4, total4, total44);




// facture client suivent generation 5//******-------** */ +++++++++++++++++/////////////////////////////////////////////////

printf("\nentre le numero du client (1 ou 2 etc..) : "); 
if(scanf("%d", &client5) != 1){
    puts("erreur 404"); 
    return 1; 
}

getchar(); 

printf("\nentre le nom du client %d : ",client5); 
fgets(name5 , sizeof(name5), stdin); 
name5[strcspn(name5 , "\n")]='\0'; 


printf("\nentre l'heure de travail du client %d : ",client5); 
if(scanf("%d", &heuredetravail5) != 1){
puts("erreur 404"); 
return 1; 
}



puts("\nannalise...");
sleep(2); 


total5= (heuredetravail5 * Prix5) * (1 + TVA5); 

printf("\n----------facture du client %d-------------\n",client5);

total55= (heuredetravail5 * Prix5); 

printf("%d %s : HT = $%.2f |-->(TVA)| TTC = $%.2f \n" , client5, name5, total5, total55);


// decisionfinal continue la facturation oui ou non //////////////////////////////////////////////

while (getchar() != '\n' && getchar() != EOF);


do{
printf("\nvoulez vous la facturation final complete..(oui ou non) : "); 
fgets(decisionfinal, sizeof(decisionfinal), stdin);
decisionfinal[strcspn(decisionfinal, "\n")]='\0'; 

if(strcmp(decisionfinal, "non")== 0){
puts("\nsortie...\n"); 
sleep(2); 
break;
}else if(strcmp(decisionfinal, "oui")== 0){
    puts("\nfinal...\n"); 
    sleep(2); 
    puts("\nla facture final a ete calcule avec succes\n");
    // facture1-----------------------------
    printf("\n----------facture du client %d-------------\n",client1);
    printf("%d %s : HT = $%.2f |-->(TVA)| TTC = $%.2f \n" , client1, name1, total1, total11);
// facture2-----------------------------
 printf("\n----------facture du client %d-------------\n",client2);
    printf("%d %s : HT = $%.2f |-->(TVA)| TTC = $%.2f \n" , client2, name2, total2, total22); 
//facture3-----------------------------------
 printf("\n----------facture du client %d-------------\n",client3);
    printf("%d %s : HT = $%.2f |-->(TVA)| TTC = $%.2f \n" , client3, name3, total3, total33); 
//facture4-----------------------------------
printf("\n----------facture du client %d-------------\n",client4);
    printf("%d %s : HT = $%.2f |-->(TVA)| TTC = $%.2f \n" , client4, name4, total4, total44); 
//facture5-----------------------------------
printf("\n----------facture du client %d-------------\n",client5);
    printf("%d %s : HT = $%.2f |-->(TVA)| TTC = $%.2f \n" , client5, name5, total5, total55); 

// facture combinneeeeeeeeeeeeee***************************************************

puts("\n+++++++++++++++++++++---------------------++++++++++++++++++++++"); 
   puts("\n---------------------facture combine---------------------"); 

totalfinal= (total1 + total2 + total3 + total4 + total5) * (1 + TVA1 + TVA2 + TVA3 + TVA4 + TVA5);
totalfinal2= (total1 + total2 + total3 + total4 + total5); 
printf("la facture combine des 5 personne est de HT : $%.2f |-->(TVA)| TTC $%.2f\n",totalfinal,totalfinal2); 
return 1; 
}else{
    printf("\nmessage non comprise\n"); 
}



}while (1); 