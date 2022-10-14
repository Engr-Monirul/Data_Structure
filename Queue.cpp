#include <iostream>
#include <queue>
#include <string.h>
using namespace std;

int main()
{
    queue<string> name;
    if(name.empty())
    {
        cout<<"Queue Is Empty!"<<endl;
    }
    else
    {
        cout<<"Queue Is Not Empty!"<<endl;
    }

    name.push("Joni");
    name.push("Moni");
    name.push("Roni");

    cout<<"Front Element: "<<name.front()<<endl;

    cout<<"Back Element: "<<name.back()<<endl;

    cout<<"Queue Size: "<<name.size()<<endl;

    cout<<"Queue Data: ";
    while(!name.empty())
    {
        cout<<name.front()<<", ";
        name.pop();
    }
    cout<<endl;

    if(name.empty())
    {
        cout<<"Queue Is Empty!"<<endl;
    }
    else
    {
        cout<<"Queue Is Not Empty!"<<endl;
    }
}