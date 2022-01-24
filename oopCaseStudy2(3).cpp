#include<iostream>
#include<string.h>
#include<stdlib.h>

using namespace std;
int d;
class bag{
	float weight;
	char color[10];
	static int total_obj;
	static float total_wt;
	public:
	void getdata(float, char[]);	
	void getdata();
	void getdata(char[]);
	void getdata(float);
	void totalobj_afterdelete(int, bag);
	void display(int);
	static void output();
};

int bag::total_obj;
float bag::total_wt;

void bag::getdata(float wt, char col[]){
	weight=wt;
	strcpy(color, col);
	total_obj=total_obj+1;
	total_wt=total_wt+weight;
}

void bag::getdata(){
	weight=20;
	strcpy(color,"green");
	total_obj=total_obj+1;
	total_wt=total_wt+weight;
}

void bag::getdata(char col[]){
	weight=30;
	strcpy(color,col);
	total_obj=total_obj+1;
	total_wt=total_wt+weight;
}

void bag::getdata(float wt){
	weight=wt;
	strcpy(color,"white");
	total_obj=total_obj+1;
	total_wt=total_wt+weight;
}

void bag::totalobj_afterdelete(int d, bag){
//    bag b[d-1];
//	float wt=weight;
//	cout<<weight;
	total_obj=total_obj-1;
	total_wt=total_wt-weight;
}

void bag::display(int n){
	n=n+1;
	cout<<n<<"\t"<<color<<"\t"<<weight<<endl;
}

void bag::output(){
	cout<<"\nthe total number of objects are:"<<total_obj<<endl;
	cout<<"\nthe total weight is:"<<total_wt<<endl;
}
int main(){
	bag b[10];
	float w;
	char c[10];
	
	int i=0, n=0, choice;
	while(choice!=8){
		
		cout<<"1. enter color and weight\n2.enter default values for color and weight\n";
		cout<<"3.enter color but default value for weight\n4.enter weight but default value for color\n5.delete object\n";
		cout<<"6.display\n7.exit\n";
		cout<<"enter your choice: ";
		cin>>choice;
	
		switch(choice){
			
			case 1:
			
				cout<<"weight:";
				cin>>w;
				cout<<"color:";
				cin>>c;
		
				b[i].getdata(w, c);
				n+=1;
				i+=1;
			//	bag::output();
				break;
			
			case 2:
				
				b[i].getdata();	
				n+=1;
				i+=1;
		//		bag::output();
				break;
				
				
			case 3:	
				cout<<"color:";
			
				cin>>c;
				
				b[i].getdata(c);
				n+=1;
				i+=1;
			//	bag::output();
				break;
			
				
			case 4:
				
				cout<<"weight:";
				cin>>w;
				b[i].getdata(w);
				n+=1;
				i+=1;
				//bag::output();
				break;
			
			case 5:
				int d;
				cout<<"enter the object you want to delete: ";
				cin>>d;
				b[d-1].totalobj_afterdelete(d, b[d-1]);
		 
				if(d>n){
					cout<<"\ncannot delete"<<endl;
				}
				else{
					int i;
					for(i=d-1; i<n; i++){
						b[i]=b[i+1];
					}
				}
				n=n-1;
				
				
				break;
								
			case 6:
				
			//	int i;
				cout<<"sr. no.\t"<<"color\t"<<"weight"<<endl;
				for(i=0; i<n; i++){
					b[i].display(i);
				}
				bag::output();
				break;
				
			case 7:
				exit(0);
		}

	}
			
			
	return 0;
}
