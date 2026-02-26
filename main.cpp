#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double GBP_Bendras = 0.8729, GBP_Pirkti = 0.8600, GBP_Parduoti = 0.9220;
    double USD_Bendras = 1.1793, USD_Pirkti = 1.1460, USD_Parduoti = 1.2340;
    double INR_Bendras = 104.6918, INR_Pirkti = 101.3862, INR_Parduoti = 107.8546;

    int pasirinkimas = 1;

    while (pasirinkimas != 0) {
    cout << "\n1 - Palyginti kursa\n";
    cout << "2 - Pirkti valiuta\n";
    cout << "3 - Parduoti valiuta\n";
    cout << "0 - Iseiti\n";
    cout << "Pasirinkite: ";
    cin >> pasirinkimas;

    cout << fixed << setprecision(2);

    if (pasirinkimas == 1) {

    int valiuta;
    cout << "1-GBP 2-USD 3-INR: ";
    cin >> valiuta;

    if (valiuta == 1) cout << "1 EUR = " << GBP_Bendras << " GBP\n";
    if (valiuta == 2) cout << "1 EUR = " << USD_Bendras << " USD\n";
    if (valiuta == 3) cout << "1 EUR = " << INR_Bendras << " INR\n";
        }
    if (pasirinkimas == 2) {
    int valiuta;
    double kiekis;
    cout << "1-GBP 2-USD 3-INR: ";
    cin >> valiuta;
    cout << "Iveskite euru kieki: ";
    cin >> kiekis;
    if (valiuta == 1) cout << "Gausite: " << kiekis * GBP_Pirkti << " GBP\n";
    if (valiuta == 2) cout << "Gausite: " << kiekis * USD_Pirkti << " USD\n";
    if (valiuta == 3) cout << "Gausite: " << kiekis * INR_Pirkti << " INR\n";
        }
}
    cout << "Programa baigta."<<endl;

    return 0;
}
