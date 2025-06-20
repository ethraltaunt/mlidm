#include <vector>
#include <set>
#include <iostream>
#include <map>
#include <Windows.h>
using namespace std;





int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Введите количество элементов множества A" << endl;
	int a;
	cin >> a;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Введите количество элементов первого множества" << endl;
		cin >> a;

	}

	set<char> set_a;
	map<char,boolean> exist_a;
	map<int, boolean> exist_b;
	
	for (int i = 1; i <= a; i++) {
		cout << "Введите " << i << "-й" << " элемент A(chars)" << endl;
		char elem;
		cin >> elem;
		if (!(elem >= 'a' && elem <= 'z')) 
			i--;
		else 
			exist_a[elem] = true;
			set_a.insert(elem);
		
	}




	cout << "Введите количество элементов множества B" << endl;
	int b;
	cin >> b;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Введите количество элементов первого множества" << endl;
		cin >> b;

	}

	set<int> set_b;


	for (int i = 1; i <= b; i++) {
		cout << "Введите " << i << "-й" << " элемент B(ints)" << endl;
		int elem;
		cin >> elem;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(1000, '\n');
			i--;
		}
	
		else {
			exist_b[elem] = true;
			set_b.insert(elem);
		}


	}
	
	set<pair<char, int>> relation; 

	cout << "Введите количество элементов отношения" << endl;
	int r;
	cin >> r;
	while (cin.fail()) {
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Введите количество элементов отношения" << endl;
		cin >> r;

	}



	for (int i = 1; i <= r; i++) {
		cout << "Введите " << i << "-й" << " элемент" << endl;

		pair<char, int> elem;
		cin >> elem.first >> elem.second;


		if ((exist_a[elem.first] && exist_b[elem.second]) && (!(cin.fail()))) {
			relation.insert(elem);
		}
		else {
			cin.clear();
			cin.ignore(1000, '\n');
			i--;
		}
	}

	for (pair<char, int> elem : relation) {
		if (exist_a[elem.first] == false) {
			cout << "отношение не является функцией" << endl;
			return 0;
		}
		else {
			exist_a[elem.first] = false;
		}
	}

	for (pair<char, bool> elem : exist_a) {
		if (exist_a[elem.first] == true) {
			cout << "отношение не является функцией" << endl;
			return 0;
		}
	}

	cout << "отношение является функцией" << endl;
	return 0;

}




