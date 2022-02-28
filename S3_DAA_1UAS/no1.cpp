#include <iostream>
#include <array>
using namespace std;


void merge(int *arr, int l, int h, int mid)
{
	int i, j, k, temp[h-l+1];
	i = l;
    k = 0;
	j = mid + 1;
	while (i <= mid && j <= h){
		if (arr[i] < arr[j]){
			temp[k] = arr[i];
			k++;
			i++;
		}
		else{
			temp[k] = arr[j];
			k++;
			j++;
		}
    }
	while (i <= mid){
		temp[k] = arr[i];
		k++;
		i++;
	}
	while (j <= h){
		temp[k] = arr[j];
		k++;
		j++;
	}
	for (i = l; i <= h; i++)
    {
		arr[i] = temp[i-l];
	}
}

void mergesort (int arr[],int l,int h) {
    if(l < h){
        int mid = (l+h)/2;
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,h);
        merge(arr,l,h,mid);
    }
}

int main (){
    int array[10]={1,4,56,54,2,87,32,456,88,34};
    int n = sizeof(array)/sizeof(array[0]);
    mergesort(array, 0, n-1);
    cout << "sorted" << endl;
    for (int i = 0; i < n; i++)
    {
        if (i+1 != n){
            cout << array[i] << ", ";
        }
        else{
            cout << array[i] << endl;
        }
    }
}