// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: FastGeoStreaming
// Functions: 50

// StaticClass @ 14da067e0

UClass * __cdecl UFastGeoContainer::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoContainer",
               &Z_Registration_Info_UClass_UFastGeoContainer.InnerSingleton,
               StaticRegisterNativesUFastGeoContainer,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFastGeoContainer>,
               InternalVTableHelperCtorCaller<UFastGeoContainer>,local_res8,
               UAssetUserData::StaticClass,ULevel::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoContainer.InnerSingleton;
}

// UFastGeoContainer @ 14da1a740

UFastGeoContainer * __thiscall
UFastGeoContainer::UFastGeoContainer(UFastGeoContainer *this,FVTableHelper *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UAssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsBodyInstanceOwnerResolver__;
  FFastGeoComponentClusterPendingState::FFastGeoComponentClusterPendingState(&this->PendingCreate);
  FFastGeoComponentClusterPendingState::FFastGeoComponentClusterPendingState(&this->PendingDestroy);
  this->PhysicsStateCreation = NotCreated;
  (this->ComponentClusters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentClusters).ArrayNum = 0;
  (this->ComponentClusters).ArrayMax = 0;
  (this->HLODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HLODs).ArrayNum = 0;
  (this->HLODs).ArrayMax = 0;
  (this->Assets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Assets).ArrayNum = 0;
  (this->Assets).ArrayMax = 0;
  this->bPrecachedPSOs = false;
  this->PrecachePSOsTask = (TTask<void>)0x0;
  (this->CollisionComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionComponents).ArrayNum = 0;
  (this->CollisionComponents).ArrayMax = 0;
  (this->NavigationElementHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavigationElementHandles).ArrayNum = 0;
  (this->NavigationElementHandles).ArrayMax = 0;
  this->bIsRegistered = false;
  FRenderCommandFence::FRenderCommandFence(&this->DestroyFence);
  return this;
}

// UFastGeoContainer @ 14da1a800

UFastGeoContainer * __thiscall
UFastGeoContainer::UFastGeoContainer(UFastGeoContainer *this,FObjectInitializer *param_1)

{
  UAssetUserData::UAssetUserData((UAssetUserData *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UAssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsBodyInstanceOwnerResolver__;
  FFastGeoComponentClusterPendingState::FFastGeoComponentClusterPendingState(&this->PendingCreate);
  FFastGeoComponentClusterPendingState::FFastGeoComponentClusterPendingState(&this->PendingDestroy);
  this->PhysicsStateCreation = NotCreated;
  (this->ComponentClusters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComponentClusters).ArrayNum = 0;
  (this->ComponentClusters).ArrayMax = 0;
  (this->HLODs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HLODs).ArrayNum = 0;
  (this->HLODs).ArrayMax = 0;
  (this->Assets).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Assets).ArrayNum = 0;
  (this->Assets).ArrayMax = 0;
  this->bPrecachedPSOs = false;
  this->PrecachePSOsTask = (TTask<void>)0x0;
  (this->CollisionComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CollisionComponents).ArrayNum = 0;
  (this->CollisionComponents).ArrayMax = 0;
  (this->NavigationElementHandles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NavigationElementHandles).ArrayNum = 0;
  (this->NavigationElementHandles).ArrayMax = 0;
  this->bIsRegistered = false;
  FRenderCommandFence::FRenderCommandFence(&this->DestroyFence);
  return this;
}

// ~UFastGeoContainer @ 14da1ba40

void __thiscall UFastGeoContainer::~UFastGeoContainer(UFastGeoContainer *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  TTask<void> TVar4;
  
  this->_padding_ = (longlong)&_vftable__for__UAssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsBodyInstanceOwnerResolver__;
  FRenderCommandFence::~FRenderCommandFence(&this->DestroyFence);
  pFVar3 = (this->NavigationElementHandles).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->CollisionComponents).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  TVar4 = this->PrecachePSOsTask;
  if (TVar4 != (TTask<void>)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)TVar4 + 0x30);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (iVar2 == 1) {
      (*(code *)**(undefined8 **)TVar4)(TVar4,1);
    }
  }
  pFVar3 = (this->Assets).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FFastGeoHLOD,int>
            ((FFastGeoHLOD *)(this->HLODs).AllocatorInstance.Data,(this->HLODs).ArrayNum);
  pFVar3 = (this->HLODs).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FFastGeoComponentCluster,int>
            ((FFastGeoComponentCluster *)(this->ComponentClusters).AllocatorInstance.Data,
             (this->ComponentClusters).ArrayNum);
  pFVar3 = (this->ComponentClusters).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PendingDestroy).RenderState.ComponentsToProcess.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->PendingCreate).RenderState.ComponentsToProcess.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  this->_padding_ = (longlong)&___7IPhysicsBodyInstanceOwnerResolver__6B_;
  UAssetUserData::~UAssetUserData((UAssetUserData *)this);
  return;
}

// operator() @ 14da1dec0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall
`UFastGeoContainer::OnCreateRenderState_Concurrent'::__l5::<lambda_1>::operator()
          (void *this,int param_1)

{
  int iVar1;
  longlong *plVar2;
  int *piVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  LARGE_INTEGER local_res8;
  FTaskTagScope local_18;
  
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId432,"UFastGeoContainer::OnCreateRenderState_Concurrent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
               ,0x1b0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId432);
  }
  FTaskTagScope::FTaskTagScope(&local_18,EParallelGameThread);
  while( true ) {
    plVar2 = *(longlong **)this;
    if ((plVar2[1] != -1) &&
       ((plVar2[1] == 0 ||
        (QueryPerformanceCounter(&local_res8),
        (ulonglong)(plVar2[1] + *plVar2) < (ulonglong)local_res8)))) break;
    piVar3 = *(int **)((longlong)this + 8);
    LOCK();
    iVar1 = *piVar3;
    *piVar3 = *piVar3 + 1;
    UNLOCK();
    if (**(int **)((longlong)this + 0x10) <= iVar1) break;
    lVar4 = *(longlong *)((longlong)this + 0x18);
    uVar8 = *(int *)(lVar4 + 0x50) + iVar1;
    uVar7 = 0;
    if ((int)uVar8 < *(int *)(lVar4 + 0x40)) {
      uVar7 = ~uVar8 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FFastGeoPrimitiveComponent::CreateRenderState
              (*(FFastGeoPrimitiveComponent **)
                (*(longlong *)(lVar4 + 0x38) + (longlong)(int)uVar8 * 8),
               (FRegisterComponentContext *)0x0);
    LOCK();
    **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
    UNLOCK();
  }
  FTaskTagScope::~FTaskTagScope(&local_18);
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AddComponentCluster @ 14da1fd00

void __thiscall
UFastGeoContainer::AddComponentCluster(UFastGeoContainer *this,FFastGeoComponentCluster *param_1)

{
  int *piVar1;
  TArray<FFastGeoComponentCluster,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FFastGeoHLOD,TSizedDefaultAllocator<32>_> *pTVar3;
  FFastGeoComponentCluster *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FFastGeoHLOD *pFVar8;
  bool bVar9;
  
  bVar9 = (uint)param_1->_padding_ == FFastGeoHLOD::Type.ID;
  if (!bVar9) {
    if ((FFastGeoElementType *)param_1->_padding_ != (FFastGeoElementType *)0x0) {
      bVar6 = FFastGeoElementType::IsA
                        ((FFastGeoElementType *)param_1->_padding_,&FFastGeoHLOD::Type);
      if (bVar6) goto LAB_14da1fdf3;
    }
    pTVar2 = &this->ComponentClusters;
    pFVar4 = (FFastGeoComponentCluster *)(pTVar2->AllocatorInstance).Data;
    if ((pFVar4 <= param_1) && (param_1 < pFVar4 + (this->ComponentClusters).ArrayMax)) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar9) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar7 = (this->ComponentClusters).ArrayNum;
    piVar1 = &(this->ComponentClusters).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x888,&pTVar2->AllocatorInstance,piVar1);
    }
    (this->ComponentClusters).ArrayNum = iVar7 + 1;
    pFVar8 = (FFastGeoHLOD *)
             FFastGeoComponentCluster::FFastGeoComponentCluster
                       ((FFastGeoComponentCluster *)
                        ((pTVar2->AllocatorInstance).Data + (longlong)iVar7 * 0x88),param_1);
    iVar7 = (this->ComponentClusters).ArrayNum;
    goto LAB_14da1fec1;
  }
LAB_14da1fdf3:
  pTVar3 = &this->HLODs;
  if (bVar9) {
LAB_14da1fe1c:
    bVar9 = true;
  }
  else {
    if ((FFastGeoElementType *)param_1->_padding_ != (FFastGeoElementType *)0x0) {
      bVar9 = FFastGeoElementType::IsA
                        ((FFastGeoElementType *)param_1->_padding_,&FFastGeoHLOD::Type);
      if (bVar9) goto LAB_14da1fe1c;
    }
    bVar9 = false;
  }
  if (!bVar9) {
    param_1 = (FFastGeoComponentCluster *)(FFastGeoHLOD *)0x0;
  }
  pFVar8 = (FFastGeoHLOD *)(pTVar3->AllocatorInstance).Data;
  if ((pFVar8 <= param_1) && (param_1 < pFVar8 + (this->HLODs).ArrayMax)) {
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar9) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar7 = (this->HLODs).ArrayNum;
  piVar1 = &(this->HLODs).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x8c8,&pTVar3->AllocatorInstance,piVar1);
  }
  (this->HLODs).ArrayNum = iVar7 + 1;
  pFVar8 = FFastGeoHLOD::FFastGeoHLOD
                     ((FFastGeoHLOD *)((pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 200),
                      (FFastGeoHLOD *)param_1);
  iVar7 = (this->HLODs).ArrayNum;
LAB_14da1fec1:
  *(int *)&pFVar8->_padding_ = iVar7 + -1;
  return;
}

// AllowsAsyncPhysicsStateCreation @ 14da20620

bool __thiscall UFastGeoContainer::AllowsAsyncPhysicsStateCreation(UFastGeoContainer *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FPhysScene_Chaos::SupportsAsyncPhysicsStateCreation();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPhysScene::SupportsAsyncPhysicsStateCreation()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                       ,0x310,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return true;
}

// AllowsAsyncPhysicsStateDestruction @ 14da20660

bool __thiscall UFastGeoContainer::AllowsAsyncPhysicsStateDestruction(UFastGeoContainer *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = FPhysScene_Chaos::SupportsAsyncPhysicsStateDestruction();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FPhysScene::SupportsAsyncPhysicsStateDestruction()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                       ,0x316,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return true;
}

// BeginDestroy @ 14da20fe0

void __thiscall UFastGeoContainer::BeginDestroy(UFastGeoContainer *this)

{
  UObject::BeginDestroy((UObject *)this);
  FRenderCommandFence::BeginFence(&this->DestroyFence,RenderThread);
  return;
}

// CollectAssetReferences @ 14da23460

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UFastGeoContainer::CollectAssetReferences(UFastGeoContainer *this)

{
  int iVar1;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined1 auStackY_198 [32];
  UClass *local_168;
  UClass *local_160;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_158;
  FArchiveState local_148;
  undefined1 local_b8 [32];
  void *local_98;
  undefined4 local_90;
  uint local_8c;
  undefined4 local_88;
  undefined4 local_84;
  ForElementType<FSetElementId> local_78;
  int local_70;
  undefined1 local_68 [32];
  void *local_48;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  ForElementType<FSetElementId> local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_198;
  FArchiveState::FArchiveState(&local_148);
  local_8c = 0x80;
  local_b8._0_8_ = (FScriptContainerElement *)0x0;
  local_148._padding_ = (longlong)&___7FFastGeoGatherFastGeoContainerAssetRefsArchive__6B_;
  local_b8._8_8_ = 0;
  local_98 = (void *)0x0;
  local_90 = 0;
  local_88 = 0xffffffff;
  local_84 = 0;
  local_78 = (ForElementType<FSetElementId>)0x0;
  local_70 = 0;
  local_68._0_8_ = (FScriptContainerElement *)0x0;
  local_68._8_8_ = 0;
  local_48 = (void *)0x0;
  local_40 = 0;
  local_3c = 0x80;
  local_38 = 0xffffffff;
  local_34 = 0;
  local_28 = (ForElementType<FSetElementId>)0x0;
  local_20 = 0;
  local_160 = Z_Construct_UClass_URuntimeVirtualTexture_NoRegister();
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Emplace<UClass_*>
            ((TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)local_b8,&local_168,
             (bool *)&local_160);
  local_160 = Z_Construct_UClass_UStaticMesh_NoRegister();
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Emplace<UClass_*>
            ((TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)local_b8,&local_168,
             (bool *)&local_160);
  local_160 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Emplace<UClass_*>
            ((TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)local_b8,&local_168,
             (bool *)&local_160);
  local_160 = Z_Construct_UClass_UPhysicalMaterial_NoRegister();
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Emplace<UClass_*>
            ((TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)local_b8,&local_168,
             (bool *)&local_160);
  local_160 = Z_Construct_UClass_USkeletalMesh_NoRegister();
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Emplace<UClass_*>
            ((TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)local_b8,&local_168,
             (bool *)&local_160);
  (**(code **)(local_148._padding_ + 0x108))(&local_148,1);
  (**(code **)(local_148._padding_ + 0xd8))(&local_148,1);
  local_148.ArIgnoreOuterRef = '\x01';
  local_148.ArShouldSkipBulkData = '\x01';
  local_148.ArIsObjectReferenceCollector = '\x01';
  TArrayPrivateFriend::Serialize<FFastGeoComponentCluster,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_148,&this->ComponentClusters);
  TArrayPrivateFriend::Serialize<FFastGeoHLOD,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_148,&this->HLODs);
  pTVar2 = TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator>::Array
                     ((TSet<UObject_*,DefaultKeyFuncs<UObject_*,0>,FDefaultSetAllocator> *)local_68,
                      &local_158);
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_>::CopyToEmpty<UObject_*,int>
            (&this->Assets,(UObject **)(pTVar2->AllocatorInstance).Data,pTVar2->ArrayNum,
             (this->Assets).ArrayMax);
  if (local_158.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.AllocatorInstance.Data);
  }
  local_20 = 0;
  if (local_28 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_28);
  }
  iVar1 = SUB84(local_68._8_8_,4);
  local_68._8_8_ = local_68._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_68,0,(int *)(local_68 + 0xc));
  }
  local_38 = 0xffffffff;
  local_34 = 0;
  local_40 = 0;
  if (0x80 < local_3c) {
    local_3c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_68 + 0x10),0);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  if ((FScriptContainerElement *)local_68._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_68._0_8_);
  }
  local_70 = 0;
  if (local_78 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_78);
  }
  iVar1 = SUB84(local_b8._8_8_,4);
  local_b8._8_8_ = local_b8._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)local_b8,0,(int *)(local_b8 + 0xc));
  }
  local_88 = 0xffffffff;
  local_84 = 0;
  local_90 = 0;
  if (0x80 < local_8c) {
    local_8c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_b8 + 0x10),0);
  }
  if (local_98 != (void *)0x0) {
    FMemory::Free(local_98);
  }
  if ((FScriptContainerElement *)local_b8._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_b8._0_8_);
  }
  FArchive::~FArchive((FArchive *)&local_148);
  return;
}

// CollectBodySetupsWithPhysicsMeshesToCreate @ 14da23750

void __thiscall
UFastGeoContainer::CollectBodySetupsWithPhysicsMeshesToCreate
          (UFastGeoContainer *this,
          TSet<UBodySetup_*,DefaultKeyFuncs<UBodySetup_*,0>,FDefaultSetAllocator> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  longlong local_res8;
  UBodySetup *local_res18;
  
  puVar3 = *(undefined8 **)&(this->HLODs).ArrayNum;
  iVar2 = *(int *)&(this->Assets).AllocatorInstance.Data;
  puVar1 = puVar3 + iVar2;
  while( true ) {
    if (*(int *)&(this->Assets).AllocatorInstance.Data != iVar2) {
      `TCheckedPointerIterator<FFastGeoComponent_*_const,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (puVar3 == puVar1) break;
    local_res8 = (**(code **)(*(longlong *)*puVar3 + 8))();
    if ((local_res8 != 0) && ((*(byte *)(local_res8 + 0xd9) & 1) == 0)) {
      TSet<UBodySetup_*,DefaultKeyFuncs<UBodySetup_*,0>,FDefaultSetAllocator>::
      Emplace<UBodySetup_*_const_&>(param_1,&local_res18,(bool *)&local_res8);
    }
    puVar3 = puVar3 + 1;
  }
  return;
}

