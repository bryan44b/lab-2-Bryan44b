#include <iostream>

using namespace std;

int main(){

int num1,num2;


cout << "Ingrese el numero "; cin >> num1; cin >> num2; 


int mod = num1 % num2;

if ( mod==0){
    cout <<"Es multiplo"<< endl;
} else{
    cout <<"No es multiplo"<< endl;
}

 cout << "Ingrese el numero "; cin >> num1;

if ( num1%2==0){
    cout <<"Es par";
} else{
    cout <<"Es impar";
}



}