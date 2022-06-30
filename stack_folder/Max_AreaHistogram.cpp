#include<bits/stdc++.h>
using namespace std;

void NSL(int arr[], int n, vector<int>&left){
    stack<pair<int, int>>s;
    
    int first_index = -1;
    for(int i=0;i<n;i++){
        if (s.size()==0){
            left.push_back(first_index);

        }
        else if(s.size()>0 && s.top().first<arr[i]){
            left.push_back(s.top().second);
        }

        else if(s.size()>0 && s.top().first>=arr[i]){
            while(s.size()>0 && s.top().first>=arr[i]){
                s.pop();
            }
            if (s.size()==0){
                left.push_back(first_index);
            }
            else{
                left.push_back(s.top().second);
            }

        }
        s.push({arr[i],i});
    }

}

void NSR(int arr[], int n, vector<int>&right){
    stack<pair<int, int>>s;
    
    int last_index = right.size();
    for(int i=n-1;i>=0;--i){
        if (s.size()==0){
            right.push_back(last_index);

        }
        else if(s.size()>0 && s.top().first<arr[i]){
            right.push_back(s.top().second);
        }

        else if(s.size()>0 && s.top().first>=arr[i]){
            while(s.size()>0 && s.top().first>=arr[i]){
                s.pop();
            }
            if (s.size()==0){
                right.push_back(last_index);
            }
            else{
                right.push_back(s.top().second);
            }

        }
        s.push({arr[i],i});
    }
    reverse(right.begin(),right.end());

}

void MAH(vector<int>&left,vector<int>&right, int n, vector<int>&width){
    for(int i=0;i<n;i++){
        width[i] = right[i] - left[i]-1;
    }
}

int main(){
    int arr[] = {6,2,5,4,5,1,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>left;
    vector<int>right;
    vector<int>width(n,0);
    vector<int>area(n,0);
    NSL(arr,n,left);
    NSR(arr, n,right);
    MAH(left,right,n,width);
    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        area[i] = arr[i]*width[i];
        maxi = max(maxi, area[i]);

    }
    cout<<maxi<<endl;
    
    return 0;
}