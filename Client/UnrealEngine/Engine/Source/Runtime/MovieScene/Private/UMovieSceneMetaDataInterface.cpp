// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146055f10

UClass * __cdecl UMovieSceneMetaDataInterface::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMetaDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneMetaDataInterface",
               &Z_Registration_Info_UClass_UMovieSceneMetaDataInterface.InnerSingleton,
               StaticRegisterNativesUMovieSceneMetaDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMetaDataInterface>,
               InternalVTableHelperCtorCaller<UMovieSceneMetaDataInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMetaDataInterface.InnerSingleton;
}

// UMovieSceneMetaDataInterface @ 1460591b0

UMovieSceneMetaDataInterface * __thiscall
UMovieSceneMetaDataInterface::UMovieSceneMetaDataInterface
          (UMovieSceneMetaDataInterface *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneMetaDataInterface__6B_;
  return this;
}

// UMovieSceneMetaDataInterface @ 1460591e0

UMovieSceneMetaDataInterface * __thiscall
UMovieSceneMetaDataInterface::UMovieSceneMetaDataInterface
          (UMovieSceneMetaDataInterface *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneMetaDataInterface__6B_;
  return this;
}

// ~UMovieSceneMetaDataInterface @ 146059680

void __thiscall
UMovieSceneMetaDataInterface::~UMovieSceneMetaDataInterface(UMovieSceneMetaDataInterface *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605b9c0

UClass * __cdecl UMovieSceneMetaDataInterface::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneMetaDataInterface.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneMetaDataInterface",
               &Z_Registration_Info_UClass_UMovieSceneMetaDataInterface.InnerSingleton,
               StaticRegisterNativesUMovieSceneMetaDataInterface,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneMetaDataInterface>,
               InternalVTableHelperCtorCaller<UMovieSceneMetaDataInterface>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneMetaDataInterface.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneMetaDataInterface @ 14605d030

void __cdecl UMovieSceneMetaDataInterface::StaticRegisterNativesUMovieSceneMetaDataInterface(void)

{
  return;
}

