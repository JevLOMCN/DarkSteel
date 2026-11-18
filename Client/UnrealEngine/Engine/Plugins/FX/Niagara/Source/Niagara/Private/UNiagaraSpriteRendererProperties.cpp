// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 29

// StaticClass @ 1493c2300

UClass * __cdecl UNiagaraSpriteRendererProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSpriteRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraSpriteRendererProperties,0x528,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraSpriteRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraSpriteRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties.InnerSingleton;
}

// UNiagaraSpriteRendererProperties @ 1493cf060

UNiagaraSpriteRendererProperties * __thiscall
UNiagaraSpriteRendererProperties::UNiagaraSpriteRendererProperties
          (UNiagaraSpriteRendererProperties *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  UNiagaraRendererProperties::UNiagaraRendererProperties((UNiagaraRendererProperties *)this,param_1)
  ;
  this->_padding_ = (longlong)&___7UNiagaraSpriteRendererProperties__6B_;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding(&this->MaterialUserParamBinding);
  this->bCastShadows = '\x01';
  this->SourceMode = Particles;
  this->Alignment = Automatic;
  this->FacingMode = Automatic;
  this->SortMode = None;
  this->MacroUVRadius = 0.0;
  (this->PivotInUVSpace).field0_0x0._s_0.X = 0.5;
  (this->PivotInUVSpace).field0_0x0._s_0.Y = 0.5;
  (this->SubImageSize).field0_0x0._s_0.X = 1.0;
  (this->SubImageSize).field0_0x0._s_0.Y = 1.0;
  this->SortPrecision = Default;
  this->GpuTranslucentLatency = ProjectDefault;
  this->PixelCoverageMode = Automatic;
  this->PixelCoverageBlend = 1.0;
  this->MinFacingCameraBlendDistance = 0.0;
  this->MaxFacingCameraBlendDistance = 0.0;
  this->MaxCameraDistance = 1000.0;
  this->RendererVisibility = 0;
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
  (this->SpriteRotationBinding).RootName.ComparisonIndex = 0;
  (this->SpriteRotationBinding).RootName.Number = 0;
  (this->SpriteRotationBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->SpriteRotationBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->SpriteRotationBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->SpriteRotationBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->SpriteRotationBinding).bBindingExistsOnSource = '\0';
  (this->SpriteRotationBinding).bIsCachedParticleValue = '\x01';
  (this->SpriteRotationBinding).DataSetName.ComparisonIndex = 0;
  (this->SpriteRotationBinding).DataSetName.Number = 0;
  (this->SpriteRotationBinding).BindingSourceMode.Value = '\0';
  (this->SpriteSizeBinding).RootName.ComparisonIndex = 0;
  (this->SpriteSizeBinding).RootName.Number = 0;
  (this->SpriteSizeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->SpriteSizeBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->SpriteSizeBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->SpriteSizeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->SpriteSizeBinding).bBindingExistsOnSource = '\0';
  (this->SpriteSizeBinding).bIsCachedParticleValue = '\x01';
  (this->SpriteSizeBinding).DataSetName.ComparisonIndex = 0;
  (this->SpriteSizeBinding).DataSetName.Number = 0;
  (this->SpriteSizeBinding).BindingSourceMode.Value = '\0';
  (this->SpriteFacingBinding).RootName.ComparisonIndex = 0;
  (this->SpriteFacingBinding).RootName.Number = 0;
  (this->SpriteFacingBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->SpriteFacingBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->SpriteFacingBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->SpriteFacingBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->SpriteFacingBinding).bBindingExistsOnSource = '\0';
  (this->SpriteFacingBinding).bIsCachedParticleValue = '\x01';
  (this->SpriteFacingBinding).DataSetName.ComparisonIndex = 0;
  (this->SpriteFacingBinding).DataSetName.Number = 0;
  (this->SpriteFacingBinding).BindingSourceMode.Value = '\0';
  (this->SpriteAlignmentBinding).RootName.ComparisonIndex = 0;
  (this->SpriteAlignmentBinding).RootName.Number = 0;
  (this->SpriteAlignmentBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->SpriteAlignmentBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->SpriteAlignmentBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->SpriteAlignmentBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->SpriteAlignmentBinding).bBindingExistsOnSource = '\0';
  (this->SpriteAlignmentBinding).bIsCachedParticleValue = '\x01';
  (this->SpriteAlignmentBinding).DataSetName.ComparisonIndex = 0;
  (this->SpriteAlignmentBinding).DataSetName.Number = 0;
  (this->SpriteAlignmentBinding).BindingSourceMode.Value = '\0';
  (this->SubImageIndexBinding).RootName.ComparisonIndex = 0;
  (this->SubImageIndexBinding).RootName.Number = 0;
  (this->SubImageIndexBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->SubImageIndexBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->SubImageIndexBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->SubImageIndexBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->SubImageIndexBinding).bBindingExistsOnSource = '\0';
  (this->SubImageIndexBinding).bIsCachedParticleValue = '\x01';
  (this->SubImageIndexBinding).DataSetName.ComparisonIndex = 0;
  (this->SubImageIndexBinding).DataSetName.Number = 0;
  (this->SubImageIndexBinding).BindingSourceMode.Value = '\0';
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
  (this->CameraOffsetBinding).RootName.ComparisonIndex = 0;
  (this->CameraOffsetBinding).RootName.Number = 0;
  (this->CameraOffsetBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->CameraOffsetBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->CameraOffsetBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->CameraOffsetBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->CameraOffsetBinding).bBindingExistsOnSource = '\0';
  (this->CameraOffsetBinding).bIsCachedParticleValue = '\x01';
  (this->CameraOffsetBinding).DataSetName.ComparisonIndex = 0;
  (this->CameraOffsetBinding).DataSetName.Number = 0;
  (this->CameraOffsetBinding).BindingSourceMode.Value = '\0';
  (this->UVScaleBinding).RootName.ComparisonIndex = 0;
  (this->UVScaleBinding).RootName.Number = 0;
  (this->UVScaleBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->UVScaleBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->UVScaleBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->UVScaleBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->UVScaleBinding).bBindingExistsOnSource = '\0';
  (this->UVScaleBinding).bIsCachedParticleValue = '\x01';
  (this->UVScaleBinding).DataSetName.ComparisonIndex = 0;
  (this->UVScaleBinding).DataSetName.Number = 0;
  (this->UVScaleBinding).BindingSourceMode.Value = '\0';
  (this->PivotOffsetBinding).RootName.ComparisonIndex = 0;
  (this->PivotOffsetBinding).RootName.Number = 0;
  (this->PivotOffsetBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PivotOffsetBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PivotOffsetBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PivotOffsetBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PivotOffsetBinding).bBindingExistsOnSource = '\0';
  (this->PivotOffsetBinding).bIsCachedParticleValue = '\x01';
  (this->PivotOffsetBinding).DataSetName.ComparisonIndex = 0;
  (this->PivotOffsetBinding).DataSetName.Number = 0;
  (this->PivotOffsetBinding).BindingSourceMode.Value = '\0';
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
  (this->CustomSortingBinding).RootName.ComparisonIndex = 0;
  (this->CustomSortingBinding).RootName.Number = 0;
  (this->CustomSortingBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->CustomSortingBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->CustomSortingBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->CustomSortingBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->CustomSortingBinding).bBindingExistsOnSource = '\0';
  (this->CustomSortingBinding).bIsCachedParticleValue = '\x01';
  (this->CustomSortingBinding).DataSetName.ComparisonIndex = 0;
  (this->CustomSortingBinding).DataSetName.Number = 0;
  (this->CustomSortingBinding).BindingSourceMode.Value = '\0';
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
  (this->PrevVelocityBinding).RootName.ComparisonIndex = 0;
  (this->PrevVelocityBinding).RootName.Number = 0;
  (this->PrevVelocityBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevVelocityBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PrevVelocityBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevVelocityBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PrevVelocityBinding).bBindingExistsOnSource = '\0';
  (this->PrevVelocityBinding).bIsCachedParticleValue = '\x01';
  (this->PrevVelocityBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevVelocityBinding).DataSetName.Number = 0;
  (this->PrevVelocityBinding).BindingSourceMode.Value = '\0';
  (this->PrevSpriteRotationBinding).RootName.ComparisonIndex = 0;
  (this->PrevSpriteRotationBinding).RootName.Number = 0;
  (this->PrevSpriteRotationBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevSpriteRotationBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PrevSpriteRotationBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevSpriteRotationBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PrevSpriteRotationBinding).bBindingExistsOnSource = '\0';
  (this->PrevSpriteRotationBinding).bIsCachedParticleValue = '\x01';
  (this->PrevSpriteRotationBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevSpriteRotationBinding).DataSetName.Number = 0;
  (this->PrevSpriteRotationBinding).BindingSourceMode.Value = '\0';
  (this->PrevSpriteSizeBinding).RootName.ComparisonIndex = 0;
  (this->PrevSpriteSizeBinding).RootName.Number = 0;
  (this->PrevSpriteSizeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevSpriteSizeBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PrevSpriteSizeBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevSpriteSizeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PrevSpriteSizeBinding).bBindingExistsOnSource = '\0';
  (this->PrevSpriteSizeBinding).bIsCachedParticleValue = '\x01';
  (this->PrevSpriteSizeBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevSpriteSizeBinding).DataSetName.Number = 0;
  (this->PrevSpriteSizeBinding).BindingSourceMode.Value = '\0';
  (this->PrevSpriteFacingBinding).RootName.ComparisonIndex = 0;
  (this->PrevSpriteFacingBinding).RootName.Number = 0;
  (this->PrevSpriteFacingBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevSpriteFacingBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PrevSpriteFacingBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevSpriteFacingBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PrevSpriteFacingBinding).bBindingExistsOnSource = '\0';
  (this->PrevSpriteFacingBinding).bIsCachedParticleValue = '\x01';
  (this->PrevSpriteFacingBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevSpriteFacingBinding).DataSetName.Number = 0;
  (this->PrevSpriteFacingBinding).BindingSourceMode.Value = '\0';
  (this->PrevSpriteAlignmentBinding).RootName.ComparisonIndex = 0;
  (this->PrevSpriteAlignmentBinding).RootName.Number = 0;
  (this->PrevSpriteAlignmentBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevSpriteAlignmentBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PrevSpriteAlignmentBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevSpriteAlignmentBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PrevSpriteAlignmentBinding).bBindingExistsOnSource = '\0';
  (this->PrevSpriteAlignmentBinding).bIsCachedParticleValue = '\x01';
  (this->PrevSpriteAlignmentBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevSpriteAlignmentBinding).DataSetName.Number = 0;
  (this->PrevSpriteAlignmentBinding).BindingSourceMode.Value = '\0';
  (this->PrevCameraOffsetBinding).RootName.ComparisonIndex = 0;
  (this->PrevCameraOffsetBinding).RootName.Number = 0;
  (this->PrevCameraOffsetBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevCameraOffsetBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PrevCameraOffsetBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevCameraOffsetBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PrevCameraOffsetBinding).bBindingExistsOnSource = '\0';
  (this->PrevCameraOffsetBinding).bIsCachedParticleValue = '\x01';
  (this->PrevCameraOffsetBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevCameraOffsetBinding).DataSetName.Number = 0;
  (this->PrevCameraOffsetBinding).BindingSourceMode.Value = '\0';
  (this->PrevPivotOffsetBinding).RootName.ComparisonIndex = 0;
  (this->PrevPivotOffsetBinding).RootName.Number = 0;
  (this->PrevPivotOffsetBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevPivotOffsetBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->PrevPivotOffsetBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevPivotOffsetBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->PrevPivotOffsetBinding).bBindingExistsOnSource = '\0';
  (this->PrevPivotOffsetBinding).bIsCachedParticleValue = '\x01';
  (this->PrevPivotOffsetBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevPivotOffsetBinding).DataSetName.Number = 0;
  (this->PrevPivotOffsetBinding).BindingSourceMode.Value = '\0';
  this->MaterialParamValidMask = 0;
  (this->RendererLayoutWithCustomSort).VFVariables_GT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithCustomSort).VFVariables_GT.ArrayNum = 0;
  (this->RendererLayoutWithCustomSort).VFVariables_GT.ArrayMax = 0;
  (this->RendererLayoutWithCustomSort).VFVariables_RT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithCustomSort).VFVariables_RT.ArrayNum = 0;
  (this->RendererLayoutWithCustomSort).VFVariables_RT.ArrayMax = 0;
  (this->RendererLayoutWithCustomSort).TotalFloatComponents_GT = 0;
  (this->RendererLayoutWithCustomSort).TotalHalfComponents_GT = 0;
  (this->RendererLayoutWithCustomSort).TotalFloatComponents_RT = 0;
  (this->RendererLayoutWithCustomSort).TotalHalfComponents_RT = 0;
  (this->RendererLayoutWithoutCustomSort).VFVariables_GT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithoutCustomSort).VFVariables_GT.ArrayNum = 0;
  (this->RendererLayoutWithoutCustomSort).VFVariables_GT.ArrayMax = 0;
  (this->RendererLayoutWithoutCustomSort).VFVariables_RT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithoutCustomSort).VFVariables_RT.ArrayNum = 0;
  (this->RendererLayoutWithoutCustomSort).VFVariables_RT.ArrayMax = 0;
  (this->RendererLayoutWithoutCustomSort).TotalFloatComponents_GT = 0;
  (this->RendererLayoutWithoutCustomSort).TotalHalfComponents_GT = 0;
  (this->RendererLayoutWithoutCustomSort).TotalFloatComponents_RT = 0;
  (this->RendererLayoutWithoutCustomSort).TotalHalfComponents_RT = 0;
  (this->DerivedData).BoundingGeometry.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DerivedData).BoundingGeometry.ArrayNum = 0;
  (this->DerivedData).BoundingGeometry.ArrayMax = 0;
  return this;
}

