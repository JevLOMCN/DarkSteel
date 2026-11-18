// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 8

// StaticStruct @ 147a0dbb0

UScriptStruct * __cdecl FCurveTableRowHandle::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FCurveTableRowHandle.OuterSingleton == (UScriptStruct *)0x0)
  {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FCurveTableRowHandle.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FCurveTableRowHandle,(UObject *)pUVar1,
                         L"CurveTableRowHandle");
  }
  return Z_Registration_Info_UScriptStruct_FCurveTableRowHandle.OuterSingleton;
}

// operator== @ 147a2c3e0

bool __thiscall
FCurveTableRowHandle::operator==(FCurveTableRowHandle *this,FCurveTableRowHandle *param_1)

{
  if (((param_1->CurveTable).field0_0x0.DebugPtr == (this->CurveTable).field0_0x0.DebugPtr) &&
     (param_1->RowName == this->RowName)) {
    return true;
  }
  return false;
}

// operator!= @ 147a2ca30

bool __thiscall
FCurveTableRowHandle::operator!=(FCurveTableRowHandle *this,FCurveTableRowHandle *param_1)

{
  if (((param_1->CurveTable).field0_0x0.DebugPtr == (this->CurveTable).field0_0x0.DebugPtr) &&
     (param_1->RowName == this->RowName)) {
    return false;
  }
  return true;
}

// Eval @ 147a40d50

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
FCurveTableRowHandle::Eval(FCurveTableRowHandle *this,float param_1,float *param_2,FString *param_3)

{
  int *piVar1;
  UCurveTable *this_00;
  FName FVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_CurveTableRowHandleEval> FVar7;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  FRealCurve *pFVar8;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  bool bVar12;
  FNameEntryId FVar13;
  float fVar14;
  LARGE_INTEGER local_res8;
  FStatMessage local_58;
  FName local_48;
  
  FVar13.Value = 0;
  FVar7 = StatPtr_STAT_CurveTableRowHandleEval;
  if (StatPtr_STAT_CurveTableRowHandleEval ==
      (FThreadSafeStaticStat<FStat_STAT_CurveTableRowHandleEval>)0x0) {
    pFVar6 = ::FName::FName((FName *)&local_58,"STAT_CurveTableRowHandleEval");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_CurveTableRowHandleEval>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CurveTableRowHandleEval,*pFVar6,
                       L"CurveTableRowHandle Eval","STATGROUP_Engine","STATCAT_Advanced",L"Engine",
                       true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value == 0) && (uVar9 == 0)) {
LAB_147a40ebc:
    bVar4 = false;
    FVar11 = local_48;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar10.Value;
        local_res8.s.HighPart = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\CurveTable.cpp"
                   ,0x46f);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_147a40ebc;
    local_res8.s.LowPart = FVar10.Value;
    local_res8.s.HighPart = uVar9;
    local_48 = FVar11;
    FThreadStats::AddMessage(FVar11,CycleScopeStart);
    bVar4 = true;
    FVar13.Value = local_48.ComparisonIndex.Value;
  }
  this_00 = (this->CurveTable).field0_0x0.DebugPtr;
  FVar2 = this->RowName;
  if (this_00 == (UCurveTable *)0x0) {
    if ((FVar2 != (FName)0x0) && (2 < (byte)LogCurveTable._0_1_)) {
      ::FName::ToString(&this->RowName,(FString *)&local_58);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCurveTable);
      if (local_58.StatData.Pad != (uchar  [8])0x0) {
        FMemory::Free((void *)local_58.StatData.Pad);
      }
    }
  }
  else {
    pFVar8 = UCurveTable::FindCurve(this_00,FVar2,param_3,true);
    if ((pFVar8 != (FRealCurve *)0x0) && (param_2 != (float *)0x0)) {
      fVar14 = (float)(**(code **)(pFVar8->_padding_ + 0x88))(pFVar8,param_1,0);
      *param_2 = fVar14;
      bVar12 = true;
      goto LAB_147a40f36;
    }
  }
  bVar12 = false;
LAB_147a40f36:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar11 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_58.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      local_58.NameAndInfo.Index.Value = FVar13.Value;
      QueryPerformanceCounter(&local_res8);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_58);
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
  return bVar12;
}

// GetCurve @ 147a4eb80

/* WARNING: Enum "Type": Some values do not have unique names */

FRealCurve * __thiscall
FCurveTableRowHandle::GetCurve(FCurveTableRowHandle *this,FString *param_1,bool param_2)

