#include <iostream>
using namespace std;

template <typename T> void showArray(T arr[], int L) {
	cout << "Изначальный массив: [";
	for (int i = 0; i < L; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}
// Задача 1.
template <typename T> void clearArray(T arr[], int L, int key) {
	cout << "Mассив с обнуленным элементом - " << key << ": [";
	for (int i = 0; i < L; i++) {
		if (arr[i] == key)
			arr[i] = 0;
		cout << arr[i] << ", ";
	}
	cout << "\b\b]\n\n";
}
// Задача 2.
int indexSum(int arr1[], int L1, int arr2[], int L2, int key) {
	if (key > L1 - 1 || key > L2 - 1 || key < 0) {
		cout << "Ошибка!\n";
		return 0;
	}
	else
		for (int i = 0; i < L1; i++)
			for (int j = 0; j < L2; j++)
				if (i == key && j == key)
	return arr1[i] + arr2[i];
}

// Задача 3.
template <typename T> T maxSum(T arr[], int L) {
	T max1 = arr[0];
	T max2 = arr[L - 1];
	int num;
	for (int i = 0; i < L; i++) {
		if (arr[i] > max1) {
			max1 = arr[i];
			num = i;
		}
	}
	for (int i = L - 1 ; i > num; i--)
		if (arr[i] > max2)
			max2 = arr[i];
	return max1 + max2;
}


int main() {
	setlocale(LC_ALL, "ru");
	int n;

	// Задача 1
	cout << "\tЗадача 1\n";
	int z1[10] = { 45, 22, 13, 45, 78, 96, 9, 19, 10, 11 };
	showArray(z1, 10);
	cout << "\nВведите число массива: ";
	cin >> n;
	clearArray(z1, 10, n);
	
	// Задача 2
	cout << "\tЗадача 2\n";
	int z2_1[6] = { 22, 23, 8, 19, 12, 13 };
	int z2_2[5] = { 78, 79, 54, 2, 47,  };
	showArray(z2_1, 6);
	showArray(z2_2, 5);
	cout << "\nВведите индекс: ";
	cin >> n;
	cout << "Сумма чисел индекса " << n << " = " << indexSum(z2_1, 6, z2_2, 5, n) << "\n\n";
	
	

	// Задача 3
	cout << "\tЗадача 3\n";
	int z3[10] = { 14, 22, 33 ,84 ,65, 5, 96, 100, 16, 47 };
	showArray(z3, 10);
	cout << maxSum(z3, 10) << "\n\n";
	

	
	return 0;
}