// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 28

// GetSequentialRPCScope @ 147a59040

FSequentialRPCScope * __thiscall FRPCDoSDetection::GetSequentialRPCScope(FRPCDoSDetection *this)

{
  code *pcVar1;
  bool bVar2;
  FSequentialRPCScope *pFVar3;
  
  if ((UE::Net::GRPCDoSScopeDebugging != 0) && ((this->SequentialRPCScopePrivate)._padding_ == '\0')
     ) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1192164650855168929>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                       ,0x45f,"GRPCDoSScopeDebugging == 0 || SequentialRPCScopePrivate.IsActive()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSequentialRPCScope *)(*pcVar1)();
      return pFVar3;
    }
    return &this->SequentialRPCScopePrivate;
  }
  return &this->SequentialRPCScopePrivate;
}

// GetTickScope @ 147a5a9b0

FTickScope * __thiscall FRPCDoSDetection::GetTickScope(FRPCDoSDetection *this)

{
  code *pcVar1;
  bool bVar2;
  FTickScope *pFVar3;
  
  if ((UE::Net::GRPCDoSScopeDebugging != 0) && ((char)(this->TickScopePrivate)._padding_ == '\0')) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1192164650855169060>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                       ,0x3dc,"GRPCDoSScopeDebugging == 0 || TickScopePrivate.IsActive()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FTickScope *)(*pcVar1)();
      return pFVar3;
    }
    return &this->TickScopePrivate;
  }
  return &this->TickScopePrivate;
}

// PreSequentialRPC @ 147a67180

void __thiscall FRPCDoSDetection::PreSequentialRPC(FRPCDoSDetection *this)

{
  code *pcVar1;
  bool bVar2;
  
  if (UE::Net::GRPCDoSScopeDebugging != 0) {
    if ((char)(this->TickScopePrivate)._padding_ == '\0') {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1192164650855169304>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                         ,0x2e8,"GRPCDoSScopeDebugging == 0 || TickScopePrivate.IsActive()");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    if (UE::Net::GRPCDoSScopeDebugging != 0) {
      if ((this->PacketScopePrivate)._padding_ == '\0') {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1192164650855169303>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                           ,0x2e9,"GRPCDoSScopeDebugging == 0 || PacketScopePrivate.IsActive()");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      if ((UE::Net::GRPCDoSScopeDebugging != 0) &&
         ((this->SequentialRPCScopePrivate)._padding_ == '\x01')) {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1192164650855169127>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                           ,0x399,"GRPCDoSScopeDebugging == 0 || bScopeActive != bInVal");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
    }
  }
  (this->SequentialRPCScopePrivate)._padding_ = '\x01';
  (this->SequentialRPCScopePrivate).bReceivedPacketRPCUnique = true;
  (this->SequentialRPCScopePrivate).ReceivedPacketRPCCount = 0;
  (this->SequentialRPCScopePrivate).LightweightRPCTracking.Count = '\0';
  (this->SequentialRPCScopePrivate).PostReceivedRPCName.ComparisonIndex = 0;
  (this->SequentialRPCScopePrivate).PostReceivedRPCName.Number = 0;
  (this->SequentialRPCScopePrivate).PostReceivedRPCTracking = (FRPCTrackingInfo *)0x0;
  (this->SequentialRPCScopePrivate).PostReceivedRPCCounter = (FRPCDoSCounters *)0x0;
  (this->SequentialRPCScopePrivate).PostReceivedRPCBlockCount = 0;
  (this->SequentialRPCScopePrivate).LastReceivedRPCTimeCache = 0.0;
  return;
}

// FRPCDoSDetection @ 147fa5110

FRPCDoSDetection * __thiscall FRPCDoSDetection::FRPCDoSDetection(FRPCDoSDetection *this)

{
  uint *puVar1;
  longlong lVar2;
  
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined2 *)((longlong)&this->_padding_ + 2) = 0xffff;
  *(undefined1 *)((longlong)&this->_padding_ + 4) = 0xff;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FRPCDoSDetection__6B_;
  *(undefined1 *)&(this->TickScopePrivate)._padding_ = 0;
  (this->TickScopePrivate).FrameCounter.RPCCounter = 0;
  (this->TickScopePrivate).FrameCounter.AccumRPCTime = 0.0;
  (this->PacketScopePrivate)._padding_ = '\0';
  (this->PacketScopePrivate).bPacketContainsRPC = false;
  (this->PacketScopePrivate).ReceivedPacketStartTime = 0.0;
  (this->SequentialRPCScopePrivate).ReceivedPacketRPCCount = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 2) = 0xffffffffffff0000;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0xffffffffffff01ff;
  *(undefined4 *)((longlong)&this->_padding_ + 6) = 0xffffffff;
  (this->SequentialRPCScopePrivate)._padding_ = '\0';
  (this->SequentialRPCScopePrivate).bReceivedPacketRPCUnique = true;
  memset(&(this->SequentialRPCScopePrivate).LightweightRPCTracking,0,0x1000);
  puVar1 = &(this->SequentialRPCScopePrivate).LightweightRPCTracking.RPC[0].Name.Number;
  lVar2 = 0x100;
  do {
    *(undefined8 *)(puVar1 + -3) = 0;
    ((FName *)(puVar1 + -1))->ComparisonIndex = 0;
    ((FName *)(puVar1 + -1))->Number = 0;
    puVar1 = puVar1 + 4;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  (this->SequentialRPCScopePrivate).LightweightRPCTracking.Count = '\0';
  (this->SequentialRPCScopePrivate).PostReceivedRPCName.ComparisonIndex = 0;
  (this->SequentialRPCScopePrivate).PostReceivedRPCName.Number = 0;
  (this->SequentialRPCScopePrivate).PostReceivedRPCTracking = (FRPCTrackingInfo *)0x0;
  (this->SequentialRPCScopePrivate).PostReceivedRPCCounter = (FRPCDoSCounters *)0x0;
  (this->SequentialRPCScopePrivate).PostReceivedRPCBlockCount = 0;
  (this->SequentialRPCScopePrivate).LastReceivedRPCTimeCache = 0.0;
  this->bRPCDoSDetection = false;
  this->bRPCDoSAnalytics = false;
  this->HitchTimeQuotaMS = 0;
  this->HitchSuspendDetectionTimeMS = 0;
  (this->RPCBlockAllowList).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RPCBlockAllowList).ArrayNum = 0;
  (this->RPCBlockAllowList).ArrayMax = 0;
  (this->ForcedRPCTracking).ComparisonIndex = 0;
  (this->ForcedRPCTracking).Number = 0;
  this->ForcedRPCTrackingChance = 1.0;
  this->ForcedRPCTrackingLength = 0.0;
  this->ForcedRPCTrackingEndTime = 0.0;
  *(undefined8 *)&this->AddressFunc = 0;
  *(undefined8 *)&(this->AddressFunc).field_0x28 = 0;
  (this->CachedAddress).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedAddress).Data.ArrayNum = 0;
  (this->CachedAddress).Data.ArrayMax = 0;
  *(undefined8 *)&this->PlayerUIDFunc = 0;
  *(undefined8 *)&(this->PlayerUIDFunc).field_0x28 = 0;
  (this->CachedPlayerUID).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedPlayerUID).Data.ArrayNum = 0;
  (this->CachedPlayerUID).Data.ArrayMax = 0;
  *(undefined8 *)&this->KickPlayerFunc = 0;
  *(undefined8 *)&(this->KickPlayerFunc).field_0x28 = 0;
  (this->DetectionSeverity).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DetectionSeverity).ArrayNum = 0;
  (this->DetectionSeverity).ArrayMax = 0;
  this->ActiveState = '\0';
  this->WorstActiveState = '\0';
  this->WorstAnalyticsState = '\0';
  this->LastMetEscalationConditions = 0.0;
  this->bHitchSuspendDetection = false;
  this->HitchSuspendDetectionStartTime = 0.0;
  (this->SecondCounter).RPCCounter = 0;
  (this->SecondCounter).AccumRPCTime = 0.0;
  this->LastPerSecQuotaBegin = 0.0;
  (this->CounterPerSecHistory).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CounterPerSecHistory).ArrayNum = 0;
  (this->CounterPerSecHistory).ArrayMax = 0;
  this->LastCounterPerSecHistoryIdx = 0;
  memset(this->CounterPerPeriodHistory,0,0x100);
  this->CounterPerPeriodHistory[0].AccumRPCTime = 0.0;
  this->CounterPerPeriodHistory[1].AccumRPCTime = 0.0;
  this->CounterPerPeriodHistory[2].AccumRPCTime = 0.0;
  this->CounterPerPeriodHistory[3].AccumRPCTime = 0.0;
  this->CounterPerPeriodHistory[4].AccumRPCTime = 0.0;
  this->CounterPerPeriodHistory[5].AccumRPCTime = 0.0;
  this->CounterPerPeriodHistory[6].AccumRPCTime = 0.0;
  this->CounterPerPeriodHistory[7].AccumRPCTime = 0.0;
  this->CounterPerPeriodHistory[8].AccumRPCTime = 0.0;
  this->CounterPerPeriodHistory[9].AccumRPCTime = 0.0;
  this->CounterPerPeriodHistory[10].AccumRPCTime = 0.0;
  this->CounterPerPeriodHistory[0xb].AccumRPCTime = 0.0;
  this->CounterPerPeriodHistory[0xc].AccumRPCTime = 0.0;
  this->CounterPerPeriodHistory[0xd].AccumRPCTime = 0.0;
  this->CounterPerPeriodHistory[0xe].AccumRPCTime = 0.0;
  this->CounterPerPeriodHistory[0xf].AccumRPCTime = 0.0;
  *(undefined8 *)&this->RPCTracking = 0;
  *(undefined8 *)&(this->RPCTracking).field_0x8 = 0;
  *(undefined8 *)&(this->RPCTracking).field_0x20 = 0;
  this->SecondsIncrementer = '\0';
  this->ReceivedPacketEndTime = 0.0;
  this->LastPreTickDispatchTime = 0.0;
  this->RPCIntervalCounter = 0;
  this->NextTimeQuotaCheck = 0.0;
  this->bRPCTrackingEnabled = false;
  this->MaxRPCTrackingPeriod = '\0';
  *(undefined4 *)&(this->RPCTracking).field_0x28 = 0;
  *(undefined4 *)&(this->RPCTracking).field_0x2c = 0x80;
  *(undefined4 *)&(this->RPCTracking).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->RPCTracking).field_0x34 = 0;
  *(undefined8 *)&(this->RPCTracking).field_0x40 = 0;
  *(undefined4 *)&(this->RPCTracking).field_0x48 = 0;
  (this->ActiveRPCTracking).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveRPCTracking).ArrayNum = 0;
  (this->ActiveRPCTracking).ArrayMax = 0;
  this->LastRPCTrackingClean = 0.0;
  FRPCDoSAnalyticsVars::FRPCDoSAnalyticsVars(&this->AnalyticsVars);
  (this->RPCDoSAnalyticsData).Object = (FRPCDoSAnalyticsData *)0x0;
  (this->RPCDoSAnalyticsData).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  this->AnalyticsMinTimePerSecThreshold = 0.0;
  this->LastAnalyticsThresholdRecalc = 0.0;
  return this;
}

// operator() @ 148090bf0

void __thiscall
`FRPCDoSDetection::ClearStaleRPCTracking'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  void *_Dst;
  uint uVar6;
  
  plVar1 = *(longlong **)((longlong)this + 8);
  uVar6 = (**(int **)this - param_1) + 1;
  uVar4 = 0;
  if ((int)(uVar6 + param_1) <= (int)plVar1[1]) {
    uVar4 = ~(uVar6 | param_1) >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x458,
                       L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (uVar6 != 0) {
    _Dst = (void *)((longlong)param_1 * 0x10 + *plVar1);
    iVar5 = ((int)plVar1[1] - uVar6) - param_1;
    if (iVar5 != 0) {
      memmove(_Dst,(void *)((longlong)(int)uVar6 * 0x10 + (longlong)_Dst),(longlong)iVar5 << 4);
    }
    *(uint *)(plVar1 + 1) = (int)plVar1[1] - uVar6;
  }
  **(undefined4 **)this = 0xffffffff;
  return;
}

// operator() @ 148091690

bool __thiscall
`FRPCDoSDetection::UpdateSeverity_Private'::__l94::<lambda_1>::operator()
          (void *this,FName *param_1,FName *param_2)

{
  int iVar1;
  FString *pFVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  pFVar2 = ::FName::ToString(param_2,&local_18);
  pFVar3 = ::FName::ToString(param_1,&local_28);
  pwVar4 = L"";
  if ((pFVar2->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  iVar1 = FGenericPlatformStricmp::Stricmp(pwVar4,pwVar5);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return SUB41((uint)iVar1 >> 0x1f,0);
}

// CachePlayerAddress @ 1480981e0

void __thiscall FRPCDoSDetection::CachePlayerAddress(FRPCDoSDetection *this)

{
  FString *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  if (((this->CachedAddress).Data.ArrayNum < 2) && (*(void **)&this->AddressFunc != (void *)0x0)) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->AddressFunc);
    pcVar2 = *(code **)&this->AddressFunc;
    plVar3 = *(longlong **)&(this->AddressFunc).field_0x28;
    plVar6 = (longlong *)&(this->AddressFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar6 = plVar3;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar2)(&local_18,uVar5);
    pFVar1 = &this->CachedAddress;
    if (pFVar1 != (FString *)&local_18) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_18.Data;
      (this->CachedAddress).Data.ArrayNum = (int)local_10;
      (this->CachedAddress).Data.ArrayMax = local_10._4_4_;
      local_10 = 0;
      local_18.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return;
}

// CachePlayerUID @ 1480982a0

void __thiscall FRPCDoSDetection::CachePlayerUID(FRPCDoSDetection *this)

{
  FString *pFVar1;
  code *pcVar2;
  longlong *plVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  if (((this->CachedPlayerUID).Data.ArrayNum < 2) && (*(void **)&this->PlayerUIDFunc != (void *)0x0)
     ) {
    UE::Core::Private::Function::CheckCallable(*(void **)&this->PlayerUIDFunc);
    pcVar2 = *(code **)&this->PlayerUIDFunc;
    plVar3 = *(longlong **)&(this->PlayerUIDFunc).field_0x28;
    plVar6 = (longlong *)&(this->PlayerUIDFunc).field_0x10;
    if (plVar3 != (longlong *)0x0) {
      plVar6 = plVar3;
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar2)(&local_18,uVar5);
    pFVar1 = &this->CachedPlayerUID;
    if (pFVar1 != (FString *)&local_18) {
      pFVar4 = (pFVar1->Data).AllocatorInstance.Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pFVar1->Data).AllocatorInstance.Data = local_18.Data;
      (this->CachedPlayerUID).Data.ArrayNum = (int)local_10;
      (this->CachedPlayerUID).Data.ArrayMax = local_10._4_4_;
      local_10 = 0;
      local_18.Data = (FScriptContainerElement *)0x0;
    }
    if (local_18.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data);
    }
  }
  return;
}

// CheckRPCTracking @ 148098970

ERPCNotifyResult __thiscall
FRPCDoSDetection::CheckRPCTracking(FRPCDoSDetection *this,UFunction *param_1,FName param_2)

