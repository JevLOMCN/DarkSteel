// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 44

// FNiagaraSystemSimulation @ 1493ce070

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

FNiagaraSystemSimulation * __thiscall
FNiagaraSystemSimulation::FNiagaraSystemSimulation(FNiagaraSystemSimulation *this)

{
  undefined1 *puVar1;
  int iVar2;
  undefined8 local_res8;
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  local_res8 = 0;
  (this->EffectType).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->EffectType).WeakPtr,(FObjectPtr)&local_res8);
  this->bCanExecute = 0;
  this->bIsSolo = 0;
  this->bInSpawnPhase = 0;
  this->bBindingsInitialized = 0;
  this->bRunSpawnScript = 1;
  this->bRunUpdateScript = 1;
  this->SystemTickGroup = TG_MAX;
  this->World = (UWorld *)0x0;
  this->SystemInstancesPerState[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SystemInstancesPerState[0].ArrayNum = 0;
  this->SystemInstancesPerState[0].ArrayMax = 0;
  this->SystemInstancesPerState[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SystemInstancesPerState[1].ArrayNum = 0;
  this->SystemInstancesPerState[1].ArrayMax = 0;
  this->SystemInstancesPerState[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SystemInstancesPerState[2].ArrayNum = 0;
  this->SystemInstancesPerState[2].ArrayMax = 0;
  this->SystemInstancesPerState[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SystemInstancesPerState[3].ArrayNum = 0;
  this->SystemInstancesPerState[3].ArrayMax = 0;
  this->SystemInstancesPerState[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SystemInstancesPerState[4].ArrayNum = 0;
  this->SystemInstancesPerState[4].ArrayMax = 0;
  this->SystemInstancesPerState[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  this->SystemInstancesPerState[5].ArrayNum = 0;
  this->SystemInstancesPerState[5].ArrayMax = 0;
  FNiagaraDataSet::FNiagaraDataSet(&this->MainDataSet);
  FNiagaraDataSet::FNiagaraDataSet(&this->SpawningDataSet);
  FNiagaraDataSet::FNiagaraDataSet(&this->PausedDataSet);
  FNiagaraDataSet::FNiagaraDataSet(&this->SpawnInstanceParameterDataSet);
  FNiagaraDataSet::FNiagaraDataSet(&this->UpdateInstanceParameterDataSet);
  (this->SpawnExecContext).Ptr = (FNiagaraScriptExecutionContextBase *)0x0;
  (this->UpdateExecContext).Ptr = (FNiagaraScriptExecutionContextBase *)0x0;
  (this->SpawnInstanceParameterToDataSetBinding).FloatOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnInstanceParameterToDataSetBinding).FloatOffsets.ArrayNum = 0;
  (this->SpawnInstanceParameterToDataSetBinding).FloatOffsets.ArrayMax = 0;
  (this->SpawnInstanceParameterToDataSetBinding).Int32Offsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnInstanceParameterToDataSetBinding).Int32Offsets.ArrayNum = 0;
  (this->SpawnInstanceParameterToDataSetBinding).Int32Offsets.ArrayMax = 0;
  (this->SpawnInstanceParameterToDataSetBinding).HalfOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnInstanceParameterToDataSetBinding).HalfOffsets.ArrayNum = 0;
  (this->SpawnInstanceParameterToDataSetBinding).HalfOffsets.ArrayMax = 0;
  (this->UpdateInstanceParameterToDataSetBinding).FloatOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpdateInstanceParameterToDataSetBinding).FloatOffsets.ArrayNum = 0;
  (this->UpdateInstanceParameterToDataSetBinding).FloatOffsets.ArrayMax = 0;
  (this->UpdateInstanceParameterToDataSetBinding).Int32Offsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpdateInstanceParameterToDataSetBinding).Int32Offsets.ArrayNum = 0;
  (this->UpdateInstanceParameterToDataSetBinding).Int32Offsets.ArrayMax = 0;
  (this->UpdateInstanceParameterToDataSetBinding).HalfOffsets.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpdateInstanceParameterToDataSetBinding).HalfOffsets.ArrayNum = 0;
  (this->UpdateInstanceParameterToDataSetBinding).HalfOffsets.ArrayMax = 0;
  (this->DataSetToEmitterSpawnParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataSetToEmitterSpawnParameters).ArrayNum = 0;
  (this->DataSetToEmitterSpawnParameters).ArrayMax = 0;
  (this->DataSetToEmitterUpdateParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataSetToEmitterUpdateParameters).ArrayNum = 0;
  (this->DataSetToEmitterUpdateParameters).ArrayMax = 0;
  (this->DataSetToEmitterEventParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataSetToEmitterEventParameters).ArrayNum = 0;
  (this->DataSetToEmitterEventParameters).ArrayMax = 0;
  (this->DataSetToEmitterGPUParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DataSetToEmitterGPUParameters).ArrayNum = 0;
  (this->DataSetToEmitterGPUParameters).ArrayMax = 0;
  (this->DataSetToEmitterRendererParameters).AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DataSetToEmitterRendererParameters).ArrayNum = 0;
  (this->DataSetToEmitterRendererParameters).ArrayMax = 0;
  (this->SpawnNumSystemInstancesParam).ValuePtr = (int *)0x0;
  (this->SpawnNumSystemInstancesParam).BoundStore = (FNiagaraParameterStore *)0x0;
  (this->SpawnNumSystemInstancesParam).BoundVariable._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->SpawnNumSystemInstancesParam).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->SpawnNumSystemInstancesParam).BoundVariable._padding_ = iVar2;
  (this->SpawnNumSystemInstancesParam).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnNumSystemInstancesParam).BoundVariable.VarData.ArrayNum = 0;
  (this->SpawnNumSystemInstancesParam).BoundVariable.VarData.ArrayMax = 0;
  (this->UpdateNumSystemInstancesParam).ValuePtr = (int *)0x0;
  (this->UpdateNumSystemInstancesParam).BoundStore = (FNiagaraParameterStore *)0x0;
  (this->UpdateNumSystemInstancesParam).BoundVariable._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->UpdateNumSystemInstancesParam).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->UpdateNumSystemInstancesParam).BoundVariable._padding_ = iVar2;
  (this->UpdateNumSystemInstancesParam).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpdateNumSystemInstancesParam).BoundVariable.VarData.ArrayNum = 0;
  (this->UpdateNumSystemInstancesParam).BoundVariable.VarData.ArrayMax = 0;
  (this->SpawnGlobalSpawnCountScaleParam).ValuePtr = (float *)0x0;
  (this->SpawnGlobalSpawnCountScaleParam).BoundStore = (FNiagaraParameterStore *)0x0;
  (this->SpawnGlobalSpawnCountScaleParam).BoundVariable._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->SpawnGlobalSpawnCountScaleParam).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->SpawnGlobalSpawnCountScaleParam).BoundVariable._padding_ = iVar2;
  (this->SpawnGlobalSpawnCountScaleParam).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnGlobalSpawnCountScaleParam).BoundVariable.VarData.ArrayNum = 0;
  (this->SpawnGlobalSpawnCountScaleParam).BoundVariable.VarData.ArrayMax = 0;
  (this->UpdateGlobalSpawnCountScaleParam).ValuePtr = (float *)0x0;
  (this->UpdateGlobalSpawnCountScaleParam).BoundStore = (FNiagaraParameterStore *)0x0;
  (this->UpdateGlobalSpawnCountScaleParam).BoundVariable._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->UpdateGlobalSpawnCountScaleParam).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->UpdateGlobalSpawnCountScaleParam).BoundVariable._padding_ = iVar2;
  (this->UpdateGlobalSpawnCountScaleParam).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpdateGlobalSpawnCountScaleParam).BoundVariable.VarData.ArrayNum = 0;
  (this->UpdateGlobalSpawnCountScaleParam).BoundVariable.VarData.ArrayMax = 0;
  (this->SpawnGlobalSystemCountScaleParam).ValuePtr = (float *)0x0;
  (this->SpawnGlobalSystemCountScaleParam).BoundStore = (FNiagaraParameterStore *)0x0;
  (this->SpawnGlobalSystemCountScaleParam).BoundVariable._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->SpawnGlobalSystemCountScaleParam).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->SpawnGlobalSystemCountScaleParam).BoundVariable._padding_ = iVar2;
  (this->SpawnGlobalSystemCountScaleParam).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->SpawnGlobalSystemCountScaleParam).BoundVariable.VarData.ArrayNum = 0;
  (this->SpawnGlobalSystemCountScaleParam).BoundVariable.VarData.ArrayMax = 0;
  (this->UpdateGlobalSystemCountScaleParam).ValuePtr = (float *)0x0;
  (this->UpdateGlobalSystemCountScaleParam).BoundStore = (FNiagaraParameterStore *)0x0;
  (this->UpdateGlobalSystemCountScaleParam).BoundVariable._padding_ = 0;
  iVar2 = FNiagaraTypeDefinitionHandle::Register
                    ((FNiagaraTypeDefinitionHandle *)
                     &(this->UpdateGlobalSystemCountScaleParam).BoundVariable._padding_,
                     &FNiagaraTypeDefinition::Vec4Def);
  *(int *)&(this->UpdateGlobalSystemCountScaleParam).BoundVariable._padding_ = iVar2;
  (this->UpdateGlobalSystemCountScaleParam).BoundVariable.VarData.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->UpdateGlobalSystemCountScaleParam).BoundVariable.VarData.ArrayNum = 0;
  (this->UpdateGlobalSystemCountScaleParam).BoundVariable.VarData.ArrayMax = 0;
  (this->PendingTickGroupPromotions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PendingTickGroupPromotions).ArrayNum = 0;
  (this->PendingTickGroupPromotions).ArrayMax = 0;
  (this->MaxDeltaTime).bIsSet = false;
  (this->ConcurrentTickGraphEvent).Reference = (FBaseGraphTask *)0x0;
  (this->AllWorkCompleteGraphEvent).Reference = (FBaseGraphTask *)0x0;
  (this->CrashReporterTag).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CrashReporterTag).Data.ArrayNum = 0;
  (this->CrashReporterTag).Data.ArrayMax = 0;
  this->DispatchInterface = (FNiagaraGpuComputeDispatchInterface *)0x0;
  this->FixedDeltaTickAge = 0.0;
  (this->TickInfo).UsesFixedTick = false;
  (this->TickInfo).EngineTick = 0.0;
  (this->TickInfo).SystemTick = 0.0;
  (this->TickInfo).TickCount = 0;
  (this->TickInfo).TickNumber = 0;
  (this->TickInfo).TimeStepFraction = 0.0;
  return this;
}

// ~FNiagaraSystemSimulation @ 1493d1530

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

void __thiscall FNiagaraSystemSimulation::~FNiagaraSystemSimulation(FNiagaraSystemSimulation *this)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  FNiagaraScriptExecutionContextBase *pFVar4;
  FScriptContainerElement *pFVar5;
  FBaseGraphTask *pFVar6;
  longlong *plVar7;
  code *pcVar8;
  longlong lVar9;
  bool bVar10;
  FNiagaraDataSet *this_00;
  longlong lVar11;
  undefined1 local_res8 [8];
  
  bVar10 = IsInGameThread();
  if (!bVar10) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("IsInGameThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                        ,0x2c2,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  WaitForInstancesTickComplete(this,false);
  `FNiagaraSystemSimulation::Destroy'::__l2::<lambda_1>::operator()
            (local_res8,this->SystemInstancesPerState + 4);
  `FNiagaraSystemSimulation::Destroy'::__l2::<lambda_1>::operator()
            (local_res8,this->SystemInstancesPerState + 5);
  `FNiagaraSystemSimulation::Destroy'::__l2::<lambda_1>::operator()
            (local_res8,this->SystemInstancesPerState + 1);
  `FNiagaraSystemSimulation::Destroy'::__l2::<lambda_1>::operator()
            (local_res8,this->SystemInstancesPerState + 2);
  if (this->SystemInstancesPerState[3].ArrayNum != 0) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("GetSystemInstances(ENiagaraSystemInstanceState::Spawning).Num() == 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                        ,0x2d5,L"");
    if (bVar10) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  pFVar4 = (this->SpawnExecContext).Ptr;
  if (pFVar4 != (FNiagaraScriptExecutionContextBase *)0x0) {
    FNiagaraParameterStore::UnbindFromSourceStores((FNiagaraParameterStore *)&pFVar4->Parameters);
  }
  pFVar4 = (this->UpdateExecContext).Ptr;
  if (pFVar4 != (FNiagaraScriptExecutionContextBase *)0x0) {
    FNiagaraParameterStore::UnbindFromSourceStores((FNiagaraParameterStore *)&pFVar4->Parameters);
  }
  this->World = (UWorld *)0x0;
  pFVar5 = (this->CrashReporterTag).Data.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar6 = (this->AllWorkCompleteGraphEvent).Reference;
  if (pFVar6 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar6->field_0x30;
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
    }
  }
  pFVar6 = (this->ConcurrentTickGraphEvent).Reference;
  if (pFVar6 != (FBaseGraphTask *)0x0) {
    LOCK();
    puVar1 = &pFVar6->field_0x30;
    iVar3 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
    }
  }
  pFVar5 = (this->PendingTickGroupPromotions).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->UpdateGlobalSystemCountScaleParam).BoundVariable.VarData.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->SpawnGlobalSystemCountScaleParam).BoundVariable.VarData.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->UpdateGlobalSpawnCountScaleParam).BoundVariable.VarData.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->SpawnGlobalSpawnCountScaleParam).BoundVariable.VarData.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->UpdateNumSystemInstancesParam).BoundVariable.VarData.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->SpawnNumSystemInstancesParam).BoundVariable.VarData.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FNiagaraParameterStoreToDataSetBinding,int>
            ((FNiagaraParameterStoreToDataSetBinding *)
             (this->DataSetToEmitterRendererParameters).AllocatorInstance.Data,
             (this->DataSetToEmitterRendererParameters).ArrayNum);
  pFVar5 = (this->DataSetToEmitterRendererParameters).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FNiagaraParameterStoreToDataSetBinding,int>
            ((FNiagaraParameterStoreToDataSetBinding *)
             (this->DataSetToEmitterGPUParameters).AllocatorInstance.Data,
             (this->DataSetToEmitterGPUParameters).ArrayNum);
  pFVar5 = (this->DataSetToEmitterGPUParameters).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_>,int>
            ((TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_> *)
             (this->DataSetToEmitterEventParameters).AllocatorInstance.Data,
             (this->DataSetToEmitterEventParameters).ArrayNum);
  pFVar5 = (this->DataSetToEmitterEventParameters).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FNiagaraParameterStoreToDataSetBinding,int>
            ((FNiagaraParameterStoreToDataSetBinding *)
             (this->DataSetToEmitterUpdateParameters).AllocatorInstance.Data,
             (this->DataSetToEmitterUpdateParameters).ArrayNum);
  pFVar5 = (this->DataSetToEmitterUpdateParameters).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  DestructItems<FNiagaraParameterStoreToDataSetBinding,int>
            ((FNiagaraParameterStoreToDataSetBinding *)
             (this->DataSetToEmitterSpawnParameters).AllocatorInstance.Data,
             (this->DataSetToEmitterSpawnParameters).ArrayNum);
  pFVar5 = (this->DataSetToEmitterSpawnParameters).AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->UpdateInstanceParameterToDataSetBinding).HalfOffsets.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->UpdateInstanceParameterToDataSetBinding).Int32Offsets.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->UpdateInstanceParameterToDataSetBinding).FloatOffsets.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->SpawnInstanceParameterToDataSetBinding).HalfOffsets.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->SpawnInstanceParameterToDataSetBinding).Int32Offsets.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar5 = (this->SpawnInstanceParameterToDataSetBinding).FloatOffsets.AllocatorInstance.Data;
  if (pFVar5 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar5);
  }
  pFVar4 = (this->UpdateExecContext).Ptr;
  if (pFVar4 != (FNiagaraScriptExecutionContextBase *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  pFVar4 = (this->SpawnExecContext).Ptr;
  if (pFVar4 != (FNiagaraScriptExecutionContextBase *)0x0) {
    (**(code **)pFVar4->_padding_)(pFVar4,1);
  }
  FNiagaraDataSet::~FNiagaraDataSet(&this->UpdateInstanceParameterDataSet);
  FNiagaraDataSet::~FNiagaraDataSet(&this->SpawnInstanceParameterDataSet);
  FNiagaraDataSet::~FNiagaraDataSet(&this->PausedDataSet);
  FNiagaraDataSet::~FNiagaraDataSet(&this->SpawningDataSet);
  this_00 = &this->MainDataSet;
  FNiagaraDataSet::~FNiagaraDataSet(this_00);
  lVar11 = 6;
  do {
    lVar9 = (longlong)(this_00 + -1);
    this_00 = (FNiagaraDataSet *)((longlong)(this_00 + -1) + 0xb0);
    lVar11 = lVar11 + -1;
    if (*(void **)(lVar9 + 0xb0) != (void *)0x0) {
      FMemory::Free(*(void **)(lVar9 + 0xb0));
    }
  } while (lVar11 != 0);
  plVar7 = (longlong *)this->_padding_;
  if (plVar7 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar7 + 0xc);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar3 == 1) {
      (**(code **)(*plVar7 + 8))(plVar7,1);
    }
  }
  return;
}

// operator() @ 1493d2910

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
`FNiagaraSystemSimulation::Destroy'::__l2::<lambda_1>::operator()
          (void *this,TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  FNiagaraSystemInstance *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  
  iVar1 = param_1->ArrayNum;
  while( true ) {
    if (iVar1 < 1) {
      return;
    }
    uVar4 = 0;
    if (iVar1 + -1 < iVar1) {
      uVar4 = (uint)-iVar1 >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar3)) break;
    this_00 = *(FNiagaraSystemInstance **)
               ((param_1->AllocatorInstance).Data + (longlong)param_1->ArrayNum * 8 + -8);
    FNiagaraSystemInstance::Deactivate(this_00,true);
    if ((this_00->SystemInstanceState != None) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Instance->SystemInstanceState == ENiagaraSystemInstanceState::None",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                           ,0x2cc,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar1 = param_1->ArrayNum;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// operator() @ 1493d38e0

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
`FNiagaraSystemSimulation::SimCacheTick_GameThread'::__l17::<lambda_1>::operator()(void *this)

{
  FTaskBase *this_00;
  bool bVar1;
  
  bVar1 = -1 < CpuChannel->Enabled;
  if (bVar1) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1680,"Niagara::SimCacheTick_Concurrent",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
               ,0x690);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1680);
  }
  FNiagaraSystemSimulation::SimCacheTick_Concurrent
            (*(FNiagaraSystemSimulation **)this,*(UNiagaraSimCache **)((longlong)this + 8),
             *(float *)((longlong)this + 0x10));
  this_00 = *(FTaskBase **)(*(longlong *)this + 0x680);
  if (this_00->ExtendedPriority == TaskEvent) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
  if (bVar1) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// operator() @ 1493d4a80

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
`FNiagaraSystemSimulation::SimCacheTick_GameThread'::__l17::<lambda_2>::operator()(void *this)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 *puVar3;
  FTaskBase *this_00;
  undefined8 *puVar4;
  bool bVar5;
  longlong *local_res8;
  
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1692,"Niagara::SimCacheTick_Finalize",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
               ,0x69c);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1692);
  }
  puVar3 = *(undefined8 **)((longlong)this + 8);
  iVar2 = *(int *)(puVar3 + 5);
  puVar4 = (undefined8 *)puVar3[4];
  if ((undefined8 *)puVar3[4] == (undefined8 *)0x0) {
    puVar4 = puVar3;
  }
  puVar1 = puVar4 + iVar2;
  while( true ) {
    if (*(int *)(puVar3 + 5) != iVar2) {
      `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res8);
    }
    if (puVar4 == puVar1) break;
    if ((FNiagaraSystemInstance *)*puVar4 != (FNiagaraSystemInstance *)0x0) {
      FNiagaraSystemInstance::SimCacheTickFinalize_GameThread((FNiagaraSystemInstance *)*puVar4);
    }
    puVar4 = puVar4 + 1;
  }
  if (*(int *)(*(longlong *)((longlong)this + 8) + 0x30) != 0) {
    local_res8 = (longlong *)((longlong)this + 8);
    ``FNiagaraSystemSimulation::SimCacheTick_GameThread'::__l17::<lambda_2>::operator()'::__l2::
    <lambda_1>::operator()(&local_res8);
  }
  this_00 = *(FTaskBase **)(*(longlong *)this + 0x688);
  if (this_00->ExtendedPriority == TaskEvent) {
    LOCK();
    this_00->RefCount = (atomic<unsigned_int>)((int)this_00->RefCount + 1);
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0);
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// AddInstance @ 1493d6580

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
FNiagaraSystemSimulation::AddInstance
          (FNiagaraSystemSimulation *this,FNiagaraSystemInstance *param_1)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x956,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_1->SystemInstanceIndex != -1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance->SystemInstanceIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x957,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  WaitForConcurrentTickComplete(this,false);
  SetInstanceState(this,param_1,PendingSpawn);
  if (this->System != (UNiagaraSystem *)0x0) {
    piVar1 = &this->System->ActiveInstances;
    *piVar1 = *piVar1 + 1;
  }
  pUVar4 = FWeakObjectPtr::Get(&(this->EffectType).WeakPtr);
  if (pUVar4 != (UObject *)0x0) {
    *(int *)&pUVar4[2].field_0x20 = *(int *)&pUVar4[2].field_0x20 + 1;
    *(uint *)&pUVar4[2].field_0x24 = *(uint *)&pUVar4[2].field_0x24 | 1;
  }
  if ((this->MainDataSet).CurrentData == (FNiagaraDataBuffer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x158,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->SystemInstancesPerState[4].ArrayNum != ((this->MainDataSet).CurrentData)->NumInstances)
  {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSystemInstances(ENiagaraSystemInstanceState::Running).Num() == MainDataSet.GetCurrentDataChecked().GetNumInstances()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x968,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if ((this->PausedDataSet).CurrentData == (FNiagaraDataBuffer *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x158,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (this->SystemInstancesPerState[5].ArrayNum != ((this->PausedDataSet).CurrentData)->NumInstances
     ) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSystemInstances(ENiagaraSystemInstanceState::Paused).Num() == PausedDataSet.GetCurrentDataChecked().GetNumInstances()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x96b,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// AddSystemToTickBatch @ 1493d6860

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
FNiagaraSystemSimulation::AddSystemToTickBatch
          (FNiagaraSystemSimulation *this,FNiagaraSystemSimulationTickContext *param_1,
          FNiagaraSystemInstance *param_2,bool param_3)

{
  TArray<FNiagaraSystemInstance_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  ForElementType<FNiagaraSystemInstance_*> FVar6;
  FNiagaraSystemInstance *local_res18;
  
  FVar6 = (param_1->TickBatch).AllocatorInstance.SecondaryData;
  pTVar1 = &param_1->TickBatch;
  if (FVar6 == (ForElementType<FNiagaraSystemInstance_*>)0x0) {
    FVar6 = (ForElementType<FNiagaraSystemInstance_*>)pTVar1;
  }
  local_res18 = param_2;
  if (((ulonglong)FVar6 <= &local_res18) &&
     (&local_res18 <
      (FNiagaraSystemInstance **)((longlong)FVar6 + (longlong)(param_1->TickBatch).ArrayMax * 8))) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_1->TickBatch).ArrayNum;
  piVar2 = &(param_1->TickBatch).ArrayMax;
  if (iVar5 == *piVar2) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraSystemInstance_*>_>
                      (0x808,&pTVar1->AllocatorInstance,piVar2);
  }
  (param_1->TickBatch).ArrayNum = iVar5 + 1;
  FVar6 = (param_1->TickBatch).AllocatorInstance.SecondaryData;
  if (FVar6 == (ForElementType<FNiagaraSystemInstance_*>)0x0) {
    FVar6 = (ForElementType<FNiagaraSystemInstance_*>)pTVar1;
  }
  *(FNiagaraSystemInstance **)((longlong)FVar6 + (longlong)iVar5 * 8) = local_res18;
  if ((param_3) || (GNiagaraSystemSimulationTickBatchSize <= (param_1->TickBatch).ArrayNum)) {
    FlushTickBatch(this,param_1,param_3);
  }
  return;
}

// AddTickGroupPromotion @ 1493d6970

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

void __thiscall
FNiagaraSystemSimulation::AddTickGroupPromotion
          (FNiagaraSystemSimulation *this,FNiagaraSystemInstance *param_1)

{
  int *piVar1;
  TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FNiagaraWorldManager *this_00;
  FScriptContainerElement *pFVar7;
  FNiagaraSystemInstance *local_res10 [3];
  
  local_res10[0] = param_1;
  bVar5 = IsInGameThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x36d,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pTVar2 = &this->PendingTickGroupPromotions;
  pFVar7 = (pTVar2->AllocatorInstance).Data;
  pFVar3 = pFVar7 + (longlong)(this->PendingTickGroupPromotions).ArrayNum * 8;
  do {
    if (pFVar7 == pFVar3) {
LAB_1493d6a0b:
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      if (((pFVar3 <= (FScriptContainerElement *)local_res10) &&
          ((FScriptContainerElement *)local_res10 <
           pFVar3 + (longlong)(this->PendingTickGroupPromotions).ArrayMax * 8)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar6 = (this->PendingTickGroupPromotions).ArrayNum;
      piVar1 = &(this->PendingTickGroupPromotions).ArrayMax;
      if (iVar6 == *piVar1) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&pTVar2->AllocatorInstance,piVar1);
      }
      (this->PendingTickGroupPromotions).ArrayNum = iVar6 + 1;
      *(FNiagaraSystemInstance **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
           local_res10[0];
      if ((this->bIsSolo != 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsSolo == false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                             ,0x371,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = FNiagaraWorldManager::Get(this->World);
      if (this_00 != (FNiagaraWorldManager *)0x0) {
        FNiagaraWorldManager::MarkSimulationForPostActorWork(this_00,this);
      }
      return;
    }
    if (*(FNiagaraSystemInstance **)pFVar7 == local_res10[0]) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!PendingTickGroupPromotions.Contains(Instance)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x36e,L"");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1493d6a0b;
    }
    pFVar7 = pFVar7 + 8;
  } while( true );
}

// AddToInstanceList @ 1493d6c40

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
FNiagaraSystemSimulation::AddToInstanceList
          (FNiagaraSystemSimulation *this,FNiagaraSystemInstance *param_1,
          ENiagaraSystemInstanceState param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraSystemInstance *local_res10 [3];
  
  local_res10[0] = param_1;
  if (param_2 == None) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InstanceState != ENiagaraSystemInstanceState::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x38e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_res10[0]->SystemInstanceIndex != -1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance->SystemInstanceIndex == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x38f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (local_res10[0]->SystemInstanceState != None) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance->SystemInstanceState == ENiagaraSystemInstanceState::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x390,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  local_res10[0]->SystemInstanceState = param_2;
  if (param_2 == None) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("State != ENiagaraSystemInstanceState::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemSimulation.h"
                       ,0x161,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = this->SystemInstancesPerState[param_2].AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2 + (longlong)this->SystemInstancesPerState[param_2].ArrayMax * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = this->SystemInstancesPerState[param_2].ArrayNum;
  piVar1 = &this->SystemInstancesPerState[param_2].ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&this->SystemInstancesPerState[param_2].AllocatorInstance,piVar1);
  }
  pFVar2 = this->SystemInstancesPerState[param_2].AllocatorInstance.Data;
  this->SystemInstancesPerState[param_2].ArrayNum = iVar5 + 1;
  *(FNiagaraSystemInstance **)(pFVar2 + (longlong)iVar5 * 8) = local_res10[0];
  local_res10[0]->SystemInstanceIndex = iVar5;
  return;
}

// BuildConstantBufferTable @ 1493d78f0

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
FNiagaraSystemSimulation::BuildConstantBufferTable
          (FNiagaraSystemSimulation *this,FNiagaraGlobalParameters *param_1,
          TUniquePtr<FNiagaraScriptExecutionContextBase,TDefaultDelete<FNiagaraScriptExecutionContextBase>_>
          *param_2,FScriptExecutionConstantBufferTable *param_3)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  TArrayView<unsigned_char_const_,int> local_18;
  
  FNiagaraScriptExecutionContextBase::GetScriptLiterals(param_2->Ptr,&local_18);
  if (param_2->Ptr->HasInterpolationParameters != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!ExecContext->HasInterpolationParameters",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0xa26,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  puVar1 = (uchar *)(param_2->Ptr->Parameters)._padding_;
  uVar4 = FNiagaraScriptInstanceParameterStore::GetExternalParameterSize(&param_2->Ptr->Parameters);
  (param_3->Buffers).ArrayNum = 0;
  if ((param_3->Buffers).ArrayMax < 3) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_char_const_*>_>
              (8,8,3,(ForElementType<unsigned_char_const_*> *)param_3,0,&(param_3->Buffers).ArrayMax
              );
  }
  (param_3->BufferSizes).ArrayNum = 0;
  if ((param_3->BufferSizes).ArrayMax < 3) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<12,32,TSizedDefaultAllocator<32>_>::ForElementType<int>_>
              (4,4,3,&(param_3->BufferSizes).AllocatorInstance,0,&(param_3->BufferSizes).ArrayMax);
  }
  FScriptExecutionConstantBufferTable::AddTypedBuffer<FNiagaraGlobalParameters>(param_3,param_1);
  FScriptExecutionConstantBufferTable::AddRawBuffer(param_3,puVar1,uVar4);
  FScriptExecutionConstantBufferTable::AddRawBuffer(param_3,local_18.DataPtr,local_18.ArrayNum);
  return;
}

// Destroy @ 1493ddc70

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

void __thiscall FNiagaraSystemSimulation::Destroy(FNiagaraSystemSimulation *this)

{
  FNiagaraScriptExecutionContextBase *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 local_res8 [32];
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x2c2,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  WaitForInstancesTickComplete(this,false);
  `FNiagaraSystemSimulation::Destroy'::__l2::<lambda_1>::operator()
            (local_res8,this->SystemInstancesPerState + 4);
  `FNiagaraSystemSimulation::Destroy'::__l2::<lambda_1>::operator()
            (local_res8,this->SystemInstancesPerState + 5);
  `FNiagaraSystemSimulation::Destroy'::__l2::<lambda_1>::operator()
            (local_res8,this->SystemInstancesPerState + 1);
  `FNiagaraSystemSimulation::Destroy'::__l2::<lambda_1>::operator()
            (local_res8,this->SystemInstancesPerState + 2);
  if (this->SystemInstancesPerState[3].ArrayNum != 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSystemInstances(ENiagaraSystemInstanceState::Spawning).Num() == 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x2d5,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pFVar1 = (this->SpawnExecContext).Ptr;
  if (pFVar1 != (FNiagaraScriptExecutionContextBase *)0x0) {
    FNiagaraParameterStore::UnbindFromSourceStores((FNiagaraParameterStore *)&pFVar1->Parameters);
  }
  pFVar1 = (this->UpdateExecContext).Ptr;
  if (pFVar1 != (FNiagaraScriptExecutionContextBase *)0x0) {
    FNiagaraParameterStore::UnbindFromSourceStores((FNiagaraParameterStore *)&pFVar1->Parameters);
  }
  this->World = (UWorld *)0x0;
  return;
}

// DumpInstance @ 1493df6a0

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
FNiagaraSystemSimulation::DumpInstance
          (FNiagaraSystemSimulation *this,FNiagaraSystemInstance *param_1)

{
  code *pcVar1;
  bool bVar2;
  FName local_res8;
  FName local_res10;
  FName local_res18 [2];
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  
  if (((param_1->FinalizeRef).TaskEntry != (FNiagaraSystemInstance **)0x0) &&
     (bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_110362534745210045>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x343,"!Inst->HasPendingFinalize()"), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (4 < (byte)LogNiagara._0_1_) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)param_1->System,&local_28,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (4 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  FNiagaraParameterStore::DumpParameters
            ((FNiagaraParameterStore *)&((this->SpawnExecContext).Ptr)->Parameters,false);
  local_res8.ComparisonIndex.Value = 0;
  local_res8.Number = 0;
  ::FString::FString(&local_58,L"Spawn Instance Parameters");
  FNiagaraDataSet::Dump
            (&this->SpawnInstanceParameterDataSet,param_1->SystemInstanceIndex,1,&local_58,
             &local_res8);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (4 < (byte)LogNiagara._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  FNiagaraParameterStore::DumpParameters
            ((FNiagaraParameterStore *)&((this->UpdateExecContext).Ptr)->Parameters,false);
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  ::FString::FString(&local_48,L"Update Instance Parameters");
  FNiagaraDataSet::Dump
            (&this->UpdateInstanceParameterDataSet,param_1->SystemInstanceIndex,1,&local_48,
             &local_res10);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (4 < (byte)LogNiagara._0_1_) {
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  }
  local_res18[0].ComparisonIndex.Value = 0;
  local_res18[0].Number = 0;
  ::FString::FString(&local_38,L"System Data");
  FNiagaraDataSet::Dump(&this->MainDataSet,param_1->SystemInstanceIndex,1,&local_38,local_res18);
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// DumpStalledInfo @ 1493dfa90

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

void __thiscall FNiagaraSystemSimulation::DumpStalledInfo(FNiagaraSystemSimulation *this)

{
  undefined1 auStack_178 [32];
  FString local_158;
  FName local_148 [2];
  TStringBuilderBase<wchar_t> local_138;
  wchar_t local_118 [128];
  ulonglong local_18 [2];
  
  local_18[0] = __security_cookie.value ^ (ulonglong)auStack_178;
  local_138.Base = local_118;
  local_138.bIsDynamic = false;
  local_138.bIsExternal = false;
  local_138.CurPos = local_118;
  local_138.End = (wchar_t *)local_18;
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"ConcurrentTickGraphEvent Complete (%d)\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"AllWorkCompleteGraphEvent Complete (%d)\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"SystemTickGroup (%d)\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"bInSpawnPhase (%d)\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"bIsSolo (%d)\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"InstancesPendingSpawn (%d)\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"InstancesPendingSpawnPaused (%d)\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"InstancesSpawning (%d)\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"InstancesRunning (%d)\n");
  TStringBuilderBase<wchar_t>::AppendfImpl(&local_138,L"InstancesPaused (%d)\n");
  if (local_138.End < local_138.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_138,1);
  }
  *local_138.CurPos = L'\0';
  if (this->System == (UNiagaraSystem *)0x0) {
    ::FString::FString(&local_158,L"None");
  }
  else {
    local_148[0] = (FName)this->System->_padding_;
    ::FName::ToString(local_148,&local_158);
  }
  UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
  if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Data.AllocatorInstance.Data);
  }
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_138);
  return;
}

