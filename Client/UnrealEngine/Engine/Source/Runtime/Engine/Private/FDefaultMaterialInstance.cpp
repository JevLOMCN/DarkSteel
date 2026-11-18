// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 7

// FinishCacheUniformExpressions @ 147ef7c40

void __thiscall
FDefaultMaterialInstance::FinishCacheUniformExpressions(FDefaultMaterialInstance *this)

{
  this->Material->bCachingUniformExpressions = false;
  return;
}

// GetFallback @ 147efb060

FMaterialRenderProxy * __thiscall
FDefaultMaterialInstance::GetFallback(FDefaultMaterialInstance *this,Type param_1)

{
  UMaterial *pUVar1;
  FDefaultMaterialInstance *pFVar2;
  
  pUVar1 = UMaterial::GetDefaultMaterial((uint)(this->Material->MaterialDomain).Value);
  pFVar2 = (FDefaultMaterialInstance *)(**(code **)(pUVar1->_padding_ + 0x310))();
  if (pFVar2 == this) {
    pFVar2 = (FDefaultMaterialInstance *)0x0;
  }
  return (FMaterialRenderProxy *)pFVar2;
}

// GetFriendlyName @ 147efb120

FString * __thiscall
FDefaultMaterialInstance::GetFriendlyName
          (FDefaultMaterialInstance *this,FString *__return_storage_ptr__)

