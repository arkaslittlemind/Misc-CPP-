#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Size:";
    cin>>n;
    for (int i = 0; i < 2*n; i++)
    {
        int totalColsinRow = i > n ? 2 * n - i: i;
        
        int noofspaces= n-totalColsinRow;
        for (int s = 0; s < noofspaces; s++)
        {
            cout<<" ";
        }
        
        for (int j = 0; j < totalColsinRow; j++)
        {
        cout<<"* ";
        }
        cout<<"\n";
        
    }
    return 0;
}