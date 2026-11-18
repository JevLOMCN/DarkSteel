// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 33

// StaticClass @ 1492c2380

UClass * __cdecl UNiagaraMeshRendererProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraMeshRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraMeshRendererProperties,0x488,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraMeshRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraMeshRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.InnerSingleton;
}

// UNiagaraMeshRendererProperties @ 1492d2140

UNiagaraMeshRendererProperties * __thiscall
UNiagaraMeshRendererProperties::UNiagaraMeshRendererProperties
          (UNiagaraMeshRendererProperties *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  FNiagaraTypeRegistry *pFVar5;
  
  UNiagaraRendererProperties::UNiagaraRendererProperties((UNiagaraRendererProperties *)this,param_1)
  ;
  this->_padding_ = (longlong)&_vftable__for__UNiagaraRendererProperties__;
  iVar4 = -1;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INiagaraRenderableMeshArrayInterface__;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  (this->MeshesBinding).ResolvedParameter.Name.ComparisonIndex = 0;
  (this->MeshesBinding).ResolvedParameter.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->MeshesBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex = iVar3;
  this->bCastShadows = '\x01';
  (this->SubImageSize).field0_0x0._s_0.X = 1.0;
  (this->SubImageSize).field0_0x0._s_0.Y = 1.0;
  (this->LockedAxis).field0_0x0._s_0.Z = 1.0;
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (this->MICOverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MICOverrideMaterials).ArrayNum = 0;
  (this->MICOverrideMaterials).ArrayMax = 0;
  (this->LockedAxis).field0_0x0._s_0.X = 0.0;
  (this->LockedAxis).field0_0x0._s_0.Y = 0.0;
  this->SourceMode = Particles;
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  this->SortMode = None;
  this->SortPrecision = Default;
  this->GpuTranslucentLatency = ProjectDefault;
  (this->MeshBoundsScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X
  ;
  (this->MeshBoundsScale).field0_0x0._s_0.Y = (double)uVar2;
  (this->MeshBoundsScale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z
  ;
  (this->PositionBinding).RootName.ComparisonIndex = 0;
  (this->PositionBinding).RootName.Number = 0;
  this->FacingMode = Default;
  this->LockedAxisSpace = Simulation;
  this->MaxCameraDistance = 1000.0;
  this->RendererVisibility = 0;
  (this->PositionBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PositionBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->PositionBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar3;
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
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->ColorBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar3;
  (this->ColorBinding).bBindingExistsOnSource = '\0';
  (this->ColorBinding).bIsCachedParticleValue = '\x01';
  (this->ColorBinding).DataSetName.ComparisonIndex = 0;
  (this->ColorBinding).DataSetName.Number = 0;
  (this->ColorBinding).BindingSourceMode.Value = '\0';
  (this->VelocityBinding).RootName.ComparisonIndex = 0;
  (this->VelocityBinding).RootName.Number = 0;
  (this->VelocityBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->VelocityBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->VelocityBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar3;
  (this->VelocityBinding).bBindingExistsOnSource = '\0';
  (this->VelocityBinding).bIsCachedParticleValue = '\x01';
  (this->VelocityBinding).DataSetName.ComparisonIndex = 0;
  (this->VelocityBinding).DataSetName.Number = 0;
  (this->VelocityBinding).BindingSourceMode.Value = '\0';
  (this->MeshOrientationBinding).RootName.ComparisonIndex = 0;
  (this->MeshOrientationBinding).RootName.Number = 0;
  (this->MeshOrientationBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->MeshOrientationBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->MeshOrientationBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar3;
  (this->MeshOrientationBinding).bBindingExistsOnSource = '\0';
  (this->MeshOrientationBinding).bIsCachedParticleValue = '\x01';
  (this->MeshOrientationBinding).DataSetName.ComparisonIndex = 0;
  (this->MeshOrientationBinding).DataSetName.Number = 0;
  (this->MeshOrientationBinding).BindingSourceMode.Value = '\0';
  (this->ScaleBinding).RootName.ComparisonIndex = 0;
  (this->ScaleBinding).RootName.Number = 0;
  (this->ScaleBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->ScaleBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->ScaleBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar3;
  (this->ScaleBinding).bBindingExistsOnSource = '\0';
  (this->ScaleBinding).bIsCachedParticleValue = '\x01';
  (this->ScaleBinding).DataSetName.ComparisonIndex = 0;
  (this->ScaleBinding).DataSetName.Number = 0;
  (this->ScaleBinding).BindingSourceMode.Value = '\0';
  (this->SubImageIndexBinding).RootName.ComparisonIndex = 0;
  (this->SubImageIndexBinding).RootName.Number = 0;
  (this->SubImageIndexBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->SubImageIndexBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->SubImageIndexBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar3;
  (this->SubImageIndexBinding).bBindingExistsOnSource = '\0';
  (this->SubImageIndexBinding).bIsCachedParticleValue = '\x01';
  (this->SubImageIndexBinding).DataSetName.ComparisonIndex = 0;
  (this->SubImageIndexBinding).DataSetName.Number = 0;
  (this->SubImageIndexBinding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterialBinding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterialBinding).RootName.Number = 0;
  (this->DynamicMaterialBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterialBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->DynamicMaterialBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar3;
  (this->DynamicMaterialBinding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterialBinding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterialBinding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterialBinding).DataSetName.Number = 0;
  (this->DynamicMaterialBinding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterial1Binding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterial1Binding).RootName.Number = 0;
  (this->DynamicMaterial1Binding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterial1Binding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->DynamicMaterial1Binding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar3;
  (this->DynamicMaterial1Binding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterial1Binding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterial1Binding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterial1Binding).DataSetName.Number = 0;
  (this->DynamicMaterial1Binding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterial2Binding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterial2Binding).RootName.Number = 0;
  (this->DynamicMaterial2Binding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterial2Binding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->DynamicMaterial2Binding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar3;
  (this->DynamicMaterial2Binding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterial2Binding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterial2Binding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterial2Binding).DataSetName.Number = 0;
  (this->DynamicMaterial2Binding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterial3Binding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterial3Binding).RootName.Number = 0;
  (this->DynamicMaterial3Binding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterial3Binding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->DynamicMaterial3Binding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar3;
  (this->DynamicMaterial3Binding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterial3Binding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterial3Binding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterial3Binding).DataSetName.Number = 0;
  (this->DynamicMaterial3Binding).BindingSourceMode.Value = '\0';
  (this->MaterialRandomBinding).RootName.ComparisonIndex = 0;
  (this->MaterialRandomBinding).RootName.Number = 0;
  (this->MaterialRandomBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->MaterialRandomBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->MaterialRandomBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar3;
  (this->MaterialRandomBinding).bBindingExistsOnSource = '\0';
  (this->MaterialRandomBinding).bIsCachedParticleValue = '\x01';
  (this->MaterialRandomBinding).DataSetName.ComparisonIndex = 0;
  (this->MaterialRandomBinding).DataSetName.Number = 0;
  (this->MaterialRandomBinding).BindingSourceMode.Value = '\0';
  (this->CustomSortingBinding).RootName.ComparisonIndex = 0;
  (this->CustomSortingBinding).RootName.Number = 0;
  (this->CustomSortingBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->CustomSortingBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->CustomSortingBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar3;
  (this->CustomSortingBinding).bBindingExistsOnSource = '\0';
  (this->CustomSortingBinding).bIsCachedParticleValue = '\x01';
  (this->CustomSortingBinding).DataSetName.ComparisonIndex = 0;
  (this->CustomSortingBinding).DataSetName.Number = 0;
  (this->CustomSortingBinding).BindingSourceMode.Value = '\0';
  (this->NormalizedAgeBinding).RootName.ComparisonIndex = 0;
  (this->NormalizedAgeBinding).RootName.Number = 0;
  (this->NormalizedAgeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->NormalizedAgeBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->NormalizedAgeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar3;
  (this->NormalizedAgeBinding).bBindingExistsOnSource = '\0';
  (this->NormalizedAgeBinding).bIsCachedParticleValue = '\x01';
  (this->NormalizedAgeBinding).DataSetName.ComparisonIndex = 0;
  (this->NormalizedAgeBinding).DataSetName.Number = 0;
  (this->NormalizedAgeBinding).BindingSourceMode.Value = '\0';
  (this->CameraOffsetBinding).RootName.ComparisonIndex = 0;
  (this->CameraOffsetBinding).RootName.Number = 0;
  (this->CameraOffsetBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->CameraOffsetBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->CameraOffsetBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar3;
  (this->CameraOffsetBinding).bBindingExistsOnSource = '\0';
  (this->CameraOffsetBinding).bIsCachedParticleValue = '\x01';
  (this->CameraOffsetBinding).DataSetName.ComparisonIndex = 0;
  (this->CameraOffsetBinding).DataSetName.Number = 0;
  (this->CameraOffsetBinding).BindingSourceMode.Value = '\0';
  (this->RendererVisibilityTagBinding).RootName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).RootName.Number = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar3 = -1;
  }
  else {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar3 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar3;
  (this->RendererVisibilityTagBinding).bBindingExistsOnSource = '\0';
  (this->RendererVisibilityTagBinding).bIsCachedParticleValue = '\x01';
  (this->RendererVisibilityTagBinding).DataSetName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).DataSetName.Number = 0;
  (this->RendererVisibilityTagBinding).BindingSourceMode.Value = '\0';
  (this->MeshIndexBinding).RootName.ComparisonIndex = 0;
  (this->MeshIndexBinding).RootName.Number = 0;
  (this->MeshIndexBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->MeshIndexBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0) {
    pFVar5 = FNiagaraTypeRegistry::Get();
    iVar4 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar5,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->MeshIndexBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar4;
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
  FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding(&this->PrevPositionBinding);
  FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding(&this->PrevScaleBinding);
  FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding
            (&this->PrevMeshOrientationBinding);
  FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding(&this->PrevCameraOffsetBinding)
  ;
  FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding(&this->PrevVelocityBinding);
  this->MaterialParamValidMask = 0;
  (this->RendererLayoutWithCustomSorting).VFVariables_GT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithCustomSorting).VFVariables_GT.ArrayNum = 0;
  (this->RendererLayoutWithCustomSorting).VFVariables_GT.ArrayMax = 0;
  (this->RendererLayoutWithCustomSorting).VFVariables_RT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithCustomSorting).VFVariables_RT.ArrayNum = 0;
  (this->RendererLayoutWithCustomSorting).VFVariables_RT.ArrayMax = 0;
  (this->RendererLayoutWithCustomSorting).TotalFloatComponents_GT = 0;
  (this->RendererLayoutWithCustomSorting).TotalHalfComponents_GT = 0;
  (this->RendererLayoutWithCustomSorting).TotalFloatComponents_RT = 0;
  (this->RendererLayoutWithCustomSorting).TotalHalfComponents_RT = 0;
  (this->RendererLayoutWithoutCustomSorting).VFVariables_GT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithoutCustomSorting).VFVariables_GT.ArrayNum = 0;
  (this->RendererLayoutWithoutCustomSorting).VFVariables_GT.ArrayMax = 0;
  (this->RendererLayoutWithoutCustomSorting).VFVariables_RT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithoutCustomSorting).VFVariables_RT.ArrayNum = 0;
  (this->RendererLayoutWithoutCustomSorting).VFVariables_RT.ArrayMax = 0;
  (this->RendererLayoutWithoutCustomSorting).TotalFloatComponents_GT = 0;
  (this->RendererLayoutWithoutCustomSorting).TotalHalfComponents_GT = 0;
  (this->RendererLayoutWithoutCustomSorting).TotalFloatComponents_RT = 0;
  (this->RendererLayoutWithoutCustomSorting).TotalHalfComponents_RT = 0;
  return this;
}

// UNiagaraMeshRendererProperties @ 1492d2830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UNiagaraMeshRendererProperties * __thiscall
UNiagaraMeshRendererProperties::UNiagaraMeshRendererProperties(UNiagaraMeshRendererProperties *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  FNiagaraVariableAttributeBinding *pFVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  FNiagaraTypeRegistry *pFVar8;
  undefined1 auStack_118 [32];
  initializer_list<FNiagaraVariableAttributeBinding_const_*> local_f8;
  FNiagaraVariableAttributeBinding *local_e8;
  FNiagaraVariableAttributeBinding *local_e0;
  FNiagaraVariableAttributeBinding *local_d8;
  FNiagaraVariableAttributeBinding *local_d0;
  FNiagaraVariableAttributeBinding *local_c8;
  FNiagaraVariableAttributeBinding *local_c0;
  FNiagaraVariableAttributeBinding *local_b8;
  FNiagaraVariableAttributeBinding *local_b0;
  FNiagaraVariableAttributeBinding *local_a8;
  FNiagaraVariableAttributeBinding *local_a0;
  FNiagaraVariableAttributeBinding *local_98;
  FNiagaraVariableAttributeBinding *local_90;
  FNiagaraVariableAttributeBinding *local_88;
  FNiagaraVariableAttributeBinding *local_80;
  FNiagaraVariableAttributeBinding *local_78;
  FNiagaraVariableAttributeBinding *local_70;
  FNiagaraVariableAttributeBinding *local_68;
  FNiagaraVariableAttributeBinding *local_60;
  FNiagaraVariableAttributeBinding *local_58;
  FNiagaraVariableAttributeBinding *local_50;
  FNiagaraVariableAttributeBinding *local_48;
  FNiagaraVariableAttributeBinding *local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  UNiagaraRendererProperties::UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  this->_padding_ = (longlong)&_vftable__for__UNiagaraRendererProperties__;
  iVar7 = -1;
  (this->Meshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->_padding_ = (longlong)&_vftable__for__INiagaraRenderableMeshArrayInterface__;
  (this->Meshes).ArrayNum = 0;
  (this->Meshes).ArrayMax = 0;
  (this->MeshesBinding).ResolvedParameter.Name.ComparisonIndex = 0;
  (this->MeshesBinding).ResolvedParameter.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->MeshesBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex = iVar6;
  this->bCastShadows = '\x01';
  (this->OverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverrideMaterials).ArrayNum = 0;
  (this->OverrideMaterials).ArrayMax = 0;
  (this->MICOverrideMaterials).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MICOverrideMaterials).ArrayNum = 0;
  (this->MICOverrideMaterials).ArrayMax = 0;
  (this->LockedAxis).field0_0x0._s_0.X = 0.0;
  (this->LockedAxis).field0_0x0._s_0.Y = 0.0;
  puVar2 = &this->field_0xc8;
  this->bOverrideMaterials = 0;
  this->bLockedAxisEnable = 0;
  this->bSubImageBlend = 1;
  this->bSortOnlyWhenTranslucent = 1;
  (this->SubImageSize).field0_0x0._s_0.X = 1.0;
  (this->SubImageSize).field0_0x0._s_0.Y = 1.0;
  (this->LockedAxis).field0_0x0._s_0.Z = 1.0;
  this->SourceMode = Particles;
  uVar5 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  this->SortMode = None;
  this->SortPrecision = Default;
  this->GpuTranslucentLatency = ProjectDefault;
  (this->MeshBoundsScale).field0_0x0._s_0.X = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X
  ;
  (this->MeshBoundsScale).field0_0x0._s_0.Y = (double)uVar5;
  (this->MeshBoundsScale).field0_0x0._s_0.Z = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z
  ;
  (this->PositionBinding).RootName.ComparisonIndex = 0;
  (this->PositionBinding).RootName.Number = 0;
  this->FacingMode = Default;
  this->LockedAxisSpace = Simulation;
  this->MaxCameraDistance = 1000.0;
  this->RendererVisibility = 0;
  (this->PositionBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PositionBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->PositionBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
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
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->ColorBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  (this->ColorBinding).bBindingExistsOnSource = '\0';
  (this->ColorBinding).bIsCachedParticleValue = '\x01';
  (this->ColorBinding).DataSetName.ComparisonIndex = 0;
  (this->ColorBinding).DataSetName.Number = 0;
  (this->ColorBinding).BindingSourceMode.Value = '\0';
  (this->VelocityBinding).RootName.ComparisonIndex = 0;
  (this->VelocityBinding).RootName.Number = 0;
  (this->VelocityBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->VelocityBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->VelocityBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  (this->VelocityBinding).bBindingExistsOnSource = '\0';
  (this->VelocityBinding).bIsCachedParticleValue = '\x01';
  (this->VelocityBinding).DataSetName.ComparisonIndex = 0;
  (this->VelocityBinding).DataSetName.Number = 0;
  (this->VelocityBinding).BindingSourceMode.Value = '\0';
  (this->MeshOrientationBinding).RootName.ComparisonIndex = 0;
  (this->MeshOrientationBinding).RootName.Number = 0;
  (this->MeshOrientationBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->MeshOrientationBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->MeshOrientationBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  (this->MeshOrientationBinding).bBindingExistsOnSource = '\0';
  (this->MeshOrientationBinding).bIsCachedParticleValue = '\x01';
  (this->MeshOrientationBinding).DataSetName.ComparisonIndex = 0;
  (this->MeshOrientationBinding).DataSetName.Number = 0;
  (this->MeshOrientationBinding).BindingSourceMode.Value = '\0';
  (this->ScaleBinding).RootName.ComparisonIndex = 0;
  (this->ScaleBinding).RootName.Number = 0;
  (this->ScaleBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->ScaleBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->ScaleBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  (this->ScaleBinding).bBindingExistsOnSource = '\0';
  (this->ScaleBinding).bIsCachedParticleValue = '\x01';
  (this->ScaleBinding).DataSetName.ComparisonIndex = 0;
  (this->ScaleBinding).DataSetName.Number = 0;
  (this->ScaleBinding).BindingSourceMode.Value = '\0';
  (this->SubImageIndexBinding).RootName.ComparisonIndex = 0;
  (this->SubImageIndexBinding).RootName.Number = 0;
  (this->SubImageIndexBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->SubImageIndexBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->SubImageIndexBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  (this->SubImageIndexBinding).bBindingExistsOnSource = '\0';
  (this->SubImageIndexBinding).bIsCachedParticleValue = '\x01';
  (this->SubImageIndexBinding).DataSetName.ComparisonIndex = 0;
  (this->SubImageIndexBinding).DataSetName.Number = 0;
  (this->SubImageIndexBinding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterialBinding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterialBinding).RootName.Number = 0;
  (this->DynamicMaterialBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterialBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->DynamicMaterialBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  (this->DynamicMaterialBinding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterialBinding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterialBinding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterialBinding).DataSetName.Number = 0;
  (this->DynamicMaterialBinding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterial1Binding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterial1Binding).RootName.Number = 0;
  (this->DynamicMaterial1Binding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterial1Binding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->DynamicMaterial1Binding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  (this->DynamicMaterial1Binding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterial1Binding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterial1Binding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterial1Binding).DataSetName.Number = 0;
  (this->DynamicMaterial1Binding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterial2Binding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterial2Binding).RootName.Number = 0;
  (this->DynamicMaterial2Binding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterial2Binding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->DynamicMaterial2Binding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  (this->DynamicMaterial2Binding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterial2Binding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterial2Binding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterial2Binding).DataSetName.Number = 0;
  (this->DynamicMaterial2Binding).BindingSourceMode.Value = '\0';
  (this->DynamicMaterial3Binding).RootName.ComparisonIndex = 0;
  (this->DynamicMaterial3Binding).RootName.Number = 0;
  (this->DynamicMaterial3Binding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->DynamicMaterial3Binding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->DynamicMaterial3Binding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  (this->DynamicMaterial3Binding).bBindingExistsOnSource = '\0';
  (this->DynamicMaterial3Binding).bIsCachedParticleValue = '\x01';
  (this->DynamicMaterial3Binding).DataSetName.ComparisonIndex = 0;
  (this->DynamicMaterial3Binding).DataSetName.Number = 0;
  (this->DynamicMaterial3Binding).BindingSourceMode.Value = '\0';
  (this->MaterialRandomBinding).RootName.ComparisonIndex = 0;
  (this->MaterialRandomBinding).RootName.Number = 0;
  (this->MaterialRandomBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->MaterialRandomBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->MaterialRandomBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  (this->MaterialRandomBinding).bBindingExistsOnSource = '\0';
  (this->MaterialRandomBinding).bIsCachedParticleValue = '\x01';
  (this->MaterialRandomBinding).DataSetName.ComparisonIndex = 0;
  (this->MaterialRandomBinding).DataSetName.Number = 0;
  (this->MaterialRandomBinding).BindingSourceMode.Value = '\0';
  (this->CustomSortingBinding).RootName.ComparisonIndex = 0;
  (this->CustomSortingBinding).RootName.Number = 0;
  (this->CustomSortingBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->CustomSortingBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->CustomSortingBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  (this->CustomSortingBinding).bBindingExistsOnSource = '\0';
  (this->CustomSortingBinding).bIsCachedParticleValue = '\x01';
  (this->CustomSortingBinding).DataSetName.ComparisonIndex = 0;
  (this->CustomSortingBinding).DataSetName.Number = 0;
  (this->CustomSortingBinding).BindingSourceMode.Value = '\0';
  (this->NormalizedAgeBinding).RootName.ComparisonIndex = 0;
  (this->NormalizedAgeBinding).RootName.Number = 0;
  (this->NormalizedAgeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->NormalizedAgeBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->NormalizedAgeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  (this->NormalizedAgeBinding).bBindingExistsOnSource = '\0';
  (this->NormalizedAgeBinding).bIsCachedParticleValue = '\x01';
  (this->NormalizedAgeBinding).DataSetName.ComparisonIndex = 0;
  (this->NormalizedAgeBinding).DataSetName.Number = 0;
  (this->NormalizedAgeBinding).BindingSourceMode.Value = '\0';
  (this->CameraOffsetBinding).RootName.ComparisonIndex = 0;
  (this->CameraOffsetBinding).RootName.Number = 0;
  (this->CameraOffsetBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->CameraOffsetBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->CameraOffsetBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  pFVar3 = &this->RendererVisibilityTagBinding;
  (this->CameraOffsetBinding).bBindingExistsOnSource = '\0';
  (this->CameraOffsetBinding).bIsCachedParticleValue = '\x01';
  (this->CameraOffsetBinding).DataSetName.ComparisonIndex = 0;
  (this->CameraOffsetBinding).DataSetName.Number = 0;
  (this->CameraOffsetBinding).BindingSourceMode.Value = '\0';
  (pFVar3->RootName).ComparisonIndex = 0;
  (pFVar3->RootName).Number = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 == (UObject *)0x0) {
    iVar6 = -1;
  }
  else {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar6 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar6;
  (this->RendererVisibilityTagBinding).bBindingExistsOnSource = '\0';
  (this->RendererVisibilityTagBinding).bIsCachedParticleValue = '\x01';
  (this->RendererVisibilityTagBinding).DataSetName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).DataSetName.Number = 0;
  (this->RendererVisibilityTagBinding).BindingSourceMode.Value = '\0';
  (this->MeshIndexBinding).RootName.ComparisonIndex = 0;
  (this->MeshIndexBinding).RootName.Number = 0;
  (this->MeshIndexBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->MeshIndexBinding).ParamMapVariable.Name.Number = 0;
  if (FNiagaraTypeDefinition::Vec4Def.ClassStructOrEnum.field0_0x0 != (UObject *)0x0) {
    pFVar8 = FNiagaraTypeRegistry::Get();
    iVar7 = FNiagaraTypeRegistry::RegisterTypeInternal(pFVar8,&FNiagaraTypeDefinition::Vec4Def);
  }
  (this->MeshIndexBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar7;
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
  FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding(&this->PrevPositionBinding);
  FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding(&this->PrevScaleBinding);
  FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding
            (&this->PrevMeshOrientationBinding);
  FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding(&this->PrevCameraOffsetBinding)
  ;
  FNiagaraVariableAttributeBinding::FNiagaraVariableAttributeBinding(&this->PrevVelocityBinding);
  this->MaterialParamValidMask = 0;
  local_48 = &this->MeshIndexBinding;
  (this->RendererLayoutWithCustomSorting).VFVariables_GT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithCustomSorting).VFVariables_GT.ArrayNum = 0;
  (this->RendererLayoutWithCustomSorting).VFVariables_GT.ArrayMax = 0;
  (this->RendererLayoutWithCustomSorting).VFVariables_RT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithCustomSorting).VFVariables_RT.ArrayNum = 0;
  (this->RendererLayoutWithCustomSorting).VFVariables_RT.ArrayMax = 0;
  (this->RendererLayoutWithCustomSorting).TotalFloatComponents_GT = 0;
  (this->RendererLayoutWithCustomSorting).TotalHalfComponents_GT = 0;
  (this->RendererLayoutWithCustomSorting).TotalFloatComponents_RT = 0;
  (this->RendererLayoutWithCustomSorting).TotalHalfComponents_RT = 0;
  (this->RendererLayoutWithoutCustomSorting).VFVariables_GT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithoutCustomSorting).VFVariables_GT.ArrayNum = 0;
  (this->RendererLayoutWithoutCustomSorting).VFVariables_GT.ArrayMax = 0;
  (this->RendererLayoutWithoutCustomSorting).VFVariables_RT.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->RendererLayoutWithoutCustomSorting).VFVariables_RT.ArrayNum = 0;
  (this->RendererLayoutWithoutCustomSorting).VFVariables_RT.ArrayMax = 0;
  (this->RendererLayoutWithoutCustomSorting).TotalFloatComponents_GT = 0;
  (this->RendererLayoutWithoutCustomSorting).TotalHalfComponents_GT = 0;
  (this->RendererLayoutWithoutCustomSorting).TotalFloatComponents_RT = 0;
  (this->RendererLayoutWithoutCustomSorting).TotalHalfComponents_RT = 0;
  local_e8 = &this->PositionBinding;
  local_e0 = &this->VelocityBinding;
  local_d8 = &this->ColorBinding;
  local_d0 = &this->ScaleBinding;
  local_c8 = &this->MeshOrientationBinding;
  local_c0 = &this->MaterialRandomBinding;
  local_b8 = &this->NormalizedAgeBinding;
  local_b0 = &this->CustomSortingBinding;
  local_a8 = &this->SubImageIndexBinding;
  local_a0 = &this->DynamicMaterialBinding;
  local_98 = &this->DynamicMaterial1Binding;
  local_90 = &this->DynamicMaterial2Binding;
  local_88 = &this->DynamicMaterial3Binding;
  local_80 = &this->CameraOffsetBinding;
  local_f8._First = &local_e8;
  local_f8._Last = &local_40;
  local_78 = &this->PrevPositionBinding;
  local_70 = &this->PrevScaleBinding;
  local_68 = &this->PrevMeshOrientationBinding;
  local_60 = &this->PrevCameraOffsetBinding;
  local_58 = &this->PrevVelocityBinding;
  local_50 = pFVar3;
  TArray<FNiagaraVariableAttributeBinding_const_*,TSizedDefaultAllocator<32>_>::operator=
            ((TArray<FNiagaraVariableAttributeBinding_const_*,TSizedDefaultAllocator<32>_> *)
             &this->_padding_,&local_f8);
  return this;
}

// ~UNiagaraMeshRendererProperties @ 1492d4ae0

void __thiscall
UNiagaraMeshRendererProperties::~UNiagaraMeshRendererProperties
          (UNiagaraMeshRendererProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UNiagaraRendererProperties__;
  this->_padding_ = (longlong)&_vftable__for__INiagaraRenderableMeshArrayInterface__;
  pFVar1 = (this->RendererLayoutWithoutCustomSorting).VFVariables_RT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayoutWithoutCustomSorting).VFVariables_GT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayoutWithCustomSorting).VFVariables_RT.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererLayoutWithCustomSorting).VFVariables_GT.AllocatorInstance.Data;
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
  DestructItems<FNiagaraMeshMaterialOverride,int>
            ((FNiagaraMeshMaterialOverride *)(this->OverrideMaterials).AllocatorInstance.Data,
             (this->OverrideMaterials).ArrayNum);
  pFVar1 = (this->OverrideMaterials).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Meshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7INiagaraRenderableMeshArrayInterface__6B_;
  UNiagaraRendererProperties::~UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  return;
}

// operator() @ 1492d5670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
`UNiagaraMeshRendererProperties::CollectPSOPrecacheData'::__l2::<lambda_1>::operator()
          (void *this,FNiagaraMeshRendererMeshProperties *param_1)

{
  int *piVar1;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar2;
  int iVar3;
  longlong lVar4;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar5;
  code *pcVar6;
  UStaticMesh *this_00;
  bool bVar7;
  int iVar8;
  uint uVar9;
  FNiagaraRenderableStaticMesh *pFVar10;
  FStaticMeshRenderData *pFVar11;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar12;
  ForElementType<FPSOPrecacheVertexFactoryData> *pFVar13;
  uint uVar14;
  ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams> FVar15;
  longlong *plVar16;
  FScriptContainerElement *pFVar17;
  ForAnyElementType FVar18;
  longlong *plVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined1 auStack_2a8 [32];
  ForElementType<FPSOPrecacheVertexFactoryData> *local_288;
  ForElementType<FPSOPrecacheVertexFactoryData> *local_280;
  longlong local_278;
  longlong local_270;
  undefined8 local_268;
  undefined1 local_258 [8];
  UStaticMesh *local_250;
  TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> local_248;
  FScriptContainerElement *local_238;
  undefined1 local_230 [16];
  INiagaraRenderableMeshInterface *local_220;
  FPSOPrecacheVertexFactoryData local_218;
  FStaticMeshDataType local_208;
  FNiagaraRenderableStaticMesh local_148;
  TArray<FVertexElement,TFixedAllocator<17>_> local_d8;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2a8;
  local_220 = (INiagaraRenderableMeshInterface *)0x0;
  local_250 = (UStaticMesh *)0x0;
  NiagaraMeshRendererPropertiesInternal::ResolveRenderableMeshInternal
            (param_1,(FNiagaraEmitterInstance *)**(undefined8 **)this,&local_220,&local_250);
  this_00 = local_250;
  if (local_250 != (UStaticMesh *)0x0) {
    local_248.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_248.ArrayNum = 0;
    local_248.ArrayMax = 0;
    pFVar10 = FNiagaraRenderableStaticMesh::FNiagaraRenderableStaticMesh(&local_148,local_250);
    (**(code **)(pFVar10->_padding_ + 0x40))(pFVar10);
    local_148._padding_ = (longlong)&___7INiagaraRenderableMesh__6B_;
    if ((longlong *)local_148._padding_ != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)(local_148._padding_ + 0xc);
      iVar3 = *piVar1;
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (iVar3 == 1) {
        (**(code **)(*(longlong *)local_148._padding_ + 8))();
      }
    }
    if (local_248.ArrayNum != 0) {
      UNiagaraMeshRendererProperties::ApplyMaterialOverrides
                (*(UNiagaraMeshRendererProperties **)((longlong)this + 8),
                 (FNiagaraEmitterInstance *)0x0,&local_248);
      iVar3 = local_248.ArrayNum;
      pFVar17 = local_248.AllocatorInstance.Data + (longlong)local_248.ArrayNum * 8;
      FVar18.Data = local_248.AllocatorInstance.Data;
      local_238 = pFVar17;
      while( true ) {
        if (local_248.ArrayNum != iVar3) {
          local_258[0] = 0;
          `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_258);
        }
        if (FVar18.Data == pFVar17) break;
        lVar4 = *(longlong *)FVar18.Data;
        if (lVar4 != 0) {
          FVar15 = *(ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams> *)
                    ((longlong)this + 0x10);
          iVar8 = *(int *)((ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams> *)
                          ((longlong)FVar15 + 0x78))->InlineData;
          if (iVar8 == *(int *)((longlong)FVar15 + 0x7c)) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams>_>
                              (0x838,(ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams>
                                      *)FVar15,(int *)((longlong)FVar15 + 0x7c));
          }
          *(int *)((ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams> *)
                  ((longlong)FVar15 + 0x78))->InlineData = iVar8 + 1;
          if (*(ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams> *)
               ((longlong)FVar15 + 0x70) !=
              (ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams>)0x0) {
            FVar15 = *(ForElementType<UNiagaraRendererProperties::FPSOPrecacheParams> *)
                      ((longlong)FVar15 + 0x70);
          }
          plVar19 = (longlong *)((longlong)iVar8 * 0x38 + (longlong)FVar15);
          DefaultConstructItems<UNiagaraRendererProperties::FPSOPrecacheParams,int>(plVar19,1);
          *plVar19 = lVar4;
          if (**(char **)((longlong)this + 0x18) == '\0') {
            uVar9 = UStaticMesh::GetMinLODIdx(this_00,false);
            pFVar11 = UStaticMesh::GetRenderData(this_00);
            pFVar17 = local_238;
            if (((int)uVar9 < 0) || ((pFVar11->LODResources).Array.ArrayNum <= (int)uVar9))
            goto LAB_1492d5afc;
            local_208.TextureCoordinates.ArrayMax = 4;
            local_208.PositionComponent.VertexBuffer = (FVertexBuffer *)0x0;
            local_208.PositionComponent.StreamOffset = 0;
            local_208.PositionComponent.Offset = '\0';
            local_208.PositionComponent.Stride = '\0';
            local_208.PositionComponent.Type.Value = '\0';
            local_208.PositionComponent.VertexStreamUsage = Default;
            local_208.TangentBasisComponents[0].VertexBuffer = (FVertexBuffer *)0x0;
            local_208.TangentBasisComponents[0].StreamOffset = 0;
            local_208.TangentBasisComponents[0].Offset = '\0';
            local_208.TangentBasisComponents[0].Stride = '\0';
            local_208.TangentBasisComponents[0].Type.Value = '\0';
            local_208.TangentBasisComponents[0].VertexStreamUsage = Default;
            local_208.TangentBasisComponents[1].VertexBuffer = (FVertexBuffer *)0x0;
            local_208.TangentBasisComponents[1].StreamOffset = 0;
            local_208.TangentBasisComponents[1].Offset = '\0';
            local_208.TangentBasisComponents[1].Stride = '\0';
            local_208.TangentBasisComponents[1].Type.Value = '\0';
            local_208.TangentBasisComponents[1].VertexStreamUsage = Default;
            local_208.TextureCoordinates.ArrayNum = 0;
            local_208.LightMapCoordinateComponent.VertexBuffer = (FVertexBuffer *)0x0;
            local_208.LightMapCoordinateComponent.StreamOffset = 0;
            local_208.LightMapCoordinateComponent.Offset = '\0';
            local_208.LightMapCoordinateComponent.Stride = '\0';
            local_208.LightMapCoordinateComponent.Type.Value = '\0';
            local_208.LightMapCoordinateComponent.VertexStreamUsage = Default;
            local_208.ColorComponent.VertexBuffer = (FVertexBuffer *)0x0;
            local_208.ColorComponent.StreamOffset = 0;
            local_208.ColorComponent.Offset = '\0';
            local_208.ColorComponent.Stride = '\0';
            local_208.ColorComponent.Type.Value = '\0';
            local_208.ColorComponent.VertexStreamUsage = Default;
            local_208.PositionComponentSRV = (FRHIShaderResourceView *)0x0;
            local_208.TangentsSRV = (FRHIShaderResourceView *)0x0;
            local_208.LODLightmapDataIndex = '\0';
            local_208.TextureCoordinatesSRV = (FRHIShaderResourceView *)0x0;
            local_208.ColorComponentsSRV = (FRHIShaderResourceView *)0x0;
            local_d8.ArrayNum = 0;
            local_208.ColorIndexMask = 0xffffffff;
            local_208.LightMapCoordinateIndex = -1;
            local_208.NumTexCoords = '\0';
            local_d8.ArrayMax = 0x11;
            pFVar11 = UStaticMesh::GetRenderData(this_00);
            iVar8 = (pFVar11->LODResources).Array.ArrayNum;
            uVar14 = 0;
            if ((int)uVar9 < iVar8) {
              uVar14 = ~uVar9 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (local_288 = (ForElementType<FPSOPrecacheVertexFactoryData> *)(longlong)(int)uVar9,
               local_280 = (ForElementType<FPSOPrecacheVertexFactoryData> *)(longlong)iVar8,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            lVar4 = *(longlong *)
                     ((pFVar11->LODResources).Array.AllocatorInstance.Data +
                     (longlong)(int)uVar9 * 8);
            FPositionVertexBuffer::BindPositionVertexBuffer
                      ((FPositionVertexBuffer *)(lVar4 + 0x188),(FVertexFactory *)0x0,&local_208);
            FStaticMeshVertexBuffer::BindTangentVertexBuffer
                      ((FStaticMeshVertexBuffer *)(lVar4 + 0xd0),(FVertexFactory *)0x0,&local_208);
            FStaticMeshVertexBuffer::BindPackedTexCoordVertexBuffer
                      ((FStaticMeshVertexBuffer *)(lVar4 + 0xd0),(FVertexFactory *)0x0,&local_208,4)
            ;
            FColorVertexBuffer::BindColorVertexBuffer
                      ((FColorVertexBuffer *)(lVar4 + 0x1d8),(FVertexFactory *)0x0,&local_208);
            FNiagaraMeshVertexFactory::GetVertexElements
                      (GMaxRHIFeatureLevel,*(bool *)*(undefined8 *)((longlong)this + 0x18),
                       &local_208,&local_d8);
            pFVar2 = (ForElementType<FPSOPrecacheVertexFactoryData> *)(plVar19 + 1);
            pFVar12 = (ForElementType<FPSOPrecacheVertexFactoryData> *)
                      FPSOPrecacheVertexFactoryData::FPSOPrecacheVertexFactoryData
                                (&local_218,
                                 (FVertexFactoryType *)**(undefined8 **)((longlong)this + 0x20),
                                 &local_d8);
            pFVar5 = (ForElementType<FPSOPrecacheVertexFactoryData> *)plVar19[5];
            pFVar13 = pFVar2;
            if (pFVar5 != (ForElementType<FPSOPrecacheVertexFactoryData> *)0x0) {
              pFVar13 = pFVar5;
            }
            if (pFVar13 <= pFVar12) {
              pFVar13 = pFVar2;
              if (pFVar5 != (ForElementType<FPSOPrecacheVertexFactoryData> *)0x0) {
                pFVar13 = pFVar5;
              }
              if (pFVar12 < (ForElementType<FPSOPrecacheVertexFactoryData> *)
                            (pFVar13->InlineData +
                            (longlong)*(int *)((longlong)plVar19 + 0x34) * 0x10)) {
                local_270 = (longlong)(int)plVar19[6];
                local_268 = 0x10;
                local_280 = pFVar2;
                if (pFVar5 != (ForElementType<FPSOPrecacheVertexFactoryData> *)0x0) {
                  local_280 = pFVar5;
                }
                local_288 = pFVar12;
                local_278 = (longlong)*(int *)((longlong)plVar19 + 0x34);
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar7) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
            }
            iVar8 = (int)plVar19[6];
            if (iVar8 == *(int *)((longlong)plVar19 + 0x34)) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                                (0x810,pFVar2,(int *)((longlong)plVar19 + 0x34));
            }
            *(int *)(plVar19 + 6) = iVar8 + 1;
            uVar20 = *(undefined4 *)pFVar12->InlineData;
            uVar21 = *(undefined4 *)(pFVar12->InlineData + 4);
            uVar22 = *(undefined4 *)(pFVar12->InlineData + 8);
            uVar23 = *(undefined4 *)(pFVar12->InlineData + 0xc);
          }
          else {
            pFVar2 = (ForElementType<FPSOPrecacheVertexFactoryData> *)(plVar19 + 1);
            pFVar5 = (ForElementType<FPSOPrecacheVertexFactoryData> *)plVar19[5];
            local_230._0_8_ = *(undefined8 *)*(uchar **)((longlong)this + 0x20);
            pFVar13 = pFVar2;
            if (pFVar5 != (ForElementType<FPSOPrecacheVertexFactoryData> *)0x0) {
              pFVar13 = pFVar5;
            }
            local_230[8] = '\0';
            local_230[9] = '\0';
            local_230[10] = '\0';
            local_230[0xb] = '\0';
            local_230[0xc] = '\0';
            local_230[0xd] = '\0';
            local_230[0xe] = '\0';
            local_230[0xf] = '\0';
            if (pFVar13 <= (ForElementType<FPSOPrecacheVertexFactoryData> *)local_230) {
              pFVar13 = pFVar2;
              if (pFVar5 != (ForElementType<FPSOPrecacheVertexFactoryData> *)0x0) {
                pFVar13 = pFVar5;
              }
              if (local_230 <
                  pFVar13->InlineData + (longlong)*(int *)((longlong)plVar19 + 0x34) * 0x10) {
                local_270 = (longlong)(int)plVar19[6];
                local_268 = 0x10;
                local_280 = pFVar2;
                if (pFVar5 != (ForElementType<FPSOPrecacheVertexFactoryData> *)0x0) {
                  local_280 = pFVar5;
                }
                local_288 = (ForElementType<FPSOPrecacheVertexFactoryData> *)local_230;
                local_278 = (longlong)*(int *)((longlong)plVar19 + 0x34);
                bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  );
                if (bVar7) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
            }
            iVar8 = (int)plVar19[6];
            if (iVar8 == *(int *)((longlong)plVar19 + 0x34)) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                                (0x810,pFVar2,(int *)((longlong)plVar19 + 0x34));
            }
            *(int *)(plVar19 + 6) = iVar8 + 1;
            uVar20 = local_230._0_4_;
            uVar21 = local_230._4_4_;
            uVar22 = local_230._8_4_;
            uVar23 = local_230._12_4_;
          }
          plVar16 = plVar19 + 1;
          if ((longlong *)plVar19[5] != (longlong *)0x0) {
            plVar16 = (longlong *)plVar19[5];
          }
          plVar16 = plVar16 + (longlong)iVar8 * 2;
          *(undefined4 *)plVar16 = uVar20;
          *(undefined4 *)((longlong)plVar16 + 4) = uVar21;
          *(undefined4 *)(plVar16 + 1) = uVar22;
          *(undefined4 *)((longlong)plVar16 + 0xc) = uVar23;
          pFVar17 = local_238;
        }
LAB_1492d5afc:
        FVar18.Data = FVar18.Data + 8;
      }
    }
    if (local_248.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_248.AllocatorInstance.Data);
    }
  }
  return;
}

// operator() @ 1492d5d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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
`UNiagaraMeshRendererProperties::GetUsedMaterials'::__l2::<lambda_1>::operator()
          (void *this,FNiagaraMeshRendererMeshProperties *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  int iVar3;
  ForAnyElementType *pFVar4;
  longlong *plVar5;
  UStaticMesh *pUVar6;
  longlong lVar7;
  FNiagaraRenderableStaticMesh *pFVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [8];
  UStaticMesh *local_c0;
  INiagaraRenderableMeshInterface *local_b8 [2];
  FNiagaraRenderableStaticMesh local_a8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pFVar4 = *(ForAnyElementType **)this;
  iVar3 = *(int *)((longlong)&pFVar4[1].Data + 4);
  *(undefined4 *)&pFVar4[1].Data = 0;
  if (iVar3 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,pFVar4,0,(int *)((longlong)&pFVar4[1].Data + 4));
  }
  local_b8[0] = (INiagaraRenderableMeshInterface *)0x0;
  local_c0 = (UStaticMesh *)0x0;
  NiagaraMeshRendererPropertiesInternal::ResolveRenderableMeshInternal
            (param_1,(FNiagaraEmitterInstance *)**(undefined8 **)((longlong)this + 8),local_b8,
             &local_c0);
  if ((local_b8[0] == (INiagaraRenderableMeshInterface *)0x0) ||
     (**(longlong **)((longlong)this + 0x10) == 0)) {
    if (local_c0 != (UStaticMesh *)0x0) {
      pFVar8 = FNiagaraRenderableStaticMesh::FNiagaraRenderableStaticMesh(&local_a8,local_c0);
      (**(code **)(pFVar8->_padding_ + 0x40))(pFVar8,*(undefined8 *)this);
      local_a8._padding_ = (longlong)&___7INiagaraRenderableMesh__6B_;
      if ((longlong *)local_a8._padding_ != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)(local_a8._padding_ + 0xc);
        iVar3 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (**(code **)(*(longlong *)local_a8._padding_ + 8))(local_a8._padding_,1);
        }
      }
    }
  }
  else {
    (**(code **)((longlong)*local_b8[0] + 0x18))
              (local_b8[0],*(undefined8 *)(**(longlong **)((longlong)this + 0x10) + 0x120),
               *(undefined8 *)this);
  }
  if (0 < (*(TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> **)this)->ArrayNum) {
    UNiagaraMeshRendererProperties::ApplyMaterialOverrides
              (*(UNiagaraMeshRendererProperties **)((longlong)this + 0x18),
               (FNiagaraEmitterInstance *)**(undefined8 **)((longlong)this + 8),
               *(TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> **)this);
    pFVar4 = *(ForAnyElementType **)((longlong)this + 0x20);
    uVar10 = *(int *)(*(longlong *)this + 8) + *(int *)&pFVar4[1].Data;
    if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
    }
    piVar1 = (int *)((longlong)&pFVar4[1].Data + 4);
    if (*piVar1 < (int)uVar10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar10,pFVar4,*(int *)&pFVar4[1].Data,piVar1);
    }
    plVar5 = *(longlong **)this;
    puVar9 = (undefined8 *)*plVar5;
    lVar7 = plVar5[1];
    puVar2 = puVar9 + (int)lVar7;
    while( true ) {
      if ((int)plVar5[1] != (int)lVar7) {
        `TCheckedPointerIterator<UMaterialInterface_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_c8);
      }
      if (puVar9 == puVar2) break;
      pUVar6 = (UStaticMesh *)*puVar9;
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (pUVar6 != (UStaticMesh *)0x0) goto LAB_1492d5efd;
      }
      else if (pUVar6 != (UStaticMesh *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_1492d5efd:
        local_c0 = pUVar6;
        TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<UMaterialInterface_*>
                  (*(TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> **)
                    ((longlong)this + 0x20),(UMaterialInterface **)&local_c0);
      }
      puVar9 = puVar9 + 1;
    }
  }
  return;
}

// ApplyMaterialOverrides @ 1492db320

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
UNiagaraMeshRendererProperties::ApplyMaterialOverrides
          (UNiagaraMeshRendererProperties *this,FNiagaraEmitterInstance *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FNiagaraTypeRegistry *this_00;
  FNiagaraTypeDefinition *pFVar6;
  TObjectPtr<UObject> this_01;
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
LAB_1492db4de:
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
            if (lVar12 == 0) goto LAB_1492db584;
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
            if (*(longlong *)(pFVar2 + lVar16 + 8) == 0) goto LAB_1492db4de;
            this_00 = FNiagaraTypeRegistry::Get();
            pFVar6 = FNiagaraTypeRegistry::GetRegisteredType
                               (this_00,*(int *)(pFVar2 + lVar16 + 0x10));
            if ((pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)
            goto LAB_1492db4de;
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
            this_01 = FNiagaraEmitterInstance::FindBinding
                                (param_1,(FNiagaraVariable *)&stack0xffffffffffffffb8);
            if (*(longlong *)this_01.field0_0x0 == 0) goto LAB_1492db4de;
            pUVar7 = Z_Construct_UClass_UMaterialInterface_NoRegister();
            bVar4 = FObjectPtr::IsA((FObjectPtr *)this_01.field0_0x0,pUVar7);
            if ((!bVar4) || (lVar12 = *(longlong *)this_01.field0_0x0, lVar12 == 0))
            goto LAB_1492db4de;
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
LAB_1492db584:
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
LAB_1492db62d:
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
            goto LAB_1492db62d;
          }
          pFVar8 = pFVar8 + 0x10;
        } while (pFVar8 != pFVar9);
        pFVar11 = pFVar11 + 8;
      }
    }
  }
  return;
}

