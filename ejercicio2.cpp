#include <iostream>
#include <string>
using namespace std;
int main() {
    string mes = "";
    int n, k, espacio = 1;
    cout << "Ingrese el día que inicia el mes y luego cuantos días tendrá:" << endl;
    cin >> n >> k;
    if ((n < 1 or n > 7) or (k < 1 or k > 99)){
        cout << "Entradad invalida." << endl;
    }
    else{
        for (int i = 1; i < n; i++){
        mes += "   ";
        }
        for (int j = 1; k >= j; k = k-1){
            while (mes.size() == espacio){
                mes += "\n";
                espacio += 22;
                break;
            }
            if (j >= 1 and j <= 9){
                mes += "  ";
            }
            mes += to_string(k);
        }
        cout << mes;
    }
   
    return 0;
} 
