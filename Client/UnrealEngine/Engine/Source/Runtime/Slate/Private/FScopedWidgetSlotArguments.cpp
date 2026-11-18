// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 5

// ~FScopedWidgetSlotArguments @ 142700f40

void __thiscall
TPanelChildren<SSplitter::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
          (FScopedWidgetSlotArguments *this)

{
  int *piVar1;
  longlong lVar2;
  TPanelChildren<SSplitter::FSlot> *this_00;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  int local_res8 [2];
  longlong local_res10;
  undefined8 *local_38 [2];
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    this_00 = this->Children;
    if (this->Index == -1) {
      this->_padding_ = 0;
      pFVar3 = (this_00->Children).AllocatorInstance.Data;
      local_38[0] = (undefined8 *)lVar2;
      if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)(this_00->Children).ArrayMax * 8
          )) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar7 = (this_00->Children).ArrayNum;
      piVar1 = &(this_00->Children).ArrayMax;
      if (uVar7 == *piVar1) {
        uVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this_00->Children).AllocatorInstance,piVar1);
      }
      pFVar3 = (this_00->Children).AllocatorInstance.Data;
      (this_00->Children).ArrayNum = uVar7 + 1;
      *(undefined8 **)(pFVar3 + (longlong)(int)uVar7 * 8) = local_38[0];
      local_38[0] = (undefined8 *)0x0;
      uVar10 = 0;
      if ((int)uVar7 < (this_00->Children).ArrayNum) {
        uVar10 = ~uVar7 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      SSplitter::FSlot::Construct
                (*(FSlot **)((this_00->Children).AllocatorInstance.Data + (longlong)(int)uVar7 * 8),
                 (FChildren *)this_00,(FSlotArguments *)this);
      if (local_38[0] != (undefined8 *)0x0) {
        (**(code **)*local_38[0])(local_38[0],1);
      }
      this->Index = uVar7;
    }
    else {
      TPanelChildren<SSplitter::FSlot>::InsertSlot(this_00,(FSlotArguments *)this,this->Index);
    }
    if (*(void **)&this->Added != (void *)0x0) {
      local_res8[0] = this->Index;
      local_res10 = lVar2;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->Added);
      pcVar5 = *(code **)&this->Added;
      plVar4 = *(longlong **)&(this->Added).field_0x28;
      plVar9 = (longlong *)&(this->Added).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar9 = plVar4;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      (*pcVar5)(uVar8,&local_res10,local_res8);
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
  SSplitter::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)this);
  return;
}

// ~FScopedWidgetSlotArguments<SHorizontalBox::FSlot> @ 1427b66a0

void __thiscall
SBoxPanel::FScopedWidgetSlotArguments<SHorizontalBox::FSlot>::
~FScopedWidgetSlotArguments<SHorizontalBox::FSlot>
          (FScopedWidgetSlotArguments<SHorizontalBox::FSlot> *this)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = &this->_padding_;
  this->_padding_ =
       (longlong)&___7__FScopedWidgetSlotArguments_VFSlot_SHorizontalBox___SBoxPanel__6B_;
  if (this->_padding_ != 0) {
    if (this->Index == -1) {
      TPanelChildren<SBoxPanel::FSlot>::AddSlot(this->Children,(FSlotArguments *)plVar1);
    }
    else {
      TPanelChildren<SBoxPanel::FSlot>::InsertSlot
                (this->Children,(FSlotArguments *)plVar1,this->Index);
    }
  }
  TResizingWidgetSlotMixin<SHorizontalBox::FSlot>::FSlotArgumentsMixin::~FSlotArgumentsMixin
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

// ~FScopedWidgetSlotArguments @ 1427b9670

void __thiscall
TPanelChildren<SUniformWrapPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
          (FScopedWidgetSlotArguments *this)

