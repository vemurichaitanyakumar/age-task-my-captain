#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter Age of a user:";
    cin>>age;
    if(age>=13 && age<=19)
    {
        cout<<"person is teenager\n";
    }
    else
    {
        cout<<"person is not a teenager\n";
    }
    if(age>=18)
    {
        cout<<"you are eligible to vote\n";
    }
    else
    {
        cout<<"\n you are not eligible to vote";
    }
    return 0;
}
