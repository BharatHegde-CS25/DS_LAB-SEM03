#include <stdio.h>

#define MAX 20

int hashTable[MAX];
int m;

/* Function to insert key using Linear Probing */
void insert(int key)
{
    int index = key % m;

    if (hashTable[index] == -1)
    {
        hashTable[index] = key;
    }
    else
    {
        int i = 1;
        while (hashTable[(index + i) % m] != -1)
        {
            i++;
        }
        hashTable[(index + i) % m] = key;
    }
}

int main()
{
    int n, key;

    printf("Enter size of hash table: ");
    scanf("%d", &m);

    // Initialize hash table
    for (int i = 0; i < m; i++)
    {
        hashTable[i] = -1;
    }

    printf("Enter number of keys: ");
    scanf("%d", &n);

    printf("Enter the keys:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &key);
        insert(key);
    }

    printf("\nHash Table:\n");
    for (int i = 0; i < m; i++)
    {
        if (hashTable[i] == -1)
            printf("%d : EMPTY\n", i);
        else
            printf("%d : %d\n", i, hashTable[i]);
    }

    return 0;
}
