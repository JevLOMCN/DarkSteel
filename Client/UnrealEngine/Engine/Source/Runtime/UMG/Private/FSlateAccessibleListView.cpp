// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 8

// AsTable @ 1469a28c0

IAccessibleTable * __thiscall
SListView<UObject_*>::FSlateAccessibleListView::AsTable(FSlateAccessibleListView *this)

{
  IAccessibleTable *pIVar1;
  
  pIVar1 = (IAccessibleTable *)&this->field_0x68;
  if (this == (FSlateAccessibleListView *)0x0) {
    pIVar1 = (IAccessibleTable *)0x0;
  }
  return pIVar1;
}

// AsTable @ 1469a28e0

IAccessibleTable * __thiscall
SListView<FName>::FSlateAccessibleListView::AsTable(FSlateAccessibleListView *this)

{
  IAccessibleTable *pIVar1;
  
  pIVar1 = (IAccessibleTable *)&this->field_0x68;
  if (this == (FSlateAccessibleListView *)0x0) {
    pIVar1 = (IAccessibleTable *)0x0;
  }
  return pIVar1;
}

// CanSupportMultiSelection @ 1469a5eb0

bool __thiscall
SListView<UObject_*>::FSlateAccessibleListView::CanSupportMultiSelection
          (FSlateAccessibleListView *this)

{
  Type TVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  Type *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return false;
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar8 = pTVar9;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469a5f25:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pTVar9 = pTVar8;
  }
  else {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469a5f25;
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar10 = aVar3 == aVar5;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar10);
    pTVar7 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469a5f50;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar10) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_1469a5f50:
  pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&pTVar7[0x3e].SharedReferenceCount);
  TVar1 = *pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return TVar1 == Multi;
}

// CanSupportMultiSelection @ 1469a5f90

bool __thiscall
SListView<FName>::FSlateAccessibleListView::CanSupportMultiSelection(FSlateAccessibleListView *this)

{
  Type TVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  Type *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  TReferenceControllerBase<1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  bool bVar10;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return false;
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar8 = pTVar9;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469a6005:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pTVar9 = pTVar8;
  }
  else {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar3 == (atomic<int>)0x0) goto LAB_1469a6005;
      LOCK();
      aVar5 = pTVar9->SharedReferenceCount;
      bVar10 = aVar3 == aVar5;
      if (bVar10) {
        pTVar9->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar10);
    pTVar7 = *(TReferenceControllerBase<1> **)&this[-1].field_0x20;
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_1469a6030;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar10) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
LAB_1469a6030:
  pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&pTVar7[0x3e].SharedReferenceCount);
  TVar1 = *pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return TVar1 == Multi;
}

// GetSelectedItems @ 1469d7980

TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
SListView<UObject_*>::FSlateAccessibleListView::GetSelectedItems
          (FSlateAccessibleListView *this,
          TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  ulonglong uVar2;
  UObject *pUVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  atomic<int> aVar8;
  atomic<int> aVar9;
  int iVar10;
  TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *pTVar11;
  TSharedRef<ITableRow,1> *pTVar12;
  undefined8 *puVar13;
  TSharedPtr<FSlateAccessibleWidget,1> *pTVar14;
  longlong lVar15;
  ITableRow *pIVar16;
  FScriptContainerElement *pFVar17;
  uint uVar18;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  bool bVar20;
  longlong local_res10;
  TReferenceControllerBase<1> *local_res18;
  FSlateAccessibleWidget *local_118;
  TReferenceControllerBase<1> *local_110;
  TSharedPtr<SWidget,1> local_108;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  longlong *local_d0;
  int iStack_c8;
  uint uStack_c4;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined8 local_a0;
  TReferenceControllerBase<1> *local_98;
  undefined8 local_90;
  TReferenceControllerBase<1> *local_88;
  undefined1 local_80 [8];
  TReferenceControllerBase<1> *local_78;
  TSharedPtr<FSlateAccessibleWidget,1> local_70 [2];
  undefined4 local_44;
  
  bVar7 = false;
  bVar6 = false;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  if (*(longlong *)&this[-1].field_0x20 == 0) {
    return __return_storage_ptr__;
  }
  if (*(longlong *)&this[-1].field_0x28 == 0) {
    return __return_storage_ptr__;
  }
  if (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1) {
    return __return_storage_ptr__;
  }
  local_res18 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  if (local_res18 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469d7a49:
    local_res10 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res18)
    ;
  }
  else {
    aVar8 = local_res18->SharedReferenceCount;
    do {
      if (aVar8 == (atomic<int>)0x0) {
        local_res18 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469d7a49;
      }
      LOCK();
      aVar9 = local_res18->SharedReferenceCount;
      bVar20 = aVar8 == aVar9;
      if (bVar20) {
        local_res18->SharedReferenceCount = (atomic<int>)((int)aVar8 + 1);
        aVar9 = aVar8;
      }
      UNLOCK();
      aVar8 = aVar9;
    } while (!bVar20);
    local_res10 = *(longlong *)&this[-1].field_0x20;
    LOCK();
    local_res18->SharedReferenceCount = (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res18)
    ;
    if (local_res10 != 0) goto LAB_1469d7a74;
  }
  bVar20 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar20) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar11;
  }
