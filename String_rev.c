#include <stdio.h>
#include <string.h>

/*

   Code dibawah merupakan prototype fungsi
   untuk mengenalkan pada compiler bahwa kita memiliki fungsi reverse
   dengan tipe void.

*/ 
void reverse(char*, int, int);
 
int main()
{
   char a[100];
   printf("Masukkan String : ");
   scanf("%[^\n]s", a);

   reverse(a, 0, strlen(a)-1);
   printf("%s\n", a);
 
   return 0;
}
/*

   Fungsi main merupakan fungsi utama yang dibaca saat program dijalankan,
   dalam fungsi main ini terdapat variable char a dalam betuk array, dimana
   variable tersebut memiliki fungsi untuk menyimpan data inputan user, kemudian terdapat
   pemanggilan fungsi reverse dengan parameter array of char,kemudian parameter kedua
   berupa awal index array yaitu nol, dan akhir array adalah panjang array di kurangi 1
   pada param ketiga, kemudian dilanjutkan dengan print array yg sudah di reverse

*/
 
void reverse(char *x, int begin, int end){
   char c; 
   //c merupakan temporary variable
 
   if (begin >= end)
      return;
   /* 

      if conditional diatas diperlukan untuk melihat sejauh mana fungsi
      akan berulang
   */


   c          = *(x+begin);
   *(x+begin) = *(x+end);
   *(x+end)   = c;
   /*

      variable c diberi nilai = dengan indexs variable begin
      kemudian pointer yg menunjuk ke indexs yang bernilai begin di rubah
      nilainya menjadi nilai dereferencing dari indexs ke end, secara simple, kemudian
      dereferencing indexs terakhir dirubah menjadi nilai c dimana c bernilai = *(x+begin)

   */
 
   reverse(x, ++begin, --end);
   /*

      fungsi memanggil dirinya sendiri secara terus menerus hingga nilai begin lebih dari
      atau sama dengan end
   
   */
}

/*

   fungsi reverse menerima pointer yang berisi alamat dari array of char, metode
   pemanggilan fungsi ini ialah call by reference, dimana digunakan pointer yang 
   nantinya setiap perubahan akan disimpan di dalam memori.
   
*/