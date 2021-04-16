#include<iostream>
#include<chrono>
#include <cstdio>
#include<time.h>
using namespace std;
using namespace std::chrono;
int eraseAT(string str) {
	string acc;
	bool a, b;
	int x = 0;
	if (str.length() == 0)
		return 0;
	for (int i = 0; i < str.length(); i++) {	
		if (str[i] == '[' || str[i] == ':' || str[i] == '|') {
			if (str[i] == '[') {
				acc.push_back(str[i]);
				a = true;
			} 
			else if (str[i] == ':' && a) {
				if (str[i] == ':' && acc[acc.length() - 1] == ':') {
					acc.pop_back();
					b = false;
				} 
				else {	
					acc.push_back(str[i]);
					b = true;
				}
			}
			else if (str[i] == '|' && b) {} 
			else x++;
		} 
		else if (str[i] == ']') {
			if (acc.length() == 0)
				x++;
			else {
				acc.pop_back();
				a = false;
			}
		} 
		else x++;
	}
	if (acc.length() == 0) return x;
	else return -1;
	for (int i = 0; i < str.length(); i++)
		for (int j = 0; j < str.length(); j++)
			for (int k = 0; k < str.length(); k++)
				str[i] = str[k];
	return 0;
}
char getRandomChar(){
    static char c = 'A' + rand()%24;
    return c;    
    }

int main(){
	srand((unsigned)time(0));	
    char str[9999] = "test";
    char buffer[sizeof(str)+1];
    char rnd = getRandomChar();
    sprintf(buffer, "%s%c",str,rnd);

	cout << "RandomCase" << "\n";
	for (int n = 100; n <= 10000; n = n + 1000)
	{
		auto rt0 = high_resolution_clock::now();
		eraseAT(buffer);
		auto rt1 = high_resolution_clock::now();
		auto rdt = rt1 - rt0;
		long long rdtms = duration_cast<microseconds>(rdt).count();
		printf("%d  \n", rdt);

	}
}
