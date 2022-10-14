#include <iostream>
using namespace std;
int main()
{
    int i,arr[1000];
    for(i=0; i<1000; i++)
    {
        arr[i]=i+1;
    }
    /*for(i=0; i<1000; i++)
    {
        cout<<arr[i]<<", ";
    }*/
    cout<<endl;
    int s;
    cout<<"Search: ";
    cin>>s;

    //Linear Search Engine
    for(i=0; i<1000; i++)
    {
        if(arr[i]==s)
        {
            cout<<"Index: "<<i<<" = "<<arr[i]<<endl;
            break;
        }
    }
}