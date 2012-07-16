#ifndef MYCLASS_H
#define MYCLASS_H

#include <QString>
#include <QObject>


class MyClass : public QObject
{
    Q_OBJECT

public:
    MyClass(const QString& text, QObject *parent = 0);
    
    const QString& text() const;

    int getLengthOfText() const;

signals:
    void textChanged(const QString&);

public slots:
    void setText(const QString &text);

private:
    QString m_text;
    
};

#endif // MYCLASS_H

