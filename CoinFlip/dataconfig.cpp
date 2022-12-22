#include "dataconfig.h"
void DataConfig::setData(int(*a)[4],int n)
{
    QVector< QVector<int>> v;
    for(int i = 0 ; i < 4;i++)
    {
        QVector<int>tmp;
        for(int j = 0 ; j < 4;j++)
            tmp.emplace_back(a[i][j]);
        v.emplace_back(tmp);
    }
    mData.insert(n,v);
}
DataConfig::DataConfig(QObject *parent)
    : QObject{parent}
{
    int array1[4][4] = {{1, 1, 1, 1},
                        {1, 1, 0, 1},
                        {1, 0, 0, 0},
                        {1, 1, 0, 1}};
    int array2[4][4] = {{1, 0, 1, 1},
                        {0, 0, 1, 1},
                        {1, 1, 0, 0},
                        {1, 1, 0, 1}};
    int array3[4][4] = {{0, 0, 0, 0},
                        {0, 1, 1, 0},
                        {0, 1, 1, 0},
                        {0, 0, 0, 0}};
    int array4[4][4] = {{0, 1, 1, 1},
                        {1, 0, 0, 1},
                        {1, 0, 1, 1},
                        {1, 1, 1, 1}} ;
    int array5[4][4] = {  {1, 0, 0, 1},
                          {0, 0, 0, 0},
                          {0, 0, 0, 0},
                          {1, 0, 0, 1}} ;
    int array6[4][4] = {   {1, 0, 0, 1},
                           {0, 1, 1, 0},
                           {0, 1, 1, 0},
                           {1, 0, 0, 1}} ;
    int array7[4][4] = {   {0, 1, 1, 1},
                           {1, 0, 1, 1},
                           {1, 1, 0, 1},
                           {1, 1, 1, 0}} ;
    int array8[4][4] = {  {0, 1, 0, 1},
                          {1, 0, 0, 0},
                          {0, 0, 0, 1},
                          {1,0,1,0}};
    int array9[4][4] = {   {1, 0, 1, 0},
                           {1, 0, 1, 0},
                           {0, 0, 1, 0},
                           {1, 0, 0, 1}} ;
    int array10[4][4] = {  {1, 0, 1, 1},
                           {1, 1, 0, 0},
                           {0, 0, 1, 1},
                           {1, 1, 0, 1}} ;
    int array11[4][4] = {  {0, 1, 1, 0},
                           {1, 0, 0, 1},
                           {1, 0, 0, 1},
                           {0, 1, 1, 0}} ;
    int array12[4][4] = {  {0, 1, 1, 0},
                           {0, 0, 0, 0},
                           {1, 1, 1, 1},
                           {0, 0, 0, 0}} ;
    int array13[4][4] = {    {0, 1, 1, 0},
                             {0, 0, 0, 0},
                             {0, 0, 0, 0},
                             {0, 1, 1, 0}} ;
    int array14[4][4] = {    {1, 0, 1, 1},
                             {0, 1, 0, 1},
                             {1, 0, 1, 0},
                             {1, 1, 0, 1}} ;
    int array15[4][4] = {   {0, 1, 0, 1},
                            {1, 0, 0, 0},
                            {1, 0, 0, 0},
                            {0, 1, 0, 1}} ;
    int array16[4][4] = {   {0, 1, 1, 0},
                            {1, 1, 1, 1},
                            {1, 1, 1, 1},
                            {0, 1, 1, 0}} ;
    int array17[4][4] = {  {0, 1, 1, 1},
                           {0, 1, 0, 0},
                           {0, 0, 1, 0},
                           {1,1,1,0}};
    int array18[4][4] = { {0, 0, 0, 1},
                          {0, 0, 1, 0},
                          {0, 1, 0, 0},
                          {1, 0, 0, 0}} ;
    int array19[4][4] = {   {0, 1, 0, 0},
                            {0, 1, 1, 0},
                            {0, 0, 1, 1},
                            {0, 0, 0, 0}} ;
    int array20[4][4] = {  {0, 0, 0, 0},
                           {0, 0, 0, 0},
                           {0, 0, 0, 0},
                           {0, 0, 0, 0}} ;
    setData(array1,1);
    setData(array2,2);
    setData(array3,3);
    setData(array4,4);
    setData(array5,5);
    setData(array6,6);
    setData(array7,7);
    setData(array8,8);
    setData(array9,9);
    setData(array10,10);
    setData(array11,11);
    setData(array12,12);
    setData(array13,13);
    setData(array14,14);
    setData(array15,15);
    setData(array16,16);
    setData(array17,17);
    setData(array18,18);
    setData(array19,19);
    setData(array20,20);
}