// DumpTickInfo @ 1493e0110

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
FNiagaraSystemSimulation::DumpTickInfo(FNiagaraSystemSimulation *this,FOutputDevice *param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  UEnum *this_00;
  FName this_01;
  ulonglong uVar4;
  longlong lVar5;
  ForAnyElementType FVar6;
  uint uVar7;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  ForAnyElementType local_58;
  uint local_50;
  int local_4c;
  FString local_48;
  ulonglong uVar8;
  
  bVar3 = IsInGameThread();
  if ((!bVar3) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x352,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  this_00 = StaticEnum<enum_ENiagaraSystemInstanceState>();
  if ((this_00 == (UEnum *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InstanceStateEnum",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x355,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar8 = 0;
  do {
    if ((int)uVar8 != 0) {
      if (((char)uVar8 == '\0') &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("State != ENiagaraSystemInstanceState::None",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemSimulation.h"
                             ,0x161,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_58.Data = (FScriptContainerElement *)0x0;
      local_50 = this->SystemInstancesPerState[uVar8 & 0xff].ArrayNum;
      lVar5 = (longlong)(int)local_50;
      pFVar1 = this->SystemInstancesPerState[uVar8 & 0xff].AllocatorInstance.Data;
      if (local_50 == 0) {
        local_4c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,local_50,0,&local_58,local_50,&local_4c);
        memcpy(local_58.Data,pFVar1,lVar5 << 3);
      }
      if (0 < (int)local_50) {
        this_01 = UEnum::GetNameByIndex(this_00,(int)local_res20);
        ::FName::ToString((FName *)this_01,&local_48);
        FOutputDevice::LogfImpl(param_1,L"\t\tInstances State(%s) Count(%d)");
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        uVar7 = local_50;
        uVar4 = (ulonglong)(int)local_50;
        pFVar1 = local_58.Data + uVar4 * 8;
        FVar6.Data = local_58.Data;
        while( true ) {
          if ((uint)uVar4 != uVar7) {
            local_res18[0] = 0;
            `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>
            ::operator()(local_res18);
          }
          if (FVar6.Data == pFVar1) break;
          FNiagaraSystemInstance::DumpTickInfo(*(FNiagaraSystemInstance **)FVar6.Data,param_1);
          uVar4 = (ulonglong)local_50;
          FVar6.Data = FVar6.Data + 8;
        }
      }
      if (local_58.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data);
      }
    }
    uVar7 = (int)uVar8 + 1;
    uVar8 = (ulonglong)uVar7;
    if (5 < (int)uVar7) {
      return;
    }
  } while( true );
}

// FlushTickBatch @ 1493e31d0

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemSimulation::FlushTickBatch
          (FNiagaraSystemSimulation *this,FNiagaraSystemSimulationTickContext *param_1,bool param_2)

{
  int *piVar1;
  atomic<unsigned_int> *paVar2;
  TArray<FNiagaraSystemInstance_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *pTVar3;
  int *piVar4;
  ForElementType<FNiagaraSystemInstance_*> FVar5;
  TRefCountPtr<FBaseGraphTask> *pTVar6;
  undefined8 *puVar7;
  atomic<unsigned_int> aVar8;
  UWorld *pUVar9;
  TRefCountPtr<FBaseGraphTask> TVar10;
  code *pcVar11;
  bool bVar12;
  Type TVar13;
  int iVar14;
  FTaskBase *pFVar15;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar16;
  longlong lVar17;
  FTaskBase *this_00;
  longlong *_Dst;
  ForElementType<FNiagaraSystemInstance_*> FVar18;
  ForElementType<FNiagaraSystemInstance_*> FVar19;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar20;
  undefined1 auStackY_f8 [32];
  EExtendedTaskPriority local_a8;
  ETaskPriority local_a7 [3];
  EExtendedTaskPriority local_a4;
  ETaskPriority local_a3;
  undefined1 local_a2 [2];
  TRefCountPtr<FBaseGraphTask> local_a0;
  FTaskBase *local_98;
  TArray<FNiagaraSystemInstance_*,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *local_90;
  ForElementType<FNiagaraSystemInstance_*> local_88;
  FNiagaraSystemSimulation *local_80;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  iVar14 = (param_1->TickBatch).ArrayNum;
  if (iVar14 == 0) {
    return;
  }
  local_80 = this;
  if (param_1->bRunningAsync == false) {
    FVar18 = (param_1->TickBatch).AllocatorInstance.SecondaryData;
    FVar19 = (ForElementType<FNiagaraSystemInstance_*>)&param_1->TickBatch;
    if (FVar18 == (ForElementType<FNiagaraSystemInstance_*>)0x0) {
      FVar18 = FVar19;
    }
    FVar5 = (ForElementType<FNiagaraSystemInstance_*>)((longlong)FVar18 + (longlong)iVar14 * 8);
    while( true ) {
      if ((param_1->TickBatch).ArrayNum != iVar14) {
        `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_a2);
      }
      if (FVar18 == FVar5) break;
      FNiagaraSystemInstance::Tick_Concurrent(*(FNiagaraSystemInstance **)FVar18,true);
      FVar18 = (ForElementType<FNiagaraSystemInstance_*>)((longlong)FVar18 + 8);
    }
    goto LAB_1493e38ab;
  }
  if (this->bRunUpdateScript == 0) {
LAB_1493e3243:
    local_78.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_78.ArrayNum = 0;
    local_90 = &param_1->TickBatch;
    FVar18 = (param_1->TickBatch).AllocatorInstance.SecondaryData;
    iVar14 = (param_1->TickBatch).ArrayNum;
    local_78.ArrayMax = 4;
    if (FVar18 == (ForElementType<FNiagaraSystemInstance_*>)0x0) {
      FVar18 = (ForElementType<FNiagaraSystemInstance_*>)local_90;
    }
    FVar5 = (ForElementType<FNiagaraSystemInstance_*>)((longlong)FVar18 + (longlong)iVar14 * 8);
    local_88 = (ForElementType<FNiagaraSystemInstance_*>)local_90;
    while( true ) {
      if ((param_1->TickBatch).ArrayNum != iVar14) {
        local_a7[2] = 0;
        `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_a7 + 2);
      }
      FVar19 = local_88;
      if (FVar18 == FVar5) break;
      FNiagaraSystemInstance::Tick_Concurrent(*(FNiagaraSystemInstance **)FVar18,true);
      FVar18 = (ForElementType<FNiagaraSystemInstance_*>)((longlong)FVar18 + 8);
    }
  }
  else {
    if (GNiagaraSystemSimulationTickBatchMode == 1) {
      if (param_2) goto LAB_1493e3243;
    }
    else if (GNiagaraSystemSimulationTickBatchMode == 2) goto LAB_1493e3243;
    local_78.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 4;
    pFVar15 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x120,8);
    if (pFVar15 == (FTaskBase *)0x0) {
      pFVar15 = (FTaskBase *)0x0;
    }
    else {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar15,&param_1->BeforeInstancesTickGraphEvents);
      pFVar15->_padding_ =
           (longlong)&___7__TGraphTask_UFNiagaraSystemInstanceTickConcurrentTask____6B_;
    }
    pUVar9 = param_1->World;
    pFVar15[1]._padding_ = (longlong)this;
    pFVar15[1].RefCount = (atomic<unsigned_int>)0x0;
    pFVar15[1].NumLocks = (atomic<unsigned_int>)0x0;
    piVar4 = &(param_1->TickBatch).ArrayNum;
    FVar19 = (param_1->TickBatch).AllocatorInstance.SecondaryData;
    iVar14 = *piVar4;
    *(int *)&pFVar15[1].Pipe = iVar14;
    if (FVar19 == (ForElementType<FNiagaraSystemInstance_*>)0x0) {
      FVar19 = (ForElementType<FNiagaraSystemInstance_*>)&param_1->TickBatch;
    }
    piVar1 = (int *)((longlong)&pFVar15[1].Pipe + 4);
    if (iVar14 == 0) {
      *piVar1 = 4;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraSystemInstance_*>_>
                (8,8,iVar14,0,(ForElementType<FNiagaraSystemInstance_*> *)&pFVar15[1]._padding_,
                 iVar14,piVar1);
      _Dst = *(longlong **)&pFVar15[1].RefCount;
      if (*(longlong **)&pFVar15[1].RefCount == (longlong *)0x0) {
        _Dst = &pFVar15[1]._padding_;
      }
      memcpy(_Dst,(void *)FVar19,(longlong)iVar14 << 3);
    }
    *(UWorld **)&pFVar15[1].StateChangeEvent = pUVar9;
    TVar13 = NiagaraSimulationTaskPriority::GetTickGroupPriority
                       (*(ETickingGroup *)(pFVar15[1]._padding_ + 0x20),
                        (bool)((byte)(*(uint *)(*(longlong *)(pFVar15[1]._padding_ + 0x10) + 0x5d0)
                                     >> 3) & 1));
    *(Type *)&pFVar15[1]._padding_ = TVar13;
    UE::Tasks::Private::TranslatePriority(TVar13,local_a7,&local_a8);
    UE::Tasks::Private::FTaskBase::Init(pFVar15,L"GraphTask",local_a7[0],local_a8,None);
    if (pFVar15 != (FTaskBase *)0x0) {
      LOCK();
      pFVar15->RefCount = (atomic<unsigned_int>)((int)pFVar15->RefCount + 1);
      UNLOCK();
    }
    local_a0.Reference = (FBaseGraphTask *)pFVar15;
    UE::Tasks::Private::FTaskBase::TryLaunch(pFVar15,0x120);
    FVar19 = (param_1->TickBatch).AllocatorInstance.SecondaryData;
    local_90 = &param_1->TickBatch;
    iVar14 = *piVar4;
    if (FVar19 == (ForElementType<FNiagaraSystemInstance_*>)0x0) {
      FVar19 = (ForElementType<FNiagaraSystemInstance_*>)local_90;
    }
    FVar18 = (ForElementType<FNiagaraSystemInstance_*>)((longlong)FVar19 + (longlong)iVar14 * 8);
    while( true ) {
      if (*piVar4 != iVar14) {
        local_a7[1] = 0;
        `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_a7 + 1);
      }
      if (FVar19 == FVar18) break;
      pFVar15 = *(FTaskBase **)(*(longlong *)FVar19 + 0x850);
      if (pFVar15 != (FTaskBase *)local_a0.Reference) {
        *(FBaseGraphTask **)(*(longlong *)FVar19 + 0x850) = local_a0.Reference;
        if ((FTaskBase *)local_a0.Reference != (FTaskBase *)0x0) {
          LOCK();
          *(atomic<unsigned_int> *)&(local_a0.Reference)->field_0x30 =
               (atomic<unsigned_int>)
               ((int)*(atomic<unsigned_int> *)&(local_a0.Reference)->field_0x30 + 1);
          UNLOCK();
        }
        if (pFVar15 != (FTaskBase *)0x0) {
          LOCK();
          paVar2 = &pFVar15->RefCount;
          aVar8 = *paVar2;
          *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
          UNLOCK();
          if (aVar8 == (atomic<unsigned_int>)0x1) {
            (**(code **)pFVar15->_padding_)(pFVar15,1);
          }
        }
      }
      FVar19 = (ForElementType<FNiagaraSystemInstance_*>)((longlong)FVar19 + 8);
    }
    FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar16 = local_78.AllocatorInstance.SecondaryData;
    }
    if ((ulonglong)FVar16 <= &local_a0) {
      FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
      if (local_78.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar16 = local_78.AllocatorInstance.SecondaryData;
      }
      if ((&local_a0 <
           (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar16 + (longlong)local_78.ArrayMax * 8)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
    if (local_78.ArrayNum == local_78.ArrayMax) {
      local_78.ArrayNum =
           UE::Core::Private::
           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                     (0x808,&local_78.AllocatorInstance,&local_78.ArrayMax);
    }
    FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar16 = local_78.AllocatorInstance.SecondaryData;
    }
    pTVar6 = (TRefCountPtr<FBaseGraphTask> *)((longlong)FVar16 + (longlong)local_78.ArrayNum * 8);
    local_78.ArrayNum = local_78.ArrayNum + 1;
    pTVar6->Reference = (FBaseGraphTask *)0x0;
    pTVar6->Reference = local_a0.Reference;
    pTVar3 = &param_1->TickBatch;
    FVar19 = (ForElementType<FNiagaraSystemInstance_*>)&param_1->TickBatch;
    if ((FTaskBase *)local_a0.Reference != (FTaskBase *)0x0) {
      LOCK();
      *(atomic<unsigned_int> *)&(local_a0.Reference)->field_0x30 =
           (atomic<unsigned_int>)
           ((int)*(atomic<unsigned_int> *)&(local_a0.Reference)->field_0x30 + 1);
      UNLOCK();
      LOCK();
      paVar2 = (atomic<unsigned_int> *)&(local_a0.Reference)->field_0x30;
      aVar8 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      FVar19 = (ForElementType<FNiagaraSystemInstance_*>)pTVar3;
      if ((aVar8 == (atomic<unsigned_int>)0x1) &&
         ((FTaskBase *)local_a0.Reference != (FTaskBase *)0x0)) {
        (*(code *)**(undefined8 **)local_a0.Reference)(local_a0.Reference,1);
      }
    }
  }
  pFVar15 = (FTaskBase *)0x0;
  if (((param_1->TickBatch).ArrayNum < 1) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FVar18 = (param_1->TickBatch).AllocatorInstance.SecondaryData;
  if (FVar18 == (ForElementType<FNiagaraSystemInstance_*>)0x0) {
    FVar18 = FVar19;
  }
  FVar20 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)(*(longlong *)FVar18 + 0x848);
  FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar16 = local_78.AllocatorInstance.SecondaryData;
  }
  if ((ulonglong)FVar16 <= (ulonglong)FVar20) {
    FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
    if (local_78.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar16 = local_78.AllocatorInstance.SecondaryData;
    }
    if (((ulonglong)FVar20 < (ulonglong)((longlong)FVar16 + (longlong)local_78.ArrayMax * 8)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  if (local_78.ArrayNum == local_78.ArrayMax) {
    local_78.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                   (0x808,&local_78.AllocatorInstance,&local_78.ArrayMax);
  }
  FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar16 = local_78.AllocatorInstance.SecondaryData;
  }
  lVar17 = (longlong)local_78.ArrayNum;
  local_78.ArrayNum = local_78.ArrayNum + 1;
  ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar16 + lVar17 * 8))->Reference =
       (FBaseGraphTask *)0x0;
  TVar10.Reference = *(FBaseGraphTask **)FVar20;
  ((TRefCountPtr<FBaseGraphTask> *)((longlong)FVar16 + lVar17 * 8))->Reference = TVar10.Reference;
  if (TVar10.Reference != (FBaseGraphTask *)0x0) {
    LOCK();
    *(int *)&(TVar10.Reference)->field_0x30 = *(int *)&(TVar10.Reference)->field_0x30 + 1;
    UNLOCK();
  }
  this_00 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x130,8);
  if (this_00 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_00,&local_78);
    this_00->_padding_ = (longlong)&___7__TGraphTask_UFNiagaraSystemInstanceFinalizeTask____6B_;
    pFVar15 = this_00;
  }
  FNiagaraSystemInstanceFinalizeTask::FNiagaraSystemInstanceFinalizeTask
            ((FNiagaraSystemInstanceFinalizeTask *)(pFVar15 + 1),local_80,local_90);
  UE::Tasks::Private::TranslatePriority(GameThread,&local_a3,&local_a4);
  UE::Tasks::Private::FTaskBase::Init(pFVar15,L"GraphTask",local_a3,local_a4,None);
  if (pFVar15 != (FTaskBase *)0x0) {
    LOCK();
    pFVar15->RefCount = (atomic<unsigned_int>)((int)pFVar15->RefCount + 1);
    UNLOCK();
  }
  local_98 = pFVar15;
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar15,0x130);
  if ((param_1->CompletionEvents ==
       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.CompletionEvents != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                          ,0x43b,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)param_1->CompletionEvents;
  FVar20 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar16 + 0x20);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar16 + 0x20) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar20 = FVar16;
  }
  if ((((ulonglong)FVar20 <= &local_98) &&
      (&local_98 <
       (FTaskBase **)((longlong)FVar20 + (longlong)*(int *)((longlong)FVar16 + 0x2c) * 8))) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar12)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar14 = *(int *)((longlong)FVar16 + 0x28);
  if (iVar14 == *(int *)((longlong)FVar16 + 0x2c)) {
    iVar14 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                       (0x808,(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)FVar16,
                        (int *)((longlong)FVar16 + 0x2c));
  }
  *(int *)((longlong)FVar16 + 0x28) = iVar14 + 1;
  FVar20 = *(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar16 + 0x20);
  if (*(ForElementType<TRefCountPtr<FBaseGraphTask>_> *)((longlong)FVar16 + 0x20) ==
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar20 = FVar16;
  }
  puVar7 = (undefined8 *)((longlong)FVar20 + (longlong)iVar14 * 8);
  *puVar7 = 0;
  *puVar7 = local_98;
  if (local_98 != (FTaskBase *)0x0) {
    LOCK();
    local_98->RefCount = (atomic<unsigned_int>)((int)local_98->RefCount + 1);
    UNLOCK();
    LOCK();
    paVar2 = &local_98->RefCount;
    aVar8 = *paVar2;
    *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
    UNLOCK();
    if ((aVar8 == (atomic<unsigned_int>)0x1) && (local_98 != (FTaskBase *)0x0)) {
      (**(code **)local_98->_padding_)(local_98,1);
    }
  }
  FVar16 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FVar16 = local_78.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar16,local_78.ArrayNum);
  if (local_78.AllocatorInstance.SecondaryData != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0
     ) {
    FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
  }
LAB_1493e38ab:
  iVar14 = *(int *)((longlong)FVar19 + 0x2c);
  (param_1->TickBatch).ArrayNum = 0;
  if (iVar14 < 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraSystemInstance_*>_>
              (8,8,0,(ForElementType<FNiagaraSystemInstance_*> *)FVar19,0,
               (int *)((longlong)FVar19 + 0x2c));
  }
  return;
}

// GetCrashReporterTag @ 1493e6b20

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

FString * __thiscall FNiagaraSystemSimulation::GetCrashReporterTag(FNiagaraSystemSimulation *this)

