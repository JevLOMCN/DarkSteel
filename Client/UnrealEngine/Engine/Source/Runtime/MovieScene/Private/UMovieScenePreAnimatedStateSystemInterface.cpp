// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146101e20

UClass * __cdecl UMovieScenePreAnimatedStateSystemInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieScenePreAnimatedStateSystemInterface",
               &Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.InnerSingleton
               ,StaticRegisterNativesUMovieScenePreAnimatedStateSystemInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScenePreAnimatedStateSystemInterface>,
               InternalVTableHelperCtorCaller<UMovieScenePreAnimatedStateSystemInterface>,local_res8
               ,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.InnerSingleton;
}

// UMovieScenePreAnimatedStateSystemInterface @ 14611ba20

UMovieScenePreAnimatedStateSystemInterface * __thiscall
UMovieScenePreAnimatedStateSystemInterface::UMovieScenePreAnimatedStateSystemInterface
          (UMovieScenePreAnimatedStateSystemInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieScenePreAnimatedStateSystemInterface__6B_;
  return this;
}

// UMovieScenePreAnimatedStateSystemInterface @ 14611ba50

UMovieScenePreAnimatedStateSystemInterface * __thiscall
UMovieScenePreAnimatedStateSystemInterface::UMovieScenePreAnimatedStateSystemInterface
          (UMovieScenePreAnimatedStateSystemInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieScenePreAnimatedStateSystemInterface__6B_;
  return this;
}

// ~UMovieScenePreAnimatedStateSystemInterface @ 14611e910

void __thiscall
UMovieScenePreAnimatedStateSystemInterface::~UMovieScenePreAnimatedStateSystemInterface
          (UMovieScenePreAnimatedStateSystemInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14613c5c0

UClass * __cdecl UMovieScenePreAnimatedStateSystemInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieScenePreAnimatedStateSystemInterface",
               &Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.InnerSingleton
               ,StaticRegisterNativesUMovieScenePreAnimatedStateSystemInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieScenePreAnimatedStateSystemInterface>,
               InternalVTableHelperCtorCaller<UMovieScenePreAnimatedStateSystemInterface>,local_res8
               ,UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieScenePreAnimatedStateSystemInterface.InnerSingleton;
}

// StaticRegisterNativesUMovieScenePreAnimatedStateSystemInterface @ 146155820

void __cdecl
UMovieScenePreAnimatedStateSystemInterface::
StaticRegisterNativesUMovieScenePreAnimatedStateSystemInterface(void)

{
  return;
}

