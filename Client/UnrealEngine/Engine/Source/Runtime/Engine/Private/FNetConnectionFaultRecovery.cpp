// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 6

// FNetConnectionFaultRecovery @ 147fa4eb0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNetConnectionFaultRecovery * __thiscall
UE::Net::FNetConnectionFaultRecovery::FNetConnectionFaultRecovery(FNetConnectionFaultRecovery *this)

{
  this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x28 = 0;
  *(undefined8 *)&this->field_0x50 = 0;
  *(undefined4 *)&this->field_0xc = 2;
  *(undefined4 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x5c = 8;
  *(undefined8 *)&this->field_0xa0 = 0;
  *(undefined4 *)&this->field_0xa8 = 0;
  *(undefined4 *)&this->field_0xac = 8;
  *(undefined8 *)&this->field_0xb0 = 0;
  *(undefined8 *)&this->field_0xb8 = 0;
  *(undefined8 *)&this->field_0xc0 = 0;
  *(undefined8 *)&this->field_0xe8 = 0;
  *(undefined ***)this = &___7FNetConnectionFaultRecovery_Net_UE__6B_;
  (this->DefaultFaultHandler)._padding_ = (longlong)&___7FDefaultFaultHandler_Net_UE__6B_;
  (this->ConfigContext).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigContext).Data.ArrayNum = 0;
  (this->ConfigContext).Data.ArrayMax = 0;
  this->Connection = (UNetConnection *)0x0;
  this->LastInTotalHandlerPackets = 0;
  this->LastInTotalHandlerPacketsPerSec = 0;
  this->InTotalHandlerPacketsPerSec = 0;
  this->LastPerSecPacketCheck = 0.0;
  (this->DefaultFaultHandler)._padding_ = 0;
  (this->DefaultFaultHandler).FaultRecovery = (FNetConnectionFaultRecoveryBase *)0x0;
  return this;
}

// DoesRequireTick @ 14802c190

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

bool __thiscall
UE::Net::FNetConnectionFaultRecovery::DoesRequireTick(FNetConnectionFaultRecovery *this)

{
  return *(longlong *)&this->field_0x10 != 0;
}

// InitDefaults @ 14803e2c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Net::FNetConnectionFaultRecovery::InitDefaults
          (FNetConnectionFaultRecovery *this,FString *param_1,UNetConnection *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  
  iVar1 = (param_1->Data).ArrayNum;
  iVar3 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar3 = 0;
  }
  ::FString::AssignRange
            (&this->ConfigContext,(wchar_t *)(param_1->Data).AllocatorInstance.Data,iVar3);
  this->Connection = param_2;
  if ((param_2 != (UNetConnection *)0x0) &&
     (this->LastInTotalHandlerPackets = param_2->InTotalHandlerPackets,
     (this->DefaultFaultHandler).FaultRecovery == (FNetConnectionFaultRecoveryBase *)0x0)) {
    (this->DefaultFaultHandler).FaultRecovery = (FNetConnectionFaultRecoveryBase *)this;
    FNetResultManager::AddResultHandlerPtr
              ((FNetResultManager *)&this->field_0x60,
               (FNetResultHandler *)&this->DefaultFaultHandler,Last);
    FNetConnectionFaultRecoveryBase::RegisterCounterCategory
              ((this->DefaultFaultHandler).FaultRecovery,NetworkCorruption,1);
  }
  pFVar2 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  return;
}

// InitEscalationManager @ 14803e590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Net::FNetConnectionFaultRecovery::InitEscalationManager(FNetConnectionFaultRecovery *this)

