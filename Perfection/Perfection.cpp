#include <iostream>

    int main()
    {
        int a = 0, sum = 0;
        do {
            std::cin >> a;
            if (a == 0) { break; }; //probably not the best solution for the problem, that it writes perfect for 0 in the end
            sum = 0;
            for (int i = 1; i <= sqrt(a);i++)
            {
                a% i == 0 ? sum += (i+a/i)  : sum += 0;
            }
            sum -= a;
            std::cout << sum < a ? a+" DEFICIENT\n" : sum == a ? a+" PERFECT\n" : a+" ABUNDANT\n";         
        } while (a != 0);
        return 0;
    }
    //pukk
    //puk2
