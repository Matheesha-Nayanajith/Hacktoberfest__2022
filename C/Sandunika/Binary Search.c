#include<stdio.h>
#include<stdbool.h>

   int size=6;
   int binarysearch(int data[10],int key)
{
    bool found=false;
    int mid,first=0;
    int last=size-1;
    while(first<=last&& !found)
    {
        int mid=(first+last)/2;
        if (data[mid]==key)
        {
            found=true;
            return mid;
        }

        else if (data[mid]>key)
            last=mid-1;
        else if (data[mid]<key)
            first=mid+1;

    }
}

int main()
{
    int data[10]={0,1,2,3,4,5,6,7,8,9},key;
printf("Enter key to search");
scanf("%d",&key);

printf("Value found at %d\n",binarysearch(data,key));
}