{
  int *piVar1;
  longlong lVar2;
  TPanelChildren<SUniformWrapPanel::FSlot> *this_00;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong *plVar10;
  uint uVar11;
  int local_res8 [2];
  longlong local_res10;
  undefined8 *local_38 [2];
  
  lVar2 = this->_padding_;
  if (lVar2 != 0) {
    this_00 = this->Children;
    if (this->Index == -1) {
      this->_padding_ = 0;
      pFVar3 = (this_00->Children).AllocatorInstance.Data;
      local_38[0] = (undefined8 *)lVar2;
      if (((pFVar3 <= (FScriptContainerElement *)local_38) &&
          ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)(this_00->Children).ArrayMax * 8
          )) && (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar8 = (this_00->Children).ArrayNum;
      piVar1 = &(this_00->Children).ArrayMax;
      if (uVar8 == *piVar1) {
        uVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&(this_00->Children).AllocatorInstance,piVar1);
      }
      pFVar3 = (this_00->Children).AllocatorInstance.Data;
      (this_00->Children).ArrayNum = uVar8 + 1;
      *(undefined8 **)(pFVar3 + (longlong)(int)uVar8 * 8) = local_38[0];
      local_38[0] = (undefined8 *)0x0;
      uVar11 = 0;
      if ((int)uVar8 < (this_00->Children).ArrayNum) {
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
      SUniformWrapPanel::FSlot::Construct
                (*(FSlot **)((this_00->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
                 (FChildren *)this_00,(FSlotArguments *)this);
      if (local_38[0] != (undefined8 *)0x0) {
        (**(code **)*local_38[0])(local_38[0],1);
      }
      this->Index = uVar8;
    }
    else {
      TPanelChildren<SUniformWrapPanel::FSlot>::InsertSlot
                (this_00,(FSlotArguments *)this,this->Index);
    }
    if (*(void **)&this->Added != (void *)0x0) {
      local_res8[0] = this->Index;
      local_res10 = lVar2;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->Added);
      plVar4 = *(longlong **)&(this->Added).field_0x28;
      pcVar6 = *(code **)&this->Added;
      plVar10 = (longlong *)&(this->Added).field_0x10;
      if (plVar4 != (longlong *)0x0) {
        plVar10 = plVar4;
      }
      uVar9 = (**(code **)(*plVar10 + 8))();
      (*pcVar6)(uVar9,&local_res10,local_res8);
    }
  }
  if (*(longlong *)&this->Added != 0) {
    plVar4 = *(longlong **)&(this->Added).field_0x28;
    plVar10 = (longlong *)&(this->Added).field_0x10;
    if (plVar4 != (longlong *)0x0) {
      plVar10 = plVar4;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)this->_padding_);
  puVar5 = (undefined8 *)this->_padding_;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,1);
  }
  return;
}

// ~FScopedWidgetSlotArguments @ 1427b98a0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TPanelChildren<SPrioritizedWrapBox::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
          (FScopedWidgetSlotArguments *this)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  int local_res8 [2];
  longlong local_res10;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    if (this->Index == -1) {
      iVar4 = TPanelChildren<SPrioritizedWrapBox::FSlot>::AddSlot
                        (this->Children,(FSlotArguments *)this);
      this->Index = iVar4;
    }
    else {
      TPanelChildren<SPrioritizedWrapBox::FSlot>::InsertSlot
                (this->Children,(FSlotArguments *)this,this->Index);
    }
    if (*(void **)&this->Added != (void *)0x0) {
      local_res8[0] = this->Index;
      local_res10 = lVar1;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->Added);
      pcVar2 = *(code **)&this->Added;
      plVar3 = *(longlong **)&(this->Added).field_0x28;
      plVar6 = (longlong *)&(this->Added).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar6 = plVar3;
      }
      uVar5 = (**(code **)(*plVar6 + 8))();
      (*pcVar2)(uVar5,&local_res10,local_res8);
    }
  }
  if (*(longlong *)&this->Added != 0) {
    plVar3 = *(longlong **)&(this->Added).field_0x28;
    plVar6 = (longlong *)&(this->Added).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar6 = plVar3;
    }
    (**(code **)(*plVar6 + 0x10))();
  }
  SPrioritizedWrapBox::FSlot::FSlotArguments::~FSlotArguments((FSlotArguments *)this);
  return;
}

// FScopedWidgetSlotArguments @ 1429b7a00

FScopedWidgetSlotArguments * __thiscall
TPanelChildren<FBasicLayoutWidgetSlot>::FScopedWidgetSlotArguments::FScopedWidgetSlotArguments
          (FScopedWidgetSlotArguments *this,
          TUniquePtr<FBasicLayoutWidgetSlot,TDefaultDelete<FBasicLayoutWidgetSlot>_> param_1,
          TPanelChildren<FBasicLayoutWidgetSlot> *param_2,int param_3,
          TFunction<void___cdecl(FBasicLayoutWidgetSlot_const_*,int)> *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  undefined8 local_28 [2];
  
  local_28[0] = *(undefined8 *)param_1.Ptr;
  *(undefined8 *)param_1.Ptr = 0;
  TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments::FSlotArguments
            ((FSlotArguments *)this,(FBasicLayoutWidgetSlot *)local_28);
  this->Children = param_2;
  this->Index = param_3;
  lVar1 = *(longlong *)param_4;
  *(longlong *)&this->Added = lVar1;
  *(undefined8 *)&(this->Added).field_0x28 = 0;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)&param_4->field_0x10;
    if (*(undefined8 **)&param_4->field_0x28 != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)&param_4->field_0x28;
    }
    (**(code **)*puVar2)();
  }
  puVar2 = *(undefined8 **)param_1.Ptr;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (*(longlong *)param_4 != 0) {
    plVar3 = (longlong *)&param_4->field_0x10;
    if (*(longlong **)&param_4->field_0x28 != (longlong *)0x0) {
      plVar3 = *(longlong **)&param_4->field_0x28;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
  }
  return this;
}

