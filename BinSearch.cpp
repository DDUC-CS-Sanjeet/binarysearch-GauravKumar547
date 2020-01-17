#include<iostream>
#include<algorithm>
using namespace std;

bool binarySearchReacursive(int* array, int startIndex, int lastIndex, int element)
{
	 int mid=(startIndex+lastIndex)/2;
	 if(startIndex<=lastIndex)
	 {
	 	if(element==array[mid])
        {
      	   return true;
	    }
	    else if(array[mid]<element)
        {
             return binarySearchReacursive(array,mid+1,lastIndex,element);
        }
       else
        {
            return binarySearchReacursive(array,startIndex,mid-1,element);
        }
    
	 } 
	 else
	 {
	 	return false;
	 } 
     
}

bool binarySearchIterative(int* array, int startIndex, int lastIndex, int element)
{
	 int mid=0;
     while(startIndex<=lastIndex)
      {             
         mid=(startIndex+lastIndex)/2;
         if(array[mid]<element)
            {
                 startIndex=mid+1;
            }
             else
             {
                 lastIndex=mid-1;
             }
         if(element==array[mid])
           {
      	     return true;
	       }
       }
       return false;
     
 
}

int main()
{
	int element;
	int size;
	cout<<"Enter the size of the array: ";
	cin>>size;
	int arr[size];
	cout<<"Enter the elements of array: ";
	for(int i=0;i<size;i++)
	cin>>arr[i];
	sort(arr,arr+size);
	cout<<"Enter the element to search: ";
	cin>>element;
	if(binarySearchIterative(arr,0,size,element))
	{
		cout<<"\nThe element is found using iteration.";
	}
	else
	{
		cout<<"The element is not found using iteration.";
	}
	if(binarySearchReacursive(arr,0,size,element))
	{
		cout<<"\nThe element is found using recursion.";
	}
	else
	{
		cout<<"The element is not found using recursion.";
	}
	



  return 0;
}
