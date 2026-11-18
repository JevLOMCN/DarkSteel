// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OptimusCore
// Functions: 11

// StaticClass @ 14e118fd0

UClass * __cdecl UOptimusHalfEdgeDataProvider::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusHalfEdgeDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusHalfEdgeDataProvider",
               &Z_Registration_Info_UClass_UOptimusHalfEdgeDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusHalfEdgeDataProvider,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusHalfEdgeDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusHalfEdgeDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusHalfEdgeDataProvider.InnerSingleton;
}

// UOptimusHalfEdgeDataProvider @ 14e15a210

UOptimusHalfEdgeDataProvider * __thiscall
UOptimusHalfEdgeDataProvider::UOptimusHalfEdgeDataProvider
          (UOptimusHalfEdgeDataProvider *this,FVTableHelper *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerAssetPathAccessor__;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)&local_res8);
  (this->OnDemandHalfEdgeBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnDemandHalfEdgeBuffers).ArrayNum = 0;
  (this->OnDemandHalfEdgeBuffers).ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->DestroyFence);
  return this;
}

// UOptimusHalfEdgeDataProvider @ 14e15a280

UOptimusHalfEdgeDataProvider * __thiscall
UOptimusHalfEdgeDataProvider::UOptimusHalfEdgeDataProvider
          (UOptimusHalfEdgeDataProvider *this,FObjectInitializer *param_1)

{
  undefined8 local_res8;
  
  UComputeDataProvider::UComputeDataProvider((UComputeDataProvider *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  local_res8 = 0;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerAssetPathAccessor__;
  (this->SkinnedMesh).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->SkinnedMesh).WeakPtr,(FObjectPtr)&local_res8);
  (this->OnDemandHalfEdgeBuffers).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OnDemandHalfEdgeBuffers).ArrayNum = 0;
  (this->OnDemandHalfEdgeBuffers).ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->DestroyFence);
  return this;
}

// ~UOptimusHalfEdgeDataProvider @ 14e162c90

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
UOptimusHalfEdgeDataProvider::~UOptimusHalfEdgeDataProvider(UOptimusHalfEdgeDataProvider *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UComputeDataProvider__;
  this->_padding_ = (longlong)&_vftable__for__IOptimusDeformerAssetPathAccessor__;
  FRenderCommandFence::~FRenderCommandFence(&this->DestroyFence);
  DestructItems<FHalfEdgeBuffers,int>
            ((FHalfEdgeBuffers *)(this->OnDemandHalfEdgeBuffers).AllocatorInstance.Data,
             (this->OnDemandHalfEdgeBuffers).ArrayNum);
  pFVar1 = (this->OnDemandHalfEdgeBuffers).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7IOptimusDeformerAssetPathAccessor__6B_;
  UComputeDataProvider::~UComputeDataProvider((UComputeDataProvider *)this);
  return;
}

// BeginDestroy @ 14e17ec40

void __thiscall UOptimusHalfEdgeDataProvider::BeginDestroy(UOptimusHalfEdgeDataProvider *this)

{
  UObject::BeginDestroy((UObject *)this);
  FRenderCommandFence::BeginFence(&this->DestroyFence,RenderThread);
  return;
}

// GetPrivateStaticClass @ 14e1d62b0

UClass * __cdecl UOptimusHalfEdgeDataProvider::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOptimusHalfEdgeDataProvider.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OptimusCore",L"OptimusHalfEdgeDataProvider",
               &Z_Registration_Info_UClass_UOptimusHalfEdgeDataProvider.InnerSingleton,
               StaticRegisterNativesUOptimusHalfEdgeDataProvider,0x50,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UOptimusHalfEdgeDataProvider>,
               InternalVTableHelperCtorCaller<UOptimusHalfEdgeDataProvider>,local_res8,
               UComputeDataProvider::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOptimusHalfEdgeDataProvider.InnerSingleton;
}

// GetRenderProxy @ 14e1dd1b0

FComputeDataProviderRenderProxy * __thiscall
UOptimusHalfEdgeDataProvider::GetRenderProxy(UOptimusHalfEdgeDataProvider *this)

{
  FComputeDataProviderRenderProxy *pFVar1;
  UObject *pUVar2;
  FComputeDataProviderRenderProxy FVar3;
  
  pFVar1 = ::operator_new(0x38);
  if (pFVar1 == (FComputeDataProviderRenderProxy *)0x0) {
    return (FComputeDataProviderRenderProxy *)0x0;
  }
  pUVar2 = FWeakObjectPtr::Get(&(this->SkinnedMesh).WeakPtr);
  *pFVar1 = (FComputeDataProviderRenderProxy)&___7FOptimusHalfEdgeDataProviderProxy__6B_;
  FVar3 = (FComputeDataProviderRenderProxy)0x0;
  if (pUVar2 != (UObject *)0x0) {
    FVar3 = *(FComputeDataProviderRenderProxy *)&pUVar2[0x33].field_0x18;
  }
  pFVar1[1] = FVar3;
  *(undefined1 *)(pFVar1 + 3) = 0;
  pFVar1[4] = (FComputeDataProviderRenderProxy)0x0;
  pFVar1[5] = (FComputeDataProviderRenderProxy)0x0;
  pFVar1[6] = (FComputeDataProviderRenderProxy)0x0;
  pFVar1[2] = (FComputeDataProviderRenderProxy)&this->OnDemandHalfEdgeBuffers;
  return pFVar1;
}

// IsReadyForFinishDestroy @ 14e1efe70

/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
UOptimusHalfEdgeDataProvider::IsReadyForFinishDestroy(UOptimusHalfEdgeDataProvider *this)

{
  int *piVar1;
  int iVar2;
  FHalfEdgeBuffers *pFVar3;
  bool bVar4;
  
  bVar4 = FRenderCommandFence::IsFenceComplete(&this->DestroyFence);
  if (!bVar4) {
    return false;
  }
  pFVar3 = (FHalfEdgeBuffers *)(this->OnDemandHalfEdgeBuffers).AllocatorInstance.Data;
  iVar2 = (this->OnDemandHalfEdgeBuffers).ArrayNum;
  piVar1 = &(this->OnDemandHalfEdgeBuffers).ArrayMax;
  if (-1 < (this->OnDemandHalfEdgeBuffers).ArrayMax) {
    DestructItems<FHalfEdgeBuffers,int>(pFVar3,iVar2);
    (this->OnDemandHalfEdgeBuffers).ArrayNum = 0;
    return true;
  }
  DestructItems<FHalfEdgeBuffers,int>(pFVar3,iVar2);
  (this->OnDemandHalfEdgeBuffers).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,&(this->OnDemandHalfEdgeBuffers).AllocatorInstance,0,piVar1);
  }
  return true;
}

// SetOptimusDeformerAssetPath @ 14e21f220

void __thiscall
UOptimusHalfEdgeDataProvider::SetOptimusDeformerAssetPath
          (UOptimusHalfEdgeDataProvider *this,FTopLevelAssetPath *param_1)

{
  return;
}

// StaticRegisterNativesUOptimusHalfEdgeDataProvider @ 14e225a70

void __cdecl UOptimusHalfEdgeDataProvider::StaticRegisterNativesUOptimusHalfEdgeDataProvider(void)

{
  return;
}

// _getUObject @ 14e238db0

UObject * __thiscall UOptimusHalfEdgeDataProvider::_getUObject(UOptimusHalfEdgeDataProvider *this)

{
  return (UObject *)&this[-1]._padding_;
}

