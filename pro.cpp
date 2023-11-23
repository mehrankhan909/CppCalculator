#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
       int num1,num2;
       cout << "\n\n\n\t\t\t\t\t\tMaths Calculator";
       cout << "\n\n\t\t\t\t\t\tEnter Two Number";
       cout << "\n\t\t\t\t\t       -------------------";
       char a;
       cout << "\n\n\t\t\t\tTo start Calculation Please Enter what to do: \"+ - * /\" " <<endl;
       cout << "\t\t\t\t\t\t+ for addition";
       cout << "\n\t\t\t\t\t\t- for subtraction";
       cout << "\n\t\t\t\t\t\t* for multiplication";
       cout << "\n\t\t\t\t\t\t/ for division\n\n\t\t\t\t\t\t";
       cin >> a;  
	   cout << "\n\t\t\t\t\t\tEnter Num1: ";
	   cin >> num1; 
	    cout << "\n\t\t\t\t\t\tEnter Num2: ";
	   cin >> num2;  
       switch(a){
       	case '+':
       		cout << "\n\t\t\t\t\t  Answer: "<< num1 << " + " << num2 << " = " << num1+num2;
       		break;
       	case '-':
       		cout <<"\n\t\t\t\t\t  Answer: " << num1 << " - " << num2 << " = " << num1-num2;
       		break;
       	case '*':
       		cout <<"\n\t\t\t\t\t  Answer: " << num1 << " x " << num2 << " = " << num1*num2;
       		break;
       	case '/':
       		cout <<"\n\t\t\t\t\t  Answer: " << num1 << " / " << num2 << " = " << num1/num2;
       		break;
       	default:
       		cout << "\n\t\t\t\t\t\tYou have entered wrong sign";
	   }
	   cout << "\n\n\t\t\t\t\tPress any key to reset Calculator: ";
	   getch();
	   system("cls");
	   main();
}