{
  FString *pFVar1;
  FScriptContainerElement *pFVar2;
  FString *pFVar3;
  longlong lVar4;
  bool bVar5;
  FString local_58;
  ForAnyElementType local_48;
  int local_40;
  int local_3c;
  FString local_38;
  FString local_28;
  
  pFVar1 = &this->CrashReporterTag;
  if ((this->CrashReporterTag).Data.ArrayNum < 2) {
    bVar5 = this->System == (UNiagaraSystem *)0x0;
    if (bVar5) {
      pFVar3 = ::FString::FString(&local_38,L"nullptr");
    }
    else {
      pFVar3 = UObjectBaseUtility::GetFullName
                         ((UObjectBaseUtility *)this->System,&local_28,(UObject *)0x0,None);
    }
    local_48.Data = (FScriptContainerElement *)0x0;
    local_40 = (pFVar3->Data).ArrayNum;
    lVar4 = (longlong)local_40;
    pFVar2 = (pFVar3->Data).AllocatorInstance.Data;
    if (local_40 == 0) {
      local_3c = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_40,0,&local_48,local_40,&local_3c);
      memcpy(local_48.Data,pFVar2,lVar4 * 2);
    }
    if ((bVar5) && (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if ((!bVar5) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    ::FString::PrintfImpl(&local_58,L"SystemSimulation | System: %s | bSolo: %s |");
    if (pFVar1 != &local_58) {
      pFVar2 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_58.Data.AllocatorInstance.Data;
      (this->CrashReporterTag).Data.ArrayNum = local_58.Data.ArrayNum;
      (this->CrashReporterTag).Data.ArrayMax = local_58.Data.ArrayMax;
      local_58.Data.ArrayNum = 0;
      local_58.Data.ArrayMax = 0;
      local_58.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (local_48.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data);
    }
  }
  return pFVar1;
}

// GetGPUTickHandlingMode @ 1493e79b0

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

ENiagaraGPUTickHandlingMode __thiscall
FNiagaraSystemSimulation::GetGPUTickHandlingMode(FNiagaraSystemSimulation *this)

{
  undefined1 *puVar1;
  bool bVar2;
  ENiagaraGPUTickHandlingMode EVar3;
  
  if (this->DispatchInterface != (FNiagaraGpuComputeDispatchInterface *)0x0) {
    bVar2 = FNiagaraUtilities::AllowGPUParticles();
    if (((bVar2) && (this->System != (UNiagaraSystem *)0x0)) &&
       (this->System->bHasAnyGPUEmitters != 0)) {
      if ((this->System->bHasDIsWithPostSimulateTick == 0) &&
         (GNiagaraSystemSimulationConcurrentGPUTickInit != 0)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if ((GNiagaraSystemSimulationBatchGPUTickSubmit != 0) && (this->bIsSolo == 0)) {
        EVar3 = ConcurrentBatched;
        if (bVar2) {
          EVar3 = GameThreadBatched;
        }
        return EVar3;
      }
      EVar3 = Concurrent;
      if (bVar2) {
        EVar3 = GameThread;
      }
      return EVar3;
    }
  }
  return None;
}

// GetParameterCollectionInstance @ 1493e8530

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

UNiagaraParameterCollectionInstance * __thiscall
FNiagaraSystemSimulation::GetParameterCollectionInstance
          (FNiagaraSystemSimulation *this,UNiagaraParameterCollection *param_1)

{
  FScriptContainerElement *pFVar1;
  UNiagaraSystem *pUVar2;
  UNiagaraParameterCollection *pUVar3;
  FNiagaraWorldManager *this_00;
  UNiagaraParameterCollectionInstance *pUVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  
  pUVar2 = this->System;
  if (pUVar2 != (UNiagaraSystem *)0x0) {
    pFVar5 = (pUVar2->ParameterCollectionOverrides).AllocatorInstance.Data;
    pFVar1 = pFVar5 + (longlong)(pUVar2->ParameterCollectionOverrides).ArrayNum * 8;
    for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 8) {
      pUVar4 = *(UNiagaraParameterCollectionInstance **)pFVar5;
      if (pUVar4 != (UNiagaraParameterCollectionInstance *)0x0) {
        pUVar3 = (pUVar4->Collection).field0_0x0.DebugPtr;
        if (pUVar3 == (UNiagaraParameterCollection *)0x0) {
          bVar6 = param_1 == (UNiagaraParameterCollection *)0x0;
        }
        else {
          bVar6 = pUVar3 == param_1;
        }
        if (bVar6) {
          if (UE::GC::GIsIncrementalReachabilityPending) {
            UE::GC::MarkAsReachable((UObject *)pUVar4);
          }
          return pUVar4;
        }
      }
    }
  }
  this_00 = FNiagaraWorldManager::Get(this->World);
  if (this_00 == (FNiagaraWorldManager *)0x0) {
    return (UNiagaraParameterCollectionInstance *)0x0;
  }
  pUVar4 = FNiagaraWorldManager::GetParameterCollection(this_00,param_1);
  return pUVar4;
}

// Init @ 1493eb030

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

bool __thiscall
FNiagaraSystemSimulation::Init
          (FNiagaraSystemSimulation *this,UNiagaraSystem *param_1,UWorld *param_2,bool param_3,
          ETickingGroup param_4)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  UNiagaraSystem *pUVar3;
  FName this_00;
  TObjectPtr<UNiagaraScript>_u_0 TVar4;
  UNiagaraParameterCollection *pUVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  byte bVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_Init> FVar11;
  FNiagaraWorldManager *pFVar12;
  FNiagaraGpuComputeDispatchInterface *pFVar13;
  FNiagaraSystemStateData *pFVar14;
  FNiagaraScriptExecutionContextBase *pFVar15;
  FNiagaraScriptExecutionContextBase *pFVar16;
  TArray<TObjectPtr<UNiagaraParameterCollection>,TSizedDefaultAllocator<32>_> *pTVar17;
  UNiagaraParameterCollectionInstance *pUVar18;
  ForAnyElementType FVar19;
  uint uVar20;
  FName FVar21;
  FNiagaraScriptExecutionContextBase *pFVar22;
  FScriptContainerElement *pFVar23;
  uint local_res8;
  uint uStackX_c;
  TObjectPtr<UNiagaraScript>_u_0 local_res10;
  FName local_res18;
  byte local_res20;
  UNiagaraEffectType *local_c8;
  float local_c0 [2];
  FName local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  pFVar22 = (FNiagaraScriptExecutionContextBase *)0x0;
  FVar11 = StatPtr_STAT_NiagaraSystemSim_Init;
  if (StatPtr_STAT_NiagaraSystemSim_Init ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_Init>)0x0) {
    pFVar10 = ::FName::FName(&local_b8,"STAT_NiagaraSystemSim_Init");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_Init>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_Init,*pFVar10,
                        L"System Sim Init [GT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar11;
  bVar9 = 0;
  local_res20 = 0;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_1493eb1ad:
    FVar21.ComparisonIndex.Value = 0;
    FVar21.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.DebugPtr = local_res10.DebugPtr & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10.ObjectPtr,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar9 = 1;
      local_res20 = 1;
      if (-1 < CpuChannel->Enabled) {
        local_res18 = FVar21;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                   ,0x251);
        bVar9 = 3;
        local_res20 = 3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493eb1ad;
    local_res8 = FVar21.ComparisonIndex.Value.Value;
    uStackX_c = FVar21.Number;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    local_res20 = bVar9 | 4;
  }
  this->System = param_1;
  local_c8 = (param_1->EffectType).field0_0x0.DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_c8 != (UNiagaraEffectType *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_c8);
  }
  FWeakObjectPtr::operator=(&(this->EffectType).WeakPtr,(FObjectPtr)&local_c8);
  this->SystemTickGroup = param_4;
  this->World = param_2;
  *(uint *)&this->field_0x30 = (uint)param_3 << 3 | *(uint *)&this->field_0x30 & 0xfffffff1;
  pFVar12 = FNiagaraWorldManager::Get(param_2);
  if ((pFVar12 == (FNiagaraWorldManager *)0x0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("WorldMan",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x25f,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pFVar13 = FNiagaraGpuComputeDispatchInterface::Get(this->World);
  this->DispatchInterface = pFVar13;
  bVar7 = FNiagaraVMExecutableData::IsValid
                    (&((this->System->SystemSpawnScript).field0_0x0.DebugPtr)->CachedScriptVM);
  if (bVar7) {
    bVar7 = FNiagaraVMExecutableData::IsValid
                      (&((this->System->SystemUpdateScript).field0_0x0.DebugPtr)->CachedScriptVM);
    uVar20 = 1;
    if (!bVar7) goto LAB_1493eb280;
  }
  else {
LAB_1493eb280:
    uVar20 = 0;
  }
  this->bCanExecute = 0;
  *(uint *)&this->field_0x30 = *(uint *)&this->field_0x30 | uVar20;
  pFVar14 = UNiagaraSystem::GetSystemStateData(this->System);
  uVar20 = (*(int *)pFVar14 << 4 ^ *(uint *)&this->field_0x30) & 0x10 ^ *(uint *)&this->field_0x30;
  *(uint *)&this->field_0x30 = uVar20;
  *(uint *)&this->field_0x30 = (*(int *)pFVar14 << 4 ^ uVar20) & 0x20 ^ uVar20;
  bVar7 = (this->System->MaxDeltaTime).bIsSet;
  if (bVar7 != false) {
    local_c0[0] = (this->System->MaxDeltaTime).TypedValue;
  }
  if ((TOptional<float> *)local_c0 != &this->MaxDeltaTime) {
    if (bVar7 == false) {
      if ((this->MaxDeltaTime).bIsSet != false) {
        (this->MaxDeltaTime).bIsSet = false;
      }
    }
    else {
      (this->MaxDeltaTime).TypedValue = local_c0[0];
      (this->MaxDeltaTime).bIsSet = true;
    }
  }
  if (this->bCanExecute != 0) {
    pUVar3 = this->System;
    FNiagaraDataSet::Init(&this->MainDataSet,&(pUVar3->SystemCompiledData).DataSetCompiledData,0);
    FNiagaraDataSet::Init
              (&this->SpawningDataSet,&(pUVar3->SystemCompiledData).DataSetCompiledData,0);
    FNiagaraDataSet::Init(&this->PausedDataSet,&(pUVar3->SystemCompiledData).DataSetCompiledData,0);
    FNiagaraDataSet::Init
              (&this->SpawnInstanceParameterDataSet,
               &(pUVar3->SystemCompiledData).SpawnInstanceParamsDataSetCompiledData,0);
    FNiagaraDataSet::Init
              (&this->UpdateInstanceParameterDataSet,
               &(pUVar3->SystemCompiledData).UpdateInstanceParamsDataSetCompiledData,0);
    this_00 = (FName)(this->System->SystemSpawnScript).field0_0x0.DebugPtr;
    TVar4 = (TObjectPtr<UNiagaraScript>_u_0)(this->System->SystemUpdateScript).field0_0x0.DebugPtr;
    local_res10 = TVar4;
    local_res18 = this_00;
    pFVar15 = ::operator_new(0x2b8);
    pFVar16 = pFVar22;
    if (pFVar15 != (FNiagaraScriptExecutionContextBase *)0x0) {
      FNiagaraScriptExecutionContextBase::FNiagaraScriptExecutionContextBase(pFVar15);
      pFVar15->_padding_ = (longlong)&___7FNiagaraSystemScriptExecutionContext__6B_;
      pFVar15[1]._padding_ = 0;
      pFVar15[1].Script = (UNiagaraScript *)0x0;
      pFVar15[1].VectorVMState = (FVectorVMState *)0x0;
      pFVar15->ScriptType = Spawn;
      pFVar16 = pFVar15;
    }
    pFVar15 = (this->SpawnExecContext).Ptr;
    (this->SpawnExecContext).Ptr = pFVar16;
    if (pFVar15 != (FNiagaraScriptExecutionContextBase *)0x0) {
      (**(code **)pFVar15->_padding_)(pFVar15,1);
    }
    pFVar16 = ::operator_new(0x2b8);
    if (pFVar16 != (FNiagaraScriptExecutionContextBase *)0x0) {
      FNiagaraScriptExecutionContextBase::FNiagaraScriptExecutionContextBase(pFVar16);
      pFVar16->_padding_ = (longlong)&___7FNiagaraSystemScriptExecutionContext__6B_;
      pFVar16[1]._padding_ = 0;
      pFVar16[1].Script = (UNiagaraScript *)0x0;
      pFVar16[1].VectorVMState = (FVectorVMState *)0x0;
      pFVar16->ScriptType = Update;
      pFVar22 = pFVar16;
    }
    pFVar16 = (this->UpdateExecContext).Ptr;
    (this->UpdateExecContext).Ptr = pFVar22;
    if (pFVar16 != (FNiagaraScriptExecutionContextBase *)0x0) {
      (**(code **)pFVar16->_padding_)(pFVar16,1);
    }
    pFVar22 = (this->SpawnExecContext).Ptr;
    bVar9 = (**(code **)(pFVar22->_padding_ + 8))(pFVar22,0,this_00,0);
    pFVar22 = (this->UpdateExecContext).Ptr;
    *(uint *)&this->field_0x30 = *(uint *)&this->field_0x30 & (bVar9 | 0xfffffffe);
    bVar9 = (**(code **)(pFVar22->_padding_ + 8))(pFVar22,0,TVar4.DebugPtr,0);
    *(uint *)&this->field_0x30 = *(uint *)&this->field_0x30 & (bVar9 | 0xfffffffe);
    pTVar17 = UNiagaraScript::GetCachedParameterCollectionReferences((UNiagaraScript *)this_00);
    pFVar23 = (pTVar17->AllocatorInstance).Data;
    iVar2 = pTVar17->ArrayNum;
    pFVar1 = pFVar23 + (longlong)iVar2 * 8;
LAB_1493eb4a8:
    do {
      if (pTVar17->ArrayNum != iVar2) {
        `TCheckedPointerIterator<TObjectPtr<UNiagaraParameterCollection>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(&param_4);
      }
      if (pFVar23 == pFVar1) goto LAB_1493eb5e4;
      pUVar5 = *(UNiagaraParameterCollection **)pFVar23;
      pFVar22 = (this->SpawnExecContext).Ptr;
      if (pUVar5 == (UNiagaraParameterCollection *)0x0) {
        if (1 < (byte)LogNiagara._0_1_) {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->System,&local_90,(UObject *)0x0);
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Attempting_to_b_151e16490,
                     (FLogCategoryBase *)&LogNiagara);
          FVar19.Data = local_90.Data.AllocatorInstance.Data;
          goto LAB_1493eb5d1;
        }
      }
      else {
        pUVar18 = GetParameterCollectionInstance(this,pUVar5);
        if (pUVar18 != (UNiagaraParameterCollectionInstance *)0x0) {
          FNiagaraParameterStore::Bind
                    (&pUVar18->ParameterStorage,(FNiagaraParameterStore *)&pFVar22->Parameters,
                     (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
          pFVar23 = pFVar23 + 8;
          goto LAB_1493eb4a8;
        }
        if (1 < (byte)LogNiagara._0_1_) {
          UObjectBaseUtility::GetPathName
                    ((UObjectBaseUtility *)this->System,&local_a0,(UObject *)0x0);
          UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_b0,(UObject *)0x0);
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)&PTR_u_Attempting_to_b_151e16388,
                     (FLogCategoryBase *)&LogNiagara);
          FVar19.Data = local_a0.Data.AllocatorInstance.Data;
          if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_b0.Data.AllocatorInstance.Data);
            FVar19.Data = local_a0.Data.AllocatorInstance.Data;
          }
LAB_1493eb5d1:
          if (FVar19.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(FVar19.Data);
          }
        }
      }
      pFVar23 = pFVar23 + 8;
    } while( true );
  }
LAB_1493eb82e:
  bVar9 = local_res20;
  if ((local_res20 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((bVar9 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((bVar9 & 4) != 0) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return true;
LAB_1493eb5e4:
  pTVar17 = UNiagaraScript::GetCachedParameterCollectionReferences(local_res10.DebugPtr);
  pFVar23 = (pTVar17->AllocatorInstance).Data;
  iVar2 = pTVar17->ArrayNum;
  pFVar1 = pFVar23 + (longlong)iVar2 * 8;
LAB_1493eb600:
  do {
    if (pTVar17->ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UNiagaraParameterCollection>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (pFVar23 == pFVar1) break;
    pUVar5 = *(UNiagaraParameterCollection **)pFVar23;
    pFVar22 = (this->UpdateExecContext).Ptr;
    if (pUVar5 == (UNiagaraParameterCollection *)0x0) {
      if (1 < (byte)LogNiagara._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this->System,local_60,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Attempting_to_b_151e16490,
                   (FLogCategoryBase *)&LogNiagara);
        FVar19.Data = local_60[0].Data.AllocatorInstance.Data;
        goto LAB_1493eb729;
      }
    }
    else {
      pUVar18 = GetParameterCollectionInstance(this,pUVar5);
      if (pUVar18 != (UNiagaraParameterCollectionInstance *)0x0) {
        FNiagaraParameterStore::Bind
                  (&pUVar18->ParameterStorage,(FNiagaraParameterStore *)&pFVar22->Parameters,
                   (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
        pFVar23 = pFVar23 + 8;
        goto LAB_1493eb600;
      }
      if (1 < (byte)LogNiagara._0_1_) {
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this->System,&local_70,(UObject *)0x0)
        ;
        UObjectBaseUtility::GetPathName((UObjectBaseUtility *)pUVar5,&local_80,(UObject *)0x0);
        UE::Logging::Private::BasicLog<2>
                  ((FStaticBasicLogRecord *)&PTR_u_Attempting_to_b_151e16388,
                   (FLogCategoryBase *)&LogNiagara);
        FVar19.Data = local_70.Data.AllocatorInstance.Data;
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
          FVar19.Data = local_70.Data.AllocatorInstance.Data;
        }
LAB_1493eb729:
        if (FVar19.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(FVar19.Data);
        }
      }
    }
    pFVar23 = pFVar23 + 8;
  } while( true );
  FNiagaraParameterStore::Bind
            ((FNiagaraParameterStore *)((longlong)local_res18 + 0x48),
             (FNiagaraParameterStore *)&((this->SpawnExecContext).Ptr)->Parameters,
             (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
  FNiagaraParameterStore::Bind
            (&(local_res10.DebugPtr)->RapidIterationParameters,
             (FNiagaraParameterStore *)&((this->UpdateExecContext).Ptr)->Parameters,
             (TArray<FNiagaraBoundParameter,TSizedDefaultAllocator<32>_> *)0x0);
  FNiagaraParameterDirectBinding<int>::Init
            (&this->SpawnNumSystemInstancesParam,
             (FNiagaraParameterStore *)&((this->SpawnExecContext).Ptr)->Parameters,
             &INiagaraModule::Engine_NumSystemInstances);
  FNiagaraParameterDirectBinding<int>::Init
            (&this->UpdateNumSystemInstancesParam,
             (FNiagaraParameterStore *)&((this->UpdateExecContext).Ptr)->Parameters,
             &INiagaraModule::Engine_NumSystemInstances);
  FNiagaraParameterDirectBinding<float>::Init
            (&this->SpawnGlobalSpawnCountScaleParam,
             (FNiagaraParameterStore *)&((this->SpawnExecContext).Ptr)->Parameters,
             &INiagaraModule::Engine_GlobalSpawnCountScale);
  FNiagaraParameterDirectBinding<float>::Init
            (&this->UpdateGlobalSpawnCountScaleParam,
             (FNiagaraParameterStore *)&((this->UpdateExecContext).Ptr)->Parameters,
             &INiagaraModule::Engine_GlobalSpawnCountScale);
  FNiagaraParameterDirectBinding<float>::Init
            (&this->SpawnGlobalSystemCountScaleParam,
             (FNiagaraParameterStore *)&((this->SpawnExecContext).Ptr)->Parameters,
             &INiagaraModule::Engine_GlobalSystemScale);
  FNiagaraParameterDirectBinding<float>::Init
            (&this->UpdateGlobalSystemCountScaleParam,
             (FNiagaraParameterStore *)&((this->UpdateExecContext).Ptr)->Parameters,
             &INiagaraModule::Engine_GlobalSystemScale);
  goto LAB_1493eb82e;
}

// InitParameterDataSetBindings @ 1493edb40

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
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
FNiagaraSystemSimulation::InitParameterDataSetBindings
          (FNiagaraSystemSimulation *this,FNiagaraSystemInstance *param_1)

{
  int *piVar1;
  TArray<TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  *this_00;
  uint uVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_> *pTVar9;
  FNiagaraScriptExecutionContext *pFVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<_protected:_void___cdecl_FNiagaraSystemSimulation::InitParameterDataSetBindings(FNiagaraSystemInstance_*)_::_5_::FStat_STAT_Niagara_InitParameterDataSetBindings>
  FVar16;
  FNiagaraEmitterInstanceImpl *this_01;
  uint uVar17;
  FName FVar18;
  FNiagaraDataSet *pFVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  longlong lVar25;
  uint uVar26;
  FScriptContainerElement *pFVar27;
  longlong lVar28;
  FColor_u_0 local_d0;
  int local_cc;
  longlong local_c8;
  longlong local_c0;
  FName local_b8;
  TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_> *local_b0;
  int *local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  FName local_88;
  FName local_80;
  TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_> *local_70;
  TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_> *local_68;
  TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_> *local_60;
  TArrayView<FNiagaraScriptExecutionContext,int> local_58;
  FName local_48;
  FName local_40;
  
  if (this->bBindingsInitialized != 0) {
    return;
  }
  if (param_1 == (FNiagaraSystemInstance *)0x0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_Niagara_InitParameterDataSetBindings ==
        (FThreadSafeStaticStat<_protected:_void___cdecl_FNiagaraSystemSimulation::InitParameterDataSetBindings(FNiagaraSystemInstance_*)_::_5_::FStat_STAT_Niagara_InitParameterDataSetBindings>
         )0x0) {
      pFVar15 = ::FName::FName(&local_48,"STAT_Niagara_InitParameterDataSetBindings");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Niagara_InitParameterDataSetBindings,
                 *pFVar15,L"STAT_Niagara_InitParameterDataSetBindings","STATGROUP_Quick",
                 "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar16 = StatPtr_STAT_Niagara_InitParameterDataSetBindings;
  if (StatPtr_STAT_Niagara_InitParameterDataSetBindings ==
      (FThreadSafeStaticStat<_protected:_void___cdecl_FNiagaraSystemSimulation::InitParameterDataSetBindings(FNiagaraSystemInstance_*)_::_5_::FStat_STAT_Niagara_InitParameterDataSetBindings>
       )0x0) {
    pFVar15 = ::FName::FName(&local_40,"STAT_Niagara_InitParameterDataSetBindings");
    FVar16 = (FThreadSafeStaticStat<_protected:_void___cdecl_FNiagaraSystemSimulation::InitParameterDataSetBindings(FNiagaraSystemInstance_*)_::_5_::FStat_STAT_Niagara_InitParameterDataSetBindings>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_Niagara_InitParameterDataSetBindings,*pFVar15,
                          L"STAT_Niagara_InitParameterDataSetBindings","STATGROUP_Quick",
                          "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar16;
  bVar8 = false;
  bVar7 = false;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_d0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_d0._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_b8.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                   ,0x9a2);
        bVar8 = true;
        bVar7 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar11 = true;
      goto LAB_1493edd12;
    }
  }
  bVar8 = bVar12;
  bVar7 = bVar11;
  bVar11 = false;
  local_88 = local_80;
  FVar18 = local_80;
LAB_1493edd12:
  this->bBindingsInitialized = 1;
  FNiagaraParameterStoreToDataSetBinding::Init
            (&this->SpawnInstanceParameterToDataSetBinding,&this->SpawnInstanceParameterDataSet,
             &param_1->InstanceParameters);
  FNiagaraParameterStoreToDataSetBinding::Init
            (&this->UpdateInstanceParameterToDataSetBinding,&this->UpdateInstanceParameterDataSet,
             &param_1->InstanceParameters);
  pFVar3 = (param_1->Emitters).AllocatorInstance.Data;
  uVar2 = (param_1->Emitters).ArrayNum;
  uVar22 = (ulonglong)(int)uVar2;
  if (((int)uVar2 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar12)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_68 = &this->DataSetToEmitterSpawnParameters;
  TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_>::SetNum
            (local_68,uVar2,Default);
  local_60 = &this->DataSetToEmitterUpdateParameters;
  TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_>::SetNum
            (local_60,uVar2,Default);
  this_00 = &this->DataSetToEmitterEventParameters;
  iVar20 = (this->DataSetToEmitterEventParameters).ArrayNum;
  piVar1 = &(this->DataSetToEmitterEventParameters).ArrayNum;
  local_a8 = piVar1;
  if (iVar20 < (int)uVar2) {
    iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,uVar2 - iVar20,&this_00->AllocatorInstance,piVar1,
                        &(this->DataSetToEmitterEventParameters).ArrayMax);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar13 * 0x10,0,
           (longlong)(int)(uVar2 - iVar20) << 4);
  }
  else {
    if ((int)uVar2 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar2);
    }
    if ((int)uVar2 < iVar20) {
      uVar26 = iVar20 - uVar2;
      if (((int)(uVar26 | uVar2) < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar12)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar26 != 0) {
        TArray<TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(this_00,uVar2,uVar26);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&this_00->AllocatorInstance,*piVar1,
                   &(this->DataSetToEmitterEventParameters).ArrayMax);
      }
    }
  }
  local_b0 = &this->DataSetToEmitterGPUParameters;
  TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_>::SetNum
            (local_b0,uVar2,Default);
  local_70 = &this->DataSetToEmitterRendererParameters;
  TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_>::SetNum
            (local_70,uVar2,Default);
  uVar26 = 0;
  local_98 = uVar22;
  if (0 < (int)uVar2) {
    local_c8 = 0;
    local_c0 = 0;
    local_90 = 0;
    uVar23 = uVar22;
    do {
      lVar25 = local_90;
      lVar28 = local_c0;
      lVar24 = local_c8;
      uVar17 = ~uVar26 >> 0x1f;
      iVar20 = (int)uVar23;
      uVar21 = 0;
      if ((int)uVar26 < iVar20) {
        uVar21 = uVar17;
      }
      if (uVar21 == 0) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
        if (bVar12) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar22 = (ulonglong)iVar20;
      }
      plVar4 = *(longlong **)(pFVar3 + lVar28);
      if (*(int *)((longlong)plVar4 + 0xd4) != 4) {
        uVar21 = 0;
        if ((int)uVar26 < (this->DataSetToEmitterRendererParameters).ArrayNum) {
          uVar21 = uVar17;
        }
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar19 = &this->MainDataSet;
        FNiagaraParameterStoreToDataSetBinding::Init
                  ((FNiagaraParameterStoreToDataSetBinding *)
                   ((local_70->AllocatorInstance).Data + lVar25),pFVar19,
                   (FNiagaraParameterStore *)(plVar4 + 8));
        this_01 = (FNiagaraEmitterInstanceImpl *)(**(code **)(*plVar4 + 0x68))();
        pTVar9 = local_68;
        if (this_01 == (FNiagaraEmitterInstanceImpl *)0x0) {
          uVar22 = (ulonglong)iVar20;
        }
        else {
          uVar21 = 0;
          if ((int)uVar26 < local_68->ArrayNum) {
            uVar21 = uVar17;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FNiagaraParameterStoreToDataSetBinding::Init
                    ((FNiagaraParameterStoreToDataSetBinding *)
                     ((pTVar9->AllocatorInstance).Data + lVar25),pFVar19,
                     (FNiagaraParameterStore *)&(this_01->SpawnExecContext)._padding_);
          pTVar9 = local_60;
          uVar21 = 0;
          if ((int)uVar26 < local_60->ArrayNum) {
            uVar21 = uVar17;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          FNiagaraParameterStoreToDataSetBinding::Init
                    ((FNiagaraParameterStoreToDataSetBinding *)
                     ((pTVar9->AllocatorInstance).Data + lVar25),pFVar19,
                     (FNiagaraParameterStore *)&(this_01->UpdateExecContext)._padding_);
          lVar5 = this_01->_padding_;
          if (lVar5 != 0) {
            uVar21 = 0;
            if ((int)uVar26 < local_b0->ArrayNum) {
              uVar21 = uVar17;
            }
            if ((uVar21 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            FNiagaraParameterStoreToDataSetBinding::Init
                      ((FNiagaraParameterStoreToDataSetBinding *)
                       ((local_b0->AllocatorInstance).Data + lVar25),pFVar19,
                       (FNiagaraParameterStore *)(lVar5 + 0x80));
          }
          FNiagaraEmitterInstanceImpl::GetEventExecutionContexts(this_01,&local_58);
          iVar20 = local_58.ArrayNum;
          local_cc = local_58.ArrayNum;
          uVar21 = 0;
          if ((int)uVar26 < *local_a8) {
            uVar21 = uVar17;
          }
          if ((uVar21 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_>::SetNum
                    ((TArray<FNiagaraParameterStoreToDataSetBinding,TSizedDefaultAllocator<32>_> *)
                     ((this->DataSetToEmitterEventParameters).AllocatorInstance.Data + lVar28),
                     iVar20,Default);
          uVar21 = 0;
          if (iVar20 < 1) {
            uVar23 = (ulonglong)uVar2;
            uVar22 = local_98;
          }
          else {
            local_a0 = 0;
            lVar24 = 0;
            do {
              uVar14 = 0;
              if ((int)uVar21 < local_58.ArrayNum) {
                uVar14 = ~uVar21 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0x14f,
                                      L"Array index out of bounds: %lld from an array of size %lld")
                 , bVar12)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar10 = local_58.DataPtr;
              uVar14 = 0;
              if ((int)uVar26 < *local_a8) {
                uVar14 = uVar17;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar27 = (this->DataSetToEmitterEventParameters).AllocatorInstance.Data + local_c0;
              uVar14 = 0;
              if ((int)uVar21 < *(int *)(pFVar27 + 8)) {
                uVar14 = ~uVar21 >> 0x1f;
              }
              if ((uVar14 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              lVar28 = local_a0;
              FNiagaraParameterStoreToDataSetBinding::Init
                        ((FNiagaraParameterStoreToDataSetBinding *)(*(longlong *)pFVar27 + local_a0)
                         ,&this->MainDataSet,
                         (FNiagaraParameterStore *)((longlong)&pFVar10->_padding_ + lVar24));
              local_a0 = lVar28 + 0x30;
              uVar21 = uVar21 + 1;
              lVar24 = lVar24 + 0x2b0;
            } while ((int)uVar21 < local_cc);
            uVar23 = (ulonglong)uVar2;
            uVar22 = local_98;
            lVar25 = local_90;
            lVar24 = local_c8;
            lVar28 = local_c0;
          }
        }
      }
      local_c8 = lVar24 + 1;
      local_90 = lVar25 + 0x30;
      local_c0 = lVar28 + 0x10;
      uVar26 = uVar26 + 1;
      FVar18 = local_88;
    } while (local_c8 < (longlong)uVar22);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar18,CycleScopeEnd);
  }
  return;
}

// MultiTick_GameThread @ 1493f0a00

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

bool __thiscall
FNiagaraSystemSimulation::MultiTick_GameThread
          (FNiagaraSystemSimulation *this,int param_1,float param_2,float param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  int *piVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  LARGE_INTEGER local_68;
  LARGE_INTEGER local_60 [11];
  
  if ((param_2 <= 0.0) || (param_1 < 1)) {
    bVar6 = false;
  }
  else {
    iVar5 = 0;
    (this->TickInfo).UsesFixedTick = true;
    (this->TickInfo).TickCount = param_1;
    (this->TickInfo).TickNumber = -1;
    (this->TickInfo).TimeStepFraction = 0.0;
    dVar4 = __real_4170000000000000;
    (this->TickInfo).SystemTick = param_2;
    (this->TickInfo).EngineTick = (float)param_1 * param_2;
    if (param_3 <= 0.0) {
      dVar3 = 0.0;
    }
    else {
      QueryPerformanceCounter(&local_68);
      dVar3 = (double)local_68.QuadPart * FGenericPlatformTime::SecondsPerCycle + (double)param_3 +
              dVar4;
    }
    fVar7 = __real_3f800000 / (float)param_1;
    do {
      (this->TickInfo).TickNumber = iVar5;
      local_68.QuadPart = 0;
      (this->TickInfo).TimeStepFraction = (float)(iVar5 + 1) * fVar7;
      Tick_GameThread_Internal(this,param_2,(TRefCountPtr<FBaseGraphTask> *)&local_68.s);
      if ((undefined8 *)local_68.QuadPart != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_68.QuadPart + 0x30);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (*(code *)**(undefined8 **)local_68)(local_68.QuadPart,1);
        }
      }
      if (this->System->bFixedTickDelta != false) {
        this->FixedDeltaTickAge = param_2 + this->FixedDeltaTickAge;
      }
      if (param_3 > 0.0) {
        QueryPerformanceCounter(local_60);
        if (dVar3 <= (double)local_60[0].QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar4)
        break;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_1);
    bVar6 = (this->TickInfo).TickNumber != param_1 + -1;
  }
  return bVar6;
}

// PauseInstance @ 1493f1240

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
FNiagaraSystemSimulation::PauseInstance
          (FNiagaraSystemSimulation *this,FNiagaraSystemInstance *param_1)

{
  ENiagaraSystemInstanceState EVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x970,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  WaitForInstancesTickComplete(this,false);
  EVar1 = param_1->SystemInstanceState;
  if (EVar1 == Running) {
    SetInstanceState(this,param_1,Paused);
    return;
  }
  if (EVar1 == PendingSpawn) {
    SetInstanceState(this,param_1,PendingSpawnPaused);
    return;
  }
  if (EVar1 != None) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance->SystemInstanceState == ENiagaraSystemInstanceState::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x980,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// PrepareForSystemSimulate @ 1493f23f0

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
FNiagaraSystemSimulation::PrepareForSystemSimulate
          (FNiagaraSystemSimulation *this,FNiagaraSystemSimulationTickContext *param_1)

{
  int *piVar1;
  uint uVar2;
  FNiagaraSystemInstance *pFVar3;
  FNiagaraDataBuffer *pFVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_PrepareForSimulateCNC> FVar15;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar16;
  TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *pTVar17;
  uint uVar18;
  longlong lVar19;
  FColor_u_0 local_res20 [2];
  FName local_80;
  FName local_78;
  LARGE_INTEGER local_70;
  FName local_68;
  FName local_60;
  FStatMessage local_50;
  
  FVar15 = StatPtr_STAT_NiagaraSystemSim_PrepareForSimulateCNC;
  if (StatPtr_STAT_NiagaraSystemSim_PrepareForSimulateCNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_PrepareForSimulateCNC>)0x0) {
    pFVar14 = ::FName::FName(&local_68,"STAT_NiagaraSystemSim_PrepareForSimulateCNC");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_PrepareForSimulateCNC>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NiagaraSystemSim_PrepareForSimulateCNC,*pFVar14,
                        L"System Prepare For Simulate [CNC]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar16 = *(FName *)FVar15;
  bVar12 = false;
  bVar9 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  bVar11 = false;
  bVar7 = false;
  if ((FVar16.ComparisonIndex.Value.Value != 0) ||
     (bVar6 = bVar12, bVar8 = bVar9, FVar16.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar12 = false;
      bVar9 = true;
      bVar11 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_80.ComparisonIndex.Value = FVar16.ComparisonIndex.Value.Value;
        local_80.Number = FVar16.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_80,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                   ,0x7e8);
        bVar12 = true;
        bVar9 = true;
        bVar11 = true;
        bVar7 = true;
      }
    }
    bVar6 = bVar12;
    bVar8 = bVar9;
    if (FThreadStats::bPrimaryEnable != false) {
      local_78 = FVar16;
      FThreadStats::AddMessage(FVar16,CycleScopeStart);
      bVar11 = true;
      bVar7 = true;
      goto LAB_1493f257e;
    }
  }
  bVar9 = bVar7;
  bVar12 = bVar11;
  bVar11 = false;
  bVar7 = false;
  local_78 = local_60;
  FVar16 = local_60;
LAB_1493f257e:
  uVar2 = param_1->Instances->ArrayNum;
  if (uVar2 != 0) {
    FNiagaraDataSet::BeginSimulate(&this->SpawnInstanceParameterDataSet,true);
    FNiagaraDataSet::BeginSimulate(&this->UpdateInstanceParameterDataSet,true);
    FNiagaraDataSet::Allocate(&this->SpawnInstanceParameterDataSet,uVar2,false);
    FNiagaraDataSet::Allocate(&this->UpdateInstanceParameterDataSet,uVar2,false);
    if ((this->System == (UNiagaraSystem *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("System != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                            ,0x7f7,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pTVar17 = param_1->Instances;
    uVar18 = 0;
    if (0 < pTVar17->ArrayNum) {
      lVar19 = 0;
      do {
        uVar13 = 0;
        if ((int)uVar18 < pTVar17->ArrayNum) {
          uVar13 = ~uVar18 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar3 = *(FNiagaraSystemInstance **)((pTVar17->AllocatorInstance).Data + lVar19);
        if (((pFVar3->InstanceParameters).bParametersDirty != 0) && (this->bCanExecute != 0)) {
          FNiagaraParameterStoreToDataSetBinding::ParameterStoreToDataSet
                    (&this->SpawnInstanceParameterToDataSetBinding,&pFVar3->InstanceParameters,
                     &this->SpawnInstanceParameterDataSet,uVar18);
          FNiagaraParameterStoreToDataSetBinding::ParameterStoreToDataSet
                    (&this->UpdateInstanceParameterToDataSetBinding,&pFVar3->InstanceParameters,
                     &this->UpdateInstanceParameterDataSet,uVar18);
        }
        FNiagaraConstantBufferToDataSetBinding::CopyToDataSets
                  (&param_1->System->SystemCompiledData,pFVar3,&this->SpawnInstanceParameterDataSet,
                   &this->UpdateInstanceParameterDataSet,uVar18);
        pTVar17 = param_1->Instances;
        uVar18 = uVar18 + 1;
        lVar19 = lVar19 + 8;
        FVar16 = local_78;
        bVar6 = bVar12;
        bVar11 = bVar7;
        bVar8 = bVar9;
      } while ((int)uVar18 < pTVar17->ArrayNum);
    }
    if (((this->SpawnInstanceParameterDataSet).DestinationData == (FNiagaraDataBuffer *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("DestinationData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                            ,0x15e,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->SpawnInstanceParameterDataSet).DestinationData;
    if ((pFVar4->NumInstancesAllocated < uVar2) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InNumInstances <= NumInstancesAllocated",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                            ,0x9c,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4->NumInstances = uVar2;
    if (((this->UpdateInstanceParameterDataSet).DestinationData == (FNiagaraDataBuffer *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("DestinationData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                            ,0x15e,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->UpdateInstanceParameterDataSet).DestinationData;
    if ((pFVar4->NumInstancesAllocated < uVar2) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InNumInstances <= NumInstancesAllocated",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                            ,0x9c,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4->NumInstances = uVar2;
    FNiagaraDataSet::EndSimulate(&this->SpawnInstanceParameterDataSet,true);
    FNiagaraDataSet::EndSimulate(&this->UpdateInstanceParameterDataSet,true);
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_50.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_70);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_70.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_70.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_70.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_70.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// RemoveFromInstanceList @ 1493f5710

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
FNiagaraSystemSimulation::RemoveFromInstanceList
          (FNiagaraSystemSimulation *this,FNiagaraSystemInstance *param_1)

{
  int *piVar1;
  ENiagaraSystemInstanceState EVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  
  EVar2 = param_1->SystemInstanceState;
  uVar3 = param_1->SystemInstanceIndex;
  lVar9 = (longlong)(int)uVar3;
  if (EVar2 == None) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("State != ENiagaraSystemInstanceState::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemSimulation.h"
                       ,0x161,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  piVar1 = &this->SystemInstancesPerState[EVar2].ArrayNum;
  if (((int)uVar3 < 0) || (*piVar1 <= (int)uVar3)) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SystemInstances.IsValidIndex(InstanceIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x380,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (*(FNiagaraSystemInstance **)
       (this->SystemInstancesPerState[EVar2].AllocatorInstance.Data + lVar9 * 8) != param_1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SystemInstances[InstanceIndex] == Instance",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x381,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  uVar7 = 0;
  if ((int)uVar3 < *piVar1) {
    uVar7 = ~uVar3 >> 0x1f;
  }
  if (uVar7 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  iVar10 = this->SystemInstancesPerState[EVar2].ArrayNum;
  pFVar4 = this->SystemInstancesPerState[EVar2].AllocatorInstance.Data;
  iVar8 = ~uVar3 + iVar10;
  if (1 < iVar8) {
    iVar8 = 1;
  }
  if (iVar8 != 0) {
    memmove(pFVar4 + lVar9 * 8,pFVar4 + (longlong)(iVar10 - iVar8) * 8,(longlong)iVar8 << 3);
  }
  iVar10 = this->SystemInstancesPerState[EVar2].ArrayNum + -1;
  this->SystemInstancesPerState[EVar2].ArrayNum = iVar10;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,8,&this->SystemInstancesPerState[EVar2].AllocatorInstance,iVar10,
             &this->SystemInstancesPerState[EVar2].ArrayMax);
  if ((-1 < (int)uVar3) && ((int)uVar3 < this->SystemInstancesPerState[EVar2].ArrayNum)) {
    if ((int)uVar3 < 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    *(uint *)(*(longlong *)(this->SystemInstancesPerState[EVar2].AllocatorInstance.Data + lVar9 * 8)
             + 0x30) = uVar3;
  }
  param_1->SystemInstanceIndex = -1;
  param_1->SystemInstanceState = None;
  return;
}

// RemoveInstance @ 1493f5b50

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
FNiagaraSystemSimulation::RemoveInstance
          (FNiagaraSystemSimulation *this,FNiagaraSystemInstance *param_1)

{
  undefined1 *puVar1;
  TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FBaseGraphTask *pFVar6;
  FNiagaraSystemInstance **ppFVar7;
  atomic<int> *paVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  UObject *pUVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  
  if (param_1->SystemInstanceIndex != -1) {
    bVar10 = IsInGameThread();
    if ((!bVar10) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInGameThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                            ,0x92e,L""), bVar10)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pUVar13 = FWeakObjectPtr::Get(&(this->EffectType).WeakPtr);
    if (pUVar13 != (UObject *)0x0) {
      *(int *)&pUVar13[2].field_0x20 = *(int *)&pUVar13[2].field_0x20 + -1;
    }
    pTVar2 = &this->PendingTickGroupPromotions;
    pFVar5 = (pTVar2->AllocatorInstance).Data;
    iVar12 = (this->PendingTickGroupPromotions).ArrayNum;
    for (pFVar15 = pFVar5; pFVar15 != pFVar5 + (longlong)iVar12 * 8; pFVar15 = pFVar15 + 8) {
      if (*(FNiagaraSystemInstance **)pFVar15 == param_1) {
        uVar14 = (uint)((longlong)pFVar15 - (longlong)pFVar5 >> 3);
        if (uVar14 != 0xffffffff) {
          uVar11 = 0;
          if ((int)(uVar14 + 1) <= iVar12) {
            uVar11 = ~uVar14 >> 0x1f;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          iVar4 = (this->PendingTickGroupPromotions).ArrayNum;
          pFVar5 = (pTVar2->AllocatorInstance).Data;
          iVar12 = iVar4 + ~uVar14;
          if (1 < iVar12) {
            iVar12 = 1;
          }
          if (iVar12 != 0) {
            memmove(pFVar5 + (longlong)(int)uVar14 * 8,pFVar5 + (longlong)(iVar4 - iVar12) * 8,
                    (longlong)iVar12 << 3);
          }
          piVar3 = &(this->PendingTickGroupPromotions).ArrayNum;
          *piVar3 = *piVar3 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,&pTVar2->AllocatorInstance,(this->PendingTickGroupPromotions).ArrayNum,
                     &(this->PendingTickGroupPromotions).ArrayMax);
        }
        break;
      }
    }
    if (this->System != (UNiagaraSystem *)0x0) {
      piVar3 = &this->System->ActiveInstances;
      *piVar3 = *piVar3 + -1;
    }
    if ((param_1->SystemInstanceState == Running) || (param_1->SystemInstanceState == Spawning)) {
      WaitForConcurrentTickComplete(this,false);
      FNiagaraSystemInstance::WaitForConcurrentTickDoNotFinalize(param_1,false);
    }
    pFVar6 = (param_1->ConcurrentTickGraphEvent).Reference;
    if (pFVar6 != (FBaseGraphTask *)0x0) {
      (param_1->ConcurrentTickGraphEvent).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &pFVar6->field_0x30;
      iVar12 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
      }
    }
    pFVar6 = (param_1->ConcurrentTickBatchGraphEvent).Reference;
    if (pFVar6 != (FBaseGraphTask *)0x0) {
      (param_1->ConcurrentTickBatchGraphEvent).Reference = (FBaseGraphTask *)0x0;
      LOCK();
      puVar1 = &pFVar6->field_0x30;
      iVar12 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar12 == 1) {
        (*(code *)**(undefined8 **)pFVar6)(pFVar6,1);
      }
    }
    ppFVar7 = (param_1->FinalizeRef).TaskEntry;
    if (ppFVar7 != (FNiagaraSystemInstance **)0x0) {
      *ppFVar7 = (FNiagaraSystemInstance *)0x0;
      paVar8 = (param_1->FinalizeRef).DebugCounter;
      (param_1->FinalizeRef).TaskEntry = (FNiagaraSystemInstance **)0x0;
      LOCK();
      *paVar8 = (atomic<int>)((int)*paVar8 + -1);
      UNLOCK();
    }
    if (param_1->SystemInstanceState != None) {
      SetInstanceState(this,param_1,None);
      return;
    }
  }
  return;
}

// SetInstanceState @ 1493f93c0

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

void __thiscall
FNiagaraSystemSimulation::SetInstanceState
          (FNiagaraSystemSimulation *this,FNiagaraSystemInstance *param_1,
          ENiagaraSystemInstanceState param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  FNiagaraDataBuffer *pFVar4;
  FNiagaraDataBuffer *pFVar5;
  FNiagaraWorldManager *this_00;
  uint uVar6;
  FNiagaraDataSet *this_01;
  
  if ((param_1 == (FNiagaraSystemInstance *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Instance != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x397,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  switch(param_1->SystemInstanceState) {
  case None:
    if ((param_2 != PendingSpawn) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("NewState == ENiagaraSystemInstanceState::PendingSpawn",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                           ,0x39e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    goto LAB_1493f953a;
  case PendingSpawn:
    if (((param_2 == PendingSpawn) || (Running < param_2)) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(NewState == ENiagaraSystemInstanceState::None) || (NewState == ENiagaraSystemInstanceState::PendingSpawnPaused) || (NewState == ENiagaraSystemInstanceState::Spawning) || (NewState == ENiagaraSystemInstanceState::Running)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                           ,0x3a6,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RemoveFromInstanceList(this,param_1);
    break;
  case PendingSpawnPaused:
    if ((PendingSpawn < param_2) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(NewState == ENiagaraSystemInstanceState::None) || (NewState == ENiagaraSystemInstanceState::PendingSpawn)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                           ,0x3b3,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RemoveFromInstanceList(this,param_1);
    break;
  case Spawning:
    if (((param_2 & ~Running) != None) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(NewState == ENiagaraSystemInstanceState::None) || (NewState == ENiagaraSystemInstanceState::Running)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                           ,0x3c0,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar6 = param_1->SystemInstanceIndex;
    RemoveFromInstanceList(this,param_1);
    this_01 = &this->SpawningDataSet;
    if (param_2 == None) {
LAB_1493f95fc:
      pFVar4 = FNiagaraDataSet::GetCurrentDataChecked(this_01);
      FNiagaraDataBuffer::KillInstance(pFVar4,uVar6);
      return;
    }
    pFVar4 = FNiagaraDataSet::GetCurrentDataChecked(&this->MainDataSet);
    pFVar5 = FNiagaraDataSet::GetCurrentDataChecked(this_01);
    iVar3 = FNiagaraDataBuffer::TransferInstance(pFVar4,pFVar5,uVar6,true);
    AddToInstanceList(this,param_1,param_2);
    if (param_1->SystemInstanceIndex == iVar3) goto switchD_1493f942b_default;
    iVar3 = 0x3cc;
    goto LAB_1493f96c0;
  case Running:
    if ((param_2 != None) &&
       ((param_2 != Paused &&
        (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                           ("(NewState == ENiagaraSystemInstanceState::None) || (NewState == ENiagaraSystemInstanceState::Paused)"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                            ,0x3d4,L""), bVar2)))) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar6 = param_1->SystemInstanceIndex;
    RemoveFromInstanceList(this,param_1);
    this_01 = &this->MainDataSet;
    if (param_2 == None) goto LAB_1493f95fc;
    pFVar4 = FNiagaraDataSet::GetCurrentDataChecked(&this->PausedDataSet);
    pFVar5 = FNiagaraDataSet::GetCurrentDataChecked(this_01);
    iVar3 = FNiagaraDataBuffer::TransferInstance(pFVar4,pFVar5,uVar6,true);
    AddToInstanceList(this,param_1,param_2);
    if (param_1->SystemInstanceIndex == iVar3) goto switchD_1493f942b_default;
    iVar3 = 0x3e0;
LAB_1493f96c0:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance->SystemInstanceIndex == NewDataSetIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,iVar3,L"");
    if (bVar2) {
code_r0x0001493f97ad:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    goto switchD_1493f942b_default;
  case Paused:
    if (((param_2 & ~Running) != None) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(NewState == ENiagaraSystemInstanceState::None) || (NewState == ENiagaraSystemInstanceState::Running)"
                           ,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                           ,1000,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    uVar6 = param_1->SystemInstanceIndex;
    RemoveFromInstanceList(this,param_1);
    this_01 = &this->PausedDataSet;
    if (param_2 == None) goto LAB_1493f95fc;
    pFVar4 = FNiagaraDataSet::GetCurrentDataChecked(&this->MainDataSet);
    pFVar5 = FNiagaraDataSet::GetCurrentDataChecked(this_01);
    iVar3 = FNiagaraDataBuffer::TransferInstance(pFVar4,pFVar5,uVar6,true);
    AddToInstanceList(this,param_1,param_2);
    if ((param_1->SystemInstanceIndex == iVar3) ||
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Instance->SystemInstanceIndex == NewDataSetIndex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                           ,0x3f4,L""), !bVar2)) goto switchD_1493f942b_default;
    goto code_r0x0001493f97ad;
  default:
    goto switchD_1493f942b_default;
  }
  if (param_2 == None) {
    return;
  }
LAB_1493f953a:
  AddToInstanceList(this,param_1,param_2);
switchD_1493f942b_default:
  if (((param_2 == PendingSpawn) && (this->bIsSolo == 0)) &&
     (this_00 = FNiagaraWorldManager::Get(this->World), this_00 != (FNiagaraWorldManager *)0x0)) {
    FNiagaraWorldManager::MarkSimulationForPostActorWork(this_00,this);
  }
  return;
}

// SetupParameters_GameThread @ 1493fb930

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
FNiagaraSystemSimulation::SetupParameters_GameThread(FNiagaraSystemSimulation *this,float param_1)

{
  int iVar1;
  int *piVar2;
  float *pfVar3;
  code *pcVar4;
  bool bVar5;
  
  bVar5 = IsInGameThread();
  if (!bVar5) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x7db,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  piVar2 = (this->SpawnNumSystemInstancesParam).ValuePtr;
  iVar1 = this->SystemInstancesPerState[4].ArrayNum;
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar1;
  }
  piVar2 = (this->UpdateNumSystemInstancesParam).ValuePtr;
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar1;
  }
  pfVar3 = (this->SpawnGlobalSpawnCountScaleParam).ValuePtr;
  if (pfVar3 != (float *)0x0) {
    *pfVar3 = INiagaraModule::EngineGlobalSpawnCountScale;
  }
  pfVar3 = (this->UpdateGlobalSpawnCountScaleParam).ValuePtr;
  if (pfVar3 != (float *)0x0) {
    *pfVar3 = INiagaraModule::EngineGlobalSpawnCountScale;
  }
  pfVar3 = (this->SpawnGlobalSystemCountScaleParam).ValuePtr;
  if (pfVar3 != (float *)0x0) {
    *pfVar3 = INiagaraModule::EngineGlobalSystemCountScale;
  }
  pfVar3 = (this->UpdateGlobalSystemCountScaleParam).ValuePtr;
  if (pfVar3 != (float *)0x0) {
    *pfVar3 = INiagaraModule::EngineGlobalSystemCountScale;
  }
  return;
}

// SimCacheTick_Concurrent @ 1493fbbd0

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
FNiagaraSystemSimulation::SimCacheTick_Concurrent
          (FNiagaraSystemSimulation *this,UNiagaraSimCache *param_1,float param_2)

{
  uint *puVar1;
  uint *puVar2;
  FNiagaraSystemInstance *pFVar3;
  FScriptContainerElement *pFVar4;
  FNiagaraDataBuffer *pFVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  FNiagaraEmitterInstanceImpl *this_00;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong *plVar17;
  longlong lVar18;
  float fVar19;
  undefined1 local_res20 [8];
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86 [2];
  uint local_84;
  int local_80;
  longlong local_78;
  int local_70;
  uint local_6c;
  longlong local_68;
  longlong *local_60;
  longlong local_58;
  undefined1 local_50;
  uint local_4c;
  FScriptContainerElement *local_48;
  FScriptContainerElement *local_40;
  
  pFVar9 = this->SystemInstancesPerState[4].AllocatorInstance.Data;
  iVar10 = this->SystemInstancesPerState[4].ArrayNum;
  pFVar4 = pFVar9 + (longlong)iVar10 * 8;
  while( true ) {
    iVar8 = this->SystemInstancesPerState[4].ArrayNum;
    if (iVar8 != iVar10) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res20);
      iVar8 = this->SystemInstancesPerState[4].ArrayNum;
    }
    if (pFVar9 == pFVar4) break;
    pFVar3 = *(FNiagaraSystemInstance **)pFVar9;
    bVar7 = UNiagaraSimCache::Read(param_1,pFVar3->Age,pFVar3);
    if (!bVar7) {
      pFVar3->RequestedExecutionState = Complete;
    }
    pFVar9 = pFVar9 + 8;
  }
  uVar11 = this->SystemInstancesPerState[1].ArrayNum - 1;
  if (-1 < (int)uVar11) {
    lVar16 = (longlong)(int)uVar11 * 8;
    do {
      uVar14 = 0;
      if ((int)uVar11 < this->SystemInstancesPerState[1].ArrayNum) {
        uVar14 = ~uVar11 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar3 = *(FNiagaraSystemInstance **)
                (this->SystemInstancesPerState[1].AllocatorInstance.Data + lVar16);
      bVar7 = UNiagaraSimCache::Read(param_1,pFVar3->Age,pFVar3);
      if (bVar7) {
        SetInstanceState(this,pFVar3,Running);
      }
      else {
        pFVar3->RequestedExecutionState = Complete;
      }
      lVar16 = lVar16 + -8;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
    iVar8 = this->SystemInstancesPerState[4].ArrayNum;
  }
  if ((this->bBindingsInitialized == 0) && (0 < iVar8)) {
    InitParameterDataSetBindings
              (this,*(FNiagaraSystemInstance **)
                     this->SystemInstancesPerState[4].AllocatorInstance.Data);
  }
  local_40 = (this->System->EmitterExecutionStateAccessors).AllocatorInstance.Data;
  local_70 = (this->System->EmitterExecutionStateAccessors).ArrayNum;
  if ((local_70 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar10 = this->SystemInstancesPerState[4].ArrayNum;
  uVar15 = 0;
  if (0 < iVar10) {
    local_68 = 0;
    local_58 = 0;
    do {
      lVar13 = local_58;
      lVar16 = local_68;
      uVar14 = (uint)uVar15;
      uVar11 = 0;
      if ((int)uVar14 < iVar10) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar18 = *(longlong *)(this->SystemInstancesPerState[4].AllocatorInstance.Data + lVar13);
      if (*(int *)(lVar18 + 0x918) != 3) {
        iVar10 = *(int *)(lVar18 + 0x130);
        plVar17 = *(longlong **)(lVar18 + 0x128);
        local_80 = iVar10;
        local_60 = plVar17;
        if ((iVar10 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_84 = 0;
        if (0 < iVar10) {
          lVar18 = 0;
          local_78 = 0;
          iVar10 = local_80;
          do {
            plVar17 = (longlong *)*plVar17;
            local_6c = ~local_84 >> 0x1f;
            if ((*(int *)((longlong)plVar17 + 0xd4) != 3) &&
               (*(int *)((longlong)plVar17 + 0xd4) != 4)) {
              uVar11 = 0;
              if ((int)local_84 < (this->DataSetToEmitterRendererParameters).ArrayNum) {
                uVar11 = local_6c;
              }
              if ((uVar11 == 0) &&
                 (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar7)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              pFVar4 = (this->DataSetToEmitterRendererParameters).AllocatorInstance.Data;
              pFVar5 = (this->MainDataSet).CurrentData;
              puVar12 = *(uint **)(pFVar4 + lVar18);
              iVar10 = *(int *)(pFVar4 + lVar18 + 8);
              puVar2 = puVar12 + (longlong)iVar10 * 2;
              while( true ) {
                if (*(int *)(pFVar4 + lVar18 + 8) != iVar10) {
                  local_88 = 0;
                  `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_88);
                }
                if (puVar12 == puVar2) break;
                puVar1 = puVar12 + 1;
                uVar11 = *puVar12;
                puVar12 = puVar12 + 2;
                *(undefined4 *)((ulonglong)uVar11 + plVar17[0xc]) =
                     *(undefined4 *)
                      ((pFVar5->FloatData).AllocatorInstance.Data +
                      (ulonglong)(pFVar5->FloatStride * *puVar1) + uVar15 * 4);
              }
              puVar12 = *(uint **)(pFVar4 + lVar18 + 0x10);
              iVar10 = *(int *)(pFVar4 + lVar18 + 0x18);
              puVar2 = puVar12 + (longlong)iVar10 * 2;
              while( true ) {
                if (*(int *)(pFVar4 + lVar18 + 0x18) != iVar10) {
                  local_87 = 0;
                  `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_87);
                }
                if (puVar12 == puVar2) break;
                puVar1 = puVar12 + 1;
                uVar11 = *puVar12;
                puVar12 = puVar12 + 2;
                *(undefined4 *)((ulonglong)uVar11 + plVar17[0xc]) =
                     *(undefined4 *)
                      ((pFVar5->Int32Data).AllocatorInstance.Data +
                      (ulonglong)(pFVar5->Int32Stride * *puVar1) + uVar15 * 4);
              }
              iVar10 = *(int *)(pFVar4 + lVar18 + 0x28);
              puVar12 = *(uint **)(pFVar4 + lVar18 + 0x20);
              puVar2 = puVar12 + (longlong)iVar10 * 3;
              while( true ) {
                if (*(int *)(pFVar4 + lVar18 + 0x28) != iVar10) {
                  local_86[0] = 0;
                  `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FHalfDataOffsets,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(local_86);
                }
                if (puVar12 == puVar2) break;
                pFVar9 = (pFVar5->HalfData).AllocatorInstance.Data +
                         (ulonglong)(pFVar5->HalfStride * puVar12[1]) + uVar15 * 2;
                if ((char)puVar12[2] == '\0') {
                  uVar11 = *puVar12;
                  puVar12 = puVar12 + 3;
                  *(ushort *)((ulonglong)uVar11 + plVar17[0xc]) = *(ushort *)pFVar9;
                }
                else {
                  fVar19 = FGenericPlatformMath::LoadHalf((ushort *)pFVar9);
                  uVar11 = *puVar12;
                  puVar12 = puVar12 + 3;
                  *(float *)((ulonglong)uVar11 + plVar17[0xc]) = fVar19;
                }
              }
              *(uint *)(plVar17 + 0x18) = *(uint *)(plVar17 + 0x18) | 1;
              this_00 = (FNiagaraEmitterInstanceImpl *)(**(code **)(*plVar17 + 0x68))();
              lVar16 = local_78;
              iVar10 = local_80;
              if (this_00 != (FNiagaraEmitterInstanceImpl *)0x0) {
                uVar11 = 0;
                if ((int)local_84 < local_70) {
                  uVar11 = local_6c;
                }
                if ((uVar11 == 0) &&
                   (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                       ,0x14f,
                                       L"Array index out of bounds: %lld from an array of size %lld"
                                      ), bVar7)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                bVar7 = false;
                local_50 = 0;
                local_4c = 0;
                pFVar5 = (this->MainDataSet).CurrentData;
                local_48 = (FScriptContainerElement *)0x0;
                if ((pFVar5 != (FNiagaraDataBuffer *)0x0) && (*(int *)(local_40 + lVar16 * 4) != -1)
                   ) {
                  bVar7 = true;
                  local_4c = pFVar5->NumInstances;
                  local_50 = 1;
                  local_48 = (pFVar5->Int32Data).AllocatorInstance.Data +
                             *(int *)(local_40 + lVar16 * 4) * pFVar5->Int32Stride;
                }
                if ((bVar7) && ((int)uVar14 < (int)local_4c)) {
                  FNiagaraEmitterInstanceImpl::SetExecutionState
                            (this_00,*(ENiagaraExecutionState *)(local_48 + local_68));
                  iVar10 = local_80;
                }
                else {
                  FNiagaraEmitterInstanceImpl::SetExecutionState(this_00,Disabled);
                  iVar10 = local_80;
                }
              }
            }
            local_78 = local_78 + 1;
            local_84 = local_84 + 1;
            plVar17 = local_60 + 2;
            lVar18 = lVar18 + 0x30;
            lVar16 = local_68;
            lVar13 = local_58;
            local_60 = plVar17;
          } while ((int)local_84 < iVar10);
        }
      }
      iVar10 = this->SystemInstancesPerState[4].ArrayNum;
      local_58 = lVar13 + 8;
      local_68 = lVar16 + 4;
      uVar15 = (ulonglong)(uVar14 + 1);
    } while ((int)(uVar14 + 1) < iVar10);
  }
  return;
}

