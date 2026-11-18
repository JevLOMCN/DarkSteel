// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FFixedRGBASigned8 @ 1417a12e0

FFixedRGBASigned8 * __thiscall
FFixedRGBASigned8::FFixedRGBASigned8(FFixedRGBASigned8 *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  schar sVar4;
  int iVar5;
  
  fVar2 = __real_437e0000;
  fVar1 = __real_3f000000;
  iVar3 = (int)ROUND((param_1->field0_0x0)._s_0.R * __real_437e0000 + __real_3f000000) >> 1;
  iVar5 = 0x7f;
  if (iVar3 < 0x7f) {
    iVar5 = iVar3;
  }
  sVar4 = -0x80;
  if (-0x80 < iVar5) {
    sVar4 = (schar)iVar5;
  }
  (this->field0_0x0)._s_0.R = sVar4;
  iVar3 = (int)ROUND((param_1->field0_0x0)._s_0.G * fVar2 + fVar1) >> 1;
  iVar5 = 0x7f;
  if (iVar3 < 0x7f) {
    iVar5 = iVar3;
  }
  sVar4 = -0x80;
  if (-0x80 < iVar5) {
    sVar4 = (schar)iVar5;
  }
  (this->field0_0x0)._s_0.G = sVar4;
  iVar3 = (int)ROUND((param_1->field0_0x0)._s_0.B * fVar2 + fVar1) >> 1;
  iVar5 = 0x7f;
  if (iVar3 < 0x7f) {
    iVar5 = iVar3;
  }
  sVar4 = -0x80;
  if (-0x80 < iVar5) {
    sVar4 = (schar)iVar5;
  }
  (this->field0_0x0)._s_0.B = sVar4;
  iVar3 = (int)ROUND((param_1->field0_0x0)._s_0.A * fVar2 + fVar1) >> 1;
  iVar5 = 0x7f;
  if (iVar3 < 0x7f) {
    iVar5 = iVar3;
  }
  sVar4 = -0x80;
  if (-0x80 < iVar5) {
    sVar4 = (schar)iVar5;
  }
  (this->field0_0x0)._s_0.A = sVar4;
  return this;
}

// ToLinearColor @ 141804c30

FLinearColor * __thiscall
FFixedRGBASigned8::ToLinearColor(FFixedRGBASigned8 *this,FLinearColor *__return_storage_ptr__)

{
  char cVar1;
  char cVar2;
  char cVar3;
  float fVar4;
  
  fVar4 = __real_3c010204;
  cVar1 = (this->field0_0x0)._s_0.G;
  (__return_storage_ptr__->field0_0x0)._s_0.R =
       (float)(int)(this->field0_0x0)._s_0.R * __real_3c010204;
  cVar2 = (this->field0_0x0)._s_0.B;
  cVar3 = (this->field0_0x0)._s_0.A;
  (__return_storage_ptr__->field0_0x0)._s_0.G = (float)(int)cVar1 * fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.B = (float)(int)cVar2 * fVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.A = (float)(int)cVar3 * fVar4;
  return __return_storage_ptr__;
}

