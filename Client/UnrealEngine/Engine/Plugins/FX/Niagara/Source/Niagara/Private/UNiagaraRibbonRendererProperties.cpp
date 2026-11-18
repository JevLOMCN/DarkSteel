// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 26

// StaticClass @ 149379670

UClass * __cdecl UNiagaraRibbonRendererProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraRibbonRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraRibbonRendererProperties,0x520,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraRibbonRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraRibbonRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties.InnerSingleton;
}

// UNiagaraRibbonRendererProperties @ 149387be0

UNiagaraRibbonRendererProperties * __thiscall
UNiagaraRibbonRendererProperties::UNiagaraRibbonRendererProperties
          (UNiagaraRibbonRendererProperties *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  UNiagaraRendererProperties::UNiagaraRendererProperties((UNiagaraRendererProperties *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UNiagaraRibbonRendererProperties__6B_;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->MaterialUserParamBinding);
  (this->UV0Settings).bEnablePerParticleUOverride = '\0';
  (this->UV0Settings).bEnablePerParticleVRangeOverride = '\0';
  (this->UV1Settings).bEnablePerParticleUOverride = '\0';
  (this->UV1Settings).bEnablePerParticleVRangeOverride = '\0';
  this->bCastShadows = '\x01';
  (this->UV0Settings).Scale.field0_0x0._s_0.X = 1.0;
  (this->UV0Settings).Scale.field0_0x0._s_0.Y = 1.0;
  (this->UV1Settings).Scale.field0_0x0._s_0.X = 1.0;
  (this->UV1Settings).Scale.field0_0x0._s_0.Y = 1.0;
  (this->UV0Settings).DistributionMode = ScaledUsingRibbonSegmentLength;
  (this->UV0Settings).LeadingEdgeMode = Locked;
  (this->UV0Settings).TrailingEdgeMode = Locked;
  (this->UV0Settings).TilingLength = 100.0;
  (this->UV0Settings).Offset.field0_0x0._s_0.X = 0.0;
  (this->UV0Settings).Offset.field0_0x0._s_0.Y = 0.0;
  (this->UV1Settings).DistributionMode = ScaledUsingRibbonSegmentLength;
  (this->UV1Settings).LeadingEdgeMode = Locked;
  (this->UV1Settings).TrailingEdgeMode = Locked;
  (this->UV1Settings).TilingLength = 100.0;
  (this->UV1Settings).Offset.field0_0x0._s_0.X = 0.0;
  (this->UV1Settings).Offset.field0_0x0._s_0.Y = 0.0;
  this->FacingMode = Screen;
  (this->CustomVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomVertices).ArrayNum = 0;
  (this->CustomVertices).ArrayMax = 0;
  (this->PositionBinding).RootName.ComparisonIndex = 0;
  (this->PositionBinding).RootName.Number = 0;
  (this->PositionBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PositionBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PositionBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
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
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->ColorBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->ColorBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->ColorBinding).bBindingExistsOnSource = '\0';
  (this->ColorBinding).bIsCachedParticleValue = '\x01';
  (this->ColorBinding).DataSetName.ComparisonIndex = 0;
  (this->ColorBinding).DataSetName.Number = 0;
  (this->ColorBinding).BindingSourceMode.Value = '\0';
  (this->VelocityBinding).RootName.ComparisonIndex = 0;
  (this->VelocityBinding).RootName.Number = 0;
  (this->VelocityBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->VelocityBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->VelocityBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->VelocityBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->VelocityBinding).bBindingExistsOnSource = '\0';
  (this->VelocityBinding).bIsCachedParticleValue = '\x01';
  (this->VelocityBinding).DataSetName.ComparisonIndex = 0;
  (this->VelocityBinding).DataSetName.Number = 0;
  (this->VelocityBinding).BindingSourceMode.Value = '\0';
  (this->NormalizedAgeBinding).RootName.ComparisonIndex = 0;
  (this->NormalizedAgeBinding).RootName.Number = 0;
  (this->NormalizedAgeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->NormalizedAgeBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->NormalizedAgeBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->NormalizedAgeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->NormalizedAgeBinding).bBindingExistsOnSource = '\0';
  (this->NormalizedAgeBinding).bIsCachedParticleValue = '\x01';
  (this->NormalizedAgeBinding).DataSetName.ComparisonIndex = 0;
  (this->NormalizedAgeBinding).DataSetName.Number = 0;
  (this->NormalizedAgeBinding).BindingSourceMode.Value = '\0';
  (this->RibbonTwistBinding).RootName.ComparisonIndex = 0;
  (this->RibbonTwistBinding).RootName.Number = 0;
  (this->RibbonTwistBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RibbonTwistBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RibbonTwistBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RibbonTwistBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->RibbonTwistBinding).bBindingExistsOnSource = '\0';
  (this->RibbonTwistBinding).bIsCachedParticleValue = '\x01';
  (this->RibbonTwistBinding).DataSetName.ComparisonIndex = 0;
  (this->RibbonTwistBinding).DataSetName.Number = 0;
  (this->RibbonTwistBinding).BindingSourceMode.Value = '\0';
  (this->RibbonWidthBinding).RootName.ComparisonIndex = 0;
  (this->RibbonWidthBinding).RootName.Number = 0;
  (this->RibbonWidthBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RibbonWidthBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RibbonWidthBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RibbonWidthBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->RibbonWidthBinding).bBindingExistsOnSource = '\0';
  (this->RibbonWidthBinding).bIsCachedParticleValue = '\x01';
  (this->RibbonWidthBinding).DataSetName.ComparisonIndex = 0;
  (this->RibbonWidthBinding).DataSetName.Number = 0;
  (this->RibbonWidthBinding).BindingSourceMode.Value = '\0';
  (this->RibbonFacingBinding).RootName.ComparisonIndex = 0;
  (this->RibbonFacingBinding).RootName.Number = 0;
  (this->RibbonFacingBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RibbonFacingBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RibbonFacingBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RibbonFacingBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->RibbonFacingBinding).bBindingExistsOnSource = '\0';
  (this->RibbonFacingBinding).bIsCachedParticleValue = '\x01';
  (this->RibbonFacingBinding).DataSetName.ComparisonIndex = 0;
  (this->RibbonFacingBinding).DataSetName.Number = 0;
  (this->RibbonFacingBinding).BindingSourceMode.Value = '\0';
  (this->RibbonIdBinding).RootName.ComparisonIndex = 0;
  (this->RibbonIdBinding).RootName.Number = 0;
  (this->RibbonIdBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RibbonIdBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RibbonIdBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RibbonIdBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->RibbonIdBinding).bBindingExistsOnSource = '\0';
  (this->RibbonIdBinding).bIsCachedParticleValue = '\x01';
  (this->RibbonIdBinding).DataSetName.ComparisonIndex = 0;
  (this->RibbonIdBinding).DataSetName.Number = 0;
  (this->RibbonIdBinding).BindingSourceMode.Value = '\0';
  (this->RibbonLinkOrderBinding).RootName.ComparisonIndex = 0;
  (this->RibbonLinkOrderBinding).RootName.Number = 0;
  (this->RibbonLinkOrderBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RibbonLinkOrderBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RibbonLinkOrderBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RibbonLinkOrderBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->RibbonLinkOrderBinding).bBindingExistsOnSource = '\0';
  (this->RibbonLinkOrderBinding).bIsCachedParticleValue = '\x01';
  (this->RibbonLinkOrderBinding).DataSetName.ComparisonIndex = 0;
  (this->RibbonLinkOrderBinding).DataSetName.Number = 0;
  (this->RibbonLinkOrderBinding).BindingSourceMode.Value = '\0';
  (this->MaterialRandomBinding).RootName.ComparisonIndex = 0;
  (this->MaterialRandomBinding).RootName.Number = 0;
  (this->MaterialRandomBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->MaterialRandomBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->MaterialRandomBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->MaterialRandomBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->MaterialRandomBinding).bBindingExistsOnSource = '\0';
  (this->MaterialRandomBinding).bIsCachedParticleValue = '\x01';
  (this->MaterialRandomBinding).DataSetName.ComparisonIndex = 0;
  (this->MaterialRandomBinding).DataSetName.Number = 0;
  (this->MaterialRandomBinding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterialBinding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterialBinding).RootName.Number = 0;
  (this->DynamicMaterialBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterialBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DynamicMaterialBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterialBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->DynamicMaterialBinding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterialBinding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterialBinding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterialBinding).DataSetName.Number = 0;
  (this->DynamicMaterialBinding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterial1Binding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterial1Binding).RootName.Number = 0;
  (this->DynamicMaterial1Binding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterial1Binding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DynamicMaterial1Binding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterial1Binding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->DynamicMaterial1Binding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterial1Binding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterial1Binding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterial1Binding).DataSetName.Number = 0;
  (this->DynamicMaterial1Binding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterial2Binding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterial2Binding).RootName.Number = 0;
  (this->DynamicMaterial2Binding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterial2Binding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DynamicMaterial2Binding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterial2Binding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->DynamicMaterial2Binding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterial2Binding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterial2Binding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterial2Binding).DataSetName.Number = 0;
  (this->DynamicMaterial2Binding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterial3Binding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterial3Binding).RootName.Number = 0;
  (this->DynamicMaterial3Binding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterial3Binding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DynamicMaterial3Binding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterial3Binding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->DynamicMaterial3Binding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterial3Binding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterial3Binding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterial3Binding).DataSetName.Number = 0;
  (this->DynamicMaterial3Binding).BindingSourceMode.Value = '\0';
  (this->RibbonUVDistance).RootName.ComparisonIndex = 0;
  (this->RibbonUVDistance).RootName.Number = 0;
  (this->RibbonUVDistance).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RibbonUVDistance).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RibbonUVDistance).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RibbonUVDistance).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->RibbonUVDistance).bBindingExistsOnSource = '\0';
  (this->RibbonUVDistance).bIsCachedParticleValue = '\x01';
  (this->RibbonUVDistance).DataSetName.ComparisonIndex = 0;
  (this->RibbonUVDistance).DataSetName.Number = 0;
  (this->RibbonUVDistance).BindingSourceMode.Value = '\0';
  (this->U0OverrideBinding).RootName.ComparisonIndex = 0;
  (this->U0OverrideBinding).RootName.Number = 0;
  (this->U0OverrideBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->U0OverrideBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->U0OverrideBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->U0OverrideBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->U0OverrideBinding).bBindingExistsOnSource = '\0';
  (this->U0OverrideBinding).bIsCachedParticleValue = '\x01';
  (this->U0OverrideBinding).DataSetName.ComparisonIndex = 0;
  (this->U0OverrideBinding).DataSetName.Number = 0;
  (this->U0OverrideBinding).BindingSourceMode.Value = '\0';
  (this->V0RangeOverrideBinding).RootName.ComparisonIndex = 0;
  (this->V0RangeOverrideBinding).RootName.Number = 0;
  (this->V0RangeOverrideBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->V0RangeOverrideBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->V0RangeOverrideBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->V0RangeOverrideBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->V0RangeOverrideBinding).bBindingExistsOnSource = '\0';
  (this->V0RangeOverrideBinding).bIsCachedParticleValue = '\x01';
  (this->V0RangeOverrideBinding).DataSetName.ComparisonIndex = 0;
  (this->V0RangeOverrideBinding).DataSetName.Number = 0;
  (this->V0RangeOverrideBinding).BindingSourceMode.Value = '\0';
  (this->U1OverrideBinding).RootName.ComparisonIndex = 0;
  (this->U1OverrideBinding).RootName.Number = 0;
  (this->U1OverrideBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->U1OverrideBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->U1OverrideBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->U1OverrideBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->U1OverrideBinding).bBindingExistsOnSource = '\0';
  (this->U1OverrideBinding).bIsCachedParticleValue = '\x01';
  (this->U1OverrideBinding).DataSetName.ComparisonIndex = 0;
  (this->U1OverrideBinding).DataSetName.Number = 0;
  (this->U1OverrideBinding).BindingSourceMode.Value = '\0';
  (this->V1RangeOverrideBinding).RootName.ComparisonIndex = 0;
  (this->V1RangeOverrideBinding).RootName.Number = 0;
  (this->V1RangeOverrideBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->V1RangeOverrideBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->V1RangeOverrideBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->V1RangeOverrideBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->V1RangeOverrideBinding).bBindingExistsOnSource = '\0';
  (this->V1RangeOverrideBinding).bIsCachedParticleValue = '\x01';
  (this->V1RangeOverrideBinding).DataSetName.ComparisonIndex = 0;
  (this->V1RangeOverrideBinding).DataSetName.Number = 0;
  (this->V1RangeOverrideBinding).BindingSourceMode.Value = '\0';
  (this->MaterialParameters).AttributeBindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialParameters).AttributeBindings.ArrayNum = 0;
  (this->MaterialParameters).AttributeBindings.ArrayMax = 0;
  (this->MaterialParameters).ScalarParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialParameters).ScalarParameters.ArrayNum = 0;
  (this->MaterialParameters).ScalarParameters.ArrayMax = 0;
  (this->MaterialParameters).VectorParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialParameters).VectorParameters.ArrayNum = 0;
  (this->MaterialParameters).VectorParameters.ArrayMax = 0;
  (this->MaterialParameters).TextureParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialParameters).TextureParameters.ArrayNum = 0;
  (this->MaterialParameters).TextureParameters.ArrayMax = 0;
  (this->MaterialParameters).StaticBoolParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialParameters).StaticBoolParameters.ArrayNum = 0;
  (this->MaterialParameters).StaticBoolParameters.ArrayMax = 0;
  (this->PrevPositionBinding).RootName.ComparisonIndex = 0;
  (this->PrevPositionBinding).RootName.Number = 0;
  (this->PrevPositionBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevPositionBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PrevPositionBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevPositionBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PrevPositionBinding).bBindingExistsOnSource = '\0';
  (this->PrevPositionBinding).bIsCachedParticleValue = '\x01';
  (this->PrevPositionBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevPositionBinding).DataSetName.Number = 0;
  (this->PrevPositionBinding).BindingSourceMode.Value = '\0';
  (this->PrevRibbonWidthBinding).RootName.ComparisonIndex = 0;
  (this->PrevRibbonWidthBinding).RootName.Number = 0;
  (this->PrevRibbonWidthBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevRibbonWidthBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PrevRibbonWidthBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevRibbonWidthBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PrevRibbonWidthBinding).bBindingExistsOnSource = '\0';
  (this->PrevRibbonWidthBinding).bIsCachedParticleValue = '\x01';
  (this->PrevRibbonWidthBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevRibbonWidthBinding).DataSetName.Number = 0;
  (this->PrevRibbonWidthBinding).BindingSourceMode.Value = '\0';
  (this->PrevRibbonFacingBinding).RootName.ComparisonIndex = 0;
  (this->PrevRibbonFacingBinding).RootName.Number = 0;
  (this->PrevRibbonFacingBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevRibbonFacingBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PrevRibbonFacingBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevRibbonFacingBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PrevRibbonFacingBinding).bBindingExistsOnSource = '\0';
  (this->PrevRibbonFacingBinding).bIsCachedParticleValue = '\x01';
  (this->PrevRibbonFacingBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevRibbonFacingBinding).DataSetName.Number = 0;
  (this->PrevRibbonFacingBinding).BindingSourceMode.Value = '\0';
  (this->PrevRibbonTwistBinding).RootName.ComparisonIndex = 0;
  (this->PrevRibbonTwistBinding).RootName.Number = 0;
  (this->PrevRibbonTwistBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevRibbonTwistBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PrevRibbonTwistBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevRibbonTwistBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PrevRibbonTwistBinding).bBindingExistsOnSource = '\0';
  (this->PrevRibbonTwistBinding).bIsCachedParticleValue = '\x01';
  (this->PrevRibbonTwistBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevRibbonTwistBinding).DataSetName.Number = 0;
  (this->PrevRibbonTwistBinding).BindingSourceMode.Value = '\0';
  this->MaterialParamValidMask = 0;
  *(undefined1 *)&this->RibbonFullIDDataSetAccessor = 0;
  this->bGpuRibbonLinkIsFloat = false;
  (this->RendererLayout).VFVariables_GT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererLayout).VFVariables_GT.ArrayNum = 0;
  (this->RendererLayout).VFVariables_GT.ArrayMax = 0;
  (this->RendererLayout).VFVariables_RT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererLayout).VFVariables_RT.ArrayNum = 0;
  (this->RendererLayout).VFVariables_RT.ArrayMax = 0;
  (this->RendererLayout).TotalFloatComponents_GT = 0;
  (this->RendererLayout).TotalHalfComponents_GT = 0;
  (this->RendererLayout).TotalFloatComponents_RT = 0;
  (this->RendererLayout).TotalHalfComponents_RT = 0;
  *(undefined1 *)&this->RibbonLinkOrderFloatAccessor = 1;
  *(undefined8 *)&(this->RibbonLinkOrderFloatAccessor).field_0x4 = 0xffffffffffffffff;
  *(undefined1 *)&this->PositionDataSetAccessor = 1;
  *(undefined4 *)&(this->PositionDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->NormalizedAgeAccessor = 1;
  *(undefined4 *)&(this->NormalizedAgeAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->SizeDataSetAccessor = 1;
  *(undefined4 *)&(this->SizeDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->TwistDataSetAccessor = 1;
  *(undefined4 *)&(this->TwistDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->FacingDataSetAccessor = 1;
  *(undefined4 *)&(this->FacingDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->MaterialParam0DataSetAccessor = 1;
  *(undefined4 *)&(this->MaterialParam0DataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->MaterialParam1DataSetAccessor = 1;
  *(undefined4 *)&(this->MaterialParam1DataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->MaterialParam2DataSetAccessor = 1;
  *(undefined4 *)&(this->MaterialParam2DataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->MaterialParam3DataSetAccessor = 1;
  *(undefined4 *)&(this->MaterialParam3DataSetAccessor).field_0x4 = 0xffffffff;
  this->RibbonIdDataSetAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  *(undefined8 *)&(this->RibbonFullIDDataSetAccessor).field_0x4 = 0xffffffffffffffff;
  this->GpuRibbonLinkOrderOffset = 0xffffffff;
  return this;
}

// UNiagaraRibbonRendererProperties @ 149388420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UNiagaraRibbonRendererProperties * __thiscall
UNiagaraRibbonRendererProperties::UNiagaraRibbonRendererProperties
          (UNiagaraRibbonRendererProperties *this)

{
  byte *pbVar1;
  int *piVar2;
  undefined1 *puVar3;
  FNiagaraVariableAttributeBinding *pFVar4;
  FNiagaraVariableAttributeBinding *pFVar5;
  FNiagaraVariableAttributeBinding *pFVar6;
  FNiagaraVariableAttributeBinding *pFVar7;
  longlong *plVar8;
  int iVar9;
  FNiagaraVariableAttributeBinding *pFVar10;
  FNiagaraVariableAttributeBinding *pFVar11;
  undefined1 auStackY_158 [32];
  TObjectPtr<UObject>_u_0 local_110;
  undefined2 local_108;
  undefined1 local_106;
  undefined8 local_104;
  undefined4 local_fc;
  FNiagaraVariableAttributeBinding *local_f8;
  FNiagaraVariableAttributeBinding *pFStack_f0;
  FNiagaraVariableAttributeBinding *local_e8;
  FNiagaraVariableAttributeBinding *pFStack_e0;
  FNiagaraVariableAttributeBinding *local_d8;
  FNiagaraVariableAttributeBinding *pFStack_d0;
  FNiagaraVariableAttributeBinding *local_c8;
  FNiagaraVariableAttributeBinding *pFStack_c0;
  FNiagaraVariableAttributeBinding *local_b8;
  FNiagaraVariableAttributeBinding *pFStack_b0;
  FNiagaraVariableAttributeBinding *local_a8;
  FNiagaraVariableAttributeBinding *pFStack_a0;
  FNiagaraVariableAttributeBinding *local_98;
  FNiagaraVariableAttributeBinding *pFStack_90;
  FNiagaraVariableAttributeBinding *local_88;
  FNiagaraVariableAttributeBinding *pFStack_80;
  FNiagaraVariableAttributeBinding *local_78;
  FNiagaraVariableAttributeBinding *pFStack_70;
  FNiagaraVariableAttributeBinding *local_68;
  FNiagaraVariableAttributeBinding *pFStack_60;
  FNiagaraVariableAttributeBinding *local_58;
  FNiagaraVariableAttributeBinding *pFStack_50;
  FNiagaraVariableAttributeBinding *local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_158;
  UNiagaraMergeable::UNiagaraMergeable((UNiagaraMergeable *)this);
  this->_padding_ = (longlong)&___7UNiagaraRendererProperties__6B_;
  FNiagaraPlatformSet::FNiagaraPlatformSet((FNiagaraPlatformSet *)&this->_padding_);
  *(undefined2 *)((longlong)&this->_padding_ + 5) = 0x101;
  this->_padding_ = 0;
  this->_padding_ = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&this->_padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this->_padding_ = iVar9;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UNiagaraRibbonRendererProperties__6B_;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  local_110.DebugPtr = (UObject *)Z_Construct_UClass_UMaterialInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_110.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_110.DebugPtr);
  }
  local_106 = 0;
  local_108 = 1;
  local_104 = 0xffffffffffffffff;
  local_fc = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_110.ObjectPtr);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
            (&this->MaterialUserParamBinding,(FNiagaraTypeDefinition *)&local_110.ObjectPtr);
  (this->UV0Settings).bEnablePerParticleUOverride = '\0';
  (this->UV0Settings).bEnablePerParticleVRangeOverride = '\0';
  (this->UV1Settings).bEnablePerParticleUOverride = '\0';
  (this->UV1Settings).bEnablePerParticleVRangeOverride = '\0';
  (this->UV0Settings).DistributionMode = ScaledUsingRibbonSegmentLength;
  (this->UV0Settings).LeadingEdgeMode = Locked;
  (this->UV0Settings).Scale.field0_0x0._s_0.X = 1.0;
  (this->UV0Settings).Scale.field0_0x0._s_0.Y = 1.0;
  (this->UV1Settings).Scale.field0_0x0._s_0.X = 1.0;
  (this->UV1Settings).Scale.field0_0x0._s_0.Y = 1.0;
  (this->UV0Settings).TrailingEdgeMode = Locked;
  (this->UV0Settings).TilingLength = 100.0;
  (this->UV0Settings).Offset.field0_0x0._s_0.X = 0.0;
  (this->UV0Settings).Offset.field0_0x0._s_0.Y = 0.0;
  (this->UV1Settings).DistributionMode = ScaledUsingRibbonSegmentLength;
  (this->UV1Settings).LeadingEdgeMode = Locked;
  (this->UV1Settings).TrailingEdgeMode = Locked;
  (this->UV1Settings).TilingLength = 100.0;
  (this->UV1Settings).Offset.field0_0x0._s_0.X = 0.0;
  (this->UV1Settings).Offset.field0_0x0._s_0.Y = 0.0;
  this->FacingMode = Screen;
  this->MaxNumRibbons = 0;
  *(undefined2 *)&this->Shape = 0xe400;
  this->WidthSegmentationCount = 1;
  this->MultiPlaneCount = 2;
  this->TubeSubdivisions = 3;
  (this->CustomVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CustomVertices).ArrayNum = 0;
  (this->CustomVertices).ArrayMax = 0;
  this->TessellationMode = Automatic;
  this->CurveTension = 0.0;
  this->TessellationFactor = 0x10;
  this->TessellationAngle = 15.0;
  (this->PositionBinding).RootName.ComparisonIndex = 0;
  (this->PositionBinding).RootName.Number = 0;
  (this->PositionBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PositionBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PositionBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PositionBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->PositionBinding).bBindingExistsOnSource = '\0';
  (this->PositionBinding).bIsCachedParticleValue = '\x01';
  (this->PositionBinding).DataSetName.ComparisonIndex = 0;
  (this->PositionBinding).DataSetName.Number = 0;
  (this->PositionBinding).BindingSourceMode.Value = '\0';
  (this->ColorBinding).RootName.ComparisonIndex = 0;
  (this->ColorBinding).RootName.Number = 0;
  (this->ColorBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->ColorBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->ColorBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->ColorBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->ColorBinding).bBindingExistsOnSource = '\0';
  (this->ColorBinding).bIsCachedParticleValue = '\x01';
  (this->ColorBinding).DataSetName.ComparisonIndex = 0;
  (this->ColorBinding).DataSetName.Number = 0;
  (this->ColorBinding).BindingSourceMode.Value = '\0';
  (this->VelocityBinding).RootName.ComparisonIndex = 0;
  (this->VelocityBinding).RootName.Number = 0;
  (this->VelocityBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->VelocityBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->VelocityBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->VelocityBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->VelocityBinding).bBindingExistsOnSource = '\0';
  (this->VelocityBinding).bIsCachedParticleValue = '\x01';
  (this->VelocityBinding).DataSetName.ComparisonIndex = 0;
  (this->VelocityBinding).DataSetName.Number = 0;
  (this->VelocityBinding).BindingSourceMode.Value = '\0';
  (this->NormalizedAgeBinding).RootName.ComparisonIndex = 0;
  (this->NormalizedAgeBinding).RootName.Number = 0;
  (this->NormalizedAgeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->NormalizedAgeBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->NormalizedAgeBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->NormalizedAgeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->NormalizedAgeBinding).DataSetName.ComparisonIndex = 0;
  (this->NormalizedAgeBinding).DataSetName.Number = 0;
  (this->NormalizedAgeBinding).BindingSourceMode.Value = '\0';
  (this->NormalizedAgeBinding).bBindingExistsOnSource = '\0';
  (this->NormalizedAgeBinding).bIsCachedParticleValue = '\x01';
  (this->RibbonTwistBinding).RootName.ComparisonIndex = 0;
  (this->RibbonTwistBinding).RootName.Number = 0;
  (this->RibbonTwistBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RibbonTwistBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RibbonTwistBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RibbonTwistBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->RibbonTwistBinding).bBindingExistsOnSource = '\0';
  (this->RibbonTwistBinding).bIsCachedParticleValue = '\x01';
  (this->RibbonTwistBinding).DataSetName.ComparisonIndex = 0;
  (this->RibbonTwistBinding).DataSetName.Number = 0;
  (this->RibbonTwistBinding).BindingSourceMode.Value = '\0';
  (this->RibbonWidthBinding).RootName.ComparisonIndex = 0;
  (this->RibbonWidthBinding).RootName.Number = 0;
  (this->RibbonWidthBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RibbonWidthBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RibbonWidthBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RibbonWidthBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->RibbonWidthBinding).bBindingExistsOnSource = '\0';
  (this->RibbonWidthBinding).bIsCachedParticleValue = '\x01';
  (this->RibbonWidthBinding).DataSetName.ComparisonIndex = 0;
  (this->RibbonWidthBinding).DataSetName.Number = 0;
  (this->RibbonWidthBinding).BindingSourceMode.Value = '\0';
  (this->RibbonFacingBinding).RootName.ComparisonIndex = 0;
  (this->RibbonFacingBinding).RootName.Number = 0;
  (this->RibbonFacingBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RibbonFacingBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RibbonFacingBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RibbonFacingBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->RibbonFacingBinding).bBindingExistsOnSource = '\0';
  (this->RibbonFacingBinding).bIsCachedParticleValue = '\x01';
  (this->RibbonFacingBinding).DataSetName.ComparisonIndex = 0;
  (this->RibbonFacingBinding).DataSetName.Number = 0;
  (this->RibbonFacingBinding).BindingSourceMode.Value = '\0';
  (this->RibbonIdBinding).RootName.ComparisonIndex = 0;
  (this->RibbonIdBinding).RootName.Number = 0;
  (this->RibbonIdBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RibbonIdBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RibbonIdBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RibbonIdBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->RibbonIdBinding).bBindingExistsOnSource = '\0';
  (this->RibbonIdBinding).bIsCachedParticleValue = '\x01';
  (this->RibbonIdBinding).DataSetName.ComparisonIndex = 0;
  (this->RibbonIdBinding).DataSetName.Number = 0;
  (this->RibbonIdBinding).BindingSourceMode.Value = '\0';
  (this->RibbonLinkOrderBinding).RootName.ComparisonIndex = 0;
  (this->RibbonLinkOrderBinding).RootName.Number = 0;
  (this->RibbonLinkOrderBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RibbonLinkOrderBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RibbonLinkOrderBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RibbonLinkOrderBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->RibbonLinkOrderBinding).bBindingExistsOnSource = '\0';
  (this->RibbonLinkOrderBinding).bIsCachedParticleValue = '\x01';
  (this->RibbonLinkOrderBinding).DataSetName.ComparisonIndex = 0;
  (this->RibbonLinkOrderBinding).DataSetName.Number = 0;
  (this->RibbonLinkOrderBinding).BindingSourceMode.Value = '\0';
  (this->MaterialRandomBinding).RootName.ComparisonIndex = 0;
  (this->MaterialRandomBinding).RootName.Number = 0;
  (this->MaterialRandomBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->MaterialRandomBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->MaterialRandomBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->MaterialRandomBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->MaterialRandomBinding).bBindingExistsOnSource = '\0';
  (this->MaterialRandomBinding).bIsCachedParticleValue = '\x01';
  (this->MaterialRandomBinding).DataSetName.ComparisonIndex = 0;
  (this->MaterialRandomBinding).DataSetName.Number = 0;
  (this->MaterialRandomBinding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterialBinding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterialBinding).RootName.Number = 0;
  (this->DynamicMaterialBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterialBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DynamicMaterialBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterialBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->DynamicMaterialBinding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterialBinding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterialBinding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterialBinding).DataSetName.Number = 0;
  (this->DynamicMaterialBinding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterial1Binding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterial1Binding).RootName.Number = 0;
  (this->DynamicMaterial1Binding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterial1Binding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DynamicMaterial1Binding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterial1Binding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->DynamicMaterial1Binding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterial1Binding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterial1Binding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterial1Binding).DataSetName.Number = 0;
  (this->DynamicMaterial1Binding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterial2Binding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterial2Binding).RootName.Number = 0;
  (this->DynamicMaterial2Binding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterial2Binding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DynamicMaterial2Binding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterial2Binding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->DynamicMaterial2Binding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterial2Binding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterial2Binding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterial2Binding).DataSetName.Number = 0;
  (this->DynamicMaterial2Binding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterial3Binding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterial3Binding).RootName.Number = 0;
  (this->DynamicMaterial3Binding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterial3Binding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DynamicMaterial3Binding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterial3Binding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->DynamicMaterial3Binding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterial3Binding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterial3Binding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterial3Binding).DataSetName.Number = 0;
  (this->DynamicMaterial3Binding).BindingSourceMode.Value = '\0';
  (this->RibbonUVDistance).RootName.ComparisonIndex = 0;
  (this->RibbonUVDistance).RootName.Number = 0;
  (this->RibbonUVDistance).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RibbonUVDistance).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RibbonUVDistance).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RibbonUVDistance).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->RibbonUVDistance).bBindingExistsOnSource = '\0';
  (this->RibbonUVDistance).bIsCachedParticleValue = '\x01';
  (this->RibbonUVDistance).DataSetName.ComparisonIndex = 0;
  (this->RibbonUVDistance).DataSetName.Number = 0;
  (this->RibbonUVDistance).BindingSourceMode.Value = '\0';
  (this->U0OverrideBinding).RootName.ComparisonIndex = 0;
  (this->U0OverrideBinding).RootName.Number = 0;
  (this->U0OverrideBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->U0OverrideBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->U0OverrideBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->U0OverrideBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->U0OverrideBinding).bBindingExistsOnSource = '\0';
  (this->U0OverrideBinding).bIsCachedParticleValue = '\x01';
  (this->U0OverrideBinding).DataSetName.ComparisonIndex = 0;
  (this->U0OverrideBinding).DataSetName.Number = 0;
  (this->U0OverrideBinding).BindingSourceMode.Value = '\0';
  (this->V0RangeOverrideBinding).RootName.ComparisonIndex = 0;
  (this->V0RangeOverrideBinding).RootName.Number = 0;
  (this->V0RangeOverrideBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->V0RangeOverrideBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->V0RangeOverrideBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->V0RangeOverrideBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  pFVar4 = &this->U1OverrideBinding;
  (this->V0RangeOverrideBinding).bBindingExistsOnSource = '\0';
  (this->V0RangeOverrideBinding).bIsCachedParticleValue = '\x01';
  (this->V0RangeOverrideBinding).DataSetName.ComparisonIndex = 0;
  (this->V0RangeOverrideBinding).DataSetName.Number = 0;
  (this->V0RangeOverrideBinding).BindingSourceMode.Value = '\0';
  (pFVar4->RootName).ComparisonIndex = 0;
  (pFVar4->RootName).Number = 0;
  (this->U1OverrideBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->U1OverrideBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->U1OverrideBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->U1OverrideBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  pFVar5 = &this->V1RangeOverrideBinding;
  (this->U1OverrideBinding).bBindingExistsOnSource = '\0';
  (this->U1OverrideBinding).bIsCachedParticleValue = '\x01';
  (this->U1OverrideBinding).DataSetName.ComparisonIndex = 0;
  (this->U1OverrideBinding).DataSetName.Number = 0;
  (this->U1OverrideBinding).BindingSourceMode.Value = '\0';
  (pFVar5->RootName).ComparisonIndex = 0;
  (pFVar5->RootName).Number = 0;
  (this->V1RangeOverrideBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->V1RangeOverrideBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->V1RangeOverrideBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->V1RangeOverrideBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  pFVar6 = &this->PrevPositionBinding;
  (this->V1RangeOverrideBinding).bBindingExistsOnSource = '\0';
  (this->V1RangeOverrideBinding).bIsCachedParticleValue = '\x01';
  (this->V1RangeOverrideBinding).DataSetName.ComparisonIndex = 0;
  (this->V1RangeOverrideBinding).DataSetName.Number = 0;
  (this->V1RangeOverrideBinding).BindingSourceMode.Value = '\0';
  (this->MaterialParameters).AttributeBindings.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialParameters).AttributeBindings.ArrayNum = 0;
  (this->MaterialParameters).AttributeBindings.ArrayMax = 0;
  (this->MaterialParameters).ScalarParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialParameters).ScalarParameters.ArrayNum = 0;
  (this->MaterialParameters).ScalarParameters.ArrayMax = 0;
  (this->MaterialParameters).VectorParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialParameters).VectorParameters.ArrayNum = 0;
  (this->MaterialParameters).VectorParameters.ArrayMax = 0;
  (this->MaterialParameters).TextureParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialParameters).TextureParameters.ArrayNum = 0;
  (this->MaterialParameters).TextureParameters.ArrayMax = 0;
  (this->MaterialParameters).StaticBoolParameters.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->MaterialParameters).StaticBoolParameters.ArrayNum = 0;
  (this->MaterialParameters).StaticBoolParameters.ArrayMax = 0;
  (pFVar6->RootName).ComparisonIndex = 0;
  (pFVar6->RootName).Number = 0;
  (this->PrevPositionBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevPositionBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PrevPositionBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevPositionBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->PrevPositionBinding).bBindingExistsOnSource = '\0';
  (this->PrevPositionBinding).bIsCachedParticleValue = '\x01';
  (this->PrevPositionBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevPositionBinding).DataSetName.Number = 0;
  (this->PrevPositionBinding).BindingSourceMode.Value = '\0';
  pFVar7 = &this->PrevRibbonWidthBinding;
  (pFVar7->RootName).ComparisonIndex = 0;
  (pFVar7->RootName).Number = 0;
  (this->PrevRibbonWidthBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevRibbonWidthBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PrevRibbonWidthBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevRibbonWidthBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->PrevRibbonWidthBinding).bBindingExistsOnSource = '\0';
  pFVar10 = &this->PrevRibbonFacingBinding;
  (this->PrevRibbonWidthBinding).bIsCachedParticleValue = '\x01';
  (this->PrevRibbonWidthBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevRibbonWidthBinding).DataSetName.Number = 0;
  (this->PrevRibbonWidthBinding).BindingSourceMode.Value = '\0';
  (pFVar10->RootName).ComparisonIndex = 0;
  (pFVar10->RootName).Number = 0;
  (this->PrevRibbonFacingBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevRibbonFacingBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PrevRibbonFacingBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevRibbonFacingBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->PrevRibbonFacingBinding).bBindingExistsOnSource = '\0';
  (this->PrevRibbonFacingBinding).bIsCachedParticleValue = '\x01';
  (this->PrevRibbonFacingBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevRibbonFacingBinding).DataSetName.Number = 0;
  (this->PrevRibbonFacingBinding).BindingSourceMode.Value = '\0';
  pFVar11 = &this->PrevRibbonTwistBinding;
  (pFVar11->RootName).ComparisonIndex = 0;
  (pFVar11->RootName).Number = 0;
  (this->PrevRibbonTwistBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevRibbonTwistBinding).ParamMapVariable.Name.Number = 0;
  iVar9 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PrevRibbonTwistBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevRibbonTwistBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar9;
  (this->PrevRibbonTwistBinding).bBindingExistsOnSource = '\0';
  (this->PrevRibbonTwistBinding).bIsCachedParticleValue = '\x01';
  (this->PrevRibbonTwistBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevRibbonTwistBinding).DataSetName.Number = 0;
  (this->PrevRibbonTwistBinding).BindingSourceMode.Value = '\0';
  this->MaterialParamValidMask = 0;
  *(undefined1 *)&this->RibbonLinkOrderFloatAccessor = 1;
  *(undefined8 *)&(this->RibbonLinkOrderFloatAccessor).field_0x4 = 0xffffffffffffffff;
  *(undefined1 *)&this->PositionDataSetAccessor = 1;
  *(undefined4 *)&(this->PositionDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->NormalizedAgeAccessor = 1;
  *(undefined4 *)&(this->NormalizedAgeAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->SizeDataSetAccessor = 1;
  *(undefined4 *)&(this->SizeDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->TwistDataSetAccessor = 1;
  *(undefined4 *)&(this->TwistDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->FacingDataSetAccessor = 1;
  *(undefined4 *)&(this->FacingDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->MaterialParam0DataSetAccessor = 1;
  *(undefined4 *)&(this->MaterialParam0DataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->MaterialParam1DataSetAccessor = 1;
  *(undefined4 *)&(this->MaterialParam1DataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined4 *)&(this->MaterialParam2DataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined4 *)&(this->MaterialParam3DataSetAccessor).field_0x4 = 0xffffffff;
  this->RibbonIdDataSetAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  local_f8 = &this->PositionBinding;
  pFStack_f0 = &this->ColorBinding;
  local_e8 = &this->VelocityBinding;
  pFStack_e0 = &this->NormalizedAgeBinding;
  local_d8 = &this->RibbonTwistBinding;
  pFStack_d0 = &this->RibbonWidthBinding;
  local_c8 = &this->RibbonFacingBinding;
  pFStack_c0 = &this->RibbonIdBinding;
  local_b8 = &this->RibbonLinkOrderBinding;
  pFStack_b0 = &this->MaterialRandomBinding;
  local_a8 = &this->DynamicMaterialBinding;
  pFStack_a0 = &this->DynamicMaterial1Binding;
  local_98 = &this->DynamicMaterial2Binding;
  pFStack_90 = &this->DynamicMaterial3Binding;
  local_88 = &this->RibbonUVDistance;
  *(undefined1 *)&this->RibbonFullIDDataSetAccessor = 0;
  this->bGpuRibbonLinkIsFloat = false;
  (this->RendererLayout).VFVariables_GT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererLayout).VFVariables_GT.ArrayNum = 0;
  (this->RendererLayout).VFVariables_GT.ArrayMax = 0;
  (this->RendererLayout).VFVariables_RT.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererLayout).VFVariables_RT.ArrayNum = 0;
  (this->RendererLayout).VFVariables_RT.ArrayMax = 0;
  (this->RendererLayout).TotalFloatComponents_GT = 0;
  (this->RendererLayout).TotalHalfComponents_GT = 0;
  (this->RendererLayout).TotalFloatComponents_RT = 0;
  (this->RendererLayout).TotalHalfComponents_RT = 0;
  pFStack_80 = &this->U0OverrideBinding;
  *(undefined1 *)&this->MaterialParam2DataSetAccessor = 1;
  *(undefined1 *)&this->MaterialParam3DataSetAccessor = 1;
  *(undefined8 *)&(this->RibbonFullIDDataSetAccessor).field_0x4 = 0xffffffffffffffff;
  this->GpuRibbonLinkOrderOffset = 0xffffffff;
  local_78 = &this->V0RangeOverrideBinding;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  iVar9 = *piVar2;
  *(undefined4 *)&this->_padding_ = 0x17;
  pFStack_70 = pFVar4;
  local_68 = pFVar5;
  pFStack_60 = pFVar6;
  local_58 = pFVar7;
  pFStack_50 = pFVar10;
  local_48 = pFVar11;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x17,iVar9,(ForAnyElementType *)&this->_padding_,0x17,piVar2);
  plVar8 = (longlong *)this->_padding_;
  *plVar8 = (longlong)local_f8;
  plVar8[1] = (longlong)pFStack_f0;
  plVar8[2] = (longlong)local_e8;
  plVar8[3] = (longlong)pFStack_e0;
  plVar8[4] = (longlong)local_d8;
  plVar8[5] = (longlong)pFStack_d0;
  plVar8[6] = (longlong)local_c8;
  plVar8[7] = (longlong)pFStack_c0;
  plVar8[8] = (longlong)local_b8;
  plVar8[9] = (longlong)pFStack_b0;
  plVar8[10] = (longlong)local_a8;
  plVar8[0xb] = (longlong)pFStack_a0;
  plVar8[0xc] = (longlong)local_98;
  plVar8[0xd] = (longlong)pFStack_90;
  plVar8[0xe] = (longlong)local_88;
  plVar8[0xf] = (longlong)pFStack_80;
  plVar8[0x10] = (longlong)local_78;
  plVar8[0x11] = (longlong)pFStack_70;
  plVar8[0x12] = (longlong)local_68;
  plVar8[0x13] = (longlong)pFStack_60;
  plVar8[0x14] = (longlong)local_58;
  plVar8[0x15] = (longlong)pFStack_50;
  plVar8[0x16] = (longlong)local_48;
  return this;
}

// ~UNiagaraRibbonRendererProperties @ 14938a840

void __thiscall
UNiagaraRibbonRendererProperties::~UNiagaraRibbonRendererProperties
          (UNiagaraRibbonRendererProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraRibbonRendererProperties__6B_;
  pFVar1 = (this->RendererLayout).VFVariables_RT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayout).VFVariables_GT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).StaticBoolParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).TextureParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).VectorParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).ScalarParameters.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialParameters).AttributeBindings.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CustomVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->MaterialUserParamBinding).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraRendererProperties::~UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  return;
}

