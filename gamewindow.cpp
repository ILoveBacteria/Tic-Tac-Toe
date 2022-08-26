#include "gamewindow.h"
#include "ui_gamewindow.h"

GameWindow::GameWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GameWindow)
{
    ui->setupUi(this);
}

GameWindow::~GameWindow() {
    delete ui;
}

void GameWindow::on_button00_clicked() {
    ui -> button00 -> setText(QString(game -> turn));
    game -> chooseAndChangeTurn(0, 0);
}


void GameWindow::on_button01_clicked() {
    ui -> button01 -> setText(QString(game -> turn));
    game -> chooseAndChangeTurn(0, 1);
}


void GameWindow::on_button02_clicked() {
    ui -> button02 -> setText(QString(game -> turn));
    game -> chooseAndChangeTurn(0, 2);
}


void GameWindow::on_button10_clicked() {
    ui -> button10 -> setText(QString(game -> turn));
    game -> chooseAndChangeTurn(1, 0);
}


void GameWindow::on_button11_clicked() {
    ui -> button11 -> setText(QString(game -> turn));
    game -> chooseAndChangeTurn(1, 1);
}


void GameWindow::on_button12_clicked() {
    ui -> button12 -> setText(QString(game -> turn));
    game -> chooseAndChangeTurn(1, 2);
}


void GameWindow::on_button20_clicked() {
    ui -> button20 -> setText(QString(game -> turn));
    game -> chooseAndChangeTurn(2, 0);
}


void GameWindow::on_button21_clicked() {
    ui -> button21 -> setText(QString(game -> turn));
    game -> chooseAndChangeTurn(2, 1);
}


void GameWindow::on_button22_clicked() {
    ui -> button22 -> setText(QString(game -> turn));
    game -> chooseAndChangeTurn(2, 2);
}
