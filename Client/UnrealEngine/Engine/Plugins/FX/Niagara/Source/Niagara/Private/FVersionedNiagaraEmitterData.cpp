// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 37

// StaticStruct @ 14925dd80

UScriptStruct * __cdecl FVersionedNiagaraEmitterData::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitterData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitterData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData,(UObject *)pUVar1,
                         L"VersionedNiagaraEmitterData");
  }
  return Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitterData.OuterSingleton;
}

// ForEachEnabledRendererWithIndex<TFunction<void___cdecl(UNiagaraRendererProperties_const_*,int)>_> @ 14926ed40

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVersionedNiagaraEmitterData::
ForEachEnabledRendererWithIndex<TFunction<void___cdecl(UNiagaraRendererProperties_const_*,int)>_>
          (FVersionedNiagaraEmitterData *this,
          TFunction<void___cdecl(UNiagaraRendererProperties_const_*,int)> *param_1)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  uint uVar7;
  longlong lVar8;
  uint local_28 [2];
  longlong *local_20;
  
  uVar7 = 0;
  if (0 < (this->RendererProperties).ArrayNum) {
    lVar8 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar7 < (this->RendererProperties).ArrayNum) {
        uVar4 = ~uVar7 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      plVar6 = *(longlong **)((this->RendererProperties).AllocatorInstance.Data + lVar8);
      if (((plVar6 != (longlong *)0x0) &&
          (cVar3 = (**(code **)(*plVar6 + 0x318))(plVar6), cVar3 != '\0')) &&
         (cVar3 = (**(code **)(*plVar6 + 0x2e8))(plVar6,this->SimTarget), cVar3 != '\0')) {
        local_28[0] = uVar7;
        local_20 = plVar6;
        UE::Core::Private::Function::CheckCallable(*(void **)param_1);
        pcVar1 = *(code **)param_1;
        plVar6 = *(longlong **)&param_1->field_0x28;
        if (*(longlong **)&param_1->field_0x28 == (longlong *)0x0) {
          plVar6 = (longlong *)&param_1->field_0x10;
        }
        uVar5 = (**(code **)(*plVar6 + 8))();
        (*pcVar1)(uVar5,&local_20,local_28);
      }
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 8;
    } while ((int)uVar7 < (this->RendererProperties).ArrayNum);
  }
  if (*(longlong *)param_1 == 0) {
    return;
  }
  plVar6 = (longlong *)&param_1->field_0x10;
  if (*(longlong **)&param_1->field_0x28 != (longlong *)0x0) {
    plVar6 = *(longlong **)&param_1->field_0x28;
  }
                    /* WARNING: Could not recover jumptable at 0x00014926ee7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x10))();
  return;
}

// FVersionedNiagaraEmitterData @ 1492771a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVersionedNiagaraEmitterData * __thiscall
FVersionedNiagaraEmitterData::FVersionedNiagaraEmitterData(FVersionedNiagaraEmitterData *this)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined7 uStack_17;
  
  (this->Version).MajorVersion = 1;
  (this->Version).MinorVersion = 0;
  FGuid::NewGuid(&(this->Version).VersionGuid);
  (this->Version).bIsVisibleInVersionSelector = true;
  this->bDeprecated = false;
  FText::FText(&this->DeprecationMessage);
  this->bRequiresPersistentIDs = 0;
  this->bLocalSpace = false;
  this->bDeterminism = false;
  this->RandomSeed = 0;
  this->InterpolatedSpawnMode = NoInterpolation;
  this->SimTarget = CPUSim;
  this->CalculateBoundsMode = Dynamic;
  (this->FixedBounds).IsValid = '\0';
  (this->EventHandlerScriptProps).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EventHandlerScriptProps).ArrayNum = 0;
  (this->EventHandlerScriptProps).ArrayMax = 0;
  FNiagaraPlatformSet::FNiagaraPlatformSet(&this->Platforms);
  (this->ScalabilityOverrides).Overrides.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScalabilityOverrides).Overrides.ArrayNum = 0;
  (this->ScalabilityOverrides).Overrides.ArrayMax = 0;
  this->MaxGPUParticlesSpawnPerFrame = 0;
  this->AllocationMode = AutomaticEstimate;
  this->PreAllocationCount = 0;
  (this->EmitterDependencies).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EmitterDependencies).ArrayNum = 0;
  (this->EmitterDependencies).ArrayMax = 0;
  (this->UpdateScriptProps).Script.field0_0x0.DebugPtr = (UNiagaraScript *)0x0;
  (this->UpdateScriptProps).EventReceivers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdateScriptProps).EventReceivers.ArrayNum = 0;
  (this->UpdateScriptProps).EventReceivers.ArrayMax = 0;
  (this->UpdateScriptProps).EventGenerators.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->UpdateScriptProps).EventGenerators.ArrayNum = 0;
  (this->UpdateScriptProps).EventGenerators.ArrayMax = 0;
  (this->SpawnScriptProps).Script.field0_0x0.DebugPtr = (UNiagaraScript *)0x0;
  (this->SpawnScriptProps).EventReceivers.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnScriptProps).EventReceivers.ArrayNum = 0;
  (this->SpawnScriptProps).EventReceivers.ArrayMax = 0;
  (this->SpawnScriptProps).EventGenerators.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SpawnScriptProps).EventGenerators.ArrayNum = 0;
  (this->SpawnScriptProps).EventGenerators.ArrayMax = 0;
  FNiagaraParameterStore::FNiagaraParameterStore(&this->RendererBindings);
  (this->RendererBindingsExternalObjects).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererBindingsExternalObjects).ArrayNum = 0;
  (this->RendererBindingsExternalObjects).ArrayMax = 0;
  *(undefined8 *)&this->ResolvedDIBindings = 0;
  *(undefined8 *)&(this->ResolvedDIBindings).field_0x8 = 0;
  *(undefined8 *)&(this->ResolvedDIBindings).field_0x20 = 0;
  *(undefined4 *)&(this->ResolvedDIBindings).field_0x28 = 0;
  *(undefined4 *)&(this->ResolvedDIBindings).field_0x2c = 0x80;
  *(undefined4 *)&(this->ResolvedDIBindings).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->ResolvedDIBindings).field_0x34 = 0;
  *(undefined8 *)&(this->ResolvedDIBindings).field_0x40 = 0;
  *(undefined4 *)&(this->ResolvedDIBindings).field_0x48 = 0;
  (this->RendererProperties).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RendererProperties).ArrayNum = 0;
  (this->RendererProperties).ArrayMax = 0;
  (this->SimulationStages).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimulationStages).ArrayNum = 0;
  (this->SimulationStages).ArrayMax = 0;
  (this->SimStageExecutionLoops).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SimStageExecutionLoops).ArrayNum = 0;
  (this->SimStageExecutionLoops).ArrayMax = 0;
  (this->SimStageExecutionData).Object = (FNiagaraSimStageExecutionData *)0x0;
  (this->SimStageExecutionData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->GPUComputeScript).field0_0x0.DebugPtr = (UNiagaraScript *)0x0;
  (this->SharedEventGeneratorIds).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SharedEventGeneratorIds).ArrayNum = 0;
  (this->SharedEventGeneratorIds).ArrayMax = 0;
  FNiagaraPlatformSet::FNiagaraPlatformSet(&(this->CurrentScalabilitySettings).Platforms);
  (this->CurrentScalabilitySettings).bScaleSpawnCount = 0;
  (this->CurrentScalabilitySettings).SpawnCountScale = 1.0;
  this->MaxInstanceCount = 0;
  this->MaxAllocationCount = 0;
  (this->BoundsCalculators).AllocatorInstance.SecondaryData =
       (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)0x0;
  puVar2 = &this->field_0x2b8;
  this->bIsAllowedToExecute = 1;
  this->bNeedsPartialDepthTexture = 0;
  this->bRequiresViewUniformBuffer = 0;
  (this->BoundsCalculators).ArrayNum = 0;
  (this->BoundsCalculators).ArrayMax = 1;
  *(undefined8 *)&(this->RuntimeEstimation).RuntimeAllocations = 0;
  *(undefined8 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x8 = 0;
  *(undefined8 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x20 = 0;
  *(undefined4 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x28 = 0;
  *(undefined4 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x2c = 0x80;
  *(undefined4 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x34 = 0;
  *(undefined8 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x40 = 0;
  *(undefined4 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x48 = 0;
  dVar9 = _UNK_151d21688;
  dVar8 = ___xmm_4059000000000000c059000000000000;
  dVar7 = _UNK_1518ecdd8;
  dVar6 = ___xmm_c059000000000000c059000000000000;
  dVar5 = _UNK_1512468d8;
  dVar4 = ___xmm_40590000000000004059000000000000;
  (this->RuntimeEstimation).IsEstimationDirty = false;
  (this->RuntimeEstimation).AllocationEstimate = 0;
  (this->RuntimeEstimation).EstimationCriticalSection.Object = (FWindowsRecursiveMutex *)0x0;
  (this->RuntimeEstimation).EstimationCriticalSection.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  *(undefined8 *)&(this->StatDatabase).StatCaptures = 0;
  *(undefined8 *)&(this->StatDatabase).StatCaptures.field_0x8 = 0;
  *(undefined8 *)&(this->StatDatabase).StatCaptures.field_0x20 = 0;
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x28 = 0;
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x2c = 0x80;
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x34 = 0;
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->StatDatabase).StatCaptures.field_0x40 = 0;
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x48 = 0;
  (this->StatDatabase).CriticalSection.Object = (FWindowsRecursiveMutex *)0x0;
  (this->StatDatabase).CriticalSection.SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->DebugSimName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DebugSimName).Data.ArrayNum = 0;
  (this->DebugSimName).Data.ArrayMax = 0;
  (this->IsValidCached).bIsSet = false;
  (this->IsReadyToRunCached).bIsSet = false;
  (this->FixedBounds).Min.field0_0x0._s_0.X = dVar6;
  (this->FixedBounds).Min.field0_0x0._s_0.Y = dVar7;
  (this->FixedBounds).Min.field0_0x0._s_0.Z = dVar8;
  (this->FixedBounds).Max.field0_0x0._s_0.X = dVar9;
  this->PSOPrecacheResult = Unknown;
  (this->FixedBounds).Max.field0_0x0._s_0.Y = dVar4;
  (this->FixedBounds).Max.field0_0x0._s_0.Z = dVar5;
  (this->FixedBounds).IsValid = 1;
  (this->FixedBounds).Pad[0] = (char)uStack_17;
  (this->FixedBounds).Pad[1] = (char)((uint7)uStack_17 >> 8);
  (this->FixedBounds).Pad[2] = (char)((uint7)uStack_17 >> 0x10);
  (this->FixedBounds).Pad[3] = (char)((uint7)uStack_17 >> 0x18);
  (this->FixedBounds).Pad[4] = (char)((uint7)uStack_17 >> 0x20);
  (this->FixedBounds).Pad[5] = (char)((uint7)uStack_17 >> 0x28);
  (this->FixedBounds).Pad[6] = (char)((uint7)uStack_17 >> 0x30);
  return this;
}

// ~FVersionedNiagaraEmitterData @ 14927a810

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVersionedNiagaraEmitterData::~FVersionedNiagaraEmitterData(FVersionedNiagaraEmitterData *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  ITextData *pIVar3;
  ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_> FVar4;
  
  pFVar1 = (this->DebugSimName).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->StatDatabase).CriticalSection.SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->StatDatabase).StatCaptures.field_0x48 = 0;
  pvVar2 = *(void **)&(this->StatDatabase).StatCaptures.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&this->StatDatabase);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->RuntimeEstimation).EstimationCriticalSection.SharedReferenceCount.
             ReferenceController);
  *(undefined4 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x48 = 0;
  pvVar2 = *(void **)&(this->RuntimeEstimation).RuntimeAllocations.field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->RuntimeEstimation);
  FVar4 = (this->BoundsCalculators).AllocatorInstance.SecondaryData;
  if (FVar4 == (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)0x0) {
    FVar4 = (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)&this->BoundsCalculators;
  }
  DestructItems<TSharedPtr<FNiagaraBoundsCalculator,1>,int>
            ((TSharedPtr<FNiagaraBoundsCalculator,1> *)FVar4,(this->BoundsCalculators).ArrayNum);
  FVar4 = (this->BoundsCalculators).AllocatorInstance.SecondaryData;
  if (FVar4 != (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)0x0) {
    FMemory::Free((void *)FVar4);
  }
  pFVar1 = (this->CurrentScalabilitySettings).Platforms.CVarConditions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CurrentScalabilitySettings).Platforms.DeviceProfileStates.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SharedEventGeneratorIds).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->SimStageExecutionData).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SimStageExecutionLoops).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SimulationStages).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RendererProperties).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  *(undefined4 *)&(this->ResolvedDIBindings).field_0x48 = 0;
  pvVar2 = *(void **)&(this->ResolvedDIBindings).field_0x40;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,FNiagaraVariableBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,FNiagaraVariableBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,FNiagaraVariableBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ResolvedDIBindings);
  pFVar1 = (this->RendererBindingsExternalObjects).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FNiagaraParameterStore::~FNiagaraParameterStore(&this->RendererBindings);
  DestructItems<FNiagaraEventGeneratorProperties,int>
            ((FNiagaraEventGeneratorProperties *)
             (this->SpawnScriptProps).EventGenerators.AllocatorInstance.Data,
             (this->SpawnScriptProps).EventGenerators.ArrayNum);
  pFVar1 = (this->SpawnScriptProps).EventGenerators.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SpawnScriptProps).EventReceivers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraEventGeneratorProperties,int>
            ((FNiagaraEventGeneratorProperties *)
             (this->UpdateScriptProps).EventGenerators.AllocatorInstance.Data,
             (this->UpdateScriptProps).EventGenerators.ArrayNum);
  pFVar1 = (this->UpdateScriptProps).EventGenerators.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->UpdateScriptProps).EventReceivers.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EmitterDependencies).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraEmitterScalabilityOverride,int>
            ((FNiagaraEmitterScalabilityOverride *)
             (this->ScalabilityOverrides).Overrides.AllocatorInstance.Data,
             (this->ScalabilityOverrides).Overrides.ArrayNum);
  pFVar1 = (this->ScalabilityOverrides).Overrides.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Platforms).CVarConditions.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Platforms).DeviceProfileStates.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FNiagaraEventScriptProperties,int>
            ((FNiagaraEventScriptProperties *)(this->EventHandlerScriptProps).AllocatorInstance.Data
             ,(this->EventHandlerScriptProps).ArrayNum);
  pFVar1 = (this->EventHandlerScriptProps).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar3 = (this->DeprecationMessage).TextData.Reference;
  if (pIVar3 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar3 + 0x10))();
  }
  return;
}

// operator= @ 14927be80

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FVersionedNiagaraEmitterData * __thiscall
FVersionedNiagaraEmitterData::operator=
          (FVersionedNiagaraEmitterData *this,FVersionedNiagaraEmitterData *param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  TArray<FNiagaraEventScriptProperties,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<FNiagaraDataInterfaceEmitterBinding,TSizedDefaultAllocator<32>_> *pTVar5;
  TArray<FNiagaraExternalUObjectInfo,TSizedDefaultAllocator<32>_> *pTVar6;
  TMap<FNiagaraVariableBase,FNiagaraVariableBase,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraVariableBase,FNiagaraVariableBase,0>_>
  *this_00;
  TArray<TObjectPtr<UNiagaraRendererProperties>,TSizedDefaultAllocator<32>_> *pTVar7;
  TArray<TObjectPtr<UNiagaraSimulationStageBase>,TSizedDefaultAllocator<32>_> *pTVar8;
  TArray<FNiagaraSimStageExecutionLoopData,TSizedDefaultAllocator<32>_> *pTVar9;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar10;
  TArray<TSharedPtr<FNiagaraBoundsCalculator,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar11;
  FMemoryRuntimeEstimation *this_01;
  undefined4 uVar12;
  int iVar13;
  ITextData *pIVar14;
  ITextData *pIVar15;
  FNiagaraEventScriptProperties *pFVar16;
  FScriptContainerElement *pFVar17;
  TReferenceControllerBase<1> *pTVar18;
  FNiagaraSimStageExecutionData *pFVar19;
  UNiagaraScript *pUVar20;
  FWindowsRecursiveMutex *pFVar21;
  uint uVar22;
  double dVar23;
  TReferenceControllerBase<1> *pTVar24;
  undefined3 uVar25;
  uchar uVar26;
  uchar uVar27;
  uchar uVar28;
  uchar uVar29;
  uchar uVar30;
  uchar uVar31;
  uchar uVar32;
  uint uVar33;
  ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_> FVar34;
  ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_> FVar35;
  undefined1 local_res8 [8];
  
  iVar13 = (param_1->Version).MinorVersion;
  uVar33 = (param_1->Version).VersionGuid.A;
  uVar22 = (param_1->Version).VersionGuid.B;
  (this->Version).MajorVersion = (param_1->Version).MajorVersion;
  (this->Version).MinorVersion = iVar13;
  (this->Version).VersionGuid.A = uVar33;
  (this->Version).VersionGuid.B = uVar22;
  uVar33 = (param_1->Version).VersionGuid.D;
  (this->Version).VersionGuid.C = (param_1->Version).VersionGuid.C;
  (this->Version).VersionGuid.D = uVar33;
  uVar25 = *(undefined3 *)&(param_1->Version).field_0x19;
  (this->Version).bIsVisibleInVersionSelector = (param_1->Version).bIsVisibleInVersionSelector;
  *(undefined3 *)&(this->Version).field_0x19 = uVar25;
  this->bDeprecated = param_1->bDeprecated;
  pIVar14 = (param_1->DeprecationMessage).TextData.Reference;
  pIVar15 = (this->DeprecationMessage).TextData.Reference;
  if (pIVar15 != pIVar14) {
    (this->DeprecationMessage).TextData.Reference = pIVar14;
    if (pIVar14 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar14 + 8))(pIVar14,local_res8);
    }
    if (pIVar15 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar15 + 0x10))(pIVar15);
    }
  }
  (this->DeprecationMessage).Flags = (param_1->DeprecationMessage).Flags;
  pTVar4 = &this->EventHandlerScriptProps;
  this->bLocalSpace = param_1->bLocalSpace;
  this->bDeterminism = param_1->bDeterminism;
  this->RandomSeed = param_1->RandomSeed;
  this->InterpolatedSpawnMode = param_1->InterpolatedSpawnMode;
  this->SimTarget = param_1->SimTarget;
  this->CalculateBoundsMode = param_1->CalculateBoundsMode;
  dVar23 = (param_1->FixedBounds).Min.field0_0x0._s_0.Y;
  (this->FixedBounds).Min.field0_0x0._s_0.X = (param_1->FixedBounds).Min.field0_0x0._s_0.X;
  (this->FixedBounds).Min.field0_0x0._s_0.Y = dVar23;
  dVar23 = (param_1->FixedBounds).Max.field0_0x0._s_0.X;
  (this->FixedBounds).Min.field0_0x0._s_0.Z = (param_1->FixedBounds).Min.field0_0x0._s_0.Z;
  (this->FixedBounds).Max.field0_0x0._s_0.X = dVar23;
  dVar23 = (param_1->FixedBounds).Max.field0_0x0._s_0.Z;
  (this->FixedBounds).Max.field0_0x0._s_0.Y = (param_1->FixedBounds).Max.field0_0x0._s_0.Y;
  (this->FixedBounds).Max.field0_0x0._s_0.Z = dVar23;
  uVar26 = (param_1->FixedBounds).Pad[0];
  uVar27 = (param_1->FixedBounds).Pad[1];
  uVar28 = (param_1->FixedBounds).Pad[2];
  uVar29 = (param_1->FixedBounds).Pad[3];
  uVar30 = (param_1->FixedBounds).Pad[4];
  uVar31 = (param_1->FixedBounds).Pad[5];
  uVar32 = (param_1->FixedBounds).Pad[6];
  (this->FixedBounds).IsValid = (param_1->FixedBounds).IsValid;
  (this->FixedBounds).Pad[0] = uVar26;
  (this->FixedBounds).Pad[1] = uVar27;
  (this->FixedBounds).Pad[2] = uVar28;
  (this->FixedBounds).Pad[3] = uVar29;
  (this->FixedBounds).Pad[4] = uVar30;
  (this->FixedBounds).Pad[5] = uVar31;
  (this->FixedBounds).Pad[6] = uVar32;
  *(uint *)&this->field_0x78 =
       *(uint *)&this->field_0x78 ^
       (this->bRequiresPersistentIDs ^ param_1->bRequiresPersistentIDs) & 1;
  if (pTVar4 != &param_1->EventHandlerScriptProps) {
    DestructItems<FNiagaraEventScriptProperties,int>
              ((FNiagaraEventScriptProperties *)(pTVar4->AllocatorInstance).Data,
               (this->EventHandlerScriptProps).ArrayNum);
    iVar13 = (param_1->EventHandlerScriptProps).ArrayNum;
    piVar1 = &(this->EventHandlerScriptProps).ArrayMax;
    pFVar16 = (FNiagaraEventScriptProperties *)
              (param_1->EventHandlerScriptProps).AllocatorInstance.Data;
    (this->EventHandlerScriptProps).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,iVar13,*piVar1,&pTVar4->AllocatorInstance,iVar13,piVar1);
      ConstructItems<FNiagaraEventScriptProperties,FNiagaraEventScriptProperties,int>
                ((pTVar4->AllocatorInstance).Data,pFVar16,iVar13);
    }
  }
  FNiagaraPlatformSet::operator=(&this->Platforms,&param_1->Platforms);
  FNiagaraEmitterScalabilityOverrides::operator=
            (&this->ScalabilityOverrides,&param_1->ScalabilityOverrides);
  this->MaxGPUParticlesSpawnPerFrame = param_1->MaxGPUParticlesSpawnPerFrame;
  pTVar5 = &this->EmitterDependencies;
  this->AllocationMode = param_1->AllocationMode;
  this->PreAllocationCount = param_1->PreAllocationCount;
  if (pTVar5 != &param_1->EmitterDependencies) {
    iVar13 = (param_1->EmitterDependencies).ArrayNum;
    piVar1 = &(this->EmitterDependencies).ArrayMax;
    pFVar17 = (param_1->EmitterDependencies).AllocatorInstance.Data;
    (this->EmitterDependencies).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,iVar13,*piVar1,&pTVar5->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar5->AllocatorInstance).Data,pFVar17,(longlong)iVar13 * 0xc);
      }
    }
  }
  FNiagaraEmitterScriptProperties::operator=(&this->UpdateScriptProps,&param_1->UpdateScriptProps);
  FNiagaraEmitterScriptProperties::operator=(&this->SpawnScriptProps,&param_1->SpawnScriptProps);
  FNiagaraParameterStore::operator=(&this->RendererBindings,&param_1->RendererBindings);
  pTVar6 = &this->RendererBindingsExternalObjects;
  if (pTVar6 != &param_1->RendererBindingsExternalObjects) {
    iVar13 = (param_1->RendererBindingsExternalObjects).ArrayNum;
    piVar1 = &(this->RendererBindingsExternalObjects).ArrayMax;
    pFVar17 = (param_1->RendererBindingsExternalObjects).AllocatorInstance.Data;
    (this->RendererBindingsExternalObjects).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar13,*piVar1,&pTVar6->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar6->AllocatorInstance).Data,pFVar17,(longlong)iVar13 * 0x14);
      }
    }
  }
  this_00 = &this->ResolvedDIBindings;
  if (this_00 != &param_1->ResolvedDIBindings) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->ResolvedDIBindings).field_0x38,
               (int *)&(this->ResolvedDIBindings).field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->ResolvedDIBindings).field_0x38,
               *(int *)&(param_1->ResolvedDIBindings).field_0x48);
    iVar13 = *(int *)&(param_1->ResolvedDIBindings).field_0x8;
    TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,FNiagaraVariableBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<FNiagaraVariableBase,FNiagaraVariableBase>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_00,iVar13);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,4,iVar13,(ForAnyElementType *)this_00,
               (int *)&(this->ResolvedDIBindings).field_0x8,
               (int *)&(this->ResolvedDIBindings).field_0xc);
    puVar2 = &(param_1->ResolvedDIBindings).field_0x10;
    puVar3 = &(this->ResolvedDIBindings).field_0x10;
    *(undefined4 *)&(this->ResolvedDIBindings).field_0x30 =
         *(undefined4 *)&(param_1->ResolvedDIBindings).field_0x30;
    *(undefined4 *)&(this->ResolvedDIBindings).field_0x34 =
         *(undefined4 *)&(param_1->ResolvedDIBindings).field_0x34;
    if (puVar3 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (iVar13 != 0) {
      memcpy(*(void **)this_00,*(void **)&param_1->ResolvedDIBindings,(longlong)iVar13 << 5);
    }
  }
  pTVar7 = &this->RendererProperties;
  if (pTVar7 != &param_1->RendererProperties) {
    iVar13 = (param_1->RendererProperties).ArrayNum;
    piVar1 = &(this->RendererProperties).ArrayMax;
    pFVar17 = (param_1->RendererProperties).AllocatorInstance.Data;
    (this->RendererProperties).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar13,*piVar1,&pTVar7->AllocatorInstance,iVar13,piVar1);
      ConstructItems<TObjectPtr<UNiagaraRendererProperties>,TObjectPtr<UNiagaraRendererProperties>,int>
                ((pTVar7->AllocatorInstance).Data,(TObjectPtr<UNiagaraRendererProperties> *)pFVar17,
                 iVar13);
    }
  }
  pTVar8 = &this->SimulationStages;
  if (pTVar8 != &param_1->SimulationStages) {
    iVar13 = (param_1->SimulationStages).ArrayNum;
    piVar1 = &(this->SimulationStages).ArrayMax;
    pFVar17 = (param_1->SimulationStages).AllocatorInstance.Data;
    (this->SimulationStages).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar13,*piVar1,&pTVar8->AllocatorInstance,iVar13,piVar1);
      ConstructItems<TObjectPtr<UNiagaraSimulationStageBase>,TObjectPtr<UNiagaraSimulationStageBase>,int>
                ((pTVar8->AllocatorInstance).Data,(TObjectPtr<UNiagaraSimulationStageBase> *)pFVar17
                 ,iVar13);
    }
  }
  pTVar9 = &this->SimStageExecutionLoops;
  if (pTVar9 != &param_1->SimStageExecutionLoops) {
    iVar13 = (param_1->SimStageExecutionLoops).ArrayNum;
    piVar1 = &(this->SimStageExecutionLoops).ArrayMax;
    pFVar17 = (param_1->SimStageExecutionLoops).AllocatorInstance.Data;
    (this->SimStageExecutionLoops).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x14,4,iVar13,*piVar1,&pTVar9->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar9->AllocatorInstance).Data,pFVar17,(longlong)iVar13 * 0x14);
      }
    }
  }
  pTVar18 = (param_1->SimStageExecutionData).SharedReferenceCount.ReferenceController;
  pFVar19 = (param_1->SimStageExecutionData).Object;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar24 = (this->SimStageExecutionData).SharedReferenceCount.ReferenceController;
  (this->SimStageExecutionData).Object = pFVar19;
  (this->SimStageExecutionData).SharedReferenceCount.ReferenceController = pTVar18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (pUVar20 = (param_1->GPUComputeScript).field0_0x0.DebugPtr, pUVar20 != (UNiagaraScript *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar20);
  }
  pTVar10 = &this->SharedEventGeneratorIds;
  (this->GPUComputeScript).field0_0x0 = (param_1->GPUComputeScript).field0_0x0;
  if (pTVar10 != &param_1->SharedEventGeneratorIds) {
    iVar13 = (param_1->SharedEventGeneratorIds).ArrayNum;
    piVar1 = &(this->SharedEventGeneratorIds).ArrayMax;
    pFVar17 = (param_1->SharedEventGeneratorIds).AllocatorInstance.Data;
    (this->SharedEventGeneratorIds).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,iVar13,*piVar1,&pTVar10->AllocatorInstance,iVar13,piVar1);
      if (iVar13 != 0) {
        memcpy((pTVar10->AllocatorInstance).Data,pFVar17,(longlong)iVar13 << 3);
      }
    }
  }
  FNiagaraPlatformSet::operator=
            (&(this->CurrentScalabilitySettings).Platforms,
             &(param_1->CurrentScalabilitySettings).Platforms);
  pTVar11 = &this->BoundsCalculators;
  puVar2 = &(this->CurrentScalabilitySettings).field_0x30;
  *(uint *)puVar2 =
       *(uint *)puVar2 ^
       ((this->CurrentScalabilitySettings).bScaleSpawnCount ^
       (param_1->CurrentScalabilitySettings).bScaleSpawnCount) & 1;
  (this->CurrentScalabilitySettings).SpawnCountScale =
       (param_1->CurrentScalabilitySettings).SpawnCountScale;
  uVar33 = (ZPULL(*(undefined4 *)&this->field_0x2b8,0,1) ^ param_1->bIsAllowedToExecute) & 1 ^
           *(undefined4 *)&this->field_0x2b8;
  *(uint *)&this->field_0x2b8 = uVar33;
  uVar33 = (uVar33 ^ *(uint *)&param_1->field_0x2b8) & 2 ^ uVar33;
  *(uint *)&this->field_0x2b8 = uVar33;
  *(uint *)&this->field_0x2b8 = (uVar33 ^ *(uint *)&param_1->field_0x2b8) & 4 ^ uVar33;
  this->MaxInstanceCount = param_1->MaxInstanceCount;
  this->MaxAllocationCount = param_1->MaxAllocationCount;
  if (this != param_1) {
    FVar34 = (this->BoundsCalculators).AllocatorInstance.SecondaryData;
    if (FVar34 == (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)0x0) {
      FVar34 = (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)pTVar11;
    }
    DestructItems<TSharedPtr<FNiagaraBoundsCalculator,1>,int>
              ((TSharedPtr<FNiagaraBoundsCalculator,1> *)FVar34,(this->BoundsCalculators).ArrayNum);
    FVar34 = (param_1->BoundsCalculators).AllocatorInstance.SecondaryData;
    piVar1 = &(this->BoundsCalculators).ArrayMax;
    iVar13 = (param_1->BoundsCalculators).ArrayNum;
    if (FVar34 == (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)0x0) {
      FVar34 = (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)&param_1->BoundsCalculators;
    }
    (this->BoundsCalculators).ArrayNum = iVar13;
    if ((iVar13 == 0) && (*piVar1 == 0)) {
      *piVar1 = 1;
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>_>
                (0x10,8,iVar13,*piVar1,&pTVar11->AllocatorInstance,iVar13,piVar1);
      FVar35 = (this->BoundsCalculators).AllocatorInstance.SecondaryData;
      if (FVar35 == (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)0x0) {
        FVar35 = (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)pTVar11;
      }
      ConstructItems<TSharedPtr<FNiagaraBoundsCalculator,1>,TSharedPtr<FNiagaraBoundsCalculator,1>,int>
                ((void *)FVar35,(TSharedPtr<FNiagaraBoundsCalculator,1> *)FVar34,iVar13);
    }
  }
  this_01 = &this->RuntimeEstimation;
  if (this_01 != &param_1->RuntimeEstimation) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)
               &(this->RuntimeEstimation).RuntimeAllocations.field_0x38,
               (int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x48,
               (ForElementType<FSetElementId> *)
               &(param_1->RuntimeEstimation).RuntimeAllocations.field_0x38,
               *(int *)&(param_1->RuntimeEstimation).RuntimeAllocations.field_0x48);
    iVar13 = *(int *)&(param_1->RuntimeEstimation).RuntimeAllocations.field_0x8;
    TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Empty((TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)this_01,iVar13);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,iVar13,(ForAnyElementType *)this_01,
               (int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x8,
               (int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0xc);
    puVar2 = &(param_1->RuntimeEstimation).RuntimeAllocations.field_0x10;
    puVar3 = &(this->RuntimeEstimation).RuntimeAllocations.field_0x10;
    *(undefined4 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x30 =
         *(undefined4 *)&(param_1->RuntimeEstimation).RuntimeAllocations.field_0x30;
    *(undefined4 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x34 =
         *(undefined4 *)&(param_1->RuntimeEstimation).RuntimeAllocations.field_0x34;
    if (puVar3 != puVar2) {
      TBitArray<FDefaultBitArrayAllocator>::Assign<FDefaultBitArrayAllocator>
                ((TBitArray<FDefaultBitArrayAllocator> *)puVar3,
                 (TBitArray<FDefaultBitArrayAllocator> *)puVar2);
    }
    if (iVar13 != 0) {
      memcpy(*(void **)&this_01->RuntimeAllocations,
             *(void **)&(param_1->RuntimeEstimation).RuntimeAllocations,(longlong)iVar13 * 0x18);
    }
  }
  (this->RuntimeEstimation).IsEstimationDirty = (param_1->RuntimeEstimation).IsEstimationDirty;
  (this->RuntimeEstimation).AllocationEstimate = (param_1->RuntimeEstimation).AllocationEstimate;
  pTVar18 = (param_1->RuntimeEstimation).EstimationCriticalSection.SharedReferenceCount.
            ReferenceController;
  pFVar21 = (param_1->RuntimeEstimation).EstimationCriticalSection.Object;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar24 = (this->RuntimeEstimation).EstimationCriticalSection.SharedReferenceCount.
            ReferenceController;
  (this->RuntimeEstimation).EstimationCriticalSection.Object = pFVar21;
  (this->RuntimeEstimation).EstimationCriticalSection.SharedReferenceCount.ReferenceController =
       pTVar18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  if (&this->StatDatabase != &param_1->StatDatabase) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&(this->StatDatabase).StatCaptures.field_0x38,
               (int *)&(this->StatDatabase).StatCaptures.field_0x48,
               (ForElementType<FSetElementId> *)&(param_1->StatDatabase).StatCaptures.field_0x38,
               *(int *)&(param_1->StatDatabase).StatCaptures.field_0x48);
    TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned___int64,enum_ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=(&this->StatDatabase,
                (TSparseArray<TSparseSetElement<TTuple<TTuple<unsigned___int64,ENiagaraScriptUsage>,TMap<TStatIdData_const_*,FStatExecutionTimer,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TStatIdData_const_*,FStatExecutionTimer,0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&param_1->StatDatabase);
  }
  pTVar18 = (param_1->StatDatabase).CriticalSection.SharedReferenceCount.ReferenceController;
  pFVar21 = (param_1->StatDatabase).CriticalSection.Object;
  if (pTVar18 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar18->SharedReferenceCount = (atomic<int>)((int)pTVar18->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar24 = (this->StatDatabase).CriticalSection.SharedReferenceCount.ReferenceController;
  (this->StatDatabase).CriticalSection.Object = pFVar21;
  (this->StatDatabase).CriticalSection.SharedReferenceCount.ReferenceController = pTVar18;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar24);
  ::FString::operator=(&this->DebugSimName,&param_1->DebugSimName);
  this->PSOPrecacheResult = param_1->PSOPrecacheResult;
  if (&param_1->IsValidCached != &this->IsValidCached) {
    if ((param_1->IsValidCached).bIsSet == false) {
      if ((this->IsValidCached).bIsSet != false) {
        (this->IsValidCached).bIsSet = false;
      }
    }
    else {
      (this->IsValidCached).TypedValue = (param_1->IsValidCached).TypedValue;
      (this->IsValidCached).bIsSet = true;
    }
  }
  if (&param_1->IsReadyToRunCached != &this->IsReadyToRunCached) {
    if ((param_1->IsReadyToRunCached).bIsSet == false) {
      if ((this->IsReadyToRunCached).bIsSet != false) {
        (this->IsReadyToRunCached).bIsSet = false;
      }
    }
    else {
      (this->IsReadyToRunCached).TypedValue = (param_1->IsReadyToRunCached).TypedValue;
      (this->IsReadyToRunCached).bIsSet = true;
    }
  }
  return this;
}

// AddRuntimeAllocation @ 149284830

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FVersionedNiagaraEmitterData::AddRuntimeAllocation
          (FVersionedNiagaraEmitterData *this,ulong64 param_1,int param_2)

{
  FMemoryRuntimeEstimation *this_00;
  longlong lVar1;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  TPairInitializer<unsigned___int64_const_&,int_const_&> local_res8;
  int local_res18 [2];
  ulong64 local_res20;
  TArray<unsigned___int64,TSizedDefaultAllocator<32>_> local_58;
  int **local_48;
  int *local_40;
  
  this_00 = &this->RuntimeEstimation;
  local_res8.Value = (int *)param_1;
  local_res18[0] = param_2;
  if (((this->RuntimeEstimation).EstimationCriticalSection.Object == (FWindowsRecursiveMutex *)0x0)
     && (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8166792025996259970>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitter.cpp"
                            ,0xd7e,"EstimationCriticalSection.IsValid()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    iVar5 = (*pcVar3)();
    return iVar5;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(this->RuntimeEstimation).EstimationCriticalSection.Object
  ;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  if (*(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x8 !=
      *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x34) {
    puVar8 = *(undefined1 **)&(this->RuntimeEstimation).RuntimeAllocations.field_0x40;
    if (puVar8 == (undefined1 *)0x0) {
      puVar8 = &(this->RuntimeEstimation).RuntimeAllocations.field_0x38;
    }
    iVar5 = *(int *)(puVar8 + (((ulonglong)local_res8.Value >> 0x20) * 0x17 +
                               (longlong)local_res8.Value &
                              (ulonglong)
                              (*(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x48 - 1)
                              ) * 4);
    if (iVar5 != -1) {
      do {
        lVar1 = *(longlong *)&this_00->RuntimeAllocations + (longlong)iVar5 * 0x18;
        if (*(int **)(*(longlong *)&this_00->RuntimeAllocations + (longlong)iVar5 * 0x18) ==
            local_res8.Value) {
          piVar7 = (int *)(lVar1 + 8);
          if (lVar1 == 0) {
            piVar7 = (int *)0x0;
          }
          if ((piVar7 != (int *)0x0) && (local_res18[0] <= *piVar7)) goto LAB_149284a6b;
          break;
        }
        iVar5 = *(int *)(lVar1 + 0x10);
      } while (iVar5 != -1);
    }
  }
  local_48 = &local_res8.Value;
  local_40 = local_res18;
  TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<unsigned___int64_const_&,int_const_&>_>
            ((TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
              *)this_00,&local_res8,(bool *)&local_48);
  (this->RuntimeEstimation).IsEstimationDirty = true;
  if (10 < *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x8 -
           *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x34) {
    local_58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.ArrayNum = 0;
    local_58.ArrayMax = 0;
    TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
    ::GetKeys<TSizedDefaultAllocator<32>_>
              ((TMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>
                *)this_00,&local_58);
    iVar5 = local_58.ArrayNum;
    uVar9 = 0;
    if (0 < local_58.ArrayNum) {
      uVar9 = local_58.ArrayNum - 1;
      uVar6 = rand();
      uVar6 = (uint)((float)(uVar6 & 0x7fff) * (float)iVar5 * __real_38000100);
      if ((int)uVar6 < (int)uVar9) {
        uVar9 = uVar6;
      }
    }
    uVar6 = 0;
    if ((int)uVar9 < local_58.ArrayNum) {
      uVar6 = ~uVar9 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      iVar5 = (*pcVar3)();
      return iVar5;
    }
    local_res20 = *(ulong64 *)(local_58.AllocatorInstance.Data + (longlong)(int)uVar9 * 8);
    if (*(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x8 !=
        *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x34) {
      TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
                  *)this_00,(int)(local_res20 >> 0x20) * 0x17 + (int)local_res20,&local_res20);
    }
    if (local_58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.AllocatorInstance.Data);
    }
  }
LAB_149284a6b:
  iVar5 = *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x8;
  iVar2 = *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x34;
  LeaveCriticalSection(lpCriticalSection);
  return iVar5 - iVar2;
}

// BuildParameterStoreRendererBindings @ 149285db0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FVersionedNiagaraEmitterData::BuildParameterStoreRendererBindings
          (FVersionedNiagaraEmitterData *this,FNiagaraParameterStore *param_1)

{
  char *pcVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  longlong *plVar4;
  UNiagaraScript *pUVar5;
  code *pcVar6;
  byte bVar7;
  byte bVar8;
  char *pcVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  char *local_58;
  int local_50;
  longlong local_48;
  FNiagaraTypeDefinitionHandle local_40 [2];
  void *local_38;
  undefined8 local_30;
  
  pFVar10 = (this->RendererProperties).AllocatorInstance.Data;
  iVar3 = (this->RendererProperties).ArrayNum;
  bVar8 = 0;
  pFVar2 = pFVar10 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->RendererProperties).ArrayNum != iVar3) {
      `TCheckedPointerIterator<UNiagaraRendererProperties_*_const,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar2) break;
    plVar4 = *(longlong **)pFVar10;
    if ((plVar4 != (longlong *)0x0) && (*(char *)((longlong)plVar4 + 0x5d) != '\0')) {
      bVar7 = (**(code **)(*plVar4 + 0x2f8))(plVar4,param_1);
      bVar8 = bVar8 | bVar7;
    }
    pFVar10 = pFVar10 + 8;
  }
  pUVar5 = (this->GPUComputeScript).field0_0x0.DebugPtr;
  if (pUVar5 != (UNiagaraScript *)0x0) {
    (**(code **)(pUVar5->_padding_ + 0x2c0))(pUVar5,&local_58);
    if (local_58 != local_58 + (longlong)local_50 * 0xa8) {
      pcVar9 = local_58 + 0x34;
      do {
        if (*(longlong *)(pcVar9 + -0x2c) != 0) {
          pcVar6 = *(code **)(param_1->_padding_ + 0x10);
          local_48 = *(longlong *)(pcVar9 + -0x2c);
          local_40[0].RegisteredTypeIndex =
               FNiagaraTypeDefinitionHandle::Register(local_40,&FNiagaraTypeDefinition::BoolDef);
          local_38 = (void *)0x0;
          local_30 = 0;
          bVar7 = (*pcVar6)(param_1,&local_48,0,1,0);
          bVar8 = bVar8 | bVar7;
          if (local_38 != (void *)0x0) {
            FMemory::Free(local_38);
          }
        }
        if (*pcVar9 == '\x02') {
          if (*(longlong *)(pcVar9 + -0x18) != 0) {
            pcVar6 = *(code **)(param_1->_padding_ + 0x10);
            local_48 = *(longlong *)(pcVar9 + -0x18);
            local_40[0].RegisteredTypeIndex =
                 FNiagaraTypeDefinitionHandle::Register(local_40,&FNiagaraTypeDefinition::IntDef);
            local_38 = (void *)0x0;
            local_30 = 0;
            bVar7 = (*pcVar6)(param_1,&local_48,0,1,0);
            bVar8 = bVar8 | bVar7;
            if (local_38 != (void *)0x0) {
              FMemory::Free(local_38);
            }
          }
          if (*(longlong *)(pcVar9 + -0x10) != 0) {
            pcVar6 = *(code **)(param_1->_padding_ + 0x10);
            local_48 = *(longlong *)(pcVar9 + -0x10);
            local_40[0].RegisteredTypeIndex =
                 FNiagaraTypeDefinitionHandle::Register(local_40,&FNiagaraTypeDefinition::IntDef);
            local_38 = (void *)0x0;
            local_30 = 0;
            bVar7 = (*pcVar6)(param_1,&local_48,0,1,0);
            bVar8 = bVar8 | bVar7;
            if (local_38 != (void *)0x0) {
              FMemory::Free(local_38);
            }
          }
          if (*(longlong *)(pcVar9 + -8) != 0) {
            pcVar6 = *(code **)(param_1->_padding_ + 0x10);
            local_48 = *(longlong *)(pcVar9 + -8);
            local_40[0].RegisteredTypeIndex =
                 FNiagaraTypeDefinitionHandle::Register(local_40,&FNiagaraTypeDefinition::IntDef);
            local_38 = (void *)0x0;
            local_30 = 0;
            bVar7 = (*pcVar6)(param_1,&local_48,0,1,0);
            bVar8 = bVar8 | bVar7;
            if (local_38 != (void *)0x0) {
              FMemory::Free(local_38);
            }
          }
        }
        if (*(longlong *)(pcVar9 + 0x58) != 0) {
          pcVar6 = *(code **)(param_1->_padding_ + 0x10);
          local_48 = *(longlong *)(pcVar9 + 0x58);
          local_40[0].RegisteredTypeIndex =
               FNiagaraTypeDefinitionHandle::Register(local_40,&FNiagaraTypeDefinition::IntDef);
          local_38 = (void *)0x0;
          local_30 = 0;
          bVar7 = (*pcVar6)(param_1,&local_48,0,1,0);
          bVar8 = bVar8 | bVar7;
          if (local_38 != (void *)0x0) {
            FMemory::Free(local_38);
          }
        }
        pcVar1 = pcVar9 + 0x74;
        pcVar9 = pcVar9 + 0xa8;
      } while (pcVar1 != local_58 + (longlong)local_50 * 0xa8);
    }
    iVar3 = (this->SimStageExecutionLoops).ArrayNum;
    pFVar10 = (this->SimStageExecutionLoops).AllocatorInstance.Data;
    pFVar2 = pFVar10 + (longlong)iVar3 * 0x14;
    while( true ) {
      if ((this->SimStageExecutionLoops).ArrayNum != iVar3) {
        `TCheckedPointerIterator<FNiagaraSimStageExecutionLoopData_const_,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res8);
      }
      if (pFVar10 == pFVar2) break;
      if (*(longlong *)pFVar10 != 0) {
        pcVar6 = *(code **)(param_1->_padding_ + 0x10);
        local_48 = *(longlong *)pFVar10;
        local_40[0].RegisteredTypeIndex =
             FNiagaraTypeDefinitionHandle::Register(local_40,&FNiagaraTypeDefinition::IntDef);
        local_38 = (void *)0x0;
        local_30 = 0;
        bVar7 = (*pcVar6)(param_1,&local_48,0,1,0);
        bVar8 = bVar8 | bVar7;
        if (local_38 != (void *)0x0) {
          FMemory::Free(local_38);
        }
      }
      pFVar10 = pFVar10 + 0x14;
    }
  }
  return (bool)bVar8;
}

// CacheFromCompiledData @ 1492861b0

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
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
FVersionedNiagaraEmitterData::CacheFromCompiledData
          (FVersionedNiagaraEmitterData *this,FNiagaraDataSetCompiledData *param_1,
          UNiagaraEmitter *param_2)

{
  uchar *puVar1;
  undefined1 *puVar2;
  TArray<TSharedPtr<FNiagaraBoundsCalculator,1>,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>
  *pTVar3;
  undefined1 *puVar4;
  int iVar5;
  UNiagaraScript *pUVar6;
  FNiagaraShaderScript *pFVar7;
  UNiagaraRendererProperties *this_00;
  FSimulationStageMetaData *pFVar8;
  FNiagaraShaderScriptParametersMetadata *pFVar9;
  FShaderParametersMetadata *pFVar10;
  undefined1 auVar11 [16];
  code *pcVar12;
  TRHIGlobal<unsigned___int64> TVar13;
  FName FVar14;
  char cVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  longlong *plVar19;
  undefined8 *puVar20;
  FNiagaraVariableLayoutInfo *pFVar21;
  uint uVar22;
  ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_> FVar23;
  ulonglong uVar24;
  TRHIGlobal<unsigned___int64> TVar25;
  FName FVar26;
  TReferenceControllerBase<1> *pTVar27;
  TArray<FSimulationStageMetaData,TSizedDefaultAllocator<32>_> *pTVar28;
  FScriptContainerElement *pFVar29;
  ForElementType<FNiagaraSimStageExecutionLoopData> _Dst;
  TArray<FSimulationStageMetaData,TSizedDefaultAllocator<32>_> *pTVar30;
  ForAnyElementType FVar31;
  FNiagaraDataSetCompiledData *this_01;
  int *piVar32;
  ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_> FVar33;
  FScriptContainerElement *pFVar34;
  FNiagaraSimStageExecutionData *pFVar35;
  UNiagaraEmitter *pUVar36;
  undefined1 local_res8 [8];
  FNiagaraDataSetCompiledData *local_res10;
  UNiagaraEmitter *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_b8;
  undefined1 local_b7 [3];
  uint local_b4;
  FNiagaraVariableBase local_b0;
  FNiagaraSimStageExecutionData *local_a0;
  FSharedReferencer<1> FStack_98;
  undefined8 local_90;
  FSharedReferencer<1> FStack_88;
  FString local_80;
  FString local_70;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> local_60 [2];
  
  pTVar3 = &this->BoundsCalculators;
  puVar4 = &this->field_0x2b8;
  this->bIsAllowedToExecute = 1;
  this->bNeedsPartialDepthTexture = 0;
  this->bRequiresViewUniformBuffer = 0;
  this->MaxInstanceCount = 0;
  this->MaxAllocationCount = 0;
  FVar23 = (this->BoundsCalculators).AllocatorInstance.SecondaryData;
  if (FVar23 == (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)0x0) {
    FVar23 = (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)pTVar3;
  }
  local_res10 = param_1;
  local_res18 = param_2;
  DestructItems<TSharedPtr<FNiagaraBoundsCalculator,1>,int>
            ((TSharedPtr<FNiagaraBoundsCalculator,1> *)FVar23,(this->BoundsCalculators).ArrayNum);
  piVar32 = &(this->BoundsCalculators).ArrayMax;
  (this->BoundsCalculators).ArrayNum = 0;
  if (*piVar32 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>_>
              (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar32);
  }
  pFVar34 = (this->RendererProperties).AllocatorInstance.Data;
  iVar17 = (this->RendererProperties).ArrayNum;
  pFVar29 = pFVar34 + (longlong)iVar17 * 8;
  while( true ) {
    if ((this->RendererProperties).ArrayNum != iVar17) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UNiagaraRendererProperties>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar34 == pFVar29) break;
    (**(code **)(**(longlong **)pFVar34 + 0x328))();
    pFVar34 = pFVar34 + 8;
  }
  if ((this->CalculateBoundsMode == Dynamic) && (this->SimTarget == CPUSim)) {
    uVar22 = (this->RendererProperties).ArrayNum;
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    if ((this->BoundsCalculators).ArrayMax < (int)uVar22) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>_>
                (0x10,8,uVar22,&pTVar3->AllocatorInstance,(this->BoundsCalculators).ArrayNum,
                 &(this->BoundsCalculators).ArrayMax);
    }
    local_b4 = (this->RendererProperties).ArrayNum;
    uVar24 = (ulonglong)(int)local_b4;
    FVar26 = (FName)(this->RendererProperties).AllocatorInstance.Data;
    local_b0.Name = (FName)((longlong)FVar26 + uVar24 * 8);
    while( true ) {
      FVar14 = local_b0.Name;
      piVar32 = &(this->BoundsCalculators).ArrayMax;
      if ((this->RendererProperties).ArrayNum != (int)uVar24) {
        local_res20[0] = 0;
        `TCheckedPointerIterator<TObjectPtr<UNiagaraRendererProperties>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res20);
      }
      if (FVar26 == FVar14) break;
      plVar19 = *(longlong **)FVar26;
      if (((plVar19 != (longlong *)0x0) &&
          (cVar15 = (**(code **)(*plVar19 + 0x318))(plVar19), cVar15 != '\0')) &&
         (plVar19 = (longlong *)(**(code **)(*plVar19 + 0x2b8))(plVar19), plVar19 != (longlong *)0x0
         )) {
        (**(code **)(*plVar19 + 8))(plVar19);
        iVar17 = (this->BoundsCalculators).ArrayNum;
        if (iVar17 == *piVar32) {
          iVar17 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>_>
                             (0x810,&pTVar3->AllocatorInstance,piVar32);
        }
        (this->BoundsCalculators).ArrayNum = iVar17 + 1;
        FVar23 = (this->BoundsCalculators).AllocatorInstance.SecondaryData;
        FVar33 = (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)pTVar3;
        if (FVar23 != (ForElementType<TSharedPtr<FNiagaraBoundsCalculator,1>_>)0x0) {
          FVar33 = FVar23;
        }
        *(longlong **)((longlong)FVar33 + (longlong)iVar17 * 0x10) = plVar19;
        puVar20 = ::operator_new(0x18);
        if (puVar20 != (undefined8 *)0x0) {
          puVar20[2] = plVar19;
          *(undefined4 *)(puVar20 + 1) = 1;
          *(undefined4 *)((longlong)puVar20 + 0xc) = 1;
          *puVar20 = &
                     ___7__TReferenceControllerWithDeleter_VFNiagaraBoundsCalculator__U__DefaultDeleter_VFNiagaraBoundsCalculator___SharedPointerInternals___00_SharedPointerInternals__6B_
          ;
        }
        *(undefined8 **)((uchar *)((longlong)FVar33 + 8) + (longlong)iVar17 * 0x10) = puVar20;
      }
      uVar24 = (ulonglong)local_b4;
      FVar26 = (FName)((longlong)FVar26 + 8);
    }
  }
  this->bRequiresViewUniformBuffer = 0;
  this->bNeedsPartialDepthTexture = 0;
  pUVar6 = (this->GPUComputeScript).field0_0x0.DebugPtr;
  if (((pUVar6 != (UNiagaraScript *)0x0) && (this->SimTarget == GPUComputeSim)) &&
     ((pFVar7 = (pUVar6->ScriptResource).Object, pFVar7 != (FNiagaraShaderScript *)0x0 &&
      (iVar17 = 0, 0 < pFVar7->NumPermutations)))) {
    do {
      FNiagaraShaderScript::GetShaderGameThread(pFVar7,local_60,iVar17);
      if (local_60[0].ShaderContent != (FNiagaraShader *)0x0) {
        uVar22 = ((uint)(local_60[0].ShaderContent)->bNeedsViewUniformBuffer * 2 |
                 *(uint *)&this->field_0x2b8) & 2 ^ *(uint *)&this->field_0x2b8 & 0xfffffffd;
        *(uint *)&this->field_0x2b8 = uVar22;
        *(uint *)&this->field_0x2b8 =
             ((uint)(local_60[0].ShaderContent)->MiscUsageBitMask << 2 | uVar22) & 4 ^
             uVar22 & 0xfffffffb;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < pFVar7->NumPermutations);
  }
  if (local_res10 == (FNiagaraDataSetCompiledData *)0x0) {
    this->MaxInstanceCount = 0;
    this_01 = local_res10;
  }
  else {
    uVar22 = 1;
    if (this->SimTarget == CPUSim) {
      pFVar34 = (this->RendererProperties).AllocatorInstance.Data;
      iVar17 = (this->RendererProperties).ArrayNum;
      pFVar29 = pFVar34 + (longlong)iVar17 * 8;
      while( true ) {
        if ((this->RendererProperties).ArrayNum != iVar17) {
          local_b8 = 0;
          `TCheckedPointerIterator<TObjectPtr<UNiagaraRendererProperties>_const_,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(&local_b8);
        }
        if (pFVar34 == pFVar29) break;
        this_00 = *(UNiagaraRendererProperties **)pFVar34;
        uVar18 = uVar22;
        if ((((this_00 != (UNiagaraRendererProperties *)0x0) &&
             (cVar15 = (**(code **)(this_00->_padding_ + 0x318))(this_00), cVar15 != '\0')) &&
            (cVar15 = (**(code **)(this_00->_padding_ + 0x2e8))(this_00), cVar15 != '\0')) &&
           (uVar18 = UNiagaraRendererProperties::ComputeMaxUsedComponents(this_00,local_res10),
           uVar18 < uVar22)) {
          uVar18 = uVar22;
        }
        uVar22 = uVar18;
        pFVar34 = pFVar34 + 8;
      }
    }
    else {
      uVar18 = local_res10->TotalInt32Components;
      if (local_res10->TotalInt32Components < local_res10->TotalFloatComponents) {
        uVar18 = local_res10->TotalFloatComponents;
      }
      uVar22 = local_res10->TotalHalfComponents;
      if (local_res10->TotalHalfComponents < uVar18) {
        uVar22 = uVar18;
      }
      if (uVar22 == 0) {
        uVar22 = 1;
      }
    }
    this_01 = local_res10;
    TVar13.Value = GRHIGlobals.MaxViewDimensionForTypedBuffer.Value;
    TVar25.Value = (longlong)GNiagaraEmitterMaxGPUBufferElements;
    if (GNiagaraEmitterMaxGPUBufferElements < 1) {
      TVar25.Value = GRHIGlobals.MaxViewDimensionForTypedBuffer.Value;
    }
    iVar17 = 0x7fffffff;
    if ((longlong)TVar25.Value < 0x7fffffff) {
      iVar17 = (int)TVar25.Value;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (longlong)iVar17;
    uVar18 = 0xffffffff;
    if (SUB168(auVar11 / ZEXT416(uVar22),0) < 0xffffffff) {
      uVar18 = SUB164(auVar11 / ZEXT416(uVar22),0);
    }
    this->MaxAllocationCount = uVar18;
    this->MaxInstanceCount = uVar18;
    if (this->SimTarget == GPUComputeSim) {
      this->MaxAllocationCount = uVar18 & 0xffffffc0;
      if ((((uVar18 & 0xffffffc0) < 0x40) &&
          (this->MaxAllocationCount = 0x40, TVar13.Value < uVar22 << 6)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("MaxAllocationCount * MaxGPUBufferComponents <= MaxViewDimensionForTypedBuffer"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitter.cpp"
                              ,0x6bf,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      uVar18 = this->MaxAllocationCount - 1;
      this->MaxInstanceCount = uVar18;
    }
    if (this->AllocationMode == FixedCount) {
      uVar22 = 0;
      if (0 < this->PreAllocationCount) {
        uVar22 = this->PreAllocationCount;
      }
      if (uVar18 < uVar22) {
        uVar22 = uVar18;
      }
      this->MaxInstanceCount = uVar22;
    }
  }
  pUVar36 = local_res18;
  UpdateDebugName(this,local_res18,this_01);
  local_90 = 0;
  FStack_88.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->SimStageExecutionData != (TSharedPtr<FNiagaraSimStageExecutionData,1> *)&local_90) {
    (this->SimStageExecutionData).Object = (FNiagaraSimStageExecutionData *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->SimStageExecutionData).SharedReferenceCount,&FStack_88);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_88.ReferenceController);
  pUVar6 = (this->GPUComputeScript).field0_0x0.DebugPtr;
  if (pUVar6 != (UNiagaraScript *)0x0) {
    if (this_01 != (FNiagaraDataSetCompiledData *)0x0) {
      iVar17 = (pUVar6->CachedScriptVM).SimulationStageMetaData.ArrayNum;
      pFVar29 = (pUVar6->CachedScriptVM).SimulationStageMetaData.AllocatorInstance.Data;
      pFVar34 = pFVar29 + (longlong)iVar17 * 0xa8;
      while( true ) {
        if ((pUVar6->CachedScriptVM).SimulationStageMetaData.ArrayNum != iVar17) {
          local_b7[0] = 0;
          `TCheckedPointerIterator<FSimulationStageMetaData,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_b7);
        }
        if (pFVar29 == pFVar34) break;
        if (((byte)pFVar29[0x4c] & 4) != 0) {
          local_b0.Name = *(FName *)(pFVar29 + 0x50);
          local_b0.TypeDefHandle.RegisteredTypeIndex =
               FNiagaraTypeDefinitionHandle::Register
                         (&local_b0.TypeDefHandle,&FNiagaraTypeDefinition::IntDef);
          pFVar21 = FNiagaraDataSetCompiledData::FindVariableLayoutInfo(this_01,&local_b0);
          if (pFVar21 != (FNiagaraVariableLayoutInfo *)0x0) {
            *(uint *)(pFVar29 + 0x58) = (uint)pFVar21->Int32ComponentStart;
          }
        }
        pFVar29 = pFVar29 + 0xa8;
      }
    }
    FStack_98.ReferenceController = ::operator_new(0x48);
    pTVar27 = (TReferenceControllerBase<1> *)0x0;
    if (FStack_98.ReferenceController == (TReferenceControllerBase<1> *)0x0) {
      local_a0 = ___xmm_00000000000000000000000000000010;
      pFVar35 = (FNiagaraSimStageExecutionData *)&DAT_00000010;
      FStack_98.ReferenceController = _UNK_150651568;
    }
    else {
      (FStack_98.ReferenceController)->SharedReferenceCount = (atomic<int>)0x1;
      pFVar35 = (FNiagaraSimStageExecutionData *)(FStack_98.ReferenceController + 1);
      (FStack_98.ReferenceController)->WeakReferenceCount = (atomic<int>)0x1;
      (FStack_98.ReferenceController)->_padding_ =
           (longlong)
           &
           ___7__TIntrusiveReferenceController_UFNiagaraSimStageExecutionData___00_SharedPointerInternals__6B_
      ;
      FStack_98.ReferenceController[1]._padding_ = 0;
      FStack_98.ReferenceController[1].SharedReferenceCount = (atomic<int>)0x0;
      FStack_98.ReferenceController[1].WeakReferenceCount = (atomic<int>)0x0;
      FStack_98.ReferenceController[2]._padding_ = 0;
      FStack_98.ReferenceController[2].SharedReferenceCount = (atomic<int>)0x0;
      FStack_98.ReferenceController[2].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined4 *)&FStack_98.ReferenceController[3]._padding_ = 0;
      *(undefined4 *)((longlong)&FStack_98.ReferenceController[3]._padding_ + 4) = 1;
      FStack_98.ReferenceController[3].SharedReferenceCount = (atomic<int>)0x0;
      FStack_98.ReferenceController[3].WeakReferenceCount = (atomic<int>)0x0;
      FStack_98.ReferenceController[4]._padding_ = 0;
      if ((pFVar35 == (FNiagaraSimStageExecutionData *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("InObject != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x246,L""), bVar16)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      LOCK();
      (FStack_98.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FStack_98.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
      pTVar27 = FStack_98.ReferenceController;
      local_a0 = pFVar35;
    }
    if (&this->SimStageExecutionData != (TSharedPtr<FNiagaraSimStageExecutionData,1> *)&local_a0) {
      (this->SimStageExecutionData).Object = pFVar35;
      local_a0 = (FNiagaraSimStageExecutionData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->SimStageExecutionData).SharedReferenceCount,&FStack_98);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_98.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
    if (((this->SimStageExecutionData).Object == (FNiagaraSimStageExecutionData *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    _Dst = (ForElementType<FNiagaraSimStageExecutionLoopData>)(this->SimStageExecutionData).Object;
    iVar17 = (this->SimStageExecutionLoops).ArrayNum;
    puVar1 = (uchar *)((longlong)_Dst + 0x24);
    pFVar29 = (this->SimStageExecutionLoops).AllocatorInstance.Data;
    iVar5 = *(int *)puVar1;
    *(int *)((ForElementType<FNiagaraSimStageExecutionLoopData> *)((longlong)_Dst + 0x20))->
            InlineData = iVar17;
    if ((iVar17 == 0) && (iVar5 == 0)) {
      puVar1[0] = '\x01';
      puVar1[1] = '\0';
      puVar1[2] = '\0';
      puVar1[3] = '\0';
    }
    else {
      UE::Core::Private::
      ReallocForCopy<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FNiagaraSimStageExecutionLoopData>_>
                (0x14,4,iVar17,iVar5,(ForElementType<FNiagaraSimStageExecutionLoopData> *)_Dst,
                 iVar17,(int *)puVar1);
      if (*(ForElementType<FNiagaraSimStageExecutionLoopData> *)((longlong)_Dst + 0x18) !=
          (ForElementType<FNiagaraSimStageExecutionLoopData>)0x0) {
        _Dst = *(ForElementType<FNiagaraSimStageExecutionLoopData> *)((longlong)_Dst + 0x18);
      }
      if (iVar17 != 0) {
        memcpy((void *)_Dst,pFVar29,(longlong)iVar17 * 0x14);
      }
    }
    pUVar6 = (this->GPUComputeScript).field0_0x0.DebugPtr;
    pTVar28 = &(pUVar6->CachedScriptVM).SimulationStageMetaData;
    if (((this->SimStageExecutionData).Object == (FNiagaraSimStageExecutionData *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    pFVar35 = (this->SimStageExecutionData).Object;
    pTVar30 = &pFVar35->SimStageMetaData;
    pUVar36 = local_res18;
    if (pTVar30 != pTVar28) {
      DestructItems<FSimulationStageMetaData,int>
                ((FSimulationStageMetaData *)(pTVar30->AllocatorInstance).Data,
                 (pFVar35->SimStageMetaData).ArrayNum);
      iVar17 = (pUVar6->CachedScriptVM).SimulationStageMetaData.ArrayNum;
      piVar32 = &(pFVar35->SimStageMetaData).ArrayMax;
      pFVar8 = (FSimulationStageMetaData *)(pTVar28->AllocatorInstance).Data;
      (pFVar35->SimStageMetaData).ArrayNum = iVar17;
      if ((iVar17 == 0) && (*piVar32 == 0)) {
        *piVar32 = 0;
        pUVar36 = local_res18;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0xa8,8,iVar17,*piVar32,&pTVar30->AllocatorInstance,iVar17,piVar32);
        ConstructItems<FSimulationStageMetaData,FSimulationStageMetaData,int>
                  ((pTVar30->AllocatorInstance).Data,pFVar8,iVar17);
        pUVar36 = local_res18;
      }
    }
  }
  bVar16 = FNiagaraPlatformSet::IsActive(&this->Platforms);
  uVar22 = *(uint *)&this->field_0x2b8;
  this->bIsAllowedToExecute = bVar16;
  if ((bVar16 == 0) || (this->SimTarget != GPUComputeSim)) goto LAB_149286ad2;
  pUVar6 = (this->GPUComputeScript).field0_0x0.DebugPtr;
  if ((pUVar6 == (UNiagaraScript *)0x0) ||
     (pFVar7 = (pUVar6->ScriptResource).Object, pFVar7 == (FNiagaraShaderScript *)0x0)) {
    *(uint *)&this->field_0x2b8 = uVar22 & 0xfffffffe;
    goto LAB_149286ad2;
  }
  if ((pFVar7->ScriptParametersMetadata).Object == (FNiagaraShaderScriptParametersMetadata *)0x0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("ScriptParametersMetadata.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\NiagaraShader\\Public\\NiagaraShared.h"
                        ,0x378,L"");
    if (bVar16) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if (((pFVar7->ScriptParametersMetadata).Object == (FNiagaraShaderScriptParametersMetadata *)0x0)
       && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x408,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  pFVar9 = (pFVar7->ScriptParametersMetadata).Object;
  pTVar27 = (pFVar7->ScriptParametersMetadata).SharedReferenceCount.ReferenceController;
  if (pTVar27 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar27->SharedReferenceCount = (atomic<int>)((int)pTVar27->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar9 == (FNiagaraShaderScriptParametersMetadata *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x25d,L""), bVar16)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pFVar10 = (pFVar9->ShaderParametersMetadata).Object;
  if (pFVar10 == (FShaderParametersMetadata *)0x0) {
LAB_149286ab8:
    this->bIsAllowedToExecute = 0;
  }
  else {
    if (((pFVar10->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x177,L""), bVar16)) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    if ((ulonglong)GRHIGlobals.MaxConstantBufferByteSize.Value <
        (ulonglong)((pFVar10->Layout).Reference)->ConstantBufferSize) {
      ::FString::PrintfImpl
                (&local_80,
                 L"GPU Simulation(%s) is disabled due to using too much constant buffer space (%llu/%llu)."
                );
      FVar31.Data = (FScriptContainerElement *)L"";
      if (local_80.Data.ArrayNum != 0) {
        FVar31.Data = local_80.Data.AllocatorInstance.Data;
      }
      ::FString::FString(&local_70,(wchar_t *)FVar31.Data);
      UEngine::AddOnScreenDebugMessage
                (GEngine,(ulong64)this,__real_3f800000,FColor::Red,&local_70,true,
                 &UE::Math::TVector2<double>::UnitVector);
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      goto LAB_149286ab8;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar27);
LAB_149286ad2:
  bVar16 = FNiagaraComponentSettings::IsEmitterAllowedToRun(this,pUVar36);
  *(uint *)&this->field_0x2b8 = *(uint *)&this->field_0x2b8 & (bVar16 | 0xfffffffe);
  return;
}

// CacheFromShaderCompiled @ 149286ea0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVersionedNiagaraEmitterData::CacheFromShaderCompiled(FVersionedNiagaraEmitterData *this)

{
  undefined1 *puVar1;
  UNiagaraScript *pUVar2;
  FNiagaraShaderScript *this_00;
  uint uVar3;
  int iVar4;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> local_18;
  
  this->bRequiresViewUniformBuffer = 0;
  this->bNeedsPartialDepthTexture = 0;
  pUVar2 = (this->GPUComputeScript).field0_0x0.DebugPtr;
  if ((((pUVar2 != (UNiagaraScript *)0x0) && (this->SimTarget == GPUComputeSim)) &&
      (this_00 = (pUVar2->ScriptResource).Object, this_00 != (FNiagaraShaderScript *)0x0)) &&
     (iVar4 = 0, 0 < this_00->NumPermutations)) {
    do {
      FNiagaraShaderScript::GetShaderGameThread(this_00,&local_18,iVar4);
      if (local_18.ShaderContent != (FNiagaraShader *)0x0) {
        uVar3 = ((uint)(local_18.ShaderContent)->bNeedsViewUniformBuffer * 2 |
                *(uint *)&this->field_0x2b8) & 2 ^ *(uint *)&this->field_0x2b8 & 0xfffffffd;
        *(uint *)&this->field_0x2b8 = uVar3;
        *(uint *)&this->field_0x2b8 =
             ((uint)(local_18.ShaderContent)->MiscUsageBitMask << 2 | uVar3) & 4 ^
             uVar3 & 0xfffffffb;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < this_00->NumPermutations);
  }
  return;
}

// ClearRuntimeAllocationEstimate @ 149289cc0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVersionedNiagaraEmitterData::ClearRuntimeAllocationEstimate
          (FVersionedNiagaraEmitterData *this,ulong64 param_1)

{
  undefined1 *puVar1;
  FMemoryRuntimeEstimation *this_00;
  int iVar2;
  LPCRITICAL_SECTION lpCriticalSection;
  code *pcVar3;
  bool bVar4;
  ulong64 local_res8;
  
  if (((this->RuntimeEstimation).EstimationCriticalSection.Object == (FWindowsRecursiveMutex *)0x0)
     && (bVar4 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_8166792025996259970>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitter.cpp"
                            ,0xd7e,"EstimationCriticalSection.IsValid()"), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(this->RuntimeEstimation).EstimationCriticalSection.Object
  ;
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  this_00 = &this->RuntimeEstimation;
  if (param_1 == 0xffffffffffffffff) {
    (this->RuntimeEstimation).AllocationEstimate = 0;
    bVar4 = 1 < *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x48;
    if (!bVar4) {
      TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
      ::UnhashElements((TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
                        *)this_00);
    }
    puVar1 = &(this->RuntimeEstimation).RuntimeAllocations.field_0xc;
    *(undefined4 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
    }
    *(undefined4 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x34 = 0;
    *(undefined4 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x30 = 0xffffffff;
    iVar2 = *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x2c;
    *(undefined4 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x28 = 0;
    if ((iVar2 < 0) || (0x80 < iVar2)) {
      *(undefined4 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x2c = 0x80;
      TBitArray<FDefaultBitArrayAllocator>::Realloc
                ((TBitArray<FDefaultBitArrayAllocator> *)
                 &(this->RuntimeEstimation).RuntimeAllocations.field_0x10,0);
    }
    if (bVar4) {
      *(undefined4 *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x48 = 1;
      TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
      ::Rehash((TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
                *)this_00);
    }
  }
  else {
    local_res8 = param_1;
    if (*(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x8 !=
        *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x34) {
      TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
      ::RemoveImpl<unsigned___int64>
                ((TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
                  *)this_00,(int)(param_1 >> 0x20) * 0x17 + (int)param_1,&local_res8);
    }
  }
  (this->RuntimeEstimation).IsEstimationDirty = true;
                    /* WARNING: Could not recover jumptable at 0x000149289e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection(lpCriticalSection);
  return;
}

// CopyFrom @ 14928acd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVersionedNiagaraEmitterData::CopyFrom
          (FVersionedNiagaraEmitterData *this,FVersionedNiagaraEmitterData *param_1)

{
  code *pcVar1;
  FField *pFVar2;
  bool bVar3;
  UPackage *pUVar4;
  uchar *_Dst;
  uchar *_Src;
  TFieldIterator<FProperty> local_28;
  
  if (Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitterData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitterData.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FVersionedNiagaraEmitterData,(UObject *)pUVar4,
                         L"VersionedNiagaraEmitterData");
  }
  if (Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitterData.OuterSingleton ==
      (UScriptStruct *)0x0) {
    local_28.Field = (FField *)0x0;
  }
  else {
    local_28.Field =
         (FField *)
         (Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitterData.OuterSingleton)->_padding_;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = true;
  local_28.bIncludeDeprecated = true;
  local_28.bIncludeInterface = false;
  local_28.Struct =
       (UStruct *)Z_Registration_Info_UScriptStruct_FVersionedNiagaraEmitterData.OuterSingleton;
  TFieldIterator<FProperty>::IterateToNext(&local_28);
  pFVar2 = local_28.Field;
  while( true ) {
    local_28.Field = pFVar2;
    if (pFVar2 == (FField *)0x0) {
      FNiagaraStatDatabase::Init(&this->StatDatabase);
      FMemoryRuntimeEstimation::Init(&this->RuntimeEstimation);
      return;
    }
    if (((int)pFVar2[1]._padding_ < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((param_1 == (FVersionedNiagaraEmitterData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    _Src = (param_1->FixedBounds).Pad +
           (longlong)*(int *)((longlong)&pFVar2[1].Owner.Container + 4) + -0x71;
    if (((int)pFVar2[1]._padding_ < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) break;
    if ((this == (FVersionedNiagaraEmitterData *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    _Dst = (this->FixedBounds).Pad +
           (longlong)*(int *)((longlong)&pFVar2[1].Owner.Container + 4) + -0x71;
    if (_Dst != _Src) {
      if ((*(uint *)&pFVar2[1].ClassPrivate >> 0x1e & 1) == 0) {
        (**(code **)(pFVar2->_padding_ + 0xf0))(pFVar2,_Dst,_Src,(int)pFVar2[1]._padding_);
      }
      else {
        memcpy(_Dst,_Src,
               (longlong)*(int *)((longlong)&pFVar2[1]._padding_ + 4) *
               (longlong)(int)pFVar2[1]._padding_);
      }
    }
    local_28.Field = (local_28.Field)->Next;
    TFieldIterator<FProperty>::IterateToNext(&local_28);
    pFVar2 = local_28.Field;
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// EnsureScriptsPostLoaded @ 14929b510

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVersionedNiagaraEmitterData::EnsureScriptsPostLoaded(FVersionedNiagaraEmitterData *this)

{
  FScriptContainerElement *pFVar1;
  UNiagaraScript *this_00;
  int iVar2;
  ulonglong uVar3;
  ForAnyElementType FVar4;
  undefined1 local_res8 [8];
  TArray<UNiagaraScript_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
  GetScripts(this,&local_18,false,false);
  iVar2 = local_18.ArrayNum;
  uVar3 = (ulonglong)local_18.ArrayNum;
  pFVar1 = local_18.AllocatorInstance.Data + uVar3 * 8;
  FVar4.Data = local_18.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar3 != iVar2) {
      `TCheckedPointerIterator<UNiagaraScript_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar4.Data == pFVar1) break;
    UObject::ConditionalPostLoad(*(UObject **)FVar4.Data);
    uVar3 = local_18._8_8_ & 0xffffffff;
    FVar4.Data = FVar4.Data + 8;
  }
  this_00 = (this->GPUComputeScript).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraScript *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
  }
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// GatherCompiledParticleAttributes @ 14929d880

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVersionedNiagaraEmitterData::GatherCompiledParticleAttributes
          (FVersionedNiagaraEmitterData *this,
          TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_> *param_1)

{
  FNiagaraVariableBase *pFVar1;
  int iVar2;
  UNiagaraScript *pUVar3;
  FNiagaraVariableBase *pFVar4;
  undefined1 local_res8 [8];
  
  if (this->SimTarget == GPUComputeSim) {
    TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::operator=
              (param_1,&(((this->GPUComputeScript).field0_0x0.DebugPtr)->CachedScriptVM).Attributes)
    ;
    return;
  }
  TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::operator=
            (param_1,&(((this->UpdateScriptProps).Script.field0_0x0.DebugPtr)->CachedScriptVM).
                      Attributes);
  pUVar3 = (this->SpawnScriptProps).Script.field0_0x0.DebugPtr;
  iVar2 = (pUVar3->CachedScriptVM).Attributes.ArrayNum;
  pFVar4 = (FNiagaraVariableBase *)(pUVar3->CachedScriptVM).Attributes.AllocatorInstance.Data;
  pFVar1 = pFVar4 + iVar2;
  while( true ) {
    if ((pUVar3->CachedScriptVM).Attributes.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNiagaraVariableBase,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar1) break;
    TArray<FNiagaraVariableBase,TSizedDefaultAllocator<32>_>::
    AddUniqueImpl<FNiagaraVariableBase_const_&>(param_1,pFVar4);
    pFVar4 = pFVar4 + 1;
  }
  return;
}

// GetCurrentOverrideSettings @ 1492a14b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraEmitterScalabilityOverride * __thiscall
FVersionedNiagaraEmitterData::GetCurrentOverrideSettings(FVersionedNiagaraEmitterData *this)

{
  int iVar1;
  bool bVar2;
  FNiagaraEmitterScalabilityOverride *this_00;
  FNiagaraEmitterScalabilityOverride *pFVar3;
  undefined1 local_res8 [8];
  
  iVar1 = (this->ScalabilityOverrides).Overrides.ArrayNum;
  this_00 = (FNiagaraEmitterScalabilityOverride *)
            (this->ScalabilityOverrides).Overrides.AllocatorInstance.Data;
  pFVar3 = this_00 + iVar1;
  while( true ) {
    if ((this->ScalabilityOverrides).Overrides.ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraEmitterScalabilityOverride_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (this_00 == pFVar3) break;
    bVar2 = FNiagaraPlatformSet::IsActive((FNiagaraPlatformSet *)this_00);
    if (bVar2) {
      return this_00;
    }
    this_00 = this_00 + 1;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    FNiagaraPlatformSet::FNiagaraPlatformSet((FNiagaraPlatformSet *)&::Dummy);
    ::Dummy._padding_._0_4_ = (uint)::Dummy._padding_ & 0xfffffffe;
    ::Dummy.bOverrideSpawnCountScale = 0;
    ::Dummy._padding_._4_4_ = 0x3f800000;
    atexit(`FVersionedNiagaraEmitterData::GetCurrentOverrideSettings'::__l2::
           _dynamic_atexit_destructor_for__Dummy__);
    _Init_thread_footer(&::_TSS1);
  }
  return &::Dummy;
}

// GetEventHandlerByIdUnsafe @ 1492a4010

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FNiagaraEventScriptProperties * __thiscall
FVersionedNiagaraEmitterData::GetEventHandlerByIdUnsafe
          (FVersionedNiagaraEmitterData *this,FGuid *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FNiagaraEventScriptProperties *pFVar4;
  FNiagaraEventScriptProperties *pFVar5;
  undefined1 local_res8 [8];
  
  iVar1 = (this->EventHandlerScriptProps).ArrayNum;
  pFVar4 = (FNiagaraEventScriptProperties *)(this->EventHandlerScriptProps).AllocatorInstance.Data;
  pFVar5 = pFVar4 + iVar1;
  while( true ) {
    if ((this->EventHandlerScriptProps).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FNiagaraEventScriptProperties,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar4 == pFVar5) break;
    uVar2 = *(undefined8 *)(pFVar4->_padding_ + 0x34);
    uVar3 = *(undefined8 *)(pFVar4->_padding_ + 0x3c);
    if ((((uint)((ulonglong)uVar2 >> 0x20) == param_1->B &&
         (uint)((ulonglong)uVar3 >> 0x20) == param_1->D) && (uint)uVar3 == param_1->C) &&
        (uint)uVar2 == param_1->A) {
      return pFVar4;
    }
    pFVar4 = pFVar4 + 1;
  }
  return (FNiagaraEventScriptProperties *)0x0;
}

// GetMaxParticleCountEstimate @ 1492a4c70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

int __thiscall
FVersionedNiagaraEmitterData::GetMaxParticleCountEstimate(FVersionedNiagaraEmitterData *this)

{
  FMemoryRuntimeEstimation *pFVar1;
  ulonglong uVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  LPCRITICAL_SECTION lpCriticalSection;
  longlong lVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  FValueComparisonClass<TGreater<int>_> local_b8;
  FMemoryRuntimeEstimation *local_b0;
  int iStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  FMemoryRuntimeEstimation *local_80;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_78;
  undefined8 uStack_58;
  
  if ((this->AllocationMode == ManualEstimate) || (this->AllocationMode == FixedCount)) {
    return this->PreAllocationCount;
  }
  pFVar1 = &this->RuntimeEstimation;
  if ((this->RuntimeEstimation).IsEstimationDirty != false) {
    lpCriticalSection = (LPCRITICAL_SECTION)FMemoryRuntimeEstimation::GetCriticalSection(pFVar1);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    local_res18 = *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x8 -
                  *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x34;
    iVar6 = 0;
    (this->RuntimeEstimation).AllocationEstimate = 0;
    if (0 < local_res18) {
      local_b8.Predicate.Predicate = (TDereferenceWrapper<int,TGreater<int>_>)local_res8;
      TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
      ::
      Sort<TSortableMapBase<unsigned___int64,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>_>::FValueComparisonClass<TGreater<int>_>_>
                ((TSet<TTuple<unsigned___int64,int>,TDefaultMapHashableKeyFuncs<unsigned___int64,int,0>,FDefaultSetAllocator>
                  *)pFVar1,&local_b8);
      local_a0 = &(this->RuntimeEstimation).RuntimeAllocations.field_0x10;
      iStack_a8 = 0;
      iVar9 = *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x28;
      uStack_a4 = 1;
      local_90 = 0;
      iVar8 = 0;
      iStack_94 = 0;
      if (iVar9 != 0) {
        puVar11 = *(uint **)&(this->RuntimeEstimation).RuntimeAllocations.field_0x20;
        if (puVar11 == (uint *)0x0) {
          puVar11 = (uint *)local_a0;
        }
        uVar13 = *puVar11;
        while (uVar13 == 0) {
          lVar7 = (longlong)iStack_a8;
          local_90 = local_90 + 0x20;
          iStack_a8 = iStack_a8 + 1;
          if ((int)(iVar9 + -1 + (iVar9 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a8) {
            iVar8 = *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x28;
            iStack_94 = iVar9;
            goto LAB_1492a4db7;
          }
          uVar13 = puVar11[lVar7 + 1];
        }
        iVar8 = *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x28;
        uStack_a4 = -uVar13 & uVar13;
        uVar2 = (ulonglong)uStack_a4 * 2 + 1;
        lVar7 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        local_res20 = (int)lVar7;
        iStack_94 = local_90 + -1 + local_res20;
        if (iVar8 < iStack_94) {
          iStack_94 = iVar9;
        }
      }
LAB_1492a4db7:
      uVar13 = *(uint *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x28;
      uVar12 = uVar13 & 0xffffffe0;
      iStack_88 = *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x8 -
                  *(int *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x34;
      uStack_98 = 0xffffffff;
      TStack_78._padding_ = CONCAT44(uStack_a4,iStack_a8);
      TStack_78.CurrentBitIndex = iStack_94;
      TStack_78.UnvisitedBitMask = 0xffffffff;
      iVar9 = (int)uVar13 >> 5;
      TStack_78._28_4_ = iStack_94;
      TStack_78.BaseBitIndex = local_90;
      uStack_58 = CONCAT44(uStack_84,iStack_88);
      local_b0 = pFVar1;
      iStack_8c = iStack_94;
      local_80 = pFVar1;
      TStack_78.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_a0;
      if ((((int)uVar13 < 0) || (iVar8 < (int)uVar13)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        iVar6 = (*pcVar4)();
        return iVar6;
      }
      iVar8 = local_res18;
      uVar3 = *(uint *)&(this->RuntimeEstimation).RuntimeAllocations.field_0x28;
      if (uVar13 != uVar3) {
        puVar10 = *(undefined1 **)&(this->RuntimeEstimation).RuntimeAllocations.field_0x20;
        if (puVar10 == (undefined1 *)0x0) {
          puVar10 = &(this->RuntimeEstimation).RuntimeAllocations.field_0x10;
        }
        uVar13 = -1 << ((byte)uVar13 & 0x1f) & *(uint *)(puVar10 + (longlong)iVar9 * 4);
        while (uVar13 == 0) {
          lVar7 = (longlong)iVar9;
          uVar12 = uVar12 + 0x20;
          iVar9 = iVar9 + 1;
          uVar13 = uVar3;
          if ((int)((uVar3 - 1) + ((int)(uVar3 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar9)
          goto LAB_1492a4ece;
          uVar13 = *(uint *)(puVar10 + lVar7 * 4 + 4);
        }
        uVar2 = (ulonglong)(-uVar13 & uVar13) * 2 + 1;
        lVar7 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar7 == 0; lVar7 = lVar7 + -1) {
          }
        }
        uVar13 = (int)lVar7 + -1 + uVar12;
        if ((int)uVar3 < (int)uVar13) {
          uVar13 = uVar3;
        }
      }
LAB_1492a4ece:
      while( true ) {
        pFVar1 = local_80;
        if (*(int *)&(local_80->RuntimeAllocations).field_0x8 -
            *(int *)&(local_80->RuntimeAllocations).field_0x34 != (int)uStack_58) {
          `TSparseArray<TSparseSetElement<TTuple<unsigned___int64,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
        }
        if (((TStack_78.CurrentBitIndex == uVar13) &&
            (TStack_78.Array ==
             (TBitArray<FDefaultBitArrayAllocator> *)
             &(this->RuntimeEstimation).RuntimeAllocations.field_0x10)) &&
           (pFVar1 == &this->RuntimeEstimation)) goto LAB_1492a4f6b;
        if ((iVar8 + -1) / 2 <= iVar6) break;
        iVar6 = iVar6 + 1;
        TStack_78.UnvisitedBitMask = TStack_78.UnvisitedBitMask & ~TStack_78._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_78);
      }
      (this->RuntimeEstimation).AllocationEstimate =
           *(int *)(*(longlong *)&pFVar1->RuntimeAllocations +
                    (longlong)TStack_78.CurrentBitIndex * 0x18 + 8);
LAB_1492a4f6b:
      (this->RuntimeEstimation).IsEstimationDirty = false;
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return (this->RuntimeEstimation).AllocationEstimate;
}

// GetScript @ 1492a6ac0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraScript * __thiscall
FVersionedNiagaraEmitterData::GetScript
          (FVersionedNiagaraEmitterData *this,ENiagaraScriptUsage param_1,FGuid *param_2)

{
  FScriptContainerElement *pFVar1;
  ENiagaraScriptUsage EVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  ForAnyElementType FVar8;
  UNiagaraScript *pUVar9;
  ulonglong uVar10;
  undefined1 local_res20 [8];
  TArray<UNiagaraScript_*,TSizedDefaultAllocator<32>_> local_28;
  
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  GetScripts(this,&local_28,false,false);
  iVar7 = local_28.ArrayNum;
  uVar10 = (ulonglong)local_28.ArrayNum;
  pFVar1 = local_28.AllocatorInstance.Data + uVar10 * 8;
  FVar8.Data = local_28.AllocatorInstance.Data;
LAB_1492a6b16:
  do {
    if ((int)uVar10 != iVar7) {
      `TCheckedPointerIterator<UNiagaraScript_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
      uVar10 = local_28._8_8_ & 0xffffffff;
    }
    if (FVar8.Data == pFVar1) {
      pUVar9 = (UNiagaraScript *)0x0;
LAB_1492a6b8d:
      if (local_28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.AllocatorInstance.Data);
      }
      return pUVar9;
    }
    pUVar9 = *(UNiagaraScript **)FVar8.Data;
    EVar2 = pUVar9->Usage;
    if (param_1 == EVar2) {
LAB_1492a6b55:
      uVar3 = (pUVar9->UsageId).A;
      uVar5 = (pUVar9->UsageId).B;
      uVar4 = (pUVar9->UsageId).C;
      uVar6 = (pUVar9->UsageId).D;
      if (((uVar5 == param_2->B && uVar6 == param_2->D) && uVar3 == param_2->A) &&
          uVar4 == param_2->C) goto LAB_1492a6b8d;
    }
    else {
      if (EVar2 == ParticleSpawnScript) {
        if (param_1 == ParticleSpawnScriptInterpolated) goto LAB_1492a6b55;
        FVar8.Data = FVar8.Data + 8;
        goto LAB_1492a6b16;
      }
      if ((EVar2 == ParticleSpawnScriptInterpolated) && (param_1 == ParticleSpawnScript))
      goto LAB_1492a6b55;
    }
    FVar8.Data = FVar8.Data + 8;
  } while( true );
}

// GetScripts @ 1492a6bd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVersionedNiagaraEmitterData::GetScripts
          (FVersionedNiagaraEmitterData *this,
          TArray<UNiagaraScript_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2,bool param_3)

{
  TObjectPtr<UNiagaraScript>_u_0 *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  TObjectPtr<UNiagaraScript>_u_0 local_58;
  TObjectPtr<UNiagaraScript>_u_0 local_50;
  undefined8 local_48;
  undefined8 local_40;
  TObjectPtr<UNiagaraScript>_u_0 local_38 [2];
  
  local_58 = (this->SpawnScriptProps).Script.field0_0x0;
  pTVar1 = (TObjectPtr<UNiagaraScript>_u_0 *)(param_1->AllocatorInstance).Data;
  if ((pTVar1 <= &local_58) && (&local_58 < pTVar1 + param_1->ArrayMax)) {
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
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar5 + 1;
  *(TObjectPtr<UNiagaraScript>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
       local_58;
  local_50 = (this->UpdateScriptProps).Script.field0_0x0;
  pTVar1 = (TObjectPtr<UNiagaraScript>_u_0 *)(param_1->AllocatorInstance).Data;
  if ((pTVar1 <= &local_50) && (&local_50 < pTVar1 + param_1->ArrayMax)) {
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
  iVar5 = param_1->ArrayNum;
  if (iVar5 == param_1->ArrayMax) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  uVar7 = 0;
  param_1->ArrayNum = iVar5 + 1;
  *(TObjectPtr<UNiagaraScript>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
       local_50;
  if (0 < (this->EventHandlerScriptProps).ArrayNum) {
    lVar9 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (this->EventHandlerScriptProps).ArrayNum) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(longlong *)((this->EventHandlerScriptProps).AllocatorInstance.Data + lVar9) != 0) {
        uVar6 = 0;
        if ((int)uVar7 < (this->EventHandlerScriptProps).ArrayNum) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_48 = *(undefined8 *)((this->EventHandlerScriptProps).AllocatorInstance.Data + lVar9);
        pFVar2 = (param_1->AllocatorInstance).Data;
        if ((pFVar2 <= (FScriptContainerElement *)&local_48) &&
           ((FScriptContainerElement *)&local_48 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
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
        iVar5 = param_1->ArrayNum;
        if (iVar5 == param_1->ArrayMax) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
        }
        param_1->ArrayNum = iVar5 + 1;
        *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_48;
      }
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 0x58;
    } while ((int)uVar7 < (this->EventHandlerScriptProps).ArrayNum);
  }
  if ((!param_2) && (uVar7 = 0, 0 < (this->SimulationStages).ArrayNum)) {
    lVar9 = 0;
    do {
      uVar8 = ~uVar7 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar7 < (this->SimulationStages).ArrayNum) {
        uVar6 = uVar8;
      }
      if (uVar6 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (*(longlong *)((this->SimulationStages).AllocatorInstance.Data + lVar9) != 0) {
        uVar6 = 0;
        if ((int)uVar7 < (this->SimulationStages).ArrayNum) {
          uVar6 = uVar8;
        }
        if (uVar6 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        if (*(longlong *)
             (*(longlong *)((this->SimulationStages).AllocatorInstance.Data + lVar9) + 0x28) != 0) {
          if (param_3) {
            uVar6 = 0;
            if ((int)uVar7 < (this->SimulationStages).ArrayNum) {
              uVar6 = uVar8;
            }
            if (uVar6 == 0) {
              bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar4) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            if ((*(byte *)(*(longlong *)((this->SimulationStages).AllocatorInstance.Data + lVar9) +
                          0x38) & 1) == 0) goto LAB_1492a7108;
          }
          uVar6 = 0;
          if ((int)uVar7 < (this->SimulationStages).ArrayNum) {
            uVar6 = uVar8;
          }
          if (uVar6 == 0) {
            bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar4) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          local_40 = *(undefined8 *)
                      (*(longlong *)((this->SimulationStages).AllocatorInstance.Data + lVar9) + 0x28
                      );
          pFVar2 = (param_1->AllocatorInstance).Data;
          if ((pFVar2 <= (FScriptContainerElement *)&local_40) &&
             ((FScriptContainerElement *)&local_40 < pFVar2 + (longlong)param_1->ArrayMax * 8)) {
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
          iVar5 = param_1->ArrayNum;
          if (iVar5 == param_1->ArrayMax) {
            iVar5 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar5 + 1;
          *(undefined8 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) = local_40;
        }
      }
LAB_1492a7108:
      uVar7 = uVar7 + 1;
      lVar9 = lVar9 + 8;
    } while ((int)uVar7 < (this->SimulationStages).ArrayNum);
  }
  if (this->SimTarget == GPUComputeSim) {
    local_38[0] = (this->GPUComputeScript).field0_0x0;
    pTVar1 = (TObjectPtr<UNiagaraScript>_u_0 *)(param_1->AllocatorInstance).Data;
    if ((pTVar1 <= local_38) && (local_38 < pTVar1 + param_1->ArrayMax)) {
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
    iVar5 = param_1->ArrayNum;
    if (iVar5 == param_1->ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
    }
    param_1->ArrayNum = iVar5 + 1;
    *(TObjectPtr<UNiagaraScript>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar5 * 8) =
         local_38[0];
  }
  return;
}

// GetSimulationStageById @ 1492a7ac0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraSimulationStageBase * __thiscall
FVersionedNiagaraEmitterData::GetSimulationStageById
          (FVersionedNiagaraEmitterData *this,FGuid *param_1)

{
  TObjectPtr<UNiagaraSimulationStageBase> TVar1;
  TObjectPtr<UNiagaraSimulationStageBase>_u_0 *pTVar2;
  
  pTVar2 = &TArray<TObjectPtr<UNiagaraSimulationStageBase>,TSizedDefaultAllocator<32>_>::
            FindByPredicate<_FVersionedNiagaraEmitterData::GetSimulationStageById_::__l2::<lambda_1>_>
                      (&this->SimulationStages,(<lambda_1>)param_1)->field0_0x0;
  if (pTVar2 != (TObjectPtr<UNiagaraSimulationStageBase>_u_0 *)0x0) {
    TVar1.field0_0x0 = (TObjectPtr<UNiagaraSimulationStageBase>_u_0)pTVar2->DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar1.field0_0x0 != (UNiagaraSimulationStageBase *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar1.field0_0x0);
    }
    return (UNiagaraSimulationStageBase *)TVar1.field0_0x0;
  }
  return (UNiagaraSimulationStageBase *)0x0;
}

// IsAllowedByScalability @ 1492ad400

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FVersionedNiagaraEmitterData::IsAllowedByScalability(FVersionedNiagaraEmitterData *this)

{
  bool bVar1;
  
  bVar1 = FNiagaraPlatformSet::IsActive(&this->Platforms);
  return bVar1;
}

// IsEventGeneratorShared @ 1492ad510

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FVersionedNiagaraEmitterData::IsEventGeneratorShared
          (FVersionedNiagaraEmitterData *this,FName param_1)

{
  FName *pFVar1;
  FName *pFVar2;
  
  pFVar2 = (FName *)(this->SharedEventGeneratorIds).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (this->SharedEventGeneratorIds).ArrayNum;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 1;
  }
  return true;
}

// IsReadyToRun @ 1492ad860

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FVersionedNiagaraEmitterData::IsReadyToRun(FVersionedNiagaraEmitterData *this)

{
  int iVar1;
  UNiagaraScript *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  undefined1 local_18 [16];
  
  if ((this->IsReadyToRunCached).bIsSet != false) goto LAB_1492ad9a8;
  if (((this->UpdateScriptProps).Script.field0_0x0.DebugPtr == (UNiagaraScript *)0x0) ||
     (this_00 = (this->SpawnScriptProps).Script.field0_0x0.DebugPtr,
     this_00 == (UNiagaraScript *)0x0)) {
LAB_1492ad985:
    bVar3 = false;
  }
  else {
    if (this->SimTarget == CPUSim) {
      bVar3 = UNiagaraScript::IsScriptCompilationPending(this_00,false);
      if (!bVar3) {
        bVar3 = UNiagaraScript::IsScriptCompilationPending
                          ((this->UpdateScriptProps).Script.field0_0x0.DebugPtr,false);
        if (!bVar3) {
          iVar1 = (this->EventHandlerScriptProps).ArrayNum;
          if ((iVar1 != 0) && (uVar7 = 0, 0 < iVar1)) {
            lVar6 = 0;
            do {
              uVar5 = 0;
              if ((int)uVar7 < (this->EventHandlerScriptProps).ArrayNum) {
                uVar5 = ~uVar7 >> 0x1f;
              }
              if (uVar5 == 0) {
                bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar3) {
                  pcVar2 = (code *)swi(3);
                  uVar4 = (*pcVar2)();
                  return (bool)uVar4;
                }
              }
              bVar3 = UNiagaraScript::IsScriptCompilationPending
                                (*(UNiagaraScript **)
                                  ((this->EventHandlerScriptProps).AllocatorInstance.Data + lVar6),
                                 false);
              if (bVar3) goto LAB_1492ad985;
              uVar7 = uVar7 + 1;
              lVar6 = lVar6 + 0x58;
            } while ((int)uVar7 < (this->EventHandlerScriptProps).ArrayNum);
          }
          goto LAB_1492ad960;
        }
      }
      goto LAB_1492ad985;
    }
LAB_1492ad960:
    if (this->SimTarget == GPUComputeSim) {
      if ((this->EventHandlerScriptProps).ArrayNum == 0) {
        bVar3 = UNiagaraScript::IsScriptCompilationPending
                          ((this->GPUComputeScript).field0_0x0.DebugPtr,true);
        if (!bVar3) goto LAB_1492ad981;
      }
      goto LAB_1492ad985;
    }
LAB_1492ad981:
    bVar3 = true;
  }
  if ((TOptional<bool> *)local_18 != &this->IsReadyToRunCached) {
    (this->IsReadyToRunCached).TypedValue = bVar3;
    (this->IsReadyToRunCached).bIsSet = true;
  }
LAB_1492ad9a8:
  if ((this->IsReadyToRunCached).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return (this->IsReadyToRunCached).TypedValue;
}

// IsReadyToRunInternal @ 1492ad9f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FVersionedNiagaraEmitterData::IsReadyToRunInternal(FVersionedNiagaraEmitterData *this)

{
  int iVar1;
  UNiagaraScript *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  
  if ((this->UpdateScriptProps).Script.field0_0x0.DebugPtr == (UNiagaraScript *)0x0) {
    return false;
  }
  this_00 = (this->SpawnScriptProps).Script.field0_0x0.DebugPtr;
  if (this_00 == (UNiagaraScript *)0x0) {
    return false;
  }
  if (this->SimTarget == CPUSim) {
    bVar3 = UNiagaraScript::IsScriptCompilationPending(this_00,false);
    if (bVar3) {
      return false;
    }
    bVar3 = UNiagaraScript::IsScriptCompilationPending
                      ((this->UpdateScriptProps).Script.field0_0x0.DebugPtr,false);
    if (bVar3) {
      return false;
    }
    iVar1 = (this->EventHandlerScriptProps).ArrayNum;
    if ((iVar1 != 0) && (uVar7 = 0, 0 < iVar1)) {
      lVar6 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (this->EventHandlerScriptProps).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar3)) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
        bVar3 = UNiagaraScript::IsScriptCompilationPending
                          (*(UNiagaraScript **)
                            ((this->EventHandlerScriptProps).AllocatorInstance.Data + lVar6),false);
        if (bVar3) {
          return false;
        }
        uVar7 = uVar7 + 1;
        lVar6 = lVar6 + 0x58;
      } while ((int)uVar7 < (this->EventHandlerScriptProps).ArrayNum);
    }
  }
  if (this->SimTarget != GPUComputeSim) {
    return true;
  }
  if (((this->EventHandlerScriptProps).ArrayNum == 0) &&
     (bVar3 = UNiagaraScript::IsScriptCompilationPending
                        ((this->GPUComputeScript).field0_0x0.DebugPtr,true), !bVar3)) {
    return true;
  }
  return false;
}

// IsValid @ 1492adba0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FVersionedNiagaraEmitterData::IsValid(FVersionedNiagaraEmitterData *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 local_18 [16];
  
  if ((this->IsValidCached).bIsSet == false) {
    bVar2 = IsValidInternal(this);
    if ((TOptional<bool> *)local_18 != &this->IsValidCached) {
      (this->IsValidCached).TypedValue = bVar2;
      (this->IsValidCached).bIsSet = true;
    }
  }
  if ((this->IsValidCached).bIsSet == false) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return (this->IsValidCached).TypedValue;
}

// IsValidInternal @ 1492adc10

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall FVersionedNiagaraEmitterData::IsValidInternal(FVersionedNiagaraEmitterData *this)

{
  int iVar1;
  UNiagaraScript *this_00;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  this_00 = (this->SpawnScriptProps).Script.field0_0x0.DebugPtr;
  if ((this_00 == (UNiagaraScript *)0x0) ||
     ((this->UpdateScriptProps).Script.field0_0x0.DebugPtr == (UNiagaraScript *)0x0)) {
LAB_1492addc3:
    bVar3 = false;
  }
  else {
    if (this->SimTarget == CPUSim) {
      bVar3 = UNiagaraScript::IsScriptCompilationPending(this_00,false);
      if (!bVar3) {
        bVar3 = UNiagaraScript::DidScriptCompilationSucceed
                          ((this->SpawnScriptProps).Script.field0_0x0.DebugPtr,false);
        if (!bVar3) goto LAB_1492addc3;
      }
      bVar3 = UNiagaraScript::IsScriptCompilationPending
                        ((this->UpdateScriptProps).Script.field0_0x0.DebugPtr,false);
      if (!bVar3) {
        bVar3 = UNiagaraScript::DidScriptCompilationSucceed
                          ((this->UpdateScriptProps).Script.field0_0x0.DebugPtr,false);
        if (!bVar3) goto LAB_1492addc3;
      }
      iVar1 = (this->EventHandlerScriptProps).ArrayNum;
      if ((iVar1 != 0) && (uVar6 = 0, 0 < iVar1)) {
        lVar7 = 0;
        do {
          uVar5 = 0;
          if ((int)uVar6 < (this->EventHandlerScriptProps).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          bVar3 = UNiagaraScript::IsScriptCompilationPending
                            (*(UNiagaraScript **)
                              ((this->EventHandlerScriptProps).AllocatorInstance.Data + lVar7),false
                            );
          if (!bVar3) {
            uVar5 = 0;
            if ((int)uVar6 < (this->EventHandlerScriptProps).ArrayNum) {
              uVar5 = ~uVar6 >> 0x1f;
            }
            if (uVar5 == 0) {
              bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar3) {
                pcVar2 = (code *)swi(3);
                uVar4 = (*pcVar2)();
                return (bool)uVar4;
              }
            }
            bVar3 = UNiagaraScript::DidScriptCompilationSucceed
                              (*(UNiagaraScript **)
                                ((this->EventHandlerScriptProps).AllocatorInstance.Data + lVar7),
                               false);
            if (!bVar3) goto LAB_1492addc3;
          }
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x58;
        } while ((int)uVar6 < (this->EventHandlerScriptProps).ArrayNum);
      }
    }
    if (this->SimTarget == GPUComputeSim) {
      bVar3 = UNiagaraScript::IsScriptCompilationPending
                        ((this->GPUComputeScript).field0_0x0.DebugPtr,true);
      if (!bVar3) {
        bVar3 = UNiagaraScript::DidScriptCompilationSucceed
                          ((this->GPUComputeScript).field0_0x0.DebugPtr,true);
        if (!bVar3) goto LAB_1492addc3;
      }
    }
    bVar3 = true;
  }
  return bVar3;
}

// PostInitProperties @ 1492aef30

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVersionedNiagaraEmitterData::PostInitProperties
          (FVersionedNiagaraEmitterData *this,UNiagaraEmitter *param_1)

{
  FName FVar1;
  FName *pFVar2;
  UNiagaraScript *pUVar3;
  int iVar4;
  FName local_res8;
  FString local_38;
  FString local_28;
  
  ::FString::FString(&local_28,"SpawnScript");
  ::FString::PrintfImpl(&local_38,L"%s_%i_%i");
  iVar4 = local_38.Data.ArrayNum + -1;
  if (local_38.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  pFVar2 = ::FName::FName(&local_res8,iVar4,(wchar_t *)local_38.Data.AllocatorInstance.Data,
                          FNAME_Add);
  FVar1 = *pFVar2;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  pUVar3 = NewObject<UNiagaraScript>
                     ((UObject *)param_1,FVar1,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UNiagaraScript *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->SpawnScriptProps).Script.field0_0x0.DebugPtr = pUVar3;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  ((this->SpawnScriptProps).Script.field0_0x0.DebugPtr)->Usage = ParticleSpawnScript;
  ::FString::FString(&local_38,"UpdateScript");
  ::FString::PrintfImpl(&local_28,L"%s_%i_%i");
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  pFVar2 = ::FName::FName(&local_res8,iVar4,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                          FNAME_Add);
  FVar1 = *pFVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pUVar3 = NewObject<UNiagaraScript>
                     ((UObject *)param_1,FVar1,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UNiagaraScript *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->UpdateScriptProps).Script.field0_0x0.DebugPtr = pUVar3;
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  ((this->UpdateScriptProps).Script.field0_0x0.DebugPtr)->Usage = ParticleUpdateScript;
  ::FString::FString(&local_38,"GPUComputeScript");
  ::FString::PrintfImpl(&local_28,L"%s_%i_%i");
  iVar4 = local_28.Data.ArrayNum + -1;
  if (local_28.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  pFVar2 = ::FName::FName(&local_res8,iVar4,(wchar_t *)local_28.Data.AllocatorInstance.Data,
                          FNAME_Add);
  FVar1 = *pFVar2;
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  pUVar3 = NewObject<UNiagaraScript>
                     ((UObject *)param_1,FVar1,RF_Transactional,(UObject *)0x0,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar3 != (UNiagaraScript *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  (this->GPUComputeScript).field0_0x0.DebugPtr = pUVar3;
  if (local_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    pUVar3->Usage = ParticleGPUComputeScript;
  }
  else {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
    ((this->GPUComputeScript).field0_0x0.DebugPtr)->Usage = ParticleGPUComputeScript;
  }
  return;
}

// PostLoad @ 1492af4f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FVersionedNiagaraEmitterData::PostLoad
          (FVersionedNiagaraEmitterData *this,UNiagaraEmitter *param_1,int param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UNiagaraRendererProperties>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TObjectPtr<UNiagaraSimulationStageBase>,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  ENiagaraScriptUsage EVar5;
  longlong lVar6;
  UNiagaraScript *pUVar7;
  code *pcVar8;
  bool bVar9;
  ulonglong uVar10;
  int iVar11;
  ForAnyElementType FVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 local_res8 [8];
  uint local_res20 [2];
  TArray<UNiagaraScript_*,TSizedDefaultAllocator<32>_> local_78;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  UNiagaraEmitter *local_58;
  uint *local_50;
  FString local_48;
  
  FNiagaraStatDatabase::Init(&this->StatDatabase);
  FMemoryRuntimeEstimation::Init(&this->RuntimeEstimation);
  uVar16 = (this->RendererProperties).ArrayNum - 1;
  if (-1 < (int)uVar16) {
    pTVar2 = &this->RendererProperties;
    lVar15 = (longlong)(int)uVar16;
    lVar17 = lVar15 * 8;
    do {
      uVar13 = ~uVar16 >> 0x1f;
      uVar14 = 0;
      if ((int)uVar16 < (this->RendererProperties).ArrayNum) {
        uVar14 = uVar13;
      }
      if ((uVar14 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = (this->RendererProperties).ArrayNum;
      if (*(longlong *)((pTVar2->AllocatorInstance).Data + lVar17) == 0) {
        uVar14 = 0;
        if ((int)uVar16 < iVar11) {
          uVar14 = uVar13;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar4 = (pTVar2->AllocatorInstance).Data + lVar15 * 8;
        iVar11 = (this->RendererProperties).ArrayNum + ~uVar16;
        if (iVar11 != 0) {
          memmove(pFVar4,pFVar4 + 8,(longlong)iVar11 << 3);
        }
        piVar1 = &(this->RendererProperties).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar2->AllocatorInstance,(this->RendererProperties).ArrayNum,
                   &(this->RendererProperties).ArrayMax);
      }
      else {
        local_68 = (this->Version).VersionGuid.A;
        uStack_64 = (this->Version).VersionGuid.B;
        uStack_60 = (this->Version).VersionGuid.C;
        uStack_5c = (this->Version).VersionGuid.D;
        uVar14 = 0;
        if ((int)uVar16 < iVar11) {
          uVar14 = uVar13;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar6 = *(longlong *)((pTVar2->AllocatorInstance).Data + lVar17);
        *(uint *)(lVar6 + 0x80) = local_68;
        *(uint *)(lVar6 + 0x84) = uStack_64;
        *(uint *)(lVar6 + 0x88) = uStack_60;
        *(uint *)(lVar6 + 0x8c) = uStack_5c;
        uVar14 = 0;
        if ((int)uVar16 < (this->RendererProperties).ArrayNum) {
          uVar14 = uVar13;
        }
        if ((uVar14 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        UObject::ConditionalPostLoad(*(UObject **)((pTVar2->AllocatorInstance).Data + lVar17));
      }
      lVar15 = lVar15 + -1;
      lVar17 = lVar17 + -8;
      uVar16 = uVar16 - 1;
    } while (-1 < (int)uVar16);
  }
  local_res20[0] = (this->SimulationStages).ArrayNum - 1;
  if (-1 < (int)local_res20[0]) {
    pTVar3 = &this->SimulationStages;
    do {
      uVar10 = (ulonglong)local_res20[0];
      uVar16 = 0;
      if ((int)local_res20[0] < (this->SimulationStages).ArrayNum) {
        uVar16 = ~local_res20[0] >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (*(longlong *)((pTVar3->AllocatorInstance).Data + uVar10 * 8) == 0) {
LAB_1492af7d2:
        local_50 = local_res20;
        local_58 = param_1;
        bVar9 = `FVersionedNiagaraEmitterData::PostLoad'::__l12::<lambda_1>::operator()(&local_58);
        if (bVar9) goto LAB_1492af885;
        lVar17 = (longlong)(int)local_res20[0];
        uVar14 = ~local_res20[0];
        uVar16 = 0;
        if ((int)local_res20[0] < (this->SimulationStages).ArrayNum) {
          uVar16 = uVar14 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar4 = (pTVar3->AllocatorInstance).Data + lVar17 * 8;
        iVar11 = (this->SimulationStages).ArrayNum + uVar14;
        if (iVar11 != 0) {
          memmove(pFVar4,pFVar4 + 8,(longlong)iVar11 << 3);
        }
        piVar1 = &(this->SimulationStages).ArrayNum;
        *piVar1 = *piVar1 + -1;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&pTVar3->AllocatorInstance,(this->SimulationStages).ArrayNum,
                   &(this->SimulationStages).ArrayMax);
      }
      else {
        lVar17 = (longlong)(int)local_res20[0];
        uVar16 = 0;
        if ((int)local_res20[0] < (this->SimulationStages).ArrayNum) {
          uVar16 = ~local_res20[0] >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        if (*(longlong *)(*(longlong *)((pTVar3->AllocatorInstance).Data + lVar17 * 8) + 0x28) == 0)
        goto LAB_1492af7d2;
LAB_1492af885:
        lVar17 = (longlong)(int)local_res20[0];
        uVar16 = 0;
        if ((int)local_res20[0] < (this->SimulationStages).ArrayNum) {
          uVar16 = ~local_res20[0] >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        UObject::ConditionalPostLoad(*(UObject **)((pTVar3->AllocatorInstance).Data + lVar17 * 8));
      }
      local_res20[0] = local_res20[0] - 1;
    } while (-1 < (int)local_res20[0]);
  }
  pUVar7 = (this->SpawnScriptProps).Script.field0_0x0.DebugPtr;
  if (pUVar7 != (UNiagaraScript *)0x0) {
    UObject::ConditionalPostLoad((UObject *)pUVar7);
  }
  if ((((this->GPUComputeScript).field0_0x0.DebugPtr != (UNiagaraScript *)0x0) &&
      (this->SimTarget != GPUComputeSim)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("GPUComputeScript == nullptr || SimTarget == ENiagaraSimTarget::GPUComputeSim"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraEmitter.cpp"
                         ,0x34d,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FNiagaraParameterStore::PostLoad(&this->RendererBindings,(UObject *)param_1);
  pUVar7 = (this->SpawnScriptProps).Script.field0_0x0.DebugPtr;
  if ((pUVar7 != (UNiagaraScript *)0x0) &&
     (EVar5 = pUVar7->Usage,
     (EVar5 == ParticleSpawnScriptInterpolated) != (this->InterpolatedSpawnMode != NoInterpolation))
     ) {
    this->InterpolatedSpawnMode = NoInterpolation;
    if (EVar5 == ParticleSpawnScriptInterpolated) {
      pUVar7->Usage = ParticleSpawnScript;
    }
    if (2 < (byte)LogNiagara._0_1_) {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
  }
  local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_78.ArrayNum = 0;
  local_78.ArrayMax = 0;
  GetScripts(this,&local_78,false,false);
  iVar11 = local_78.ArrayNum;
  uVar10 = (ulonglong)local_78.ArrayNum;
  pFVar4 = local_78.AllocatorInstance.Data + uVar10 * 8;
  FVar12.Data = local_78.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar10 != iVar11) {
      `TCheckedPointerIterator<UNiagaraScript_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (FVar12.Data == pFVar4) break;
    UObject::ConditionalPostLoad(*(UObject **)FVar12.Data);
    uVar10 = local_78._8_8_ & 0xffffffff;
    FVar12.Data = FVar12.Data + 8;
  }
  pUVar7 = (this->GPUComputeScript).field0_0x0.DebugPtr;
  if (pUVar7 != (UNiagaraScript *)0x0) {
    UObject::ConditionalPostLoad((UObject *)pUVar7);
  }
  if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.AllocatorInstance.Data);
  }
  return;
}

// PrecacheComputePSOs @ 1492b0b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> *
__thiscall
FVersionedNiagaraEmitterData::PrecacheComputePSOs
          (FVersionedNiagaraEmitterData *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__,UNiagaraEmitter *param_1)

{
  undefined1 *puVar1;
  TRefCountPtr<FBaseGraphTask> *pTVar2;
  undefined8 *puVar3;
  UNiagaraScript *pUVar4;
  FNiagaraShaderScript *this_00;
  FScriptContainerElement *_Src;
  code *pcVar5;
  bool bVar6;
  EPSOPrecacheResult EVar7;
  int iVar8;
  int iVar9;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> *pTVar10;
  FRHIComputeShader *pFVar11;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar12;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  *pTVar13;
  FTaskBase *this_01;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar14;
  IConsoleManager *pIVar15;
  wchar_t *pwVar16;
  int iVar17;
  int *piVar18;
  size_t _Size;
  FTaskBase *this_02;
  undefined1 auStackY_168 [32];
  EExtendedTaskPriority local_118;
  ETaskPriority local_117 [7];
  FTaskBase *local_110;
  FPSOPrecacheRequestResult local_108;
  FPSOPrecacheRequestResult local_f8;
  UNiagaraEmitter *local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ENiagaraInterpolatedSpawnMode local_c8;
  ForAnyElementType local_c0;
  int local_b8;
  int local_b4;
  FVersionedNiagaraEmitterWeakPtr local_b0;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> local_98;
  TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable> local_88;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_78;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_168;
  iVar17 = 0;
  (__return_storage_ptr__->AllocatorInstance).SecondaryData =
       (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 4;
  this->PSOPrecacheResult = Complete;
  if (GNiagaraEmitterComputePSOPrecacheMode != 0) {
    piVar18 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0x9d4c);
    local_e0 = param_1;
    if ((*piVar18 <
         `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
         _thread_safe_static_guard_0__) &&
       (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__),
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       == -1)) {
      pwVar16 = FCommandLine::Get();
      `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
           FParse::Param(pwVar16,L"nullrhi");
      _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
    }
    if ((((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false))
        && (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline
            == false)) && (this->SimTarget == GPUComputeSim)) {
      pUVar4 = (this->GPUComputeScript).field0_0x0.DebugPtr;
      this_00 = (pUVar4->ScriptResource).Object;
      if ((this_00 != (FNiagaraShaderScript *)0x0) &&
         (bVar6 = UNiagaraScript::DidScriptCompilationSucceed(pUVar4,true), bVar6)) {
        if (GNiagaraEmitterComputePSOPrecacheMode == 3) {
          local_78.AllocatorInstance.SecondaryData =
               (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0;
          local_78.ArrayNum = 0;
          local_78.ArrayMax = 4;
          if (0 < this_00->NumPermutations) {
            do {
              pTVar10 = FNiagaraShaderScript::GetShaderGameThread(this_00,&local_98,iVar17);
              pFVar11 = (FRHIComputeShader *)
                        TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable>::
                        GetRHIShaderBase(pTVar10,SF_Compute,true);
              PipelineStateCache::PrecacheComputePipelineState
                        (&local_108,pFVar11,L"NiagaraEmitter",true);
              if (local_108.AsyncCompileEvent.Reference == (FBaseGraphTask *)0x0) {
                EVar7 = PipelineStateCache::CheckPipelineStateInCache(pFVar11);
                if (EVar7 != Complete) {
                  this->PSOPrecacheResult = NotSupported;
                  if (local_108.AsyncCompileEvent.Reference != (FBaseGraphTask *)0x0) {
                    LOCK();
                    puVar1 = &(local_108.AsyncCompileEvent.Reference)->field_0x30;
                    iVar17 = *(int *)puVar1;
                    *(int *)puVar1 = *(int *)puVar1 + -1;
                    UNLOCK();
                    if (iVar17 == 1) {
                      (*(code *)**(undefined8 **)local_108.AsyncCompileEvent.Reference)
                                (local_108.AsyncCompileEvent.Reference,1);
                    }
                  }
                  FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
                  if (local_78.AllocatorInstance.SecondaryData !=
                      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                    FVar12 = local_78.AllocatorInstance.SecondaryData;
                  }
                  DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                            ((TRefCountPtr<FBaseGraphTask> *)FVar12,local_78.ArrayNum);
                  if (local_78.AllocatorInstance.SecondaryData ==
                      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                    return __return_storage_ptr__;
                  }
                  FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
                  return __return_storage_ptr__;
                }
LAB_1492b0dd4:
                if (local_108.AsyncCompileEvent.Reference != (FBaseGraphTask *)0x0) {
                  LOCK();
                  puVar1 = &(local_108.AsyncCompileEvent.Reference)->field_0x30;
                  iVar8 = *(int *)puVar1;
                  *(int *)puVar1 = *(int *)puVar1 + -1;
                  UNLOCK();
                  if (iVar8 == 1) {
                    (*(code *)**(undefined8 **)local_108.AsyncCompileEvent.Reference)
                              (local_108.AsyncCompileEvent.Reference,1);
                  }
                }
              }
              else {
                FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
                if (local_78.AllocatorInstance.SecondaryData !=
                    (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                  FVar12 = local_78.AllocatorInstance.SecondaryData;
                }
                if ((ulonglong)FVar12 <= &local_108.AsyncCompileEvent) {
                  FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
                  if (local_78.AllocatorInstance.SecondaryData !=
                      (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                    FVar12 = local_78.AllocatorInstance.SecondaryData;
                  }
                  if ((&local_108.AsyncCompileEvent <
                       (TRefCountPtr<FBaseGraphTask> *)
                       ((longlong)FVar12 + (longlong)local_78.ArrayMax * 8)) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar6)) {
                    pcVar5 = (code *)swi(3);
                    pTVar13 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                               *)(*pcVar5)();
                    return pTVar13;
                  }
                }
                if (local_78.ArrayNum == local_78.ArrayMax) {
                  local_78.ArrayNum =
                       UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                                 (0x808,&local_78.AllocatorInstance,&local_78.ArrayMax);
                }
                FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
                if (local_78.AllocatorInstance.SecondaryData !=
                    (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                  FVar12 = local_78.AllocatorInstance.SecondaryData;
                }
                pTVar2 = (TRefCountPtr<FBaseGraphTask> *)
                         ((longlong)FVar12 + (longlong)local_78.ArrayNum * 8);
                local_78.ArrayNum = local_78.ArrayNum + 1;
                pTVar2->Reference = (FBaseGraphTask *)0x0;
                pTVar2->Reference = local_108.AsyncCompileEvent.Reference;
                if (local_108.AsyncCompileEvent.Reference != (FBaseGraphTask *)0x0) {
                  LOCK();
                  *(int *)&(local_108.AsyncCompileEvent.Reference)->field_0x30 =
                       *(int *)&(local_108.AsyncCompileEvent.Reference)->field_0x30 + 1;
                  UNLOCK();
                  goto LAB_1492b0dd4;
                }
              }
              iVar17 = iVar17 + 1;
              param_1 = local_e0;
            } while (iVar17 < this_00->NumPermutations);
          }
          pUVar4 = (this->GPUComputeScript).field0_0x0.DebugPtr;
          this_02 = (FTaskBase *)0x0;
          local_d8._0_4_ = (pUVar4->CachedScriptVMId).CompilerVersionID.A;
          local_d8._4_4_ = (pUVar4->CachedScriptVMId).CompilerVersionID.B;
          uStack_d0._0_4_ = (pUVar4->CachedScriptVMId).CompilerVersionID.C;
          uStack_d0._4_4_ = (pUVar4->CachedScriptVMId).CompilerVersionID.D;
          local_c8 = (pUVar4->CachedScriptVMId).InterpolatedSpawnMode;
          local_c0.Data = (FScriptContainerElement *)0x0;
          local_b8 = (pUVar4->CachedScriptVMId).BaseScriptCompileHash.DataHash.ArrayNum;
          _Size = (size_t)local_b8;
          _Src = (pUVar4->CachedScriptVMId).BaseScriptCompileHash.DataHash.AllocatorInstance.Data;
          if (local_b8 == 0) {
            local_b4 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,local_b8,0,&local_c0,local_b8,&local_b4);
            memcpy(local_c0.Data,_Src,_Size);
          }
          if (local_78.ArrayNum < 1) {
            this->PSOPrecacheResult = Complete;
          }
          else {
            this->PSOPrecacheResult = Active;
            FVersionedNiagaraEmitterWeakPtr::FVersionedNiagaraEmitterWeakPtr
                      (&local_b0,param_1,&(this->Version).VersionGuid);
            this_01 = TLinearAllocatorBase<FTaskGraphBlockAllocationTag,0>::Malloc(0xf0,8);
            if (this_01 != (FTaskBase *)0x0) {
              FBaseGraphTask::FBaseGraphTask((FBaseGraphTask *)this_01,&local_78);
              this_01->_padding_ =
                   (longlong)
                   &TGraphTask<`FVersionedNiagaraEmitterData::PrecacheComputePSOs'::`11'::FNiagaraEmitterPSOPrecacheReadyTask>
                    ::_vftable_;
              this_02 = this_01;
            }
            this_02[1]._padding_ = (longlong)local_b0.Emitter.WeakPtr;
            this_02[1]._padding_ = local_b0.Version._0_8_;
            this_02[1]._padding_ = local_b0.Version._8_8_;
            UE::Tasks::Private::TranslatePriority(GameThread,local_117,&local_118);
            UE::Tasks::Private::FTaskBase::Init(this_02,L"GraphTask",local_117[0],local_118,None);
            LOCK();
            this_02->RefCount = (atomic<unsigned_int>)((int)this_02->RefCount + 1);
            UNLOCK();
            local_110 = this_02;
            UE::Tasks::Private::FTaskBase::TryLaunch(this_02,0xf0);
            FVar12 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
            FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)__return_storage_ptr__;
            if (FVar12 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar14 = FVar12;
            }
            if ((ulonglong)FVar14 <= &local_110) {
              FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)__return_storage_ptr__;
              if (FVar12 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                FVar14 = FVar12;
              }
              if ((&local_110 <
                   (FTaskBase **)((longlong)FVar14 + (longlong)__return_storage_ptr__->ArrayMax * 8)
                  ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar6)) {
                pcVar5 = (code *)swi(3);
                pTVar13 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                           *)(*pcVar5)();
                return pTVar13;
              }
            }
            iVar17 = __return_storage_ptr__->ArrayNum;
            if (iVar17 == __return_storage_ptr__->ArrayMax) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                                 (0x808,&__return_storage_ptr__->AllocatorInstance,
                                  &__return_storage_ptr__->ArrayMax);
            }
            __return_storage_ptr__->ArrayNum = iVar17 + 1;
            FVar12 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
            FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)__return_storage_ptr__;
            if (FVar12 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
              FVar14 = FVar12;
            }
            puVar3 = (undefined8 *)((longlong)FVar14 + (longlong)iVar17 * 8);
            *puVar3 = 0;
            *puVar3 = local_110;
          }
          if (local_c0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_c0.Data);
          }
          FVar12 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_78;
          if (local_78.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FVar12 = local_78.AllocatorInstance.SecondaryData;
          }
          DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                    ((TRefCountPtr<FBaseGraphTask> *)FVar12,local_78.ArrayNum);
          if (local_78.AllocatorInstance.SecondaryData !=
              (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
            FMemory::Free((void *)local_78.AllocatorInstance.SecondaryData);
          }
        }
        else if ((GNiagaraEmitterComputePSOPrecacheMode == 2) ||
                (bVar6 = PipelineStateCache::IsPSOPrecachingEnabled(), bVar6)) {
          if ((*piVar18 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
            pIVar15 = IConsoleManager::Get();
            CVarPSOProxyCreationWhenPSOReady =
                 (IConsoleVariable *)
                 (**(code **)((longlong)*pIVar15 + 0xc0))
                           (pIVar15,L"r.PSOPrecache.ProxyCreationWhenPSOReady",1);
            _Init_thread_footer(&::_TSS0);
          }
          if (((GNiagaraEmitterComputePSOPrecacheMode == 1) &&
              (CVarPSOProxyCreationWhenPSOReady != (IConsoleVariable *)0x0)) &&
             (iVar8 = (**(code **)(*(longlong *)CVarPSOProxyCreationWhenPSOReady + 200))(),
             iVar8 != 0)) {
            iVar17 = 1;
          }
          iVar8 = 0;
          if (0 < this_00->NumPermutations) {
            do {
              pTVar10 = FNiagaraShaderScript::GetShaderGameThread(this_00,&local_88,iVar8);
              pFVar11 = (FRHIComputeShader *)
                        TShaderRefBase<FNiagaraShader,FNiagaraShaderMapPointerTable>::
                        GetRHIShaderBase(pTVar10,SF_Compute,true);
              PipelineStateCache::PrecacheComputePipelineState
                        (&local_f8,pFVar11,L"NiagaraEmitter",true);
              if (local_f8.AsyncCompileEvent.Reference != (FBaseGraphTask *)0x0) {
                if ((char)iVar17 != '\0') {
                  FVar12 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
                  FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)__return_storage_ptr__;
                  if (FVar12 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                    FVar14 = FVar12;
                  }
                  if ((ulonglong)FVar14 <= &local_f8.AsyncCompileEvent) {
                    FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)__return_storage_ptr__;
                    if (FVar12 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                      FVar14 = FVar12;
                    }
                    if ((&local_f8.AsyncCompileEvent <
                         (undefined1 *)
                         ((longlong)FVar14 + (longlong)__return_storage_ptr__->ArrayMax * 8)) &&
                       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar6)) {
                      pcVar5 = (code *)swi(3);
                      pTVar13 = (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
                                 *)(*pcVar5)();
                      return pTVar13;
                    }
                  }
                  iVar9 = __return_storage_ptr__->ArrayNum;
                  if (iVar9 == __return_storage_ptr__->ArrayMax) {
                    iVar9 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TRefCountPtr<FBaseGraphTask>_>_>
                                      (0x808,&__return_storage_ptr__->AllocatorInstance,
                                       &__return_storage_ptr__->ArrayMax);
                  }
                  __return_storage_ptr__->ArrayNum = iVar9 + 1;
                  FVar12 = (__return_storage_ptr__->AllocatorInstance).SecondaryData;
                  FVar14 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)__return_storage_ptr__;
                  if (FVar12 != (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
                    FVar14 = FVar12;
                  }
                  puVar3 = (undefined8 *)((longlong)FVar14 + (longlong)iVar9 * 8);
                  *puVar3 = 0;
                  *puVar3 = local_f8.AsyncCompileEvent.Reference;
                  if (local_f8.AsyncCompileEvent.Reference == (FBaseGraphTask *)0x0)
                  goto LAB_1492b1262;
                  LOCK();
                  *(int *)&(local_f8.AsyncCompileEvent.Reference)->field_0x30 =
                       *(int *)&(local_f8.AsyncCompileEvent.Reference)->field_0x30 + 1;
                  UNLOCK();
                }
                if (local_f8.AsyncCompileEvent.Reference != (FBaseGraphTask *)0x0) {
                  LOCK();
                  puVar1 = &(local_f8.AsyncCompileEvent.Reference)->field_0x30;
                  iVar9 = *(int *)puVar1;
                  *(int *)puVar1 = *(int *)puVar1 + -1;
                  UNLOCK();
                  if (iVar9 == 1) {
                    (*(code *)**(undefined8 **)local_f8.AsyncCompileEvent.Reference)
                              (local_f8.AsyncCompileEvent.Reference,1);
                  }
                }
              }
LAB_1492b1262:
              iVar8 = iVar8 + 1;
            } while (iVar8 < this_00->NumPermutations);
          }
        }
      }
    }
  }
  return __return_storage_ptr__;
}

// RebuildRendererBindings @ 1492b19f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVersionedNiagaraEmitterData::RebuildRendererBindings
          (FVersionedNiagaraEmitterData *this,UNiagaraEmitter *param_1)

{
  return;
}

// RequiresPersistentIDs @ 1492b44d0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FVersionedNiagaraEmitterData::RequiresPersistentIDs(FVersionedNiagaraEmitterData *this)

{
  return this->bRequiresPersistentIDs;
}

// UpdateDebugName @ 1492bf1b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FVersionedNiagaraEmitterData::UpdateDebugName
          (FVersionedNiagaraEmitterData *this,UNiagaraEmitter *param_1,
          FNiagaraDataSetCompiledData *param_2)

{
  FString *this_00;
  FScriptContainerElement *pFVar1;
  UClass *pUVar2;
  UObject *pUVar3;
  FName local_res8;
  FString local_18;
  
  this_00 = &this->DebugSimName;
  ::FString::Empty(this_00);
  pUVar2 = Z_Construct_UClass_UNiagaraSystem_NoRegister();
  pUVar3 = UObjectBaseUtility::GetTypedOuter((UObjectBaseUtility *)param_1,pUVar2);
  if (pUVar3 != (UObject *)0x0) {
    local_res8.ComparisonIndex.Value = *(uint *)&pUVar3->field_0x18;
    local_res8.Number = *(uint *)&pUVar3->field_0x1c;
    ::FName::ToString(&local_res8,&local_18);
    if (this_00 != &local_18) {
      pFVar1 = (this_00->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (this_00->Data).AllocatorInstance.Data = local_18.Data.AllocatorInstance.Data;
      (this->DebugSimName).Data.ArrayNum = local_18.Data.ArrayNum;
      (this->DebugSimName).Data.ArrayMax = local_18.Data.ArrayMax;
      local_18.Data.ArrayNum = 0;
      local_18.Data.ArrayMax = 0;
      local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    ::FString::AppendChar(this_00,L':');
  }
  return;
}

// UsesCollection @ 1492bfef0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FVersionedNiagaraEmitterData::UsesCollection
          (FVersionedNiagaraEmitterData *this,UNiagaraParameterCollection *param_1)

{
  UNiagaraScript *pUVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  
  pUVar1 = (this->SpawnScriptProps).Script.field0_0x0.DebugPtr;
  if (pUVar1 == (UNiagaraScript *)0x0) {
LAB_1492bff29:
    pUVar1 = (this->UpdateScriptProps).Script.field0_0x0.DebugPtr;
    if (pUVar1 != (UNiagaraScript *)0x0) {
      bVar3 = UNiagaraScript::UsesCollection(pUVar1,param_1);
      if (bVar3) goto LAB_1492c004b;
    }
    uVar6 = 0;
    if (0 < (this->EventHandlerScriptProps).ArrayNum) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar6 < (this->EventHandlerScriptProps).ArrayNum) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar3) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
        }
        if (*(longlong *)((this->EventHandlerScriptProps).AllocatorInstance.Data + lVar7) != 0) {
          uVar5 = 0;
          if ((int)uVar6 < (this->EventHandlerScriptProps).ArrayNum) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if (uVar5 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
          }
          bVar3 = UNiagaraScript::UsesCollection
                            (*(UNiagaraScript **)
                              ((this->EventHandlerScriptProps).AllocatorInstance.Data + lVar7),
                             param_1);
          if (bVar3) goto LAB_1492c004b;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x58;
      } while ((int)uVar6 < (this->EventHandlerScriptProps).ArrayNum);
    }
    bVar3 = false;
  }
  else {
    bVar3 = UNiagaraScript::UsesCollection(pUVar1,param_1);
    if (!bVar3) goto LAB_1492bff29;
LAB_1492c004b:
    bVar3 = true;
  }
  return bVar3;
}

// UsesInterpolatedSpawning @ 1492c0060

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FVersionedNiagaraEmitterData::UsesInterpolatedSpawning(FVersionedNiagaraEmitterData *this)

{
  return this->InterpolatedSpawnMode != NoInterpolation;
}

// UsesScript @ 1492c0070

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

bool __thiscall
FVersionedNiagaraEmitterData::UsesScript(FVersionedNiagaraEmitterData *this,UNiagaraScript *param_1)

{
  UNiagaraScript *pUVar1;
  code *pcVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  
  pUVar1 = (this->SpawnScriptProps).Script.field0_0x0.DebugPtr;
  if (pUVar1 == (UNiagaraScript *)0x0) {
    bVar7 = param_1 == (UNiagaraScript *)0x0;
  }
  else {
    bVar7 = pUVar1 == param_1;
  }
  if (!bVar7) {
    pUVar1 = (this->UpdateScriptProps).Script.field0_0x0.DebugPtr;
    if (pUVar1 == (UNiagaraScript *)0x0) {
      bVar7 = param_1 == (UNiagaraScript *)0x0;
    }
    else {
      bVar7 = pUVar1 == param_1;
    }
    if (!bVar7) {
      uVar5 = 0;
      if (0 < (this->EventHandlerScriptProps).ArrayNum) {
        lVar6 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar5 < (this->EventHandlerScriptProps).ArrayNum) {
            uVar4 = ~uVar5 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar7)) {
            pcVar2 = (code *)swi(3);
            uVar3 = (*pcVar2)();
            return (bool)uVar3;
          }
          pUVar1 = *(UNiagaraScript **)
                    ((this->EventHandlerScriptProps).AllocatorInstance.Data + lVar6);
          if (pUVar1 == (UNiagaraScript *)0x0) {
            bVar7 = param_1 == (UNiagaraScript *)0x0;
          }
          else {
            bVar7 = pUVar1 == param_1;
          }
          if (bVar7) {
            return true;
          }
          uVar5 = uVar5 + 1;
          lVar6 = lVar6 + 0x58;
        } while ((int)uVar5 < (this->EventHandlerScriptProps).ArrayNum);
      }
      return false;
    }
  }
  return true;
}

// operator() @ 149337270

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FVersionedNiagaraEmitterData::
ForEachPlatformSet<`FNiagaraPlatformSet::RefreshScalability'::__l19::<lambda_1>_>'::__l2::<lambda_1>
::operator()(void *this,UNiagaraScript *param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  ForAnyElementType FVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res10 [8];
  
  if (param_1 != (UNiagaraScript *)0x0) {
    iVar1 = (param_1->ResolvedDataInterfaces).ArrayNum;
    pFVar8 = (param_1->ResolvedDataInterfaces).AllocatorInstance.Data;
    if ((iVar1 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar10 = pFVar8 + (longlong)iVar1 * 0x50;
    for (; pFVar8 != pFVar10; pFVar8 = pFVar8 + 0x50) {
      if (*(longlong *)(pFVar8 + 0x40) != 0) {
        pUVar5 = Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister();
        bVar4 = FObjectPtr::IsA((FObjectPtr *)(pFVar8 + 0x40),pUVar5);
        if ((bVar4) && (lVar2 = *(longlong *)(pFVar8 + 0x40), lVar2 != 0)) {
          iVar1 = *(int *)(lVar2 + 0x50);
          plVar7 = *(longlong **)(lVar2 + 0x48);
          plVar9 = plVar7 + (longlong)iVar1 * 6;
          while( true ) {
            if (*(int *)(lVar2 + 0x50) != iVar1) {
              `TCheckedPointerIterator<FNiagaraPlatformSetCVarCondition,int,0>::operator!='::__l2::
              <lambda_1>::operator()(local_res10);
            }
            if (plVar7 == plVar9) break;
            if (FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data ==
                FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
                (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8) {
LAB_14933737a:
              plVar7 = plVar7 + 6;
            }
            else {
              FVar6.Data = FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data;
              do {
                if (*(longlong *)FVar6.Data == *plVar7) {
                  **(undefined1 **)this = 1;
                  goto LAB_14933737a;
                }
                FVar6.Data = FVar6.Data + 8;
              } while (FVar6.Data !=
                       FNiagaraPlatformSet::ChangedCVars.AllocatorInstance.Data +
                       (longlong)FNiagaraPlatformSet::ChangedCVars.ArrayNum * 8);
              plVar7 = plVar7 + 6;
            }
          }
        }
      }
    }
  }
  return;
}

// operator() @ 1493d2560

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
`FVersionedNiagaraEmitterData::ForEachPlatformSet<`UNiagaraSystem::PostLoad'::__l2::<lambda_1>_>'::
__l2::<lambda_1>::operator()(void *this,UNiagaraScript *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  
  if (param_1 != (UNiagaraScript *)0x0) {
    pFVar5 = (param_1->ResolvedDataInterfaces).AllocatorInstance.Data;
    iVar1 = (param_1->ResolvedDataInterfaces).ArrayNum;
    if ((iVar1 < 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pFVar6 = pFVar5 + (longlong)iVar1 * 0x50;
    for (; pFVar5 != pFVar6; pFVar5 = pFVar5 + 0x50) {
      if (*(longlong *)(pFVar5 + 0x40) != 0) {
        pUVar4 = Z_Construct_UClass_UNiagaraDataInterfacePlatformSet_NoRegister();
        bVar3 = FObjectPtr::IsA((FObjectPtr *)(pFVar5 + 0x40),pUVar4);
        if ((bVar3) && (*(longlong *)(pFVar5 + 0x40) != 0)) {
          FNiagaraPlatformSet::ApplyRedirects
                    ((FNiagaraPlatformSet *)(*(longlong *)(pFVar5 + 0x40) + 0x38));
        }
      }
    }
  }
  return;
}

// operator() @ 15053fc20

bool __thiscall `FVersionedNiagaraEmitterData::PostLoad'::__l12::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FString local_18;
  
  bVar4 = false;
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8166792025996262674>);
  if (bVar2) {
    UObjectBaseUtility::GetPathName(*(UObjectBaseUtility **)this,&local_18,(UObject *)0x0);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8166792025996262674>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15053fca1;
    }
  }
  bVar2 = false;
LAB_15053fca1:
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

