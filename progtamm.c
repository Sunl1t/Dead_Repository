using System;

class Program
{
    static void Main(string[] args)
    {
        Console.Write("������� ������ ������: ");
        char ch1 = Console.ReadKey().KeyChar;
        Console.WriteLine();

        Console.Write("������� ������ ������: ");
        char ch2 = Console.ReadKey().KeyChar;
        Console.WriteLine();

        Console.WriteLine($"��� ������� {ch1}: {(int)ch1}");
        Console.WriteLine($"��� ������� {ch2}: {(int)ch2}");

        int sum = (int)ch1 + (int)ch2;
        Console.WriteLine($"����� ����� �������� {ch1} � {ch2}: {sum}");
    }
}