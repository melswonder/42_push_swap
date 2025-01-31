#include <stdio.h>
#include <stdlib.h>

typedef struct s_stack
{
    int value;
    int number;
    struct s_stack *prev;
    struct s_stack *next;
} t_stack;

// リストの初期化
t_stack *create_circular_list()
{
    t_stack *dummy = malloc(sizeof(t_stack));
    dummy->next = dummy;
    dummy->prev = dummy;
    return dummy;
}

// ノードの追加
void insert_back(t_stack *dummy, int value, int number)
{
    t_stack *new_node = malloc(sizeof(t_stack));
    new_node->value = value;
    new_node->number = number;

    new_node->prev = dummy->prev;
    new_node->next = dummy;
    dummy->prev->next = new_node;
    dummy->prev = new_node;
}

// リストの表示
void print_list(t_stack *dummy)
{
    t_stack *current = dummy->next;
    printf("リストの内容: ");
    while (current != dummy)
    {
        printf("(%d, %d) ", current->value, current->number);
        current = current->next;
    }
    printf("\n");
}

// リストのメモリ解放
void free_list(t_stack *dummy)
{
    t_stack *current = dummy->next;
    while (current != dummy)
    {
        t_stack *temp = current;
        current = current->next;
        free(temp);
    }
    free(dummy);
}

int main(int argc, char *argv[])
{
    // // 引数の数をチェック
    // if (argc < 2)
    // {
    //     printf("使用法: %s <数値1> <数値2> ...\n", argv[0]);
    //     return 1;
    // }

    // リストの作成
    t_stack *list = create_circular_list();

    // コマンドライン引数をリストに追加
    for (int i = 1; i < argc; i++)
    {
        int value = atoi(argv[i]);
        insert_back(list, value, i);
    }

    // リストの表示
    print_list(list);

    // メモリの解放
    free_list(list);

    return 0;
}
