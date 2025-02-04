#include<iostream>
using namespace std;
class Box{
	private:
		int l;
		int b;
		int h;
	public:
		Box(){ 
			cout<<"\nDefault Constructor\n";	
			l=0;
			b=0;
			h=0;
		}

		void getBoxInfo(){
		     cout<<l<<b<<h;
		}
		
		Box(int x, int y, int z){ 
		cout<<"\nParameterized constructor";
		   l=x;
		   b=y;
		   h=z;	
		}
		
		Box(const Box& obj){
			cout<<"\nCopy constructor";
			l=obj.l;
			b=obj.b;
			h=obj.h;
		}
		
		void setBoxInfo(){
			cin>>l>>b>>h;
		}	
};
int main(){
	
	Box b1;
	b1.setBoxInfo();
	b1.getBoxInfo();
    Box b2(7,6,6);
	b2.getBoxInfo();
	Box b3=b2;
	b3.getBoxInfo();

}


