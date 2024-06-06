#include<iostream>

using namespace std;

void calculation(int,int);

int main()
{
    int a,b;
    cout<<"Entera a numbers: ";
    cin>>a;
    cout<<"Enter another numbers: ";
    cin>>b;
    calculation(a,b);

    return 0;
}

void calculation(int a, int b)
{
    char choice;

    cout<<"\n+\t-\t*\t/\n\nEnter Your Choice: ";
    cin>>choice;

   
        switch(choice)
        {
            case '+':
                cout<<"\nSum is: "<<a+b<<"\n\n";
                break;
            case '-':
                cout<<"\nSubtract is: "<<a-b<<"\n\n";
                break;    
            case '*':
                cout<<"\nMultipication is: "<<a*b<<"\n\n";
                break;
            case '/':
                cout<<"\nDivision is: "<<a/b<<"\n\n";
                break;    
            default:
                cout<<"Invalid Option...!";
                break;
                
        }
}