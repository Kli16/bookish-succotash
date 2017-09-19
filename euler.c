//Kevin Li
//Systems Work02
//9-18-17

//Find the sum of all the multiples of 3 or 5 below 1000.
int euler1(int a) {
  int num = a - 1;
  int sum = 0;
  while (num > 0){
    if ((num % 3 == 0) || (num % 5 == 0)){
      sum += num;
    }
    num--;
  }
  return sum;
}

//By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
int euler2(int max) {
  int a = 1;
  int b = 2;
  int c = a + b;
  int sum = 2;
  while (c < max){
    if (c % 2 == 0){
      sum += c;
    }
    a = b;
    b = c;
    c = a + b;
  }
  return sum;
}

//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
int euler3(int num){
  int retval = 1;
  int i = num;
  for (; i > 0; i--){
    if (retval % i != 0){
      retval = retval * i;
    }
  }
  return retval;
}

int main(){
  printf("Euler 1 is %d\nEuler 2 is %d\nEuler 3 is %d\n", euler1(1000), euler2(4000000), euler3(20));
  return 0;
}
