#include <stdio.h>  // Standart input-output kütüphanesini ekliyoruz.

int main(){

    int sayi1, sayi2, sayi3;  // Üç sayıyı tutmak için değişkenler tanımlıyoruz.
    float ortalama;  // Sayıların ortalamasını tutmak için bir değişken tanımlıyoruz.

    printf("Lutfen Ilk Sayiyi Giriniz: ");  // Kullanıcıdan ilk sayıyı girmesini istiyoruz.
    scanf("%d", &sayi1);  // Kullanıcının girdiği ilk sayıyı 'sayi1' değişkenine kaydediyoruz.

    printf("Lutfen Ikinci Sayiyi Giriniz: ");  // Kullanıcıdan ikinci sayıyı girmesini istiyoruz.
    scanf("%d", &sayi2);  // Kullanıcının girdiği ikinci sayıyı 'sayi2' değişkenine kaydediyoruz.

    printf("Lutfen Ucuncu Sayiyi Giriniz: ");  // Kullanıcıdan üçüncü sayıyı girmesini istiyoruz.
    scanf("%d", &sayi3);  // Kullanıcının girdiği üçüncü sayıyı 'sayi3' değişkenine kaydediyoruz.

    ortalama = (sayi1 + sayi2 + sayi3) / 3;  // Üç sayının ortalamasını hesaplıyoruz.

    printf("Girilen Sayilarin Ortalamasi: %.2f", ortalama);  // Hesaplanan ortalamayı ekrana yazdırıyoruz. Ortalamayı virgülden sonra iki basamak olacak şekilde formatlıyoruz.

    return 0;  // Programı başarıyla sonlandırıyoruz.
}