// CacheFromCompiledData @ 149395970

void __thiscall
UNiagaraRibbonRendererProperties::CacheFromCompiledData
          (UNiagaraRibbonRendererProperties *this,FNiagaraDataSetCompiledData *param_1)

{
  FNiagaraDataSetAccessor<float> *this_00;
  FNiagaraRendererLayout *this_01;
  ushort uVar1;
  bool bVar2;
  FNiagaraTypeDefinition *pFVar3;
  FNiagaraVariableLayoutInfo *pFVar4;
  int iVar5;
  FNiagaraDataSetAccessorFloat<float> local_res8;
  FNiagaraTypeDefinitionHandle *local_res10;
  FNiagaraVariableBase local_48;
  
  this_00 = &this->RibbonLinkOrderFloatAccessor;
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->RibbonLinkOrderBinding).ParamMapVariable.TypeDefHandle);
  local_48.Name = (this->RibbonLinkOrderBinding).DataSetName;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    this_00->field_0x0 = 1;
    *(undefined4 *)&(this->RibbonLinkOrderFloatAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<float>::Init
              ((FNiagaraDataSetAccessorFloat<float> *)this_00,param_1,local_48.Name);
  }
  this->RibbonLinkOrderInt32Accessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  if (*(int *)&(this->RibbonLinkOrderFloatAccessor).field_0x4 == -1) {
    if (this->bLinkOrderUseUniqueID != '\0') {
      FNiagaraDataSetAccessorInt32<int>::Init
                ((FNiagaraDataSetAccessorInt32<int> *)&this->RibbonLinkOrderInt32Accessor,param_1,
                 NiagaraRibbonRendererPropertiesPrivate::NAME_UniqueID);
    }
    if (this->RibbonLinkOrderInt32Accessor == (FNiagaraDataSetAccessor<int>)0xffffffff) {
      pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                         (&(this->NormalizedAgeBinding).ParamMapVariable.TypeDefHandle);
      local_48.Name = (this->NormalizedAgeBinding).DataSetName;
      local_48.TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
      if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
        this_00->field_0x0 = 1;
        *(undefined4 *)&(this->RibbonLinkOrderFloatAccessor).field_0x4 = 0xffffffff;
      }
      else {
        FNiagaraDataSetAccessorFloat<float>::Init
                  ((FNiagaraDataSetAccessorFloat<float> *)this_00,param_1,local_48.Name);
      }
    }
  }
  local_res10 = &(this->NormalizedAgeBinding).ParamMapVariable.TypeDefHandle;
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve(local_res10);
  local_48.Name = (this->NormalizedAgeBinding).DataSetName;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->NormalizedAgeAccessor = 1;
    *(undefined4 *)&(this->NormalizedAgeAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<float>::Init
              ((FNiagaraDataSetAccessorFloat<float> *)&this->NormalizedAgeAccessor,param_1,
               local_48.Name);
  }
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->PositionBinding).ParamMapVariable.TypeDefHandle);
  local_48.Name = (this->PositionBinding).DataSetName;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->PositionDataSetAccessor = 1;
    *(undefined4 *)&(this->PositionDataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<FNiagaraPosition>::Init
              ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)&this->PositionDataSetAccessor,
               param_1,local_48.Name);
  }
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->RibbonWidthBinding).ParamMapVariable.TypeDefHandle);
  local_48.Name = (this->RibbonWidthBinding).DataSetName;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->SizeDataSetAccessor = 1;
    *(undefined4 *)&(this->SizeDataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<float>::Init
              ((FNiagaraDataSetAccessorFloat<float> *)&this->SizeDataSetAccessor,param_1,
               local_48.Name);
  }
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->RibbonTwistBinding).ParamMapVariable.TypeDefHandle);
  local_48.Name = (this->RibbonTwistBinding).DataSetName;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->TwistDataSetAccessor = 1;
    *(undefined4 *)&(this->TwistDataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<float>::Init
              ((FNiagaraDataSetAccessorFloat<float> *)&this->TwistDataSetAccessor,param_1,
               local_48.Name);
  }
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->RibbonFacingBinding).ParamMapVariable.TypeDefHandle);
  local_48.Name = (this->RibbonFacingBinding).DataSetName;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->FacingDataSetAccessor = 1;
    *(undefined4 *)&(this->FacingDataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::Init
              ((FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> *)
               &this->FacingDataSetAccessor,param_1,local_48.Name);
  }
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->DynamicMaterialBinding).ParamMapVariable.TypeDefHandle);
  local_48.Name = (this->DynamicMaterialBinding).DataSetName;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->MaterialParam0DataSetAccessor = 1;
    *(undefined4 *)&(this->MaterialParam0DataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_>::Init
              ((FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_> *)
               &this->MaterialParam0DataSetAccessor,param_1,local_48.Name);
  }
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->DynamicMaterial1Binding).ParamMapVariable.TypeDefHandle);
  local_48.Name = (this->DynamicMaterial1Binding).DataSetName;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->MaterialParam1DataSetAccessor = 1;
    *(undefined4 *)&(this->MaterialParam1DataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_>::Init
              ((FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_> *)
               &this->MaterialParam1DataSetAccessor,param_1,local_48.Name);
  }
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->DynamicMaterial2Binding).ParamMapVariable.TypeDefHandle);
  local_48.Name = (this->DynamicMaterial2Binding).DataSetName;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->MaterialParam2DataSetAccessor = 1;
    *(undefined4 *)&(this->MaterialParam2DataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_>::Init
              ((FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_> *)
               &this->MaterialParam2DataSetAccessor,param_1,local_48.Name);
  }
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->DynamicMaterial3Binding).ParamMapVariable.TypeDefHandle);
  local_48.Name = (this->DynamicMaterial3Binding).DataSetName;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->MaterialParam3DataSetAccessor = 1;
    *(undefined4 *)&(this->MaterialParam3DataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_>::Init
              ((FNiagaraDataSetAccessorFloat<UE::Math::TVector4<float>_> *)
               &this->MaterialParam3DataSetAccessor,param_1,local_48.Name);
  }
  local_res8.ComponentIndex = -1;
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->RibbonUVDistance).ParamMapVariable.TypeDefHandle);
  local_48.Name = (this->RibbonUVDistance).DataSetName;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
  iVar5 = -1;
  if (param_1 != (FNiagaraDataSetCompiledData *)0x0) {
    FNiagaraDataSetAccessorFloat<float>::Init(&local_res8,param_1,local_48.Name);
    iVar5 = local_res8.ComponentIndex;
  }
  local_res8.ComponentIndex = -1;
  this->DistanceFromStartIsBound = iVar5 != -1;
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->U0OverrideBinding).ParamMapVariable.TypeDefHandle);
  local_48.Name = (this->U0OverrideBinding).DataSetName;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
  iVar5 = -1;
  if (param_1 != (FNiagaraDataSetCompiledData *)0x0) {
    FNiagaraDataSetAccessorFloat<float>::Init(&local_res8,param_1,local_48.Name);
    iVar5 = local_res8.ComponentIndex;
  }
  local_res8.ComponentIndex = -1;
  this->U0OverrideIsBound = iVar5 != -1;
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->U1OverrideBinding).ParamMapVariable.TypeDefHandle);
  local_48.Name = (this->U1OverrideBinding).DataSetName;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
  iVar5 = -1;
  if (param_1 != (FNiagaraDataSetCompiledData *)0x0) {
    FNiagaraDataSetAccessorFloat<float>::Init(&local_res8,param_1,local_48.Name);
    iVar5 = local_res8.ComponentIndex;
  }
  this->U1OverrideIsBound = iVar5 != -1;
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->RibbonIdBinding).ParamMapVariable.TypeDefHandle);
  local_48.Name = (this->RibbonIdBinding).DataSetName;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve(&local_48.TypeDefHandle);
  if ((((TObjectPtr<UObject>_u_0)(pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr ==
        FNiagaraTypeDefinition::IDDef.ClassStructOrEnum.field0_0x0) &&
      (pFVar3->UnderlyingType == FNiagaraTypeDefinition::IDDef.UnderlyingType)) &&
     (pFVar3->Flags == FNiagaraTypeDefinition::IDDef.Flags)) {
    pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                       (&(this->RibbonIdBinding).ParamMapVariable.TypeDefHandle);
    local_48.Name = (this->RibbonIdBinding).DataSetName;
    local_48.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
    if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
      *(undefined1 *)&this->RibbonFullIDDataSetAccessor = 0;
      *(undefined8 *)&(this->RibbonFullIDDataSetAccessor).field_0x4 = 0xffffffffffffffff;
    }
    else {
      FNiagaraDataSetAccessorStruct<FNiagaraID>::Init
                ((FNiagaraDataSetAccessorStruct<FNiagaraID> *)&this->RibbonFullIDDataSetAccessor,
                 param_1,local_48.Name);
    }
  }
  else {
    pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                       (&(this->RibbonIdBinding).ParamMapVariable.TypeDefHandle);
    local_48.Name = (this->RibbonIdBinding).DataSetName;
    local_48.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
    FNiagaraDataSetAccessorInt32<int>::Init
              ((FNiagaraDataSetAccessorInt32<int> *)&this->RibbonIdDataSetAccessor,param_1,
               local_48.Name);
  }
  if ((this->FacingMode == Custom) || (this->FacingMode == CustomSideVector)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  this_01 = &this->RendererLayout;
  FNiagaraRendererLayout::Initialize(this_01,0x15);
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->PositionBinding,0);
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->VelocityBinding,1);
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->ColorBinding,2);
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->RibbonWidthBinding,3);
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->RibbonTwistBinding,4);
  if (bVar2) {
    FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->RibbonFacingBinding,5);
  }
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->NormalizedAgeBinding,6);
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->MaterialRandomBinding,7);
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->RibbonUVDistance,0xc);
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->U0OverrideBinding,0xd);
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->V0RangeOverrideBinding,0xe);
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->U1OverrideBinding,0xf);
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->V1RangeOverrideBinding,0x10)
  ;
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->DynamicMaterialBinding,8);
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->DynamicMaterial1Binding,9);
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->DynamicMaterial2Binding,10);
  FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->DynamicMaterial3Binding,0xb)
  ;
  bVar2 = UNiagaraRendererProperties::NeedsPreciseMotionVectors((UNiagaraRendererProperties *)this);
  if (bVar2) {
    FNiagaraRendererLayout::SetVariableFromBinding(this_01,param_1,&this->PrevPositionBinding,0x11);
    FNiagaraRendererLayout::SetVariableFromBinding
              (this_01,param_1,&this->PrevRibbonWidthBinding,0x12);
    FNiagaraRendererLayout::SetVariableFromBinding
              (this_01,param_1,&this->PrevRibbonFacingBinding,0x13);
    FNiagaraRendererLayout::SetVariableFromBinding
              (this_01,param_1,&this->PrevRibbonTwistBinding,0x14);
  }
  FNiagaraRendererLayout::Finalize(this_01);
  this->bGpuRibbonLinkIsFloat = false;
  this->GpuRibbonLinkOrderOffset = 0xffffffff;
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    return;
  }
  pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->RibbonLinkOrderBinding).ParamMapVariable.TypeDefHandle);
  local_48.Name = (this->RibbonLinkOrderBinding).DataSetName;
  local_48.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
  pFVar4 = FNiagaraDataSetCompiledData::FindVariableLayoutInfo(param_1,&local_48);
  if (pFVar4 == (FNiagaraVariableLayoutInfo *)0x0) {
    if (this->bLinkOrderUseUniqueID == '\0') goto LAB_1493961f1;
    local_48.Name = NiagaraRibbonRendererPropertiesPrivate::NAME_UniqueID;
    local_48.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&local_48.TypeDefHandle,&FNiagaraTypeDefinition::IntDef);
    pFVar4 = FNiagaraDataSetCompiledData::FindVariableLayoutInfo(param_1,&local_48);
    if (pFVar4 == (FNiagaraVariableLayoutInfo *)0x0) goto LAB_1493961f1;
    this->bGpuRibbonLinkIsFloat = false;
    uVar1 = pFVar4->Int32ComponentStart;
  }
  else {
    this->bGpuRibbonLinkIsFloat = true;
    uVar1 = pFVar4->FloatComponentStart;
  }
  this->GpuRibbonLinkOrderOffset = (uint)uVar1;
