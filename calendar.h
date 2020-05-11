#ifndef CALENDAR_H
#define CALENDAR_H

#include <QtGui/QWidget>
#include <QCalendarWidget>
#include <QDesktopWidget>
#include <QPainter>
#include "ui_calendar.h"

class MyCalendar:public QCalendarWidget
{
  Q_OBJECT

public:
  QList<QDate> dates;

protected:
  virtual void	paintCell ( QPainter * painter, const QRect & rect, const QDate & date ) const;
};

class Calendar : public QWidget
{
    Q_OBJECT

public:
    Calendar(QWidget *parent = 0);
    ~Calendar();

private:
    Ui::CalendarClass ui;
    MyCalendar *cal;

public slots:
	void exitClicked();
	void settClicked();
	void calClicked();
	void addClicked();
	void pozChanged(int);

};

#endif // CALENDAR_H
