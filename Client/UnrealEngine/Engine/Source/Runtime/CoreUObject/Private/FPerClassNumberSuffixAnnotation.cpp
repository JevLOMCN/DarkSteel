// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 1

// operator= @ 14225a240

FPerClassNumberSuffixAnnotation * __thiscall
FPerClassNumberSuffixAnnotation::operator=
          (FPerClassNumberSuffixAnnotation *this,FPerClassNumberSuffixAnnotation *param_1)

{
  undefined1 *_Src;
  undefined1 *_Dst;
  void *pvVar1;
  
  if (this != param_1) {
    if (*(void **)&this->Suffixes != (void *)0x0) {
      FMemory::Free(*(void **)&this->Suffixes);
    }
    _Src = &(param_1->Suffixes).field_0x10;
    *(undefined8 *)&this->Suffixes = *(undefined8 *)&param_1->Suffixes;
    _Dst = &(this->Suffixes).field_0x10;
    *(undefined8 *)&param_1->Suffixes = 0;
    *(undefined4 *)&(this->Suffixes).field_0x8 = *(undefined4 *)&(param_1->Suffixes).field_0x8;
    *(undefined4 *)&(this->Suffixes).field_0xc = *(undefined4 *)&(param_1->Suffixes).field_0xc;
    *(undefined8 *)&(param_1->Suffixes).field_0x8 = 0;
    if (_Dst != _Src) {
      if (*(longlong *)&(param_1->Suffixes).field_0x20 == 0) {
        memmove(_Dst,_Src,0x10);
      }
      pvVar1 = *(void **)&(this->Suffixes).field_0x20;
      if (pvVar1 != (void *)0x0) {
        FMemory::Free(pvVar1);
      }
      *(undefined8 *)&(this->Suffixes).field_0x20 = *(undefined8 *)&(param_1->Suffixes).field_0x20;
      *(undefined8 *)&(param_1->Suffixes).field_0x20 = 0;
      *(undefined4 *)&(this->Suffixes).field_0x28 = *(undefined4 *)&(param_1->Suffixes).field_0x28;
      *(undefined4 *)&(this->Suffixes).field_0x2c = *(undefined4 *)&(param_1->Suffixes).field_0x2c;
      *(undefined8 *)&(param_1->Suffixes).field_0x28 = 0;
    }
    *(undefined4 *)&(this->Suffixes).field_0x30 = *(undefined4 *)&(param_1->Suffixes).field_0x30;
    *(undefined4 *)&(this->Suffixes).field_0x34 = *(undefined4 *)&(param_1->Suffixes).field_0x34;
    *(undefined4 *)&(param_1->Suffixes).field_0x30 = 0xffffffff;
    *(undefined4 *)&(param_1->Suffixes).field_0x34 = 0;
    if (*(longlong *)&(param_1->Suffixes).field_0x40 == 0) {
      *(undefined4 *)&(this->Suffixes).field_0x38 = *(undefined4 *)&(param_1->Suffixes).field_0x38;
    }
    pvVar1 = *(void **)&(this->Suffixes).field_0x40;
    if (pvVar1 != (void *)0x0) {
      FMemory::Free(pvVar1);
    }
    *(undefined8 *)&(this->Suffixes).field_0x40 = *(undefined8 *)&(param_1->Suffixes).field_0x40;
    *(undefined8 *)&(param_1->Suffixes).field_0x40 = 0;
    *(undefined4 *)&(this->Suffixes).field_0x48 = *(undefined4 *)&(param_1->Suffixes).field_0x48;
    *(undefined4 *)&(param_1->Suffixes).field_0x48 = 0;
  }
  return this;
}

