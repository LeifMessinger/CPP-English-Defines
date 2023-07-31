#ifndef ENGLISH_NUMBERS_H
#define ENGLISH_NUMBERS_H

//seven thousand five hundred and twenty three would be:
//(seven * thousand) + (five * hundred) + (twenty + three)

#define negative -
//I could do things like if(number is positive), but it's better to do if(number less than zero)
//So if someone learns how to code using this, god forbid, they can transition over to normal code easier
#define positive

#define zero 0
#define one	1
#define two	2
#define three	3
#define four	4
#define five	5
#define six	6
#define seven	7
#define eight	8
#define nine	9
#define ten	10
#define eleven	11
#define twelve	12
#define thirteen	13
#define fourteen	14
#define fifteen	15
#define sixteen	16
#define seventeen	17
#define eighteen	18
#define nineteen	19
#define twenty	20
#define thirty	30
#define fourty	40
#define fifty	50
#define sixty	60
#define seventy	70
#define eighty	80
#define ninety	90
#define hundred 100
#define thousand 1000
#define million (thousand * thousand)
#define billion (million * thousand)
#define trillion (billion * thousand)
#define quadrillion (trillion * thousand)
#define quintillion (quadrillion * thousand)
#define sextillion (quintillion * thousand)
#define septillion (sextillion * thousand)
#define octillion (septillion * thousand)
#define nonillion (octillion * thousand)
#define decillion (nonillion * thousand)
//Wolfram alpha confirmed
#define undecillion (quintillion * quintillion)
//After this, just do hundred * undecillion or million * billion * trillion or whatever
//A long long unsigned int (assuming it becomes 128 bit) is only around 340 * undecillion

#endif
