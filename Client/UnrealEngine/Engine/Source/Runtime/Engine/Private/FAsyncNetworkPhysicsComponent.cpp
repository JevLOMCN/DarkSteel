// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 20

// FAsyncNetworkPhysicsComponent @ 1482d84b0

FAsyncNetworkPhysicsComponent * __thiscall
FAsyncNetworkPhysicsComponent::FAsyncNetworkPhysicsComponent(FAsyncNetworkPhysicsComponent *this)

{
  undefined8 *puVar1;
  undefined8 local_res8;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ =
       (longlong)
       &
       ___7__TSimCallbackObject_UFAsyncNetworkPhysicsComponentInput__UFAsyncNetworkPhysicsComponentOutput___0EAA__Chaos__6B_
  ;
  *(undefined1 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)&this->_padding_ = 0x400;
  puVar1 = FMemory::Malloc(0x10,8);
  *puVar1 = 0;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  puVar1 = FMemory::Malloc(0x10,8);
  *puVar1 = 0;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  puVar1 = FMemory::Malloc(0x10,8);
  local_res8 = 0;
  *puVar1 = 0;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)puVar1;
  this->_padding_ = (longlong)&___7FAsyncNetworkPhysicsComponent__6B_;
  this->_padding_ = 0;
  this->bIsLocallyControlled = true;
  this->NetMode = NM_Standalone;
  this->NetRole = ROLE_Authority;
  this->NetworkPhysicsTickOffset = 0;
  this->PhysicsReplicationMode = Default;
  (this->ActorName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActorName).Data.ArrayNum = 0;
  (this->ActorName).Data.ArrayMax = 0;
  this->bIsUsingLegacyData = false;
  this->LastInputSendFrame = -1;
  this->LastStateSendFrame = -1;
  this->NewImportantInputFrame = 0x7fffffff;
  (this->SettingsComponent).Object = (FNetworkPhysicsSettingsData *)0x0;
  (this->SettingsComponent).WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->ActorComponent).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->ActorComponent).WeakPtr,(FObjectPtr)&local_res8);
  this->ImplementationInterface_Internal = (INetworkPhysicsInputState_Internal *)0x0;
  this->PhysicsObject = (FPhysicsObject *)0x0;
  (this->InputHelper).Ptr = (FNetworkPhysicsDataHelper *)0x0;
  (this->StateHelper).Ptr = (FNetworkPhysicsDataHelper *)0x0;
  (this->StateHistory).Object = (FBaseRewindHistory *)0x0;
  (this->StateHistory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->InputHistory).Object = (FBaseRewindHistory *)0x0;
  (this->InputHistory).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0
  ;
  (this->InputData).Ptr = (FNetworkPhysicsPayload *)0x0;
  (this->LatestInputReceiveData).Ptr = (FNetworkPhysicsPayload *)0x0;
  (this->StateData).Ptr = (FNetworkPhysicsPayload *)0x0;
  this->InputsToNetwork_OwnerDefault = 3;
  this->InputsToNetwork_Owner = 3;
  this->InputsToNetwork_Simulated = 2;
  this->TimeOfLastDynamicInputScaling = 0.0;
  this->DynamicInputScalingAverageInputs = 0.0;
  this->MissingInputCount = 0;
  this->StatesToNetwork = 1;
  this->bCompareStateToTriggerRewind = false;
  this->bCompareStateToTriggerRewindIncludeSimProxies = false;
  this->bCompareInputToTriggerRewind = false;
  (this->DelegateOnPreProcessInputs_Internal).ID = 0;
  (this->DelegateOnPostProcessInputs_Internal).ID = 0;
  return this;
}

// operator() @ 1482e1bf0

