#include <iostream>
using namespace std;


int main()
{
    while(true){
        
    int escolha, vezes = 0, contador = 0, doacao,  soma_doacoes = 0, meses = 0 ;
    
    cout<<"Menu de funcionalidades:"<< endl;
    cout<<"1.Apresentação do voluntário"<< endl;
    cout<<"2.Apresentação da ONG:"<< endl;
    cout<<"3.Interação com a entidade"<< endl;
    cin >> escolha;
    
    switch (escolha) {
        case 1://
        
        cout<<"ScoobyDoo conhecido também como Scooby Doby Doo, ou ainda, o cachorro medroso é agora o mais novo voluntário da ONG PetsDoo a Salvo"<< endl;
        cout<<"ScoobyDoo precisa de ajuda para fazer doações para a ONG. Se quiser ajuda-lo digite 3"<< endl;
        
        break;
        
        case 2:
        
        cout<<"A ONG PetsDoo a Salvo é uma nova entidade assistencial sem fins lucrativos, que tem o objetivo de salvar animais sem abrigo, resgatando e os ajudando a encontrar um novo lar."<< endl;
        cout<<"Sua meta é ter 2 doacoes na semana"<< endl;
        
        for (int i = 1; i <= 4; i++)
         {
            meses = 2 * i;
         }        
        
        cout<<"Então nos meses com 4 semanas sua meta é ter "<< meses << " arrecadações." << endl;
        
        break;
        
         case 3://
        
        cout<<"O Scooby doo é voluntário da ONG e ele precisa que você o ajude a fazer doações para ela."<< endl;
        cout<<"Digite o valor que o Scooby vai doar para a ONG:"<< endl;
        cin >> doacao;
        cout<<"Digite quantas vezes o Scooby vai fazer essa doação:"<< endl;
        cin >> vezes;
        if(vezes != 0 ){
        do {
            soma_doacoes= soma_doacoes + doacao;
            contador++;
            
        } while (contador < vezes);}
        
        cout<<"O total da doação para a ONG foi de "<< soma_doacoes << " reais"<<endl;
        
        if (soma_doacoes >= 100){
            
            cout<<"A ONG Pets Doo a Salvo agrade muito pela doação, com ela poderá resgatar muitos animais, comprar os alimentos que eles precisam e também alguns brinquedos até que eles consigam uma casa."<<endl;
            
        }
        else if (soma_doacoes>=1 && soma_doacoes < 100  )
            cout<<"A ONG Pets Doo a Salvo agrade muito pela doação, com ela poderá resgatar muitos animais e comprar os alimentos que eles precisam"<< endl;
            
        else 
            cout<<"Parece que o Scooby não consegiu doar dessa vez, mas está tudo bem, a ONG agradece por ele fazer parte do projeto."<< endl;
        
        break;
        
        default:
        cout<<"Digite uma opção válida"<< endl;
        
        break;


    
    }
    }

    return 0;
}