// CacheFromCompiledData @ 1492dce70

void __thiscall
UNiagaraMeshRendererProperties::CacheFromCompiledData
          (UNiagaraMeshRendererProperties *this,FNiagaraDataSetCompiledData *param_1)

{
  FNiagaraRendererLayout *pFVar1;
  bool bVar2;
  int iVar3;
  
  (**(code **)(this->_padding_ + 0x358))(this,this->SourceMode,0);
  bVar2 = UNiagaraRendererProperties::NeedsPreciseMotionVectors((UNiagaraRendererProperties *)this);
  pFVar1 = &this->RendererLayoutWithCustomSorting;
  iVar3 = 0xe;
  if (bVar2) {
    iVar3 = 0x13;
  }
  FNiagaraRendererLayout::Initialize(pFVar1,iVar3);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PositionBinding,0);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->VelocityBinding,1);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->ColorBinding,2);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->ScaleBinding,3);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->MeshOrientationBinding,4);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->MaterialRandomBinding,5);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->NormalizedAgeBinding,6);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->CustomSortingBinding,7);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->SubImageIndexBinding,8);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->CameraOffsetBinding,0xd);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterialBinding,9);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterial1Binding,10);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterial2Binding,0xb);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterial3Binding,0xc);
  bVar2 = UNiagaraRendererProperties::NeedsPreciseMotionVectors((UNiagaraRendererProperties *)this);
  if (bVar2) {
    FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PrevPositionBinding,0xe);
    FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PrevScaleBinding,0xf);
    FNiagaraRendererLayout::SetVariableFromBinding
              (pFVar1,param_1,&this->PrevMeshOrientationBinding,0x10);
    FNiagaraRendererLayout::SetVariableFromBinding
              (pFVar1,param_1,&this->PrevCameraOffsetBinding,0x11);
    FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PrevVelocityBinding,0x12);
  }
  FNiagaraRendererLayout::Finalize(pFVar1);
  pFVar1 = &this->RendererLayoutWithoutCustomSorting;
  FNiagaraRendererLayout::Initialize(pFVar1,iVar3);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PositionBinding,0);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->VelocityBinding,1);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->ColorBinding,2);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->ScaleBinding,3);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->MeshOrientationBinding,4);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->MaterialRandomBinding,5);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->NormalizedAgeBinding,6);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->SubImageIndexBinding,8);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->CameraOffsetBinding,0xd);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterialBinding,9);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterial1Binding,10);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterial2Binding,0xb);
  FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->DynamicMaterial3Binding,0xc);
  bVar2 = UNiagaraRendererProperties::NeedsPreciseMotionVectors((UNiagaraRendererProperties *)this);
  if (bVar2) {
    FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PrevPositionBinding,0xe);
    FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PrevScaleBinding,0xf);
    FNiagaraRendererLayout::SetVariableFromBinding
              (pFVar1,param_1,&this->PrevMeshOrientationBinding,0x10);
    FNiagaraRendererLayout::SetVariableFromBinding
              (pFVar1,param_1,&this->PrevCameraOffsetBinding,0x11);
    FNiagaraRendererLayout::SetVariableFromBinding(pFVar1,param_1,&this->PrevVelocityBinding,0x12);
  }
  FNiagaraRendererLayout::Finalize(pFVar1);
  return;
}

