#include<iostream>
using namespace std;
int main()
{
    // Taking user input of no of day in week
    int n;
    cout<<"Enter no of day in week(1-7): ";
    cin>>n;

    //switch condition
    switch(n)
    {
        case 1:
        cout<<"Monday"<<endl;
        break;
        case 2:
        cout<<"Tuesday"<<endl;
        break;
        case 3:
        cout<<"Wednesday"<<endl;
        break;
        case 4:
        cout<<"Thursday"<<endl;
        break;
        case 5:
        cout<<"Friday"<<endl;
        break;
        case 6:
        cout<<"Saturday"<<endl;
        break;
        case 7:
        cout<<"Sunday"<<endl;
        break;

        default:
        cout<<"Invalid Input!"<<endl;
    }
    return 0;
    
}