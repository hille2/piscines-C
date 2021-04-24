

#include <stdio.h>  // Для printf
#include <string.h> // Для strdup
#include <stdlib.h> // Для free

int main (void)
{
   // Исходная строка
   char str [11] = "0123456789";
   // Переменная, в которую будет помещен указатель на дубликат строки
   char *istr;

   // Дублирование строки
   istr = strdup (str);

   // Вывод дубликата на консоль
   printf ("dubl: %s\n", istr);

   // Очищаем память, выделенную под дубликат
   free (istr);

   return 0;
}
