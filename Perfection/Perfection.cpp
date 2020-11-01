#include <iostream>

    int main()
    {
        int a = 0, sum = 0;
        do {
            std::cin >> a;
            if (a == 0) { break; };
            sum = 0;
            for (int i = 1; i <= sqrt(a);i++)
            {
                a% i == 0 ? sum += (i+a/i)  : sum += 0;
            }
            sum -= a;
			std::cout << a;
            std::cout << ((sum < a) ? " DEFICIENT\n" : (sum == a) ? " PERFECT\n" : " ABUNDANT\n");         
        } while (a != 0);
        return 0;
    }