// CollectPSOPrecacheData @ 1492de0a0

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
UNiagaraMeshRendererProperties::CollectPSOPrecacheData
          (UNiagaraMeshRendererProperties *this,FNiagaraEmitterInstance *param_1,
          TArray<UNiagaraRendererProperties::FPSOPrecacheParams,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  bool bVar1;
  UNiagaraDataInterface *this_00;
  UClass *pUVar2;
  FNiagaraSystemInstance *this_01;
  FNiagaraSystemInstance *pFVar3;
  undefined1 local_res8 [8];
  FNiagaraEmitterInstance *local_res10;
  longlong local_res18;
  FNiagaraVariable local_68;
  code *local_48 [5];
  undefined8 *local_20;
  
  local_res10 = param_1;
  local_res18 = (**(code **)(this->_padding_ + 0x2c8))();
  if (((*(uint *)(local_res18 + 0x38) & 0x4000) == 0) ||
     (bVar1 = FVertexFactoryType::CheckManualVertexFetchSupport(GMaxRHIFeatureLevel), !bVar1)) {
    local_res8[0] = 0;
  }
  else {
    local_res8[0] = 1;
  }
  pFVar3 = (FNiagaraSystemInstance *)0x0;
  if (local_res10 != (FNiagaraEmitterInstance *)0x0) {
    local_68._padding_ = *(longlong *)&(this->MeshesBinding).ResolvedParameter.Name;
    local_68._padding_._0_4_ =
         (this->MeshesBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex;
    local_68.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.VarData.ArrayNum = 0;
    local_68.VarData.ArrayMax = 0;
    this_00 = FNiagaraParameterStore::GetDataInterface(&local_res10->RendererBindings,&local_68);
    this_01 = pFVar3;
    if (this_00 != (UNiagaraDataInterface *)0x0) {
      pUVar2 = Z_Construct_UClass_UNiagaraRenderableMeshArrayInterface_NoRegister();
      this_01 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar2);
    }
    if (local_68.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.VarData.AllocatorInstance.Data);
    }
    if (this_01 != (FNiagaraSystemInstance *)0x0) goto LAB_1492de167;
  }
  this_01 = (FNiagaraSystemInstance *)&this->_padding_;
