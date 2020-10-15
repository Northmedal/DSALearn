n = int(input())
for i in range(0, n):
    print(i ** 2)


def is_leap(year):
    #leap = False

    # Write your logic here
    if (year % 4 == 0 and (year % 100 != 0 or year % 400 == 0)):
        return True
    else:
        return False


year = int(input())
print(is_leap(year))

i = 5
for i in range(1,n+1):
    print(i, end='')

def is_vowel(letter):
    return letter in ['a', 'e', 'i', 'o', 'u', 'y']

def score_words(words):
    score = 0
    for word in words:
        num_vowels = 0
        for letter in word:
            if is_vowel(letter):
                num_vowels += 1
        if num_vowels % 2 == 0:
            score += 2
        else:
            score += 1
    return score


n = int(input())
words = input().split()
print(score_words(words))