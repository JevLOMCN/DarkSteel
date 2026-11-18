// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 3

// TStringBuilderWithBuffer<wchar_t,64><TStringView<wchar_t>_const_&> @ 14166efb0

TStringBuilderWithBuffer<wchar_t,64> * __thiscall
TStringBuilderWithBuffer<wchar_t,64>::
TStringBuilderWithBuffer<wchar_t,64><TStringView<wchar_t>_const_&>
          (TStringBuilderWithBuffer<wchar_t,64> *this,EInPlace param_1,TStringView<wchar_t> *param_2
          )

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  void *pvVar3;
  ulong64 uVar4;
  int iVar5;
  
  pwVar1 = this->StringBuffer;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)pwVar1;
  this->_padding_ = (longlong)pwVar1;
  this->_padding_ = (longlong)(this + 1);
  pwVar2 = param_2->DataPtr;
  iVar5 = (int)*(undefined8 *)&param_2->Size;
  uVar4 = (ulong64)iVar5;
  if (this + 1 < (TStringBuilderWithBuffer<wchar_t,64> *)(pwVar1 + uVar4)) {
    TStringBuilderBase<wchar_t>::Extend((TStringBuilderBase<wchar_t> *)this,uVar4);
  }
  if (iVar5 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy((void *)this->_padding_,pwVar2,uVar4 * 2);
    this->_padding_ = (longlong)((longlong)pvVar3 + uVar4 * 2);
  }
  return this;
}

// TStringBuilderWithBuffer<char8_t,128><TStringView<char8_t>_> @ 141786f80

TStringBuilderWithBuffer<char8_t,128> * __thiscall
TStringBuilderWithBuffer<char8_t,128>::TStringBuilderWithBuffer<char8_t,128><TStringView<char8_t>_>
          (TStringBuilderWithBuffer<char8_t,128> *this,EInPlace param_1,
          TStringView<char8_t> *param_2)

{
  uchar *puVar1;
  uchar *puVar2;
  void *pvVar3;
  int iVar4;
  ulong64 uVar5;
  
  puVar1 = this->StringBuffer;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)(this + 1);
  puVar2 = param_2->DataPtr;
  iVar4 = (int)*(undefined8 *)&param_2->Size;
  uVar5 = (ulong64)iVar4;
  if (this + 1 < (TStringBuilderWithBuffer<char8_t,128> *)(puVar1 + uVar5)) {
    TStringBuilderBase<char8_t>::Extend((TStringBuilderBase<char8_t> *)this,uVar5);
  }
  if (iVar4 != 0) {
    pvVar3 = FGenericPlatformString::Memcpy((void *)this->_padding_,puVar2,uVar5);
    this->_padding_ = (longlong)pvVar3 + uVar5;
  }
  return this;
}

// TStringBuilderWithBuffer<wchar_t,128><UE::String::Private::TJoinQuotedBy<TArrayView<TStringView<wchar_t>_const_,int>,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t_const_(&)[2]>_> @ 141ccd910

TStringBuilderWithBuffer<wchar_t,128> * __thiscall
TStringBuilderWithBuffer<wchar_t,128>::
TStringBuilderWithBuffer<wchar_t,128><UE::String::Private::TJoinQuotedBy<TArrayView<TStringView<wchar_t>_const_,int>,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t_const_(&)[2]>_>
          (TStringBuilderWithBuffer<wchar_t,128> *this,EInPlace param_1,
          TJoinQuotedBy<TArrayView<TStringView<wchar_t>_const_,int>,FIdentityFunctor,wchar_t_const_(&)[3],wchar_t_const_(&)[2]>
          *param_2)

{
  wchar_t (*_Str) [2];
  wchar_t (*_Str_00) [3];
  bool bVar1;
  int iVar2;
  size_t sVar3;
  TStringBuilderBase<wchar_t> *pTVar4;
  TStringView<wchar_t> *pTVar5;
  TStringView<wchar_t> *pTVar6;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)this->StringBuffer;
  this->_padding_ = (longlong)this->StringBuffer;
  bVar1 = true;
  this->_padding_ = (longlong)(this + 1);
  _Str = param_2->Quote;
  _Str_00 = param_2->Delimiter;
  pTVar5 = param_2->Range->DataPtr;
  pTVar6 = pTVar5 + param_2->Range->ArrayNum;
  if (pTVar5 != pTVar6) {
    if (_Str_00 == (wchar_t (*) [3])0x0) {
      do {
        if (bVar1) {
          bVar1 = false;
        }
        else {
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)this,(wchar_t *)0x0,0);
        }
        iVar2 = 0;
        if (_Str != (wchar_t (*) [2])0x0) {
          sVar3 = wcslen(*_Str);
          iVar2 = (int)sVar3;
        }
        pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                           ((TStringBuilderBase<wchar_t> *)this,*_Str,iVar2);
        pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                           (pTVar4,pTVar5->DataPtr,(int)*(undefined8 *)&pTVar5->Size);
        iVar2 = 0;
        if (_Str != (wchar_t (*) [2])0x0) {
          sVar3 = wcslen(*_Str);
          iVar2 = (int)sVar3;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar4,*_Str,iVar2);
        pTVar5 = pTVar5 + 1;
      } while (pTVar5 != pTVar6);
    }
    else {
      do {
        if (bVar1) {
          bVar1 = false;
        }
        else {
          sVar3 = wcslen(*_Str_00);
          TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                    ((TStringBuilderBase<wchar_t> *)this,*_Str_00,(int)sVar3);
        }
        iVar2 = 0;
        if (_Str != (wchar_t (*) [2])0x0) {
          sVar3 = wcslen(*_Str);
          iVar2 = (int)sVar3;
        }
        pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                           ((TStringBuilderBase<wchar_t> *)this,*_Str,iVar2);
        pTVar4 = TStringBuilderBase<wchar_t>::Append<wchar_t,0>
                           (pTVar4,pTVar5->DataPtr,(int)*(undefined8 *)&pTVar5->Size);
        iVar2 = 0;
        if (_Str != (wchar_t (*) [2])0x0) {
          sVar3 = wcslen(*_Str);
          iVar2 = (int)sVar3;
        }
        TStringBuilderBase<wchar_t>::Append<wchar_t,0>(pTVar4,*_Str,iVar2);
        pTVar5 = pTVar5 + 1;
      } while (pTVar5 != pTVar6);
    }
  }
  return this;
}

