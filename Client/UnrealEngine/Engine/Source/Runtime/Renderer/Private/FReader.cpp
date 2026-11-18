// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// ReadCount @ 145807c20

TArrayView<unsigned_int_const_,int> * __thiscall
GPUMessage::FReader::ReadCount
          (FReader *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,int param_1)

{
  uint uVar1;
  uint *puVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  TArrayView<unsigned_int_const_,int> *pTVar7;
  int iVar8;
  int iVar9;
  undefined4 uStack_c;
  
  uVar1 = this->PayloadSize;
  __return_storage_ptr__->DataPtr = this->PayloadData;
  __return_storage_ptr__->ArrayNum = uVar1;
  if ((int)uVar1 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<unsigned_int_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  uVar1 = this->ReadOffset;
  iVar8 = __return_storage_ptr__->ArrayNum;
  uVar4 = 0;
  if ((int)uVar1 < 0) {
    uVar4 = uVar1;
  }
  iVar5 = uVar1 - uVar4;
  if (iVar8 < (int)(uVar1 - uVar4)) {
    iVar5 = iVar8;
  }
  puVar2 = __return_storage_ptr__->DataPtr;
  iVar9 = iVar8 - iVar5;
  if ((int)(uVar4 + param_1) < iVar8 - iVar5) {
    iVar9 = uVar4 + param_1;
  }
  iVar8 = 0;
  if (0 < iVar9) {
    iVar8 = iVar9;
  }
  if (iVar8 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      pTVar7 = (TArrayView<unsigned_int_const_,int> *)(*pcVar3)();
      return pTVar7;
    }
  }
  __return_storage_ptr__->DataPtr = puVar2 + iVar5;
  *(ulonglong *)&__return_storage_ptr__->ArrayNum = CONCAT44(uStack_c,iVar8);
  this->ReadOffset = this->ReadOffset + __return_storage_ptr__->ArrayNum;
  return __return_storage_ptr__;
}