// UNiagaraSpriteRendererProperties @ 1493cf8d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UNiagaraSpriteRendererProperties * __thiscall
UNiagaraSpriteRendererProperties::UNiagaraSpriteRendererProperties
          (UNiagaraSpriteRendererProperties *this)

{
  byte *pbVar1;
  int *piVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  FNiagaraVariableAttributeBinding *pFVar5;
  FNiagaraVariableAttributeBinding *pFVar6;
  FNiagaraVariableAttributeBinding *pFVar7;
  FNiagaraVariableAttributeBinding *pFVar8;
  longlong *plVar9;
  int iVar10;
  FNiagaraVariableAttributeBinding *pFVar11;
  FNiagaraVariableAttributeBinding *pFVar12;
  undefined1 auStackY_178 [32];
  TObjectPtr<UObject>_u_0 local_130;
  undefined2 local_128;
  undefined1 local_126;
  undefined8 local_124;
  undefined4 local_11c;
  FNiagaraVariableAttributeBinding *local_118;
  FNiagaraVariableAttributeBinding *pFStack_110;
  FNiagaraVariableAttributeBinding *local_108;
  FNiagaraVariableAttributeBinding *pFStack_100;
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
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_178;
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
  this->_padding_ = (longlong)&___7UNiagaraSpriteRendererProperties__6B_;
  (this->Material).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  local_130.DebugPtr = (UObject *)Z_Construct_UClass_UMaterialInterface_NoRegister();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     ((UClass *)local_130.DebugPtr != (UClass *)0x0)) {
    UE::GC::MarkAsReachable(local_130.DebugPtr);
  }
  local_126 = 0;
  local_128 = 1;
  local_124 = 0xffffffffffffffff;
  local_11c = 0xffffffff;
  FNiagaraTypeDefinition::GeneratePathNameHash((FNiagaraTypeDefinition *)&local_130.ObjectPtr);
  FNiagaraUserParameterBinding::FNiagaraUserParameterBinding
            (&this->MaterialUserParamBinding,(FNiagaraTypeDefinition *)&local_130.ObjectPtr);
  this->SourceMode = Particles;
  this->Alignment = Automatic;
  this->FacingMode = Automatic;
  this->SortMode = None;
  this->MacroUVRadius = 0.0;
  (this->PivotInUVSpace).field0_0x0._s_0.X = 0.5;
  (this->PivotInUVSpace).field0_0x0._s_0.Y = 0.5;
  this->SortPrecision = Default;
  this->GpuTranslucentLatency = ProjectDefault;
  (this->SubImageSize).field0_0x0._s_0.X = 1.0;
  (this->SubImageSize).field0_0x0._s_0.Y = 1.0;
  this->PixelCoverageMode = Automatic;
  this->PixelCoverageBlend = 1.0;
  this->MinFacingCameraBlendDistance = 0.0;
  puVar4 = &this->field_0xf0;
  this->bSubImageBlend = '\x01';
  this->bCastShadows = '\x01';
  this->bSortOnlyWhenTranslucent = '\x01';
  this->bRemoveHMDRollInVR = '\0';
  this->MaxFacingCameraBlendDistance = 0.0;
  this->MaxCameraDistance = 1000.0;
  this->RendererVisibility = 0;
  (this->PositionBinding).RootName.ComparisonIndex = 0;
  (this->PositionBinding).RootName.Number = 0;
  (this->PositionBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PositionBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PositionBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PositionBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->PositionBinding).bBindingExistsOnSource = '\0';
  (this->PositionBinding).bIsCachedParticleValue = '\x01';
  (this->PositionBinding).DataSetName.ComparisonIndex = 0;
  (this->PositionBinding).DataSetName.Number = 0;
  (this->PositionBinding).BindingSourceMode.Value = '\0';
  (this->ColorBinding).RootName.ComparisonIndex = 0;
  (this->ColorBinding).RootName.Number = 0;
  (this->ColorBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->ColorBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->ColorBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->ColorBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->ColorBinding).bBindingExistsOnSource = '\0';
  (this->ColorBinding).bIsCachedParticleValue = '\x01';
  (this->ColorBinding).DataSetName.ComparisonIndex = 0;
  (this->ColorBinding).DataSetName.Number = 0;
  (this->ColorBinding).BindingSourceMode.Value = '\0';
  (this->VelocityBinding).RootName.ComparisonIndex = 0;
  (this->VelocityBinding).RootName.Number = 0;
  (this->VelocityBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->VelocityBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->VelocityBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->VelocityBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->VelocityBinding).bBindingExistsOnSource = '\0';
  (this->VelocityBinding).bIsCachedParticleValue = '\x01';
  (this->VelocityBinding).DataSetName.ComparisonIndex = 0;
  (this->VelocityBinding).DataSetName.Number = 0;
  (this->VelocityBinding).BindingSourceMode.Value = '\0';
  (this->SpriteRotationBinding).RootName.ComparisonIndex = 0;
  (this->SpriteRotationBinding).RootName.Number = 0;
  (this->SpriteRotationBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->SpriteRotationBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->SpriteRotationBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->SpriteRotationBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->SpriteRotationBinding).bBindingExistsOnSource = '\0';
  (this->SpriteRotationBinding).bIsCachedParticleValue = '\x01';
  (this->SpriteRotationBinding).DataSetName.ComparisonIndex = 0;
  (this->SpriteRotationBinding).DataSetName.Number = 0;
  (this->SpriteRotationBinding).BindingSourceMode.Value = '\0';
  (this->SpriteSizeBinding).RootName.ComparisonIndex = 0;
  (this->SpriteSizeBinding).RootName.Number = 0;
  (this->SpriteSizeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->SpriteSizeBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->SpriteSizeBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->SpriteSizeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->SpriteSizeBinding).bBindingExistsOnSource = '\0';
  (this->SpriteSizeBinding).bIsCachedParticleValue = '\x01';
  (this->SpriteSizeBinding).DataSetName.ComparisonIndex = 0;
  (this->SpriteSizeBinding).DataSetName.Number = 0;
  (this->SpriteSizeBinding).BindingSourceMode.Value = '\0';
  (this->SpriteFacingBinding).RootName.ComparisonIndex = 0;
  (this->SpriteFacingBinding).RootName.Number = 0;
  (this->SpriteFacingBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->SpriteFacingBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->SpriteFacingBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->SpriteFacingBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->SpriteFacingBinding).bBindingExistsOnSource = '\0';
  (this->SpriteFacingBinding).bIsCachedParticleValue = '\x01';
  (this->SpriteFacingBinding).DataSetName.ComparisonIndex = 0;
  (this->SpriteFacingBinding).DataSetName.Number = 0;
  (this->SpriteFacingBinding).BindingSourceMode.Value = '\0';
  (this->SpriteAlignmentBinding).RootName.ComparisonIndex = 0;
  (this->SpriteAlignmentBinding).RootName.Number = 0;
  (this->SpriteAlignmentBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->SpriteAlignmentBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->SpriteAlignmentBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->SpriteAlignmentBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->SpriteAlignmentBinding).bBindingExistsOnSource = '\0';
  (this->SpriteAlignmentBinding).bIsCachedParticleValue = '\x01';
  (this->SpriteAlignmentBinding).DataSetName.ComparisonIndex = 0;
  (this->SpriteAlignmentBinding).DataSetName.Number = 0;
  (this->SpriteAlignmentBinding).BindingSourceMode.Value = '\0';
  (this->SubImageIndexBinding).RootName.ComparisonIndex = 0;
  (this->SubImageIndexBinding).RootName.Number = 0;
  (this->SubImageIndexBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->SubImageIndexBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->SubImageIndexBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->SubImageIndexBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->SubImageIndexBinding).bBindingExistsOnSource = '\0';
  (this->SubImageIndexBinding).bIsCachedParticleValue = '\x01';
  (this->SubImageIndexBinding).DataSetName.ComparisonIndex = 0;
  (this->SubImageIndexBinding).DataSetName.Number = 0;
  (this->SubImageIndexBinding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterialBinding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterialBinding).RootName.Number = 0;
  (this->DynamicMaterialBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterialBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->DynamicMaterialBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterialBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->DynamicMaterialBinding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterialBinding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterialBinding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterialBinding).DataSetName.Number = 0;
  (this->DynamicMaterialBinding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterial1Binding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterial1Binding).RootName.Number = 0;
  (this->DynamicMaterial1Binding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterial1Binding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->DynamicMaterial1Binding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterial1Binding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->DynamicMaterial1Binding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterial1Binding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterial1Binding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterial1Binding).DataSetName.Number = 0;
  (this->DynamicMaterial1Binding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterial2Binding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterial2Binding).RootName.Number = 0;
  (this->DynamicMaterial2Binding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterial2Binding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->DynamicMaterial2Binding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterial2Binding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->DynamicMaterial2Binding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterial2Binding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterial2Binding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterial2Binding).DataSetName.Number = 0;
  (this->DynamicMaterial2Binding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterial3Binding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterial3Binding).RootName.Number = 0;
  (this->DynamicMaterial3Binding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterial3Binding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->DynamicMaterial3Binding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->DynamicMaterial3Binding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->DynamicMaterial3Binding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterial3Binding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterial3Binding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterial3Binding).DataSetName.Number = 0;
  (this->DynamicMaterial3Binding).BindingSourceMode.Value = '\0';
  (this->CameraOffsetBinding).RootName.ComparisonIndex = 0;
  (this->CameraOffsetBinding).RootName.Number = 0;
  (this->CameraOffsetBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->CameraOffsetBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->CameraOffsetBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->CameraOffsetBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->CameraOffsetBinding).bBindingExistsOnSource = '\0';
  (this->CameraOffsetBinding).bIsCachedParticleValue = '\x01';
  (this->CameraOffsetBinding).DataSetName.ComparisonIndex = 0;
  (this->CameraOffsetBinding).DataSetName.Number = 0;
  (this->CameraOffsetBinding).BindingSourceMode.Value = '\0';
  (this->UVScaleBinding).RootName.ComparisonIndex = 0;
  (this->UVScaleBinding).RootName.Number = 0;
  (this->UVScaleBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->UVScaleBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->UVScaleBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->UVScaleBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->UVScaleBinding).bBindingExistsOnSource = '\0';
  (this->UVScaleBinding).bIsCachedParticleValue = '\x01';
  (this->UVScaleBinding).DataSetName.ComparisonIndex = 0;
  (this->UVScaleBinding).DataSetName.Number = 0;
  (this->UVScaleBinding).BindingSourceMode.Value = '\0';
  (this->PivotOffsetBinding).RootName.ComparisonIndex = 0;
  (this->PivotOffsetBinding).RootName.Number = 0;
  (this->PivotOffsetBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PivotOffsetBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PivotOffsetBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PivotOffsetBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->PivotOffsetBinding).bBindingExistsOnSource = '\0';
  (this->PivotOffsetBinding).bIsCachedParticleValue = '\x01';
  (this->PivotOffsetBinding).DataSetName.ComparisonIndex = 0;
  (this->PivotOffsetBinding).DataSetName.Number = 0;
  (this->PivotOffsetBinding).BindingSourceMode.Value = '\0';
  (this->MaterialRandomBinding).RootName.ComparisonIndex = 0;
  (this->MaterialRandomBinding).RootName.Number = 0;
  (this->MaterialRandomBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->MaterialRandomBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->MaterialRandomBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->MaterialRandomBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->MaterialRandomBinding).bBindingExistsOnSource = '\0';
  (this->MaterialRandomBinding).bIsCachedParticleValue = '\x01';
  (this->MaterialRandomBinding).DataSetName.ComparisonIndex = 0;
  (this->MaterialRandomBinding).DataSetName.Number = 0;
  (this->MaterialRandomBinding).BindingSourceMode.Value = '\0';
  (this->CustomSortingBinding).RootName.ComparisonIndex = 0;
  (this->CustomSortingBinding).RootName.Number = 0;
  (this->CustomSortingBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->CustomSortingBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->CustomSortingBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->CustomSortingBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->CustomSortingBinding).bBindingExistsOnSource = '\0';
  (this->CustomSortingBinding).bIsCachedParticleValue = '\x01';
  (this->CustomSortingBinding).DataSetName.ComparisonIndex = 0;
  (this->CustomSortingBinding).DataSetName.Number = 0;
  (this->CustomSortingBinding).BindingSourceMode.Value = '\0';
  (this->NormalizedAgeBinding).RootName.ComparisonIndex = 0;
  (this->NormalizedAgeBinding).RootName.Number = 0;
  (this->NormalizedAgeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->NormalizedAgeBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->NormalizedAgeBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->NormalizedAgeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->NormalizedAgeBinding).bBindingExistsOnSource = '\0';
  (this->NormalizedAgeBinding).bIsCachedParticleValue = '\x01';
  (this->NormalizedAgeBinding).DataSetName.ComparisonIndex = 0;
  (this->NormalizedAgeBinding).DataSetName.Number = 0;
  (this->NormalizedAgeBinding).BindingSourceMode.Value = '\0';
  (this->RendererVisibilityTagBinding).RootName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).RootName.Number = 0;
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
  (this->PrevPositionBinding).RootName.ComparisonIndex = 0;
  (this->PrevPositionBinding).RootName.Number = 0;
  (this->MaterialParameters).StaticBoolParameters.ArrayNum = 0;
  (this->MaterialParameters).StaticBoolParameters.ArrayMax = 0;
  (this->PrevPositionBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevPositionBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PrevPositionBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevPositionBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->PrevPositionBinding).bBindingExistsOnSource = '\0';
  (this->PrevPositionBinding).bIsCachedParticleValue = '\x01';
  (this->PrevPositionBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevPositionBinding).DataSetName.Number = 0;
  (this->PrevPositionBinding).BindingSourceMode.Value = '\0';
  (this->PrevVelocityBinding).RootName.ComparisonIndex = 0;
  (this->PrevVelocityBinding).RootName.Number = 0;
  (this->PrevVelocityBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevVelocityBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PrevVelocityBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevVelocityBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  pFVar5 = &this->PrevSpriteRotationBinding;
  (this->PrevVelocityBinding).bBindingExistsOnSource = '\0';
  (this->PrevVelocityBinding).bIsCachedParticleValue = '\x01';
  (this->PrevVelocityBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevVelocityBinding).DataSetName.Number = 0;
  (this->PrevVelocityBinding).BindingSourceMode.Value = '\0';
  (pFVar5->RootName).ComparisonIndex = 0;
  (pFVar5->RootName).Number = 0;
  (this->PrevSpriteRotationBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevSpriteRotationBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PrevSpriteRotationBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevSpriteRotationBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  pFVar6 = &this->PrevSpriteSizeBinding;
  (this->PrevSpriteRotationBinding).bBindingExistsOnSource = '\0';
  (this->PrevSpriteRotationBinding).bIsCachedParticleValue = '\x01';
  (this->PrevSpriteRotationBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevSpriteRotationBinding).DataSetName.Number = 0;
  (this->PrevSpriteRotationBinding).BindingSourceMode.Value = '\0';
  (pFVar6->RootName).ComparisonIndex = 0;
  (pFVar6->RootName).Number = 0;
  (this->PrevSpriteSizeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevSpriteSizeBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PrevSpriteSizeBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevSpriteSizeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  pFVar7 = &this->PrevSpriteFacingBinding;
  (this->PrevSpriteSizeBinding).bBindingExistsOnSource = '\0';
  (this->PrevSpriteSizeBinding).bIsCachedParticleValue = '\x01';
  (this->PrevSpriteSizeBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevSpriteSizeBinding).DataSetName.Number = 0;
  (this->PrevSpriteSizeBinding).BindingSourceMode.Value = '\0';
  (pFVar7->RootName).ComparisonIndex = 0;
  (pFVar7->RootName).Number = 0;
  (this->PrevSpriteFacingBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevSpriteFacingBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PrevSpriteFacingBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevSpriteFacingBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->PrevSpriteFacingBinding).bBindingExistsOnSource = '\0';
  (this->PrevSpriteFacingBinding).bIsCachedParticleValue = '\x01';
  (this->PrevSpriteFacingBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevSpriteFacingBinding).DataSetName.Number = 0;
  (this->PrevSpriteFacingBinding).BindingSourceMode.Value = '\0';
  pFVar8 = &this->PrevSpriteAlignmentBinding;
  (pFVar8->RootName).ComparisonIndex = 0;
  (pFVar8->RootName).Number = 0;
  (this->PrevSpriteAlignmentBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevSpriteAlignmentBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PrevSpriteAlignmentBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevSpriteAlignmentBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->PrevSpriteAlignmentBinding).bBindingExistsOnSource = '\0';
  pFVar11 = &this->PrevCameraOffsetBinding;
  (this->PrevSpriteAlignmentBinding).bIsCachedParticleValue = '\x01';
  (this->PrevSpriteAlignmentBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevSpriteAlignmentBinding).DataSetName.Number = 0;
  (this->PrevSpriteAlignmentBinding).BindingSourceMode.Value = '\0';
  (pFVar11->RootName).ComparisonIndex = 0;
  (pFVar11->RootName).Number = 0;
  (this->PrevCameraOffsetBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevCameraOffsetBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PrevCameraOffsetBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevCameraOffsetBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->PrevCameraOffsetBinding).bBindingExistsOnSource = '\0';
  (this->PrevCameraOffsetBinding).bIsCachedParticleValue = '\x01';
  (this->PrevCameraOffsetBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevCameraOffsetBinding).DataSetName.Number = 0;
  (this->PrevCameraOffsetBinding).BindingSourceMode.Value = '\0';
  pFVar12 = &this->PrevPivotOffsetBinding;
  (pFVar12->RootName).ComparisonIndex = 0;
  (pFVar12->RootName).Number = 0;
  (this->PrevPivotOffsetBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PrevPivotOffsetBinding).ParamMapVariable.Name.Number = 0;
  iVar10 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PrevPivotOffsetBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PrevPivotOffsetBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar10;
  (this->PrevPivotOffsetBinding).bBindingExistsOnSource = '\0';
  (this->PrevPivotOffsetBinding).bIsCachedParticleValue = '\x01';
  (this->PrevPivotOffsetBinding).DataSetName.ComparisonIndex = 0;
  (this->PrevPivotOffsetBinding).DataSetName.Number = 0;
  (this->PrevPivotOffsetBinding).BindingSourceMode.Value = '\0';
  this->MaterialParamValidMask = 0;
  (this->RendererLayoutWithCustomSort).VFVariables_GT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithCustomSort).VFVariables_GT.ArrayNum = 0;
  (this->RendererLayoutWithCustomSort).VFVariables_GT.ArrayMax = 0;
  (this->RendererLayoutWithCustomSort).VFVariables_RT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithCustomSort).VFVariables_RT.ArrayNum = 0;
  (this->RendererLayoutWithCustomSort).VFVariables_RT.ArrayMax = 0;
  (this->RendererLayoutWithCustomSort).TotalFloatComponents_GT = 0;
  (this->RendererLayoutWithCustomSort).TotalHalfComponents_GT = 0;
  (this->RendererLayoutWithCustomSort).TotalFloatComponents_RT = 0;
  (this->RendererLayoutWithCustomSort).TotalHalfComponents_RT = 0;
  (this->RendererLayoutWithoutCustomSort).VFVariables_GT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithoutCustomSort).VFVariables_GT.ArrayNum = 0;
  (this->RendererLayoutWithoutCustomSort).VFVariables_GT.ArrayMax = 0;
  (this->RendererLayoutWithoutCustomSort).VFVariables_RT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithoutCustomSort).VFVariables_RT.ArrayNum = 0;
  (this->RendererLayoutWithoutCustomSort).VFVariables_RT.ArrayMax = 0;
  (this->RendererLayoutWithoutCustomSort).TotalFloatComponents_GT = 0;
  (this->RendererLayoutWithoutCustomSort).TotalHalfComponents_GT = 0;
  (this->RendererLayoutWithoutCustomSort).TotalFloatComponents_RT = 0;
  (this->RendererLayoutWithoutCustomSort).TotalHalfComponents_RT = 0;
  (this->DerivedData).BoundingGeometry.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DerivedData).BoundingGeometry.ArrayNum = 0;
  (this->DerivedData).BoundingGeometry.ArrayMax = 0;
  local_118 = &this->PositionBinding;
  pFStack_110 = &this->ColorBinding;
  local_108 = &this->VelocityBinding;
  pFStack_100 = &this->SpriteRotationBinding;
  local_f8 = &this->SpriteSizeBinding;
  pFStack_f0 = &this->SpriteFacingBinding;
  local_e8 = &this->SpriteAlignmentBinding;
  pFStack_e0 = &this->SubImageIndexBinding;
  local_d8 = &this->DynamicMaterialBinding;
  pFStack_d0 = &this->DynamicMaterial1Binding;
  local_c8 = &this->DynamicMaterial2Binding;
  pFStack_c0 = &this->DynamicMaterial3Binding;
  local_b8 = &this->CameraOffsetBinding;
  pFStack_b0 = &this->UVScaleBinding;
  local_a8 = &this->PivotOffsetBinding;
  pFStack_a0 = &this->MaterialRandomBinding;
  local_98 = &this->CustomSortingBinding;
  pFStack_90 = &this->NormalizedAgeBinding;
  local_88 = &this->PrevPositionBinding;
  pFStack_80 = &this->PrevVelocityBinding;
  piVar2 = (int *)((longlong)&this->_padding_ + 4);
  local_48 = &this->RendererVisibilityTagBinding;
  *(undefined4 *)&this->_padding_ = 0x1b;
  local_78 = pFVar5;
  pFStack_70 = pFVar6;
  local_68 = pFVar7;
  pFStack_60 = pFVar8;
  local_58 = pFVar11;
  pFStack_50 = pFVar12;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,0x1b,*piVar2,(ForAnyElementType *)&this->_padding_,0x1b,piVar2);
  plVar9 = (longlong *)this->_padding_;
  *plVar9 = (longlong)local_118;
  plVar9[1] = (longlong)pFStack_110;
  plVar9[2] = (longlong)local_108;
  plVar9[3] = (longlong)pFStack_100;
  plVar9[4] = (longlong)local_f8;
  plVar9[5] = (longlong)pFStack_f0;
  plVar9[6] = (longlong)local_e8;
  plVar9[7] = (longlong)pFStack_e0;
  plVar9[8] = (longlong)local_d8;
  plVar9[9] = (longlong)pFStack_d0;
  plVar9[10] = (longlong)local_c8;
  plVar9[0xb] = (longlong)pFStack_c0;
  plVar9[0xc] = (longlong)local_b8;
  plVar9[0xd] = (longlong)pFStack_b0;
  plVar9[0xe] = (longlong)local_a8;
  plVar9[0xf] = (longlong)pFStack_a0;
  plVar9[0x10] = (longlong)local_98;
  plVar9[0x11] = (longlong)pFStack_90;
  plVar9[0x12] = (longlong)local_88;
  plVar9[0x13] = (longlong)pFStack_80;
  plVar9[0x14] = (longlong)local_78;
  plVar9[0x15] = (longlong)pFStack_70;
  plVar9[0x16] = (longlong)local_68;
  plVar9[0x17] = (longlong)pFStack_60;
  plVar9[0x18] = (longlong)local_58;
  plVar9[0x19] = (longlong)pFStack_50;
  plVar9[0x1a] = (longlong)local_48;
  return this;
}

