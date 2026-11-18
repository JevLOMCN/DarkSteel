// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 1460557e0

UClass * __cdecl UMovieSceneKeyProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneKeyProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneKeyProxy",
               &Z_Registration_Info_UClass_UMovieSceneKeyProxy.InnerSingleton,
               StaticRegisterNativesUMovieSceneKeyProxy,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneKeyProxy>,
               InternalVTableHelperCtorCaller<UMovieSceneKeyProxy>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneKeyProxy.InnerSingleton;
}

// UMovieSceneKeyProxy @ 1460590f0

UMovieSceneKeyProxy * __thiscall
UMovieSceneKeyProxy::UMovieSceneKeyProxy(UMovieSceneKeyProxy *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneKeyProxy__6B_;
  return this;
}

// UMovieSceneKeyProxy @ 146059120

UMovieSceneKeyProxy * __thiscall
UMovieSceneKeyProxy::UMovieSceneKeyProxy(UMovieSceneKeyProxy *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneKeyProxy__6B_;
  return this;
}

// ~UMovieSceneKeyProxy @ 146059660

void __thiscall UMovieSceneKeyProxy::~UMovieSceneKeyProxy(UMovieSceneKeyProxy *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605b840

UClass * __cdecl UMovieSceneKeyProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneKeyProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneKeyProxy",
               &Z_Registration_Info_UClass_UMovieSceneKeyProxy.InnerSingleton,
               StaticRegisterNativesUMovieSceneKeyProxy,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneKeyProxy>,
               InternalVTableHelperCtorCaller<UMovieSceneKeyProxy>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneKeyProxy.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneKeyProxy @ 14605d010

void __cdecl UMovieSceneKeyProxy::StaticRegisterNativesUMovieSceneKeyProxy(void)

{
  return;
}

