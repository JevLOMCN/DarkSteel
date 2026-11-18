// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 16

// StaticClass @ 146c62020

UClass * __cdecl UMockDataMeshTrackerComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MRMesh",L"MockDataMeshTrackerComponent",
               &Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.InnerSingleton,
               StaticRegisterNativesUMockDataMeshTrackerComponent,0x2d0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockDataMeshTrackerComponent>,
               InternalVTableHelperCtorCaller<UMockDataMeshTrackerComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.InnerSingleton;
}

// UMockDataMeshTrackerComponent @ 146c66400

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMockDataMeshTrackerComponent * __thiscall
UMockDataMeshTrackerComponent::UMockDataMeshTrackerComponent
          (UMockDataMeshTrackerComponent *this,FVTableHelper *param_1)

{
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  this->ScanWorld = true;
  this->RequestNormals = true;
  this->RequestVertexConfidence = false;
  this->VertexColorMode = None;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  *(undefined8 *)&this->OnMeshTrackerUpdated = 0;
  *(undefined8 *)&(this->OnMeshTrackerUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnMeshTrackerUpdated).field_0x10 = 0;
  (this->BlockVertexColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BlockVertexColors).ArrayNum = 0;
  (this->BlockVertexColors).ArrayMax = 0;
  (this->MRMesh).field0_0x0.DebugPtr = (UMRMeshComponent *)0x0;
  this->LastUpdateTime = 0.0;
  this->CurrentTime = 0.0;
  this->UpdateCount = 0;
  this->UpdateInterval = 3.0;
  this->NumBlocks = 4;
  return this;
}

// UMockDataMeshTrackerComponent @ 146c664a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

UMockDataMeshTrackerComponent * __thiscall
UMockDataMeshTrackerComponent::UMockDataMeshTrackerComponent
          (UMockDataMeshTrackerComponent *this,FObjectInitializer *param_1)

{
  TArray<FColor,TSizedDefaultAllocator<32>_> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  FLinearColor FVar4;
  bool bVar5;
  int iVar6;
  FMockDataMeshTrackerImpl *this_00;
  FMockDataMeshTrackerImpl *pFVar7;
  UMockDataMeshTrackerComponent *pUVar8;
  
  USceneComponent::USceneComponent((USceneComponent *)this,param_1);
  pFVar7 = (FMockDataMeshTrackerImpl *)0x0;
  this->ScanWorld = true;
  this->RequestNormals = true;
  this->RequestVertexConfidence = false;
  this->VertexColorMode = None;
  *(undefined ***)this = &_vftable__for__UObject__;
  pTVar1 = &this->BlockVertexColors;
  *(undefined8 *)&this->OnMeshTrackerUpdated = 0;
  *(undefined8 *)&(this->OnMeshTrackerUpdated).field_0x8 = 0;
  *(undefined8 *)&(this->OnMeshTrackerUpdated).field_0x10 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->BlockVertexColors).ArrayNum = 0;
  (this->BlockVertexColors).ArrayMax = 0;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  (this->VertexColorFromConfidenceZero).field0_0x0._s_0 =
       (FLinearColor_u_0_s_0)FLinearColor::Red.field0_0x0;
  FVar4 = FLinearColor::Blue;
  this->UpdateInterval = 3.0;
  (this->VertexColorFromConfidenceOne).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar4.field0_0x0;
  (this->MRMesh).field0_0x0.DebugPtr = (UMRMeshComponent *)0x0;
  this_00 = ::operator_new(0xf0);
  if (this_00 != (FMockDataMeshTrackerImpl *)0x0) {
    pFVar7 = FMockDataMeshTrackerImpl::FMockDataMeshTrackerImpl(this_00);
  }
  this->field_0x42 = this->field_0x42 | 6;
  this->field_0x9a = this->field_0x9a | 8;
  this->Impl = pFVar7;
  this->LastUpdateTime = 0.0;
  this->CurrentTime = 0.0;
  this->UpdateCount = 0;
  this->NumBlocks = 4;
  this->field_0x40 = 0;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 < (FScriptContainerElement *)((longlong)&FColor::Blue.field0_0x0 + 1)) &&
      (&FColor::Blue < pFVar2 + (longlong)(this->BlockVertexColors).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar8 = (UMockDataMeshTrackerComponent *)(*pcVar3)();
    return pUVar8;
  }
  iVar6 = (this->BlockVertexColors).ArrayNum;
  if (iVar6 == (this->BlockVertexColors).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(this->BlockVertexColors).ArrayMax);
  }
  (this->BlockVertexColors).ArrayNum = iVar6 + 1;
  ((FColor_u_0 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4))->_s_0 =
       (FColor_u_0_s_0)FColor::Blue.field0_0x0;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 < (FScriptContainerElement *)((longlong)&FColor::Red.field0_0x0 + 1)) &&
      (&FColor::Red < pFVar2 + (longlong)(this->BlockVertexColors).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar8 = (UMockDataMeshTrackerComponent *)(*pcVar3)();
    return pUVar8;
  }
  iVar6 = (this->BlockVertexColors).ArrayNum;
  if (iVar6 == (this->BlockVertexColors).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(this->BlockVertexColors).ArrayMax);
  }
  (this->BlockVertexColors).ArrayNum = iVar6 + 1;
  ((FColor_u_0 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4))->_s_0 =
       (FColor_u_0_s_0)FColor::Red.field0_0x0;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 < (FScriptContainerElement *)((longlong)&FColor::Green.field0_0x0 + 1)) &&
      (&FColor::Green < pFVar2 + (longlong)(this->BlockVertexColors).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar8 = (UMockDataMeshTrackerComponent *)(*pcVar3)();
    return pUVar8;
  }
  iVar6 = (this->BlockVertexColors).ArrayNum;
  if (iVar6 == (this->BlockVertexColors).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(this->BlockVertexColors).ArrayMax);
  }
  (this->BlockVertexColors).ArrayNum = iVar6 + 1;
  ((FColor_u_0 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4))->_s_0 =
       (FColor_u_0_s_0)FColor::Green.field0_0x0;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 < (FScriptContainerElement *)((longlong)&FColor::Yellow.field0_0x0 + 1)) &&
      (&FColor::Yellow < pFVar2 + (longlong)(this->BlockVertexColors).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar8 = (UMockDataMeshTrackerComponent *)(*pcVar3)();
    return pUVar8;
  }
  iVar6 = (this->BlockVertexColors).ArrayNum;
  if (iVar6 == (this->BlockVertexColors).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(this->BlockVertexColors).ArrayMax);
  }
  (this->BlockVertexColors).ArrayNum = iVar6 + 1;
  ((FColor_u_0 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4))->_s_0 =
       (FColor_u_0_s_0)FColor::Yellow.field0_0x0;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 < (FScriptContainerElement *)((longlong)&FColor::Cyan.field0_0x0 + 1)) &&
      (&FColor::Cyan < pFVar2 + (longlong)(this->BlockVertexColors).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar8 = (UMockDataMeshTrackerComponent *)(*pcVar3)();
    return pUVar8;
  }
  iVar6 = (this->BlockVertexColors).ArrayNum;
  if (iVar6 == (this->BlockVertexColors).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(this->BlockVertexColors).ArrayMax);
  }
  (this->BlockVertexColors).ArrayNum = iVar6 + 1;
  ((FColor_u_0 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4))->_s_0 =
       (FColor_u_0_s_0)FColor::Cyan.field0_0x0;
  pFVar2 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar2 < (FScriptContainerElement *)((longlong)&FColor::Magenta.field0_0x0 + 1)) &&
      (&FColor::Magenta < pFVar2 + (longlong)(this->BlockVertexColors).ArrayMax * 4)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar3 = (code *)swi(3);
    pUVar8 = (UMockDataMeshTrackerComponent *)(*pcVar3)();
    return pUVar8;
  }
  iVar6 = (this->BlockVertexColors).ArrayNum;
  if (iVar6 == (this->BlockVertexColors).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar1->AllocatorInstance,&(this->BlockVertexColors).ArrayMax);
  }
  (this->BlockVertexColors).ArrayNum = iVar6 + 1;
  ((FColor_u_0 *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 4))->_s_0 =
       (FColor_u_0_s_0)FColor::Magenta.field0_0x0;
  return this;
}

// ~UMockDataMeshTrackerComponent @ 146c66f20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMockDataMeshTrackerComponent::~UMockDataMeshTrackerComponent(UMockDataMeshTrackerComponent *this)

