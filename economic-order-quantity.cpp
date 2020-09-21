#include <iostream>
#include <cmath>
using namespace std;

int main()
{
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
    
    cout<<"\nEconomic Order Quantity is: "<<EOQ<< endl;

    return 0;
}