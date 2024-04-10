#include <iostream>
#include <cstdlib>

//bu bildirimler hem C hem C++ dilinde geçerlidir.
enum Color {Blue, Red, Yellow};
enum Fruit { Apple, Melon, Mango};

//dönüş değeri belirtilmemişse C'de int kabul edilir ama C++’da hata verir.
foo(int, int);

//bu bildirim hem C hem C++ dilinde geçerlidir.
int func(); //bu ifade C++'da parametre değişkeni yok demektir ama C'de bu fonskiyona ne kadar argüman gönderilirse gönderilsin kabul edilir.

//old-style function definition
double sum(a, b)
double a, b; //C'de geçerlidir. C++'da bu bildirim geçerli değildir. her birinin türü belirtilmelidir.
{
  return a + b;
}

int f(int x, int) //C'de geçerli değildir, değişkenlerin isimlerini yazmak zorunludur. C++'da ise geçer bir ifadedir.
{
  return x * x;
}

int g1 = func(); //C'de geçerli değildir, statik ömürlü nesnelere init eden ifadeler constant expression olmalıdır. C++'da ise geçerlidir.
const int g2; //C'de geçerlidir ama yanlış çünkü çöp değer üreticek. C++'da ise geçerli değildir, aritmetik türden değişkenlerin init edilmesi zorunludur.

int main(){

  const int ci1; //C'de geçerlidir ama yanlış çünkü çöp değer üreticek. C++'da ise geçerli değildir, aritmetik türden değişkenlerin init edilmesi zorunludur.
  const int ci2 = func(); //bu bildirim hem C hem C++ dilinde geçerlidir. otomatik ömürlü const nesnelere constant expression ile init etme zorunlu değildir.
  const c3 = 123; //C'de geçerlidir ama C++'da ise geçerli değildir.

  char *p1 = "necati"; //C'de geçerlidir ama C++'da ise geçerli değildir.???????
  int i1 = 12.5; //bu bildirim hem C hem C++ dilinde geçerlidir. ama veri kaybı olur.
  int i2 = Red; //bu bildirim hem C hem C++ dilinde geçerlidir. ikisinde de enum'dan int'e dönüşüm vardır.

  enum Color color1 = 2; //C'de geçerli ama C++'da geçerli değildir. C++'da int'ten enum'a dönüşüm yoktur.
  enum Color color2 = 19; //C'de geçerli ama C++'da geçerli değildir. C++'da int'ten enum'a dönüşüm yoktur.
  enum Color color3 = Mango; //C'de geçerli ama C++'da geçerli değildir. C++'da enum_x'ten enum_y'e dönüşüm yoktur.

  char str[3] = "ali"; //C'de geçerli ama C++'da geçerli değildir. C++'da char dizileri null terminated olmalıdır o yüzden 4 elemanlı bir öğe bu.

  enum Color color = Red; //bu bildirim hem C hem C++ dilinde geçerlidir.
  ++color; //C'de geçerli ama C++'da geçerli değildir. C'de enum türleri int gibi kontrole tabi tutuluyor ama C++'da enumlar ++ operatörlerinin operandı olamazlar doğrudan.
  Fruit f = Mango; //C++'da geçerli ama C'de geçerli değildir. C'de enum tag'i yazılmalıdır.

  const int cx = 10; //bu bildirim hem C hem C++ dilinde geçerlidir.
  int ival = 56; //bu bildirim hem C hem C++ dilinde geçerlidir.
  func(ival); //C'de geçerli ama C++'da geçerli değildir.

  int *ptr = &cx; //C'de geçerli ama C++'da geçerli değildir. C++'da const *T'den T*'e dönüşüm yoktur.
  char *cptr = &ival; //C'de geçerli ama C++'da geçerli değildir.
  const int *p2 = &ival; //bu bildirim hem C hem C++ dilinde geçerlidir.
  int *p3 = malloc(10 * sizeof(int)); //C'de ise geçerlidir ama  C++'da geçerli değildir, malloc'un dönüş değeri void* olduğu için, C++'da void*'ten int*'a dönüşüm yoktur.
  int *p4 = 0; //bu bildirim hem C hem C++ dilinde geçerlidir. nullptr'ye dönüştürülecek.
  int *p5 = NULL; //bu bildirim hem C hem C++ dilinde geçerlidir.

  return 0;
}
