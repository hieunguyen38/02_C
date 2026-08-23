/*
3. Check if K-th Bit is Set
Write a C program to check if the K-th bit (0-based index) of an integer N is set (1) or not (0).

Input Format

Two integers N and K.
Output Format

Print 1 if the K-th bit of Integer N is set (1), otherwise print 0.


Example

Input N= 8 &  K= 3

Here Binary value of 8 is 00001000

So output will be 1

// Solution: Step1 and n with bitK (& thì sẽ ra kết quả 1/0), nếu khác 0 thì sẽ trc :, nếu = 0 thì sau :
#include <stdio.h>
int isKthBitSet(int n, int k) {
   return (n & (1 << k)) ? 1 : 0;
}
int main() {
   int n, k;
   scanf("%d %d", &n, &k);
   printf("%d", isKthBitSet(n, k));
   return 0;
}
*/

// My code
#include <stdio.h>

int isKthBitSet(int n, int k)
{
    // Write your code here
    int bitCheck;
    int result;
    bitCheck = (n >> k) & 1;
    if (bitCheck == 1)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }
    return result;
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", isKthBitSet(n, k));
    return 0;
}