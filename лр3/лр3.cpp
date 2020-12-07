#include<iostream>
using namespace std;
class transport 
{
public:
	int km;
	int costofkm;
	int Cost;
	int speed;
	double Time;
	void setkm() 
	{
		cout << "Enter the distance: " << endl;
		cin >> km;
	}
	int getthecost() 
	{
		return costofkm;
	}
	void cost() 
	{
		setkm();
		getthecost();
		Cost = costofkm * km;
	}
	void printcost() 
	{
		cout << "The ticket will cost: ";
		cout << Cost << " dollars\n";
	}
	void time() 
	{
		getthespeed();
		Time = (double)km / speed;
	}
	int  getthespeed() 
	{
		return speed;
	}
	void printtime() 
	{
		cout << "The trip will last: ";
		cout << Time << " hours\n";
	}
};
class plane :public transport 
{
public:
	plane() 
	{
		costofkm = 100;
		cost();
		printcost();
		speed = 820;
		time();
	}
};
class train :public transport 
{
public:
	train() 
	{
		costofkm = 100;
		speed = 200;
		cost();
		printcost();
		time();
	}
};
class car :public transport 
{
	public: car() 
	{
		costofkm = 150;
		speed = 180;
		cost();
		printcost();
		time();
	}
};
int main() 
{
	plane pl1;
	train tr1;
	car car1;
	int choice;
	cout << "What transport do you prefer?" << endl;
	cout << "1-plane\n""2-train\n""3-car\n";
	cin >> choice;
	switch (choice) 
	{
	case 1:
		pl1.printtime();
		break;
	case 2:
		tr1.printtime();
		break;
	case 3:
		car1.printtime();
		break;
	}
	system("pause");
	return 0;
}