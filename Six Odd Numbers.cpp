#include <iostream>
using namespace std;
void sixOddFromN(int n){
    int counter = 0;
    if(n%2!=0){
        cout<<n<<endl;
        for(int i=n+1;counter<5;i++){
            if(i%2!=0){
                cout<<i<<endl;
                counter++;
            }
        }
    }else{
        for(int i=n+1;counter<6;i++){
            if(i%2!=0){
                cout<<i<<endl;
                counter++;
            }
        }
    }

}

int main(){

    int n;cin>>n;
    sixOddFromN(n);


    return 0;
}
