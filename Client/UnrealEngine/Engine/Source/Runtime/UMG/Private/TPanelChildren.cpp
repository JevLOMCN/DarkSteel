// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 2

// InsertSlot @ 14692c0e0

void __thiscall
TPanelChildren<SConstraintCanvas::FSlot>::InsertSlot
          (TPanelChildren<SConstraintCanvas::FSlot> *this,FSlotArguments *param_1,int param_2)

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
  SConstraintCanvas::FSlot::Construct
            (*(FSlot **)((this->Children).AllocatorInstance.Data + lVar7 * 8),(FChildren *)this,
             param_1);
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

// InsertSlot @ 1469e0770

void __thiscall
TPanelChildren<SRadialBox::FSlot>::InsertSlot
          (TPanelChildren<SRadialBox::FSlot> *this,FSlotArguments *param_1,int param_2)

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
  TSlotBase<SRadialBox::FSlot>::Construct
            (*(TSlotBase<SRadialBox::FSlot> **)((this->Children).AllocatorInstance.Data + lVar7 * 8)
             ,(FChildren *)this,(FSlotArguments *)param_1);
  if (local_28[0] != (undefined8 *)0x0) {
    (**(code **)*local_28[0])(local_28[0],1);
  }
  return;
}