// ~UNiagaraSpriteRendererProperties @ 1493d1d20

void __thiscall
UNiagaraSpriteRendererProperties::~UNiagaraSpriteRendererProperties
          (UNiagaraSpriteRendererProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraSpriteRendererProperties__6B_;
  pFVar1 = (this->DerivedData).BoundingGeometry.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayoutWithoutCustomSort).VFVariables_RT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayoutWithoutCustomSort).VFVariables_GT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayoutWithCustomSort).VFVariables_RT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayoutWithCustomSort).VFVariables_GT.AllocatorInstance.Data;
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
  pFVar1 = (this->MaterialUserParamBinding).Parameter.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraRendererProperties::~UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  return;
}

// CacheFromCompiledData @ 1493d7a20

void __thiscall
UNiagaraSpriteRendererProperties::CacheFromCompiledData
          (UNiagaraSpriteRendererProperties *this,FNiagaraDataSetCompiledData *param_1)

{
  FNiagaraRendererLayout *pFVar1;
  bool bVar2;
  int iVar3;
  
  (**(code **)(this->_padding_ + 0x358))(this,this->SourceMode,0);
  bVar2 = UNiagaraRendererProperties::NeedsPreciseMotionVectors((UNiagaraRendererProperties *)this);
  pFVar1 = &this->RendererLayoutWithCustomSort;
  iVar3 = (uint)bVar2 * 8 + 0x12;
  FNiagaraRendererLayout::Initialize(pFVar1,iVar3);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PositionBinding,0);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->VelocityBinding,2);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->ColorBinding,1);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->SpriteRotationBinding,3);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->SpriteSizeBinding,4);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->SpriteFacingBinding,5);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->SpriteAlignmentBinding,6);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->SubImageIndexBinding,7);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->CameraOffsetBinding,0xc);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->UVScaleBinding,0xd);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PivotOffsetBinding,0xe);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->NormalizedAgeBinding,0x11);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->MaterialRandomBinding,0xf);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->CustomSortingBinding,0x10);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterialBinding,8);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterial1Binding,9);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterial2Binding,10);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterial3Binding,0xb);
  bVar2 = UNiagaraRendererProperties::NeedsPreciseMotionVectors((UNiagaraRendererProperties *)this);
  if (bVar2) {
    FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PrevPositionBinding,0x12);
    FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PrevVelocityBinding,0x13);
    FNiagaraRendererLayout::SetVariableFromBinding
              (pFVar1,param_1,&this->PrevSpriteRotationBinding,0x14);
    FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PrevSpriteSizeBinding,0x15)
    ;
    FNiagaraRendererLayout::SetVariableFromBinding
              (pFVar1,param_1,&this->PrevSpriteFacingBinding,0x16);
    FNiagaraRendererLayout::SetVariableFromBinding
              (pFVar1,param_1,&this->PrevSpriteAlignmentBinding,0x17);
    FNiagaraRendererLayout::SetVariableFromBinding
              (pFVar1,param_1,&this->PrevCameraOffsetBinding,0x18);
    FNiagaraRendererLayout::SetVariableFromBinding
              (pFVar1,param_1,&this->PrevPivotOffsetBinding,0x19);
  }
  FNiagaraRendererLayout::Finalize(pFVar1);
  pFVar1 = &this->RendererLayoutWithoutCustomSort;
  FNiagaraRendererLayout::Initialize(pFVar1,iVar3);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PositionBinding,0);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->VelocityBinding,2);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->ColorBinding,1);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->SpriteRotationBinding,3);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->SpriteSizeBinding,4);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->SpriteFacingBinding,5);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->SpriteAlignmentBinding,6);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->SubImageIndexBinding,7);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->CameraOffsetBinding,0xc);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->UVScaleBinding,0xd);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PivotOffsetBinding,0xe);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->NormalizedAgeBinding,0x11);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->MaterialRandomBinding,0xf);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterialBinding,8);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterial1Binding,9);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterial2Binding,10);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterial3Binding,0xb);
  bVar2 = UNiagaraRendererProperties::NeedsPreciseMotionVectors((UNiagaraRendererProperties *)this);
  if (bVar2) {
    FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PrevPositionBinding,0x12);
    FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PrevVelocityBinding,0x13);
    FNiagaraRendererLayout::SetVariableFromBinding
              (pFVar1,param_1,&this->PrevSpriteRotationBinding,0x14);
    FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PrevSpriteSizeBinding,0x15)
    ;
    FNiagaraRendererLayout::SetVariableFromBinding
              (pFVar1,param_1,&this->PrevSpriteFacingBinding,0x16);
    FNiagaraRendererLayout::SetVariableFromBinding
              (pFVar1,param_1,&this->PrevSpriteAlignmentBinding,0x17);
    FNiagaraRendererLayout::SetVariableFromBinding
              (pFVar1,param_1,&this->PrevCameraOffsetBinding,0x18);
    FNiagaraRendererLayout::SetVariableFromBinding
              (pFVar1,param_1,&this->PrevPivotOffsetBinding,0x19);
  }
  FNiagaraRendererLayout::Finalize(pFVar1);
  return;
}