{
  FRPCDoSCounters *pFVar1;
  FName *pFVar2;
  double *pdVar3;
  double dVar4;
  char cVar5;
  undefined1 uVar6;
  uint uVar7;
  FSequentialRPCScope *pFVar8;
  FRPCTrackingInfo *pFVar9;
  TTuple<void_*,TSharedPtr<FRPCTrackingInfo,1>_> *pTVar10;
  byte bVar11;
  FName *pFVar12;
  longlong *plVar13;
  byte bVar14;
  int iVar15;
  byte bVar16;
  uchar uVar17;
  bool bVar18;
  LARGE_INTEGER local_res8;
  uint uStack_54;
  
  local_res8.s.LowPart._0_1_ = '\0';
  if (this->bHitchSuspendDetection != false) {
    pTVar10 = TSet<TTuple<void_*,TSharedPtr<FRPCTrackingInfo,1>_>,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<FRPCTrackingInfo,1>,0>,FDefaultSetAllocator>
              ::Find((TSet<TTuple<void_*,TSharedPtr<FRPCTrackingInfo,1>_>,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<FRPCTrackingInfo,1>,0>,FDefaultSetAllocator>
                      *)&this->RPCTracking,param_1);
    plVar13 = (longlong *)&pTVar10->field_0x8;
    if (pTVar10 == (TTuple<void_*,TSharedPtr<FRPCTrackingInfo,1>_> *)0x0) {
      plVar13 = (longlong *)0x0;
    }
    if (((plVar13 != (longlong *)0x0) && (*plVar13 != 0)) && (*(char *)(*plVar13 + 0x102) == '\x03')
       ) {
      pFVar8 = GetSequentialRPCScope(this);
      pFVar8->PostReceivedRPCBlockCount = pFVar8->PostReceivedRPCBlockCount + 1;
      return BlockRPC;
    }
    return ExecuteRPC;
  }
  pFVar8 = GetSequentialRPCScope(this);
  pFVar9 = FindOrAddRPCTracking(this,param_1,(bool *)&local_res8);
  uVar6 = local_res8.s.LowPart._0_1_;
  bVar14 = pFVar9->LastTrackedSecondIncrement;
  bVar16 = this->SecondsIncrementer;
  pFVar9->LastTrackedSecondIncrement = bVar16;
  pFVar1 = pFVar9->PerPeriodHistory + (bVar16 & 0xf);
  cVar5 = '\x01';
  if (local_res8.s.LowPart._0_1_ == '\0') {
    bVar16 = this->SecondsIncrementer;
    if (bVar14 != bVar16) {
      bVar11 = bVar16 - bVar14;
      if (bVar16 <= bVar14) {
        bVar11 = (bVar16 - bVar14) - 1;
      }
      if ((int)(uint)bVar11 < (int)this->MaxRPCTrackingPeriod) {
        bVar11 = this->MaxRPCTrackingPeriod - bVar11;
        bVar16 = pFVar9->HistoryCount;
        if (bVar11 < pFVar9->HistoryCount) {
          bVar16 = bVar11;
        }
        if (1 < bVar16) {
          bVar14 = bVar14 & 0xf;
          bVar11 = bVar14;
          while (bVar11 = bVar11 - 1, bVar11 != (byte)(bVar14 - bVar16)) {
            uVar7 = bVar11 & 0xf;
            dVar4 = pFVar9->PerPeriodHistory[uVar7].AccumRPCTime;
            pFVar9->PerPeriodHistory[uVar7].RPCCounter =
                 pFVar9->PerPeriodHistory[uVar7].RPCCounter +
                 pFVar9->PerPeriodHistory[bVar14].RPCCounter;
            pFVar9->PerPeriodHistory[uVar7].AccumRPCTime =
                 dVar4 + pFVar9->PerPeriodHistory[bVar14].AccumRPCTime;
          }
        }
        uVar17 = bVar16 + 1;
      }
      else {
        uVar17 = '\x01';
      }
      pFVar9->HistoryCount = uVar17;
      *(ulonglong *)pFVar1 = (ulonglong)uStack_54 << 0x20;
      pFVar1->AccumRPCTime = 0.0;
    }
  }
  else {
    pFVar9->HistoryCount = '\x01';
    pFVar12 = (FName *)(this->RPCBlockAllowList).AllocatorInstance.Data;
    pFVar2 = pFVar12 + (this->RPCBlockAllowList).ArrayNum;
    for (; pFVar12 != pFVar2; pFVar12 = pFVar12 + 1) {
      if (*pFVar12 == param_2) {
        pFVar9->BlockState = OnAllowList;
        goto LAB_148098b0e;
      }
    }
    pFVar9->BlockState = NotBlocked;
  }
LAB_148098b0e:
  pFVar1->RPCCounter = pFVar1->RPCCounter + 1;
  if (((pFVar8->bReceivedPacketRPCUnique != false) && (pFVar8->PostReceivedRPCName != (FName)0x0))
     && (pFVar8->PostReceivedRPCName != param_2)) {
    pFVar8->bReceivedPacketRPCUnique = false;
  }
  if (pFVar8->PostReceivedRPCCounter == (FRPCDoSCounters *)0x0) {
LAB_148098ba1:
    pFVar8->PostReceivedRPCCounter = pFVar1;
    pFVar8->PostReceivedRPCTracking = pFVar9;
    pFVar8->PostReceivedRPCName = param_2;
  }
  else if (pFVar8->PostReceivedRPCCounter != pFVar1) {
    QueryPerformanceCounter(&local_res8);
    dVar4 = (double)CONCAT71(local_res8.QuadPart._1_7_,local_res8.s.LowPart._0_1_) *
            FGenericPlatformTime::SecondsPerCycle + __real_4170000000000000;
    PostSequentialRPC(this,MidPacket,dVar4,pFVar8->PostReceivedRPCCounter,
                      pFVar8->PostReceivedRPCTracking);
    pFVar8->LastReceivedRPCTimeCache = dVar4;
    pFVar8->PostReceivedRPCBlockCount = 0;
    goto LAB_148098ba1;
  }
  if (((uVar6 != '\0') || (pFVar8->PostReceivedRPCBlockCount != 0)) ||
     (pFVar9->BlockState == OnAllowList)) goto LAB_148098c40;
  if ((GAllowRPCDoSDetectionBlocking == 1) &&
     (bVar14 = *(byte *)((longlong)&this->_padding_ + 4), bVar14 != 0xff)) {
    iVar15 = (int)(short)this->_padding_;
    bVar16 = pFVar9->HistoryCount;
    if (bVar14 < pFVar9->HistoryCount) {
      bVar16 = bVar14;
    }
    uVar7 = (byte)((pFVar9->LastTrackedSecondIncrement - bVar16) + 1) & 0xf;
    if (((iVar15 == -1) || (pFVar9->PerPeriodHistory[uVar7].RPCCounter < iVar15)) &&
       ((dVar4 = (double)this->_padding_, dVar4 == 0.0 ||
        (pdVar3 = &pFVar9->PerPeriodHistory[uVar7].AccumRPCTime,
        *pdVar3 <= dVar4 && dVar4 != *pdVar3)))) goto LAB_148098c2f;
  }
  else {
LAB_148098c2f:
    cVar5 = '\0';
  }
  pFVar9->BlockState = cVar5 + NotBlocked;
LAB_148098c40:
  bVar18 = pFVar9->BlockState == Blocked;
  if (bVar18) {
    pFVar8->PostReceivedRPCBlockCount = pFVar8->PostReceivedRPCBlockCount + 1;
  }
  return bVar18;
}

// ClearStaleRPCTracking @ 148099c00

void __thiscall FRPCDoSDetection::ClearStaleRPCTracking(FRPCDoSDetection *this,double param_1)

