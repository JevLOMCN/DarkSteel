// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 22

// StaticClass @ 14940c4e0

UClass * __cdecl UNiagaraVolumeRendererProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraVolumeRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraVolumeRendererProperties,0x208,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraVolumeRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraVolumeRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties.InnerSingleton;
}

// UNiagaraVolumeRendererProperties @ 14942a9c0

UNiagaraVolumeRendererProperties * __thiscall
UNiagaraVolumeRendererProperties::UNiagaraVolumeRendererProperties
          (UNiagaraVolumeRendererProperties *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  UNiagaraRendererProperties::UNiagaraRendererProperties((UNiagaraRendererProperties *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UNiagaraVolumeRendererProperties__6B_;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MaterialParameterBinding).ResolvedParameter.Name.ComparisonIndex = 0;
  (this->MaterialParameterBinding).ResolvedParameter.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->MaterialParameterBinding).ResolvedParameter.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->MaterialParameterBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex = iVar2;
  this->SourceMode = Emitter;
  this->RendererVisibility = 0;
  this->StepFactor = 1.0;
  this->LightingDownsampleFactor = 2.0;
  this->ShadowStepFactor = 2.0;
  this->ShadowBiasFactor = 0.5;
  (this->PositionBinding).RootName.ComparisonIndex = 0;
  *(undefined8 *)&(this->PositionBinding).RootName.Number = 0;
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
  (this->VolumeResolutionMaxAxisBinding).RootName.ComparisonIndex = 0;
  (this->VolumeResolutionMaxAxisBinding).RootName.Number = 0;
  (this->VolumeResolutionMaxAxisBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->VolumeResolutionMaxAxisBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->VolumeResolutionMaxAxisBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->VolumeResolutionMaxAxisBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->VolumeResolutionMaxAxisBinding).bBindingExistsOnSource = '\0';
  (this->VolumeResolutionMaxAxisBinding).bIsCachedParticleValue = '\x01';
  (this->VolumeResolutionMaxAxisBinding).DataSetName.ComparisonIndex = 0;
  (this->VolumeResolutionMaxAxisBinding).DataSetName.Number = 0;
  (this->VolumeResolutionMaxAxisBinding).BindingSourceMode.Value = '\0';
  (this->VolumeWorldSpaceSizeBinding).RootName.ComparisonIndex = 0;
  (this->VolumeWorldSpaceSizeBinding).RootName.Number = 0;
  (this->VolumeWorldSpaceSizeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->VolumeWorldSpaceSizeBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->VolumeWorldSpaceSizeBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->VolumeWorldSpaceSizeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->VolumeWorldSpaceSizeBinding).bBindingExistsOnSource = '\0';
  (this->VolumeWorldSpaceSizeBinding).bIsCachedParticleValue = '\x01';
  (this->VolumeWorldSpaceSizeBinding).DataSetName.ComparisonIndex = 0;
  (this->VolumeWorldSpaceSizeBinding).DataSetName.Number = 0;
  (this->VolumeWorldSpaceSizeBinding).BindingSourceMode.Value = '\0';
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
  *(undefined1 *)&this->PositionDataSetAccessor = 1;
  *(undefined4 *)&(this->PositionDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->RotationDataSetAccessor = 1;
  *(undefined4 *)&(this->RotationDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ScaleDataSetAccessor = 1;
  *(undefined8 *)&(this->ScaleDataSetAccessor).field_0x4 = 0xffffffffffffffff;
  this->VolumeResolutionMaxAxisAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  *(undefined1 *)&this->VolumeWorldSpaceSizeAccessor = 1;
  *(undefined4 *)&(this->VolumeWorldSpaceSizeAccessor).field_0x4 = 0xffffffff;
  return this;
}

// UNiagaraVolumeRendererProperties @ 14942ac80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UNiagaraVolumeRendererProperties * __thiscall
UNiagaraVolumeRendererProperties::UNiagaraVolumeRendererProperties
          (UNiagaraVolumeRendererProperties *this)

{
  byte *pbVar1;
  int *piVar2;
  FNiagaraVariableAttributeBinding *pFVar3;
  FNiagaraVariableAttributeBinding *pFVar4;
  FNiagaraVariableAttributeBinding *pFVar5;
  FNiagaraVariableAttributeBinding *pFVar6;
  FNiagaraVariableAttributeBinding *pFVar7;
  undefined1 *puVar8;
  longlong *plVar9;
  int iVar10;
  FNiagaraVariableAttributeBinding *pFVar11;
  
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
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *piVar2 = 0;
  this->_padding_ = (longlong)&___7UNiagaraVolumeRendererProperties__6B_;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MaterialParameterBinding).ResolvedParameter.Name.ComparisonIndex = 0;
  (this->MaterialParameterBinding).ResolvedParameter.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->MaterialParameterBinding).ResolvedParameter.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->MaterialParameterBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex = iVar10;
  pFVar3 = &this->PositionBinding;
  this->SourceMode = Emitter;
  this->RendererVisibility = 0;
  this->StepFactor = 1.0;
  this->LightingDownsampleFactor = 2.0;
  this->ShadowStepFactor = 2.0;
  this->ShadowBiasFactor = 0.5;
  (pFVar3->RootName).ComparisonIndex = 0;
  (pFVar3->RootName).Number = 0;
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
  (this->RendererVisibilityTagBinding).DataSetName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).DataSetName.Number = 0;
  (this->RendererVisibilityTagBinding).BindingSourceMode.Value = '\0';
  (this->RendererVisibilityTagBinding).bBindingExistsOnSource = '\0';
  pFVar7 = &this->VolumeResolutionMaxAxisBinding;
  (this->RendererVisibilityTagBinding).bIsCachedParticleValue = '\x01';
  (pFVar7->RootName).ComparisonIndex = 0;
  (pFVar7->RootName).Number = 0;
  (this->VolumeResolutionMaxAxisBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->VolumeResolutionMaxAxisBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->VolumeResolutionMaxAxisBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->VolumeResolutionMaxAxisBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10
  ;
  (this->VolumeResolutionMaxAxisBinding).bBindingExistsOnSource = '\0';
  (this->VolumeResolutionMaxAxisBinding).bIsCachedParticleValue = '\x01';
  pFVar11 = &this->VolumeWorldSpaceSizeBinding;
  (this->VolumeResolutionMaxAxisBinding).DataSetName.ComparisonIndex = 0;
  (this->VolumeResolutionMaxAxisBinding).DataSetName.Number = 0;
  (this->VolumeResolutionMaxAxisBinding).BindingSourceMode.Value = '\0';
  (pFVar11->RootName).ComparisonIndex = 0;
  (pFVar11->RootName).Number = 0;
  (this->VolumeWorldSpaceSizeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->VolumeWorldSpaceSizeBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->VolumeWorldSpaceSizeBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->VolumeWorldSpaceSizeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->VolumeWorldSpaceSizeBinding).bBindingExistsOnSource = '\0';
  (this->VolumeWorldSpaceSizeBinding).bIsCachedParticleValue = '\x01';
  (this->VolumeWorldSpaceSizeBinding).DataSetName.ComparisonIndex = 0;
  (this->VolumeWorldSpaceSizeBinding).DataSetName.Number = 0;
  (this->VolumeWorldSpaceSizeBinding).BindingSourceMode.Value = '\0';
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
  *(undefined1 *)&this->PositionDataSetAccessor = 1;
  *(undefined4 *)&(this->PositionDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->RotationDataSetAccessor = 1;
  *(undefined4 *)&(this->RotationDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ScaleDataSetAccessor = 1;
  *(undefined8 *)&(this->ScaleDataSetAccessor).field_0x4 = 0xffffffffffffffff;
  this->VolumeResolutionMaxAxisAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  *(undefined1 *)&this->VolumeWorldSpaceSizeAccessor = 1;
  *(undefined4 *)&(this->VolumeWorldSpaceSizeAccessor).field_0x4 = 0xffffffff;
  iVar10 = *piVar2;
  *(undefined4 *)&this->_padding_ = 6;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,6,iVar10,(ForAnyElementType *)&this->_padding_,6,piVar2);
  plVar9 = (longlong *)this->_padding_;
  *plVar9 = (longlong)pFVar3;
  plVar9[1] = (longlong)pFVar4;
  plVar9[2] = (longlong)pFVar5;
  plVar9[3] = (longlong)pFVar6;
  plVar9[4] = (longlong)pFVar7;
  plVar9[5] = (longlong)pFVar11;
  return this;
}

// ~UNiagaraVolumeRendererProperties @ 14942cf60

void __thiscall
UNiagaraVolumeRendererProperties::~UNiagaraVolumeRendererProperties
          (UNiagaraVolumeRendererProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraVolumeRendererProperties__6B_;
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
  UNiagaraRendererProperties::~UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  return;
}

// CacheFromCompiledData @ 14943c930

void __thiscall
UNiagaraVolumeRendererProperties::CacheFromCompiledData
          (UNiagaraVolumeRendererProperties *this,FNiagaraDataSetCompiledData *param_1)

{
  FName FVar1;
  FNiagaraTypeDefinition *pFVar2;
  FNiagaraTypeDefinitionHandle local_10 [2];
  
  (**(code **)(this->_padding_ + 0x358))(this,this->SourceMode,0);
  pFVar2 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->PositionBinding).ParamMapVariable.TypeDefHandle);
  FVar1 = (this->PositionBinding).DataSetName;
  local_10[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_10,pFVar2);
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->PositionDataSetAccessor = 1;
    *(undefined4 *)&(this->PositionDataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<FNiagaraPosition>::Init
              ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)&this->PositionDataSetAccessor,
               param_1,FVar1);
  }
  pFVar2 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->RotationBinding).ParamMapVariable.TypeDefHandle);
  FVar1 = (this->RotationBinding).DataSetName;
  local_10[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_10,pFVar2);
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->RotationDataSetAccessor = 1;
    *(undefined4 *)&(this->RotationDataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<UE::Math::TQuat<float>_>::Init
              ((FNiagaraDataSetAccessorFloat<UE::Math::TQuat<float>_> *)
               &this->RotationDataSetAccessor,param_1,FVar1);
  }
  pFVar2 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->ScaleBinding).ParamMapVariable.TypeDefHandle);
  FVar1 = (this->ScaleBinding).DataSetName;
  local_10[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_10,pFVar2);
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->ScaleDataSetAccessor = 1;
    *(undefined4 *)&(this->ScaleDataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::Init
              ((FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> *)
               &this->ScaleDataSetAccessor,param_1,FVar1);
  }
  pFVar2 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle);
  FVar1 = (this->RendererVisibilityTagBinding).DataSetName;
  local_10[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_10,pFVar2);
  FNiagaraDataSetAccessorInt32<int>::Init
            ((FNiagaraDataSetAccessorInt32<int> *)&this->RendererVisibilityTagAccessor,param_1,FVar1
            );
  pFVar2 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->VolumeResolutionMaxAxisBinding).ParamMapVariable.TypeDefHandle);
  FVar1 = (this->VolumeResolutionMaxAxisBinding).DataSetName;
  local_10[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_10,pFVar2);
  FNiagaraDataSetAccessorInt32<int>::Init
            ((FNiagaraDataSetAccessorInt32<int> *)&this->VolumeResolutionMaxAxisAccessor,param_1,
             FVar1);
  pFVar2 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->VolumeWorldSpaceSizeBinding).ParamMapVariable.TypeDefHandle);
  FVar1 = (this->VolumeWorldSpaceSizeBinding).DataSetName;
  local_10[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_10,pFVar2);
  if (param_1 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->VolumeWorldSpaceSizeAccessor = 1;
    *(undefined4 *)&(this->VolumeWorldSpaceSizeAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::Init
              ((FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> *)
               &this->VolumeWorldSpaceSizeAccessor,param_1,FVar1);
  }
  return;
}

