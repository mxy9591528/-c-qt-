#include"utility.h"
void Utility::setStyle(const QString&styleName)
{
    QFile file(QString("%1").arg(styleName));
    file.open(QFile::ReadOnly);
    QString css = QLatin1String(file.readAll());
    qApp->setStyleSheet(css);
}

int Utility::getCommodityType(const QString &type)
{
    if(type=="食品")
        return 1;
    else if(type=="饮料")
        return 2;
    else if(type=="生活用品")
        return 3;
    else if(type=="化妆品")
        return 4;
    return 0;
}

QString Utility::getCommodityStrType(int type)
{
    if(type==1)
        return "食品";
    else if(type==2)
        return "饮料";
    else if(type==3)
        return "生活用品";
    else if(type==4)
        return "化妆品";
    return "";
}

int Utility::getchoice1(const QString &s)
{
    if(s=="商品类型")
        return 1;
    else if(s=="商品名称")
        return 2;
    else if(s=="商品厂家")
        return 3;
    return 0;
}

int Utility::getchoice2(const QString &s)
{
    if(s=="升序")
        return 1;
    else if(s=="降序")
        return 2;
    return 0;
}

int Utility::getchoice3(const QString &s)
{
    if(s=="商品价格")
        return 1;
    else if(s=="商品库存")
        return 2;
    else if(s=="商品厂家")
        return 3;
    return 0;
}

QString Utility::getstatus(int status)
{
    switch(status)
    {
    case 1:return "待审批";
    case 2:return "正常";
    default:return "异常";
    }
}


QString Utility::GET_ALL_COMMODITY="SELECT*FROM commodity";
QString Utility::GET_COMMODITY_BY_TYPE_ORDER_BY_PRICE_DESC="SELECT*FROM commodity WHERE type=:type ORDER BY price DESC";
QString Utility::GET_COMMODITY_BY_TYPE_ORDER_BY_PRICE_ASC="SELECT*FROM commodity WHERE type=:type ORDER BY price ASC";
QString Utility::GET_COMMODITY_BY_TYPE_ORDER_BY_NUM_DESC="SELECT*FROM commodity WHERE type=:type ORDER BY num DESC";
QString Utility::GET_COMMODITY_BY_TYPE_ORDER_BY_NUM_ASC="SELECT*FROM commodity WHERE type=:type ORDER BY num ASC";
QString Utility::GET_COMMODITY_BY_TYPE_ORDER_BY_PRODUCER_DESC="SELECT*FROM commodity WHERE type=:type ORDER BY producer DESC";
QString Utility::GET_COMMODITY_BY_TYPE_ORDER_BY_PRODUCER_ASC="SELECT*FROM commmodity WHERE type=:type ORDER BY producer ASC";
QString Utility::GET_COMMODITY_BY_NAME_ORDER_BY_PRICE_DESC="SELECT*FROM commodity WHERE name=:name ORDER BY price DESC";
QString Utility::GET_COMMODITY_BY_NAME_ORDER_BY_PRICE_ASC="SELECT*FROM commodity WHERE name=:name ORDER BY price ASC";
QString Utility::GET_COMMODITY_BY_NAME_ORDER_BY_NUM_DESC="SELECT*FROM commodity WHERE name=:name ORDER BY num DESC";
QString Utility::GET_COMMODITY_BY_NAME_ORDER_BY_NUM_ASC="SELECT*FROM commodity WHERE name=:name ORDER BY num ASC";
QString Utility::GET_COMMODITY_BY_NAME_ORDER_BY_PRODUCER_DESC="SELECT*FROM commodity WHERE name=:name ORDER BY producer DESC";
QString Utility::GET_COMMODITY_BY_NAME_ORDER_BY_PRODUCER_ASC="SELECT*FROM commmodity WHERE name=:name ORDER BY producer ASC";
QString Utility::GET_COMMODITY_BY_PRODUCER_ORDER_BY_PRICE_DESC="SELECT*FROM commodity WHERE producer=:producer ORDER BY price DESC";
QString Utility::GET_COMMODITY_BY_PRODUCER_ORDER_BY_PRICE_ASC="SELECT*FROM commodity WHERE producer=:producer ORDER BY price ASC";
QString Utility::GET_COMMODITY_BY_PRODUCER_ORDER_BY_NUM_DESC="SELECT*FROM commodity WHEREproducer=:producere ORDER BY num DESC";
QString Utility::GET_COMMODITY_BY_PRODUCER_ORDER_BY_NUM_ASC="SELECT*FROM commodity WHERE producer=:producer ORDER BY num ASC";
QString Utility::GET_COMMODITY_BY_PRODUCER_ORDER_BY_PRODUCER_DESC="SELECT*FROM commodity WHERE producer=:producer ORDER BY producer DESC";
QString Utility::GET_COMMODITY_BY_PRODUCER_ORDER_BY_PRODUCER_ASC="SELECT*FROM commmodity WHERE producer=:producer ORDER BY producer ASC";
QString Utility::INSERT_COMMODITY="INSERT INTO commodity VALUES(:type,:name,:price,:num,:brand,:producer)";
QString Utility::DELETE_COMMODITY="DELETE FROM commodity WHERE type=:type AND name=:name AND price=:price AND num=:num AND brand=:brand AND producer=:producer";
QString Utility::UPDATE_COMMODITY="UPDATE commodity SET type=:newtype,name=:newname,price=:newprice,num=:newnum,brand=:newbrand,producer=:newproducer WHERE type=:type AND name=:name AND price=:price AND num=:num AND brand=:brand AND producer=:producer";
QString Utility::GET_ALL_EMP="SELECT*FROM manager";
QString Utility::GET_EMP="SELECT*FROM manager WHERE id=:id";
QString Utility::GET_WAIT_CHECK_EMP="SELECT*FROM manager WHERE status=:status";
QString Utility::INSERT_EMP="INSERT INTO manager VALUES(:id,:pwd,:img,:status)";
QString Utility::UPDATE_EMP="UPDATE manager SET id=:newid,pwd=:newpwd,img=:newimg,status=:newstatus WHERE id=:id";
QString Utility::DELETE_EMP="DELETE FROM manager WHERE id=:id";
QString Utility::GET_ADMIN="SELECT*FROM admin";
int Utility::WAIT_CHECK=1;
int Utility::NORMAL=2;
