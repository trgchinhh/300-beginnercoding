def count_occurrences(s1, s2):
    count = 0
    for i in range(len(s2) - len(s1) + 1):
        if s2[i:i+len(s1)] == s1:
            count += 1
    return count

def main():
    m = int(input())
    for _ in range(m):
        s1 = input()
        s2 = input()
        print(count_occurrences(s1, s2))

if __name__ == "__main__":
    main()
