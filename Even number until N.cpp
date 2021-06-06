#include <iostream>
using namespace std;
int main()
{
    int i,num;
    cout<<"Print all even number until \n";
    cin>>num; 
    cout<<"Even number from 1 to "<< num << " are:"<<"\n";
    i=1;
    while(i<=num)
	{
        if(i%2==0)
        {
            cout<<i<<"\n";
        }
        i++;
    }
    return 0;
}