// CollectPSOPrecacheData @ 1493db010

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
UNiagaraSpriteRendererProperties::CollectPSOPrecacheData
          (UNiagaraSpriteRendererProperties *this,FNiagaraEmitterInstance *param_1,
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

// CreateBoundsCalculator @ 1493dcd30

FNiagaraBoundsCalculator * __thiscall
UNiagaraSpriteRendererProperties::CreateBoundsCalculator(UNiagaraSpriteRendererProperties *this)

{
  undefined8 uVar1;
  char cVar2;
  FNiagaraBoundsCalculator *pFVar3;
  
  cVar2 = (**(code **)(this->_padding_ + 0x308))();
  if (cVar2 != '\x01') {
    pFVar3 = ::operator_new(0x78);
    if (pFVar3 != (FNiagaraBoundsCalculator *)0x0) {
      *pFVar3 = (FNiagaraBoundsCalculator)0x0;
      pFVar3[1] = (FNiagaraBoundsCalculator)0x0;
      pFVar3[2] = (FNiagaraBoundsCalculator)0x0;
      pFVar3[3] = (FNiagaraBoundsCalculator)0x0;
      pFVar3[4] = (FNiagaraBoundsCalculator)0x0;
      pFVar3[5] = (FNiagaraBoundsCalculator)0x0;
      pFVar3[6] = (FNiagaraBoundsCalculator)0x0;
      pFVar3[7] = (FNiagaraBoundsCalculator)0x0;
      pFVar3[8] = (FNiagaraBoundsCalculator)0x0;
      pFVar3[9] = (FNiagaraBoundsCalculator)0x0;
      pFVar3[10] = (FNiagaraBoundsCalculator)0x0;
      pFVar3[0xb] = (FNiagaraBoundsCalculator)0x0;
      pFVar3[0xc] = (FNiagaraBoundsCalculator)0x0;
      pFVar3[0xd] = (FNiagaraBoundsCalculator)0x0;
      pFVar3[0xe] = (FNiagaraBoundsCalculator)0x0;
      *(undefined1 *)(pFVar3 + 1) = 1;
      *(undefined4 *)&pFVar3[1].field_0x4 = 0xffffffff;
      *(undefined1 *)(pFVar3 + 2) = 1;
      *(undefined4 *)&pFVar3[2].field_0x4 = 0xffffffff;
      *(undefined1 *)(pFVar3 + 3) = 1;
      *(undefined4 *)&pFVar3[3].field_0x4 = 0xffffffff;
      *(undefined1 *)(pFVar3 + 4) = 1;
      *(undefined4 *)&pFVar3[4].field_0x4 = 0xffffffff;
      *pFVar3 = (FNiagaraBoundsCalculator)&___7__FNiagaraBoundsCalculatorHelper__00_0A__0A___6B_;
      uVar1 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
      pFVar3[5] = (FNiagaraBoundsCalculator)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
      pFVar3[6] = (FNiagaraBoundsCalculator)uVar1;
      pFVar3[7] = (FNiagaraBoundsCalculator)UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pFVar3[8] = (FNiagaraBoundsCalculator)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pFVar3[9] = (FNiagaraBoundsCalculator)uVar1;
      pFVar3[10] = (FNiagaraBoundsCalculator)UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
      ;
      uVar1 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      pFVar3[0xb] = (FNiagaraBoundsCalculator)
                    UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      pFVar3[0xc] = (FNiagaraBoundsCalculator)uVar1;
      pFVar3[0xd] = (FNiagaraBoundsCalculator)
                    UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      return pFVar3;
    }
  }
  return (FNiagaraBoundsCalculator *)0x0;
}

// CreateEmitterRenderer @ 1493dce10

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
UNiagaraSpriteRendererProperties::CreateEmitterRenderer
          (UNiagaraSpriteRendererProperties *this,Type param_1,FNiagaraEmitterInstance *param_2,
          FNiagaraSystemInstanceController *param_3)

{
  FNiagaraRendererSprites *pFVar1;
  
  pFVar1 = ::operator_new(0x270);
  if (pFVar1 == (FNiagaraRendererSprites *)0x0) {
    pFVar1 = (FNiagaraRendererSprites *)0x0;
  }
  else {
    pFVar1 = FNiagaraRendererSprites::FNiagaraRendererSprites
                       (pFVar1,param_1,(UNiagaraRendererProperties *)this,param_2);
  }
  (**(code **)(pFVar1->_padding_ + 8))(pFVar1,this,param_2,param_3);
  return (FNiagaraRenderer *)pFVar1;
}

// GetCurrentSourceMode @ 1493e6eb0

ENiagaraRendererSourceDataMode __thiscall
UNiagaraSpriteRendererProperties::GetCurrentSourceMode(UNiagaraSpriteRendererProperties *this)

{
  return this->SourceMode;
}

// GetMaterialStreamingScale @ 1493e8090

float __thiscall
UNiagaraSpriteRendererProperties::GetMaterialStreamingScale(UNiagaraSpriteRendererProperties *this)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (this->SubImageSize).field0_0x0._s_0.Y;
  dVar1 = (this->SubImageSize).field0_0x0._s_0.X;
  if (dVar2 <= dVar1) {
    dVar2 = dVar1;
  }
  if (dVar2 <= __real_3ff0000000000000) {
    dVar2 = __real_3ff0000000000000;
  }
  return (float)dVar2;
}