LAB_1492de167:
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x30,8);
  *local_20 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UNiagaraMeshRendererProperties::CollectPSOPrecacheData'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = &local_res10;
  local_20[2] = this;
  local_20[3] = param_2;
  local_20[4] = local_res8;
  local_20[5] = &local_res18;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraMeshRendererProperties::CollectPSOPrecacheData'::__l2::<lambda_1>,void,FNiagaraMeshRendererMeshProperties_const_&>
                  ::Call;
  }
  if (local_res10 != (FNiagaraEmitterInstance *)0x0) {
    pFVar3 = local_res10->ParentSystemInstance;
  }
  INiagaraRenderableMeshArrayInterface::ForEachMesh
            ((INiagaraRenderableMeshArrayInterface *)this_01,pFVar3,
             (TFunction<void___cdecl(FNiagaraMeshRendererMeshProperties_const_&)> *)local_48);
  return;
}

// CreateBoundsCalculator @ 1492de780

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraBoundsCalculator * __thiscall
UNiagaraMeshRendererProperties::CreateBoundsCalculator(UNiagaraMeshRendererProperties *this)

{
  double dVar1;
  double dVar2;
  double dVar3;
  FNiagaraBoundsCalculator FVar4;
  FScriptContainerElement FVar5;
  int iVar6;
  FNiagaraBoundsCalculator FVar7;
  FNiagaraBoundsCalculator FVar8;
  FNiagaraBoundsCalculator FVar9;
  FNiagaraBoundsCalculator FVar10;
  FNiagaraBoundsCalculator FVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined1 auVar17 [16];
  undefined8 uVar18;
  char cVar19;
  FVersionedNiagaraEmitterData *pFVar20;
  TBoxSphereBounds<double,double> *pTVar21;
  FNiagaraTypeRegistry *this_00;
  FNiagaraTypeDefinition *pFVar22;
  FNiagaraBoundsCalculator *pFVar23;
  FScriptContainerElement *pFVar24;
  char cVar25;
  FScriptContainerElement *pFVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  double dVar31;
  double dVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined1 local_1c8 [8];
  double local_1c0;
  double local_1b8;
  double local_1b0;
  FNiagaraBoundsCalculator local_1a8;
  FNiagaraBoundsCalculator local_1a0;
  FNiagaraBoundsCalculator FStack_198;
  FNiagaraBoundsCalculator local_190;
  FNiagaraBoundsCalculator local_188;
  FNiagaraBoundsCalculator FStack_180;
  FNiagaraBoundsCalculator local_178;
  double local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 auStack_158 [16];
  double dStack_148;
  undefined8 local_140;
  undefined1 local_138 [16];
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  undefined8 local_108;
  TBoxSphereBounds<double,double> local_100 [3];
  
  cVar19 = (**(code **)(this->_padding_ + 0x308))();
  if (cVar19 == '\x01') {
    return (FNiagaraBoundsCalculator *)0x0;
  }
  cVar19 = '\0';
  cVar25 = '\0';
  auStack_158._8_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  auStack_158._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_170 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  uStack_168 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
  dStack_148 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_160 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_;
  local_1a8 = (FNiagaraBoundsCalculator)0x0;
  local_190 = (FNiagaraBoundsCalculator)0x0;
  local_178 = (FNiagaraBoundsCalculator)0x0;
  local_1a0 = (FNiagaraBoundsCalculator)0x0;
  FStack_198 = (FNiagaraBoundsCalculator)0x0;
  local_188 = (FNiagaraBoundsCalculator)0x0;
  FStack_180 = (FNiagaraBoundsCalculator)0x0;
  pFVar20 = UNiagaraRendererProperties::GetEmitterData((UNiagaraRendererProperties *)this);
  if (pFVar20 != (FVersionedNiagaraEmitterData *)0x0) {
    cVar19 = pFVar20->bLocalSpace;
  }
  iVar6 = (this->Meshes).ArrayNum;
  pFVar24 = (this->Meshes).AllocatorInstance.Data;
  uVar33 = (uint)local_160;
  uVar34 = (uint)((ulonglong)local_160 >> 0x20);
  uVar35 = (uint)uStack_168;
  uVar36 = (uint)((ulonglong)uStack_168 >> 0x20);
  pFVar26 = pFVar24 + (longlong)iVar6 * 0x80;
  dVar13 = local_170;
  dVar14 = (double)auStack_158._0_8_;
  dVar15 = (double)auStack_158._8_8_;
  uVar16 = dStack_148;
  uVar27 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar28 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  do {
    while( true ) {
      if ((this->Meshes).ArrayNum != iVar6) {
        `TCheckedPointerIterator<FNiagaraMeshRendererMeshProperties,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1c8);
      }
      if (pFVar24 == pFVar26) {
        if (cVar25 == '\0') {
          if ((this->MeshesBinding).ResolvedParameter.Name == (FName)0x0) {
            return (FNiagaraBoundsCalculator *)0x0;
          }
          this_00 = FNiagaraTypeRegistry::Get();
          pFVar22 = FNiagaraTypeRegistry::GetRegisteredType
                              (this_00,(this->MeshesBinding).ResolvedParameter.TypeDefHandle.
                                       RegisteredTypeIndex);
          if ((pFVar22->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) {
            return (FNiagaraBoundsCalculator *)0x0;
          }
          dVar13 = UE::Math::TVector<double>::OneVector.field0_0x0._0_8_;
          uVar35 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
          uVar36 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
          local_140 = CONCAT71(local_140._1_7_,1);
          auStack_158 = UE::Math::TVector<double>::OneVector.field0_0x0._0_16_;
          auVar17 = auStack_158;
          auStack_158._8_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._8_8_;
          uVar33 = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z,0);
          uVar34 = (uint)((ulonglong)UE::Math::TVector<double>::OneVector.field0_0x0._16_8_ >> 0x20)
          ;
          dVar15 = (double)auStack_158._8_8_;
          uVar16 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
          dVar14 = dVar13;
          auStack_158 = auVar17;
        }
        pFVar23 = ::operator_new(0x78);
        if (pFVar23 == (FNiagaraBoundsCalculator *)0x0) {
          return (FNiagaraBoundsCalculator *)0x0;
        }
        *(undefined1 *)(pFVar23 + 1) = 1;
        *(undefined4 *)&pFVar23[1].field_0x4 = 0xffffffff;
        uVar29 = SUB84(dVar13,0) & uVar27;
        uVar30 = (uint)((ulonglong)dVar13 >> 0x20) & uVar28;
        *(undefined1 *)(pFVar23 + 2) = 1;
        uVar39 = SUB84(dVar14,0) & uVar27;
        uVar40 = (uint)((ulonglong)dVar14 >> 0x20) & uVar28;
        *(undefined4 *)&pFVar23[2].field_0x4 = 0xffffffff;
        if ((double)CONCAT44(uVar30,uVar29) <= (double)CONCAT44(uVar40,uVar39)) {
          uVar29 = uVar39;
          uVar30 = uVar40;
        }
        *(undefined1 *)(pFVar23 + 3) = 1;
        *(undefined4 *)&pFVar23[3].field_0x4 = 0xffffffff;
        uVar37 = SUB84(dVar15,0) & uVar27;
        uVar38 = (uint)((ulonglong)dVar15 >> 0x20) & uVar28;
        *(undefined1 *)(pFVar23 + 4) = 1;
        uVar39 = uVar35 & uVar27;
        uVar40 = uVar36 & uVar28;
        if ((double)CONCAT44(uVar36 & uVar28,uVar35 & uVar27) <= (double)CONCAT44(uVar38,uVar37)) {
          uVar39 = uVar37;
          uVar40 = uVar38;
        }
        *(undefined4 *)&pFVar23[4].field_0x4 = 0xffffffff;
        *pFVar23 = (FNiagaraBoundsCalculator)&___7__FNiagaraBoundsCalculatorHelper__0A__00_0A___6B_;
        uVar37 = (uint)uVar16 & uVar27;
        uVar38 = (uint)((ulonglong)uVar16 >> 0x20) & uVar28;
        FVar4._4_4_ = uVar30;
        FVar4._0_4_ = uVar29;
        pFVar23[5] = FVar4;
        uVar35 = uVar33 & uVar27;
        uVar36 = uVar34 & uVar28;
        if ((double)CONCAT44(uVar34 & uVar28,uVar33 & uVar27) <= (double)CONCAT44(uVar38,uVar37)) {
          uVar35 = uVar37;
          uVar36 = uVar38;
        }
        FVar11._4_4_ = uVar40;
        FVar11._0_4_ = uVar39;
        pFVar23[6] = FVar11;
        FVar10._4_4_ = uVar36;
        FVar10._0_4_ = uVar35;
        pFVar23[7] = FVar10;
        *(char *)(pFVar23 + 0xe) = cVar19;
        pFVar23[8] = local_1a0;
        pFVar23[9] = FStack_198;
        pFVar23[10] = local_190;
        pFVar23[0xb] = local_188;
        pFVar23[0xc] = FStack_180;
        pFVar23[0xd] = local_178;
        return pFVar23;
      }
      if (*(UStaticMesh **)pFVar24 != (UStaticMesh *)0x0) break;
LAB_1492deb4f:
      pFVar24 = pFVar24 + 0x80;
    }
    pTVar21 = UStaticMesh::GetBounds(*(UStaticMesh **)pFVar24,local_100);
    FVar5 = pFVar24[0x50];
    local_108 = CONCAT71(local_108._1_7_,1);
    dVar1 = (pTVar21->Origin).field0_0x0._s_0.X;
    dVar2 = (pTVar21->Origin).field0_0x0._s_0.Z;
    dVar3 = (pTVar21->Origin).field0_0x0._s_0.Y;
    local_1c0 = (dVar1 - (pTVar21->BoxExtent).field0_0x0._s_0.X) * *(double *)(pFVar24 + 8);
    local_1b0 = (dVar2 - (pTVar21->BoxExtent).field0_0x0._s_0.Z) * *(double *)(pFVar24 + 0x18);
    dVar1 = (dVar1 + (pTVar21->BoxExtent).field0_0x0._s_0.X) * *(double *)(pFVar24 + 8);
    dVar12 = (dVar2 + (pTVar21->BoxExtent).field0_0x0._s_0.Z) * *(double *)(pFVar24 + 0x18);
    local_128._8_8_ = dVar1;
    local_128._0_8_ = local_1b0;
    local_1b8 = (dVar3 - (pTVar21->BoxExtent).field0_0x0._s_0.Y) * *(double *)(pFVar24 + 0x10);
    dVar2 = (dVar3 + (pTVar21->BoxExtent).field0_0x0._s_0.Y) * *(double *)(pFVar24 + 0x10);
    local_138._8_8_ = local_1b8;
    local_138._0_8_ = local_1c0;
    local_118._8_8_ = dVar12;
    local_118._0_8_ = dVar2;
    if (FVar5 == (FScriptContainerElement)0x0) {
      dVar2 = dVar2 + *(double *)(pFVar24 + 0x40);
      dVar32 = *(double *)(pFVar24 + 0x40) + local_1b8;
      dVar3 = local_1c0 + *(double *)(pFVar24 + 0x38);
      dVar1 = dVar1 + *(double *)(pFVar24 + 0x38);
      dVar12 = dVar12 + *(double *)(pFVar24 + 0x48);
      local_100[0].SphereRadius._0_1_ = 1;
      dVar31 = *(double *)(pFVar24 + 0x48) + local_1b0;
      local_138._8_4_ = SUB84(dVar32,0);
      local_138._0_8_ = dVar3;
      local_138._12_4_ = (int)((ulonglong)dVar32 >> 0x20);
      local_118._8_4_ = SUB84(dVar12,0);
      local_118._0_8_ = dVar2;
      local_118._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
      local_108 = CONCAT71(local_100[0].SphereRadius._1_7_,1);
      local_128._8_4_ = SUB84(dVar1,0);
      local_128._0_8_ = dVar31;
      local_128._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
    }
    else {
      dVar31 = local_1b0;
      dVar3 = local_1c0;
      dVar32 = local_1b8;
      if (FVar5 == (FScriptContainerElement)0x1) {
        uVar27 = (uint)*(undefined8 *)(pFVar24 + 0x38) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar28 = (uint)((ulonglong)*(undefined8 *)(pFVar24 + 0x38) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar29 = (uint)*(undefined8 *)(pFVar24 + 0x40) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar30 = (uint)((ulonglong)*(undefined8 *)(pFVar24 + 0x40) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        pFVar23 = &local_1a0;
        if (cVar19 == '\0') {
          pFVar23 = &local_188;
        }
        FVar4 = *pFVar23;
        if ((double)CONCAT44(uVar28,uVar27) <= (double)FVar4) {
          uVar27 = FVar4._0_4_;
          uVar28 = FVar4._4_4_;
        }
        FVar4 = pFVar23[1];
        if ((double)CONCAT44(uVar30,uVar29) <= (double)FVar4) {
          uVar29 = FVar4._0_4_;
          uVar30 = FVar4._4_4_;
        }
        FVar7._4_4_ = uVar28;
        FVar7._0_4_ = uVar27;
        *pFVar23 = FVar7;
        uVar27 = (uint)*(undefined8 *)(pFVar24 + 0x48) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar28 = (uint)((ulonglong)*(undefined8 *)(pFVar24 + 0x48) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        FVar9._4_4_ = uVar30;
        FVar9._0_4_ = uVar29;
        pFVar23[1] = FVar9;
        FVar4 = pFVar23[2];
        if ((double)CONCAT44(uVar28,uVar27) <= (double)FVar4) {
          uVar27 = FVar4._0_4_;
          uVar28 = FVar4._4_4_;
        }
        FVar8._4_4_ = uVar28;
        FVar8._0_4_ = uVar27;
        pFVar23[2] = FVar8;
        local_1a8 = local_190;
      }
      else if (FVar5 == (FScriptContainerElement)0x2) {
        uVar27 = (uint)*(undefined8 *)(pFVar24 + 0x38) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar28 = (uint)((ulonglong)*(undefined8 *)(pFVar24 + 0x38) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((double)CONCAT44(uVar28,uVar27) <= (double)local_188) {
          uVar27 = local_188._0_4_;
          uVar28 = local_188._4_4_;
        }
        uVar29 = (uint)*(undefined8 *)(pFVar24 + 0x40) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar30 = (uint)((ulonglong)*(undefined8 *)(pFVar24 + 0x40) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((double)CONCAT44(uVar30,uVar29) <= (double)FStack_180) {
          uVar29 = FStack_180._0_4_;
          uVar30 = FStack_180._4_4_;
        }
        local_188._4_4_ = uVar28;
        local_188._0_4_ = uVar27;
        uVar27 = (uint)*(undefined8 *)(pFVar24 + 0x48) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar28 = (uint)((ulonglong)*(undefined8 *)(pFVar24 + 0x48) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        FStack_180._4_4_ = uVar30;
        FStack_180._0_4_ = uVar29;
        if ((double)CONCAT44(uVar28,uVar27) <= (double)local_178) {
          uVar27 = local_178._0_4_;
          uVar28 = local_178._4_4_;
        }
        local_178._4_4_ = uVar28;
        local_178._0_4_ = uVar27;
      }
      else if (FVar5 == (FScriptContainerElement)0x3) {
        uVar27 = (uint)*(undefined8 *)(pFVar24 + 0x38) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar28 = (uint)((ulonglong)*(undefined8 *)(pFVar24 + 0x38) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((double)CONCAT44(uVar28,uVar27) <= (double)local_1a0) {
          uVar27 = local_1a0._0_4_;
          uVar28 = local_1a0._4_4_;
        }
        uVar29 = (uint)*(undefined8 *)(pFVar24 + 0x40) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar30 = (uint)((ulonglong)*(undefined8 *)(pFVar24 + 0x40) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        if ((double)CONCAT44(uVar30,uVar29) <= (double)FStack_198) {
          uVar29 = FStack_198._0_4_;
          uVar30 = FStack_198._4_4_;
        }
        local_1a0._4_4_ = uVar28;
        local_1a0._0_4_ = uVar27;
        uVar27 = (uint)*(undefined8 *)(pFVar24 + 0x48) &
                 (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        uVar28 = (uint)((ulonglong)*(undefined8 *)(pFVar24 + 0x48) >> 0x20) &
                 __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        FStack_198._4_4_ = uVar30;
        FStack_198._0_4_ = uVar29;
        if ((double)CONCAT44(uVar28,uVar27) <= (double)local_1a8) {
          uVar27 = local_1a8._0_4_;
          uVar28 = local_1a8._4_4_;
        }
        local_1a8._4_4_ = uVar28;
        local_1a8._0_4_ = uVar27;
        local_190._4_4_ = uVar28;
        local_190._0_4_ = uVar27;
      }
    }
    uVar27 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
    uVar28 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
    if (cVar25 == '\0') {
      dVar13 = local_138._0_8_;
      uVar35 = local_138._8_4_;
      uVar36 = local_138._12_4_;
      uVar33 = local_128._0_4_;
      uVar34 = local_128._4_4_;
      dVar14 = local_128._8_8_;
      local_140 = local_108;
      uVar18 = local_140;
      local_140._0_1_ = (char)local_108;
      cVar25 = (char)local_140;
      dVar15 = (double)local_118._0_8_;
      uVar16 = local_118._8_8_;
      local_140 = uVar18;
      goto LAB_1492deb4f;
    }
    if (dVar3 <= dVar13) {
      dVar13 = dVar3;
    }
    pFVar24 = pFVar24 + 0x80;
    if (dVar32 <= (double)CONCAT44(uVar36,uVar35)) {
      uVar35 = SUB84(dVar32,0);
      uVar36 = (uint)((ulonglong)dVar32 >> 0x20);
    }
    if (dVar31 <= (double)CONCAT44(uVar34,uVar33)) {
      uVar33 = SUB84(dVar31,0);
      uVar34 = (uint)((ulonglong)dVar31 >> 0x20);
    }
    if (dVar14 <= dVar1) {
      dVar14 = dVar1;
    }
    if (dVar15 <= dVar2) {
      dVar15 = dVar2;
    }
    if ((double)uVar16 <= dVar12) {
      uVar16 = dVar12;
    }
  } while( true );
}

// CreateEmitterRenderer @ 1492e0110

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
UNiagaraMeshRendererProperties::CreateEmitterRenderer
          (UNiagaraMeshRendererProperties *this,Type param_1,FNiagaraEmitterInstance *param_2,
          FNiagaraSystemInstanceController *param_3)

{
  int iVar1;
  bool bVar2;
  FNiagaraTypeRegistry *pFVar3;
  FNiagaraTypeDefinition *pFVar4;
  FNiagaraRendererMeshes *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  if ((this->MeshesBinding).ResolvedParameter.Name != (FName)0x0) {
    pFVar3 = FNiagaraTypeRegistry::Get();
    pFVar4 = FNiagaraTypeRegistry::GetRegisteredType
                       (pFVar3,(this->MeshesBinding).ResolvedParameter.TypeDefHandle.
                               RegisteredTypeIndex);
    if ((pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      bVar2 = true;
      goto LAB_1492e015e;
    }
  }
  iVar1 = (this->Meshes).ArrayNum;
  bVar2 = false;
  pFVar6 = (this->Meshes).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar1 * 0x80;
  while( true ) {
    if ((this->Meshes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraMeshRendererMeshProperties,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar6 == pFVar7) goto LAB_1492e020f;
    if (*(longlong *)pFVar6 != 0) break;
    if (*(longlong *)(pFVar6 + 0x58) != 0) {
      pFVar3 = FNiagaraTypeRegistry::Get();
      pFVar4 = FNiagaraTypeRegistry::GetRegisteredType(pFVar3,*(int *)(pFVar6 + 0x60));
      if ((pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) break;
    }
    pFVar6 = pFVar6 + 0x80;
  }
LAB_1492e015e:
  pFVar5 = ::operator_new(0x2d0);
  if (pFVar5 == (FNiagaraRendererMeshes *)0x0) {
    pFVar5 = (FNiagaraRendererMeshes *)0x0;
  }
  else {
    pFVar5 = FNiagaraRendererMeshes::FNiagaraRendererMeshes
                       (pFVar5,param_1,(UNiagaraRendererProperties *)this,param_2);
  }
  (**(code **)(*(longlong *)pFVar5 + 8))(pFVar5,this,param_2,param_3);
  if ((!bVar2) && ((pFVar5->Meshes).ArrayNum < 1)) {
    (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
LAB_1492e020f:
    pFVar5 = (FNiagaraRendererMeshes *)0x0;
  }
  return (FNiagaraRenderer *)pFVar5;
}

// ForEachMesh @ 1492ebc40

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
UNiagaraMeshRendererProperties::ForEachMesh
          (UNiagaraMeshRendererProperties *this,FNiagaraSystemInstance *param_1,
          TFunction<void___cdecl(int)> *param_2,
          TFunction<void___cdecl(FNiagaraMeshRendererMeshProperties_const_&)> *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 local_58 [8];
  undefined4 local_50 [2];
  TFunction<void___cdecl(int)> *local_48;
  
  local_50[0] = (undefined4)this->_padding_;
  local_48 = param_2;
  UE::Core::Private::Function::CheckCallable(*(void **)param_2);
  pcVar2 = *(code **)param_2;
  plVar4 = (longlong *)&param_2->field_0x10;
  if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
    plVar4 = *(longlong **)&param_2->field_0x28;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar2)(uVar3,local_50);
  iVar1 = (int)this->_padding_;
  lVar5 = this->_padding_;
  lVar6 = (longlong)iVar1 * 0x80 + lVar5;
  while( true ) {
    if ((int)this->_padding_ != iVar1) {
      `TCheckedPointerIterator<FNiagaraMeshRendererMeshProperties_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_58);
    }
    if (lVar5 == lVar6) break;
    UE::Core::Private::Function::CheckCallable(*(void **)param_3);
    pcVar2 = *(code **)param_3;
    plVar4 = *(longlong **)&param_3->field_0x28;
    if (*(longlong **)&param_3->field_0x28 == (longlong *)0x0) {
      plVar4 = (longlong *)&param_3->field_0x10;
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    (*pcVar2)(uVar3,lVar5);
    lVar5 = lVar5 + 0x80;
  }
  if (*(longlong *)local_48 != 0) {
    plVar4 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&local_48->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&local_48->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if (*(longlong *)param_3 != 0) {
    plVar4 = (longlong *)&param_3->field_0x10;
    if (*(longlong **)&param_3->field_0x28 != (longlong *)0x0) {
      plVar4 = *(longlong **)&param_3->field_0x28;
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  return;
}

// GetCurrentSourceMode @ 1492ee1f0

ENiagaraRendererSourceDataMode __thiscall
UNiagaraMeshRendererProperties::GetCurrentSourceMode(UNiagaraMeshRendererProperties *this)

{
  return this->SourceMode;
}

// GetMeshArrayInterface @ 1492f0550

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

INiagaraRenderableMeshArrayInterface * __thiscall
UNiagaraMeshRendererProperties::GetMeshArrayInterface
          (UNiagaraMeshRendererProperties *this,FNiagaraEmitterInstance *param_1)

{
  UNiagaraDataInterface *this_00;
  UClass *pUVar1;
  INiagaraRenderableMeshArrayInterface *pIVar2;
  FNiagaraVariable local_28;
  
  if (param_1 != (FNiagaraEmitterInstance *)0x0) {
    local_28._padding_ = *(longlong *)&(this->MeshesBinding).ResolvedParameter.Name;
    local_28._padding_._0_4_ =
         (this->MeshesBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex;
    local_28.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.VarData.ArrayNum = 0;
    local_28.VarData.ArrayMax = 0;
    this_00 = FNiagaraParameterStore::GetDataInterface(&param_1->RendererBindings,&local_28);
    if (this_00 == (UNiagaraDataInterface *)0x0) {
      pIVar2 = (INiagaraRenderableMeshArrayInterface *)0x0;
    }
    else {
      pUVar1 = Z_Construct_UClass_UNiagaraRenderableMeshArrayInterface_NoRegister();
      pIVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
    }
    if (local_28.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.VarData.AllocatorInstance.Data);
    }
    if (pIVar2 != (INiagaraRenderableMeshArrayInterface *)0x0) {
      return pIVar2;
    }
  }
  if (this != (UNiagaraMeshRendererProperties *)0x0) {
    return (INiagaraRenderableMeshArrayInterface *)&this->_padding_;
  }
  return (INiagaraRenderableMeshArrayInterface *)0x0;
}

// GetPrivateStaticClass @ 1492f1190

UClass * __cdecl UNiagaraMeshRendererProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraMeshRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraMeshRendererProperties,0x488,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraMeshRendererProperties>,
               InternalVTableHelperCtorCaller<UNiagaraMeshRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraMeshRendererProperties.InnerSingleton;
}

// GetResourceSizeEx @ 1492f19f0

void __thiscall
UNiagaraMeshRendererProperties::GetResourceSizeEx
          (UNiagaraMeshRendererProperties *this,FResourceSizeEx *param_1)

{
  UObject::GetResourceSizeEx((UObject *)this,param_1);
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,((longlong)(this->RendererLayoutWithCustomSorting).VFVariables_RT.ArrayMax +
                     (longlong)(this->RendererLayoutWithCustomSorting).VFVariables_GT.ArrayMax) * 8)
  ;
  FResourceSizeEx::AddDedicatedSystemMemoryBytes
            (param_1,((longlong)(this->RendererLayoutWithoutCustomSorting).VFVariables_RT.ArrayMax +
                     (longlong)(this->RendererLayoutWithoutCustomSorting).VFVariables_GT.ArrayMax) *
                     8);
  return;
}

// GetStreamingMeshInfo @ 1492f1d30

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
UNiagaraMeshRendererProperties::GetStreamingMeshInfo
          (UNiagaraMeshRendererProperties *this,TBoxSphereBounds<double,double> *param_1,
          FNiagaraEmitterInstance *param_2,
          TArray<FStreamingRenderAssetPrimitiveInfo,TSizedDefaultAllocator<32>_> *param_3)

{
  double dVar1;
  int iVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  UStaticMesh *this_00;
  EStreamableRenderAssetType EVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  FNiagaraMeshRendererMeshProperties *pFVar18;
  FNiagaraMeshRendererMeshProperties *pFVar19;
  FScriptContainerElement *pFVar20;
  undefined1 local_res8 [8];
  TBoxSphereBounds<double,double> *local_res10;
  UStaticMesh *local_138;
  INiagaraRenderableMeshInterface *local_130;
  TVector<double>_u_0 local_128;
  double local_110;
  double local_108;
  double local_100;
  double local_f8;
  double local_c0;
  
  dVar13 = __real_4000000000000000;
  iVar2 = (this->Meshes).ArrayNum;
  pFVar19 = (FNiagaraMeshRendererMeshProperties *)(this->Meshes).AllocatorInstance.Data;
  pFVar18 = pFVar19 + iVar2;
  local_res10 = param_1;
  do {
    if ((this->Meshes).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FNiagaraMeshRendererMeshProperties_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar19 == pFVar18) {
      return;
    }
    local_130 = (INiagaraRenderableMeshInterface *)0x0;
    local_138 = (UStaticMesh *)0x0;
    NiagaraMeshRendererPropertiesInternal::ResolveRenderableMeshInternal
              (pFVar19,param_2,&local_130,&local_138);
    this_00 = local_138;
    if ((((local_138 != (UStaticMesh *)0x0) && ((local_138->_padding_ & 1) != 0)) &&
        (*(byte *)((longlong)&local_138->_padding_ + 1) <
         *(byte *)((longlong)&local_138->_padding_ + 3))) &&
       (EVar14 = UStaticMesh::GetRenderAssetType(local_138), EVar14 == StaticMesh)) {
      UStaticMesh::GetBounds(this_00,(TBoxSphereBounds<double,double> *)&local_128._s_0);
      dVar1 = (double)pFVar19->_padding_;
      local_c0 = dVar1;
      if (dVar1 <= (double)pFVar19->_padding_) {
        local_c0 = (double)pFVar19->_padding_;
      }
      dVar8 = local_128._s_0.X + (param_1->Origin).field0_0x0._s_0.X;
      dVar9 = local_128._s_0.Y + (param_1->Origin).field0_0x0._s_0.Y;
      if (local_c0 <= (double)pFVar19->_padding_) {
        local_c0 = (double)pFVar19->_padding_;
      }
      dVar10 = local_128._s_0.Z + (param_1->Origin).field0_0x0._s_0.Z;
      uVar16 = param_3->ArrayNum;
      dVar1 = dVar1 * local_110;
      dVar11 = (double)pFVar19->_padding_ * local_108;
      dVar12 = (double)pFVar19->_padding_ * local_100;
      local_c0 = local_c0 * local_f8;
      dVar6 = local_f8 * dVar13;
      if (uVar16 == param_3->ArrayMax) {
        uVar16 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x850,&param_3->AllocatorInstance,&param_3->ArrayMax);
      }
      param_3->ArrayNum = uVar16 + 1;
      uVar17 = 0;
      if ((int)uVar16 < (int)(uVar16 + 1)) {
        uVar17 = ~uVar16 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar20 = (param_3->AllocatorInstance).Data + (longlong)(int)uVar16 * 0x50;
      param_1 = local_res10;
      if (pFVar20 != (FScriptContainerElement *)0x0) {
        *(UStaticMesh **)pFVar20 = this_00;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this_00 != (UStaticMesh *)0x0))
        {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        *(uint *)(pFVar20 + 0x48) = *(uint *)(pFVar20 + 0x48) & 0xfffffffe;
        *(uint *)(pFVar20 + 0x48) = *(uint *)(pFVar20 + 0x48) | 2;
        auVar4._8_4_ = SUB84(dVar9,0);
        auVar4._0_8_ = dVar8;
        auVar4._12_4_ = (int)((ulonglong)dVar9 >> 0x20);
        *(undefined1 (*) [16])(pFVar20 + 8) = auVar4;
        *(undefined4 *)(pFVar20 + 0x44) = 0;
        auVar7._8_4_ = SUB84(dVar1,0);
        auVar7._0_8_ = dVar10;
        auVar7._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
        *(undefined1 (*) [16])(pFVar20 + 0x18) = auVar7;
        auVar5._8_4_ = SUB84(dVar12,0);
        auVar5._0_8_ = dVar11;
        auVar5._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
        *(undefined1 (*) [16])(pFVar20 + 0x28) = auVar5;
        *(double *)(pFVar20 + 0x38) = local_c0;
        *(float *)(pFVar20 + 0x40) = (float)dVar6;
        param_1 = local_res10;
      }
    }
    pFVar19 = pFVar19 + 1;
  } while( true );
}

// GetUsedMaterials @ 1492f2760

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
UNiagaraMeshRendererProperties::GetUsedMaterials
          (UNiagaraMeshRendererProperties *this,FNiagaraEmitterInstance *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  UNiagaraDataInterface *this_00;
  UClass *pUVar1;
  FNiagaraSystemInstance *this_01;
  FNiagaraSystemInstance *pFVar2;
  FNiagaraSystemInstance *local_res8;
  FNiagaraEmitterInstance *local_res10;
  void *local_78;
  undefined8 local_70;
  FNiagaraVariable local_68;
  code *local_48 [5];
  undefined8 *local_20;
  
  pFVar2 = (FNiagaraSystemInstance *)0x0;
  local_res8 = pFVar2;
  if (param_1 != (FNiagaraEmitterInstance *)0x0) {
    local_res8 = param_1->ParentSystemInstance;
  }
  local_78 = (void *)0x0;
  local_70 = 0;
  local_res10 = param_1;
  if (param_1 != (FNiagaraEmitterInstance *)0x0) {
    local_68._padding_ = *(longlong *)&(this->MeshesBinding).ResolvedParameter.Name;
    local_68._padding_._0_4_ =
         (this->MeshesBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex;
    local_68.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.VarData.ArrayNum = 0;
    local_68.VarData.ArrayMax = 0;
    this_00 = FNiagaraParameterStore::GetDataInterface(&param_1->RendererBindings,&local_68);
    this_01 = pFVar2;
    if (this_00 != (UNiagaraDataInterface *)0x0) {
      pUVar1 = Z_Construct_UClass_UNiagaraRenderableMeshArrayInterface_NoRegister();
      this_01 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this_00,pUVar1);
    }
    if (local_68.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.VarData.AllocatorInstance.Data);
    }
    if (this_01 != (FNiagaraSystemInstance *)0x0) goto LAB_1492f2814;
  }
  this_01 = (FNiagaraSystemInstance *)&this->_padding_;
  if (this == (UNiagaraMeshRendererProperties *)0x0) {
    this_01 = pFVar2;
  }
LAB_1492f2814:
  local_48[0] = (code *)0x0;
  local_20 = FMemory::Malloc(0x30,8);
  *local_20 = &UE::Core::Private::Function::
               TFunction_OwnedObject<`UNiagaraMeshRendererProperties::GetUsedMaterials'::`2'::<lambda_1>,0,1>
               ::_vftable_;
  local_20[1] = &local_78;
  local_20[2] = &local_res10;
  local_20[3] = &local_res8;
  local_20[4] = this;
  local_20[5] = param_2;
  if (local_20 + 1 != (longlong *)0x0) {
    local_48[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UNiagaraMeshRendererProperties::GetUsedMaterials'::__l2::<lambda_1>,void,FNiagaraMeshRendererMeshProperties_const_&>
                  ::Call;
  }
  INiagaraRenderableMeshArrayInterface::ForEachMesh
            ((INiagaraRenderableMeshArrayInterface *)this_01,local_res8,
             (TFunction<void___cdecl(FNiagaraMeshRendererMeshProperties_const_&)> *)local_48);
  if (local_78 != (void *)0x0) {
    FMemory::Free(local_78);
  }
  return;
}

// GetVertexFactoryType @ 1492f3040

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
UNiagaraMeshRendererProperties::GetVertexFactoryType(UNiagaraMeshRendererProperties *this)

{
  return &FNiagaraMeshVertexFactory::StaticType;
}

// InitBindings @ 1492f75e0

void __thiscall UNiagaraMeshRendererProperties::InitBindings(UNiagaraMeshRendererProperties *this)

{
  int *piVar1;
  FName FVar2;
  undefined8 uVar3;
  int iVar4;
  FNiagaraTypeRegistry *this_00;
  FNiagaraTypeDefinition *pFVar5;
  FNiagaraVariableAttributeBinding *pFVar6;
  FNiagaraVariableAttributeBinding local_28;
  
  if ((this->PositionBinding).DataSetName != (FName)0x0) {
    this_00 = FNiagaraTypeRegistry::Get();
    pFVar5 = FNiagaraTypeRegistry::GetRegisteredType
                       (this_00,(this->PositionBinding).ParamMapVariable.TypeDefHandle.
                                RegisteredTypeIndex);
    if ((pFVar5->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) goto LAB_1492f78be;
  }
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_Position);
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->PositionBinding).RootName = pFVar6->RootName;
  (this->PositionBinding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->PositionBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->PositionBinding).DataSetName.Number = uVar3;
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_Color);
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->ColorBinding).RootName = pFVar6->RootName;
  (this->ColorBinding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->ColorBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->ColorBinding).DataSetName.Number = uVar3;
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_Velocity);
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->VelocityBinding).RootName = pFVar6->RootName;
  (this->VelocityBinding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->VelocityBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->VelocityBinding).DataSetName.Number = uVar3;
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_SubImageIndex);
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->SubImageIndexBinding).RootName = pFVar6->RootName;
  (this->SubImageIndexBinding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->SubImageIndexBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->SubImageIndexBinding).DataSetName.Number = uVar3;
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,
                      (FNiagaraVariableBase *)&INiagaraModule::Particles_DynamicMaterialParameter);
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->DynamicMaterialBinding).RootName = pFVar6->RootName;
  (this->DynamicMaterialBinding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->DynamicMaterialBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->DynamicMaterialBinding).DataSetName.Number = uVar3;
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,
                      (FNiagaraVariableBase *)&INiagaraModule::Particles_DynamicMaterialParameter1);
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->DynamicMaterial1Binding).RootName = pFVar6->RootName;
  (this->DynamicMaterial1Binding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->DynamicMaterial1Binding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->DynamicMaterial1Binding).DataSetName.Number = uVar3;
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,
                      (FNiagaraVariableBase *)&INiagaraModule::Particles_DynamicMaterialParameter2);
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->DynamicMaterial2Binding).RootName = pFVar6->RootName;
  (this->DynamicMaterial2Binding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->DynamicMaterial2Binding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->DynamicMaterial2Binding).DataSetName.Number = uVar3;
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,
                      (FNiagaraVariableBase *)&INiagaraModule::Particles_DynamicMaterialParameter3);
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->DynamicMaterial3Binding).RootName = pFVar6->RootName;
  (this->DynamicMaterial3Binding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->DynamicMaterial3Binding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->DynamicMaterial3Binding).DataSetName.Number = uVar3;
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_MeshOrientation);
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->MeshOrientationBinding).RootName = pFVar6->RootName;
  (this->MeshOrientationBinding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->MeshOrientationBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->MeshOrientationBinding).DataSetName.Number = uVar3;
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_Scale);
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->ScaleBinding).RootName = pFVar6->RootName;
  (this->ScaleBinding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->ScaleBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->ScaleBinding).DataSetName.Number = uVar3;
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_MaterialRandom);
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->MaterialRandomBinding).RootName = pFVar6->RootName;
  (this->MaterialRandomBinding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->MaterialRandomBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->MaterialRandomBinding).DataSetName.Number = uVar3;
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_NormalizedAge);
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->NormalizedAgeBinding).RootName = pFVar6->RootName;
  (this->NormalizedAgeBinding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->NormalizedAgeBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->NormalizedAgeBinding).DataSetName.Number = uVar3;
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_CameraOffset);
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->CameraOffsetBinding).RootName = pFVar6->RootName;
  (this->CameraOffsetBinding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->CameraOffsetBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->CameraOffsetBinding).DataSetName.Number = uVar3;
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_VisibilityTag);
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->RendererVisibilityTagBinding).RootName = pFVar6->RootName;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->RendererVisibilityTagBinding).DataSetName.Number = uVar3;
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_MeshIndex);
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->MeshIndexBinding).RootName = pFVar6->RootName;
  (this->MeshIndexBinding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->MeshIndexBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->MeshIndexBinding).DataSetName.Number = uVar3;
  pFVar6 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_Age);
  piVar1 = &(this->Meshes).ArrayMax;
  FVar2 = (pFVar6->ParamMapVariable).Name;
  (this->CustomSortingBinding).RootName = pFVar6->RootName;
  (this->CustomSortingBinding).ParamMapVariable.Name = FVar2;
  uVar3 = *(undefined8 *)&(pFVar6->DataSetName).Number;
  *(undefined8 *)&(this->CustomSortingBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar6->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->CustomSortingBinding).DataSetName.Number = uVar3;
  iVar4 = (this->Meshes).ArrayNum;
  if (iVar4 == *piVar1) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x880,&(this->Meshes).AllocatorInstance,piVar1);
  }
  (this->Meshes).ArrayNum = iVar4 + 1;
  DefaultConstructItems<FNiagaraMeshRendererMeshProperties,int>
            ((this->Meshes).AllocatorInstance.Data + (longlong)iVar4 * 0x80,1);
