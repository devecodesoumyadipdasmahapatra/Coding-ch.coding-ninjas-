#include <bits/stdc++.h>

vector<int> majorityElementII(vector<int> &arr)

{

vector<int> result;

int n = arr.size();

// Initialize candidate elements and their counts

int candidate1 = -1, candidate2 = -1;

int count1 = 0, count2 = 0;

// Find the candidates

for (int i = 0; i < n; i++) {

if (arr[i] == candidate1) {

count1++;

} else if (arr[i] == candidate2) {

count2++;

} else if (count1 == 0) {

candidate1 = arr[i];

count1 = 1;

} else if (count2 == 0) {

candidate2 = arr[i];

count2 = 1;

} else {

count1--;

count2--;

}

}

// Verify the candidates

count1 = count2 = 0;

for (int i = 0; i < n; i++) {

if (arr[i] == candidate1) {

count1++;

} else if (arr[i] == candidate2) {

count2++;

}

}

if (count1 > n/3) {

result.push_back(candidate1);

}

if (count2 > n/3) {

result.push_back(candidate2);

}

return result;

}