LAB_1493961f1:
  if (this->GpuRibbonLinkOrderOffset == 0xffffffff) {
    pFVar3 = FNiagaraTypeDefinitionHandle::Resolve(local_res10);
    local_48.Name = (this->NormalizedAgeBinding).DataSetName;
    local_48.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(&local_48.TypeDefHandle,pFVar3);
    pFVar4 = FNiagaraDataSetCompiledData::FindVariableLayoutInfo(param_1,&local_48);
    if (pFVar4 != (FNiagaraVariableLayoutInfo *)0x0) {
      this->bGpuRibbonLinkIsFloat = true;
      this->GpuRibbonLinkOrderOffset = (uint)pFVar4->FloatComponentStart;
    }
  }
  return;
}

// CollectPSOPrecacheData @ 149397780

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
UNiagaraRibbonRendererProperties::CollectPSOPrecacheData
          (UNiagaraRibbonRendererProperties *this,FNiagaraEmitterInstance *param_1,
          TArray<UNiagaraRendererProperties::FPSOPrecacheParams,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  TObjectPtr<UMaterialInterface>_u_0 *pTVar1;
  UMaterialInterface *pUVar2;
  ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams> FVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  TObjectPtr<UMaterialInterface>_u_0 TVar7;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar8;
  longlong *plVar9;
  TObjectPtr<UMaterialInterface>_u_0 local_18;
  UMaterialInterface *pUStack_10;
  
  TVar7.DebugPtr = (UMaterialInterface *)(**(code **)(this->_padding_ + 0x2c8))();
  pUVar2 = (this->Material).field0_0x0.DebugPtr;
  if (pUVar2 != (UMaterialInterface *)0x0) {
    iVar6 = param_2->ArrayNum;
    if (iVar6 == param_2->ArrayMax) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams>_>
                        (0x838,&param_2->AllocatorInstance,&param_2->ArrayMax);
    }
    param_2->ArrayNum = iVar6 + 1;
    FVar3 = (param_2->AllocatorInstance).SecondaryData;
    if (FVar3 != (ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams>)0x0) {
      param_2 = (TArray<UNiagaraRendererProperties::FPSOPrecacheParams,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
                 *)FVar3;
    }
    plVar9 = (longlong *)((longlong)iVar6 * 0x38 + (longlong)param_2);
    DefaultConstructItems<UNiagaraRendererProperties::FPSOPrecacheParams,int>(plVar9,1);
    *plVar9 = (longlong)pUVar2;
    pTVar1 = (TObjectPtr<UMaterialInterface>_u_0 *)(plVar9 + 1);
    pUStack_10 = (UMaterialInterface *)0x0;
    pTVar8 = (TObjectPtr<UMaterialInterface>_u_0 *)plVar9[5];
    if ((TObjectPtr<UMaterialInterface>_u_0 *)plVar9[5] == (TObjectPtr<UMaterialInterface>_u_0 *)0x0
       ) {
      pTVar8 = pTVar1;
    }
    local_18.DebugPtr = TVar7.DebugPtr;
    if ((pTVar8 <= &local_18) &&
       (&local_18 < pTVar8 + (longlong)*(int *)((longlong)plVar9 + 0x34) * 2)) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar6 = (int)plVar9[6];
    if (iVar6 == *(int *)((longlong)plVar9 + 0x34)) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                        (0x810,(ForElementType<FPSOPrecacheVertexFactoryData> *)&pTVar1->ObjectPtr,
                         (int *)((longlong)plVar9 + 0x34));
    }
    *(int *)(plVar9 + 6) = iVar6 + 1;
    pTVar8 = (TObjectPtr<UMaterialInterface>_u_0 *)plVar9[5];
    if ((TObjectPtr<UMaterialInterface>_u_0 *)plVar9[5] == (TObjectPtr<UMaterialInterface>_u_0 *)0x0
       ) {
      pTVar8 = pTVar1;
    }
    pTVar8[(longlong)iVar6 * 2].DebugPtr = (UMaterialInterface *)local_18;
    (pTVar8 + (longlong)iVar6 * 2)[1].DebugPtr = pUStack_10;
  }
  return;
}

