#include <bits/stdc++.h>
using namespace std;
int main(){
    int range1,range2;cin>>range1>>range2;
    int sumOdds = 0;
    for(int i=min(range1, range2)+1;i<max(range1, range2);i++){
        if(i%2 != 0){
            sumOdds += i;
        }
    }
    cout<<sumOdds<<endl;
    return 0;
}
