#include<iostream>
using namespace std;


void selectionSort(int arr[]) {

	for (int i = 0; i < 4; i++) {

		int min = i;

		for (int j = i + 1; j < 5; j++) {

			// for ascending order
	       //for descending order just change < to > 
			if (arr[j] < arr[min])
				min = j;
		}
		//swapping
		if (min != i) {

			int temp = arr[min];
			arr[min] = arr[i];
			arr[i] = temp;


		}
	}
}

int main() {

	int myarr[5];
	cout << "Enter five integers" << endl;

	for (int i = 0; i < 5; i++) {

		cin >> myarr[i];
	}
	cout << "unsorted Array " << endl;
	
	for (int i = 0; i < 5; i++) {

		cout << myarr[i]<< " ";
	}
	cout << endl;

	selectionSort(myarr);

	cout << "sorted Array " << endl;

	for (int i = 0; i < 5; i++) {

		cout << myarr[i] << " ";
	}

	return 0;
}