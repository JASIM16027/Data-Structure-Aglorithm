#include<iostream >
#include<vector>
using namespace std;
vector<vector<int>>ans;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>temp;

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            temp.push_back(arr[j]); 
            cout<<sum<<" ";   
        }
        ans.push_back(temp);

    }
    return 0;
}