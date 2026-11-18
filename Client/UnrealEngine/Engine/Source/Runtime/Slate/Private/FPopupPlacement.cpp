// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Slate
// Functions: 1

// FPopupPlacement @ 1428b8b70

FPopupPlacement * __thiscall
SMenuAnchor::FPopupPlacement::FPopupPlacement
          (FPopupPlacement *this,FGeometry *param_1,TVector2<double> *param_2,EMenuPlacement param_3
          )

{
  double dVar1;
  FDeprecateSlateVector2D FVar2;
  undefined8 uVar3;
  TVector2<double> *pTVar4;
  float fVar5;
  float local_res8;
  float fStackX_c;
  TVector2<double>_u_0 local_28;
  TVector2<double> local_18;
  
  (this->AnchorLocalSpace).Left = -1.0;
  (this->AnchorLocalSpace).Top = -1.0;
  (this->AnchorLocalSpace).Right = -1.0;
  (this->AnchorLocalSpace).Bottom = -1.0;
  if (param_3 - MenuPlacement_ComboBox < 2) {
    dVar1 = (param_2->field0_0x0)._s_0.X;
    local_28._s_0.X = (double)*(float *)&param_1->Size;
    if ((double)*(float *)&param_1->Size <= dVar1) {
      local_28._s_0.X = dVar1;
    }
    local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  }
  else {
    local_28._s_0.X = (param_2->field0_0x0)._s_0.X;
    local_28._s_0.Y = (param_2->field0_0x0)._s_0.Y;
  }
  (this->LocalPopupSize).field0_0x0._s_0.X = local_28._s_0.X;
  (this->LocalPopupSize).field0_0x0._s_0.Y = local_28._s_0.Y;
  pTVar4 = GetMenuOffsetForPlacement(&local_18,param_1,param_3,(TVector2<double> *)&local_28._s_0);
  dVar1 = (pTVar4->field0_0x0)._s_0.Y;
  (this->LocalPopupOffset).field0_0x0._s_0.X = (pTVar4->field0_0x0)._s_0.X;
  (this->LocalPopupOffset).field0_0x0._s_0.Y = dVar1;
  uVar3 = UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.Y;
  FVar2 = param_1->Size;
  fVar5 = (float)UE::Math::TVector2<double>::ZeroVector.field0_0x0._s_0.X;
  this->Orientation = (uint)((param_3 - MenuPlacement_MenuRight & 0xfffffffb) != 0);
  local_res8 = FVar2._0_4_;
  fStackX_c = FVar2._4_4_;
  (this->AnchorLocalSpace).Left = fVar5;
  (this->AnchorLocalSpace).Top = (float)(double)uVar3;
  (this->AnchorLocalSpace).Right = fVar5 + local_res8;
  (this->AnchorLocalSpace).Bottom = (float)(double)uVar3 + fStackX_c;
  return this;
}

