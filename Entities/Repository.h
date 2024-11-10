#ifndef REPOSITORY_H
#define REPOSITORY_H


#include "IRepository.h"
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlTableModel>

template <typename T>
class Repository :IREPOSITORY
{
     Q_INTERFACES(IREPOSITORY);

public:

    explicit Repository();
    void Add(const QString& key,double value=0.0) ;
    void Delete(int id) ;
    QSqlTableModel* GetAll() ;
    void Update(int id,const QString& key,double value=0.0) ;

private :
    QSqlDatabase db ;
    QSqlTableModel* model;
    QString tableName;
    void ConnectionDB ();
};

template <typename T>
Repository<T>::Repository() : tableName(T::tableName())
{
qDebug()<<"tablename : " <<tableName;
    ConnectionDB ();

}

template <typename T>
void Repository<T>::Add(const QString& key,double value)
{

    T item;
    item.set_key(key);
    item.set_value(value);

    QSqlQuery q;
    q.prepare(QString("INSERT INTO %1 (key_, value_) VALUES (:key, :value)").arg(tableName));
    q.bindValue(":key", item.get_key());
    q.bindValue(":value", item.get_value());
    q.exec();
}
template <typename T>
void Repository<T>::Delete(int id)
{

    QSqlQuery q;
    q.prepare(QString("DELETE FROM %1 WHERE id_= :id").arg(tableName));
    q.bindValue(":id", id);
    q.exec();
}
template <typename T>
QSqlTableModel* Repository<T>::GetAll( )
{
    qDebug()<<"tablename : " <<tableName;
       this->model=new QSqlTableModel();
       model->setTable(tableName);
       model->select();
       return model;

}
template <typename T>
void Repository<T>::Update(int id,const QString& key,double value)
{

    T item;
    item.set_key(key);
    item.set_value(value);

    QSqlQuery q;
    q.prepare(QString("UPDATE %1 SET key_=:key, value_=:value WHERE id_ =:id ").arg(tableName));
    q.bindValue(":id",id);
    q.bindValue(":key",item.get_key());
    q.bindValue(":value",item.get_value());
    q.exec();
}
template <typename T>
void Repository<T>::ConnectionDB ()
{

    db=QSqlDatabase :: addDatabase("QSQLITE");
    db.setDatabaseName("TEST.db");
    if(!db.open())
    {
        qDebug() << "Entities::Repository.h::'Failed to open the database!'";
    }

}
#endif // REPOSITORY_H