{
  TArray<FActiveRPCTrackingInfo,TSizedDefaultAllocator<32>_> *pTVar1;
  byte bVar2;
  code *pcVar3;
  TArray<FActiveRPCTrackingInfo,TSizedDefaultAllocator<32>_> *pTVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  TTuple<void_*,TSharedPtr<FRPCTrackingInfo,1>_> *pTVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  uint local_res8 [2];
  uint *local_58;
  TArray<FActiveRPCTrackingInfo,TSizedDefaultAllocator<32>_> *local_50;
  undefined8 local_48;
  FSharedReferencer<1> aFStack_40 [3];
  
  local_58 = local_res8;
  pTVar1 = &this->ActiveRPCTracking;
  uVar14 = (this->ActiveRPCTracking).ArrayNum;
  local_res8[0] = 0xffffffff;
  uVar11 = uVar14 - 1;
  local_50 = pTVar1;
  if (-1 < (int)uVar11) {
    lVar15 = (longlong)(int)uVar11 << 4;
    uVar12 = uVar14;
    do {
      uVar7 = 0;
      if ((int)uVar11 < (this->ActiveRPCTracking).ArrayNum) {
        uVar7 = ~uVar11 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar5) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pTVar4 = local_50;
      pFVar10 = (pTVar1->AllocatorInstance).Data;
      bVar2 = *(byte *)(*(longlong *)(pFVar10 + lVar15 + 8) + 0x101);
      bVar6 = this->SecondsIncrementer - bVar2;
      if (this->SecondsIncrementer <= bVar2) {
        bVar6 = bVar6 - 1;
      }
      if (bVar6 < 0x11) {
        if (local_res8[0] != 0xffffffff) {
          uVar13 = *local_58 - uVar11;
          uVar7 = 0;
          if ((int)(*local_58 + 1) <= local_50->ArrayNum) {
            uVar7 = ~(uVar12 | uVar13) >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              );
            if (bVar5) {
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
          }
          if (uVar13 != 0) {
            pFVar10 = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar12 * 0x10;
            iVar8 = ((pTVar4->ArrayNum - uVar13) - uVar11) + -1;
            if (iVar8 != 0) {
              memmove(pFVar10,pFVar10 + (longlong)(int)uVar13 * 0x10,(longlong)iVar8 << 4);
            }
            pTVar4->ArrayNum = pTVar4->ArrayNum - uVar13;
          }
          *local_58 = 0xffffffff;
        }
      }
      else {
        if (local_res8[0] == 0xffffffff) {
          local_res8[0] = uVar11;
        }
        pTVar9 = TSet<TTuple<void_*,TSharedPtr<FRPCTrackingInfo,1>_>,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<FRPCTrackingInfo,1>,0>,FDefaultSetAllocator>
                 ::Find((TSet<TTuple<void_*,TSharedPtr<FRPCTrackingInfo,1>_>,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<FRPCTrackingInfo,1>,0>,FDefaultSetAllocator>
                         *)&this->RPCTracking,*(void **)(pFVar10 + lVar15));
        if (pTVar9 == (TTuple<void_*,TSharedPtr<FRPCTrackingInfo,1>_> *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x288,L"");
          if (bVar5) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
        local_48 = 0;
        aFStack_40[0].ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if ((undefined8 *)&pTVar9->field_0x8 != &local_48) {
          *(undefined8 *)&pTVar9->field_0x8 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)&pTVar9->field_0x10,aFStack_40);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (aFStack_40[0].ReferenceController);
      }
      uVar12 = uVar12 - 1;
      lVar15 = lVar15 + -0x10;
      uVar11 = uVar11 - 1;
    } while (-1 < (int)uVar11);
    if (local_res8[0] != 0xffffffff) {
      `FRPCDoSDetection::ClearStaleRPCTracking'::__l2::<lambda_1>::operator()(&local_58,0);
    }
  }
  uVar11 = (this->ActiveRPCTracking).ArrayNum;
  if (uVar11 != uVar14) {
    uVar14 = 0x80;
    if (0x80 < (int)uVar11) {
      uVar14 = uVar11;
    }
    if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
    if ((this->ActiveRPCTracking).ArrayMax < (int)uVar14) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,uVar14,&pTVar1->AllocatorInstance,uVar11,&(this->ActiveRPCTracking).ArrayMax
                );
    }
  }
  this->LastRPCTrackingClean = param_1;
  return;
}

// DisableRPCTracking @ 14809f1e0

void __thiscall FRPCDoSDetection::DisableRPCTracking(FRPCDoSDetection *this,double param_1)

{
  this->bRPCTrackingEnabled = false;
  return;
}

// EnableForcedRPCTracking @ 14809f5a0

void __thiscall
FRPCDoSDetection::EnableForcedRPCTracking
          (FRPCDoSDetection *this,UFunction *param_1,FName param_2,double param_3)

{
  code *pcVar1;
  bool bVar2;
  
  this->ForcedRPCTrackingEndTime = param_3 + this->ForcedRPCTrackingLength;
  EnableRPCTracking(this,param_3);
  if ((UE::Net::GRPCDoSScopeDebugging != 0) && ((this->SequentialRPCScopePrivate)._padding_ == '\0')
     ) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1192164650855168929>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                       ,0x45f,"GRPCDoSScopeDebugging == 0 || SequentialRPCScopePrivate.IsActive()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if ((this->SequentialRPCScopePrivate).bReceivedPacketRPCUnique == false) {
    CheckRPCTracking(this,param_1,param_2);
  }
  return;
}

// EnableRPCTracking @ 14809f640

void __thiscall FRPCDoSDetection::EnableRPCTracking(FRPCDoSDetection *this,double param_1)

{
  byte bVar1;
  UFunction *pUVar2;
  longlong lVar3;
  longlong lVar4;
  
  this->bRPCTrackingEnabled = true;
  if (this->LastRPCTrackingClean == 0.0) {
    this->LastRPCTrackingClean = param_1;
  }
  if ((this->SequentialRPCScopePrivate)._padding_ != '\0') {
    bVar1 = (this->SequentialRPCScopePrivate).LightweightRPCTracking.Count;
    pUVar2 = (this->SequentialRPCScopePrivate).LightweightRPCTracking.RPC[0].Function;
    if (1 < (ulonglong)bVar1) {
      lVar3 = 0x10;
      lVar4 = 1;
      do {
        if (*(UFunction **)
             ((longlong)&(this->SequentialRPCScopePrivate).LightweightRPCTracking.RPC[0].Function +
             lVar3) != pUVar2) goto LAB_14809f6a1;
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x10;
      } while (lVar4 < (longlong)(ulonglong)bVar1);
    }
    if (bVar1 != 0) {
      CheckRPCTracking(this,pUVar2,(FName)pUVar2->_padding_);
      return;
    }
LAB_14809f6a1:
    (this->SequentialRPCScopePrivate).bReceivedPacketRPCUnique = false;
    if ((this->SequentialRPCScopePrivate).LastReceivedRPCTimeCache == 0.0) {
      (this->SequentialRPCScopePrivate).LastReceivedRPCTimeCache = param_1;
    }
  }
  return;
}

// FindOrAddRPCTracking @ 1480a1ee0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FRPCTrackingInfo * __thiscall
FRPCDoSDetection::FindOrAddRPCTracking(FRPCDoSDetection *this,UFunction *param_1,bool *param_2)

{
  TReferenceControllerBase<1> **ppTVar1;
  int *piVar2;
  TMap<void_*,TSharedPtr<FRPCTrackingInfo,1>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<FRPCTrackingInfo,1>,0>_>
  *this_00;
  TArray<FActiveRPCTrackingInfo,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TReferenceControllerBase<1> *pTVar8;
  FRPCTrackingInfo *pFVar9;
  longlong *plVar10;
  undefined1 *puVar11;
  TReferenceControllerBase<1> *pTVar12;
  uint uVar13;
  TReferenceControllerBase<1> *pTVar14;
  int local_res8 [2];
  UFunction *local_res10;
  UFunction **local_res20;
  TReferenceControllerBase<1> *local_58;
  FSharedReferencer<1> FStack_50;
  UFunction *local_48;
  TReferenceControllerBase<1> *pTStack_40;
  
  this_00 = &this->RPCTracking;
  pTVar12 = (TReferenceControllerBase<1> *)0x0;
  uVar13 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
  uVar13 = uVar13 >> 0x10 ^ uVar13;
  local_res10 = param_1;
  if (*(int *)&(this->RPCTracking).field_0x8 != *(int *)&(this->RPCTracking).field_0x34) {
    puVar11 = *(undefined1 **)&(this->RPCTracking).field_0x40;
    if (puVar11 == (undefined1 *)0x0) {
      puVar11 = &(this->RPCTracking).field_0x38;
    }
    iVar7 = *(int *)(puVar11 +
                    (ulonglong)(*(int *)&(this->RPCTracking).field_0x48 - 1U & uVar13) * 4);
    if (iVar7 != -1) {
      do {
        plVar10 = (longlong *)((longlong)iVar7 * 0x20 + *(longlong *)&this_00->field_0x0);
        if ((UFunction *)*plVar10 == param_1) {
          if (plVar10 != (longlong *)0x0) goto LAB_1480a1fca;
          break;
        }
        iVar7 = (int)plVar10[3];
      } while (iVar7 != -1);
    }
  }
  local_res20 = &local_res10;
  TSet<TTuple<void_*,TSharedPtr<FRPCTrackingInfo,1>_>,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<FRPCTrackingInfo,1>,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<void_*_&&>_>
            ((TSet<TTuple<void_*,TSharedPtr<FRPCTrackingInfo,1>_>,TDefaultMapHashableKeyFuncs<void_*,TSharedPtr<FRPCTrackingInfo,1>,0>,FDefaultSetAllocator>
              *)this_00,(uint)local_res8,(TKeyInitializer<void_*_&&> *)(ulonglong)uVar13,
             (bool *)&local_res20);
  plVar10 = (longlong *)((longlong)local_res8[0] * 0x20 + *(longlong *)&this_00->field_0x0);
LAB_1480a1fca:
  ppTVar1 = (TReferenceControllerBase<1> **)(plVar10 + 1);
  if (plVar10[1] == 0) {
    pTVar8 = ::operator_new(0x128);
    if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
      local_58 = ___xmm_00000000000000000000000000000010;
      pTVar14 = (TReferenceControllerBase<1> *)&DAT_00000010;
      FStack_50.ReferenceController = _UNK_150651568;
    }
    else {
      pTVar8->SharedReferenceCount = (atomic<int>)0x1;
      pTVar8->WeakReferenceCount = (atomic<int>)0x1;
      pTVar8->_padding_ =
           (longlong)
           &___7__TIntrusiveReferenceController_UFRPCTrackingInfo___00_SharedPointerInternals__6B_;
      *(undefined4 *)((longlong)&pTVar8[0x11]._padding_ + 3) = 0;
      *(undefined1 *)((longlong)&pTVar8[0x11]._padding_ + 7) = 0;
      memset(pTVar8 + 1,0,0x100);
      pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
      pTVar14 = pTVar8 + 1;
      pTVar8[2].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[2].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[3].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[3].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[4].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[4].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[5].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[5].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[6].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[6].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[7].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[7].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[8].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[8].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[9].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[9].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[10].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[10].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[0xb].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[0xb].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[0xc].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[0xc].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[0xd].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[0xd].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[0xe].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[0xe].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[0xf].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[0xf].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[0x10].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[0x10].WeakReferenceCount = (atomic<int>)0x0;
      *(undefined2 *)&pTVar8[0x11]._padding_ = 0;
      *(undefined1 *)((longlong)&pTVar8[0x11]._padding_ + 2) = 0;
      pTVar8[0x11].SharedReferenceCount = (atomic<int>)0x0;
      pTVar8[0x11].WeakReferenceCount = (atomic<int>)0x0;
      pTVar8[0x12]._padding_ = 0;
      if ((pTVar14 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InObject != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x246,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        pFVar9 = (FRPCTrackingInfo *)(*pcVar5)();
        return pFVar9;
      }
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
      FStack_50.ReferenceController = pTVar8;
      pTVar12 = pTVar8;
      local_58 = pTVar14;
    }
    if (ppTVar1 != &local_58) {
      *ppTVar1 = pTVar14;
      local_58 = (TReferenceControllerBase<1> *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                ((FSharedReferencer<1> *)(plVar10 + 2),&FStack_50);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_50.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar12);
    pTStack_40 = *ppTVar1;
    pTVar3 = &this->ActiveRPCTracking;
    pFVar4 = (pTVar3->AllocatorInstance).Data;
    local_48 = param_1;
    if (((pFVar4 <= (FScriptContainerElement *)&local_48) &&
        ((FScriptContainerElement *)&local_48 <
         pFVar4 + (longlong)(this->ActiveRPCTracking).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      pFVar9 = (FRPCTrackingInfo *)(*pcVar5)();
      return pFVar9;
    }
    iVar7 = (this->ActiveRPCTracking).ArrayNum;
    piVar2 = &(this->ActiveRPCTracking).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&pTVar3->AllocatorInstance,piVar2);
    }
    (this->ActiveRPCTracking).ArrayNum = iVar7 + 1;
    pFVar4 = (pTVar3->AllocatorInstance).Data + (longlong)iVar7 * 0x10;
    *(UFunction **)pFVar4 = local_48;
    *(TReferenceControllerBase<1> **)(pFVar4 + 8) = pTStack_40;
    *param_2 = true;
  }
  return (FRPCTrackingInfo *)*ppTVar1;
}

// GetPacketScope @ 1480a86d0

FPacketScope * __thiscall FRPCDoSDetection::GetPacketScope(FRPCDoSDetection *this)

{
  code *pcVar1;
  bool bVar2;
  FPacketScope *pFVar3;
  
  if ((UE::Net::GRPCDoSScopeDebugging != 0) && ((this->PacketScopePrivate)._padding_ == '\0')) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1192164650855169024>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                       ,0x400,"GRPCDoSScopeDebugging == 0 || PacketScopePrivate.IsActive()");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FPacketScope *)(*pcVar1)();
      return pFVar3;
    }
    return &this->PacketScopePrivate;
  }
  return &this->PacketScopePrivate;
}

// Init @ 1480aea80

void __thiscall
FRPCDoSDetection::Init
          (FRPCDoSDetection *this,FName param_1,TSharedPtr<FNetAnalyticsAggregator,1> *param_2,
          TUniqueFunction<UWorld_*___cdecl(void)> *param_3,
          TUniqueFunction<FString___cdecl(void)> *param_4,
          TUniqueFunction<FString___cdecl(void)> *param_5,
          TUniqueFunction<void___cdecl(void)> *param_6)

{
  TSharedPtr<FRPCDoSAnalyticsData,1> *pTVar1;
  char cVar2;
  FNetAnalyticsAggregator *this_00;
  code *pcVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  FString *pFVar13;
  FRPCDoSAnalyticsData *pFVar14;
  TSharedRef<FNetAnalyticsData,1> *pTVar15;
  TSharedPtr<FNetAnalyticsData,1> *pTVar16;
  FRPCDoSAnalyticsData *local_68;
  FSharedReferencer<1> local_60;
  TRawPtrProxyWithDeleter<FRPCDoSAnalyticsData,FNetAnalyticsDataDeleter> local_58;
  TSharedPtr<FNetAnalyticsData,1> local_48;
  FString local_38;
  TSharedRef<FNetAnalyticsData,1> local_28 [2];
  
  uVar5 = *(undefined8 *)&this->AddressFunc;
  uVar6 = *(undefined8 *)&(this->AddressFunc).field_0x8;
  uVar7 = *(undefined8 *)&(this->AddressFunc).field_0x10;
  uVar8 = *(undefined8 *)&(this->AddressFunc).field_0x18;
  uVar9 = *(undefined8 *)&(this->AddressFunc).field_0x20;
  uVar10 = *(undefined8 *)&(this->AddressFunc).field_0x28;
  uVar11 = *(undefined8 *)&param_4->field_0x8;
  *(undefined8 *)&this->AddressFunc = *(undefined8 *)param_4;
  *(undefined8 *)&(this->AddressFunc).field_0x8 = uVar11;
  uVar11 = *(undefined8 *)&param_4->field_0x18;
  *(undefined8 *)&(this->AddressFunc).field_0x10 = *(undefined8 *)&param_4->field_0x10;
  *(undefined8 *)&(this->AddressFunc).field_0x18 = uVar11;
  uVar11 = *(undefined8 *)&param_4->field_0x28;
  *(undefined8 *)&(this->AddressFunc).field_0x20 = *(undefined8 *)&param_4->field_0x20;
  *(undefined8 *)&(this->AddressFunc).field_0x28 = uVar11;
  *(undefined8 *)param_4 = uVar5;
  *(undefined8 *)&param_4->field_0x8 = uVar6;
  *(undefined8 *)&param_4->field_0x10 = uVar7;
  *(undefined8 *)&param_4->field_0x18 = uVar8;
  *(undefined8 *)&param_4->field_0x20 = uVar9;
  *(undefined8 *)&param_4->field_0x28 = uVar10;
  uVar5 = *(undefined8 *)&this->PlayerUIDFunc;
  uVar6 = *(undefined8 *)&(this->PlayerUIDFunc).field_0x8;
  uVar7 = *(undefined8 *)&(this->PlayerUIDFunc).field_0x10;
  uVar8 = *(undefined8 *)&(this->PlayerUIDFunc).field_0x18;
  uVar9 = *(undefined8 *)&(this->PlayerUIDFunc).field_0x20;
  uVar10 = *(undefined8 *)&(this->PlayerUIDFunc).field_0x28;
  uVar11 = *(undefined8 *)&param_5->field_0x8;
  *(undefined8 *)&this->PlayerUIDFunc = *(undefined8 *)param_5;
  *(undefined8 *)&(this->PlayerUIDFunc).field_0x8 = uVar11;
  uVar11 = *(undefined8 *)&param_5->field_0x18;
  *(undefined8 *)&(this->PlayerUIDFunc).field_0x10 = *(undefined8 *)&param_5->field_0x10;
  *(undefined8 *)&(this->PlayerUIDFunc).field_0x18 = uVar11;
  uVar11 = *(undefined8 *)&param_5->field_0x28;
  *(undefined8 *)&(this->PlayerUIDFunc).field_0x20 = *(undefined8 *)&param_5->field_0x20;
  *(undefined8 *)&(this->PlayerUIDFunc).field_0x28 = uVar11;
  *(undefined8 *)param_5 = uVar5;
  *(undefined8 *)&param_5->field_0x8 = uVar6;
  *(undefined8 *)&param_5->field_0x10 = uVar7;
  *(undefined8 *)&param_5->field_0x18 = uVar8;
  *(undefined8 *)&param_5->field_0x20 = uVar9;
  *(undefined8 *)&param_5->field_0x28 = uVar10;
  uVar5 = *(undefined8 *)&this->KickPlayerFunc;
  uVar6 = *(undefined8 *)&(this->KickPlayerFunc).field_0x8;
  uVar7 = *(undefined8 *)&(this->KickPlayerFunc).field_0x10;
  uVar8 = *(undefined8 *)&(this->KickPlayerFunc).field_0x18;
  uVar9 = *(undefined8 *)&(this->KickPlayerFunc).field_0x20;
  uVar10 = *(undefined8 *)&(this->KickPlayerFunc).field_0x28;
  uVar11 = *(undefined8 *)&param_6->field_0x8;
  *(undefined8 *)&this->KickPlayerFunc = *(undefined8 *)param_6;
  *(undefined8 *)&(this->KickPlayerFunc).field_0x8 = uVar11;
  uVar11 = *(undefined8 *)&param_6->field_0x18;
  *(undefined8 *)&(this->KickPlayerFunc).field_0x10 = *(undefined8 *)&param_6->field_0x10;
  *(undefined8 *)&(this->KickPlayerFunc).field_0x18 = uVar11;
  uVar11 = *(undefined8 *)&param_6->field_0x28;
  *(undefined8 *)&(this->KickPlayerFunc).field_0x20 = *(undefined8 *)&param_6->field_0x20;
  *(undefined8 *)&(this->KickPlayerFunc).field_0x28 = uVar11;
  *(undefined8 *)param_6 = uVar5;
  *(undefined8 *)&param_6->field_0x8 = uVar6;
  *(undefined8 *)&param_6->field_0x10 = uVar7;
  *(undefined8 *)&param_6->field_0x18 = uVar8;
  *(undefined8 *)&param_6->field_0x20 = uVar9;
  *(undefined8 *)&param_6->field_0x28 = uVar10;
  InitConfig(this,param_1);
  if (((this->bRPCDoSDetection != false) && (this->bRPCDoSAnalytics != false)) &&
     (this_00 = param_2->Object, this_00 != (FNetAnalyticsAggregator *)0x0)) {
    pFVar13 = ::FString::FString(&local_38,L"FRPCDoSAnalyticsData");
    ::FName::FName((FName *)&param_4,L"Core.ServerRPCDoS");
    pFVar14 = ::operator_new(0xe0);
    if (pFVar14 == (FRPCDoSAnalyticsData *)0x0) {
      pFVar14 = (FRPCDoSAnalyticsData *)0x0;
    }
    else {
      memset(pFVar14,0,0xe0);
      FNetAnalyticsData::FNetAnalyticsData((FNetAnalyticsData *)pFVar14);
      FRPCDoSAnalyticsVars::FRPCDoSAnalyticsVars((FRPCDoSAnalyticsVars *)&pFVar14->field_0x20);
      pFVar14->WorstAnalyticsState = '\0';
      *(undefined ***)pFVar14 = &___7FRPCDoSAnalyticsData__6B_;
      *(undefined8 *)&(pFVar14->WorldFunc).field_0x0 = 0;
      *(undefined8 *)&(pFVar14->WorldFunc).field_0x28 = 0;
      if (((*(longlong *)&pFVar14->field_0x8 != 0) && (*(longlong *)&pFVar14->field_0x10 != 0)) &&
         (0 < *(int *)(*(longlong *)&pFVar14->field_0x10 + 8))) {
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("!InObject || !InObject->DoesSharedInstanceExist()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x7bd,L"Trying to share an already-shared object");
        if (bVar12) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    local_58.Object = pFVar14;
    pTVar15 = TSharedRef<FNetAnalyticsData,1>::
              TSharedRef<FNetAnalyticsData,1><FRPCDoSAnalyticsData,FNetAnalyticsDataDeleter>
                        (local_28,&local_58);
    pTVar16 = FNetAnalyticsAggregator::RegisterAnalyticsData_Internal
                        (this_00,&local_48,pTVar15,(FName *)&param_4,pFVar13);
    local_60.ReferenceController = (pTVar16->SharedReferenceCount).ReferenceController;
    local_68 = (FRPCDoSAnalyticsData *)pTVar16->Object;
    if (local_60.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_60.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_60.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    pTVar1 = &this->RPCDoSAnalyticsData;
    if (pTVar1 != (TSharedPtr<FRPCDoSAnalyticsData,1> *)&local_68) {
      pTVar1->Object = local_68;
      local_68 = (FRPCDoSAnalyticsData *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->RPCDoSAnalyticsData).SharedReferenceCount,&local_60);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_60.ReferenceController);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_48.SharedReferenceCount.ReferenceController);
    pFVar14 = pTVar1->Object;
    if (pFVar14 != (FRPCDoSAnalyticsData *)0x0) {
      uVar5 = *(undefined8 *)&param_3->field_0x8;
      uVar6 = *(undefined8 *)&pFVar14->WorldFunc;
      uVar7 = *(undefined8 *)&(pFVar14->WorldFunc).field_0x8;
      uVar8 = *(undefined8 *)&(pFVar14->WorldFunc).field_0x10;
      uVar9 = *(undefined8 *)&(pFVar14->WorldFunc).field_0x18;
      uVar10 = *(undefined8 *)&(pFVar14->WorldFunc).field_0x20;
      uVar11 = *(undefined8 *)&(pFVar14->WorldFunc).field_0x28;
      *(undefined8 *)&pFVar14->WorldFunc = *(undefined8 *)param_3;
      *(undefined8 *)&(pFVar14->WorldFunc).field_0x8 = uVar5;
      uVar5 = *(undefined8 *)&param_3->field_0x18;
      *(undefined8 *)&(pFVar14->WorldFunc).field_0x10 = *(undefined8 *)&param_3->field_0x10;
      *(undefined8 *)&(pFVar14->WorldFunc).field_0x18 = uVar5;
      uVar5 = *(undefined8 *)&param_3->field_0x28;
      *(undefined8 *)&(pFVar14->WorldFunc).field_0x20 = *(undefined8 *)&param_3->field_0x20;
      *(undefined8 *)&(pFVar14->WorldFunc).field_0x28 = uVar5;
      *(undefined8 *)param_3 = uVar6;
      *(undefined8 *)&param_3->field_0x8 = uVar7;
      *(undefined8 *)&param_3->field_0x10 = uVar8;
      *(undefined8 *)&param_3->field_0x18 = uVar9;
      *(undefined8 *)&param_3->field_0x20 = uVar10;
      *(undefined8 *)&param_3->field_0x28 = uVar11;
    }
  }
  QueryPerformanceCounter((LARGE_INTEGER *)&param_5);
  cVar2 = *(char *)((longlong)&this->_padding_ + 3);
  dVar4 = (double)(longlong)param_5 * FGenericPlatformTime::SecondsPerCycle +
          __real_4170000000000000;
  if (this->bRPCTrackingEnabled != (bool)cVar2) {
    if (cVar2 == '\0') {
      this->bRPCTrackingEnabled = false;
    }
    else {
      EnableRPCTracking(this,dVar4);
    }
  }
  if (this->bRPCDoSAnalytics != false) {
    FWindowsPlatformTime::AutoUpdateGameThreadCPUTime(__real_3fd0000000000000);
  }
  PreTickDispatch(this,dVar4);
  return;
}

// InitConfig @ 1480aee00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRPCDoSDetection::InitConfig(FRPCDoSDetection *this,FName param_1)

{
  int *piVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FRPCDoSStateConfig,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<FRPCDoSCounters,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  void *pvVar6;
  code *pcVar7;
  TConsoleVariableData<FString> *pTVar8;
  FName FVar9;
  bool bVar10;
  bool bVar11;
  int iVar12;
  FNameEntryId FVar13;
  int iVar14;
  UClass *pUVar15;
  FString *pFVar16;
  size_t sVar17;
  UClass *pUVar18;
  UObject *pUVar19;
  undefined4 extraout_var;
  ulonglong uVar20;
  FString *pFVar21;
  FName *pFVar22;
  longlong *plVar23;
  FName FVar24;
  FStaticBasicLogRecord *pFVar25;
  FScriptContainerElement *pFVar26;
  wchar_t *pwVar27;
  longlong lVar28;
  uint uVar29;
  longlong lVar30;
  FString *pFVar31;
  FRPCDoSStateConfig *this_00;
  ForAnyElementType FVar32;
  char cVar33;
  wchar_t *pwVar34;
  uint uVar35;
  double dVar36;
  double dVar37;
  FName local_res10;
  undefined1 auStackY_228 [32];
  undefined1 local_1e8;
  undefined1 local_1e7 [3];
  uint local_1e4;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1e0;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1d0;
  uint local_1c0;
  FString local_1b8;
  TArray<FString,TSizedDefaultAllocator<32>_> local_1a8;
  FString local_198;
  FString local_188;
  FString *local_178;
  UObject *local_170;
  FName local_168;
  undefined1 local_160 [8];
  LARGE_INTEGER local_158 [2];
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  FString local_138;
  FName local_128 [2];
  TStringView<wchar_t> local_118;
  FString local_108;
  FString local_f8;
  FString local_e8;
  undefined1 local_d8 [128];
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_228;
  bVar11 = false;
  iVar12 = 0;
  local_1c0 = 0;
  local_res10 = param_1;
  local_168 = param_1;
  pUVar15 = URPCDoSDetectionConfig::StaticClass();
  pFVar16 = ::FName::ToString(&local_168,&local_108);
  if ((pFVar16->Data).ArrayNum == 0) {
    local_148 = (FScriptContainerElement *)0x15060d16c;
LAB_1480aee85:
    sVar17 = wcslen((wchar_t *)local_148);
    iVar12 = (int)sVar17;
  }
  else {
    local_148 = (pFVar16->Data).AllocatorInstance.Data;
    if (local_148 != (FScriptContainerElement *)0x0) goto LAB_1480aee85;
  }
  iStack_140 = iVar12;
  pUVar18 = URPCDoSDetectionConfig::StaticClass();
  local_118._12_4_ = uStack_13c;
  local_118.Size = iStack_140;
  local_118.DataPtr = (wchar_t *)local_148;
  pUVar19 = StaticFindObject(pUVar18,(UObject *)pUVar15,&local_118,None);
  local_170 = pUVar19;
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  FVar9 = local_168;
  if (pUVar19 == (UObject *)0x0) {
    if (local_168 == (FName)0x0) {
      FObjectInitializer::AssertIfInConstructor
                ((UObject *)pUVar15,
                 L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                );
    }
    pUVar18 = URPCDoSDetectionConfig::StaticClass();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_d8,pUVar18);
    FVar24 = local_168;
    local_d8._48_8_ = (FObjectInstancingGraph *)0x0;
    local_d8._56_8_ = (UPackage *)0x0;
    local_168.ComparisonIndex = FVar9.ComparisonIndex.Value;
    local_168.Number = FVar9.Number;
    local_d8._16_4_ = local_168.ComparisonIndex.Value;
    local_d8._20_4_ = local_168.Number;
    local_d8._24_4_ = RF_NoFlags;
    local_d8._40_8_ = (UObject *)0x0;
    local_d8[0x20] = false;
    local_168 = FVar24;
    local_d8._8_8_ = pUVar15;
    pUVar19 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_d8);
    local_170 = pUVar19;
    if (local_d8._64_8_ != 0) {
      plVar23 = (longlong *)(local_d8 + 0x50);
      if ((longlong *)local_d8._104_8_ != (longlong *)0x0) {
        plVar23 = (longlong *)local_d8._104_8_;
      }
      (**(code **)(*plVar23 + 0x10))();
    }
  }
  dVar37 = 0.0;
  if (pUVar19 != (UObject *)0x0) {
    this->bRPCDoSDetection = *(bool *)(pUVar19 + 1);
    this->bRPCDoSAnalytics = (bool)pUVar19[1].field_0x1;
    this->HitchTimeQuotaMS = *(int *)&pUVar19[1].field_0x4;
    this->HitchSuspendDetectionTimeMS = *(int *)&pUVar19[1].field_0x8;
    if ((this->NextTimeQuotaCheck == 0.0) && (0 < *(int *)&pUVar19[1].field_0x20)) {
      QueryPerformanceCounter(local_158);
      this->NextTimeQuotaCheck =
           (double)local_158[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
           (double)*(int *)&pUVar19[1].field_0x20 * __real_3f50624dd2f1a9fc +
           __real_4170000000000000;
    }
    pTVar2 = &this->RPCBlockAllowList;
    if (pTVar2 != (TArray<FName,TSizedDefaultAllocator<32>_> *)&pUVar19[2].field_0x10) {
      iVar12 = *(int *)&pUVar19[2].field_0x18;
      piVar1 = &(this->RPCBlockAllowList).ArrayMax;
      pvVar6 = *(void **)&pUVar19[2].field_0x10;
      (this->RPCBlockAllowList).ArrayNum = iVar12;
      if ((iVar12 == 0) && (*piVar1 == 0)) {
        *piVar1 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,iVar12,*piVar1,&pTVar2->AllocatorInstance,iVar12,piVar1);
        if (iVar12 != 0) {
          memcpy((pTVar2->AllocatorInstance).Data,pvVar6,(longlong)iVar12 << 3);
        }
      }
    }
  }
  pTVar8 = CVarRPCDoSDetectionOverride.Ref;
  bVar10 = IsInParallelGameThread();
  if (!bVar10) {
    bVar10 = IsInGameThread();
    lVar28 = 0x10;
    if (!bVar10) goto LAB_1480af056;
  }
  lVar28 = 0;
LAB_1480af056:
  local_1b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.Data.ArrayNum = *(int *)((longlong)&pTVar8->ShadowedValue[0].Data.ArrayNum + lVar28);
  lVar30 = (longlong)local_1b8.Data.ArrayNum;
  pvVar6 = *(void **)((longlong)&pTVar8->ShadowedValue[0].Data.AllocatorInstance.Data + lVar28);
  if (local_1b8.Data.ArrayNum == 0) {
    local_1b8.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_1b8.Data.ArrayNum,0,(ForAnyElementType *)&local_1b8,local_1b8.Data.ArrayNum
               ,&local_1b8.Data.ArrayMax);
    memcpy(local_1b8.Data.AllocatorInstance.Data,pvVar6,lVar30 * 2);
  }
  iVar12 = ::FString::Find(&local_1b8,L",",1,IgnoreCase,FromStart,-1);
  if ((iVar12 == -1) &&
     (iVar12 = ::FString::Find(&local_1b8,L"=",1,IgnoreCase,FromStart,-1), iVar12 == -1)) {
    if (1 < local_1b8.Data.ArrayNum) {
      iVar12 = _wtoi((wchar_t *)local_1b8.Data.AllocatorInstance.Data);
      FVar9 = local_res10;
      if ((iVar12 == 0) ||
         (FVar13 = FNameEntryId::FromValidEName((EName)local_160), FVar24.Number = 0,
         FVar24.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar13.Value),
         FVar9 == FVar24)) {
        this->bRPCDoSDetection = iVar12 != 0;
      }
    }
  }
  else {
    local_1a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_1a8.ArrayNum = 0;
    local_1a8.ArrayMax = 0;
    ::FString::ParseIntoArray(&local_1b8,&local_1a8,L",",true);
    iVar12 = local_1a8.ArrayNum;
    pFVar26 = local_1a8.AllocatorInstance.Data + (longlong)local_1a8.ArrayNum * 0x10;
    FVar32.Data = local_1a8.AllocatorInstance.Data;
    while( true ) {
      if (local_1a8.ArrayNum != iVar12) {
        local_1e8 = 0;
        `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_1e8);
      }
      if (FVar32.Data == pFVar26) break;
      local_1e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1e0.ArrayNum = 0;
      local_1e0.ArrayMax = 0;
      ::FString::ParseIntoArray((FString *)FVar32.Data,&local_1e0,L"=",true);
      if (local_1e0.ArrayNum < 2) {
LAB_1480af2a2:
        bVar10 = false;
      }
      else {
        bVar11 = true;
        pFVar16 = ::FName::ToString(&local_res10,&local_f8);
        if ((local_1e0.ArrayNum < 1) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar14 = *(int *)(local_1e0.AllocatorInstance.Data + 8);
        iVar5 = (pFVar16->Data).ArrayNum;
        if (iVar14 == iVar5) {
          if (1 < iVar14) {
            iVar14 = FGenericPlatformStricmp::Stricmp
                               (*(wchar_t **)local_1e0.AllocatorInstance.Data,
                                (wchar_t *)(pFVar16->Data).AllocatorInstance.Data);
            bVar10 = iVar14 == 0;
            goto LAB_1480af24e;
          }
        }
        else {
          bVar10 = iVar5 + iVar14 == 1;
LAB_1480af24e:
          if (!bVar10) goto LAB_1480af2a2;
        }
        if ((local_1e0.ArrayNum < 2) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)(local_1e0.AllocatorInstance.Data + 0x18) < 2) goto LAB_1480af2a2;
        bVar10 = true;
      }
      if ((bVar11) &&
         (bVar11 = false, local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      if (bVar10) {
        if ((local_1e0.ArrayNum < 2) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        if (*(int *)(local_1e0.AllocatorInstance.Data + 0x18) == 0) {
          pwVar34 = L"";
        }
        else {
          pwVar34 = *(wchar_t **)(local_1e0.AllocatorInstance.Data + 0x10);
        }
        iVar14 = _wtoi(pwVar34);
        this->bRPCDoSDetection = iVar14 != 0;
      }
      DestructItems<FString,int>((FString *)local_1e0.AllocatorInstance.Data,local_1e0.ArrayNum);
      if (local_1e0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1e0.AllocatorInstance.Data);
      }
      FVar32.Data = FVar32.Data + 0x10;
    }
    DestructItems<FString,int>((FString *)local_1a8.AllocatorInstance.Data,local_1a8.ArrayNum);
    if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1a8.AllocatorInstance.Data);
    }
  }
  pTVar3 = &this->DetectionSeverity;
  DestructItems<FRPCDoSStateConfig,int>
            ((FRPCDoSStateConfig *)(pTVar3->AllocatorInstance).Data,
             (this->DetectionSeverity).ArrayNum);
  uVar35 = 0;
  (this->DetectionSeverity).ArrayNum = 0;
  if ((this->DetectionSeverity).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x78,8,0,&pTVar3->AllocatorInstance,0,&(this->DetectionSeverity).ArrayMax);
  }
  if (this->bRPCDoSDetection != false) {
    local_1e4 = 0;
    if (local_170 != (UObject *)0x0) {
      local_1c0 = *(uint *)&local_170[1].field_0x18;
      uVar20 = (ulonglong)(int)local_1c0;
      pFVar16 = *(FString **)&local_170[1].field_0x10;
      pFVar31 = pFVar16 + uVar20;
      local_178 = pFVar31;
      uVar35 = 0;
      while( true ) {
        if (*(int *)&local_170[1].field_0x18 != (int)uVar20) {
          local_1e7[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_1e7);
        }
        if (pFVar16 == pFVar31) break;
        pFVar21 = ::FString::FString(&local_e8,L"RPCDoSDetection");
        ::FString::ConcatFC(&local_138,pFVar21,L".");
        ::FString::ConcatFF(&local_198,&local_138,pFVar16);
        if (local_138.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_138.Data.AllocatorInstance.Data);
        }
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        FVar32.Data = (FScriptContainerElement *)L"";
        if (local_198.Data.ArrayNum != 0) {
          FVar32.Data = local_198.Data.AllocatorInstance.Data;
        }
        bVar11 = FConfigCacheIni::DoesSectionExist(GConfig,(wchar_t *)FVar32.Data,&GEngineIni);
        if (bVar11) {
          iVar12 = (this->DetectionSeverity).ArrayNum;
          if (iVar12 == (this->DetectionSeverity).ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x878,&pTVar3->AllocatorInstance,&(this->DetectionSeverity).ArrayMax
                               );
          }
          (this->DetectionSeverity).ArrayNum = iVar12 + 1;
          this_00 = (FRPCDoSStateConfig *)
                    ((pTVar3->AllocatorInstance).Data + (longlong)iVar12 * 0x78);
          DefaultConstructItems<FRPCDoSStateConfig,int>(this_00,1);
          pFVar21 = &this_00->SeverityCategory;
          if (pFVar21 != pFVar16) {
            iVar12 = (pFVar16->Data).ArrayNum;
            piVar1 = &(this_00->SeverityCategory).Data.ArrayMax;
            pFVar26 = (pFVar16->Data).AllocatorInstance.Data;
            iVar14 = *piVar1;
            (this_00->SeverityCategory).Data.ArrayNum = iVar12;
            if ((iVar12 == 0) && (iVar14 == 0)) {
              *piVar1 = 0;
              pFVar31 = local_178;
              uVar35 = local_1e4;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,iVar12,iVar14,(ForAnyElementType *)pFVar21,iVar12,piVar1);
              pFVar31 = local_178;
              uVar35 = local_1e4;
              if (iVar12 != 0) {
                memcpy((pFVar21->Data).AllocatorInstance.Data,pFVar26,(longlong)iVar12 * 2);
                pFVar31 = local_178;
                uVar35 = local_1e4;
              }
            }
          }
          pwVar34 = L"";
          if (GEngineIni.Data.ArrayNum != 0) {
            pwVar34 = (wchar_t *)GEngineIni.Data.AllocatorInstance.Data;
          }
          FVar32.Data = (FScriptContainerElement *)L"";
          if (local_198.Data.ArrayNum != 0) {
            FVar32.Data = local_198.Data.AllocatorInstance.Data;
          }
          bVar11 = FRPCDoSStateConfig::LoadStructConfig(this_00,(wchar_t *)FVar32.Data,pwVar34);
          if (bVar11) {
            cVar33 = this_00->HighestTimePeriod;
            local_1e4 = (int)*(short *)((longlong)&this_00->_padding_ + 6) + (int)cVar33;
            if ((int)local_1e4 < (int)uVar35) {
              local_1e4 = uVar35;
            }
            if (cVar33 < this->MaxRPCTrackingPeriod) {
              cVar33 = this->MaxRPCTrackingPeriod;
            }
            this->MaxRPCTrackingPeriod = cVar33;
            uVar35 = local_1e4;
          }
          else if (2 < (byte)LogNet._0_1_) {
            pFVar25 = &::LOG_Static;
            goto LAB_1480af5a0;
          }
        }
        else if (2 < (byte)LogNet._0_1_) {
          pFVar25 = &::LOG_Static;
LAB_1480af5a0:
          UE::Logging::Private::BasicLog<3>(pFVar25,(FLogCategoryBase *)&LogNet);
        }
        if (local_198.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_198.Data.AllocatorInstance.Data);
        }
        uVar20 = (ulonglong)local_1c0;
        pFVar16 = pFVar16 + 1;
      }
    }
    iVar12 = (this->DetectionSeverity).ArrayNum;
    if (iVar12 < 1) {
      if (2 < (byte)LogNet._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
      }
      this->bRPCDoSDetection = false;
    }
    else {
      cVar33 = this->ActiveState;
      uVar29 = 0;
      if (cVar33 < iVar12) {
        uVar29 = (uint)~(int)cVar33 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar26 = (this->DetectionSeverity).AllocatorInstance.Data;
      lVar28 = (longlong)cVar33 * 0x78;
      *(FScriptContainerElement *)&this->_padding_ = pFVar26[lVar28 + 8];
      *(FScriptContainerElement *)((longlong)&this->_padding_ + 1) = pFVar26[lVar28 + 9];
      *(FScriptContainerElement *)((longlong)&this->_padding_ + 2) = pFVar26[lVar28 + 10];
      *(FScriptContainerElement *)((longlong)&this->_padding_ + 3) = pFVar26[lVar28 + 0xb];
      *(undefined2 *)((longlong)&this->_padding_ + 4) = *(undefined2 *)(pFVar26 + lVar28 + 0xc);
      *(undefined2 *)((longlong)&this->_padding_ + 6) = *(undefined2 *)(pFVar26 + lVar28 + 0xe);
      *(undefined2 *)&this->_padding_ = *(undefined2 *)(pFVar26 + lVar28 + 0x10);
      *(undefined2 *)((longlong)&this->_padding_ + 2) = *(undefined2 *)(pFVar26 + lVar28 + 0x12);
      *(FScriptContainerElement *)((longlong)&this->_padding_ + 4) = pFVar26[lVar28 + 0x14];
      *(undefined2 *)&this->_padding_ = *(undefined2 *)(pFVar26 + lVar28 + 0x18);
      *(undefined2 *)((longlong)&this->_padding_ + 2) = *(undefined2 *)(pFVar26 + lVar28 + 0x1a);
      *(FScriptContainerElement *)((longlong)&this->_padding_ + 4) = pFVar26[lVar28 + 0x1c];
      *(undefined2 *)((longlong)&this->_padding_ + 6) = *(undefined2 *)(pFVar26 + lVar28 + 0x1e);
      *(undefined2 *)&this->_padding_ = *(undefined2 *)(pFVar26 + lVar28 + 0x20);
      (**(code **)(this->_padding_ + 8))(this);
      pTVar4 = &this->CounterPerSecHistory;
      iVar12 = (this->CounterPerSecHistory).ArrayNum;
      if (iVar12 < (int)uVar35) {
        iVar14 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x10,8,uVar35 - iVar12,&pTVar4->AllocatorInstance,
                            &(this->CounterPerSecHistory).ArrayNum,
                            &(this->CounterPerSecHistory).ArrayMax);
        DefaultConstructItems<FRPCDoSCounters,int>
                  ((pTVar4->AllocatorInstance).Data + (longlong)iVar14 * 0x10,uVar35 - iVar12);
      }
      else {
        if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
        }
        if ((int)uVar35 < iVar12) {
          uVar29 = iVar12 - uVar35;
          if (((int)(uVar29 | uVar35) < 0) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x458,
                                  L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                 ), bVar11)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (uVar29 != 0) {
            pFVar26 = (pTVar4->AllocatorInstance).Data + (longlong)(int)uVar35 * 0x10;
            iVar12 = ((this->CounterPerSecHistory).ArrayNum - uVar29) - uVar35;
            if (iVar12 != 0) {
              memmove(pFVar26,pFVar26 + (longlong)(int)uVar29 * 0x10,(longlong)iVar12 << 4);
            }
            iVar12 = (this->CounterPerSecHistory).ArrayNum - uVar29;
            (this->CounterPerSecHistory).ArrayNum = iVar12;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,&pTVar4->AllocatorInstance,iVar12,
                       &(this->CounterPerSecHistory).ArrayMax);
          }
        }
      }
    }
  }
  pwVar34 = L"";
  if (this->bRPCDoSDetection != false) {
    if ((this->ActiveRPCTracking).ArrayNum == 0) {
      (this->ActiveRPCTracking).ArrayNum = 0;
      if ((this->ActiveRPCTracking).ArrayMax != 0x80) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,0x80,&(this->ActiveRPCTracking).AllocatorInstance,0,
                   &(this->ActiveRPCTracking).ArrayMax);
      }
    }
    pTVar8 = CVarRPCDoSForcedRPCTracking.Ref;
    bVar11 = IsInParallelGameThread();
    if ((bVar11) || (bVar11 = IsInGameThread(), lVar28 = 0x10, bVar11)) {
      lVar28 = 0;
    }
    local_188.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.Data.ArrayNum = *(int *)((longlong)&pTVar8->ShadowedValue[0].Data.ArrayNum + lVar28);
    lVar30 = (longlong)local_188.Data.ArrayNum;
    pvVar6 = *(void **)((longlong)&pTVar8->ShadowedValue[0].Data.AllocatorInstance.Data + lVar28);
    if (local_188.Data.ArrayNum == 0) {
      local_188.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_188.Data.ArrayNum,0,(ForAnyElementType *)&local_188,
                 local_188.Data.ArrayNum,&local_188.Data.ArrayMax);
      memcpy(local_188.Data.AllocatorInstance.Data,pvVar6,lVar30 * 2);
    }
    if (1 < local_188.Data.ArrayNum) {
      local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1d0.ArrayNum = 0;
      local_1d0.ArrayMax = 0;
      ::FString::ParseIntoArray(&local_188,&local_1d0,L",",true);
      if ((local_1d0.ArrayNum < 1) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      if (*(int *)(local_1d0.AllocatorInstance.Data + 8) == 0) {
        pwVar27 = L"";
      }
      else {
        pwVar27 = *(wchar_t **)local_1d0.AllocatorInstance.Data;
      }
      pFVar22 = ::FName::FName(local_128,pwVar27);
      this->ForcedRPCTracking = *pFVar22;
      dVar36 = __real_3ff0000000000000;
      if (1 < local_1d0.ArrayNum) {
        if (*(int *)(local_1d0.AllocatorInstance.Data + 0x18) == 0) {
          pwVar27 = L"";
        }
        else {
          pwVar27 = *(wchar_t **)(local_1d0.AllocatorInstance.Data + 0x10);
        }
        dVar36 = _wtof(pwVar27);
        dVar36 = (double)(float)dVar36;
      }
      this->ForcedRPCTrackingChance = dVar36;
      iVar12 = local_1d0.ArrayNum;
      if (2 < local_1d0.ArrayNum) {
        if (*(int *)(local_1d0.AllocatorInstance.Data + 0x28) != 0) {
          pwVar34 = *(wchar_t **)(local_1d0.AllocatorInstance.Data + 0x20);
        }
        dVar37 = _wtof(pwVar34);
        dVar37 = (double)(float)dVar37;
        iVar12 = local_1d0.ArrayNum;
      }
      this->ForcedRPCTrackingLength = dVar37;
      DestructItems<FString,int>((FString *)local_1d0.AllocatorInstance.Data,iVar12);
      if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1d0.AllocatorInstance.Data);
      }
    }
    if (local_188.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.Data.AllocatorInstance.Data);
    }
  }
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  return;
}

