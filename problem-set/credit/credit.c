#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get valid input credit card number
    //must be at least 13 characters
    long card_number = get_long("Card Number:");
    int sum = 0;

    //multiply every other digit by 2 starting with second to last digit

    while(card_number > 0)
    {
        sum = card_number % 10;
        card_number = card_number / 10;

        printf("%i\n", sum);
    }




    //add the digits in the products together
    //add the sum to the sum of the digits that werent multiplied by two
    //if the last digit of that number is 0 the card is valid
    //determine card starting nums and what it links to: amex: 34 or 37 mastercard: 51 52 53 54 55 visa: 4
    //return just amex, mastercard, visa or invalid


}