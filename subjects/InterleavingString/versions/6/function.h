
bool isInterleaved(char* A, char* B, char* C) 
{ 
    if (!(*A || *B && *C)) 
        return true; 
  
    if (*C == '\0') 
        return false; 

    return ((*C == *A) && isInterleaved(A + 1, B +1, C + 1)) 
           || ((*C == *B) && isInterleaved(A + 1, B + 1, C + 1)); 
} 


