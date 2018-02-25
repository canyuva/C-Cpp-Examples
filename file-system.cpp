// Can YUVA
// github.com/canyuva

#include <iostream>
#include<string>
#include<fstream>

using namespace std;

string okunan;

void dosyaOlustur (){

  ofstream dosya; // dosya isimli değiskene veri tipi atamasi.

  dosya.open("okubeni.txt"); // okubeni.txt dosyasini olusturmak

  dosya << "Tebrikler bu dosyayi okudunuz!\n"; // okubeni.txt'nin icerisine yazi yazdik.
  dosya.close(); // dosyayi kapattik.
  cout << "Dosyaya yazi yazildi.. \n" << endl; // Konsol ekranina mesaj yazdik.

}

void dosyaVeriOku(){

  ifstream dosya1("okubeni.txt", ios::in); // mevcut okubeni.txt'yi actik ve dosya1 degiskenine ifstream tipinde atadik.
  cout << "Dosyada okunanlar :" << endl;

  while(!dosya1.eof()){ // Dosyayi sonuna kadar okuduk..

    getline(dosya1,okunan); // Satir satir string degerlerini okunan değiskenine atadik.

    cout << okunan << endl; // konsolda okunan degerleri bastirdik.

}

  dosya1.close(); // dosyayi kapattik.

}

void dosyaVeriSil(){

  ifstream dosya1("okubeni.txt", ios::in); // mevcut okubeni.txt'yi actik ve dosya1 degiskenine ifstream tipinde atadik.

  ofstream dosya2; // ofstream tipinde dosya2 degiskeni atadik.

  dosya2.open("silinen.txt"); // silinen.txt adinda yeni bir txt dosyasi olusturduk.

  // silme islemi
  string okunan2 = okunan; // mevcut okunan verileri okunan2 degiskenine atadik.
  okunan2 = ""; // okunan2 degiskenini bos hale getirdik.

  dosya2 << okunan2; // dosya2'ye okunan2 degerini yazarak silinen.txt dosyasini bos hale getirdik.

  cout << "okubeni.txt'nin icerisindeki veriler silindi!" << endl;


}

int main(int argc, char const *argv[]) {

// Menu kismi


int key;

do{

  int secim;
  cout << "Islem seciniz.." << endl;
  cout << "1- Dosya aç ve içerisine veri yaz. \n2- Veriyi oku \n3- Veriyi sil" << endl;
  cin >> secim;

  switch (secim) {
    case 1:
    dosyaOlustur();
    cout << "Menüye dönmek için 9 yazınız..\nProgramı kapatmak için herhangi bir sayı giriniz..\n" << endl;
    cin >> key;
    break;
    case 2:
    dosyaVeriOku();
    cout << "Menüye dönmek için 9 yazınız..\nProgramı kapatmak için herhangi bir sayı giriniz..\n" << endl;
    cin >> key;
    break;
    case 3:
    dosyaVeriSil();
    cout << "Menüye dönmek için 9 yazınız..\nProgramı kapatmak için herhangi bir sayı giriniz..\n" << endl;
    cin >> key;
    break;
    default:
    cout << "Hatali secim!" << endl;
  }
}while(key == 9);

  return 0;
}
