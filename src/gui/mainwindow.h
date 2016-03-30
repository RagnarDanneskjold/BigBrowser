#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QSplitter>
#include "searchtoolbar.h"
#include "statusbar.h"
#include "tracklistwidget.h"
#include "chromosomwidget.h"
#include "settingsdialog.h"
#include "genom.h"
#include "selectionrouter.h"

namespace big {
namespace gui {
class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


public Q_SLOTS:
void showSettings();
void setGenom(const QString& name);

void setSelection(const QString& chromosom, quint64 start, quint64 end);

protected:
    void setupMenuBar();


private:
    QMenuBar * mMenuBar;
    SearchToolBar * mSearchBar;
    QToolBar * mToolBar;
    StatusBar * mStatusBar;
    ChromosomWidget * mchromosomWidget;
    TrackListWidget * mTrackListWidget;
    Genom * mGenom;
    SelectionRouter * mRouter;


};

}}

#endif // MAINWINDOW_H
