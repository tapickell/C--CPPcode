#include "myclass.h"

MyClass::MyClass(const QString& text, QObject *parent) :
    QObject(parent)
{
}

void MyClass::setText(const QString &text)
{
    if(m_text == text)
        return;
    m_text = text;
    emit textChanged(m_text);
}

