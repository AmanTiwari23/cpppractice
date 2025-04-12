#include  <iostream>
using namespace std;
int main(){
    int sd1,sd2,sd3,ang1,ang2,ang3;
    string val;

    cout<<"enter sd for side and ang for angle :";
    cin>> val;

    if (val== "sd")
    {
        cout<<"enter sd1 of angle :";
        cin>>sd1;
        cout<<"enter sd2 of angle :";
        cin>>sd2;
        cout<<"enter sd3 of angle :";
        cin>>sd3;
        
        if(sd1 == sd2 == sd3){
            cout<<"this is a Equilateral Triangle"; 
        }else if(sd1==sd2 || sd1==sd3 || sd2==sd3){
            cout<<"this is a isoceles Triangle"; 
        }else{
            cout<<"this is a Scalene Triangle"; 
        }

    }else if(val =="ang"){
        cout<<"enter ang1 of angle :";
        cin>>ang1;
        cout<<"enter ang2 of angle :";
        cin>>ang2;
        cout<<"enter ang3 of angle :";
        cin>>ang3;
        if(ang1<90 && ang2 <90 && ang3<90){
            cout<<"this is a Acute Triangle"; 
        }else if(ang1==90 || ang2 ==90 || ang3==90){
            cout<<"this is a Right Triangle"; 
        }else if(ang1>90 || ang2 >90 || ang3>90){
            cout<<"this is a Obtuse Triangle"; 
        }
    }else{
        cout<<"you enter wrong input";
    }

    
    
   
}
