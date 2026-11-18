// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WebSockets
// Functions: 1

// TStringConversion<FUTF8ToTCHAR_Convert,128> @ 14b3f7fa0

TStringConversion<FUTF8ToTCHAR_Convert,128> * __thiscall
TStringConversion<FUTF8ToTCHAR_Convert,128>::TStringConversion<FUTF8ToTCHAR_Convert,128>
          (TStringConversion<FUTF8ToTCHAR_Convert,128> *this,char *param_1,int param_2)

{
  int iVar1;
  TStringConversion<FUTF8ToTCHAR_Convert,128> *pTVar2;
  int iVar3;
  
  iVar3 = 0;
  this->_padding_ = 0;
  if (param_1 == (char *)0x0) {
    this->Ptr = (wchar_t *)0x0;
    this->StringLength = 0;
  }
  else {
    if ((0 < param_2) && (param_1[(longlong)param_2 + -1] == '\0')) {
      iVar3 = 1;
      param_2 = param_2 + -1;
    }
    iVar1 = UE::Core::Private::GetConvertedLength((wchar_t *)0x0,(uchar *)param_1,param_2);
    this->StringLength = iVar1;
    TSizedInlineAllocator<128,32,TSizedDefaultAllocator<32>_>::ForElementType<wchar_t>::
    ResizeAllocation((ForElementType<wchar_t> *)this,0,iVar1 + iVar3,2);
    pTVar2 = this;
    if ((TStringConversion<FUTF8ToTCHAR_Convert,128> *)this->_padding_ !=
        (TStringConversion<FUTF8ToTCHAR_Convert,128> *)0x0) {
      pTVar2 = (TStringConversion<FUTF8ToTCHAR_Convert,128> *)this->_padding_;
    }
    this->Ptr = (wchar_t *)pTVar2;
    UE::Core::Private::Convert((wchar_t *)pTVar2,iVar1 + iVar3,(uchar *)param_1,iVar3 + param_2);
  }
  return this;
}

