#include <iostream>

using namespace std;

int main(){
 int variable_x [6] = {0,1,2,3,4,5};
   
     cout <<"```cmd" << endl;
     cout <<"***********" << endl;
     cout <<"x"<<"  " <<"f(x)" << endl;
     cout <<"***********" << endl;



  for (int i = 0; i < 6; i++){
     cout << variable_x[i] << "  " << (variable_x[i]*variable_x[i]*variable_x[i])-(variable_x[i]*variable_x[i])+5; cout << endl;

  }


}