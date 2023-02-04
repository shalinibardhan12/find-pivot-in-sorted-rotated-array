#include<iostream>
using namespace std;
int Pivot(int arr[],int n)
{
    int s =0;
    int e = n-1;
    int mid = (s+e)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s = mid+1;
        }
        else 
        e = mid;
        mid = (s+e)/2;
    }
    return s;
}
int main()
{
    int arr[5] = {3,4,7,9,1};
    int ans = Pivot(arr,5);
    cout<<"pivot in this array is "<< ans;
    return 0;
}