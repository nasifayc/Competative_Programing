/*Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
Example 1:
Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:
Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.*/

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution {
  public:
    string longestCommonPrefix(vector<string>& strs) {
      string result;
      int count;
      if(strs.size() == 1 && strs[0].length() == 1){
        result += strs[0][0];
        return result;
      }
      for(int j = 0; j < strs[0].length(); ++j){
        for(int k = 1; k < strs.size(); ++k){
          if(strs[0][j] == strs[k][j]){
            count = 1;
            continue;
          }else{
            return result;
          }
        }
        if(count == 1){
          result += strs[0][j];
        }
      }

      return result;
    }
  };

int main(){
  Solution problem;
  vector <string> strs= {"flower","flow","flight"};
  cout<<"Output : \""<<problem.longestCommonPrefix(strs)<<"\""<<endl;
  return 0;
}
