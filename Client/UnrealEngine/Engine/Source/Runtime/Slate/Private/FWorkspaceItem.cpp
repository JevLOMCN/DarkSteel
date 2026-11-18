// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// FWorkspaceItem @ 1426fe660

FWorkspaceItem * __thiscall
FWorkspaceItem::FWorkspaceItem
          (FWorkspaceItem *this,FName *param_1,FText *param_2,FSlateIcon *param_3,bool param_4)

{
  ITextData *pIVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FWorkspaceItem__6B_;
  uVar2 = (param_3->StyleSetName).Number;
  uVar3 = (param_3->StyleName).ComparisonIndex.Value;
  uVar4 = (param_3->StyleName).Number;
  (this->Icon).StyleSetName.ComparisonIndex.Value = (param_3->StyleSetName).ComparisonIndex.Value;
  (this->Icon).StyleSetName.Number = uVar2;
  (this->Icon).StyleName.ComparisonIndex.Value = uVar3;
  (this->Icon).StyleName.Number = uVar4;
  uVar2 = (param_3->SmallStyleName).Number;
  uVar3 = (param_3->StatusOverlayStyleName).ComparisonIndex.Value;
  uVar4 = (param_3->StatusOverlayStyleName).Number;
  (this->Icon).SmallStyleName.ComparisonIndex.Value =
       (param_3->SmallStyleName).ComparisonIndex.Value;
  (this->Icon).SmallStyleName.Number = uVar2;
  (this->Icon).StatusOverlayStyleName.ComparisonIndex.Value = uVar3;
  (this->Icon).StatusOverlayStyleName.Number = uVar4;
  (this->NameAttribute).Value = *param_1;
  (this->NameAttribute).bIsSet = true;
  *(undefined8 *)&(this->NameAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->NameAttribute).Getter = 0;
  *(undefined8 *)&(this->NameAttribute).Getter.field_0x8 = 0;
  (this->DisplayNameAttribute).Value.TextData.Reference = (ITextData *)0x0;
  pIVar1 = (param_2->TextData).Reference;
  (this->DisplayNameAttribute).Value.TextData.Reference = pIVar1;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
  }
  (this->DisplayNameAttribute).Value.Flags = param_2->Flags;
  (this->DisplayNameAttribute).bIsSet = true;
  *(undefined8 *)&(this->DisplayNameAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->DisplayNameAttribute).Getter = 0;
  *(undefined8 *)&(this->DisplayNameAttribute).Getter.field_0x8 = 0;
  FText::FText(&(this->TooltipTextAttribute).Value);
  (this->TooltipTextAttribute).bIsSet = false;
  *(undefined8 *)&(this->TooltipTextAttribute).Getter.field_0x10 = 0;
  *(undefined8 *)&(this->TooltipTextAttribute).Getter = 0;
  *(undefined8 *)&(this->TooltipTextAttribute).Getter.field_0x8 = 0;
  FText::FText(&this->DisplayName);
  FText::FText(&this->TooltipText);
  this->bSortChildren = param_4;
  (this->ChildItems).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChildItems).ArrayNum = 0;
  (this->ChildItems).ArrayMax = 0;
  (this->ParentItem).Object = (FWorkspaceItem *)0x0;
  (this->ParentItem).WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return this;
}

// ~FWorkspaceItem @ 142701bd0

void __thiscall FWorkspaceItem::~FWorkspaceItem(FWorkspaceItem *this)

