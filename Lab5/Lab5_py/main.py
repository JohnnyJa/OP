import random
import time
from _ArithmeticProgression import ArithmeticProgression
from _GeometricProgression import GeometricProgression


def main():
    random.seed(time.time())

    n = int(input("Enter 'n', (number of series):"))
    m = int(input("Enter 'm', (sum index of series):"))
    print()

    geometric_series = GeometricProgression()
    arithmetic_series = ArithmeticProgression()

    max = -1
    max_i = None
    max_sum = None

    for index in range(n):
        first_member = random.randint(1, 10)
        step = random.randint(2, 10)

        if(index % 2 == 0):
            geometric_series.set_first(first_member)
            geometric_series.set_parameter(step)

            print(f"{index + 1}th series first member of geometric series is:  {first_member}  and step is: {step}")
            print(f" Nth member is: {geometric_series.calculate_n(n)} and Mth sum is: {geometric_series.calculate_sum(m)}\n")

            if(max < geometric_series.calculate_n(n)):
                max = geometric_series.calculate_n(n)
                max_i = index
                max_sum = geometric_series.calculate_sum(m)

        else:
            print(f"{index + 1}th series first member of arithmetic series is:  {first_member}  and step is: {step}")
            print(f"Nth member is: {arithmetic_series.calculate_n(n)} and Mth sum is: {arithmetic_series.calculate_sum(m)}\n")

            arithmetic_series.set_first(first_member)
            arithmetic_series.set_parameter(step)
            if(max < arithmetic_series.calculate_n(n)):
                max = arithmetic_series.calculate_n(n)
                max_i = index
                max_sum = arithmetic_series.calculate_sum(m)

    print(f"\nMaximal n-member is: {max}  in {max_i}th series with sum of first m members is: {max_sum}\n\n")


if __name__ == "__main__":
    main()