void __thiscall
`FAsyncNetworkPhysicsComponent::ConsumeAsyncInput'::__l64::<lambda_1>::operator()
          (void *this,FBaseRewindHistory *param_1,FBaseRewindHistory *param_2,bool param_3,
          bool param_4)

{
  int iVar1;
  char cVar2;
  
  if ((param_4) && (**(char **)this == '\0')) {
    cVar2 = '\x01';
  }
  else {
    cVar2 = '\0';
    if (**(char **)this != '\0') {
      (**(code **)((longlong)*param_1 + 0xa8))
                (param_1,param_2,0,0,param_3,**(undefined4 **)((longlong)this + 8));
      goto LAB_1482e1c59;
    }
  }
  iVar1 = (**(code **)((longlong)*param_1 + 0xa8))
                    (param_1,param_2,*(undefined4 *)(*(longlong *)((longlong)this + 0x10) + 0xf4),
                     cVar2,param_3,0);
  if (cVar2 != '\0') {
    FAsyncNetworkPhysicsComponent::TriggerResimulation
              (*(FAsyncNetworkPhysicsComponent **)((longlong)this + 0x10),iVar1);
  }
LAB_1482e1c59:
                    /* WARNING: Could not recover jumptable at 0x0001482e1c6e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((longlong)*param_2 + 0x110))(param_2);
  return;
}

// ConsumeAsyncInput @ 1482efd70

void __thiscall
FAsyncNetworkPhysicsComponent::ConsumeAsyncInput(FAsyncNetworkPhysicsComponent *this,int param_1)

{
  float *pfVar1;
  atomic<int> *paVar2;
  TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_> *pTVar3;
  TUniquePtr<FNetworkPhysicsPayload,TDefaultDelete<FNetworkPhysicsPayload>_> *pTVar4;
  atomic<int> aVar5;
  longlong lVar6;
  TReferenceControllerBase<1> *pTVar7;
  FNetworkPhysicsDataHelper *pFVar8;
  FNetworkPhysicsPayload *pFVar9;
  FBaseRewindHistory *pFVar10;
  code *pcVar11;
  bool bVar12;
  char cVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  FNetworkPhysicsSettingsNetworkPhysicsComponent *pFVar18;
  undefined8 *puVar19;
  FNetworkPhysicsSettingsData *pFVar20;
  FNetworkPhysicsSettingsData *pFVar21;
  UObject *pUVar22;
  FNetworkPhysicsSettingsData *pFVar23;
  FNetworkPhysicsSettingsData *pFVar24;
  longlong *plVar25;
  longlong *plVar26;
  char local_res8 [8];
  int local_res10 [2];
  bool local_res18;
  bool local_res20;
  undefined1 local_b8;
  undefined1 local_b7 [7];
  longlong *local_b0;
  char *local_a8;
  int *local_a0;
  FAsyncNetworkPhysicsComponent *local_98;
  undefined8 *local_90;
  FBaseRewindHistory *local_88;
  FSharedReferencer<1> local_80;
  undefined8 *local_78;
  TRawPtrProxy<Chaos::FBaseRewindHistory> local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined8 *local_58;
  undefined8 *local_50 [2];
  
  lVar6 = this->_padding_;
  if (lVar6 == 0) {
    return;
  }
  local_res10[0] = param_1;
  pFVar18 = GetComponentSettings(this);
  pFVar21 = (FNetworkPhysicsSettingsData *)0x0;
  if ((((*(longlong *)(lVar6 + 0xa0) != -1) && (*(longlong *)(lVar6 + 0xa0) != 0)) &&
      (*(longlong *)(lVar6 + 0xa8) != 0)) && (0 < *(int *)(*(longlong *)(lVar6 + 0xa8) + 8))) {
    if ((*(longlong *)(lVar6 + 0xa0) == -1) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar20 = *(FNetworkPhysicsSettingsData **)(lVar6 + 0xa8);
    pFVar23 = pFVar21;
    pFVar24 = pFVar20;
    if (pFVar20 != (FNetworkPhysicsSettingsData *)0x0) {
      iVar15 = *(int *)&pFVar20->DefaultReplicationSettings;
      do {
        pFVar24 = pFVar21;
        if (iVar15 == 0) goto LAB_1482efe45;
        LOCK();
        iVar17 = *(int *)&pFVar20->DefaultReplicationSettings;
        bVar12 = iVar15 == iVar17;
        if (bVar12) {
          *(int *)&pFVar20->DefaultReplicationSettings = iVar15 + 1;
          iVar17 = iVar15;
        }
        UNLOCK();
        iVar15 = iVar17;
      } while (!bVar12);
      pFVar23 = *(FNetworkPhysicsSettingsData **)(lVar6 + 0xa0);
      pFVar24 = pFVar20;
    }
LAB_1482efe45:
    (this->SettingsComponent).Object = pFVar23;
    if (pFVar24 !=
        (FNetworkPhysicsSettingsData *)
        (this->SettingsComponent).WeakReferenceCount.ReferenceController) {
      if (pFVar24 != (FNetworkPhysicsSettingsData *)0x0) {
        LOCK();
        pfVar1 = &(pFVar24->DefaultReplicationSettings).MaxLinearHardSnapDistance;
        *pfVar1 = (float)((int)*pfVar1 + 1);
        UNLOCK();
      }
      pTVar7 = (this->SettingsComponent).WeakReferenceCount.ReferenceController;
      if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar2 = &pTVar7->WeakReferenceCount;
        aVar5 = *paVar2;
        *paVar2 = (atomic<int>)((int)*paVar2 + -1);
        UNLOCK();
        if (aVar5 == (atomic<int>)0x1) {
          (**(code **)(pTVar7->_padding_ + 8))(pTVar7,1);
        }
      }
      (this->SettingsComponent).WeakReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)pFVar24;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar24);
  }
  if (*(char *)(lVar6 + 0x11) != '\0') {
    this->bIsLocallyControlled = *(bool *)(lVar6 + 0x10);
  }
  if (*(char *)(lVar6 + 0x18) != '\0') {
    this->NetMode = *(ENetMode *)(lVar6 + 0x14);
  }
  if (*(char *)(lVar6 + 0x20) != '\0') {
    this->NetRole = *(ENetRole *)(lVar6 + 0x1c);
  }
  if (*(char *)(lVar6 + 0x28) != '\0') {
    this->NetworkPhysicsTickOffset = *(int *)(lVar6 + 0x24);
  }
  if (*(char *)(lVar6 + 0x2e) != '\0') {
    this->InputsToNetwork_Owner = *(ushort *)(lVar6 + 0x2c);
  }
  if (*(char *)(lVar6 + 0x31) != '\0') {
    this->PhysicsReplicationMode = *(EPhysicsReplicationMode *)(lVar6 + 0x30);
  }
  if (*(char *)(lVar6 + 0x3c) != '\0') {
    (this->ActorComponent).WeakPtr = *(FWeakObjectPtr *)(lVar6 + 0x34);
  }
  if (*(char *)(lVar6 + 0x48) != '\0') {
    this->ImplementationInterface_Internal = *(INetworkPhysicsInputState_Internal **)(lVar6 + 0x40);
  }
  if ((*(char *)(lVar6 + 0x58) != '\0') &&
     ((this->PhysicsObject == (FPhysicsObject *)0x0 ||
      (this->PhysicsObject != *(FPhysicsObject **)(lVar6 + 0x50))))) {
    if ((*(char *)(lVar6 + 0x58) == '\0') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    this->PhysicsObject = *(FPhysicsObject **)(lVar6 + 0x50);
    RegisterDataHistoryInRewindData(this);
  }
  if (*(int *)(lVar6 + 0x6c) != -1) {
    ::FString::operator=(&this->ActorName,(FString *)(lVar6 + 0x60));
  }
  if (*(char *)(lVar6 + 0x91) != '\0') {
    RegisterDataHistoryInRewindData(this);
  }
  if (*(char *)(lVar6 + 0x93) != '\0') {
    UnregisterDataHistoryFromRewindData(this);
  }
  if (*(char *)(lVar6 + 0x95) != '\0') {
    this->bCompareStateToTriggerRewind = *(bool *)(lVar6 + 0x94);
  }
  if (*(char *)(lVar6 + 0x97) != '\0') {
    this->bCompareStateToTriggerRewindIncludeSimProxies = *(bool *)(lVar6 + 0x96);
  }
  if (*(char *)(lVar6 + 0x99) != '\0') {
    this->bCompareInputToTriggerRewind = *(bool *)(lVar6 + 0x98);
  }
  if (*(char *)(lVar6 + 0x88) != '\0') {
    iVar15 = SetupRewindData(this);
    if ((*(char *)(lVar6 + 0x88) == '\0') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    puVar19 = (undefined8 *)
              (**(code **)(**(longlong **)(lVar6 + 0x80) + 8))
                        (*(longlong **)(lVar6 + 0x80),&local_90);
    pTVar3 = &this->StateHelper;
    if (pTVar3 != (TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>
                   *)puVar19) {
      pFVar8 = pTVar3->Ptr;
      pTVar3->Ptr = (FNetworkPhysicsDataHelper *)*puVar19;
      *puVar19 = 0;
      if (pFVar8 != (FNetworkPhysicsDataHelper *)0x0) {
        (**(code **)*pFVar8)(pFVar8,1);
      }
    }
    if (local_90 != (undefined8 *)0x0) {
      (**(code **)*local_90)(local_90,1);
    }
    puVar19 = (undefined8 *)(**(code **)((longlong)*pTVar3->Ptr + 0x10))(pTVar3->Ptr,&local_78);
    pTVar4 = &this->StateData;
    if (pTVar4 != (TUniquePtr<FNetworkPhysicsPayload,TDefaultDelete<FNetworkPhysicsPayload>_> *)
                  puVar19) {
      pFVar9 = pTVar4->Ptr;
      pTVar4->Ptr = (FNetworkPhysicsPayload *)*puVar19;
      *puVar19 = 0;
      if (pFVar9 != (FNetworkPhysicsPayload *)0x0) {
        (**(code **)pFVar9->_padding_)(pFVar9,1);
      }
    }
    if (local_78 != (undefined8 *)0x0) {
      (**(code **)*local_78)(local_78,1);
    }
    pFVar8 = (this->StateHelper).Ptr;
    puVar19 = (undefined8 *)(**(code **)((longlong)*pFVar8 + 0x18))(pFVar8,&local_68,iVar15);
    local_70.Object = (FBaseRewindHistory *)*puVar19;
    *puVar19 = 0;
    TSharedPtr<Chaos::FBaseRewindHistory,1>::operator=<Chaos::FBaseRewindHistory>
              (&this->StateHistory,&local_70);
    if (local_68 != (undefined8 *)0x0) {
      (**(code **)*local_68)(local_68,1);
    }
    RegisterDataHistoryInRewindData(this);
    bVar12 = (bool)(**(code **)((longlong)*(this->StateHelper).Ptr + 0x20))();
    this->bIsUsingLegacyData = bVar12;
  }
  if (*(char *)(lVar6 + 0x78) != '\0') {
    iVar15 = SetupRewindData(this);
    if ((*(char *)(lVar6 + 0x78) == '\0') &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsSet()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                            ,0x1bd,
                            L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                           ), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    puVar19 = (undefined8 *)
              (**(code **)(**(longlong **)(lVar6 + 0x70) + 8))
                        (*(longlong **)(lVar6 + 0x70),&local_60);
    pTVar3 = &this->InputHelper;
    if (pTVar3 != (TUniquePtr<FNetworkPhysicsDataHelper,TDefaultDelete<FNetworkPhysicsDataHelper>_>
                   *)puVar19) {
      pFVar8 = pTVar3->Ptr;
      pTVar3->Ptr = (FNetworkPhysicsDataHelper *)*puVar19;
      *puVar19 = 0;
      if (pFVar8 != (FNetworkPhysicsDataHelper *)0x0) {
        (**(code **)*pFVar8)(pFVar8,1);
      }
    }
    if (local_60 != (undefined8 *)0x0) {
      (**(code **)*local_60)(local_60,1);
    }
    puVar19 = (undefined8 *)(**(code **)((longlong)*pTVar3->Ptr + 0x10))(pTVar3->Ptr,&local_58);
    pTVar4 = &this->InputData;
    if (pTVar4 != (TUniquePtr<FNetworkPhysicsPayload,TDefaultDelete<FNetworkPhysicsPayload>_> *)
                  puVar19) {
      pFVar9 = pTVar4->Ptr;
      pTVar4->Ptr = (FNetworkPhysicsPayload *)*puVar19;
      *puVar19 = 0;
      if (pFVar9 != (FNetworkPhysicsPayload *)0x0) {
        (**(code **)pFVar9->_padding_)(pFVar9,1);
      }
    }
    if (local_58 != (undefined8 *)0x0) {
      (**(code **)*local_58)(local_58,1);
    }
    pFVar8 = (this->InputHelper).Ptr;
    puVar19 = (undefined8 *)(**(code **)((longlong)*pFVar8 + 0x10))(pFVar8,local_50);
    pTVar4 = &this->LatestInputReceiveData;
    if (pTVar4 != (TUniquePtr<FNetworkPhysicsPayload,TDefaultDelete<FNetworkPhysicsPayload>_> *)
                  puVar19) {
      pFVar9 = pTVar4->Ptr;
      pTVar4->Ptr = (FNetworkPhysicsPayload *)*puVar19;
      *puVar19 = 0;
      if (pFVar9 != (FNetworkPhysicsPayload *)0x0) {
        (**(code **)pFVar9->_padding_)(pFVar9,1);
      }
    }
    if (local_50[0] != (undefined8 *)0x0) {
      (**(code **)*local_50[0])(local_50[0],1);
    }
    pFVar8 = (this->InputHelper).Ptr;
    puVar19 = (undefined8 *)(**(code **)((longlong)*pFVar8 + 0x18))(pFVar8,&local_b0,iVar15);
    pFVar10 = (FBaseRewindHistory *)*puVar19;
    *puVar19 = 0;
    local_88 = pFVar10;
    pFVar20 = ::operator_new(0x18);
    if (pFVar20 != (FNetworkPhysicsSettingsData *)0x0) {
      *(undefined4 *)&pFVar20->DefaultReplicationSettings = 1;
      pFVar20->GeneralSettings =
           (FNetworkPhysicsSettings)
           &
           ___7__TReferenceControllerWithDeleter_UFBaseRewindHistory_Chaos__U__DefaultDeleter_UFBaseRewindHistory_Chaos___SharedPointerInternals___00_SharedPointerInternals__6B_
      ;
      (pFVar20->DefaultReplicationSettings).MaxLinearHardSnapDistance = 1.4013e-45;
      *(FBaseRewindHistory **)&(pFVar20->DefaultReplicationSettings).bHardsnapInPhysicsThread =
           pFVar10;
      pFVar21 = pFVar20;
    }
    local_80.ReferenceController = (TReferenceControllerBase<1> *)pFVar21;
    if (&this->InputHistory != (TSharedPtr<Chaos::FBaseRewindHistory,1> *)&local_88) {
      (this->InputHistory).Object = pFVar10;
      local_88 = (FBaseRewindHistory *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->InputHistory).SharedReferenceCount,&local_80);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_80.ReferenceController);
    if (local_b0 != (longlong *)0x0) {
      (**(code **)*local_b0)(local_b0,1);
    }
    RegisterDataHistoryInRewindData(this);
    bVar12 = (bool)(**(code **)((longlong)*(this->InputHelper).Ptr + 0x20))();
    this->bIsUsingLegacyData = bVar12;
  }
  if ((this->NetMode == NM_DedicatedServer) || (this->NetMode == NM_ListenServer)) {
    local_res8[0] = '\x01';
  }
  else {
    local_res8[0] = '\0';
  }
  local_a8 = local_res8;
  local_a0 = local_res10;
  if (pFVar18->bOverrideCompareInputToTriggerRewind == 0) {
    cVar14 = this->bCompareInputToTriggerRewind;
  }
  else {
    cVar14 = pFVar18->bCompareInputToTriggerRewind;
  }
  if ((cVar14 == '\0') || (this->bIsLocallyControlled == false)) {
    cVar14 = '\0';
  }
  else {
    cVar14 = '\x01';
  }
  if (pFVar18->bOverrideCompareStateToTriggerRewind == 0) {
    cVar13 = this->bCompareStateToTriggerRewind;
  }
  else {
    cVar13 = pFVar18->bCompareStateToTriggerRewind;
  }
  if (cVar13 == '\0') {
LAB_1482f03c1:
    local_res20 = false;
  }
  else {
    if (this->bIsLocallyControlled == false) {
      if (pFVar18->bOverridebCompareStateToTriggerRewindIncludeSimProxies == 0) {
        cVar13 = this->bCompareStateToTriggerRewindIncludeSimProxies;
      }
      else {
        cVar13 = pFVar18->bCompareStateToTriggerRewindIncludeSimProxies;
      }
      if (cVar13 == '\0') goto LAB_1482f03c1;
    }
    local_res20 = true;
  }
  local_res18 = (bool)cVar14;
  local_98 = this;
  if ((*(longlong **)(lVar6 + 0xb0) == (longlong *)0x0) ||
     (cVar13 = (**(code **)(**(longlong **)(lVar6 + 0xb0) + 0x100))(), cVar13 == '\0'))
  goto LAB_1482f059a;
  if (local_res8[0] == '\0') {
LAB_1482f04f9:
    cVar14 = PhysicsReplicationCVars::ResimulationCVars::bTriggerResimOnInputReceive;
    if (pFVar18->bOverrideTriggerResimOnInputReceive != 0) {
      cVar14 = pFVar18->bTriggerResimOnInputReceive;
    }
    if ((cVar14 != '\0') && (this->bIsLocallyControlled == false)) {
      iVar16 = (**(code **)(**(longlong **)(lVar6 + 0xb0) + 0xe8))();
      iVar15 = this->NetworkPhysicsTickOffset;
      iVar17 = (**(code **)((longlong)*(this->InputHistory).Object + 0xe8))();
      iVar17 = iVar17 + 1;
      if (iVar17 <= iVar16 - iVar15) {
        iVar15 = (**(code **)(**(longlong **)(lVar6 + 0xb0) + 0xf0))();
        iVar15 = iVar15 - this->NetworkPhysicsTickOffset;
        if (iVar17 < iVar15) {
          iVar17 = iVar15;
        }
        TriggerResimulation(this,iVar17);
      }
    }
  }
  else {
    if (this->bIsUsingLegacyData == false) {
      pFVar8 = (this->InputHelper).Ptr;
      if (pFVar8 != (FNetworkPhysicsDataHelper *)0x0) {
        if (this->ImplementationInterface_Internal == (INetworkPhysicsInputState_Internal *)0x0) {
          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7117391173232101245>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                              ,0x77d,"ImplementationInterface_Internal");
          if (bVar12) goto code_r0x0001482f04df;
        }
        else {
          (**(code **)((longlong)*pFVar8 + 0x50))(pFVar8,*(undefined8 *)(lVar6 + 0xb0));
        }
      }
    }
    else {
      cVar14 = PhysicsReplicationCVars::ResimulationCVars::bValidateDataOnGameThread;
      if (pFVar18->bOverrideValidateDataOnGameThread != 0) {
        cVar14 = pFVar18->bValidateDataOnGameThread;
      }
      if (cVar14 == '\0') {
        bVar12 = FWeakObjectPtr::IsValid(&(this->ActorComponent).WeakPtr);
        if ((bVar12) &&
           (pUVar22 = FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr),
           (pUVar22[3].field_0x23 & 0x40) == 0)) {
          plVar26 = *(longlong **)(lVar6 + 0xb0);
          pcVar11 = *(code **)(*plVar26 + 0xc0);
          pUVar22 = FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr);
          (*pcVar11)(plVar26,pUVar22);
        }
        else {
          bVar12 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7117391173232101238>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                              ,0x776,
                              "ActorComponent.IsValid() && ActorComponent.Get()->IsBeingDestroyed() == false"
                             );
          if (bVar12) {
code_r0x0001482f04df:
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
        }
      }
    }
    if (local_res8[0] == '\0') goto LAB_1482f04f9;
  }
  cVar14 = local_res18;
  `FAsyncNetworkPhysicsComponent::ConsumeAsyncInput'::__l64::<lambda_1>::operator()
            (&local_a8,(this->InputHistory).Object,*(FBaseRewindHistory **)(lVar6 + 0xb0),false,
             local_res18);
