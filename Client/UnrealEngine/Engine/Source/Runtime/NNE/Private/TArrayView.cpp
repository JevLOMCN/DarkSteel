// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NNE
// Functions: 1

// TArrayView<unsigned_char_const_,__int64><TArray<unsigned_char,TSizedDefaultAllocator<64>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_> @ 1436e3bc0

TArrayView<unsigned_char_const_,__int64> * __thiscall
TArrayView<unsigned_char_const_,__int64>::
TArrayView<unsigned_char_const_,__int64><TArray<unsigned_char,TSizedDefaultAllocator<64>_>_const_&,TArray<unsigned_char,TSizedDefaultAllocator<64>_>_>
          (TArrayView<unsigned_char_const_,__int64> *this,
          TArray<unsigned_char,TSizedDefaultAllocator<64>_> *param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_char_const_,__int64> *pTVar4;
  
  this->DataPtr = (uchar *)(param_1->AllocatorInstance).Data;
  lVar1 = param_1->ArrayNum;
  if (-1 < lVar1) {
    this->ArrayNum = lVar1;
    return this;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("InCount >= 0",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                     ,0xeb,L"");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TArrayView<unsigned_char_const_,__int64> *)(*pcVar2)();
    return pTVar4;
  }
  this->ArrayNum = lVar1;
  return this;
}

