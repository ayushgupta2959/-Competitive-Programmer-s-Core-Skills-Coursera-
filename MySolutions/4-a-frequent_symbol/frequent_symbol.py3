# -*- coding: utf-8 -*-

import sys

def main():
    s = input()
    q = int(input())
    a = [list(map(int, input().split())) for _ in range(q)]

    result = []

    # your code

    print("\n".join(result))


if __name__ == '__main__':
    main()