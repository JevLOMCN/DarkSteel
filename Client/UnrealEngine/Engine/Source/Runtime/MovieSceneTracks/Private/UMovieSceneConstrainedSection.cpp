// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// StaticClass @ 146724ff0

UClass * __cdecl UMovieSceneConstrainedSection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneConstrainedSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneConstrainedSection",
               &Z_Registration_Info_UClass_UMovieSceneConstrainedSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneConstrainedSection,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneConstrainedSection>,
               InternalVTableHelperCtorCaller<UMovieSceneConstrainedSection>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneConstrainedSection.InnerSingleton;
}

// UMovieSceneConstrainedSection @ 146763a00

UMovieSceneConstrainedSection * __thiscall
UMovieSceneConstrainedSection::UMovieSceneConstrainedSection
          (UMovieSceneConstrainedSection *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneConstrainedSection__6B_;
  return this;
}

// UMovieSceneConstrainedSection @ 146763a30

UMovieSceneConstrainedSection * __thiscall
UMovieSceneConstrainedSection::UMovieSceneConstrainedSection
          (UMovieSceneConstrainedSection *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneConstrainedSection__6B_;
  return this;
}

// ~UMovieSceneConstrainedSection @ 14676a2e0

void __thiscall
UMovieSceneConstrainedSection::~UMovieSceneConstrainedSection(UMovieSceneConstrainedSection *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1467984a0

UClass * __cdecl UMovieSceneConstrainedSection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneConstrainedSection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneConstrainedSection",
               &Z_Registration_Info_UClass_UMovieSceneConstrainedSection.InnerSingleton,
               StaticRegisterNativesUMovieSceneConstrainedSection,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneConstrainedSection>,
               InternalVTableHelperCtorCaller<UMovieSceneConstrainedSection>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneConstrainedSection.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneConstrainedSection @ 1467c2850

void __cdecl UMovieSceneConstrainedSection::StaticRegisterNativesUMovieSceneConstrainedSection(void)

{
  return;
}

