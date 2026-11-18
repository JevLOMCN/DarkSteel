// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 14

// ~FTickTaskLevel @ 1488b2490

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickTaskLevel::~FTickTaskLevel(FTickTaskLevel *this)

{
  int iVar1;
  byte *pbVar2;
  FTickFunction *pFVar3;
  FInternalData *pFVar4;
  ForElementType<FSetElementId> FVar5;
  longlong *plVar6;
  longlong *plVar7;
  undefined1 local_res8 [8];
  undefined1 local_48 [12];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::TIterator::
  TIterator((TIterator *)local_48,&this->AllEnabledTickFunctions);
  if (local_2c < *(int *)(local_38 + 0x18)) {
    do {
      pbVar2 = *(byte **)(*(longlong *)(*(longlong *)local_48._0_8_ + (longlong)local_2c * 0x10) +
                         0x20);
      local_30 = local_30 & ~local_3c;
      *pbVar2 = *pbVar2 & 0xfe;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_48 + 8));
    } while (local_2c < *(int *)(local_38 + 0x18));
  }
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::TIterator::
  TIterator((TIterator *)local_48,&this->AllDisabledTickFunctions);
  if (local_2c < *(int *)(local_38 + 0x18)) {
    do {
      pbVar2 = *(byte **)(*(longlong *)(*(longlong *)local_48._0_8_ + (longlong)local_2c * 0x10) +
                         0x20);
      local_30 = local_30 & ~local_3c;
      *pbVar2 = *pbVar2 & 0xfe;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_48 + 8));
    } while (local_2c < *(int *)(local_38 + 0x18));
  }
  for (pFVar3 = (this->AllCoolingDownTickFunctions).Head; pFVar3 != (FTickFunction *)0x0;
      pFVar3 = ((pFVar3->InternalData).Ptr)->Next) {
    pFVar4 = (pFVar3->InternalData).Ptr;
    pFVar4->bRegistered = false;
  }
  iVar1 = *(int *)&(this->TickFunctionsToReschedule).field_0x8;
  plVar6 = *(longlong **)&this->TickFunctionsToReschedule;
  plVar7 = plVar6 + (longlong)iVar1 * 2;
  while( true ) {
    if (*(int *)&(this->TickFunctionsToReschedule).field_0x8 != iVar1) {
      `TCheckedPointerIterator<FTickTaskLevel::FTickScheduleDetails,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (plVar6 == plVar7) break;
    **(byte **)(*plVar6 + 0x20) = **(byte **)(*plVar6 + 0x20) & 0xfe;
    plVar6 = plVar6 + 2;
  }
  (this->NewlySpawnedTickFunctions).HashSize = 0;
  FVar5 = (this->NewlySpawnedTickFunctions).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FTickFunction_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTickFunction_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NewlySpawnedTickFunctions).Elements);
  if (*(void **)&this->TickFunctionsToReschedule != (void *)0x0) {
    FMemory::Free(*(void **)&this->TickFunctionsToReschedule);
  }
  (this->AllDisabledTickFunctions).HashSize = 0;
  FVar5 = (this->AllDisabledTickFunctions).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FTickFunction_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTickFunction_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllDisabledTickFunctions).Elements);
  (this->AllEnabledTickFunctions).HashSize = 0;
  FVar5 = (this->AllEnabledTickFunctions).Hash.SecondaryData;
  if (FVar5 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FVar5);
  }
  TSparseArray<TSparseSetElement<FTickFunction_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<FTickFunction_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->AllEnabledTickFunctions).Elements);
  return;
}

// AddTickFunction @ 1488b90d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickTaskLevel::AddTickFunction(FTickTaskLevel *this,FTickFunction *param_1)

{
  code *pcVar1;
  bool bVar2;
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator> *this_00;
  FTickFunction **ppFVar3;
  FTickFunction *local_res10;
  FTickFunction *local_res18;
  FTickFunction *local_res20;
  FTickFunction *local_18 [2];
  
  local_res10 = param_1;
  bVar2 = HasTickFunction(this,param_1);
  if ((bVar2) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("!HasTickFunction(TickFunction)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                         ,0x68e,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (param_1->TickState == Enabled) {
    TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::
    Emplace<FTickFunction_*_const_&>
              (&this->AllEnabledTickFunctions,&local_res18,(bool *)&local_res10);
    if (this->bTickNewlySpawned == false) {
      return;
    }
    this_00 = &this->NewlySpawnedTickFunctions;
    ppFVar3 = &local_res20;
  }
  else {
    if ((param_1->TickState != Disabled) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("TickFunction->TickState == FTickFunction::ETickState::Disabled",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                           ,0x699,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    this_00 = &this->AllDisabledTickFunctions;
    ppFVar3 = local_18;
  }
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::
  Emplace<FTickFunction_*_const_&>(this_00,ppFVar3,(bool *)&local_res10);
  return;
}

// DoDeferredRemoves @ 1488bc950

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickTaskLevel::DoDeferredRemoves(FTickTaskLevel *this)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_DoDeferredRemoves> FVar10;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  uint local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10 [2];
  FName local_res18;
  LARGE_INTEGER local_res20;
  FName local_68;
  FName local_60;
  FStatMessage local_50 [2];
  
  if (*(int *)&(this->TickFunctionsToReschedule).field_0x8 < 1) {
    return;
  }
  FVar10 = StatPtr_STAT_DoDeferredRemoves;
  if (StatPtr_STAT_DoDeferredRemoves == (FThreadSafeStaticStat<FStat_STAT_DoDeferredRemoves>)0x0) {
    pFVar9 = ::FName::FName(&local_68,"STAT_DoDeferredRemoves");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_DoDeferredRemoves>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_DoDeferredRemoves,*pFVar9,
                        L"Do Deferred Removes","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true
                        ,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar4 = false;
  bVar6 = false;
  local_60.ComparisonIndex.Value = 0;
  local_60.Number = 0;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar4 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res18.ComparisonIndex.Value = FVar12.Value;
        local_res18.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res18,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                   ,0x55f);
        bVar4 = true;
        bVar6 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = FVar12.Value;
      uStackX_c = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar5 = true;
      goto LAB_1488bcabc;
    }
  }
  bVar5 = false;
  FVar13 = local_60;
LAB_1488bcabc:
  iVar2 = *(int *)&(this->TickFunctionsToReschedule).field_0x8;
  puVar14 = *(undefined8 **)&this->TickFunctionsToReschedule;
  puVar15 = puVar14 + (longlong)iVar2 * 2;
  while( true ) {
    if (*(int *)&(this->TickFunctionsToReschedule).field_0x8 != iVar2) {
      local_res8 = local_res8 & 0xffffff00;
      `TCheckedPointerIterator<FTickTaskLevel::FTickScheduleDetails,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (puVar14 == puVar15) break;
    if (((*(char *)((longlong)puVar14 + 0xc) != '\0') &&
        (((FTickFunction *)*puVar14)->TickState != Disabled)) &&
       ((iVar8 = TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::
                 Remove(&this->AllEnabledTickFunctions,(FTickFunction *)*puVar14), iVar8 != 1 &&
        (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("AllEnabledTickFunctions.Remove(TickDetails.TickFunction) == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                            ,0x565,L""), bVar7)))) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    puVar14 = puVar14 + 2;
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar4) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar5) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50[0].NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_50[0].NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res20);
      local_50[0].StatData.Pad[4] = '\0';
      local_50[0].StatData.Pad[5] = '\0';
      local_50[0].StatData.Pad[6] = '\0';
      local_50[0].StatData.Pad[7] = '\0';
      local_50[0].StatData.Pad[0] = local_res20.s.LowPart._0_1_;
      local_50[0].StatData.Pad[1] = local_res20.s.LowPart._1_1_;
      local_50[0].StatData.Pad[2] = local_res20.s.LowPart._2_1_;
      local_50[0].StatData.Pad[3] = local_res20.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,local_50);
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

// DumpAllTickFunctions @ 1488bd1a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickTaskLevel::DumpAllTickFunctions
          (FTickTaskLevel *this,FOutputDevice *param_1,int *param_2,int *param_3,bool param_4,
          bool param_5)

{
  UClass *pUVar1;
  UEnum *pUVar2;
  FTickFunction *pFVar3;
  FString *pFVar4;
  int iVar5;
  wchar_t *pwVar6;
  wchar_t *pwVar7;
  float fVar8;
  TStringView<wchar_t> local_88;
  FString local_78;
  undefined1 local_68 [12];
  uint local_5c;
  longlong local_58;
  uint local_50;
  int local_4c;
  
  local_88.Size = 0x1c;
  local_88.DataPtr = L"/Script/Engine.ETickingGroup";
  pUVar1 = Z_Construct_UClass_UEnum_NoRegister();
  pUVar2 = (UEnum *)StaticFindObject(pUVar1,(UObject *)0x0,&local_88,ExactClass);
  if (pUVar2 == (UEnum *)0x0) {
    pFVar4 = GetTypeName<UEnum>((FString *)&local_88);
    if ((pFVar4->Data).ArrayNum == 0) {
      pwVar6 = L"";
    }
    else {
      pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar6);
  }
  pUVar1 = Z_Construct_UClass_UEnum_NoRegister();
  iVar5 = (int)pUVar1->_padding_;
  if ((iVar5 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar5 * 8) ==
      &pUVar1->_padding_)) {
    if (param_4) {
      TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::TIterator::
      TIterator((TIterator *)local_68,&this->AllEnabledTickFunctions);
      if (local_4c < *(int *)(local_58 + 0x18)) {
        do {
          DumpTickFunction(this,param_1,
                           *(FTickFunction **)
                            (*(longlong *)local_68._0_8_ + (longlong)local_4c * 0x10),pUVar2,0.0);
          local_50 = local_50 & ~local_5c;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_68 + 8));
        } while (local_4c < *(int *)(local_58 + 0x18));
      }
      pFVar3 = (this->AllCoolingDownTickFunctions).Head;
      fVar8 = 0.0;
      while (pFVar3 != (FTickFunction *)0x0) {
        fVar8 = fVar8 + ((pFVar3->InternalData).Ptr)->RelativeTickCooldown;
        DumpTickFunction(this,param_1,pFVar3,pUVar2,fVar8);
        pFVar3 = ((pFVar3->InternalData).Ptr)->Next;
        *param_2 = *param_2 + 1;
      }
    }
    else {
      pFVar3 = (this->AllCoolingDownTickFunctions).Head;
      if (pFVar3 != (FTickFunction *)0x0) {
        iVar5 = *param_2;
        do {
          iVar5 = iVar5 + 1;
          pFVar3 = ((pFVar3->InternalData).Ptr)->Next;
          *param_2 = iVar5;
        } while (pFVar3 != (FTickFunction *)0x0);
      }
    }
    *param_2 = *param_2 +
               (*(int *)&(this->AllEnabledTickFunctions).Elements.field_0x8 -
               *(int *)&(this->AllEnabledTickFunctions).Elements.field_0x34);
    if ((param_5) &&
       (TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::TIterator::
        TIterator((TIterator *)local_68,&this->AllDisabledTickFunctions),
       local_4c < *(int *)(local_58 + 0x18))) {
      do {
        DumpTickFunction(this,param_1,
                         *(FTickFunction **)
                          (*(longlong *)local_68._0_8_ + (longlong)local_4c * 0x10),pUVar2,0.0);
        local_50 = local_50 & ~local_5c;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                  ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_68 + 8));
      } while (local_4c < *(int *)(local_58 + 0x18));
    }
    *param_3 = *param_3 +
               (*(int *)&(this->AllDisabledTickFunctions).Elements.field_0x8 -
               *(int *)&(this->AllDisabledTickFunctions).Elements.field_0x34);
    return;
  }
  pFVar4 = GetTypeName<UEnum>((FString *)&local_88);
  pwVar6 = L"";
  if ((pFVar4->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  pFVar4 = GetFullNameForCastLogError<UObject>(&local_78,(UObject *)pUVar2);
  if ((pFVar4->Data).ArrayNum != 0) {
    pwVar6 = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar6,pwVar7);
}

// DumpTickFunction @ 1488bdd10

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickTaskLevel::DumpTickFunction
          (FTickTaskLevel *this,FOutputDevice *param_1,FTickFunction *param_2,UEnum *param_3,
          float param_4)

{
  FInternalData *pFVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UObject *this_00;
  uint uVar5;
  FWeakObjectPtr *this_01;
  TEnumAsByte<ETickingGroup> *pTVar6;
  longlong lVar7;
  FString local_b8;
  code *local_a8;
  FTickTaskLevel **local_a0;
  void *local_98 [2];
  FString local_88;
  FString local_78;
  void *local_68 [2];
  FTickTaskLevel *local_58;
  FOutputDevice *local_50;
  UEnum *local_48;
  float local_40;
  
  pFVar1 = (param_2->InternalData).Ptr;
  pTVar6 = &pFVar1->ActualStartTickGroup;
  if (pFVar1 == (FInternalData *)0x0) {
    pTVar6 = &param_2->TickGroup;
  }
  UEnum::GetNameStringByValue(param_3,&local_88,(ulonglong)pTVar6->Value);
  bVar3 = false;
  if ((param_2->TickState != Disabled) && (bVar3 = false, 0.0 < param_4)) {
    ::FString::PrintfImpl(&local_b8,L"Cooling Down for %.4g seconds");
    bVar3 = true;
  }
  (**(code **)(param_2->_padding_ + 0x20))(param_2,local_98);
  FOutputDevice::LogfImpl(param_1,L"%s, %s, ActualStartTickGroup: %s, Prerequesities: %d");
  if (local_98[0] != (void *)0x0) {
    FMemory::Free(local_98[0]);
  }
  if ((bVar3) && (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
  }
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  uVar5 = 0;
  if (0 < (param_2->Prerequisites).ArrayNum) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar5 < (param_2->Prerequisites).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
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
      this_01 = (FWeakObjectPtr *)((param_2->Prerequisites).AllocatorInstance.Data + lVar7);
      bVar3 = FWeakObjectPtr::IsValid(this_01);
      if (bVar3) {
        (**(code **)(*(longlong *)this_01[1] + 0x20))(this_01[1],local_68);
        this_00 = FWeakObjectPtr::Get(this_01);
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_00,&local_78,(UObject *)0x0,None)
        ;
        FOutputDevice::LogfImpl(param_1,L"    %s, %s");
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (local_68[0] != (void *)0x0) {
          FMemory::Free(local_68[0]);
        }
      }
      else {
        FOutputDevice::Log(param_1,L"    Invalid Prerequisite");
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0x10;
    } while ((int)uVar5 < (param_2->Prerequisites).ArrayNum);
  }
  local_a0 = &local_58;
  local_40 = param_4;
  local_a8 = UE::Core::Private::Function::
             TFunctionRefCaller<`FTickTaskLevel::DumpTickFunction'::__l2::<lambda_1>,void,FTickFunction_&>
             ::Call;
  local_58 = this;
  local_50 = param_1;
  local_48 = param_3;
  (**(code **)(param_2->_padding_ + 0x30))(param_2,&local_a8);
  return;
}

// HasTickFunction @ 1488c7c20

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall FTickTaskLevel::HasTickFunction(FTickTaskLevel *this,FTickFunction *param_1)

{
  longlong lVar1;
  FTickFunction *pFVar2;
  ForElementType<FSetElementId> FVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
          -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  if (*(int *)&(this->AllEnabledTickFunctions).Elements.field_0x8 !=
      *(int *)&(this->AllEnabledTickFunctions).Elements.field_0x34) {
    FVar3 = (this->AllEnabledTickFunctions).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->AllEnabledTickFunctions).Hash;
    }
    iVar5 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->AllEnabledTickFunctions).HashSize - 1U & uVar4) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->AllEnabledTickFunctions).Elements;
      do {
        if (*(FTickFunction **)(lVar1 + (longlong)iVar5 * 0x10) == param_1) {
          if (iVar5 != -1) {
            return true;
          }
          break;
        }
        iVar5 = *(int *)(lVar1 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  if (*(int *)&(this->AllDisabledTickFunctions).Elements.field_0x8 !=
      *(int *)&(this->AllDisabledTickFunctions).Elements.field_0x34) {
    FVar3 = (this->AllDisabledTickFunctions).Hash.SecondaryData;
    if (FVar3 == (ForElementType<FSetElementId>)0x0) {
      FVar3 = (ForElementType<FSetElementId>)&(this->AllDisabledTickFunctions).Hash;
    }
    iVar5 = *(int *)((longlong)FVar3 +
                    (ulonglong)((this->AllDisabledTickFunctions).HashSize - 1U & uVar4) * 4);
    if (iVar5 != -1) {
      lVar1 = *(longlong *)&(this->AllDisabledTickFunctions).Elements;
      do {
        if (*(FTickFunction **)(lVar1 + (longlong)iVar5 * 0x10) == param_1) {
          return true;
        }
        iVar5 = *(int *)(lVar1 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  pFVar2 = (this->AllCoolingDownTickFunctions).Head;
  while( true ) {
    if (pFVar2 == (FTickFunction *)0x0) {
      return false;
    }
    if (pFVar2 == param_1) break;
    pFVar2 = ((pFVar2->InternalData).Ptr)->Next;
  }
  return true;
}

// LogAndDiscardRunawayNewlySpawned @ 1488ce080

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickTaskLevel::LogAndDiscardRunawayNewlySpawned(FTickTaskLevel *this,ETickingGroup param_1)

{
  undefined1 *puVar1;
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator> *this_00;
  TArrayWithThreadsafeAdd<FTickTaskLevel::FTickScheduleDetails,TSizedDefaultAllocator<32>_> *pTVar2;
  ulonglong *puVar3;
  longlong *plVar4;
  ForElementType<FSetElementId> FVar5;
  longlong lVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  ForElementType<FSetElementId> FVar11;
  longlong *local_68;
  undefined4 uStack_60;
  uint uStack_5c;
  void *local_58 [2];
  undefined1 local_48 [12];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  (this->Context).TickGroup.Value = (uchar)param_1;
  FTickTaskSequencer::Get();
  this_00 = &this->NewlySpawnedTickFunctions;
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::TIterator::
  TIterator((TIterator *)local_48,this_00);
  if (local_2c < *(int *)(local_38 + 0x18)) {
    do {
      plVar4 = *(longlong **)(*(longlong *)local_48._0_8_ + (longlong)local_2c * 0x10);
      if (1 < (byte)LogTick._0_1_) {
        (**(code **)(*plVar4 + 0x20))(plVar4,local_58);
        UE::Logging::Private::BasicLog<2>
                  (&`public:_void___cdecl_FTickTaskLevel::LogAndDiscardRunawayNewlySpawned(ETickingGroup)___ptr64'
                    ::__l5::LOG_Static,(FLogCategoryBase *)&LogTick);
        if (local_58[0] != (void *)0x0) {
          FMemory::Free(local_58[0]);
        }
      }
      if (0.0 < *(float *)((longlong)plVar4 + 0xc)) {
        if (*(int *)&(this->AllEnabledTickFunctions).Elements.field_0x8 !=
            *(int *)&(this->AllEnabledTickFunctions).Elements.field_0x34) {
          uVar9 = ((uint)((ulonglong)plVar4 >> 0x14) & 0xffff ^ (uint)((ulonglong)plVar4 >> 4)) *
                  -0x7a143595;
          uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
          FVar5 = (this->AllEnabledTickFunctions).Hash.SecondaryData;
          FVar11 = (ForElementType<FSetElementId>)&(this->AllEnabledTickFunctions).Hash;
          if (FVar5 != (ForElementType<FSetElementId>)0x0) {
            FVar11 = FVar5;
          }
          iVar10 = *(int *)((longlong)FVar11 +
                           ((longlong)(this->AllEnabledTickFunctions).HashSize - 1U &
                           (longlong)(int)(uVar9 >> 0x10 ^ uVar9)) * 4);
          if (iVar10 != -1) {
            lVar6 = *(longlong *)&(this->AllEnabledTickFunctions).Elements;
            do {
              if (*(longlong **)(lVar6 + (longlong)iVar10 * 0x10) == plVar4) {
                TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::
                RemoveByIndex(&this->AllEnabledTickFunctions,iVar10);
                break;
              }
              iVar10 = *(int *)(lVar6 + 8 + (longlong)iVar10 * 0x10);
            } while (iVar10 != -1);
          }
        }
        pTVar2 = &this->TickFunctionsToReschedule;
        uStack_60 = *(undefined4 *)((longlong)plVar4 + 0xc);
        *(byte *)plVar4[4] = *(byte *)plVar4[4] | 2;
        uStack_5c = uStack_5c & 0xffffff00;
        local_68 = plVar4;
        if (((*(longlong ***)pTVar2 <= &local_68) &&
            (&local_68 <
             *(longlong ***)pTVar2 +
             (longlong)*(int *)&(this->TickFunctionsToReschedule).field_0xc * 2)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = *(int *)&(this->TickFunctionsToReschedule).field_0x8;
        puVar1 = &(this->TickFunctionsToReschedule).field_0xc;
        if (iVar10 == *(int *)puVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)pTVar2,(int *)puVar1);
        }
        *(int *)&(this->TickFunctionsToReschedule).field_0x8 = iVar10 + 1;
        puVar3 = (ulonglong *)(*(longlong *)pTVar2 + (longlong)iVar10 * 0x10);
        *puVar3 = (ulonglong)local_68;
        puVar3[1] = CONCAT44(uStack_5c,uStack_60);
      }
      local_30 = local_30 & ~local_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_48 + 8));
    } while (local_2c < *(int *)(local_38 + 0x18));
  }
  bVar8 = 1 < (this->NewlySpawnedTickFunctions).HashSize;
  if (!bVar8) {
    TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::UnhashElements
              (this_00);
  }
  puVar1 = &(this->NewlySpawnedTickFunctions).Elements.field_0xc;
  *(undefined4 *)&(this->NewlySpawnedTickFunctions).Elements.field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this_00,0,(int *)puVar1);
  }
  *(undefined4 *)&(this->NewlySpawnedTickFunctions).Elements.field_0x34 = 0;
  *(undefined4 *)&(this->NewlySpawnedTickFunctions).Elements.field_0x30 = 0xffffffff;
  iVar10 = *(int *)&(this->NewlySpawnedTickFunctions).Elements.field_0x2c;
  *(undefined4 *)&(this->NewlySpawnedTickFunctions).Elements.field_0x28 = 0;
  if ((iVar10 < 0) || (0x80 < iVar10)) {
    *(undefined4 *)&(this->NewlySpawnedTickFunctions).Elements.field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)
               &(this->NewlySpawnedTickFunctions).Elements.field_0x10,0);
  }
  if (bVar8) {
    (this->NewlySpawnedTickFunctions).HashSize = 1;
    TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::Rehash(this_00);
  }
  return;
}

