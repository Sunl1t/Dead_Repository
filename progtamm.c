using System;

class Program
{
    static void Main()
    {
        char ch1 = ' '; // ���������� ��� �������� ������� �������
        char ch2 = ' '; // ���������� ��� �������� ������� �������


        Console.Write("�������� ����� ����: ");
        int choice = Int32.Parse(Console.ReadLine());
        switch (choice)
        {
        case 0:
            return; // ����� �� ���������
        case 2:
            Console.Write("������� ������ ������: ");
            ch2 = Console.ReadKey().KeyChar;
            Console.WriteLine();
            break;
        case 3:
            Console.WriteLine("������ " + ch1 + " ����� ��� ASCII " + (int)ch1);
            Console.WriteLine("������ " + ch2 + " ����� ��� ASCII " + (int)ch2);
            break;
        case 4:
            int sum = (int)ch1 + (int)ch2;
            Console.WriteLine("����� ����� ASCII �������� " + ch1 + " � " + ch2 + " ����� " + sum);
            break;
        default:
            Console.WriteLine("������������ �����. ���������� �����.");
            break;
        }

    }
}
