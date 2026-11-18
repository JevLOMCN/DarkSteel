// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 4

// StaticStruct @ 147917a50

UScriptStruct * __cdecl FSkeletalMeshComponentEndPhysicsTickFunction::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction.OuterSingleton
      == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction,
                         (UObject *)pUVar1,L"SkeletalMeshComponentEndPhysicsTickFunction");
  }
  return Z_Registration_Info_UScriptStruct_FSkeletalMeshComponentEndPhysicsTickFunction.
         OuterSingleton;
}

// DiagnosticContext @ 148637d30

FName __thiscall
FSkeletalMeshComponentEndPhysicsTickFunction::DiagnosticContext
          (FSkeletalMeshComponentEndPhysicsTickFunction *this,bool param_1)

{
  undefined7 in_register_00000011;
  FName this_00;
  
  this_00._1_7_ = in_register_00000011;
  this_00.ComparisonIndex.Value._0_1_ = param_1;
  ::FName::FName((FName *)this_00,L"SkeletalMeshComponentEndPhysicsTick");
  return this_00;
}

// DiagnosticMessage @ 148637dd0

FString * __thiscall
FSkeletalMeshComponentEndPhysicsTickFunction::DiagnosticMessage
          (FSkeletalMeshComponentEndPhysicsTickFunction *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString local_18;
  
  if (this->Target == (USkeletalMeshComponent *)0x0) {
    ::FString::FString(__return_storage_ptr__,L"<NULL>[EndPhysicsTick]");
  }
  else {
    pFVar1 = UObjectBaseUtility::GetFullName
                       ((UObjectBaseUtility *)this->Target,&local_18,(UObject *)0x0,None);
    ::FString::ConcatFC(__return_storage_ptr__,pFVar1,L"[EndPhysicsTick]");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
      return __return_storage_ptr__;
    }
  }
  return __return_storage_ptr__;
}

// ExecuteTick @ 14863e960

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
FSkeletalMeshComponentEndPhysicsTickFunction::ExecuteTick
          (FSkeletalMeshComponentEndPhysicsTickFunction *this,float param_1,ELevelTick param_2,
          Type param_3,TRefCountPtr<FBaseGraphTask> *param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_public:_virtual_void___cdecl_FSkeletalMeshComponentEndPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_FSkeletalMeshComponentEndPhysicsTickFunction_ExecuteTick>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  LARGE_INTEGER LVar7;
  undefined4 uVar8;
  LARGE_INTEGER local_res8;
  FStatMessage local_48;
  LARGE_INTEGER local_38;
  
  uVar8 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_FSkeletalMeshComponentEndPhysicsTickFunction_ExecuteTick ==
          (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FSkeletalMeshComponentEndPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_FSkeletalMeshComponentEndPhysicsTickFunction_ExecuteTick>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_res8.s,
                                "FSkeletalMeshComponentEndPhysicsTickFunction_ExecuteTick");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)
                   &StatPtr_FSkeletalMeshComponentEndPhysicsTickFunction_ExecuteTick,*pFVar5,
                   L"FSkeletalMeshComponentEndPhysicsTickFunction_ExecuteTick","STATGROUP_Quick",
                   "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_FSkeletalMeshComponentEndPhysicsTickFunction_ExecuteTick;
  if (StatPtr_FSkeletalMeshComponentEndPhysicsTickFunction_ExecuteTick ==
      (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FSkeletalMeshComponentEndPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_FSkeletalMeshComponentEndPhysicsTickFunction_ExecuteTick>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_48,
                            "FSkeletalMeshComponentEndPhysicsTickFunction_ExecuteTick");
    FVar6 = (FThreadSafeStaticStat<_public:_virtual_void___cdecl_FSkeletalMeshComponentEndPhysicsTickFunction::ExecuteTick(float,ELevelTick,ENamedThreads::Type,TRefCountPtr<FBaseGraphTask>_const_&)_::_2_::FStat_FSkeletalMeshComponentEndPhysicsTickFunction_ExecuteTick>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &StatPtr_FSkeletalMeshComponentEndPhysicsTickFunction_ExecuteTick,*pFVar5,
                         L"FSkeletalMeshComponentEndPhysicsTickFunction_ExecuteTick",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  LVar7 = *(LARGE_INTEGER *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_38.s.LowPart = 0;
  local_38.s.HighPart = 0;
  if ((LVar7.s.LowPart != 0) || (LVar7.s.HighPart != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.QuadPart = local_res8.QuadPart & 0xffffffff00000000;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8 = LVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\SkeletalMeshComponentPhysics.cpp"
                   ,0x65);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8 = LVar7;
      local_38 = LVar7;
      FThreadStats::AddMessage((FName)LVar7.s,CycleScopeStart);
      bVar3 = true;
      uVar8 = local_38._0_4_;
      goto LAB_14863eaf2;
    }
  }
  bVar3 = false;
  LVar7 = local_38;
LAB_14863eaf2:
  if (__CsvProfilerStat102 == false) {
    FCsvProfilerTrace::OutputInlineStatExclusive("Physics");
    __CsvProfilerStat102 = true;
  }
  FCsvProfiler::BeginExclusiveStat("Physics","CSV_Physics");
  local_res8 = (LARGE_INTEGER)this;
  FActorComponentTickFunction::
  ExecuteTickHelper<_FSkeletalMeshComponentEndPhysicsTickFunction::ExecuteTick_::__l2::<lambda_1>_>
            ((UActorComponent *)this->Target,false,param_1,param_2,(<lambda_1> *)&local_res8.s);
  FCsvProfiler::EndExclusiveStat("Physics");
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && ((FName)LVar7.QuadPart != (FName)0x0)) &&
      (FThreadStats::bPrimaryDisableForever == false)) && (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_48.NameAndInfo.Number = LVar7.s.HighPart & 0xffff6fffU | 0x6000;
      local_48.NameAndInfo.Index.Value = uVar8;
      QueryPerformanceCounter(&local_res8);
      local_48.StatData.Pad = (uchar  [8])(local_res8.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,&local_48);
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