// QueueAllTicks @ 1488d13d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickTaskLevel::QueueAllTicks(FTickTaskLevel *this)

{
  undefined1 *puVar1;
  TArrayWithThreadsafeAdd<FTickTaskLevel::FTickScheduleDetails,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  float fVar4;
  FTickFunction *pFVar5;
  FInternalData *pFVar6;
  code *pcVar7;
  atomic<unsigned_int> aVar8;
  bool bVar9;
  int iVar10;
  FTickTaskSequencer *pFVar11;
  float fVar12;
  FTickFunction *local_78;
  float fStack_70;
  uint uStack_6c;
  FTickFunction *local_68;
  float fStack_60;
  uint uStack_5c;
  undefined1 local_58 [12];
  uint local_4c;
  longlong local_48;
  uint local_40;
  int local_3c;
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator> *local_30;
  
  pFVar11 = FTickTaskSequencer::Get();
  aVar8 = GFrameCounter._0_4_;
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::TIterator::
  TIterator((TIterator *)local_58,&this->AllEnabledTickFunctions);
  fVar12 = 0.0;
  if (local_3c < *(int *)(local_48 + 0x18)) {
    do {
      iVar10 = local_3c;
      pFVar5 = *(FTickFunction **)(*(longlong *)local_58._0_8_ + (longlong)local_3c * 0x10);
      if (((pFVar5->InternalData).Ptr)->TickVisitedGFrameCounter != aVar8) {
        FTickFunction::QueueTickFunction(pFVar5,pFVar11,&this->Context);
      }
      if (0.0 < pFVar5->TickInterval) {
        TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::RemoveByIndex
                  (local_30,iVar10);
        pFVar6 = (pFVar5->InternalData).Ptr;
        pTVar2 = &this->TickFunctionsToReschedule;
        fStack_70 = pFVar5->TickInterval;
        pFVar6->bWasInterval = true;
        uStack_6c = uStack_6c & 0xffffff00;
        local_78 = pFVar5;
        if (((*(FTickFunction ***)pTVar2 <= &local_78) &&
            (&local_78 <
             *(FTickFunction ***)pTVar2 +
             (longlong)*(int *)&(this->TickFunctionsToReschedule).field_0xc * 2)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar10 = *(int *)&(this->TickFunctionsToReschedule).field_0x8;
        puVar1 = &(this->TickFunctionsToReschedule).field_0xc;
        if (iVar10 == *(int *)puVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)pTVar2,(int *)puVar1);
        }
        *(int *)&(this->TickFunctionsToReschedule).field_0x8 = iVar10 + 1;
        puVar3 = (undefined8 *)(*(longlong *)pTVar2 + (longlong)iVar10 * 0x10);
        *puVar3 = local_78;
        puVar3[1] = CONCAT44(uStack_6c,fStack_70);
      }
      local_40 = local_40 & ~local_4c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_58 + 8));
    } while (local_3c < *(int *)(local_48 + 0x18));
  }
  pFVar5 = (this->AllCoolingDownTickFunctions).Head;
  while( true ) {
    if ((pFVar5 == (FTickFunction *)0x0) || (pFVar5->TickState != Enabled)) {
      return;
    }
    pFVar6 = (pFVar5->InternalData).Ptr;
    fVar12 = fVar12 + pFVar6->RelativeTickCooldown;
    if (pFVar6->TickVisitedGFrameCounter != aVar8) {
      FTickFunction::QueueTickFunction(pFVar5,pFVar11,&this->Context);
    }
    fVar4 = (this->Context).DeltaSeconds;
    pTVar2 = &this->TickFunctionsToReschedule;
    pFVar6 = (pFVar5->InternalData).Ptr;
    fStack_60 = pFVar5->TickInterval;
    uStack_5c = uStack_5c & 0xffffff00;
    pFVar6->bWasInterval = true;
    fStack_60 = fStack_60 - (fVar4 - fVar12);
    local_68 = pFVar5;
    if (((*(FTickFunction ***)pTVar2 <= &local_68) &&
        (&local_68 <
         *(FTickFunction ***)pTVar2 +
         (longlong)*(int *)&(this->TickFunctionsToReschedule).field_0xc * 2)) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) break;
    iVar10 = *(int *)&(this->TickFunctionsToReschedule).field_0x8;
    puVar1 = &(this->TickFunctionsToReschedule).field_0xc;
    if (iVar10 == *(int *)puVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)pTVar2,(int *)puVar1);
    }
    *(int *)&(this->TickFunctionsToReschedule).field_0x8 = iVar10 + 1;
    puVar3 = (undefined8 *)(*(longlong *)pTVar2 + (longlong)iVar10 * 0x10);
    *puVar3 = local_68;
    puVar3[1] = CONCAT44(uStack_5c,fStack_60);
    pFVar5 = ((pFVar5->InternalData).Ptr)->Next;
    (this->AllCoolingDownTickFunctions).Head = pFVar5;
  }
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

