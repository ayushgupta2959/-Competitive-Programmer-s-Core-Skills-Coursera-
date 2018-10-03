# -*- coding: utf-8 -*-

import sys

def main():
    n, W = map(int, input().split())
    items = [list(map(int, input().split())) for _ in range(n)]

    result = []

    # your code

    print(len(result))
    print(" ".join(map(str, result)))


if __name__ == '__main__':
    main()
