// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TranslationEditor
// Functions: 4

// AsTable @ 146b9ca10

IAccessibleTable * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::FSlateAccessibleListView::AsTable
          (FSlateAccessibleListView *this)

{
  IAccessibleTable *pIVar1;
  
  pIVar1 = (IAccessibleTable *)&this->field_0x68;
  if (this == (FSlateAccessibleListView *)0x0) {
    pIVar1 = (IAccessibleTable *)0x0;
  }
  return pIVar1;
}

// CanSupportMultiSelection @ 146b9d160

bool __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::FSlateAccessibleListView::
CanSupportMultiSelection(FSlateAccessibleListView *this)

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
LAB_146b9d1d5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pTVar9 = pTVar8;
  }
  else {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar3 == (atomic<int>)0x0) goto LAB_146b9d1d5;
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
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_146b9d200;
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
LAB_146b9d200:
  pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&pTVar7[0x3e].SharedReferenceCount);
  TVar1 = *pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return TVar1 == Multi;
}

// GetSelectedItems @ 146bafe50

/* WARNING: Enum "Type": Some values do not have unique names */

TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::FSlateAccessibleListView::GetSelectedItems
          (FSlateAccessibleListView *this,
          TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  ulonglong uVar2;
  longlong lVar3;
  code *pcVar4;
  atomic<int> aVar5;
  atomic<int> aVar6;
  int iVar7;
  TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *pTVar8;
  TSharedRef<ITableRow,1> *pTVar9;
  undefined8 *puVar10;
  TSharedPtr<FSlateAccessibleWidget,1> *pTVar11;
  ITableRow *pIVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  TReferenceControllerBase<1> *pTVar15;
  int iVar16;
  uint uVar17;
  TBitArray<FDefaultBitArrayAllocator> *pTVar19;
  TReferenceControllerBase<1> *pTVar20;
  bool bVar21;
  longlong local_res10;
  FSlateAccessibleWidget *local_128;
  TReferenceControllerBase<1> *local_120;
  TSharedPtr<FTranslationPickerTextItem_const_,1> local_118;
  TSharedPtr<SWidget,1> local_108;
  longlong *local_f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f0;
  longlong *local_d0;
  uint uStack_c8;
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
  TReferenceControllerBase<1> *pTVar18;
  
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  uVar17 = 0;
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
  pTVar20 = *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  pTVar18 = pTVar20;
  if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
LAB_146baff0f:
    local_res10 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    pTVar20 = pTVar18;
  }
  else {
    aVar5 = pTVar20->SharedReferenceCount;
    do {
      pTVar18 = pTVar15;
      if (aVar5 == (atomic<int>)0x0) goto LAB_146baff0f;
      LOCK();
      aVar6 = pTVar20->SharedReferenceCount;
      bVar21 = aVar5 == aVar6;
      if (bVar21) {
        pTVar20->SharedReferenceCount = (atomic<int>)((int)aVar5 + 1);
        aVar6 = aVar5;
      }
      UNLOCK();
      aVar5 = aVar6;
    } while (!bVar21);
    local_res10 = *(longlong *)&this[-1].field_0x20;
    LOCK();
    pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    if (local_res10 != 0) goto LAB_146baff3a;
  }
  bVar21 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsValid()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                      ,0x458,L"");
  if (bVar21) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
LAB_146baff3a:
  uVar14 = *(int *)(local_res10 + 0x810) - *(int *)(local_res10 + 0x83c);
  if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
  }
  DestructItems<TSharedPtr<IAccessibleWidget,1>,int>
            ((TSharedPtr<IAccessibleWidget,1> *)(__return_storage_ptr__->AllocatorInstance).Data,
             __return_storage_ptr__->ArrayNum);
  __return_storage_ptr__->ArrayNum = 0;
  if (*piVar1 != uVar14) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar14,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
  }
  if ((local_res10 == 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar21)) {
    pcVar4 = (code *)swi(3);
    pTVar8 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar8;
  }
  local_f8 = (longlong *)(local_res10 + 0x808);
  iVar7 = *(int *)(local_res10 + 0x830);
  TStack_f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_res10 + 0x818);
  local_b0 = 0;
  uStack_c4 = 1;
  iStack_b4 = 0;
  if (iVar7 != 0) {
    pTVar19 = *(TBitArray<FDefaultBitArrayAllocator> **)(local_res10 + 0x828);
    if (*(TBitArray<FDefaultBitArrayAllocator> **)(local_res10 + 0x828) ==
        (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
      pTVar19 = TStack_f0.Array;
    }
    uVar14 = *(uint *)(pTVar19->AllocatorInstance).InlineData;
    pTVar18 = pTVar15;
    uVar17 = 0;
    while (uVar14 == 0) {
      iVar16 = (int)pTVar18;
      local_b0 = local_b0 + 0x20;
      uVar17 = iVar16 + 1;
      pTVar18 = (TReferenceControllerBase<1> *)(ulonglong)uVar17;
      iStack_b4 = iVar7;
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar17) goto LAB_146bb0031;
      uVar14 = *(uint *)((pTVar19->AllocatorInstance).InlineData + (longlong)iVar16 * 4 + 4);
    }
    uStack_c4 = -uVar14 & uVar14;
    uVar2 = (ulonglong)uStack_c4 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iStack_b4 = local_b0 + -1 + (int)lVar3;
    if (iVar7 < iStack_b4) {
      iStack_b4 = iVar7;
    }
  }