LAB_1492f78be:
  local_28.RootName.ComparisonIndex.Value = 0;
  local_28.RootName.Number = 0;
  local_28.ParamMapVariable.Name.ComparisonIndex.Value = 0;
  local_28.ParamMapVariable.Name.Number = 0;
  local_28.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = 0;
  local_28.DataSetName.ComparisonIndex.Value = 0;
  SetPreviousBindings(this,(FVersionedNiagaraEmitterBase *)&local_28,this->SourceMode);
  return;
}

// InitCDOPropertiesAfterModuleStartup @ 1492f7ef0

void __cdecl UNiagaraMeshRendererProperties::InitCDOPropertiesAfterModuleStartup(void)

{
  FWeakObjectPtr *pFVar1;
  int iVar2;
  UClass *pUVar3;
  UObject *pUVar4;
  UNiagaraMeshRendererProperties *pUVar5;
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
  pUVar5 = (UNiagaraMeshRendererProperties *)(pUVar3->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar5 != (UNiagaraMeshRendererProperties *)0x0) {
    pUVar3 = StaticClass();
    iVar2 = (int)pUVar3->_padding_;
    if ((iVar2 <= *(int *)(pUVar5->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar2 * 8)
        == &pUVar3->_padding_)) {
      InitBindings(pUVar5);
      iVar2 = MeshRendererPropertiesToDeferredInit.ArrayNum;
      uVar7 = (ulonglong)MeshRendererPropertiesToDeferredInit.ArrayNum;
      pFVar1 = (FWeakObjectPtr *)
               (MeshRendererPropertiesToDeferredInit.AllocatorInstance.Data + uVar7 * 8);
      this = MeshRendererPropertiesToDeferredInit.AllocatorInstance;
      while( true ) {
        if ((int)uVar7 != iVar2) {
          `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraMeshRendererProperties,FWeakObjectPtr>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res8);
        }
        if ((FWeakObjectPtr *)this.Data == pFVar1) break;
        pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
        if (pUVar4 != (UObject *)0x0) {
          pUVar5 = (UNiagaraMeshRendererProperties *)
                   FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
          InitBindings(pUVar5);
        }
        uVar7 = (ulonglong)(uint)MeshRendererPropertiesToDeferredInit.ArrayNum;
        this.Data = this.Data + 8;
      }
      return;
    }
    pFVar6 = GetTypeName<UNiagaraMeshRendererProperties>(&local_28);
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
  pFVar6 = GetTypeName<UNiagaraMeshRendererProperties>(&local_28);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar8);
}

// IsSimTargetSupported @ 1492f8b20

bool __thiscall
UNiagaraMeshRendererProperties::IsSimTargetSupported
          (UNiagaraMeshRendererProperties *this,ENiagaraSimTarget param_1)

{
  return true;
}

// NeedsMIDsForMaterials @ 1492f9330

bool __thiscall
UNiagaraMeshRendererProperties::NeedsMIDsForMaterials(UNiagaraMeshRendererProperties *this)

{
  if (((((this->MaterialParameters).AttributeBindings.ArrayNum < 1) &&
       ((this->MaterialParameters).ScalarParameters.ArrayNum < 1)) &&
      ((this->MaterialParameters).VectorParameters.ArrayNum < 1)) &&
     ((this->MaterialParameters).TextureParameters.ArrayNum < 1)) {
    return false;
  }
  return true;
}

// PopulateRequiredBindings @ 1492fa660

bool __thiscall
UNiagaraMeshRendererProperties::PopulateRequiredBindings
          (UNiagaraMeshRendererProperties *this,FNiagaraParameterStore *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  FNiagaraTypeRegistry *pFVar6;
  FNiagaraTypeDefinition *pFVar7;
  FNiagaraVariableBase *pFVar8;
  longlong *plVar9;
  FName *pFVar10;
  FNiagaraMaterialAttributeBinding *this_00;
  FScriptContainerElement *pFVar11;
  FNiagaraMaterialAttributeBinding *pFVar12;
  FScriptContainerElement *pFVar13;
  undefined1 local_res8 [8];
  FName local_48;
  uint local_40;
  void *local_38;
  undefined8 local_30;
  
  bVar5 = UNiagaraRendererProperties::PopulateRequiredBindings
                    ((UNiagaraRendererProperties *)this,param_1);
  if ((this->MeshesBinding).ResolvedParameter.Name != (FName)0x0) {
    pFVar6 = FNiagaraTypeRegistry::Get();
    pFVar7 = FNiagaraTypeRegistry::GetRegisteredType
                       (pFVar6,(this->MeshesBinding).ResolvedParameter.TypeDefHandle.
                               RegisteredTypeIndex);
    if ((pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
      local_40 = (this->MeshesBinding).ResolvedParameter.TypeDefHandle.RegisteredTypeIndex;
      local_48 = (this->MeshesBinding).ResolvedParameter.Name;
      local_38 = (void *)0x0;
      local_30 = 0;
      (**(code **)(param_1->_padding_ + 0x10))(param_1,&local_48,0,1,0);
      if (local_38 != (void *)0x0) {
        FMemory::Free(local_38);
      }
      bVar5 = true;
    }
  }
  plVar9 = (longlong *)this->_padding_;
  iVar2 = (int)this->_padding_;
  plVar1 = plVar9 + iVar2;
  while( true ) {
    if ((int)this->_padding_ != iVar2) {
      `TCheckedPointerIterator<FNiagaraVariableAttributeBinding_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar9 == plVar1) break;
    lVar3 = *plVar9;
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
    plVar9 = plVar9 + 1;
  }
  iVar2 = (this->MaterialParameters).AttributeBindings.ArrayNum;
  this_00 = (FNiagaraMaterialAttributeBinding *)
            (this->MaterialParameters).AttributeBindings.AllocatorInstance.Data;
  pFVar12 = this_00 + iVar2;
  while( true ) {
    if ((this->MaterialParameters).AttributeBindings.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraMaterialAttributeBinding,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar12) break;
    pcVar4 = *(code **)(param_1->_padding_ + 0x10);
    pFVar8 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_00);
    local_48 = pFVar8->Name;
    local_40 = (pFVar8->TypeDefHandle).RegisteredTypeIndex;
    local_38 = (void *)0x0;
    local_30 = 0;
    (*pcVar4)(param_1,&local_48,0,1,0);
    if (local_38 != (void *)0x0) {
      FMemory::Free(local_38);
    }
    bVar5 = true;
    this_00 = this_00 + 1;
  }
  pFVar11 = (this->Meshes).AllocatorInstance.Data;
  iVar2 = (this->Meshes).ArrayNum;
  pFVar13 = pFVar11 + (longlong)iVar2 * 0x80;
  pFVar10 = (FName *)(pFVar11 + 0x58);
  while( true ) {
    if ((this->Meshes).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraMeshRendererMeshProperties,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar11 == pFVar13) break;
    if (*pFVar10 != (FName)0x0) {
      pFVar6 = FNiagaraTypeRegistry::Get();
      pFVar7 = FNiagaraTypeRegistry::GetRegisteredType(pFVar6,pFVar10[1].ComparisonIndex.Value);
      if ((pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
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
    pFVar11 = pFVar11 + 0x80;
    pFVar10 = pFVar10 + 0x10;
  }
  return bVar5;
}

// PostInitProperties @ 1492fabe0

void __thiscall
UNiagaraMeshRendererProperties::PostInitProperties(UNiagaraMeshRendererProperties *this)

{
  code *pcVar1;
  bool bVar2;
  FModuleManager *this_00;
  FName *pFVar3;
  longlong lVar4;
  UNiagaraMeshRendererProperties *local_res8;
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
  if (((MeshRendererPropertiesToDeferredInit.AllocatorInstance.Data <= local_18) &&
      (local_18 <
       (FWeakObjectPtr *)
       (MeshRendererPropertiesToDeferredInit.AllocatorInstance.Data +
       (longlong)MeshRendererPropertiesToDeferredInit.ArrayMax * 8))) &&
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
  if (MeshRendererPropertiesToDeferredInit.ArrayNum == MeshRendererPropertiesToDeferredInit.ArrayMax
     ) {
    MeshRendererPropertiesToDeferredInit.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x408,&MeshRendererPropertiesToDeferredInit.AllocatorInstance,
                    &MeshRendererPropertiesToDeferredInit.ArrayMax);
  }
  lVar4 = (longlong)MeshRendererPropertiesToDeferredInit.ArrayNum;
  MeshRendererPropertiesToDeferredInit.ArrayNum = MeshRendererPropertiesToDeferredInit.ArrayNum + 1;
  *(FWeakObjectPtr *)(MeshRendererPropertiesToDeferredInit.AllocatorInstance.Data + lVar4 * 8) =
       local_18[0];
  return;
}

// PostLoad @ 1492faf60

void __thiscall UNiagaraMeshRendererProperties::PostLoad(UNiagaraMeshRendererProperties *this)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  FVersionedNiagaraEmitterBase local_28;
  
  UNiagaraRendererProperties::PostLoad((UNiagaraRendererProperties *)this);
  iVar1 = (this->Meshes).ArrayNum;
  pFVar3 = (this->Meshes).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x80;
  while( true ) {
    if ((this->Meshes).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraMeshRendererMeshProperties,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*(UObject **)pFVar3 != (UObject *)0x0) {
      UObject::ConditionalPostLoad(*(UObject **)pFVar3);
    }
    pFVar3 = pFVar3 + 0x80;
  }
  (**(code **)(this->_padding_ + 0x350))(this,this->SourceMode);
  local_28.Emitter = (UNiagaraEmitterBase *)0x0;
  local_28.Version.A = 0;
  local_28.Version.B = 0;
  local_28.Version.C = 0;
  local_28.Version.D = 0;
  SetPreviousBindings(this,&local_28,this->SourceMode);
  iVar1 = (this->OverrideMaterials).ArrayNum;
  pFVar2 = (this->OverrideMaterials).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (longlong)iVar1 * 0x28;
  while( true ) {
    if ((this->OverrideMaterials).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraMeshMaterialOverride,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar2 == pFVar3) break;
    if (*(UObject **)pFVar2 != (UObject *)0x0) {
      UObject::ConditionalPostLoad(*(UObject **)pFVar2);
    }
    pFVar2 = pFVar2 + 0x28;
  }
  iVar1 = (this->MICOverrideMaterials).ArrayNum;
  pFVar3 = (this->MICOverrideMaterials).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->MICOverrideMaterials).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraMeshMICOverride,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar3 == pFVar2) break;
    if (*(UObject **)pFVar3 != (UObject *)0x0) {
      UObject::ConditionalPostLoad(*(UObject **)pFVar3);
    }
    if (*(UObject **)(pFVar3 + 8) != (UObject *)0x0) {
      UObject::ConditionalPostLoad(*(UObject **)(pFVar3 + 8));
    }
    pFVar3 = pFVar3 + 0x10;
  }
  FNiagaraRendererMaterialParameters::ConditionalPostLoad(&this->MaterialParameters);
  return;
}

