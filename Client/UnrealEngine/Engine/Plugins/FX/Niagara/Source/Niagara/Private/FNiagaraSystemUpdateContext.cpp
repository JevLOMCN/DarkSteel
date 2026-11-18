// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 9

// StaticStruct @ 148fe5790

UScriptStruct * __cdecl FNiagaraSystemUpdateContext::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNiagaraSystemUpdateContext.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNiagaraSystemUpdateContext.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNiagaraSystemUpdateContext,(UObject *)pUVar1,
                         L"NiagaraSystemUpdateContext");
  }
  return Z_Registration_Info_UScriptStruct_FNiagaraSystemUpdateContext.OuterSingleton;
}

// ~FNiagaraSystemUpdateContext @ 149026210

void __thiscall
FNiagaraSystemUpdateContext::~FNiagaraSystemUpdateContext(FNiagaraSystemUpdateContext *this)

{
  FScriptContainerElement *pFVar1;
  
  CommitUpdate(this);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PostWork);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&this->PreWork);
  pFVar1 = (this->SystemSimsToRecache).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->SystemSimsToDestroy).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentsToDestroyInstance).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentsToNotifySimDestroy).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentsToReInit).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComponentsToReset).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 149027580

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
`FNiagaraSystemUpdateContext::CommitUpdate'::__l2::<lambda_1>::operator()
          (void *this,UNiagaraComponent *param_1)

{
  longlong *plVar1;
  undefined1 uVar2;
  ENCPoolMethod EVar3;
  UNiagaraSystem *pUVar4;
  longlong *plVar5;
  bool bVar6;
  
  EVar3 = param_1->PoolingMethod;
  param_1->bAutoDestroy = 0;
  param_1->PoolingMethod = None;
  UNiagaraComponent::DestroyInstance(param_1);
  param_1->PoolingMethod = EVar3;
  *(uint *)&param_1->field_0x678 =
       *(uint *)&param_1->field_0x678 & 0xfffffffe | param_1->bAutoDestroy;
  if ((param_1->_padding_ & 2) != 0) {
    pUVar4 = (param_1->Asset).field0_0x0.DebugPtr;
    plVar5 = *(longlong **)(*(longlong *)this + 0x50);
    plVar1 = plVar5 + *(int *)(*(longlong *)this + 0x58);
    for (; plVar5 != plVar1; plVar5 = plVar5 + 1) {
      if ((UNiagaraSystem *)*plVar5 == (UNiagaraSystem *)0x0) {
        bVar6 = pUVar4 == (UNiagaraSystem *)0x0;
      }
      else {
        bVar6 = (UNiagaraSystem *)*plVar5 == pUVar4;
      }
      if (bVar6) {
        UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
        (**(code **)(param_1->_padding_ + 0x3a8))(param_1);
        return;
      }
    }
  }
  return;
}

// Add @ 14902b060

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
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
FNiagaraSystemUpdateContext::Add
          (FNiagaraSystemUpdateContext *this,UNiagaraSystem *param_1,bool param_2)

{
  UNiagaraComponent *pUVar1;
  UNiagaraSystem *pUVar2;
  code *pcVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  uint uVar6;
  UClass *pUVar7;
  longlong lVar8;
  TObjectIterator<UNiagaraComponent> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar7 = UNiagaraComponent::StaticClass();
  GetObjectsOfClass(pUVar7,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar5 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UNiagaraComponent>::Advance(&local_28);
    lVar8 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar6 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar6 = (uint)~local_28.Index >> 0x1f;
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
    pUVar1 = *(UNiagaraComponent **)(local_28.ObjectArray.AllocatorInstance.Data + lVar8 * 8);
    if (pUVar1 == (UNiagaraComponent *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Comp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCommon.cpp"
                         ,0x120,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pUVar2 = (pUVar1->Asset).field0_0x0.DebugPtr;
    if ((pUVar2 != (UNiagaraSystem *)0x0) && (pUVar2 == param_1)) {
      AddInternal(this,pUVar1,param_2,true);
    }
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// AddAll @ 14902b1c0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
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

void __thiscall FNiagaraSystemUpdateContext::AddAll(FNiagaraSystemUpdateContext *this,bool param_1)

{
  UNiagaraComponent *pUVar1;
  code *pcVar2;
  bool bVar3;
  EInternalObjectFlags EVar4;
  uint uVar5;
  UClass *pUVar6;
  longlong lVar7;
  TObjectIterator<UNiagaraComponent> local_28;
  
  local_28.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ObjectArray.ArrayNum = 0;
  local_28.ObjectArray.ArrayMax = 0;
  local_28.Index = 0xffffffff;
  EVar4 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pUVar6 = UNiagaraComponent::StaticClass();
  GetObjectsOfClass(pUVar6,&local_28.ObjectArray,true,RF_ClassDefaultObject,
                    EVar4 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
  while( true ) {
    TObjectIterator<UNiagaraComponent>::Advance(&local_28);
    lVar7 = (longlong)local_28.Index;
    if (local_28.Index < 0) break;
    if (local_28.ObjectArray.ArrayNum <= local_28.Index) break;
    uVar5 = 0;
    if (local_28.Index < local_28.ObjectArray.ArrayNum) {
      uVar5 = (uint)~local_28.Index >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar1 = *(UNiagaraComponent **)(local_28.ObjectArray.AllocatorInstance.Data + lVar7 * 8);
    if (pUVar1 == (UNiagaraComponent *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Comp",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCommon.cpp"
                         ,0xd1,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    AddInternal(this,pUVar1,param_1,true);
  }
  if (local_28.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.ObjectArray.AllocatorInstance.Data);
  }
  return;
}

// AddInternal @ 14902b300

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
FNiagaraSystemUpdateContext::AddInternal
          (FNiagaraSystemUpdateContext *this,UNiagaraComponent *param_1,bool param_2,bool param_3)

{
  longlong *plVar1;
  FNiagaraSystemInstanceController *pFVar2;
  bool bVar3;
  ENiagaraExecutionState EVar4;
  TArray<TObjectPtr<UNiagaraComponent>,TSizedDefaultAllocator<32>_> *this_00;
  TReferenceControllerBase<1> *pTVar5;
  TObjectPtr<UNiagaraSystem>_u_0 local_res8;
  FReadAccessScope local_38;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PreWork,&local_38);
  if ((*(int *)&(this->PreWork).field_0x10 != 0) &&
     (plVar1 = *(longlong **)&(this->PreWork).field_0x8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x68))(plVar1,param_1);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_38);
  param_1->bDuringUpdateContextReset = 1;
  pTVar5 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->SystemInstanceController).Object;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((pFVar2 == (FNiagaraSystemInstanceController *)0x0) ||
     (FNiagaraSystemInstanceController::WaitForConcurrentTickAndFinalize<>(pFVar2),
     ((uint)param_1->_padding_ >> 0x1e & 1) == 0)) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    if ((param_3) && ((param_2 || (this->bDestroySystemSim != false)))) {
      local_res8 = (TObjectPtr<UNiagaraSystem>_u_0)(param_1->Asset).field0_0x0.DebugPtr;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         ((UNiagaraComponent *)local_res8.DebugPtr != (UNiagaraComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
      }
      TArray<TObjectPtr<UNiagaraSystem>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TObjectPtr<UNiagaraSystem>_>
                (&this->SystemSimsToRecache,(TObjectPtr<UNiagaraSystem> *)&local_res8.ObjectPtr);
      if ((param_2) && (this->bDestroySystemSim != false)) {
        local_res8 = (TObjectPtr<UNiagaraSystem>_u_0)(param_1->Asset).field0_0x0.DebugPtr;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           ((UNiagaraComponent *)local_res8.DebugPtr != (UNiagaraComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_res8.DebugPtr);
        }
        TArray<TObjectPtr<UNiagaraSystem>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TObjectPtr<UNiagaraSystem>_>
                  (&this->SystemSimsToDestroy,(TObjectPtr<UNiagaraSystem> *)&local_res8.ObjectPtr);
      }
    }
    if ((((((param_1->_padding_ & 0x100000) == 0) ||
          (pFVar2 = (param_1->SystemInstanceController).Object,
          pFVar2 == (FNiagaraSystemInstanceController *)0x0)) ||
         (EVar4 = FNiagaraSystemInstanceController::GetRequestedExecutionState<>(pFVar2),
         EVar4 != Active)) &&
        ((param_1->bAwaitingActivationDueToNotReady == 0 || ((param_1->_padding_ & 0xc000000) == 0))
        )) && (param_1->ScalabilityManagerHandle == -1)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    if (this->bDestroyOnAdd != false) {
      (**(code **)(param_1->_padding_ + 0xaf8))(param_1);
    }
    if ((bVar3) || ((this->bOnlyActive == false && ((param_1->_padding_ & 0x80000) != 0)))) {
      if (param_2) {
        local_res8 = (TObjectPtr<UNiagaraSystem>_u_0)param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        this = (FNiagaraSystemUpdateContext *)&this->ComponentsToReInit;
      }
      else {
        local_res8 = (TObjectPtr<UNiagaraSystem>_u_0)param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
      }
      TArray<TObjectPtr<UNiagaraComponent>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TObjectPtr<UNiagaraComponent>_>
                (&this->ComponentsToReset,(TObjectPtr<UNiagaraComponent> *)&local_res8.ObjectPtr);
      return;
    }
    if (param_2) {
      pTVar5 = (param_1->SystemInstanceController).SharedReferenceCount.ReferenceController;
      pFVar2 = (param_1->SystemInstanceController).Object;
      if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
        LOCK();
        pTVar5->SharedReferenceCount = (atomic<int>)((int)pTVar5->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
      if ((pFVar2 != (FNiagaraSystemInstanceController *)0x0) &&
         (bVar3 = FNiagaraSystemInstanceController::HasValidSimulation(pFVar2), bVar3)) {
        bVar3 = FNiagaraSystemInstanceController::IsSolo<>(pFVar2);
        if (bVar3) {
          local_res8 = (TObjectPtr<UNiagaraSystem>_u_0)param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          this_00 = &this->ComponentsToDestroyInstance;
        }
        else {
          local_res8 = (TObjectPtr<UNiagaraSystem>_u_0)param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          this_00 = &this->ComponentsToNotifySimDestroy;
        }
        TArray<TObjectPtr<UNiagaraComponent>,TSizedDefaultAllocator<32>_>::
        AddUniqueImpl<TObjectPtr<UNiagaraComponent>_>
                  (this_00,(TObjectPtr<UNiagaraComponent> *)&local_res8.ObjectPtr);
        goto LAB_14902b4f4;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
    }
    param_1->bDuringUpdateContextReset = 0;
  }
  else {
LAB_14902b4f4:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar5);
  }
  return;
}

// AddSoloComponent @ 14902b630

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
FNiagaraSystemUpdateContext::AddSoloComponent
          (FNiagaraSystemUpdateContext *this,UNiagaraComponent *param_1,bool param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 local_res10 [8];
  
  if ((param_1 == (UNiagaraComponent *)0x0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("Component",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraCommon.cpp"
                         ,0xd9,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((param_1->bForceSolo == 0) &&
     (bVar2 = `FNiagaraSystemUpdateContext::AddSoloComponent'::__l10::<lambda_1>::operator()
                        (local_res10), !bVar2)) {
    return;
  }
  AddInternal(this,param_1,param_2,false);
  return;
}

