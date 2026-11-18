// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146162ba0

UClass * __cdecl UMovieSceneCustomClockSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCustomClockSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCustomClockSource",
               &Z_Registration_Info_UClass_UMovieSceneCustomClockSource.InnerSingleton,
               StaticRegisterNativesUMovieSceneCustomClockSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCustomClockSource>,
               InternalVTableHelperCtorCaller<UMovieSceneCustomClockSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCustomClockSource.InnerSingleton;
}

// UMovieSceneCustomClockSource @ 146183200

UMovieSceneCustomClockSource * __thiscall
UMovieSceneCustomClockSource::UMovieSceneCustomClockSource
          (UMovieSceneCustomClockSource *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneCustomClockSource__6B_;
  return this;
}

// UMovieSceneCustomClockSource @ 146183230

UMovieSceneCustomClockSource * __thiscall
UMovieSceneCustomClockSource::UMovieSceneCustomClockSource
          (UMovieSceneCustomClockSource *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneCustomClockSource__6B_;
  return this;
}

// ~UMovieSceneCustomClockSource @ 146185da0

void __thiscall
UMovieSceneCustomClockSource::~UMovieSceneCustomClockSource(UMovieSceneCustomClockSource *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1461b2c90

UClass * __cdecl UMovieSceneCustomClockSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCustomClockSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCustomClockSource",
               &Z_Registration_Info_UClass_UMovieSceneCustomClockSource.InnerSingleton,
               StaticRegisterNativesUMovieSceneCustomClockSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCustomClockSource>,
               InternalVTableHelperCtorCaller<UMovieSceneCustomClockSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCustomClockSource.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneCustomClockSource @ 1461d48f0

void __cdecl UMovieSceneCustomClockSource::StaticRegisterNativesUMovieSceneCustomClockSource(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UMovieSceneCustomClockSource_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