LAB_1482f059a:
  if ((*(longlong **)(lVar6 + 0xb8) != (longlong *)0x0) &&
     (cVar13 = (**(code **)(**(longlong **)(lVar6 + 0xb8) + 0x100))(), cVar13 != '\0')) {
    `FAsyncNetworkPhysicsComponent::ConsumeAsyncInput'::__l64::<lambda_1>::operator()
              (&local_a8,(this->StateHistory).Object,*(FBaseRewindHistory **)(lVar6 + 0xb8),false,
               local_res20);
  }
  plVar25 = *(longlong **)(lVar6 + 0xc0);
  iVar15 = *(int *)(lVar6 + 200);
  plVar26 = plVar25 + iVar15;
  local_b0 = plVar26;
  while( true ) {
    if (*(int *)(lVar6 + 200) != iVar15) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(&local_b8);
    }
    if (plVar25 == plVar26) break;
    if (((longlong *)*plVar25 != (longlong *)0x0) &&
       (cVar13 = (**(code **)(*(longlong *)*plVar25 + 0x100))(), cVar13 != '\0')) {
      plVar26 = (longlong *)*plVar25;
      pFVar10 = (this->InputHistory).Object;
      if ((cVar14 == '\0') || (local_res8[0] != '\0')) {
        cVar14 = '\0';
        if (local_res8[0] == '\0') goto LAB_1482f0639;
        (**(code **)((longlong)*pFVar10 + 0xa8))(pFVar10,plVar26,0,0,1,*local_a0);
      }
      else {
        cVar14 = '\x01';
LAB_1482f0639:
        iVar17 = (**(code **)((longlong)*pFVar10 + 0xa8))
                           (pFVar10,plVar26,local_98->NetworkPhysicsTickOffset,cVar14,1,0);
        if (cVar14 != '\0') {
          TriggerResimulation(local_98,iVar17);
        }
      }
      (**(code **)(*plVar26 + 0x110))(plVar26);
      plVar26 = local_b0;
      cVar14 = local_res18;
    }
    plVar25 = plVar25 + 1;
  }
  plVar25 = *(longlong **)(lVar6 + 0xd0);
  iVar15 = *(int *)(lVar6 + 0xd8);
  plVar26 = plVar25 + iVar15;
  local_b0 = plVar26;
  do {
    if (*(int *)(lVar6 + 0xd8) != iVar15) {
      `TCheckedPointerIterator<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>_const_,int,0>
      ::operator!='::__l2::<lambda_1>::operator()(local_b7);
    }
    if (plVar25 == plVar26) {
      return;
    }
    if (((longlong *)*plVar25 != (longlong *)0x0) &&
       (cVar14 = (**(code **)(*(longlong *)*plVar25 + 0x100))(), cVar14 != '\0')) {
      plVar26 = (longlong *)*plVar25;
      pFVar10 = (this->StateHistory).Object;
      if ((local_res20 == false) || (local_res8[0] != '\0')) {
        cVar14 = '\0';
        if (local_res8[0] == '\0') goto LAB_1482f071f;
        (**(code **)((longlong)*pFVar10 + 0xa8))(pFVar10,plVar26,0,0,1,*local_a0);
      }
      else {
        cVar14 = '\x01';
LAB_1482f071f:
        iVar17 = (**(code **)((longlong)*pFVar10 + 0xa8))
                           (pFVar10,plVar26,local_98->NetworkPhysicsTickOffset,cVar14,1,0);
        if (cVar14 != '\0') {
          TriggerResimulation(local_98,iVar17);
        }
      }
      (**(code **)(*plVar26 + 0x110))(plVar26);
      plVar26 = local_b0;
    }
    plVar25 = plVar25 + 1;
  } while( true );
}

// GetAsyncOutput_Internal @ 148306860

FAsyncNetworkPhysicsComponentOutput * __thiscall
FAsyncNetworkPhysicsComponent::GetAsyncOutput_Internal(FAsyncNetworkPhysicsComponent *this)

{
  TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_> *pTVar1;
  longlong lVar2;
  FAsyncNetworkPhysicsComponentOutput *pFVar3;
  FBaseRewindHistory *pFVar4;
  undefined8 *puVar5;
  undefined8 *local_res8;
  
  pFVar3 = (FAsyncNetworkPhysicsComponentOutput *)this->_padding_;
  if (pFVar3 == (FAsyncNetworkPhysicsComponentOutput *)0x0) {
    lVar2 = this->_padding_;
    pFVar3 = Chaos::
             TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>
             ::NewDataHelper<FAsyncNetworkPhysicsComponentOutput>
                       ((TSimCallbackObject<FAsyncNetworkPhysicsComponentInput,FAsyncNetworkPhysicsComponentOutput,1024>
                         *)this,(TArray<TUniquePtr<FAsyncNetworkPhysicsComponentOutput,TDefaultDelete<FAsyncNetworkPhysicsComponentOutput>_>,TSizedDefaultAllocator<32>_>
                                 *)&this->_padding_,
                        (TTransactionallySafeSpscQueue<FAsyncNetworkPhysicsComponentOutput_*,FMemory>
                         *)&this->_padding_);
    pFVar3->_padding_ = lVar2;
    this->_padding_ = (longlong)pFVar3;
  }
  if ((((this->bIsLocallyControlled != false) || (this->NetMode - NM_DedicatedServer < 2)) &&
      (pTVar1 = &pFVar3->InputData, (pFVar3->InputData).Ptr == (FBaseRewindHistory *)0x0)) &&
     ((this->InputHistory).Object != (FBaseRewindHistory *)0x0)) {
    pFVar4 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(&this->InputHistory);
    puVar5 = (undefined8 *)(**(code **)((longlong)*pFVar4 + 8))(pFVar4,&local_res8);
    if (pTVar1 != (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>
                   *)puVar5) {
      pFVar4 = pTVar1->Ptr;
      pTVar1->Ptr = (FBaseRewindHistory *)*puVar5;
      *puVar5 = 0;
      if (pFVar4 != (FBaseRewindHistory *)0x0) {
        (**(code **)*pFVar4)(pFVar4,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
  }
  if (((this->NetMode == NM_DedicatedServer) || (this->NetMode == NM_ListenServer)) &&
     ((pTVar1 = &pFVar3->StateData, (pFVar3->StateData).Ptr == (FBaseRewindHistory *)0x0 &&
      ((this->StateHistory).Object != (FBaseRewindHistory *)0x0)))) {
    pFVar4 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(&this->StateHistory);
    puVar5 = (undefined8 *)(**(code **)((longlong)*pFVar4 + 8))(pFVar4,&local_res8);
    if (pTVar1 != (TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>
                   *)puVar5) {
      pFVar4 = pTVar1->Ptr;
      pTVar1->Ptr = (FBaseRewindHistory *)*puVar5;
      *puVar5 = 0;
      if (pFVar4 != (FBaseRewindHistory *)0x0) {
        (**(code **)*pFVar4)(pFVar4,1);
      }
    }
    if (local_res8 != (undefined8 *)0x0) {
      (**(code **)*local_res8)(local_res8,1);
    }
    (**(code **)((longlong)*pTVar1->Ptr + 0x108))(pTVar1->Ptr,this->StatesToNetwork,1);
  }
  return pFVar3;
}

// GetComponentSettings @ 148308310

FNetworkPhysicsSettingsNetworkPhysicsComponent * __thiscall
FAsyncNetworkPhysicsComponent::GetComponentSettings(FAsyncNetworkPhysicsComponent *this)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  atomic<int> aVar3;
  atomic<int> aVar4;
  FNetworkPhysicsSettingsNetworkPhysicsComponent *pFVar5;
  FNetworkPhysicsSettingsData *pFVar6;
  FNetworkPhysicsSettingsData *pFVar7;
  FNetworkPhysicsSettingsData *pFVar8;
  bool bVar9;
  uint uStackX_c;
  
  pFVar8 = (FNetworkPhysicsSettingsData *)0x0;
  if ((((this->SettingsComponent).Object == (FNetworkPhysicsSettingsData *)0x0) ||
      (pTVar1 = (this->SettingsComponent).WeakReferenceCount.ReferenceController,
      pTVar1 == (TReferenceControllerBase<1> *)0x0)) || ((int)pTVar1->SharedReferenceCount < 1)) {
    pFVar7 = (FNetworkPhysicsSettingsData *)((ulonglong)uStackX_c << 0x20);
    pFVar5 = &SettingsNetworkPhysicsComponent_Default;
    goto LAB_1483083bf;
  }
  pFVar7 = (FNetworkPhysicsSettingsData *)
           (this->SettingsComponent).WeakReferenceCount.ReferenceController;
  pFVar6 = pFVar7;
  if (pFVar7 == (FNetworkPhysicsSettingsData *)0x0) {
LAB_148308371:
    bVar9 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    pFVar7 = pFVar6;
    if (bVar9) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FNetworkPhysicsSettingsNetworkPhysicsComponent *)(*pcVar2)();
      return pFVar5;
    }
  }
  else {
    aVar3 = *(atomic<int> *)&pFVar7->DefaultReplicationSettings;
    do {
      pFVar6 = pFVar8;
      if (aVar3 == (atomic<int>)0x0) goto LAB_148308371;
      LOCK();
      aVar4 = *(atomic<int> *)&pFVar7->DefaultReplicationSettings;
      bVar9 = aVar3 == aVar4;
      if (bVar9) {
        *(int *)&pFVar7->DefaultReplicationSettings = (int)aVar3 + 1;
        aVar4 = aVar3;
      }
      UNLOCK();
      aVar3 = aVar4;
    } while (!bVar9);
    pFVar8 = (this->SettingsComponent).Object;
    pFVar6 = pFVar7;
    if (pFVar8 == (FNetworkPhysicsSettingsData *)0x0) goto LAB_148308371;
  }
  pFVar5 = &pFVar8->NetworkPhysicsComponentSettings;
  pFVar8 = (FNetworkPhysicsSettingsData *)&DAT_00000001;
LAB_1483083bf:
  if (pFVar8 != (FNetworkPhysicsSettingsData *)0x0) {
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)pFVar7);
  }
  return pFVar5;
}