{
  atomic<int> *paVar1;
  int *piVar2;
  atomic<int> aVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  FScriptContainerElement *pFVar6;
  ITextData *pIVar7;
  void *pvVar8;
  longlong *plVar9;
  
  this->_padding_ = (longlong)&___7FWorkspaceItem__6B_;
  pTVar5 = (this->ParentItem).WeakReferenceCount.ReferenceController;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar3 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar3 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  DestructItems<TSharedRef<FWorkspaceItem,1>,int>
            ((TSharedRef<FWorkspaceItem,1> *)(this->ChildItems).AllocatorInstance.Data,
             (this->ChildItems).ArrayNum);
  pFVar6 = (this->ChildItems).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pIVar7 = (this->TooltipText).TextData.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  pIVar7 = (this->DisplayName).TextData.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->TooltipTextAttribute).Getter);
  pvVar8 = *(void **)&(this->TooltipTextAttribute).Getter.field_0x8;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->TooltipTextAttribute).Getter);
  pIVar7 = (this->TooltipTextAttribute).Value.TextData.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->DisplayNameAttribute).Getter);
  pvVar8 = *(void **)&(this->DisplayNameAttribute).Getter.field_0x8;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->DisplayNameAttribute).Getter);
  pIVar7 = (this->DisplayNameAttribute).Value.TextData.Reference;
  if (pIVar7 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar7 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->NameAttribute).Getter);
  pvVar8 = *(void **)&(this->NameAttribute).Getter.field_0x8;
  if (pvVar8 != (void *)0x0) {
    FMemory::Free(pvVar8);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->NameAttribute).Getter);
  plVar9 = (longlong *)this->_padding_;
  if (plVar9 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar9 + 0xc);
    iVar4 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar4 == 1) {
      (**(code **)(*plVar9 + 8))(plVar9,1);
    }
  }
  return;
}

// AddItem @ 14270ab70

void __thiscall FWorkspaceItem::AddItem(FWorkspaceItem *this,TSharedRef<FWorkspaceItem,1> *param_1)

