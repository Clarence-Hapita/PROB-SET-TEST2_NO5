#include <iostream>
using namespace std;
int main(){
    float P=34560;
    float R= 0.12;
    float T= 25;
    float Si= P*R*T;
    float Ta= P+Si;
    string a= "Interest Earned:";
    string b= "Total Amount:";
    cout<<a<<Si<<endl;
    cout<<b<<Ta;
    return 0;
}