#최선 : O(n^2), 평균 : O(n^2), 최악 : O(n^2)
def select_sort(arr,length):
    for i in range(length - 1, -1, -1):
        m = 0
        for j in range(1, i + 1):
            if arr[j] > arr[m] :
                m  = j
        arr[m], arr[i] = arr[i], arr[m]

#최선 : O(n), 평균 : O(n^2), 최악 : O(n^2)
def insert_sort(arr, length):
    for i in range(1, length):
        key = arr[i]
        index = i
        while index > 0 and arr[index-1] > key:
            arr[index] = arr[index-1]
            index -= 1
        arr[index] = key

#최선 : O(n^2), 평균 : O(n^2), 최악 : O(n^2)
def bubble_sort(arr, length):
    for i in range(length - 1):
        for j in range(length - i - 1):
            if arr[j] > arr[j+1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

#최선 : O(nlogn), 평균 : O(nlogn), 최악 : O(n^2)( 이미 정렬 된 경우 )
def quickSrot(left, right, arr):
    pivot = left
    j = pivot

    if left < right :
        for i in range(left + 1, right + 1):
            if arr[i] < arr[pivot]:
                j += 1
                arr[i], arr[j] = arr[j], arr[i]
        arr[pivot], arr[j] = arr[j], arr[pivot]
        pivot = j
        quickSrot(left, pivot - 1, arr)
        quickSrot(pivot + 1, right, arr)

if __name__ == "__main__":
    arr = [4,3,6,9,8,6,1,5,2]
    select_sort(arr,len(arr))
    print(arr)
    arr = [4,3,6,9,8,6,1,5,2]
    insert_sort(arr,len(arr))
    print(arr)
    arr = [4,3,6,9,8,6,1,5,2]
    bubble_sort(arr,len(arr))
    print(arr)
    arr = [4,3,6,9,8,6,1,5,2]
    quickSrot(0, len(arr)-1, arr)
    print(arr)