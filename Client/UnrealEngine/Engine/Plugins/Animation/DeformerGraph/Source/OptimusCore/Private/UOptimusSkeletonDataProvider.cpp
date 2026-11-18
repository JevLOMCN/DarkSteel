// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticClass @ 14e11e920

UClass * __cdecl UOptimusSkeletonDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkeletonDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkeletonDataProvider",
               &Z_Registration_Info_UClass_UOptimusSkeletonDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusSkeletonDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkeletonDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusSkeletonDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkeletonDataProvider.InnerSingleton;
}

// UOptimusSkeletonDataProvider @ 14e15cce0

UOptimusSkeletonDataProvider * __thiscall
UOptimusSkeletonDataProvider::UOptimusSkeletonDataProvider
          (UOptimusSkeletonDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusSkeletonDataProvider__6B_;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UOptimusSkeletonDataProvider @ 14e15cd20

UOptimusSkeletonDataProvider * __thiscall
UOptimusSkeletonDataProvider::UOptimusSkeletonDataProvider
          (UOptimusSkeletonDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusSkeletonDataProvider__6B_;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UOptimusSkeletonDataProvider @ 14e163f20

void __thiscall
UOptimusSkeletonDataProvider::~UOptimusSkeletonDataProvider(UOptimusSkeletonDataProvider *this)

{
  this->_padding_ = (longlong)&___7UOptimusSkeletonDataProvider__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d8f40

UClass * __cdecl UOptimusSkeletonDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusSkeletonDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusSkeletonDataProvider",
               &Z_Registration_Info_UClass_UOptimusSkeletonDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusSkeletonDataProvider,0x30,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusSkeletonDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusSkeletonDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusSkeletonDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1dd960

FComputeDataProviderRenderProxy * __thiscall
UOptimusSkeletonDataProvider::GetRenderProxy(UOptimusSkeletonDataProvider *this)

{
  FComputeDataProviderRenderProxy *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  
  pFVar1 = ::operator_new(0x18);
  if (pFVar1 == (FComputeDataProviderRenderProxy *)0x0) {
    return (FComputeDataProviderRenderProxy *)0x0;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->SkinnedMesh).WeakPtr);
  *pFVar1 = (FComputeDataProviderRenderProxy)&___7FOptimusSkeletonDataProviderProxy__6B_;
  *(undefined4 *)(pFVar1 + 2) = 0;
  if (pUVar2 != (UObject *)0x0) {
    pFVar1[1] = *(FComputeDataProviderRenderProxy *)&pUVar2[0x33].field_0x18;
    pUVar3 = FWeakObjectPtr::Get((FWeakObjectPtr *)&pUVar2[0x24].field_0x10);
    if (pUVar3 != (UObject *)0x0) {
      pUVar2 = pUVar3;
    }
    *(undefined4 *)(pFVar1 + 2) = *(undefined4 *)(pUVar2 + 0x29);
    return pFVar1;
  }
  pFVar1[1] = (FComputeDataProviderRenderProxy)0x0;
  *(undefined4 *)(pFVar1 + 2) = 0;
  return pFVar1;
}

// StaticRegisterNativesUOptimusSkeletonDataProvider @ 14e225e90

void __cdecl UOptimusSkeletonDataProvider::StaticRegisterNativesUOptimusSkeletonDataProvider(void)

{
  return;
}

