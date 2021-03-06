//
//  _   _         ______    _ _ _   _             _ _ _
// | \ | |       |  ____|  | (_) | (_)           | | | |
// |  \| | ___   | |__   __| |_| |_ _ _ __   __ _| | | |
// | . ` |/ _ \  |  __| / _` | | __| | '_ \ / _` | | | |
// | |\  | (_) | | |___| (_| | | |_| | | | | (_| |_|_|_|
// |_| \_|\___/  |______\__,_|_|\__|_|_| |_|\__, (_|_|_)
//                                           __/ |
//                                          |___/
// 
// This file is auto-generated. Do not edit manually
// 
// Copyright 2016 Automatak LLC
// 
// Automatak LLC (www.automatak.com) licenses this file
// to you under the the Apache License Version 2.0 (the "License"):
// 
// http://www.apache.org/licenses/LICENSE-2.0.html
//

#include "JNIDoubleBitBinaryInput.h"

namespace jni
{
    namespace cache
    {
        bool DoubleBitBinaryInput::init(JNIEnv* env)
        {
            auto clazzTemp = env->FindClass("Lcom/automatak/dnp3/DoubleBitBinaryInput;");
            this->clazz = (jclass) env->NewGlobalRef(clazzTemp);
            env->DeleteLocalRef(clazzTemp);

            this->init3Constructor = env->GetMethodID(this->clazz, "<init>", "(Lcom/automatak/dnp3/enums/DoubleBit;BJ)V");
            if(!this->init3Constructor) return false;

            return true;
        }

        void DoubleBitBinaryInput::cleanup(JNIEnv* env)
        {
            env->DeleteGlobalRef(this->clazz);
        }

        LocalRef<jobject> DoubleBitBinaryInput::init3(JNIEnv* env, jobject arg0, jbyte arg1, jlong arg2)
        {
            return LocalRef<jobject>(env, env->NewObject(this->clazz, this->init3Constructor, arg0, arg1, arg2));
        }
    }
}
