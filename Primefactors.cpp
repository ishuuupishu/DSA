#include<bits/stdc++.h>
using namespace std;

void PrimeFactors(int n)
{
    for(int i=2; i<=n; i++)
    {
        while(n%i==0)
        {
            cout<<i<<endl;
            n/=i;
        }
    }

}

int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Prime Factors" << " ";
    PrimeFactors(num);
}
