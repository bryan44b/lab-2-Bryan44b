#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    int nums [3];
    int n = sizeof(nums)/sizeof(nums[0]);
    for (int i = 0; i < 3; i++ ){
        cout << "Ingrese el numero: "; cin >> nums[i];
    }

    
    for (int i = 0; i < n - 1; i++) {         
    for (int j = 0; j < n - i - 1; j++) { 
        if (nums[j] > nums[j + 1]) {       
            int temp = nums[j];           
            nums[j] = nums[j + 1];
            nums[j + 1] = temp;
        }
    }
    
}

cout << "El numero de en medio es: "<< nums[1];


}