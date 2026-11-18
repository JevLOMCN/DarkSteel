// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MassEntityTestSuite
// Functions: 9

// StaticClass @ 1470830b0

UClass * __cdecl UFarmHarvestTimerSystem_Crops::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Crops.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"FarmHarvestTimerSystem_Crops",
               &Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Crops.InnerSingleton,
               StaticRegisterNativesUFarmHarvestTimerSystem_Crops,0x430,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UFarmHarvestTimerSystem_Crops>,
               InternalVTableHelperCtorCaller<UFarmHarvestTimerSystem_Crops>,local_res8,
               UFarmProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Crops.InnerSingleton;
}

// UFarmHarvestTimerSystem_Crops @ 1470f5a90

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UFarmHarvestTimerSystem_Crops * __thiscall
UFarmHarvestTimerSystem_Crops::UFarmHarvestTimerSystem_Crops
          (UFarmHarvestTimerSystem_Crops *this,FVTableHelper *param_1)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this,param_1);
  *(undefined ***)this = &___7UFarmProcessorBase__6B_;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->field_0xe0);
  *(undefined ***)this = &___7UFarmHarvestTimerSystem_Crops__6B_;
  return this;
}

// UFarmHarvestTimerSystem_Crops @ 1470f5ad0

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

UFarmHarvestTimerSystem_Crops * __thiscall
UFarmHarvestTimerSystem_Crops::UFarmHarvestTimerSystem_Crops(UFarmHarvestTimerSystem_Crops *this)

{
  UMassProcessor::UMassProcessor((UMassProcessor *)this);
  *(undefined ***)this = &___7UFarmProcessorBase__6B_;
  FMassEntityQuery::FMassEntityQuery((FMassEntityQuery *)&this->field_0xe0,(UMassProcessor *)this);
  this->field_0x62 = this->field_0x62 & 0xfe;
  *(undefined ***)this = &___7UFarmHarvestTimerSystem_Crops__6B_;
  return this;
}

// ~UFarmHarvestTimerSystem_Crops @ 1470f8b80

/* WARNING: Enum "EMassQueryBasedPruning": Some values do not have unique names */

void __thiscall
UFarmHarvestTimerSystem_Crops::~UFarmHarvestTimerSystem_Crops(UFarmHarvestTimerSystem_Crops *this)

{
  *(undefined ***)this = &___7UFarmProcessorBase__6B_;
  FMassEntityQuery::~FMassEntityQuery((FMassEntityQuery *)&this->field_0xe0);
  UMassProcessor::~UMassProcessor((UMassProcessor *)this);
  return;
}

