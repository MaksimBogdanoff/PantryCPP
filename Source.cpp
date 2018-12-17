#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <fstream>



using namespace std;




// recursive  function
int recursive_func(int n)
{
	if (n < 1)return n;

	n--;

	return recursive_func(n);
}



enum operacion{plas,minus};
// template function
template< operacion oper=plas ,typename T = int>
T Sum(T a,T b)
{
	if(oper == operacion::plas)
		return a + b;
	if (oper == operacion::minus)
		return a - b;
}



// factorial
int factorial(int n)
{
	// N! = N*(N-1)!;

	if (n == 0) return 0;
	if (n == 1) return 1;



	return n * factorial(n-1);
}


int main(int argc, char** argv)
{
	cout << "Lessons...1" << endl;
	
	int res = recursive_func(10);
	cout << res << endl;

	float res2 = Sum<operacion::plas,float>(8.5f, 9.3f);
	cout << res2 << endl;


	// time rand number.
	srand((size_t)time(NULL));
	int randVal = rand()%20;
	cout <<"randVal: "<< randVal << endl;


	cout << "factorial: "<< factorial(5) << endl;

	cout << "****************" << endl << endl;

	ifstream file;
	file.exceptions(ifstream::badbit | ifstream::failbit);
	try {
		cout << "File to open..." << endl;
		file.open("mbLog.txt");
	}
#ifdef _FSTREAM_ // fstream...
	catch (const ifstream::failure & errFile)
	{
		cout << "Error: " << errFile.what() << endl;
		cout << "Error file: " << errFile.code()<< endl;
		
	}
#else
	catch (const std::exception & err)
	{
		cout << "Error: " << err.what() << endl;
	}
#endif
	file.close();



	system("pause");
	return 0;
}