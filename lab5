#include <vector>

#include <set>

#include <iostream>

#include <map>

#include <Windows.h>

#include <sstream>

#include <string>

using namespace std;







int main() {

	SetConsoleCP(1251);

	SetConsoleOutputCP(1251);

	cout << "Введите размер матрицы" << endl;

	int size;

	cin >> size;

	cin.ignore();

	vector<vector<bool>> matrix(size,vector<bool>());





	cout << "Введите матрицу смежности" << endl;

	for (int i = 0; i < size; i++) {

		string str = "";

		getline(cin, str);

		istringstream iss(str);

		bool value;

		while (iss >> value) {

			matrix.at(i).push_back(value);

		}

	}

	





	for (int k = 0; k < size; k++) {

		vector<vector<bool>> temp_matrix(size, vector<bool>(size));

		for (int row = 0; row < size; row++) {

			if (!(matrix[row][k])) 

				temp_matrix[row] = matrix[row];

			else {

				for (int column = 0; column < size; column++) {

					temp_matrix[row][column] = matrix[k][column] || matrix[row][column];

				}



			}

		}

		matrix = temp_matrix;

	}



	cout << "Матрица достижимости:" << endl;



	for (int i = 0; i < size; i++) {

		for (int j = 0; j < size; j++) {

			cout << matrix[i][j] << ' ';

		}

		cout << endl;

	}



	return 0;

}