// CreateBoundsCalculator @ 149399ba0

FNiagaraBoundsCalculator * __thiscall
UNiagaraRibbonRendererProperties::CreateBoundsCalculator(UNiagaraRibbonRendererProperties *this)

{
  undefined8 uVar1;
  FNiagaraBoundsCalculator *pFVar2;
  
  pFVar2 = ::operator_new(0x78);
  if (pFVar2 != (FNiagaraBoundsCalculator *)0x0) {
    *pFVar2 = (FNiagaraBoundsCalculator)0x0;
    pFVar2[1] = (FNiagaraBoundsCalculator)0x0;
    pFVar2[2] = (FNiagaraBoundsCalculator)0x0;
    pFVar2[3] = (FNiagaraBoundsCalculator)0x0;
    pFVar2[4] = (FNiagaraBoundsCalculator)0x0;
    pFVar2[5] = (FNiagaraBoundsCalculator)0x0;
    pFVar2[6] = (FNiagaraBoundsCalculator)0x0;
    pFVar2[7] = (FNiagaraBoundsCalculator)0x0;
    pFVar2[8] = (FNiagaraBoundsCalculator)0x0;
    pFVar2[9] = (FNiagaraBoundsCalculator)0x0;
    pFVar2[10] = (FNiagaraBoundsCalculator)0x0;
    pFVar2[0xb] = (FNiagaraBoundsCalculator)0x0;
    pFVar2[0xc] = (FNiagaraBoundsCalculator)0x0;
    pFVar2[0xd] = (FNiagaraBoundsCalculator)0x0;
    pFVar2[0xe] = (FNiagaraBoundsCalculator)0x0;
    *(undefined1 *)(pFVar2 + 1) = 1;
    *(undefined4 *)&pFVar2[1].field_0x4 = 0xffffffff;
    *(undefined1 *)(pFVar2 + 2) = 1;
    *(undefined4 *)&pFVar2[2].field_0x4 = 0xffffffff;
    *(undefined1 *)(pFVar2 + 3) = 1;
    *(undefined4 *)&pFVar2[3].field_0x4 = 0xffffffff;
    *(undefined1 *)(pFVar2 + 4) = 1;
    *(undefined4 *)&pFVar2[4].field_0x4 = 0xffffffff;
    *pFVar2 = (FNiagaraBoundsCalculator)&___7__FNiagaraBoundsCalculatorHelper__0A__0A__00__6B_;
    uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
    pFVar2[5] = (FNiagaraBoundsCalculator)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
    pFVar2[6] = (FNiagaraBoundsCalculator)uVar1;
    pFVar2[7] = (FNiagaraBoundsCalculator)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pFVar2[8] = (FNiagaraBoundsCalculator)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    pFVar2[9] = (FNiagaraBoundsCalculator)uVar1;
    pFVar2[10] = (FNiagaraBoundsCalculator)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    pFVar2[0xb] = (FNiagaraBoundsCalculator)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    pFVar2[0xc] = (FNiagaraBoundsCalculator)uVar1;
    pFVar2[0xd] = (FNiagaraBoundsCalculator)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    return pFVar2;
  }
  return (FNiagaraBoundsCalculator *)0x0;
}