// GetAsyncPhysicsStateObject @ 14da298c0

UObject * __thiscall UFastGeoContainer::GetAsyncPhysicsStateObject(UFastGeoContainer *this)

{
  return (UObject *)&this[-1].CollisionComponents.ArrayNum;
}

// GetComponentCluster @ 14da2a220

FFastGeoComponentCluster * __thiscall
UFastGeoContainer::GetComponentCluster(UFastGeoContainer *this,uint param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  FFastGeoComponentCluster *pFVar3;
  uint uVar4;
  
  if (FFastGeoHLOD::Type.ID == param_1) {
    if ((-1 < param_2) && (param_2 < (this->HLODs).ArrayNum)) {
      uVar4 = 0;
      if (param_2 < (this->HLODs).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FFastGeoComponentCluster *)(*pcVar1)();
          return pFVar3;
        }
      }
      return (FFastGeoComponentCluster *)
             ((this->HLODs).AllocatorInstance.Data + (longlong)param_2 * 200);
    }
  }
  else {
    if (FFastGeoComponentCluster::Type.ID != param_1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                         ,0x13a,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FFastGeoComponentCluster *)(*pcVar1)();
        return pFVar3;
      }
      return (FFastGeoComponentCluster *)0x0;
    }
    if ((-1 < param_2) && (param_2 < (this->ComponentClusters).ArrayNum)) {
      uVar4 = 0;
      if (param_2 < (this->ComponentClusters).ArrayNum) {
        uVar4 = (uint)~param_2 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          pFVar3 = (FFastGeoComponentCluster *)(*pcVar1)();
          return pFVar3;
        }
      }
      return (FFastGeoComponentCluster *)
             ((this->ComponentClusters).AllocatorInstance.Data + (longlong)param_2 * 0x88);
    }
  }
  return (FFastGeoComponentCluster *)0x0;
}

// GetLevel @ 14da2a750

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

ULevel * __thiscall UFastGeoContainer::GetLevel(UFastGeoContainer *this)

{
  code *pcVar1;
  bool bVar2;
  ULevel *pUVar3;
  
  if ((this->_padding_ & 0x10) == 0) {
    return (ULevel *)this->_padding_;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_634665728192020378>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Internal\\FastGeoContainer.h"
                     ,0x66,"false || !HasAnyFlags(RF_ClassDefaultObject)");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (ULevel *)(*pcVar1)();
    return pUVar3;
  }
  return (ULevel *)0x0;
}

// GetPrivateStaticClass @ 14da2b240

UClass * __cdecl UFastGeoContainer::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFastGeoContainer.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/FastGeoStreaming",L"FastGeoContainer",
               &Z_Registration_Info_UClass_UFastGeoContainer.InnerSingleton,
               StaticRegisterNativesUFastGeoContainer,0x120,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFastGeoContainer>,
               InternalVTableHelperCtorCaller<UFastGeoContainer>,local_res8,
               UAssetUserData::StaticClass,ULevel::StaticClass);
  }
  return Z_Registration_Info_UClass_UFastGeoContainer.InnerSingleton;
}

// GetWorld @ 14da2bf00

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UWorld * __thiscall UFastGeoContainer::GetWorld(UFastGeoContainer *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  
  if ((this->_padding_ & 0x10) == 0) {
    if (this->_padding_ != 0) goto LAB_14da2bf87;
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_634665728192020378>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Internal\\FastGeoContainer.h"
                       ,0x66,"false || !HasAnyFlags(RF_ClassDefaultObject)");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pUVar3 = (UWorld *)(*pcVar1)();
      return pUVar3;
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("GetLevel()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                     ,0x145,L"");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pUVar3 = (UWorld *)(*pcVar1)();
    return pUVar3;
  }
LAB_14da2bf87:
  if ((this->_padding_ & 0x10) == 0) {
    pUVar3 = ULevel::GetWorld((ULevel *)this->_padding_);
    return pUVar3;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_634665728192020378>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Internal\\FastGeoContainer.h"
                     ,0x66,"false || !HasAnyFlags(RF_ClassDefaultObject)");
  if (!bVar2) {
    pUVar3 = ULevel::GetWorld((ULevel *)0x0);
    return pUVar3;
  }
  pcVar1 = (code *)swi(3);
  pUVar3 = (UWorld *)(*pcVar1)();
  return pUVar3;
}

// HasAnyPendingCreateTasks @ 14da2bff0

bool __thiscall UFastGeoContainer::HasAnyPendingCreateTasks(UFastGeoContainer *this)

