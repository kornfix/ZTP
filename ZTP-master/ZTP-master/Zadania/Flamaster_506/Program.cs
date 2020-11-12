using System;
using System.Collections.Generic;
namespace Flamaster_506
{
    class Program
    {
        static void Main(string[] args)
        {
            int numberOfOperations = Convert.ToInt32(Console.ReadLine());

            if (numberOfOperations >= 1 && numberOfOperations <= 50)
            {
                for (int i = 0; i < numberOfOperations; i++)
                {
                    IDictionary<char, int> numChar = new Dictionary<char, int>();
                    string input = Console.ReadLine();

                    foreach (char c in input)
                    {
                        if (numChar.ContainsKey(c))
                        {
                            int counter = numChar[c];
                            numChar[c] = ++counter;
                        }
                        else
                        {
                            numChar.Add(c, 1);
                        }
                    }

                    string output = "";
                    foreach (KeyValuePair<char, int> kvp in numChar)
                    {
                        if (kvp.Value == 1)
                        {
                            output += $"{kvp.Key}";
                        }
                        else if (kvp.Value == 2)
                        {
                            output += $"{kvp.Key}{kvp.Key}";
                        }
                        else
                        {
                            output += $"{kvp.Key}{kvp.Value}";
                        }
                    }

                    Console.WriteLine(output);
                }
            }
        }
    }
}







//using System;

//namespace Flamaster_506
//{
//    class Program
//    {
//        static String replace(String input)
//        {
//            String output = "";

//            int i = 0;
//            int counter = 0;
//            while(i<input.Length)
//            {
//                counter = 1;
//                for(int j=i+1; j<=input.Length; j++)
//                {
//                    if(j<input.Length && input[i] == input[j])
//                    {
//                        counter++;
//                    }
//                    else
//                    {
//                        if(counter <= 2)
//                        {
//                            for(int x=i; x < i+counter; x++) { output += input[x]; }
//                        }
//                        else
//                        {
//                            output += input[i] + counter.ToString();
//                        }
//                        break;
//                    }
//                }
//                i += counter;
//            }
//            return output;
//        }
//        static void Main(string[] args)
//        {
//            Console.WriteLine("{0}", replace("AAAAAAAAAABBBBBBBBBBBBBBBB"));
//        }
//    }
//}