// CreateBoundsCalculator @ 14943f510

FNiagaraBoundsCalculator * __thiscall
UNiagaraVolumeRendererProperties::CreateBoundsCalculator(UNiagaraVolumeRendererProperties *this)

{
  return (FNiagaraBoundsCalculator *)0x0;
}

// CreateEmitterRenderer @ 14943f970

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
UNiagaraVolumeRendererProperties::CreateEmitterRenderer
          (UNiagaraVolumeRendererProperties *this,Type param_1,FNiagaraEmitterInstance *param_2,
          FNiagaraSystemInstanceController *param_3)

{
  FNiagaraRendererVolumes *pFVar1;
  
  pFVar1 = ::operator_new(0x3f0);
  if (pFVar1 == (FNiagaraRendererVolumes *)0x0) {
    pFVar1 = (FNiagaraRendererVolumes *)0x0;
  }
  else {
    pFVar1 = FNiagaraRendererVolumes::FNiagaraRendererVolumes
                       (pFVar1,param_1,(UNiagaraRendererProperties *)this,param_2);
  }
  (**(code **)(pFVar1->_padding_ + 8))(pFVar1,this,param_2,param_3);
  return (FNiagaraRenderer *)pFVar1;
}

// GetCurrentSourceMode @ 149448f80

ENiagaraRendererSourceDataMode __thiscall
UNiagaraVolumeRendererProperties::GetCurrentSourceMode(UNiagaraVolumeRendererProperties *this)

