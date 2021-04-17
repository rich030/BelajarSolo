#include<iostream>
#include<time.h>
#include<chrono>
#include <array>
using namespace std;
using namespace std::chrono;
void swap(int * xp, int * yp){
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void sort(int arr[], int n){
	int i, j;
	for(i=0; i<n-1; i++){
		for(j=0; j<n-i-1; j++){
			if(arr[j]>arr[j+1]) swap(&arr[j], &arr[j+1]);
		}
	}
}

int main(){
	cout << "\t\tBestCase\tWorstCase\tRandomCase" << "\n";
	for (int n = 100; n <= 10000; n = n + 1000)
	{
		srand(time(0));
		int* best = new int [n];
		int* worst = new int [n];
		int* random = new int [n];
		for (int i = 0; i < n; i++)
		{
			best[i] = i;
			worst[i] = n-i;
			random[i] = rand() % 10000;
		}
		printf("n = %d \t", n);

		auto bt0 = high_resolution_clock::now();
		sort(best, n);
		auto bt1 = high_resolution_clock::now();
		auto bdt = bt1 - bt0;
		long long bdtms = duration_cast<microseconds>(bdt).count();
		printf("%d \t", bdt);

		auto wt0 = high_resolution_clock::now();
		sort(worst, n);
		auto wt1 = high_resolution_clock::now();
		auto wdt = wt1 - wt0;		
		long long wdtms = duration_cast<microseconds>(wdt).count();
		printf("%d \t", wdt);

		auto rt0 = high_resolution_clock::now();
		sort(random, n);
		auto rt1 = high_resolution_clock::now();
		auto rdt = rt1 - rt0;
		long long rdtms = duration_cast<microseconds>(rdt).count();
		printf("%d \n", rdt);
	}
}