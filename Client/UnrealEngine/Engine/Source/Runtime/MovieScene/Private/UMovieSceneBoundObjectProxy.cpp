// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 6

// StaticClass @ 146053890

UClass * __cdecl UMovieSceneBoundObjectProxy::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBoundObjectProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBoundObjectProxy",
               &Z_Registration_Info_UClass_UMovieSceneBoundObjectProxy.InnerSingleton,
               StaticRegisterNativesUMovieSceneBoundObjectProxy,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneBoundObjectProxy>,
               InternalVTableHelperCtorCaller<UMovieSceneBoundObjectProxy>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBoundObjectProxy.InnerSingleton;
}

// UMovieSceneBoundObjectProxy @ 146058d30

UMovieSceneBoundObjectProxy * __thiscall
UMovieSceneBoundObjectProxy::UMovieSceneBoundObjectProxy
          (UMovieSceneBoundObjectProxy *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneBoundObjectProxy__6B_;
  return this;
}

// UMovieSceneBoundObjectProxy @ 146058d60

UMovieSceneBoundObjectProxy * __thiscall
UMovieSceneBoundObjectProxy::UMovieSceneBoundObjectProxy
          (UMovieSceneBoundObjectProxy *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UMovieSceneBoundObjectProxy__6B_;
  return this;
}

// ~UMovieSceneBoundObjectProxy @ 1460595b0

void __thiscall
UMovieSceneBoundObjectProxy::~UMovieSceneBoundObjectProxy(UMovieSceneBoundObjectProxy *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14605b0d0

UClass * __cdecl UMovieSceneBoundObjectProxy::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMovieSceneBoundObjectProxy.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MovieScene",L"MovieSceneBoundObjectProxy",
               &Z_Registration_Info_UClass_UMovieSceneBoundObjectProxy.InnerSingleton,
               StaticRegisterNativesUMovieSceneBoundObjectProxy,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UMovieSceneBoundObjectProxy>,
               InternalVTableHelperCtorCaller<UMovieSceneBoundObjectProxy>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMovieSceneBoundObjectProxy.InnerSingleton;
}

// StaticRegisterNativesUMovieSceneBoundObjectProxy @ 14605cf40

void __cdecl UMovieSceneBoundObjectProxy::StaticRegisterNativesUMovieSceneBoundObjectProxy(void)

{
  return;
}