// GetNumCutoutVertexPerSubimage @ 1493e8340

int __thiscall
UNiagaraSpriteRendererProperties::GetNumCutoutVertexPerSubimage
          (UNiagaraSpriteRendererProperties *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (this->DerivedData).BoundingGeometry.ArrayNum;
  if (iVar3 == 0) {
    return 0;
  }
  iVar4 = (int)(this->SubImageSize).field0_0x0._s_0.Y * (int)(this->SubImageSize).field0_0x0._s_0.X;
  if (iVar4 < 1) {
    iVar4 = 1;
  }
  iVar3 = iVar3 / iVar4;
  if ((iVar3 != 4) && (iVar3 != 8)) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5917190269198925049>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSpriteRendererProperties.cpp"
                       ,0x307,"NumCutoutVertexPerSubImage == 4 || NumCutoutVertexPerSubImage == 8");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  return iVar3;
}

// GetNumIndicesPerInstance @ 1493e83d0

uint __thiscall
UNiagaraSpriteRendererProperties::GetNumIndicesPerInstance(UNiagaraSpriteRendererProperties *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = (this->DerivedData).BoundingGeometry.ArrayNum;
  if (iVar3 != 0) {
    iVar5 = (int)(this->SubImageSize).field0_0x0._s_0.Y *
            (int)(this->SubImageSize).field0_0x0._s_0.X;
    if (iVar5 < 1) {
      iVar5 = 1;
    }
    iVar3 = iVar3 / iVar5;
    if ((iVar3 == 4) || (iVar3 == 8)) {
      uVar4 = 6;
      if (iVar3 == 8) {
        uVar4 = 0x12;
      }
      return uVar4;
    }
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5917190269198925049>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSpriteRendererProperties.cpp"
                       ,0x307,"NumCutoutVertexPerSubImage == 4 || NumCutoutVertexPerSubImage == 8");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar4 = (*pcVar1)();
      return uVar4;
    }
  }
  return 6;
}