// Serialize @ 1493055f0

void __thiscall
UNiagaraMeshRendererProperties::Serialize(UNiagaraMeshRendererProperties *this,FArchive *param_1)

{
  FName FVar1;
  undefined8 uVar2;
  int iVar3;
  FNiagaraVariableAttributeBinding *pFVar4;
  FNiagaraVariableAttributeBinding local_28;
  
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FNiagaraCustomVersion::GUID);
  iVar3 = FArchiveState::CustomVer((FArchiveState *)param_1,&FNiagaraCustomVersion::GUID);
  if ((param_1->field_0x28 & 1) == 0) goto LAB_14930566d;
  if (iVar3 < 0x34) {
    this->SortMode = ViewDistance;
LAB_14930563b:
    this->bSubImageBlend = 0;
  }
  else if (iVar3 < 0x50) goto LAB_14930563b;
  if (iVar3 < 0x57) {
    pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_NormalizedAge);
    FVar1 = (pFVar4->ParamMapVariable).Name;
    (this->CustomSortingBinding).RootName = pFVar4->RootName;
    (this->CustomSortingBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
    *(undefined8 *)&(this->CustomSortingBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->CustomSortingBinding).DataSetName.Number = uVar2;
  }
LAB_14930566d:
  UObject::Serialize((UObject *)this,param_1);
  return;
}

