// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: InterchangePipelines
// Functions: 174

// Construct<FInterchangePipelineMeshesUtilitiesContext> @ 14e72e2b0

void __cdecl
UE::CoreUObject::Private::Construct<FInterchangePipelineMeshesUtilitiesContext>(void *param_1)

{
  *(undefined4 *)param_1 = 0x1000000;
  *(undefined2 *)((longlong)param_1 + 4) = 1;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  return;
}

// ConstructForTests<FInterchangePipelineMeshesUtilitiesContext> @ 14e72e2d0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInterchangePipelineMeshesUtilitiesContext>
          (void *param_1)

{
  *(undefined4 *)param_1 = 0x1000000;
  *(undefined2 *)((longlong)param_1 + 4) = 1;
  *(undefined1 *)((longlong)param_1 + 6) = 0;
  return;
}

// Destruct<FInterchangePipelineMeshesUtilitiesContext> @ 14e72e2f0

void __cdecl
UE::CoreUObject::Private::Destruct<FInterchangePipelineMeshesUtilitiesContext>(void *param_1)

{
  return;
}

// Copy<FInterchangePipelineMeshesUtilitiesContext> @ 14e72e300

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangePipelineMeshesUtilitiesContext>
          (void *param_1,void *param_2,int param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = (longlong)param_2 - (longlong)param_1;
    do {
      uVar2 = *(undefined2 *)(lVar3 + 4 + (longlong)param_1);
      uVar1 = *(undefined1 *)(lVar3 + 6 + (longlong)param_1);
      *(undefined4 *)param_1 = *(undefined4 *)(lVar3 + (longlong)param_1);
      *(undefined2 *)((longlong)param_1 + 4) = uVar2;
      *(undefined1 *)((longlong)param_1 + 6) = uVar1;
      param_1 = (void *)((longlong)param_1 + 7);
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return true;
}

// Construct<FInterchangeMeshGeometry> @ 14e72e380

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeMeshGeometry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// ConstructForTests<FInterchangeMeshGeometry> @ 14e72e3b0

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInterchangeMeshGeometry>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x30) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  return;
}

// Destruct<FInterchangeMeshGeometry> @ 14e72e3e0

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeMeshGeometry>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x28),*(int *)((longlong)param_1 + 0x30));
  if (*(void **)((longlong)param_1 + 0x28) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x28));
  }
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x18),*(int *)((longlong)param_1 + 0x20));
  if (*(void **)((longlong)param_1 + 0x18) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x18));
  }
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
    return;
  }
  return;
}

// Copy<FInterchangeMeshGeometry> @ 14e72e480

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeMeshGeometry>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (UObject *)(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data,
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    *(FScriptContainerElement **)((longlong)param_1 + 0x10) =
         (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x18),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x18));
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x28),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x28));
    param_2 = (void *)((longlong)param_2 + 0x38);
    param_1 = (int *)((longlong)param_1 + 0x38);
  }
  return true;
}

// Construct<FInterchangeMeshInstance> @ 14e72e7c0

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeMeshInstance>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// ConstructForTests<FInterchangeMeshInstance> @ 14e72e830

void __cdecl UE::CoreUObject::Private::ConstructForTests<FInterchangeMeshInstance>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  *(undefined8 *)((longlong)param_1 + 0x20) = 0;
  *(undefined8 *)((longlong)param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x40) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0x80;
  *(undefined4 *)((longlong)param_1 + 0x50) = 0xffffffff;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x60) = 0;
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  *(undefined8 *)((longlong)param_1 + 0x70) = 0;
  *(undefined8 *)((longlong)param_1 + 0x78) = 0;
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18) = 0;
  return;
}

// Destruct<FInterchangeMeshInstance> @ 14e72e8c0

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeMeshInstance>(void *param_1)

{
  DestructItems<FString,int>
            (*(FString **)((longlong)param_1 + 0x70),*(int *)((longlong)param_1 + 0x78));
  if (*(void **)((longlong)param_1 + 0x70) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x70));
  }
  *(undefined4 *)((longlong)param_1 + 0x68) = 0;
  if (*(void **)((longlong)param_1 + 0x60) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)param_1 + 0x60));
  }
  TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)((longlong)param_1 + 0x20));
  if (*(void **)param_1 != (void *)0x0) {
    FMemory::Free(*(void **)param_1);
  }
  return;
}

// Copy<FInterchangeMeshInstance> @ 14e72ea40

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeMeshInstance>(void *param_1,void *param_2,int param_3)

{
  UObject *pUVar1;
  
  for (; param_3 != 0; param_3 = param_3 + -1) {
    ::FString::operator=(param_1,param_2);
    if ((GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar1 = (UObject *)(((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data,
       pUVar1 != (UObject *)0x0)) {
      GC::MarkAsReachable(pUVar1);
    }
    (((FString *)((longlong)param_1 + 0x10))->Data).AllocatorInstance.Data =
         (((FString *)((longlong)param_2 + 0x10))->Data).AllocatorInstance.Data;
    *(char *)&(((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum =
         (char)(((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum;
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum + 1) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum + 1);
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum + 2) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum + 2);
    *(undefined1 *)((longlong)&(((FString *)((longlong)param_1 + 0x10))->Data).ArrayNum + 3) =
         *(undefined1 *)((longlong)&(((FString *)((longlong)param_2 + 0x10))->Data).ArrayNum + 3);
    if ((TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_1 + 0x20) !=
        (TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
         *)((longlong)param_2 + 0x20)) {
      Core::Private::
      CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
                ((ForElementType<FSetElementId> *)
                 &(((FString *)((longlong)param_1 + 0x50))->Data).ArrayNum,
                 &(((FString *)((longlong)param_1 + 0x60))->Data).ArrayNum,
                 (ForElementType<FSetElementId> *)
                 &(((FString *)((longlong)param_2 + 0x50))->Data).ArrayNum,
                 (((FString *)((longlong)param_2 + 0x60))->Data).ArrayNum);
      TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::operator=((TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_1 + 0x20),
                  (TSparseArray<TSparseSetElement<TTuple<int,FInterchangeLodSceneNodeContainer>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)((longlong)param_2 + 0x20));
    }
    TArray<FString,TSizedDefaultAllocator<32>_>::operator=
              ((TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_1 + 0x70),
               (TArray<FString,TSizedDefaultAllocator<32>_> *)((longlong)param_2 + 0x70));
    param_2 = (void *)((longlong)param_2 + 0x80);
    param_1 = (FString *)((longlong)param_1 + 0x80);
  }
  return true;
}

// Construct<FInterchangeLodSceneNodeContainer> @ 14e72eda0

void __cdecl UE::CoreUObject::Private::Construct<FInterchangeLodSceneNodeContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// ConstructForTests<FInterchangeLodSceneNodeContainer> @ 14e72edb0

void __cdecl
UE::CoreUObject::Private::ConstructForTests<FInterchangeLodSceneNodeContainer>(void *param_1)

{
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)((longlong)param_1 + 8) = 0;
  return;
}

// Destruct<FInterchangeLodSceneNodeContainer> @ 14e72edc0

void __cdecl UE::CoreUObject::Private::Destruct<FInterchangeLodSceneNodeContainer>(void *param_1)

{
  void *pvVar1;
  FLowLevelMemTracker *this;
  
  pvVar1 = *(void **)param_1;
  if (pvVar1 == (void *)0x0) {
    return;
  }
  if (pvVar1 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,pvVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar1);
  }
  return;
}

// Copy<FInterchangeLodSceneNodeContainer> @ 14e72ede0

bool __cdecl
UE::CoreUObject::Private::Copy<FInterchangeLodSceneNodeContainer>
          (void *param_1,void *param_2,int param_3)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  ForAnyElementType *pFVar6;
  
  if (param_3 != 0) {
    pFVar6 = param_1;
    do {
      pFVar2 = (ForAnyElementType *)(((longlong)param_2 - (longlong)param_1) + (longlong)pFVar6);
      if (pFVar6 != pFVar2) {
        iVar3 = *(int *)&pFVar2[1].Data;
        piVar1 = (int *)((longlong)&pFVar6[1].Data + 4);
        pFVar5 = pFVar2->Data;
        iVar4 = *piVar1;
        *(int *)&pFVar6[1].Data = iVar3;
        if ((iVar3 == 0) && (iVar4 == 0)) {
          *piVar1 = 0;
        }
        else {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,iVar3,iVar4,pFVar6,iVar3,piVar1);
          ConstructItems<TObjectPtr<UInterchangeBaseNode_const_>,TObjectPtr<UInterchangeBaseNode_const_>,int>
                    (pFVar6->Data,(TObjectPtr<UInterchangeBaseNode_const_> *)pFVar5,iVar3);
        }
      }
      param_3 = param_3 + -1;
      pFVar6 = pFVar6 + 2;
    } while (param_3 != 0);
  }
  return true;
}

// ApplySlotMaterialDependencies<UInterchangeGeometryCacheFactoryNode> @ 14e731f50

void __cdecl
UE::Interchange::MeshesUtilities::
ApplySlotMaterialDependencies<UInterchangeGeometryCacheFactoryNode>
          (UInterchangeGeometryCacheFactoryNode *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2,UInterchangeBaseNodeContainer *param_3,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  code *pcVar5;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar6
  ;
  bool bVar7;
  int iVar8;
  UInterchangeBaseMaterialFactoryNode *this;
  UClass *pUVar9;
  int iVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  int iVar18;
  bool local_res20 [8];
  bool local_118;
  undefined1 local_117 [7];
  ForElementType<unsigned_int> local_110;
  FString local_108;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  FString local_e8;
  FString local_d8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined1 local_94 [12];
  int local_88;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString *local_50;
  undefined8 *local_48;
  
  iVar18 = 0;
  local_res20[0] = false;
  if (param_4 !=
      (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *)
      0x0) {
    UInterchangeMeshFactoryNode::GetCustomKeepSectionsSeparate
              ((UInterchangeMeshFactoryNode *)param_1,local_res20);
    iVar18 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
  }
  iVar8 = *(int *)&param_2->field_0x28;
  local_110 = (ForElementType<unsigned_int>)&param_2->field_0x10;
  iStack_c0 = 0;
  local_a8 = 0;
  uStack_bc = 1;
  iStack_ac = 0;
  if (iVar8 != 0) {
    puVar17 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)local_110;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      iStack_c0 = iStack_c0 + 1;
      local_a8 = local_a8 + 0x20;
      iStack_ac = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14e732021;
      uVar14 = puVar17[iStack_c0];
    }
    uStack_bc = ~(uVar14 - 1) & uVar14;
    uVar2 = (ulonglong)uStack_bc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_98 = (int)lVar4;
    iStack_ac = local_98 + -1 + local_a8;
    if (iVar8 < iStack_ac) {
      iStack_ac = iVar8;
    }
  }
LAB_14e732021:
  uVar14 = *(uint *)&param_2->field_0x28;
  iStack_a0 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_bc,iStack_c0);
  uStack_b0 = 0xffffffff;
  TStack_78.CurrentBitIndex = iStack_ac;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar14 >> 5;
  TStack_78._28_4_ = iStack_ac;
  TStack_78.BaseBitIndex = local_a8;
  uStack_58 = CONCAT44(uStack_9c,iStack_a0);
  local_c8 = param_2;
  local_b8 = (undefined1 *)local_110;
  iStack_a4 = iStack_ac;
  local_80 = param_2;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_110;
  if ((((int)uVar14 < 0) || (iVar8 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(int *)((longlong)local_110 + 0x18);
  if (uVar14 != uVar3) {
    FVar16 = *(ForElementType<unsigned_int> *)((longlong)local_110 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_110 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_110;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar10 * 4);
    while (uVar14 == 0) {
      iVar10 = iVar10 + 1;
      uVar13 = uVar13 + 0x20;
      uVar14 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar10) goto LAB_14e732120;
      uVar14 = *(uint *)((longlong)FVar16 + (longlong)iVar10 * 4);
    }
    uVar2 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar14 = (int)lVar4 + -1 + uVar13;
    if ((int)uVar3 < (int)uVar14) {
      uVar14 = uVar3;
    }
  }
LAB_14e732120:
  do {
    pTVar6 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_117);
    }
    if (((TStack_78.CurrentBitIndex == uVar14) &&
        ((ForElementType<unsigned_int>)TStack_78.Array == local_110)) && (pTVar6 == param_2)) {
      if (param_4 !=
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *)0x0) {
        TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
        Append<FDefaultSetAllocator>(param_4,param_2);
      }
      return;
    }
    lVar4 = *(longlong *)pTVar6;
    local_108.Data.ArrayNum = *(int *)(lVar4 + 8 + (longlong)TStack_78.CurrentBitIndex * 0x28);
    lVar11 = (longlong)local_108.Data.ArrayNum;
    puVar1 = (undefined8 *)(lVar4 + (longlong)TStack_78.CurrentBitIndex * 0x28);
    _Src = (void *)*puVar1;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_108.Data.ArrayNum == 0) {
      local_108.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)&local_108,
                 local_108.Data.ArrayNum,&local_108.Data.ArrayMax);
      memcpy(local_108.Data.AllocatorInstance.Data,_Src,lVar11 * 2);
    }
    if ((local_res20[0] != false) &&
       (param_4 !=
        (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
         *)0x0)) {
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar12.Data = local_108.Data.AllocatorInstance.Data;
      }
      iVar10 = 0;
      iVar8 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar8 = iVar10;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar12.Data);
      iVar8 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                          *)param_4,uVar13,&local_108);
      if (iVar8 != -1) {
        local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.Data.ArrayNum = 0;
        local_d8.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_d8,iVar18);
        ::FString::ConcatCF((FString *)(local_94 + 4),L"_Section",&local_d8);
        if (local_88 != 0) {
          iVar10 = local_88 + -1;
        }
        ::FString::AppendChars(&local_108,(wchar_t *)local_94._4_8_,iVar10);
        if ((wchar_t *)local_94._4_8_ != (wchar_t *)0x0) {
          FMemory::Free((void *)local_94._4_8_);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      local_50 = &local_108;
      local_48 = puVar1 + 2;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)param_4,(TPairInitializer<FString_const_&,FString_const_&> *)local_94,
                 (bool *)&local_50);
      iVar18 = iVar18 + 1;
    }
    UInterchangeBaseMaterialFactoryNode::GetMaterialFactoryNodeUidFromMaterialNodeUid
              (&local_e8,(FString *)(puVar1 + 2));
    UInterchangeMeshFactoryNode::SetSlotMaterialDependencyUid
              ((UInterchangeMeshFactoryNode *)param_1,&local_108,&local_e8);
    this = (UInterchangeBaseMaterialFactoryNode *)
           UInterchangeBaseNodeContainer::GetFactoryNode(param_3,&local_e8);
    if (this != (UInterchangeBaseMaterialFactoryNode *)0x0) {
      pUVar9 = Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister();
      iVar8 = (int)pUVar9->_padding_;
      if ((iVar8 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar8 * 8)
          == &pUVar9->_padding_)) {
        local_118 = true;
        UInterchangeBaseMaterialFactoryNode::GetCustomIsMaterialImportEnabled(this,&local_118);
        UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)this,local_118);
        local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.ArrayNum = 0;
        local_f8.ArrayMax = 0;
        UInterchangeFactoryBaseNode::GetFactoryDependencies
                  ((UInterchangeFactoryBaseNode *)param_1,&local_f8);
        pFVar15 = local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayNum * 0x10;
        iVar8 = local_e8.Data.ArrayNum;
        for (FVar12.Data = local_f8.AllocatorInstance.Data; FVar12.Data != pFVar15;
            FVar12.Data = FVar12.Data + 0x10) {
          iVar10 = *(int *)(FVar12.Data + 8);
          if (iVar10 == iVar8) {
            if (iVar10 < 2) goto LAB_14e732396;
            iVar8 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)FVar12.Data,
                               (wchar_t *)local_e8.Data.AllocatorInstance.Data);
            bVar7 = iVar8 == 0;
            iVar8 = local_e8.Data.ArrayNum;
          }
          else {
            bVar7 = iVar10 + iVar8 == 1;
          }
          if (bVar7) goto LAB_14e732396;
        }
        UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                  ((UInterchangeFactoryBaseNode *)param_1,&local_e8);
LAB_14e732396:
        DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
        if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.AllocatorInstance.Data);
        }
      }
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// ApplySlotMaterialDependencies<UInterchangeMeshActorFactoryNode> @ 14e732420

void __cdecl
UE::Interchange::MeshesUtilities::ApplySlotMaterialDependencies<UInterchangeMeshActorFactoryNode>
          (UInterchangeMeshActorFactoryNode *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2,UInterchangeBaseNodeContainer *param_3,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_4)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  uint uVar4;
  void *_Src;
  longlong lVar5;
  code *pcVar6;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar7
  ;
  bool bVar8;
  int iVar9;
  UInterchangeBaseMaterialFactoryNode *this;
  UClass *pUVar10;
  int iVar11;
  longlong lVar12;
  ForAnyElementType FVar13;
  uint uVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  uint *puVar17;
  undefined1 *puVar18;
  bool local_res10 [8];
  UInterchangeBaseNodeContainer *local_res18;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_res20;
  undefined1 local_d8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_d0;
  FString local_c0;
  FString local_b0;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_a0;
  int iStack_98;
  uint uStack_94;
  undefined1 *local_90;
  undefined4 uStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  undefined4 uStack_74;
  int local_70;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  undefined8 uStack_40;
  
  iVar9 = *(int *)&param_2->field_0x28;
  puVar1 = &param_2->field_0x10;
  iStack_98 = 0;
  local_80 = 0;
  uStack_94 = 1;
  iStack_84 = 0;
  if (iVar9 != 0) {
    puVar17 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)puVar1;
    }
    uVar15 = *puVar17;
    while (uVar15 == 0) {
      iStack_98 = iStack_98 + 1;
      local_80 = local_80 + 0x20;
      iStack_84 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_98) goto LAB_14e7324cc;
      uVar15 = puVar17[iStack_98];
    }
    uStack_94 = ~(uVar15 - 1) & uVar15;
    uVar3 = (ulonglong)uStack_94 * 2 + 1;
    lVar5 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    local_70 = (int)lVar5;
    iStack_84 = local_70 + -1 + local_80;
    if (iVar9 < iStack_84) {
      iStack_84 = iVar9;
    }
  }
LAB_14e7324cc:
  uVar15 = *(uint *)&param_2->field_0x28;
  uVar14 = uVar15 & 0xffffffe0;
  iStack_78 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uStack_88 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_94,iStack_98);
  TStack_60.CurrentBitIndex = iStack_84;
  TStack_60.UnvisitedBitMask = 0xffffffff;
  iVar11 = (int)uVar15 >> 5;
  TStack_60._28_4_ = iStack_84;
  TStack_60.BaseBitIndex = local_80;
  uStack_40 = CONCAT44(uStack_74,iStack_78);
  local_res18 = param_3;
  local_res20 = param_4;
  local_a0 = param_2;
  local_90 = puVar1;
  iStack_7c = iStack_84;
  local_68 = param_2;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar15 < 0) || (iVar9 < (int)uVar15)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar4 = *(uint *)&param_2->field_0x28;
  if (uVar15 != uVar4) {
    puVar18 = *(undefined1 **)&param_2->field_0x20;
    if (*(undefined1 **)&param_2->field_0x20 == (undefined1 *)0x0) {
      puVar18 = puVar1;
    }
    uVar15 = -1 << ((byte)uVar15 & 0x1f) & *(uint *)(puVar18 + (longlong)iVar11 * 4);
    while (uVar15 == 0) {
      iVar11 = iVar11 + 1;
      uVar14 = uVar14 + 0x20;
      uVar15 = uVar4;
      if ((int)(((int)(uVar4 - 1) >> 0x1f & 0x1fU) + (uVar4 - 1)) >> 5 < iVar11) goto LAB_14e7325c0;
      uVar15 = *(uint *)(puVar18 + (longlong)iVar11 * 4);
    }
    uVar3 = (ulonglong)(~(uVar15 - 1) & uVar15) * 2 + 1;
    lVar5 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
      }
    }
    uVar15 = (int)lVar5 + -1 + uVar14;
    if ((int)uVar4 < (int)uVar15) {
      uVar15 = uVar4;
    }
  }
LAB_14e7325c0:
  do {
    pTVar7 = local_68;
    if (*(int *)&local_68->field_0x8 - *(int *)&local_68->field_0x34 != (int)uStack_40) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_d8);
    }
    if (((TStack_60.CurrentBitIndex == uVar15) &&
        (TStack_60.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar7 == param_2))
    {
      if (local_res20 !=
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *)0x0) {
        TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
        Append<FDefaultSetAllocator>(local_res20,param_2);
      }
      return;
    }
    local_b0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    lVar5 = *(longlong *)pTVar7;
    local_b0.Data.ArrayNum = *(int *)(lVar5 + 8 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    lVar12 = (longlong)local_b0.Data.ArrayNum;
    puVar2 = (undefined8 *)(lVar5 + (longlong)TStack_60.CurrentBitIndex * 0x28);
    _Src = (void *)*puVar2;
    if (local_b0.Data.ArrayNum == 0) {
      local_b0.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_b0.Data.ArrayNum,0,(ForAnyElementType *)&local_b0,local_b0.Data.ArrayNum,
                 &local_b0.Data.ArrayMax);
      memcpy(local_b0.Data.AllocatorInstance.Data,_Src,lVar12 * 2);
    }
    UInterchangeBaseMaterialFactoryNode::GetMaterialFactoryNodeUidFromMaterialNodeUid
              (&local_c0,(FString *)(puVar2 + 2));
    UInterchangeMeshActorFactoryNode::SetSlotMaterialDependencyUid(param_1,&local_b0,&local_c0);
    this = (UInterchangeBaseMaterialFactoryNode *)
           UInterchangeBaseNodeContainer::GetFactoryNode(local_res18,&local_c0);
    if (this != (UInterchangeBaseMaterialFactoryNode *)0x0) {
      pUVar10 = Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister();
      iVar9 = (int)pUVar10->_padding_;
      if ((iVar9 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar9 * 8)
          == &pUVar10->_padding_)) {
        local_res10[0] = true;
        UInterchangeBaseMaterialFactoryNode::GetCustomIsMaterialImportEnabled(this,local_res10);
        UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)this,local_res10[0]);
        local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d0.ArrayNum = 0;
        local_d0.ArrayMax = 0;
        UInterchangeFactoryBaseNode::GetFactoryDependencies
                  ((UInterchangeFactoryBaseNode *)param_1,&local_d0);
        pFVar16 = local_d0.AllocatorInstance.Data + (longlong)local_d0.ArrayNum * 0x10;
        iVar9 = local_c0.Data.ArrayNum;
        for (FVar13.Data = local_d0.AllocatorInstance.Data; FVar13.Data != pFVar16;
            FVar13.Data = FVar13.Data + 0x10) {
          iVar11 = *(int *)(FVar13.Data + 8);
          if (iVar11 == iVar9) {
            if (iVar11 < 2) goto LAB_14e732741;
            iVar9 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)FVar13.Data,
                               (wchar_t *)local_c0.Data.AllocatorInstance.Data);
            bVar8 = iVar9 == 0;
            iVar9 = local_c0.Data.ArrayNum;
          }
          else {
            bVar8 = iVar11 + iVar9 == 1;
          }
          if (bVar8) goto LAB_14e732741;
        }
        UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                  ((UInterchangeFactoryBaseNode *)param_1,&local_c0);
LAB_14e732741:
        DestructItems<FString,int>((FString *)local_d0.AllocatorInstance.Data,local_d0.ArrayNum);
        if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d0.AllocatorInstance.Data);
        }
      }
    }
    if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.Data.AllocatorInstance.Data);
    }
    if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b0.Data.AllocatorInstance.Data);
    }
    TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
  } while( true );
}

// ApplySlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode> @ 14e7327d0

void __cdecl
UE::Interchange::MeshesUtilities::ApplySlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>
          (UInterchangeSkeletalMeshFactoryNode *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2,UInterchangeBaseNodeContainer *param_3,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  code *pcVar5;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar6
  ;
  bool bVar7;
  int iVar8;
  UInterchangeBaseMaterialFactoryNode *this;
  UClass *pUVar9;
  int iVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  int iVar18;
  bool local_res20 [8];
  bool local_118;
  undefined1 local_117 [7];
  ForElementType<unsigned_int> local_110;
  FString local_108;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  FString local_e8;
  FString local_d8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined1 local_94 [12];
  int local_88;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString *local_50;
  undefined8 *local_48;
  
  iVar18 = 0;
  local_res20[0] = false;
  if (param_4 !=
      (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *)
      0x0) {
    UInterchangeMeshFactoryNode::GetCustomKeepSectionsSeparate
              ((UInterchangeMeshFactoryNode *)param_1,local_res20);
    iVar18 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
  }
  iVar8 = *(int *)&param_2->field_0x28;
  local_110 = (ForElementType<unsigned_int>)&param_2->field_0x10;
  iStack_c0 = 0;
  local_a8 = 0;
  uStack_bc = 1;
  iStack_ac = 0;
  if (iVar8 != 0) {
    puVar17 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)local_110;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      iStack_c0 = iStack_c0 + 1;
      local_a8 = local_a8 + 0x20;
      iStack_ac = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14e7328a1;
      uVar14 = puVar17[iStack_c0];
    }
    uStack_bc = ~(uVar14 - 1) & uVar14;
    uVar2 = (ulonglong)uStack_bc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_98 = (int)lVar4;
    iStack_ac = local_98 + -1 + local_a8;
    if (iVar8 < iStack_ac) {
      iStack_ac = iVar8;
    }
  }
LAB_14e7328a1:
  uVar14 = *(uint *)&param_2->field_0x28;
  iStack_a0 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_bc,iStack_c0);
  uStack_b0 = 0xffffffff;
  TStack_78.CurrentBitIndex = iStack_ac;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar14 >> 5;
  TStack_78._28_4_ = iStack_ac;
  TStack_78.BaseBitIndex = local_a8;
  uStack_58 = CONCAT44(uStack_9c,iStack_a0);
  local_c8 = param_2;
  local_b8 = (undefined1 *)local_110;
  iStack_a4 = iStack_ac;
  local_80 = param_2;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_110;
  if ((((int)uVar14 < 0) || (iVar8 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(int *)((longlong)local_110 + 0x18);
  if (uVar14 != uVar3) {
    FVar16 = *(ForElementType<unsigned_int> *)((longlong)local_110 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_110 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_110;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar10 * 4);
    while (uVar14 == 0) {
      iVar10 = iVar10 + 1;
      uVar13 = uVar13 + 0x20;
      uVar14 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar10) goto LAB_14e7329a0;
      uVar14 = *(uint *)((longlong)FVar16 + (longlong)iVar10 * 4);
    }
    uVar2 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar14 = (int)lVar4 + -1 + uVar13;
    if ((int)uVar3 < (int)uVar14) {
      uVar14 = uVar3;
    }
  }
LAB_14e7329a0:
  do {
    pTVar6 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_117);
    }
    if (((TStack_78.CurrentBitIndex == uVar14) &&
        ((ForElementType<unsigned_int>)TStack_78.Array == local_110)) && (pTVar6 == param_2)) {
      if (param_4 !=
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *)0x0) {
        TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
        Append<FDefaultSetAllocator>(param_4,param_2);
      }
      return;
    }
    lVar4 = *(longlong *)pTVar6;
    local_108.Data.ArrayNum = *(int *)(lVar4 + 8 + (longlong)TStack_78.CurrentBitIndex * 0x28);
    lVar11 = (longlong)local_108.Data.ArrayNum;
    puVar1 = (undefined8 *)(lVar4 + (longlong)TStack_78.CurrentBitIndex * 0x28);
    _Src = (void *)*puVar1;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_108.Data.ArrayNum == 0) {
      local_108.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)&local_108,
                 local_108.Data.ArrayNum,&local_108.Data.ArrayMax);
      memcpy(local_108.Data.AllocatorInstance.Data,_Src,lVar11 * 2);
    }
    if ((local_res20[0] != false) &&
       (param_4 !=
        (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
         *)0x0)) {
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar12.Data = local_108.Data.AllocatorInstance.Data;
      }
      iVar10 = 0;
      iVar8 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar8 = iVar10;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar12.Data);
      iVar8 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                          *)param_4,uVar13,&local_108);
      if (iVar8 != -1) {
        local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.Data.ArrayNum = 0;
        local_d8.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_d8,iVar18);
        ::FString::ConcatCF((FString *)(local_94 + 4),L"_Section",&local_d8);
        if (local_88 != 0) {
          iVar10 = local_88 + -1;
        }
        ::FString::AppendChars(&local_108,(wchar_t *)local_94._4_8_,iVar10);
        if ((wchar_t *)local_94._4_8_ != (wchar_t *)0x0) {
          FMemory::Free((void *)local_94._4_8_);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      local_50 = &local_108;
      local_48 = puVar1 + 2;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)param_4,(TPairInitializer<FString_const_&,FString_const_&> *)local_94,
                 (bool *)&local_50);
      iVar18 = iVar18 + 1;
    }
    UInterchangeBaseMaterialFactoryNode::GetMaterialFactoryNodeUidFromMaterialNodeUid
              (&local_e8,(FString *)(puVar1 + 2));
    UInterchangeMeshFactoryNode::SetSlotMaterialDependencyUid
              ((UInterchangeMeshFactoryNode *)param_1,&local_108,&local_e8);
    this = (UInterchangeBaseMaterialFactoryNode *)
           UInterchangeBaseNodeContainer::GetFactoryNode(param_3,&local_e8);
    if (this != (UInterchangeBaseMaterialFactoryNode *)0x0) {
      pUVar9 = Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister();
      iVar8 = (int)pUVar9->_padding_;
      if ((iVar8 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar8 * 8)
          == &pUVar9->_padding_)) {
        local_118 = true;
        UInterchangeBaseMaterialFactoryNode::GetCustomIsMaterialImportEnabled(this,&local_118);
        UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)this,local_118);
        local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.ArrayNum = 0;
        local_f8.ArrayMax = 0;
        UInterchangeFactoryBaseNode::GetFactoryDependencies
                  ((UInterchangeFactoryBaseNode *)param_1,&local_f8);
        pFVar15 = local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayNum * 0x10;
        iVar8 = local_e8.Data.ArrayNum;
        for (FVar12.Data = local_f8.AllocatorInstance.Data; FVar12.Data != pFVar15;
            FVar12.Data = FVar12.Data + 0x10) {
          iVar10 = *(int *)(FVar12.Data + 8);
          if (iVar10 == iVar8) {
            if (iVar10 < 2) goto LAB_14e732c16;
            iVar8 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)FVar12.Data,
                               (wchar_t *)local_e8.Data.AllocatorInstance.Data);
            bVar7 = iVar8 == 0;
            iVar8 = local_e8.Data.ArrayNum;
          }
          else {
            bVar7 = iVar10 + iVar8 == 1;
          }
          if (bVar7) goto LAB_14e732c16;
        }
        UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                  ((UInterchangeFactoryBaseNode *)param_1,&local_e8);
LAB_14e732c16:
        DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
        if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.AllocatorInstance.Data);
        }
      }
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// ApplySlotMaterialDependencies<UInterchangeStaticMeshFactoryNode> @ 14e732ca0

void __cdecl
UE::Interchange::MeshesUtilities::ApplySlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>
          (UInterchangeStaticMeshFactoryNode *param_1,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_2,UInterchangeBaseNodeContainer *param_3,
          TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
          *param_4)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  void *_Src;
  longlong lVar4;
  code *pcVar5;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar6
  ;
  bool bVar7;
  int iVar8;
  UInterchangeBaseMaterialFactoryNode *this;
  UClass *pUVar9;
  int iVar10;
  longlong lVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  int iVar18;
  bool local_res20 [8];
  bool local_118;
  undefined1 local_117 [7];
  ForElementType<unsigned_int> local_110;
  FString local_108;
  TArray<FString,TSizedDefaultAllocator<32>_> local_f8;
  FString local_e8;
  FString local_d8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_c8;
  int iStack_c0;
  uint uStack_bc;
  undefined1 *local_b8;
  undefined4 uStack_b0;
  int iStack_ac;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  undefined4 uStack_9c;
  int local_98;
  undefined1 local_94 [12];
  int local_88;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  FString *local_50;
  undefined8 *local_48;
  
  iVar18 = 0;
  local_res20[0] = false;
  if (param_4 !=
      (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *)
      0x0) {
    UInterchangeMeshFactoryNode::GetCustomKeepSectionsSeparate
              ((UInterchangeMeshFactoryNode *)param_1,local_res20);
    iVar18 = *(int *)&param_4->field_0x8 - *(int *)&param_4->field_0x34;
  }
  iVar8 = *(int *)&param_2->field_0x28;
  local_110 = (ForElementType<unsigned_int>)&param_2->field_0x10;
  iStack_c0 = 0;
  local_a8 = 0;
  uStack_bc = 1;
  iStack_ac = 0;
  if (iVar8 != 0) {
    puVar17 = *(uint **)&param_2->field_0x20;
    if (*(uint **)&param_2->field_0x20 == (uint *)0x0) {
      puVar17 = (uint *)local_110;
    }
    uVar14 = *puVar17;
    while (uVar14 == 0) {
      iStack_c0 = iStack_c0 + 1;
      local_a8 = local_a8 + 0x20;
      iStack_ac = iVar8;
      if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c0) goto LAB_14e732d71;
      uVar14 = puVar17[iStack_c0];
    }
    uStack_bc = ~(uVar14 - 1) & uVar14;
    uVar2 = (ulonglong)uStack_bc * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    local_98 = (int)lVar4;
    iStack_ac = local_98 + -1 + local_a8;
    if (iVar8 < iStack_ac) {
      iStack_ac = iVar8;
    }
  }
