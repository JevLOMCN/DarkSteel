// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Json
// Functions: 1

// Append<TStringBuilderWithBuffer<wchar_t,512>_&> @ 141da2aa0

TStringBuilderBase<char8_t> * __thiscall
TStringBuilderBase<char8_t>::Append<TStringBuilderWithBuffer<wchar_t,512>_&>
          (TStringBuilderBase<char8_t> *this,TStringBuilderWithBuffer<wchar_t,512> *param_1)

{
  wchar_t *pwVar1;
  int iVar2;
  uchar *puVar3;
  int iVar4;
  
  pwVar1 = (wchar_t *)param_1->_padding_;
  iVar4 = (int)(param_1->_padding_ - (longlong)pwVar1 >> 1);
  iVar2 = UE::Core::Private::GetConvertedLength((uchar *)0x0,pwVar1,iVar4);
  if (this->End < this->CurPos + iVar2) {
    Extend(this,(longlong)iVar2);
  }
  if (iVar4 != 0) {
    puVar3 = UE::Core::Private::Convert(this->CurPos,iVar2,pwVar1,iVar4);
    this->CurPos = puVar3;
  }
  return this;
}