// GetCurrentInputDecay @ 1483086b0

float __thiscall
FAsyncNetworkPhysicsComponent::GetCurrentInputDecay
          (FAsyncNetworkPhysicsComponent *this,FNetworkPhysicsPayload *param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  FNetworkPhysicsSettingsNetworkPhysicsComponent *pFVar4;
  FRichCurve *this_00;
  float fVar5;
  
  if (((param_1 != (FNetworkPhysicsPayload *)0x0) && (lVar1 = this->_padding_, lVar1 != 0)) &&
     (lVar2 = *(longlong *)(lVar1 + 0x238), lVar2 != 0)) {
    pFVar4 = GetComponentSettings(this);
    cVar3 = PhysicsReplicationCVars::ResimulationCVars::bApplyInputDecayOverSetTime;
    if (pFVar4->bOverrideApplyInputDecayOverSetTime != 0) {
      cVar3 = pFVar4->bApplyInputDecayOverSetTime;
    }
    if (cVar3 == '\0') {
      fVar5 = (float)(*(int *)(lVar2 + 0x4e4) + ~param_1->LocalFrame);
    }
    else if (pFVar4->bOverrideInputDecaySetTime == 0) {
      fVar5 = (float)((double)PhysicsReplicationCVars::ResimulationCVars::InputDecaySetTime /
                     *(double *)(lVar1 + 0x2b0));
    }
    else {
      fVar5 = (float)((double)pFVar4->InputDecaySetTime / *(double *)(lVar1 + 0x2b0));
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    else {
      fVar5 = (float)(*(int *)(lVar2 + 0x4e0) - param_1->LocalFrame) / fVar5;
      if (__real_3f800000 <= fVar5) {
        fVar5 = __real_3f800000;
      }
      if (fVar5 <= 0.0) {
        fVar5 = 0.0;
      }
    }
    this_00 = FRuntimeFloatCurve::GetRichCurveConst(&pFVar4->InputDecayCurve);
    fVar5 = FRichCurve::Eval(this_00,fVar5,0.0);
    return fVar5;
  }
  return 0.0;
}

// GetEvolution @ 14830a940

FPBDRigidsEvolutionGBF * __thiscall
FAsyncNetworkPhysicsComponent::GetEvolution(FAsyncNetworkPhysicsComponent *this)

{
  if (this->_padding_ != 0) {
    return *(FPBDRigidsEvolutionGBF **)(this->_padding_ + 0xbd0);
  }
  return (FPBDRigidsEvolutionGBF *)0x0;
}

// GetRigidSolver @ 14830d0f0

FPBDRigidsSolver * __thiscall
FAsyncNetworkPhysicsComponent::GetRigidSolver(FAsyncNetworkPhysicsComponent *this)

{
  return (FPBDRigidsSolver *)this->_padding_;
}

// OnInitialize_Internal @ 1483132b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FAsyncNetworkPhysicsComponent::OnInitialize_Internal(FAsyncNetworkPhysicsComponent *this)

{
  longlong lVar1;
  char cVar2;
  FChaosSolversModule *this_00;
  IChaosSettingsProvider *pIVar3;
  FDelegateHandle FVar4;
  
  lVar1 = this->_padding_;
  if (lVar1 != 0) {
    this_00 = FChaosSolversModule::GetModule();
    pIVar3 = FChaosSolversModule::GetSettingsProvider(this_00);
    cVar2 = (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
    if (cVar2 == '\0') {
      if (2 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
    }
    else {
      lVar1 = *(longlong *)(lVar1 + 0x240);
      if (lVar1 != 0) {
        FVar4 = TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
                AddRaw<FAsyncNetworkPhysicsComponent>
                          ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>
                            *)(lVar1 + 0x10),(FAsyncNetworkPhysicsComponent *)&stack0x00000008,
                           (pmf_75c59a28)this);
                    /* WARNING: Load size is inaccurate */
        (this->DelegateOnPreProcessInputs_Internal).ID = *FVar4.ID;
        FVar4 = TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>::
                AddRaw<FAsyncNetworkPhysicsComponent>
                          ((TMulticastDelegateRegistration<void___cdecl(int),FDefaultDelegateUserPolicy>
                            *)(lVar1 + 0x30),(FAsyncNetworkPhysicsComponent *)&stack0x00000008,
                           (pmf_75c59a28)this);
                    /* WARNING: Load size is inaccurate */
        (this->DelegateOnPostProcessInputs_Internal).ID = *FVar4.ID;
        return;
      }
    }
  }
  return;
}

// OnPhysicsObjectUnregistered_Internal @ 148313370

void __thiscall
FAsyncNetworkPhysicsComponent::OnPhysicsObjectUnregistered_Internal
          (FAsyncNetworkPhysicsComponent *this,FPhysicsObject *param_1)

{
  if (this->PhysicsObject == param_1) {
    UnregisterDataHistoryFromRewindData(this);
    this->PhysicsObject = (FPhysicsObject *)0x0;
  }
  return;
}

// OnPostProcessInputs_Internal @ 148313500

void __thiscall
FAsyncNetworkPhysicsComponent::OnPostProcessInputs_Internal
          (FAsyncNetworkPhysicsComponent *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  FNetworkPhysicsPayload *pFVar3;
  code *pcVar4;
  INetworkPhysicsInputState_Internal *pIVar5;
  bool bVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  FNetworkPhysicsSettingsNetworkPhysicsComponent *pFVar10;
  UObject *pUVar11;
  FBaseRewindHistory *pFVar12;
  FAsyncNetworkPhysicsComponentOutput *pFVar13;
  char cVar14;
  
  pFVar10 = GetComponentSettings(this);
  if ((this->NetMode == NM_DedicatedServer) || (this->NetMode == NM_ListenServer)) {
    bVar8 = true;
  }
  else {
    bVar8 = false;
  }
  cVar14 = '\0';
  if ((this->_padding_ != 0) && (lVar2 = *(longlong *)(this->_padding_ + 0xbd0), lVar2 != 0)) {
    cVar14 = *(char *)(lVar2 + 0x4e0);
  }
  if (((this->bIsLocallyControlled != false) && (cVar14 == '\0')) &&
     (pFVar3 = (this->InputData).Ptr, pFVar3 != (FNetworkPhysicsPayload *)0x0)) {
    iVar1 = this->NetworkPhysicsTickOffset;
    pFVar3->LocalFrame = param_1;
    pFVar3->bDataAltered = false;
    pFVar3->bReceivedData = false;
    pFVar3->bImportant = false;
    iVar9 = param_1;
    if (!bVar8) {
      iVar9 = iVar1 + param_1;
    }
    pFVar3->ServerFrame = iVar9;
    if (this->bIsUsingLegacyData == false) {
      pIVar5 = this->ImplementationInterface_Internal;
      if (pIVar5 == (INetworkPhysicsInputState_Internal *)0x0) {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7117391173232101579>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                           ,0x8cb,"ImplementationInterface_Internal");
        if (bVar6) goto code_r0x000148313668;
      }
      else {
        (**(code **)((longlong)*pIVar5 + 8))(pIVar5,pFVar3);
      }
    }
    else {
      bVar6 = FWeakObjectPtr::IsValid(&(this->ActorComponent).WeakPtr);
      if ((bVar6) &&
         (pUVar11 = FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr),
         (pUVar11[3].field_0x23 & 0x40) == 0)) {
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x48);
        pUVar11 = FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr);
        (*pcVar4)(pFVar3,pUVar11);
      }
      else {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7117391173232101570>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                           ,0x8c2,
                           "ActorComponent.IsValid() && ActorComponent.Get()->IsBeingDestroyed() == false"
                          );
        if (bVar6) {
code_r0x000148313668:
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    if (((this->InputHistory).Object == (FBaseRewindHistory *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar12 = (this->InputHistory).Object;
    (**(code **)((longlong)*pFVar12 + 0x60))(pFVar12,param_1,pFVar3);
  }
  if (bVar8) {
LAB_148313704:
    bVar6 = true;
  }
  else {
    if (pFVar10->bOverrideCompareStateToTriggerRewind == 0) {
      cVar7 = this->bCompareStateToTriggerRewind;
    }
    else {
      cVar7 = pFVar10->bCompareStateToTriggerRewind;
    }
    if (cVar7 != '\0') {
      if (this->bIsLocallyControlled == false) {
        if (pFVar10->bOverridebCompareStateToTriggerRewindIncludeSimProxies == 0) {
          cVar7 = this->bCompareStateToTriggerRewindIncludeSimProxies;
        }
        else {
          cVar7 = pFVar10->bCompareStateToTriggerRewindIncludeSimProxies;
        }
        if (cVar7 == '\0') goto LAB_148313700;
      }
      goto LAB_148313704;
    }
LAB_148313700:
    bVar6 = false;
  }
  if ((((this->StateHistory).Object != (FBaseRewindHistory *)0x0) &&
      (pFVar3 = (this->StateData).Ptr, pFVar3 != (FNetworkPhysicsPayload *)0x0)) && (bVar6)) {
    iVar1 = this->NetworkPhysicsTickOffset;
    pFVar3->LocalFrame = param_1;
    pFVar3->bDataAltered = false;
    pFVar3->bReceivedData = false;
    pFVar3->bImportant = false;
    iVar9 = param_1;
    if (!bVar8) {
      iVar9 = iVar1 + param_1;
    }
    pFVar3->ServerFrame = iVar9;
    if (this->bIsUsingLegacyData == false) {
      pIVar5 = this->ImplementationInterface_Internal;
      if (pIVar5 == (INetworkPhysicsInputState_Internal *)0x0) {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7117391173232101618>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                           ,0x8f2,"ImplementationInterface_Internal");
        if (bVar8) goto code_r0x0001483137f1;
      }
      else {
        (**(code **)((longlong)*pIVar5 + 0x20))(pIVar5,pFVar3);
      }
    }
    else {
      bVar8 = FWeakObjectPtr::IsValid(&(this->ActorComponent).WeakPtr);
      if ((bVar8) &&
         (pUVar11 = FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr),
         (pUVar11[3].field_0x23 & 0x40) == 0)) {
        pcVar4 = *(code **)(pFVar3->_padding_ + 0x48);
        pUVar11 = FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr);
        (*pcVar4)(pFVar3,pUVar11);
      }
      else {
        bVar8 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<7117391173232101609>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                           ,0x8e9,
                           "ActorComponent.IsValid() && ActorComponent.Get()->IsBeingDestroyed() == false"
                          );
        if (bVar8) {
code_r0x0001483137f1:
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
    }
    pFVar12 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(&this->StateHistory);
    (**(code **)((longlong)*pFVar12 + 0x60))(pFVar12,param_1,pFVar3);
  }
  if (cVar14 == '\0') {
    pFVar13 = GetAsyncOutput_Internal(this);
    SendInputData_Internal(this,pFVar13,param_1);
    SendStateData_Internal(this,pFVar13,param_1);
    if (this->_padding_ != 0) {
      (**(code **)(this->_padding_ + 200))(this);
      this->_padding_ = 0;
    }
  }
  return;
}

// OnPreProcessInputs_Internal @ 1483138a0

void __thiscall
FAsyncNetworkPhysicsComponent::OnPreProcessInputs_Internal
          (FAsyncNetworkPhysicsComponent *this,int param_1)

