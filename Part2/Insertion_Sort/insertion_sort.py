
input = [5, 2, 4, 6, 1, 3]


def insertion_sort(list_data):
    for i in range(0, (len(list_data))):
        v = list_data[i]
        j = i - 1
        while j >= 0 and list_data[j] > v:
            list_data[j + 1] = list_data[j]
            j -= 1
        list_data[j + 1] = v
        print(*list_data)


if __name__ == "__main__":
    insertion_sort(input)