// GetPrivateStaticClass @ 1493e8820

UClass * __cdecl UNiagaraSpriteRendererProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSpriteRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraSpriteRendererProperties,0x528,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraSpriteRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraSpriteRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSpriteRendererProperties.InnerSingleton;
}

// GetResourceSizeEx @ 1493e9330

void __thiscall
UNiagaraSpriteRendererProperties::GetResourceSizeEx
          (UNiagaraSpriteRendererProperties *this,FResourceSizeEx *param_1)

{
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,((longlong)(this->RendererLayoutWithCustomSort).VFVariables_RT.ArrayMax +
                     (longlong)(this->RendererLayoutWithCustomSort).VFVariables_GT.ArrayMax) * 8);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,((longlong)(this->RendererLayoutWithoutCustomSort).VFVariables_RT.ArrayMax +
                     (longlong)(this->RendererLayoutWithoutCustomSort).VFVariables_GT.ArrayMax) * 8)
  ;
  return;
}

// GetUsedMaterials @ 1493ea440

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
UNiagaraSpriteRendererProperties::GetUsedMaterials
          (UNiagaraSpriteRendererProperties *this,FNiagaraEmitterInstance *param_1,
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
         local_18[0].DebugPtr != (UMaterialInterface *)0x0)) goto LAB_1493ea4a1;
    }
  }
  local_18[0] = (this->Material).field0_0x0;
LAB_1493ea4a1:
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

// GetVertexFactoryType @ 1493ea5c0

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
UNiagaraSpriteRendererProperties::GetVertexFactoryType(UNiagaraSpriteRendererProperties *this)

