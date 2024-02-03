// n <= 8

#include<iostream>

using namespace std;

// This method : it will give all (balance + unbalance) paratheses format 
// void generateParentheses(int n, char* out, int j, int open_cnt, int close_cnt) {

// 	// base case
// 	if(open_cnt == n and close_cnt == n) { // j == 2*n
// 		out[j] = '\0';
// 		cout << out << endl;
// 		return;
// 	}

// 	// recursive case

// 	// decide the character to be assign to jth position of the out[]

// 	// 1. option 1 : '('

// 	if(open_cnt < n) {
// 		out[j] = '(';
// 		generateParentheses(n, out, j+1, open_cnt+1, close_cnt);
// 	}

// 	// 2. option 2 : ')'

// 	if(close_cnt < n) {
// 		out[j] = ')';
// 		generateParentheses(n, out, j+1, open_cnt, close_cnt+1);
// 	}

// }

//This method : it will give balance paratheses format 
void generateParentheses(int n, char* out, int j, int open_cnt, int close_cnt) {

	// base case
	if(open_cnt == n and close_cnt == n) { // j == 2*n
		out[j] = '\0';
		cout << out << endl;
		return;
	}

	// recursive case

	// decide the character to be assign to jth position of the out[]

	// 1. option 1 : '('

	if(open_cnt < n) {
		out[j] = '(';
		open_cnt++;
		generateParentheses(n, out, j+1, open_cnt, close_cnt);
		open_cnt--; // backtracknig
	}

	// 2. option 2 : ')'

	if(close_cnt < open_cnt) {
		out[j] = ')';
		generateParentheses(n, out, j+1, open_cnt, close_cnt+1);
	}

}

int main() {

	int n = 2;

	char out[17]; // based on contraints which are n=8 it take 2*n thats why we are making array of 17.

	generateParentheses(n, out, 0, 0, 0);

	return 0;
}