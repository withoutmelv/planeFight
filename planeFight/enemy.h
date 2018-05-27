#ifndef ENEMY_H
#define ENEMY_H

#include "plane.h"
#include "enemybullet.h"
#include "player.h"

class Enemy : public Plane
{
	Q_OBJECT

public:
	Enemy(QWidget *parent);
	virtual ~Enemy();

private:

public slots:
	void move_();
	void productBullet();
	
};

#endif // ENEMY_H