{
  int iVar1;
  longlong lVar2;
  FNetworkPhysicsPayload *pFVar3;
  longlong lVar4;
  INetworkPhysicsInputState_Internal *pIVar5;
  undefined1 uVar6;
  char cVar7;
  bool bVar8;
  char cVar9;
  bool bVar10;
  int iVar11;
  FNetworkPhysicsSettingsNetworkPhysicsComponent *pFVar12;
  FBaseRewindHistory *pFVar13;
  UObject *pUVar14;
  FRichCurve *this_00;
  TSharedPtr<Chaos::FBaseRewindHistory,1> *pTVar15;
  int iVar16;
  code *pcVar17;
  float fVar18;
  char local_res18;
  char *in_stack_ffffffffffffff88;
  
  ConsumeAsyncInput(this,param_1);
  pFVar12 = GetComponentSettings(this);
  if ((this->NetMode == NM_DedicatedServer) || (this->NetMode == NM_ListenServer)) {
    bVar10 = true;
  }
  else {
    bVar10 = false;
  }
  cVar9 = '\0';
  local_res18 = '\0';
  if ((this->_padding_ != 0) && (lVar2 = *(longlong *)(this->_padding_ + 0xbd0), lVar2 != 0)) {
    local_res18 = *(char *)(lVar2 + 0x4e1);
    cVar9 = *(char *)(lVar2 + 0x4e0);
  }
  cVar7 = PhysicsReplicationCVars::ResimulationCVars::bApplySimProxyStateAtRuntime;
  if (pFVar12->bOverrideApplySimProxyStateAtRuntime != 0) {
    cVar7 = pFVar12->bApplySimProxyStateAtRuntime;
  }
  if (((((cVar7 != '\0') && (!bVar10)) && (this->bIsLocallyControlled == false)) || (cVar9 != '\0'))
     && ((pTVar15 = &this->StateHistory, pTVar15->Object != (FBaseRewindHistory *)0x0 &&
         (pFVar3 = (this->StateData).Ptr, pFVar3 != (FNetworkPhysicsPayload *)0x0)))) {
    pFVar3->LocalFrame = param_1;
    if (PhysicsReplicationCVars::ResimulationCVars::bAllowRewindToClosestState == false) {
      pFVar13 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(pTVar15);
      pcVar17 = *(code **)((longlong)*pFVar13 + 0x48);
LAB_148313a30:
      if (cVar9 == '\0') goto LAB_1483139a8;
      uVar6 = 1;
    }
    else {
      pFVar13 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(pTVar15);
      pcVar17 = *(code **)((longlong)*pFVar13 + 0x48);
      if (local_res18 == '\0') goto LAB_148313a30;
LAB_1483139a8:
      uVar6 = 0;
    }
    in_stack_ffffffffffffff88 =
         (char *)CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff88 >> 8),uVar6);
    cVar7 = (*pcVar17)(pFVar13,param_1,local_res18,pFVar3,in_stack_ffffffffffffff88);
    if ((cVar7 != '\0') && (pFVar3->bReceivedData != false)) {
      if (this->bIsUsingLegacyData == false) {
        pIVar5 = this->ImplementationInterface_Internal;
        if (pIVar5 == (INetworkPhysicsInputState_Internal *)0x0) {
          in_stack_ffffffffffffff88 = "ImplementationInterface_Internal";
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7117391173232101360>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                             ,0x7f0,"ImplementationInterface_Internal");
          if (bVar8) {
code_r0x000148313aa5:
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
        }
        else {
          (**(code **)((longlong)*pIVar5 + 0x28))(pIVar5,pFVar3);
        }
      }
      else {
        bVar8 = FWeakObjectPtr::IsValid(&(this->ActorComponent).WeakPtr);
        if ((bVar8) &&
           (pUVar14 = FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr),
           (pUVar14[3].field_0x23 & 0x40) == 0)) {
          pcVar17 = *(code **)(pFVar3->_padding_ + 0x40);
          pUVar14 = FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr);
          (*pcVar17)(pFVar3,pUVar14);
        }
        else {
          in_stack_ffffffffffffff88 =
               "ActorComponent.IsValid() && ActorComponent.Get()->IsBeingDestroyed() == false";
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7117391173232101352>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                             ,0x7e8,
                             "ActorComponent.IsValid() && ActorComponent.Get()->IsBeingDestroyed() == false"
                            );
          if (bVar8) goto code_r0x000148313aa5;
        }
      }
    }
  }
  cVar7 = PhysicsReplicationCVars::ResimulationCVars::bApplySimProxyInputAtRuntime;
  if (pFVar12->bOverrideApplySimProxyInputAtRuntime != 0) {
    cVar7 = pFVar12->bApplySimProxyInputAtRuntime;
  }
  if (cVar7 == '\0') {
    if (bVar10) goto LAB_148313ae8;
LAB_148313af1:
    if (cVar9 == '\0') goto LAB_148314046;
  }
  else {
    if (bVar10) {
LAB_148313ae8:
      cVar7 = this->bIsLocallyControlled;
    }
    else {
      cVar7 = this->bIsLocallyControlled;
    }
    if (cVar7 != '\0') goto LAB_148313af1;
  }
  if (((this->InputHistory).Object != (FBaseRewindHistory *)0x0) &&
     (pFVar3 = (this->InputData).Ptr, pFVar3 != (FNetworkPhysicsPayload *)0x0)) {
    iVar1 = pFVar3->LocalFrame;
    iVar11 = iVar1 + 1;
    iVar16 = iVar11;
    if ((this->NewImportantInputFrame < iVar11) && (cVar9 == '\0')) {
      cVar7 = PhysicsReplicationCVars::ResimulationCVars::bApplyDataInsteadOfMergeData;
      if (pFVar12->bOverrideApplyDataInsteadOfMergeData != 0) {
        cVar7 = pFVar12->bApplyDataInsteadOfMergeData;
      }
      iVar16 = this->NewImportantInputFrame;
      if ((cVar7 != '\0') && (iVar16 = iVar11, this->bIsUsingLegacyData != false)) {
        bVar8 = FWeakObjectPtr::IsValid(&(this->ActorComponent).WeakPtr);
        if ((bVar8) &&
           (pUVar14 = FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr),
           (pUVar14[3].field_0x23 & 0x40) == 0)) {
          pFVar13 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(&this->InputHistory);
          pcVar17 = *(code **)((longlong)*pFVar13 + 0x50);
          pUVar14 = FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr);
          (*pcVar17)(pFVar13,this->NewImportantInputFrame,iVar1,pUVar14,
                     (ulonglong)in_stack_ffffffffffffff88 & 0xffffffffffffff00);
        }
        else {
          bVar8 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<7117391173232101397>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                             ,0x815,
                             "ActorComponent.IsValid() && ActorComponent.Get()->IsBeingDestroyed() == false"
                            );
          if (bVar8) {
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
        }
      }
    }
    pTVar15 = &this->InputHistory;
    pFVar13 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(pTVar15);
    cVar7 = PhysicsReplicationCVars::ResimulationCVars::bAllowInputExtrapolation;
    if (pFVar12->bOverrideAllowInputExtrapolation != 0) {
      cVar7 = pFVar12->bAllowInputExtrapolation;
    }
    cVar7 = (**(code **)((longlong)*pFVar13 + 0x48))
                      (pFVar13,param_1,local_res18,pFVar3,cVar7 == '\0');
    if (cVar7 != '\0') {
      if ((bVar10) && (pFVar3->bDataAltered != false)) {
        pFVar13 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(pTVar15);
        iVar11 = (**(code **)((longlong)*pFVar13 + 0xe8))(pFVar13);
        if (param_1 < iVar11) {
          this->MissingInputCount = this->MissingInputCount + 1;
        }
      }
      if (cVar9 == '\0') {
        iVar11 = pFVar3->LocalFrame;
        if (iVar16 < iVar11) {
          cVar9 = PhysicsReplicationCVars::ResimulationCVars::bApplyDataInsteadOfMergeData;
          if (pFVar12->bOverrideApplyDataInsteadOfMergeData != 0) {
            cVar9 = pFVar12->bApplyDataInsteadOfMergeData;
          }
          if (cVar9 == '\0') {
            pFVar13 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(&this->InputHistory);
            (**(code **)((longlong)*pFVar13 + 0x58))(pFVar13,iVar16,pFVar3);
          }
          else {
            do {
              if (((this->InputHistory).Object == (FBaseRewindHistory *)0x0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("IsValid()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                     ,0x458,L""), bVar8)) {
                pcVar17 = (code *)swi(3);
                (*pcVar17)();
                return;
              }
              pFVar13 = (this->InputHistory).Object;
              cVar9 = (**(code **)((longlong)*pFVar13 + 0x48))(pFVar13,iVar16,local_res18,pFVar3,1);
              if ((cVar9 != '\0') && (iVar16 < iVar11)) {
                if (this->bIsUsingLegacyData == false) {
                  if (this->ImplementationInterface_Internal ==
                      (INetworkPhysicsInputState_Internal *)0x0) {
                    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<7117391173232101478>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                                       ,0x866,"ImplementationInterface_Internal");
                    if (bVar8) goto code_r0x000148313f14;
                  }
                  else {
                    (**(code **)((longlong)*this->ImplementationInterface_Internal + 0x18))();
                  }
                }
                else {
                  bVar8 = FWeakObjectPtr::IsValid(&(this->ActorComponent).WeakPtr);
                  if ((bVar8) &&
                     (pUVar14 = FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr),
                     (pUVar14[3].field_0x23 & 0x40) == 0)) {
                    pcVar17 = *(code **)(pFVar3->_padding_ + 0x40);
                    FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr);
                    (*pcVar17)(pFVar3);
                  }
                  else {
                    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                                      (&bGEnsureHasExecuted<7117391173232101470>,false,
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                                       ,0x85e,
                                       "ActorComponent.IsValid() && ActorComponent.Get()->IsBeingDestroyed() == false"
                                      );
                    if (bVar8) {
code_r0x000148313f14:
                      pcVar17 = (code *)swi(3);
                      (*pcVar17)();
                      return;
                    }
                  }
                }
              }
              iVar16 = iVar16 + 1;
            } while (iVar16 <= iVar11);
          }
        }
      }
      else {
        pFVar13 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(pTVar15);
        iVar11 = (**(code **)((longlong)*pFVar13 + 0xe8))(pFVar13);
        if (pFVar3->LocalFrame < iVar11) {
          iVar11 = pFVar3->LocalFrame;
        }
        pFVar3->LocalFrame = iVar11;
        if (iVar11 < param_1) {
          lVar2 = this->_padding_;
          if (lVar2 == 0) {
            (**(code **)(pFVar3->_padding_ + 0x18))(pFVar3);
          }
          else {
            lVar4 = *(longlong *)(lVar2 + 0x238);
            if (lVar4 == 0) {
              (**(code **)(pFVar3->_padding_ + 0x18))(pFVar3);
            }
            else {
              pFVar12 = GetComponentSettings(this);
              cVar9 = PhysicsReplicationCVars::ResimulationCVars::bApplyInputDecayOverSetTime;
              if (pFVar12->bOverrideApplyInputDecayOverSetTime != 0) {
                cVar9 = pFVar12->bApplyInputDecayOverSetTime;
              }
              if (cVar9 == '\0') {
                fVar18 = (float)(*(int *)(lVar4 + 0x4e4) + ~pFVar3->LocalFrame);
              }
              else if (pFVar12->bOverrideInputDecaySetTime == 0) {
                fVar18 = (float)((double)PhysicsReplicationCVars::ResimulationCVars::
                                         InputDecaySetTime / *(double *)(lVar2 + 0x2b0));
              }
              else {
                fVar18 = (float)((double)pFVar12->InputDecaySetTime / *(double *)(lVar2 + 0x2b0));
              }
              if (fVar18 <= 0.0) {
                fVar18 = 0.0;
              }
              else {
                fVar18 = (float)(*(int *)(lVar4 + 0x4e0) - pFVar3->LocalFrame) / fVar18;
                if (__real_3f800000 <= fVar18) {
                  fVar18 = __real_3f800000;
                }
                if (fVar18 <= 0.0) {
                  fVar18 = 0.0;
                }
              }
              this_00 = FRuntimeFloatCurve::GetRichCurveConst(&pFVar12->InputDecayCurve);
              FRichCurve::Eval(this_00,fVar18,0.0);
              (**(code **)(pFVar3->_padding_ + 0x18))(pFVar3);
            }
          }
        }
      }
      if ((bVar10) && (pFVar3->bDataAltered != false)) {
        pFVar3->bReceivedData = false;
        pFVar3->bImportant = false;
        pFVar13 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(&this->InputHistory);
        (**(code **)((longlong)*pFVar13 + 0x60))(pFVar13,param_1,pFVar3);
      }
      if (this->bIsUsingLegacyData == false) {
        pIVar5 = this->ImplementationInterface_Internal;
        if (pIVar5 == (INetworkPhysicsInputState_Internal *)0x0) {
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7117391173232101515>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                              ,0x88b,"ImplementationInterface_Internal");
          if (bVar10) goto code_r0x00014831403a;
        }
        else {
          (**(code **)((longlong)*pIVar5 + 0x18))(pIVar5,pFVar3);
        }
      }
      else {
        bVar10 = FWeakObjectPtr::IsValid(&(this->ActorComponent).WeakPtr);
        if ((bVar10) &&
           (pUVar14 = FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr),
           (pUVar14[3].field_0x23 & 0x40) == 0)) {
          pcVar17 = *(code **)(pFVar3->_padding_ + 0x40);
          pUVar14 = FWeakObjectPtr::Get(&(this->ActorComponent).WeakPtr);
          (*pcVar17)(pFVar3,pUVar14);
        }
        else {
          bVar10 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<7117391173232101507>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\NetworkPhysicsComponent.cpp"
                              ,0x883,
                              "ActorComponent.IsValid() && ActorComponent.Get()->IsBeingDestroyed() == false"
                             );
          if (bVar10) {
code_r0x00014831403a:
            pcVar17 = (code *)swi(3);
            (*pcVar17)();
            return;
          }
        }
      }
    }
  }
