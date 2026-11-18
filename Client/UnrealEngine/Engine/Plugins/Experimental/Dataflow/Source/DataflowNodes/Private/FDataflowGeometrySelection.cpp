// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowNodes
// Functions: 1

// FDataflowGeometrySelection @ 14dacd4a0

FDataflowGeometrySelection * __thiscall
FDataflowGeometrySelection::FDataflowGeometrySelection
          (FDataflowGeometrySelection *this,FDataflowGeometrySelection *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  void *_Dst;
  void *_Src;
  
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  uVar3 = *(int *)&param_1->field_0x20 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar3) {
    uVar2 = 0x80;
    if (0x80 < (int)uVar3) {
      uVar2 = uVar3;
    }
    *(uint *)&this->field_0x24 = uVar2;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&this->field_0x8,0);
  }
  iVar1 = *(int *)&param_1->field_0x20;
  *(int *)&this->field_0x20 = iVar1;
  if (iVar1 != 0) {
    _Src = *(void **)&param_1->field_0x18;
    if (*(void **)&param_1->field_0x18 == (void *)0x0) {
      _Src = &param_1->field_0x8;
    }
    _Dst = *(void **)&this->field_0x18;
    if (*(void **)&this->field_0x18 == (void *)0x0) {
      _Dst = &this->field_0x8;
    }
    memcpy(_Dst,_Src,(ulonglong)(iVar1 + 0x1fU >> 5) << 2);
  }
  return this;
}

