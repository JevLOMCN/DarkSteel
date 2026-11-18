// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraNanite
// Functions: 26

// StaticClass @ 14da3dfc0

UClass * __cdecl UNiagaraNaniteRendererProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraNaniteRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraNanite",L"NiagaraNaniteRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraNaniteRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraNaniteRendererProperties,0x2b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraNaniteRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraNaniteRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraNaniteRendererProperties.InnerSingleton;
}

// UNiagaraNaniteRendererProperties @ 14da40190

UNiagaraNaniteRendererProperties * __thiscall
UNiagaraNaniteRendererProperties::UNiagaraNaniteRendererProperties
          (UNiagaraNaniteRendererProperties *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  UNiagaraRendererProperties::UNiagaraRendererProperties((UNiagaraRendererProperties *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UNiagaraNaniteRendererProperties__6B_;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (this->MICOverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MICOverrideMaterials).ArrayNum = 0;
  (this->MICOverrideMaterials).ArrayMax = 0;
  *(undefined8 *)&(this->PositionBinding).RootName.Number = 0;
  this->SourceMode = Particles;
  this->RendererVisibility = 0;
  (this->PositionBinding).RootName.ComparisonIndex = 0;
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
  (this->RotationBinding).RootName.ComparisonIndex = 0;
  (this->RotationBinding).RootName.Number = 0;
  (this->RotationBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RotationBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RotationBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RotationBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->RotationBinding).bBindingExistsOnSource = '\0';
  (this->RotationBinding).bIsCachedParticleValue = '\x01';
  (this->RotationBinding).DataSetName.ComparisonIndex = 0;
  (this->RotationBinding).DataSetName.Number = 0;
  (this->RotationBinding).BindingSourceMode.Value = '\0';
  (this->ScaleBinding).RootName.ComparisonIndex = 0;
  (this->ScaleBinding).RootName.Number = 0;
  (this->ScaleBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->ScaleBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->ScaleBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->ScaleBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->ScaleBinding).bBindingExistsOnSource = '\0';
  (this->ScaleBinding).bIsCachedParticleValue = '\x01';
  (this->ScaleBinding).DataSetName.ComparisonIndex = 0;
  (this->ScaleBinding).DataSetName.Number = 0;
  (this->ScaleBinding).BindingSourceMode.Value = '\0';
  (this->RendererVisibilityTagBinding).RootName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).RootName.Number = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->RendererVisibilityTagBinding).bBindingExistsOnSource = '\0';
  (this->RendererVisibilityTagBinding).bIsCachedParticleValue = '\x01';
  (this->RendererVisibilityTagBinding).DataSetName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).DataSetName.Number = 0;
  (this->RendererVisibilityTagBinding).BindingSourceMode.Value = '\0';
  (this->MeshIndexBinding).RootName.ComparisonIndex = 0;
  (this->MeshIndexBinding).RootName.Number = 0;
  (this->MeshIndexBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->MeshIndexBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->MeshIndexBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->MeshIndexBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->MeshIndexBinding).bBindingExistsOnSource = '\0';
  (this->MeshIndexBinding).bIsCachedParticleValue = '\x01';
  (this->MeshIndexBinding).DataSetName.ComparisonIndex = 0;
  (this->MeshIndexBinding).DataSetName.Number = 0;
  (this->MeshIndexBinding).BindingSourceMode.Value = '\0';
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
  (this->PerInstanceDataBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstanceDataBindings).ArrayNum = 0;
  (this->PerInstanceDataBindings).ArrayMax = 0;
  (this->PerInstanceDataFloatComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstanceDataFloatComponents).ArrayNum = 0;
  (this->PerInstanceDataFloatComponents).ArrayMax = 0;
  (this->PreviousPositionBinding).RootName.ComparisonIndex = 0;
  (this->PreviousPositionBinding).RootName.Number = 0;
  (this->PreviousPositionBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PreviousPositionBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PreviousPositionBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousPositionBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PreviousPositionBinding).bBindingExistsOnSource = '\0';
  (this->PreviousPositionBinding).bIsCachedParticleValue = '\x01';
  (this->PreviousPositionBinding).DataSetName.ComparisonIndex = 0;
  (this->PreviousPositionBinding).DataSetName.Number = 0;
  (this->PreviousPositionBinding).BindingSourceMode.Value = '\0';
  (this->PreviousRotationBinding).RootName.ComparisonIndex = 0;
  (this->PreviousRotationBinding).RootName.Number = 0;
  (this->PreviousRotationBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PreviousRotationBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PreviousRotationBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousRotationBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PreviousRotationBinding).bBindingExistsOnSource = '\0';
  (this->PreviousRotationBinding).bIsCachedParticleValue = '\x01';
  (this->PreviousRotationBinding).DataSetName.ComparisonIndex = 0;
  (this->PreviousRotationBinding).DataSetName.Number = 0;
  (this->PreviousRotationBinding).BindingSourceMode.Value = '\0';
  (this->PreviousScaleBinding).RootName.ComparisonIndex = 0;
  (this->PreviousScaleBinding).RootName.Number = 0;
  (this->PreviousScaleBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PreviousScaleBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PreviousScaleBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousScaleBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PreviousScaleBinding).bBindingExistsOnSource = '\0';
  (this->PreviousScaleBinding).bIsCachedParticleValue = '\x01';
  (this->PreviousScaleBinding).DataSetName.ComparisonIndex = 0;
  (this->PreviousScaleBinding).DataSetName.Number = 0;
  (this->PreviousScaleBinding).BindingSourceMode.Value = '\0';
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
  *(undefined1 *)&this->PositionDataSetAccessor = 1;
  *(undefined4 *)&(this->PositionDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->RotationDataSetAccessor = 1;
  *(undefined4 *)&(this->RotationDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ScaleDataSetAccessor = 1;
  *(undefined8 *)&(this->ScaleDataSetAccessor).field_0x4 = 0xffffffffffffffff;
  this->MeshIndexDataSetAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  *(undefined1 *)&this->PreviousPositionDataSetAccessor = 1;
  *(undefined4 *)&(this->PreviousPositionDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->PreviousRotationDataSetAccessor = 1;
  *(undefined4 *)&(this->PreviousRotationDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->PreviousScaleDataSetAccessor = 1;
  *(undefined4 *)&(this->PreviousScaleDataSetAccessor).field_0x4 = 0xffffffff;
  return this;
}

// UNiagaraNaniteRendererProperties @ 14da40520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UNiagaraNaniteRendererProperties * __thiscall
UNiagaraNaniteRendererProperties::UNiagaraNaniteRendererProperties
          (UNiagaraNaniteRendererProperties *this)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int *piVar3;
  FNiagaraVariableAttributeBinding *pFVar4;
  FNiagaraVariableAttributeBinding *pFVar5;
  FNiagaraVariableAttributeBinding *pFVar6;
  FNiagaraVariableAttributeBinding *pFVar7;
  FNiagaraVariableAttributeBinding *pFVar8;
  longlong *plVar9;
  int iVar10;
  FNiagaraVariableAttributeBinding *pFVar11;
  FNiagaraVariableAttributeBinding *pFVar12;
  
  UNiagaraMergeable::UNiagaraMergeable((UNiagaraMergeable *)this);
  this->_padding_ = (longlong)&___7UNiagaraRendererProperties__6B_;
  FNiagaraPlatformSet::FNiagaraPlatformSet((FNiagaraPlatformSet *)&this->_padding_);
  *(undefined2 *)((longlong)&this->_padding_ + 5) = 0x101;
  this->_padding_ = 0;
  this->_padding_ = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)&this->_padding_,
                      &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this->_padding_ = iVar10;
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
  this->_padding_ = (longlong)&___7UNiagaraNaniteRendererProperties__6B_;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  this->SourceMode = Particles;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (this->MICOverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MICOverrideMaterials).ArrayNum = 0;
  (this->MICOverrideMaterials).ArrayMax = 0;
  this->RendererVisibility = 0;
  (this->PositionBinding).RootName.ComparisonIndex = 0;
  (this->PositionBinding).RootName.Number = 0;
  (this->PositionBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PositionBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PositionBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PositionBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  pFVar4 = &this->RotationBinding;
  (this->PositionBinding).bBindingExistsOnSource = '\0';
  (this->PositionBinding).bIsCachedParticleValue = '\x01';
  (this->PositionBinding).DataSetName.ComparisonIndex = 0;
  (this->PositionBinding).DataSetName.Number = 0;
  (this->PositionBinding).BindingSourceMode.Value = '\0';
  (pFVar4->RootName).ComparisonIndex = 0;
  (pFVar4->RootName).Number = 0;
  (this->RotationBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RotationBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->RotationBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->RotationBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  pFVar5 = &this->ScaleBinding;
  (this->RotationBinding).bBindingExistsOnSource = '\0';
  (this->RotationBinding).bIsCachedParticleValue = '\x01';
  (this->RotationBinding).DataSetName.ComparisonIndex = 0;
  (this->RotationBinding).DataSetName.Number = 0;
  (this->RotationBinding).BindingSourceMode.Value = '\0';
  (pFVar5->RootName).ComparisonIndex = 0;
  (pFVar5->RootName).Number = 0;
  (this->ScaleBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->ScaleBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->ScaleBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->ScaleBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  pFVar6 = &this->RendererVisibilityTagBinding;
  (this->ScaleBinding).bBindingExistsOnSource = '\0';
  (this->ScaleBinding).bIsCachedParticleValue = '\x01';
  (this->ScaleBinding).DataSetName.ComparisonIndex = 0;
  (this->ScaleBinding).DataSetName.Number = 0;
  (this->ScaleBinding).BindingSourceMode.Value = '\0';
  (pFVar6->RootName).ComparisonIndex = 0;
  (pFVar6->RootName).Number = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  pFVar7 = &this->MeshIndexBinding;
  (this->RendererVisibilityTagBinding).bBindingExistsOnSource = '\0';
  (this->RendererVisibilityTagBinding).bIsCachedParticleValue = '\x01';
  (this->RendererVisibilityTagBinding).DataSetName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).DataSetName.Number = 0;
  (this->RendererVisibilityTagBinding).BindingSourceMode.Value = '\0';
  (pFVar7->RootName).ComparisonIndex = 0;
  (pFVar7->RootName).Number = 0;
  (this->MeshIndexBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->MeshIndexBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->MeshIndexBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->MeshIndexBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->MeshIndexBinding).bBindingExistsOnSource = '\0';
  (this->MeshIndexBinding).bIsCachedParticleValue = '\x01';
  (this->MeshIndexBinding).DataSetName.ComparisonIndex = 0;
  (this->MeshIndexBinding).DataSetName.Number = 0;
  (this->MeshIndexBinding).BindingSourceMode.Value = '\0';
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
  (this->PerInstanceDataBindings).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstanceDataBindings).ArrayNum = 0;
  (this->PerInstanceDataBindings).ArrayMax = 0;
  (this->PerInstanceDataFloatComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerInstanceDataFloatComponents).ArrayNum = 0;
  (this->PerInstanceDataFloatComponents).ArrayMax = 0;
  pFVar8 = &this->PreviousPositionBinding;
  (pFVar8->RootName).ComparisonIndex = 0;
  (pFVar8->RootName).Number = 0;
  (this->PreviousPositionBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PreviousPositionBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PreviousPositionBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousPositionBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->PreviousPositionBinding).bBindingExistsOnSource = '\0';
  pFVar11 = &this->PreviousRotationBinding;
  (this->PreviousPositionBinding).bIsCachedParticleValue = '\x01';
  (this->PreviousPositionBinding).DataSetName.ComparisonIndex = 0;
  (this->PreviousPositionBinding).DataSetName.Number = 0;
  (this->PreviousPositionBinding).BindingSourceMode.Value = '\0';
  (pFVar11->RootName).ComparisonIndex = 0;
  (pFVar11->RootName).Number = 0;
  (this->PreviousRotationBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PreviousRotationBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PreviousRotationBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousRotationBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->PreviousRotationBinding).bBindingExistsOnSource = '\0';
  (this->PreviousRotationBinding).bIsCachedParticleValue = '\x01';
  (this->PreviousRotationBinding).DataSetName.ComparisonIndex = 0;
  (this->PreviousRotationBinding).DataSetName.Number = 0;
  (this->PreviousRotationBinding).BindingSourceMode.Value = '\0';
  pFVar12 = &this->PreviousScaleBinding;
  (pFVar12->RootName).ComparisonIndex = 0;
  (pFVar12->RootName).Number = 0;
  (this->PreviousScaleBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PreviousScaleBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PreviousScaleBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PreviousScaleBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->PreviousScaleBinding).bBindingExistsOnSource = '\0';
  (this->PreviousScaleBinding).bIsCachedParticleValue = '\x01';
  (this->PreviousScaleBinding).DataSetName.ComparisonIndex = 0;
  (this->PreviousScaleBinding).DataSetName.Number = 0;
  (this->PreviousScaleBinding).BindingSourceMode.Value = '\0';
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
  *(undefined1 *)&this->PositionDataSetAccessor = 1;
  *(undefined4 *)&(this->PositionDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->RotationDataSetAccessor = 1;
  *(undefined4 *)&(this->RotationDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ScaleDataSetAccessor = 1;
  *(undefined8 *)&(this->ScaleDataSetAccessor).field_0x4 = 0xffffffffffffffff;
  this->MeshIndexDataSetAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  *(undefined1 *)&this->PreviousPositionDataSetAccessor = 1;
  *(undefined4 *)&(this->PreviousPositionDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->PreviousRotationDataSetAccessor = 1;
  *(undefined4 *)&(this->PreviousRotationDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->PreviousScaleDataSetAccessor = 1;
  *(undefined4 *)&(this->PreviousScaleDataSetAccessor).field_0x4 = 0xffffffff;
  piVar3 = (int *)((longlong)&this->_padding_ + 4);
  iVar10 = *piVar3;
  *(undefined4 *)&this->_padding_ = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,8,iVar10,(ForAnyElementType *)&this->_padding_,8,piVar3);
  plVar9 = (longlong *)this->_padding_;
  *plVar9 = (longlong)&this->PositionBinding;
  plVar9[1] = (longlong)pFVar4;
  plVar9[2] = (longlong)pFVar5;
  plVar9[3] = (longlong)pFVar8;
  plVar9[4] = (longlong)pFVar11;
  plVar9[5] = (longlong)pFVar12;
  plVar9[6] = (longlong)pFVar6;
  plVar9[7] = (longlong)pFVar7;
  return this;
}

// ~UNiagaraNaniteRendererProperties @ 14da40c20

void __thiscall
UNiagaraNaniteRendererProperties::~UNiagaraNaniteRendererProperties
          (UNiagaraNaniteRendererProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraNaniteRendererProperties__6B_;
  pFVar1 = (this->RendererLayout).VFVariables_RT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayout).VFVariables_GT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerInstanceDataFloatComponents).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PerInstanceDataBindings).AllocatorInstance.Data;
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
  pFVar1 = (this->MICOverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraNaniteMaterialOverride,int>
            ((FNiagaraNaniteMaterialOverride *)(this->OverrideMaterials).AllocatorInstance.Data,
             (this->OverrideMaterials).ArrayNum);
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Meshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraRendererProperties::~UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  return;
}

// ApplyMaterialOverrides @ 14da41570

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
UNiagaraNaniteRendererProperties::ApplyMaterialOverrides
          (UNiagaraNaniteRendererProperties *this,FNiagaraEmitterInstance *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FNiagaraTypeDefinition *pFVar6;
  TObjectPtr<UObject> this_00;
  UClass *pUVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  FScriptContainerElement *pFVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 local_res8 [8];
  
  if (this->bOverrideMaterials != 0) {
    iVar1 = (this->OverrideMaterials).ArrayNum;
    uVar10 = 0;
    iVar14 = param_2->ArrayNum;
    if (iVar1 < param_2->ArrayNum) {
      iVar14 = iVar1;
    }
    if (0 < iVar14) {
      lVar15 = 0;
      lVar16 = 0;
      do {
        uVar13 = ~uVar10 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar10 < param_2->ArrayNum) {
          uVar5 = uVar13;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (*(longlong *)((param_2->AllocatorInstance).Data + lVar15 * 8) != 0) {
          if (param_1 == (FNiagaraEmitterInstance *)0x0) {
LAB_14da41728:
            uVar5 = 0;
            if ((int)uVar10 < (this->OverrideMaterials).ArrayNum) {
              uVar5 = uVar13;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            lVar12 = *(longlong *)((this->OverrideMaterials).AllocatorInstance.Data + lVar16);
            if (lVar12 == 0) goto LAB_14da417ce;
          }
          else {
            uVar5 = 0;
            if ((int)uVar10 < (this->OverrideMaterials).ArrayNum) {
              uVar5 = uVar13;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pFVar2 = (this->OverrideMaterials).AllocatorInstance.Data;
            if ((*(longlong *)(pFVar2 + lVar16 + 8) == 0) ||
               (pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                                   ((FNiagaraTypeDefinitionHandle *)(pFVar2 + lVar16 + 0x10)),
               (pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0))
            goto LAB_14da41728;
            uVar5 = 0;
            if ((int)uVar10 < (this->OverrideMaterials).ArrayNum) {
              uVar5 = uVar13;
            }
            if ((uVar5 == 0) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            this_00 = FNiagaraEmitterInstance::FindBinding
                                (param_1,(FNiagaraVariable *)&stack0xffffffffffffffb8);
            if (*(longlong *)this_00.field0_0x0 == 0) goto LAB_14da41728;
            pUVar7 = Z_Construct_UClass_UMaterialInterface_NoRegister();
            bVar4 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar7);
            if ((!bVar4) || (lVar12 = *(longlong *)this_00.field0_0x0, lVar12 == 0))
            goto LAB_14da41728;
          }
          uVar5 = 0;
          if ((int)uVar10 < param_2->ArrayNum) {
            uVar5 = uVar13;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(longlong *)((param_2->AllocatorInstance).Data + lVar15 * 8) = lVar12;
        }
LAB_14da417ce:
        uVar10 = uVar10 + 1;
        lVar15 = lVar15 + 1;
        lVar16 = lVar16 + 0x28;
      } while (lVar15 < iVar14);
    }
  }
  if (0 < (this->MICOverrideMaterials).ArrayNum) {
    pFVar11 = (param_2->AllocatorInstance).Data;
    iVar1 = param_2->ArrayNum;
    pFVar2 = pFVar11 + (longlong)iVar1 * 8;
    while( true ) {
      if (param_2->ArrayNum != iVar1) {
        `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar11 == pFVar2) break;
      pFVar8 = (this->MICOverrideMaterials).AllocatorInstance.Data;
      pFVar9 = pFVar8 + (longlong)(this->MICOverrideMaterials).ArrayNum * 0x10;
      if (pFVar8 == pFVar9) {
LAB_14da41874:
        pFVar11 = pFVar11 + 8;
      }
      else {
        do {
          if (*(longlong *)pFVar8 == 0) {
            bVar4 = *(longlong *)pFVar11 == 0;
          }
          else {
            bVar4 = *(longlong *)pFVar8 == *(longlong *)pFVar11;
          }
          if (bVar4) {
            *(longlong *)pFVar11 = *(longlong *)(pFVar8 + 8);
            goto LAB_14da41874;
          }
          pFVar8 = pFVar8 + 0x10;
        } while (pFVar8 != pFVar9);
        pFVar11 = pFVar11 + 8;
      }
    }
  }
  return;
}

// CacheFromCompiledData @ 14da418a0

void __thiscall
UNiagaraNaniteRendererProperties::CacheFromCompiledData
          (UNiagaraNaniteRendererProperties *this,FNiagaraDataSetCompiledData *param_1)

{
  int *piVar1;
  FNiagaraRendererLayout *this_00;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  FName *pFVar3;
  uint uVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  FNiagaraTypeDefinition *pFVar10;
  FName *pFVar11;
  longlong lVar12;
  undefined1 local_res8 [8];
  FNiagaraRendererVariableInfo local_res18 [2];
  int local_68 [2];
  FNiagaraVariableBase local_60;
  TStringView<wchar_t> local_50;
  
  (**(code **)(this->_padding_ + 0x358))(this,this->SourceMode,0);
  this_00 = &this->RendererLayout;
  FNiagaraRendererLayout::Initialize(this_00,6);
  FNiagaraRendererLayout::SetVariableFromBinding(this_00,param_1,&this->PositionBinding,0);
  FNiagaraRendererLayout::SetVariableFromBinding(this_00,param_1,&this->RotationBinding,1);
  FNiagaraRendererLayout::SetVariableFromBinding(this_00,param_1,&this->ScaleBinding,2);
  FNiagaraRendererLayout::SetVariableFromBinding(this_00,param_1,&this->PreviousPositionBinding,3);
  FNiagaraRendererLayout::SetVariableFromBinding(this_00,param_1,&this->PreviousRotationBinding,4);
  FNiagaraRendererLayout::SetVariableFromBinding(this_00,param_1,&this->PreviousScaleBinding,5);
  FNiagaraRendererLayout::Finalize(this_00);
  UNiagaraRendererProperties::
  InitParticleDataSetAccessor<FNiagaraDataSetAccessor<FNiagaraPosition>_>
            ((UNiagaraRendererProperties *)this,&this->PositionDataSetAccessor,param_1,
             &this->PositionBinding);
  UNiagaraRendererProperties::
  InitParticleDataSetAccessor<FNiagaraDataSetAccessor<UE::Math::TQuat<float>_>_>
            ((UNiagaraRendererProperties *)this,&this->RotationDataSetAccessor,param_1,
             &this->RotationBinding);
  UNiagaraRendererProperties::
  InitParticleDataSetAccessor<FNiagaraDataSetAccessor<UE::Math::TVector<float>_>_>
            ((UNiagaraRendererProperties *)this,&this->ScaleDataSetAccessor,param_1,
             &this->ScaleBinding);
  bVar8 = UNiagaraRendererProperties::NeedsPreciseMotionVectors((UNiagaraRendererProperties *)this);
  lVar12 = 0x1f0;
  if (!bVar8) {
    lVar12 = 0xdc;
  }
  UNiagaraRendererProperties::
  InitParticleDataSetAccessor<FNiagaraDataSetAccessor<FNiagaraPosition>_>
            ((UNiagaraRendererProperties *)this,&this->PreviousPositionDataSetAccessor,param_1,
             (FNiagaraVariableAttributeBinding *)((longlong)&this->_padding_ + lVar12));
  lVar12 = 0x210;
  if (!bVar8) {
    lVar12 = 0xfc;
  }
  UNiagaraRendererProperties::
  InitParticleDataSetAccessor<FNiagaraDataSetAccessor<UE::Math::TQuat<float>_>_>
            ((UNiagaraRendererProperties *)this,&this->PreviousRotationDataSetAccessor,param_1,
             (FNiagaraVariableAttributeBinding *)((longlong)&this->_padding_ + lVar12));
  lVar12 = 0x230;
  if (!bVar8) {
    lVar12 = 0x11c;
  }
  UNiagaraRendererProperties::
  InitParticleDataSetAccessor<FNiagaraDataSetAccessor<UE::Math::TVector<float>_>_>
            ((UNiagaraRendererProperties *)this,&this->PreviousScaleDataSetAccessor,param_1,
             (FNiagaraVariableAttributeBinding *)((longlong)&this->_padding_ + lVar12));
  UNiagaraRendererProperties::InitParticleDataSetAccessor<FNiagaraDataSetAccessor<int>_>
            ((UNiagaraRendererProperties *)this,&this->RendererVisTagDataSetAccessor,param_1,
             &this->RendererVisibilityTagBinding);
  UNiagaraRendererProperties::InitParticleDataSetAccessor<FNiagaraDataSetAccessor<int>_>
            ((UNiagaraRendererProperties *)this,&this->MeshIndexDataSetAccessor,param_1,
             &this->MeshIndexBinding);
  uVar4 = (this->PerInstanceDataBindings).ArrayNum;
  pTVar2 = &this->PerInstanceDataFloatComponents;
  if (-1 < (int)uVar4) {
    piVar1 = &(this->PerInstanceDataFloatComponents).ArrayMax;
    (this->PerInstanceDataFloatComponents).ArrayNum = 0;
    if (*piVar1 != uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar4,&pTVar2->AllocatorInstance,0,piVar1);
    }
    iVar5 = (this->PerInstanceDataBindings).ArrayNum;
    pFVar11 = (FName *)(this->PerInstanceDataBindings).AllocatorInstance.Data;
    pFVar3 = (FName *)((longlong)pFVar11 + (longlong)iVar5 * 0x14);
    while( true ) {
      if ((this->PerInstanceDataBindings).ArrayNum != iVar5) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNiagaraFloatParameterComponentBinding,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar11 == pFVar3) break;
      local_68[0] = -1;
      if ((param_1 != (FNiagaraDataSetCompiledData *)0x0) && (*pFVar11 != (FName)0x0)) {
        pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)(pFVar11 + 1));
        if ((pFVar10->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
          local_60.TypeDefHandle.RegisteredTypeIndex = pFVar11[1].ComparisonIndex.Value;
          local_60.Name = *pFVar11;
          local_50.DataPtr =
               (wchar_t *)
               FNiagaraConstants::ParticleAttributeNamespaceString.Data.AllocatorInstance.Data;
          local_50.Size = FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum + -1;
          if (FNiagaraConstants::ParticleAttributeNamespaceString.Data.ArrayNum == 0) {
            local_50.Size = 0;
          }
          bVar8 = FNiagaraVariableBase::RemoveRootNamespace(&local_60,&local_50);
          if (bVar8) {
            FNiagaraRendererVariableInfo::FNiagaraRendererVariableInfo
                      (local_res18,param_1,&local_60);
            if ((ushort)local_res18[0]._0_7_ != 0xffff) {
              local_68[0] = (-(uint)(local_res18[0].bHalfType != false) & 0x80000000 |
                            (uint)local_res18[0]._0_7_ & 0xffff) + pFVar11[1].Number;
            }
          }
        }
      }
      pFVar6 = (pTVar2->AllocatorInstance).Data;
      if ((pFVar6 <= (FScriptContainerElement *)local_68) &&
         ((FScriptContainerElement *)local_68 < pFVar6 + (longlong)*piVar1 * 4)) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar8) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      iVar9 = (this->PerInstanceDataFloatComponents).ArrayNum;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&pTVar2->AllocatorInstance,piVar1);
      }
      pFVar11 = (FName *)&pFVar11[2].Number;
      (this->PerInstanceDataFloatComponents).ArrayNum = iVar9 + 1;
      *(int *)((pTVar2->AllocatorInstance).Data + (longlong)iVar9 * 4) = local_68[0];
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// CreateBoundsCalculator @ 14da42180

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraBoundsCalculator * __thiscall
UNiagaraNaniteRendererProperties::CreateBoundsCalculator(UNiagaraNaniteRendererProperties *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FNiagaraBoundsCalculator FVar5;
  FNiagaraBoundsCalculator FVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  FVersionedNiagaraEmitterData *pFVar13;
  TBoxSphereBounds<double,double> *pTVar14;
  FNiagaraBoundsCalculator *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 uVar18;
  uint uVar19;
  uint uVar20;
  FNiagaraBoundsCalculator FVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  double local_res8;
  double local_res10;
  double local_res18;
  undefined1 local_1d8 [16];
  double local_1c8;
  undefined1 auStack_1b8 [160];
  TBoxSphereBounds<double,double> local_118 [4];
  
  uVar9 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uVar18 = 0;
  bVar10 = false;
  local_1c8 = (double)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
  auStack_1b8._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  auStack_1b8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1d8._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_1d8._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  pFVar13 = UNiagaraRendererProperties::GetEmitterData((UNiagaraRendererProperties *)this);
  if (pFVar13 != (FVersionedNiagaraEmitterData *)0x0) {
    uVar18 = pFVar13->bLocalSpace;
  }
  iVar4 = (this->Meshes).ArrayNum;
  pFVar16 = (this->Meshes).AllocatorInstance.Data;
  uVar24 = (undefined4)uVar9;
  uVar25 = (undefined4)((ulonglong)uVar9 >> 0x20);
  pFVar17 = pFVar16 + (longlong)iVar4 * 0x30;
  uVar11 = uVar7;
  uVar12 = uVar8;
  do {
    while( true ) {
      if ((this->Meshes).ArrayNum != iVar4) {
        `TCheckedPointerIterator<FNiagaraNaniteMeshRendererMeshProperties,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(&local_res8);
      }
      if (pFVar16 == pFVar17) {
        if ((bVar10) &&
           (pFVar15 = ::operator_new(0x78), uVar20 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
           uVar19 = (uint)__xmm_7fffffffffffffff7fffffffffffffff,
           pFVar15 != (FNiagaraBoundsCalculator *)0x0)) {
          *(undefined1 *)(pFVar15 + 1) = 1;
          uVar22 = (uint)uVar11 & uVar19;
          uVar23 = (uint)((ulonglong)uVar11 >> 0x20) & uVar20;
          *(undefined4 *)&pFVar15[1].field_0x4 = 0xffffffff;
          uVar27 = (uint)uVar7 & uVar19;
          uVar28 = (uint)((ulonglong)uVar7 >> 0x20) & uVar20;
          *(undefined1 *)(pFVar15 + 2) = 1;
          if ((double)CONCAT44(uVar23,uVar22) <= (double)CONCAT44(uVar28,uVar27)) {
            uVar22 = uVar27;
            uVar23 = uVar28;
          }
          *(undefined4 *)&pFVar15[2].field_0x4 = 0xffffffff;
          *(undefined1 *)(pFVar15 + 3) = 1;
          *(undefined4 *)&pFVar15[3].field_0x4 = 0xffffffff;
          *(undefined1 *)(pFVar15 + 4) = 1;
          *(undefined4 *)&pFVar15[4].field_0x4 = 0xffffffff;
          *pFVar15 = (FNiagaraBoundsCalculator)
                     &___7__FNiagaraBoundsCalculatorHelper__0A__00_0A___6B_;
          FVar6._4_4_ = uVar23;
          FVar6._0_4_ = uVar22;
          pFVar15[5] = FVar6;
          uVar22 = local_1d8._8_4_ & uVar19;
          uVar23 = local_1d8._12_4_ & uVar20;
          uVar27 = auStack_1b8._0_4_ & uVar19;
          uVar28 = auStack_1b8._4_4_ & uVar20;
          if ((double)CONCAT44(uVar23,uVar22) <= (double)CONCAT44(uVar28,uVar27)) {
            uVar22 = uVar27;
            uVar23 = uVar28;
          }
          FVar5._4_4_ = uVar23;
          FVar5._0_4_ = uVar22;
          pFVar15[6] = FVar5;
          FVar21._0_4_ = SUB84(local_1c8,0) & uVar19;
          FVar21._4_4_ = (uint)((ulonglong)local_1c8 >> 0x20) & uVar20;
          uVar19 = auStack_1b8._8_4_ & uVar19;
          uVar20 = auStack_1b8._12_4_ & uVar20;
          if ((double)FVar21 <= (double)CONCAT44(uVar20,uVar19)) {
            FVar21._4_4_ = uVar20;
            FVar21._0_4_ = uVar19;
          }
          pFVar15[7] = FVar21;
          *(undefined1 *)(pFVar15 + 0xe) = uVar18;
          pFVar15[8] = (FNiagaraBoundsCalculator)0x0;
          pFVar15[9] = (FNiagaraBoundsCalculator)0x0;
          pFVar15[10] = (FNiagaraBoundsCalculator)0x0;
          pFVar15[0xb] = (FNiagaraBoundsCalculator)0x0;
          pFVar15[0xc] = (FNiagaraBoundsCalculator)0x0;
          pFVar15[0xd] = (FNiagaraBoundsCalculator)0x0;
          return pFVar15;
        }
        return (FNiagaraBoundsCalculator *)0x0;
      }
      if (*(UStaticMesh **)pFVar16 != (UStaticMesh *)0x0) break;
LAB_14da42412:
      pFVar16 = pFVar16 + 0x30;
    }
    pTVar14 = UStaticMesh::GetBounds(*(UStaticMesh **)pFVar16,local_118);
    dVar1 = (pTVar14->Origin).field0_0x0._s_0.X;
    dVar2 = (pTVar14->Origin).field0_0x0._s_0.Y;
    dVar3 = (pTVar14->Origin).field0_0x0._s_0.Z;
    local_res18 = (dVar1 - (pTVar14->BoxExtent).field0_0x0._s_0.X) * (double)*(float *)(pFVar16 + 8)
    ;
    dVar1 = (dVar1 + (pTVar14->BoxExtent).field0_0x0._s_0.X) * (double)*(float *)(pFVar16 + 8);
    local_res8 = (dVar2 - (pTVar14->BoxExtent).field0_0x0._s_0.Y) *
                 (double)*(float *)(pFVar16 + 0xc);
    dVar2 = (dVar2 + (pTVar14->BoxExtent).field0_0x0._s_0.Y) * (double)*(float *)(pFVar16 + 0xc);
    local_res10 = (dVar3 - (pTVar14->BoxExtent).field0_0x0._s_0.Z) *
                  (double)*(float *)(pFVar16 + 0x10);
    dVar3 = (dVar3 + (pTVar14->BoxExtent).field0_0x0._s_0.Z) * (double)*(float *)(pFVar16 + 0x10);
    uVar26 = (undefined4)((ulonglong)local_res10 >> 0x20);
    if (!bVar10) {
      bVar10 = true;
      local_1d8._8_4_ = SUB84(local_res8,0);
      local_1d8._0_8_ = local_res18;
      local_1d8._12_4_ = (int)((ulonglong)local_res8 >> 0x20);
      auStack_1b8._8_4_ = SUB84(dVar3,0);
      auStack_1b8._0_8_ = dVar2;
      auStack_1b8._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
      uVar24 = SUB84(local_res10,0);
      uVar25 = uVar26;
      uVar8 = dVar2;
      uVar9 = dVar3;
      uVar7 = dVar1;
      local_1c8 = local_res10;
      uVar11 = local_res18;
      uVar12 = local_res8;
      goto LAB_14da42412;
    }
    if (local_res8 <= (double)uVar12) {
      uVar12 = local_res8;
    }
    if (local_res10 <= (double)CONCAT44(uVar25,uVar24)) {
      uVar24 = SUB84(local_res10,0);
      uVar25 = uVar26;
    }
    if ((double)uVar8 <= dVar2) {
      uVar8 = dVar2;
    }
    pFVar16 = pFVar16 + 0x30;
    if ((double)uVar9 <= dVar3) {
      uVar9 = dVar3;
    }
    if (local_res18 <= (double)uVar11) {
      uVar11 = local_res18;
    }
    local_1d8._8_8_ = uVar12;
    if ((double)uVar7 <= dVar1) {
      uVar7 = dVar1;
    }
    local_1c8 = (double)CONCAT44(uVar25,uVar24);
    auStack_1b8._8_8_ = uVar9;
    auStack_1b8._0_8_ = uVar8;
  } while( true );
}

// CreateEmitterRenderer @ 14da42770

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
UNiagaraNaniteRendererProperties::CreateEmitterRenderer
          (UNiagaraNaniteRendererProperties *this,Type param_1,FNiagaraEmitterInstance *param_2,
          FNiagaraSystemInstanceController *param_3)

{
  int *piVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  FNiagaraDataSet *this_00;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FNiagaraRendererNanite *this_01;
  UNiagaraNaniteRendererProperties *pUVar8;
  FNiagaraRenderer *pFVar9;
  FNiagaraTypeDefinition *pFVar10;
  TArray<FNiagaraRendererNanite::FMeshData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  int local_res8 [2];
  int local_res18 [2];
  FNiagaraSystemInstanceController *local_res20;
  int local_58;
  int local_54;
  FNiagaraVariableBase local_50;
  FNiagaraVariableBase local_44;
  
  local_res20 = param_3;
  this_01 = ::operator_new(0x2e0);
  if (this_01 == (FNiagaraRendererNanite *)0x0) {
    this_01 = (FNiagaraRendererNanite *)0x0;
  }
  else {
    FNiagaraRenderer::FNiagaraRenderer
              ((FNiagaraRenderer *)this_01,param_1,(UNiagaraRendererProperties *)this,param_2);
    this_01->MeshIndexComponentOffset = -1;
    this_01->RendererVisComponentOffset = -1;
    this_01->_padding_ = (longlong)&___7FNiagaraRendererNanite__6B_;
    piVar1 = &(this_01->MeshDatas).ArrayNum;
    *(undefined8 *)&(this_01->MeshDatas).AllocatorInstance.SecondaryData.field_0x0 = 0;
    piVar2 = &(this_01->MeshDatas).ArrayMax;
    *piVar1 = 0;
    *piVar2 = 4;
    pUVar8 = CastChecked<UNiagaraNaniteRendererProperties_const_,UNiagaraRendererProperties_const_>
                       ((UNiagaraRendererProperties *)this);
    iVar4 = (pUVar8->Meshes).ArrayNum;
    iVar7 = UE::Core::Private::
            ReallocGrow<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraRendererNanite::FMeshData>_>
                      (0x50,0x10,iVar4,&(this_01->MeshDatas).AllocatorInstance,piVar1,piVar2);
    pTVar11 = *(TArray<FNiagaraRendererNanite::FMeshData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                **)&(this_01->MeshDatas).AllocatorInstance.SecondaryData.field_0x0;
    if (pTVar11 ==
        (TArray<FNiagaraRendererNanite::FMeshData,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
         *)0x0) {
      pTVar11 = &this_01->MeshDatas;
    }
    DefaultConstructItems<FNiagaraRendererNanite::FMeshData,int>
              ((pTVar11->AllocatorInstance).InlineData + (longlong)iVar7 * 0x50,iVar4);
    if ((param_2->ParticleDataSet == (FNiagaraDataSet *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ParticleDataSet",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                           ,0x3a,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FNiagaraRenderer *)(*pcVar5)();
      return pFVar9;
    }
    this_00 = param_2->ParticleDataSet;
    if ((pUVar8->MeshIndexBinding).bBindingExistsOnSource != '\x01' ||
        (pUVar8->MeshIndexBinding).bIsCachedParticleValue != '\0') {
      pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                          (&(pUVar8->MeshIndexBinding).ParamMapVariable.TypeDefHandle);
      local_50.Name = (pUVar8->MeshIndexBinding).DataSetName;
      local_50.TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(&local_50.TypeDefHandle,pFVar10);
      FNiagaraDataSet::GetVariableComponentOffsets
                (this_00,&local_50,local_res18,&this_01->MeshIndexComponentOffset,local_res8);
    }
    param_3 = local_res20;
    if ((pUVar8->RendererVisibilityTagBinding).bBindingExistsOnSource != '\x01' ||
        (pUVar8->RendererVisibilityTagBinding).bIsCachedParticleValue != '\0') {
      pFVar10 = FNiagaraTypeDefinitionHandle::Resolve
                          (&(pUVar8->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle);
      local_44.Name = (pUVar8->RendererVisibilityTagBinding).DataSetName;
      local_44.TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register(&local_44.TypeDefHandle,pFVar10);
      FNiagaraDataSet::GetVariableComponentOffsets
                (this_00,&local_44,&local_54,&this_01->RendererVisComponentOffset,&local_58);
      param_3 = local_res20;
    }
  }
  pcVar5 = *(code **)(this_01->_padding_ + 8);
  if (pcVar5 != FNiagaraRendererNanite::Initialize) {
    (*pcVar5)();
    return (FNiagaraRenderer *)this_01;
  }
  FNiagaraRendererNanite::Initialize(this_01,(UNiagaraRendererProperties *)this,param_2,param_3);
  return (FNiagaraRenderer *)this_01;
}

// GetCurrentSourceMode @ 14da43300

ENiagaraRendererSourceDataMode __thiscall
UNiagaraNaniteRendererProperties::GetCurrentSourceMode(UNiagaraNaniteRendererProperties *this)

{
  return this->SourceMode;
}

// GetMeshUsedMaterials @ 14da433d0

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
UNiagaraNaniteRendererProperties::GetMeshUsedMaterials
          (UNiagaraNaniteRendererProperties *this,FNiagaraNaniteMeshRendererMeshProperties *param_1,
          FNiagaraEmitterInstance *param_2,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  UStaticMesh *this_00;
  FStaticMeshRenderData *pFVar9;
  UMaterial *pUVar10;
  int iVar11;
  uint *puVar12;
  FScriptContainerElement *pFVar13;
  uint *puVar14;
  undefined1 local_78;
  undefined1 local_77 [7];
  UStaticMesh *local_70;
  FScriptContainerElement *local_68;
  FScriptContainerElement *local_60;
  int *piStack_58;
  undefined8 local_50;
  FScriptContainerElement *local_48;
  int *piStack_40;
  int local_38;
  undefined4 uStack_34;
  
  this_00 = FNiagaraNaniteMeshRendererMeshProperties::GetResolvedMesh(param_1,param_2);
  if ((this_00 != (UStaticMesh *)0x0) &&
     (local_70 = this_00, pFVar9 = UStaticMesh::GetRenderData(this_00),
     pFVar9 != (FStaticMeshRenderData *)0x0)) {
    pFVar13 = (pFVar9->LODResources).Array.AllocatorInstance.Data;
    piStack_58 = &(pFVar9->LODResources).Array.ArrayNum;
    local_38 = *piStack_58;
    local_68 = pFVar13 + (longlong)local_38 * 8;
    local_50 = CONCAT44(uStack_34,local_38);
    local_48 = pFVar13;
    piStack_40 = piStack_58;
    while( true ) {
      pFVar5 = local_68;
      local_60 = pFVar13;
      if (*piStack_58 != (int)local_50) {
        local_78 = 0;
        `TCheckedPointerIterator<void_*_const,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_78);
      }
      if (pFVar13 == pFVar5) break;
      lVar3 = *(longlong *)pFVar13;
      puVar12 = (uint *)(lVar3 + 0x10);
      iVar1 = *(int *)(lVar3 + 0x38);
      if (*(uint **)(lVar3 + 0x30) != (uint *)0x0) {
        puVar12 = *(uint **)(lVar3 + 0x30);
      }
      puVar14 = puVar12 + (longlong)iVar1 * 7;
      while( true ) {
        if (*(int *)(lVar3 + 0x38) != iVar1) {
          local_77[0] = 0;
          `TCheckedPointerIterator<FStaticMeshSection_const_,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_77);
        }
        if (puVar12 == puVar14) break;
        uVar2 = *puVar12;
        if (-1 < (int)uVar2) {
          if ((int)uVar2 < param_3->ArrayNum) {
            if (((int)uVar2 < 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            if (*(longlong *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar2 * 8) != 0)
            goto LAB_14da435f7;
          }
          else {
            iVar11 = (uVar2 - param_3->ArrayNum) + 1;
            iVar7 = UE::Core::Private::
                    ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (8,8,iVar11,&param_3->AllocatorInstance,&param_3->ArrayNum,
                               &param_3->ArrayMax);
            memset((param_3->AllocatorInstance).Data + (longlong)iVar7 * 8,0,(longlong)iVar11 << 3);
          }
          pUVar10 = (UMaterial *)UStaticMesh::GetMaterial(this_00,*puVar12);
          if (pUVar10 == (UMaterial *)0x0) {
            pUVar10 = UMaterial::GetDefaultMaterial(MD_Surface);
          }
          uVar2 = *puVar12;
          uVar8 = 0;
          if ((int)uVar2 < param_3->ArrayNum) {
            uVar8 = ~uVar2 >> 0x1f;
          }
          if ((uVar8 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(UMaterial **)((param_3->AllocatorInstance).Data + (longlong)(int)uVar2 * 8) = pUVar10;
          this_00 = local_70;
        }
LAB_14da435f7:
        puVar12 = puVar12 + 7;
      }
      pFVar13 = local_60 + 8;
    }
  }
  return;
}

// GetPrivateStaticClass @ 14da43670

UClass * __cdecl UNiagaraNaniteRendererProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraNaniteRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraNanite",L"NiagaraNaniteRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraNaniteRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraNaniteRendererProperties,0x2b0,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraNaniteRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraNaniteRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraNaniteRendererProperties.InnerSingleton;
}

// GetUsedMaterials @ 14da442a0

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
UNiagaraNaniteRendererProperties::GetUsedMaterials
          (UNiagaraNaniteRendererProperties *this,FNiagaraEmitterInstance *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  UMaterialInterface *pUVar3;
  uint uVar4;
  ulonglong uVar5;
  FNiagaraNaniteMeshRendererMeshProperties *pFVar6;
  ForAnyElementType FVar7;
  int iVar8;
  FNiagaraNaniteMeshRendererMeshProperties *pFVar9;
  UMaterialInterface *local_res8;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_50;
  
  pFVar9 = (FNiagaraNaniteMeshRendererMeshProperties *)(this->Meshes).AllocatorInstance.Data;
  uVar2 = (this->Meshes).ArrayNum;
  uVar5 = (ulonglong)(int)uVar2;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  pFVar6 = pFVar9 + uVar5;
  iVar8 = 0;
  do {
    if ((this->Meshes).ArrayNum != (int)uVar5) {
      `TCheckedPointerIterator<FNiagaraNaniteMeshRendererMeshProperties_const_,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_res8);
      iVar8 = local_50.ArrayMax;
    }
    if (pFVar9 == pFVar6) {
      if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50.AllocatorInstance.Data);
      }
      return;
    }
    local_50._8_8_ = local_50._8_8_ & 0xffffffff00000000;
    if ((iVar8 < 0) && (iVar8 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&local_50.AllocatorInstance,0,&local_50.ArrayMax);
    }
    GetMeshUsedMaterials(this,pFVar9,param_1,&local_50);
    if (0 < local_50.ArrayNum) {
      ApplyMaterialOverrides(this,param_1,&local_50);
      uVar4 = local_50.ArrayNum + param_2->ArrayNum;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      if (param_2->ArrayMax < (int)uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar4,&param_2->AllocatorInstance,param_2->ArrayNum,&param_2->ArrayMax);
      }
      iVar8 = local_50.ArrayNum;
      pFVar1 = local_50.AllocatorInstance.Data + (longlong)local_50.ArrayNum * 8;
      FVar7.Data = local_50.AllocatorInstance.Data;
      while( true ) {
        if (local_50.ArrayNum != iVar8) {
          `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_res8);
        }
        if (FVar7.Data == pFVar1) break;
        pUVar3 = *(UMaterialInterface **)FVar7.Data;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar3 != (UMaterialInterface *)0x0) goto LAB_14da443ed;
        }
        else if (pUVar3 != (UMaterialInterface *)0x0) {
          UE::GC::MarkAsReachable((UObject *)pUVar3);
LAB_14da443ed:
          local_res8 = pUVar3;
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::
          AddUniqueImpl<UMaterialInterface_*>(param_2,&local_res8);
        }
        FVar7.Data = FVar7.Data + 8;
      }
    }
    pFVar9 = pFVar9 + 1;
    uVar5 = (ulonglong)uVar2;
    iVar8 = local_50.ArrayMax;
  } while( true );
}

// InitCDOPropertiesAfterModuleStartup @ 14da44470

void __cdecl UNiagaraNaniteRendererProperties::InitCDOPropertiesAfterModuleStartup(void)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  UClass *pUVar3;
  UNiagaraNaniteRendererProperties *pUVar4;
  FString *pFVar5;
  ulonglong uVar6;
  ForAnyElementType this;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  undefined1 local_res8 [8];
  FString local_28;
  FString local_18;
  
  pUVar3 = StaticClass();
  if ((pUVar3->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar3);
  }
  pUVar4 = (UNiagaraNaniteRendererProperties *)(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar4 != (UNiagaraNaniteRendererProperties *)0x0) {
    pUVar3 = StaticClass();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) {
      NiagaraNaniteRendererPropertiesLocal::SetupBindings(pUVar4);
      iVar2 = NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum;
      uVar6 = (ulonglong)
              NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)
               (NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.
                AllocatorInstance.Data + uVar6 * 8);
      this = NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.
             AllocatorInstance;
      while( true ) {
        if ((int)uVar6 != iVar2) {
          `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraNaniteRendererProperties,FWeakObjectPtr>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((FWeakObjectPtr *)this.Data == pFVar1) break;
        pUVar4 = (UNiagaraNaniteRendererProperties *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
        if (pUVar4 != (UNiagaraNaniteRendererProperties *)0x0) {
          NiagaraNaniteRendererPropertiesLocal::SetupBindings(pUVar4);
        }
        uVar6 = (ulonglong)
                (uint)NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.
                      ArrayNum;
        this.Data = this.Data + 8;
      }
      return;
    }
    pFVar5 = GetTypeName<UNiagaraNaniteRendererProperties>(&local_28);
    pwVar7 = L"";
    if ((pFVar5->Data).ArrayNum == 0) {
      pwVar8 = L"";
    }
    else {
      pwVar8 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
    pFVar5 = GetFullNameForCastLogError<UObject>(&local_18,(UObject *)pUVar4);
    if ((pFVar5->Data).ArrayNum != 0) {
      pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar7,pwVar8);
  }
  pFVar5 = GetTypeName<UNiagaraNaniteRendererProperties>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// IsSimTargetSupported @ 14da44a10

bool __thiscall
UNiagaraNaniteRendererProperties::IsSimTargetSupported
          (UNiagaraNaniteRendererProperties *this,ENiagaraSimTarget param_1)

{
  return true;
}

// NeedsMIDsForMaterials @ 14da44c80

bool __thiscall
UNiagaraNaniteRendererProperties::NeedsMIDsForMaterials(UNiagaraNaniteRendererProperties *this)

{
  if (((((this->MaterialParameters).AttributeBindings.ArrayNum < 1) &&
       ((this->MaterialParameters).ScalarParameters.ArrayNum < 1)) &&
      ((this->MaterialParameters).VectorParameters.ArrayNum < 1)) &&
     ((this->MaterialParameters).TextureParameters.ArrayNum < 1)) {
    return false;
  }
  return true;
}

// NeedsSystemCompletion @ 14da44cb0

bool __thiscall
UNiagaraNaniteRendererProperties::NeedsSystemCompletion(UNiagaraNaniteRendererProperties *this)

{
  return true;
}

// NeedsSystemPostTick @ 14da44cc0

bool __thiscall
UNiagaraNaniteRendererProperties::NeedsSystemPostTick(UNiagaraNaniteRendererProperties *this)

{
  return true;
}

// PopulateRequiredBindings @ 14da44d30

bool __thiscall
UNiagaraNaniteRendererProperties::PopulateRequiredBindings
          (UNiagaraNaniteRendererProperties *this,FNiagaraParameterStore *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FNiagaraTypeDefinition *pFVar6;
  FNiagaraVariableBase *pFVar7;
  longlong *plVar8;
  FName *pFVar9;
  FName *pFVar10;
  FScriptContainerElement *pFVar11;
  FNiagaraMaterialAttributeBinding *this_00;
  FScriptContainerElement *pFVar12;
  FNiagaraMaterialAttributeBinding *pFVar13;
  undefined1 local_res8 [8];
  FName local_48;
  uint local_40;
  void *local_38;
  undefined8 local_30;
  
  bVar5 = UNiagaraRendererProperties::PopulateRequiredBindings
                    ((UNiagaraRendererProperties *)this,param_1);
  plVar8 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar8 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<FNiagaraVariableAttributeBinding_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar8 == plVar1) break;
    lVar3 = *plVar8;
    if ((lVar3 != 0) && ((*(byte *)(lVar3 + 0x1d) & 3) == 1)) {
      local_40 = *(uint *)(lVar3 + 0x10);
      local_48 = *(FName *)(lVar3 + 8);
      local_38 = (void *)0x0;
      local_30 = 0;
      (**(code **)(param_1->_padding_ + 0x10))(param_1,&local_48,0,1,0);
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      bVar5 = true;
    }
    plVar8 = plVar8 + 1;
  }
  iVar2 = (this->Meshes).ArrayNum;
  pFVar11 = (this->Meshes).AllocatorInstance.Data;
  pFVar9 = (FName *)(pFVar11 + 0x20);
  pFVar12 = pFVar11 + (longlong)iVar2 * 0x30;
  while( true ) {
    if ((this->Meshes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraNaniteMeshRendererMeshProperties,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar12) break;
    if (*pFVar9 != (FName)0x0) {
      pFVar6 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(pFVar9 + 1));
      if ((pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
        local_40 = pFVar9[1].ComparisonIndex.Value;
        local_48 = *pFVar9;
        local_38 = (void *)0x0;
        local_30 = 0;
        (**(code **)(param_1->_padding_ + 0x10))(param_1,&local_48,0,1,0);
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
        bVar5 = true;
      }
    }
    pFVar11 = pFVar11 + 0x30;
    pFVar9 = pFVar9 + 6;
  }
  iVar2 = (this->MaterialParameters).AttributeBindings.ArrayNum;
  this_00 = (FNiagaraMaterialAttributeBinding *)
            (this->MaterialParameters).AttributeBindings.AllocatorInstance.Data;
  pFVar13 = this_00 + iVar2;
  while( true ) {
    if ((this->MaterialParameters).AttributeBindings.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraMaterialAttributeBinding,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar13) break;
    pcVar4 = *(code **)(param_1->_padding_ + 0x10);
    pFVar7 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_00);
    local_48 = pFVar7->Name;
    local_40 = (pFVar7->TypeDefHandle).RegisteredTypeIndex;
    local_38 = (void *)0x0;
    local_30 = 0;
    (*pcVar4)(param_1,&local_48,0,1,0);
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    bVar5 = true;
    this_00 = this_00 + 1;
  }
  iVar2 = (this->PerInstanceDataBindings).ArrayNum;
  pFVar10 = (FName *)(this->PerInstanceDataBindings).AllocatorInstance.Data;
  pFVar9 = (FName *)((longlong)pFVar10 + (longlong)iVar2 * 0x14);
  while( true ) {
    if ((this->PerInstanceDataBindings).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraFloatParameterComponentBinding,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar9) break;
    if (*pFVar10 != (FName)0x0) {
      pFVar6 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)(pFVar10 + 1));
      if ((pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
        local_40 = pFVar10[1].ComparisonIndex.Value;
        local_48 = *pFVar10;
        local_38 = (void *)0x0;
        local_30 = 0;
        (**(code **)(param_1->_padding_ + 0x10))(param_1,&local_48,0,1,0);
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
        bVar5 = true;
      }
    }
    pFVar10 = (FName *)&pFVar10[2].Number;
  }
  return bVar5;
}

// PostInitProperties @ 14da44fc0

void __thiscall
UNiagaraNaniteRendererProperties::PostInitProperties(UNiagaraNaniteRendererProperties *this)

{
  code *pcVar1;
  bool bVar2;
  FModuleManager *this_00;
  FName *pFVar3;
  longlong lVar4;
  UNiagaraNaniteRendererProperties *local_res8;
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
    NiagaraNaniteRendererPropertiesLocal::SetupBindings(this);
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
  if (((NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.AllocatorInstance.
        Data <= local_18) &&
      (local_18 <
       (FWeakObjectPtr *)
       (NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.AllocatorInstance.
        Data + (longlong)
               NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayMax * 8))
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
  if (NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum ==
      NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayMax) {
    NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.
                           AllocatorInstance,
                    &NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayMax
                   );
  }
  lVar4 = (longlong)NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum;
  NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum =
       NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum + 1;
  *(FWeakObjectPtr *)
   (NiagaraNaniteRendererPropertiesLocal::RendererPropertiesToDeferredInit.AllocatorInstance.Data +
   lVar4 * 8) = local_18[0];
  return;
}

// PostLoad @ 14da45140

void __thiscall UNiagaraNaniteRendererProperties::PostLoad(UNiagaraNaniteRendererProperties *this)

{
  UNiagaraRendererProperties::PostLoad((UNiagaraRendererProperties *)this);
  (**(code **)(this->_padding_ + 0x350))(this,this->SourceMode);
  FNiagaraRendererMaterialParameters::ConditionalPostLoad(&this->MaterialParameters);
  return;
}

// Serialize @ 14da468b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraNaniteRendererProperties::Serialize
          (UNiagaraNaniteRendererProperties *this,FArchive *param_1)

{
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive FStack_1a0;
  ulonglong uStack_10;
  
  uStack_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&FStack_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this_00);
  UObject::Serialize((UObject *)this,*(FStructuredArchiveRecord *)FVar1);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&FStack_1a0);
  return;
}

// Serialize @ 14da468c0

void __thiscall
UNiagaraNaniteRendererProperties::Serialize
          (UNiagaraNaniteRendererProperties *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUNiagaraNaniteRendererProperties @ 14da46aa0

void __cdecl
UNiagaraNaniteRendererProperties::StaticRegisterNativesUNiagaraNaniteRendererProperties(void)

{
  return;
}

// UpdateMICs @ 14da48a00

void __thiscall UNiagaraNaniteRendererProperties::UpdateMICs(UNiagaraNaniteRendererProperties *this)

{
  return;
}

// UpdatePreviousBindings @ 14da48a10

void __thiscall
UNiagaraNaniteRendererProperties::UpdatePreviousBindings
          (UNiagaraNaniteRendererProperties *this,FVersionedNiagaraEmitterBase *param_1)

{
  if (((((uint)this->_padding_ >> 0xc & 1) == 0) && (param_1->Emitter != (UNiagaraEmitterBase *)0x0)
      ) && (((uint)param_1->Emitter->_padding_ >> 10 & 1) == 0)) {
    FNiagaraVariableAttributeBinding::SetAsPreviousValue
              (&this->PreviousPositionBinding,&this->PositionBinding,param_1,this->SourceMode);
    FNiagaraVariableAttributeBinding::SetAsPreviousValue
              (&this->PreviousRotationBinding,&this->RotationBinding,param_1,this->SourceMode);
    FNiagaraVariableAttributeBinding::SetAsPreviousValue
              (&this->PreviousScaleBinding,&this->ScaleBinding,param_1,this->SourceMode);
  }
  return;
}

// UpdateSourceModeDerivates @ 14da48ab0

void __thiscall
UNiagaraNaniteRendererProperties::UpdateSourceModeDerivates
          (UNiagaraNaniteRendererProperties *this,ENiagaraRendererSourceDataMode param_1,
          bool param_2)

{
  int iVar1;
  FNiagaraMaterialAttributeBinding *this_00;
  FNiagaraMaterialAttributeBinding *pFVar2;
  undefined1 local_res8 [8];
  FVersionedNiagaraEmitterBase local_28;
  
  UNiagaraRendererProperties::UpdateSourceModeDerivates
            ((UNiagaraRendererProperties *)this,param_1,param_2);
  UNiagaraRendererProperties::GetOuterEmitterBase((UNiagaraRendererProperties *)this,&local_28);
  if (((((uint)this->_padding_ >> 0xc & 1) == 0) && (local_28.Emitter != (UNiagaraEmitterBase *)0x0)
      ) && (((uint)(local_28.Emitter)->_padding_ >> 10 & 1) == 0)) {
    FNiagaraVariableAttributeBinding::SetAsPreviousValue
              (&this->PreviousPositionBinding,&this->PositionBinding,&local_28,this->SourceMode);
    FNiagaraVariableAttributeBinding::SetAsPreviousValue
              (&this->PreviousRotationBinding,&this->RotationBinding,&local_28,this->SourceMode);
    FNiagaraVariableAttributeBinding::SetAsPreviousValue
              (&this->PreviousScaleBinding,&this->ScaleBinding,&local_28,this->SourceMode);
  }
  iVar1 = (this->MaterialParameters).AttributeBindings.ArrayNum;
  this_00 = (FNiagaraMaterialAttributeBinding *)
            (this->MaterialParameters).AttributeBindings.AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->MaterialParameters).AttributeBindings.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraMaterialAttributeBinding,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar2) break;
    FNiagaraMaterialAttributeBinding::CacheValues(this_00,local_28.Emitter);
    this_00 = this_00 + 1;
  }
  return;
}

