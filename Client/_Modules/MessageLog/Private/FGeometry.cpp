// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MessageLog
// Functions: 1

// IsUnderLocation @ 142c07160

bool __thiscall FGeometry::IsUnderLocation(FGeometry *this,FDeprecateVector2DParameter *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  float local_res8;
  float fStackX_c;
  float local_48;
  float fStack_44;
  TVector2<float>_u_0 local_40;
  TVector2<float>_u_0 aTStack_38 [7];
  
  fVar1 = (this->AccumulatedRenderTransform).M.M[1][0];
  fVar2 = (this->AccumulatedRenderTransform).M.M[0][0];
  fStackX_c = SUB84(this->Size,4);
  local_res8 = SUB84(this->Size,0);
  fVar3 = (this->AccumulatedRenderTransform).M.M[0][1];
  fVar4 = (this->AccumulatedRenderTransform).M.M[1][1];
  local_40._s_0.X = fVar1 * 0.0 + fVar2 * local_res8;
  aTStack_38[0]._0_4_ = fVar2 * 0.0 + fVar1 * fStackX_c;
  local_40._s_0.Y = fVar4 * 0.0 + fVar3 * local_res8;
  fStack_44 = fVar4 * 0.0 + fVar3 * 0.0 + (this->AccumulatedRenderTransform).Trans.field0_0x0._s_0.Y
  ;
  local_48 = fVar2 * 0.0 + fVar1 * 0.0 + (this->AccumulatedRenderTransform).Trans.field0_0x0._s_0.X;
  aTStack_38[0]._4_4_ = fVar3 * 0.0 + fVar4 * fStackX_c;
  bVar5 = FSlateRotatedRect::IsUnderLocation((FSlateRotatedRect *)&local_48,*param_1);
  return bVar5;
}

