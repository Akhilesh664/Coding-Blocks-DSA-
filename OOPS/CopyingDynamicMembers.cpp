#include<iostream>
#include<cstring>

using namespace std;

class customer {
	public :
		char* name;
		int age;
		char gender;
		double credits;

		customer(char* n, int a, char g, double c) {
			cout << "I am inside the parameterised constructor of the customer class" << endl;
			name = new char[100];
			strcpy(name, n);
			age = a;
			gender = g;
			credits = c;
		}

		customer(customer& c) {
			cout << "I am inside the copy constructor of the customer class" << endl;
            // name = c.name;   
                                  /* known as  ** SHALLOW COPY **   in which it copy data with address so 
                                    when we change data it will affect prev. data also because it sharing 
                                    same address in heap*/ 
                                    
			name = new char[100];
			strcpy(name, c.name); /* known as   ** DEEP COPY **   in which we make copy of whole thing but
                                    this time it will create new heap's array address so when we 
                                    assign value it whill act as new array data without disturbing 
                                    prev. heap address*/ 

			age = c.age;
			gender = c.gender;
			credits = c.credits;
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
		
	customer c1("omesh", 20, 'M', 100);

	customer c2 = c1; // copy constructor is invoked


    // c1.printCustomerInfo();

	strcpy(c2.name, "honey");
	c2.age = 40;
	c2.gender = 'F';
	c2.credits = 5000;

	cout << c2.name << endl;
	cout << c2.age << endl;
	cout << c2.gender << endl;
	cout << c2.credits << endl; 


    cout<<endl;

	cout << c1.name << endl;//name changing in both beacuse address is same for c1, c2.
	cout << c1.age << endl;
	cout << c1.gender << endl;
	cout << c1.credits << endl;

	return 0;
}