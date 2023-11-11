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
            case 4:
                int sum = (int)ch1 + (int)ch2;
                Console.WriteLine("Сумма кодов ASCII символов " + ch1 + " и " + ch2 + " равна " + sum);
                break;
            }
    }
}
