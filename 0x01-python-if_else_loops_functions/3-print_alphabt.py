#!/usr/bin/python3
for letter in range(ord('a'), ord('b') + 1):
    if chr(letter) != 'q' and chr(letter) != 'e':
        print("()".format(chr(letter)), end='')
