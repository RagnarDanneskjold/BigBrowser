#ifndef CYTOBANDREADER_H
#define CYTOBANDREADER_H
#include "abstractregionreader.h"
#include <QTextStream>
namespace big {
class CytobandReader: public AbstractRegionReader
{
public:
    CytobandReader(const QString& filename);
    virtual bool next() Q_DECL_OVERRIDE;



private:
    QTextStream mStream;

};

}
#endif // CYTOBANDREADER_H
