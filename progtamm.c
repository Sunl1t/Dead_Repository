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
        default:
            Console.WriteLine("������������ �����. ���������� �����.");
            break;
        }
    }
}
