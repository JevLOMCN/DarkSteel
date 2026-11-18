// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 1461662a0

UClass * __cdecl UMovieSceneEvaluationHook::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEvaluationHook.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEvaluationHook",
               &Z_Registration_Info_UClass_UMovieSceneEvaluationHook.InnerSingleton,
               StaticRegisterNativesUMovieSceneEvaluationHook,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEvaluationHook>,
               InternalVTableHelperCtorCaller<UMovieSceneEvaluationHook>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEvaluationHook.InnerSingleton;
}

// UMovieSceneEvaluationHook @ 1461832e0

UMovieSceneEvaluationHook * __thiscall
UMovieSceneEvaluationHook::UMovieSceneEvaluationHook
          (UMovieSceneEvaluationHook *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneEvaluationHook__6B_;
  return this;
}

// UMovieSceneEvaluationHook @ 146183310

UMovieSceneEvaluationHook * __thiscall
UMovieSceneEvaluationHook::UMovieSceneEvaluationHook
          (UMovieSceneEvaluationHook *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneEvaluationHook__6B_;
  return this;
}

// ~UMovieSceneEvaluationHook @ 146185dd0

void __thiscall
UMovieSceneEvaluationHook::~UMovieSceneEvaluationHook(UMovieSceneEvaluationHook *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1461b2e00

UClass * __cdecl UMovieSceneEvaluationHook::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEvaluationHook.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEvaluationHook",
               &Z_Registration_Info_UClass_UMovieSceneEvaluationHook.InnerSingleton,
               StaticRegisterNativesUMovieSceneEvaluationHook,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEvaluationHook>,
               InternalVTableHelperCtorCaller<UMovieSceneEvaluationHook>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEvaluationHook.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneEvaluationHook @ 1461d4940

void __cdecl UMovieSceneEvaluationHook::StaticRegisterNativesUMovieSceneEvaluationHook(void)

{
  return;
}

