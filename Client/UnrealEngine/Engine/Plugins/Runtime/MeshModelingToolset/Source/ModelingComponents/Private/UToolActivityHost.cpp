// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingComponents
// Functions: 6

// StaticClass @ 14ca3f260

UClass * __cdecl UToolActivityHost::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolActivityHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ToolActivityHost",
               &Z_Registration_Info_UClass_UToolActivityHost.InnerSingleton,
               StaticRegisterNativesUToolActivityHost,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolActivityHost>,
               InternalVTableHelperCtorCaller<UToolActivityHost>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolActivityHost.InnerSingleton;
}

// UToolActivityHost @ 14ca690e0

UToolActivityHost * __thiscall
UToolActivityHost::UToolActivityHost(UToolActivityHost *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UToolActivityHost__6B_;
  return this;
}

// UToolActivityHost @ 14ca69110

UToolActivityHost * __thiscall
UToolActivityHost::UToolActivityHost(UToolActivityHost *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UToolActivityHost__6B_;
  return this;
}

// ~UToolActivityHost @ 14ca6bc60

void __thiscall UToolActivityHost::~UToolActivityHost(UToolActivityHost *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14ca92330

UClass * __cdecl UToolActivityHost::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UToolActivityHost.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelingComponents",L"ToolActivityHost",
               &Z_Registration_Info_UClass_UToolActivityHost.InnerSingleton,
               StaticRegisterNativesUToolActivityHost,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UToolActivityHost>,
               InternalVTableHelperCtorCaller<UToolActivityHost>,local_res8,UInterface::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UToolActivityHost.InnerSingleton;
}

// StaticRegisterNativesUToolActivityHost @ 14caa7310

void __cdecl UToolActivityHost::StaticRegisterNativesUToolActivityHost(void)

{
  return;
}

