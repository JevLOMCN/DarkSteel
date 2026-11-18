// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateReflector
// Functions: 2

// ~FScopedWidgetSlotArguments @ 142e13df0

void __thiscall
TPanelChildren<SUniformGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
          (FScopedWidgetSlotArguments *this)

{
  int *piVar1;
  longlong lVar2;
  TPanelChildren<SUniformGridPanel::FSlot> *this_00;
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
      SUniformGridPanel::FSlot::Construct
                (*(FSlot **)((this_00->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
                 (FChildren *)this_00,(FSlotArguments *)this);
      if (local_38[0] != (undefined8 *)0x0) {
        (**(code **)*local_38[0])(local_38[0],1);
      }
      this->Index = uVar8;
    }
    else {
      TPanelChildren<SUniformGridPanel::FSlot>::InsertSlot
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

// ~FScopedWidgetSlotArguments @ 142e14020

void __thiscall
TPanelChildren<SGridPanel::FSlot>::FScopedWidgetSlotArguments::~FScopedWidgetSlotArguments
          (FScopedWidgetSlotArguments *this)

{
  int *piVar1;
  longlong lVar2;
  TPanelChildren<SGridPanel::FSlot> *this_00;
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
      if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)(this_00->Children).ArrayMax * 8)
         ) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
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
      if (uVar11 == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      SGridPanel::FSlot::Construct
                (*(FSlot **)((this_00->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
                 (FChildren *)this_00,(FSlotArguments *)this);
      if (local_38[0] != (undefined8 *)0x0) {
        (**(code **)*local_38[0])(local_38[0],1);
      }
      this->Index = uVar8;
    }
    else {
      TPanelChildren<SGridPanel::FSlot>::InsertSlot(this_00,(FSlotArguments *)this,this->Index);
    }
    if (*(void **)&this->Added != (void *)0x0) {
      local_res8[0] = this->Index;
      local_res10 = lVar2;
      UE::Core::Private::Function::CheckCallable(*(void **)&this->Added);
      pcVar6 = *(code **)&this->Added;
      plVar4 = *(longlong **)&(this->Added).field_0x28;
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
    (**(code **)*puVar5)(puVar5,1);
  }
  return;
}

