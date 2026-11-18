// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 19

// Emplace<unsigned___int64_const_&,FPaintGeometry_const_&> @ 142df0800

FPaintGeometry * __thiscall
TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
::Emplace<unsigned___int64_const_&,FPaintGeometry_const_&>
          (TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
           *this,ulong64 *param_1,FPaintGeometry *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x48);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<unsigned___int64,FPaintGeometry>_> *)0x0) {
    *(ulong64 *)local_28.Pointer = *param_1;
    uVar3 = *(undefined8 *)&param_2->DrawScale;
    *(TVector2<float>_u_0 *)((longlong)local_28.Pointer + 8) = (param_2->DrawPosition).field0_0x0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = uVar3;
    uVar3 = *(undefined8 *)((longlong)&(param_2->LocalSize).field0_0x0 + 4);
    *(undefined8 *)((longlong)local_28.Pointer + 0x18) =
         *(undefined8 *)((longlong)&(param_2->DrawSize).field0_0x0 + 4);
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = uVar3;
    uVar3 = *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[1] + 1);
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) =
         *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[0] + 1);
    *(undefined8 *)((longlong)local_28.Pointer + 0x30) = uVar3;
    *(undefined8 *)((longlong)local_28.Pointer + 0x38) =
         *(undefined8 *)((longlong)&(param_2->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    *(undefined4 *)((longlong)local_28.Pointer + 0x40) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar6 = (int)((ulonglong)*(undefined8 *)local_28.Pointer >> 0x20) * 0x17 +
          (int)*(undefined8 *)local_28.Pointer;
  bVar4 = TSet<TTuple<unsigned___int64,FPaintGeometry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<unsigned___int64,FPaintGeometry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FPaintGeometry *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x48 + 8);
}

// Emplace<unsigned___int64_const_&,FPaintGeometry> @ 142df0950

FPaintGeometry * __thiscall
TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
::Emplace<unsigned___int64_const_&,FPaintGeometry>
          (TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
           *this,ulong64 *param_1,FPaintGeometry *param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  int local_res8 [2];
  FSparseArrayAllocationInfo local_28;
  
  iVar1 = *(int *)&(this->Pairs).Elements.field_0x34;
  if (iVar1 == 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x48,8,1,(ForAnyElementType *)this,(int *)&(this->Pairs).Elements.field_0x8,
                       (int *)&(this->Pairs).Elements.field_0xc);
    TBitArray<FDefaultBitArrayAllocator>::Add
              ((TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10,false);
  }
  else {
    iVar5 = *(int *)&(this->Pairs).Elements.field_0x30;
    iVar1 = iVar1 + -1;
    lVar7 = *(longlong *)&(this->Pairs).Elements;
    iVar2 = *(int *)(lVar7 + 4 + (longlong)iVar5 * 0x48);
    *(int *)&(this->Pairs).Elements.field_0x30 = iVar2;
    *(int *)&(this->Pairs).Elements.field_0x34 = iVar1;
    if (iVar1 != 0) {
      *(undefined4 *)(lVar7 + (longlong)iVar2 * 0x48) = 0xffffffff;
    }
  }
  TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::AllocateIndex((TSparseArrayBase<72,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)this,&local_28,iVar5);
  if (local_28.Pointer != (TSparseSetElement<TTuple<unsigned___int64,FPaintGeometry>_> *)0x0) {
    *(ulong64 *)local_28.Pointer = *param_1;
    uVar3 = *(undefined8 *)&param_2->DrawScale;
    *(TVector2<float>_u_0 *)((longlong)local_28.Pointer + 8) = (param_2->DrawPosition).field0_0x0;
    *(undefined8 *)((longlong)local_28.Pointer + 0x10) = uVar3;
    uVar3 = *(undefined8 *)((longlong)&(param_2->LocalSize).field0_0x0 + 4);
    *(undefined8 *)((longlong)local_28.Pointer + 0x18) =
         *(undefined8 *)((longlong)&(param_2->DrawSize).field0_0x0 + 4);
    *(undefined8 *)((longlong)local_28.Pointer + 0x20) = uVar3;
    uVar3 = *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[1] + 1);
    *(undefined8 *)((longlong)local_28.Pointer + 0x28) =
         *(undefined8 *)((param_2->AccumulatedRenderTransform).M.M[0] + 1);
    *(undefined8 *)((longlong)local_28.Pointer + 0x30) = uVar3;
    *(undefined8 *)((longlong)local_28.Pointer + 0x38) =
         *(undefined8 *)((longlong)&(param_2->AccumulatedRenderTransform).Trans.field0_0x0 + 4);
    *(undefined4 *)((longlong)local_28.Pointer + 0x40) = 0xffffffff;
  }
  local_res8[0] = local_28.Index;
  uVar6 = (int)((ulonglong)*(undefined8 *)local_28.Pointer >> 0x20) * 0x17 +
          (int)*(undefined8 *)local_28.Pointer;
  bVar4 = TSet<TTuple<unsigned___int64,FPaintGeometry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>,FDefaultSetAllocator>
          ::TryReplaceExisting(&this->Pairs,uVar6,local_28.Pointer,local_res8,(bool *)0x0);
  lVar7 = (longlong)local_res8[0];
  if (!bVar4) {
    TSet<TTuple<unsigned___int64,FPaintGeometry>,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>,FDefaultSetAllocator>
    ::RehashOrLink(&this->Pairs,uVar6,local_28.Pointer,local_res8[0]);
  }
  return (FPaintGeometry *)(*(longlong *)&(this->Pairs).Elements + lVar7 * 0x48 + 8);
}

