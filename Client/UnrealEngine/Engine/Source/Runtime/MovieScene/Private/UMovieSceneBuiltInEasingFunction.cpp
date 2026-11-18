// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// StaticClass @ 146165ec0

UClass * __cdecl UMovieSceneBuiltInEasingFunction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBuiltInEasingFunction",
               &Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction.InnerSingleton,
               StaticRegisterNativesUMovieSceneBuiltInEasingFunction,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBuiltInEasingFunction>,
               InternalVTableHelperCtorCaller<UMovieSceneBuiltInEasingFunction>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction.InnerSingleton;
}

// UMovieSceneBuiltInEasingFunction @ 146183180

UMovieSceneBuiltInEasingFunction * __thiscall
UMovieSceneBuiltInEasingFunction::UMovieSceneBuiltInEasingFunction
          (UMovieSceneBuiltInEasingFunction *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEasingFunction__;
  return this;
}

// UMovieSceneBuiltInEasingFunction @ 1461831c0

UMovieSceneBuiltInEasingFunction * __thiscall
UMovieSceneBuiltInEasingFunction::UMovieSceneBuiltInEasingFunction
          (UMovieSceneBuiltInEasingFunction *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->Type = Linear;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEasingFunction__;
  return this;
}

// ~UMovieSceneBuiltInEasingFunction @ 146185d80

void __thiscall
UMovieSceneBuiltInEasingFunction::~UMovieSceneBuiltInEasingFunction
          (UMovieSceneBuiltInEasingFunction *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IMovieSceneEasingFunction__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Evaluate @ 1461a20d0

float __thiscall
UMovieSceneBuiltInEasingFunction::Evaluate(UMovieSceneBuiltInEasingFunction *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = __real_3f000000;
  fVar2 = __real_3f800000;
  fVar3 = param_1 + param_1;
  fVar4 = ((param_1 - __real_3f000000) + param_1) - __real_3f000000;
  switch((char)this->_padding_) {
  default:
    return param_1;
  case '\x01':
    fVar1 = sinf((__real_3f800000 - param_1) * __real_3fc90fdb);
    return fVar2 - fVar1;
  case '\x02':
    fVar2 = sinf(param_1 * __real_3fc90fdb);
    return fVar2;
  case '\x03':
    if (__real_3f800000 <= fVar3) {
      fVar4 = sinf(fVar4 * __real_3fc90fdb);
      return (fVar4 + fVar2) * fVar1;
    }
    fVar4 = sinf((__real_3f800000 - fVar3) * __real_3fc90fdb);
    return (fVar2 - fVar4) * fVar1;
  case '\x05':
    return __real_3f800000 - (__real_3f800000 - param_1) * (__real_3f800000 - param_1);
  case '\x06':
    if (fVar3 < __real_3f800000) {
LAB_1461a23aa:
      fVar2 = fVar3 * fVar3;
      goto LAB_1461a221b;
    }
    fVar4 = __real_3f800000 - fVar4;
    break;
  case '\a':
    fVar2 = param_1 * param_1 * __real_40400000 - param_1 * param_1 * fVar3;
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    return fVar2;
  case '\b':
    return param_1 * param_1 * param_1;
  case '\t':
    fVar2 = __real_3f800000 - param_1;
    return __real_3f800000 - fVar2 * fVar2 * fVar2;
  case '\n':
    if (fVar3 < __real_3f800000) {
      return fVar3 * fVar3 * fVar3 * __real_3f000000;
    }
    fVar2 = (__real_3f800000 - fVar4) * (__real_3f800000 - fVar4);
    goto LAB_1461a22e6;
  case '\v':
    if (0.0 <= param_1) {
      if (param_1 < __real_3f800000) {
        fVar2 = param_1 * param_1 * (__real_40400000 - fVar3);
      }
    }
    else {
      fVar2 = 0.0;
    }
    if (__real_3f800000 <= fVar2) {
      fVar2 = __real_3f800000;
    }
    if (0.0 < fVar2) {
      return fVar2;
    }
    return 0.0;
  case '\f':
    param_1 = param_1 * param_1;
  case '\x04':
    return param_1 * param_1;
  case '\r':
    fVar2 = (__real_3f800000 - param_1) * (__real_3f800000 - param_1);
    return __real_3f800000 - fVar2 * fVar2;
  case '\x0e':
    if (fVar3 < __real_3f800000) {
      fVar3 = fVar3 * fVar3;
      goto LAB_1461a23aa;
    }
    fVar4 = (__real_3f800000 - fVar4) * (__real_3f800000 - fVar4);
    break;
  case '\x0f':
    return param_1 * param_1 * param_1 * param_1 * param_1;
  case '\x10':
    fVar2 = __real_3f800000 - param_1;
    return __real_3f800000 - fVar2 * fVar2 * fVar2 * fVar2 * fVar2;
  case '\x11':
    if (fVar3 < __real_3f800000) {
      return fVar3 * fVar3 * fVar3 * fVar3 * fVar3 * __real_3f000000;
    }
    fVar2 = (__real_3f800000 - fVar4) * (__real_3f800000 - fVar4);
    fVar2 = fVar2 * fVar2;
LAB_1461a22e6:
    return ((__real_3f800000 - fVar2 * (__real_3f800000 - fVar4)) + __real_3f800000) *
           __real_3f000000;
  case '\x12':
    fVar2 = powf(__real_40000000,(param_1 - __real_3f800000) * __real_41200000);
    return fVar2;
  case '\x13':
    fVar2 = powf(__real_40000000,param_1 * __real_c1200000);
    return __real_3f800000 - fVar2;
  case '\x14':
    if (__real_3f800000 <= fVar3) {
      fVar4 = powf(__real_40000000,fVar4 * __real_c1200000);
      fVar2 = (fVar2 - fVar4) + fVar2;
    }
    else {
      fVar2 = powf(__real_40000000,(fVar3 - __real_3f800000) * __real_41200000);
    }
    goto LAB_1461a221b;
  case '\x15':
    return __real_3f800000 - SQRT(__real_3f800000 - param_1 * param_1);
  case '\x16':
    return SQRT(__real_3f800000 - (__real_3f800000 - param_1) * (__real_3f800000 - param_1));
  case '\x17':
    if (__real_3f800000 <= fVar3) {
      return (SQRT(__real_3f800000 - (__real_3f800000 - fVar4) * (__real_3f800000 - fVar4)) +
             __real_3f800000) * __real_3f000000;
    }
    return (__real_3f800000 - SQRT(__real_3f800000 - fVar3 * fVar3)) * __real_3f000000;
  }
  fVar2 = (__real_3f800000 - fVar4 * fVar4) + __real_3f800000;
LAB_1461a221b:
  return fVar2 * fVar1;
}

// GetPrivateStaticClass @ 1461b2be0

UClass * __cdecl UMovieSceneBuiltInEasingFunction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBuiltInEasingFunction",
               &Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction.InnerSingleton,
               StaticRegisterNativesUMovieSceneBuiltInEasingFunction,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneBuiltInEasingFunction>,
               InternalVTableHelperCtorCaller<UMovieSceneBuiltInEasingFunction>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBuiltInEasingFunction.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneBuiltInEasingFunction @ 1461d48e0

void __cdecl
UMovieSceneBuiltInEasingFunction::StaticRegisterNativesUMovieSceneBuiltInEasingFunction(void)

{
  return;
}

// _getUObject @ 1461e2290

UObject * __thiscall
UMovieSceneBuiltInEasingFunction::_getUObject(UMovieSceneBuiltInEasingFunction *this)

{
  return (UObject *)&this[-1]._padding_;
}

