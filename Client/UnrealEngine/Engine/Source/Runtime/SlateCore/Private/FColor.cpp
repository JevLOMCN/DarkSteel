// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 2

// FColor @ 1425426f0

FColor * __thiscall
FColor::FColor(FColor *this,uchar param_1,uchar param_2,uchar param_3,uchar param_4)

{
  (this->field0_0x0)._s_0.A = param_4;
  (this->field0_0x0)._s_0.B = param_3;
  (this->field0_0x0)._s_0.G = param_2;
  (this->field0_0x0)._s_0.R = param_1;
  return this;
}

// ReinterpretAsLinear @ 14258efd0

FLinearColor * __thiscall
FColor::ReinterpretAsLinear(FColor *this,FLinearColor *__return_storage_ptr__)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  
  fVar4 = __real_3b808081;
  bVar1 = (this->field0_0x0)._s_0.G;
  (__return_storage_ptr__->field0_0x0)._s_0.R = (float)(this->field0_0x0)._s_0.R * __real_3b808081;
  bVar2 = (this->field0_0x0)._s_0.B;
  bVar3 = (this->field0_0x0)._s_0.A;
  (__return_storage_ptr__->field0_0x0)._s_0.G = (float)bVar1 * fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.B = (float)bVar2 * fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.A = (float)bVar3 * fVar4;
  return __return_storage_ptr__;
}