// InitState @ 1480afb20

void __thiscall FRPCDoSDetection::InitState(FRPCDoSDetection *this,double param_1)

{
  byte bVar1;
  char cVar2;
  UFunction *pUVar3;
  longlong lVar4;
  longlong lVar5;
  
  cVar2 = *(char *)((longlong)&this->_padding_ + 3);
  if (this->bRPCTrackingEnabled != (bool)cVar2) {
    if (cVar2 != '\0') {
      this->bRPCTrackingEnabled = true;
      if (this->LastRPCTrackingClean == 0.0) {
        this->LastRPCTrackingClean = param_1;
      }
      if ((this->SequentialRPCScopePrivate)._padding_ != '\0') {
        bVar1 = (this->SequentialRPCScopePrivate).LightweightRPCTracking.Count;
        pUVar3 = (this->SequentialRPCScopePrivate).LightweightRPCTracking.RPC[0].Function;
        if (1 < (ulonglong)bVar1) {
          lVar4 = 0x10;
          lVar5 = 1;
          do {
            if (*(UFunction **)
                 ((longlong)
                  &(this->SequentialRPCScopePrivate).LightweightRPCTracking.RPC[0].Function + lVar4)
                != pUVar3) goto LAB_14809f6a1;
            lVar5 = lVar5 + 1;
            lVar4 = lVar4 + 0x10;
          } while (lVar5 < (longlong)(ulonglong)bVar1);
        }
        if (bVar1 != 0) {
          CheckRPCTracking(this,pUVar3,(FName)pUVar3->_padding_);
          return;
        }
LAB_14809f6a1:
        (this->SequentialRPCScopePrivate).bReceivedPacketRPCUnique = false;
        if ((this->SequentialRPCScopePrivate).LastReceivedRPCTimeCache == 0.0) {
          (this->SequentialRPCScopePrivate).LastReceivedRPCTimeCache = param_1;
        }
      }
      return;
    }
    this->bRPCTrackingEnabled = false;
  }
  return;
}

