#include <iostream.h>
#include <conio.h>

int reg, kids, frreg, frkids, regtotal, ticket, ticket1, final, finalsk, kidstotal, choice, choice1, overall;

void main()
{
	clrscr();
	start:
	clrscr();
	cout<<"WELCOME TO CvSU RESORT\n";
	cout<<"Please choose ticket\n";
	cout<<"[1] Regular --- 150php\n";
	cout<<"[2] Kids ------ 100php\n";
	cout<<"enter number: ";
	cin>>ticket;
	if (ticket >2 || ticket <1){
		cout<<"Invalid entry. PLease try again: \n" ;
		cout<<"Please select number: ";
		cin>>ticket;
	}
	if (ticket == 1){
		cout<<"How many: ";
		cin>>reg;
	}
	else{
		cout<<"How many: ";
		cin>>kids;
	}
	cout<<"Do you want to buy another ticket?\n";
	cout<<"[1] yes\n";
	cout<<"[2] No\n";
	cout<<"Please select number: ";
	cin>>choice;
	if (choice >2 || choice <1){
		cout<<"Invalid entry. PLease try again: \n" ;
		cout<<"Please select number: ";
		cin>>choice;

	}
	if (choice == 1){up:

	clrscr();
	cout<<"WELCOME TO CvSU RESORT\n";
	cout<<"Please choose ticket\n";
	cout<<"[1] Regular --- 150php\n";
	cout<<"[2] Kids ------ 100php\n";
	cout<<"enter number: ";
	cin>>ticket1;
	if (ticket1 >2 || ticket1 <1){
		cout<<"Invalid entry. PLease try again: \n" ;
		cout<<"Please select number: ";
		cin>>ticket1;
	}
	if (ticket1 == 1){
		cout<<"How many: ";
		cin>>reg;
	}
	else if (ticket1 == 2){
		cout<<"How many: ";
		cin>>kids;
	}
	cout<<"Do you want to buy another ticket?\n";
	cout<<"[1] yes\n";
	cout<<"[2] No\n";
	cout<<"Please select number: ";
	cout<<choice1;
		if (choice1 == 1) goto up;
		else if (choice1 == 2)

down:
		regtotal= reg * 150;
		kidstotal= kids * 100;
		frreg= reg / 5;
		frkids= kids /5;



		cout<<"you bought:\n";
		cout<<reg<<" Regular tickets, "<<frreg;
		final = reg - frreg;
		regtotal= final *150;
		cout<<" for "<<regtotal<<endl;
		finalsk= kids - frkids;
		kidstotal= finalsk *100;
		cout<<"and "<<kids<<" Kids ticket, "<<frkids<<" for "<<kidstotal<<endl;
		overall = regtotal + kidstotal;
		cout<<"Total Price is: "<<overall;


	}



	

	


	getch();
}


