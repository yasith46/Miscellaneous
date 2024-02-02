// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

//bubblesort
vector<int> bubblesort(vector<int> array) {
	for (size_t i=0; i<array.size(); i++) {
		for (size_t j=0; j<array.size()-i-1; j++) {
			if (array[j]>array[j+1]) {
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}

	return array;
}

//selection sort
vector<int> selectionsort(vector<int> array) {
	for (size_t i=0; i<array.size(); i++) {
		size_t curr_min = i;
		for (size_t j=i+1; j<array.size(); j++) {
			if (array[j]<array[curr_min]) {
				curr_min = j;
			}
		}

		int temp = array[i];
		array[i] = array[curr_min];
		array[curr_min] = temp;
	}

	return array;
}

int printarray(vector<int> array) {
	for (size_t i=0; i<array.size(); i++) {
		cout << array[i] << " ";
	}
	cout << "\n";
	return 0;
}

int main()
{
	vector<int> vec1 = {5,5,8,7,4,1,2,3};
	vector<int> vec2 = selectionsort(vec1);
	printarray(vec2);
}
