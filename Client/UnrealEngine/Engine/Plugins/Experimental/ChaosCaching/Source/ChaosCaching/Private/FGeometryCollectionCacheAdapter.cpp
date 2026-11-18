// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 23

// ~FGeometryCollectionCacheAdapter @ 14dae89d0

void __thiscall
Chaos::FGeometryCollectionCacheAdapter::~FGeometryCollectionCacheAdapter
          (FGeometryCollectionCacheAdapter *this)

{
  void *pvVar1;
  ForElementType<FSetElementId> FVar2;
  
  *(undefined4 *)&(this->CachedData).field_0x48 = 0;
  pvVar1 = *(void **)&(this->CachedData).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,Chaos::FCachedEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,Chaos::FCachedEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,Chaos::FCachedEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->CachedData);
  (this->SolversListenedToForEvents).HashSize = 0;
  FVar2 = (this->SolversListenedToForEvents).Hash.SecondaryData;
  if (FVar2 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->SolversListenedToForEvents);
  return;
}

// operator() @ 14dae9d70

void __thiscall
`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l76::<lambda_1>::operator()
          (void *this,FBreakingEventData *param_1)

{
  int *piVar1;
  FBreakingData *pFVar2;
  FBreakingData *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((double)*(float *)((longlong)this + 8) != (double)(param_1->BreakingData)._padding_) {
    iVar6 = (param_1->BreakingData).AllBreakingsArray.ArrayMax;
    (param_1->BreakingData).AllBreakingsArray.ArrayNum = 0;
    if (iVar6 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,0x10,0,&(param_1->BreakingData).AllBreakingsArray.AllocatorInstance,0,
                 &(param_1->BreakingData).AllBreakingsArray.ArrayMax);
    }
    (param_1->BreakingData)._padding_ = (longlong)(double)*(float *)((longlong)this + 8);
  }
  pFVar2 = *(FBreakingData **)this;
  pFVar3 = (FBreakingData *)(param_1->BreakingData).AllBreakingsArray.AllocatorInstance.Data;
  if ((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (param_1->BreakingData).AllBreakingsArray.ArrayMax))
  {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar6 = (param_1->BreakingData).AllBreakingsArray.ArrayNum;
  piVar1 = &(param_1->BreakingData).AllBreakingsArray.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(param_1->BreakingData).AllBreakingsArray.AllocatorInstance,piVar1);
    (param_1->BreakingData).AllBreakingsArray.ArrayNum = iVar6;
  }
  (param_1->BreakingData).AllBreakingsArray.ArrayNum = iVar6 + 1;
  Chaos::FBreakingData::FBreakingData
            ((FBreakingData *)
             ((param_1->BreakingData).AllBreakingsArray.AllocatorInstance.Data +
             (longlong)iVar6 * 0xc0),pFVar2);
  return;
}

// operator() @ 14daea120

void __thiscall
`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l95::<lambda_2>::operator()
          (void *this,FTrailingEventData *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  
  if ((double)*(float *)((longlong)this + 8) != (double)(param_1->TrailingData)._padding_) {
    iVar7 = (param_1->TrailingData).AllTrailingsArray.ArrayMax;
    (param_1->TrailingData).AllTrailingsArray.ArrayNum = 0;
    if (iVar7 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,0x10,0,&(param_1->TrailingData).AllTrailingsArray.AllocatorInstance,0,
                 &(param_1->TrailingData).AllTrailingsArray.ArrayMax);
    }
    (param_1->TrailingData)._padding_ = (longlong)(double)*(float *)((longlong)this + 8);
  }
  pFVar2 = *(FScriptContainerElement **)this;
  pFVar3 = (param_1->TrailingData).AllTrailingsArray.AllocatorInstance.Data;
  if ((pFVar3 <= pFVar2) &&
     (pFVar2 < pFVar3 + (longlong)(param_1->TrailingData).AllTrailingsArray.ArrayMax * 0xc0)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  iVar7 = (param_1->TrailingData).AllTrailingsArray.ArrayNum;
  piVar1 = &(param_1->TrailingData).AllTrailingsArray.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(param_1->TrailingData).AllTrailingsArray.AllocatorInstance,piVar1);
    (param_1->TrailingData).AllTrailingsArray.ArrayNum = iVar7;
  }
  (param_1->TrailingData).AllTrailingsArray.ArrayNum = iVar7 + 1;
  pFVar3 = (param_1->TrailingData).AllTrailingsArray.AllocatorInstance.Data;
  uVar5 = *(undefined8 *)(pFVar2 + 8);
  lVar8 = (longlong)iVar7 * 0xc0;
  *(undefined8 *)(pFVar3 + lVar8) = *(undefined8 *)pFVar2;
  *(undefined8 *)(pFVar3 + lVar8 + 8) = uVar5;
  *(undefined8 *)(pFVar3 + lVar8 + 0x10) = *(undefined8 *)(pFVar2 + 0x10);
  uVar5 = *(undefined8 *)(pFVar2 + 0x28);
  *(undefined8 *)(pFVar3 + lVar8 + 0x20) = *(undefined8 *)(pFVar2 + 0x20);
  *(undefined8 *)(pFVar3 + lVar8 + 0x20 + 8) = uVar5;
  uVar5 = *(undefined8 *)(pFVar2 + 0x38);
  *(undefined8 *)(pFVar3 + lVar8 + 0x30) = *(undefined8 *)(pFVar2 + 0x30);
  *(undefined8 *)(pFVar3 + lVar8 + 0x30 + 8) = uVar5;
  uVar5 = *(undefined8 *)(pFVar2 + 0x48);
  *(undefined8 *)(pFVar3 + lVar8 + 0x40) = *(undefined8 *)(pFVar2 + 0x40);
  *(undefined8 *)(pFVar3 + lVar8 + 0x40 + 8) = uVar5;
  *(undefined8 *)(pFVar3 + lVar8 + 0x50) = *(undefined8 *)(pFVar2 + 0x50);
  uVar5 = *(undefined8 *)(pFVar2 + 0x60);
  *(undefined8 *)(pFVar3 + lVar8 + 0x58) = *(undefined8 *)(pFVar2 + 0x58);
  *(undefined8 *)(pFVar3 + lVar8 + 0x58 + 8) = uVar5;
  *(undefined8 *)(pFVar3 + lVar8 + 0x68) = *(undefined8 *)(pFVar2 + 0x68);
  *(undefined8 *)(pFVar3 + lVar8 + 0x70) = *(undefined8 *)(pFVar2 + 0x70);
  *(undefined8 *)(pFVar3 + lVar8 + 0x78) = *(undefined8 *)(pFVar2 + 0x78);
  uVar5 = *(undefined8 *)(pFVar2 + 0x88);
  *(undefined8 *)(pFVar3 + lVar8 + 0x80) = *(undefined8 *)(pFVar2 + 0x80);
  *(undefined8 *)(pFVar3 + lVar8 + 0x80 + 8) = uVar5;
  *(undefined8 *)(pFVar3 + lVar8 + 0x90) = *(undefined8 *)(pFVar2 + 0x90);
  uVar5 = *(undefined8 *)(pFVar2 + 0xa0);
  *(undefined8 *)(pFVar3 + lVar8 + 0x98) = *(undefined8 *)(pFVar2 + 0x98);
  *(undefined8 *)(pFVar3 + lVar8 + 0x98 + 8) = uVar5;
  *(undefined8 *)(pFVar3 + lVar8 + 0xa8) = *(undefined8 *)(pFVar2 + 0xa8);
  *(undefined4 *)(pFVar3 + lVar8 + 0xb0) = *(undefined4 *)(pFVar2 + 0xb0);
  return;
}

// operator() @ 14daea2e0

void __thiscall
`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l108::<lambda_3>::operator()
          (void *this,FCollisionEventData *param_1)

{
  TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar9;
  uint uVar10;
  longlong lVar11;
  ulonglong *puVar12;
  undefined1 *puVar13;
  FScriptContainerElement *pFVar14;
  TMap<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
  *this_00;
  FScriptContainerElement *pFVar15;
  IPhysicsProxyBase *local_res8;
  int local_18 [4];
  
  pTVar1 = &(param_1->CollisionData).AllCollisionsArray;
  if ((double)*(float *)((longlong)this + 8) != (double)(param_1->CollisionData)._padding_) {
    iVar8 = (param_1->CollisionData).AllCollisionsArray.ArrayMax;
    (param_1->CollisionData).AllCollisionsArray.ArrayNum = 0;
    if (iVar8 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x120,8,0,&pTVar1->AllocatorInstance,0,
                 &(param_1->CollisionData).AllCollisionsArray.ArrayMax);
    }
    TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap);
    (param_1->CollisionData)._padding_ = (longlong)(double)*(float *)((longlong)this + 8);
  }
  this_00 = &(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap;
  pFVar3 = *(FScriptContainerElement **)this;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar4 <= pFVar3) &&
      (pFVar3 < pFVar4 + (longlong)(param_1->CollisionData).AllCollisionsArray.ArrayMax * 0x120)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_18[0] = (param_1->CollisionData).AllCollisionsArray.ArrayNum;
  piVar2 = &(param_1->CollisionData).AllCollisionsArray.ArrayMax;
  if (local_18[0] == *piVar2) {
    local_18[0] = UE::Core::Private::
                  ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x120,8,&pTVar1->AllocatorInstance,piVar2);
    (param_1->CollisionData).AllCollisionsArray.ArrayNum = local_18[0];
  }
  (param_1->CollisionData).AllCollisionsArray.ArrayNum = local_18[0] + 1;
  lVar11 = 2;
  pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)local_18[0] * 0x120;
  do {
    pFVar15 = pFVar4;
    pFVar14 = pFVar3;
    uVar6 = *(undefined8 *)(pFVar14 + 8);
    *(undefined8 *)pFVar15 = *(undefined8 *)pFVar14;
    *(undefined8 *)(pFVar15 + 8) = uVar6;
    uVar6 = *(undefined8 *)(pFVar14 + 0x18);
    *(undefined8 *)(pFVar15 + 0x10) = *(undefined8 *)(pFVar14 + 0x10);
    *(undefined8 *)(pFVar15 + 0x18) = uVar6;
    uVar6 = *(undefined8 *)(pFVar14 + 0x28);
    *(undefined8 *)(pFVar15 + 0x20) = *(undefined8 *)(pFVar14 + 0x20);
    *(undefined8 *)(pFVar15 + 0x28) = uVar6;
    uVar6 = *(undefined8 *)(pFVar14 + 0x38);
    *(undefined8 *)(pFVar15 + 0x30) = *(undefined8 *)(pFVar14 + 0x30);
    *(undefined8 *)(pFVar15 + 0x38) = uVar6;
    uVar6 = *(undefined8 *)(pFVar14 + 0x48);
    *(undefined8 *)(pFVar15 + 0x40) = *(undefined8 *)(pFVar14 + 0x40);
    *(undefined8 *)(pFVar15 + 0x48) = uVar6;
    uVar6 = *(undefined8 *)(pFVar14 + 0x58);
    *(undefined8 *)(pFVar15 + 0x50) = *(undefined8 *)(pFVar14 + 0x50);
    *(undefined8 *)(pFVar15 + 0x58) = uVar6;
    uVar6 = *(undefined8 *)(pFVar14 + 0x68);
    *(undefined8 *)(pFVar15 + 0x60) = *(undefined8 *)(pFVar14 + 0x60);
    *(undefined8 *)(pFVar15 + 0x68) = uVar6;
    uVar6 = *(undefined8 *)(pFVar14 + 0x78);
    *(undefined8 *)(pFVar15 + 0x70) = *(undefined8 *)(pFVar14 + 0x70);
    *(undefined8 *)(pFVar15 + 0x78) = uVar6;
    lVar11 = lVar11 + -1;
    pFVar3 = pFVar14 + 0x80;
    pFVar4 = pFVar15 + 0x80;
  } while (lVar11 != 0);
  uVar6 = *(undefined8 *)(pFVar14 + 0x88);
  *(undefined8 *)(pFVar15 + 0x80) = *(undefined8 *)(pFVar14 + 0x80);
  *(undefined8 *)(pFVar15 + 0x88) = uVar6;
  uVar6 = *(undefined8 *)(pFVar14 + 0x98);
  *(undefined8 *)(pFVar15 + 0x90) = *(undefined8 *)(pFVar14 + 0x90);
  *(undefined8 *)(pFVar15 + 0x98) = uVar6;
  local_res8 = *(IPhysicsProxyBase **)((longlong)this + 0x10);
  uVar10 = ((uint)((ulonglong)local_res8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_res8 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  if (*(int *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x8 !=
      *(int *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x34) {
    puVar13 = *(undefined1 **)
               &(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x38;
    }
    iVar8 = *(int *)(puVar13 +
                    (ulonglong)
                    (*(int *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.
                              field_0x48 - 1U & uVar10) * 4);
    if (iVar8 != -1) {
      do {
        puVar12 = (ulonglong *)((longlong)iVar8 * 0x20 + *(longlong *)this_00);
        if ((IPhysicsProxyBase *)*puVar12 == local_res8) {
          if (puVar12 != (ulonglong *)0x0) {
            pTVar9 = (TArray<int,TSizedDefaultAllocator<32>_> *)(puVar12 + 1);
            goto LAB_14daea4fe;
          }
          break;
        }
        iVar8 = (int)puVar12[3];
      } while (iVar8 != -1);
    }
  }
  pTVar9 = TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
           ::EmplaceByHash<IPhysicsProxyBase_*>
                     ((TMapBase<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                       *)this_00,uVar10,&local_res8);
LAB_14daea4fe:
  pFVar3 = (pTVar9->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)pTVar9->ArrayMax * 4)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  iVar8 = pTVar9->ArrayNum;
  if (iVar8 == pTVar9->ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
  }
  pTVar9->ArrayNum = iVar8 + 1;
  *(int *)((pTVar9->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_18[0];
  return;
}

// BuildEventsSolver @ 14daece40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPhysicsSolverEvents * __thiscall
Chaos::FGeometryCollectionCacheAdapter::BuildEventsSolver
          (FGeometryCollectionCacheAdapter *this,UPrimitiveComponent *param_1)

{
  FPhysicsSolverEvents *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014daece43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FPhysicsSolverEvents *)(**(code **)(this->_padding_ + 0x20))();
  return pFVar1;
}

// FinalizeComponent @ 14daf5020

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
Chaos::FGeometryCollectionCacheAdapter::FinalizeComponent
          (FGeometryCollectionCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2)

{
  FGeometryCollectionPhysicsProxy *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  UGeometryCollectionComponent *pUVar6;
  uint uVar7;
  undefined1 local_res20 [8];
  FGeometryCollectionPhysicsProxy *local_28;
  code *local_20;
  undefined1 *local_18;
  
  puVar4 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_18 = local_res20;
  local_20 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar5 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_20,puVar4);
  bVar3 = IsInGameThread();
  if (((!bVar3) && (*(int *)&pFVar5[2].field_0x4 < 1)) || (*(char *)(pFVar5 + 3) != '\0')) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<3522308889972310313>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                       ,0x129,"IsInGameThreadContext()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pUVar6 = CastChecked<UGeometryCollectionComponent,UPrimitiveComponent>(param_1);
  if ((pUVar6 != (UGeometryCollectionComponent *)0x0) &&
     (pFVar1 = pUVar6->PhysicsProxy, pFVar1 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    UnregisterEventHandler(this,pFVar1);
    if (*(int *)&(this->CachedData).field_0x8 != *(int *)&(this->CachedData).field_0x34) {
      uVar7 = ((uint)((ulonglong)pFVar1 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar1 >> 4)) *
              -0x7a143595;
      uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
      local_28 = pFVar1;
      TSet<TTuple<IPhysicsProxyBase_*,Chaos::FCachedEventData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,Chaos::FCachedEventData,0>,FDefaultSetAllocator>
      ::RemoveImpl<IPhysicsProxyBase_const_*>
                ((TSet<TTuple<IPhysicsProxyBase_*,Chaos::FCachedEventData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,Chaos::FCachedEventData,0>,FDefaultSetAllocator>
                  *)&this->CachedData,uVar7 >> 0x10 ^ uVar7,(IPhysicsProxyBase **)&local_28);
    }
  }
  return;
}

// GatherAllBreaksUpToTime @ 14daf7160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TArray<int,TSizedDefaultAllocator<32>_> * __thiscall
Chaos::FGeometryCollectionCacheAdapter::GatherAllBreaksUpToTime
          (FGeometryCollectionCacheAdapter *this,
          TArray<int,TSizedDefaultAllocator<32>_> *__return_storage_ptr__,UChaosCache *param_1,
          float param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  UPackage *pUVar10;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar11;
  FName *pFVar12;
  undefined1 *puVar13;
  longlong lVar14;
  FName FVar15;
  FName *pFVar16;
  FName FVar17;
  undefined1 auStackY_2b8 [32];
  undefined1 local_268 [4];
  uint local_264;
  FCacheEvaluationContext local_260;
  undefined1 local_238 [16];
  undefined8 local_228;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  void *local_1f0;
  undefined4 local_1e8;
  double local_1d8 [2];
  double local_1c8 [2];
  double local_1b8 [2];
  double local_1a8 [2];
  double local_198 [2];
  double local_188 [2];
  undefined1 local_178 [128];
  int local_f8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  local_208 = ___xmm_00000000ffffffff0000008000000000;
  uStack_200 = _UNK_150631d98;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_260.TickRecord = (FPlaybackTickRecord *)local_238;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  local_1d8[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
  local_1d8[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
  local_1c8[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
  local_1c8[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
  local_1b8[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
  local_1b8[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
  local_1a8[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
  local_1a8[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
  local_198[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
  local_198[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
  local_188[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
  local_188[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
  local_238._8_8_ = 0;
  local_228 = 0;
  local_210 = 0;
  local_1f0 = (void *)0x0;
  local_1e8 = 0;
  local_238._4_4_ = 0;
  local_260.EvaluationIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_260.EvaluationIndices.ArrayNum = 0;
  local_260.EvaluationIndices.ArrayMax = 0;
  local_260.bEvaluateNamedTransforms = false;
  local_260.bEvaluateTransform = false;
  local_260.bEvaluateCurves = false;
  local_260.bEvaluateEvents = true;
  local_238._0_4_ = param_2;
  UChaosCache::Evaluate
            (param_1,(FCacheEvaluationResult *)local_178,&local_260,
             (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0);
  FVar15 = FEnableStateEvent::EventName;
  uVar6 = ::GetTypeHash(FEnableStateEvent::EventName.ComparisonIndex.Value);
  if (local_178._64_4_ != local_178._108_4_) {
    puVar13 = (undefined1 *)((longlong)&((FCacheEvaluationResult *)local_178)->Events + 0x38);
    if ((undefined1 *)local_178._120_8_ != (undefined1 *)0x0) {
      puVar13 = (undefined1 *)local_178._120_8_;
    }
    uVar6 = *(uint *)(puVar13 + (ulonglong)(local_f8 - 1U & uVar6 + FVar15.Number) * 4);
    while (uVar6 != 0xffffffff) {
      pFVar12 = (FName *)((longlong)(int)uVar6 * 0x20 + local_178._56_8_);
      if (*pFVar12 == FVar15) {
        pFVar16 = pFVar12 + 1;
        if (pFVar12 == (FName *)0x0) {
          pFVar16 = (FName *)0x0;
        }
        if (pFVar16 != (FName *)0x0) {
          uVar6 = pFVar16[1].ComparisonIndex.Value;
          if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
          }
          if (*piVar1 < (int)uVar6) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,uVar6,&__return_storage_ptr__->AllocatorInstance,
                       __return_storage_ptr__->ArrayNum,piVar1);
          }
          local_264 = pFVar16[1].ComparisonIndex.Value;
          uVar9 = (ulonglong)(int)local_264;
          FVar15 = *pFVar16;
          FVar17 = (FName)(uVar9 * 0x10 + (longlong)FVar15);
          while( true ) {
            if (pFVar16[1].ComparisonIndex.Value != (uint)uVar9) {
              local_268[0] = 0;
              `TCheckedPointerIterator<FCacheEventTrack::FHandle_const_,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_268);
            }
            if (FVar15 == FVar17) break;
            uVar6 = *(uint *)((longlong)FVar15 + 0xc);
            if (((uVar6 != 0xffffffff) && (lVar14 = *(longlong *)FVar15, lVar14 != 0)) &&
               (*(int *)(lVar14 + 0x30) == *(int *)((longlong)FVar15 + 8))) {
              if ((((int)uVar6 < 0) || (*(int *)(lVar14 + 0x28) <= (int)uVar6)) ||
                 (*(longlong *)(lVar14 + 8) == 0)) {
                lVar14 = 0;
              }
              else {
                if (Z_Registration_Info_UScriptStruct_FEnableStateEvent.OuterSingleton ==
                    (UScriptStruct *)0x0) {
                  pUVar10 = Z_Construct_UPackage__Script_ChaosCaching();
                  Z_Registration_Info_UScriptStruct_FEnableStateEvent.OuterSingleton =
                       GetStaticStruct(Z_Construct_UScriptStruct_FEnableStateEvent,
                                       (UObject *)pUVar10,L"EnableStateEvent");
                }
                if ((Z_Registration_Info_UScriptStruct_FEnableStateEvent.OuterSingleton !=
                     *(UScriptStruct **)(lVar14 + 8)) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("T::StaticStruct() == Struct",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Public\\Chaos\\CacheEvents.h"
                                       ,0x6e,L""), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                  return pTVar11;
                }
                uVar7 = 0;
                if ((int)uVar6 < *(int *)(lVar14 + 0x28)) {
                  uVar7 = ~uVar6 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar5)) {
                  pcVar4 = (code *)swi(3);
                  pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                  return pTVar11;
                }
                lVar14 = *(longlong *)(*(longlong *)(lVar14 + 0x20) + (longlong)(int)uVar6 * 8);
              }
              if ((lVar14 != 0) && (*(char *)(lVar14 + 0xc) != '\0')) {
                pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
                pFVar2 = (FScriptContainerElement *)(lVar14 + 8);
                if ((pFVar3 <= pFVar2) &&
                   ((pFVar2 < pFVar3 + (longlong)*piVar1 * 4 &&
                    (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar5)))) {
                  pcVar4 = (code *)swi(3);
                  pTVar11 = (TArray<int,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
                  return pTVar11;
                }
                iVar8 = __return_storage_ptr__->ArrayNum;
                if (iVar8 == *piVar1) {
                  iVar8 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&__return_storage_ptr__->AllocatorInstance,piVar1);
                }
                pFVar3 = (__return_storage_ptr__->AllocatorInstance).Data;
                __return_storage_ptr__->ArrayNum = iVar8 + 1;
                *(undefined4 *)(pFVar3 + (longlong)iVar8 * 4) = *(undefined4 *)pFVar2;
              }
            }
            uVar9 = (ulonglong)local_264;
            FVar15 = (FName)((longlong)FVar15 + 0x10);
          }
        }
        break;
      }
      uVar6 = pFVar12[3].ComparisonIndex.Value;
    }
  }
  FCacheEvaluationResult::~FCacheEvaluationResult((FCacheEvaluationResult *)local_178);
  if (local_260.EvaluationIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_260.EvaluationIndices.AllocatorInstance.Data);
  }
  local_1e8 = 0;
  if (local_1f0 != (void *)0x0) {
    FMemory::Free(local_1f0);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)(local_238 + 8));
  return __return_storage_ptr__;
}

// GetComponentSolver @ 14daf7c60

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FPBDRigidsSolver * __thiscall
Chaos::FGeometryCollectionCacheAdapter::GetComponentSolver
          (FGeometryCollectionCacheAdapter *this,UPrimitiveComponent *param_1)

{
  int iVar1;
  UClass *pUVar2;
  AChaosSolverActor *pAVar3;
  UWorld *pUVar4;
  
  if (param_1 != (UPrimitiveComponent *)0x0) {
    pUVar2 = Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar2->_padding_)) &&
       (pAVar3 = UGeometryCollectionComponent::GetPhysicsSolverActor
                           ((UGeometryCollectionComponent *)param_1),
       pAVar3 != (AChaosSolverActor *)0x0)) {
      return (pAVar3->RigidSolverProxy).Solver;
    }
    if ((*(longlong *)&param_1->field_0xb0 == 0) &&
       (pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1),
       pUVar4 == (UWorld *)0x0)) {
      return (FPBDRigidsSolver *)0x0;
    }
    pUVar4 = *(UWorld **)&param_1->field_0xb0;
    if (pUVar4 == (UWorld *)0x0) {
      pUVar4 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    if (pUVar4->PhysicsScene != (FPhysScene_Chaos *)0x0) {
      return (FPBDRigidsSolver *)pUVar4->PhysicsScene->_padding_;
    }
  }
  return (FPBDRigidsSolver *)0x0;
}

// GetDesiredClass @ 14daf7d70

UClass * __thiscall
Chaos::FGeometryCollectionCacheAdapter::GetDesiredClass(FGeometryCollectionCacheAdapter *this)

