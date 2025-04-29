/*Example Output:
Enter a message to encrypt: Hello World
Message successfully encrypted and stored in data.txt
Reading and decrypting file...
Decrypted Message: Hello World
*/

#include<stdio.h>
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main() {
	int i,ch;
	char input;
	char output;
	string line;
	string line1;
	cout<<"Press 1 if you want to get the actual information...... "<<endl;
	cout<<"If you want to add information into file then press 2......"<<endl;
	cin>>ch;
	if(ch==1) 
	{
		ifstream object;
		object.open("Personal_Info.txt");
		cout<<"Reading and decrypting file... "<<endl;
		if(object.is_open())
		{
			while(getline(object,line))
			{	
				for(i=0;line[i]!=0;i++)
				{	if(line[i]==32)
					{
						cout<<" ";
					}
					input = line[i]-1;
					cout<<input;
				}
			}
			cout<<endl<<"Data decrypted successfully !";
			object.close();	
		}
		else
		{
			cout<<"Cant open file...."<<endl;
		}
	}
	if(ch==2)
	{
		ofstream output_file;
		output_file.open("Personal_Info.txt",ios::app);
		if(output_file.is_open())
		{
			cout<<"Enter data that you want to add : "<<endl;
			cin.ignore(); 
			getline(cin,line1);
			output_file<<" ";
			for(i=0;line1[i]!=0;i++)
			{	
				output=line1[i]+1;
				output_file<<output;
			}
			cout<<"Data encrypted successfully !";
			output_file.close();
		}
		else
		{
			cout<<"Cant open file ...."<<endl;
		}
	}
	return 0;
}
