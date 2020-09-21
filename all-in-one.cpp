#include <iostream>
#include <cmath>
using namespace std;

void login();
void menu();

//calculate the volume of sphere
void volume_of_sphere() {
    int rad1;
    	float vol;
		cout << "\n\n Calculate the volume of a sphere :\n";
		cout << "---------------------------------------\n";		
        cout<<" Input the radius of a sphere : ";
    	cin>>rad1;
    	vol=(4*3.1416*rad1*rad1*rad1)/3;
        cout<<" The volume of a sphere is : "<< vol << endl;
        cout << endl<< endl;
        menu();
}

//convert dollar to peso
void dollar_to_peso() {
    int dollar, result;
        float peso = 51.50;
		cout << "\n\n Convert Dollar to Peso:\n";
		cout << "---------------------------------------\n";		
        cout<<" Input dollar : ";
    	cin>>dollar;
    	result = dollar * peso;
        cout<<" Result : "<< result << endl;
        cout << endl;
        menu();
}

// swap variable value
void exchange_varalbe_value() {
    int x, y, temp;
    cout << "\n\n Exchange variables value:\n";
	cout << "---------------------------------------\n";
    cout << "Input x: ";
    cin>>x;
    cout << "Input y: ";
    cin>>y;
    cout << "\n\nBefore swapping\n";
    cout << "x = " << x << ", y = " << y << endl;

    temp = x;
    x = y;
    y = temp;

    cout << "\nAfter swapping." << endl;
    cout << "x = " << x << ", y = " << y << endl<< endl;
    menu();
}

//economic order calculator
void eoq_calculator() {
    float EOQ,R,S,I;
    cout << "\n\nEconomic Order Quantity:\n";
	cout << "---------------------------------------\n";
    cout<<"\nInput total yearly production requirement: ";
    cin>>R;
    cout<<"\nInput setup cost per order: ";
    cin>>S;
    cout<<"\nInput carrying cost per unit: ";
    cin>>I;
    EOQ=sqrt((2*R*S)/(I));
    
    cout<<"\nEconomic Order Quantity is: "<<EOQ<< endl << endl;
    menu();
}

//main menu
void menu()
{
	int option;
	cout << "________MAIN MENU________" << endl;
	cout << "Choose Program:" << endl << endl;
	cout << "1. Calculate the volume of sphere" << endl;
	cout << "2. Dollar to Peso" << endl;
	cout << "3. Swap the value of variables" << endl;
	cout << "4. EOQ Calculator" << endl;
    cout << "5. Back" << endl << endl;
	cout<<"Choose action: ";
    cin >> option;
	cout << endl;
	switch(option)
	{
		case 1:
			volume_of_sphere();
			break;
		case 2:
			dollar_to_peso();
			break;
		case 3:
			exchange_varalbe_value();
			break;
		case 4:
			eoq_calculator();
			break;
        case 5:
            login();
            break;
		default:
			cout << "Try Again\n\n";
			menu();
			
	}
}

//login screen
void login()
{
	int num;
	cout << "____LOGIN____" << endl;
	cout << "Select Option:" << endl << endl;
	cout << "1. Open Main Menu" << endl;
	cout << "2. Exit" << endl << endl;
	cout<<"Select Option: ";
    cin >> num;
	cout << endl;
	if(num == 1)
	{
		menu();
	}
	else if(num == 2)
	{
		exit(0);
	}
	else
	{
		cout << "Wrong Input, Try Again!" << endl;
		login();
	}
}

//author
void credits(){
cout << "\n";
cout << "--------------------------------------------------\n";
cout << "CODED BY : JAYSON CABRILLAS SAN BUENAVENTURA\n";
cout << "GITHUB   : http://github.com/mkdirlove\n";
cout << "FACEBOOK : https://www.facebook.com/mkdirlove.git\n";
cout << "WEBSITE  : http://mkdirlove.github.io/\n";
cout << "--------------------------------------------------\n";
cout << "\n";    
cout << "\n";                                               
}

//main function
int main() 
{
    credits();
    login();
    return 0;
}
