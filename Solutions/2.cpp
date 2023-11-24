#include <iostream>
using namespace std;
bool ispalindrom(int x);
int main(){
  int num;
  cout<<"Number: ";
  cin>>num;
  bool result = ispalindrom(num);
  cout<<"IS "<<num<<" Palindrom? : "<<(result == 1?"true":"false");
}
bool ispalindrom(int x){

  int original = x;
  int y;
  int z = 0;
  while(x>=1){
    y = x%10;
    x/=10;
    z = (z*10)+y;
  }
 return z==original? true:false;
};
