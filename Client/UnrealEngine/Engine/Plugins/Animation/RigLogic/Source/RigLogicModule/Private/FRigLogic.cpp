// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RigLogicModule
// Functions: 31

// FRigLogic @ 14a6601a0

FRigLogic * __thiscall
FRigLogic::FRigLogic(FRigLogic *this,IDNAReader *param_1,FRigLogicConfiguration *param_2)

{
  MemoryResource *pMVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  TSharedPtr<FMemoryResource,1> *pTVar5;
  Reader *pRVar6;
  RigLogic *pRVar7;
  ERigLogicCalculationType *pEVar8;
  TSharedPtr<FMemoryResource,1> local_48;
  Configuration local_38;
  Configuration local_20;
  
  FMemoryResource::SharedInstance(&this->MemoryResource);
  pTVar5 = FMemoryResource::SharedInstance(&local_48);
  pMVar1 = (MemoryResource *)pTVar5->Object;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_48.SharedReferenceCount.ReferenceController);
  local_20.translationPruningThreshold = param_2->TranslationPruningThreshold;
  local_38.calculationType = param_2->CalculationType;
  local_38.loadJoints = param_2->LoadJoints;
  local_38.loadBlendShapes = param_2->LoadBlendShapes;
  local_38.loadAnimatedMaps = param_2->LoadAnimatedMaps;
  local_38.loadMachineLearnedBehavior = param_2->LoadMachineLearnedBehavior;
  local_38.loadRBFBehavior = param_2->LoadRBFBehavior;
  local_38.loadTwistSwingBehavior = param_2->LoadTwistSwingBehavior;
  local_38.translationType = param_2->TranslationType;
  uVar2 = param_2->RotationType;
  uVar3 = param_2->RotationOrder;
  uVar4 = param_2->ScaleType;
  local_38.scaleType = uVar4;
  local_38.rotationOrder = uVar3;
  local_38.rotationType = uVar2;
  local_20.rotationPruningThreshold = param_2->RotationPruningThreshold;
  local_20.scalePruningThreshold = param_2->ScalePruningThreshold;
  local_20.rotationType = uVar2;
  local_20.rotationOrder = uVar3;
  local_20.scaleType = uVar4;
  local_20._11_1_ = local_38._11_1_;
  local_20._0_4_ = local_38._0_4_;
  local_20._4_4_ = local_38._4_4_;
  pRVar6 = (Reader *)
           (**(code **)(*(longlong *)
                         (&param_1->field_0x8 + *(int *)(*(longlong *)&param_1->field_0x8 + 4)) + 8)
           )();
  pRVar7 = rl4::RigLogic::create(pRVar6,&local_20,pMVar1);
  (this->RigLogic).Ptr = pRVar7;
  pEVar8 = (ERigLogicCalculationType *)(**(code **)((longlong)*pRVar7 + 0x10))(pRVar7);
  (this->Configuration).CalculationType = AnyVector;
  (this->Configuration).LoadJoints = true;
  (this->Configuration).LoadBlendShapes = true;
  (this->Configuration).LoadAnimatedMaps = true;
  (this->Configuration).LoadMachineLearnedBehavior = true;
  (this->Configuration).LoadRBFBehavior = true;
  (this->Configuration).LoadTwistSwingBehavior = true;
  (this->Configuration).TranslationType = Vector;
  (this->Configuration).RotationType = Quaternions;
  (this->Configuration).RotationOrder = ZYX;
  (this->Configuration).ScaleType = Vector;
  (this->Configuration).TranslationPruningThreshold = 0.0;
  (this->Configuration).RotationPruningThreshold = 0.0;
  (this->Configuration).ScalePruningThreshold = 0.0;
  (this->Configuration).CalculationType = *pEVar8;
  (this->Configuration).LoadJoints = (bool)pEVar8[1];
  (this->Configuration).LoadBlendShapes = (bool)pEVar8[2];
  (this->Configuration).LoadAnimatedMaps = (bool)pEVar8[3];
  (this->Configuration).LoadMachineLearnedBehavior = (bool)pEVar8[4];
  (this->Configuration).LoadRBFBehavior = (bool)pEVar8[5];
  (this->Configuration).LoadTwistSwingBehavior = (bool)pEVar8[6];
  (this->Configuration).TranslationType = pEVar8[7];
  (this->Configuration).RotationType = pEVar8[8];
  (this->Configuration).RotationOrder = pEVar8[9];
  (this->Configuration).ScaleType = pEVar8[10];
  (this->Configuration).TranslationPruningThreshold = *(float *)(pEVar8 + 0xc);
  (this->Configuration).RotationPruningThreshold = *(float *)(pEVar8 + 0x10);
  (this->Configuration).ScalePruningThreshold = *(float *)(pEVar8 + 0x14);
  return this;
}

// ~FRigLogic @ 14a661120

void __thiscall FRigLogic::~FRigLogic(FRigLogic *this)

{
  rl4::RigLogic::destroy((this->RigLogic).Ptr);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MemoryResource).SharedReferenceCount.ReferenceController);
  return;
}

// Calculate @ 14a666240

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRigLogic::Calculate(FRigLogic *this,FRigInstance *param_1)

