def print_uppercase_letters(s):
    result = ''.join([ch for ch in s if ch.isupper()])
    print(result if result else '-')

def main():
    n = int(input())
    for _ in range(n):
        line = input()
        print_uppercase_letters(line)

if __name__ == "__main__":
    main()
