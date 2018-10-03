# -*- coding: utf-8 -*-

import sys

def main():
    n = int(input())
    a = list(map(float, input().split()))
    b = list(map(float, input().split()))

    equal_sum = False
    sum_a_larger = False

    # your code

    if equal_sum:
        print('SUM(A)=SUM(B)')
    else:
        print('SUM(A)>SUM(B)' if sum_a_larger else 'SUM(A)<SUM(B)')


if __name__ == '__main__':
    main()
