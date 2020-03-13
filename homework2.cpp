/* karmasik sayilar iceren sinif ve karmasik sayilarla cesitli islemler yapabilen program
Burak Genc 
*/
#include <iostream>
#include<math.h>
#include<sstream>
using namespace std;

class Complexnumber {
public:
    Complexnumber() {
        reel = 0;
        sanal = 0;
    }//Varsay�lan yap�c� (default constructor): Karma��k say�n�n varsay�lan de�eri 0�d�r.
    Complexnumber(int a) {
        reel = a;
        sanal = 0;
    }//Bir tamsay�y� (int) bir karma��k say�ya d�n��t�ren bir d�n��t�r�c� yap�c� (conversion constructor).
    Complexnumber(double b) {
        reel = b;
        sanal = 0;
    }//Bir reel say�y�(double) bir karma��k say�ya d�n��t�ren bir d�n��t�r�c� yap�c�(conversion constructor).
    Complexnumber(string metin) {

        reel = stoi(metin);
        sanal = stoi(metin.substr(2,5));
    }//Bir metni (c++ string) bir karma��k say�ya d�n��t�ren bir d�n��t�r�c� yap�c� (conversion constructor).
    Complexnumber(int _x, int _y) {
        reel = _x;
        sanal = _y;
    }//�ki ger�ek de�erli parametre (a ve b) alarak bu de�erlerden bir karma��k say� �retebilen bir yap�c�.
public:
    int reel;
    int sanal;
    
    void setter_Reel(int x) {

        ozel_reel = x;
 
    }//Sanal ve ger�el de�eri tutan �zel veri �yelerine eri�im ve onlar� d�zenlemek i�in getter / setter fonksiyonlar
    void setter_Sanal(int x) {

        ozel_sanal = x;

    }//Sanal ve ger�el de�eri tutan �zel veri �yelerine eri�im ve onlar� d�zenlemek i�in getter/setter fonksiyonlar
    int getter_Reel() {

    
        return (ozel_reel);
    }//Sanal ve ger�el de�eri tutan �zel veri �yelerine eri�im ve onlar� d�zenlemek i�in getter/setter fonksiyonlar
    int getter_Sanal() {


        return (ozel_sanal);
    }//Sanal ve ger�el de�eri tutan �zel veri �yelerine eri�im ve onlar� d�zenlemek i�in getter/setter fonksiyonlar
    Complexnumber  add(Complexnumber k6) {
        Complexnumber Add;
        Add.reel = reel + k6.reel;
        Add.sanal = sanal + k6.sanal;
        return Add;
    }//Parametre olarak bir karma��k say�y� alan ve kendine ekleyen bir add �ye fonksiyonu.
    Complexnumber  sub(Complexnumber k7) {
        Complexnumber Sub;
        Sub.reel = reel - k7.reel;
        Sub.sanal = sanal - k7.sanal;
        return Sub;
    }//Parametre olarak bir karma��k say�y� alan ve kendinden ��kartan bir subtract �ye fonksiyonu.
    Complexnumber  div(Complexnumber k8) {
        Complexnumber Div;
        Div.reel = reel / k8.reel;
        Div.sanal = sanal / k8.sanal;
        return Div;
    }//Parametre olarak bir karma��k say�y� alan ve kendini o say�ya b�len bir divide �ye fonksiyonu.
    void print(Complexnumber x) {

        cout << "k8 reel:" << x.reel << endl;
        cout << "k8 sanal:" << x.sanal << "i"<<endl;


    }//Karma��k say�y� ekrana bast�ran bir print �ye fonksiyonu.
private:
    int ozel_reel;//�zel eri�imi olan sayilar
    int ozel_sanal;
 

};
int main()
{
  const  Complexnumber k1(50);//Bir tamsay�y� (int) bir karma��k say�ya d�n��t�ren bir d�n��t�r�c� yap�c� (conversion constructor). test
  const  Complexnumber k2(54.0); //Bir reel say�y�(double) bir karma��k say�ya d�n��t�ren bir d�n��t�r�c� yap�c�(conversion constructor).test
  const  Complexnumber k3("2+6i");// Bir metni(c++ string) bir karma��k say�ya d�n��t�ren bir d�n��t�r�c� yap�c�(conversion constructor). test
  const  Complexnumber k4(5,7);//�ki ger�ek de�erli parametre (a ve b) alarak bu de�erlerden bir karma��k say� �retebilen bir yap�c�. test
               Complexnumber k5;//Sanal ve ger�el de�eri tutan �zel veri �yelerine eri�im ve onlar� d�zenlemek i�in getter/setter fonksiyonlar test
               Complexnumber k6(5,7);// Parametre olarak bir karma��k say�y� alan ve kendine ekleyen bir add �ye fonksiyonu. test
               Complexnumber k7(8, 6);//Parametre olarak bir karma��k say�y� alan ve kendinden ��kartan bir subtract �ye fonksiyonu. test
               Complexnumber k8(3, 2);//Parametre olarak bir karma��k say�y� alan ve kendini o say�ya b�len bir divide �ye fonksiyonu.ve 
                                                                   //Karma��k say�y� ekrana bast�ran bir print �ye fonksiyonu.test


    cout << "k1 reel: "<< k1.reel << endl;
    cout << "k1 sanal: "<< k1.sanal << "i" << endl;
    cout << "k2 reel: "<< k2.reel << endl;
    cout << "k2 sanal: "<< k2.sanal << "i" << endl;
    cout << "k3 reel: "<< k3.reel << endl;
    cout << "k3 sanal: "<< k3.sanal << "i" << endl;
    cout << "k4 reel: " << k4.reel << endl;
    cout << "k4 sanal: " << k4.sanal <<"i"<< endl;


    k5.setter_Reel(5);
    cout << "k5 reel:" << k5.getter_Reel() << endl;
    k5.setter_Sanal(7);
    cout << "k5 reel:" << k5.getter_Sanal() << "i" << endl;


    k6 = k6.add(k6);
    cout <<"k6 reeel:"<< k6.reel << endl;
    cout <<"k6 sanal:"<< k6.sanal << "i"<<endl;


    k7 = k7.sub(k7);
    cout << "k7 reeel:" << k7.reel << endl;
    cout << "k7 sanal:" << k7.sanal << "i" << endl;

    k8 = k8.div(k8);
    k8.print(k8);


    return 0;
}
