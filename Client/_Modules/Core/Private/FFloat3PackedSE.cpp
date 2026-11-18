// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 2

// FFloat3PackedSE @ 1417a15e0

FFloat3PackedSE * __thiscall
FFloat3PackedSE::FFloat3PackedSE(FFloat3PackedSE *this,FLinearColor *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  fVar1 = (param_1->field0_0x0)._s_0.R;
  fVar2 = (param_1->field0_0x0)._s_0.G;
  fVar3 = (param_1->field0_0x0)._s_0.B;
  iVar12 = 0x800000;
  uVar7 = (uint)fVar1 & 0x7fffff;
  iVar10 = 0x800000;
  iVar11 = iVar10;
  if ((((uint)fVar1 & 0x7f800000) == 0) && (uVar7 != 0)) {
    iVar11 = 0;
  }
  uVar13 = uVar7 + iVar11;
  uVar5 = (uint)fVar1 >> 0x17 & 0xff;
  if ((uVar5 != 0) || (iVar11 = -0x7f, uVar7 == 0)) {
    iVar11 = uVar5 - 0x7e;
    uVar13 = uVar13 >> 1;
  }
  if ((((iVar11 < -0xf) && (fVar1 != 0.0)) || (fVar1 < 0.0)) ||
     (uVar7 != 0 && ((uint)fVar1 & 0x7f800000) == 0x7f800000)) {
    iVar11 = -0xf;
    uVar13 = 0;
  }
  else if (0xf < iVar11) {
    iVar11 = 0x10;
    uVar13 = 0x7fffff;
  }
  uVar7 = (uint)fVar2 & 0x7fffff;
  if ((((uint)fVar2 & 0x7f800000) == 0) && (uVar7 != 0)) {
    iVar10 = 0;
  }
  uVar5 = iVar10 + uVar7;
  uVar9 = (uint)fVar2 >> 0x17 & 0xff;
  iVar10 = uVar9 - 0x7f;
  if (((char)((uint)fVar2 >> 0x17) != '\0') || (uVar7 == 0)) {
    iVar10 = uVar9 - 0x7e;
    uVar5 = uVar5 >> 1;
  }
  if ((((iVar10 < -0xf) && (fVar2 != 0.0)) || (fVar2 < 0.0)) ||
     (((uint)fVar2 & 0x7f800000) == 0x7f800000 && uVar7 != 0)) {
    iVar10 = -0xf;
    uVar5 = 0;
  }
  else if (0xf < iVar10) {
    iVar10 = 0x10;
    uVar5 = 0x7fffff;
  }
  uVar7 = (uint)fVar3 & 0x7fffff;
  if ((((uint)fVar3 & 0x7f800000) == 0) && (uVar7 != 0)) {
    iVar12 = 0;
  }
  uVar9 = iVar12 + uVar7;
  uVar6 = (uint)fVar3 >> 0x17 & 0xff;
  if ((uVar6 != 0) || (iVar12 = -0x7f, uVar7 == 0)) {
    iVar12 = uVar6 - 0x7e;
    uVar9 = uVar9 >> 1;
  }
  if ((((iVar12 < -0xf) && (fVar3 != 0.0)) || (fVar3 < 0.0)) ||
     (((uint)fVar3 & 0x7f800000) == 0x7f800000 && uVar7 != 0)) {
    iVar12 = -0xf;
    uVar9 = 0;
  }
  else if (0xf < iVar12) {
    iVar12 = 0x10;
    uVar9 = 0x7fffff;
  }
  iVar8 = iVar12;
  if (iVar12 < iVar10) {
    iVar8 = iVar10;
  }
  if (iVar8 < iVar11) {
    iVar8 = iVar11;
  }
  cVar4 = (char)iVar8;
  (this->field0_0x0).EncodedValue =
       (((uVar9 >> (cVar4 - (char)iVar12 & 0x1fU)) >> 0xe & 0x1ff) << 9 |
       (uVar5 >> (cVar4 - (char)iVar10 & 0x1fU)) >> 0xe & 0x1ff) << 9 |
       iVar8 * 0x8000000 + 0x78000000U | (uVar13 >> (cVar4 - (char)iVar11 & 0x1fU)) >> 0xe & 0x1ff;
  return this;
}

// ToLinearColor @ 141804dd0

FLinearColor * __thiscall
FFloat3PackedSE::ToLinearColor(FFloat3PackedSE *this,FLinearColor *__return_storage_ptr__)

{
  uint uVar1;
  float fVar2;
  
  uVar1 = (this->field0_0x0).EncodedValue;
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  fVar2 = (float)((uVar1 >> 4 & 0xf800000) + 0x33800000);
  (__return_storage_ptr__->field0_0x0)._s_0.R = (float)(uVar1 & 0x1ff) * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.G = (float)(uVar1 >> 9 & 0x1ff) * fVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.B = (float)(uVar1 >> 0x12 & 0x1ff) * fVar2;
  return __return_storage_ptr__;
}

