#include "function_class_1.h"
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void quickSort(int *arr, int s, int e)
{
	if (s >= e) return;

	int i = s, j = e, pivot = arr[e];

	while (1)
	{
		while (i < j && arr[i] <= pivot) i++;
		while (i < j && arr[j] >= pivot) j--;
		if (i < j)
		{
			int tmp = arr[i];
			arr[i] = arr[j];
			arr[j] = tmp;
		}
		else
		{
			int tmp = arr[j];
			arr[j] = arr[e];
			arr[e] = tmp;
			break;
		}
	}

	quickSort(arr, s, j - 1);
	quickSort(arr, j + 1, e);
}
int factorial(int n)
{
	if (n == 1 || n == 0) return 1;
	return n*factorial(n - 1);
}
bool isMultiple(long n, long m) // 1.8 Excercises R-1.8
{
	return !(n%m);
}
void printArray(int **A, int n, int m) // 1.8 Excercises R-1.9
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << A[i][j] << " ";
		cout << endl;
	}
}
void f(int x) { cout << ++x; } // 1.8 Excercises R-1.10
void g(int &x) { cout << ++x; }
class Flower { // 1.8 Excercises R-1.11
public:
	Flower(string name, int pedals, float price)
	{
		this->name = name;
		this->pedals = pedals;
		this->price = price;
	}
	void setName(string name)
	{
		this->name = name;
	}
	void setPedals(int pedals)
	{
		this->pedals = pedals;
	}
	void setPrice(float price)
	{
		this->price = price;
	}
	string getName() const
	{
		return name;
	}
	int getPedals() const
	{
		return pedals;
	}
	float getPrice() const
	{
		return price;
	}
private:
	string name;
	int pedals;
	float price;
};
class CreditCard { // 1.8 Excercises R-1.12~16
public:
	CreditCard(const string& no, const string& nm, int lim, double bal = 0)
	{
		number = no;
		name = nm;
		limit = lim;
		balance = bal;
	}
	string getNumber() const { return number; }
	string getName() const { return name; }
	double getBalance() const { return balance; }
	int getLimit() const { return limit; }
	bool chargelt(double price)
	{
		if (price < 0) return false;
		if (price + balance > double(limit)) return false;
		balance += price;
		return true;
	}
	void makePayment(double payment)
	{
		if (payment < 0) return;
		balance -= payment;
	}
private:
	string number;
	string name;
	double balance;
	int limit;
};
ostream& operator<<(ostream& out, const CreditCard& c)
{
	out << "Number : " << c.getNumber() << endl
		<< "Name : " << c.getName() << endl
		<< "Balance : " << c.getBalance() << endl
		<< "Limit : " << c.getLimit() << endl;
	return out;

}
bool isTwoPower(int i) { return ((i != 0) && ((i - 1) & i == 0)); } // 1.8 Excercises R-1.19 : I was wrong. <<<<<<<<<<<<<<<<<
bool isIntHashset(vector<int> vec) // 1.8 Excercises C-1.3
{
	int currentValue;

	for (int i = 0; i < vec.size() - 1; i++)
	{
		currentValue = vec[i];
		for (auto j = i + 1; j < vec.size(); j++)
		{
			if (currentValue == vec[j]) return false;
			else continue;
		}
	}

	return true;
}
void printOddNumInVector(vector<int> vec) // 1.8 Excercises C-1.4
{
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i] % 2 == 0) continue;
		else cout << vec[i] << " ";
	}
	return;
}
void shuffle(int* arr, int size) // 1.8 Excercises C-1.5
{
	bool isEqual;
	for (int i = 0; i < size; i++)
	{
		isEqual = true;
		while (isEqual)
		{
			arr[i] = rand() % 52 + 1;
			if (i == 0) isEqual = false;
			else
			{
				for (int j = 0; j < i; j++)
				{
					if (arr[i] == arr[j])
					{
						isEqual = true;
						break;
					}
					else isEqual = false;
				}
			}
		}
	}
	return;
}
void possibleStrings(string str) // 1.8 Excercises C-1.6
{
	cout << "Possible Number of Strings : " << factorial(str.size()) << endl;

	char* tmp = new char[str.size() + 1];
	for (int i = 0; i < str.size(); i++)
		tmp[i] = str[i];
	tmp[str.size()] = '\0';
	possibleStringsFuction(tmp, 0, str.size() - 1);

	delete[] tmp;

}
void possibleStringsFuction(char* tmp, int i, int n)
{
	if (i == n) cout << tmp << " ";
	else
	{
		for (int j = i; j <= n; j++)
		{
			char _tmp = tmp[i];
			tmp[i] = tmp[j];
			tmp[j] = _tmp;

			possibleStringsFuction(tmp, i + 1, n);

			_tmp = tmp[i];
			tmp[i] = tmp[j];
			tmp[j] = _tmp;

			if (i == 0) cout << endl;
		}
	}
}
template<class T> // 1.8 Excercises C-1.8
T innerProduct(vector<T> a, vector<T> b)
{
	T sum = 0;
	for (int i = 0; i < a.size(); i++) sum += a[i] * b[i];
	return sum;
}
class Vector2 { // 1.8 Excercises C-1.9
	friend ostream &operator<<(ostream& out, Vector2 a);
public:

