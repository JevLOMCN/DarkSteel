// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateTreeModule
// Functions: 5

// SetStatusWithPriority @ 14d4d05d0

ETaskCompletionStatus __thiscall
UE::StateTree::TTasksCompletionStatus<unsigned_int>::SetStatusWithPriority
          (TTasksCompletionStatus<unsigned_int> *this,int param_1,ETaskCompletionStatus param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  ETaskCompletionStatus EVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = param_1 + this->BitIndex;
  if (0x1f < iVar7) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("StateTaskIndex < MaxNumTasks",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\StateTree\\Source\\StateTreeModule\\Public\\StateTreeTasksStatus.h"
                       ,0xbc,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
  }
  uVar1 = *this->FirstCompletionBits;
  bVar5 = (byte)iVar7;
  EVar4 = ((byte)(*this->SecondCompletionBits >> (bVar5 & 0x1f)) & 1) * '\x02' +
          ((byte)(uVar1 >> (bVar5 & 0x1f)) & 1);
  if (EVar4 < param_2) {
    uVar6 = ~(1 << (bVar5 & 0x1f));
    *this->FirstCompletionBits = uVar6 & uVar1;
    *this->SecondCompletionBits = *this->SecondCompletionBits & uVar6;
    *this->FirstCompletionBits = *this->FirstCompletionBits | (param_2 & 1) << (bVar5 & 0x1f);
    *this->SecondCompletionBits = *this->SecondCompletionBits | (param_2 >> 1 & 1) << (bVar5 & 0x1f)
    ;
    return param_2;
  }
  return EVar4;
}

// GetCompletionStatus @ 14d4fc160

ETaskCompletionStatus __thiscall
UE::StateTree::TTasksCompletionStatus<unsigned_int>::GetCompletionStatus
          (TTasksCompletionStatus<unsigned_int> *this)

{
  uint uVar1;
  ETaskCompletionStatus EVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = this->CompletionMask;
  uVar4 = uVar1 & *this->FirstCompletionBits;
  uVar3 = uVar1 & *this->SecondCompletionBits;
  if ((uVar4 & uVar3) != 0) {
    return Failed;
  }
  if (this->TaskControl == All) {
    if (uVar3 != uVar1) {
      if (uVar4 == uVar1) {
        return Stopped;
      }
      EVar2 = Running;
      if ((uVar1 & (*this->SecondCompletionBits | *this->FirstCompletionBits)) == uVar1) {
        EVar2 = Succeeded;
      }
      return EVar2;
    }
  }
  else if (uVar3 == 0) {
    return uVar4 != 0;
  }
  return Succeeded;
}

// IsCompleted @ 14d501350

bool __thiscall
UE::StateTree::TTasksCompletionStatus<unsigned_int_const_>::IsCompleted
          (TTasksCompletionStatus<unsigned_int_const_> *this)

{
  uint uVar1;
  
  if (this->TaskControl != All) {
    return (this->CompletionMask & (*this->SecondCompletionBits | *this->FirstCompletionBits)) != 0;
  }
  uVar1 = this->CompletionMask;
  if (((uVar1 & *this->SecondCompletionBits & *this->FirstCompletionBits) == 0) &&
     (((*this->SecondCompletionBits | *this->FirstCompletionBits) & uVar1) != uVar1)) {
    return false;
  }
  return true;
}

// IsCompleted @ 14d5013a0

bool __thiscall
UE::StateTree::TTasksCompletionStatus<unsigned_int>::IsCompleted
          (TTasksCompletionStatus<unsigned_int> *this)

{
  uint uVar1;
  
  if (this->TaskControl != All) {
    return (this->CompletionMask & (*this->SecondCompletionBits | *this->FirstCompletionBits)) != 0;
  }
  uVar1 = this->CompletionMask;
  if (((uVar1 & *this->SecondCompletionBits & *this->FirstCompletionBits) == 0) &&
     (((*this->SecondCompletionBits | *this->FirstCompletionBits) & uVar1) != uVar1)) {
    return false;
  }
  return true;
}

// SetCompletionStatus @ 14d513bb0

void __thiscall
UE::StateTree::TTasksCompletionStatus<unsigned_int>::SetCompletionStatus
          (TTasksCompletionStatus<unsigned_int> *this,ETaskCompletionStatus param_1)

{
  uint uVar1;
  
  uVar1 = this->CompletionMask;
  *this->FirstCompletionBits = *this->FirstCompletionBits & ~uVar1;
  *this->SecondCompletionBits = *this->SecondCompletionBits & ~uVar1;
  if ((param_1 & Stopped) != Running) {
    *this->FirstCompletionBits = *this->FirstCompletionBits | this->CompletionMask;
  }
  if ((param_1 & Succeeded) != Running) {
    *this->SecondCompletionBits = *this->SecondCompletionBits | this->CompletionMask;
  }
  return;
}