{
  return &FNiagaraSpriteVertexFactory::StaticType;
}

// InitBindings @ 1493ebaa0

void __thiscall
UNiagaraSpriteRendererProperties::InitBindings(UNiagaraSpriteRendererProperties *this)

{
  FName FVar1;
  undefined8 uVar2;
  FNiagaraVariableAttributeBinding *pFVar3;
  FNiagaraVariableAttributeBinding local_28;
  
  if ((this->PositionBinding).ParamMapVariable.Name == (FName)0x0) {
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_Position);
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->PositionBinding).RootName = pFVar3->RootName;
    (this->PositionBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->PositionBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->PositionBinding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_Color);
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->ColorBinding).RootName = pFVar3->RootName;
    (this->ColorBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->ColorBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->ColorBinding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_Velocity);
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->VelocityBinding).RootName = pFVar3->RootName;
    (this->VelocityBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->VelocityBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->VelocityBinding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_SpriteRotation)
    ;
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->SpriteRotationBinding).RootName = pFVar3->RootName;
    (this->SpriteRotationBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->SpriteRotationBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->SpriteRotationBinding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_SpriteSize);
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->SpriteSizeBinding).RootName = pFVar3->RootName;
    (this->SpriteSizeBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->SpriteSizeBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->SpriteSizeBinding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_SpriteFacing);
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->SpriteFacingBinding).RootName = pFVar3->RootName;
    (this->SpriteFacingBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->SpriteFacingBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->SpriteFacingBinding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_SpriteAlignment
                       );
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->SpriteAlignmentBinding).RootName = pFVar3->RootName;
    (this->SpriteAlignmentBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->SpriteAlignmentBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->SpriteAlignmentBinding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_SubImageIndex);
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->SubImageIndexBinding).RootName = pFVar3->RootName;
    (this->SubImageIndexBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->SubImageIndexBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->SubImageIndexBinding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,
                        (FNiagaraVariableBase *)&INiagaraModule::Particles_DynamicMaterialParameter)
    ;
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->DynamicMaterialBinding).RootName = pFVar3->RootName;
    (this->DynamicMaterialBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->DynamicMaterialBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->DynamicMaterialBinding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,
                        (FNiagaraVariableBase *)&INiagaraModule::Particles_DynamicMaterialParameter1
                       );
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->DynamicMaterial1Binding).RootName = pFVar3->RootName;
    (this->DynamicMaterial1Binding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->DynamicMaterial1Binding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->DynamicMaterial1Binding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,
                        (FNiagaraVariableBase *)&INiagaraModule::Particles_DynamicMaterialParameter2
                       );
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->DynamicMaterial2Binding).RootName = pFVar3->RootName;
    (this->DynamicMaterial2Binding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->DynamicMaterial2Binding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->DynamicMaterial2Binding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,
                        (FNiagaraVariableBase *)&INiagaraModule::Particles_DynamicMaterialParameter3
                       );
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->DynamicMaterial3Binding).RootName = pFVar3->RootName;
    (this->DynamicMaterial3Binding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->DynamicMaterial3Binding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->DynamicMaterial3Binding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_CameraOffset);
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->CameraOffsetBinding).RootName = pFVar3->RootName;
    (this->CameraOffsetBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->CameraOffsetBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->CameraOffsetBinding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_UVScale);
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->UVScaleBinding).RootName = pFVar3->RootName;
    (this->UVScaleBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->UVScaleBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->UVScaleBinding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_PivotOffset);
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->PivotOffsetBinding).RootName = pFVar3->RootName;
    (this->PivotOffsetBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->PivotOffsetBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->PivotOffsetBinding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_MaterialRandom)
    ;
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->MaterialRandomBinding).RootName = pFVar3->RootName;
    (this->MaterialRandomBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->MaterialRandomBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->MaterialRandomBinding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_NormalizedAge);
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->NormalizedAgeBinding).RootName = pFVar3->RootName;
    (this->NormalizedAgeBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->NormalizedAgeBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->NormalizedAgeBinding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_VisibilityTag);
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->RendererVisibilityTagBinding).RootName = pFVar3->RootName;
    (this->RendererVisibilityTagBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->RendererVisibilityTagBinding).DataSetName.Number = uVar2;
    pFVar3 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_Age);
    FVar1 = (pFVar3->ParamMapVariable).Name;
    (this->CustomSortingBinding).RootName = pFVar3->RootName;
    (this->CustomSortingBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar3->DataSetName).Number;
    *(undefined8 *)&(this->CustomSortingBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar3->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->CustomSortingBinding).DataSetName.Number = uVar2;
  }
  local_28.RootName.ComparisonIndex.Value = 0;
  local_28.RootName.Number = 0;
  local_28.ParamMapVariable.Name.ComparisonIndex.Value = 0;
  local_28.ParamMapVariable.Name.Number = 0;
  local_28.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = 0;
  local_28.DataSetName.ComparisonIndex.Value = 0;
  SetPreviousBindings(this,(FVersionedNiagaraEmitterBase *)&local_28,this->SourceMode);
  return;
}

// InitCDOPropertiesAfterModuleStartup @ 1493ebdb0

