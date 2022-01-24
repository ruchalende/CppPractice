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
	
	cout<<"weight:";
	cin>>w;
	cout<<"color:";
	cin>>c;
	
	b[0].getdata(w, c);
	
	b[1].getdata();	
	
	cout<<"color:";
	cin>>c;
	
	b[2].getdata(c);
	
	cout<<"weight:";
	cin>>w;
	b[3].getdata(w);
	
	int i;
	cout<<"sr. no.\t"<<"color\t"<<"weight"<<endl;
	for(i=0; i<4; i++){
		b[i].display(i);
	}
	
	bag::output();
	return 0;
}
