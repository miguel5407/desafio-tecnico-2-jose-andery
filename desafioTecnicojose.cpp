#include <iostream>
using namespace  std;
int main() {
    //declarando a variavel
#include <string>
    string personagem = "Narutouzumaki";
    string entidadeFilantropica = "orfanato de konoha";
    int escolha;
    string pratoPreferido = "ramen";
    bool temamigos = true;
    string amigo1 = "konohamaru";
    string amigo2 = "iruka";
    string amigo3 = "sasuke";
    string namorada = "hinata";
    bool edoTensei = true;
    string inimigo = "kabuto";
    
    //loop infinito: inicio
    while(true){
    //loop infinito: abertura do dialogo
    cout << "olá  " << personagem << " escolha uma das opções abaixo:  "  << endl;
    cout << "1-> dados pessoais;" << endl ;
    cout << "2-> dados do orfanato;" << endl;
    cout << "3-> trabalhos feitos por voce" << endl;
    cout << "4-> sair do site" << endl;
    cin >> escolha;
    
    switch(escolha){
        case 1:
        {if(temamigos){
        cout << "nome: "  << personagem << endl;
        cout << "comida favorita: " << pratoPreferido << endl;
        cout << "amigos: " << amigo1 << ", " << amigo2 << ", " << amigo3 << endl;
        cout << "namorada/esposa: " << namorada << endl;
        temamigos = false;
        } 
        else{
            temamigos = true;
            cout << "esperamos que voce consiga um amigo";
            
        }  
        case 2:{
        cout << "entidade filantropica: " << entidadeFilantropica << endl;
        break;
        }
    } case 3: {
      for( int i = 1; i <= 3; i++){
          cout << "trabalho: " << i << " realizado por: " << personagem << endl;
          
          
          
          
      } cout <<  personagem << "derrotou inimigo" << inimigo;
      edoTensei = false;
      case 4: {
          cout << "até logo" << endl;
          return 0;
      } 
      case 5: {
          do{
              cout << "verificando status da familia: ";
              if(edoTensei == true){
                  cout << "sua familia voltou, hora de revisita-los: " << endl;
                 
                  
                 
                  
              }
              else{
                 cout << "infelizmente eles não voltaram";
                  
                  
                  
                  
                  
              }
              
              
              
              
          }while(edoTensei = true);
          
          
          
      }
      default: 
      cout << "resposta invalida";
      
      
    }
    }
    
    } return 0; }
    