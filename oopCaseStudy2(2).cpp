#include<iostream>
#include<string.h>

using namespace std;

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
	void return_obj();
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
	

/*	
	cout<<"weight:";
	cin>>w;
	cout<<"color:";
	cin>>c;
	
//	n=bag::return_obj();
	b[n].getdata(w, c);
	
//	n=bag::return_obj();
	b[n].getdata();	
	
	cout<<"color:";
	cin>>c;
//	n=bag::return_obj();
	b[n].getdata(c);
	
	cout<<"weight:";
	cin>>w;
//	n=bag::return_obj();
	b[n].getdata(w);
	
	*/
	
	int choice;
	while(choice!=5){
		
		cout<<"1.getdata\n2.display\n3.display total weight and total objects\n4.exit\n";
		cout<<"enter your choice: ";
		cin>>choice;
		
		switch(choice){
			
			case 1:
				
					int ch;
					while(ch!=5){
						cout<<"1. enter color and weight\n2.enter default values for color and weight\n";
						cout<<"3.enter color but default value for weight\n4.enter weight but default value for color\n";
						cout<<"enter your choice: ";
						cin>>ch;
						
						switch(ch){
							
							int i;
							float wgt;
							char clr[10];
							for(i=0; i<10; i++){
				
								case 1:
									cout<<"weight:";
									cin>>wgt;
									cout<<"color:";
									cin>>clr;
									
									b[i].getdata(wgt, clr);
									break;
									
								case 2:
									b[i].getdata();	
									break;
									
								case 3:
									cout<<"color:";
									cin>>clr;
									
									b[i].getdata(clr);
									break;
									
								case 4:
									cout<<"weight:";
									cin>>wgt;
									b[i].getdata(wgt);
									break;
									
							}
						}
					}
					break;
				
			case 2:
				int i;
				cout<<"sr. no.\t"<<"color\t"<<"weight"<<endl;
			//	int n=bag::return_obj();
				for(i=0; i<10; i++){
					b[i].display(i);
				}
				break;
				
			case 3:
				bag::output();
				break;
				
			case 4:
				exit(0);
//			}
		}
	}
	
	
	
//	bag::output();
	return 0;
}
