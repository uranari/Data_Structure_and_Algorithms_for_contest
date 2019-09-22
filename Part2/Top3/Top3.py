
input = [25, 36, 4, 55, 71, 18, 0, 71, 89, 65]


def bubble_sort(list_data):
    while True:
        flag = 0
        for i in range(0, (len(list_data) - 1)):
            if i == (len(list_data) - 1):
                break

            if list_data[i+1] > list_data[i]:
                temp = list_data[i]
                list_data[i] = list_data[i+1]
                list_data[i+1] = temp
                flag = 1
        if flag == 0:
            break
    return list_data


if __name__ == "__main__":
    data = bubble_sort(input)
    print(data[0], data[1], data[2])
