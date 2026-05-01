def trim_string(s):
    return s.strip()

def main():
    n = int(input())
    result = []
    for _ in range(n):
        line = input()
        result.append(trim_string(line))
    
    print(' '.join(result))

if __name__ == "__main__":
    main()