{
  undefined1 *this_00;
  undefined1 *this_01;
  ForElementType<UE::Net::FEscalationCounter> *pFVar1;
  longlong *plVar2;
  uint uVar3;
  FEscalationManager *pFVar4;
  FScriptContainerElement *pFVar5;
  UNetConnection *pUVar6;
  longlong lVar7;
  code *pcVar8;
  FEscalationCounter *pFVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  void *this_02;
  FString *pFVar14;
  undefined ***pppuVar15;
  ForElementType<UE::Net::FEscalationCounter> *pFVar16;
  ulonglong uVar17;
  TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
  *pTVar18;
  longlong lVar19;
  uint *puVar20;
  longlong lVar21;
  undefined1 auStackY_168 [32];
  undefined1 local_128 [4];
  uint local_124;
  uint local_120 [2];
  TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
  *local_118;
  FEscalationCounter *local_110;
  int iStack_108;
  undefined4 uStack_104;
  wchar_t *local_100;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  UClass *local_e8;
  UScriptStruct *local_e0;
  TArrayView<UE::Net::FEscalationCounter,int> local_d8;
  longlong local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FStateConfigParms local_b8;
  FString local_90;
  undefined1 local_80 [24];
  code *local_68 [2];
  undefined **local_58;
  FNetConnectionFaultRecovery *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  this_00 = &this->field_0x10;
  if (*(longlong *)&this->field_0x10 == 0) {
    this_02 = ::operator_new(0x960);
    local_118 = (TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
                 *)0x0;
    if (this_02 != (void *)0x0) {
      local_118 = TEscalationManager<enum_UE::Net::ENetFaultCounters,FNetFaultState,enum_UE::Net::ENetFaultCounterCategory>
                  ::
                  TEscalationManager<enum_UE::Net::ENetFaultCounters,FNetFaultState,enum_UE::Net::ENetFaultCounterCategory>
                            (this_02);
    }
    pTVar18 = local_118;
    if ((TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
         **)this_00 != &local_118) {
      pTVar18 = *(TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
                  **)this_00;
      *(TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
        **)this_00 = local_118;
      local_118 = (TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
                   *)0x0;
      TDefaultDelete<UE::Net::TEscalationManager<enum_UE::Net::ENetFaultCounters,FNetFaultState,enum_UE::Net::ENetFaultCounterCategory>_>
      ::operator()(this_00,pTVar18);
      pTVar18 = (TEscalationManager<UE::Net::ENetFaultCounters,FNetFaultState,UE::Net::ENetFaultCounterCategory>
                 *)0x0;
    }
    TDefaultDelete<UE::Net::TEscalationManager<enum_UE::Net::ENetFaultCounters,FNetFaultState,enum_UE::Net::ENetFaultCounterCategory>_>
    ::operator()(&local_118,pTVar18);
    local_58 = &Core::Private::Function::
                TFunction_OwnedObject<`UE::Net::FNetConnectionFaultRecovery::InitEscalationManager'::`5'::<lambda_1>,1,0>
                ::_vftable_;
    local_40 = (undefined ***)0x0;
    local_68[0] = Core::Private::Function::
                  TFunctionRefCaller<`UE::Net::FNetConnectionFaultRecovery::InitEscalationManager'::__l5::<lambda_1>,void,FEscalationState_const_&,FEscalationState_const_&,enum_UE::Net::ESeverityUpdate>
                  ::Call;
    local_50 = this;
    FEscalationManager::SetNotifySeverityUpdate
              (*(FEscalationManager **)this_00,
               (TUniqueFunction<void___cdecl(FEscalationState_const_&,FEscalationState_const_&,UE::Net::ESeverityUpdate)>
                *)local_68);
    if (local_68[0] != (code *)0x0) {
      pppuVar15 = &local_58;
      if (local_40 != (undefined ***)0x0) {
        pppuVar15 = local_40;
      }
      (*(code *)(*pppuVar15)[2])();
    }
    pFVar4 = *(FEscalationManager **)this_00;
    pFVar14 = ::FString::FString(&local_90,&this->ConfigContext);
    local_100 = FNetFaultState::GetConfigSection();
    iVar12 = (pFVar14->Data).ArrayNum;
    pFVar5 = (pFVar14->Data).AllocatorInstance.Data;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = CONCAT44(local_f0._4_4_,iVar12);
    if (iVar12 == 0) {
      local_f0 = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar12,0,&local_f8,iVar12,(int *)((longlong)&local_f0 + 4));
      memcpy(local_f8.Data,pFVar5,(longlong)iVar12 * 2);
    }
    local_e8 = FNetFaultState::GetBaseConfigClass();
    local_e0 = FNetFaultState::StaticStruct();
    local_b8.ConfigSection = local_100;
    local_b8.ConfigContext.Data.AllocatorInstance.Data = local_f8.Data;
    local_b8.ConfigContext.Data.ArrayNum = (int)local_f0;
    local_b8.ConfigContext.Data.ArrayMax = local_f0._4_4_;
    local_b8.ConfigClass = local_e8;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    local_b8.StateStruct = (UStruct *)local_e0;
    FEscalationManager::InitConfig(pFVar4,&local_b8);
    if (local_f8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f8.Data);
    }
    pFVar5 = (pFVar14->Data).AllocatorInstance.Data;
    if (pFVar5 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar5);
    }
    pUVar6 = this->Connection;
    if (pUVar6 != (UNetConnection *)0x0) {
      pFVar4 = *(FEscalationManager **)this_00;
      pFVar14 = (FString *)(**(code **)(pUVar6->_padding_ + 0x2d0))(pUVar6,local_80);
      FEscalationManager::SetManagerContext(pFVar4,pFVar14);
    }
    if (*(int *)&this->field_0xc != 2) {
      pFVar4 = *(FEscalationManager **)this_00;
      iVar12 = *(int *)&this->field_0xc + -2;
      this_01 = &pFVar4[1].NotifySeverityUpdate.field_0x20;
      local_124 = iVar12;
      TArray<UE::Net::FEscalationCounter,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::
      AddDefaulted((TArray<UE::Net::FEscalationCounter,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
                    *)this_01,iVar12);
      TArray<UE::Net::FEscalationCounter,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::
      AddDefaulted((TArray<UE::Net::FEscalationCounter,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>
                    *)&pFVar4[1].LastPerSecQuotaBegin,iVar12);
      pFVar1 = (ForElementType<UE::Net::FEscalationCounter> *)
               (pFVar4[1].CountersPerPeriodHistory + 4);
      iVar11 = Core::Private::
               ReallocGrow<2,TSizedInlineAllocator<96,32,TSizedDefaultAllocator<32>_>::ForElementType<UE::Net::FEscalationCounter>_>
                         (0x10,8,iVar12 * 0x10,pFVar1,
                          &pFVar4[4].CountersPerPeriodHistory[7].ArrayNum,
                          (int *)&pFVar4[4].CountersPerPeriodHistory[7].field_0xc);
      pFVar16 = (ForElementType<UE::Net::FEscalationCounter> *)
                pFVar4[4].CountersPerPeriodHistory[7].DataPtr;
      if (pFVar16 == (ForElementType<UE::Net::FEscalationCounter> *)0x0) {
        pFVar16 = pFVar1;
      }
      DefaultConstructItems<UE::Net::FEscalationCounter,int>
                (pFVar16->InlineData + (longlong)iVar11 * 0x10,iVar12 * 0x10);
      local_110 = pFVar4[1].SecondCounters.DataPtr;
      iStack_108 = pFVar4[1].SecondCounters.ArrayNum;
      if (local_110 == (FEscalationCounter *)0x0) {
        local_110 = (FEscalationCounter *)this_01;
      }
      if ((iStack_108 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (pFVar4->FrameCounters).DataPtr = local_110;
      *(ulonglong *)&(pFVar4->FrameCounters).ArrayNum = CONCAT44(uStack_104,iStack_108);
      local_110 = pFVar4[1].CountersPerPeriodHistory[3].DataPtr;
      iVar12 = pFVar4[1].CountersPerPeriodHistory[3].ArrayNum;
      if (local_110 == (FEscalationCounter *)0x0) {
        local_110 = (FEscalationCounter *)&pFVar4[1].LastPerSecQuotaBegin;
      }
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      (pFVar4->SecondCounters).DataPtr = local_110;
      *(ulonglong *)&(pFVar4->SecondCounters).ArrayNum = CONCAT44(uStack_104,iVar12);
      local_d8.DataPtr = pFVar4[4].CountersPerPeriodHistory[7].DataPtr;
      iVar11 = pFVar4[4].CountersPerPeriodHistory[7].ArrayNum;
      if ((ForElementType<UE::Net::FEscalationCounter> *)local_d8.DataPtr ==
          (ForElementType<UE::Net::FEscalationCounter> *)0x0) {
        local_d8.DataPtr = (FEscalationCounter *)pFVar1;
      }
      iStack_108 = iVar12;
      if ((iVar11 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_d8.ArrayNum = iVar11;
      iVar12 = FEscalationManager::AddNewCounter_Internal(pFVar4,local_124,&local_d8);
      if ((iVar12 != 2) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("FirstAddIdx == MaxStaticCounter",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\NetConnectionFaultRecovery.cpp"
                              ,0x6d,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    local_124 = *(uint *)&this->field_0x20;
    uVar17 = (ulonglong)(int)local_124;
    puVar20 = *(uint **)&this->field_0x18;
    local_110 = (FEscalationCounter *)(puVar20 + uVar17 * 2);
    while( true ) {
      pFVar9 = local_110;
      if (*(int *)&this->field_0x20 != (int)uVar17) {
        local_128[0] = 0;
        `TCheckedPointerIterator<UE::Net::FNetConnectionFaultRecoveryBase::FPendingCategoryRegister,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_128);
      }
      if ((FEscalationCounter *)puVar20 == pFVar9) break;
      uVar3 = *puVar20;
      lVar21 = (longlong)(int)uVar3;
      local_120[0] = puVar20[1];
      lVar7 = *(longlong *)this_00;
      if ((lVar21 != 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CategoryIndex < (sizeof(UEArrayCountHelper(RegisteredCountersAlloc)) - 1)"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Connection\\EscalationStates.h"
                              ,0x2d4,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (((int)local_120[0] < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("CounterIndex >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Public\\Net\\Core\\Connection\\EscalationStates.h"
                              ,0x2d5,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar19 = lVar21 * 0x28 + lVar7;
      TArray<int,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_>::
      AddUniqueImpl<int_const_&>
                ((TArray<int,TSizedInlineAllocator<6,32,TSizedDefaultAllocator<32>_>_> *)
                 (lVar19 + 0x920),(int *)local_120);
      iVar12 = *(int *)(lVar19 + 0x940);
      local_c8 = lVar19 + 0x920;
      if (*(longlong *)(lVar19 + 0x938) != 0) {
        local_c8 = *(longlong *)(lVar19 + 0x938);
      }
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar13 = 0;
      if ((int)uVar3 < *(int *)(lVar7 + 0x1e8)) {
        uVar13 = ~uVar3 >> 0x1f;
      }
      iStack_c0 = iVar12;
      if ((uVar13 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar17 = (ulonglong)local_124;
      puVar20 = puVar20 + 2;
      plVar2 = (longlong *)(*(longlong *)(lVar7 + 0x1e0) + lVar21 * 0x10);
      *plVar2 = local_c8;
      plVar2[1] = CONCAT44(uStack_bc,iStack_c0);
    }
    *(undefined4 *)&this->field_0x20 = 0;
    if (*(int *)&this->field_0x24 != 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,4,0,(ForAnyElementType *)&this->field_0x18,0,(int *)&this->field_0x24);
    }
  }
  return;
}

// NotifySeverityUpdate @ 1480466d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Net::FNetConnectionFaultRecovery::NotifySeverityUpdate
          (FNetConnectionFaultRecovery *this,FEscalationState *param_1,FEscalationState *param_2,
          ESeverityUpdate param_3)

{
  UNetConnection *pUVar1;
  longlong lVar2;
  FNetResult *pFVar3;
  void *pvVar4;
  uint uVar5;
  FString *pFVar6;
  int *piVar7;
  FEscalationCounter *pFVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  wchar_t *pwVar12;
  TPimplPtr<UE::Net::FNetResult,1> this_00;
  undefined8 *puVar13;
  FNetResult *this_01;
  FString local_58;
  FNetResult local_48;
  
  if (param_3 < Deescalate) {
    if ((param_1->bDormant != false) && (0 < this->InTotalHandlerPacketsPerSec)) {
      pFVar8 = FEscalationManager::GetFrameCounter(*(FEscalationManager **)&this->field_0x10,0);
      pFVar8->Counter = pFVar8->Counter + this->InTotalHandlerPacketsPerSec;
    }
    if (((char)param_2[1]._padding_ != '\0') && (this->Connection != (UNetConnection *)0x0)) {
      TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>(&local_48,FaultDisconnect);
      puVar9 = ::operator_new(0x40);
      puVar13 = (undefined8 *)0x0;
      puVar10 = puVar13;
      if (puVar9 != (undefined8 *)0x0) {
        *puVar9 = Core::Private::PimplPtr::DeleterFunc<UE::Net::FNetResult>;
        puVar9[1] = Core::Private::PimplPtr::CopyFunc<UE::Net::FNetResult>;
        puVar9[2] = local_48.Result;
        *(FWeakObjectPtr *)(puVar9 + 3) = local_48.ResultEnumObj.WeakPtr;
        puVar9[4] = local_48.RawResultEnumObj;
        puVar9[5] = local_48.ErrorContext.Data.AllocatorInstance.Data;
        local_48.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        *(int *)(puVar9 + 6) = local_48.ErrorContext.Data.ArrayNum;
        *(int *)((longlong)puVar9 + 0x34) = local_48.ErrorContext.Data.ArrayMax;
        local_48.ErrorContext.Data.ArrayNum = 0;
        local_48.ErrorContext.Data.ArrayMax = 0;
        *(TPimplPtr<UE::Net::FNetResult,1> *)(puVar9 + 7) = local_48.NextResult;
        local_48.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
        puVar10 = puVar9;
      }
      this_01 = (FNetResult *)(puVar10 + 2);
      if (local_48.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_48.NextResult + -0x10))((longlong)local_48.NextResult + -0x10);
      }
      if (local_48.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ErrorContext.Data.AllocatorInstance.Data);
      }
      TNetResult<enum_ENetCloseResult>::TNetResult<enum_ENetCloseResult>(&local_48,NotRecoverable);
      if (this_01 == (FNetResult *)0x0) {
        puVar9 = ::operator_new(0x40);
        puVar10 = puVar13;
        if (puVar9 != (undefined8 *)0x0) {
          *puVar9 = Core::Private::PimplPtr::DeleterFunc<UE::Net::FNetResult>;
          puVar9[1] = Core::Private::PimplPtr::CopyFunc<UE::Net::FNetResult>;
          puVar9[2] = local_48.Result;
          *(FWeakObjectPtr *)(puVar9 + 3) = local_48.ResultEnumObj.WeakPtr;
          puVar9[4] = local_48.RawResultEnumObj;
          puVar9[5] = local_48.ErrorContext.Data.AllocatorInstance.Data;
          local_48.ErrorContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(puVar9 + 6) = local_48.ErrorContext.Data.ArrayNum;
          *(int *)((longlong)puVar9 + 0x34) = local_48.ErrorContext.Data.ArrayMax;
          local_48.ErrorContext.Data.ArrayNum = 0;
          local_48.ErrorContext.Data.ArrayMax = 0;
          *(TPimplPtr<UE::Net::FNetResult,1> *)(puVar9 + 7) = local_48.NextResult;
          local_48.NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
          puVar10 = puVar9;
        }
        this_01 = (FNetResult *)(puVar10 + 2);
      }
      else {
        FNetResult::AddChainResult(this_01,&local_48);
      }
      if (local_48.NextResult != (TPimplPtr<UE::Net::FNetResult,1>)0x0) {
        (**(code **)((longlong)local_48.NextResult + -0x10))((longlong)local_48.NextResult + -0x10);
      }
      if (local_48.ErrorContext.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.ErrorContext.Data.AllocatorInstance.Data);
      }
      pFVar3 = *(FNetResult **)&this->field_0x28;
      if (this_01 == (FNetResult *)0x0) {
        puVar10 = ::operator_new(0x40);
        if (puVar10 != (undefined8 *)0x0) {
          *puVar10 = Core::Private::PimplPtr::DeleterFunc<UE::Net::FNetResult>;
          puVar10[1] = Core::Private::PimplPtr::CopyFunc<UE::Net::FNetResult>;
          puVar10[2] = pFVar3->Result;
          *(FWeakObjectPtr *)(puVar10 + 3) = (pFVar3->ResultEnumObj).WeakPtr;
          pvVar4 = pFVar3->RawResultEnumObj;
          puVar10[5] = 0;
          puVar10[4] = pvVar4;
          puVar10[5] = (pFVar3->ErrorContext).Data.AllocatorInstance.Data;
          (pFVar3->ErrorContext).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          *(int *)(puVar10 + 6) = (pFVar3->ErrorContext).Data.ArrayNum;
          *(int *)((longlong)puVar10 + 0x34) = (pFVar3->ErrorContext).Data.ArrayMax;
          (pFVar3->ErrorContext).Data.ArrayNum = 0;
          (pFVar3->ErrorContext).Data.ArrayMax = 0;
          *(TPimplPtr<UE::Net::FNetResult,1> *)(puVar10 + 7) = pFVar3->NextResult;
          pFVar3->NextResult = (TPimplPtr<UE::Net::FNetResult,1>)0x0;
          puVar13 = puVar10;
        }
        this_01 = (FNetResult *)(puVar13 + 2);
      }
      else {
        FNetResult::AddChainResult(this_01,pFVar3);
      }
      UNetConnection::Close(this->Connection,this_01);
      *(undefined4 *)&this->field_0x58 = 0;
      if (*(int *)&this->field_0x5c != 0) {
        Core::Private::
        ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                  (4,4,0,(ForElementType<unsigned_int> *)&this->field_0x30,0,
                   (int *)&this->field_0x5c);
      }
      this->field_0x8 = 1;
      if (this_01 != (FNetResult *)0x0) {
        (**(code **)&this_01[-1].ErrorContext.Data.ArrayNum)
                  (&this_01[-1].ErrorContext.Data.ArrayNum);
      }
    }
  }
  else if ((param_2->bDormant != false) &&
          (this_00 = *(TPimplPtr<UE::Net::FNetResult,1> *)&this->field_0x28,
          this_00 != (TPimplPtr<UE::Net::FNetResult,1>)0x0)) {
    pUVar1 = this->Connection;
    if (pUVar1 != (UNetConnection *)0x0) {
      do {
        pFVar6 = FNetResult::DynamicToString((FNetResult *)this_00,&local_58,ResultEnumOnly);
        iVar11 = (pFVar6->Data).ArrayNum;
        if (iVar11 == 0) {
          pwVar12 = L"";
          iVar11 = 0;
        }
        else {
          pwVar12 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          iVar11 = iVar11 + -1;
        }
        uVar5 = FCrc::Strihash_DEPRECATED<wchar_t>(iVar11,pwVar12);
        piVar7 = TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                 ::FindOrAddImpl<FString>
                           ((TMapBase<FString,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,int,0>_>
                             *)&(pUVar1->AnalyticsVars).RecoveredFaults,uVar5,pFVar6);
        if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.Data.AllocatorInstance.Data);
        }
        *piVar7 = *piVar7 + 1;
      } while ((this_00 != (TPimplPtr<UE::Net::FNetResult,1>)0x0) &&
              (this_00 = *(TPimplPtr<UE::Net::FNetResult,1> *)((longlong)this_00 + 0x28),
              this_00 != (TPimplPtr<UE::Net::FNetResult,1>)0x0));
    }
    lVar2 = *(longlong *)&this->field_0x28;
    if (lVar2 != 0) {
      *(undefined8 *)&this->field_0x28 = 0;
      (**(code **)(lVar2 + -0x10))();
    }
    *(undefined4 *)&this->field_0x58 = 0;
    if (*(int *)&this->field_0x5c != 0) {
      Core::Private::
      ReallocTo<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,0,(ForElementType<unsigned_int> *)&this->field_0x30,0,(int *)&this->field_0x5c)
      ;
    }
  }
  return;
}

