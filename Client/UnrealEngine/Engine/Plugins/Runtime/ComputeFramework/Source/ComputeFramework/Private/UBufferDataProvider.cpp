// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ComputeFramework
// Functions: 7

// StaticClass @ 1494be020

UClass * __cdecl UBufferDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBufferDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"BufferDataProvider",
               &Z_Registration_Info_UClass_UBufferDataProvider.InnerSingleton,
               StaticRegisterNativesUBufferDataProvider,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBufferDataProvider>,
               InternalVTableHelperCtorCaller<UBufferDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBufferDataProvider.InnerSingleton;
}

// UBufferDataProvider @ 1494c4870

UBufferDataProvider * __thiscall
UBufferDataProvider::UBufferDataProvider(UBufferDataProvider *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ElementCount = 0;
  this->_padding_ = (longlong)&___7UBufferDataProvider__6B_;
  this->ElementStride = 4;
  return this;
}

// UBufferDataProvider @ 1494c48b0

UBufferDataProvider * __thiscall
UBufferDataProvider::UBufferDataProvider(UBufferDataProvider *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->ElementCount = 0;
  this->_padding_ = (longlong)&___7UBufferDataProvider__6B_;
  this->ElementStride = 4;
  return this;
}

// ~UBufferDataProvider @ 1494c5cb0

void __thiscall UBufferDataProvider::~UBufferDataProvider(UBufferDataProvider *this)

{
  this->_padding_ = (longlong)&___7UComputeDataProvider__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 1494d02d0

UClass * __cdecl UBufferDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBufferDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ComputeFramework",L"BufferDataProvider",
               &Z_Registration_Info_UClass_UBufferDataProvider.InnerSingleton,
               StaticRegisterNativesUBufferDataProvider,0x38,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UBufferDataProvider>,
               InternalVTableHelperCtorCaller<UBufferDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBufferDataProvider.InnerSingleton;
}

// GetRenderProxy @ 1494d0dd0

FComputeDataProviderRenderProxy * __thiscall
UBufferDataProvider::GetRenderProxy(UBufferDataProvider *this)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  FComputeDataProviderRenderProxy *pFVar4;
  
  pFVar4 = ::operator_new(0x30);
  if (pFVar4 != (FComputeDataProviderRenderProxy *)0x0) {
    bVar1 = this->bClearBeforeUse;
    iVar2 = this->ElementStride;
    iVar3 = this->ElementCount;
    *pFVar4 = (FComputeDataProviderRenderProxy)&___7FBufferDataProviderProxy__6B_;
    *(bool *)(pFVar4 + 2) = bVar1;
    *(int *)(pFVar4 + 1) = iVar3;
    *(int *)&pFVar4[1].field_0x4 = iVar2;
    return pFVar4;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUBufferDataProvider @ 1494d7e10

void __cdecl UBufferDataProvider::StaticRegisterNativesUBufferDataProvider(void)

{
  return;
}

