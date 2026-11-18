// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: IoStoreHttpClient
// Functions: 2

// Append<char,0> @ 1445698b0

TStringBuilderBase<char> * __thiscall
TStringBuilderBase<char>::Append<char,0>(TStringBuilderBase<char> *this,char *param_1,int param_2)

{
  void *pvVar1;
  ulong64 uVar2;
  
  uVar2 = (ulong64)param_2;
  if (this->End < this->CurPos + uVar2) {
    Extend(this,uVar2);
  }
  if (param_2 != 0) {
    pvVar1 = FGenericPlatformString::Memcpy(this->CurPos,param_1,uVar2);
    this->CurPos = (char *)((longlong)pvVar1 + uVar2);
  }
  return this;
}

// Append<TStringView<char>_> @ 144569920

TStringBuilderBase<char> * __thiscall
TStringBuilderBase<char>::Append<TStringView<char>_>
          (TStringBuilderBase<char> *this,TStringView<char> *param_1)

{
  char *pcVar1;
  void *pvVar2;
  int iVar3;
  ulong64 uVar4;
  
  pcVar1 = param_1->DataPtr;
  iVar3 = (int)*(undefined8 *)&param_1->Size;
  uVar4 = (ulong64)iVar3;
  if (this->End < this->CurPos + uVar4) {
    Extend(this,uVar4);
  }
  if (iVar3 != 0) {
    pvVar2 = FGenericPlatformString::Memcpy(this->CurPos,pcVar1,uVar4);
    this->CurPos = (char *)((longlong)pvVar2 + uVar4);
  }
  return this;
}

