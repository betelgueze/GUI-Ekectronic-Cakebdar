#include "calendar.h"

Calendar::Calendar(QWidget *parent)
    : QWidget(parent)
{
	ui.setupUi(this);

	setWindowFlags(Qt::SplashScreen|Qt::WindowStaysOnBottomHint);

	move(100,100);

	cal=new MyCalendar();
	cal->setNavigationBarVisible(false);
	cal->setSelectionMode(QCalendarWidget::NoSelection);
	cal->setFirstDayOfWeek(Qt::Monday);
	cal->setAutoFillBackground(false);
	QPalette pal = cal->palette();
	pal.setBrush(QPalette::Window,Qt::NoBrush);
	cal->setPalette(pal);
	ui.layout->addWidget(cal);

	setWindowOpacity(0.6);
	ui.stackedWidget->setCurrentIndex(0);

	ui.pozBox->addItem("Top-Left");
	ui.pozBox->addItem("Top-Right");
	ui.pozBox->addItem("Botton-Left");
	ui.pozBox->addItem("Botton-Right");
	ui.pozBox->setCurrentIndex(3);
	pozChanged(3);

	connect(ui.exitButton,SIGNAL(clicked()),this,SLOT(exitClicked()));
	connect(ui.setButton,SIGNAL(clicked()),this,SLOT(settClicked()));
	connect(ui.calButton,SIGNAL(clicked()),this,SLOT(calClicked()));
	connect(ui.addButton,SIGNAL(clicked()),this,SLOT(addClicked()));
	connect(ui.pozBox,SIGNAL(currentIndexChanged(int)),this,SLOT(pozChanged(int)));
}

Calendar::~Calendar()
{

}

void	MyCalendar::paintCell ( QPainter * painter, const QRect & rect, const QDate & date ) const
{
	painter->fillRect(rect,QColor(255,255,255));
	if(date.month()==this->selectedDate().month())
	{
		QDate d=date;
		d.setYMD(2000,d.month(),d.day());
		if(dates.contains(d))
			painter->fillRect(rect,QColor(255,160,160));
		if(date==QDate::currentDate())
		{
			QBrush br;
			painter->setBrush(Qt::NoBrush);
			QPen pen;
			pen.setColor(QColor(255,0,0));
			pen.setWidth(2);
			painter->setPen(pen);
			painter->drawRect(rect.adjusted(1,1,-1,-1));
		}
		if(date.dayOfWeek()<=5)
			painter->setPen(QColor(0,0,0));
		else
			painter->setPen(QColor(255,0,0));
	}
	else
	{
		painter->setPen(QColor(200,200,200));
	}
	QTextOption to;
	to.setAlignment(Qt::AlignCenter);
	painter->drawText(rect,QString::number(date.day()),to);
	//QCalendarWidget::paintCell(painter,rect,date);
}

void Calendar::exitClicked()
{
	close();
	qApp->quit();
}

void Calendar::settClicked()
{
	ui.stackedWidget->setCurrentIndex(1);
}

void Calendar::calClicked()
{
	ui.stackedWidget->setCurrentIndex(0);
}

void Calendar::addClicked()
{
	ui.listView->addItem(ui.dateEdit->date().toString("d.M."));
	QDate d=ui.dateEdit->date();
	d.setYMD(2000,d.month(),d.day());
	cal->dates.append(d);
	cal->update();
}

void Calendar::pozChanged(int poz)
{
	int sw=qApp->desktop()->availableGeometry(0).width();
	int sh=qApp->desktop()->availableGeometry(0).height();
	switch(poz)
	{
		case 0:
			move(0,0);
		break;
		case 1:
			move(sw-width(),0);
		break;
		case 2:
			move(0,sh-height());
		break;
		case 3:
			move(sw-width(),sh-height());
		break;
	}
}
