// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCache
// Functions: 24

// StaticClass @ 14c9ff790

UClass * __cdecl UNiagaraGeometryCacheRendererProperties::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"NiagaraGeometryCacheRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraGeometryCacheRendererProperties,0x220,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraGeometryCacheRendererProperties>
               ,InternalVTableHelperCtorCaller<UNiagaraGeometryCacheRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.InnerSingleton;
}

// UNiagaraGeometryCacheRendererProperties @ 14ca07f50

UNiagaraGeometryCacheRendererProperties * __thiscall
UNiagaraGeometryCacheRendererProperties::UNiagaraGeometryCacheRendererProperties
          (UNiagaraGeometryCacheRendererProperties *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  UNiagaraRendererProperties::UNiagaraRendererProperties((UNiagaraRendererProperties *)this,param_1)
  ;
  this->SourceMode = Particles;
  this->bIsLooping = true;
  this->ComponentCountLimit = 0xf;
  (this->PositionBinding).RootName.ComparisonIndex = 0;
  this->_padding_ = (longlong)&___7UNiagaraGeometryCacheRendererProperties__6B_;
  (this->GeometryCaches).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GeometryCaches).ArrayNum = 0;
  (this->GeometryCaches).ArrayMax = 0;
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
  (this->ElapsedTimeBinding).RootName.ComparisonIndex = 0;
  (this->ElapsedTimeBinding).RootName.Number = 0;
  (this->ElapsedTimeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->ElapsedTimeBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->ElapsedTimeBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->ElapsedTimeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->ElapsedTimeBinding).bBindingExistsOnSource = '\0';
  (this->ElapsedTimeBinding).bIsCachedParticleValue = '\x01';
  (this->ElapsedTimeBinding).DataSetName.ComparisonIndex = 0;
  (this->ElapsedTimeBinding).DataSetName.Number = 0;
  (this->ElapsedTimeBinding).BindingSourceMode.Value = '\0';
  (this->EnabledBinding).RootName.ComparisonIndex = 0;
  (this->EnabledBinding).RootName.Number = 0;
  (this->EnabledBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->EnabledBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->EnabledBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->EnabledBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->EnabledBinding).bBindingExistsOnSource = '\0';
  (this->EnabledBinding).bIsCachedParticleValue = '\x01';
  (this->EnabledBinding).DataSetName.ComparisonIndex = 0;
  (this->EnabledBinding).DataSetName.Number = 0;
  (this->EnabledBinding).BindingSourceMode.Value = '\0';
  (this->ArrayIndexBinding).RootName.ComparisonIndex = 0;
  (this->ArrayIndexBinding).RootName.Number = 0;
  (this->ArrayIndexBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->ArrayIndexBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->ArrayIndexBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->ArrayIndexBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->ArrayIndexBinding).bBindingExistsOnSource = '\0';
  (this->ArrayIndexBinding).bIsCachedParticleValue = '\x01';
  (this->ArrayIndexBinding).DataSetName.ComparisonIndex = 0;
  (this->ArrayIndexBinding).DataSetName.Number = 0;
  (this->ArrayIndexBinding).BindingSourceMode.Value = '\0';
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
  this->bAssignComponentsOnParticleID = true;
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
  *(undefined1 *)&this->PositionAccessor = 1;
  *(undefined4 *)&(this->PositionAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->RotationAccessor = 1;
  *(undefined4 *)&(this->RotationAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ScaleAccessor = 1;
  *(undefined4 *)&(this->ScaleAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ElapsedTimeAccessor = 1;
  *(undefined8 *)&(this->ElapsedTimeAccessor).field_0x4 = 0xffffffffffffffff;
  this->ArrayIndexAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  this->VisTagAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  this->UniqueIDAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  return this;
}

// UNiagaraGeometryCacheRendererProperties @ 14ca08230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

UNiagaraGeometryCacheRendererProperties * __thiscall
UNiagaraGeometryCacheRendererProperties::UNiagaraGeometryCacheRendererProperties
          (UNiagaraGeometryCacheRendererProperties *this)

{
  byte *pbVar1;
  undefined1 *puVar2;
  int *piVar3;
  FNiagaraVariableAttributeBinding *pFVar4;
  TArray<FNiagaraGeometryCacheReference,TSizedDefaultAllocator<32>_> *pTVar5;
  FNiagaraVariableAttributeBinding *pFVar6;
  FNiagaraVariableAttributeBinding *pFVar7;
  FNiagaraVariableAttributeBinding *pFVar8;
  FNiagaraVariableAttributeBinding *pFVar9;
  longlong *plVar10;
  int iVar11;
  int *piVar12;
  FNiagaraVariableAttributeBinding *pFVar13;
  FNiagaraVariableAttributeBinding *pFVar14;
  
  UNiagaraMergeable::UNiagaraMergeable((UNiagaraMergeable *)this);
  this->_padding_ = (longlong)&___7UNiagaraRendererProperties__6B_;
  FNiagaraPlatformSet::FNiagaraPlatformSet((FNiagaraPlatformSet *)&this->_padding_);
  *(undefined2 *)((longlong)&this->_padding_ + 5) = 0x101;
  this->_padding_ = 0;
  this->_padding_ = 0;
  iVar11 = FNiagaraTypeDefinitionHandle::Register
                     ((FNiagaraTypeDefinitionHandle *)&this->_padding_,
                      &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&this->_padding_ = iVar11;
  pFVar4 = &this->PositionBinding;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 & 0xfe;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 5);
  *pbVar1 = *pbVar1 | 2;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = (longlong)&___7UNiagaraGeometryCacheRendererProperties__6B_;
  pTVar5 = &this->GeometryCaches;
  (pTVar5->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->GeometryCaches).ArrayNum = 0;
  piVar12 = &(this->GeometryCaches).ArrayMax;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *piVar12 = 0;
  this->_padding_ = 0;
  this->SourceMode = Particles;
  this->bIsLooping = true;
  this->ComponentCountLimit = 0xf;
  (pFVar4->RootName).ComparisonIndex = 0;
  (pFVar4->RootName).Number = 0;
  (this->PositionBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->PositionBinding).ParamMapVariable.Name.Number = 0;
  iVar11 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->PositionBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->PositionBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar11;
  pFVar6 = &this->RotationBinding;
  (this->PositionBinding).bBindingExistsOnSource = '\0';
  (this->PositionBinding).bIsCachedParticleValue = '\x01';
  (this->PositionBinding).DataSetName.ComparisonIndex = 0;
  (this->PositionBinding).DataSetName.Number = 0;
  (this->PositionBinding).BindingSourceMode.Value = '\0';
  (pFVar6->RootName).ComparisonIndex = 0;
  (pFVar6->RootName).Number = 0;
  (this->RotationBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RotationBinding).ParamMapVariable.Name.Number = 0;
  iVar11 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->RotationBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->RotationBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar11;
  pFVar7 = &this->ScaleBinding;
  (this->RotationBinding).bBindingExistsOnSource = '\0';
  (this->RotationBinding).bIsCachedParticleValue = '\x01';
  (this->RotationBinding).DataSetName.ComparisonIndex = 0;
  (this->RotationBinding).DataSetName.Number = 0;
  (this->RotationBinding).BindingSourceMode.Value = '\0';
  (pFVar7->RootName).ComparisonIndex = 0;
  (pFVar7->RootName).Number = 0;
  (this->ScaleBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->ScaleBinding).ParamMapVariable.Name.Number = 0;
  iVar11 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->ScaleBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->ScaleBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar11;
  pFVar8 = &this->ElapsedTimeBinding;
  (this->ScaleBinding).bBindingExistsOnSource = '\0';
  (this->ScaleBinding).bIsCachedParticleValue = '\x01';
  (this->ScaleBinding).DataSetName.ComparisonIndex = 0;
  (this->ScaleBinding).DataSetName.Number = 0;
  (this->ScaleBinding).BindingSourceMode.Value = '\0';
  (pFVar8->RootName).ComparisonIndex = 0;
  (pFVar8->RootName).Number = 0;
  (this->ElapsedTimeBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->ElapsedTimeBinding).ParamMapVariable.Name.Number = 0;
  iVar11 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->ElapsedTimeBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->ElapsedTimeBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar11;
  pFVar9 = &this->EnabledBinding;
  (this->ElapsedTimeBinding).bBindingExistsOnSource = '\0';
  (this->ElapsedTimeBinding).bIsCachedParticleValue = '\x01';
  (this->ElapsedTimeBinding).DataSetName.ComparisonIndex = 0;
  (this->ElapsedTimeBinding).DataSetName.Number = 0;
  (this->ElapsedTimeBinding).BindingSourceMode.Value = '\0';
  (pFVar9->RootName).ComparisonIndex = 0;
  (pFVar9->RootName).Number = 0;
  (this->EnabledBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->EnabledBinding).ParamMapVariable.Name.Number = 0;
  iVar11 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->EnabledBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->EnabledBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar11;
  (this->EnabledBinding).bBindingExistsOnSource = '\0';
  pFVar13 = &this->ArrayIndexBinding;
  (this->EnabledBinding).bIsCachedParticleValue = '\x01';
  (this->EnabledBinding).DataSetName.ComparisonIndex = 0;
  (this->EnabledBinding).DataSetName.Number = 0;
  (this->EnabledBinding).BindingSourceMode.Value = '\0';
  (pFVar13->RootName).ComparisonIndex = 0;
  (pFVar13->RootName).Number = 0;
  (this->ArrayIndexBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->ArrayIndexBinding).ParamMapVariable.Name.Number = 0;
  iVar11 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->ArrayIndexBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->ArrayIndexBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar11;
  (this->ArrayIndexBinding).bBindingExistsOnSource = '\0';
  (this->ArrayIndexBinding).bIsCachedParticleValue = '\x01';
  (this->ArrayIndexBinding).DataSetName.ComparisonIndex = 0;
  (this->ArrayIndexBinding).DataSetName.Number = 0;
  (this->ArrayIndexBinding).BindingSourceMode.Value = '\0';
  pFVar14 = &this->RendererVisibilityTagBinding;
  (pFVar14->RootName).ComparisonIndex = 0;
  (pFVar14->RootName).Number = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name.Number = 0;
  iVar11 = FNiagaraTypeDefinitionHandle::Register
                     (&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle,
                      &FNiagaraTypeDefinition::Vec4Def);
  (this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar11;
  (this->RendererVisibilityTagBinding).bBindingExistsOnSource = '\0';
  (this->RendererVisibilityTagBinding).bIsCachedParticleValue = '\x01';
  (this->RendererVisibilityTagBinding).DataSetName.ComparisonIndex = 0;
  (this->RendererVisibilityTagBinding).DataSetName.Number = 0;
  (this->RendererVisibilityTagBinding).BindingSourceMode.Value = '\0';
  piVar3 = (int *)((longlong)&this->_padding_ + 4);
  this->bAssignComponentsOnParticleID = true;
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
  *(undefined1 *)&this->PositionAccessor = 1;
  *(undefined4 *)&(this->PositionAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->RotationAccessor = 1;
  *(undefined4 *)&(this->RotationAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ScaleAccessor = 1;
  *(undefined4 *)&(this->ScaleAccessor).field_0x4 = 0xffffffff;
  *(undefined1 *)&this->ElapsedTimeAccessor = 1;
  *(undefined8 *)&(this->ElapsedTimeAccessor).field_0x4 = 0xffffffffffffffff;
  this->ArrayIndexAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  this->VisTagAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  this->UniqueIDAccessor = (FNiagaraDataSetAccessor<int>)0xffffffff;
  iVar11 = *piVar3;
  *(undefined4 *)&this->_padding_ = 7;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,7,iVar11,(ForAnyElementType *)&this->_padding_,7,piVar3);
  plVar10 = (longlong *)this->_padding_;
  *plVar10 = (longlong)pFVar4;
  plVar10[1] = (longlong)pFVar6;
  plVar10[2] = (longlong)pFVar7;
  plVar10[3] = (longlong)pFVar8;
  plVar10[4] = (longlong)pFVar9;
  plVar10[5] = (longlong)pFVar14;
  plVar10[6] = (longlong)pFVar13;
  if ((this->GeometryCaches).ArrayNum == 0) {
    if (*piVar12 == 0) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x848,&pTVar5->AllocatorInstance,piVar12);
    }
    else {
      iVar11 = 0;
    }
    (this->GeometryCaches).ArrayNum = iVar11 + 1;
    DefaultConstructItems<FNiagaraGeometryCacheReference,int>
              ((pTVar5->AllocatorInstance).Data + (longlong)iVar11 * 0x48,1);
  }
  iVar11 = (this->GeometryCaches).ArrayNum;
  if (*piVar12 != iVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x48,8,iVar11,&pTVar5->AllocatorInstance,iVar11,piVar12);
  }
  return this;
}

// ~UNiagaraGeometryCacheRendererProperties @ 14ca098f0

void __thiscall
UNiagaraGeometryCacheRendererProperties::~UNiagaraGeometryCacheRendererProperties
          (UNiagaraGeometryCacheRendererProperties *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraGeometryCacheRendererProperties__6B_;
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
  DestructItems<FNiagaraGeometryCacheReference,int>
            ((FNiagaraGeometryCacheReference *)(this->GeometryCaches).AllocatorInstance.Data,
             (this->GeometryCaches).ArrayNum);
  pFVar1 = (this->GeometryCaches).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UNiagaraRendererProperties::~UNiagaraRendererProperties((UNiagaraRendererProperties *)this);
  return;
}

// CacheFromCompiledData @ 14ca0f560

void __thiscall
UNiagaraGeometryCacheRendererProperties::CacheFromCompiledData
          (UNiagaraGeometryCacheRendererProperties *this,FNiagaraDataSetCompiledData *param_1)

{
  FName FVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FNiagaraTypeDefinition *pFVar5;
  FName *pFVar6;
  FNiagaraDataSetAccessor<FNiagaraBool> FVar7;
  FName *pFVar8;
  longlong lVar9;
  FNiagaraDataSetCompiledData *pFVar10;
  uint uVar11;
  FName local_res8;
  FNiagaraTypeDefinitionHandle local_60;
  FName local_5c;
  FNiagaraTypeDefinitionHandle local_54;
  FName local_50;
  FNiagaraTypeDefinitionHandle local_48;
  FName local_44;
  FNiagaraTypeDefinitionHandle local_3c;
  FName local_38;
  FNiagaraTypeDefinitionHandle local_30;
  FName local_2c;
  FNiagaraTypeDefinitionHandle local_24 [3];
  
  (**(code **)(this->_padding_ + 0x358))(this,this->SourceMode,0);
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->PositionBinding).ParamMapVariable.TypeDefHandle);
  FVar1 = (this->PositionBinding).DataSetName;
  local_60.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_60,pFVar5);
  pFVar10 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->PositionBinding).bIsCachedParticleValue != '\0') {
    pFVar10 = param_1;
  }
  if (pFVar10 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->PositionAccessor = 1;
    *(undefined4 *)&(this->PositionAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<FNiagaraPosition>::Init
              ((FNiagaraDataSetAccessorFloat<FNiagaraPosition> *)&this->PositionAccessor,pFVar10,
               FVar1);
  }
  UNiagaraRendererProperties::
  InitParticleDataSetAccessor<FNiagaraDataSetAccessor<UE::Math::TVector<float>_>_>
            ((UNiagaraRendererProperties *)this,&this->RotationAccessor,param_1,
             &this->RotationBinding);
  UNiagaraRendererProperties::
  InitParticleDataSetAccessor<FNiagaraDataSetAccessor<UE::Math::TVector<float>_>_>
            ((UNiagaraRendererProperties *)this,&this->ScaleAccessor,param_1,&this->ScaleBinding);
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->ElapsedTimeBinding).ParamMapVariable.TypeDefHandle);
  local_5c = (this->ElapsedTimeBinding).DataSetName;
  local_54.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_54,pFVar5);
  pFVar10 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->ElapsedTimeBinding).bIsCachedParticleValue != '\0') {
    pFVar10 = param_1;
  }
  if (pFVar10 == (FNiagaraDataSetCompiledData *)0x0) {
    *(undefined1 *)&this->ElapsedTimeAccessor = 1;
    *(undefined4 *)&(this->ElapsedTimeAccessor).field_0x4 = 0xffffffff;
  }
  else {
    FNiagaraDataSetAccessorFloat<float>::Init
              ((FNiagaraDataSetAccessorFloat<float> *)&this->ElapsedTimeAccessor,pFVar10,local_5c);
  }
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->EnabledBinding).ParamMapVariable.TypeDefHandle);
  local_50 = (this->EnabledBinding).DataSetName;
  local_48.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_48,pFVar5);
  pFVar10 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->EnabledBinding).bIsCachedParticleValue != '\0') {
    pFVar10 = param_1;
  }
  this->EnabledAccessor = (FNiagaraDataSetAccessor<FNiagaraBool>)0xffffffff;
  if (pFVar10 != (FNiagaraDataSetCompiledData *)0x0) {
    local_44 = local_50;
    local_3c.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register(&local_3c,&FNiagaraTypeDefinition::BoolDef);
    pFVar6 = (FName *)(pFVar10->Variables).AllocatorInstance.Data;
    for (pFVar8 = pFVar6;
        pFVar8 != (FName *)((longlong)pFVar6 + (longlong)(pFVar10->Variables).ArrayNum * 0xc);
        pFVar8 = (FName *)&pFVar8[1].Number) {
      if ((*pFVar8 == local_44) && (pFVar8[1].ComparisonIndex.Value == local_3c.RegisteredTypeIndex)
         ) {
        lVar9 = ((longlong)pFVar8 - (longlong)pFVar6) / 6 +
                ((longlong)pFVar8 - (longlong)pFVar6 >> 0x3f);
        uVar11 = (int)(lVar9 >> 1) - (int)(lVar9 >> 0x3f);
        if (uVar11 != 0xffffffff) {
          uVar4 = 0;
          if ((int)uVar11 < (pFVar10->VariableLayouts).ArrayNum) {
            uVar4 = ~uVar11 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          FVar7._2_2_ = 0;
          FVar7._0_2_ = *(ushort *)
                         ((pFVar10->VariableLayouts).AllocatorInstance.Data +
                         (longlong)(int)uVar11 * 0x20 + 2);
          this->EnabledAccessor = FVar7;
        }
        break;
      }
    }
  }
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->ArrayIndexBinding).ParamMapVariable.TypeDefHandle);
  local_38 = (this->ArrayIndexBinding).DataSetName;
  local_30.RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(&local_30,pFVar5);
  pFVar10 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->ArrayIndexBinding).bIsCachedParticleValue != '\0') {
    pFVar10 = param_1;
  }
  FNiagaraDataSetAccessorInt32<int>::Init
            ((FNiagaraDataSetAccessorInt32<int> *)&this->ArrayIndexAccessor,pFVar10,local_38);
  pFVar5 = FNiagaraTypeDefinitionHandle::Resolve
                     (&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle);
  local_2c = (this->RendererVisibilityTagBinding).DataSetName;
  local_24[0].RegisteredTypeIndex = FNiagaraTypeDefinitionHandle::Register(local_24,pFVar5);
  pFVar10 = (FNiagaraDataSetCompiledData *)0x0;
  if ((this->RendererVisibilityTagBinding).bIsCachedParticleValue != '\0') {
    pFVar10 = param_1;
  }
  FNiagaraDataSetAccessorInt32<int>::Init
            ((FNiagaraDataSetAccessorInt32<int> *)&this->VisTagAccessor,pFVar10,local_2c);
  pFVar6 = ::FName::FName(&local_res8,"UniqueID");
  FNiagaraDataSetAccessorInt32<int>::Init
            ((FNiagaraDataSetAccessorInt32<int> *)&this->UniqueIDAccessor,param_1,*pFVar6);
  return;
}

