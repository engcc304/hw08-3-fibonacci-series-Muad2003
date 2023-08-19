/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ที่มีตัวเลข 2 ลำดับก่อนหน้าบวกกัน (อนุกรมฟีโบนัชชี)
    
    Test case:
        8
    Output:
        Series = 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21
        Sum = 54

*/

#include<stdio.h>

int main() {
    
    int input ;
    int num1 = 1 ;
    int num2 = 0 ;
    int sum = 0 ;
    printf ( "Test case:\n" ) ;
    scanf ( "%d", &input ) ;
    printf ( "Series =" ) ;

    for ( int i = 0 ; i < input ; i++ ) {
        if ( i > 0 ) {
            printf ( " +" ) ;
        }
        
        int next = num1 + num2 ;
        printf ( " %d",next ) ;
        num1 = num2 ;
        num2 = next ;
        sum += next ;
    }
    printf ( "\nSum = %d", sum ) ;
    return 0;
}