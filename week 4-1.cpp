#include<iostream>
using namespace std;
int c=0;
void merge(int a[],int l,int mid, int r);

void mergesort(int a[],int l,int r)
{
    if(l<r)
    {
        int mid=(l+r)/2;
        mergesort(a,l,mid);
        mergesort(a,mid+1,r);
        merge(a,l,mid,r);
    }
    }
    void merge(int a[],int l,int mid,int r)
    {
        {
 int i=l;
int j=mid+1;
int k=l;
int b[r+1];

while(i<=mid && j<=r)
{
if(a[i]<=a[j])
{

b[k]=a[i];
i++;
}
else
{
b[k]=a[j];
j++;
}
k++;
c++;
}
if(i>mid)
{


while(j<=r)
{
b[k]=a[j];
j++;
k++;
}}
else
{
while(i<=mid)
{
b[k]=a[i];
i++;
k++;
}
}
for(k=l;k<=r;k++)
{
a[k]=b[k];
}

}

    }

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        c=0;
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        mergesort(a,0,n-1);
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl<<"comparisions "<<c<<endl;
    }
}
