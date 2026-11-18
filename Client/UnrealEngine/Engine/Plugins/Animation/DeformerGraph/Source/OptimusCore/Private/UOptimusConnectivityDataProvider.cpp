// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 7

// StaticClass @ 14e104840

UClass * __cdecl UOptimusConnectivityDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusConnectivityDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusConnectivityDataProvider",
               &Z_Registration_Info_UClass_UOptimusConnectivityDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusConnectivityDataProvider,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusConnectivityDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusConnectivityDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusConnectivityDataProvider.InnerSingleton;
}

// UOptimusConnectivityDataProvider @ 14e158a70

UOptimusConnectivityDataProvider * __thiscall
UOptimusConnectivityDataProvider::UOptimusConnectivityDataProvider
          (UOptimusConnectivityDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusConnectivityDataProvider__6B_;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)&local_res8);
  (this->AdjacencyBufferPerLod).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdjacencyBufferPerLod).ArrayNum = 0;
  (this->AdjacencyBufferPerLod).ArrayMax = 0;
  return this;
}

// UOptimusConnectivityDataProvider @ 14e158ac0

UOptimusConnectivityDataProvider * __thiscall
UOptimusConnectivityDataProvider::UOptimusConnectivityDataProvider
          (UOptimusConnectivityDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&___7UOptimusConnectivityDataProvider__6B_;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8 = 0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)&local_res8);
  (this->AdjacencyBufferPerLod).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AdjacencyBufferPerLod).ArrayNum = 0;
  (this->AdjacencyBufferPerLod).ArrayMax = 0;
  return this;
}

// ~UOptimusConnectivityDataProvider @ 14e162470

void __thiscall
UOptimusConnectivityDataProvider::~UOptimusConnectivityDataProvider
          (UOptimusConnectivityDataProvider *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UOptimusConnectivityDataProvider__6B_;
  DestructItems<TArray<unsigned_int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)
             (this->AdjacencyBufferPerLod).AllocatorInstance.Data,
             (this->AdjacencyBufferPerLod).ArrayNum);
  pFVar1 = (this->AdjacencyBufferPerLod).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// GetPrivateStaticClass @ 14e1d50b0

UClass * __cdecl UOptimusConnectivityDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusConnectivityDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusConnectivityDataProvider",
               &Z_Registration_Info_UClass_UOptimusConnectivityDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusConnectivityDataProvider,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusConnectivityDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusConnectivityDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusConnectivityDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1dce20

FComputeDataProviderRenderProxy * __thiscall
UOptimusConnectivityDataProvider::GetRenderProxy(UOptimusConnectivityDataProvider *this)

{
  FComputeDataProviderRenderProxy *pFVar1;
  UObject *pUVar2;
  FComputeDataProviderRenderProxy FVar3;
  
  pFVar1 = ::operator_new(0x28);
  if (pFVar1 != (FComputeDataProviderRenderProxy *)0x0) {
    pUVar2 = FWeakObjectPtr::Get(&(this->SkinnedMesh).WeakPtr);
    *pFVar1 = (FComputeDataProviderRenderProxy)&___7FOptimusConnectivityDataProviderProxy__6B_;
    FVar3 = (FComputeDataProviderRenderProxy)0x0;
    if (pUVar2 != (UObject *)0x0) {
      FVar3 = *(FComputeDataProviderRenderProxy *)&pUVar2[0x33].field_0x18;
    }
    pFVar1[1] = FVar3;
    pFVar1[2] = (FComputeDataProviderRenderProxy)&this->AdjacencyBufferPerLod;
    pFVar1[3] = (FComputeDataProviderRenderProxy)0x0;
    pFVar1[4] = (FComputeDataProviderRenderProxy)0x0;
    return pFVar1;
  }
  return (FComputeDataProviderRenderProxy *)0x0;
}

// StaticRegisterNativesUOptimusConnectivityDataProvider @ 14e225860

void __cdecl
UOptimusConnectivityDataProvider::StaticRegisterNativesUOptimusConnectivityDataProvider(void)

{
  return;
}

