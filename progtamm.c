using System;

class Program
{
    static void Main()
    {
        char ch1 = ' '; // переменная для хранения первого символа
        char ch2 = ' '; // переменная для хранения второго символа


        Console.Write("Выберите пункт меню: ");
        int choice = Int32.Parse(Console.ReadLine());
        switch (choice)
        {
        case 0:
            return; // выход из программы
        case 2:
            Console.Write("Введите второй символ: ");
            ch2 = Console.ReadKey().KeyChar;
            Console.WriteLine();
            break;
        case 3:
            Console.WriteLine("Символ " + ch1 + " имеет код ASCII " + (int)ch1);
            Console.WriteLine("Символ " + ch2 + " имеет код ASCII " + (int)ch2);
            break;
        case 4:
            int sum = (int)ch1 + (int)ch2;
            Console.WriteLine("Сумма кодов ASCII символов " + ch1 + " и " + ch2 + " равна " + sum);
            break;
        default:
            Console.WriteLine("Некорректный выбор. Попробуйте снова.");
            break;
        }

    }
}
