#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
#include <ctime>
#include "function_class_1.cpp"

using namespace std;

int main()
{
	srand(time(0));

	char c;
	int num;
	cout << "call the problem by \"R\" or \"C\" or \"P\" and the number" << endl;
	cout << "R's number is between 1 and 19" << endl;
	cin >> c >> num;
	switch(c)
	{
	case 'R':  break;
	case 'C': num += 100; break;
	case 'P': num += 200; break;
	}
	switch (num)
	{
	case 1: // 1.8 Excercises R-1.1
	{
		int think_i_am_valid = 1;
		int i_may_have_2_many_digits_2_be_valid = 1;
		int _I_start_and_end_with_underscores_ = 1;
		int I_Have_A_Dollar_$ign = 1;
		int I_AM_LONG_AND_HAVE_NO_LOWER_CASE_LETTERS = 1;

		cout << think_i_am_valid << endl;
		cout << i_may_have_2_many_digits_2_be_valid << endl;
		cout << _I_start_and_end_with_underscores_ << endl;
		cout << I_Have_A_Dollar_$ign << endl;
		cout << I_AM_LONG_AND_HAVE_NO_LOWER_CASE_LETTERS << endl;
		break;
	}
	case 2: // 1.8 Excercises R-1.2
	{
		const int n = 100;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % (n * 10);
			cout << arr[i] << " ";
		}
		int min = arr[0], max = arr[0];
		for (int i = 1; i < n; i++)
		{
			if (min > arr[i]) min = arr[i];
			if (max < arr[i]) max = arr[i];
		}

		cout << endl << endl;
		cout << max << " " << min << endl;
		break;
	}
	case 3: // 1.8 Excercises R-1.3
	{
		struct Pair
		{
			int first;
			double second;
		};

		Pair pair;
		pair.first = 1;
		pair.second = 2;
		cout << pair.first << endl;
		cout << pair.second << endl;
		break;
	}
	case 4: // 1.8 Excercises R-1.4 : it will be "abcabcdabc"
	{
		string s = "abc";
		string t = "cde";
		s += s + t[1] + s;

		// it should use <string>
		int way;
		cout << "Write the number 1 to 4 : ";
		cin >> way;

		switch (way)
		{
		case 1:
			cout << s << endl; // first way
			break;
		case 2:
			for (int i = 0; i < s.size(); i++) // second way
				cout << s[i];
			break;
		case 3:
			for (auto i = s.begin(); i < s.end(); i++) // thrid way
				cout << *i;
			break;
		case 4:
			for (auto s : s) // fourth way
				cout << s;
			break;
		}
		break;
	}
	case 5: // 1.8 Excercises R-1.5 : just the value of z will change
	{
		float y, z, w;
		cout << "write values of y, z, and w : ";
		cin >> y >> z >> w;
		cout << y << " " << z << " " << w << endl;
		cout << "True or flase? < y + 2 * z++ < 3 - w / 5 > : ";
		cout << ((y + 2 * z++ < 3 - w / 5) ? "True" : "False") << endl;
		cout << y << " " << z << " " << w << endl;
		break;
	}
	case 6: // 1.8 Excercises R-1.6 : it is double* and dp[10]
	{
		double* dp[10];
		for (int i = 0; i < 10; i++) dp[i] = new double; // Firstly, it should be allocated
		for (int i = 0; i < 10; i++) *dp[i] = 0.0; // it should be like this way
		for (int i = 0; i < 10; i++) cout << *dp[i] << " ";

		for (int i = 0; i < 10; i++) delete dp[i];
		break;
	}
	case 7: // 1.8 Excercises R-1.7 : easy
	{
		int n, sum = 0;
		cout << "write the value of n : ";
		cin >> n;
		for (int i = n - 1; i >= 0; i--) sum += i;
		cout << "The sum of all the integers smaller than n is : " << sum << endl;
		break;
	}
	case 8: // 1.8 Excercises R-1.8
	{
		long n, m;
		cout << "write the long number n and m : ";
		cin >> n >> m;

		cout << "n = mi? : " << (isMultiple(n, m) ? "True" : "False") << endl;
		break;
	}
	case 9: // 1.8 Excercises R-1.9
	{
		int n, m;
		cout << "write the raw and column : ";
		cin >> n >> m;

		int **A = new int*[n];
		for (int i = 0; i < n; i++) A[i] = new int[m];
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
				A[i][j] = rand() % 10;
		}

		printArray(A, n, m);

		for (int i = 0; i < n; i++) delete[] A[i];
		delete[] A;
		break;
	}
	case 10: // 1.8 Excercises R-1.10
	{
		int x = 10;
		cout << "x : " << x << endl;
		cout << "function f : "; f(x);
		cout << "currently x is : " << x << endl;
		cout << "fuction g : "; g(x);
		cout << "currently x is : " << x << endl;
		cout << "fuction f copy the value of x but fuction g just use x so its value changed" << endl;;
		break;
	}
	case 11: // 1.8 Excercises R-1.11
	{
		cout << "nothing" << endl;
		break;
	}
	case 12:
	{
		cout << "nothing" << endl;
		break;
	}
	case 13:
	{
		cout << "nothing" << endl;
		break;
	}
	case 14:
	{
		cout << "nothing" << endl;
		break;
	}
	case 15:
	{
		cout << "nothing" << endl;
		break;
	}
	case 16:
	{
		cout << "nothing" << endl;
		break;
	}
	case 17:
	{
		cout << "nothing" << endl;
		break;
	}
	case 18:
	{
		cout << "nothing" << endl;
		break;
	}
	case 19: // 1.8 Excercises R-1.19 : I was wrong. <<<<<<<<<<<<<<<<<
	{
		int num;
		cout << "write the number : ";
		cin >> num;
		cout << "number " << num << " is power of the two? : ";
		cout << (isTwoPower(num) ? "True" : "False") << endl;
		break;
	}
	case 101: // 1.8 Excercises C-1.1
	{
		int arr[10];
		for (int i = 0; i < 10; i++)
		{
			arr[i] = rand() % 100;
			cout << arr[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < 10 / 2; i++)
		{
			int tmp = arr[i];
			arr[i] = arr[9 - i];
			arr[9 - i] = tmp;
		}
		for (int i = 0; i < 10; i++)
			cout << arr[i] << " ";
		cout << endl;
		break;
	}
	case 102: // 1.8 Excercises C-1.2 : skip
	{
		cout << "nothing" << endl;
		break;
	}
	case 103: // 1.8 Excercises C-1.3
	{
		vector<int> vec1{ 1,1,3,4,5 };
		vector<int> vec2{ 1,2,3,4,5 };
		for (int i = 0; i < vec1.size(); i++)
			cout << vec1[i] << " ";
		cout << ": " << isIntHashset(vec1) << endl;
		for (int i = 0; i < vec1.size(); i++)
			cout << vec2[i] << " ";
		cout << ": " << isIntHashset(vec2) << endl;

		break;
	}
	case 104: // 1.8 Excercises C-1.4
	{
		vector<int> vec2{ 1,2,3,4,5 };
		for (int i = 0; i < vec2.size(); i++)
			cout << vec2[i] << " ";
		cout << endl;
		cout << "Print Odd Num : ";
		printOddNumInVector(vec2);

		break;
	}
	case 105: // 1.8 Excercises C-1.5
	{
		int arr[52];
		for (int i = 0; i < 52; i++) {
			arr[i] = i + 1;
			cout << arr[i] << " ";
		}
		cout << endl;

		shuffle(arr, 52);
		for (int i = 0; i < 52; i++)
			cout << arr[i] << " ";
		cout << endl;

		break;
	}
	case 106: // 1.8 Excercises C-1.6
	{
		string str = "abcde";
		possibleStrings(str);

		break;
	}

	case 107: // 1.8 Excercises C-1.7
	{
		cout << "I don't understand what this means" << endl;
		break;
	}

	case 108: // 1.8 Excercises C-1.8
	{
		vector<double> vec1;
		vector<double> vec2;
		int num;
		cout << "write the size of vectors : ";
		cin >> num;
		for (int i = 0; i < num; i++)
		{
			vec1.push_back(rand() % 10);
			vec2.push_back(rand() % 10);			
		}
		for (int i = 0; i < num; i++) cout << vec1[i] << " ";
		cout << endl;
		for (int i = 0; i < num; i++) cout << vec2[i] << " ";
		cout << endl;
		cout << "inner product : " << innerProduct(vec1, vec2) << endl;
		break;
	}

	case 109 : // 1.8 Excercises C-1.9
	{
		Vector2 a(1, 2);
		cout << a << endl;
		Vector2 b;
		cout << b << endl;
		
		cout << "Addition : " << a << " + " << b << " = " << a + b << endl;
		cout << "Multiply : " << a << " * " << 2 << " = " << a * 2<<endl;
		cout << "innerProduct : " << a << " * " << b << " = " << a*b<<endl;

		break;
	}
	case 110: // 1.8 Excercises C-1.10
	{
		int num;
		cout << "write a number i : ";
		cin >> num;
		cout << "the result of power(2, " << num << ") is "
			<< twoPower(num) << endl;

		break;
	}

	case 111: // 1.8 Excercises C-1.11
	{
		int num1, num2;
		cout << "write two numbers : ";
		cin >> num1>>num2;
		cout << "the result of GCD is "
			<< GCD(num1,num2) << endl;

		break;
	}
	case 201: // 1.8 Excercises P-1.1
	{
		string s = "I will always use object-oriented design.";
		for (int i = 0; i < 100; i++)
		{
			cout << randomTyposGenerator(s) << " " << i + 1 << endl;
		}

		break;
	}
	case 202: // 1.8 Excercises P-1.2
	{
		int year;
		cout << "Write a number of the year : ";
		cin >> year;
		Calendar calendar(year);
		calendar.printCalendar();

		break;
	}
	}
	return 0;

}







