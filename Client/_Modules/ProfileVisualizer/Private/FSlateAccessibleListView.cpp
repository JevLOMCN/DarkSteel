// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProfileVisualizer
// Functions: 4

// AsTable @ 148d5d670

IAccessibleTable * __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::FSlateAccessibleListView::AsTable
          (FSlateAccessibleListView *this)

{
  IAccessibleTable *pIVar1;
  
  pIVar1 = (IAccessibleTable *)&this->field_0x68;
  if (this == (FSlateAccessibleListView *)0x0) {
    pIVar1 = (IAccessibleTable *)0x0;
  }
  return pIVar1;
}

// CanSupportMultiSelection @ 148d5d7e0

bool __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::FSlateAccessibleListView::CanSupportMultiSelection
          (FSlateAccessibleListView *this)

{
  Type TVar1;
  code *pcVar2;
  atomic<int> aVar3;
  undefined1 uVar4;
  atomic<int> aVar5;
  Type *pTVar6;
  bool bVar7;
  TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> local_18;
  
  if (((*(longlong *)&this[-1].field_0x20 == 0) || (*(longlong *)&this[-1].field_0x28 == 0)) ||
     (*(int *)(*(longlong *)&this[-1].field_0x28 + 8) < 1)) {
    return false;
  }
  local_18.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)&this[-1].field_0x28;
  if (local_18.SharedReferenceCount.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
    local_18.Object = (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
  }
  else {
    aVar3 = (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
    do {
      if (aVar3 == (atomic<int>)0x0) {
        local_18.Object = (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
        local_18.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        goto LAB_148d5d85d;
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
    local_18.Object = *(SListView<TSharedPtr<FVisualizerEvent,1>_> **)&this[-1].field_0x20;
    LOCK();
    (local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_18.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
LAB_148d5d85d:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_18.SharedReferenceCount.ReferenceController);
  if ((local_18.Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
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
  TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>::
  ~TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_18);
  return TVar1 == Multi;
}

// GetSelectedItems @ 148d7cc30

/* WARNING: Type propagation algorithm not settling */

TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> * __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::FSlateAccessibleListView::GetSelectedItems
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
  TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1> local_128;
  FSlateAccessibleWidget *local_118;
  TReferenceControllerBase<1> *local_110;
  TSharedPtr<FVisualizerEvent_const_,1> local_108;
  TSharedPtr<SWidget,1> local_f8;
  TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
  *local_e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e0;
  TSet<TSharedPtr<FVisualizerEvent,1>,DefaultKeyFuncs<TSharedPtr<FVisualizerEvent,1>,0>,FDefaultSetAllocator>
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
      local_128.Object = (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
    }
    else {
      aVar6 = (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount;
      do {
        if (aVar6 == (atomic<int>)0x0) {
          local_128.Object = (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0;
          local_128.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
          goto LAB_148d7ccda;
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
      local_128.Object = *(SListView<TSharedPtr<FVisualizerEvent,1>_> **)&this[-1].field_0x20;
      LOCK();
      (local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
           (atomic<int>)
           ((int)(local_128.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
LAB_148d7ccda:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
    if ((local_128.Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
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
    if ((local_128.Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
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
        goto LAB_148d7ce21;
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
LAB_148d7ce21:
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
        if ((local_128.Object == (SListView<TSharedPtr<FVisualizerEvent,1>_> *)0x0) &&
           (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar20)) {
          pcVar5 = (code *)swi(3);
          pTVar9 = (TArray<TSharedPtr<IAccessibleWidget,1>,TSizedDefaultAllocator<32>_> *)
                   (*pcVar5)();
          return pTVar9;
        }
        local_108.Object = (FVisualizerEvent *)*puVar11;
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
        pTVar10 = TMapBase<TSharedPtr<FVisualizerEvent,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedRef<ITableRow,1>,0>_>
                  ::Find((TMapBase<TSharedPtr<FVisualizerEvent,1>,TSharedRef<ITableRow,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TSharedPtr<FVisualizerEvent,1>,TSharedRef<ITableRow,1>,0>_>
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
    TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>::
    ~TSharedPtr<SListView<TSharedPtr<FVisualizerEvent,1>_>,1>(&local_128);
  }
  return __return_storage_ptr__;
}

// IsSelectionRequired @ 148d801a0

bool __thiscall
SListView<TSharedPtr<FVisualizerEvent,1>_>::FSlateAccessibleListView::IsSelectionRequired
          (FSlateAccessibleListView *this)

{
  return false;
}

