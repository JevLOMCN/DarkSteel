// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeDeveloper
// Functions: 7

// FindOrAddImpl<FObjectKey> @ 14d706980

FStateExpansionState * __thiscall
TMapBase<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState,0>_>
::FindOrAddImpl<FObjectKey>
          (TMapBase<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState,0>_>
           *this,uint param_1,FObjectKey *param_2)

{
  int iVar1;
  longlong lVar2;
  int local_res8 [2];
  FObjectKey *local_res20;
  
  iVar1 = TSet<TTuple<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState,0>,FDefaultSetAllocator>
          ::FindIndexByHash<FObjectKey>(&this->Pairs,param_1,param_2);
  if ((iVar1 != -1) &&
     (lVar2 = (longlong)iVar1 * 0x60 + *(longlong *)&(this->Pairs).Elements, lVar2 != 0)) {
    return (FStateExpansionState *)(lVar2 + 8);
  }
  local_res20 = param_2;
  TSet<TTuple<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState>,TDefaultMapHashableKeyFuncs<FObjectKey,UE::StateTree::SCompactTreeView::FStateExpansionState,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<FObjectKey_&&>_>
            (&this->Pairs,(uint)local_res8,(TKeyInitializer<FObjectKey_&&> *)(ulonglong)param_1,
             (bool *)&local_res20);
  return (FStateExpansionState *)
         (*(longlong *)&(this->Pairs).Elements + 8 + (longlong)local_res8[0] * 0x60);
}

// Find @ 14d728d10

TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *pTVar4;
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
          pTVar4 = (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1> *)0x0;
}

// Find @ 14d728db0

TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *pTVar4;
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
          pTVar4 = (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1> *)0x0;
}

// Find @ 14d728e50

FSparseItemInfo * __thiscall
TMapBase<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo,0>_>
::Find(TMapBase<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo,0>_>
       *this,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement_const_,1> *param_1)

{
  int iVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement_const_,1> local_18;
  
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
  iVar1 = TSet<TTuple<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement_const_,1>_>
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

// Find @ 14d728f20

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement_const_,1> local_18;
  
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
  iVar2 = TSet<TTuple<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<UE::StateTreeDebugger::FFrameEventTreeElement_const_,1>_>
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

// Find @ 14d728ff0

FSparseItemInfo * __thiscall
TMapBase<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,FSparseItemInfo,0>_>
::Find(TMapBase<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,FSparseItemInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,FSparseItemInfo,0>_>
       *this,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem_const_,1> *param_1)

{
  int iVar1;
  uint uVar2;
  TReferenceControllerBase<1> *pTVar3;
  longlong lVar4;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem_const_,1> local_18;
  
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
  iVar1 = TSet<TTuple<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,FSparseItemInfo>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,FSparseItemInfo,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem_const_,1>_>
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

// Find @ 14d7290c0

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem_const_,1> local_18;
  
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
  iVar2 = TSet<TTuple<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<UE::StateTree::SCompactTreeView::FStateItem_const_,1>_>
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