// TickRealtime @ 148067180

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UE::Net::FNetConnectionFaultRecovery::TickRealtime(FNetConnectionFaultRecovery *this,double param_1)

{
  int iVar1;
  bool bVar2;
  FEscalationCounter *pFVar3;
  
  if (*(FEscalationManager **)&this->field_0x10 != (FEscalationManager *)0x0) {
    if (this->Connection != (UNetConnection *)0x0) {
      bVar2 = FEscalationManager::IsDormant(*(FEscalationManager **)&this->field_0x10);
      if (!bVar2) {
        pFVar3 = FEscalationManager::GetFrameCounter(*(FEscalationManager **)&this->field_0x10,0);
        iVar1 = this->Connection->InTotalHandlerPackets;
        pFVar3->Counter = pFVar3->Counter + (iVar1 - this->LastInTotalHandlerPackets);
        this->LastInTotalHandlerPackets = iVar1;
      }
    }
    bVar2 = FEscalationManager::IsDormant(*(FEscalationManager **)&this->field_0x10);
    if (!bVar2) {
      FEscalationManager::TickRealtime(*(FEscalationManager **)&this->field_0x10,param_1);
    }
  }
  if ((this->Connection != (UNetConnection *)0x0) &&
     (__real_3ff0000000000000 < param_1 - this->LastPerSecPacketCheck)) {
    iVar1 = this->Connection->InTotalHandlerPackets;
    this->InTotalHandlerPacketsPerSec = iVar1 - this->LastInTotalHandlerPacketsPerSec;
    this->LastPerSecPacketCheck = param_1;
    this->LastInTotalHandlerPacketsPerSec = iVar1;
  }
  return;
}

