#include "iostream"
#include "conio.h"
#include "Fraction.h"
#include "string"
using namespace std;
template <class  T>
class Stack
{
public:
	Stack();
	Stack(int m);
	void add(T &x);
	void remove();
	T firstElement();
	bool empty();
	bool full();
	void makeEmpty();
	int getnum();
	void print();
	~Stack();

private:
	T *elements;
	int amount;
	int max;
};
template <class  T>
Stack<T>::Stack()
{
	elements = new T [100];
	amount = 0;
	max = 100;
}
template<class T>
Stack<T>::Stack(int m)
{
	elements = new T[m];
	amount = 0;
	max = m;
}
template<class T>
void Stack<T>::add(T &x)
{
	if (this->full())
	{
		cout << "\t\t\t| Stack is full, can't push anymore |\n";
	}
	else
	{
		elements[amount] = x;
		amount++;
	}
}
template<class T>
void Stack<T>::remove()
{
	bool ans = this->empty();
	if (ans == true)
	{
		cout << "\t\t\t| This Stack empty, can't remove any more |\n";
	}
	else
	{
		amount--;
	}
}
template<class T>
T Stack<T>::firstElement()
{
	return elements[0];
}
template<class T>
bool Stack<T>::empty()
{
	return amount <= 0;
}
template<class T>
bool Stack<T>::full()
{
	return amount >= max;
}
template<class T>
void Stack<T>::makeEmpty()
{
	amount = 0;
}
template<class T>
int Stack<T>::getnum()
{
	return amount;
}
template<class T>
void Stack<T>::print()
{
	if (this->empty())
	{
		cout << "Stack is empty\n";
		return;
	}
	for (int i = 0; i < amount; i++)
	{
		cout << elements[i] << "\n";
	}
}
template <class  T>
Stack<T>::~Stack()
{
	delete[] elements;
	elements = NULL;
	max = amount = 0;
}
int menu()
{
	int choice;
	cout << "------------------------------------\n";
	cout << "1. Remove from Stack\n";
	cout << "2. Get top element\n";
	cout << "3. Check full or not\n";
	cout << "4. Check empty\n";
	cout << "5. Make Stack empty\n";
	cout << "6. Get number of elements in Stack\n";
	cout << "7. Print Stack\n";
	cout << "------------------------------------\n";
	do
	{
		cout << "\t\t\tEnter your choice: ";
		cin >> choice;
		if (choice <= 0 || choice > 7)
		{
			cout << "\t\t\t| Error, please try again |\n";
		}
	} while (choice <= 0 || choice > 7);
	system("cls");
	return choice;
}
template <class T>
void Function(Stack <T> &x)
{
	
	string choice2;
	do
	{
		int ans = menu();
		switch (ans)
		{
		case 1:
		{
			x.remove();
		} break;
		case 2:
		{
			if (x.empty())
			{
				cout << "Stack is empty\n";
			}
			else
			{
				cout << "Top element " << x.firstElement() << "\n";
			}
		} break;
		case 3:
		{
			if (x.full())
			{
				cout << "Stack is full\n";
			}
			else
			{
				cout << "Stack is not full\n";
			}
		} break;
		case 4:
		{
			if (x.empty())
			{
				cout << "Stack is empty\n";
			}
			else
			{
				cout << "Stack is not empty\n";
			}
		} break;
		case 5:
		{
			x.makeEmpty();
			cout << "Successfully\n";
		} break;
		case 6:
		{
			cout << "Number of Stack: " << x.getnum() << "\n";
		} break;
		case 7:
		{
			x.print();
		} break;
		default:
			break;
		}
		cout << "Again(yes/no): ";
		cin >> choice2;
	} while (_stricmp(choice2.c_str(),"yes")==0);
}
void main()
{
	int choice1;
	do
	{
		cout << "1. Int\n";
		cout << "2. Float\n";
		cout << "3. Fraction\n";
		cout << "Enter your choice >> ";
		cin >> choice1;
		if (choice1<= 0 || choice1 >3) 
		{
			cout << "\t\t\t| Error,please try again |\n";
		}
		system("cls");
	} while (choice1 <= 0 || choice1 > 3);
	int ele;
	cout << "Element of Stack: ";
	cin >> ele;
	if (choice1 == 1)
	{
		Stack <int> x(ele);
		int temp;
		for (int i = 0; i < ele; i++)
		{
			cout << "---------------------------\n";
			cout << "Element " << i + 1 << ": ";
			cin >> temp;
			x.add(temp);
		}
		Function(x);
	}
	else if (choice1 == 2)
	{
		Stack <float> x(ele);
		float temp;
		for (int i = 0; i < ele; i++)
		{
			cout << "---------------------------\n";
			cout << "Element " << i + 1 << ": ";
			cin >> temp;
			x.add(temp);
		}
		Function(x);
	}
	else
	{
		Stack <Fraction> x(ele);
		Fraction temp;
		for (int i = 0; i < ele; i++)
		{
			cout << "---------------------------\n";
			cout << "Element " << i + 1 << ":\n";
			cin >> temp;
			x.add(temp);
		}
		Function(x);
	}
	_getch();
}
