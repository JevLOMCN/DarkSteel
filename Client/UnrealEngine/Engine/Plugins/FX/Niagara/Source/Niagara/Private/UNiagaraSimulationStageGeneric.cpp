// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 8

// StaticClass @ 1493c4450

UClass * __cdecl UNiagaraSimulationStageGeneric::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimulationStageGeneric",
               &Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.InnerSingleton,
               StaticRegisterNativesUNiagaraSimulationStageGeneric,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraSimulationStageGeneric>,
               InternalVTableHelperCtorCaller<UNiagaraSimulationStageGeneric>,local_res8,
               UNiagaraSimulationStageBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.InnerSingleton;
}

// UNiagaraSimulationStageGeneric @ 1493cec00

UNiagaraSimulationStageGeneric * __thiscall
UNiagaraSimulationStageGeneric::UNiagaraSimulationStageGeneric
          (UNiagaraSimulationStageGeneric *this,FVTableHelper *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  
  UNiagaraMergeable::UNiagaraMergeable((UNiagaraMergeable *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraSimulationStageGeneric__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
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
  (this->NumIterations)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->NumIterations)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->NumIterations)._padding_ = iVar2;
  (this->NumIterations).DefaultValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NumIterations).DefaultValue.ArrayNum = 0;
  (this->NumIterations).DefaultValue.ArrayMax = 0;
  this->ExecuteBehavior = Always;
  (this->DataInterface).BoundVariable._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->DataInterface).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->DataInterface).BoundVariable._padding_ = iVar2;
  (this->DataInterface).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DataInterface).BoundVariable.VarData.ArrayNum = 0;
  (this->DataInterface).BoundVariable.VarData.ArrayMax = 0;
  (this->ParticleIterationStateBinding).RootName.ComparisonIndex = 0;
  (this->ParticleIterationStateBinding).RootName.Number = 0;
  (this->ParticleIterationStateBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->ParticleIterationStateBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->ParticleIterationStateBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->ParticleIterationStateBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->ParticleIterationStateBinding).bBindingExistsOnSource = '\0';
  (this->ParticleIterationStateBinding).bIsCachedParticleValue = '\x01';
  (this->ParticleIterationStateBinding).DataSetName.ComparisonIndex = 0;
  (this->ParticleIterationStateBinding).DataSetName.Number = 0;
  (this->ParticleIterationStateBinding).BindingSourceMode.Value = '\0';
  (this->ParticleIterationStateRange).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->OverrideGpuDispatchNumThreadsX)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->OverrideGpuDispatchNumThreadsX)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->OverrideGpuDispatchNumThreadsX)._padding_ = iVar2;
  (this->OverrideGpuDispatchNumThreadsX).DefaultValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OverrideGpuDispatchNumThreadsX).DefaultValue.ArrayNum = 0;
  (this->OverrideGpuDispatchNumThreadsX).DefaultValue.ArrayMax = 0;
  (this->OverrideGpuDispatchNumThreadsY)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->OverrideGpuDispatchNumThreadsY)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->OverrideGpuDispatchNumThreadsY)._padding_ = iVar2;
  (this->OverrideGpuDispatchNumThreadsY).DefaultValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OverrideGpuDispatchNumThreadsY).DefaultValue.ArrayNum = 0;
  (this->OverrideGpuDispatchNumThreadsY).DefaultValue.ArrayMax = 0;
  (this->OverrideGpuDispatchNumThreadsZ)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->OverrideGpuDispatchNumThreadsZ)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->OverrideGpuDispatchNumThreadsZ)._padding_ = iVar2;
  (this->OverrideGpuDispatchNumThreadsZ).DefaultValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OverrideGpuDispatchNumThreadsZ).DefaultValue.ArrayNum = 0;
  (this->OverrideGpuDispatchNumThreadsZ).DefaultValue.ArrayMax = 0;
  this->DirectDispatchType = OneD;
  this->DirectDispatchElementType = NumThreads;
  (this->ElementCountX)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->ElementCountX)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->ElementCountX)._padding_ = iVar2;
  (this->ElementCountX).DefaultValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementCountX).DefaultValue.ArrayNum = 0;
  (this->ElementCountX).DefaultValue.ArrayMax = 0;
  (this->ElementCountY)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->ElementCountY)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->ElementCountY)._padding_ = iVar2;
  (this->ElementCountY).DefaultValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementCountY).DefaultValue.ArrayNum = 0;
  (this->ElementCountY).DefaultValue.ArrayMax = 0;
  (this->ElementCountZ)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->ElementCountZ)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->ElementCountZ)._padding_ = iVar2;
  (this->ElementCountZ).DefaultValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementCountZ).DefaultValue.ArrayNum = 0;
  (this->ElementCountZ).DefaultValue.ArrayMax = 0;
  return this;
}

