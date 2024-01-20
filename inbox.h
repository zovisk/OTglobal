/**
 * The Forgotten Server - a free and open-source MMORPG server emulator
 * Copyright (C) 2019  Mark Samman <mark.samman@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef INBOX_H
#define INBOX_H

#include "container.h"
#include "tools.h"

class Inbox : public Container {
public:
    Inbox(uint16_t type);

    ReturnValue queryAdd(int32_t, const Thing& thing, uint32_t,
        uint32_t flags, Creature*) const override;

    void postAddNotification(Thing* thing, const Cylinder* oldParent, int32_t index, cylinderlink_t) override;
    void postRemoveNotification(Thing* thing, const Cylinder* newParent, int32_t index, cylinderlink_t) override;

    Cylinder* getParent() const;

private:
    // Add any private members or methods here if needed
};

#endif // INBOX_H
