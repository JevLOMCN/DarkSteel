// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 19

// StaticStruct @ 14937ae50

UScriptStruct * __cdecl FNiagaraScalabilityManager::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraScalabilityManager.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraScalabilityManager.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraScalabilityManager,(UObject *)pUVar1,
                         L"NiagaraScalabilityManager");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraScalabilityManager.OuterSingleton;
}

// FNiagaraScalabilityManager @ 149386bd0

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

FNiagaraScalabilityManager * __thiscall
FNiagaraScalabilityManager::FNiagaraScalabilityManager
          (FNiagaraScalabilityManager *this,FNiagaraWorldManager *param_1)

{
  this->WorldMan = param_1;
  (this->EffectType).field0_0x0.DebugPtr = (UNiagaraEffectType *)0x0;
  (this->ManagedComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManagedComponents).ArrayNum = 0;
  (this->ManagedComponents).ArrayMax = 0;
  (this->State).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->State).ArrayNum = 0;
  (this->State).ArrayMax = 0;
  *(undefined8 *)&this->SystemDataIndexMap = 0;
  *(undefined8 *)&(this->SystemDataIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->SystemDataIndexMap).field_0x20 = 0;
  *(undefined4 *)&(this->SystemDataIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->SystemDataIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemDataIndexMap).field_0x34 = 0;
  *(undefined4 *)&(this->SystemDataIndexMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SystemDataIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->SystemDataIndexMap).field_0x48 = 0;
  (this->SystemData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemData).ArrayNum = 0;
  (this->SystemData).ArrayMax = 0;
  (this->DefaultContext).SignificanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DefaultContext).SignificanceIndices.ArrayNum = 0;
  (this->DefaultContext).SignificanceIndices.ArrayMax = 0;
  (this->DefaultContext).ComponentRequiresUpdate.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  this->LastUpdateTime = 0.0;
  this->bRefreshOwnerAllowsScalability = false;
  (this->DefaultContext).ComponentRequiresUpdate.NumBits = 0;
  *(undefined8 *)&(this->DefaultContext).ComponentRequiresUpdate.MaxBits = 0x80;
  (this->DefaultContext).WorstGlobalBudgetUse = 0.0;
  (this->DefaultContext).bNewOnly = false;
  (this->DefaultContext).bProcessAllComponents = false;
  (this->DefaultContext).bHasDirtyState = false;
  (this->DefaultContext).bRequiresGlobalSignificancePass = false;
  this->bRefreshCachedSystemData = false;
  return this;
}

// FNiagaraScalabilityManager @ 149386c70

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

FNiagaraScalabilityManager * __thiscall
FNiagaraScalabilityManager::FNiagaraScalabilityManager(FNiagaraScalabilityManager *this)

{
  (this->EffectType).field0_0x0.DebugPtr = (UNiagaraEffectType *)0x0;
  (this->ManagedComponents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ManagedComponents).ArrayNum = 0;
  (this->ManagedComponents).ArrayMax = 0;
  (this->State).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->State).ArrayNum = 0;
  (this->State).ArrayMax = 0;
  *(undefined8 *)&this->SystemDataIndexMap = 0;
  *(undefined8 *)&(this->SystemDataIndexMap).field_0x8 = 0;
  *(undefined8 *)&(this->SystemDataIndexMap).field_0x20 = 0;
  this->WorldMan = (FNiagaraWorldManager *)0x0;
  *(undefined4 *)&(this->SystemDataIndexMap).field_0x28 = 0;
  *(undefined4 *)&(this->SystemDataIndexMap).field_0x2c = 0x80;
  *(undefined4 *)&(this->SystemDataIndexMap).field_0x34 = 0;
  *(undefined4 *)&(this->SystemDataIndexMap).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->SystemDataIndexMap).field_0x40 = 0;
  *(undefined4 *)&(this->SystemDataIndexMap).field_0x48 = 0;
  (this->SystemData).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SystemData).ArrayNum = 0;
  (this->SystemData).ArrayMax = 0;
  (this->DefaultContext).SignificanceIndices.AllocatorInstance.Data = (FScriptContainerElement *)0x0
  ;
  (this->DefaultContext).SignificanceIndices.ArrayNum = 0;
  (this->DefaultContext).SignificanceIndices.ArrayMax = 0;
  (this->DefaultContext).ComponentRequiresUpdate.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  this->LastUpdateTime = 0.0;
  this->bRefreshOwnerAllowsScalability = false;
  (this->DefaultContext).ComponentRequiresUpdate.NumBits = 0;
  *(undefined8 *)&(this->DefaultContext).ComponentRequiresUpdate.MaxBits = 0x80;
  (this->DefaultContext).WorstGlobalBudgetUse = 0.0;
  (this->DefaultContext).bNewOnly = false;
  (this->DefaultContext).bProcessAllComponents = false;
  (this->DefaultContext).bHasDirtyState = false;
  (this->DefaultContext).bRequiresGlobalSignificancePass = false;
  this->bRefreshCachedSystemData = false;
  return this;
}

// ~FNiagaraScalabilityManager @ 14938a050

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
FNiagaraScalabilityManager::~FNiagaraScalabilityManager(FNiagaraScalabilityManager *this)

{
  int *piVar1;
  int iVar2;
  ForElementType<unsigned_int> FVar3;
  FScriptContainerElement *pFVar4;
  void *pvVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar6 = (this->ManagedComponents).AllocatorInstance.Data;
  iVar2 = (this->ManagedComponents).ArrayNum;
  pFVar4 = pFVar6 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ManagedComponents).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar6 == pFVar4) break;
    if (*(longlong *)pFVar6 != 0) {
      *(undefined4 *)(*(longlong *)pFVar6 + 0x728) = 0xffffffff;
    }
    pFVar6 = pFVar6 + 8;
  }
  piVar1 = &(this->ManagedComponents).ArrayMax;
  (this->ManagedComponents).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ManagedComponents).AllocatorInstance,0,piVar1);
  }
  FVar3 = (this->DefaultContext).ComponentRequiresUpdate.AllocatorInstance.SecondaryData;
  if (FVar3 != (ForElementType<unsigned_int>)0x0) {
    FMemory::Free((void *)FVar3);
  }
  pFVar4 = (this->DefaultContext).SignificanceIndices.AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->SystemData).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  *(undefined4 *)&(this->SystemDataIndexMap).field_0x48 = 0;
  pvVar5 = *(void **)&(this->SystemDataIndexMap).field_0x40;
  if (pvVar5 != (void *)0x0) {
    FMemory::Free(pvVar5);
  }
  TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UNiagaraSystem_*,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->SystemDataIndexMap);
  pFVar4 = (this->State).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  pFVar4 = (this->ManagedComponents).AllocatorInstance.Data;
  if (pFVar4 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar4);
  }
  return;
}

// operator() @ 14938d430

