// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 26

// StaticClass @ 149263160

UClass * __cdecl UNiagaraDecalRendererProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDecalRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraDecalRendererProperties,0x248,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDecalRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraDecalRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.InnerSingleton;
}

// UNiagaraDecalRendererProperties @ 149277fc0

UNiagaraDecalRendererProperties * __thiscall
UNiagaraDecalRendererProperties::UNiagaraDecalRendererProperties
          (UNiagaraDecalRendererProperties *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  UNiagaraRendererProperties::UNiagaraRendererProperties((UNiagaraRendererProperties *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UNiagaraDecalRendererProperties__6B_;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MaterialParameterBinding).ResolvedParameter.Name.ComparisonIndex = 0;
  (this->MaterialParameterBinding).ResolvedParameter.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->MaterialParameterBinding).ResolvedParameter.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->MaterialParameterBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex = iVar2;
  this->SourceMode = Particles;
  this->RendererVisibility = 0;
  this->DecalScreenSizeFade = 0.0;
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
  (this->DecalOrientationBinding).RootName.ComparisonIndex = 0;
  (this->DecalOrientationBinding).RootName.Number = 0;
  (this->DecalOrientationBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DecalOrientationBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DecalOrientationBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DecalOrientationBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->DecalOrientationBinding).bBindingExistsOnSource = '\0';
  (this->DecalOrientationBinding).bIsCachedParticleValue = '\x01';
  (this->DecalOrientationBinding).DataSetName.ComparisonIndex = 0;
  (this->DecalOrientationBinding).DataSetName.Number = 0;
  (this->DecalOrientationBinding).BindingSourceMode.Value = '\0';
  (this->DecalSizeBinding).RootName.ComparisonIndex = 0;
  (this->DecalSizeBinding).RootName.Number = 0;
  (this->DecalSizeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DecalSizeBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DecalSizeBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DecalSizeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->DecalSizeBinding).bBindingExistsOnSource = '\0';
  (this->DecalSizeBinding).bIsCachedParticleValue = '\x01';
  (this->DecalSizeBinding).DataSetName.ComparisonIndex = 0;
  (this->DecalSizeBinding).DataSetName.Number = 0;
  (this->DecalSizeBinding).BindingSourceMode.Value = '\0';
  (this->DecalFadeBinding).RootName.ComparisonIndex = 0;
  (this->DecalFadeBinding).RootName.Number = 0;
  (this->DecalFadeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DecalFadeBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DecalFadeBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DecalFadeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->DecalFadeBinding).bBindingExistsOnSource = '\0';
  (this->DecalFadeBinding).bIsCachedParticleValue = '\x01';
  (this->DecalFadeBinding).DataSetName.ComparisonIndex = 0;
  (this->DecalFadeBinding).DataSetName.Number = 0;
  (this->DecalFadeBinding).BindingSourceMode.Value = '\0';
  (this->DecalSortOrderBinding).RootName.ComparisonIndex = 0;
  (this->DecalSortOrderBinding).RootName.Number = 0;
  (this->DecalSortOrderBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DecalSortOrderBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DecalSortOrderBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DecalSortOrderBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->DecalSortOrderBinding).bBindingExistsOnSource = '\0';
  (this->DecalSortOrderBinding).bIsCachedParticleValue = '\x01';
  (this->DecalSortOrderBinding).DataSetName.ComparisonIndex = 0;
  (this->DecalSortOrderBinding).DataSetName.Number = 0;
  (this->DecalSortOrderBinding).BindingSourceMode.Value = '\0';
  (this->DecalColorBinding).RootName.ComparisonIndex = 0;
  (this->DecalColorBinding).RootName.Number = 0;
  (this->DecalColorBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DecalColorBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DecalColorBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DecalColorBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->DecalColorBinding).bBindingExistsOnSource = '\0';
  (this->DecalColorBinding).bIsCachedParticleValue = '\x01';
  (this->DecalColorBinding).DataSetName.ComparisonIndex = 0;
  (this->DecalColorBinding).DataSetName.Number = 0;
  (this->DecalColorBinding).BindingSourceMode.Value = '\0';
  (this->DecalVisibleBinding).RootName.ComparisonIndex = 0;
  (this->DecalVisibleBinding).RootName.Number = 0;
  (this->DecalVisibleBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DecalVisibleBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->DecalVisibleBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->DecalVisibleBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->DecalVisibleBinding).DataSetName.ComparisonIndex = 0;
  (this->DecalVisibleBinding).DataSetName.Number = 0;
  (this->DecalVisibleBinding).BindingSourceMode.Value = '\0';
  (this->DecalVisibleBinding).bBindingExistsOnSource = '\0';
  (this->DecalVisibleBinding).bIsCachedParticleValue = '\x01';
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
  *(undefined1 *)&this->DecalOrientationDataSetAccessor = 1;
  *(undefined4 *)&(this->DecalOrientationDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->DecalSizeDataSetAccessor = 1;
  *(undefined4 *)&(this->DecalSizeDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->DecalFadeDataSetAccessor = 1;
  *(undefined8 *)&(this->DecalFadeDataSetAccessor).field_0x4 = 0xffffffffffffffff;
  *(undefined1 *)&this->DecalColorDataSetAccessor = 1;
  *(undefined8 *)&(this->DecalColorDataSetAccessor).field_0x4 = 0xffffffffffffffff;
  this->RendererVisibilityTagAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  return this;
}

// UNiagaraDecalRendererProperties @ 1492782f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UNiagaraDecalRendererProperties * __thiscall
UNiagaraDecalRendererProperties::UNiagaraDecalRendererProperties
          (UNiagaraDecalRendererProperties *this)

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
  this->_padding_ = (longlong)&___7UNiagaraDecalRendererProperties__6B_;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->MaterialParameterBinding).ResolvedParameter.Name.ComparisonIndex = 0;
  (this->MaterialParameterBinding).ResolvedParameter.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->MaterialParameterBinding).ResolvedParameter.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->MaterialParameterBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex = iVar10;
  this->SourceMode = Particles;
  this->RendererVisibility = 0;
  this->DecalScreenSizeFade = 0.0;
  (this->PositionBinding).RootName.ComparisonIndex = 0;
  (this->PositionBinding).RootName.Number = 0;
  (this->PositionBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PositionBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PositionBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PositionBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  pFVar4 = &this->DecalOrientationBinding;
  (this->PositionBinding).bBindingExistsOnSource = '\0';
  (this->PositionBinding).bIsCachedParticleValue = '\x01';
  (this->PositionBinding).DataSetName.ComparisonIndex = 0;
  (this->PositionBinding).DataSetName.Number = 0;
  (this->PositionBinding).BindingSourceMode.Value = '\0';
  (pFVar4->RootName).ComparisonIndex = 0;
  (pFVar4->RootName).Number = 0;
  (this->DecalOrientationBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DecalOrientationBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->DecalOrientationBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->DecalOrientationBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  pFVar5 = &this->DecalSizeBinding;
  (this->DecalOrientationBinding).bBindingExistsOnSource = '\0';
  (this->DecalOrientationBinding).bIsCachedParticleValue = '\x01';
  (this->DecalOrientationBinding).DataSetName.ComparisonIndex = 0;
  (this->DecalOrientationBinding).DataSetName.Number = 0;
  (this->DecalOrientationBinding).BindingSourceMode.Value = '\0';
  (pFVar5->RootName).ComparisonIndex = 0;
  (pFVar5->RootName).Number = 0;
  (this->DecalSizeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DecalSizeBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->DecalSizeBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->DecalSizeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  pFVar6 = &this->DecalFadeBinding;
  (this->DecalSizeBinding).bBindingExistsOnSource = '\0';
  (this->DecalSizeBinding).bIsCachedParticleValue = '\x01';
  (this->DecalSizeBinding).DataSetName.ComparisonIndex = 0;
  (this->DecalSizeBinding).DataSetName.Number = 0;
  (this->DecalSizeBinding).BindingSourceMode.Value = '\0';
  (pFVar6->RootName).ComparisonIndex = 0;
  (pFVar6->RootName).Number = 0;
  (this->DecalFadeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DecalFadeBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->DecalFadeBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->DecalFadeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  pFVar7 = &this->DecalSortOrderBinding;
  (this->DecalFadeBinding).bBindingExistsOnSource = '\0';
  (this->DecalFadeBinding).bIsCachedParticleValue = '\x01';
  (this->DecalFadeBinding).DataSetName.ComparisonIndex = 0;
  (this->DecalFadeBinding).DataSetName.Number = 0;
  (this->DecalFadeBinding).BindingSourceMode.Value = '\0';
  (pFVar7->RootName).ComparisonIndex = 0;
  (pFVar7->RootName).Number = 0;
  (this->DecalSortOrderBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DecalSortOrderBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->DecalSortOrderBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->DecalSortOrderBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->DecalSortOrderBinding).bBindingExistsOnSource = '\0';
  (this->DecalSortOrderBinding).bIsCachedParticleValue = '\x01';
  (this->DecalSortOrderBinding).DataSetName.ComparisonIndex = 0;
  (this->DecalSortOrderBinding).DataSetName.Number = 0;
  (this->DecalSortOrderBinding).BindingSourceMode.Value = '\0';
  pFVar8 = &this->DecalColorBinding;
  (pFVar8->RootName).ComparisonIndex = 0;
  (pFVar8->RootName).Number = 0;
  (this->DecalColorBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DecalColorBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->DecalColorBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->DecalColorBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->DecalColorBinding).bBindingExistsOnSource = '\0';
  pFVar11 = &this->DecalVisibleBinding;
  (this->DecalColorBinding).bIsCachedParticleValue = '\x01';
  (this->DecalColorBinding).DataSetName.ComparisonIndex = 0;
  (this->DecalColorBinding).DataSetName.Number = 0;
  (this->DecalColorBinding).BindingSourceMode.Value = '\0';
  (pFVar11->RootName).ComparisonIndex = 0;
  (pFVar11->RootName).Number = 0;
  (this->DecalVisibleBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DecalVisibleBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->DecalVisibleBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->DecalVisibleBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->DecalVisibleBinding).bBindingExistsOnSource = '\0';
  (this->DecalVisibleBinding).bIsCachedParticleValue = '\x01';
  (this->DecalVisibleBinding).DataSetName.ComparisonIndex = 0;
  (this->DecalVisibleBinding).DataSetName.Number = 0;
  (this->DecalVisibleBinding).BindingSourceMode.Value = '\0';
  pFVar12 = &this->RendererVisibilityTagBinding;
  (pFVar12->RootName).ComparisonIndex = 0;
  (pFVar12->RootName).Number = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->RendererVisibilityTagBinding).bBindingExistsOnSource = '\0';
  (this->RendererVisibilityTagBinding).bIsCachedParticleValue = '\x01';
  (this->RendererVisibilityTagBinding).DataSetName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).DataSetName.Number = 0;
  (this->RendererVisibilityTagBinding).BindingSourceMode.Value = '\0';
  piVar3 = (int *)((longlong)&this->_padding_ + 4);
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
  *(undefined1 *)&this->DecalOrientationDataSetAccessor = 1;
  *(undefined4 *)&(this->DecalOrientationDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->DecalSizeDataSetAccessor = 1;
  *(undefined4 *)&(this->DecalSizeDataSetAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->DecalFadeDataSetAccessor = 1;
  *(undefined8 *)&(this->DecalFadeDataSetAccessor).field_0x4 = 0xffffffffffffffff;
  *(undefined1 *)&this->DecalColorDataSetAccessor = 1;
  *(undefined8 *)&(this->DecalColorDataSetAccessor).field_0x4 = 0xffffffffffffffff;
  this->RendererVisibilityTagAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  *(undefined4 *)&this->_padding_ = 8;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,8,*piVar3,(ForAnyElementType *)&this->_padding_,8,piVar3);
  plVar9 = (longlong *)this->_padding_;
  *plVar9 = (longlong)&this->PositionBinding;
  plVar9[1] = (longlong)pFVar4;
  plVar9[2] = (longlong)pFVar5;
  plVar9[3] = (longlong)pFVar6;
  plVar9[4] = (longlong)pFVar7;
  plVar9[5] = (longlong)pFVar8;
  plVar9[6] = (longlong)pFVar11;
  plVar9[7] = (longlong)pFVar12;
  return this;
}

// ~UNiagaraDecalRendererProperties @ 14927aaf0

void __thiscall
UNiagaraDecalRendererProperties::~UNiagaraDecalRendererProperties
          (UNiagaraDecalRendererProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraDecalRendererProperties__6B_;
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

// CacheFromCompiledData @ 149286b20

void __thiscall
UNiagaraDecalRendererProperties::CacheFromCompiledData
          (UNiagaraDecalRendererProperties *this,FNiagaraDataSetCompiledData *param_1)

{
  FName FVar1;
  FName *pFVar2;
  code *pcVar3;
  bool bVar4;
  FNiagaraTypeDefinition *pFVar5;
  FNiagaraDataSetAccessor<FNiagaraBool> FVar6;
  FNiagaraDataSetCompiledData *pFVar7;
  longlong lVar8;
  uint uVar9;
  FName *pFVar10;
  uint uVar11;
  FNiagaraTypeDefinitionHandle local_70;
  FName local_6c;
  FNiagaraTypeDefinitionHandle local_64;
  FName local_60;
  FNiagaraTypeDefinitionHandle local_58;
  FName local_54;
  FNiagaraTypeDefinitionHandle local_4c;
  FName local_48;
  FNiagaraTypeDefinitionHandle local_40;
  FName local_3c;
  FNiagaraTypeDefinitionHandle local_34;
  FName local_30;
  FNiagaraTypeDefinitionHandle local_28 [4];
  
  (**(code **)(this->_padding_ + 0x358))(this,this->SourceMode,0);
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->PositionBinding).ParamMapVariable.TypeDefHandle);
  FVar1 = (this->PositionBinding).DataSetName;
  local_70.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_70,pFVar5);
  pFVar7 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->PositionBinding).bIsCachedParticleValue != '\0') {
    pFVar7 = param_1;
  }
  if (pFVar7 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->PositionDataSetAccessor = 1;
    *(undefined4 *)&(this->PositionDataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<FNiagaraPosition>::Init
              ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)&this->PositionDataSetAccessor,
               pFVar7,FVar1);
  }
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->DecalOrientationBinding).ParamMapVariable.TypeDefHandle);
  local_6c = (this->DecalOrientationBinding).DataSetName;
  local_64.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_64,pFVar5);
  pFVar7 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->DecalOrientationBinding).bIsCachedParticleValue != '\0') {
    pFVar7 = param_1;
  }
  if (pFVar7 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->DecalOrientationDataSetAccessor = 1;
    *(undefined4 *)&(this->DecalOrientationDataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<UE::Math::TQuat<float>_>::Init
              ((FNiagaraDataSetAccessorFloat<UE::Math::TQuat<float>_> *)
               &this->DecalOrientationDataSetAccessor,pFVar7,local_6c);
  }
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->DecalSizeBinding).ParamMapVariable.TypeDefHandle);
  local_60 = (this->DecalSizeBinding).DataSetName;
  local_58.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_58,pFVar5);
  pFVar7 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->DecalSizeBinding).bIsCachedParticleValue != '\0') {
    pFVar7 = param_1;
  }
  if (pFVar7 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->DecalSizeDataSetAccessor = 1;
    *(undefined4 *)&(this->DecalSizeDataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_>::Init
              ((FNiagaraDataSetAccessorFloat<UE::Math::TVector<float>_> *)
               &this->DecalSizeDataSetAccessor,pFVar7,local_60);
  }
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->DecalFadeBinding).ParamMapVariable.TypeDefHandle);
  local_54 = (this->DecalFadeBinding).DataSetName;
  local_4c.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_4c,pFVar5);
  pFVar7 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->DecalFadeBinding).bIsCachedParticleValue != '\0') {
    pFVar7 = param_1;
  }
  if (pFVar7 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->DecalFadeDataSetAccessor = 1;
    *(undefined4 *)&(this->DecalFadeDataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<float>::Init
              ((FNiagaraDataSetAccessorFloat<float> *)&this->DecalFadeDataSetAccessor,pFVar7,
               local_54);
  }
  UNiagaraRendererProperties::InitParticleDataSetAccessor<FNiagaraDataSetAccessor<int>_>
            ((UNiagaraRendererProperties *)this,&this->DecalSortOrderDataSetAccessor,param_1,
             &this->DecalSortOrderBinding);
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->DecalColorBinding).ParamMapVariable.TypeDefHandle);
  local_48 = (this->DecalColorBinding).DataSetName;
  local_40.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_40,pFVar5);
  pFVar7 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->DecalColorBinding).bIsCachedParticleValue != '\0') {
    pFVar7 = param_1;
  }
  if (pFVar7 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->DecalColorDataSetAccessor = 1;
    *(undefined4 *)&(this->DecalColorDataSetAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<FLinearColor>::Init
              ((FNiagaraDataSetAccessorFloat<FLinearColor> *)&this->DecalColorDataSetAccessor,pFVar7
               ,local_48);
  }
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->DecalVisibleBinding).ParamMapVariable.TypeDefHandle);
  local_3c = (this->DecalVisibleBinding).DataSetName;
  local_34.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_34,pFVar5);
  pFVar7 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->DecalVisibleBinding).bIsCachedParticleValue != '\0') {
    pFVar7 = param_1;
  }
  this->DecalVisibleAccessor = (FNiagaraDataSetAccessor<FNiagaraBool>)0xffffffff;
  if (pFVar7 != (FNiagaraDataSetCompiledData *)0x0) {
    local_30 = local_3c;
    local_28[0].RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(local_28,&FNiagaraTypeDefinition::BoolDef);
    pFVar2 = (FName *)(pFVar7->Variables).AllocatorInstance.Data;
    for (pFVar10 = pFVar2;
        pFVar10 != (FName *)((longlong)pFVar2 + (longlong)(pFVar7->Variables).ArrayNum * 0xc);
        pFVar10 = (FName *)&pFVar10[1].Number) {
      if ((*pFVar10 == local_30) &&
         (pFVar10[1].ComparisonIndex.Value == local_28[0].RegisteredTypeIndex)) {
        lVar8 = ((longlong)pFVar10 - (longlong)pFVar2) / 6 +
                ((longlong)pFVar10 - (longlong)pFVar2 >> 0x3f);
        uVar9 = (int)(lVar8 >> 1) - (int)(lVar8 >> 0x3f);
        if (uVar9 != 0xffffffff) {
          uVar11 = 0;
          if ((int)uVar9 < (pFVar7->VariableLayouts).ArrayNum) {
            uVar11 = ~uVar9 >> 0x1f;
          }
          if ((uVar11 == 0) &&
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
          FVar6._2_2_ = 0;
          FVar6._0_2_ = *(ushort *)
                         ((pFVar7->VariableLayouts).AllocatorInstance.Data +
                         (longlong)(int)uVar9 * 0x20 + 2);
          this->DecalVisibleAccessor = FVar6;
        }
        break;
      }
    }
  }
  UNiagaraRendererProperties::InitParticleDataSetAccessor<FNiagaraDataSetAccessor<int>_>
            ((UNiagaraRendererProperties *)this,&this->RendererVisibilityTagAccessor,param_1,
             &this->RendererVisibilityTagBinding);
  return;
}

