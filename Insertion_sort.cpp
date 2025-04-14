#include<bits/stdc++.h>
using namespace std;
void insertion_sort_algo(int arr[],int n)
{
    int j;
    for(int i=0;i<n;i++)
    {
        j=i;
        while(j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }

}
int main()
{
    int n;
    cout<<"enter the size:";
    cin>>n;
    int arr[n];
    cout<<"enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertion_sort_algo(arr,n);
     cout<<"array after using insertion sort:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
