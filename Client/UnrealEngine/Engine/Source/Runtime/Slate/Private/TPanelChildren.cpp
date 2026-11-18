// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 158

// InsertSlot @ 1426c1ff0

void __thiscall
TPanelChildren<SOverlay::FOverlaySlot>::InsertSlot
          (TPanelChildren<SOverlay::FOverlaySlot> *this,FSlotArguments *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)param_1->_padding_;
  lVar7 = (longlong)param_2;
  param_1->_padding_ = 0;
  if (local_28[0] == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x23c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  (this->Children).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Children).AllocatorInstance.Data + lVar7 * 8;
  memmove(pFVar2 + 8,pFVar2,(longlong)(iVar5 - param_2) << 3);
  *(undefined8 **)((this->Children).AllocatorInstance.Data + lVar7 * 8) = local_28[0];
  local_28[0] = (undefined8 *)0x0;
  uVar6 = 0;
  if (param_2 < (this->Children).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SOverlay::FOverlaySlot::Construct
            (*(FOverlaySlot **)((this->Children).AllocatorInstance.Data + lVar7 * 8),
             (FChildren *)this,param_1);
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// InsertSlot @ 142749930

void __thiscall
TPanelChildren<SSplitter::FSlot>::InsertSlot
          (TPanelChildren<SSplitter::FSlot> *this,FSlotArguments *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)param_1->_padding_;
  lVar7 = (longlong)param_2;
  param_1->_padding_ = 0;
  if (local_28[0] == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x23c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  (this->Children).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Children).AllocatorInstance.Data + lVar7 * 8;
  memmove(pFVar2 + 8,pFVar2,(longlong)(iVar5 - param_2) << 3);
  *(undefined8 **)((this->Children).AllocatorInstance.Data + lVar7 * 8) = local_28[0];
  local_28[0] = (undefined8 *)0x0;
  uVar6 = 0;
  if (param_2 < (this->Children).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SSplitter::FSlot::Construct
            (*(FSlot **)((this->Children).AllocatorInstance.Data + lVar7 * 8),(FChildren *)this,
             param_1);
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// operator[] @ 1427bba70

FSlot * __thiscall
TPanelChildren<SUniformToolbarPanel::FSlot>::operator[]
          (TPanelChildren<SUniformToolbarPanel::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlot *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// AddSlot @ 1427c9c50

int __thiscall
TPanelChildren<SUniformToolbarPanel::FSlot>::AddSlot
          (TPanelChildren<SUniformToolbarPanel::FSlot> *this,FSlotArguments *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *local_28 [2];
  
  local_28[0] = *(undefined8 **)param_1;
  *(undefined8 *)param_1 = 0;
  if (local_28[0] == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x1fd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  uVar6 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (uVar6 == *piVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = uVar6 + 1;
  *(undefined8 **)(pFVar2 + (longlong)(int)uVar6 * 8) = local_28[0];
  local_28[0] = (undefined8 *)0x0;
  uVar7 = 0;
  if ((int)uVar6 < (this->Children).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  SUniformToolbarPanel::FSlot::Construct
            (*(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar6 * 8),
             (FChildren *)this,param_1);
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return uVar6;
}

// AddSlot @ 1427c9de0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

int __thiscall
TPanelChildren<SPrioritizedWrapBox::FSlot>::AddSlot
          (TPanelChildren<SPrioritizedWrapBox::FSlot> *this,FSlotArguments *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)param_1->_padding_;
  param_1->_padding_ = 0;
  if (local_28[0] == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x1fd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  uVar6 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (uVar6 == *piVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = uVar6 + 1;
  *(undefined8 **)(pFVar2 + (longlong)(int)uVar6 * 8) = local_28[0];
  local_28[0] = (undefined8 *)0x0;
  uVar7 = 0;
  if ((int)uVar6 < (this->Children).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  SPrioritizedWrapBox::FSlot::Construct
            (*(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar6 * 8),
             (FChildren *)this,param_1);
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return uVar6;
}

// AddSlots @ 1427ca260

void __thiscall
TPanelChildren<SUniformToolbarPanel::FSlot>::AddSlots
          (TPanelChildren<SUniformToolbarPanel::FSlot> *this,
          TArray<SUniformToolbarPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FSlotArguments *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FSlotArguments *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined8 *local_38 [2];
  
  iVar3 = (this->Children).ArrayNum;
  uVar9 = param_1->ArrayNum + iVar3;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &(this->Children).ArrayMax;
  if (*piVar1 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&(this->Children).AllocatorInstance,iVar3,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  pFVar8 = (FSlotArguments *)(param_1->AllocatorInstance).Data;
  pFVar2 = pFVar8 + iVar3;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<SUniformToolbarPanel::FSlot::FSlotArguments,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    local_38[0] = *(undefined8 **)pFVar8;
    *(undefined8 *)pFVar8 = 0;
    if (local_38[0] == (undefined8 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSlot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x1fd,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (this->Children).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)*piVar1 * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar9 = (this->Children).ArrayNum;
    if (uVar9 == *piVar1) {
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Children).AllocatorInstance,piVar1);
    }
    pFVar4 = (this->Children).AllocatorInstance.Data;
    (this->Children).ArrayNum = uVar9 + 1;
    *(undefined8 **)(pFVar4 + (longlong)(int)uVar9 * 8) = local_38[0];
    local_38[0] = (undefined8 *)0x0;
    uVar7 = 0;
    if ((int)uVar9 < (this->Children).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    SUniformToolbarPanel::FSlot::Construct
              (*(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar9 * 8),
               (FChildren *)this,pFVar8);
    if (local_38[0] != (undefined8 *)0x0) {
      (**(code **)*local_38[0])(local_38[0],1);
    }
    pFVar8 = pFVar8 + 1;
  }
  DestructItems<SUniformToolbarPanel::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// AddSlots @ 1427ca4b0

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TPanelChildren<SPrioritizedWrapBox::FSlot>::AddSlots
          (TPanelChildren<SPrioritizedWrapBox::FSlot> *this,
          TArray<SPrioritizedWrapBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlotArguments *pFVar7;
  uint uVar8;
  FSlotArguments *pFVar9;
  undefined1 local_res8 [8];
  undefined8 *local_38 [2];
  
  iVar2 = (this->Children).ArrayNum;
  uVar8 = param_1->ArrayNum + iVar2;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &(this->Children).ArrayMax;
  if (*piVar1 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,&(this->Children).AllocatorInstance,iVar2,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  pFVar7 = (FSlotArguments *)(param_1->AllocatorInstance).Data;
  pFVar9 = pFVar7 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<SPrioritizedWrapBox::FSlot::FSlotArguments,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    local_38[0] = (undefined8 *)pFVar7->_padding_;
    pFVar7->_padding_ = 0;
    if (local_38[0] == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSlot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x1fd,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = (this->Children).ArrayNum;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Children).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    (this->Children).ArrayNum = uVar8 + 1;
    *(undefined8 **)(pFVar3 + (longlong)(int)uVar8 * 8) = local_38[0];
    local_38[0] = (undefined8 *)0x0;
    uVar6 = 0;
    if ((int)uVar8 < (this->Children).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    SPrioritizedWrapBox::FSlot::Construct
              (*(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
               (FChildren *)this,pFVar7);
    if (local_38[0] != (undefined8 *)0x0) {
      (**(code **)*local_38[0])(local_38[0],1);
    }
    pFVar7 = pFVar7 + 1;
  }
  DestructItems<SPrioritizedWrapBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// GetChildAt @ 14280e830

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SUniformToolbarPanel::FSlot>::GetChildAt
          (TPanelChildren<SUniformToolbarPanel::FSlot> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14280e8d0

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SUniformToolbarPanel::FSlot>::GetChildAt
          (TPanelChildren<SUniformToolbarPanel::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14280e970

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SPrioritizedWrapBox::FSlot>::GetChildAt
          (TPanelChildren<SPrioritizedWrapBox::FSlot> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14280ea10

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SPrioritizedWrapBox::FSlot>::GetChildAt
          (TPanelChildren<SPrioritizedWrapBox::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14280eab0

FWidgetRef * __thiscall
TPanelChildren<SUniformToolbarPanel::FSlot>::GetChildRefAt
          (TPanelChildren<SUniformToolbarPanel::FSlot> *this,FWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14280eb50

FConstWidgetRef * __thiscall
TPanelChildren<SUniformToolbarPanel::FSlot>::GetChildRefAt
          (TPanelChildren<SUniformToolbarPanel::FSlot> *this,FConstWidgetRef *__return_storage_ptr__
          ,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14280ebf0

FWidgetRef * __thiscall
TPanelChildren<SPrioritizedWrapBox::FSlot>::GetChildRefAt
          (TPanelChildren<SPrioritizedWrapBox::FSlot> *this,FWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14280ec90

FConstWidgetRef * __thiscall
TPanelChildren<SPrioritizedWrapBox::FSlot>::GetChildRefAt
          (TPanelChildren<SPrioritizedWrapBox::FSlot> *this,FConstWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSlotAt @ 1428151a0

FSlotBase * __thiscall
TPanelChildren<SUniformToolbarPanel::FSlot>::GetSlotAt
          (TPanelChildren<SUniformToolbarPanel::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSlotAt @ 142815220

FSlotBase * __thiscall
TPanelChildren<SPrioritizedWrapBox::FSlot>::GetSlotAt
          (TPanelChildren<SPrioritizedWrapBox::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// InsertSlot @ 14281c980

void __thiscall
TPanelChildren<SUniformWrapPanel::FSlot>::InsertSlot
          (TPanelChildren<SUniformWrapPanel::FSlot> *this,FSlotArguments *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *local_28 [2];
  
  local_28[0] = *(undefined8 **)param_1;
  lVar7 = (longlong)param_2;
  *(undefined8 *)param_1 = 0;
  if (local_28[0] == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x23c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  (this->Children).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Children).AllocatorInstance.Data + lVar7 * 8;
  memmove(pFVar2 + 8,pFVar2,(longlong)(iVar5 - param_2) << 3);
  *(undefined8 **)((this->Children).AllocatorInstance.Data + lVar7 * 8) = local_28[0];
  local_28[0] = (undefined8 *)0x0;
  uVar6 = 0;
  if (param_2 < (this->Children).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SUniformWrapPanel::FSlot::Construct
            (*(FSlot **)((this->Children).AllocatorInstance.Data + lVar7 * 8),(FChildren *)this,
             param_1);
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// InsertSlot @ 14281cb20

/* WARNING: Enum "EVerticalOverflowBehavior": Some values do not have unique names */

void __thiscall
TPanelChildren<SPrioritizedWrapBox::FSlot>::InsertSlot
          (TPanelChildren<SPrioritizedWrapBox::FSlot> *this,FSlotArguments *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 *local_28 [2];
  
  local_28[0] = (undefined8 *)param_1->_padding_;
  lVar7 = (longlong)param_2;
  param_1->_padding_ = 0;
  if (local_28[0] == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x23c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  (this->Children).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Children).AllocatorInstance.Data + lVar7 * 8;
  memmove(pFVar2 + 8,pFVar2,(longlong)(iVar5 - param_2) << 3);
  *(undefined8 **)((this->Children).AllocatorInstance.Data + lVar7 * 8) = local_28[0];
  local_28[0] = (undefined8 *)0x0;
  uVar6 = 0;
  if (param_2 < (this->Children).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  SPrioritizedWrapBox::FSlot::Construct
            (*(FSlot **)((this->Children).AllocatorInstance.Data + lVar7 * 8),(FChildren *)this,
             param_1);
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// Num @ 1428223c0

int __thiscall
TPanelChildren<SUniformToolbarPanel::FSlot>::Num(TPanelChildren<SUniformToolbarPanel::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Num @ 1428223d0

int __thiscall
TPanelChildren<SPrioritizedWrapBox::FSlot>::Num(TPanelChildren<SPrioritizedWrapBox::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Remove @ 142831d50

int __thiscall
TPanelChildren<SPrioritizedWrapBox::FSlot>::Remove
          (TPanelChildren<SPrioritizedWrapBox::FSlot> *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->Children).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if (param_1->Object ==
          *(SWidget **)(*(longlong *)((this->Children).AllocatorInstance.Data + lVar9) + 0x10)) {
        uVar6 = 0;
        if ((int)uVar8 < (this->Children).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        pFVar2 = (this->Children).AllocatorInstance.Data;
        _Dst = pFVar2 + (longlong)(int)uVar8 * 8;
        puVar3 = *(undefined8 **)(pFVar2 + (longlong)(int)uVar8 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        iVar7 = (this->Children).ArrayNum + ~uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->Children).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Children).AllocatorInstance,(this->Children).ArrayNum,
                   &(this->Children).ArrayMax);
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->Children).ArrayNum);
  }
  return -1;
}

// SupportSlotWithSlateAttribute @ 1428366c0

bool __thiscall
TPanelChildren<SUniformToolbarPanel::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SUniformToolbarPanel::FSlot> *this)

{
  return false;
}

// SupportSlotWithSlateAttribute @ 1428366d0

bool __thiscall
TPanelChildren<SPrioritizedWrapBox::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SPrioritizedWrapBox::FSlot> *this)

{
  return true;
}

// operator[] @ 1428c6250

FBasicLayoutWidgetSlot * __thiscall
TPanelChildren<FBasicLayoutWidgetSlot>::operator[]
          (TPanelChildren<FBasicLayoutWidgetSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBasicLayoutWidgetSlot *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBasicLayoutWidgetSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FBasicLayoutWidgetSlot **)
          ((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// operator[] @ 1428c62d0

FBasicLayoutWidgetSlot * __thiscall
TPanelChildren<FBasicLayoutWidgetSlot>::operator[]
          (TPanelChildren<FBasicLayoutWidgetSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FBasicLayoutWidgetSlot *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FBasicLayoutWidgetSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FBasicLayoutWidgetSlot **)
          ((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// operator[] @ 1428c6350

FSlot * __thiscall
TPanelChildren<SGridPanel::FSlot>::operator[](TPanelChildren<SGridPanel::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlot *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// operator[] @ 1428c63d0

FSlot * __thiscall
TPanelChildren<SResponsiveGridPanel::FSlot>::operator[]
          (TPanelChildren<SResponsiveGridPanel::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlot *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// operator[] @ 1428c6450

FSlot * __thiscall
TPanelChildren<SResponsiveGridPanel::FSlot>::operator[]
          (TPanelChildren<SResponsiveGridPanel::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlot *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// operator[] @ 1428c64d0

FSlot * __thiscall
TPanelChildren<SScrollBarTrack::FSlot>::operator[]
          (TPanelChildren<SScrollBarTrack::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlot *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// operator[] @ 1428c6550

FSlot * __thiscall
TPanelChildren<SScrollBox::FSlot>::operator[](TPanelChildren<SScrollBox::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlot *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// operator[] @ 1428c65d0

FSlot * __thiscall
TPanelChildren<SScrollBox::FSlot>::operator[](TPanelChildren<SScrollBox::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlot *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// operator[] @ 1428c6650

FSlot * __thiscall
TPanelChildren<SSplitter::FSlot>::operator[](TPanelChildren<SSplitter::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlot *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// operator[] @ 1428c66d0

FSlot * __thiscall
TPanelChildren<SSplitter::FSlot>::operator[](TPanelChildren<SSplitter::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlot *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// AddSlot @ 1428d0b60

int __thiscall
TPanelChildren<FBasicLayoutWidgetSlot>::AddSlot
          (TPanelChildren<FBasicLayoutWidgetSlot> *this,FSlotArguments *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot> *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot> *pTVar9;
  undefined8 *local_28 [2];
  
  local_28[0] = *(undefined8 **)param_1;
  *(undefined8 *)param_1 = 0;
  if (local_28[0] == (undefined8 *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x1fd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  uVar6 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (uVar6 == *piVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = uVar6 + 1;
  *(undefined8 **)(pFVar2 + (longlong)(int)uVar6 * 8) = local_28[0];
  local_28[0] = (undefined8 *)0x0;
  uVar7 = 0;
  if ((int)uVar6 < (this->Children).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  this_00 = *(TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot> **)
             ((this->Children).AllocatorInstance.Data + (longlong)(int)uVar6 * 8);
  TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot>::Construct
            (this_00,(FChildren *)this,(FSlotArguments *)param_1);
  if (param_1->field_0x28 != '\0') {
    pTVar9 = this_00;
    if (this_00 + 1 == (TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot> *)0x0) {
      pTVar9 = (TWidgetSlotWithAttributeSupport<FBasicLayoutWidgetSlot> *)0x0;
    }
    SlateAttributePrivate::
    TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
    ::Assign((TSlateAttributeBase<SlateAttributePrivate::ISlateAttributeContainer,FMargin,SlateAttributePrivate::FSlateAttributeNoInvalidationReason,TSlateAttributeComparePredicate<TEqualTo<void>_>,2>
              *)(this_00 + 1),(ISlateAttributeContainer *)&pTVar9->field_0x20,
             (TAttribute<FMargin> *)&param_1->field_0x18,None);
  }
  puVar8 = (undefined4 *)&param_1->field_0x48;
  if (param_1->field_0x4c == '\0') {
    puVar8 = (undefined4 *)&this_00[1].field_0x10;
  }
  *(undefined4 *)&this_00[1].field_0x10 = *puVar8;
  puVar8 = (undefined4 *)&param_1->field_0x50;
  if (param_1->field_0x54 == '\0') {
    puVar8 = (undefined4 *)&this_00[1].field_0x14;
  }
  *(undefined4 *)&this_00[1].field_0x14 = *puVar8;
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return uVar6;
}

// AddSlot @ 1428d0d50

int __thiscall
TPanelChildren<SScrollBarTrack::FSlot>::AddSlot
          (TPanelChildren<SScrollBarTrack::FSlot> *this,FSlotArguments *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  SWidget *pSVar3;
  FSlotBase *this_00;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  FSlot *local_38;
  SWidget *local_30;
  TReferenceControllerBase<1> *pTStack_28;
  
  local_38 = (param_1->Slot).Ptr;
  (param_1->Slot).Ptr = (FSlot *)0x0;
  if (local_38 == (FSlot *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x1fd,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  uVar8 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (uVar8 == *piVar1) {
    uVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = uVar8 + 1;
  *(FSlot **)(pFVar2 + (longlong)(int)uVar8 * 8) = local_38;
  local_38 = (FSlot *)0x0;
  uVar9 = 0;
  if ((int)uVar8 < (this->Children).ArrayNum) {
    uVar9 = ~uVar8 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      iVar7 = (*pcVar5)();
      return iVar7;
    }
  }
  pSVar3 = (param_1->ChildWidget).Object;
  this_00 = *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
  if (pSVar3 != (SWidget *)0x0) {
    pTVar4 = (param_1->ChildWidget).SharedReferenceCount.ReferenceController;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent(this_00);
    local_30 = (this_00->Widget).Object;
    pTStack_28 = (this_00->Widget).SharedReferenceCount.ReferenceController;
    (this_00->Widget).Object = pSVar3;
    (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar4;
    FSlotBase::AfterContentOrOwnerAssigned(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  }
  FSlotBase::SetOwner(this_00,(FChildren *)this);
  if (local_38 != (FSlot *)0x0) {
    (*(code *)**(undefined8 **)local_38)(local_38,1);
  }
  return uVar8;
}

// AddSlot @ 1428d0f30

int __thiscall
TPanelChildren<SSplitter2x2::FSlot>::AddSlot
          (TPanelChildren<SSplitter2x2::FSlot> *this,FSlotArguments *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FSlotBase *this_00;
  SWidget *pSVar3;
  TReferenceControllerBase<1> *pTVar4;
  code *pcVar5;
  FChildren *pFVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 *local_38;
  SWidget *local_30;
  TReferenceControllerBase<1> *pTStack_28;
  
  local_38 = (undefined8 *)param_1->_padding_;
  param_1->_padding_ = 0;
  if (local_38 == (undefined8 *)0x0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x1fd,L"");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)&local_38) &&
     ((FScriptContainerElement *)&local_38 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  uVar9 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (uVar9 == *piVar1) {
    uVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = uVar9 + 1;
  *(undefined8 **)(pFVar2 + (longlong)(int)uVar9 * 8) = local_38;
  local_38 = (undefined8 *)0x0;
  uVar10 = 0;
  if ((int)uVar9 < (this->Children).ArrayNum) {
    uVar10 = ~uVar9 >> 0x1f;
  }
  if (uVar10 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
  }
  this_00 = *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
  pSVar3 = (SWidget *)param_1->_padding_;
  if (pSVar3 != (SWidget *)0x0) {
    pTVar4 = (TReferenceControllerBase<1> *)param_1->_padding_;
    if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
      UNLOCK();
    }
    FSlotBase::DetatchParentFromContent(this_00);
    local_30 = (this_00->Widget).Object;
    pTStack_28 = (this_00->Widget).SharedReferenceCount.ReferenceController;
    (this_00->Widget).Object = pSVar3;
    (this_00->Widget).SharedReferenceCount.ReferenceController = pTVar4;
    FSlotBase::AfterContentOrOwnerAssigned(this_00);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_28);
  }
  FSlotBase::SetOwner(this_00,(FChildren *)this);
  if ((param_1->_Percentage).bIsSet != false) {
    pFVar6 = (FChildren *)(param_1->_Percentage).Value.field0_0x0._s_0.Y;
    this_00[1]._padding_ = (longlong)(param_1->_Percentage).Value.field0_0x0._s_0.X;
    this_00[1].Owner = pFVar6;
    *(bool *)&this_00[1].Widget.Object = (param_1->_Percentage).bIsSet;
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this_00[1].Widget.SharedReferenceCount,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)&(param_1->_Percentage).Getter);
  }
  if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return uVar9;
}

// AddSlots @ 1428d1810

void __thiscall
TPanelChildren<SConstraintCanvas::FSlot>::AddSlots
          (TPanelChildren<SConstraintCanvas::FSlot> *this,
          TArray<SConstraintCanvas::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlotArguments *pFVar7;
  uint uVar8;
  FSlotArguments *pFVar9;
  undefined1 local_res8 [8];
  undefined8 *local_38 [2];
  
  iVar2 = (this->Children).ArrayNum;
  uVar8 = param_1->ArrayNum + iVar2;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &(this->Children).ArrayMax;
  if (*piVar1 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,&(this->Children).AllocatorInstance,iVar2,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  pFVar7 = (FSlotArguments *)(param_1->AllocatorInstance).Data;
  pFVar9 = pFVar7 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<SConstraintCanvas::FSlot::FSlotArguments,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    local_38[0] = (undefined8 *)pFVar7->_padding_;
    pFVar7->_padding_ = 0;
    if (local_38[0] == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSlot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x1fd,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = (this->Children).ArrayNum;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Children).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    (this->Children).ArrayNum = uVar8 + 1;
    *(undefined8 **)(pFVar3 + (longlong)(int)uVar8 * 8) = local_38[0];
    local_38[0] = (undefined8 *)0x0;
    uVar6 = 0;
    if ((int)uVar8 < (this->Children).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    SConstraintCanvas::FSlot::Construct
              (*(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
               (FChildren *)this,pFVar7);
    if (local_38[0] != (undefined8 *)0x0) {
      (**(code **)*local_38[0])(local_38[0],1);
    }
    pFVar7 = pFVar7 + 1;
  }
  DestructItems<SConstraintCanvas::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddSlots @ 1428d1a60

void __thiscall
TPanelChildren<SRadialBox::FSlot>::AddSlots
          (TPanelChildren<SRadialBox::FSlot> *this,
          TArray<SRadialBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FSlotArguments *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FSlotArguments *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  FSlot *local_38 [2];
  
  iVar3 = (this->Children).ArrayNum;
  uVar9 = param_1->ArrayNum + iVar3;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &(this->Children).ArrayMax;
  if (*piVar1 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&(this->Children).AllocatorInstance,iVar3,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  pFVar8 = (FSlotArguments *)(param_1->AllocatorInstance).Data;
  pFVar2 = pFVar8 + iVar3;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<SRadialBox::FSlot::FSlotArguments,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    local_38[0] = (pFVar8->Slot).Ptr;
    (pFVar8->Slot).Ptr = (FSlot *)0x0;
    if (local_38[0] == (FSlot *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSlot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x1fd,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (this->Children).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)*piVar1 * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar9 = (this->Children).ArrayNum;
    if (uVar9 == *piVar1) {
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Children).AllocatorInstance,piVar1);
    }
    pFVar4 = (this->Children).AllocatorInstance.Data;
    (this->Children).ArrayNum = uVar9 + 1;
    *(FSlot **)(pFVar4 + (longlong)(int)uVar9 * 8) = local_38[0];
    local_38[0] = (FSlot *)0x0;
    uVar7 = 0;
    if ((int)uVar9 < (this->Children).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    TSlotBase<SRadialBox::FSlot>::Construct
              (*(TSlotBase<SRadialBox::FSlot> **)
                ((this->Children).AllocatorInstance.Data + (longlong)(int)uVar9 * 8),
               (FChildren *)this,pFVar8);
    if (local_38[0] != (FSlot *)0x0) {
      (*(code *)**(undefined8 **)local_38[0])(local_38[0],1);
    }
    pFVar8 = pFVar8 + 1;
  }
  DestructItems<SRadialBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// AddSlots @ 1428d1cb0

void __thiscall
TPanelChildren<SScrollBox::FSlot>::AddSlots
          (TPanelChildren<SScrollBox::FSlot> *this,
          TArray<SScrollBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlotArguments *pFVar7;
  uint uVar8;
  FSlotArguments *pFVar9;
  undefined1 local_res8 [8];
  undefined8 *local_38 [2];
  
  iVar2 = (this->Children).ArrayNum;
  uVar8 = param_1->ArrayNum + iVar2;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &(this->Children).ArrayMax;
  if (*piVar1 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,&(this->Children).AllocatorInstance,iVar2,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  pFVar7 = (FSlotArguments *)(param_1->AllocatorInstance).Data;
  pFVar9 = pFVar7 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<SScrollBox::FSlot::FSlotArguments,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    local_38[0] = *(undefined8 **)pFVar7;
    *(undefined8 *)pFVar7 = 0;
    if (local_38[0] == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSlot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x1fd,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = (this->Children).ArrayNum;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Children).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    (this->Children).ArrayNum = uVar8 + 1;
    *(undefined8 **)(pFVar3 + (longlong)(int)uVar8 * 8) = local_38[0];
    local_38[0] = (undefined8 *)0x0;
    uVar6 = 0;
    if ((int)uVar8 < (this->Children).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    SScrollBox::FSlot::Construct
              (*(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
               (FChildren *)this,pFVar7);
    if (local_38[0] != (undefined8 *)0x0) {
      (**(code **)*local_38[0])(local_38[0],1);
    }
    pFVar7 = pFVar7 + 1;
  }
  DestructItems<SScrollBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddSlots @ 1428d1f00

void __thiscall
TPanelChildren<SSplitter::FSlot>::AddSlots
          (TPanelChildren<SSplitter::FSlot> *this,
          TArray<SSplitter::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlotArguments *pFVar7;
  uint uVar8;
  FSlotArguments *pFVar9;
  undefined1 local_res8 [8];
  undefined8 *local_38 [2];
  
  iVar2 = (this->Children).ArrayNum;
  uVar8 = param_1->ArrayNum + iVar2;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &(this->Children).ArrayMax;
  if (*piVar1 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,&(this->Children).AllocatorInstance,iVar2,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  pFVar7 = (FSlotArguments *)(param_1->AllocatorInstance).Data;
  pFVar9 = pFVar7 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<SSplitter::FSlot::FSlotArguments,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    local_38[0] = (undefined8 *)pFVar7->_padding_;
    pFVar7->_padding_ = 0;
    if (local_38[0] == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSlot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x1fd,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = (this->Children).ArrayNum;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Children).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    (this->Children).ArrayNum = uVar8 + 1;
    *(undefined8 **)(pFVar3 + (longlong)(int)uVar8 * 8) = local_38[0];
    local_38[0] = (undefined8 *)0x0;
    uVar6 = 0;
    if ((int)uVar8 < (this->Children).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    SSplitter::FSlot::Construct
              (*(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
               (FChildren *)this,pFVar7);
    if (local_38[0] != (undefined8 *)0x0) {
      (**(code **)*local_38[0])(local_38[0],1);
    }
    pFVar7 = pFVar7 + 1;
  }
  DestructItems<SSplitter::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// GetChildAt @ 14293ce50

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<FBasicLayoutWidgetSlot>::GetChildAt
          (TPanelChildren<FBasicLayoutWidgetSlot> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293cef0

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<FBasicLayoutWidgetSlot>::GetChildAt
          (TPanelChildren<FBasicLayoutWidgetSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293cf90

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SConstraintCanvas::FSlot>::GetChildAt
          (TPanelChildren<SConstraintCanvas::FSlot> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293d030

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SConstraintCanvas::FSlot>::GetChildAt
          (TPanelChildren<SConstraintCanvas::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293d0d0

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SGridPanel::FSlot>::GetChildAt
          (TPanelChildren<SGridPanel::FSlot> *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293d170

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SGridPanel::FSlot>::GetChildAt
          (TPanelChildren<SGridPanel::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293d210

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SRadialBox::FSlot>::GetChildAt
          (TPanelChildren<SRadialBox::FSlot> *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293d2b0

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SRadialBox::FSlot>::GetChildAt
          (TPanelChildren<SRadialBox::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293d350

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SResponsiveGridPanel::FSlot>::GetChildAt
          (TPanelChildren<SResponsiveGridPanel::FSlot> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293d3f0

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SResponsiveGridPanel::FSlot>::GetChildAt
          (TPanelChildren<SResponsiveGridPanel::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293d490

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SScrollBarTrack::FSlot>::GetChildAt
          (TPanelChildren<SScrollBarTrack::FSlot> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293d530

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SScrollBarTrack::FSlot>::GetChildAt
          (TPanelChildren<SScrollBarTrack::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293d5d0

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SScrollBox::FSlot>::GetChildAt
          (TPanelChildren<SScrollBox::FSlot> *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293d670

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SScrollBox::FSlot>::GetChildAt
          (TPanelChildren<SScrollBox::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293d710

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SSplitter2x2::FSlot>::GetChildAt
          (TPanelChildren<SSplitter2x2::FSlot> *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293d7b0

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SSplitter2x2::FSlot>::GetChildAt
          (TPanelChildren<SSplitter2x2::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293d850

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SSplitter::FSlot>::GetChildAt
          (TPanelChildren<SSplitter::FSlot> *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 14293d8f0

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SSplitter::FSlot>::GetChildAt
          (TPanelChildren<SSplitter::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293d990

FWidgetRef * __thiscall
TPanelChildren<FBasicLayoutWidgetSlot>::GetChildRefAt
          (TPanelChildren<FBasicLayoutWidgetSlot> *this,FWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293da30

FConstWidgetRef * __thiscall
TPanelChildren<FBasicLayoutWidgetSlot>::GetChildRefAt
          (TPanelChildren<FBasicLayoutWidgetSlot> *this,FConstWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293dad0

FWidgetRef * __thiscall
TPanelChildren<SConstraintCanvas::FSlot>::GetChildRefAt
          (TPanelChildren<SConstraintCanvas::FSlot> *this,FWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293db70

FConstWidgetRef * __thiscall
TPanelChildren<SConstraintCanvas::FSlot>::GetChildRefAt
          (TPanelChildren<SConstraintCanvas::FSlot> *this,FConstWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293dc10

FWidgetRef * __thiscall
TPanelChildren<SGridPanel::FSlot>::GetChildRefAt
          (TPanelChildren<SGridPanel::FSlot> *this,FWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293dcb0

FConstWidgetRef * __thiscall
TPanelChildren<SGridPanel::FSlot>::GetChildRefAt
          (TPanelChildren<SGridPanel::FSlot> *this,FConstWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293dd50

FWidgetRef * __thiscall
TPanelChildren<SRadialBox::FSlot>::GetChildRefAt
          (TPanelChildren<SRadialBox::FSlot> *this,FWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293ddf0

FConstWidgetRef * __thiscall
TPanelChildren<SRadialBox::FSlot>::GetChildRefAt
          (TPanelChildren<SRadialBox::FSlot> *this,FConstWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293de90

FWidgetRef * __thiscall
TPanelChildren<SResponsiveGridPanel::FSlot>::GetChildRefAt
          (TPanelChildren<SResponsiveGridPanel::FSlot> *this,FWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293df30

FConstWidgetRef * __thiscall
TPanelChildren<SResponsiveGridPanel::FSlot>::GetChildRefAt
          (TPanelChildren<SResponsiveGridPanel::FSlot> *this,FConstWidgetRef *__return_storage_ptr__
          ,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293dfd0

FWidgetRef * __thiscall
TPanelChildren<SScrollBarTrack::FSlot>::GetChildRefAt
          (TPanelChildren<SScrollBarTrack::FSlot> *this,FWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293e070

FConstWidgetRef * __thiscall
TPanelChildren<SScrollBarTrack::FSlot>::GetChildRefAt
          (TPanelChildren<SScrollBarTrack::FSlot> *this,FConstWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293e110

FWidgetRef * __thiscall
TPanelChildren<SScrollBox::FSlot>::GetChildRefAt
          (TPanelChildren<SScrollBox::FSlot> *this,FWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293e1b0

FConstWidgetRef * __thiscall
TPanelChildren<SScrollBox::FSlot>::GetChildRefAt
          (TPanelChildren<SScrollBox::FSlot> *this,FConstWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293e250

FWidgetRef * __thiscall
TPanelChildren<SSplitter2x2::FSlot>::GetChildRefAt
          (TPanelChildren<SSplitter2x2::FSlot> *this,FWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293e2f0

FConstWidgetRef * __thiscall
TPanelChildren<SSplitter2x2::FSlot>::GetChildRefAt
          (TPanelChildren<SSplitter2x2::FSlot> *this,FConstWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293e390

FWidgetRef * __thiscall
TPanelChildren<SSplitter::FSlot>::GetChildRefAt
          (TPanelChildren<SSplitter::FSlot> *this,FWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 14293e430

FConstWidgetRef * __thiscall
TPanelChildren<SSplitter::FSlot>::GetChildRefAt
          (TPanelChildren<SSplitter::FSlot> *this,FConstWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSlotAt @ 142948fc0

FSlotBase * __thiscall
TPanelChildren<FBasicLayoutWidgetSlot>::GetSlotAt
          (TPanelChildren<FBasicLayoutWidgetSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSlotAt @ 142949040

FSlotBase * __thiscall
TPanelChildren<SConstraintCanvas::FSlot>::GetSlotAt
          (TPanelChildren<SConstraintCanvas::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSlotAt @ 1429490c0

FSlotBase * __thiscall
TPanelChildren<SGridPanel::FSlot>::GetSlotAt(TPanelChildren<SGridPanel::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSlotAt @ 142949140

FSlotBase * __thiscall
TPanelChildren<SRadialBox::FSlot>::GetSlotAt(TPanelChildren<SRadialBox::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSlotAt @ 1429491c0

FSlotBase * __thiscall
TPanelChildren<SResponsiveGridPanel::FSlot>::GetSlotAt
          (TPanelChildren<SResponsiveGridPanel::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSlotAt @ 142949240

FSlotBase * __thiscall
TPanelChildren<SScrollBarTrack::FSlot>::GetSlotAt
          (TPanelChildren<SScrollBarTrack::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSlotAt @ 1429492c0

FSlotBase * __thiscall
TPanelChildren<SScrollBox::FSlot>::GetSlotAt(TPanelChildren<SScrollBox::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSlotAt @ 142949340

FSlotBase * __thiscall
TPanelChildren<SSplitter2x2::FSlot>::GetSlotAt
          (TPanelChildren<SSplitter2x2::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSlotAt @ 1429493c0

FSlotBase * __thiscall
TPanelChildren<SSplitter::FSlot>::GetSlotAt(TPanelChildren<SSplitter::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// Move @ 14295c880

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TPanelChildren<SConstraintCanvas::FSlot>::Move
          (TPanelChildren<SConstraintCanvas::FSlot> *this,int param_1,int param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_> local_res8;
  
  uVar4 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->Children).AllocatorInstance.Data;
  local_res8.Ptr = *(FSlot **)(pFVar1 + (longlong)param_1 * 8);
  *(undefined8 *)(pFVar1 + (longlong)param_1 * 8) = 0;
  TArray<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,TSizedDefaultAllocator<32>_>
  ::RemoveAt(&this->Children,param_1,Default);
  TArray<TUniquePtr<SConstraintCanvas::FSlot,TDefaultDelete<SConstraintCanvas::FSlot>_>,TSizedDefaultAllocator<32>_>
  ::Insert(&this->Children,&local_res8,param_2);
  if (local_res8.Ptr != (FSlot *)0x0) {
    (**(code **)(local_res8.Ptr)->_padding_)(local_res8.Ptr,1);
  }
  if (*(char *)((longlong)&this->_padding_ + 1) != -0x24) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`protected:_void___cdecl_FChildren::Debug_TestDestroyTag(void)const___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogSlate);
  }
  SWidget::Invalidate((SWidget *)this->_padding_,ChildOrder);
  return;
}

// Num @ 14295d7f0

int __thiscall
TPanelChildren<FBasicLayoutWidgetSlot>::Num(TPanelChildren<FBasicLayoutWidgetSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Num @ 14295d800

int __thiscall
TPanelChildren<SConstraintCanvas::FSlot>::Num(TPanelChildren<SConstraintCanvas::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Num @ 14295d810

int __thiscall TPanelChildren<SGridPanel::FSlot>::Num(TPanelChildren<SGridPanel::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Num @ 14295d820

int __thiscall TPanelChildren<SRadialBox::FSlot>::Num(TPanelChildren<SRadialBox::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Num @ 14295d830

int __thiscall
TPanelChildren<SResponsiveGridPanel::FSlot>::Num(TPanelChildren<SResponsiveGridPanel::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Num @ 14295d840

int __thiscall
TPanelChildren<SScrollBarTrack::FSlot>::Num(TPanelChildren<SScrollBarTrack::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Num @ 14295d850

int __thiscall TPanelChildren<SScrollBox::FSlot>::Num(TPanelChildren<SScrollBox::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Num @ 14295d860

int __thiscall TPanelChildren<SSplitter2x2::FSlot>::Num(TPanelChildren<SSplitter2x2::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Num @ 14295d870

int __thiscall TPanelChildren<SSplitter::FSlot>::Num(TPanelChildren<SSplitter::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Remove @ 142989070

int __thiscall
TPanelChildren<SGridPanel::FSlot>::Remove
          (TPanelChildren<SGridPanel::FSlot> *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->Children).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if (param_1->Object ==
          *(SWidget **)(*(longlong *)((this->Children).AllocatorInstance.Data + lVar9) + 0x10)) {
        uVar6 = 0;
        if ((int)uVar8 < (this->Children).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        pFVar2 = (this->Children).AllocatorInstance.Data;
        _Dst = pFVar2 + (longlong)(int)uVar8 * 8;
        puVar3 = *(undefined8 **)(pFVar2 + (longlong)(int)uVar8 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        iVar7 = (this->Children).ArrayNum + ~uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->Children).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Children).AllocatorInstance,(this->Children).ArrayNum,
                   &(this->Children).ArrayMax);
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->Children).ArrayNum);
  }
  return -1;
}

// Remove @ 1429891e0

int __thiscall
TPanelChildren<SRadialBox::FSlot>::Remove
          (TPanelChildren<SRadialBox::FSlot> *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->Children).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if (param_1->Object ==
          *(SWidget **)(*(longlong *)((this->Children).AllocatorInstance.Data + lVar9) + 0x10)) {
        uVar6 = 0;
        if ((int)uVar8 < (this->Children).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        pFVar2 = (this->Children).AllocatorInstance.Data;
        _Dst = pFVar2 + (longlong)(int)uVar8 * 8;
        puVar3 = *(undefined8 **)(pFVar2 + (longlong)(int)uVar8 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        iVar7 = (this->Children).ArrayNum + ~uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->Children).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Children).AllocatorInstance,(this->Children).ArrayNum,
                   &(this->Children).ArrayMax);
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->Children).ArrayNum);
  }
  return -1;
}

// Remove @ 142989350

int __thiscall
TPanelChildren<SResponsiveGridPanel::FSlot>::Remove
          (TPanelChildren<SResponsiveGridPanel::FSlot> *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->Children).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if (param_1->Object ==
          *(SWidget **)(*(longlong *)((this->Children).AllocatorInstance.Data + lVar9) + 0x10)) {
        uVar6 = 0;
        if ((int)uVar8 < (this->Children).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        pFVar2 = (this->Children).AllocatorInstance.Data;
        _Dst = pFVar2 + (longlong)(int)uVar8 * 8;
        puVar3 = *(undefined8 **)(pFVar2 + (longlong)(int)uVar8 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        iVar7 = (this->Children).ArrayNum + ~uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->Children).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Children).AllocatorInstance,(this->Children).ArrayNum,
                   &(this->Children).ArrayMax);
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->Children).ArrayNum);
  }
  return -1;
}

// Remove @ 1429894c0

int __thiscall
TPanelChildren<SScrollBox::FSlot>::Remove
          (TPanelChildren<SScrollBox::FSlot> *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->Children).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if (param_1->Object ==
          *(SWidget **)(*(longlong *)((this->Children).AllocatorInstance.Data + lVar9) + 0x10)) {
        uVar6 = 0;
        if ((int)uVar8 < (this->Children).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        pFVar2 = (this->Children).AllocatorInstance.Data;
        _Dst = pFVar2 + (longlong)(int)uVar8 * 8;
        puVar3 = *(undefined8 **)(pFVar2 + (longlong)(int)uVar8 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        iVar7 = (this->Children).ArrayNum + ~uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->Children).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Children).AllocatorInstance,(this->Children).ArrayNum,
                   &(this->Children).ArrayMax);
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->Children).ArrayNum);
  }
  return -1;
}

// SupportSlotWithSlateAttribute @ 1429a6060

bool __thiscall
TPanelChildren<FBasicLayoutWidgetSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<FBasicLayoutWidgetSlot> *this)

{
  return true;
}

// SupportSlotWithSlateAttribute @ 1429a6070

bool __thiscall
TPanelChildren<SConstraintCanvas::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SConstraintCanvas::FSlot> *this)

{
  return false;
}

// SupportSlotWithSlateAttribute @ 1429a6080

bool __thiscall
TPanelChildren<SGridPanel::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SGridPanel::FSlot> *this)

{
  return true;
}

// SupportSlotWithSlateAttribute @ 1429a6090

bool __thiscall
TPanelChildren<SRadialBox::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SRadialBox::FSlot> *this)

{
  return false;
}

// SupportSlotWithSlateAttribute @ 1429a60a0

bool __thiscall
TPanelChildren<SResponsiveGridPanel::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SResponsiveGridPanel::FSlot> *this)

{
  return true;
}

// SupportSlotWithSlateAttribute @ 1429a60b0

bool __thiscall
TPanelChildren<SScrollBarTrack::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SScrollBarTrack::FSlot> *this)

{
  return false;
}

// SupportSlotWithSlateAttribute @ 1429a60c0

bool __thiscall
TPanelChildren<SScrollBox::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SScrollBox::FSlot> *this)

{
  return true;
}

// SupportSlotWithSlateAttribute @ 1429a60d0

bool __thiscall
TPanelChildren<SSplitter2x2::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SSplitter2x2::FSlot> *this)

{
  return false;
}

// SupportSlotWithSlateAttribute @ 1429a60e0

bool __thiscall
TPanelChildren<SSplitter::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SSplitter::FSlot> *this)

{
  return false;
}

// operator[] @ 1429c0c80

FSlot * __thiscall
TPanelChildren<SWrapBox::FSlot>::operator[](TPanelChildren<SWrapBox::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlot *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// AddSlots @ 1429c5f50

void __thiscall
TPanelChildren<SUniformGridPanel::FSlot>::AddSlots
          (TPanelChildren<SUniformGridPanel::FSlot> *this,
          TArray<SUniformGridPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FSlotArguments *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FSlotArguments *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined8 *local_38 [2];
  
  iVar3 = (this->Children).ArrayNum;
  uVar9 = param_1->ArrayNum + iVar3;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &(this->Children).ArrayMax;
  if (*piVar1 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&(this->Children).AllocatorInstance,iVar3,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  pFVar8 = (FSlotArguments *)(param_1->AllocatorInstance).Data;
  pFVar2 = pFVar8 + iVar3;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<SUniformGridPanel::FSlot::FSlotArguments,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    local_38[0] = *(undefined8 **)pFVar8;
    *(undefined8 *)pFVar8 = 0;
    if (local_38[0] == (undefined8 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSlot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x1fd,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (this->Children).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)*piVar1 * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar9 = (this->Children).ArrayNum;
    if (uVar9 == *piVar1) {
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Children).AllocatorInstance,piVar1);
    }
    pFVar4 = (this->Children).AllocatorInstance.Data;
    (this->Children).ArrayNum = uVar9 + 1;
    *(undefined8 **)(pFVar4 + (longlong)(int)uVar9 * 8) = local_38[0];
    local_38[0] = (undefined8 *)0x0;
    uVar7 = 0;
    if ((int)uVar9 < (this->Children).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    SUniformGridPanel::FSlot::Construct
              (*(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar9 * 8),
               (FChildren *)this,pFVar8);
    if (local_38[0] != (undefined8 *)0x0) {
      (**(code **)*local_38[0])(local_38[0],1);
    }
    pFVar8 = pFVar8 + 1;
  }
  DestructItems<SUniformGridPanel::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// AddSlots @ 1429c61a0

void __thiscall
TPanelChildren<SUniformWrapPanel::FSlot>::AddSlots
          (TPanelChildren<SUniformWrapPanel::FSlot> *this,
          TArray<SUniformWrapPanel::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FSlotArguments *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FSlotArguments *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  undefined8 *local_38 [2];
  
  iVar3 = (this->Children).ArrayNum;
  uVar9 = param_1->ArrayNum + iVar3;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &(this->Children).ArrayMax;
  if (*piVar1 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&(this->Children).AllocatorInstance,iVar3,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  pFVar8 = (FSlotArguments *)(param_1->AllocatorInstance).Data;
  pFVar2 = pFVar8 + iVar3;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<SUniformWrapPanel::FSlot::FSlotArguments,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    local_38[0] = *(undefined8 **)pFVar8;
    *(undefined8 *)pFVar8 = 0;
    if (local_38[0] == (undefined8 *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSlot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x1fd,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (this->Children).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)*piVar1 * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar9 = (this->Children).ArrayNum;
    if (uVar9 == *piVar1) {
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Children).AllocatorInstance,piVar1);
    }
    pFVar4 = (this->Children).AllocatorInstance.Data;
    (this->Children).ArrayNum = uVar9 + 1;
    *(undefined8 **)(pFVar4 + (longlong)(int)uVar9 * 8) = local_38[0];
    local_38[0] = (undefined8 *)0x0;
    uVar7 = 0;
    if ((int)uVar9 < (this->Children).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    SUniformWrapPanel::FSlot::Construct
              (*(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar9 * 8),
               (FChildren *)this,pFVar8);
    if (local_38[0] != (undefined8 *)0x0) {
      (**(code **)*local_38[0])(local_38[0],1);
    }
    pFVar8 = pFVar8 + 1;
  }
  DestructItems<SUniformWrapPanel::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// AddSlots @ 1429c63f0

void __thiscall
TPanelChildren<FBasicLayoutWidgetSlot>::AddSlots
          (TPanelChildren<FBasicLayoutWidgetSlot> *this,
          TArray<TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments,TSizedDefaultAllocator<32>_>
          *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlotArguments *pFVar7;
  uint uVar8;
  FSlotArguments *pFVar9;
  undefined1 local_res8 [8];
  undefined8 *local_38 [2];
  
  iVar2 = (this->Children).ArrayNum;
  uVar8 = param_1->ArrayNum + iVar2;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &(this->Children).ArrayMax;
  if (*piVar1 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,&(this->Children).AllocatorInstance,iVar2,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  pFVar7 = (FSlotArguments *)(param_1->AllocatorInstance).Data;
  pFVar9 = pFVar7 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    local_38[0] = *(undefined8 **)pFVar7;
    *(undefined8 *)pFVar7 = 0;
    if (local_38[0] == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSlot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x1fd,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = (this->Children).ArrayNum;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Children).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    (this->Children).ArrayNum = uVar8 + 1;
    *(undefined8 **)(pFVar3 + (longlong)(int)uVar8 * 8) = local_38[0];
    local_38[0] = (undefined8 *)0x0;
    uVar6 = 0;
    if ((int)uVar8 < (this->Children).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::Construct
              (*(TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot> **)
                ((this->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
               (FChildren *)this,pFVar7);
    if (local_38[0] != (undefined8 *)0x0) {
      (**(code **)*local_38[0])(local_38[0],1);
    }
    pFVar7 = pFVar7 + 1;
  }
  DestructItems<TBasicLayoutWidgetSlot<FBasicLayoutWidgetSlot>::FSlotArguments,int>
            ((FSlotArguments *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddSlots @ 1429c6640

void __thiscall
TPanelChildren<SCanvas::FSlot>::AddSlots
          (TPanelChildren<SCanvas::FSlot> *this,
          TArray<SCanvas::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlotArguments *pFVar7;
  uint uVar8;
  FSlotArguments *pFVar9;
  undefined1 local_res8 [8];
  undefined8 *local_38 [2];
  
  iVar2 = (this->Children).ArrayNum;
  uVar8 = param_1->ArrayNum + iVar2;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &(this->Children).ArrayMax;
  if (*piVar1 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,&(this->Children).AllocatorInstance,iVar2,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  pFVar7 = (FSlotArguments *)(param_1->AllocatorInstance).Data;
  pFVar9 = pFVar7 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<SCanvas::FSlot::FSlotArguments,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    local_38[0] = (undefined8 *)pFVar7->_padding_;
    pFVar7->_padding_ = 0;
    if (local_38[0] == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSlot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x1fd,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = (this->Children).ArrayNum;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Children).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    (this->Children).ArrayNum = uVar8 + 1;
    *(undefined8 **)(pFVar3 + (longlong)(int)uVar8 * 8) = local_38[0];
    local_38[0] = (undefined8 *)0x0;
    uVar6 = 0;
    if ((int)uVar8 < (this->Children).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    SCanvas::FSlot::Construct
              (*(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
               (FChildren *)this,pFVar7);
    if (local_38[0] != (undefined8 *)0x0) {
      (**(code **)*local_38[0])(local_38[0],1);
    }
    pFVar7 = pFVar7 + 1;
  }
  DestructItems<SCanvas::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// AddSlots @ 1429c6890

void __thiscall
TPanelChildren<SWrapBox::FSlot>::AddSlots
          (TPanelChildren<SWrapBox::FSlot> *this,
          TArray<SWrapBox::FSlot::FSlotArguments,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FSlotArguments *pFVar7;
  uint uVar8;
  FSlotArguments *pFVar9;
  undefined1 local_res8 [8];
  undefined8 *local_38 [2];
  
  iVar2 = (this->Children).ArrayNum;
  uVar8 = param_1->ArrayNum + iVar2;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  piVar1 = &(this->Children).ArrayMax;
  if (*piVar1 < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar8,&(this->Children).AllocatorInstance,iVar2,piVar1);
  }
  iVar2 = param_1->ArrayNum;
  pFVar7 = (FSlotArguments *)(param_1->AllocatorInstance).Data;
  pFVar9 = pFVar7 + iVar2;
  while( true ) {
    if (param_1->ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<SWrapBox::FSlot::FSlotArguments,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar7 == pFVar9) break;
    local_38[0] = (undefined8 *)pFVar7->_padding_;
    pFVar7->_padding_ = 0;
    if (local_38[0] == (undefined8 *)0x0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSlot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x1fd,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar3 + (longlong)*piVar1 * 8)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    uVar8 = (this->Children).ArrayNum;
    if (uVar8 == *piVar1) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Children).AllocatorInstance,piVar1);
    }
    pFVar3 = (this->Children).AllocatorInstance.Data;
    (this->Children).ArrayNum = uVar8 + 1;
    *(undefined8 **)(pFVar3 + (longlong)(int)uVar8 * 8) = local_38[0];
    local_38[0] = (undefined8 *)0x0;
    uVar6 = 0;
    if ((int)uVar8 < (this->Children).ArrayNum) {
      uVar6 = ~uVar8 >> 0x1f;
    }
    if (uVar6 == 0) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    SWrapBox::FSlot::Construct
              (*(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)(int)uVar8 * 8),
               (FChildren *)this,pFVar7);
    if (local_38[0] != (undefined8 *)0x0) {
      (**(code **)*local_38[0])(local_38[0],1);
    }
    pFVar7 = pFVar7 + 1;
  }
  DestructItems<SWrapBox::FSlot::FSlotArguments,int>
            ((FSlotArguments *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar3 = (param_1->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// GetChildAt @ 1429e97d0

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SUniformGridPanel::FSlot>::GetChildAt
          (TPanelChildren<SUniformGridPanel::FSlot> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 1429e9870

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SUniformGridPanel::FSlot>::GetChildAt
          (TPanelChildren<SUniformGridPanel::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 1429e9910

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SUniformWrapPanel::FSlot>::GetChildAt
          (TPanelChildren<SUniformWrapPanel::FSlot> *this,
          TSharedRef<SWidget,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 1429e99b0

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SUniformWrapPanel::FSlot>::GetChildAt
          (TPanelChildren<SUniformWrapPanel::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 1429e9a50

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SCanvas::FSlot>::GetChildAt
          (TPanelChildren<SCanvas::FSlot> *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 1429e9af0

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SCanvas::FSlot>::GetChildAt
          (TPanelChildren<SCanvas::FSlot> *this,TSharedRef<SWidget_const_,1> *__return_storage_ptr__
          ,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 1429e9b90

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SWrapBox::FSlot>::GetChildAt
          (TPanelChildren<SWrapBox::FSlot> *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 1429e9c30

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SWrapBox::FSlot>::GetChildAt
          (TPanelChildren<SWrapBox::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1429e9ed0

FWidgetRef * __thiscall
TPanelChildren<SUniformGridPanel::FSlot>::GetChildRefAt
          (TPanelChildren<SUniformGridPanel::FSlot> *this,FWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1429e9f70

FConstWidgetRef * __thiscall
TPanelChildren<SUniformGridPanel::FSlot>::GetChildRefAt
          (TPanelChildren<SUniformGridPanel::FSlot> *this,FConstWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1429ea010

FWidgetRef * __thiscall
TPanelChildren<SUniformWrapPanel::FSlot>::GetChildRefAt
          (TPanelChildren<SUniformWrapPanel::FSlot> *this,FWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1429ea0b0

FConstWidgetRef * __thiscall
TPanelChildren<SUniformWrapPanel::FSlot>::GetChildRefAt
          (TPanelChildren<SUniformWrapPanel::FSlot> *this,FConstWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1429ea150

FWidgetRef * __thiscall
TPanelChildren<SCanvas::FSlot>::GetChildRefAt
          (TPanelChildren<SCanvas::FSlot> *this,FWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1429ea1f0

FConstWidgetRef * __thiscall
TPanelChildren<SCanvas::FSlot>::GetChildRefAt
          (TPanelChildren<SCanvas::FSlot> *this,FConstWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1429ea290

FWidgetRef * __thiscall
TPanelChildren<SWrapBox::FSlot>::GetChildRefAt
          (TPanelChildren<SWrapBox::FSlot> *this,FWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 1429ea330

FConstWidgetRef * __thiscall
TPanelChildren<SWrapBox::FSlot>::GetChildRefAt
          (TPanelChildren<SWrapBox::FSlot> *this,FConstWidgetRef *__return_storage_ptr__,int param_1
          )

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSlotAt @ 1429ee980

FSlotBase * __thiscall
TPanelChildren<SUniformGridPanel::FSlot>::GetSlotAt
          (TPanelChildren<SUniformGridPanel::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSlotAt @ 1429eea00

FSlotBase * __thiscall
TPanelChildren<SUniformWrapPanel::FSlot>::GetSlotAt
          (TPanelChildren<SUniformWrapPanel::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSlotAt @ 1429eea80

FSlotBase * __thiscall
TPanelChildren<SCanvas::FSlot>::GetSlotAt(TPanelChildren<SCanvas::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// GetSlotAt @ 1429eeb00

FSlotBase * __thiscall
TPanelChildren<SWrapBox::FSlot>::GetSlotAt(TPanelChildren<SWrapBox::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// Num @ 1429f7e50

int __thiscall
TPanelChildren<SUniformGridPanel::FSlot>::Num(TPanelChildren<SUniformGridPanel::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Num @ 1429f7e60

int __thiscall
TPanelChildren<SUniformWrapPanel::FSlot>::Num(TPanelChildren<SUniformWrapPanel::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Num @ 1429f7e70

int __thiscall TPanelChildren<SCanvas::FSlot>::Num(TPanelChildren<SCanvas::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Num @ 1429f7e80

int __thiscall TPanelChildren<SWrapBox::FSlot>::Num(TPanelChildren<SWrapBox::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// Remove @ 142a05370

int __thiscall
TPanelChildren<SUniformGridPanel::FSlot>::Remove
          (TPanelChildren<SUniformGridPanel::FSlot> *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->Children).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if (param_1->Object ==
          *(SWidget **)(*(longlong *)((this->Children).AllocatorInstance.Data + lVar9) + 0x10)) {
        uVar6 = 0;
        if ((int)uVar8 < (this->Children).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        pFVar2 = (this->Children).AllocatorInstance.Data;
        _Dst = pFVar2 + (longlong)(int)uVar8 * 8;
        puVar3 = *(undefined8 **)(pFVar2 + (longlong)(int)uVar8 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        iVar7 = (this->Children).ArrayNum + ~uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->Children).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Children).AllocatorInstance,(this->Children).ArrayNum,
                   &(this->Children).ArrayMax);
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->Children).ArrayNum);
  }
  return -1;
}

// Remove @ 142a054e0

int __thiscall
TPanelChildren<SUniformWrapPanel::FSlot>::Remove
          (TPanelChildren<SUniformWrapPanel::FSlot> *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->Children).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if (param_1->Object ==
          *(SWidget **)(*(longlong *)((this->Children).AllocatorInstance.Data + lVar9) + 0x10)) {
        uVar6 = 0;
        if ((int)uVar8 < (this->Children).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        pFVar2 = (this->Children).AllocatorInstance.Data;
        _Dst = pFVar2 + (longlong)(int)uVar8 * 8;
        puVar3 = *(undefined8 **)(pFVar2 + (longlong)(int)uVar8 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        iVar7 = (this->Children).ArrayNum + ~uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->Children).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Children).AllocatorInstance,(this->Children).ArrayNum,
                   &(this->Children).ArrayMax);
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->Children).ArrayNum);
  }
  return -1;
}

// Remove @ 142a05650

int __thiscall
TPanelChildren<SCanvas::FSlot>::Remove
          (TPanelChildren<SCanvas::FSlot> *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->Children).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if (param_1->Object ==
          *(SWidget **)(*(longlong *)((this->Children).AllocatorInstance.Data + lVar9) + 0x10)) {
        uVar6 = 0;
        if ((int)uVar8 < (this->Children).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        pFVar2 = (this->Children).AllocatorInstance.Data;
        _Dst = pFVar2 + (longlong)(int)uVar8 * 8;
        puVar3 = *(undefined8 **)(pFVar2 + (longlong)(int)uVar8 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        iVar7 = (this->Children).ArrayNum + ~uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->Children).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Children).AllocatorInstance,(this->Children).ArrayNum,
                   &(this->Children).ArrayMax);
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->Children).ArrayNum);
  }
  return -1;
}

// Remove @ 142a057c0

int __thiscall
TPanelChildren<SWrapBox::FSlot>::Remove
          (TPanelChildren<SWrapBox::FSlot> *this,TSharedRef<SWidget,1> *param_1)

{
  int *piVar1;
  FScriptContainerElement *_Dst;
  FScriptContainerElement *pFVar2;
  undefined8 *puVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (0 < (this->Children).ArrayNum) {
    lVar9 = 0;
    do {
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < (this->Children).ArrayNum) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar7 = (*pcVar4)();
        return iVar7;
      }
      if (param_1->Object ==
          *(SWidget **)(*(longlong *)((this->Children).AllocatorInstance.Data + lVar9) + 0x10)) {
        uVar6 = 0;
        if ((int)uVar8 < (this->Children).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar7 = (*pcVar4)();
          return iVar7;
        }
        pFVar2 = (this->Children).AllocatorInstance.Data;
        _Dst = pFVar2 + (longlong)(int)uVar8 * 8;
        puVar3 = *(undefined8 **)(pFVar2 + (longlong)(int)uVar8 * 8);
        if (puVar3 != (undefined8 *)0x0) {
          (**(code **)*puVar3)(puVar3,1);
        }
        iVar7 = (this->Children).ArrayNum + ~uVar8;
        if (iVar7 != 0) {
          memmove(_Dst,_Dst + 8,(longlong)iVar7 << 3);
        }
        piVar1 = &(this->Children).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->Children).AllocatorInstance,(this->Children).ArrayNum,
                   &(this->Children).ArrayMax);
        return uVar8;
      }
      uVar8 = uVar8 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar8 < (this->Children).ArrayNum);
  }
  return -1;
}

// SupportSlotWithSlateAttribute @ 142a0f1e0

bool __thiscall
TPanelChildren<SUniformGridPanel::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SUniformGridPanel::FSlot> *this)

{
  return false;
}

// SupportSlotWithSlateAttribute @ 142a0f1f0

bool __thiscall
TPanelChildren<SUniformWrapPanel::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SUniformWrapPanel::FSlot> *this)

{
  return false;
}

// SupportSlotWithSlateAttribute @ 142a0f200

bool __thiscall
TPanelChildren<SCanvas::FSlot>::SupportSlotWithSlateAttribute(TPanelChildren<SCanvas::FSlot> *this)

{
  return true;
}

// SupportSlotWithSlateAttribute @ 142a0f210

bool __thiscall
TPanelChildren<SWrapBox::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SWrapBox::FSlot> *this)

{
  return true;
}

// operator[] @ 142a19190

FSlot * __thiscall
TPanelChildren<SListPanel::FSlot>::operator[](TPanelChildren<SListPanel::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlot *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlot *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlot **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// AddSlot @ 142a1abd0

int __thiscall
TPanelChildren<SListPanel::FSlot>::AddSlot
          (TPanelChildren<SListPanel::FSlot> *this,FSlotArguments *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FSlot *local_28 [2];
  
  local_28[0] = (param_1->Slot).Ptr;
  (param_1->Slot).Ptr = (FSlot *)0x0;
  if (local_28[0] == (FSlot *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x1fd,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  uVar6 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (uVar6 == *piVar1) {
    uVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  (this->Children).ArrayNum = uVar6 + 1;
  *(FSlot **)(pFVar2 + (longlong)(int)uVar6 * 8) = local_28[0];
  local_28[0] = (FSlot *)0x0;
  uVar7 = 0;
  if ((int)uVar6 < (this->Children).ArrayNum) {
    uVar7 = ~uVar6 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
  }
  TSlotBase<SListPanel::FSlot>::Construct
            (*(TSlotBase<SListPanel::FSlot> **)
              ((this->Children).AllocatorInstance.Data + (longlong)(int)uVar6 * 8),(FChildren *)this
             ,param_1);
  if (local_28[0] != (FSlot *)0x0) {
    (*(code *)**(undefined8 **)local_28[0])(local_28[0],1);
  }
  return uVar6;
}

// AddSlots @ 142a1ae00

void __thiscall
TPanelChildren<SListPanel::FSlot>::AddSlots
          (TPanelChildren<SListPanel::FSlot> *this,
          TArray<TSlotBase<SListPanel::FSlot>::FSlotArguments,TSizedDefaultAllocator<32>_> *param_1)

{
  int *piVar1;
  FSlotArguments *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FSlotArguments *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  FSlot *local_38 [2];
  
  iVar3 = (this->Children).ArrayNum;
  uVar9 = param_1->ArrayNum + iVar3;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &(this->Children).ArrayMax;
  if (*piVar1 < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&(this->Children).AllocatorInstance,iVar3,piVar1);
  }
  iVar3 = param_1->ArrayNum;
  pFVar8 = (FSlotArguments *)(param_1->AllocatorInstance).Data;
  pFVar2 = pFVar8 + iVar3;
  while( true ) {
    if (param_1->ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSlotBase<SListPanel::FSlot>::FSlotArguments,int,0>::operator!='::
      __l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar2) break;
    local_38[0] = (pFVar8->Slot).Ptr;
    (pFVar8->Slot).Ptr = (FSlot *)0x0;
    if (local_38[0] == (FSlot *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("NewSlot.Get()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                         ,0x1fd,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (this->Children).AllocatorInstance.Data;
    if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
       ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)*piVar1 * 8)) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    uVar9 = (this->Children).ArrayNum;
    if (uVar9 == *piVar1) {
      uVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->Children).AllocatorInstance,piVar1);
    }
    pFVar4 = (this->Children).AllocatorInstance.Data;
    (this->Children).ArrayNum = uVar9 + 1;
    *(FSlot **)(pFVar4 + (longlong)(int)uVar9 * 8) = local_38[0];
    local_38[0] = (FSlot *)0x0;
    uVar7 = 0;
    if ((int)uVar9 < (this->Children).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    TSlotBase<SListPanel::FSlot>::Construct
              (*(TSlotBase<SListPanel::FSlot> **)
                ((this->Children).AllocatorInstance.Data + (longlong)(int)uVar9 * 8),
               (FChildren *)this,pFVar8);
    if (local_38[0] != (FSlot *)0x0) {
      (*(code *)**(undefined8 **)local_38[0])(local_38[0],1);
    }
    pFVar8 = pFVar8 + 1;
  }
  DestructItems<TSlotBase<SListPanel::FSlot>::FSlotArguments,int>
            ((FSlotArguments *)(param_1->AllocatorInstance).Data,param_1->ArrayNum);
  pFVar4 = (param_1->AllocatorInstance).Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// GetChildAt @ 142a28a00

TSharedRef<SWidget,1> * __thiscall
TPanelChildren<SListPanel::FSlot>::GetChildAt
          (TPanelChildren<SListPanel::FSlot> *this,TSharedRef<SWidget,1> *__return_storage_ptr__,
          int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildAt @ 142a28aa0

TSharedRef<SWidget_const_,1> * __thiscall
TPanelChildren<SListPanel::FSlot>::GetChildAt
          (TPanelChildren<SListPanel::FSlot> *this,
          TSharedRef<SWidget_const_,1> *__return_storage_ptr__,int param_1)

{
  longlong lVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedRef<SWidget_const_,1> *pTVar6;
  
  uVar5 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedRef<SWidget_const_,1> *)(*pcVar3)();
      return pTVar6;
    }
  }
  lVar1 = *(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
  __return_storage_ptr__->Object = *(SWidget **)(lVar1 + 0x10);
  pTVar2 = *(TReferenceControllerBase<1> **)(lVar1 + 0x18);
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetChildRefAt @ 142a28b40

FWidgetRef * __thiscall
TPanelChildren<SListPanel::FSlot>::GetChildRefAt
          (TPanelChildren<SListPanel::FSlot> *this,FWidgetRef *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetChildRefAt @ 142a28be0

FConstWidgetRef * __thiscall
TPanelChildren<SListPanel::FSlot>::GetChildRefAt
          (TPanelChildren<SListPanel::FSlot> *this,FConstWidgetRef *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FConstWidgetRef *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FConstWidgetRef *)(*pcVar1)();
      return pFVar4;
    }
  }
  __return_storage_ptr__->WidgetReference =
       *(SWidget **)
        (*(longlong *)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8) + 0x10);
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.Object = (SWidget *)0x0;
  (__return_storage_ptr__->WidgetCopy).field0_0x0.TypedValue.SharedReferenceCount.
  ReferenceController = (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetSlotAt @ 142a2b120

FSlotBase * __thiscall
TPanelChildren<SListPanel::FSlot>::GetSlotAt(TPanelChildren<SListPanel::FSlot> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FSlotBase *pFVar4;
  
  uVar3 = 0;
  if (param_1 < (this->Children).ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FSlotBase *)(*pcVar1)();
      return pFVar4;
    }
  }
  return *(FSlotBase **)((this->Children).AllocatorInstance.Data + (longlong)param_1 * 8);
}

// InsertSlot @ 142a2c860

void __thiscall
TPanelChildren<SListPanel::FSlot>::InsertSlot
          (TPanelChildren<SListPanel::FSlot> *this,FSlotArguments *param_1,int param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  FSlot *local_28 [2];
  
  local_28[0] = (param_1->Slot).Ptr;
  lVar7 = (longlong)param_2;
  (param_1->Slot).Ptr = (FSlot *)0x0;
  if (local_28[0] == (FSlot *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("NewSlot.Get()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateCore\\Public\\Layout\\Children.h"
                       ,0x23c,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = (this->Children).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_28) &&
     ((FScriptContainerElement *)local_28 < pFVar2 + (longlong)(this->Children).ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (this->Children).ArrayNum;
  piVar1 = &(this->Children).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->Children).AllocatorInstance,piVar1);
  }
  (this->Children).ArrayNum = iVar5 + 1;
  pFVar2 = (this->Children).AllocatorInstance.Data + lVar7 * 8;
  memmove(pFVar2 + 8,pFVar2,(longlong)(iVar5 - param_2) << 3);
  *(FSlot **)((this->Children).AllocatorInstance.Data + lVar7 * 8) = local_28[0];
  local_28[0] = (FSlot *)0x0;
  uVar6 = 0;
  if (param_2 < (this->Children).ArrayNum) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TSlotBase<SListPanel::FSlot>::Construct
            (*(TSlotBase<SListPanel::FSlot> **)((this->Children).AllocatorInstance.Data + lVar7 * 8)
             ,(FChildren *)this,param_1);
  if (local_28[0] != (FSlot *)0x0) {
    (*(code *)**(undefined8 **)local_28[0])(local_28[0],1);
  }
  return;
}

// Num @ 142a2d4c0

int __thiscall TPanelChildren<SListPanel::FSlot>::Num(TPanelChildren<SListPanel::FSlot> *this)

{
  return (this->Children).ArrayNum;
}

// SupportSlotWithSlateAttribute @ 142a36ea0

bool __thiscall
TPanelChildren<SListPanel::FSlot>::SupportSlotWithSlateAttribute
          (TPanelChildren<SListPanel::FSlot> *this)

{
  return false;
}