{
  UCurveTable *this_00;
  FName FVar1;
  FRealCurve *pFVar2;
  FString local_18;
  
  this_00 = (this->CurveTable).field0_0x0.DebugPtr;
  FVar1 = this->RowName;
  if (this_00 == (UCurveTable *)0x0) {
    if (((FVar1 != (FName)0x0) && (2 < (byte)LogCurveTable._0_1_)) && (param_2)) {
      ::FName::ToString(&this->RowName,&local_18);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCurveTable);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    return (FRealCurve *)0x0;
  }
  pFVar2 = UCurveTable::FindCurve(this_00,FVar1,param_1,param_2);
  return pFVar2;
}

// GetRichCurve @ 147a579e0

/* WARNING: Enum "Type": Some values do not have unique names */

FRichCurve * __thiscall
FCurveTableRowHandle::GetRichCurve(FCurveTableRowHandle *this,FString *param_1,bool param_2)

{
  UCurveTable *this_00;
  FName FVar1;
  FRichCurve *pFVar2;
  FString local_18;
  
  this_00 = (this->CurveTable).field0_0x0.DebugPtr;
  FVar1 = this->RowName;
  if (this_00 == (UCurveTable *)0x0) {
    if (FVar1 == (FName)0x0) {
      return (FRichCurve *)0x0;
    }
    if ((byte)LogCurveTable._0_1_ < 3) {
      return (FRichCurve *)0x0;
    }
    if (!param_2) {
      return (FRichCurve *)0x0;
    }
    ::FName::ToString(&this->RowName,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCurveTable);
  }
  else {
    if (this_00->CurveTableMode != SimpleCurves) {
      pFVar2 = (FRichCurve *)UCurveTable::FindCurve(this_00,FVar1,param_1,param_2);
      return pFVar2;
    }
    if ((byte)LogCurveTable._0_1_ < 2) {
      return (FRichCurve *)0x0;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:_struct_FRichCurve*___ptr64___cdecl_UCurveTable::FindRichCurve(FName,FString_const&___ptr64,bool)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCurveTable);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FRichCurve *)0x0;
}

// GetSimpleCurve @ 147a590a0

/* WARNING: Enum "Type": Some values do not have unique names */

FSimpleCurve * __thiscall
FCurveTableRowHandle::GetSimpleCurve(FCurveTableRowHandle *this,FString *param_1,bool param_2)

{
  UCurveTable *this_00;
  FName FVar1;
  FSimpleCurve *pFVar2;
  FString local_18;
  
  this_00 = (this->CurveTable).field0_0x0.DebugPtr;
  FVar1 = this->RowName;
  if (this_00 == (UCurveTable *)0x0) {
    if (FVar1 == (FName)0x0) {
      return (FSimpleCurve *)0x0;
    }
    if ((byte)LogCurveTable._0_1_ < 3) {
      return (FSimpleCurve *)0x0;
    }
    if (!param_2) {
      return (FSimpleCurve *)0x0;
    }
    ::FName::ToString(&this->RowName,&local_18);
    UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCurveTable);
  }
  else {
    if (this_00->CurveTableMode != RichCurves) {
      pFVar2 = (FSimpleCurve *)UCurveTable::FindCurve(this_00,FVar1,param_1,param_2);
      return pFVar2;
    }
    if ((byte)LogCurveTable._0_1_ < 2) {
      return (FSimpleCurve *)0x0;
    }
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this_00,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<2>
              ((FStaticBasicLogRecord *)
               &`public:_struct_FSimpleCurve*___ptr64___cdecl_UCurveTable::FindSimpleCurve(FName,FString_const&___ptr64,bool)const___ptr64'
                ::__l6::LOG_Static,(FLogCategoryBase *)&LogCurveTable);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return (FSimpleCurve *)0x0;
}

// PostSerialize @ 147a670d0

void __thiscall FCurveTableRowHandle::PostSerialize(FCurveTableRowHandle *this,FArchive *param_1)

{
  code *pcVar1;
  TObjectPtr<UCurveTable_const_>_u_0 local_res10;
  
  if ((param_1->field_0x28 & 4) != 0) {
    local_res10 = (TObjectPtr<UCurveTable_const_>_u_0)(this->CurveTable).field0_0x0.DebugPtr;
    if (local_res10.DebugPtr != (UCurveTable *)0x0) {
      pcVar1 = *(code **)(*(longlong *)param_1 + 0x228);
      if (UE::GC::GIsIncrementalReachabilityPending) {
        UE::GC::MarkAsReachable((UObject *)local_res10.DebugPtr);
      }
      (*pcVar1)(param_1,&local_res10,&this->RowName);
    }
  }
  return;
}

