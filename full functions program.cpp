#include<iostream>
using namespace std;
int add(int n1, int n2);
int min(int n1, int n2);
int mul(int n1, int n2);
int divide(int n1, int n2);
int pow(int n1, int n2);
int fac(int n1);
int fibo(int n1);
int max(int n1, int n2, int n3);
int min(int n1, int n2, int n3);
int squArea(int n1);
int recArea(int n1, int n2);
int triArea(int n1, int n2);
int squpirmeter(int n1);
int recpirmeter(int n1, int n2);
int tripirmeter(int n1, int n2, int n3);
int prim(int num);
int average(int n1, int n2, int n3);
int main() {
	char ch, symbol;
	int num1, num2, num3, res = 1, i = 0;
	do {
		cout << "\n choose the operation do you want "
			"\n choose + for addition "
			"\n choose - for subtration "
			"\n choose * for multipliation "
			"\n choose / for division "
			"\n choose ^ for power "
			"\n choose ! for factorial"
			"\n choose F for fibonacci"
			"\n choose M for maximum of 3 numbers"
			"\n choose S for smallest number of 3 numbers"
			"\n choose A for area of square"
			"\n choose B for area of rectangle"
			"\n choose C for area of triangle"
			"\n choose D for primeter of square"
			"\n choose E for primeter of rectangle"
			"\n choose G for primeter of triangle"
			"\n choose P for prime or not"
			"\n choose V for average of 3 numbers \n";
		cin >> symbol;
		switch (symbol) {
		case'+':
			cout << "enter the two numbers" << endl;
			cin >> num1 >> num2;
			res = add(num1, num2);
			cout << "the result = " << res << endl;
			break;

		case'-':
			cout << "enter the two numbers" << endl;
			cin >> num1 >> num2;
			res = min(num1, num2);
			cout << "the result = " << res << endl;
			break;

		case'*':
			cout << "enter the two numbers" << endl;
			cin >> num1 >> num2;
			res = mul(num1, num2);
			cout << "the result = " << res << endl;
			break;

		case'/':
			cout << "enter the two numbers" << endl;
			cin >> num1 >> num2;
			res = divide(num1, num2);
			cout << "the result = " << res << endl;
			break;

		case'^':
			cout << "enter the two numbers" << endl;
			cin >> num1 >> num2;
			res = pow(num1, num2);
			cout << "the result = " << res << endl;
			break;

		case'!':
			cout << "enter a numbers" << endl;
			cin >> num1;
			res = fac(num1);
			cout << "the result = " << res << endl;
			break;

		case'F':
			cout << "\n Enter a number for Fibonacci Series : ";
			cin >> num1;
			cout << "\n Fibonacci Series : ";
			res = fibo(i);

			while (i < num1)
			{
				cout << " " << fibo(i) << " ";
				i++;
			}
			break;


		case'M':
			cout << "enter the 3 numbers" << endl;
			cin >> num1 >> num2 >> num3;
			res = max(num1, num2, num3);
			cout << "the maximum = " << res << endl;
			break;

		case'S':
			cout << "enter the 3 numbers" << endl;
			cin >> num1 >> num2 >> num3;
			res = min(num1, num2, num3);
			cout << "the minmum = " << res << endl;
			break;

		case'A':
			cout << "enter a numbers" << endl;
			cin >> num1;
			res = squArea(num1);
			cout << "the result = " << res << endl;
			break;

		case'B':
			cout << "enter a two numbers" << endl;
			cin >> num1 >> num2;
			res = recArea(num1, num2);
			cout << "the result = " << res << endl;
			break;

		case'C':
			cout << "enter a two numbers" << endl;
			cin >> num1 >> num2;
			res = triArea(num1, num2);
			cout << "the result = " << res << endl;
			break;

		case'D':
			cout << "enter a number" << endl;
			cin >> num1;
			res = squpirmeter(num1);
			cout << "the result = " << res << endl;
			break;

		case'E':
			cout << "enter the two numbers" << endl;
			cin >> num1 >> num2;
			res = recpirmeter(num1, num2);
			cout << "the result = " << res << endl;
			break;

		case'G':
			cout << "enter the 3 numbers" << endl;
			cin >> num1 >> num2 >> num3;
			res = (num1, num2, num3);
			cout << "the result = " << res << endl;
			break;

		case'P':
			cout << "enter the number" << endl;
			cin >> num1;
			if (num1 == 1) {
				cout << "the number is not prim" << endl;
				return 0;
			}
			if (num1 == 0) {
				return 0;
			}
			res = prim(num1);
			if (res == 0) {
				cout << "the number is prim" << endl;
			}
			else {
				cout << "the number is not prim" << endl;
			}


		case'V':
			cout << "enter the 3 number" << endl;
			cin >> num1 >> num2 >> num3;
			res = average(num1, num2, num3);
			cout << "the result = " << res << endl;
			break;


		}







		cout << "do you want another operation ? (y or n) \n";
		cin >> ch;

	} while (ch == 'y');
	return 0;
}
int add(int n1, int n2) {
	int result = n1 + n2;
	return result;
}
int min(int n1, int n2) {
	int result = n1 - n2;
	return result;
}
int mul(int n1, int n2) {
	int result = n1 * n2;
	return result;
}
int divide(int n1, int n2) {
	int result = float(n1 / n2);
	return result;
}
int pow(int n1, int n2) {
	int result = 1;
	for (int i = 1; i <= n2; i++) {
		result = result * n1;
	}
	return result;
}
int fac(int n1) {
	int result = 1;
	for (int i = 1; i <= n1; i++) {
		result = i * result;
	}
	return result;
}
int fibo(int n1)
{
	if ((n1 == 1) || (n1 == 0))
	{
		return n1;
	}
	else
	{
		return fibo(n1 - 1) + fibo(n1 - 2);
	}
}
int max(int n1, int n2, int n3) {
	int result;
	if (n1 >= n2 && n1 >= n3) {
		result = n1;
	}
	else if (n2 >= n1 && n2 >= n3) {
		result = n2;
	}
	else {
		result = n3;
	}

	return result;

}
int min(int n1, int n2, int n3) {
	int result;
	if (n1 <= n2 && n1 <= n3) {
		result = n1;
	}
	else if (n2 <= n1 && n2 <= n3) {
		result = n2;
	}
	else {
		result = n3;
	}

	return result;

}
int squArea(int n1) {
	int result = 1;
	result = n1 * n1;
	return result;
}
int recArea(int n1, int n2) {
	int result = 1;
	result = n1 * n2;
	return result;
}
int triArea(int n1, int n2) {
	int result = 1;
	result = 0.5 * n1 * n2;
	return result;
}
int squpirmeter(int n1) {
	int result = 1;
	result = 4 * n1;
	return result;
}
int recpirmeter(int n1, int n2) {
	int result = 1;
	result = (n2 + n1) * 2;
	return result;
}
int tripirmeter(int n1, int n2, int n3) {
	int result = 1;
	result = n2 + n1 + n3;
	return result;
}
int prim(int num) {
	int checker = 0;
	for (int i = 2; i < num; i++) {
		if (num % i == 0) {
			checker++;
			return checker;
		}
	}
	return checker;
}

int average(int n1, int n2, int n3) {
	int result;
	result = (n1 + n2 + n3) / 3;
	return result;
}