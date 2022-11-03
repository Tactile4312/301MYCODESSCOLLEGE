#include <iostream.h>
#include <conio.h>
int dish,choice;
float total=0, bf, drk, price=0, lch, add, many=0;

void main(){
	a:
	clrscr();
	cout<<"Welcome To our Karindiryas Store"<<endl;
	cout<<"[1] Breakfast\n";
	cout<<"[2] LunchFood\n";
	cout<<"Please Select your prefered choice food\n";
	cin>>dish;

	switch(dish)
	 {
	   case 1:
		   cout<<"========BREAKFAST======="<<endl;
		   cout<<"[1] spaghetti....Php 20"<<endl;
		   cout<<"[2] pansit.......Php 25"<<endl;
		   cout<<"[3] fried rice...Php 15"<<endl;
		   cout<<"What is your choice: ";
		   cin>>choice;
		   cout<<"How many: ";
		   cin>>many;
		   break;

		   if(choice==1)
		   {
		     cout<<"spaghetti";
		     price= 20;
		   } else if (choice==2) {
		     cout<<"pansit/n";
		     price=25;

		   } else if (choice==3) {
		     cout<<"Fried rice";
		     price=15;
		   }

	    case 2:
		   cout<<"==========LUNCH=============="<<endl;
		   cout<<"[1] Ginataang palaka....Php50"<<endl;
		   cout<<"[2] Pritong kalapati....Php30"<<endl;
		   cout<<"[3] lechon rabbit.......Php45"<<endl;
		   cout<<"What is your choice: ";
		   cin>>choice;
		   cout<<"how many: ";
		   cin>>many;
		   break;
		   if(choice==1) {
		    cout<<"Ginataang palaka";
		    price=50;

		   }else if(choice==2) {
		    cout<<"Pritong kalapati";
		    price=30;

		   }else if (choice==3) {
		    cout<<"Lechong rabbit";
		    price=45;
		   }
	     default: cout<<"invalid";
		      goto a;
		      break;
	}

	total = price*many;
	cout<<"your total is: "<<total<<endl;





getch();

}