// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BuildPatchServices
// Functions: 11

// FBlockEntry @ 14321ff80

FBlockEntry * __thiscall
BuildPatchServices::FBlockEntry::FBlockEntry(FBlockEntry *this,ulong64 param_1,ulong64 param_2)

{
  this->Offset = param_1;
  this->Prev = (FBlockEntry *)0x0;
  this->Next = (FBlockEntry *)0x0;
  this->Size = param_2;
  return this;
}

// ~FBlockEntry @ 143227a10

void __thiscall BuildPatchServices::FBlockEntry::~FBlockEntry(FBlockEntry *this)

{
  this->Prev = (FBlockEntry *)0x0;
  this->Next = (FBlockEntry *)0x0;
  return;
}

// Chop @ 143245750

void __thiscall
BuildPatchServices::FBlockEntry::Chop
          (FBlockEntry *this,ulong64 param_1,ulong64 param_2,FBlockEntry **param_3,
          FBlockEntry **param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  FBlockEntry *pFVar3;
  ulong64 uVar4;
  ulonglong uVar5;
  
  uVar1 = param_1 + param_2;
  uVar2 = this->Offset;
  uVar5 = this->Size + uVar2;
  if (uVar2 < param_1) {
    if (uVar1 < uVar5) {
      pFVar3 = ::operator_new(0x20);
      if (pFVar3 == (FBlockEntry *)0x0) {
        pFVar3 = (FBlockEntry *)0x0;
      }
      else {
        pFVar3->Offset = uVar1;
        pFVar3->Size = uVar5 - uVar1;
        pFVar3->Next = (FBlockEntry *)0x0;
      }
      pFVar3->Prev = this;
      pFVar3->Next = this->Next;
      if (this->Next == (FBlockEntry *)0x0) {
        *param_4 = pFVar3;
        uVar4 = param_1 - this->Offset;
        this->Next = pFVar3;
      }
      else {
        this->Next->Prev = pFVar3;
        uVar4 = param_1 - this->Offset;
        this->Next = pFVar3;
      }
    }
    else {
      uVar4 = param_1 - uVar2;
    }
    this->Size = uVar4;
  }
  else if (uVar1 < uVar5) {
    this->Offset = uVar1;
    this->Size = uVar5 - uVar1;
  }
  else {
    if (this->Prev == (FBlockEntry *)0x0) {
      *param_3 = this->Next;
    }
    else {
      this->Prev->Next = this->Next;
    }
    if (this->Next == (FBlockEntry *)0x0) {
      *param_4 = this->Prev;
    }
    else {
      this->Next->Prev = this->Prev;
    }
    this->Prev = (FBlockEntry *)0x0;
    this->Next = (FBlockEntry *)0x0;
    ::operator_delete(this,0x20);
  }
  return;
}

// GetNext @ 143257070

FBlockEntry * __thiscall BuildPatchServices::FBlockEntry::GetNext(FBlockEntry *this)

{
  return this->Next;
}

// GetOffset @ 1432570c0

ulong64 __thiscall BuildPatchServices::FBlockEntry::GetOffset(FBlockEntry *this)

{
  return this->Offset;
}

// GetPrevious @ 1432571e0

FBlockEntry * __thiscall BuildPatchServices::FBlockEntry::GetPrevious(FBlockEntry *this)

{
  return this->Prev;
}

// GetSize @ 143257620

ulong64 __thiscall BuildPatchServices::FBlockEntry::GetSize(FBlockEntry *this)

{
  return this->Size;
}

// InsertAfter @ 1432582a0

void __thiscall
BuildPatchServices::FBlockEntry::InsertAfter
          (FBlockEntry *this,FBlockEntry *param_1,FBlockEntry **param_2)

{
  param_1->Prev = this;
  param_1->Next = this->Next;
  if (this->Next != (FBlockEntry *)0x0) {
    this->Next->Prev = param_1;
    this->Next = param_1;
    return;
  }
  *param_2 = param_1;
  this->Next = param_1;
  return;
}

// InsertBefore @ 1432582d0

void __thiscall
BuildPatchServices::FBlockEntry::InsertBefore
          (FBlockEntry *this,FBlockEntry *param_1,FBlockEntry **param_2)

{
  param_1->Prev = this->Prev;
  param_1->Next = this;
  if (this->Prev != (FBlockEntry *)0x0) {
    this->Prev->Next = param_1;
    this->Prev = param_1;
    return;
  }
  *param_2 = param_1;
  this->Prev = param_1;
  return;
}

// Merge @ 14325bbe0

void __thiscall
BuildPatchServices::FBlockEntry::Merge(FBlockEntry *this,ulong64 param_1,ulong64 param_2)

{
  ulonglong uVar1;
  ulong64 uVar2;
  
  uVar1 = this->Offset;
  uVar2 = param_1;
  if (uVar1 < param_1) {
    uVar2 = uVar1;
  }
  uVar1 = this->Size + uVar1;
  this->Offset = uVar2;
  if (uVar1 < param_1 + param_2) {
    uVar1 = param_1 + param_2;
  }
  this->Size = uVar1 - uVar2;
  return;
}

// Unlink @ 14326c580

void __thiscall
BuildPatchServices::FBlockEntry::Unlink
          (FBlockEntry *this,FBlockEntry **param_1,FBlockEntry **param_2)

{
  if (this->Prev == (FBlockEntry *)0x0) {
    *param_1 = this->Next;
  }
  else {
    this->Prev->Next = this->Next;
  }
  if (this->Next == (FBlockEntry *)0x0) {
    *param_2 = this->Prev;
  }
  else {
    this->Next->Prev = this->Prev;
  }
  this->Prev = (FBlockEntry *)0x0;
  this->Next = (FBlockEntry *)0x0;
  ::operator_delete(this,0x20);
  return;
}

