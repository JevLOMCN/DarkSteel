// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 3

// GetFallback @ 14e015d60

FMaterialRenderProxy * __thiscall
FHairDebugModeMaterialRenderProxy::GetFallback(FHairDebugModeMaterialRenderProxy *this,Type param_1)

{
  FMaterialRenderProxy *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e015d6a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FMaterialRenderProxy *)(**(code **)(this->Parent->_padding_ + 0x38))();
  return pFVar1;
}

// GetMaterialNoFallback @ 14e018760

FMaterial * __thiscall
FHairDebugModeMaterialRenderProxy::GetMaterialNoFallback
          (FHairDebugModeMaterialRenderProxy *this,Type param_1)

{
  FMaterial *pFVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014e01876a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  pFVar1 = (FMaterial *)(**(code **)(this->Parent->_padding_ + 0x30))();
  return pFVar1;
}

// GetParameterValue @ 14e0189a0

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */

bool __thiscall
FHairDebugModeMaterialRenderProxy::GetParameterValue
          (FHairDebugModeMaterialRenderProxy *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FMaterialParameterValue *param_3,
          FMaterialRenderContext *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  double dVar3;
  double dVar4;
  undefined1 uVar5;
  float fVar6;
  uint local_48;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  double local_28;
  double dStack_20;
  uint7 uStack_17;
  
  if (param_1 != Scalar) {
    if (param_1 == Vector) {
      uVar1 = (param_2->Name).ComparisonIndex;
      if (((this->HairGroupHairColorParamName).ComparisonIndex.Value == uVar1) &&
         ((this->HairGroupHairColorParamName).Number == (param_2->Name).Number)) {
        dVar3 = (this->HairGroupColor).field0_0x0._s_0.Y;
        dVar4 = (this->HairGroupColor).field0_0x0._s_0.Z;
        (param_3->field0_0x0).Float[0] = (float)(this->HairGroupColor).field0_0x0._s_0.X;
        (param_3->field0_0x0).Float[1] = (float)dVar3;
        (param_3->field0_0x0).Float[2] = (float)dVar4;
        (param_3->field0_0x0).Float[3] = 0.0;
        (param_3->field0_0x0).Double[2] = local_28;
        (param_3->field0_0x0).Double[3] = dStack_20;
        *(ulonglong *)&param_3->Type = CONCAT71(uStack_17,1);
        return true;
      }
    }
LAB_14e018af2:
                    /* WARNING: Could not recover jumptable at 0x00014e018b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar5 = (**(code **)(this->Parent->_padding_ + 0x48))();
    return (bool)uVar5;
  }
  uVar2 = (param_2->Name).ComparisonIndex;
  if (((this->DebugModeParamName).ComparisonIndex.Value == uVar2) &&
     ((this->DebugModeParamName).Number == (param_2->Name).Number)) {
    fVar6 = this->DebugMode;
  }
  else if (((this->MinHairRadiusParamName).ComparisonIndex.Value == uVar2) &&
          ((this->MinHairRadiusParamName).Number == (param_2->Name).Number)) {
    fVar6 = this->HairMinRadius;
  }
  else {
    if (((this->MaxHairRadiusParamName).ComparisonIndex.Value != uVar2) ||
       ((this->MaxHairRadiusParamName).Number != (param_2->Name).Number)) goto LAB_14e018af2;
    fVar6 = this->HairMaxRadius;
  }
  (param_3->field0_0x0).Float[0] = fVar6;
  (param_3->field0_0x0).Float[1] = fStack_34;
  (param_3->field0_0x0).Float[2] = fStack_30;
  (param_3->field0_0x0).Float[3] = fStack_2c;
  (param_3->field0_0x0).Double[2] = local_28;
  (param_3->field0_0x0).Double[3] = dStack_20;
  *(ulonglong *)&param_3->Type = (ulonglong)uStack_17 << 8;
  return true;
}

