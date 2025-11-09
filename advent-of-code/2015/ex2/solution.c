#include <stdio.h>
#include <stdlib.h>

int min_of_three(int a, int b, int c) {
    int min = a;
    if (b < min) min = b;
    if (c < min) min = c;
    return min;
}

int calculate_paper(int l, int w, int h) {
    int side1 = l * w;
    int side2 = w * h;
    int side3 = h * l;
    int surface_area = 2 * (side1 + side2 + side3);
    int slack = min_of_three(side1, side2, side3);
    return surface_area + slack;
}

static int calculate_ribbon(int l, int w, int h) {
    int a = l, b = w, c = h;
    if (a > b) { int tmp = a; a = b; b = tmp; }
    if (b > c) { int tmp = b; b = c; c = tmp; }
    if (a > b) { int tmp = a; a = b; b = tmp; }
    int wrap = 2 * (a + b);
    int bow = l * w * h;
    return wrap + bow;
}

int main(){
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    
    char line[100];
    int total = 0;
     long total_ribbon = 0;
    int l, w, h;
    int line_num = 0;
    int parsed_count = 0; 
    
    while (fgets(line, sizeof(line), file)) {
        line_num++;
        if (sscanf(line, "%dx%dx%d", &l, &w, &h) == 3){
            int paper = calculate_paper(l, w, h);
            total_ribbon += calculate_ribbon(l, w, h);
            total += paper;
            parsed_count++;  
            
            if (line_num <= 3) {
                printf("Line %d: %dx%dx%d -> %d sq ft\n", line_num, l, w, h, paper);
            }
        } else {
            printf("Failed to parse line %d: %s", line_num, line); 
        }
    }
    
    fclose(file);
    printf("Total wrapping paper needed: %d\n", total);
    printf("Total ribbon needed: %ld\n", total_ribbon);
    return 0;
}