{
  int *piVar1;
  RigLogic *pRVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<_public:_void___cdecl_FRigLogic::Calculate(FRigInstance_*)const_::_2_::FStat_STAT_RigLogic_Calculate>
  FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FRigLogic::Calculate");
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_RigLogic_Calculate ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FRigLogic::Calculate(FRigInstance_*)const_::_2_::FStat_STAT_RigLogic_Calculate>
         )0x0) {
      pFVar6 = ::FName::FName((FName *)&local_res8.s,"STAT_RigLogic_Calculate");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_Calculate,*pFVar6,
                 L"STAT_RigLogic_Calculate","STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,
                 ST_int64,true,false,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar7 = StatPtr_STAT_RigLogic_Calculate;
  if (StatPtr_STAT_RigLogic_Calculate ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FRigLogic::Calculate(FRigInstance_*)const_::_2_::FStat_STAT_RigLogic_Calculate>
       )0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_RigLogic_Calculate");
    FVar7 = (FThreadSafeStaticStat<_public:_void___cdecl_FRigLogic::Calculate(FRigInstance_*)const_::_2_::FStat_STAT_RigLogic_Calculate>
             )FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_Calculate,*pFVar6,
                         L"STAT_RigLogic_Calculate","STATGROUP_Quick","STATCAT_Advanced",L"Quick",
                         true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
                   ,0x142);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14a6663d3;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14a6663d3:
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId325,"FRigLogic::Calculate",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
               ,0x145);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId325);
  }
  pRVar2 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar2 + 0xe0))(pRVar2,(param_1->RigInstance).Ptr);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  FStatsHierarchical::EndMeasurement();
  return;
}

// CalculateAnimatedMaps @ 14a6665c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRigLogic::CalculateAnimatedMaps(FRigLogic *this,FRigInstance *param_1)

{
  int *piVar1;
  RigLogic *pRVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateAnimatedMapsTime> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FRigLogic::CalculateAnimatedMaps");
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_RigLogic_CalculateAnimatedMapsTime;
  if (StatPtr_STAT_RigLogic_CalculateAnimatedMapsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateAnimatedMapsTime>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_RigLogic_CalculateAnimatedMapsTime");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateAnimatedMapsTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculateAnimatedMapsTime
                       ,*pFVar6,L"Calculate Animated Maps Time","STATGROUP_RigLogic",
                       "STATCAT_Advanced",L"RigLogic",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
                   ,0x135);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14a66672b;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14a66672b:
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId312,"FRigLogic::CalculateAnimatedMaps",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
               ,0x138);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId312);
  }
  pRVar2 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar2 + 0xd8))(pRVar2,(param_1->RigInstance).Ptr);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  FStatsHierarchical::EndMeasurement();
  return;
}

// CalculateBlendShapes @ 14a666890

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRigLogic::CalculateBlendShapes(FRigLogic *this,FRigInstance *param_1)

{
  int *piVar1;
  RigLogic *pRVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateBlendShapesTime> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FRigLogic::CalculateBlendShapes");
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_RigLogic_CalculateBlendShapesTime;
  if (StatPtr_STAT_RigLogic_CalculateBlendShapesTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateBlendShapesTime>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_RigLogic_CalculateBlendShapesTime");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateBlendShapesTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculateBlendShapesTime,
                       *pFVar6,L"Calculate Blend Shapes Time","STATGROUP_RigLogic",
                       "STATCAT_Advanced",L"RigLogic",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
                   ,0x128);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14a6669fb;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14a6669fb:
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&::__CpuProfilerEventSpecId299,"FRigLogic::CalculateBlendShapes",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
               ,299);
    FCpuProfilerTrace::OutputBeginEvent(::__CpuProfilerEventSpecId299);
  }
  pRVar2 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar2 + 0xd0))(pRVar2,(param_1->RigInstance).Ptr);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  FStatsHierarchical::EndMeasurement();
  return;
}

// CalculateControls @ 14a666b60

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRigLogic::CalculateControls(FRigLogic *this,FRigInstance *param_1)

{
  int *piVar1;
  RigLogic *pRVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateControlsTime> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FRigLogic::CalculateControls");
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_RigLogic_CalculateControlsTime;
  if (StatPtr_STAT_RigLogic_CalculateControlsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateControlsTime>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_RigLogic_CalculateControlsTime");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateControlsTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculateControlsTime,
                       *pFVar6,L"Calculate PSD Controls Time","STATGROUP_RigLogic",
                       "STATCAT_Advanced",L"RigLogic",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
                   ,0xcd);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14a666ccb;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14a666ccb:
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId208,"FRigLogic::CalculateControls",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
               ,0xd0);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId208);
  }
  pRVar2 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar2 + 0x98))(pRVar2,(param_1->RigInstance).Ptr);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  FStatsHierarchical::EndMeasurement();
  return;
}

// CalculateJoints @ 14a666e50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRigLogic::CalculateJoints(FRigLogic *this,FRigInstance *param_1)

{
  int *piVar1;
  RigLogic *pRVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateJointsTime> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FRigLogic::CalculateJoints");
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_RigLogic_CalculateJointsTime;
  if (StatPtr_STAT_RigLogic_CalculateJointsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateJointsTime>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_RigLogic_CalculateJointsTime");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateJointsTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculateJointsTime,
                       *pFVar6,L"Calculate Joints Time","STATGROUP_RigLogic","STATCAT_Advanced",
                       L"RigLogic",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
                   ,0x10e);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14a666fbb;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14a666fbb:
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId273,"FRigLogic::CalculateJoints",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
               ,0x111);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId273);
  }
  pRVar2 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar2 + 200))(pRVar2,(param_1->RigInstance).Ptr);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  FStatsHierarchical::EndMeasurement();
  return;
}

