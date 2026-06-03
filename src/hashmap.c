// hashmap.c

int hashFunction(int key)
{
    return key % TABLE_SIZE;
}

void insertHash(Student* student)
{
    ...
}

Student* searchHash(int id)
{
    ...
}
