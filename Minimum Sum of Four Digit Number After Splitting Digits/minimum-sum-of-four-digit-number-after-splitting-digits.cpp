class Solution {
public:
    int findLowest(int i, int *array) {
        int lowest=99, lowestPos;
        for (int j = i; j<4; j++) {
            if (array[j]<lowest) {
                lowest = array[j];
                lowestPos = j;
            }
        }
        return lowestPos;
    }

    void rearange(int lowestPos, int i, int *array) {
        int greenie;
        greenie = array[i];
        array[i] = array[lowestPos];
        array[lowestPos] = greenie;
    }

    int minimumSum(int num) {
        int lowestPos;
        int array[4] = {(num%10000)/1000, (num%1000)/100, (num%100)/10, num%10};

        for (int i=0; i<4; i++) {
            lowestPos = findLowest(i, array);
            rearange(lowestPos, i, array);
        }
        
        return (array[0]*10+array[2]) + (array[1]*10+array[3]);
    }

};