// CreateBoundsCalculator @ 14ca10730

FNiagaraBoundsCalculator * __thiscall
UNiagaraGeometryCacheRendererProperties::CreateBoundsCalculator
          (UNiagaraGeometryCacheRendererProperties *this)

{
  return (FNiagaraBoundsCalculator *)0x0;
}

// CreateEmitterRenderer @ 14ca10740

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
UNiagaraGeometryCacheRendererProperties::CreateEmitterRenderer
          (UNiagaraGeometryCacheRendererProperties *this,Type param_1,
          FNiagaraEmitterInstance *param_2,FNiagaraSystemInstanceController *param_3)

{
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  FNiagaraRendererGeometryCache *this_00;
  UNiagaraGeometryCacheRendererProperties *pUVar4;
  
  this_00 = ::operator_new(0x198);
  if (this_00 != (FNiagaraRendererGeometryCache *)0x0) {
    FNiagaraRenderer::FNiagaraRenderer
              ((FNiagaraRenderer *)this_00,param_1,(UNiagaraRendererProperties *)this,param_2);
    this_00->_padding_ = (longlong)&___7FNiagaraRendererGeometryCache__6B_;
    piVar1 = &(this_00->ComponentPool).ArrayMax;
    (this_00->SpawnedOwner).WeakPtr = (FWeakObjectPtr)0x0;
    (this_00->ComponentPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->ComponentPool).ArrayNum = 0;
    *piVar1 = 0;
    (this_00->MaterialRemapTable).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this_00->MaterialRemapTable).ArrayNum = 0;
    (this_00->MaterialRemapTable).ArrayMax = 0;
    pUVar4 = CastChecked<UNiagaraGeometryCacheRendererProperties_const_,UNiagaraRendererProperties_const_>
                       ((UNiagaraRendererProperties *)this);
    uVar2 = pUVar4->ComponentCountLimit;
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if (*piVar1 < (int)uVar2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,uVar2,&(this_00->ComponentPool).AllocatorInstance,
                 (this_00->ComponentPool).ArrayNum,piVar1);
    }
  }
  pcVar3 = *(code **)(this_00->_padding_ + 8);
  if (pcVar3 == FNiagaraRendererGeometryCache::Initialize) {
    FNiagaraRendererGeometryCache::Initialize
              (this_00,(UNiagaraRendererProperties *)this,param_2,param_3);
  }
  else {
    (*pcVar3)();
  }
  return (FNiagaraRenderer *)this_00;
}

// GetCurrentSourceMode @ 14ca1ae90

ENiagaraRendererSourceDataMode __thiscall
UNiagaraGeometryCacheRendererProperties::GetCurrentSourceMode
          (UNiagaraGeometryCacheRendererProperties *this)

{
  return this->SourceMode;
}

// GetPrivateStaticClass @ 14ca1ef50

UClass * __cdecl UNiagaraGeometryCacheRendererProperties::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryCache",L"NiagaraGeometryCacheRendererProperties",
               &Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.InnerSingleton,
               StaticRegisterNativesUNiagaraGeometryCacheRendererProperties,0x220,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraGeometryCacheRendererProperties>
               ,InternalVTableHelperCtorCaller<UNiagaraGeometryCacheRendererProperties>,local_res8,
               UNiagaraRendererProperties::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraGeometryCacheRendererProperties.InnerSingleton;
}

// GetUsedMaterials @ 14ca1fbe0

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
UNiagaraGeometryCacheRendererProperties::GetUsedMaterials
          (UNiagaraGeometryCacheRendererProperties *this,FNiagaraEmitterInstance *param_1,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_2)