// CreateBoundsCalculator @ 14928aed0

FNiagaraBoundsCalculator * __thiscall
UNiagaraDecalRendererProperties::CreateBoundsCalculator(UNiagaraDecalRendererProperties *this)

{
  char cVar1;
  FNiagaraBoundsCalculator *pFVar2;
  
  cVar1 = (**(code **)(this->_padding_ + 0x308))();
  if (cVar1 == '\x01') {
    return (FNiagaraBoundsCalculator *)0x0;
  }
  pFVar2 = ::operator_new(0x18);
  if (pFVar2 != (FNiagaraBoundsCalculator *)0x0) {
    *pFVar2 = (FNiagaraBoundsCalculator)&___7FNiagaraBoundsCalculatorDecals__6B_;
    pFVar2[1] = (FNiagaraBoundsCalculator)&this->PositionDataSetAccessor;
    pFVar2[2] = (FNiagaraBoundsCalculator)&this->DecalSizeDataSetAccessor;
    return pFVar2;
  }
  return (FNiagaraBoundsCalculator *)0x0;
}

// CreateEmitterRenderer @ 14928b520

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
UNiagaraDecalRendererProperties::CreateEmitterRenderer
          (UNiagaraDecalRendererProperties *this,Type param_1,FNiagaraEmitterInstance *param_2,
          FNiagaraSystemInstanceController *param_3)