{
  return this->SourceMode;
}

// GetPrivateStaticClass @ 14944c7e0

UClass * __cdecl UNiagaraVolumeRendererProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraVolumeRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraVolumeRendererProperties,0x208,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraVolumeRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraVolumeRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraVolumeRendererProperties.InnerSingleton;
}

// GetUsedMaterials @ 14944f400

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
UNiagaraVolumeRendererProperties::GetUsedMaterials
          (UNiagaraVolumeRendererProperties *this,FNiagaraEmitterInstance *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  TObjectPtr<UMaterialInterface>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UObject> this_00;
  UClass *pUVar5;
  TObjectPtr<UMaterialInterface>_u_0 TVar6;
  TObjectPtr<UMaterialInterface>_u_0 local_38;
  FName local_30;
  int local_28;
  void *local_20;
  undefined8 local_18;
  
  if (param_1 != (FNiagaraEmitterInstance *)0x0) {
    local_30 = (this->MaterialParameterBinding).ResolvedParameter.Name;
    local_28 = (this->MaterialParameterBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex;
    TVar6.DebugPtr = (UMaterialInterface *)0x0;
    local_20 = (void *)0x0;
    local_18 = 0;
    this_00 = FNiagaraEmitterInstance::FindBinding(param_1,(FNiagaraVariable *)&stack0x00000010);
    if (*(longlong *)this_00.field0_0x0 != 0) {
      pUVar5 = Z_Construct_UClass_UMaterialInterface_NoRegister();
      bVar3 = FObjectPtr::IsA((FObjectPtr *)this_00.field0_0x0,pUVar5);
      if (bVar3) {
        TVar6.ObjectPtr.field0_0x0 = *(FObjectPtr *)this_00.field0_0x0;
      }
    }
    if (local_20 != (void *)0x0) {
      FMemory::Free(local_20);
    }
    if (TVar6.DebugPtr != (UMaterialInterface *)0x0) goto LAB_14944f499;
  }
  TVar6 = (this->Material).field0_0x0;
LAB_14944f499:
  pTVar1 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_2->AllocatorInstance).Data;
  local_38 = TVar6;
  if ((pTVar1 <= &local_38) && (&local_38 < pTVar1 + param_2->ArrayMax)) {
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
  ((TObjectPtr<UMaterialInterface>_u_0 *)((param_2->AllocatorInstance).Data + (longlong)iVar4 * 8))
  ->DebugPtr = (UMaterialInterface *)local_38;
  return;
}

// InitCDOPropertiesAfterModuleStartup @ 1494511d0

void __cdecl UNiagaraVolumeRendererProperties::InitCDOPropertiesAfterModuleStartup(void)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  UClass *pUVar3;
  UNiagaraVolumeRendererProperties *pUVar4;
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
  pUVar4 = (UNiagaraVolumeRendererProperties *)(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar4 != (UNiagaraVolumeRendererProperties *)0x0) {
    pUVar3 = StaticClass();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) {
      NiagaraVolumeRendererPropertiesLocal::SetupBindings(pUVar4);
      iVar2 = NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum;
      uVar6 = (ulonglong)
              NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)
               (NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.
                AllocatorInstance.Data + uVar6 * 8);
      this = NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.
             AllocatorInstance;
      while( true ) {
        if ((int)uVar6 != iVar2) {
          `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraVolumeRendererProperties,FWeakObjectPtr>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((FWeakObjectPtr *)this.Data == pFVar1) break;
        pUVar4 = (UNiagaraVolumeRendererProperties *)
                 FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
        if (pUVar4 != (UNiagaraVolumeRendererProperties *)0x0) {
          NiagaraVolumeRendererPropertiesLocal::SetupBindings(pUVar4);
        }
        uVar6 = (ulonglong)
                (uint)NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.
                      ArrayNum;
        this.Data = this.Data + 8;
      }
      return;
    }
    pFVar5 = GetTypeName<UNiagaraVolumeRendererProperties>(&local_28);
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
  pFVar5 = GetTypeName<UNiagaraVolumeRendererProperties>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// IsSimTargetSupported @ 1494544e0

bool __thiscall
UNiagaraVolumeRendererProperties::IsSimTargetSupported
          (UNiagaraVolumeRendererProperties *this,ENiagaraSimTarget param_1)

{
  return true;
}

// NeedsMIDsForMaterials @ 149455560

bool __thiscall
UNiagaraVolumeRendererProperties::NeedsMIDsForMaterials(UNiagaraVolumeRendererProperties *this)

{
  if (((((this->MaterialParameters).AttributeBindings.ArrayNum < 1) &&
       ((this->MaterialParameters).ScalarParameters.ArrayNum < 1)) &&
      ((this->MaterialParameters).VectorParameters.ArrayNum < 1)) &&
     ((this->MaterialParameters).TextureParameters.ArrayNum < 1)) {
    return false;
  }
  return true;
}

// PopulateRequiredBindings @ 14945f1c0

bool __thiscall
UNiagaraVolumeRendererProperties::PopulateRequiredBindings
          (UNiagaraVolumeRendererProperties *this,FNiagaraParameterStore *param_1)

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

// PostInitProperties @ 1494600d0

void __thiscall
UNiagaraVolumeRendererProperties::PostInitProperties(UNiagaraVolumeRendererProperties *this)

{
  code *pcVar1;
  bool bVar2;
  FModuleManager *this_00;
  FName *pFVar3;
  longlong lVar4;
  UNiagaraVolumeRendererProperties *local_res8;
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
    NiagaraVolumeRendererPropertiesLocal::SetupBindings(this);
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
  if (((NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.AllocatorInstance.
        Data <= local_18) &&
      (local_18 <
       (FWeakObjectPtr *)
       (NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.AllocatorInstance.
        Data + (longlong)
               NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayMax * 8))
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
  if (NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum ==
      NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayMax) {
    NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.
                           AllocatorInstance,
                    &NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayMax
                   );
  }
  lVar4 = (longlong)NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum;
  NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum =
       NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum + 1;
  *(FWeakObjectPtr *)
   (NiagaraVolumeRendererPropertiesLocal::RendererPropertiesToDeferredInit.AllocatorInstance.Data +
   lVar4 * 8) = local_18[0];
  return;
}

// PostLoad @ 149460260

void __thiscall UNiagaraVolumeRendererProperties::PostLoad(UNiagaraVolumeRendererProperties *this)

{
  UNiagaraRendererProperties::PostLoad((UNiagaraRendererProperties *)this);
  (**(code **)(this->_padding_ + 0x350))(this,0);
  FNiagaraRendererMaterialParameters::ConditionalPostLoad(&this->MaterialParameters);
  return;
}

// Serialize @ 149464900

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraVolumeRendererProperties::Serialize
          (UNiagaraVolumeRendererProperties *this,FArchive *param_1)

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

// Serialize @ 149464910

void __thiscall
UNiagaraVolumeRendererProperties::Serialize
          (UNiagaraVolumeRendererProperties *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUNiagaraVolumeRendererProperties @ 149469e80

void __cdecl
UNiagaraVolumeRendererProperties::StaticRegisterNativesUNiagaraVolumeRendererProperties(void)

{
  return;
}

// UpdateMICs @ 14946de70

void __thiscall UNiagaraVolumeRendererProperties::UpdateMICs(UNiagaraVolumeRendererProperties *this)

{
  return;
}

// UpdateSourceModeDerivates @ 14946e570

void __thiscall
UNiagaraVolumeRendererProperties::UpdateSourceModeDerivates
          (UNiagaraVolumeRendererProperties *this,ENiagaraRendererSourceDataMode param_1,
          bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  UNiagaraEmitterBase *pUVar3;
  FNiagaraMaterialAttributeBinding *this_00;
  FNiagaraMaterialAttributeBinding *pFVar4;
  undefined1 local_res20 [8];
  
  UNiagaraRendererProperties::UpdateSourceModeDerivates
            ((UNiagaraRendererProperties *)this,param_1,param_2);
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
  return;
}

// UseHeterogeneousVolumes @ 14946e790

bool __thiscall
UNiagaraVolumeRendererProperties::UseHeterogeneousVolumes(UNiagaraVolumeRendererProperties *this)

{
  return true;
}

