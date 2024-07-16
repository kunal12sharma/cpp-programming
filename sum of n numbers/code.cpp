#include <iostream>
using namespace std;

int main() {
    
    int n,sum=0;
cout<<"enter value of n:";
cin>>n;
    
    for(int i=0;i<n;i++)
    {
        int number=0;
        cout<<"enter the"<< i+1<<" value:";
        cin>>number;
        sum= sum+number;
    }
    cout<<"sum="<<sum;
    return 0;
}
