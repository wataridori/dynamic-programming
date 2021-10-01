# Initialising a dictionary to store values of subproblems
memo_dict = {}


def fibonacci(n):
    # If answer to the nth fibonacci term is already present in the dictionary, return the answer
    if(n in memo_dict):
        return(memo_dict[n])
    if n <= 2:
        return (1)
    else:
        # Store the answer to the nth fibonacci term to the dictionary for further use
        memo_dict[n] = (fibonacci(n-1)+fibonacci(n-2))
        return(memo_dict[n])


if __name__ == '__main__':
    n = int(input())
    print(fibonacci(n))
