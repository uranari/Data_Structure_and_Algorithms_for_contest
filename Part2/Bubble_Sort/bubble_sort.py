
input = [5, 3, 2, 4, 1]


def bubble_sort(list_data):
    flag = 1
    count = 0
    while flag:
        flag = 0
        for i in range(0, (len(list_data))):
            if i == 0:
                continue
            if list_data[i] < list_data[i - 1]:
                tmp = list_data[i]
                list_data[i] = list_data[i - 1]
                list_data[i - 1] = tmp
                count += 1
                flag = 1
    return count, list_data


if __name__ == "__main__":
    count, data = bubble_sort(input)
    print(*data)
    print(count)
