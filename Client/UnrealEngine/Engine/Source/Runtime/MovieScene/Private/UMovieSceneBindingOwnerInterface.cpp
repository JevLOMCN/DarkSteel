// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146053030

UClass * __cdecl UMovieSceneBindingOwnerInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingOwnerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBindingOwnerInterface",
               &Z_Registration_Info_UClass_UMovieSceneBindingOwnerInterface.InnerSingleton,
               StaticRegisterNativesUMovieSceneBindingOwnerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneBindingOwnerInterface>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingOwnerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingOwnerInterface.InnerSingleton;
}

// UMovieSceneBindingOwnerInterface @ 146058c70

UMovieSceneBindingOwnerInterface * __thiscall
UMovieSceneBindingOwnerInterface::UMovieSceneBindingOwnerInterface
          (UMovieSceneBindingOwnerInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneBindingOwnerInterface__6B_;
  return this;
}

// UMovieSceneBindingOwnerInterface @ 146058ca0

UMovieSceneBindingOwnerInterface * __thiscall
UMovieSceneBindingOwnerInterface::UMovieSceneBindingOwnerInterface
          (UMovieSceneBindingOwnerInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneBindingOwnerInterface__6B_;
  return this;
}

// ~UMovieSceneBindingOwnerInterface @ 146059590

void __thiscall
UMovieSceneBindingOwnerInterface::~UMovieSceneBindingOwnerInterface
          (UMovieSceneBindingOwnerInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605af50

UClass * __cdecl UMovieSceneBindingOwnerInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBindingOwnerInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBindingOwnerInterface",
               &Z_Registration_Info_UClass_UMovieSceneBindingOwnerInterface.InnerSingleton,
               StaticRegisterNativesUMovieSceneBindingOwnerInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneBindingOwnerInterface>,
               InternalVTableHelperCtorCaller<UMovieSceneBindingOwnerInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBindingOwnerInterface.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneBindingOwnerInterface @ 14605cf20

void __cdecl
UMovieSceneBindingOwnerInterface::StaticRegisterNativesUMovieSceneBindingOwnerInterface(void)

{
  return;
}

