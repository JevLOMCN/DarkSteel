// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 1460670a0

UClass * __cdecl UMovieSceneEntityProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntityProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntityProvider",
               &Z_Registration_Info_UClass_UMovieSceneEntityProvider.InnerSingleton,
               StaticRegisterNativesUMovieSceneEntityProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEntityProvider>,
               InternalVTableHelperCtorCaller<UMovieSceneEntityProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntityProvider.InnerSingleton;
}

// UMovieSceneEntityProvider @ 1460955f0

UMovieSceneEntityProvider * __thiscall
UMovieSceneEntityProvider::UMovieSceneEntityProvider
          (UMovieSceneEntityProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneEntityProvider__6B_;
  return this;
}

// UMovieSceneEntityProvider @ 146095620

UMovieSceneEntityProvider * __thiscall
UMovieSceneEntityProvider::UMovieSceneEntityProvider
          (UMovieSceneEntityProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneEntityProvider__6B_;
  return this;
}

// ~UMovieSceneEntityProvider @ 146098510

void __thiscall
UMovieSceneEntityProvider::~UMovieSceneEntityProvider(UMovieSceneEntityProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 1460cf770

UClass * __cdecl UMovieSceneEntityProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneEntityProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneEntityProvider",
               &Z_Registration_Info_UClass_UMovieSceneEntityProvider.InnerSingleton,
               StaticRegisterNativesUMovieSceneEntityProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneEntityProvider>,
               InternalVTableHelperCtorCaller<UMovieSceneEntityProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneEntityProvider.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneEntityProvider @ 1460fa260

void __cdecl UMovieSceneEntityProvider::StaticRegisterNativesUMovieSceneEntityProvider(void)

{
  return;
}

