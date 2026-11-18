// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146054a70

UClass * __cdecl UMovieSceneDecoration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneDecoration",
               &Z_Registration_Info_UClass_UMovieSceneDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneDecoration,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneDecoration>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDecoration.InnerSingleton;
}

// UMovieSceneDecoration @ 146058f70

UMovieSceneDecoration * __thiscall
UMovieSceneDecoration::UMovieSceneDecoration(UMovieSceneDecoration *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneDecoration__6B_;
  return this;
}

// UMovieSceneDecoration @ 146058fa0

UMovieSceneDecoration * __thiscall
UMovieSceneDecoration::UMovieSceneDecoration
          (UMovieSceneDecoration *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneDecoration__6B_;
  return this;
}

// ~UMovieSceneDecoration @ 146059620

void __thiscall UMovieSceneDecoration::~UMovieSceneDecoration(UMovieSceneDecoration *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605b540

UClass * __cdecl UMovieSceneDecoration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDecoration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneDecoration",
               &Z_Registration_Info_UClass_UMovieSceneDecoration.InnerSingleton,
               StaticRegisterNativesUMovieSceneDecoration,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneDecoration>,
               InternalVTableHelperCtorCaller<UMovieSceneDecoration>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDecoration.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneDecoration @ 14605cfd0

void __cdecl UMovieSceneDecoration::StaticRegisterNativesUMovieSceneDecoration(void)

{
  return;
}

