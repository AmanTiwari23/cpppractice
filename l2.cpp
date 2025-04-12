#include <iostream>
using namespace std;
int main(){
    int hindi , eng, cpp;
    cout<<"enter marks of hindi :";
    cin>>hindi;
    cout<<"enter marks of English :";
    cin>>eng;
    cout<<"enter marks of cpp :";
    cin>>cpp;

    int percentage = ((hindi+eng+cpp)*100)/300;

    cout<<"the percentage is :"<<percentage<<"%";


}