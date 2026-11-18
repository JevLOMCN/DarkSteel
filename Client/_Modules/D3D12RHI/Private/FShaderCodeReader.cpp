// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: D3D12RHI
// Functions: 1

// GetOffsetShaderCode @ 145a69760

TArrayView<unsigned_char_const_,int> * __thiscall
FShaderCodeReader::GetOffsetShaderCode
          (FShaderCodeReader *this,TArrayView<unsigned_char_const_,int> *__return_storage_ptr__,
          int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uchar *puVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)(this->ShaderCode).ArrayNum;
  if (uVar6 < 4) {
    iVar3 = 0;
  }
  else {
    puVar4 = TArrayView<unsigned_char_const_,int>::operator[](&this->ShaderCode,0);
    iVar3 = *(int *)(puVar4 + (uVar6 - 4));
    if (iVar3 < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("LocalOptionalDataSize >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                         ,0x45d,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<unsigned_char_const_,int> *)(*pcVar1)();
        return pTVar5;
      }
    }
    if ((this->ShaderCode).ArrayNum < iVar3) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("ShaderCode.Num() >= LocalOptionalDataSize",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderCore.h"
                         ,0x45e,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TArrayView<unsigned_char_const_,int> *)(*pcVar1)();
        return pTVar5;
      }
    }
  }
  __return_storage_ptr__->DataPtr = (this->ShaderCode).DataPtr + param_1;
  iVar3 = ((this->ShaderCode).ArrayNum - iVar3) - param_1;
  __return_storage_ptr__->ArrayNum = iVar3;
  if (iVar3 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TArrayView<unsigned_char_const_,int> *)(*pcVar1)();
      return pTVar5;
    }
  }
  return __return_storage_ptr__;
}