// RemoveTickFunction @ 1488d7dd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickTaskLevel::RemoveTickFunction(FTickTaskLevel *this,FTickFunction *param_1)

{
  undefined1 *puVar1;
  TArrayWithThreadsafeAdd<FTickTaskLevel::FTickScheduleDetails,TSizedDefaultAllocator<32>_> *pTVar2;
  int iVar3;
  longlong *plVar4;
  FTickFunction *pFVar5;
  FInternalData *pFVar6;
  code *pcVar7;
  FTickFunction *pFVar8;
  FTickFunction *pFVar9;
  FTickFunction *pFVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  byte bVar15;
  uint uVar16;
  longlong *plVar17;
  TUniquePtr<FTickFunction::FInternalData,TDefaultDelete<FTickFunction::FInternalData>_> *pTVar18;
  
  bVar15 = param_1->TickState;
  if (param_1->TickState == 0) {
    iVar14 = TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::Remove
                       (&this->AllDisabledTickFunctions,param_1);
    if (iVar14 == 1) goto LAB_1488d8226;
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("AllDisabledTickFunctions.Remove(TickFunction) == 1",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                        ,0x740,L"");
  }
  else {
    if (bVar15 == 1) {
      if (!((param_1->InternalData).Ptr)->bWasInterval) {
        iVar14 = TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::
                 Remove(&this->AllEnabledTickFunctions,param_1);
        if (iVar14 == 1) goto LAB_1488d8226;
        bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("AllEnabledTickFunctions.Remove(TickFunction) == 1",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                            ,0x73b,L"");
        goto joined_r0x0001488d81eb;
      }
      iVar14 = TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::Remove
                         (&this->AllEnabledTickFunctions,param_1);
      if (iVar14 != 0) goto LAB_1488d8226;
      pTVar2 = &this->TickFunctionsToReschedule;
      plVar4 = *(longlong **)pTVar2;
      iVar14 = *(int *)&(this->TickFunctionsToReschedule).field_0x8;
      for (plVar17 = plVar4; plVar17 != plVar4 + (longlong)iVar14 * 2; plVar17 = plVar17 + 2) {
        if ((FTickFunction *)*plVar17 == param_1) {
          uVar16 = (uint)((longlong)plVar17 - (longlong)plVar4 >> 4);
          bVar12 = uVar16 != 0xffffffff;
          if (bVar12) {
            uVar13 = 0;
            if ((int)uVar16 < iVar14) {
              uVar13 = ~uVar16 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar3 = *(int *)&(this->TickFunctionsToReschedule).field_0x8;
            iVar14 = ~uVar16 + iVar3;
            if (1 < iVar14) {
              iVar14 = 1;
            }
            if (iVar14 != 0) {
              memmove((void *)(*(longlong *)pTVar2 + (longlong)(int)uVar16 * 0x10),
                      (void *)(*(longlong *)pTVar2 + (longlong)(iVar3 - iVar14) * 0x10),
                      (longlong)iVar14 << 4);
            }
            puVar1 = &(this->TickFunctionsToReschedule).field_0x8;
            *(int *)puVar1 = *(int *)puVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(ForAnyElementType *)pTVar2,
                       *(int *)&(this->TickFunctionsToReschedule).field_0x8,
                       (int *)&(this->TickFunctionsToReschedule).field_0xc);
          }
          goto LAB_1488d8033;
        }
      }
      bVar12 = false;
LAB_1488d8033:
      pFVar10 = (this->AllCoolingDownTickFunctions).Head;
      pFVar9 = (FTickFunction *)0x0;
      while (pFVar8 = pFVar10, pFVar8 != (FTickFunction *)0x0) {
        if (bVar12) goto LAB_1488d8226;
        if (pFVar8 == param_1) {
          bVar12 = true;
          pFVar10 = pFVar8;
          if (pFVar9 == (FTickFunction *)0x0) {
            if ((param_1 != (this->AllCoolingDownTickFunctions).Head) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TickFunction == AllCoolingDownTickFunctions.Head",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                                    ,0x72b,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (this->AllCoolingDownTickFunctions).Head = ((param_1->InternalData).Ptr)->Next;
            ((param_1->InternalData).Ptr)->Next = (FTickFunction *)0x0;
          }
          else {
            ((pFVar9->InternalData).Ptr)->Next = ((param_1->InternalData).Ptr)->Next;
            ((param_1->InternalData).Ptr)->Next = (FTickFunction *)0x0;
          }
        }
        else {
          bVar12 = false;
          pFVar10 = ((pFVar8->InternalData).Ptr)->Next;
          pFVar9 = pFVar8;
        }
      }
      if (bVar12) goto LAB_1488d8226;
      iVar14 = 0x736;
    }
    else {
      if (bVar15 != 2) goto LAB_1488d8226;
      pTVar2 = &this->TickFunctionsToReschedule;
      plVar4 = *(longlong **)pTVar2;
      iVar14 = *(int *)&(this->TickFunctionsToReschedule).field_0x8;
      for (plVar17 = plVar4; plVar17 != plVar4 + (longlong)iVar14 * 2; plVar17 = plVar17 + 2) {
        if ((FTickFunction *)*plVar17 == param_1) {
          uVar16 = (uint)((longlong)plVar17 - (longlong)plVar4 >> 4);
          bVar12 = uVar16 != 0xffffffff;
          if (bVar12) {
            uVar13 = 0;
            if ((int)uVar16 < iVar14) {
              uVar13 = ~uVar16 >> 0x1f;
            }
            if ((uVar13 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar3 = *(int *)&(this->TickFunctionsToReschedule).field_0x8;
            iVar14 = iVar3 + ~uVar16;
            if (1 < iVar14) {
              iVar14 = 1;
            }
            if (iVar14 != 0) {
              memmove((void *)(*(longlong *)pTVar2 + (longlong)(int)uVar16 * 0x10),
                      (void *)(*(longlong *)pTVar2 + (longlong)(iVar3 - iVar14) * 0x10),
                      (longlong)iVar14 << 4);
            }
            puVar1 = &(this->TickFunctionsToReschedule).field_0x8;
            *(int *)puVar1 = *(int *)puVar1 + -1;
            UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,(ForAnyElementType *)pTVar2,
                       *(int *)&(this->TickFunctionsToReschedule).field_0x8,
                       (int *)&(this->TickFunctionsToReschedule).field_0xc);
          }
          goto LAB_1488d7e51;
        }
      }
      bVar12 = false;
LAB_1488d7e51:
      pFVar10 = (this->AllCoolingDownTickFunctions).Head;
      pFVar9 = (FTickFunction *)0x0;
      while (pFVar8 = pFVar10, pFVar8 != (FTickFunction *)0x0) {
        pTVar18 = &param_1->InternalData;
        if (bVar12) goto LAB_1488d8226;
        if (pFVar8 == param_1) {
          bVar12 = true;
          if (pFVar9 == (FTickFunction *)0x0) {
            if ((param_1 != (this->AllCoolingDownTickFunctions).Head) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("TickFunction == AllCoolingDownTickFunctions.Head",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                                    ,0x75b,L""), bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            (this->AllCoolingDownTickFunctions).Head = pTVar18->Ptr->Next;
          }
          else {
            ((pFVar9->InternalData).Ptr)->Next = pTVar18->Ptr->Next;
          }
          pFVar5 = pTVar18->Ptr->Next;
          pFVar10 = pFVar8;
          if (pFVar5 != (FTickFunction *)0x0) {
            pFVar6 = (pFVar5->InternalData).Ptr;
            pFVar6->RelativeTickCooldown =
                 pTVar18->Ptr->RelativeTickCooldown + pFVar6->RelativeTickCooldown;
            pTVar18->Ptr->Next = (FTickFunction *)0x0;
          }
        }
        else {
          bVar12 = false;
          pFVar10 = ((pFVar8->InternalData).Ptr)->Next;
          pFVar9 = pFVar8;
        }
      }
      if (bVar12) goto LAB_1488d8226;
      iVar14 = 0x76a;
    }
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("bFound",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                        ,iVar14,L"");
  }
joined_r0x0001488d81eb:
  if (bVar12) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
LAB_1488d8226:
  if (this->bTickNewlySpawned == false) {
    return;
  }
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::Remove
            (&this->NewlySpawnedTickFunctions,param_1);
  return;
}

// RescheduleForInterval @ 1488da9c0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickTaskLevel::RescheduleForInterval(FTickTaskLevel *this,FTickFunction *param_1,float param_2)

{
  undefined1 *puVar1;
  TArrayWithThreadsafeAdd<FTickTaskLevel::FTickScheduleDetails,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  FInternalData *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  FTickFunction *local_18;
  float fStack_10;
  uint uStack_c;
  
  pFVar4 = (param_1->InternalData).Ptr;
  pTVar2 = &this->TickFunctionsToReschedule;
  uStack_c = uStack_c & 0xffffff00;
  pFVar4->bWasInterval = true;
  local_18 = param_1;
  fStack_10 = param_2;
  if ((*(FTickFunction ***)pTVar2 <= &local_18) &&
     (&local_18 <
      *(FTickFunction ***)pTVar2 +
      (longlong)*(int *)&(this->TickFunctionsToReschedule).field_0xc * 2)) {
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
  iVar7 = *(int *)&(this->TickFunctionsToReschedule).field_0x8;
  puVar1 = &(this->TickFunctionsToReschedule).field_0xc;
  if (iVar7 == *(int *)puVar1) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,(ForAnyElementType *)pTVar2,(int *)puVar1);
  }
  *(int *)&(this->TickFunctionsToReschedule).field_0x8 = iVar7 + 1;
  puVar3 = (undefined8 *)(*(longlong *)pTVar2 + (longlong)iVar7 * 0x10);
  *puVar3 = local_18;
  puVar3[1] = CONCAT44(uStack_c,fStack_10);
  return;
}

// RunPauseFrame @ 1488dbcd0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickTaskLevel::RunPauseFrame(FTickTaskLevel *this,FTickContext *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  FScriptContainerElement *pFVar4;
  uchar uVar5;
  FInternalData *pFVar6;
  undefined8 *puVar7;
  FTickFunction *pFVar8;
  FInternalData *pFVar9;
  FTickFunction *pFVar10;
  code *pcVar11;
  atomic<unsigned_int> aVar12;
  bool bVar13;
  int iVar14;
  longlong lVar15;
  ulonglong uVar16;
  ForAnyElementType FVar17;
  FTickFunction *pFVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  uint uVar22;
  float fVar23;
  float fVar24;
  undefined1 local_res8 [8];
  undefined8 *local_res18 [2];
  FTickFunction *local_b8;
  ForAnyElementType local_b0;
  uint local_a8;
  uint uStack_a4;
  undefined8 local_a0;
  float fStack_98;
  uint uStack_94;
  undefined8 local_90;
  float fStack_88;
  uint uStack_84;
  undefined1 local_80 [12];
  uint local_74;
  longlong local_70;
  uint local_68;
  int local_64;
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator> *local_58;
  
  if ((*(int *)&(this->NewlySpawnedTickFunctions).Elements.field_0x8 !=
       *(int *)&(this->NewlySpawnedTickFunctions).Elements.field_0x34) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("!NewlySpawnedTickFunctions.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                          ,0x623,L""), bVar13)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_b0.Data = (FScriptContainerElement *)0x0;
  local_a8 = 0;
  uStack_a4 = 0;
  fVar24 = 0.0;
  pFVar8 = (this->AllCoolingDownTickFunctions).Head;
  pFVar10 = (FTickFunction *)0x0;
  do {
    pFVar18 = pFVar8;
    local_b8 = pFVar18;
    if (pFVar18 == (FTickFunction *)0x0) {
      TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::TIterator::
      TIterator((TIterator *)local_80,&this->AllEnabledTickFunctions);
      if (local_64 < *(int *)(local_70 + 0x18)) {
        do {
          iVar14 = local_64;
          local_b8 = *(FTickFunction **)(*(longlong *)local_80._0_8_ + (longlong)local_64 * 0x10);
          pFVar6 = (local_b8->InternalData).Ptr;
          if (pFVar6 != (FInternalData *)0x0) {
            pFVar6->TaskState = NotQueued;
            ((local_b8->InternalData).Ptr)->TaskPointer = (void *)0x0;
          }
          if ((local_b8->bTickEvenWhenPaused != 0) && (local_b8->TickState == Enabled)) {
            if ((local_b0.Data <= (FScriptContainerElement *)&local_b8) &&
               (((FScriptContainerElement *)&local_b8 < local_b0.Data + (longlong)(int)uStack_a4 * 8
                && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar13)))) {
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            if (local_a8 == uStack_a4) {
              local_a8 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x808,&local_b0,(int *)&uStack_a4);
            }
            uVar22 = local_a8 + 1;
            *(FTickFunction **)(local_b0.Data + (longlong)(int)local_a8 * 8) = local_b8;
            local_a8 = uVar22;
            if (0.0 < local_b8->TickInterval) {
              TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::
              RemoveByIndex(local_58,iVar14);
              RescheduleForInterval(this,local_b8,local_b8->TickInterval);
            }
          }
          local_68 = local_68 & ~local_74;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_80 + 8));
        } while (local_64 < *(int *)(local_70 + 0x18));
      }
      if ((*(int *)&(this->NewlySpawnedTickFunctions).Elements.field_0x8 !=
           *(int *)&(this->NewlySpawnedTickFunctions).Elements.field_0x34) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("!NewlySpawnedTickFunctions.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                              ,0x662,L""), bVar13)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      uVar22 = local_a8;
      fVar24 = __real_bf800000;
      uVar16 = (ulonglong)(int)local_a8;
      pFVar4 = local_b0.Data + uVar16 * 8;
      FVar17.Data = local_b0.Data;
      while( true ) {
        if ((uint)uVar16 != uVar22) {
          `TCheckedPointerIterator<FTickFunction_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        aVar12 = GFrameCounter._0_4_;
        if (FVar17.Data == pFVar4) break;
        pFVar10 = *(FTickFunction **)FVar17.Data;
        local_res18[0] = (undefined8 *)0x0;
        ((pFVar10->InternalData).Ptr)->TickVisitedGFrameCounter = GFrameCounter._0_4_;
        ((pFVar10->InternalData).Ptr)->TickQueuedGFrameCounter = aVar12;
        pFVar6 = (pFVar10->InternalData).Ptr;
        uVar5 = (param_1->TickType).Value;
        pcVar11 = *(code **)(pFVar10->_padding_ + 0x18);
        fVar23 = param_1->DeltaSeconds;
        fVar20 = fVar24;
        if (pFVar6->bWasInterval) {
          fVar20 = (float)(&param_1->World->TimeSeconds)[pFVar10->bTickEvenWhenPaused];
          if (0.0 <= pFVar6->LastTickGameTimeSeconds) {
            fVar23 = fVar20 - pFVar6->LastTickGameTimeSeconds;
          }
        }
        pFVar6->LastTickGameTimeSeconds = fVar20;
        (*pcVar11)(pFVar10,fVar23,uVar5,1,local_res18);
        if (local_res18[0] != (undefined8 *)0x0) {
          LOCK();
          piVar2 = (int *)(local_res18[0] + 6);
          iVar14 = *piVar2;
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if ((iVar14 == 1) && (local_res18[0] != (undefined8 *)0x0)) {
            (**(code **)*local_res18[0])(local_res18[0],1);
          }
        }
        uVar16 = (ulonglong)local_a8;
        FVar17.Data = FVar17.Data + 8;
      }
      if (local_b0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b0.Data);
      }
      return;
    }
    fVar24 = fVar24 + ((pFVar18->InternalData).Ptr)->RelativeTickCooldown;
    if (pFVar18->bTickEvenWhenPaused != 0) {
      pFVar6 = (pFVar18->InternalData).Ptr;
      if (pFVar6 != (FInternalData *)0x0) {
        pFVar6->TaskState = NotQueued;
        ((pFVar18->InternalData).Ptr)->TaskPointer = (void *)0x0;
      }
      if (param_1->DeltaSeconds <= fVar24) {
        fStack_88 = fVar24 - param_1->DeltaSeconds;
        uStack_84 = uStack_84 & 0xffffff00;
        pFVar6 = (pFVar18->InternalData).Ptr;
        pFVar6->bWasInterval = true;
        puVar7 = *(undefined8 **)&this->TickFunctionsToReschedule;
        local_90 = pFVar18;
        if (((puVar7 <= &local_90) &&
            (&local_90 < puVar7 + (longlong)*(int *)&(this->TickFunctionsToReschedule).field_0xc * 2
            )) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar14 = *(int *)&(this->TickFunctionsToReschedule).field_0x8;
        puVar1 = &(this->TickFunctionsToReschedule).field_0xc;
        if (iVar14 == *(int *)puVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)&this->TickFunctionsToReschedule,
                              (int *)puVar1);
        }
        uVar19 = (undefined4)local_90;
        uVar21 = local_90._4_4_;
        fVar23 = fStack_88;
        uVar22 = uStack_84;
      }
      else {
        if (((local_b0.Data <= (FScriptContainerElement *)&local_b8) &&
            ((FScriptContainerElement *)&local_b8 < local_b0.Data + (longlong)(int)uStack_a4 * 8))
           && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        if (local_a8 == uStack_a4) {
          local_a8 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&local_b0,(int *)&uStack_a4);
        }
        lVar15 = (longlong)(int)local_a8;
        uStack_94 = uStack_94 & 0xffffff00;
        local_a8 = local_a8 + 1;
        *(FTickFunction **)(local_b0.Data + lVar15 * 8) = local_b8;
        local_a0 = local_b8;
        pFVar6 = (local_b8->InternalData).Ptr;
        fStack_98 = local_b8->TickInterval - (param_1->DeltaSeconds - fVar24);
        pFVar6->bWasInterval = true;
        puVar7 = *(undefined8 **)&this->TickFunctionsToReschedule;
        if (((puVar7 <= &local_a0) &&
            (&local_a0 < puVar7 + (longlong)*(int *)&(this->TickFunctionsToReschedule).field_0xc * 2
            )) && (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        iVar14 = *(int *)&(this->TickFunctionsToReschedule).field_0x8;
        puVar1 = &(this->TickFunctionsToReschedule).field_0xc;
        if (iVar14 == *(int *)puVar1) {
          iVar14 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,(ForAnyElementType *)&this->TickFunctionsToReschedule,
                              (int *)puVar1);
        }
        uVar19 = (undefined4)local_a0;
        uVar21 = local_a0._4_4_;
        fVar23 = fStack_98;
        uVar22 = uStack_94;
      }
      *(int *)&(this->TickFunctionsToReschedule).field_0x8 = iVar14 + 1;
      puVar3 = (undefined4 *)
               (*(longlong *)&this->TickFunctionsToReschedule + (longlong)iVar14 * 0x10);
      *puVar3 = uVar19;
      puVar3[1] = uVar21;
      puVar3[2] = fVar23;
      puVar3[3] = uVar22;
      if (pFVar10 == (FTickFunction *)0x0) {
        if ((local_b8 != (this->AllCoolingDownTickFunctions).Head) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("TickFunction == AllCoolingDownTickFunctions.Head",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                                ,0x641,L""), bVar13)) {
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        (this->AllCoolingDownTickFunctions).Head = ((local_b8->InternalData).Ptr)->Next;
      }
      else {
        ((pFVar10->InternalData).Ptr)->Next = ((local_b8->InternalData).Ptr)->Next;
      }
      pFVar6 = (local_b8->InternalData).Ptr;
      pFVar8 = pFVar6->Next;
      pFVar18 = pFVar10;
      if (pFVar8 != (FTickFunction *)0x0) {
        pFVar9 = (pFVar8->InternalData).Ptr;
        pFVar9->RelativeTickCooldown = pFVar6->RelativeTickCooldown + pFVar9->RelativeTickCooldown;
        fVar24 = fVar24 - ((local_b8->InternalData).Ptr)->RelativeTickCooldown;
      }
    }
    pFVar8 = ((local_b8->InternalData).Ptr)->Next;
    pFVar10 = pFVar18;
  } while( true );
}

// ScheduleTickFunctionCooldowns @ 1488dceb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall FTickTaskLevel::ScheduleTickFunctionCooldowns(FTickTaskLevel *this)

{
  float fVar1;
  FInternalData *pFVar2;
  code *pcVar3;
  FIdentityFunctor FVar4;
  bool bVar5;
  FTickFunction *pFVar6;
  FIdentityFunctor FVar7;
  bool bVar8;
  FTickFunction *pFVar9;
  bool bVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_ScheduleCooldowns> FVar13;
  FName FVar14;
  uint uVar15;
  FTickFunction *pFVar16;
  FTickFunction *pFVar17;
  FTickFunction *pFVar18;
  longlong lVar19;
  float fVar20;
  float fVar21;
  undefined1 local_res10 [8];
  FColor_u_0 local_res18 [2];
  FName local_res20;
  FName local_88;
  FName local_80;
  
  if (*(int *)&(this->TickFunctionsToReschedule).field_0x8 < 1) {
    return;
  }
  pFVar16 = (FTickFunction *)0x0;
  FVar13 = StatPtr_STAT_ScheduleCooldowns;
  if (StatPtr_STAT_ScheduleCooldowns == (FThreadSafeStaticStat<FStat_STAT_ScheduleCooldowns>)0x0) {
    pFVar12 = ::FName::FName(&local_88,"STAT_ScheduleCooldowns");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_ScheduleCooldowns>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_ScheduleCooldowns,*pFVar12,
                        L"Schedule cooldowns","STATGROUP_Game","STATCAT_Advanced",L"Game",true,true,
                        ST_int64,true,false,MCR_Invalid);
  }
  FVar14 = *(FName *)FVar13;
  bVar5 = false;
  FVar4 = (FIdentityFunctor)0x0;
  local_80.ComparisonIndex.Value = 0;
  local_80.Number = 0;
  bVar8 = false;
  FVar7 = (FIdentityFunctor)0x0;
  if ((FVar14.ComparisonIndex.Value.Value != 0) || (FVar14.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar5 = false;
      FVar4 = (FIdentityFunctor)0x1;
      bVar8 = false;
      FVar7 = (FIdentityFunctor)0x1;
      if (-1 < CpuChannel->Enabled) {
        local_res20.ComparisonIndex.Value = FVar14.ComparisonIndex.Value.Value;
        local_res20.Number = FVar14.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res20,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                   ,0x570);
        bVar5 = true;
        FVar4 = (FIdentityFunctor)0x1;
        bVar8 = true;
        FVar7 = (FIdentityFunctor)0x1;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar8 = true;
      goto LAB_1488dd045;
    }
  }
  bVar5 = bVar8;
  FVar4 = FVar7;
  bVar8 = false;
  FVar14 = local_80;
LAB_1488dd045:
  AlgoImpl::
  IntroSortInternal<FTickTaskLevel::FTickScheduleDetails,int,FIdentityFunctor,TDereferenceWrapper<FTickTaskLevel::FTickScheduleDetails,_FTickTaskLevel::ScheduleTickFunctionCooldowns_::__l5::<lambda_1>_>_>
            (*(FTickScheduleDetails **)&this->TickFunctionsToReschedule,
             *(int *)&(this->TickFunctionsToReschedule).field_0x8,FVar4,(<lambda_1> *)local_res10);
  pFVar9 = (this->AllCoolingDownTickFunctions).Head;
  fVar21 = 0.0;
  pFVar17 = pFVar16;
  pFVar18 = pFVar16;
  while ((pFVar6 = pFVar9, uVar11 = (uint)pFVar16, pFVar6 != (FTickFunction *)0x0 &&
         ((int)uVar11 < *(int *)&(this->TickFunctionsToReschedule).field_0x8))) {
    if (((int)uVar11 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    fVar1 = *(float *)(&pFVar18->TickGroup + *(longlong *)&this->TickFunctionsToReschedule);
    pFVar2 = (pFVar6->InternalData).Ptr;
    fVar20 = fVar21 + pFVar2->RelativeTickCooldown;
    if (fVar20 <= fVar1) {
      pFVar9 = pFVar2->Next;
      fVar21 = fVar20;
      pFVar17 = pFVar6;
    }
    else {
      uVar15 = 0;
      if ((int)uVar11 < *(int *)&(this->TickFunctionsToReschedule).field_0x8) {
        uVar15 = ~uVar11 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = *(FTickFunction **)
                 ((longlong)&pFVar18->_padding_ + *(longlong *)&this->TickFunctionsToReschedule);
      if ((!((pFVar16->InternalData).Ptr)->bWasInterval) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("TickFunction->InternalData->bWasInterval",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                              ,0x581,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (pFVar16->TickState != Disabled) {
        pFVar16->field_0xb = pFVar16->field_0xb & 0xfb | 8;
        ((pFVar16->InternalData).Ptr)->RelativeTickCooldown = fVar1 - fVar21;
        if (pFVar17 == (FTickFunction *)0x0) {
          if ((pFVar6 != (this->AllCoolingDownTickFunctions).Head) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ComparisonTickFunction == AllCoolingDownTickFunctions.Head",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                                  ,0x58d,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (this->AllCoolingDownTickFunctions).Head = pFVar16;
        }
        else {
          ((pFVar17->InternalData).Ptr)->Next = pFVar16;
        }
        ((pFVar16->InternalData).Ptr)->Next = pFVar6;
        pFVar2 = (pFVar6->InternalData).Ptr;
        pFVar2->RelativeTickCooldown =
             pFVar2->RelativeTickCooldown - ((pFVar16->InternalData).Ptr)->RelativeTickCooldown;
        fVar21 = fVar21 + ((pFVar16->InternalData).Ptr)->RelativeTickCooldown;
        pFVar17 = pFVar16;
      }
      pFVar16 = (FTickFunction *)(ulonglong)(uVar11 + 1);
      pFVar18 = (FTickFunction *)&pFVar18->Prerequisites;
      pFVar9 = pFVar6;
    }
  }
  if ((int)uVar11 < *(int *)&(this->TickFunctionsToReschedule).field_0x8) {
    lVar19 = (longlong)(int)uVar11 << 4;
    do {
      uVar15 = (uint)pFVar16;
      uVar11 = 0;
      if ((int)uVar15 < *(int *)&(this->TickFunctionsToReschedule).field_0x8) {
        uVar11 = ~uVar15 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar16 = *(FTickFunction **)(lVar19 + *(longlong *)&this->TickFunctionsToReschedule);
      if (pFVar16->TickState != Disabled) {
        uVar11 = 0;
        if ((int)uVar15 < *(int *)&(this->TickFunctionsToReschedule).field_0x8) {
          uVar11 = ~uVar15 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar1 = *(float *)(lVar19 + 8 + *(longlong *)&this->TickFunctionsToReschedule);
        pFVar16->field_0xb = pFVar16->field_0xb & 0xfb | 8;
        ((pFVar16->InternalData).Ptr)->RelativeTickCooldown = fVar1 - fVar21;
        ((pFVar16->InternalData).Ptr)->Next = (FTickFunction *)0x0;
        if (pFVar17 == (FTickFunction *)0x0) {
          if ((pFVar6 != (this->AllCoolingDownTickFunctions).Head) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ComparisonTickFunction == AllCoolingDownTickFunctions.Head",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                                  ,0x5b0,L""), bVar10)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          (this->AllCoolingDownTickFunctions).Head = pFVar16;
        }
        else {
          ((pFVar17->InternalData).Ptr)->Next = pFVar16;
        }
        fVar21 = fVar21 + ((pFVar16->InternalData).Ptr)->RelativeTickCooldown;
        pFVar17 = pFVar16;
      }
      pFVar16 = (FTickFunction *)(ulonglong)(uVar15 + 1);
      lVar19 = lVar19 + 0x10;
    } while ((int)(uVar15 + 1) < *(int *)&(this->TickFunctionsToReschedule).field_0x8);
  }
  *(undefined4 *)&(this->TickFunctionsToReschedule).field_0x8 = 0;
  if (*(int *)&(this->TickFunctionsToReschedule).field_0xc < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)&this->TickFunctionsToReschedule,0,
               (int *)&(this->TickFunctionsToReschedule).field_0xc);
  }
  if ((bool)FVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar8) {
    FThreadStats::AddMessage(FVar14,CycleScopeEnd);
  }
  return;
}

// StartFrameParallel @ 1488e1a40

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __thiscall
FTickTaskLevel::StartFrameParallel
          (FTickTaskLevel *this,FTickContext *param_1,
          TArray<FTickFunction_*,TSizedDefaultAllocator<32>_> *param_2)

{
  undefined1 *puVar1;
  TArrayWithThreadsafeAdd<FTickTaskLevel::FTickScheduleDetails,TSizedDefaultAllocator<32>_> *pTVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  FScriptContainerElement *pFVar6;
  FInternalData *pFVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  int iVar11;
  float fVar12;
  FTickFunction *local_68;
  undefined8 local_60;
  FTickFunction *local_58;
  float fStack_50;
  uint uStack_4c;
  undefined1 local_48 [12];
  uint local_3c;
  longlong local_38;
  uint local_30;
  int local_2c;
  
  if ((*(int *)&(this->NewlySpawnedTickFunctions).Elements.field_0x8 !=
       *(int *)&(this->NewlySpawnedTickFunctions).Elements.field_0x34) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("!NewlySpawnedTickFunctions.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\TickTaskManager.cpp"
                          ,0x503,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  (this->Context).TickGroup.Value = '\0';
  (this->Context).DeltaSeconds = param_1->DeltaSeconds;
  (this->Context).TickType.Value = (param_1->TickType).Value;
  (this->Context).Thread = GameThread;
  (this->Context).World = param_1->World;
  this->bTickNewlySpawned = true;
  TSet<FTickFunction_*,DefaultKeyFuncs<FTickFunction_*,0>,FDefaultSetAllocator>::TIterator::
  TIterator((TIterator *)local_48,&this->AllEnabledTickFunctions);
  if (local_2c < *(int *)(local_38 + 0x18)) {
    do {
      local_60 = *(undefined8 *)(*(longlong *)local_48._0_8_ + (longlong)local_2c * 0x10);
      pFVar6 = (param_2->AllocatorInstance).Data;
      if (((pFVar6 <= (FScriptContainerElement *)&local_60) &&
          ((FScriptContainerElement *)&local_60 < pFVar6 + (longlong)param_2->ArrayMax * 8)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar11 = param_2->ArrayNum;
      if (iVar11 == param_2->ArrayMax) {
        iVar11 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar11 + 1;
      *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_60;
      local_30 = local_30 & ~local_3c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_48 + 8));
    } while (local_2c < *(int *)(local_38 + 0x18));
  }
  ScheduleTickFunctionCooldowns(this);
  local_68 = (this->AllCoolingDownTickFunctions).Head;
  fVar9 = 0.0;
  while( true ) {
    if (local_68 == (FTickFunction *)0x0) {
      return;
    }
    pFVar7 = (local_68->InternalData).Ptr;
    fVar4 = (this->Context).DeltaSeconds;
    fVar5 = pFVar7->RelativeTickCooldown;
    fVar12 = fVar5 + fVar9;
    if (fVar4 <= fVar12) {
      pFVar7->RelativeTickCooldown = fVar5 - (fVar4 - fVar9);
      return;
    }
    local_68->field_0xb = local_68->field_0xb & 0xf7;
    local_68->field_0xb = local_68->field_0xb | 4;
    pFVar6 = (param_2->AllocatorInstance).Data;
    if (((pFVar6 <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 < pFVar6 + (longlong)param_2->ArrayMax * 8)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    iVar11 = param_2->ArrayNum;
    if (iVar11 == param_2->ArrayMax) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
      param_2->ArrayNum = iVar11;
    }
    pTVar2 = &this->TickFunctionsToReschedule;
    param_2->ArrayNum = iVar11 + 1;
    uStack_4c = uStack_4c & 0xffffff00;
    *(FTickFunction **)((param_2->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_68;
    local_58 = local_68;
    pFVar7 = (local_68->InternalData).Ptr;
    fStack_50 = local_68->TickInterval - ((this->Context).DeltaSeconds - fVar12);
    pFVar7->bWasInterval = true;
    if (((*(FTickFunction ***)pTVar2 <= &local_58) &&
        (&local_58 <
         *(FTickFunction ***)pTVar2 +
         (longlong)*(int *)&(this->TickFunctionsToReschedule).field_0xc * 2)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar10)) break;
    iVar11 = *(int *)&(this->TickFunctionsToReschedule).field_0x8;
    puVar1 = &(this->TickFunctionsToReschedule).field_0xc;
    if (iVar11 == *(int *)puVar1) {
      iVar11 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x810,(ForAnyElementType *)pTVar2,(int *)puVar1);
    }
    *(int *)&(this->TickFunctionsToReschedule).field_0x8 = iVar11 + 1;
    puVar3 = (undefined8 *)(*(longlong *)pTVar2 + (longlong)iVar11 * 0x10);
    *puVar3 = local_58;
    puVar3[1] = CONCAT44(uStack_4c,fStack_50);
    (this->AllCoolingDownTickFunctions).Head = ((local_68->InternalData).Ptr)->Next;
    local_68 = ((local_68->InternalData).Ptr)->Next;
    fVar9 = fVar12;
  }
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

// operator() @ 1505332d0

bool __thiscall `FTickTaskLevel::EndFrame'::__l5::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<7009048750584759934>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<7009048750584759934>,
                       &`public:___cdecl_`public:_void___cdecl_FTickTaskLevel::EndFrame(void)___ptr64'::`5'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

