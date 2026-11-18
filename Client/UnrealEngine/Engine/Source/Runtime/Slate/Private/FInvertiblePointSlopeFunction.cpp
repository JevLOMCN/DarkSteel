// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 3

// FInvertiblePointSlopeFunction @ 1427b14b0

FInvertiblePointSlopeFunction * __thiscall
FInvertiblePointSlopeFunction::FInvertiblePointSlopeFunction
          (FInvertiblePointSlopeFunction *this,TVector2<float> param_1,float param_2)

{
  this->Slope = param_2;
  (this->Point).field0_0x0._s_0 = (TVector2<float>_u_0_s_0)param_1.field0_0x0;
  return this;
}

// SolveForX @ 142836210

float __thiscall
FInvertiblePointSlopeFunction::SolveForX(FInvertiblePointSlopeFunction *this,float param_1)

{
  float fVar1;
  
  fVar1 = __real_3f800000 / this->Slope;
  return ((this->Point).field0_0x0._s_0.X - fVar1 * (this->Point).field0_0x0._s_0.Y) +
         fVar1 * param_1;
}

// SolveForY @ 142836280

float __thiscall
FInvertiblePointSlopeFunction::SolveForY(FInvertiblePointSlopeFunction *this,float param_1)

{
  return ((this->Point).field0_0x0._s_0.Y - this->Slope * (this->Point).field0_0x0._s_0.X) +
         this->Slope * param_1;
}