LAB_14e732d71:
  uVar14 = *(uint *)&param_2->field_0x28;
  iStack_a0 = *(int *)&param_2->field_0x8 - *(int *)&param_2->field_0x34;
  uVar13 = uVar14 & 0xffffffe0;
  TStack_78._padding_ = CONCAT44(uStack_bc,iStack_c0);
  uStack_b0 = 0xffffffff;
  TStack_78.CurrentBitIndex = iStack_ac;
  TStack_78.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar14 >> 5;
  TStack_78._28_4_ = iStack_ac;
  TStack_78.BaseBitIndex = local_a8;
  uStack_58 = CONCAT44(uStack_9c,iStack_a0);
  local_c8 = param_2;
  local_b8 = (undefined1 *)local_110;
  iStack_a4 = iStack_ac;
  local_80 = param_2;
  TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_110;
  if ((((int)uVar14 < 0) || (iVar8 < (int)uVar14)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar3 = *(int *)((longlong)local_110 + 0x18);
  if (uVar14 != uVar3) {
    FVar16 = *(ForElementType<unsigned_int> *)((longlong)local_110 + 0x10);
    if (*(ForElementType<unsigned_int> *)((longlong)local_110 + 0x10) ==
        (ForElementType<unsigned_int>)0x0) {
      FVar16 = local_110;
    }
    uVar14 = -1 << ((byte)uVar14 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar10 * 4);
    while (uVar14 == 0) {
      iVar10 = iVar10 + 1;
      uVar13 = uVar13 + 0x20;
      uVar14 = uVar3;
      if ((int)(((int)(uVar3 - 1) >> 0x1f & 0x1fU) + (uVar3 - 1)) >> 5 < iVar10) goto LAB_14e732e70;
      uVar14 = *(uint *)((longlong)FVar16 + (longlong)iVar10 * 4);
    }
    uVar2 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
    lVar4 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar4 == 0; lVar4 = lVar4 + -1) {
      }
    }
    uVar14 = (int)lVar4 + -1 + uVar13;
    if ((int)uVar3 < (int)uVar14) {
      uVar14 = uVar3;
    }
  }
LAB_14e732e70:
  do {
    pTVar6 = local_80;
    if (*(int *)&local_80->field_0x8 - *(int *)&local_80->field_0x34 != (int)uStack_58) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_117);
    }
    if (((TStack_78.CurrentBitIndex == uVar14) &&
        ((ForElementType<unsigned_int>)TStack_78.Array == local_110)) && (pTVar6 == param_2)) {
      if (param_4 !=
          (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
           *)0x0) {
        TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
        Append<FDefaultSetAllocator>(param_4,param_2);
      }
      return;
    }
    lVar4 = *(longlong *)pTVar6;
    local_108.Data.ArrayNum = *(int *)(lVar4 + 8 + (longlong)TStack_78.CurrentBitIndex * 0x28);
    lVar11 = (longlong)local_108.Data.ArrayNum;
    puVar1 = (undefined8 *)(lVar4 + (longlong)TStack_78.CurrentBitIndex * 0x28);
    _Src = (void *)*puVar1;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_108.Data.ArrayNum == 0) {
      local_108.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_108.Data.ArrayNum,0,(ForAnyElementType *)&local_108,
                 local_108.Data.ArrayNum,&local_108.Data.ArrayMax);
      memcpy(local_108.Data.AllocatorInstance.Data,_Src,lVar11 * 2);
    }
    if ((local_res20[0] != false) &&
       (param_4 !=
        (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
         *)0x0)) {
      FVar12.Data = (FScriptContainerElement *)L"";
      if (local_108.Data.ArrayNum != 0) {
        FVar12.Data = local_108.Data.AllocatorInstance.Data;
      }
      iVar10 = 0;
      iVar8 = local_108.Data.ArrayNum + -1;
      if (local_108.Data.ArrayNum == 0) {
        iVar8 = iVar10;
      }
      uVar13 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar8,(wchar_t *)FVar12.Data);
      iVar8 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::FindIndexByHash<FString>
                        ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                          *)param_4,uVar13,&local_108);
      if (iVar8 != -1) {
        local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_d8.Data.ArrayNum = 0;
        local_d8.Data.ArrayMax = 0;
        ::FString::AppendInt(&local_d8,iVar18);
        ::FString::ConcatCF((FString *)(local_94 + 4),L"_Section",&local_d8);
        if (local_88 != 0) {
          iVar10 = local_88 + -1;
        }
        ::FString::AppendChars(&local_108,(wchar_t *)local_94._4_8_,iVar10);
        if ((wchar_t *)local_94._4_8_ != (wchar_t *)0x0) {
          FMemory::Free((void *)local_94._4_8_);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
      local_50 = &local_108;
      local_48 = puVar1 + 2;
      TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
                ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                  *)param_4,(TPairInitializer<FString_const_&,FString_const_&> *)local_94,
                 (bool *)&local_50);
      iVar18 = iVar18 + 1;
    }
    UInterchangeBaseMaterialFactoryNode::GetMaterialFactoryNodeUidFromMaterialNodeUid
              (&local_e8,(FString *)(puVar1 + 2));
    UInterchangeMeshFactoryNode::SetSlotMaterialDependencyUid
              ((UInterchangeMeshFactoryNode *)param_1,&local_108,&local_e8);
    this = (UInterchangeBaseMaterialFactoryNode *)
           UInterchangeBaseNodeContainer::GetFactoryNode(param_3,&local_e8);
    if (this != (UInterchangeBaseMaterialFactoryNode *)0x0) {
      pUVar9 = Z_Construct_UClass_UInterchangeBaseMaterialFactoryNode_NoRegister();
      iVar8 = (int)pUVar9->_padding_;
      if ((iVar8 <= *(int *)(this->_padding_ + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar8 * 8)
          == &pUVar9->_padding_)) {
        local_118 = true;
        UInterchangeBaseMaterialFactoryNode::GetCustomIsMaterialImportEnabled(this,&local_118);
        UInterchangeBaseNode::SetEnabled((UInterchangeBaseNode *)this,local_118);
        local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_f8.ArrayNum = 0;
        local_f8.ArrayMax = 0;
        UInterchangeFactoryBaseNode::GetFactoryDependencies
                  ((UInterchangeFactoryBaseNode *)param_1,&local_f8);
        pFVar15 = local_f8.AllocatorInstance.Data + (longlong)local_f8.ArrayNum * 0x10;
        iVar8 = local_e8.Data.ArrayNum;
        for (FVar12.Data = local_f8.AllocatorInstance.Data; FVar12.Data != pFVar15;
            FVar12.Data = FVar12.Data + 0x10) {
          iVar10 = *(int *)(FVar12.Data + 8);
          if (iVar10 == iVar8) {
            if (iVar10 < 2) goto LAB_14e7330e6;
            iVar8 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)FVar12.Data,
                               (wchar_t *)local_e8.Data.AllocatorInstance.Data);
            bVar7 = iVar8 == 0;
            iVar8 = local_e8.Data.ArrayNum;
          }
          else {
            bVar7 = iVar10 + iVar8 == 1;
          }
          if (bVar7) goto LAB_14e7330e6;
        }
        UInterchangeFactoryBaseNode::AddFactoryDependencyUid
                  ((UInterchangeFactoryBaseNode *)param_1,&local_e8);
LAB_14e7330e6:
        DestructItems<FString,int>((FString *)local_f8.AllocatorInstance.Data,local_f8.ArrayNum);
        if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_f8.AllocatorInstance.Data);
        }
      }
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_108.Data.AllocatorInstance.Data);
    }
    TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
  } while( true );
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_*_&> @ 14e734420

FObservableArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *
__cdecl UE::Core::Private::
        DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_*_&>
                  (FObservableArrayPointer<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
                   **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_*_&> @ 14e734440

FObservableArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,UE::Slate::ItemsSource::FObservableArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_*_&>
          (FObservableArrayPointer<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_*_&> @ 14e734460

FSharedObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *
__cdecl UE::Core::Private::
        DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_*_&>
                  (FSharedObservableArray<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
                   **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_*_&> @ 14e734480

FSharedObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,UE::Slate::ItemsSource::FSharedObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_*_&>
          (FSharedObservableArray<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,SMultiColumnTableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_*_&> @ 14e7344a0

SMultiColumnTableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> *
__cdecl UE::Core::Private::
        DereferenceIfNecessary<SMultiColumnTableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,SMultiColumnTableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_*_&>
                  (SMultiColumnTableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
                   **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_*_&> @ 14e7344c0

STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>,STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>_*_&>
          (STableRow<TSharedPtr<SInterchangeGenericAssetMaterialConflictWidget::FListItem,1>_>
           **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_*_&> @ 14e7344e0

STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> * __cdecl
UE::Core::Private::
DereferenceIfNecessary<STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>_*_&>
          (STableRow<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SInterchangeGenericAssetMaterialConflictWidget,SInterchangeGenericAssetMaterialConflictWidget_*_&> @ 14e734500

SInterchangeGenericAssetMaterialConflictWidget * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SInterchangeGenericAssetMaterialConflictWidget,SInterchangeGenericAssetMaterialConflictWidget_*_&>
          (SInterchangeGenericAssetMaterialConflictWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SInterchangeGenericAssetSkeletonConflictWidget,SInterchangeGenericAssetSkeletonConflictWidget_*_&> @ 14e734520

SInterchangeGenericAssetSkeletonConflictWidget * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SInterchangeGenericAssetSkeletonConflictWidget,SInterchangeGenericAssetSkeletonConflictWidget_*_&>
          (SInterchangeGenericAssetSkeletonConflictWidget **param_1)

{
  return *param_1;
}

// DereferenceIfNecessary<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget_*_&> @ 14e734540

SListViewPinnedRowWidget * __cdecl
UE::Core::Private::
DereferenceIfNecessary<SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget,SListView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>::SListViewPinnedRowWidget_*_&>
          (SListViewPinnedRowWidget **param_1)

{
  return *param_1;
}

// GetValueAsString<signed_char> @ 14e751220

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<signed_char>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  schar local_res20 [8];
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20[0] = '\0';
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<signed_char>
                    (param_1,param_2,local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<signed_char>(&local_18,local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<unsigned_char> @ 14e751310

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<unsigned_char>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  uchar local_res20 [8];
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20[0] = '\0';
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<unsigned_char>
                    (param_1,param_2,local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<unsigned_char>(&local_18,local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<short> @ 14e751400

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<short>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  short local_res20 [4];
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20[0] = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<short>
                    (param_1,param_2,local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<short>(&local_18,local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<unsigned_short> @ 14e7514f0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<unsigned_short>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  ushort local_res20 [4];
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20[0] = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<unsigned_short>
                    (param_1,param_2,local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<unsigned_short>(&local_18,local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<int> @ 14e7515e0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<int>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  int local_res20 [2];
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20[0] = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<int>
                    (param_1,param_2,local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<int>(&local_18,local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<unsigned_int> @ 14e7516d0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<unsigned_int>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  uint local_res20 [2];
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20[0] = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<unsigned_int>
                    (param_1,param_2,local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<unsigned_int>(&local_18,local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<float> @ 14e7517c0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<float>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  float local_res20 [2];
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20[0] = 0.0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<float>
                    (param_1,param_2,local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<float>(&local_18,local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<double> @ 14e7518b0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<double>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  double local_res20;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_res20 = 0.0;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<double>
                    (param_1,param_2,&local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<double>(&local_18,&local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TBox2<float>_> @ 14e7519a0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TBox2<float>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_48;
  FString local_38;
  TVector2<float>_u_0 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  
  local_48.TypedValue.Data.ArrayMax = -1;
  local_18 = 0;
  local_48.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_48.TypedValue.Data.ArrayNum = 0;
  local_28 = (TVector2<float>_u_0)0x0;
  uStack_20 = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TBox2<float>_>
                    (param_1,param_2,(TBox2<float> *)&local_28._s_0,
                     (TOptional<FString> *)&local_48.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TBox2<float>_>
                       (&local_38,(TBox2<float> *)&local_28._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_48.TypedValue.Data.ArrayMax != -1) &&
     (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TBox2<double>_> @ 14e751a90

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TBox2<double>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_58;
  FString local_48;
  TVector2<double>_u_0 local_38;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_58.TypedValue.Data.ArrayMax = -1;
  local_18 = 0;
  local_58.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_58.TypedValue.Data.ArrayNum = 0;
  local_38._s_0.X = 0.0;
  local_38._s_0.Y = 0.0;
  local_28 = 0;
  uStack_20 = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TBox2<double>_>
                    (param_1,param_2,(TBox2<double> *)&local_38._s_0,
                     (TOptional<FString> *)&local_58.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TBox2<double>_>
                       (&local_48,(TBox2<double> *)&local_38._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_58.TypedValue.Data.ArrayMax != -1) &&
     (local_58.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_58.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TBox<float>_> @ 14e751b90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TBox<float>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  undefined1 auStack_78 [32];
  TOptional<FString>_u_0 local_58;
  FString local_48;
  TBox<float> local_38;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  local_58.TypedValue.Data.ArrayMax = -1;
  local_58.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_58.TypedValue.Data.ArrayNum = 0;
  local_38.IsValid = '\0';
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TBox<float>_>
                    (param_1,param_2,&local_38,(TOptional<FString> *)&local_58.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TBox<float>_>(&local_48,&local_38);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_58.TypedValue.Data.ArrayMax != -1) &&
     (local_58.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_58.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TBox<double>_> @ 14e751ca0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TBox<double>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  undefined1 auStack_88 [32];
  TOptional<FString>_u_0 local_68;
  FString local_58;
  TBox<double> local_48;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_68.TypedValue.Data.ArrayMax = -1;
  local_68.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_68.TypedValue.Data.ArrayNum = 0;
  local_48.IsValid = '\0';
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TBox<double>_>
                    (param_1,param_2,&local_48,(TOptional<FString> *)&local_68.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TBox<double>_>(&local_58,&local_48);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_68.TypedValue.Data.ArrayMax != -1) &&
     (local_68.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_68.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TBoxSphereBounds<float,float>_> @ 14e751db0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<UE::Math::TBoxSphereBounds<float,float>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_48;
  FString local_38;
  undefined1 local_28 [24];
  float local_10;
  
  local_48.TypedValue.Data.ArrayMax = -1;
  local_28._16_8_ = 0;
  local_10 = 0.0;
  local_48.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_48.TypedValue.Data.ArrayNum = 0;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<UE::Math::TBoxSphereBounds<float,float>_>
                    (param_1,param_2,(TBoxSphereBounds<float,float> *)local_28,
                     (TOptional<FString> *)&local_48.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TBoxSphereBounds<float,float>_>
                       (&local_38,(TBoxSphereBounds<float,float> *)local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_48.TypedValue.Data.ArrayMax != -1) &&
     (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TBoxSphereBounds<double,double>_> @ 14e751eb0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<UE::Math::TBoxSphereBounds<double,double>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_68;
  FString local_58;
  TVector<double>_u_0 local_48;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_68.TypedValue.Data.ArrayMax = -1;
  local_18 = 0;
  local_68.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_68.TypedValue.Data.ArrayNum = 0;
  local_48._s_0.X = 0.0;
  local_48._s_0.Y = 0.0;
  local_48._s_0.Z = 0.0;
  uStack_30 = 0;
  local_28 = 0;
  uStack_20 = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<UE::Math::TBoxSphereBounds<double,double>_>
                    (param_1,param_2,(TBoxSphereBounds<double,double> *)&local_48._s_0,
                     (TOptional<FString> *)&local_68.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TBoxSphereBounds<double,double>_>
                       (&local_58,(TBoxSphereBounds<double,double> *)&local_48._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_68.TypedValue.Data.ArrayMax != -1) &&
     (local_68.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_68.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TIntPoint<int>_> @ 14e751fb0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TIntPoint<int>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TIntPoint<int>_u_0 local_res20;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20 = (TIntPoint<int>_u_0)0x0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TIntPoint<int>_>
                    (param_1,param_2,(TIntPoint<int> *)&local_res20._s_0,
                     (TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TIntPoint<int>_>
                       (&local_18,(TIntPoint<int> *)&local_res20._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TIntRect<int>_> @ 14e7520a0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TIntRect<int>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TIntRect<int>_u_0 local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28._s_0.Min.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  local_28._s_0.Max.field0_0x0 = (TIntPoint<int>)(TIntPoint<int>_u_0)0x0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TIntRect<int>_>
                    (param_1,param_2,(TIntRect<int> *)&local_28._s_0,
                     (TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TIntRect<int>_>
                       (&local_18,(TIntRect<int> *)&local_28._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TIntVector3<int>_> @ 14e752190

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TIntVector3<int>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TIntVector3<int>_u_0 local_38;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_38._0_8_ = 0;
  local_38._s_0.Z = 0;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TIntVector3<int>_>
                    (param_1,param_2,(TIntVector3<int> *)&local_38._s_0,
                     (TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TIntVector3<int>_>
                       (&local_18,(TIntVector3<int> *)&local_38._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TMatrix<float>_> @ 14e752280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TMatrix<float>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  undefined1 auStack_98 [32];
  TOptional<FString>_u_0 local_78;
  FString local_68;
  TMatrix<float> local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_78.TypedValue.Data.ArrayMax = -1;
  local_58.M[0][0] = 0.0;
  local_58.M[0][1] = 0.0;
  local_58.M[0][2] = 0.0;
  local_58.M[0][3] = 0.0;
  local_58.M[1][0] = 0.0;
  local_58.M[1][1] = 0.0;
  local_58.M[1][2] = 0.0;
  local_58.M[1][3] = 0.0;
  local_58.M[2][0] = 0.0;
  local_58.M[2][1] = 0.0;
  local_58.M[2][2] = 0.0;
  local_58.M[2][3] = 0.0;
  local_58.M[3][0] = 0.0;
  local_58.M[3][1] = 0.0;
  local_58.M[3][2] = 0.0;
  local_58.M[3][3] = 0.0;
  local_78.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_78.TypedValue.Data.ArrayNum = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TMatrix<float>_>
                    (param_1,param_2,&local_58,(TOptional<FString> *)&local_78.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TMatrix<float>_>(&local_68,&local_58);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_78.TypedValue.Data.ArrayMax != -1) &&
     (local_78.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_78.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TMatrix<double>_> @ 14e7523a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TMatrix<double>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  undefined1 auStack_d8 [32];
  TOptional<FString>_u_0 local_b8;
  FString local_a8;
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_d8;
  local_b8.TypedValue.Data.ArrayMax = -1;
  local_98.M[0][0] = 0.0;
  local_98.M[0][1] = 0.0;
  local_98.M[0][2] = 0.0;
  local_98.M[0][3] = 0.0;
  local_98.M[1][0] = 0.0;
  local_98.M[1][1] = 0.0;
  local_98.M[1][2] = 0.0;
  local_98.M[1][3] = 0.0;
  local_98.M[2][0] = 0.0;
  local_98.M[2][1] = 0.0;
  local_98.M[2][2] = 0.0;
  local_98.M[2][3] = 0.0;
  local_98.M[3][0] = 0.0;
  local_98.M[3][1] = 0.0;
  local_98.M[3][2] = 0.0;
  local_98.M[3][3] = 0.0;
  local_b8.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_b8.TypedValue.Data.ArrayNum = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TMatrix<double>_>
                    (param_1,param_2,&local_98,(TOptional<FString> *)&local_b8.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TMatrix<double>_>(&local_a8,&local_98);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_b8.TypedValue.Data.ArrayMax != -1) &&
     (local_b8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_b8.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TPlane<float>_> @ 14e7524e0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TPlane<float>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TPlane<float> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28._padding_ = 0;
  local_28._padding_ = 0;
  local_28.W = 0.0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TPlane<float>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TPlane<float>_>(&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TPlane<double>_> @ 14e7525d0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TPlane<double>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_48;
  FString local_38;
  TPlane<double> local_28;
  
  local_48.TypedValue.Data.ArrayMax = -1;
  local_28._padding_ = 0;
  local_28._padding_ = 0;
  local_28._padding_ = 0;
  local_28.W = 0.0;
  local_48.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_48.TypedValue.Data.ArrayNum = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TPlane<double>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_48.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TPlane<double>_>(&local_38,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_48.TypedValue.Data.ArrayMax != -1) &&
     (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TQuat<float>_> @ 14e7526c0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TQuat<float>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TQuat<float> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.X = 0.0;
  local_28.Y = 0.0;
  local_28.Z = 0.0;
  local_28.W = 0.0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TQuat<float>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TQuat<float>_>(&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TQuat<double>_> @ 14e7527b0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TQuat<double>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_48;
  FString local_38;
  TQuat<double> local_28;
  
  local_48.TypedValue.Data.ArrayMax = -1;
  local_28.X = 0.0;
  local_28.Y = 0.0;
  local_28.Z = 0.0;
  local_28.W = 0.0;
  local_48.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_48.TypedValue.Data.ArrayNum = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TQuat<double>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_48.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TQuat<double>_>(&local_38,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_48.TypedValue.Data.ArrayMax != -1) &&
     (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TRotator<float>_> @ 14e7528a0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TRotator<float>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TRotator<float> local_38;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_38.Pitch = 0.0;
  local_38.Yaw = 0.0;
  local_38.Roll = 0.0;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TRotator<float>_>
                    (param_1,param_2,&local_38,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TRotator<float>_>(&local_18,&local_38);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TRotator<double>_> @ 14e752990

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TRotator<double>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_48;
  FString local_38;
  TRotator<double> local_28;
  
  local_48.TypedValue.Data.ArrayMax = -1;
  local_28.Roll = 0.0;
  local_48.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_48.TypedValue.Data.ArrayNum = 0;
  local_28.Pitch = 0.0;
  local_28.Yaw = 0.0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TRotator<double>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_48.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TRotator<double>_>(&local_38,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_48.TypedValue.Data.ArrayMax != -1) &&
     (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TSphere<float>_> @ 14e752a80

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TSphere<float>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  undefined1 local_28 [16];
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TSphere<float>_>
                    (param_1,param_2,(TSphere<float> *)local_28,
                     (TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TSphere<float>_>
                       (&local_18,(TSphere<float> *)local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TSphere<double>_> @ 14e752b70

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TSphere<double>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_48;
  FString local_38;
  TVector<double>_u_0 local_28;
  undefined8 uStack_10;
  
  local_48.TypedValue.Data.ArrayMax = -1;
  local_48.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_48.TypedValue.Data.ArrayNum = 0;
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  local_28._s_0.Z = 0.0;
  uStack_10 = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TSphere<double>_>
                    (param_1,param_2,(TSphere<double> *)&local_28._s_0,
                     (TOptional<FString> *)&local_48.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TSphere<double>_>
                       (&local_38,(TSphere<double> *)&local_28._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_48.TypedValue.Data.ArrayMax != -1) &&
     (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TTransform<float>_> @ 14e752c60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TTransform<float>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  undefined1 auStack_88 [32];
  TOptional<FString>_u_0 local_68;
  FString local_58;
  __m128 local_48;
  __m128 local_38;
  __m128 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_48 = GlobalVectorConstants::Float0001;
  local_28 = GlobalVectorConstants::Float1110;
  local_68.TypedValue.Data.ArrayMax = -1;
  local_68.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_68.TypedValue.Data.ArrayNum = 0;
  local_38 = GlobalVectorConstants::FloatZero;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<UE::Math::TTransform<float>_>
                    (param_1,param_2,(TTransform<float> *)&local_48,
                     (TOptional<FString> *)&local_68.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TTransform<float>_>
                       (&local_58,(TTransform<float> *)&local_48);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_68.TypedValue.Data.ArrayMax != -1) &&
     (local_68.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_68.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TTransform<double>_> @ 14e752d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TTransform<double>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  undefined1 auStack_b8 [32];
  TOptional<FString>_u_0 local_98;
  FString local_88;
  TTransform<double> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_78.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
  local_78.Rotation.XY.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[1];
  local_98.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_98.TypedValue.Data.ArrayNum = 0;
  local_98.TypedValue.Data.ArrayMax = -1;
  local_78.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
  local_78.Rotation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float0001.m128_f32[3];
  local_78.Translation.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
  local_78.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
  local_78.Translation.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
  local_78.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
  local_78.Translation.ZW.m128d_f64[1] = (double)GlobalVectorConstants::FloatZero.m128_f32[3];
  local_78.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
  local_78.Scale3D.ZW.m128d_f64[1] = (double)GlobalVectorConstants::Float1110.m128_f32[3];
  local_78.Scale3D.XY.m128d_f64[1]._0_4_ =
       SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
  local_78.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
  local_78.Scale3D.XY.m128d_f64[1]._4_4_ =
       (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<UE::Math::TTransform<double>_>
                    (param_1,param_2,&local_78,(TOptional<FString> *)&local_98.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TTransform<double>_>(&local_88,&local_78)
    ;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_98.TypedValue.Data.ArrayMax != -1) &&
     (local_98.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_98.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TVector2<float>_> @ 14e752ef0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TVector2<float>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TVector2<float>_u_0 local_res20;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20 = (TVector2<float>_u_0)0x0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TVector2<float>_>
                    (param_1,param_2,(TVector2<float> *)&local_res20._s_0,
                     (TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TVector2<float>_>
                       (&local_18,(TVector2<float> *)&local_res20._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TVector2<double>_> @ 14e752fe0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TVector2<double>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TVector2<double>_u_0 local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TVector2<double>_>
                    (param_1,param_2,(TVector2<double> *)&local_28._s_0,
                     (TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TVector2<double>_>
                       (&local_18,(TVector2<double> *)&local_28._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TVector4<float>_> @ 14e7530d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TVector4<float>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TVector4<float>_u_0 local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_28._0_8_ = ___xmm_3f800000000000000000000000000000;
  local_28._8_8_ = _UNK_150689648;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TVector4<float>_>
                    (param_1,param_2,(TVector4<float> *)&local_28._s_0,
                     (TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TVector4<float>_>
                       (&local_18,(TVector4<float> *)&local_28._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TVector4<double>_> @ 14e7531c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TVector4<double>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_48;
  FString local_38;
  TVector4<double>_u_0 local_28;
  
  local_48.TypedValue.Data.ArrayMax = -1;
  local_28._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  local_28._s_0.W = _UNK_15061cbc8;
  local_48.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_48.TypedValue.Data.ArrayNum = 0;
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TVector4<double>_>
                    (param_1,param_2,(TVector4<double> *)&local_28._s_0,
                     (TOptional<FString> *)&local_48.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TVector4<double>_>
                       (&local_38,(TVector4<double> *)&local_28._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_48.TypedValue.Data.ArrayMax != -1) &&
     (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TVector<float>_> @ 14e7532c0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TVector<float>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TVector<float>_u_0 local_38;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_38._0_8_ = 0;
  local_38._s_0.Z = 0.0;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TVector<float>_>
                    (param_1,param_2,(TVector<float> *)&local_38._s_0,
                     (TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TVector<float>_>
                       (&local_18,(TVector<float> *)&local_38._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<UE::Math::TVector<double>_> @ 14e7533b0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<UE::Math::TVector<double>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_48;
  FString local_38;
  TVector<double>_u_0 local_28;
  
  local_48.TypedValue.Data.ArrayMax = -1;
  local_28._s_0.Z = 0.0;
  local_48.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_48.TypedValue.Data.ArrayNum = 0;
  local_28._s_0.X = 0.0;
  local_28._s_0.Y = 0.0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<UE::Math::TVector<double>_>
                    (param_1,param_2,(TVector<double> *)&local_28._s_0,
                     (TOptional<FString> *)&local_48.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<UE::Math::TVector<double>_>
                       (&local_38,(TVector<double> *)&local_28._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_48.TypedValue.Data.ArrayMax != -1) &&
     (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FColor> @ 14e7534a0

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FColor>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  FColor_u_0 local_res20 [2];
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20[0].Bits = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FColor>
                    (param_1,param_2,(FColor *)&local_res20[0]._s_0,
                     (TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FColor>(&local_18,(FColor *)&local_res20[0]._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FDateTime> @ 14e753590

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FDateTime>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  FDateTime local_res20;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20.Ticks = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FDateTime>
                    (param_1,param_2,&local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FDateTime>(&local_18,&local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FFrameNumber> @ 14e753680

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FFrameNumber>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  FFrameNumber local_res20 [2];
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20[0].Value = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FFrameNumber>
                    (param_1,param_2,local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FFrameNumber>(&local_18,local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FFrameRate> @ 14e753770

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FFrameRate>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  FFrameRate local_res20;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_res20.Numerator = 60000;
  local_res20.Denominator = 1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FFrameRate>
                    (param_1,param_2,&local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FFrameRate>(&local_18,&local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FFrameTime> @ 14e753860

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FFrameTime>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  FFrameTime local_res20;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20.FrameNumber.Value = 0;
  local_res20.SubFrame = 0.0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FFrameTime>
                    (param_1,param_2,&local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FFrameTime>(&local_18,&local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FGuid> @ 14e753950

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FGuid>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  FGuid local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.A = 0;
  local_28.B = 0;
  local_28.C = 0;
  local_28.D = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FGuid>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FGuid>(&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FLinearColor> @ 14e753a40

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FLinearColor>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  FLinearColor_u_0 local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28._0_8_ = 0;
  local_28._8_8_ = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FLinearColor>
                    (param_1,param_2,(FLinearColor *)&local_28._s_0,
                     (TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FLinearColor>
                       (&local_18,(FLinearColor *)&local_28._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FOrientedBox> @ 14e753b30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FOrientedBox>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_a8;
  FString local_98;
  TVector<double>_u_0 local_88;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_88._s_0.Z = ___xmm_3ff00000000000000000000000000000;
  uStack_70 = _UNK_15061cbc8;
  local_88._s_0.X = 0.0;
  local_88._s_0.Y = 0.0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = ___xmm_3ff00000000000000000000000000000;
  uStack_50 = _UNK_15061cbc8;
  local_48 = 0;
  uStack_40 = 0;
  local_28 = ___xmm_3ff00000000000003ff0000000000000;
  uStack_20 = _UNK_150689688;
  local_18 = __real_3ff0000000000000;
  local_a8.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_a8.TypedValue.Data.ArrayNum = 0;
  local_a8.TypedValue.Data.ArrayMax = -1;
  local_38 = ___xmm_3ff00000000000000000000000000000;
  uStack_30 = _UNK_15061cbc8;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FOrientedBox>
                    (param_1,param_2,(FOrientedBox *)&local_88._s_0,
                     (TOptional<FString> *)&local_a8.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FOrientedBox>
                       (&local_98,(FOrientedBox *)&local_88._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_a8.TypedValue.Data.ArrayMax != -1) &&
     (local_a8.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_a8.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FRandomStream> @ 14e753c60

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FRandomStream>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  FRandomStream local_res20;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20.InitialSeed = 0;
  local_res20.Seed = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FRandomStream>
                    (param_1,param_2,&local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FRandomStream>(&local_18,&local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FSoftObjectPath> @ 14e753d50

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FSoftObjectPath>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_48;
  FString local_38;
  FSoftObjectPath local_28;
  
  local_48.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_48.TypedValue.Data.ArrayNum = 0;
  local_48.TypedValue.Data.ArrayMax = -1;
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FSoftObjectPath>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_48.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FSoftObjectPath>(&local_38,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  if ((local_48.TypedValue.Data.ArrayMax != -1) &&
     (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FTimespan> @ 14e753e50

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FTimespan>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  FTimespan local_res20;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20.Ticks = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FTimespan>
                    (param_1,param_2,&local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FTimespan>(&local_18,&local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FTwoVectors> @ 14e753f40

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FTwoVectors>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_58;
  FString local_48;
  TVector<double>_u_0 local_38;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  local_58.TypedValue.Data.ArrayMax = -1;
  local_58.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_58.TypedValue.Data.ArrayNum = 0;
  local_38._s_0.X = 0.0;
  local_38._s_0.Y = 0.0;
  local_38._s_0.Z = 0.0;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FTwoVectors>
                    (param_1,param_2,(FTwoVectors *)&local_38._s_0,
                     (TOptional<FString> *)&local_58.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FTwoVectors>
                       (&local_48,(FTwoVectors *)&local_38._s_0);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_58.TypedValue.Data.ArrayMax != -1) &&
     (local_58.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_58.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FVector2DHalf> @ 14e754040

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FVector2DHalf>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  FVector2DHalf local_res20 [2];
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20[0].X.Encoded = 0;
  local_res20[0].Y.Encoded = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FVector2DHalf>
                    (param_1,param_2,local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FVector2DHalf>(&local_18,local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_> @ 14e754130

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> @ 14e754230

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_48;
  FString local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<64>_> local_28;
  
  local_48.TypedValue.Data.ArrayMax = -1;
  local_48.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_48.TypedValue.Data.ArrayNum = 0;
  local_28.ArrayMax = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_48.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
                       (&local_38,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_48.TypedValue.Data.ArrayMax != -1) &&
     (local_48.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_48.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<short,TSizedDefaultAllocator<32>_>_> @ 14e754330

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<short,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<short,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<short,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<short,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_> @ 14e754430

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<unsigned_short,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<unsigned_short,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14e754530

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<int,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<int,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<int,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_> @ 14e754630

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<unsigned_int,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14e754730

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<float,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<float,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<float,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<double,TSizedDefaultAllocator<32>_>_> @ 14e754830

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<double,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<double,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<double,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<double,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_> @ 14e754930

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TBox2<float>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_> @ 14e754a30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TBox2<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_> @ 14e754b30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TBox<float>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_> @ 14e754c30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TBox<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_> @ 14e754d30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TBoxSphereBounds<float,float>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_> @ 14e754e30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TBoxSphereBounds<double,double>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_> @ 14e754f30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TIntPoint<int>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_> @ 14e755030

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TIntRect<int>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_> @ 14e755130

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_> @ 14e755230

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TMatrix<float>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_> @ 14e755330

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TMatrix<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_> @ 14e755430

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TPlane<float>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_> @ 14e755530

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_> @ 14e755630

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TQuat<float>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_> @ 14e755730

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TQuat<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_> @ 14e755830

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TRotator<float>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_> @ 14e755930

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TRotator<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_> @ 14e755a30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TSphere<float>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_> @ 14e755b30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TSphere<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_> @ 14e755c30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_> @ 14e755d30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_> @ 14e755e30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_> @ 14e755f30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TVector2<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_> @ 14e756030

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_> @ 14e756130

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TVector4<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_> @ 14e756230

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_> @ 14e756330

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FColor,TSizedDefaultAllocator<32>_>_> @ 14e756430

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FColor,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<FColor,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FColor,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<FColor,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FDateTime,TSizedDefaultAllocator<32>_>_> @ 14e756530

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<FDateTime,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<FDateTime,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_> @ 14e756630

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<FFrameNumber,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<FFrameNumber,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_> @ 14e756730

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<FFrameRate,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<FFrameRate,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_> @ 14e756830

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<FFrameTime,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<FFrameTime,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FGuid,TSizedDefaultAllocator<32>_>_> @ 14e756930

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<FGuid,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<FGuid,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_> @ 14e756a30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<FLinearColor,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<FLinearColor,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_> @ 14e756b30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<FOrientedBox,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<FOrientedBox,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_> @ 14e756c30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<FRandomStream,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<FRandomStream,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_> @ 14e756d30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_> local_38;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_38,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<FSoftObjectPath,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_38);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  DestructItems<FSoftObjectPath,int>
            ((FSoftObjectPath *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if ((FSoftObjectPath *)local_38.AllocatorInstance.Data != (FSoftObjectPath *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FTimespan,TSizedDefaultAllocator<32>_>_> @ 14e756e40

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<FTimespan,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<FTimespan,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_> @ 14e756f40

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<FTwoVectors,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<FTwoVectors,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_> @ 14e757040

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<FVector2DHalf,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<FVector2DHalf,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FFloat16,TSizedDefaultAllocator<32>_>_> @ 14e757140

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<FFloat16,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<FFloat16,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FName,TSizedDefaultAllocator<32>_>_> @ 14e757240

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FName,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FName,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<FName,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14e757340

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<FString,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_38,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<FString,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_38);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<__int64,TSizedDefaultAllocator<32>_>_> @ 14e757450

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<__int64,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<__int64,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<__int64,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<__int64,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_> @ 14e757550

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::
             AttributeValueToString<TArray<unsigned___int64,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14e757650

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::
GetValueAsString<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  TArray<bool,TSizedDefaultAllocator<32>_> local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::
          GetUserDefinedAttribute<TArray<bool,TSizedDefaultAllocator<32>_>_>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<TArray<bool,TSizedDefaultAllocator<32>_>_>
                       (&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FFloat16> @ 14e757750

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FFloat16>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  FFloat16 local_res20 [4];
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20[0].Encoded = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FFloat16>
                    (param_1,param_2,local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FFloat16>(&local_18,local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FName> @ 14e757840

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FName>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  FName local_res20;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FName>
                    (param_1,param_2,&local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FName>(&local_18,&local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<FString> @ 14e757930

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<FString>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  TOptional<FString>_u_0 local_38;
  FString local_28;
  FString local_18;
  
  local_38.TypedValue.Data.ArrayMax = -1;
  local_38.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_38.TypedValue.Data.ArrayNum = 0;
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<FString>
                    (param_1,param_2,&local_28,(TOptional<FString> *)&local_38.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<FString>(&local_18,&local_28);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if ((local_38.TypedValue.Data.ArrayMax != -1) &&
     (local_38.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_38.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<__int64> @ 14e757a30

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<__int64>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  long64 local_res20;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20 = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<__int64>
                    (param_1,param_2,&local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<__int64>(&local_18,&local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<unsigned___int64> @ 14e757b20

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<unsigned___int64>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  ulong64 local_res20;
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20 = 0;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<unsigned___int64>
                    (param_1,param_2,&local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<unsigned___int64>(&local_18,&local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueAsString<bool> @ 14e757c10

TOptional<FString> * __cdecl
UE::InterchangeGenericAssetsPipeline::Private::GetValueAsString<bool>
          (TOptional<FString> *__return_storage_ptr__,UInterchangeBaseNode *param_1,FString *param_2
          )

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TOptional<FString> *pTVar4;
  bool local_res20 [8];
  TOptional<FString>_u_0 local_28;
  FString local_18;
  
  local_28.TypedValue.Data.ArrayMax = -1;
  local_28.TypedValue.Data.AllocatorInstance.Data =
       (ForAnyElementType)(FScriptContainerElement *)0x0;
  local_28.TypedValue.Data.ArrayNum = 0;
  local_res20[0] = false;
  bVar2 = UInterchangeUserDefinedAttributesAPI::GetUserDefinedAttribute<bool>
                    (param_1,param_2,local_res20,(TOptional<FString> *)&local_28.TypedValue);
  if (bVar2) {
    pFVar3 = Interchange::AttributeValueToString<bool>(&local_18,local_res20);
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (pFVar3->Data).AllocatorInstance.Data;
    (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = (pFVar3->Data).ArrayNum;
    *(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = (pFVar3->Data).ArrayMax;
    (pFVar3->Data).ArrayNum = 0;
    (pFVar3->Data).ArrayMax = 0;
    if (*(int *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) == -1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsSet()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                         ,0xbd,
                         L"TOptional::TOptional(EInPlace, ...) - optionals should not be unset by emplacement"
                        );
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar4 = (TOptional<FString> *)(*pcVar1)();
        return pTVar4;
      }
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0).TypedValue.Data.AllocatorInstance.Data =
         (FScriptContainerElement *)0x0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 8) = 0;
    *(undefined4 *)((longlong)&__return_storage_ptr__->field0_0x0 + 0xc) = 0xffffffff;
  }
  if ((local_28.TypedValue.Data.ArrayMax != -1) &&
     (local_28.TypedValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free((void *)local_28.TypedValue.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode> @ 14e760e70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e76132d) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Interchange::MeshesUtilities::
ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>
          (UInterchangeSkeletalMeshFactoryNode *param_1,UInterchangeBaseNodeContainer *param_2)

{
  undefined8 *puVar1;
  FOrderHelper *pFVar2;
  FString *pFVar3;
  code *pcVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  TTuple<FString,FString> *pTVar10;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ForElementType<unsigned_int> FVar20;
  undefined1 *puVar21;
  wchar_t *pwVar22;
  ulonglong uVar23;
  undefined1 auStackY_2e8 [32];
  undefined1 local_298;
  undefined1 local_297;
  undefined1 local_296;
  FIdentityFunctor local_295 [5];
  ForAnyElementType local_290;
  undefined8 local_288;
  ForAnyElementType local_280;
  uint local_278;
  uint uStack_274;
  undefined1 local_270 [8];
  FOrderHelper local_268;
  FString local_250;
  FString local_240;
  int local_230;
  uint uStack_22c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_228;
  undefined4 local_220;
  uint uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  longlong *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined8 local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e0;
  int local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  undefined1 local_1b4 [8];
  int local_1ac;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a0;
  longlong *local_180;
  int iStack_178;
  uint uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *local_170;
  undefined4 uStack_168;
  uint uStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  FScriptContainerElement *local_120;
  undefined1 *local_118;
  FScriptContainerElement *local_110;
  undefined1 *local_108;
  undefined4 local_e4;
  undefined1 local_d8 [32];
  ForElementType<unsigned_int> local_b8;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  FScriptContainerElement local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  undefined1 local_88 [32];
  undefined1 *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_5c = 0x80;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  UInterchangeMeshFactoryNode::GetSlotMaterialDependencies
            ((UInterchangeMeshFactoryNode *)param_1,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_88);
  UInterchangeMeshFactoryNode::ResetSlotMaterialDependencies((UInterchangeMeshFactoryNode *)param_1)
  ;
  uVar18 = local_88._8_4_ - local_54;
  local_290.Data = (FScriptContainerElement *)0x0;
  local_288 = 0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar18,&local_290,0,(int *)((longlong)&local_288 + 4));
  }
  uVar18 = local_88._8_4_ - local_54;
  local_280.Data = (FScriptContainerElement *)0x0;
  local_278 = 0;
  uStack_274 = 0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar18,&local_280,0,(int *)&uStack_274);
  }
  local_1e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  local_1e0._padding_._4_4_ = 1;
  local_1e0.UnvisitedBitMask = 0xffffffff;
  local_1e0._padding_._0_4_ = 0;
  local_1e0.CurrentBitIndex = 0;
  local_1e0.BaseBitIndex = 0;
  if (local_60 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e0);
  }
  uVar17 = local_60;
  TStack_208._padding_ = CONCAT44(local_1e0._padding_._4_4_,(undefined4)local_1e0._padding_);
  local_210 = (longlong *)local_88;
  TStack_208.CurrentBitIndex = local_1e0.CurrentBitIndex;
  TStack_208.UnvisitedBitMask = local_1e0.UnvisitedBitMask;
  TStack_208._28_4_ = local_1e0._28_4_;
  TStack_208.BaseBitIndex = local_1e0.BaseBitIndex;
  TStack_208.Array = local_1e0.Array;
  local_1e8 = CONCAT44(local_1e8._4_4_,local_88._8_4_ - local_54);
  uVar18 = local_60 & 0xffffffe0;
  iVar14 = (int)local_60 >> 5;
  bVar11 = (byte)local_60;
  TStack_148.Array = local_1e0.Array;
  uStack_128 = local_1e8;
  local_150 = local_210;
  TStack_148._padding_ = TStack_208._padding_;
  TStack_148._16_8_ = TStack_208._16_8_;
  TStack_148._24_8_ = TStack_208._24_8_;
  if (((int)local_60 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar17 != local_60) {
    puVar21 = local_88 + 0x10;
    if (local_68 != (undefined1 *)0x0) {
      puVar21 = local_68;
    }
    uVar17 = -1 << (bVar11 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14e7610f0;
      uVar17 = *(uint *)(puVar21 + lVar13 * 4 + 4);
    }
    uVar19 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1c0 = (int)lVar13;
    uVar17 = local_1c0 + -1 + uVar18;
    if ((int)local_60 < (int)uVar17) {
      uVar17 = local_60;
    }
  }
LAB_14e7610f0:
  iVar14 = 0;
  uVar19 = 0;
  while( true ) {
    plVar6 = local_150;
    if ((int)local_150[1] - *(int *)((longlong)local_150 + 0x34) != (int)uStack_128) {
      local_298 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_298);
    }
    if (((TStack_148.CurrentBitIndex == uVar17) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar6 == (longlong *)local_88)) break;
    lVar13 = *plVar6;
    pFVar15 = (FScriptContainerElement *)(lVar13 + (longlong)TStack_148.CurrentBitIndex * 0x28);
    iVar12 = *(int *)(lVar13 + 8 + (longlong)TStack_148.CurrentBitIndex * 0x28);
    iVar8 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar8 = 0;
    }
    if ((iVar8 < 7) ||
       (iVar8 = ::FString::Find((FString *)pFVar15,L"_SKIN",5,IgnoreCase,FromEnd,-1), iVar8 == -1))
    {
LAB_14e761357:
      if (((local_280.Data <= pFVar15) &&
          (pFVar15 < local_280.Data + (longlong)(int)uStack_274 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_278 == uStack_274) {
        local_278 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_280,(int *)&uStack_274);
      }
      lVar13 = (longlong)(int)local_278;
      local_278 = local_278 + 1;
      ::FString::FString((FString *)(local_280.Data + lVar13 * 0x10),(FString *)pFVar15);
    }
    else {
      iVar12 = *(int *)(pFVar15 + 8);
      iVar5 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar5 = iVar14;
      }
      iVar8 = (iVar5 - iVar8) + -1;
      if (iVar12 == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = *(wchar_t **)pFVar15;
      }
      iVar12 = iVar5;
      if (iVar8 < iVar5) {
        iVar12 = iVar8;
      }
      iVar8 = iVar14;
      if (0 < iVar12) {
        iVar8 = iVar12;
      }
      ::FString::FString(&local_250,pwVar22 + ((longlong)iVar5 - (longlong)iVar8));
      ::FString::RemoveAt(&local_250,0,4,No);
      local_240.Data.AllocatorInstance.Data = local_250.Data.AllocatorInstance.Data;
      local_240.Data.ArrayNum = local_250.Data.ArrayNum;
      local_240.Data.ArrayMax = local_250.Data.ArrayMax;
      local_250.Data.ArrayNum = 0;
      local_250.Data.ArrayMax = 0;
      local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar7 = ::FString::IsNumeric(&local_240);
      if (!bVar7) {
LAB_14e761349:
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
        goto LAB_14e761357;
      }
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_240.Data.ArrayNum != 0) {
        FVar16.Data = local_240.Data.AllocatorInstance.Data;
      }
      iVar8 = _wtoi((wchar_t *)FVar16.Data);
      if (iVar8 < 0) goto LAB_14e761349;
      local_268.Index = iVar8;
      ::FString::FString(&local_268.Name,(FString *)pFVar15);
      if (((local_290.Data <= &local_268) &&
          (&local_268 < (FOrderHelper *)(local_290.Data + (longlong)local_288._4_4_ * 0x18))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (int)local_288;
      if ((int)local_288 == local_288._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_290,(int *)((longlong)&local_288 + 4));
      }
      lVar13 = (longlong)iVar8;
      local_288 = CONCAT44(local_288._4_4_,iVar8 + 1);
      *(int *)&local_290.Data[lVar13 * 0x18].field_0x0 = local_268.Index;
      *(undefined8 *)(local_290.Data + lVar13 * 0x18 + 8) = 0;
      *(FScriptContainerElement **)(local_290.Data + lVar13 * 0x18 + 8) =
           local_268.Name.Data.AllocatorInstance.Data;
      *(int *)(local_290.Data + lVar13 * 0x18 + 0x10) = local_268.Name.Data.ArrayNum;
      *(int *)(local_290.Data + lVar13 * 0x18 + 0x14) = local_268.Name.Data.ArrayMax;
      local_268.Name.Data.ArrayNum = 0;
      local_268.Name.Data.ArrayMax = 0;
      local_268.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  }
  AlgoImpl::
  IntroSortInternal<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::FOrderHelper,int,FIdentityFunctor,TDereferenceWrapper<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::FOrderHelper,_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::<lambda_1>_>_>
            ((FOrderHelper *)local_290.Data,(int)local_288,local_295[0],(<lambda_1> *)local_295);
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (ForElementType<unsigned_int>)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = -1;
  local_a4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  uVar18 = local_88._8_4_ - local_54;
  if (uVar18 != 0) {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
    }
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_d8,uVar18);
    if (uVar18 < 4) {
      uVar18 = 1;
    }
    else {
      uVar23 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1bc = (undefined4)lVar13;
      uVar18 = 1 << ((byte)lVar13 & 0x1f);
    }
    if ((local_90 == 0) || ((int)local_90 < (int)uVar18)) {
      local_90 = uVar18;
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
      }
      if (uVar18 != 0) {
        uVar17 = uVar18;
        if (uVar18 < 2) {
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            uVar17 = 0;
            goto LAB_14e761519;
          }
        }
        else {
LAB_14e761519:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar17,4)
          ;
        }
        if (0 < (int)uVar18) {
          uVar23 = (ulonglong)uVar18;
          do {
            FVar16.Data = local_a0;
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_98.Data;
            }
            uVar9 = (longlong)(int)uVar18 - 1U & uVar19;
            uVar19 = uVar19 + 1;
            *(undefined4 *)(FVar16.Data + uVar9 * 4) = 0xffffffff;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      if (local_90 != 0) {
        pTStack_228 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
        local_230 = 0;
        uStack_22c = 1;
        uStack_21c = 0;
        iStack_218 = 0;
        if (local_b0 != 0) {
          FVar20 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
          if (local_b8 != (ForElementType<unsigned_int>)0x0) {
            FVar20 = local_b8;
          }
          uVar18 = *(uint *)FVar20;
          local_230 = iVar14;
          iStack_218 = 0;
          while (uVar18 == 0) {
            iStack_218 = iStack_218 + 0x20;
            lVar13 = (longlong)local_230;
            local_230 = local_230 + 1;
            if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_230)
            goto LAB_14e761619;
            uVar18 = ((uint *)((longlong)FVar20 + 4))[lVar13];
          }
          uStack_22c = -uVar18 & uVar18;
          uVar19 = (ulonglong)uStack_22c * 2 + 1;
          lVar13 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_1b8 = (int)lVar13;
          uStack_21c = iStack_218 + -1 + local_1b8;
          if ((int)uStack_21c <= (int)local_b0) goto LAB_14e761620;
LAB_14e761619:
          uStack_21c = local_b0;
        }
LAB_14e761620:
        local_220 = 0xffffffff;
        local_1a8 = (longlong *)local_d8;
        local_1a0._padding_ = CONCAT44(uStack_22c,local_230);
        local_1a0.CurrentBitIndex = uStack_21c;
        local_1a0.UnvisitedBitMask = 0xffffffff;
        local_1a0._28_4_ = uStack_214;
        local_1a0.BaseBitIndex = iStack_218;
        uVar18 = uStack_21c;
        local_1a0.Array = pTStack_228;
        if ((int)uStack_21c < (int)local_b0) {
          do {
            puVar1 = (undefined8 *)(*local_1a8 + (longlong)(int)uVar18 * 0x28);
            iVar8 = *(int *)(*local_1a8 + 8 + (longlong)(int)uVar18 * 0x28);
            iVar14 = iVar8 + -1;
            if (iVar8 == 0) {
              pwVar22 = L"";
              iVar14 = 0;
            }
            else {
              pwVar22 = (wchar_t *)*puVar1;
            }
            uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar22);
            uVar17 = local_90 - 1 & uVar17;
            *(uint *)((longlong)puVar1 + 0x24) = uVar17;
            FVar16.Data = local_a0;
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_98.Data;
            }
            uVar19 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar17;
            *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(FVar16.Data + uVar19 * 4);
            *(uint *)(FVar16.Data + uVar19 * 4) = uVar18;
            local_1a0.UnvisitedBitMask = local_1a0.UnvisitedBitMask & ~local_1a0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a0);
            uVar18 = local_1a0.CurrentBitIndex;
          } while (local_1a0.CurrentBitIndex < (local_1a0.Array)->NumBits);
        }
      }
    }
  }
  iVar14 = (int)local_288;
  uVar19 = (ulonglong)(int)local_288;
  pFVar2 = (FOrderHelper *)(local_290.Data + uVar19 * 0x18);
  pFVar15 = local_290.Data + 8;
  while( true ) {
    if ((int)uVar19 != iVar14) {
      local_297 = 0;
      `TCheckedPointerIterator<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>'::__l2::FOrderHelper,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_297);
    }
    uVar18 = local_278;
    if ((FOrderHelper *)(pFVar15 + -8) == pFVar2) break;
    pTVar10 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)local_88,(FString *)pFVar15);
    if ((pTVar10 == (TTuple<FString,FString> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_118 = &pTVar10->field_0x10;
    local_120 = pFVar15;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_d8,(TPairInitializer<FString_const_&,FString_const_&> *)local_1b4,
               (bool *)&local_120);
    uVar19 = local_288 & 0xffffffff;
    pFVar15 = pFVar15 + 0x18;
  }
  uVar19 = (ulonglong)(int)local_278;
  pFVar15 = local_280.Data + uVar19 * 0x10;
  FVar16.Data = local_280.Data;
  while( true ) {
    if ((uint)uVar19 != uVar18) {
      local_296 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_296)
      ;
    }
    if (FVar16.Data == pFVar15) break;
    pTVar10 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)local_88,(FString *)FVar16.Data);
    if ((pTVar10 == (TTuple<FString,FString> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_108 = &pTVar10->field_0x10;
    local_110 = FVar16.Data;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_d8,(TPairInitializer<FString_const_&,FString_const_&> *)(local_1b4 + 4),
               (bool *)&local_110);
    uVar19 = (ulonglong)local_278;
    FVar16.Data = FVar16.Data + 0x10;
  }
  if ((local_d8._8_4_ - local_a4 != local_88._8_4_ - local_54) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReorderedSlotMaterialDependencies.Num() == SlotMaterialDependencies.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Public\\InterchangePipelineMeshesUtilities.h"
                         ,0x20e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar18 = local_b0;
  iStack_178 = 0;
  local_160 = 0;
  uStack_164 = 0;
  uStack_174 = 1;
  if (local_b0 != 0) {
    FVar20 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
    if (local_b8 != (ForElementType<unsigned_int>)0x0) {
      FVar20 = local_b8;
    }
    uVar17 = *(uint *)FVar20;
    while (uVar17 == 0) {
      lVar13 = (longlong)iStack_178;
      local_160 = local_160 + 0x20;
      iStack_178 = iStack_178 + 1;
      uStack_164 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_178)
      goto LAB_14e761901;
      uVar17 = ((uint *)((longlong)FVar20 + 4))[lVar13];
    }
    uStack_174 = -uVar17 & uVar17;
    uVar19 = (ulonglong)uStack_174 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1ac = (int)lVar13;
    uStack_164 = local_160 + -1 + local_1ac;
    if ((int)local_b0 < (int)uStack_164) {
      uStack_164 = local_b0;
    }
  }
LAB_14e761901:
  local_210 = (longlong *)local_d8;
  uStack_15c = local_e4;
  TStack_208.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  uVar17 = local_b0 & 0xffffffe0;
  iStack_158 = local_d8._8_4_ - local_a4;
  uStack_168 = 0xffffffff;
  TStack_208.CurrentBitIndex = uStack_164;
  TStack_208.UnvisitedBitMask = 0xffffffff;
  TStack_208._padding_ = CONCAT44(uStack_174,iStack_178);
  iVar14 = (int)local_b0 >> 5;
  TStack_208._28_4_ = local_e4;
  TStack_208.BaseBitIndex = local_160;
  local_1e8 = CONCAT44(uStack_154,iStack_158);
  bVar11 = (byte)local_b0;
  local_180 = local_210;
  local_170 = TStack_208.Array;
  if (((int)local_b0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar18 != local_b0) {
    FVar20 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
    if (local_b8 != (ForElementType<unsigned_int>)0x0) {
      FVar20 = local_b8;
    }
    uVar18 = -1 << (bVar11 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar14 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar18 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14e761a30;
      uVar18 = ((uint *)((longlong)FVar20 + 4))[lVar13];
    }
    uVar19 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar18 = (int)lVar13 + -1 + uVar17;
    if ((int)local_b0 < (int)uVar18) {
      uVar18 = local_b0;
    }
  }
LAB_14e761a30:
  while( true ) {
    plVar6 = local_210;
    if ((int)local_210[1] - *(int *)((longlong)local_210 + 0x34) != (int)local_1e8) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_270);
    }
    if (((TStack_208.CurrentBitIndex == uVar18) &&
        (TStack_208.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
       (plVar6 == (longlong *)local_d8)) break;
    pFVar3 = (FString *)(*plVar6 + (longlong)TStack_208.CurrentBitIndex * 0x28);
    UInterchangeMeshFactoryNode::SetSlotMaterialDependencyUid
              ((UInterchangeMeshFactoryNode *)param_1,pFVar3,pFVar3 + 1);
    TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
  }
  local_90 = 0;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  DestructItems<FString,int>((FString *)local_280.Data,local_278);
  if (local_280.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data);
  }
  DestructItems<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeSkeletalMeshFactoryNode>_::__l2::FOrderHelper,int>
            ((FOrderHelper *)local_290.Data,(int)local_288);
  if ((FOrderHelper *)local_290.Data != (FOrderHelper *)0x0) {
    FMemory::Free(local_290.Data);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode> @ 14e761b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014e76203d) */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>
          (UInterchangeStaticMeshFactoryNode *param_1,UInterchangeBaseNodeContainer *param_2)

{
  undefined8 *puVar1;
  FOrderHelper *pFVar2;
  FString *pFVar3;
  code *pcVar4;
  int iVar5;
  longlong *plVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  TTuple<FString,FString> *pTVar10;
  byte bVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ForElementType<unsigned_int> FVar20;
  undefined1 *puVar21;
  wchar_t *pwVar22;
  ulonglong uVar23;
  undefined1 auStackY_2e8 [32];
  undefined1 local_298;
  undefined1 local_297;
  undefined1 local_296;
  FIdentityFunctor local_295 [5];
  ForAnyElementType local_290;
  undefined8 local_288;
  ForAnyElementType local_280;
  uint local_278;
  uint uStack_274;
  undefined1 local_270 [8];
  FOrderHelper local_268;
  FString local_250;
  FString local_240;
  int local_230;
  uint uStack_22c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_228;
  undefined4 local_220;
  uint uStack_21c;
  int iStack_218;
  undefined4 uStack_214;
  longlong *local_210;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_208;
  undefined8 local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1e0;
  int local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  undefined1 local_1b4 [8];
  int local_1ac;
  longlong *local_1a8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1a0;
  longlong *local_180;
  int iStack_178;
  uint uStack_174;
  TBitArray<FDefaultBitArrayAllocator> *local_170;
  undefined4 uStack_168;
  uint uStack_164;
  int local_160;
  undefined4 uStack_15c;
  int iStack_158;
  undefined4 uStack_154;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  FScriptContainerElement *local_120;
  undefined1 *local_118;
  FScriptContainerElement *local_110;
  undefined1 *local_108;
  undefined4 local_e4;
  undefined1 local_d8 [32];
  ForElementType<unsigned_int> local_b8;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  FScriptContainerElement local_a0 [8];
  ForAnyElementType local_98;
  uint local_90;
  undefined1 local_88 [32];
  undefined1 *local_68;
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_54;
  ForElementType<FSetElementId> local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  local_5c = 0x80;
  local_88._0_8_ = 0;
  local_88._8_8_ = 0;
  local_68 = (undefined1 *)0x0;
  local_60 = 0;
  local_54 = 0;
  local_48 = (ForElementType<FSetElementId>)0x0;
  local_40 = 0;
  local_58 = 0xffffffff;
  UInterchangeMeshFactoryNode::GetSlotMaterialDependencies
            ((UInterchangeMeshFactoryNode *)param_1,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)local_88);
  UInterchangeMeshFactoryNode::ResetSlotMaterialDependencies((UInterchangeMeshFactoryNode *)param_1)
  ;
  uVar18 = local_88._8_4_ - local_54;
  local_290.Data = (FScriptContainerElement *)0x0;
  local_288 = 0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar18,&local_290,0,(int *)((longlong)&local_288 + 4));
  }
  uVar18 = local_88._8_4_ - local_54;
  local_280.Data = (FScriptContainerElement *)0x0;
  local_278 = 0;
  uStack_274 = 0;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  if (0 < (int)uVar18) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar18,&local_280,0,(int *)&uStack_274);
  }
  local_1e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10);
  local_1e0._padding_._4_4_ = 1;
  local_1e0.UnvisitedBitMask = 0xffffffff;
  local_1e0._padding_._0_4_ = 0;
  local_1e0.CurrentBitIndex = 0;
  local_1e0.BaseBitIndex = 0;
  if (local_60 != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1e0);
  }
  uVar17 = local_60;
  TStack_208._padding_ = CONCAT44(local_1e0._padding_._4_4_,(undefined4)local_1e0._padding_);
  local_210 = (longlong *)local_88;
  TStack_208.CurrentBitIndex = local_1e0.CurrentBitIndex;
  TStack_208.UnvisitedBitMask = local_1e0.UnvisitedBitMask;
  TStack_208._28_4_ = local_1e0._28_4_;
  TStack_208.BaseBitIndex = local_1e0.BaseBitIndex;
  TStack_208.Array = local_1e0.Array;
  local_1e8 = CONCAT44(local_1e8._4_4_,local_88._8_4_ - local_54);
  uVar18 = local_60 & 0xffffffe0;
  iVar14 = (int)local_60 >> 5;
  bVar11 = (byte)local_60;
  TStack_148.Array = local_1e0.Array;
  uStack_128 = local_1e8;
  local_150 = local_210;
  TStack_148._padding_ = TStack_208._padding_;
  TStack_148._16_8_ = TStack_208._16_8_;
  TStack_148._24_8_ = TStack_208._24_8_;
  if (((int)local_60 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar17 != local_60) {
    puVar21 = local_88 + 0x10;
    if (local_68 != (undefined1 *)0x0) {
      puVar21 = local_68;
    }
    uVar17 = -1 << (bVar11 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar14 * 4);
    while (uVar17 == 0) {
      lVar13 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar17 = local_60;
      if ((int)((local_60 - 1) + ((int)(local_60 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14e761e00;
      uVar17 = *(uint *)(puVar21 + lVar13 * 4 + 4);
    }
    uVar19 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1c0 = (int)lVar13;
    uVar17 = local_1c0 + -1 + uVar18;
    if ((int)local_60 < (int)uVar17) {
      uVar17 = local_60;
    }
  }
LAB_14e761e00:
  iVar14 = 0;
  uVar19 = 0;
  while( true ) {
    plVar6 = local_150;
    if ((int)local_150[1] - *(int *)((longlong)local_150 + 0x34) != (int)uStack_128) {
      local_298 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_298);
    }
    if (((TStack_148.CurrentBitIndex == uVar17) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10))) &&
       (plVar6 == (longlong *)local_88)) break;
    lVar13 = *plVar6;
    pFVar15 = (FScriptContainerElement *)(lVar13 + (longlong)TStack_148.CurrentBitIndex * 0x28);
    iVar12 = *(int *)(lVar13 + 8 + (longlong)TStack_148.CurrentBitIndex * 0x28);
    iVar8 = iVar12 + -1;
    if (iVar12 == 0) {
      iVar8 = 0;
    }
    if ((iVar8 < 7) ||
       (iVar8 = ::FString::Find((FString *)pFVar15,L"_SKIN",5,IgnoreCase,FromEnd,-1), iVar8 == -1))
    {
LAB_14e762067:
      if (((local_280.Data <= pFVar15) &&
          (pFVar15 < local_280.Data + (longlong)(int)uStack_274 * 0x10)) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (local_278 == uStack_274) {
        local_278 = Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&local_280,(int *)&uStack_274);
      }
      lVar13 = (longlong)(int)local_278;
      local_278 = local_278 + 1;
      ::FString::FString((FString *)(local_280.Data + lVar13 * 0x10),(FString *)pFVar15);
    }
    else {
      iVar12 = *(int *)(pFVar15 + 8);
      iVar5 = iVar12 + -1;
      if (iVar12 == 0) {
        iVar5 = iVar14;
      }
      iVar8 = (iVar5 - iVar8) + -1;
      if (iVar12 == 0) {
        pwVar22 = L"";
      }
      else {
        pwVar22 = *(wchar_t **)pFVar15;
      }
      iVar12 = iVar5;
      if (iVar8 < iVar5) {
        iVar12 = iVar8;
      }
      iVar8 = iVar14;
      if (0 < iVar12) {
        iVar8 = iVar12;
      }
      ::FString::FString(&local_250,pwVar22 + ((longlong)iVar5 - (longlong)iVar8));
      ::FString::RemoveAt(&local_250,0,4,No);
      local_240.Data.AllocatorInstance.Data = local_250.Data.AllocatorInstance.Data;
      local_240.Data.ArrayNum = local_250.Data.ArrayNum;
      local_240.Data.ArrayMax = local_250.Data.ArrayMax;
      local_250.Data.ArrayNum = 0;
      local_250.Data.ArrayMax = 0;
      local_250.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      bVar7 = ::FString::IsNumeric(&local_240);
      if (!bVar7) {
LAB_14e762059:
        if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_240.Data.AllocatorInstance.Data);
        }
        goto LAB_14e762067;
      }
      FVar16.Data = (FScriptContainerElement *)L"";
      if (local_240.Data.ArrayNum != 0) {
        FVar16.Data = local_240.Data.AllocatorInstance.Data;
      }
      iVar8 = _wtoi((wchar_t *)FVar16.Data);
      if (iVar8 < 0) goto LAB_14e762059;
      local_268.Index = iVar8;
      ::FString::FString(&local_268.Name,(FString *)pFVar15);
      if (((local_290.Data <= &local_268) &&
          (&local_268 < (FOrderHelper *)(local_290.Data + (longlong)local_288._4_4_ * 0x18))) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (int)local_288;
      if ((int)local_288 == local_288._4_4_) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x818,&local_290,(int *)((longlong)&local_288 + 4));
      }
      lVar13 = (longlong)iVar8;
      local_288 = CONCAT44(local_288._4_4_,iVar8 + 1);
      *(int *)&local_290.Data[lVar13 * 0x18].field_0x0 = local_268.Index;
      *(undefined8 *)(local_290.Data + lVar13 * 0x18 + 8) = 0;
      *(FScriptContainerElement **)(local_290.Data + lVar13 * 0x18 + 8) =
           local_268.Name.Data.AllocatorInstance.Data;
      *(int *)(local_290.Data + lVar13 * 0x18 + 0x10) = local_268.Name.Data.ArrayNum;
      *(int *)(local_290.Data + lVar13 * 0x18 + 0x14) = local_268.Name.Data.ArrayMax;
      local_268.Name.Data.ArrayNum = 0;
      local_268.Name.Data.ArrayMax = 0;
      local_268.Name.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_240.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_240.Data.AllocatorInstance.Data);
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  }
  AlgoImpl::
  IntroSortInternal<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::FOrderHelper,int,FIdentityFunctor,TDereferenceWrapper<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::FOrderHelper,_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::<lambda_1>_>_>
            ((FOrderHelper *)local_290.Data,(int)local_288,local_295[0],(<lambda_1> *)local_295);
  local_d8._0_8_ = (FScriptContainerElement *)0x0;
  local_d8._8_8_ = 0;
  local_b8 = (ForElementType<unsigned_int>)0x0;
  local_b0 = 0;
  local_ac = 0x80;
  local_a8 = -1;
  local_a4 = 0;
  local_98.Data = (FScriptContainerElement *)0x0;
  local_90 = 0;
  uVar18 = local_88._8_4_ - local_54;
  if (uVar18 != 0) {
    if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar18);
    }
    TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<40,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_d8,uVar18);
    if (uVar18 < 4) {
      uVar18 = 1;
    }
    else {
      uVar23 = (ulonglong)((uVar18 >> 1) + 7) * 2 + 1;
      lVar13 = 0x3f;
      if (uVar23 != 0) {
        for (; uVar23 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      local_1bc = (undefined4)lVar13;
      uVar18 = 1 << ((byte)lVar13 & 0x1f);
    }
    if ((local_90 == 0) || ((int)local_90 < (int)uVar18)) {
      local_90 = uVar18;
      if (local_98.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,0,4);
      }
      if (uVar18 != 0) {
        uVar17 = uVar18;
        if (uVar18 < 2) {
          if (local_98.Data != (FScriptContainerElement *)0x0) {
            uVar17 = 0;
            goto LAB_14e762229;
          }
        }
        else {
LAB_14e762229:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_98,0,uVar17,4)
          ;
        }
        if (0 < (int)uVar18) {
          uVar23 = (ulonglong)uVar18;
          do {
            FVar16.Data = local_a0;
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_98.Data;
            }
            uVar9 = (longlong)(int)uVar18 - 1U & uVar19;
            uVar19 = uVar19 + 1;
            *(undefined4 *)(FVar16.Data + uVar9 * 4) = 0xffffffff;
            uVar23 = uVar23 - 1;
          } while (uVar23 != 0);
        }
      }
      if (local_90 != 0) {
        pTStack_228 = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
        local_230 = 0;
        uStack_22c = 1;
        uStack_21c = 0;
        iStack_218 = 0;
        if (local_b0 != 0) {
          FVar20 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
          if (local_b8 != (ForElementType<unsigned_int>)0x0) {
            FVar20 = local_b8;
          }
          uVar18 = *(uint *)FVar20;
          local_230 = iVar14;
          iStack_218 = 0;
          while (uVar18 == 0) {
            iStack_218 = iStack_218 + 0x20;
            lVar13 = (longlong)local_230;
            local_230 = local_230 + 1;
            if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < local_230)
            goto LAB_14e762329;
            uVar18 = ((uint *)((longlong)FVar20 + 4))[lVar13];
          }
          uStack_22c = -uVar18 & uVar18;
          uVar19 = (ulonglong)uStack_22c * 2 + 1;
          lVar13 = 0x3f;
          if (uVar19 != 0) {
            for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
            }
          }
          local_1b8 = (int)lVar13;
          uStack_21c = iStack_218 + -1 + local_1b8;
          if ((int)uStack_21c <= (int)local_b0) goto LAB_14e762330;
LAB_14e762329:
          uStack_21c = local_b0;
        }
LAB_14e762330:
        local_220 = 0xffffffff;
        local_1a8 = (longlong *)local_d8;
        local_1a0._padding_ = CONCAT44(uStack_22c,local_230);
        local_1a0.CurrentBitIndex = uStack_21c;
        local_1a0.UnvisitedBitMask = 0xffffffff;
        local_1a0._28_4_ = uStack_214;
        local_1a0.BaseBitIndex = iStack_218;
        uVar18 = uStack_21c;
        local_1a0.Array = pTStack_228;
        if ((int)uStack_21c < (int)local_b0) {
          do {
            puVar1 = (undefined8 *)(*local_1a8 + (longlong)(int)uVar18 * 0x28);
            iVar8 = *(int *)(*local_1a8 + 8 + (longlong)(int)uVar18 * 0x28);
            iVar14 = iVar8 + -1;
            if (iVar8 == 0) {
              pwVar22 = L"";
              iVar14 = 0;
            }
            else {
              pwVar22 = (wchar_t *)*puVar1;
            }
            uVar17 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar14,pwVar22);
            uVar17 = local_90 - 1 & uVar17;
            *(uint *)((longlong)puVar1 + 0x24) = uVar17;
            FVar16.Data = local_a0;
            if (local_98.Data != (FScriptContainerElement *)0x0) {
              FVar16.Data = local_98.Data;
            }
            uVar19 = (longlong)(int)local_90 - 1U & (longlong)(int)uVar17;
            *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(FVar16.Data + uVar19 * 4);
            *(uint *)(FVar16.Data + uVar19 * 4) = uVar18;
            local_1a0.UnvisitedBitMask = local_1a0.UnvisitedBitMask & ~local_1a0._padding_._4_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1a0);
            uVar18 = local_1a0.CurrentBitIndex;
          } while (local_1a0.CurrentBitIndex < (local_1a0.Array)->NumBits);
        }
      }
    }
  }
  iVar14 = (int)local_288;
  uVar19 = (ulonglong)(int)local_288;
  pFVar2 = (FOrderHelper *)(local_290.Data + uVar19 * 0x18);
  pFVar15 = local_290.Data + 8;
  while( true ) {
    if ((int)uVar19 != iVar14) {
      local_297 = 0;
      `TCheckedPointerIterator<`UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>'::__l2::FOrderHelper,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_297);
    }
    uVar18 = local_278;
    if ((FOrderHelper *)(pFVar15 + -8) == pFVar2) break;
    pTVar10 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)local_88,(FString *)pFVar15);
    if ((pTVar10 == (TTuple<FString,FString> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_118 = &pTVar10->field_0x10;
    local_120 = pFVar15;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_d8,(TPairInitializer<FString_const_&,FString_const_&> *)local_1b4,
               (bool *)&local_120);
    uVar19 = local_288 & 0xffffffff;
    pFVar15 = pFVar15 + 0x18;
  }
  uVar19 = (ulonglong)(int)local_278;
  pFVar15 = local_280.Data + uVar19 * 0x10;
  FVar16.Data = local_280.Data;
  while( true ) {
    if ((uint)uVar19 != uVar18) {
      local_296 = 0;
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_296)
      ;
    }
    if (FVar16.Data == pFVar15) break;
    pTVar10 = TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                      *)local_88,(FString *)FVar16.Data);
    if ((pTVar10 == (TTuple<FString,FString> *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Pair != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                           ,0x288,L""), bVar7)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_108 = &pTVar10->field_0x10;
    local_110 = FVar16.Data;
    TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<FString_const_&,FString_const_&>_>
              ((TSet<TTuple<FString,FString>,TDefaultMapHashableKeyFuncs<FString,FString,0>,FDefaultSetAllocator>
                *)local_d8,(TPairInitializer<FString_const_&,FString_const_&> *)(local_1b4 + 4),
               (bool *)&local_110);
    uVar19 = (ulonglong)local_278;
    FVar16.Data = FVar16.Data + 0x10;
  }
  if ((local_d8._8_4_ - local_a4 != local_88._8_4_ - local_54) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ReorderedSlotMaterialDependencies.Num() == SlotMaterialDependencies.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Public\\InterchangePipelineMeshesUtilities.h"
                         ,0x20e,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar18 = local_b0;
  iStack_178 = 0;
  local_160 = 0;
  uStack_164 = 0;
  uStack_174 = 1;
  if (local_b0 != 0) {
    FVar20 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
    if (local_b8 != (ForElementType<unsigned_int>)0x0) {
      FVar20 = local_b8;
    }
    uVar17 = *(uint *)FVar20;
    while (uVar17 == 0) {
      lVar13 = (longlong)iStack_178;
      local_160 = local_160 + 0x20;
      iStack_178 = iStack_178 + 1;
      uStack_164 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_178)
      goto LAB_14e762611;
      uVar17 = ((uint *)((longlong)FVar20 + 4))[lVar13];
    }
    uStack_174 = -uVar17 & uVar17;
    uVar19 = (ulonglong)uStack_174 * 2 + 1;
    lVar13 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_1ac = (int)lVar13;
    uStack_164 = local_160 + -1 + local_1ac;
    if ((int)local_b0 < (int)uStack_164) {
      uStack_164 = local_b0;
    }
  }
LAB_14e762611:
  local_210 = (longlong *)local_d8;
  uStack_15c = local_e4;
  TStack_208.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10);
  uVar17 = local_b0 & 0xffffffe0;
  iStack_158 = local_d8._8_4_ - local_a4;
  uStack_168 = 0xffffffff;
  TStack_208.CurrentBitIndex = uStack_164;
  TStack_208.UnvisitedBitMask = 0xffffffff;
  TStack_208._padding_ = CONCAT44(uStack_174,iStack_178);
  iVar14 = (int)local_b0 >> 5;
  TStack_208._28_4_ = local_e4;
  TStack_208.BaseBitIndex = local_160;
  local_1e8 = CONCAT44(uStack_154,iStack_158);
  bVar11 = (byte)local_b0;
  local_180 = local_210;
  local_170 = TStack_208.Array;
  if (((int)local_b0 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (uVar18 != local_b0) {
    FVar20 = (ForElementType<unsigned_int>)((longlong)local_d8 + 0x10);
    if (local_b8 != (ForElementType<unsigned_int>)0x0) {
      FVar20 = local_b8;
    }
    uVar18 = -1 << (bVar11 & 0x1f) & *(uint *)((longlong)FVar20 + (longlong)iVar14 * 4);
    while (uVar18 == 0) {
      lVar13 = (longlong)iVar14;
      uVar17 = uVar17 + 0x20;
      iVar14 = iVar14 + 1;
      uVar18 = local_b0;
      if ((int)((local_b0 - 1) + ((int)(local_b0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_14e762740;
      uVar18 = ((uint *)((longlong)FVar20 + 4))[lVar13];
    }
    uVar19 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    uVar18 = (int)lVar13 + -1 + uVar17;
    if ((int)local_b0 < (int)uVar18) {
      uVar18 = local_b0;
    }
  }
LAB_14e762740:
  while( true ) {
    plVar6 = local_210;
    if ((int)local_210[1] - *(int *)((longlong)local_210 + 0x34) != (int)local_1e8) {
      `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_270);
    }
    if (((TStack_208.CurrentBitIndex == uVar18) &&
        (TStack_208.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_d8 + 0x10))) &&
       (plVar6 == (longlong *)local_d8)) break;
    pFVar3 = (FString *)(*plVar6 + (longlong)TStack_208.CurrentBitIndex * 0x28);
    UInterchangeMeshFactoryNode::SetSlotMaterialDependencyUid
              ((UInterchangeMeshFactoryNode *)param_1,pFVar3,pFVar3 + 1);
    TStack_208.UnvisitedBitMask = TStack_208.UnvisitedBitMask & ~TStack_208._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_208);
  }
  local_90 = 0;
  if (local_98.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_d8);
  DestructItems<FString,int>((FString *)local_280.Data,local_278);
  if (local_280.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_280.Data);
  }
  DestructItems<_UE::Interchange::MeshesUtilities::ReorderSlotMaterialDependencies<UInterchangeStaticMeshFactoryNode>_::__l2::FOrderHelper,int>
            ((FOrderHelper *)local_290.Data,(int)local_288);
  if ((FOrderHelper *)local_290.Data != (FOrderHelper *)0x0) {
    FMemory::Free(local_290.Data);
  }
  local_40 = 0;
  if (local_48 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_88);
  return;
}

// operator() @ 14e76ecf0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UE::Private::InterchangeMeshPipeline::FindNamedLodGroup'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1,UInterchangeBaseNode *param_2)

{
  UInterchangeBaseNodeContainer *this_00;
  TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *this_01;
  code *pcVar1;
  EInterchangeNodeContainerType EVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  UClass *pUVar7;
  UInterchangeBaseNode *this_02;
  UInterchangeSceneNode *this_03;
  FString *pFVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  uint uVar11;
  wchar_t *pwVar12;
  longlong lVar13;
  int local_res20 [2];
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString *local_68;
  FString local_60;
  FString local_50;
  FString local_40;
  
  EVar2 = UInterchangeBaseNode::GetNodeContainerType(param_2);
  if ((EVar2 == TranslatedScene) && (param_2 != (UInterchangeBaseNode *)0x0)) {
    pUVar7 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar4 = (int)pUVar7->_padding_;
    if ((iVar4 <= *(int *)(param_2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_2->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar7->_padding_)) {
      local_78.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_78.Data.ArrayNum = 0;
      local_78.Data.ArrayMax = 0;
      bVar3 = UInterchangeSceneNode::GetCustomAssetInstanceUid
                        ((UInterchangeSceneNode *)param_2,&local_78);
      if (((bVar3) &&
          (this_02 = UInterchangeBaseNodeContainer::GetNode
                               ((UInterchangeBaseNodeContainer *)**(undefined8 **)this,&local_78),
          this_02 != (UInterchangeBaseNode *)0x0)) &&
         (bVar3 = UObjectBaseUtility::IsA<UInterchangeMeshNode>((UObjectBaseUtility *)this_02),
         bVar3)) {
        UInterchangeBaseNode::GetParentUid(param_2,&local_88);
        this_03 = (UInterchangeSceneNode *)
                  UInterchangeBaseNodeContainer::GetNode
                            ((UInterchangeBaseNodeContainer *)**(undefined8 **)this,&local_88);
        if (this_03 != (UInterchangeSceneNode *)0x0) {
          pUVar7 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
          iVar4 = (int)pUVar7->_padding_;
          if ((iVar4 <= *(int *)(this_03->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
              &pUVar7->_padding_)) {
            do {
              pFVar8 = UE::Interchange::FSceneNodeStaticData::GetLodGroupSpecializeTypeString();
              bVar3 = UInterchangeSceneNode::IsSpecializedTypeContains(this_03,pFVar8);
              if (bVar3) goto LAB_14e76f17a;
              this_00 = (UInterchangeBaseNodeContainer *)**(undefined8 **)this;
              pFVar8 = UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)this_03,&local_60)
              ;
              this_03 = (UInterchangeSceneNode *)
                        UInterchangeBaseNodeContainer::GetNode(this_00,pFVar8);
              if (this_03 == (UInterchangeSceneNode *)0x0) {
LAB_14e76ee60:
                this_03 = (UInterchangeSceneNode *)0x0;
              }
              else {
                pUVar7 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
                iVar4 = (int)pUVar7->_padding_;
                if ((*(int *)(this_03->_padding_ + 0x38) < iVar4) ||
                   ((longlong *)
                    *(undefined1 **)(*(longlong *)(this_03->_padding_ + 0x30) + (longlong)iVar4 * 8)
                    != &pUVar7->_padding_)) goto LAB_14e76ee60;
              }
              if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_60.Data.AllocatorInstance.Data);
              }
            } while (this_03 != (UInterchangeSceneNode *)0x0);
            iVar4 = UInterchangeBaseNodeContainer::GetNodeChildrenCount
                              ((UInterchangeBaseNodeContainer *)**(undefined8 **)this,&local_88);
            if (1 < iVar4) {
              UInterchangeBaseNode::GetDisplayLabel(param_2,&local_a8);
              if ((local_a8.Data.ArrayNum != 0) && (5 < local_a8.Data.ArrayNum + -1)) {
                iVar4 = *(int *)(*(undefined8 **)((longlong)this + 0x10) + 1);
                uVar6 = 0;
                if (iVar4 == 0) {
                  pwVar12 = L"";
                  uVar5 = uVar6;
                }
                else {
                  pwVar12 = (wchar_t *)**(undefined8 **)((longlong)this + 0x10);
                  uVar5 = iVar4 - 1;
                }
                bVar3 = ::FString::StartsWith(&local_a8,pwVar12,uVar5,CaseSensitive);
                if (bVar3) {
                  if (((local_a8.Data.ArrayNum == 0) || (local_a8.Data.ArrayNum + -1 < 5)) &&
                     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValidIndex(Index)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                                         ,0x107,
                                         L"String index out of bounds: Index %i from a string with a length of %i"
                                        ), bVar3)) {
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  if (*(short *)(local_a8.Data.AllocatorInstance.Data + 8) == 0x5f) {
                    pFVar8 = ::FString::RightChop(&local_a8,&local_50,3);
                    iVar4 = (pFVar8->Data).ArrayNum;
                    uVar5 = iVar4 - 1;
                    if (iVar4 == 0) {
                      uVar5 = 0;
                    }
                    uVar9 = uVar5;
                    if (1 < (int)uVar5) {
                      uVar9 = 1;
                    }
                    uVar11 = uVar6;
                    if (0 < (int)uVar9) {
                      uVar11 = uVar9;
                    }
                    ::FString::RemoveAt(pFVar8,uVar11,uVar5 - uVar11,No);
                    local_98.Data.AllocatorInstance.Data = (pFVar8->Data).AllocatorInstance.Data;
                    (pFVar8->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                    local_98.Data.ArrayNum = (pFVar8->Data).ArrayNum;
                    local_98.Data.ArrayMax = (pFVar8->Data).ArrayMax;
                    (pFVar8->Data).ArrayNum = 0;
                    (pFVar8->Data).ArrayMax = 0;
                    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_50.Data.AllocatorInstance.Data);
                    }
                    bVar3 = ::FString::IsNumeric(&local_98);
                    if (bVar3) {
                      FVar10.Data = (FScriptContainerElement *)L"";
                      if (local_98.Data.ArrayNum != 0) {
                        FVar10.Data = local_98.Data.AllocatorInstance.Data;
                      }
                      uVar5 = _wtoi((wchar_t *)FVar10.Data);
                      FVar10.Data = local_88.Data.AllocatorInstance.Data;
                      local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                      local_b8.Data.ArrayNum = local_88.Data.ArrayNum;
                      if (local_88.Data.ArrayNum == 0) {
                        local_b8.Data.ArrayMax = 0;
                      }
                      else {
                        UE::Core::Private::
                        ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_b8,
                                   local_88.Data.ArrayNum,&local_b8.Data.ArrayMax);
                        memcpy(local_b8.Data.AllocatorInstance.Data,FVar10.Data,
                               (longlong)local_88.Data.ArrayNum * 2);
                      }
                      this_01 = *(TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                                  **)((longlong)this + 8);
                      uVar9 = local_b8.Data.ArrayNum - 1;
                      FVar10.Data = local_b8.Data.AllocatorInstance.Data;
                      if (local_b8.Data.ArrayNum == 0) {
                        uVar9 = uVar6;
                        FVar10.Data = (FScriptContainerElement *)L"";
                      }
                      uVar6 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar9,(wchar_t *)FVar10.Data);
                      iVar4 = TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                              ::FindIndexByHash<FString>(this_01,uVar6,&local_b8);
                      if ((iVar4 == -1) ||
                         (lVar13 = *(longlong *)&this_01->Elements + (longlong)iVar4 * 0x28,
                         lVar13 == 0)) {
                        local_68 = &local_b8;
                        TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                        ::EmplaceByHash<TKeyInitializer<FString_const_&>_>
                                  (this_01,(uint)local_res20,
                                   (TKeyInitializer<FString_const_&> *)(ulonglong)uVar6,
                                   (bool *)&local_68);
                        lVar13 = *(longlong *)&this_01->Elements + (longlong)local_res20[0] * 0x28;
                      }
                      if (*(int *)(lVar13 + 0x18) <= (int)uVar5) {
                        TArray<FString,TSizedDefaultAllocator<32>_>::AddDefaulted
                                  ((TArray<FString,TSizedDefaultAllocator<32>_> *)(lVar13 + 0x10),
                                   (uVar5 - *(int *)(lVar13 + 0x18)) + 1);
                      }
                      pFVar8 = UInterchangeBaseNode::GetUniqueID(param_2,&local_40);
                      uVar6 = 0;
                      if ((int)uVar5 < *(int *)(lVar13 + 0x18)) {
                        uVar6 = ~uVar5 >> 0x1f;
                      }
                      if ((uVar6 == 0) &&
                         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                            ("(Index >= 0) & (Index < ArrayNum)",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                             ,0x447,
                                             L"Array index out of bounds: %lld into an array of size %lld"
                                            ), bVar3)) {
                        pcVar1 = (code *)swi(3);
                        (*pcVar1)();
                        return;
                      }
                      ::FString::operator=
                                ((FString *)
                                 ((longlong)(int)uVar5 * 0x10 + *(longlong *)(lVar13 + 0x10)),pFVar8
                                );
                      if (local_40.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_40.Data.AllocatorInstance.Data);
                      }
                      if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                        FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                      }
                    }
                    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_98.Data.AllocatorInstance.Data);
                    }
                  }
                }
              }
              if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a8.Data.AllocatorInstance.Data);
              }
            }
          }
        }
LAB_14e76f17a:
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// operator() @ 14e76f2f0

bool __thiscall
`UE::Private::InterchangeMeshPipeline::IsSceneNodeNestedInSkeleton'::__l2::<lambda_1>::operator()
          (void *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined1 uVar2;
  FString *pFVar3;
  undefined1 local_res8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_28;
  undefined1 *local_20;
  undefined1 local_18 [16];
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  pFVar3 = ::FString::FString((FString *)local_18,param_1);
  UE::Private::InterchangeMeshPipeline::CollectAllChildren
            ((UInterchangeBaseNodeContainer *)**(undefined8 **)this,pFVar3,&local_38);
  local_res8[0] = 0;
  local_28 = &local_38;
  local_20 = local_res8;
  local_18._8_8_ = &local_28;
  local_18._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<``UE::Private::InterchangeMeshPipeline::IsSceneNodeNestedInSkeleton'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,FString_const_&,UInterchangeMeshNode_*>
       ::Call;
  UInterchangeBaseNodeContainer::BreakableIterateNodesOfType<UInterchangeMeshNode>
            ((UInterchangeBaseNodeContainer *)**(undefined8 **)this,
             (TFunctionRef<bool___cdecl(FString_const_&,UInterchangeMeshNode_*)> *)local_18);
  uVar2 = local_res8[0];
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (bool)uVar2;
}

// AddSpecularProfileToFactoryNode @ 14e780570

void __cdecl
UE::Interchange::InterchangeGenericMaterialPipeline::Private::AddSpecularProfileToFactoryNode
          (UInterchangeBaseNode *param_1,UInterchangeFactoryBaseNode *param_2,
          UInterchangeBaseNodeContainer *param_3)

{
  bool bVar1;
  FString *pFVar2;
  UInterchangeBaseNode *pUVar3;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  pFVar2 = ::FName::ToString(&Materials::SubstrateMaterial::SpecularProfile,&local_18);
  bVar1 = UInterchangeBaseNode::GetStringAttribute(param_1,pFVar2,&local_28);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar1) {
    pUVar3 = UInterchangeBaseNodeContainer::GetNode(param_3,&local_28);
    if (pUVar3 != (UInterchangeBaseNode *)0x0) {
      pFVar2 = ::FName::ToString(&Materials::SubstrateMaterial::SpecularProfile,&local_18);
      UInterchangeBaseNode::AddStringAttribute((UInterchangeBaseNode *)param_2,pFVar2,&local_28);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
      pFVar2 = UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_18,&local_28);
      UInterchangeFactoryBaseNode::AddFactoryDependencyUid(param_2,pFVar2);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// ApplyNaniteTriangleThreshold @ 14e780ed0

void __cdecl
UE::InterchangeStaticMeshFactory::Private::ApplyNaniteTriangleThreshold
          (UInterchangeStaticMeshFactoryNode *param_1,UStaticMesh *param_2,
          UInterchangeBaseNodeContainer *param_3)

{
  return;
}

// AreRequiredPackagesLoaded @ 14e780ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UE::Interchange::InterchangeGenericMaterialPipeline::Private::AreRequiredPackagesLoaded(void)

{
  ulonglong *puVar1;
  uint uVar2;
  bool bVar3;
  ulonglong uVar4;
  UObject *pUVar5;
  undefined **ppuVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  bool bVar9;
  ulonglong *puVar10;
  FScriptContainerElement *pFVar11;
  undefined1 auStackY_128 [32];
  undefined1 local_e8 [8];
  ForAnyElementType local_e0;
  uint local_d8;
  int local_d4;
  FString local_d0;
  FSoftObjectPath local_c0;
  FScriptContainerElement *local_98;
  int iStack_90;
  undefined4 uStack_8c;
  TStringView<wchar_t> local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  ulonglong local_28 [2];
  
  puVar10 = local_28;
  local_28[0] = __security_cookie.value ^ (ulonglong)auStackY_128;
  ::FString::FString(&local_78,
                     L"MaterialFunction\'/Engine/Functions/Engine_MaterialFunctions01/Shading/ConvertFromDiffSpec.ConvertFromDiffSpec\'"
                    );
  ::FString::FString(&local_68,
                     L"MaterialFunction\'/Engine/Functions/Engine_MaterialFunctions01/Texturing/FlattenNormal.FlattenNormal\'"
                    );
  ::FString::FString(&local_58,
                     L"MaterialFunction\'/Engine/Functions/Engine_MaterialFunctions02/Utility/MakeFloat3.MakeFloat3\'"
                    );
  ::FString::FString(&local_48,
                     L"MaterialFunction\'/Engine/Functions/Engine_MaterialFunctions02/Texturing/CustomRotator.CustomRotator\'"
                    );
  ::FString::FString(&local_38,
                     L"MaterialFunction\'/InterchangeAssets/Functions/MF_PhongToMetalRoughness.MF_PhongToMetalRoughness\'"
                    );
  lVar7 = 5;
  local_e0.Data = (FScriptContainerElement *)0x0;
  local_d8 = 5;
  Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x10,8,5,0,&local_e0,5,&local_d4);
  ConstructItems<FString,FString,int>(local_e0.Data,&local_78,5);
  do {
    puVar1 = puVar10 + -2;
    puVar10 = puVar10 + -2;
    lVar7 = lVar7 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar7 != 0);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), uVar2 = local_d8, ::_TSS0 == -1)) {
    uVar4 = (ulonglong)(int)local_d8;
    bVar9 = true;
    pFVar11 = local_e0.Data + uVar4 * 0x10;
    FVar8.Data = local_e0.Data;
    while( true ) {
      if ((uint)uVar4 != uVar2) {
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_e8);
      }
      if (FVar8.Data == pFVar11) break;
      FPackageName::ExportTextPathToObjectPath(&local_d0,(FString *)FVar8.Data);
      bVar3 = FPackageName::DoesPackageExist(&local_d0,(FString *)0x0,true);
      if (bVar3) {
        local_98 = local_d0.Data.AllocatorInstance.Data;
        local_c0.AssetPath.PackageName.ComparisonIndex.Value = 0;
        local_c0.AssetPath.PackageName.Number = 0;
        local_c0.AssetPath.AssetName.ComparisonIndex.Value = 0;
        local_c0.AssetPath.AssetName.Number = 0;
        local_c0.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_c0.SubPathString.Data.ArrayNum = 0;
        local_c0.SubPathString.Data.ArrayMax = 0;
        iStack_90 = local_d0.Data.ArrayNum + -1;
        if (local_d0.Data.ArrayNum == 0) {
          iStack_90 = 0;
        }
        local_88._12_4_ = uStack_8c;
        local_88.Size = iStack_90;
        local_88.DataPtr = (wchar_t *)local_d0.Data.AllocatorInstance.Data;
        FSoftObjectPath::SetPath(&local_c0,&local_88);
        pUVar5 = FSoftObjectPath::TryLoad(&local_c0,(FUObjectSerializeContext *)0x0);
        if (local_c0.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c0.SubPathString.Data.AllocatorInstance.Data);
        }
        if (pUVar5 == (UObject *)0x0) {
          if (2 < (byte)LogInterchangePipeline._0_1_) {
            if (*(int *)(FVar8.Data + 8) == 0) {
              ppuVar6 = &PTR_u_Couldn_t_load___152f57830;
            }
            else {
              ppuVar6 = &PTR_u_Couldn_t_load___152f57830;
            }
            goto LAB_14e7811a2;
          }
          goto LAB_14e7811ae;
        }
      }
      else {
        if (2 < (byte)LogInterchangePipeline._0_1_) {
          ppuVar6 = &PTR_u_Couldn_t_find___152f57850;
LAB_14e7811a2:
          Logging::Private::BasicLog<3>
                    ((FStaticBasicLogRecord *)ppuVar6,(FLogCategoryBase *)&LogInterchangePipeline);
        }
LAB_14e7811ae:
        bVar9 = false;
      }
      if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d0.Data.AllocatorInstance.Data);
      }
      uVar4 = (ulonglong)local_d8;
      FVar8.Data = FVar8.Data + 0x10;
    }
    bRequiredPackagesLoaded = bVar9;
    _Init_thread_footer(&::_TSS0);
  }
  bVar9 = bRequiredPackagesLoaded;
  DestructItems<FString,int>((FString *)local_e0.Data,local_d8);
  if (local_e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e0.Data);
  }
  return bVar9;
}

// CollectAllChildren @ 14e782ae0

void __cdecl
UE::Private::InterchangeMeshPipeline::CollectAllChildren
          (UInterchangeBaseNodeContainer *param_1,FString *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  void *_Src;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  ForAnyElementType FVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res10 [8];
  FString local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_38;
  
  pFVar6 = (param_3->AllocatorInstance).Data;
  if ((pFVar6 <= param_2) && (param_2 < pFVar6 + (longlong)param_3->ArrayMax * 0x10)) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = param_3->ArrayNum;
  if (iVar3 == param_3->ArrayMax) {
    iVar3 = Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&param_3->AllocatorInstance,&param_3->ArrayMax);
  }
  param_3->ArrayNum = iVar3 + 1;
  ::FString::FString((FString *)((param_3->AllocatorInstance).Data + (longlong)iVar3 * 0x10),param_2
                    );
  UInterchangeBaseNodeContainer::GetNodeChildrenUids(param_1,&local_38,param_2);
  iVar3 = local_38.ArrayNum;
  pFVar6 = local_38.AllocatorInstance.Data + (longlong)local_38.ArrayNum * 0x10;
  FVar4.Data = local_38.AllocatorInstance.Data;
  while( true ) {
    if (local_38.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar4.Data == pFVar6) break;
    local_48.Data.ArrayNum = *(int *)(FVar4.Data + 8);
    lVar5 = (longlong)local_48.Data.ArrayNum;
    _Src = *(void **)FVar4.Data;
    local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    if (local_48.Data.ArrayNum == 0) {
      local_48.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_48.Data.ArrayNum,0,(ForAnyElementType *)&local_48,local_48.Data.ArrayNum,
                 &local_48.Data.ArrayMax);
      memcpy(local_48.Data.AllocatorInstance.Data,_Src,lVar5 * 2);
    }
    CollectAllChildren(param_1,&local_48,param_3);
    FVar4.Data = FVar4.Data + 0x10;
  }
  DestructItems<FString,int>((FString *)local_38.AllocatorInstance.Data,local_38.ArrayNum);
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  pFVar6 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  return;
}

// ConvertWrap @ 14e78ff60

TextureAddress __cdecl UE::Interchange::Private::ConvertWrap(EInterchangeTextureWrapMode param_1)

{
  undefined1 local_res8 [32];
  
  if (param_1 != Wrap) {
    if (param_1 == Clamp) {
      return TA_Clamp;
    }
    if (param_1 == Mirror) {
      return TA_Mirror;
    }
    `UE::Interchange::Private::ConvertWrap'::__l4::<lambda_1>::operator()(local_res8);
  }
  return TA_Wrap;
}

// CreateExpressionWithMaterialFunction @ 14e796180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeMaterialExpressionFactoryNode * __cdecl
UE::Interchange::InterchangeGenericMaterialPipeline::Private::CreateExpressionWithMaterialFunction
          (UInterchangeBaseNodeContainer *param_1,UInterchangeMaterialFactoryNode *param_2,
          FString *param_3,FString *param_4)

{
  FString *pFVar1;
  UClass *pUVar2;
  UInterchangeMaterialExpressionFactoryNode *pUVar3;
  UInterchangeMaterialExpressionFactoryNode *pUVar4;
  longlong *plVar5;
  undefined1 auStackY_118 [32];
  FString local_e8;
  FString local_d8;
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_118;
  pFVar1 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_e8);
  ::FString::ConcatFF(&local_d8,pFVar1,param_3);
  if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data.AllocatorInstance.Data);
  }
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar2 = Z_Construct_UClass_UInterchangeMaterialExpressionFactoryNode_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,pUVar2);
  local_c8._48_8_ = (FObjectInstancingGraph *)0x0;
  local_c8._56_8_ = (UPackage *)0x0;
  local_c8._16_4_ = 0;
  local_c8._20_4_ = 0;
  local_c8._24_4_ = RF_NoFlags;
  local_c8._40_8_ = (UObject *)0x0;
  local_c8[0x20] = false;
  local_c8._8_8_ = param_1;
  pUVar3 = (UInterchangeMaterialExpressionFactoryNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar5 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar5 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar5 + 0x10))(plVar5);
  }
  pUVar4 = (UInterchangeMaterialExpressionFactoryNode *)0x0;
  if (pUVar3 != (UInterchangeMaterialExpressionFactoryNode *)0x0) {
    pFVar1 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_e8);
    UInterchangeBaseNodeContainer::SetupNode
              (param_1,(UInterchangeBaseNode *)pUVar3,&local_d8,param_3,FactoryData,pFVar1);
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    UpdateFunctionCallExpression(pUVar3,param_4);
    pUVar4 = pUVar3;
  }
  if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  }
  return pUVar4;
}

// CreateGroomFactoryNode @ 14e796fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeFactoryBaseNode * __cdecl
UE::InterchangeGroomPipeline::Private::CreateGroomFactoryNode
          (UInterchangeBaseNodeContainer *param_1,UInterchangeGroomNode *param_2,
          EInterchangeGroomCacheImportType param_3)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  UClass *pUVar4;
  UInterchangeGroomCacheFactoryNode *this;
  UInterchangeSourceNode *pUVar5;
  longlong *plVar6;
  wchar_t *pwVar7;
  undefined1 auStackY_1e8 [32];
  EInterchangeGroomCacheImportType local_1b8 [8];
  EInterchangeGroomCacheAttributes local_1b0 [4];
  int local_1ac;
  FString local_1a8;
  FString local_198;
  FString local_188;
  double local_178;
  FString local_170;
  FString local_160;
  FString local_150;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_1b8[0] = param_3;
  UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_150);
  local_1a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1a8.Data.ArrayNum = 0;
  local_1a8.Data.ArrayMax = 0;
  if (local_1b8[0] == None) {
    pFVar3 = UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_198,&local_150);
    if (&local_1a8 != pFVar3) {
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      local_1a8.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_1a8.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UInterchangeGroomFactoryNode_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_138,pUVar4);
    local_138._8_8_ = param_1;
    this = (UInterchangeGroomCacheFactoryNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_138);
    if (local_138._64_8_ != 0) {
      plVar6 = (longlong *)(local_138 + 0x50);
      if ((longlong *)local_138._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_138._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
  }
  else {
    pwVar7 = L"_guides_";
    if (local_1b8[0] == Strands) {
      pwVar7 = L"_strands_";
    }
    ::FString::FString(&local_160,pwVar7);
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FString::FString(&Suffix,L"cache");
        atexit(`UE::InterchangeGroomPipeline::Private::CreateGroomFactoryNode'::__l7::
               _dynamic_atexit_destructor_for__Suffix__);
        _Init_thread_footer(&::_TSS0);
      }
    }
    ::FString::ConcatFF(&local_198,&local_150,&local_160);
    ::FString::ConcatFF(&local_170,&local_198,&Suffix);
    pFVar3 = UInterchangeFactoryBaseNode::BuildFactoryNodeUid(&local_188,&local_170);
    if (&local_1a8 != pFVar3) {
      if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
      }
      local_1a8.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1a8.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_1a8.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar4 = Z_Construct_UClass_UInterchangeGroomCacheFactoryNode_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_b8,pUVar4);
    local_b8._8_8_ = param_1;
    this = (UInterchangeGroomCacheFactoryNode *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_b8);
    if (local_b8._64_8_ != 0) {
      plVar6 = (longlong *)(local_b8 + 0x50);
      if ((longlong *)local_b8._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_b8._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    UInterchangeGroomCacheFactoryNode::SetCustomGroomCacheImportType(this,local_1b8);
    pcVar1 = *(code **)(this->_padding_ + 0x2e0);
    pFVar3 = (FString *)(**(code **)(param_2->_padding_ + 0x2d8))(param_2,&local_188);
    ::FString::ConcatFF(&local_170,pFVar3,&local_160);
    ::FString::ConcatFF(&local_198,&local_170,&Suffix);
    (*pcVar1)(this,&local_198);
    if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_198.Data.AllocatorInstance.Data);
    }
    if (local_170.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_170.Data.AllocatorInstance.Data);
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
    local_1ac = 0;
    bVar2 = UInterchangeGroomNode::GetCustomNumFrames(param_2,&local_1ac);
    if (bVar2) {
      UInterchangeGroomCacheFactoryNode::SetCustomNumFrames(this,&local_1ac);
    }
    bVar2 = UInterchangeGroomNode::GetCustomStartFrame(param_2,&local_1ac);
    if (bVar2) {
      UInterchangeGroomCacheFactoryNode::SetCustomStartFrame(this,&local_1ac);
    }
    bVar2 = UInterchangeGroomNode::GetCustomEndFrame(param_2,&local_1ac);
    if (bVar2) {
      UInterchangeGroomCacheFactoryNode::SetCustomEndFrame(this,&local_1ac);
    }
    local_178 = 0.0;
    bVar2 = UInterchangeGroomNode::GetCustomFrameRate(param_2,&local_178);
    if (bVar2) {
      UInterchangeGroomCacheFactoryNode::SetCustomFrameRate(this,&local_178);
    }
    bVar2 = UInterchangeGroomNode::GetCustomGroomCacheAttributes(param_2,local_1b0);
    if (bVar2) {
      UInterchangeGroomCacheFactoryNode::SetCustomGroomCacheAttributes(this,local_1b0);
    }
    if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_160.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_198,L"");
  pFVar3 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)param_2,&local_188);
  UInterchangeBaseNodeContainer::SetupNode
            (param_1,(UInterchangeBaseNode *)this,&local_1a8,pFVar3,FactoryData,&local_198);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_198.Data.AllocatorInstance.Data);
  }
  pUVar5 = UInterchangeSourceNode::FindOrCreateUniqueInstance(param_1);
  Interchange::PipelineHelper::FillSubPathFromSourceNode((UInterchangeFactoryBaseNode *)this,pUVar5)
  ;
  UInterchangeUserDefinedAttributesAPI::DuplicateAllUserDefinedAttribute
            ((UInterchangeBaseNode *)param_2,(UInterchangeBaseNode *)this,false);
  pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_188);
  UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)this,pFVar3);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  pFVar3 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this,&local_188);
  UInterchangeBaseNode::AddTargetNodeUid((UInterchangeBaseNode *)param_2,pFVar3);
  if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_188.Data.AllocatorInstance.Data);
  }
  if (local_1a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.Data.AllocatorInstance.Data);
  }
  if (local_150.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_150.Data.AllocatorInstance.Data);
  }
  return (UInterchangeFactoryBaseNode *)this;
}

// CreateTextureFactoryNode @ 14e79cd60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UInterchangeSparseVolumeTextureFactoryNode * __cdecl
UE::Interchange::Private::CreateTextureFactoryNode
          (FString *param_1,FString *param_2,UInterchangeBaseNodeContainer *param_3)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UInterchangeSparseVolumeTextureFactoryNode *pUVar4;
  UClass *pUVar5;
  UInterchangeSourceNode *pUVar6;
  longlong *plVar7;
  undefined1 auStackY_e8 [32];
  FString local_b8;
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  bVar3 = UInterchangeBaseNodeContainer::IsNodeUidValid(param_3,param_2);
  if (bVar3) {
    pUVar4 = (UInterchangeSparseVolumeTextureFactoryNode *)
             UInterchangeBaseNodeContainer::GetFactoryNode(param_3,param_2);
    if (pUVar4 != (UInterchangeSparseVolumeTextureFactoryNode *)0x0) {
      pUVar5 = Z_Construct_UClass_UInterchangeSparseVolumeTextureFactoryNode_NoRegister();
      iVar1 = (int)pUVar5->_padding_;
      if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar5->_padding_)) {
        return pUVar4;
      }
    }
    bVar3 = Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<5571486573427425310>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeSparseVolumeTexturePipeline.cpp"
                       ,0x1e,"TextureFactoryNode");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pUVar4 = (UInterchangeSparseVolumeTextureFactoryNode *)(*pcVar2)();
      return pUVar4;
    }
    pUVar4 = (UInterchangeSparseVolumeTextureFactoryNode *)0x0;
  }
  else {
    FObjectInitializer::AssertIfInConstructor
              ((UObject *)param_3,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UInterchangeSparseVolumeTextureFactoryNode_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_a8,pUVar5);
    local_a8._8_8_ = param_3;
    pUVar4 = (UInterchangeSparseVolumeTextureFactoryNode *)
             StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
    if (local_a8._64_8_ != 0) {
      plVar7 = (longlong *)(local_a8 + 0x50);
      if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
        plVar7 = (longlong *)local_a8._104_8_;
      }
      (**(code **)(*plVar7 + 0x10))();
    }
    ::FString::FString(&local_b8,L"");
    UInterchangeBaseNodeContainer::SetupNode
              (param_3,(UInterchangeBaseNode *)pUVar4,param_2,param_1,FactoryData,&local_b8);
    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    }
    pUVar6 = UInterchangeSourceNode::FindOrCreateUniqueInstance(param_3);
    PipelineHelper::FillSubPathFromSourceNode((UInterchangeFactoryBaseNode *)pUVar4,pUVar6);
  }
  return pUVar4;
}

// DeleteActors @ 14e79e490

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UE::Interchange::Private::DeleteActors(TArray<AActor_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  AActor *this;
  UWorld *this_00;
  UPackage *pUVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    pFVar4 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar4 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        `TCheckedPointerIterator<AActor_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar4 == pFVar1) break;
      this = *(AActor **)pFVar4;
      if ((this != (AActor *)0x0) && (this_00 = AActor::GetWorld(this), this_00 != (UWorld *)0x0)) {
        UWorld::EditorDestroyActor(this_00,this,true);
        pUVar3 = GetTransientPackage();
        UObject::Rename((UObject *)this,(wchar_t *)0x0,(UObject *)pUVar3,0x10);
      }
      pFVar4 = pFVar4 + 8;
    }
  }
  return;
}

// DeleteAssets @ 14e79e530

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UE::Interchange::Private::DeleteAssets(TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UObjectBase *this;
  code *pcVar3;
  longlong lVar4;
  bool bVar5;
  UPackage *pUVar6;
  FUObjectItem *pFVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [16];
  
  iVar2 = param_1->ArrayNum;
  if (iVar2 != 0) {
    bVar5 = false;
    pFVar9 = (param_1->AllocatorInstance).Data;
    pFVar1 = pFVar9 + (longlong)iVar2 * 8;
    while( true ) {
      if (param_1->ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<UObject_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res10);
      }
      if (pFVar9 == pFVar1) break;
      this = *(UObjectBase **)pFVar9;
      if (this != (UObjectBase *)0x0) {
        pcVar3 = *(code **)(this->_padding_ + 0x170);
        pUVar6 = GetTransientPackage();
        (*pcVar3)(this,0,pUVar6,0x30);
        pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,this->InternalIndex);
        if (((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) {
          pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,this->InternalIndex);
          FUObjectItem::ClearRootFlags(pFVar7,RootSet);
        }
        UObjectBase::AtomicallyClearFlags(this,RF_Standalone|RF_Public);
        pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,this->InternalIndex);
        if ((((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3e) & 1) != 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("!IsRooted()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectBaseUtility.h"
                               ,0xb8,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        UObjectBase::AtomicallySetFlags(this,RF_MirroredGarbage);
        pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,this->InternalIndex);
        do {
          lVar4 = (pFVar7->field0_0x0).FlagsAndRefCount;
          uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
          if ((uVar8 >> 0x15 & 1) != 0) break;
          if (((ulonglong)pFVar7 & 7) != 0) {
            FWindowsPlatformAtomics::HandleAtomicsFailure
                      (
                      L"InterlockedCompareExchange int64 requires Dest pointer to be aligned to %d bytes"
                      );
          }
          LOCK();
          bVar5 = lVar4 == (pFVar7->field0_0x0).FlagsAndRefCount;
          if (bVar5) {
            (pFVar7->field0_0x0).FlagsAndRefCount =
                 (longlong)(int)uVar8 << 0x20 | (longlong)(int)lVar4 | 0x20000000000000;
          }
          UNLOCK();
        } while (!bVar5);
        pFVar7 = FUObjectArray::IndexToObject(&GUObjectArray,this->InternalIndex);
        FUObjectItem::ClearRootFlags(pFVar7,Async);
        bVar5 = true;
      }
      pFVar9 = pFVar9 + 8;
    }
    if (bVar5) {
      CollectGarbage(RF_NoFlags,true);
    }
  }
  return;
}

// DoesSkeletalAnimationTargetSkeleton @ 14e7a0860

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UE::Interchange::Private::DoesSkeletalAnimationTargetSkeleton
          (UInterchangeBaseNodeContainer *param_1,UInterchangeSkeletalAnimationTrackNode *param_2,
          USkeleton *param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  code *pcVar4;
  undefined8 this;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  UInterchangeBaseNode *pUVar9;
  UClass *pUVar10;
  int *piVar11;
  longlong *plVar12;
  longlong *plVar13;
  byte bVar14;
  ForAnyElementType FVar15;
  longlong lVar16;
  int iVar17;
  longlong *plVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  ForElementType<FSetElementId> FVar23;
  undefined1 auStack_3f8 [32];
  undefined1 local_3d8;
  undefined1 local_3d7;
  undefined1 local_3d6 [6];
  FString local_3d0;
  undefined8 local_3c0;
  ulonglong local_3b8;
  FString local_3b0;
  longlong *local_3a0;
  int iStack_398;
  uint uStack_394;
  TBitArray<FDefaultBitArrayAllocator> *local_390;
  undefined4 uStack_388;
  uint uStack_384;
  int local_380;
  undefined4 uStack_37c;
  int iStack_378;
  undefined4 uStack_374;
  int local_370;
  int local_36c;
  undefined1 local_368 [16];
  FName local_358;
  FName local_350;
  UInterchangeSkeletalAnimationTrackNode *local_348;
  longlong *local_340;
  uint uStack_338;
  undefined4 uStack_334;
  TBitArray<FDefaultBitArrayAllocator> *local_330;
  undefined4 uStack_328;
  uint uStack_324;
  uint local_320;
  uint uStack_31c;
  int iStack_318;
  undefined4 uStack_314;
  longlong *local_310;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_308;
  undefined8 uStack_2e8;
  longlong *local_2e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d8;
  undefined8 uStack_2b8;
  FString local_2b0 [2];
  undefined4 local_284;
  undefined1 local_278 [32];
  uint *local_258;
  uint local_250;
  undefined4 local_24c;
  undefined4 local_248;
  int local_244;
  ForElementType<FSetElementId> local_238;
  int local_230;
  undefined1 local_228 [32];
  uint *local_208;
  uint local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  int local_1f4;
  ForElementType<FSetElementId> local_1e8;
  int local_1e0;
  TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> local_1d8;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_188;
  undefined1 local_138 [64];
  void *local_f8;
  undefined4 local_f0;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  local_e8;
  undefined1 local_98 [64];
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  local_e8.Pairs.Elements._0_8_ = 0;
  local_e8.Pairs.Elements._8_8_ = 0;
  local_e8.Pairs.Elements._32_8_ = 0;
  local_e8.Pairs.Elements._40_4_ = 0;
  local_e8.Pairs.Elements._44_4_ = 0x80;
  local_e8.Pairs.Elements._48_4_ = 0xffffffff;
  local_e8.Pairs.Elements._52_4_ = 0;
  local_e8.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_e8.Pairs.HashSize = 0;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_4_ = 0;
  local_98._44_4_ = 0x80;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_368._8_8_ = param_1;
  local_348 = param_2;
  UInterchangeSkeletalAnimationTrackNode::GetSceneNodeAnimationPayloadKeys
            (param_2,(TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)&local_e8,
             (TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
              *)local_98);
  local_228._0_8_ = 0;
  local_228._8_8_ = 0;
  local_208 = (uint *)0x0;
  local_200 = 0;
  local_1fc = 0x80;
  local_1f8 = 0xffffffff;
  local_1f4 = 0;
  local_1e8 = (ForElementType<FSetElementId>)0x0;
  local_1e0 = 0;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  GetKeys<DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
            (&local_e8,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_228);
  uVar20 = local_200;
  local_3b8 = 1;
  iStack_398 = 0;
  uStack_394 = 1;
  uStack_384 = 0;
  local_380 = iStack_398;
  if (local_200 != 0) {
    puVar22 = (uint *)(local_228 + 0x10);
    if (local_208 != (uint *)0x0) {
      puVar22 = local_208;
    }
    uStack_394 = *puVar22;
    iStack_398 = 0;
    local_380 = 0;
    while (uStack_394 == 0) {
      iStack_398 = iStack_398 + 1;
      local_380 = local_380 + 0x20;
      uStack_394 = 1;
      uStack_384 = local_200;
      if ((int)((local_200 - 1) + ((int)(local_200 - 1) >> 0x1f & 0x1fU)) >> 5 < iStack_398)
      goto LAB_14e7a0a20;
      uStack_394 = puVar22[iStack_398];
    }
    uStack_394 = ~(uStack_394 - 1) & uStack_394;
    uVar1 = (ulonglong)uStack_394 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_370 = (int)lVar16;
    uStack_384 = local_370 + -1 + local_380;
    if ((int)local_200 < (int)uStack_384) {
      uStack_384 = local_200;
    }
  }
LAB_14e7a0a20:
  local_3a0 = (longlong *)local_228;
  uStack_37c = local_284;
  local_390 = (TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10);
  iStack_378 = local_228._8_4_ - local_1f4;
  uVar19 = local_200 & 0xffffffe0;
  TStack_308._padding_ = CONCAT44(uStack_394,iStack_398);
  uStack_388 = 0xffffffff;
  TStack_308.CurrentBitIndex = uStack_384;
  TStack_308.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)local_200 >> 5;
  TStack_308._28_4_ = local_284;
  TStack_308.BaseBitIndex = local_380;
  uStack_2e8 = CONCAT44(uStack_374,iStack_378);
  bVar14 = (byte)local_200;
  local_310 = local_3a0;
  TStack_308.Array = local_390;
  if (((int)local_200 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  this = local_368._8_8_;
  if (uVar20 != local_200) {
    puVar22 = (uint *)(local_228 + 0x10);
    if (local_208 != (uint *)0x0) {
      puVar22 = local_208;
    }
    uVar20 = -1 << (bVar14 & 0x1f) & puVar22[iVar17];
    while (uVar20 == 0) {
      iVar17 = iVar17 + 1;
      uVar19 = uVar19 + 0x20;
      uVar20 = local_200;
      if ((int)(((int)(local_200 - 1) >> 0x1f & 0x1fU) + (local_200 - 1)) >> 5 < iVar17)
      goto LAB_14e7a0b50;
      uVar20 = puVar22[iVar17];
    }
    uVar1 = (ulonglong)(~(uVar20 - 1) & uVar20) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_36c = (int)lVar16;
    uVar20 = local_36c + -1 + uVar19;
    if ((int)local_200 < (int)uVar20) {
      uVar20 = local_200;
    }
  }
LAB_14e7a0b50:
  do {
    plVar12 = local_310;
    if ((int)local_310[1] - *(int *)((longlong)local_310 + 0x34) != (int)uStack_2e8) {
      local_3d8 = 0;
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_3d8);
    }
    if (((TStack_308.CurrentBitIndex == uVar20) &&
        (TStack_308.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_228 + 0x10))) &&
       (plVar12 == (longlong *)local_228)) break;
    pUVar9 = UInterchangeBaseNodeContainer::GetNode
                       ((UInterchangeBaseNodeContainer *)this,
                        (FString *)(*plVar12 + (longlong)TStack_308.CurrentBitIndex * 0x18));
    if (pUVar9 != (UInterchangeBaseNode *)0x0) {
      pUVar10 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
      iVar17 = (int)pUVar10->_padding_;
      if ((iVar17 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
          &pUVar10->_padding_)) {
        UInterchangeBaseNode::GetDisplayLabel(pUVar9,&local_3b0);
        FVar15.Data = (FScriptContainerElement *)L"";
        if (local_3b0.Data.ArrayNum != 0) {
          FVar15.Data = local_3b0.Data.AllocatorInstance.Data;
        }
        ::FName::FName(&local_358,(wchar_t *)FVar15.Data);
        local_3c0 = 0;
        if (((local_358 != (FName)0x0) &&
            (piVar11 = TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                       ::Find((TMapBase<FName,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,int,0>_>
                               *)&(param_3->ReferenceSkeleton).FinalNameToIndexMap,local_358),
            piVar11 != (int *)0x0)) && (*piVar11 != -1)) {
          if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
          }
LAB_14e7a12ae:
          bVar5 = true;
          goto LAB_14e7a12b0;
        }
        if (local_3b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3b0.Data.AllocatorInstance.Data);
        }
      }
    }
    TStack_308.UnvisitedBitMask = TStack_308.UnvisitedBitMask & ~TStack_308._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_308);
  } while( true );
  plVar12 = (longlong *)(**(code **)(param_3->_padding_ + 0x18))(&param_3->_padding_,0);
  plVar13 = (longlong *)(**(code **)(*plVar12 + 0x458))(plVar12);
  local_1d8.Elements._44_4_ = 0x80;
  local_1d8.Elements._0_8_ = 0;
  local_1d8.Elements._8_8_ = 0;
  local_1d8.Elements._32_8_ = 0;
  uVar20 = 0;
  local_1d8.Elements._40_4_ = 0;
  local_1d8.Elements._52_4_ = 0;
  local_1d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1d8.HashSize = 0;
  local_1d8.Elements._48_4_ = 0xffffffff;
  plVar18 = (longlong *)*plVar13;
  lVar16 = plVar13[1];
  plVar12 = plVar18 + (int)lVar16;
  while( true ) {
    if ((int)plVar13[1] != (int)lVar16) {
      local_3d7 = 0;
      `TCheckedPointerIterator<TObjectPtr<UMorphTarget>_const_,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(&local_3d7);
    }
    if (plVar18 == plVar12) break;
    if (*plVar18 != 0) {
      local_350 = *(FName *)(*plVar18 + 0x18);
      ::FName::ToString(&local_350,local_2b0);
      TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>::Emplace<FString>
                (&local_1d8,(FString *)local_368,(bool *)local_2b0);
      if (local_2b0[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2b0[0].Data.AllocatorInstance.Data);
      }
    }
    plVar18 = plVar18 + 1;
  }
  local_188.Pairs.Elements._0_8_ = 0;
  local_188.Pairs.Elements._8_8_ = 0;
  local_188.Pairs.Elements._32_8_ = 0;
  local_188.Pairs.Elements._40_4_ = 0;
  local_188.Pairs.Elements._44_4_ = 0x80;
  local_188.Pairs.Elements._48_4_ = 0xffffffff;
  local_188.Pairs.Elements._52_4_ = 0;
  local_188.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_188.Pairs.HashSize = 0;
  local_138._0_8_ = 0;
  local_138._8_8_ = 0;
  local_138._32_8_ = 0;
  local_138._40_4_ = 0;
  local_138._44_4_ = 0x80;
  local_138._48_4_ = 0xffffffff;
  local_138._52_4_ = 0;
  local_f8 = (void *)0x0;
  local_f0 = 0;
  UInterchangeSkeletalAnimationTrackNode::GetMorphTargetNodeAnimationPayloadKeys
            (local_348,
             (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
              *)&local_188,
             (TMap<FString,unsigned_char,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,unsigned_char,0>_>
              *)local_138);
  local_278._0_8_ = 0;
  local_278._8_8_ = 0;
  local_258 = (uint *)0x0;
  local_250 = 0;
  local_24c = 0x80;
  local_248 = 0xffffffff;
  local_244 = 0;
  local_238 = (ForElementType<FSetElementId>)0x0;
  local_230 = 0;
  TMapBase<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>::
  GetKeys<DefaultKeyFuncs<FString,0>,FDefaultSetAllocator>
            (&local_188,(TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> *)local_278);
  uVar19 = local_250;
  uVar7 = 0;
  uStack_324 = uVar7;
  local_320 = uVar7;
  if (local_250 != 0) {
    puVar22 = (uint *)(local_278 + 0x10);
    if (local_258 != (uint *)0x0) {
      puVar22 = local_258;
    }
    uVar21 = *puVar22;
    uVar20 = 0;
    local_320 = 0;
    while (uVar21 == 0) {
      uVar20 = uVar20 + 1;
      local_320 = local_320 + 0x20;
      uStack_324 = local_250;
      if ((int)((local_250 - 1) + ((int)(local_250 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
      goto LAB_14e7a0eb3;
      uVar21 = puVar22[(int)uVar20];
    }
    local_3b8 = (ulonglong)(~(uVar21 - 1) & uVar21);
    uVar1 = local_3b8 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    local_368._4_4_ = (undefined4)lVar16;
    uStack_324 = (local_320 - 1) + local_368._4_4_;
    if ((int)local_250 < (int)uStack_324) {
      uStack_324 = local_250;
    }
  }
LAB_14e7a0eb3:
  local_340 = (longlong *)local_278;
  uVar21 = local_250 & 0xffffffe0;
  uStack_334 = (undefined4)local_3b8;
  uStack_31c = uStack_384;
  local_330 = (TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10);
  iStack_318 = local_278._8_4_ - local_244;
  uStack_328 = 0xffffffff;
  TStack_2d8.CurrentBitIndex = uStack_324;
  TStack_2d8.UnvisitedBitMask = 0xffffffff;
  TStack_2d8._padding_ = CONCAT44(uStack_334,uVar20);
  iVar17 = (int)local_250 >> 5;
  TStack_2d8._28_4_ = uStack_384;
  TStack_2d8.BaseBitIndex = local_320;
  uStack_2b8 = CONCAT44(uStack_314,iStack_318);
  bVar14 = (byte)local_250;
  uStack_338 = uVar20;
  local_2e0 = local_340;
  TStack_2d8.Array = local_330;
  if (((int)local_250 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    uVar6 = (*pcVar4)();
    return (bool)uVar6;
  }
  if (uVar19 != local_250) {
    puVar22 = (uint *)(local_278 + 0x10);
    if (local_258 != (uint *)0x0) {
      puVar22 = local_258;
    }
    uVar20 = -1 << (bVar14 & 0x1f) & puVar22[iVar17];
    while (uVar20 == 0) {
      iVar17 = iVar17 + 1;
      uVar21 = uVar21 + 0x20;
      uVar19 = local_250;
      if ((int)(((int)(local_250 - 1) >> 0x1f & 0x1fU) + (local_250 - 1)) >> 5 < iVar17)
      goto LAB_14e7a0fd0;
      uVar20 = puVar22[iVar17];
    }
    uVar1 = (ulonglong)(~(uVar20 - 1) & uVar20) * 2 + 1;
    lVar16 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    uVar19 = (uVar21 - 1) + (int)lVar16;
    if ((int)local_250 < (int)uVar19) {
      uVar19 = local_250;
    }
  }
LAB_14e7a0fd0:
  while( true ) {
    plVar12 = local_2e0;
    if ((int)local_2e0[1] - *(int *)((longlong)local_2e0 + 0x34) != (int)uStack_2b8) {
      `TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_3d6);
    }
    if (((TStack_2d8.CurrentBitIndex == uVar19) &&
        (TStack_2d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_278 + 0x10))) &&
       (plVar12 == (longlong *)local_278)) break;
    pUVar9 = UInterchangeBaseNodeContainer::GetNode
                       ((UInterchangeBaseNodeContainer *)this,
                        (FString *)(*plVar12 + (longlong)TStack_2d8.CurrentBitIndex * 0x18));
    if (pUVar9 != (UInterchangeBaseNode *)0x0) {
      pUVar10 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
      iVar17 = (int)pUVar10->_padding_;
      if ((iVar17 <= *(int *)(pUVar9->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar9->_padding_ + 0x30) + (longlong)iVar17 * 8) ==
          &pUVar10->_padding_)) {
        UInterchangeBaseNode::GetDisplayLabel(pUVar9,&local_3d0);
        uVar20 = local_3d0.Data.ArrayNum - 1;
        FVar15.Data = local_3d0.Data.AllocatorInstance.Data;
        if (local_3d0.Data.ArrayNum == 0) {
          uVar20 = uVar7;
          FVar15.Data = (FScriptContainerElement *)L"";
        }
        uVar20 = FCrc::Strihash_DEPRECATED<wchar_t>(uVar20,(wchar_t *)FVar15.Data);
        if (local_1d8.Elements._8_4_ != local_1d8.Elements._52_4_) {
          FVar23 = (ForElementType<FSetElementId>)&local_1d8.Hash;
          if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar23 = local_1d8.Hash.SecondaryData;
          }
          iVar17 = *(int *)((longlong)FVar23 + (ulonglong)(local_1d8.HashSize - 1U & uVar20) * 4);
          iVar8 = local_3d0.Data.ArrayNum;
          lVar16 = local_1d8.Elements._0_8_;
          while (iVar17 != -1) {
            lVar2 = (longlong)iVar17 * 0x18;
            iVar3 = *(int *)(lVar16 + 8 + lVar2);
            if (iVar3 == iVar8) {
              if (1 < iVar3) {
                iVar8 = FGenericPlatformStricmp::Stricmp
                                  (*(wchar_t **)(lVar16 + lVar2),
                                   (wchar_t *)local_3d0.Data.AllocatorInstance.Data);
                bVar5 = iVar8 == 0;
                lVar16 = local_1d8.Elements._0_8_;
                iVar8 = local_3d0.Data.ArrayNum;
                goto LAB_14e7a1124;
              }
LAB_14e7a1136:
              if (iVar17 != -1) {
                if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
                }
                local_230 = 0;
                if (local_238 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_238);
                }
                TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_278);
                local_f0 = 0;
                if (local_f8 != (void *)0x0) {
                  FMemory::Free(local_f8);
                }
                TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_138);
                local_188.Pairs.HashSize = 0;
                if (local_188.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_188.Pairs.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)&local_188);
                local_1d8.HashSize = 0;
                if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_1d8.Hash.SecondaryData);
                }
                TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          (&local_1d8.Elements);
                goto LAB_14e7a12ae;
              }
              break;
            }
            bVar5 = iVar3 + iVar8 == 1;
LAB_14e7a1124:
            if (bVar5) goto LAB_14e7a1136;
            iVar17 = *(int *)(lVar2 + 0x10 + lVar16);
          }
        }
        if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
        }
      }
    }
    TStack_2d8.UnvisitedBitMask = TStack_2d8.UnvisitedBitMask & ~TStack_2d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d8);
  }
  local_230 = 0;
  if (local_238 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_238);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_278);
  local_f0 = 0;
  if (local_f8 != (void *)0x0) {
    FMemory::Free(local_f8);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_138);
  local_188.Pairs.HashSize = 0;
  if (local_188.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_188.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_188);
  local_1d8.HashSize = 0;
  if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1d8.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_1d8.Elements);
  bVar5 = false;
LAB_14e7a12b0:
  local_1e0 = 0;
  if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_1e8);
  }
  TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<FString>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_228);
  local_50 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,unsigned_char>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  local_e8.Pairs.HashSize = 0;
  if (local_e8.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_e8.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_e8);
  return bVar5;
}

// FillSubPathFromSourceNode @ 14e7ace40

bool __cdecl
UE::Interchange::PipelineHelper::FillSubPathFromSourceNode
          (UInterchangeFactoryBaseNode *param_1,UInterchangeSourceNode *param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  longlong lVar4;
  UClass *pUVar5;
  char cVar6;
  FName local_res8;
  FString local_68;
  FString local_58;
  FString local_48;
  TStringView<wchar_t> local_38;
  FScriptContainerElement *local_28;
  int local_20;
  
  if ((param_1 == (UInterchangeFactoryBaseNode *)0x0) || (param_2 == (UInterchangeSourceNode *)0x0))
  {
    return false;
  }
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Data.ArrayNum = 0;
  local_58.Data.ArrayMax = 0;
  bVar2 = UInterchangeSourceNode::GetCustomSubPathPrefix(param_2,&local_58);
  local_res8 = (FName)((ulonglong)local_res8 & 0xffffffffffffff00);
  bVar3 = UInterchangeSourceNode::GetCustomUseAssetTypeSubPathSuffix(param_2,(bool *)&local_res8);
  cVar6 = '\0';
  if (((!bVar3) ||
      (cVar6 = (char)local_res8.ComparisonIndex.Value,
      (char)local_res8.ComparisonIndex.Value == '\0')) && (!bVar2)) {
    bVar2 = true;
    goto LAB_14e7ad3a8;
  }
  local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_68.Data.ArrayNum = 0;
  local_68.Data.ArrayMax = 0;
  lVar4 = (**(code **)(param_1->_padding_ + 0x2f8))(param_1);
  if ((cVar6 != '\0') && (lVar4 != 0)) {
    pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    if (pUVar5 == (UClass *)0x0) {
LAB_14e7acf0f:
      pUVar5 = Z_Construct_UClass_USpecularProfile_NoRegister();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) goto LAB_14e7acf3d;
      }
      pUVar5 = Z_Construct_UClass_UStaticMesh_NoRegister();
      if (pUVar5 != (UClass *)0x0) {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (bVar2) {
          ::FString::operator=(&local_68,L"StaticMeshes");
          goto LAB_14e7ad33c;
        }
      }
      pUVar5 = Z_Construct_UClass_UTexture_NoRegister();
      if (pUVar5 == (UClass *)0x0) {
LAB_14e7acfc3:
        pUVar5 = Z_Construct_UClass_USparseVolumeTexture_NoRegister();
        if (pUVar5 != (UClass *)0x0) {
          iVar1 = (int)pUVar5->_padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (bVar2) goto LAB_14e7acff1;
        }
        pUVar5 = Z_Construct_UClass_USkeletalMesh_NoRegister();
        if (pUVar5 == (UClass *)0x0) {
LAB_14e7ad038:
          pUVar5 = Z_Construct_UClass_USkeleton_NoRegister();
          if (pUVar5 != (UClass *)0x0) {
            iVar1 = (int)pUVar5->_padding_;
            if ((*(int *)(lVar4 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar5->_padding_)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) goto LAB_14e7ad0c2;
          }
          pUVar5 = Z_Construct_UClass_UPhysicsAsset_NoRegister();
          if (pUVar5 != (UClass *)0x0) {
            iVar1 = (int)pUVar5->_padding_;
            if ((*(int *)(lVar4 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar5->_padding_)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) goto LAB_14e7ad0c2;
          }
          pUVar5 = Z_Construct_UClass_UAnimSequence_NoRegister();
          if (pUVar5 != (UClass *)0x0) {
            iVar1 = (int)pUVar5->_padding_;
            if ((*(int *)(lVar4 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar5->_padding_)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) goto LAB_14e7ad0c2;
          }
          pUVar5 = Z_Construct_UClass_ULevelSequence_NoRegister();
          if (pUVar5 != (UClass *)0x0) {
            iVar1 = (int)pUVar5->_padding_;
            if ((*(int *)(lVar4 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar5->_padding_)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              ::FString::operator=(&local_68,L"LevelSequences");
              goto LAB_14e7ad33c;
            }
          }
          pUVar5 = Z_Construct_UClass_UGeometryCache_NoRegister();
          if (pUVar5 != (UClass *)0x0) {
            iVar1 = (int)pUVar5->_padding_;
            if ((*(int *)(lVar4 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar5->_padding_)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (bVar2) {
              ::FString::operator=(&local_68,L"GeometryCaches");
              goto LAB_14e7ad33c;
            }
          }
          pUVar5 = Z_Construct_UClass_UGroomAsset_NoRegister();
          if (pUVar5 == (UClass *)0x0) {
LAB_14e7ad18b:
            pUVar5 = Z_Construct_UClass_UGroomCache_NoRegister();
            if (pUVar5 != (UClass *)0x0) {
              iVar1 = (int)pUVar5->_padding_;
              if ((*(int *)(lVar4 + 0x38) < iVar1) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar5->_padding_)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) goto LAB_14e7ad1b9;
            }
            pUVar5 = Z_Construct_UClass_UWorld_NoRegister();
            if (pUVar5 != (UClass *)0x0) {
              iVar1 = (int)pUVar5->_padding_;
              if ((*(int *)(lVar4 + 0x38) < iVar1) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar5->_padding_)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                ::FString::operator=(&local_68,L"Levels");
                goto LAB_14e7ad33c;
              }
            }
            pUVar5 = Z_Construct_UClass_USoundBase_NoRegister();
            if (pUVar5 != (UClass *)0x0) {
              iVar1 = (int)pUVar5->_padding_;
              if ((*(int *)(lVar4 + 0x38) < iVar1) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar5->_padding_)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                ::FString::operator=(&local_68,L"Sounds");
                goto LAB_14e7ad33c;
              }
            }
            pUVar5 = Z_Construct_UClass_ULevelVariantSets_NoRegister();
            if (pUVar5 != (UClass *)0x0) {
              iVar1 = (int)pUVar5->_padding_;
              if ((*(int *)(lVar4 + 0x38) < iVar1) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar5->_padding_)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                ::FString::operator=(&local_68,L"Variants");
                goto LAB_14e7ad33c;
              }
            }
            pUVar5 = Z_Construct_UClass_UFoliageType_InstancedStaticMesh_NoRegister();
            if (pUVar5 != (UClass *)0x0) {
              iVar1 = (int)pUVar5->_padding_;
              if ((*(int *)(lVar4 + 0x38) < iVar1) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar5->_padding_)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) {
                ::FString::operator=(&local_68,L"Foliage");
                goto LAB_14e7ad33c;
              }
            }
            pUVar5 = Z_Construct_UClass_UInterchangeSceneImportAsset_NoRegister();
            if (pUVar5 != (UClass *)0x0) {
              iVar1 = (int)pUVar5->_padding_;
              if ((*(int *)(lVar4 + 0x38) < iVar1) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
                  &pUVar5->_padding_)) {
                bVar2 = false;
              }
              else {
                bVar2 = true;
              }
              if (bVar2) goto LAB_14e7ad33c;
            }
            local_res8 = *(FName *)(lVar4 + 0x18);
            ::FName::ToString(&local_res8,&local_48);
            if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_68.Data.AllocatorInstance.Data);
            }
            local_68.Data.AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
            local_68.Data.ArrayMax = local_48.Data.ArrayMax;
            local_68.Data.ArrayNum = local_48.Data.ArrayNum;
          }
          else {
            iVar1 = (int)pUVar5->_padding_;
            if ((*(int *)(lVar4 + 0x38) < iVar1) ||
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
                &pUVar5->_padding_)) {
              bVar2 = false;
            }
            else {
              bVar2 = true;
            }
            if (!bVar2) goto LAB_14e7ad18b;
LAB_14e7ad1b9:
            ::FString::operator=(&local_68,L"Grooms");
          }
        }
        else {
          iVar1 = (int)pUVar5->_padding_;
          if ((*(int *)(lVar4 + 0x38) < iVar1) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
              &pUVar5->_padding_)) {
            bVar2 = false;
          }
          else {
            bVar2 = true;
          }
          if (!bVar2) goto LAB_14e7ad038;
LAB_14e7ad0c2:
          ::FString::operator=(&local_68,L"SkeletalMeshes");
        }
      }
      else {
        iVar1 = (int)pUVar5->_padding_;
        if ((*(int *)(lVar4 + 0x38) < iVar1) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar5->_padding_)) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if (!bVar2) goto LAB_14e7acfc3;
LAB_14e7acff1:
        ::FString::operator=(&local_68,L"Textures");
      }
    }
    else {
      iVar1 = (int)pUVar5->_padding_;
      if ((*(int *)(lVar4 + 0x38) < iVar1) ||
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar5->_padding_)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (!bVar2) goto LAB_14e7acf0f;
LAB_14e7acf3d:
      ::FString::operator=(&local_68,L"Materials");
    }
  }
LAB_14e7ad33c:
  local_38.DataPtr = (wchar_t *)local_58.Data.AllocatorInstance.Data;
  local_38.Size = local_58.Data.ArrayNum + -1;
  if (local_58.Data.ArrayNum == 0) {
    local_38.Size = 0;
  }
  local_28 = local_68.Data.AllocatorInstance.Data;
  local_20 = local_68.Data.ArrayNum + -1;
  if (local_68.Data.ArrayNum == 0) {
    local_20 = 0;
  }
  FPaths::CombineInternal(&local_48,&local_38,2);
  bVar2 = UInterchangeFactoryBaseNode::SetCustomSubPath(param_1,&local_48);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_14e7ad3a8:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return bVar2;
}

// FindExistingMaterial @ 14e7adf10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

UMaterialInterface * __cdecl
UE::Interchange::InterchangeGenericMaterialPipeline::Private::FindExistingMaterial
          (FString *param_1,FString *param_2,bool param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  FName *pFVar7;
  FModuleManager *this;
  IModuleInterface *pIVar8;
  longlong *plVar9;
  UClass *pUVar10;
  UMaterialInterface *pUVar11;
  FTopLevelAssetPath *pFVar12;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> *pTVar13;
  FName FVar14;
  wchar_t *pwVar15;
  FName FVar16;
  FName FVar17;
  undefined1 auStack_308 [32];
  FTopLevelAssetPath *local_2e8;
  FTopLevelAssetPath *local_2e0;
  longlong local_2d8;
  longlong local_2d0;
  undefined8 local_2c8;
  undefined1 local_2b8 [8];
  TArray<FString,TSizedDefaultAllocator<32>_> local_2b0;
  ForAnyElementType local_2a0;
  undefined8 local_298;
  FTopLevelAssetPath local_290;
  undefined8 local_280;
  FTopLevelAssetPath local_278;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_268;
  FName local_218;
  FName local_210;
  FName local_208;
  TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> local_200;
  FARFilter local_1a8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_308;
  local_290.PackageName.ComparisonIndex.Value = 0;
  local_290.PackageName.Number = 0;
  pFVar7 = ::FName::FName(&local_218,"AssetRegistry");
  FVar16 = *pFVar7;
  this = FModuleManager::Get();
  pIVar8 = FModuleManager::LoadModuleChecked(this,FVar16);
  plVar9 = (longlong *)(**(code **)((longlong)*pIVar8 + 0x40))(pIVar8);
  local_2b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2b0.ArrayNum = 0;
  local_2b0.ArrayMax = 0;
  if ((bRootPathScanned == false) &&
     (((param_1->Data).ArrayNum < 2 ||
      (iVar5 = FGenericPlatformStricmp::Stricmp
                         ((wchar_t *)(param_1->Data).AllocatorInstance.Data,L"/"), iVar5 == 0)))) {
    FPackageName::QueryRootContentPaths(&local_2b0,false,false,false);
    bRootPathScanned = true;
  }
  else {
    bVar4 = ::FString::StartsWith(param_1,L"/Temp",5,IgnoreCase);
    if (!bVar4) {
      if (local_2b0.AllocatorInstance.Data <= param_1) {
        if (param_1 < local_2b0.AllocatorInstance.Data + (longlong)local_2b0.ArrayMax * 0x10) {
          local_2d0 = (longlong)local_2b0.ArrayNum;
          local_2c8 = 0x10;
          local_2e0 = (FTopLevelAssetPath *)local_2b0.AllocatorInstance.Data;
          local_2e8 = (FTopLevelAssetPath *)param_1;
          local_2d8 = (longlong)local_2b0.ArrayMax;
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar4) {
            pcVar1 = (code *)swi(3);
            pUVar11 = (UMaterialInterface *)(*pcVar1)();
            return pUVar11;
          }
        }
      }
      iVar5 = local_2b0.ArrayNum;
      if (local_2b0.ArrayNum == local_2b0.ArrayMax) {
        iVar5 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x810,&local_2b0.AllocatorInstance,&local_2b0.ArrayMax);
      }
      local_2b0.ArrayNum = iVar5 + 1;
      ::FString::FString((FString *)(local_2b0.AllocatorInstance.Data + (longlong)iVar5 * 0x10),
                         param_1);
    }
  }
  if (local_2b0.ArrayNum != 0) {
    (**(code **)(*plVar9 + 0x218))(plVar9,&local_2b0,0,0);
  }
  FARFilter::FARFilter(&local_1a8);
  local_1a8.bRecursiveClasses = true;
  local_1a8.bRecursivePaths = param_3;
  pUVar10 = Z_Construct_UClass_UMaterialInterface_NoRegister();
  UStruct::GetStructPathName((UStruct *)pUVar10,&local_278);
  if ((local_1a8.ClassPaths.AllocatorInstance.Data <= &local_278) &&
     (&local_278 <
      (FTopLevelAssetPath *)
      (local_1a8.ClassPaths.AllocatorInstance.Data + (longlong)local_1a8.ClassPaths.ArrayMax * 0x10)
     )) {
    local_2d0 = (longlong)local_1a8.ClassPaths.ArrayNum;
    local_2c8 = 0x10;
    local_2e8 = &local_278;
    local_2e0 = (FTopLevelAssetPath *)local_1a8.ClassPaths.AllocatorInstance.Data;
    local_2d8 = (longlong)local_1a8.ClassPaths.ArrayMax;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pUVar11 = (UMaterialInterface *)(*pcVar1)();
      return pUVar11;
    }
  }
  if (local_1a8.ClassPaths.ArrayNum == local_1a8.ClassPaths.ArrayMax) {
    local_1a8.ClassPaths.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x410,&local_1a8.ClassPaths.AllocatorInstance,&local_1a8.ClassPaths.ArrayMax);
  }
  ((FTopLevelAssetPath *)
  ((longlong)local_1a8.ClassPaths.AllocatorInstance.Data +
  (longlong)local_1a8.ClassPaths.ArrayNum * 0x10))->PackageName = local_278.PackageName;
  ((FTopLevelAssetPath *)
  ((longlong)local_1a8.ClassPaths.AllocatorInstance.Data +
  (longlong)local_1a8.ClassPaths.ArrayNum * 0x10))->AssetName = local_278.AssetName;
  if ((param_1->Data).ArrayNum == 0) {
    pwVar15 = L"";
  }
  else {
    pwVar15 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  local_1a8.ClassPaths.ArrayNum = local_1a8.ClassPaths.ArrayNum + 1;
  pFVar12 = (FTopLevelAssetPath *)::FName::FName(&local_210,pwVar15);
  if ((local_1a8.PackagePaths.AllocatorInstance.Data <= pFVar12) &&
     (pFVar12 < (FTopLevelAssetPath *)
                (local_1a8.PackagePaths.AllocatorInstance.Data +
                (longlong)local_1a8.PackagePaths.ArrayMax * 8))) {
    local_2d0 = (longlong)local_1a8.PackagePaths.ArrayNum;
    local_2c8 = 8;
    local_2e0 = (FTopLevelAssetPath *)local_1a8.PackagePaths.AllocatorInstance.Data;
    local_2e8 = pFVar12;
    local_2d8 = (longlong)local_1a8.PackagePaths.ArrayMax;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pUVar11 = (UMaterialInterface *)(*pcVar1)();
      return pUVar11;
    }
  }
  if (local_1a8.PackagePaths.ArrayNum == local_1a8.PackagePaths.ArrayMax) {
    local_1a8.PackagePaths.ArrayNum =
         Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&local_1a8.PackagePaths.AllocatorInstance,&local_1a8.PackagePaths.ArrayMax
                   );
  }
  (&((FTopLevelAssetPath *)local_1a8.PackagePaths.AllocatorInstance.Data)->PackageName)
  [local_1a8.PackagePaths.ArrayNum] = pFVar12->PackageName;
  local_290.AssetName.ComparisonIndex.Value = 0;
  local_290.AssetName.Number = 0;
  local_280 = 0;
  local_1a8.PackagePaths.ArrayNum = local_1a8.PackagePaths.ArrayNum + 1;
  (**(code **)(*plVar9 + 0x50))(plVar9,&local_1a8,&local_290.AssetName,1);
  uVar3 = _UNK_150631d98;
  uVar2 = ___xmm_00000000ffffffff0000008000000000;
  iVar5 = (int)local_280;
  local_2a0.Data = (FScriptContainerElement *)0x0;
  FVar17 = (FName)((longlong)local_290.AssetName + (longlong)(int)local_280 * 0x68);
  local_298 = 0;
  FVar16 = local_290.AssetName;
  do {
    while( true ) {
      if ((int)local_280 != iVar5) {
        local_2b8[0] = 0;
        `TCheckedPointerIterator<FAssetData,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_2b8);
      }
      if (FVar16 == FVar17) {
        FVar16 = local_290.PackageName;
        if (0 < (int)local_298) {
          FVar16 = *(FName *)local_2a0.Data;
        }
        if ((FTopLevelAssetPath *)local_2a0.Data != (FTopLevelAssetPath *)0x0) {
          FMemory::Free(local_2a0.Data);
        }
        DestructItems<FAssetData,int>((FAssetData *)local_290.AssetName,(int)local_280);
        if (local_290.AssetName != (FName)0x0) {
          FMemory::Free((void *)local_290.AssetName);
        }
        FARFilter::~FARFilter(&local_1a8);
        DestructItems<FString,int>((FString *)local_2b0.AllocatorInstance.Data,local_2b0.ArrayNum);
        if ((FTopLevelAssetPath *)local_2b0.AllocatorInstance.Data != (FTopLevelAssetPath *)0x0) {
          FMemory::Free(local_2b0.AllocatorInstance.Data);
        }
        return (UMaterialInterface *)FVar16;
      }
      if ((param_2->Data).ArrayNum == 0) {
        pwVar15 = L"";
      }
      else {
        pwVar15 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
      }
      pFVar7 = ::FName::FName(&local_208,pwVar15);
      if (*(FName *)((longlong)FVar16 + 0x10) == *pFVar7) break;
LAB_14e7ae424:
      FVar16 = (FName)((longlong)FVar16 + 0x68);
    }
    local_268.Hash.InlineData[0] = '\0';
    local_268.Hash.InlineData[1] = '\0';
    local_268.Hash.InlineData[2] = '\0';
    local_268.Hash.InlineData[3] = '\0';
    local_268.Hash._padding_ = 0;
    local_268._72_8_ = 0;
    local_268.Elements._0_8_ = 0;
    local_268.Elements._16_8_ = 0;
    local_268.Elements._24_8_ = 0;
    local_268.Elements._8_8_ = 0;
    local_268.Elements._32_8_ = 0;
    local_268.Elements._40_8_ = uVar2;
    local_268.Elements._48_8_ = uVar3;
    local_268.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    pTVar13 = TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>::
              TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator>(&local_200,&local_268);
    FVar14 = (FName)FAssetData::FastGetAsset((FAssetData *)FVar16,true,pTVar13);
    local_268._72_8_ = local_268._72_8_ & 0xffffffff00000000;
    if (local_268.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_268.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<FName>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_268.Elements);
    if (FVar14 == (FName)0x0) {
LAB_14e7ae41f:
      local_290.PackageName.ComparisonIndex.Value = 0;
      local_290.PackageName.Number = 0;
      goto LAB_14e7ae424;
    }
    pUVar10 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar6 = (int)pUVar10->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar14 + 0x10) + 0x38) < iVar6) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar14 + 0x10) + 0x30) + (longlong)iVar6 * 8) !=
        &pUVar10->_padding_)) goto LAB_14e7ae41f;
    local_290.PackageName = FVar14;
    if (local_2a0.Data <= &local_290) {
      if (&local_290 < (FTopLevelAssetPath *)(local_2a0.Data + (longlong)local_298._4_4_ * 8)) {
        local_2d0 = (longlong)(int)local_298;
        local_2c8 = 8;
        local_2e8 = &local_290;
        local_2e0 = (FTopLevelAssetPath *)local_2a0.Data;
        local_2d8 = (longlong)local_298._4_4_;
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar4) {
          pcVar1 = (code *)swi(3);
          pUVar11 = (UMaterialInterface *)(*pcVar1)();
          return pUVar11;
        }
      }
    }
    iVar6 = (int)local_298;
    if ((int)local_298 == local_298._4_4_) {
      iVar6 = Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&local_2a0,(int *)((longlong)&local_298 + 4));
    }
    FVar16 = (FName)((longlong)FVar16 + 0x68);
    local_298 = CONCAT44(local_298._4_4_,iVar6 + 1);
    *(FName *)(local_2a0.Data + (longlong)iVar6 * 8) = local_290.PackageName;
  } while( true );
}

// FindExistingMaterialFromSearchLocation @ 14e7ae4d0

UMaterialInterface * __cdecl
UE::Interchange::InterchangeGenericMaterialPipeline::Private::FindExistingMaterialFromSearchLocation
          (FString *param_1,FString *param_2,EInterchangeMaterialSearchLocation param_3)

{
  FScriptContainerElement *_Src;
  int iVar1;
  int iVar2;
  size_t sVar3;
  UClass *pUVar4;
  UMaterialInterface *this;
  UPackage *this_00;
  UMaterialInterface *pUVar5;
  FString *pFVar6;
  longlong lVar7;
  bool bVar8;
  FString local_58;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  
  if (param_3 == DoNotSearch) {
    return (UMaterialInterface *)0x0;
  }
  iVar2 = 0;
  if (param_3 == Local) {
    if ((param_1->Data).ArrayNum == 0) {
      local_28.DataPtr = L"";
LAB_14e7ae538:
      sVar3 = wcslen(local_28.DataPtr);
      iVar2 = (int)sVar3;
    }
    else {
      local_28.DataPtr = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0)
      goto LAB_14e7ae538;
    }
    local_28.Size = iVar2;
    pUVar4 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    this = (UMaterialInterface *)StaticFindObject(pUVar4,(UObject *)0x0,&local_28,None);
    pUVar5 = this;
    if (this != (UMaterialInterface *)0x0) {
      this_00 = UObjectBaseUtility::GetPackage((UObjectBaseUtility *)this);
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_48,(UObject *)0x0);
      iVar2 = (param_2->Data).ArrayNum;
      iVar1 = local_48.Data.ArrayNum;
      if (iVar1 == iVar2) {
        if (iVar1 < 2) {
          bVar8 = true;
        }
        else {
          iVar2 = wcscmp((wchar_t *)local_48.Data.AllocatorInstance.Data,
                         (wchar_t *)(param_2->Data).AllocatorInstance.Data);
          bVar8 = iVar2 == 0;
        }
      }
      else {
        bVar8 = iVar1 + iVar2 == 1;
      }
      pUVar5 = (UMaterialInterface *)0x0;
      if (bVar8) {
        pUVar5 = this;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    if (pUVar5 != (UMaterialInterface *)0x0) {
      return pUVar5;
    }
  }
  local_58.Data.ArrayNum = (param_2->Data).ArrayNum;
  lVar7 = (longlong)local_58.Data.ArrayNum;
  _Src = (param_2->Data).AllocatorInstance.Data;
  local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  if (local_58.Data.ArrayNum == 0) {
    local_58.Data.ArrayMax = 0;
  }
  else {
    Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_58.Data.ArrayNum,0,(ForAnyElementType *)&local_58,local_58.Data.ArrayNum,
               &local_58.Data.ArrayMax);
    memcpy(local_58.Data.AllocatorInstance.Data,_Src,lVar7 * 2);
  }
  pUVar5 = FindExistingMaterial(&local_58,param_1,false);
  if (pUVar5 != (UMaterialInterface *)0x0) goto LAB_14e7ae798;
  if (param_3 == Local) {
LAB_14e7ae6df:
    if (param_3 != AllAssets) goto LAB_14e7ae798;
  }
  else {
    pUVar5 = FindExistingMaterial(&local_58,param_1,true);
    if (pUVar5 != (UMaterialInterface *)0x0) goto LAB_14e7ae798;
    if (2 < (byte)(param_3 - UnderParent)) goto LAB_14e7ae6df;
    pFVar6 = FPaths::GetPath((FString *)&local_28,&local_58);
    if (&local_58 != pFVar6) {
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      local_58.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
      (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_58.Data.ArrayNum = (pFVar6->Data).ArrayNum;
      local_58.Data.ArrayMax = (pFVar6->Data).ArrayMax;
      (pFVar6->Data).ArrayNum = 0;
      (pFVar6->Data).ArrayMax = 0;
    }
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
    if ((1 < local_58.Data.ArrayNum) &&
       (pUVar5 = FindExistingMaterial(&local_58,param_1,true), pUVar5 != (UMaterialInterface *)0x0))
    goto LAB_14e7ae798;
    if (param_3 != UnderRoot) goto LAB_14e7ae6df;
  }
  local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Data.ArrayNum = 0;
  local_48.Data.ArrayMax = 0;
  local_28.DataPtr = (wchar_t *)0x0;
  local_28.Size = 0;
  local_28._12_4_ = 0;
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  FPackageName::SplitLongPackageName(&local_58,&local_48,(FString *)&local_28,&local_38,false);
  if (1 < local_58.Data.ArrayNum) {
    pUVar5 = FindExistingMaterial(&local_48,param_1,true);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.DataPtr);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if ((pUVar5 == (UMaterialInterface *)0x0) && (param_3 == AllAssets)) {
    ::FString::FString((FString *)&local_28,L"/");
    pUVar5 = FindExistingMaterial((FString *)&local_28,param_1,true);
    if ((FScriptContainerElement *)local_28.DataPtr != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.DataPtr);
    }
  }
LAB_14e7ae798:
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  return pUVar5;
}

// FindFactoryParentSceneNodeUid @ 14e7ae7e0

FString * __cdecl
UE::Interchange::Private::FindFactoryParentSceneNodeUid
          (FString *__return_storage_ptr__,UInterchangeBaseNodeContainer *param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2,UInterchangeSceneNode *param_3)

{
  int iVar1;
  UInterchangeSceneNode *this;
  UClass *pUVar2;
  FString *pFVar3;
  UInterchangeBaseNode *pUVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  bool bVar8;
  FString local_38;
  FString local_28;
  
  UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)param_3,&local_38);
  this = (UInterchangeSceneNode *)UInterchangeBaseNodeContainer::GetNode(param_1,&local_38);
  if (this != (UInterchangeSceneNode *)0x0) {
    pUVar2 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar2->_padding_)) {
      pFVar6 = (param_2->AllocatorInstance).Data;
      pFVar7 = pFVar6 + (longlong)param_2->ArrayNum * 0x10;
      iVar5 = local_38.Data.ArrayNum;
      iVar1 = local_38.Data.ArrayNum;
      do {
        local_38.Data.ArrayNum = iVar5;
        if (pFVar6 == pFVar7) {
LAB_14e7ae9ae:
          (__return_storage_ptr__->Data).AllocatorInstance.Data =
               local_38.Data.AllocatorInstance.Data;
          (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
          (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
          return __return_storage_ptr__;
        }
        iVar5 = *(int *)(pFVar6 + 8);
        if (iVar5 == local_38.Data.ArrayNum) {
          local_38.Data.ArrayNum = iVar1;
          if (1 < iVar5) {
            iVar1 = FGenericPlatformStricmp::Stricmp
                              (*(wchar_t **)pFVar6,(wchar_t *)local_38.Data.AllocatorInstance.Data);
            bVar8 = iVar1 == 0;
            iVar5 = local_38.Data.ArrayNum;
            goto LAB_14e7ae896;
          }
LAB_14e7ae8ab:
          pFVar3 = FSceneNodeStaticData::GetTransformSpecializeTypeString();
          bVar8 = UInterchangeSceneNode::IsSpecializedTypeContains(this,pFVar3);
          if (!bVar8) {
            pFVar3 = FSceneNodeStaticData::GetJointSpecializeTypeString();
            bVar8 = UInterchangeSceneNode::IsSpecializedTypeContains(this,pFVar3);
            if (!bVar8) {
              (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0
              ;
              (__return_storage_ptr__->Data).AllocatorInstance.Data =
                   local_38.Data.AllocatorInstance.Data;
              (__return_storage_ptr__->Data).ArrayNum = local_38.Data.ArrayNum;
              (__return_storage_ptr__->Data).ArrayMax = local_38.Data.ArrayMax;
              return __return_storage_ptr__;
            }
            UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)this,&local_28);
            pUVar4 = UInterchangeBaseNodeContainer::GetNode(param_1,&local_28);
            if (pUVar4 != (UInterchangeBaseNode *)0x0) {
              pUVar2 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
              iVar1 = (int)pUVar2->_padding_;
              if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
                 ((longlong *)
                  *(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                  &pUVar2->_padding_)) {
                FindFactoryParentSceneNodeUid(__return_storage_ptr__,param_1,param_2,this);
                if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_28.Data.AllocatorInstance.Data);
                }
                goto LAB_14e7ae959;
              }
            }
            if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_28.Data.AllocatorInstance.Data);
            }
            break;
          }
          (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          goto LAB_14e7ae9ae;
        }
        bVar8 = iVar5 + local_38.Data.ArrayNum == 1;
        iVar5 = local_38.Data.ArrayNum;
        local_38.Data.ArrayNum = iVar1;
LAB_14e7ae896:
        if (bVar8) goto LAB_14e7ae8ab;
        pFVar6 = pFVar6 + 0x10;
        iVar1 = local_38.Data.ArrayNum;
      } while( true );
    }
  }
  UInterchangeBaseNode::InvalidNodeUid(__return_storage_ptr__);
LAB_14e7ae959:
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// FindNamedLodGroup @ 14e7ae9d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
UE::Private::InterchangeMeshPipeline::FindNamedLodGroup
          (UInterchangeBaseNodeContainer *param_1,
          TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
          *param_2)

{
  int *piVar1;
  ulonglong uVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  longlong *plVar4;
  bool bVar5;
  int iVar6;
  UInterchangeBaseNode *pUVar7;
  UClass *pUVar8;
  FString *pFVar9;
  EAttributeStorageResult EVar10;
  byte bVar11;
  int iVar12;
  uint uVar13;
  FScriptContainerElement *_Dst;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStackY_208 [32];
  undefined1 local_1c8;
  bool local_1c7 [7];
  FString local_1c0;
  UInterchangeBaseNodeContainer *local_1b0;
  FAttributeKey local_1a8;
  longlong *local_198;
  uint uStack_190;
  uint uStack_18c;
  TBitArray<FDefaultBitArrayAllocator> *local_188;
  undefined4 uStack_180;
  uint uStack_17c;
  uint local_178;
  uint uStack_174;
  int iStack_170;
  undefined4 uStack_16c;
  int local_168;
  int local_164;
  TPairInitializer<FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&> local_160;
  longlong *local_150;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_148;
  undefined8 uStack_128;
  code *local_120;
  UInterchangeBaseNodeContainer ***local_118;
  FString *local_110;
  FString *local_108;
  FString local_100;
  UInterchangeBaseNodeContainer **local_f0;
  undefined1 *local_e8;
  FString *local_e0;
  FString local_d8;
  TAttributeHandle<bool,void> local_c8;
  FString local_b0;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_78 = (uint *)0x0;
  uVar14 = 0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = 0xffffffff;
  local_64 = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_1b0 = param_1;
  local_160.Value = (TArray<FString,TSizedDefaultAllocator<32>_> *)param_2;
  ::FString::FString(&local_100,L"LOD");
  local_f0 = &local_1b0;
  local_e8 = local_98;
  local_e0 = &local_100;
  local_118 = &local_f0;
  local_120 = Core::Private::Function::
              TFunctionRefCaller<`UE::Private::InterchangeMeshPipeline::FindNamedLodGroup'::__l2::<lambda_1>,void,FString_const_&,UInterchangeBaseNode_*>
              ::Call;
  UInterchangeBaseNodeContainer::IterateNodes
            (local_1b0,
             (TFunctionRef<void___cdecl(FString_const_&,UInterchangeBaseNode_*)> *)&local_120);
  uVar16 = local_70;
  uStack_18c = 1;
  local_178 = 0;
  uStack_17c = local_178;
  if (local_70 != 0) {
    puVar15 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar15 = local_78;
    }
    uVar13 = *puVar15;
    uVar14 = 0;
    local_178 = 0;
    while (uVar13 == 0) {
      uVar14 = uVar14 + 1;
      local_178 = local_178 + 0x20;
      uStack_17c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar14)
      goto LAB_14e7aeb30;
      uVar13 = puVar15[(int)uVar14];
    }
    uStack_18c = ~(uVar13 - 1) & uVar13;
    uVar2 = (ulonglong)uStack_18c * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_168 = (int)lVar17;
    uStack_17c = local_168 + -1 + local_178;
    if ((int)local_70 < (int)uStack_17c) {
      uStack_17c = local_70;
    }
  }
LAB_14e7aeb30:
  local_198 = (longlong *)local_98;
  local_188 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  uVar13 = local_70 & 0xffffffe0;
  iStack_170 = local_98._8_4_ - local_64;
  uStack_180 = 0xffffffff;
  TStack_148.CurrentBitIndex = uStack_17c;
  TStack_148.UnvisitedBitMask = 0xffffffff;
  TStack_148._padding_ = CONCAT44(uStack_18c,uVar14);
  iVar12 = (int)local_70 >> 5;
  TStack_148._28_4_ = uStack_17c;
  TStack_148.BaseBitIndex = local_178;
  uStack_128 = CONCAT44(uStack_16c,iStack_170);
  bVar11 = (byte)local_70;
  uStack_190 = uVar14;
  uStack_174 = uStack_17c;
  local_150 = local_198;
  TStack_148.Array = local_188;
  if (((int)local_70 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar16 != local_70) {
    puVar15 = (uint *)(local_98 + 0x10);
    if (local_78 != (uint *)0x0) {
      puVar15 = local_78;
    }
    uVar14 = -1 << (bVar11 & 0x1f) & puVar15[iVar12];
    while (uVar14 == 0) {
      iVar12 = iVar12 + 1;
      uVar13 = uVar13 + 0x20;
      uVar16 = local_70;
      if ((int)(((int)(local_70 - 1) >> 0x1f & 0x1fU) + (local_70 - 1)) >> 5 < iVar12)
      goto LAB_14e7aec50;
      uVar14 = puVar15[iVar12];
    }
    uVar2 = (ulonglong)(~(uVar14 - 1) & uVar14) * 2 + 1;
    lVar17 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar17 == 0; lVar17 = lVar17 + -1) {
      }
    }
    local_164 = (int)lVar17;
    uVar16 = local_164 + -1 + uVar13;
    if ((int)local_70 < (int)uVar16) {
      uVar16 = local_70;
    }
  }
LAB_14e7aec50:
  do {
    plVar4 = local_150;
    if ((int)local_150[1] - *(int *)((longlong)local_150 + 0x34) != (int)uStack_128) {
      local_1c8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_1c8);
    }
    if (((TStack_148.CurrentBitIndex == uVar16) &&
        (TStack_148.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar4 == (longlong *)local_98)) {
      if (local_100.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_100.Data.AllocatorInstance.Data);
      }
      local_50 = 0;
      if (local_58 != (void *)0x0) {
        FMemory::Free(local_58);
      }
      TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_98);
      return;
    }
    lVar17 = *plVar4;
    pFVar9 = (FString *)(lVar17 + (longlong)TStack_148.CurrentBitIndex * 0x28);
    iVar12 = *(int *)(lVar17 + 0x18 + (longlong)TStack_148.CurrentBitIndex * 0x28) + -1;
    if (-1 < iVar12) {
      lVar17 = (longlong)iVar12 << 4;
      do {
        if ((pFVar9[1].Data.ArrayNum <= iVar12) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(int *)(pFVar9[1].Data.AllocatorInstance.Data + lVar17 + 8) < 2) {
          if ((pFVar9[1].Data.ArrayNum <= iVar12) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          _Dst = pFVar9[1].Data.AllocatorInstance.Data + lVar17;
          if (*(void **)_Dst != (void *)0x0) {
            FMemory::Free(*(void **)_Dst);
          }
          iVar6 = (pFVar9[1].Data.ArrayNum - iVar12) + -1;
          if (iVar6 != 0) {
            memmove(_Dst,_Dst + 0x10,(longlong)iVar6 << 4);
          }
          piVar1 = &pFVar9[1].Data.ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        lVar17 = lVar17 + -0x10;
        iVar12 = iVar12 + -1;
        param_2 = (TMap<FString,TArray<FString,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>_>
                   *)local_160.Value;
      } while (-1 < iVar12);
    }
    iVar12 = pFVar9[1].Data.ArrayNum;
    piVar1 = &pFVar9[1].Data.ArrayMax;
    if (*piVar1 != iVar12) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,iVar12,(ForAnyElementType *)(pFVar9 + 1),iVar12,piVar1);
    }
    if (1 < pFVar9[1].Data.ArrayNum) {
      local_108 = pFVar9 + 1;
      local_110 = pFVar9;
      TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
      ::
      Emplace<TPairInitializer<FString_const_&,TArray<FString,TSizedDefaultAllocator<32>_>_const_&>_>
                ((TSet<TTuple<FString,TArray<FString,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<FString,TArray<FString,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  *)param_2,&local_160,(bool *)&local_110);
      pUVar7 = UInterchangeBaseNodeContainer::GetNode(local_1b0,pFVar9);
      if (pUVar7 == (UInterchangeBaseNode *)0x0) {
LAB_14e7aee1a:
        pUVar7 = (UInterchangeBaseNode *)0x0;
      }
      else {
        pUVar8 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
        iVar12 = (int)pUVar8->_padding_;
        if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar12) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar12 * 8) !=
            &pUVar8->_padding_)) goto LAB_14e7aee1a;
      }
      if (pUVar7 != (UInterchangeBaseNode *)0x0) {
        local_1c7[0] = true;
        pFVar9 = ::FString::FString(&local_d8,L"LODGroup_WithoutLODSpecialization");
        local_1c0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_1c0.Data.ArrayNum = 0;
        local_1c0.Data.ArrayMax = 0;
        if (&local_1c0 != pFVar9) {
          local_1c0.Data.AllocatorInstance.Data = (pFVar9->Data).AllocatorInstance.Data;
          (pFVar9->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1c0.Data.ArrayNum = (pFVar9->Data).ArrayNum;
          local_1c0.Data.ArrayMax = (pFVar9->Data).ArrayMax;
          (pFVar9->Data).ArrayNum = 0;
          (pFVar9->Data).ArrayMax = 0;
        }
        if (((pUVar7->Attributes).Object == (FAttributeStorage *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar5)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        EVar10 = Interchange::FAttributeStorage::RegisterAttribute<bool,void>
                           ((pUVar7->Attributes).Object,(FAttributeKey *)&local_1c0,local_1c7,None);
        _Src.Data = local_1c0.Data.AllocatorInstance.Data;
        if ((EVar10 & Operation_Success) == None) {
          lVar17 = (longlong)local_1c0.Data.ArrayNum;
          local_1a8.Key.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1a8.Key.Data.ArrayNum = local_1c0.Data.ArrayNum;
          if (local_1c0.Data.ArrayNum == 0) {
            local_1a8.Key.Data.ArrayMax = 0;
          }
          else {
            Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_1c0.Data.ArrayNum,0,(ForAnyElementType *)&local_1a8,
                       local_1c0.Data.ArrayNum,&local_1a8.Key.Data.ArrayMax);
            memcpy(local_1a8.Key.Data.AllocatorInstance.Data,_Src.Data,lVar17 * 2);
          }
          pFVar9 = ::FString::FString(&local_b0,L"RegisterAttribute");
          Interchange::LogAttributeStorageErrors(EVar10,pFVar9,&local_1a8);
          Interchange::FAttributeStorage::TAttributeHandle<bool,void>::TAttributeHandle<bool,void>
                    (&local_c8);
        }
        else {
          if (((pUVar7->Attributes).Object == (FAttributeStorage *)0x0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          Interchange::FAttributeStorage::GetAttributeHandle<bool,void>
                    ((pUVar7->Attributes).Object,&local_c8,(FAttributeKey *)&local_1c0);
        }
        if (local_c8.Key.Key.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Key.Key.Data.AllocatorInstance.Data);
        }
        if (local_1c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c0.Data.AllocatorInstance.Data);
        }
        if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_d8.Data.AllocatorInstance.Data);
        }
      }
    }
    TStack_148.UnvisitedBitMask = TStack_148.UnvisitedBitMask & ~TStack_148._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_148);
  } while( true );
}

// GetDefaultFactoryClassFromTextureNodeClass @ 14e7b7160

UClass * __cdecl
UE::Interchange::Private::GetDefaultFactoryClassFromTextureNodeClass(UClass *param_1)

{
  UClass *pUVar1;
  
  pUVar1 = Z_Construct_UClass_UInterchangeTexture2DNode_NoRegister();
  if (pUVar1 != param_1) {
    pUVar1 = Z_Construct_UClass_UInterchangeTextureCubeNode_NoRegister();
    if (pUVar1 == param_1) {
      pUVar1 = Z_Construct_UClass_UInterchangeTextureCubeFactoryNode_NoRegister();
      return pUVar1;
    }
    pUVar1 = Z_Construct_UClass_UInterchangeTextureCubeArrayNode_NoRegister();
    if (pUVar1 == param_1) {
      pUVar1 = Z_Construct_UClass_UInterchangeTextureCubeArrayFactoryNode_NoRegister();
      return pUVar1;
    }
    pUVar1 = Z_Construct_UClass_UInterchangeTexture2DArrayNode_NoRegister();
    if (pUVar1 == param_1) {
      pUVar1 = Z_Construct_UClass_UInterchangeTexture2DArrayFactoryNode_NoRegister();
      return pUVar1;
    }
    pUVar1 = Z_Construct_UClass_UInterchangeTextureLightProfileNode_NoRegister();
    if (pUVar1 == param_1) {
      pUVar1 = Z_Construct_UClass_UInterchangeTextureLightProfileFactoryNode_NoRegister();
      return pUVar1;
    }
    pUVar1 = Z_Construct_UClass_UInterchangeVolumeTextureNode_NoRegister();
    if (pUVar1 == param_1) {
      pUVar1 = Z_Construct_UClass_UInterchangeVolumeTextureFactoryNode_NoRegister();
      return pUVar1;
    }
    pUVar1 = Z_Construct_UClass_UInterchangeTextureBlurNode_NoRegister();
    if (pUVar1 != param_1) {
      return (UClass *)0x0;
    }
  }
  pUVar1 = Z_Construct_UClass_UInterchangeTexture2DFactoryNode_NoRegister();
  return pUVar1;
}

// GetDefaultValueStringForShaderType @ 14e7b7200

FString * __cdecl
UE::Interchange::Materials::HashUtils::GetDefaultValueStringForShaderType
          (FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  
  pwVar4 = L"";
  if ((param_1->Data).ArrayNum == 0) {
    pwVar3 = L"";
  }
  else {
    pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
  }
  bVar2 = ::FName::Equals(Standard::Nodes::ScalarParameter::Name,pwVar3);
  if (bVar2) {
    ::FName::ToString(&Standard::Nodes::ScalarParameter::Attributes::DefaultValue,
                      __return_storage_ptr__);
  }
  else {
    if ((param_1->Data).ArrayNum == 0) {
      pwVar3 = L"";
    }
    else {
      pwVar3 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    }
    bVar2 = ::FName::Equals(Standard::Nodes::VectorParameter::Name,pwVar3);
    if (bVar2) {
      ::FName::ToString(&Standard::Nodes::VectorParameter::Attributes::DefaultValue,
                        __return_storage_ptr__);
    }
    else {
      if ((param_1->Data).ArrayNum != 0) {
        pwVar4 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      bVar2 = ::FName::Equals(Standard::Nodes::StaticBoolParameter::Name,pwVar4);
      if (bVar2) {
        ::FName::ToString(&Standard::Nodes::StaticBoolParameter::Attributes::DefaultValue,
                          __return_storage_ptr__);
      }
      else {
        (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = 0;
        (__return_storage_ptr__->Data).ArrayMax = 0;
      }
    }
  }
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return __return_storage_ptr__;
}

// GetNodeName @ 14e7b8330

FString * __cdecl
UE::Interchange::Private::GetNodeName
          (FString *__return_storage_ptr__,TObjectPtr<UInterchangePipelineMeshesUtilities> param_1,
          UInterchangeBaseNodeContainer *param_2,FString *param_3)

{
  code *pcVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  int iVar4;
  UInterchangeSceneNode *this;
  UClass *pUVar5;
  FString *pFVar6;
  FInterchangeMeshGeometry *pFVar7;
  UInterchangeBaseNode *this_00;
  UObject *local_48;
  TArray<FString,TSizedDefaultAllocator<32>_> local_40;
  FString local_30;
  FString local_20;
  
  this = (UInterchangeSceneNode *)UInterchangeBaseNodeContainer::GetNode(param_2,param_3);
  if (this == (UInterchangeSceneNode *)0x0) {
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (__return_storage_ptr__->Data).ArrayNum = 0;
    (__return_storage_ptr__->Data).ArrayMax = 0;
    return __return_storage_ptr__;
  }
  UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)this,&local_30);
  pUVar5 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
  iVar4 = (int)pUVar5->_padding_;
  if ((*(int *)(this->_padding_ + 0x38) < iVar4) ||
     ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
      &pUVar5->_padding_)) {
    pUVar5 = Z_Construct_UClass_UInterchangeMeshNode_NoRegister();
    iVar4 = (int)pUVar5->_padding_;
    if ((iVar4 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar4 * 8) ==
        &pUVar5->_padding_)) {
      pFVar7 = UInterchangePipelineMeshesUtilities::GetMeshGeometryByUid
                         (*(UInterchangePipelineMeshesUtilities **)param_1.field0_0x0,param_3);
      if ((pFVar7->ReferencingMeshInstanceUids).ArrayNum == 1) {
        if (((pFVar7->ReferencingMeshInstanceUids).ArrayNum < 1) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          pFVar6 = (FString *)(*pcVar1)();
          return pFVar6;
        }
        iVar4 = UInterchangeBaseNodeContainer::GetNodeChildrenCount
                          (param_2,(FString *)
                                   (pFVar7->ReferencingMeshInstanceUids).AllocatorInstance.Data);
        if (iVar4 == 0) {
          if (((pFVar7->ReferencingMeshInstanceUids).ArrayNum < 1) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            pFVar6 = (FString *)(*pcVar1)();
            return pFVar6;
          }
          this_00 = UInterchangeBaseNodeContainer::GetNode
                              (param_2,(FString *)
                                       (pFVar7->ReferencingMeshInstanceUids).AllocatorInstance.Data)
          ;
          if (this_00 != (UInterchangeBaseNode *)0x0) {
            UInterchangeBaseNode::GetDisplayLabel(this_00,__return_storage_ptr__);
            goto LAB_14e7b854e;
          }
        }
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    pFVar6 = FSceneNodeStaticData::GetLodGroupSpecializeTypeString();
    bVar3 = UInterchangeSceneNode::IsSpecializedTypeContains(this,pFVar6);
    if (bVar3) {
      pFVar6 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this,&local_20);
      UInterchangeBaseNodeContainer::GetNodeChildrenUids(param_2,&local_40,pFVar6);
      if (local_20.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_20.Data.AllocatorInstance.Data);
      }
      FVar2.Data = local_40.AllocatorInstance.Data;
      if (0 < local_40.ArrayNum) {
        local_48 = *(UObject **)param_1.field0_0x0;
        if ((GC::GIsIncrementalReachabilityPending != false) && (local_48 != (UObject *)0x0)) {
          GC::MarkAsReachable(local_48);
        }
        GetNodeName(__return_storage_ptr__,
                    (TObjectPtr<UInterchangePipelineMeshesUtilities>)&local_48,param_2,
                    (FString *)FVar2.Data);
        DestructItems<FString,int>((FString *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
        if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_40.AllocatorInstance.Data);
        }
LAB_14e7b854e:
        if (local_30.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return __return_storage_ptr__;
        }
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
        return __return_storage_ptr__;
      }
      DestructItems<FString,int>((FString *)local_40.AllocatorInstance.Data,local_40.ArrayNum);
      if (local_40.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_40.AllocatorInstance.Data);
      }
    }
  }
  (__return_storage_ptr__->Data).AllocatorInstance.Data = local_30.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->Data).ArrayNum = local_30.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayMax = local_30.Data.ArrayMax;
  return __return_storage_ptr__;
}

// IsSceneNodeNestedInSkeleton @ 14e7c7280

bool __cdecl
UE::Private::InterchangeMeshPipeline::IsSceneNodeNestedInSkeleton
          (UInterchangeBaseNodeContainer *param_1,UInterchangeSceneNode *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  char cVar3;
  bool bVar4;
  FString *pFVar5;
  UInterchangeSceneNode *this;
  UClass *pUVar6;
  FString *pFVar7;
  UInterchangeBaseNodeContainer *local_res8;
  UInterchangeBaseNodeContainer **local_res18 [2];
  FString local_98;
  TArray<FString,TSizedDefaultAllocator<32>_> local_88;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_78;
  UInterchangeBaseNodeContainer ***local_70;
  code *local_68;
  TArray<FString,TSizedDefaultAllocator<32>_> **local_60;
  FString local_58;
  FString local_48;
  FString local_38;
  
  local_res18[0] = &local_res8;
  local_res8 = param_1;
  pFVar5 = Interchange::FSceneNodeStaticData::GetJointSpecializeTypeString();
  bVar4 = UInterchangeSceneNode::IsSpecializedTypeContains(param_2,pFVar5);
  if (bVar4) {
    pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)param_2,&local_58);
    bVar4 = `UE::Private::InterchangeMeshPipeline::IsSceneNodeNestedInSkeleton'::__l2::<lambda_1>::
            operator()(local_res18,pFVar5);
    if (bVar4) {
      return true;
    }
  }
  UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)param_2,&local_98);
  this = (UInterchangeSceneNode *)UInterchangeBaseNodeContainer::GetNode(local_res8,&local_98);
  if (this != (UInterchangeSceneNode *)0x0) {
    pUVar6 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) {
      while( true ) {
        pFVar5 = Interchange::FSceneNodeStaticData::GetJointSpecializeTypeString();
        bVar4 = UInterchangeSceneNode::IsSpecializedTypeContains(this,pFVar5);
        if (bVar4) {
          pFVar5 = UInterchangeBaseNode::GetUniqueID((UInterchangeBaseNode *)this,&local_48);
          local_88.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_88.ArrayNum = 0;
          local_88.ArrayMax = 0;
          pFVar7 = ::FString::FString(&local_38,pFVar5);
          CollectAllChildren(local_res8,pFVar7,&local_88);
          local_78 = &local_88;
          local_70 = local_res18;
          local_res18[0] =
               (UInterchangeBaseNodeContainer **)((ulonglong)local_res18[0] & 0xffffffffffffff00);
          local_60 = &local_78;
          local_68 = Core::Private::Function::
                     TFunctionRefCaller<``UE::Private::InterchangeMeshPipeline::IsSceneNodeNestedInSkeleton'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,bool,FString_const_&,UInterchangeMeshNode_*>
                     ::Call;
          UInterchangeBaseNodeContainer::BreakableIterateNodesOfType<UInterchangeMeshNode>
                    (local_res8,
                     (TFunctionRef<bool___cdecl(FString_const_&,UInterchangeMeshNode_*)> *)&local_68
                    );
          cVar3 = (char)local_res18[0];
          DestructItems<FString,int>((FString *)local_88.AllocatorInstance.Data,local_88.ArrayNum);
          if (local_88.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.AllocatorInstance.Data);
          }
          pFVar2 = (pFVar5->Data).AllocatorInstance.Data;
          if (pFVar2 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar2);
          }
          if (cVar3 != '\0') {
            bVar4 = true;
            goto LAB_14e7c748c;
          }
        }
        pFVar5 = UInterchangeBaseNode::GetParentUid((UInterchangeBaseNode *)this,&local_58);
        if (&local_98 != pFVar5) {
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          local_98.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
          (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_98.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          local_98.Data.ArrayMax = (pFVar5->Data).ArrayMax;
          (pFVar5->Data).ArrayNum = 0;
          (pFVar5->Data).ArrayMax = 0;
        }
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        this = (UInterchangeSceneNode *)UInterchangeBaseNodeContainer::GetNode(local_res8,&local_98)
        ;
        if (this == (UInterchangeSceneNode *)0x0) break;
        pUVar6 = Z_Construct_UClass_UInterchangeSceneNode_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) break;
      }
    }
  }
  bVar4 = false;
LAB_14e7c748c:
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  return bVar4;
}

// IsTranslatedDataContainOnlyJointAnimation @ 14e7c7dc0

bool __cdecl
UE::Interchange::Private::IsTranslatedDataContainOnlyJointAnimation
          (UInterchangeBaseNodeContainer *param_1,bool param_2)

{
  bool bVar1;
  char local_res8 [8];
  undefined1 local_res10 [8];
  char *local_res18;
  undefined1 local_28 [16];
  code *local_18;
  undefined1 *local_10;
  
  if (param_1 == (UInterchangeBaseNodeContainer *)0x0) {
    return false;
  }
  local_res18 = local_res8;
  local_28._8_8_ = &local_res18;
  bVar1 = false;
  local_28._0_8_ =
       Core::Private::Function::
       TFunctionRefCaller<`UE::Interchange::Private::IsTranslatedDataContainOnlyJointAnimation'::__l2::<lambda_1>,bool,FString_const_&,UInterchangeSkeletalAnimationTrackNode_*>
       ::Call;
  local_res8[0] = '\0';
  local_res10[0] = param_2;
  UInterchangeBaseNodeContainer::BreakableIterateNodesOfType<UInterchangeSkeletalAnimationTrackNode>
            (param_1,(TFunctionRef<bool___cdecl(FString_const_&,UInterchangeSkeletalAnimationTrackNode_*)>
                      *)local_28);
  if (local_res8[0] != '\0') {
    local_28._0_8_ = &local_res18;
    local_res18 = (char *)((ulonglong)local_res18 & 0xffffffffffffff00);
    local_28._8_8_ = local_res10;
    local_10 = local_28;
    local_18 = Core::Private::Function::
               TFunctionRefCaller<`UE::Interchange::Private::IsTranslatedDataContainOnlyJointAnimation'::__l8::<lambda_2>,bool,FString_const_&,UInterchangeMeshNode_*>
               ::Call;
    UInterchangeBaseNodeContainer::BreakableIterateNodesOfType<UInterchangeMeshNode>
              (param_1,(TFunctionRef<bool___cdecl(FString_const_&,UInterchangeMeshNode_*)> *)
                       &local_18);
    bVar1 = (char)local_res18 == '\0';
  }
  return bVar1;
}

// RecursiveFindChildUid @ 14e7d8830

bool __cdecl
UE::Interchange::SkeletalMeshGenericPipeline::RecursiveFindChildUid
          (UInterchangeBaseNodeContainer *param_1,FString *param_2,FString *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  TArray<FString,TSizedDefaultAllocator<32>_> local_18;
  
  iVar4 = (param_2->Data).ArrayNum;
  iVar1 = (param_3->Data).ArrayNum;
  if (iVar4 == iVar1) {
    if (iVar4 < 2) {
      return true;
    }
    iVar4 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_2->Data).AllocatorInstance.Data,
                       (wchar_t *)(param_3->Data).AllocatorInstance.Data);
    bVar7 = iVar4 == 0;
  }
  else {
    bVar7 = iVar4 + iVar1 == 1;
  }
  if (bVar7) {
    return true;
  }
  iVar4 = UInterchangeBaseNodeContainer::GetNodeChildrenCount(param_1,param_2);
  UInterchangeBaseNodeContainer::GetNodeChildrenUids(param_1,&local_18,param_2);
  uVar6 = 0;
  if (0 < iVar4) {
    do {
      uVar5 = 0;
      if ((int)uVar6 < local_18.ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        uVar3 = (*pcVar2)();
        return (bool)uVar3;
      }
      bVar7 = RecursiveFindChildUid
                        (param_1,(FString *)
                                 (local_18.AllocatorInstance.Data + (ulonglong)uVar6 * 0x10),param_3
                        );
      if (bVar7) {
        bVar7 = true;
        goto LAB_14e7d891b;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar4);
  }
  bVar7 = false;
LAB_14e7d891b:
  DestructItems<FString,int>((FString *)local_18.AllocatorInstance.Data,local_18.ArrayNum);
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return bVar7;
}

// RecursivelyCollapseTreeItem @ 14e7d8970

void __cdecl
UE::Interchange::Private::RecursivelyCollapseTreeItem
          (TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
           *param_1,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *param_2)

{
  int iVar1;
  FSkeletonJoint *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *local_res10;
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> local_68;
  FSkeletonJoint *local_58;
  TReferenceControllerBase<1> *local_50;
  TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1> local_48
  ;
  
  local_res10 = param_2;
  if ((param_1->Object ==
       (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  puVar6 = &param_1->Object->field_0x588;
  pcVar4 = *(code **)(*(longlong *)puVar6 + 0x50);
  local_58 = param_2->Object;
  local_50 = (param_2->SharedReferenceCount).ReferenceController;
  if (local_50 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    local_50->SharedReferenceCount = (atomic<int>)((int)local_50->SharedReferenceCount + 1);
    UNLOCK();
  }
  (*pcVar4)(puVar6,&local_58,0);
  if ((param_2->Object == (FSkeletonJoint *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar2 = param_2->Object;
  iVar1 = (pFVar2->Children).ArrayNum;
  pFVar8 = (pFVar2->Children).AllocatorInstance.Data;
  pFVar7 = pFVar8 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((pFVar2->Children).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar7) break;
    pTVar3 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
    local_68.Object = *(FSkeletonJoint **)pFVar8;
    if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
      LOCK();
      pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_48.Object = param_1->Object;
    local_48.SharedReferenceCount.ReferenceController =
         (param_1->SharedReferenceCount).ReferenceController;
    if (local_48.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_48.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_68.SharedReferenceCount.ReferenceController = pTVar3;
    RecursivelyCollapseTreeItem(&local_48,&local_68);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pFVar8 = pFVar8 + 0x10;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((local_res10->SharedReferenceCount).ReferenceController);
  return;
}

// RecursivelyExpandTreeItem @ 14e7d8af0

void __cdecl
UE::Interchange::Private::RecursivelyExpandTreeItem
          (TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1>
           *param_1,TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> *param_2)

{
  int iVar1;
  FSkeletonJoint *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res10 [8];
  TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1> local_58;
  FSkeletonJoint *local_48;
  TReferenceControllerBase<1> *local_40;
  TSharedPtr<STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_>,1> local_38
  ;
  
  if ((param_2->Object == (FSkeletonJoint *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (param_2->Object->bMatch != false) {
    if ((param_2->Object == (FSkeletonJoint *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (param_2->Object->bChildConflict != false) {
      if ((param_1->Object ==
           (STreeView<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>_> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      puVar6 = &param_1->Object->field_0x588;
      pcVar4 = *(code **)(*(longlong *)puVar6 + 0x50);
      local_48 = param_2->Object;
      local_40 = (param_2->SharedReferenceCount).ReferenceController;
      if (local_40 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_40->SharedReferenceCount = (atomic<int>)((int)local_40->SharedReferenceCount + 1);
        UNLOCK();
      }
      (*pcVar4)(puVar6,&local_48,1);
      if ((param_2->Object == (FSkeletonJoint *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = param_2->Object;
      iVar1 = (pFVar2->Children).ArrayNum;
      pFVar8 = (pFVar2->Children).AllocatorInstance.Data;
      pFVar7 = pFVar8 + (longlong)iVar1 * 0x10;
      while( true ) {
        if ((pFVar2->Children).ArrayNum != iVar1) {
          `TCheckedPointerIterator<TSharedPtr<UInterchangeGenericAssetsPipeline::FSkeletonJoint,1>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (pFVar8 == pFVar7) break;
        pTVar3 = *(TReferenceControllerBase<1> **)(pFVar8 + 8);
        local_58.Object = *(FSkeletonJoint **)pFVar8;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_38.Object = param_1->Object;
        local_38.SharedReferenceCount.ReferenceController =
             (param_1->SharedReferenceCount).ReferenceController;
        if (local_38.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
        {
          LOCK();
          (local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_38.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_58.SharedReferenceCount.ReferenceController = pTVar3;
        RecursivelyExpandTreeItem(&local_38,&local_58);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
        pFVar8 = pFVar8 + 0x10;
      }
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// RemoveNestedMeshNodes @ 14e7dc300

void __cdecl
UE::Interchange::SkeletalMeshGenericPipeline::RemoveNestedMeshNodes
          (UInterchangeBaseNodeContainer *param_1,UInterchangeSkeletonFactoryNode *param_2,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_3)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *_Dst;
  uint uVar6;
  longlong lVar7;
  FString local_28;
  
  if (param_2 != (UInterchangeSkeletonFactoryNode *)0x0) {
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
    UInterchangeSkeletonFactoryNode::GetCustomRootJointUid(param_2,&local_28);
    uVar6 = param_3->ArrayNum - 1;
    if (-1 < (int)uVar6) {
      lVar7 = (longlong)(int)uVar6 << 4;
      do {
        uVar5 = ~uVar6 >> 0x1f;
        uVar3 = 0;
        if ((int)uVar6 < param_3->ArrayNum) {
          uVar3 = uVar5;
        }
        if ((uVar3 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        bVar2 = RecursiveFindChildUid
                          (param_1,&local_28,(FString *)((param_3->AllocatorInstance).Data + lVar7))
        ;
        if (bVar2) {
          uVar3 = 0;
          if ((int)uVar6 < param_3->ArrayNum) {
            uVar3 = uVar5;
          }
          if ((uVar3 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          _Dst = (param_3->AllocatorInstance).Data + lVar7;
          if (*(void **)_Dst != (void *)0x0) {
            FMemory::Free(*(void **)_Dst);
          }
          iVar4 = param_3->ArrayNum + ~uVar6;
          if (iVar4 != 0) {
            memmove(_Dst,_Dst + 0x10,(longlong)iVar4 << 4);
          }
          param_3->ArrayNum = param_3->ArrayNum + -1;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,8,&param_3->AllocatorInstance,param_3->ArrayNum,&param_3->ArrayMax);
        }
        lVar7 = lVar7 + -0x10;
        uVar6 = uVar6 - 1;
      } while (-1 < (int)uVar6);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// RemoveTrailingSeparators @ 14e7dc4b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FString * __cdecl
UE::Interchange::Private::RemoveTrailingSeparators(FString *__return_storage_ptr__,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  ForAnyElementType FVar5;
  wchar_t *pwVar6;
  int iVar7;
  FString local_28;
  FString local_18;
  
  iVar3 = (param_1->Data).ArrayNum;
  iVar4 = 0;
  iVar7 = 0;
  if (iVar3 == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
    iVar4 = iVar3 + -1;
  }
  iVar3 = iVar4;
  if (1 < iVar4) {
    iVar3 = 1;
  }
  iVar2 = iVar7;
  if (0 < iVar3) {
    iVar2 = iVar3;
  }
  ::FString::FString(&local_28,
                     (wchar_t *)((longlong)pwVar6 + ((longlong)iVar4 - (longlong)iVar2) * 2));
  do {
    FVar5.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar5.Data = local_28.Data.AllocatorInstance.Data;
    }
    iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"-");
    if (iVar3 != 0) {
      FVar5.Data = (FScriptContainerElement *)L"";
      if (local_28.Data.ArrayNum != 0) {
        FVar5.Data = local_28.Data.AllocatorInstance.Data;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar5.Data,L"_");
      if (iVar3 != 0) {
LAB_14e7dc612:
        ::FString::Shrink(param_1);
        (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).AllocatorInstance.Data =
             (param_1->Data).AllocatorInstance.Data;
        (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        (__return_storage_ptr__->Data).ArrayNum = (param_1->Data).ArrayNum;
        (__return_storage_ptr__->Data).ArrayMax = (param_1->Data).ArrayMax;
        (param_1->Data).ArrayNum = 0;
        (param_1->Data).ArrayMax = 0;
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
        pFVar1 = (param_1->Data).AllocatorInstance.Data;
        if (pFVar1 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar1);
        }
        return __return_storage_ptr__;
      }
    }
    iVar3 = (param_1->Data).ArrayNum;
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = iVar7;
    }
    if (iVar4 < 2) goto LAB_14e7dc612;
    iVar2 = 0;
    iVar4 = iVar3 + -1;
    if (iVar3 == 0) {
      iVar4 = iVar7;
    }
    if (iVar4 + -1 < iVar4) {
      iVar4 = iVar4 + -1;
    }
    iVar3 = iVar2;
    if (0 < iVar4) {
      iVar3 = iVar4;
    }
    ::FString::RemoveAt(param_1,iVar3,1,No);
    iVar3 = (param_1->Data).ArrayNum;
    if (iVar3 == 0) {
      pwVar6 = L"";
      iVar3 = iVar2;
    }
    else {
      pwVar6 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      iVar3 = iVar3 + -1;
    }
    iVar4 = iVar3;
    if (1 < iVar3) {
      iVar4 = 1;
    }
    if (0 < iVar4) {
      iVar2 = iVar4;
    }
    ::FString::FString(&local_18,
                       (wchar_t *)((longlong)pwVar6 + ((longlong)iVar3 - (longlong)iVar2) * 2));
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    local_28.Data.AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
    local_28.Data.ArrayNum = local_18.Data.ArrayNum;
    local_28.Data.ArrayMax = local_18.Data.ArrayMax;
    local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_18.Data.ArrayNum = 0;
    local_18.Data.ArrayMax = 0;
  } while( true );
}

// SetupDefaultOpenVDBGridAssignment @ 14e7e17c0

void __cdecl
UE::Interchange::Private::SetupDefaultOpenVDBGridAssignment
          (UInterchangeSparseVolumeTextureFactoryNode *param_1,
          UInterchangeBaseNodeContainer *param_2)

{
  UInterchangeVolumeGridNode *this;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  UInterchangeVolumeNode *this_00;
  UClass *pUVar6;
  UInterchangeBaseNode *pUVar7;
  FString *pFVar8;
  ForAnyElementType FVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  int local_res18 [2];
  uint local_res20;
  ForAnyElementType local_148;
  undefined8 local_140;
  TArray<FString,TSizedDefaultAllocator<32>_> local_138;
  UInterchangeBaseNode *local_128;
  TArray<FString,TSizedDefaultAllocator<32>_> local_120;
  longlong local_110;
  ForAnyElementType local_108;
  int local_100;
  int local_fc;
  longlong local_f8;
  FString local_f0;
  FString local_e0;
  FString local_d0;
  FString local_c0;
  code *local_a8;
  code *pcStack_a0;
  code *local_98;
  code *pcStack_90;
  code *local_88;
  code *pcStack_80;
  code *local_78;
  code *pcStack_70;
  FString local_68;
  FString local_58;
  FString local_48;
  
  if (param_1 == (UInterchangeSparseVolumeTextureFactoryNode *)0x0) {
    return;
  }
  if (param_2 == (UInterchangeBaseNodeContainer *)0x0) {
    return;
  }
  local_138.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_138.ArrayNum = 0;
  local_138.ArrayMax = 0;
  UInterchangeBaseNode::GetTargetNodeUids((UInterchangeBaseNode *)param_1,&local_138);
  uVar10 = local_138.ArrayNum;
  while( true ) {
    uVar10 = uVar10 - 1;
    if ((int)uVar10 < 0) break;
    if ((local_138.ArrayNum <= (int)uVar10) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = (UInterchangeVolumeNode *)
              UInterchangeBaseNodeContainer::GetNode
                        (param_2,(FString *)
                                 (local_138.AllocatorInstance.Data + (ulonglong)uVar10 * 0x10));
    if (this_00 != (UInterchangeVolumeNode *)0x0) {
      pUVar6 = Z_Construct_UClass_UInterchangeVolumeNode_NoRegister();
      iVar3 = (int)pUVar6->_padding_;
      if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8) ==
          &pUVar6->_padding_)) {
        DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
        if (local_138.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.AllocatorInstance.Data);
        }
        local_148.Data = (FScriptContainerElement *)0x0;
        local_140 = 0;
        local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_120.ArrayNum = 0;
        local_120.ArrayMax = 0;
        UInterchangeVolumeNode::GetCustomGridDependecies(this_00,&local_120);
        uVar10 = 0;
        if (0 < local_120.ArrayNum) goto LAB_14e7e18f0;
        goto LAB_14e7e1a46;
      }
    }
  }
  DestructItems<FString,int>((FString *)local_138.AllocatorInstance.Data,local_138.ArrayNum);
  FVar9.Data = local_138.AllocatorInstance.Data;
  goto LAB_14e7e1e87;
LAB_14e7e18f0:
  do {
    uVar11 = 0;
    if ((int)uVar10 < local_120.ArrayNum) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pUVar7 = UInterchangeBaseNodeContainer::GetNode
                       (param_2,(FString *)
                                (local_120.AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10));
    if (pUVar7 == (UInterchangeBaseNode *)0x0) {
LAB_14e7e1a34:
      local_128 = (UInterchangeBaseNode *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UInterchangeVolumeGridNode_NoRegister();
      iVar3 = (int)pUVar6->_padding_;
      if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar3) ||
         ((longlong *)
          *(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar3 * 8) !=
          &pUVar6->_padding_)) goto LAB_14e7e1a34;
      local_128 = pUVar7;
      if (((local_148.Data <= (FScriptContainerElement *)&local_128) &&
          ((FScriptContainerElement *)&local_128 < local_148.Data + (longlong)local_140._4_4_ * 8))
         && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar3 = (int)local_140;
      if ((int)local_140 == local_140._4_4_) {
        iVar3 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_148,(int *)((longlong)&local_140 + 4));
      }
      local_140 = CONCAT44(local_140._4_4_,iVar3 + 1);
      *(UInterchangeBaseNode **)(local_148.Data + (longlong)iVar3 * 8) = local_128;
    }
    uVar10 = uVar10 + 1;
  } while ((int)uVar10 < local_120.ArrayNum);
LAB_14e7e1a46:
  if ((int)local_140 == 0) {
    DestructItems<FString,int>((FString *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
    FVar9.Data = local_148.Data;
    if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
      FVar9.Data = local_148.Data;
    }
  }
  else {
    DestructItems<FString,int>((FString *)local_120.AllocatorInstance.Data,local_120.ArrayNum);
    if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_120.AllocatorInstance.Data);
    }
    iVar3 = (int)local_140;
    uVar11 = 0;
    uVar10 = 0xffffffff;
    if (0 < (int)local_140) {
      lVar12 = 0;
      do {
        uVar4 = 0;
        if ((int)uVar11 < (int)local_140) {
          uVar4 = ~uVar11 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar8 = UInterchangeBaseNode::GetDisplayLabel
                           (*(UInterchangeBaseNode **)(local_148.Data + lVar12),&local_68);
        iVar5 = (pFVar8->Data).ArrayNum;
        if (iVar5 == Volume::DensityGridName.Data.ArrayNum) {
          if (iVar5 < 2) {
            bVar2 = true;
          }
          else {
            iVar5 = FGenericPlatformStricmp::Stricmp
                              ((wchar_t *)(pFVar8->Data).AllocatorInstance.Data,
                               (wchar_t *)Volume::DensityGridName.Data.AllocatorInstance.Data);
            bVar2 = iVar5 == 0;
          }
        }
        else {
          bVar2 = iVar5 + Volume::DensityGridName.Data.ArrayNum == 1;
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (bVar2) {
          iVar3 = iVar3 + -1;
          uVar10 = uVar11;
          break;
        }
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 8;
      } while ((int)uVar11 < (int)local_140);
    }
    uVar11 = 0;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      local_a8 = UInterchangeSparseVolumeTextureFactoryNode::SetCustomAttributesAChannelX;
      pcStack_a0 = UInterchangeSparseVolumeTextureFactoryNode::SetCustomAttributesAChannelY;
      local_98 = UInterchangeSparseVolumeTextureFactoryNode::SetCustomAttributesAChannelZ;
      pcStack_90 = UInterchangeSparseVolumeTextureFactoryNode::SetCustomAttributesAChannelW;
      local_88 = UInterchangeSparseVolumeTextureFactoryNode::SetCustomAttributesBChannelX;
      pcStack_80 = UInterchangeSparseVolumeTextureFactoryNode::SetCustomAttributesBChannelY;
      local_78 = UInterchangeSparseVolumeTextureFactoryNode::SetCustomAttributesBChannelZ;
      pcStack_70 = UInterchangeSparseVolumeTextureFactoryNode::SetCustomAttributesBChannelW;
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,8,0,&AttributeChannelSetters.AllocatorInstance,8,
                 &AttributeChannelSetters.ArrayMax);
      FVar9 = AttributeChannelSetters.AllocatorInstance;
      *(code **)AttributeChannelSetters.AllocatorInstance.Data = local_a8;
      *(code **)(FVar9.Data + 8) = pcStack_a0;
      *(code **)(FVar9.Data + 0x10) = local_98;
      *(code **)(FVar9.Data + 0x18) = pcStack_90;
      *(code **)(FVar9.Data + 0x20) = local_88;
      *(code **)(FVar9.Data + 0x28) = pcStack_80;
      *(code **)(FVar9.Data + 0x30) = local_78;
      *(code **)(FVar9.Data + 0x38) = pcStack_70;
      atexit(`UE::Interchange::Private::SetupDefaultOpenVDBGridAssignment'::__l2::
             _dynamic_atexit_destructor_for__AttributeChannelSetters__);
      _Init_thread_footer(&::_TSS0);
    }
    if (((uVar10 == 0xffffffff) || (4 < iVar3)) || (iVar3 == 3)) {
      UInterchangeSparseVolumeTextureFactoryNode::SetCustomAttributesAFormat(param_1,Float16);
    }
    else {
      UInterchangeSparseVolumeTextureFactoryNode::SetCustomAttributesAFormat(param_1,Unorm8);
      ::FString::ConcatFF(&local_e0,&Volume::DensityGridName,
                          &Volume::GridNameAndComponentIndexSeparator);
      ::FString::ConcatFC(&local_58,&local_e0,L"0");
      UInterchangeSparseVolumeTextureFactoryNode::SetCustomAttributesAChannelX(param_1,&local_58);
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      uVar11 = 4;
    }
    UInterchangeSparseVolumeTextureFactoryNode::SetCustomAttributesBFormat(param_1,Float16);
    local_res20 = 0;
    FVar9.Data = local_148.Data;
    if (0 < (int)local_140) {
      lVar12 = (longlong)(int)uVar10;
      local_f8 = 0;
      uVar14 = (ulonglong)uVar11;
      iVar3 = (int)local_140;
      local_110 = lVar12;
      do {
        lVar13 = local_f8;
        uVar10 = local_res20;
        FVar9.Data = local_148.Data;
        if (AttributeChannelSetters.ArrayNum <= (int)uVar11) break;
        if (local_f8 != lVar12) {
          uVar4 = 0;
          if ((int)local_res20 < iVar3) {
            uVar4 = ~local_res20 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar2)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          this = *(UInterchangeVolumeGridNode **)(local_148.Data + lVar13 * 8);
          local_res18[0] = 0;
          bVar2 = UInterchangeVolumeGridNode::GetCustomNumComponents(this,local_res18);
          if (bVar2) {
            pFVar8 = UInterchangeBaseNode::GetDisplayLabel((UInterchangeBaseNode *)this,&local_48);
            ::FString::ConcatFF(&local_c0,pFVar8,&Volume::GridNameAndComponentIndexSeparator);
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
            iVar3 = 0;
            if (0 < local_res18[0]) {
              do {
                lVar13 = local_f8;
                uVar10 = local_res20;
                if (AttributeChannelSetters.ArrayNum <= (int)uVar11) break;
                ::FString::PrintfImpl(&local_d0,L"%d");
                ::FString::ConcatFF(&local_f0,&local_c0,&local_d0);
                if (local_d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_d0.Data.AllocatorInstance.Data);
                }
                uVar10 = 0;
                if ((int)uVar11 < AttributeChannelSetters.ArrayNum) {
                  uVar10 = ~uVar11 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar2)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                FVar9.Data = local_f0.Data.AllocatorInstance.Data;
                lVar12 = (longlong)local_f0.Data.ArrayNum;
                local_108.Data = (FScriptContainerElement *)0x0;
                local_100 = local_f0.Data.ArrayNum;
                pcVar1 = *(code **)(AttributeChannelSetters.AllocatorInstance.Data + uVar14 * 8);
                if (local_f0.Data.ArrayNum == 0) {
                  local_fc = local_f0.Data.ArrayNum;
                }
                else {
                  Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (2,2,local_f0.Data.ArrayNum,0,&local_108,local_f0.Data.ArrayNum,
                             &local_fc);
                  memcpy(local_108.Data,FVar9.Data,lVar12 * 2);
                }
                (*pcVar1)(param_1,&local_108);
                if (local_f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_f0.Data.AllocatorInstance.Data);
                }
                iVar3 = iVar3 + 1;
                uVar11 = uVar11 + 1;
                uVar14 = uVar14 + 1;
                lVar13 = local_f8;
                uVar10 = local_res20;
              } while (iVar3 < local_res18[0]);
            }
            if (local_c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c0.Data.AllocatorInstance.Data);
            }
          }
          local_res20 = uVar10;
          lVar12 = local_110;
          iVar3 = (int)local_140;
        }
        local_res20 = local_res20 + 1;
        local_f8 = lVar13 + 1;
        FVar9.Data = local_148.Data;
      } while ((int)local_res20 < iVar3);
    }
  }
LAB_14e7e1e87:
  if (FVar9.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar9.Data);
  }
  return;
}

// ShowModalDialog @ 14e7e3cc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "FT_Encoding_": Some values do not have unique names */

void __cdecl
UE::Interchange::PipelineHelper::ShowModalDialog
          (TSharedRef<SInterchangeBaseConflictWidget,1> *param_1,FText *param_2,
          TVector2<double> *param_3)

{
  byte *pbVar1;
  double dVar2;
  double dVar3;
  SInterchangeBaseConflictWidget *pSVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  FDeprecateVector2DParameter FVar10;
  FDeprecateVector2DParameter FVar11;
  FSlateApplication *this;
  SWindow *this_00;
  FSharedReferencer<1> FVar12;
  bool bVar13;
  char cVar14;
  byte bVar15;
  TSharedRef<FGlobalTabmanager,1> *pTVar16;
  FSlateApplicationBase *pFVar17;
  FArguments *pFVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  double dVar22;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  undefined1 local_res18 [8];
  float local_res20;
  float fStackX_24;
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs> local_468;
  FText local_450;
  bool local_440;
  undefined1 local_438 [8];
  ForAnyElementType FStack_430;
  ulonglong local_428;
  float local_420;
  float fStack_41c;
  float local_418;
  float local_414;
  float local_410;
  float local_40c;
  FName local_408;
  FMemScope local_400;
  SWindow *local_3f8;
  TReferenceControllerBase<1> *local_3f0;
  TSharedRef<SWidget,1> local_3e8;
  TSharedRef<SWindow,1> local_3d8;
  TSharedPtr<SWindow,1> local_3c8;
  FDestructionSentinel local_3b8;
  TSharedPtr<SWidget_const_,1> local_398;
  undefined1 local_388 [544];
  undefined1 local_168 [160];
  FSharedReferencer<1> local_c8;
  TRefCountPtr<ITextData> local_c0;
  undefined1 local_a8 [128];
  
  pTVar16 = FGlobalTabmanager::Get();
  FGlobalTabmanager::GetRootWindow(pTVar16->Object,&local_3c8);
  dVar2 = (param_3->field0_0x0)._s_0.X;
  if (dVar2 <= __real_4062c00000000000) {
    dVar2 = __real_4062c00000000000;
  }
  dVar3 = *(double *)((longlong)&param_3->field0_0x0 + 8);
  uVar20 = SUB84(dVar3,0);
  uVar21 = (undefined4)((ulonglong)dVar3 >> 0x20);
  if (dVar3 <= __real_4049000000000000) {
    uVar20 = SUB84(__real_4049000000000000,0);
    uVar21 = (undefined4)((ulonglong)__real_4049000000000000 >> 0x20);
  }
  pFVar17 = FSlateApplicationBase::Get();
  (**(code **)(*(longlong *)pFVar17 + 0xe8))(pFVar17,&local_418);
  fVar19 = FWindowsPlatformApplicationMisc::GetDPIScaleFactorAtPoint(local_418,local_414);
  dVar3 = (double)fVar19;
  dVar22 = __real_3ff0000000000000 / dVar3;
  dVar9 = (double)(float)(double)CONCAT44(uVar21,uVar20) * dVar3;
  dVar7 = ((double)(local_410 - local_418) - (double)(float)dVar2 * dVar3) * __real_3fe0000000000000
  ;
  dVar8 = ((double)(local_40c - local_414) - dVar9) * __real_3fe0000000000000;
  pFVar18 = SWindow::FArguments::FArguments((FArguments *)local_388);
  local_450.TextData.Reference = (param_2->TextData).Reference;
  if (local_450.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_450.TextData.Reference + 8))
              (local_450.TextData.Reference,local_res18);
  }
  local_450.Flags = param_2->Flags;
  local_440 = true;
  local_428 = 0;
  local_438 = (undefined1  [8])0x0;
  FStack_430.Data = (FScriptContainerElement *)0x0;
  FText::operator=(&(pFVar18->_Title).Value,&local_450);
  (pFVar18->_Title).bIsSet = local_440;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar18->_Title).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_438);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_438,
             (FWriteAccessScope *)&local_3b8);
  if (((int)local_428 != 0) && (FStack_430.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_430.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_430,0,0,0x10);
    local_428 = local_428 & 0xffffffff00000000;
  }
  if (local_3b8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_3b8.Accessor,&local_3b8);
  }
  if (FStack_430.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_430.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_438);
  if (local_450.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_450.TextData.Reference + 0x10))();
  }
  pFVar18->_SizingRule = UserSized;
  pFVar18->_AutoCenter = None;
  local_res20 = (float)((double)(float)dVar2 * dVar3);
  fStackX_24 = (float)dVar9;
  FVar10._4_4_ = fStackX_24;
  FVar10._0_4_ = local_res20;
  pFVar18->_ClientSize = FVar10;
  local_420 = (float)((dVar7 + (double)local_418) * dVar22);
  fStack_41c = (float)((dVar8 + (double)local_414) * dVar22);
  FVar11._4_4_ = fStack_41c;
  FVar11._0_4_ = local_420;
  pFVar18->_ScreenPosition = FVar11;
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_408 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_400,&local_408,true);
  TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>::TSlateDecl<SWindow,RequiredArgs::T0RequiredArgs>
            (&local_468,"SWindow",
             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangePipelineHelper.cpp"
             ,0x33,local_res8);
  FMemScope::~FMemScope(&local_400);
  FLLMScope::~FLLMScope(local_res10);
  this_00 = local_468._Widget.Object;
  if (local_468._Widget.Object == (SWindow *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  SWidget::SWidgetConstruct((SWidget *)local_468._Widget.Object,(FSlateBaseNamedArgs *)pFVar18);
  SWindow::Construct(local_468._Widget.Object,pFVar18);
  if (local_468._Widget.Object == (SWindow *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (((local_468._Widget.Object)->_padding_ & 0x10) == 0) {
    cVar14 = (**(code **)((local_468._Widget.Object)->_padding_ + 0x228))(local_468._Widget.Object);
    bVar15 = 0;
    if (cVar14 == '\0') goto LAB_14e7e4036;
  }
  bVar15 = 0x20;
LAB_14e7e4036:
  *(byte *)&(local_468._Widget.Object)->_padding_ =
       (byte)(local_468._Widget.Object)->_padding_ & 0xdf;
  *(byte *)&(local_468._Widget.Object)->_padding_ =
       (byte)(local_468._Widget.Object)->_padding_ | bVar15;
  if (local_468._Widget.Object == (SWindow *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x458,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pbVar1 = (byte *)((longlong)&(local_468._Widget.Object)->_padding_ + 1);
  *pbVar1 = *pbVar1 | 4;
  if (local_468._Widget.Object == (SWindow *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x416,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  FVar12.ReferenceController = local_468._Widget.SharedReferenceCount.ReferenceController;
  local_468._Widget.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_468._Widget.Object = (SWindow *)0x0;
  if (this_00 == (SWindow *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x26c,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_a8);
  if ((void *)local_a8._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_a8._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_a8);
  if (local_c0.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_c0.Reference + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)local_168);
  if ((void *)local_168._8_8_ != (void *)0x0) {
    FMemory::Free((void *)local_168._8_8_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_168);
  if ((ITextData *)local_388._520_8_ != (ITextData *)0x0) {
    (**(code **)((longlong)*(ITextData *)local_388._520_8_ + 0x10))();
  }
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)local_388);
  pSVar4 = param_1->Object;
  lVar5 = pSVar4->_padding_;
  local_3f8 = this_00;
  local_3f0 = FVar12.ReferenceController;
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  (**(code **)(lVar5 + 0x248))(pSVar4,&local_3f8);
  local_3e8.Object = (SWidget *)param_1->Object;
  local_3e8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_3e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SWindow::SetContent(this_00,&local_3e8);
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentApplication.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                        ,0x141,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  bVar13 = IsInGameThread();
  if (!bVar13) {
    bVar13 = IsInSlateThread();
    if (!bVar13) {
      bVar13 = (*IsInAsyncLoadingThread)();
      if (!bVar13) {
        bVar13 = IsInParallelLoadingThread();
        if (!bVar13) {
          bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread() || IsInSlateThread() || IsInAsyncLoadingThread() || IsInParallelLoadingThread()"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Slate\\Public\\Framework\\Application\\SlateApplication.h"
                              ,0x142,L"");
          if (bVar13) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
      }
    }
  }
  if (FSlateApplication::CurrentApplication.Object == (FSlateApplication *)0x0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                        ,0x44d,L"");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this = FSlateApplication::CurrentApplication.Object;
  local_398.Object = (SWidget *)local_3c8.Object;
  local_398.SharedReferenceCount.ReferenceController =
       local_3c8.SharedReferenceCount.ReferenceController;
  if (local_3c8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_3c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_3c8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  local_3d8.Object = this_00;
  local_3d8.SharedReferenceCount.ReferenceController = FVar12.ReferenceController;
  if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FVar12.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FVar12.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FSlateApplication::AddModalWindow(this,&local_3d8,&local_398,false);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar12.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_3c8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// SplitNumberedSuffix @ 14e7e4300

void __cdecl
UE::Interchange::Private::SplitNumberedSuffix(FString *param_1,FString *param_2,int *param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  FString *pFVar10;
  wchar_t *pwVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  ForAnyElementType _Str;
  FString local_58;
  FString local_48;
  FString local_38;
  
  iVar9 = (param_1->Data).ArrayNum;
  iVar13 = 0;
  iVar6 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar6 = iVar13;
  }
  if (((iVar6 < 0) || (iVar9 < iVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Count >= 0 && Count <= this->Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x55b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (param_1->Data).AllocatorInstance.Data;
  pFVar12 = pFVar3 + (longlong)iVar6 * 2;
  iVar9 = -1;
  do {
    if (pFVar12 == pFVar3) {
      iVar6 = -1;
      goto LAB_14e7e439a;
    }
    pFVar1 = pFVar12 + -2;
    pFVar12 = pFVar12 + -2;
    iVar6 = iswdigit(*(wint_t *)pFVar1);
  } while (iVar6 != 0);
  iVar6 = (int)((longlong)pFVar12 - (longlong)pFVar3 >> 1);
LAB_14e7e439a:
  uVar2 = (param_1->Data).ArrayNum;
  iVar7 = uVar2 - 2;
  if (uVar2 == 0) {
    iVar7 = -1;
  }
  if (iVar6 == iVar7) {
    ::FString::operator=(param_2,param_1);
    *param_3 = -1;
  }
  else {
    local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = 0;
    local_58.Data.ArrayMax = 0;
    if (iVar6 == -1) {
      if (&local_58 != param_1) {
        pFVar12 = (param_1->Data).AllocatorInstance.Data;
        local_58.Data.ArrayMax = 0;
        local_58.Data.ArrayNum = uVar2;
        if (uVar2 != 0) {
          Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar2,0,(ForAnyElementType *)&local_58,uVar2,&local_58.Data.ArrayMax);
          memcpy(local_58.Data.AllocatorInstance.Data,pFVar12,(longlong)(int)uVar2 * 2);
        }
      }
      ::FString::operator=(param_2,(wchar_t *)0x0);
    }
    else {
      iVar6 = iVar6 + 1;
      pFVar10 = ::FString::RightChop(param_1,&local_38,iVar6);
      if (&local_58 != pFVar10) {
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        local_58.Data.AllocatorInstance.Data = (pFVar10->Data).AllocatorInstance.Data;
        (pFVar10->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_58.Data.ArrayNum = (pFVar10->Data).ArrayNum;
        local_58.Data.ArrayMax = (pFVar10->Data).ArrayMax;
        (pFVar10->Data).ArrayNum = 0;
        (pFVar10->Data).ArrayMax = 0;
      }
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      iVar7 = (param_1->Data).ArrayNum;
      iVar8 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar8 = iVar13;
      }
      if (iVar6 < iVar8) {
        iVar8 = iVar6;
      }
      if (0 < iVar8) {
        iVar13 = iVar8;
      }
      if (iVar7 == 0) {
        pwVar11 = L"";
      }
      else {
        pwVar11 = (wchar_t *)(param_1->Data).AllocatorInstance.Data;
      }
      ::FString::ConstructFromPtrSize(&local_48,pwVar11,iVar13);
      if (param_2 != &local_48) {
        pFVar12 = (param_2->Data).AllocatorInstance.Data;
        if (pFVar12 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar12);
        }
        (param_2->Data).AllocatorInstance.Data = local_48.Data.AllocatorInstance.Data;
        (param_2->Data).ArrayNum = local_48.Data.ArrayNum;
        (param_2->Data).ArrayMax = local_48.Data.ArrayMax;
        local_48.Data.ArrayNum = 0;
        local_48.Data.ArrayMax = 0;
        local_48.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    bVar5 = ::FString::IsNumeric(&local_58);
    if (bVar5) {
      _Str.Data = (FScriptContainerElement *)L"";
      if (local_58.Data.ArrayNum != 0) {
        _Str.Data = local_58.Data.AllocatorInstance.Data;
      }
      iVar9 = _wtoi((wchar_t *)_Str.Data);
    }
    else {
      bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<5571486573427425516>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Interchange\\Runtime\\Source\\Pipelines\\Private\\InterchangeSparseVolumeTexturePipeline.cpp"
                         ,0xec,"NumberSuffixStr.IsNumeric()");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    *param_3 = iVar9;
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// UpdateBlendModeBasedOnOpacityAttributes @ 14e7e69d0

void __cdecl
UE::Interchange::InterchangeGenericMaterialPipeline::Private::
UpdateBlendModeBasedOnOpacityAttributes
          (UInterchangeShaderGraphNode *param_1,UInterchangeMaterialFactoryNode *param_2)

{
  bool bVar1;
  TEnumAsByte<EBlendMode> local_res18 [8];
  TEnumAsByte<ETranslucencyLightingMode> local_res20 [8];
  
  bVar1 = UInterchangeShaderGraphNode::GetCustomOpacityMaskClipValue(param_1,(float *)local_res20);
  if (bVar1) {
    UInterchangeMaterialFactoryNode::SetCustomOpacityMaskClipValue
              (param_2,(float *)local_res20,true);
  }
  local_res18[0].Value = !bVar1 + '\x01';
  bVar1 = UInterchangeMaterialFactoryNode::GetCustomBlendMode(param_2,local_res18);
  if (!bVar1) {
    UInterchangeMaterialFactoryNode::SetCustomBlendMode(param_2,local_res18,true);
  }
  if ((local_res18[0].Value == '\x01') || (local_res18[0].Value == '\x02')) {
    local_res20[0].Value = '\x04';
    bVar1 = UInterchangeMaterialFactoryNode::GetCustomTranslucencyLightingMode(param_2,local_res20);
    if (!bVar1) {
      UInterchangeMaterialFactoryNode::SetCustomTranslucencyLightingMode(param_2,local_res20,true);
    }
  }
  return;
}

// UpdateFunctionCallExpression @ 14e7e6a80

void __cdecl
UE::Interchange::InterchangeGenericMaterialPipeline::Private::UpdateFunctionCallExpression
          (UInterchangeMaterialExpressionFactoryNode *param_1,FString *param_2)

{
  int iVar1;
  FName FVar2;
  FName *pFVar3;
  UClass *pUVar4;
  FString *pFVar5;
  FName local_res10;
  FName local_res18 [2];
  TStringView<wchar_t> local_48;
  FSoftObjectPath local_38;
  
  pFVar3 = ::FName::FName(local_res18,0x10,L"MaterialFunction",FNAME_Add);
  local_res10 = *pFVar3;
  pUVar4 = Z_Construct_UClass_UMaterialExpressionMaterialFunctionCall_NoRegister();
  local_48.DataPtr = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  iVar1 = (param_2->Data).ArrayNum;
  local_38.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_38.AssetPath.PackageName.Number = 0;
  local_38.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_38.AssetPath.AssetName.Number = 0;
  local_38.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.Size = iVar1 + -1;
  local_38.SubPathString.Data.ArrayNum = 0;
  local_38.SubPathString.Data.ArrayMax = 0;
  if (iVar1 == 0) {
    local_48.Size = 0;
  }
  FSoftObjectPath::SetPath(&local_38,&local_48);
  FSoftObjectPath::TryLoad(&local_38,(FUObjectSerializeContext *)0x0);
  if (local_38.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.SubPathString.Data.AllocatorInstance.Data);
  }
  local_res18[0] = (FName)pUVar4->_padding_;
  ::FName::ToString(local_res18,(FString *)&local_48);
  UInterchangeMaterialExpressionFactoryNode::SetCustomExpressionClassName
            (param_1,(FString *)&local_48);
  if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  pFVar5 = ::FName::ToString(&local_res10,(FString *)&local_48);
  UInterchangeBaseNode::AddStringAttribute((UInterchangeBaseNode *)param_1,pFVar5,param_2);
  if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  FVar2 = local_res10;
  pFVar5 = ::FName::ToString(&local_res10,(FString *)&local_48);
  UInterchangeFactoryBaseNode::AddApplyAndFillDelegates<FString>
            ((UInterchangeFactoryBaseNode *)param_1,pFVar5,pUVar4,FVar2);
  if ((FScriptContainerElement *)local_48.DataPtr != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.DataPtr);
  }
  return;
}

// operator() @ 150599b90

bool __thiscall `UE::Interchange::Private::ConvertWrap'::__l4::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_4696583451556446101>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_4696583451556446101>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

