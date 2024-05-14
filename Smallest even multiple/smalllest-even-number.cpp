class Solution {
public:
  int smallestEvenNumber (int n) {
    int minimal = 999;
    for (int i = n; i<n*3; i++) {
      if ((i%2==0) && (i%n==2) && (i<minimal)) {
        minimal = i;
      }
      if ((i%2==0) && (i%n==2) && (i>minimal)) {
        break;
      }
    }
    return minimal;
  }
}