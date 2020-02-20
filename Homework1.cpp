/*kullanicinin istegine gore ekrana ucgen , ters ucgen veya elmas basan program



@BEGE
*/
#include<iostream>

using namespace std;

void duzUcgen(int _x) {//duz ucgen basan fonksiyon
	int b, i, j;//donguler icin degiskenler
	int yildiz, bosluk;
	b = _x;// disaridan gelen degeri b ye atadik
	yildiz = 1;
	bosluk = b - 1;
	for (i = 0; i < b; i++) {
		for (j = 0; j <= bosluk; j++)
		{
			cout << " ";
		}
		for (j = 0; j < yildiz; j++)
		{
			cout << "*";
		}
		cout << endl;
		yildiz = yildiz + 2;//her satirda ucgen 2 artýyor
		bosluk--;//her satirda birakilan bosluk 1 azaliyor 

	}
}
void tersUcgen(int _x) {
	int b, i, j;
	int yildiz, bosluk;
	b = _x;
	i = 0;
	j = 0;
	bosluk = 0;
	yildiz = b + 4;
	while (i < b) {//satirlari basan dongu
		while (j < bosluk)//bosluklarý basan dongu
		{
			cout << " ";
			j++;
		}
		j = 0;
		while (j < yildiz)//yildizlari basan dongu
		{
			cout << "*";
			j++;
		}
		j = 0;
		cout << endl;
		bosluk++;
		yildiz = yildiz - 2;
		i++;
	}
}
void elmas(int _x) {
	int b, i, j;
	int yildiz, bosluk;
	b = _x;
	yildiz = 1;
	bosluk = b - 1;
	for (i = 0; i <= b; i++) {//elmasin ustunu basan kisim
		for (j = 0; j <= bosluk; j++)
		{
			cout << " ";
		}
		for (j = 0; j < yildiz; j++)
		{
			cout << "*";
		}
		cout << endl;
		yildiz = yildiz + 2;
		bosluk--;

	}
	bosluk = 0;
	yildiz = b + 6;

	for (i = 0; i <= b; i++)//elmasin altini basan kisim
	{
		for (j = 0; j < bosluk; j++) {
			cout << " ";
		}
		for (j = 0; j < yildiz; j++) {
			cout << "*";
		}
		cout << endl;
		bosluk++;
		yildiz = yildiz - 2;
	}
}
int tersDuzKontrol(int _y) {//girilen sayinin 3-15 arasinda olup olmadgini kontrol eden fonksiyon 
	int b;
	b = _y;
	if (b > 15 || b < 3 || b % 2 == 0) {
		cout << "lutfen 3 ve 15 arasinda tek bir sayi giriniz" << endl;
		cin >> b;
		if (b > 15 || b < 3 || b % 2 == 0) {
			cout << "lutfen 3 ve 15 arasinda tek bir sayi giriniz" << endl;
			cin >> b;
			if (b > 15 || b < 3 || b % 2 == 0) {
				cout << "kusura bakma laftan anlamiyorsun :)))" << endl;
				return -1; //eger 3-15 arasinda degilse veya ciftse -1 doner

			}

		}

	}

}
int elmasKontrol(int _y) {//girilen sayinin 5-15 arasinda ve tek  olup olmadgini kontrol eden fonksiyon 
	int b;
	b = _y;
	if (b > 15 || b < 5 || b % 2 == 0) {
		cout << "lutfen 5 ve 15 arasinda tek bir sayi giriniz" << endl;
		cin >> b;
		if (b > 15 || b < 5 || b % 2 == 0) {
			cout << "lutfen 5 ve 15 arasinda tek bir sayi giriniz" << endl;
			cin >> b;
			if (b > 15 || b < 5 || b % 2 == 0) {
				cout << "kusura bakma laftan anlamiyorsun :)))" << endl;
				return -1; //eger 5-15 arasinda degilse veya ciftse -1 doner

			}

		}

	}
}
int main() {
	int b, i, j, s;
	int yildiz, bosluk;
	int n;
	cout << "1:duz ucgen" << endl;
	cout << "2:Ters ucgen" << endl;
	cout << "3:Elmas" << endl;
	cout << "0 : cikis" << endl;

	cout << "lutfen bastirmak istediginiz sekli giriniz" << endl;
	cin >> n;



	if (n == 1) {
		cout << "3-15 arasi bir sayi giriniz" << endl;
		cin >> b;
		s = tersDuzKontrol(b);
		if (s == -1) {//eger -1 donduyse 3 kere yanlis girilmistir ve programdan cikilir
			return 0;
		}
		duzUcgen(b);

	}

	if (n == 2) {

		cout << "lutfen bastýrmak istediginiz sekli giriniz" << endl;
		cin >> b;
		s = tersDuzKontrol(b);
		if (s == -1) {//eger -1 donduyse 3 kere yanlis girilmistir ve programdan cikilir
			return 0;
		}
		tersUcgen(b);




	}
	if (n == 3) {

		cout << "lutfen bastýrmak istediginiz sekli giriniz" << endl;
		cin >> b;
		s = elmasKontrol(b);
		if (s == -1) {//eger -1 donduyse 3 kere yanlis girilmistir ve programdan cikilir
			return 0;
		}
		elmas(b);
	}
	if (n == 0) {
		cout << "programdan cikildi" << endl;

		return 0;



	}








	return 0;
}