{
  FNiagaraRendererDecals *pFVar1;
  
  pFVar1 = ::operator_new(400);
  if (pFVar1 == (FNiagaraRendererDecals *)0x0) {
    pFVar1 = (FNiagaraRendererDecals *)0x0;
  }
  else {
    pFVar1 = FNiagaraRendererDecals::FNiagaraRendererDecals
                       (pFVar1,param_1,(UNiagaraRendererProperties *)this,param_2);
  }
  (**(code **)(pFVar1->_padding_ + 8))(pFVar1,this,param_2,param_3);
  return (FNiagaraRenderer *)pFVar1;
}

// GetCurrentSourceMode @ 1492a15b0

ENiagaraRendererSourceDataMode __thiscall
UNiagaraDecalRendererProperties::GetCurrentSourceMode(UNiagaraDecalRendererProperties *this)

{
  return this->SourceMode;
}

// GetDecalFadeVariable @ 1492a15c0

FNiagaraVariable * __cdecl
UNiagaraDecalRendererProperties::GetDecalFadeVariable(FNiagaraVariable *__return_storage_ptr__)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this;
  FNiagaraVariable *pFVar6;
  size_t _Size;
  undefined4 local_res8 [2];
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_res8[0] = 0x3f800000;
      ::FName::FName(&local_res10,L"Particles.DecalFade");
      Variable._padding_._0_4_ = local_res10.ComparisonIndex.Value;
      Variable._padding_._4_4_ = local_res10.Number;
      Variable._padding_._0_4_ =
           FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)&Variable._padding_,
                      &FNiagaraTypeDefinition::FloatDef);
      Variable.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      Variable.VarData.ArrayNum = 0;
      Variable.VarData.ArrayMax = 0;
      this = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
      iVar5 = FNiagaraTypeDefinition::GetSize(this);
      if (iVar5 != 4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == TypeDefHandle->GetSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                           ,0x5db,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FNiagaraVariable *)(*pcVar3)();
          return pFVar6;
        }
      }
      FNiagaraVariable::AllocateData(&Variable);
      memcpy(Variable.VarData.AllocatorInstance.Data,local_res8,(longlong)Variable.VarData.ArrayNum)
      ;
      atexit(`UNiagaraDecalRendererProperties::GetDecalFadeVariable'::__l2::
             _dynamic_atexit_destructor_for__Variable__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar1 = &__return_storage_ptr__->VarData;
  __return_storage_ptr__->_padding_ = Variable._padding_;
  *(int *)&__return_storage_ptr__->_padding_ = (int)Variable._padding_;
  piVar2 = &(__return_storage_ptr__->VarData).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Src = Variable.VarData.AllocatorInstance;
  iVar5 = Variable.VarData.ArrayNum;
  _Size = (size_t)Variable.VarData.ArrayNum;
  (__return_storage_ptr__->VarData).ArrayNum = Variable.VarData.ArrayNum;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,_Size);
  }
  return __return_storage_ptr__;
}

// GetDecalOrientationVariable @ 1492a1780

FNiagaraVariable * __cdecl
UNiagaraDecalRendererProperties::GetDecalOrientationVariable
          (FNiagaraVariable *__return_storage_ptr__)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this;
  FNiagaraVariable *pFVar6;
  size_t _Size;
  FName local_res8;
  TRotator<float> local_38;
  TQuat<float> local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_38.Pitch = -90.0;
      local_38.Yaw = 0.0;
      local_38.Roll = 90.0;
      UE::Math::TRotator<float>::Quaternion(&local_38,&local_28);
      ::FName::FName(&local_res8,L"Particles.DecalOrientation");
      Variable._padding_._0_4_ = local_res8.ComparisonIndex.Value;
      Variable._padding_._4_4_ = local_res8.Number;
      Variable._padding_._0_4_ =
           FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)&Variable._padding_,
                      &FNiagaraTypeDefinition::QuatDef);
      Variable.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      Variable.VarData.ArrayNum = 0;
      Variable.VarData.ArrayMax = 0;
      this = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
      iVar5 = FNiagaraTypeDefinition::GetSize(this);
      if (iVar5 != 0x10) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == TypeDefHandle->GetSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                           ,0x5db,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FNiagaraVariable *)(*pcVar3)();
          return pFVar6;
        }
      }
      FNiagaraVariable::AllocateData(&Variable);
      memcpy(Variable.VarData.AllocatorInstance.Data,&local_28,(longlong)Variable.VarData.ArrayNum);
      atexit(`UNiagaraDecalRendererProperties::GetDecalOrientationVariable'::__l2::
             _dynamic_atexit_destructor_for__Variable__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar1 = &__return_storage_ptr__->VarData;
  __return_storage_ptr__->_padding_ = Variable._padding_;
  *(int *)&__return_storage_ptr__->_padding_ = (int)Variable._padding_;
  piVar2 = &(__return_storage_ptr__->VarData).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Src = Variable.VarData.AllocatorInstance;
  iVar5 = Variable.VarData.ArrayNum;
  _Size = (size_t)Variable.VarData.ArrayNum;
  (__return_storage_ptr__->VarData).ArrayNum = Variable.VarData.ArrayNum;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,_Size);
  }
  return __return_storage_ptr__;
}

