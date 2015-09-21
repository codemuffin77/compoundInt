//This file is part of compoundInt projects
//that includes three source files: compoundIntHead.h, 
//compoundIntClass.cpp and compoundIntMain.cpp.
//This program is free to use, you can redistribute it 
//and modify it under the software license.
//Program Author: Zhen Qian (Martin), Rutgers University
//Email:qianzhen77@hotmail.com, or zhen.qian@rutgers.edu.com
//Ths programi is distributed in the hope that it will be useful, 
//but without any warranty for a particular purpose.
// Copyright (c) Sep 2015


#include <iostream>
#include "compoundIntHead.h"
using namespace std;

int main(){
	float rate;      
	float value;
	int period;
	int choice;
	
	do{
		cout<<"This program will compute the future value of sum of money. \n";
		cout<<"Please enter the current value of investment.\n";
		cin>>value;
		cout<<"please enter the number of periods.\n";
		cin>>period;
		cout<<"please enter the interest rate.\n";
		cin>>rate;
		compoundInt myInt(rate, value, period);	                             //create new object
		cout<<"Investment "<<value<<" with interest rate of "<<rate<<" in "
			<<period<<" will yield "<<myInt.futureValue()<<" .\n"<<endl;    //use class function 
		cout<<"Please enter 1 to continue and 0 for to exit: ";
		cin>>choice;	
	}while(choice==1);
	
	cout<<"Thanks for using our future value computing tool.\n"<<endl;
	return 0;
}
