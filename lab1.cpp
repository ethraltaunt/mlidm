/*Разработать программу на  (C++)

выполняющую операции с двумя множествами:





пересечение

дополнение

A\B

B\A,

симметрическую разность.





Пояснение к обозначению типа ввода: с - цифра, b-буква, i -четная цифра.j-нечетная*/

//  cbii 





#include <vector>

#include <set>

#include <iostream>

#include <map>

#include <Windows.h>

using namespace std;







int validate(const string& target) {

	if (!(target.at(0) >= '0' && target.at(0) <= '9')) {

		return 0;

	}

	if (!(target.at(1) >= 'a' && target.at(1) <= 'z')) {

		return 0;

	}

	if (!(target.at(2) % 2 == 0)) {

		return 0;

	}

	if (!(target.at(3) % 2 == 0)) {

		return 0;

	}

	if (!(target.length() == 4)) {

		return 0;

	}



	return 1;

}



set<string> union_sets(set<string> A, set<string> B) {

	set<string> result;



	for (string elem : A) {

		result.insert(elem);

	}

	for (string elem : B) {

		result.insert(elem);

	}

	return result;

}



set<string> intersection(set<string> A, set<string> B) {

	set<string> result;

	map<string, int> temp;

	for (string elem : A) {

		temp[elem]++;

	}

	for (string elem : B) {

		if (temp[elem] == 1) {

			result.insert(elem);

		}

	}

	return result;





}



set<string> complementAB(set<string> A, set<string> B) {

	set<string> result;

	map<string, int> temp;

	for (string elem : B) {

		temp[elem]++;

	}

	for (string elem : A) {

		if (temp[elem] == 0) {

			result.insert(elem);

		}

	}

	return result;

}



set<string> complementBA(set<string> A, set<string> B) {

	set<string> result;

	map<string, int> temp;

	for (string elem : A) {

		temp[elem]++;

	}

	for (string elem : B) {

		if (temp[elem] == 0) {

			result.insert(elem);

		}

	}

	return result;

}



set<string> symmetric_diff(set<string> A, set<string> B) {

	set<string> result;

	map<string, int> temp;

	for (string elem : A) {

		temp[elem]++;

	}

	for (string elem : B) {

		if (temp[elem] == 1) {

			temp[elem] = 0;

		}

		else {

			temp[elem]++;

		}

	}

	for (pair<string, int> para : temp) {

		if (para.second == 1) {

			result.insert(para.first);

		}



	}

	return result;

}



int main() {

	SetConsoleCP(1251);

	SetConsoleOutputCP(1251);



	// валидация количества элементов A

	int n_of_A;

	cout << "Введите количество элементов множества А:" << endl;

	cin >> n_of_A;

	while (cin.fail()) {

		system("CLS");

		cin.clear();

		cin.ignore(1000, '\n');

		cout << "Введите количество элементов множества А:" << endl;

		cin >> n_of_A;



	}

	//ввод элементов для A

	set<string> A;

	for (int i = 1; i <= n_of_A; i++) {

		string a;

		cout << "Введите " << i << "-й элемент А(cbii)" << endl;

		cin >> a;

		if (validate(a)) {

			A.insert(a);

		}

		else {

			i--;



		}



	}







	// валидация количества элементов B

	int n_of_B;

	cout << "Введите количество элементов множества B:" << endl;

	cin >> n_of_B;

	while (cin.fail()) {

		system("CLS");

		cin.clear();

		cin.ignore(1000, '\n');

		cout << "Введите количество элементов множества B:" << endl;

		cin >> n_of_B;



	}

	//ввод элементов для B

	set<string> B;

	for (int i = 1; i <= n_of_B; i++) {

		string b;

		cout << "Введите " << i << "-й элемент B(cbii)" << endl;

		cin >> b;

		if (validate(b)) {

			B.insert(b);

		}

		else {

			i--;

			system("CLS");

		}



	}



	set<string> result_union = union_sets(A, B);

	set<string> result_intersec = intersection(A, B);

	set<string> compAB = complementAB(A, B);

	set<string> compBA = complementBA(A, B);

	set<string> symmetric = symmetric_diff(A, B);



	cout << "объединение: ";

	for (string elem : result_union) {

		cout << elem << ' ';

	}

	cout << endl;



	cout << "пересечение: ";

	for (string elem : result_intersec) {

		cout << elem << ' ';

	}

	cout << endl;



	cout << "дополнение A/B: ";

	for (string elem : compAB) {

		cout << elem << ' ';

	}

	cout << endl;



	cout << "дополнение B/A: ";

	for (string elem : compBA) {

		cout << elem << ' ';

	}

	cout << endl;



	cout << "симметричная разность: ";

	for (string elem : symmetric) {

		cout << elem << ' ';

	}

	cout << endl;

	return 0;

}
