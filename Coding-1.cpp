#include <bits/stdc++.h>
using namespace std;



int main(){
    ifstream file1("input.txt");
    vector<int> arr;
    vector<int> arr2;
    string s;
    while(getline(file1, s)){
        arr.push_back(stoi(s));
    }
    file1.close();
    
    ifstream file2("output.txt");
    while(getline(file2, s)){
        arr2.push_back(stoi(s));
    }
    file2.close();
    sort(arr.begin(),arr.end());
    sort(arr2.begin(),arr2.end());
    int sum=0;
    for(int i=0;i<arr.size();i++){
        sum+= abs(arr[i]-arr2[i]);
    }
    cout<<sum<<endl;
    return 0;
}