#include<iostream>
#include<climits>
#include<queue>
#include<vector>

using namespace std;
queue<int>q;
vector<int>ans;
void firstNegative(int arr[], int n, int k){
    int i=0,j=0;
    while(j<n){
        if (arr[j]<0){
            q.push(arr[j]);
        }
        if (j-i+1<k){
            j++;
        }
        else if(j-i+1==k){
            if (q.empty()){
                ans.push_back(0);
            } 
            else{
                ans.push_back(q.front());
                if (q.front()==arr[i]){  
                    q.pop();
                }

            }
            i++;
            j++; 
            
        }
    }

}
int main(){
    int n; 
    cin>>n;
    int arr[n+1];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    
    firstNegative(arr,n,k);
    for(auto it: ans) cout<<it<<" ";
    cout<<endl;
    return 0;
}