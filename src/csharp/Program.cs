using System;

namespace csharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Int32[] numbers = new Int32[]{ 1, 2, 3, 4, 5, -1, -2, -3, -4, -5 };
            Int32 Positives = 0,
                Negatives = 0,
                Zeros = 0;

            foreach (Int32 number in numbers)
            {
                if(number > 0)
                    Positives++;
                else if(number < 0)
                    Negatives++;
                else
                    Zeros++;
            }

            Console.WriteLine($"Positives: {Positives} -> { (decimal)Positives/numbers.Length }");
            Console.WriteLine($"Negatives: {Negatives} -> { (decimal)Negatives/numbers.Length }");
            Console.WriteLine($"Zeros: {Zeros} -> { (decimal)Zeros/numbers.Length }");
        }
    }
}
