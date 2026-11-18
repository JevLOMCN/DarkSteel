// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioWidgets
// Functions: 3

// ColorMapBlackToWhite @ 14d8e54b0

FColor __cdecl FAudioColorMapper::ColorMapBlackToWhite(float param_1)

{
  undefined1 uVar1;
  undefined1 *in_RCX;
  float in_XMM1_Da;
  
  in_RCX[3] = 0xff;
  if (in_XMM1_Da <= 0.0) {
    in_XMM1_Da = 0.0;
  }
  if (__real_3f800000 <= in_XMM1_Da) {
    in_XMM1_Da = __real_3f800000;
  }
  uVar1 = (undefined1)(int)(in_XMM1_Da * __real_437f0000 + __real_3f000000);
  *in_RCX = uVar1;
  in_RCX[1] = uVar1;
  in_RCX[2] = uVar1;
  return (FColor)SUB84(in_RCX,0);
}

// ColorMapWhiteToBlack @ 14d8e54f0

FColor __cdecl FAudioColorMapper::ColorMapWhiteToBlack(float param_1)

{
  float fVar1;
  undefined1 uVar2;
  undefined1 *in_RCX;
  float in_XMM1_Da;
  float fVar3;
  
  fVar1 = __real_3f800000;
  in_RCX[3] = 0xff;
  fVar3 = fVar1 - in_XMM1_Da;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  uVar2 = (undefined1)(int)(fVar3 * __real_437f0000 + __real_3f000000);
  *in_RCX = uVar2;
  in_RCX[1] = uVar2;
  in_RCX[2] = uVar2;
  return (FColor)SUB84(in_RCX,0);
}

// GetColorFromValue @ 14d92c240

FColor __thiscall FAudioColorMapper::GetColorFromValue(FAudioColorMapper *this,float param_1)

{
  float fVar1;
  undefined1 uVar2;
  undefined1 *in_RDX;
  float in_XMM2_Da;
  float fVar3;
  
  fVar1 = __real_3f800000;
  fVar3 = (in_XMM2_Da - this->MinValue) * this->ValueScaling;
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if ((this->ColorMap != BlackToWhite) && (this->ColorMap == WhiteToBlack)) {
    in_RDX[3] = 0xff;
    fVar3 = fVar1 - fVar3;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    if (fVar1 <= fVar3) {
      fVar3 = fVar1;
    }
    uVar2 = (undefined1)(int)(fVar3 * __real_437f0000 + __real_3f000000);
    *in_RDX = uVar2;
    in_RDX[1] = uVar2;
    in_RDX[2] = uVar2;
    return (FColor)SUB84(in_RDX,0);
  }
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  in_RDX[3] = 0xff;
  uVar2 = (undefined1)(int)(fVar3 * __real_437f0000 + __real_3f000000);
  *in_RDX = uVar2;
  in_RDX[1] = uVar2;
  in_RDX[2] = uVar2;
  return (FColor)SUB84(in_RDX,0);
}

