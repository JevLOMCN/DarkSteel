// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// StaticClass @ 1467246f0

UClass * __cdecl UMovieSceneParameterSectionExtender::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneParameterSectionExtender.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneParameterSectionExtender",
               &Z_Registration_Info_UClass_UMovieSceneParameterSectionExtender.InnerSingleton,
               StaticRegisterNativesUMovieSceneParameterSectionExtender,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneParameterSectionExtender>,
               InternalVTableHelperCtorCaller<UMovieSceneParameterSectionExtender>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneParameterSectionExtender.InnerSingleton;
}

// UMovieSceneParameterSectionExtender @ 146765d40

UMovieSceneParameterSectionExtender * __thiscall
UMovieSceneParameterSectionExtender::UMovieSceneParameterSectionExtender
          (UMovieSceneParameterSectionExtender *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneParameterSectionExtender__6B_;
  return this;
}

// UMovieSceneParameterSectionExtender @ 146765d70

UMovieSceneParameterSectionExtender * __thiscall
UMovieSceneParameterSectionExtender::UMovieSceneParameterSectionExtender
          (UMovieSceneParameterSectionExtender *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneParameterSectionExtender__6B_;
  return this;
}

// ~UMovieSceneParameterSectionExtender @ 14676ab60

void __thiscall
UMovieSceneParameterSectionExtender::~UMovieSceneParameterSectionExtender
          (UMovieSceneParameterSectionExtender *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1467992e0

UClass * __cdecl UMovieSceneParameterSectionExtender::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneParameterSectionExtender.InnerSingleton == (UClass *)0x0
     ) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneParameterSectionExtender",
               &Z_Registration_Info_UClass_UMovieSceneParameterSectionExtender.InnerSingleton,
               StaticRegisterNativesUMovieSceneParameterSectionExtender,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneParameterSectionExtender>,
               InternalVTableHelperCtorCaller<UMovieSceneParameterSectionExtender>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneParameterSectionExtender.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneParameterSectionExtender @ 1467c2a10

void __cdecl
UMovieSceneParameterSectionExtender::StaticRegisterNativesUMovieSceneParameterSectionExtender(void)

{
  return;
}

