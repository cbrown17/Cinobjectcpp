#include <iostream> //required for cin
using namespace std;


int main() {
  double rate, hours;
  int id;
  char code;

  //prompt user for input
  cout << "Enter the floating point rate of pay"
       << "and hours worked: ";
  cin >> rate >> hours; 
  cout << "Enter employee's integer id: ";
  cin >> id; 
  cout << "Enter the tax code (h,r,l): " ;
  cin >> code; 
  
  cout << rate << endl << hours << endl
       << id << endl << code << endl; 

  return 0;
}