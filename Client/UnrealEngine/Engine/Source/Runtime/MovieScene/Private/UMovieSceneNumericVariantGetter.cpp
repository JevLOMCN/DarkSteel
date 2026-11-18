// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 7

// StaticClass @ 1460546f0

UClass * __cdecl UMovieSceneNumericVariantGetter::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNumericVariantGetter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneNumericVariantGetter",
               &Z_Registration_Info_UClass_UMovieSceneNumericVariantGetter.InnerSingleton,
               StaticRegisterNativesUMovieSceneNumericVariantGetter,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneNumericVariantGetter>,
               InternalVTableHelperCtorCaller<UMovieSceneNumericVariantGetter>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNumericVariantGetter.InnerSingleton;
}

// UMovieSceneNumericVariantGetter @ 146059210

UMovieSceneNumericVariantGetter * __thiscall
UMovieSceneNumericVariantGetter::UMovieSceneNumericVariantGetter
          (UMovieSceneNumericVariantGetter *this,FVTableHelper *param_1)

{
  UMovieSceneSignedObject::UMovieSceneSignedObject((UMovieSceneSignedObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneNumericVariantGetter__6B_;
  (this->ReferenceToSelf).field0_0x0.DebugPtr = (UMovieSceneNumericVariantGetter *)0x0;
  return this;
}

// UMovieSceneNumericVariantGetter @ 146059240

UMovieSceneNumericVariantGetter * __thiscall
UMovieSceneNumericVariantGetter::UMovieSceneNumericVariantGetter
          (UMovieSceneNumericVariantGetter *this,FObjectInitializer *param_1)

{
  UMovieSceneSignedObject::UMovieSceneSignedObject((UMovieSceneSignedObject *)this,param_1);
  this->_padding_ = (longlong)&___7UMovieSceneNumericVariantGetter__6B_;
  (this->ReferenceToSelf).field0_0x0.DebugPtr = (UMovieSceneNumericVariantGetter *)0x0;
  return this;
}

// ~UMovieSceneNumericVariantGetter @ 146059690

void __thiscall
UMovieSceneNumericVariantGetter::~UMovieSceneNumericVariantGetter
          (UMovieSceneNumericVariantGetter *this)

{
  this->_padding_ = (longlong)&___7UMovieSceneNumericVariantGetter__6B_;
  UMovieSceneSignedObject::~UMovieSceneSignedObject((UMovieSceneSignedObject *)this);
  return;
}

// GetPrivateStaticClass @ 14605ba80

UClass * __cdecl UMovieSceneNumericVariantGetter::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneNumericVariantGetter.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneNumericVariantGetter",
               &Z_Registration_Info_UClass_UMovieSceneNumericVariantGetter.InnerSingleton,
               StaticRegisterNativesUMovieSceneNumericVariantGetter,0x68,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneNumericVariantGetter>,
               InternalVTableHelperCtorCaller<UMovieSceneNumericVariantGetter>,local_res8,
               UMovieSceneSignedObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneNumericVariantGetter.InnerSingleton;
}

// GetValue @ 14605c1b0

double __thiscall UMovieSceneNumericVariantGetter::GetValue(UMovieSceneNumericVariantGetter *this)

{
  return 0.0;
}

// StaticRegisterNativesUMovieSceneNumericVariantGetter @ 14605d040

void __cdecl
UMovieSceneNumericVariantGetter::StaticRegisterNativesUMovieSceneNumericVariantGetter(void)

{
  return;
}