// CalculateJoints @ 14a667120

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRigLogic::CalculateJoints(FRigLogic *this,FRigInstance *param_1,ushort param_2)

{
  int *piVar1;
  RigLogic *pRVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateJointsTime> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FRigLogic::CalculateJoints");
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_RigLogic_CalculateJointsTime;
  if (StatPtr_STAT_RigLogic_CalculateJointsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateJointsTime>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_RigLogic_CalculateJointsTime");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateJointsTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculateJointsTime,
                       *pFVar6,L"Calculate Joints Time","STATGROUP_RigLogic","STATCAT_Advanced",
                       L"RigLogic",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
                   ,0x11b);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14a667295;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14a667295:
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId286,"FRigLogic::CalculateJoints",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
               ,0x11e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId286);
  }
  pRVar2 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar2 + 0xc0))(pRVar2,(param_1->RigInstance).Ptr);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  FStatsHierarchical::EndMeasurement();
  return;
}

// CalculateMachineLearnedBehaviorControls @ 14a667400

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigLogic::CalculateMachineLearnedBehaviorControls(FRigLogic *this,FRigInstance *param_1)

{
  int *piVar1;
  RigLogic *pRVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateMLControlsTime> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FRigLogic::CalculateMachineLearnedBehaviorControls");
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_RigLogic_CalculateMLControlsTime;
  if (StatPtr_STAT_RigLogic_CalculateMLControlsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateMLControlsTime>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_RigLogic_CalculateMLControlsTime");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateMLControlsTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculateMLControlsTime,
                       *pFVar6,L"Calculate ML Controls Time","STATGROUP_RigLogic","STATCAT_Advanced"
                       ,L"RigLogic",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
                   ,0xda);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14a66756b;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14a66756b:
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId221,"FRigLogic::CalculateMachineLearnedBehaviorControls",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
               ,0xdd);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId221);
  }
  pRVar2 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar2 + 0xa8))(pRVar2,(param_1->RigInstance).Ptr);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  FStatsHierarchical::EndMeasurement();
  return;
}

// CalculateMachineLearnedBehaviorControls @ 14a6676d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigLogic::CalculateMachineLearnedBehaviorControls
          (FRigLogic *this,FRigInstance *param_1,ushort param_2)

{
  int *piVar1;
  RigLogic *pRVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateMLControlsTime> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FRigLogic::CalculateMachineLearnedBehaviorControls");
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_RigLogic_CalculateMLControlsTime;
  if (StatPtr_STAT_RigLogic_CalculateMLControlsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateMLControlsTime>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_RigLogic_CalculateMLControlsTime");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateMLControlsTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculateMLControlsTime,
                       *pFVar6,L"Calculate ML Controls Time","STATGROUP_RigLogic","STATCAT_Advanced"
                       ,L"RigLogic",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
                   ,0xe7);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14a667845;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14a667845:
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId234,"FRigLogic::CalculateMachineLearnedBehaviorControls",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
               ,0xea);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId234);
  }
  pRVar2 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar2 + 0xa0))(pRVar2,(param_1->RigInstance).Ptr);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  FStatsHierarchical::EndMeasurement();
  return;
}

// CalculateRBFControls @ 14a6679b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRigLogic::CalculateRBFControls(FRigLogic *this,FRigInstance *param_1)

{
  int *piVar1;
  RigLogic *pRVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateRBFControlsTime> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FRigLogic::CalculateRBFControls");
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_RigLogic_CalculateRBFControlsTime;
  if (StatPtr_STAT_RigLogic_CalculateRBFControlsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateRBFControlsTime>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_RigLogic_CalculateRBFControlsTime");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateRBFControlsTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculateRBFControlsTime,
                       *pFVar6,L"Calculate RBF Controls Time","STATGROUP_RigLogic",
                       "STATCAT_Advanced",L"RigLogic",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
                   ,0xf4);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14a667b1b;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14a667b1b:
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId247,"FRigLogic::CalculateRBFControls",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
               ,0xf7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId247);
  }
  pRVar2 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar2 + 0xb8))(pRVar2,(param_1->RigInstance).Ptr);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  FStatsHierarchical::EndMeasurement();
  return;
}

// CalculateRBFControls @ 14a667c80

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRigLogic::CalculateRBFControls(FRigLogic *this,FRigInstance *param_1,ushort param_2)

{
  int *piVar1;
  RigLogic *pRVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateRBFControlsTime> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FRigLogic::CalculateRBFControls");
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_RigLogic_CalculateRBFControlsTime;
  if (StatPtr_STAT_RigLogic_CalculateRBFControlsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateRBFControlsTime>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_RigLogic_CalculateRBFControlsTime");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculateRBFControlsTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculateRBFControlsTime,
                       *pFVar6,L"Calculate RBF Controls Time","STATGROUP_RigLogic",
                       "STATCAT_Advanced",L"RigLogic",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
                   ,0x101);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14a667df5;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14a667df5:
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId260,"FRigLogic::CalculateRBFControls",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
               ,0x104);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId260);
  }
  pRVar2 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar2 + 0xb0))(pRVar2,(param_1->RigInstance).Ptr);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  FStatsHierarchical::EndMeasurement();
  return;
}

// CollectCalculationStats @ 14a668f80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRigLogic::CollectCalculationStats(FRigLogic *this,FRigInstance *param_1)