LAB_146bb0031:
  uStack_b8 = 0xffffffff;
  uStack_ac = local_44;
  TStack_f0._padding_ = CONCAT44(uStack_c4,uVar17);
  TStack_f0.UnvisitedBitMask = 0xffffffff;
  TStack_f0._28_4_ = local_44;
  TStack_f0.BaseBitIndex = local_b0;
  local_d0 = local_f8;
  uStack_c8 = uVar17;
  local_c0 = TStack_f0.Array;
  TStack_f0.CurrentBitIndex = iStack_b4;
  if (iStack_b4 < iVar7) {
    do {
      puVar10 = (undefined8 *)(*local_f8 + (longlong)TStack_f0.CurrentBitIndex * 0x18);
      if ((local_res10 == 0) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar21)) {
        pcVar4 = (code *)swi(3);
        pTVar8 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
        return pTVar8;
      }
      local_118.Object = (FTranslationPickerTextItem *)*puVar10;
      pTVar18 = (TReferenceControllerBase<1> *)puVar10[1];
      if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_118.SharedReferenceCount.ReferenceController = pTVar18;
      pTVar9 = TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
               ::Find((TMapBase<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTranslationPickerTextItem,1>,TSharedRef<ITableRow,1>,0>_>
                       *)(local_res10 + 0x598),&local_118);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
      if (pTVar9 == (TSharedRef<ITableRow,1> *)0x0) {
        uVar17 = (uint)pTVar15 | 2;
        puVar10 = &local_a0;
        pIVar12 = (ITableRow *)0x0;
        local_98 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        local_88 = (pTVar9->SharedReferenceCount).ReferenceController;
        uVar17 = (uint)pTVar15 | 1;
        pIVar12 = pTVar9->Object;
        if (local_88 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_88->SharedReferenceCount = (atomic<int>)((int)local_88->SharedReferenceCount + 1);
          UNLOCK();
        }
        puVar10 = &local_90;
      }
      pTVar18 = (TReferenceControllerBase<1> *)puVar10[1];
      puVar10[1] = 0;
      *puVar10 = 0;
      if ((uVar17 & 2) != 0) {
        uVar17 = uVar17 & 0xfffffffd;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_98);
      }
      if ((uVar17 & 1) != 0) {
        uVar17 = uVar17 & 0xfffffffe;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_88);
      }
      pTVar15 = (TReferenceControllerBase<1> *)(ulonglong)uVar17;
      if (pIVar12 != (ITableRow *)0x0) {
        puVar10 = (undefined8 *)(**(code **)((longlong)*pIVar12 + 0x58))(pIVar12,local_80);
        local_108.Object = (SWidget *)*puVar10;
        local_108.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar10[1];
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
        pTVar11 = FSlateAccessibleWidgetCache::GetAccessibleWidgetChecked(local_70,&local_108);
        local_128 = pTVar11->Object;
        local_120 = (pTVar11->SharedReferenceCount).ReferenceController;
        if (local_120 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          local_120->SharedReferenceCount = (atomic<int>)((int)local_120->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_70[0].SharedReferenceCount.ReferenceController);
        if (local_128 != (FSlateAccessibleWidget *)0x0) {
          pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data;
          if (((pFVar13 <= (FScriptContainerElement *)&local_128) &&
              ((FScriptContainerElement *)&local_128 <
               pFVar13 + (longlong)__return_storage_ptr__->ArrayMax * 0x10)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)
                     (*pcVar4)();
            return pTVar8;
          }
          iVar7 = __return_storage_ptr__->ArrayNum;
          if (iVar7 == __return_storage_ptr__->ArrayMax) {
            iVar7 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x810,&__return_storage_ptr__->AllocatorInstance,
                               &__return_storage_ptr__->ArrayMax);
          }
          __return_storage_ptr__->ArrayNum = iVar7 + 1;
          pFVar13 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
          *(FSlateAccessibleWidget **)pFVar13 = local_128;
          *(TReferenceControllerBase<1> **)(pFVar13 + 8) = local_120;
          if (local_120 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_120->SharedReferenceCount =
                 (atomic<int>)((int)local_120->SharedReferenceCount + 1);
            UNLOCK();
          }
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_120);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108.SharedReferenceCount.ReferenceController);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
      TStack_f0.UnvisitedBitMask = TStack_f0.UnvisitedBitMask & ~TStack_f0._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f0);
    } while (TStack_f0.CurrentBitIndex < (TStack_f0.Array)->NumBits);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
  return __return_storage_ptr__;
}

// IsSelectionRequired @ 146bb30d0

bool __thiscall
SListView<TSharedPtr<FTranslationPickerTextItem,1>_>::FSlateAccessibleListView::IsSelectionRequired
          (FSlateAccessibleListView *this)

{
  return false;
}

