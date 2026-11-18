// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146053230

UClass * __cdecl UMovieSceneCachedTrack::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCachedTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCachedTrack",
               &Z_Registration_Info_UClass_UMovieSceneCachedTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCachedTrack,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCachedTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCachedTrack>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCachedTrack.InnerSingleton;
}

// UMovieSceneCachedTrack @ 146058d90

UMovieSceneCachedTrack * __thiscall
UMovieSceneCachedTrack::UMovieSceneCachedTrack(UMovieSceneCachedTrack *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneCachedTrack__6B_;
  return this;
}

// UMovieSceneCachedTrack @ 146058dc0

UMovieSceneCachedTrack * __thiscall
UMovieSceneCachedTrack::UMovieSceneCachedTrack
          (UMovieSceneCachedTrack *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneCachedTrack__6B_;
  return this;
}

// ~UMovieSceneCachedTrack @ 1460595c0

void __thiscall UMovieSceneCachedTrack::~UMovieSceneCachedTrack(UMovieSceneCachedTrack *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605b190

UClass * __cdecl UMovieSceneCachedTrack::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneCachedTrack.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneCachedTrack",
               &Z_Registration_Info_UClass_UMovieSceneCachedTrack.InnerSingleton,
               StaticRegisterNativesUMovieSceneCachedTrack,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneCachedTrack>,
               InternalVTableHelperCtorCaller<UMovieSceneCachedTrack>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneCachedTrack.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneCachedTrack @ 14605cf50

void __cdecl UMovieSceneCachedTrack::StaticRegisterNativesUMovieSceneCachedTrack(void)

{
  return;
}

