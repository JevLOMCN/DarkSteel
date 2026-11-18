// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 16

// AsTable @ 142f58900

IAccessibleTable * __thiscall
SListView<TSharedPtr<FTestData,1>_>::FSlateAccessibleListView::AsTable
          (FSlateAccessibleListView *this)

{
  IAccessibleTable *pIVar1;
  
  pIVar1 = (IAccessibleTable *)&this->field_0x68;
  if (this == (FSlateAccessibleListView *)0x0) {
    pIVar1 = (IAccessibleTable *)0x0;
  }
  return pIVar1;
}

// AsTable @ 142f58920

IAccessibleTable * __thiscall
SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleListView::AsTable(void *this)

{
  IAccessibleTable *pIVar1;
  
  pIVar1 = (IAccessibleTable *)((longlong)this + 0x68);
  if (this == (void *)0x0) {
    pIVar1 = (IAccessibleTable *)0x0;
  }
  return pIVar1;
}

// CanSupportMultiSelection @ 142f5b930

bool __thiscall
SListView<TSharedPtr<FTestData,1>_>::FSlateAccessibleListView::CanSupportMultiSelection
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
LAB_142f5b9a5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pTVar9 = pTVar8;
  }
  else {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142f5b9a5;
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
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_142f5b9d0;
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
LAB_142f5b9d0:
  pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&pTVar7[0x3e].SharedReferenceCount);
  TVar1 = *pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return TVar1 == Multi;
}

// CanSupportMultiSelection @ 142f5ba10

bool __thiscall
SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleListView::
CanSupportMultiSelection(void *this)

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
  
  if (((*(longlong *)((longlong)this + -0x50) == 0) || (*(longlong *)((longlong)this + -0x48) == 0))
     || (*(int *)(*(longlong *)((longlong)this + -0x48) + 8) < 1)) {
    return false;
  }
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  pTVar9 = *(TReferenceControllerBase<1> **)((longlong)this + -0x48);
  pTVar8 = pTVar9;
  if (pTVar9 == (TReferenceControllerBase<1> *)0x0) {
LAB_142f5ba85:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pTVar9 = pTVar8;
  }
  else {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar3 == (atomic<int>)0x0) goto LAB_142f5ba85;
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
    pTVar7 = *(TReferenceControllerBase<1> **)((longlong)this + -0x50);
    LOCK();
    pTVar9->SharedReferenceCount = (atomic<int>)((int)pTVar9->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_142f5bab0;
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
LAB_142f5bab0:
  pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&pTVar7[0x3e].SharedReferenceCount);
  TVar1 = *pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return TVar1 == Multi;
}

// GetSelectedItems @ 142fd81d0

TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
SListView<TSharedPtr<FTestData,1>_>::FSlateAccessibleListView::GetSelectedItems
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
  TSharedPtr<FTestData_const_,1> local_118;
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
LAB_142fd828f:
    local_res10 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    pTVar20 = pTVar18;
  }
  else {
    aVar5 = pTVar20->SharedReferenceCount;
    do {
      pTVar18 = pTVar15;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142fd828f;
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
    if (local_res10 != 0) goto LAB_142fd82ba;
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
LAB_142fd82ba:
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
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar17) goto LAB_142fd83b1;
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
LAB_142fd83b1:
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
      local_118.Object = (FTestData *)*puVar10;
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
      pTVar9 = TMapBase<TSharedPtr<FTestData,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,TSharedRef<ITableRow,1>,0>_>
               ::Find((TMapBase<TSharedPtr<FTestData,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTestData,1>,TSharedRef<ITableRow,1>,0>_>
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

// GetSelectedItems @ 142fd86a0

TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleListView::GetSelectedItems
          (void *this,
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
  TSharedPtr<ESelectionMode::Type_const_,1> local_118;
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
  if (*(longlong *)((longlong)this + -0x50) == 0) {
    return __return_storage_ptr__;
  }
  if (*(longlong *)((longlong)this + -0x48) == 0) {
    return __return_storage_ptr__;
  }
  if (*(int *)(*(longlong *)((longlong)this + -0x48) + 8) < 1) {
    return __return_storage_ptr__;
  }
  pTVar20 = *(TReferenceControllerBase<1> **)((longlong)this + -0x48);
  pTVar18 = pTVar20;
  if (pTVar20 == (TReferenceControllerBase<1> *)0x0) {
LAB_142fd875f:
    local_res10 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    pTVar20 = pTVar18;
  }
  else {
    aVar5 = pTVar20->SharedReferenceCount;
    do {
      pTVar18 = pTVar15;
      if (aVar5 == (atomic<int>)0x0) goto LAB_142fd875f;
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
    local_res10 = *(longlong *)((longlong)this + -0x50);
    LOCK();
    pTVar20->SharedReferenceCount = (atomic<int>)((int)pTVar20->SharedReferenceCount + 1);
    UNLOCK();
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar20);
    if (local_res10 != 0) goto LAB_142fd878a;
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
LAB_142fd878a:
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
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar17) goto LAB_142fd8881;
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
LAB_142fd8881:
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
      local_118.Object = (Type *)*puVar10;
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
      pTVar9 = TMapBase<TSharedPtr<enum_ESelectionMode::Type,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<enum_ESelectionMode::Type,1>,TSharedRef<ITableRow,1>,0>_>
               ::Find((void *)(local_res10 + 0x598),&local_118);
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

// IsSelectionRequired @ 142fe52d0

bool __thiscall
SListView<TSharedPtr<FTestData,1>_>::FSlateAccessibleListView::IsSelectionRequired
          (FSlateAccessibleListView *this)

{
  return false;
}

// IsSelectionRequired @ 142fe52e0

bool __thiscall
SListView<TSharedPtr<enum_ESelectionMode::Type,1>_>::FSlateAccessibleListView::IsSelectionRequired
          (void *this)

{
  return false;
}

// AsTable @ 14306e940

IAccessibleTable * __thiscall
SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleListView::AsTable
          (FSlateAccessibleListView *this)

{
  IAccessibleTable *pIVar1;
  
  pIVar1 = (IAccessibleTable *)&this->field_0x68;
  if (this == (FSlateAccessibleListView *)0x0) {
    pIVar1 = (IAccessibleTable *)0x0;
  }
  return pIVar1;
}

// AsTable @ 14306e960

IAccessibleTable * __thiscall
SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FSlateAccessibleListView::AsTable
          (FSlateAccessibleListView *this)

{
  IAccessibleTable *pIVar1;
  
  pIVar1 = (IAccessibleTable *)&this->field_0x68;
  if (this == (FSlateAccessibleListView *)0x0) {
    pIVar1 = (IAccessibleTable *)0x0;
  }
  return pIVar1;
}

// CanSupportMultiSelection @ 14306ee20

bool __thiscall
SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleListView::
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
LAB_14306ee95:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    pTVar9 = pTVar8;
  }
  else {
    aVar3 = pTVar9->SharedReferenceCount;
    do {
      pTVar8 = pTVar7;
      if (aVar3 == (atomic<int>)0x0) goto LAB_14306ee95;
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
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) goto LAB_14306eec0;
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
LAB_14306eec0:
  pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&pTVar7[0x3e].SharedReferenceCount);
  TVar1 = *pTVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
  return TVar1 == Multi;
}

// CanSupportMultiSelection @ 14306ef00

bool __thiscall
SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FSlateAccessibleListView::
CanSupportMultiSelection(FSlateAccessibleListView *this)

{
  Type TVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  Type *pTVar6;
  bool bVar7;
  TSharedPtr<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> local_18;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return false;
  }
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  if (local_18.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_18.Object = (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
  }
  else {
    aVar3 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        local_18.Object = (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
        local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_14306ef7d;
      }
      LOCK();
      aVar5 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      bVar7 = aVar3 == aVar5;
      if (bVar7) {
        (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)aVar3 + 1);
        aVar5 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar5;
    } while (!bVar7);
    local_18.Object =
         *(SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> **)&this[-1].field_0x20;
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_14306ef7d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((local_18.Object == (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar7)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  pTVar6 = TAttribute<enum_ESelectionMode::Type>::Get(&(local_18.Object)->_padding_);
  TVar1 = *pTVar6;
  TSharedPtr<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
  ~TSharedPtr<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>(&local_18);
  return TVar1 == Multi;
}

// GetSelectedItems @ 1430cd000

TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleListView::GetSelectedItems
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
  TSharedPtr<FTextStyles::FFontFamily_const_,1> local_118;
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
LAB_1430cd0bf:
    local_res10 = 0;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar18);
    pTVar20 = pTVar18;
  }
  else {
    aVar5 = pTVar20->SharedReferenceCount;
    do {
      pTVar18 = pTVar15;
      if (aVar5 == (atomic<int>)0x0) goto LAB_1430cd0bf;
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
    if (local_res10 != 0) goto LAB_1430cd0ea;
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
LAB_1430cd0ea:
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
      if ((int)(iVar7 + -1 + (iVar7 + -1 >> 0x1f & 0x1fU)) >> 5 < (int)uVar17) goto LAB_1430cd1e1;
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
LAB_1430cd1e1:
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
      local_118.Object = (FFontFamily *)*puVar10;
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
      pTVar9 = TMapBase<TSharedPtr<FTextStyles::FFontFamily,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTextStyles::FFontFamily,1>,TSharedRef<ITableRow,1>,0>_>
               ::Find((TMapBase<TSharedPtr<FTextStyles::FFontFamily,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FTextStyles::FFontFamily,1>,TSharedRef<ITableRow,1>,0>_>
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

// GetSelectedItems @ 1430cd4d0

/* WARNING: Type propagation algorithm not settling */

TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FSlateAccessibleListView::GetSelectedItems
          (FSlateAccessibleListView *this,
          TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  int *piVar1;
  ulonglong uVar2;
  uint uVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  atomic<int> aVar6;
  atomic<int> aVar7;
  int iVar8;
  TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *pTVar9;
  TSharedRef<ITableRow,1> *pTVar10;
  undefined8 *puVar11;
  TSharedPtr<FSlateAccessibleWidget,1> *pTVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ITableRow *pIVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  bool bVar20;
  TSharedPtr<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1> local_128;
  FSlateAccessibleWidget *local_118;
  TReferenceControllerBase<1> *local_110;
  TSharedRef<SDocumentsTest::FDocumentInfo_const_,1> local_108;
  TSharedPtr<SWidget,1> local_f8;
  TSet<TSharedRef<SDocumentsTest::FDocumentInfo,1>,DefaultKeyFuncs<TSharedRef<SDocumentsTest::FDocumentInfo,1>,0>,FDefaultSetAllocator>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  TSet<TSharedRef<SDocumentsTest::FDocumentInfo,1>,DefaultKeyFuncs<TSharedRef<SDocumentsTest::FDocumentInfo,1>,0>,FDefaultSetAllocator>
  *local_c0;
  uint uStack_b8;
  uint uStack_b4;
  undefined1 *local_b0;
  undefined4 uStack_a8;
  uint uStack_a4;
  uint local_a0;
  undefined4 uStack_9c;
  undefined8 local_90;
  TReferenceControllerBase<1> *local_88;
  undefined8 local_80;
  TReferenceControllerBase<1> *local_78;
  undefined1 local_70 [8];
  TReferenceControllerBase<1> *local_68;
  TSharedPtr<FSlateAccessibleWidget,1> local_60 [2];
  undefined4 local_34;
  
  uVar17 = 0;
  piVar1 = &__return_storage_ptr__->ArrayMax;
  uVar18 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  *piVar1 = 0;
  if (((*(longlong *)&this[-1].field_0x20 != 0) && (*(longlong *)&this[-1].field_0x28 != 0)) &&
     (0 < *(int *)(*(longlong *)&this[-1].field_0x28 + 8))) {
    local_128.SharedReferenceCount.ReferenceController =
         *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
    if (local_128.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_128.Object = (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
    }
    else {
      aVar6 = (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          local_128.Object = (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0;
          local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_1430cd57a;
        }
        LOCK();
        aVar7 = (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
        bVar20 = aVar6 == aVar7;
        if (bVar20) {
          (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)((int)aVar6 + 1);
          aVar7 = aVar6;
        }
        UNLOCK();
        aVar6 = aVar7;
      } while (!bVar20);
      local_128.Object =
           *(SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> **)&this[-1].field_0x20;
      LOCK();
      (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
LAB_1430cd57a:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
    if ((local_128.Object == (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    uVar15 = *(int *)&((local_128.Object)->SelectedItems).Elements.field_0x8 -
             *(int *)&((local_128.Object)->SelectedItems).Elements.field_0x34;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    DestructItems<TSharedPtr<IAccessibleWidget,1>,int>
              ((TSharedPtr<IAccessibleWidget,1> *)(__return_storage_ptr__->AllocatorInstance).Data,
               __return_storage_ptr__->ArrayNum);
    __return_storage_ptr__->ArrayNum = 0;
    if (*piVar1 != uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar15,&__return_storage_ptr__->AllocatorInstance,0,piVar1);
    }
    if ((local_128.Object == (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar20)) {
      pcVar5 = (code *)swi(3);
      pTVar9 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)(*pcVar5)();
      return pTVar9;
    }
    local_e8 = &(local_128.Object)->SelectedItems;
    TStack_e0.Array =
         (TBitArray<FDefaultBitArrayAllocator> *)
         &((local_128.Object)->SelectedItems).Elements.field_0x10;
    local_a0 = 0;
    uVar15 = *(uint *)&((local_128.Object)->SelectedItems).Elements.field_0x28;
    uStack_b4 = 1;
    uStack_a4 = uVar17;
    if (uVar15 != 0) {
      puVar19 = *(uint **)&((local_128.Object)->SelectedItems).Elements.field_0x20;
      if (puVar19 == (uint *)0x0) {
        puVar19 = (uint *)TStack_e0.Array;
      }
      uVar3 = *puVar19;
      uVar18 = uVar17;
      local_a0 = uVar17;
      while (uVar3 == 0) {
        lVar13 = (longlong)(int)uVar18;
        local_a0 = local_a0 + 0x20;
        uVar18 = uVar18 + 1;
        uStack_a4 = uVar15;
        if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar18)
        goto LAB_1430cd6c1;
        uVar3 = puVar19[lVar13 + 1];
      }
      uStack_b4 = -uVar3 & uVar3;
      uVar2 = (ulonglong)uStack_b4 * 2 + 1;
      lVar13 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      uStack_a4 = (local_a0 - 1) + (int)lVar13;
      if ((int)uVar15 < (int)uStack_a4) {
        uStack_a4 = uVar15;
      }
    }
LAB_1430cd6c1:
    uStack_a8 = 0xffffffff;
    uStack_9c = local_34;
    TStack_e0._padding_ = CONCAT44(uStack_b4,uVar18);
    TStack_e0.UnvisitedBitMask = 0xffffffff;
    TStack_e0._28_4_ = local_34;
    TStack_e0.BaseBitIndex = local_a0;
    local_c0 = local_e8;
    uStack_b8 = uVar18;
    local_b0 = (undefined1 *)TStack_e0.Array;
    TStack_e0.CurrentBitIndex = uStack_a4;
    if ((int)uStack_a4 < (int)uVar15) {
      do {
        puVar11 = (undefined8 *)
                  (*(longlong *)&local_e8->Elements + (longlong)TStack_e0.CurrentBitIndex * 0x18);
        if ((local_128.Object == (SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_> *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar5)();
          return pTVar9;
        }
        local_108.Object = (FDocumentInfo *)*puVar11;
        pTVar4 = (TReferenceControllerBase<1> *)puVar11[1];
        if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
          LOCK();
          pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_108.SharedReferenceCount.ReferenceController = pTVar4;
        pTVar10 = TMapBase<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<ITableRow,1>,0>_>
                  ::Find((TMapBase<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedRef<SDocumentsTest::FDocumentInfo,1>,TSharedRef<ITableRow,1>,0>_>
                          *)&((local_128.Object)->WidgetGenerator).ItemToWidgetMap,&local_108);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        if (pTVar10 == (TSharedRef<ITableRow,1> *)0x0) {
          uVar17 = uVar17 | 2;
          local_88 = (TReferenceControllerBase<1> *)0x0;
          puVar11 = &local_90;
          pIVar16 = (ITableRow *)0x0;
        }
        else {
          local_78 = (pTVar10->SharedReferenceCount).ReferenceController;
          uVar17 = uVar17 | 1;
          pIVar16 = pTVar10->Object;
          if (local_78 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_78->SharedReferenceCount = (atomic<int>)((int)local_78->SharedReferenceCount + 1);
            UNLOCK();
          }
          puVar11 = &local_80;
        }
        pTVar4 = (TReferenceControllerBase<1> *)puVar11[1];
        puVar11[1] = 0;
        *puVar11 = 0;
        if ((uVar17 & 2) != 0) {
          uVar17 = uVar17 & 0xfffffffd;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_88);
        }
        if ((uVar17 & 1) != 0) {
          uVar17 = uVar17 & 0xfffffffe;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_78);
        }
        if (pIVar16 != (ITableRow *)0x0) {
          puVar11 = (undefined8 *)(**(code **)((longlong)*pIVar16 + 0x58))(pIVar16,local_70);
          local_f8.Object = (SWidget *)*puVar11;
          local_f8.SharedReferenceCount.ReferenceController =
               (TReferenceControllerBase<1> *)puVar11[1];
          if (local_f8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_68);
          pTVar12 = FSlateAccessibleWidgetCache::GetAccessibleWidgetChecked(local_60,&local_f8);
          local_118 = pTVar12->Object;
          local_110 = (pTVar12->SharedReferenceCount).ReferenceController;
          if (local_110 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_110->SharedReferenceCount =
                 (atomic<int>)((int)local_110->SharedReferenceCount + 1);
            UNLOCK();
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_60[0].SharedReferenceCount.ReferenceController);
          if (local_118 != (FSlateAccessibleWidget *)0x0) {
            pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data;
            if (((pFVar14 <= (FScriptContainerElement *)&local_118) &&
                ((FScriptContainerElement *)&local_118 < pFVar14 + (longlong)*piVar1 * 0x10)) &&
               (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar20)) {
              pcVar5 = (code *)swi(3);
              pTVar9 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)
                       (*pcVar5)();
              return pTVar9;
            }
            iVar8 = __return_storage_ptr__->ArrayNum;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x810,&__return_storage_ptr__->AllocatorInstance,piVar1);
            }
            __return_storage_ptr__->ArrayNum = iVar8 + 1;
            pFVar14 = (__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar8 * 0x10;
            *(FSlateAccessibleWidget **)pFVar14 = local_118;
            *(TReferenceControllerBase<1> **)(pFVar14 + 8) = local_110;
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
                    (local_f8.SharedReferenceCount.ReferenceController);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
        TStack_e0.UnvisitedBitMask = TStack_e0.UnvisitedBitMask & ~TStack_e0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e0);
      } while (TStack_e0.CurrentBitIndex < (TStack_e0.Array)->NumBits);
    }
    TSharedPtr<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>::
    ~TSharedPtr<SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>,1>(&local_128);
  }
  return __return_storage_ptr__;
}

// IsSelectionRequired @ 1430d5260

bool __thiscall
SListView<TSharedPtr<FTextStyles::FFontFamily,1>_>::FSlateAccessibleListView::IsSelectionRequired
          (FSlateAccessibleListView *this)

{
  return false;
}

// IsSelectionRequired @ 1430d5270

bool __thiscall
SListView<TSharedRef<SDocumentsTest::FDocumentInfo,1>_>::FSlateAccessibleListView::
IsSelectionRequired(FSlateAccessibleListView *this)

{
  return false;
}

