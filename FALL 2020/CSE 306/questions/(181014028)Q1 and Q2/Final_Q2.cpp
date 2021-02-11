#include <iostream>

using namespace std;

unsigned long long fibonacci(unsigned long long num1, unsigned long long num2){
    unsigned long long temp = num1 + (num2*num2);
    return temp;
}

int main()
{
    unsigned long long num1;
    unsigned long long num2;
    int num3;
    cout<<"input the number i, i+1 & n : "<<endl;
    cin>>num1>>num2>>num3;
    if(num1!=0){
        cout<<"input the number i, i+1 & n : "<<endl;
        cin>>num1>>num2>>num3;
    }
    else if(num2>2 || num2<1){
        cout<<"input the number i, i+1 & n : "<<endl;
        cin>>num1>>num2>>num3;
    }
    for(int i = 0;i<num3-2;i++){
        unsigned long long temp = fibonacci(num1,num2);
        num1 = num2;
        num2 = temp;
    }
    cout<<"final result : "<<num2<<endl;

    return 0;
}