{
  FNiagaraGeometryCacheReference *pFVar1;
  int iVar2;
  int iVar3;
  UGeometryCache *pUVar4;
  int iVar5;
  FNiagaraGeometryCacheReference *this_00;
  undefined1 local_res8 [8];
  FNiagaraEmitterInstance *local_res10;
  UMaterialInterface *local_res20;
  
  iVar2 = (this->GeometryCaches).ArrayNum;
  this_00 = (FNiagaraGeometryCacheReference *)(this->GeometryCaches).AllocatorInstance.Data;
  pFVar1 = this_00 + iVar2;
  local_res10 = param_1;
  while( true ) {
    if ((this->GeometryCaches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraGeometryCacheReference_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar1) break;
    pUVar4 = ResolveGeometryCache(this_00,local_res10);
    if (pUVar4 != (UGeometryCache *)0x0) {
      iVar3 = (this_00->OverrideMaterials).ArrayNum;
      if (iVar3 < (pUVar4->Materials).ArrayNum) {
        iVar3 = (pUVar4->Materials).ArrayNum;
      }
      iVar5 = 0;
      if (0 < iVar3) {
        do {
          local_res20 = FNiagaraGeometryCacheReference::ResolveMaterial(this_00,pUVar4,iVar5);
          if (local_res20 != (UMaterialInterface *)0x0) {
            TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_>::
            AddUniqueImpl<UMaterialInterface_*_const_&>(param_2,&local_res20);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar3);
      }
    }
    this_00 = this_00 + 1;
  }
  return;
}

// InitBindings @ 14ca20110

void __thiscall
UNiagaraGeometryCacheRendererProperties::InitBindings(UNiagaraGeometryCacheRendererProperties *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FNiagaraTypeDefinition *pFVar7;
  FNiagaraVariableAttributeBinding *pFVar8;
  FNiagaraVariable *pFVar9;
  undefined4 local_res8 [2];
  undefined4 local_res10 [2];
  FNiagaraVariableAttributeBinding local_188;
  FNiagaraVariableAttributeBinding local_168;
  FNiagaraVariableAttributeBinding local_148;
  TVector<float>_u_0 local_128;
  FNiagaraVariableAttributeBinding local_11c;
  FNiagaraVariableAttributeBinding local_fc;
  FNiagaraVariableAttributeBinding local_dc;
  FNiagaraVariable local_b8;
  FNiagaraVariable local_98;
  FNiagaraVariableAttributeBinding local_78;
  FNiagaraVariable local_58;
  FNiagaraVariable local_38;
  
  if (((this->PositionBinding).DataSetName != (FName)0x0) &&
     (pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                         (&(this->PositionBinding).ParamMapVariable.TypeDefHandle),
     (pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0)) {
    return;
  }
  pFVar8 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_11c,(FNiagaraVariableBase *)&INiagaraModule::Particles_Position);
  FVar3 = (pFVar8->ParamMapVariable).Name;
  (this->PositionBinding).RootName = pFVar8->RootName;
  (this->PositionBinding).ParamMapVariable.Name = FVar3;
  uVar4 = *(undefined8 *)&(pFVar8->DataSetName).Number;
  *(undefined8 *)&(this->PositionBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar8->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->PositionBinding).DataSetName.Number = uVar4;
  pFVar8 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_fc,(FNiagaraVariableBase *)&INiagaraModule::Particles_Scale);
  FVar3 = (pFVar8->ParamMapVariable).Name;
  (this->ScaleBinding).RootName = pFVar8->RootName;
  (this->ScaleBinding).ParamMapVariable.Name = FVar3;
  uVar4 = *(undefined8 *)&(pFVar8->DataSetName).Number;
  *(undefined8 *)&(this->ScaleBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar8->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->ScaleBinding).DataSetName.Number = uVar4;
  pFVar8 = FNiagaraConstants::GetAttributeDefaultBinding
                     (&local_dc,(FNiagaraVariableBase *)&INiagaraModule::Particles_VisibilityTag);
  local_res8[0] = 0;
  FVar3 = (pFVar8->ParamMapVariable).Name;
  (this->RendererVisibilityTagBinding).RootName = pFVar8->RootName;
  (this->RendererVisibilityTagBinding).ParamMapVariable.Name = FVar3;
  uVar4 = *(undefined8 *)&(pFVar8->DataSetName).Number;
  *(undefined8 *)&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar8->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->RendererVisibilityTagBinding).DataSetName.Number = uVar4;
  pFVar9 = FNiagaraVariable::FNiagaraVariable(&local_b8,&Particles_ArrayIndex);
  pFVar7 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&pFVar9->_padding_)
  ;
  iVar6 = FNiagaraTypeDefinition::GetSize(pFVar7);
  if ((iVar6 != 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("sizeof(T) == TypeDefHandle->GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                         ,0x5db,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FNiagaraVariable::AllocateData(pFVar9);
  memcpy((pFVar9->VarData).AllocatorInstance.Data,local_res8,(longlong)(pFVar9->VarData).ArrayNum);
  local_188.RootName.ComparisonIndex.Value = 0;
  local_188.RootName.Number = 0;
  local_188.ParamMapVariable.Name.ComparisonIndex.Value = 0;
  local_188.ParamMapVariable.Name.Number = 0;
  local_188.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_188.ParamMapVariable.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  local_188.DataSetName.ComparisonIndex.Value = 0;
  local_188.DataSetName.Number = 0;
  local_188._29_1_ = local_188._29_1_ & 0xfe | 2;
  local_188.BindingSourceMode.Value = '\0';
  FNiagaraVariableAttributeBinding::Setup
            (&local_188,(FNiagaraVariableBase *)pFVar9,pFVar9,Particles);
  pFVar1 = (pFVar9->VarData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  local_128._0_8_ = 0;
  local_128._s_0.Z = 0.0;
  (this->ArrayIndexBinding).RootName = local_188.RootName;
  (this->ArrayIndexBinding).ParamMapVariable.Name = local_188.ParamMapVariable.Name;
  *(ulonglong *)&(this->ArrayIndexBinding).ParamMapVariable.TypeDefHandle =
       CONCAT44(local_188.DataSetName.ComparisonIndex.Value,
                local_188.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex);
  *(ulonglong *)&(this->ArrayIndexBinding).DataSetName.Number =
       CONCAT26(local_188._30_2_,
                CONCAT15(local_188._29_1_,
                         CONCAT14(local_188.BindingSourceMode.Value,local_188.DataSetName.Number)));
  pFVar9 = FNiagaraVariable::FNiagaraVariable(&local_98,&Particles_GeoCacheRotation);
  pFVar8 = CreateDefaultBinding<UE::Math::TVector<float>_>
                     (&local_78,pFVar9,(TVector<float> *)&local_128._s_0);
  local_res10[0] = 0;
  FVar3 = (pFVar8->ParamMapVariable).Name;
  (this->RotationBinding).RootName = pFVar8->RootName;
  (this->RotationBinding).ParamMapVariable.Name = FVar3;
  uVar4 = *(undefined8 *)&(pFVar8->DataSetName).Number;
  *(undefined8 *)&(this->RotationBinding).ParamMapVariable.TypeDefHandle =
       *(undefined8 *)&(pFVar8->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&(this->RotationBinding).DataSetName.Number = uVar4;
  pFVar9 = FNiagaraVariable::FNiagaraVariable(&local_58,&Particles_Age);
  pFVar7 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&pFVar9->_padding_)
  ;
  iVar6 = FNiagaraTypeDefinition::GetSize(pFVar7);
  if ((iVar6 != 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("sizeof(T) == TypeDefHandle->GetSize()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                         ,0x5db,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FNiagaraVariable::AllocateData(pFVar9);
  memcpy((pFVar9->VarData).AllocatorInstance.Data,local_res10,(longlong)(pFVar9->VarData).ArrayNum);
  local_168.RootName.ComparisonIndex.Value = 0;
  local_168.RootName.Number = 0;
  local_168.ParamMapVariable.Name.ComparisonIndex.Value = 0;
  local_168.ParamMapVariable.Name.Number = 0;
  local_168.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_168.ParamMapVariable.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  local_168.DataSetName.ComparisonIndex.Value = 0;
  local_168.DataSetName.Number = 0;
  local_168._29_1_ = local_168._29_1_ & 0xfe | 2;
  local_168.BindingSourceMode.Value = '\0';
  FNiagaraVariableAttributeBinding::Setup
            (&local_168,(FNiagaraVariableBase *)pFVar9,pFVar9,Particles);
  pFVar1 = (pFVar9->VarData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->ElapsedTimeBinding).RootName = local_168.RootName;
  (this->ElapsedTimeBinding).ParamMapVariable.Name = local_168.ParamMapVariable.Name;
  *(ulonglong *)&(this->ElapsedTimeBinding).ParamMapVariable.TypeDefHandle =
       CONCAT44(local_168.DataSetName.ComparisonIndex.Value,
                local_168.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex);
  *(ulonglong *)&(this->ElapsedTimeBinding).DataSetName.Number =
       CONCAT26(local_168._30_2_,
                CONCAT15(local_168._29_1_,
                         CONCAT14(local_168.BindingSourceMode.Value,local_168.DataSetName.Number)));
  pFVar9 = FNiagaraVariable::FNiagaraVariable(&local_38,&Particles_GeoCacheIsEnabled);
  pFVar7 = FNiagaraTypeDefinitionHandle::Resolve((FNiagaraTypeDefinitionHandle *)&pFVar9->_padding_)
  ;
  if ((((TObjectPtr<UObject>_u_0)(pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr !=
        FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0) ||
      (pFVar7->UnderlyingType != FNiagaraTypeDefinition::BoolDef.UnderlyingType)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("TypeDefHandle.IsSameBase(FNiagaraTypeDefinition::GetBoolDef())",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                         ,0x67a,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FNiagaraVariable::AllocateData(pFVar9);
  *(undefined4 *)(pFVar9->VarData).AllocatorInstance.Data = 0;
  local_148.RootName.ComparisonIndex.Value = 0;
  local_148.RootName.Number = 0;
  local_148.ParamMapVariable.Name.ComparisonIndex.Value = 0;
  local_148.ParamMapVariable.Name.Number = 0;
  local_148.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_148.ParamMapVariable.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  local_148.DataSetName.ComparisonIndex.Value = 0;
  local_148.DataSetName.Number = 0;
  local_148._29_1_ = local_148._29_1_ & 0xfe | 2;
  local_148.BindingSourceMode.Value = '\0';
  FNiagaraVariableAttributeBinding::Setup
            (&local_148,(FNiagaraVariableBase *)pFVar9,pFVar9,Particles);
  pFVar1 = (pFVar9->VarData).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  (this->EnabledBinding).RootName = local_148.RootName;
  (this->EnabledBinding).ParamMapVariable.Name = local_148.ParamMapVariable.Name;
  *(ulonglong *)&(this->EnabledBinding).ParamMapVariable.TypeDefHandle =
       CONCAT44(local_148.DataSetName.ComparisonIndex.Value,
                local_148.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex);
  *(ulonglong *)&(this->EnabledBinding).DataSetName.Number =
       CONCAT26(local_148._30_2_,
                CONCAT15(local_148._29_1_,
                         CONCAT14(local_148.BindingSourceMode.Value,local_148.DataSetName.Number)));
  return;
}

// InitCDOPropertiesAfterModuleStartup @ 14ca204c0

void __cdecl UNiagaraGeometryCacheRendererProperties::InitCDOPropertiesAfterModuleStartup(void)

{
  FWeakObjectPtr *pFVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  FNameEntryId FVar7;
  uint uVar8;
  FNameEntryId FVar9;
  ForAnyElementType FVar10;
  FName FVar11;
  FName FVar12;
  FName FVar13;
  FName FVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  UClass *pUVar18;
  FNiagaraVariableAttributeBinding *pFVar19;
  FNiagaraVariable *pFVar20;
  FNiagaraTypeDefinition *pFVar21;
  UObject *pUVar22;
  FString *pFVar23;
  ulonglong uVar24;
  ForAnyElementType this;
  wchar_t *pwVar25;
  size_t sVar26;
  wchar_t *pwVar27;
  undefined1 local_res8 [8];
  undefined4 local_res10 [2];
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_378 [2];
  undefined1 local_370 [8];
  FNiagaraTypeDefinitionHandle local_368 [2];
  ForAnyElementType local_360;
  int local_358;
  int local_354;
  undefined1 local_350 [8];
  FNiagaraTypeDefinitionHandle local_348 [2];
  ForAnyElementType local_340;
  int local_338;
  int local_334;
  FNiagaraVariableAttributeBinding local_330;
  FNiagaraVariableAttributeBinding local_310;
  FNiagaraVariableAttributeBinding local_2f0;
  FNiagaraVariableAttributeBinding local_2d0;
  undefined1 local_2b0 [8];
  FNiagaraTypeDefinitionHandle local_2a8 [2];
  ForAnyElementType local_2a0;
  int local_298;
  int local_294;
  FNiagaraVariableAttributeBinding local_290;
  FNiagaraVariableAttributeBinding local_270;
  TVector<float>_u_0 local_250;
  TVector<float>_u_0 local_244;
  FNiagaraVariable local_238;
  FString local_218;
  FString local_208;
  FString local_1f8;
  FNiagaraVariableAttributeBinding local_1e8;
  FNiagaraVariableAttributeBinding local_1c8;
  FNiagaraVariableAttributeBinding local_1a8;
  FNiagaraVariable local_188;
  FNiagaraVariableAttributeBinding local_168;
  FNiagaraVariable local_148;
  FNiagaraVariable local_128;
  FNiagaraVariable local_108;
  FNiagaraVariableAttributeBinding local_e8;
  FNiagaraVariableAttributeBinding local_c8;
  FNiagaraVariableAttributeBinding local_a8;
  FNiagaraVariableAttributeBinding local_88 [2];
  
  InitDefaultAttributes();
  pUVar18 = StaticClass();
  if ((pUVar18->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(pUVar18);
  }
  pUVar22 = (pUVar18->ClassDefaultObject).field0_0x0.DebugPtr;
  if (pUVar22 == (UObject *)0x0) {
    pFVar23 = GetTypeName<UNiagaraGeometryCacheRendererProperties>(&local_218);
    if ((pFVar23->Data).ArrayNum == 0) {
      pwVar25 = L"";
    }
    else {
      pwVar25 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar25);
  }
  pUVar18 = StaticClass();
  iVar16 = (int)pUVar18->_padding_;
  if ((*(int *)(*(longlong *)&pUVar22->field_0x10 + 0x38) < iVar16) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&pUVar22->field_0x10 + 0x30) + (longlong)iVar16 * 8) !=
      &pUVar18->_padding_)) {
    pFVar23 = GetTypeName<UNiagaraGeometryCacheRendererProperties>(&local_208);
    pwVar25 = L"";
    if ((pFVar23->Data).ArrayNum == 0) {
      pwVar27 = L"";
    }
    else {
      pwVar27 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
    }
    pFVar23 = GetFullNameForCastLogError<UObject>(&local_1f8,pUVar22);
    if ((pFVar23->Data).ArrayNum != 0) {
      pwVar25 = (wchar_t *)(pFVar23->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(pwVar25,pwVar27);
  }
  pFVar19 = FNiagaraConstants::GetAttributeDefaultBinding
                      (&local_1e8,(FNiagaraVariableBase *)&INiagaraModule::Particles_Position);
  uVar6 = (pFVar19->RootName).Number;
  FVar7.Value = (pFVar19->ParamMapVariable).Name.ComparisonIndex.Value;
  uVar8 = (pFVar19->ParamMapVariable).Name.Number;
  *(uint *)&pUVar22[4].field_0x18 = (pFVar19->RootName).ComparisonIndex.Value;
  *(uint *)&pUVar22[4].field_0x1c = uVar6;
  *(uint *)&pUVar22[4].field_0x20 = FVar7.Value;
  *(uint *)&pUVar22[4].field_0x24 = uVar8;
  uVar4 = *(undefined8 *)&(pFVar19->DataSetName).Number;
  *(undefined8 *)(pUVar22 + 5) = *(undefined8 *)&(pFVar19->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&pUVar22[5].field_0x8 = uVar4;
  pFVar19 = FNiagaraConstants::GetAttributeDefaultBinding
                      (&local_1c8,(FNiagaraVariableBase *)&INiagaraModule::Particles_Scale);
  uVar6 = (pFVar19->RootName).Number;
  FVar7.Value = (pFVar19->ParamMapVariable).Name.ComparisonIndex.Value;
  uVar8 = (pFVar19->ParamMapVariable).Name.Number;
  *(uint *)&pUVar22[6].field_0x8 = (pFVar19->RootName).ComparisonIndex.Value;
  *(uint *)&pUVar22[6].field_0xc = uVar6;
  *(uint *)&pUVar22[6].field_0x10 = FVar7.Value;
  *(uint *)&pUVar22[6].field_0x14 = uVar8;
  uVar4 = *(undefined8 *)&(pFVar19->DataSetName).Number;
  *(undefined8 *)&pUVar22[6].field_0x18 = *(undefined8 *)&(pFVar19->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)&pUVar22[6].field_0x20 = uVar4;
  pFVar19 = FNiagaraConstants::GetAttributeDefaultBinding
                      (&local_1a8,(FNiagaraVariableBase *)&INiagaraModule::Particles_VisibilityTag);
  local_250._0_8_ = 0;
  local_250._s_0.Z = 0.0;
  uVar6 = (pFVar19->RootName).Number;
  FVar7.Value = (pFVar19->ParamMapVariable).Name.ComparisonIndex.Value;
  uVar8 = (pFVar19->ParamMapVariable).Name.Number;
  *(uint *)&pUVar22[9].field_0x10 = (pFVar19->RootName).ComparisonIndex.Value;
  *(uint *)&pUVar22[9].field_0x14 = uVar6;
  *(uint *)&pUVar22[9].field_0x18 = FVar7.Value;
  *(uint *)&pUVar22[9].field_0x1c = uVar8;
  uVar4 = *(undefined8 *)&(pFVar19->DataSetName).Number;
  *(undefined8 *)&pUVar22[9].field_0x20 = *(undefined8 *)&(pFVar19->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)(pUVar22 + 10) = uVar4;
  pFVar20 = FNiagaraVariable::FNiagaraVariable(&local_188,&Particles_GeoCacheRotation);
  pFVar19 = CreateDefaultBinding<UE::Math::TVector<float>_>
                      (&local_168,pFVar20,(TVector<float> *)&local_250._s_0);
  local_res10[0] = 0;
  uVar6 = (pFVar19->RootName).Number;
  FVar7.Value = (pFVar19->ParamMapVariable).Name.ComparisonIndex.Value;
  uVar8 = (pFVar19->ParamMapVariable).Name.Number;
  *(uint *)&pUVar22[5].field_0x10 = (pFVar19->RootName).ComparisonIndex.Value;
  *(uint *)&pUVar22[5].field_0x14 = uVar6;
  *(uint *)&pUVar22[5].field_0x18 = FVar7.Value;
  *(uint *)&pUVar22[5].field_0x1c = uVar8;
  uVar4 = *(undefined8 *)&(pFVar19->DataSetName).Number;
  *(undefined8 *)&pUVar22[5].field_0x20 = *(undefined8 *)&(pFVar19->ParamMapVariable).TypeDefHandle;
  *(undefined8 *)(pUVar22 + 6) = uVar4;
  pFVar20 = FNiagaraVariable::FNiagaraVariable(&local_148,&Particles_Age);
  pFVar21 = FNiagaraTypeDefinitionHandle::Resolve
                      ((FNiagaraTypeDefinitionHandle *)&pFVar20->_padding_);
  iVar16 = FNiagaraTypeDefinition::GetSize(pFVar21);
  if (iVar16 != 4) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("sizeof(T) == TypeDefHandle->GetSize()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                        ,0x5db,L"");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FNiagaraVariable::AllocateData(pFVar20);
  memcpy((pFVar20->VarData).AllocatorInstance.Data,local_res10,(longlong)(pFVar20->VarData).ArrayNum
        );
  local_330.RootName.ComparisonIndex.Value = 0;
  local_330.RootName.Number = 0;
  local_330.ParamMapVariable.Name.ComparisonIndex.Value = 0;
  local_330.ParamMapVariable.Name.Number = 0;
  local_330.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_330.ParamMapVariable.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  local_330.DataSetName.ComparisonIndex.Value = 0;
  local_330.DataSetName.Number = 0;
  local_330._29_1_ = local_330._29_1_ & 0xfe | 2;
  local_330.BindingSourceMode.Value = '\0';
  FNiagaraVariableAttributeBinding::Setup
            (&local_330,(FNiagaraVariableBase *)pFVar20,pFVar20,Particles);
  pFVar2 = (pFVar20->VarData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(uint *)&pUVar22[7].field_0x0 = local_330.RootName.ComparisonIndex.Value;
  *(uint *)&pUVar22[7].field_0x4 = local_330.RootName.Number;
  *(uint *)&pUVar22[7].field_0x8 = local_330.ParamMapVariable.Name.ComparisonIndex.Value;
  *(uint *)&pUVar22[7].field_0xc = local_330.ParamMapVariable.Name.Number;
  *(ulonglong *)&pUVar22[7].field_0x10 =
       CONCAT44(local_330.DataSetName.ComparisonIndex.Value,
                local_330.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex);
  *(ulonglong *)&pUVar22[7].field_0x18 =
       CONCAT26(local_330._30_2_,
                CONCAT15(local_330._29_1_,
                         CONCAT14(local_330.BindingSourceMode.Value,local_330.DataSetName.Number)));
  pFVar20 = FNiagaraVariable::FNiagaraVariable(&local_128,&Particles_GeoCacheIsEnabled);
  pFVar21 = FNiagaraTypeDefinitionHandle::Resolve
                      ((FNiagaraTypeDefinitionHandle *)&pFVar20->_padding_);
  if (((TObjectPtr<UObject>_u_0)(pFVar21->ClassStructOrEnum).field0_0x0.DebugPtr !=
       FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0) ||
     (pFVar21->UnderlyingType != FNiagaraTypeDefinition::BoolDef.UnderlyingType)) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("TypeDefHandle.IsSameBase(FNiagaraTypeDefinition::GetBoolDef())",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                        ,0x67a,L"");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FNiagaraVariable::AllocateData(pFVar20);
  *(undefined4 *)(pFVar20->VarData).AllocatorInstance.Data = 0;
  local_310.RootName.ComparisonIndex.Value = 0;
  local_310.RootName.Number = 0;
  local_310.ParamMapVariable.Name.ComparisonIndex.Value = 0;
  local_310.ParamMapVariable.Name.Number = 0;
  local_310.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_310.ParamMapVariable.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  local_310.DataSetName.ComparisonIndex.Value = 0;
  local_310.DataSetName.Number = 0;
  local_310._29_1_ = local_310._29_1_ & 0xfe | 2;
  local_310.BindingSourceMode.Value = '\0';
  FNiagaraVariableAttributeBinding::Setup
            (&local_310,(FNiagaraVariableBase *)pFVar20,pFVar20,Particles);
  pFVar2 = (pFVar20->VarData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  local_res18[0] = 0;
  *(uint *)&pUVar22[7].field_0x20 = local_310.RootName.ComparisonIndex.Value;
  *(uint *)&pUVar22[7].field_0x24 = local_310.RootName.Number;
  *(uint *)&pUVar22[8].field_0x0 = local_310.ParamMapVariable.Name.ComparisonIndex.Value;
  *(uint *)&pUVar22[8].field_0x4 = local_310.ParamMapVariable.Name.Number;
  *(ulonglong *)&pUVar22[8].field_0x8 =
       CONCAT44(local_310.DataSetName.ComparisonIndex.Value,
                local_310.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex);
  *(ulonglong *)&pUVar22[8].field_0x10 =
       CONCAT26(local_310._30_2_,
                CONCAT15(local_310._29_1_,
                         CONCAT14(local_310.BindingSourceMode.Value,local_310.DataSetName.Number)));
  pFVar20 = FNiagaraVariable::FNiagaraVariable(&local_108,&Particles_ArrayIndex);
  pFVar21 = FNiagaraTypeDefinitionHandle::Resolve
                      ((FNiagaraTypeDefinitionHandle *)&pFVar20->_padding_);
  iVar16 = FNiagaraTypeDefinition::GetSize(pFVar21);
  if (iVar16 != 4) {
    bVar15 = ::FDebug::CheckVerifyFailedImpl2
                       ("sizeof(T) == TypeDefHandle->GetSize()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                        ,0x5db,L"");
    if (bVar15) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  FNiagaraVariable::AllocateData(pFVar20);
  memcpy((pFVar20->VarData).AllocatorInstance.Data,local_res18,(longlong)(pFVar20->VarData).ArrayNum
        );
  local_2f0.RootName.ComparisonIndex.Value = 0;
  local_2f0.RootName.Number = 0;
  local_2f0.ParamMapVariable.Name.ComparisonIndex.Value = 0;
  local_2f0.ParamMapVariable.Name.Number = 0;
  local_2f0.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register
                 (&local_2f0.ParamMapVariable.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
  local_2f0.DataSetName.ComparisonIndex.Value = 0;
  local_2f0.DataSetName.Number = 0;
  local_2f0._29_1_ = local_2f0._29_1_ & 0xfe | 2;
  local_2f0.BindingSourceMode.Value = '\0';
  FNiagaraVariableAttributeBinding::Setup
            (&local_2f0,(FNiagaraVariableBase *)pFVar20,pFVar20,Particles);
  pFVar2 = (pFVar20->VarData).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(uint *)&pUVar22[8].field_0x18 = local_2f0.RootName.ComparisonIndex.Value;
  *(uint *)&pUVar22[8].field_0x1c = local_2f0.RootName.Number;
  *(uint *)&pUVar22[8].field_0x20 = local_2f0.ParamMapVariable.Name.ComparisonIndex.Value;
  *(uint *)&pUVar22[8].field_0x24 = local_2f0.ParamMapVariable.Name.Number;
  *(ulonglong *)(pUVar22 + 9) =
       CONCAT44(local_2f0.DataSetName.ComparisonIndex.Value,
                local_2f0.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex);
  *(ulonglong *)&pUVar22[9].field_0x8 =
       CONCAT26(local_2f0._30_2_,
                CONCAT15(local_2f0._29_1_,
                         CONCAT14(local_2f0.BindingSourceMode.Value,local_2f0.DataSetName.Number)));
  iVar16 = GeometryCacheRendererPropertiesToDeferredInit.ArrayNum;
  uVar24 = (ulonglong)GeometryCacheRendererPropertiesToDeferredInit.ArrayNum;
  pFVar1 = (FWeakObjectPtr *)
           (GeometryCacheRendererPropertiesToDeferredInit.AllocatorInstance.Data + uVar24 * 8);
  this = GeometryCacheRendererPropertiesToDeferredInit.AllocatorInstance;
  do {
    if ((int)uVar24 != iVar16) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TWeakObjectPtr<UNiagaraGeometryCacheRendererProperties,FWeakObjectPtr>,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FWeakObjectPtr *)this.Data == pFVar1) {
      return;
    }
    pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
    if (pUVar22 != (UObject *)0x0) {
      pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      if (*(longlong *)&pUVar22[5].field_0x4 == 0) {
LAB_14ca2091b:
        pFVar19 = FNiagaraConstants::GetAttributeDefaultBinding
                            (&local_e8,(FNiagaraVariableBase *)&INiagaraModule::Particles_Position);
        FVar7.Value = (pFVar19->RootName).ComparisonIndex.Value;
        uVar6 = (pFVar19->RootName).Number;
        FVar9.Value = (pFVar19->ParamMapVariable).Name.ComparisonIndex.Value;
        uVar8 = (pFVar19->ParamMapVariable).Name.Number;
        uVar4 = *(undefined8 *)&(pFVar19->ParamMapVariable).TypeDefHandle;
        uVar5 = *(undefined8 *)&(pFVar19->DataSetName).Number;
        pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
        *(uint *)&pUVar22[4].field_0x18 = FVar7.Value;
        *(uint *)&pUVar22[4].field_0x1c = uVar6;
        *(uint *)&pUVar22[4].field_0x20 = FVar9.Value;
        *(uint *)&pUVar22[4].field_0x24 = uVar8;
        *(undefined8 *)(pUVar22 + 5) = uVar4;
        *(undefined8 *)&pUVar22[5].field_0x8 = uVar5;
      }
      else {
        pFVar21 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)(pUVar22 + 5));
        if ((pFVar21->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) goto LAB_14ca2091b;
      }
      pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      if (*(longlong *)&pUVar22[6].field_0x1c == 0) {
LAB_14ca2096d:
        pFVar19 = FNiagaraConstants::GetAttributeDefaultBinding
                            (&local_c8,(FNiagaraVariableBase *)&INiagaraModule::Particles_Scale);
        FVar7.Value = (pFVar19->RootName).ComparisonIndex.Value;
        uVar6 = (pFVar19->RootName).Number;
        FVar9.Value = (pFVar19->ParamMapVariable).Name.ComparisonIndex.Value;
        uVar8 = (pFVar19->ParamMapVariable).Name.Number;
        uVar4 = *(undefined8 *)&(pFVar19->ParamMapVariable).TypeDefHandle;
        uVar5 = *(undefined8 *)&(pFVar19->DataSetName).Number;
        pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
        *(uint *)&pUVar22[6].field_0x8 = FVar7.Value;
        *(uint *)&pUVar22[6].field_0xc = uVar6;
        *(uint *)&pUVar22[6].field_0x10 = FVar9.Value;
        *(uint *)&pUVar22[6].field_0x14 = uVar8;
        *(undefined8 *)&pUVar22[6].field_0x18 = uVar4;
        *(undefined8 *)&pUVar22[6].field_0x20 = uVar5;
      }
      else {
        pFVar21 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)&pUVar22[6].field_0x18);
        if ((pFVar21->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) goto LAB_14ca2096d;
      }
      pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      if (*(longlong *)&pUVar22[9].field_0x24 == 0) {
LAB_14ca209bf:
        pFVar19 = FNiagaraConstants::GetAttributeDefaultBinding
                            (&local_a8,
                             (FNiagaraVariableBase *)&INiagaraModule::Particles_VisibilityTag);
        FVar7.Value = (pFVar19->RootName).ComparisonIndex.Value;
        uVar6 = (pFVar19->RootName).Number;
        FVar9.Value = (pFVar19->ParamMapVariable).Name.ComparisonIndex.Value;
        uVar8 = (pFVar19->ParamMapVariable).Name.Number;
        uVar4 = *(undefined8 *)&(pFVar19->ParamMapVariable).TypeDefHandle;
        uVar5 = *(undefined8 *)&(pFVar19->DataSetName).Number;
        pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
        *(uint *)&pUVar22[9].field_0x10 = FVar7.Value;
        *(uint *)&pUVar22[9].field_0x14 = uVar6;
        *(uint *)&pUVar22[9].field_0x18 = FVar9.Value;
        *(uint *)&pUVar22[9].field_0x1c = uVar8;
        *(undefined8 *)&pUVar22[9].field_0x20 = uVar4;
        *(undefined8 *)(pUVar22 + 10) = uVar5;
      }
      else {
        pFVar21 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)&pUVar22[9].field_0x20);
        if ((pFVar21->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) goto LAB_14ca209bf;
      }
      pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      if (*(longlong *)&pUVar22[5].field_0x24 == 0) {
LAB_14ca20a15:
        FVar10.Data = Particles_GeoCacheRotation.VarData.AllocatorInstance.Data;
        sVar26 = (size_t)Particles_GeoCacheRotation.VarData.ArrayNum;
        local_244._0_8_ = 0;
        local_244._s_0.Z = 0.0;
        local_238._padding_ = Particles_GeoCacheRotation._padding_;
        local_238._padding_._0_4_ = (undefined4)Particles_GeoCacheRotation._padding_;
        local_238.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_238.VarData.ArrayNum = Particles_GeoCacheRotation.VarData.ArrayNum;
        if (Particles_GeoCacheRotation.VarData.ArrayNum == 0) {
          local_238.VarData.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,Particles_GeoCacheRotation.VarData.ArrayNum,0,
                     &local_238.VarData.AllocatorInstance,
                     Particles_GeoCacheRotation.VarData.ArrayNum,&local_238.VarData.ArrayMax);
          memcpy(local_238.VarData.AllocatorInstance.Data,FVar10.Data,sVar26);
        }
        pFVar19 = CreateDefaultBinding<UE::Math::TVector<float>_>
                            (local_88,&local_238,(TVector<float> *)&local_244._s_0);
        FVar7.Value = (pFVar19->RootName).ComparisonIndex.Value;
        uVar6 = (pFVar19->RootName).Number;
        FVar9.Value = (pFVar19->ParamMapVariable).Name.ComparisonIndex.Value;
        uVar8 = (pFVar19->ParamMapVariable).Name.Number;
        uVar4 = *(undefined8 *)&(pFVar19->ParamMapVariable).TypeDefHandle;
        uVar5 = *(undefined8 *)&(pFVar19->DataSetName).Number;
        pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
        *(uint *)&pUVar22[5].field_0x10 = FVar7.Value;
        *(uint *)&pUVar22[5].field_0x14 = uVar6;
        *(uint *)&pUVar22[5].field_0x18 = FVar9.Value;
        *(uint *)&pUVar22[5].field_0x1c = uVar8;
        *(undefined8 *)&pUVar22[5].field_0x20 = uVar4;
        *(undefined8 *)(pUVar22 + 6) = uVar5;
      }
      else {
        pFVar21 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)&pUVar22[5].field_0x20);
        if ((pFVar21->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) goto LAB_14ca20a15;
      }
      pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      if (*(longlong *)&pUVar22[7].field_0x14 == 0) {
LAB_14ca20afb:
        FVar10.Data = Particles_Age.VarData.AllocatorInstance.Data;
        sVar26 = (size_t)Particles_Age.VarData.ArrayNum;
        local_res20[0] = 0;
        local_370 = (undefined1  [8])Particles_Age._padding_;
        local_368[0].RegisteredTypeIndex = (int)Particles_Age._padding_;
        local_360.Data = (FScriptContainerElement *)0x0;
        local_358 = Particles_Age.VarData.ArrayNum;
        if (Particles_Age.VarData.ArrayNum == 0) {
          local_354 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,Particles_Age.VarData.ArrayNum,0,&local_360,Particles_Age.VarData.ArrayNum,
                     &local_354);
          memcpy(local_360.Data,FVar10.Data,sVar26);
        }
        pFVar21 = FNiagaraTypeDefinitionHandle::Resolve(local_368);
        iVar17 = FNiagaraTypeDefinition::GetSize(pFVar21);
        if (iVar17 != 4) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("sizeof(T) == TypeDefHandle->GetSize()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                              ,0x5db,L"");
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FNiagaraVariable::AllocateData((FNiagaraVariable *)local_370);
        memcpy(local_360.Data,local_res20,(longlong)local_358);
        local_2d0.RootName.ComparisonIndex.Value = 0;
        local_2d0.RootName.Number = 0;
        local_2d0.ParamMapVariable.Name.ComparisonIndex.Value = 0;
        local_2d0.ParamMapVariable.Name.Number = 0;
        local_2d0.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex =
             FNiagaraTypeDefinitionHandle::Register
                       (&local_2d0.ParamMapVariable.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
        local_2d0.DataSetName.ComparisonIndex.Value = 0;
        local_2d0.DataSetName.Number = 0;
        local_2d0._29_1_ = local_2d0._29_1_ & 0xfe | 2;
        local_2d0.BindingSourceMode.Value = '\0';
        FNiagaraVariableAttributeBinding::Setup
                  (&local_2d0,(FNiagaraVariableBase *)local_370,(FNiagaraVariable *)local_370,
                   Particles);
        if (local_360.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_360.Data);
        }
        FVar13 = local_2d0.ParamMapVariable.Name;
        FVar11 = local_2d0.RootName;
        uVar4 = CONCAT44(local_2d0.DataSetName.ComparisonIndex.Value,
                         local_2d0.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex);
        uVar5 = CONCAT26(local_2d0._30_2_,
                         CONCAT15(local_2d0._29_1_,
                                  CONCAT14(local_2d0.BindingSourceMode.Value,
                                           local_2d0.DataSetName.Number)));
        pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
        FVar14 = local_2d0.ParamMapVariable.Name;
        FVar12 = local_2d0.RootName;
        local_2d0.RootName.ComparisonIndex = FVar11.ComparisonIndex.Value;
        local_2d0.RootName.Number = FVar11.Number;
        *(uint *)&pUVar22[7].field_0x0 = local_2d0.RootName.ComparisonIndex.Value;
        *(uint *)&pUVar22[7].field_0x4 = local_2d0.RootName.Number;
        local_2d0.ParamMapVariable.Name.ComparisonIndex = FVar13.ComparisonIndex.Value;
        local_2d0.ParamMapVariable.Name.Number = FVar13.Number;
        *(uint *)&pUVar22[7].field_0x8 = local_2d0.ParamMapVariable.Name.ComparisonIndex.Value;
        *(uint *)&pUVar22[7].field_0xc = local_2d0.ParamMapVariable.Name.Number;
        *(undefined8 *)&pUVar22[7].field_0x10 = uVar4;
        *(undefined8 *)&pUVar22[7].field_0x18 = uVar5;
        local_2d0.RootName = FVar12;
        local_2d0.ParamMapVariable.Name = FVar14;
      }
      else {
        pFVar21 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)&pUVar22[7].field_0x10);
        if ((pFVar21->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) goto LAB_14ca20afb;
      }
      pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      if (*(longlong *)&pUVar22[8].field_0xc == 0) {
LAB_14ca20c66:
        FVar10.Data = Particles_GeoCacheIsEnabled.VarData.AllocatorInstance.Data;
        sVar26 = (size_t)Particles_GeoCacheIsEnabled.VarData.ArrayNum;
        local_2b0 = (undefined1  [8])Particles_GeoCacheIsEnabled._padding_;
        local_2a8[0].RegisteredTypeIndex = (int)Particles_GeoCacheIsEnabled._padding_;
        local_2a0.Data = (FScriptContainerElement *)0x0;
        local_298 = Particles_GeoCacheIsEnabled.VarData.ArrayNum;
        if (Particles_GeoCacheIsEnabled.VarData.ArrayNum == 0) {
          local_294 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,Particles_GeoCacheIsEnabled.VarData.ArrayNum,0,&local_2a0,
                     Particles_GeoCacheIsEnabled.VarData.ArrayNum,&local_294);
          memcpy(local_2a0.Data,FVar10.Data,sVar26);
        }
        pFVar21 = FNiagaraTypeDefinitionHandle::Resolve(local_2a8);
        if (((TObjectPtr<UObject>_u_0)(pFVar21->ClassStructOrEnum).field0_0x0.DebugPtr !=
             FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0) ||
           (pFVar21->UnderlyingType != FNiagaraTypeDefinition::BoolDef.UnderlyingType)) {
          bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("TypeDefHandle.IsSameBase(FNiagaraTypeDefinition::GetBoolDef())",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                              ,0x67a,L"");
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        FNiagaraVariable::AllocateData((FNiagaraVariable *)local_2b0);
        *(undefined4 *)local_2a0.Data = 0;
        local_290.RootName.ComparisonIndex.Value = 0;
        local_290.RootName.Number = 0;
        local_290.ParamMapVariable.Name.ComparisonIndex.Value = 0;
        local_290.ParamMapVariable.Name.Number = 0;
        local_290.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex =
             FNiagaraTypeDefinitionHandle::Register
                       (&local_290.ParamMapVariable.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
        local_290.DataSetName.ComparisonIndex.Value = 0;
        local_290.DataSetName.Number = 0;
        local_290._29_1_ = local_290._29_1_ & 0xfe | 2;
        local_290.BindingSourceMode.Value = '\0';
        FNiagaraVariableAttributeBinding::Setup
                  (&local_290,(FNiagaraVariableBase *)local_2b0,(FNiagaraVariable *)local_2b0,
                   Particles);
        if (local_2a0.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_2a0.Data);
        }
        FVar13 = local_290.ParamMapVariable.Name;
        FVar11 = local_290.RootName;
        uVar4 = CONCAT44(local_290.DataSetName.ComparisonIndex.Value,
                         local_290.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex);
        uVar5 = CONCAT26(local_290._30_2_,
                         CONCAT15(local_290._29_1_,
                                  CONCAT14(local_290.BindingSourceMode.Value,
                                           local_290.DataSetName.Number)));
        pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
        FVar14 = local_290.ParamMapVariable.Name;
        FVar12 = local_290.RootName;
        local_290.RootName.ComparisonIndex = FVar11.ComparisonIndex.Value;
        local_290.RootName.Number = FVar11.Number;
        *(uint *)&pUVar22[7].field_0x20 = local_290.RootName.ComparisonIndex.Value;
        *(uint *)&pUVar22[7].field_0x24 = local_290.RootName.Number;
        local_290.ParamMapVariable.Name.ComparisonIndex = FVar13.ComparisonIndex.Value;
        local_290.ParamMapVariable.Name.Number = FVar13.Number;
        *(uint *)&pUVar22[8].field_0x0 = local_290.ParamMapVariable.Name.ComparisonIndex.Value;
        *(uint *)&pUVar22[8].field_0x4 = local_290.ParamMapVariable.Name.Number;
        *(undefined8 *)&pUVar22[8].field_0x8 = uVar4;
        *(undefined8 *)&pUVar22[8].field_0x10 = uVar5;
        local_290.RootName = FVar12;
        local_290.ParamMapVariable.Name = FVar14;
      }
      else {
        pFVar21 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)&pUVar22[8].field_0x8);
        if ((pFVar21->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0) goto LAB_14ca20c66;
      }
      pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      if (*(longlong *)&pUVar22[9].field_0x4 != 0) {
        pFVar21 = FNiagaraTypeDefinitionHandle::Resolve
                            ((FNiagaraTypeDefinitionHandle *)(pUVar22 + 9));
        if ((pFVar21->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) goto LAB_14ca20ef7;
      }
      FVar10.Data = Particles_ArrayIndex.VarData.AllocatorInstance.Data;
      sVar26 = (size_t)Particles_ArrayIndex.VarData.ArrayNum;
      local_378[0] = 0;
      local_350 = (undefined1  [8])Particles_ArrayIndex._padding_;
      local_348[0].RegisteredTypeIndex = (int)Particles_ArrayIndex._padding_;
      local_340.Data = (FScriptContainerElement *)0x0;
      local_338 = Particles_ArrayIndex.VarData.ArrayNum;
      if (Particles_ArrayIndex.VarData.ArrayNum == 0) {
        local_334 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,Particles_ArrayIndex.VarData.ArrayNum,0,&local_340,
                   Particles_ArrayIndex.VarData.ArrayNum,&local_334);
        memcpy(local_340.Data,FVar10.Data,sVar26);
      }
      pFVar21 = FNiagaraTypeDefinitionHandle::Resolve(local_348);
      iVar17 = FNiagaraTypeDefinition::GetSize(pFVar21);
      if (iVar17 != 4) {
        bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("sizeof(T) == TypeDefHandle->GetSize()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                            ,0x5db,L"");
        if (bVar15) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      FNiagaraVariable::AllocateData((FNiagaraVariable *)local_350);
      memcpy(local_340.Data,local_378,(longlong)local_338);
      local_270.RootName.ComparisonIndex.Value = 0;
      local_270.RootName.Number = 0;
      local_270.ParamMapVariable.Name.ComparisonIndex.Value = 0;
      local_270.ParamMapVariable.Name.Number = 0;
      local_270.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register
                     (&local_270.ParamMapVariable.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
      local_270.DataSetName.ComparisonIndex.Value = 0;
      local_270.DataSetName.Number = 0;
      local_270._29_1_ = local_270._29_1_ & 0xfe | 2;
      local_270.BindingSourceMode.Value = '\0';
      FNiagaraVariableAttributeBinding::Setup
                (&local_270,(FNiagaraVariableBase *)local_350,(FNiagaraVariable *)local_350,
                 Particles);
      if (local_340.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_340.Data);
      }
      FVar13 = local_270.ParamMapVariable.Name;
      FVar11 = local_270.RootName;
      uVar4 = CONCAT44(local_270.DataSetName.ComparisonIndex.Value,
                       local_270.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex);
      uVar5 = CONCAT26(local_270._30_2_,
                       CONCAT15(local_270._29_1_,
                                CONCAT14(local_270.BindingSourceMode.Value,
                                         local_270.DataSetName.Number)));
      pUVar22 = FWeakObjectPtr::Get((FWeakObjectPtr *)this.Data);
      FVar14 = local_270.ParamMapVariable.Name;
      FVar12 = local_270.RootName;
      local_270.RootName.ComparisonIndex = FVar11.ComparisonIndex.Value;
      local_270.RootName.Number = FVar11.Number;
      *(uint *)&pUVar22[8].field_0x18 = local_270.RootName.ComparisonIndex.Value;
      *(uint *)&pUVar22[8].field_0x1c = local_270.RootName.Number;
      local_270.ParamMapVariable.Name.ComparisonIndex = FVar13.ComparisonIndex.Value;
      local_270.ParamMapVariable.Name.Number = FVar13.Number;
      *(uint *)&pUVar22[8].field_0x20 = local_270.ParamMapVariable.Name.ComparisonIndex.Value;
      *(uint *)&pUVar22[8].field_0x24 = local_270.ParamMapVariable.Name.Number;
      *(undefined8 *)(pUVar22 + 9) = uVar4;
      *(undefined8 *)&pUVar22[9].field_0x8 = uVar5;
      local_270.RootName = FVar12;
      local_270.ParamMapVariable.Name = FVar14;
    }
LAB_14ca20ef7:
    uVar24 = (ulonglong)(uint)GeometryCacheRendererPropertiesToDeferredInit.ArrayNum;
    this.Data = this.Data + 8;
  } while( true );
}

// InitDefaultAttributes @ 14ca21170

void __cdecl UNiagaraGeometryCacheRendererProperties::InitDefaultAttributes(void)

{
  FName FVar1;
  FName FVar2;
  ForAnyElementType FVar3;
  int iVar4;
  int iVar5;
  FNiagaraTypeDefinition *pFVar6;
  int iVar7;
  FName local_res8;
  FNiagaraTypeDefinitionHandle local_20 [2];
  FScriptContainerElement *local_18;
  undefined8 local_10;
  
  if ((Particles_GeoCacheRotation._padding_ == 0) ||
     (pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&Particles_GeoCacheRotation._padding_),
     FVar3 = Particles_GeoCacheRotation.VarData.AllocatorInstance,
     iVar7 = Particles_GeoCacheRotation.VarData.ArrayNum,
     iVar4 = Particles_GeoCacheRotation.VarData.ArrayMax,
     (pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
    ::FName::FName(&local_res8,L"Particles.GeoCacheRotation");
    FVar1 = local_res8;
    Particles_GeoCacheRotation._padding_._0_4_ =
         FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::Vec3Def);
    FVar2 = local_res8;
    local_18 = (FScriptContainerElement *)0x0;
    local_10 = 0;
    local_res8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_res8.Number = FVar1.Number;
    Particles_GeoCacheRotation._padding_._0_4_ = local_res8.ComparisonIndex.Value;
    Particles_GeoCacheRotation._padding_._4_4_ = local_res8.Number;
    FVar3.Data = local_18;
    iVar7 = 0;
    iVar4 = 0;
    local_res8 = FVar2;
    local_20[0].RegisteredTypeIndex = (int)Particles_GeoCacheRotation._padding_;
    if (Particles_GeoCacheRotation.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
    {
      FMemory::Free(Particles_GeoCacheRotation.VarData.AllocatorInstance.Data);
      FVar3.Data = local_18;
      iVar7 = (int)local_10;
      iVar4 = local_10._4_4_;
    }
  }
  Particles_GeoCacheRotation.VarData.ArrayMax = iVar4;
  Particles_GeoCacheRotation.VarData.ArrayNum = iVar7;
  Particles_GeoCacheRotation.VarData.AllocatorInstance.Data = FVar3.Data;
  iVar7 = 0;
  if ((Particles_Age._padding_ == 0) ||
     (pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&Particles_Age._padding_),
     FVar3 = Particles_Age.VarData.AllocatorInstance, iVar4 = Particles_Age.VarData.ArrayNum,
     iVar5 = Particles_Age.VarData.ArrayMax,
     (pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
    ::FName::FName(&local_res8,L"Particles.Age");
    FVar1 = local_res8;
    Particles_Age._padding_._0_4_ =
         FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::FloatDef);
    FVar2 = local_res8;
    local_18 = (FScriptContainerElement *)0x0;
    local_10 = 0;
    local_res8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_res8.Number = FVar1.Number;
    Particles_Age._padding_._0_4_ = local_res8.ComparisonIndex.Value;
    Particles_Age._padding_._4_4_ = local_res8.Number;
    FVar3.Data = local_18;
    iVar4 = 0;
    iVar5 = iVar7;
    local_res8 = FVar2;
    local_20[0].RegisteredTypeIndex = (int)Particles_Age._padding_;
    if (Particles_Age.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(Particles_Age.VarData.AllocatorInstance.Data);
      FVar3.Data = local_18;
      iVar4 = (int)local_10;
      iVar5 = local_10._4_4_;
    }
  }
  Particles_Age.VarData.ArrayMax = iVar5;
  Particles_Age.VarData.ArrayNum = iVar4;
  Particles_Age.VarData.AllocatorInstance.Data = FVar3.Data;
  if ((Particles_GeoCacheIsEnabled._padding_ == 0) ||
     (pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&Particles_GeoCacheIsEnabled._padding_),
     FVar3 = Particles_GeoCacheIsEnabled.VarData.AllocatorInstance,
     iVar4 = Particles_GeoCacheIsEnabled.VarData.ArrayNum,
     iVar5 = Particles_GeoCacheIsEnabled.VarData.ArrayMax,
     (pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
    ::FName::FName(&local_res8,L"Particles.GeoCacheIsEnabled");
    FVar1 = local_res8;
    Particles_GeoCacheIsEnabled._padding_._0_4_ =
         FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::BoolDef);
    FVar2 = local_res8;
    local_18 = (FScriptContainerElement *)0x0;
    local_10 = 0;
    local_res8.ComparisonIndex = FVar1.ComparisonIndex.Value;
    local_res8.Number = FVar1.Number;
    Particles_GeoCacheIsEnabled._padding_._0_4_ = local_res8.ComparisonIndex.Value;
    Particles_GeoCacheIsEnabled._padding_._4_4_ = local_res8.Number;
    FVar3.Data = local_18;
    iVar4 = iVar7;
    iVar5 = iVar7;
    local_res8 = FVar2;
    local_20[0].RegisteredTypeIndex = (int)Particles_GeoCacheIsEnabled._padding_;
    if (Particles_GeoCacheIsEnabled.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0
       ) {
      FMemory::Free(Particles_GeoCacheIsEnabled.VarData.AllocatorInstance.Data);
      FVar3.Data = local_18;
      iVar4 = (int)local_10;
      iVar5 = local_10._4_4_;
    }
  }
  Particles_GeoCacheIsEnabled.VarData.ArrayMax = iVar5;
  Particles_GeoCacheIsEnabled.VarData.ArrayNum = iVar4;
  Particles_GeoCacheIsEnabled.VarData.AllocatorInstance.Data = FVar3.Data;
  if ((Particles_ArrayIndex._padding_ == 0) ||
     (pFVar6 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&Particles_ArrayIndex._padding_),
     FVar3 = Particles_ArrayIndex.VarData.AllocatorInstance,
     iVar4 = Particles_ArrayIndex.VarData.ArrayNum, iVar5 = Particles_ArrayIndex.VarData.ArrayMax,
     (pFVar6->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
    ::FName::FName(&local_res8,L"Particles.GeoCacheArrayIndex");
    Particles_ArrayIndex._padding_._0_4_ =
         FNiagaraTypeDefinitionHandle::Register(local_20,&FNiagaraTypeDefinition::IntDef);
    local_18 = (FScriptContainerElement *)0x0;
    local_10 = 0;
    Particles_ArrayIndex._padding_._0_4_ = local_res8.ComparisonIndex.Value;
    Particles_ArrayIndex._padding_._4_4_ = local_res8.Number;
    FVar3.Data = (FScriptContainerElement *)0x0;
    iVar4 = iVar7;
    iVar5 = 0;
    if (Particles_ArrayIndex.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      local_20[0].RegisteredTypeIndex = (int)Particles_ArrayIndex._padding_;
      FMemory::Free(Particles_ArrayIndex.VarData.AllocatorInstance.Data);
      FVar3.Data = local_18;
      iVar4 = (int)local_10;
      iVar5 = local_10._4_4_;
    }
  }
  Particles_ArrayIndex.VarData.ArrayMax = iVar5;
  Particles_ArrayIndex.VarData.ArrayNum = iVar4;
  Particles_ArrayIndex.VarData.AllocatorInstance.Data = FVar3.Data;
  return;
}

// IsSimTargetSupported @ 14ca23b00

bool __thiscall
UNiagaraGeometryCacheRendererProperties::IsSimTargetSupported
          (UNiagaraGeometryCacheRendererProperties *this,ENiagaraSimTarget param_1)

{
  return param_1 == CPUSim;
}

// NeedsMIDsForMaterials @ 14ca24230

bool __thiscall
UNiagaraGeometryCacheRendererProperties::NeedsMIDsForMaterials
          (UNiagaraGeometryCacheRendererProperties *this)

{
  if (((((this->MaterialParameters).AttributeBindings.ArrayNum < 1) &&
       ((this->MaterialParameters).ScalarParameters.ArrayNum < 1)) &&
      ((this->MaterialParameters).VectorParameters.ArrayNum < 1)) &&
     ((this->MaterialParameters).TextureParameters.ArrayNum < 1)) {
    return false;
  }
  return true;
}

// NeedsSystemCompletion @ 14ca24260

bool __thiscall
UNiagaraGeometryCacheRendererProperties::NeedsSystemCompletion
          (UNiagaraGeometryCacheRendererProperties *this)

{
  return true;
}

// NeedsSystemPostTick @ 14ca24270

bool __thiscall
UNiagaraGeometryCacheRendererProperties::NeedsSystemPostTick
          (UNiagaraGeometryCacheRendererProperties *this)

{
  return true;
}

// PopulateRequiredBindings @ 14ca24770

bool __thiscall
UNiagaraGeometryCacheRendererProperties::PopulateRequiredBindings
          (UNiagaraGeometryCacheRendererProperties *this,FNiagaraParameterStore *param_1)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  void *_Src;
  code *pcVar6;
  bool bVar7;
  FNiagaraTypeDefinition *pFVar8;
  FNiagaraVariableBase *pFVar9;
  longlong *plVar10;
  FScriptContainerElement *pFVar11;
  FNiagaraMaterialAttributeBinding *this_00;
  FNiagaraMaterialAttributeBinding *pFVar12;
  undefined1 local_res8 [8];
  FName local_58;
  FNiagaraTypeDefinitionHandle local_50 [2];
  ForAnyElementType local_48;
  undefined8 local_40;
  
  bVar7 = UNiagaraRendererProperties::PopulateRequiredBindings
                    ((UNiagaraRendererProperties *)this,param_1);
  plVar10 = (longlong *)this->_padding_;
  iVar3 = (int)this->_padding_;
  plVar1 = plVar10 + iVar3;
  while( true ) {
    if ((int)this->_padding_ != iVar3) {
      `TCheckedPointerIterator<FNiagaraVariableAttributeBinding_const_*,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar10 == plVar1) break;
    lVar5 = *plVar10;
    if ((lVar5 != 0) && ((*(byte *)(lVar5 + 0x1d) & 3) == 1)) {
      local_50[0].RegisteredTypeIndex = *(int *)(lVar5 + 0x10);
      local_58 = *(FName *)(lVar5 + 8);
      local_48.Data = (FScriptContainerElement *)0x0;
      local_40 = 0;
      (**(code **)(param_1->_padding_ + 0x10))(param_1);
      if (local_48.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data);
      }
      bVar7 = true;
    }
    plVar10 = plVar10 + 1;
  }
  iVar3 = (this->GeometryCaches).ArrayNum;
  pFVar11 = (this->GeometryCaches).AllocatorInstance.Data;
  pFVar2 = pFVar11 + (longlong)iVar3 * 0x48;
  while( true ) {
    if ((this->GeometryCaches).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FNiagaraGeometryCacheReference,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar11 == pFVar2) break;
    local_50[0].RegisteredTypeIndex = *(int *)(pFVar11 + 0x10);
    iVar4 = *(int *)(pFVar11 + 0x20);
    local_58 = *(FName *)(pFVar11 + 8);
    _Src = *(void **)(pFVar11 + 0x18);
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = CONCAT44(local_40._4_4_,iVar4);
    if (iVar4 == 0) {
      local_40 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,iVar4,0,&local_48,iVar4,(int *)((longlong)&local_40 + 4));
      memcpy(local_48.Data,_Src,(longlong)iVar4);
    }
    if (local_58 != (FName)0x0) {
      pFVar8 = FNiagaraTypeDefinitionHandle::Resolve(local_50);
      if ((pFVar8->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) {
        (**(code **)(param_1->_padding_ + 0x10))(param_1,&local_58,0,1,0);
        bVar7 = true;
      }
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    pFVar11 = pFVar11 + 0x48;
  }
  iVar3 = (this->MaterialParameters).AttributeBindings.ArrayNum;
  this_00 = (FNiagaraMaterialAttributeBinding *)
            (this->MaterialParameters).AttributeBindings.AllocatorInstance.Data;
  pFVar12 = this_00 + iVar3;
  while( true ) {
    if ((this->MaterialParameters).AttributeBindings.ArrayNum != iVar3) {
      `TCheckedPointerIterator<FNiagaraMaterialAttributeBinding,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar12) break;
    pcVar6 = *(code **)(param_1->_padding_ + 0x10);
    pFVar9 = FNiagaraMaterialAttributeBinding::GetParamMapBindableVariable(this_00);
    local_58 = pFVar9->Name;
    local_50[0].RegisteredTypeIndex = (pFVar9->TypeDefHandle).RegisteredTypeIndex;
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = 0;
    (*pcVar6)(param_1,&local_58,0,1,0);
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
    bVar7 = true;
    this_00 = this_00 + 1;
  }
  return bVar7;
}

// PostInitProperties @ 14ca24a00

void __thiscall
UNiagaraGeometryCacheRendererProperties::PostInitProperties
          (UNiagaraGeometryCacheRendererProperties *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  FName FVar3;
  undefined8 uVar4;
  bool bVar5;
  FModuleManager *this_00;
  FName *pFVar6;
  FNiagaraTypeDefinition *pFVar7;
  FNiagaraVariableAttributeBinding *pFVar8;
  FNiagaraVariable *pFVar9;
  longlong lVar10;
  float local_res8 [2];
  int local_res10 [2];
  UNiagaraGeometryCacheRendererProperties *local_res18;
  FName local_res20;
  FWeakObjectPtr local_1a8;
  FNiagaraVariableAttributeBinding local_1a0;
  TVector<float>_u_0 local_180;
  FNiagaraVariableAttributeBinding local_174;
  FNiagaraVariableAttributeBinding local_154;
  FNiagaraVariableAttributeBinding local_134;
  FNiagaraVariable local_110;
  FNiagaraVariableAttributeBinding local_f0;
  FNiagaraVariable local_d0;
  FNiagaraVariableAttributeBinding local_b0;
  FNiagaraVariable local_90;
  FNiagaraVariable local_70;
  FNiagaraVariableAttributeBinding local_50;
  
  UNiagaraRendererProperties::PostInitProperties((UNiagaraRendererProperties *)this);
  if ((this->_padding_ & 0x10) == 0) {
    this_00 = FModuleManager::Get();
    pFVar6 = ::FName::FName(&local_res20,"Niagara");
    bVar5 = FModuleManager::IsModuleLoaded(this_00,*pFVar6);
    if (!bVar5) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      local_1a8.ObjectIndex = 0;
      local_1a8.ObjectSerialNumber = 0;
      local_res18 = this;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)this);
      }
      FWeakObjectPtr::operator=(&local_1a8,(FObjectPtr)&local_res18);
      if (((GeometryCacheRendererPropertiesToDeferredInit.AllocatorInstance.Data <= &local_1a8) &&
          (&local_1a8 <
           (FWeakObjectPtr *)
           (GeometryCacheRendererPropertiesToDeferredInit.AllocatorInstance.Data +
           (longlong)GeometryCacheRendererPropertiesToDeferredInit.ArrayMax * 8))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (GeometryCacheRendererPropertiesToDeferredInit.ArrayNum ==
          GeometryCacheRendererPropertiesToDeferredInit.ArrayMax) {
        GeometryCacheRendererPropertiesToDeferredInit.ArrayNum =
             UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&GeometryCacheRendererPropertiesToDeferredInit.AllocatorInstance,
                        &GeometryCacheRendererPropertiesToDeferredInit.ArrayMax);
      }
      lVar10 = (longlong)GeometryCacheRendererPropertiesToDeferredInit.ArrayNum;
      GeometryCacheRendererPropertiesToDeferredInit.ArrayNum =
           GeometryCacheRendererPropertiesToDeferredInit.ArrayNum + 1;
      *(FWeakObjectPtr *)
       (GeometryCacheRendererPropertiesToDeferredInit.AllocatorInstance.Data + lVar10 * 8) =
           local_1a8;
      return;
    }
    InitDefaultAttributes();
    if (((this->PositionBinding).DataSetName == (FName)0x0) ||
       (pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                           (&(this->PositionBinding).ParamMapVariable.TypeDefHandle),
       (pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
      pFVar8 = FNiagaraConstants::GetAttributeDefaultBinding
                         (&local_174,(FNiagaraVariableBase *)&INiagaraModule::Particles_Position);
      FVar3 = (pFVar8->ParamMapVariable).Name;
      (this->PositionBinding).RootName = pFVar8->RootName;
      (this->PositionBinding).ParamMapVariable.Name = FVar3;
      uVar4 = *(undefined8 *)&(pFVar8->DataSetName).Number;
      *(undefined8 *)&(this->PositionBinding).ParamMapVariable.TypeDefHandle =
           *(undefined8 *)&(pFVar8->ParamMapVariable).TypeDefHandle;
      *(undefined8 *)&(this->PositionBinding).DataSetName.Number = uVar4;
    }
    if (((this->ScaleBinding).DataSetName == (FName)0x0) ||
       (pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                           (&(this->ScaleBinding).ParamMapVariable.TypeDefHandle),
       (pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
      pFVar8 = FNiagaraConstants::GetAttributeDefaultBinding
                         (&local_154,(FNiagaraVariableBase *)&INiagaraModule::Particles_Scale);
      FVar3 = (pFVar8->ParamMapVariable).Name;
      (this->ScaleBinding).RootName = pFVar8->RootName;
      (this->ScaleBinding).ParamMapVariable.Name = FVar3;
      uVar4 = *(undefined8 *)&(pFVar8->DataSetName).Number;
      *(undefined8 *)&(this->ScaleBinding).ParamMapVariable.TypeDefHandle =
           *(undefined8 *)&(pFVar8->ParamMapVariable).TypeDefHandle;
      *(undefined8 *)&(this->ScaleBinding).DataSetName.Number = uVar4;
    }
    if (((this->RendererVisibilityTagBinding).DataSetName == (FName)0x0) ||
       (pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                           (&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle),
       (pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
      pFVar8 = FNiagaraConstants::GetAttributeDefaultBinding
                         (&local_134,
                          (FNiagaraVariableBase *)&INiagaraModule::Particles_VisibilityTag);
      FVar3 = (pFVar8->ParamMapVariable).Name;
      (this->RendererVisibilityTagBinding).RootName = pFVar8->RootName;
      (this->RendererVisibilityTagBinding).ParamMapVariable.Name = FVar3;
      uVar4 = *(undefined8 *)&(pFVar8->DataSetName).Number;
      *(undefined8 *)&(this->RendererVisibilityTagBinding).ParamMapVariable.TypeDefHandle =
           *(undefined8 *)&(pFVar8->ParamMapVariable).TypeDefHandle;
      *(undefined8 *)&(this->RendererVisibilityTagBinding).DataSetName.Number = uVar4;
    }
    if (((this->RotationBinding).DataSetName == (FName)0x0) ||
       (pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                           (&(this->RotationBinding).ParamMapVariable.TypeDefHandle),
       (pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
      local_180._0_8_ = 0;
      local_180._s_0.Z = 0.0;
      pFVar9 = FNiagaraVariable::FNiagaraVariable(&local_110,&Particles_GeoCacheRotation);
      pFVar8 = CreateDefaultBinding<UE::Math::TVector<float>_>
                         (&local_f0,pFVar9,(TVector<float> *)&local_180._s_0);
      FVar3 = (pFVar8->ParamMapVariable).Name;
      (this->RotationBinding).RootName = pFVar8->RootName;
      (this->RotationBinding).ParamMapVariable.Name = FVar3;
      uVar4 = *(undefined8 *)&(pFVar8->DataSetName).Number;
      *(undefined8 *)&(this->RotationBinding).ParamMapVariable.TypeDefHandle =
           *(undefined8 *)&(pFVar8->ParamMapVariable).TypeDefHandle;
      *(undefined8 *)&(this->RotationBinding).DataSetName.Number = uVar4;
    }
    if (((this->ElapsedTimeBinding).DataSetName == (FName)0x0) ||
       (pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                           (&(this->ElapsedTimeBinding).ParamMapVariable.TypeDefHandle),
       (pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
      local_res8[0] = 0.0;
      pFVar9 = FNiagaraVariable::FNiagaraVariable(&local_d0,&Particles_Age);
      pFVar8 = CreateDefaultBinding<float>(&local_b0,pFVar9,local_res8);
      FVar3 = (pFVar8->ParamMapVariable).Name;
      (this->ElapsedTimeBinding).RootName = pFVar8->RootName;
      (this->ElapsedTimeBinding).ParamMapVariable.Name = FVar3;
      uVar4 = *(undefined8 *)&(pFVar8->DataSetName).Number;
      *(undefined8 *)&(this->ElapsedTimeBinding).ParamMapVariable.TypeDefHandle =
           *(undefined8 *)&(pFVar8->ParamMapVariable).TypeDefHandle;
      *(undefined8 *)&(this->ElapsedTimeBinding).DataSetName.Number = uVar4;
    }
    if (((this->EnabledBinding).DataSetName == (FName)0x0) ||
       (pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                           (&(this->EnabledBinding).ParamMapVariable.TypeDefHandle),
       (pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
      pFVar9 = FNiagaraVariable::FNiagaraVariable(&local_90,&Particles_GeoCacheIsEnabled);
      pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                         ((FNiagaraTypeDefinitionHandle *)&pFVar9->_padding_);
      if ((((TObjectPtr<UObject>_u_0)(pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr !=
            FNiagaraTypeDefinition::BoolDef.ClassStructOrEnum.field0_0x0) ||
          (pFVar7->UnderlyingType != FNiagaraTypeDefinition::BoolDef.UnderlyingType)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeDefHandle.IsSameBase(FNiagaraTypeDefinition::GetBoolDef())",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraTypes.h"
                             ,0x67a,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      FNiagaraVariable::AllocateData(pFVar9);
      *(undefined4 *)(pFVar9->VarData).AllocatorInstance.Data = 0;
      local_1a0.RootName.ComparisonIndex.Value = 0;
      local_1a0.RootName.Number = 0;
      local_1a0.ParamMapVariable.Name.ComparisonIndex.Value = 0;
      local_1a0.ParamMapVariable.Name.Number = 0;
      local_1a0.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex =
           FNiagaraTypeDefinitionHandle::Register
                     (&local_1a0.ParamMapVariable.TypeDefHandle,&FNiagaraTypeDefinition::Vec4Def);
      local_1a0.DataSetName.ComparisonIndex.Value = 0;
      local_1a0.DataSetName.Number = 0;
      local_1a0._29_1_ = local_1a0._29_1_ & 0xfe | 2;
      local_1a0.BindingSourceMode.Value = '\0';
      FNiagaraVariableAttributeBinding::Setup
                (&local_1a0,(FNiagaraVariableBase *)pFVar9,pFVar9,Particles);
      pFVar1 = (pFVar9->VarData).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this->EnabledBinding).RootName = local_1a0.RootName;
      (this->EnabledBinding).ParamMapVariable.Name = local_1a0.ParamMapVariable.Name;
      *(ulonglong *)&(this->EnabledBinding).ParamMapVariable.TypeDefHandle =
           CONCAT44(local_1a0.DataSetName.ComparisonIndex.Value,
                    local_1a0.ParamMapVariable.TypeDefHandle.RegisteredTypeIndex);
      *(ulonglong *)&(this->EnabledBinding).DataSetName.Number =
           CONCAT26(local_1a0._30_2_,
                    CONCAT15(local_1a0._29_1_,
                             CONCAT14(local_1a0.BindingSourceMode.Value,local_1a0.DataSetName.Number
                                     )));
    }
    if (((this->ArrayIndexBinding).DataSetName == (FName)0x0) ||
       (pFVar7 = FNiagaraTypeDefinitionHandle::Resolve
                           (&(this->ArrayIndexBinding).ParamMapVariable.TypeDefHandle),
       (pFVar7->ClassStructOrEnum).field0_0x0.DebugPtr == (UObject *)0x0)) {
      local_res10[0] = 0;
      pFVar9 = FNiagaraVariable::FNiagaraVariable(&local_70,&Particles_ArrayIndex);
      pFVar8 = CreateDefaultBinding<int>(&local_50,pFVar9,local_res10);
      FVar3 = (pFVar8->ParamMapVariable).Name;
      (this->ArrayIndexBinding).RootName = pFVar8->RootName;
      (this->ArrayIndexBinding).ParamMapVariable.Name = FVar3;
      uVar4 = *(undefined8 *)&(pFVar8->DataSetName).Number;
      *(undefined8 *)&(this->ArrayIndexBinding).ParamMapVariable.TypeDefHandle =
           *(undefined8 *)&(pFVar8->ParamMapVariable).TypeDefHandle;
      *(undefined8 *)&(this->ArrayIndexBinding).DataSetName.Number = uVar4;
    }
  }
  return;
}

// PostLoad @ 14ca24ef0

void __thiscall
UNiagaraGeometryCacheRendererProperties::PostLoad(UNiagaraGeometryCacheRendererProperties *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  
  UNiagaraRendererProperties::PostLoad((UNiagaraRendererProperties *)this);
  (**(code **)(this->_padding_ + 0x350))(this,0);
  FNiagaraRendererMaterialParameters::ConditionalPostLoad(&this->MaterialParameters);
  pFVar7 = (this->GeometryCaches).AllocatorInstance.Data;
  iVar2 = (this->GeometryCaches).ArrayNum;
  pFVar6 = pFVar7 + 0x40;
  pFVar1 = pFVar7 + (longlong)iVar2 * 0x48;
  while( true ) {
    if ((this->GeometryCaches).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraGeometryCacheReference,int,0>::operator!='::__l2::<lambda_1>
      ::operator()(local_res8);
    }
    if (pFVar7 == pFVar1) break;
    puVar4 = *(undefined8 **)(pFVar6 + -0x18);
    iVar3 = *(int *)(pFVar6 + -0x10);
    puVar5 = puVar4 + iVar3;
    while( true ) {
      if (*(int *)(pFVar6 + -0x10) != iVar3) {
        `TCheckedPointerIterator<TObjectPtr<UMaterialInterface>_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar4 == puVar5) break;
      if ((UObject *)*puVar4 != (UObject *)0x0) {
        UObject::ConditionalPostLoad((UObject *)*puVar4);
      }
      puVar4 = puVar4 + 1;
    }
    iVar3 = *(int *)pFVar6;
    puVar5 = *(undefined8 **)(pFVar6 + -8);
    puVar4 = puVar5 + (longlong)iVar3 * 2;
    while( true ) {
      if (*(int *)pFVar6 != iVar3) {
        `TCheckedPointerIterator<FNiagaraGeometryCacheMICOverride_const_,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (puVar5 == puVar4) break;
      if ((UObject *)*puVar5 != (UObject *)0x0) {
        UObject::ConditionalPostLoad((UObject *)*puVar5);
      }
      if ((UObject *)puVar5[1] != (UObject *)0x0) {
        UObject::ConditionalPostLoad((UObject *)puVar5[1]);
      }
      puVar5 = puVar5 + 2;
    }
    pFVar7 = pFVar7 + 0x48;
    pFVar6 = pFVar6 + 0x48;
  }
  return;
}

// ResolveGeometryCache @ 14ca29cf0

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

UGeometryCache * __cdecl
UNiagaraGeometryCacheRendererProperties::ResolveGeometryCache
          (FNiagaraGeometryCacheReference *param_1,FNiagaraEmitterInstance *param_2)

{
  uint uVar1;
  FScriptContainerElement *_Src;
  code *pcVar2;
  bool bVar3;
  FNiagaraTypeDefinition *pFVar4;
  uint *puVar5;
  UGeometryCache *pUVar6;
  UClass *pUVar7;
  uint uVar8;
  FObjectPtr_u_0 FVar9;
  size_t _Size;
  FObjectPtr_u_0 local_res8;
  longlong local_38;
  FNiagaraTypeDefinitionHandle local_30 [2];
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_20 = (param_1->GeometryCacheUserParamBinding).Parameter.VarData.ArrayNum;
  _Size = (size_t)local_20;
  local_38 = (param_1->GeometryCacheUserParamBinding).Parameter._padding_;
  local_30[0].RegisteredTypeIndex =
       (int)(param_1->GeometryCacheUserParamBinding).Parameter._padding_;
  _Src = (param_1->GeometryCacheUserParamBinding).Parameter.VarData.AllocatorInstance.Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  if (local_20 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_20,0,&local_28,local_20,&local_1c);
    memcpy(local_28.Data,_Src,_Size);
  }
  if (local_38 != 0) {
    pFVar4 = FNiagaraTypeDefinitionHandle::Resolve(local_30);
    if (((pFVar4->ClassStructOrEnum).field0_0x0.DebugPtr != (UObject *)0x0) &&
       (param_2 != (FNiagaraEmitterInstance *)0x0)) {
      puVar5 = (uint *)(**(code **)((param_2->RendererBindings)._padding_ + 0x58))
                                 (&param_2->RendererBindings,&local_38,0);
      if (puVar5 == (uint *)0x0) {
LAB_14ca29e41:
        local_res8.Handle = (UObject *)0x0;
      }
      else {
        uVar1 = *puVar5;
        if (((int)uVar1 < 0) || ((param_2->RendererBindings).UObjects.ArrayNum <= (int)uVar1))
        goto LAB_14ca29e41;
        uVar8 = 0;
        if ((int)uVar1 < (param_2->RendererBindings).UObjects.ArrayNum) {
          uVar8 = ~uVar1 >> 0x1f;
        }
        if (uVar8 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            pUVar6 = (UGeometryCache *)(*pcVar2)();
            return pUVar6;
          }
        }
        local_res8 = (FObjectPtr_u_0)
                     ((FObjectPtr_u_0 *)
                     ((param_2->RendererBindings).UObjects.AllocatorInstance.Data +
                     (longlong)(int)uVar1 * 8))->Handle;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          if ((UGeometryCache *)local_res8.Handle == (UGeometryCache *)0x0) goto LAB_14ca29e74;
          UE::GC::MarkAsReachable(local_res8.Handle);
        }
      }
      if ((UGeometryCache *)local_res8.Handle != (UGeometryCache *)0x0) {
        pUVar7 = UGeometryCache::StaticClass();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)&local_res8,pUVar7);
        if ((bVar3) &&
           (FVar9 = local_res8, (UGeometryCache *)local_res8.Handle != (UGeometryCache *)0x0))
        goto LAB_14ca29e77;
      }
    }
  }
LAB_14ca29e74:
  FVar9 = (FObjectPtr_u_0)(param_1->GeometryCache).field0_0x0.DebugPtr;
LAB_14ca29e77:
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  return (UGeometryCache *)FVar9.Handle;
}

// StaticRegisterNativesUNiagaraGeometryCacheRendererProperties @ 14ca2ba80

void __cdecl
UNiagaraGeometryCacheRendererProperties::
StaticRegisterNativesUNiagaraGeometryCacheRendererProperties(void)

{
  return;
}

// UpdateMICs @ 14ca2db90

void __thiscall
UNiagaraGeometryCacheRendererProperties::UpdateMICs(UNiagaraGeometryCacheRendererProperties *this)

{
  return;
}

// UpdateSourceModeDerivates @ 14ca2f230

void __thiscall
UNiagaraGeometryCacheRendererProperties::UpdateSourceModeDerivates
          (UNiagaraGeometryCacheRendererProperties *this,ENiagaraRendererSourceDataMode param_1,
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

