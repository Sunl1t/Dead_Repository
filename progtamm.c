using System;

class Program
{
    static void Main()
    {
        switch (choice)
        {
        case 0:
            return; // выход из программы
        case 1:
            Console.Write("Введите первый символ: ");
            ch1 = Console.ReadKey().KeyChar;
            Console.WriteLine();
            break;
        default:
            Console.WriteLine("Некорректный выбор. Попробуйте снова.");
            break;
        }
    }
}
