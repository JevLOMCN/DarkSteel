// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ChaosCaching
// Functions: 8

// Call @ 14daed260

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosCacheCollection::FlushAllCacheWrites'::__l2::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UChaosCacheCollection::FlushAllCacheWrites'::__l2::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14daed270

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FGeometryCollectionCacheAdapter::InitializeForRecord'::__l2::<lambda_1>,void>
::Call(void *param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)param_1;
  *(undefined1 *)(*(longlong *)(lVar1 + 0xbe0) + 0x21) = 1;
  *(undefined1 *)(*(longlong *)(lVar1 + 0xbd0) + 0x8b9) = 1;
  *(undefined1 *)(*(longlong *)(*(longlong *)param_1 + 0xbe0) + 0x20) = 1;
  *(undefined1 *)(*(longlong *)(*(longlong *)param_1 + 0xbe0) + 0x22) = 1;
  return;
}

// Call @ 14daed2b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UChaosCache::CompressChannelsData'::__l6::<lambda_1>,void,int>::Call
          (void *param_1,int *param_2)

{
  `UChaosCache::CompressChannelsData'::__l6::<lambda_1>::operator()(param_1,*param_2);
  return;
}

// Call @ 14daed2c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l76::<lambda_1>,void,Chaos::FBreakingEventData_&>
::Call(void *param_1,FBreakingEventData *param_2)

{
  int *piVar1;
  FBreakingData *pFVar2;
  FBreakingData *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  
  if ((double)*(float *)((longlong)param_1 + 8) != (double)(param_2->BreakingData)._padding_) {
    iVar6 = (param_2->BreakingData).AllBreakingsArray.ArrayMax;
    (param_2->BreakingData).AllBreakingsArray.ArrayNum = 0;
    if (iVar6 < 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,0x10,0,&(param_2->BreakingData).AllBreakingsArray.AllocatorInstance,0,
                 &(param_2->BreakingData).AllBreakingsArray.ArrayMax);
    }
    (param_2->BreakingData)._padding_ = (longlong)(double)*(float *)((longlong)param_1 + 8);
  }
  pFVar2 = *(FBreakingData **)param_1;
  pFVar3 = (FBreakingData *)(param_2->BreakingData).AllBreakingsArray.AllocatorInstance.Data;
  if ((pFVar3 <= pFVar2) && (pFVar2 < pFVar3 + (param_2->BreakingData).AllBreakingsArray.ArrayMax))
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
  iVar6 = (param_2->BreakingData).AllBreakingsArray.ArrayNum;
  piVar1 = &(param_2->BreakingData).AllBreakingsArray.ArrayMax;
  if (iVar6 == *piVar1) {
    iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(param_2->BreakingData).AllBreakingsArray.AllocatorInstance,piVar1);
    (param_2->BreakingData).AllBreakingsArray.ArrayNum = iVar6;
  }
  (param_2->BreakingData).AllBreakingsArray.ArrayNum = iVar6 + 1;
  ::Chaos::FBreakingData::FBreakingData
            ((FBreakingData *)
             ((param_2->BreakingData).AllBreakingsArray.AllocatorInstance.Data +
             (longlong)iVar6 * 0xc0),pFVar2);
  return;
}

// Call @ 14daed2d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AChaosCacheManager::HandlePostSolve'::__l2::<lambda_2>,void,UChaosCache_*,FObservedComponent_&,Chaos::FComponentCacheAdapter_*>
::Call(void *param_1,UChaosCache **param_2,FObservedComponent *param_3,
      FComponentCacheAdapter **param_4)

{
  `AChaosCacheManager::HandlePostSolve'::__l2::<lambda_2>::operator()
            (param_1,*param_2,param_3,*param_4);
  return;
}

// Call @ 14daed2f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`AChaosCacheManager::HandlePreSolve'::__l2::<lambda_2>,void,UChaosCache_*,FObservedComponent_&,Chaos::FComponentCacheAdapter_*>
::Call(void *param_1,UChaosCache **param_2,FObservedComponent *param_3,
      FComponentCacheAdapter **param_4)

