#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r1, c50, c25, c10, c5;
	cin >> r1 >> c50 >> c25 >> c10 >> c5;
	
	double total = 0;
	total += r1*1;
	total += c50*0.5;
	total += c25*0.25;
	total += c10*0.1;
	total += c5*0.05;
	
	cout << "R$" << total;
	
	return 0;
}