{
  if (((this->PhysicsStateCreation != Creating) &&
      ((this->PendingCreate).RenderState.ComponentsToProcess.ArrayNum <=
       (this->PendingCreate).RenderState.TotalNumProcessed)) &&
     (((this->PendingCreate).PhysicsState.ComponentsToProcess ==
       (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0 ||
      (((this->PendingCreate).PhysicsState.ComponentsToProcess)->ArrayNum <=
       (int)(this->PendingCreate).PhysicsState.TotalNumProcessed)))) {
    return false;
  }
  return true;
}

// HasAnyPendingDestroyTasks @ 14da2c030

bool __thiscall UFastGeoContainer::HasAnyPendingDestroyTasks(UFastGeoContainer *this)

{
  if (((this->PhysicsStateCreation != Destroying) &&
      ((this->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum <=
       (this->PendingDestroy).RenderState.TotalNumProcessed)) &&
     (((this->PendingDestroy).PhysicsState.ComponentsToProcess ==
       (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0 ||
      (((this->PendingDestroy).PhysicsState.ComponentsToProcess)->ArrayNum <=
       (int)(this->PendingDestroy).PhysicsState.TotalNumProcessed)))) {
    return false;
  }
  return true;
}

// HasAnyPendingTasks @ 14da2c070

bool __thiscall UFastGeoContainer::HasAnyPendingTasks(UFastGeoContainer *this)

{
  if (((((this->PhysicsStateCreation != Creating) &&
        ((this->PendingCreate).RenderState.ComponentsToProcess.ArrayNum <=
         (this->PendingCreate).RenderState.TotalNumProcessed)) &&
       (((this->PendingCreate).PhysicsState.ComponentsToProcess ==
         (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0 ||
        (((this->PendingCreate).PhysicsState.ComponentsToProcess)->ArrayNum <=
         (int)(this->PendingCreate).PhysicsState.TotalNumProcessed)))) &&
      ((this->PhysicsStateCreation != Destroying &&
       ((this->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum <=
        (this->PendingDestroy).RenderState.TotalNumProcessed)))) &&
     (((this->PendingDestroy).PhysicsState.ComponentsToProcess ==
       (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0 ||
      (((this->PendingDestroy).PhysicsState.ComponentsToProcess)->ArrayNum <=
       (int)(this->PendingDestroy).PhysicsState.TotalNumProcessed)))) {
    return false;
  }
  return true;
}

// InitializeDynamicProperties @ 14da2c5b0

void __thiscall UFastGeoContainer::InitializeDynamicProperties(UFastGeoContainer *this,bool param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FFastGeoComponentCluster *pFVar4;
  FFastGeoComponentCluster *pFVar5;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  <lambda_1> local_48;
  <lambda_1> local_40;
  UFastGeoContainer *local_38;
  UFastGeoContainer *local_30;
  
  iVar1 = (this->ComponentClusters).ArrayNum;
  pFVar5 = (FFastGeoComponentCluster *)(this->ComponentClusters).AllocatorInstance.Data;
  pFVar4 = pFVar5 + iVar1;
  while( true ) {
    if ((this->ComponentClusters).ArrayNum != iVar1) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FFastGeoComponentCluster,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar5 == pFVar4) break;
    if (this == (UFastGeoContainer *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOwner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponentCluster.cpp"
                         ,0x3c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5->Owner = this;
    local_48.__this = pFVar5;
    FFastGeoComponentCluster::
    ForEachComponent<FFastGeoComponentCluster,FFastGeoComponent,_FFastGeoComponentCluster::InitializeDynamicProperties_::__l2::<lambda_1>_>
              (pFVar5,&local_48);
    pFVar5 = pFVar5 + 1;
  }
  iVar1 = (this->HLODs).ArrayNum;
  pFVar5 = (FFastGeoComponentCluster *)(this->HLODs).AllocatorInstance.Data;
  pFVar4 = (FFastGeoComponentCluster *)((longlong)pFVar5 + (longlong)iVar1 * 200);
  while( true ) {
    if ((this->HLODs).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FFastGeoHLOD,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar4) break;
    if (this == (UFastGeoContainer *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InOwner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponentCluster.cpp"
                         ,0x3c,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pFVar5->Owner = this;
    local_40.__this = pFVar5;
    FFastGeoComponentCluster::
    ForEachComponent<FFastGeoComponentCluster,FFastGeoComponent,_FFastGeoComponentCluster::InitializeDynamicProperties_::__l2::<lambda_1>_>
              (pFVar5,&local_40);
    pFVar5 = (FFastGeoComponentCluster *)&pFVar5[1].StaticMeshComponents.ArrayNum;
  }
  if (param_1) {
    (this->CollisionComponents).ArrayNum = 0;
    if ((this->CollisionComponents).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->CollisionComponents).AllocatorInstance,0,
                 &(this->CollisionComponents).ArrayMax);
    }
    iVar1 = (this->ComponentClusters).ArrayNum;
    pFVar5 = (FFastGeoComponentCluster *)(this->ComponentClusters).AllocatorInstance.Data;
    pFVar4 = pFVar5 + iVar1;
    while( true ) {
      if ((this->ComponentClusters).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoComponentCluster,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if (pFVar5 == pFVar4) break;
      local_38 = this;
      FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoComponent,__UFastGeoContainer::InitializeDynamicProperties_::__l5::<lambda_2>::operator()_::__l2::<lambda_1>_>
                (pFVar5,(<lambda_1> *)&local_38);
      pFVar5 = pFVar5 + 1;
    }
    iVar1 = (this->HLODs).ArrayNum;
    pFVar5 = (FFastGeoComponentCluster *)(this->HLODs).AllocatorInstance.Data;
    pFVar4 = (FFastGeoComponentCluster *)((longlong)pFVar5 + (longlong)iVar1 * 200);
    while( true ) {
      if ((this->HLODs).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoHLOD,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res20);
      }
      if (pFVar5 == pFVar4) break;
      local_30 = this;
      FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoComponent,__UFastGeoContainer::InitializeDynamicProperties_::__l5::<lambda_2>::operator()_::__l2::<lambda_1>_>
                (pFVar5,(<lambda_1> *)&local_30);
      pFVar5 = (FFastGeoComponentCluster *)&pFVar5[1].StaticMeshComponents.ArrayNum;
    }
  }
  return;
}

// IsAsyncPhysicsStateCreated @ 14da2d650

bool __thiscall UFastGeoContainer::IsAsyncPhysicsStateCreated(UFastGeoContainer *this)

{
  return (this->PendingDestroy).RenderState.NumToProcess == 2;
}

// IsReadyForFinishDestroy @ 14da2de50

bool __thiscall UFastGeoContainer::IsReadyForFinishDestroy(UFastGeoContainer *this)

{
  bool bVar1;
  
  bVar1 = FRenderCommandFence::IsFenceComplete(&this->DestroyFence);
  if ((bVar1) &&
     ((this->PrecachePSOsTask == (TTask<void>)0x0 ||
      (*(char *)((longlong)this->PrecachePSOsTask + 0xd0) != '\0')))) {
    return true;
  }
  return false;
}

// IsRegistered @ 14da2df00

bool __thiscall UFastGeoContainer::IsRegistered(UFastGeoContainer *this)

{
  return this->bIsRegistered;
}

// OnAsyncCreatePhysicsState @ 14da2ee30

bool __thiscall
UFastGeoContainer::OnAsyncCreatePhysicsState(UFastGeoContainer *this,FTimeout *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId814,"UFastGeoContainer::OnAsyncCreatePhysicsState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
               ,0x32e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId814);
  }
  if (((((this->PendingDestroy).RenderState.NumToProcess != 1) || (this->_padding_ == 0)) ||
      (*(int *)(this->_padding_ + 8) <=
       *(int *)&(this->PendingCreate).RenderState.ComponentsToProcess.AllocatorInstance.Data)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(PhysicsStateCreation == EPhysicsStateCreation::Creating) && !PendingCreate.PhysicsState.IsCompleted()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                         ,0x32f,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar1 = *(int *)&(this->PendingCreate).RenderState.ComponentsToProcess.AllocatorInstance.Data;
  uVar7 = (ulonglong)iVar1;
  plVar8 = (longlong *)this->_padding_;
  if (iVar1 < (int)plVar8[1]) {
    lVar9 = uVar7 * 8;
    do {
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < (int)plVar8[1]) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      (**(code **)(**(longlong **)(lVar9 + *plVar8) + 0x28))();
      LOCK();
      *(int *)&(this->PendingCreate).RenderState.ComponentsToProcess.AllocatorInstance.Data =
           *(int *)&(this->PendingCreate).RenderState.ComponentsToProcess.AllocatorInstance.Data + 1
      ;
      UNLOCK();
      if (((this->_padding_ != 0) &&
          (*(int *)&(this->PendingCreate).RenderState.ComponentsToProcess.AllocatorInstance.Data <
           *(int *)(this->_padding_ + 8))) &&
         ((param_1->TimeoutCycles != 0xffffffffffffffff &&
          ((param_1->TimeoutCycles == 0 ||
           (QueryPerformanceCounter(&local_res8),
           param_1->TimeoutCycles + param_1->StartCycles < (ulonglong)local_res8)))))) {
        bVar3 = false;
        goto LAB_14da2efae;
      }
      plVar8 = (longlong *)this->_padding_;
      uVar7 = (ulonglong)(uVar6 + 1);
      lVar9 = lVar9 + 8;
    } while ((int)(uVar6 + 1) < (int)plVar8[1]);
  }
  bVar3 = true;
LAB_14da2efae:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// OnAsyncCreatePhysicsStateBegin_GameThread @ 14da2eff0

void __thiscall
UFastGeoContainer::OnAsyncCreatePhysicsStateBegin_GameThread(UFastGeoContainer *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->PendingDestroy).RenderState.NumToProcess != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PhysicsStateCreation == EPhysicsStateCreation::NotCreated",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                       ,0x326,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (this->_padding_ == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingCreate.PhysicsState.ComponentsToProcess",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                       ,0x327,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (*(int *)(this->_padding_ + 8) == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingCreate.PhysicsState.ComponentsToProcess->Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                       ,0x328,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  (this->PendingDestroy).RenderState.NumToProcess = 1;
  return;
}

// OnAsyncCreatePhysicsStateEnd_GameThread @ 14da2f100

void __thiscall UFastGeoContainer::OnAsyncCreatePhysicsStateEnd_GameThread(UFastGeoContainer *this)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  longlong *plVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId833,
               "UFastGeoContainer::OnAsyncCreatePhysicsStateEnd_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
               ,0x341);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId833);
  }
  if (((this->_padding_ == 0) ||
      (*(int *)&(this->PendingCreate).RenderState.ComponentsToProcess.AllocatorInstance.Data <
       *(int *)(this->_padding_ + 8))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingCreate.PhysicsState.ComponentsToProcess && PendingCreate.PhysicsState.IsCompleted()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                         ,0x342,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this->_padding_ = 0;
  LOCK();
  *(undefined4 *)&(this->PendingCreate).RenderState.ComponentsToProcess.AllocatorInstance.Data = 0;
  UNLOCK();
  if (((this->PendingDestroy).RenderState.NumToProcess != 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("PhysicsStateCreation == EPhysicsStateCreation::Creating",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                         ,0x344,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (this->PendingDestroy).RenderState.NumToProcess = 2;
  plVar6 = *(longlong **)&(this->HLODs).ArrayNum;
  iVar2 = *(int *)&(this->Assets).AllocatorInstance.Data;
  plVar1 = plVar6 + iVar2;
  while( true ) {
    if (*(int *)&(this->Assets).AllocatorInstance.Data != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FFastGeoComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (plVar6 == plVar1) break;
    lVar3 = *plVar6;
    if ((*(int *)(lVar3 + 0x28) != 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("PhysicsStateCreation == EPhysicsStateCreation::Creating",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoComponent.cpp"
                           ,0x56,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(undefined4 *)(lVar3 + 0x28) = 2;
    plVar6 = plVar6 + 1;
  }
  if (!bVar7) {
    return;
  }
  FCpuProfilerTrace::OutputEndEvent();
  return;
}

// OnAsyncDestroyPhysicsState @ 14da2f7c0

bool __thiscall
UFastGeoContainer::OnAsyncDestroyPhysicsState(UFastGeoContainer *this,FTimeout *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong *plVar9;
  bool bVar10;
  LARGE_INTEGER local_res8;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId862,"UFastGeoContainer::OnAsyncDestroyPhysicsState",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
               ,0x35e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId862);
  }
  iVar1 = *(int *)&(this->PendingDestroy).RenderState.ComponentsToProcess.AllocatorInstance.Data;
  uVar7 = (ulonglong)iVar1;
  plVar9 = *(longlong **)&(this->PendingCreate).bIsInBlockingWait;
  if (iVar1 < (int)plVar9[1]) {
    lVar8 = uVar7 * 8;
    do {
      uVar6 = (uint)uVar7;
      uVar5 = 0;
      if ((int)uVar6 < (int)plVar9[1]) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        uVar4 = (*pcVar2)();
        return (bool)uVar4;
      }
      (**(code **)(**(longlong **)(lVar8 + *plVar9) + 0x38))();
      LOCK();
      *(int *)&(this->PendingDestroy).RenderState.ComponentsToProcess.AllocatorInstance.Data =
           *(int *)&(this->PendingDestroy).RenderState.ComponentsToProcess.AllocatorInstance.Data +
           1;
      UNLOCK();
      if ((((*(longlong *)&(this->PendingCreate).bIsInBlockingWait != 0) &&
           (*(int *)&(this->PendingDestroy).RenderState.ComponentsToProcess.AllocatorInstance.Data <
            *(int *)(*(longlong *)&(this->PendingCreate).bIsInBlockingWait + 8))) &&
          (param_1->TimeoutCycles != 0xffffffffffffffff)) &&
         ((param_1->TimeoutCycles == 0 ||
          (QueryPerformanceCounter(&local_res8),
          param_1->StartCycles + param_1->TimeoutCycles < (ulonglong)local_res8)))) {
        bVar3 = false;
        goto LAB_14da2f8fd;
      }
      plVar9 = *(longlong **)&(this->PendingCreate).bIsInBlockingWait;
      uVar7 = (ulonglong)(uVar6 + 1);
      lVar8 = lVar8 + 8;
    } while ((int)(uVar6 + 1) < (int)plVar9[1]);
  }
  bVar3 = true;
LAB_14da2f8fd:
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return bVar3;
}

// OnAsyncDestroyPhysicsStateBegin_GameThread @ 14da2fb50

void __thiscall
UFastGeoContainer::OnAsyncDestroyPhysicsStateBegin_GameThread(UFastGeoContainer *this)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId848,
               "UFastGeoContainer::OnAsyncDestroyPhysicsStateBegin_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
               ,0x350);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId848);
  }
  if (((this->PendingDestroy).RenderState.NumToProcess != 2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PhysicsStateCreation == EPhysicsStateCreation::Created",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                         ,0x351,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(longlong *)&(this->PendingCreate).bIsInBlockingWait == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingDestroy.PhysicsState.ComponentsToProcess",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                         ,0x352,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((*(int *)(*(longlong *)&(this->PendingCreate).bIsInBlockingWait + 8) == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingDestroy.PhysicsState.ComponentsToProcess->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                         ,0x353,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->PendingDestroy).RenderState.NumToProcess = 3;
  puVar5 = *(undefined8 **)&(this->HLODs).ArrayNum;
  iVar2 = *(int *)&(this->Assets).AllocatorInstance.Data;
  puVar1 = puVar5 + iVar2;
  while( true ) {
    if (*(int *)&(this->Assets).AllocatorInstance.Data != iVar2) {
      `TCheckedPointerIterator<FFastGeoComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar5 == puVar1) break;
    (**(code **)(*(longlong *)*puVar5 + 0x30))();
    puVar5 = puVar5 + 1;
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnAsyncDestroyPhysicsStateEnd_GameThread @ 14da2fdc0

void __thiscall UFastGeoContainer::OnAsyncDestroyPhysicsStateEnd_GameThread(UFastGeoContainer *this)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 *puVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  
  bVar6 = -1 < CpuChannel->Enabled;
  if (bVar6) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId879,
               "UFastGeoContainer::OnAsyncDestroyPhysicsStateEnd_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
               ,0x36f);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId879);
  }
  if (((*(longlong *)&(this->PendingCreate).bIsInBlockingWait == 0) ||
      (*(int *)&(this->PendingDestroy).RenderState.ComponentsToProcess.AllocatorInstance.Data <
       *(int *)(*(longlong *)&(this->PendingCreate).bIsInBlockingWait + 8))) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingDestroy.PhysicsState.ComponentsToProcess && PendingDestroy.PhysicsState.IsCompleted()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                         ,0x370,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  *(undefined8 *)&(this->PendingCreate).bIsInBlockingWait = 0;
  LOCK();
  *(undefined4 *)&(this->PendingDestroy).RenderState.ComponentsToProcess.AllocatorInstance.Data = 0;
  UNLOCK();
  if (((this->PendingDestroy).RenderState.NumToProcess != 3) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PhysicsStateCreation == EPhysicsStateCreation::Destroying",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                         ,0x372,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->PendingDestroy).RenderState.NumToProcess = 0;
  puVar5 = *(undefined8 **)&(this->HLODs).ArrayNum;
  iVar2 = *(int *)&(this->Assets).AllocatorInstance.Data;
  puVar1 = puVar5 + iVar2;
  while( true ) {
    if (*(int *)&(this->Assets).AllocatorInstance.Data != iVar2) {
      `TCheckedPointerIterator<FFastGeoComponent_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (puVar5 == puVar1) break;
    (**(code **)(*(longlong *)*puVar5 + 0x40))();
    puVar5 = puVar5 + 1;
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnCreatePhysicsStateBegin_GameThread @ 14da30040

void __thiscall UFastGeoContainer::OnCreatePhysicsStateBegin_GameThread(UFastGeoContainer *this)

{
  FPhysScene_Chaos *this_00;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  IAsyncPhysicsStateProcessor *pIVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId746,
               "UFastGeoContainer::OnCreatePhysicsStateBegin_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
               ,0x2ea);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId746);
  }
  if ((this->CollisionComponents).ArrayNum != 0) {
    bVar2 = FPhysScene_Chaos::SupportsAsyncPhysicsStateCreation();
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPhysScene::SupportsAsyncPhysicsStateCreation()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x2ee,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->PendingCreate).PhysicsState.ComponentsToProcess = &this->CollisionComponents;
    if (((this->PendingCreate).PhysicsState.TotalNumProcessed != (atomic<int>)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingCreate.PhysicsState.TotalNumProcessed == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x2f1,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar3 = (**(code **)(this->_padding_ + 0x180))(this);
    if ((lVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("World",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x2f4,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = *(FPhysScene_Chaos **)(lVar3 + 0x2a0);
    if ((this_00 == (FPhysScene_Chaos *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PhysScene",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x2f6,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pIVar4 = (IAsyncPhysicsStateProcessor *)&this->_padding_;
    if (this == (UFastGeoContainer *)0x0) {
      pIVar4 = (IAsyncPhysicsStateProcessor *)0x0;
    }
    FPhysScene_Chaos::PushAsyncCreatePhysicsStateJob(this_00,pIVar4);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnCreateRenderStateBegin_GameThread @ 14da301b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFastGeoContainer::OnCreateRenderStateBegin_GameThread(UFastGeoContainer *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  UFastGeoWorldSubsystem *this_00;
  
  if ((this->PendingCreate).RenderState.NumToProcess != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingCreate.RenderState.NumToProcess == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                       ,0x183,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->PendingCreate).RenderState.TotalNumProcessed ==
      (this->PendingCreate).RenderState.ComponentsToProcess.ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingCreate.RenderState.TotalNumProcessed != PendingCreate.RenderState.ComponentsToProcess.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                       ,0x184,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  this_00 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(pUVar3);
  if (this_00->bWaitingForCompletion == false) {
    pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00);
    if (pUVar3->IsInBlockTillLevelStreamingCompleted == 0) {
      pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00);
      if (!(bool)pUVar3->bShouldForceUnloadStreamingLevels) {
        pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00);
        if (pUVar3->bIsBeingCleanedUp == false) {
          bVar2 = false;
          goto LAB_14da30270;
        }
      }
    }
  }
  bVar2 = true;
LAB_14da30270:
  (this->PendingCreate).bIsInBlockingWait = bVar2;
  (this->PendingCreate).RenderState.NumToProcess =
       (this->PendingCreate).RenderState.ComponentsToProcess.ArrayNum -
       (this->PendingCreate).RenderState.TotalNumProcessed;
  return;
}

// OnCreateRenderStateEnd_GameThread @ 14da30290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFastGeoContainer::OnCreateRenderStateEnd_GameThread(UFastGeoContainer *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *this_00;
  UFastGeoWorldSubsystem *this_01;
  
  if ((this->PendingCreate).RenderState.NumToProcess == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingCreate.RenderState.NumToProcess != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                       ,0x1e5,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->PendingCreate).RenderState.TotalNumProcessed ==
      (this->PendingCreate).RenderState.ComponentsToProcess.ArrayNum) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingCreate.RenderState.TotalNumProcessed != PendingCreate.RenderState.ComponentsToProcess.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                       ,0x1e6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar1 = &(this->PendingCreate).RenderState.TotalNumProcessed;
  *piVar1 = *piVar1 + (this->PendingCreate).RenderState.NumProcessed;
  iVar2 = (this->PendingCreate).RenderState.TotalNumProcessed;
  (this->PendingCreate).RenderState.NumToProcess = 0;
  (this->PendingCreate).RenderState.NumProcessed = 0;
  (this->PendingCreate).bIsInBlockingWait = false;
  if (iVar2 < (this->PendingCreate).RenderState.ComponentsToProcess.ArrayNum) {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    this_01 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(this_00);
    UFastGeoWorldSubsystem::PushAsyncCreateRenderStateJob(this_01,this);
    return;
  }
  return;
}

// OnCreateRenderState_Concurrent @ 14da30340

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFastGeoContainer::OnCreateRenderState_Concurrent(UFastGeoContainer *this)

{
  int iVar1;
  DWORD DVar2;
  bool bVar3;
  DWORD DVar4;
  int iVar5;
  UWorld *pUVar6;
  UFastGeoWorldSubsystem *this_00;
  int iVar7;
  EParallelForFlags EVar8;
  double dVar9;
  float fVar10;
  int local_res8 [2];
  int local_res10 [2];
  undefined4 local_res18 [2];
  LARGE_INTEGER local_res20;
  LARGE_INTEGER local_c8;
  undefined4 local_c0;
  LARGE_INTEGER local_b8;
  longlong local_b0;
  code *local_a8;
  LARGE_INTEGER **local_a0;
  LARGE_INTEGER *local_98;
  undefined4 *local_90;
  int *local_88;
  UFastGeoContainer *local_80;
  int *local_78;
  
  DVar2 = FastGeo::GAsyncRenderStateTaskParallelWorkerCount;
  if ((this->PendingCreate).bIsInBlockingWait != false) {
    DVar2 = 0x7fffffff;
  }
  iVar1 = (this->PendingCreate).RenderState.NumToProcess;
  DVar4 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
  if ((int)DVar4 < (int)DVar2) {
    DVar2 = DVar4;
  }
  local_res20.s.LowPart = 1;
  if (1 < (int)DVar2) {
    local_res20._0_4_ = DVar2;
  }
  if (((int)local_res20.s.LowPart < 2) || (bVar3 = FApp::ShouldUseThreadingForPerformance(), !bVar3)
     ) {
    EVar8 = ForceSingleThread;
  }
  else {
    EVar8 = None;
  }
  pUVar6 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  this_00 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(pUVar6);
  AcquireSRWLockExclusive((PSRWLOCK)&this_00->Lock);
  bVar3 = IsInGameThread();
  iVar7 = 0x7fffffff;
  if (bVar3) {
    if ((((this_00->bWaitingForCompletion != false) ||
         (pUVar6 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00),
         pUVar6->IsInBlockTillLevelStreamingCompleted != 0)) ||
        (pUVar6 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00),
        (bool)pUVar6->bShouldForceUnloadStreamingLevels)) ||
       (pUVar6 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00),
       pUVar6->bIsBeingCleanedUp != false)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    if (!bVar3) goto LAB_14da304b0;
LAB_14da30438:
    fVar10 = __real_7f7fffff;
    if (bVar3) goto LAB_14da3045b;
  }
  else {
    bVar3 = false;
LAB_14da304b0:
    if (FastGeo::GAsyncRenderStateTaskTimeBudgetMS == 0.0) goto LAB_14da30438;
    fVar10 = FastGeo::GAsyncRenderStateTaskTimeBudgetMS -
             this_00->UsedAsyncRenderStateTasksTimeBudgetMS;
    if (fVar10 <= 0.0) {
      fVar10 = 0.0;
    }
  }
  if (FastGeo::GAsyncRenderStateTaskMaxNumComponentsToProcess != 0) {
    iVar5 = FastGeo::GAsyncRenderStateTaskMaxNumComponentsToProcess -
            this_00->UsedNumComponentsToProcessBudget;
    iVar7 = 0;
    if (0 < iVar5) {
      iVar7 = iVar5;
    }
  }
LAB_14da3045b:
  iVar5 = this_00->TimeEpoch;
  ReleaseSRWLockExclusive((PSRWLOCK)&this_00->Lock);
  local_res8[0] = iVar7;
  if (iVar1 < iVar7) {
    local_res8[0] = iVar1;
  }
  dVar9 = (double)fVar10 * __real_3f50624dd2f1a9fc;
  QueryPerformanceCounter(&local_c8);
  local_b8 = local_c8;
  if (0.0 < dVar9) {
    dVar9 = dVar9 / FGenericPlatformTime::SecondsPerCycle64;
    local_b0 = 0;
    if ((__real_43e0000000000000 <= dVar9) &&
       (dVar9 = dVar9 - __real_43e0000000000000, dVar9 < __real_43e0000000000000)) {
      local_b0 = -0x8000000000000000;
    }
    local_b0 = (longlong)dVar9 + local_b0;
  }
  else {
    local_b0 = 0;
  }
  local_res18[0] = 0;
  local_res10[0] = 0;
  if ((0 < local_res8[0]) &&
     ((local_b0 == -1 ||
      ((local_b0 != 0 &&
       (QueryPerformanceCounter(&local_c8),
       (ulonglong)local_c8 <= (ulonglong)(local_b8.QuadPart + local_b0))))))) {
    local_98 = &local_b8;
    local_90 = local_res18;
    local_88 = local_res8;
    local_c8.QuadPart = 0;
    local_78 = local_res10;
    local_c0 = 0;
    local_a8 = UE::Core::Private::Function::
               TFunctionRefCaller<`UFastGeoContainer::OnCreateRenderState_Concurrent'::__l5::<lambda_1>,void,int>
               ::Call;
    local_a0 = &local_98;
    local_80 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",local_res20.s.LowPart,1,
               (TFunctionRef<void___cdecl(int)> *)&local_a8,local_res8[0]._0_1_,EVar8,
               (TArrayView<std::nullptr_t,int> *)&local_c8.s);
  }
  (this->PendingCreate).RenderState.NumProcessed = local_res10[0];
  QueryPerformanceCounter(&local_res20);
  dVar9 = (double)(ulonglong)
                  (CONCAT44(local_res20.s.HighPart,local_res20.s.LowPart) - (longlong)local_b8) *
          FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
  AcquireSRWLockExclusive((PSRWLOCK)&this_00->Lock);
  if (iVar5 == this_00->TimeEpoch) {
    if (FastGeo::GAsyncRenderStateTaskTimeBudgetMS != 0.0) {
      this_00->UsedAsyncRenderStateTasksTimeBudgetMS =
           (float)dVar9 + this_00->UsedAsyncRenderStateTasksTimeBudgetMS;
    }
    if (FastGeo::GAsyncRenderStateTaskMaxNumComponentsToProcess != 0) {
      this_00->UsedNumComponentsToProcessBudget =
           this_00->UsedNumComponentsToProcessBudget +
           (this->PendingCreate).RenderState.NumProcessed;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&this_00->Lock);
  return;
}

// OnCreated @ 14da30690

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFastGeoContainer::OnCreated(UFastGeoContainer *this,bool param_1)

{
  bool bVar1;
  UWorld *this_00;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  bVar1 = UWorld::IsGameWorld(this_00);
  InitializeDynamicProperties(this,bVar1);
  if ((param_1) || (!bVar1)) {
    CollectAssetReferences(this);
  }
  return;
}

// OnDestroyPhysicsStateBegin_GameThread @ 14da306f0

void __thiscall UFastGeoContainer::OnDestroyPhysicsStateBegin_GameThread(UFastGeoContainer *this)

{
  FPhysScene_Chaos *this_00;
  code *pcVar1;
  bool bVar2;
  longlong lVar3;
  IAsyncPhysicsStateProcessor *pIVar4;
  bool bVar5;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId765,
               "UFastGeoContainer::OnDestroyPhysicsStateBegin_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
               ,0x2fd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId765);
  }
  if ((this->CollisionComponents).ArrayNum != 0) {
    bVar2 = FPhysScene_Chaos::SupportsAsyncPhysicsStateDestruction();
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("FPhysScene::SupportsAsyncPhysicsStateDestruction()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x301,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->PendingDestroy).PhysicsState.ComponentsToProcess = &this->CollisionComponents;
    if (((this->PendingDestroy).PhysicsState.TotalNumProcessed != (atomic<int>)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PendingDestroy.PhysicsState.TotalNumProcessed == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x304,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar3 = (**(code **)(this->_padding_ + 0x180))(this);
    if ((lVar3 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("World",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x307,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = *(FPhysScene_Chaos **)(lVar3 + 0x2a0);
    if ((this_00 == (FPhysScene_Chaos *)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PhysScene",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x309,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pIVar4 = (IAsyncPhysicsStateProcessor *)&this->_padding_;
    if (this == (UFastGeoContainer *)0x0) {
      pIVar4 = (IAsyncPhysicsStateProcessor *)0x0;
    }
    bVar2 = FPhysScene_Chaos::PushAsyncDestroyPhysicsStateJob(this_00,pIVar4);
    if ((!bVar2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("PhysScene->PushAsyncDestroyPhysicsStateJob(this)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x30a,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// OnDestroyRenderStateBegin_GameThread @ 14da30890

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFastGeoContainer::OnDestroyRenderStateBegin_GameThread(UFastGeoContainer *this)

{
  code *pcVar1;
  bool bVar2;
  UWorld *pUVar3;
  UFastGeoWorldSubsystem *this_00;
  
  if ((this->PendingDestroy).RenderState.NumToProcess != 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingDestroy.RenderState.NumToProcess == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                       ,0x18d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->PendingDestroy).RenderState.TotalNumProcessed ==
      (this->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingDestroy.RenderState.TotalNumProcessed != PendingDestroy.RenderState.ComponentsToProcess.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                       ,0x18e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pUVar3 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
  this_00 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(pUVar3);
  if (this_00->bWaitingForCompletion == false) {
    pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00);
    if (pUVar3->IsInBlockTillLevelStreamingCompleted == 0) {
      pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00);
      if (!(bool)pUVar3->bShouldForceUnloadStreamingLevels) {
        pUVar3 = UWorldSubsystem::GetWorld((UWorldSubsystem *)this_00);
        if (pUVar3->bIsBeingCleanedUp == false) {
          bVar2 = false;
          goto LAB_14da30956;
        }
      }
    }
  }
  bVar2 = true;
LAB_14da30956:
  (this->PendingDestroy).bIsInBlockingWait = bVar2;
  (this->PendingDestroy).RenderState.NumToProcess =
       (this->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum;
  return;
}

// OnDestroyRenderStateEnd_GameThread @ 14da30980

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFastGeoContainer::OnDestroyRenderStateEnd_GameThread(UFastGeoContainer *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UWorld *this_00;
  UFastGeoWorldSubsystem *this_01;
  
  if ((this->PendingDestroy).RenderState.NumToProcess == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingDestroy.RenderState.NumToProcess != 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                       ,0x1f6,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if ((this->PendingDestroy).RenderState.TotalNumProcessed ==
      (this->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("PendingDestroy.RenderState.TotalNumProcessed != PendingDestroy.RenderState.ComponentsToProcess.Num()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                       ,0x1f7,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  piVar1 = &(this->PendingDestroy).RenderState.TotalNumProcessed;
  *piVar1 = *piVar1 + (this->PendingDestroy).RenderState.NumProcessed;
  iVar2 = (this->PendingDestroy).RenderState.TotalNumProcessed;
  (this->PendingDestroy).RenderState.NumToProcess = 0;
  (this->PendingDestroy).RenderState.NumProcessed = 0;
  (this->PendingDestroy).bIsInBlockingWait = false;
  if (iVar2 < (this->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum) {
    this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    this_01 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(this_00);
    UFastGeoWorldSubsystem::PushAsyncDestroyRenderStateJob(this_01,this);
    return;
  }
  return;
}

// OnDestroyRenderState_Concurrent @ 14da30a40

void __thiscall UFastGeoContainer::OnDestroyRenderState_Concurrent(UFastGeoContainer *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  bool bVar7;
  undefined1 local_res8 [8];
  longlong *local_38;
  void *local_30;
  undefined8 local_28;
  
  bVar7 = -1 < CpuChannel->Enabled;
  if (bVar7) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId467,"UFastGeoContainer::OnDestroyRenderState_Concurrent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
               ,0x1d3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId467);
  }
  if (((this->PendingDestroy).RenderState.NumToProcess !=
       (this->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PendingDestroy.RenderState.NumToProcess == PendingDestroy.RenderState.ComponentsToProcess.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                         ,0x1d6,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar5 = (**(code **)(this->_padding_ + 0x180))(this);
  pFVar6 = (this->PendingDestroy).RenderState.ComponentsToProcess.AllocatorInstance.Data;
  iVar2 = (this->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum;
  local_38 = *(longlong **)(lVar5 + 600);
  local_30 = (void *)0x0;
  local_28 = 0;
  pFVar1 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FFastGeoPrimitiveComponent_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar1) break;
    (**(code **)(**(longlong **)pFVar6 + 0x50))(*(longlong **)pFVar6,&local_38);
    pFVar6 = pFVar6 + 8;
  }
  (this->PendingDestroy).RenderState.NumProcessed = (this->PendingDestroy).RenderState.NumToProcess;
  if ((int)local_28 != 0) {
    (**(code **)(*local_38 + 0x40))(local_38,&local_30);
  }
  if (local_30 != (void *)0x0) {
    FMemory::Free(local_30);
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// PrecachePSOs @ 14da32250

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall UFastGeoContainer::PrecachePSOs(UFastGeoContainer *this)

{
  int *piVar1;
  TTask<void> *pTVar2;
  int iVar3;
  TTask<void> TVar4;
  code *pcVar5;
  bool bVar6;
  TTask<void> TVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  void ***local_res18;
  void ***local_res20;
  void **local_78;
  void **local_70;
  undefined8 *local_68;
  void *local_60;
  undefined8 local_58;
  UFastGeoContainer *local_50;
  void *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId685,"UFastGeoContainer::PrecachePSOs_GameThread",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
               ,0x2ad);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId685);
  }
  if (this->bPrecachedPSOs == false) {
    this->bPrecachedPSOs = true;
    bVar6 = IsComponentPSOPrecachingEnabled();
    if (bVar6) {
      pFVar8 = (this->ComponentClusters).AllocatorInstance.Data;
      iVar3 = (this->ComponentClusters).ArrayNum;
      local_60 = (void *)0x0;
      pFVar9 = pFVar8 + (longlong)iVar3 * 0x88;
      local_58 = 0;
      while( true ) {
        if ((this->ComponentClusters).ArrayNum != iVar3) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FFastGeoComponentCluster,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar8 == pFVar9) break;
        local_78 = &local_60;
        local_res18 = &local_78;
        `FFastGeoComponentCluster::
        ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::PrecachePSOs'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>_>'
        ::__l2::<lambda_1>::
        operator()<TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_>_>
                  (&local_res18,
                   (TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_> *)
                   (pFVar8 + 0x38));
        `FFastGeoComponentCluster::
        ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::PrecachePSOs'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>_>'
        ::__l2::<lambda_1>::
        operator()<TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>_>
                  (&local_res18,
                   (TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_> *)
                   (pFVar8 + 0x48));
        `FFastGeoComponentCluster::
        ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::PrecachePSOs'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>_>'
        ::__l2::<lambda_1>::
        operator()<TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_>
                  (&local_res18,
                   (TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)
                   (pFVar8 + 0x58));
        `FFastGeoComponentCluster::
        ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::PrecachePSOs'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>_>'
        ::__l2::<lambda_1>::
        operator()<TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_>
                  (&local_res18,
                   (TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)
                   (pFVar8 + 0x68));
        `FFastGeoComponentCluster::
        ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::PrecachePSOs'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>_>'
        ::__l2::<lambda_1>::
        operator()<TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_>_>
                  (&local_res18,
                   (TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_> *)
                   (pFVar8 + 0x78));
        pFVar8 = pFVar8 + 0x88;
      }
      iVar3 = (this->HLODs).ArrayNum;
      pFVar8 = (this->HLODs).AllocatorInstance.Data;
      pFVar9 = pFVar8 + (longlong)iVar3 * 200;
      while( true ) {
        if ((this->HLODs).ArrayNum != iVar3) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FFastGeoHLOD,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (pFVar8 == pFVar9) break;
        local_70 = &local_60;
        local_res20 = &local_70;
        `FFastGeoComponentCluster::
        ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::PrecachePSOs'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>_>'
        ::__l2::<lambda_1>::
        operator()<TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_>_>
                  (&local_res20,
                   (TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_> *)
                   (pFVar8 + 0x38));
        `FFastGeoComponentCluster::
        ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::PrecachePSOs'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>_>'
        ::__l2::<lambda_1>::
        operator()<TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>_>
                  (&local_res20,
                   (TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_> *)
                   (pFVar8 + 0x48));
        `FFastGeoComponentCluster::
        ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::PrecachePSOs'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>_>'
        ::__l2::<lambda_1>::
        operator()<TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_>
                  (&local_res20,
                   (TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)
                   (pFVar8 + 0x58));
        `FFastGeoComponentCluster::
        ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::PrecachePSOs'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>_>'
        ::__l2::<lambda_1>::
        operator()<TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_>
                  (&local_res20,
                   (TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)
                   (pFVar8 + 0x68));
        `FFastGeoComponentCluster::
        ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::PrecachePSOs'::__l8::<lambda_1>::operator()'::__l2::<lambda_1>_>'
        ::__l2::<lambda_1>::
        operator()<TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_>_>
                  (&local_res20,
                   (TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_> *)
                   (pFVar8 + 0x78));
        pFVar8 = pFVar8 + 200;
      }
      pTVar2 = &this->PrecachePSOsTask;
      if (((*pTVar2 != (TTask<void>)0x0) && (*(char *)((longlong)*pTVar2 + 0xd0) == '\0')) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("PrecachePSOsTask.IsCompleted()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                             ,0x2c3,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_48 = local_60;
      local_40 = (undefined4)local_58;
      local_3c = local_58._4_4_;
      local_58 = 0;
      local_60 = (void *)0x0;
      local_50 = this;
      TVar7 = FastGeo::FAsyncTaskWithAssetRefs::
              Launch<_UFastGeoContainer::PrecachePSOs_::__l8::<lambda_2>_>
                        ((wchar_t *)&local_68,
                         (TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *)
                         L"UFastGeoContainer::PrecachePSOs_Task",(<lambda_2> *)&this->Assets,
                         (ETaskPriority)&local_50);
      if ((TTask<void>)pTVar2 != TVar7) {
        TVar4 = *pTVar2;
        *pTVar2 = *(TTask<void> *)TVar7;
        *(undefined8 *)TVar7 = 0;
        if (TVar4 != (TTask<void>)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)TVar4 + 0x30);
          iVar3 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar3 == 1) {
            (*(code *)**(undefined8 **)TVar4)(TVar4,1);
          }
        }
      }
      if (local_68 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68 + 6);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)*local_68)(local_68,1);
        }
      }
      if (local_48 != (void *)0x0) {
        FMemory::Free(local_48);
      }
      if (local_60 != (void *)0x0) {
        FMemory::Free(local_60);
      }
    }
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// Register @ 14da32d80

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFastGeoContainer::Register(UFastGeoContainer *this)

{
  int iVar1;
  FPhysScene_Chaos *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  UWorld *pUVar5;
  UWorldPartition *this_01;
  TTransform<double> *pTVar6;
  UFastGeoWorldSubsystem *pUVar7;
  longlong lVar8;
  IAsyncPhysicsStateProcessor *pIVar9;
  FScriptContainerElement *pFVar10;
  undefined1 uVar11;
  FScriptContainerElement *pFVar12;
  FFastGeoComponentCluster *pFVar13;
  FFastGeoComponentCluster *pFVar14;
  bool bVar15;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 *local_a8;
  undefined1 *local_a0;
  UFastGeoContainer *local_98;
  UWorld *local_90;
  UFastGeoContainer *local_88;
  UWorld *local_80;
  undefined1 local_78 [8];
  TTransform<double> *local_70;
  UFastGeoContainer *local_68;
  undefined1 local_60 [8];
  TTransform<double> *local_58;
  UFastGeoContainer *local_50;
  
  bVar15 = -1 < CpuChannel->Enabled;
  if (bVar15) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId163,"UFastGeoContainer::Register",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
               ,0xa3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId163);
  }
  if (this->bIsRegistered == false) {
    iVar1 = (this->PendingCreate).RenderState.ComponentsToProcess.ArrayMax;
    this_01 = (UWorldPartition *)0x0;
    (this->PendingCreate).RenderState.ComponentsToProcess.ArrayNum = 0;
    if (iVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&this->PendingCreate,0,
                 &(this->PendingCreate).RenderState.ComponentsToProcess.ArrayMax);
    }
    (this->PendingCreate).RenderState.NumToProcess = 0;
    (this->PendingCreate).RenderState.NumProcessed = 0;
    (this->PendingCreate).RenderState.TotalNumProcessed = 0;
    (this->PendingCreate).PhysicsState.ComponentsToProcess =
         (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0;
    LOCK();
    (this->PendingCreate).PhysicsState.TotalNumProcessed = (atomic<int>)0x0;
    UNLOCK();
    (this->PendingCreate).bIsInBlockingWait = false;
    pUVar5 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    bVar3 = UWorld::IsGameWorld(pUVar5);
    if ((!bVar3) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("GetWorld()->IsGameWorld()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0xaf,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if (((((uint)this->_padding_ >> 0x1e & 1) == 0) &&
        (this_01 = FWorldPartitionHelpersPrivate::GetWorldPartitionFromObject((UObject *)this),
        this_01 != (UWorldPartition *)0x0)) && ((this_01->InstanceTransform).bIsSet != false)) {
      uVar11 = 1;
      pTVar6 = UWorldPartition::GetInstanceTransform(this_01);
    }
    else {
      uVar11 = 0;
      if (this_01 == (UWorldPartition *)0x0) {
        pTVar6 = &UE::Math::TTransform<double>::Identity;
      }
      else {
        pTVar6 = UWorldPartition::GetInstanceTransform(this_01);
      }
    }
    iVar1 = (this->ComponentClusters).ArrayNum;
    pFVar10 = (this->ComponentClusters).AllocatorInstance.Data;
    pFVar12 = pFVar10 + (longlong)iVar1 * 0x88;
    while( true ) {
      if ((this->ComponentClusters).ArrayNum != iVar1) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FFastGeoComponentCluster,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar10 == pFVar12) break;
      (**(code **)(*(longlong *)pFVar10 + 8))(pFVar10);
      local_a8 = local_78;
      local_78[0] = uVar11;
      local_70 = pTVar6;
      local_68 = this;
      `FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Register'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_>_>
                (&local_a8,
                 (TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_> *)(pFVar10 + 0x38)
                );
      `FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Register'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>_>
                (&local_a8,
                 (TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_> *)
                 (pFVar10 + 0x48));
      `FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Register'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_>
                (&local_a8,
                 (TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)
                 (pFVar10 + 0x58));
      `FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Register'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_>
                (&local_a8,
                 (TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)
                 (pFVar10 + 0x68));
      `FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Register'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_>_>
                (&local_a8,
                 (TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_> *)
                 (pFVar10 + 0x78));
      pFVar10 = pFVar10 + 0x88;
    }
    iVar1 = (this->HLODs).ArrayNum;
    pFVar10 = (this->HLODs).AllocatorInstance.Data;
    pFVar12 = pFVar10 + (longlong)iVar1 * 200;
    while( true ) {
      if ((this->HLODs).ArrayNum != iVar1) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FFastGeoHLOD,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar10 == pFVar12) break;
      (**(code **)(*(longlong *)pFVar10 + 8))(pFVar10);
      local_a0 = local_60;
      local_60[0] = uVar11;
      local_58 = pTVar6;
      local_50 = this;
      `FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Register'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_>_>
                (&local_a0,
                 (TArray<FFastGeoStaticMeshComponent,TSizedDefaultAllocator<32>_> *)(pFVar10 + 0x38)
                );
      `FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Register'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_>_>
                (&local_a0,
                 (TArray<FFastGeoInstancedStaticMeshComponent,TSizedDefaultAllocator<32>_> *)
                 (pFVar10 + 0x48));
      `FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Register'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_>
                (&local_a0,
                 (TArray<FFastGeoSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)
                 (pFVar10 + 0x58));
      `FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Register'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_>_>
                (&local_a0,
                 (TArray<FFastGeoInstancedSkinnedMeshComponent,TSizedDefaultAllocator<32>_> *)
                 (pFVar10 + 0x68));
      `FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,``UFastGeoContainer::Register'::__l5::<lambda_1>::operator()'::__l2::<lambda_1>_>'
      ::__l2::<lambda_1>::
      operator()<TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_>_>
                (&local_a0,
                 (TArray<FFastGeoProceduralISMComponent,TSizedDefaultAllocator<32>_> *)
                 (pFVar10 + 0x78));
      pFVar10 = pFVar10 + 200;
    }
    pUVar5 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pUVar7 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(pUVar5);
    if ((this->PendingCreate).RenderState.ComponentsToProcess.ArrayNum != 0) {
      UFastGeoWorldSubsystem::PushAsyncCreateRenderStateJob(pUVar7,this);
    }
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId746,
                 "UFastGeoContainer::OnCreatePhysicsStateBegin_GameThread",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                 ,0x2ea);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId746);
    }
    if ((this->CollisionComponents).ArrayNum != 0) {
      bVar4 = FPhysScene_Chaos::SupportsAsyncPhysicsStateCreation();
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FPhysScene::SupportsAsyncPhysicsStateCreation()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                             ,0x2ee,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      (this->PendingCreate).PhysicsState.ComponentsToProcess = &this->CollisionComponents;
      if (((this->PendingCreate).PhysicsState.TotalNumProcessed != (atomic<int>)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingCreate.PhysicsState.TotalNumProcessed == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                             ,0x2f1,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar8 = (**(code **)(this->_padding_ + 0x180))(this);
      if ((lVar8 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("World",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                             ,0x2f4,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(FPhysScene_Chaos **)(lVar8 + 0x2a0);
      if ((this_00 == (FPhysScene_Chaos *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PhysScene",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                             ,0x2f6,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pIVar9 = (IAsyncPhysicsStateProcessor *)&this->_padding_;
      if (this == (UFastGeoContainer *)0x0) {
        pIVar9 = (IAsyncPhysicsStateProcessor *)0x0;
      }
      FPhysScene_Chaos::PushAsyncCreatePhysicsStateJob(this_00,pIVar9);
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    pUVar5 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    bVar3 = FNavigationSystem::SupportsDynamicChanges(pUVar5);
    if (bVar3) {
      bVar3 = -1 < CpuChannel->Enabled;
      if (bVar3) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId337,"UFastGeoContainer::RegisterToNavigationSystem",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                   ,0x151);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId337);
      }
      if (((this->NavigationElementHandles).ArrayNum != 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NavigationElementHandles.IsEmpty()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                             ,0x152,L""), bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar1 = (this->ComponentClusters).ArrayNum;
      pFVar13 = (FFastGeoComponentCluster *)(this->ComponentClusters).AllocatorInstance.Data;
      pFVar14 = pFVar13 + iVar1;
      while( true ) {
        if ((this->ComponentClusters).ArrayNum != iVar1) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FFastGeoComponentCluster,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar13 == pFVar14) break;
        local_98 = this;
        local_90 = pUVar5;
        FFastGeoComponentCluster::
        ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,__UFastGeoContainer::RegisterToNavigationSystem_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                  (pFVar13,(<lambda_1> *)&local_98);
        pFVar13 = pFVar13 + 1;
      }
      iVar1 = (this->HLODs).ArrayNum;
      pFVar13 = (FFastGeoComponentCluster *)(this->HLODs).AllocatorInstance.Data;
      pFVar14 = (FFastGeoComponentCluster *)((longlong)pFVar13 + (longlong)iVar1 * 200);
      while( true ) {
        if ((this->HLODs).ArrayNum != iVar1) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FFastGeoHLOD,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (pFVar13 == pFVar14) break;
        local_88 = this;
        local_80 = pUVar5;
        FFastGeoComponentCluster::
        ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,__UFastGeoContainer::RegisterToNavigationSystem_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                  (pFVar13,(<lambda_1> *)&local_88);
        pFVar13 = (FFastGeoComponentCluster *)&pFVar13[1].StaticMeshComponents.ArrayNum;
      }
      if (bVar3) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    this->bIsRegistered = true;
  }
  if (((this->PendingCreate).RenderState.TotalNumProcessed <
       (this->PendingCreate).RenderState.ComponentsToProcess.ArrayNum) ||
     (((this->PendingCreate).PhysicsState.ComponentsToProcess !=
       (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0 &&
      ((int)(this->PendingCreate).PhysicsState.TotalNumProcessed <
       ((this->PendingCreate).PhysicsState.ComponentsToProcess)->ArrayNum)))) {
    pUVar5 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    if ((pUVar5 == (UWorld *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("World",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x111,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pUVar7 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(pUVar5);
    UFastGeoWorldSubsystem::ProcessAsyncRenderStateJobs(pUVar7,false);
    if (pUVar5->PhysicsScene != (FPhysScene_Chaos *)0x0) {
      FPhysScene_Chaos::ProcessAsyncPhysicsStateJobs(pUVar5->PhysicsScene,false);
    }
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// RegisterToNavigationSystem @ 14da333b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFastGeoContainer::RegisterToNavigationSystem(UFastGeoContainer *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  UWorld *pUVar5;
  FFastGeoComponentCluster *pFVar6;
  FFastGeoComponentCluster *pFVar7;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  UFastGeoContainer *local_48;
  UWorld *local_40;
  UFastGeoContainer *local_38;
  UWorld *local_30;
  
  pUVar5 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  bVar3 = FNavigationSystem::SupportsDynamicChanges(pUVar5);
  if (bVar3) {
    bVar3 = -1 < CpuChannel->Enabled;
    if (bVar3) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId337,"UFastGeoContainer::RegisterToNavigationSystem",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                 ,0x151);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId337);
    }
    if (((this->NavigationElementHandles).ArrayNum != 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NavigationElementHandles.IsEmpty()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                           ,0x152,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = (this->ComponentClusters).ArrayNum;
    pFVar6 = (FFastGeoComponentCluster *)(this->ComponentClusters).AllocatorInstance.Data;
    pFVar7 = pFVar6 + iVar1;
    while( true ) {
      if ((this->ComponentClusters).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoComponentCluster,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar6 == pFVar7) break;
      local_48 = this;
      local_40 = pUVar5;
      FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,__UFastGeoContainer::RegisterToNavigationSystem_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                (pFVar6,(<lambda_1> *)&local_48);
      pFVar6 = pFVar6 + 1;
    }
    iVar1 = (this->HLODs).ArrayNum;
    pFVar6 = (FFastGeoComponentCluster *)(this->HLODs).AllocatorInstance.Data;
    pFVar7 = (FFastGeoComponentCluster *)((longlong)pFVar6 + (longlong)iVar1 * 200);
    while( true ) {
      if ((this->HLODs).ArrayNum != iVar1) {
        `TCheckedPointerIterator<FFastGeoHLOD,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar6 == pFVar7) break;
      local_38 = this;
      local_30 = pUVar5;
      FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,__UFastGeoContainer::RegisterToNavigationSystem_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
                (pFVar6,(<lambda_1> *)&local_38);
      pFVar6 = (FFastGeoComponentCluster *)&pFVar6[1].StaticMeshComponents.ArrayNum;
    }
    if (bVar3) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  return;
}

// ResolvePhysicsBodyInstanceOwner @ 14da33b90

IPhysicsBodyInstanceOwner * __thiscall
UFastGeoContainer::ResolvePhysicsBodyInstanceOwner(UFastGeoContainer *this,FPhysicsObject *param_1)

{
  code *pcVar1;
  bool bVar2;
  FChaosUserDefinedEntity *pFVar3;
  FWeakObjectPtr *this_00;
  IPhysicsBodyInstanceOwner *pIVar4;
  undefined1 local_res10 [24];
  FLockedPhysicsObjectExternalInterface<0> local_28;
  
  if (param_1 == (FPhysicsObject *)0x0) {
    return (IPhysicsBodyInstanceOwner *)0x0;
  }
  FPhysicsObjectExternalInterface::LockRead(&local_28,param_1);
  pFVar3 = Chaos::FReadPhysicsObjectInterface<0>::GetUserDefinedEntity(&local_28.Interface,param_1);
  if ((pFVar3 != (FChaosUserDefinedEntity *)0x0) &&
     (pFVar3->EntityTypeName ==
      FFastGeoPhysicsBodyInstanceOwner::NAME_FastGeoPhysicsBodyInstanceOwner)) {
    this_00 = (FWeakObjectPtr *)(**(code **)(pFVar3->_padding_ + 8))(pFVar3,local_res10);
    bVar2 = FWeakObjectPtr::IsValid(this_00);
    if (!bVar2) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("FastGeoPhysicsBodyInstanceOwner->GetOwnerObject().IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoPrimitiveComponent.cpp"
                         ,0x386,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pIVar4 = (IPhysicsBodyInstanceOwner *)(*pcVar1)();
        return pIVar4;
      }
    }
    FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28.Lock);
    return (IPhysicsBodyInstanceOwner *)(pFVar3 + 1);
  }
  FScopedSceneLock_Chaos::~FScopedSceneLock_Chaos(&local_28.Lock);
  return (IPhysicsBodyInstanceOwner *)0x0;
}

// Serialize @ 14da37a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UFastGeoContainer::Serialize(UFastGeoContainer *this,FArchive *param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  uint uVar6;
  undefined1 auStackY_178 [32];
  uint local_148;
  undefined1 local_144 [12];
  undefined8 *local_138;
  uint *local_130;
  FArchiveProxy local_128;
  undefined1 local_90 [32];
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ForElementType<FSetElementId> local_50;
  int local_48;
  TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
  UObject::Serialize((UObject *)this,param_1);
  FArchiveProxy::FArchiveProxy(&local_128,param_1);
  local_40 = &this->Assets;
  local_128._padding_ = (longlong)&___7FAssetRemapArchive_FastGeo__6B_;
  local_90._0_8_ = (FScriptContainerElement *)0x0;
  local_128._padding_._3_1_ = param_1->field_0x2b & 0x10 | local_128._padding_._3_1_ & 0xef;
  local_90._8_8_ = 0;
  local_70 = (void *)0x0;
  local_68 = ___xmm_00000000ffffffff0000008000000000;
  uStack_60 = _UNK_150631d98;
  local_50 = (ForElementType<FSetElementId>)0x0;
  local_48 = 0;
  local_148 = 0;
  iVar1 = (this->Assets).ArrayNum;
  if (0 < iVar1) {
    do {
      pTVar4 = local_40;
      uVar3 = local_148;
      uVar6 = 0;
      if ((int)local_148 < local_40->ArrayNum) {
        uVar6 = ~local_148 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_144._4_8_ = *(undefined8 *)((pTVar4->AllocatorInstance).Data + (longlong)(int)uVar3 * 8)
      ;
      local_138 = (undefined8 *)(local_144 + 4);
      local_130 = &local_148;
      TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObject_*_&&,int_const_&>_>
                ((TSet<TTuple<UObject_*,int>,TDefaultMapHashableKeyFuncs<UObject_*,int,0>,FDefaultSetAllocator>
                  *)local_90,(TPairInitializer<UObject_*_&&,int_const_&> *)local_144,
                 (bool *)&local_138);
      local_148 = local_148 + 1;
    } while ((int)local_148 < iVar1);
  }
  TArrayPrivateFriend::Serialize<FFastGeoComponentCluster,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_128,&this->ComponentClusters);
  TArrayPrivateFriend::Serialize<FFastGeoHLOD,TSizedDefaultAllocator<32>_>
            ((FArchive *)&local_128,&this->HLODs);
  if ((param_1->field_0x28 & 1) != 0) {
    InitializeDynamicProperties(this,true);
  }
  local_48 = 0;
  if (local_50 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_50);
  }
  iVar1 = SUB84(local_90._8_8_,4);
  local_90._8_8_ = local_90._8_8_ & 0xffffffff00000000;
  if (iVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)local_90,0,(int *)(local_90 + 0xc));
  }
  uVar3 = local_68._4_4_;
  local_68 = (ulonglong)local_68._4_4_ << 0x20;
  uStack_60 = 0xffffffff;
  if (0x80 < uVar3) {
    local_68 = 0x8000000000;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_90 + 0x10),0);
  }
  if (local_70 != (void *)0x0) {
    FMemory::Free(local_70);
  }
  if ((FScriptContainerElement *)local_90._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_90._0_8_);
  }
  FArchiveProxy::~FArchiveProxy(&local_128);
  return;
}

