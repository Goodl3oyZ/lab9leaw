#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main()
{
    int age,height,bounty;
    string cha;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<=25){
        cout<<"Enter your height: ";
        cin>>height;
        if(height<100)
        {
            cha="Chopper";
        }else if(height<180)
        {
            cha="Usopp";
        }else
        {
            cout<<"Enter your bounty: ";
            cin>>bounty;
        if(bounty>1.1*1e9)
            {
            cha="Zoro";
        }else
            {
            cha="Sanji";
            }
        }
    }else if(age<=60)
    {
        cout<<"Enter your bounty: ";
        cin>>bounty;
        if(bounty>5*1e8)
        {
            cha="Jinbe";
        }else
        {
            cha="Franky";
        }
    }else
    {
        cha="Brook";
    }
    cout<<"Your character = "<<cha;
}