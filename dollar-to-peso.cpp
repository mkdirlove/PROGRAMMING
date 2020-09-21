#include <iostream>
using namespace std;

    int main()
    {
    	int dollar, result;
        float peso = 51.50;
		cout << "\n\n Convert Dollar to Peso:\n";
		cout << "---------------------------------------\n";		
        cout<<" Input dollar : ";
    	cin>>dollar;
    	result = dollar * peso;
        cout<<" Result : "<< result << endl;
        cout << endl;
        return 0;
    }