#include<iostream>
#include<cstring>

using namespace std;

class customer {
	public :
		char name[100];
		int age;
		char gender;
		double credits;

		customer() {
			cout << "\n i am inside the default constructor of the customer class \n";
		}

        customer(char*n, int a, char g, double c){
            cout<<"\n i am inside the parametrized constructor of the customer class \n";
            strcpy(name,n);
            age = a;
            gender = g;
            credits = c;

        }

		void printCustomerInfo() {
			cout << "\nCustomer Information\n";
			cout << "Name : " << name << endl;
			cout << "Age : " << age << endl;
			cout << "Gender : " << gender << endl;
			cout << "Credits : " << credits << endl;
		}

};

int main() {

    customer c("naruto",32,'M',1000);

    c.printCustomerInfo();

    customer c1; //default constructor is invoked

	return 0;
}
