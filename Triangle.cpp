#include <bits/stdc++.h>
using namespace std;
bool validTriangle(double a, double b, double c){
    double arr[3];
    arr[0] = a;arr[1] = b;arr[2] = c;
    sort(arr, arr+3);
    if((arr[0]+arr[1])>arr[2]){
        return true;
    }
    return false;
}
int main(){

    double a,b,c;cin>>a>>b>>c;
    if(validTriangle(a, b, c)){
        cout<<fixed<<setprecision(1)<<"Perimetro = "<<a+b+c<<endl;
    }else{
        double area = ((a+b)/2.0)*c;
        cout<<fixed<<setprecision(1)<<"Area = "<<area<<endl;
    }

    return 0;
}
