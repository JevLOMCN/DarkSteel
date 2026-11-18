// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 1

// Compile @ 14513b2c0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EMeshDrawCommandCullingPayloadFlags": Some values do not have unique names */
/* WARNING: Enum "ERasterizerFillMode": Some values do not have unique names */
/* WARNING: Enum "ERasterizerCullMode": Some values do not have unique names */
/* WARNING: Enum "ESamplerFilter": Some values do not have unique names */

void __thiscall
DiaphragmDOF::FBokehModel::Compile(FBokehModel *this,FViewInfo *param_1,FPhysicalCocModel *param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float extraout_XMM0_Da;
  float fVar5;
  float fVar6;
  float extraout_XMM0_Da_00;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  iVar2 = (int)param_1->_padding_;
  iVar3 = 0x10;
  if (iVar2 < 0x10) {
    iVar3 = iVar2;
  }
  iVar2 = 4;
  if (4 < iVar3) {
    iVar2 = iVar3;
  }
  this->DiaphragmBladeCount = iVar2;
  fVar4 = *(float *)((longlong)&param_1->_padding_ + 4);
  fVar5 = *(float *)&param_1->_padding_;
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  this->Squeeze = param_2->Squeeze;
  fVar1 = __real_40490fdb;
  fVar9 = __real_3f800000;
  if (fVar4 < fVar5) {
    fVar11 = (float)iVar2;
    fVar9 = __real_40490fdb / fVar11;
    if (fVar4 == 0.0) {
      this->BokehShape = StraightBlades;
      __libm_sse2_sincosf_();
      fVar4 = __real_3f800000;
      this->DiaphragmRotation = 0.0;
      fVar4 = fVar4 / SQRT(extraout_XMM0_Db * extraout_XMM0_Da * fVar11 * __real_3ea2f983);
      fVar5 = cosf(fVar9);
      this->CocRadiusToCircumscribedRadius = fVar4;
      this->CocRadiusToIncircleRadius = fVar5 * fVar4;
    }
    else {
      fVar5 = fVar5 / fVar4;
      this->BokehShape = RoundedBlades;
      fVar6 = sinf(fVar9);
      fVar7 = fVar6 / fVar5;
      fVar4 = __real_bf800000;
      if ((__real_bf800000 <= fVar7) && (fVar4 = fVar7, __real_3f800000 <= fVar7)) {
        fVar4 = __real_3f800000;
      }
      fVar4 = asinf(fVar4);
      fVar9 = cosf(fVar9);
      __libm_sse2_sincosf_();
      fVar8 = fVar5 * fVar5;
      fVar10 = extraout_XMM0_Db_00 * fVar5 - fVar9;
      fVar7 = fVar5 - __real_3f800000;
      fVar9 = SQRT(fVar1 / (((fVar8 * fVar4 - extraout_XMM0_Da_00 * extraout_XMM0_Db_00 * fVar8) +
                            fVar9 * fVar6) * fVar11));
      fVar4 = FGenericPlatformMath::Atan2
                        (fVar7 * __real_3f000000,SQRT(fVar8 - fVar7 * fVar7 * __real_3e800000));
      this->DiaphragmRotation = fVar4;
      (this->RoundedBlades).DiaphragmBladeRadius = fVar9 * fVar5;
      (this->RoundedBlades).DiaphragmBladeCenterOffset = fVar9 * fVar10;
      this->CocRadiusToCircumscribedRadius = fVar9;
      this->CocRadiusToIncircleRadius = (fVar5 - fVar10) * fVar9;
    }
    return;
  }
  this->BokehShape = Circle;
  this->DiaphragmBladeCount = 0;
  this->DiaphragmRotation = 0.0;
  this->CocRadiusToCircumscribedRadius = fVar9;
  this->CocRadiusToIncircleRadius = fVar9;
  return;
}

