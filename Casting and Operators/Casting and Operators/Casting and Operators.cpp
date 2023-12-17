#include <iostream>

using namespace std;

int main()
{

    //CASTİNG


    //C++ dilinde "tür dönüşümü" (type conversion) veya "tür dönüştürme" olarak adlandırılan kavram,
    //bir veri türünün başka bir veri türüne dönüştürülmesini ifade eder.
    //Bu işlem, programın çalışması sırasında değişkenlerin veya ifadelerin türlerini değiştirmek için kullanılır.
    //2ye ayrılır kapalı ve açık tür dönüşümü

    //KAPALİ TUR DONUSUMU:
    //C++ derleyicisi tarafından otomatik olarak gerçekleştirilen bir tür dönüşümüdür. 
    //Bu tür dönüşümü genellikle daha küçük bir veri tipinden daha büyük bir veri tipine doğru olan durumlarda görülür.
    int sayi = 5;
    sayi = 5.30;

    cout << "Bu bir double degeridir:   " << sayi << endl;


    //ACİK TUR DONUSUMU:
    //Programcı tarafından belirtilen bir dönüşüm işlemidir. 
    //Bilinçli bir şekilde veri tipini değiştirmek istediğimiz durumlarda bu tür dönüşümü kullanırız.
    // static_cast, dynamic_cast, reinterpret_cast gibi operatörler kullanılabilir.

    double ondalikSayi2 = 3.14;
    int tamSayi = static_cast<int>(ondalikSayi2);

    cout << "Bu bir acik tur donusumudur:    " << tamSayi << endl;

    //chardan inte casting ornegi
    char ch{ 90 };
    cout << static_cast<int>(ch) << endl;




    //OPERATORS

    //Operatorler programlamada çeşitli görevleri yerine getirmek için kullanılırlar.
    //Aritmetik Operatörler :

    /*  +: Toplama
        - : Çıkarma
        * : Çarpma
        / : Bölme
        % : Mod(bölme işleminin kalanını verir)*/

    int a = 5, b = 3;

    cout << "Toplama: " << a + b << endl;

    cout << "Cikarma: " << a - b << endl;

    cout << "Carpma: " << a * b << endl;

    cout << "Bolme: " << a / b << endl;

    cout << "Mod: " << a % b << endl;


  
    //Atama Operatörleri :

    /*   = : Değer atama
        += : Topla ve ata
        -= : Çıkar ve ata
        *= : Çarp ve ata
        /= : Böl ve ata
        %= : Mod al ve ata*/
    int x = 5;

    x += 3;  // x'i 3 artır
    cout << "x += 3: " << x << endl;

    x -= 2;  // x'i 2 azalt
    cout << "x -= 2: " << x << endl;

    x *= 4;  // x'i 4 ile çarp
    cout << "x *= 4: " << x << endl;

    x /= 2;  // x'i 2'ye böl
    cout << "x /= 2: " << x << endl;

    x %= 3;  // x'in 3'e bölümünden kalanı al
    cout << "x %= 3: " << x << endl;







     //Karşılaştırma Operatörleri :

   /*   == : Eşit mi ?
        != : Eşit değil mi ?
        < : Küçük mü ?
        > : Büyük mü ?
        <= : Küçük veya eşit mi ?
        >= : Büyük veya eşit mi ?*/


    cout << "Esit mi? " << (a == b) << endl;

    cout << "Esit degil mi? " << (a != b) << endl;

    cout << "Kucuk mu? " << (a < b) << endl;

    cout << "Buyuk mu? " << (a > b) << endl;

    cout << "Kucuk veya esit mi? " << (a <= b) << endl;

    cout << "Buyuk veya esit mi? " << (a >= b) << endl;








    //Mantıksal Operatörler :

   /*   && : Mantıksal ve(AND)
        || : Mantıksal veya(OR)
        !: Mantıksal değili(NOT)*/

    bool x2 = true, y = false;

    cout << "Mantiksal ve: " << (x2 && y) << endl;
    cout << "Mantiksal veya: " << (x2 || y) << endl;
    cout << "Mantiksal degil: " << !x2 << endl;



        //Artırma ve Azaltma Operatörleri :

  /*    ++ : Bir artırma
        -- : Bir azaltma*/

    //ön artım son artım kod ile örnegi aşşagıda var


    cout << "Artirma: " << ++a << endl;  // Önce artır, sonra kullan

    cout << "Azaltma: " << --a << endl;  // Önce azalt, sonra kullan

    cout << "Artirma: " << a++ << endl;  // Önce kullan, sonra artır

    cout << "Azaltma: " << a-- << endl;  // Önce kullan, sonra azalt


}


