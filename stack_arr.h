#if !defined(stack_arr)
#define stack_arr
typedef stack *int;
struct s {
    int boyut;
    int tepe;
    int * dizi;
};
typedef stack *s;
int pop();
void push(int);
void bastir();

#endif // MACRO
