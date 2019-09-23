
input = [{"p1": 150}, {"p2": 80}, {"p3": 200}, {"p4": 350}, {"p5": 20}]
quantumtime = 100


def round_robin_scheduling(queue, quantum):
    time = 0
    while queue:
        for i in queue:
            dic = queue.pop(0)
            key, value = dic.popitem()
            if value <= quantum:
                time += value
                print(key, time)
            else:
                time += quantum
                dic[key] = value - quantum
                queue.append(dic)


if __name__ == "__main__":
    round_robin_scheduling(input, quantumtime)