{
  FMockDataMeshTrackerImpl *pFVar1;
  FScriptContainerElement *pFVar2;
  void *pvVar3;
  
  pFVar1 = this->Impl;
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__IInterface_AssetUserData__;
  *(undefined ***)&this->field_0x30 = &_vftable__for__IAsyncPhysicsStateProcessor__;
  if (pFVar1 != (FMockDataMeshTrackerImpl *)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)&pFVar1->FreeCachedMeshDatasMutex);
    DestructItems<TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1>,int>
              ((TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *)
               (pFVar1->FreeCachedMeshDatas).AllocatorInstance.Data,
               (pFVar1->FreeCachedMeshDatas).ArrayNum);
    pFVar2 = (pFVar1->FreeCachedMeshDatas).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    DestructItems<TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1>,int>
              ((TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *)
               (pFVar1->CachedMeshDatas).AllocatorInstance.Data,(pFVar1->CachedMeshDatas).ArrayNum);
    pFVar2 = (pFVar1->CachedMeshDatas).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    *(undefined4 *)&(pFVar1->MeshBrickCache).field_0x48 = 0;
    pvVar3 = *(void **)&(pFVar1->MeshBrickCache).field_0x40;
    if (pvVar3 != (void *)0x0) {
      FMemory::Free(pvVar3);
    }
    TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,unsigned___int64>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)&pFVar1->MeshBrickCache);
    DestructItems<FMockDataMeshTrackerImpl::FRawMockMeshData,int>
              ((FRawMockMeshData *)(pFVar1->RawMockMeshData).AllocatorInstance.Data,
               (pFVar1->RawMockMeshData).ArrayNum);
    pFVar2 = (pFVar1->RawMockMeshData).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pFVar1,0xf0);
  }
  pFVar2 = (this->BlockVertexColors).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pvVar3 = *(void **)&(this->OnMeshTrackerUpdated).field_0x8;
  if (pvVar3 != (void *)0x0) {
    FMemory::Free(pvVar3);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnMeshTrackerUpdated);
  USceneComponent::~USceneComponent((USceneComponent *)this);
  return;
}

// BeginDestroy @ 146c68480

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UMockDataMeshTrackerComponent::BeginDestroy(UMockDataMeshTrackerComponent *this)

{
  int *piVar1;
  TArray<TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  int iVar3;
  FMockDataMeshTrackerImpl *pFVar4;
  undefined8 *puVar5;
  UMRMeshComponent *pUVar6;
  code *pcVar7;
  bool bVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  
  pFVar4 = this->Impl;
  pTVar2 = &pFVar4->CachedMeshDatas;
  iVar3 = (pFVar4->CachedMeshDatas).ArrayNum;
  pFVar9 = (pTVar2->AllocatorInstance).Data;
  pFVar10 = pFVar9 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((pFVar4->CachedMeshDatas).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1>,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar9 == pFVar10) break;
    if (*(longlong *)pFVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    puVar5 = *(undefined8 **)pFVar9;
    pFVar9 = pFVar9 + 0x10;
    *puVar5 = 0;
  }
  DestructItems<TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1>,int>
            ((TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *)
             (pTVar2->AllocatorInstance).Data,(pFVar4->CachedMeshDatas).ArrayNum);
  piVar1 = &(pFVar4->CachedMeshDatas).ArrayMax;
  (pFVar4->CachedMeshDatas).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  DestructItems<TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1>,int>
            ((TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *)
             (pFVar4->FreeCachedMeshDatas).AllocatorInstance.Data,
             (pFVar4->FreeCachedMeshDatas).ArrayNum);
  piVar1 = &(pFVar4->FreeCachedMeshDatas).ArrayMax;
  (pFVar4->FreeCachedMeshDatas).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&(pFVar4->FreeCachedMeshDatas).AllocatorInstance,0,piVar1);
  }
  pUVar6 = (this->MRMesh).field0_0x0.DebugPtr;
  if (pUVar6 != (UMRMeshComponent *)0x0) {
    DisconnectMRMesh(this,pUVar6);
  }
  USceneComponent::BeginDestroy((USceneComponent *)this);
  return;
}

// ConnectMRMesh @ 146c68fc0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMockDataMeshTrackerComponent::ConnectMRMesh
          (UMockDataMeshTrackerComponent *this,UMRMeshComponent *param_1)

{
  char cVar1;
  
  if (param_1 == (UMRMeshComponent *)0x0) {
    if (2 < (byte)LogMockMeshDataTracker._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMockMeshDataTracker);
      return;
    }
  }
  else if ((this->MRMesh).field0_0x0.DebugPtr == (UMRMeshComponent *)0x0) {
    cVar1 = (**(code **)(*(longlong *)&param_1->field_0x548 + 8))(&param_1->field_0x548);
    if (cVar1 == '\0') {
      (*(code *)**(undefined8 **)&param_1->field_0x548)(&param_1->field_0x548,1);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      (this->MRMesh).field0_0x0.DebugPtr = param_1;
    }
    else if (2 < (byte)LogMockMeshDataTracker._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMockMeshDataTracker);
      return;
    }
  }
  else if (2 < (byte)LogMockMeshDataTracker._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMockMeshDataTracker);
    return;
  }
  return;
}

// DisconnectMRMesh @ 146c69800

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMockDataMeshTrackerComponent::DisconnectMRMesh
          (UMockDataMeshTrackerComponent *this,UMRMeshComponent *param_1)

{
  UMRMeshComponent *pUVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  undefined1 *puVar5;
  
  pUVar1 = (this->MRMesh).field0_0x0.DebugPtr;
  if (pUVar1 == (UMRMeshComponent *)0x0) {
    if (2 < (byte)LogMockMeshDataTracker._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMockMeshDataTracker);
      return;
    }
  }
  else if (pUVar1 == param_1) {
    cVar3 = (**(code **)(*(longlong *)&pUVar1->field_0x548 + 8))();
    if (cVar3 == '\0') {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("MRMesh->IsConnected()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MockDataMeshTrackerComponent.cpp"
                         ,0x146,L"");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    puVar5 = &((this->MRMesh).field0_0x0.DebugPtr)->field_0x548;
    (*(code *)**(undefined8 **)puVar5)(puVar5,0);
    (this->MRMesh).field0_0x0.DebugPtr = (UMRMeshComponent *)0x0;
  }
  else if (2 < (byte)LogMockMeshDataTracker._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMockMeshDataTracker);
    return;
  }
  return;
}

// FOnMockDataMeshTrackerUpdated_DelegateWrapper @ 146c69ee0

void __cdecl
UMockDataMeshTrackerComponent::FOnMockDataMeshTrackerUpdated_DelegateWrapper
          (TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_1,int param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_5,
          TArray<float,TSizedDefaultAllocator<32>_> *param_6)

{
  uint uVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  int local_68 [2];
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_60;
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_40;
  TArray<float,TSizedDefaultAllocator<32>_> local_30;
  
  local_60.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_60.ArrayNum = 0;
  local_60.ArrayMax = 0;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  local_40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_40.ArrayNum = 0;
  local_40.ArrayMax = 0;
  local_30.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_30.ArrayNum = 0;
  local_30.ArrayMax = 0;
  iVar4 = 0;
  local_68[0] = param_2;
  if (&local_60 != param_3) {
    uVar1 = param_3->ArrayNum;
    pFVar3 = (param_3->AllocatorInstance).Data;
    local_60.ArrayMax = 0;
    local_60.ArrayNum = uVar1;
    iVar4 = 0;
    if (uVar1 != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,uVar1,0,&local_60.AllocatorInstance,uVar1,&local_60.ArrayMax);
      memcpy(local_60.AllocatorInstance.Data,pFVar3,(longlong)(int)uVar1 * 0x18);
      iVar4 = local_50.ArrayMax;
    }
  }
  if (&local_50 != param_4) {
    iVar2 = param_4->ArrayNum;
    pFVar3 = (param_4->AllocatorInstance).Data;
    local_50.ArrayNum = iVar2;
    if ((iVar2 == 0) && (iVar4 == 0)) {
      local_50.ArrayNum = 0;
      local_50.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar2,iVar4,&local_50.AllocatorInstance,iVar2,&local_50.ArrayMax);
      if (iVar2 != 0) {
        memcpy(local_50.AllocatorInstance.Data,pFVar3,(longlong)iVar2 << 2);
      }
    }
  }
  if (&local_40 != param_5) {
    iVar4 = param_5->ArrayNum;
    pFVar3 = (param_5->AllocatorInstance).Data;
    local_40.ArrayNum = iVar4;
    if ((iVar4 == 0) && (local_40.ArrayMax == 0)) {
      local_40.ArrayNum = 0;
      local_40.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,iVar4,local_40.ArrayMax,&local_40.AllocatorInstance,iVar4,&local_40.ArrayMax
                );
      if (iVar4 != 0) {
        memcpy(local_40.AllocatorInstance.Data,pFVar3,(longlong)iVar4 * 0x18);
      }
    }
  }
  if (&local_30 != param_6) {
    iVar4 = param_6->ArrayNum;
    pFVar3 = (param_6->AllocatorInstance).Data;
    local_30.ArrayNum = iVar4;
    if ((iVar4 == 0) && (local_30.ArrayMax == 0)) {
      local_30.ArrayNum = 0;
      local_30.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,iVar4,local_30.ArrayMax,&local_30.AllocatorInstance,iVar4,&local_30.ArrayMax);
      if (iVar4 != 0) {
        memcpy(local_30.AllocatorInstance.Data,pFVar3,(longlong)iVar4 << 2);
      }
    }
  }
  TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
            (param_1,local_68);
  if (local_30.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_30.AllocatorInstance.Data);
  }
  if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_40.AllocatorInstance.Data);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  if (local_60.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.AllocatorInstance.Data);
  }
  return;
}

