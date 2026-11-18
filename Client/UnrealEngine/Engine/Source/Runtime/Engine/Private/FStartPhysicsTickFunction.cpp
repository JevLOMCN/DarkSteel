// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// DiagnosticContext @ 1482f48b0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FName __thiscall
FStartPhysicsTickFunction::DiagnosticContext(FStartPhysicsTickFunction *this,bool param_1)

{
  undefined7 in_register_00000011;
  FName this_00;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ComparisonIndex.Value._0_1_ = param_1;
  ::FName::FName((FName *)this_00,L"StartPhysicsTick");
  return this_00;
}

// DiagnosticMessage @ 1482f4910

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FString * __thiscall
FStartPhysicsTickFunction::DiagnosticMessage
          (FStartPhysicsTickFunction *this,FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"FStartPhysicsTickFunction");
  return __return_storage_ptr__;
}

// ExecuteTick @ 148301ca0

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
FStartPhysicsTickFunction::ExecuteTick
          (FStartPhysicsTickFunction *this,float param_1,ELevelTick param_2,Type param_3,
          TRefCountPtr<FBaseGraphTask> *param_4)

{
  int *piVar1;
  FPhysScene_Chaos *this_00;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FStartPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_FStartPhysicsTickFunction_ExecuteTick>
  FVar8;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar9;
  FNameEntryId FVar10;
  FName FVar11;
  FColor_u_0 local_res8 [2];
  FName local_58;
  LARGE_INTEGER local_50;
  FName local_48;
  FName local_40;
  FName local_38;
  FStatMessage local_28;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FStartPhysicsTickFunction_ExecuteTick ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FStartPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_FStartPhysicsTickFunction_ExecuteTick>
           )0x0) {
        pFVar7 = ::FName::FName(&local_48,"FStartPhysicsTickFunction_ExecuteTick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_FStartPhysicsTickFunction_ExecuteTick,
                   *pFVar7,L"FStartPhysicsTickFunction_ExecuteTick","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar8 = StatPtr_FStartPhysicsTickFunction_ExecuteTick;
  if (StatPtr_FStartPhysicsTickFunction_ExecuteTick ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FStartPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_FStartPhysicsTickFunction_ExecuteTick>
       )0x0) {
    pFVar7 = ::FName::FName(&local_40,"FStartPhysicsTickFunction_ExecuteTick");
    FVar8 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FStartPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_FStartPhysicsTickFunction_ExecuteTick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_FStartPhysicsTickFunction_ExecuteTick
                         ,*pFVar7,L"FStartPhysicsTickFunction_ExecuteTick","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar11 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_38.ComparisonIndex.Value = 0;
  local_38.Number = 0;
  FVar10 = FVar11.ComparisonIndex.Value;
  uVar9 = FVar11.Number;
  if ((FVar10.Value != 0) || (uVar9 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_58.ComparisonIndex.Value = FVar10.Value;
        local_58.Number = uVar9;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_58,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                   ,0xf1);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_50.s.LowPart = FVar10.Value;
      local_50.s.HighPart = uVar9;
      FThreadStats::AddMessage(FVar11,CycleScopeStart);
      bVar4 = true;
      goto LAB_148301e11;
    }
  }
  bVar4 = false;
  FVar11 = local_38;
LAB_148301e11:
  if (__CsvProfilerStat242 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Physics");
    __CsvProfilerStat242 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Physics","CSV_Physics");
  if (this->Target == (UWorld *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Target",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\PhysicsEngine\\PhysLevel.cpp"
                       ,0xf3,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  this_00 = this->Target->PhysicsScene;
  if (this_00 != (FPhysScene_Chaos *)0x0) {
    FChaosScene::StartFrame((FChaosScene *)this_00);
  }
  FCsvProfiler::EndExclusiveStat("Physics");
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
      local_28.NameAndInfo.Index = FVar11.ComparisonIndex.Value;
      local_28.NameAndInfo.Number = FVar11.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_50);
      local_28.StatData.Pad[4] = '\0';
      local_28.StatData.Pad[5] = '\0';
      local_28.StatData.Pad[6] = '\0';
      local_28.StatData.Pad[7] = '\0';
      local_28.StatData.Pad[0] = local_50.s.LowPart._0_1_;
      local_28.StatData.Pad[1] = local_50.s.LowPart._1_1_;
      local_28.StatData.Pad[2] = local_50.s.LowPart._2_1_;
      local_28.StatData.Pad[3] = local_50.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_28);
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
  return;
}

// StaticStruct @ 148998350

UScriptStruct * __cdecl FStartPhysicsTickFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FStartPhysicsTickFunction.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FStartPhysicsTickFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FStartPhysicsTickFunction,(UObject *)pUVar1,
                         L"StartPhysicsTickFunction");
  }
  return Z_Registration_Info_UScriptStruct_FStartPhysicsTickFunction.OuterSingleton;
}