LAB_148314046:
  this->NewImportantInputFrame = 0x7fffffff;
  return;
}

// OnUninitialize_Internal @ 148315ea0

void __thiscall
FAsyncNetworkPhysicsComponent::OnUninitialize_Internal(FAsyncNetworkPhysicsComponent *this)

{
  longlong lVar1;
  FDelegateHandle FVar2;
  
  if ((this->_padding_ != 0) && (lVar1 = *(longlong *)(this->_padding_ + 0x240), lVar1 != 0)) {
    FVar2.ID = (this->DelegateOnPreProcessInputs_Internal).ID;
    if (FVar2.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar1 + 0x10),FVar2);
    }
    FVar2.ID = (this->DelegateOnPostProcessInputs_Internal).ID;
    (this->DelegateOnPreProcessInputs_Internal).ID = 0;
    if (FVar2.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(lVar1 + 0x30),FVar2);
    }
    (this->DelegateOnPostProcessInputs_Internal).ID = 0;
  }
  UnregisterDataHistoryFromRewindData(this);
  return;
}

// RegisterDataHistoryInRewindData @ 14831aa20

void __thiscall
FAsyncNetworkPhysicsComponent::RegisterDataHistoryInRewindData(FAsyncNetworkPhysicsComponent *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong lVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  FReadPhysicsObjectInterface<1> local_res8 [8];
  TPairInitializer<Chaos::TGeometryParticleHandleImp<double,3,1>_*_const_&,TWeakPtr<Chaos::FBaseRewindHistory,1>_&&>
  local_res10;
  TWeakPtr<Chaos::FBaseRewindHistory,1> local_48;
  TWeakPtr<Chaos::FBaseRewindHistory,1> **local_38;
  TWeakPtr<Chaos::FBaseRewindHistory,1> *local_30;
  
  if ((this->_padding_ != 0) && (lVar3 = *(longlong *)(this->_padding_ + 0x238), lVar3 != 0)) {
    UnregisterDataHistoryFromRewindData(this);
    local_res8[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
    pTVar4 = Chaos::FReadPhysicsObjectInterface<1>::GetParticle(local_res8,this->PhysicsObject);
    local_48.Object = (this->InputHistory).Object;
    if (local_48.Object != (FBaseRewindHistory *)0x0) {
      local_48.WeakReferenceCount.ReferenceController =
           (this->InputHistory).SharedReferenceCount.ReferenceController;
      if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_res10.Value = (TWeakPtr<Chaos::FBaseRewindHistory,1> *)pTVar4;
      TArray<TWeakPtr<Chaos::FBaseRewindHistory,1>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TWeakPtr<Chaos::FBaseRewindHistory,1>_>
                ((TArray<TWeakPtr<Chaos::FBaseRewindHistory,1>,TSizedDefaultAllocator<32>_> *)
                 (lVar3 + 0x418),&local_48);
      if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_48.WeakReferenceCount.ReferenceController,1);
        }
      }
      if ((TGeometryParticleHandleImp<double,3,1> *)local_res10.Value !=
          (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        local_48.Object = (this->InputHistory).Object;
        local_48.WeakReferenceCount.ReferenceController =
             (this->InputHistory).SharedReferenceCount.ReferenceController;
        if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        local_38 = &local_res10.Value;
        local_30 = &local_48;
        TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<Chaos::TGeometryParticleHandleImp<double,3,1>_*_const_&,TWeakPtr<Chaos::FBaseRewindHistory,1>_&&>_>
                  ((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>,FDefaultSetAllocator>
                    *)(lVar3 + 0x438),&local_res10,(bool *)&local_38);
        if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_48.WeakReferenceCount.ReferenceController,1);
          }
        }
      }
    }
    local_48.Object = (this->StateHistory).Object;
    if (local_48.Object != (FBaseRewindHistory *)0x0) {
      local_48.WeakReferenceCount.ReferenceController =
           (this->StateHistory).SharedReferenceCount.ReferenceController;
      if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      local_res10.Value = (TWeakPtr<Chaos::FBaseRewindHistory,1> *)pTVar4;
      TArray<TWeakPtr<Chaos::FBaseRewindHistory,1>,TSizedDefaultAllocator<32>_>::
      AddUniqueImpl<TWeakPtr<Chaos::FBaseRewindHistory,1>_>
                ((TArray<TWeakPtr<Chaos::FBaseRewindHistory,1>,TSizedDefaultAllocator<32>_> *)
                 (lVar3 + 0x428),&local_48);
      if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
        aVar2 = *paVar1;
        *paVar1 = (atomic<int>)((int)*paVar1 + -1);
        UNLOCK();
        if (aVar2 == (atomic<int>)0x1) {
          (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                    (local_48.WeakReferenceCount.ReferenceController,1);
        }
      }
      if ((TGeometryParticleHandleImp<double,3,1> *)local_res10.Value !=
          (TGeometryParticleHandleImp<double,3,1> *)0x0) {
        local_48.Object = (this->StateHistory).Object;
        local_48.WeakReferenceCount.ReferenceController =
             (this->StateHistory).SharedReferenceCount.ReferenceController;
        if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          (local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
               (atomic<int>)
               ((int)(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
          UNLOCK();
        }
        local_38 = &local_res10.Value;
        local_30 = &local_48;
        TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>,FDefaultSetAllocator>
        ::
        Emplace<TPairInitializer<Chaos::TGeometryParticleHandleImp<double,3,1>_*_const_&,TWeakPtr<Chaos::FBaseRewindHistory,1>_&&>_>
                  ((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>,FDefaultSetAllocator>
                    *)(lVar3 + 0x488),&local_res10,(bool *)&local_38);
        if (local_48.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          paVar1 = &(local_48.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
          aVar2 = *paVar1;
          *paVar1 = (atomic<int>)((int)*paVar1 + -1);
          UNLOCK();
          if (aVar2 == (atomic<int>)0x1) {
            (**(code **)((local_48.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                      (local_48.WeakReferenceCount.ReferenceController,1);
          }
        }
      }
    }
  }
  return;
}

// SendInputData_Internal @ 14831fa70

void __thiscall
FAsyncNetworkPhysicsComponent::SendInputData_Internal
          (FAsyncNetworkPhysicsComponent *this,FAsyncNetworkPhysicsComponentOutput *param_1,
          int param_2)

{
  TArray<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  ushort uVar6;
  ENetMode EVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  longlong *plVar10;
  code *pcVar11;
  bool bVar12;
  ushort uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  FNetworkPhysicsSettingsNetworkPhysicsComponent *pFVar17;
  FBaseRewindHistory *pFVar18;
  FScriptContainerElement *pFVar19;
  char cVar20;
  uint uVar21;
  TSharedPtr<Chaos::FBaseRewindHistory,1> *this_00;
  byte bVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  double dVar25;
  float fVar26;
  undefined8 *local_res20;
  undefined8 in_stack_ffffffffffffff98;
  FScriptContainerElement *pFVar27;
  
  dVar5 = __real_bfe0000000000000;
  EVar7 = this->NetMode;
  if ((EVar7 != NM_DedicatedServer) && (EVar7 != NM_ListenServer)) {
    bVar22 = 0;
    goto LAB_14831fc34;
  }
  bVar22 = 1;
  if (PhysicsReplicationCVars::ResimulationCVars::bDynamicInputScalingEnabled) {
    if ((EVar7 - NM_DedicatedServer < 2) && (lVar8 = this->_padding_, lVar8 != 0)) {
      fVar26 = (float)(*(double *)(lVar8 + 0x280) - (double)this->TimeOfLastDynamicInputScaling);
      if (this->MissingInputCount < 1) {
        if (PhysicsReplicationCVars::ResimulationCVars::DynamicInputScalingDecreaseTimeInterval <
            fVar26) {
          this->InputsToNetwork_Owner = this->InputsToNetwork_Owner - 1;
          uVar6 = this->InputsToNetwork_Owner;
          fVar26 = ((float)uVar6 - this->DynamicInputScalingAverageInputs) *
                   PhysicsReplicationCVars::ResimulationCVars::
                   DynamicInputScalingDecreaseAverageMultiplier +
                   this->DynamicInputScalingAverageInputs;
          this->DynamicInputScalingAverageInputs = fVar26;
          uVar21 = (uint)(ushort)PhysicsReplicationCVars::ResimulationCVars::
                                 DynamicInputScalingMinInputs;
          uVar16 = (int)ROUND(fVar26 + fVar26 + __real_3f000000) >> 1;
          if ((ushort)PhysicsReplicationCVars::ResimulationCVars::DynamicInputScalingMinInputs <
              (ushort)uVar16) {
            uVar21 = uVar16 & 0xffff;
          }
          uVar13 = (ushort)uVar21;
          if (uVar21 < uVar6) {
            uVar13 = uVar6;
          }
          this->InputsToNetwork_Owner = uVar13;
          dVar5 = *(double *)(lVar8 + 0x280);
          goto LAB_14831fc0e;
        }
      }
      else if (PhysicsReplicationCVars::ResimulationCVars::DynamicInputScalingIncreaseTimeInterval <
               fVar26) {
        dVar25 = (double)PhysicsReplicationCVars::ResimulationCVars::
                         DynamicInputScalingMaxInputsPercent;
        dVar4 = *(double *)(lVar8 + 0x2b0);
        this->InputsToNetwork_Owner = this->InputsToNetwork_Owner + 1;
        uVar13 = -(short)((int)ROUND(dVar5 - (dVar25 + dVar25) / dVar4) >> 1);
        uVar6 = this->InputsToNetwork_Owner;
        if (uVar6 < uVar13) {
          uVar13 = uVar6;
        }
        fVar26 = ((float)uVar6 - this->DynamicInputScalingAverageInputs) *
                 PhysicsReplicationCVars::ResimulationCVars::
                 DynamicInputScalingIncreaseAverageMultiplier;
        this->InputsToNetwork_Owner = uVar13;
        this->DynamicInputScalingAverageInputs = fVar26 + this->DynamicInputScalingAverageInputs;
        dVar5 = *(double *)(lVar8 + 0x280);
        this->MissingInputCount = 0;
LAB_14831fc0e:
        this->TimeOfLastDynamicInputScaling = (float)dVar5;
      }
    }
  }
  else {
    this->InputsToNetwork_Owner = this->InputsToNetwork_OwnerDefault;
  }
  if ((TOptional<unsigned_short> *)&this->InputsToNetwork_Owner != &param_1->InputsToNetwork_Owner)
  {
    (param_1->InputsToNetwork_Owner).TypedValue = this->InputsToNetwork_Owner;
    (param_1->InputsToNetwork_Owner).bIsSet = true;
  }
LAB_14831fc34:
  if ((((param_1->InputData).Ptr != (FBaseRewindHistory *)0x0) &&
      ((this->InputHistory).Object != (FBaseRewindHistory *)0x0)) &&
     ((this->bIsLocallyControlled != false || (bVar22 != 0)))) {
    pFVar17 = GetComponentSettings(this);
    if (param_2 < 0) {
      param_2 = 0;
    }
    cVar20 = PhysicsReplicationCVars::ResimulationCVars::bEnableUnreliableFlow;
    if (pFVar17->bOverrideEnableUnreliableFlow != 0) {
      cVar20 = pFVar17->bEnableUnreliableFlow;
    }
    if (cVar20 != '\0') {
      pFVar18 = (param_1->InputData).Ptr;
      iVar23 = (param_2 - (uint)(&this->InputsToNetwork_Owner)[bVar22]) + -1;
      if (iVar23 < 0) {
        iVar23 = 0;
      }
      (**(code **)((longlong)*pFVar18 + 0x108))(pFVar18,(&this->InputsToNetwork_Owner)[bVar22],1);
      pFVar18 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(&this->InputHistory);
      cVar20 = PhysicsReplicationCVars::ResimulationCVars::bEnableReliableFlow;
      if (pFVar17->bOverrideEnableReliableFlow != 0) {
        cVar20 = pFVar17->bEnableReliableFlow;
      }
      in_stack_ffffffffffffff98 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff98 >> 8),1);
      (**(code **)((longlong)*pFVar18 + 0x88))
                (pFVar18,(param_1->InputData).Ptr,iVar23,param_2,in_stack_ffffffffffffff98,
                 cVar20 == '\0');
    }
    this_00 = &this->InputHistory;
    cVar20 = PhysicsReplicationCVars::ResimulationCVars::bEnableReliableFlow;
    if (pFVar17->bOverrideEnableReliableFlow != 0) {
      cVar20 = pFVar17->bEnableReliableFlow;
    }
    if (cVar20 != '\0') {
      pFVar18 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(this_00);
      iVar14 = (**(code **)((longlong)*pFVar18 + 0xf8))(pFVar18);
      iVar15 = this->LastInputSendFrame + 1;
      iVar23 = param_2 - iVar14;
      if (param_2 - iVar14 < iVar15) {
        iVar23 = iVar15;
      }
      pFVar18 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(this_00);
      pFVar27 = (FScriptContainerElement *)
                CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff98 >> 8),1);
      iVar14 = (**(code **)((longlong)*pFVar18 + 0x30))(pFVar18,iVar23,param_2,0,pFVar27);
      if (0 < iVar14) {
        pTVar1 = &param_1->InputDataImportant;
        pFVar18 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(this_00);
        pFVar19 = (FScriptContainerElement *)
                  (**(code **)((longlong)*pFVar18 + 8))(pFVar18,&local_res20);
        pFVar9 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar9 <= pFVar19) &&
            (pFVar19 < pFVar9 + (longlong)(param_1->InputDataImportant).ArrayMax * 8)) &&
           (pFVar27 = pFVar19,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar16 = (param_1->InputDataImportant).ArrayNum;
        piVar2 = &(param_1->InputDataImportant).ArrayNum;
        piVar3 = &(param_1->InputDataImportant).ArrayMax;
        if (uVar16 == *piVar3) {
          uVar16 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar3);
        }
        pFVar9 = (pTVar1->AllocatorInstance).Data;
        *piVar2 = uVar16 + 1;
        pFVar24 = (FScriptContainerElement *)(longlong)(int)uVar16;
        *(undefined8 *)(pFVar9 + (longlong)pFVar24 * 8) = *(undefined8 *)pFVar19;
        *(undefined8 *)pFVar19 = 0;
        if (local_res20 != (undefined8 *)0x0) {
          (**(code **)*local_res20)(local_res20,1);
        }
        uVar21 = 0;
        if ((int)uVar16 < *piVar2) {
          uVar21 = ~uVar16 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (pFVar27 = pFVar24,
           bVar12 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        plVar10 = *(longlong **)((pTVar1->AllocatorInstance).Data + (longlong)pFVar24 * 8);
        (**(code **)(*plVar10 + 0x108))(plVar10,iVar14,1);
        pFVar18 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(&this->InputHistory);
        pcVar11 = *(code **)((longlong)*pFVar18 + 0x88);
        uVar21 = 0;
        if ((int)uVar16 < *piVar2) {
          uVar21 = ~uVar16 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), pFVar27 = pFVar24, bVar12)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (*pcVar11)(pFVar18,*(undefined8 *)
                            ((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar16 * 8),iVar23,
                   param_2,(ulonglong)pFVar27 & 0xffffffffffffff00,1);
      }
    }
    pFVar18 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(&this->InputHistory);
    iVar23 = (**(code **)((longlong)*pFVar18 + 0xe8))(pFVar18);
    this->LastInputSendFrame = iVar23;
  }
  return;
}