{
  atomic<int> *paVar1;
  int *piVar2;
  TArray<TSharedRef<FWorkspaceItem,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  atomic<int> aVar4;
  TReferenceControllerBase<1> *pTVar5;
  TReferenceControllerBase<1> *pTVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  atomic<int> aVar10;
  TSharedRef<FWorkspaceItem,1> *pTVar11;
  FScriptContainerElement *pFVar12;
  FWorkspaceItem *pFVar13;
  FWorkspaceItem *pFVar14;
  FWorkspaceItem *pFVar15;
  FWorkspaceItem *pFVar16;
  undefined4 local_res8;
  undefined4 uStackX_c;
  undefined1 local_res10 [8];
  TSharedRef<FWorkspaceItem,1> local_38;
  
  pFVar15 = (FWorkspaceItem *)0x0;
  local_res8 = 0;
  pTVar11 = TSharedFromThis<FWorkspaceItem,1>::AsShared
                      ((TSharedFromThis<FWorkspaceItem,1> *)&this->_padding_,&local_38);
  pTVar5 = (pTVar11->SharedReferenceCount).ReferenceController;
  pFVar13 = pTVar11->Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_38.SharedReferenceCount.ReferenceController);
  pFVar16 = param_1->Object;
  (pFVar16->ParentItem).Object = pFVar13;
  if (pTVar5 != (pFVar16->ParentItem).WeakReferenceCount.ReferenceController) {
    if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar5->WeakReferenceCount = (atomic<int>)((int)pTVar5->WeakReferenceCount + 1);
      UNLOCK();
    }
    pTVar6 = (pFVar16->ParentItem).WeakReferenceCount.ReferenceController;
    if (pTVar6 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &pTVar6->WeakReferenceCount;
      aVar4 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar4 == (atomic<int>)0x1) {
        (**(code **)(pTVar6->_padding_ + 8))(pTVar6,1);
      }
    }
    (pFVar16->ParentItem).WeakReferenceCount.ReferenceController = pTVar5;
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  pTVar3 = &this->ChildItems;
  pTVar11 = (TSharedRef<FWorkspaceItem,1> *)(pTVar3->AllocatorInstance).Data;
  if (((pTVar11 <= param_1) && (param_1 < pTVar11 + (this->ChildItems).ArrayMax)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iVar9 = (this->ChildItems).ArrayNum;
  piVar2 = &(this->ChildItems).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar3->AllocatorInstance,piVar2);
  }
  (this->ChildItems).ArrayNum = iVar9 + 1;
  pFVar12 = (pTVar3->AllocatorInstance).Data + (longlong)iVar9 * 0x10;
  *(FWorkspaceItem **)pFVar12 = param_1->Object;
  pTVar5 = (param_1->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar12 + 8) = pTVar5;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (this->bSortChildren != false) {
    AlgoImpl::
    IntroSortInternal<TSharedRef<FWorkspaceItem,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FWorkspaceItem,1>,FWorkspaceItem::FWorkspaceItemSort>_>
              ((TSharedRef<FWorkspaceItem,1> *)(pTVar3->AllocatorInstance).Data,
               (this->ChildItems).ArrayNum,local_res8._0_1_,(FWorkspaceItemSort *)&local_res8);
  }
  if ((((this->ChildItems).ArrayNum == 1) && ((this->ParentItem).Object != (FWorkspaceItem *)0x0))
     && ((pTVar5 = (this->ParentItem).WeakReferenceCount.ReferenceController,
         pTVar5 != (TReferenceControllerBase<1> *)0x0 && (0 < (int)pTVar5->SharedReferenceCount))))
  {
    pFVar13 = (FWorkspaceItem *)(this->ParentItem).WeakReferenceCount.ReferenceController;
    pFVar16 = pFVar13;
    pFVar14 = pFVar15;
    if (pFVar13 == (FWorkspaceItem *)0x0) {
LAB_14270ad35:
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      pFVar13 = pFVar16;
      if (bVar8) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    else {
      aVar4 = *(atomic<int> *)&pFVar13->_padding_;
      do {
        pFVar16 = pFVar15;
        if (aVar4 == (atomic<int>)0x0) goto LAB_14270ad35;
        LOCK();
        aVar10 = *(atomic<int> *)&pFVar13->_padding_;
        bVar8 = aVar4 == aVar10;
        if (bVar8) {
          *(atomic<int> *)&pFVar13->_padding_ = (atomic<int>)((int)aVar4 + 1);
          aVar10 = aVar4;
        }
        UNLOCK();
        aVar4 = aVar10;
      } while (!bVar8);
      pFVar14 = (this->ParentItem).Object;
      pFVar16 = pFVar13;
      if (pFVar14 == (FWorkspaceItem *)0x0) goto LAB_14270ad35;
    }
    pFVar16 = (FWorkspaceItem *)&DAT_00000001;
    if (pFVar14->bSortChildren == false) goto LAB_14270ad86;
    bVar8 = true;
  }
  else {
    pFVar13 = (FWorkspaceItem *)CONCAT44(uStackX_c,local_res8);
    pFVar16 = pFVar15;
LAB_14270ad86:
    bVar8 = false;
  }
  if (pFVar16 != (FWorkspaceItem *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar13);
  }
  if (!bVar8) {
    return;
  }
  pFVar13 = (FWorkspaceItem *)(this->ParentItem).WeakReferenceCount.ReferenceController;
  pFVar16 = pFVar13;
  if (pFVar13 != (FWorkspaceItem *)0x0) {
    aVar4 = *(atomic<int> *)&pFVar13->_padding_;
    do {
      pFVar16 = pFVar15;
      if (aVar4 == (atomic<int>)0x0) goto LAB_14270adc1;
      LOCK();
      aVar10 = *(atomic<int> *)&pFVar13->_padding_;
      bVar8 = aVar4 == aVar10;
      if (bVar8) {
        *(atomic<int> *)&pFVar13->_padding_ = (atomic<int>)((int)aVar4 + 1);
        aVar10 = aVar4;
      }
      UNLOCK();
      aVar4 = aVar10;
    } while (!bVar8);
    pFVar15 = (this->ParentItem).Object;
    pFVar16 = pFVar13;
    if (pFVar15 != (FWorkspaceItem *)0x0) goto LAB_14270ade7;
  }
LAB_14270adc1:
  bVar8 = ::FDebug::CheckVerifyFailedImpl2
                    ("IsValid()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                     ,0x458,L"");
  pFVar13 = pFVar16;
  if (bVar8) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_14270ade7:
  AlgoImpl::
  IntroSortInternal<TSharedRef<FWorkspaceItem,1>,int,FIdentityFunctor,TDereferenceWrapper<TSharedRef<FWorkspaceItem,1>,FWorkspaceItem::FWorkspaceItemSort>_>
            ((TSharedRef<FWorkspaceItem,1> *)(pFVar15->ChildItems).AllocatorInstance.Data,
             (pFVar15->ChildItems).ArrayNum,local_res8._0_1_,(FWorkspaceItemSort *)local_res10);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)pFVar13);
  return;
}

// AsSpawnerEntry @ 14270dac0

