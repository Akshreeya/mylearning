int largestAltitude(int* gain, int gainSize) {
    int curr = 0;
    int maxAlt = 0;

    for (int i = 0; i < gainSize; i++) {
        curr += gain[i];
        if (curr > maxAlt) {
            maxAlt = curr;
        }
    }

    return maxAlt;
}
