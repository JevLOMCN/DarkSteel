// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreOnDemand
// Functions: 2

// operator[] @ 1445aa330

FOnDemandChunkEntry * __thiscall
TArrayView<UE::IoStore::FOnDemandChunkEntry,int>::operator[]
          (TArrayView<UE::IoStore::FOnDemandChunkEntry,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FOnDemandChunkEntry *pFVar4;
  
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
      pFVar4 = (FOnDemandChunkEntry *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

// operator[] @ 1445aa3b0

FIoChunkId * __thiscall
TArrayView<FIoChunkId,int>::operator[](TArrayView<FIoChunkId,int> *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  FIoChunkId *pFVar4;
  
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
      pFVar4 = (FIoChunkId *)(*pcVar1)();
      return pFVar4;
    }
  }
  return this->DataPtr + param_1;
}

