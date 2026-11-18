// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// StaticClass @ 146067bb0

UClass * __cdecl UMovieSceneMuteSoloDecoration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMuteSoloDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneMuteSoloDecoration",
               &Z_Registration_Info_UClass_UMovieSceneMuteSoloDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneMuteSoloDecoration,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMuteSoloDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneMuteSoloDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMuteSoloDecoration.InnerSingleton;
}

// UMovieSceneMuteSoloDecoration @ 146095830

UMovieSceneMuteSoloDecoration * __thiscall
UMovieSceneMuteSoloDecoration::UMovieSceneMuteSoloDecoration
          (UMovieSceneMuteSoloDecoration *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  (this->MuteSoloData).bMuted = false;
  (this->MuteSoloData).bSoloed = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneDecoration__;
  return this;
}

// UMovieSceneMuteSoloDecoration @ 146095870

UMovieSceneMuteSoloDecoration * __thiscall
UMovieSceneMuteSoloDecoration::UMovieSceneMuteSoloDecoration(UMovieSceneMuteSoloDecoration *this)

{
  UObject::UObject((UObject *)this);
  (this->MuteSoloData).bMuted = false;
  (this->MuteSoloData).bSoloed = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMovieSceneDecoration__;
  UObjectBase::AtomicallySetFlags((UObjectBase *)this,RF_Transient);
  return this;
}

// ~UMovieSceneMuteSoloDecoration @ 1460985c0

void __thiscall
UMovieSceneMuteSoloDecoration::~UMovieSceneMuteSoloDecoration(UMovieSceneMuteSoloDecoration *this)

{
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&___7IMovieSceneDecoration__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1460cfa60

UClass * __cdecl UMovieSceneMuteSoloDecoration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMuteSoloDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneMuteSoloDecoration",
               &Z_Registration_Info_UClass_UMovieSceneMuteSoloDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneMuteSoloDecoration,0x38,8,
               CLASS_Intrinsic|CLASS_Transient,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMuteSoloDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneMuteSoloDecoration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMuteSoloDecoration.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneMuteSoloDecoration @ 1460fa2a0

void __cdecl UMovieSceneMuteSoloDecoration::StaticRegisterNativesUMovieSceneMuteSoloDecoration(void)

{
  return;
}

// _getUObject @ 146100860

UObject * __thiscall UMovieSceneMuteSoloDecoration::_getUObject(UMovieSceneMuteSoloDecoration *this)

{
  return (UObject *)&this[-1]._padding_;
}