{
  FUObjectCppClassStaticFunctions aFStackX_8 [4];
  
  if (Z_Registration_Info_UClass_UGeometryCollectionComponent.InnerSingleton == (UClass *)0x0) {
    aFStackX_8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCollectionEngine",L"GeometryCollectionComponent",
               &Z_Registration_Info_UClass_UGeometryCollectionComponent.InnerSingleton,
               UGeometryCollectionComponent::StaticRegisterNativesUGeometryCollectionComponent,0xa90
               ,0x10,CLASS_Intrinsic|CLASS_Config,CASTCLASS_None,L"Engine",
               InternalConstructor<UGeometryCollectionComponent>,
               InternalVTableHelperCtorCaller<UGeometryCollectionComponent>,aFStackX_8,
               UMeshComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UGeometryCollectionComponent.InnerSingleton;
}

// GetGuid @ 14daf7f10

FGuid * __thiscall
Chaos::FGeometryCollectionCacheAdapter::GetGuid
          (FGeometryCollectionCacheAdapter *this,FGuid *__return_storage_ptr__)

{
  __return_storage_ptr__->A = 0;
  __return_storage_ptr__->B = 0;
  __return_storage_ptr__->C = 0;
  __return_storage_ptr__->D = 0;
  return __return_storage_ptr__;
}

// GetPriority @ 14daf82e0

uchar __thiscall
Chaos::FGeometryCollectionCacheAdapter::GetPriority(FGeometryCollectionCacheAdapter *this)

{
  return '\0';
}

// HandleBreakingEvents @ 14daf8b50

void __thiscall
Chaos::FGeometryCollectionCacheAdapter::HandleBreakingEvents
          (FGeometryCollectionCacheAdapter *this,FBreakingEventData *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  IPhysicsProxyBase *pIVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  FTlsAutoCleanup *pFVar12;
  undefined1 *puVar13;
  TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar14;
  longlong lVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  code *local_78;
  undefined1 *local_70;
  undefined4 local_4c;
  
  puVar11 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_70 = local_res10;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar12 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar11);
  bVar7 = IsInGameThread();
  if ((((!bVar7) && (*(int *)&pFVar12[2].field_0x4 < 1)) || (*(char *)(pFVar12 + 3) != '\0')) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3522308889972310313>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                         ,0x129,"IsInGameThreadContext()"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar19 = 0;
  puVar1 = &(this->CachedData).field_0x10;
  this->BreakingDataArray = &(param_1->BreakingData).AllBreakingsArray;
  iVar10 = *(int *)&(this->CachedData).field_0x28;
  iVar20 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar10 != 0) {
    puVar11 = *(uint **)&(this->CachedData).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar1;
    }
    uVar18 = *puVar11;
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar19;
      iVar20 = iVar20 + 0x20;
      iVar19 = iVar19 + 1;
      iVar9 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14daf8c6d;
      uVar18 = puVar11[lVar15 + 1];
    }
    uVar8 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (int)lVar15;
    iVar9 = iVar20 + -1 + local_res18;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_14daf8c6d:
  uVar18 = *(uint *)&(this->CachedData).field_0x28;
  uVar17 = uVar18 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uVar8,iVar19);
  TStack_a0.CurrentBitIndex = iVar9;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_a0._28_4_ = local_4c;
  TStack_a0.BaseBitIndex = iVar20;
  uStack_80 = CONCAT44(uStack_ac,
                       *(int *)&(this->CachedData).field_0x8 -
                       *(int *)&(this->CachedData).field_0x34);
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar10 < (int)uVar18)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->CachedData).field_0x28;
  if (uVar18 != uVar8) {
    puVar13 = *(undefined1 **)&(this->CachedData).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar19;
      uVar17 = uVar17 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14daf8d70;
      uVar18 = *(uint *)(puVar13 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res20 = (int)lVar15;
    uVar18 = local_res20 + -1 + uVar17;
    if ((int)uVar8 < (int)uVar18) {
      uVar18 = uVar8;
    }
  }
LAB_14daf8d70:
  do {
    if (*(int *)&(this->CachedData).field_0x8 - *(int *)&(this->CachedData).field_0x34 !=
        (int)uStack_80) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,Chaos::FCachedEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar15 = (longlong)TStack_a0.CurrentBitIndex;
    if ((TStack_a0.CurrentBitIndex == uVar18) &&
       (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    lVar3 = *(longlong *)&this->CachedData;
    pIVar4 = *(IPhysicsProxyBase **)(lVar3 + lVar15 * 0x28);
    uVar8 = ((uint)((ulonglong)pIVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar4 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    if (*(int *)&(param_1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x8 !=
        *(int *)&(param_1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x34) {
      puVar13 = *(undefined1 **)
                 &(param_1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x40;
      puVar16 = &(param_1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.field_0x38;
      if (puVar13 != (undefined1 *)0x0) {
        puVar16 = puVar13;
      }
      iVar10 = *(int *)(puVar16 +
                       (ulonglong)
                       (*(int *)&(param_1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap.
                                 field_0x48 - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
      if (iVar10 != -1) {
        lVar5 = *(longlong *)&(param_1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap;
        do {
          if (*(IPhysicsProxyBase **)((longlong)iVar10 * 0x20 + lVar5) == pIVar4) {
            pTVar14 = TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                              *)&(param_1->PhysicsProxyToBreakingIndices).PhysicsProxyToIndicesMap,
                             pIVar4);
            if ((pTVar14 ==
                 (TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x27b,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar13 = &pTVar14->field_0x8;
            goto LAB_14daf8e28;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar5);
        } while (iVar10 != -1);
      }
    }
    puVar13 = (undefined1 *)0x0;
LAB_14daf8e28:
    *(undefined1 **)(lVar3 + lVar15 * 0x28 + 8) = puVar13;
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  } while( true );
}

// HandleCollisionEvents @ 14daf8ea0

void __thiscall
Chaos::FGeometryCollectionCacheAdapter::HandleCollisionEvents
          (FGeometryCollectionCacheAdapter *this,FCollisionEventData *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  IPhysicsProxyBase *pIVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  FTlsAutoCleanup *pFVar12;
  undefined1 *puVar13;
  TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar14;
  longlong lVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  code *local_78;
  undefined1 *local_70;
  undefined4 local_4c;
  
  puVar11 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_70 = local_res10;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar12 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar11);
  bVar7 = IsInGameThread();
  if ((((!bVar7) && (*(int *)&pFVar12[2].field_0x4 < 1)) || (*(char *)(pFVar12 + 3) != '\0')) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3522308889972310313>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                         ,0x129,"IsInGameThreadContext()"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar19 = 0;
  puVar1 = &(this->CachedData).field_0x10;
  this->CollisionDataArray = &(param_1->CollisionData).AllCollisionsArray;
  iVar10 = *(int *)&(this->CachedData).field_0x28;
  iVar20 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar10 != 0) {
    puVar11 = *(uint **)&(this->CachedData).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar1;
    }
    uVar18 = *puVar11;
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar19;
      iVar20 = iVar20 + 0x20;
      iVar19 = iVar19 + 1;
      iVar9 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14daf8fbd;
      uVar18 = puVar11[lVar15 + 1];
    }
    uVar8 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (int)lVar15;
    iVar9 = iVar20 + -1 + local_res18;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_14daf8fbd:
  uVar18 = *(uint *)&(this->CachedData).field_0x28;
  uVar17 = uVar18 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uVar8,iVar19);
  TStack_a0.CurrentBitIndex = iVar9;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_a0._28_4_ = local_4c;
  TStack_a0.BaseBitIndex = iVar20;
  uStack_80 = CONCAT44(uStack_ac,
                       *(int *)&(this->CachedData).field_0x8 -
                       *(int *)&(this->CachedData).field_0x34);
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar10 < (int)uVar18)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->CachedData).field_0x28;
  if (uVar18 != uVar8) {
    puVar13 = *(undefined1 **)&(this->CachedData).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar19;
      uVar17 = uVar17 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14daf90c0;
      uVar18 = *(uint *)(puVar13 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res20 = (int)lVar15;
    uVar18 = local_res20 + -1 + uVar17;
    if ((int)uVar8 < (int)uVar18) {
      uVar18 = uVar8;
    }
  }
LAB_14daf90c0:
  do {
    if (*(int *)&(this->CachedData).field_0x8 - *(int *)&(this->CachedData).field_0x34 !=
        (int)uStack_80) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,Chaos::FCachedEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar15 = (longlong)TStack_a0.CurrentBitIndex;
    if ((TStack_a0.CurrentBitIndex == uVar18) &&
       (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    lVar3 = *(longlong *)&this->CachedData;
    pIVar4 = *(IPhysicsProxyBase **)(lVar3 + lVar15 * 0x28);
    uVar8 = ((uint)((ulonglong)pIVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar4 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    if (*(int *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x8 !=
        *(int *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x34) {
      puVar13 = *(undefined1 **)
                 &(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x40;
      puVar16 = &(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x38;
      if (puVar13 != (undefined1 *)0x0) {
        puVar16 = puVar13;
      }
      iVar10 = *(int *)(puVar16 +
                       (ulonglong)
                       (*(int *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.
                                 field_0x48 - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
      if (iVar10 != -1) {
        lVar5 = *(longlong *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap;
        do {
          if (*(IPhysicsProxyBase **)((longlong)iVar10 * 0x20 + lVar5) == pIVar4) {
            pTVar14 = TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                              *)&(param_1->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap,
                             pIVar4);
            if ((pTVar14 ==
                 (TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x27b,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar13 = &pTVar14->field_0x8;
            goto LAB_14daf9178;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar5);
        } while (iVar10 != -1);
      }
    }
    puVar13 = (undefined1 *)0x0;
LAB_14daf9178:
    *(undefined1 **)(lVar3 + lVar15 * 0x28 + 0x10) = puVar13;
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  } while( true );
}

// HandleTrailingEvents @ 14daf9550

void __thiscall
Chaos::FGeometryCollectionCacheAdapter::HandleTrailingEvents
          (FGeometryCollectionCacheAdapter *this,FTrailingEventData *param_1)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong lVar3;
  IPhysicsProxyBase *pIVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  FTlsAutoCleanup *pFVar12;
  undefined1 *puVar13;
  TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar14;
  longlong lVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined4 uStack_ac;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a0;
  undefined8 uStack_80;
  code *local_78;
  undefined1 *local_70;
  undefined4 local_4c;
  
  puVar11 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_70 = local_res10;
  local_78 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar12 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,puVar11);
  bVar7 = IsInGameThread();
  if ((((!bVar7) && (*(int *)&pFVar12[2].field_0x4 < 1)) || (*(char *)(pFVar12 + 3) != '\0')) &&
     (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3522308889972310313>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                         ,0x129,"IsInGameThreadContext()"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar19 = 0;
  puVar1 = &(this->CachedData).field_0x10;
  this->TrailingDataArray = &(param_1->TrailingData).AllTrailingsArray;
  iVar10 = *(int *)&(this->CachedData).field_0x28;
  iVar20 = 0;
  uVar8 = 1;
  iVar9 = 0;
  if (iVar10 != 0) {
    puVar11 = *(uint **)&(this->CachedData).field_0x20;
    if (puVar11 == (uint *)0x0) {
      puVar11 = (uint *)puVar1;
    }
    uVar18 = *puVar11;
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar19;
      iVar20 = iVar20 + 0x20;
      iVar19 = iVar19 + 1;
      iVar9 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14daf966d;
      uVar18 = puVar11[lVar15 + 1];
    }
    uVar8 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uVar8 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res18 = (int)lVar15;
    iVar9 = iVar20 + -1 + local_res18;
    if (iVar10 < iVar9) {
      iVar9 = iVar10;
    }
  }
LAB_14daf966d:
  uVar18 = *(uint *)&(this->CachedData).field_0x28;
  uVar17 = uVar18 & 0xffffffe0;
  TStack_a0._padding_ = CONCAT44(uVar8,iVar19);
  TStack_a0.CurrentBitIndex = iVar9;
  TStack_a0.UnvisitedBitMask = 0xffffffff;
  iVar19 = (int)uVar18 >> 5;
  TStack_a0._28_4_ = local_4c;
  TStack_a0.BaseBitIndex = iVar20;
  uStack_80 = CONCAT44(uStack_ac,
                       *(int *)&(this->CachedData).field_0x8 -
                       *(int *)&(this->CachedData).field_0x34);
  TStack_a0.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar18 < 0) || (iVar10 < (int)uVar18)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar8 = *(uint *)&(this->CachedData).field_0x28;
  if (uVar18 != uVar8) {
    puVar13 = *(undefined1 **)&(this->CachedData).field_0x20;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = puVar1;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)(puVar13 + (longlong)iVar19 * 4);
    while (uVar18 == 0) {
      lVar15 = (longlong)iVar19;
      uVar17 = uVar17 + 0x20;
      iVar19 = iVar19 + 1;
      uVar18 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar19) goto LAB_14daf9770;
      uVar18 = *(uint *)(puVar13 + lVar15 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    local_res20 = (int)lVar15;
    uVar18 = local_res20 + -1 + uVar17;
    if ((int)uVar8 < (int)uVar18) {
      uVar18 = uVar8;
    }
  }
LAB_14daf9770:
  do {
    if (*(int *)&(this->CachedData).field_0x8 - *(int *)&(this->CachedData).field_0x34 !=
        (int)uStack_80) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,Chaos::FCachedEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    lVar15 = (longlong)TStack_a0.CurrentBitIndex;
    if ((TStack_a0.CurrentBitIndex == uVar18) &&
       (TStack_a0.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) {
      return;
    }
    lVar3 = *(longlong *)&this->CachedData;
    pIVar4 = *(IPhysicsProxyBase **)(lVar3 + lVar15 * 0x28);
    uVar8 = ((uint)((ulonglong)pIVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIVar4 >> 4)) *
            -0x7a143595;
    uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
    if (*(int *)&(param_1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x8 !=
        *(int *)&(param_1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x34) {
      puVar13 = *(undefined1 **)
                 &(param_1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x40;
      puVar16 = &(param_1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.field_0x38;
      if (puVar13 != (undefined1 *)0x0) {
        puVar16 = puVar13;
      }
      iVar10 = *(int *)(puVar16 +
                       (ulonglong)
                       (*(int *)&(param_1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap.
                                 field_0x48 - 1U & (uVar8 >> 0x10 ^ uVar8)) * 4);
      if (iVar10 != -1) {
        lVar5 = *(longlong *)&(param_1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap;
        do {
          if (*(IPhysicsProxyBase **)((longlong)iVar10 * 0x20 + lVar5) == pIVar4) {
            pTVar14 = TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                      ::Find((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                              *)&(param_1->PhysicsProxyToTrailingIndices).PhysicsProxyToIndicesMap,
                             pIVar4);
            if ((pTVar14 ==
                 (TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_> *)0x0) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Pair != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                   ,0x27b,L""), bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            puVar13 = &pTVar14->field_0x8;
            goto LAB_14daf9828;
          }
          iVar10 = *(int *)((longlong)iVar10 * 0x20 + 0x18 + lVar5);
        } while (iVar10 != -1);
      }
    }
    puVar13 = (undefined1 *)0x0;
LAB_14daf9828:
    *(undefined1 **)(lVar3 + lVar15 * 0x28 + 0x18) = puVar13;
    TStack_a0.UnvisitedBitMask = TStack_a0.UnvisitedBitMask & ~TStack_a0._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a0);
  } while( true );
}

// InitializeForPlayback @ 14daf9a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
Chaos::FGeometryCollectionCacheAdapter::InitializeForPlayback
          (FGeometryCollectionCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2,
          float param_3)

{
  float *pfVar1;
  UGeometryCollection *pUVar2;
  FGeometryCollection *this_00;
  longlong lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  bool bVar35;
  undefined1 uVar36;
  int iVar37;
  uint uVar38;
  uint uVar39;
  uint *puVar40;
  FTlsAutoCleanup *pFVar41;
  UGeometryCollectionComponent *this_01;
  longlong lVar42;
  uint uVar43;
  ulonglong uVar44;
  ulonglong uVar45;
  longlong lVar46;
  ulonglong uVar47;
  undefined1 auStackY_368 [32];
  EObjectStateType local_338;
  undefined1 local_337 [7];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_330;
  int local_320;
  longlong local_318;
  TReferenceControllerBase<1> *local_310;
  UChaosCache *local_308;
  FGeometryCollectionCacheAdapter *local_300;
  FCacheEvaluationContext local_2f8;
  code *local_2d0;
  undefined1 *local_2c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_2c0;
  undefined1 local_2a8 [16];
  undefined8 local_298;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  void *local_260;
  undefined4 local_258;
  double local_248 [2];
  double local_238 [2];
  double local_228 [2];
  double local_218 [2];
  double local_208 [2];
  double local_1f8 [2];
  FCacheEvaluationResult local_1e8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  local_308 = param_2;
  local_300 = this;
  puVar40 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_2c8 = local_337;
  local_2d0 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar41 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2d0,puVar40);
  bVar35 = IsInGameThread();
  if ((((!bVar35) && (*(int *)&pFVar41[2].field_0x4 < 1)) || (*(char *)(pFVar41 + 3) != '\0')) &&
     (bVar35 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3522308889972310313>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                          ,0x129,"IsInGameThreadContext()"), bVar35)) {
    pcVar4 = (code *)swi(3);
    uVar36 = (*pcVar4)();
    return (bool)uVar36;
  }
  this_01 = CastChecked<UGeometryCollectionComponent,UPrimitiveComponent>(param_1);
  if ((this_01 == (UGeometryCollectionComponent *)0x0) ||
     (pUVar2 = (this_01->RestCollection).field0_0x0.DebugPtr, pUVar2 == (UGeometryCollection *)0x0))
  {
    bVar35 = false;
  }
  else {
    local_2f8.TickRecord = (FPlaybackTickRecord *)local_2a8;
    local_278 = ___xmm_00000000ffffffff0000008000000000;
    uStack_270 = _UNK_150631d98;
    local_248[0] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[0];
    local_248[1] = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64[1];
    local_238[0] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[0];
    local_238[1] = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64[1];
    local_228[0] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[0];
    local_228[1] = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64[1];
    uVar44 = 0;
    local_218[0] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[0];
    local_218[1] = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64[1];
    local_208[0] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[0];
    local_208[1] = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64[1];
    local_330.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_330.ArrayNum = 0;
    local_330.ArrayMax = 0;
    local_2a8._0_4_ = 0;
    local_2a8._8_8_ = 0;
    local_298 = 0;
    local_280 = 0;
    local_260 = (void *)0x0;
    local_258 = 0;
    local_1f8[0] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[0];
    local_1f8[1] = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64[1];
    local_2f8.EvaluationIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_2f8.EvaluationIndices.ArrayNum = 0;
    local_2f8.EvaluationIndices.ArrayMax = 0;
    local_2f8.bEvaluateNamedTransforms = false;
    local_2f8.bEvaluateTransform = true;
    local_2f8.bEvaluateCurves = false;
    local_2f8.bEvaluateEvents = false;
    local_2a8._4_4_ = param_3;
    UChaosCache::Evaluate
              (param_2,&local_1e8,&local_2f8,
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0);
    this_00 = (pUVar2->GeometryCollection).Object;
    local_320 = local_1e8.Transform.ArrayNum;
    local_310 = (pUVar2->GeometryCollection).SharedReferenceCount.ReferenceController;
    if (local_310 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_310->SharedReferenceCount = (atomic<int>)((int)local_310->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((this_00 == (FGeometryCollection *)0x0) &&
       (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar35)) {
      pcVar4 = (code *)swi(3);
      uVar36 = (*pcVar4)();
      return (bool)uVar36;
    }
    iVar37 = FManagedArrayCollection::NumElements
                       ((FManagedArrayCollection *)this_00,FTransformCollection::TransformGroup);
    TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_330,iVar37,Default);
    local_318 = (longlong)iVar37;
    if (0 < iVar37) {
      lVar42 = 0;
      lVar46 = 0;
      uVar47 = uVar44;
      do {
        if ((this_00 == (FGeometryCollection *)0x0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar35)) {
          pcVar4 = (code *)swi(3);
          uVar36 = (*pcVar4)();
          return (bool)uVar36;
        }
        uVar43 = (uint)uVar44;
        uVar38 = 0;
        if ((int)uVar43 < (int)this_00->_padding_) {
          uVar38 = ~uVar43 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar4 = (code *)swi(3);
          uVar36 = (*pcVar4)();
          return (bool)uVar36;
        }
        lVar3 = this_00->_padding_;
        pfVar1 = (float *)(lVar46 + 0x20 + lVar3);
        fVar11 = *pfVar1;
        fVar12 = pfVar1[1];
        fVar13 = pfVar1[2];
        fVar14 = pfVar1[3];
        pfVar1 = (float *)(lVar46 + 0x10 + lVar3);
        fVar15 = *pfVar1;
        fVar16 = pfVar1[1];
        fVar17 = pfVar1[2];
        fVar18 = pfVar1[3];
        pfVar1 = (float *)(lVar46 + lVar3);
        fVar19 = *pfVar1;
        fVar20 = pfVar1[1];
        fVar21 = pfVar1[2];
        fVar22 = pfVar1[3];
        uVar38 = 0;
        if ((int)uVar43 < local_330.ArrayNum) {
          uVar38 = ~uVar43 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar4 = (code *)swi(3);
          uVar36 = (*pcVar4)();
          return (bool)uVar36;
        }
        uVar44 = (ulonglong)(uVar43 + 1);
        uVar47 = uVar47 + 1;
        lVar46 = lVar46 + 0x30;
        auVar9._8_4_ = SUB84((double)fVar20,0);
        auVar9._0_8_ = (double)fVar19;
        auVar9._12_4_ = (int)((ulonglong)(double)fVar20 >> 0x20);
        *(undefined1 (*) [16])(local_330.AllocatorInstance.Data + lVar42) = auVar9;
        auVar10._8_4_ = SUB84((double)fVar22,0);
        auVar10._0_8_ = (double)fVar21;
        auVar10._12_4_ = (int)((ulonglong)(double)fVar22 >> 0x20);
        *(undefined1 (*) [16])(local_330.AllocatorInstance.Data + lVar42 + 0x10) = auVar10;
        auVar7._8_4_ = SUB84((double)fVar16,0);
        auVar7._0_8_ = (double)fVar15;
        auVar7._12_4_ = (int)((ulonglong)(double)fVar16 >> 0x20);
        *(undefined1 (*) [16])(local_330.AllocatorInstance.Data + lVar42 + 0x20) = auVar7;
        auVar8._8_4_ = SUB84((double)fVar18,0);
        auVar8._0_8_ = (double)fVar17;
        auVar8._12_4_ = (int)((ulonglong)(double)fVar18 >> 0x20);
        *(undefined1 (*) [16])(local_330.AllocatorInstance.Data + lVar42 + 0x30) = auVar8;
        auVar5._8_4_ = SUB84((double)fVar12,0);
        auVar5._0_8_ = (double)fVar11;
        auVar5._12_4_ = (int)((ulonglong)(double)fVar12 >> 0x20);
        *(undefined1 (*) [16])(local_330.AllocatorInstance.Data + lVar42 + 0x40) = auVar5;
        auVar6._8_4_ = SUB84((double)fVar14,0);
        auVar6._0_8_ = (double)fVar13;
        auVar6._12_4_ = (int)((ulonglong)(double)fVar14 >> 0x20);
        *(undefined1 (*) [16])(local_330.AllocatorInstance.Data + lVar42 + 0x50) = auVar6;
        lVar42 = lVar42 + 0x60;
      } while ((longlong)uVar47 < local_318);
    }
    uVar45 = 0;
    lVar42 = (longlong)local_320;
    uVar44 = uVar45;
    uVar47 = uVar45;
    if (0 < lVar42) {
      do {
        uVar43 = (uint)uVar44;
        uVar38 = 0;
        if ((int)uVar43 < local_1e8.ParticleIndices.ArrayNum) {
          uVar38 = ~uVar43 >> 0x1f;
        }
        if ((uVar38 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar4 = (code *)swi(3);
          uVar36 = (*pcVar4)();
          return (bool)uVar36;
        }
        uVar38 = *(uint *)(local_1e8.ParticleIndices.AllocatorInstance.Data + uVar47 * 4);
        uVar39 = 0;
        if ((int)uVar43 < local_1e8.Transform.ArrayNum) {
          uVar39 = ~uVar43 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar4 = (code *)swi(3);
          uVar36 = (*pcVar4)();
          return (bool)uVar36;
        }
        uVar23 = *(undefined8 *)(local_1e8.Transform.AllocatorInstance.Data + uVar45);
        uVar24 = *(undefined8 *)(local_1e8.Transform.AllocatorInstance.Data + uVar45 + 8);
        uVar25 = *(undefined8 *)(local_1e8.Transform.AllocatorInstance.Data + uVar45 + 0x10);
        uVar26 = *(undefined8 *)(local_1e8.Transform.AllocatorInstance.Data + uVar45 + 0x10 + 8);
        uVar27 = *(undefined8 *)(local_1e8.Transform.AllocatorInstance.Data + uVar45 + 0x20);
        uVar28 = *(undefined8 *)(local_1e8.Transform.AllocatorInstance.Data + uVar45 + 0x20 + 8);
        uVar29 = *(undefined8 *)(local_1e8.Transform.AllocatorInstance.Data + uVar45 + 0x30);
        uVar30 = *(undefined8 *)(local_1e8.Transform.AllocatorInstance.Data + uVar45 + 0x30 + 8);
        uVar31 = *(undefined8 *)(local_1e8.Transform.AllocatorInstance.Data + uVar45 + 0x40);
        uVar32 = *(undefined8 *)(local_1e8.Transform.AllocatorInstance.Data + uVar45 + 0x40 + 8);
        uVar33 = *(undefined8 *)(local_1e8.Transform.AllocatorInstance.Data + uVar45 + 0x50);
        uVar34 = *(undefined8 *)(local_1e8.Transform.AllocatorInstance.Data + uVar45 + 0x50 + 8);
        uVar39 = 0;
        if ((int)uVar38 < local_330.ArrayNum) {
          uVar39 = ~uVar38 >> 0x1f;
        }
        if ((uVar39 == 0) &&
           (bVar35 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar35)) {
          pcVar4 = (code *)swi(3);
          uVar36 = (*pcVar4)();
          return (bool)uVar36;
        }
        lVar46 = (longlong)(int)uVar38 * 0x60;
        uVar47 = uVar47 + 1;
        uVar45 = uVar45 + 0x60;
        *(undefined8 *)(local_330.AllocatorInstance.Data + lVar46) = uVar23;
        *(undefined8 *)(local_330.AllocatorInstance.Data + lVar46 + 8) = uVar24;
        *(undefined8 *)(local_330.AllocatorInstance.Data + lVar46 + 0x10) = uVar25;
        *(undefined8 *)(local_330.AllocatorInstance.Data + lVar46 + 0x10 + 8) = uVar26;
        *(undefined8 *)(local_330.AllocatorInstance.Data + lVar46 + 0x20) = uVar27;
        *(undefined8 *)(local_330.AllocatorInstance.Data + lVar46 + 0x20 + 8) = uVar28;
        *(undefined8 *)(local_330.AllocatorInstance.Data + lVar46 + 0x30) = uVar29;
        *(undefined8 *)(local_330.AllocatorInstance.Data + lVar46 + 0x30 + 8) = uVar30;
        *(undefined8 *)(local_330.AllocatorInstance.Data + lVar46 + 0x40) = uVar31;
        *(undefined8 *)(local_330.AllocatorInstance.Data + lVar46 + 0x40 + 8) = uVar32;
        *(undefined8 *)(local_330.AllocatorInstance.Data + lVar46 + 0x50) = uVar33;
        *(undefined8 *)(local_330.AllocatorInstance.Data + lVar46 + 0x50 + 8) = uVar34;
        uVar44 = (ulonglong)(uVar43 + 1);
      } while ((longlong)uVar47 < lVar42);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_310);
    FCacheEvaluationResult::~FCacheEvaluationResult(&local_1e8);
    if (local_2f8.EvaluationIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2f8.EvaluationIndices.AllocatorInstance.Data);
    }
    local_258 = 0;
    if (local_260 != (void *)0x0) {
      FMemory::Free(local_260);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_2a8 + 8));
    UGeometryCollectionComponent::ForceBrokenForCustomRenderer(this_01,false);
    UGeometryCollectionComponent::SetInitialTransforms(this_01,&local_330);
    GatherAllBreaksUpToTime(local_300,&local_2c0,local_308,param_3);
    UGeometryCollectionComponent::SetInitialClusterBreaks(this_01,&local_2c0);
    local_338 = Kinematic;
    UGeometryCollectionComponent::SetDynamicState(this_01,&local_338);
    (**(code **)(*(longlong *)this_01 + 0x6f0))(this_01,1);
    if (local_2c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2c0.AllocatorInstance.Data);
    }
    if (local_330.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_330.AllocatorInstance.Data);
    }
    bVar35 = true;
  }
  return bVar35;
}

// InitializeForRecord @ 14dafa1e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
Chaos::FGeometryCollectionCacheAdapter::InitializeForRecord
          (FGeometryCollectionCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2)

{
  int *piVar1;
  FGeometryCollectionPhysicsProxy *pFVar2;
  FPhysicsSolverBase *this_00;
  FBaseGraphTask *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  uint *puVar8;
  FTlsAutoCleanup *pFVar9;
  UGeometryCollectionComponent *this_01;
  FTaskGraphInterface *pFVar10;
  FSimCallbackCommandObject *pFVar11;
  longlong lVar12;
  uint uVar13;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar14;
  undefined ***pppuVar15;
  undefined1 *puVar16;
  FSimCallbackCommandObject *pFVar17;
  FSimCallbackCommandObject *pFVar18;
  double in_XMM1_Qa;
  undefined1 auStackY_128 [32];
  undefined1 local_e8;
  undefined1 local_e7 [3];
  int local_e4;
  TRefCountPtr<FBaseGraphTask> local_e0;
  undefined8 *local_d8;
  FGeometryCollectionPhysicsProxy *local_d0;
  FGeometryCollectionPhysicsProxy **local_c8;
  code *local_c0;
  undefined1 *local_b8;
  FSimCallbackCommandObject *local_a8;
  undefined **local_98;
  FPhysicsSolverBase *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> local_78;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_128;
  pFVar17 = (FSimCallbackCommandObject *)0x0;
  local_e4 = 0;
  puVar8 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_b8 = &local_e8;
  local_c0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar9 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_c0,puVar8);
  bVar5 = IsInGameThread();
  if ((((!bVar5) && (*(int *)&pFVar9[2].field_0x4 < 1)) || (*(char *)(pFVar9 + 3) != '\0')) &&
     (bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<3522308889972310313>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                         ,0x129,"IsInGameThreadContext()"), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  this_01 = CastChecked<UGeometryCollectionComponent,UPrimitiveComponent>(param_1);
  if ((this_01 != (UGeometryCollectionComponent *)0x0) &&
     (pFVar2 = this_01->PhysicsProxy, pFVar2 != (FGeometryCollectionPhysicsProxy *)0x0)) {
    UGeometryCollectionComponent::ForceBrokenForCustomRenderer(this_01,false);
    this_00 = *(FPhysicsSolverBase **)&pFVar2->field_0x8;
    if (this_00 != (FPhysicsSolverBase *)0x0) {
      FPhysicsSolverBase::AdvanceAndDispatch_External(this_00,in_XMM1_Qa);
      if (local_d8 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_d8 + 6);
        iVar7 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar7 == 1) && (local_d8 != (undefined8 *)0x0)) {
          (**(code **)*local_d8)(local_d8,1);
        }
      }
      pFVar3 = (this_00->PendingTasks).Reference;
      if ((pFVar3 != (FBaseGraphTask *)0x0) && (pFVar3->field_0xd0 == '\0')) {
        pFVar10 = FTaskGraphInterface::Get();
        pcVar4 = *(code **)((longlong)*pFVar10 + 0x60);
        local_e0.Reference = (this_00->PendingTasks).Reference;
        if (local_e0.Reference != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)&(local_e0.Reference)->field_0x30 = *(int *)&(local_e0.Reference)->field_0x30 + 1;
          UNLOCK();
        }
        local_78.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
        local_50 = 1;
        UE::Core::Private::
        ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                  (8,8,1,0,&local_78,1,&local_4c);
        FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
        if (local_78.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar14 = local_78.SecondaryData;
        }
        ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
                  ((void *)FVar14,&local_e0,1);
        (*pcVar4)(pFVar10,&local_78,0xff);
        FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
        if (local_78.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FVar14 = local_78.SecondaryData;
        }
        DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                  ((TRefCountPtr<FBaseGraphTask> *)FVar14,local_50);
        if (local_78.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
          FMemory::Free((void *)local_78.SecondaryData);
        }
        if (local_e0.Reference != (FBaseGraphTask *)0x0) {
          LOCK();
          puVar16 = &(local_e0.Reference)->field_0x30;
          iVar7 = *(int *)puVar16;
          *(int *)puVar16 = *(int *)puVar16 + -1;
          UNLOCK();
          if (iVar7 == 1) {
            (*(code *)**(undefined8 **)local_e0.Reference)(local_e0.Reference,1);
          }
        }
      }
      if (((CVars::bEnableAsyncInitBody == false) && (bVar5 = IsInGameThread(), !bVar5)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Chaos::CVars::bEnableAsyncInitBody || IsInGameThread()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\Framework\\PhysicsSolverBase.h"
                             ,0x1b3,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar11 = ::operator_new(0xc0);
      pFVar18 = pFVar17;
      if (pFVar11 != (FSimCallbackCommandObject *)0x0) {
        local_80 = (undefined ***)0x0;
        local_98 = &UE::Core::Private::Function::
                    TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::InitializeForRecord'::`2'::<lambda_1>,1,0>
                    ::_vftable_;
        pFStack_90 = this_00;
        *(undefined ***)pFVar11 = &___7FSimCallbackCommandObject_Chaos__6B_;
        *(undefined2 *)&pFVar11->field_0x8 = 0;
        *(undefined8 *)&pFVar11->field_0x10 = 0;
        *(undefined8 *)&pFVar11->field_0x18 = 0;
        *(undefined8 *)&pFVar11->field_0x20 = 0;
        *(undefined8 *)&pFVar11->field_0x28 = 0;
        *(undefined2 *)&pFVar11->field_0x40 = 1;
        *(code **)&pFVar11->Func =
             UE::Core::Private::Function::
             TFunctionRefCaller<`Chaos::FGeometryCollectionCacheAdapter::InitializeForRecord'::__l2::<lambda_1>,void>
             ::Call;
        *(undefined8 *)&(pFVar11->Func).field_0x28 = 0;
        *(undefined ***)&(pFVar11->Func).field_0x10 =
             &UE::Core::Private::Function::
              TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::InitializeForRecord'::`2'::<lambda_1>,1,0>
              ::_vftable_;
        *(FPhysicsSolverBase **)&(pFVar11->Func).field_0x18 = this_00;
        *(undefined8 *)&(pFVar11->Func).field_0x20 = local_88;
        local_a8 = (FSimCallbackCommandObject *)
                   UE::Core::Private::Function::
                   TFunctionRefCaller<`Chaos::FGeometryCollectionCacheAdapter::InitializeForRecord'::__l2::<lambda_1>,void>
                   ::Call;
        if (*(longlong *)&pFVar11->Func != 0) {
          local_a8 = pFVar17;
        }
        *(undefined8 *)&pFVar11->Func2 = 0;
        *(undefined8 *)&(pFVar11->Func2).field_0x28 = 0;
        pFVar11->bFuncHasTimeParameters = false;
        pFVar11->ExecuteOnStep = -1;
        if (*(longlong *)&pFVar11->Func == 0) {
          `Chaos::FSimCallbackCommandObject::FSimCallbackCommandObject'::__l2::<lambda_1>::
          operator()(local_e7);
        }
        pFVar17 = pFVar11;
        pFVar18 = (FSimCallbackCommandObject *)&DAT_00000001;
      }
      if ((pFVar18 != (FSimCallbackCommandObject *)0x0) &&
         (local_a8 != (FSimCallbackCommandObject *)0x0)) {
        pppuVar15 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar15 = local_80;
        }
        (*(code *)(*pppuVar15)[2])();
      }
      FChaosMarshallingManager::RegisterSimCommand_External(&this_00->MarshallingManager,pFVar17);
      RegisterEventHandler(this,pFVar2);
      if (*(int *)&(this->CachedData).field_0x8 == *(int *)&(this->CachedData).field_0x34) {
        this->BreakingDataArray = (TArray<Chaos::FBreakingData,TSizedDefaultAllocator<32>_> *)0x0;
        this->CollisionDataArray = (TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_> *)0x0;
        this->TrailingDataArray = (TArray<Chaos::FTrailingData,TSizedDefaultAllocator<32>_> *)0x0;
      }
      uVar13 = ((uint)((ulonglong)pFVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pFVar2 >> 4)) *
               -0x7a143595;
      uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
      uVar13 = uVar13 >> 0x10 ^ uVar13;
      if (*(int *)&(this->CachedData).field_0x8 != *(int *)&(this->CachedData).field_0x34) {
        puVar16 = *(undefined1 **)&(this->CachedData).field_0x40;
        if (puVar16 == (undefined1 *)0x0) {
          puVar16 = &(this->CachedData).field_0x38;
        }
        iVar7 = *(int *)(puVar16 +
                        (ulonglong)(*(int *)&(this->CachedData).field_0x48 - 1U & uVar13) * 4);
        if (iVar7 != -1) {
          do {
            lVar12 = *(longlong *)&this->CachedData + (longlong)iVar7 * 0x28;
            if (*(FGeometryCollectionPhysicsProxy **)
                 (*(longlong *)&this->CachedData + (longlong)iVar7 * 0x28) == pFVar2) {
              if (lVar12 != 0) goto LAB_14dafa61f;
              break;
            }
            iVar7 = *(int *)(lVar12 + 0x20);
          } while (iVar7 != -1);
        }
      }
      local_c8 = &local_d0;
      local_d0 = pFVar2;
      TSet<TTuple<IPhysicsProxyBase_*,Chaos::FCachedEventData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,Chaos::FCachedEventData,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<IPhysicsProxyBase_*_&&>_>
                ((TSet<TTuple<IPhysicsProxyBase_*,Chaos::FCachedEventData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,Chaos::FCachedEventData,0>,FDefaultSetAllocator>
                  *)&this->CachedData,(uint)&local_e4,
                 (TKeyInitializer<IPhysicsProxyBase_*_&&> *)(ulonglong)uVar13,(bool *)&local_c8);
      lVar12 = *(longlong *)&this->CachedData + (longlong)local_e4 * 0x28;
LAB_14dafa61f:
      *(undefined8 *)(lVar12 + 8) = 0;
      *(undefined8 *)(lVar12 + 0x10) = 0;
      *(undefined8 *)(lVar12 + 0x18) = 0;
      return true;
    }
  }
  return false;
}

// Playback_PreSolve @ 14dafb590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve
          (FGeometryCollectionCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2,
          double param_3,FPlaybackTickRecord *param_4,
          TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>
          *param_5)

{
  undefined1 *puVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  FUniqueIdx FVar5;
  FGeometryCollectionPhysicsProxy *this_00;
  longlong lVar6;
  char *pcVar7;
  FSolverCollisionEventFilter *this_01;
  TGeometryParticleHandleImp<double,3,1> *this_02;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  double dVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  TBitArray<FDefaultBitArrayAllocator> *pTVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  uint uVar33;
  undefined7 uVar34;
  uint uVar35;
  uint uVar36;
  FName FVar37;
  bool bVar38;
  EObjectStateType EVar39;
  int iVar40;
  uint uVar41;
  uint uVar42;
  int iVar43;
  uint *puVar44;
  FTlsAutoCleanup *pFVar45;
  UGeometryCollectionComponent *pUVar46;
  FGeometryCollection *this_03;
  FName *pFVar47;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar48;
  TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *pTVar49;
  TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *pTVar50;
  FEnableStateEvent *pFVar51;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *pTVar52;
  ClusterId *pCVar53;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *pTVar54;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar55;
  UScriptStruct *pUVar56;
  TAABB<double,3> *pTVar57;
  UPackage *pUVar58;
  IPhysicsProxyBase *pIVar59;
  IPhysicsProxyBase *pIVar60;
  bool *pbVar61;
  FUniqueIdx *pFVar62;
  FPendingSpatialData *pFVar63;
  TGeometryParticle<double,3> **ppTVar64;
  FSpatialAccelerationIdx *pFVar65;
  FPendingSpatialData *pFVar66;
  uint uVar67;
  uint uVar68;
  longlong lVar69;
  undefined ***pppuVar70;
  longlong *plVar71;
  longlong *plVar72;
  longlong lVar73;
  TGeometryParticleHandleImp<double,3,1> *pTVar74;
  FScriptContainerElement *pFVar75;
  FHandle *this_04;
  ForAnyElementType FVar76;
  FScriptContainerElement *pFVar77;
  TGeometryParticleHandleImp<double,3,1> *pTVar78;
  uint uVar79;
  FHandle *pFVar80;
  FSolverBreakingEventFilter *this_05;
  TPBDRigidParticleHandleImp<double,3,1> *pTVar81;
  TGeometryParticleHandleImp<double,3,1> *this_06;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  undefined1 auVar106 [16];
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  undefined1 auVar109 [16];
  undefined1 auVar110 [16];
  undefined1 auVar111 [16];
  undefined1 auVar112 [16];
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  undefined1 auVar123 [16];
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar132 [16];
  undefined1 auVar133 [16];
  undefined1 auVar134 [16];
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar142 [16];
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined4 uVar149;
  undefined4 uVar150;
  undefined1 auVar151 [16];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  undefined1 auVar155 [16];
  undefined1 auVar156 [16];
  undefined1 auVar157 [16];
  undefined1 auVar158 [16];
  undefined1 auVar159 [16];
  undefined1 auVar160 [16];
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  undefined1 auVar163 [16];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [16];
  undefined1 auVar171 [16];
  undefined1 auVar172 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar179 [16];
  undefined1 auVar180 [16];
  undefined1 auVar181 [16];
  undefined1 auVar182 [16];
  undefined1 auVar183 [16];
  undefined1 auVar184 [16];
  float fVar185;
  float fVar186;
  float fVar187;
  float fVar188;
  double dVar189;
  double dVar190;
  undefined1 auVar191 [16];
  undefined1 auVar192 [16];
  double dVar193;
  double dVar194;
  undefined1 auStackY_e98 [32];
  undefined1 local_e38;
  undefined1 local_e37;
  undefined1 local_e36;
  undefined1 local_e35;
  undefined1 local_e34 [4];
  TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *local_e30;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> *local_e28;
  undefined1 local_e20 [8];
  FSolverBreakingEventFilter *local_e18;
  TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *local_e10;
  TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *local_e08;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *local_e00;
  TGeometryParticleHandleImp<double,3,1> *local_df8;
  TGeometryParticle<double,3> *local_df0;
  TGeometryParticleHandleImp<double,3,1> *pTStack_de8;
  int local_de0;
  FCollisionFilterData FStack_ddc;
  FCollisionFilterData FStack_dcc;
  uint local_dbc;
  TGeometryParticle<double,3> *local_db8;
  TGeometryParticleHandleImp<double,3,1> *pTStack_db0;
  int local_da8;
  FCollisionFilterData FStack_da4;
  FCollisionFilterData FStack_d94;
  uint local_d84;
  TSharedPtr<FGeometryCollection_const_,1> local_d80;
  undefined8 local_d70;
  TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_> local_d68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_d58;
  undefined1 *local_d38;
  longlong lStack_d30;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_d28;
  undefined8 uStack_d20;
  longlong lStack_d18;
  int local_d10;
  undefined4 uStack_d0c;
  TPBDRigidParticleHandleImp<double,3,1> *local_d08;
  FCacheEvaluationContext local_d00;
  undefined1 local_cd8 [12];
  uint uStack_ccc;
  TBitArray<FDefaultBitArrayAllocator> *local_cc8;
  undefined8 uStack_cc0;
  longlong local_cb8;
  undefined8 uStack_cb0;
  code *local_ca8;
  undefined **local_c98;
  undefined8 local_c90;
  float fStack_c88;
  undefined4 uStack_c84;
  undefined ***local_c80;
  code *local_c78;
  longlong local_c68 [3];
  longlong *local_c50;
  undefined8 local_c48;
  float fStack_c40;
  undefined4 uStack_c3c;
  FGeometryCollectionPhysicsProxy *local_c38;
  code *local_c28;
  undefined **local_c18;
  undefined8 local_c10;
  float fStack_c08;
  undefined4 uStack_c04;
  undefined ***local_c00;
  undefined1 local_bf8 [32];
  double local_bd8;
  double local_bc8;
  double dStack_bc0;
  double local_bb8;
  double dStack_bb0;
  undefined1 local_ba8 [16];
  double local_b98;
  TVector<double,3> TStack_b90;
  double local_b78;
  undefined1 auStack_b70 [16];
  undefined8 uStack_b60;
  TVector<double,3> local_b58;
  int local_b40;
  bool local_b3c;
  undefined1 *local_b38;
  float fStack_b30;
  undefined4 uStack_b2c;
  undefined1 *local_b28;
  float fStack_b20;
  undefined4 uStack_b1c;
  code *local_b18;
  undefined1 *local_b10;
  undefined1 local_b08 [32];
  double local_ae8;
  double dStack_ae0;
  double local_ad8;
  double dStack_ad0;
  undefined1 local_ac8 [16];
  double local_ab8;
  TVector<double,3> TStack_ab0;
  double local_a98;
  FGeometryCollectionPhysicsProxy *local_a90;
  undefined1 local_a88 [16];
  undefined8 local_a78;
  TVector<double,3> TStack_a70;
  int local_a58;
  undefined1 local_a48 [24];
  longlong lStack_a30;
  longlong lStack_a28;
  int local_a20;
  undefined4 uStack_a1c;
  undefined1 local_a18 [24];
  undefined1 auStack_a00 [16];
  double dStack_9f0;
  undefined1 local_9e8 [16];
  double local_9d8;
  undefined1 auStack_9d0 [16];
  double dStack_9c0;
  undefined1 local_9b8 [16];
  double local_9a8;
  undefined1 auStack_9a0 [16];
  double dStack_990;
  undefined1 local_988 [16];
  double local_978;
  TVector<double,3> TStack_970;
  TVector<double,3> local_958;
  double dStack_940;
  double local_938;
  double dStack_930;
  undefined8 local_928;
  bool local_920;
  IPhysicsProxyBase *local_918;
  IPhysicsProxyBase *pIStack_910;
  undefined8 local_908;
  double local_900;
  FName local_8f8;
  double local_8f0;
  double dStack_8e8;
  TBitArray<FDefaultBitArrayAllocator> *local_8e0;
  TVector<double,3> local_8d8;
  double local_8c0;
  double dStack_8b8;
  double local_8b0;
  double local_8a8;
  double dStack_8a0;
  TBitArray<FDefaultBitArrayAllocator> *local_898;
  TVector<double,3> local_890;
  undefined1 local_878 [32];
  longlong local_858;
  undefined8 uStack_850;
  undefined1 local_848 [16];
  undefined1 local_838 [16];
  TQuat<double> local_828;
  undefined1 local_808 [16];
  undefined1 local_7f8 [16];
  TQuat<double> local_7e8;
  undefined1 local_7c8 [16];
  double local_7b8;
  undefined1 local_7b0 [16];
  double local_7a0;
  undefined1 local_798 [16];
  double local_788;
  undefined1 local_780 [16];
  double local_770;
  undefined1 local_768 [16];
  double local_758;
  undefined1 local_750 [16];
  double local_740;
  undefined1 local_738 [16];
  undefined8 local_728;
  TVector<double,3> local_720;
  code *local_708 [2];
  undefined1 local_6f8 [24];
  undefined8 local_6e0;
  undefined1 local_6d8 [16];
  undefined8 local_6c8;
  TVector<double,3> local_6c0;
  code *local_6a8 [2];
  undefined1 local_698 [24];
  undefined8 local_680;
  code *local_678 [2];
  undefined1 local_668 [24];
  undefined8 local_650;
  undefined1 local_648 [16];
  double local_638;
  undefined1 local_630 [16];
  double local_620;
  undefined1 local_618 [16];
  double local_608;
  undefined1 local_600 [16];
  double local_5f0;
  undefined1 local_5e8 [16];
  double local_5d8;
  TTransform<double> local_5c8;
  TAABB<double,3> local_548;
  TAABB<double,3> local_518;
  undefined1 local_4e8 [32];
  undefined8 local_4c8;
  int local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  int local_4b4;
  ForElementType<FSetElementId> local_4a8;
  int local_4a0;
  TTransform<double> local_498;
  TTransform<double> local_438;
  TTransform<double> local_3d8;
  TTransform<double> local_378;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  double local_2f8;
  double dStack_2f0;
  TBitArray<FDefaultBitArrayAllocator> *local_2e8;
  double dStack_2e0;
  double local_2d8;
  double dStack_2d0;
  undefined1 local_2c8 [16];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double dStack_2a0;
  double local_298;
  double dStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268 [2];
  TSet<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,DefaultKeyFuncs<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,0>,FDefaultSetAllocator>
  local_258;
  FCacheEvaluationResult local_208;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_e98;
  local_e28 = param_5;
  puVar44 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_b10 = local_e20;
  local_b18 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar45 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_b18,puVar44);
  if ((*(int *)(pFVar45 + 2) < 1) &&
     (bVar38 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3522308889972310308>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                          ,0x124,"IsInPhysicsThreadContext()"), bVar38)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pUVar46 = CastChecked<UGeometryCollectionComponent,UPrimitiveComponent>(param_1);
  this_00 = pUVar46->PhysicsProxy;
  if (this_00 == (FGeometryCollectionPhysicsProxy *)0x0) {
    return;
  }
  local_498.Rotation.XY.m128d_f64[0] = (this_00->Parameters).WorldTransform.Rotation.XY.m128d_f64[0]
  ;
  local_498.Rotation.XY.m128d_f64[1] = (this_00->Parameters).WorldTransform.Rotation.XY.m128d_f64[1]
  ;
  local_498.Rotation.ZW.m128d_f64[0] = (this_00->Parameters).WorldTransform.Rotation.ZW.m128d_f64[0]
  ;
  local_498.Rotation.ZW.m128d_f64[1] = (this_00->Parameters).WorldTransform.Rotation.ZW.m128d_f64[1]
  ;
  local_498.Translation.XY.m128d_f64[0] =
       (this_00->Parameters).WorldTransform.Translation.XY.m128d_f64[0];
  local_498.Translation.XY.m128d_f64[1] =
       (this_00->Parameters).WorldTransform.Translation.XY.m128d_f64[1];
  local_498.Translation.ZW.m128d_f64[0] =
       (this_00->Parameters).WorldTransform.Translation.ZW.m128d_f64[0];
  local_498.Translation.ZW.m128d_f64[1] =
       (this_00->Parameters).WorldTransform.Translation.ZW.m128d_f64[1];
  local_498.Scale3D.XY.m128d_f64[0] = (this_00->Parameters).WorldTransform.Scale3D.XY.m128d_f64[0];
  local_498.Scale3D.XY.m128d_f64[1] = (this_00->Parameters).WorldTransform.Scale3D.XY.m128d_f64[1];
  local_498.Scale3D.ZW.m128d_f64 = *&(this_00->Parameters).WorldTransform.Scale3D.ZW.m128d_f64;
  local_d80.Object = (this_00->Parameters).RestCollectionShared.Object;
  local_d80.SharedReferenceCount.ReferenceController =
       (this_00->Parameters).RestCollectionShared.SharedReferenceCount.ReferenceController;
  if (local_d80.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d80.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d80.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  lVar6 = *(longlong *)&this_00->field_0x8;
  local_c90 = (undefined1 *)CONCAT44(local_c90._4_4_,(undefined4)local_c90);
  local_c10 = (undefined1 *)CONCAT44(local_c10._4_4_,(undefined4)local_c10);
  if ((local_d80.Object != (FGeometryCollection *)0x0) &&
     (local_c90 = (undefined1 *)CONCAT44(local_c90._4_4_,(undefined4)local_c90),
     local_c10 = (undefined1 *)CONCAT44(local_c10._4_4_,(undefined4)local_c10), lVar6 != 0)) {
    this_03 = TSharedPtr<FGeometryCollection_const_,1>::operator->(&local_d80);
    FVar37 = FTransformCollection::TransformGroup;
    pFVar47 = ::FName::FName(&local_8f8,"MassToLocal");
    pTVar48 = FManagedArrayCollection::GetAttribute<UE::Math::TTransform<double>_>
                        ((FManagedArrayCollection *)this_03,*pFVar47,FVar37);
    local_d00.TickRecord = param_4;
    local_d00.EvaluationIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d00.EvaluationIndices.ArrayNum = 0;
    local_d00.EvaluationIndices.ArrayMax = 0;
    local_d00.bEvaluateNamedTransforms = false;
    local_d00.bEvaluateTransform = true;
    local_d00.bEvaluateCurves = false;
    local_d00.bEvaluateEvents = true;
    UChaosCache::Evaluate
              (param_2,&local_208,&local_d00,
               (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)
               &pTVar48->field_0x10);
    pTVar49 = TMapBase<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>_>
                      *)&local_208.Events,FEnableStateEvent::EventName);
    pTVar50 = TMapBase<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>_>
              ::Find((TMapBase<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>_>
                      *)&local_208.Events,FBreakingEvent::EventName);
    local_e10 = pTVar50;
    local_e30 = TMapBase<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>_>
                        *)&local_208.Events,FCollisionEvent::EventName);
    local_e08 = TMapBase<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>_>
                ::Find((TMapBase<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>,0>_>
                        *)&local_208.Events,FTrailingEvent::EventName);
    if (pTVar49 != (TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *)0x0) {
      this_04 = (FHandle *)(pTVar49->AllocatorInstance).Data;
      local_4e8._0_8_ = 0;
      local_4e8._8_8_ = 0;
      local_4c8 = 0;
      local_4c0 = 0;
      local_4bc = 0x80;
      local_4b8 = 0xffffffff;
      local_4b4 = 0;
      local_4a8 = (ForElementType<FSetElementId>)0x0;
      local_4a0 = 0;
      iVar43 = pTVar49->ArrayNum;
      pFVar80 = this_04 + iVar43;
      while( true ) {
        if (pTVar49->ArrayNum != iVar43) {
          local_e38 = 0;
          `TCheckedPointerIterator<FCacheEventTrack::FHandle_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_e38);
        }
        param_5 = local_e28;
        if (this_04 == pFVar80) break;
        pFVar51 = FCacheEventTrack::FHandle::GetConst<FEnableStateEvent>(this_04);
        if (((pFVar51 == (FEnableStateEvent *)0x0) ||
            (pTVar52 = FGeometryCollectionPhysicsProxy::GetParticle_Internal(this_00,pFVar51->Index)
            , pTVar52 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0)) ||
           (EVar39 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                               ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar52),
           EVar39 != Kinematic)) {
LAB_14dafb9d3:
          this_04 = this_04 + 1;
        }
        else {
          pCVar53 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ClusterIds(pTVar52);
          pTVar81 = pCVar53->Id;
          if (pTVar81 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
            TPBDRigidParticleHandleImp<double,3,1>::SetDisabled
                      ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar52,pFVar51->bEnable == false);
            goto LAB_14dafb9d3;
          }
          local_d08 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          if (2 < (byte)pTVar81->field_0xc) {
            local_d08 = pTVar81;
          }
          if (local_d08 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) goto LAB_14dafb9d3;
          uVar67 = ((uint)((ulonglong)local_d08 >> 0x14) & 0xffff ^
                   (uint)((ulonglong)local_d08 >> 4)) * -0x7a143595;
          uVar67 = (uVar67 >> 0xd ^ uVar67) * -0x3d4d51cb;
          pTVar54 = TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                    ::
                    FindOrAddImpl<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*_const_&>
                              ((TMapBase<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>,0>_>
                                *)local_4e8,uVar67 >> 0x10 ^ uVar67,
                               (TPBDRigidClusteredParticleHandleImp<double,3,1> **)&local_d08);
          pFVar77 = (pTVar54->AllocatorInstance).Data;
          local_e00 = pTVar52;
          if (((pFVar77 <= (FScriptContainerElement *)&local_e00) &&
              ((FScriptContainerElement *)&local_e00 < pFVar77 + (longlong)pTVar54->ArrayMax * 8))
             && (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar38)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar40 = pTVar54->ArrayNum;
          if (iVar40 == pTVar54->ArrayMax) {
            iVar40 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar54->AllocatorInstance,&pTVar54->ArrayMax);
          }
          pTVar54->ArrayNum = iVar40 + 1;
          this_04 = this_04 + 1;
          *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)
           ((pTVar54->AllocatorInstance).Data + (longlong)iVar40 * 8) = local_e00;
        }
      }
      local_d58.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_4e8 + 0x10);
      local_d58._padding_._0_4_ = 0;
      local_d58._padding_._4_4_ = 1;
      local_d58.UnvisitedBitMask = 0xffffffff;
      local_d58.CurrentBitIndex = 0;
      local_d58.BaseBitIndex = 0;
      if (local_4c0 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_d58);
      }
      unique0x10005795 =
           (TBitArray<FDefaultBitArrayAllocator> *)
           CONCAT44(local_d58._padding_._4_4_,(undefined4)local_d58._padding_);
      local_cd8._0_8_ = local_4e8;
      uStack_cc0 = CONCAT44(local_d58.CurrentBitIndex,local_d58.UnvisitedBitMask);
      local_cb8 = CONCAT44(local_d58._28_4_,local_d58.BaseBitIndex);
      local_a20 = local_4e8._8_4_ - local_4b4;
      local_a48._16_8_ = local_d58.Array;
      uStack_cb0._4_4_ = uStack_a1c;
      uStack_cb0._0_4_ = local_a20;
      local_cc8 = local_d58.Array;
      local_a48._0_8_ = local_cd8._0_8_;
      local_a48._8_8_ = unique0x10005795;
      lStack_a30 = uStack_cc0;
      lStack_a28 = local_cb8;
      pTVar55 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_a48,
                           (TBitArray<FDefaultBitArrayAllocator> *)(local_4e8 + 0x10),local_4c0);
      local_d38 = local_4e8;
      lStack_d30 = pTVar55->_padding_;
      pTStack_d28 = pTVar55->Array;
      uStack_d20._0_4_ = pTVar55->UnvisitedBitMask;
      uStack_d20._4_4_ = pTVar55->CurrentBitIndex;
      local_878._16_8_ = pTVar55->Array;
      local_878._24_4_ = pTVar55->UnvisitedBitMask;
      local_878._28_4_ = pTVar55->CurrentBitIndex;
      lStack_d18 = *(longlong *)&pTVar55->BaseBitIndex;
      local_d10 = local_4e8._8_4_ - local_4b4;
      uStack_850._4_4_ = uStack_d0c;
      uStack_850._0_4_ = local_d10;
      local_878._0_8_ = local_d38;
      local_878._8_8_ = lStack_d30;
      local_858 = lStack_d18;
      bVar38 = TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=
                         ((TRangedForIterator *)local_cd8,(TRangedForIterator *)local_878);
      if (bVar38) {
LAB_14dafbb10:
        lVar69 = (longlong)uStack_cc0._4_4_ * 0x20;
        lVar73 = *(longlong *)local_cd8._0_8_;
        local_d70 = *(undefined8 *)(lVar69 + lVar73);
        local_d68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>::
        CopyToEmpty<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int>
                  (&local_d68,*(TPBDRigidParticleHandleImp<double,3,1> ***)(lVar69 + 8 + lVar73),
                   *(int *)(lVar69 + 0x10 + lVar73),0);
        local_e18 = (FSolverBreakingEventFilter *)CONCAT44(local_d68.ArrayMax,local_d68.ArrayNum);
        if (local_d68.ArrayNum != 0) {
          pTVar81 = (TPBDRigidParticleHandleImp<double,3,1> *)0x0;
          pFVar77 = local_d68.AllocatorInstance.Data + (longlong)local_d68.ArrayNum * 8;
          FVar76.Data = local_d68.AllocatorInstance.Data;
          do {
            if (local_d68.ArrayNum != (int)local_e18) {
              local_e37 = 0;
              `TCheckedPointerIterator<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,int,0>::
              operator!='::__l2::<lambda_1>::operator()(&local_e37);
            }
            if (FVar76.Data == pFVar77) goto LAB_14dafbc6a;
            pTVar52 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
            if (2 < (byte)(*(TPBDRigidClusteredParticleHandleImp<double,3,1> **)FVar76.Data)->
                          field_0xc) {
              pTVar52 = *(TPBDRigidClusteredParticleHandleImp<double,3,1> **)FVar76.Data;
            }
            if (pTVar52 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
              uVar67 = *(uint *)&pTVar52->field_0x8;
              lVar73 = *(longlong *)pTVar52;
              uVar41 = 0;
              if ((int)uVar67 < *(int *)(lVar73 + 0x2e0)) {
                uVar41 = ~uVar67 >> 0x1f;
              }
              if ((uVar41 == 0) &&
                 (bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar38)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              if ((*(char *)(*(longlong *)(lVar73 + 0x2d8) + 0xd + (longlong)(int)uVar67 * 0x10) !=
                   '\0') &&
                 (pCVar53 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ClusterIds(pTVar52),
                 pCVar53->Id != (TPBDRigidParticleHandleImp<double,3,1> *)0x0)) {
                if ((pTVar81 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) &&
                   (pCVar53 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ClusterIds(pTVar52),
                   pCVar53->Id != pTVar81)) goto LAB_14dafbc44;
                pCVar53 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ClusterIds(pTVar52);
                pTVar81 = pCVar53->Id;
              }
            }
            FVar76.Data = FVar76.Data + 8;
          } while( true );
        }
        goto LAB_14dafbcc0;
      }
LAB_14dafbd0d:
      local_4a0 = 0;
      if (local_4a8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_4a8);
      }
      TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_4e8);
      pTVar50 = local_e10;
    }
    if ((((this_00->Parameters).bGenerateBreakingData) ||
        ((this_00->Parameters).bGenerateGlobalBreakingData)) &&
       (pTVar50 != (TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *)0x0)) {
      pFVar77 = (pTVar50->AllocatorInstance).Data;
      this_05 = *(FSolverBreakingEventFilter **)(*(longlong *)(lVar6 + 0xbe0) + 8);
      iVar43 = pTVar50->ArrayNum;
      pFVar75 = pFVar77 + (longlong)iVar43 * 0x10;
      local_e18 = this_05;
      while( true ) {
        if (pTVar50->ArrayNum != iVar43) {
          local_e36 = 0;
          `TCheckedPointerIterator<FCacheEventTrack::FHandle_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_e36);
        }
        param_5 = local_e28;
        if (pFVar77 == pFVar75) break;
        uVar67 = *(uint *)(pFVar77 + 0xc);
        if (((uVar67 != 0xffffffff) && (lVar73 = *(longlong *)pFVar77, lVar73 != 0)) &&
           (*(int *)(lVar73 + 0x30) == *(int *)(pFVar77 + 8))) {
          if ((((int)uVar67 < 0) || (*(int *)(lVar73 + 0x28) <= (int)uVar67)) ||
             (*(longlong *)(lVar73 + 8) == 0)) {
            lVar73 = 0;
          }
          else {
            pUVar56 = FBreakingEvent::StaticStruct();
            if (*(UScriptStruct **)(lVar73 + 8) == (UScriptStruct *)0x0) {
              bVar38 = pUVar56 == (UScriptStruct *)0x0;
            }
            else {
              bVar38 = *(UScriptStruct **)(lVar73 + 8) == pUVar56;
            }
            if (!bVar38) {
              bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("T::StaticStruct() == Struct",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Public\\Chaos\\CacheEvents.h"
                                  ,0x6e,L"");
              if (bVar38) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            uVar41 = 0;
            if ((int)uVar67 < *(int *)(lVar73 + 0x28)) {
              uVar41 = ~uVar67 >> 0x1f;
            }
            if (uVar41 == 0) {
              bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar38) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            lVar73 = *(longlong *)(*(longlong *)(lVar73 + 0x20) + (longlong)(int)uVar67 * 8);
          }
          if (lVar73 != 0) {
            pTVar52 = FGeometryCollectionPhysicsProxy::GetParticle_Internal
                                (this_00,*(int *)(lVar73 + 8));
            if (pTVar52 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
              EVar39 = TPBDRigidParticleHandleImp<double,3,1>::ObjectState
                                 ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar52);
              dVar27 = local_498.Scale3D.XY.m128d_f64[1];
              dVar26 = local_498.Scale3D.XY.m128d_f64[0];
              dVar190 = local_498.Rotation.ZW.m128d_f64[1];
              dVar24 = local_498.Rotation.ZW.m128d_f64[0];
              dVar16 = local_498.Rotation.XY.m128d_f64[1];
              dVar15 = local_498.Rotation.XY.m128d_f64[0];
              if (EVar39 == Kinematic) {
                local_838._8_8_ = local_498.Rotation.ZW.m128d_f64[1];
                local_838._0_8_ = local_498.Rotation.ZW.m128d_f64[0];
                local_848._8_8_ = local_498.Rotation.XY.m128d_f64[1];
                local_848._0_8_ = local_498.Rotation.XY.m128d_f64[0];
                local_bb8 = UE::Math::TQuat<double>::Identity.Z;
                dStack_bb0 = UE::Math::TQuat<double>::Identity.W;
                local_ba8 = ZEXT816(0);
                TStack_b90._8_8_ = 0;
                TStack_b90._16_8_ = 0;
                uStack_b60 = 0;
                local_bc8 = UE::Math::TQuat<double>::Identity.X;
                dStack_bc0 = UE::Math::TQuat<double>::Identity.Y;
                local_b98 = 0.0;
                TStack_b90._0_8_ = 0;
                local_b58._0_8_ = 0;
                local_b58._8_8_ = 0;
                local_b58._16_8_ = 0;
                local_bf8._0_4_ = 1;
                local_b78 = 0.0;
                auStack_b70 = ZEXT816(0);
                local_b40 = -1;
                local_b3c = false;
                dVar193 = *(double *)(lVar73 + 0x20) * local_498.Scale3D.ZW.m128d_f64[0];
                dVar25 = local_498.Scale3D.ZW.m128d_f64[1] * 0.0;
                dVar14 = local_498.Scale3D.XY.m128d_f64[0] * *(double *)(lVar73 + 0x10);
                dVar189 = local_498.Scale3D.XY.m128d_f64[1] * *(double *)(lVar73 + 0x18);
                uVar149 = (undefined4)((ulonglong)dVar189 >> 0x20);
                auVar191 = blendpd(local_848,local_838,2);
                auVar151._8_4_ = SUB84(dVar189,0);
                auVar151._0_8_ = dVar14;
                auVar151._12_4_ = uVar149;
                auVar82._8_4_ = SUB84(dVar189,0);
                auVar82._0_8_ = dVar14;
                auVar82._12_4_ = uVar149;
                auVar152._0_8_ =
                     auVar151._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                     local_498.Rotation.XY.m128d_f64[1] * dVar14;
                auVar152._8_8_ =
                     dVar193 * local_498.Rotation.XY.m128d_f64[1] -
                     local_498.Rotation.ZW.m128d_f64[0] * dVar189;
                auVar192._8_4_ = SUB84(dVar25,0);
                auVar192._0_8_ = dVar193;
                auVar192._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
                auVar83 = blendpd(auVar82,auVar192,2);
                dVar194 = auVar191._0_8_;
                dVar11 = auVar191._8_8_;
                auVar191._0_8_ =
                     auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - dVar194 * dVar193;
                auVar191._8_8_ =
                     auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - dVar11 * dVar25;
                auVar83 = blendpd(auVar152,auVar191,2);
                dVar25 = auVar152._8_8_ + auVar152._8_8_;
                dVar10 = auVar191._0_8_ + auVar191._0_8_;
                uVar149 = (undefined4)((ulonglong)dVar10 >> 0x20);
                auVar153._0_8_ = auVar83._0_8_ + auVar83._0_8_;
                auVar153._8_8_ = auVar83._8_8_ + auVar83._8_8_;
                auVar127._8_4_ = SUB84(dVar10,0);
                auVar127._0_8_ = dVar25;
                auVar127._12_4_ = uVar149;
                auVar84._8_4_ = SUB84(dVar10,0);
                auVar84._0_8_ = dVar25;
                auVar84._12_4_ = uVar149;
                auVar83 = blendpd(auVar84,auVar153,2);
                auVar128._0_8_ =
                     auVar127._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                     dVar25 * local_498.Rotation.XY.m128d_f64[1];
                auVar128._8_8_ =
                     auVar153._0_8_ * local_498.Rotation.XY.m128d_f64[1] -
                     dVar10 * local_498.Rotation.ZW.m128d_f64[0];
                auVar85._0_8_ =
                     auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - auVar153._0_8_ * dVar194;
                auVar85._8_8_ =
                     auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - auVar153._8_8_ * dVar11;
                auVar83 = blendpd(auVar128,auVar85,2);
                dVar25 = dVar25 * local_498.Rotation.ZW.m128d_f64[1] + dVar14 + auVar128._8_8_ +
                         local_498.Translation.XY.m128d_f64[0];
                dVar10 = dVar10 * local_498.Rotation.ZW.m128d_f64[1] + dVar189 + auVar85._0_8_ +
                         local_498.Translation.XY.m128d_f64[1];
                uVar149 = SUB84(dVar10,0);
                uVar150 = (undefined4)((ulonglong)dVar10 >> 0x20);
                local_bd8 = auVar153._0_8_ * local_498.Rotation.ZW.m128d_f64[1] + dVar193 +
                            auVar83._0_8_ + local_498.Translation.ZW.m128d_f64[0];
                local_798._8_4_ = uVar149;
                local_798._0_8_ = dVar25;
                local_798._12_4_ = uVar150;
                local_bf8._24_4_ = uVar149;
                local_bf8._16_8_ = dVar25;
                local_bf8._28_4_ = uVar150;
                local_bf8._8_8_ = this_00;
                local_788 = local_bd8;
                UE::Math::TQuat<double>::operator*
                          ((TQuat<double> *)local_848,&local_828,(TQuat<double> *)(lVar73 + 0x30));
                local_bc8 = local_828.X;
                dStack_bc0 = local_828.Y;
                local_bb8 = local_828.Z;
                dStack_bb0 = local_828.W;
                dVar14 = *(double *)(lVar73 + 0x60) * local_498.Scale3D.ZW.m128d_f64[0];
                dVar25 = local_498.Scale3D.ZW.m128d_f64[1] * 0.0;
                dVar26 = dVar26 * *(double *)(lVar73 + 0x50);
                dVar27 = dVar27 * *(double *)(lVar73 + 0x58);
                uVar149 = (undefined4)((ulonglong)dVar27 >> 0x20);
                auVar154._8_4_ = SUB84(dVar27,0);
                auVar154._0_8_ = dVar26;
                auVar154._12_4_ = uVar149;
                auVar86._8_4_ = SUB84(dVar27,0);
                auVar86._0_8_ = dVar26;
                auVar86._12_4_ = uVar149;
                auVar83._8_4_ = SUB84(dVar25,0);
                auVar83._0_8_ = dVar14;
                auVar83._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
                auVar83 = blendpd(auVar86,auVar83,2);
                auVar155._0_8_ = auVar154._8_8_ * dVar15 - dVar26 * dVar16;
                auVar155._8_8_ = dVar14 * dVar16 - dVar27 * dVar24;
                auVar87._0_8_ = auVar83._0_8_ * dVar24 - dVar14 * dVar194;
                auVar87._8_8_ = auVar83._8_8_ * dVar190 - dVar25 * dVar11;
                auVar83 = blendpd(auVar155,auVar87,2);
                dVar25 = auVar155._8_8_ + auVar155._8_8_;
                dVar10 = auVar87._0_8_ + auVar87._0_8_;
                uVar149 = (undefined4)((ulonglong)dVar10 >> 0x20);
                auVar156._0_8_ = auVar83._0_8_ + auVar83._0_8_;
                auVar156._8_8_ = auVar83._8_8_ + auVar83._8_8_;
                auVar129._8_4_ = SUB84(dVar10,0);
                auVar129._0_8_ = dVar25;
                auVar129._12_4_ = uVar149;
                auVar88._8_4_ = SUB84(dVar10,0);
                auVar88._0_8_ = dVar25;
                auVar88._12_4_ = uVar149;
                auVar83 = blendpd(auVar88,auVar156,2);
                auVar130._0_8_ = auVar129._8_8_ * dVar15 - dVar25 * dVar16;
                auVar130._8_8_ = auVar156._0_8_ * dVar16 - dVar10 * dVar24;
                auVar89._0_8_ = auVar83._0_8_ * dVar24 - auVar156._0_8_ * dVar194;
                auVar89._8_8_ = auVar83._8_8_ * dVar190 - auVar156._8_8_ * dVar11;
                dVar26 = dVar25 * dVar190 + dVar26 + auVar130._8_8_;
                dVar27 = dVar10 * dVar190 + dVar27 + auVar89._0_8_;
                uVar149 = SUB84(dVar27,0);
                uVar150 = (undefined4)((ulonglong)dVar27 >> 0x20);
                auVar83 = blendpd(auVar130,auVar89,2);
                local_768._8_4_ = uVar149;
                local_768._0_8_ = dVar26;
                local_768._12_4_ = uVar150;
                local_ba8._8_4_ = uVar149;
                local_ba8._0_8_ = dVar26;
                local_ba8._12_4_ = uVar150;
                local_b98 = auVar156._0_8_ * dVar190 + dVar14 + auVar83._0_8_;
                TStack_b90._0_8_ = *(undefined8 *)(lVar73 + 0x68);
                TStack_b90._8_8_ = *(undefined8 *)(lVar73 + 0x70);
                TStack_b90._16_8_ = *(undefined8 *)(lVar73 + 0x78);
                local_b78 = (double)*(float *)(lVar73 + 0x80);
                auStack_b70 = *(undefined1 (*) [16])(lVar73 + 0x88);
                uStack_b60 = *(undefined8 *)(lVar73 + 0x98);
                local_b58._0_8_ = *(undefined8 *)(lVar73 + 0xa0);
                local_b58._8_8_ = *(undefined8 *)(lVar73 + 0xa8);
                local_b58._16_8_ = *(undefined8 *)(lVar73 + 0xb0);
                local_758 = local_b98;
                local_738 = auStack_b70;
                local_728 = uStack_b60;
                local_720._0_8_ = local_b58._0_8_;
                local_720._8_8_ = local_b58._8_8_;
                local_720._16_8_ = local_b58._16_8_;
                pTVar57 = TAABB<double,3>::TransformedAABB
                                    ((TAABB<double,3> *)auStack_b70,&local_518,&local_498);
                auStack_b70 = *(undefined1 (*) [16])&pTVar57->MMin;
                uStack_b60 = *(undefined8 *)&(pTVar57->MMin).field_0x10;
                local_b58._0_8_ = *(undefined8 *)&pTVar57->MMax;
                local_b58._8_8_ = *(undefined8 *)&(pTVar57->MMax).field_0x8;
                local_b58._16_8_ = *(undefined8 *)&(pTVar57->MMax).field_0x10;
                uVar67 = (this_00->Parameters).bGenerateBreakingData;
                local_bf8._0_4_ = uVar67 | 2;
                if (!(this_00->Parameters).bGenerateGlobalBreakingData) {
                  local_bf8._0_4_ = uVar67;
                }
                if ((this_05->Settings).FilterEnabled != false) {
                  bVar38 = FSolverBreakingEventFilter::Pass(this_05,(FBreakingData *)local_bf8);
                  if (!bVar38) goto LAB_14dafc439;
                }
                local_b28 = local_bf8;
                pcVar7 = *(char **)(lVar6 + 0xbd8);
                local_c18 = &UE::Core::Private::Function::
                             TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::`76'::<lambda_1>,0,0>
                             ::_vftable_;
                fStack_c08 = (float)*(double *)(lVar6 + 0x280);
                local_c00 = (undefined ***)0x0;
                local_c28 = UE::Core::Private::Function::
                            TFunctionRefCaller<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l76::<lambda_1>,void,Chaos::FBreakingEventData_&>
                            ::Call;
                uStack_c04 = uStack_b1c;
                fStack_b20 = fStack_c08;
                local_c10 = local_b28;
                if (*pcVar7 == '\x02') {
                  AcquireSRWLockShared((PSRWLOCK)(pcVar7 + 0x18));
                }
                AcquireSRWLockShared((PSRWLOCK)(pcVar7 + 0x20));
                if (*(int *)(pcVar7 + 0x10) < 2) {
                  bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar38) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                plVar72 = *(longlong **)(*(longlong *)(pcVar7 + 8) + 8);
                if (plVar72 != (longlong *)0x0) {
                  local_6e0 = 0;
                  pcVar8 = *(code **)(*plVar72 + 0x40);
                  local_708[0] = local_c28;
                  if (local_c28 != (code *)0x0) {
                    pppuVar70 = &local_c18;
                    if (local_c00 != (undefined ***)0x0) {
                      pppuVar70 = local_c00;
                    }
                    (*(code *)**pppuVar70)(pppuVar70,local_6f8);
                  }
                  (*pcVar8)(plVar72,local_708);
                }
                ReleaseSRWLockShared((PSRWLOCK)(pcVar7 + 0x20));
                if (*pcVar7 == '\x02') {
                  ReleaseSRWLockShared((PSRWLOCK)(pcVar7 + 0x18));
                }
                this_05 = local_e18;
                if (local_c28 != (code *)0x0) {
                  pppuVar70 = &local_c18;
                  if (local_c00 != (undefined ***)0x0) {
                    pppuVar70 = local_c00;
                  }
                  (*(code *)(*pppuVar70)[2])();
                  this_05 = local_e18;
                }
              }
            }
          }
        }
LAB_14dafc439:
        pFVar77 = pFVar77 + 0x10;
        pTVar50 = local_e10;
      }
    }
    if (((this_00->Parameters).bGenerateTrailingData) &&
       (local_e08 != (TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *)0x0)) {
      iVar43 = local_e08->ArrayNum;
      pFVar77 = (local_e08->AllocatorInstance).Data;
      pFVar75 = pFVar77 + (longlong)iVar43 * 0x10;
      local_e10 = *(TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> **)
                   (*(longlong *)(lVar6 + 0xbe0) + 0x10);
      while( true ) {
        if (local_e08->ArrayNum != iVar43) {
          local_e35 = 0;
          `TCheckedPointerIterator<FCacheEventTrack::FHandle_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_e35);
        }
        param_5 = local_e28;
        if (pFVar77 == pFVar75) break;
        uVar67 = *(uint *)(pFVar77 + 0xc);
        if (((uVar67 != 0xffffffff) && (lVar73 = *(longlong *)pFVar77, lVar73 != 0)) &&
           (*(int *)(lVar73 + 0x30) == *(int *)(pFVar77 + 8))) {
          if ((((int)uVar67 < 0) || (*(int *)(lVar73 + 0x28) <= (int)uVar67)) ||
             (*(longlong *)(lVar73 + 8) == 0)) {
            lVar73 = 0;
          }
          else {
            pUVar56 = FTrailingEvent::StaticStruct();
            if (*(UScriptStruct **)(lVar73 + 8) == (UScriptStruct *)0x0) {
              bVar38 = pUVar56 == (UScriptStruct *)0x0;
            }
            else {
              bVar38 = *(UScriptStruct **)(lVar73 + 8) == pUVar56;
            }
            if (!bVar38) {
              bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("T::StaticStruct() == Struct",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Public\\Chaos\\CacheEvents.h"
                                  ,0x6e,L"");
              if (bVar38) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            uVar41 = 0;
            if ((int)uVar67 < *(int *)(lVar73 + 0x28)) {
              uVar41 = ~uVar67 >> 0x1f;
            }
            if (uVar41 == 0) {
              bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar38) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            lVar73 = *(longlong *)(*(longlong *)(lVar73 + 0x20) + (longlong)(int)uVar67 * 8);
          }
          if (lVar73 != 0) {
            pTVar52 = FGeometryCollectionPhysicsProxy::GetParticle_Internal
                                (this_00,*(int *)(lVar73 + 8));
            if (pTVar52 != (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) {
              uVar67 = *(uint *)&pTVar52->field_0x8;
              lVar69 = *(longlong *)pTVar52;
              uVar41 = 0;
              if ((int)uVar67 < *(int *)(lVar69 + 0x2e0)) {
                uVar41 = ~uVar67 >> 0x1f;
              }
              if (uVar41 == 0) {
                bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar38) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              dVar27 = local_498.Scale3D.XY.m128d_f64[1];
              dVar26 = local_498.Scale3D.XY.m128d_f64[0];
              dVar190 = local_498.Rotation.ZW.m128d_f64[1];
              dVar24 = local_498.Rotation.ZW.m128d_f64[0];
              dVar16 = local_498.Rotation.XY.m128d_f64[1];
              dVar15 = local_498.Rotation.XY.m128d_f64[0];
              if (*(char *)(*(longlong *)(lVar69 + 0x2d8) + 0xb + (longlong)(int)uVar67 * 0x10) ==
                  '\x02') {
                local_7f8._8_8_ = local_498.Rotation.ZW.m128d_f64[1];
                local_7f8._0_8_ = local_498.Rotation.ZW.m128d_f64[0];
                local_808._8_8_ = local_498.Rotation.XY.m128d_f64[1];
                local_808._0_8_ = local_498.Rotation.XY.m128d_f64[0];
                local_ad8 = UE::Math::TQuat<double>::Identity.Z;
                dStack_ad0 = UE::Math::TQuat<double>::Identity.W;
                local_ae8 = UE::Math::TQuat<double>::Identity.X;
                dStack_ae0 = UE::Math::TQuat<double>::Identity.Y;
                local_ac8 = ZEXT816(0);
                TStack_ab0._8_8_ = 0;
                TStack_ab0._16_8_ = 0;
                local_a88 = ZEXT816(0);
                TStack_a70._8_8_ = 0;
                TStack_a70._16_8_ = 0;
                local_ab8 = 0.0;
                TStack_ab0._0_8_ = 0;
                local_a78 = 0;
                TStack_a70._0_8_ = 0;
                local_a98 = 0.0;
                local_a58 = -1;
                dVar14 = *(double *)(lVar73 + 0x20) * local_498.Scale3D.ZW.m128d_f64[0];
                dVar194 = local_498.Scale3D.ZW.m128d_f64[1] * 0.0;
                dVar25 = local_498.Scale3D.XY.m128d_f64[0] * *(double *)(lVar73 + 0x10);
                dVar10 = local_498.Scale3D.XY.m128d_f64[1] * *(double *)(lVar73 + 0x18);
                uVar149 = (undefined4)((ulonglong)dVar10 >> 0x20);
                auVar192 = blendpd(local_808,local_7f8,2);
                auVar157._8_4_ = SUB84(dVar10,0);
                auVar157._0_8_ = dVar25;
                auVar157._12_4_ = uVar149;
                auVar90._8_4_ = SUB84(dVar10,0);
                auVar90._0_8_ = dVar25;
                auVar90._12_4_ = uVar149;
                auVar158._0_8_ =
                     auVar157._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                     dVar25 * local_498.Rotation.XY.m128d_f64[1];
                auVar158._8_8_ =
                     dVar14 * local_498.Rotation.XY.m128d_f64[1] -
                     dVar10 * local_498.Rotation.ZW.m128d_f64[0];
                auVar17._8_4_ = SUB84(dVar194,0);
                auVar17._0_8_ = dVar14;
                auVar17._12_4_ = (int)((ulonglong)dVar194 >> 0x20);
                auVar83 = blendpd(auVar90,auVar17,2);
                dVar189 = auVar192._0_8_;
                dVar193 = auVar192._8_8_;
                auVar91._0_8_ =
                     auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - dVar14 * dVar189;
                auVar91._8_8_ =
                     auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - dVar194 * dVar193;
                auVar83 = blendpd(auVar158,auVar91,2);
                dVar194 = auVar158._8_8_ + auVar158._8_8_;
                dVar11 = auVar91._0_8_ + auVar91._0_8_;
                uVar149 = (undefined4)((ulonglong)dVar11 >> 0x20);
                auVar159._0_8_ = auVar83._0_8_ + auVar83._0_8_;
                auVar159._8_8_ = auVar83._8_8_ + auVar83._8_8_;
                auVar131._8_4_ = SUB84(dVar11,0);
                auVar131._0_8_ = dVar194;
                auVar131._12_4_ = uVar149;
                auVar92._8_4_ = SUB84(dVar11,0);
                auVar92._0_8_ = dVar194;
                auVar92._12_4_ = uVar149;
                auVar83 = blendpd(auVar92,auVar159,2);
                auVar132._0_8_ =
                     auVar131._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                     dVar194 * local_498.Rotation.XY.m128d_f64[1];
                auVar132._8_8_ =
                     auVar159._0_8_ * local_498.Rotation.XY.m128d_f64[1] -
                     dVar11 * local_498.Rotation.ZW.m128d_f64[0];
                auVar93._0_8_ =
                     auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - auVar159._0_8_ * dVar189;
                auVar93._8_8_ =
                     auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - auVar159._8_8_ * dVar193;
                auVar83 = blendpd(auVar132,auVar93,2);
                dVar194 = dVar194 * local_498.Rotation.ZW.m128d_f64[1] + dVar25 + auVar132._8_8_ +
                          local_498.Translation.XY.m128d_f64[0];
                dVar11 = dVar11 * local_498.Rotation.ZW.m128d_f64[1] + dVar10 + auVar93._0_8_ +
                         local_498.Translation.XY.m128d_f64[1];
                uVar149 = SUB84(dVar11,0);
                uVar150 = (undefined4)((ulonglong)dVar11 >> 0x20);
                local_b08._16_8_ =
                     auVar159._0_8_ * local_498.Rotation.ZW.m128d_f64[1] + dVar14 + auVar83._0_8_ +
                     local_498.Translation.ZW.m128d_f64[0];
                local_750._8_4_ = uVar149;
                local_750._0_8_ = dVar194;
                local_750._12_4_ = uVar150;
                local_b08._8_4_ = uVar149;
                local_b08._0_8_ = dVar194;
                local_b08._12_4_ = uVar150;
                local_a90 = this_00;
                local_740 = (double)local_b08._16_8_;
                UE::Math::TQuat<double>::operator*
                          ((TQuat<double> *)local_808,&local_7e8,(TQuat<double> *)(lVar73 + 0x30));
                local_ae8 = local_7e8.X;
                dStack_ae0 = local_7e8.Y;
                local_ad8 = local_7e8.Z;
                dStack_ad0 = local_7e8.W;
                dVar25 = *(double *)(lVar73 + 0x60) * local_498.Scale3D.ZW.m128d_f64[0];
                dVar194 = local_498.Scale3D.ZW.m128d_f64[1] * 0.0;
                dVar26 = dVar26 * *(double *)(lVar73 + 0x50);
                dVar27 = dVar27 * *(double *)(lVar73 + 0x58);
                uVar149 = (undefined4)((ulonglong)dVar27 >> 0x20);
                auVar160._8_4_ = SUB84(dVar27,0);
                auVar160._0_8_ = dVar26;
                auVar160._12_4_ = uVar149;
                auVar94._8_4_ = SUB84(dVar27,0);
                auVar94._0_8_ = dVar26;
                auVar94._12_4_ = uVar149;
                auVar12._8_4_ = SUB84(dVar194,0);
                auVar12._0_8_ = dVar25;
                auVar12._12_4_ = (int)((ulonglong)dVar194 >> 0x20);
                auVar83 = blendpd(auVar94,auVar12,2);
                auVar161._0_8_ = auVar160._8_8_ * dVar15 - dVar26 * dVar16;
                auVar161._8_8_ = dVar25 * dVar16 - dVar27 * dVar24;
                auVar95._0_8_ = auVar83._0_8_ * dVar24 - dVar25 * dVar189;
                auVar95._8_8_ = auVar83._8_8_ * dVar190 - dVar194 * dVar193;
                auVar83 = blendpd(auVar161,auVar95,2);
                dVar194 = auVar161._8_8_ + auVar161._8_8_;
                dVar11 = auVar95._0_8_ + auVar95._0_8_;
                uVar149 = (undefined4)((ulonglong)dVar11 >> 0x20);
                auVar162._0_8_ = auVar83._0_8_ + auVar83._0_8_;
                auVar162._8_8_ = auVar83._8_8_ + auVar83._8_8_;
                auVar133._8_4_ = SUB84(dVar11,0);
                auVar133._0_8_ = dVar194;
                auVar133._12_4_ = uVar149;
                auVar96._8_4_ = SUB84(dVar11,0);
                auVar96._0_8_ = dVar194;
                auVar96._12_4_ = uVar149;
                auVar83 = blendpd(auVar96,auVar162,2);
                auVar134._0_8_ = auVar133._8_8_ * dVar15 - dVar194 * dVar16;
                auVar134._8_8_ = auVar162._0_8_ * dVar16 - dVar11 * dVar24;
                auVar97._0_8_ = auVar83._0_8_ * dVar24 - auVar162._0_8_ * dVar189;
                auVar97._8_8_ = auVar83._8_8_ * dVar190 - auVar162._8_8_ * dVar193;
                dVar26 = dVar194 * dVar190 + dVar26 + auVar134._8_8_;
                dVar27 = dVar11 * dVar190 + dVar27 + auVar97._0_8_;
                uVar149 = SUB84(dVar27,0);
                uVar150 = (undefined4)((ulonglong)dVar27 >> 0x20);
                auVar83 = blendpd(auVar134,auVar97,2);
                local_648._8_4_ = uVar149;
                local_648._0_8_ = dVar26;
                local_648._12_4_ = uVar150;
                local_ac8._8_4_ = uVar149;
                local_ac8._0_8_ = dVar26;
                local_ac8._12_4_ = uVar150;
                local_ab8 = auVar162._0_8_ * dVar190 + dVar25 + auVar83._0_8_;
                TStack_ab0._0_8_ = *(undefined8 *)(lVar73 + 0x68);
                TStack_ab0._8_8_ = *(undefined8 *)(lVar73 + 0x70);
                TStack_ab0._16_8_ = *(undefined8 *)(lVar73 + 0x78);
                local_a88 = *(undefined1 (*) [16])(lVar73 + 0x80);
                local_a78 = *(undefined8 *)(lVar73 + 0x90);
                TStack_a70._0_8_ = *(undefined8 *)(lVar73 + 0x98);
                TStack_a70._8_8_ = *(undefined8 *)(lVar73 + 0xa0);
                TStack_a70._16_8_ = *(undefined8 *)(lVar73 + 0xa8);
                local_6d8 = local_a88;
                local_6c8 = local_a78;
                local_6c0._0_8_ = TStack_a70._0_8_;
                local_6c0._8_8_ = TStack_a70._8_8_;
                local_6c0._16_8_ = TStack_a70._16_8_;
                local_638 = local_ab8;
                pTVar57 = TAABB<double,3>::TransformedAABB
                                    ((TAABB<double,3> *)local_a88,&local_548,&local_498);
                local_a88 = *(undefined1 (*) [16])&pTVar57->MMin;
                local_a78 = *(undefined8 *)&(pTVar57->MMin).field_0x10;
                TStack_a70._0_8_ = *(undefined8 *)&pTVar57->MMax;
                TStack_a70._8_8_ = *(undefined8 *)&(pTVar57->MMax).field_0x8;
                TStack_a70._16_8_ = *(undefined8 *)&(pTVar57->MMax).field_0x10;
                uVar67 = *(uint *)&pTVar52->field_0x8;
                lVar73 = *(longlong *)pTVar52;
                uVar41 = 0;
                if ((int)uVar67 < *(int *)(lVar73 + 0x3d0)) {
                  uVar41 = ~uVar67 >> 0x1f;
                }
                if (uVar41 == 0) {
                  bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar38) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                local_a98 = *(double *)(*(longlong *)(lVar73 + 0x3c8) + (longlong)(int)uVar67 * 8);
                local_a58 = -1;
                if (*(char *)&(local_e10->AllocatorInstance).Data != '\0') {
                  bVar38 = FSolverTrailingEventFilter::Pass
                                     ((FSolverTrailingEventFilter *)local_e10,
                                      (FTrailingData *)local_b08);
                  if (!bVar38) goto LAB_14dafcb80;
                }
                local_b38 = local_b08;
                pcVar7 = *(char **)(lVar6 + 0xbd8);
                local_c98 = &UE::Core::Private::Function::
                             TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::`95'::<lambda_2>,0,0>
                             ::_vftable_;
                fStack_c88 = (float)*(double *)(lVar6 + 0x280);
                local_c80 = (undefined ***)0x0;
                local_ca8 = UE::Core::Private::Function::
                            TFunctionRefCaller<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l95::<lambda_2>,void,Chaos::FTrailingEventData_&>
                            ::Call;
                uStack_c84 = uStack_b2c;
                fStack_b30 = fStack_c88;
                local_c90 = local_b38;
                if (*pcVar7 == '\x02') {
                  AcquireSRWLockShared((PSRWLOCK)(pcVar7 + 0x18));
                }
                AcquireSRWLockShared((PSRWLOCK)(pcVar7 + 0x20));
                if (*(int *)(pcVar7 + 0x10) < 3) {
                  bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar38) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                plVar72 = *(longlong **)(*(longlong *)(pcVar7 + 8) + 0x10);
                if (plVar72 != (longlong *)0x0) {
                  local_680 = 0;
                  pcVar8 = *(code **)(*plVar72 + 0x40);
                  local_6a8[0] = local_ca8;
                  if (local_ca8 != (code *)0x0) {
                    pppuVar70 = &local_c98;
                    if (local_c80 != (undefined ***)0x0) {
                      pppuVar70 = local_c80;
                    }
                    (*(code *)**pppuVar70)(pppuVar70,local_698);
                  }
                  (*pcVar8)(plVar72,local_6a8);
                }
                ReleaseSRWLockShared((PSRWLOCK)(pcVar7 + 0x20));
                if (*pcVar7 == '\x02') {
                  ReleaseSRWLockShared((PSRWLOCK)(pcVar7 + 0x18));
                }
                if (local_ca8 != (code *)0x0) {
                  pppuVar70 = &local_c98;
                  if (local_c80 != (undefined ***)0x0) {
                    pppuVar70 = local_c80;
                  }
                  (*(code *)(*pppuVar70)[2])();
                }
              }
            }
          }
        }
LAB_14dafcb80:
        pFVar77 = pFVar77 + 0x10;
      }
    }
    if (((bool)(this_00->Parameters).bGenerateCollisionData ||
         (bool)(this_00->Parameters).bGenerateGlobalCollisionData) &&
       (local_e30 != (TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *)0x0)) {
      iVar43 = local_e30->ArrayNum;
      pFVar77 = (local_e30->AllocatorInstance).Data;
      pFVar75 = pFVar77 + (longlong)iVar43 * 0x10;
      this_01 = (FSolverCollisionEventFilter *)**(undefined8 **)(lVar6 + 0xbe0);
      while( true ) {
        if (local_e30->ArrayNum != iVar43) {
          local_e34[0] = 0;
          `TCheckedPointerIterator<FCacheEventTrack::FHandle_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_e34);
        }
        param_5 = local_e28;
        if (pFVar77 == pFVar75) break;
        uVar67 = *(uint *)(pFVar77 + 0xc);
        if (((uVar67 != 0xffffffff) && (lVar73 = *(longlong *)pFVar77, lVar73 != 0)) &&
           (*(int *)(lVar73 + 0x30) == *(int *)(pFVar77 + 8))) {
          if ((((int)uVar67 < 0) || (*(int *)(lVar73 + 0x28) <= (int)uVar67)) ||
             (*(longlong *)(lVar73 + 8) == 0)) {
            lVar73 = 0;
          }
          else {
            if (Z_Registration_Info_UScriptStruct_FCollisionEvent.OuterSingleton ==
                (UScriptStruct *)0x0) {
              pUVar58 = Z_Construct_UPackage__Script_ChaosCaching();
              Z_Registration_Info_UScriptStruct_FCollisionEvent.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FCollisionEvent,(UObject *)pUVar58,
                                   L"CollisionEvent");
            }
            if (Z_Registration_Info_UScriptStruct_FCollisionEvent.OuterSingleton !=
                *(UScriptStruct **)(lVar73 + 8)) {
              bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("T::StaticStruct() == Struct",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Public\\Chaos\\CacheEvents.h"
                                  ,0x6e,L"");
              if (bVar38) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            uVar41 = 0;
            if ((int)uVar67 < *(int *)(lVar73 + 0x28)) {
              uVar41 = ~uVar67 >> 0x1f;
            }
            if (uVar41 == 0) {
              bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar38) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            lVar73 = *(longlong *)(*(longlong *)(lVar73 + 0x20) + (longlong)(int)uVar67 * 8);
          }
          if (lVar73 != 0) {
            auVar32._8_8_ = local_498.Rotation.ZW.m128d_f64[1];
            auVar32._0_8_ = local_498.Rotation.ZW.m128d_f64[0];
            auVar31._8_8_ = local_498.Rotation.XY.m128d_f64[1];
            auVar31._0_8_ = local_498.Rotation.XY.m128d_f64[0];
            local_918 = (IPhysicsProxyBase *)0x0;
            pIStack_910 = (IPhysicsProxyBase *)0x0;
            local_928._0_4_ = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)0x0;
            local_928._4_4_ = (THandle<Chaos::FChaosPhysicsMaterial,24,8>)0x0;
            local_900 = 0.0;
            local_920 = false;
            local_908._0_4_ = -1;
            local_908._4_4_ = -1;
            dVar15 = local_498.Scale3D.XY.m128d_f64[0] * *(double *)(lVar73 + 8);
            dVar16 = local_498.Scale3D.XY.m128d_f64[1] * *(double *)(lVar73 + 0x10);
            uVar149 = (undefined4)((ulonglong)dVar16 >> 0x20);
            dVar24 = *(double *)(lVar73 + 0x18) * local_498.Scale3D.ZW.m128d_f64[0];
            dVar26 = local_498.Scale3D.ZW.m128d_f64[1] * 0.0;
            auVar163._8_4_ = SUB84(dVar16,0);
            auVar163._0_8_ = dVar15;
            auVar163._12_4_ = uVar149;
            auVar83 = blendpd(auVar31,auVar32,2);
            auVar164._0_8_ =
                 auVar163._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 dVar15 * local_498.Rotation.XY.m128d_f64[1];
            auVar164._8_8_ =
                 dVar24 * local_498.Rotation.XY.m128d_f64[1] -
                 dVar16 * local_498.Rotation.ZW.m128d_f64[0];
            auVar98._8_4_ = SUB84(dVar16,0);
            auVar98._0_8_ = dVar15;
            auVar98._12_4_ = uVar149;
            dVar190 = auVar83._0_8_;
            dVar194 = auVar83._8_8_;
            auVar18._8_4_ = SUB84(dVar26,0);
            auVar18._0_8_ = dVar24;
            auVar18._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
            auVar83 = blendpd(auVar98,auVar18,2);
            auVar99._0_8_ = auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - dVar24 * dVar190;
            auVar99._8_8_ = auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - dVar26 * dVar194;
            auVar83 = blendpd(auVar164,auVar99,2);
            dVar26 = auVar164._8_8_ + auVar164._8_8_;
            dVar27 = auVar99._0_8_ + auVar99._0_8_;
            uVar149 = (undefined4)((ulonglong)dVar27 >> 0x20);
            auVar165._0_8_ = auVar83._0_8_ + auVar83._0_8_;
            auVar165._8_8_ = auVar83._8_8_ + auVar83._8_8_;
            auVar135._8_4_ = SUB84(dVar27,0);
            auVar135._0_8_ = dVar26;
            auVar135._12_4_ = uVar149;
            auVar100._8_4_ = SUB84(dVar27,0);
            auVar100._0_8_ = dVar26;
            auVar100._12_4_ = uVar149;
            auVar83 = blendpd(auVar100,auVar165,2);
            auVar136._0_8_ =
                 auVar135._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 dVar26 * local_498.Rotation.XY.m128d_f64[1];
            auVar136._8_8_ =
                 auVar165._0_8_ * local_498.Rotation.XY.m128d_f64[1] -
                 dVar27 * local_498.Rotation.ZW.m128d_f64[0];
            auVar101._0_8_ =
                 auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - auVar165._0_8_ * dVar190;
            auVar101._8_8_ =
                 auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - auVar165._8_8_ * dVar194;
            auVar83 = blendpd(auVar136,auVar101,2);
            dVar26 = dVar26 * local_498.Rotation.ZW.m128d_f64[1] + dVar15 + auVar136._8_8_ +
                     local_498.Translation.XY.m128d_f64[0];
            dVar27 = dVar27 * local_498.Rotation.ZW.m128d_f64[1] + dVar16 + auVar101._0_8_ +
                     local_498.Translation.XY.m128d_f64[1];
            uVar149 = SUB84(dVar27,0);
            uVar150 = (undefined4)((ulonglong)dVar27 >> 0x20);
            local_a18._16_8_ =
                 auVar165._0_8_ * local_498.Rotation.ZW.m128d_f64[1] + dVar24 + auVar83._0_8_ +
                 local_498.Translation.ZW.m128d_f64[0];
            local_630._8_4_ = uVar149;
            local_630._0_8_ = dVar26;
            local_630._12_4_ = uVar150;
            local_a18._8_4_ = uVar149;
            local_a18._0_8_ = dVar26;
            local_a18._12_4_ = uVar150;
            dVar15 = *(double *)(lVar73 + 0x20) * local_498.Scale3D.XY.m128d_f64[0];
            dVar16 = *(double *)(lVar73 + 0x28) * local_498.Scale3D.XY.m128d_f64[1];
            uVar149 = (undefined4)((ulonglong)dVar16 >> 0x20);
            dVar24 = *(double *)(lVar73 + 0x30) * local_498.Scale3D.ZW.m128d_f64[0];
            dVar26 = local_498.Scale3D.ZW.m128d_f64[1] * 0.0;
            auVar166._8_4_ = SUB84(dVar16,0);
            auVar166._0_8_ = dVar15;
            auVar166._12_4_ = uVar149;
            auVar102._8_4_ = SUB84(dVar16,0);
            auVar102._0_8_ = dVar15;
            auVar102._12_4_ = uVar149;
            auVar19._8_4_ = SUB84(dVar26,0);
            auVar19._0_8_ = dVar24;
            auVar19._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
            auVar83 = blendpd(auVar102,auVar19,2);
            auVar167._0_8_ =
                 auVar166._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 dVar15 * local_498.Rotation.XY.m128d_f64[1];
            auVar167._8_8_ =
                 dVar24 * local_498.Rotation.XY.m128d_f64[1] -
                 dVar16 * local_498.Rotation.ZW.m128d_f64[0];
            auVar103._0_8_ = auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - dVar24 * dVar190;
            auVar103._8_8_ = auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - dVar26 * dVar194;
            auVar83 = blendpd(auVar167,auVar103,2);
            auVar168._0_8_ = auVar83._0_8_ + auVar83._0_8_;
            auVar168._8_8_ = auVar83._8_8_ + auVar83._8_8_;
            dVar26 = auVar167._8_8_ + auVar167._8_8_;
            dVar27 = auVar103._0_8_ + auVar103._0_8_;
            uVar149 = (undefined4)((ulonglong)dVar27 >> 0x20);
            auVar137._8_4_ = SUB84(dVar27,0);
            auVar137._0_8_ = dVar26;
            auVar137._12_4_ = uVar149;
            auVar104._8_4_ = SUB84(dVar27,0);
            auVar104._0_8_ = dVar26;
            auVar104._12_4_ = uVar149;
            auVar83 = blendpd(auVar104,auVar168,2);
            auVar138._0_8_ =
                 auVar137._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 dVar26 * local_498.Rotation.XY.m128d_f64[1];
            auVar138._8_8_ =
                 auVar168._0_8_ * local_498.Rotation.XY.m128d_f64[1] -
                 dVar27 * local_498.Rotation.ZW.m128d_f64[0];
            auVar105._0_8_ =
                 auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - auVar168._0_8_ * dVar190;
            auVar105._8_8_ =
                 auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - auVar168._8_8_ * dVar194;
            dVar26 = dVar26 * local_498.Rotation.ZW.m128d_f64[1] + dVar15 + auVar138._8_8_;
            dVar27 = dVar27 * local_498.Rotation.ZW.m128d_f64[1] + dVar16 + auVar105._0_8_;
            uVar149 = SUB84(dVar27,0);
            uVar150 = (undefined4)((ulonglong)dVar27 >> 0x20);
            auVar83 = blendpd(auVar138,auVar105,2);
            dStack_9f0 = auVar168._0_8_ * local_498.Rotation.ZW.m128d_f64[1] + dVar24 +
                         auVar83._0_8_;
            local_618._8_4_ = uVar149;
            local_618._0_8_ = dVar26;
            local_618._12_4_ = uVar150;
            auStack_a00._8_4_ = uVar149;
            auStack_a00._0_8_ = dVar26;
            auStack_a00._12_4_ = uVar150;
            dVar15 = local_498.Scale3D.XY.m128d_f64[0] * *(double *)(lVar73 + 0x38);
            dVar16 = local_498.Scale3D.XY.m128d_f64[1] * *(double *)(lVar73 + 0x40);
            uVar149 = (undefined4)((ulonglong)dVar16 >> 0x20);
            dVar24 = *(double *)(lVar73 + 0x48) * local_498.Scale3D.ZW.m128d_f64[0];
            dVar26 = local_498.Scale3D.ZW.m128d_f64[1] * 0.0;
            auVar169._8_4_ = SUB84(dVar16,0);
            auVar169._0_8_ = dVar15;
            auVar169._12_4_ = uVar149;
            auVar106._8_4_ = SUB84(dVar16,0);
            auVar106._0_8_ = dVar15;
            auVar106._12_4_ = uVar149;
            auVar20._8_4_ = SUB84(dVar26,0);
            auVar20._0_8_ = dVar24;
            auVar20._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
            auVar83 = blendpd(auVar106,auVar20,2);
            auVar170._0_8_ =
                 auVar169._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 dVar15 * local_498.Rotation.XY.m128d_f64[1];
            auVar170._8_8_ =
                 dVar24 * local_498.Rotation.XY.m128d_f64[1] -
                 dVar16 * local_498.Rotation.ZW.m128d_f64[0];
            auVar107._0_8_ = auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - dVar24 * dVar190;
            auVar107._8_8_ = auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - dVar26 * dVar194;
            auVar83 = blendpd(auVar170,auVar107,2);
            dVar26 = auVar170._8_8_ + auVar170._8_8_;
            dVar27 = auVar107._0_8_ + auVar107._0_8_;
            uVar149 = (undefined4)((ulonglong)dVar27 >> 0x20);
            auVar171._0_8_ = auVar83._0_8_ + auVar83._0_8_;
            auVar171._8_8_ = auVar83._8_8_ + auVar83._8_8_;
            auVar139._8_4_ = SUB84(dVar27,0);
            auVar139._0_8_ = dVar26;
            auVar139._12_4_ = uVar149;
            auVar108._8_4_ = SUB84(dVar27,0);
            auVar108._0_8_ = dVar26;
            auVar108._12_4_ = uVar149;
            auVar83 = blendpd(auVar108,auVar171,2);
            auVar140._0_8_ =
                 auVar139._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 dVar26 * local_498.Rotation.XY.m128d_f64[1];
            auVar140._8_8_ =
                 auVar171._0_8_ * local_498.Rotation.XY.m128d_f64[1] -
                 dVar27 * local_498.Rotation.ZW.m128d_f64[0];
            auVar109._0_8_ =
                 auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - dVar190 * auVar171._0_8_;
            auVar109._8_8_ =
                 auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - dVar194 * auVar171._8_8_;
            auVar83 = blendpd(auVar140,auVar109,2);
            dVar26 = dVar26 * local_498.Rotation.ZW.m128d_f64[1] + dVar15 + auVar140._8_8_;
            dVar27 = dVar27 * local_498.Rotation.ZW.m128d_f64[1] + dVar16 + auVar109._0_8_;
            uVar149 = SUB84(dVar27,0);
            uVar150 = (undefined4)((ulonglong)dVar27 >> 0x20);
            local_600._8_4_ = uVar149;
            local_600._0_8_ = dVar26;
            local_600._12_4_ = uVar150;
            local_9e8._8_4_ = uVar149;
            local_9e8._0_8_ = dVar26;
            local_9e8._12_4_ = uVar150;
            local_9d8 = local_498.Rotation.ZW.m128d_f64[1] * auVar171._0_8_ + dVar24 + auVar83._0_8_
            ;
            dVar15 = *(double *)(lVar73 + 0x50) * local_498.Scale3D.XY.m128d_f64[0];
            dVar16 = *(double *)(lVar73 + 0x58) * local_498.Scale3D.XY.m128d_f64[1];
            uVar149 = (undefined4)((ulonglong)dVar16 >> 0x20);
            dVar24 = *(double *)(lVar73 + 0x60) * local_498.Scale3D.ZW.m128d_f64[0];
            dVar26 = local_498.Scale3D.ZW.m128d_f64[1] * 0.0;
            auVar172._8_4_ = SUB84(dVar16,0);
            auVar172._0_8_ = dVar15;
            auVar172._12_4_ = uVar149;
            auVar110._8_4_ = SUB84(dVar16,0);
            auVar110._0_8_ = dVar15;
            auVar110._12_4_ = uVar149;
            auVar21._8_4_ = SUB84(dVar26,0);
            auVar21._0_8_ = dVar24;
            auVar21._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
            auVar83 = blendpd(auVar110,auVar21,2);
            auVar173._0_8_ =
                 auVar172._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 local_498.Rotation.XY.m128d_f64[1] * dVar15;
            auVar173._8_8_ =
                 dVar24 * local_498.Rotation.XY.m128d_f64[1] -
                 local_498.Rotation.ZW.m128d_f64[0] * dVar16;
            auVar111._0_8_ = auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - dVar190 * dVar24;
            auVar111._8_8_ = auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - dVar194 * dVar26;
            auVar83 = blendpd(auVar173,auVar111,2);
            auVar174._0_8_ = auVar83._0_8_ + auVar83._0_8_;
            auVar174._8_8_ = auVar83._8_8_ + auVar83._8_8_;
            dVar26 = auVar173._8_8_ + auVar173._8_8_;
            dVar27 = auVar111._0_8_ + auVar111._0_8_;
            uVar149 = (undefined4)((ulonglong)dVar27 >> 0x20);
            auVar141._8_4_ = SUB84(dVar27,0);
            auVar141._0_8_ = dVar26;
            auVar141._12_4_ = uVar149;
            auVar112._8_4_ = SUB84(dVar27,0);
            auVar112._0_8_ = dVar26;
            auVar112._12_4_ = uVar149;
            auVar83 = blendpd(auVar112,auVar174,2);
            auVar142._0_8_ =
                 auVar141._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 local_498.Rotation.XY.m128d_f64[1] * dVar26;
            auVar142._8_8_ =
                 auVar174._0_8_ * local_498.Rotation.XY.m128d_f64[1] -
                 local_498.Rotation.ZW.m128d_f64[0] * dVar27;
            auVar113._0_8_ =
                 auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - auVar174._0_8_ * dVar190;
            auVar113._8_8_ =
                 auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - auVar174._8_8_ * dVar194;
            dVar26 = dVar26 * local_498.Rotation.ZW.m128d_f64[1] + dVar15 + auVar142._8_8_;
            dVar27 = dVar27 * local_498.Rotation.ZW.m128d_f64[1] + dVar16 + auVar113._0_8_;
            uVar149 = SUB84(dVar27,0);
            uVar150 = (undefined4)((ulonglong)dVar27 >> 0x20);
            auVar83 = blendpd(auVar142,auVar113,2);
            dStack_9c0 = auVar174._0_8_ * local_498.Rotation.ZW.m128d_f64[1] + dVar24 +
                         auVar83._0_8_;
            local_7c8._8_4_ = uVar149;
            local_7c8._0_8_ = dVar26;
            local_7c8._12_4_ = uVar150;
            auStack_9d0._8_4_ = uVar149;
            auStack_9d0._0_8_ = dVar26;
            auStack_9d0._12_4_ = uVar150;
            dVar15 = local_498.Scale3D.XY.m128d_f64[0] * *(double *)(lVar73 + 0x68);
            dVar16 = local_498.Scale3D.XY.m128d_f64[1] * *(double *)(lVar73 + 0x70);
            uVar149 = (undefined4)((ulonglong)dVar16 >> 0x20);
            dVar24 = *(double *)(lVar73 + 0x78) * local_498.Scale3D.ZW.m128d_f64[0];
            dVar26 = local_498.Scale3D.ZW.m128d_f64[1] * 0.0;
            auVar175._8_4_ = SUB84(dVar16,0);
            auVar175._0_8_ = dVar15;
            auVar175._12_4_ = uVar149;
            auVar114._8_4_ = SUB84(dVar16,0);
            auVar114._0_8_ = dVar15;
            auVar114._12_4_ = uVar149;
            auVar22._8_4_ = SUB84(dVar26,0);
            auVar22._0_8_ = dVar24;
            auVar22._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
            auVar83 = blendpd(auVar114,auVar22,2);
            auVar176._0_8_ =
                 auVar175._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 dVar15 * local_498.Rotation.XY.m128d_f64[1];
            auVar176._8_8_ =
                 dVar24 * local_498.Rotation.XY.m128d_f64[1] -
                 dVar16 * local_498.Rotation.ZW.m128d_f64[0];
            auVar115._0_8_ = auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - dVar24 * dVar190;
            auVar115._8_8_ = auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - dVar26 * dVar194;
            auVar83 = blendpd(auVar176,auVar115,2);
            auVar177._0_8_ = auVar83._0_8_ + auVar83._0_8_;
            auVar177._8_8_ = auVar83._8_8_ + auVar83._8_8_;
            dVar26 = auVar176._8_8_ + auVar176._8_8_;
            dVar27 = auVar115._0_8_ + auVar115._0_8_;
            uVar149 = (undefined4)((ulonglong)dVar27 >> 0x20);
            auVar143._8_4_ = SUB84(dVar27,0);
            auVar143._0_8_ = dVar26;
            auVar143._12_4_ = uVar149;
            auVar116._8_4_ = SUB84(dVar27,0);
            auVar116._0_8_ = dVar26;
            auVar116._12_4_ = uVar149;
            auVar83 = blendpd(auVar116,auVar177,2);
            auVar144._0_8_ =
                 auVar143._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 dVar26 * local_498.Rotation.XY.m128d_f64[1];
            auVar144._8_8_ =
                 auVar177._0_8_ * local_498.Rotation.XY.m128d_f64[1] -
                 dVar27 * local_498.Rotation.ZW.m128d_f64[0];
            auVar117._0_8_ =
                 auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - auVar177._0_8_ * dVar190;
            auVar117._8_8_ =
                 auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - auVar177._8_8_ * dVar194;
            dVar26 = dVar26 * local_498.Rotation.ZW.m128d_f64[1] + dVar15 + auVar144._8_8_;
            dVar27 = dVar27 * local_498.Rotation.ZW.m128d_f64[1] + dVar16 + auVar117._0_8_;
            uVar149 = SUB84(dVar27,0);
            uVar150 = (undefined4)((ulonglong)dVar27 >> 0x20);
            auVar83 = blendpd(auVar144,auVar117,2);
            local_9a8 = auVar177._0_8_ * local_498.Rotation.ZW.m128d_f64[1] + dVar24 + auVar83._0_8_
            ;
            local_7b0._8_4_ = uVar149;
            local_7b0._0_8_ = dVar26;
            local_7b0._12_4_ = uVar150;
            local_9b8._8_4_ = uVar149;
            local_9b8._0_8_ = dVar26;
            local_9b8._12_4_ = uVar150;
            dVar15 = *(double *)(lVar73 + 0x80) * local_498.Scale3D.XY.m128d_f64[0];
            dVar16 = *(double *)(lVar73 + 0x88) * local_498.Scale3D.XY.m128d_f64[1];
            uVar149 = (undefined4)((ulonglong)dVar16 >> 0x20);
            dVar24 = *(double *)(lVar73 + 0x90) * local_498.Scale3D.ZW.m128d_f64[0];
            dVar26 = local_498.Scale3D.ZW.m128d_f64[1] * 0.0;
            auVar178._8_4_ = SUB84(dVar16,0);
            auVar178._0_8_ = dVar15;
            auVar178._12_4_ = uVar149;
            auVar118._8_4_ = SUB84(dVar16,0);
            auVar118._0_8_ = dVar15;
            auVar118._12_4_ = uVar149;
            auVar23._8_4_ = SUB84(dVar26,0);
            auVar23._0_8_ = dVar24;
            auVar23._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
            auVar83 = blendpd(auVar118,auVar23,2);
            auVar179._0_8_ =
                 auVar178._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 dVar15 * local_498.Rotation.XY.m128d_f64[1];
            auVar179._8_8_ =
                 dVar24 * local_498.Rotation.XY.m128d_f64[1] -
                 dVar16 * local_498.Rotation.ZW.m128d_f64[0];
            auVar119._0_8_ = auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - dVar24 * dVar190;
            auVar119._8_8_ = auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - dVar26 * dVar194;
            auVar83 = blendpd(auVar179,auVar119,2);
            auVar180._0_8_ = auVar83._0_8_ + auVar83._0_8_;
            auVar180._8_8_ = auVar83._8_8_ + auVar83._8_8_;
            dVar26 = auVar179._8_8_ + auVar179._8_8_;
            dVar27 = auVar119._0_8_ + auVar119._0_8_;
            uVar149 = (undefined4)((ulonglong)dVar27 >> 0x20);
            auVar145._8_4_ = SUB84(dVar27,0);
            auVar145._0_8_ = dVar26;
            auVar145._12_4_ = uVar149;
            auVar120._8_4_ = SUB84(dVar27,0);
            auVar120._0_8_ = dVar26;
            auVar120._12_4_ = uVar149;
            auVar83 = blendpd(auVar120,auVar180,2);
            auVar146._0_8_ =
                 auVar145._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 dVar26 * local_498.Rotation.XY.m128d_f64[1];
            auVar146._8_8_ =
                 auVar180._0_8_ * local_498.Rotation.XY.m128d_f64[1] -
                 dVar27 * local_498.Rotation.ZW.m128d_f64[0];
            auVar121._0_8_ =
                 auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - dVar190 * auVar180._0_8_;
            auVar121._8_8_ =
                 auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - dVar194 * auVar180._8_8_;
            dVar26 = dVar26 * local_498.Rotation.ZW.m128d_f64[1] + dVar15 + auVar146._8_8_;
            dVar27 = dVar27 * local_498.Rotation.ZW.m128d_f64[1] + dVar16 + auVar121._0_8_;
            uVar149 = SUB84(dVar27,0);
            uVar150 = (undefined4)((ulonglong)dVar27 >> 0x20);
            auVar83 = blendpd(auVar146,auVar121,2);
            dStack_990 = auVar180._0_8_ * local_498.Rotation.ZW.m128d_f64[1] + dVar24 +
                         auVar83._0_8_;
            local_5e8._8_4_ = uVar149;
            local_5e8._0_8_ = dVar26;
            local_5e8._12_4_ = uVar150;
            auStack_9a0._8_4_ = uVar149;
            auStack_9a0._0_8_ = dVar26;
            auStack_9a0._12_4_ = uVar150;
            dVar16 = local_498.Scale3D.XY.m128d_f64[0] * *(double *)(lVar73 + 0x98);
            dVar24 = local_498.Scale3D.XY.m128d_f64[1] * *(double *)(lVar73 + 0xa0);
            uVar149 = (undefined4)((ulonglong)dVar24 >> 0x20);
            dVar15 = *(double *)(lVar73 + 0xa8) * local_498.Scale3D.ZW.m128d_f64[0];
            dVar26 = local_498.Scale3D.ZW.m128d_f64[1] * 0.0;
            auVar181._8_4_ = SUB84(dVar24,0);
            auVar181._0_8_ = dVar16;
            auVar181._12_4_ = uVar149;
            auVar122._8_4_ = SUB84(dVar24,0);
            auVar122._0_8_ = dVar16;
            auVar122._12_4_ = uVar149;
            auVar182._0_8_ =
                 auVar181._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 dVar16 * local_498.Rotation.XY.m128d_f64[1];
            auVar182._8_8_ =
                 dVar15 * local_498.Rotation.XY.m128d_f64[1] -
                 dVar24 * local_498.Rotation.ZW.m128d_f64[0];
            auVar13._8_4_ = SUB84(dVar26,0);
            auVar13._0_8_ = dVar15;
            auVar13._12_4_ = (int)((ulonglong)dVar26 >> 0x20);
            auVar83 = blendpd(auVar122,auVar13,2);
            auVar123._0_8_ = auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - dVar190 * dVar15;
            auVar123._8_8_ = auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - dVar194 * dVar26;
            auVar83 = blendpd(auVar182,auVar123,2);
            dVar26 = auVar182._8_8_ + auVar182._8_8_;
            dVar27 = auVar123._0_8_ + auVar123._0_8_;
            uVar149 = (undefined4)((ulonglong)dVar27 >> 0x20);
            auVar183._0_8_ = auVar83._0_8_ + auVar83._0_8_;
            auVar183._8_8_ = auVar83._8_8_ + auVar83._8_8_;
            auVar147._8_4_ = SUB84(dVar27,0);
            auVar147._0_8_ = dVar26;
            auVar147._12_4_ = uVar149;
            auVar124._8_4_ = SUB84(dVar27,0);
            auVar124._0_8_ = dVar26;
            auVar124._12_4_ = uVar149;
            auVar83 = blendpd(auVar124,auVar183,2);
            auVar148._0_8_ =
                 auVar147._8_8_ * local_498.Rotation.XY.m128d_f64[0] -
                 dVar26 * local_498.Rotation.XY.m128d_f64[1];
            auVar148._8_8_ =
                 auVar183._0_8_ * local_498.Rotation.XY.m128d_f64[1] -
                 dVar27 * local_498.Rotation.ZW.m128d_f64[0];
            auVar125._0_8_ =
                 auVar83._0_8_ * local_498.Rotation.ZW.m128d_f64[0] - auVar183._0_8_ * dVar190;
            auVar125._8_8_ =
                 auVar83._8_8_ * local_498.Rotation.ZW.m128d_f64[1] - auVar183._8_8_ * dVar194;
            auVar83 = blendpd(auVar148,auVar125,2);
            dVar26 = dVar26 * local_498.Rotation.ZW.m128d_f64[1] + dVar16 + auVar148._8_8_;
            dVar27 = dVar27 * local_498.Rotation.ZW.m128d_f64[1] + dVar24 + auVar125._0_8_;
            uVar149 = SUB84(dVar27,0);
            uVar150 = (undefined4)((ulonglong)dVar27 >> 0x20);
            local_978 = auVar183._0_8_ * local_498.Rotation.ZW.m128d_f64[1] + dVar15 + auVar83._0_8_
            ;
            local_780._8_4_ = uVar149;
            local_780._0_8_ = dVar26;
            local_780._12_4_ = uVar150;
            local_988._8_4_ = uVar149;
            local_988._0_8_ = dVar26;
            local_988._12_4_ = uVar150;
            TStack_970._0_8_ = *(undefined8 *)(lVar73 + 0xb0);
            TStack_970._8_8_ = *(undefined8 *)(lVar73 + 0xb8);
            TStack_970._16_8_ = *(undefined8 *)(lVar73 + 0xc0);
            local_958._0_8_ = *(undefined8 *)(lVar73 + 200);
            local_958._8_8_ = *(undefined8 *)(lVar73 + 0xd0);
            local_958._16_8_ = *(undefined8 *)(lVar73 + 0xd8);
            dStack_940 = (double)*(float *)(lVar73 + 0xe0);
            local_938 = (double)*(float *)(lVar73 + 0xe4);
            dStack_930 = (double)*(float *)(lVar73 + 0xe8);
            local_7b8 = dStack_9c0;
            local_7a0 = local_9a8;
            local_770 = local_978;
            local_620 = (double)local_a18._16_8_;
            local_608 = dStack_9f0;
            local_5f0 = local_9d8;
            local_5d8 = dStack_990;
            if ((this_01->Settings).FilterEnabled != false) {
              bVar38 = FSolverCollisionEventFilter::Pass(this_01,(FCollidingData *)local_a18);
              if (!bVar38) goto LAB_14dafd5fb;
            }
            local_c48 = local_a18;
            pcVar7 = *(char **)(lVar6 + 0xbd8);
            fVar185 = (float)*(double *)(lVar6 + 0x280);
            local_c78 = (code *)0x0;
            local_c50 = (longlong *)0x0;
            local_c38 = this_00;
            local_c50 = FMemory::Malloc(0x20,8);
            *local_c50 = (longlong)
                         &UE::Core::Private::Function::
                          TFunction_OwnedObject<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::`108'::<lambda_3>,0,1>
                          ::_vftable_;
            *(undefined4 *)(local_c50 + 1) = (undefined4)local_c48;
            *(undefined4 *)((longlong)local_c50 + 0xc) = local_c48._4_4_;
            *(float *)(local_c50 + 2) = fVar185;
            *(undefined4 *)((longlong)local_c50 + 0x14) = uStack_c3c;
            local_c50[3] = (longlong)local_c38;
            if (local_c50 + 1 != (longlong *)0x0) {
              local_c78 = UE::Core::Private::Function::
                          TFunctionRefCaller<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l108::<lambda_3>,void,Chaos::FCollisionEventData_&>
                          ::Call;
            }
            fStack_c40 = fVar185;
            if (*pcVar7 == '\x02') {
              AcquireSRWLockShared((PSRWLOCK)(pcVar7 + 0x18));
            }
            AcquireSRWLockShared((PSRWLOCK)(pcVar7 + 0x20));
            if (*(int *)(pcVar7 + 0x10) < 1) {
              bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar38) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            plVar72 = (longlong *)**(longlong **)(pcVar7 + 8);
            if (plVar72 != (longlong *)0x0) {
              local_650 = 0;
              pcVar8 = *(code **)(*plVar72 + 0x40);
              local_678[0] = local_c78;
              if (local_c78 != (code *)0x0) {
                plVar71 = local_c68;
                if (local_c50 != (longlong *)0x0) {
                  plVar71 = local_c50;
                }
                (**(code **)*plVar71)(plVar71,local_668);
              }
              (*pcVar8)(plVar72,local_678);
            }
            ReleaseSRWLockShared((PSRWLOCK)(pcVar7 + 0x20));
            if (*pcVar7 == '\x02') {
              ReleaseSRWLockShared((PSRWLOCK)(pcVar7 + 0x18));
            }
            if (local_c78 != (code *)0x0) {
              plVar72 = local_c68;
              if (local_c50 != (longlong *)0x0) {
                plVar72 = local_c50;
              }
              (**(code **)(*plVar72 + 0x10))();
            }
          }
        }
LAB_14dafd5fb:
        pFVar77 = pFVar77 + 0x10;
      }
    }
    uVar36 = _UNK_15061cc8c;
    uVar35 = _UNK_15061cc88;
    uVar41 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    uVar67 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    local_e10 = (TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *)
                (longlong)local_208.Transform.ArrayNum;
    uVar79 = 0;
    if (0 < (longlong)local_e10) {
      local_e08 = (TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *)0x0;
      do {
        pTVar50 = local_e08;
        uVar68 = 0;
        if ((int)uVar79 < local_208.ParticleIndices.ArrayNum) {
          uVar68 = ~uVar79 >> 0x1f;
        }
        if (uVar68 == 0) {
          bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar38) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        uVar68 = *(uint *)(local_208.ParticleIndices.AllocatorInstance.Data + (longlong)pTVar50 * 4)
        ;
        uVar42 = 0;
        if ((int)uVar79 < local_208.Transform.ArrayNum) {
          uVar42 = ~uVar79 >> 0x1f;
        }
        if (uVar42 == 0) {
          bVar38 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar38) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        lVar73 = (longlong)pTVar50 * 0x60;
        dVar27 = *(double *)(local_208.Transform.AllocatorInstance.Data + lVar73);
        dVar15 = *(double *)(local_208.Transform.AllocatorInstance.Data + lVar73 + 8);
        dVar16 = *(double *)(local_208.Transform.AllocatorInstance.Data + lVar73 + 0x10);
        dVar24 = *(double *)(local_208.Transform.AllocatorInstance.Data + lVar73 + 0x10 + 8);
        dVar190 = *(double *)(local_208.Transform.AllocatorInstance.Data + lVar73 + 0x20);
        dVar194 = *(double *)(local_208.Transform.AllocatorInstance.Data + lVar73 + 0x20 + 8);
        pTVar28 = *(TBitArray<FDefaultBitArrayAllocator> **)
                   (local_208.Transform.AllocatorInstance.Data + lVar73 + 0x30);
        dVar26 = *(double *)(local_208.Transform.AllocatorInstance.Data + lVar73 + 0x30 + 8);
        dVar11 = *(double *)(local_208.Transform.AllocatorInstance.Data + lVar73 + 0x40);
        dVar25 = *(double *)(local_208.Transform.AllocatorInstance.Data + lVar73 + 0x40 + 8);
        dVar10 = *(double *)(local_208.Transform.AllocatorInstance.Data + lVar73 + 0x50);
        dVar14 = *(double *)(local_208.Transform.AllocatorInstance.Data + lVar73 + 0x50 + 8);
        if ((-1 < (int)uVar68) && ((int)uVar68 < (this_00->FromTransformToParticleIndex).ArrayNum))
        {
          uVar42 = 0;
          if ((int)uVar68 < (this_00->FromTransformToParticleIndex).ArrayNum) {
            uVar42 = ~uVar68 >> 0x1f;
          }
          if (uVar42 == 0) {
            bVar38 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar38) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          uVar68 = *(uint *)((this_00->FromTransformToParticleIndex).AllocatorInstance.Data +
                            (longlong)(int)uVar68 * 4);
          if ((-1 < (int)uVar68) && ((int)uVar68 < (this_00->SolverParticleHandles).ArrayNum)) {
            uVar42 = 0;
            if ((int)uVar68 < (this_00->SolverParticleHandles).ArrayNum) {
              uVar42 = ~uVar68 >> 0x1f;
            }
            if (uVar42 == 0) {
              bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar38) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
            }
            this_02 = *(TGeometryParticleHandleImp<double,3,1> **)
                       ((this_00->SolverParticleHandles).AllocatorInstance.Data +
                       (longlong)(int)uVar68 * 8);
            if (this_02 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              lVar73 = this_02->_padding_;
              uVar68 = (uint)this_02->_padding_;
              uVar42 = 0;
              if ((int)uVar68 < *(int *)(lVar73 + 0x2e0)) {
                uVar42 = ~uVar68 >> 0x1f;
              }
              if (uVar42 == 0) {
                bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar38) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              if (*(char *)(*(longlong *)(lVar73 + 0x2d8) + 0xb + (longlong)(int)uVar68 * 0x10) ==
                  '\x02') {
                uVar68 = (uint)this_02->_padding_;
                lVar73 = this_02->_padding_;
                uVar42 = 0;
                if ((int)uVar68 < *(int *)(lVar73 + 0x550)) {
                  uVar42 = ~uVar68 >> 0x1f;
                }
                pTStack_d28 = pTVar28;
                local_8f0 = dVar190;
                dStack_8e8 = dVar194;
                local_8e0 = pTVar28;
                local_3d8.Rotation.XY.m128d_f64[0] = dVar27;
                local_3d8.Rotation.XY.m128d_f64[1] = dVar15;
                local_3d8.Rotation.ZW.m128d_f64[0] = dVar16;
                local_3d8.Rotation.ZW.m128d_f64[1] = dVar24;
                local_3d8.Translation.XY.m128d_f64[0] = dVar190;
                local_3d8.Translation.XY.m128d_f64[1] = dVar194;
                local_3d8.Translation.ZW.m128d_f64[0] = (double)pTVar28;
                local_3d8.Translation.ZW.m128d_f64[1] = dVar26;
                local_3d8.Scale3D.XY.m128d_f64[0] = dVar11;
                local_3d8.Scale3D.XY.m128d_f64[1] = dVar25;
                local_3d8.Scale3D.ZW.m128d_f64[0] = dVar10;
                local_3d8.Scale3D.ZW.m128d_f64[1] = dVar14;
                if (uVar42 == 0) {
                  bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar38) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                lVar73 = *(longlong *)(lVar73 + 0x548);
                pdVar2 = (double *)(lVar73 + (longlong)(int)uVar68 * 0x18);
                *pdVar2 = dVar190;
                pdVar2[1] = dVar194;
                *(TBitArray<FDefaultBitArrayAllocator> **)
                 (lVar73 + 0x10 + (longlong)(int)uVar68 * 0x18) = pTStack_d28;
                uVar68 = (uint)this_02->_padding_;
                lVar69 = (longlong)(int)uVar68;
                lVar73 = this_02->_padding_;
                fVar185 = (float)local_3d8.Rotation.XY.m128d_f64[0];
                uVar42 = 0;
                if ((int)uVar68 < *(int *)(lVar73 + 0x568)) {
                  uVar42 = ~uVar68 >> 0x1f;
                }
                fVar187 = (float)local_3d8.Rotation.ZW.m128d_f64[0];
                fVar186 = (float)local_3d8.Rotation.XY.m128d_f64[1];
                fVar188 = (float)local_3d8.Rotation.ZW.m128d_f64[1];
                if (uVar42 == 0) {
                  bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar38) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                lVar73 = *(longlong *)(lVar73 + 0x560);
                *(float *)(lVar73 + lVar69 * 0x10) = fVar185;
                *(float *)(lVar73 + 4 + lVar69 * 0x10) = fVar186;
                *(float *)(lVar73 + 8 + lVar69 * 0x10) = fVar187;
                *(float *)(lVar73 + 0xc + lVar69 * 0x10) = fVar188;
                lVar73 = this_02->_padding_;
                uVar68 = (uint)this_02->_padding_;
                uVar42 = 0;
                if ((int)uVar68 < *(int *)(lVar73 + 0x550)) {
                  uVar42 = ~uVar68 >> 0x1f;
                }
                if (uVar42 == 0) {
                  bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar38) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                uVar42 = (uint)this_02->_padding_;
                local_e30 = (TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *)
                            this_02->_padding_;
                lVar73 = *(longlong *)(lVar73 + 0x548);
                puVar3 = (undefined8 *)(lVar73 + (longlong)(int)uVar68 * 0x18);
                uVar29 = *puVar3;
                uVar30 = puVar3[1];
                uVar4 = *(undefined8 *)(lVar73 + 0x10 + (longlong)(int)uVar68 * 0x18);
                uVar68 = 0;
                if ((int)uVar42 < *(int *)((longlong)local_e30 + 0x30)) {
                  uVar68 = ~uVar42 >> 0x1f;
                }
                if (uVar68 == 0) {
                  bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar38) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                lVar73 = *(longlong *)((longlong)local_e30 + 0x28);
                puVar3 = (undefined8 *)(lVar73 + (longlong)(int)uVar42 * 0x18);
                *puVar3 = uVar29;
                puVar3[1] = uVar30;
                *(undefined8 *)(lVar73 + 0x10 + (longlong)(int)uVar42 * 0x18) = uVar4;
                lVar73 = this_02->_padding_;
                uVar68 = (uint)this_02->_padding_;
                uVar42 = 0;
                if ((int)uVar68 < *(int *)(lVar73 + 0x568)) {
                  uVar42 = ~uVar68 >> 0x1f;
                }
                if (uVar42 == 0) {
                  bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar38) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                uVar42 = (uint)this_02->_padding_;
                local_e30 = (TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *)
                            this_02->_padding_;
                puVar3 = (undefined8 *)
                         (*(longlong *)(lVar73 + 0x560) + (longlong)(int)uVar68 * 0x10);
                uVar4 = *puVar3;
                uVar29 = puVar3[1];
                uVar68 = 0;
                if ((int)uVar42 < *(int *)&local_e30[5].AllocatorInstance.Data) {
                  uVar68 = ~uVar42 >> 0x1f;
                }
                if (uVar68 == 0) {
                  bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar38) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                puVar3 = (undefined8 *)
                         (*(longlong *)&local_e30[4].ArrayNum + (longlong)(int)uVar42 * 0x10);
                *puVar3 = uVar4;
                puVar3[1] = uVar29;
                local_8d8._0_8_ = 0;
                local_8d8._8_8_ = 0;
                local_318 = local_3d8.Rotation.XY.m128d_f64[0];
                dStack_310 = local_3d8.Rotation.XY.m128d_f64[1];
                local_308 = local_3d8.Rotation.ZW.m128d_f64[0];
                dStack_300 = local_3d8.Rotation.ZW.m128d_f64[1];
                local_2f8 = local_3d8.Translation.XY.m128d_f64[0];
                dStack_2f0 = local_3d8.Translation.XY.m128d_f64[1];
                local_2e8 = (TBitArray<FDefaultBitArrayAllocator> *)
                            local_3d8.Translation.ZW.m128d_f64[0];
                dStack_2e0 = local_3d8.Translation.ZW.m128d_f64[1];
                local_2c8._8_8_ = local_3d8.Scale3D.ZW.m128d_f64[1];
                local_2c8._0_8_ = local_3d8.Scale3D.ZW.m128d_f64[0];
                local_2d8 = local_3d8.Scale3D.XY.m128d_f64[0];
                dStack_2d0 = local_3d8.Scale3D.XY.m128d_f64[1];
                local_8d8._16_8_ = 0;
                TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
                          ((TGeometryParticlesImp<double,3,0> *)this_02->_padding_,
                           (int)this_02->_padding_,(TRigidTransform<double,3> *)&local_318,
                           &local_8d8);
                uVar68 = (uint)this_02->_padding_;
                lVar73 = this_02->_padding_;
                uVar42 = 0;
                if ((int)uVar68 < *(int *)(lVar73 + 0x2e0)) {
                  uVar42 = ~uVar68 >> 0x1f;
                }
                if (uVar42 == 0) {
                  bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar38) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                if (*(char *)(*(longlong *)(lVar73 + 0x2d8) + 0xd + (longlong)(int)uVar68 * 0x10) ==
                    '\0') {
                  pTVar50 = *(TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> **)
                             (lVar6 + 0xbd0);
                  pTVar74 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                  if (1 < *(byte *)((longlong)&this_02->_padding_ + 4)) {
                    pTVar74 = this_02;
                  }
                  local_e30 = pTVar50;
                  if (pTVar74 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                    bVar38 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                                       ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar74);
                    if (bVar38) {
                      pTVar74 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                      if (2 < *(byte *)((longlong)&this_02->_padding_ + 4)) {
                        pTVar74 = this_02;
                      }
                      if (pTVar74 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                        pCVar53 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ClusterIds
                                            ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)
                                             pTVar74);
                        pTVar74 = (TGeometryParticleHandleImp<double,3,1> *)pCVar53->Id;
                        if (pTVar74 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                          pTVar78 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                          if (2 < *(byte *)((longlong)&pTVar74->_padding_ + 4)) {
                            pTVar78 = pTVar74;
                          }
                          if (pTVar78 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                            bVar38 = UE::Assert::Private::ExecCheckImplInternal
                                               (&bGEnsureHasExecuted<_2113888976451403243>,false,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                                                ,0x215,"false");
                            if (bVar38) {
                              pcVar8 = (code *)swi(3);
                              (*pcVar8)();
                              return;
                            }
                          }
                          else {
                            bVar38 = TPBDRigidClusteredParticleHandleImp<double,3,1>::
                                     InternalCluster((
                                                  TPBDRigidClusteredParticleHandleImp<double,3,1> *)
                                                  pTVar78);
                            if (bVar38) {
                              pIVar59 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                                                  (this_02);
                              pIVar60 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                                                  (pTVar78);
                              pTVar50 = local_e30;
                              if (pIVar60 == pIVar59) goto LAB_14dafdcdd;
                            }
                          }
                        }
                      }
                      goto LAB_14dafde1c;
                    }
                  }
LAB_14dafdcdd:
                  pbVar61 = TGeometryParticlesImp<double,3,0>::HasCollision
                                      ((TGeometryParticlesImp<double,3,0> *)this_02->_padding_,
                                       (int)this_02->_padding_);
                  if ((*pbVar61 != false) || (ForceNoCollisionIntoSQ != 0)) {
                    pFVar62 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                                        ((TGeometryParticlesImp<double,3,0> *)this_02->_padding_,
                                         (int)this_02->_padding_);
                    FVar5.Idx = pFVar62->Idx;
                    pFVar63 = FPendingSpatialInternalDataQueue::Add
                                        ((FPendingSpatialInternalDataQueue *)&pTVar50[0x39].ArrayNum
                                         ,0,FVar5,Add);
                    pFVar63->Operation = Update;
                    ppTVar64 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                                         ((TGeometryParticlesImp<double,3,0> *)this_02->_padding_,
                                          (int)this_02->_padding_);
                    local_df0 = *ppTVar64;
                    pTStack_de8 = this_02;
                    pFVar62 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                                        ((TGeometryParticlesImp<double,3,0> *)this_02->_padding_,
                                         (int)this_02->_padding_);
                    local_de0 = pFVar62->Idx;
                    FStack_ddc.Word2 = 0;
                    FStack_ddc.Word3 = 0;
                    FStack_ddc.Word0 = 0;
                    FStack_ddc.Word1 = 0;
                    FStack_dcc.Word2 = 0;
                    FStack_dcc.Word3 = 0;
                    FStack_dcc.Word0 = 0;
                    FStack_dcc.Word1 = 0;
                    local_dbc = local_dbc & 0xffffff00;
                    if (local_de0 == -1) {
                      bVar38 = UE::Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                          ,0xf76,"CachedUniqueIdx.IsValid()");
                      if (bVar38) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                    }
                    FAccelerationStructureHandle::
                    ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                              (this_02,&FStack_ddc);
                    FAccelerationStructureHandle::
                    ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                              (this_02,&FStack_dcc);
                    local_dbc = CONCAT31(local_dbc._1_3_,1);
                    (pFVar63->AccelerationHandle).ExternalGeometryParticle = local_df0;
                    (pFVar63->AccelerationHandle).GeometryParticleHandle = pTStack_de8;
                    (pFVar63->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_de0;
                    (pFVar63->AccelerationHandle).UnionQueryFilterData.Word0 = FStack_ddc.Word0;
                    (pFVar63->AccelerationHandle).UnionQueryFilterData.Word1 = FStack_ddc.Word1;
                    (pFVar63->AccelerationHandle).UnionQueryFilterData.Word2 = FStack_ddc.Word2;
                    *(ulonglong *)&(pFVar63->AccelerationHandle).UnionQueryFilterData.Word3 =
                         CONCAT44(FStack_dcc.Word0,FStack_ddc.Word3);
                    (pFVar63->AccelerationHandle).UnionSimFilterData.Word1 = FStack_dcc.Word1;
                    (pFVar63->AccelerationHandle).UnionSimFilterData.Word2 = FStack_dcc.Word2;
                    *(ulonglong *)&(pFVar63->AccelerationHandle).UnionSimFilterData.Word3 =
                         CONCAT44(local_dbc,FStack_dcc.Word3);
                    pFVar65 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                                        ((TGeometryParticlesImp<double,3,0> *)this_02->_padding_,
                                         (int)this_02->_padding_);
                    pFVar63->SpatialIdx = *pFVar65;
                    pFVar66 = FPendingSpatialDataQueue::FindOrAdd
                                        ((FPendingSpatialDataQueue *)(local_e30 + 0x3d),FVar5,Add);
                    pTVar74 = (pFVar63->AccelerationHandle).GeometryParticleHandle;
                    (pFVar66->AccelerationHandle).ExternalGeometryParticle =
                         (pFVar63->AccelerationHandle).ExternalGeometryParticle;
                    (pFVar66->AccelerationHandle).GeometryParticleHandle = pTVar74;
                    uVar68 = (pFVar63->AccelerationHandle).UnionQueryFilterData.Word0;
                    uVar42 = (pFVar63->AccelerationHandle).UnionQueryFilterData.Word1;
                    uVar33 = (pFVar63->AccelerationHandle).UnionQueryFilterData.Word2;
                    (pFVar66->AccelerationHandle).CachedUniqueIdx =
                         (FUniqueIdx)(pFVar63->AccelerationHandle).CachedUniqueIdx.Idx;
                    (pFVar66->AccelerationHandle).UnionQueryFilterData.Word0 = uVar68;
                    (pFVar66->AccelerationHandle).UnionQueryFilterData.Word1 = uVar42;
                    (pFVar66->AccelerationHandle).UnionQueryFilterData.Word2 = uVar33;
                    uVar68 = (pFVar63->AccelerationHandle).UnionSimFilterData.Word1;
                    uVar42 = (pFVar63->AccelerationHandle).UnionSimFilterData.Word2;
                    *(undefined8 *)&(pFVar66->AccelerationHandle).UnionQueryFilterData.Word3 =
                         *(undefined8 *)&(pFVar63->AccelerationHandle).UnionQueryFilterData.Word3;
                    (pFVar66->AccelerationHandle).UnionSimFilterData.Word1 = uVar68;
                    (pFVar66->AccelerationHandle).UnionSimFilterData.Word2 = uVar42;
                    *(undefined1 (*) [16])&(pFVar66->AccelerationHandle).UnionSimFilterData.Word3 =
                         *(undefined1 (*) [16])
                          &(pFVar63->AccelerationHandle).UnionSimFilterData.Word3;
                    uVar34 = *(undefined7 *)&pFVar63->field_0x41;
                    pFVar66->Operation = pFVar63->Operation;
                    *(undefined7 *)&pFVar66->field_0x41 = uVar34;
                  }
                }
LAB_14dafde1c:
                uVar68 = (uint)this_02->_padding_;
                lVar73 = this_02->_padding_;
                uVar42 = 0;
                if ((int)uVar68 < *(int *)(lVar73 + 0x5c8)) {
                  uVar42 = ~uVar68 >> 0x1f;
                }
                if (uVar42 == 0) {
                  bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                  ;
                  if (bVar38) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                pTVar74 = *(TGeometryParticleHandleImp<double,3,1> **)
                           (*(longlong *)(lVar73 + 0x5c0) + (longlong)(int)uVar68 * 0x10);
                if (pTVar74 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                  pTVar78 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                  if (2 < *(byte *)((longlong)&pTVar74->_padding_ + 4)) {
                    pTVar78 = pTVar74;
                  }
                  if (pTVar78 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                    lVar73 = pTVar78->_padding_;
                    uVar68 = (uint)pTVar78->_padding_;
                    uVar42 = 0;
                    if ((int)uVar68 < *(int *)(lVar73 + 0x6a0)) {
                      uVar42 = ~uVar68 >> 0x1f;
                    }
                    if (uVar42 == 0) {
                      bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar38) {
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                    }
                    if ((*(byte *)((longlong)(int)uVar68 + *(longlong *)(lVar73 + 0x698)) & 1) != 0)
                    {
                      lVar73 = this_02->_padding_;
                      uVar68 = (uint)this_02->_padding_;
                      uVar42 = 0;
                      if ((int)uVar68 < *(int *)(lVar73 + 0x5e0)) {
                        uVar42 = ~uVar68 >> 0x1f;
                      }
                      if (uVar42 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                      }
                      lVar69 = (longlong)(int)uVar68 * 0x60;
                      lVar73 = *(longlong *)(lVar73 + 0x5d8);
                      local_5c8.Rotation.XY.m128d_f64[0] = *(double *)(lVar69 + lVar73);
                      local_5c8.Rotation.XY.m128d_f64[1] = ((double *)(lVar69 + lVar73))[1];
                      pdVar2 = (double *)(lVar69 + 0x10 + lVar73);
                      local_5c8.Rotation.ZW.m128d_f64[0] = *pdVar2;
                      local_5c8.Rotation.ZW.m128d_f64[1] = pdVar2[1];
                      pdVar2 = (double *)(lVar69 + 0x20 + lVar73);
                      local_5c8.Translation.XY.m128d_f64[0] = *pdVar2;
                      local_5c8.Translation.XY.m128d_f64[1] = pdVar2[1];
                      pdVar2 = (double *)(lVar69 + 0x30 + lVar73);
                      local_5c8.Translation.ZW.m128d_f64[0] = *pdVar2;
                      local_5c8.Translation.ZW.m128d_f64[1] = pdVar2[1];
                      puVar44 = (uint *)(lVar69 + 0x40 + lVar73);
                      local_5c8.Scale3D.XY.m128d_f64[0]._0_4_ = *puVar44;
                      local_5c8.Scale3D.XY.m128d_f64[0]._4_4_ = puVar44[1];
                      local_5c8.Scale3D.XY.m128d_f64[1]._0_4_ = puVar44[2];
                      local_5c8.Scale3D.XY.m128d_f64[1]._4_4_ = puVar44[3];
                      auVar184._0_8_ =
                           (double)CONCAT44(local_5c8.Scale3D.XY.m128d_f64[0]._4_4_ & uVar41,
                                            local_5c8.Scale3D.XY.m128d_f64[0]._0_4_ & uVar67);
                      auVar184._8_4_ = local_5c8.Scale3D.XY.m128d_f64[1]._0_4_ & uVar35;
                      auVar184._12_4_ = local_5c8.Scale3D.XY.m128d_f64[1]._4_4_ & uVar36;
                      puVar44 = (uint *)(lVar69 + 0x50 + lVar73);
                      local_5c8.Scale3D.ZW.m128d_f64[0]._0_4_ = *puVar44;
                      local_5c8.Scale3D.ZW.m128d_f64[0]._4_4_ = puVar44[1];
                      local_5c8.Scale3D.ZW.m128d_f64[1]._0_4_ = puVar44[2];
                      local_5c8.Scale3D.ZW.m128d_f64[1]._4_4_ = puVar44[3];
                      auVar126._8_8_ =
                           -(ulonglong)
                            ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                            (double)CONCAT44(local_5c8.Scale3D.ZW.m128d_f64[1]._4_4_ & uVar36,
                                             local_5c8.Scale3D.ZW.m128d_f64[1]._0_4_ & uVar35));
                      auVar126._0_8_ =
                           -(ulonglong)
                            ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                            (double)CONCAT44(local_5c8.Scale3D.ZW.m128d_f64[0]._4_4_ & uVar41,
                                             local_5c8.Scale3D.ZW.m128d_f64[0]._0_4_ & uVar67));
                      uVar68 = movmskpd((int)lVar69,auVar126);
                      lVar69 = -(ulonglong)
                                ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
                                auVar184._8_8_);
                      auVar9._8_4_ = (int)lVar69;
                      auVar9._0_8_ = -(ulonglong)
                                      ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
                                      auVar184._0_8_);
                      auVar9._12_4_ = (int)((ulonglong)lVar69 >> 0x20);
                      iVar43 = movmskpd((int)lVar73,auVar9);
                      if ((uVar68 & 0x3fffffff) == 0 && iVar43 == 0) {
                        local_378.Rotation.XY.m128d_f64 =
                             UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                        local_378.Rotation.ZW.m128d_f64 =
                             UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                        local_378.Translation.XY.m128d_f64 =
                             UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
                        local_378.Translation.ZW.m128d_f64 =
                             UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
                        local_378.Scale3D.XY.m128d_f64 =
                             UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                        local_378.Scale3D.ZW.m128d_f64 =
                             UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
                      }
                      else {
                        UE::Math::TTransform<double>::InverseFast(&local_5c8,&local_378);
                      }
                      local_438.Rotation.XY.m128d_f64[1]._0_4_ =
                           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
                      local_438.Rotation.XY.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float0001.m128_f32[0];
                      local_438.Rotation.XY.m128d_f64[1]._4_4_ =
                           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                                0x20);
                      local_438.Translation.XY.m128d_f64[0] =
                           (double)GlobalVectorConstants::FloatZero.m128_f32[0];
                      local_438.Translation.XY.m128d_f64[1] =
                           (double)GlobalVectorConstants::FloatZero.m128_f32[1];
                      local_438.Rotation.ZW.m128d_f64[1]._0_4_ =
                           SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
                      local_438.Rotation.ZW.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float0001.m128_f32[2];
                      local_438.Rotation.ZW.m128d_f64[1]._4_4_ =
                           (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                                0x20);
                      local_438.Scale3D.XY.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float1110.m128_f32[0];
                      local_438.Scale3D.XY.m128d_f64[1] =
                           (double)GlobalVectorConstants::Float1110.m128_f32[1];
                      local_438.Translation.ZW.m128d_f64[1]._0_4_ =
                           SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
                      local_438.Translation.ZW.m128d_f64[0] =
                           (double)GlobalVectorConstants::FloatZero.m128_f32[2];
                      local_438.Translation.ZW.m128d_f64[1]._4_4_ =
                           (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >>
                                0x20);
                      local_438.Scale3D.ZW.m128d_f64[1]._0_4_ =
                           SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
                      local_438.Scale3D.ZW.m128d_f64[0] =
                           (double)GlobalVectorConstants::Float1110.m128_f32[2];
                      local_438.Scale3D.ZW.m128d_f64[1]._4_4_ =
                           (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >>
                                0x20);
                      UE::Math::TTransform<double>::Multiply(&local_438,&local_378,&local_3d8);
                      dVar27 = local_438.Translation.XY.m128d_f64[1];
                      dVar26 = local_438.Translation.XY.m128d_f64[0];
                      local_8b0 = local_438.Translation.ZW.m128d_f64[0];
                      pTStack_d28 = (TBitArray<FDefaultBitArrayAllocator> *)
                                    local_438.Translation.ZW.m128d_f64[0];
                      local_8c0 = local_438.Translation.XY.m128d_f64[0];
                      dStack_8b8 = local_438.Translation.XY.m128d_f64[1];
                      lVar73 = pTVar78->_padding_;
                      uVar68 = (uint)pTVar78->_padding_;
                      uVar42 = 0;
                      if ((int)uVar68 < *(int *)(lVar73 + 0x550)) {
                        uVar42 = ~uVar68 >> 0x1f;
                      }
                      if (uVar42 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                      }
                      dVar16 = local_438.Translation.XY.m128d_f64[1];
                      dVar15 = local_438.Translation.XY.m128d_f64[0];
                      lVar73 = *(longlong *)(lVar73 + 0x548);
                      pdVar2 = (double *)(lVar73 + (longlong)(int)uVar68 * 0x18);
                      *pdVar2 = dVar26;
                      pdVar2[1] = dVar27;
                      *(TBitArray<FDefaultBitArrayAllocator> **)
                       (lVar73 + 0x10 + (longlong)(int)uVar68 * 0x18) = pTStack_d28;
                      local_898 = (TBitArray<FDefaultBitArrayAllocator> *)
                                  local_438.Translation.ZW.m128d_f64[0];
                      pTStack_d28 = (TBitArray<FDefaultBitArrayAllocator> *)
                                    local_438.Translation.ZW.m128d_f64[0];
                      local_8a8 = local_438.Translation.XY.m128d_f64[0];
                      dStack_8a0 = local_438.Translation.XY.m128d_f64[1];
                      lVar73 = pTVar78->_padding_;
                      uVar68 = (uint)pTVar78->_padding_;
                      uVar42 = 0;
                      if ((int)uVar68 < *(int *)(lVar73 + 0x30)) {
                        uVar42 = ~uVar68 >> 0x1f;
                      }
                      if (uVar42 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                      }
                      lVar73 = *(longlong *)(lVar73 + 0x28);
                      pdVar2 = (double *)(lVar73 + (longlong)(int)uVar68 * 0x18);
                      *pdVar2 = dVar15;
                      pdVar2[1] = dVar16;
                      *(TBitArray<FDefaultBitArrayAllocator> **)
                       (lVar73 + 0x10 + (longlong)(int)uVar68 * 0x18) = pTStack_d28;
                      lVar73 = pTVar78->_padding_;
                      uVar68 = (uint)pTVar78->_padding_;
                      lVar69 = (longlong)(int)uVar68;
                      fVar185 = (float)local_438.Rotation.XY.m128d_f64[0];
                      uVar42 = 0;
                      if ((int)uVar68 < *(int *)(lVar73 + 0x568)) {
                        uVar42 = ~uVar68 >> 0x1f;
                      }
                      fVar187 = (float)local_438.Rotation.ZW.m128d_f64[0];
                      fVar186 = (float)local_438.Rotation.XY.m128d_f64[1];
                      fVar188 = (float)local_438.Rotation.ZW.m128d_f64[1];
                      if (uVar42 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                      }
                      lVar73 = *(longlong *)(lVar73 + 0x560);
                      *(float *)(lVar73 + lVar69 * 0x10) = fVar185;
                      *(float *)(lVar73 + 4 + lVar69 * 0x10) = fVar186;
                      *(float *)(lVar73 + 8 + lVar69 * 0x10) = fVar187;
                      *(float *)(lVar73 + 0xc + lVar69 * 0x10) = fVar188;
                      lVar73 = pTVar78->_padding_;
                      uVar68 = (uint)pTVar78->_padding_;
                      lVar69 = (longlong)(int)uVar68;
                      fVar185 = (float)local_438.Rotation.XY.m128d_f64[0];
                      uVar42 = 0;
                      if ((int)uVar68 < *(int *)(lVar73 + 0x50)) {
                        uVar42 = ~uVar68 >> 0x1f;
                      }
                      fVar187 = (float)local_438.Rotation.ZW.m128d_f64[0];
                      fVar186 = (float)local_438.Rotation.XY.m128d_f64[1];
                      fVar188 = (float)local_438.Rotation.ZW.m128d_f64[1];
                      if (uVar42 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                      }
                      lVar73 = *(longlong *)(lVar73 + 0x48);
                      *(float *)(lVar73 + lVar69 * 0x10) = fVar185;
                      *(float *)(lVar73 + 4 + lVar69 * 0x10) = fVar186;
                      *(float *)(lVar73 + 8 + lVar69 * 0x10) = fVar187;
                      *(float *)(lVar73 + 0xc + lVar69 * 0x10) = fVar188;
                      local_890._0_8_ = 0;
                      local_890._8_8_ = 0;
                      local_2b8 = local_438.Rotation.XY.m128d_f64[0];
                      dStack_2b0 = local_438.Rotation.XY.m128d_f64[1];
                      local_2a8 = local_438.Rotation.ZW.m128d_f64[0];
                      dStack_2a0 = local_438.Rotation.ZW.m128d_f64[1];
                      local_298 = local_438.Translation.XY.m128d_f64[0];
                      dStack_290 = local_438.Translation.XY.m128d_f64[1];
                      local_288 = local_438.Translation.ZW.m128d_f64[0];
                      dStack_280 = local_438.Translation.ZW.m128d_f64[1];
                      local_278 = local_438.Scale3D.XY.m128d_f64[0];
                      dStack_270 = local_438.Scale3D.XY.m128d_f64[1];
                      local_890._16_8_ = 0;
                      local_268[0] = local_438.Scale3D.ZW.m128d_f64[0];
                      local_268[1] = local_438.Scale3D.ZW.m128d_f64[1];
                      TGeometryParticlesImp<double,3,0>::UpdateWorldSpaceState
                                ((TGeometryParticlesImp<double,3,0> *)pTVar78->_padding_,
                                 (int)pTVar78->_padding_,(TRigidTransform<double,3> *)&local_2b8,
                                 &local_890);
                      lVar73 = pTVar78->_padding_;
                      uVar68 = (uint)pTVar78->_padding_;
                      uVar42 = 0;
                      if ((int)uVar68 < *(int *)(lVar73 + 0x2e0)) {
                        uVar42 = ~uVar68 >> 0x1f;
                      }
                      if (uVar42 == 0) {
                        bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           );
                        if (bVar38) {
                          pcVar8 = (code *)swi(3);
                          (*pcVar8)();
                          return;
                        }
                      }
                      if (*(char *)(*(longlong *)(lVar73 + 0x2d8) + 0xd +
                                   (longlong)(int)uVar68 * 0x10) == '\0') {
                        local_e30 = *(TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_>
                                      **)(lVar6 + 0xbd0);
                        pTVar74 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                        if (1 < *(byte *)((longlong)&pTVar78->_padding_ + 4)) {
                          pTVar74 = pTVar78;
                        }
                        if (pTVar74 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                          bVar38 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                                             ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar74);
                          if (bVar38) {
                            pTVar74 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                            if (2 < *(byte *)((longlong)&pTVar78->_padding_ + 4)) {
                              pTVar74 = pTVar78;
                            }
                            if (pTVar74 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                              pCVar53 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ClusterIds
                                                  ((TPBDRigidClusteredParticleHandleImp<double,3,1>
                                                    *)pTVar74);
                              pTVar74 = (TGeometryParticleHandleImp<double,3,1> *)pCVar53->Id;
                              if (pTVar74 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                                this_06 = (TGeometryParticleHandleImp<double,3,1> *)0x0;
                                if (2 < *(byte *)((longlong)&pTVar74->_padding_ + 4)) {
                                  this_06 = pTVar74;
                                }
                                if (this_06 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
                                  bVar38 = UE::Assert::Private::ExecCheckImplInternal
                                                     (&bGEnsureHasExecuted<_2113888976451403243>,
                                                      false,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\PBDRigidsEvolution.h"
                                                  ,0x215,"false");
                                  param_5 = local_e28;
                                  if (bVar38) {
                                    pcVar8 = (code *)swi(3);
                                    (*pcVar8)();
                                    return;
                                  }
                                }
                                else {
                                  bVar38 = TPBDRigidClusteredParticleHandleImp<double,3,1>::
                                           InternalCluster((
                                                  TPBDRigidClusteredParticleHandleImp<double,3,1> *)
                                                  this_06);
                                  param_5 = local_e28;
                                  if (bVar38) {
                                    pIVar59 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                                                        (pTVar78);
                                    pIVar60 = TGeometryParticleHandleImp<double,3,1>::PhysicsProxy
                                                        (this_06);
                                    param_5 = local_e28;
                                    if (pIVar60 == pIVar59) goto LAB_14dafe511;
                                  }
                                }
                              }
                            }
                            goto LAB_14dafe664;
                          }
                        }
LAB_14dafe511:
                        pbVar61 = TGeometryParticlesImp<double,3,0>::HasCollision
                                            ((TGeometryParticlesImp<double,3,0> *)pTVar78->_padding_
                                             ,(int)pTVar78->_padding_);
                        if ((*pbVar61 != false) ||
                           (param_5 = local_e28, ForceNoCollisionIntoSQ != 0)) {
                          pFVar62 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                                              ((TGeometryParticlesImp<double,3,0> *)
                                               pTVar78->_padding_,(int)pTVar78->_padding_);
                          FVar5.Idx = pFVar62->Idx;
                          pFVar63 = FPendingSpatialInternalDataQueue::Add
                                              ((FPendingSpatialInternalDataQueue *)
                                               &local_e30[0x39].ArrayNum,0,FVar5,Add);
                          pFVar63->Operation = Update;
                          ppTVar64 = TGeometryParticlesImp<double,3,0>::GTGeometryParticle
                                               ((TGeometryParticlesImp<double,3,0> *)
                                                pTVar78->_padding_,(int)pTVar78->_padding_);
                          local_db8 = *ppTVar64;
                          pTStack_db0 = pTVar78;
                          pFVar62 = TGeometryParticlesImp<double,3,0>::UniqueIdx
                                              ((TGeometryParticlesImp<double,3,0> *)
                                               pTVar78->_padding_,(int)pTVar78->_padding_);
                          local_da8 = pFVar62->Idx;
                          FStack_da4.Word2 = 0;
                          FStack_da4.Word3 = 0;
                          FStack_da4.Word0 = 0;
                          FStack_da4.Word1 = 0;
                          FStack_d94.Word2 = 0;
                          FStack_d94.Word3 = 0;
                          FStack_d94.Word0 = 0;
                          FStack_d94.Word1 = 0;
                          local_d84 = local_d84 & 0xffffff00;
                          if (local_da8 == -1) {
                            bVar38 = UE::Assert::Private::ExecCheckImplInternal
                                               (&bGEnsureHasExecuted<_3133560516564217994>,false,
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Chaos\\ParticleHandle.h"
                                                ,0xf76,"CachedUniqueIdx.IsValid()");
                            if (bVar38) {
                              pcVar8 = (code *)swi(3);
                              (*pcVar8)();
                              return;
                            }
                          }
                          FAccelerationStructureHandle::
                          ComputeParticleQueryFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                                    (pTVar78,&FStack_da4);
                          FAccelerationStructureHandle::
                          ComputeParticleSimFilterDataFromShapes<Chaos::TGeometryParticleHandleImp<double,3,1>_>
                                    (pTVar78,&FStack_d94);
                          local_d84 = CONCAT31(local_d84._1_3_,1);
                          (pFVar63->AccelerationHandle).ExternalGeometryParticle = local_db8;
                          (pFVar63->AccelerationHandle).GeometryParticleHandle = pTStack_db0;
                          (pFVar63->AccelerationHandle).CachedUniqueIdx = (FUniqueIdx)local_da8;
                          (pFVar63->AccelerationHandle).UnionQueryFilterData.Word0 =
                               FStack_da4.Word0;
                          (pFVar63->AccelerationHandle).UnionQueryFilterData.Word1 =
                               FStack_da4.Word1;
                          (pFVar63->AccelerationHandle).UnionQueryFilterData.Word2 =
                               FStack_da4.Word2;
                          *(ulonglong *)&(pFVar63->AccelerationHandle).UnionQueryFilterData.Word3 =
                               CONCAT44(FStack_d94.Word0,FStack_da4.Word3);
                          (pFVar63->AccelerationHandle).UnionSimFilterData.Word1 = FStack_d94.Word1;
                          (pFVar63->AccelerationHandle).UnionSimFilterData.Word2 = FStack_d94.Word2;
                          *(ulonglong *)&(pFVar63->AccelerationHandle).UnionSimFilterData.Word3 =
                               CONCAT44(local_d84,FStack_d94.Word3);
                          pFVar65 = TGeometryParticlesImp<double,3,0>::SpatialIdx
                                              ((TGeometryParticlesImp<double,3,0> *)
                                               pTVar78->_padding_,(int)pTVar78->_padding_);
                          pFVar63->SpatialIdx = *pFVar65;
                          pFVar66 = FPendingSpatialDataQueue::FindOrAdd
                                              ((FPendingSpatialDataQueue *)(local_e30 + 0x3d),FVar5,
                                               Add);
                          pTVar74 = (pFVar63->AccelerationHandle).GeometryParticleHandle;
                          (pFVar66->AccelerationHandle).ExternalGeometryParticle =
                               (pFVar63->AccelerationHandle).ExternalGeometryParticle;
                          (pFVar66->AccelerationHandle).GeometryParticleHandle = pTVar74;
                          uVar68 = (pFVar63->AccelerationHandle).UnionQueryFilterData.Word0;
                          uVar42 = (pFVar63->AccelerationHandle).UnionQueryFilterData.Word1;
                          uVar33 = (pFVar63->AccelerationHandle).UnionQueryFilterData.Word2;
                          (pFVar66->AccelerationHandle).CachedUniqueIdx =
                               (FUniqueIdx)(pFVar63->AccelerationHandle).CachedUniqueIdx.Idx;
                          (pFVar66->AccelerationHandle).UnionQueryFilterData.Word0 = uVar68;
                          (pFVar66->AccelerationHandle).UnionQueryFilterData.Word1 = uVar42;
                          (pFVar66->AccelerationHandle).UnionQueryFilterData.Word2 = uVar33;
                          uVar68 = (pFVar63->AccelerationHandle).UnionSimFilterData.Word1;
                          uVar42 = (pFVar63->AccelerationHandle).UnionSimFilterData.Word2;
                          *(undefined8 *)&(pFVar66->AccelerationHandle).UnionQueryFilterData.Word3 =
                               *(undefined8 *)
                                &(pFVar63->AccelerationHandle).UnionQueryFilterData.Word3;
                          (pFVar66->AccelerationHandle).UnionSimFilterData.Word1 = uVar68;
                          (pFVar66->AccelerationHandle).UnionSimFilterData.Word2 = uVar42;
                          *(undefined1 (*) [16])
                           &(pFVar66->AccelerationHandle).UnionSimFilterData.Word3 =
                               *(undefined1 (*) [16])
                                &(pFVar63->AccelerationHandle).UnionSimFilterData.Word3;
                          uVar34 = *(undefined7 *)&pFVar63->field_0x41;
                          pFVar66->Operation = pFVar63->Operation;
                          *(undefined7 *)&pFVar66->field_0x41 = uVar34;
                          param_5 = local_e28;
                        }
                      }
                    }
                  }
                }
LAB_14dafe664:
                pFVar77 = (param_5->AllocatorInstance).Data;
                local_df8 = this_02;
                if ((pFVar77 <= (FScriptContainerElement *)&local_df8) &&
                   ((FScriptContainerElement *)&local_df8 <
                    pFVar77 + (longlong)param_5->ArrayMax * 8)) {
                  bVar38 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     );
                  if (bVar38) {
                    pcVar8 = (code *)swi(3);
                    (*pcVar8)();
                    return;
                  }
                }
                iVar43 = param_5->ArrayNum;
                if (iVar43 == param_5->ArrayMax) {
                  iVar43 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,&param_5->AllocatorInstance,&param_5->ArrayMax);
                }
                param_5->ArrayNum = iVar43 + 1;
                *(TGeometryParticleHandleImp<double,3,1> **)
                 ((param_5->AllocatorInstance).Data + (longlong)iVar43 * 8) = local_df8;
                pTVar50 = local_e08;
              }
            }
          }
        }
        local_e08 = (TArray<FCacheEventTrack::FHandle,TSizedDefaultAllocator<32>_> *)
                    ((longlong)&(pTVar50->AllocatorInstance).Data + 1);
        uVar79 = uVar79 + 1;
      } while ((longlong)local_e08 < (longlong)local_e10);
    }
    FCacheEvaluationResult::~FCacheEvaluationResult(&local_208);
    if (local_d00.EvaluationIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_d00.EvaluationIndices.AllocatorInstance.Data);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d80.SharedReferenceCount.ReferenceController);
  return;