// NotifyClose @ 1480b9820

void __thiscall FRPCDoSDetection::NotifyClose(FRPCDoSDetection *this)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->RPCDoSAnalyticsData).Object != (FRPCDoSAnalyticsData *)0x0) {
    CachePlayerAddress(this);
    CachePlayerUID(this);
    ::FString::operator=(&(this->AnalyticsVars).PlayerIP,&this->CachedAddress);
    ::FString::operator=(&(this->AnalyticsVars).PlayerUID,&this->CachedPlayerUID);
    if ((this->RPCDoSAnalyticsData).Object == (FRPCDoSAnalyticsData *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FRPCDoSAnalyticsVars::CommitAnalytics
              (&this->AnalyticsVars,
               (FRPCDoSAnalyticsVars *)&((this->RPCDoSAnalyticsData).Object)->field_0x20);
  }
  return;
}

// PostReceivedRPCPacket @ 1480bcc50

void __thiscall FRPCDoSDetection::PostReceivedRPCPacket(FRPCDoSDetection *this,double param_1)

{
  double *pdVar1;
  short sVar2;
  code *pcVar3;
  bool bVar4;
  FTickScope *pFVar5;
  
  if (UE::Net::GRPCDoSScopeDebugging != 0) {
    if ((char)(this->TickScopePrivate)._padding_ == '\0') {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1192164650855169060>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                         ,0x3dc,"GRPCDoSScopeDebugging == 0 || TickScopePrivate.IsActive()");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (UE::Net::GRPCDoSScopeDebugging != 0) {
      if ((this->PacketScopePrivate)._padding_ == '\0') {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1192164650855169024>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                           ,0x400,"GRPCDoSScopeDebugging == 0 || PacketScopePrivate.IsActive()");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((UE::Net::GRPCDoSScopeDebugging != 0) &&
         ((this->SequentialRPCScopePrivate)._padding_ == '\0')) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1192164650855168929>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                           ,0x45f,
                           "GRPCDoSScopeDebugging == 0 || SequentialRPCScopePrivate.IsActive()");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  (this->TickScopePrivate).FrameCounter.AccumRPCTime =
       (param_1 - (this->PacketScopePrivate).ReceivedPacketStartTime) +
       (this->TickScopePrivate).FrameCounter.AccumRPCTime;
  if ((this->SequentialRPCScopePrivate).PostReceivedRPCCounter != (FRPCDoSCounters *)0x0) {
    if ((UE::Net::GRPCDoSScopeDebugging != 0) &&
       ((*(int *)&(this->RPCTracking).field_0x8 - *(int *)&(this->RPCTracking).field_0x34 < 1 ||
        ((this->ActiveRPCTracking).ArrayNum < 1)))) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_754547929099795481>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\RPCDoSDetection.cpp"
                         ,999,
                         "GRPCDoSScopeDebugging == 0 || (RPCTracking.Num() > 0 && ActiveRPCTracking.Num() > 0)"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((0 < *(int *)&(this->RPCTracking).field_0x8 - *(int *)&(this->RPCTracking).field_0x34) &&
       (0 < (this->ActiveRPCTracking).ArrayNum)) {
      PostSequentialRPC(this,PostPacket,param_1,
                        (this->SequentialRPCScopePrivate).PostReceivedRPCCounter,
                        (this->SequentialRPCScopePrivate).PostReceivedRPCTracking);
    }
  }
  if (param_1 < this->NextTimeQuotaCheck || param_1 == this->NextTimeQuotaCheck) goto LAB_1480bce46;
  pFVar5 = GetTickScope(this);
  sVar2 = *(short *)((longlong)&this->_padding_ + 6);
  pdVar1 = &(pFVar5->FrameCounter).AccumRPCTime;
  this->NextTimeQuotaCheck = param_1 + __real_3f747ae147ae147b;
  if ((sVar2 < 1) || (*pdVar1 <= (double)this->_padding_ && (double)this->_padding_ != *pdVar1)) {
    bVar4 = false;
  }
  else {
    bVar4 = true;
  }
  if (*(short *)((longlong)&this->_padding_ + 2) < 1) {
LAB_1480bce35:
    if (!bVar4) goto LAB_1480bce46;
  }
  else if (!bVar4) {
    bVar4 = (double)this->_padding_ <=
            this->CounterPerPeriodHistory[(longlong)*(char *)((longlong)&this->_padding_ + 4) + -1].
            AccumRPCTime + *pdVar1;
    goto LAB_1480bce35;
  }
  UpdateSeverity_Private(this,Escalate,TimeLimit);
LAB_1480bce46:
  if (UE::Net::GRPCDoSScopeDebugging != 0) {
    if ((this->SequentialRPCScopePrivate)._padding_ == '\0') {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_754547929099795464>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\RPCDoSDetection.cpp"
                         ,0x3f8,"GRPCDoSScopeDebugging == 0 || SequentialRPCScopePrivate.IsActive()"
                        );
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (UE::Net::GRPCDoSScopeDebugging != 0) {
      if ((this->PacketScopePrivate)._padding_ == '\0') {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_754547929099795463>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\RPCDoSDetection.cpp"
                           ,0x3f9,"GRPCDoSScopeDebugging == 0 || PacketScopePrivate.IsActive()");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((UE::Net::GRPCDoSScopeDebugging != 0) &&
         ((char)(this->TickScopePrivate)._padding_ == '\0')) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_754547929099795462>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\RPCDoSDetection.cpp"
                           ,0x3fa,"GRPCDoSScopeDebugging == 0 || TickScopePrivate.IsActive()");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
  }
  TScopeBase<FRPCDoSDetection::FSequentialRPCScope>::SetActive
            ((TScopeBase<FRPCDoSDetection::FSequentialRPCScope> *)&this->SequentialRPCScopePrivate,
             false);
  return;
}

// PostSequentialRPC @ 1480bcf20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FRPCDoSDetection::PostSequentialRPC
          (FRPCDoSDetection *this,EPostSequentialRPCType param_1,double param_2,
          FRPCDoSCounters *param_3,FRPCTrackingInfo *param_4)

{
  int *piVar1;
  TArray<TSharedPtr<FRPCAnalytics,1>,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  FName FVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FCPUTime FVar9;
  FRPCAnalytics *pFVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  TSharedPtr<FRPCAnalytics,1> *this_00;
  uint uVar13;
  TReferenceControllerBase<1> *pTVar14;
  longlong lVar15;
  uint uVar16;
  double dVar17;
  TReferenceControllerBase<1> *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  TSharedPtr<FRPCAnalytics,1> local_88;
  FRPCAnalytics *local_78;
  TReferenceControllerBase<1> *pTStack_70;
  FRPCAnalytics *local_68;
  TReferenceControllerBase<1> *pTStack_60;
  
  if (UE::Net::GRPCDoSScopeDebugging != 0) {
    if (((this->PacketScopePrivate)._padding_ == '\0') &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1192164650855169024>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                           ,0x400,"GRPCDoSScopeDebugging == 0 || PacketScopePrivate.IsActive()"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if (((UE::Net::GRPCDoSScopeDebugging != 0) &&
        ((this->SequentialRPCScopePrivate)._padding_ == '\0')) &&
       (bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1192164650855168929>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                           ,0x45f,
                           "GRPCDoSScopeDebugging == 0 || SequentialRPCScopePrivate.IsActive()"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  dVar17 = (this->SequentialRPCScopePrivate).LastReceivedRPCTimeCache;
  if (dVar17 == 0.0) {
    dVar17 = (this->PacketScopePrivate).ReceivedPacketStartTime;
  }
  dVar17 = (param_2 - dVar17) + param_3->AccumRPCTime;
  param_3->AccumRPCTime = dVar17;
  if (this->bRPCDoSAnalytics == false) {
    return;
  }
  pTVar2 = &(this->AnalyticsVars).RPCTrackingAnalytics;
  iVar8 = (this->AnalyticsVars).MaxRPCAnalytics;
  iVar3 = (this->AnalyticsVars).RPCTrackingAnalytics.ArrayNum;
  if (((iVar3 != iVar8) ||
      (this->AnalyticsMinTimePerSecThreshold <= dVar17 &&
       dVar17 != this->AnalyticsMinTimePerSecThreshold)) &&
     ((this_00 = &param_4->RPCTrackingAnalyticsEntry, this_00->Object == (FRPCAnalytics *)0x0 ||
      (iVar3 == iVar8)))) {
    pTVar14 = (param_4->RPCTrackingAnalyticsEntry).SharedReferenceCount.ReferenceController;
    if ((pTVar14 != (TReferenceControllerBase<1> *)0x0) &&
       (pTVar14->SharedReferenceCount == (atomic<int>)0x1)) {
      local_88.Object = (FRPCAnalytics *)0x0;
      local_88.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (this_00 != &local_88) {
        this_00->Object = (FRPCAnalytics *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(param_4->RPCTrackingAnalyticsEntry).SharedReferenceCount,
                   &local_88.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
    }
    if (this_00->Object == (FRPCAnalytics *)0x0) {
      iVar11 = (this->AnalyticsVars).RPCTrackingAnalytics.ArrayNum;
      uVar13 = 0;
      uVar16 = 0xffffffff;
      if (0 < iVar11) {
        lVar15 = 0;
        do {
          uVar7 = 0;
          if ((int)uVar13 < iVar11) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar12 = (pTVar2->AllocatorInstance).Data;
          if ((*(longlong *)(pFVar12 + lVar15) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValid()",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x458,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar10 = *(FRPCAnalytics **)(pFVar12 + lVar15);
          if (pFVar10->RPCName == (this->SequentialRPCScopePrivate).PostReceivedRPCName) {
            pTVar14 = *(TReferenceControllerBase<1> **)(pFVar12 + lVar15 + 8);
            if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_78 = this_00->Object;
            pTStack_70 = (param_4->RPCTrackingAnalyticsEntry).SharedReferenceCount.
                         ReferenceController;
            this_00->Object = pFVar10;
            (param_4->RPCTrackingAnalyticsEntry).SharedReferenceCount.ReferenceController = pTVar14;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_70);
            break;
          }
          if ((uVar16 == 0xffffffff) && (pFVar10->MaxTimePerSec < param_3->AccumRPCTime)) {
            uVar16 = uVar13;
          }
          iVar11 = (this->AnalyticsVars).RPCTrackingAnalytics.ArrayNum;
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 0x10;
        } while ((int)uVar13 < iVar11);
      }
      if (this_00->Object == (FRPCAnalytics *)0x0) {
        if (uVar16 == 0xffffffff) {
          if ((iVar3 == iVar8) ||
             (uVar16 = (this->AnalyticsVars).RPCTrackingAnalytics.ArrayNum, uVar16 == 0xffffffff))
          goto LAB_1480bd232;
        }
        else if (iVar3 == iVar8) {
          iVar8 = (this->AnalyticsVars).RPCTrackingAnalytics.ArrayNum;
          uVar7 = iVar8 - 1;
          uVar13 = 0;
          if (0 < (int)uVar7) {
            uVar13 = uVar7;
          }
          uVar7 = 0;
          if ((int)uVar13 < iVar8) {
            uVar7 = ~uVar13 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar12 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x10;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (*(TReferenceControllerBase<1> **)(pFVar12 + 8));
          iVar8 = (this->AnalyticsVars).RPCTrackingAnalytics.ArrayNum + ~uVar13;
          if (iVar8 != 0) {
            memmove(pFVar12,pFVar12 + 0x10,(longlong)iVar8 << 4);
          }
          piVar1 = &(this->AnalyticsVars).RPCTrackingAnalytics.ArrayNum;
          *piVar1 = *piVar1 + -1;
        }
        pTStack_90 = ::operator_new(0x68);
        pTVar14 = (TReferenceControllerBase<1> *)0x0;
        if (pTStack_90 == (TReferenceControllerBase<1> *)0x0) {
          local_98 = ___xmm_00000000000000000000000000000010;
          pTStack_90 = _UNK_150651568;
        }
        else {
          pTStack_90->SharedReferenceCount = (atomic<int>)0x1;
          pTStack_90->WeakReferenceCount = (atomic<int>)0x1;
          pTStack_90->_padding_ =
               (longlong)
               &___7__TIntrusiveReferenceController_UFRPCAnalytics___00_SharedPointerInternals__6B_;
          pTStack_90[1]._padding_ = 0;
          pTStack_90[1].SharedReferenceCount = (atomic<int>)0x0;
          pTStack_90[1].WeakReferenceCount = (atomic<int>)0x0;
          pTStack_90[2]._padding_ = 0;
          pTStack_90[2].SharedReferenceCount = (atomic<int>)0x0;
          pTStack_90[2].WeakReferenceCount = (atomic<int>)0x0;
          pTStack_90[3]._padding_ = 0;
          pTStack_90[3].SharedReferenceCount = (atomic<int>)0x0;
          pTStack_90[3].WeakReferenceCount = (atomic<int>)0x0;
          pTStack_90[4]._padding_ = 0;
          pTStack_90[4].SharedReferenceCount = (atomic<int>)0x0;
          pTStack_90[4].WeakReferenceCount = (atomic<int>)0x0;
          pTStack_90[5]._padding_ = 0;
          pTStack_90[5].SharedReferenceCount = (atomic<int>)0x0;
          pTStack_90[5].WeakReferenceCount = (atomic<int>)0x0;
          pTStack_90[6]._padding_ = 0;
          pTStack_90[2]._padding_ = 0;
          pTStack_90[3]._padding_ = 0;
          if ((pTStack_90 + 1 == (TReferenceControllerBase<1> *)0x0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          LOCK();
          pTStack_90->SharedReferenceCount =
               (atomic<int>)((int)pTStack_90->SharedReferenceCount + 1);
          UNLOCK();
          pTVar14 = pTStack_90;
          local_98 = pTStack_90 + 1;
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar14)
        ;
        pFVar12 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar12 <= (FScriptContainerElement *)&local_98) &&
            ((FScriptContainerElement *)&local_98 <
             pFVar12 + (longlong)(this->AnalyticsVars).RPCTrackingAnalytics.ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar8 = (this->AnalyticsVars).RPCTrackingAnalytics.ArrayNum;
        piVar1 = &(this->AnalyticsVars).RPCTrackingAnalytics.ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,&pTVar2->AllocatorInstance,piVar1);
        }
        pFVar12 = (pTVar2->AllocatorInstance).Data;
        (this->AnalyticsVars).RPCTrackingAnalytics.ArrayNum = iVar8 + 1;
        lVar15 = (longlong)(int)uVar16 * 0x10;
        pFVar12 = pFVar12 + lVar15;
        memmove(pFVar12 + 0x10,pFVar12,(longlong)(int)(iVar8 - uVar16) << 4);
        pFVar12 = (pTVar2->AllocatorInstance).Data;
        *(TReferenceControllerBase<1> **)(pFVar12 + lVar15) = local_98;
        *(TReferenceControllerBase<1> **)(pFVar12 + lVar15 + 8) = pTStack_90;
        pTStack_90 = (TReferenceControllerBase<1> *)0x0;
        local_98 = (TReferenceControllerBase<1> *)0x0;
        pTVar14 = *(TReferenceControllerBase<1> **)(pFVar12 + lVar15 + 8);
        pFVar10 = *(FRPCAnalytics **)(pFVar12 + lVar15);
        if (pTVar14 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar14->SharedReferenceCount = (atomic<int>)((int)pTVar14->SharedReferenceCount + 1);
          UNLOCK();
        }
        local_68 = this_00->Object;
        pTStack_60 = (param_4->RPCTrackingAnalyticsEntry).SharedReferenceCount.ReferenceController;
        this_00->Object = pFVar10;
        (param_4->RPCTrackingAnalyticsEntry).SharedReferenceCount.ReferenceController = pTVar14;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_60);
        FVar4 = (this->SequentialRPCScopePrivate).PostReceivedRPCName;
        pFVar10 = TSharedPtr<FRPCAnalytics,1>::operator->(this_00);
        pFVar10->RPCName = FVar4;
        pFVar10 = TSharedPtr<FRPCAnalytics,1>::operator->(this_00);
        ::FString::operator=(&pFVar10->PlayerIP,&this->CachedAddress);
        pFVar10 = TSharedPtr<FRPCAnalytics,1>::operator->(this_00);
        ::FString::operator=(&pFVar10->PlayerUID,&this->CachedPlayerUID);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (pTStack_90);
      }
    }
  }
LAB_1480bd232:
  pFVar10 = (param_4->RPCTrackingAnalyticsEntry).Object;
  if (pFVar10 != (FRPCAnalytics *)0x0) {
    iVar8 = param_3->RPCCounter;
    if (param_3->RPCCounter < pFVar10->MaxCountPerSec) {
      iVar8 = pFVar10->MaxCountPerSec;
    }
    pFVar10->MaxCountPerSec = iVar8;
    dVar17 = param_3->AccumRPCTime;
    if (pFVar10->MaxTimePerSec <= dVar17 && dVar17 != pFVar10->MaxTimePerSec) {
      pFVar10->MaxTimePerSec = dVar17;
      FVar9 = FWindowsPlatformTime::GetThreadCPUTime();
      pFVar10->MaxTimeGameThreadCPU = (uchar)(int)*(float *)((longlong)FVar9 + 4);
    }
    if (param_4->BlockState == Blocked) {
      pFVar10->BlockedCount =
           pFVar10->BlockedCount + (this->SequentialRPCScopePrivate).PostReceivedRPCBlockCount;
    }
    if (((param_1 == PostPacket) &&
        ((this->SequentialRPCScopePrivate).bReceivedPacketRPCUnique != false)) &&
       (dVar17 = param_2 - (this->PacketScopePrivate).ReceivedPacketStartTime,
       pFVar10->MaxSinglePacketRPCTime <= dVar17 && dVar17 != pFVar10->MaxSinglePacketRPCTime)) {
      pFVar10->MaxSinglePacketRPCTime = dVar17;
      pFVar10->SinglePacketRPCCount = (this->SequentialRPCScopePrivate).ReceivedPacketRPCCount;
      FVar9 = FWindowsPlatformTime::GetThreadCPUTime();
      pFVar10->SinglePacketGameThreadCPU = (uchar)(int)*(float *)((longlong)FVar9 + 4);
    }
  }
  return;
}

// PostTickDispatch @ 1480bd5b0

void __thiscall FRPCDoSDetection::PostTickDispatch(FRPCDoSDetection *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  
  if ((UE::Net::GRPCDoSScopeDebugging != 0) && ((char)(this->TickScopePrivate)._padding_ == '\0')) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1192164650855169060>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                       ,0x3dc,"GRPCDoSScopeDebugging == 0 || TickScopePrivate.IsActive()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar1 = (this->TickScopePrivate).FrameCounter.RPCCounter;
  if (0 < iVar1) {
    (this->SecondCounter).RPCCounter = (this->SecondCounter).RPCCounter + iVar1;
    (this->SecondCounter).AccumRPCTime =
         (this->TickScopePrivate).FrameCounter.AccumRPCTime + (this->SecondCounter).AccumRPCTime;
  }
  if ((UE::Net::GRPCDoSScopeDebugging != 0) && ((char)(this->TickScopePrivate)._padding_ == '\0')) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1192164650855169127>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                       ,0x399,"GRPCDoSScopeDebugging == 0 || bScopeActive != bInVal");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined1 *)&(this->TickScopePrivate)._padding_ = 0;
  (this->TickScopePrivate).FrameCounter.RPCCounter = 0;
  (this->TickScopePrivate).FrameCounter.AccumRPCTime = 0.0;
  return;
}

// PreTickDispatch @ 1480bd670

void __thiscall FRPCDoSDetection::PreTickDispatch(FRPCDoSDetection *this,double param_1)

{
  double dVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  ERPCDoSSeverityUpdate EVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  ERPCDoSEscalateReason EVar13;
  double dVar14;
  undefined1 local_res8 [8];
  
  if (((UE::Net::GRPCDoSScopeDebugging != 0) && ((char)(this->TickScopePrivate)._padding_ == '\x01')
      ) && (bVar7 = UE::Assert::Private::ExecCheckImplInternal
                              (&bGEnsureHasExecuted<_1192164650855169127>,false,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\Net\\RPCDoSDetection.h"
                               ,0x399,"GRPCDoSScopeDebugging == 0 || bScopeActive != bInVal"), bVar7
           )) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  *(undefined1 *)&(this->TickScopePrivate)._padding_ = 1;
  (this->TickScopePrivate).FrameCounter.RPCCounter = 0;
  (this->TickScopePrivate).FrameCounter.AccumRPCTime = 0.0;
  if (this->bRPCDoSDetection == false) {
    this->LastPreTickDispatchTime = param_1;
    return;
  }
  dVar14 = param_1 + __real_3f747ae147ae147b;
  if (param_1 + __real_3f747ae147ae147b <= this->NextTimeQuotaCheck) {
    dVar14 = this->NextTimeQuotaCheck;
  }
  this->NextTimeQuotaCheck = dVar14;
  if ((0 < this->HitchTimeQuotaMS) && (dVar14 = this->ReceivedPacketEndTime, dVar14 != 0.0)) {
    dVar1 = this->LastPreTickDispatchTime;
    if (dVar14 < dVar1) {
      this->ReceivedPacketEndTime = dVar1;
      dVar14 = dVar1;
    }
    if ((int)((param_1 - dVar14) * __real_408f400000000000) < this->HitchTimeQuotaMS) {
      if ((this->bHitchSuspendDetection != false) &&
         (this->HitchSuspendDetectionTimeMS <
          (int)((param_1 - this->HitchSuspendDetectionStartTime) * __real_408f400000000000))) {
        this->bHitchSuspendDetection = false;
      }
    }
    else {
      this->HitchSuspendDetectionStartTime = param_1;
      this->bHitchSuspendDetection = true;
    }
  }
  if ('\0' < this->ActiveState) {
    sVar3 = *(short *)((longlong)&this->_padding_ + 6);
    dVar14 = param_1 - this->LastMetEscalationConditions;
    if ((sVar3 < 1) || (dVar14 <= (double)(int)sVar3)) {
      sVar3 = (short)this->_padding_;
      if ((sVar3 < 1) || (dVar14 <= (double)(int)sVar3)) goto LAB_1480bd7df;
      EVar13 = AutoEscalate;
      EVar10 = AutoEscalate;
    }
    else {
      EVar13 = Deescalate;
      EVar10 = Deescalate;
    }
    UpdateSeverity_Private(this,EVar10,EVar13);
  }
LAB_1480bd7df:
  if ((this->ForcedRPCTrackingEndTime != 0.0) && (0.0 < param_1 - this->ForcedRPCTrackingEndTime)) {
    if (*(char *)((longlong)&this->_padding_ + 3) == '\0') {
      this->bRPCTrackingEnabled = false;
    }
    this->ForcedRPCTrackingEndTime = 0.0;
  }
  if (param_1 - this->LastPerSecQuotaBegin <= __real_3ff0000000000000) {
    this->LastPreTickDispatchTime = param_1;
  }
  else {
    if (((this->CounterPerSecHistory).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("CounterPerSecHistory.Num() > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\RPCDoSDetection.cpp"
                           ,0x335,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar4 = (this->CounterPerSecHistory).ArrayNum;
    uVar8 = this->LastCounterPerSecHistoryIdx + 1;
    uVar6 = *(undefined8 *)&this->SecondCounter;
    dVar14 = (this->SecondCounter).AccumRPCTime;
    uVar9 = 0;
    if ((int)uVar8 < iVar4) {
      uVar9 = uVar8;
    }
    this->LastCounterPerSecHistoryIdx = uVar9;
    uVar8 = 0;
    if ((int)uVar9 < iVar4) {
      uVar8 = ~uVar9 >> 0x1f;
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
    pFVar12 = (this->CounterPerSecHistory).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x10;
    *(undefined8 *)pFVar12 = uVar6;
    *(double *)(pFVar12 + 8) = dVar14;
    cVar2 = this->ActiveState;
    (this->SecondCounter).RPCCounter = 0;
    (this->SecondCounter).AccumRPCTime = 0.0;
    this->LastPerSecQuotaBegin = param_1;
    uVar9 = 0;
    if ((int)cVar2 < (this->DetectionSeverity).ArrayNum) {
      uVar9 = (uint)~(int)cVar2 >> 0x1f;
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
    RecalculatePeriodHistory
              (this,(TArray<signed_char,TSizedDefaultAllocator<32>_> *)
                    ((this->DetectionSeverity).AllocatorInstance.Data +
                    (longlong)cVar2 * 0x78 + 0x60),&this->CounterPerPeriodHistory,-1);
    this->SecondsIncrementer = this->SecondsIncrementer + '\x01';
    dVar14 = __real_4014000000000000;
    if ((0 < (this->ActiveRPCTracking).ArrayNum) &&
       (uVar9 = rand(),
       (double)((float)(uVar9 & 0x7fff) * __real_38000100) * dVar14 + __real_403e000000000000 <
       param_1 - this->LastRPCTrackingClean)) {
      ClearStaleRPCTracking(this,param_1);
    }
    if (((this->bRPCTrackingEnabled == false) ||
        ((this->AnalyticsVars).RPCTrackingAnalytics.ArrayNum !=
         (this->AnalyticsVars).MaxRPCAnalytics)) ||
       (uVar9 = rand(),
       param_1 - this->LastAnalyticsThresholdRecalc <=
       (double)((float)(uVar9 & 0x7fff) * __real_38000100) * dVar14 + dVar14)) {
      this->LastPreTickDispatchTime = param_1;
    }
    else {
      this->LastAnalyticsThresholdRecalc = param_1;
      this->AnalyticsMinTimePerSecThreshold = -1.0;
      pFVar12 = (this->AnalyticsVars).RPCTrackingAnalytics.AllocatorInstance.Data;
      iVar4 = (this->AnalyticsVars).RPCTrackingAnalytics.ArrayNum;
      pFVar11 = pFVar12 + (longlong)iVar4 * 0x10;
      while( true ) {
        if ((this->AnalyticsVars).RPCTrackingAnalytics.ArrayNum != iVar4) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<TSharedPtr<FRPCAnalytics,1>,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res8);
        }
        if (pFVar12 == pFVar11) break;
        if ((*(longlong *)pFVar12 == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        if ((this->AnalyticsMinTimePerSecThreshold < 0.0) ||
           (*(double *)(*(longlong *)pFVar12 + 0x10) < this->AnalyticsMinTimePerSecThreshold)) {
          this->AnalyticsMinTimePerSecThreshold = *(double *)(*(longlong *)pFVar12 + 0x10);
        }
        pFVar12 = pFVar12 + 0x10;
      }
      this->LastPreTickDispatchTime = param_1;
    }
  }
  return;
}

// RecalculatePeriodHistory @ 1480bf910

void __thiscall
FRPCDoSDetection::RecalculatePeriodHistory
          (FRPCDoSDetection *this,TArray<signed_char,TSizedDefaultAllocator<32>_> *param_1,
          FRPCDoSCounters (*param_2) [16],int param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement FVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  undefined1 local_res20 [8];
  
  if (param_3 == -1) {
    param_3 = this->LastCounterPerSecHistoryIdx;
  }
  uVar4 = param_1->ArrayNum;
  uVar10 = (ulonglong)(int)uVar4;
  pFVar12 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar12 + uVar10;
  do {
    if (param_1->ArrayNum != (int)uVar10) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<signed_char_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar12 == pFVar2) {
      return;
    }
    FVar3 = *pFVar12;
    iVar13 = 0;
    param_2[-1][(longlong)(char)FVar3 + 0xf].RPCCounter = 0;
    param_2[-1][(longlong)(char)FVar3 + 0xf].AccumRPCTime = 0.0;
    uVar7 = param_3;
    if (0 < (char)FVar3) {
      do {
        piVar1 = &(this->CounterPerSecHistory).ArrayNum;
        uVar11 = uVar7;
        if ((int)uVar7 < 0) {
          uVar11 = (*piVar1 - iVar13) + param_3;
        }
        if ((((int)uVar11 < 0) || (*piVar1 <= (int)uVar11)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("PerSecHistoryIdx >= 0 && PerSecHistoryIdx < CounterPerSecHistory.Num()"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\RPCDoSDetection.cpp"
                               ,0x4cb,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar9 = 0;
        if ((int)uVar11 < (this->CounterPerSecHistory).ArrayNum) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar5 = (this->CounterPerSecHistory).AllocatorInstance.Data;
        iVar13 = iVar13 + 1;
        param_2[-1][(longlong)(char)FVar3 + 0xf].RPCCounter =
             param_2[-1][(longlong)(char)FVar3 + 0xf].RPCCounter +
             *(int *)(pFVar5 + (longlong)(int)uVar11 * 0x10);
        param_2[-1][(longlong)(char)FVar3 + 0xf].AccumRPCTime =
             *(double *)(pFVar5 + (longlong)(int)uVar11 * 0x10 + 8) +
             param_2[-1][(longlong)(char)FVar3 + 0xf].AccumRPCTime;
        uVar7 = uVar7 - 1;
      } while (iVar13 < (char)FVar3);
    }
    pFVar12 = pFVar12 + 1;
    uVar10 = (ulonglong)uVar4;
  } while( true );
}

// SetAddressFunc @ 1480d2800

void __thiscall
FRPCDoSDetection::SetAddressFunc
          (FRPCDoSDetection *this,TUniqueFunction<FString___cdecl(void)> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)&this->AddressFunc;
  uVar3 = *(undefined8 *)&(this->AddressFunc).field_0x8;
  uVar4 = *(undefined8 *)&(this->AddressFunc).field_0x10;
  uVar5 = *(undefined8 *)&(this->AddressFunc).field_0x18;
  uVar6 = *(undefined8 *)&(this->AddressFunc).field_0x20;
  uVar7 = *(undefined8 *)&(this->AddressFunc).field_0x28;
  *(undefined8 *)&this->AddressFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->AddressFunc).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->AddressFunc).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->AddressFunc).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(this->AddressFunc).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(this->AddressFunc).field_0x28 = uVar1;
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)&param_1->field_0x8 = uVar3;
  *(undefined8 *)&param_1->field_0x10 = uVar4;
  *(undefined8 *)&param_1->field_0x18 = uVar5;
  *(undefined8 *)&param_1->field_0x20 = uVar6;
  *(undefined8 *)&param_1->field_0x28 = uVar7;
  if (1 < (this->CachedAddress).Data.ArrayNum) {
    ::FString::operator=(&this->CachedAddress,L"");
    CachePlayerAddress(this);
    return;
  }
  return;
}

// SetKickPlayerFunc @ 1480d35c0

void __thiscall
FRPCDoSDetection::SetKickPlayerFunc
          (FRPCDoSDetection *this,TUniqueFunction<void___cdecl(void)> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)&this->KickPlayerFunc;
  uVar3 = *(undefined8 *)&(this->KickPlayerFunc).field_0x8;
  uVar4 = *(undefined8 *)&(this->KickPlayerFunc).field_0x10;
  uVar5 = *(undefined8 *)&(this->KickPlayerFunc).field_0x18;
  uVar6 = *(undefined8 *)&(this->KickPlayerFunc).field_0x20;
  uVar7 = *(undefined8 *)&(this->KickPlayerFunc).field_0x28;
  *(undefined8 *)&this->KickPlayerFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->KickPlayerFunc).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->KickPlayerFunc).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->KickPlayerFunc).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(this->KickPlayerFunc).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(this->KickPlayerFunc).field_0x28 = uVar1;
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)&param_1->field_0x8 = uVar3;
  *(undefined8 *)&param_1->field_0x10 = uVar4;
  *(undefined8 *)&param_1->field_0x18 = uVar5;
  *(undefined8 *)&param_1->field_0x20 = uVar6;
  *(undefined8 *)&param_1->field_0x28 = uVar7;
  return;
}

// SetPlayerUIDFunc @ 1480d3880

void __thiscall
FRPCDoSDetection::SetPlayerUIDFunc
          (FRPCDoSDetection *this,TUniqueFunction<FString___cdecl(void)> *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)&param_1->field_0x8;
  uVar2 = *(undefined8 *)&this->PlayerUIDFunc;
  uVar3 = *(undefined8 *)&(this->PlayerUIDFunc).field_0x8;
  uVar4 = *(undefined8 *)&(this->PlayerUIDFunc).field_0x10;
  uVar5 = *(undefined8 *)&(this->PlayerUIDFunc).field_0x18;
  uVar6 = *(undefined8 *)&(this->PlayerUIDFunc).field_0x20;
  uVar7 = *(undefined8 *)&(this->PlayerUIDFunc).field_0x28;
  *(undefined8 *)&this->PlayerUIDFunc = *(undefined8 *)param_1;
  *(undefined8 *)&(this->PlayerUIDFunc).field_0x8 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x18;
  *(undefined8 *)&(this->PlayerUIDFunc).field_0x10 = *(undefined8 *)&param_1->field_0x10;
  *(undefined8 *)&(this->PlayerUIDFunc).field_0x18 = uVar1;
  uVar1 = *(undefined8 *)&param_1->field_0x28;
  *(undefined8 *)&(this->PlayerUIDFunc).field_0x20 = *(undefined8 *)&param_1->field_0x20;
  *(undefined8 *)&(this->PlayerUIDFunc).field_0x28 = uVar1;
  *(undefined8 *)param_1 = uVar2;
  *(undefined8 *)&param_1->field_0x8 = uVar3;
  *(undefined8 *)&param_1->field_0x10 = uVar4;
  *(undefined8 *)&param_1->field_0x18 = uVar5;
  *(undefined8 *)&param_1->field_0x20 = uVar6;
  *(undefined8 *)&param_1->field_0x28 = uVar7;
  if (1 < (this->CachedPlayerUID).Data.ArrayNum) {
    ::FString::operator=(&this->CachedPlayerUID,L"");
    CachePlayerUID(this);
    return;
  }
  return;
}

// UpdateSeverity_Private @ 1480e1bc0

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRPCDoSDetection::UpdateSeverity_Private
          (FRPCDoSDetection *this,ERPCDoSSeverityUpdate param_1,ERPCDoSEscalateReason param_2)

{
  FName *pFVar1;
  double *pdVar2;
  double dVar3;
  char cVar4;
  char cVar5;
  schar sVar6;
  short sVar7;
  FScriptContainerElement *pFVar8;
  longlong *plVar9;
  code *pcVar10;
  TConsoleVariableData<int> *pTVar11;
  bool bVar12;
  uint uVar13;
  ulonglong uVar14;
  FTickScope *pFVar15;
  FRPCDoSAnalyticsData *pFVar16;
  FSequentialRPCScope *pFVar17;
  FPacketScope *pFVar18;
  void *pvVar19;
  FString *pFVar20;
  size_t sVar21;
  undefined8 uVar22;
  uint uVar23;
  longlong lVar24;
  longlong *plVar25;
  longlong lVar26;
  ulong64 uVar27;
  int iVar28;
  wchar_t *_Str;
  ForAnyElementType this_00;
  int iVar29;
  ulonglong uVar30;
  FScriptContainerElement *pFVar31;
  int iVar32;
  bool bVar33;
  double dVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined1 auStackY_1238 [32];
  FIdentityFunctor local_11e6 [2];
  int local_11e4;
  uint local_11e0;
  undefined1 local_11dc [4];
  TArray<FName,TSizedDefaultAllocator<32>_> local_11d8;
  FScriptContainerElement *local_11c8;
  FScriptContainerElement *local_11c0;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *local_11b8;
  LARGE_INTEGER local_11b0;
  FRPCDoSDetection *local_11a8;
  FString local_11a0;
  TStringBuilderBase<wchar_t> local_1188;
  wchar_t local_1168 [2040];
  int aiStack_178 [2];
  double dStack_170;
  FRPCDoSCounters local_168;
  undefined4 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined8 local_70;
  ulonglong local_68;
  undefined8 uStack_30;
  
  pTVar11 = CVarAllowRPCDoSDetectionKicking.Ref;
  uStack_30 = 0x1480e1bde;
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_1238;
  bVar33 = param_1 < Deescalate;
  iVar28 = (this->DetectionSeverity).ArrayNum;
  iVar32 = (int)this->ActiveState + (uint)bVar33 * 2;
  if (iVar32 + -1 < iVar28 + -1) {
    iVar28 = iVar32;
  }
  uVar30 = 0;
  if (0 < (int)(iVar28 - 1U)) {
    uVar30 = (ulonglong)(iVar28 - 1U);
  }
  uVar13 = (uint)uVar30;
  local_11e0 = uVar13;
  local_11a8 = this;
  bVar12 = IsInParallelGameThread();
  if (!bVar12) {
    bVar12 = IsInGameThread();
    uVar14 = 4;
    if (!bVar12) goto LAB_1480e1c64;
  }
  uVar14 = 0;
LAB_1480e1c64:
  local_11e4 = *(int *)((longlong)pTVar11->ShadowedValue + uVar14);
  uVar23 = 0;
  if ((int)uVar13 < (this->DetectionSeverity).ArrayNum) {
    uVar23 = ~uVar13 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar12)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  if ((((this->DetectionSeverity).AllocatorInstance.Data[(longlong)(int)uVar13 * 0x78 + 10] ==
        (FScriptContainerElement)0x0) || (local_11e4 != 0)) && (uVar13 != (int)this->ActiveState)) {
    QueryPerformanceCounter(&local_11b0);
    dVar34 = (double)local_11b0.QuadPart * FGenericPlatformTime::SecondsPerCycle +
             __real_4170000000000000;
    CachePlayerAddress(this);
    CachePlayerUID(this);
    pFVar15 = GetTickScope(this);
    if (bVar33) {
      this->LastMetEscalationConditions = dVar34;
    }
    else {
      while( true ) {
        uVar13 = (uint)uVar30;
        if ((int)uVar13 < 1) break;
        uVar23 = 0;
        if ((int)(uVar13 - 1) < (this->DetectionSeverity).ArrayNum) {
          uVar23 = -uVar13 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar31 = (this->DetectionSeverity).AllocatorInstance.Data;
        lVar26 = (longlong)(int)uVar13 * 0x78;
        uVar23 = 0;
        if ((int)uVar13 < (this->DetectionSeverity).ArrayNum) {
          uVar23 = ~uVar13 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar8 = (this->DetectionSeverity).AllocatorInstance.Data;
        lVar24 = (longlong)(int)uVar13 * 0x78;
        sVar7 = *(short *)(pFVar8 + lVar24 + 0x1e);
        local_11b8 = (TArray<signed_char,TSizedDefaultAllocator<32>_> *)(pFVar8 + lVar24 + 0x60);
        local_11c8 = (FScriptContainerElement *)CONCAT44(local_11c8._4_4_,(int)sVar7);
        memset(&local_168,0,0x100);
        local_168.AccumRPCTime = 0.0;
        local_150 = 0;
        local_140 = 0;
        local_130 = 0;
        local_120 = 0;
        local_110 = 0;
        local_100 = 0;
        local_f0 = 0;
        local_e0 = 0;
        local_d0 = 0;
        local_c0 = 0;
        local_b0 = 0;
        local_a0 = 0;
        local_90 = 0;
        local_80 = 0;
        local_70 = 0;
        local_158 = 0;
        local_148 = 0;
        local_138 = 0;
        local_128 = 0;
        local_118 = 0;
        local_108 = 0;
        local_f8 = 0;
        local_e8 = 0;
        local_d8 = 0;
        local_c8 = 0;
        local_b8 = 0;
        local_a8 = 0;
        local_98 = 0;
        local_88 = 0;
        local_78 = 0;
        if (((this->CounterPerSecHistory).ArrayNum < (int)sVar7) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("CounterPerSecHistory.Num() >= CurStateCooloffTime",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\RPCDoSDetection.cpp"
                                ,0x223,L""), bVar12)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        iVar32 = 0;
        if (0 < sVar7) {
          do {
            iVar28 = this->LastCounterPerSecHistoryIdx - iVar32;
            if ((((iVar28 < 0) &&
                 (iVar28 = iVar28 + (this->CounterPerSecHistory).ArrayNum, iVar28 < 0)) ||
                ((this->CounterPerSecHistory).ArrayNum <= iVar28)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("StartIdx >= 0 && StartIdx < CounterPerSecHistory.Num()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Net\\RPCDoSDetection.cpp"
                                    ,0x22c,L""), bVar12)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            RecalculatePeriodHistory(this,local_11b8,(FRPCDoSCounters (*) [16])&local_168,iVar28);
            if ((*(short *)(pFVar31 + lVar26 + -0x6c) < 1) ||
               ((pFVar15->FrameCounter).RPCCounter < (int)*(short *)(pFVar31 + lVar26 + -0x6c))) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            if (0 < *(short *)(pFVar31 + lVar26 + -0x68)) {
              if (!bVar12) {
                bVar12 = (int)*(short *)(pFVar31 + lVar26 + -0x68) <=
                         aiStack_178[(longlong)(char)pFVar31[lVar26 + -100] * 4] +
                         (pFVar15->FrameCounter).RPCCounter;
                goto LAB_1480e201e;
              }
LAB_1480e209b:
              this->LastMetEscalationConditions = dVar34 - (double)iVar32;
              goto LAB_1480e20ba;
            }
LAB_1480e201e:
            if (bVar12) goto LAB_1480e209b;
            if ((*(short *)(pFVar31 + lVar26 + -0x6a) < 1) ||
               (pdVar2 = &(pFVar15->FrameCounter).AccumRPCTime,
               *pdVar2 <= *(double *)(pFVar31 + lVar26 + -0x50) &&
               *(double *)(pFVar31 + lVar26 + -0x50) != *pdVar2)) {
              bVar12 = false;
            }
            else {
              bVar12 = true;
            }
            if (0 < *(short *)(pFVar31 + lVar26 + -0x66)) {
              if (bVar12) goto LAB_1480e209b;
              bVar12 = *(double *)(pFVar31 + lVar26 + -0x48) <=
                       (&dStack_170)[(longlong)(char)pFVar31[lVar26 + -100] * 2] +
                       (pFVar15->FrameCounter).AccumRPCTime;
            }
            if (bVar12) goto LAB_1480e209b;
            iVar32 = iVar32 + 1;
          } while (iVar32 < (int)local_11c8);
        }
        local_11e0 = uVar13 - 1;
        uVar30 = (ulonglong)local_11e0;
      }
    }
LAB_1480e20ba:
    cVar4 = this->ActiveState;
    uVar13 = 0;
    if ((int)cVar4 < (this->DetectionSeverity).ArrayNum) {
      uVar13 = (uint)~(int)cVar4 >> 0x1f;
    }
    if ((uVar13 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    local_11c0 = (this->DetectionSeverity).AllocatorInstance.Data + (longlong)cVar4 * 0x78;
    do {
      uVar13 = (uint)uVar30;
      uVar23 = 0;
      if ((int)uVar13 < (this->DetectionSeverity).ArrayNum) {
        uVar23 = ~uVar13 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar31 = (this->DetectionSeverity).AllocatorInstance.Data;
      this->ActiveState = (schar)uVar30;
      lVar26 = (longlong)(int)uVar13 * 0x78;
      *(FScriptContainerElement *)&this->_padding_ = pFVar31[lVar26 + 8];
      *(FScriptContainerElement *)((longlong)&this->_padding_ + 1) = pFVar31[lVar26 + 9];
      *(FScriptContainerElement *)((longlong)&this->_padding_ + 2) = pFVar31[lVar26 + 10];
      *(FScriptContainerElement *)((longlong)&this->_padding_ + 3) = pFVar31[lVar26 + 0xb];
      *(undefined2 *)((longlong)&this->_padding_ + 4) = *(undefined2 *)(pFVar31 + lVar26 + 0xc);
      *(undefined2 *)((longlong)&this->_padding_ + 6) = *(undefined2 *)(pFVar31 + lVar26 + 0xe);
      *(undefined2 *)&this->_padding_ = *(undefined2 *)(pFVar31 + lVar26 + 0x10);
      *(undefined2 *)((longlong)&this->_padding_ + 2) = *(undefined2 *)(pFVar31 + lVar26 + 0x12);
      *(FScriptContainerElement *)((longlong)&this->_padding_ + 4) = pFVar31[lVar26 + 0x14];
      *(undefined2 *)&this->_padding_ = *(undefined2 *)(pFVar31 + lVar26 + 0x18);
      *(undefined2 *)((longlong)&this->_padding_ + 2) = *(undefined2 *)(pFVar31 + lVar26 + 0x1a);
      *(FScriptContainerElement *)((longlong)&this->_padding_ + 4) = pFVar31[lVar26 + 0x1c];
      *(undefined2 *)((longlong)&this->_padding_ + 6) = *(undefined2 *)(pFVar31 + lVar26 + 0x1e);
      *(undefined2 *)&this->_padding_ = *(undefined2 *)(pFVar31 + lVar26 + 0x20);
      (**(code **)(this->_padding_ + 8))(this);
      cVar4 = this->ActiveState;
      uVar23 = 0;
      if ((int)cVar4 < (this->DetectionSeverity).ArrayNum) {
        uVar23 = (uint)~(int)cVar4 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      RecalculatePeriodHistory
                (this,(TArray<signed_char,TSizedDefaultAllocator<32>_> *)
                      ((this->DetectionSeverity).AllocatorInstance.Data +
                      (longlong)cVar4 * 0x78 + 0x60),&this->CounterPerPeriodHistory,-1);
      if (!bVar33) break;
      sVar7 = *(short *)((longlong)&this->_padding_ + 4);
      if ((sVar7 < 1) || ((pFVar15->FrameCounter).RPCCounter < (int)sVar7)) {
        bVar12 = false;
      }
      else {
        bVar12 = true;
      }
      sVar7 = (short)this->_padding_;
      if (sVar7 < 1) {
LAB_1480e22da:
        if (!bVar12) {
          if ((*(short *)((longlong)&this->_padding_ + 6) < 1) ||
             (pdVar2 = &(pFVar15->FrameCounter).AccumRPCTime,
             *pdVar2 <= (double)this->_padding_ && (double)this->_padding_ != *pdVar2)) {
            bVar12 = false;
          }
          else {
            bVar12 = true;
          }
          if (0 < *(short *)((longlong)&this->_padding_ + 2)) {
            if (bVar12) goto LAB_1480e232c;
            bVar12 = (double)this->_padding_ <=
                     this->CounterPerPeriodHistory
                     [(longlong)*(char *)((longlong)&this->_padding_ + 4) + -1].AccumRPCTime +
                     (pFVar15->FrameCounter).AccumRPCTime;
          }
          if (!bVar12) break;
        }
      }
      else if (!bVar12) {
        bVar12 = (int)sVar7 <=
                 this->CounterPerPeriodHistory
                 [(longlong)*(char *)((longlong)&this->_padding_ + 4) + -1].RPCCounter +
                 (pFVar15->FrameCounter).RPCCounter;
        goto LAB_1480e22da;
      }
LAB_1480e232c:
      iVar32 = (this->DetectionSeverity).ArrayNum;
      uVar13 = (int)this->ActiveState + 1;
      uVar23 = iVar32 - 1;
      if ((int)uVar13 < (int)uVar23) {
        uVar23 = uVar13;
      }
      uVar13 = 0;
      if (0 < (int)uVar23) {
        uVar13 = uVar23;
      }
      uVar30 = (ulonglong)uVar13;
      uVar23 = 0;
      if ((int)uVar13 < iVar32) {
        uVar23 = ~uVar13 >> 0x1f;
      }
      local_11e0 = uVar13;
      if ((uVar23 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if (((this->DetectionSeverity).AllocatorInstance.Data[(longlong)(int)uVar13 * 0x78 + 10] !=
           (FScriptContainerElement)0x0) && (local_11e4 == 0)) {
        uVar13 = (uint)this->ActiveState;
        local_11e0 = uVar13;
        break;
      }
    } while (uVar13 != (int)this->ActiveState);
    uVar23 = 0;
    if ((int)uVar13 < (this->DetectionSeverity).ArrayNum) {
      uVar23 = ~uVar13 >> 0x1f;
    }
    if ((uVar23 == 0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pFVar31 = (this->DetectionSeverity).AllocatorInstance.Data + (longlong)(int)uVar13 * 0x78;
    local_11c8 = pFVar31;
    if (((char)this->_padding_ != '\0') && (2 < (byte)LogNet._0_1_)) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
    }
    cVar4 = *(char *)((longlong)&this->_padding_ + 3);
    if (this->bRPCTrackingEnabled != (bool)cVar4) {
      if (cVar4 == '\0') {
        this->bRPCTrackingEnabled = false;
      }
      else {
        EnableRPCTracking(this,dVar34);
      }
    }
    if (bVar33) {
      *(short *)(pFVar31 + 0x72) = *(short *)(pFVar31 + 0x72) + 1;
      cVar4 = this->ActiveState;
      if (this->WorstActiveState < cVar4) {
        this->WorstActiveState = cVar4;
        (this->AnalyticsVars).MaxSeverityIndex = (int)cVar4;
        iVar32 = *(int *)(pFVar31 + 0x50) + -1;
        if (*(int *)(pFVar31 + 0x50) == 0) {
          iVar32 = 0;
        }
        ::FString::AssignRange
                  (&(this->AnalyticsVars).MaxSeverityCategory,*(wchar_t **)(pFVar31 + 0x48),iVar32);
      }
      if ((this->WorstAnalyticsState < this->ActiveState) &&
         (pFVar31[0x70] == (FScriptContainerElement)0x0)) {
        if (((short)(char)pFVar31[0x15] <= *(short *)(pFVar31 + 0x72)) ||
           ((*(short *)(pFVar31 + 0x16) != -1 &&
            (pdVar2 = &(pFVar15->FrameCounter).AccumRPCTime,
            *(double *)(pFVar31 + 0x40) < *pdVar2 || *(double *)(pFVar31 + 0x40) == *pdVar2)))) {
          pFVar31[0x70] = (FScriptContainerElement)0x1;
          cVar4 = this->WorstAnalyticsState;
          cVar5 = this->ActiveState;
          this->WorstAnalyticsState = cVar5;
          local_11d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_11d8.ArrayNum = 0;
          local_11d8.ArrayMax = 0;
          if ((this->bRPCDoSAnalytics != false) &&
             (((*(char *)((longlong)&this->_padding_ + 1) != '\0' &&
               ((this->RPCDoSAnalyticsData).Object != (FRPCDoSAnalyticsData *)0x0)) &&
              (pFVar16 = TSharedPtr<FRPCDoSAnalyticsData,1>::operator->(&this->RPCDoSAnalyticsData),
              pFVar8 = local_11c0, pFVar16->WorstAnalyticsState < cVar5)))) {
            iVar32 = 0;
            uVar35 = 0;
            uVar36 = 0;
            iVar29 = 0;
            iVar28 = local_11e4;
            if ('\0' < (char)local_11c0[0x14]) {
              iVar32 = 0;
              do {
                uVar13 = this->LastCounterPerSecHistoryIdx - iVar29;
                if ((int)uVar13 < 0) {
                  uVar13 = uVar13 + (this->CounterPerSecHistory).ArrayNum;
                }
                uVar23 = 0;
                if ((int)uVar13 < (this->CounterPerSecHistory).ArrayNum) {
                  uVar23 = ~uVar13 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                pFVar31 = (this->CounterPerSecHistory).AllocatorInstance.Data;
                lVar26 = (longlong)(int)uVar13;
                if (iVar32 < *(int *)(pFVar31 + lVar26 * 0x10)) {
                  iVar32 = *(int *)(pFVar31 + lVar26 * 0x10);
                }
                uVar23 = 0;
                if ((int)uVar13 < (this->CounterPerSecHistory).ArrayNum) {
                  uVar23 = ~uVar13 >> 0x1f;
                }
                if ((uVar23 == 0) &&
                   (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar33)) {
                  pcVar10 = (code *)swi(3);
                  (*pcVar10)();
                  return;
                }
                iVar29 = iVar29 + 1;
                dVar34 = *(double *)
                          ((this->CounterPerSecHistory).AllocatorInstance.Data + lVar26 * 0x10 + 8);
                if (dVar34 <= (double)CONCAT44(uVar36,uVar35)) {
                  dVar34 = (double)CONCAT44(uVar36,uVar35);
                }
                uVar35 = SUB84(dVar34,0);
                uVar36 = (undefined4)((ulonglong)dVar34 >> 0x20);
                pFVar31 = local_11c8;
                uVar13 = local_11e0;
                iVar28 = iVar32;
              } while (iVar29 < (char)pFVar8[0x14]);
            }
            local_11e4 = iVar28;
            dVar34 = 0.0;
            if (((this->bRPCTrackingEnabled != false) &&
                (dVar34 = 0.0, (this->PacketScopePrivate)._padding_ != '\0')) &&
               (pFVar17 = GetSequentialRPCScope(this), dVar34 = 0.0,
               (pFVar17->LightweightRPCTracking).Count != '\0')) {
              iVar28 = 0;
              if ((pFVar17->LightweightRPCTracking).Count != '\0') {
                do {
                  TArray<FName,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FName_const_&>
                            (&local_11d8,&(pFVar17->LightweightRPCTracking).RPC[iVar28].Name);
                  iVar28 = iVar28 + 1;
                } while (iVar28 < (int)(uint)(pFVar17->LightweightRPCTracking).Count);
              }
              AlgoImpl::
              IntroSortInternal<FName,int,FIdentityFunctor,TDereferenceWrapper<FName,_FRPCDoSDetection::UpdateSeverity_Private_::__l94::<lambda_1>_>_>
                        ((FName *)local_11d8.AllocatorInstance.Data,local_11d8.ArrayNum,
                         local_11e6[0],(<lambda_1> *)local_11e6);
              (pFVar17->LightweightRPCTracking).Count = '\0';
              pFVar18 = GetPacketScope(this);
              dVar3 = pFVar18->ReceivedPacketStartTime;
              dVar34 = FWindowsPlatformTime::Seconds();
              dVar34 = dVar34 - dVar3;
            }
            pFVar16 = TSharedPtr<FRPCDoSAnalyticsData,1>::operator->(&this->RPCDoSAnalyticsData);
            FRPCDoSAnalyticsData::FireEvent_ServerRPCDoSEscalation
                      (pFVar16,uVar13,(FString *)(pFVar31 + 0x48),iVar32,
                       (double)CONCAT44(uVar36,uVar35),&this->CachedAddress,&this->CachedPlayerUID,
                       &local_11d8,dVar34);
            sVar6 = this->WorstAnalyticsState;
            pFVar16 = TSharedPtr<FRPCDoSAnalyticsData,1>::operator->(&this->RPCDoSAnalyticsData);
            pFVar16->WorstAnalyticsState = sVar6;
          }
          if ((char)this->_padding_ != '\0') {
            if (2 < (byte)LogNet._0_1_) {
              uVar13 = 0;
              if ((int)cVar4 < (this->DetectionSeverity).ArrayNum) {
                uVar13 = (uint)~(int)cVar4 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar33 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar33)) {
                pcVar10 = (code *)swi(3);
                (*pcVar10)();
                return;
              }
              UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
            }
            iVar32 = local_11d8.ArrayNum;
            if (0 < local_11d8.ArrayNum) {
              local_1188.Base = local_1168;
              local_1188.CurPos = local_1168;
              local_1188.End = (wchar_t *)&local_168;
              pFVar1 = (FName *)(local_11d8.AllocatorInstance.Data +
                                (longlong)local_11d8.ArrayNum * 8);
              local_1188.bIsDynamic = false;
              local_1188.bIsExternal = false;
              this_00.Data = local_11d8.AllocatorInstance.Data;
              while( true ) {
                if (local_11d8.ArrayNum != iVar32) {
                  `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()
                            (local_11dc);
                }
                this = local_11a8;
                if ((FName *)this_00.Data == pFVar1) break;
                if (0 < (int)((longlong)local_1188.CurPos - (longlong)local_1188.Base >> 1)) {
                  if (local_1188.End < (FRPCDoSCounters *)(local_1188.CurPos + 2)) {
                    TStringBuilderBase<wchar_t>::Extend(&local_1188,2);
                  }
                  pvVar19 = FGenericPlatformString::Memcpy(local_1188.CurPos,L", ",4);
                  local_1188.CurPos = (wchar_t *)((longlong)pvVar19 + 4);
                }
                pFVar20 = ::FName::ToString((FName *)this_00.Data,&local_11a0);
                if ((pFVar20->Data).ArrayNum == 0) {
                  _Str = L"";
LAB_1480e29ba:
                  sVar21 = wcslen(_Str);
                  iVar28 = (int)sVar21;
                }
                else {
                  _Str = (wchar_t *)(pFVar20->Data).AllocatorInstance.Data;
                  iVar28 = 0;
                  if ((FScriptContainerElement *)_Str != (FScriptContainerElement *)0x0)
                  goto LAB_1480e29ba;
                }
                uVar27 = (ulong64)iVar28;
                if (local_1188.End < (FRPCDoSCounters *)(local_1188.CurPos + uVar27)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_1188,uVar27);
                }
                if (iVar28 != 0) {
                  pvVar19 = FGenericPlatformString::Memcpy(local_1188.CurPos,_Str,uVar27 * 2);
                  local_1188.CurPos = (wchar_t *)((longlong)pvVar19 + uVar27 * 2);
                }
                if (local_11a0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_11a0.Data.AllocatorInstance.Data);
                }
                this_00.Data = this_00.Data + 8;
              }
              if (4 < (byte)LogNet._0_1_) {
                if (local_1188.End < (FRPCDoSCounters *)(local_1188.CurPos + 1)) {
                  TStringBuilderBase<wchar_t>::Extend(&local_1188,1);
                }
                *local_1188.CurPos = L'\0';
                UE::Logging::Private::BasicLog<5>
                          ((FStaticBasicLogRecord *)&PTR_u_RPC_DoS_escalat_1519fdb00,
                           (FLogCategoryBase *)&LogNet);
              }
              TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1188);
              pFVar31 = local_11c8;
            }
          }
          (this->AnalyticsVars).MaxAnalyticsSeverityIndex = (int)this->ActiveState;
          iVar32 = *(int *)(pFVar31 + 0x50) + -1;
          if (*(int *)(pFVar31 + 0x50) == 0) {
            iVar32 = 0;
          }
          ::FString::AssignRange
                    (&(this->AnalyticsVars).MaxAnalyticsSeverityCategory,
                     *(wchar_t **)(pFVar31 + 0x48),iVar32);
          if ((FName *)local_11d8.AllocatorInstance.Data != (FName *)0x0) {
            FMemory::Free(local_11d8.AllocatorInstance.Data);
          }
        }
        else {
          pFVar31[0x70] = (FScriptContainerElement)0x0;
        }
      }
      if ((*(char *)((longlong)&this->_padding_ + 2) != '\0') &&
         (*(longlong *)&this->KickPlayerFunc != 0)) {
        if (2 < (byte)LogNet._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNet);
        }
        UE::Core::Private::Function::CheckCallable(*(void **)&this->KickPlayerFunc);
        pcVar10 = *(code **)&this->KickPlayerFunc;
        plVar9 = *(longlong **)&(this->KickPlayerFunc).field_0x28;
        plVar25 = (longlong *)&(this->KickPlayerFunc).field_0x10;
        if (plVar9 != (longlong *)0x0) {
          plVar25 = plVar9;
        }
        uVar22 = (**(code **)(*plVar25 + 8))();
        (*pcVar10)(uVar22);
      }
    }
  }
  return;
}

