#include <iostream>
#include <string>
using namespace std;
bool checkPalindrom(string s)
{
    int n = s.length();
    for (int i = 0; i < n / 2; i++)
        if (s[i] != s[n - 1 - i])
            return false;
    return true;
}

// Main drive program
string PalindromSplit(string word)
{
    int n = word.length();

    // loop only up to the penultimate character
    // because last character will always be a palindrome
    for (int i = 1; i < n - 1; i++)
    {
        // step 1 : Split from left.
        string leftPart = word.substr(0, i);

        // If leftpart is palindrome then proceed
        if (checkPalindrom(leftPart))
        {
            // step 2 : Split from right.
            for (int j = i + 1; j < n; j++)
            {
                string midPart = word.substr(i, j - i);

                // If mid part is palindrome then proceed
                if (checkPalindrom(midPart))
                {
                    string rightPart = word.substr(j, n - j);

                    // If rightpart is palindrome then return result
                    if (checkPalindrom(rightPart))
                        return leftPart + ", " + midPart + ", " + rightPart;
                }
            }
        }
    }

    // if no 3 palindromic parts found then return Impossible
    return "Impossible";
}

int main()
{
    // input string
    string word = "aaaaaaaa";

    cout << PalindromSplit(word);

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// bool checkPalindrome(string s)
// {
//     int i = 0, j = s.length() - 1;
//     while (i <= j)
//     {
//         if (s[i] != s[j])
//             return false;
//         i++;
//         j--;
//     }
//     return true;
// }
// int main()
// {
//     string s = "ababbcb";
//     int n = s.length();
//     for (int i = 1; i < n - 1; i++)
//     {
//         string s1 = s.substr(0, i);
//         if (checkPalindrome(s1))
//         {
//             for (int j = i+1; j < n; j++)
//             {
//                 string s2 = s.substr(i, j-i);
//                 string s3 = s.substr(j, n-j);
//                 if (checkPalindrome(s2) && checkPalindrome(s3))
//                 {
//                     cout << s1 << endl;
//                     cout << s2 << endl;
//                     cout << s3 << endl;
//                     return;
//                 }
//             }
//         }
//     }
//     cout << "Not Possible";
//     return 0;
// }