{
  RigLogic *pRVar1;
  FName FVar2;
  ushort uVar3;
  FName *pFVar4;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculationType> FVar5;
  FThreadStats *pFVar6;
  FThreadStatsPool *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_FloatingPointType> FVar8;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_LOD> FVar9;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_RBFSolverCount> FVar10;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_NeuralNetworkCount> FVar11;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_PSDCount> FVar12;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_JointCount> FVar13;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_JointDeltaValueCount> FVar14;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_BlendShapeChannelCount> FVar15;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_AnimatedMapCount> FVar16;
  FNameEntryId FVar17;
  uchar auVar18 [8];
  uchar auVar19 [8];
  undefined1 auStackY_d8 [32];
  FName local_78;
  FStatMessage local_70;
  ulonglong local_60;
  ulonglong uStack_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_d8;
  pRVar1 = (this->RigLogic).Ptr;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  (**(code **)((longlong)*pRVar1 + 0xe8))(pRVar1,(param_1->RigInstance).Ptr);
  if (FThreadStats::bPrimaryEnable != false) {
    FVar5 = StatPtr_STAT_RigLogic_CalculationType;
    if (StatPtr_STAT_RigLogic_CalculationType ==
        (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculationType>)0x0) {
      pFVar4 = ::FName::FName(&local_78,"STAT_RigLogic_CalculationType");
      FVar5 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_CalculationType>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_CalculationType,*pFVar4
                         ,L"Calculation Backend [ 0 = Scalar, 1 = SSE, 2 = AVX, 3 = NEON ]",
                         "STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",true,true,ST_int64,
                         false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar5;
    auVar18 = (uchar  [8])(local_60 & 0xff);
    local_78 = FVar2;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar6 == (FThreadStats *)0x0) {
        pFVar7 = FThreadStatsPool::Get();
        pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
      }
      local_70.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
      local_78 = FVar2;
      local_70.StatData.Pad = auVar18;
      local_70.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar6,&local_70);
      FStatsTrace::Set(&local_78,(long64)auVar18);
      if (pFVar6->ScopeCount == 0) {
        FThreadStats::Flush(pFVar6,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar6,false,false);
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FVar8 = StatPtr_STAT_RigLogic_FloatingPointType;
      if (StatPtr_STAT_RigLogic_FloatingPointType ==
          (FThreadSafeStaticStat<FStat_STAT_RigLogic_FloatingPointType>)0x0) {
        pFVar4 = ::FName::FName(&local_78,"STAT_RigLogic_FloatingPointType");
        FVar8 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_FloatingPointType>)
                FThreadSafeStaticStatBase::DoSetup
                          ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_FloatingPointType,
                           *pFVar4,L"Floating Point Type [ 0 = Float, 1 = Half-Float ]",
                           "STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",true,true,ST_int64,
                           false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar8;
      auVar18 = (uchar  [8])(local_60 >> 8 & 0xff);
      local_78 = FVar2;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
        if (pFVar6 == (FThreadStats *)0x0) {
          pFVar7 = FThreadStatsPool::Get();
          pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
        }
        local_70.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
        local_78 = FVar2;
        local_70.StatData.Pad = auVar18;
        local_70.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(pFVar6,&local_70);
        FStatsTrace::Set(&local_78,(long64)auVar18);
        if (pFVar6->ScopeCount == 0) {
          FThreadStats::Flush(pFVar6,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(pFVar6,false,false);
        }
      }
      if (FThreadStats::bPrimaryEnable != false) {
        FVar9 = StatPtr_STAT_RigLogic_LOD;
        if (StatPtr_STAT_RigLogic_LOD == (FThreadSafeStaticStat<FStat_STAT_RigLogic_LOD>)0x0) {
          pFVar4 = ::FName::FName(&local_78,"STAT_RigLogic_LOD");
          FVar9 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_LOD>)
                  FThreadSafeStaticStatBase::DoSetup
                            ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_LOD,*pFVar4,
                             L"Current LOD","STATGROUP_RigLogic","STATCAT_Advanced",L"RigLogic",true
                             ,true,ST_int64,false,false,MCR_Invalid);
        }
        local_78 = *(FName *)FVar9;
        FVar17 = local_78.ComparisonIndex.Value;
        uVar3 = (**(code **)((longlong)*(param_1->RigInstance).Ptr + 0xd0))();
        FVar2 = local_78;
        auVar18[2] = '\0';
        auVar18[3] = '\0';
        auVar18[4] = '\0';
        auVar18[5] = '\0';
        auVar18[6] = '\0';
        auVar18[7] = '\0';
        auVar18[0] = (char)uVar3;
        auVar18[1] = (char)(uVar3 >> 8);
        if (((local_78 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
           (FThreadStats::TlsSlot != 0xffffffff)) {
          pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
          if (pFVar6 == (FThreadStats *)0x0) {
            pFVar7 = FThreadStatsPool::Get();
            pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
          }
          local_70.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
          local_78 = FVar2;
          local_70.StatData.Pad = auVar18;
          local_70.NameAndInfo.Index.Value = FVar17.Value;
          FThreadStats::AddStatMessage(pFVar6,&local_70);
          FStatsTrace::Set(&local_78,(long64)auVar18);
          if (pFVar6->ScopeCount == 0) {
            FThreadStats::Flush(pFVar6,false,false);
          }
          else if (FThreadStats::bIsRawStatsActive != false) {
            FThreadStats::FlushRawStats(pFVar6,false,false);
          }
        }
        if (FThreadStats::bPrimaryEnable != false) {
          FVar10 = StatPtr_STAT_RigLogic_RBFSolverCount;
          if (StatPtr_STAT_RigLogic_RBFSolverCount ==
              (FThreadSafeStaticStat<FStat_STAT_RigLogic_RBFSolverCount>)0x0) {
            pFVar4 = ::FName::FName(&local_78,"STAT_RigLogic_RBFSolverCount");
            FVar10 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_RBFSolverCount>)
                     FThreadSafeStaticStatBase::DoSetup
                               ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_RBFSolverCount,
                                *pFVar4,L"RBF Solver Count","STATGROUP_RigLogic","STATCAT_Advanced",
                                L"RigLogic",true,true,ST_int64,false,false,MCR_Invalid);
          }
          FVar2 = *(FName *)FVar10;
          auVar18 = (uchar  [8])(local_60 >> 0x10 & 0xffff);
          local_78 = FVar2;
          if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
             (FThreadStats::TlsSlot != 0xffffffff)) {
            pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
            if (pFVar6 == (FThreadStats *)0x0) {
              pFVar7 = FThreadStatsPool::Get();
              pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
            }
            local_70.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
            local_78 = FVar2;
            local_70.StatData.Pad = auVar18;
            local_70.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
            FThreadStats::AddStatMessage(pFVar6,&local_70);
            FStatsTrace::Set(&local_78,(long64)auVar18);
            if (pFVar6->ScopeCount == 0) {
              FThreadStats::Flush(pFVar6,false,false);
            }
            else if (FThreadStats::bIsRawStatsActive != false) {
              FThreadStats::FlushRawStats(pFVar6,false,false);
            }
          }
          if (FThreadStats::bPrimaryEnable != false) {
            FVar11 = StatPtr_STAT_RigLogic_NeuralNetworkCount;
            if (StatPtr_STAT_RigLogic_NeuralNetworkCount ==
                (FThreadSafeStaticStat<FStat_STAT_RigLogic_NeuralNetworkCount>)0x0) {
              pFVar4 = ::FName::FName(&local_78,"STAT_RigLogic_NeuralNetworkCount");
              FVar11 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_NeuralNetworkCount>)
                       FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)
                                  &StatPtr_STAT_RigLogic_NeuralNetworkCount,*pFVar4,
                                  L"Neural Network Count","STATGROUP_RigLogic","STATCAT_Advanced",
                                  L"RigLogic",true,true,ST_int64,false,false,MCR_Invalid);
            }
            FVar2 = *(FName *)FVar11;
            auVar18 = (uchar  [8])(local_60 >> 0x20 & 0xffff);
            local_78 = FVar2;
            if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
              if (pFVar6 == (FThreadStats *)0x0) {
                pFVar7 = FThreadStatsPool::Get();
                pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
              }
              local_70.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
              local_78 = FVar2;
              local_70.StatData.Pad = auVar18;
              local_70.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
              FThreadStats::AddStatMessage(pFVar6,&local_70);
              FStatsTrace::Set(&local_78,(long64)auVar18);
              if (pFVar6->ScopeCount == 0) {
                FThreadStats::Flush(pFVar6,false,false);
              }
              else if (FThreadStats::bIsRawStatsActive != false) {
                FThreadStats::FlushRawStats(pFVar6,false,false);
              }
            }
            if (FThreadStats::bPrimaryEnable != false) {
              FVar12 = StatPtr_STAT_RigLogic_PSDCount;
              if (StatPtr_STAT_RigLogic_PSDCount ==
                  (FThreadSafeStaticStat<FStat_STAT_RigLogic_PSDCount>)0x0) {
                pFVar4 = ::FName::FName(&local_78,"STAT_RigLogic_PSDCount");
                FVar12 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_PSDCount>)
                         FThreadSafeStaticStatBase::DoSetup
                                   ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_PSDCount,
                                    *pFVar4,L"PSD Expression Count","STATGROUP_RigLogic",
                                    "STATCAT_Advanced",L"RigLogic",true,true,ST_int64,false,false,
                                    MCR_Invalid);
              }
              FVar2 = *(FName *)FVar12;
              auVar18 = (uchar  [8])(local_60 >> 0x30);
              local_78 = FVar2;
              if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                 (FThreadStats::TlsSlot != 0xffffffff)) {
                pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
                if (pFVar6 == (FThreadStats *)0x0) {
                  pFVar7 = FThreadStatsPool::Get();
                  pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
                }
                local_70.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
                local_78 = FVar2;
                local_70.StatData.Pad = auVar18;
                local_70.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
                FThreadStats::AddStatMessage(pFVar6,&local_70);
                FStatsTrace::Set(&local_78,(long64)auVar18);
                if (pFVar6->ScopeCount == 0) {
                  FThreadStats::Flush(pFVar6,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(pFVar6,false,false);
                }
              }
              if (FThreadStats::bPrimaryEnable != false) {
                FVar13 = StatPtr_STAT_RigLogic_JointCount;
                if (StatPtr_STAT_RigLogic_JointCount ==
                    (FThreadSafeStaticStat<FStat_STAT_RigLogic_JointCount>)0x0) {
                  pFVar4 = ::FName::FName(&local_78,"STAT_RigLogic_JointCount");
                  FVar13 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_JointCount>)
                           FThreadSafeStaticStatBase::DoSetup
                                     ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_JointCount
                                      ,*pFVar4,L"Joint Count","STATGROUP_RigLogic",
                                      "STATCAT_Advanced",L"RigLogic",true,true,ST_int64,false,false,
                                      MCR_Invalid);
                }
                FVar2 = *(FName *)FVar13;
                auVar18 = (uchar  [8])(uStack_58 >> 0x20 & 0xffff);
                local_78 = FVar2;
                if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                   (FThreadStats::TlsSlot != 0xffffffff)) {
                  pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
                  if (pFVar6 == (FThreadStats *)0x0) {
                    pFVar7 = FThreadStatsPool::Get();
                    pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
                  }
                  local_70.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
                  local_78 = FVar2;
                  local_70.StatData.Pad = auVar18;
                  local_70.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
                  FThreadStats::AddStatMessage(pFVar6,&local_70);
                  FStatsTrace::Set(&local_78,(long64)auVar18);
                  if (pFVar6->ScopeCount == 0) {
                    FThreadStats::Flush(pFVar6,false,false);
                  }
                  else if (FThreadStats::bIsRawStatsActive != false) {
                    FThreadStats::FlushRawStats(pFVar6,false,false);
                  }
                }
                if (FThreadStats::bPrimaryEnable != false) {
                  FVar14 = StatPtr_STAT_RigLogic_JointDeltaValueCount;
                  if (StatPtr_STAT_RigLogic_JointDeltaValueCount ==
                      (FThreadSafeStaticStat<FStat_STAT_RigLogic_JointDeltaValueCount>)0x0) {
                    pFVar4 = ::FName::FName(&local_78,"STAT_RigLogic_JointDeltaValueCount");
                    FVar14 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_JointDeltaValueCount>)
                             FThreadSafeStaticStatBase::DoSetup
                                       ((FThreadSafeStaticStatBase *)
                                        &StatPtr_STAT_RigLogic_JointDeltaValueCount,*pFVar4,
                                        L"Joint Delta Value Count","STATGROUP_RigLogic",
                                        "STATCAT_Advanced",L"RigLogic",true,true,ST_int64,false,
                                        false,MCR_Invalid);
                  }
                  FVar2 = *(FName *)FVar14;
                  auVar19[4] = '\0';
                  auVar19[5] = '\0';
                  auVar19[6] = '\0';
                  auVar19[7] = '\0';
                  auVar19[0] = (undefined1)local_50;
                  auVar19[1] = local_50._1_1_;
                  auVar19[2] = local_50._2_1_;
                  auVar19[3] = local_50._3_1_;
                  local_78 = FVar2;
                  if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
                     (FThreadStats::TlsSlot != 0xffffffff)) {
                    pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
                    if (pFVar6 == (FThreadStats *)0x0) {
                      pFVar7 = FThreadStatsPool::Get();
                      pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
                    }
                    local_70.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
                    local_78 = FVar2;
                    local_70.StatData.Pad = auVar19;
                    local_70.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
                    FThreadStats::AddStatMessage(pFVar6,&local_70);
                    FStatsTrace::Set(&local_78,(long64)auVar19);
                    if (pFVar6->ScopeCount == 0) {
                      FThreadStats::Flush(pFVar6,false,false);
                    }
                    else if (FThreadStats::bIsRawStatsActive != false) {
                      FThreadStats::FlushRawStats(pFVar6,false,false);
                    }
                  }
                  if (FThreadStats::bPrimaryEnable != false) {
                    FVar15 = StatPtr_STAT_RigLogic_BlendShapeChannelCount;
                    if (StatPtr_STAT_RigLogic_BlendShapeChannelCount ==
                        (FThreadSafeStaticStat<FStat_STAT_RigLogic_BlendShapeChannelCount>)0x0) {
                      pFVar4 = ::FName::FName(&local_78,"STAT_RigLogic_BlendShapeChannelCount");
                      FVar15 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_BlendShapeChannelCount>)
                               FThreadSafeStaticStatBase::DoSetup
                                         ((FThreadSafeStaticStatBase *)
                                          &StatPtr_STAT_RigLogic_BlendShapeChannelCount,*pFVar4,
                                          L"Blend Shape Channel Count","STATGROUP_RigLogic",
                                          "STATCAT_Advanced",L"RigLogic",true,true,ST_int64,false,
                                          false,MCR_Invalid);
                    }
                    FVar2 = *(FName *)FVar15;
                    auVar18 = (uchar  [8])(uStack_58 & 0xffff);
                    local_78 = FVar2;
                    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false))
                       && (FThreadStats::TlsSlot != 0xffffffff)) {
                      pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
                      if (pFVar6 == (FThreadStats *)0x0) {
                        pFVar7 = FThreadStatsPool::Get();
                        pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
                      }
                      local_70.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
                      local_78 = FVar2;
                      local_70.StatData.Pad = auVar18;
                      local_70.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
                      FThreadStats::AddStatMessage(pFVar6,&local_70);
                      FStatsTrace::Set(&local_78,(long64)auVar18);
                      if (pFVar6->ScopeCount == 0) {
                        FThreadStats::Flush(pFVar6,false,false);
                      }
                      else if (FThreadStats::bIsRawStatsActive != false) {
                        FThreadStats::FlushRawStats(pFVar6,false,false);
                      }
                    }
                    if (FThreadStats::bPrimaryEnable != false) {
                      FVar16 = StatPtr_STAT_RigLogic_AnimatedMapCount;
                      if (StatPtr_STAT_RigLogic_AnimatedMapCount ==
                          (FThreadSafeStaticStat<FStat_STAT_RigLogic_AnimatedMapCount>)0x0) {
                        pFVar4 = ::FName::FName(&local_78,"STAT_RigLogic_AnimatedMapCount");
                        FVar16 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_AnimatedMapCount>)
                                 FThreadSafeStaticStatBase::DoSetup
                                           ((FThreadSafeStaticStatBase *)
                                            &StatPtr_STAT_RigLogic_AnimatedMapCount,*pFVar4,
                                            L"Animated Map Count","STATGROUP_RigLogic",
                                            "STATCAT_Advanced",L"RigLogic",true,true,ST_int64,false,
                                            false,MCR_Invalid);
                      }
                      FVar2 = *(FName *)FVar16;
                      auVar18 = (uchar  [8])(uStack_58 >> 0x10 & 0xffff);
                      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false))
                         && (FThreadStats::TlsSlot != 0xffffffff)) {
                        local_78 = FVar2;
                        pFVar6 = TlsGetValue(FThreadStats::TlsSlot);
                        if (pFVar6 == (FThreadStats *)0x0) {
                          pFVar7 = FThreadStatsPool::Get();
                          pFVar6 = FThreadStatsPool::GetFromPool(pFVar7);
                        }
                        local_70.NameAndInfo.Number = FVar2.Number & 0xffff8fff | 0x8000;
                        local_78 = FVar2;
                        local_70.StatData.Pad = auVar18;
                        local_70.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
                        FThreadStats::AddStatMessage(pFVar6,&local_70);
                        FStatsTrace::Set(&local_78,(long64)auVar18);
                        if (pFVar6->ScopeCount == 0) {
                          FThreadStats::Flush(pFVar6,false,false);
                        }
                        else if (FThreadStats::bIsRawStatsActive != false) {
                          FThreadStats::FlushRawStats(pFVar6,false,false);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}

// GetAnimatedMapIndicesForLOD @ 14a66ca50

TArrayView<unsigned_short_const_,int> * __thiscall
FRigLogic::GetAnimatedMapIndicesForLOD
          (FRigLogic *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  RigLogic *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pRVar1 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar1 + 0x38))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetBlendShapeChannelIndicesForLOD @ 14a66dd50

