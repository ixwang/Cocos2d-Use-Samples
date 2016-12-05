//
//  SamllFuncUse.cpp
//  tinyXMLSample
//
//  Created by xwang on 12/5/16.
//
//

#include "SamllFuncUse.hpp"

SamllFuncUse::SamllFuncUse()
{
    
}

SamllFuncUse::~SamllFuncUse()
{
    
}

bool SamllFuncUse::init()
{
    if( Node::init() )
    {
        
        return true;
    }
    else
    {
        return false;
    }
}

void SamllFuncUse::delayCallFuncSample( float delay )
{
    CallFunc* funcall = CallFunc::create( CC_CALLBACK_0( SamllFuncUse::callFuncCallBack, this ) );
    Action* actionOne = Sequence::create( DelayTime::create( delay ),
                                                           funcall,
                                                           NULL );
    runAction(actionOne);
}

void SamllFuncUse::callFuncCallBack()
{
    // 0.2 after delayCallFuncSample is called
}