// CreateEmitterRenderer @ 14939a130

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
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraRenderer * __thiscall
UNiagaraRibbonRendererProperties::CreateEmitterRenderer
          (UNiagaraRibbonRendererProperties *this,Type param_1,FNiagaraEmitterInstance *param_2,
          FNiagaraSystemInstanceController *param_3)

{
  FNiagaraRendererRibbons *pFVar1;
  
  pFVar1 = ::operator_new(0x428);
  if (pFVar1 == (FNiagaraRendererRibbons *)0x0) {
    pFVar1 = (FNiagaraRendererRibbons *)0x0;
  }
  else {
    pFVar1 = FNiagaraRendererRibbons::FNiagaraRendererRibbons
                       (pFVar1,param_1,(UNiagaraRendererProperties *)this,param_2);
  }
  (**(code **)(pFVar1->_padding_ + 8))(pFVar1,this,param_2,param_3);
  return (FNiagaraRenderer *)pFVar1;
}

// GetPrivateStaticClass @ 1493a73b0

UClass * __cdecl UNiagaraRibbonRendererProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraRibbonRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraRibbonRendererProperties,0x520,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraRibbonRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraRibbonRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraRibbonRendererProperties.InnerSingleton;
}

// GetResourceSizeEx @ 1493a78c0

