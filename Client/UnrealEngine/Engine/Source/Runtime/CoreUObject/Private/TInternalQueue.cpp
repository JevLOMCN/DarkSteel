// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// Remove @ 142339100

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
TIoPriorityQueue<FEventLoadNode2>::TInternalQueue::Remove
          (TInternalQueue *this,FEventLoadNode2 *param_1)

{
  FEventLoadNode2 *pFVar1;
  FEventLoadNode2 *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  
  pFVar1 = param_1->Prev;
  pFVar2 = param_1->Next;
  param_1->Prev = (FEventLoadNode2 *)0x0;
  param_1->Next = (FEventLoadNode2 *)0x0;
  if (pFVar1 == (FEventLoadNode2 *)0x0) {
    this->Head = pFVar2;
    if (pFVar2 != (FEventLoadNode2 *)0x0) {
      pFVar2->Prev = (FEventLoadNode2 *)0x0;
      goto LAB_14233913e;
    }
  }
  else {
    if (pFVar2 != (FEventLoadNode2 *)0x0) {
      pFVar1->Next = pFVar2;
      pFVar2->Prev = pFVar1;
      return false;
    }
    pFVar1->Next = (FEventLoadNode2 *)0x0;
  }
  this->Tail = pFVar1;
LAB_14233913e:
  if (this->Head != (FEventLoadNode2 *)0x0) {
    return false;
  }
  if ((this->Tail != (FEventLoadNode2 *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Tail",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Internal\\IO\\IoPriorityQueue.h"
                         ,0x34,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    uVar5 = (*pcVar3)();
    return (bool)uVar5;
  }
  return true;
}

