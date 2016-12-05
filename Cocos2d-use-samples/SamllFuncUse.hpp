//
//  SamllFuncUse.hpp
//  tinyXMLSample
//
//  Created by xwang on 12/5/16.
//
//

#ifndef SamllFuncUse_hpp
#define SamllFuncUse_hpp

#include <stdio.h>

#include "cocos2d.h"

using namespace cocos2d;


class SamllFuncUse : public Node
{
private:
    SamllFuncUse();
    ~SamllFuncUse();

private:
    
    virtual bool init();
    
    // SamllFuncUse* func = SamllFuncUse::create();
    CREATE_FUNC(SamllFuncUse);
    
public:
    
    // Delay call func
    void delayCallFuncSample( float delay );
    void callFuncCallBack();
};


#endif /* SamllFuncUse_hpp */
