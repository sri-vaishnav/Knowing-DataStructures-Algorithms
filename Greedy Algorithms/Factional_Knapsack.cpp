//calculate ratio (val/wight) for every item
#include<bits/stdc++.h>

int maxValue(int arr[][],int n)
{

}
int main()
{
    int n,capacity;
    cin>>n;
    cin>>capacity;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        cin>>arr[i][j];
    }
    cout<<maxValue(arr,n);
    return 0;
}