void test(int **pp)
{
    for (size_t i = 0; i < 10; i++)
    {
        for (size_t j = 0; j < 20; j++)
        {
            printf("%3d,",pp[i][j]);
        }
        puts("");
    }
}