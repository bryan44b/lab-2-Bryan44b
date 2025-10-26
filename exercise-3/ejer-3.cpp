#include <iostream>
using namespace std;

int main(){


int n;
int cifras [10] ;
int i = 0;

cout <<"Ingrese un numero de cinco digitos: ";
cin >> n;

while (n>0) {
cifras[i] = n%10;
n = n/10;
i++;
}
for (int j = i-1 ; j >= 0; j -- ) {
cout << cifras [j] << " "<< " "<< " ";
}
  
cout << endl; cout << 18%3 << endl;
cout << 13%9 << endl;
cout << 13 / 2 % 2;
}