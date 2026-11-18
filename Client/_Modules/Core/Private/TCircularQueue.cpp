// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// Enqueue @ 141c936a0

bool __thiscall TCircularQueue<int>::Enqueue(TCircularQueue<int> *this,int *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  TAtomic<unsigned_int> TVar7;
  
  TVar7 = (TAtomic<unsigned_int>)((int)this->Tail + 1U & (this->Buffer).IndexMask);
  if (TVar7 == this->Head) {
    return false;
  }
  uVar6 = (uint)this->Tail & (this->Buffer).IndexMask;
  iVar1 = *param_1;
  uVar5 = 0;
  if ((int)uVar6 < (this->Buffer).Elements.ArrayNum) {
    uVar5 = ~uVar6 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  *(int *)((this->Buffer).Elements.AllocatorInstance.Data + (longlong)(int)uVar6 * 4) = iVar1;
  LOCK();
  this->Tail = TVar7;
  UNLOCK();
  return true;
}

// Peek @ 141c95bb0

int * __thiscall TCircularQueue<int>::Peek(TCircularQueue<int> *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  
  if (this->Head == this->Tail) {
    return (int *)0x0;
  }
  uVar5 = (uint)this->Head & (this->Buffer).IndexMask;
  uVar3 = 0;
  if ((int)uVar5 < (this->Buffer).Elements.ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      piVar4 = (int *)(*pcVar1)();
      return piVar4;
    }
  }
  return (int *)((this->Buffer).Elements.AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
}

// Peek @ 141c95c40

bool __thiscall TCircularQueue<int>::Peek(TCircularQueue<int> *this,int *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  
  if (this->Head == this->Tail) {
    return false;
  }
  uVar5 = (uint)this->Head & (this->Buffer).IndexMask;
  uVar4 = 0;
  if ((int)uVar5 < (this->Buffer).Elements.ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  *param_1 = *(int *)((this->Buffer).Elements.AllocatorInstance.Data + (longlong)(int)uVar5 * 4);
  return true;
}

