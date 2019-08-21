#include <iostream>
#include <iomanip>
using namespace std;
int checkNum(int,int);
int main()
{
	cout<<"####welcome to  guessing  number game###"<<endl;
	int number,num;
	srand(time(NULL));
num = rand() % 10+1;
do{
	cout<<"Guess the number(1-10):";
		cin>>number;
		checkNum(number,num );
}while(num!=number);
	
	

}
    	
 int checkNum(int t,int w)
{

		if (t >w ){
		
		cout<<"The secret number is highter"<<endl;
		
		}
		if (t<w){
		
		cout<<"The secret number is lower"<<endl;
		
		}
		if(t==w){ 
		
		cout<<"congratulations!"<<endl;
		cout<<"The secret number is "<<w<<endl;
		cout<<"you made "<<w<<" guesses"<<endl;
		}
		return(t);
}
		
	

	


