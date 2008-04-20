/*
 *  Killbots
 *  Copyright (C) 2006-2008  Parker Coates <parker.coates@gmail.com>
 *
 *  This program is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU General Public License as
 *  published by the Free Software Foundation; either version 2 of
 *  the License, or (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses>
 *  or write to the Free Software Foundation, Inc., 51 Franklin Street,
 *  Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef KILLBOTS_OPTIONSPAGE_H
#define KILLBOTS_OPTIONSPAGE_H

class KComboBox;

class QCheckBox;
class QSlider;
#include <QtGui/QWidget>

class OptionsPage : public QWidget
{
	Q_OBJECT

  public:
	explicit OptionsPage( QWidget *parent = 0 );
	virtual ~OptionsPage();

	QCheckBox * kcfg_AllowUnsafeMoves;
	KComboBox * kcfg_MiddleClickAction;
	KComboBox * kcfg_RightClickAction;
	QSlider * kcfg_AnimationSpeed;
};

#endif
