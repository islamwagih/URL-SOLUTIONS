#include <iostream>
using namespace std;
int main(){

    int totalDays;cin>>totalDays;
    int years = totalDays/365;
    totalDays -= years*365;
    int months = totalDays/30;
    totalDays -= months*30;
    cout<<years<<" ano(s)\n";
    cout<<months<<" mes(es)\n";
    cout<<totalDays<<" dia(s)\n";

    return 0;
}
