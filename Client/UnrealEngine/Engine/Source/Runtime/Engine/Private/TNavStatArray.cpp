// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// TNavStatArray<unsigned_char> @ 147378360

TNavStatArray<unsigned_char> * __thiscall
TNavStatArray<unsigned_char>::TNavStatArray<unsigned_char>
          (TNavStatArray<unsigned_char> *this,TNavStatArray<unsigned_char> *param_1)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)&this->field_0x8 = 0;
  iVar1 = *(int *)&param_1->field_0x10;
  _Src = *(void **)param_1;
  *(int *)&this->field_0x10 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0x14 = 0;
    return this;
  }
  UE::Core::Private::ReallocForCopy<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
            (1,1,iVar1,0,(ForAnyElementType *)this,iVar1,(int *)&this->field_0x14);
  memcpy(*(void **)this,_Src,(longlong)iVar1);
  return this;
}

// operator= @ 14737dc80

TNavStatArray<unsigned_char> * __thiscall
TNavStatArray<unsigned_char>::operator=
          (TNavStatArray<unsigned_char> *this,TNavStatArray<unsigned_char> *param_1)

{
  int iVar1;
  void *_Src;
  
  if (this != param_1) {
    _Src = *(void **)param_1;
    iVar1 = *(int *)&param_1->field_0x10;
    *(int *)&this->field_0x10 = iVar1;
    if ((iVar1 == 0) && (*(int *)&this->field_0x14 == 0)) {
      *(undefined4 *)&this->field_0x14 = 0;
      return this;
    }
    UE::Core::Private::ReallocForCopy<3,NavMeshMemory::FNavigationMemoryStat::ForAnyElementType>
              (1,1,iVar1,*(int *)&this->field_0x14,(ForAnyElementType *)this,iVar1,
               (int *)&this->field_0x14);
    if (iVar1 != 0) {
      memcpy(*(void **)this,_Src,(longlong)iVar1);
    }
  }
  return this;
}

