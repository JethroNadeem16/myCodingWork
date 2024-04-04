#include <stdio.h>

char z;

struct rect_prism{
    float length;
    float width;
    float height;
};

struct rect_prism ask_info(){
    struct rect_prism r;
    printf("What is the length of the rectangular prism? ");
    scanf("%f%c", &r.length, &z);
    printf("What is the width of the rectangular prism? ");
    scanf("%f%c", &r.width, &z);
    printf("What is the height of the rectangular prism? ");
    scanf("%f%c", &r.height, &z);
    printf("\n");
    printf("The dimensions of this rectangular prism is:\n");
    printf("- Length: %.2f\n", r.length);
    printf("- Width: %.2f\n", r.width);
    printf("- Height: %.2f\n", r.height);

    return r;
}

void Volume(struct rect_prism R){
    float volume;
    volume = R.length * R.width * R.height;
    printf("Volume = %.2f", volume);
    printf("\n");
    return;
}

int main(){
    struct rect_prism rectangle = ask_info();
    printf("\n");
    Volume(rectangle);


    return 0;
}
