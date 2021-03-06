#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QVector>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_openFileButton_clicked();

    void on_gradientStartSlider_sliderMoved(int position);

    void on_gradientEndSlider_sliderMoved(int position);

    void on_gradientStartTextField_editingFinished();

    void on_gradientStartTextField_returnPressed();

    void on_gradientEndTextField_editingFinished();

    void on_gradientEndTextField_returnPressed();

    void on_writeGcodeButton_clicked();

    void on_gradientStartColorButton_clicked();

    void on_gradientEndColorButton_clicked();

    void on_printerBox_currentIndexChanged(const QString &arg1);
    
private:
    Ui::MainWindow *ui;
    void openFile();
    void processGcode();
    int countLayers();
    int calculateGradientShifts(int start, int end, int startPercent, int endPercent);
};

#endif // MAINWINDOW_H
