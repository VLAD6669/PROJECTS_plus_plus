#include <iostream>
using namespace std;
int main()
{
    //1 




 //   cout << "Choose a country(1-5): ";
	//cout << "[1]- Ukraine" << endl;
	//cout << "[2]- USA" << endl;
	//cout << "[3]- Canada" << endl;
	//cout << "[4]- Mexico" << endl;
	//cout << "[5]- Brazil" << endl;
	//int country;
	//cin >> country;
	//switch (country)	
	//{
	//default:
	//	cout << "Error choice" << endl;
	//	break;

	//case 1:
	//	cout << "Ukraine - Kiyv" << endl;
	//	break;

	//case 2:
	//	cout << "Usa - Washington D.C." << endl;
	//	break;

	//case 3:
	//	cout << "Canada - Ottawa" << endl;
	//	break;

	//case 4:
	//	cout << "Mexico - Mexico City" << endl;
	//	break;

	//case 5:
	//	cout << "Brazil - Brasília" << endl;
	//	break;
	//}



	//2
	//cout << "Enter day of the week(1-7): ";
	//cout << "[1]- Monday" << endl;
	//cout << "[2]- Tuesday" << endl;
	//cout << "[3]- Wednesday" << endl;
	//cout << "[4]- Thursday" << endl;
	//cout << "[5]- Friday" << endl;
	//cout << "[6]- Saturday" << endl;
	//cout << "[7]- Sunday" << endl;
	//int day;
	//cin >> day;
	//if (day >= 1 && day <= 5) {
	//	cout << "IT's work day " << endl;
	//}
	//else if (day ==6 || day ==7){
	//cout << "IT's weekend day " << endl;
	//}
	//else {
	//	cout << "Error choice" << endl;
	//}

	//3
	//cout << "Enter where is the ship sailing? ";
	//cout << "[1]- North" << endl;
	//cout << "[2]- South" << endl;
	//cout << "[3]- East" << endl;
	//cout << "[4]- West" << endl;
	//int direction;
	//cin >> direction;
	//if  (direction == 1){
	//	cout << "If we get back, we will be in the South" << endl;
	//}
	//else if (direction == 2) {
	//	cout << "If we get back, we will be in the North" << endl;
	//}
	//else if (direction == 3) {
	//	cout << "If we get back, we will be in the West" << endl;
	//}
	//else if (direction == 4) {
	//	cout << "If we get back, we will be in the East" << endl;
	//}
	//else {
	//	cout << "Error choice" << endl;
	//}
	//return 0;

	//4
	cout<< "Enter name of animal: ";
	cout << "[1]- Dog" << endl;
	cout << "[2]- Chicken" << endl;
	cout << "[3]- Monkey" << endl;
	cout << "[4]- Bear" << endl;
	cout << "[5]- Elephant" << endl;
	int animal;
	cin >> animal;
	if (animal == 1) {
		cout << "Dog is predator" << endl;
	}
	else if (animal == 2) {
		cout << "Chicken is herbivore" << endl;
	}
	else if (animal == 3) {
		cout << "Monkey is omnivore" << endl;
	}
	else if (animal == 4) {
		cout << "Bear is omnivore" << endl;
	}
	else if (animal == 5) {
		cout << "Elephant is herbivore" << endl;
	}
	else {
		cout << "Error choice" << endl;
	}

}