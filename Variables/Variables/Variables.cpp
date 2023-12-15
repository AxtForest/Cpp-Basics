#include <iostream>
using namespace std;
int main()
{
    /*C++ dilinde temel veri türleri şunlardır:

int: Tamsayı veri türünü temsil eder. Örneğin: 1, 42, -7.

float: Ondalık sayı veri türünü temsil eder. Örneğin: 3.14, -0.5, 2.0.

double: Çift hassasiyetli ondalık sayı veri türünü temsil eder. "float" türünden daha fazla hassasiyet sağlar. Örneğin: 3.14, -0.5, 2.0.

char: Tek bir karakteri temsil eder. Örneğin: 'a', '1', '!'.

bool: Mantıksal (boolean) veri türünü temsil eder. Sadece iki değeri alabilir: true veya false.

void: Geri dönüş değeri olmayan bir işlevi ifade eder. Ayrıca, genellikle bir işlevin tipini belirtmek istemediğiniz durumlarda kullanılır.

short: Kısa tamsayı veri türünü temsil eder. Genellikle "int" türünden daha küçük bir aralığa sahiptir.

long: Uzun tamsayı veri türünü temsil eder. Genellikle "int" türünden daha büyük bir aralığa sahiptir.

unsigned: İşaretsiz tamsayı veri türünü temsil eder. Sadece pozitif veya sıfır değerlerini alabilir.

signed: İşaretli tamsayı veri türünü temsil eder. Hem pozitif, hem de negatif değerleri alabilir, bu varsayılan davranıştır.

Bu temel veri türleri, C++ programlamasında değişkenlerin ve fonksiyonların türlerini belirtmek için kullanılır.

*/


// int: Tamsayı veri türü
    int integerNumber = 42;
    cout << "Tamsayi: " << integerNumber << endl;

    // float: Ondalık sayı veri türü
    float floatingNumber = 3.14;
    cout << "Ondalik Sayi: " << floatingNumber << endl;

    // double: Çift hassasiyetli ondalık sayı veri türü
    double doubleNumber = 2.71828;
    cout << "Double: " << doubleNumber << endl;

    // char: Karakter veri türü
    char character = 'A';
    cout << "Karakter: " << character << endl;

    // bool: Mantıksal (boolean) veri türü
    bool booleanValue = true;
    cout << "Boolean: " << booleanValue << endl;

    // void: Geri dönüş değeri olmayan bir fonksiyon
    // (main fonksiyonu zaten void tipinde)

    // short: Kısa tamsayı veri türü
    short shortInteger = 100;
    cout << "Kisa Tamsayi: " << shortInteger << endl;

    // long: Uzun tamsayı veri türü
    long longInteger = 1234567890;
    cout << "Uzun Tamsayi: " << longInteger << endl;

    // unsigned: İşaretsiz tamsayı veri türü
    unsigned unsignedInteger = 999;
    cout << "Isaretsiz Tamsayi: " << unsignedInteger << endl;

    // signed: İşaretli tamsayı veri türü
    signed signedInteger = -123;
    cout << "Isaretli Tamsayi: " << signedInteger << endl;

    /*const anahtar kelimesi kullanılarak bu değerlerin değiştirilemez olduğu belirtilmiştir.Özellikle, 
    float tipindeki sabit değeri belirtirken f harfini kullanmak önemlidir.
    Ayrıca, long tipindeki sabit değeri belirtirken L harfini kullanmak da önemlidir.*/

    //Const cogu veri tipi ile kullanılır burada int ve float örneği mevcut


    cout << "Const Degerler:" << endl;

    // int: Tamsayı veri türü
    const int integerNumber2 = 42;
    cout << "Tamsayi: " << integerNumber2 << endl;

    // float: Ondalık sayı veri türü
    const float floatingNumber2 = 3.14f;
    cout << "Ondalik Sayi: " << floatingNumber2 << endl;




}

