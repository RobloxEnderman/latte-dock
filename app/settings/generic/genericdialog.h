/*
 * Copyright 2020  Michail Vourlakos <mvourlakos@gmail.com>
 *
 * This file is part of Latte-Dock
 *
 * Latte-Dock is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * Latte-Dock is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef SETTINGSGENERICDIALOG_H
#define SETTINGSGENERICDIALOG_H

// Qt
#include <QAction>
#include <QDialog>
#include <QObject>
#include <QTimer>
#include <QWidget>

// KDE
#include <KMessageWidget>

namespace Latte {
namespace Settings {
namespace Dialog {

class GenericDialog : public QDialog
{
    Q_OBJECT

public:
    GenericDialog(QWidget *parent = nullptr, Qt::WindowFlags f = Qt::WindowFlags());
    ~GenericDialog();

    void showInlineMessage(const QString &msg, const KMessageWidget::MessageType &type, const bool &isPersistent = false, QList<QAction *> actions = QList<QAction *>());
    void hideInlineMessage();

    int saveChangesConfirmation(const QString &text, QString applyBtnText = "");

private slots:
    KMessageWidget *initMessageWidget();
};

}
}
}

#endif
