// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// QuantizeRound @ 147c78070

FColor __thiscall FLinearColor::QuantizeRound(FLinearColor *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 *in_RDX;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar3 = __real_437f0000;
  fVar2 = __real_3f000000;
  fVar1 = __real_3f800000;
  fVar4 = (this->field0_0x0)._s_0.B;
  fVar5 = (this->field0_0x0)._s_0.R;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  if (__real_3f800000 <= fVar4) {
    fVar4 = __real_3f800000;
  }
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  fVar6 = fVar5 * __real_437f0000 + __real_3f000000;
  fVar5 = (this->field0_0x0)._s_0.G;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  *in_RDX = (char)(int)(fVar4 * __real_437f0000 + __real_3f000000);
  if (fVar1 <= fVar5) {
    fVar5 = fVar1;
  }
  fVar4 = (this->field0_0x0)._s_0.A;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  in_RDX[1] = (char)(int)(fVar5 * fVar3 + fVar2);
  if (fVar1 <= fVar4) {
    fVar4 = fVar1;
  }
  in_RDX[2] = (char)(int)fVar6;
  in_RDX[3] = (char)(int)(fVar4 * fVar3 + fVar2);
  return (FColor)SUB84(in_RDX,0);
}

