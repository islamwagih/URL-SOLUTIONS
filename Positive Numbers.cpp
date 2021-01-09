#include <iostream>
using namespace std;
int howManyPositive(){
    int counter = 0;
    for(int i=0;i<6;i++){
        double value;cin>>value;
        if(value >= 0)
            counter++;
    }
    return counter;
}

int main(){
    int number = howManyPositive();
    cout<<number<<" valores positivos\n";
    return 0;
}