LAB_14dafbc44:
  bVar38 = UE::Assert::Private::ExecCheckImplInternal
                     (&bGEnsureHasExecuted<_4203147934662917819>,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Private\\Chaos\\Adapters\\GeometryCollectionComponentCacheAdapter.cpp"
                      ,0x145,
                      "!ClusterHandle || ClusteredChildHandle->ClusterIds().Id == ClusterHandle");
  if (bVar38) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
LAB_14dafbc6a:
  if (pTVar81 != (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
    pTVar52 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
    if (2 < (byte)pTVar81->field_0xc) {
      pTVar52 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar81;
    }
    FRigidClustering::ReleaseClusterParticlesNoInternalCluster
              ((FRigidClustering *)(*(longlong *)(lVar6 + 0xbd0) + 0x548),&local_258,pTVar52,true);
    local_258.HashSize = 0;
    if (local_258.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_258.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_258.Elements);
  }
LAB_14dafbcc0:
  if (local_d68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d68.AllocatorInstance.Data);
  }
  uStack_cc0 = CONCAT44(uStack_cc0._4_4_,(uint)uStack_cc0 & ~uStack_ccc);
  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
            ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_cd8 + 8));
  bVar38 = TSparseArray<TSparseSetElement<TTuple<Chaos::TPBDRigidClusteredParticleHandleImp<double,3,1>_*,TArray<Chaos::TPBDRigidParticleHandleImp<double,3,1>_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=
                     ((TRangedForIterator *)local_cd8,(TRangedForIterator *)local_878);
  param_5 = local_e28;
  if (!bVar38) goto LAB_14dafbd0d;
  goto LAB_14dafbb10;
}

