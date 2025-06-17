void printDouble(int n) {
  int i =1;
  while(i<=n) { // do phuc tap cua n la : O(n)
  // neu i >= n thi do phuc tap cua i la O(n)
  printf("%d",i); // do phuc tap cua printf la O(1)
  i *= 2; // do phuc tap cua i khi i < n la: O(log n)
}
}