// GetDecalSizeVariable @ 1492a1960

FNiagaraVariable * __cdecl
UNiagaraDecalRendererProperties::GetDecalSizeVariable(FNiagaraVariable *__return_storage_ptr__)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this;
  FNiagaraVariable *pFVar6;
  size_t _Size;
  FName local_res8;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_28 = 0x42480000;
      local_24 = 0x42480000;
      local_20 = 0x42480000;
      ::FName::FName(&local_res8,L"Particles.DecalSize");
      Variable._padding_._0_4_ = local_res8.ComparisonIndex.Value;
      Variable._padding_._4_4_ = local_res8.Number;
      Variable._padding_._0_4_ =
           FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)&Variable._padding_,
                      &FNiagaraTypeDefinition::Vec3Def);
      Variable.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      Variable.VarData.ArrayNum = 0;
      Variable.VarData.ArrayMax = 0;
      this = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
      iVar5 = FNiagaraTypeDefinition::GetSize(this);
      if (iVar5 != 0xc) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == TypeDefHandle->GetSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                           ,0x5db,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FNiagaraVariable *)(*pcVar3)();
          return pFVar6;
        }
      }
      FNiagaraVariable::AllocateData(&Variable);
      memcpy(Variable.VarData.AllocatorInstance.Data,&local_28,(longlong)Variable.VarData.ArrayNum);
      atexit(`UNiagaraDecalRendererProperties::GetDecalSizeVariable'::__l2::
             _dynamic_atexit_destructor_for__Variable__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar1 = &__return_storage_ptr__->VarData;
  __return_storage_ptr__->_padding_ = Variable._padding_;
  *(int *)&__return_storage_ptr__->_padding_ = (int)Variable._padding_;
  piVar2 = &(__return_storage_ptr__->VarData).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Src = Variable.VarData.AllocatorInstance;
  iVar5 = Variable.VarData.ArrayNum;
  _Size = (size_t)Variable.VarData.ArrayNum;
  (__return_storage_ptr__->VarData).ArrayNum = Variable.VarData.ArrayNum;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,_Size);
  }
  return __return_storage_ptr__;
}

// GetDecalVisibleVariable @ 1492a1b30

FNiagaraVariable * __cdecl
UNiagaraDecalRendererProperties::GetDecalVisibleVariable(FNiagaraVariable *__return_storage_ptr__)

{
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  int iVar5;
  FNiagaraTypeDefinition *this;
  FNiagaraVariable *pFVar6;
  size_t _Size;
  undefined4 local_res8 [2];
  FName local_res10;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      local_res8[0] = 0xffffffff;
      ::FName::FName(&local_res10,L"Particles.DecalVisible");
      Variable._padding_._0_4_ = local_res10.ComparisonIndex.Value;
      Variable._padding_._4_4_ = local_res10.Number;
      Variable._padding_._0_4_ =
           FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)&Variable._padding_,
                      &FNiagaraTypeDefinition::BoolDef);
      Variable.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      Variable.VarData.ArrayNum = 0;
      Variable.VarData.ArrayMax = 0;
      this = FNiagaraTypeDefinitionHandle::Resolve
                       ((FNiagaraTypeDefinitionHandle *)&Variable._padding_);
      iVar5 = FNiagaraTypeDefinition::GetSize(this);
      if (iVar5 != 4) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("sizeof(T) == TypeDefHandle->GetSize()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                           ,0x5db,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          pFVar6 = (FNiagaraVariable *)(*pcVar3)();
          return pFVar6;
        }
      }
      FNiagaraVariable::AllocateData(&Variable);
      memcpy(Variable.VarData.AllocatorInstance.Data,local_res8,(longlong)Variable.VarData.ArrayNum)
      ;
      atexit(`UNiagaraDecalRendererProperties::GetDecalVisibleVariable'::__l2::
             _dynamic_atexit_destructor_for__Variable__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  pTVar1 = &__return_storage_ptr__->VarData;
  __return_storage_ptr__->_padding_ = Variable._padding_;
  *(int *)&__return_storage_ptr__->_padding_ = (int)Variable._padding_;
  piVar2 = &(__return_storage_ptr__->VarData).ArrayMax;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  _Src = Variable.VarData.AllocatorInstance;
  iVar5 = Variable.VarData.ArrayNum;
  _Size = (size_t)Variable.VarData.ArrayNum;
  (__return_storage_ptr__->VarData).ArrayNum = Variable.VarData.ArrayNum;
  if (iVar5 == 0) {
    *piVar2 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,iVar5,0,&pTVar1->AllocatorInstance,iVar5,piVar2);
    memcpy((pTVar1->AllocatorInstance).Data,_Src.Data,_Size);
  }
  return __return_storage_ptr__;
}

