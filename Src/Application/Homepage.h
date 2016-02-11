#pragma once
#include "AppBase.h"

namespace MagicApp
{
    class HomepageUI;
    class Homepage : public AppBase
    {
    public: 
        Homepage();
        virtual ~Homepage();

        virtual bool Enter(void);
        virtual bool Update(double timeElapsed);
        virtual bool Exit(void);
        virtual bool KeyPressed(const OIS::KeyEvent &arg);

    private:
#if DEBUGDUMPFILE
        void LoadDumpFile(void);
#endif

    private:
        HomepageUI* mpUI;
    };
}
