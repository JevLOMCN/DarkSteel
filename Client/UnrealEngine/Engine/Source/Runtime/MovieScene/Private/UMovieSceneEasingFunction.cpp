// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146053790

UClass * __cdecl UMovieSceneEasingFunction::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEasingFunction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEasingFunction",
               &Z_Registration_Info_UClass_UMovieSceneEasingFunction.InnerSingleton,
               StaticRegisterNativesUMovieSceneEasingFunction,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEasingFunction>,
               InternalVTableHelperCtorCaller<UMovieSceneEasingFunction>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEasingFunction.InnerSingleton;
}

// UMovieSceneEasingFunction @ 146059030

UMovieSceneEasingFunction * __thiscall
UMovieSceneEasingFunction::UMovieSceneEasingFunction
          (UMovieSceneEasingFunction *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneEasingFunction__6B_;
  return this;
}

// UMovieSceneEasingFunction @ 146059060

UMovieSceneEasingFunction * __thiscall
UMovieSceneEasingFunction::UMovieSceneEasingFunction
          (UMovieSceneEasingFunction *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneEasingFunction__6B_;
  return this;
}

// ~UMovieSceneEasingFunction @ 146059640

void __thiscall
UMovieSceneEasingFunction::~UMovieSceneEasingFunction(UMovieSceneEasingFunction *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605b6c0

UClass * __cdecl UMovieSceneEasingFunction::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEasingFunction.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEasingFunction",
               &Z_Registration_Info_UClass_UMovieSceneEasingFunction.InnerSingleton,
               StaticRegisterNativesUMovieSceneEasingFunction,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEasingFunction>,
               InternalVTableHelperCtorCaller<UMovieSceneEasingFunction>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEasingFunction.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneEasingFunction @ 14605cff0

void __cdecl UMovieSceneEasingFunction::StaticRegisterNativesUMovieSceneEasingFunction(void)

{
  return;
}

