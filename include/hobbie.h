#ifndef hobbie_h
#define hobbie_h

typedef struct hobbie Hobbie;

Hobbie * HobbieConstructor(char * name);

void SetHobbie(Hobbie * hobbie, char * hobbieName);

char * Gethobbie(Hobbie * hobbie);

void FreeHobbie(Hobbie * hobbie);

#endif
