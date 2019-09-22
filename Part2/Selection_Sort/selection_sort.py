
input = [5, 6, 4, 2, 1, 3]


def selection_sort(list_data):
    count = 0
    for i in range(0, (len(list_data) - 1)):
        position = i
        minimum = list_data[i]
        for j in range(i, (len(list_data))):
            if j == i:
                continue
            if list_data[j] < minimum:
                minimum = list_data[j]
                position = j
        if position == i:
            continue
        tmp = list_data[i]
        list_data[i] = minimum
        list_data[position] = tmp
        count += 1
    return count, list_data


if __name__ == "__main__":
    count, data = selection_sort(input)
    print(count)
    print(*data)
