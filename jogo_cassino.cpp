#include <iostream>
#include <stdlib.h>
using namespace std;

int main()

{
    string pergunta;
    int  sorteio;
    float saldo, aposta, lucro, deposito;
    bool x;
    
    x= true;
    saldo = 0;
    
    while (x)
    {
        cout<<"\t\t\t\t\t#### Cassino ####"<<"\n\n Quanto quer depositar para jogar?(O valor � em R$) :";
        cin>>deposito;
        saldo = saldo + deposito;
        lucro = saldo;
        cout<<"Muito bem, seu saldo � "<<saldo<<" R$.\nAgora quanto quer come�ar apostando? ";
        
        
        while (aposta>0){
            cin>>aposta;
            
                for (;aposta > saldo;)
                {
                    cout<<"Valor de aposta maior que o saldo... Tente novamente :",cin>> aposta;
                }
                
            srand (time (NULL));
            sorteio=rand() %2;
                
            if (sorteio==1) 
            {
                system("cls");
                saldo = saldo + (aposta*0.75);
                cout<<"\t\t\t\t\t#### Cassino ####\n\n";
                cout<< "\n**Parabens! Voce ganhou** (CASO QUEIRA PARAR APOSTE O VALOR 0R$.) ( "<<sorteio<<" )"<<" \n";
            }
                else 
                {
                    system("cls");
                    saldo = saldo - aposta;
                    cout<<"\t\t\t\t\t#### Cassino ####\n\n";
                    cout<< "\n**N�o foi dessa vez...Voce perdeu** (CASO QUEIRA PARAR APOSTE O VALOR 0R$.) ( "<<sorteio<<" ) \n";
                }
            
       
            //cout<<sorteio;
            cout <<"\nAgora seu saldo � :"<<saldo<< " R$ \n\n Quanto quer apostar dessa vez??? ";
        };  
    
        if (saldo< lucro)
        {
            system("cls");
            cout<<"\nInfelizmente voc� nao deu sorte.... Esse saldo esta disponivel para retirada. ("<<saldo <<" R$ )\n � descontado um valor de 10% para banca. ";
        }
           else 
           {
               system("cls");
               cout<< "\nO seu saldo esta disponivel para retirada. ("<<saldo <<" R$ )\n � descontado um valor de 10% para banca. ";
           }
        saldo = saldo*0.9;
        cout <<"\n### SALDO DISPONIVEL "<<saldo<<" R$ ###\n\n\n";
        cout<<"Deseja depositar mais dinheiro e voltar a jogar?";
        cin>>pergunta;
        
        
        if ((pergunta == "N�o")||(pergunta == "n�o")||(pergunta == "Nao")||(pergunta == "nao")||(pergunta == "N")||(pergunta == "n"))
        {
            x=false;
        }
            else
            {
                aposta = 1;
            }
    }
        
        
        
        
    system ("pause");
    return 0;
    }
