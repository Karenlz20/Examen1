#include <iostream>
using namespace std;
int main() {
    int hora_inicio, horas_renta, tarifa, total;
do {
    cout << "Ingrese la hora de inicio y la cantidad de horas a rentar" << endl;
    cin >> hora_inicio >> horas_renta;
    if (0 > hora_inicio > 23) {
        cout << "La hora de inicio debe estar entre 0 y 23!" << endl; }
    if (horas_renta <= 0) {
        cout << "La cantidad de horas debe ser mayor a 0!" << endl; }
    } while ((0 > hora_inicio > 23) or (horas_renta <= 0));
    if ((hora_inicio >=0 and hora_inicio <=7) or (hora_inicio >= 17 and hora_inicio <=23)){
       tarifa = 1;
    }
    else {
        tarifa = 2;
    }
    total = tarifa * horas_renta;
    cout << "Has alquilado una bicicleta por " << horas_renta << " horas con el tarifario de " << tarifa << " boliviano(s)" << endl;
    cout << "El monto total a pagar es de " << total << " bolivianos" << endl;
    
    return 0;
}
