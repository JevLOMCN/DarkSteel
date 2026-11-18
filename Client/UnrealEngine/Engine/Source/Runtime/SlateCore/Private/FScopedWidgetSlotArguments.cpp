// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 3

// ~FScopedWidgetSlotArguments @ 14254b2c0

void __thiscall
TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot>::FScopedWidgetSlotArguments::
~FScopedWidgetSlotArguments(FScopedWidgetSlotArguments *this)

{
  int *piVar1;
  FSlot *pFVar2;
  TPanelChildren<UE::Slate::Private::SContainerAttribute::FSlot> *pTVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  int local_res8 [2];
  TUniquePtr<UE::Slate::Private::SContainerAttribute::FSlot,TDefaultDelete<UE::Slate::Private::SContainerAttribute::FSlot>_>
  local_res10;
  FSlot *local_res18 [2];
  FSlot *local_48 [2];
  
  pFVar2 = (FSlot *)this->_padding_;
  if (pFVar2 != (FSlot *)0x0) {
    uVar8 = this->Index;
    pTVar3 = this->Children;
    this->_padding_ = 0;
    if (uVar8 == 0xffffffff) {
      pFVar4 = (pTVar3->Children).AllocatorInstance.Data;
      local_48[0] = pFVar2;
      if (((pFVar4 <= (FScriptContainerElement *)local_48) &&
          ((FScriptContainerElement *)local_48 < pFVar4 + (longlong)(pTVar3->Children).ArrayMax * 8)
          ) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = (pTVar3->Children).ArrayNum;
      piVar1 = &(pTVar3->Children).ArrayMax;
      if (uVar8 == *piVar1) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(pTVar3->Children).AllocatorInstance,piVar1);
      }
      pFVar4 = (pTVar3->Children).AllocatorInstance.Data;
      (pTVar3->Children).ArrayNum = uVar8 + 1;
      *(FSlot **)(pFVar4 + (longlong)(int)uVar8 * 8) = local_48[0];
      local_48[0] = (FSlot *)0x0;
      uVar11 = 0;
      if ((int)uVar8 < (pTVar3->Children).ArrayNum) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Slate::Private::SContainerAttribute::FSlot::Construct
                (*(FSlot **)((pTVar3->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
                 (FChildren *)pTVar3,(FSlotArguments *)this);
      if (local_48[0] != (FSlot *)0x0) {
        (*(code *)**(undefined8 **)local_48[0])(local_48[0],1);
      }
      this->Index = uVar8;
    }
    else {
      local_res10.Ptr = pFVar2;
      TArray<TUniquePtr<UE::Slate::Private::SContainerAttribute::FSlot,TDefaultDelete<UE::Slate::Private::SContainerAttribute::FSlot>_>,TSizedDefaultAllocator<32>_>
      ::Insert(&pTVar3->Children,&local_res10,uVar8);
      uVar11 = 0;
      if ((int)uVar8 < (pTVar3->Children).ArrayNum) {
        uVar11 = ~uVar8 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      UE::Slate::Private::SContainerAttribute::FSlot::Construct
                (*(FSlot **)((pTVar3->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
                 (FChildren *)pTVar3,(FSlotArguments *)this);
      if (local_res10.Ptr != (FSlot *)0x0) {
        (**(code **)(local_res10.Ptr)->_padding_)(local_res10.Ptr,1);
      }
    }
    if (*(void **)&this->Added != (void *)0x0) {
      local_res8[0] = this->Index;
      local_res18[0] = pFVar2;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->Added);
      pcVar6 = *(code **)&this->Added;
      plVar5 = *(longlong **)&(this->Added).field_0x28;
      plVar10 = (longlong *)&(this->Added).field_0x10;
      if (plVar5 != (longlong *)0x0) {
        plVar10 = plVar5;
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      (*pcVar6)(uVar9,local_res18,local_res8);
    }
  }
  if (*(longlong *)&this->Added != 0) {
    plVar5 = *(longlong **)&(this->Added).field_0x28;
    plVar10 = (longlong *)&(this->Added).field_0x10;
    if (plVar5 != (longlong *)0x0) {
      plVar10 = plVar5;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  UE::Slate::Private::SContainerAttribute::FSlot::FSlotArguments::~FSlotArguments
            ((FSlotArguments *)this);
  return;
}

// ~FScopedWidgetSlotArguments<SVerticalBox::FSlot> @ 1425bffb0

void __thiscall
SBoxPanel::FScopedWidgetSlotArguments<SVerticalBox::FSlot>::
~FScopedWidgetSlotArguments<SVerticalBox::FSlot>
          (FScopedWidgetSlotArguments<SVerticalBox::FSlot> *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = &this->_padding_;
  this->_padding_ = (longlong)&___7__FScopedWidgetSlotArguments_VFSlot_SVerticalBox___SBoxPanel__6B_
  ;
  if (this->_padding_ != 0) {
    if (this->Index == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(this->Children,(FSlotArguments *)plVar1);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                (this->Children,(FSlotArguments *)plVar1,this->Index);
    }
  }
  TResizingWidgetSlotMixin<SVerticalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
            ((FSlotArgumentsMixin *)&this->_padding_);
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  puVar2 = (undefined8 *)*plVar1;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return;
}

// ~FScopedWidgetSlotArguments @ 1425c14a0

void __thiscall
TPanelChildren<SOverlay::FOverlaySlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
          (FScopedWidgetSlotArguments *this)

{
  uint uVar1;
  FOverlaySlot *pFVar2;
  TPanelChildren<SOverlay::FOverlaySlot> *this_00;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  int local_res8 [2];
  TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_> local_res10;
  FOverlaySlot *local_res18;
  
  pFVar2 = (FOverlaySlot *)this->_padding_;
  if (pFVar2 != (FOverlaySlot *)0x0) {
    this_00 = this->Children;
    uVar1 = this->Index;
    if (uVar1 == 0xffffffff) {
      iVar7 = TPanelChildren<SOverlay::FOverlaySlot>::AddSlot(this_00,(FSlotArguments *)this);
      this->Index = iVar7;
    }
    else {
      this->_padding_ = 0;
      local_res10.Ptr = pFVar2;
      TArray<TUniquePtr<SOverlay::FOverlaySlot,TDefaultDelete<SOverlay::FOverlaySlot>_>,TSizedDefaultAllocator<32>_>
      ::Insert(&this_00->Children,&local_res10,uVar1);
      uVar10 = 0;
      if ((int)uVar1 < (this_00->Children).ArrayNum) {
        uVar10 = ~uVar1 >> 0x1f;
      }
      if (uVar10 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      SOverlay::FOverlaySlot::Construct
                (*(FOverlaySlot **)
                  ((this_00->Children).AllocatorInstance.Data + (longlong)(int)uVar1 * 8),
                 (FChildren *)this_00,(FSlotArguments *)this);
      if (local_res10.Ptr != (FOverlaySlot *)0x0) {
        (**(code **)(local_res10.Ptr)->_padding_)(local_res10.Ptr,1);
      }
    }
    if (*(void **)&this->Added != (void *)0x0) {
      local_res8[0] = this->Index;
      local_res18 = pFVar2;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->Added);
      pcVar3 = *(code **)&this->Added;
      plVar4 = *(longlong **)&(this->Added).field_0x28;
      plVar9 = (longlong *)&(this->Added).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar9 = plVar4;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      (*pcVar3)(uVar8,&local_res18,local_res8);
    }
  }
  if (*(longlong *)&this->Added != 0) {
    plVar4 = *(longlong **)&(this->Added).field_0x28;
    plVar9 = (longlong *)&(this->Added).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar9 = plVar4;
    }
    (**(code **)(*plVar9 + 0x10))();
  }
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->_padding_);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  puVar5 = (undefined8 *)this->_padding_;
  if (puVar5 != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001425c1636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar5)(puVar5,1);
    return;
  }
  return;
}