bool __thiscall
`FNiagaraScalabilityManager::ProcessSignificance'::__l2::<lambda_2>::operator()
          (void *this,int param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  
  lVar1 = *(longlong *)((longlong)this + 8);
  uVar6 = 0;
  if (param_2 < *(int *)(lVar1 + 0x28)) {
    uVar6 = (uint)~param_2 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  lVar1 = *(longlong *)(lVar1 + 0x20);
  lVar2 = *(longlong *)((longlong)this + 8);
  uVar6 = 0;
  if (param_1 < *(int *)(lVar2 + 0x28)) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  return *(float *)(lVar1 + (longlong)param_2 * 0xc) <
         *(float *)(*(longlong *)(lVar2 + 0x20) + (longlong)param_1 * 0xc);
}

// AddReferencedObjects @ 14938f5d0

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
FNiagaraScalabilityManager::AddReferencedObjects
          (FNiagaraScalabilityManager *this,FReferenceCollector *param_1)

{
  (**(code **)(param_1->_padding_ + 0x88))(param_1,&this->EffectType,0,0);
  (**(code **)(param_1->_padding_ + 0x90))
            (param_1,(this->ManagedComponents).AllocatorInstance.Data,
             (this->ManagedComponents).ArrayNum,0,0);
  return;
}

// ApplyScalabilityState @ 14938f760

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

bool __thiscall
FNiagaraScalabilityManager::ApplyScalabilityState
          (FNiagaraScalabilityManager *this,int param_1,ENiagaraCullReaction param_2,bool param_3)

{
  FNiagaraGlobalBudgetScaling *pFVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  FScriptContainerElement FVar4;
  undefined4 uVar5;
  FScriptContainerElement *pFVar6;
  UNiagaraComponent *this_00;
  UNiagaraSystem *pUVar7;
  FNiagaraWorldManager *pFVar8;
  FNiagaraSystemScalabilitySettings *pFVar9;
  code *pcVar10;
  bool bVar11;
  undefined1 uVar12;
  uint uVar13;
  FNiagaraScalabilitySystemData *pFVar14;
  FNiagaraSystemScalabilityKillCounts *pFVar15;
  longlong lVar16;
  ulonglong uVar17;
  int iVar18;
  int iVar19;
  float fVar20;
  bool local_res10;
  FWeakObjectPtr local_60;
  UNiagaraSystem *local_58;
  FString local_50;
  
  lVar16 = (longlong)param_1;
  uVar13 = 0;
  if (param_1 < (this->State).ArrayNum) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  pFVar6 = (this->State).AllocatorInstance.Data;
  FVar4 = pFVar6[lVar16 * 0xc + 10];
  if (((((byte)FVar4 >> 1 ^ (byte)FVar4) & 4) == 0) || ((param_3 && (((byte)FVar4 & 2) == 0)))) {
    return true;
  }
  local_res10 = true;
  uVar13 = 0;
  if (param_1 < (this->ManagedComponents).ArrayNum) {
    uVar13 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar13 == 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  this_00 = *(UNiagaraComponent **)((this->ManagedComponents).AllocatorInstance.Data + lVar16 * 8);
  if (this_00 == (UNiagaraComponent *)0x0) {
    return true;
  }
  pFVar14 = GetSystemData(this,param_1,false);
  if (pFVar14->bNeedsSignificanceForCulled != 0) {
    if (param_2 == Deactivate) {
      param_2 = DeactivateImmediate;
    }
    else if (param_2 == DeactivateResume) {
      param_2 = DeactivateImmediateResume;
    }
  }
  uVar3 = *(undefined8 *)(pFVar6 + lVar16 * 0xc);
  pUVar7 = (this_00->Asset).field0_0x0.DebugPtr;
  (this_00->DebugCachedScalabilityState).Significance = (float)(int)uVar3;
  (this_00->DebugCachedScalabilityState).LastVisibleTime = (float)(int)((ulonglong)uVar3 >> 0x20);
  *(undefined4 *)&(this_00->DebugCachedScalabilityState).SystemDataIndex =
       *(undefined4 *)(pFVar6 + lVar16 * 0xc + 8);
  if ((pUVar7 == (UNiagaraSystem *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("System",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScalabilityManager.cpp"
                          ,0x1a2,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    uVar12 = (*pcVar10)();
    return (bool)uVar12;
  }
  FVar4 = pFVar6[lVar16 * 0xc + 10];
  if (((byte)FVar4 & 4) == 0) {
    if (((GEnableNiagaraGlobalBudgetCulling == 0) || (FFXBudget::bEnabled == false)) ||
       (INiagaraModule::bUseGlobalFXBudget == false)) {
      pFVar9 = ((this_00->Asset).field0_0x0.DebugPtr)->CurrentScalabilitySettings;
      iVar18 = pFVar9->MaxSystemInstances;
      iVar19 = pFVar9->MaxInstances;
    }
    else {
      local_58 = (UNiagaraSystem *)
                 ((this_00->Asset).field0_0x0.DebugPtr)->CurrentScalabilitySettings;
      iVar18 = ((FNiagaraSystemScalabilitySettings *)local_58)->MaxSystemInstances;
      iVar19 = ((FNiagaraSystemScalabilitySettings *)local_58)->MaxInstances;
      uVar13 = pFVar1->bScaleSystemInstanceCountByGlobalBudgetUse;
      if ((pFVar1->bScaleMaxInstanceCountByGlobalBudgetUse != 0) || (uVar13 != 0)) {
        uVar5 = *(undefined4 *)&((FNiagaraSystemScalabilitySettings *)local_58)->field_0x30;
        uVar17 = (ulonglong)(uint)uVar5;
        local_60.ObjectIndex = uVar5;
        if ((ZPULL(uVar5,1,1) != 0) && (pFVar1->bScaleMaxInstanceCountByGlobalBudgetUse != 0)) {
          fVar20 = FNiagaraLinearRamp::Evaluate
                             (&(((FNiagaraSystemScalabilitySettings *)local_58)->BudgetScaling).
                               MaxInstanceCountScaleByGlobalBudgetUse,FFXBudget::WorstAdjustedUsage)
          ;
          uVar17 = (ulonglong)local_60 & 0xffffffff;
          iVar19 = (int)(fVar20 * (float)iVar19);
        }
        if (((uVar17 & 4) != 0) && (uVar13 != 0)) {
          fVar20 = FNiagaraLinearRamp::Evaluate
                             (&((FNiagaraGlobalBudgetScaling *)
                               &local_58->CustomDepthStencilWriteMask)->
                               MaxSystemInstanceCountScaleByGlobalBudgetUse,
                              FFXBudget::WorstAdjustedUsage);
          iVar18 = (int)(fVar20 * (float)*(int *)&local_58->_padding_);
        }
      }
    }
    pFVar9 = pUVar7->CurrentScalabilitySettings;
    if (((((GApplyInstanceCountsRigidly != 0) &&
          (bVar11 = UNiagaraComponent::IsComplete(this_00), bVar11)) &&
         (pFVar9->bCullMaxInstanceCount != 0)) &&
        ((iVar19 <= ((this->EffectType).field0_0x0.DebugPtr)->NumInstances &&
         (pFVar9->bCullPerSystemMaxInstanceCount != 0)))) && (iVar18 <= pUVar7->ActiveInstances)) {
      return true;
    }
    FVar4 = pFVar6[lVar16 * 0xc + 10];
    pFVar6[lVar16 * 0xc + 10] =
         (FScriptContainerElement)(((char)FVar4 * '\x02' ^ (byte)FVar4) & 8 ^ (byte)FVar4);
    if (param_2 < DeactivateResume) {
      if ((byte)LogNiagara._0_1_ < 2) {
        return true;
      }
      UObjectBaseUtility::GetFullName
                ((UObjectBaseUtility *)(this_00->Asset).field0_0x0.DebugPtr,&local_50,(UObject *)0x0
                 ,None);
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_50.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return true;
      }
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
      return true;
    }
    bVar11 = false;
    if (1 < param_2 - PauseResume) {
      UNiagaraComponent::ActivateInternal(this_00,false,true);
      return true;
    }
LAB_14938fa21:
    UNiagaraComponent::SetPausedInternal(this_00,bVar11,true);
    return true;
  }
  pFVar6[lVar16 * 0xc + 10] =
       (FScriptContainerElement)(((char)FVar4 * '\x02' ^ (byte)FVar4) & 8 ^ (byte)FVar4);
  switch(param_2) {
  case Deactivate:
    UNiagaraComponent::DeactivateInternal(this_00,false);
    goto LAB_14938f918;
  case DeactivateImmediate:
    UNiagaraComponent::DeactivateImmediateInternal(this_00,false);
LAB_14938f918:
    pFVar8 = this->WorldMan;
    local_res10 = false;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UNiagaraSystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    local_60.ObjectIndex = 0;
    local_60.ObjectSerialNumber = 0;
    local_58 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UNiagaraSystem *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    FWeakObjectPtr::operator=(&local_60,(FObjectPtr)&local_58);
    pFVar15 = TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>_>
              ::FindOrAddImpl<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>_>
                        ((TMapBase<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr>,FNiagaraSystemScalabilityKillCounts,0>_>
                          *)&pFVar8->SystemScalabilityKillCounts,
                         local_60.ObjectSerialNumber ^ local_60.ObjectIndex,
                         (TWeakObjectPtr<UNiagaraSystem,FWeakObjectPtr> *)&local_60);
    if ((this_00->DebugCachedScalabilityState).bCulled != '\0') {
      pFVar15->Total = pFVar15->Total + 1;
      pFVar15->Distance =
           pFVar15->Distance + (this_00->DebugCachedScalabilityState).bCulledByDistance;
      pFVar15->InstanceCounts =
           pFVar15->InstanceCounts + (this_00->DebugCachedScalabilityState).bCulledByInstanceCount;
      pFVar15->Visibility =
           pFVar15->Visibility + (this_00->DebugCachedScalabilityState).bCulledByVisibility;
      pFVar15->GlobalBudget =
           pFVar15->GlobalBudget + (this_00->DebugCachedScalabilityState).bCulledByGlobalBudget;
      local_res10 = false;
    }
    break;
  case DeactivateResume:
    UNiagaraComponent::DeactivateInternal(this_00,true);
    local_res10 = true;
    break;
  case DeactivateImmediateResume:
  case DeactivateResumeWithDelta:
    UNiagaraComponent::DeactivateImmediateInternal(this_00,true);
    local_res10 = true;
    break;
  case PauseResume:
  case PauseResumeWithDelta:
    bVar11 = true;
    goto LAB_14938fa21;
  }
  return local_res10;
}

// CSVProfilerUpdate @ 149395510

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
FNiagaraScalabilityManager::CSVProfilerUpdate
          (FNiagaraScalabilityManager *this,FCsvProfiler *param_1)

{
  FScriptContainerElement FVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FParticlePerfStats *pFVar6;
  uint uVar7;
  int *piVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  int local_res10;
  int local_res18;
  int local_res20;
  
  if (((param_1 == (FCsvProfiler *)0x0) || (bVar4 = FCsvProfiler::IsCapturing(param_1), !bVar4)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("CSVProfiler && CSVProfiler->IsCapturing()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScalabilityManager.cpp"
                         ,0x31c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (FParticlePerfStats::bCSVStatsEnabled != (TAtomic<bool>)0x0) {
    piVar8 = (int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x9d4c);
    if ((*piVar8 < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      ::FName::FName(&Total,L"NiagaraCulled/Total");
      _Init_thread_footer(&::_TSS0);
    }
    if ((*piVar8 < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&Distance,L"NiagaraCulled/Distance");
      _Init_thread_footer(&::_TSS1);
    }
    if ((*piVar8 < ::_TSS2) && (_Init_thread_header(&::_TSS2), ::_TSS2 == -1)) {
      ::FName::FName(&InstCounts,L"NiagaraCulled/InstCounts");
      _Init_thread_footer(&::_TSS2);
    }
    if ((*piVar8 < ::_TSS3) && (_Init_thread_header(&::_TSS3), ::_TSS3 == -1)) {
      ::FName::FName(&::Visibility,L"NiagaraCulled/Visibility");
      _Init_thread_footer(&::_TSS3);
    }
    if ((*piVar8 < ::_TSS4) && (_Init_thread_header(&::_TSS4), ::_TSS4 == -1)) {
      ::FName::FName(&Budget,L"NiagaraCulled/Budgets");
      _Init_thread_footer(&::_TSS4);
    }
    local_res10 = 0;
    iVar10 = 0;
    local_res18 = 0;
    iVar11 = 0;
    local_res20 = 0;
    uVar7 = 0;
    if (0 < (this->ManagedComponents).ArrayNum) {
      lVar9 = 0;
      lVar12 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar7 < (this->ManagedComponents).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
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
        lVar2 = *(longlong *)((this->ManagedComponents).AllocatorInstance.Data + lVar12);
        uVar5 = 0;
        if ((int)uVar7 < (this->State).ArrayNum) {
          uVar5 = ~uVar7 >> 0x1f;
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
        FVar1 = (this->State).AllocatorInstance.Data[lVar9 + 10];
        iVar10 = iVar10 + ((byte)FVar1 >> 2 & 1);
        iVar11 = iVar11 + ((byte)FVar1 >> 4 & 1);
        local_res10 = local_res10 + ((byte)FVar1 >> 5 & 1);
        local_res18 = local_res18 + ((byte)FVar1 >> 6 & 1);
        local_res20 = local_res20 + (uint)((byte)FVar1 >> 7);
        if (((byte)FVar1 & 4) != 0) {
          pFVar6 = FParticlePerfStatsManager::GetSystemPerfStats
                             (*(UFXSystemAsset **)(lVar2 + 0x550));
          FCsvProfiler::RecordCustomStat
                    (&pFVar6->CSVStat_Culled,_GCsvCategory_Particles.Index,1,Accumulate);
        }
        uVar7 = uVar7 + 1;
        lVar12 = lVar12 + 8;
        lVar9 = lVar9 + 0xc;
      } while ((int)uVar7 < (this->ManagedComponents).ArrayNum);
    }
    FCsvProfiler::RecordCustomStat(&Total,_GCsvCategory_Particles.Index,iVar10,Accumulate);
    FCsvProfiler::RecordCustomStat(&Distance,_GCsvCategory_Particles.Index,iVar11,Accumulate);
    FCsvProfiler::RecordCustomStat(&InstCounts,_GCsvCategory_Particles.Index,local_res10,Accumulate)
    ;
    FCsvProfiler::RecordCustomStat
              (&::Visibility,_GCsvCategory_Particles.Index,local_res18,Accumulate);
    FCsvProfiler::RecordCustomStat(&Budget,_GCsvCategory_Particles.Index,local_res20,Accumulate);
  }
  return;
}

// Dump @ 14939ccc0

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

void __thiscall FNiagaraScalabilityManager::Dump(FNiagaraScalabilityManager *this)

{
  UObjectBaseUtility *this_00;
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong local_b8;
  FString local_b0;
  FString local_a0;
  FString local_90;
  FString local_80;
  FString local_70;
  FString local_60 [2];
  
  uVar6 = 0;
  local_a0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_a0.Data.ArrayNum = 0;
  local_a0.Data.ArrayMax = 0;
  if (0 < (this->ManagedComponents).ArrayNum) {
    local_b8 = 0;
    uVar8 = uVar6;
    do {
      uVar7 = (uint)uVar8;
      uVar5 = 0;
      if ((int)uVar7 < (this->ManagedComponents).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = *(UObjectBaseUtility **)
                 ((this->ManagedComponents).AllocatorInstance.Data + local_b8);
      uVar5 = 0;
      if ((int)uVar7 < (this->State).ArrayNum) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->State).AllocatorInstance.Data;
      ::FString::FString(&local_b0,L"Active:");
      if (((byte)pFVar1[uVar6 + 10] & 4) != 0) {
        ::FString::operator=(&local_b0,L"Culled:");
      }
      if (((byte)pFVar1[uVar6 + 10] & 0x10) != 0) {
        ::FString::AppendChars(&local_b0,L"-Distance-",10);
      }
      if (((byte)pFVar1[uVar6 + 10] & 0x20) != 0) {
        ::FString::AppendChars(&local_b0,L"-Inst Count-",0xc);
      }
      if (((byte)pFVar1[uVar6 + 10] & 0x40) != 0) {
        ::FString::AppendChars(&local_b0,L"-Visibility-",0xc);
      }
      UObjectBaseUtility::GetPathName(this_00,&local_70,(UObject *)0x0);
      UObjectBaseUtility::GetPathName
                (*(UObjectBaseUtility **)(this_00 + 0x22),&local_80,(UObject *)0x0);
      ::FString::PrintfImpl(&local_90,L"| %s | Sig: %2.4f | %p | %s | %s |\n");
      iVar3 = local_90.Data.ArrayNum + -1;
      if (local_90.Data.ArrayNum == 0) {
        iVar3 = 0;
      }
      ::FString::AppendChars(&local_a0,(wchar_t *)local_90.Data.AllocatorInstance.Data,iVar3);
      if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.Data.AllocatorInstance.Data);
      }
      if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_80.Data.AllocatorInstance.Data);
      }
      if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_70.Data.AllocatorInstance.Data);
      }
      if (local_b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data.AllocatorInstance.Data);
      }
      uVar8 = (ulonglong)(uVar7 + 1);
      local_b8 = local_b8 + 8;
      uVar6 = uVar6 + 0xc;
    } while ((int)(uVar7 + 1) < (this->ManagedComponents).ArrayNum);
  }
  if ((3 < (byte)LogNiagara._0_1_) &&
     (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
     3 < (byte)LogNiagara._0_1_)) {
    UObjectBaseUtility::GetPathName
              ((UObjectBaseUtility *)(this->EffectType).field0_0x0.DebugPtr,local_60,(UObject *)0x0)
    ;
    UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    if (local_60[0].Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_60[0].Data.AllocatorInstance.Data);
    }
    if ((((((3 < (byte)LogNiagara._0_1_) &&
           (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
           3 < (byte)LogNiagara._0_1_)) &&
          (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
          3 < (byte)LogNiagara._0_1_)) &&
         ((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
          3 < (byte)LogNiagara._0_1_ &&
          (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
          3 < (byte)LogNiagara._0_1_)))) &&
        ((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
         3 < (byte)LogNiagara._0_1_ &&
         ((UE::Logging::Private::BasicLog<4>
                     ((FStaticBasicLogRecord *)&PTR_u___Num_Culled_By_151e04ec0,
                      (FLogCategoryBase *)&LogNiagara), 3 < (byte)LogNiagara._0_1_ &&
          (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
          3 < (byte)LogNiagara._0_1_)))))) &&
       ((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
        3 < (byte)LogNiagara._0_1_ &&
        ((UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
         3 < (byte)LogNiagara._0_1_ &&
         (UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara),
         3 < (byte)LogNiagara._0_1_)))))) {
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
  }
  if (local_a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a0.Data.AllocatorInstance.Data);
  }
  return;
}

// EvaluateCullState @ 1493a03d0

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

bool __thiscall
FNiagaraScalabilityManager::EvaluateCullState
          (FNiagaraScalabilityManager *this,FComponentIterationContext *param_1,int param_2,
          int *param_3)

{
  FNiagaraScalabilityState *pFVar1;
  byte bVar2;
  UNiagaraComponent *pUVar3;
  UNiagaraSystem *pUVar4;
  FNiagaraSystemScalabilitySettings *pFVar5;
  code *pcVar6;
  bool bVar7;
  undefined1 uVar8;
  uint uVar9;
  FNiagaraScalabilitySystemData *pFVar10;
  FName local_res8;
  FName local_68;
  FString local_60;
  FString local_50;
  
  if (((param_2 < 0) || ((this->ManagedComponents).ArrayNum <= param_2)) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ManagedComponents.IsValidIndex(ComponentIndex)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScalabilityManager.cpp"
                         ,0xd2,L""), bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  uVar9 = 0;
  if (param_2 < (this->ManagedComponents).ArrayNum) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    uVar8 = (*pcVar6)();
    return (bool)uVar8;
  }
  pUVar3 = *(UNiagaraComponent **)
            ((this->ManagedComponents).AllocatorInstance.Data + (longlong)param_2 * 8);
  if (pUVar3 == (UNiagaraComponent *)0x0) {
    UnregisterAt(this,param_2);
    return false;
  }
  if (((uint)pUVar3->_padding_ >> 0x1e & 1) == 0) {
    uVar9 = 0;
    if (param_2 < (this->State).ArrayNum) {
      uVar9 = (uint)~param_2 >> 0x1f;
    }
    if ((uVar9 == 0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      uVar8 = (*pcVar6)();
      return (bool)uVar8;
    }
    pFVar1 = (FNiagaraScalabilityState *)
             ((this->State).AllocatorInstance.Data + (longlong)param_2 * 0xc);
    if ((pUVar3->ScalabilityManagerHandle == param_2) &&
       ((param_1->bNewOnly == false || (pFVar1->bNewlyRegistered != 0)))) {
      pUVar4 = (pUVar3->Asset).field0_0x0.DebugPtr;
      if (pUVar4 == (UNiagaraSystem *)0x0) {
        if (2 < (byte)LogNiagara._0_1_) {
          local_res8 = (FName)((this->EffectType).field0_0x0.DebugPtr)->_padding_;
          ::FName::ToString(&local_res8,&local_50);
          local_68 = (FName)pUVar3->_padding_;
          ::FName::ToString(&local_68,&local_60);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
          if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_60.Data.AllocatorInstance.Data);
          }
          if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_50.Data.AllocatorInstance.Data);
          }
        }
        goto LAB_1493a05c9;
      }
      bVar2 = pFVar1->field_0xa;
      pFVar1->field_0xa = ((bVar2 * '\x02' ^ bVar2) & 2 ^ bVar2) & 0xfe;
      pFVar5 = pUVar4->CurrentScalabilitySettings;
      pFVar10 = GetSystemData(this,param_2,false);
      pFVar1->bCulledByInstanceCount = '\0';
      pFVar1->bCulledByDistance = '\0';
      pFVar1->bCulledByVisibility = '\0';
      FNiagaraWorldManager::CalculateScalabilityState
                (this->WorldMan,pUVar4,pFVar5,(this->EffectType).field0_0x0.DebugPtr,pUVar3,false,
                 param_1->WorstGlobalBudgetUse,pFVar1);
      if (((pFVar10->bNeedsSignificanceForActiveOrDirty != 0) &&
          ((uVar8 = pFVar1->field_0xa, pFVar1->bCulled == '\0' ||
           ((((byte)uVar8 >> 1 ^ uVar8) & 4) != 0)))) || (pFVar10->bNeedsSignificanceForCulled != 0)
         ) {
        param_1->bRequiresGlobalSignificancePass =
             (bool)(param_1->bRequiresGlobalSignificancePass | pUVar4->bNeedsSortedSignificanceCull)
        ;
      }
      param_1->bHasDirtyState =
           (bool)(param_1->bHasDirtyState |
                 (byte)((byte)pFVar1->field_0xa >> 1 ^ pFVar1->field_0xa) >> 2 & 1);
      *param_3 = *param_3 + 1;
    }
    bVar7 = true;
  }
  else {
LAB_1493a05c9:
    Unregister(this,pUVar3);
    bVar7 = false;
  }
  return bVar7;
}

// GetSystemData @ 1493a7f20

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

FNiagaraScalabilitySystemData * __thiscall
FNiagaraScalabilityManager::GetSystemData(FNiagaraScalabilityManager *this,int param_1,bool param_2)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  short sVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FNiagaraScalabilitySystemData *pFVar8;
  uint uVar9;
  int *piVar10;
  ushort uVar11;
  undefined1 *puVar12;
  ushort uVar13;
  longlong lVar14;
  ulonglong local_res8;
  TKeyInitializer<UNiagaraSystem_*_const_&> local_res10 [2];
  ulonglong *local_res20;
  
  lVar14 = (longlong)param_1;
  uVar9 = 0;
  if (param_1 < (this->State).ArrayNum) {
    uVar9 = (uint)~param_1 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FNiagaraScalabilitySystemData *)(*pcVar5)();
      return pFVar8;
    }
  }
  pFVar4 = (this->State).AllocatorInstance.Data;
  if ((*(short *)(pFVar4 + lVar14 * 0xc + 8) == -1) || (param_2)) {
    uVar9 = 0;
    if (param_1 < (this->ManagedComponents).ArrayNum) {
      uVar9 = (uint)~param_1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FNiagaraScalabilitySystemData *)(*pcVar5)();
        return pFVar8;
      }
    }
    local_res8 = *(ulonglong *)
                  (*(longlong *)((this->ManagedComponents).AllocatorInstance.Data + lVar14 * 8) +
                  0x550);
    uVar9 = ((uint)(local_res8 >> 0x14) & 0xffff ^ (uint)(local_res8 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    if (*(int *)&(this->SystemDataIndexMap).field_0x8 !=
        *(int *)&(this->SystemDataIndexMap).field_0x34) {
      puVar12 = *(undefined1 **)&(this->SystemDataIndexMap).field_0x40;
      if (puVar12 == (undefined1 *)0x0) {
        puVar12 = &(this->SystemDataIndexMap).field_0x38;
      }
      iVar7 = *(int *)(puVar12 +
                      (ulonglong)
                      (*(int *)&(this->SystemDataIndexMap).field_0x48 - 1U & (uVar9 >> 0x10 ^ uVar9)
                      ) * 4);
      if (iVar7 != -1) {
        do {
          lVar1 = *(longlong *)&this->SystemDataIndexMap + (longlong)iVar7 * 0x18;
          if (*(ulonglong *)(*(longlong *)&this->SystemDataIndexMap + (longlong)iVar7 * 0x18) ==
              local_res8) {
            piVar10 = (int *)(lVar1 + 8);
            if (lVar1 == 0) {
              piVar10 = (int *)0x0;
            }
            if (piVar10 != (int *)0x0) {
              iVar7 = *piVar10;
              if (0x7fff < iVar7) {
                bVar6 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<_2647350779635039554>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScalabilityManager.cpp"
                                   ,0x2be,"SysDataIndexValue <= TNumericLimits<int16>::Max()");
                if (bVar6) {
                  pcVar5 = (code *)swi(3);
                  pFVar8 = (FNiagaraScalabilitySystemData *)(*pcVar5)();
                  return pFVar8;
                }
              }
              *(short *)(pFVar4 + lVar14 * 0xc + 8) = (short)iVar7;
              goto LAB_1493a81d9;
            }
            break;
          }
          iVar7 = *(int *)(lVar1 + 0x10);
        } while (iVar7 != -1);
      }
    }
    if (0x7fff < (this->SystemData).ArrayNum) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2647350779635039565>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScalabilityManager.cpp"
                         ,0x2b3,
                         "SystemData.Num() <= TNumericLimits<decltype(CompState.SystemDataIndex)>::Max()"
                        );
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        pFVar8 = (FNiagaraScalabilitySystemData *)(*pcVar5)();
        return pFVar8;
      }
    }
    sVar3 = (short)(this->SystemData).ArrayNum;
    local_res20 = &local_res8;
    *(short *)(pFVar4 + lVar14 * 0xc + 8) = sVar3;
    TSet<TTuple<UNiagaraSystem_*,int>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,int,0>,FDefaultSetAllocator>
    ::Emplace<TKeyInitializer<UNiagaraSystem_*_const_&>_>
              ((TSet<TTuple<UNiagaraSystem_*,int>,TDefaultMapHashableKeyFuncs<UNiagaraSystem_*,int,0>,FDefaultSetAllocator>
                *)&this->SystemDataIndexMap,local_res10,(bool *)&local_res20);
    piVar10 = &(this->SystemData).ArrayMax;
    *(int *)(*(longlong *)&this->SystemDataIndexMap + 8 + (longlong)(int)local_res10[0].Key * 0x18)
         = (int)sVar3;
    iVar7 = (this->SystemData).ArrayNum;
    if (iVar7 == *piVar10) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x206,&(this->SystemData).AllocatorInstance,piVar10);
    }
    (this->SystemData).ArrayNum = iVar7 + 1;
    pFVar2 = (this->SystemData).AllocatorInstance.Data + (longlong)iVar7 * 6;
    DefaultConstructItems<FNiagaraScalabilitySystemData,int>(pFVar2,1);
    uVar11 = ((ushort)(*(uint *)(local_res8 + 0x5d0) >> 5) ^ *(ushort *)(pFVar2 + 4)) & 1 ^
             *(ushort *)(pFVar2 + 4);
    *(ushort *)(pFVar2 + 4) = uVar11;
    if (((*(uint *)(local_res8 + 0x5d0) >> 5 & 1) == 0) ||
       (*(int *)(*(longlong *)(local_res8 + 0x5b8) + 0x48) == 0)) {
      uVar13 = 0;
    }
    else {
      uVar13 = 2;
    }
    *(ushort *)(pFVar2 + 4) = uVar11 & 0xfffd | uVar13;
  }
LAB_1493a81d9:
  sVar3 = *(short *)(pFVar4 + lVar14 * 0xc + 8);
  uVar9 = 0;
  if ((int)sVar3 < (this->SystemData).ArrayNum) {
    uVar9 = (uint)~(int)sVar3 >> 0x1f;
  }
  if (uVar9 == 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar8 = (FNiagaraScalabilitySystemData *)(*pcVar5)();
      return pFVar8;
    }
  }
  return (FNiagaraScalabilitySystemData *)
         ((this->SystemData).AllocatorInstance.Data + (longlong)sVar3 * 6);
}

// InvalidateCachedSystemData @ 1493aa3e0

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
FNiagaraScalabilityManager::InvalidateCachedSystemData(FNiagaraScalabilityManager *this)

{
  this->bRefreshCachedSystemData = true;
  return;
}

// OnRefreshOwnerAllowsScalability @ 1493ab0c0

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
FNiagaraScalabilityManager::OnRefreshOwnerAllowsScalability(FNiagaraScalabilityManager *this)

{
  this->bRefreshOwnerAllowsScalability = true;
  return;
}

// PreGarbageCollectBeginDestroy @ 1493ab9d0

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

void __thiscall
FNiagaraScalabilityManager::PreGarbageCollectBeginDestroy(FNiagaraScalabilityManager *this)

{
  UNiagaraComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FUObjectItem *pFVar5;
  uint uVar6;
  longlong lVar7;
  
  uVar6 = (this->ManagedComponents).ArrayNum - 1;
  if (-1 < (int)uVar6) {
    lVar7 = (longlong)(int)uVar6 * 8;
    do {
      uVar4 = 0;
      if ((int)uVar6 < (this->ManagedComponents).ArrayNum) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar1 = *(UNiagaraComponent **)((this->ManagedComponents).AllocatorInstance.Data + lVar7);
      if (pUVar1 == (UNiagaraComponent *)0x0) {
        UnregisterAt(this,uVar6);
      }
      else if ((((uint)pUVar1->_padding_ >> 0x1e & 1) != 0) ||
              (pFVar5 = FUObjectArray::IndexToObject
                                  (&GUObjectArray,*(int *)((longlong)&pUVar1->_padding_ + 4)),
              ((uint)((ulonglong)(pFVar5->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) != 0)) {
        Unregister(this,pUVar1);
      }
      lVar7 = lVar7 + -8;
      uVar6 = uVar6 - 1;
    } while (-1 < (int)uVar6);
  }
  return;
}

// ProcessSignificance @ 1493ac330

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
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

void __thiscall
FNiagaraScalabilityManager::ProcessSignificance
          (FNiagaraScalabilityManager *this,UNiagaraSignificanceHandler *param_1,
          FComponentIterationContext *param_2)

{
  FScriptContainerElement *pFVar1;
  FNiagaraScalabilityState *pFVar2;
  undefined1 uVar3;
  int iVar4;
  code *pcVar5;
  UNiagaraComponent *this_00;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  FNiagaraScalabilitySystemData *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  ForElementType<_private:_void___cdecl_FNiagaraScalabilityManager::ProcessSignificance(UNiagaraSignificanceHandler_*,FComponentIterationContext_&)_::_2_::FCullProxyCreateDestroyTask>
  FVar13;
  ForElementType<_private:_void___cdecl_FNiagaraScalabilityManager::ProcessSignificance(UNiagaraSignificanceHandler_*,FComponentIterationContext_&)_::_2_::FCullProxyCreateDestroyTask>
  FVar14;
  longlong *plVar15;
  UNiagaraComponent *pUVar16;
  uint uVar17;
  undefined1 auStackY_538 [32];
  FIdentityFunctor local_4f8;
  undefined1 local_4f7;
  undefined1 local_4f6 [6];
  UNiagaraComponent *local_4f0;
  int local_4e8 [2];
  longlong local_4e0;
  FComponentIterationContext *local_4d8;
  FScriptContainerElement *local_4c8;
  int iStack_4c0;
  undefined4 uStack_4bc;
  undefined8 local_4b8;
  int iStack_4b0;
  undefined4 uStack_4ac;
  undefined8 local_4a8;
  int iStack_4a0;
  undefined4 uStack_49c;
  undefined1 *local_498;
  FNiagaraScalabilityManager *local_490;
  FScriptContainerElement *local_488;
  undefined8 uStack_480;
  undefined4 local_478;
  undefined4 uStack_474;
  int iStack_470;
  undefined4 uStack_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  int iStack_460;
  undefined4 uStack_45c;
  ForElementType<_private:_void___cdecl_FNiagaraScalabilityManager::ProcessSignificance(UNiagaraSignificanceHandler_*,FComponentIterationContext_&)_::_2_::FCullProxyCreateDestroyTask>
  local_458;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_538;
  uVar8 = (this->ManagedComponents).ArrayNum;
  local_4d8 = param_2;
  if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
  }
  uVar17 = 0;
  (param_2->SignificanceIndices).ArrayNum = 0;
  if ((param_2->SignificanceIndices).ArrayMax < (int)uVar8) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar8,(ForAnyElementType *)param_2,0,&(param_2->SignificanceIndices).ArrayMax);
  }
  iVar11 = (this->SystemData).ArrayNum;
  pcVar5 = *(code **)(*(longlong *)param_1 + 0x2b0);
  local_4c8 = (this->SystemData).AllocatorInstance.Data;
  if ((iVar11 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_4b8 = (this->State).AllocatorInstance.Data;
  iVar4 = (this->State).ArrayNum;
  iStack_4c0 = iVar11;
  if ((iVar4 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_4a8 = (this->ManagedComponents).AllocatorInstance.Data;
  iVar11 = (this->ManagedComponents).ArrayNum;
  iStack_4b0 = iVar4;
  if ((iVar11 < 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uStack_480 = CONCAT44(uStack_4bc,iStack_4c0);
  local_488 = local_4c8;
  local_468 = (undefined4)local_4a8;
  uStack_464 = local_4a8._4_4_;
  uStack_45c = uStack_49c;
  local_478 = (undefined4)local_4b8;
  uStack_474 = local_4b8._4_4_;
  iStack_470 = iStack_4b0;
  uStack_46c = uStack_4ac;
  iStack_4a0 = iVar11;
  iStack_460 = iVar11;
  (*pcVar5)(param_1,&local_468,&local_478,&local_488);
  local_498 = &local_4f7;
  local_4f7 = 0;
  local_490 = this;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,_FNiagaraScalabilityManager::ProcessSignificance_::__l2::<lambda_2>_>_>
            ((int *)(param_2->SignificanceIndices).AllocatorInstance.Data,
             (param_2->SignificanceIndices).ArrayNum,local_4f8,(<lambda_2> *)&local_498);
  iVar11 = (this->SystemData).ArrayNum;
  pFVar12 = (this->SystemData).AllocatorInstance.Data;
  pFVar1 = pFVar12 + (longlong)iVar11 * 6;
  while( true ) {
    if ((this->SystemData).ArrayNum != iVar11) {
      local_4f8 = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FNiagaraScalabilitySystemData,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_4f8);
    }
    if (pFVar12 == pFVar1) break;
    *(undefined4 *)pFVar12 = 0;
    pFVar12 = pFVar12 + 6;
  }
  iVar11 = (param_2->SignificanceIndices).ArrayNum;
  local_4e8[0] = 0;
  local_458.SecondaryData =
       (ForElementType<_private:_void___cdecl_FNiagaraScalabilityManager::ProcessSignificance(UNiagaraSignificanceHandler_*,FComponentIterationContext_&)_::_2_::FCullProxyCreateDestroyTask>
        )0x0;
  local_50 = 0;
  local_4c = 0x40;
  if (0 < iVar11) {
    local_4e0 = 0;
    do {
      lVar6 = local_4e0;
      uVar8 = 0;
      if ((int)uVar17 < iVar11) {
        uVar8 = ~uVar17 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar8 = *(uint *)((param_2->SignificanceIndices).AllocatorInstance.Data + lVar6);
      uVar9 = 0;
      if ((int)uVar8 < (this->ManagedComponents).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_4f0 = *(UNiagaraComponent **)
                   ((this->ManagedComponents).AllocatorInstance.Data + (longlong)(int)uVar8 * 8);
      uVar9 = 0;
      if ((int)uVar8 < (this->State).ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      this_00 = local_4f0;
      pFVar2 = (FNiagaraScalabilityState *)
               ((this->State).AllocatorInstance.Data + (longlong)(int)uVar8 * 0xc);
      local_4f0 = (UNiagaraComponent *)
                  ((local_4f0->Asset).field0_0x0.DebugPtr)->CurrentScalabilitySettings;
      pFVar10 = GetSystemData(this,uVar8,false);
      pUVar16 = local_4f0;
      uVar3 = pFVar2->field_0xa;
      if (pFVar2->bCulled == '\0') {
        FNiagaraWorldManager::SortedSignificanceCull
                  (this->WorldMan,(this->EffectType).field0_0x0.DebugPtr,this_00,
                   (FNiagaraSystemScalabilitySettings *)local_4f0,pFVar2->Significance,local_4e8,
                   &pFVar10->InstanceCount,pFVar2);
        if (pFVar2->bCulled == '\0') {
          iVar11 = pFVar10->InstanceCount - 1;
        }
        else {
          iVar11 = -1;
        }
        UNiagaraComponent::SetSystemSignificanceIndex(this_00,iVar11);
        local_4d8->bHasDirtyState =
             (bool)(local_4d8->bHasDirtyState |
                   (byte)((byte)pFVar2->field_0xa >> 1 ^ pFVar2->field_0xa) >> 2 & 1);
      }
      else if ((((byte)uVar3 >> 1 ^ uVar3) & 4) != 0) {
        UNiagaraComponent::SetSystemSignificanceIndex(this_00,-1);
        pUVar16 = local_4f0;
      }
      if (((FNiagaraSystemScalabilitySettings *)pUVar16)->CullProxyMode != None) {
        if (local_50 == local_4c) {
          local_50 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<64,32,TSizedDefaultAllocator<32>_>::ForElementType<_FNiagaraScalabilityManager::ProcessSignificance_::__l2::FCullProxyCreateDestroyTask>_>
                               (0x810,&local_458,&local_4c);
        }
        FVar13 = (ForElementType<_private:_void___cdecl_FNiagaraScalabilityManager::ProcessSignificance(UNiagaraSignificanceHandler_*,FComponentIterationContext_&)_::_2_::FCullProxyCreateDestroyTask>
                  )&local_458;
        if (local_458.SecondaryData !=
            (ForElementType<_private:_void___cdecl_FNiagaraScalabilityManager::ProcessSignificance(UNiagaraSignificanceHandler_*,FComponentIterationContext_&)_::_2_::FCullProxyCreateDestroyTask>
             )0x0) {
          FVar13 = local_458.SecondaryData;
        }
        plVar15 = (longlong *)((longlong)local_50 * 0x10 + (longlong)FVar13);
        local_50 = local_50 + 1;
        DefaultConstructItems<_FNiagaraScalabilityManager::ProcessSignificance_::__l2::FCullProxyCreateDestroyTask,int>
                  (plVar15,1);
        *plVar15 = (longlong)this_00;
        *(undefined1 *)(plVar15 + 1) = 0;
        if (((pFVar2->bCulled != '\0') &&
            ((int)(uint)pFVar10->CullProxyCount <
             ((FNiagaraSystemScalabilitySettings *)pUVar16)->MaxSystemProxies)) &&
           (pFVar2->bCulledByVisibility == '\0')) {
          pFVar10->CullProxyCount = pFVar10->CullProxyCount + 1;
          *(undefined1 *)(plVar15 + 1) = 1;
        }
      }
      uVar17 = uVar17 + 1;
      local_4e0 = local_4e0 + 4;
      iVar11 = (local_4d8->SignificanceIndices).ArrayNum;
      param_2 = local_4d8;
    } while ((int)uVar17 < iVar11);
  }
  iVar11 = local_50;
  FVar13 = (ForElementType<_private:_void___cdecl_FNiagaraScalabilityManager::ProcessSignificance(UNiagaraSignificanceHandler_*,FComponentIterationContext_&)_::_2_::FCullProxyCreateDestroyTask>
            )&local_458;
  if (local_458.SecondaryData !=
      (ForElementType<_private:_void___cdecl_FNiagaraScalabilityManager::ProcessSignificance(UNiagaraSignificanceHandler_*,FComponentIterationContext_&)_::_2_::FCullProxyCreateDestroyTask>
       )0x0) {
    FVar13 = local_458.SecondaryData;
  }
  FVar14 = (ForElementType<_private:_void___cdecl_FNiagaraScalabilityManager::ProcessSignificance(UNiagaraSignificanceHandler_*,FComponentIterationContext_&)_::_2_::FCullProxyCreateDestroyTask>
            )((longlong)local_50 * 0x10 + (longlong)FVar13);
  do {
    while( true ) {
      if (local_50 != iVar11) {
        `TCheckedPointerIterator<`FNiagaraScalabilityManager::ProcessSignificance'::__l2::FCullProxyCreateDestroyTask,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_4f6);
      }
      if (FVar13 == FVar14) {
        if (local_458.SecondaryData !=
            (ForElementType<_private:_void___cdecl_FNiagaraScalabilityManager::ProcessSignificance(UNiagaraSignificanceHandler_*,FComponentIterationContext_&)_::_2_::FCullProxyCreateDestroyTask>
             )0x0) {
          FMemory::Free((void *)local_458.SecondaryData);
        }
        return;
      }
      if ((*(longlong *)FVar13 != 0) && ((*(uint *)(*(longlong *)FVar13 + 8) >> 0x1e & 1) == 0))
      break;
LAB_1493ac834:
      FVar13 = (ForElementType<_private:_void___cdecl_FNiagaraScalabilityManager::ProcessSignificance(UNiagaraSignificanceHandler_*,FComponentIterationContext_&)_::_2_::FCullProxyCreateDestroyTask>
                )((longlong)FVar13 + 0x10);
    }
    if (*(uchar *)((longlong)FVar13 + 8) == '\0') {
      UNiagaraComponent::DestroyCullProxy(*(UNiagaraComponent **)FVar13);
      goto LAB_1493ac834;
    }
    UNiagaraComponent::CreateCullProxy(*(UNiagaraComponent **)FVar13,true);
    FVar13 = (ForElementType<_private:_void___cdecl_FNiagaraScalabilityManager::ProcessSignificance(UNiagaraSignificanceHandler_*,FComponentIterationContext_&)_::_2_::FCullProxyCreateDestroyTask>
              )((longlong)FVar13 + 0x10);
  } while( true );
}

// Register @ 1493b38e0

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

void __thiscall
FNiagaraScalabilityManager::Register(FNiagaraScalabilityManager *this,UNiagaraComponent *param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  UNiagaraComponent *local_18 [2];
  
  if (param_1->ScalabilityManagerHandle != -1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component->ScalabilityManagerHandle == INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScalabilityManager.cpp"
                       ,0x92,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  if ((this->ManagedComponents).ArrayNum != (this->State).ArrayNum) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ManagedComponents.Num() == State.Num()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScalabilityManager.cpp"
                       ,0x93,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_18[0] = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar4 = (this->ManagedComponents).AllocatorInstance.Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 <
      pFVar4 + (longlong)(this->ManagedComponents).ArrayMax * 8)) {
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
  iVar7 = (this->ManagedComponents).ArrayNum;
  piVar1 = &(this->ManagedComponents).ArrayMax;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->ManagedComponents).AllocatorInstance,piVar1);
  }
  pFVar4 = (this->ManagedComponents).AllocatorInstance.Data;
  (this->ManagedComponents).ArrayNum = iVar7 + 1;
  *(UNiagaraComponent **)(pFVar4 + (longlong)iVar7 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (local_18[0] != (UNiagaraComponent *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
  param_1->ScalabilityManagerHandle = iVar7;
  piVar1 = &(this->State).ArrayMax;
  iVar7 = (this->State).ArrayNum;
  if (iVar7 == *piVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x40c,&(this->State).AllocatorInstance,piVar1);
  }
  (this->State).ArrayNum = iVar7 + 1;
  DefaultConstructItems<FNiagaraScalabilityState,int>
            ((this->State).AllocatorInstance.Data + (longlong)iVar7 * 0xc,1);
  iVar7 = (this->State).ArrayNum;
  uVar10 = iVar7 - 1;
  uVar8 = 0;
  if ((int)uVar10 < iVar7) {
    uVar8 = ~uVar10 >> 0x1f;
  }
  if (uVar8 == 0) {
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
  lVar9 = (longlong)(this->State).ArrayNum;
  pFVar4 = (this->State).AllocatorInstance.Data;
  uVar2 = *(undefined8 *)(pFVar4 + lVar9 * 0xc + -0xc);
  uVar3 = *(undefined4 *)(pFVar4 + lVar9 * 0xc + -4);
  (param_1->DebugCachedScalabilityState).Significance = (float)(int)uVar2;
  (param_1->DebugCachedScalabilityState).LastVisibleTime = (float)(int)((ulonglong)uVar2 >> 0x20);
  *(undefined4 *)&(param_1->DebugCachedScalabilityState).SystemDataIndex = uVar3;
  if (0 < (this->DefaultContext).ComponentRequiresUpdate.NumBits) {
    TBitArray<FDefaultBitArrayAllocator>::Add(&(this->DefaultContext).ComponentRequiresUpdate,true);
  }
  GetSystemData(this,param_1->ScalabilityManagerHandle,false);
  return;
}

// Unregister @ 1493bb2d0

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

void __thiscall
FNiagaraScalabilityManager::Unregister(FNiagaraScalabilityManager *this,UNiagaraComponent *param_1)

{
  int iVar1;
  UNiagaraSystem *this_00;
  code *pcVar2;
  bool bVar3;
  FString local_28;
  FString local_18;
  
  if (param_1->ScalabilityManagerHandle == -1) {
    this_00 = (param_1->Asset).field0_0x0.DebugPtr;
    if ((this_00 == (UNiagaraSystem *)0x0) || (this_00->_padding_ == 0)) {
      ::FString::FString(&local_18,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0,None);
    }
    if (param_1->_padding_ == 0) {
      ::FString::FString(&local_28,L"None");
    }
    else {
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_28,(UObject *)0x0,None);
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Component->ScalabilityManagerHandle != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScalabilityManager.cpp"
                       ,0xa9,
                       L"Component(%s) is not in the scalability manager but is being unregistered.  Asset(%s)."
                      );
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = param_1->ScalabilityManagerHandle;
  param_1->ScalabilityManagerHandle = -1;
  UnregisterAt(this,iVar1);
  return;
}

// UnregisterAt @ 1493bb400

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
FNiagaraScalabilityManager::UnregisterAt(FNiagaraScalabilityManager *this,int param_1)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  
  lVar8 = (longlong)param_1;
  if (((this->ManagedComponents).ArrayNum != (this->State).ArrayNum) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("ManagedComponents.Num() == State.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraScalabilityManager.cpp"
                         ,0xb4,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = 0;
  if ((param_1 < 0) || ((this->ManagedComponents).ArrayNum <= param_1)) {
    if (2 < (byte)LogNiagara._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
    }
    if (param_1 < 0) {
      return;
    }
  }
  else {
    uVar10 = ~param_1;
    uVar6 = 0;
    if (param_1 < (this->ManagedComponents).ArrayNum) {
      uVar6 = uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = (this->ManagedComponents).ArrayNum;
    pFVar3 = (this->ManagedComponents).AllocatorInstance.Data;
    iVar7 = iVar2 + uVar10;
    if (1 < iVar7) {
      iVar7 = 1;
    }
    if (iVar7 != 0) {
      memmove(pFVar3 + lVar8 * 8,pFVar3 + (longlong)(iVar2 - iVar7) * 8,(longlong)iVar7 << 3);
    }
    piVar1 = &(this->ManagedComponents).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,&(this->ManagedComponents).AllocatorInstance,(this->ManagedComponents).ArrayNum,
               &(this->ManagedComponents).ArrayMax);
    uVar6 = uVar9;
    if (param_1 < (this->State).ArrayNum) {
      uVar6 = uVar10 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar2 = (this->State).ArrayNum;
    pFVar3 = (this->State).AllocatorInstance.Data;
    iVar7 = iVar2 + uVar10;
    if (1 < iVar7) {
      iVar7 = 1;
    }
    if (iVar7 != 0) {
      memmove(pFVar3 + lVar8 * 0xc,pFVar3 + (longlong)(iVar2 - iVar7) * 0xc,(longlong)iVar7 * 0xc);
    }
    piVar1 = &(this->State).ArrayNum;
    *piVar1 = *piVar1 + -1;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,&(this->State).AllocatorInstance,(this->State).ArrayNum,&(this->State).ArrayMax
              );
    if (0 < (this->DefaultContext).ComponentRequiresUpdate.NumBits) {
      TBitArray<FDefaultBitArrayAllocator>::RemoveAtSwap
                (&(this->DefaultContext).ComponentRequiresUpdate,param_1,1);
    }
  }
  if (param_1 < (this->ManagedComponents).ArrayNum) {
    uVar6 = uVar9;
    if (param_1 < (this->ManagedComponents).ArrayNum) {
      uVar6 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar6 == 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(longlong *)((this->ManagedComponents).AllocatorInstance.Data + lVar8 * 8) != 0) {
      if (param_1 < (this->ManagedComponents).ArrayNum) {
        uVar9 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(int *)(*(longlong *)((this->ManagedComponents).AllocatorInstance.Data + lVar8 * 8) + 0x728)
           = param_1;
    }
  }
  return;
}

// UpdateInternal @ 1493bc2e0

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
FNiagaraScalabilityManager::UpdateInternal
          (FNiagaraScalabilityManager *this,FComponentIterationContext *param_1)

{
  TBitArray<FDefaultBitArrayAllocator> *pTVar1;
  uint *puVar2;
  FScriptContainerElement *pFVar3;
  ENiagaraCullReaction EVar4;
  UNiagaraSignificanceHandler *pUVar5;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForElementType<unsigned_int> FVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  longlong lVar17;
  ForElementType<unsigned_int> FVar18;
  int local_res10 [2];
  int local_res18;
  int local_res20;
  
  local_res10[0] = 0;
  if (param_1->bProcessAllComponents == false) {
    iVar8 = (param_1->ComponentRequiresUpdate).NumBits;
    iVar14 = 0;
    iVar16 = 0;
    pTVar1 = &param_1->ComponentRequiresUpdate;
    uVar12 = 1;
    uVar10 = 0xffffffff;
    iVar15 = 0;
    if (iVar8 != 0) {
      FVar18 = (param_1->ComponentRequiresUpdate).AllocatorInstance.SecondaryData;
      if (FVar18 == (ForElementType<unsigned_int>)0x0) {
        FVar18 = (ForElementType<unsigned_int>)pTVar1;
      }
      uVar11 = *(uint *)FVar18;
      while (uVar11 == 0) {
        iVar14 = iVar14 + 1;
        iVar16 = iVar16 + 0x20;
        if ((int)(iVar8 + -1 + (iVar8 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar14) goto LAB_1493bc3cb;
        uVar11 = *(uint *)((longlong)FVar18 + (longlong)iVar14 * 4);
      }
      uVar12 = ~(uVar11 - 1) & uVar11;
      uVar13 = (ulonglong)uVar12 * 2 + 1;
      lVar17 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
        }
      }
      local_res18 = (int)lVar17;
      iVar15 = iVar16 + -1 + local_res18;
      if (iVar8 < iVar15) {
LAB_1493bc3cb:
        iVar15 = iVar8;
      }
    }
    if (0 < param_1->MaxUpdateCount) {
      do {
        if ((param_1->ComponentRequiresUpdate).NumBits <= iVar15) break;
        if ((iVar15 < 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Index>=0 && Index<NumBits",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x5be,L""), bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar18 = (param_1->ComponentRequiresUpdate).AllocatorInstance.SecondaryData;
        FVar9 = (ForElementType<unsigned_int>)pTVar1;
        if (FVar18 != (ForElementType<unsigned_int>)0x0) {
          FVar9 = FVar18;
        }
        iVar8 = iVar15;
        if (iVar15 < 0) {
          iVar8 = iVar15 + 0x1f;
        }
        puVar2 = (uint *)((longlong)FVar9 + (longlong)(iVar8 >> 5) * 4);
        *puVar2 = *puVar2 & ~(1 << ((byte)iVar15 & 0x1f));
        bVar7 = EvaluateCullState(this,param_1,iVar15,local_res10);
        if (bVar7) {
          iVar8 = (param_1->ComponentRequiresUpdate).NumBits;
          uVar10 = uVar10 & ~uVar12;
          FVar18 = (param_1->ComponentRequiresUpdate).AllocatorInstance.SecondaryData;
          FVar9 = (ForElementType<unsigned_int>)pTVar1;
          if (FVar18 != (ForElementType<unsigned_int>)0x0) {
            FVar9 = FVar18;
          }
          uVar11 = uVar10 & *(uint *)((longlong)FVar9 + (longlong)iVar14 * 4);
          while (uVar11 == 0) {
            iVar14 = iVar14 + 1;
            iVar16 = iVar16 + 0x20;
            iVar15 = iVar8;
            if ((int)((iVar8 + -1 >> 0x1f & 0x1fU) + iVar8 + -1) >> 5 < iVar14) goto LAB_1493bc4d7;
            uVar10 = 0xffffffff;
            uVar11 = *(uint *)((longlong)FVar9 + (longlong)iVar14 * 4);
          }
          uVar12 = ~(uVar11 - 1) & uVar11;
          uVar13 = (ulonglong)uVar12 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          local_res20 = (int)lVar17;
          iVar15 = local_res20 + -1 + iVar16;
          if (iVar8 < iVar15) {
            iVar15 = iVar8;
          }
        }
LAB_1493bc4d7:
      } while (local_res10[0] < param_1->MaxUpdateCount);
    }
  }
  else {
    iVar8 = 0;
    if (0 < (this->ManagedComponents).ArrayNum) {
      do {
        bVar7 = EvaluateCullState(this,param_1,iVar8,local_res10);
        iVar14 = iVar8 + 1;
        if (!bVar7) {
          iVar14 = iVar8;
        }
        iVar8 = iVar14;
      } while (iVar8 < (this->ManagedComponents).ArrayNum);
    }
  }
  if (param_1->bProcessAllComponents == false) {
    FVar18 = (param_1->ComponentRequiresUpdate).AllocatorInstance.SecondaryData;
    iVar8 = (param_1->ComponentRequiresUpdate).NumBits;
    if (FVar18 == (ForElementType<unsigned_int>)0x0) {
      FVar18 = (ForElementType<unsigned_int>)&param_1->ComponentRequiresUpdate;
    }
    uVar13 = 0;
    uVar10 = iVar8 + 0x1fU >> 5;
    FVar9 = FVar18;
    if (uVar10 != 0) {
      do {
        if (*(int *)FVar9 != 0) {
          puVar2 = (uint *)((longlong)FVar18 + uVar13 * 4);
          iVar14 = 0;
          bVar7 = *puVar2 != 0;
          if (bVar7) {
            for (; (*puVar2 >> iVar14 & 1) == 0; iVar14 = iVar14 + 1) {
            }
          }
          iVar16 = 0x20;
          if (bVar7) {
            iVar16 = iVar14;
          }
          iVar16 = iVar16 + (int)uVar13 * 0x20;
          if ((iVar16 < iVar8) && (iVar16 != -1)) {
            return;
          }
          break;
        }
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        FVar9 = (ForElementType<unsigned_int>)((longlong)FVar9 + 4);
      } while ((int)uVar12 < (int)uVar10);
    }
  }
  if ((param_1->bRequiresGlobalSignificancePass == false) ||
     (pUVar5 = (((this->EffectType).field0_0x0.DebugPtr)->SignificanceHandler).field0_0x0.DebugPtr,
     pUVar5 == (UNiagaraSignificanceHandler *)0x0)) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    ProcessSignificance(this,pUVar5,param_1);
  }
  if (param_1->bHasDirtyState != false) {
    EVar4 = ((this->EffectType).field0_0x0.DebugPtr)->CullReaction;
    uVar10 = 0;
    if (((bVar7) && (uVar10 = 0, GApplyInstanceCountsRigidly != 0)) &&
       (iVar8 = (param_1->SignificanceIndices).ArrayNum, 0 < iVar8)) {
      lVar17 = 0;
      uVar10 = 0;
      do {
        uVar12 = 0;
        if ((int)uVar10 < iVar8) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar10 = uVar10 + 1;
        pFVar3 = (param_1->SignificanceIndices).AllocatorInstance.Data + lVar17;
        lVar17 = lVar17 + 4;
        bVar7 = ApplyScalabilityState(this,*(int *)pFVar3,EVar4,param_1->bNewOnly);
      } while ((bVar7) && (iVar8 = (param_1->SignificanceIndices).ArrayNum, (int)uVar10 < iVar8));
    }
    iVar8 = (this->ManagedComponents).ArrayNum;
    if (((int)uVar10 < iVar8) && (iVar14 = 0, 0 < iVar8)) {
      do {
        bVar7 = ApplyScalabilityState(this,iVar14,EVar4,param_1->bNewOnly);
        iVar8 = iVar14 + 1;
        if (!bVar7) {
          iVar8 = iVar14;
        }
        iVar14 = iVar8;
      } while (iVar14 < (this->ManagedComponents).ArrayNum);
    }
    param_1->bHasDirtyState = false;
  }
  (param_1->ComponentRequiresUpdate).NumBits = 0;
  return;
}