// CommitUpdate @ 149033470

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
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

void __thiscall FNiagaraSystemUpdateContext::CommitUpdate(FNiagaraSystemUpdateContext *this)

{
  int *piVar1;
  undefined1 uVar2;
  ENCPoolMethod EVar3;
  int iVar4;
  UNiagaraComponent *pUVar5;
  UNiagaraSystem *pUVar6;
  TReferenceControllerBase<1> *pTVar7;
  FNiagaraSystemInstanceController *this_00;
  FNiagaraSystemInstance *pFVar8;
  TReferenceControllerBase<1> *pTVar9;
  longlong *plVar10;
  longlong lVar11;
  code *pcVar12;
  FNiagaraSystemUpdateContext *pFVar13;
  bool bVar14;
  bool bVar15;
  EInternalObjectFlags EVar16;
  uint uVar17;
  UClass *pUVar18;
  undefined8 *puVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  FNiagaraSystemSimulation *this_01;
  FScriptContainerElement *pFVar23;
  bool bVar24;
  uint local_res8 [2];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_f8;
  undefined1 local_f7 [7];
  FNiagaraSystemUpdateContext *local_f0;
  TObjectIterator<UNiagaraComponent> local_e8;
  FScriptContainerElement *local_d0;
  undefined8 local_c8;
  TReferenceControllerBase<1> *local_c0;
  undefined8 local_b8;
  TReferenceControllerBase<1> *local_b0;
  FReadAccessScope local_a8;
  FReadAccessScope local_90;
  FReadAccessScope local_78;
  FReadAccessScope local_60;
  
  local_res8[0] = 0;
  bVar15 = false;
  bVar24 = false;
  iVar4 = (this->SystemSimsToDestroy).ArrayNum;
  local_f0 = this;
  if (0 < iVar4) {
    pFVar20 = (this->SystemSimsToDestroy).AllocatorInstance.Data;
    pFVar23 = pFVar20 + (longlong)iVar4 * 8;
    while( true ) {
      if ((this->SystemSimsToDestroy).ArrayNum != iVar4) {
        local_res8[0] = local_res8[0] & 0xffffff00;
        `TCheckedPointerIterator<TObjectPtr<UNiagaraSystem>,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res8);
      }
      if (pFVar20 == pFVar23) break;
      if (*(UNiagaraSystem **)pFVar20 != (UNiagaraSystem *)0x0) {
        FNiagaraWorldManager::DestroyAllSystemSimulations(*(UNiagaraSystem **)pFVar20);
      }
      pFVar20 = pFVar20 + 8;
    }
    local_e8.Index = 0xffffffff;
    local_e8.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.ObjectArray.ArrayNum = 0;
    local_e8.ObjectArray.ArrayMax = 0;
    EVar16 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar18 = UNiagaraComponent::StaticClass();
    GetObjectsOfClass(pUVar18,&local_e8.ObjectArray,true,RF_ClassDefaultObject,
                      EVar16 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    TObjectIterator<UNiagaraComponent>::Advance(&local_e8);
LAB_149033530:
    do {
      this_01 = (FNiagaraSystemSimulation *)0x0;
      lVar22 = (longlong)local_e8.Index;
      if ((local_e8.Index < 0) || (local_e8.ObjectArray.ArrayNum <= local_e8.Index))
      goto LAB_149033716;
      uVar17 = 0;
      if (local_e8.Index < local_e8.ObjectArray.ArrayNum) {
        uVar17 = (uint)~local_e8.Index >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pUVar5 = *(UNiagaraComponent **)(local_e8.ObjectArray.AllocatorInstance.Data + lVar22 * 8);
      if ((pUVar5 != (UNiagaraComponent *)0x0) && (((uint)pUVar5->_padding_ >> 0x1e & 1) == 0)) {
        pFVar20 = (this->SystemSimsToDestroy).AllocatorInstance.Data;
        pUVar6 = (pUVar5->Asset).field0_0x0.DebugPtr;
        pFVar23 = pFVar20 + (longlong)(this->SystemSimsToDestroy).ArrayNum * 8;
        if (pFVar20 != pFVar23) {
          do {
            if (*(UNiagaraSystem **)pFVar20 == (UNiagaraSystem *)0x0) {
              bVar14 = pUVar6 == (UNiagaraSystem *)0x0;
            }
            else {
              bVar14 = *(UNiagaraSystem **)pFVar20 == pUVar6;
            }
            if (bVar14) {
              pTVar7 = (pUVar5->SystemInstanceController).SharedReferenceCount.ReferenceController;
              this_00 = (pUVar5->SystemInstanceController).Object;
              if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
                UNLOCK();
                LOCK();
                pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
                UNLOCK();
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar7);
              if (((this_00 != (FNiagaraSystemInstanceController *)0x0) &&
                  (bVar14 = FNiagaraSystemInstanceController::HasValidSimulation(this_00), bVar14))
                 && (bVar14 = FNiagaraSystemInstanceController::IsSolo<>(this_00), bVar14)) {
                pFVar8 = (this_00->SystemInstance).Object;
                if ((pFVar8 == (FNiagaraSystemInstance *)0x0) || (pFVar8->bSolo == '\0')) {
                  bVar15 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_4531953176097587112>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                                      ,0x58,"IsValid() && SystemInstance->IsSolo()");
                  if (bVar15) {
                    pcVar12 = (code *)swi(3);
                    (*pcVar12)();
                    return;
                  }
                  bVar15 = true;
                  local_b0 = (TReferenceControllerBase<1> *)0x0;
                  puVar19 = &local_b8;
                }
                else {
                  local_c0 = (pFVar8->SystemSimulation).SharedReferenceCount.ReferenceController;
                  bVar24 = true;
                  this_01 = (pFVar8->SystemSimulation).Object;
                  if (local_c0 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    local_c0->SharedReferenceCount =
                         (atomic<int>)((int)local_c0->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  puVar19 = &local_c8;
                }
                pTVar9 = (TReferenceControllerBase<1> *)puVar19[1];
                puVar19[1] = 0;
                *puVar19 = 0;
                if (bVar24) {
                  bVar24 = false;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_c0);
                }
                if (bVar15) {
                  bVar15 = false;
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(local_b0);
                }
                if (this_01 != (FNiagaraSystemSimulation *)0x0) {
                  `FNiagaraSystemUpdateContext::CommitUpdate'::__l2::<lambda_1>::operator()
                            (&local_f0,pUVar5);
                  FNiagaraSystemSimulation::Destroy(this_01);
                }
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar9);
              }
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTVar7);
              goto LAB_149033707;
            }
            pFVar20 = pFVar20 + 8;
          } while (pFVar20 != pFVar23);
          TObjectIterator<UNiagaraComponent>::Advance(&local_e8);
          goto LAB_149033530;
        }
      }
