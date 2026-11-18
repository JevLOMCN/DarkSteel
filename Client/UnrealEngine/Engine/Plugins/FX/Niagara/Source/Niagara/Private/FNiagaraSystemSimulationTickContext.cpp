// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 2

// FNiagaraSystemSimulationTickContext @ 1493ce4d0

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

FNiagaraSystemSimulationTickContext * __thiscall
FNiagaraSystemSimulationTickContext::FNiagaraSystemSimulationTickContext
          (FNiagaraSystemSimulationTickContext *this,FNiagaraSystemSimulationTickContext *param_1)

{
  int *piVar1;
  int iVar2;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar3;
  ForElementType<FNiagaraSystemInstance_*> _Dst;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar4;
  ForElementType<FNiagaraSystemInstance_*> _Src;
  
  this->Owner = param_1->Owner;
  this->System = param_1->System;
  this->World = param_1->World;
  this->Instances = param_1->Instances;
  this->DataSet = param_1->DataSet;
  this->DeltaSeconds = param_1->DeltaSeconds;
  this->SpawnNum = param_1->SpawnNum;
  this->EffectsQuality = param_1->EffectsQuality;
  this->bRunningAsync = param_1->bRunningAsync;
  (this->BeforeInstancesTickGraphEvents).AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  FVar4 = (param_1->BeforeInstancesTickGraphEvents).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->BeforeInstancesTickGraphEvents).ArrayNum;
  (this->BeforeInstancesTickGraphEvents).ArrayNum = iVar2;
  if (FVar4 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
    FVar4 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&param_1->BeforeInstancesTickGraphEvents;
  }
  piVar1 = &(this->BeforeInstancesTickGraphEvents).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
              (8,8,iVar2,0,&(this->BeforeInstancesTickGraphEvents).AllocatorInstance,iVar2,piVar1);
    FVar3 = (this->BeforeInstancesTickGraphEvents).AllocatorInstance.SecondaryData;
    if (FVar3 == (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
      FVar3 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&this->BeforeInstancesTickGraphEvents;
    }
    ConstructItems<TRefCountPtr<FBaseGraphTask>,TRefCountPtr<FBaseGraphTask>,int>
              ((void *)FVar3,(TRefCountPtr<FBaseGraphTask> *)FVar4,iVar2);
  }
  this->CompletionEvents = param_1->CompletionEvents;
  (this->TickBatch).AllocatorInstance.SecondaryData = (ForElementType<FNiagaraSystemInstance_*>)0x0;
  _Src = (param_1->TickBatch).AllocatorInstance.SecondaryData;
  iVar2 = (param_1->TickBatch).ArrayNum;
  (this->TickBatch).ArrayNum = iVar2;
  if (_Src == (ForElementType<FNiagaraSystemInstance_*>)0x0) {
    _Src = (ForElementType<FNiagaraSystemInstance_*>)&param_1->TickBatch;
  }
  piVar1 = &(this->TickBatch).ArrayMax;
  if (iVar2 == 0) {
    *piVar1 = 4;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraSystemInstance_*>_>
              (8,8,iVar2,0,&(this->TickBatch).AllocatorInstance,iVar2,piVar1);
    _Dst = (this->TickBatch).AllocatorInstance.SecondaryData;
    if (_Dst == (ForElementType<FNiagaraSystemInstance_*>)0x0) {
      _Dst = (ForElementType<FNiagaraSystemInstance_*>)&this->TickBatch;
    }
    memcpy((void *)_Dst,(void *)_Src,(longlong)iVar2 << 3);
  }
  return this;
}

// FNiagaraSystemSimulationTickContext @ 1493ce640

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

FNiagaraSystemSimulationTickContext * __thiscall
FNiagaraSystemSimulationTickContext::FNiagaraSystemSimulationTickContext
          (FNiagaraSystemSimulationTickContext *this,FNiagaraSystemSimulation *param_1,
          TArray<FNiagaraSystemInstance_*,TSizedDefaultAllocator<32>_> *param_2,
          FNiagaraDataSet *param_3,float param_4,int param_5,bool param_6)

{
  code *pcVar1;
  void *pvVar2;
  bool bVar3;
  int iVar4;
  FNiagaraSystemSimulationTickContext *pFVar5;
  IConsoleManager *pIVar6;
  bool bVar7;
  
  this->Owner = param_1;
  this->System = param_1->System;
  this->World = param_1->World;
  this->SpawnNum = param_5;
  pvVar2 = ThreadLocalStoragePointer;
  this->Instances = param_2;
  this->bRunningAsync = false;
  (this->BeforeInstancesTickGraphEvents).AllocatorInstance.SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  this->DeltaSeconds = param_4;
  this->DataSet = param_3;
  (this->BeforeInstancesTickGraphEvents).ArrayNum = 0;
  (this->BeforeInstancesTickGraphEvents).ArrayMax = 4;
  this->CompletionEvents =
       (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
        *)0x0;
  (this->TickBatch).AllocatorInstance.SecondaryData = (ForElementType<FNiagaraSystemInstance_*>)0x0;
  (this->TickBatch).ArrayNum = 0;
  (this->TickBatch).ArrayMax = 4;
  if ((*(int *)(*(longlong *)((longlong)pvVar2 + (ulonglong)_tls_index * 8) + 0x9d4c) < ::_TSS0) &&
     (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    pIVar6 = IConsoleManager::Get();
    EffectsQualityCVar =
         (IConsoleVariable *)(**(code **)((longlong)*pIVar6 + 0xc0))(pIVar6,L"sg.EffectsQuality",1);
    _Init_thread_footer(&::_TSS0);
  }
  if ((EffectsQualityCVar == (IConsoleVariable *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("EffectsQualityCVar != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraSystemSimulation.cpp"
                         ,0x22f,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    pFVar5 = (FNiagaraSystemSimulationTickContext *)(*pcVar1)();
    return pFVar5;
  }
  iVar4 = (**(code **)(*(longlong *)EffectsQualityCVar + 200))();
  this->EffectsQuality = iVar4;
  if (((param_6) && (GNiagaraSystemSimulationAllowASync != 0)) &&
     (bVar3 = FApp::ShouldUseThreadingForPerformance(), bVar3)) {
    bVar3 = true;
  }
  else {
    bVar3 = false;
  }
  this->bRunningAsync = bVar3;
  if ((this->Owner->bIsSolo != 0) && (this->Instances->ArrayNum == 1)) {
    bVar7 = false;
    if (*(longlong *)(*(longlong *)(this->Instances->AllocatorInstance).Data + 0x168) == 0) {
      bVar7 = bVar3;
    }
    this->bRunningAsync = bVar7;
  }
  return this;
}

