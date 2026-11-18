// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// StaticClass @ 146881970

UClass * __cdecl UMovieSceneHierarchicalEasingFinalizationSystem::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneHierarchicalEasingFinalizationSystem",
               &Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneHierarchicalEasingFinalizationSystem,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneHierarchicalEasingFinalizationSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneHierarchicalEasingFinalizationSystem>,
               local_res8,UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem.InnerSingleton;
}

// UMovieSceneHierarchicalEasingFinalizationSystem @ 14689e320

UMovieSceneHierarchicalEasingFinalizationSystem * __thiscall
UMovieSceneHierarchicalEasingFinalizationSystem::UMovieSceneHierarchicalEasingFinalizationSystem
          (UMovieSceneHierarchicalEasingFinalizationSystem *this,FVTableHelper *param_1)

{
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneHierarchicalEasingFinalizationSystem__6B_;
  return this;
}

// UMovieSceneHierarchicalEasingFinalizationSystem @ 14689e350

UMovieSceneHierarchicalEasingFinalizationSystem * __thiscall
UMovieSceneHierarchicalEasingFinalizationSystem::UMovieSceneHierarchicalEasingFinalizationSystem
          (UMovieSceneHierarchicalEasingFinalizationSystem *this,FObjectInitializer *param_1)

{
  UMovieSceneEntityInstantiatorSystem::UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneHierarchicalEasingFinalizationSystem__6B_;
  return this;
}

// ~UMovieSceneHierarchicalEasingFinalizationSystem @ 1468a0b80

void __thiscall
UMovieSceneHierarchicalEasingFinalizationSystem::~UMovieSceneHierarchicalEasingFinalizationSystem
          (UMovieSceneHierarchicalEasingFinalizationSystem *this)

{
  *(undefined ***)this = &___7UMovieSceneHierarchicalEasingFinalizationSystem__6B_;
  UMovieSceneEntityInstantiatorSystem::~UMovieSceneEntityInstantiatorSystem
            ((UMovieSceneEntityInstantiatorSystem *)this);
  return;
}

// GetPrivateStaticClass @ 1468b7980

UClass * __cdecl UMovieSceneHierarchicalEasingFinalizationSystem::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneHierarchicalEasingFinalizationSystem",
               &Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem.
                InnerSingleton,StaticRegisterNativesUMovieSceneHierarchicalEasingFinalizationSystem,
               0x48,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneHierarchicalEasingFinalizationSystem>,
               InternalVTableHelperCtorCaller<UMovieSceneHierarchicalEasingFinalizationSystem>,
               local_res8,UMovieSceneEntityInstantiatorSystem::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneHierarchicalEasingFinalizationSystem.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneHierarchicalEasingFinalizationSystem @ 1468d0130

void __cdecl
UMovieSceneHierarchicalEasingFinalizationSystem::
StaticRegisterNativesUMovieSceneHierarchicalEasingFinalizationSystem(void)

{
  return;
}