// UNiagaraSimulationStageGeneric @ 1493cee30

UNiagaraSimulationStageGeneric * __thiscall
UNiagaraSimulationStageGeneric::UNiagaraSimulationStageGeneric(UNiagaraSimulationStageGeneric *this)

{
  undefined1 *puVar1;
  int iVar2;
  
  UNiagaraMergeable::UNiagaraMergeable((UNiagaraMergeable *)this);
  *(uint *)&this->_padding_ = (uint)this->_padding_ | 1;
  this->_padding_ = (longlong)&___7UNiagaraSimulationStageGeneric__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
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
  (this->NumIterations)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->NumIterations)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->NumIterations)._padding_ = iVar2;
  (this->NumIterations).DefaultValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->NumIterations).DefaultValue.ArrayNum = 0;
  (this->NumIterations).DefaultValue.ArrayMax = 0;
  this->ExecuteBehavior = Always;
  (this->DataInterface).BoundVariable._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->DataInterface).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->DataInterface).BoundVariable._padding_ = iVar2;
  (this->DataInterface).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->DataInterface).BoundVariable.VarData.ArrayNum = 0;
  (this->DataInterface).BoundVariable.VarData.ArrayMax = 0;
  (this->ParticleIterationStateBinding).RootName.ComparisonIndex = 0;
  (this->ParticleIterationStateBinding).RootName.Number = 0;
  (this->ParticleIterationStateBinding).ParamMapVariable.Name.ComparisonIndex = 0;
  (this->ParticleIterationStateBinding).ParamMapVariable.Name.Number = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    (&(this->ParticleIterationStateBinding).ParamMapVariable.TypeDefHandle,
                     &FNiagaraTypeDefinition::Vec4Def);
  (this->ParticleIterationStateBinding).ParamMapVariable.TypeDefHandle.RegisteredTypeIndex = iVar2;
  (this->ParticleIterationStateBinding).bBindingExistsOnSource = '\0';
  (this->ParticleIterationStateBinding).bIsCachedParticleValue = '\x01';
  (this->ParticleIterationStateBinding).DataSetName.ComparisonIndex = 0;
  (this->ParticleIterationStateBinding).DataSetName.Number = 0;
  (this->ParticleIterationStateBinding).BindingSourceMode.Value = '\0';
  (this->ParticleIterationStateRange).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->OverrideGpuDispatchNumThreadsX)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->OverrideGpuDispatchNumThreadsX)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->OverrideGpuDispatchNumThreadsX)._padding_ = iVar2;
  (this->OverrideGpuDispatchNumThreadsX).DefaultValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OverrideGpuDispatchNumThreadsX).DefaultValue.ArrayNum = 0;
  (this->OverrideGpuDispatchNumThreadsX).DefaultValue.ArrayMax = 0;
  (this->OverrideGpuDispatchNumThreadsY)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->OverrideGpuDispatchNumThreadsY)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->OverrideGpuDispatchNumThreadsY)._padding_ = iVar2;
  (this->OverrideGpuDispatchNumThreadsY).DefaultValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OverrideGpuDispatchNumThreadsY).DefaultValue.ArrayNum = 0;
  (this->OverrideGpuDispatchNumThreadsY).DefaultValue.ArrayMax = 0;
  (this->OverrideGpuDispatchNumThreadsZ)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->OverrideGpuDispatchNumThreadsZ)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->OverrideGpuDispatchNumThreadsZ)._padding_ = iVar2;
  (this->OverrideGpuDispatchNumThreadsZ).DefaultValue.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->OverrideGpuDispatchNumThreadsZ).DefaultValue.ArrayNum = 0;
  (this->OverrideGpuDispatchNumThreadsZ).DefaultValue.ArrayMax = 0;
  this->DirectDispatchType = OneD;
  this->DirectDispatchElementType = NumThreads;
  (this->ElementCountX)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->ElementCountX)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->ElementCountX)._padding_ = iVar2;
  (this->ElementCountX).DefaultValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementCountX).DefaultValue.ArrayNum = 0;
  (this->ElementCountX).DefaultValue.ArrayMax = 0;
  (this->ElementCountY)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->ElementCountY)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->ElementCountY)._padding_ = iVar2;
  (this->ElementCountY).DefaultValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementCountY).DefaultValue.ArrayNum = 0;
  (this->ElementCountY).DefaultValue.ArrayMax = 0;
  (this->ElementCountZ)._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)&(this->ElementCountZ)._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->ElementCountZ)._padding_ = iVar2;
  (this->ElementCountZ).DefaultValue.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ElementCountZ).DefaultValue.ArrayNum = 0;
  (this->ElementCountZ).DefaultValue.ArrayMax = 0;
  return this;
}

