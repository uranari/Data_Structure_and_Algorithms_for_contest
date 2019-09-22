
input = [1, 2, '+', 3, 4, '-', '*']


def reverse_porland(list_data):
    stack = []
    for i in list_data:
        if type(i) == int:
            stack.append(i)
        else:
            a, b = stack.pop(), stack.pop()
            stack.append(eval(str(b) + str(i) + str(a)))

    return stack


if __name__ == "__main__":
    print(*reverse_porland(input))