{
  `AChaosCacheManager::HandlePreSolve'::__l2::<lambda_2>::operator()
            (param_1,*param_2,param_3,*param_4);
  return;
}

// Call @ 14daed310

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l95::<lambda_2>,void,Chaos::FTrailingEventData_&>
::Call(void *param_1,FTrailingEventData *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  
  if ((double)*(float *)((longlong)param_1 + 8) != (double)(param_2->TrailingData)._padding_) {
    iVar7 = (param_2->TrailingData).AllTrailingsArray.ArrayMax;
    (param_2->TrailingData).AllTrailingsArray.ArrayNum = 0;
    if (iVar7 < 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc0,0x10,0,&(param_2->TrailingData).AllTrailingsArray.AllocatorInstance,0,
                 &(param_2->TrailingData).AllTrailingsArray.ArrayMax);
    }
    (param_2->TrailingData)._padding_ = (longlong)(double)*(float *)((longlong)param_1 + 8);
  }
  pFVar2 = *(FScriptContainerElement **)param_1;
  pFVar3 = (param_2->TrailingData).AllTrailingsArray.AllocatorInstance.Data;
  if ((pFVar3 <= pFVar2) &&
     (pFVar2 < pFVar3 + (longlong)(param_2->TrailingData).AllTrailingsArray.ArrayMax * 0xc0)) {
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
  iVar7 = (param_2->TrailingData).AllTrailingsArray.ArrayNum;
  piVar1 = &(param_2->TrailingData).AllTrailingsArray.ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10c0,&(param_2->TrailingData).AllTrailingsArray.AllocatorInstance,piVar1);
    (param_2->TrailingData).AllTrailingsArray.ArrayNum = iVar7;
  }
  (param_2->TrailingData).AllTrailingsArray.ArrayNum = iVar7 + 1;
  pFVar3 = (param_2->TrailingData).AllTrailingsArray.AllocatorInstance.Data;
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

// Call @ 14daed320

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`Chaos::FGeometryCollectionCacheAdapter::Playback_PreSolve'::__l108::<lambda_3>,void,Chaos::FCollisionEventData_&>
::Call(void *param_1,FCollisionEventData *param_2)

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
  *this;
  FScriptContainerElement *pFVar15;
  IPhysicsProxyBase *pIStackX_8;
  int aiStack_18 [4];
  
  pTVar1 = &(param_2->CollisionData).AllCollisionsArray;
  if ((double)*(float *)((longlong)param_1 + 8) != (double)(param_2->CollisionData)._padding_) {
    iVar8 = (param_2->CollisionData).AllCollisionsArray.ArrayMax;
    (param_2->CollisionData).AllCollisionsArray.ArrayNum = 0;
    if (iVar8 < 0) {
      ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x120,8,0,&pTVar1->AllocatorInstance,0,
                 &(param_2->CollisionData).AllCollisionsArray.ArrayMax);
    }
    TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<IPhysicsProxyBase_*,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
             *)&(param_2->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap);
    (param_2->CollisionData)._padding_ = (longlong)(double)*(float *)((longlong)param_1 + 8);
  }
  this = &(param_2->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap;
  pFVar3 = *(FScriptContainerElement **)param_1;
  pFVar4 = (pTVar1->AllocatorInstance).Data;
  if (((pFVar4 <= pFVar3) &&
      (pFVar3 < pFVar4 + (longlong)(param_2->CollisionData).AllCollisionsArray.ArrayMax * 0x120)) &&
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
  aiStack_18[0] = (param_2->CollisionData).AllCollisionsArray.ArrayNum;
  piVar2 = &(param_2->CollisionData).AllCollisionsArray.ArrayMax;
  if (aiStack_18[0] == *piVar2) {
    aiStack_18[0] =
         ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x120,8,&pTVar1->AllocatorInstance,piVar2);
    (param_2->CollisionData).AllCollisionsArray.ArrayNum = aiStack_18[0];
  }
  (param_2->CollisionData).AllCollisionsArray.ArrayNum = aiStack_18[0] + 1;
  lVar11 = 2;
  pFVar4 = (pTVar1->AllocatorInstance).Data + (longlong)aiStack_18[0] * 0x120;
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
  pIStackX_8 = *(IPhysicsProxyBase **)((longlong)param_1 + 0x10);
  uVar10 = ((uint)((ulonglong)pIStackX_8 >> 0x14) & 0xffff ^ (uint)((ulonglong)pIStackX_8 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  if (*(int *)&(param_2->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x8 !=
      *(int *)&(param_2->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x34) {
    puVar13 = *(undefined1 **)
               &(param_2->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x40;
    if (puVar13 == (undefined1 *)0x0) {
      puVar13 = &(param_2->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.field_0x38;
    }
    iVar8 = *(int *)(puVar13 +
                    (ulonglong)
                    (*(int *)&(param_2->PhysicsProxyToCollisionIndices).PhysicsProxyToIndicesMap.
                              field_0x48 - 1U & uVar10) * 4);
    if (iVar8 != -1) {
      do {
        puVar12 = (ulonglong *)((longlong)iVar8 * 0x20 + *(longlong *)this);
        if ((IPhysicsProxyBase *)*puVar12 == pIStackX_8) {
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
                       *)this,uVar10,&pIStackX_8);
LAB_14daea4fe:
  pFVar3 = (pTVar9->AllocatorInstance).Data;
  if (((pFVar3 <= (FScriptContainerElement *)aiStack_18) &&
      ((FScriptContainerElement *)aiStack_18 < pFVar3 + (longlong)pTVar9->ArrayMax * 4)) &&
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
    iVar8 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&pTVar9->AllocatorInstance,&pTVar9->ArrayMax);
  }
  pTVar9->ArrayNum = iVar8 + 1;
  *(int *)((pTVar9->AllocatorInstance).Data + (longlong)iVar8 * 4) = aiStack_18[0];
  return;
}

