// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateCore
// Functions: 1

// CommitTransformsIfUsingLegacyConstructor @ 142504f00

void __thiscall FPaintGeometry::CommitTransformsIfUsingLegacyConstructor(FPaintGeometry *this)

{
  float fVar1;
  TVector2<float>_u_0 TVar2;
  TVector2<float>_u_0_s_0 TVar3;
  float local_18;
  float fStack_14;
  
  if (this->bUsingLegacyConstructor != 0) {
    fVar1 = this->DrawScale;
    TVar2 = (this->DrawPosition).field0_0x0;
    (this->AccumulatedRenderTransform).M.M[0][0] = fVar1;
    *(undefined8 *)((this->AccumulatedRenderTransform).M.M[0] + 1) = 0;
    (this->AccumulatedRenderTransform).M.M[1][1] = fVar1;
    (this->AccumulatedRenderTransform).Trans.field0_0x0 = TVar2;
    TVar3 = (this->DrawSize).field0_0x0._s_0;
    fStack_14 = TVar3.Y;
    local_18 = TVar3.X;
    TVar2._s_0.Y = (__real_3f800000 / fVar1) * fStack_14;
    TVar2._s_0.X = (__real_3f800000 / fVar1) * local_18;
    (this->LocalSize).field0_0x0 = TVar2;
  }
  return;
}

