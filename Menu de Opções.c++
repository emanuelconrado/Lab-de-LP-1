#include <iostream>
using namespace std;


int main(){

    int i, a;

    
    while(1){

        for(i = 1; i < 4; i++){
        cout << i << " - Item " << i << endl;
        }
        cout << "4 - Sair\n";
        
        cin >> a;

        if(a == 4){
            break;
        }

        if(a >= 1 & a <= 4){
            cout << "item " << a << endl;
        }else{
            cout << "Opcao " << a << " invalida" << endl;
        }
    }


    return 0;
}

