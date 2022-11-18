#include<iostream>

using std::cout, std::cin, std::endl;

void swap (int &num1, int &num2)
{
        int temp;
        temp=num1;
        num1=num2;
        num2=temp;
}
int main()
{
        int a=10,b=20;
        cout << "a = " << a << " b = " << b << endl;
        swap(a,b);
        cout << "a = " << a << " b = " << b << endl;
        
        return 0;
}