// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Sala{
    public:
    int qtdsala;
    int qtdaluno[10];
    int media = 0;
    
    void calcmedia();
};

int main() {
  Sala nossasala;
  int countsala;
  int i = 0;
  
  cout << "Qual a quantidade de salas?" << endl;
  cin >> countsala;
  nossasala.qtdsala = countsala;
  
  while(i < countsala){
  int numsala = i+1;
  cout << "Qual a quantidade de alunos na sala " << numsala << endl;
  cin >> nossasala.qtdaluno[i];
  nossasala.media = nossasala.media + nossasala.qtdaluno[i];
  i = i+1;
}
  nossasala.media = nossasala.media / countsala;
  cout << "Media de alunos das sala: " << nossasala.media << endl;
  i= 0;
  
   while(i < countsala){
       int sala = i+1;
       if(nossasala.qtdaluno[i] >= nossasala.media){
    cout << "Sala: " << sala << " Quantidade de Aluno: " << nossasala.qtdaluno[i] << endl;
           i = i+1;
       }
       else{ 
           i = i+1;
       }
   }

 return 0;
}