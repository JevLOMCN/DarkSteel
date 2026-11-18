// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146054550

UClass * __cdecl UMovieSceneChannelOwner::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneChannelOwner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneChannelOwner",
               &Z_Registration_Info_UClass_UMovieSceneChannelOwner.InnerSingleton,
               StaticRegisterNativesUMovieSceneChannelOwner,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneChannelOwner>,
               InternalVTableHelperCtorCaller<UMovieSceneChannelOwner>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneChannelOwner.InnerSingleton;
}

// UMovieSceneChannelOwner @ 146058eb0

UMovieSceneChannelOwner * __thiscall
UMovieSceneChannelOwner::UMovieSceneChannelOwner
          (UMovieSceneChannelOwner *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneChannelOwner__6B_;
  return this;
}

// UMovieSceneChannelOwner @ 146058ee0

UMovieSceneChannelOwner * __thiscall
UMovieSceneChannelOwner::UMovieSceneChannelOwner
          (UMovieSceneChannelOwner *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneChannelOwner__6B_;
  return this;
}

// ~UMovieSceneChannelOwner @ 1460595f0

void __thiscall UMovieSceneChannelOwner::~UMovieSceneChannelOwner(UMovieSceneChannelOwner *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605b3d0

UClass * __cdecl UMovieSceneChannelOwner::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneChannelOwner.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneChannelOwner",
               &Z_Registration_Info_UClass_UMovieSceneChannelOwner.InnerSingleton,
               StaticRegisterNativesUMovieSceneChannelOwner,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneChannelOwner>,
               InternalVTableHelperCtorCaller<UMovieSceneChannelOwner>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneChannelOwner.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneChannelOwner @ 14605cf80

void __cdecl UMovieSceneChannelOwner::StaticRegisterNativesUMovieSceneChannelOwner(void)

{
  return;
}

