#include <iostream>
#include <string>
using namespace std;


typedef struct Movel
{
    string descricao;
    float peso;
    char tipo;

}tMovel; tMovel vetor[10];

int main(){
    int n = 0, i = 0;
    int TipoS = 0;
    int TipoReal = 0;
    int iMaior = 0;

    cin >> n;
    getchar();

    for(i = 0; i < n; i++){
        getline (cin, vetor[i].descricao);
        cin >> vetor[i].peso;
        getchar();
        cin >> vetor[i].tipo;
        cin.ignore();
    }

    for(i = 0; i < n; i++){
        if(vetor[i].peso > 10 && vetor[i].tipo == 's'){
            TipoS++;
        }
    }

    cout << "Tipo 's' acima de 10Kg: " << TipoS << endl;;

    for(i = 0; i < n; i++){
        if(vetor[i].descricao.find("Real") != string::npos){
            TipoReal++;
        }
    }

    for(i = 0; i < n; i++){
        if(vetor[i].peso > vetor[iMaior].peso){
            iMaior = i;
        }
    }

    cout << "Termina em  \"Real\": " << TipoReal << endl;;
    cout << "Mais pesado: \"" << vetor[iMaior].descricao << "\"";
}