TArrayView<unsigned_short_const_,int> * __thiscall
FRigLogic::GetBlendShapeChannelIndicesForLOD
          (FRigLogic *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  RigLogic *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pRVar1 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar1 + 0x30))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetConfiguration @ 14a66ef20

FRigLogicConfiguration * __thiscall FRigLogic::GetConfiguration(FRigLogic *this)

{
  return &this->Configuration;
}

// GetJointGroupCount @ 14a671620

ushort __thiscall FRigLogic::GetJointGroupCount(FRigLogic *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a671627. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->RigLogic).Ptr + 0x58))();
  return uVar1;
}

// GetJointIndicesForLOD @ 14a672220

TArrayView<unsigned_short_const_,int> * __thiscall
FRigLogic::GetJointIndicesForLOD
          (FRigLogic *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  RigLogic *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pRVar1 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar1 + 0x40))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetJointVariableAttributeIndices @ 14a672c60

TArrayView<unsigned_short_const_,int> * __thiscall
FRigLogic::GetJointVariableAttributeIndices
          (FRigLogic *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  RigLogic *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pRVar1 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar1 + 0x50))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetLODCount @ 14a672e10

ushort __thiscall FRigLogic::GetLODCount(FRigLogic *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a672e17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->RigLogic).Ptr + 0x18))();
  return uVar1;
}