// GenerateValueArray<TSizedDefaultAllocator<32>_> @ 142df4b70

void __thiscall
TMapBase<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>_>
::GenerateValueArray<TSizedDefaultAllocator<32>_>
          (TMapBase<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>_>
           *this,TArray<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSizedDefaultAllocator<32>_>
                 *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  uint *puVar13;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_40;
  
  uVar9 = *(int *)&(this->Pairs).Elements.field_0x8 - *(int *)&(this->Pairs).Elements.field_0x34;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  DestructItems<TSharedPtr<FNavigationSimulationWidgetNode,1>,int>
            ((TSharedPtr<FNavigationSimulationWidgetNode,1> *)(param_1->AllocatorInstance).Data,
             param_1->ArrayNum);
  iVar10 = 0;
  piVar1 = &param_1->ArrayMax;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar9,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)&(this->Pairs).Elements.field_0x28;
  TStack_40.Array = (TBitArray<FDefaultBitArrayAllocator> *)&(this->Pairs).Elements.field_0x10;
  uVar9 = 1;
  iVar12 = 0;
  TStack_40.CurrentBitIndex = 0;
  if (iVar3 != 0) {
    puVar13 = *(uint **)&(this->Pairs).Elements.field_0x20;
    if (puVar13 == (uint *)0x0) {
      puVar13 = (uint *)TStack_40.Array;
    }
    uVar4 = *puVar13;
    while (uVar4 == 0) {
      lVar7 = (longlong)iVar10;
      iVar12 = iVar12 + 0x20;
      iVar10 = iVar10 + 1;
      TStack_40.CurrentBitIndex = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142df4c50;
      uVar4 = puVar13[lVar7 + 1];
    }
    uVar9 = -uVar4 & uVar4;
    uVar2 = (ulonglong)uVar9 * 2 + 1;
    lVar7 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    TStack_40.CurrentBitIndex = (int)lVar7 + -1 + iVar12;
    if (iVar3 < TStack_40.CurrentBitIndex) {
      TStack_40.CurrentBitIndex = iVar3;
    }
  }
LAB_142df4c50:
  TStack_40._padding_ = CONCAT44(uVar9,iVar10);
  TStack_40.UnvisitedBitMask = 0xffffffff;
  TStack_40._28_4_ = TStack_40.CurrentBitIndex;
  TStack_40.BaseBitIndex = iVar12;
  if (TStack_40.CurrentBitIndex < iVar3) {
    do {
      pFVar8 = (param_1->AllocatorInstance).Data;
      pFVar11 = (FScriptContainerElement *)
                (*(longlong *)&(this->Pairs).Elements + 8 +
                (longlong)TStack_40.CurrentBitIndex * 0x20);
      if (((pFVar8 <= pFVar11) && (pFVar11 < pFVar8 + (longlong)*piVar1 * 0x10)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar10 = param_1->ArrayNum;
      if (iVar10 == *piVar1) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&param_1->AllocatorInstance,piVar1);
      }
      param_1->ArrayNum = iVar10 + 1;
      pFVar8 = (param_1->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
      *(undefined8 *)pFVar8 = *(undefined8 *)pFVar11;
      lVar7 = *(longlong *)(pFVar11 + 8);
      *(longlong *)(pFVar8 + 8) = lVar7;
      if (lVar7 != 0) {
        LOCK();
        *(int *)(lVar7 + 8) = *(int *)(lVar7 + 8) + 1;
        UNLOCK();
      }
      TStack_40.UnvisitedBitMask = TStack_40.UnvisitedBitMask & ~TStack_40._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_40);
    } while (TStack_40.CurrentBitIndex < (TStack_40.Array)->NumBits);
  }
  return;
}

// Find @ 142e83710