// SendStateData_Internal @ 14831ffb0

void __thiscall
FAsyncNetworkPhysicsComponent::SendStateData_Internal
          (FAsyncNetworkPhysicsComponent *this,FAsyncNetworkPhysicsComponentOutput *param_1,
          int param_2)

{
  TArray<TUniquePtr<Chaos::FBaseRewindHistory,TDefaultDelete<Chaos::FBaseRewindHistory>_>,TSizedDefaultAllocator<32>_>
  *pTVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  longlong *plVar5;
  code *pcVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  FNetworkPhysicsSettingsNetworkPhysicsComponent *pFVar13;
  FBaseRewindHistory *pFVar14;
  FScriptContainerElement *pFVar15;
  int iVar16;
  FScriptContainerElement *pFVar17;
  undefined8 in_stack_ffffffffffffff88;
  FScriptContainerElement *pFVar18;
  undefined8 *local_40;
  
  if ((((this->NetMode == NM_DedicatedServer) || (this->NetMode == NM_ListenServer)) &&
      ((this->StateHistory).Object != (FBaseRewindHistory *)0x0)) &&
     ((param_1->StateData).Ptr != (FBaseRewindHistory *)0x0)) {
    pFVar13 = GetComponentSettings(this);
    if (param_2 < 0) {
      param_2 = 0;
    }
    cVar7 = PhysicsReplicationCVars::ResimulationCVars::bEnableUnreliableFlow;
    if (pFVar13->bOverrideEnableUnreliableFlow != 0) {
      cVar7 = pFVar13->bEnableUnreliableFlow;
    }
    if (cVar7 != '\0') {
      iVar16 = (param_2 - (uint)this->StatesToNetwork) + -1;
      if (iVar16 < 0) {
        iVar16 = 0;
      }
      pFVar14 = (param_1->StateData).Ptr;
      (**(code **)((longlong)*pFVar14 + 0x108))(pFVar14,this->StatesToNetwork,1);
      pFVar14 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(&this->StateHistory);
      cVar7 = PhysicsReplicationCVars::ResimulationCVars::bEnableReliableFlow;
      if (pFVar13->bOverrideEnableReliableFlow != 0) {
        cVar7 = pFVar13->bEnableReliableFlow;
      }
      in_stack_ffffffffffffff88 = CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff88 >> 8),1);
      (**(code **)((longlong)*pFVar14 + 0x88))
                (pFVar14,(param_1->StateData).Ptr,iVar16,param_2,in_stack_ffffffffffffff88,
                 cVar7 == '\0');
    }
    cVar7 = PhysicsReplicationCVars::ResimulationCVars::bEnableReliableFlow;
    if (pFVar13->bOverrideEnableReliableFlow != 0) {
      cVar7 = pFVar13->bEnableReliableFlow;
    }
    if (cVar7 != '\0') {
      pFVar14 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(&this->StateHistory);
      iVar9 = (**(code **)((longlong)*pFVar14 + 0xf8))(pFVar14);
      iVar10 = this->LastStateSendFrame + 1;
      iVar16 = param_2 - iVar9;
      if (param_2 - iVar9 < iVar10) {
        iVar16 = iVar10;
      }
      pFVar14 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(&this->StateHistory);
      pFVar18 = (FScriptContainerElement *)
                CONCAT71((int7)((ulonglong)in_stack_ffffffffffffff88 >> 8),1);
      iVar9 = (**(code **)((longlong)*pFVar14 + 0x30))(pFVar14,iVar16,param_2,0,pFVar18);
      if (0 < iVar9) {
        pTVar1 = &param_1->StateDataImportant;
        pFVar14 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(&this->StateHistory);
        pFVar15 = (FScriptContainerElement *)
                  (**(code **)((longlong)*pFVar14 + 8))(pFVar14,&local_40);
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar4 <= pFVar15) &&
            (pFVar15 < pFVar4 + (longlong)(param_1->StateDataImportant).ArrayMax * 8)) &&
           (pFVar18 = pFVar15,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar11 = (param_1->StateDataImportant).ArrayNum;
        piVar2 = &(param_1->StateDataImportant).ArrayNum;
        piVar3 = &(param_1->StateDataImportant).ArrayMax;
        if (uVar11 == *piVar3) {
          uVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&pTVar1->AllocatorInstance,piVar3);
        }
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        *piVar2 = uVar11 + 1;
        pFVar17 = (FScriptContainerElement *)(longlong)(int)uVar11;
        *(undefined8 *)(pFVar4 + (longlong)pFVar17 * 8) = *(undefined8 *)pFVar15;
        *(undefined8 *)pFVar15 = 0;
        if (local_40 != (undefined8 *)0x0) {
          (**(code **)*local_40)(local_40,1);
        }
        uVar12 = 0;
        if ((int)uVar11 < *piVar2) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (pFVar18 = pFVar17,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        plVar5 = *(longlong **)((pTVar1->AllocatorInstance).Data + (longlong)pFVar17 * 8);
        (**(code **)(*plVar5 + 0x108))(plVar5,iVar9,1);
        pFVar14 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(&this->StateHistory);
        pcVar6 = *(code **)((longlong)*pFVar14 + 0x88);
        uVar12 = 0;
        if ((int)uVar11 < *piVar2) {
          uVar12 = ~uVar11 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (pFVar18 = pFVar17,
           bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (*pcVar6)(pFVar14,*(undefined8 *)((pTVar1->AllocatorInstance).Data + (longlong)pFVar17 * 8),
                  iVar16,param_2,(ulonglong)pFVar18 & 0xffffffffffffff00,1);
      }
    }
    pFVar14 = TSharedPtr<Chaos::FBaseRewindHistory,1>::operator->(&this->StateHistory);
    iVar16 = (**(code **)((longlong)*pFVar14 + 0xe8))(pFVar14);
    this->LastStateSendFrame = iVar16;
  }
  return;
}

