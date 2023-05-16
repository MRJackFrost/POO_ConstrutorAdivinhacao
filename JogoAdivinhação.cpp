#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Abrindo a classe do jogo
class JogoAdivinhacao{
    //definindo alguns valores privados
    private:
    int numeroSecreto;
    int tentativas;
    //definindo os valores publicos
    public:
    JogoAdivinhacao(){
        //função para randomizar um numero utilizando uma biblioteca externa
        srand(time(0));
        numeroSecreto = rand() % 100 + 1;
        tentativas = 0;
    }
    
    //abrindo uma função void(que não retorna um valor)
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
    //definindo um novo objeto da minha classe criada acima e chmando suas funções
    JogoAdivinhacao jogo;
    jogo.jogar();
    
    return 0;
}
/*Uma possibilidade de utilizar o contrutor é como os jogos gacha(genshin e jogos de celulares)
onde muitos itens que os jogadores recebem são por capsulas aleatórias onde existe uma porcentagem
para ganhar itens normais, raros e epicos */
