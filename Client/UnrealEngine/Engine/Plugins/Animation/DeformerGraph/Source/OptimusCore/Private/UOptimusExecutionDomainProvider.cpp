// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e119a50

UClass * __cdecl UOptimusExecutionDomainProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusExecutionDomainProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusExecutionDomainProvider",
               &Z_Registration_Info_UClass_UOptimusExecutionDomainProvider.InnerSingleton,
               StaticRegisterNativesUOptimusExecutionDomainProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusExecutionDomainProvider>,
               InternalVTableHelperCtorCaller<UOptimusExecutionDomainProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusExecutionDomainProvider.InnerSingleton;
}

// UOptimusExecutionDomainProvider @ 14e159ed0

UOptimusExecutionDomainProvider * __thiscall
UOptimusExecutionDomainProvider::UOptimusExecutionDomainProvider
          (UOptimusExecutionDomainProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusExecutionDomainProvider__6B_;
  return this;
}

// UOptimusExecutionDomainProvider @ 14e159f00

UOptimusExecutionDomainProvider * __thiscall
UOptimusExecutionDomainProvider::UOptimusExecutionDomainProvider
          (UOptimusExecutionDomainProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusExecutionDomainProvider__6B_;
  return this;
}

// ~UOptimusExecutionDomainProvider @ 14e162b70

void __thiscall
UOptimusExecutionDomainProvider::~UOptimusExecutionDomainProvider
          (UOptimusExecutionDomainProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d5e30

UClass * __cdecl UOptimusExecutionDomainProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusExecutionDomainProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusExecutionDomainProvider",
               &Z_Registration_Info_UClass_UOptimusExecutionDomainProvider.InnerSingleton,
               StaticRegisterNativesUOptimusExecutionDomainProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusExecutionDomainProvider>,
               InternalVTableHelperCtorCaller<UOptimusExecutionDomainProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusExecutionDomainProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusExecutionDomainProvider @ 14e2259e0

void __cdecl
UOptimusExecutionDomainProvider::StaticRegisterNativesUOptimusExecutionDomainProvider(void)

{
  return;
}

