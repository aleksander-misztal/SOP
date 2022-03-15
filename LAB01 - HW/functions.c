#include "algos.c"
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}




void userInputOption(){
    int arr_1[100],arr_2[100],counter =0;

    int num;

    printf("Kazda liczbe zatwierdz enter. (zakoncz dodawanie wybierajac 997)\n");


    for (int i = 0; i < 100; i++) {

        scanf("%d",&num);

        if(num==997){
            break;
        }
        else{
            arr_1[i] = num;
            arr_2[i] = num;
            counter++;
        }
    }

    printf("Bubble Sort\n");
    printArray(arr_1,counter);
    bubbleSort(arr_1, counter);

    printArray(arr_1,counter);

    printf("Quick Sort\n");
    printArray(arr_2,counter);
    quickSort(arr_2, 0,counter-1);

    printArray(arr_2,counter);
}
void randomOption(){
    int arr_size;
    printf("Podaj Rozmiar : ");
    scanf("%d", &arr_size);

    int* arr_1 = malloc(sizeof (int )* arr_size);
    int* arr_2 = malloc(sizeof (int )* arr_size);
    for (int i = 0; i < arr_size; i++) {
        arr_1[i] = rand()%100;
        arr_2[i] = rand()%100;
    }


    printf("Bubble Sort\n");
    printArray(arr_1,arr_size);
    bubbleSort(arr_1, arr_size);
    printArray(arr_1,arr_size);
    printf("Quick Sort\n");
    printArray(arr_2,arr_size);
    quickSort(arr_2, 0,arr_size-1);
    printArray(arr_2,arr_size);
}

void printMenu(){
    printf("Wybierz tryb\n");
    printf("1) Podaj liczby sam\n");
    printf("2) Podaj ilosc liczb do wygenerowania\n");
    printf("Twoj wybor : ");
}