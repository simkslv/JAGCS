#ifndef LINK_LIST_VM_H
#define LINK_LIST_VM_H

// Internal
#include "dto_traits.h"
#include "link_description.h"

class QAbstractItemModel;

namespace presentation
{
    class LinkListVm: public QObject
    {
        Q_OBJECT

        Q_PROPERTY(QAbstractItemModel* links READ links CONSTANT)

    public:
        explicit LinkListVm(QObject* parent = nullptr);
        ~LinkListVm() override;

        QAbstractItemModel* links() const;

    public slots:
        void filter(const QString& filterString);

        void addLink(dto::LinkDescription::Type type);
        void removeLink(const dto::LinkDescriptionPtr& description);

    private:
         class Impl;
         QScopedPointer<Impl> const d;
    };
}

#endif // LINK_LIST_VM_H
