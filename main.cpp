#include<iostream>
using namespace std;
int n;
int V[100];
int main()
{
    cout<<"n=";
    cin>>n;

    for(int i=1; i<=n; i++) {
        cout<<"V["<<i<<"]";
            cin>>V[i];}
    int minim=V[i];
    int loc=1;
    if(V[j]<minim){minim=V[j];
                    loc=j;}

    for(int i=1; j<=n; j++) {cout<<V[i];}
    for(int i=1; j<=n; j++)
    {
       if((V[j],minim)){minim=V[j];
        loc=j;
       }
    }
}
