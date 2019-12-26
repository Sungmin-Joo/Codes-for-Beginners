package project;

import java.util.Arrays;

public class Main {
    public static void main(String[] args) {
        int size = 10;
        //int [] arr = new int[size];
        int [] arr = new int[] {3, 5, 7, 1, 2, 4, 6, 9, 0, 8};

        for(int i = 0; i < size; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        //버블정렬 알고리즘 구현
        for(int i = 0; i < size - 1; i++){
            for(int j = i + 1; j < size; j++){
                if(arr[i] > arr[j]){
                    int temp = arr[j];
                    arr[j] = arr[i];
                    arr[i] = temp;
                }
            }
        }

        for(int i = 0; i < size; i++){
            System.out.print(arr[i] + " ");
        }
        System.out.println();

        //Array.sort 메소드 사용법
        int[] arr2 = {3, 5, 7, 1, 2, 4, 6, 9, 0, 8};

        Arrays.sort(arr2);
        for(int i = 0; i < size; i++){
            System.out.print(arr2[i] + " ");
        }
        System.out.println();

    }
}
