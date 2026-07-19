#include <iostream>
#include <cmath>
#include <string>
#include <thread>
#include <chrono>
int main (void){


// std :: string name ; 

// std :: cout <<"entre votre nom : "; 
// std :: getline(std :: cin >> std :: ws , name); 


// if(name.length() > 12){

// std :: cout << "votre nom ne pas depase 12 caractere"; 

// }else{
//     std :: cout <<"welcome " << name; 
// }



// ----------------------------------------------------------------------


// std :: string name ; 

// std :: cout <<"entre votre nom : "; 
// std :: getline(std :: cin , name); 

// if(name.empty()){
//     std::cout << "vous navez pas entre votre nom "; 
// }else{
//  std :: cout << "vous avez saisie un nom " << name; 
// }

// ----------------------------------------------------------------------


//suprime lobjet name

// std :: string name ; 

// std :: cout <<"entre votre nom : "; 
// std :: getline(std :: cin , name); 

// name.clear(); 

// std :: cout << "hello " << name; 

// ----------------------------------------------------------------------

//ajouter des carractere a un object name comme <<lara, lora, @pat , et autre>>

// std :: string name ; 

// std :: cout <<"entre votre nom : "; 
// std :: getline(std :: cin , name); 

// name.append("@gamil.com"); 

// std :: cout << "votre addrees mail est : " << name; 


// ----------------------------------------------------------------------


// std :: string name ; 

// std :: cout <<"entre votre nom : "; 
// std :: getline(std :: cin , name); 

// std :: cout << name.at(2); 

// ----------------------------------------------------------------------

// insere un carractere en fonction de la position de lisertion 

// std :: string name ; 

// std :: cout <<"entre votre nom : "; 
// std :: getline(std :: cin , name); 


// name.insert(2,"@"); 

// std :: cout << name; 


// ----------------------------------------------------------------------

//conte les espace entre les mot

// std :: string name ; 

// std :: cout <<"entre votre nom : "; 
// std :: getline(std :: cin , name); 


// name.insert(2,"@"); 

// std :: cout << name.find(' '); 

// ----------------------------------------------------------------------

//suprime un partie de lobject en fonction de la lendroit qu'on veux supprime en partant de 0 a plus 

// std :: string name ; 

// std :: cout <<"entre votre nom : "; 
// std :: getline(std :: cin , name); 

// name.erase(0, 3); 

// std :: cout << name; 


// ----------------------------------------------------------------------

#define colortetea "\033[0;31m"
#define colorteteb "\033[0;32m"
#define colortetec "\033[7;35m"
#define colorteted "\033[0;36m"
#define colortetee "\033[2;33m"
#define colortetef "\033[2;30m"
#define colorteteg "\033[0;34m"
#define colorteteh "\033[2;36m"
#define colorfin "\033[0m"
#define sleep(x)  std::this_thread::sleep_for(std::chrono::seconds(x))



std :: string nom;
std :: string prenom; 
std :: string nom_prenom; 
int age; 
std :: string numero; 
std :: string suggetion; 
std :: string proposition; 
std :: string condition;

while (1)
{
    std :: cout <<"\nentre votre nom : "; 
    std :: getline(std :: cin , nom); 

    if(nom.length() >= 3){
     break;
    }else{
     std :: cout << colortetea << "\nnon valider\n" << colorfin; 
    }
}



while(1){
    std :: cout <<"\nentre votre prenom : "; 
    std :: getline(std :: cin , prenom); 

    if(prenom.length() >= 3){
     break;
    }else{
     std :: cout << colortetea << "\nnon valider\n" << colorfin; 
    }
}


while(1){
    std :: cout <<"\nentre votre nom prenom (sans espace) : "; 
    std :: getline(std :: cin , nom_prenom); 

    if(nom_prenom.length() >= 3){
     break;
    }else{
     std :: cout << colortetea << "\nnon valider\n" << colorfin; 
    }
}


std :: cout << "\nentre votre age : "; 
std :: cin >> age; 


while(1){
    std :: cout <<"\nentre votre numero de telephone : "; 
    std :: getline(std :: cin >> std :: ws , numero); 

    if(numero.length() >= 10){
     break;
    }else{
     std :: cout << colortetea << "\nnon valider\n" << colorfin; 
    }
}

do{

    std :: cout <<colortetec<<"\n--------------------------------------" <<colorfin; 

   

    std :: cout <<'\n'<<'\n'<<"choix (1) : "<< nom << "12@gmail.com"; 
    std :: cout <<'\n'<<'\n'<<"choix (2) : "<< prenom << "950@gmail.com"; 
    std :: cout <<'\n'<<'\n'<<"choix (3) : "<< nom_prenom << "150@gmail.com";
    
    

 std :: cout <<colortetec<<"\n\n--------------------------------------"<<colorfin; 

    std :: cout <<"\n\nentre votre choix (exit) pour une personnalisation : "; 
    std :: getline(std :: cin , suggetion); 


   if(suggetion == "1"){
    nom.append("12@gmail.com"); 
    break;
   }else if(suggetion == "2"){
    prenom.append("950@gmail.com"); 
    break;
   }else if(suggetion == "3"){
    nom_prenom.append("150@gmail.com"); 
    break;
   }else if(suggetion == "exit"){

    std :: cout <<"\nentre votre proposision sans le @gmail.com merci : "; 
    std :: getline (std :: cin , proposition); 
      std :: cout <<colorteted<<"\n\nrecherche de diponobiliter...\n\n"<<colorfin;
    sleep(1); 

std :: cout <<"\naucun Email paraiel n'existe\n"; 

   std :: cout <<colorteteb<<"\n\ncreation...\n\n"<<colorfin;
    sleep(1);
    proposition.append("@gamil.com"); 
    std :: cout <<colortetef<<"\n-------------------------------\n\n"<<colorfin; 
    std :: cout << proposition; 
    std :: cout <<colortetef<<"\n\n-------------------------------\n\n"<<colorfin; 
    std :: cout <<colorteteb<<"\nvotre EMAIL a ete cree avec succer\n\n"<<colorfin; 
        break;
   }
   else{
    std :: cout <<colortetea<< "\n\nchoix non valider vous devez choisirez une suggetion ou en cree vous meme avec (exit)\n\n"<<colorfin; 
   }

    // nom.append("@gmail.com"); 
}while(1); 




while(1){

   std :: cout <<"\n\nLorem ipsum dolor sit, amet consectetur adipisicing elit. Harum dolore vel in, dolorum ea repellendus ullam aspernatur cumque voluptas similique corporis, consectetur natus quaerat tempore delectus? Eos neque eveniet adipisci?\n"; 


    std :: cout <<"\n\naccepeter vous les condition generale (oui ou non) : "; 
    std :: getline(std :: cin ,condition);

  if(condition == "oui"){
    std :: cout <<colorteteb<<"\n\nmerci pour votre choix\n"<<colorfin;
   break;
  }else if(condition == "non"){
    std :: cout <<colortetea<<"\n\nvoux pouvez change de choix a tout moment \n"<<colorfin;
   break;
  }else {
    std :: cout <<colortetea<<"\n\nvous devez entre un choix\n"<<colorfin; 
  }

}



std :: cout <<colorteteg<<"\n\nredirection..\n"<<colorfin; 
sleep(3); 
 

std :: cout<<"\n\n---------------Boit de reception----------------\n\n"; 
std :: cout <<colortetee<<"aucun message reçu pour le moment (0)"<<colorfin; 

if(suggetion == "1"){
std :: cout <<'\n'<<"votre email est : "<<colorteteh<<nom<<colorfin; 
}else if(suggetion == "2"){
std :: cout <<'\n'<<"votre email est : "<<colorteteh<<prenom<<colorfin; 
}else if(suggetion == "3"){
std :: cout <<'\n'<<"votre email est : "<<colorteteh<<nom_prenom<<colorfin; 
}
else if(suggetion == "exit"){
std :: cout <<'\n'<<"votre email est : "<<colorteteh<< proposition<<colorfin; 
}

std :: cout<<"\n\n------------------------------------------------\n\n"; 












std :: cout <<"\n\n"; 
return 0; 
}