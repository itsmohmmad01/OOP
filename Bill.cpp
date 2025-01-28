#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    string item[3]={"Rice","oil","soap"};
	int price[3]={45,1400,34};   	
	cout<<"Items\tPrices"<<endl;
	for(int i=0;i<3;i++)
	{
		cout<<item[i]<<"\t"<<setw(5)<<price[i]<<endl;
	}
	cout<<"_______________________________\t"<<endl;
	cout<<"Total"<<"\t"<<setw(5)<<price[0]+price[1]+price[2];
}
