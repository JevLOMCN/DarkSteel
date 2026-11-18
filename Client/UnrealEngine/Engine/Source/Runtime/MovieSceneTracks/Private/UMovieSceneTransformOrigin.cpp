// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 6

// StaticClass @ 14658a7a0

UClass * __cdecl UMovieSceneTransformOrigin::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTransformOrigin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTransformOrigin",
               &Z_Registration_Info_UClass_UMovieSceneTransformOrigin.InnerSingleton,
               StaticRegisterNativesUMovieSceneTransformOrigin,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTransformOrigin>,
               InternalVTableHelperCtorCaller<UMovieSceneTransformOrigin>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTransformOrigin.InnerSingleton;
}

// UMovieSceneTransformOrigin @ 14661bbc0

UMovieSceneTransformOrigin * __thiscall
UMovieSceneTransformOrigin::UMovieSceneTransformOrigin
          (UMovieSceneTransformOrigin *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneTransformOrigin__6B_;
  return this;
}

// UMovieSceneTransformOrigin @ 14661bbf0

UMovieSceneTransformOrigin * __thiscall
UMovieSceneTransformOrigin::UMovieSceneTransformOrigin
          (UMovieSceneTransformOrigin *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneTransformOrigin__6B_;
  return this;
}

// ~UMovieSceneTransformOrigin @ 146621e50

void __thiscall
UMovieSceneTransformOrigin::~UMovieSceneTransformOrigin(UMovieSceneTransformOrigin *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 146696f20

UClass * __cdecl UMovieSceneTransformOrigin::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneTransformOrigin.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieSceneTracks",L"MovieSceneTransformOrigin",
               &Z_Registration_Info_UClass_UMovieSceneTransformOrigin.InnerSingleton,
               StaticRegisterNativesUMovieSceneTransformOrigin,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneTransformOrigin>,
               InternalVTableHelperCtorCaller<UMovieSceneTransformOrigin>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneTransformOrigin.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneTransformOrigin @ 1466fe8b0

void __cdecl UMovieSceneTransformOrigin::StaticRegisterNativesUMovieSceneTransformOrigin(void)

{
  return;
}

