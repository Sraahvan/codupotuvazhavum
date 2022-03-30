// See https://aka.ms/new-console-template for more information


using System.Collections.Generic;

public class slidingWindow
{
    public static string MinWindow(string s, string t)
    {

         Dictionary<int, Char> dict = new Dictionary<int, Char >();


        for(int i = 0; i < s.Length; i++)
        {
            if(t.Contains(s[i]))
            {
                dict.Add(i, s[i]);
            }

        }
        int j = t.Length - 1;
        int k = 0;  
        while( j<= dict.Count)
        {
            if (t.Contains(dict[k]))
            {
                int r = k;
                while(r<=j)
                {
                   // dict[r];
                   
                    for(int i = 0; i < dict.Count; i++)
                    {

                    }

                }


            }
            else
            {
                k++;
                j++;
            }


        }



        return " ";
    }
    public static void Main(string[] args)
    {

        MinWindow(" ", " ");

    }

}