// Record_PostSolve @ 14daff9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
Chaos::FGeometryCollectionCacheAdapter::Record_PostSolve
          (FGeometryCollectionCacheAdapter *this,UPrimitiveComponent *param_1,
          TTransform<double> *param_2,FPendingFrameWrite *param_3,double param_4)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  undefined1 *puVar2;
  FScriptContainerElement *pFVar3;
  double *pdVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar10;
  int iVar11;
  TPBDRigidParticleHandleImp<double,3,1> *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar12;
  TArray<Chaos::FBreakingData,TSizedDefaultAllocator<32>_> *pTVar13;
  UScriptStruct *pUVar14;
  TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_> *pTVar15;
  TArray<Chaos::FTrailingData,TSizedDefaultAllocator<32>_> *pTVar16;
  FScriptContainerElement *pFVar17;
  code *pcVar18;
  undefined1 auVar19 [16];
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined8 uVar34;
  undefined4 uVar35;
  FName FVar36;
  FGeometryCollectionCacheAdapter *pFVar37;
  TGeometryParticleHandleImp<double,3,1> *this_01;
  TManagedArray<UE::Math::TTransform<double>_> *pTVar38;
  FGeometryCollection *pFVar39;
  bool bVar40;
  int iVar41;
  uint uVar42;
  uint *puVar43;
  FTlsAutoCleanup *pFVar44;
  UGeometryCollectionComponent *pUVar45;
  FGeometryCollection *pFVar46;
  FName *pFVar47;
  UPrimitiveComponent *pUVar48;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar49;
  TGeometryParticleHandleImp<double,3,1> *pTVar50;
  ClusterId *pCVar51;
  bool *pbVar52;
  TVector<double,3> *pTVar53;
  TRotation<double,3> *pTVar54;
  FBreakingEvent *pFVar55;
  FCacheEventTrack *pFVar56;
  UScriptStruct *pUVar57;
  FCollisionEvent *pFVar58;
  UPackage *pUVar59;
  TMatrix<double> *pTVar60;
  ulonglong uVar61;
  TPBDRigidClusteredParticleHandleImp<double,3,1> *this_02;
  ForAnyElementType FVar62;
  longlong lVar63;
  uint uVar64;
  TTransform<double> *pTVar65;
  longlong *plVar66;
  longlong lVar67;
  FScriptContainerElement *pFVar68;
  FBreakingData *pFVar69;
  FGeometryCollectionPhysicsProxy *this_03;
  longlong lVar70;
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined4 uVar87;
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  double dVar95;
  double dVar96;
  undefined1 auVar97 [16];
  undefined1 auStackY_ae8 [32];
  undefined1 local_ab8;
  undefined1 local_ab7;
  undefined1 local_ab6;
  undefined1 local_ab5;
  undefined1 local_ab4 [4];
  uint local_ab0;
  TTransform<double> *local_aa8;
  undefined1 local_aa0 [8];
  FGeometryCollectionCacheAdapter *local_a98;
  ulonglong local_a90;
  TGeometryParticleHandleImp<double,3,1> *local_a88;
  FCachedEventData *local_a80;
  FPendingFrameWrite *local_a78;
  TArray<int,TSizedDefaultAllocator<32>_> local_a70;
  int local_a60 [2];
  TManagedArray<UE::Math::TTransform<double>_> *local_a58;
  longlong *local_a50;
  longlong lStack_a48;
  TTransform<double> *pTStack_a40;
  uint uStack_a38;
  int iStack_a34;
  longlong lStack_a30;
  int local_a28;
  undefined4 uStack_a24;
  FGeometryCollectionPhysicsProxy *local_a20;
  TSharedPtr<FGeometryCollection_const_,1> local_a18;
  undefined **local_a08;
  uint local_a00;
  undefined1 local_9fc;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_9f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_9d8;
  undefined4 local_9b8;
  int local_9b4;
  FGeometryCollectionPhysicsProxy *local_9b0;
  FGeometryCollection *local_9a8;
  FPhysScene_Chaos *local_9a0;
  undefined1 local_998 [12];
  uint uStack_98c;
  TBitArray<FDefaultBitArrayAllocator> *local_988;
  undefined8 uStack_980;
  longlong local_978;
  undefined8 uStack_970;
  longlong *local_968;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_960;
  undefined8 uStack_940;
  code *local_938;
  undefined1 *local_930;
  undefined1 local_928 [24];
  longlong lStack_910;
  longlong lStack_908;
  int local_900;
  undefined4 uStack_8fc;
  TTransform<double> local_8f8;
  FName local_898 [2];
  undefined **local_888;
  int local_880;
  undefined1 local_878 [16];
  double local_868;
  double local_858;
  double dStack_850;
  undefined1 local_848 [16];
  undefined1 local_838 [16];
  double local_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  double local_808;
  double dStack_800;
  double local_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined1 local_7d8 [32];
  longlong local_7b8;
  undefined8 uStack_7b0;
  TRotation<double,3> local_7a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_788;
  TRotation<double,3> local_768;
  undefined **local_748 [24];
  FCollisionEvent local_688;
  undefined1 local_598 [16];
  undefined1 local_588 [72];
  double dStack_540;
  __m128d local_538;
  double local_528;
  double dStack_520;
  undefined1 local_518 [16];
  double local_508;
  double dStack_500;
  undefined1 local_4f8 [16];
  TTransform<double> local_4e8;
  TVector<double>_u_0 local_488;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined1 local_458;
  TVector<double>_u_0 local_450;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  TTransform<double> local_418;
  TTransform<double> local_3b8;
  TTransform<double> local_358;
  TTransform<double> local_2f8;
  TTransform<double> local_298;
  TTransform<double> local_238;
  TTransform<double> local_1d8;
  TMatrix<double> local_178;
  ulonglong local_f8;
  undefined8 uVar9;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_ae8;
  local_aa8 = param_2;
  local_a98 = this;
  local_a78 = param_3;
  puVar43 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_930 = local_aa0;
  local_938 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar44 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_938,puVar43);
  if ((*(int *)(pFVar44 + 2) < 1) &&
     (bVar40 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3522308889972310308>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                          ,0x124,"IsInPhysicsThreadContext()"), bVar40)) {
    pcVar18 = (code *)swi(3);
    (*pcVar18)();
    return;
  }
  pUVar45 = CastChecked<UGeometryCollectionComponent,UPrimitiveComponent>(param_1);
  this_03 = pUVar45->PhysicsProxy;
  if ((this_03 != (FGeometryCollectionPhysicsProxy *)0x0) &&
     (uVar7 = ((uint)((ulonglong)this_03 >> 0x14) & 0xffff ^ (uint)((ulonglong)this_03 >> 4)) *
              -0x7a143595, uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb, local_a20 = this_03,
     local_9b0 = this_03,
     iVar41 = TSet<TTuple<IPhysicsProxyBase_*,Chaos::FCachedEventData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,Chaos::FCachedEventData,0>,FDefaultSetAllocator>
              ::FindIndexByHash<IPhysicsProxyBase_const_*>
                        ((TSet<TTuple<IPhysicsProxyBase_*,Chaos::FCachedEventData>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,Chaos::FCachedEventData,0>,FDefaultSetAllocator>
                          *)&this->CachedData,uVar7 >> 0x10 ^ uVar7,(IPhysicsProxyBase **)&local_9b0
                        ), iVar41 != -1)) {
    UE::Math::TTransform<double>::Inverse(&(this_03->Parameters).WorldTransform,&local_8f8);
    local_a80 = TMapBase<IPhysicsProxyBase_*,Chaos::FCachedEventData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,Chaos::FCachedEventData,0>_>
                ::FindChecked((TMapBase<IPhysicsProxyBase_*,Chaos::FCachedEventData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,Chaos::FCachedEventData,0>_>
                               *)&this->CachedData,(IPhysicsProxyBase *)this_03);
    local_a18.SharedReferenceCount.ReferenceController =
         (this_03->Parameters).RestCollectionShared.SharedReferenceCount.ReferenceController;
    local_a18.Object = (this_03->Parameters).RestCollectionShared.Object;
    lVar63 = *(longlong *)&this_03->field_0x8;
    if (local_a18.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_a18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (((local_a18.Object != (FGeometryCollection *)0x0) && (lVar63 != 0)) &&
       (local_9a0 = *(FPhysScene_Chaos **)(lVar63 + 800), local_9a0 != (FPhysScene_Chaos *)0x0)) {
      pFVar46 = TSharedPtr<FGeometryCollection_const_,1>::operator->(&local_a18);
      FVar36 = FTransformCollection::TransformGroup;
      pFVar47 = ::FName::FName(local_898,"MassToLocal");
      local_a58 = FManagedArrayCollection::GetAttribute<UE::Math::TTransform<double>_>
                            ((FManagedArrayCollection *)pFVar46,*pFVar47,FVar36);
      pFVar46 = TSharedPtr<FGeometryCollection_const_,1>::operator->(&local_a18);
      local_9a8 = TSharedPtr<FGeometryCollection_const_,1>::operator->(&local_a18);
      lVar63 = *(longlong *)(lVar63 + 0xbd0);
      UE::Math::TTransform<double>::Inverse(local_aa8,&local_238);
      local_ab0 = FManagedArrayCollection::NumElements
                            ((FManagedArrayCollection *)&this_03->PhysicsThreadCollection,
                             FTransformCollection::TransformGroup);
      local_a88 = (TGeometryParticleHandleImp<double,3,1> *)&param_3->PendingParticleData;
      if ((int)local_ab0 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_ab0);
      }
      if ((param_3->PendingParticleData).ArrayMax < (int)local_ab0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,0x10,local_ab0,(ForAnyElementType *)local_a88,
                   (param_3->PendingParticleData).ArrayNum,&(param_3->PendingParticleData).ArrayMax)
        ;
      }
      local_588._28_4_ = 0x80;
      local_598._0_8_ = (FScriptContainerElement *)0x0;
      local_598._8_8_ = 0;
      local_588._16_8_ = (ForElementType<unsigned_int>)0x0;
      local_588._24_4_ = 0;
      local_588._36_4_ = 0;
      local_588._48_8_ = (ForElementType<FSetElementId>)0x0;
      local_588._56_4_ = 0;
      local_588._32_4_ = -1;
      uVar7 = *(uint *)(lVar63 + 0x8c8);
      if (uVar7 != 0) {
        if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidSetNum((longlong)(int)uVar7);
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_598,uVar7);
        if (uVar7 < 4) {
          iVar41 = 1;
        }
        else {
          uVar61 = (ulonglong)((uVar7 >> 1) + 7) * 2 + 1;
          lVar67 = 0x3f;
          if (uVar61 != 0) {
            for (; uVar61 >> lVar67 == 0; lVar67 = lVar67 + -1) {
            }
          }
          local_9b8 = (undefined4)lVar67;
          iVar41 = 1 << ((byte)lVar67 & 0x1f);
        }
        if ((local_588._56_4_ == 0) || ((int)local_588._56_4_ < iVar41)) {
          local_588._56_4_ = iVar41;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_598);
        }
      }
      local_a70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a70.ArrayNum = 0;
      local_a70.ArrayMax = 0;
      uVar7 = *(uint *)(lVar63 + 0x8c8);
      if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
      }
      if (0 < (int)uVar7) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar7,&local_a70.AllocatorInstance,0,&local_a70.ArrayMax);
      }
      pFVar39 = local_9a8;
      uVar61 = (ulonglong)*(int *)(lVar63 + 0x8c8);
      lVar67 = *(longlong *)(lVar63 + 0x8c0);
      local_a90 = CONCAT44(local_a90._4_4_,*(int *)(lVar63 + 0x8c8));
      pTVar65 = (TTransform<double> *)(uVar61 * 0xc0 + lVar67);
      local_aa8 = pTVar65;
      while( true ) {
        uVar7 = 0;
        if (*(int *)(lVar63 + 0x8c8) != (int)uVar61) {
          local_ab8 = 0;
          `TCheckedPointerIterator<Chaos::FBreakingData_const_,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(&local_ab8);
        }
        this_01 = local_a88;
        dVar21 = _UNK_150689688;
        dVar24 = ___xmm_3ff00000000000003ff0000000000000;
        dVar20 = _UNK_150689518;
        dVar22 = ___xmm_00000000000000003ff0000000000000;
        if ((TTransform<double> *)lVar67 == pTVar65) break;
        pUVar48 = FPhysScene_Chaos::GetOwningComponent<UPrimitiveComponent>
                            (local_9a0,*(IPhysicsProxyBase **)(lVar67 + 8));
        if (((pUVar48 != (UPrimitiveComponent *)0x0) &&
            (*(int *)&(*(FGeometryCollectionPhysicsProxy **)(lVar67 + 8))->field_0x1c == 2)) &&
           (*(FGeometryCollectionPhysicsProxy **)(lVar67 + 8) == this_03)) {
          uVar42 = *(uint *)(lVar67 + 0xb8);
          uVar64 = 0;
          if ((int)uVar42 < (int)pFVar46->_padding_) {
            uVar64 = ~uVar42 >> 0x1f;
          }
          if ((uVar64 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_598,&local_9b4,
                     (bool *)(pFVar46->_padding_ + (longlong)(int)uVar42 * 4));
          uVar42 = *(uint *)(lVar67 + 0xb8);
          uVar64 = 0;
          if ((int)uVar42 < (int)pFVar46->_padding_) {
            uVar64 = ~uVar42 >> 0x1f;
          }
          if ((uVar64 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          uVar42 = *(uint *)(pFVar46->_padding_ + (longlong)(int)uVar42 * 4);
          if ((int)uVar42 < (int)pFVar39->_padding_) {
            uVar7 = ~uVar42 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          local_9f8._padding_._0_4_ = 0;
          plVar66 = (longlong *)((longlong)(int)uVar42 * 0x50 + pFVar39->_padding_);
          local_9f8._padding_._4_4_ = 1;
          local_9f8.UnvisitedBitMask = 0xffffffff;
          local_9f8.CurrentBitIndex = 0;
          local_9f8.BaseBitIndex = 0;
          pTVar1 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar66 + 2);
          local_9f8.Array = pTVar1;
          if ((int)plVar66[5] != 0) {
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_9f8);
          }
          unique0x10002366 =
               (TBitArray<FDefaultBitArrayAllocator> *)
               CONCAT44(local_9f8._padding_._4_4_,(undefined4)local_9f8._padding_);
          uStack_980 = CONCAT44(local_9f8.CurrentBitIndex,local_9f8.UnvisitedBitMask);
          local_978 = CONCAT44(local_9f8._28_4_,local_9f8.BaseBitIndex);
          local_900 = (int)plVar66[1] - *(int *)((longlong)plVar66 + 0x34);
          local_928._16_8_ = local_9f8.Array;
          uStack_970._4_4_ = uStack_8fc;
          uStack_970._0_4_ = local_900;
          local_988 = local_9f8.Array;
          local_998._0_8_ = plVar66;
          local_928._0_8_ = plVar66;
          local_928._8_8_ = unique0x10002366;
          lStack_910 = uStack_980;
          lStack_908 = local_978;
          pTVar49 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                    TConstSetBitIterator<FDefaultBitArrayAllocator>
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_928,pTVar1,
                               (int)plVar66[5]);
          lStack_a48 = pTVar49->_padding_;
          pTStack_a40 = (TTransform<double> *)pTVar49->Array;
          uVar31 = pTVar49->UnvisitedBitMask;
          uVar32 = pTVar49->CurrentBitIndex;
          uVar34 = pTVar49->Array;
          uVar35 = pTVar49->UnvisitedBitMask;
          local_7d8._24_4_ = uVar35;
          local_7d8._16_8_ = uVar34;
          lStack_a30 = *(longlong *)&pTVar49->BaseBitIndex;
          local_a28 = (int)plVar66[1] - *(int *)((longlong)plVar66 + 0x34);
          local_7d8._28_4_ = uVar32;
          uStack_7b0._4_4_ = uStack_a24;
          uStack_7b0._0_4_ = local_a28;
          local_a50 = plVar66;
          uStack_a38 = uVar31;
          iStack_a34 = uVar32;
          local_7d8._0_8_ = plVar66;
          local_7d8._8_8_ = lStack_a48;
          local_7b8 = lStack_a30;
          bVar40 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForConstIterator::operator!=
                             ((TRangedForConstIterator *)local_998,
                              (TRangedForConstIterator *)local_7d8);
          pTVar65 = local_aa8;
          if (bVar40) {
            do {
              local_a60[0] = *(int *)(*(longlong *)local_998._0_8_ +
                                     (longlong)uStack_980._4_4_ * 0xc);
              TArray<int,TSizedDefaultAllocator<32>_>::AddUniqueImpl<int_const_&>
                        (&local_a70,local_a60);
              uStack_980 = CONCAT44(uStack_980._4_4_,(uint)uStack_980 & ~uStack_98c);
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                        ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_998 + 8));
              bVar40 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                       ::TRangedForConstIterator::operator!=
                                 ((TRangedForConstIterator *)local_998,
                                  (TRangedForConstIterator *)local_7d8);
              pTVar65 = local_aa8;
            } while (bVar40);
          }
        }
        uVar61 = local_a90 & 0xffffffff;
        lVar67 = lVar67 + 0xc0;
      }
      if (0 < (int)local_ab0) {
        local_a90 = 0;
        local_aa8 = (TTransform<double> *)0x0;
        do {
          uVar61 = local_a90;
          pTVar65 = local_aa8;
          pTVar50 = (TGeometryParticleHandleImp<double,3,1> *)
                    FGeometryCollectionPhysicsProxy::GetParticle_Internal(this_03,uVar7);
          local_a88 = pTVar50;
          if (pTVar50 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
            pCVar51 = TPBDRigidClusteredParticleHandleImp<double,3,1>::ClusterIds
                                ((TPBDRigidClusteredParticleHandleImp<double,3,1> *)pTVar50);
            this_00 = pCVar51->Id;
            if (this_00 == (TPBDRigidParticleHandleImp<double,3,1> *)0x0) {
LAB_14db000a4:
              bVar40 = false;
            }
            else {
              this_02 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0;
              if (2 < (byte)this_00->field_0xc) {
                this_02 = (TPBDRigidClusteredParticleHandleImp<double,3,1> *)this_00;
              }
              if (((this_02 == (TPBDRigidClusteredParticleHandleImp<double,3,1> *)0x0) ||
                  (bVar40 = TPBDRigidClusteredParticleHandleImp<double,3,1>::InternalCluster
                                      (this_02), !bVar40)) ||
                 (bVar40 = TPBDRigidParticleHandleImp<double,3,1>::Disabled(this_00), bVar40))
              goto LAB_14db000a4;
              bVar40 = true;
            }
            pbVar52 = TPBDRigidParticleHandleImp<double,3,1>::Disabled
                                ((TPBDRigidParticleHandleImp<double,3,1> *)pTVar50);
            if ((*pbVar52 == false) || (bVar40)) {
              TArray<FPendingParticleWrite,TSizedDefaultAllocator<32>_>::AddDefaulted
                        ((TArray<FPendingParticleWrite,TSizedDefaultAllocator<32>_> *)this_01);
              iVar41 = (int)this_01->_padding_;
              uVar64 = iVar41 - 1;
              uVar42 = 0;
              if ((int)uVar64 < iVar41) {
                uVar42 = ~uVar64 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar40)) {
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pTVar38 = local_a58;
              lVar67 = (longlong)(int)this_01->_padding_;
              lVar63 = this_01->_padding_;
              *(uint *)(lVar63 + -0x90 + lVar67 * 0x90) = uVar7;
              uVar42 = 0;
              if ((int)uVar7 < *(int *)&local_a58->field_0x18) {
                uVar42 = ~uVar7 >> 0x1f;
              }
              if ((uVar42 == 0) &&
                 (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar40)) {
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              pTVar65 = UE::Math::TTransform<double>::Inverse
                                  ((TTransform<double> *)
                                   ((longlong)local_aa8 + *(longlong *)&pTVar38->field_0x10),
                                   &local_1d8);
              pTVar53 = TParticles<double,3>::GetX
                                  ((TParticles<double,3> *)pTVar50->_padding_,
                                   (int)pTVar50->_padding_);
              pTVar54 = TGeometryParticleHandleImp<double,3,1>::GetR(local_a88,&local_7a8);
              local_2f8.Rotation.ZW.m128d_f64[0] = *(double *)&pTVar54->field_0x10;
              local_2f8.Rotation.ZW.m128d_f64[1] = *(double *)&pTVar54->field_0x18;
              local_2f8.Rotation.XY.m128d_f64[0] = *(double *)pTVar54;
              local_2f8.Rotation.XY.m128d_f64[1] = *(double *)&pTVar54->field_0x8;
              local_2f8.Translation.XY.m128d_f64[0] = *(double *)pTVar53;
              local_2f8.Translation.XY.m128d_f64[1] = *(double *)&pTVar53->field_0x8;
              local_2f8.Translation.ZW.m128d_f64[0] = *(double *)&pTVar53->field_0x10;
              local_418.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_418.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_418.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_2f8.Translation.ZW.m128d_f64[1] = 0.0;
              local_418.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_418.Translation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              local_418.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_418.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_418.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_418.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_418.Scale3D.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_418.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_418.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_418.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_2f8.Scale3D.XY.m128d_f64[0] = dVar24;
              local_2f8.Scale3D.XY.m128d_f64[1] = dVar21;
              local_418.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_418.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_418.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              local_2f8.Scale3D.ZW.m128d_f64[0] = dVar22;
              local_2f8.Scale3D.ZW.m128d_f64[1] = dVar20;
              UE::Math::TTransform<double>::Multiply(&local_418,pTVar65,&local_2f8);
              local_4e8.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_4e8.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_4e8.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_4e8.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_4e8.Translation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              local_4e8.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_4e8.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_4e8.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_4e8.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_4e8.Scale3D.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_4e8.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_4e8.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_4e8.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_4e8.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_4e8.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_4e8.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              UE::Math::TTransform<double>::Multiply(&local_4e8,&local_418,&local_238);
              pdVar4 = (double *)(lVar63 + -0x80 + lVar67 * 0x90);
              *pdVar4 = local_4e8.Rotation.XY.m128d_f64[0];
              pdVar4[1] = local_4e8.Rotation.XY.m128d_f64[1];
              pdVar4 = (double *)(lVar63 + -0x70 + lVar67 * 0x90);
              *pdVar4 = local_4e8.Rotation.ZW.m128d_f64[0];
              pdVar4[1] = local_4e8.Rotation.ZW.m128d_f64[1];
              pdVar4 = (double *)(lVar63 + -0x60 + lVar67 * 0x90);
              *pdVar4 = local_4e8.Translation.XY.m128d_f64[0];
              pdVar4[1] = local_4e8.Translation.XY.m128d_f64[1];
              pdVar4 = (double *)(lVar63 + -0x50 + lVar67 * 0x90);
              *pdVar4 = local_4e8.Translation.ZW.m128d_f64[0];
              pdVar4[1] = local_4e8.Translation.ZW.m128d_f64[1];
              pdVar4 = (double *)(lVar63 + -0x40 + lVar67 * 0x90);
              *pdVar4 = local_4e8.Scale3D.XY.m128d_f64[0];
              pdVar4[1] = local_4e8.Scale3D.XY.m128d_f64[1];
              *(double (*) [2])(lVar63 + -0x30 + lVar67 * 0x90) = local_4e8.Scale3D.ZW.m128d_f64;
              pTVar65 = local_aa8;
              uVar61 = local_a90;
            }
            for (FVar62.Data = local_a70.AllocatorInstance.Data;
                FVar62.Data != local_a70.AllocatorInstance.Data + (longlong)local_a70.ArrayNum * 4;
                FVar62.Data = FVar62.Data + 4) {
              if (*(uint *)FVar62.Data == uVar7) {
                local_a08 = &___7FEnableStateEvent__6B_;
                local_9fc = 1;
                local_a00 = uVar7;
                pFVar56 = FPendingFrameWrite::FindOrAddEventTrack<FEnableStateEvent>
                                    (local_a78,FEnableStateEvent::EventName);
                if ((pFVar56->Struct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
                  if (1 < (byte)LogChaosCache._0_1_) {
                    UE::Logging::Private::BasicLog<2>
                              ((FStaticBasicLogRecord *)
                               &`public:_void___cdecl_FCacheEventTrack::PushEvent<FEnableStateEvent>(float,FEnableStateEvent_const&___ptr64)___ptr64'
                                ::__l6::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
                  }
                }
                else {
                  pUVar57 = FEnableStateEvent::StaticStruct();
                  pUVar14 = (pFVar56->Struct).field0_0x0.DebugPtr;
                  if (pUVar14 == (UScriptStruct *)0x0) {
                    bVar40 = pUVar57 == (UScriptStruct *)0x0;
                  }
                  else {
                    bVar40 = pUVar14 == pUVar57;
                  }
                  if ((!bVar40) &&
                     (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                         ("T::StaticStruct() == Struct",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Public\\Chaos\\CacheEvents.h"
                                          ,0x59,L""), bVar40)) {
                    pcVar18 = (code *)swi(3);
                    (*pcVar18)();
                    return;
                  }
                  FCacheEventTrack::PushEventInternal(pFVar56,(float)param_4,&local_a08);
                }
                local_a08 = &___7FCacheEventBase__6B_;
                break;
              }
            }
          }
          local_a90 = uVar61 + 1;
          local_aa8 = (TTransform<double> *)((longlong)pTVar65 + 0x60);
          uVar7 = uVar7 + 1;
        } while ((int)uVar7 < (int)local_ab0);
      }
      local_9d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_588;
      local_9d8._padding_._0_4_ = 0;
      local_9d8._padding_._4_4_ = 1;
      local_9d8.UnvisitedBitMask = 0xffffffff;
      local_9d8.CurrentBitIndex = 0;
      local_9d8.BaseBitIndex = 0;
      if (local_588._24_4_ != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_9d8);
      }
      lStack_a48 = CONCAT44(local_9d8._padding_._4_4_,(undefined4)local_9d8._padding_);
      local_a50 = (longlong *)local_598;
      lStack_a30._4_4_ = local_9d8._28_4_;
      lStack_a30._0_4_ = local_9d8.BaseBitIndex;
      local_a28 = local_598._8_4_ - local_588._36_4_;
      pTStack_a40 = (TTransform<double> *)local_9d8.Array;
      uStack_a38 = local_9d8.UnvisitedBitMask;
      iStack_a34 = local_9d8.CurrentBitIndex;
      TStack_960.CurrentBitIndex = local_9d8.CurrentBitIndex;
      TStack_960.UnvisitedBitMask = local_9d8.UnvisitedBitMask;
      uStack_940 = CONCAT44(uStack_a24,local_a28);
      TStack_960.Array = local_9d8.Array;
      local_968 = local_a50;
      TStack_960._padding_ = lStack_a48;
      TStack_960._24_8_ = lStack_a30;
      pTVar49 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_788,(TBitArray<FDefaultBitArrayAllocator> *)local_588,
                           local_588._24_4_);
      auVar73 = ___xmm_7fffffffffffffff7fffffffffffffff;
      lStack_a48 = pTVar49->_padding_;
      local_aa8 = (TTransform<double> *)pTVar49->Array;
      uVar6 = pTVar49->UnvisitedBitMask;
      uVar7 = pTVar49->CurrentBitIndex;
      uVar8 = pTVar49->BaseBitIndex;
      uVar10 = *(undefined4 *)&pTVar49->field_0x1c;
      uVar9 = CONCAT44(uVar10,uVar8);
      local_ab0 = uVar7;
      pTStack_a40 = local_aa8;
      uStack_a38 = uVar6;
      iStack_a34 = uVar7;
      lStack_a30 = uVar9;
      while( true ) {
        plVar66 = local_968;
        if ((int)local_968[1] - *(int *)((longlong)local_968 + 0x34) != (int)uStack_940) {
          local_ab7 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_ab7);
        }
        pFVar37 = local_a98;
        if (((TStack_960.CurrentBitIndex == uVar7) &&
            ((TTransform<double> *)TStack_960.Array == local_aa8)) &&
           (plVar66 == (longlong *)local_598)) break;
        uVar42 = *(uint *)(*plVar66 + (longlong)TStack_960.CurrentBitIndex * 0xc);
        if ((-1 < (int)uVar42) && ((int)uVar42 < (this_03->FromTransformToParticleIndex).ArrayNum))
        {
          uVar7 = 0;
          if ((int)uVar42 < (this_03->FromTransformToParticleIndex).ArrayNum) {
            uVar7 = ~uVar42 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar40)) {
            pcVar18 = (code *)swi(3);
            (*pcVar18)();
            return;
          }
          uVar64 = *(uint *)((this_03->FromTransformToParticleIndex).AllocatorInstance.Data +
                            (longlong)(int)uVar42 * 4);
          uVar7 = local_ab0;
          if ((-1 < (int)uVar64) && ((int)uVar64 < (this_03->SolverParticleHandles).ArrayNum)) {
            uVar7 = 0;
            if ((int)uVar64 < (this_03->SolverParticleHandles).ArrayNum) {
              uVar7 = ~uVar64 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar40)) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            local_a88 = *(TGeometryParticleHandleImp<double,3,1> **)
                         ((this_03->SolverParticleHandles).AllocatorInstance.Data +
                         (longlong)(int)uVar64 * 8);
            uVar7 = local_ab0;
            if (local_a88 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
              TArray<FPendingParticleWrite,TSizedDefaultAllocator<32>_>::AddDefaulted
                        ((TArray<FPendingParticleWrite,TSizedDefaultAllocator<32>_> *)this_01);
              iVar41 = (int)this_01->_padding_;
              uVar64 = iVar41 - 1;
              uVar7 = 0;
              if ((int)uVar64 < iVar41) {
                uVar7 = ~uVar64 >> 0x1f;
              }
              if (uVar7 == 0) {
                uVar64 = 0x506109c0;
                bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar40) {
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
              }
              lVar67 = (longlong)(int)this_01->_padding_;
              lVar63 = this_01->_padding_;
              *(uint *)(lVar63 + -0x90 + lVar67 * 0x90) = uVar42;
              uVar7 = 0;
              if ((int)uVar42 < *(int *)&local_a58->field_0x18) {
                uVar7 = ~uVar42 >> 0x1f;
              }
              if (uVar7 == 0) {
                uVar64 = 0x506109c0;
                bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar40) {
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
              }
              pTVar65 = (TTransform<double> *)
                        ((longlong)(int)uVar42 * 0x60 + *(longlong *)&local_a58->field_0x10);
              auVar71._8_8_ =
                   -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
                    (double)CONCAT44(*(uint *)((longlong)(pTVar65->Scale3D).ZW.m128d_f64 + 0xc) &
                                     auVar73._12_4_,
                                     *(uint *)((pTVar65->Scale3D).ZW.m128d_f64 + 1) & auVar73._8_4_)
                    );
              auVar71._0_8_ =
                   -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44(*(uint *)((longlong)(pTVar65->Scale3D).ZW.m128d_f64 + 4) &
                                     auVar73._4_4_,
                                     *(uint *)(pTVar65->Scale3D).ZW.m128d_f64 & auVar73._0_4_));
              auVar88._0_8_ =
                   (double)CONCAT44(*(uint *)((longlong)(pTVar65->Scale3D).XY.m128d_f64 + 4) &
                                    auVar73._4_4_,
                                    *(uint *)(pTVar65->Scale3D).XY.m128d_f64 & auVar73._0_4_);
              auVar88._8_4_ = *(uint *)((pTVar65->Scale3D).XY.m128d_f64 + 1) & auVar73._8_4_;
              auVar88._12_4_ =
                   *(uint *)((longlong)(pTVar65->Scale3D).XY.m128d_f64 + 0xc) & auVar73._12_4_;
              uVar7 = movmskpd(uVar64,auVar71);
              lVar70 = -(ulonglong)
                        ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] < auVar88._8_8_);
              auVar19._8_4_ = (int)lVar70;
              auVar19._0_8_ =
                   -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] < auVar88._0_8_);
              auVar19._12_4_ = (int)((ulonglong)lVar70 >> 0x20);
              iVar41 = movmskpd((int)local_a58,auVar19);
              if ((uVar7 & 0x3fffffff) == 0 && iVar41 == 0) {
                local_3b8.Rotation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
                local_3b8.Rotation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
                local_3b8.Translation.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
                local_3b8.Translation.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
                local_3b8.Scale3D.XY.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
                local_3b8.Scale3D.ZW.m128d_f64 =
                     UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
              }
              else {
                UE::Math::TTransform<double>::InverseFast(pTVar65,&local_3b8);
              }
              pTVar50 = local_a88;
              pTVar53 = TParticles<double,3>::GetX
                                  ((TParticles<double,3> *)local_a88->_padding_,
                                   (int)local_a88->_padding_);
              pTVar54 = TGeometryParticleHandleImp<double,3,1>::GetR(pTVar50,&local_768);
              local_298.Rotation.ZW.m128d_f64[0] = *(double *)&pTVar54->field_0x10;
              local_298.Rotation.ZW.m128d_f64[1] = *(double *)&pTVar54->field_0x18;
              local_298.Rotation.XY.m128d_f64[0] = *(double *)pTVar54;
              local_298.Rotation.XY.m128d_f64[1] = *(double *)&pTVar54->field_0x8;
              local_298.Translation.XY.m128d_f64[0] = *(double *)pTVar53;
              local_298.Translation.XY.m128d_f64[1] = *(double *)&pTVar53->field_0x8;
              local_298.Translation.ZW.m128d_f64[0] = *(double *)&pTVar53->field_0x10;
              local_358.Rotation.XY.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_358.Rotation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[0];
              local_358.Rotation.XY.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_298.Translation.ZW.m128d_f64[1] = 0.0;
              local_358.Translation.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              local_358.Translation.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              local_358.Rotation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_358.Rotation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_358.Rotation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_358.Scale3D.XY.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[0];
              local_358.Scale3D.XY.m128d_f64[1] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_358.Translation.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_358.Translation.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_358.Translation.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_298.Scale3D.XY.m128d_f64[0] = dVar24;
              local_298.Scale3D.XY.m128d_f64[1] = dVar21;
              local_358.Scale3D.ZW.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_358.Scale3D.ZW.m128d_f64[0] =
                   (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_358.Scale3D.ZW.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              local_298.Scale3D.ZW.m128d_f64[0] = dVar22;
              local_298.Scale3D.ZW.m128d_f64[1] = dVar20;
              UE::Math::TTransform<double>::Multiply(&local_358,&local_3b8,&local_298);
              unique0x10000942 = SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
              local_588._64_8_ = (double)GlobalVectorConstants::Float0001.m128_f32[0];
              unique0x10000946 =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
              local_528 = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
              dStack_520 = (double)GlobalVectorConstants::FloatZero.m128_f32[1];
              local_538.m128d_f64[1]._0_4_ =
                   SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
              local_538.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
              local_538.m128d_f64[1]._4_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
              local_508 = (double)GlobalVectorConstants::Float1110.m128_f32[0];
              dStack_500 = (double)GlobalVectorConstants::Float1110.m128_f32[1];
              local_518._8_4_ = SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
              local_518._0_8_ = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
              local_518._12_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
              local_4f8._8_4_ = SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
              local_4f8._0_8_ = (double)GlobalVectorConstants::Float1110.m128_f32[2];
              local_4f8._12_4_ =
                   (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
              UE::Math::TTransform<double>::Multiply
                        ((TTransform<double> *)(local_588 + 0x40),&local_358,&local_238);
              pdVar4 = (double *)(lVar63 + -0x80 + lVar67 * 0x90);
              *pdVar4 = (double)local_588._64_8_;
              pdVar4[1] = dStack_540;
              pdVar4 = (double *)(lVar63 + -0x70 + lVar67 * 0x90);
              *pdVar4 = local_538.m128d_f64[0];
              pdVar4[1] = local_538.m128d_f64[1];
              pdVar4 = (double *)(lVar63 + -0x60 + lVar67 * 0x90);
              *pdVar4 = local_528;
              pdVar4[1] = dStack_520;
              puVar5 = (undefined8 *)(lVar63 + -0x50 + lVar67 * 0x90);
              *puVar5 = local_518._0_8_;
              puVar5[1] = local_518._8_8_;
              pdVar4 = (double *)(lVar63 + -0x40 + lVar67 * 0x90);
              *pdVar4 = local_508;
              pdVar4[1] = dStack_500;
              *(undefined1 (*) [16])(lVar63 + -0x30 + lVar67 * 0x90) = local_4f8;
              *(undefined1 *)(lVar63 + -0x20 + lVar67 * 0x90) = 1;
              uVar7 = local_ab0;
            }
          }
        }
        TStack_960.UnvisitedBitMask = TStack_960.UnvisitedBitMask & ~TStack_960._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_960);
      }
      if ((((this_03->Parameters).bGenerateBreakingData) ||
          ((this_03->Parameters).bGenerateGlobalBreakingData)) &&
         ((local_a98->BreakingDataArray !=
           (TArray<Chaos::FBreakingData,TSizedDefaultAllocator<32>_> *)0x0 &&
          (pTVar12 = local_a80->ProxyBreakingDataIndices,
          pTVar12 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)))) {
        pFVar68 = (pTVar12->AllocatorInstance).Data;
        iVar41 = pTVar12->ArrayNum;
        pFVar3 = pFVar68 + (longlong)iVar41 * 4;
LAB_14db009a0:
        do {
          if (pTVar12->ArrayNum != iVar41) {
            local_ab6 = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_ab6);
          }
          this_03 = local_a20;
          if (pFVar68 == pFVar3) break;
          iVar11 = *(int *)pFVar68;
          if ((-1 < iVar11) && (pTVar13 = pFVar37->BreakingDataArray, iVar11 < pTVar13->ArrayNum)) {
            if ((iVar11 < 0) &&
               (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar40)) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            pFVar69 = (FBreakingData *)((pTVar13->AllocatorInstance).Data + (longlong)iVar11 * 0xc0)
            ;
            iVar11 = pFVar69->TransformGroupIndex;
            if (-1 < iVar11) {
              pFVar55 = FBreakingEvent::FBreakingEvent
                                  ((FBreakingEvent *)local_748,iVar11,pFVar69,&local_8f8);
              pFVar56 = FPendingFrameWrite::FindOrAddEventTrack<FBreakingEvent>
                                  (local_a78,FBreakingEvent::EventName);
              if ((pFVar56->Struct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
                if (1 < (byte)LogChaosCache._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            ((FStaticBasicLogRecord *)
                             &`public:_void___cdecl_FCacheEventTrack::PushEvent<FBreakingEvent>(float,FBreakingEvent_const&___ptr64)___ptr64'
                              ::__l6::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
                  pFVar68 = pFVar68 + 4;
                  local_748[0] = &___7FCacheEventBase__6B_;
                  goto LAB_14db009a0;
                }
              }
              else {
                pUVar57 = FBreakingEvent::StaticStruct();
                pUVar14 = (pFVar56->Struct).field0_0x0.DebugPtr;
                if (pUVar14 == (UScriptStruct *)0x0) {
                  bVar40 = pUVar57 == (UScriptStruct *)0x0;
                }
                else {
                  bVar40 = pUVar14 == pUVar57;
                }
                if ((!bVar40) &&
                   (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                       ("T::StaticStruct() == Struct",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Public\\Chaos\\CacheEvents.h"
                                        ,0x59,L""), bVar40)) {
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
                FCacheEventTrack::PushEventInternal(pFVar56,(float)param_4,pFVar55);
              }
              local_748[0] = &___7FCacheEventBase__6B_;
            }
          }
          pFVar68 = pFVar68 + 4;
        } while( true );
      }
      pFVar37 = local_a98;
      if ((((bool)(this_03->Parameters).bGenerateCollisionData ||
            (bool)(this_03->Parameters).bGenerateGlobalCollisionData) &&
          (local_a98->CollisionDataArray !=
           (TArray<Chaos::FCollidingData,TSizedDefaultAllocator<32>_> *)0x0)) &&
         (pTVar12 = local_a80->ProxyCollisionDataIndices,
         pTVar12 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
        pFVar68 = (pTVar12->AllocatorInstance).Data;
        iVar41 = pTVar12->ArrayNum;
        pFVar3 = pFVar68 + (longlong)iVar41 * 4;
LAB_14db00b50:
        do {
          if (pTVar12->ArrayNum != iVar41) {
            local_ab5 = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_ab5);
          }
          this_03 = local_a20;
          if (pFVar68 == pFVar3) break;
          iVar11 = *(int *)pFVar68;
          if ((-1 < iVar11) && (pTVar15 = pFVar37->CollisionDataArray, iVar11 < pTVar15->ArrayNum))
          {
            if ((iVar11 < 0) &&
               (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar40)) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            pFVar58 = FCollisionEvent::FCollisionEvent
                                (&local_688,
                                 (FCollidingData *)
                                 ((pTVar15->AllocatorInstance).Data + (longlong)iVar11 * 0x120),
                                 &local_8f8);
            pFVar56 = FPendingFrameWrite::FindOrAddEventTrack<FCollisionEvent>
                                (local_a78,FCollisionEvent::EventName);
            if ((pFVar56->Struct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
              if (1 < (byte)LogChaosCache._0_1_) {
                UE::Logging::Private::BasicLog<2>
                          ((FStaticBasicLogRecord *)
                           &`public:_void___cdecl_FCacheEventTrack::PushEvent<FCollisionEvent>(float,FCollisionEvent_const&___ptr64)___ptr64'
                            ::__l6::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
                pFVar68 = pFVar68 + 4;
                local_688._padding_ = (longlong)&___7FCacheEventBase__6B_;
                goto LAB_14db00b50;
              }
            }
            else {
              if (Z_Registration_Info_UScriptStruct_FCollisionEvent.OuterSingleton ==
                  (UScriptStruct *)0x0) {
                pUVar59 = Z_Construct_UPackage__Script_ChaosCaching();
                Z_Registration_Info_UScriptStruct_FCollisionEvent.OuterSingleton =
                     GetStaticStruct(Z_Construct_UScriptStruct_FCollisionEvent,(UObject *)pUVar59,
                                     L"CollisionEvent");
              }
              pUVar14 = (pFVar56->Struct).field0_0x0.DebugPtr;
              if (pUVar14 == (UScriptStruct *)0x0) {
                bVar40 = Z_Registration_Info_UScriptStruct_FCollisionEvent.OuterSingleton ==
                         (UScriptStruct *)0x0;
              }
              else {
                bVar40 = pUVar14 == Z_Registration_Info_UScriptStruct_FCollisionEvent.OuterSingleton
                ;
              }
              if ((!bVar40) &&
                 (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                     ("T::StaticStruct() == Struct",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Public\\Chaos\\CacheEvents.h"
                                      ,0x59,L""), bVar40)) {
                pcVar18 = (code *)swi(3);
                (*pcVar18)();
                return;
              }
              FCacheEventTrack::PushEventInternal(pFVar56,(float)param_4,pFVar58);
            }
            local_688._padding_ = (longlong)&___7FCacheEventBase__6B_;
          }
          pFVar68 = pFVar68 + 4;
        } while( true );
      }
      pFVar37 = local_a98;
      if ((((this_03->Parameters).bGenerateTrailingData) &&
          (local_a98->TrailingDataArray !=
           (TArray<Chaos::FTrailingData,TSizedDefaultAllocator<32>_> *)0x0)) &&
         (pTVar12 = local_a80->ProxyTrailingDataIndices,
         pTVar12 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0)) {
        pFVar68 = (pTVar12->AllocatorInstance).Data;
        iVar41 = pTVar12->ArrayNum;
        pFVar3 = pFVar68 + (longlong)iVar41 * 4;
LAB_14db00d43:
        do {
          if (pTVar12->ArrayNum != iVar41) {
            local_ab4[0] = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_ab4);
          }
          if (pFVar68 == pFVar3) break;
          iVar11 = *(int *)pFVar68;
          if ((-1 < iVar11) && (pTVar16 = pFVar37->TrailingDataArray, iVar11 < pTVar16->ArrayNum)) {
            if ((iVar11 < 0) &&
               (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar40)) {
              pcVar18 = (code *)swi(3);
              (*pcVar18)();
              return;
            }
            pFVar17 = (pTVar16->AllocatorInstance).Data;
            lVar63 = (longlong)iVar11 * 0xc0;
            if (-1 < *(int *)(pFVar17 + lVar63 + 0xb0)) {
              auVar33._8_8_ = local_8f8.Rotation.XY.m128d_f64[1];
              auVar33._0_8_ = local_8f8.Rotation.XY.m128d_f64[0];
              local_888 = &___7FTrailingEvent__6B_;
              dVar23 = *(double *)(pFVar17 + lVar63 + 0x10) * local_8f8.Scale3D.ZW.m128d_f64[0];
              dVar24 = local_8f8.Scale3D.ZW.m128d_f64[1] * 0.0;
              dVar27 = *(double *)(pFVar17 + lVar63 + 0x30);
              dVar28 = *(double *)(pFVar17 + lVar63 + 0x30 + 8);
              dVar29 = *(double *)(pFVar17 + lVar63 + 0x20);
              dVar30 = *(double *)(pFVar17 + lVar63 + 0x20 + 8);
              dVar95 = local_8f8.Scale3D.XY.m128d_f64[0] * *(double *)(pFVar17 + lVar63);
              dVar96 = local_8f8.Scale3D.XY.m128d_f64[1] * *(double *)(pFVar17 + lVar63 + 8);
              dVar25 = local_8f8.Rotation.ZW.m128d_f64[0];
              auVar89._8_4_ = SUB84(dVar96,0);
              auVar89._0_8_ = dVar95;
              uVar87 = (undefined4)((ulonglong)dVar96 >> 0x20);
              auVar89._12_4_ = uVar87;
              dVar26 = local_8f8.Rotation.ZW.m128d_f64[1];
              auVar72._8_4_ = SUB84(dVar96,0);
              auVar72._0_8_ = dVar95;
              auVar72._12_4_ = uVar87;
              auVar73._8_4_ = SUB84(dVar24,0);
              auVar73._0_8_ = dVar23;
              auVar73._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
              auVar73 = blendpd(auVar72,auVar73,2);
              auVar97 = blendpd(auVar33,(undefined1  [16])local_8f8.Rotation.ZW.m128d_f64,2);
              auVar90._0_8_ =
                   auVar89._8_8_ * local_8f8.Rotation.XY.m128d_f64[0] -
                   local_8f8.Rotation.XY.m128d_f64[1] * dVar95;
              auVar90._8_8_ = dVar23 * local_8f8.Rotation.XY.m128d_f64[1] - dVar25 * dVar96;
              dVar22 = auVar97._0_8_;
              dVar20 = auVar97._8_8_;
              auVar74._0_8_ = auVar73._0_8_ * dVar25 - dVar22 * dVar23;
              auVar74._8_8_ = auVar73._8_8_ * dVar26 - dVar20 * dVar24;
              auVar73 = blendpd(auVar90,auVar74,2);
              dVar24 = auVar90._8_8_ + auVar90._8_8_;
              dVar21 = auVar74._0_8_ + auVar74._0_8_;
              uVar87 = (undefined4)((ulonglong)dVar21 >> 0x20);
              auVar91._0_8_ = auVar73._0_8_ + auVar73._0_8_;
              auVar91._8_8_ = auVar73._8_8_ + auVar73._8_8_;
              auVar82._8_4_ = SUB84(dVar21,0);
              auVar82._0_8_ = dVar24;
              auVar82._12_4_ = uVar87;
              auVar75._8_4_ = SUB84(dVar21,0);
              auVar75._0_8_ = dVar24;
              auVar75._12_4_ = uVar87;
              auVar73 = blendpd(auVar75,auVar91,2);
              auVar83._0_8_ =
                   auVar82._8_8_ * local_8f8.Rotation.XY.m128d_f64[0] -
                   dVar24 * local_8f8.Rotation.XY.m128d_f64[1];
              auVar83._8_8_ = auVar91._0_8_ * local_8f8.Rotation.XY.m128d_f64[1] - dVar21 * dVar25;
              auVar76._0_8_ = auVar73._0_8_ * dVar25 - auVar91._0_8_ * dVar22;
              auVar76._8_8_ = auVar73._8_8_ * dVar26 - auVar91._8_8_ * dVar20;
              auVar73 = blendpd(auVar83,auVar76,2);
              local_868 = auVar91._0_8_ * dVar26 + dVar23 + auVar73._0_8_ +
                          local_8f8.Translation.ZW.m128d_f64[0];
              dVar21 = dVar21 * dVar26 + dVar96 + auVar76._0_8_ +
                       local_8f8.Translation.XY.m128d_f64[1];
              local_878._8_4_ = SUB84(dVar21,0);
              local_878._0_8_ =
                   dVar24 * dVar26 + dVar95 + auVar83._8_8_ + local_8f8.Translation.XY.m128d_f64[0];
              local_878._12_4_ = (int)((ulonglong)dVar21 >> 0x20);
              auVar77._8_4_ = SUB84(local_8f8.Rotation.XY.m128d_f64[1],0);
              auVar77._0_8_ = local_8f8.Rotation.XY.m128d_f64[1];
              auVar77._12_4_ = (int)((ulonglong)local_8f8.Rotation.XY.m128d_f64[1] >> 0x20);
              auVar84._8_4_ = SUB84(local_8f8.Rotation.XY.m128d_f64[0],0);
              auVar84._0_8_ = local_8f8.Rotation.XY.m128d_f64[0];
              auVar84._12_4_ = (int)((ulonglong)local_8f8.Rotation.XY.m128d_f64[0] >> 0x20);
              local_458 = 1;
              local_858 = local_8f8.Rotation.XY.m128d_f64[0] * dVar28 *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0] +
                          dVar26 * dVar29 +
                          local_8f8.Rotation.XY.m128d_f64[1] * dVar27 *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0] +
                          dVar25 * dVar30 *
                          GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
              dStack_850 = auVar84._8_8_ * dVar27 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] +
                           dVar26 * dVar30 +
                           auVar77._8_8_ * dVar28 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1] +
                           dVar25 * dVar29 *
                           GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
              dVar23 = *(double *)(pFVar17 + lVar63 + 0x50) * local_8f8.Scale3D.ZW.m128d_f64[0];
              dVar24 = local_8f8.Scale3D.ZW.m128d_f64[1] * 0.0;
              dVar95 = *(double *)(pFVar17 + lVar63 + 0x40) * local_8f8.Scale3D.XY.m128d_f64[0];
              dVar96 = *(double *)(pFVar17 + lVar63 + 0x40 + 8) * local_8f8.Scale3D.XY.m128d_f64[1];
              uVar87 = (undefined4)((ulonglong)dVar96 >> 0x20);
              auVar92._8_4_ = SUB84(dVar96,0);
              auVar92._0_8_ = dVar95;
              auVar92._12_4_ = uVar87;
              auVar78._8_4_ = SUB84(dVar96,0);
              auVar78._0_8_ = dVar95;
              auVar78._12_4_ = uVar87;
              auVar97._8_4_ = SUB84(dVar24,0);
              auVar97._0_8_ = dVar23;
              auVar97._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
              auVar73 = blendpd(auVar78,auVar97,2);
              local_848._0_8_ =
                   local_8f8.Rotation.XY.m128d_f64[0] * dVar30 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] + dVar26 * dVar27
                   + local_8f8.Rotation.XY.m128d_f64[1] * dVar29 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                   dVar25 * dVar28 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]
              ;
              local_848._8_8_ =
                   local_8f8.Rotation.XY.m128d_f64[0] * dVar29 *
                   GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1] + dVar26 * dVar28
                   + local_8f8.Rotation.XY.m128d_f64[1] * dVar30 *
                     GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                   dVar25 * dVar27 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
              ;
              auVar93._0_8_ =
                   auVar92._8_8_ * local_8f8.Rotation.XY.m128d_f64[0] -
                   dVar95 * local_8f8.Rotation.XY.m128d_f64[1];
              auVar93._8_8_ = dVar23 * local_8f8.Rotation.XY.m128d_f64[1] - dVar96 * dVar25;
              auVar79._0_8_ = auVar73._0_8_ * dVar25 - dVar23 * dVar22;
              auVar79._8_8_ = auVar73._8_8_ * dVar26 - dVar24 * dVar20;
              auVar73 = blendpd(auVar93,auVar79,2);
              dVar24 = auVar93._8_8_ + auVar93._8_8_;
              dVar21 = auVar79._0_8_ + auVar79._0_8_;
              uVar87 = (undefined4)((ulonglong)dVar21 >> 0x20);
              auVar94._0_8_ = auVar73._0_8_ + auVar73._0_8_;
              auVar94._8_8_ = auVar73._8_8_ + auVar73._8_8_;
              auVar85._8_4_ = SUB84(dVar21,0);
              auVar85._0_8_ = dVar24;
              auVar85._12_4_ = uVar87;
              auVar80._8_4_ = SUB84(dVar21,0);
              auVar80._0_8_ = dVar24;
              auVar80._12_4_ = uVar87;
              auVar73 = blendpd(auVar80,auVar94,2);
              auVar86._0_8_ =
                   auVar85._8_8_ * local_8f8.Rotation.XY.m128d_f64[0] -
                   dVar24 * local_8f8.Rotation.XY.m128d_f64[1];
              auVar86._8_8_ = auVar94._0_8_ * local_8f8.Rotation.XY.m128d_f64[1] - dVar21 * dVar25;
              auVar81._0_8_ = auVar73._0_8_ * dVar25 - auVar94._0_8_ * dVar22;
              auVar81._8_8_ = auVar73._8_8_ * dVar26 - auVar94._8_8_ * dVar20;
              auVar73 = blendpd(auVar86,auVar81,2);
              local_810 = *(undefined8 *)(pFVar17 + lVar63 + 0x68);
              local_7f8 = *(double *)(pFVar17 + lVar63 + 0x90);
              local_7e0 = *(undefined8 *)(pFVar17 + lVar63 + 0xa8);
              local_488._s_0.Z = (double)*(undefined8 *)(pFVar17 + lVar63 + 0x90);
              dVar22 = dVar21 * dVar26 + dVar96 + auVar81._0_8_;
              local_820 = *(undefined8 *)(pFVar17 + lVar63 + 0x58);
              uStack_818 = *(undefined8 *)(pFVar17 + lVar63 + 0x58 + 8);
              local_828 = auVar94._0_8_ * dVar26 + dVar23 + auVar73._0_8_;
              local_808 = *(double *)(pFVar17 + lVar63 + 0x80);
              dStack_800 = *(double *)(pFVar17 + lVar63 + 0x80 + 8);
              local_460 = *(undefined8 *)(pFVar17 + lVar63 + 0xa8);
              local_7f0 = *(undefined8 *)(pFVar17 + lVar63 + 0x98);
              uStack_7e8 = *(undefined8 *)(pFVar17 + lVar63 + 0x98 + 8);
              local_838._8_4_ = SUB84(dVar22,0);
              local_838._0_8_ = dVar24 * dVar26 + dVar95 + auVar86._8_8_;
              local_838._12_4_ = (int)((ulonglong)dVar22 >> 0x20);
              local_488._s_0.X = (double)*(undefined8 *)(pFVar17 + lVar63 + 0x80);
              local_488._s_0.Y = (double)*(undefined8 *)(pFVar17 + lVar63 + 0x80 + 8);
              local_470 = *(undefined8 *)(pFVar17 + lVar63 + 0x98);
              uStack_468 = *(undefined8 *)(pFVar17 + lVar63 + 0x98 + 8);
              local_880 = *(int *)(pFVar17 + lVar63 + 0xb0);
              pTVar60 = UE::Math::TTransform<double>::ToMatrixWithScale(&local_8f8,&local_178);
              UE::Math::TBox<double>::TransformBy
                        ((TBox<double> *)&local_488._s_0,(TBox<double> *)&local_450._s_0,pTVar60);
              local_808 = local_450._s_0.X;
              dStack_800 = local_450._s_0.Y;
              local_7f8 = local_450._s_0.Z;
              local_7f0 = local_438;
              uStack_7e8 = uStack_430;
              local_7e0 = local_428;
              pFVar56 = FPendingFrameWrite::FindOrAddEventTrack<FTrailingEvent>
                                  (local_a78,FTrailingEvent::EventName);
              if ((pFVar56->Struct).field0_0x0.DebugPtr == (UScriptStruct *)0x0) {
                if (1 < (byte)LogChaosCache._0_1_) {
                  UE::Logging::Private::BasicLog<2>
                            ((FStaticBasicLogRecord *)
                             &`public:_void___cdecl_FCacheEventTrack::PushEvent<FTrailingEvent>(float,FTrailingEvent_const&___ptr64)___ptr64'
                              ::__l6::LOG_Static,(FLogCategoryBase *)&LogChaosCache);
                  pFVar68 = pFVar68 + 4;
                  local_888 = &___7FCacheEventBase__6B_;
                  goto LAB_14db00d43;
                }
              }
              else {
                if (Z_Registration_Info_UScriptStruct_FTrailingEvent.OuterSingleton ==
                    (UScriptStruct *)0x0) {
                  pUVar59 = Z_Construct_UPackage__Script_ChaosCaching();
                  Z_Registration_Info_UScriptStruct_FTrailingEvent.OuterSingleton =
                       GetStaticStruct(Z_Construct_UScriptStruct_FTrailingEvent,(UObject *)pUVar59,
                                       L"TrailingEvent");
                }
                pUVar14 = (pFVar56->Struct).field0_0x0.DebugPtr;
                if (pUVar14 == (UScriptStruct *)0x0) {
                  bVar40 = Z_Registration_Info_UScriptStruct_FTrailingEvent.OuterSingleton ==
                           (UScriptStruct *)0x0;
                }
                else {
                  bVar40 = pUVar14 ==
                           Z_Registration_Info_UScriptStruct_FTrailingEvent.OuterSingleton;
                }
                if ((!bVar40) &&
                   (bVar40 = ::FDebug::CheckVerifyFailedImpl2
                                       ("T::StaticStruct() == Struct",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\ChaosCaching\\Source\\ChaosCaching\\Public\\Chaos\\CacheEvents.h"
                                        ,0x59,L""), bVar40)) {
                  pcVar18 = (code *)swi(3);
                  (*pcVar18)();
                  return;
                }
                FCacheEventTrack::PushEventInternal(pFVar56,(float)param_4,&local_888);
              }
              local_888 = &___7FCacheEventBase__6B_;
            }
          }
          pFVar68 = pFVar68 + 4;
        } while( true );
      }
      iVar41 = (local_a78->PendingParticleData).ArrayNum;
      if ((local_a78->PendingParticleData).ArrayMax != iVar41) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x90,0x10,iVar41,&(local_a78->PendingParticleData).AllocatorInstance,iVar41,
                   &(local_a78->PendingParticleData).ArrayMax);
      }
      if (local_a70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a70.AllocatorInstance.Data);
      }
      local_588._56_4_ = 0;
      if ((ForElementType<FSetElementId>)local_588._48_8_ != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_588._48_8_);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_598);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a18.SharedReferenceCount.ReferenceController);
  }
  return;
}

// RegisterEventHandler @ 14db01640

void __thiscall
Chaos::FGeometryCollectionCacheAdapter::RegisterEventHandler
          (FGeometryCollectionCacheAdapter *this,FGeometryCollectionPhysicsProxy *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  code *pcVar7;
  bool bVar8;
  longlong lVar9;
  undefined8 *puVar10;
  uint uVar11;
  uint uVar12;
  ForElementType<FSetElementId> FVar13;
  TTuple<Chaos::FPBDRigidsSolver_*,Chaos::EEventType> local_res18;
  ulonglong local_98;
  undefined4 local_90;
  uint local_8c;
  undefined1 local_88 [8];
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  ulonglong local_68;
  undefined4 local_60;
  ulonglong local_58;
  undefined4 local_50;
  
  uVar12 = local_8c;
  if (((param_1 != (FGeometryCollectionPhysicsProxy *)0x0) &&
      (uVar3 = *(ulonglong *)&param_1->field_0x8, uVar3 != 0)) &&
     (lVar4 = *(longlong *)(uVar3 + 0xbd8), lVar4 != 0)) {
    if ((bool)(param_1->Parameters).bGenerateCollisionData ||
        (bool)(param_1->Parameters).bGenerateGlobalCollisionData) {
      local_60 = 0;
      uVar11 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      uVar11 = uVar11 >> 0x10 ^ uVar11;
      local_68 = uVar3;
      if (*(int *)&(this->SolversListenedToForEvents).Elements.field_0x8 !=
          *(int *)&(this->SolversListenedToForEvents).Elements.field_0x34) {
        FVar13 = (this->SolversListenedToForEvents).Hash.SecondaryData;
        if (FVar13 == (ForElementType<FSetElementId>)0x0) {
          FVar13 = (ForElementType<FSetElementId>)&(this->SolversListenedToForEvents).Hash;
        }
        iVar2 = *(int *)((longlong)FVar13 +
                        (ulonglong)
                        ((this->SolversListenedToForEvents).HashSize - 1U &
                        ((uVar11 >> 2) + 0x9e3779b9 + uVar11 * 0x40 ^ uVar11)) * 4);
        if (iVar2 != -1) {
          lVar5 = *(longlong *)&(this->SolversListenedToForEvents).Elements;
          do {
            lVar9 = (longlong)iVar2;
            if ((*(ulonglong *)(lVar5 + lVar9 * 0x18) == uVar3) &&
               (*(int *)(lVar5 + 8 + lVar9 * 0x18) == 0)) {
              if (iVar2 != -1) goto LAB_14db018be;
              break;
            }
            iVar2 = *(int *)(lVar5 + 0x10 + lVar9 * 0x18);
          } while (iVar2 != -1);
        }
      }
      AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x20));
      if ((*(int *)(lVar4 + 0x10) < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("EventID < EventContainers.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                             ,0x202,L"Registering event Handler for an event ID that does not exist"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(int *)(lVar4 + 0x10) < 1) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar6 = (longlong *)**(undefined8 **)(lVar4 + 8);
      pcVar7 = *(code **)(*plVar6 + 8);
      puVar10 = ::operator_new(0x30);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        *puVar10 = &
                   ___7__TRawEventHandler_UFCollisionEventData_Chaos__VFGeometryCollectionCacheAdapter_2__Chaos__6B_
        ;
        puVar10[1] = this;
        puVar10[2] = HandleCollisionEvents;
        puVar10[3] = (ulonglong)uVar12 << 0x20;
        puVar10[4] = 0;
        puVar10[5] = (ulonglong)uVar12 << 0x20;
        if ((this == (FGeometryCollectionCacheAdapter *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Handler",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                               ,0x46,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((puVar10[2] == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("HandlerFunction",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                               ,0x47,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      local_80 = puVar10;
      (*pcVar7)(plVar6,&local_80);
      ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x20));
      TSet<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>,DefaultKeyFuncs<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>_const_&>
                (&this->SolversListenedToForEvents,&local_res18,(bool *)&local_68);
    }
LAB_14db018be:
    uVar12 = local_8c;
    if (((param_1->Parameters).bGenerateBreakingData) ||
       ((param_1->Parameters).bGenerateGlobalBreakingData)) {
      local_50 = 1;
      uVar11 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar11 = (uVar11 >> 0xd ^ uVar11) * -0x3d4d51cb;
      uVar11 = uVar11 >> 0x10 ^ uVar11;
      local_58 = uVar3;
      if (*(int *)&(this->SolversListenedToForEvents).Elements.field_0x8 !=
          *(int *)&(this->SolversListenedToForEvents).Elements.field_0x34) {
        FVar13 = (this->SolversListenedToForEvents).Hash.SecondaryData;
        if (FVar13 == (ForElementType<FSetElementId>)0x0) {
          FVar13 = (ForElementType<FSetElementId>)&(this->SolversListenedToForEvents).Hash;
        }
        iVar2 = *(int *)((longlong)FVar13 +
                        (ulonglong)
                        ((this->SolversListenedToForEvents).HashSize - 1U &
                        ((uVar11 >> 2) + 0x9e3779ba + uVar11 * 0x40 ^ uVar11)) * 4);
        if (iVar2 != -1) {
          lVar5 = *(longlong *)&(this->SolversListenedToForEvents).Elements;
          do {
            lVar9 = (longlong)iVar2;
            if ((*(ulonglong *)(lVar5 + lVar9 * 0x18) == uVar3) &&
               (*(int *)(lVar5 + 8 + lVar9 * 0x18) == 1)) {
              if (iVar2 != -1) goto LAB_14db01aee;
              break;
            }
            iVar2 = *(int *)(lVar5 + 0x10 + lVar9 * 0x18);
          } while (iVar2 != -1);
        }
      }
      AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x20));
      if ((*(int *)(lVar4 + 0x10) < 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("EventID < EventContainers.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                             ,0x202,L"Registering event Handler for an event ID that does not exist"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(int *)(lVar4 + 0x10) < 2) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar6 = *(longlong **)(*(longlong *)(lVar4 + 8) + 8);
      pcVar7 = *(code **)(*plVar6 + 8);
      puVar10 = ::operator_new(0x30);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        *puVar10 = &
                   ___7__TRawEventHandler_UFBreakingEventData_Chaos__VFGeometryCollectionCacheAdapter_2__Chaos__6B_
        ;
        puVar10[1] = this;
        puVar10[2] = HandleBreakingEvents;
        puVar10[3] = (ulonglong)uVar12 << 0x20;
        puVar10[4] = 0;
        puVar10[5] = (ulonglong)uVar12 << 0x20;
        if ((this == (FGeometryCollectionCacheAdapter *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Handler",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                               ,0x46,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((puVar10[2] == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("HandlerFunction",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                               ,0x47,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      local_78 = puVar10;
      (*pcVar7)(plVar6,&local_78);
      ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x20));
      TSet<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>,DefaultKeyFuncs<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>_const_&>
                (&this->SolversListenedToForEvents,
                 (TTuple<Chaos::FPBDRigidsSolver_*,Chaos::EEventType> *)&local_res18.field_0x8,
                 (bool *)&local_58);
    }
LAB_14db01aee:
    if ((param_1->Parameters).bGenerateTrailingData) {
      local_90 = 2;
      uVar12 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
      uVar12 = (uVar12 >> 0xd ^ uVar12) * -0x3d4d51cb;
      uVar12 = uVar12 >> 0x10 ^ uVar12;
      if (*(int *)&(this->SolversListenedToForEvents).Elements.field_0x8 !=
          *(int *)&(this->SolversListenedToForEvents).Elements.field_0x34) {
        FVar13 = (this->SolversListenedToForEvents).Hash.SecondaryData;
        if (FVar13 == (ForElementType<FSetElementId>)0x0) {
          FVar13 = (ForElementType<FSetElementId>)&(this->SolversListenedToForEvents).Hash;
        }
        iVar2 = *(int *)((longlong)FVar13 +
                        (ulonglong)
                        ((this->SolversListenedToForEvents).HashSize - 1U &
                        ((uVar12 >> 2) + 0x9e3779bb + uVar12 * 0x40 ^ uVar12)) * 4);
        if (iVar2 != -1) {
          lVar5 = *(longlong *)&(this->SolversListenedToForEvents).Elements;
          do {
            lVar9 = (longlong)iVar2;
            if ((*(ulonglong *)(lVar5 + lVar9 * 0x18) == uVar3) &&
               (*(int *)(lVar5 + 8 + lVar9 * 0x18) == 2)) {
              if (iVar2 != -1) {
                return;
              }
              break;
            }
            iVar2 = *(int *)(lVar5 + 0x10 + lVar9 * 0x18);
          } while (iVar2 != -1);
        }
      }
      local_98 = uVar3;
      AcquireSRWLockShared((PSRWLOCK)(lVar4 + 0x20));
      if ((*(int *)(lVar4 + 0x10) < 3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("EventID < EventContainers.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                             ,0x202,L"Registering event Handler for an event ID that does not exist"
                            ), bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if ((*(int *)(lVar4 + 0x10) < 3) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      plVar6 = *(longlong **)(*(longlong *)(lVar4 + 8) + 0x10);
      pcVar7 = *(code **)(*plVar6 + 8);
      puVar10 = ::operator_new(0x30);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)0x0;
      }
      else {
        *puVar10 = &
                   ___7__TRawEventHandler_UFTrailingEventData_Chaos__VFGeometryCollectionCacheAdapter_2__Chaos__6B_
        ;
        puVar10[1] = this;
        puVar10[2] = HandleTrailingEvents;
        puVar10[3] = (ulonglong)local_8c << 0x20;
        puVar10[4] = 0;
        puVar10[5] = (ulonglong)local_8c << 0x20;
        if ((this == (FGeometryCollectionCacheAdapter *)0x0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Handler",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                               ,0x46,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if ((puVar10[2] == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("HandlerFunction",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\EventManager.h"
                               ,0x47,L""), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      local_70 = puVar10;
      (*pcVar7)(plVar6,&local_70);
      ReleaseSRWLockShared((PSRWLOCK)(lVar4 + 0x20));
      TSet<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>,DefaultKeyFuncs<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>,0>,FDefaultSetAllocator>
      ::Emplace<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>_const_&>
                (&this->SolversListenedToForEvents,
                 (TTuple<Chaos::FPBDRigidsSolver_*,Chaos::EEventType> *)local_88,(bool *)&local_98);
    }
  }
  return;
}

// SetRestState @ 14db042c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Chaos::FGeometryCollectionCacheAdapter::SetRestState
          (FGeometryCollectionCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2,
          TTransform<double> *param_3,double param_4)

{
  FScriptContainerElement *pFVar1;
  float *pfVar2;
  UGeometryCollection *pUVar3;
  FGeometryCollection *this_00;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  __m128d _Var24;
  __m128d _Var25;
  __m128d _Var26;
  __m128d _Var27;
  __m128d _Var28;
  __m128d _Var29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  bool bVar42;
  bool bVar43;
  int iVar44;
  uint uVar45;
  uint *puVar46;
  FTlsAutoCleanup *pFVar47;
  UGeometryCollectionComponent *pUVar48;
  uint uVar49;
  longlong lVar50;
  ulonglong uVar51;
  uint uVar52;
  ulonglong uVar53;
  longlong lVar54;
  ForAnyElementType FVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  longlong lVar58;
  undefined1 auVar59 [16];
  undefined1 auStackY_4e8 [32];
  undefined1 local_4b8;
  undefined1 local_4b7 [7];
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_4b0;
  int local_4a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_498;
  longlong local_488;
  UChaosCache *local_480;
  FGeometryCollectionCacheAdapter *local_478;
  UGeometryCollectionComponent *local_470;
  TReferenceControllerBase<1> *local_468;
  FCacheEvaluationContext local_460;
  code *local_438;
  undefined1 *local_430;
  TTransform<double> local_428;
  undefined1 local_3c8 [8];
  undefined1 local_3c0 [64];
  void *local_380;
  undefined4 local_378;
  __m128d local_368;
  __m128d local_358;
  __m128d local_348;
  __m128d local_338;
  __m128d local_328;
  __m128d local_318;
  TTransform<double> local_308;
  TTransform<double> local_2a8;
  TTransform<double> local_248;
  FCacheEvaluationResult local_1e8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_4e8;
  local_480 = param_2;
  local_478 = this;
  puVar46 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
  local_430 = local_4b7;
  local_438 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar47 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_438,puVar46);
  bVar42 = IsInGameThread();
  if ((((!bVar42) && (*(int *)&pFVar47[2].field_0x4 < 1)) || (*(char *)(pFVar47 + 3) != '\0')) &&
     (bVar42 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<3522308889972310313>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                          ,0x129,"IsInGameThreadContext()"), bVar42)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (((param_2 != (UChaosCache *)0x0) && (param_2->RecordedDuration != 0.0)) &&
     (pUVar48 = CastChecked<UGeometryCollectionComponent,UPrimitiveComponent>(param_1),
     pUVar48 != (UGeometryCollectionComponent *)0x0)) {
    local_248.Rotation.XY.m128d_f64[0] = (param_3->Rotation).XY.m128d_f64[0];
    local_248.Rotation.XY.m128d_f64[1] = (param_3->Rotation).XY.m128d_f64[1];
    local_248.Rotation.ZW.m128d_f64[0] = (param_3->Rotation).ZW.m128d_f64[0];
    local_248.Rotation.ZW.m128d_f64[1] = (param_3->Rotation).ZW.m128d_f64[1];
    local_248.Translation.XY.m128d_f64[0] = (param_3->Translation).XY.m128d_f64[0];
    local_248.Translation.XY.m128d_f64[1] = (param_3->Translation).XY.m128d_f64[1];
    local_248.Scale3D.XY.m128d_f64[0] = (param_3->Scale3D).XY.m128d_f64[0];
    local_248.Scale3D.XY.m128d_f64[1] = (param_3->Scale3D).XY.m128d_f64[1];
    local_248.Translation.ZW.m128d_f64[0] = (param_3->Translation).ZW.m128d_f64[0];
    local_248.Translation.ZW.m128d_f64[1] = (param_3->Translation).ZW.m128d_f64[1];
    local_248.Scale3D.ZW.m128d_f64[0] = (param_3->Scale3D).ZW.m128d_f64[0];
    local_248.Scale3D.ZW.m128d_f64[1] = (param_3->Scale3D).ZW.m128d_f64[1];
    lVar58 = -(ulonglong)
              ((double)GlobalVectorConstants::SmallNumber.m128_f32[3] <
              (double)CONCAT44(*(uint *)&pUVar48->field_0x24c & _UNK_15061cc8c,
                               *(uint *)&pUVar48->field_0x248 & _UNK_15061cc88));
    auVar5._8_4_ = (int)lVar58;
    auVar5._0_8_ = -(ulonglong)
                    ((double)GlobalVectorConstants::SmallNumber.m128_f32[2] <
                    (double)CONCAT44(*(uint *)&pUVar48->field_0x244 &
                                     __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                     *(uint *)&pUVar48->field_0x240 &
                                     (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    auVar5._12_4_ = (int)((ulonglong)lVar58 >> 0x20);
    uVar49 = movmskpd((int)param_1,auVar5);
    auVar59._8_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[1] <
          (double)CONCAT44(*(uint *)&pUVar48->field_0x23c & _UNK_15061cc8c,
                           *(uint *)&pUVar48->field_0x238 & _UNK_15061cc88));
    auVar59._0_8_ =
         -(ulonglong)
          ((double)GlobalVectorConstants::SmallNumber.m128_f32[0] <
          (double)CONCAT44(*(uint *)&pUVar48->field_0x234 &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           *(uint *)&pUVar48->field_0x230 &
                           (uint)__xmm_7fffffffffffffff7fffffffffffffff));
    iVar44 = movmskpd((int)pUVar48,auVar59);
    local_470 = pUVar48;
    if ((uVar49 & 0x3fffffff) == 0 && iVar44 == 0) {
      local_308.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64
      ;
      local_308.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64
      ;
      local_308.Translation.XY.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_308.Translation.ZW.m128d_f64 =
           UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_308.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_308.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    }
    else {
      UE::Math::TTransform<double>::InverseFast
                ((TTransform<double> *)&pUVar48->field_0x1f0,&local_308);
    }
    local_2a8.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_2a8.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
    local_2a8.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_2a8.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
    local_2a8.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_2a8.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
    local_2a8.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_2a8.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_2a8.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_2a8.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_2a8.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
    local_2a8.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_2a8.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_2a8.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_2a8,&local_248,&local_308);
    pUVar3 = (pUVar48->RestCollection).field0_0x0.DebugPtr;
    if (pUVar3 != (UGeometryCollection *)0x0) {
      this_00 = (pUVar3->GeometryCollection).Object;
      local_468 = (pUVar3->GeometryCollection).SharedReferenceCount.ReferenceController;
      if (local_468 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_468->SharedReferenceCount = (atomic<int>)((int)local_468->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((this_00 == (FGeometryCollection *)0x0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar42)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar44 = FManagedArrayCollection::NumElements
                         ((FManagedArrayCollection *)this_00,FTransformCollection::TransformGroup);
      uVar51 = 0;
      local_3c0._40_8_ = ___xmm_00000000ffffffff0000008000000000;
      local_3c0._48_8_ = _UNK_150631d98;
      local_368.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
      local_358.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
      local_460.TickRecord = (FPlaybackTickRecord *)local_3c8;
      local_3c8._0_4_ = 0.0;
      local_3c0._0_8_ = 0;
      local_3c0._8_8_ = 0;
      local_3c0._32_8_ = 0;
      local_348.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
      local_338.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
      local_328.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
      local_380 = (void *)0x0;
      local_378 = 0;
      local_318.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
      local_460.EvaluationIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_460.EvaluationIndices.ArrayNum = 0;
      local_460.EvaluationIndices.ArrayMax = 0;
      local_460.bEvaluateNamedTransforms = false;
      local_460.bEvaluateTransform = true;
      local_460.bEvaluateCurves = false;
      local_460.bEvaluateEvents = false;
      local_3c8._4_4_ = (float)param_4;
      UChaosCache::Evaluate
                (param_2,&local_1e8,&local_460,
                 (TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *)0x0);
      local_4a0 = local_1e8.Transform.ArrayNum;
      local_4b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_4b0.ArrayNum = 0;
      local_4b0.ArrayMax = 0;
      TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>::SetNum
                (&local_4b0,iVar44,Default);
      uVar53 = uVar51;
      uVar56 = uVar51;
      uVar57 = uVar51;
      local_488 = (longlong)iVar44;
      if (0 < iVar44) {
        do {
          if ((this_00 == (FGeometryCollection *)0x0) &&
             (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar42)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar52 = (uint)uVar53;
          uVar49 = 0;
          if ((int)uVar52 < (int)this_00->_padding_) {
            uVar49 = ~uVar52 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar42)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar58 = this_00->_padding_;
          pfVar2 = (float *)(uVar56 + 0x20 + lVar58);
          fVar12 = *pfVar2;
          fVar13 = pfVar2[1];
          fVar14 = pfVar2[2];
          fVar15 = pfVar2[3];
          pfVar2 = (float *)(uVar56 + 0x10 + lVar58);
          fVar16 = *pfVar2;
          fVar17 = pfVar2[1];
          fVar18 = pfVar2[2];
          fVar19 = pfVar2[3];
          pfVar2 = (float *)(uVar56 + lVar58);
          fVar20 = *pfVar2;
          fVar21 = pfVar2[1];
          fVar22 = pfVar2[2];
          fVar23 = pfVar2[3];
          uVar49 = 0;
          if ((int)uVar52 < local_4b0.ArrayNum) {
            uVar49 = ~uVar52 >> 0x1f;
          }
          if ((uVar49 == 0) &&
             (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar42)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar57 = uVar57 + 1;
          auVar10._8_4_ = SUB84((double)fVar21,0);
          auVar10._0_8_ = (double)fVar20;
          auVar10._12_4_ = (int)((ulonglong)(double)fVar21 >> 0x20);
          *(undefined1 (*) [16])(local_4b0.AllocatorInstance.Data + uVar51) = auVar10;
          auVar11._8_4_ = SUB84((double)fVar23,0);
          auVar11._0_8_ = (double)fVar22;
          auVar11._12_4_ = (int)((ulonglong)(double)fVar23 >> 0x20);
          *(undefined1 (*) [16])(local_4b0.AllocatorInstance.Data + uVar51 + 0x10) = auVar11;
          auVar8._8_4_ = SUB84((double)fVar17,0);
          auVar8._0_8_ = (double)fVar16;
          auVar8._12_4_ = (int)((ulonglong)(double)fVar17 >> 0x20);
          *(undefined1 (*) [16])(local_4b0.AllocatorInstance.Data + uVar51 + 0x20) = auVar8;
          auVar9._8_4_ = SUB84((double)fVar19,0);
          auVar9._0_8_ = (double)fVar18;
          auVar9._12_4_ = (int)((ulonglong)(double)fVar19 >> 0x20);
          *(undefined1 (*) [16])(local_4b0.AllocatorInstance.Data + uVar51 + 0x30) = auVar9;
          auVar6._8_4_ = SUB84((double)fVar13,0);
          auVar6._0_8_ = (double)fVar12;
          auVar6._12_4_ = (int)((ulonglong)(double)fVar13 >> 0x20);
          *(undefined1 (*) [16])(local_4b0.AllocatorInstance.Data + uVar51 + 0x40) = auVar6;
          auVar7._8_4_ = SUB84((double)fVar15,0);
          auVar7._0_8_ = (double)fVar14;
          auVar7._12_4_ = (int)((ulonglong)(double)fVar15 >> 0x20);
          *(undefined1 (*) [16])(local_4b0.AllocatorInstance.Data + uVar51 + 0x50) = auVar7;
          uVar51 = uVar51 + 0x60;
          uVar53 = (ulonglong)(uVar52 + 1);
          uVar56 = uVar56 + 0x30;
        } while ((longlong)uVar57 < local_488);
      }
      uVar49 = 0;
      lVar58 = (longlong)local_4a0;
      if (0 < lVar58) {
        lVar54 = 0;
        do {
          uVar52 = 0;
          if ((int)uVar49 < local_1e8.ParticleIndices.ArrayNum) {
            uVar52 = ~uVar49 >> 0x1f;
          }
          if ((uVar52 == 0) &&
             (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar42)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar52 = *(uint *)(local_1e8.ParticleIndices.AllocatorInstance.Data + lVar54 * 4);
          uVar45 = 0;
          if ((int)uVar49 < local_1e8.Transform.ArrayNum) {
            uVar45 = ~uVar49 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar42)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          local_428.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
          local_428.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
          local_428.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
          local_428.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
          local_428.Translation.ZW.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[2];
          local_428.Translation.ZW.m128d_f64[1] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[3];
          local_428.Translation.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
          local_428.Translation.XY.m128d_f64[0] =
               (double)GlobalVectorConstants::FloatZero.m128_f32[0];
          local_428.Translation.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
          local_428.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
          local_428.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
          local_428.Scale3D.XY.m128d_f64[1]._0_4_ =
               SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
          local_428.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
          local_428.Scale3D.XY.m128d_f64[1]._4_4_ =
               (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
          UE::Math::TTransform<double>::Multiply
                    (&local_428,
                     (TTransform<double> *)
                     (local_1e8.Transform.AllocatorInstance.Data + (longlong)(int)uVar49 * 0x60),
                     &local_2a8);
          dVar41 = local_428.Scale3D.ZW.m128d_f64[1];
          dVar40 = local_428.Scale3D.ZW.m128d_f64[0];
          dVar37 = local_428.Translation.ZW.m128d_f64[1];
          dVar36 = local_428.Translation.ZW.m128d_f64[0];
          dVar33 = local_428.Rotation.ZW.m128d_f64[1];
          dVar32 = local_428.Rotation.ZW.m128d_f64[0];
          dVar31 = local_428.Rotation.XY.m128d_f64[1];
          dVar30 = local_428.Rotation.XY.m128d_f64[0];
          dVar34 = local_428.Translation.XY.m128d_f64[0];
          dVar35 = local_428.Translation.XY.m128d_f64[1];
          dVar38 = local_428.Scale3D.XY.m128d_f64[0];
          dVar39 = local_428.Scale3D.XY.m128d_f64[1];
          uVar45 = 0;
          if ((int)uVar52 < local_4b0.ArrayNum) {
            uVar45 = ~uVar52 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar42)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar50 = (longlong)(int)uVar52 * 0x60;
          uVar49 = uVar49 + 1;
          lVar54 = lVar54 + 1;
          *(double *)(local_4b0.AllocatorInstance.Data + lVar50) = dVar30;
          *(double *)(local_4b0.AllocatorInstance.Data + lVar50 + 8) = dVar31;
          *(double *)(local_4b0.AllocatorInstance.Data + lVar50 + 0x10) = dVar32;
          *(double *)(local_4b0.AllocatorInstance.Data + lVar50 + 0x10 + 8) = dVar33;
          *(double *)(local_4b0.AllocatorInstance.Data + lVar50 + 0x20) = dVar34;
          *(double *)(local_4b0.AllocatorInstance.Data + lVar50 + 0x20 + 8) = dVar35;
          *(double *)(local_4b0.AllocatorInstance.Data + lVar50 + 0x30) = dVar36;
          *(double *)(local_4b0.AllocatorInstance.Data + lVar50 + 0x30 + 8) = dVar37;
          *(double *)(local_4b0.AllocatorInstance.Data + lVar50 + 0x40) = dVar38;
          *(double *)(local_4b0.AllocatorInstance.Data + lVar50 + 0x40 + 8) = dVar39;
          *(double *)(local_4b0.AllocatorInstance.Data + lVar50 + 0x50) = dVar40;
          *(double *)(local_4b0.AllocatorInstance.Data + lVar50 + 0x50 + 8) = dVar41;
        } while (lVar54 < lVar58);
      }
      GatherAllBreaksUpToTime(local_478,&local_498,local_480,(float)param_4);
      if ((this_00 == (FGeometryCollection *)0x0) &&
         (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar42)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar49 = UGeometryCollectionComponent::GetRootIndex(pUVar48);
      iVar44 = local_498.ArrayNum;
      bVar42 = false;
      pFVar1 = local_498.AllocatorInstance.Data + (longlong)local_498.ArrayNum * 4;
      FVar55.Data = local_498.AllocatorInstance.Data;
      while( true ) {
        if (local_498.ArrayNum != iVar44) {
          local_4b8 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_4b8)
          ;
        }
        pUVar48 = local_470;
        if (FVar55.Data == pFVar1) break;
        uVar52 = *(uint *)FVar55.Data;
        uVar45 = 0;
        if ((int)uVar52 < (int)this_00->_padding_) {
          uVar45 = ~uVar52 >> 0x1f;
        }
        if ((uVar45 == 0) &&
           (bVar42 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar42)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        _Var29.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
        _Var28.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
        _Var27.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.ZW.m128d_f64;
        _Var26.m128d_f64 = UE::Math::TTransform<double>::Identity.Translation.XY.m128d_f64;
        _Var25.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
        _Var24.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
        uVar52 = *(uint *)(this_00->_padding_ + (longlong)(int)uVar52 * 4);
        bVar42 = uVar52 == uVar49;
        if (-1 < (int)uVar52) {
          uVar45 = 0;
          if ((int)uVar52 < local_4b0.ArrayNum) {
            uVar45 = ~uVar52 >> 0x1f;
          }
          if ((uVar45 == 0) &&
             (bVar43 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar43)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          lVar58 = (longlong)(int)uVar52 * 0x60;
          *(double (*) [2])(local_4b0.AllocatorInstance.Data + lVar58) = _Var24.m128d_f64;
          *(double (*) [2])(local_4b0.AllocatorInstance.Data + lVar58 + 0x10) = _Var25.m128d_f64;
          *(double (*) [2])(local_4b0.AllocatorInstance.Data + lVar58 + 0x20) = _Var26.m128d_f64;
          *(double (*) [2])(local_4b0.AllocatorInstance.Data + lVar58 + 0x30) = _Var27.m128d_f64;
          *(double (*) [2])(local_4b0.AllocatorInstance.Data + lVar58 + 0x40) = _Var28.m128d_f64;
          *(double (*) [2])(local_4b0.AllocatorInstance.Data + lVar58 + 0x50) = _Var29.m128d_f64;
        }
        FVar55.Data = FVar55.Data + 4;
      }
      if (bVar42 != local_470->bForceBrokenForCustomRenderer) {
        UGeometryCollectionComponent::ForceBrokenForCustomRenderer(local_470,bVar42);
      }
      UGeometryCollectionComponent::SetRestState(pUVar48,&local_4b0);
      if (local_498.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_498.AllocatorInstance.Data);
      }
      if (local_4b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_4b0.AllocatorInstance.Data);
      }
      FCacheEvaluationResult::~FCacheEvaluationResult(&local_1e8);
      if (local_460.EvaluationIndices.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_460.EvaluationIndices.AllocatorInstance.Data);
      }
      local_378 = 0;
      if (local_380 != (void *)0x0) {
        FMemory::Free(local_380);
      }
      TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FName,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_3c0);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_468)
      ;
    }
  }
  return;
}

// SupportsComponentClass @ 14db05460

SupportType __thiscall
Chaos::FGeometryCollectionCacheAdapter::SupportsComponentClass
          (FGeometryCollectionCacheAdapter *this,UClass *param_1)

{
  int iVar1;
  UClass *pUVar2;
  
  pUVar2 = (UClass *)(**(code **)(this->_padding_ + 0x10))();
  if (param_1 == pUVar2) {
    return Direct;
  }
  if (pUVar2 != (UClass *)0x0) {
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= (int)param_1->_padding_) &&
       ((longlong *)*(undefined1 **)(param_1->_padding_ + (longlong)iVar1 * 8) == &pUVar2->_padding_
       )) {
      return Derived;
    }
    return None;
  }
  return None;
}

// UnregisterEventHandler @ 14db07640

void __thiscall
Chaos::FGeometryCollectionCacheAdapter::UnregisterEventHandler
          (FGeometryCollectionCacheAdapter *this,FGeometryCollectionPhysicsProxy *param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  FGeometryCollectionPhysicsProxy *pFVar5;
  FEventManager *this_00;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  bool bVar9;
  TMap<IPhysicsProxyBase_*,Chaos::FCachedEventData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,Chaos::FCachedEventData,0>_>
  *pTVar10;
  TMap<IPhysicsProxyBase_*,Chaos::FCachedEventData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,Chaos::FCachedEventData,0>_>
  *pTVar11;
  bool bVar12;
  longlong lVar13;
  FGeometryCollectionPhysicsProxy *pFVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  byte bVar19;
  uint uVar20;
  undefined1 local_res20 [8];
  EEventType local_100 [4];
  TMap<IPhysicsProxyBase_*,Chaos::FCachedEventData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,Chaos::FCachedEventData,0>_>
  *local_f0;
  int iStack_e8;
  uint uStack_e4;
  undefined1 *local_e0;
  undefined4 uStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  int local_c0;
  TMap<IPhysicsProxyBase_*,Chaos::FCachedEventData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,Chaos::FCachedEventData,0>_>
  *local_b8;
  TMap<IPhysicsProxyBase_*,Chaos::FCachedEventData,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,Chaos::FCachedEventData,0>_>
  *local_b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_a8;
  undefined8 uStack_88;
  TTuple<Chaos::FPBDRigidsSolver_*,Chaos::EEventType> local_80;
  TTuple<Chaos::FPBDRigidsSolver_*,Chaos::EEventType> local_70;
  TTuple<Chaos::FPBDRigidsSolver_*,Chaos::EEventType> local_60 [2];
  
  if ((param_1 != (FGeometryCollectionPhysicsProxy *)0x0) &&
     (uVar4 = *(ulonglong *)&param_1->field_0x8, uVar4 != 0)) {
    iVar2 = *(int *)&(this->CachedData).field_0x28;
    iStack_e8 = 0;
    local_d0 = 0;
    bVar7 = false;
    bVar19 = 0;
    local_f0 = &this->CachedData;
    bVar9 = false;
    uStack_e4 = 1;
    iStack_d4 = 0;
    if (iVar2 != 0) {
      puVar18 = *(uint **)&(this->CachedData).field_0x20;
      if (puVar18 == (uint *)0x0) {
        puVar18 = (uint *)&(this->CachedData).field_0x10;
      }
      uVar16 = *puVar18;
      while (uVar16 == 0) {
        lVar13 = (longlong)iStack_e8;
        local_d0 = local_d0 + 0x20;
        iStack_e8 = iStack_e8 + 1;
        iStack_d4 = iVar2;
        if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_e8) goto LAB_14db07729;
        uVar16 = puVar18[lVar13 + 1];
      }
      uStack_e4 = -uVar16 & uVar16;
      uVar1 = (ulonglong)uStack_e4 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_c0 = (int)lVar13;
      iStack_d4 = local_d0 + -1 + local_c0;
      if (iVar2 < iStack_d4) {
        iStack_d4 = iVar2;
      }
    }
LAB_14db07729:
    local_e0 = &(this->CachedData).field_0x10;
    uVar16 = *(uint *)&(this->CachedData).field_0x28;
    iStack_c8 = *(int *)&(this->CachedData).field_0x8 - *(int *)&(this->CachedData).field_0x34;
    uVar20 = uVar16 & 0xffffffe0;
    TStack_a8._padding_ = CONCAT44(uStack_e4,iStack_e8);
    uStack_d8 = 0xffffffff;
    TStack_a8.CurrentBitIndex = iStack_d4;
    TStack_a8.UnvisitedBitMask = 0xffffffff;
    iVar15 = (int)uVar16 >> 5;
    TStack_a8._28_4_ = iStack_d4;
    TStack_a8.BaseBitIndex = local_d0;
    uStack_88 = CONCAT44(uStack_c4,iStack_c8);
    iStack_cc = iStack_d4;
    local_b8 = local_f0;
    local_b0 = local_f0;
    TStack_a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_e0;
    if ((((int)uVar16 < 0) || (iVar2 < (int)uVar16)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("StartIndex >= 0 && StartIndex <= Array.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                            ,0x7af,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar10 = local_b8;
    uVar3 = *(uint *)&(this->CachedData).field_0x28;
    if (uVar16 != uVar3) {
      puVar17 = *(undefined1 **)&(this->CachedData).field_0x20;
      if (puVar17 == (undefined1 *)0x0) {
        puVar17 = &(this->CachedData).field_0x10;
      }
      uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
      while (uVar16 == 0) {
        lVar13 = (longlong)iVar15;
        uVar20 = uVar20 + 0x20;
        iVar15 = iVar15 + 1;
        uVar16 = uVar3;
        if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15)
        goto LAB_14db07850;
        uVar16 = *(uint *)(puVar17 + lVar13 * 4 + 4);
      }
      uVar1 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uVar16 = (int)lVar13 + -1 + uVar20;
      if ((int)uVar3 < (int)uVar16) {
        uVar16 = uVar3;
      }
    }
LAB_14db07850:
    while( true ) {
      pTVar11 = local_b0;
      if (*(int *)&local_b0->field_0x8 - *(int *)&local_b0->field_0x34 != (int)uStack_88) {
        `TSparseArray<TSparseSetElement<TTuple<IPhysicsProxyBase_*,Chaos::FCachedEventData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
      }
      if (((TStack_a8.CurrentBitIndex == uVar16) &&
          (TStack_a8.Array == (TBitArray<FDefaultBitArrayAllocator> *)&(this->CachedData).field_0x10
          )) && (pTVar11 == pTVar10)) break;
      pFVar5 = *(FGeometryCollectionPhysicsProxy **)
                (*(longlong *)pTVar11 + (longlong)TStack_a8.CurrentBitIndex * 0x28);
      pFVar14 = (FGeometryCollectionPhysicsProxy *)0x0;
      if (*(int *)&pFVar5->field_0x1c == 2) {
        pFVar14 = pFVar5;
      }
      if (((param_1 != pFVar14) && (pFVar14 != (FGeometryCollectionPhysicsProxy *)0x0)) &&
         (*(ulonglong *)&pFVar5->field_0x8 == uVar4)) {
        bVar9 = (bool)(bVar9 | ((bool)(pFVar14->Parameters).bGenerateCollisionData ||
                               (bool)(pFVar14->Parameters).bGenerateGlobalCollisionData));
        if (((pFVar14->Parameters).bGenerateBreakingData) ||
           ((pFVar14->Parameters).bGenerateGlobalBreakingData)) {
          bVar8 = 1;
        }
        else {
          bVar8 = 0;
        }
        bVar7 = (bool)(bVar7 | bVar8);
        bVar19 = bVar19 | (pFVar14->Parameters).bGenerateTrailingData;
      }
      TStack_a8.UnvisitedBitMask = TStack_a8.UnvisitedBitMask & ~TStack_a8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_a8);
    }
    this_00 = *(FEventManager **)(uVar4 + 0xbd8);
    if (this_00 != (FEventManager *)0x0) {
      if (!bVar9) {
        local_80._8_4_ = 0;
        local_100[0] = Collision;
        local_80._0_8_ = uVar4;
        FEventManager::UnregisterHandler(this_00,local_100,this);
        if (*(int *)&(this->SolversListenedToForEvents).Elements.field_0x8 !=
            *(int *)&(this->SolversListenedToForEvents).Elements.field_0x34) {
          uVar16 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
          uVar16 = uVar16 >> 0x10 ^ uVar16;
          TSet<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>,DefaultKeyFuncs<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>_>
                    (&this->SolversListenedToForEvents,
                     uVar16 * 0x40 + (uVar16 >> 2) + 0x9e3779b9 ^ uVar16,&local_80);
        }
      }
      if (!bVar7) {
        local_70._8_4_ = 1;
        local_100[1] = 1;
        local_70._0_8_ = uVar4;
        FEventManager::UnregisterHandler(this_00,local_100 + 1,this);
        if (*(int *)&(this->SolversListenedToForEvents).Elements.field_0x8 !=
            *(int *)&(this->SolversListenedToForEvents).Elements.field_0x34) {
          uVar16 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
          uVar16 = uVar16 >> 0x10 ^ uVar16;
          TSet<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>,DefaultKeyFuncs<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>_>
                    (&this->SolversListenedToForEvents,
                     uVar16 * 0x40 + (uVar16 >> 2) + 0x9e3779ba ^ uVar16,&local_70);
        }
      }
      if (bVar19 == 0) {
        local_60[0]._8_4_ = 2;
        local_100[2] = 2;
        local_60[0]._0_8_ = uVar4;
        FEventManager::UnregisterHandler(this_00,local_100 + 2,this);
        if (*(int *)&(this->SolversListenedToForEvents).Elements.field_0x8 !=
            *(int *)&(this->SolversListenedToForEvents).Elements.field_0x34) {
          uVar16 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
          uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
          uVar16 = uVar16 >> 0x10 ^ uVar16;
          TSet<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>,DefaultKeyFuncs<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>,0>,FDefaultSetAllocator>
          ::RemoveImpl<TTuple<Chaos::FPBDRigidsSolver_*,enum_Chaos::EEventType>_>
                    (&this->SolversListenedToForEvents,
                     uVar16 * 0x40 + (uVar16 >> 2) + 0x9e3779bb ^ uVar16,local_60);
        }
      }
    }
  }
  return;
}

