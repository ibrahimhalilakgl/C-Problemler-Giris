#include <stdio.h>  // Standart input-output kütüphanesini ekliyoruz.

int main(){

    int kenar1, kenar2, cevre, alan;  // Dikdörtgenin kenar uzunlukları, çevresi ve alanı için değişkenler tanımlıyoruz.

    printf("Lutfen Geometrik Seklin Bir Kenarini Giriniz: ");  // Kullanıcıdan dikdörtgenin bir kenarını girmesini istiyoruz.
    scanf("%d", &kenar1);  // Kullanıcının girdiği kenar uzunluğunu 'kenar1' değişkenine kaydediyoruz.

    printf("Lutfen Geometrik Seklin Diger Kenarini Giriniz: ");  // Kullanıcıdan dikdörtgenin diğer kenarını girmesini istiyoruz.
    scanf("%d", &kenar2);  // Kullanıcının girdiği diğer kenar uzunluğunu 'kenar2' değişkenine kaydediyoruz.

    cevre = 2 * (kenar1 + kenar2);  // Dikdörtgenin çevresini hesaplıyoruz: 2*(kenar1 + kenar2)
    alan = kenar1 * kenar2;  // Dikdörtgenin alanını hesaplıyoruz: kenar1 * kenar2

    printf("Girilen Geometrik Seklin Cevresi: %d\n", cevre);  // Hesaplanan çevreyi ekrana yazdırıyoruz.
    printf("Girilen Geometrik Seklin Alani: %d", alan);  // Hesaplanan alanı ekrana yazdırıyoruz.

    return 0;  // Programı başarıyla sonlandırıyoruz.
}
