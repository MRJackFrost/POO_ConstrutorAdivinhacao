#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//
class JogoAdivinhacao{
    //
    private:
    int numeroSecreto;
    int tentativas;
    //
    public:
    JogoAdivinhacao(){
        //
        srand(time(0));
        numeroSecreto = rand() % 100 + 1;
        tentativas = 0;
    }
    
    //
    void jogar(){
        //
        int palpite;
        do{
            cout << "Digite um numero entre 1 e 100" <<endl;
            cin >> palpite;
            tentativas++;
            
            if(palpite < numeroSecreto){
                cout << "o numero secreto é maior" << endl;
            }
            else if(palpite > numeroSecreto){
                cout << "o numero secreto é menor" << endl;
            }else{
                cout << "Parabens você acertou" << endl;
            }
        }while(palpite != numeroSecreto);
    }
};


int main() {
    JogoAdivinhacao jogo;
    jogo.jogar();
    
    return 0;
}