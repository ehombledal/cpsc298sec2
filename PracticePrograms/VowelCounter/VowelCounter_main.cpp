#include "VowelCounter.h" //always include header file

int main(int argc, char **argv)
{
  VowelCounter vowels; //THIS DECLARATION PUTS THE CLASS ON THE STACK. UTIL CLASSES GO ON STACK
    cout << vowels.countVowels("Erik") << endl;

  VowelCounter *vowels2 = new VowelCounter(); //THIS DECLARATION PUTS IT ON THE HEAP. FULL CLASSES AND OBJECTS GO ON HEAP
    cout << vowels2->countVowels("Erik") << endl;
    delete vowels2; // HAVE THE DELETE MEMORY AFTER YOURE DONE WITH IT

  return 0;
}