// operator() @ 1470fad00

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
`UFarmHarvestTimerSystem_Crops::Execute'::__l2::<lambda_1>::operator()
          (void *this,FMassExecutionContext *param_1)

{
  code *pcVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  TArrayView<FHarvestTimerFragment,int> local_58;
  TArrayView<FFarmWaterFragment_const_,int> local_48;
  FEntityIterator local_38;
  
  FMassExecutionContext::GetMutableFragmentView<FHarvestTimerFragment>(param_1,&local_58);
  FMassExecutionContext::GetFragmentView<FFarmWaterFragment>(param_1,&local_48);
  FMassExecutionContext::CreateEntityIterator(param_1,&local_38);
  fVar2 = __real_3e800000;
  while( true ) {
    if (local_38.SerialNumber == 0) {
      return;
    }
    lVar6 = (longlong)local_38.EntityIndex;
    if (local_38.NumEntities <= local_38.EntityIndex) {
      return;
    }
    uVar4 = 0;
    if (local_38.EntityIndex < local_48.ArrayNum) {
      uVar4 = (uint)~local_38.EntityIndex >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    lVar7 = (longlong)local_38.EntityIndex;
    uVar5 = (fVar2 < local_48.DataPtr[lVar6].CurrentWater) + 1;
    uVar4 = 0;
    if (local_38.EntityIndex < local_58.ArrayNum) {
      uVar4 = (uint)~local_38.EntityIndex >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) break;
    if (local_58.DataPtr[lVar7].NumSecondsLeft < uVar5) {
      uVar5 = 0;
    }
    else {
      lVar6 = (longlong)local_38.EntityIndex;
      uVar4 = 0;
      if (local_38.EntityIndex < local_58.ArrayNum) {
        uVar4 = (uint)~local_38.EntityIndex >> 0x1f;
      }
      if ((uVar4 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar3)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar5 = local_58.DataPtr[lVar6].NumSecondsLeft - uVar5;
    }
    lVar6 = (longlong)local_38.EntityIndex;
    uVar4 = 0;
    if (local_38.EntityIndex < local_58.ArrayNum) {
      uVar4 = (uint)~local_38.EntityIndex >> 0x1f;
    }
    if ((uVar4 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar3)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_58.DataPtr[lVar6].NumSecondsLeft = uVar5;
    local_38.EntityIndex = local_38.EntityIndex + 1;
    if ((((local_38.QueryRuntime)->bCheckProcessorBreaks != false) ||
        ((local_38.QueryRuntime)->BreakFragmentsCount != 0)) &&
       (local_38.EntityIndex < local_38.NumEntities)) {
      FMassExecutionContext::FEntityIterator::TestBreakpoints(&local_38);
    }
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

// ConfigureQueries @ 14711b340

/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */

void __thiscall
UFarmHarvestTimerSystem_Crops::ConfigureQueries
          (UFarmHarvestTimerSystem_Crops *this,TSharedRef<FMassEntityManager,1> *param_1)

{
  undefined1 *this_00;
  
  this_00 = &this->field_0xe0;
  FMassFragmentRequirements::AddRequirement<FHarvestTimerFragment>
            ((FMassFragmentRequirements *)this_00,ReadWrite,All);
  FMassFragmentRequirements::AddRequirement<FFarmWaterFragment>
            ((FMassFragmentRequirements *)this_00,ReadOnly,All);
  FMassFragmentRequirements::AddRequirement<FFarmCropFragment>
            ((FMassFragmentRequirements *)this_00,None,All);
  return;
}

// Execute @ 14711d5e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EDebugFeatures": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UFarmHarvestTimerSystem_Crops::Execute
          (UFarmHarvestTimerSystem_Crops *this,FMassEntityManager *param_1,
          FMassExecutionContext *param_2)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<_private:_virtual_void___cdecl_UFarmHarvestTimerSystem_Crops::Execute(FMassEntityManager_&,FMassExecutionContext_&)_::_2_::FStat_UFarmHarvestTimerSystem_Crops_Run>
  FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  undefined ***pppuVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_f8 [32];
  LARGE_INTEGER local_98;
  FName local_90;
  FStatMessage local_80;
  code *local_68 [2];
  undefined **local_58;
  UFarmHarvestTimerSystem_Crops *local_50;
  undefined ***local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  FVar11.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      if (StatPtr_UFarmHarvestTimerSystem_Crops_Run ==
          (FThreadSafeStaticStat<_private:_virtual_void___cdecl_UFarmHarvestTimerSystem_Crops::Execute(FMassEntityManager_&,FMassExecutionContext_&)_::_2_::FStat_UFarmHarvestTimerSystem_Crops_Run>
           )0x0) {
        pFVar5 = ::FName::FName((FName *)&local_98.s,"UFarmHarvestTimerSystem_Crops_Run");
        FThreadSafeStaticStatBase::DoSetup
                  ((FThreadSafeStaticStatBase *)&StatPtr_UFarmHarvestTimerSystem_Crops_Run,*pFVar5,
                   L"UFarmHarvestTimerSystem_Crops_Run","STATGROUP_Quick","STATCAT_Advanced",
                   L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      }
      _Init_thread_footer(&::_TSS0);
    }
  }
  FVar6 = StatPtr_UFarmHarvestTimerSystem_Crops_Run;
  if (StatPtr_UFarmHarvestTimerSystem_Crops_Run ==
      (FThreadSafeStaticStat<_private:_virtual_void___cdecl_UFarmHarvestTimerSystem_Crops::Execute(FMassEntityManager_&,FMassExecutionContext_&)_::_2_::FStat_UFarmHarvestTimerSystem_Crops_Run>
       )0x0) {
    pFVar5 = ::FName::FName((FName *)&local_80,"UFarmHarvestTimerSystem_Crops_Run");
    FVar6 = (FThreadSafeStaticStat<_private:_virtual_void___cdecl_UFarmHarvestTimerSystem_Crops::Execute(FMassEntityManager_&,FMassExecutionContext_&)_::_2_::FStat_UFarmHarvestTimerSystem_Crops_Run>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_UFarmHarvestTimerSystem_Crops_Run,
                         *pFVar5,L"UFarmHarvestTimerSystem_Crops_Run","STATGROUP_Quick",
                         "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_90.ComparisonIndex.Value = 0;
  local_90.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar7 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_98.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_98.s,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_98.s.LowPart = FVar9.Value;
        local_98.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_98.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\MassEntityTestSuite\\Private\\MassEntityTestFarmPlot.cpp"
                   ,0x60);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_98.s.LowPart = FVar9.Value;
      local_98.s.HighPart = uVar7;
      local_90 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_90.ComparisonIndex.Value;
      goto LAB_14711d769;
    }
  }
  bVar3 = false;
  FVar10 = local_90;
LAB_14711d769:
  local_40 = (undefined ***)0x0;
  local_58 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UFarmHarvestTimerSystem_Crops::Execute'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_68[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UFarmHarvestTimerSystem_Crops::Execute'::__l2::<lambda_1>,void,FMassExecutionContext_&>
                ::Call;
  local_50 = this;
  FMassEntityQuery::ForEachEntityChunk
            ((FMassEntityQuery *)&this->field_0xe0,param_2,
             (TFunction<void___cdecl(FMassExecutionContext_&)> *)local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar8 = &local_58;
    if (local_40 != (undefined ***)0x0) {
      pppuVar8 = local_40;
    }
    (*(code *)(*pppuVar8)[2])();
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_80.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_80.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_98);
      local_80.StatData.Pad[4] = '\0';
      local_80.StatData.Pad[5] = '\0';
      local_80.StatData.Pad[6] = '\0';
      local_80.StatData.Pad[7] = '\0';
      local_80.StatData.Pad[0] = local_98.s.LowPart._0_1_;
      local_80.StatData.Pad[1] = local_98.s.LowPart._1_1_;
      local_80.StatData.Pad[2] = local_98.s.LowPart._2_1_;
      local_80.StatData.Pad[3] = local_98.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_80);
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

// GetPrivateStaticClass @ 147120600

UClass * __cdecl UFarmHarvestTimerSystem_Crops::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Crops.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MassEntityTestSuite",L"FarmHarvestTimerSystem_Crops",
               &Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Crops.InnerSingleton,
               StaticRegisterNativesUFarmHarvestTimerSystem_Crops,0x430,0x10,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Mass",
               InternalConstructor<UFarmHarvestTimerSystem_Crops>,
               InternalVTableHelperCtorCaller<UFarmHarvestTimerSystem_Crops>,local_res8,
               UFarmProcessorBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFarmHarvestTimerSystem_Crops.InnerSingleton;
}

// StaticRegisterNativesUFarmHarvestTimerSystem_Crops @ 1471aba80

void __cdecl UFarmHarvestTimerSystem_Crops::StaticRegisterNativesUFarmHarvestTimerSystem_Crops(void)

{
  return;
}

