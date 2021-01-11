#include <bits/stdc++.h>
using namespace std;
int main(){
    int cnt = 0;
    double sum = 0;
    for(int i=0;i<6;i++){
        double value;cin>>value;
        if(value > 0){
            cnt++;
            sum+=value;
        }
    }
    cout<<cnt<<" valores positivos\n";
    cout<<fixed<<setprecision(1)<<sum/cnt<<endl;
    return 0;
}
