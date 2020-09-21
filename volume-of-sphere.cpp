#include <iostream>
using namespace std;

    int main()
    {
    	int rad1;
    	float vol;
		cout << "\n\n Calculate the volume of a sphere :\n";
		cout << "---------------------------------------\n";		
        cout<<" Input the radius of a sphere : ";
    	cin>>rad1;
    	vol=(4*3.1416*rad1*rad1*rad1)/3;
        cout<<" The volume of a sphere is : "<< vol << endl;
        cout << endl;
        return 0;
    }