#include <stdio.h>

int cal_building(float BW, float BH, float BD){ //calculating volume for building
    float volume;
    volume = BW * BH * BD;
    return volume;
}

int cal_office(float OW, float OH, float OL){ //calculating volume for office
    float volume2;
    volume2 = OW * OH * OL;
    return volume2;
}

int num_office(float BW, float BH, float BD, float OW, float OH, float OL){ //calculating number of offices.
    int office_num;
    float width, height, length;
    width = BW / OW; //building width / office width
    height = BH / OH; // building height / office height
    length = BD / OL; //building depth / office length
    office_num = (int)width * (int)height * (int)length; //making sure to calulate num of offices not off of each area, but on how one dimension goes against the other
    return office_num;
}

int main(){
    int off_num;
    float bw, bh, bd, building; //building width, height, depth + variable for function
    float ow, oh, ol, office; //office width, height, length + variable for funcion
    char z;

    printf("Please provide the dimensions of the building with this format: width-height-depth\n");
    scanf("%f-%f-%f%c", &bw, &bh, &bd, &z); //scanning dimensions for building
    building = cal_building(bw, bh, bd); //pulling function
    printf("The building has %.2f m^3 of space.\n", building);
    printf("Please provide the dimensions of the office with this format: width-height-length\n");
    scanf("%f-%f-%f%c", &ow, &oh, &ol, &z); //scanning dimensions for office
    office = cal_office(ow, oh, ol); //pulling function
    printf("Each office has %.2f m^3 of space.\n", office);
    off_num = num_office(bw, bh, bd, ow, oh, ol); //pulling function
    printf("The number of offices that can fit inside your building: %d\n", off_num);

    return 0;
}
