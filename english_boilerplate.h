#ifndef ENGLISH_BOILERPLATE_H
#define ENGLISH_BOILERPLATE_H

//As a good rule of thumb, we shouldn't use our own scheme.
//We could do #define start integer main(), and it works, but it requires english_flavor.h. People who want to include the boilerplate might not want the flavor words.
#define start int main()

#endif
