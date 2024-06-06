#include<iostream>
#include<cstdlib>
#include<time.h>

using namespace std ;

int random_number();
void menu();
void start();

int main()
{
    cout<<"\n\t\t------WELCOME TO RANDOM GESSING GAME------\n\n"<<endl;
    menu();

    return 0;

}
void menu()
{
    int choice;
    cout<<"\n\n1.Start\n2.Exit\n\nEnter ypor choice: ";
    cin>>choice;

    while(1)
    {
      switch(choice)
      {
        case 1:
          start();
          break;
        default:
            exit(1);
            break;
      }
    }
}
int random_number()
{
  srand(time(0));
    return (rand()% 100)+1;
}
void start()
{
       
}