// ValidForPlayback @ 14db07bc0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

bool __thiscall
Chaos::FGeometryCollectionCacheAdapter::ValidForPlayback
          (FGeometryCollectionCacheAdapter *this,UPrimitiveComponent *param_1,UChaosCache *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  UClass *pUVar10;
  TReferenceControllerBase<1> *pTVar11;
  FScriptContainerElement *pFVar12;
  undefined4 local_res10;
  undefined4 uStackX_14;
  
  bVar7 = false;
  local_res10 = 0;
  if (param_1 == (UPrimitiveComponent *)0x0) {
    return false;
  }
  pUVar10 = Z_Construct_UClass_UGeometryCollectionComponent_NoRegister();
  iVar2 = (int)pUVar10->_padding_;
  if (*(int *)(*(longlong *)&param_1->field_0x10 + 0x38) < iVar2) {
    return false;
  }
  if ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
      &pUVar10->_padding_) {
    return false;
  }
  lVar3 = *(longlong *)&param_1[1].field_0x50;
  if (lVar3 == 0) {
    pTVar11 = (TReferenceControllerBase<1> *)CONCAT44(uStackX_14,local_res10);
  }
  else {
    pTVar11 = *(TReferenceControllerBase<1> **)(lVar3 + 0x280);
    bVar7 = true;
    lVar4 = *(longlong *)(lVar3 + 0x278);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (lVar4 != 0) {
      bVar6 = false;
      goto LAB_14db07c4c;
    }
  }
  bVar6 = true;
LAB_14db07c4c:
  if (bVar7) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  }
  if (!bVar6) {
    lVar4 = *(longlong *)(lVar3 + 0x278);
    pTVar11 = *(TReferenceControllerBase<1> **)(lVar3 + 0x280);
    if (pTVar11 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((lVar4 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      uVar8 = (*pcVar5)();
      return (bool)uVar8;
    }
    iVar9 = (**(code **)(*(longlong *)(lVar4 + 0xb0) + 0x60))();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
    pFVar12 = (param_2->TrackToParticle).AllocatorInstance.Data;
    iVar2 = (param_2->TrackToParticle).ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar2 * 4;
    while( true ) {
      if ((param_2->TrackToParticle).ArrayNum != iVar2) {
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res10)
        ;
      }
      if (pFVar12 == pFVar1) {
        return true;
      }
      if ((*(int *)pFVar12 < 0) || (iVar9 <= *(int *)pFVar12)) break;
      pFVar12 = pFVar12 + 4;
    }
  }
  return false;
}

