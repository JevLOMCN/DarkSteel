// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146054b70

UClass * __cdecl UMovieSceneLifetimeDecoration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLifetimeDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneLifetimeDecoration",
               &Z_Registration_Info_UClass_UMovieSceneLifetimeDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneLifetimeDecoration,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneLifetimeDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneLifetimeDecoration>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLifetimeDecoration.InnerSingleton;
}

// UMovieSceneLifetimeDecoration @ 146059150

UMovieSceneLifetimeDecoration * __thiscall
UMovieSceneLifetimeDecoration::UMovieSceneLifetimeDecoration
          (UMovieSceneLifetimeDecoration *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneLifetimeDecoration__6B_;
  return this;
}

// UMovieSceneLifetimeDecoration @ 146059180

UMovieSceneLifetimeDecoration * __thiscall
UMovieSceneLifetimeDecoration::UMovieSceneLifetimeDecoration
          (UMovieSceneLifetimeDecoration *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneLifetimeDecoration__6B_;
  return this;
}

// ~UMovieSceneLifetimeDecoration @ 146059670

void __thiscall
UMovieSceneLifetimeDecoration::~UMovieSceneLifetimeDecoration(UMovieSceneLifetimeDecoration *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605b900

UClass * __cdecl UMovieSceneLifetimeDecoration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneLifetimeDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneLifetimeDecoration",
               &Z_Registration_Info_UClass_UMovieSceneLifetimeDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneLifetimeDecoration,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneLifetimeDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneLifetimeDecoration>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneLifetimeDecoration.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneLifetimeDecoration @ 14605d020

void __cdecl UMovieSceneLifetimeDecoration::StaticRegisterNativesUMovieSceneLifetimeDecoration(void)

{
  return;
}

