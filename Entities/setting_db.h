#ifndef SETTING_DB_H
#define SETTING_DB_H
#include<QObject>
#include <QString>
class setting_db
{
    // Q_OBJECT
    // Q_PROPERTY(int id MEMBER id_ READ get_id WRITE set_id);
    // Q_PROPERTY(QString key MEMBER key_ READ get_key WRITE set_key );
    // Q_PROPERTY(float value MEMBER value_ READ get_value WRITE set_value);

public:
    setting_db()  {

    }
    static QString tableName() { return "setting";}
    int get_id() const {return id_;}

    void set_id(int id){id_=id;}

    QString get_key() const {return key_;}

    void set_key(QString key){key_=key;}

    double get_value() const{return value_;}

    void set_value(double value){value_=value;}
private:
    int id_;
    QString key_;
    double value_;
signals :

};

#endif // SETTING_DB_H