// FinishDestroy @ 146c6a1e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UMockDataMeshTrackerComponent::FinishDestroy(UMockDataMeshTrackerComponent *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FLinkerLoad *pFVar5;
  ForElementType<UObject_*> FVar6;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar7;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar8;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if ((*(uint *)&this->field_0x8 >> 0x10 & 1) == 0) {
    aFStackX_8[0].ComparisonIndex.Value = *(uint *)&this->field_0x18;
    aFStackX_8[0].Number = *(uint *)&this->field_0x1c;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  pFVar5 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this);
  if ((pFVar5 != (FLinkerLoad *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!GetLinker()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x457,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar4 = UObjectBaseUtility::GetLinkerIndex((UObjectBaseUtility *)this);
  if ((iVar4 != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetLinkerIndex() == INDEX_NONE",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\Obj.cpp"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UObject::DestroyNonNativeProperties((UObject *)this);
  pTVar8 = &DebugFinishDestroyed;
  pTVar7 = &DebugFinishDestroyed;
  if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar7 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugFinishDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)
          ((longlong)pTVar7 + (longlong)DebugFinishDestroyed.ArrayNum * 8);
  FVar6 = (ForElementType<UObject_*>)pTVar7;
  if ((ForElementType<UObject_*>)pTVar7 != FVar1) {
    while (*(UMockDataMeshTrackerComponent **)FVar6 != this) {
      FVar6 = (ForElementType<UObject_*>)((longlong)FVar6 + 8);
      if (FVar6 == FVar1) {
        return;
      }
    }
    iVar4 = (int)((longlong)FVar6 - (longlong)pTVar7 >> 3);
    if (iVar4 != -1) {
      if (DebugFinishDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar8 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugFinishDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar8 + (longlong)iVar4 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugFinishDestroyed.ArrayNum - iVar4) + -1) << 3);
      DebugFinishDestroyed.ArrayNum = DebugFinishDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// GetPrivateStaticClass @ 146c6c0b0

UClass * __cdecl UMockDataMeshTrackerComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MRMesh",L"MockDataMeshTrackerComponent",
               &Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.InnerSingleton,
               StaticRegisterNativesUMockDataMeshTrackerComponent,0x2d0,0x10,
               CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UMockDataMeshTrackerComponent>,
               InternalVTableHelperCtorCaller<UMockDataMeshTrackerComponent>,local_res8,
               USceneComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMockDataMeshTrackerComponent.InnerSingleton;
}

// RemoveBlock @ 146c6d060

void __thiscall
UMockDataMeshTrackerComponent::RemoveBlock(UMockDataMeshTrackerComponent *this,int param_1)

{
  FMockDataMeshTrackerImpl *pFVar1;
  longlong lVar2;
  UMRMeshComponent *pUVar3;
  int iVar4;
  ulong64 *puVar5;
  undefined1 *puVar6;
  longlong *plVar7;
  uint local_118 [2];
  undefined8 local_110;
  undefined8 local_108;
  ulong64 local_100;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_f8;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_f0;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *local_e8;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_e0;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 local_28;
  undefined4 uStack_27;
  undefined2 uStack_23;
  undefined1 uStack_21;
  
  pFVar1 = this->Impl;
  if (*(int *)&(pFVar1->MeshBrickCache).field_0x8 != *(int *)&(pFVar1->MeshBrickCache).field_0x34) {
    puVar6 = *(undefined1 **)&(pFVar1->MeshBrickCache).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(pFVar1->MeshBrickCache).field_0x38;
    }
    iVar4 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(pFVar1->MeshBrickCache).field_0x48 - 1U & param_1) * 4);
    if (iVar4 != -1) {
      while (*(int *)(*(longlong *)&pFVar1->MeshBrickCache + (longlong)iVar4 * 0x18) != param_1) {
        iVar4 = *(int *)(*(longlong *)&pFVar1->MeshBrickCache + 0x10 + (longlong)iVar4 * 0x18);
        if (iVar4 == -1) {
          return;
        }
      }
      lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      if (*(int *)(lVar2 + 0x9d4c) < ::_TSS0) {
        _Init_thread_header(&::_TSS0);
        if (::_TSS0 == -1) {
          atexit(`UMockDataMeshTrackerComponent::RemoveBlock'::__l5::
                 _dynamic_atexit_destructor_for__EmptyVertices__);
          _Init_thread_footer(&::_TSS0);
        }
      }
      if (*(int *)(lVar2 + 0x9d4c) < ::_TSS1) {
        _Init_thread_header(&::_TSS1);
        if (::_TSS1 == -1) {
          atexit(`UMockDataMeshTrackerComponent::RemoveBlock'::__l5::
                 _dynamic_atexit_destructor_for__EmptyUVs__);
          _Init_thread_footer(&::_TSS1);
        }
      }
      if (*(int *)(lVar2 + 0x9d4c) < ::_TSS2) {
        _Init_thread_header(&::_TSS2);
        if (::_TSS2 == -1) {
          atexit(`UMockDataMeshTrackerComponent::RemoveBlock'::__l5::
                 _dynamic_atexit_destructor_for__EmptyTangents__);
          _Init_thread_footer(&::_TSS2);
        }
      }
      if (*(int *)(lVar2 + 0x9d4c) < ::_TSS3) {
        _Init_thread_header(&::_TSS3);
        if (::_TSS3 == -1) {
          atexit(`UMockDataMeshTrackerComponent::RemoveBlock'::__l5::
                 _dynamic_atexit_destructor_for__EmptyVertexColors__);
          _Init_thread_footer(&::_TSS3);
        }
      }
      if (*(int *)(lVar2 + 0x9d4c) < ::_TSS4) {
        _Init_thread_header(&::_TSS4);
        if (::_TSS4 == -1) {
          atexit(`UMockDataMeshTrackerComponent::RemoveBlock'::__l5::
                 _dynamic_atexit_destructor_for__EmptyTriangles__);
          _Init_thread_footer(&::_TSS4);
        }
      }
      puVar5 = TMapBase<unsigned_int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned___int64,0>_>
               ::FindChecked((TMapBase<unsigned_int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned___int64,0>_>
                              *)&this->Impl->MeshBrickCache,param_1);
      pUVar3 = (this->MRMesh).field0_0x0.DebugPtr;
      local_28 = 0;
      plVar7 = (longlong *)&pUVar3->field_0x548;
      if (pUVar3 == (UMRMeshComponent *)0x0) {
        plVar7 = (longlong *)0x0;
      }
      local_110 = 0;
      local_108 = 0;
      local_100 = *puVar5;
      uStack_27 = 0;
      uStack_23 = 0;
      uStack_21 = 0;
      local_a0 = 0;
      local_f8 = &EmptyVertices;
      local_f0 = &EmptyUVs;
      local_e8 = &EmptyTangents;
      local_e0 = &EmptyVertexColors;
      local_d8 = &EmptyTriangles;
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_110);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)0x0);
      pFVar1 = this->Impl;
      if (*(int *)&(pFVar1->MeshBrickCache).field_0x8 !=
          *(int *)&(pFVar1->MeshBrickCache).field_0x34) {
        local_118[0] = param_1;
        TSet<TTuple<unsigned_int,unsigned___int64>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned___int64,0>,FDefaultSetAllocator>
        ::RemoveImpl<unsigned_int>
                  ((TSet<TTuple<unsigned_int,unsigned___int64>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned___int64,0>,FDefaultSetAllocator>
                    *)&pFVar1->MeshBrickCache,param_1,local_118);
      }
    }
  }
  return;
}

// StaticRegisterNativesUMockDataMeshTrackerComponent @ 146c70680

void __cdecl UMockDataMeshTrackerComponent::StaticRegisterNativesUMockDataMeshTrackerComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UMockDataMeshTrackerComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TickComponent @ 146c70700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UMockDataMeshTrackerComponent::TickComponent
          (UMockDataMeshTrackerComponent *this,float param_1,ELevelTick param_2,
          FActorComponentTickFunction *param_3)

{
  int iVar1;
  int iVar2;
  UMRMeshComponent *pUVar3;
  code *pcVar4;
  bool bVar5;
  float fVar6;
  
  UActorComponent::TickComponent((UActorComponent *)this,param_1,param_2,param_3);
  pUVar3 = (this->MRMesh).field0_0x0.DebugPtr;
  if (pUVar3 != (UMRMeshComponent *)0x0) {
    (**(code **)(*(longlong *)&pUVar3->field_0x548 + 0x10))();
    fVar6 = param_1 + this->CurrentTime;
    this->CurrentTime = fVar6;
    if ((this->ScanWorld != false) && (this->UpdateInterval + this->LastUpdateTime < fVar6)) {
      this->UpdateCount = this->UpdateCount + 1;
      bVar5 = MockDataPattern == 0;
      this->LastUpdateTime = fVar6;
      if (bVar5) {
        if (this->NumBlocks < 3) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumBlocks >= 3",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MockDataMeshTrackerComponent.cpp"
                             ,0x17d,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        iVar1 = this->UpdateCount;
        iVar2 = this->NumBlocks;
        if (4 < (byte)LogMockMeshDataTracker._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMockMeshDataTracker);
        }
        UpdateBlock(this,iVar1 % iVar2);
        UpdateBlock(this,(iVar1 + -1) % iVar2);
        RemoveBlock(this,((iVar1 - iVar2) + 1) % iVar2);
      }
      else {
        if (4 < (byte)LogMockMeshDataTracker._0_1_) {
          UE::Logging::Private::BasicLog<5>
                    (&::LOG_Static,(FLogCategoryBase *)&LogMockMeshDataTracker);
        }
        UpdateBlock(this,0);
        UpdateBlock(this,1);
        UpdateBlock(this,2);
        UpdateBlock(this,3);
      }
      if (bStopScanningEveryUpdate != false) {
        this->ScanWorld = false;
      }
    }
  }
  return;
}

// UpdateBlock @ 146c70c30

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UMockDataMeshTrackerComponent::UpdateBlock(UMockDataMeshTrackerComponent *this,int param_1)

{
  int *piVar1;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  EMeshTrackerVertexColorMode EVar8;
  FMockDataMeshTrackerImpl *pFVar9;
  FScriptContainerElement *pFVar10;
  ulong64 uVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  UMRMeshComponent *pUVar15;
  code *pcVar16;
  undefined8 uVar17;
  double dVar18;
  double dVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  FCachedMeshData *pFVar23;
  UMockDataMeshTrackerComponent *pUVar24;
  bool bVar25;
  bool bVar26;
  int iVar27;
  uint uVar28;
  int iVar29;
  ulong64 *puVar30;
  longlong *plVar31;
  undefined1 uVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  uint uVar35;
  FStaticBasicLogRecord *pFVar36;
  undefined1 *puVar37;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar38;
  longlong *plVar39;
  uint uVar40;
  longlong *plVar41;
  uint uVar42;
  longlong lVar43;
  FScriptContainerElement *pFVar44;
  ulonglong uVar45;
  ulonglong uVar46;
  longlong *plVar47;
  longlong lVar48;
  longlong lVar49;
  double dVar50;
  double dVar51;
  float fVar52;
  double dVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> local_2c8;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  float local_2a8;
  uint local_2a4;
  int local_2a0;
  float local_29c;
  float fStack_298;
  float local_294;
  TArray<int,TSizedDefaultAllocator<32>_> local_290;
  int local_280 [2];
  double local_278;
  double dStack_270;
  double local_268;
  UMockDataMeshTrackerComponent *local_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  TPairInitializer<unsigned_int_&&,unsigned___int64_&&> local_230;
  longlong local_220;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  double local_208;
  double local_200;
  double dStack_1f8;
  double local_1f0;
  int *local_1e8;
  ulong64 **local_1e0;
  longlong *local_1d8;
  longlong *local_1d0;
  ulong64 local_1c8;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_1c0;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_1b8;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *local_1b0;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_1a8;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined4 uStack_167;
  undefined2 uStack_163;
  undefined1 uStack_161;
  double local_158;
  longlong *local_150;
  longlong *local_148;
  ulong64 local_140;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *local_138;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> *local_130;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *local_128;
  TArray<FColor,TSizedDefaultAllocator<32>_> *local_120;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  FReadAccessScope local_d8 [6];
  
  pFVar9 = this->Impl;
  bVar26 = false;
  lVar43 = (longlong)param_1;
  local_2a0 = param_1;
  local_260 = this;
  if (*(int *)&(pFVar9->MeshBrickCache).field_0x8 != *(int *)&(pFVar9->MeshBrickCache).field_0x34) {
    puVar37 = *(undefined1 **)&(pFVar9->MeshBrickCache).field_0x40;
    if (puVar37 == (undefined1 *)0x0) {
      puVar37 = &(pFVar9->MeshBrickCache).field_0x38;
    }
    iVar27 = *(int *)(puVar37 +
                     (ulonglong)(*(int *)&(pFVar9->MeshBrickCache).field_0x48 - 1U & param_1) * 4);
    if (iVar27 != -1) {
      lVar48 = *(longlong *)&(pFVar9->MeshBrickCache).field_0x0;
      do {
        if (*(int *)(lVar48 + (longlong)iVar27 * 0x18) == param_1) goto LAB_146c70cdd;
        iVar27 = *(int *)(lVar48 + 0x10 + (longlong)iVar27 * 0x18);
      } while (iVar27 != -1);
    }
  }
  local_230.Value = (ulong64 *)(longlong)pFVar9->MeshBrickIndex;
  pFVar9->MeshBrickIndex = pFVar9->MeshBrickIndex + 1;
  local_1e8 = local_280;
  local_1e0 = &local_230.Value;
  local_280[0] = param_1;
  TSet<TTuple<unsigned_int,unsigned___int64>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned___int64,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned_int_&&,unsigned___int64_&&>_>
            ((TSet<TTuple<unsigned_int,unsigned___int64>,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned___int64,0>,FDefaultSetAllocator>
              *)&pFVar9->MeshBrickCache,&local_230,(bool *)&local_1e8);
  bVar26 = true;
LAB_146c70cdd:
  pFVar9 = this->Impl;
  uVar35 = 0;
  if (param_1 < (pFVar9->RawMockMeshData).ArrayNum) {
    uVar35 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar35 == 0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar25)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  pFVar10 = (pFVar9->RawMockMeshData).AllocatorInstance.Data;
  FMockDataMeshTrackerImpl::AquireMeshDataCache(this->Impl,&local_2c8);
  puVar30 = TMapBase<unsigned_int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned___int64,0>_>
            ::FindChecked((TMapBase<unsigned_int,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,unsigned___int64,0>_>
                           *)&this->Impl->MeshBrickCache,param_1);
  uVar11 = *puVar30;
  if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
     (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar25)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  (local_2c8.Object)->BrickId = uVar11;
  if (bVar26) {
    local_200 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                 UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
    dStack_1f8 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                  UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
    local_1f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  else {
    local_200 = 0.0;
    dStack_1f8 = 0.0;
    uVar17 = __real_402e000000000000;
  }
  uVar35 = *(uint *)(pFVar10 + lVar43 * 0x30 + 8);
  lVar48 = (longlong)(int)uVar35;
  local_218 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
  uStack_214 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
  uStack_210 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  uStack_20c = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  local_208 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_2a4 = uVar35;
  if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar26)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
  }
  if (((local_2c8.Object)->OffsetVertices).ArrayMax < (int)uVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar35,&((local_2c8.Object)->OffsetVertices).AllocatorInstance,
               ((local_2c8.Object)->OffsetVertices).ArrayNum,
               &((local_2c8.Object)->OffsetVertices).ArrayMax);
  }
  if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar26)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if (((local_2c8.Object)->WorldVertices).ArrayMax < (int)uVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,uVar35,&((local_2c8.Object)->WorldVertices).AllocatorInstance,
               ((local_2c8.Object)->WorldVertices).ArrayNum,
               &((local_2c8.Object)->WorldVertices).ArrayMax);
  }
  dVar51 = dStack_1f8;
  dVar19 = local_200;
  dVar18 = local_208;
  uVar40 = 0;
  local_220 = lVar48;
  if (0 < (int)uVar35) {
    lVar49 = 0;
    dVar6 = (double)CONCAT44(uStack_20c,uStack_210);
    dVar5 = (double)CONCAT44(uStack_214,local_218);
    do {
      if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar23 = local_2c8.Object;
      uVar35 = 0;
      if ((int)uVar40 < *(int *)(pFVar10 + lVar43 * 0x30 + 8)) {
        uVar35 = ~uVar40 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      lVar12 = *(longlong *)(pFVar10 + lVar43 * 0x30);
      dStack_240 = (*(double *)(lVar12 + 8 + lVar49) - dVar6) + dVar51;
      local_238 = (*(double *)(lVar12 + 0x10 + lVar49) - dVar18) + (double)uVar17;
      local_248 = (*(double *)(lVar12 + lVar49) - dVar5) + dVar19;
      pFVar13 = (pFVar23->OffsetVertices).AllocatorInstance.Data;
      if (((pFVar13 <= (FScriptContainerElement *)&local_248) &&
          ((FScriptContainerElement *)&local_248 <
           pFVar13 + (longlong)(pFVar23->OffsetVertices).ArrayMax * 0x18)) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar27 = (pFVar23->OffsetVertices).ArrayNum;
      piVar1 = &(pFVar23->OffsetVertices).ArrayMax;
      if (iVar27 == *piVar1) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,&(pFVar23->OffsetVertices).AllocatorInstance,piVar1);
      }
      (pFVar23->OffsetVertices).ArrayNum = iVar27 + 1;
      pFVar44 = (pFVar23->OffsetVertices).AllocatorInstance.Data;
      pFVar13 = pFVar44 + (longlong)iVar27 * 0x18;
      *(double *)pFVar13 = local_248;
      *(double *)(pFVar13 + 8) = dStack_240;
      *(double *)(pFVar44 + (longlong)iVar27 * 0x18 + 0x10) = local_238;
      if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar23 = local_2c8.Object;
      uVar35 = 0;
      if ((int)uVar40 < *(int *)(pFVar10 + lVar43 * 0x30 + 8)) {
        uVar35 = ~uVar40 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      lVar12 = *(longlong *)(pFVar10 + lVar43 * 0x30);
      local_29c = (float)(dVar19 + *(double *)(lVar12 + lVar49));
      fStack_298 = (float)(dVar51 + *(double *)(lVar12 + 8 + lVar49));
      local_294 = (float)((double)uVar17 + *(double *)(lVar12 + 0x10 + lVar49));
      pFVar13 = (pFVar23->WorldVertices).AllocatorInstance.Data;
      if (((pFVar13 <= (FScriptContainerElement *)&local_29c) &&
          ((FScriptContainerElement *)&local_29c <
           pFVar13 + (longlong)(pFVar23->WorldVertices).ArrayMax * 0xc)) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar27 = (pFVar23->WorldVertices).ArrayNum;
      piVar1 = &(pFVar23->WorldVertices).ArrayMax;
      if (iVar27 == *piVar1) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x40c,&(pFVar23->WorldVertices).AllocatorInstance,piVar1);
      }
      uVar40 = uVar40 + 1;
      (pFVar23->WorldVertices).ArrayNum = iVar27 + 1;
      lVar49 = lVar49 + 0x18;
      pFVar13 = (pFVar23->WorldVertices).AllocatorInstance.Data;
      *(ulonglong *)(pFVar13 + (longlong)iVar27 * 0xc) = CONCAT44(fStack_298,local_29c);
      *(float *)(pFVar13 + (longlong)iVar27 * 0xc + 8) = local_294;
      lVar48 = lVar48 + -1;
      uVar35 = local_2a4;
    } while (lVar48 != 0);
  }
  uVar40 = *(uint *)(pFVar10 + lVar43 * 0x30 + 0x28);
  if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar26)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
  }
  piVar1 = &((local_2c8.Object)->Triangles).ArrayMax;
  if (*piVar1 < (int)uVar40) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar40,&((local_2c8.Object)->Triangles).AllocatorInstance,
               ((local_2c8.Object)->Triangles).ArrayNum,piVar1);
  }
  uVar42 = 0;
  if (0 < (int)uVar40) {
    lVar48 = 0;
    do {
      if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar23 = local_2c8.Object;
      uVar28 = 0;
      if ((int)uVar42 < *(int *)(pFVar10 + lVar43 * 0x30 + 0x28)) {
        uVar28 = ~uVar42 >> 0x1f;
      }
      if ((uVar28 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      local_2ac = *(undefined4 *)(*(longlong *)(pFVar10 + lVar43 * 0x30 + 0x20) + lVar48 * 4);
      pFVar13 = (pFVar23->Triangles).AllocatorInstance.Data;
      if (((pFVar13 <= (FScriptContainerElement *)&local_2ac) &&
          ((FScriptContainerElement *)&local_2ac <
           pFVar13 + (longlong)(pFVar23->Triangles).ArrayMax * 4)) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar27 = (pFVar23->Triangles).ArrayNum;
      piVar1 = &(pFVar23->Triangles).ArrayMax;
      if (iVar27 == *piVar1) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(pFVar23->Triangles).AllocatorInstance,piVar1);
      }
      (pFVar23->Triangles).ArrayNum = iVar27 + 1;
      uVar42 = uVar42 + 1;
      lVar48 = lVar48 + 1;
      *(undefined4 *)((pFVar23->Triangles).AllocatorInstance.Data + (longlong)iVar27 * 4) =
           local_2ac;
    } while (lVar48 < (int)uVar40);
  }
  if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar26)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if (((local_2c8.Object)->Normals).ArrayMax < (int)uVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar35,&((local_2c8.Object)->Normals).AllocatorInstance,
               ((local_2c8.Object)->Normals).ArrayNum,&((local_2c8.Object)->Normals).ArrayMax);
  }
  dVar19 = __real_3e45798ee0000000;
  dVar18 = __real_3ff0000000000000;
  uVar46 = 0;
  if (local_260->RequestNormals == false) {
    lVar48 = (longlong)(int)uVar35;
    uVar45 = uVar46;
    lVar43 = lVar48;
    if (0 < (int)uVar35) {
      do {
        if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar26)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar23 = local_2c8.Object;
        uVar42 = (uint)uVar45;
        uVar40 = 0;
        if ((int)uVar42 < ((local_2c8.Object)->OffsetVertices).ArrayNum) {
          uVar40 = ~uVar42 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar13 = (pFVar23->OffsetVertices).AllocatorInstance.Data;
        pFVar10 = pFVar13 + uVar46;
        local_278 = *(double *)pFVar10;
        dStack_270 = *(double *)(pFVar10 + 8);
        local_268 = *(double *)(pFVar13 + uVar46 + 0x10);
        dVar51 = dStack_270 * dStack_270 + local_278 * local_278 + local_268 * local_268;
        if (dVar19 < dVar51) {
          local_158 = dVar18 / SQRT(dVar51);
          local_278 = local_278 * local_158;
          dStack_270 = dStack_270 * local_158;
          local_268 = local_268 * local_158;
        }
        if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar26)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar23 = local_2c8.Object;
        pFVar10 = ((local_2c8.Object)->Normals).AllocatorInstance.Data;
        if (((pFVar10 <= (FScriptContainerElement *)&local_278) &&
            ((FScriptContainerElement *)&local_278 <
             pFVar10 + (longlong)((local_2c8.Object)->Normals).ArrayMax * 0x18)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        iVar27 = (pFVar23->Normals).ArrayNum;
        piVar1 = &(pFVar23->Normals).ArrayMax;
        if (iVar27 == *piVar1) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(pFVar23->Normals).AllocatorInstance,piVar1);
        }
        (pFVar23->Normals).ArrayNum = iVar27 + 1;
        uVar46 = uVar46 + 0x18;
        pFVar13 = (pFVar23->Normals).AllocatorInstance.Data;
        pFVar10 = pFVar13 + (longlong)iVar27 * 0x18;
        *(double *)pFVar10 = local_278;
        *(double *)(pFVar10 + 8) = dStack_270;
        *(double *)(pFVar13 + (longlong)iVar27 * 0x18 + 0x10) = local_268;
        lVar43 = lVar43 + -1;
        uVar45 = (ulonglong)(uVar42 + 1);
      } while (lVar43 != 0);
    }
  }
  else {
    lVar49 = (longlong)(int)uVar35;
    uVar45 = uVar46;
    if ((int)uVar35 < 1) {
      lVar48 = (longlong)(int)uVar35;
    }
    else {
      do {
        if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar26)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar23 = local_2c8.Object;
        uVar40 = (uint)uVar46;
        uVar35 = 0;
        if ((int)uVar40 < *(int *)(pFVar10 + lVar43 * 0x30 + 0x18)) {
          uVar35 = ~uVar40 >> 0x1f;
        }
        if ((uVar35 == 0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar26)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar13 = (pFVar23->Normals).AllocatorInstance.Data;
        pFVar44 = (FScriptContainerElement *)
                  (*(longlong *)(pFVar10 + lVar43 * 0x30 + 0x10) + uVar45);
        if (((pFVar13 <= pFVar44) &&
            (pFVar44 < pFVar13 + (longlong)(pFVar23->Normals).ArrayMax * 0x18)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        iVar27 = (pFVar23->Normals).ArrayNum;
        piVar1 = &(pFVar23->Normals).ArrayMax;
        if (iVar27 == *piVar1) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&(pFVar23->Normals).AllocatorInstance,piVar1);
        }
        uVar46 = (ulonglong)(uVar40 + 1);
        (pFVar23->Normals).ArrayNum = iVar27 + 1;
        uVar17 = *(undefined8 *)(pFVar44 + 8);
        pFVar14 = (pFVar23->Normals).AllocatorInstance.Data;
        pFVar13 = pFVar14 + (longlong)iVar27 * 0x18;
        *(undefined8 *)pFVar13 = *(undefined8 *)pFVar44;
        *(undefined8 *)(pFVar13 + 8) = uVar17;
        *(undefined8 *)(pFVar14 + (longlong)iVar27 * 0x18 + 0x10) = *(undefined8 *)(pFVar44 + 0x10);
        lVar49 = lVar49 + -1;
        lVar48 = local_220;
        uVar45 = uVar45 + 0x18;
        uVar35 = local_2a4;
      } while (lVar49 != 0);
    }
  }
  uVar46 = 0;
  if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar26)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  uVar40 = uVar35 * 2;
  if ((int)uVar40 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar40);
  }
  piVar1 = &((local_2c8.Object)->Tangents).ArrayMax;
  if (*piVar1 < (int)uVar40) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar40,&((local_2c8.Object)->Tangents).AllocatorInstance,
               ((local_2c8.Object)->Tangents).ArrayNum,piVar1);
  }
  dVar51 = __real_406fc00000000000;
  dVar19 = __real_3fe0000000000000;
  uVar45 = uVar46;
  if (0 < lVar48) {
    do {
      if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar23 = local_2c8.Object;
      uVar42 = (uint)uVar45;
      uVar40 = 0;
      if ((int)uVar42 < ((local_2c8.Object)->Normals).ArrayNum) {
        uVar40 = ~uVar42 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar10 = (pFVar23->Normals).AllocatorInstance.Data;
      dVar5 = *(double *)(pFVar10 + uVar46 + 0x10);
      dVar6 = *(double *)(pFVar10 + uVar46);
      if (dVar5 <= dVar6) {
        dVar50 = 0.0;
        dVar53 = dVar18;
      }
      else {
        dVar50 = dVar18;
        dVar53 = 0.0;
      }
      dVar7 = *(double *)(pFVar10 + uVar46 + 8);
      if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar23 = local_2c8.Object;
      iVar29 = (int)ROUND(dVar19 - dVar53 * dVar5 * dVar51) >> 1;
      iVar27 = 0x7f;
      if (iVar29 < 0x7f) {
        iVar27 = iVar29;
      }
      uVar32 = 0x80;
      if (-0x80 < iVar27) {
        uVar32 = (char)iVar27;
      }
      iVar29 = (int)ROUND(dVar50 * dVar5 * dVar51 + dVar19) >> 1;
      iVar27 = 0x7f;
      if (iVar29 < 0x7f) {
        iVar27 = iVar29;
      }
      uVar33 = 0x80;
      if (-0x80 < iVar27) {
        uVar33 = (char)iVar27;
      }
      iVar29 = (int)ROUND((dVar53 * dVar6 - dVar50 * dVar7) * dVar51 + dVar19) >> 1;
      iVar27 = 0x7f;
      if (iVar29 < 0x7f) {
        iVar27 = iVar29;
      }
      uVar34 = 0x80;
      if (-0x80 < iVar27) {
        uVar34 = (char)iVar27;
      }
      local_2b8 = CONCAT13(0x7f,CONCAT12(uVar34,CONCAT11(uVar33,uVar32)));
      pFVar13 = ((local_2c8.Object)->Tangents).AllocatorInstance.Data;
      if (((pFVar13 <= (FScriptContainerElement *)&local_2b8) &&
          ((FScriptContainerElement *)&local_2b8 <
           pFVar13 + (longlong)((local_2c8.Object)->Tangents).ArrayMax * 4)) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar27 = (pFVar23->Tangents).ArrayNum;
      piVar1 = &(pFVar23->Tangents).ArrayMax;
      if (iVar27 == *piVar1) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(pFVar23->Tangents).AllocatorInstance,piVar1);
      }
      (pFVar23->Tangents).ArrayNum = iVar27 + 1;
      *(undefined4 *)((pFVar23->Tangents).AllocatorInstance.Data + (longlong)iVar27 * 4) = local_2b8
      ;
      if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar23 = local_2c8.Object;
      iVar29 = (int)ROUND(*(double *)(pFVar10 + uVar46) * dVar51 + dVar19) >> 1;
      iVar27 = 0x7f;
      if (iVar29 < 0x7f) {
        iVar27 = iVar29;
      }
      uVar32 = 0x80;
      if (-0x80 < iVar27) {
        uVar32 = (char)iVar27;
      }
      iVar29 = (int)ROUND(*(double *)(pFVar10 + uVar46 + 8) * dVar51 + dVar19) >> 1;
      iVar27 = 0x7f;
      if (iVar29 < 0x7f) {
        iVar27 = iVar29;
      }
      uVar33 = 0x80;
      if (-0x80 < iVar27) {
        uVar33 = (char)iVar27;
      }
      iVar29 = (int)ROUND(*(double *)(pFVar10 + uVar46 + 0x10) * dVar51 + dVar19) >> 1;
      iVar27 = 0x7f;
      if (iVar29 < 0x7f) {
        iVar27 = iVar29;
      }
      uVar34 = 0x80;
      if (-0x80 < iVar27) {
        uVar34 = (char)iVar27;
      }
      local_2b4 = CONCAT13(0x7f,CONCAT12(uVar34,CONCAT11(uVar33,uVar32)));
      pFVar10 = ((local_2c8.Object)->Tangents).AllocatorInstance.Data;
      if (((pFVar10 <= (FScriptContainerElement *)&local_2b4) &&
          ((FScriptContainerElement *)&local_2b4 <
           pFVar10 + (longlong)((local_2c8.Object)->Tangents).ArrayMax * 4)) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar27 = (pFVar23->Tangents).ArrayNum;
      piVar1 = &(pFVar23->Tangents).ArrayMax;
      if (iVar27 == *piVar1) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(pFVar23->Tangents).AllocatorInstance,piVar1);
      }
      (pFVar23->Tangents).ArrayNum = iVar27 + 1;
      uVar46 = uVar46 + 0x18;
      *(undefined4 *)((pFVar23->Tangents).AllocatorInstance.Data + (longlong)iVar27 * 4) = local_2b4
      ;
      lVar48 = lVar48 + -1;
      uVar45 = (ulonglong)(uVar42 + 1);
    } while (lVar48 != 0);
    lVar48 = (longlong)(int)uVar35;
  }
  pUVar24 = local_260;
  iVar27 = local_2a0;
  if (local_260->RequestVertexConfidence != false) {
    if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    if (((local_2c8.Object)->Confidence).ArrayMax < (int)uVar35) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar35,&((local_2c8.Object)->Confidence).AllocatorInstance,
                 ((local_2c8.Object)->Confidence).ArrayNum,
                 &((local_2c8.Object)->Confidence).ArrayMax);
    }
    iVar27 = local_2a0;
    local_2a8 = (float)local_2a0 / (float)pUVar24->NumBlocks;
    if (0 < (int)uVar35) {
      uVar46 = (ulonglong)uVar35;
      do {
        if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar26)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar23 = local_2c8.Object;
        pTVar38 = &(local_2c8.Object)->Confidence;
        pFVar10 = (pTVar38->AllocatorInstance).Data;
        if (((pFVar10 <= (FScriptContainerElement *)&local_2a8) &&
            ((FScriptContainerElement *)&local_2a8 <
             pFVar10 + (longlong)((local_2c8.Object)->Confidence).ArrayMax * 4)) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar26)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        iVar29 = (pFVar23->Confidence).ArrayNum;
        piVar1 = &(pFVar23->Confidence).ArrayMax;
        if (iVar29 == *piVar1) {
          iVar29 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar38->AllocatorInstance,piVar1);
        }
        (pFVar23->Confidence).ArrayNum = iVar29 + 1;
        *(float *)((pTVar38->AllocatorInstance).Data + (longlong)iVar29 * 4) = local_2a8;
        uVar46 = uVar46 - 1;
      } while (uVar46 != 0);
    }
  }
  fVar20 = __real_3f800000;
  EVar8 = pUVar24->VertexColorMode;
  if (EVar8 == None) goto LAB_146c72248;
  if (EVar8 == Confidence) {
    if (pUVar24->RequestVertexConfidence != false) {
      if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      if (((local_2c8.Object)->VertexColors).ArrayMax < (int)uVar35) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar35,&((local_2c8.Object)->VertexColors).AllocatorInstance,
                   ((local_2c8.Object)->VertexColors).ArrayNum,
                   &((local_2c8.Object)->VertexColors).ArrayMax);
      }
      fVar22 = __real_437f0000;
      fVar21 = __real_3f000000;
      uVar40 = 0;
      if (0 < lVar48) {
        lVar43 = 0;
        do {
          if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar26)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar23 = local_2c8.Object;
          uVar42 = 0;
          if ((int)uVar40 < ((local_2c8.Object)->Confidence).ArrayNum) {
            uVar42 = ~uVar40 >> 0x1f;
          }
          if ((uVar42 == 0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar26)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          fVar52 = (pUVar24->VertexColorFromConfidenceZero).field0_0x0._s_0.R;
          fVar54 = (pUVar24->VertexColorFromConfidenceZero).field0_0x0._s_0.G;
          fVar55 = (pUVar24->VertexColorFromConfidenceZero).field0_0x0._s_0.B;
          fVar56 = (pUVar24->VertexColorFromConfidenceZero).field0_0x0._s_0.A;
          fVar4 = *(float *)((pFVar23->Confidence).AllocatorInstance.Data + lVar43 * 4);
          fVar52 = ((pUVar24->VertexColorFromConfidenceOne).field0_0x0._s_0.R - fVar52) * fVar4 +
                   fVar52;
          fVar54 = ((pUVar24->VertexColorFromConfidenceOne).field0_0x0._s_0.G - fVar54) * fVar4 +
                   fVar54;
          fVar55 = ((pUVar24->VertexColorFromConfidenceOne).field0_0x0._s_0.B - fVar55) * fVar4 +
                   fVar55;
          fVar56 = ((pUVar24->VertexColorFromConfidenceOne).field0_0x0._s_0.A - fVar56) * fVar4 +
                   fVar56;
          if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar26)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar23 = local_2c8.Object;
          if (fVar55 <= 0.0) {
            fVar55 = 0.0;
          }
          if (fVar54 <= 0.0) {
            fVar54 = 0.0;
          }
          if (fVar52 <= 0.0) {
            fVar52 = 0.0;
          }
          if (fVar56 <= 0.0) {
            fVar56 = 0.0;
          }
          if (fVar20 <= fVar55) {
            fVar55 = fVar20;
          }
          if (fVar20 <= fVar54) {
            fVar54 = fVar20;
          }
          if (fVar20 <= fVar52) {
            fVar52 = fVar20;
          }
          if (fVar20 <= fVar56) {
            fVar56 = fVar20;
          }
          local_2b0 = CONCAT13((char)(int)(fVar56 * fVar22 + fVar21),
                               CONCAT12((char)(int)(fVar52 * fVar22 + fVar21),
                                        CONCAT11((char)(int)(fVar54 * fVar22 + fVar21),
                                                 (char)(int)(fVar55 * fVar22 + fVar21))));
          pFVar10 = ((local_2c8.Object)->VertexColors).AllocatorInstance.Data;
          if (((pFVar10 <= (FScriptContainerElement *)&local_2b0) &&
              ((FScriptContainerElement *)&local_2b0 <
               pFVar10 + (longlong)((local_2c8.Object)->VertexColors).ArrayMax * 4)) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar26)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          iVar27 = (pFVar23->VertexColors).ArrayNum;
          piVar1 = &(pFVar23->VertexColors).ArrayMax;
          if (iVar27 == *piVar1) {
            iVar27 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(pFVar23->VertexColors).AllocatorInstance,piVar1);
          }
          (pFVar23->VertexColors).ArrayNum = iVar27 + 1;
          uVar40 = uVar40 + 1;
          lVar43 = lVar43 + 1;
          *(undefined4 *)((pFVar23->VertexColors).AllocatorInstance.Data + (longlong)iVar27 * 4) =
               local_2b0;
        } while (lVar43 < lVar48);
      }
      goto LAB_146c72248;
    }
    if ((byte)LogMockMeshDataTracker._0_1_ < 3) goto LAB_146c72248;
    pFVar36 = &::LOG_Static;
  }
  else {
    if (EVar8 != Block) {
      bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MockDataMeshTrackerComponent.cpp"
                          ,0x241,L"");
      if (bVar26) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      goto LAB_146c72248;
    }
    iVar29 = (pUVar24->BlockVertexColors).ArrayNum;
    if (0 < iVar29) {
      uVar42 = iVar27 % iVar29;
      uVar40 = 0;
      if ((int)uVar42 < iVar29) {
        uVar40 = ~uVar42 >> 0x1f;
      }
      if ((uVar40 == 0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar10 = (pUVar24->BlockVertexColors).AllocatorInstance.Data + (longlong)(int)uVar42 * 4;
      if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      if (((local_2c8.Object)->VertexColors).ArrayMax < (int)uVar35) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar35,&((local_2c8.Object)->VertexColors).AllocatorInstance,
                   ((local_2c8.Object)->VertexColors).ArrayNum,
                   &((local_2c8.Object)->VertexColors).ArrayMax);
      }
      if (0 < (int)uVar35) {
        uVar46 = (ulonglong)uVar35;
        do {
          if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar26)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          pFVar23 = local_2c8.Object;
          pFVar13 = ((local_2c8.Object)->VertexColors).AllocatorInstance.Data;
          if (((pFVar13 <= pFVar10) &&
              (pFVar10 < pFVar13 + (longlong)((local_2c8.Object)->VertexColors).ArrayMax * 4)) &&
             (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar26)) {
            pcVar16 = (code *)swi(3);
            (*pcVar16)();
            return;
          }
          iVar27 = (pFVar23->VertexColors).ArrayNum;
          piVar1 = &(pFVar23->VertexColors).ArrayMax;
          if (iVar27 == *piVar1) {
            iVar27 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(pFVar23->VertexColors).AllocatorInstance,piVar1);
          }
          (pFVar23->VertexColors).ArrayNum = iVar27 + 1;
          *(undefined4 *)((pFVar23->VertexColors).AllocatorInstance.Data + (longlong)iVar27 * 4) =
               *(undefined4 *)pFVar10;
          uVar46 = uVar46 - 1;
        } while (uVar46 != 0);
      }
      goto LAB_146c72248;
    }
    if ((byte)LogMockMeshDataTracker._0_1_ < 3) goto LAB_146c72248;
    pFVar36 = &::LOG_Static;
  }
  UE::Logging::Private::BasicLog<3>(pFVar36,(FLogCategoryBase *)&LogMockMeshDataTracker);
LAB_146c72248:
  plVar39 = (longlong *)0x0;
  if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar26)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if (((local_2c8.Object)->VertexColors).ArrayNum == 0) {
    if (((local_2c8.Object)->VertexColors).ArrayMax < (int)uVar35) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar35,&((local_2c8.Object)->VertexColors).AllocatorInstance,
                 ((local_2c8.Object)->VertexColors).ArrayNum,
                 &((local_2c8.Object)->VertexColors).ArrayMax);
    }
    if (0 < (int)uVar35) {
      uVar46 = (ulonglong)uVar35;
      do {
        if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
           (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar26)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        pFVar23 = local_2c8.Object;
        pFVar10 = ((local_2c8.Object)->VertexColors).AllocatorInstance.Data;
        if (((pFVar10 < (FScriptContainerElement *)0x15067ec41) &&
            (&FColor::White < pFVar10 + (longlong)((local_2c8.Object)->VertexColors).ArrayMax * 4))
           && (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar26)) {
          pcVar16 = (code *)swi(3);
          (*pcVar16)();
          return;
        }
        iVar27 = (pFVar23->VertexColors).ArrayNum;
        piVar1 = &(pFVar23->VertexColors).ArrayMax;
        if (iVar27 == *piVar1) {
          iVar27 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(pFVar23->VertexColors).AllocatorInstance,piVar1);
        }
        (pFVar23->VertexColors).ArrayNum = iVar27 + 1;
        ((FColor_u_0 *)((pFVar23->VertexColors).AllocatorInstance.Data + (longlong)iVar27 * 4))->
        _s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
        uVar46 = uVar46 - 1;
      } while (uVar46 != 0);
    }
  }
  if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
     (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar26)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  if (((local_2c8.Object)->UV0).ArrayMax < (int)uVar35) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar35,&((local_2c8.Object)->UV0).AllocatorInstance,
               ((local_2c8.Object)->UV0).ArrayNum,&((local_2c8.Object)->UV0).ArrayMax);
  }
  if (0 < (int)uVar35) {
    plVar41 = plVar39;
    do {
      if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      pFVar23 = local_2c8.Object;
      local_258 = (double)((float)(int)plVar41 * (fVar20 / (float)(int)uVar35));
      pFVar10 = ((local_2c8.Object)->UV0).AllocatorInstance.Data;
      dStack_250 = local_258;
      if (((pFVar10 <= (FScriptContainerElement *)&local_258) &&
          ((FScriptContainerElement *)&local_258 <
           pFVar10 + (longlong)((local_2c8.Object)->UV0).ArrayMax * 0x10)) &&
         (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar26)) {
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
      iVar27 = (pFVar23->UV0).ArrayNum;
      piVar1 = &(pFVar23->UV0).ArrayMax;
      if (iVar27 == *piVar1) {
        iVar27 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&(pFVar23->UV0).AllocatorInstance,piVar1);
      }
      uVar40 = (int)plVar41 + 1;
      plVar41 = (longlong *)(ulonglong)uVar40;
      (pFVar23->UV0).ArrayNum = iVar27 + 1;
      pFVar10 = (pFVar23->UV0).AllocatorInstance.Data + (longlong)iVar27 * 0x10;
      *(double *)pFVar10 = local_258;
      *(double *)(pFVar10 + 8) = dStack_250;
    } while ((int)uVar40 < (int)uVar35);
  }
  pUVar15 = (pUVar24->MRMesh).field0_0x0.DebugPtr;
  plVar41 = (longlong *)&pUVar15->field_0x548;
  if (pUVar15 == (UMRMeshComponent *)0x0) {
    plVar41 = plVar39;
  }
  pcVar16 = *(code **)(*plVar41 + 0x18);
  plVar31 = ::operator_new(0x18);
  plVar47 = plVar39;
  if (plVar31 != (longlong *)0x0) {
    *plVar31 = (longlong)&___7FMeshTrackerComponentBrickDataReceipt_FMockDataMeshTrackerImpl__6B_;
    plVar31[1] = (longlong)local_2c8.Object;
    plVar31[2] = (longlong)local_2c8.SharedReferenceCount.ReferenceController;
    plVar47 = plVar31;
    if (local_2c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_2c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  local_1d8 = plVar47;
  plVar31 = ::operator_new(0x18);
  if (plVar31 != (longlong *)0x0) {
    *(undefined4 *)(plVar31 + 1) = 1;
    *(undefined4 *)((longlong)plVar31 + 0xc) = 1;
    *plVar31 = (longlong)
               &
               ___7__TReferenceControllerWithDeleter_VFMeshTrackerComponentBrickDataReceipt_FMockDataMeshTrackerImpl__U__DefaultDeleter_VFMeshTrackerComponentBrickDataReceipt_FMockDataMeshTrackerImpl___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    plVar31[2] = (longlong)plVar47;
    plVar39 = plVar31;
  }
  if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
     (local_1d0 = plVar39,
     bVar26 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar26)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  local_1c8 = (local_2c8.Object)->BrickId;
  local_1a8 = &(local_2c8.Object)->VertexColors;
  local_178 = 0;
  uStack_170 = 0;
  local_1c0 = &(local_2c8.Object)->WorldVertices;
  uStack_167 = 0;
  local_1b8 = &(local_2c8.Object)->UV0;
  uStack_163 = 0;
  local_1b0 = &(local_2c8.Object)->Tangents;
  uStack_161 = 0;
  local_1a0 = &(local_2c8.Object)->Triangles;
  local_f0 = 0;
  uStack_e8 = 0;
  local_168 = 0;
  local_e0 = 0;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_1d0 = (longlong *)0x0;
  local_1d8 = (longlong *)0x0;
  local_110 = 0;
  uStack_108 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_150 = plVar47;
  local_148 = plVar39;
  local_140 = local_1c8;
  local_138 = local_1c0;
  local_130 = local_1b8;
  local_128 = local_1b0;
  local_120 = local_1a8;
  local_118 = local_1a0;
  (*pcVar16)(plVar41,&local_150);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &pUVar24->OnMeshTrackerUpdated,local_d8);
  iVar27 = *(int *)&(pUVar24->OnMeshTrackerUpdated).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (local_d8);
  if (0 < iVar27) {
    if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    local_290.ArrayNum = ((local_2c8.Object)->Triangles).ArrayNum;
    lVar43 = (longlong)local_290.ArrayNum;
    pFVar10 = ((local_2c8.Object)->Triangles).AllocatorInstance.Data;
    local_290.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_290.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_290.ArrayNum);
    }
    if (((pFVar10 == (FScriptContainerElement *)0x0) && (local_290.ArrayNum != 0)) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ptr != nullptr || Count == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x2d3,L""), bVar26)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    if (local_290.ArrayNum == 0) {
      local_290.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_290.ArrayNum,0,&local_290.AllocatorInstance,local_290.ArrayNum,
                 &local_290.ArrayMax);
      memcpy(local_290.AllocatorInstance.Data,pFVar10,lVar43 << 2);
    }
    if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pTVar38 = &(local_2c8.Object)->Confidence;
    if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pTVar2 = &(local_2c8.Object)->Normals;
    if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    pTVar3 = &(local_2c8.Object)->OffsetVertices;
    if ((local_2c8.Object == (FCachedMeshData *)0x0) &&
       (bVar26 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar26)) {
      pcVar16 = (code *)swi(3);
      (*pcVar16)();
      return;
    }
    FOnMockDataMeshTrackerUpdated_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &pUVar24->OnMeshTrackerUpdated,(int)(local_2c8.Object)->BrickId,pTVar3,&local_290,
               pTVar2,pTVar38);
    if (local_290.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2c8.SharedReferenceCount.ReferenceController);
  return;
}

// execConnectMRMesh @ 146c73700

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UMockDataMeshTrackerComponent::execConnectMRMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  char cVar3;
  UObject *local_res10;
  
  local_res10 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pUVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res10 == (UObject *)0x0) {
    if (2 < (byte)LogMockMeshDataTracker._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMockMeshDataTracker);
      return;
    }
  }
  else if (*(longlong *)(param_1 + 0x11) == 0) {
    cVar3 = (**(code **)(*(longlong *)&local_res10[0x21].field_0x20 + 8))
                      (&local_res10[0x21].field_0x20);
    if (cVar3 == '\0') {
      (*(code *)**(undefined8 **)&pUVar2[0x21].field_0x20)(&pUVar2[0x21].field_0x20,1);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar2);
      }
      *(UObject **)(param_1 + 0x11) = pUVar2;
    }
    else if (2 < (byte)LogMockMeshDataTracker._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMockMeshDataTracker);
      return;
    }
  }
  else if (2 < (byte)LogMockMeshDataTracker._0_1_) {
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogMockMeshDataTracker);
    return;
  }
  return;
}

// execDisconnectMRMesh @ 146c73890

void __cdecl
UMockDataMeshTrackerComponent::execDisconnectMRMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UMRMeshComponent *local_res10;
  
  local_res10 = (UMRMeshComponent *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  DisconnectMRMesh((UMockDataMeshTrackerComponent *)param_1,local_res10);
  return;
}

