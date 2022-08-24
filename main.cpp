#include <QApplication>
#include <QPushButton>
#include <QMediaPlayer>
#include "ImageButton.h"

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    auto button = new ImageButton("../x_ok_u.bmp", "../x_ok_d.bmp", nullptr);

    auto player = new QMediaPlayer(button);
    auto audioPath = QUrl::fromLocalFile("../click9.wav");
    player->setMedia(audioPath);
    player->setVolume(50);

    button->connect(button, &button->pressed, [player](){
        player->play();
    });

    button->show();
    return QApplication::exec();
}
