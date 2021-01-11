#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    int out = 0, in = 0;
    while(n--){
        int value;cin>>value;
        if(value >= 10 && value <= 20){
            in++;
        }else{
            out++;
        }
    }
    cout<<in<<" in\n";
    cout<<out<<" out\n";
    return 0;
}
