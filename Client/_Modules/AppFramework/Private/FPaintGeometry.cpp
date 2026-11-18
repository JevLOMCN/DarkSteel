// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AppFramework
// Functions: 1

// FPaintGeometry @ 14305c910

FPaintGeometry * __thiscall
FPaintGeometry::FPaintGeometry
          (FPaintGeometry *this,FSlateLayoutTransform *param_1,TTransform2<float> *param_2,
          FDeprecateVector2DParameter *param_3,bool param_4)

{
  undefined1 *puVar1;
  TVector2<float>_u_0 TVar2;
  float afVar3 [2];
  
  (this->DrawPosition).field0_0x0 = (param_1->Translation).field0_0x0;
  this->DrawScale = param_1->Scale;
  (this->DrawSize).field0_0x0 = (TVector2<float>_u_0)0x0;
  (this->LocalSize).field0_0x0._s_0 = *(TVector2<float>_u_0_s_0 *)param_3;
  afVar3 = (param_2->M).M[1];
  (this->AccumulatedRenderTransform).M.M[0] = (param_2->M).M[0];
  (this->AccumulatedRenderTransform).M.M[1] = afVar3;
  TVar2 = (param_2->Trans).field0_0x0;
  this->bUsingLegacyConstructor = '\0';
  this->bHasRenderTransform = '\0';
  this->field_0x34 = this->field_0x34 | param_4 * '\x02';
  (this->AccumulatedRenderTransform).Trans.field0_0x0 = TVar2;
  return this;
}

