#pragma once

#include <QPushButton>

class ImageButton: public QPushButton {
    Q_OBJECT
private:
    QIcon iconUp;
    QIcon iconDown;

    void init_new();
public:
    ImageButton(const QIcon& _iconUp, const QIcon& _iconDown, QWidget* parent);
    ImageButton(const QString& _iconUp, const QString& _iconDown, QWidget* parent);

    const QIcon& getIconUp() const;
    void setIconUp(QIcon& _icon);
    const QIcon& getIconDown() const;
    void setIconDown(QIcon& _icon);
};