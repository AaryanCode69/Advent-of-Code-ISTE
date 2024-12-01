#include <bits/stdc++.h>
using namespace std;

int main(){
    int occ=0;
    ifstream file1("input.txt");
    unordered_map<int,int> M1;
    string s;
    while(getline(file1,s)){
        int k = stoi(s);
        M1[k]++;
    }
    file1.close();
    ifstream file2("output.txt");
    while(getline(file2,s)){
        int k = stoi(s);
        if(M1.find(k)!=M1.end()){
          occ+=k*M1[k];
        }
    }
    cout<<occ<<endl;
}