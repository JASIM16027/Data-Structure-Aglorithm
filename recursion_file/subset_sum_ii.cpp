#include <bits/stdc++.h>
using namespace std;

void printAns(vector < vector < int >> & ans) {
  cout << "The unique subsets are " << endl;
  cout << "[ ";
  for (int i = 0; i < ans.size(); i++) {
    cout << "[ ";
    for (int j = 0; j < ans[i].size(); j++)
      cout << ans[i][j] << " ";
    cout << "]";
  }
  cout << " ]";
}
class Solution {
  public:
    void fun(vector < int > & nums, int index, vector < int > ds, set < vector < int >> & res) {
      if (index == nums.size()) {
        sort(ds.begin(), ds.end());
        res.insert(ds);
        return;
      }
      ds.push_back(nums[index]);
      fun(nums, index + 1, ds, res);
      ds.pop_back();
      fun(nums, index + 1, ds, res);
    }
  vector < vector < int >> subsetsWithDup(vector < int > & nums) {
    vector < vector < int >> ans;
    set < vector < int >> res;
    vector < int > ds;
    fun(nums, 0, ds, res);
    for (auto it = res.begin(); it != res.end(); it++) {
      ans.push_back( * it);
    }
    return ans;
  }
};
int main() {
  Solution obj;
  vector < int > nums = {1, 2, 2};
  vector < vector < int >> ans = obj.subsetsWithDup(nums);
  printAns(ans);
  return 0;
}

/*
we were taking extra time to store the unique combination with the help of a set. 

Time Complexity: O( 2^n *(k log (x) )). 2^n  for generating every subset and
 k* log( x)  to insert every combination of average length k in a set of size x. 
 After this, we have to convert the set of combinations back into a list of list 
 /vector of vectors which takes more time.

Space Complexity:  O(2^n * k) to store every subset of average length k. 
Since we are initially using a set to store the answer another O(2^n *k) is also used.

*/