TSharedPtr<int,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<int,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<int,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<int,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<int,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<int,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITableRow *)*plVar2 == param_1) {
          pTVar4 = (TSharedPtr<int,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<int,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<int,1> *)0x0;
}

// Find @ 142e837b0

TSharedPtr<FNavigationSimulationWidgetNode,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITableRow *)*plVar2 == param_1) {
          pTVar4 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<FNavigationSimulationWidgetNode,1> *)0x0;
}

// Find @ 142e83850

TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITableRow *)*plVar2 == param_1) {
          pTVar4 = (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1> *)0x0;
}

// Find @ 142e838f0

TSharedPtr<FWidgetReflectorNodeBase,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FWidgetReflectorNodeBase,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<FWidgetReflectorNodeBase,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITableRow *)*plVar2 == param_1) {
          pTVar4 = (TSharedPtr<FWidgetReflectorNodeBase,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<FWidgetReflectorNodeBase,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<FWidgetReflectorNodeBase,1> *)0x0;
}

// Find @ 142e83990

TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITableRow *)*plVar2 == param_1) {
          pTVar4 = (TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)
                     (plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1> *)0x0;
}

// Find @ 142e83a30

TSharedRef<FWidgetReflectorNodeBase,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<FWidgetReflectorNodeBase,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedRef<FWidgetReflectorNodeBase,1> *pTVar4;
  uint uVar5;
  
  uVar5 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
    if (iVar1 != -1) {
      do {
        plVar2 = (longlong *)((longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((ITableRow *)*plVar2 == param_1) {
          pTVar4 = (TSharedRef<FWidgetReflectorNodeBase,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedRef<FWidgetReflectorNodeBase,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedRef<FWidgetReflectorNodeBase,1> *)0x0;
}

// Find @ 142e83ad0

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<int_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<int_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedPtr<int,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<int,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<int_const_,1>_>(&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18)
  ;
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<ITableRow,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<ITableRow,1> *)0x0;
}

// Find @ 142e83ba0

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<FNavigationSimulationWidgetNode_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FNavigationSimulationWidgetNode_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FNavigationSimulationWidgetNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<FNavigationSimulationWidgetNode_const_,1>_>
                    (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<ITableRow,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<ITableRow,1> *)0x0;
}

// Find @ 142e83c70

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<WidgetReflectorImpl::FWidgetSnapshotTarget_const_,1>_>
                    (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<ITableRow,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<ITableRow,1> *)0x0;
}

// Find @ 142e83d40

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<FWidgetReflectorNodeBase_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FWidgetReflectorNodeBase_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<FWidgetReflectorNodeBase_const_,1>_>
                    (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<ITableRow,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<ITableRow,1> *)0x0;
}

// Find @ 142e83e10

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::
          FindIndexByHash<TSharedRef<WidgetHittestGridInternal::FIntermediateResultNode_const_,1>_>
                    (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<ITableRow,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<ITableRow,1> *)0x0;
}

// Find @ 142e83ee0

FSparseItemInfo * __thiscall
TMapBase<TSharedRef<FWidgetReflectorNodeBase,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,FSparseItemInfo,0>_>
::Find(TMapBase<TSharedRef<FWidgetReflectorNodeBase,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,FSparseItemInfo,0>_>
       *this,TSharedRef<FWidgetReflectorNodeBase_const_,1> *param_1)