// ~UNiagaraSimulationStageGeneric @ 1493d1c60

void __thiscall
UNiagaraSimulationStageGeneric::~UNiagaraSimulationStageGeneric
          (UNiagaraSimulationStageGeneric *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UNiagaraSimulationStageGeneric__6B_;
  pFVar1 = (this->ElementCountZ).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ElementCountY).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ElementCountX).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverrideGpuDispatchNumThreadsZ).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverrideGpuDispatchNumThreadsY).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->OverrideGpuDispatchNumThreadsX).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DataInterface).BoundVariable.VarData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->NumIterations).DefaultValue.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  this->_padding_ = (longlong)&___7UNiagaraSimulationStageBase__6B_;
  UNiagaraMergeable::~UNiagaraMergeable((UNiagaraMergeable *)this);
  return;
}

// GetPrivateStaticClass @ 1493e8760

UClass * __cdecl UNiagaraSimulationStageGeneric::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraSimulationStageGeneric",
               &Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.InnerSingleton,
               StaticRegisterNativesUNiagaraSimulationStageGeneric,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraSimulationStageGeneric>,
               InternalVTableHelperCtorCaller<UNiagaraSimulationStageGeneric>,local_res8,
               UNiagaraSimulationStageBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSimulationStageGeneric.InnerSingleton;
}

// PostInitProperties @ 1493f14c0

void __thiscall
UNiagaraSimulationStageGeneric::PostInitProperties(UNiagaraSimulationStageGeneric *this)

