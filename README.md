# praktikum-5

## latihan1.cpp : program dengan menggunakan Do While

## menginputkan bilangan sebanyak banyaknya, sampai kondisi bilangan yang dimasukan angka nol
1. membuat inisialisasi "int a, max=0;"
2. membuat perulangan dengan menggunakan Do While,

   a. di dalam body Do terdapat aksi sebagai berikut :
    - memasukan nilai a "cin >> a;"
    - membuat if statement dengan kondisi a lebih besar dari max "a>max"
    - jika a lebih besar dari max maka max sama dengan a "max=a"
    
   b. di dalam while terdapat kondisi a tidak sama dengan nol "a!=0"
 3. mencetakan nilai terbesar yang di inputkan tersebut ke consol "cout << max;"
 
 berikut flowchart nya :
 ![latihan1](https://user-images.githubusercontent.com/44117281/48596514-ef574500-e98b-11e8-980b-7e88c9de91ae.jpg)
 
 berikut code lengkap nya :
 #include <iostream>

using namespace std;

int main()
{
	int a,max=0;

	do{
		cout << "masukan bilangan : ";
	cin >> a;

	if (a>max)
		max=a;
	}
	while (a!=0);

	cout << max;

	return 0;
}

berikut hasil screnshotnya :
![latihan1](https://user-images.githubusercontent.com/44117281/48596831-3b56b980-e98d-11e8-846f-eb3d53468028.png)


## latihan2.cpp : program menggunakan operator logika Or

## menginputkan tiga buah bilangan, cetak "benar bila salah satu bilangan merupakan jumlah dari dua buah bilangan yang lain, jika tidak (selain itu) cetak "salah"

1. membuat inisialisasi a,b,c "int a,b,c;"
2. menginputkan nilai a,b,c "cin >> a" "cin >> b;" "cin >> c;"
3. membuat if statement dengan menuliskan 3 kondisi yang di pisahkan oleh Or
  1. (a+b==c) or
  2. (a+c==b) or
  3. (b+c==a)
4. jika nilai kondisi di atas bernilai true maka cetak "Benar" jika false maka cetak "Salah"

berikut flowchart nya :
![latihan2](https://user-images.githubusercontent.com/44117281/48596565-32b1b380-e98c-11e8-8136-4fab566476e3.jpg)

berikut code lengkapnya :
#include <iostream>

using namespace std;

int main()
{
	int a,b,c;

	cout << "masukan nilai a : ";
	cin >> a;
	cout << "masukan nilai b : ";
	cin >> b;
	cout << "masukan nilai c : ";
	cin >> c;

	if ((a+b==c) or (a+c==b) or (b+c==a))
		cout << "benar";
	else
		cout << "salah";

	return 0;
}

