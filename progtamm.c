using System;

class Program
{
    static void Main(string[] args)
    {
        Console.Write("Введите первый символ: ");
        char ch1 = Console.ReadKey().KeyChar;
        Console.WriteLine();

        Console.Write("Введите второй символ: ");
        char ch2 = Console.ReadKey().KeyChar;
        Console.WriteLine();

        Console.WriteLine($"Код символа {ch1}: {(int)ch1}");
        Console.WriteLine($"Код символа {ch2}: {(int)ch2}");

        int sum = (int)ch1 + (int)ch2;
        Console.WriteLine($"Сумма кодов символов {ch1} и {ch2}: {sum}");
    }
}