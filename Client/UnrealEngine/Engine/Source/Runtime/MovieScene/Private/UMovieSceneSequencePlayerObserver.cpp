// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 1460566d0

UClass * __cdecl UMovieSceneSequencePlayerObserver::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequencePlayerObserver.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSequencePlayerObserver",
               &Z_Registration_Info_UClass_UMovieSceneSequencePlayerObserver.InnerSingleton,
               StaticRegisterNativesUMovieSceneSequencePlayerObserver,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSequencePlayerObserver>,
               InternalVTableHelperCtorCaller<UMovieSceneSequencePlayerObserver>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequencePlayerObserver.InnerSingleton;
}

// UMovieSceneSequencePlayerObserver @ 146059390

UMovieSceneSequencePlayerObserver * __thiscall
UMovieSceneSequencePlayerObserver::UMovieSceneSequencePlayerObserver
          (UMovieSceneSequencePlayerObserver *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneSequencePlayerObserver__6B_;
  return this;
}

// UMovieSceneSequencePlayerObserver @ 1460593c0

UMovieSceneSequencePlayerObserver * __thiscall
UMovieSceneSequencePlayerObserver::UMovieSceneSequencePlayerObserver
          (UMovieSceneSequencePlayerObserver *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneSequencePlayerObserver__6B_;
  return this;
}

// ~UMovieSceneSequencePlayerObserver @ 1460596f0

void __thiscall
UMovieSceneSequencePlayerObserver::~UMovieSceneSequencePlayerObserver
          (UMovieSceneSequencePlayerObserver *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605bd80

UClass * __cdecl UMovieSceneSequencePlayerObserver::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneSequencePlayerObserver.InnerSingleton == (UClass *)0x0)
  {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneSequencePlayerObserver",
               &Z_Registration_Info_UClass_UMovieSceneSequencePlayerObserver.InnerSingleton,
               StaticRegisterNativesUMovieSceneSequencePlayerObserver,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneSequencePlayerObserver>,
               InternalVTableHelperCtorCaller<UMovieSceneSequencePlayerObserver>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneSequencePlayerObserver.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneSequencePlayerObserver @ 14605d080

void __cdecl
UMovieSceneSequencePlayerObserver::StaticRegisterNativesUMovieSceneSequencePlayerObserver(void)

{
  return;
}

