#include <iostream>
#include <cmath>
using namespace std;

int main(){

double a;
double b;
double c;


cout << "Hai sa calculam teroema lui Pitagora!" << endl;
cout << "Introdu o valoare catetei (nr.1)" << endl;
cin >> a;

while (a<0)
{
    cout << "Valoarea lui a este invalida!" << endl;
    cout << "**********************************"<< endl;
     cout << "Introdu o alta valoarea lui a!" << endl;
    cin >> a;
}

cout << "Introdu o valoare catetei (nr.2)"<< endl;
cin >> b;

while (b<0)
{
    cout << "Valoarea lui b este invalida!" << endl;
    cout << "**********************************"<< endl;
     cout << "Introdu o alta valoarea lui b!" << endl;
    cin >> b;
}


cout << "Iar valoarea ipotenuzei este : " << endl;
c = sqrt(pow( a , 2) + pow( b , 2));
cout << c;


return 0;
}
