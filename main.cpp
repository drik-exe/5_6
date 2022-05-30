//Условие:
//Пользователь вводит натуральное число. Определите сумму цифр введенного числа.
//В какую минимальную степень необходимо возвести число 5, чтобы полученное значение превзошло введенное число
//
//3. Самостоятельная работа.
//Индивидуальное задание:
//Пользователь вводит два натуральных двузначных числа. Определите количество четных чисел, лежащих между ними
//(включая сами введенные числа) (+2). Определите, сколько натуральных, последовательно расположенных чисел
//(начиная с 1) нужно сложить, чтобы их сумма превзошла большее из введенных чисел. (+2).
//Найдите количество цифр в первом числе (+2).
//Замените в большем числе последнюю цифру на 0 (вместо 45 40)(+2). Определите сумму делителей первого числа (+2)


#include <iostream>
#include <cmath>

using namespace std;

int main() {
    setlocale(0, "");
    int num, degree = 1;
    int sum = 0;
    cout << "Введите число: ";
    cin >> num;
    int a1 = num;
    while(a1 > 0){
        sum+= a1%10;
        a1/=10;
    }
    cout << endl << "суммa цифр введенного числа = " << sum << endl;
    while(pow(5, degree) <= num){
        degree++;
    }
    cout << "Минимальная степень числа 5, чтобы она превзошла введённое число = " << degree << endl;

////////////////////////////////////////////////////////

    int first_num, second_num;
    int count_even = 1;
    int count_num = 0;
    int sum_num = 0;
    int count_del = 0;
    int count_in_first = 0;
    cout << "Введите два натуральных двузначных числа: ";
    cin >> first_num >> second_num;
    int cop_first_num = first_num;
    while(cop_first_num > 0){
        cop_first_num/=10;
        count_in_first++;
    }
    for (int i = 0; i <= first_num; ++i) {
        if (first_num % i == 0){
            count_del += i;
        }
    }
    if(first_num>second_num){
        for (int i = second_num; i <= first_num; ++i) {
            if(i%2 == 0){
                count_even++;
            }
        }
        for(int i = 1; first_num > sum_num; ++i){
            sum_num+=i;
            count_num++;
        }
        cout << "Заменa в большем числе последнюю цифру на 0 = " << first_num/10 * 10 << endl;
    } else{
        for (int i = first_num; i <= second_num; ++i) {
            if(i%2 == 0){
                count_even++;
            }
        }
        for(int i = 1; second_num > sum_num; ++i){
            sum_num+=i;
            count_num++;
        }
        cout << "Заменa в большем числе последнюю цифру на 0 = " << second_num/10 * 10 << endl;
    }

    cout << "количество четных чисел = " << count_even << endl;
    cout << "натуральных, последовательно расположенных чисел\n"
            "(начиная с 1) нужно сложить, чтобы их сумма превзошла большее из введенных чисел = " << count_num << endl;
    cout << "количество цифр в первом числе = " << count_in_first << endl;

    cout << "суммa делителей первого числа = " << count_del << endl;

    return 0;
}
