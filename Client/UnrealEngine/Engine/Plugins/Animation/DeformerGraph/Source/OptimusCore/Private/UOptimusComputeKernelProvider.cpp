// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 6

// StaticClass @ 14e114f90

UClass * __cdecl UOptimusComputeKernelProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComputeKernelProvider.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComputeKernelProvider",
               &Z_Registration_Info_UClass_UOptimusComputeKernelProvider.InnerSingleton,
               StaticRegisterNativesUOptimusComputeKernelProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusComputeKernelProvider>,
               InternalVTableHelperCtorCaller<UOptimusComputeKernelProvider>,aFStackX_8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComputeKernelProvider.InnerSingleton;
}

// UOptimusComputeKernelProvider @ 14e1589b0

UOptimusComputeKernelProvider * __thiscall
UOptimusComputeKernelProvider::UOptimusComputeKernelProvider
          (UOptimusComputeKernelProvider *this,FVTableHelper *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusComputeKernelProvider__6B_;
  return this;
}

// UOptimusComputeKernelProvider @ 14e1589e0

UOptimusComputeKernelProvider * __thiscall
UOptimusComputeKernelProvider::UOptimusComputeKernelProvider
          (UOptimusComputeKernelProvider *this,FObjectInitializer *param_1)

{
  UInterface::UInterface((UInterface *)this,param_1);
  *(undefined ***)this = &___7UOptimusComputeKernelProvider__6B_;
  return this;
}

// ~UOptimusComputeKernelProvider @ 14e162440

void __thiscall
UOptimusComputeKernelProvider::~UOptimusComputeKernelProvider(UOptimusComputeKernelProvider *this)

{
  *(undefined ***)this = &___7UObject__6B_;
  UObjectBase::~UObjectBase((UObjectBase *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d4f30

UClass * __cdecl UOptimusComputeKernelProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusComputeKernelProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusComputeKernelProvider",
               &Z_Registration_Info_UClass_UOptimusComputeKernelProvider.InnerSingleton,
               StaticRegisterNativesUOptimusComputeKernelProvider,0x28,8,
               CLASS_Intrinsic|CLASS_Interface|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<UOptimusComputeKernelProvider>,
               InternalVTableHelperCtorCaller<UOptimusComputeKernelProvider>,local_res8,
               UInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusComputeKernelProvider.InnerSingleton;
}

// StaticRegisterNativesUOptimusComputeKernelProvider @ 14e225840

void __cdecl UOptimusComputeKernelProvider::StaticRegisterNativesUOptimusComputeKernelProvider(void)

{
  return;
}

