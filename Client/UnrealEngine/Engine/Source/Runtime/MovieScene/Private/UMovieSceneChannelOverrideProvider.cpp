// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146054160

UClass * __cdecl UMovieSceneChannelOverrideProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneChannelOverrideProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneChannelOverrideProvider",
               &Z_Registration_Info_UClass_UMovieSceneChannelOverrideProvider.InnerSingleton,
               StaticRegisterNativesUMovieSceneChannelOverrideProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneChannelOverrideProvider>,
               InternalVTableHelperCtorCaller<UMovieSceneChannelOverrideProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneChannelOverrideProvider.InnerSingleton;
}

// UMovieSceneChannelOverrideProvider @ 146058e50

UMovieSceneChannelOverrideProvider * __thiscall
UMovieSceneChannelOverrideProvider::UMovieSceneChannelOverrideProvider
          (UMovieSceneChannelOverrideProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneChannelOverrideProvider__6B_;
  return this;
}

// UMovieSceneChannelOverrideProvider @ 146058e80

UMovieSceneChannelOverrideProvider * __thiscall
UMovieSceneChannelOverrideProvider::UMovieSceneChannelOverrideProvider
          (UMovieSceneChannelOverrideProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneChannelOverrideProvider__6B_;
  return this;
}

// ~UMovieSceneChannelOverrideProvider @ 1460595e0

void __thiscall
UMovieSceneChannelOverrideProvider::~UMovieSceneChannelOverrideProvider
          (UMovieSceneChannelOverrideProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605b310

UClass * __cdecl UMovieSceneChannelOverrideProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneChannelOverrideProvider.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneChannelOverrideProvider",
               &Z_Registration_Info_UClass_UMovieSceneChannelOverrideProvider.InnerSingleton,
               StaticRegisterNativesUMovieSceneChannelOverrideProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneChannelOverrideProvider>,
               InternalVTableHelperCtorCaller<UMovieSceneChannelOverrideProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneChannelOverrideProvider.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneChannelOverrideProvider @ 14605cf70

void __cdecl
UMovieSceneChannelOverrideProvider::StaticRegisterNativesUMovieSceneChannelOverrideProvider(void)

{
  return;
}

