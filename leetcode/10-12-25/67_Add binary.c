char* addBinary(char* a, char* b) {
    int a1 = strlen(a);
    int b1 = strlen(b);
  
    int i = a1 - 1;
    int j = b1 - 1;
    int k;

    int len = (a1 > b1 ? a1 : b1) + 1;
    char* res = (char*) malloc(len + 1);
    res[len] = '\0';

    k = len - 1;

    int carry = 0;

    while (i >= 0 || j >= 0 || carry) {
        int sum = carry;

        if (i >= 0) {
        	sum += a[i--] - '0';
		}
        if (j >= 0){
        	sum += b[j--] - '0';
		} 

        res[k--] = (sum % 2) + '0';
        carry = sum / 2;
    }

    return &res[k + 1];
}
