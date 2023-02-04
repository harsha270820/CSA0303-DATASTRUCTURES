#include<stdio.h> 
int findElement(int array[], int size, int keyToBeSearched) 
{ 
int i; 
for (i = 0; i < size; i++) 
if (array[i] == keyToBeSearched) 
return i; 
return - 1; 
}  
int main() 
{ 
int array[] = { 31, 27, 3, 54, 67, 31 };
int size = sizeof(array) / sizeof(array[0]); 
int keyToBeSearched = 67; 
int pos = findElement(array, size, keyToBeSearched); 
if(pos==-1){
printf("n Element %d not found", keyToBeSearched);
}
else{
printf("n Position of %d: %d", keyToBeSearched ,pos+1);
}
return 0; 
}