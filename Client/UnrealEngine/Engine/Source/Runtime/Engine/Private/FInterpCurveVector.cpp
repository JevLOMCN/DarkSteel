// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// FInterpCurveVector @ 1479a35a0

FInterpCurveVector * __thiscall
FInterpCurveVector::FInterpCurveVector(FInterpCurveVector *this,FInterpCurveVector *param_1)

{
  int iVar1;
  void *_Src;
  
  *(undefined8 *)this = 0;
  iVar1 = *(int *)&param_1->field_0x8;
  _Src = *(void **)param_1;
  *(int *)&this->field_0x8 = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)&this->field_0xc = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x58,8,iVar1,0,(ForAnyElementType *)this,iVar1,(int *)&this->field_0xc);
    memcpy(*(void **)this,_Src,(longlong)iVar1 * 0x58);
  }
  this->field_0x10 = param_1->field_0x10;
  *(undefined4 *)&this->field_0x14 = *(undefined4 *)&param_1->field_0x14;
  return this;
}

