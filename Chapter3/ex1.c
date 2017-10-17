/* binsearch: find x in v[0] <= v[1] <= ...<= v[n- 1]*/
/* remake the following function with only one comparison within the loop
 * 
 * int binsearch(int x, int v[], int n)
 * {
 *  int low, high, mid;
 *  low = 0;
 *  high = n - 1;
 *  while (low <= high)
 *  {
 *    mid = (low + high) / 2;
 *    if (x < v[mid])
 *    {
 *      high = mid - 1;
 *    }
 *    else if (x > v[mid])
 *    {
 *      low = mid + 1;
 *    }
 *    else
 *    {
 *      return mid;
 *    }
 *  }
 *  return -1; // no match 
 * }
 */

int binarySearch(int x, int v[], int n)
{
  int low = 0;
  int high = n - 1;
  int mid;
}

int compare(int x, int current) // x is the desired value from the binary search function, current is the mid
{
  if (x < current
}
