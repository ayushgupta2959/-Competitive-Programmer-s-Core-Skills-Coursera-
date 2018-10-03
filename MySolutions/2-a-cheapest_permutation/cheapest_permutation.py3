# -*- coding: utf-8 -*-

import sys

def main():
    n = int(input())
    a = [list(map(int, input().split())) for _ in range(n)]

    result = []

    # your code

    print(" ".join(map(str,result)))


if __name__ == '__main__':
    main()