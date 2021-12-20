int main()
{
        int integer = 251152; //Введенное число
        int A1; //Переменная первой цифры
        int A2; //второй
        int A3; //третьей
        int A4; //четвертой
        int A5; //пятой
        int A6; //шестой
        int sum1; //Сумма первых трех цифр числа
        int sum2; //Сумма последних трех цифр числа
        int result = 0;
        //Разбивание числа на отдельные цифры
        A1 = (integer - (integer % 100000)) / 100000; //Сотни тысяч
        A2 = ((integer - (integer % 10000)) - (integer - (integer % 100000))) / 10000; //Десятки тысяч
        A3 = ((integer - (integer % 1000)) - (integer - (integer % 10000))) / 1000; //Тысячи
        A4 = ((integer - (integer % 100)) - (integer - (integer % 1000))) / 100; //Сотни
        A5 = ((integer - (integer % 10)) - (integer - (integer % 100))) / 10; //Десятки
        A6 = integer % 10; //Единицы
        //Определеям является ли данный билет счастливым
        sum1 = A1 + A2 + A3;
        sum2 = A4 + A5 + A6;
        if (sum1 == sum2) {
                result = 1;
        } else {
                result = 0;
        }
        return 0;
} 