LAB_1469d7a74:
  uVar18 = *(int *)(local_res10 + 0x820) - *(int *)(local_res10 + 0x84c);
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  DestructItems<TSharedPtr<IAccessibleWidget,1>,int>
            ((TSharedPtr<IAccessibleWidget,1> *)(__return_storage_ptr__->AllocatorInstance).Data,
             __return_storage_ptr__->ArrayNum);
  __return_storage_ptr__->ArrayNum = 0;
  if (*piVar1 != uVar18) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar18,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  if ((local_res10 == 0) &&
     (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar20)) {
    pcVar5 = (code *)swi(3);
    pTVar11 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
    return pTVar11;
  }
  local_f8 = (longlong *)(local_res10 + 0x818);
  iStack_c8 = 0;
  iVar10 = *(int *)(local_res10 + 0x840);
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_res10 + 0x828);
  local_b0 = 0;
  uStack_c4 = 1;
  iStack_b4 = 0;
  if (iVar10 != 0) {
    pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(local_res10 + 0x838);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(local_res10 + 0x838) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = TStack_f0.Array;
    }
    uVar18 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
    while (uVar18 == 0) {
      lVar15 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar10;
      if ((int)(iVar10 + -1 + (iVar10 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_1469d7b70;
      uVar18 = *(uint *)((pTVar19->AllocatorInstance).InlineData + lVar15 * 4 + 4);
    }
    uStack_c4 = -uVar18 & uVar18;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar15 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar15 == 0; lVar15 = lVar15 + -1) {
      }
    }
    iStack_b4 = local_b0 + -1 + (int)lVar15;
    if (iVar10 < iStack_b4) {
      iStack_b4 = iVar10;
    }
  }
LAB_1469d7b70:
  uStack_b8 = 0xffffffff;
  uStack_ac = local_44;
  TStack_f0._padding_ = CONCAT44(uStack_c4,iStack_c8);
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._28_4_ = local_44;
  TStack_f0.BaseBitIndex = local_b0;
  local_d0 = local_f8;
  local_c0 = TStack_f0.Array;
  TStack_f0.CurrentBitIndex = iStack_b4;
  if (iStack_b4 < iVar10) {
    do {
      pUVar3 = *(UObject **)(*local_f8 + (longlong)TStack_f0.CurrentBitIndex * 0x10);
      if ((local_res10 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar20)) {
        pcVar5 = (code *)swi(3);
        pTVar11 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar5)()
        ;
        return pTVar11;
      }
      pTVar12 = TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
                ::Find((TMapBase<UObject_*,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObject_*,TSharedRef<ITableRow,1>,0>_>
                        *)(local_res10 + 0x5a8),pUVar3);
      if (pTVar12 == (TSharedRef<ITableRow,1> *)0x0) {
        bVar6 = true;
        puVar13 = &local_a0;
        pIVar16 = (ITableRow *)0x0;
        local_98 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pIVar16 = pTVar12->Object;
        bVar7 = true;
        local_88 = (pTVar12->SharedReferenceCount).ReferenceController;
        if (local_88 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_88->SharedReferenceCount = (atomic<int>)((int)local_88->SharedReferenceCount + 1);
          UNLOCK();
        }
        puVar13 = &local_90;
      }
      pTVar4 = (TReferenceControllerBase<1> *)puVar13[1];
      puVar13[1] = 0;
      *puVar13 = 0;
      if (bVar6) {
        bVar6 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98);
      }
      if (bVar7) {
        bVar7 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88);
      }
      if (pIVar16 != (ITableRow *)0x0) {
        puVar13 = (undefined8 *)(**(code **)((longlong)*pIVar16 + 0x58))(pIVar16,local_80);
        local_108.Object = (SWidget *)*puVar13;
        local_108.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar13[1];
        if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78);
        pTVar14 = FSlateAccessibleWidgetCache::GetAccessibleWidgetChecked(local_70,&local_108);
        local_118 = pTVar14->Object;
        local_110 = (pTVar14->SharedReferenceCount).ReferenceController;
        if (local_110 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_110->SharedReferenceCount = (atomic<int>)((int)local_110->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70[0].SharedReferenceCount.ReferenceController);
        if (local_118 != (FSlateAccessibleWidget *)0x0) {
          pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar17 <= (FScriptContainerElement *)&local_118) &&
              ((FScriptContainerElement *)&local_118 <
               pFVar17 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
             (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar20)) {
            pcVar5 = (code *)swi(3);
            pTVar11 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)
                      (*pcVar5)();
            return pTVar11;
          }
          iVar10 = __return_storage_ptr__->ArrayNum;
          if (iVar10 == __return_storage_ptr__->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&__return_storage_ptr__->AllocatorInstance,
                                &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar10 + 1;
          pFVar17 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar10 * 0x10;
          *(FSlateAccessibleWidget **)pFVar17 = local_118;
          *(TReferenceControllerBase<1> **)(pFVar17 + 8) = local_110;
          if (local_110 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_110->SharedReferenceCount =
                 (atomic<int>)((int)local_110->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    } while (TStack_f0.CurrentBitIndex < (TStack_f0.Array)->NumBits);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res18);
  return __return_storage_ptr__;
}