LAB_149033707:
      TObjectIterator<UNiagaraComponent>::Advance(&local_e8);
    } while( true );
  }
LAB_149033753:
  pFVar13 = local_f0;
  pFVar20 = (this->ComponentsToDestroyInstance).AllocatorInstance.Data;
  iVar4 = (this->ComponentsToDestroyInstance).ArrayNum;
  pFVar23 = pFVar20 + (longlong)iVar4 * 8;
  local_d0 = pFVar23;
  do {
    if ((this->ComponentsToDestroyInstance).ArrayNum != iVar4) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
    }
    if (pFVar20 == pFVar23) {
      piVar1 = &(this->ComponentsToDestroyInstance).ArrayMax;
      (this->ComponentsToDestroyInstance).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->ComponentsToDestroyInstance).AllocatorInstance,0,piVar1);
      }
      pFVar20 = (this->SystemSimsToRecache).AllocatorInstance.Data;
      bVar24 = true;
      iVar4 = (this->SystemSimsToRecache).ArrayNum;
      pFVar23 = pFVar20 + (longlong)iVar4 * 8;
      while( true ) {
        if ((this->SystemSimsToRecache).ArrayNum != iVar4) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UNiagaraSystem>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res18);
        }
        if (pFVar20 == pFVar23) break;
        pUVar6 = *(UNiagaraSystem **)pFVar20;
        if (pUVar6 != (UNiagaraSystem *)0x0) {
          if ((bVar24) && (pUVar6->bHasAnyGPUEmitters != 0)) {
            bVar24 = false;
            FlushRenderingCommands();
          }
          UNiagaraSystem::ComputeEmittersExecutionOrder(pUVar6);
          UNiagaraSystem::ComputeRenderersDrawOrder(pUVar6);
          UNiagaraSystem::CacheFromCompiledData(pUVar6);
        }
        pFVar20 = pFVar20 + 8;
      }
      piVar1 = &(this->SystemSimsToRecache).ArrayMax;
      (this->SystemSimsToRecache).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->SystemSimsToRecache).AllocatorInstance,0,piVar1);
      }
      pFVar20 = (this->ComponentsToReInit).AllocatorInstance.Data;
      iVar4 = (this->ComponentsToReInit).ArrayNum;
      pFVar23 = pFVar20 + (longlong)iVar4 * 8;
      while( true ) {
        if ((this->ComponentsToReInit).ArrayNum != iVar4) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_res20);
        }
        if (pFVar20 == pFVar23) break;
        pUVar5 = *(UNiagaraComponent **)pFVar20;
        if (pUVar5 != (UNiagaraComponent *)0x0) {
          EVar3 = pUVar5->PoolingMethod;
          pUVar5->bAutoDestroy = 0;
          pUVar5->PoolingMethod = None;
          UNiagaraComponent::DestroyInstance(pUVar5);
          pUVar5->PoolingMethod = EVar3;
          *(uint *)&pUVar5->field_0x678 =
               (pUVar5->bAutoDestroy ^ ZPULL(*(undefined4 *)&pUVar5->field_0x678,0,1)) & 1 ^
               *(undefined4 *)&pUVar5->field_0x678;
          (**(code **)(pUVar5->_padding_ + 0x2b8))(pUVar5,1);
          pUVar5->bDuringUpdateContextReset = 0;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PostWork,
                     &local_90);
          if ((*(int *)&(this->PostWork).field_0x10 != 0) &&
             (plVar10 = *(longlong **)&(this->PostWork).field_0x8, plVar10 != (longlong *)0x0)) {
            (**(code **)(*plVar10 + 0x68))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_90);
        }
        pFVar20 = pFVar20 + 8;
      }
      piVar1 = &(this->ComponentsToReInit).ArrayMax;
      (this->ComponentsToReInit).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->ComponentsToReInit).AllocatorInstance,0,piVar1);
      }
      pFVar20 = (this->ComponentsToReset).AllocatorInstance.Data;
      iVar4 = (this->ComponentsToReset).ArrayNum;
      pFVar23 = pFVar20 + (longlong)iVar4 * 8;
      while( true ) {
        if ((this->ComponentsToReset).ArrayNum != iVar4) {
          local_f8 = 0;
          `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_f8);
        }
        if (pFVar20 == pFVar23) break;
        plVar10 = *(longlong **)pFVar20;
        if (plVar10 != (longlong *)0x0) {
          (**(code **)(*plVar10 + 0x2b8))(plVar10,1);
          *(uint *)((longlong)plVar10 + 0x6cc) = *(uint *)((longlong)plVar10 + 0x6cc) & 0xfffffeff;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PostWork,
                     &local_78);
          if ((*(int *)&(this->PostWork).field_0x10 != 0) &&
             (plVar10 = *(longlong **)&(this->PostWork).field_0x8, plVar10 != (longlong *)0x0)) {
            (**(code **)(*plVar10 + 0x68))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_78);
        }
        pFVar20 = pFVar20 + 8;
      }
      piVar1 = &(this->ComponentsToReset).ArrayMax;
      (this->ComponentsToReset).ArrayNum = 0;
      if (*piVar1 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,(ForAnyElementType *)this,0,piVar1);
      }
      pFVar20 = (this->ComponentsToNotifySimDestroy).AllocatorInstance.Data;
      iVar4 = (this->ComponentsToNotifySimDestroy).ArrayNum;
      pFVar23 = pFVar20 + (longlong)iVar4 * 8;
      do {
        if ((this->ComponentsToNotifySimDestroy).ArrayNum != iVar4) {
          local_f7[0] = 0;
          `TCheckedPointerIterator<TObjectPtr<UNiagaraComponent>,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_f7);
        }
        if (pFVar20 == pFVar23) {
          piVar1 = &(this->ComponentsToNotifySimDestroy).ArrayMax;
          (this->ComponentsToNotifySimDestroy).ArrayNum = 0;
          if (*piVar1 != 0) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,0,&(this->ComponentsToNotifySimDestroy).AllocatorInstance,0,piVar1);
          }
          return;
        }
        lVar22 = *(longlong *)pFVar20;
        if (lVar22 != 0) {
          pTVar7 = *(TReferenceControllerBase<1> **)(lVar22 + 0x650);
          lVar11 = *(longlong *)(lVar22 + 0x648);
          if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
            UNLOCK();
          }
          if (lVar11 != 0) {
            if (*(longlong *)(lVar11 + 0x30) == 0) {
              bVar24 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_4531953176097587046>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraSystemInstanceController.h"
                                  ,0x9a,"IsValid()");
              if (bVar24) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              if ((*(longlong *)(lVar11 + 0x30) == 0) &&
                 (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                     ("IsValid()",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                      ,0x458,L""), bVar24)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
            }
            FNiagaraSystemInstance::OnSimulationDestroyed
                      (*(FNiagaraSystemInstance **)(lVar11 + 0x30));
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTVar7);
          *(uint *)(lVar22 + 0x6cc) = *(uint *)(lVar22 + 0x6cc) & 0xfffffeff;
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                    ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PostWork,
                     &local_60);
          if ((*(int *)&(this->PostWork).field_0x10 != 0) &&
             (plVar10 = *(longlong **)&(this->PostWork).field_0x8, plVar10 != (longlong *)0x0)) {
            (**(code **)(*plVar10 + 0x68))();
          }
          TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::
          ~FReadAccessScope(&local_60);
        }
        pFVar20 = pFVar20 + 8;
      } while( true );
    }
    pUVar5 = *(UNiagaraComponent **)pFVar20;
    if (pUVar5 != (UNiagaraComponent *)0x0) {
      EVar3 = pUVar5->PoolingMethod;
      pUVar5->bAutoDestroy = 0;
      pUVar5->PoolingMethod = None;
      UNiagaraComponent::DestroyInstance(pUVar5);
      pUVar5->PoolingMethod = EVar3;
      *(uint *)&pUVar5->field_0x678 =
           (pUVar5->bAutoDestroy ^ ZPULL(*(undefined4 *)&pUVar5->field_0x678,0,1)) & 1 ^
           *(undefined4 *)&pUVar5->field_0x678;
      if ((pUVar5->_padding_ & 2) != 0) {
        pFVar21 = (pFVar13->SystemSimsToRecache).AllocatorInstance.Data;
        pUVar6 = (pUVar5->Asset).field0_0x0.DebugPtr;
        pFVar23 = pFVar21 + (longlong)(pFVar13->SystemSimsToRecache).ArrayNum * 8;
        for (; pFVar21 != pFVar23; pFVar21 = pFVar21 + 8) {
          if (*(UNiagaraSystem **)pFVar21 == (UNiagaraSystem *)0x0) {
            bVar24 = pUVar6 == (UNiagaraSystem *)0x0;
          }
          else {
            bVar24 = *(UNiagaraSystem **)pFVar21 == pUVar6;
          }
          if (bVar24) {
            UActorComponent::MarkRenderStateDirty((UActorComponent *)pUVar5);
            (**(code **)(pUVar5->_padding_ + 0x3a8))(pUVar5);
            break;
          }
        }
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&this->PostWork,&local_a8
                );
      if ((*(int *)&(this->PostWork).field_0x10 != 0) &&
         (plVar10 = *(longlong **)&(this->PostWork).field_0x8, plVar10 != (longlong *)0x0)) {
        (**(code **)(*plVar10 + 0x68))();
      }
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_a8);
      pFVar23 = local_d0;
    }
    pFVar20 = pFVar20 + 8;
  } while( true );
LAB_149033716:
  if (local_e8.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.ObjectArray.AllocatorInstance.Data);
  }
  piVar1 = &(this->SystemSimsToDestroy).ArrayMax;
  (this->SystemSimsToDestroy).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->SystemSimsToDestroy).AllocatorInstance,0,piVar1);
  }
  goto LAB_149033753;
}

// operator() @ 15053cd30

bool __thiscall
`FNiagaraSystemUpdateContext::AddSoloComponent'::__l10::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8123773844012924710>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8123773844012924710>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