// SetupRewindData @ 148323660

int __thiscall FAsyncNetworkPhysicsComponent::SetupRewindData(FAsyncNetworkPhysicsComponent *this)

{
  FPBDRigidsSolver *this_00;
  char cVar1;
  FChaosSolversModule *pFVar2;
  IChaosSettingsProvider *pIVar3;
  int iVar4;
  float fVar5;
  
  this_00 = (FPBDRigidsSolver *)this->_padding_;
  iVar4 = 0;
  if (this_00 != (FPBDRigidsSolver *)0x0) {
    pFVar2 = FChaosSolversModule::GetModule();
    pIVar3 = FChaosSolversModule::GetSettingsProvider(pFVar2);
    fVar5 = (float)(**(code **)((longlong)*pIVar3 + 0x60))(pIVar3);
    iVar4 = -((int)ROUND(__real_bfe0000000000000 -
                         ((double)(fVar5 * __real_3a83126f) + (double)(fVar5 * __real_3a83126f)) /
                         (double)this_00->_padding_) >> 1);
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    if ((this->NetMode != NM_DedicatedServer) && (this->NetMode != NM_ListenServer)) {
      if (this->PhysicsReplicationMode == Resimulation) {
        pFVar2 = FChaosSolversModule::GetModule();
        pIVar3 = FChaosSolversModule::GetSettingsProvider(pFVar2);
        cVar1 = (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
        if ((cVar1 != '\0') && (this_00->_padding_ == 0)) {
          Chaos::FPBDRigidsSolver::EnableRewindCapture(this_00);
        }
      }
      if (this_00->_padding_ != 0) {
        iVar4 = *(int *)(this_00->_padding_ + 0x10);
      }
    }
  }
  return iVar4;
}

// TriggerResimulation @ 148325290

void __thiscall
FAsyncNetworkPhysicsComponent::TriggerResimulation(FAsyncNetworkPhysicsComponent *this,int param_1)

{
  FRewindData *this_00;
  TGeometryParticleHandleImp<double,3,1> *pTVar1;
  FReadPhysicsObjectInterface<1> local_res10 [8];
  
  if (((param_1 != -1) && (this->_padding_ != 0)) &&
     (this_00 = *(FRewindData **)(this->_padding_ + 0x238), this_00 != (FRewindData *)0x0)) {
    local_res10[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
    pTVar1 = (TGeometryParticleHandleImp<double,3,1> *)
             Chaos::FReadPhysicsObjectInterface<1>::GetRigidParticle
                       (local_res10,this->PhysicsObject);
    Chaos::FRewindData::RequestResimulation(this_00,param_1,pTVar1);
  }
  return;
}

// UnregisterDataHistoryFromRewindData @ 148326030

void __thiscall
FAsyncNetworkPhysicsComponent::UnregisterDataHistoryFromRewindData
          (FAsyncNetworkPhysicsComponent *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  longlong lVar3;
  TGeometryParticleHandleImp<double,3,1> *pTVar4;
  uint uVar5;
  FReadPhysicsObjectInterface<1> local_res8 [8];
  TGeometryParticleHandleImp<double,3,1> *local_res10;
  TWeakPtr<Chaos::FBaseRewindHistory,1> local_28;
  
  if ((this->_padding_ != 0) && (lVar3 = *(longlong *)(this->_padding_ + 0x238), lVar3 != 0)) {
    local_res8[0] = Chaos::FPhysicsObjectInternalInterface::GetRead();
    pTVar4 = Chaos::FReadPhysicsObjectInterface<1>::GetParticle(local_res8,this->PhysicsObject);
    local_28.Object = (this->InputHistory).Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->InputHistory).SharedReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    TArray<TWeakPtr<Chaos::FBaseRewindHistory,1>,TSizedDefaultAllocator<32>_>::Remove
              ((TArray<TWeakPtr<Chaos::FBaseRewindHistory,1>,TSizedDefaultAllocator<32>_> *)
               (lVar3 + 0x418),&local_28);
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_28.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_28.WeakReferenceCount.ReferenceController,1);
      }
    }
    if ((pTVar4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
       (local_res10 = pTVar4, *(int *)(lVar3 + 0x440) != *(int *)(lVar3 + 0x46c))) {
      uVar5 = ((uint)((ulonglong)pTVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar4 >> 4)) *
              -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*>
                ((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>,FDefaultSetAllocator>
                  *)(lVar3 + 0x438),uVar5 ^ uVar5 >> 0x10,&local_res10);
    }
    local_28.Object = (this->StateHistory).Object;
    local_28.WeakReferenceCount.ReferenceController =
         (this->StateHistory).SharedReferenceCount.ReferenceController;
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
           (atomic<int>)
           ((int)(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
      UNLOCK();
    }
    TArray<TWeakPtr<Chaos::FBaseRewindHistory,1>,TSizedDefaultAllocator<32>_>::Remove
              ((TArray<TWeakPtr<Chaos::FBaseRewindHistory,1>,TSizedDefaultAllocator<32>_> *)
               (lVar3 + 0x428),&local_28);
    if (local_28.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      paVar1 = &(local_28.WeakReferenceCount.ReferenceController)->WeakReferenceCount;
      aVar2 = *paVar1;
      *paVar1 = (atomic<int>)((int)*paVar1 + -1);
      UNLOCK();
      if (aVar2 == (atomic<int>)0x1) {
        (**(code **)((local_28.WeakReferenceCount.ReferenceController)->_padding_ + 8))
                  (local_28.WeakReferenceCount.ReferenceController,1);
      }
    }
    if ((pTVar4 != (TGeometryParticleHandleImp<double,3,1> *)0x0) &&
       (*(int *)(lVar3 + 0x490) != *(int *)(lVar3 + 0x4bc))) {
      uVar5 = ((uint)((ulonglong)pTVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)pTVar4 >> 4)) *
              -0x7a143595;
      uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
      local_res10 = pTVar4;
      TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>,FDefaultSetAllocator>
      ::RemoveImpl<Chaos::TGeometryParticleHandleImp<double,3,1>_const_*>
                ((TSet<TTuple<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>_>,TDefaultMapHashableKeyFuncs<Chaos::TGeometryParticleHandleImp<double,3,1>_*,TWeakPtr<Chaos::FBaseRewindHistory,1>,0>,FDefaultSetAllocator>
                  *)(lVar3 + 0x488),uVar5 >> 0x10 ^ uVar5,&local_res10);
    }
  }
  return;
}

// UpdateDynamicInputScaling @ 148327f10

void __thiscall
FAsyncNetworkPhysicsComponent::UpdateDynamicInputScaling(FAsyncNetworkPhysicsComponent *this)

{
  double dVar1;
  double dVar2;
  ushort uVar3;
  longlong lVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  double dVar8;
  float fVar9;
  
  dVar2 = __real_bfe0000000000000;
  if (!PhysicsReplicationCVars::ResimulationCVars::bDynamicInputScalingEnabled) {
    this->InputsToNetwork_Owner = this->InputsToNetwork_OwnerDefault;
    return;
  }
  if (((this->NetMode == NM_DedicatedServer) || (this->NetMode == NM_ListenServer)) &&
     (lVar4 = this->_padding_, lVar4 != 0)) {
    fVar9 = (float)(*(double *)(lVar4 + 0x280) - (double)this->TimeOfLastDynamicInputScaling);
    if (this->MissingInputCount < 1) {
      if (PhysicsReplicationCVars::ResimulationCVars::DynamicInputScalingDecreaseTimeInterval <
          fVar9) {
        this->InputsToNetwork_Owner = this->InputsToNetwork_Owner - 1;
        uVar3 = this->InputsToNetwork_Owner;
        fVar9 = ((float)uVar3 - this->DynamicInputScalingAverageInputs) *
                PhysicsReplicationCVars::ResimulationCVars::
                DynamicInputScalingDecreaseAverageMultiplier +
                this->DynamicInputScalingAverageInputs;
        this->DynamicInputScalingAverageInputs = fVar9;
        uVar7 = (uint)(ushort)PhysicsReplicationCVars::ResimulationCVars::
                              DynamicInputScalingMinInputs;
        uVar6 = (int)ROUND(fVar9 + fVar9 + __real_3f000000) >> 1;
        if ((ushort)PhysicsReplicationCVars::ResimulationCVars::DynamicInputScalingMinInputs <
            (ushort)uVar6) {
          uVar7 = uVar6 & 0xffff;
        }
        uVar5 = (ushort)uVar7;
        if (uVar7 < uVar3) {
          uVar5 = uVar3;
        }
        this->InputsToNetwork_Owner = uVar5;
        this->TimeOfLastDynamicInputScaling = (float)*(double *)(lVar4 + 0x280);
      }
    }
    else if (PhysicsReplicationCVars::ResimulationCVars::DynamicInputScalingIncreaseTimeInterval <
             fVar9) {
      dVar8 = (double)PhysicsReplicationCVars::ResimulationCVars::
                      DynamicInputScalingMaxInputsPercent;
      dVar1 = *(double *)(lVar4 + 0x2b0);
      this->InputsToNetwork_Owner = this->InputsToNetwork_Owner + 1;
      uVar5 = -(short)((int)ROUND(dVar2 - (dVar8 + dVar8) / dVar1) >> 1);
      uVar3 = this->InputsToNetwork_Owner;
      if (uVar3 < uVar5) {
        uVar5 = uVar3;
      }
      fVar9 = ((float)uVar3 - this->DynamicInputScalingAverageInputs) *
              PhysicsReplicationCVars::ResimulationCVars::
              DynamicInputScalingIncreaseAverageMultiplier;
      this->InputsToNetwork_Owner = uVar5;
      this->DynamicInputScalingAverageInputs = fVar9 + this->DynamicInputScalingAverageInputs;
      dVar2 = *(double *)(lVar4 + 0x280);
      this->MissingInputCount = 0;
      this->TimeOfLastDynamicInputScaling = (float)dVar2;
      return;
    }
  }
  return;
}