// Serialize @ 149305690

void __thiscall
UNiagaraMeshRendererProperties::Serialize
          (UNiagaraMeshRendererProperties *this,FStructuredArchiveRecord param_1)

{
  FName FVar1;
  undefined8 uVar2;
  int iVar3;
  FArchiveState *this_00;
  FNiagaraVariableAttributeBinding *pFVar4;
  FSlotBase local_res10 [3];
  FNiagaraVariableAttributeBinding local_28;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  this_00 = (FArchiveState *)
            UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(this_00->_padding_ + 0x230))(this_00,&FNiagaraCustomVersion::GUID);
  iVar3 = FArchiveState::CustomVer(this_00,&FNiagaraCustomVersion::GUID);
  if (this_00->ArIsLoading == 0) goto LAB_149305720;
  if (iVar3 < 0x34) {
    this->SortMode = ViewDistance;
LAB_1493056ee:
    this->bSubImageBlend = 0;
  }
  else if (iVar3 < 0x50) goto LAB_1493056ee;
  if (iVar3 < 0x57) {
    pFVar4 = FNiagaraConstants::GetAttributeDefaultBinding
                       (&local_28,(FNiagaraVariableBase *)&INiagaraModule::Particles_NormalizedAge);
    FVar1 = (pFVar4->ParamMapVariable).Name;
    (this->CustomSortingBinding).RootName = pFVar4->RootName;
    (this->CustomSortingBinding).ParamMapVariable.Name = FVar1;
    uVar2 = *(undefined8 *)&(pFVar4->DataSetName).Number;
    *(undefined8 *)&(this->CustomSortingBinding).ParamMapVariable.TypeDefHandle =
         *(undefined8 *)&(pFVar4->ParamMapVariable).TypeDefHandle;
    *(undefined8 *)&(this->CustomSortingBinding).DataSetName.Number = uVar2;
  }