// SimCacheTick_GameThread @ 1493fccc0

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
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemSimulation::SimCacheTick_GameThread
          (FNiagaraSystemSimulation *this,UNiagaraSimCache *param_1,float param_2,
          TRefCountPtr<FBaseGraphTask> *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  atomic<unsigned_int> *paVar3;
  TRefCountPtr<FBaseGraphTask> *pTVar4;
  FScriptContainerElement *pFVar5;
  atomic<unsigned_int> aVar6;
  int iVar7;
  FBaseGraphTask *pFVar8;
  FBaseGraphTask *pFVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  FTaskBase *pFVar13;
  TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
  *pTVar14;
  FTaskBase *pFVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  FTaskBase *pFVar19;
  FTaskBase *this_00;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  undefined1 local_res8;
  UNiagaraSimCache *local_res10;
  undefined1 local_88 [80];
  
  local_res10 = param_1;
  if ((this->System == (UNiagaraSystem *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("System != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                          ,0x65a,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  WaitForInstancesTickComplete(this,false);
  bVar11 = UNiagaraSimCache::CanRead(param_1,this->System);
  if (!bVar11) {
    uVar18 = this->SystemInstancesPerState[4].ArrayNum - 1;
    if ((int)uVar18 < 0) {
      return;
    }
    lVar20 = (longlong)(int)uVar18 * 8;
    while( true ) {
      uVar17 = 0;
      if ((int)uVar18 < this->SystemInstancesPerState[4].ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) break;
      FNiagaraSystemInstance::Complete
                (*(FNiagaraSystemInstance **)
                  (this->SystemInstancesPerState[4].AllocatorInstance.Data + lVar20),false);
      lVar20 = lVar20 + -8;
      uVar18 = uVar18 - 1;
      if ((int)uVar18 < 0) {
        return;
      }
    }
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((GNiagaraSystemSimulationAllowASyncSimCache == 0) || (param_1->bCanRunAsync == false)) {
    SimCacheTick_Concurrent(this,param_1,param_2);
    uVar18 = this->SystemInstancesPerState[4].ArrayNum - 1;
    if ((int)uVar18 < 0) {
      return;
    }
    lVar20 = (longlong)(int)uVar18 * 8;
    while( true ) {
      uVar17 = 0;
      if ((int)uVar18 < this->SystemInstancesPerState[4].ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) break;
      FNiagaraSystemInstance::SimCacheTickFinalize_GameThread
                (*(FNiagaraSystemInstance **)
                  (this->SystemInstancesPerState[4].AllocatorInstance.Data + lVar20));
      lVar20 = lVar20 + -8;
      uVar18 = uVar18 - 1;
      if ((int)uVar18 < 0) {
        return;
      }
    }
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  pFVar13 = ::operator_new(0x38);
  this_00 = (FTaskBase *)0x0;
  pFVar19 = this_00;
  if (pFVar13 != (FTaskBase *)0x0) {
    pFVar13->_padding_ = 0;
    pFVar13->_padding_ = 0;
    pFVar13->_padding_ = 0;
    pFVar13->_padding_ = 0;
    pFVar13->RefCount = (atomic<unsigned_int>)0x0;
    pFVar13->NumLocks = (atomic<unsigned_int>)0x0;
    pFVar13->_padding_ = 0;
    *(undefined4 *)&pFVar13->_padding_ = 0;
    *(undefined4 *)((longlong)&pFVar13->_padding_ + 4) = 4;
    pFVar19 = pFVar13;
  }
  uVar18 = this->SystemInstancesPerState[4].ArrayNum;
  if ((int)uVar18 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
  }
  piVar1 = (int *)((longlong)&pFVar19->_padding_ + 4);
  if (*piVar1 < (int)uVar18) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraSystemInstance_*>_>
              (8,8,uVar18,(ForElementType<FNiagaraSystemInstance_*> *)pFVar19,
               (int)pFVar19->_padding_,piVar1);
  }
  pFVar21 = this->SystemInstancesPerState[4].AllocatorInstance.Data;
  iVar7 = this->SystemInstancesPerState[4].ArrayNum;
  pFVar5 = pFVar21 + (longlong)iVar7 * 8;
  while( true ) {
    if (this->SystemInstancesPerState[4].ArrayNum != iVar7) {
      local_res8 = 0;
      `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&stack0x00000008);
    }
    if (pFVar21 == pFVar5) break;
    local_88._0_8_ = *(undefined8 *)pFVar21;
    pFVar8 = (this->ConcurrentTickGraphEvent).Reference;
    pFVar9 = *(FBaseGraphTask **)(local_88._0_8_ + 0x848);
    if (pFVar9 != pFVar8) {
      *(FBaseGraphTask **)(local_88._0_8_ + 0x848) = pFVar8;
      if (pFVar8 != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&pFVar8->field_0x30 = *(int *)&pFVar8->field_0x30 + 1;
        UNLOCK();
      }
      if (pFVar9 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar2 = &pFVar9->field_0x30;
        iVar12 = *(int *)puVar2;
        *(int *)puVar2 = *(int *)puVar2 + -1;
        UNLOCK();
        if (iVar12 == 1) {
          (*(code *)**(undefined8 **)pFVar9)(pFVar9,1);
        }
      }
    }
    pFVar13 = (FTaskBase *)pFVar19->_padding_;
    pFVar15 = pFVar19;
    if (pFVar13 != (FTaskBase *)0x0) {
      pFVar15 = pFVar13;
    }
    if (pFVar15 <= (FTaskBase *)local_88) {
      pFVar15 = pFVar19;
      if (pFVar13 != (FTaskBase *)0x0) {
        pFVar15 = pFVar13;
      }
      if ((local_88 <
           (pFVar15->Prerequisites).Prerequisites.AllocatorInstance.InlineData +
           (longlong)*piVar1 * 8 + -0x58) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
    }
    iVar12 = (int)pFVar19->_padding_;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraSystemInstance_*>_>
                         (0x808,(ForElementType<FNiagaraSystemInstance_*> *)pFVar19,piVar1);
    }
    *(int *)&pFVar19->_padding_ = iVar12 + 1;
    pFVar13 = pFVar19;
    if ((FTaskBase *)pFVar19->_padding_ != (FTaskBase *)0x0) {
      pFVar13 = (FTaskBase *)pFVar19->_padding_;
    }
    *(undefined8 *)
     ((pFVar13->Prerequisites).Prerequisites.AllocatorInstance.InlineData +
     (longlong)iVar12 * 8 + -0x58) = local_88._0_8_;
    iVar12 = (int)pFVar19->_padding_;
    uVar17 = iVar12 - 1;
    uVar18 = 0;
    if ((int)uVar17 < iVar12) {
      uVar18 = ~uVar17 >> 0x1f;
    }
    if ((uVar18 == 0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar11)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    paVar3 = &pFVar19->RefCount;
    pFVar13 = pFVar19;
    if ((FTaskBase *)pFVar19->_padding_ != (FTaskBase *)0x0) {
      pFVar13 = (FTaskBase *)pFVar19->_padding_;
    }
    LOCK();
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + 1);
    UNLOCK();
    pFVar21 = pFVar21 + 8;
    *(uchar **)(local_88._0_8_ + 0x858) =
         (pFVar13->Prerequisites).Prerequisites.AllocatorInstance.InlineData +
         (longlong)((int)pFVar19->_padding_ + -1) * 8 + -0x58;
    *(atomic<unsigned_int> **)(local_88._0_8_ + 0x860) = paVar3;
  }
  pTVar14 = (TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             *)GetGraphEventImplAllocator();
  pFVar15 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate(pTVar14);
  pTVar4 = &this->ConcurrentTickGraphEvent;
  pFVar13 = this_00;
  if (pFVar15 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)pFVar15,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    pFVar15->_padding_ = (longlong)&___7FGraphEventImpl__6B_;
    TaskTrace::Created((ulong64)pFVar15->TraceId,0xd8);
    UE::Tasks::Private::FTaskBase::Init(pFVar15,L"GraphEvent",Default,TaskEvent,None);
    pFVar13 = pFVar15;
  }
  if (pTVar4 == (TRefCountPtr<FBaseGraphTask> *)(local_88 + 0x10)) {
    if (pFVar13 != (FTaskBase *)0x0) {
      LOCK();
      paVar3 = &pFVar13->RefCount;
      aVar6 = *paVar3;
      *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar6 == (atomic<unsigned_int>)0x1) {
        puVar16 = (undefined8 *)pFVar13->_padding_;
        goto LAB_1493fd0dc;
      }
    }
  }
  else {
    pFVar15 = (FTaskBase *)pTVar4->Reference;
    pTVar4->Reference = (FBaseGraphTask *)pFVar13;
    if (pFVar15 != (FTaskBase *)0x0) {
      LOCK();
      paVar3 = &pFVar15->RefCount;
      aVar6 = *paVar3;
      *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
      UNLOCK();
      if (aVar6 == (atomic<unsigned_int>)0x1) {
        puVar16 = (undefined8 *)pFVar15->_padding_;
        pFVar13 = pFVar15;
LAB_1493fd0dc:
        (*(code *)*puVar16)(pFVar13);
      }
    }
  }
  pTVar14 = (TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
             *)GetGraphEventImplAllocator();
  pFVar15 = TLockFreeFixedSizeAllocator_TLSCacheBase<216,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate(pTVar14);
  pFVar13 = this_00;
  if (pFVar15 != (FTaskBase *)0x0) {
    FBaseGraphTask::FBaseGraphTask
              ((FBaseGraphTask *)pFVar15,
               (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                *)0x0);
    pFVar15->_padding_ = (longlong)&___7FGraphEventImpl__6B_;
    TaskTrace::Created((ulong64)pFVar15->TraceId,0xd8);
    UE::Tasks::Private::FTaskBase::Init(pFVar15,L"GraphEvent",Default,TaskEvent,None);
    pFVar13 = pFVar15;
  }
  pTVar4 = &this->AllWorkCompleteGraphEvent;
  if (pTVar4 == (TRefCountPtr<FBaseGraphTask> *)(local_88 + 0x18)) {
    if (pFVar13 == (FTaskBase *)0x0) goto LAB_1493fd185;
    LOCK();
    paVar3 = &pFVar13->RefCount;
    aVar6 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar6 != (atomic<unsigned_int>)0x1) goto LAB_1493fd185;
    puVar16 = (undefined8 *)pFVar13->_padding_;
  }
  else {
    pFVar15 = (FTaskBase *)pTVar4->Reference;
    pTVar4->Reference = (FBaseGraphTask *)pFVar13;
    if (pFVar15 == (FTaskBase *)0x0) goto LAB_1493fd185;
    LOCK();
    paVar3 = &pFVar15->RefCount;
    aVar6 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar6 != (atomic<unsigned_int>)0x1) goto LAB_1493fd185;
    puVar16 = (undefined8 *)pFVar15->_padding_;
    pFVar13 = pFVar15;
  }
  (*(code *)*puVar16)(pFVar13,1);
LAB_1493fd185:
  local_88._40_8_ = local_res10;
  local_88._32_8_ = this;
  local_88._48_4_ = param_2;
  pFVar15 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  pFVar13 = this_00;
  if (pFVar15 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar15,2,true);
    pFVar15->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FNiagaraSystemSimulation::SimCacheTick_GameThread'::`17'::<lambda_1>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar15,L"Niagara::SimCacheTick_Concurrent",Default,None,None);
    pFVar15[1]._padding_ = local_88._32_8_;
    pFVar15[1]._padding_ = local_88._40_8_;
    pFVar15[1]._padding_ = CONCAT44(local_88._52_4_,local_88._48_4_);
    pFVar15->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`FNiagaraSystemSimulation::SimCacheTick_GameThread'::`17'::<lambda_1>_>::
          _vftable_;
    pFVar13 = pFVar15;
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(pFVar13,0x100);
  pFVar15 = TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
            ::Allocate((TLockFreeFixedSizeAllocator_TLSCacheBase<256,TLockFreePointerListUnordered<void_*,64>,FNoopCounter>
                        *)&UE::Tasks::Private::SmallTaskAllocator);
  if (pFVar15 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::FTaskBase(pFVar15,2,true);
    pFVar15->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTaskBase<`FNiagaraSystemSimulation::SimCacheTick_GameThread'::`17'::<lambda_2>,void,void>
          ::_vftable_;
    UE::Tasks::Private::FTaskBase::Init
              (pFVar15,L"Niagara::SimCacheTick_Finalize",Default,GameThreadNormalPri,None);
    pFVar15[1]._padding_ = (longlong)pFVar19;
    pFVar15->_padding_ =
         (longlong)
         &UE::Tasks::Private::
          TExecutableTask<`FNiagaraSystemSimulation::SimCacheTick_GameThread'::`17'::<lambda_2>_>::
          _vftable_;
    pFVar15[1]._padding_ = (longlong)this;
    pFVar19 = this_00;
    this_00 = pFVar15;
  }
  if (pFVar13 != (FTaskBase *)0x0) {
    UE::Tasks::Private::FTaskBase::AddPrerequisites(this_00,pFVar13);
  }
  UE::Tasks::Private::FTaskBase::TryLaunch(this_00,0x100);
  if (this_00 != (FTaskBase *)0x0) {
    LOCK();
    paVar3 = &this_00->RefCount;
    aVar6 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)this_00->_padding_)(this_00,1);
    }
  }
  if (pFVar19 != (FTaskBase *)0x0) {
    if ((void *)pFVar19->_padding_ != (void *)0x0) {
      FMemory::Free((void *)pFVar19->_padding_);
    }
    ::operator_delete(pFVar19,0x38);
  }
  if (pFVar13 != (FTaskBase *)0x0) {
    LOCK();
    paVar3 = &pFVar13->RefCount;
    aVar6 = *paVar3;
    *paVar3 = (atomic<unsigned_int>)((int)*paVar3 + -1);
    UNLOCK();
    if (aVar6 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar13->_padding_)(pFVar13,1);
    }
  }
  return;
}

// SpawnSystemInstances @ 1493fd3e0

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
FNiagaraSystemSimulation::SpawnSystemInstances
          (FNiagaraSystemSimulation *this,FNiagaraSystemSimulationTickContext *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FNiagaraDataSet *pFVar3;
  TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  longlong *plVar6;
  FNiagaraScriptDebuggerInfo *pFVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  FNiagaraSystemSimulation *pFVar12;
  bool bVar13;
  char cVar14;
  FName *pFVar15;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_SpawnCNC> FVar16;
  FNiagaraDataBuffer *pFVar17;
  uint uVar18;
  FNameEntryId FVar19;
  FName FVar20;
  TReferenceControllerBase<1> *pTVar21;
  TUniquePtr<FNiagaraScriptExecutionContextBase,TDefaultDelete<FNiagaraScriptExecutionContextBase>_>
  *pTVar22;
  FScriptContainerElement *pFVar23;
  TSharedPtr<FNiagaraScriptDebuggerInfo,1> *pTVar24;
  TReferenceControllerBase<1> *pTVar25;
  TSharedPtr<FNiagaraScriptDebuggerInfo,1> *pTVar26;
  undefined1 auStackY_208 [32];
  undefined1 local_1a8 [8];
  undefined1 local_1a0 [4];
  int local_19c;
  uint local_198;
  uint uStack_194;
  FNiagaraSystemSimulation *local_190;
  FColor_u_0 local_188 [2];
  FName local_180;
  FName local_178;
  FName local_170;
  undefined8 local_168;
  FName local_160;
  undefined8 local_150;
  undefined8 local_148;
  TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *local_140;
  FString local_138;
  FString local_128;
  undefined8 *local_118;
  undefined1 *local_110;
  undefined8 *local_108;
  FName local_f8;
  FScriptExecutionConstantBufferTable local_f0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_208;
  pTVar21 = (TReferenceControllerBase<1> *)0x0;
  FVar16 = StatPtr_STAT_NiagaraSystemSim_SpawnCNC;
  local_190 = this;
  if (StatPtr_STAT_NiagaraSystemSim_SpawnCNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_SpawnCNC>)0x0) {
    pFVar15 = ::FName::FName(&local_f8,"STAT_NiagaraSystemSim_SpawnCNC");
    FVar16 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_SpawnCNC>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_SpawnCNC,
                        *pFVar15,L"System Sim Spawn [CNC]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar20 = *(FName *)FVar16;
  bVar9 = false;
  bVar11 = false;
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  FVar19 = FVar20.ComparisonIndex.Value;
  uVar18 = FVar20.Number;
  if ((FVar19.Value != 0) || (uVar18 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_188[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_188[0]._s_0,(char *)*(FName *)((longlong)FVar16 + 0x10));
      bVar9 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_180.ComparisonIndex.Value = FVar19.Value;
        local_180.Number = uVar18;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_180,(wchar_t *)*(FName *)((longlong)FVar16 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                   ,0x81c);
        bVar9 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_198 = FVar19.Value;
      uStack_194 = uVar18;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar10 = true;
      goto LAB_1493fd535;
    }
  }
  bVar10 = false;
  FVar20 = local_160;
LAB_1493fd535:
  local_198 = param_1->SpawnNum;
  uVar18 = param_1->Instances->ArrayNum;
  local_19c = uVar18 - local_198;
  if (((int)uVar18 < (int)local_198) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumInstances >= Context.SpawnNum",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                          ,0x822,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pTVar25 = pTVar21;
  if ((this->bIsSolo != 0) && (param_1->Instances->ArrayNum == 1)) {
    pTVar25 = *(TReferenceControllerBase<1> **)(param_1->Instances->AllocatorInstance).Data;
  }
  FNiagaraDataSet::BeginSimulate(param_1->DataSet,true);
  FNiagaraDataSet::Allocate(param_1->DataSet,uVar18,true);
  pFVar3 = param_1->DataSet;
  if ((pFVar3->DestinationData == (FNiagaraDataBuffer *)0x0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("DestinationData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x15e,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar17 = pFVar3->DestinationData;
  if ((pFVar17->NumInstancesAllocated < uVar18) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InNumInstances <= NumInstancesAllocated",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x9c,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar17->NumInstances = uVar18;
  pTVar22 = &local_190->SpawnExecContext;
  cVar14 = (**(code **)(pTVar22->Ptr->_padding_ + 0x18))(pTVar22->Ptr,pTVar25,0);
  if (cVar14 == '\0') {
    pTVar4 = param_1->Instances;
    pFVar23 = (pTVar4->AllocatorInstance).Data;
    iVar2 = pTVar4->ArrayNum;
    pFVar1 = pFVar23 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar4->ArrayNum != iVar2) {
        `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_1a0);
      }
      if (pFVar23 == pFVar1) break;
      if (*(int *)(*(longlong *)pFVar23 + 0x91c) != 4) {
        *(undefined4 *)(*(longlong *)pFVar23 + 0x91c) = 4;
      }
      pFVar23 = pFVar23 + 8;
    }
    FNiagaraDataSet::EndSimulate(param_1->DataSet,true);
  }
  else {
    (**(code **)(pTVar22->Ptr->_padding_ + 0x28))();
    FNiagaraScriptExecutionContextBase::BindData(pTVar22->Ptr,0,param_1->DataSet,local_19c,false);
    FNiagaraScriptExecutionContextBase::BindData
              (pTVar22->Ptr,1,&local_190->SpawnInstanceParameterDataSet,local_19c,false);
    local_140 = param_1->Instances;
    local_f0.Buffers.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char_const_*>)0x0;
    local_f0.Buffers.ArrayNum = 0;
    local_f0.Buffers.ArrayMax = 0xc;
    local_f0.BufferSizes.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
    local_f0.BufferSizes.ArrayNum = 0;
    local_f0.BufferSizes.ArrayMax = 0xc;
    if ((local_140->ArrayNum < 1) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar5 = *(longlong *)(local_140->AllocatorInstance).Data;
    BuildConstantBufferTable
              (local_190,
               (FNiagaraGlobalParameters *)
               (((ulonglong)(*(byte *)(lVar5 + 0x840) & 1) + 0x19) * 0x20 + lVar5),pTVar22,&local_f0
              );
    (**(code **)(pTVar22->Ptr->_padding_ + 0x20))(pTVar22->Ptr,0,param_1->DeltaSeconds,local_198);
    if ((GbDumpSystemData != 0) || (param_1->System->bDumpDebugSystemInfo != 0)) {
      if (4 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      pFVar17 = FNiagaraDataSet::GetDestinationDataChecked(param_1->DataSet);
      local_178.ComparisonIndex.Value = 0;
      local_178.Number = 0;
      ::FString::FString(&local_138,L"System Dataset - Post Spawn");
      FNiagaraDataBuffer::Dump(pFVar17,0,uVar18,&local_138,&local_178);
      if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138.Data.AllocatorInstance.Data);
      }
      pFVar12 = local_190;
      if (((local_190->SpawnInstanceParameterDataSet).CurrentData == (FNiagaraDataBuffer *)0x0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("CurrentData",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                              ,0x158,L""), bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar17 = (pFVar12->SpawnInstanceParameterDataSet).CurrentData;
      local_170.ComparisonIndex.Value = 0;
      local_170.Number = 0;
      ::FString::FString(&local_128,L"Spawn Instance Parameter Data");
      FNiagaraDataBuffer::Dump(pFVar17,0,uVar18,&local_128,&local_170);
      if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_128.Data.AllocatorInstance.Data);
      }
    }
    FNiagaraDataSet::EndSimulate(param_1->DataSet,true);
    if ((pTVar25 != (TReferenceControllerBase<1> *)0x0) &&
       (plVar6 = *(longlong **)&pTVar25[0x16].SharedReferenceCount, plVar6 != (longlong *)0x0)) {
      local_150 = 0;
      local_118 = &local_168;
      local_148 = 0;
      local_168 = 0;
      local_1a8[0] = 0xb;
      pTVar24 = (TSharedPtr<FNiagaraScriptDebuggerInfo,1> *)*plVar6;
      local_110 = local_1a8;
      pTVar26 = pTVar24 + (int)plVar6[1];
      local_108 = &local_150;
      for (; pTVar24 != pTVar26; pTVar24 = pTVar24 + 1) {
        bVar13 = `FNiagaraSystemInstance::GetActiveCaptureWrite'::__l5::<lambda_1>::operator()
                           (&local_118,pTVar24);
        if (bVar13) {
          if (pTVar24 != (TSharedPtr<FNiagaraScriptDebuggerInfo,1> *)0x0) {
            pTVar21 = (pTVar24->SharedReferenceCount).ReferenceController;
            pFVar7 = pTVar24->Object;
            if (pTVar21 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar21->SharedReferenceCount = (atomic<int>)((int)pTVar21->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (pFVar7 != (FNiagaraScriptDebuggerInfo *)0x0) {
              FNiagaraDataSet::CopyTo(param_1->DataSet,&pFVar7->Frame,local_19c,local_198,true);
              FNiagaraParameterStore::operator=
                        (&pFVar7->Parameters,
                         (FNiagaraParameterStore *)&((local_190->UpdateExecContext).Ptr)->Parameters
                        );
              LOCK();
              pFVar7->bWritten = (TAtomic<bool>)0x1;
              UNLOCK();
            }
          }
          break;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar21);
    }
    pFVar3 = param_1->DataSet;
    if ((pFVar3->CurrentData == (FNiagaraDataBuffer *)0x0) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentData",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                            ,0x158,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((pFVar3->CurrentData->NumInstances != param_1->Instances->ArrayNum) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Context.DataSet.GetCurrentDataChecked().GetNumInstances() == Context.Instances.Num()"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                            ,0x85a,L""), bVar13)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if (local_f0.BufferSizes.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
      FMemory::Free((void *)local_f0.BufferSizes.AllocatorInstance.SecondaryData);
    }
    if (local_f0.Buffers.AllocatorInstance.SecondaryData !=
        (ForElementType<unsigned_char_const_*>)0x0) {
      FMemory::Free((void *)local_f0.Buffers.AllocatorInstance.SecondaryData);
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar10) {
    FThreadStats::AddMessage(FVar20,CycleScopeEnd);
  }
  return;
}

// Spawn_Concurrent @ 1493fda60

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
FNiagaraSystemSimulation::Spawn_Concurrent
          (FNiagaraSystemSimulation *this,FNiagaraSystemSimulationTickContext *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  undefined1 local_res8 [8];
  longlong local_38 [2];
  
  if (this->bInSpawnPhase == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("bInSpawnPhase",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x63a,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  Tick_Concurrent(this,param_1);
  if ((this->MainDataSet).CurrentData == (FNiagaraDataBuffer *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x158,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (this->SystemInstancesPerState[4].ArrayNum != ((this->MainDataSet).CurrentData)->NumInstances)
  {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSystemInstances(ENiagaraSystemInstanceState::Running).Num() == MainDataSet.GetCurrentDataChecked().GetNumInstances()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x63d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->SpawningDataSet).CurrentData == (FNiagaraDataBuffer *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x158,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (this->SystemInstancesPerState[3].ArrayNum !=
      ((this->SpawningDataSet).CurrentData)->NumInstances) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSystemInstances(ENiagaraSystemInstanceState::Spawning).Num() == SpawningDataSet.GetCurrentDataChecked().GetNumInstances()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x63e,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->PausedDataSet).CurrentData == (FNiagaraDataBuffer *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("CurrentData",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                       ,0x158,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if (this->SystemInstancesPerState[5].ArrayNum != ((this->PausedDataSet).CurrentData)->NumInstances
     ) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetSystemInstances(ENiagaraSystemInstanceState::Paused).Num() == PausedDataSet.GetCurrentDataChecked().GetNumInstances()"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x63f,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  FNiagaraDataSet::CopyTo(&this->SpawningDataSet,&this->MainDataSet,0,-1,false);
  FNiagaraDataSet::ResetBuffers(&this->SpawningDataSet);
  iVar3 = this->SystemInstancesPerState[4].ArrayNum;
  uVar9 = this->SystemInstancesPerState[3].ArrayNum + iVar3;
  if (-1 < (int)uVar9) {
    piVar1 = &this->SystemInstancesPerState[4].ArrayMax;
    if (*piVar1 < (int)uVar9) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar9,&this->SystemInstancesPerState[4].AllocatorInstance,iVar3,piVar1);
    }
    pFVar8 = this->SystemInstancesPerState[3].AllocatorInstance.Data;
    iVar3 = this->SystemInstancesPerState[3].ArrayNum;
    pFVar2 = pFVar8 + (longlong)iVar3 * 8;
    while( true ) {
      if (this->SystemInstancesPerState[3].ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar8 == pFVar2) break;
      local_38[0] = *(longlong *)pFVar8;
      pFVar4 = this->SystemInstancesPerState[4].AllocatorInstance.Data;
      if ((pFVar4 <= (FScriptContainerElement *)local_38) &&
         ((FScriptContainerElement *)local_38 < pFVar4 + (longlong)*piVar1 * 8)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar7 = this->SystemInstancesPerState[4].ArrayNum;
      if (iVar7 == *piVar1) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&this->SystemInstancesPerState[4].AllocatorInstance,piVar1);
      }
      pFVar4 = this->SystemInstancesPerState[4].AllocatorInstance.Data;
      this->SystemInstancesPerState[4].ArrayNum = iVar7 + 1;
      pFVar8 = pFVar8 + 8;
      *(longlong *)(pFVar4 + (longlong)iVar7 * 8) = local_38[0];
      *(int *)(local_38[0] + 0x30) = iVar7;
      *(undefined1 *)(local_38[0] + 8) = 4;
    }
    iVar3 = this->SystemInstancesPerState[3].ArrayMax;
    this->SystemInstancesPerState[3].ArrayNum = 0;
    if (iVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&this->SystemInstancesPerState[3].AllocatorInstance,0,
                 &this->SystemInstancesPerState[3].ArrayMax);
    }
    if ((this->MainDataSet).CurrentData == (FNiagaraDataBuffer *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (this->SystemInstancesPerState[4].ArrayNum != ((this->MainDataSet).CurrentData)->NumInstances
       ) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetSystemInstances(ENiagaraSystemInstanceState::Running).Num() == MainDataSet.GetCurrentDataChecked().GetNumInstances()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x651,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((this->SpawningDataSet).CurrentData == (FNiagaraDataBuffer *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (this->SystemInstancesPerState[3].ArrayNum !=
        ((this->SpawningDataSet).CurrentData)->NumInstances) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetSystemInstances(ENiagaraSystemInstanceState::Spawning).Num() == SpawningDataSet.GetCurrentDataChecked().GetNumInstances()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x652,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if ((this->PausedDataSet).CurrentData == (FNiagaraDataBuffer *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("CurrentData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                         ,0x158,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (this->SystemInstancesPerState[5].ArrayNum !=
        ((this->PausedDataSet).CurrentData)->NumInstances) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("GetSystemInstances(ENiagaraSystemInstanceState::Paused).Num() == PausedDataSet.GetCurrentDataChecked().GetNumInstances()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x653,L"");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    this->bInSpawnPhase = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
}

// Spawn_GameThread @ 1493fdf00

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
FNiagaraSystemSimulation::Spawn_GameThread
          (FNiagaraSystemSimulation *this,float param_1,bool param_2)

{
  undefined1 *puVar1;
  atomic<unsigned_int> *paVar2;
  ulong64 *puVar3;
  TRefCountPtr<FBaseGraphTask> *pTVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  atomic<unsigned_int> aVar7;
  int iVar8;
  uint uVar9;
  FBaseGraphTask *pFVar10;
  UNiagaraSystem *pUVar11;
  FNiagaraSystemInstance *this_00;
  TReferenceControllerBase<1> *pTVar12;
  FNiagaraSystemSimulation *this_01;
  FBaseGraphTask *pFVar13;
  code *pcVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  FName this_02;
  LARGE_INTEGER LVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  ETickingGroup EVar23;
  FParticlePerfStats *pFVar24;
  FParticlePerfStats *pFVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_SpawnNewGT> FVar27;
  FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT> FVar28;
  TStatId TVar29;
  float *pfVar30;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar31;
  FTaskBase *pFVar32;
  FNiagaraSystemSimulationTickContext *pFVar33;
  FNiagaraSystemSimulationSpawnConcurrentTask *pFVar34;
  undefined8 *puVar35;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar36;
  FName FVar37;
  FName FVar38;
  FTaskBase *this_03;
  FScriptContainerElement *pFVar39;
  undefined1 auStackY_2b8 [32];
  EExtendedTaskPriority local_256;
  ETaskPriority local_255;
  FNiagaraCrashReporterScope local_254 [4];
  FName local_250;
  undefined1 local_248 [4];
  FLLMScope local_244;
  FColor_u_0 local_240;
  FColor_u_0 local_23c;
  FName local_238;
  FName local_230;
  byte local_228;
  FName local_220;
  FName local_218;
  LARGE_INTEGER local_210;
  FParticlePerfStats *local_208;
  FParticlePerfStats *local_200;
  FName local_1f8;
  FName local_1e8;
  LARGE_INTEGER local_1d8;
  FMemScope local_1d0;
  LARGE_INTEGER local_1c8;
  FName local_1c0;
  FName local_1b8;
  FName local_1b0;
  longlong local_1a8;
  TSharedRef<FNiagaraSystemSimulation,1> local_1a0;
  FNiagaraSystemSimulationTickContext local_190;
  FNiagaraSystemSimulationTickContext local_f0;
  ulonglong local_50;
  
  local_50 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  if (this->SystemInstancesPerState[1].ArrayNum == 0) {
    return;
  }
  if (this->bCanExecute == 0) {
    return;
  }
  pFVar10 = (this->AllWorkCompleteGraphEvent).Reference;
  if ((pFVar10 != (FBaseGraphTask *)0x0) && (pFVar10->field_0xd0 == '\0')) {
    if (!param_2) {
      return;
    }
    WaitForInstancesTickComplete(this,true);
  }
  pFVar10 = (this->ConcurrentTickGraphEvent).Reference;
  pFVar25 = (FParticlePerfStats *)0x0;
  if (pFVar10 != (FBaseGraphTask *)0x0) {
    (this->ConcurrentTickGraphEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar10->field_0x30;
    iVar6 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (*(code *)**(undefined8 **)pFVar10)(pFVar10,1);
    }
  }
  pFVar10 = (this->AllWorkCompleteGraphEvent).Reference;
  if (pFVar10 != (FBaseGraphTask *)0x0) {
    (this->AllWorkCompleteGraphEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar10->field_0x30;
    iVar6 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar6 == 1) {
      (*(code *)**(undefined8 **)pFVar10)(pFVar10,1);
    }
  }
  pUVar11 = this->System;
  pFVar24 = pFVar25;
  if (((this->World != (UWorld *)0x0) && (0 < (int)FParticlePerfStats::WorldStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar24 = FParticlePerfStats::GetWorldPerfStats(this->World);
  }
  local_208 = pFVar24;
  if (((pUVar11 != (UNiagaraSystem *)0x0) && (0 < (int)FParticlePerfStats::SystemStatsReaders)) &&
     (FParticlePerfStats::bStatsEnabled != (TAtomic<bool>)0x0)) {
    pFVar25 = FParticlePerfStats::GetSystemPerfStats((UFXSystemAsset *)pUVar11);
  }
  local_210.QuadPart = -1;
  local_200 = pFVar25;
  if ((pFVar24 != (FParticlePerfStats *)0x0) || (pFVar25 != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_1d8);
    local_210 = local_1d8;
  }
  FVar27 = StatPtr_STAT_NiagaraSystemSim_SpawnNewGT;
  if (StatPtr_STAT_NiagaraSystemSim_SpawnNewGT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_SpawnNewGT>)0x0) {
    pFVar26 = ::FName::FName(&local_1c0,"STAT_NiagaraSystemSim_SpawnNewGT");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_SpawnNewGT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_SpawnNewGT,
                        *pFVar26,L"System Simulation SpawnNew [GT]","STATGROUP_Niagara",
                        "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar38 = *(FName *)FVar27;
  bVar16 = false;
  bVar18 = false;
  local_1f8.ComparisonIndex.Value = 0;
  local_1f8.Number = 0;
  bVar21 = false;
  bVar15 = false;
  if ((FVar38.ComparisonIndex.Value.Value == 0) && (FVar38.Number == 0)) {
LAB_1493fe1ab:
    bVar18 = bVar15;
    bVar16 = bVar21;
    bVar21 = false;
    local_238 = local_1f8;
    FVar38 = local_1f8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_240.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_240._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar16 = false;
      bVar18 = true;
      bVar21 = false;
      bVar15 = true;
      if (-1 < CpuChannel->Enabled) {
        local_220.ComparisonIndex.Value = FVar38.ComparisonIndex.Value.Value;
        local_220.Number = FVar38.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_220,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                   ,0x5d2);
        bVar16 = true;
        bVar18 = true;
        bVar21 = true;
        bVar15 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493fe1ab;
    local_250 = FVar38;
    local_238 = FVar38;
    FThreadStats::AddMessage(FVar38,CycleScopeStart);
    bVar21 = true;
  }
  FVar28 = StatPtr_STAT_NiagaraOverview_GT;
  if (StatPtr_STAT_NiagaraOverview_GT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)0x0)
  {
    pFVar26 = ::FName::FName(&local_1b8,"STAT_NiagaraOverview_GT");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT,*pFVar26,
                        L"GT Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar37 = *(FName *)FVar28;
  bVar15 = false;
  bVar17 = false;
  local_1e8.ComparisonIndex.Value = 0;
  local_1e8.Number = 0;
  bVar20 = false;
  bVar22 = false;
  if ((FVar37.ComparisonIndex.Value.Value == 0) && (FVar37.Number == 0)) {
LAB_1493fe2d9:
    bVar17 = bVar22;
    bVar15 = bVar20;
    bVar20 = false;
    FVar37 = local_1e8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_23c.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_23c._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar15 = false;
      bVar17 = true;
      bVar20 = false;
      bVar22 = true;
      if (-1 < CpuChannel->Enabled) {
        local_218.ComparisonIndex.Value = FVar37.ComparisonIndex.Value.Value;
        local_218.Number = FVar37.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_218,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                   ,0x5d3);
        bVar15 = true;
        bVar17 = true;
        bVar20 = true;
        bVar22 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493fe2d9;
    local_250 = FVar37;
    FThreadStats::AddMessage(FVar37,CycleScopeStart);
    bVar20 = true;
  }
  if (__CsvProfilerStat1492 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat1492 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  FLLMScope::FLLMScope(&local_244,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_1d0,Niagara,true);
  TVar29.StatIdPtr = (TStatIdData *)StatPtr_STAT_NiagaraOverview_GT_CNC;
  if (StatPtr_STAT_NiagaraOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT_CNC>)0x0) {
    pFVar26 = ::FName::FName(&local_1b0,"STAT_NiagaraOverview_GT_CNC");
    TVar29.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT_CNC,*pFVar26,
                    L"GT Concurrent Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",
                    L"NiagaraOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_230,(UObjectBaseUtility *)this->System,TVar29);
  FNiagaraCrashReporterScope::FNiagaraCrashReporterScope(local_254,this);
  this->bInSpawnPhase = 1;
  if ((this->MaxDeltaTime).bIsSet != false) {
    pfVar30 = TOptional<float>::GetValue(&this->MaxDeltaTime);
    if (*pfVar30 <= param_1) {
      param_1 = *pfVar30;
    }
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
  }
  if (this->System->bFixedTickDelta != false) {
    param_1 = this->System->FixedTickDeltaTime;
  }
  SetupParameters_GameThread(this,param_1);
  local_250 = (FName)FNiagaraWorldManager::Get(this->World);
  if ((local_250 == (FName)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("WorldManager != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                          ,0x5ef,L""), bVar22)) {
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  uVar9 = this->SystemInstancesPerState[1].ArrayNum;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  if (this->SystemInstancesPerState[3].ArrayMax < (int)uVar9) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar9,&this->SystemInstancesPerState[3].AllocatorInstance,
               this->SystemInstancesPerState[3].ArrayNum,&this->SystemInstancesPerState[3].ArrayMax)
    ;
  }
  this_02 = local_250;
  iVar6 = this->SystemInstancesPerState[1].ArrayNum;
  while (0 < iVar6) {
    this_00 = *(FNiagaraSystemInstance **)this->SystemInstancesPerState[1].AllocatorInstance.Data;
    EVar23 = FNiagaraSystemInstance::CalculateTickGroup(this_00);
    if (EVar23 == this->SystemTickGroup) {
      FNiagaraSystemInstance::Tick_GameThread(this_00,param_1);
      if (this_00->SystemInstanceIndex != -1) {
        SetInstanceState(this,this_00,Spawning);
      }
    }
    else {
      pTVar31 = FNiagaraWorldManager::GetSystemSimulation
                          ((FNiagaraWorldManager *)this_02,&local_1a0,EVar23,this->System);
      pTVar12 = (pTVar31->SharedReferenceCount).ReferenceController;
      this_01 = pTVar31->Object;
      if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar12->SharedReferenceCount = (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1a0.SharedReferenceCount.ReferenceController);
      if ((this_01 == (FNiagaraSystemSimulation *)0x0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar22)) {
        pcVar14 = (code *)swi(3);
        (*pcVar14)();
        return;
      }
      TransferInstance(this_01,this_00);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    }
    FVar38 = local_238;
    iVar6 = this->SystemInstancesPerState[1].ArrayNum;
  }
  this_03 = (FTaskBase *)0x0;
  if (this->SystemInstancesPerState[3].ArrayNum < 1) {
    *(uint *)&this->field_0x30 = *(undefined4 *)&this->field_0x30 & 0xfffffffb;
    goto LAB_1493fe79c;
  }
  if (ZPULL(*(undefined4 *)&this->field_0x30,1,1) == 0) {
    InitParameterDataSetBindings
              (this,*(FNiagaraSystemInstance **)
                     this->SystemInstancesPerState[3].AllocatorInstance.Data);
  }
  FNiagaraSystemSimulationTickContext::FNiagaraSystemSimulationTickContext
            (&local_f0,this,this->SystemInstancesPerState + 3,&this->SpawningDataSet,param_1,
             this->SystemInstancesPerState[3].ArrayNum,(bool)(~this->bIsSolo & 1));
  if (local_f0.bRunningAsync == false) {
    Spawn_Concurrent(this,&local_f0);
  }
  else {
    pFVar32 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0x188,8);
    if (pFVar32 != (FTaskBase *)0x0) {
      FBaseGraphTask::FBaseGraphTask
                ((FBaseGraphTask *)pFVar32,
                 (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                  *)0x0);
      pFVar32->_padding_ =
           (longlong)&___7__TGraphTask_UFNiagaraSystemSimulationSpawnConcurrentTask____6B_;
      this_03 = pFVar32;
    }
    pFVar33 = FNiagaraSystemSimulationTickContext::FNiagaraSystemSimulationTickContext
                        (&local_190,&local_f0);
    pFVar34 = FNiagaraSystemSimulationSpawnConcurrentTask::
              FNiagaraSystemSimulationSpawnConcurrentTask
                        ((FNiagaraSystemSimulationSpawnConcurrentTask *)(this_03 + 1),pFVar33,
                         &this->AllWorkCompleteGraphEvent);
    UE::Tasks::Private::TranslatePriority(pFVar34->TaskThread,&local_255,&local_256);
    UE::Tasks::Private::FTaskBase::Init(this_03,L"GraphTask",local_255,local_256,None);
    TaskTrace::Created((ulong64)this_03->TraceId,0x188);
    LOCK();
    this_03->RefCount = (atomic<unsigned_int>)((int)this_03->RefCount + 1);
    UNLOCK();
    pTVar4 = &this->ConcurrentTickGraphEvent;
    if (pTVar4 == (TRefCountPtr<FBaseGraphTask> *)&local_1a8) {
      LOCK();
      paVar2 = &this_03->RefCount;
      aVar7 = *paVar2;
      *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
      UNLOCK();
      if (aVar7 == (atomic<unsigned_int>)0x1) {
        puVar35 = (undefined8 *)this_03->_padding_;
        pFVar32 = this_03;
LAB_1493fe673:
        (*(code *)*puVar35)(pFVar32);
      }
    }
    else {
      pFVar32 = (FTaskBase *)pTVar4->Reference;
      pTVar4->Reference = (FBaseGraphTask *)this_03;
      if (pFVar32 != (FTaskBase *)0x0) {
        LOCK();
        paVar2 = &pFVar32->RefCount;
        aVar7 = *paVar2;
        *paVar2 = (atomic<unsigned_int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar7 == (atomic<unsigned_int>)0x1) {
          puVar35 = (undefined8 *)pFVar32->_padding_;
          goto LAB_1493fe673;
        }
      }
    }
    pFVar39 = ((local_f0.Instances)->AllocatorInstance).Data;
    iVar6 = (local_f0.Instances)->ArrayNum;
    pFVar5 = pFVar39 + (longlong)iVar6 * 8;
    while( true ) {
      if ((local_f0.Instances)->ArrayNum != iVar6) {
        `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_248);
      }
      FVar38 = local_238;
      if (pFVar39 == pFVar5) break;
      pFVar10 = (this->ConcurrentTickGraphEvent).Reference;
      pFVar13 = *(FBaseGraphTask **)(*(longlong *)pFVar39 + 0x848);
      if (pFVar13 != pFVar10) {
        *(FBaseGraphTask **)(*(longlong *)pFVar39 + 0x848) = pFVar10;
        if (pFVar10 != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)&pFVar10->field_0x30 = *(int *)&pFVar10->field_0x30 + 1;
          UNLOCK();
        }
        if (pFVar13 != (FBaseGraphTask *)0x0) {
          LOCK();
          puVar1 = &pFVar13->field_0x30;
          iVar8 = *(int *)puVar1;
          *(int *)puVar1 = *(int *)puVar1 + -1;
          UNLOCK();
          if (iVar8 == 1) {
            (*(code *)**(undefined8 **)pFVar13)();
          }
        }
      }
      pFVar39 = pFVar39 + 8;
    }
    if (this_03->ExtendedPriority == TaskEvent) {
      LOCK();
      this_03->RefCount = (atomic<unsigned_int>)((int)this_03->RefCount + 1);
      UNLOCK();
    }
    UE::Tasks::Private::FTaskBase::TryLaunch(this_03,0);
    if ((this->System->bAllDIsPostSimulateCanOverlapFrames == 0) ||
       (NiagaraSystemSimulationLocal::GTickTaskAllowFrameOverlap == 0)) {
      FNiagaraWorldManager::MarkSimulationForPostActorWork((FNiagaraWorldManager *)local_250,this);
    }
    else {
      FNiagaraWorldManager::MarkSimulationsForEndOfFrameWait((FNiagaraWorldManager *)local_250,this)
      ;
    }
  }
  if (local_f0.TickBatch.AllocatorInstance.SecondaryData !=
      (ForElementType<FNiagaraSystemInstance_*>)0x0) {
    FMemory::Free((void *)local_f0.TickBatch.AllocatorInstance.SecondaryData);
  }
  FVar36 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_f0.BeforeInstancesTickGraphEvents;
  if (local_f0.BeforeInstancesTickGraphEvents.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar36 = local_f0.BeforeInstancesTickGraphEvents.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar36,local_f0.BeforeInstancesTickGraphEvents.ArrayNum
            );
  if (local_f0.BeforeInstancesTickGraphEvents.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_f0.BeforeInstancesTickGraphEvents.AllocatorInstance.SecondaryData);
  }
LAB_1493fe79c:
  FNiagaraCrashReporterScope::~FNiagaraCrashReporterScope(local_254);
  if ((local_228 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_228 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_228 & 4) != 0) {
    FThreadStats::AddMessage(local_230,CycleScopeEnd);
  }
  local_228 = 0;
  FMemScope::~FMemScope(&local_1d0);
  FLLMScope::~FLLMScope(&local_244);
  FCsvProfiler::EndExclusiveStat("Effects");
  if (bVar17) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar20) {
    FThreadStats::AddMessage(FVar37,CycleScopeEnd);
  }
  if (bVar18) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar16) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar38,CycleScopeEnd);
  }
  LVar19 = local_210;
  if (local_210.QuadPart != -1) {
    QueryPerformanceCounter(&local_1c8);
    if (local_208 != (FParticlePerfStats *)0x0) {
      puVar3 = &(local_208->GameThreadStats).TickGameThreadCycles;
      *puVar3 = *puVar3 + (local_1c8.QuadPart - (longlong)LVar19);
    }
    if (local_200 != (FParticlePerfStats *)0x0) {
      puVar3 = &(local_200->GameThreadStats).TickGameThreadCycles;
      *puVar3 = *puVar3 + (local_1c8.QuadPart - (longlong)LVar19);
    }
  }
  return;
}

// Tick_Concurrent @ 1494017b0

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
FNiagaraSystemSimulation::Tick_Concurrent
          (FNiagaraSystemSimulation *this,FNiagaraSystemSimulationTickContext *param_1)

{
  uint *puVar1;
  TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1> *pTVar2
  ;
  uint *puVar3;
  UNiagaraSystem *this_00;
  TAtomic<FMinimalName> TVar4;
  TStatIdData *pTVar5;
  FName FVar6;
  FScriptContainerElement *pFVar7;
  FNiagaraSystemInstance *pFVar8;
  FNiagaraDataSet *pFVar9;
  code *pcVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  longlong lVar17;
  bool bVar18;
  bool bVar19;
  uint uVar20;
  FName *pFVar21;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_TickCNC> FVar22;
  TStatId TVar23;
  FNiagaraDataBuffer *pFVar24;
  FThreadSafeStaticStat<FStat_STAT_NiagaraNumSystems> FVar25;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  uint *puVar29;
  FScriptContainerElement *pFVar30;
  longlong lVar31;
  FName FVar32;
  longlong lVar33;
  uint uVar34;
  TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *pTVar35;
  uchar auVar36 [8];
  float fVar37;
  undefined1 local_168;
  undefined1 local_167;
  undefined1 local_166;
  undefined1 local_165;
  FNiagaraCrashReporterScope local_164 [4];
  uint local_160;
  longlong local_158;
  uint local_150;
  FLLMScope local_14c;
  FName local_148;
  FColor_u_0 local_140;
  FColor_u_0 local_13c;
  int local_138;
  int local_134;
  FNiagaraDataBuffer *local_130;
  longlong *local_128;
  longlong local_120;
  FName local_118;
  byte local_110;
  FName local_108;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  FName local_e8;
  FName local_e0;
  FName local_d0;
  FName local_c0;
  FMemScope local_b8;
  FName local_b0;
  FString local_a8;
  undefined8 local_98;
  FSharedReferencer<1> FStack_90;
  undefined8 local_88;
  FSharedReferencer<1> FStack_80;
  FStatMessage local_78;
  FName local_68;
  FName local_60;
  FName local_58 [3];
  
  FVar22 = StatPtr_STAT_NiagaraSystemSim_TickCNC;
  if (StatPtr_STAT_NiagaraSystemSim_TickCNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_TickCNC>)0x0) {
    pFVar21 = ::FName::FName(&local_68,"STAT_NiagaraSystemSim_TickCNC");
    FVar22 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_TickCNC>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_TickCNC,*pFVar21
                        ,L"System Simulation Tick [CNC]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar32 = *(FName *)FVar22;
  bVar11 = false;
  bVar16 = false;
  local_e0.ComparisonIndex.Value = 0;
  local_e0.Number = 0;
  bVar18 = false;
  bVar12 = false;
  if ((FVar32.ComparisonIndex.Value.Value != 0) || (FVar32.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_140.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_140._s_0,(char *)*(FName *)((longlong)FVar22 + 0x10));
      bVar11 = false;
      bVar16 = true;
      bVar18 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_e8.ComparisonIndex.Value = FVar32.ComparisonIndex.Value.Value;
        local_e8.Number = FVar32.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_e8,(wchar_t *)*(FName *)((longlong)FVar22 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                   ,0x74a);
        bVar11 = true;
        bVar16 = true;
        bVar18 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_148 = FVar32;
      FThreadStats::AddMessage(FVar32,CycleScopeStart);
      bVar18 = true;
      goto LAB_149401923;
    }
  }
  bVar16 = bVar12;
  bVar11 = bVar18;
  bVar18 = false;
  local_148 = local_e0;
  FVar32 = local_e0;
LAB_149401923:
  FLLMScope::FLLMScope(&local_14c,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_b8,Niagara,true);
  TVar23.StatIdPtr = (TStatIdData *)StatPtr_STAT_NiagaraOverview_GT_CNC;
  if (StatPtr_STAT_NiagaraOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT_CNC>)0x0) {
    pFVar21 = ::FName::FName(&local_60,"STAT_NiagaraOverview_GT_CNC");
    TVar23.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT_CNC,*pFVar21,
                    L"GT Concurrent Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",
                    L"NiagaraOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_118,(UObjectBaseUtility *)param_1->System,TVar23);
  if ((this->bCanExecute != 0) && (param_1->Instances->ArrayNum != 0)) {
    FNiagaraCrashReporterScope::FNiagaraCrashReporterScope(local_164,this);
    if (((GbDumpSystemData != 0) || (param_1->System->bDumpDebugSystemInfo != 0)) &&
       (4 < (byte)LogNiagara._0_1_)) {
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (4 < (byte)LogNiagara._0_1_) {
        local_b0 = (FName)param_1->System->_padding_;
        ::FName::ToString(&local_b0,&local_a8);
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogNiagara._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        }
      }
    }
    this_00 = param_1->System;
    TVar4 = ((this_00->StatID_GT).StatIdPtr)->Name;
    if ((TVar4._0_4_ == 0) && (TVar4._4_4_ == 0)) {
      UNiagaraSystem::GenerateStatID(this_00);
    }
    pTVar5 = (this_00->StatID_GT_CNC).StatIdPtr;
    bVar14 = false;
    bVar19 = false;
    local_d0.ComparisonIndex.Value = 0;
    local_d0.Number = 0;
    bVar15 = false;
    bVar13 = false;
    bVar12 = false;
    FVar6 = *(FName *)&pTVar5->Name;
    if ((FVar6.ComparisonIndex.Value.Value != 0) || (FVar6.Number != 0)) {
      if (GCycleStatsShouldEmitNamedEvents != 0) {
        local_13c.Bits = 0;
        FGenericPlatformMisc::BeginNamedEvent
                  ((FColor *)&local_13c._s_0,(pTVar5->StatDescriptionAnsi).Ptr);
        bVar14 = false;
        bVar19 = true;
        bVar13 = false;
        bVar12 = true;
        if (-1 < CpuChannel->Enabled) {
          local_108.ComparisonIndex.Value = FVar6.ComparisonIndex.Value.Value;
          local_108.Number = FVar6.Number;
          FCpuProfilerTrace::OutputBeginDynamicEventWithId
                    (&local_108,(pTVar5->StatDescriptionWide).Ptr,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                     ,0x75d);
          bVar14 = true;
          bVar19 = true;
          bVar13 = true;
          bVar12 = true;
        }
      }
      bVar15 = false;
      if (FThreadStats::bPrimaryEnable != false) {
        local_d0 = FVar6;
        FThreadStats::AddMessage(FVar6,CycleScopeStart);
        bVar15 = true;
        bVar12 = bVar19;
        bVar13 = bVar14;
      }
    }
    pTVar35 = param_1->Instances;
    if (this->bRunUpdateScript == 0) {
      local_134 = pTVar35->ArrayNum;
      lVar26 = (longlong)local_134;
      local_160 = local_134 - param_1->SpawnNum;
      lVar31 = (longlong)(int)local_160;
      local_f0 = lVar26;
      uVar28 = local_160;
      uVar34 = local_160;
      local_120 = lVar31;
      if (this->bRunSpawnScript == 0) {
        FNiagaraDataSet::BeginSimulate(param_1->DataSet,true);
        FNiagaraDataSet::Allocate(param_1->DataSet,param_1->Instances->ArrayNum,false);
        pFVar24 = FNiagaraDataSet::GetDestinationDataChecked(param_1->DataSet);
        FNiagaraDataBuffer::SetNumInstances(pFVar24,param_1->Instances->ArrayNum);
        FNiagaraDataSet::EndSimulate(param_1->DataSet,true);
        local_120 = lVar31;
      }
      else {
        for (; local_160 = uVar34, lVar31 < lVar26; lVar31 = lVar31 + 1) {
          pTVar35 = param_1->Instances;
          uVar34 = 0;
          if ((int)uVar28 < pTVar35->ArrayNum) {
            uVar34 = ~uVar28 >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          FNiagaraSystemInstance::TickInstanceParameters_Concurrent
                    (*(FNiagaraSystemInstance **)((pTVar35->AllocatorInstance).Data + lVar31 * 8));
          uVar28 = uVar28 + 1;
          uVar34 = local_160;
        }
        if (0 < param_1->SpawnNum) {
          PrepareForSystemSimulate(this,param_1);
          SpawnSystemInstances(this,param_1);
          local_158 = local_120;
          lVar31 = local_120;
          if (local_120 < lVar26) {
            do {
              pTVar35 = param_1->Instances;
              uVar28 = 0;
              if ((int)uVar34 < pTVar35->ArrayNum) {
                uVar28 = ~uVar34 >> 0x1f;
              }
              local_158 = lVar31;
              if ((uVar28 == 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar19)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              lVar33 = *(longlong *)((pTVar35->AllocatorInstance).Data + lVar31 * 8);
              iVar27 = *(int *)(lVar33 + 0x130);
              local_128 = *(longlong **)(lVar33 + 0x128);
              local_138 = iVar27;
              if ((iVar27 < 0) &&
                 (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                     ("InCount >= 0",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                      ,0xeb,L""), bVar19)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              local_150 = 0;
              if (0 < iVar27) {
                lVar33 = 0;
                local_f8 = 0;
                do {
                  local_100 = *local_128;
                  if ((*(int *)(local_100 + 0xd4) != 3) && (*(int *)(local_100 + 0xd4) != 4)) {
                    uVar28 = 0;
                    if ((int)local_150 < (this->DataSetToEmitterRendererParameters).ArrayNum) {
                      uVar28 = ~local_150 >> 0x1f;
                    }
                    if ((uVar28 == 0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar19)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    lVar17 = local_100;
                    pFVar7 = (this->DataSetToEmitterRendererParameters).AllocatorInstance.Data;
                    puVar29 = *(uint **)(pFVar7 + lVar33);
                    iVar27 = *(int *)(pFVar7 + lVar33 + 8);
                    pFVar24 = param_1->DataSet->CurrentData;
                    puVar3 = puVar29 + (longlong)iVar27 * 2;
                    lVar31 = local_158 * 4;
                    lVar26 = lVar31;
                    local_130 = pFVar24;
                    while( true ) {
                      if (*(int *)(pFVar7 + lVar33 + 8) != iVar27) {
                        local_168 = 0;
                        `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>
                        ::operator!='::__l2::<lambda_1>::operator()(&local_168);
                        lVar26 = lVar31;
                        pFVar24 = local_130;
                      }
                      if (puVar29 == puVar3) break;
                      uVar28 = *puVar29;
                      lVar26 = local_158 * 4;
                      puVar1 = puVar29 + 1;
                      puVar29 = puVar29 + 2;
                      *(undefined4 *)((ulonglong)uVar28 + *(longlong *)(lVar17 + 0x60)) =
                           *(undefined4 *)
                            ((pFVar24->FloatData).AllocatorInstance.Data +
                            lVar26 + (ulonglong)(pFVar24->FloatStride * *puVar1));
                    }
                    puVar29 = *(uint **)(pFVar7 + lVar33 + 0x10);
                    iVar27 = *(int *)(pFVar7 + lVar33 + 0x18);
                    puVar3 = puVar29 + (longlong)iVar27 * 2;
                    while( true ) {
                      if (*(int *)(pFVar7 + lVar33 + 0x18) != iVar27) {
                        local_167 = 0;
                        `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>
                        ::operator!='::__l2::<lambda_1>::operator()(&local_167);
                        lVar26 = lVar31;
                      }
                      pFVar24 = local_130;
                      if (puVar29 == puVar3) break;
                      uVar28 = *puVar29;
                      puVar1 = puVar29 + 1;
                      puVar29 = puVar29 + 2;
                      *(undefined4 *)((ulonglong)uVar28 + *(longlong *)(lVar17 + 0x60)) =
                           *(undefined4 *)
                            ((local_130->Int32Data).AllocatorInstance.Data +
                            lVar26 + (ulonglong)(local_130->Int32Stride * *puVar1));
                      lVar26 = lVar31;
                    }
                    iVar27 = *(int *)(pFVar7 + lVar33 + 0x28);
                    puVar29 = *(uint **)(pFVar7 + lVar33 + 0x20);
                    puVar3 = puVar29 + (longlong)iVar27 * 3;
                    while( true ) {
                      if (*(int *)(pFVar7 + lVar33 + 0x28) != iVar27) {
                        local_166 = 0;
                        `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FHalfDataOffsets,int,0>
                        ::operator!='::__l2::<lambda_1>::operator()(&local_166);
                      }
                      if (puVar29 == puVar3) break;
                      pFVar30 = (pFVar24->HalfData).AllocatorInstance.Data +
                                local_158 * 2 + (ulonglong)(pFVar24->HalfStride * puVar29[1]);
                      if ((char)puVar29[2] == '\0') {
                        uVar28 = *puVar29;
                        puVar29 = puVar29 + 3;
                        *(ushort *)((ulonglong)uVar28 + *(longlong *)(lVar17 + 0x60)) =
                             *(ushort *)pFVar30;
                      }
                      else {
                        fVar37 = FGenericPlatformMath::LoadHalf((ushort *)pFVar30);
                        uVar28 = *puVar29;
                        puVar29 = puVar29 + 3;
                        *(float *)((ulonglong)uVar28 + *(longlong *)(lVar17 + 0x60)) = fVar37;
                      }
                    }
                    *(uint *)(lVar17 + 0xc0) = *(uint *)(lVar17 + 0xc0) | 1;
                    iVar27 = local_138;
                  }
                  local_150 = local_150 + 1;
                  local_128 = local_128 + 2;
                  local_f8 = local_f8 + 1;
                  lVar33 = lVar33 + 0x30;
                  lVar31 = local_158;
                  lVar26 = local_f0;
                  uVar34 = local_160;
                } while ((int)local_150 < iVar27);
              }
              uVar34 = uVar34 + 1;
              lVar31 = lVar31 + 1;
              FVar32 = local_148;
              local_160 = uVar34;
              local_158 = lVar31;
            } while (lVar31 < lVar26);
          }
        }
      }
      lVar31 = local_f0;
      uVar28 = 0;
      if (0 < lVar26) {
        lVar26 = 0;
        uVar34 = local_134 - 1;
        do {
          pTVar35 = param_1->Instances;
          uVar20 = 0;
          if ((int)uVar28 < pTVar35->ArrayNum) {
            uVar20 = ~uVar28 >> 0x1f;
          }
          if ((uVar20 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar8 = *(FNiagaraSystemInstance **)((pTVar35->AllocatorInstance).Data + lVar26 * 8);
          if (lVar26 < local_120) {
            FNiagaraSystemInstance::TickInstanceParameters_Concurrent(pFVar8);
          }
          FNiagaraSystemInstance::TickSystemState(pFVar8);
          AddSystemToTickBatch(this,param_1,pFVar8,uVar28 == uVar34);
          uVar28 = uVar28 + 1;
          lVar26 = lVar26 + 1;
          FVar32 = local_148;
        } while (lVar26 < lVar31);
      }
    }
    else {
      pFVar30 = (pTVar35->AllocatorInstance).Data;
      iVar27 = pTVar35->ArrayNum;
      pFVar7 = pFVar30 + (longlong)iVar27 * 8;
      while( true ) {
        if (pTVar35->ArrayNum != iVar27) {
          local_165 = 0;
          `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_165);
        }
        if (pFVar30 == pFVar7) break;
        FNiagaraSystemInstance::TickInstanceParameters_Concurrent
                  (*(FNiagaraSystemInstance **)pFVar30);
        pFVar30 = pFVar30 + 8;
      }
      PrepareForSystemSimulate(this,param_1);
      if (0 < param_1->SpawnNum) {
        SpawnSystemInstances(this,param_1);
      }
      UpdateSystemInstances(this,param_1);
      TransferSystemSimResults(this,param_1);
      uVar28 = 0;
      iVar27 = param_1->Instances->ArrayNum;
      if (0 < iVar27) {
        lVar31 = 0;
        do {
          pTVar35 = param_1->Instances;
          uVar34 = 0;
          if ((int)uVar28 < pTVar35->ArrayNum) {
            uVar34 = ~uVar28 >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          AddSystemToTickBatch
                    (this,param_1,
                     *(FNiagaraSystemInstance **)((pTVar35->AllocatorInstance).Data + lVar31 * 8),
                     uVar28 == iVar27 - 1U);
          uVar28 = uVar28 + 1;
          lVar31 = lVar31 + 1;
          FVar32 = local_148;
        } while (lVar31 < iVar27);
      }
    }
    if (param_1->bRunningAsync == false) {
      bVar19 = IsInGameThread();
      if ((!bVar19) &&
         (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInGameThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                              ,0x7bb,L""), bVar19)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pTVar35 = param_1->Instances;
      uVar28 = 0;
      if (0 < pTVar35->ArrayNum) {
        lVar31 = 0;
        do {
          uVar34 = 0;
          if ((int)uVar28 < pTVar35->ArrayNum) {
            uVar34 = ~uVar28 >> 0x1f;
          }
          if ((uVar34 == 0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pFVar8 = *(FNiagaraSystemInstance **)((pTVar35->AllocatorInstance).Data + lVar31);
          FNiagaraSystemInstance::FinalizeTick_GameThread(pFVar8,true);
          if ((-1 < (int)uVar28) && (pTVar35 = param_1->Instances, (int)uVar28 < pTVar35->ArrayNum))
          {
            if (((int)uVar28 < 0) &&
               (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar19)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            if (*(FNiagaraSystemInstance **)((pTVar35->AllocatorInstance).Data + lVar31) == pFVar8)
            {
              uVar28 = uVar28 + 1;
              lVar31 = lVar31 + 8;
            }
          }
          pFVar9 = param_1->DataSet;
          uVar34 = param_1->Instances->ArrayNum;
          if ((pFVar9->CurrentData == (FNiagaraDataBuffer *)0x0) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("CurrentData",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                                  ,0x158,L""), bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if ((pFVar9->CurrentData->NumInstances != uVar34) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Context.DataSet.GetCurrentDataChecked().GetNumInstances() == Context.Instances.Num()"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                                  ,0x7c8,L""), bVar19)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          pTVar35 = param_1->Instances;
        } while ((int)uVar28 < pTVar35->ArrayNum);
      }
    }
    if ((((this->bIsSolo != 0) && (param_1->Instances->ArrayNum == 1)) &&
        (pFVar8 = *(FNiagaraSystemInstance **)(param_1->Instances->AllocatorInstance).Data,
        pFVar8 != (FNiagaraSystemInstance *)0x0)) &&
       (pTVar2 = &pFVar8->CurrentCapture,
       pTVar2->Object !=
       (TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *)0x0)) {
      FNiagaraSystemInstance::WaitForConcurrentTickAndFinalize(pFVar8,false);
      FNiagaraSystemInstance::SetSolo(pFVar8,pFVar8->bWasSoloPriorToCaptureRequest);
      local_98 = 0;
      FStack_90.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar2 != (TSharedPtr<TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_>,1>
                     *)&local_98) {
        pTVar2->Object =
             (TArray<TSharedPtr<FNiagaraScriptDebuggerInfo,1>,TSizedDefaultAllocator<32>_> *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pFVar8->CurrentCapture).SharedReferenceCount,&FStack_90);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_90.ReferenceController);
      local_88 = 0;
      FStack_80.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (&pFVar8->CurrentCaptureGuid != (TSharedPtr<FGuid,1> *)&local_88) {
        (pFVar8->CurrentCaptureGuid).Object = (FGuid *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(pFVar8->CurrentCaptureGuid).SharedReferenceCount,&FStack_80);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_80.ReferenceController);
    }
    auVar36 = (uchar  [8])(longlong)param_1->Instances->ArrayNum;
    if ((auVar36 != (uchar  [8])0x0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar25 = StatPtr_STAT_NiagaraNumSystems;
      if (StatPtr_STAT_NiagaraNumSystems == (FThreadSafeStaticStat<FStat_STAT_NiagaraNumSystems>)0x0
         ) {
        pFVar21 = ::FName::FName(local_58,"STAT_NiagaraNumSystems");
        FVar25 = (FThreadSafeStaticStat<FStat_STAT_NiagaraNumSystems>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraNumSystems,*pFVar21,
                            L"NumSystems","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,true
                            ,ST_int64,false,false,MCR_Invalid);
      }
      FVar6 = *(FName *)FVar25;
      if (((FVar6 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this_01 = TlsGetValue(FThreadStats::TlsSlot);
        if (this_01 == (FThreadStats *)0x0) {
          this_02 = FThreadStatsPool::Get();
          this_01 = FThreadStatsPool::GetFromPool(this_02);
        }
        local_78.NameAndInfo.Number = FVar6.Number & 0xffffafff | 0xa000;
        local_c0 = FVar6;
        local_78.StatData.Pad = auVar36;
        local_78.NameAndInfo.Index.Value = FVar6.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this_01,&local_78);
        FStatsTrace::Add(&local_c0,(long64)auVar36);
        if (this_01->ScopeCount == 0) {
          FThreadStats::Flush(this_01,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this_01,false,false);
        }
      }
    }
    if (bVar12) {
      FGenericPlatformMisc::EndNamedEvent();
    }
    if (bVar13) {
      FCpuProfilerTrace::OutputEndEvent();
    }
    if (bVar15) {
      FThreadStats::AddMessage(local_d0,CycleScopeEnd);
    }
    FNiagaraCrashReporterScope::~FNiagaraCrashReporterScope(local_164);
  }
  if ((local_110 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_110 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_110 & 4) != 0) {
    FThreadStats::AddMessage(local_118,CycleScopeEnd);
  }
  local_110 = 0;
  FMemScope::~FMemScope(&local_b8);
  FLLMScope::~FLLMScope(&local_14c);
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar11) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar18) {
    FThreadStats::AddMessage(FVar32,CycleScopeEnd);
  }
  return;
}

// Tick_GameThread @ 149402af0

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
FNiagaraSystemSimulation::Tick_GameThread
          (FNiagaraSystemSimulation *this,float param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  undefined1 *puVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  TRefCountPtr<FBaseGraphTask> *pTVar6;
  int iVar7;
  float fVar8;
  TRefCountPtr<FBaseGraphTask> local_res8;
  TRefCountPtr<FBaseGraphTask> local_res20;
  
  uVar4 = 0;
  local_res8.Reference = local_res8.Reference & 0xffffffff00000000;
  if (this->System->bFixedTickDelta == false) {
    (this->TickInfo).EngineTick = param_1;
    (this->TickInfo).SystemTick = param_1;
    (this->TickInfo).UsesFixedTick = false;
    (this->TickInfo).TickCount = 1;
    (this->TickInfo).TickNumber = 0;
    (this->TickInfo).TimeStepFraction = 1.0;
    Tick_GameThread_Internal(this,param_1,param_2);
    return;
  }
  fVar2 = this->System->FixedTickDeltaTime;
  iVar7 = 0;
  if (0.0 < fVar2) {
    fVar8 = FGenericPlatformMath::Fmod(this->FixedDeltaTickAge,fVar2);
    iVar3 = (int)ROUND((fVar8 + param_1 + fVar8 + param_1) / fVar2 - __real_3f000000) >> 1;
    iVar7 = GNiagaraSystemSimulationMaxTickSubsteps;
    if (iVar3 < GNiagaraSystemSimulationMaxTickSubsteps) {
      iVar7 = iVar3;
    }
  }
  (this->TickInfo).EngineTick = param_1;
  (this->TickInfo).SystemTick = fVar2;
  (this->TickInfo).UsesFixedTick = true;
  (this->TickInfo).TickCount = iVar7;
  (this->TickInfo).TickNumber = -1;
  (this->TickInfo).TimeStepFraction = 0.0;
  if (0 < iVar7) {
    fVar8 = __real_3f800000 / (float)iVar7;
    uVar5 = uVar4;
    do {
      (this->TickInfo).TickNumber = uVar4;
      uVar4 = uVar4 + 1;
      (this->TickInfo).TimeStepFraction = (float)(int)uVar4 * fVar8;
      if (iVar7 == 1) {
        local_res20 = (TRefCountPtr<FBaseGraphTask>)param_2->Reference;
        uVar5 = uVar5 | 1;
        if (local_res20.Reference != (FBaseGraphTask *)0x0) {
          LOCK();
          *(int *)&(local_res20.Reference)->field_0x30 =
               *(int *)&(local_res20.Reference)->field_0x30 + 1;
          UNLOCK();
        }
        pTVar6 = &local_res20;
      }
      else {
        uVar5 = uVar5 | 2;
        local_res8.Reference = (FBaseGraphTask *)0x0;
        pTVar6 = &local_res8;
      }
      Tick_GameThread_Internal(this,fVar2,pTVar6);
      if (((uVar5 & 2) != 0) &&
         (uVar5 = uVar5 & 0xfffffffd, local_res8.Reference != (FBaseGraphTask *)0x0)) {
        LOCK();
        puVar1 = &(local_res8.Reference)->field_0x30;
        iVar3 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)**(undefined8 **)local_res8.Reference)(local_res8.Reference,1);
        }
      }
      if (((uVar5 & 1) != 0) &&
         (uVar5 = uVar5 & 0xfffffffe, local_res20.Reference != (FBaseGraphTask *)0x0)) {
        LOCK();
        puVar1 = &(local_res20.Reference)->field_0x30;
        iVar3 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar3 == 1) {
          (*(code *)**(undefined8 **)local_res20.Reference)(local_res20.Reference,1);
        }
      }
    } while ((int)uVar4 < iVar7);
  }
  this->FixedDeltaTickAge = param_1 + this->FixedDeltaTickAge;
  return;
}

// Tick_GameThread_Internal @ 149402d30

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
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
FNiagaraSystemSimulation::Tick_GameThread_Internal
          (FNiagaraSystemSimulation *this,float param_1,TRefCountPtr<FBaseGraphTask> *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  ulong64 *puVar3;
  TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *pTVar4;
  TRefCountPtr<FBaseGraphTask> *pTVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  int iVar9;
  UNiagaraSystem *pUVar10;
  TAtomic<FMinimalName> TVar11;
  TStatIdData *pTVar12;
  FBaseGraphTask *pFVar13;
  FNiagaraSystemInstance *pFVar14;
  TReferenceControllerBase<1> *pTVar15;
  FNiagaraSystemSimulation *pFVar16;
  FScriptContainerElement *pFVar17;
  FBaseGraphTask *pFVar18;
  code *pcVar19;
  double dVar20;
  bool bVar21;
  bool bVar22;
  uint uVar23;
  ETickingGroup EVar24;
  int iVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_TickGT> FVar27;
  TStatId TVar28;
  FParticlePerfStats *pFVar29;
  float *pfVar30;
  FName FVar31;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar32;
  FNiagaraWorldManager *this_00;
  UObject *pUVar33;
  UClass *pUVar34;
  FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstances> FVar35;
  TGraphTask<FNiagaraSystemSimulationTickConcurrentTask> *this_01;
  undefined8 *puVar36;
  TGraphTask<FNiagaraSystemSimulationTickConcurrentTask> *pTVar37;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar38;
  uint uVar39;
  longlong *plVar40;
  longlong lVar41;
  FScriptContainerElement *pFVar42;
  FNameEntryId FVar43;
  LARGE_INTEGER LVar44;
  uint uVar45;
  int iVar46;
  float fVar47;
  undefined1 auStackY_368 [32];
  FNiagaraCrashReporterScope local_307 [7];
  FName local_300;
  byte local_2f8;
  FName local_2f0;
  byte local_2e8;
  undefined1 local_2e0 [8];
  uint local_2d8;
  uint uStack_2d4;
  int local_2d0;
  FNiagaraSystemInstance *local_2c8;
  FName local_2c0;
  FLLMScope local_2b8;
  FColor_u_0 local_2b4;
  FColor_u_0 local_2b0 [2];
  FName local_2a8;
  byte local_2a0;
  FName local_298;
  FName local_290;
  TRefCountPtr<FBaseGraphTask> *local_288;
  LARGE_INTEGER local_280;
  FParticlePerfStats *local_278;
  FParticlePerfStats *local_270;
  LARGE_INTEGER local_268;
  LARGE_INTEGER local_260;
  FConstructor local_258;
  FBaseGraphTask *local_250;
  LARGE_INTEGER local_248;
  FMemScope local_240;
  LARGE_INTEGER local_238;
  LARGE_INTEGER local_230;
  LARGE_INTEGER local_228 [2];
  TVector<float>_u_0 local_218;
  TVector<float> local_208;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  longlong local_1e0;
  TSharedRef<FNiagaraSystemSimulation,1> local_1d8;
  TSharedRef<FNiagaraSystemSimulation,1> local_1c8;
  TVector<double>_u_0 local_1b8;
  TVector<double>_u_0 local_198 [2];
  double local_160;
  double dStack_158;
  double local_150;
  FNiagaraSystemSimulationTickContext local_130;
  ulonglong local_90;
  
  local_90 = __security_cookie.value ^ (ulonglong)auStackY_368;
  if ((this->SystemInstancesPerState[1].ArrayNum == 0) &&
     (this->SystemInstancesPerState[4].ArrayNum == 0)) {
    return;
  }
  if (this->bCanExecute == 0) {
    return;
  }
  if ((0.0 < GNiagaraSystemSimulationSkipTickDeltaSeconds) &&
     (param_1 <= GNiagaraSystemSimulationSkipTickDeltaSeconds)) {
    return;
  }
  local_288 = param_2;
  bVar21 = IsInGameThread();
  if ((!bVar21) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsInGameThread()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                          ,0x4b2,L""), bVar21)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  if ((this->bInSpawnPhase != 0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("bInSpawnPhase == false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                          ,0x4b3,L""), bVar21)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  FNiagaraCrashReporterScope::FNiagaraCrashReporterScope(local_307,this);
  WaitForInstancesTickComplete(this,false);
  uVar45 = 0;
  FVar27 = StatPtr_STAT_NiagaraSystemSim_TickGT;
  if (StatPtr_STAT_NiagaraSystemSim_TickGT ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_TickGT>)0x0) {
    pFVar26 = ::FName::FName(&local_1f8,"STAT_NiagaraSystemSim_TickGT");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_TickGT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_TickGT,*pFVar26,
                        L"System Simulation Tick [GT]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_2f0.ComparisonIndex.Value = 0;
  local_2f0.Number = 0;
  local_2e8 = 0;
  FVar31 = *(FName *)FVar27;
  FVar43 = FVar31.ComparisonIndex.Value;
  uVar39 = FVar31.Number;
  if ((FVar43.Value != 0) || (uVar39 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2b4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2b4._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      local_2e8 = local_2e8 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_298.ComparisonIndex.Value = FVar43.Value;
        local_298.Number = uVar39;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_298,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                   ,0x4ba);
        local_2e8 = local_2e8 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_2f0 = FVar31;
      local_2d8 = FVar43.Value;
      uStack_2d4 = uVar39;
      FThreadStats::AddMessage(FVar31,CycleScopeStart);
      local_2e8 = local_2e8 | 4;
    }
  }
  FLLMScope::FLLMScope(&local_2b8,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_240,Niagara,true);
  TVar28.StatIdPtr = (TStatIdData *)StatPtr_STAT_NiagaraOverview_GT_CNC;
  if (StatPtr_STAT_NiagaraOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT_CNC>)0x0) {
    pFVar26 = ::FName::FName(&local_1f0,"STAT_NiagaraOverview_GT_CNC");
    TVar28.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT_CNC,*pFVar26,
                    L"GT Concurrent Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",
                    L"NiagaraOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_2a8,(UObjectBaseUtility *)this->System,TVar28);
  pUVar10 = this->System;
  TVar11 = ((pUVar10->StatID_GT).StatIdPtr)->Name;
  if ((TVar11._0_4_ == 0) && (TVar11._4_4_ == 0)) {
    UNiagaraSystem::GenerateStatID(pUVar10);
  }
  pTVar12 = (pUVar10->StatID_GT).StatIdPtr;
  local_300.ComparisonIndex.Value = 0;
  local_300.Number = 0;
  local_2f8 = 0;
  FVar31 = *(FName *)&pTVar12->Name;
  FVar43 = FVar31.ComparisonIndex.Value;
  uVar39 = FVar31.Number;
  if ((FVar43.Value != 0) || (uVar39 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_2b0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_2b0[0]._s_0,(pTVar12->StatDescriptionAnsi).Ptr);
      local_2f8 = local_2f8 | 1;
      if (-1 < CpuChannel->Enabled) {
        local_290.ComparisonIndex.Value = FVar43.Value;
        local_290.Number = uVar39;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_290,(pTVar12->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                   ,0x4bf);
        local_2f8 = local_2f8 | 2;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_300 = FVar31;
      local_2d8 = FVar43.Value;
      uStack_2d4 = uVar39;
      FThreadStats::AddMessage(FVar31,CycleScopeStart);
      local_2f8 = local_2f8 | 4;
    }
  }
  local_2d0 = this->SystemInstancesPerState[4].ArrayNum;
  pUVar10 = this->System;
  if (((this->World == (UWorld *)0x0) || ((int)FParticlePerfStats::WorldStatsReaders < 1)) ||
     (FParticlePerfStats::bStatsEnabled == (TAtomic<bool>)0x0)) {
    pFVar29 = (FParticlePerfStats *)0x0;
  }
  else {
    pFVar29 = FParticlePerfStats::GetWorldPerfStats(this->World);
  }
  local_278 = pFVar29;
  if (((pUVar10 == (UNiagaraSystem *)0x0) || ((int)FParticlePerfStats::SystemStatsReaders < 1)) ||
     (FParticlePerfStats::bStatsEnabled == (TAtomic<bool>)0x0)) {
    local_270 = (FParticlePerfStats *)0x0;
  }
  else {
    local_270 = FParticlePerfStats::GetSystemPerfStats((UFXSystemAsset *)pUVar10);
  }
  local_280.QuadPart = -1;
  if ((pFVar29 != (FParticlePerfStats *)0x0) || (local_270 != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_238);
    local_280 = local_238;
  }
  pFVar13 = (this->ConcurrentTickGraphEvent).Reference;
  if (((pFVar13 != (FBaseGraphTask *)0x0) && (pFVar13->field_0xd0 == '\0')) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("!ConcurrentTickGraphEvent.IsValid() || ConcurrentTickGraphEvent->IsComplete()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                          ,0x4c5,
                          L"NiagaraSystemSimulation System Concurrent has not completed when calling Tick_GameThread."
                         ), bVar21)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pFVar13 = (this->AllWorkCompleteGraphEvent).Reference;
  if (((pFVar13 != (FBaseGraphTask *)0x0) && (pFVar13->field_0xd0 == '\0')) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("!AllWorkCompleteGraphEvent.IsValid() || AllWorkCompleteGraphEvent->IsComplete()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                          ,0x4c6,
                          L"NiagaraSystemSimulation Finalizes are not completed when calling Tick_GameThread"
                         ), bVar21)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pFVar13 = (this->ConcurrentTickGraphEvent).Reference;
  if (pFVar13 != (FBaseGraphTask *)0x0) {
    (this->ConcurrentTickGraphEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar13->field_0x30;
    iVar25 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar25 == 1) {
      (*(code *)**(undefined8 **)pFVar13)(pFVar13,1);
    }
  }
  pFVar13 = (this->AllWorkCompleteGraphEvent).Reference;
  if (pFVar13 != (FBaseGraphTask *)0x0) {
    (this->AllWorkCompleteGraphEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar13->field_0x30;
    iVar25 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar25 == 1) {
      (*(code *)**(undefined8 **)pFVar13)(pFVar13,1);
    }
  }
  if (((this->MainDataSet).CurrentData == (FNiagaraDataBuffer *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x158,L""), bVar21)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  if ((this->SystemInstancesPerState[4].ArrayNum != ((this->MainDataSet).CurrentData)->NumInstances)
     && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                            ("GetSystemInstances(ENiagaraSystemInstanceState::Running).Num() == MainDataSet.GetCurrentDataChecked().GetNumInstances()"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                             ,0x4ca,L""), bVar21)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  if (((this->SpawningDataSet).CurrentData == (FNiagaraDataBuffer *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x158,L""), bVar21)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  if ((this->SystemInstancesPerState[3].ArrayNum !=
       ((this->SpawningDataSet).CurrentData)->NumInstances) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetSystemInstances(ENiagaraSystemInstanceState::Spawning).Num() == SpawningDataSet.GetCurrentDataChecked().GetNumInstances()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                          ,0x4cb,L""), bVar21)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  if (((this->PausedDataSet).CurrentData == (FNiagaraDataBuffer *)0x0) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x158,L""), bVar21)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  if ((this->SystemInstancesPerState[5].ArrayNum !=
       ((this->PausedDataSet).CurrentData)->NumInstances) &&
     (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                         ("GetSystemInstances(ENiagaraSystemInstanceState::Paused).Num() == PausedDataSet.GetCurrentDataChecked().GetNumInstances()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                          ,0x4cc,L""), bVar21)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  if (((this->MaxDeltaTime).bIsSet != false) && (this->System->bFixedTickDelta == false)) {
    pfVar30 = TOptional<float>::GetValue(&this->MaxDeltaTime);
    fVar47 = *pfVar30;
    if (param_1 <= *pfVar30) {
      fVar47 = param_1;
    }
    param_1 = fVar47;
    if (param_1 <= 0.0) {
      param_1 = 0.0;
    }
    (this->TickInfo).SystemTick = param_1;
    (this->TickInfo).TimeStepFraction = param_1 / (this->TickInfo).EngineTick;
  }
  uVar39 = CONCAT31(SUB43(*(undefined4 *)&this->field_0x30,1) >> 3,
                    ~ZPULL(*(undefined4 *)&this->field_0x30,3,1)) & 0xffffff01;
  if ((this->System->bSupportLargeWorldCoordinates == 0) ||
     (bVar21 = true, this->System->bLwcEnabledSettingCached == 0)) {
    bVar21 = false;
  }
  local_2d8 = uVar39;
  FVar31 = (FName)FNiagaraWorldManager::Get(this->World);
  local_2c0 = FVar31;
  if ((FVar31 == (FName)0x0) &&
     (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                         ("WorldManager != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                          ,0x4e4,L""), bVar22)) {
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  iVar25 = this->SystemInstancesPerState[4].ArrayNum;
  if (0 < iVar25) {
    lVar41 = 0;
    do {
      uVar23 = 0;
      if ((int)uVar45 < iVar25) {
        uVar23 = ~uVar45 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar22)) {
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      pFVar14 = *(FNiagaraSystemInstance **)
                 (this->SystemInstancesPerState[4].AllocatorInstance.Data + lVar41);
      if ((char)uVar39 == '\0') {
LAB_14940367b:
        pUVar33 = FWeakObjectPtr::Get(&(pFVar14->AttachComponent).WeakPtr);
        if (pUVar33 == (UObject *)0x0) {
LAB_1494036d2:
          plVar40 = (longlong *)0x0;
          LVar44.QuadPart = -1;
        }
        else {
          pUVar34 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
          iVar25 = (int)pUVar34->_padding_;
          if ((*(int *)(*(longlong *)&pUVar33->field_0x10 + 0x38) < iVar25) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar33->field_0x10 + 0x30) + (longlong)iVar25 * 8) !=
              &pUVar34->_padding_)) goto LAB_1494036d2;
          plVar40 = *(longlong **)&pUVar33[0x21].field_0x20;
          LVar44.QuadPart = -1;
          if (plVar40 != (longlong *)0x0) {
            QueryPerformanceCounter(&local_230);
            LVar44 = local_230;
          }
        }
        fVar47 = 0.0;
        if ((this->World != (UWorld *)0x0) &&
           (dVar7 = pFVar14->LastTickTime, fVar47 = 0.0, 0.0 < dVar7)) {
          dVar8 = this->World->TimeSeconds;
          pFVar14->LastTickTime = 0.0;
          fVar47 = (float)(dVar8 - dVar7);
        }
        fVar6 = pFVar14->LastAge;
        if (0.0 < fVar6) {
          pFVar14->LastAge = 0.0;
        }
        FNiagaraSystemInstance::Tick_GameThread(pFVar14,fVar6 + fVar47 + param_1);
        if (bVar21) {
          if (-1 < (int)uVar45) {
            if (((((int)uVar45 < this->SystemInstancesPerState[4].ArrayNum) &&
                 (*(FNiagaraSystemInstance **)
                   (this->SystemInstancesPerState[4].AllocatorInstance.Data + lVar41) == pFVar14))
                && (pUVar33 = FWeakObjectPtr::Get(&(pFVar14->AttachComponent).WeakPtr),
                   pUVar33 != (UObject *)0x0)) &&
               ((pFVar14->RequestedExecutionState == Active &&
                (pFVar14->ActualExecutionState == Active)))) {
              dVar8 = *(double *)&pUVar33[0xd].field_0x8;
              dVar20 = *(double *)&pUVar33[0xd].field_0x10;
              dVar7 = *(double *)&pUVar33[0xd].field_0x18;
              local_218._0_8_ = *(undefined8 *)&(pFVar14->LWCTile).field0_0x0;
              local_218._s_0.Z = (pFVar14->LWCTile).field0_0x0._s_0.Z;
              local_1b8._s_0.X = dVar8;
              local_1b8._s_0.Y = dVar20;
              local_1b8._s_0.Z = dVar7;
              local_160 = dVar8;
              dStack_158 = dVar20;
              local_150 = dVar7;
              bVar22 = UFXSystemComponent::RequiresLWCTileRecache
                                 ((TVector<float> *)&local_218._s_0,
                                  (TVector<double> *)&local_1b8._s_0);
              if (bVar22) {
                local_198[0]._0_8_ = dVar8;
                local_198[0]._8_8_ = dVar20;
                local_198[0]._16_8_ = dVar7;
                TLargeWorldRenderScalar<double>::GetTileFor
                          (&local_208,(TVector<double> *)&local_198[0]._s_0);
                FNiagaraSystemInstance::UpdateLWCTile(pFVar14,&local_208,&this->MainDataSet);
              }
            }
LAB_14940381b:
            if ((int)uVar45 < this->SystemInstancesPerState[4].ArrayNum) {
              if (((int)uVar45 < 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar19 = (code *)swi(3);
                (*pcVar19)();
                return;
              }
              if (*(FNiagaraSystemInstance **)
                   (this->SystemInstancesPerState[4].AllocatorInstance.Data + lVar41) == pFVar14) {
                uVar45 = uVar45 + 1;
                lVar41 = lVar41 + 8;
              }
            }
          }
        }
        else if (-1 < (int)uVar45) goto LAB_14940381b;
        if (LVar44.QuadPart != -1) {
          QueryPerformanceCounter(local_228);
          if (plVar40 != (longlong *)0x0) {
            plVar40[1] = plVar40[1] + (local_228[0].QuadPart - (longlong)LVar44);
            *plVar40 = *plVar40 + 1;
          }
        }
      }
      else {
        EVar24 = FNiagaraSystemInstance::CalculateTickGroup(pFVar14);
        if (EVar24 == this->SystemTickGroup) goto LAB_14940367b;
        if ((int)EVar24 <= (int)this->SystemTickGroup) {
          local_2c8 = pFVar14;
          bVar22 = IsInGameThread();
          if ((!bVar22) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsInGameThread()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                                  ,0x36d,L""), bVar22)) {
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
          pFVar42 = (this->PendingTickGroupPromotions).AllocatorInstance.Data;
          pFVar17 = pFVar42 + (longlong)(this->PendingTickGroupPromotions).ArrayNum * 8;
          for (; pFVar42 != pFVar17; pFVar42 = pFVar42 + 8) {
            if (*(FNiagaraSystemInstance **)pFVar42 == local_2c8) {
              bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("!PendingTickGroupPromotions.Contains(Instance)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                                  ,0x36e,L"");
              if (bVar22) {
                pcVar19 = (code *)swi(3);
                (*pcVar19)();
                return;
              }
              break;
            }
          }
          pTVar4 = &this->PendingTickGroupPromotions;
          pFVar17 = (pTVar4->AllocatorInstance).Data;
          if (((pFVar17 <= (FScriptContainerElement *)&local_2c8) &&
              ((FScriptContainerElement *)&local_2c8 <
               pFVar17 + (longlong)(this->PendingTickGroupPromotions).ArrayMax * 8)) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
          iVar25 = (this->PendingTickGroupPromotions).ArrayNum;
          piVar2 = &(this->PendingTickGroupPromotions).ArrayMax;
          if (iVar25 == *piVar2) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&pTVar4->AllocatorInstance,piVar2);
          }
          (this->PendingTickGroupPromotions).ArrayNum = iVar25 + 1;
          *(FNiagaraSystemInstance **)((pTVar4->AllocatorInstance).Data + (longlong)iVar25 * 8) =
               local_2c8;
          if ((this->bIsSolo != 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("bIsSolo == false",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                                  ,0x371,L""), bVar22)) {
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
          this_00 = FNiagaraWorldManager::Get(this->World);
          if (this_00 != (FNiagaraWorldManager *)0x0) {
            FNiagaraWorldManager::MarkSimulationForPostActorWork(this_00,this);
          }
          goto LAB_14940367b;
        }
        pTVar32 = FNiagaraWorldManager::GetSystemSimulation
                            ((FNiagaraWorldManager *)local_2c0,&local_1d8,EVar24,this->System);
        pTVar15 = (pTVar32->SharedReferenceCount).ReferenceController;
        pFVar16 = pTVar32->Object;
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1d8.SharedReferenceCount.ReferenceController);
        if ((pFVar16 == (FNiagaraSystemSimulation *)0x0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar22)) {
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        TransferInstance(pFVar16,pFVar14);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
      }
      iVar25 = this->SystemInstancesPerState[4].ArrayNum;
      FVar31 = local_2c0;
      uVar39 = local_2d8;
    } while ((int)uVar45 < iVar25);
  }
  SetupParameters_GameThread(this,param_1);
  iVar25 = this->SystemInstancesPerState[1].ArrayNum;
  iVar46 = 0;
  if (0 < iVar25) {
    iVar9 = this->SystemInstancesPerState[4].ArrayNum;
    uVar45 = iVar9 + iVar25;
    if ((int)uVar45 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar45);
    }
    piVar2 = &this->SystemInstancesPerState[4].ArrayMax;
    if (*piVar2 < (int)uVar45) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,uVar45,&this->SystemInstancesPerState[4].AllocatorInstance,iVar9,piVar2);
    }
    iVar25 = this->SystemInstancesPerState[1].ArrayNum;
    while (0 < iVar25) {
      pFVar14 = *(FNiagaraSystemInstance **)this->SystemInstancesPerState[1].AllocatorInstance.Data;
      if ((this->bIsSolo == 0) &&
         (EVar24 = FNiagaraSystemInstance::CalculateTickGroup(pFVar14),
         EVar24 != this->SystemTickGroup)) {
        pTVar32 = FNiagaraWorldManager::GetSystemSimulation
                            ((FNiagaraWorldManager *)FVar31,&local_1c8,EVar24,this->System);
        pTVar15 = (pTVar32->SharedReferenceCount).ReferenceController;
        pFVar16 = pTVar32->Object;
        if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1c8.SharedReferenceCount.ReferenceController);
        if ((pFVar16 == (FNiagaraSystemSimulation *)0x0) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar21)) {
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        TransferInstance(pFVar16,pFVar14);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15)
        ;
      }
      else {
        pUVar33 = FWeakObjectPtr::Get(&(pFVar14->AttachComponent).WeakPtr);
        if (pUVar33 == (UObject *)0x0) {
LAB_149403a0a:
          plVar40 = (longlong *)0x0;
          LVar44.QuadPart = -1;
        }
        else {
          pUVar34 = Z_Construct_UClass_UNiagaraComponent_NoRegister();
          iVar25 = (int)pUVar34->_padding_;
          if ((*(int *)(*(longlong *)&pUVar33->field_0x10 + 0x38) < iVar25) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar33->field_0x10 + 0x30) + (longlong)iVar25 * 8) !=
              &pUVar34->_padding_)) goto LAB_149403a0a;
          plVar40 = *(longlong **)&pUVar33[0x21].field_0x20;
          LVar44.QuadPart = -1;
          if (plVar40 != (longlong *)0x0) {
            QueryPerformanceCounter(&local_268);
            LVar44 = local_268;
          }
        }
        FNiagaraSystemInstance::Tick_GameThread(pFVar14,param_1);
        if ((0 < this->SystemInstancesPerState[1].ArrayNum) &&
           (*(FNiagaraSystemInstance **)this->SystemInstancesPerState[1].AllocatorInstance.Data ==
            pFVar14)) {
          if (this->bBindingsInitialized == 0) {
            InitParameterDataSetBindings(this,pFVar14);
          }
          SetInstanceState(this,pFVar14,Running);
          iVar46 = iVar46 + 1;
        }
        if (LVar44.QuadPart != -1) {
          QueryPerformanceCounter(&local_260);
          if (plVar40 != (longlong *)0x0) {
            plVar40[1] = plVar40[1] + (local_260.QuadPart - (longlong)LVar44);
            *plVar40 = *plVar40 + 1;
          }
        }
      }
      iVar25 = this->SystemInstancesPerState[1].ArrayNum;
    }
  }
  if (this->bIsSolo == 0) {
    UNiagaraSystem::AddToInstanceCountStat
              (this->System,this->SystemInstancesPerState[4].ArrayNum,false);
    lVar41 = (longlong)this->SystemInstancesPerState[4].ArrayNum;
    if ((lVar41 != 0) && (FThreadStats::bPrimaryEnable != false)) {
      FVar35 = StatPtr_STAT_TotalNiagaraSystemInstances;
      if (StatPtr_STAT_TotalNiagaraSystemInstances ==
          (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstances>)0x0) {
        pFVar26 = ::FName::FName(&local_1e8,"STAT_TotalNiagaraSystemInstances");
        FVar35 = (FThreadSafeStaticStat<FStat_STAT_TotalNiagaraSystemInstances>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TotalNiagaraSystemInstances,
                            *pFVar26,L"Total System Instances","STATGROUP_NiagaraSystemCounts",
                            "STATCAT_Niagara",L"Niagara System Counts",true,true,ST_int64,false,
                            false,MCR_Invalid);
      }
      local_2c0 = *(FName *)FVar35;
      FThreadStats::AddMessage<__int64>(local_2c0,Add,lVar41,false);
    }
  }
  FNiagaraSystemSimulationTickContext::FNiagaraSystemSimulationTickContext
            (&local_130,this,this->SystemInstancesPerState + 4,&this->MainDataSet,param_1,iVar46,
             local_288->Reference != (FBaseGraphTask *)0x0);
  if (local_130.bRunningAsync == false) {
    Tick_Concurrent(this,&local_130);
    goto LAB_149403d21;
  }
  local_258.Prerequisites =
       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  this_01 = TGraphTask<FNiagaraSystemSimulationTickConcurrentTask>::FConstructor::
            ConstructAndHoldImpl<FNiagaraSystemSimulationTickContext_&,TRefCountPtr<FBaseGraphTask>_&>
                      (&local_258,&local_130,&this->AllWorkCompleteGraphEvent);
  TaskTrace::Created(this_01->_padding_,0x188);
  if (this_01 != (TGraphTask<FNiagaraSystemSimulationTickConcurrentTask> *)0x0) {
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
  }
  pTVar5 = &this->ConcurrentTickGraphEvent;
  if (pTVar5 == (TRefCountPtr<FBaseGraphTask> *)&local_1e0) {
    if (this_01 != (TGraphTask<FNiagaraSystemSimulationTickConcurrentTask> *)0x0) {
      LOCK();
      plVar40 = &this_01->_padding_;
      lVar41 = *plVar40;
      *(int *)plVar40 = (int)*plVar40 + -1;
      UNLOCK();
      if ((int)lVar41 == 1) {
        puVar36 = (undefined8 *)this_01->_padding_;
        pTVar37 = this_01;
        goto LAB_149403c1b;
      }
    }
  }
  else {
    pTVar37 = (TGraphTask<FNiagaraSystemSimulationTickConcurrentTask> *)pTVar5->Reference;
    pTVar5->Reference = (FBaseGraphTask *)this_01;
    if (pTVar37 != (TGraphTask<FNiagaraSystemSimulationTickConcurrentTask> *)0x0) {
      LOCK();
      plVar40 = &pTVar37->_padding_;
      lVar41 = *plVar40;
      *(int *)plVar40 = (int)*plVar40 + -1;
      UNLOCK();
      if ((int)lVar41 == 1) {
        puVar36 = (undefined8 *)pTVar37->_padding_;
LAB_149403c1b:
        (*(code *)*puVar36)(pTVar37);
      }
    }
  }
  pFVar42 = ((local_130.Instances)->AllocatorInstance).Data;
  iVar25 = (local_130.Instances)->ArrayNum;
  pFVar17 = pFVar42 + (longlong)iVar25 * 8;
  while( true ) {
    if ((local_130.Instances)->ArrayNum != iVar25) {
      `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_2e0);
    }
    if (pFVar42 == pFVar17) break;
    pFVar13 = (this->ConcurrentTickGraphEvent).Reference;
    pFVar18 = *(FBaseGraphTask **)(*(longlong *)pFVar42 + 0x848);
    if (pFVar18 != pFVar13) {
      *(FBaseGraphTask **)(*(longlong *)pFVar42 + 0x848) = pFVar13;
      if (pFVar13 != (FBaseGraphTask *)0x0) {
        LOCK();
        *(int *)&pFVar13->field_0x30 = *(int *)&pFVar13->field_0x30 + 1;
        UNLOCK();
      }
      if (pFVar18 != (FBaseGraphTask *)0x0) {
        LOCK();
        puVar1 = &pFVar18->field_0x30;
        iVar46 = *(int *)puVar1;
        *(int *)puVar1 = *(int *)puVar1 + -1;
        UNLOCK();
        if (iVar46 == 1) {
          (*(code *)**(undefined8 **)pFVar18)();
        }
      }
    }
    pFVar42 = pFVar42 + 8;
  }
  if (*(undefined1 *)((longlong)&this_01->_padding_ + 4) == '\x02') {
    LOCK();
    *(int *)&this_01->_padding_ = (int)this_01->_padding_ + 1;
    UNLOCK();
  }
  UE::Tasks::Private::FTaskBase::TryLaunch((FTaskBase *)this_01,0);
  if (((this->bIsSolo == 0) && (NiagaraSystemSimulationLocal::GTickTaskShouldWait == false)) &&
     (this->System->bAllDIsPostStageCanOverlapTickGroups != 0)) {
    if ((this->System->bAllDIsPostSimulateCanOverlapFrames == 0) ||
       (NiagaraSystemSimulationLocal::GTickTaskAllowFrameOverlap == 0)) {
      FNiagaraWorldManager::MarkSimulationForPostActorWork((FNiagaraWorldManager *)FVar31,this);
    }
    else {
      FNiagaraWorldManager::MarkSimulationsForEndOfFrameWait((FNiagaraWorldManager *)FVar31,this);
    }
  }
  else {
    pFVar13 = local_288->Reference;
    local_250 = (this->AllWorkCompleteGraphEvent).Reference;
    if (local_250 != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&local_250->field_0x30 = *(int *)&local_250->field_0x30 + 1;
      UNLOCK();
    }
    FBaseGraphTask::DontCompleteUntil(pFVar13,(FBaseGraphTask *)&local_250);
  }
LAB_149403d21:
  if (local_130.TickBatch.AllocatorInstance.SecondaryData !=
      (ForElementType<FNiagaraSystemInstance_*>)0x0) {
    FMemory::Free((void *)local_130.TickBatch.AllocatorInstance.SecondaryData);
  }
  FVar38 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_130.BeforeInstancesTickGraphEvents;
  if (local_130.BeforeInstancesTickGraphEvents.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar38 = local_130.BeforeInstancesTickGraphEvents.AllocatorInstance.SecondaryData;
  }
  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
            ((TRefCountPtr<FBaseGraphTask> *)FVar38,
             local_130.BeforeInstancesTickGraphEvents.ArrayNum);
  if (local_130.BeforeInstancesTickGraphEvents.AllocatorInstance.SecondaryData !=
      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FMemory::Free((void *)local_130.BeforeInstancesTickGraphEvents.AllocatorInstance.SecondaryData);
  }
  LVar44 = local_280;
  if (local_280.QuadPart != -1) {
    QueryPerformanceCounter(&local_248);
    if (local_278 != (FParticlePerfStats *)0x0) {
      puVar3 = &(local_278->GameThreadStats).TickGameThreadCycles;
      *puVar3 = *puVar3 + (local_248.QuadPart - (longlong)LVar44);
      (local_278->GameThreadStats).NumInstances =
           (local_278->GameThreadStats).NumInstances + (longlong)local_2d0;
    }
    if (local_270 != (FParticlePerfStats *)0x0) {
      puVar3 = &(local_270->GameThreadStats).TickGameThreadCycles;
      *puVar3 = *puVar3 + (local_248.QuadPart - (longlong)LVar44);
      (local_270->GameThreadStats).NumInstances =
           (local_270->GameThreadStats).NumInstances + (longlong)local_2d0;
    }
  }
  if ((local_2f8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_2f8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_2f8 & 4) != 0) {
    FThreadStats::AddMessage(local_300,CycleScopeEnd);
  }
  local_2f8 = 0;
  if ((local_2a0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_2a0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_2a0 & 4) != 0) {
    FThreadStats::AddMessage(local_2a8,CycleScopeEnd);
  }
  local_2a0 = 0;
  FMemScope::~FMemScope(&local_240);
  FLLMScope::~FLLMScope(&local_2b8);
  if ((local_2e8 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_2e8 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_2e8 & 4) != 0) {
    FThreadStats::AddMessage(local_2f0,CycleScopeEnd);
  }
  local_2e8 = 0;
  FNiagaraCrashReporterScope::~FNiagaraCrashReporterScope(local_307);
  return;
}

// TransferInstance @ 149403ed0

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
FNiagaraSystemSimulation::TransferInstance
          (FNiagaraSystemSimulation *this,FNiagaraSystemInstance *param_1)

{
  TSharedPtr<FNiagaraSystemSimulation,1> *pTVar1;
  TReferenceControllerBase<1> *pTVar2;
  FNiagaraSystemSimulation *this_00;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  FNiagaraDataBuffer *pFVar6;
  FNiagaraDataBuffer *pFVar7;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar8;
  FNiagaraSystemSimulation *local_c8;
  FSharedReferencer<1> local_c0;
  FNiagaraSystemSimulation *local_b8;
  FSharedReferencer<1> local_b0;
  FNiagaraSystemSimulation *local_a8;
  FSharedReferencer<1> local_a0;
  FNiagaraSystemSimulation *local_98;
  FSharedReferencer<1> local_90;
  FNiagaraSystemSimulation *local_88;
  FSharedReferencer<1> local_80;
  TSharedRef<FNiagaraSystemSimulation,1> local_78;
  TSharedRef<FNiagaraSystemSimulation,1> local_68;
  TSharedRef<FNiagaraSystemSimulation,1> local_58;
  TSharedRef<FNiagaraSystemSimulation,1> local_48;
  TSharedRef<FNiagaraSystemSimulation,1> local_38;
  
  if ((param_1 == (FNiagaraSystemInstance *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Instance",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x2fb,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar1 = &param_1->SystemSimulation;
  if (((param_1->SystemSimulation).Object == this) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Instance->SystemSimulation.Get() != this",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x2fc,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pTVar2 = (param_1->SystemSimulation).SharedReferenceCount.ReferenceController;
  this_00 = pTVar1->Object;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  WaitForInstancesTickComplete(this,false);
  if ((this_00 == (FNiagaraSystemSimulation *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  WaitForInstancesTickComplete(this_00,false);
  switch(param_1->SystemInstanceState) {
  case None:
    if (pTVar1->Object != (FNiagaraSystemSimulation *)0x0) {
      pTVar8 = TSharedFromThis<FNiagaraSystemSimulation,1>::AsShared
                         ((TSharedFromThis<FNiagaraSystemSimulation,1> *)this,&local_78);
      local_c0.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
      local_c8 = pTVar8->Object;
      if (local_c0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c0.ReferenceController)->SharedReferenceCount =
             (atomic<int>)((int)(local_c0.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if (pTVar1 != (TSharedPtr<FNiagaraSystemSimulation,1> *)&local_c8) {
        pTVar1->Object = local_c8;
        local_c8 = (FNiagaraSystemSimulation *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(param_1->SystemSimulation).SharedReferenceCount,&local_c0);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c0.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
    break;
  case PendingSpawn:
    if ((this_00 == (FNiagaraSystemSimulation *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RemoveFromInstanceList(this_00,param_1);
    pTVar8 = TSharedFromThis<FNiagaraSystemSimulation,1>::AsShared
                       ((TSharedFromThis<FNiagaraSystemSimulation,1> *)this,&local_68);
    local_b0.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
    local_b8 = pTVar8->Object;
    if (local_b0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_b0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_b0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FNiagaraSystemSimulation,1> *)&local_b8) {
      pTVar1->Object = local_b8;
      local_b8 = (FNiagaraSystemSimulation *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->SystemSimulation).SharedReferenceCount,&local_b0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_b0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_68.SharedReferenceCount.ReferenceController);
    AddToInstanceList(this,param_1,PendingSpawn);
    break;
  case PendingSpawnPaused:
    if ((this_00 == (FNiagaraSystemSimulation *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RemoveFromInstanceList(this_00,param_1);
    pTVar8 = TSharedFromThis<FNiagaraSystemSimulation,1>::AsShared
                       ((TSharedFromThis<FNiagaraSystemSimulation,1> *)this,&local_58);
    local_a0.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
    local_a8 = pTVar8->Object;
    if (local_a0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_a0.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_a0.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FNiagaraSystemSimulation,1> *)&local_a8) {
      pTVar1->Object = local_a8;
      local_a8 = (FNiagaraSystemSimulation *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->SystemSimulation).SharedReferenceCount,&local_a0);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_a0.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_58.SharedReferenceCount.ReferenceController);
    AddToInstanceList(this,param_1,PendingSpawnPaused);
    break;
  case Spawning:
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    break;
  case Running:
    pFVar6 = FNiagaraDataSet::GetCurrentDataChecked(&this->MainDataSet);
    iVar5 = param_1->SystemInstanceIndex;
    if ((this_00 == (FNiagaraSystemSimulation *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = FNiagaraDataSet::GetCurrentDataChecked(&this_00->MainDataSet);
    iVar5 = FNiagaraDataBuffer::TransferInstance(pFVar6,pFVar7,iVar5,true);
    if ((this_00 == (FNiagaraSystemSimulation *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RemoveFromInstanceList(this_00,param_1);
    pTVar8 = TSharedFromThis<FNiagaraSystemSimulation,1>::AsShared
                       ((TSharedFromThis<FNiagaraSystemSimulation,1> *)this,&local_48);
    local_90.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
    local_98 = pTVar8->Object;
    if (local_90.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_90.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_90.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FNiagaraSystemSimulation,1> *)&local_98) {
      pTVar1->Object = local_98;
      local_98 = (FNiagaraSystemSimulation *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->SystemSimulation).SharedReferenceCount,&local_90);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_90.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    AddToInstanceList(this,param_1,Running);
    if (param_1->SystemInstanceIndex == iVar5) break;
    iVar5 = 0x326;
    goto LAB_1494043e6;
  case Paused:
    pFVar6 = FNiagaraDataSet::GetCurrentDataChecked(&this->PausedDataSet);
    iVar5 = param_1->SystemInstanceIndex;
    if ((this_00 == (FNiagaraSystemSimulation *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar7 = FNiagaraDataSet::GetCurrentDataChecked(&this_00->PausedDataSet);
    iVar5 = FNiagaraDataBuffer::TransferInstance(pFVar6,pFVar7,iVar5,true);
    if ((this_00 == (FNiagaraSystemSimulation *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RemoveFromInstanceList(this_00,param_1);
    pTVar8 = TSharedFromThis<FNiagaraSystemSimulation,1>::AsShared
                       ((TSharedFromThis<FNiagaraSystemSimulation,1> *)this,&local_38);
    local_80.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
    local_88 = pTVar8->Object;
    if (local_80.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_80.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_80.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    if (pTVar1 != (TSharedPtr<FNiagaraSystemSimulation,1> *)&local_88) {
      pTVar1->Object = local_88;
      local_88 = (FNiagaraSystemSimulation *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(param_1->SystemSimulation).SharedReferenceCount,&local_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_38.SharedReferenceCount.ReferenceController);
    AddToInstanceList(this,param_1,Paused);
    if (param_1->SystemInstanceIndex == iVar5) break;
    iVar5 = 0x333;
LAB_1494043e6:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance->SystemInstanceIndex == NewDataSetIndex",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,iVar5,L"");
    if (bVar4) {
code_r0x00014940442b:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    break;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x338,L"");
    if (!bVar4) break;
    goto code_r0x00014940442b;
  }
  if (this->bBindingsInitialized == 0) {
    InitParameterDataSetBindings(this,param_1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  return;
}

// TransferSystemSimResults @ 1494044a0

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
FNiagaraSystemSimulation::TransferSystemSimResults
          (FNiagaraSystemSimulation *this,FNiagaraSystemSimulationTickContext *param_1)

{
  uint *puVar1;
  uint *puVar2;
  UNiagaraSystem *pUVar3;
  FNiagaraDataBuffer *pFVar4;
  FNiagaraSystemInstance *this_00;
  longlong *plVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  FNiagaraEmitterInstanceImpl *pFVar9;
  FNiagaraScriptExecutionContext *pFVar10;
  bool bVar11;
  bool bVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_TransferResultsCNC> FVar14;
  TMap<TStatIdData_const_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>_>
  *pTVar15;
  FScriptContainerElement *pFVar16;
  FNiagaraEmitterInstanceImpl *pFVar17;
  ENiagaraExecutionState EVar18;
  FName FVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *pTVar23;
  uint *puVar24;
  uint uVar25;
  longlong lVar26;
  int iVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  float fVar30;
  undefined1 local_res20 [8];
  uint local_218;
  uint local_214;
  longlong local_208;
  undefined1 local_200;
  undefined1 local_1ff;
  undefined1 local_1fe;
  undefined1 local_1fd;
  undefined1 local_1fc;
  undefined1 local_1fb;
  undefined1 local_1fa;
  undefined1 local_1f9;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined1 local_1f6;
  undefined1 local_1f5;
  undefined1 local_1f4;
  undefined1 local_1f3 [3];
  FNiagaraEmitterInstanceImpl *local_1f0;
  uint local_1e8;
  int *local_1e0;
  longlong local_1d8;
  char local_1d0;
  uint local_1cc;
  FScriptContainerElement *local_1c8;
  FColor_u_0 local_1c0;
  int local_1bc;
  int local_1b8;
  FScriptContainerElement *local_1b0;
  longlong local_1a8;
  FName local_1a0;
  FName local_198;
  undefined1 local_190;
  uint local_18c;
  FScriptContainerElement *local_188;
  FName local_180;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  TArrayView<FNiagaraScriptExecutionContext,int> local_160;
  FScriptContainerElement *local_150;
  longlong local_148;
  FNiagaraSystemSimulation *local_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  FNiagaraSystemSimulation *local_128;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  FName local_118 [2];
  FNiagaraSystemSimulation *local_108 [2];
  FNiagaraSystemSimulation *local_f8 [2];
  TMap<TStatIdData_const_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>_>
  local_e8;
  TMap<TStatIdData_const_*,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,float,0>_>
  local_98;
  
  FVar14 = StatPtr_STAT_NiagaraSystemSim_TransferResultsCNC;
  if (StatPtr_STAT_NiagaraSystemSim_TransferResultsCNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_TransferResultsCNC>)0x0) {
    pFVar13 = ::FName::FName(local_118,"STAT_NiagaraSystemSim_TransferResultsCNC");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_TransferResultsCNC>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NiagaraSystemSim_TransferResultsCNC,*pFVar13,
                        L"System Sim Transfer Results [CNC]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar19 = *(FName *)FVar14;
  bVar8 = false;
  bVar7 = false;
  local_180.ComparisonIndex.Value = 0;
  local_180.Number = 0;
  bVar12 = false;
  bVar11 = false;
  if ((FVar19.ComparisonIndex.Value.Value != 0) || (FVar19.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1c0.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1c0._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar8 = false;
      bVar7 = true;
      bVar12 = false;
      bVar11 = true;
      if (-1 < CpuChannel->Enabled) {
        local_1a0.ComparisonIndex.Value = FVar19.ComparisonIndex.Value.Value;
        local_1a0.Number = FVar19.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a0,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                   ,0x8c2);
        bVar8 = true;
        bVar7 = true;
        bVar12 = true;
        bVar11 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_198 = FVar19;
      FThreadStats::AddMessage(FVar19,CycleScopeStart);
      bVar11 = true;
      goto LAB_14940461d;
    }
  }
  bVar8 = bVar12;
  bVar7 = bVar11;
  bVar11 = false;
  local_198 = local_180;
  FVar19 = local_180;
LAB_14940461d:
  if (param_1->Instances->ArrayNum != 0) {
    if ((this->System == (UNiagaraSystem *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("System != nullptr",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                            ,0x8c9,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pUVar3 = this->System;
    pTVar15 = FNiagaraScriptExecutionContextBase::ReportStats
                        ((this->SpawnExecContext).Ptr,&local_e8);
    uStack_130 = 0xb;
    local_108[1]._1_7_ = uStack_12f;
    local_108[1]._0_1_ = 0xb;
    local_138 = this;
    local_108[0] = this;
    FNiagaraStatDatabase::AddStatCapture
              (&pUVar3->StatDatabase,(TTuple<unsigned___int64,ENiagaraScriptUsage> *)local_108,
               pTVar15);
    pUVar3 = this->System;
    pTVar15 = FNiagaraScriptExecutionContextBase::ReportStats
                        ((this->UpdateExecContext).Ptr,&local_98);
    uStack_120 = 0xc;
    local_f8[1]._1_7_ = uStack_11f;
    local_f8[1]._0_1_ = 0xc;
    local_128 = this;
    local_f8[0] = this;
    FNiagaraStatDatabase::AddStatCapture
              (&pUVar3->StatDatabase,(TTuple<unsigned___int64,ENiagaraScriptUsage> *)local_f8,
               pTVar15);
    pUVar3 = this->System;
    local_1d0 = '\0';
    local_1cc = 0;
    pFVar4 = param_1->DataSet->CurrentData;
    local_1c8 = (FScriptContainerElement *)0x0;
    if ((pFVar4 != (FNiagaraDataBuffer *)0x0) &&
       (pUVar3->SystemExecutionStateAccessor !=
        (FNiagaraDataSetAccessor<ENiagaraExecutionState>)0xffffffff)) {
      local_1d0 = '\x01';
      local_1c8 = (pFVar4->Int32Data).AllocatorInstance.Data +
                  (int)pUVar3->SystemExecutionStateAccessor * pFVar4->Int32Stride;
      local_1cc = pFVar4->NumInstances;
    }
    local_150 = (pUVar3->EmitterExecutionStateAccessors).AllocatorInstance.Data;
    local_1bc = (pUVar3->EmitterExecutionStateAccessors).ArrayNum;
    if ((local_1bc < 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar12)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pTVar23 = param_1->Instances;
    local_218 = 0;
    if (0 < pTVar23->ArrayNum) {
      local_1d8 = 0;
      do {
        lVar29 = local_1d8;
        uVar20 = 0;
        if ((int)local_218 < pTVar23->ArrayNum) {
          uVar20 = ~local_218 >> 0x1f;
        }
        if ((uVar20 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        this_00 = *(FNiagaraSystemInstance **)((pTVar23->AllocatorInstance).Data + lVar29 * 8);
        if ((local_1d0 == '\0') || ((int)local_1cc <= (int)local_218)) {
          EVar18 = Disabled;
        }
        else {
          EVar18 = *(ENiagaraExecutionState *)(local_1c8 + lVar29 * 4);
        }
        FNiagaraSystemInstance::SetActualExecutionState(this_00,EVar18);
        if (this_00->ActualExecutionState != Disabled) {
          if (this_00->bSkipTick == false) {
            iVar27 = (this_00->Emitters).ArrayNum;
            pFVar28 = (this_00->Emitters).AllocatorInstance.Data;
            local_1b8 = iVar27;
            local_1b0 = pFVar28;
            if ((iVar27 < 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar12)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            local_214 = 0;
            local_208 = 0;
            if (0 < iVar27) {
              local_1a8 = 0;
              do {
                lVar29 = local_1a8;
                uVar25 = ~local_214 >> 0x1f;
                uVar20 = 0;
                if ((int)local_214 < iVar27) {
                  uVar20 = uVar25;
                }
                if ((uVar20 == 0) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                        ,0x14f,
                                        L"Array index out of bounds: %lld from an array of size %lld"
                                       ), bVar12)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                plVar5 = *(longlong **)(pFVar28 + lVar29);
                if ((*(int *)((longlong)plVar5 + 0xd4) != 3) &&
                   (*(int *)((longlong)plVar5 + 0xd4) != 4)) {
                  uVar20 = 0;
                  if ((int)local_214 < (this->DataSetToEmitterRendererParameters).ArrayNum) {
                    uVar20 = uVar25;
                  }
                  if ((uVar20 == 0) &&
                     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar12)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pFVar28 = (this->DataSetToEmitterRendererParameters).AllocatorInstance.Data;
                  puVar24 = *(uint **)(pFVar28 + local_208 * 0x30);
                  iVar27 = *(int *)(pFVar28 + local_208 * 0x30 + 8);
                  pFVar4 = param_1->DataSet->CurrentData;
                  puVar2 = puVar24 + (longlong)iVar27 * 2;
                  while( true ) {
                    if (*(int *)(pFVar28 + local_208 * 0x30 + 8) != iVar27) {
                      local_res20[0] = 0;
                      `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>
                      ::operator!='::__l2::<lambda_1>::operator()(local_res20);
                    }
                    if (puVar24 == puVar2) break;
                    puVar1 = puVar24 + 1;
                    uVar20 = *puVar24;
                    puVar24 = puVar24 + 2;
                    *(undefined4 *)((ulonglong)uVar20 + plVar5[0xc]) =
                         *(undefined4 *)
                          ((pFVar4->FloatData).AllocatorInstance.Data +
                          (ulonglong)(*puVar1 * pFVar4->FloatStride) + (ulonglong)local_218 * 4);
                  }
                  puVar24 = *(uint **)(pFVar28 + local_208 * 0x30 + 0x10);
                  iVar27 = *(int *)(pFVar28 + local_208 * 0x30 + 0x18);
                  puVar2 = puVar24 + (longlong)iVar27 * 2;
                  while( true ) {
                    if (*(int *)(pFVar28 + local_208 * 0x30 + 0x18) != iVar27) {
                      local_200 = 0;
                      `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>
                      ::operator!='::__l2::<lambda_1>::operator()(&local_200);
                    }
                    if (puVar24 == puVar2) break;
                    puVar1 = puVar24 + 1;
                    uVar20 = *puVar24;
                    puVar24 = puVar24 + 2;
                    *(undefined4 *)((ulonglong)uVar20 + plVar5[0xc]) =
                         *(undefined4 *)
                          ((pFVar4->Int32Data).AllocatorInstance.Data +
                          (ulonglong)(*puVar1 * pFVar4->Int32Stride) + (ulonglong)local_218 * 4);
                  }
                  iVar27 = *(int *)(pFVar28 + local_208 * 0x30 + 0x28);
                  puVar24 = *(uint **)(pFVar28 + local_208 * 0x30 + 0x20);
                  puVar2 = puVar24 + (longlong)iVar27 * 3;
                  while( true ) {
                    if (*(int *)(pFVar28 + local_208 * 0x30 + 0x28) != iVar27) {
                      local_1ff = 0;
                      `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FHalfDataOffsets,int,0>
                      ::operator!='::__l2::<lambda_1>::operator()(&local_1ff);
                    }
                    if (puVar24 == puVar2) break;
                    pFVar16 = (pFVar4->HalfData).AllocatorInstance.Data +
                              (ulonglong)(pFVar4->HalfStride * puVar24[1]) +
                              (ulonglong)local_218 * 2;
                    if ((char)puVar24[2] == '\0') {
                      uVar20 = *puVar24;
                      puVar24 = puVar24 + 3;
                      *(ushort *)((ulonglong)uVar20 + plVar5[0xc]) = *(ushort *)pFVar16;
                    }
                    else {
                      fVar30 = FGenericPlatformMath::LoadHalf((ushort *)pFVar16);
                      uVar20 = *puVar24;
                      puVar24 = puVar24 + 3;
                      *(float *)((ulonglong)uVar20 + plVar5[0xc]) = fVar30;
                    }
                  }
                  *(uint *)(plVar5 + 0x18) = *(uint *)(plVar5 + 0x18) | 1;
                  pFVar17 = (FNiagaraEmitterInstanceImpl *)(**(code **)(*plVar5 + 0x68))();
                  pFVar28 = local_1b0;
                  local_1f0 = pFVar17;
                  if (pFVar17 != (FNiagaraEmitterInstanceImpl *)0x0) {
                    uVar20 = 0;
                    if ((int)local_214 < local_1bc) {
                      uVar20 = uVar25;
                    }
                    if ((uVar20 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0x14f,
                                            L"Array index out of bounds: %lld from an array of size %lld"
                                           ), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    bVar12 = false;
                    local_190 = 0;
                    local_18c = 0;
                    pFVar4 = param_1->DataSet->CurrentData;
                    local_188 = (FScriptContainerElement *)0x0;
                    if ((pFVar4 != (FNiagaraDataBuffer *)0x0) &&
                       (*(int *)(local_150 + local_208 * 4) != -1)) {
                      bVar12 = true;
                      local_18c = pFVar4->NumInstances;
                      local_190 = 1;
                      local_188 = (pFVar4->Int32Data).AllocatorInstance.Data +
                                  *(int *)(local_150 + local_208 * 4) * pFVar4->Int32Stride;
                    }
                    if ((bVar12) && ((int)local_218 < (int)local_18c)) {
                      EVar18 = *(ENiagaraExecutionState *)(local_188 + local_1d8 * 4);
                    }
                    else {
                      EVar18 = Disabled;
                    }
                    FNiagaraEmitterInstanceImpl::SetExecutionState(pFVar17,EVar18);
                    pUVar3 = this->System;
                    uVar20 = 0;
                    if ((int)local_214 < (pUVar3->EmitterSpawnInfoAccessors).ArrayNum) {
                      uVar20 = uVar25;
                    }
                    if ((uVar20 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar28 = (pUVar3->EmitterSpawnInfoAccessors).AllocatorInstance.Data;
                    uVar20 = *(uint *)(pFVar28 + local_208 * 0x10 + 8);
                    lVar29 = *(longlong *)(pFVar28 + local_208 * 0x10);
                    local_1e8 = uVar20;
                    if (((int)uVar20 < 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InCount >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xeb,L""), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    uVar21 = 0;
                    if (0 < (int)uVar20) {
                      lVar26 = 0;
                      local_1e0 = (int *)(lVar29 + 4);
                      do {
                        if ((int)uVar21 < (pFVar17->SpawnInfos).ArrayNum) {
                          uVar20 = 0;
                          pFVar28 = (FScriptContainerElement *)0x0;
                          pFVar16 = (FScriptContainerElement *)0x0;
                          pFVar4 = param_1->DataSet->CurrentData;
                          if (local_1e0[1] == -1 ||
                              (*local_1e0 == -1 || pFVar4 == (FNiagaraDataBuffer *)0x0)) {
LAB_149404c82:
                            bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("bIsValid && Index <= NumInstances",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                                                ,0x235,L"");
                            if (bVar12) {
                              pcVar6 = (code *)swi(3);
                              (*pcVar6)();
                              return;
                            }
                          }
                          else {
                            uVar20 = pFVar4->FloatStride >> 2;
                            pFVar16 = (pFVar4->Int32Data).AllocatorInstance.Data +
                                      local_1e0[1] * pFVar4->Int32Stride;
                            pFVar28 = (pFVar4->FloatData).AllocatorInstance.Data +
                                      pFVar4->FloatStride * *local_1e0;
                            if ((int)pFVar4->NumInstances < (int)local_218) goto LAB_149404c82;
                          }
                          pFVar17 = local_1f0;
                          uStack_16c = *(undefined4 *)(pFVar28 + local_1d8 * 4);
                          local_170 = *(undefined4 *)(pFVar16 + local_1d8 * 4);
                          uStack_168 = *(undefined4 *)
                                        (pFVar28 + (longlong)(int)(local_218 + uVar20) * 4);
                          uStack_164 = *(undefined4 *)
                                        (pFVar16 + (longlong)(int)(local_218 + uVar20) * 4);
                          uVar20 = 0;
                          if ((int)uVar21 < (local_1f0->SpawnInfos).ArrayNum) {
                            uVar20 = ~uVar21 >> 0x1f;
                          }
                          if ((uVar20 == 0) &&
                             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar12)) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          pFVar28 = (pFVar17->SpawnInfos).AllocatorInstance.Data + lVar26;
                          *(ulonglong *)pFVar28 = CONCAT44(uStack_16c,local_170);
                          *(ulonglong *)(pFVar28 + 8) = CONCAT44(uStack_164,uStack_168);
                          uVar20 = local_1e8;
                        }
                        else {
                          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                             (&bGEnsureHasExecuted<_110362534745208574>,false,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                                              ,0x902,"SpawnInfoIdx < EmitterInstSpawnInfos.Num()");
                          if (bVar12) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                        }
                        uVar21 = uVar21 + 1;
                        local_1e0 = local_1e0 + 3;
                        lVar26 = lVar26 + 0x10;
                      } while ((int)uVar21 < (int)uVar20);
                    }
                    uVar20 = 0;
                    if ((int)local_214 < (this->DataSetToEmitterSpawnParameters).ArrayNum) {
                      uVar20 = uVar25;
                    }
                    if ((uVar20 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar17 = local_1f0;
                    pFVar28 = (this->DataSetToEmitterSpawnParameters).AllocatorInstance.Data;
                    puVar24 = *(uint **)(pFVar28 + local_208 * 0x30);
                    iVar27 = *(int *)(pFVar28 + local_208 * 0x30 + 8);
                    pFVar4 = param_1->DataSet->CurrentData;
                    puVar2 = puVar24 + (longlong)iVar27 * 2;
                    while( true ) {
                      if (*(int *)(pFVar28 + local_208 * 0x30 + 8) != iVar27) {
                        local_1fe = 0;
                        `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>
                        ::operator!='::__l2::<lambda_1>::operator()(&local_1fe);
                      }
                      if (puVar24 == puVar2) break;
                      puVar1 = puVar24 + 1;
                      uVar20 = *puVar24;
                      puVar24 = puVar24 + 2;
                      *(undefined4 *)((ulonglong)uVar20 + (pFVar17->SpawnExecContext)._padding_) =
                           *(undefined4 *)
                            ((pFVar4->FloatData).AllocatorInstance.Data +
                            (ulonglong)(pFVar4->FloatStride * *puVar1) + (ulonglong)local_218 * 4);
                    }
                    puVar24 = *(uint **)(pFVar28 + local_208 * 0x30 + 0x10);
                    iVar27 = *(int *)(pFVar28 + local_208 * 0x30 + 0x18);
                    puVar2 = puVar24 + (longlong)iVar27 * 2;
                    while( true ) {
                      if (*(int *)(pFVar28 + local_208 * 0x30 + 0x18) != iVar27) {
                        local_1fd = 0;
                        `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>
                        ::operator!='::__l2::<lambda_1>::operator()(&local_1fd);
                      }
                      pFVar9 = local_1f0;
                      if (puVar24 == puVar2) break;
                      puVar1 = puVar24 + 1;
                      uVar20 = *puVar24;
                      puVar24 = puVar24 + 2;
                      *(undefined4 *)((ulonglong)uVar20 + (pFVar17->SpawnExecContext)._padding_) =
                           *(undefined4 *)
                            ((pFVar4->Int32Data).AllocatorInstance.Data +
                            (ulonglong)(pFVar4->Int32Stride * *puVar1) + (ulonglong)local_218 * 4);
                    }
                    iVar27 = *(int *)(pFVar28 + local_208 * 0x30 + 0x28);
                    puVar24 = *(uint **)(pFVar28 + local_208 * 0x30 + 0x20);
                    puVar2 = puVar24 + (longlong)iVar27 * 3;
                    while( true ) {
                      if (*(int *)(pFVar28 + local_208 * 0x30 + 0x28) != iVar27) {
                        local_1fc = 0;
                        `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FHalfDataOffsets,int,0>
                        ::operator!='::__l2::<lambda_1>::operator()(&local_1fc);
                      }
                      if (puVar24 == puVar2) break;
                      pFVar16 = (pFVar4->HalfData).AllocatorInstance.Data +
                                (ulonglong)(pFVar4->HalfStride * puVar24[1]) +
                                (ulonglong)local_218 * 2;
                      if ((char)puVar24[2] == '\0') {
                        uVar20 = *puVar24;
                        puVar24 = puVar24 + 3;
                        *(ushort *)((ulonglong)uVar20 + (pFVar9->SpawnExecContext)._padding_) =
                             *(ushort *)pFVar16;
                      }
                      else {
                        fVar30 = FGenericPlatformMath::LoadHalf((ushort *)pFVar16);
                        uVar20 = *puVar24;
                        puVar24 = puVar24 + 3;
                        *(float *)((ulonglong)uVar20 + (pFVar9->SpawnExecContext)._padding_) =
                             fVar30;
                      }
                    }
                    plVar5 = &(pFVar9->SpawnExecContext)._padding_;
                    *(uint *)plVar5 = (uint)*plVar5 | 1;
                    uVar20 = 0;
                    if ((int)local_214 < (this->DataSetToEmitterUpdateParameters).ArrayNum) {
                      uVar20 = uVar25;
                    }
                    if ((uVar20 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    pFVar28 = (this->DataSetToEmitterUpdateParameters).AllocatorInstance.Data;
                    puVar24 = *(uint **)(pFVar28 + local_208 * 0x30);
                    iVar27 = *(int *)(pFVar28 + local_208 * 0x30 + 8);
                    pFVar4 = param_1->DataSet->CurrentData;
                    puVar2 = puVar24 + (longlong)iVar27 * 2;
                    while( true ) {
                      if (*(int *)(pFVar28 + local_208 * 0x30 + 8) != iVar27) {
                        local_1f3[0] = 0;
                        `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>
                        ::operator!='::__l2::<lambda_1>::operator()(local_1f3);
                      }
                      if (puVar24 == puVar2) break;
                      puVar1 = puVar24 + 1;
                      uVar20 = *puVar24;
                      puVar24 = puVar24 + 2;
                      *(undefined4 *)((ulonglong)uVar20 + (pFVar9->UpdateExecContext)._padding_) =
                           *(undefined4 *)
                            ((pFVar4->FloatData).AllocatorInstance.Data +
                            (ulonglong)(pFVar4->FloatStride * *puVar1) + (ulonglong)local_218 * 4);
                    }
                    puVar24 = *(uint **)(pFVar28 + local_208 * 0x30 + 0x10);
                    iVar27 = *(int *)(pFVar28 + local_208 * 0x30 + 0x18);
                    puVar2 = puVar24 + (longlong)iVar27 * 2;
                    while( true ) {
                      if (*(int *)(pFVar28 + local_208 * 0x30 + 0x18) != iVar27) {
                        local_1fb = 0;
                        `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>
                        ::operator!='::__l2::<lambda_1>::operator()(&local_1fb);
                      }
                      pFVar17 = local_1f0;
                      if (puVar24 == puVar2) break;
                      puVar1 = puVar24 + 1;
                      uVar20 = *puVar24;
                      puVar24 = puVar24 + 2;
                      *(undefined4 *)((ulonglong)uVar20 + (pFVar9->UpdateExecContext)._padding_) =
                           *(undefined4 *)
                            ((pFVar4->Int32Data).AllocatorInstance.Data +
                            (ulonglong)(pFVar4->Int32Stride * *puVar1) + (ulonglong)local_218 * 4);
                    }
                    iVar27 = *(int *)(pFVar28 + local_208 * 0x30 + 0x28);
                    puVar24 = *(uint **)(pFVar28 + local_208 * 0x30 + 0x20);
                    puVar2 = puVar24 + (longlong)iVar27 * 3;
                    while( true ) {
                      if (*(int *)(pFVar28 + local_208 * 0x30 + 0x28) != iVar27) {
                        local_1fa = 0;
                        `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FHalfDataOffsets,int,0>
                        ::operator!='::__l2::<lambda_1>::operator()(&local_1fa);
                      }
                      if (puVar24 == puVar2) break;
                      pFVar16 = (pFVar4->HalfData).AllocatorInstance.Data +
                                (ulonglong)(puVar24[1] * pFVar4->HalfStride) +
                                (ulonglong)local_218 * 2;
                      if ((char)puVar24[2] == '\0') {
                        uVar20 = *puVar24;
                        puVar24 = puVar24 + 3;
                        *(ushort *)((ulonglong)uVar20 + (pFVar17->UpdateExecContext)._padding_) =
                             *(ushort *)pFVar16;
                      }
                      else {
                        fVar30 = FGenericPlatformMath::LoadHalf((ushort *)pFVar16);
                        uVar20 = *puVar24;
                        puVar24 = puVar24 + 3;
                        *(float *)((ulonglong)uVar20 + (pFVar17->UpdateExecContext)._padding_) =
                             fVar30;
                      }
                    }
                    plVar5 = &(pFVar17->UpdateExecContext)._padding_;
                    *(uint *)plVar5 = (uint)*plVar5 | 1;
                    lVar29 = pFVar17->_padding_;
                    if (lVar29 != 0) {
                      uVar20 = 0;
                      if ((int)local_214 < (this->DataSetToEmitterGPUParameters).ArrayNum) {
                        uVar20 = uVar25;
                      }
                      if ((uVar20 == 0) &&
                         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar12)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      pFVar28 = (this->DataSetToEmitterGPUParameters).AllocatorInstance.Data;
                      puVar24 = *(uint **)(pFVar28 + local_208 * 0x30);
                      iVar27 = *(int *)(pFVar28 + local_208 * 0x30 + 8);
                      pFVar4 = param_1->DataSet->CurrentData;
                      puVar2 = puVar24 + (longlong)iVar27 * 2;
                      while( true ) {
                        if (*(int *)(pFVar28 + local_208 * 0x30 + 8) != iVar27) {
                          local_1f9 = 0;
                          `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>
                          ::operator!='::__l2::<lambda_1>::operator()(&local_1f9);
                        }
                        if (puVar24 == puVar2) break;
                        puVar1 = puVar24 + 1;
                        uVar20 = *puVar24;
                        puVar24 = puVar24 + 2;
                        *(undefined4 *)((ulonglong)uVar20 + *(longlong *)(lVar29 + 0xa0)) =
                             *(undefined4 *)
                              ((pFVar4->FloatData).AllocatorInstance.Data +
                              (ulonglong)(pFVar4->FloatStride * *puVar1) + (ulonglong)local_218 * 4)
                        ;
                      }
                      puVar24 = *(uint **)(pFVar28 + local_208 * 0x30 + 0x10);
                      iVar27 = *(int *)(pFVar28 + local_208 * 0x30 + 0x18);
                      puVar2 = puVar24 + (longlong)iVar27 * 2;
                      while( true ) {
                        if (*(int *)(pFVar28 + local_208 * 0x30 + 0x18) != iVar27) {
                          local_1f8 = 0;
                          `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>
                          ::operator!='::__l2::<lambda_1>::operator()(&local_1f8);
                        }
                        if (puVar24 == puVar2) break;
                        puVar1 = puVar24 + 1;
                        uVar20 = *puVar24;
                        puVar24 = puVar24 + 2;
                        *(undefined4 *)((ulonglong)uVar20 + *(longlong *)(lVar29 + 0xa0)) =
                             *(undefined4 *)
                              ((pFVar4->Int32Data).AllocatorInstance.Data +
                              (ulonglong)(pFVar4->Int32Stride * *puVar1) + (ulonglong)local_218 * 4)
                        ;
                      }
                      iVar27 = *(int *)(pFVar28 + local_208 * 0x30 + 0x28);
                      puVar24 = *(uint **)(pFVar28 + local_208 * 0x30 + 0x20);
                      puVar2 = puVar24 + (longlong)iVar27 * 3;
                      while( true ) {
                        if (*(int *)(pFVar28 + local_208 * 0x30 + 0x28) != iVar27) {
                          local_1f7 = 0;
                          `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FHalfDataOffsets,int,0>
                          ::operator!='::__l2::<lambda_1>::operator()(&local_1f7);
                        }
                        if (puVar24 == puVar2) break;
                        pFVar16 = (pFVar4->HalfData).AllocatorInstance.Data +
                                  (ulonglong)(pFVar4->HalfStride * puVar24[1]) +
                                  (ulonglong)local_218 * 2;
                        if ((char)puVar24[2] == '\0') {
                          uVar20 = *puVar24;
                          puVar24 = puVar24 + 3;
                          *(ushort *)((ulonglong)uVar20 + *(longlong *)(lVar29 + 0xa0)) =
                               *(ushort *)pFVar16;
                        }
                        else {
                          fVar30 = FGenericPlatformMath::LoadHalf((ushort *)pFVar16);
                          uVar20 = *puVar24;
                          puVar24 = puVar24 + 3;
                          *(float *)((ulonglong)uVar20 + *(longlong *)(lVar29 + 0xa0)) = fVar30;
                        }
                      }
                      *(uint *)(lVar29 + 0x100) = *(uint *)(lVar29 + 0x100) | 1;
                      pFVar17 = local_1f0;
                    }
                    FNiagaraEmitterInstanceImpl::GetEventExecutionContexts(pFVar17,&local_160);
                    local_1e8 = 0;
                    local_1e0 = (int *)0x0;
                    pFVar28 = local_1b0;
                    if (0 < local_160.ArrayNum) {
                      lVar26 = 0;
                      lVar29 = local_208 << 4;
                      local_1f0 = (FNiagaraEmitterInstanceImpl *)0x0;
                      local_148 = lVar29;
                      do {
                        uVar20 = local_1e8;
                        pFVar17 = local_1f0;
                        uVar22 = ~local_1e8;
                        uVar21 = 0;
                        if ((int)local_1e8 < local_160.ArrayNum) {
                          uVar21 = uVar22 >> 0x1f;
                        }
                        if ((uVar21 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                                ,0x14f,
                                                L"Array index out of bounds: %lld from an array of size %lld"
                                               ), bVar12)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        pFVar10 = local_160.DataPtr;
                        uVar21 = 0;
                        if ((int)local_214 < (this->DataSetToEmitterEventParameters).ArrayNum) {
                          uVar21 = uVar25;
                        }
                        if ((uVar21 == 0) &&
                           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar12)) {
                          pcVar6 = (code *)swi(3);
                          (*pcVar6)();
                          return;
                        }
                        if ((int)uVar20 <
                            *(int *)((this->DataSetToEmitterEventParameters).AllocatorInstance.Data
                                    + lVar29 + 8)) {
                          uVar21 = 0;
                          if ((int)local_214 < (this->DataSetToEmitterEventParameters).ArrayNum) {
                            uVar21 = uVar25;
                          }
                          if ((uVar21 == 0) &&
                             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar12)) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          pFVar28 = (this->DataSetToEmitterEventParameters).AllocatorInstance.Data;
                          uVar21 = 0;
                          if ((int)uVar20 < *(int *)(pFVar28 + lVar29 + 8)) {
                            uVar21 = uVar22 >> 0x1f;
                          }
                          if ((uVar21 == 0) &&
                             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar12)) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          lVar29 = *(longlong *)(pFVar28 + lVar29);
                          puVar24 = *(uint **)(lVar29 + lVar26);
                          iVar27 = *(int *)(lVar29 + 8 + lVar26);
                          pFVar4 = param_1->DataSet->CurrentData;
                          puVar2 = puVar24 + (longlong)iVar27 * 2;
                          while( true ) {
                            if (*(int *)(lVar29 + 8 + lVar26) != iVar27) {
                              local_1f6 = 0;
                              `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>
                              ::operator!='::__l2::<lambda_1>::operator()(&local_1f6);
                            }
                            if (puVar24 == puVar2) break;
                            puVar1 = puVar24 + 1;
                            uVar20 = *puVar24;
                            puVar24 = puVar24 + 2;
                            *(undefined4 *)
                             ((ulonglong)uVar20 +
                             *(longlong *)((longlong)&pFVar10->_padding_ + (longlong)local_1f0)) =
                                 *(undefined4 *)
                                  ((pFVar4->FloatData).AllocatorInstance.Data +
                                  (ulonglong)(*puVar1 * pFVar4->FloatStride) +
                                  (ulonglong)local_218 * 4);
                          }
                          puVar24 = *(uint **)(lVar29 + 0x10 + lVar26);
                          iVar27 = *(int *)(lVar29 + 0x18 + lVar26);
                          puVar2 = puVar24 + (longlong)iVar27 * 2;
                          while( true ) {
                            if (*(int *)(lVar29 + 0x18 + lVar26) != iVar27) {
                              local_1f5 = 0;
                              `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FDataOffsets,int,0>
                              ::operator!='::__l2::<lambda_1>::operator()(&local_1f5);
                            }
                            if (puVar24 == puVar2) break;
                            puVar1 = puVar24 + 1;
                            uVar20 = *puVar24;
                            puVar24 = puVar24 + 2;
                            *(undefined4 *)
                             ((ulonglong)uVar20 +
                             *(longlong *)((longlong)&pFVar10->_padding_ + (longlong)local_1f0)) =
                                 *(undefined4 *)
                                  ((pFVar4->Int32Data).AllocatorInstance.Data +
                                  (ulonglong)(*puVar1 * pFVar4->Int32Stride) +
                                  (ulonglong)local_218 * 4);
                          }
                          iVar27 = *(int *)(lVar29 + 0x28 + lVar26);
                          puVar24 = *(uint **)(lVar29 + 0x20 + lVar26);
                          puVar2 = puVar24 + (longlong)iVar27 * 3;
                          while( true ) {
                            if (*(int *)(lVar29 + 0x28 + lVar26) != iVar27) {
                              local_1f4 = 0;
                              `TCheckedPointerIterator<FNiagaraParameterStoreToDataSetBinding::FHalfDataOffsets,int,0>
                              ::operator!='::__l2::<lambda_1>::operator()(&local_1f4);
                            }
                            if (puVar24 == puVar2) break;
                            pFVar28 = (pFVar4->HalfData).AllocatorInstance.Data +
                                      (ulonglong)(puVar24[1] * pFVar4->HalfStride) +
                                      (ulonglong)local_218 * 2;
                            if ((char)puVar24[2] == '\0') {
                              uVar20 = *puVar24;
                              puVar24 = puVar24 + 3;
                              *(ushort *)
                               ((ulonglong)uVar20 +
                               *(longlong *)((longlong)&pFVar10->_padding_ + (longlong)local_1f0)) =
                                   *(ushort *)pFVar28;
                            }
                            else {
                              fVar30 = FGenericPlatformMath::LoadHalf((ushort *)pFVar28);
                              uVar20 = *puVar24;
                              puVar24 = puVar24 + 3;
                              *(float *)((ulonglong)uVar20 +
                                        *(longlong *)
                                         ((longlong)&pFVar10->_padding_ + (longlong)local_1f0)) =
                                   fVar30;
                            }
                          }
                          puVar2 = (uint *)((longlong)&pFVar10->_padding_ + (longlong)local_1f0);
                          *puVar2 = *puVar2 | 1;
                          pFVar17 = local_1f0;
                          lVar29 = local_148;
                          uVar20 = local_1e8;
                        }
                        else if (4 < (byte)LogNiagara._0_1_) {
                          uVar21 = 0;
                          if ((int)local_214 < (this->DataSetToEmitterEventParameters).ArrayNum) {
                            uVar21 = uVar25;
                          }
                          if ((uVar21 == 0) &&
                             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("(Index >= 0) & (Index < ArrayNum)",
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                 ), bVar12)) {
                            pcVar6 = (code *)swi(3);
                            (*pcVar6)();
                            return;
                          }
                          UE::Logging::Private::BasicLog<5>
                                    (&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
                        }
                        local_1e0 = (int *)((longlong)local_1e0 + 1);
                        local_1e8 = uVar20 + 1;
                        local_1f0 = (FNiagaraEmitterInstanceImpl *)((longlong)pFVar17 + 0x2b0);
                        lVar26 = lVar26 + 0x30;
                        pFVar28 = local_1b0;
                      } while ((int)local_1e8 < local_160.ArrayNum);
                    }
                  }
                }
                local_1a8 = local_1a8 + 0x10;
                local_214 = local_214 + 1;
                local_208 = local_208 + 1;
                lVar29 = local_1d8;
                iVar27 = local_1b8;
              } while ((int)local_214 < local_1b8);
            }
          }
          else {
            this_00->bSkipTick = false;
          }
        }
        pTVar23 = param_1->Instances;
        local_218 = local_218 + 1;
        local_1d8 = lVar29 + 1;
        FVar19 = local_198;
      } while ((int)local_218 < pTVar23->ArrayNum);
    }
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar19,CycleScopeEnd);
  }
  return;
}

// UnpauseInstance @ 149405d90

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
FNiagaraSystemSimulation::UnpauseInstance
          (FNiagaraSystemSimulation *this,FNiagaraSystemInstance *param_1)

{
  ENiagaraSystemInstanceState EVar1;
  code *pcVar2;
  bool bVar3;
  
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x986,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  WaitForInstancesTickComplete(this,false);
  EVar1 = param_1->SystemInstanceState;
  if (EVar1 == Paused) {
    SetInstanceState(this,param_1,Running);
    return;
  }
  if (EVar1 == PendingSpawnPaused) {
    SetInstanceState(this,param_1,PendingSpawn);
    return;
  }
  if (EVar1 != None) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Instance->SystemInstanceState == ENiagaraSystemInstanceState::None",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                       ,0x996,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// UpdateSystemInstances @ 1494073d0

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
FNiagaraSystemSimulation::UpdateSystemInstances
          (FNiagaraSystemSimulation *this,FNiagaraSystemSimulationTickContext *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *pTVar5;
  longlong lVar6;
  FNiagaraScriptExecutionContextBase *pFVar7;
  longlong *plVar8;
  FNiagaraScriptDebuggerInfo *pFVar9;
  FNiagaraDataSet *pFVar10;
  code *pcVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  FNiagaraSystemSimulation *this_00;
  TUniquePtr<FNiagaraScriptExecutionContextBase,TDefaultDelete<FNiagaraScriptExecutionContextBase>_>
  *pTVar15;
  bool bVar16;
  char cVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_UpdateCNC> FVar19;
  FNiagaraDataBuffer *pFVar20;
  longlong lVar21;
  FName FVar22;
  TReferenceControllerBase<1> *pTVar23;
  int iVar24;
  FScriptContainerElement *pFVar25;
  TSharedPtr<FNiagaraScriptDebuggerInfo,1> *pTVar26;
  int iVar27;
  TSharedPtr<FNiagaraScriptDebuggerInfo,1> *pTVar28;
  undefined1 auStackY_328 [32];
  undefined1 local_2c8 [8];
  FName local_2c0;
  undefined1 local_2b8 [4];
  int local_2b4;
  FNiagaraSystemSimulation *local_2b0;
  TUniquePtr<FNiagaraScriptExecutionContextBase,TDefaultDelete<FNiagaraScriptExecutionContextBase>_>
  *local_2a8;
  TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *local_2a0;
  FColor_u_0 local_298 [2];
  FName local_290;
  FName local_288;
  FName local_280;
  FName local_278;
  FName local_270;
  longlong local_268;
  undefined8 local_260;
  FName local_258;
  undefined8 local_248;
  undefined8 local_240;
  TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *local_238;
  FNiagaraScriptExecutionContextBase *local_230;
  FString local_228;
  FString local_218;
  FString local_208;
  FString local_1f8;
  undefined8 *local_1e8;
  undefined1 *local_1e0;
  undefined8 *local_1d8;
  FNiagaraGlobalParameters local_1c8;
  FName local_1a8;
  FScriptExecutionConstantBufferTable local_1a0;
  FScriptExecutionConstantBufferTable local_f0;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_328;
  pTVar23 = (TReferenceControllerBase<1> *)0x0;
  FVar19 = StatPtr_STAT_NiagaraSystemSim_UpdateCNC;
  local_2b0 = this;
  if (StatPtr_STAT_NiagaraSystemSim_UpdateCNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_UpdateCNC>)0x0) {
    pFVar18 = ::FName::FName(&local_1a8,"STAT_NiagaraSystemSim_UpdateCNC");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_UpdateCNC>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraSystemSim_UpdateCNC,
                        *pFVar18,L"System Sim Update [CNC]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar19;
  bVar12 = false;
  bVar14 = false;
  local_258.ComparisonIndex.Value = 0;
  local_258.Number = 0;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_149407521:
    bVar13 = false;
    FVar22 = local_258;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_298[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_298[0]._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar12 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_290.ComparisonIndex.Value = FVar22.ComparisonIndex.Value.Value;
        local_290.Number = FVar22.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_290,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                   ,0x85f);
        bVar12 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_149407521;
    local_2c0 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar13 = true;
  }
  iVar24 = param_1->SpawnNum;
  uVar4 = param_1->Instances->ArrayNum;
  iVar27 = uVar4 - iVar24;
  local_2b4 = iVar24;
  if (0 < (int)uVar4) {
    if ((local_2b0->bIsSolo == 0) || (uVar4 != 1)) {
      local_268 = 0;
    }
    else {
      local_268 = *(longlong *)(param_1->Instances->AllocatorInstance).Data;
    }
    local_2c0 = (FName)FNiagaraDataSet::BeginSimulate(param_1->DataSet,true);
    FNiagaraDataBuffer::Allocate((FNiagaraDataBuffer *)local_2c0,uVar4,false);
    if ((*(uint *)((longlong)local_2c0 + 0x128) < uVar4) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("InNumInstances <= NumInstancesAllocated",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                            ,0x9c,L""), bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    *(uint *)((longlong)local_2c0 + 0x124) = uVar4;
    local_2a8 = &local_2b0->UpdateExecContext;
    local_230 = local_2a8->Ptr;
    local_2a0 = *(TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> **)
                 (local_230->_padding_ + 0x18);
    local_238 = param_1->Instances;
    if ((local_238->ArrayNum < 1) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    cVar17 = (*(code *)local_2a0)(local_230,*(undefined8 *)(local_238->AllocatorInstance).Data);
    if (cVar17 == '\0') {
      pTVar5 = param_1->Instances;
      pFVar25 = (pTVar5->AllocatorInstance).Data;
      iVar24 = pTVar5->ArrayNum;
      pFVar1 = pFVar25 + (longlong)iVar24 * 8;
      while( true ) {
        if (pTVar5->ArrayNum != iVar24) {
          `TCheckedPointerIterator<FNiagaraSystemInstance_*,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_2b8);
        }
        if (pFVar25 == pFVar1) break;
        if (*(int *)(*(longlong *)pFVar25 + 0x91c) != 4) {
          *(undefined4 *)(*(longlong *)pFVar25 + 0x91c) = 4;
        }
        pFVar25 = pFVar25 + 8;
      }
      FNiagaraDataSet::EndSimulate(param_1->DataSet,true);
      goto LAB_149407c1a;
    }
    if (0 < iVar27) {
      (**(code **)(local_2a8->Ptr->_padding_ + 0x28))();
      FNiagaraScriptExecutionContextBase::BindData(local_2a8->Ptr,0,param_1->DataSet,0,false);
      FNiagaraScriptExecutionContextBase::BindData
                (local_2a8->Ptr,1,&local_2b0->UpdateInstanceParameterDataSet,0,false);
      local_2a0 = param_1->Instances;
      local_1a0.Buffers.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char_const_*>)0x0
      ;
      local_1a0.Buffers.ArrayNum = 0;
      local_1a0.Buffers.ArrayMax = 0xc;
      local_1a0.BufferSizes.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_1a0.BufferSizes.ArrayNum = 0;
      local_1a0.BufferSizes.ArrayMax = 0xc;
      if ((local_2a0->ArrayNum < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar6 = *(longlong *)(local_2a0->AllocatorInstance).Data;
      BuildConstantBufferTable
                (local_2b0,
                 (FNiagaraGlobalParameters *)
                 (((ulonglong)(*(byte *)(lVar6 + 0x840) & 1) + 0x19) * 0x20 + lVar6),local_2a8,
                 &local_1a0);
      (**(code **)(local_2a8->Ptr->_padding_ + 0x20))(local_2a8->Ptr,0,param_1->DeltaSeconds,iVar27)
      ;
      if (local_1a0.BufferSizes.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_1a0.BufferSizes.AllocatorInstance.SecondaryData);
      }
      if (local_1a0.Buffers.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_char_const_*>)0x0) {
        FMemory::Free((void *)local_1a0.Buffers.AllocatorInstance.SecondaryData);
      }
    }
    if ((GbDumpSystemData != 0) || (param_1->System->bDumpDebugSystemInfo != 0)) {
      if (4 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      local_288.ComparisonIndex.Value = 0;
      local_288.Number = 0;
      ::FString::FString(&local_228,L"System Data - Post Update");
      FNiagaraDataBuffer::Dump((FNiagaraDataBuffer *)local_2c0,0,uVar4,&local_228,&local_288);
      if (local_228.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_228.Data.AllocatorInstance.Data);
      }
      pFVar20 = FNiagaraDataSet::GetCurrentDataChecked(&local_2b0->UpdateInstanceParameterDataSet);
      local_280.ComparisonIndex.Value = 0;
      local_280.Number = 0;
      ::FString::FString(&local_218,L"Update Instance Paramter Data");
      FNiagaraDataBuffer::Dump(pFVar20,0,uVar4,&local_218,&local_280);
      iVar24 = local_2b4;
      if (local_218.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_218.Data.AllocatorInstance.Data);
        iVar24 = local_2b4;
      }
    }
    pTVar15 = local_2a8;
    if ((0 < iVar24) && (GNiagaraSystemSimulationUpdateOnSpawn != 0)) {
      (**(code **)(local_2a8->Ptr->_padding_ + 0x28))();
      FNiagaraScriptExecutionContextBase::BindData(pTVar15->Ptr,0,param_1->DataSet,iVar27,false);
      this_00 = local_2b0;
      FNiagaraScriptExecutionContextBase::BindData
                ((local_2b0->UpdateExecContext).Ptr,1,&local_2b0->UpdateInstanceParameterDataSet,
                 iVar27,false);
      local_2a0 = param_1->Instances;
      if ((local_2a0->ArrayNum < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      lVar6 = *(longlong *)(local_2a0->AllocatorInstance).Data;
      lVar21 = ((ulonglong)(*(byte *)(lVar6 + 0x840) & 1) + 0x19) * 0x20;
      puVar2 = (undefined8 *)(lVar21 + lVar6);
      puVar3 = (undefined8 *)(lVar21 + 0x10 + lVar6);
      local_1c8._16_8_ = *puVar3;
      local_1c8._24_8_ = puVar3[1];
      local_1c8.WorldDeltaTime = (float)*puVar2;
      local_1c8.EngineDeltaTime = 0.0001;
      local_1c8.EngineTime = (float)((ulonglong)puVar2[1] >> 0x20);
      local_1c8.EngineInvDeltaTime = 10000.0;
      local_f0.Buffers.AllocatorInstance.SecondaryData = (ForElementType<unsigned_char_const_*>)0x0;
      local_f0.Buffers.ArrayNum = 0;
      local_f0.Buffers.ArrayMax = 0xc;
      local_f0.BufferSizes.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_f0.BufferSizes.ArrayNum = 0;
      local_f0.BufferSizes.ArrayMax = 0xc;
      BuildConstantBufferTable(this_00,&local_1c8,&this_00->UpdateExecContext,&local_f0);
      pFVar7 = (this_00->UpdateExecContext).Ptr;
      (**(code **)(pFVar7->_padding_ + 0x20))(pFVar7,0,param_1->DeltaSeconds,iVar24);
      if ((GbDumpSystemData != 0) || (param_1->System->bDumpDebugSystemInfo != 0)) {
        if (4 < (byte)LogNiagara._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        }
        local_278.ComparisonIndex.Value = 0;
        local_278.Number = 0;
        ::FString::FString(&local_208,L"System Data - Post Update (new systems)");
        FNiagaraDataBuffer::Dump
                  ((FNiagaraDataBuffer *)local_2c0,iVar27,iVar24,&local_208,&local_278);
        if (local_208.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_208.Data.AllocatorInstance.Data);
        }
        pFVar20 = FNiagaraDataSet::GetCurrentDataChecked(&this_00->UpdateInstanceParameterDataSet);
        local_270.ComparisonIndex.Value = 0;
        local_270.Number = 0;
        ::FString::FString(&local_1f8,L"Update Instance Paramter Data (new systems)");
        FNiagaraDataBuffer::Dump(pFVar20,iVar27,local_2b4,&local_1f8,&local_270);
        if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
        }
      }
      if (local_f0.BufferSizes.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_f0.BufferSizes.AllocatorInstance.SecondaryData);
      }
      if (local_f0.Buffers.AllocatorInstance.SecondaryData !=
          (ForElementType<unsigned_char_const_*>)0x0) {
        FMemory::Free((void *)local_f0.Buffers.AllocatorInstance.SecondaryData);
      }
    }
    FNiagaraDataSet::EndSimulate(param_1->DataSet,true);
    if ((local_268 != 0) && (plVar8 = *(longlong **)(local_268 + 0x168), plVar8 != (longlong *)0x0))
    {
      local_248 = 0;
      local_1e8 = &local_260;
      local_240 = 0;
      local_260 = 0;
      local_2c8[0] = 0xc;
      pTVar26 = (TSharedPtr<FNiagaraScriptDebuggerInfo,1> *)*plVar8;
      local_1e0 = local_2c8;
      pTVar28 = pTVar26 + (int)plVar8[1];
      local_1d8 = &local_248;
      for (; pTVar26 != pTVar28; pTVar26 = pTVar26 + 1) {
        bVar16 = `FNiagaraSystemInstance::GetActiveCaptureWrite'::__l5::<lambda_1>::operator()
                           (&local_1e8,pTVar26);
        if (bVar16) {
          if (pTVar26 != (TSharedPtr<FNiagaraScriptDebuggerInfo,1> *)0x0) {
            pTVar23 = (pTVar26->SharedReferenceCount).ReferenceController;
            pFVar9 = pTVar26->Object;
            if (pTVar23 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar23->SharedReferenceCount = (atomic<int>)((int)pTVar23->SharedReferenceCount + 1);
              UNLOCK();
            }
            if (pFVar9 != (FNiagaraScriptDebuggerInfo *)0x0) {
              FNiagaraDataSet::CopyTo(param_1->DataSet,&pFVar9->Frame,0,-1,true);
              FNiagaraParameterStore::operator=
                        (&pFVar9->Parameters,
                         (FNiagaraParameterStore *)&((local_2b0->UpdateExecContext).Ptr)->Parameters
                        );
              LOCK();
              pFVar9->bWritten = (TAtomic<bool>)0x1;
              UNLOCK();
            }
          }
          break;
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar23);
    }
  }
  pFVar10 = param_1->DataSet;
  if ((pFVar10->CurrentData == (FNiagaraDataBuffer *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentData",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSet.h"
                          ,0x158,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if ((pFVar10->CurrentData->NumInstances != param_1->Instances->ArrayNum) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Context.DataSet.GetCurrentDataChecked().GetNumInstances() == Context.Instances.Num()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                          ,0x8bd,L""), bVar16)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
LAB_149407c1a:
  if (bVar14) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar22,CycleScopeEnd);
  }
  return;
}

// UpdateTickGroups_GameThread @ 149407eb0

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

void __thiscall
FNiagaraSystemSimulation::UpdateTickGroups_GameThread(FNiagaraSystemSimulation *this)

{
  int *piVar1;
  FNiagaraSystemInstance *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  FNiagaraSystemSimulation *pFVar4;
  code *pcVar5;
  bool bVar6;
  FNiagaraWorldManager *pFVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  ETickingGroup EVar11;
  uint uVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT> FVar14;
  TStatId TVar15;
  TSharedRef<FNiagaraSystemSimulation,1> *pTVar16;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar17;
  FName FVar18;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  FLLMScope local_res10 [2];
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_c8;
  byte local_c0;
  FName local_b8;
  FNiagaraWorldManager *local_b0;
  FName local_a8;
  FMemScope local_98;
  LARGE_INTEGER local_90;
  FStatMessage local_88;
  FName local_78;
  FName local_70;
  TSharedRef<FNiagaraSystemSimulation,1> local_68;
  TSharedRef<FNiagaraSystemSimulation,1> local_58;
  
  bVar9 = IsInGameThread();
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x58c,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->bIsSolo != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("!bIsSolo",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x58d,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar20 = 0;
  FVar14 = StatPtr_STAT_NiagaraOverview_GT;
  if (StatPtr_STAT_NiagaraOverview_GT == (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)0x0)
  {
    pFVar13 = ::FName::FName(&local_78,"STAT_NiagaraOverview_GT");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT,*pFVar13,
                        L"GT Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",L"NiagaraOverview"
                        ,true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar18 = *(FName *)FVar14;
  bVar6 = false;
  bVar9 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  bVar10 = false;
  bVar8 = false;
  if ((FVar18.ComparisonIndex.Value.Value != 0) || (FVar18.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar6 = false;
      bVar9 = true;
      bVar10 = false;
      bVar8 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar18.ComparisonIndex.Value.Value;
        local_b8.Number = FVar18.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                   ,0x58f);
        bVar6 = true;
        bVar9 = true;
        bVar10 = true;
        bVar8 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar18;
      FThreadStats::AddMessage(FVar18,CycleScopeStart);
      bVar8 = true;
      goto LAB_14940805a;
    }
  }
  bVar6 = bVar10;
  bVar9 = bVar8;
  bVar8 = false;
  local_res20 = local_a8;
  FVar18 = local_a8;
LAB_14940805a:
  if (__CsvProfilerStat1424 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Effects");
    __CsvProfilerStat1424 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Effects","CSV_Effects");
  FLLMScope::FLLMScope(local_res10,Niagara,false,None,Default,true);
  FMemScope::FMemScope(&local_98,Niagara,true);
  TVar15.StatIdPtr = (TStatIdData *)StatPtr_STAT_NiagaraOverview_GT_CNC;
  if (StatPtr_STAT_NiagaraOverview_GT_CNC ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraOverview_GT_CNC>)0x0) {
    pFVar13 = ::FName::FName(&local_70,"STAT_NiagaraOverview_GT_CNC");
    TVar15.StatIdPtr =
         FThreadSafeStaticStatBase::DoSetup
                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraOverview_GT_CNC,*pFVar13,
                    L"GT Concurrent Total","STATGROUP_NiagaraOverview","STATCAT_Niagara",
                    L"NiagaraOverview",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FScopeCycleCounterUObject::FScopeCycleCounterUObject
            ((FScopeCycleCounterUObject *)&local_c8,(UObjectBaseUtility *)this->System,TVar15);
  local_b0 = FNiagaraWorldManager::Get(this->World);
  if ((local_b0 == (FNiagaraWorldManager *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("WorldManager != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                          ,0x595,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((this->System == (UNiagaraSystem *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("System != nullptr",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                          ,0x597,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar7 = local_b0;
  iVar17 = (this->PendingTickGroupPromotions).ArrayNum;
  while (0 < iVar17) {
    if (((this->PendingTickGroupPromotions).ArrayNum < 1) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar17 = (this->PendingTickGroupPromotions).ArrayNum;
    pFVar2 = *(FNiagaraSystemInstance **)
              ((this->PendingTickGroupPromotions).AllocatorInstance.Data + (longlong)iVar17 * 8 + -8
              );
    (this->PendingTickGroupPromotions).ArrayNum = iVar17 + -1;
    EVar11 = FNiagaraSystemInstance::CalculateTickGroup(pFVar2);
    if (EVar11 != this->SystemTickGroup) {
      pTVar16 = FNiagaraWorldManager::GetSystemSimulation(pFVar7,&local_68,EVar11,this->System);
      pTVar3 = (pTVar16->SharedReferenceCount).ReferenceController;
      pFVar4 = pTVar16->Object;
      if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_68.SharedReferenceCount.ReferenceController);
      if ((pFVar4 == (FNiagaraSystemSimulation *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      TransferInstance(pFVar4,pFVar2);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
    }
    FVar18 = local_res20;
    iVar17 = (this->PendingTickGroupPromotions).ArrayNum;
  }
  (this->PendingTickGroupPromotions).ArrayNum = 0;
  if ((this->PendingTickGroupPromotions).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->PendingTickGroupPromotions).AllocatorInstance,0,
               &(this->PendingTickGroupPromotions).ArrayMax);
  }
  pFVar7 = local_b0;
  iVar17 = this->SystemInstancesPerState[1].ArrayNum;
  uVar21 = uVar20;
  if (0 < iVar17) {
    do {
      uVar19 = (uint)uVar20;
      uVar12 = 0;
      if ((int)uVar19 < iVar17) {
        uVar12 = ~uVar19 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = *(FNiagaraSystemInstance **)
                (this->SystemInstancesPerState[1].AllocatorInstance.Data + uVar21);
      EVar11 = FNiagaraSystemInstance::CalculateTickGroup(pFVar2);
      if (EVar11 == this->SystemTickGroup) {
        uVar20 = (ulonglong)(uVar19 + 1);
        uVar21 = uVar21 + 8;
      }
      else {
        pTVar16 = FNiagaraWorldManager::GetSystemSimulation(pFVar7,&local_58,EVar11,this->System);
        pTVar3 = (pTVar16->SharedReferenceCount).ReferenceController;
        pFVar4 = pTVar16->Object;
        if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_58.SharedReferenceCount.ReferenceController);
        if ((pFVar4 == (FNiagaraSystemSimulation *)0x0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar10)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        TransferInstance(pFVar4,pFVar2);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
      }
      iVar17 = this->SystemInstancesPerState[1].ArrayNum;
      FVar18 = local_res20;
    } while ((int)uVar20 < iVar17);
  }
  if ((local_c0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_c0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_c0 & 4) != 0) {
    FThreadStats::AddMessage(local_c8,CycleScopeEnd);
  }
  local_c0 = 0;
  FMemScope::~FMemScope(&local_98);
  FLLMScope::~FLLMScope(local_res10);
  FCsvProfiler::EndExclusiveStat("Effects");
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar18 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_88.NameAndInfo.Index = FVar18.ComparisonIndex.Value;
      local_88.NameAndInfo.Number = FVar18.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_90);
      local_88.StatData.Pad[4] = '\0';
      local_88.StatData.Pad[5] = '\0';
      local_88.StatData.Pad[6] = '\0';
      local_88.StatData.Pad[7] = '\0';
      local_88.StatData.Pad[0] = local_90.s.LowPart._0_1_;
      local_88.StatData.Pad[1] = local_90.s.LowPart._1_1_;
      local_88.StatData.Pad[2] = local_90.s.LowPart._2_1_;
      local_88.StatData.Pad[3] = local_90.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_88);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// WaitForConcurrentTickComplete @ 149408600

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
FNiagaraSystemSimulation::WaitForConcurrentTickComplete(FNiagaraSystemSimulation *this,bool param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  TRefCountPtr<FBaseGraphTask> *pTVar3;
  int iVar4;
  FBaseGraphTask *pFVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_ForceWaitForAsync> FVar12;
  FTaskGraphInterface *this_00;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar13;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar14;
  FNameEntryId FVar15;
  FName FVar16;
  undefined1 extraout_XMM0 [16];
  undefined1 extraout_XMM0_00 [16];
  undefined1 extraout_XMM0_01 [16];
  undefined1 extraout_XMM0_02 [16];
  undefined1 extraout_XMM0_03 [16];
  undefined1 extraout_XMM0_04 [16];
  undefined1 extraout_XMM0_05 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auStackY_118 [32];
  FColor_u_0 local_b8 [2];
  FName local_b0;
  TRefCountPtr<FBaseGraphTask> local_a8;
  FName local_a0;
  FNiagaraSystemSimulation *local_90;
  LARGE_INTEGER local_88;
  FStatMessage local_80;
  FName local_70;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_68;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_118;
  if (!__CsvProfilerStat1809) {
    FCsvProfilerTrace::OutputInlineStatExclusive("EventWait/Effects");
    __CsvProfilerStat1809 = true;
  }
  FCsvProfiler::BeginSetWaitStat
            ("EventWait/Effects","CsvEventWait/Effects","CsvEventWait/Effects (Non-CP)");
  bVar9 = IsInGameThread();
  auVar17 = extraout_XMM0;
  if ((!bVar9) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x712,L""), auVar17 = extraout_XMM0_00, bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pTVar3 = &this->ConcurrentTickGraphEvent;
  if ((pTVar3->Reference == (FBaseGraphTask *)0x0) || (pTVar3->Reference->field_0xd0 != '\0'))
  goto LAB_149408a06;
  FVar12 = StatPtr_STAT_NiagaraSystemSim_ForceWaitForAsync;
  if (StatPtr_STAT_NiagaraSystemSim_ForceWaitForAsync ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_ForceWaitForAsync>)0x0) {
    pFVar11 = ::FName::FName(&local_70,"STAT_NiagaraSystemSim_ForceWaitForAsync");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_ForceWaitForAsync>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NiagaraSystemSim_ForceWaitForAsync,*pFVar11,
                        L"ForcedWaitForAsync","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
                        true,ST_int64,true,false,MCR_Invalid);
    auVar17 = extraout_XMM0_01;
  }
  FVar16 = *(FName *)FVar12;
  bVar9 = false;
  bVar8 = false;
  local_a0.ComparisonIndex.Value = 0;
  local_a0.Number = 0;
  FVar15 = FVar16.ComparisonIndex.Value;
  uVar13 = FVar16.Number;
  if ((FVar15.Value == 0) && (uVar13 == 0)) {
LAB_1494087f0:
    bVar7 = false;
    FVar16 = local_a0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_b8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b8[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar9 = false;
      bVar8 = true;
      auVar17 = extraout_XMM0_02;
      if (-1 < CpuChannel->Enabled) {
        local_b0.ComparisonIndex.Value = FVar15.Value;
        local_b0.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b0,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                   ,0x716);
        bVar9 = true;
        bVar8 = true;
        auVar17 = extraout_XMM0_03;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1494087f0;
    local_b0.ComparisonIndex.Value = FVar15.Value;
    local_b0.Number = uVar13;
    FThreadStats::AddMessage(FVar16,CycleScopeStart);
    bVar7 = true;
    auVar17 = extraout_XMM0_04;
  }
  if (param_1) {
    local_90 = this;
    `FNiagaraSystemSimulation::WaitForConcurrentTickComplete'::__l15::<lambda_1>::operator()
              (&local_90);
    auVar17 = extraout_XMM0_05;
  }
  if (GNiagaraSystemSimulationTaskStallTimeout < 1) {
    this_00 = FTaskGraphInterface::Get();
    FTaskGraphInterface::WaitUntilTaskCompletes(this_00,pTVar3,GameThread_Local);
  }
  else {
    local_a8.Reference = pTVar3->Reference;
    auVar18._0_8_ =
         (double)GNiagaraSystemSimulationTaskStallTimeout * __real_4024000000000000 +
         __real_3fe0000000000000;
    auVar18._8_8_ = 0;
    auVar17 = roundpd(auVar17,auVar18,1);
    if (local_a8.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      *(int *)&(local_a8.Reference)->field_0x30 = *(int *)&(local_a8.Reference)->field_0x30 + 1;
      UNLOCK();
    }
    local_68.AllocatorInstance.SecondaryData = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
    local_68.ArrayNum = 1;
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,1,0,&local_68.AllocatorInstance,1,&local_68.ArrayMax);
    FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
    if (local_68.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar14 = local_68.AllocatorInstance.SecondaryData;
    }
    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
              ((void *)FVar14,&local_a8,1);
    iVar10 = WaitForAnyTaskCompleted(&local_68,(FTimespan)(longlong)auVar17._0_8_);
    FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_68;
    if (local_68.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar14 = local_68.AllocatorInstance.SecondaryData;
    }
    DestructItems<TRefCountPtr<FBaseGraphTask>,int>
              ((TRefCountPtr<FBaseGraphTask> *)FVar14,local_68.ArrayNum);
    if (local_68.AllocatorInstance.SecondaryData !=
        (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FMemory::Free((void *)local_68.AllocatorInstance.SecondaryData);
    }
    if (local_a8.Reference != (FBaseGraphTask *)0x0) {
      LOCK();
      puVar1 = &(local_a8.Reference)->field_0x30;
      iVar4 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if (iVar4 == 1) {
        (*(code *)**(undefined8 **)local_a8.Reference)(local_a8.Reference,1);
      }
    }
    if (iVar10 == -1) {
      DumpStalledInfo(this);
    }
  }
  if (bVar8) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (FVar16 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_80.NameAndInfo.Index = FVar16.ComparisonIndex.Value;
      local_80.NameAndInfo.Number = FVar16.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_80);
      piVar2 = &this_01->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
LAB_149408a06:
  pFVar5 = pTVar3->Reference;
  if (pFVar5 != (FBaseGraphTask *)0x0) {
    pTVar3->Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar1 = &pFVar5->field_0x30;
    iVar10 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if (iVar10 == 1) {
      (*(code *)**(undefined8 **)pFVar5)(pFVar5,1);
    }
  }
  FCsvProfiler::EndSetWaitStat();
  return;
}

// WaitForInstancesTickComplete @ 1494096c0

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
FNiagaraSystemSimulation::WaitForInstancesTickComplete(FNiagaraSystemSimulation *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  FBaseGraphTask *pFVar3;
  FNiagaraSystemInstance *this_00;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_ForceWaitForAsync> FVar11;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  int iVar12;
  FNameEntryId FVar13;
  FName FVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  char local_res8 [8];
  char local_res18 [8];
  FColor_u_0 local_res20 [2];
  FName local_98;
  uint local_90;
  uint uStack_8c;
  LARGE_INTEGER local_88;
  FName local_80;
  FName local_78;
  FStatMessage local_68;
  FNiagaraSystemSimulation *local_58;
  char *local_50;
  char *local_48;
  
  bVar7 = IsInGameThread();
  if ((!bVar7) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInGameThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x72a,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (this->ConcurrentTickGraphEvent).Reference;
  if ((pFVar3 == (FBaseGraphTask *)0x0) || (pFVar3->field_0xd0 != '\0')) {
    local_res8[0] = '\0';
  }
  else {
    local_res8[0] = '\x01';
  }
  pFVar3 = (this->AllWorkCompleteGraphEvent).Reference;
  if ((pFVar3 == (FBaseGraphTask *)0x0) || (pFVar3->field_0xd0 != '\0')) {
    local_res18[0] = '\0';
  }
  else {
    local_res18[0] = '\x01';
  }
  uVar16 = 0;
  if ((local_res8[0] == '\0') && (local_res18[0] == '\0')) goto LAB_149409acf;
  FVar11 = StatPtr_STAT_NiagaraSystemSim_ForceWaitForAsync;
  if (StatPtr_STAT_NiagaraSystemSim_ForceWaitForAsync ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_ForceWaitForAsync>)0x0) {
    pFVar10 = ::FName::FName(&local_80,"STAT_NiagaraSystemSim_ForceWaitForAsync");
    FVar11 = (FThreadSafeStaticStat<FStat_STAT_NiagaraSystemSim_ForceWaitForAsync>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NiagaraSystemSim_ForceWaitForAsync,*pFVar10,
                        L"ForcedWaitForAsync","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true,
                        true,ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar11;
  bVar7 = false;
  bVar6 = false;
  local_78.ComparisonIndex.Value = 0;
  local_78.Number = 0;
  FVar13 = FVar14.ComparisonIndex.Value;
  uVar9 = FVar14.Number;
  if ((FVar13.Value == 0) && (uVar9 == 0)) {
LAB_14940989f:
    bVar5 = false;
    FVar14 = local_78;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.ComparisonIndex.Value = FVar13.Value;
        local_98.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_98,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                   ,0x731);
        bVar7 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14940989f;
    local_90 = FVar13.Value;
    uStack_8c = uVar9;
    FThreadStats::AddMessage(FVar14,CycleScopeStart);
    bVar5 = true;
  }
  if (param_1) {
    local_50 = local_res8;
    local_48 = local_res18;
    local_58 = this;
    `FNiagaraSystemSimulation::WaitForInstancesTickComplete'::__l12::<lambda_1>::operator()
              (&local_58);
  }
  WaitForConcurrentTickComplete(this,false);
  iVar12 = this->SystemInstancesPerState[4].ArrayNum;
  uVar17 = uVar16;
  if (0 < iVar12) {
    do {
      uVar15 = (uint)uVar16;
      uVar9 = 0;
      if ((int)uVar15 < iVar12) {
        uVar9 = ~uVar15 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *(FNiagaraSystemInstance **)
                 (this->SystemInstancesPerState[4].AllocatorInstance.Data + uVar17);
      FNiagaraSystemInstance::WaitForConcurrentTickAndFinalize(this_00,false);
      iVar12 = this_00->SystemInstanceIndex;
      if ((-1 < iVar12) && (iVar12 < this->SystemInstancesPerState[4].ArrayNum)) {
        if ((iVar12 < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (*(FNiagaraSystemInstance **)
             (this->SystemInstancesPerState[4].AllocatorInstance.Data + (longlong)iVar12 * 8) ==
            this_00) {
          uVar16 = (ulonglong)(uVar15 + 1);
          uVar17 = uVar17 + 8;
        }
      }
      iVar12 = this->SystemInstancesPerState[4].ArrayNum;
    } while ((int)uVar16 < iVar12);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_68.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_68.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_68);
      piVar1 = &this_01->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_01,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_01,false,false);
      }
    }
  }
LAB_149409acf:
  pFVar3 = (this->ConcurrentTickGraphEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    (this->ConcurrentTickGraphEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar2 = &pFVar3->field_0x30;
    iVar12 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  pFVar3 = (this->AllWorkCompleteGraphEvent).Reference;
  if (pFVar3 != (FBaseGraphTask *)0x0) {
    (this->AllWorkCompleteGraphEvent).Reference = (FBaseGraphTask *)0x0;
    LOCK();
    puVar2 = &pFVar3->field_0x30;
    iVar12 = *(int *)puVar2;
    *(int *)puVar2 = *(int *)puVar2 + -1;
    UNLOCK();
    if (iVar12 == 1) {
      (*(code *)**(undefined8 **)pFVar3)(pFVar3,1);
    }
  }
  return;
}

// operator() @ 1505420d0

bool __thiscall
`FNiagaraSystemSimulation::WaitForInstancesTickComplete'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_110362534745209038>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)(*(longlong *)this + 0x10),&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_110362534745209038>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054216b;
    }
  }
  bVar2 = false;
LAB_15054216b:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 1505421a0

bool __thiscall
`FNiagaraSystemSimulation::WaitForConcurrentTickComplete'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(true,&bGEnsureHasExecuted<_110362534745209065>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName
              (*(UObjectBaseUtility **)(*(longlong *)this + 0x10),&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_110362534745209065>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15054220e;
    }
  }
  bVar2 = false;
LAB_15054220e:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

