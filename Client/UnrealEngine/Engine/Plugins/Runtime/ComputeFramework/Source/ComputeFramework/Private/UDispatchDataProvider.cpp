// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 7

// StaticClass @ 1494bbdf0

UClass * __cdecl UDispatchDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDispatchDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"DispatchDataProvider",
               &Z_Registration_Info_UClass_UDispatchDataProvider.InnerSingleton,
               StaticRegisterNativesUDispatchDataProvider,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDispatchDataProvider>,
               InternalVTableHelperCtorCaller<UDispatchDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDispatchDataProvider.InnerSingleton;
}

// UDispatchDataProvider @ 1494c5040

UDispatchDataProvider * __thiscall
UDispatchDataProvider::UDispatchDataProvider(UDispatchDataProvider *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDispatchDataProvider__6B_;
  return this;
}

// UDispatchDataProvider @ 1494c5070

UDispatchDataProvider * __thiscall
UDispatchDataProvider::UDispatchDataProvider
          (UDispatchDataProvider *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDispatchDataProvider__6B_;
  return this;
}

// ~UDispatchDataProvider @ 1494c5ff0

void __thiscall UDispatchDataProvider::~UDispatchDataProvider(UDispatchDataProvider *this)

{
  this->_padding_ = (longlong)&___7UComputeDataProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1494d0b70

UClass * __cdecl UDispatchDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDispatchDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"DispatchDataProvider",
               &Z_Registration_Info_UClass_UDispatchDataProvider.InnerSingleton,
               StaticRegisterNativesUDispatchDataProvider,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDispatchDataProvider>,
               InternalVTableHelperCtorCaller<UDispatchDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDispatchDataProvider.InnerSingleton;
}

// GetRenderProxy @ 1494d0e40

FComputeDataProviderRenderProxy * __thiscall
UDispatchDataProvider::GetRenderProxy(UDispatchDataProvider *this)

{
  uint uVar1;
  FComputeDataProviderRenderProxy *pFVar2;
  
  pFVar2 = ::operator_new(0x18);
  if (pFVar2 != (FComputeDataProviderRenderProxy *)0x0) {
    uVar1 = (this->ThreadCount).field0_0x0._s_0.Z;
    pFVar2[1] = *(FComputeDataProviderRenderProxy *)&(this->ThreadCount).field0_0x0;
    *(uint *)(pFVar2 + 2) = uVar1;
    *pFVar2 = (FComputeDataProviderRenderProxy)&___7FDispatchDataProviderProxy__6B_;
    return pFVar2;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUDispatchDataProvider @ 1494d7f00

void __cdecl UDispatchDataProvider::StaticRegisterNativesUDispatchDataProvider(void)

{
  return;
}

