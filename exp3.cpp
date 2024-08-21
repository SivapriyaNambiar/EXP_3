#include<iostream>
using namespace std;

int main()
{
    int a,b;
    printf("Enter 2 variables: ");
    scanf("%d %d",&a, &b);
    int c = a+b;
    cout << "The addition of 2 numbers "<<c<<endl;
    int d = a-b;
    cout << "The subtraction of 2 numbers "<<d<<endl;
    int e = a*b;
    cout << "The multiplication of 2 numbers "<<e<<endl;
    float f = a/b;
    cout << "The division of 2 numbers "<<f<<endl;
    if(a==b)
    {
        cout << "The numbers are equal" << endl;
    }
    else if(a>b)
    {
        cout <<"The first number is greater than the second one "<< endl;
    }
    else
    {
        cout <<"The second number is greater than the first one" << endl;
    }
    float g = a%b;
    cout<< "The reminder of the numbers is: " <<g<<endl;
    long int k = a*a;
    cout<<"The square of the first number is: "<<k<<endl;
    for(int i = 0;i<2;i++)
    {
        if(a<b && a!=b)
        {
            b =- 10;
            a =+ 1;
        }
        else if(a>b || a==b)
        {
            a =-10;
            b += 1;
        }
        cout<<a<<endl;
        cout<<b<<endl;
    }

}