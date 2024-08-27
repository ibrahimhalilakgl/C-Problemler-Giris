#include <stdio.h>  // Standart input-output kütüphanesini ekliyoruz.

int main(){

    int sayi;  // Kullanıcıdan alınacak sayıyı tutmak için bir değişken tanımlıyoruz.

    printf("Lutfen Bir Sayi Giriniz: ");  // Kullanıcıdan bir sayı girmesini istiyoruz.
    scanf("%d",&sayi);  // Kullanıcının girdiği sayıyı 'sayi' değişkenine kaydediyoruz.

    int karesi = sayi * sayi;  // Girilen sayının karesini hesaplayıp 'karesi' değişkenine atıyoruz.

    printf("Girilen Sayinin Karesi: %d", karesi);  // Hesaplanan kareyi ekrana yazdırıyoruz.

    return 0;  // Programı başarıyla sonlandırıyoruz.
}
