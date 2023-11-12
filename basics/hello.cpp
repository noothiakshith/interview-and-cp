#include<iostream>
using namespace std;
int main(){
	int principle,time;
	float rate,si;
	cout<<"please enter the principle ,time,rate"<<endl;
	cin>>principle>>time>>rate;
	si=principle*rate*time/100;
	cout<<si;
}