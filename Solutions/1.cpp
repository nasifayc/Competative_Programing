#include <iostream>
#include <vector>
using namespace std;
/*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
Example 1:

Input: nums = [2,7,11,15], target = 9
Output: [0,1]
Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].*/
int main(){
    vector <int> nums;
    int element;
    int target;
    char choice = 'y';
    int countElement = 1;
    while(choice == 'y'){
      cout<<"Element "<<countElement<<" : ";
      cin>>element;
      nums.push_back(element);
      cout<<"Continue to next element?(y/n): ";
      cin>>choice;
      ++countElement;
    }
    cout<<"Enter Target: ";
    cin>>target;

    for(int i = 0; i < nums.size(); ++i){
      for(int j = 0; j < nums.size(); ++j){
        if((nums[i] + nums[j] == target) && i!=j){
          cout<<"Input: nums = [";
          for(const int &a: nums){
            cout<<a<<",";
          }
          cout<<"], target = "<<target<<endl;
          cout<<"Output: ["<<i<<","<<j<<"]"<<endl;return 0;
        }
      }
    }
    return 0;
}