{
  FName local_res8 [4];
  
  local_res8[0] = (FName)this->Material->_padding_;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetMaterialInterface @ 147efb470

UMaterialInterface * __thiscall
FDefaultMaterialInstance::GetMaterialInterface(FDefaultMaterialInstance *this)

{
  return (UMaterialInterface *)this->Material;
}

// GetMaterialNoFallback @ 147efb4e0

/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FMaterial * __thiscall
FDefaultMaterialInstance::GetMaterialNoFallback(FDefaultMaterialInstance *this,Type param_1)

{
  FMaterial *this_00;
  FMaterialShaderMap *pFVar1;
  FMaterial *pFVar2;
  EShaderPlatform EVar3;
  
  if (param_1 == Num) {
    EVar3 = SP_NumPlatforms;
  }
  else {
    EVar3 = GRHIGlobals.ShaderPlatformForFeatureLevel[(int)param_1];
  }
  this_00 = (FMaterial *)(**(code **)(this->Material->_padding_ + 0x390))(this->Material,EVar3,4);
  if (this_00 != (FMaterial *)0x0) {
    pFVar1 = FMaterial::GetRenderingThreadShaderMap(this_00);
    pFVar2 = (FMaterial *)0x0;
    if (pFVar1 != (FMaterialShaderMap *)0x0) {
      pFVar2 = this_00;
    }
    return pFVar2;
  }
  return (FMaterial *)0x0;
}

// GetParameterValue @ 147efc190

/* WARNING: Enum "EMaterialParameterType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FDefaultMaterialInstance::GetParameterValue
          (FDefaultMaterialInstance *this,EMaterialParameterType param_1,
          FMemoryImageMaterialParameterInfo *param_2,FMaterialParameterValue *param_3,
          FMaterialRenderContext *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  USubsurfaceProfile *pUVar5;
  bool bVar6;
  undefined1 uVar7;
  FMaterial *this_00;
  FMaterialShaderMap *pFVar8;
  FName FVar9;
  USubsurfaceProfile *pUVar10;
  USpecularProfile *pUVar11;
  UMaterial *pUVar12;
  longlong *plVar13;
  uint uVar14;
  float fVar15;
  int local_68;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  double local_48;
  double dStack_40;
  uint7 uStack_37;
  
  this_00 = (FMaterial *)
            (**(code **)(this->Material->_padding_ + 0x390))(this->Material,GMaxRHIShaderPlatform,4)
  ;
  if ((this_00 == (FMaterial *)0x0) ||
     (pFVar8 = FMaterial::GetRenderingThreadShaderMap(this_00), pFVar8 == (FMaterialShaderMap *)0x0)
     ) {
    pUVar12 = UMaterial::GetDefaultMaterial((uint)(this->Material->MaterialDomain).Value);
    plVar13 = (longlong *)(**(code **)(pUVar12->_padding_ + 0x310))(pUVar12);
                    /* WARNING: Could not recover jumptable at 0x000147efc3cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar7 = (**(code **)(*plVar13 + 0x48))(plVar13,param_1,param_2,param_3);
    return (bool)uVar7;
  }
  if (param_1 == Scalar) {
    FVar9 = SubsurfaceProfile::GetSubsurfaceProfileParameterName();
    uVar1 = (param_2->Name).ComparisonIndex;
    if (((int)*(undefined8 *)FVar9 == uVar1) &&
       ((uint)((ulonglong)*(undefined8 *)FVar9 >> 0x20) == (param_2->Name).Number)) {
      bVar6 = Substrate::IsSubstrateEnabled();
      pUVar5 = (USubsurfaceProfile *)this->_padding_;
      if (bVar6) {
        if ((int)this->_padding_ == 0) {
          pUVar10 = (USubsurfaceProfile *)0x0;
        }
        else {
          pUVar10 = FMaterialRenderProxy::GetSubsurfaceProfileRT((FMaterialRenderProxy *)this,0);
        }
        if (pUVar5 != (USubsurfaceProfile *)0x0) {
          pUVar10 = pUVar5;
        }
        fVar15 = SubsurfaceProfile::GetSubsurfaceProfileId(pUVar10);
      }
      else {
        fVar15 = SubsurfaceProfile::GetSubsurfaceProfileId(pUVar5);
      }
LAB_147efc365:
      (param_3->field0_0x0).Float[0] = fVar15;
      (param_3->field0_0x0).Float[1] = fStack_54;
      (param_3->field0_0x0).Float[2] = fStack_50;
      (param_3->field0_0x0).Float[3] = fStack_4c;
      (param_3->field0_0x0).Double[2] = local_48;
      (param_3->field0_0x0).Double[3] = dStack_40;
      *(ulonglong *)&param_3->Type = (ulonglong)uStack_37 << 8;
      return true;
    }
    uVar4 = (uint)this->_padding_;
    if (uVar4 == 0) {
      uVar4 = (uint)this->_padding_;
      if (uVar4 != 0) {
        uVar14 = 0;
        do {
          FMaterialRenderProxy::GetSpecularProfileRT((FMaterialRenderProxy *)this,uVar14);
          FVar9 = SpecularProfile::GetSpecularProfileParameterName
                            ((USpecularProfile *)&stack0x00000008);
          uVar3 = (param_2->Name).ComparisonIndex;
          if (((int)*(undefined8 *)FVar9 == uVar3) &&
             ((uint)((ulonglong)*(undefined8 *)FVar9 >> 0x20) == (param_2->Name).Number)) {
            pUVar11 = FMaterialRenderProxy::GetSpecularProfileRT
                                ((FMaterialRenderProxy *)this,uVar14);
            if ((USpecularProfile *)this->_padding_ != (USpecularProfile *)0x0) {
              pUVar11 = (USpecularProfile *)this->_padding_;
            }
            fVar15 = SpecularProfile::GetSpecularProfileId(pUVar11);
            goto LAB_147efc365;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < uVar4);
      }
    }
    else {
      pUVar5 = (USubsurfaceProfile *)this->_padding_;
      uVar14 = 0;
      do {
        pUVar10 = FMaterialRenderProxy::GetSubsurfaceProfileRT((FMaterialRenderProxy *)this,uVar14);
        FVar9 = SubsurfaceProfile::CreateSubsurfaceProfileParameterName
                          ((USubsurfaceProfile *)&stack0x00000008);
        uVar2 = (param_2->Name).ComparisonIndex;
        if (((int)*(undefined8 *)FVar9 == uVar2) &&
           ((uint)((ulonglong)*(undefined8 *)FVar9 >> 0x20) == (param_2->Name).Number)) {
          if (pUVar5 != (USubsurfaceProfile *)0x0) {
            pUVar10 = pUVar5;
          }
          fVar15 = SubsurfaceProfile::GetSubsurfaceProfileId(pUVar10);
          goto LAB_147efc365;
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 < uVar4);
    }
  }
  return false;
}

// StartCacheUniformExpressions @ 147f084d0

void __thiscall
FDefaultMaterialInstance::StartCacheUniformExpressions(FDefaultMaterialInstance *this)

{
  this->Material->bCachingUniformExpressions = true;
  return;
}

