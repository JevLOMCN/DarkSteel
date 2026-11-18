// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e1198f0

UClass * __cdecl UOptimusNodePairProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodePairProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodePairProvider",
               &Z_Registration_Info_UClass_UOptimusNodePairProvider.InnerSingleton,
               StaticRegisterNativesUOptimusNodePairProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodePairProvider>,
               InternalVTableHelperCtorCaller<UOptimusNodePairProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodePairProvider.InnerSingleton;
}

// UOptimusNodePairProvider @ 14e15ab50

UOptimusNodePairProvider * __thiscall
UOptimusNodePairProvider::UOptimusNodePairProvider
          (UOptimusNodePairProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNodePairProvider__6B_;
  return this;
}

// UOptimusNodePairProvider @ 14e15ab80

UOptimusNodePairProvider * __thiscall
UOptimusNodePairProvider::UOptimusNodePairProvider
          (UOptimusNodePairProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNodePairProvider__6B_;
  return this;
}

// ~UOptimusNodePairProvider @ 14e163030

void __thiscall UOptimusNodePairProvider::~UOptimusNodePairProvider(UOptimusNodePairProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d6e70

UClass * __cdecl UOptimusNodePairProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodePairProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodePairProvider",
               &Z_Registration_Info_UClass_UOptimusNodePairProvider.InnerSingleton,
               StaticRegisterNativesUOptimusNodePairProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodePairProvider>,
               InternalVTableHelperCtorCaller<UOptimusNodePairProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodePairProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusNodePairProvider @ 14e225bd0

void __cdecl UOptimusNodePairProvider::StaticRegisterNativesUOptimusNodePairProvider(void)

{
  return;
}

