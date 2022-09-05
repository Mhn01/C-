#include <iostream>
#include <cmath>
int main(){
using namespace std;


char semn;
double nr1;
double nr2;
double rezultat;





cout << "*** Calculator ***" << endl;
cout << "**************************"<< endl;
cout << "Introdu valoarea numarului 1 : " << endl;
cin >> nr1;
cout << "Introdu valoarea numarului 2 : " << endl;
cin >> nr2;
cout << "Introdu semnul operatiei(+ , - , * , /)"<< endl;
cin >> semn;
switch (semn)
{
case '+':
     rezultat = nr1 + nr2; 
     cout << "Rezultatul este : " << rezultat << endl;
    break;

case '-':
     rezultat = nr1 - nr2; 
     cout << "Rezultatul este : " << rezultat << endl;
    break;



    case '*':
     rezultat = nr1 * nr2;
     cout << "Rezultatul este : " << rezultat << endl; 
    break;


case '/':
    rezultat = nr1 / nr2;
   cout << "Rezultatul este : " << rezultat << endl;
    break;

}









    return 0;
}