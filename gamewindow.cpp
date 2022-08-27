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
    ui -> button00 -> setEnabled(false);
    game -> chooseAndChangeTurn(0, 0);
    checkEndOfGame();
}


void GameWindow::on_button01_clicked() {
    ui -> button01 -> setText(QString(game -> turn));
    ui -> button01 -> setEnabled(false);
    game -> chooseAndChangeTurn(0, 1);
    checkEndOfGame();
}


void GameWindow::on_button02_clicked() {
    ui -> button02 -> setText(QString(game -> turn));
    ui -> button02 -> setEnabled(false);
    game -> chooseAndChangeTurn(0, 2);
    checkEndOfGame();
}


void GameWindow::on_button10_clicked() {
    ui -> button10 -> setText(QString(game -> turn));
    ui -> button10 -> setEnabled(false);
    game -> chooseAndChangeTurn(1, 0);
    checkEndOfGame();
}


void GameWindow::on_button11_clicked() {
    ui -> button11 -> setText(QString(game -> turn));
    ui -> button11 -> setEnabled(false);
    game -> chooseAndChangeTurn(1, 1);
    checkEndOfGame();
}


void GameWindow::on_button12_clicked() {
    ui -> button12 -> setText(QString(game -> turn));
    ui -> button12 -> setEnabled(false);
    game -> chooseAndChangeTurn(1, 2);
    checkEndOfGame();
}


void GameWindow::on_button20_clicked() {
    ui -> button20 -> setText(QString(game -> turn));
    ui -> button20 -> setEnabled(false);
    game -> chooseAndChangeTurn(2, 0);
    checkEndOfGame();
}


void GameWindow::on_button21_clicked() {
    ui -> button21 -> setText(QString(game -> turn));
    ui -> button21 -> setEnabled(false);
    game -> chooseAndChangeTurn(2, 1);
    checkEndOfGame();
}


void GameWindow::on_button22_clicked() {
    ui -> button22 -> setText(QString(game -> turn));
    ui -> button22 -> setEnabled(false);
    game -> chooseAndChangeTurn(2, 2);
    checkEndOfGame();
}

void GameWindow::disableAllButtons() {
    ui -> button00 -> setEnabled(false);
    ui -> button01 -> setEnabled(false);
    ui -> button02 -> setEnabled(false);
    ui -> button10 -> setEnabled(false);
    ui -> button11 -> setEnabled(false);
    ui -> button12 -> setEnabled(false);
    ui -> button20 -> setEnabled(false);
    ui -> button21 -> setEnabled(false);
    ui -> button22 -> setEnabled(false);
}

void GameWindow::checkEndOfGame() {
    char winner = game -> checkWin();
    if (winner != '\0') {
        disableAllButtons();
        ui -> winnerPrompt -> setText(QString(winner).append(" won"));
    }
}
