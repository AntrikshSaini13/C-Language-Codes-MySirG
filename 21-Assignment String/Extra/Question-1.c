// print the string Length

# include <Stdio.h>
void main(){
    char str[10] = {'B','h','o','p','a','l'};
    int i;
    for(i=0;str[i];i++);

    printf("Length of String is : %d",i);
}

// output
// Length of String is : 6