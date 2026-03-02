#include<iostream>
#include<vector>
using namespace std;

int main(){
    string text = "abcabcd";
    string pattern = "abc";

    string str = pattern + "$" + text;    // abc $ abc abcd
    int n = str.size();

    vector<int> z(n, 0);
    int index = 1;
    while(index < n){
        int left = 0;
        int right = index;
        while(right < n && left < n){
            if(str[left] != str[right]) break;
            z[index]++;
            left++;
            right++;
        }
        
        index++;
    }

    for(int i: z){
        cout<<i<<" ";
    }
}