{
  FNiagaraVariableBase local_48;
  FNiagaraVariableBase local_3c;
  FNiagaraVariable local_30;
  
  UObject::PostInitProperties((UObject *)this);
  if ((this->_padding_ & 0x10) == 0) {
    local_48.Name.ComparisonIndex.Value = 0;
    local_48.Name.Number = 0;
    local_48.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&local_48.TypeDefHandle,&FNiagaraTypeDefinition::BoolDef);
    local_30._padding_._0_4_ = local_48.Name.ComparisonIndex.Value;
    local_30._padding_._4_4_ = local_48.Name.Number;
    local_30.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.VarData.ArrayNum = 0;
    local_30.VarData.ArrayMax = 0;
    local_3c.Name.ComparisonIndex.Value = 0;
    local_3c.Name.Number = 0;
    local_30._padding_._0_4_ = local_48.TypeDefHandle.RegisteredTypeIndex;
    local_3c.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&local_3c.TypeDefHandle,&FNiagaraTypeDefinition::BoolDef);
    FNiagaraVariableAttributeBinding::Setup(&this->EnabledBinding,&local_3c,&local_30,Emitter);
    if (local_30.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.VarData.AllocatorInstance.Data);
    }
    local_3c.Name = NiagaraSimulationStageLocal::NAME_Particles_StateIndex;
    local_3c.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&local_3c.TypeDefHandle,&FNiagaraTypeDefinition::IntDef);
    local_48.Name = NiagaraSimulationStageLocal::NAME_Particles_StateIndex;
    local_30._padding_._0_4_ = local_3c.Name.ComparisonIndex.Value;
    local_30._padding_._4_4_ = local_3c.Name.Number;
    local_30.VarData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_30.VarData.ArrayNum = 0;
    local_30.VarData.ArrayMax = 0;
    local_30._padding_._0_4_ = local_3c.TypeDefHandle.RegisteredTypeIndex;
    local_48.TypeDefHandle.RegisteredTypeIndex =
         FNiagaraTypeDefinitionHandle::Register
                   (&local_48.TypeDefHandle,&FNiagaraTypeDefinition::IntDef);
    FNiagaraVariableAttributeBinding::Setup
              (&this->ParticleIterationStateBinding,&local_48,&local_30,Particles);
    if (local_30.VarData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.VarData.AllocatorInstance.Data);
    }
  }
  return;
}

// PostLoad @ 1493f1870

void __thiscall UNiagaraSimulationStageGeneric::PostLoad(UNiagaraSimulationStageGeneric *this)

{
  longlong *_Dst;
  bool bVar1;
  int iVar2;
  uint *puVar3;
  FTlsAutoCleanup *pFVar4;
  FTlsAutoCleanup FVar5;
  FUObjectItem *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  code *pcStack_18;
  undefined1 *puStack_10;
  
  puVar3 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_10 = auStackX_8;
  pcStack_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_18,puVar3);
  FVar7 = pFVar4[0x2d];
  if (pFVar4[0x2d] == (FTlsAutoCleanup)0x0) {
    FVar7 = (FTlsAutoCleanup)(pFVar4 + 0x1d);
  }
  FVar5 = FVar7;
  do {
    if (FVar5 == (FTlsAutoCleanup)((longlong)FVar7 + (longlong)*(int *)(pFVar4 + 0x2e) * 8)) {
LAB_142105eef:
      if ((*(uint *)(this->_padding_ + 0xd4) & 0x400) != 0) {
        UObject::LoadConfig((UObject *)this,(UClass *)0x0,(wchar_t *)0x0,0,(FProperty *)0x0,
                            (TArray<UE::ConfigAccessTracking::FConfigAccessData,TSizedDefaultAllocator<32>_>
                             *)0x0);
      }
      bVar1 = IsThisNotNull(this,"UObject::CanCheckDefaultSubObjects");
      if ((((bVar1) && ((this->_padding_ & 0x3400) == 0)) &&
          (((uint)this->_padding_ >> 0x1e & 1) == 0)) &&
         (pFVar6 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar6->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        FIsDuplicatingClassForReinstancing::operator_bool(&GIsDuplicatingClassForReinstancing);
      }
      return;
    }
    if (*(UNiagaraSimulationStageGeneric **)FVar5 == this) {
      iVar2 = (int)((longlong)FVar5 - (longlong)FVar7 >> 3);
      if (iVar2 != -1) {
        _Dst = (longlong *)((longlong)FVar7 + (longlong)iVar2 * 8);
        memmove(_Dst,_Dst + 1,(longlong)((*(int *)(pFVar4 + 0x2e) - iVar2) + -1) << 3);
        *(int *)(pFVar4 + 0x2e) = *(int *)(pFVar4 + 0x2e) + -1;
      }
      goto LAB_142105eef;
    }
    FVar5 = (FTlsAutoCleanup)((longlong)FVar5 + 8);
  } while( true );
}

// StaticRegisterNativesUNiagaraSimulationStageGeneric @ 1493fe900

void __cdecl
UNiagaraSimulationStageGeneric::StaticRegisterNativesUNiagaraSimulationStageGeneric(void)

{
  return;
}

