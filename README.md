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
   
  ```sh
      gcc -c main_b_time_iterative.c -o main.o
  ```   
or
   
  ```sh
      gcc -c main_b_time_recursive.c -o main.o
  ```
or
   
  ```sh
      gcc -c main_b_space_iterative.c -o main.o
  ```
or
   
  ```sh
      gcc -c main_b_space_recursive.c.c -o main.o
  ```

note: To benchmark the memory space taken, open task manager (windows) or system monitor (linux) after running the main.out file. Don't forget to terminate the program by pressing ctrl + c in the command line or just end task the program in task manager.


3. Finally, to compile the code to get the main.out (for linux), run:
  ```sh
       gcc -o main.out main.o mylib.o
  ```

   For windows, skip all the above steps and just run 
    ```
      run.bat
    ```
   after changing main_test in line 2 to the file you want to compile

# Documentation
Time comparison:

Iterative
![time-iterative](https://user-images.githubusercontent.com/114073455/204568043-013bf339-4843-41b4-a698-9b0368c9d4e1.png)

Recursive
![time-recursive](https://user-images.githubusercontent.com/114073455/204568169-c620f177-2b76-4d6d-a2fc-3c7608e41a03.png)


As shown in the two pictures, the iterative function takes much less time than the recursive function


Space comparison:

Iterative

![space-iterative](https://user-images.githubusercontent.com/114073455/204568225-07ccd588-cac4-4539-98c0-b3972c923db3.png)


Recursive
![space-recursive](https://user-images.githubusercontent.com/114073455/204568279-3ab58f53-d93c-4e3e-ac2f-5c8e539f9388.png)


As shown in the two pictures, the iterative function takes much less memory than the recursive function


In conclusion, there really isn't a reason to use the recursive function (at least not the one I made).

