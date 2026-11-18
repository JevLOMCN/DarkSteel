// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 8

// StaticClass @ 146166020

UClass * __cdecl UMovieSceneEasingExternalCurve::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEasingExternalCurve",
               &Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve.InnerSingleton,
               StaticRegisterNativesUMovieSceneEasingExternalCurve,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEasingExternalCurve>,
               InternalVTableHelperCtorCaller<UMovieSceneEasingExternalCurve>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve.InnerSingleton;
}

// UMovieSceneEasingExternalCurve @ 146183260

UMovieSceneEasingExternalCurve * __thiscall
UMovieSceneEasingExternalCurve::UMovieSceneEasingExternalCurve
          (UMovieSceneEasingExternalCurve *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Curve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEasingFunction__;
  return this;
}

// UMovieSceneEasingExternalCurve @ 1461832a0

UMovieSceneEasingExternalCurve * __thiscall
UMovieSceneEasingExternalCurve::UMovieSceneEasingExternalCurve
          (UMovieSceneEasingExternalCurve *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->Curve).field0_0x0.DebugPtr = (UCurveFloat *)0x0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneEasingFunction__;
  return this;
}

// ~UMovieSceneEasingExternalCurve @ 146185db0

void __thiscall
UMovieSceneEasingExternalCurve::~UMovieSceneEasingExternalCurve
          (UMovieSceneEasingExternalCurve *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IMovieSceneEasingFunction__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// Evaluate @ 1461a2640

float __thiscall
UMovieSceneEasingExternalCurve::Evaluate(UMovieSceneEasingExternalCurve *this,float param_1)

{
  float fVar1;
  
  if (this->_padding_ == 0) {
    return 0.0;
  }
  fVar1 = FRichCurve::Eval((FRichCurve *)(this->_padding_ + 0x30),param_1,0.0);
  return fVar1;
}

// GetPrivateStaticClass @ 1461b2d50

UClass * __cdecl UMovieSceneEasingExternalCurve::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEasingExternalCurve",
               &Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve.InnerSingleton,
               StaticRegisterNativesUMovieSceneEasingExternalCurve,0x38,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMovieSceneEasingExternalCurve>,
               InternalVTableHelperCtorCaller<UMovieSceneEasingExternalCurve>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEasingExternalCurve.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneEasingExternalCurve @ 1461d4930

void __cdecl
UMovieSceneEasingExternalCurve::StaticRegisterNativesUMovieSceneEasingExternalCurve(void)

{
  return;
}

// _getUObject @ 1461e22a0

UObject * __thiscall
UMovieSceneEasingExternalCurve::_getUObject(UMovieSceneEasingExternalCurve *this)

{
  return (UObject *)&this[-1]._padding_;
}

