#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>>ans;
void subseq(int ind, vector<int>&v, vector<int>&temp){
        if(ind>=v.size()){
            ans.push_back(temp);
            return ;
        }
        

        temp.push_back(v[ind]); // taken
        subseq(ind+1,v,temp);
        temp.pop_back();
        subseq(ind+1,v,temp);// not taken
}
int main(){
    vector<int>v={1,2,3};
    vector<int>temp_result;
    subseq(0,v,temp_result);
    
    for(int i=0; i<ans.size(); i++){
    
        for(auto it: ans[i]){
            cout<<it<<" ";
        }
        cout<<endl;
    
    }
    return 0;
}