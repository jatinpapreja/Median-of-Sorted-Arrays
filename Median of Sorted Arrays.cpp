#include<iostream>
using namespace std;
void merged(int a[],int b[],int c[],int n)
{
    int k{};
    int j{};
    int i{};
    while((i<n)||(j<n))
    {
        if(a[i]<b[j])
        {

            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }

cout<<c[n-1];
}
int main()
{
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    cin>>b[i];

    int c[2*n]={0};
    merged(a,b,c,n);
    return 0;
}