LAB_149305720:
  UObject::Serialize((UObject *)this,(FArchive *)this_00);
  return;
}

// SetPreviousBindings @ 149306c10

void __thiscall
UNiagaraMeshRendererProperties::SetPreviousBindings
          (UNiagaraMeshRendererProperties *this,FVersionedNiagaraEmitterBase *param_1,
          ENiagaraRendererSourceDataMode param_2)

{
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevPositionBinding,&this->PositionBinding,param_1,param_2);
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevScaleBinding,&this->ScaleBinding,param_1,param_2);
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevMeshOrientationBinding,&this->MeshOrientationBinding,param_1,param_2);
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevCameraOffsetBinding,&this->CameraOffsetBinding,param_1,param_2);
  FNiagaraVariableAttributeBinding::SetAsPreviousValue
            (&this->PrevVelocityBinding,&this->VelocityBinding,param_1,param_2);
  return;
}

// StaticRegisterNativesUNiagaraMeshRendererProperties @ 149309e10

void __cdecl
UNiagaraMeshRendererProperties::StaticRegisterNativesUNiagaraMeshRendererProperties(void)

{
  return;
}

// UpdateMICs @ 14930dcf0

void __thiscall UNiagaraMeshRendererProperties::UpdateMICs(UNiagaraMeshRendererProperties *this)

{
  return;
}

// UpdateSourceModeDerivates @ 14930dd10

void __thiscall
UNiagaraMeshRendererProperties::UpdateSourceModeDerivates
          (UNiagaraMeshRendererProperties *this,ENiagaraRendererSourceDataMode param_1,bool param_2)

{
  int iVar1;
  FNiagaraMaterialAttributeBinding *this_00;
  FNiagaraMaterialAttributeBinding *pFVar2;
  undefined1 local_res20 [8];
  FVersionedNiagaraEmitterBase local_38;
  
  UNiagaraRendererProperties::UpdateSourceModeDerivates
            ((UNiagaraRendererProperties *)this,param_1,param_2);
  UNiagaraRendererProperties::GetOuterEmitterBase((UNiagaraRendererProperties *)this,&local_38);
  if (local_38.Emitter != (UNiagaraEmitterBase *)0x0) {
    this_00 = (FNiagaraMaterialAttributeBinding *)
              (this->MaterialParameters).AttributeBindings.AllocatorInstance.Data;
    iVar1 = (this->MaterialParameters).AttributeBindings.ArrayNum;
    pFVar2 = this_00 + iVar1;
    while( true ) {
      if ((this->MaterialParameters).AttributeBindings.ArrayNum != iVar1) {
        `TCheckedPointerIterator<FNiagaraMaterialAttributeBinding,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (this_00 == pFVar2) break;
      FNiagaraMaterialAttributeBinding::CacheValues(this_00,local_38.Emitter);
      this_00 = this_00 + 1;
    }
    FNiagaraVariableAttributeBinding::SetAsPreviousValue
              (&this->PrevPositionBinding,&this->PositionBinding,&local_38,param_1);
    FNiagaraVariableAttributeBinding::SetAsPreviousValue
              (&this->PrevScaleBinding,&this->ScaleBinding,&local_38,param_1);
    FNiagaraVariableAttributeBinding::SetAsPreviousValue
              (&this->PrevMeshOrientationBinding,&this->MeshOrientationBinding,&local_38,param_1);
    FNiagaraVariableAttributeBinding::SetAsPreviousValue
              (&this->PrevCameraOffsetBinding,&this->CameraOffsetBinding,&local_38,param_1);
    FNiagaraVariableAttributeBinding::SetAsPreviousValue
              (&this->PrevVelocityBinding,&this->VelocityBinding,&local_38,param_1);
  }
  return;
}

// _getUObject @ 14930e710

UObject * __thiscall
UNiagaraMeshRendererProperties::_getUObject(UNiagaraMeshRendererProperties *this)

{
  return (UObject *)&this[-1].PrevMeshOrientationBinding.DataSetName.Number;
}