void __cdecl UNiagaraSpriteRendererProperties::InitCDOPropertiesAfterModuleStartup(void)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UNiagaraSpriteRendererProperties *pUVar5;
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
  pUVar5 = (UNiagaraSpriteRendererProperties *)(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar5 != (UNiagaraSpriteRendererProperties *)0x0) {
    pUVar3 = StaticClass();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) {
      InitBindings(pUVar5);
      iVar2 = SpriteRendererPropertiesToDeferredInit.ArrayNum;
      uVar7 = (ulonglong)SpriteRendererPropertiesToDeferredInit.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)
               (SpriteRendererPropertiesToDeferredInit.AllocatorInstance.Data + uVar7 * 8);
      this = SpriteRendererPropertiesToDeferredInit.AllocatorInstance;
      while( true ) {
        if ((int)uVar7 != iVar2) {
          `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraSpriteRendererProperties,FWeakObjectPtr>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((FWeakObjectPtr *)this.Data == pFVar1) break;
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
        if (pUVar4 != (UObject *)0x0) {
          pUVar5 = (UNiagaraSpriteRendererProperties *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
          InitBindings(pUVar5);
        }
        uVar7 = (ulonglong)(uint)SpriteRendererPropertiesToDeferredInit.ArrayNum;
        this.Data = this.Data + 8;
      }
      return;
    }
    pFVar6 = GetTypeName<UNiagaraSpriteRendererProperties>(&local_28);
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
  pFVar6 = GetTypeName<UNiagaraSpriteRendererProperties>(&local_28);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar8);
}

// IsSimTargetSupported @ 1493ef780

bool __thiscall
UNiagaraSpriteRendererProperties::IsSimTargetSupported
          (UNiagaraSpriteRendererProperties *this,ENiagaraSimTarget param_1)

{
  return true;
}

// NeedsMIDsForMaterials @ 1493f0c00

bool __thiscall
UNiagaraSpriteRendererProperties::NeedsMIDsForMaterials(UNiagaraSpriteRendererProperties *this)

{
  if (((((this->MaterialParameters).AttributeBindings.ArrayNum < 1) &&
       ((this->MaterialParameters).ScalarParameters.ArrayNum < 1)) &&
      ((this->MaterialParameters).VectorParameters.ArrayNum < 1)) &&
     ((this->MaterialParameters).TextureParameters.ArrayNum < 1)) {
    return false;
  }
  return true;
}

// PopulateRequiredBindings @ 1493f1340

bool __thiscall
UNiagaraSpriteRendererProperties::PopulateRequiredBindings
          (UNiagaraSpriteRendererProperties *this,FNiagaraParameterStore *param_1)

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

// PostInitProperties @ 1493f15e0

void __thiscall
UNiagaraSpriteRendererProperties::PostInitProperties(UNiagaraSpriteRendererProperties *this)

{
  code *pcVar1;
  bool bVar2;
  FModuleManager *this_00;
  FName *pFVar3;
  longlong lVar4;
  UNiagaraSpriteRendererProperties *local_res8;
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
  if (((SpriteRendererPropertiesToDeferredInit.AllocatorInstance.Data <= local_18) &&
      (local_18 <
       (FWeakObjectPtr *)
       (SpriteRendererPropertiesToDeferredInit.AllocatorInstance.Data +
       (longlong)SpriteRendererPropertiesToDeferredInit.ArrayMax * 8))) &&
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
  if (SpriteRendererPropertiesToDeferredInit.ArrayNum ==
      SpriteRendererPropertiesToDeferredInit.ArrayMax) {
    SpriteRendererPropertiesToDeferredInit.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&SpriteRendererPropertiesToDeferredInit.AllocatorInstance,
                    &SpriteRendererPropertiesToDeferredInit.ArrayMax);
  }
  lVar4 = (longlong)SpriteRendererPropertiesToDeferredInit.ArrayNum;
  SpriteRendererPropertiesToDeferredInit.ArrayNum =
       SpriteRendererPropertiesToDeferredInit.ArrayNum + 1;
  *(FWeakObjectPtr *)(SpriteRendererPropertiesToDeferredInit.AllocatorInstance.Data + lVar4 * 8) =
       local_18[0];
  return;
}

// PostLoad @ 1493f1880

void __thiscall UNiagaraSpriteRendererProperties::PostLoad(UNiagaraSpriteRendererProperties *this)

{
  UMaterialInterface *this_00;
  
  UNiagaraRendererProperties::PostLoad((UNiagaraRendererProperties *)this);
  this_00 = (this->Material).field0_0x0.DebugPtr;
  if (this_00 != (UMaterialInterface *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
  }
  FNiagaraRendererMaterialParameters::ConditionalPostLoad(&this->MaterialParameters);
  return;
}

// Serialize @ 1493f8530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UNiagaraSpriteRendererProperties::Serialize
          (UNiagaraSpriteRendererProperties *this,FArchive *param_1)

{
  FName FVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  FStructuredArchiveFromArchive *this_00;
  FStructuredArchiveSlot FVar5;
  FArchiveState *this_01;
  FNiagaraVariableAttributeBinding *pFVar6;
  undefined1 auStack_1f8 [32];
  FSlotBase local_1d8 [2];
  FNiagaraVariableAttributeBinding local_1c8;
  FStructuredArchiveFromArchive local_1a8;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_1f8;
  this_00 = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a8,param_1);
  FVar5 = FStructuredArchiveFromArchive::GetSlot(this_00);
  local_1d8[0].StructuredArchive = *(FStructuredArchive **)FVar5;
  this_01 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_1d8);
  (**(code **)(this_01->_padding_ + 0x230))(this_01,&FNiagaraCustomVersion::GUID);
  (**(code **)(this_01->_padding_ + 0x230))(this_01,&FUE5MainStreamObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer(this_01,&FNiagaraCustomVersion::GUID);
  iVar4 = FArchiveState::CustomVer(this_01,&FUE5MainStreamObjectVersion::GUID);
  if (this_01->ArIsLoading != 0) {
    if (iVar3 < 0x34) {
      this->SortMode = ViewDistance;
    }
    if (iVar4 < 0x6d) {
      this->Alignment = Unaligned;
      this->FacingMode = FaceCamera;
    }
    if (iVar3 < 0x50) {
      this->bSubImageBlend = '\0';
    }
    if (iVar3 < 0x57) {
      pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                         (&local_1c8,
                          (FNiagaraVariableBase *)&INiagaraModule::Particles_NormalizedAge);
      FVar1 = (pFVar6->ParamMapVariable).Name;
      (this->CustomSortingBinding).RootName = pFVar6->RootName;
      (this->CustomSortingBinding).ParamMapVariable.Name = FVar1;
      uVar2 = *(undefined8 *)&(pFVar6->DataSetName).Number;
      *(undefined8 *)&(this->CustomSortingBinding).ParamMapVariable.TypeDefHandle =
           *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
      *(undefined8 *)&(this->CustomSortingBinding).DataSetName.Number = uVar2;
    }
  }
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)local_1d8[0].StructuredArchive);
  if (((this_01->SavePackageData != (FArchiveSavePackageData *)0x0) &&
      (this_01->SavePackageData->CookContext != (FArchiveCookContext *)0x0)) ||
     (this_01->ArIsLoading != 0)) {
    FSubUVDerivedData::Serialize
              (&this->DerivedData,(FStructuredArchiveSlot)local_1d8[0].StructuredArchive);
  }
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a8);
  return;
}

// Serialize @ 1493f86a0

void __thiscall
UNiagaraSpriteRendererProperties::Serialize
          (UNiagaraSpriteRendererProperties *this,FStructuredArchiveRecord param_1)

{
  FName FVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  FArchiveState *this_00;
  FNiagaraVariableAttributeBinding *pFVar5;
  FSlotBase local_res10;
  FNiagaraVariableAttributeBinding local_28;
  
  local_res10.StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FNiagaraCustomVersion::GUID);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FUE5MainStreamObjectVersion::GUID);
  iVar3 = FArchiveState::CustomVer(this_00,&FNiagaraCustomVersion::GUID);
  iVar4 = FArchiveState::CustomVer(this_00,&FUE5MainStreamObjectVersion::GUID);
  if (this_00->ArIsLoading != 0) {
    if (iVar3 < 0x34) {
      this->SortMode = ViewDistance;
    }
    if (iVar4 < 0x6d) {
      this->Alignment = Unaligned;
      this->FacingMode = FaceCamera;
    }
    if (iVar3 < 0x50) {
      this->bSubImageBlend = '\0';
    }
    if (iVar3 < 0x57) {
      pFVar5 = FNiagaraConstants::GetAttributeDefaultBinding
                         (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_NormalizedAge
                         );
      FVar1 = (pFVar5->ParamMapVariable).Name;
      (this->CustomSortingBinding).RootName = pFVar5->RootName;
      (this->CustomSortingBinding).ParamMapVariable.Name = FVar1;
      uVar2 = *(undefined8 *)&(pFVar5->DataSetName).Number;
      *(undefined8 *)&(this->CustomSortingBinding).ParamMapVariable.TypeDefHandle =
           *(undefined8 *)&(pFVar5->ParamMapVariable).TypeDefHandle;
      *(undefined8 *)&(this->CustomSortingBinding).DataSetName.Number = uVar2;
    }
  }
  UObject::Serialize((UObject *)this,(FStructuredArchiveRecord)local_res10.StructuredArchive);
  if (((this_00->SavePackageData != (FArchiveSavePackageData *)0x0) &&
      (this_00->SavePackageData->CookContext != (FArchiveCookContext *)0x0)) ||
     (this_00->ArIsLoading != 0)) {
    FSubUVDerivedData::Serialize
              (&this->DerivedData,(FStructuredArchiveSlot)local_res10.StructuredArchive);
  }
  return;
}

// SetPreviousBindings @ 1493f9da0

void __thiscall
UNiagaraSpriteRendererProperties::SetPreviousBindings
          (UNiagaraSpriteRendererProperties *this,FVersionedNiagaraEmitterBase *param_1,
          ENiagaraRendererSourceDataMode param_2)

{
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevPositionBinding,&this->PositionBinding,param_1,param_2);
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevVelocityBinding,&this->VelocityBinding,param_1,param_2);
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevSpriteRotationBinding,&this->SpriteRotationBinding,param_1,param_2);
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevSpriteSizeBinding,&this->SpriteSizeBinding,param_1,param_2);
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevSpriteFacingBinding,&this->SpriteFacingBinding,param_1,param_2);
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevSpriteAlignmentBinding,&this->SpriteAlignmentBinding,param_1,param_2);
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevCameraOffsetBinding,&this->CameraOffsetBinding,param_1,param_2);
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevPivotOffsetBinding,&this->PivotOffsetBinding,param_1,param_2);
  return;
}

// StaticRegisterNativesUNiagaraSpriteRendererProperties @ 1493fe910

void __cdecl
UNiagaraSpriteRendererProperties::StaticRegisterNativesUNiagaraSpriteRendererProperties(void)

{
  return;
}

// UpdateMICs @ 149406f90

void __thiscall UNiagaraSpriteRendererProperties::UpdateMICs(UNiagaraSpriteRendererProperties *this)

{
  return;
}

// UpdateSourceModeDerivates @ 1494071a0

void __thiscall
UNiagaraSpriteRendererProperties::UpdateSourceModeDerivates
          (UNiagaraSpriteRendererProperties *this,ENiagaraRendererSourceDataMode param_1,
          bool param_2)

{
  int iVar1;
  UClass *pUVar2;
  UNiagaraEmitterBase *pUVar3;
  FNiagaraMaterialAttributeBinding *this_00;
  FNiagaraMaterialAttributeBinding *pFVar4;
  undefined1 local_res20 [8];
  FVersionedNiagaraEmitterBase local_38;
  
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
    local_38.Emitter = (UNiagaraEmitterBase *)0x0;
    local_38.Version.A = 0;
    local_38.Version.B = 0;
    local_38.Version.C = 0;
    local_38.Version.D = 0;
    SetPreviousBindings(this,&local_38,param_1);
  }
  return;
}

