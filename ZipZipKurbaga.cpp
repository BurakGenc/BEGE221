/*zip zipr kurbaga 
Zıp zıp kurbağa bir nehri karşıdan karşıya geçmek istemektedir. Nehrin iki kenarı arasında N adet taş vardır. Kurbağa
sadece ileri doğru ve tek bir seferde rastgele olarak 1, 2 veya 3 sonraki taşa zıplamaktadır. N adet taş verildiğinde nehrin
bir kenarından diğer kenarına kaç farklı şekilde ulaşabileceği bulan program.

@Burakgenc
*/

#include <iostream>
#include <vector>
#include <iomanip>
#include <chrono>

using namespace std;
long long int arr[1000];//Memoization icin array

#define _TEST_ITERATIVE_
#define _TEST_RECURSIVE_


long long recursiveFunction( int n)

	{
	
 
		if (n <= 1)//fonksiyonun algoritmasi ilk 3 terimden sonra basladigi icin ( kendiden onceki 3 fonksiyonun toplami)
			return n;//ilk 3 terimde degerleri kendim atadim
		if (n==2)
		{
			return n;
		}
		if (n==3)
		{
			return 4;

		}
		if (arr[n] != 0)
		{
			return arr[n];
		}
		else {
			arr[n] = recursiveFunction(n - 1) + recursiveFunction(n - 2)+recursiveFunction(n - 3);//her bir sonuc diziye atanarak geri dondüste ayni hesabi 
			                                                                                                                                                                          // yapmamiza gerek kalmaz ve daha hizli sonuc elde ederiz
			return arr[n];
		}
	}


/* Yinelemeli olarak zip zip kurbaganin kac farkli yoldan gittigini bulan fonksiyondur.
 * Bu fonksiyon icinde for ve while dongusu kullanilmalidir.
 * Bu fonksiyon icinde baska bir fonksiyona (kendisi dahil) cagri yapilamaz.
 */
long long iterativeFunction( int _n)
{
	if (_n <= 1)//fonksiyonun algoritmasi ilk 3 terimden sonra basladigi icin ( kendiden onceki 3 fonksiyonun toplami)
		return _n;//ilk 3 terimde degerleri kendim atadim
	if (_n == 2)
	{
		return _n;
	}
	if (_n == 3)
	{
		return 4;

	}
	else {
		long long int x=1, y=2, z=4,toplam=0;
		for (int i = 4; i <= _n; i++)
		{
			toplam = x + y + z;
			x = y;
			y = z;
			z = toplam;
		}
		return toplam;
	}
}

int main()
{

	const int MAX_NUMBER_OF_STONES{ 72 };

	cout << setfill(' ');

	cout.imbue(locale(""));

	for (auto i = 1; i < MAX_NUMBER_OF_STONES; ++i)
	{

#ifdef _TEST_ITERATIVE_
		{
			long long tempResult = { 0 };

			auto start = std::chrono::steady_clock::now();
			tempResult = iterativeFunction(i);
			auto stop = std::chrono::steady_clock::now();
			auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();


			cout << "iterative" << setw(4) << i << " -> " << tempResult << " ( " << duration << "us )\n";
		}
#endif

#ifdef _TEST_RECURSIVE_
		{
			long long tempResult = { 0 };

			auto start = std::chrono::steady_clock::now();
			tempResult = recursiveFunction(i);
			auto stop = std::chrono::steady_clock::now();
			auto duration = std::chrono::duration_cast<std::chrono::microseconds>(stop - start).count();

			cout << "recursive" << setw(4) << i << " -> " << tempResult << " ( " << duration << "us )\n\n";
		}
#endif

	}

	return 0;
}
