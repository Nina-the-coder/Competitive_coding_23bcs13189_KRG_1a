#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    unordered_map<string,int> mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    string ans = "";
    int maxCount = 0;
    for(auto it:mp){
        if(it.second>maxCount){
            maxCount = it.second;
            ans = it.first;
        }
    }
    cout<<ans<<endl;
    return 0;

}