using System;

class Program
{
    static void Main()
    {
        switch (choice)
        {
        case 0:
            return; // ����� �� ���������
        case 1:
            Console.Write("������� ������ ������: ");
            ch1 = Console.ReadKey().KeyChar;
            Console.WriteLine();
            break;
        default:
            Console.WriteLine("������������ �����. ���������� �����.");
            break;
        }
    }
}