void __thiscall
UNiagaraRibbonRendererProperties::GetResourceSizeEx
          (UNiagaraRibbonRendererProperties *this,FResourceSizeEx *param_1)

{
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,((longlong)(this->RendererLayout).VFVariables_RT.ArrayMax +
                     (longlong)(this->RendererLayout).VFVariables_GT.ArrayMax) * 8);
  return;
}

// GetUsedMaterials @ 1493a8280

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
UNiagaraRibbonRendererProperties::GetUsedMaterials
          (UNiagaraRibbonRendererProperties *this,FNiagaraEmitterInstance *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  TObjectPtr<UMaterialInterface>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UObject> this_00;
  UClass *pUVar5;
  TObjectPtr<UMaterialInterface>_u_0 local_18 [2];
  
  if (param_1 != (FNiagaraEmitterInstance *)0x0) {
    this_00 = FNiagaraEmitterInstance::FindBinding(param_1,(FNiagaraVariable *)&stack0x00000010);
    if (*(longlong *)this_00.field0_0x0 != 0) {
      pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar5);
      if ((bVar3) &&
         (local_18[0].ObjectPtr.field0_0x0 = *(FObjectPtr *)this_00.field0_0x0,
         local_18[0].DebugPtr != (UMaterialInterface *)0x0)) goto LAB_1493a82e1;
    }
  }
  local_18[0] = (this->Material).field0_0x0;
