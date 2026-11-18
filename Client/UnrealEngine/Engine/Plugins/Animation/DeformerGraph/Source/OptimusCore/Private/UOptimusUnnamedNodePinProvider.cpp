// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e10aa30

UClass * __cdecl UOptimusUnnamedNodePinProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusUnnamedNodePinProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusUnnamedNodePinProvider",
               &Z_Registration_Info_UClass_UOptimusUnnamedNodePinProvider.InnerSingleton,
               StaticRegisterNativesUOptimusUnnamedNodePinProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusUnnamedNodePinProvider>,
               InternalVTableHelperCtorCaller<UOptimusUnnamedNodePinProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusUnnamedNodePinProvider.InnerSingleton;
}

// UOptimusUnnamedNodePinProvider @ 14e15d700

UOptimusUnnamedNodePinProvider * __thiscall
UOptimusUnnamedNodePinProvider::UOptimusUnnamedNodePinProvider
          (UOptimusUnnamedNodePinProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusUnnamedNodePinProvider__6B_;
  return this;
}

// UOptimusUnnamedNodePinProvider @ 14e15d730

UOptimusUnnamedNodePinProvider * __thiscall
UOptimusUnnamedNodePinProvider::UOptimusUnnamedNodePinProvider
          (UOptimusUnnamedNodePinProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusUnnamedNodePinProvider__6B_;
  return this;
}

// ~UOptimusUnnamedNodePinProvider @ 14e164210

void __thiscall
UOptimusUnnamedNodePinProvider::~UOptimusUnnamedNodePinProvider
          (UOptimusUnnamedNodePinProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d9a80

UClass * __cdecl UOptimusUnnamedNodePinProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusUnnamedNodePinProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusUnnamedNodePinProvider",
               &Z_Registration_Info_UClass_UOptimusUnnamedNodePinProvider.InnerSingleton,
               StaticRegisterNativesUOptimusUnnamedNodePinProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusUnnamedNodePinProvider>,
               InternalVTableHelperCtorCaller<UOptimusUnnamedNodePinProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusUnnamedNodePinProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusUnnamedNodePinProvider @ 14e225f80

void __cdecl
UOptimusUnnamedNodePinProvider::StaticRegisterNativesUOptimusUnnamedNodePinProvider(void)

{
  return;
}

