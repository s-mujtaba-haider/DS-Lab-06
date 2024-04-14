#include<iostream>

using namespace std;
class Stack {
	int stack[20];
	int number;
	int peak;
	//istream& operator >> (istream& is, Stack& s2);
public:
	Stack() {
		peak = -1;
	}
	void Pop(int stack[], int number) {
		int n = 20;
		if (number == 20) {
			cout << "Popped Number : " << stack[19] << endl;
		}
		else {
			cout << "Stack is not Full so No Number is Popped Out." << endl;
		}
	}
	int Size(int stack[], int number) {
		int n = 0;
		for (int i = 0; i < number && stack[i] != 0; i++) {
			n = n + 1;
		}
		cout << "Size : " << n << endl << endl;
		return n;
	}
	bool IsFull(int stack[], int& number) {
		int n = 0;
		for (int i = 0; i < number; i++) {
			n = n + 1;
		}
		if (number == 20) {

			cout << "Stack is Full." << endl;
			return true;
		}
		else {
			cout << "Stack is NOT Full." << endl;
			return false;
		}
	}
	bool IsEmpty(int stack[], int& peak) {
		if (peak >= 0) {
			cout << "Stack is NOT Empty." << endl;
			return false;
		}
		else {
			cout << "Stack is Empty." << endl;

			return true;
		}
	}
};
int main1() {
	Stack s;
	int stack[20];
	int number;
	int peak = -1;
	s.IsEmpty(stack, peak);
	cout << endl;
	cout << "Stack size is 20." << endl << endl;;
	cout << "Enter Numbers you want to Enter In Stack : ";
	cin >> number;
	cout << endl;
	cout << "Enter " << number << " values :" << endl;
	for (int i = 0; i < number; i++) {
		cin >> stack[i];
		peak++;
	}
	cout << endl;
	s.IsFull(stack, number);
	cout << endl;
	s.IsEmpty(stack, peak);
	cout << endl;
	s.Size(stack, number);
	s.Pop(stack, number);
	cout << endl;
	cout << endl;


	return 0;
}