#include <stdio.h>
int MyFunc(int counter) {
    // check this functions counter value from the stack (most recent push)

    // if counter is 1, we've reached the terminating condition, return it
    if(counter == 1) {
        return counter;
    }
    else {
        // terminating condition not reached, push (counter-1) onto stack and recurse
        int valueToPrint = MyFunc(counter - 1);

        // print out the value returned by the recursive call 
        printf("%d\n", valueToPrint);

        // return the value that was supplied to use 
        return counter;
    }
}

int main() {
    // Push 9 onto the stack, we don't care about the return value...
    MyFunc(9);
    // printf("\n");
}