// Serialize @ 14da37cf0

void __thiscall
UFastGeoContainer::Serialize(UFastGeoContainer *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  Serialize(this,pFVar1);
  return;
}

// SerializeComponentClusters @ 14da37d60

void __thiscall
UFastGeoContainer::SerializeComponentClusters(UFastGeoContainer *this,FArchive *param_1)

{
  TArrayPrivateFriend::Serialize<FFastGeoComponentCluster,TSizedDefaultAllocator<32>_>
            (param_1,&this->ComponentClusters);
  TArrayPrivateFriend::Serialize<FFastGeoHLOD,TSizedDefaultAllocator<32>_>(param_1,&this->HLODs);
  return;
}

// StaticRegisterNativesUFastGeoContainer @ 14da382e0

void __cdecl UFastGeoContainer::StaticRegisterNativesUFastGeoContainer(void)

{
  return;
}

// Tick @ 14da38780

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFastGeoContainer::Tick(UFastGeoContainer *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  UWorld *this_00;
  UFastGeoWorldSubsystem *this_01;
  
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (this_00 == (UWorld *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("World",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                       ,0x111,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this_01 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(this_00);
  do {
    UFastGeoWorldSubsystem::ProcessAsyncRenderStateJobs(this_01,param_1);
    if (this_00->PhysicsScene != (FPhysScene_Chaos *)0x0) {
      FPhysScene_Chaos::ProcessAsyncPhysicsStateJobs(this_00->PhysicsScene,param_1);
    }
  } while ((param_1) &&
          (((((this->PhysicsStateCreation == Creating ||
              ((this->PendingCreate).RenderState.TotalNumProcessed <
               (this->PendingCreate).RenderState.ComponentsToProcess.ArrayNum)) ||
             (((this->PendingCreate).PhysicsState.ComponentsToProcess !=
               (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0 &&
              ((int)(this->PendingCreate).PhysicsState.TotalNumProcessed <
               ((this->PendingCreate).PhysicsState.ComponentsToProcess)->ArrayNum)))) ||
            ((this->PhysicsStateCreation == Destroying ||
             ((this->PendingDestroy).RenderState.TotalNumProcessed <
              (this->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum)))) ||
           (((this->PendingDestroy).PhysicsState.ComponentsToProcess !=
             (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0 &&
            ((int)(this->PendingDestroy).PhysicsState.TotalNumProcessed <
             ((this->PendingDestroy).PhysicsState.ComponentsToProcess)->ArrayNum))))));
  return;
}

// Unregister @ 14da38a20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFastGeoContainer::Unregister(UFastGeoContainer *this)

{
  int *piVar1;
  int iVar2;
  FPhysScene_Chaos *this_00;
  code *pcVar3;
  bool bVar4;
  UWorld *pUVar5;
  UFastGeoWorldSubsystem *pUVar6;
  longlong lVar7;
  IAsyncPhysicsStateProcessor *pIVar8;
  FFastGeoComponentCluster *pFVar9;
  FFastGeoComponentCluster *pFVar10;
  FWeakObjectPtr *pFVar11;
  FWeakObjectPtr *pFVar12;
  bool bVar13;
  bool bVar14;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  UFastGeoContainer *local_res20;
  UFastGeoContainer *local_68 [2];
  FNavigationElementHandle local_58;
  
  bVar13 = -1 < CpuChannel->Enabled;
  if (bVar13) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId226,"UFastGeoContainer::Unregister",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
               ,0xe2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId226);
  }
  if (this->bIsRegistered != false) {
    iVar2 = (this->PendingDestroy).RenderState.ComponentsToProcess.ArrayMax;
    (this->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum = 0;
    if (iVar2 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,(ForAnyElementType *)&this->PendingDestroy,0,
                 &(this->PendingDestroy).RenderState.ComponentsToProcess.ArrayMax);
    }
    (this->PendingDestroy).RenderState.NumToProcess = 0;
    (this->PendingDestroy).RenderState.NumProcessed = 0;
    (this->PendingDestroy).RenderState.TotalNumProcessed = 0;
    (this->PendingDestroy).PhysicsState.ComponentsToProcess =
         (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0;
    LOCK();
    (this->PendingDestroy).PhysicsState.TotalNumProcessed = (atomic<int>)0x0;
    UNLOCK();
    (this->PendingDestroy).bIsInBlockingWait = false;
    iVar2 = (this->ComponentClusters).ArrayNum;
    pFVar9 = (FFastGeoComponentCluster *)(this->ComponentClusters).AllocatorInstance.Data;
    pFVar10 = pFVar9 + iVar2;
    while( true ) {
      if ((this->ComponentClusters).ArrayNum != iVar2) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FFastGeoComponentCluster,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar9 == pFVar10) break;
      (**(code **)(pFVar9->_padding_ + 0x10))(pFVar9);
      local_res20 = this;
      FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,__UFastGeoContainer::Unregister_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
                (pFVar9,(<lambda_1> *)&local_res20);
      pFVar9 = pFVar9 + 1;
    }
    iVar2 = (this->HLODs).ArrayNum;
    pFVar9 = (FFastGeoComponentCluster *)(this->HLODs).AllocatorInstance.Data;
    pFVar10 = (FFastGeoComponentCluster *)((longlong)pFVar9 + (longlong)iVar2 * 200);
    while( true ) {
      if ((this->HLODs).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FFastGeoHLOD,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar9 == pFVar10) break;
      (**(code **)(pFVar9->_padding_ + 0x10))(pFVar9);
      local_68[0] = this;
      FFastGeoComponentCluster::
      ForEachComponent<FFastGeoComponentCluster,FFastGeoPrimitiveComponent,__UFastGeoContainer::Unregister_::__l5::<lambda_1>::operator()_::__l2::<lambda_1>_>
                (pFVar9,(<lambda_1> *)local_68);
      pFVar9 = (FFastGeoComponentCluster *)&pFVar9[1].StaticMeshComponents.ArrayNum;
    }
    if ((this->NavigationElementHandles).ArrayNum != 0) {
      bVar14 = -1 < CpuChannel->Enabled;
      if (bVar14) {
        FCpuProfilerTrace::GetOrCreateSpecId
                  (&__CpuProfilerEventSpecId374,"UFastGeoContainer::UnregisterFromNavigationSystem",
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                   ,0x176);
        FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId374);
      }
      iVar2 = (this->NavigationElementHandles).ArrayNum;
      pFVar11 = (FWeakObjectPtr *)(this->NavigationElementHandles).AllocatorInstance.Data;
      pFVar12 = pFVar11 + (longlong)iVar2 * 2;
      while( true ) {
        if ((this->NavigationElementHandles).ArrayNum != iVar2) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<FNavigationElementHandle,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res18);
        }
        if (pFVar11 == pFVar12) break;
        local_58.OwnerUObject.WeakPtr = *pFVar11;
        local_58.SubElementId = *(ulong64 *)(pFVar11 + 1);
        pUVar5 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
        FNavigationSystem::RemoveNavigationElement(pUVar5,&local_58);
        pFVar11 = pFVar11 + 2;
      }
      piVar1 = &(this->NavigationElementHandles).ArrayMax;
      (this->NavigationElementHandles).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0,&(this->NavigationElementHandles).AllocatorInstance,0,piVar1);
      }
      if (bVar14) {
        FCpuProfilerTrace::OutputEndEvent();
      }
    }
    pUVar5 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    pUVar6 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(pUVar5);
    if ((this->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum != 0) {
      UFastGeoWorldSubsystem::PushAsyncDestroyRenderStateJob(pUVar6,this);
    }
    bVar14 = -1 < CpuChannel->Enabled;
    if (bVar14) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId765,
                 "UFastGeoContainer::OnDestroyPhysicsStateBegin_GameThread",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                 ,0x2fd);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId765);
    }
    if ((this->CollisionComponents).ArrayNum != 0) {
      bVar4 = FPhysScene_Chaos::SupportsAsyncPhysicsStateDestruction();
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("FPhysScene::SupportsAsyncPhysicsStateDestruction()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                             ,0x301,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->PendingDestroy).PhysicsState.ComponentsToProcess = &this->CollisionComponents;
      if (((this->PendingDestroy).PhysicsState.TotalNumProcessed != (atomic<int>)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PendingDestroy.PhysicsState.TotalNumProcessed == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                             ,0x304,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar7 = (**(code **)(this->_padding_ + 0x180))(this);
      if ((lVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("World",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                             ,0x307,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      this_00 = *(FPhysScene_Chaos **)(lVar7 + 0x2a0);
      if ((this_00 == (FPhysScene_Chaos *)0x0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PhysScene",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                             ,0x309,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pIVar8 = (IAsyncPhysicsStateProcessor *)&this->_padding_;
      if (this == (UFastGeoContainer *)0x0) {
        pIVar8 = (IAsyncPhysicsStateProcessor *)0x0;
      }
      bVar4 = FPhysScene_Chaos::PushAsyncDestroyPhysicsStateJob(this_00,pIVar8);
      if ((!bVar4) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("PhysScene->PushAsyncDestroyPhysicsStateJob(this)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                             ,0x30a,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (bVar14) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    this->bIsRegistered = false;
  }
  if (((this->PendingDestroy).RenderState.TotalNumProcessed <
       (this->PendingDestroy).RenderState.ComponentsToProcess.ArrayNum) ||
     (((this->PendingDestroy).PhysicsState.ComponentsToProcess !=
       (TArray<FFastGeoComponent_*,TSizedDefaultAllocator<32>_> *)0x0 &&
      ((int)(this->PendingDestroy).PhysicsState.TotalNumProcessed <
       ((this->PendingDestroy).PhysicsState.ComponentsToProcess)->ArrayNum)))) {
    pUVar5 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
    if ((pUVar5 == (UWorld *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("World",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                            ,0x111,L""), bVar14)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pUVar6 = UWorld::GetSubsystem<UFastGeoWorldSubsystem>(pUVar5);
    UFastGeoWorldSubsystem::ProcessAsyncRenderStateJobs(pUVar6,false);
    if (pUVar5->PhysicsScene != (FPhysScene_Chaos *)0x0) {
      FPhysScene_Chaos::ProcessAsyncPhysicsStateJobs(pUVar5->PhysicsScene,false);
    }
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// UnregisterFromNavigationSystem @ 14da38f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall UFastGeoContainer::UnregisterFromNavigationSystem(UFastGeoContainer *this)

{
  int *piVar1;
  int iVar2;
  UWorld *pUVar3;
  FWeakObjectPtr *pFVar4;
  FWeakObjectPtr *pFVar5;
  bool bVar6;
  undefined1 local_res8 [8];
  FNavigationElementHandle local_28;
  
  if ((this->NavigationElementHandles).ArrayNum != 0) {
    bVar6 = -1 < CpuChannel->Enabled;
    if (bVar6) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId374,"UFastGeoContainer::UnregisterFromNavigationSystem",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\FastGeoStreaming\\Source\\FastGeoStreaming\\Private\\FastGeoContainer.cpp"
                 ,0x176);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId374);
    }
    iVar2 = (this->NavigationElementHandles).ArrayNum;
    pFVar5 = (FWeakObjectPtr *)(this->NavigationElementHandles).AllocatorInstance.Data;
    pFVar4 = pFVar5 + (longlong)iVar2 * 2;
    while( true ) {
      if ((this->NavigationElementHandles).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNavigationElementHandle,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar5 == pFVar4) break;
      local_28.OwnerUObject.WeakPtr = *pFVar5;
      local_28.SubElementId = *(ulong64 *)(pFVar5 + 1);
      pUVar3 = (UWorld *)(**(code **)(this->_padding_ + 0x180))(this);
      FNavigationSystem::RemoveNavigationElement(pUVar3,&local_28);
      pFVar5 = pFVar5 + 2;
    }
    piVar1 = &(this->NavigationElementHandles).ArrayMax;
    (this->NavigationElementHandles).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&(this->NavigationElementHandles).AllocatorInstance,0,piVar1);
    }
    if (bVar6) {
      FCpuProfilerTrace::OutputEndEvent();
      return;
    }
  }
  return;
}

// _getUObject @ 14da39f10

UObject * __thiscall UFastGeoContainer::_getUObject(UFastGeoContainer *this)

{
  return (UObject *)&this[-1].CollisionComponents;
}