// GetMeshCount @ 14a673850

ushort __thiscall FRigLogic::GetMeshCount(FRigLogic *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a673857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->RigLogic).Ptr + 0x70))();
  return uVar1;
}

// GetMeshRegionCount @ 14a673f80

ushort __thiscall FRigLogic::GetMeshRegionCount(FRigLogic *this,ushort param_1)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a673f87. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->RigLogic).Ptr + 0x78))();
  return uVar1;
}

// GetNeuralNetworkCount @ 14a674ba0

ushort __thiscall FRigLogic::GetNeuralNetworkCount(FRigLogic *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a674ba7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->RigLogic).Ptr + 0x60))();
  return uVar1;
}

// GetNeuralNetworkIndices @ 14a674cc0

TArrayView<unsigned_short_const_,int> * __thiscall
FRigLogic::GetNeuralNetworkIndices
          (FRigLogic *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1,ushort param_2)

{
  RigLogic *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  undefined6 in_register_0000008a;
  ushort *local_18;
  int local_10;
  
  pRVar1 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar1 + 0x80))
            (pRVar1,&local_18,CONCAT62(in_register_00000082,param_1),
             CONCAT62(in_register_0000008a,param_2));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetNeuralNetworkIndicesForLOD @ 14a674e10

TArrayView<unsigned_int_const_,int> * __thiscall
FRigLogic::GetNeuralNetworkIndicesForLOD
          (FRigLogic *this,TArrayView<unsigned_int_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  RigLogic *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_int_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  uint *local_18;
  int local_10;
  
  pRVar1 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar1 + 0x28))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_int_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetNeutralJointValues @ 14a675e40

