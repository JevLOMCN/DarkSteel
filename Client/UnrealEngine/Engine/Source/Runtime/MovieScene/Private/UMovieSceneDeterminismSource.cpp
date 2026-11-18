// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 1460551c0

UClass * __cdecl UMovieSceneDeterminismSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDeterminismSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneDeterminismSource",
               &Z_Registration_Info_UClass_UMovieSceneDeterminismSource.InnerSingleton,
               StaticRegisterNativesUMovieSceneDeterminismSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneDeterminismSource>,
               InternalVTableHelperCtorCaller<UMovieSceneDeterminismSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDeterminismSource.InnerSingleton;
}

// UMovieSceneDeterminismSource @ 146058fd0

UMovieSceneDeterminismSource * __thiscall
UMovieSceneDeterminismSource::UMovieSceneDeterminismSource
          (UMovieSceneDeterminismSource *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneDeterminismSource__6B_;
  return this;
}

// UMovieSceneDeterminismSource @ 146059000

UMovieSceneDeterminismSource * __thiscall
UMovieSceneDeterminismSource::UMovieSceneDeterminismSource
          (UMovieSceneDeterminismSource *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneDeterminismSource__6B_;
  return this;
}

// ~UMovieSceneDeterminismSource @ 146059630

void __thiscall
UMovieSceneDeterminismSource::~UMovieSceneDeterminismSource(UMovieSceneDeterminismSource *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605b600

UClass * __cdecl UMovieSceneDeterminismSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneDeterminismSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneDeterminismSource",
               &Z_Registration_Info_UClass_UMovieSceneDeterminismSource.InnerSingleton,
               StaticRegisterNativesUMovieSceneDeterminismSource,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneDeterminismSource>,
               InternalVTableHelperCtorCaller<UMovieSceneDeterminismSource>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneDeterminismSource.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneDeterminismSource @ 14605cfe0

void __cdecl UMovieSceneDeterminismSource::StaticRegisterNativesUMovieSceneDeterminismSource(void)

{
  return;
}

