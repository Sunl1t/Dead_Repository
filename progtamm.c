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
            case 4:
                int sum = (int)ch1 + (int)ch2;
                Console.WriteLine("����� ����� ASCII �������� " + ch1 + " � " + ch2 + " ����� " + sum);
                break;
            }
    }
}
