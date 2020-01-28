
#include "Pet.h"

int main(int argc, char **argv)
{
  Pet *pet1 = new Pet("Spike", 4, "dog", 35.5);
  Pet *pet2 = new Pet("Spot", 11, "cat", 11.2);

  pet1 -> print();
  pet2 -> print();

  return -0;
}
