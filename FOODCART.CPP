#include <iostream.h>
#include <conio.h>

//program that will order lunch and breakfast with addons drinks

float total, bf, drk, dish, price, lch, add;


void main(){
clrscr();

	cout<<"Welcome To Our Karindiryas Store"<<endl;
	cout<<"[1] BreakFast"<<endl;
	cout<<"[2] LunchFood"<<endl;
	cout<<"Please Select your prefered choice"<<endl;
	cin>>dish;
	switch(dish){
		case 1: 
				cout<<"[1]Boiled Egg.......12.10php"<<endl;
				cout<<"[2]Sunny Sideup Egg.10.25php"<<endl;
				cout<<"[3]Hot Dog..........10.6php"<<endl;
				cout<<"[4]Fried Rice.......15.7php"<<endl;
				cout<<"Please Select your meal"<<endl;
				cin>>bf;
				switch (bf)
				{
				case 1: pirce = 12.10;
					break;

				
				default:
					cout<<"Invalid Entry"<<endl;
					break;
				}
		break;
		case 2: 
				cout<<"[1]ADOBO...............35.10php"<<endl;
				cout<<"[2]Chicken Curry........30.25php"<<endl;
				cout<<"[3]Sinigang.............40.6php"<<endl;
				cout<<"[4]Nilagang baboy.......40.7php"<<endl;
				cout<<"[5]Pakbet...............20.50php"<<endl;
				cout<<"Please Select your lunch"<<endl;
		break;
		default:
		cout<<"invalid Entry"
	}
getch();
}