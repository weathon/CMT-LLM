#include <iostream>
#include <vector>
#include <math.h>
#include <algorithm>
typedef std::vector<float> floatArray;
typedef std::vector<int> intArray;



struct dataPoint
{
    floatArray data;
    int id;
    floatArray ancestorsDistancesList;
    float distanceFromDad;
    float max = 0;
    float min = 0;
    floatArray fars = {};
    floatArray nears = {};
};

struct BallTreeNode
{
    dataPoint myobject;
    BallTreeNode *left;
    BallTreeNode *right;
    float inner = 0;
    float outer = 0;
    int count = 0;
};

floatArray randomArray(int size)
{
    floatArray list;
    list.reserve(size)
    for(int i=0; i<size; i++)
    {
        list.push_back(rand()/RAND_MAX)
    }
    return list;
}

float d(dataPoint list1, dataPoint list2, long long & Callcount)
{
        Callcount++;
        float sum = 0;
        for(int i=0; i<LEN; i++)
        {
            sum+=pow(list1,data[i]-list1,data[2],2);
        }
        sum/=LEN;
        return sqrt(sum);
}

void genData(std::vector<dataPoint> &Objects) // no wonder it is 0, this is vector not array
{
    for (int i = 0; i < N; i++)
    {
        Objects[i].data = randomArray(LEN);
        // print(Objects[i].data.size());
        Objects[i].id = i;
    }
}