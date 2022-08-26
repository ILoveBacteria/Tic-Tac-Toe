#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QWidget>
#include "game.h"

namespace Ui {
class GameWindow;
}

class GameWindow : public QWidget
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

private slots:
    void on_button00_clicked();

    void on_button01_clicked();

    void on_button02_clicked();

    void on_button10_clicked();

    void on_button11_clicked();

    void on_button12_clicked();

    void on_button20_clicked();

    void on_button21_clicked();

    void on_button22_clicked();

private:
    Ui::GameWindow *ui;
    Game *game = new Game();
};

#endif // GAMEWINDOW_H