// GetSelectedItems @ 1469d7e20

TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
SListView<FName>::FSlateAccessibleListView::GetSelectedItems
          (FSlateAccessibleListView *this,
          TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  ulonglong uVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  atomic<int> aVar7;
  atomic<int> aVar8;
  int iVar9;
  TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *pTVar10;
  TSharedRef<ITableRow,1> *pTVar11;
  undefined8 *puVar12;
  TSharedPtr<FSlateAccessibleWidget,1> *pTVar13;
  longlong lVar14;
  ITableRow *pIVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar18;
  bool bVar19;
  longlong local_res10;
  TReferenceControllerBase<1> *local_res18;
  FSlateAccessibleWidget *local_118;
  TReferenceControllerBase<1> *local_110;
  TSharedPtr<SWidget,1> local_108;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  longlong *local_d0;
  int iStack_c8;
  uint uStack_c4;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
  undefined4 uStack_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined8 local_a0;
  TReferenceControllerBase<1> *local_98;
  undefined8 local_90;
  TReferenceControllerBase<1> *local_88;
  undefined1 local_80 [8];
  TReferenceControllerBase<1> *local_78;
  TSharedPtr<FSlateAccessibleWidget,1> local_70 [2];
  undefined4 local_44;
  
  bVar6 = false;
  bVar5 = false;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  __return_storage_ptr__->ArrayNum = 0;
  if (*(longlong *)&this[-1].field_0x20 == 0) {
    return __return_storage_ptr__;
  }
  if (*(longlong *)&this[-1].field_0x28 == 0) {
    return __return_storage_ptr__;
  }
  if (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1) {
    return __return_storage_ptr__;
  }
  local_res18 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  if (local_res18 == (TReferenceControllerBase<1> *)0x0) {
LAB_1469d7ee9:
    local_res10 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res18)
    ;
  }
  else {
    aVar7 = local_res18->SharedReferenceCount;
    do {
      if (aVar7 == (atomic<int>)0x0) {
        local_res18 = (TReferenceControllerBase<1> *)0x0;
        goto LAB_1469d7ee9;
      }
      LOCK();
      aVar8 = local_res18->SharedReferenceCount;
      bVar19 = aVar7 == aVar8;
      if (bVar19) {
        local_res18->SharedReferenceCount = (atomic<int>)((int)aVar7 + 1);
        aVar8 = aVar7;
      }
      UNLOCK();
      aVar7 = aVar8;
    } while (!bVar19);
    local_res10 = *(longlong *)&this[-1].field_0x20;
    LOCK();
    local_res18->SharedReferenceCount = (atomic<int>)((int)local_res18->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res18)
    ;
    if (local_res10 != 0) goto LAB_1469d7f14;
  }
  bVar19 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar19) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar10;
  }
LAB_1469d7f14:
  uVar17 = *(int *)(local_res10 + 0x810) - *(int *)(local_res10 + 0x83c);
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  DestructItems<TSharedPtr<IAccessibleWidget,1>,int>
            ((TSharedPtr<IAccessibleWidget,1> *)(__return_storage_ptr__->AllocatorInstance).Data,
             __return_storage_ptr__->ArrayNum);
  __return_storage_ptr__->ArrayNum = 0;
  if (*piVar1 != uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar17,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  if ((local_res10 == 0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar19)) {
    pcVar4 = (code *)swi(3);
    pTVar10 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar10;
  }
  local_f8 = (longlong *)(local_res10 + 0x808);
  iStack_c8 = 0;
  iVar9 = *(int *)(local_res10 + 0x830);
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_res10 + 0x818);
  local_b0 = 0;
  uStack_c4 = 1;
  iStack_b4 = 0;
  if (iVar9 != 0) {
    pTVar18 = *(TBitArray<FDefaultBitArrayAllocator> **)(local_res10 + 0x828);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(local_res10 + 0x828) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar18 = TStack_f0.Array;
    }
    uVar17 = *(uint *)(pTVar18->AllocatorInstance).InlineData;
    while (uVar17 == 0) {
      lVar14 = (longlong)iStack_c8;
      local_b0 = local_b0 + 0x20;
      iStack_c8 = iStack_c8 + 1;
      iStack_b4 = iVar9;
      if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_c8) goto LAB_1469d800f;
      uVar17 = *(uint *)((pTVar18->AllocatorInstance).InlineData + lVar14 * 4 + 4);
    }
    uStack_c4 = -uVar17 & uVar17;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iStack_b4 = local_b0 + -1 + (int)lVar14;
    if (iVar9 < iStack_b4) {
      iStack_b4 = iVar9;
    }
  }
