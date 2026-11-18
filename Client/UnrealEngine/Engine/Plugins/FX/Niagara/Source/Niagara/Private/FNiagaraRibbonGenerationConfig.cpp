// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 1

// FNiagaraRibbonGenerationConfig @ 149334b10

FNiagaraRibbonGenerationConfig * __thiscall
FNiagaraRibbonGenerationConfig::FNiagaraRibbonGenerationConfig
          (FNiagaraRibbonGenerationConfig *this,UNiagaraRibbonRendererProperties *param_1)

{
  char cVar1;
  uint uVar2;
  UClass *this_00;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  this->MaterialParamValidMask = param_1->MaterialParamValidMask;
  this->CurveTension = param_1->CurveTension;
  this->MaxNumRibbons = param_1->MaxNumRibbons;
  uVar7 = 0;
  uVar8 = ((uint)*(byte *)&param_1->RibbonFullIDDataSetAccessor ^ this->bHasFullRibbonIDs) & 1 ^
          *(uint *)&this->field_0xc;
  *(uint *)&this->field_0xc = uVar8;
  uVar2 = uVar7;
  if (param_1->RibbonIdDataSetAccessor != (FNiagaraDataSetAccessor<int>)0xffffffff) {
    uVar2 = 2;
  }
  *(uint *)&this->field_0xc = uVar2 | uVar8 & 0xfffffffd;
  if ((*(int *)&(param_1->TwistDataSetAccessor).field_0x4 == -1) ||
     (uVar3 = 4, *(int *)&(param_1->SizeDataSetAccessor).field_0x4 == -1)) {
    uVar3 = uVar7;
  }
  *(uint *)&this->field_0xc = uVar2 | uVar8 & 0xfffffff9 | uVar3;
  if (((param_1->UV0Settings).bEnablePerParticleUOverride == 0) ||
     (uVar4 = 8, param_1->U0OverrideIsBound == false)) {
    uVar4 = uVar7;
  }
  *(uint *)&this->field_0xc = uVar2 | uVar8 & 0xfffffff1 | uVar3 | uVar4;
  if (((param_1->UV1Settings).bEnablePerParticleUOverride == 0) ||
     (uVar5 = 0x10, param_1->U1OverrideIsBound == false)) {
    uVar5 = uVar7;
  }
  *(uint *)&this->field_0xc = uVar2 | uVar8 & 0xffffffe1 | uVar3 | uVar4 | uVar5;
  if ((param_1->TessellationMode != Custom) || (uVar7 = 0x20, param_1->bUseConstantFactor == '\0'))
  {
    uVar7 = 0;
  }
  *(uint *)&this->field_0xc = uVar2 | uVar8 & 0xffffffc1 | uVar3 | uVar4 | uVar5 | uVar7;
  if ((param_1->TessellationMode == Disabled) || (uVar6 = 0x40, uVar7 != 0)) {
    uVar6 = 0;
  }
  *(uint *)&this->field_0xc = uVar2 | uVar8 & 0xffffff81 | uVar3 | uVar4 | uVar5 | uVar7 | uVar6;
  cVar1 = *(char *)((longlong)&param_1->_padding_ + 4);
  if (cVar1 == '\0') {
    this_00 = Z_Construct_UClass_UNiagaraSettings_NoRegister();
    if ((this_00->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
      UClass::InternalCreateDefaultObjectWrapper(this_00);
    }
    bVar9 = (this_00->ClassDefaultObject).field0_0x0.DebugPtr[5].field_0x1a == '\0';
  }
  else {
    bVar9 = cVar1 == '\x01';
  }
  this->bNeedsPreciseMotionVectors = 0;
  *(uint *)&this->field_0xc = *(uint *)&this->field_0xc | (uint)bVar9 << 7;
  return this;
}

