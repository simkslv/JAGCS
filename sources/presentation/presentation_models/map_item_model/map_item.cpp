#include "map_item.h"

using namespace presentation;

MapItem::MapItem(const QGeoCoordinate& position,
                 int direction,
                 const QUrl& mark):
    m_position(position),
    m_direction(direction),
    m_mark(mark)
{}

QGeoCoordinate MapItem::position() const
{
    return m_position;
}

int MapItem::direction() const
{
    return m_direction;
}

QUrl MapItem::mark() const
{
    return m_mark;
}