LAB_1493a82e1:
  pTVar1 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_2->AllocatorInstance).Data;
  if ((pTVar1 <= local_18) && (local_18 < pTVar1 + param_2->ArrayMax)) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = param_2->ArrayNum;
  if (iVar4 == param_2->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
  }
  param_2->ArrayNum = iVar4 + 1;
  *(TObjectPtr<UMaterialInterface>_u_0 *)
   &(param_2->AllocatorInstance).Data[(longlong)iVar4 * 8].field_0x0 = (FObjectPtr)local_18[0];
  return;
}

// GetVertexFactoryType @ 1493a83a0

/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVertexFactoryType * __thiscall
UNiagaraRibbonRendererProperties::GetVertexFactoryType(UNiagaraRibbonRendererProperties *this)

{
  return &FNiagaraRibbonVertexFactory::StaticType;
}

// InitBindings @ 1493a8ad0

void __thiscall
UNiagaraRibbonRendererProperties::InitBindings(UNiagaraRibbonRendererProperties *this)

{
  FName FVar1;
  undefined8 uVar2;
  FNiagaraTypeDefinition *pFVar3;
  FNiagaraVariableAttributeBinding *pFVar4;
  FNiagaraVariableAttributeBinding local_28;
  
  if ((this->PositionBinding).DataSetName != (FName)0x0) {
    pFVar3 = FNiagaraTypeDefinitionHandle::Resolve
                       (&(this->PositionBinding).ParamMapVariable.TypeDefHandle);
    if ((pFVar3->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) goto LAB_1493a8dbf;
  }
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_Position);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->PositionBinding).RootName = pFVar4->RootName;
  (this->PositionBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->PositionBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->PositionBinding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_Color);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->ColorBinding).RootName = pFVar4->RootName;
  (this->ColorBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->ColorBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->ColorBinding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_Velocity);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->VelocityBinding).RootName = pFVar4->RootName;
  (this->VelocityBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->VelocityBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->VelocityBinding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,
                      (FNiagaraVariableBase *)&INiagaraModule::Particles_DynamicMaterialParameter);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->DynamicMaterialBinding).RootName = pFVar4->RootName;
  (this->DynamicMaterialBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->DynamicMaterialBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->DynamicMaterialBinding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,
                      (FNiagaraVariableBase *)&INiagaraModule::Particles_DynamicMaterialParameter1);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->DynamicMaterial1Binding).RootName = pFVar4->RootName;
  (this->DynamicMaterial1Binding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->DynamicMaterial1Binding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->DynamicMaterial1Binding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,
                      (FNiagaraVariableBase *)&INiagaraModule::Particles_DynamicMaterialParameter2);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->DynamicMaterial2Binding).RootName = pFVar4->RootName;
  (this->DynamicMaterial2Binding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->DynamicMaterial2Binding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->DynamicMaterial2Binding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,
                      (FNiagaraVariableBase *)&INiagaraModule::Particles_DynamicMaterialParameter3);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->DynamicMaterial3Binding).RootName = pFVar4->RootName;
  (this->DynamicMaterial3Binding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->DynamicMaterial3Binding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->DynamicMaterial3Binding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_NormalizedAge);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->NormalizedAgeBinding).RootName = pFVar4->RootName;
  (this->NormalizedAgeBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->NormalizedAgeBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->NormalizedAgeBinding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_RibbonTwist);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->RibbonTwistBinding).RootName = pFVar4->RootName;
  (this->RibbonTwistBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->RibbonTwistBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->RibbonTwistBinding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_RibbonWidth);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->RibbonWidthBinding).RootName = pFVar4->RootName;
  (this->RibbonWidthBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->RibbonWidthBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->RibbonWidthBinding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_RibbonFacing);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->RibbonFacingBinding).RootName = pFVar4->RootName;
  (this->RibbonFacingBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->RibbonFacingBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->RibbonFacingBinding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_RibbonID);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->RibbonIdBinding).RootName = pFVar4->RootName;
  (this->RibbonIdBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->RibbonIdBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->RibbonIdBinding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_RibbonLinkOrder);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->RibbonLinkOrderBinding).RootName = pFVar4->RootName;
  (this->RibbonLinkOrderBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->RibbonLinkOrderBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->RibbonLinkOrderBinding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_MaterialRandom);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->MaterialRandomBinding).RootName = pFVar4->RootName;
  (this->MaterialRandomBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->MaterialRandomBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->MaterialRandomBinding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_RibbonUVDistance)
  ;
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->RibbonUVDistance).RootName = pFVar4->RootName;
  (this->RibbonUVDistance).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->RibbonUVDistance).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->RibbonUVDistance).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_RibbonU0Override)
  ;
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->U0OverrideBinding).RootName = pFVar4->RootName;
  (this->U0OverrideBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->U0OverrideBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->U0OverrideBinding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,
                      (FNiagaraVariableBase *)&INiagaraModule::Particles_RibbonV0RangeOverride);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->V0RangeOverrideBinding).RootName = pFVar4->RootName;
  (this->V0RangeOverrideBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->V0RangeOverrideBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->V0RangeOverrideBinding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_RibbonU1Override)
  ;
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->U1OverrideBinding).RootName = pFVar4->RootName;
  (this->U1OverrideBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->U1OverrideBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->U1OverrideBinding).DataSetName.Number = uVar2;
  pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,
                      (FNiagaraVariableBase *)&INiagaraModule::Particles_RibbonV1RangeOverride);
  FVar1 = (pFVar4->ParamMapVariable).Name;
  (this->V1RangeOverrideBinding).RootName = pFVar4->RootName;
  (this->V1RangeOverrideBinding).ParamMapVariable.Name = FVar1;
  uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
  *(undefined8 *)&(this->V1RangeOverrideBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->V1RangeOverrideBinding).DataSetName.Number = uVar2;
LAB_1493a8dbf:
  local_28.RootName.ComparisonIndex.Value = 0;
  local_28.RootName.Number = 0;
  local_28.ParamMapVariable.Name.ComparisonIndex.Value = 0;
  local_28.ParamMapVariable.Name.Number = 0;
  local_28.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = 0;
  local_28.DataSetName.ComparisonIndex.Value = 0;
  SetPreviousBindings(this,(FVersionedNiagaraEmitterBase *)&local_28);
  return;
}

// InitCDOPropertiesAfterModuleStartup @ 1493a8df0

