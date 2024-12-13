#include<stdio.h>
int pivot,start,end,lb,ub;
void swap()
{
    int temp=a[start];
    a[start]=a[end];
    a[end]=temp;

}
int partition(int a[],int lb,int ub)
{
    pivot=a[lb];
    start=lb;
    end=ub;
    while(start<end)
    {
        while(a[start]<=pivot)
        {
            start++;
        }
        while(a[end]>pivot)
        {
            end++;
        }
        if(start<end)
        {
            swap(a[start],a[end]);
        }
    }
    swap(a[lb],a[end]);
    return end;
}
void main()
{
int a[]={10,54,89,16,38,100};
int loc;
void Quicksort(a,lb,ub)
{
    if(lb<ub)
    {
        loc=partition(a,lb,ub);
        Quicksort(a,lb,loc-1);
        Quicksort(a,loc+1,ub);
    }
}
}