	Vector2(double a = 1, double b = 1)
	{
		this->a = a;
		this->b = b;
	}
	Vector2 operator+(Vector2 vec)
	{
		Vector2 tmp(a + vec.a, b + vec.b);
		return tmp;
	}
	Vector2 operator*(double num)
	{
		Vector2 tmp(num*a, num*b);
		return tmp;
	}
	double &operator*(Vector2 vec)
	{
		double sum = 0;
		sum += a*vec.a + b*vec.b;
		return sum;
	}
private:
	double a, b;
};
ostream &operator<<(ostream& out, Vector2 a)
{
	out << a.a << " " << a.b;
	return out;
}
long twoPower(int i) // 1.8 Excercises C-1.10
{
	return (1 << i);
}
int GCD(int a, int b) // 1.8 Excercises C-1.11
{
	if (a == b || b == 0) return a;
	else if (a == 0) return b;
	else if (a == 1 || b == 1) return 1;
	if (a > b) return GCD(b, a%b);
	else return GCD(a, b%a);
}
string randomTyposGenerator(string s) // 1.8 Excercises P-1.1
{
	static int count = 0;
	if (count > 8) return s;
	string randomCharacter;
	while (1)
	{
		int randomNum = rand() % s.size();
		randomCharacter = s[randomNum];		
		if (randomCharacter != " ") break;
	}

	int probability = rand() % 100 + 1;	
	if (probability >= 92)
	{
		count++;
		s.insert(rand() % s.size(), randomCharacter);
	}

	return s;
	
}
class Calendar // 1.8 Excercises P-1.2
{
public:
	Calendar()
	{}
	Calendar(int year)
	{
		this->year = year;
		this->isLeapYear = IsLeapYear(year);
		isLeapYear ? daysNumOfYear = 366 : daysNumOfYear = 365;
		int sum = dayOf_2000_1_1;
		for (int i = 2000; i < year; i++)
		{
			sum += IsLeapYear(i) ? 366 : 365;
		}
		firstDayOfYear = (Day)(sum % 7);
		for (int i = (int)January; i <= (int)December; i++)
		{
			if (i == Februday) isLeapYear ? daysNumOfMonth[i] = 29 : daysNumOfMonth[i] = 28;
			else if (i == April || i == June || i == September || i == November) daysNumOfMonth[i] = 30;
			else daysNumOfMonth[i] = 31;
		}
	}
	bool IsLeapYear(int year)
	{
		return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	}
	void printCalendar()
	{
		for (int i = (int)January; i < (int)December; i++)
		{
			printMonth((Month)i);
		}
	}
	enum Month
	{
		January, Februday, March, April, May, June, July, August,
		September, October, November, December
	};
	string monthToString(Month month)
	{
		switch (month)
		{
		case Calendar::January: return "January";
			break;
		case Calendar::Februday: return "Februday";
			break;
		case Calendar::March: return "March";
			break;
		case Calendar::April: return "April";
			break;
		case Calendar::May: return "May";
			break;
		case Calendar::June: return "June";
			break;
		case Calendar::July: return "July";
			break;
		case Calendar::August: return "August";
			break;
		case Calendar::September: return "September";
			break;
		case Calendar::October: return "October";
			break;
		case Calendar::November: return "November";
			break;
		case Calendar::December: return "December";
			break;
		}
	}

private:
	enum Day
	{
		Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday
	};
	string dayToString(Day day)
	{
		switch (day)
		{
		case Sunday: return "Sun."; break;
		case Monday: return "Mon."; break;
		case Tuesday: return "Tue."; break;
		case Wednesday: return "Wed."; break;
		case Thursday: return "Thu."; break;
		case Friday: return "Fri."; break;
		case Saturday: return "Sat."; break;
		}
	}
	

	void printMonth(Month month)
	{		
		Day firstDayOfMonth;
		int sum = firstDayOfYear;
		for (int i = 0; i < month; i++) sum += daysNumOfMonth[i];
		firstDayOfMonth = (Day)(sum % 7);	

		string tmp = monthToString(month);
		cout << "         " << tmp << endl;

		for (int i = 0; i < 7; i++) 
		{
			tmp = dayToString((Day)i);
			cout << tmp << "  ";
		}
		cout << endl;

		for (int i = 0; i < firstDayOfMonth; i++)
		{			
			cout << "      ";
		}

		for (int i = 0; i < daysNumOfMonth[month]; i++)
		{
			cout << i + 1;
			if (i + 1 >= 10) cout << "    ";
			else cout << "     ";
			if ((firstDayOfMonth + i) % 7 == 6) cout << endl;
		}
		cout << endl << endl;
	}

	int year;
	int daysNumOfYear;
	bool isLeapYear;
	int daysNumOfMonth[12];
	const Day dayOf_2000_1_1 = Saturday;
	Day firstDayOfYear;
};

