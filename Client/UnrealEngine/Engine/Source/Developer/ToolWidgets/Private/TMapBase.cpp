// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ToolWidgets
// Functions: 5

// Find @ 142da5ff0

EActionButtonType * __thiscall
TMapBase<FName_const_,enum_EActionButtonType,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName_const_,enum_EActionButtonType,0>_>
::Find(void *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  EActionButtonType *pEVar4;
  longlong lVar5;
  
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if (*(int *)((longlong)this + 8) != *(int *)((longlong)this + 0x34)) {
    lVar5 = *(longlong *)((longlong)this + 0x40);
    if (*(longlong *)((longlong)this + 0x40) == 0) {
      lVar5 = (longlong)this + 0x38;
    }
    iVar3 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)((longlong)this + 0x48) - 1U & FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        lVar5 = *(longlong *)this + (longlong)iVar3 * 0x14;
        if (*(FName *)(*(longlong *)this + (longlong)iVar3 * 0x14) == *param_1) {
          pEVar4 = (EActionButtonType *)0x0;
          if (lVar5 != 0) {
            pEVar4 = (EActionButtonType *)(lVar5 + 8);
          }
          return pEVar4;
        }
        iVar3 = *(int *)(lVar5 + 0xc);
      } while (iVar3 != -1);
    }
  }
  return (EActionButtonType *)0x0;
}

// Find @ 142da60a0

TSharedPtr<FText,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedPtr<FText,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FText,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedPtr<FText,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedPtr<FText,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedPtr<FText,1> *pTVar4;
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
          pTVar4 = (TSharedPtr<FText,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedPtr<FText,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedPtr<FText,1> *)0x0;
}

// Find @ 142da6140

TSharedRef<CheckBoxList::FItemPair,1> * __thiscall
TMapBase<ITableRow_const_*,TSharedRef<CheckBoxList::FItemPair,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<CheckBoxList::FItemPair,1>,0>_>
::Find(TMapBase<ITableRow_const_*,TSharedRef<CheckBoxList::FItemPair,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<ITableRow_const_*,TSharedRef<CheckBoxList::FItemPair,1>,0>_>
       *this,ITableRow *param_1)

{
  int iVar1;
  longlong *plVar2;
  ForElementType<FSetElementId> FVar3;
  TSharedRef<CheckBoxList::FItemPair,1> *pTVar4;
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
          pTVar4 = (TSharedRef<CheckBoxList::FItemPair,1> *)0x0;
          if (plVar2 != (longlong *)0x0) {
            pTVar4 = (TSharedRef<CheckBoxList::FItemPair,1> *)(plVar2 + 1);
          }
          return pTVar4;
        }
        iVar1 = (int)plVar2[3];
      } while (iVar1 != -1);
    }
  }
  return (TSharedRef<CheckBoxList::FItemPair,1> *)0x0;
}

// Find @ 142da61e0

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedPtr<FText,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FText,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedPtr<FText,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FText,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedPtr<FText_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedPtr<FText_const_,1> local_18;
  
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
  iVar2 = TSet<TTuple<TSharedPtr<FText,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedPtr<FText,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedPtr<FText_const_,1>_>
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

// Find @ 142da62b0

TSharedRef<ITableRow,1> * __thiscall
TMapBase<TSharedRef<CheckBoxList::FItemPair,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<CheckBoxList::FItemPair,1>,TSharedRef<ITableRow,1>,0>_>
::Find(TMapBase<TSharedRef<CheckBoxList::FItemPair,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<CheckBoxList::FItemPair,1>,TSharedRef<ITableRow,1>,0>_>
       *this,TSharedRef<CheckBoxList::FItemPair_const_,1> *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  TSharedRef<CheckBoxList::FItemPair_const_,1> local_18;
  
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
  iVar2 = TSet<TTuple<TSharedRef<CheckBoxList::FItemPair,1>,TSharedRef<ITableRow,1>_>,TDefaultMapHashableKeyFuncs<TSharedRef<CheckBoxList::FItemPair,1>,TSharedRef<ITableRow,1>,0>,FDefaultSetAllocator>
          ::FindIndexByHash<TSharedRef<CheckBoxList::FItemPair_const_,1>_>
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

