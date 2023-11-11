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
        
        default:
            Console.WriteLine("Некорректный выбор. Попробуйте снова.");
            break;

        }
    }
}