/* WARNING: Enum "Type": Some values do not have unique names */

TSharedPtr<FTabSpawnerEntry,1> * __thiscall
FWorkspaceItem::AsSpawnerEntry
          (FWorkspaceItem *this,TSharedPtr<FTabSpawnerEntry,1> *__return_storage_ptr__)

{
  __return_storage_ptr__->Object = (FTabSpawnerEntry *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// HasChildrenIn @ 142746f10

/* WARNING: Removing unreachable block (ram,0x0001427470bc) */

bool __thiscall
FWorkspaceItem::HasChildrenIn
          (FWorkspaceItem *this,
          TArray<TWeakPtr<FTabSpawnerEntry,1>,TSizedDefaultAllocator<32>_> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  bool bVar4;
  undefined1 uVar5;
  bool bVar6;
  atomic<int> aVar7;
  TReferenceControllerBase<1> *pTVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  TReferenceControllerBase<1> *pTVar12;
  int iVar13;
  TReferenceControllerBase<1> *pTVar14;
  TReferenceControllerBase<1> *pTVar15;
  uint uStackX_c;
  TReferenceControllerBase<1> *local_38;
  TReferenceControllerBase<1> *local_30;
  
  pTVar14 = (TReferenceControllerBase<1> *)0x0;
  (**(code **)this->_padding_)(this,&local_38);
  if (local_38 == (TReferenceControllerBase<1> *)0x0) {
    pTVar15 = (TReferenceControllerBase<1> *)((ulonglong)uStackX_c << 0x20);
    pTVar12 = pTVar14;
  }
  else {
    pTVar12 = local_38;
    if ((local_38 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x408,L""), pTVar12 = local_38, bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pTVar15 = local_30;
    if (local_30 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      local_30->SharedReferenceCount = (atomic<int>)((int)local_30->SharedReferenceCount + 1);
      UNLOCK();
    }
    if ((pTVar12 == (TReferenceControllerBase<1> *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x25d,L""), bVar4)) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return (bool)uVar5;
    }
    pFVar9 = (param_1->AllocatorInstance).Data;
    pFVar10 = pFVar9 + (longlong)param_1->ArrayNum * 0x10;
    for (; pFVar9 != pFVar10; pFVar9 = pFVar9 + 0x10) {
      pTVar1 = *(TReferenceControllerBase<1> **)(pFVar9 + 8);
      pTVar8 = pTVar1;
      pTVar11 = pTVar14;
      if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
        aVar3 = pTVar1->SharedReferenceCount;
        do {
          pTVar8 = pTVar14;
          if (aVar3 == (atomic<int>)0x0) goto LAB_142746ff7;
          LOCK();
          aVar7 = pTVar1->SharedReferenceCount;
          bVar4 = aVar3 == aVar7;
          if (bVar4) {
            pTVar1->SharedReferenceCount = (atomic<int>)((int)aVar3 + 1);
            aVar7 = aVar3;
          }
          UNLOCK();
          aVar3 = aVar7;
        } while (!bVar4);
        pTVar8 = pTVar1;
        pTVar11 = *(TReferenceControllerBase<1> **)pFVar9;
      }
LAB_142746ff7:
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
      if (pTVar12 == pTVar11) {
        bVar4 = true;
        pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000001;
        goto LAB_142747029;
      }
    }
    pTVar12 = (TReferenceControllerBase<1> *)&DAT_00000001;
  }
  bVar4 = false;
LAB_142747029:
  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
  }
  pTVar15 = pTVar14;
  if (bVar4 == false) {
    while (iVar13 = (int)pTVar14, iVar13 < (this->ChildItems).ArrayNum) {
      if ((iVar13 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        uVar5 = (*pcVar2)();
        return (bool)uVar5;
      }
      bVar6 = HasChildrenIn(*(FWorkspaceItem **)
                             ((longlong)&pTVar15->_padding_ +
                             (longlong)(this->ChildItems).AllocatorInstance.Data),param_1);
      if (bVar6) {
        bVar4 = true;
        break;
      }
      pTVar15 = pTVar15 + 1;
      pTVar14 = (TReferenceControllerBase<1> *)(ulonglong)(iVar13 + 1);
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_30);
  return bVar4;
}

