#pragma once


#include "../../JuceLibraryCode/JuceHeader.h"


#include "../Listeners/ListenerInitializer.h"


class AbstractPulseTableRow
        : public Component ,
          public PulseTableSelectionChanged
{
public:
    AbstractPulseTableRow ();

    ~AbstractPulseTableRow () override;

    void
        onPulseTableSelectionChanged (
                unsigned int selected_row
                ) override;

    virtual auto
        Get () const -> unsigned = 0;

    virtual void
        Set (
                unsigned int row_num
              , unsigned     value
                ) = 0;

protected:
    bool selected {
                    false
            };
    int  row {
                    -1
            };
};
