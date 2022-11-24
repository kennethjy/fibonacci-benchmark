# fibonacci-benchmark

1. To compile the library, run:
  ```sh
    gcc -c mylib/mylib.c -o mylib.o
  ```
 
2. After that, to compile the main test code, run:
  ```sh
    gcc -c main_test.c -o main.o
  ```
  
   Alternatively, to compile the benchmark files, run:
    ```
      gcc -c main_b_time_iterative.c -o main.o
    ```   
   or
   
    ```
      gcc -c main_b_time_recursive.c -o main.o
    ```
   or
   
    ```
      gcc -c main_b_space_iterative.c -o main.o
    ```
   or
   
    ```
      gcc -c main_b_space_recursive.c.c -o main.o
    ```

3. Finally, to compile the code to get the main.out (for linux), run:
     ```sh
       gcc -o main.out main.o mylib.o
     ```

   For windows, get the main.exe file by running:
     ```sh
       gcc -o main.exe main.o mylib.o
     ```
