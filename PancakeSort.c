# define N 10// Define the value of N
int array[N] = {5, -1, 101, -4, 0, 1, 8, 6, 2, 3};

void do_flip(int *list, int length, int num);

void pancake_sort(int *list, int length){
    if(length<2)
        return;
    int i,a,max_num_pos;
    for(i=length;i>1;i--){
        max_num_pos=0;
        for(a=0;a<i;a++){
            if(list[a]>list[max_num_pos])
                max_num_pos=a;
        }
        if(max_num_pos==i-1)
            continue; 
        if(max_num_pos){
            do_flip(list, length, max_num_pos+1);
        }
        do_flip(list, length, i);
    }
}
void do_flip(int *list, int length, int num){
    int swap;
    int i=0;
    for(i;i<--num;i++)
    {
        swap=list[i];
        list[i]=list[num];
        list[num]=swap;
    }
}
int main(){
    pancake_sort(array, N);
}
