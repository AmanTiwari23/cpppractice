#include <iostream>
using namespace std;
int main(){
    int group,left,firstavg,avg2;
    group=10;
    firstavg=50;
    int sumfirst = group*firstavg;

    left=1;
    avg2=45;
    int sumsecond = avg2*(group- left);

    int weiofleft = sumfirst-sumsecond;

    cout<<"weight of the left person :"<<weiofleft;


}