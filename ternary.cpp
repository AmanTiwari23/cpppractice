#include <iostream>
using namespace std;
int main()
{
    // int a,val;
    // cout<<"enter an input 1 or 2 :";
    // cin>>a;
    // cout<<"enter a value : ";
    // cin>>val;

    // (a >20 && a<50)?(a%2==0 && a%3==0)?cout<<a:cout<<"invalid":cout<<"number is not between 20 and 50";

    // (a==1)?cout<<(val*9)/5+32<<"in ferenhit":(a==2)?cout<<((val-32)*5)/9<<"in celcious":"invalid input";

    int pass, mpass;
    mpass = 9589;

    cout << "enter Atm pass : ";
    cin >> pass;
    (pass == mpass) ? cout << "cash widrwal" : (cout << "enter again Atm pass : ", cin >> pass, (pass == mpass) ? cout << "cash widrwal" : (cout << "enter again Atm pass : ", cin >> pass, (pass == mpass) ? cout << "cash widrwal" : cout << "invalid pass"));
}