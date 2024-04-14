#include<iostream>
#include<string>
#include<stack>
using namespace std;
template <class T>
class Stack {
public:
	bool Pair(char opening, char closing)
	{
		if (opening == '(' && closing == ')') return true;
		else if (opening == '{' && closing == '}') return true;
		else if (opening == '[' && closing == ']') return true;
		return false;
	}
	bool Balance(string exp)
	{
		stack<char>  S;
		for (int i = 0; i < exp.length(); i++)
		{
			if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
				S.push(exp[i]);
			else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
			{
				if (S.empty() || !Pair(S.top(), exp[i]))
					return false;
				else
					S.pop();
			}
		}
		return S.empty() ? true : false;
	}
};
int main()
{
	Stack<char> s;
	string expression;
	cout << "Enter an expression: ";
	cin >> expression;
	if (s.Balance(expression))
		cout << endl << "Balanced." << endl;
	else
		cout << endl << "Not Balanced." << endl;


	cout << endl << endl << endl << endl << endl;
	return 0;
}