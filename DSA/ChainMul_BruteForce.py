def MC(d: list, start: int, end: int):
    if end == start + 1:
        return 0
    min_cost = float('inf')
    for i in range(start + 1, end):
        cost = MC(d, start, i) + MC(d, i, end) + (d[start] * d[i] * d[end])
        min_cost = min(min_cost, cost)
    return min_cost

dimensions = [2, 3, 4, 5]
print(MC(dimensions, 0, len(dimensions) - 1))
