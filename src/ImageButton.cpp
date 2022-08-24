#include "ImageButton.h"

//// Private

void ImageButton::init_new() {
    setStyleSheet("border: none;");
    resize(iconUp.actualSize(QSize(200,100)));
    setIconSize(size());
    connect(this, &this->pressed, [this](){this->setIcon(iconDown);});
    connect(this, &this->released, [this](){this->setIcon(iconUp);});
}

//// Constructors

ImageButton::ImageButton(const QIcon& _iconUp, const QIcon& _iconDown, QWidget* parent): QPushButton(_iconUp, "", parent) {
    iconUp = _iconUp;
    iconDown = _iconDown;
    init_new();
}

ImageButton::ImageButton(const QString& _iconUp, const QString& _iconDown, QWidget* parent): QPushButton("", parent) {
    iconUp = QIcon(_iconUp);
    iconDown = QIcon(_iconDown);
    setIcon(iconUp);
    init_new();
}

//// Set/get fields

const QIcon& ImageButton::getIconUp() const {
    return iconUp;
}

void ImageButton::setIconUp(QIcon& _icon) {
    iconUp = _icon;
}

const QIcon& ImageButton::getIconDown() const {
    return iconDown;
}

void ImageButton::setIconDown(QIcon& _icon) {
    iconDown = _icon;
}