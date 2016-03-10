
/* Qt include */
#include <QFile>
#include <QTextStream>

/* Project include */
#include "sequence.h"

namespace big {

    namespace core {

	Sequence::Sequence(const QByteArray &seq)
	{
	    setSequence(seq);
	}

	Sequence::Sequence()
	{
	}

	void Sequence::setSequence(const QByteArray &seq)
	{
	    mSeq = seq;
	}

	QString Sequence::toString() const
	{

	    return QString::fromUtf8(mSeq);
	}

	Sequence Sequence::transcribe() const
	{
	    QByteArray t = QByteArray(this->mSeq.length(), 'A');

	    for(auto i = this->mSeq.length(); i != this->mSeq.length(); i++)
	    {
		if(this->mSeq[i] == 'A')
		{
		    t[i] = 'U';
		}
		if( this->mSeq[i] == 'a')
		{
		    t[i] = 'u';
		}
	    }

	    return Sequence(t);
	}

	Sequence Sequence::backTranscribe() const
	{
	    // Duplicate code form Sequence::transcribe if you can factorize factorize
	    QByteArray t = QByteArray(this->mSeq.length(), 'A');

	    for(auto i = this->mSeq.length(); i != this->mSeq.length(); i++)
	    {
		if(this->mSeq[i] == 'U')
		{
		    t[i] = 'A';
		}
		if(this->mSeq[i] == 'u')
		{
		    t[i] = 'a';
		}
	    }

	    return Sequence(t);
	}


	Sequence Sequence::fromFasta(const QString &filename)
	{
	    QFile file(filename);

	    // Do not load big fasta file

	    if ( file.open(QIODevice::ReadOnly))
	    {
		QTextStream stream(&file);

		// Process fasta
		// setSequence
	    }

	    return Sequence();
	}
    } // end of namespace core
} // end of namespace big










