#include<bits/stdc++.h>
using namespace std;
signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,c;
    cin >> a >>b >>c;
    if(a==1 && c==1){
        cout <<a+b+c;
    }
    else if(a == 1 || c == 1 ){
        if(a==1){
            cout << (b+1)*c;
        }
        else {
            cout << (b+1)*a;
        }
    }
    else if(a > 1 && b > 1 && c > 1){
        cout << a*b*c;
    }
    else if(a>1 && b==1 && c >1){
        cout << (min(a,c)+1)*max(a,c);
    }
    else {
        cout << max(a,max(b,c))*2;
    }
    
   
}