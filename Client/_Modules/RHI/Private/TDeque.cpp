// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RHI
// Functions: 5

// EmplaceLast<unsigned_int> @ 145c81390

uint * __thiscall
TDeque<unsigned_int,TSizedDefaultAllocator<32>_>::EmplaceLast<unsigned_int>
          (TDeque<unsigned_int,TSizedDefaultAllocator<32>_> *this,uint *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ulonglong uVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  int iVar6;
  
  if (this->Count == this->Capacity) {
    iVar6 = this->Count + 1;
    uVar5 = (ulonglong)iVar6;
    if (this->Capacity == 0) {
      uVar3 = 4;
      if (4 < uVar5) {
        uVar3 = uVar5;
      }
    }
    else {
      uVar3 = (uVar5 * 3 >> 3) + 0x10 + uVar5;
    }
    uVar4 = FMemory::QuantizeSize(uVar3 * 4,0);
    iVar2 = (int)(uVar4 >> 2);
    if (iVar2 < iVar6) {
      iVar2 = 0x7fffffff;
    }
    Grow(this,iVar2);
  }
  pFVar1 = (this->Storage).Data + (longlong)this->Tail * 4;
  *(uint *)pFVar1 = *param_1;
  iVar6 = this->Tail + 1;
  if (this->Capacity <= iVar6) {
    iVar6 = iVar6 - this->Capacity;
  }
  this->Count = this->Count + 1;
  this->Tail = iVar6;
  return (uint *)pFVar1;
}

// First @ 145ca5660

uint * __thiscall
TDeque<unsigned_int,TSizedDefaultAllocator<32>_>::First
          (TDeque<unsigned_int,TSizedDefaultAllocator<32>_> *this)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  
  if (this->Count < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Count)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                       ,0x248,L"Parameter index %d exceeds container size %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      puVar3 = (uint *)(*pcVar1)();
      return puVar3;
    }
  }
  return (uint *)((this->Storage).Data + (longlong)this->Head * 4);
}

// Grow @ 145cafbc0

void __thiscall
TDeque<unsigned_int,TSizedDefaultAllocator<32>_>::Grow
          (TDeque<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  ForAnyElementType local_res8;
  
  if (this->Count != 0) {
    if (this->Head < this->Tail) {
      ShiftElementsLeft(this,this->Count);
    }
    else {
      local_res8.Data = (FScriptContainerElement *)0x0;
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                (&local_res8,0,this->Tail,4);
      memmove(local_res8.Data,(this->Storage).Data,(longlong)this->Tail << 2);
      iVar1 = this->Capacity - this->Head;
      ShiftElementsLeft(this,iVar1);
      memmove((this->Storage).Data + (longlong)iVar1 * 4,local_res8.Data,(longlong)this->Tail << 2);
      if (local_res8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_res8.Data);
      }
    }
  }
  TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
            (&this->Storage,this->Count,param_1,4);
  this->Capacity = param_1;
  this->Tail = this->Count;
  this->Head = 0;
  return;
}

// PopFirst @ 145cb4550

void __thiscall
TDeque<unsigned_int,TSizedDefaultAllocator<32>_>::PopFirst
          (TDeque<unsigned_int,TSizedDefaultAllocator<32>_> *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->Count < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < Count)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Deque.h"
                       ,0x248,L"Parameter index %d exceeds container size %d");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar3 = this->Head + 1;
  if (this->Capacity <= iVar3) {
    iVar3 = iVar3 - this->Capacity;
  }
  this->Count = this->Count + -1;
  this->Head = iVar3;
  return;
}

// ShiftElementsLeft @ 145cc02e0

void __thiscall
TDeque<unsigned_int,TSizedDefaultAllocator<32>_>::ShiftElementsLeft
          (TDeque<unsigned_int,TSizedDefaultAllocator<32>_> *this,int param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  
  if ((this->Head != 0) && (iVar4 = 0, 0 < param_1)) {
    do {
      iVar1 = this->Head;
      pFVar2 = (this->Storage).Data;
      iVar3 = param_1 - iVar4;
      if (iVar1 < param_1 - iVar4) {
        iVar3 = iVar1;
      }
      memmove(pFVar2 + (longlong)iVar4 * 4,pFVar2 + ((longlong)iVar1 + (longlong)iVar4) * 4,
              (longlong)iVar3 << 2);
      iVar4 = iVar4 + iVar3;
    } while (iVar4 < param_1);
  }
  return;
}