LAB_1469d800f:
  uStack_b8 = 0xffffffff;
  uStack_ac = local_44;
  TStack_f0._padding_ = CONCAT44(uStack_c4,iStack_c8);
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._28_4_ = local_44;
  TStack_f0.BaseBitIndex = local_b0;
  local_d0 = local_f8;
  local_c0 = TStack_f0.Array;
  TStack_f0.CurrentBitIndex = iStack_b4;
  if (iStack_b4 < iVar9) {
    do {
      iVar9 = TStack_f0.CurrentBitIndex;
      lVar14 = *local_f8;
      if ((local_res10 == 0) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar19)) {
        pcVar4 = (code *)swi(3);
        pTVar10 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)()
        ;
        return pTVar10;
      }
      pTVar11 = TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
                ::Find((TMapBase<FName,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,TSharedRef<ITableRow,1>,0>_>
                        *)(local_res10 + 0x598),*(FName *)(lVar14 + (longlong)iVar9 * 0x10));
      if (pTVar11 == (TSharedRef<ITableRow,1> *)0x0) {
        bVar5 = true;
        puVar12 = &local_a0;
        pIVar15 = (ITableRow *)0x0;
        local_98 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        pIVar15 = pTVar11->Object;
        bVar6 = true;
        local_88 = (pTVar11->SharedReferenceCount).ReferenceController;
        if (local_88 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_88->SharedReferenceCount = (atomic<int>)((int)local_88->SharedReferenceCount + 1);
          UNLOCK();
        }
        puVar12 = &local_90;
      }
      pTVar3 = (TReferenceControllerBase<1> *)puVar12[1];
      puVar12[1] = 0;
      *puVar12 = 0;
      if (bVar5) {
        bVar5 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98);
      }
      if (bVar6) {
        bVar6 = false;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88);
      }
      if (pIVar15 != (ITableRow *)0x0) {
        puVar12 = (undefined8 *)(**(code **)((longlong)*pIVar15 + 0x58))(pIVar15,local_80);
        local_108.Object = (SWidget *)*puVar12;
        local_108.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar12[1];
        if (local_108.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_108.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_78);
        pTVar13 = FSlateAccessibleWidgetCache::GetAccessibleWidgetChecked(local_70,&local_108);
        local_118 = pTVar13->Object;
        local_110 = (pTVar13->SharedReferenceCount).ReferenceController;
        if (local_110 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_110->SharedReferenceCount = (atomic<int>)((int)local_110->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70[0].SharedReferenceCount.ReferenceController);
        if (local_118 != (FSlateAccessibleWidget *)0x0) {
          pFVar16 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar16 <= (FScriptContainerElement *)&local_118) &&
              ((FScriptContainerElement *)&local_118 <
               pFVar16 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar4 = (code *)swi(3);
            pTVar10 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)
                      (*pcVar4)();
            return pTVar10;
          }
          iVar9 = __return_storage_ptr__->ArrayNum;
          if (iVar9 == __return_storage_ptr__->ArrayMax) {
            iVar9 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar9 + 1;
          pFVar16 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
          *(FSlateAccessibleWidget **)pFVar16 = local_118;
          *(TReferenceControllerBase<1> **)(pFVar16 + 8) = local_110;
          if (local_110 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_110->SharedReferenceCount =
                 (atomic<int>)((int)local_110->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_110);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    } while (TStack_f0.CurrentBitIndex < (TStack_f0.Array)->NumBits);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_res18);
  return __return_storage_ptr__;
}

// IsSelectionRequired @ 1469e37f0

bool __thiscall
SListView<UObject_*>::FSlateAccessibleListView::IsSelectionRequired(FSlateAccessibleListView *this)

{
  return false;
}

// IsSelectionRequired @ 1469e3800

bool __thiscall
SListView<FName>::FSlateAccessibleListView::IsSelectionRequired(FSlateAccessibleListView *this)

{
  return false;
}

