#include <iostream>

using namespace std;

int main(){

int nums[3];
int sum =0;
float producto =1;

for (int i=0; i<3; i++){

cout<<"Ingrese el numero" <<i+1<< ":";
cin >>nums[i];
sum = sum+nums[i];
producto = producto*nums[i];

}

int min =nums[0];
int max =nums[0];

for (int i=0; i<3; i++){

if(nums[i]<min){
    min = nums[i];

}
if(nums[i]>max){
 max = nums[i];

}

}

float prom = sum/3.0;
cout << "El promedio es: " << prom <<endl;
cout<<"La suma es: " << sum <<endl;
cout<<"El producto es: " << producto <<endl;
cout<<"El numero minimo es: " << min <<endl;
cout<<"El numero maximo es: " << max <<endl;

return 0;
}