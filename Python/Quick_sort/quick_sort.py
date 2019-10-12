import sys
input = sys.stdin.readline
def quickSrot(left, right, arr):
    pivot = left
    j = pivot

    if left < right :
        for i in range(left + 1, right + 1):
            if arr[i] < arr[pivot]:
                j += 1
                arr[i], arr[j] = arr[j], arr[i]
            i+=1
        arr[pivot], arr[j] = arr[j], arr[pivot]
        pivot = j
        quickSrot(left, pivot - 1, arr)
        quickSrot(pivot + 1, right, arr)

if __name__ == "__main__":
    n = int(input())
    arr = [0]*n
    for i in range(n):
        arr[i] = int(input())

    quickSrot(0,len(arr) - 1, arr)
    for i in arr:
        print(i)