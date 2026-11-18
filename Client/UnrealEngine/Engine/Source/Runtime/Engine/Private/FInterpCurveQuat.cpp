// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// operator= @ 1479aa0b0

FInterpCurveQuat * __thiscall
FInterpCurveQuat::operator=(FInterpCurveQuat *this,FInterpCurveQuat *param_1)

{
  int iVar1;
  void *_Src;
  
  if (this != param_1) {
    _Src = *(void **)param_1;
    iVar1 = *(int *)&param_1->field_0x8;
    *(int *)&this->field_0x8 = iVar1;
    if ((iVar1 == 0) && (*(int *)&this->field_0xc == 0)) {
      *(undefined4 *)&this->field_0xc = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,iVar1,*(int *)&this->field_0xc,(ForAnyElementType *)this,iVar1,
                 (int *)&this->field_0xc);
      if (iVar1 != 0) {
        memcpy(*(void **)this,_Src,(longlong)iVar1 << 7);
      }
    }
  }
  this->field_0x10 = param_1->field_0x10;
  *(undefined4 *)&this->field_0x14 = *(undefined4 *)&param_1->field_0x14;
  return this;
}

