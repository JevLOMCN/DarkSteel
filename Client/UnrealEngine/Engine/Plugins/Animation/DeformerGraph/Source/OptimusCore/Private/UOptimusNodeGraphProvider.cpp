// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e118ac0

UClass * __cdecl UOptimusNodeGraphProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeGraphProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeGraphProvider",
               &Z_Registration_Info_UClass_UOptimusNodeGraphProvider.InnerSingleton,
               StaticRegisterNativesUOptimusNodeGraphProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodeGraphProvider>,
               InternalVTableHelperCtorCaller<UOptimusNodeGraphProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeGraphProvider.InnerSingleton;
}

// UOptimusNodeGraphProvider @ 14e15aa70

UOptimusNodeGraphProvider * __thiscall
UOptimusNodeGraphProvider::UOptimusNodeGraphProvider
          (UOptimusNodeGraphProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNodeGraphProvider__6B_;
  return this;
}

// UOptimusNodeGraphProvider @ 14e15aaa0

UOptimusNodeGraphProvider * __thiscall
UOptimusNodeGraphProvider::UOptimusNodeGraphProvider
          (UOptimusNodeGraphProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusNodeGraphProvider__6B_;
  return this;
}

// ~UOptimusNodeGraphProvider @ 14e162fe0

void __thiscall
UOptimusNodeGraphProvider::~UOptimusNodeGraphProvider(UOptimusNodeGraphProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d6c50

UClass * __cdecl UOptimusNodeGraphProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusNodeGraphProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusNodeGraphProvider",
               &Z_Registration_Info_UClass_UOptimusNodeGraphProvider.InnerSingleton,
               StaticRegisterNativesUOptimusNodeGraphProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusNodeGraphProvider>,
               InternalVTableHelperCtorCaller<UOptimusNodeGraphProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusNodeGraphProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusNodeGraphProvider @ 14e225ba0

void __cdecl UOptimusNodeGraphProvider::StaticRegisterNativesUOptimusNodeGraphProvider(void)

{
  return;
}

