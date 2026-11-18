// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MuR
// Functions: 1

// operator+= @ 14a987900

TBox2<float> * __thiscall
UE::Math::TBox2<float>::operator+=(TBox2<float> *this,TVector2<float> *param_1)

{
  float fVar1;
  TVector2<float>_u_0 TVar2;
  float fVar3;
  float fVar4;
  
  if (this->bIsValid != false) {
    fVar3 = (param_1->field0_0x0)._s_0.X;
    fVar4 = (this->Min).field0_0x0._s_0.X;
    if (fVar4 <= fVar3) {
      fVar3 = fVar4;
    }
    (this->Min).field0_0x0._s_0.X = fVar3;
    fVar3 = (this->Min).field0_0x0._s_0.Y;
    fVar4 = (param_1->field0_0x0)._s_0.Y;
    if (fVar4 <= fVar3) {
      fVar3 = fVar4;
    }
    (this->Min).field0_0x0._s_0.Y = fVar3;
    fVar3 = (param_1->field0_0x0)._s_0.X;
    fVar4 = (this->Max).field0_0x0._s_0.Y;
    fVar1 = (this->Max).field0_0x0._s_0.X;
    if (fVar3 <= fVar1) {
      fVar3 = fVar1;
    }
    (this->Max).field0_0x0._s_0.X = fVar3;
    fVar3 = (param_1->field0_0x0)._s_0.Y;
    if (fVar4 <= fVar3) {
      fVar4 = fVar3;
    }
    (this->Max).field0_0x0._s_0.Y = fVar4;
    return this;
  }
  TVar2 = param_1->field0_0x0;
  (this->Max).field0_0x0 = TVar2;
  (this->Min).field0_0x0 = TVar2;
  this->bIsValid = true;
  return this;
}

