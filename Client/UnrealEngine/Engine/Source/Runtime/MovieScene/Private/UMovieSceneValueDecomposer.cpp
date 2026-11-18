// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146065fc0

UClass * __cdecl UMovieSceneValueDecomposer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneValueDecomposer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneValueDecomposer",
               &Z_Registration_Info_UClass_UMovieSceneValueDecomposer.InnerSingleton,
               StaticRegisterNativesUMovieSceneValueDecomposer,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneValueDecomposer>,
               InternalVTableHelperCtorCaller<UMovieSceneValueDecomposer>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneValueDecomposer.InnerSingleton;
}

// UMovieSceneValueDecomposer @ 146095f10

UMovieSceneValueDecomposer * __thiscall
UMovieSceneValueDecomposer::UMovieSceneValueDecomposer
          (UMovieSceneValueDecomposer *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneValueDecomposer__6B_;
  return this;
}

// UMovieSceneValueDecomposer @ 146095f40

UMovieSceneValueDecomposer * __thiscall
UMovieSceneValueDecomposer::UMovieSceneValueDecomposer
          (UMovieSceneValueDecomposer *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneValueDecomposer__6B_;
  return this;
}

// ~UMovieSceneValueDecomposer @ 146098860

void __thiscall
UMovieSceneValueDecomposer::~UMovieSceneValueDecomposer(UMovieSceneValueDecomposer *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1460d00d0

UClass * __cdecl UMovieSceneValueDecomposer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneValueDecomposer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneValueDecomposer",
               &Z_Registration_Info_UClass_UMovieSceneValueDecomposer.InnerSingleton,
               StaticRegisterNativesUMovieSceneValueDecomposer,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneValueDecomposer>,
               InternalVTableHelperCtorCaller<UMovieSceneValueDecomposer>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneValueDecomposer.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneValueDecomposer @ 1460fa330

void __cdecl UMovieSceneValueDecomposer::StaticRegisterNativesUMovieSceneValueDecomposer(void)

{
  return;
}

