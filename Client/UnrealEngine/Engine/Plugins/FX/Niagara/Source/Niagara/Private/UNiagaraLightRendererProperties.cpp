// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 20

// StaticClass @ 1492c2560

UClass * __cdecl UNiagaraLightRendererProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraLightRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraLightRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraLightRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraLightRendererProperties,0x230,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraLightRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraLightRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraLightRendererProperties.InnerSingleton;
}

// UNiagaraLightRendererProperties @ 1492d1820

UNiagaraLightRendererProperties * __thiscall
UNiagaraLightRendererProperties::UNiagaraLightRendererProperties
          (UNiagaraLightRendererProperties *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FNiagaraTypeRegistry *pFVar3;
  
  UNiagaraRendererProperties::UNiagaraRendererProperties((UNiagaraRendererProperties *)this,param_1)
  ;
  this->SourceMode = Particles;
  this->SpecularScale = 1.0;
  this->_padding_ = (longlong)&___7UNiagaraLightRendererProperties__6B_;
  (this->LightRenderingEnabledBinding).RootName.ComparisonIndex = 0;
  (this->LightRenderingEnabledBinding).RootName.Number = 0;
  this->DiffuseScale = 1.0;
  this->InverseExposureBlend = 0.0;
  (this->LightRenderingEnabledBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->LightRenderingEnabledBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar2 = -1;
  }
  else {
    pFVar3 = FNiagaraTypeRegistry::Get();
    iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar3,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->LightRenderingEnabledBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->LightRenderingEnabledBinding).bBindingExistsOnSource = '\0';
  (this->LightRenderingEnabledBinding).bIsCachedParticleValue = '\x01';
  (this->LightRenderingEnabledBinding).DataSetName.ComparisonIndex = 0;
  (this->LightRenderingEnabledBinding).DataSetName.Number = 0;
  (this->LightRenderingEnabledBinding).BindingSourceMode.Value = '\0';
  (this->LightExponentBinding).RootName.ComparisonIndex = 0;
  (this->LightExponentBinding).RootName.Number = 0;
  (this->LightExponentBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->LightExponentBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar2 = -1;
  }
  else {
    pFVar3 = FNiagaraTypeRegistry::Get();
    iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar3,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->LightExponentBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->LightExponentBinding).bBindingExistsOnSource = '\0';
  (this->LightExponentBinding).bIsCachedParticleValue = '\x01';
  (this->LightExponentBinding).DataSetName.ComparisonIndex = 0;
  (this->LightExponentBinding).DataSetName.Number = 0;
  (this->LightExponentBinding).BindingSourceMode.Value = '\0';
  (this->PositionBinding).RootName.ComparisonIndex = 0;
  (this->PositionBinding).RootName.Number = 0;
  (this->PositionBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PositionBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar2 = -1;
  }
  else {
    pFVar3 = FNiagaraTypeRegistry::Get();
    iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar3,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->PositionBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PositionBinding).bBindingExistsOnSource = '\0';
  (this->PositionBinding).bIsCachedParticleValue = '\x01';
  (this->PositionBinding).DataSetName.ComparisonIndex = 0;
  (this->PositionBinding).DataSetName.Number = 0;
  (this->PositionBinding).BindingSourceMode.Value = '\0';
  (this->ColorBinding).RootName.ComparisonIndex = 0;
  (this->ColorBinding).RootName.Number = 0;
  (this->ColorBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->ColorBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar2 = -1;
  }
  else {
    pFVar3 = FNiagaraTypeRegistry::Get();
    iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar3,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->ColorBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->ColorBinding).bBindingExistsOnSource = '\0';
  (this->ColorBinding).bIsCachedParticleValue = '\x01';
  (this->ColorBinding).DataSetName.ComparisonIndex = 0;
  (this->ColorBinding).DataSetName.Number = 0;
  (this->ColorBinding).BindingSourceMode.Value = '\0';
  (this->RadiusBinding).RootName.ComparisonIndex = 0;
  (this->RadiusBinding).RootName.Number = 0;
  (this->RadiusBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RadiusBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar2 = -1;
  }
  else {
    pFVar3 = FNiagaraTypeRegistry::Get();
    iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar3,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->RadiusBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->RadiusBinding).bBindingExistsOnSource = '\0';
  (this->RadiusBinding).bIsCachedParticleValue = '\x01';
  (this->RadiusBinding).DataSetName.ComparisonIndex = 0;
  (this->RadiusBinding).DataSetName.Number = 0;
  (this->RadiusBinding).BindingSourceMode.Value = '\0';
  (this->VolumetricScatteringBinding).RootName.ComparisonIndex = 0;
  (this->VolumetricScatteringBinding).RootName.Number = 0;
  (this->VolumetricScatteringBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->VolumetricScatteringBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar2 = -1;
  }
  else {
    pFVar3 = FNiagaraTypeRegistry::Get();
    iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar3,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->VolumetricScatteringBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->VolumetricScatteringBinding).bBindingExistsOnSource = '\0';
  (this->VolumetricScatteringBinding).bIsCachedParticleValue = '\x01';
  (this->VolumetricScatteringBinding).DataSetName.ComparisonIndex = 0;
  (this->VolumetricScatteringBinding).DataSetName.Number = 0;
  (this->VolumetricScatteringBinding).BindingSourceMode.Value = '\0';
  (this->RendererVisibilityTagBinding).RootName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).RootName.Number = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar2 = -1;
  }
  else {
    pFVar3 = FNiagaraTypeRegistry::Get();
    iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar3,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->RendererVisibilityTagBinding).bBindingExistsOnSource = '\0';
  (this->RendererVisibilityTagBinding).bIsCachedParticleValue = '\x01';
  (this->RendererVisibilityTagBinding).DataSetName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).DataSetName.Number = 0;
  (this->RendererVisibilityTagBinding).BindingSourceMode.Value = '\0';
  (this->SpecularScaleBinding).RootName.ComparisonIndex = 0;
  (this->SpecularScaleBinding).RootName.Number = 0;
  (this->SpecularScaleBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->SpecularScaleBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar2 = -1;
  }
  else {
    pFVar3 = FNiagaraTypeRegistry::Get();
    iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar3,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->SpecularScaleBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->SpecularScaleBinding).bBindingExistsOnSource = '\0';
  (this->SpecularScaleBinding).bIsCachedParticleValue = '\x01';
  (this->SpecularScaleBinding).DataSetName.ComparisonIndex = 0;
  (this->SpecularScaleBinding).DataSetName.Number = 0;
  (this->SpecularScaleBinding).BindingSourceMode.Value = '\0';
  (this->DiffuseScaleBinding).RootName.ComparisonIndex = 0;
  (this->DiffuseScaleBinding).RootName.Number = 0;
  (this->DiffuseScaleBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DiffuseScaleBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar2 = -1;
  }
  else {
    pFVar3 = FNiagaraTypeRegistry::Get();
    iVar2 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar3,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->DiffuseScaleBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->DiffuseScaleBinding).bBindingExistsOnSource = '\0';
  (this->DiffuseScaleBinding).bIsCachedParticleValue = '\x01';
  (this->DiffuseScaleBinding).DataSetName.ComparisonIndex = 0;
  (this->DiffuseScaleBinding).DataSetName.Number = 0;
  (this->DiffuseScaleBinding).BindingSourceMode.Value = '\0';
  *(undefined1 *)&this->PositionDataSetAccessor = 1;
  *(undefined4 *)&(this->PositionDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ColorDataSetAccessor = 1;
  *(undefined4 *)&(this->ColorDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->RadiusDataSetAccessor = 1;
  *(undefined4 *)&(this->RadiusDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ExponentDataSetAccessor = 1;
  *(undefined4 *)&(this->ExponentDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ScatteringDataSetAccessor = 1;
  *(undefined8 *)&(this->ScatteringDataSetAccessor).field_0x4 = 0xffffffffffffffff;
  this->RendererVisibilityTagAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  this->LightIdAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  *(undefined1 *)&this->SpecularScaleAccessor = 1;
  *(undefined4 *)&(this->SpecularScaleAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->DiffuseScaleAccessor = 1;
  *(undefined4 *)&(this->DiffuseScaleAccessor).field_0x4 = 0xffffffff;
  return this;
}

// UNiagaraLightRendererProperties @ 1492d1bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UNiagaraLightRendererProperties * __thiscall
UNiagaraLightRendererProperties::UNiagaraLightRendererProperties
          (UNiagaraLightRendererProperties *this)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  FNiagaraVariableAttributeBinding *pFVar4;
  FNiagaraVariableAttributeBinding *pFVar5;
  FNiagaraVariableAttributeBinding *pFVar6;
  FNiagaraVariableAttributeBinding *pFVar7;
  FNiagaraVariableAttributeBinding *pFVar8;
  FNiagaraVariableAttributeBinding *pFVar9;
  FNiagaraVariableAttributeBinding *pFVar10;
  longlong *plVar11;
  int iVar12;
  FNiagaraTypeRegistry *pFVar13;
  
  UNiagaraRendererProperties::UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  this->SourceMode = Particles;
  this->RadiusScale = 1.0;
  this->_padding_ = (longlong)&___7UNiagaraLightRendererProperties__6B_;
  this->DefaultExponent = 1.0;
  this->SpecularScale = 1.0;
  puVar3 = &this->field_0xa4;
  this->bUseInverseSquaredFalloff = 1;
  this->bAlphaScalesBrightness = 0;
  this->bMegaLightsCastShadows = 0;
  this->bAllowMegaLights = 0;
  this->bAffectsTranslucency = 0;
  *(undefined8 *)&this->DiffuseScale = 0x3f800000;
  *(undefined8 *)((longlong)&(this->ColorAdd).field0_0x0 + 4) = 0;
  this->InverseExposureBlend = 0.0;
  (this->LightRenderingEnabledBinding).RootName.ComparisonIndex = 0;
  (this->LightRenderingEnabledBinding).RootName.Number = 0;
  (this->LightRenderingEnabledBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->LightRenderingEnabledBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->LightRenderingEnabledBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar12;
  pFVar4 = &this->LightExponentBinding;
  (this->LightRenderingEnabledBinding).bBindingExistsOnSource = '\0';
  (this->LightRenderingEnabledBinding).bIsCachedParticleValue = '\x01';
  (this->LightRenderingEnabledBinding).DataSetName.ComparisonIndex = 0;
  (this->LightRenderingEnabledBinding).DataSetName.Number = 0;
  (this->LightRenderingEnabledBinding).BindingSourceMode.Value = '\0';
  (pFVar4->RootName).ComparisonIndex = 0;
  (pFVar4->RootName).Number = 0;
  (this->LightExponentBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->LightExponentBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->LightExponentBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar12;
  pFVar5 = &this->PositionBinding;
  (this->LightExponentBinding).bBindingExistsOnSource = '\0';
  (this->LightExponentBinding).bIsCachedParticleValue = '\x01';
  (this->LightExponentBinding).DataSetName.ComparisonIndex = 0;
  (this->LightExponentBinding).DataSetName.Number = 0;
  (this->LightExponentBinding).BindingSourceMode.Value = '\0';
  (pFVar5->RootName).ComparisonIndex = 0;
  (pFVar5->RootName).Number = 0;
  (this->PositionBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PositionBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->PositionBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar12;
  pFVar6 = &this->ColorBinding;
  (this->PositionBinding).bBindingExistsOnSource = '\0';
  (this->PositionBinding).bIsCachedParticleValue = '\x01';
  (this->PositionBinding).DataSetName.ComparisonIndex = 0;
  (this->PositionBinding).DataSetName.Number = 0;
  (this->PositionBinding).BindingSourceMode.Value = '\0';
  (pFVar6->RootName).ComparisonIndex = 0;
  (pFVar6->RootName).Number = 0;
  (this->ColorBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->ColorBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->ColorBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar12;
  pFVar7 = &this->RadiusBinding;
  (this->ColorBinding).bBindingExistsOnSource = '\0';
  (this->ColorBinding).bIsCachedParticleValue = '\x01';
  (this->ColorBinding).DataSetName.ComparisonIndex = 0;
  (this->ColorBinding).DataSetName.Number = 0;
  (this->ColorBinding).BindingSourceMode.Value = '\0';
  (pFVar7->RootName).ComparisonIndex = 0;
  (pFVar7->RootName).Number = 0;
  (this->RadiusBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RadiusBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->RadiusBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar12;
  pFVar8 = &this->VolumetricScatteringBinding;
  (this->RadiusBinding).bBindingExistsOnSource = '\0';
  (this->RadiusBinding).bIsCachedParticleValue = '\x01';
  (this->RadiusBinding).DataSetName.ComparisonIndex = 0;
  (this->RadiusBinding).DataSetName.Number = 0;
  (this->RadiusBinding).BindingSourceMode.Value = '\0';
  (pFVar8->RootName).ComparisonIndex = 0;
  (pFVar8->RootName).Number = 0;
  (this->VolumetricScatteringBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->VolumetricScatteringBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->VolumetricScatteringBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar12;
  pFVar9 = &this->RendererVisibilityTagBinding;
  (this->VolumetricScatteringBinding).bBindingExistsOnSource = '\0';
  (this->VolumetricScatteringBinding).bIsCachedParticleValue = '\x01';
  (this->VolumetricScatteringBinding).DataSetName.ComparisonIndex = 0;
  (this->VolumetricScatteringBinding).DataSetName.Number = 0;
  (this->VolumetricScatteringBinding).BindingSourceMode.Value = '\0';
  (pFVar9->RootName).ComparisonIndex = 0;
  (pFVar9->RootName).Number = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar12;
  pFVar10 = &this->SpecularScaleBinding;
  (this->RendererVisibilityTagBinding).bBindingExistsOnSource = '\0';
  (this->RendererVisibilityTagBinding).bIsCachedParticleValue = '\x01';
  (this->RendererVisibilityTagBinding).DataSetName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).DataSetName.Number = 0;
  (this->RendererVisibilityTagBinding).BindingSourceMode.Value = '\0';
  (pFVar10->RootName).ComparisonIndex = 0;
  (pFVar10->RootName).Number = 0;
  (this->SpecularScaleBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->SpecularScaleBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->SpecularScaleBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar12;
  (this->SpecularScaleBinding).bBindingExistsOnSource = '\0';
  (this->SpecularScaleBinding).bIsCachedParticleValue = '\x01';
  (this->SpecularScaleBinding).DataSetName.ComparisonIndex = 0;
  (this->SpecularScaleBinding).DataSetName.Number = 0;
  (this->SpecularScaleBinding).BindingSourceMode.Value = '\0';
  (this->DiffuseScaleBinding).RootName.ComparisonIndex = 0;
  (this->DiffuseScaleBinding).RootName.Number = 0;
  (this->DiffuseScaleBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DiffuseScaleBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar12 = -1;
  }
  else {
    pFVar13 = FNiagaraTypeRegistry::Get();
    iVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar13,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->DiffuseScaleBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar12;
  (this->DiffuseScaleBinding).bBindingExistsOnSource = '\0';
  (this->DiffuseScaleBinding).bIsCachedParticleValue = '\x01';
  (this->DiffuseScaleBinding).DataSetName.ComparisonIndex = 0;
  (this->DiffuseScaleBinding).DataSetName.Number = 0;
  (this->DiffuseScaleBinding).BindingSourceMode.Value = '\0';
  *(undefined1 *)&this->PositionDataSetAccessor = 1;
  *(undefined4 *)&(this->PositionDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ColorDataSetAccessor = 1;
  *(undefined4 *)&(this->ColorDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->RadiusDataSetAccessor = 1;
  *(undefined4 *)&(this->RadiusDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ExponentDataSetAccessor = 1;
  *(undefined4 *)&(this->ExponentDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ScatteringDataSetAccessor = 1;
  *(undefined8 *)&(this->ScatteringDataSetAccessor).field_0x4 = 0xffffffffffffffff;
  this->RendererVisibilityTagAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  this->LightIdAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  *(undefined1 *)&this->SpecularScaleAccessor = 1;
  *(undefined4 *)&(this->SpecularScaleAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->DiffuseScaleAccessor = 1;
  *(undefined4 *)&(this->DiffuseScaleAccessor).field_0x4 = 0xffffffff;
  piVar1 = (int *)((longlong)&this->_padding_ + 4);
  iVar12 = *piVar1;
  *(undefined4 *)&this->_padding_ = 9;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,9,iVar12,(ForAnyElementType *)&this->_padding_,9,piVar1);
  plVar11 = (longlong *)this->_padding_;
  *plVar11 = (longlong)&this->LightRenderingEnabledBinding;
  plVar11[1] = (longlong)pFVar4;
  plVar11[2] = (longlong)pFVar5;
  plVar11[3] = (longlong)pFVar6;
  plVar11[4] = (longlong)pFVar7;
  plVar11[5] = (longlong)pFVar8;
  plVar11[6] = (longlong)pFVar9;
  plVar11[7] = (longlong)pFVar10;
  plVar11[8] = (longlong)&this->DiffuseScaleBinding;
  return this;
}

// ~UNiagaraLightRendererProperties @ 1492d4ac0

void __thiscall
UNiagaraLightRendererProperties::~UNiagaraLightRendererProperties
          (UNiagaraLightRendererProperties *this)

{
  this->_padding_ = (longlong)&___7UNiagaraLightRendererProperties__6B_;
  UNiagaraRendererProperties::~UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  return;
}

// CacheFromCompiledData @ 1492dcae0

void __thiscall
UNiagaraLightRendererProperties::CacheFromCompiledData
          (UNiagaraLightRendererProperties *this,FNiagaraDataSetCompiledData *param_1)

{
  undefined1 uVar1;
  FName FVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FNiagaraTypeRegistry *pFVar7;
  FNiagaraTypeDefinition *pFVar8;
  FNiagaraDataSetAccessor<FNiagaraBool> FVar9;
  longlong lVar10;
  FNiagaraDataSetCompiledData *pFVar11;
  uint uVar12;
  FName *pFVar13;
  
  (**(code **)(this->_padding_ + 0x358))(this,this->SourceMode,0);
  FNiagaraDataSetAccessorInt32<int>::Init
            ((FNiagaraDataSetAccessorInt32<int> *)&this->LightIdAccessor,param_1,
             NiagaraLightRendererPropertiesPrivate::NAME_UniqueID);
  pFVar7 = FNiagaraTypeRegistry::Get();
  pFVar8 = FNiagaraTypeRegistry::GetRegisteredType
                     (pFVar7,(this->PositionBinding).ParamMapVariable.TypeDefHandle.
                             RegisteredTypeIndex);
  FVar2 = (this->PositionBinding).DataSetName;
  if ((pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
    pFVar7 = FNiagaraTypeRegistry::Get();
    FNiagaraTypeRegistry::RegisterTypeInternal(pFVar7,pFVar8);
  }
  pFVar11 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->PositionBinding).bIsCachedParticleValue != '\0') {
    pFVar11 = param_1;
  }
  if (pFVar11 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->PositionDataSetAccessor = 1;
    *(undefined4 *)&(this->PositionDataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<FNiagaraPosition>::Init
              ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)&this->PositionDataSetAccessor,
               pFVar11,FVar2);
  }
  pFVar7 = FNiagaraTypeRegistry::Get();
  pFVar8 = FNiagaraTypeRegistry::GetRegisteredType
                     (pFVar7,(this->ColorBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex
                     );
  FVar2 = (this->ColorBinding).DataSetName;
  if ((pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
    pFVar7 = FNiagaraTypeRegistry::Get();
    FNiagaraTypeRegistry::RegisterTypeInternal(pFVar7,pFVar8);
  }
  pFVar11 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->ColorBinding).bIsCachedParticleValue != '\0') {
    pFVar11 = param_1;
  }
  if (pFVar11 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->ColorDataSetAccessor = 1;
    *(undefined4 *)&(this->ColorDataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<FLinearColor>::Init
              ((FNiagaraDataSetAccessorFloat<FLinearColor> *)&this->ColorDataSetAccessor,pFVar11,
               FVar2);
  }
  UNiagaraRendererProperties::InitParticleDataSetAccessor<FNiagaraDataSetAccessor<float>_>
            ((UNiagaraRendererProperties *)this,&this->RadiusDataSetAccessor,param_1,
             &this->RadiusBinding);
  UNiagaraRendererProperties::InitParticleDataSetAccessor<FNiagaraDataSetAccessor<float>_>
            ((UNiagaraRendererProperties *)this,&this->ExponentDataSetAccessor,param_1,
             &this->LightExponentBinding);
  UNiagaraRendererProperties::InitParticleDataSetAccessor<FNiagaraDataSetAccessor<float>_>
            ((UNiagaraRendererProperties *)this,&this->ScatteringDataSetAccessor,param_1,
             &this->VolumetricScatteringBinding);
  pFVar7 = FNiagaraTypeRegistry::Get();
  pFVar8 = FNiagaraTypeRegistry::GetRegisteredType
                     (pFVar7,(this->LightRenderingEnabledBinding).ParamMapVariable.TypeDefHandle.
                             RegisteredTypeIndex);
  FVar2 = (this->LightRenderingEnabledBinding).DataSetName;
  if ((pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
    pFVar7 = FNiagaraTypeRegistry::Get();
    FNiagaraTypeRegistry::RegisterTypeInternal(pFVar7,pFVar8);
  }
  this->EnabledDataSetAccessor = (FNiagaraDataSetAccessor<FNiagaraBool>)0xffffffff;
  pFVar11 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->LightRenderingEnabledBinding).bIsCachedParticleValue != '\0') {
    pFVar11 = param_1;
  }
  if (pFVar11 != (FNiagaraDataSetCompiledData *)0x0) {
    if (FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
      uVar12 = 0xffffffff;
    }
    else {
      pFVar7 = FNiagaraTypeRegistry::Get();
      uVar12 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar7,&FNiagaraTypeDefinition::BoolDef);
    }
    pFVar3 = (FName *)(pFVar11->Variables).AllocatorInstance.Data;
    for (pFVar13 = pFVar3;
        pFVar13 != (FName *)((longlong)pFVar3 + (longlong)(pFVar11->Variables).ArrayNum * 0xc);
        pFVar13 = (FName *)&pFVar13[1].Number) {
      if ((*pFVar13 == FVar2) && (pFVar13[1].ComparisonIndex.Value == uVar12)) {
        lVar10 = ((longlong)pFVar13 - (longlong)pFVar3) / 6 +
                 ((longlong)pFVar13 - (longlong)pFVar3 >> 0x3f);
        uVar12 = (int)(lVar10 >> 1) - (int)(lVar10 >> 0x3f);
        if (uVar12 != 0xffffffff) {
          uVar6 = 0;
          if ((int)uVar12 < (pFVar11->VariableLayouts).ArrayNum) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          FVar9._2_2_ = 0;
          FVar9._0_2_ = *(ushort *)
                         ((pFVar11->VariableLayouts).AllocatorInstance.Data +
                         (longlong)(int)uVar12 * 0x20 + 2);
          this->EnabledDataSetAccessor = FVar9;
        }
        break;
      }
    }
  }
  pFVar7 = FNiagaraTypeRegistry::Get();
  pFVar8 = FNiagaraTypeRegistry::GetRegisteredType
                     (pFVar7,(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle.
                             RegisteredTypeIndex);
  FVar2 = (this->RendererVisibilityTagBinding).DataSetName;
  if ((pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
    pFVar7 = FNiagaraTypeRegistry::Get();
    FNiagaraTypeRegistry::RegisterTypeInternal(pFVar7,pFVar8);
  }
  pFVar11 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->RendererVisibilityTagBinding).bIsCachedParticleValue != '\0') {
    pFVar11 = param_1;
  }
  FNiagaraDataSetAccessorInt32<int>::Init
            ((FNiagaraDataSetAccessorInt32<int> *)&this->RendererVisibilityTagAccessor,pFVar11,FVar2
            );
  pFVar7 = FNiagaraTypeRegistry::Get();
  pFVar8 = FNiagaraTypeRegistry::GetRegisteredType
                     (pFVar7,(this->SpecularScaleBinding).ParamMapVariable.TypeDefHandle.
                             RegisteredTypeIndex);
  FVar2 = (this->SpecularScaleBinding).DataSetName;
  if ((pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
    pFVar7 = FNiagaraTypeRegistry::Get();
    FNiagaraTypeRegistry::RegisterTypeInternal(pFVar7,pFVar8);
  }
  pFVar11 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->SpecularScaleBinding).bIsCachedParticleValue != '\0') {
    pFVar11 = param_1;
  }
  if (pFVar11 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->SpecularScaleAccessor = 1;
    *(undefined4 *)&(this->SpecularScaleAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<float>::Init
              ((FNiagaraDataSetAccessorFloat<float> *)&this->SpecularScaleAccessor,pFVar11,FVar2);
  }
  UNiagaraRendererProperties::InitParticleDataSetAccessor<FNiagaraDataSetAccessor<float>_>
            ((UNiagaraRendererProperties *)this,&this->DiffuseScaleAccessor,param_1,
             &this->DiffuseScaleBinding);
  return;
}

// CreateBoundsCalculator @ 1492de710

FNiagaraBoundsCalculator * __thiscall
UNiagaraLightRendererProperties::CreateBoundsCalculator(UNiagaraLightRendererProperties *this)

{
  char cVar1;
  FNiagaraBoundsCalculator *pFVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x308))();
  if (cVar1 == '\x01') {
    return (FNiagaraBoundsCalculator *)0x0;
  }
  pFVar2 = ::operator_new(0x18);
  if (pFVar2 != (FNiagaraBoundsCalculator *)0x0) {
    *pFVar2 = (FNiagaraBoundsCalculator)&___7FNiagaraBoundsCalculatorLights__6B_;
    pFVar2[1] = (FNiagaraBoundsCalculator)&this->PositionDataSetAccessor;
    pFVar2[2] = (FNiagaraBoundsCalculator)&this->RadiusDataSetAccessor;
    return pFVar2;
  }
  return (FNiagaraBoundsCalculator *)0x0;
}

// CreateEmitterRenderer @ 1492e0090

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

FNiagaraRenderer * __thiscall
UNiagaraLightRendererProperties::CreateEmitterRenderer
          (UNiagaraLightRendererProperties *this,Type param_1,FNiagaraEmitterInstance *param_2,
          FNiagaraSystemInstanceController *param_3)

{
  FNiagaraRendererLights *this_00;
  FNiagaraRenderer *pFVar1;
  
  this_00 = ::operator_new(0x170);
  if (this_00 == (FNiagaraRendererLights *)0x0) {
    pFVar1 = (FNiagaraRenderer *)0x0;
  }
  else {
    pFVar1 = (FNiagaraRenderer *)
             FNiagaraRendererLights::FNiagaraRendererLights
                       (this_00,param_1,(UNiagaraRendererProperties *)this,param_2);
  }
  (**(code **)(pFVar1->_padding_ + 8))(pFVar1,this,param_2,param_3);
  return pFVar1;
}

// GetCurrentSourceMode @ 1492ee1e0

ENiagaraRendererSourceDataMode __thiscall
UNiagaraLightRendererProperties::GetCurrentSourceMode(UNiagaraLightRendererProperties *this)

{
  return this->SourceMode;
}

// GetDefaultColor @ 1492ee630

FLinearColor * __cdecl
UNiagaraLightRendererProperties::GetDefaultColor(FLinearColor *__return_storage_ptr__)

{
  (__return_storage_ptr__->field0_0x0)._s_0 =
       (FLinearColor_u_0_s_0)NiagaraLightRendererPropertiesPrivate::GDefaultColor;
  return __return_storage_ptr__;
}

// GetDefaultRadius @ 1492ee650

float __cdecl UNiagaraLightRendererProperties::GetDefaultRadius(void)

{
  return NiagaraLightRendererPropertiesPrivate::GDefaultRadius;
}

// GetDefaultVolumetricScattering @ 1492ee660

float __cdecl UNiagaraLightRendererProperties::GetDefaultVolumetricScattering(void)

{
  return NiagaraLightRendererPropertiesPrivate::GDefaultVolumetricScattering;
}

// GetPrivateStaticClass @ 1492f10d0

UClass * __cdecl UNiagaraLightRendererProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraLightRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraLightRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraLightRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraLightRendererProperties,0x230,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraLightRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraLightRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraLightRendererProperties.InnerSingleton;
}

// GetUsedMaterials @ 1492f2750

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
UNiagaraLightRendererProperties::GetUsedMaterials
          (UNiagaraLightRendererProperties *this,FNiagaraEmitterInstance *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  return;
}

// InitCDOPropertiesAfterModuleStartup @ 1492f78f0

void __cdecl UNiagaraLightRendererProperties::InitCDOPropertiesAfterModuleStartup(void)

{
  FWeakObjectPtr *pFVar1;
  code *pcVar2;
  FName FVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  FNameEntryId FVar7;
  uint uVar8;
  FNameEntryId FVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  UClass *pUVar13;
  FNiagaraVariableAttributeBinding *pFVar14;
  FNiagaraVariable *pFVar15;
  FNiagaraTypeRegistry *pFVar16;
  FNiagaraTypeDefinition *pFVar17;
  UObject *pUVar18;
  FString *pFVar19;
  ulonglong uVar20;
  ForAnyElementType this;
  wchar_t *pwVar21;
  wchar_t *pwVar22;
  undefined1 local_res8 [8];
  FLinearColor_u_0 local_318;
  FString local_308;
  FString local_2f8;
  FString local_2e8;
  FNiagaraVariable local_2d8;
  FNiagaraVariable local_2b8;
  FNiagaraVariable local_298;
  FNiagaraVariableAttributeBinding local_278;
  FNiagaraVariableAttributeBinding local_258;
  FNiagaraVariableAttributeBinding local_238;
  FNiagaraVariableAttributeBinding local_218;
  FNiagaraVariableAttributeBinding local_1f8;
  FNiagaraVariableAttributeBinding local_1d8;
  FNiagaraVariableAttributeBinding local_1b8;
  FNiagaraVariableAttributeBinding local_198;
  FNiagaraVariableAttributeBinding local_178;
  FNiagaraVariableAttributeBinding local_158;
  FNiagaraVariableAttributeBinding local_138;
  FNiagaraVariableAttributeBinding local_118;
  FNiagaraVariableAttributeBinding local_f8;
  FNiagaraVariableAttributeBinding local_d8;
  FNiagaraVariableAttributeBinding local_b8;
  FNiagaraVariableAttributeBinding local_98;
  FNiagaraVariableAttributeBinding local_78;
  FNiagaraVariableAttributeBinding local_58 [2];
  
  pUVar13 = StaticClass();
  if ((pUVar13->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar13);
  }
  pUVar18 = (pUVar13->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar18 == (UObject *)0x0) {
    pFVar19 = GetTypeName<UNiagaraLightRendererProperties>(&local_308);
    if ((pFVar19->Data).ArrayNum == 0) {
      pwVar22 = L"";
    }
    else {
      pwVar22 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar22);
  }
  pUVar13 = StaticClass();
  iVar11 = (int)pUVar13->_padding_;
  if ((*(int *)(*(longlong *)&pUVar18->field_0x10 + 0x38) < iVar11) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar18->field_0x10 + 0x30) + (longlong)iVar11 * 8) !=
      &pUVar13->_padding_)) {
    pFVar19 = GetTypeName<UNiagaraLightRendererProperties>(&local_2f8);
    pwVar22 = L"";
    if ((pFVar19->Data).ArrayNum == 0) {
      pwVar21 = L"";
    }
    else {
      pwVar21 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    }
    pFVar19 = GetFullNameForCastLogError<UObject>(&local_2e8,pUVar18);
    if ((pFVar19->Data).ArrayNum != 0) {
      pwVar22 = (wchar_t *)(pFVar19->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar22,pwVar21);
  }
  pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                      (&local_278,(FNiagaraVariableBase *)&INiagaraModule::Particles_Position);
  uVar6 = (pFVar14->RootName).Number;
  FVar3 = (pFVar14->ParamMapVariable).Name;
  *(uint *)&pUVar18[6].field_0x1c = (pFVar14->RootName).ComparisonIndex.Value;
  *(uint *)&pUVar18[6].field_0x20 = uVar6;
  *(FName *)&pUVar18[6].field_0x24 = FVar3;
  uVar4 = *(undefined8 *)&(pFVar14->DataSetName).Number;
  *(undefined8 *)&pUVar18[7].field_0x4 = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&pUVar18[7].field_0xc = uVar4;
  pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                      (&local_258,(FNiagaraVariableBase *)&INiagaraModule::Particles_Color);
  uVar6 = (pFVar14->RootName).Number;
  FVar7.Value = (pFVar14->ParamMapVariable).Name.ComparisonIndex.Value;
  uVar8 = (pFVar14->ParamMapVariable).Name.Number;
  *(uint *)&pUVar18[7].field_0x14 = (pFVar14->RootName).ComparisonIndex.Value;
  *(uint *)&pUVar18[7].field_0x18 = uVar6;
  *(uint *)&pUVar18[7].field_0x1c = FVar7.Value;
  *(uint *)&pUVar18[7].field_0x20 = uVar8;
  uVar4 = *(undefined8 *)&(pFVar14->DataSetName).Number;
  *(undefined8 *)&pUVar18[7].field_0x24 = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&pUVar18[8].field_0x4 = uVar4;
  pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                      (&local_238,(FNiagaraVariableBase *)&INiagaraModule::Particles_LightRadius);
  uVar6 = (pFVar14->RootName).Number;
  FVar7.Value = (pFVar14->ParamMapVariable).Name.ComparisonIndex.Value;
  uVar8 = (pFVar14->ParamMapVariable).Name.Number;
  *(uint *)&pUVar18[8].field_0xc = (pFVar14->RootName).ComparisonIndex.Value;
  *(uint *)&pUVar18[8].field_0x10 = uVar6;
  *(uint *)&pUVar18[8].field_0x14 = FVar7.Value;
  *(uint *)&pUVar18[8].field_0x18 = uVar8;
  uVar4 = *(undefined8 *)&(pFVar14->DataSetName).Number;
  *(undefined8 *)&pUVar18[8].field_0x1c = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&pUVar18[8].field_0x24 = uVar4;
  pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                      (&local_218,(FNiagaraVariableBase *)&INiagaraModule::Particles_LightExponent);
  FVar7.Value = (pFVar14->ParamMapVariable).Name.ComparisonIndex.Value;
  uVar6 = (pFVar14->ParamMapVariable).Name.Number;
  *(FName *)&pUVar18[5].field_0x24 = pFVar14->RootName;
  *(uint *)&pUVar18[6].field_0x4 = FVar7.Value;
  *(uint *)&pUVar18[6].field_0x8 = uVar6;
  uVar4 = *(undefined8 *)&(pFVar14->DataSetName).Number;
  *(undefined8 *)&pUVar18[6].field_0xc = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&pUVar18[6].field_0x14 = uVar4;
  pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                      (&local_1f8,(FNiagaraVariableBase *)&INiagaraModule::Particles_LightEnabled);
  uVar6 = (pFVar14->RootName).Number;
  FVar7.Value = (pFVar14->ParamMapVariable).Name.ComparisonIndex.Value;
  uVar8 = (pFVar14->ParamMapVariable).Name.Number;
  *(uint *)&pUVar18[5].field_0x4 = (pFVar14->RootName).ComparisonIndex.Value;
  *(uint *)&pUVar18[5].field_0x8 = uVar6;
  *(uint *)&pUVar18[5].field_0xc = FVar7.Value;
  *(uint *)&pUVar18[5].field_0x10 = uVar8;
  uVar4 = *(undefined8 *)&(pFVar14->DataSetName).Number;
  *(undefined8 *)&pUVar18[5].field_0x14 = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&pUVar18[5].field_0x1c = uVar4;
  pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                      (&local_1d8,
                       (FNiagaraVariableBase *)&INiagaraModule::Particles_LightVolumetricScattering)
  ;
  uVar6 = (pFVar14->RootName).Number;
  FVar7.Value = (pFVar14->ParamMapVariable).Name.ComparisonIndex.Value;
  uVar8 = (pFVar14->ParamMapVariable).Name.Number;
  *(uint *)&pUVar18[9].field_0x4 = (pFVar14->RootName).ComparisonIndex.Value;
  *(uint *)&pUVar18[9].field_0x8 = uVar6;
  *(uint *)&pUVar18[9].field_0xc = FVar7.Value;
  *(uint *)&pUVar18[9].field_0x10 = uVar8;
  uVar4 = *(undefined8 *)&(pFVar14->DataSetName).Number;
  *(undefined8 *)&pUVar18[9].field_0x14 = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&pUVar18[9].field_0x1c = uVar4;
  pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                      (&local_1b8,(FNiagaraVariableBase *)&INiagaraModule::Particles_VisibilityTag);
  FVar7.Value = (pFVar14->ParamMapVariable).Name.ComparisonIndex.Value;
  uVar6 = (pFVar14->ParamMapVariable).Name.Number;
  *(FName *)&pUVar18[9].field_0x24 = pFVar14->RootName;
  *(uint *)&pUVar18[10].field_0x4 = FVar7.Value;
  *(uint *)&pUVar18[10].field_0x8 = uVar6;
  uVar4 = *(undefined8 *)&(pFVar14->DataSetName).Number;
  *(undefined8 *)&pUVar18[10].field_0xc = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&pUVar18[10].field_0x14 = uVar4;
  pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                      (&local_198,
                       (FNiagaraVariableBase *)&INiagaraModule::Particles_LightSpecularScale);
  uVar6 = (pFVar14->RootName).Number;
  FVar3 = (pFVar14->ParamMapVariable).Name;
  *(uint *)&pUVar18[10].field_0x1c = (pFVar14->RootName).ComparisonIndex.Value;
  *(uint *)&pUVar18[10].field_0x20 = uVar6;
  *(FName *)&pUVar18[10].field_0x24 = FVar3;
  uVar4 = *(undefined8 *)&(pFVar14->DataSetName).Number;
  *(undefined8 *)&pUVar18[0xb].field_0x4 = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle
  ;
  *(undefined8 *)&pUVar18[0xb].field_0xc = uVar4;
  pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                      (&local_178,
                       (FNiagaraVariableBase *)&INiagaraModule::Particles_LightDiffuseScale);
  uVar6 = (pFVar14->RootName).Number;
  FVar7.Value = (pFVar14->ParamMapVariable).Name.ComparisonIndex.Value;
  uVar8 = (pFVar14->ParamMapVariable).Name.Number;
  *(uint *)&pUVar18[0xb].field_0x14 = (pFVar14->RootName).ComparisonIndex.Value;
  *(uint *)&pUVar18[0xb].field_0x18 = uVar6;
  *(uint *)&pUVar18[0xb].field_0x1c = FVar7.Value;
  *(uint *)&pUVar18[0xb].field_0x20 = uVar8;
  uVar4 = *(undefined8 *)&(pFVar14->DataSetName).Number;
  *(undefined8 *)&pUVar18[0xb].field_0x24 =
       *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&pUVar18[0xc].field_0x4 = uVar4;
  pFVar15 = FNiagaraConstants::GetAttributeWithDefaultValue
                      (&local_2d8,(FNiagaraVariableBase *)&INiagaraModule::Particles_Color);
  pFVar16 = FNiagaraTypeRegistry::Get();
  pFVar17 = FNiagaraTypeRegistry::GetRegisteredType(pFVar16,(int)pFVar15->_padding_);
  iVar11 = FNiagaraTypeDefinition::GetSize(pFVar17);
  if (iVar11 != 0x10) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("sizeof(T) == TypeDefHandle->GetSize()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                        ,0x5e3,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (0 < (pFVar15->VarData).ArrayNum) {
    pFVar16 = FNiagaraTypeRegistry::Get();
    pFVar17 = FNiagaraTypeRegistry::GetRegisteredType(pFVar16,(int)pFVar15->_padding_);
    iVar11 = (pFVar15->VarData).ArrayNum;
    iVar12 = FNiagaraTypeDefinition::GetSize(pFVar17);
    if (iVar11 == iVar12) goto LAB_1492f7b66;
  }
  bVar10 = ::FDebug::CheckVerifyFailedImpl2
                     ("IsDataAllocated()",
                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                      ,0x5e4,L"");
  if (bVar10) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
LAB_1492f7b66:
  pFVar16 = FNiagaraTypeRegistry::Get();
  pFVar17 = FNiagaraTypeRegistry::GetRegisteredType(pFVar16,(int)pFVar15->_padding_);
  iVar11 = FNiagaraTypeDefinition::GetSize(pFVar17);
  memcpy(&local_318,(pFVar15->VarData).AllocatorInstance.Data,(longlong)iVar11);
  NiagaraLightRendererPropertiesPrivate::GDefaultColor.field0_0x0 =
       (FLinearColor_u_0)(FLinearColor_u_0)local_318._s_0;
  if (local_2d8.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2d8.VarData.AllocatorInstance.Data);
  }
  pFVar15 = FNiagaraConstants::GetAttributeWithDefaultValue
                      (&local_2b8,(FNiagaraVariableBase *)&INiagaraModule::Particles_LightRadius);
  NiagaraLightRendererPropertiesPrivate::GDefaultRadius = FNiagaraVariable::GetValue<float>(pFVar15)
  ;
  if (local_2b8.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_2b8.VarData.AllocatorInstance.Data);
  }
  pFVar15 = FNiagaraConstants::GetAttributeWithDefaultValue
                      (&local_298,
                       (FNiagaraVariableBase *)&INiagaraModule::Particles_LightVolumetricScattering)
  ;
  NiagaraLightRendererPropertiesPrivate::GDefaultVolumetricScattering =
       FNiagaraVariable::GetValue<float>(pFVar15);
  if (local_298.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.VarData.AllocatorInstance.Data);
  }
  iVar11 = LightRendererPropertiesToDeferredInit.ArrayNum;
  uVar20 = (ulonglong)LightRendererPropertiesToDeferredInit.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)
           (LightRendererPropertiesToDeferredInit.AllocatorInstance.Data + uVar20 * 8);
  this.Data = LightRendererPropertiesToDeferredInit.AllocatorInstance.Data;
  do {
    if ((int)uVar20 != iVar11) {
      `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraLightRendererProperties,FWeakObjectPtr>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)this.Data == pFVar1) {
      return;
    }
    pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
    if (pUVar18 != (UObject *)0x0) {
      pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      if (*(longlong *)&pUVar18[7].field_0x8 != 0) {
        pFVar16 = FNiagaraTypeRegistry::Get();
        pFVar17 = FNiagaraTypeRegistry::GetRegisteredType(pFVar16,*(int *)&pUVar18[7].field_0x4);
        if ((pFVar17->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) goto LAB_1492f7e3c;
      }
      pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                          (&local_158,(FNiagaraVariableBase *)&INiagaraModule::Particles_Position);
      FVar7.Value = (pFVar14->RootName).ComparisonIndex.Value;
      uVar6 = (pFVar14->RootName).Number;
      FVar3 = (pFVar14->ParamMapVariable).Name;
      uVar4 = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
      uVar5 = *(undefined8 *)&(pFVar14->DataSetName).Number;
      pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      *(uint *)&pUVar18[6].field_0x1c = FVar7.Value;
      *(uint *)&pUVar18[6].field_0x20 = uVar6;
      *(FName *)&pUVar18[6].field_0x24 = FVar3;
      *(undefined8 *)&pUVar18[7].field_0x4 = uVar4;
      *(undefined8 *)&pUVar18[7].field_0xc = uVar5;
      pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                          (&local_138,(FNiagaraVariableBase *)&INiagaraModule::Particles_Color);
      FVar7.Value = (pFVar14->RootName).ComparisonIndex.Value;
      uVar6 = (pFVar14->RootName).Number;
      FVar9.Value = (pFVar14->ParamMapVariable).Name.ComparisonIndex.Value;
      uVar8 = (pFVar14->ParamMapVariable).Name.Number;
      uVar4 = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
      uVar5 = *(undefined8 *)&(pFVar14->DataSetName).Number;
      pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      *(uint *)&pUVar18[7].field_0x14 = FVar7.Value;
      *(uint *)&pUVar18[7].field_0x18 = uVar6;
      *(uint *)&pUVar18[7].field_0x1c = FVar9.Value;
      *(uint *)&pUVar18[7].field_0x20 = uVar8;
      *(undefined8 *)&pUVar18[7].field_0x24 = uVar4;
      *(undefined8 *)&pUVar18[8].field_0x4 = uVar5;
      pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                          (&local_118,(FNiagaraVariableBase *)&INiagaraModule::Particles_LightRadius
                          );
      FVar7.Value = (pFVar14->RootName).ComparisonIndex.Value;
      uVar6 = (pFVar14->RootName).Number;
      FVar9.Value = (pFVar14->ParamMapVariable).Name.ComparisonIndex.Value;
      uVar8 = (pFVar14->ParamMapVariable).Name.Number;
      uVar4 = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
      uVar5 = *(undefined8 *)&(pFVar14->DataSetName).Number;
      pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      *(uint *)&pUVar18[8].field_0xc = FVar7.Value;
      *(uint *)&pUVar18[8].field_0x10 = uVar6;
      *(uint *)&pUVar18[8].field_0x14 = FVar9.Value;
      *(uint *)&pUVar18[8].field_0x18 = uVar8;
      *(undefined8 *)&pUVar18[8].field_0x1c = uVar4;
      *(undefined8 *)&pUVar18[8].field_0x24 = uVar5;
      pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                          (&local_f8,
                           (FNiagaraVariableBase *)&INiagaraModule::Particles_LightExponent);
      FVar3 = pFVar14->RootName;
      FVar7.Value = (pFVar14->ParamMapVariable).Name.ComparisonIndex.Value;
      uVar6 = (pFVar14->ParamMapVariable).Name.Number;
      uVar4 = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
      uVar5 = *(undefined8 *)&(pFVar14->DataSetName).Number;
      pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      *(FName *)&pUVar18[5].field_0x24 = FVar3;
      *(uint *)&pUVar18[6].field_0x4 = FVar7.Value;
      *(uint *)&pUVar18[6].field_0x8 = uVar6;
      *(undefined8 *)&pUVar18[6].field_0xc = uVar4;
      *(undefined8 *)&pUVar18[6].field_0x14 = uVar5;
      pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                          (&local_d8,(FNiagaraVariableBase *)&INiagaraModule::Particles_LightEnabled
                          );
      FVar7.Value = (pFVar14->RootName).ComparisonIndex.Value;
      uVar6 = (pFVar14->RootName).Number;
      FVar9.Value = (pFVar14->ParamMapVariable).Name.ComparisonIndex.Value;
      uVar8 = (pFVar14->ParamMapVariable).Name.Number;
      uVar4 = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
      uVar5 = *(undefined8 *)&(pFVar14->DataSetName).Number;
      pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      *(uint *)&pUVar18[5].field_0x4 = FVar7.Value;
      *(uint *)&pUVar18[5].field_0x8 = uVar6;
      *(uint *)&pUVar18[5].field_0xc = FVar9.Value;
      *(uint *)&pUVar18[5].field_0x10 = uVar8;
      *(undefined8 *)&pUVar18[5].field_0x14 = uVar4;
      *(undefined8 *)&pUVar18[5].field_0x1c = uVar5;
      pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                          (&local_b8,
                           (FNiagaraVariableBase *)
                           &INiagaraModule::Particles_LightVolumetricScattering);
      FVar7.Value = (pFVar14->RootName).ComparisonIndex.Value;
      uVar6 = (pFVar14->RootName).Number;
      FVar9.Value = (pFVar14->ParamMapVariable).Name.ComparisonIndex.Value;
      uVar8 = (pFVar14->ParamMapVariable).Name.Number;
      uVar4 = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
      uVar5 = *(undefined8 *)&(pFVar14->DataSetName).Number;
      pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      *(uint *)&pUVar18[9].field_0x4 = FVar7.Value;
      *(uint *)&pUVar18[9].field_0x8 = uVar6;
      *(uint *)&pUVar18[9].field_0xc = FVar9.Value;
      *(uint *)&pUVar18[9].field_0x10 = uVar8;
      *(undefined8 *)&pUVar18[9].field_0x14 = uVar4;
      *(undefined8 *)&pUVar18[9].field_0x1c = uVar5;
      pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                          (&local_98,
                           (FNiagaraVariableBase *)&INiagaraModule::Particles_VisibilityTag);
      FVar3 = pFVar14->RootName;
      FVar7.Value = (pFVar14->ParamMapVariable).Name.ComparisonIndex.Value;
      uVar6 = (pFVar14->ParamMapVariable).Name.Number;
      uVar4 = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
      uVar5 = *(undefined8 *)&(pFVar14->DataSetName).Number;
      pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      *(FName *)&pUVar18[9].field_0x24 = FVar3;
      *(uint *)&pUVar18[10].field_0x4 = FVar7.Value;
      *(uint *)&pUVar18[10].field_0x8 = uVar6;
      *(undefined8 *)&pUVar18[10].field_0xc = uVar4;
      *(undefined8 *)&pUVar18[10].field_0x14 = uVar5;
      pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                          (&local_78,
                           (FNiagaraVariableBase *)&INiagaraModule::Particles_LightSpecularScale);
      FVar7.Value = (pFVar14->RootName).ComparisonIndex.Value;
      uVar6 = (pFVar14->RootName).Number;
      FVar3 = (pFVar14->ParamMapVariable).Name;
      uVar4 = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
      uVar5 = *(undefined8 *)&(pFVar14->DataSetName).Number;
      pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      *(uint *)&pUVar18[10].field_0x1c = FVar7.Value;
      *(uint *)&pUVar18[10].field_0x20 = uVar6;
      *(FName *)&pUVar18[10].field_0x24 = FVar3;
      *(undefined8 *)&pUVar18[0xb].field_0x4 = uVar4;
      *(undefined8 *)&pUVar18[0xb].field_0xc = uVar5;
      pFVar14 = FNiagaraConstants::GetAttributeDefaultBinding
                          (local_58,(FNiagaraVariableBase *)
                                    &INiagaraModule::Particles_LightDiffuseScale);
      FVar7.Value = (pFVar14->RootName).ComparisonIndex.Value;
      uVar6 = (pFVar14->RootName).Number;
      FVar9.Value = (pFVar14->ParamMapVariable).Name.ComparisonIndex.Value;
      uVar8 = (pFVar14->ParamMapVariable).Name.Number;
      uVar4 = *(undefined8 *)&(pFVar14->ParamMapVariable).TypeDefHandle;
      uVar5 = *(undefined8 *)&(pFVar14->DataSetName).Number;
      pUVar18 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      *(uint *)&pUVar18[0xb].field_0x14 = FVar7.Value;
      *(uint *)&pUVar18[0xb].field_0x18 = uVar6;
      *(uint *)&pUVar18[0xb].field_0x1c = FVar9.Value;
      *(uint *)&pUVar18[0xb].field_0x20 = uVar8;
      *(undefined8 *)&pUVar18[0xb].field_0x24 = uVar4;
      *(undefined8 *)&pUVar18[0xc].field_0x4 = uVar5;
    }
LAB_1492f7e3c:
    uVar20 = (ulonglong)(uint)LightRendererPropertiesToDeferredInit.ArrayNum;
    this.Data = this.Data + 8;
  } while( true );
}

// IsSimTargetSupported @ 1492f8b10

bool __thiscall
UNiagaraLightRendererProperties::IsSimTargetSupported
          (UNiagaraLightRendererProperties *this,ENiagaraSimTarget param_1)

{
  return param_1 == CPUSim;
}

// PopulateRequiredBindings @ 1492fa580

bool __thiscall
UNiagaraLightRendererProperties::PopulateRequiredBindings
          (UNiagaraLightRendererProperties *this,FNiagaraParameterStore *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined8 local_48;
  undefined4 local_40;
  void *local_38;
  undefined8 local_30;
  
  bVar4 = UNiagaraRendererProperties::PopulateRequiredBindings
                    ((UNiagaraRendererProperties *)this,param_1);
  plVar5 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar5 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<FNiagaraVariableAttributeBinding_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar5 == plVar1) break;
    lVar3 = *plVar5;
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x1d) & 3) == 1)) {
      local_40 = *(undefined4 *)(lVar3 + 0x10);
      local_48 = *(undefined8 *)(lVar3 + 8);
      local_38 = (void *)0x0;
      local_30 = 0;
      (**(code **)(param_1->_padding_ + 0x10))(param_1,&local_48,0,1,0);
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      bVar4 = true;
    }
    plVar5 = plVar5 + 1;
  }
  return bVar4;
}

// PostInitProperties @ 1492fa8d0

void __thiscall
UNiagaraLightRendererProperties::PostInitProperties(UNiagaraLightRendererProperties *this)

{
  code *pcVar1;
  FName FVar2;
  undefined8 uVar3;
  bool bVar4;
  FModuleManager *this_00;
  FName *pFVar5;
  FNiagaraTypeRegistry *this_01;
  FNiagaraTypeDefinition *pFVar6;
  FNiagaraVariableAttributeBinding *pFVar7;
  longlong lVar8;
  UNiagaraLightRendererProperties *local_res8;
  FName local_res10;
  FWeakObjectPtr local_138;
  FNiagaraVariableAttributeBinding local_130;
  FNiagaraVariableAttributeBinding local_110;
  FNiagaraVariableAttributeBinding local_f0;
  FNiagaraVariableAttributeBinding local_d0;
  FNiagaraVariableAttributeBinding local_b0;
  FNiagaraVariableAttributeBinding local_90;
  FNiagaraVariableAttributeBinding local_70;
  FNiagaraVariableAttributeBinding local_50;
  FNiagaraVariableAttributeBinding local_30;
  
  UNiagaraRendererProperties::PostInitProperties((UNiagaraRendererProperties *)this);
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = FModuleManager::Get();
    pFVar5 = ::FName::FName(&local_res10,"Niagara");
    bVar4 = FModuleManager::IsModuleLoaded(this_00,*pFVar5);
    if (!bVar4) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_138.ObjectIndex = 0;
      local_138.ObjectSerialNumber = 0;
      local_res8 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_138,(FObjectPtr)&local_res8);
      if (((LightRendererPropertiesToDeferredInit.AllocatorInstance.Data <= &local_138) &&
          (&local_138 <
           (FWeakObjectPtr *)
           (LightRendererPropertiesToDeferredInit.AllocatorInstance.Data +
           (longlong)LightRendererPropertiesToDeferredInit.ArrayMax * 8))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (LightRendererPropertiesToDeferredInit.ArrayNum ==
          LightRendererPropertiesToDeferredInit.ArrayMax) {
        LightRendererPropertiesToDeferredInit.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&LightRendererPropertiesToDeferredInit.AllocatorInstance,
                        &LightRendererPropertiesToDeferredInit.ArrayMax);
      }
      lVar8 = (longlong)LightRendererPropertiesToDeferredInit.ArrayNum;
      LightRendererPropertiesToDeferredInit.ArrayNum =
           LightRendererPropertiesToDeferredInit.ArrayNum + 1;
      *(FWeakObjectPtr *)(LightRendererPropertiesToDeferredInit.AllocatorInstance.Data + lVar8 * 8)
           = local_138;
      return;
    }
    if ((this->PositionBinding).DataSetName != (FName)0x0) {
      this_01 = FNiagaraTypeRegistry::Get();
      pFVar6 = FNiagaraTypeRegistry::GetRegisteredType
                         (this_01,(this->PositionBinding).ParamMapVariable.TypeDefHandle.
                                  RegisteredTypeIndex);
      if ((pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
        return;
      }
    }
    pFVar7 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_130,(FNiagaraVariableBase *)&INiagaraModule::Particles_Position);
    FVar2 = (pFVar7->ParamMapVariable).Name;
    (this->PositionBinding).RootName = pFVar7->RootName;
    (this->PositionBinding).ParamMapVariable.Name = FVar2;
    uVar3 = *(undefined8 *)&(pFVar7->DataSetName).Number;
    *(undefined8 *)&(this->PositionBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar7->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->PositionBinding).DataSetName.Number = uVar3;
    pFVar7 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_110,(FNiagaraVariableBase *)&INiagaraModule::Particles_Color);
    FVar2 = (pFVar7->ParamMapVariable).Name;
    (this->ColorBinding).RootName = pFVar7->RootName;
    (this->ColorBinding).ParamMapVariable.Name = FVar2;
    uVar3 = *(undefined8 *)&(pFVar7->DataSetName).Number;
    *(undefined8 *)&(this->ColorBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar7->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->ColorBinding).DataSetName.Number = uVar3;
    pFVar7 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_f0,(FNiagaraVariableBase *)&INiagaraModule::Particles_LightRadius);
    FVar2 = (pFVar7->ParamMapVariable).Name;
    (this->RadiusBinding).RootName = pFVar7->RootName;
    (this->RadiusBinding).ParamMapVariable.Name = FVar2;
    uVar3 = *(undefined8 *)&(pFVar7->DataSetName).Number;
    *(undefined8 *)&(this->RadiusBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar7->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->RadiusBinding).DataSetName.Number = uVar3;
    pFVar7 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_d0,(FNiagaraVariableBase *)&INiagaraModule::Particles_LightExponent);
    FVar2 = (pFVar7->ParamMapVariable).Name;
    (this->LightExponentBinding).RootName = pFVar7->RootName;
    (this->LightExponentBinding).ParamMapVariable.Name = FVar2;
    uVar3 = *(undefined8 *)&(pFVar7->DataSetName).Number;
    *(undefined8 *)&(this->LightExponentBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar7->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->LightExponentBinding).DataSetName.Number = uVar3;
    pFVar7 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_b0,(FNiagaraVariableBase *)&INiagaraModule::Particles_LightEnabled);
    FVar2 = (pFVar7->ParamMapVariable).Name;
    (this->LightRenderingEnabledBinding).RootName = pFVar7->RootName;
    (this->LightRenderingEnabledBinding).ParamMapVariable.Name = FVar2;
    uVar3 = *(undefined8 *)&(pFVar7->DataSetName).Number;
    *(undefined8 *)&(this->LightRenderingEnabledBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar7->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->LightRenderingEnabledBinding).DataSetName.Number = uVar3;
    pFVar7 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_90,
                        (FNiagaraVariableBase *)&INiagaraModule::Particles_LightVolumetricScattering
                       );
    FVar2 = (pFVar7->ParamMapVariable).Name;
    (this->VolumetricScatteringBinding).RootName = pFVar7->RootName;
    (this->VolumetricScatteringBinding).ParamMapVariable.Name = FVar2;
    uVar3 = *(undefined8 *)&(pFVar7->DataSetName).Number;
    *(undefined8 *)&(this->VolumetricScatteringBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar7->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->VolumetricScatteringBinding).DataSetName.Number = uVar3;
    pFVar7 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_70,(FNiagaraVariableBase *)&INiagaraModule::Particles_VisibilityTag);
    FVar2 = (pFVar7->ParamMapVariable).Name;
    (this->RendererVisibilityTagBinding).RootName = pFVar7->RootName;
    (this->RendererVisibilityTagBinding).ParamMapVariable.Name = FVar2;
    uVar3 = *(undefined8 *)&(pFVar7->DataSetName).Number;
    *(undefined8 *)&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar7->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->RendererVisibilityTagBinding).DataSetName.Number = uVar3;
    pFVar7 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_50,
                        (FNiagaraVariableBase *)&INiagaraModule::Particles_LightSpecularScale);
    FVar2 = (pFVar7->ParamMapVariable).Name;
    (this->SpecularScaleBinding).RootName = pFVar7->RootName;
    (this->SpecularScaleBinding).ParamMapVariable.Name = FVar2;
    uVar3 = *(undefined8 *)&(pFVar7->DataSetName).Number;
    *(undefined8 *)&(this->SpecularScaleBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar7->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->SpecularScaleBinding).DataSetName.Number = uVar3;
    pFVar7 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_30,
                        (FNiagaraVariableBase *)&INiagaraModule::Particles_LightDiffuseScale);
    FVar2 = (pFVar7->ParamMapVariable).Name;
    (this->DiffuseScaleBinding).RootName = pFVar7->RootName;
    (this->DiffuseScaleBinding).ParamMapVariable.Name = FVar2;
    uVar3 = *(undefined8 *)&(pFVar7->DataSetName).Number;
    *(undefined8 *)&(this->DiffuseScaleBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar7->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->DiffuseScaleBinding).DataSetName.Number = uVar3;
  }
  return;
}

// PostLoad @ 1492faf30

void __thiscall UNiagaraLightRendererProperties::PostLoad(UNiagaraLightRendererProperties *this)

{
  UNiagaraRendererProperties::PostLoad((UNiagaraRendererProperties *)this);
                    /* WARNING: Could not recover jumptable at 0x0001492faf4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x350))(this,0);
  return;
}

// StaticRegisterNativesUNiagaraLightRendererProperties @ 149309e00

void __cdecl
UNiagaraLightRendererProperties::StaticRegisterNativesUNiagaraLightRendererProperties(void)

{
  return;
}

// UpdateSourceModeDerivates @ 14930dd00

void __thiscall
UNiagaraLightRendererProperties::UpdateSourceModeDerivates
          (UNiagaraLightRendererProperties *this,ENiagaraRendererSourceDataMode param_1,bool param_2
          )

{
  undefined8 *puVar1;
  int iVar2;
  UClass *pUVar3;
  undefined8 *puVar4;
  undefined1 auStackX_20 [8];
  FVersionedNiagaraEmitterBase FStack_38;
  
  pUVar3 = Z_Construct_UClass_UNiagaraEmitterBase_NoRegister();
  FStack_38.Emitter =
       (UNiagaraEmitterBase *)UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar3);
  if (FStack_38.Emitter != (UNiagaraEmitterBase *)0x0) {
    FStack_38.Version._0_8_ = this->_padding_;
    FStack_38.Version._8_8_ = this->_padding_;
    puVar4 = (undefined8 *)this->_padding_;
    iVar2 = (int)this->_padding_;
    puVar1 = puVar4 + iVar2;
    while( true ) {
      if ((int)this->_padding_ != iVar2) {
        `TCheckedPointerIterator<FNiagaraVariableAttributeBinding_const_*,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(auStackX_20);
      }
      if (puVar4 == puVar1) break;
      FNiagaraVariableAttributeBinding::CacheValues
                ((FNiagaraVariableAttributeBinding *)*puVar4,&FStack_38,param_1);
      puVar4 = puVar4 + 1;
    }
    FNiagaraVariableAttributeBinding::CacheValues
              ((FNiagaraVariableAttributeBinding *)&this->_padding_,&FStack_38,param_1);
  }
  return;
}

