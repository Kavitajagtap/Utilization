/*
This number system converter  converts  3 number systems

1-> Binary to Decimal
2-> Octal to Decimal
3-> Hexadecimal to Decimal

Working of converter -->

******************** Convertor **************************

             1. Binary to Decimal
             2. Octal to Decimal
             3. Hexadecimal to Decimal

Enter any operation (1 , 2, 3) you want to execute: 3
Enter a hexadecimal number: 7D3
7D3 in decimal = 2003

Do you want to continue?(Y/N) y

---------------------------------------------------------------------

             1. Binary to Decimal
             2. Octal to Decimal
             3. Hexadecimal to Decimal

Enter any operation (1 , 2, 3) you want to execute: 1
Enter a binary number: 1011
1011 in decimal = 11

Do you want to continue?(Y/N) Y

---------------------------------------------------------------------

             1. Binary to Decimal
             2. Octal to Decimal
             3. Hexadecimal to Decimal

Enter any operation (1 , 2, 3) you want to execute: 2
Enter a octal number: 314
314 in decimal = 204

Do you want to continue?(Y/N) N

Process returned 0 (0x0)   execution time : 83.475 s
Press any key to continue.

*/

#include <iostream>
#include <string.h>
#include <cmath>
using namespace std;

int binaryToDecimal(int a);
int octalToDecimal(int a);
void hexadecimalToDecimal(char[20]);
int main()
{
    int n, num;
    char c[20],ch;

    cout <<"******************** Convertor **************************"<<"\n\n";
    do
    {
       cout<<"             1. Binary to Decimal         "<<endl;
       cout<<"             2. Octal to Decimal          "<<endl;
       cout<<"             3. Hexadecimal to Decimal    "<<endl;

       cout <<"\nEnter any operation (1 , 2, 3) you want to execute: ";
       cin>> n;
       switch(n)
            {
                case 1:  cout<<"Enter a binary number: ";
                         cin>>num;
                         cout<<num<<" in decimal = "<<binaryToDecimal(num)<<endl;
                         break;
                case 2:  cout<<"Enter a octal number: ";
                         cin>>num;
                         cout<<num<<" in decimal = "<<octalToDecimal(num)<<endl;
                         break;
                case 3:  cout<<"Enter a hexadecimal number: ";
                         cin>>c;
                         hexadecimalToDecimal(c);
                         break;
           }
        cout<<"\nDo you want to continue?(Y/N) ";cin>>ch;
        if(ch == 'N' || ch == 'n')
            break;
        cout<<"\n"<<"---------------------------------------------------------------------"<<"\n\n";
   }while(ch == 'Y' || ch == 'y');
    return 0;
}

int binaryToDecimal(int a)
{
    int digit,i = 0, sum = 0;
    while(a > 0)
    {
        digit = a % 10;
        sum = sum + digit *  pow(2 , i);
        a = a / 10;
        i++;
    }
    return sum;
}
int octalToDecimal(int a)
{
    int  digit,i = 0, sum = 0;
    while(a > 0)
    {
        digit = a % 10;
        sum = sum + digit *  pow(8 , i);
        a = a / 10;
        i++;
    }
    return sum;
}
void hexadecimalToDecimal(char q[20])
{
    int i, sum = 0, j = 0, temp;
    int a = strlen(q);
    for(i = a - 1; i >= 0; i--)
    {
        if((q[i] >= '0') && (q[i] <= '9'))
           temp = (int)q[i] - 48;
        else if((q[i] >= 'A') && (q[i]<='Z'))
           temp = (int)q[i] - 55;
        else if((q[i] = 'a')&& (q[i] <= 'z'))
            temp =(int)q[i] - 87;
        sum = sum + temp * pow(16 , j);
        j = j + 1;
    }
    cout<<q<<" in decimal = "<<sum<<endl;
}