// GetMaterial @ 1492a48f0

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

UMaterialInterface * __thiscall
UNiagaraDecalRendererProperties::GetMaterial
          (UNiagaraDecalRendererProperties *this,FNiagaraEmitterInstance *param_1)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  bool bVar1;
  FNiagaraTypeDefinition *pFVar2;
  UClass *pUVar3;
  TObjectPtr<UMaterialInterface>_u_0 TVar4;
  TObjectPtr<UMaterialInterface>_u_0 local_res10;
  FName local_28;
  FNiagaraTypeDefinitionHandle local_20 [2];
  void *local_18;
  undefined8 local_10;
  
  if (param_1 != (FNiagaraEmitterInstance *)0x0) {
    local_28 = (this->MaterialParameterBinding).ResolvedParameter.Name;
    TVar4.DebugPtr = (UMaterialInterface *)0x0;
    local_20[0].RegisteredTypeIndex =
         (this->MaterialParameterBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex;
    local_18 = (void *)0x0;
    local_10 = 0;
    if ((((local_28 == (FName)0x0) ||
         (pFVar2 = FNiagaraTypeDefinitionHandle::Resolve(local_20),
         (pFVar2->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) ||
        (param_1->ParentSystemInstance == (FNiagaraSystemInstance *)0x0)) ||
       (this_00 = param_1->ParentSystemInstance->OverrideParameters,
       this_00 == (FNiagaraUserRedirectionParameterStore *)0x0)) {
      local_res10.DebugPtr = (UMaterialInterface *)0x0;
    }
    else {
      (**(code **)(this_00->_padding_ + 0x58))(this_00,&local_28,0);
      FNiagaraParameterStore::GetUObject((FNiagaraParameterStore *)this_00,(int)&local_res10);
      TVar4.DebugPtr = (UMaterialInterface *)0x0;
      if (local_res10.DebugPtr != (UMaterialInterface *)0x0) {
        pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
        bVar1 = FObjectPtr::IsA(&local_res10.ObjectPtr,pUVar3);
        if (bVar1) {
          TVar4 = local_res10;
        }
      }
    }
    if (local_18 != (void *)0x0) {
      FMemory::Free(local_18);
    }
    if (TVar4.DebugPtr != (UMaterialInterface *)0x0) {
      return TVar4.DebugPtr;
    }
  }
  return (this->Material).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 1492a6050

UClass * __cdecl UNiagaraDecalRendererProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDecalRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraDecalRendererProperties,0x248,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDecalRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraDecalRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDecalRendererProperties.InnerSingleton;
}

// GetUsedMaterials @ 1492a8480

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
UNiagaraDecalRendererProperties::GetUsedMaterials
          (UNiagaraDecalRendererProperties *this,FNiagaraEmitterInstance *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FNiagaraUserRedirectionParameterStore *this_00;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FNiagaraTypeDefinition *pFVar5;
  UClass *pUVar6;
  TObjectPtr<UMaterialInterface>_u_0 TVar7;
  TObjectPtr<UMaterialInterface>_u_0 local_res10;
  TObjectPtr<UMaterialInterface>_u_0 local_38;
  FName local_30;
  FNiagaraTypeDefinitionHandle local_28 [2];
  void *local_20;
  undefined8 local_18;
  
  if (param_1 != (FNiagaraEmitterInstance *)0x0) {
    local_30 = (this->MaterialParameterBinding).ResolvedParameter.Name;
    TVar7.DebugPtr = (UMaterialInterface *)0x0;
    local_28[0].RegisteredTypeIndex =
         (this->MaterialParameterBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex;
    local_20 = (void *)0x0;
    local_18 = 0;
    if ((((local_30 == (FName)0x0) ||
         (pFVar5 = FNiagaraTypeDefinitionHandle::Resolve(local_28),
         (pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) ||
        (param_1->ParentSystemInstance == (FNiagaraSystemInstance *)0x0)) ||
       (this_00 = param_1->ParentSystemInstance->OverrideParameters,
       this_00 == (FNiagaraUserRedirectionParameterStore *)0x0)) {
      local_res10.DebugPtr = (UMaterialInterface *)0x0;
    }
    else {
      (**(code **)(this_00->_padding_ + 0x58))(this_00,&local_30,0);
      FNiagaraParameterStore::GetUObject((FNiagaraParameterStore *)this_00,(int)&local_res10);
      TVar7.DebugPtr = (UMaterialInterface *)0x0;
      if (local_res10.DebugPtr != (UMaterialInterface *)0x0) {
        pUVar6 = Z_Construct_UClass_UMaterialInterface_NoRegister();
        bVar3 = FObjectPtr::IsA(&local_res10.ObjectPtr,pUVar6);
        if (bVar3) {
          TVar7 = local_res10;
        }
      }
    }
    if (local_20 != (void *)0x0) {
      FMemory::Free(local_20);
    }
    local_38 = TVar7;
    if (TVar7.DebugPtr != (UMaterialInterface *)0x0) goto LAB_1492a8587;
  }
  local_38 = (TObjectPtr<UMaterialInterface>_u_0)(this->Material).field0_0x0.DebugPtr;
  if (local_38.DebugPtr == (UMaterialInterface *)0x0) {
    return;
  }
LAB_1492a8587:
  pTVar1 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_2->AllocatorInstance).Data;
  if (((pTVar1 <= &local_38) && (&local_38 < pTVar1 + param_2->ArrayMax)) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
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

// InitCDOPropertiesAfterModuleStartup @ 1492abe40

void __cdecl UNiagaraDecalRendererProperties::InitCDOPropertiesAfterModuleStartup(void)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  UClass *pUVar3;
  UNiagaraDecalRendererProperties *pUVar4;
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
  pUVar4 = (UNiagaraDecalRendererProperties *)(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar4 != (UNiagaraDecalRendererProperties *)0x0) {
    pUVar3 = StaticClass();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) {
      NiagaraDecalRendererPropertiesLocal::SetupBindings(pUVar4);
      iVar2 = NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum;
      uVar6 = (ulonglong)
              NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)
               (NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.
                AllocatorInstance.Data + uVar6 * 8);
      this = NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.AllocatorInstance
      ;
      while( true ) {
        if ((int)uVar6 != iVar2) {
          `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraDecalRendererProperties,FWeakObjectPtr>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((FWeakObjectPtr *)this.Data == pFVar1) break;
        pUVar4 = (UNiagaraDecalRendererProperties *)FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data)
        ;
        if (pUVar4 != (UNiagaraDecalRendererProperties *)0x0) {
          NiagaraDecalRendererPropertiesLocal::SetupBindings(pUVar4);
        }
        uVar6 = (ulonglong)
                (uint)NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum
        ;
        this.Data = this.Data + 8;
      }
      return;
    }
    pFVar5 = GetTypeName<UNiagaraDecalRendererProperties>(&local_28);
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
  pFVar5 = GetTypeName<UNiagaraDecalRendererProperties>(&local_28);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar7);
}

// IsSimTargetSupported @ 1492adb70

bool __thiscall
UNiagaraDecalRendererProperties::IsSimTargetSupported
          (UNiagaraDecalRendererProperties *this,ENiagaraSimTarget param_1)

{
  return param_1 == CPUSim;
}

// NeedsMIDsForMaterials @ 1492ae570

bool __thiscall
UNiagaraDecalRendererProperties::NeedsMIDsForMaterials(UNiagaraDecalRendererProperties *this)

{
  if (((((this->MaterialParameters).AttributeBindings.ArrayNum < 1) &&
       ((this->MaterialParameters).ScalarParameters.ArrayNum < 1)) &&
      ((this->MaterialParameters).VectorParameters.ArrayNum < 1)) &&
     ((this->MaterialParameters).TextureParameters.ArrayNum < 1)) {
    return false;
  }
  return true;
}

// PopulateRequiredBindings @ 1492aedc0

bool __thiscall
UNiagaraDecalRendererProperties::PopulateRequiredBindings
          (UNiagaraDecalRendererProperties *this,FNiagaraParameterStore *param_1)

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

// PostInitProperties @ 1492af2b0

void __thiscall
UNiagaraDecalRendererProperties::PostInitProperties(UNiagaraDecalRendererProperties *this)

{
  code *pcVar1;
  bool bVar2;
  FModuleManager *this_00;
  FName *pFVar3;
  longlong lVar4;
  UNiagaraDecalRendererProperties *local_res8;
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
    NiagaraDecalRendererPropertiesLocal::SetupBindings(this);
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
  if (((NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.AllocatorInstance.Data
        <= local_18) &&
      (local_18 <
       (FWeakObjectPtr *)
       (NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.AllocatorInstance.Data
       + (longlong)NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayMax *
         8))) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum ==
      NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayMax) {
    NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.
                           AllocatorInstance,
                    &NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayMax)
    ;
  }
  lVar4 = (longlong)NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum;
  NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum =
       NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.ArrayNum + 1;
  *(FWeakObjectPtr *)
   (NiagaraDecalRendererPropertiesLocal::RendererPropertiesToDeferredInit.AllocatorInstance.Data +
   lVar4 * 8) = local_18[0];
  return;
}

// PostLoad @ 1492afa90

void __thiscall UNiagaraDecalRendererProperties::PostLoad(UNiagaraDecalRendererProperties *this)

{
  UNiagaraRendererProperties::PostLoad((UNiagaraRendererProperties *)this);
  (**(code **)(this->_padding_ + 0x350))(this,0);
  FNiagaraRendererMaterialParameters::ConditionalPostLoad(&this->MaterialParameters);
  return;
}

// Serialize @ 1492b5320

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraDecalRendererProperties::Serialize(UNiagaraDecalRendererProperties *this,FArchive *param_1)

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

// Serialize @ 1492b5330

void __thiscall
UNiagaraDecalRendererProperties::Serialize
          (UNiagaraDecalRendererProperties *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// StaticRegisterNativesUNiagaraDecalRendererProperties @ 1492b6930

void __cdecl
UNiagaraDecalRendererProperties::StaticRegisterNativesUNiagaraDecalRendererProperties(void)

{
  return;
}

// UpdateMICs @ 1492bf340

void __thiscall UNiagaraDecalRendererProperties::UpdateMICs(UNiagaraDecalRendererProperties *this)

{
  return;
}

// UpdateSourceModeDerivates @ 1492bfe30

void __thiscall
UNiagaraDecalRendererProperties::UpdateSourceModeDerivates
          (UNiagaraDecalRendererProperties *this,ENiagaraRendererSourceDataMode param_1,bool param_2
          )

{
  int iVar1;
  UClass *pUVar2;
  UNiagaraEmitterBase *pUVar3;
  FNiagaraMaterialAttributeBinding *this_00;
  FNiagaraMaterialAttributeBinding *pFVar4;
  undefined1 local_res20 [8];
  
  UNiagaraRendererProperties::UpdateSourceModeDerivates
            ((UNiagaraRendererProperties *)this,param_1,param_2);
  pUVar2 = UNiagaraEmitterBase::StaticClass();
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