void __cdecl UNiagaraRibbonRendererProperties::InitCDOPropertiesAfterModuleStartup(void)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UNiagaraRibbonRendererProperties *pUVar5;
  FString *pFVar6;
  ulonglong uVar7;
  ForAnyElementType this;
  wchar_t *pwVar8;
  wchar_t *pwVar9;
  undefined1 local_res8 [8];
  FString local_28;
  FString local_18;
  
  pUVar3 = StaticClass();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pUVar5 = (UNiagaraRibbonRendererProperties *)(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar5 != (UNiagaraRibbonRendererProperties *)0x0) {
    pUVar3 = StaticClass();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) {
      InitBindings(pUVar5);
      iVar2 = NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit.
              ArrayNum;
      uVar7 = (ulonglong)
              NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit.
              ArrayNum;
      pFVar1 = (FWeakObjectPtr *)
               (NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit.
                AllocatorInstance.Data + uVar7 * 8);
      this = NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit.
             AllocatorInstance;
      while( true ) {
        if ((int)uVar7 != iVar2) {
          `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraRibbonRendererProperties,FWeakObjectPtr>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((FWeakObjectPtr *)this.Data == pFVar1) break;
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
        if (pUVar4 != (UObject *)0x0) {
          pUVar5 = (UNiagaraRibbonRendererProperties *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
          InitBindings(pUVar5);
        }
        uVar7 = (ulonglong)
                (uint)NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit
                      .ArrayNum;
        this.Data = this.Data + 8;
      }
      return;
    }
    pFVar6 = GetTypeName<UNiagaraRibbonRendererProperties>(&local_28);
    pwVar8 = L"";
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar9 = L"";
    }
    else {
      pwVar9 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    pFVar6 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar5);
    if ((pFVar6->Data).ArrayNum != 0) {
      pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar8,pwVar9);
  }
  pFVar6 = GetTypeName<UNiagaraRibbonRendererProperties>(&local_28);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar8);
}

// IsBackfaceCullingDisabled @ 1493aa3f0

bool __thiscall
UNiagaraRibbonRendererProperties::IsBackfaceCullingDisabled(UNiagaraRibbonRendererProperties *this)

{
  if (this->Shape == MultiPlane) {
    return (bool)(~this->bEnableAccurateGeometry & 1);
  }
  return true;
}

// IsSimTargetSupported @ 1493aa640

bool __thiscall
UNiagaraRibbonRendererProperties::IsSimTargetSupported
          (UNiagaraRibbonRendererProperties *this,ENiagaraSimTarget param_1)

{
  return true;
}

// NeedsMIDsForMaterials @ 1493ab030

bool __thiscall
UNiagaraRibbonRendererProperties::NeedsMIDsForMaterials(UNiagaraRibbonRendererProperties *this)

{
  if (((((this->MaterialParameters).AttributeBindings.ArrayNum < 1) &&
       ((this->MaterialParameters).ScalarParameters.ArrayNum < 1)) &&
      ((this->MaterialParameters).VectorParameters.ArrayNum < 1)) &&
     ((this->MaterialParameters).TextureParameters.ArrayNum < 1)) {
    return false;
  }
  return true;
}

// PopulateRequiredBindings @ 1493ab410

bool __thiscall
UNiagaraRibbonRendererProperties::PopulateRequiredBindings
          (UNiagaraRibbonRendererProperties *this,FNiagaraParameterStore *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FNiagaraVariableBase *pFVar6;
  longlong *plVar7;
  FNiagaraMaterialAttributeBinding *this_00;
  FNiagaraMaterialAttributeBinding *pFVar8;
  undefined1 local_res8 [8];
  FName local_48;
  int local_40;
  void *local_38;
  undefined8 local_30;
  
  bVar5 = UNiagaraRendererProperties::PopulateRequiredBindings
                    ((UNiagaraRendererProperties *)this,param_1);
  plVar7 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar7 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<FNiagaraVariableAttributeBinding_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar7 == plVar1) break;
    lVar3 = *plVar7;
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x1d) & 3) == 1)) {
      local_40 = *(int *)(lVar3 + 0x10);
      local_48 = *(FName *)(lVar3 + 8);
      local_38 = (void *)0x0;
      local_30 = 0;
      (**(code **)(param_1->_padding_ + 0x10))(param_1,&local_48,0,1,0);
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      bVar5 = true;
    }
    plVar7 = plVar7 + 1;
  }
  iVar2 = (this->MaterialParameters).AttributeBindings.ArrayNum;
  this_00 = (FNiagaraMaterialAttributeBinding *)
            (this->MaterialParameters).AttributeBindings.AllocatorInstance.Data;
  pFVar8 = this_00 + iVar2;
  while( true ) {
    if ((this->MaterialParameters).AttributeBindings.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraMaterialAttributeBinding,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar8) break;
    pcVar4 = *(code **)(param_1->_padding_ + 0x10);
    pFVar6 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_00);
    local_48 = pFVar6->Name;
    local_40 = (pFVar6->TypeDefHandle).RegisteredTypeIndex;
    local_38 = (void *)0x0;
    local_30 = 0;
    (*pcVar4)(param_1,&local_48,0,1,0);
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    bVar5 = true;
    this_00 = this_00 + 1;
  }
  return bVar5;
}

// PostInitProperties @ 1493ab580

void __thiscall
UNiagaraRibbonRendererProperties::PostInitProperties(UNiagaraRibbonRendererProperties *this)

{
  code *pcVar1;
  bool bVar2;
  FModuleManager *this_00;
  FName *pFVar3;
  longlong lVar4;
  UNiagaraRibbonRendererProperties *local_res8;
  FName local_res10;
  FWeakObjectPtr local_18 [2];
  
  UNiagaraRendererProperties::PostInitProperties((UNiagaraRendererProperties *)this);
  if ((this->_padding_ & 0x10) != 0) {
    return;
  }
  this_00 = FModuleManager::Get();
  pFVar3 = ::FName::FName(&local_res10,"Niagara");
  bVar2 = FModuleManager::IsModuleLoaded(this_00,*pFVar3);
  if (bVar2) {
    InitBindings(this);
    return;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  local_18[0].ObjectIndex = 0;
  local_18[0].ObjectSerialNumber = 0;
  local_res8 = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  FWeakObjectPtr::operator=(local_18,(FObjectPtr)&local_res8);
  if (((NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit.
        AllocatorInstance.Data <= local_18) &&
      (local_18 <
       (FWeakObjectPtr *)
       (NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit.
        AllocatorInstance.Data +
       (longlong)
       NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit.ArrayMax * 8))
      ) && (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit.ArrayNum ==
      NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit.ArrayMax) {
    NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&NiagaraRibbonRendererPropertiesPrivate::
                           RibbonRendererPropertiesToDeferredInit.AllocatorInstance,
                    &NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit.
                     ArrayMax);
  }
  lVar4 = (longlong)
          NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit.ArrayNum;
  NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit.ArrayNum =
       NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit.ArrayNum + 1;
  *(FWeakObjectPtr *)
   (NiagaraRibbonRendererPropertiesPrivate::RibbonRendererPropertiesToDeferredInit.AllocatorInstance
    .Data + lVar4 * 8) = local_18[0];
  return;
}

// PostLoad @ 1493ab710

void __thiscall UNiagaraRibbonRendererProperties::PostLoad(UNiagaraRibbonRendererProperties *this)

{
  UMaterialInterface *this_00;
  FVersionedNiagaraEmitterBase local_28;
  
  UNiagaraRendererProperties::PostLoad((UNiagaraRendererProperties *)this);
  (**(code **)(this->_padding_ + 0x350))(this,0);
  local_28.Emitter = (UNiagaraEmitterBase *)0x0;
  local_28.Version.A = 0;
  local_28.Version.B = 0;
  local_28.Version.C = 0;
  local_28.Version.D = 0;
  SetPreviousBindings(this,&local_28);
  this_00 = (this->Material).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialInterface *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
  }
  FNiagaraRendererMaterialParameters::ConditionalPostLoad(&this->MaterialParameters);
  return;
}

// Serialize @ 1493b5790

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraRibbonRendererProperties::Serialize
          (UNiagaraRibbonRendererProperties *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1d8 [32];
  FSlotBase local_1b8 [2];
  FStructuredArchiveFromArchive local_1a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1d8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a8,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  local_1b8[0].StructuredArchive = *(FStructuredArchive **)FVar1;
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_1b8);
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)local_1b8[0].StructuredArchive);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a8);
  return;
}

// Serialize @ 1493b5810

void __thiscall
UNiagaraRibbonRendererProperties::Serialize
          (UNiagaraRibbonRendererProperties *this,FStructuredArchiveRecord param_1)

{
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)local_res10[0].StructuredArchive);
  return;
}

// SetPreviousBindings @ 1493b6bf0

void __thiscall
UNiagaraRibbonRendererProperties::SetPreviousBindings
          (UNiagaraRibbonRendererProperties *this,FVersionedNiagaraEmitterBase *param_1)

{
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevPositionBinding,&this->PositionBinding,param_1,Particles);
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevRibbonWidthBinding,&this->RibbonWidthBinding,param_1,Particles);
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevRibbonFacingBinding,&this->RibbonFacingBinding,param_1,Particles);
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevRibbonTwistBinding,&this->RibbonTwistBinding,param_1,Particles);
  return;
}

// StaticRegisterNativesUNiagaraRibbonRendererProperties @ 1493b75c0

void __cdecl
UNiagaraRibbonRendererProperties::StaticRegisterNativesUNiagaraRibbonRendererProperties(void)

{
  return;
}

// UpdateMICs @ 1493bc670

void __thiscall UNiagaraRibbonRendererProperties::UpdateMICs(UNiagaraRibbonRendererProperties *this)

{
  return;
}

// UpdateSourceModeDerivates @ 1493bc680

void __thiscall
UNiagaraRibbonRendererProperties::UpdateSourceModeDerivates
          (UNiagaraRibbonRendererProperties *this,ENiagaraRendererSourceDataMode param_1,
          bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  UNiagaraEmitterBase *pUVar3;
  FNiagaraMaterialAttributeBinding *this_00;
  FNiagaraMaterialAttributeBinding *pFVar4;
  undefined1 local_res20 [8];
  
  pUVar2 = Z_Construct_UClass_UNiagaraEmitterBase_NoRegister();
  pUVar3 = (UNiagaraEmitterBase *)
           UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)this,pUVar2);
  if (pUVar3 != (UNiagaraEmitterBase *)0x0) {
    this_00 = (FNiagaraMaterialAttributeBinding *)
              (this->MaterialParameters).AttributeBindings.AllocatorInstance.Data;
    iVar1 = (this->MaterialParameters).AttributeBindings.ArrayNum;
    pFVar4 = this_00 + iVar1;
    while( true ) {
      if ((this->MaterialParameters).AttributeBindings.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNiagaraMaterialAttributeBinding,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (this_00 == pFVar4) break;
      FNiagaraMaterialAttributeBinding::CacheValues(this_00,pUVar3);
      this_00 = this_00 + 1;
    }
  }
  UNiagaraRendererProperties::UpdateSourceModeDerivates
            ((UNiagaraRendererProperties *)this,param_1,param_2);
  return;
}

