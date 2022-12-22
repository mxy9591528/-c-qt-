#ifndef UTILITY_H
#define UTILITY_H
#include<QApplication>
#include<QFile>
class Utility
{
public:
    static int WAIT_CHECK;
    static int NORMAL;
    static void setStyle(const QString&styleName);
    static int getCommodityType(const QString&type);
    static QString getCommodityStrType(int type);
    static int getchoice1(const QString&s);
    static int getchoice2(const QString&s);
    static int getchoice3(const QString&s);
    static QString getstatus(int status);
    static QString GET_ALL_COMMODITY;
    static QString GET_COMMODITY_BY_TYPE_ORDER_BY_PRICE_DESC;
    static QString GET_COMMODITY_BY_TYPE_ORDER_BY_PRICE_ASC;
    static QString GET_COMMODITY_BY_TYPE_ORDER_BY_NUM_DESC;
    static QString GET_COMMODITY_BY_TYPE_ORDER_BY_NUM_ASC;
    static QString GET_COMMODITY_BY_TYPE_ORDER_BY_PRODUCER_DESC;
    static QString GET_COMMODITY_BY_TYPE_ORDER_BY_PRODUCER_ASC;
    static QString GET_COMMODITY_BY_NAME_ORDER_BY_PRICE_DESC;
    static QString GET_COMMODITY_BY_NAME_ORDER_BY_PRICE_ASC;
    static QString GET_COMMODITY_BY_NAME_ORDER_BY_NUM_DESC;
    static QString GET_COMMODITY_BY_NAME_ORDER_BY_NUM_ASC;
    static QString GET_COMMODITY_BY_NAME_ORDER_BY_PRODUCER_DESC;
    static QString GET_COMMODITY_BY_NAME_ORDER_BY_PRODUCER_ASC;
    static QString GET_COMMODITY_BY_PRODUCER_ORDER_BY_PRICE_DESC;
    static QString GET_COMMODITY_BY_PRODUCER_ORDER_BY_PRICE_ASC;
    static QString GET_COMMODITY_BY_PRODUCER_ORDER_BY_NUM_DESC;
    static QString GET_COMMODITY_BY_PRODUCER_ORDER_BY_NUM_ASC;
    static QString GET_COMMODITY_BY_PRODUCER_ORDER_BY_PRODUCER_DESC;
    static QString GET_COMMODITY_BY_PRODUCER_ORDER_BY_PRODUCER_ASC;
    static QString INSERT_COMMODITY;
    static QString DELETE_COMMODITY;
    static QString UPDATE_COMMODITY;
    static QString GET_ALL_EMP;
    static QString GET_EMP;
    static QString GET_WAIT_CHECK_EMP;
    static QString INSERT_EMP;
    static QString DELETE_EMP;
    static QString UPDATE_EMP;
    static QString GET_ADMIN;
};

#endif // UTILITY_H
