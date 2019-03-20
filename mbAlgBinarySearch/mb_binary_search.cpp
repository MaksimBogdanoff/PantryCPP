/*
*	19/03/2019
*	mb_programmer.... 
*	Algorithm "Binary search".
*/

#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;






template<typename T>
T mb_binary_search(T data[], int size,const int& serchNamber )
{
	if(size <= 0) return -1;

	int low = 0;
	int mid = 0;
	int high = size-1;

	int cout_iteracion = 0;
	while(low <= high)
	{

		// каждый раз алгоритм проверяет средний элемент(середину).
		mid = (low + high)/2;
		T temp = data[mid];

		if(temp == serchNamber)
			return temp;
		if(temp > serchNamber)
			high = mid - 1;
		else
			low = mid + 1;

		cout << "iter: " << cout_iteracion << endl;
		cout_iteracion++;
	}

	return -1; 
}





int main(int argc, char** argv)
{
	cout << endl;
	cout << "Algorithm: Binary search." << endl;
	cout << "_______________________" << endl << endl;



	int array1[] = {1,2,3,4,5,6,7,8,9,10};
	int coutn_elenent = sizeof(array1)/sizeof(array1[0]);

	int res = mb_binary_search(array1,coutn_elenent, 5 ); 

	cout <<"Result: " << res << endl;

	system("pause");
	return 0;
}
