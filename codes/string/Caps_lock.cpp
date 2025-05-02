#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(0);
    string s; cin >> s;
    int len = size(s);
    int allUpper = 1;
    int firstLower = islower(s[0]);
    for(int i = 0; i < len ;++i){
        if(isupper(s[i]) && allUpper){
            allUpper = 1;
        }
        else {
            allUpper = 0;
        }

        if(firstLower && i>0){
            if(isupper(s[i]) && firstLower) firstLower = 1;
            else firstLower = 0;
           
        }
    }
    if(allUpper) {
       
        for(int i = 0; i < len ;++i){
           cout << static_cast<char>(tolower(s[i]));
        }
    }
    else if(firstLower){
       
        for(int i = 0; i < len ;++i){
            if(i==0){
                cout << static_cast<char>(toupper(s[i]));
                continue;
            }
            cout << static_cast<char>(tolower(s[i]));
         }
    }
    else{
        cout << s;
    }

}