// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 6

// FIoStatusBuilder @ 1417a23e0

FIoStatusBuilder * __thiscall
FIoStatusBuilder::FIoStatusBuilder
          (FIoStatusBuilder *this,wchar_t *param_1,EIoErrorCode param_2,uint param_3,uint param_4)

{
  wchar_t *pwVar1;
  longlong *plVar2;
  size_t sVar3;
  TStringBuilderBase<wchar_t> *pTVar4;
  int iVar5;
  
  pwVar1 = (this->Message).StringBuffer;
  this->StatusCode = param_2;
  iVar5 = 0;
  (this->Message)._padding_ = (longlong)pwVar1;
  (this->Message)._padding_ = (longlong)pwVar1;
  this->SystemErrorCode = 0;
  (this->Message)._padding_ = (longlong)(this + 1);
  *(undefined2 *)&(this->Message)._padding_ = 0;
  if (this + 1 < (FIoStatusBuilder *)((this->Message).StringBuffer + 1)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)&this->Message,1);
  }
  *(undefined2 *)(this->Message)._padding_ = 0x3c;
  plVar2 = &(this->Message)._padding_;
  *plVar2 = *plVar2 + 2;
  if (param_1 != (wchar_t *)0x0) {
    sVar3 = wcslen(param_1);
    iVar5 = (int)sVar3;
  }
  pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                     ((TStringBuilderBase<wchar_t> *)&this->Message,param_1,iVar5);
  if (pTVar4->End < pTVar4->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
  }
  *pTVar4->CurPos = L'-';
  pTVar4->CurPos = pTVar4->CurPos + 1;
  pTVar4 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar4,L"%u");
  if (pTVar4->End < pTVar4->CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(pTVar4,1);
  }
  *pTVar4->CurPos = L',';
  pTVar4->CurPos = pTVar4->CurPos + 1;
  pTVar4 = TStringBuilderBase<wchar_t>::AppendfImpl(pTVar4,L"%u");
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar4,L">",1);
  return this;
}

// FIoStatusBuilder @ 1417a2530

FIoStatusBuilder * __thiscall
FIoStatusBuilder::FIoStatusBuilder(FIoStatusBuilder *this,EIoErrorCode param_1)

{
  wchar_t *pwVar1;
  
  pwVar1 = (this->Message).StringBuffer;
  this->StatusCode = param_1;
  (this->Message)._padding_ = (longlong)pwVar1;
  (this->Message)._padding_ = (longlong)pwVar1;
  (this->Message)._padding_ = (longlong)(this + 1);
  this->SystemErrorCode = 0;
  *(undefined2 *)&(this->Message)._padding_ = 0;
  return this;
}

// FIoStatusBuilder @ 1417a2560

FIoStatusBuilder * __thiscall
FIoStatusBuilder::FIoStatusBuilder(FIoStatusBuilder *this,EIoErrorCode param_1,uint param_2)

{
  wchar_t *pwVar1;
  
  pwVar1 = (this->Message).StringBuffer;
  this->StatusCode = param_1;
  (this->Message)._padding_ = (longlong)pwVar1;
  (this->Message)._padding_ = (longlong)pwVar1;
  (this->Message)._padding_ = (longlong)(this + 1);
  this->SystemErrorCode = param_2;
  *(undefined2 *)&(this->Message)._padding_ = 0;
  return this;
}

// ~FIoStatusBuilder @ 1417a7370

void __thiscall FIoStatusBuilder::~FIoStatusBuilder(FIoStatusBuilder *this)

{
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>
            ((TStringBuilderBase<wchar_t> *)&this->Message);
  return;
}

// operator<< @ 1417a85b0

FIoStatusBuilder * __thiscall
FIoStatusBuilder::operator<<(FIoStatusBuilder *this,TStringView<wchar_t> *param_1)

{
  TStringBuilderBase<wchar_t>::Append<wchar_t,0>
            ((TStringBuilderBase<wchar_t> *)&this->Message,param_1->DataPtr,
             (int)*(undefined8 *)&param_1->Size);
  return this;
}

// operator_FIoStatus @ 1417aaad0

FIoStatus * __thiscall
FIoStatusBuilder::operator_FIoStatus(FIoStatusBuilder *this,FIoStatus *__return_storage_ptr__)

{
  uint uVar1;
  EIoErrorCode EVar2;
  void *_Src;
  undefined4 *puVar3;
  longlong lVar4;
  int iVar5;
  
  _Src = (void *)(this->Message)._padding_;
  lVar4 = (this->Message)._padding_;
  uVar1 = this->SystemErrorCode;
  EVar2 = this->StatusCode;
  (__return_storage_ptr__->ErrorMessage).Chars = (wchar_t *)0x0;
  iVar5 = (int)(lVar4 - (longlong)_Src >> 1);
  if (iVar5 != 0) {
    lVar4 = (longlong)iVar5;
    puVar3 = FMemory::Malloc(lVar4 * 2 + 10,0);
    *puVar3 = 1;
    puVar3[1] = iVar5;
    (__return_storage_ptr__->ErrorMessage).Chars = (wchar_t *)(puVar3 + 2);
    if (0 < iVar5) {
      memcpy(puVar3 + 2,_Src,lVar4 * 2);
    }
    (__return_storage_ptr__->ErrorMessage).Chars[lVar4] = L'\0';
  }
  __return_storage_ptr__->SystemErrorCode = uVar1;
  __return_storage_ptr__->ErrorCode = EVar2;
  return __return_storage_ptr__;
}

