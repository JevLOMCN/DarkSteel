// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// FLightingDensityMaterialRenderProxy @ 147f64830

FLightingDensityMaterialRenderProxy * __thiscall
FLightingDensityMaterialRenderProxy::FLightingDensityMaterialRenderProxy
          (FLightingDensityMaterialRenderProxy *this,FMaterialRenderProxy *param_1,
          FLinearColor *param_2,TVector2<double> *param_3)

{
  double dVar1;
  FName FVar2;
  FNameEntryId FVar3;
  undefined4 extraout_var;
  uint local_res8 [2];
  
  FVar3 = FNameEntryId::FromValidEName((EName)local_res8);
  local_res8[0] = *(uint *)CONCAT44(extraout_var,FVar3.Value);
  local_res8[1] = 0;
  FVar2.Number = 0;
  FVar2.ComparisonIndex.Value = local_res8[0];
  FColoredMaterialRenderProxy::FColoredMaterialRenderProxy
            ((FColoredMaterialRenderProxy *)this,param_1,param_2,FVar2);
  this->_padding_ = (longlong)&___7FLightingDensityMaterialRenderProxy__6B_;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->LightmapResolution).field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->LightmapResolution).field0_0x0._s_0.Y = dVar1;
  return this;
}

// GetParameterValue @ 147f7ad30

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

bool __thiscall
FLightingDensityMaterialRenderProxy::GetParameterValue
          (FLightingDensityMaterialRenderProxy *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FMaterialParameterValue *param_3,
          FMaterialRenderContext *param_4)

{
  undefined4 uVar1;
  double dVar2;
  bool bVar3;
  uint local_48;
  double local_28;
  double dStack_20;
  undefined7 uStack_17;
  
  if (param_1 == Vector) {
    uVar1 = (param_2->Name).ComparisonIndex;
    if ((NAME_LightmapRes.ComparisonIndex.Value.Value == uVar1) &&
       (NAME_LightmapRes.Number == (param_2->Name).Number)) {
      dVar2 = (this->LightmapResolution).field0_0x0._s_0.Y;
      (param_3->field0_0x0).Float[0] = (float)(this->LightmapResolution).field0_0x0._s_0.X;
      (param_3->field0_0x0).Float[1] = (float)dVar2;
      (param_3->field0_0x0).Float[2] = 0.0;
      (param_3->field0_0x0).Float[3] = 0.0;
      (param_3->field0_0x0).Double[2] = local_28;
      (param_3->field0_0x0).Double[3] = dStack_20;
      *(ulonglong *)&param_3->Type = CONCAT71(uStack_17,1);
      return true;
    }
  }
  bVar3 = FColoredMaterialRenderProxy::GetParameterValue
                    ((FColoredMaterialRenderProxy *)this,param_1,param_2,param_3,param_4);
  return bVar3;
}

