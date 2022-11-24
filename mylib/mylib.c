long long int iterative(int N){
    long long int temp1 = 1, temp2 = 1;
    if(N == 0){
        return 0;
    }
    else if(N < 0){
        return -1;
    }
    for(int i = 2; i < N; i++){
        long long int temp3 = temp2 + temp1;
        temp1 = temp2;
        temp2 = temp3;
    }
    return temp2;
}

long long int recursive(int N){
    if(N == 0){
        return 0;
    }
    else if(N < 0){
        return -1;
    }
    else if(N < 3){
        return 1;
    }
    else{
        return recursive(N - 1) + recursive(N - 2);
    }
}