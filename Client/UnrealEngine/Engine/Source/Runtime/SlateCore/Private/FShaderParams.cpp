// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// operator== @ 1424edc80

bool __thiscall FShaderParams::operator==(FShaderParams *this,FShaderParams *param_1)

{
  if ((((((param_1->PixelParams).field0_0x0._s_0.X == (this->PixelParams).field0_0x0._s_0.X) &&
        ((param_1->PixelParams).field0_0x0._s_0.Y == (this->PixelParams).field0_0x0._s_0.Y)) &&
       ((param_1->PixelParams).field0_0x0._s_0.Z == (this->PixelParams).field0_0x0._s_0.Z)) &&
      (((((param_1->PixelParams).field0_0x0._s_0.W == (this->PixelParams).field0_0x0._s_0.W &&
         ((param_1->PixelParams2).field0_0x0._s_0.X == (this->PixelParams2).field0_0x0._s_0.X)) &&
        (((param_1->PixelParams2).field0_0x0._s_0.Y == (this->PixelParams2).field0_0x0._s_0.Y &&
         (((param_1->PixelParams2).field0_0x0._s_0.Z == (this->PixelParams2).field0_0x0._s_0.Z &&
          ((param_1->PixelParams2).field0_0x0._s_0.W == (this->PixelParams2).field0_0x0._s_0.W))))))
       && ((param_1->PixelParams3).field0_0x0._s_0.X == (this->PixelParams3).field0_0x0._s_0.X))))
     && ((((param_1->PixelParams3).field0_0x0._s_0.Y == (this->PixelParams3).field0_0x0._s_0.Y &&
          ((param_1->PixelParams3).field0_0x0._s_0.Z == (this->PixelParams3).field0_0x0._s_0.Z)) &&
         ((param_1->PixelParams3).field0_0x0._s_0.W == (this->PixelParams3).field0_0x0._s_0.W)))) {
    return true;
  }
  return false;
}

