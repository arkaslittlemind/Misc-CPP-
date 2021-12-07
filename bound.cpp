#include<iostream>
using namespace std;

int firstOcurrence(int arr[], int n, int key)
{
    int start = 0; int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            end = mid - 1;  
        }

        else if(key > arr[mid]){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int lastOcurrence(int arr[], int n, int key)
{
    int start = 0; int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while(start <= end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;  
        }

        else if(key > arr[mid]){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}



int main(){

    int even[5] = {1, 2, 3, 3, 5};

    cout<<"First occurence of 3 is at Index "<<firstOcurrence(even, 5, 3)<<endl;
    cout<<"Last occurence of 3 is at Index "<<Ocurrence(even, 5, 3)<<endl;
    

    return 0;
}

