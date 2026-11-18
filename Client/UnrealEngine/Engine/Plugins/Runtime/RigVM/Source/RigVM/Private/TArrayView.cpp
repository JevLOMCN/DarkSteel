// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigVM
// Functions: 2

// operator[] @ 14a07df70

FRigVMMemoryHandle * __thiscall
TArrayView<FRigVMMemoryHandle,int>::operator[](TArrayView<FRigVMMemoryHandle,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigVMMemoryHandle *pFVar4;
  
  uVar3 = 0;
  if (param_1 < this->ArrayNum) {
    uVar3 = (uint)~param_1 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRigVMMemoryHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// Last @ 14a1b05b0

FRigVMMemoryHandle * __thiscall
TArrayView<FRigVMMemoryHandle,int>::Last(TArrayView<FRigVMMemoryHandle,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FRigVMMemoryHandle *pFVar4;
  uint uVar5;
  
  uVar5 = ~param_1 + this->ArrayNum;
  uVar3 = 0;
  if ((int)uVar5 < this->ArrayNum) {
    uVar3 = ~uVar5 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar4 = (FRigVMMemoryHandle *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + ((this->ArrayNum - param_1) + -1);
}