{
  int iVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TSharedRef<FWidgetReflectorNodeBase_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar2 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar3;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  iVar1 = TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedRef<FWidgetReflectorNodeBase_const_,1>_>
                    (&this->Pairs,uVar2 >> 0x10 ^ uVar2,&local_18);
  if (iVar1 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar4 = (longlong)iVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    pTVar3 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar4 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      return (FSparseItemInfo *)(lVar4 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return (FSparseItemInfo *)0x0;
}

// Find @ 142e83fb0

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedRef<FWidgetReflectorNodeBase_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<FWidgetReflectorNodeBase_const_,1> local_18;
  
  local_18.Object = param_1->Object;
  pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
    LOCK();
    pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
    UNLOCK();
  }
  uVar3 = ((uint)((ulonglong)local_18.Object >> 0x14) & 0xffff ^
          (uint)((ulonglong)local_18.Object >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  local_18.SharedReferenceCount.ReferenceController = pTVar4;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  iVar2 = TSet<TTuple<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<FWidgetReflectorNodeBase,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedRef<FWidgetReflectorNodeBase_const_,1>_>
                    (&this->Pairs,uVar3 >> 0x10 ^ uVar3,&local_18);
  if (iVar2 == -1) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
  }
  else {
    lVar1 = *(longlong *)&(this->Pairs).Elements + (longlong)iVar2 * 0x28;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
    pTVar4 = (param_1->SharedReferenceCount).ReferenceController;
    if (lVar1 != 0) {
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      return (TSharedRef<ITableRow,1> *)(lVar1 + 0x10);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
  return (TSharedRef<ITableRow,1> *)0x0;
}

// Find @ 142e84080

/* WARNING: Enum "Type": Some values do not have unique names */

TWeakPtr<SDockTab,1> * __thiscall
TMapBase<FName,TWeakPtr<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SDockTab,1>,0>_>
::Find(TMapBase<FName,TWeakPtr<SDockTab,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TWeakPtr<SDockTab,1>,0>_>
       *this,FName param_1)

{
  uint uVar1;
  FName *pFVar2;
  ForElementType<FSetElementId> FVar3;
  TWeakPtr<SDockTab,1> *pTVar4;
  
  uVar1 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar3 = (this->Pairs).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    uVar1 = *(uint *)((longlong)FVar3 +
                     (ulonglong)((this->Pairs).HashSize - 1U & param_1.Number + uVar1) * 4);
    if (uVar1 != 0xffffffff) {
      do {
        pFVar2 = (FName *)((longlong)(int)uVar1 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if (*pFVar2 == param_1) {
          pTVar4 = (TWeakPtr<SDockTab,1> *)0x0;
          if (pFVar2 != (FName *)0x0) {
            pTVar4 = (TWeakPtr<SDockTab,1> *)(pFVar2 + 1);
          }
          return pTVar4;
        }
        uVar1 = pFVar2[3].ComparisonIndex.Value;
      } while (uVar1 != 0xffffffff);
    }
  }
  return (TWeakPtr<SDockTab,1> *)0x0;
}

// Find @ 142e84120

FPaintGeometry * __thiscall
TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
::Find(TMapBase<unsigned___int64,FPaintGeometry,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FPaintGeometry,0>_>
       *this,ulong64 param_1)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  FPaintGeometry *pFVar4;
  ForElementType<FSetElementId> FVar5;
  
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)
                    ((this->Pairs).HashSize - 1U & (int)(param_1 >> 0x20) * 0x17 + (int)param_1) * 4
                    );
    if (iVar3 != -1) {
      lVar2 = *(longlong *)&(this->Pairs).Elements;
      do {
        lVar1 = lVar2 + (longlong)iVar3 * 0x48;
        if (*(ulong64 *)(lVar2 + (longlong)iVar3 * 0x48) == param_1) {
          pFVar4 = (FPaintGeometry *)0x0;
          if (lVar1 != 0) {
            pFVar4 = (FPaintGeometry *)(lVar1 + 8);
          }
          return pFVar4;
        }
        iVar3 = *(int *)(lVar1 + 0x40);
      } while (iVar3 != -1);
    }
  }
  return (FPaintGeometry *)0x0;
}

// FindChecked @ 142e84650

TSharedPtr<FNavigationSimulationWidgetNode,1> * __thiscall
TMapBase<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>_>
::FindChecked(TMapBase<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<SWidget_const_*,TSharedPtr<FNavigationSimulationWidgetNode,1>,0>_>
              *this,SWidget *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TSharedPtr<FNavigationSimulationWidgetNode,1> *pTVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  uint uVar7;
  
  uVar7 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
  if (*(int *)&(this->Pairs).Elements.field_0x8 != *(int *)&(this->Pairs).Elements.field_0x34) {
    FVar5 = (this->Pairs).Hash.SecondaryData;
    if (FVar5 == (ForElementType<FSetElementId>)0x0) {
      FVar5 = (ForElementType<FSetElementId>)&(this->Pairs).Hash;
    }
    iVar3 = *(int *)((longlong)FVar5 +
                    (ulonglong)((this->Pairs).HashSize - 1U & (uVar7 >> 0x10 ^ uVar7)) * 4);
    if (iVar3 != -1) {
      do {
        plVar6 = (longlong *)((longlong)iVar3 * 0x20 + *(longlong *)&(this->Pairs).Elements);
        if ((SWidget *)*plVar6 == param_1) {
          if (plVar6 != (longlong *)0x0) {
            return (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(plVar6 + 1);
          }
          break;
        }
        iVar3 = (int)plVar6[3];
      } while (iVar3 != -1);
    }
  }
  bVar2 = ::FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (!bVar2) {
    return (TSharedPtr<FNavigationSimulationWidgetNode,1> *)&DAT_00000008;
  }
  pcVar1 = (code *)swi(3);
  pTVar4 = (TSharedPtr<FNavigationSimulationWidgetNode,1> *)(*pcVar1)();
  return pTVar4;
}