TArrayView<float_const_,int> * __thiscall
FRigLogic::GetNeutralJointValues
          (FRigLogic *this,TArrayView<float_const_,int> *__return_storage_ptr__)

{
  RigLogic *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float_const_,int> *pTVar4;
  float *local_18;
  int local_10;
  
  pRVar1 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar1 + 0x48))(pRVar1,&local_18);
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<float_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// GetRBFSolverCount @ 14a677970

ushort __thiscall FRigLogic::GetRBFSolverCount(FRigLogic *this)

{
  ushort uVar1;
  
                    /* WARNING: Could not recover jumptable at 0x00014a677977. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)((longlong)*(this->RigLogic).Ptr + 0x68))();
  return uVar1;
}

// GetRBFSolverIndicesForLOD @ 14a677cd0

TArrayView<unsigned_short_const_,int> * __thiscall
FRigLogic::GetRBFSolverIndicesForLOD
          (FRigLogic *this,TArrayView<unsigned_short_const_,int> *__return_storage_ptr__,
          ushort param_1)

{
  RigLogic *pRVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<unsigned_short_const_,int> *pTVar4;
  undefined6 in_register_00000082;
  ushort *local_18;
  int local_10;
  
  pRVar1 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar1 + 0x20))(pRVar1,&local_18,CONCAT62(in_register_00000082,param_1));
  __return_storage_ptr__->DataPtr = local_18;
  __return_storage_ptr__->ArrayNum = local_10;
  if (local_10 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("ArrayNum >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xfe,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TArrayView<unsigned_short_const_,int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  return __return_storage_ptr__;
}

// MapGUIToRawControls @ 14a67d3d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRigLogic::MapGUIToRawControls(FRigLogic *this,FRigInstance *param_1)

{
  int *piVar1;
  RigLogic *pRVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_MapGUIToRawControlsTime> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FRigLogic::MapGUIToRawControls");
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_RigLogic_MapGUIToRawControlsTime;
  if (StatPtr_STAT_RigLogic_MapGUIToRawControlsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_MapGUIToRawControlsTime>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_RigLogic_MapGUIToRawControlsTime");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_MapGUIToRawControlsTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_MapGUIToRawControlsTime,
                       *pFVar6,L"Map GUI To Raw Controls Time","STATGROUP_RigLogic",
                       "STATCAT_Advanced",L"RigLogic",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
                   ,0xb4);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14a67d53b;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14a67d53b:
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId183,"FRigLogic::MapGUIToRawControls",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
               ,0xb7);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId183);
  }
  pRVar2 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar2 + 0x88))(pRVar2,(param_1->RigInstance).Ptr);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  FStatsHierarchical::EndMeasurement();
  return;
}

// MapRawToGUIControls @ 14a680570

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRigLogic::MapRawToGUIControls(FRigLogic *this,FRigInstance *param_1)

{
  int *piVar1;
  RigLogic *pRVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FName *pFVar6;
  FThreadSafeStaticStat<FStat_STAT_RigLogic_MapRawToGUIControlsTime> FVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  bool bVar12;
  LARGE_INTEGER local_res8;
  FName local_res10;
  FStatMessage local_38;
  
  FStatsHierarchical::BeginMeasurement("FRigLogic::MapRawToGUIControls");
  FVar11.Value = 0;
  FVar7 = StatPtr_STAT_RigLogic_MapRawToGUIControlsTime;
  if (StatPtr_STAT_RigLogic_MapRawToGUIControlsTime ==
      (FThreadSafeStaticStat<FStat_STAT_RigLogic_MapRawToGUIControlsTime>)0x0) {
    pFVar6 = ::FName::FName(&local_res10,"STAT_RigLogic_MapRawToGUIControlsTime");
    FVar7 = (FThreadSafeStaticStat<FStat_STAT_RigLogic_MapRawToGUIControlsTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_RigLogic_MapRawToGUIControlsTime,
                       *pFVar6,L"Map Raw To GUI Controls Time","STATGROUP_RigLogic",
                       "STATCAT_Advanced",L"RigLogic",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar10 = *(FName *)FVar7;
  bVar3 = false;
  bVar5 = false;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar7 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar9.Value;
        local_res8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar7 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
                   ,0xc0);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res8.s.LowPart = FVar9.Value;
      local_res8.s.HighPart = uVar8;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar4 = true;
      FVar11.Value = FVar9.Value;
      goto LAB_14a6806db;
    }
  }
  bVar4 = false;
  FVar10.ComparisonIndex.Value = 0;
  FVar10.Number = 0;
LAB_14a6806db:
  bVar12 = -1 < CpuChannel->Enabled;
  if (bVar12) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId195,"FRigLogic::MapRawToGUIControls",
               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Animation\\RigLogic\\Source\\RigLogicModule\\Private\\RigLogic.cpp"
               ,0xc3);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId195);
  }
  pRVar2 = (this->RigLogic).Ptr;
  (**(code **)((longlong)*pRVar2 + 0x90))(pRVar2,(param_1->RigInstance).Ptr);
  if (bVar12) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar10 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_38.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_res8);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res8.s.LowPart._0_1_;
      local_38.StatData.Pad[1] = local_res8.s.LowPart._1_1_;
      local_38.StatData.Pad[2] = local_res8.s.LowPart._2_1_;
      local_38.StatData.Pad[3] = local_res8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_38);
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
  FStatsHierarchical::EndMeasurement();
  return;
}

// Unwrap @ 14a6838b0

RigLogic * __thiscall FRigLogic::Unwrap(FRigLogic *this)

{
  return (this->RigLogic).Ptr;
}

