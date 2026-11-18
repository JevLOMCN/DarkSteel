// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GameplayCameras
// Functions: 2

// ExecuteTask @ 14d615c20

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x20);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14d615cfd;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14d615cfd:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x30);
  if ((this->TaskStorage).Pad[0x34] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x30);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x138));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xa8);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetCompositePropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>,UE::MovieScene::TReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

// ExecuteTask @ 14d615e70

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
::ExecuteTask(TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
              *this)

{
  int *piVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  FName *pFVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  bool bVar12;
  uint uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  FName FVar14;
  FNameEntryId FVar15;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  bVar8 = false;
  bVar10 = false;
  pFVar5 = *(FName **)((this->TaskStorage).Pad + 0x28);
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  FVar14 = *pFVar5;
  FVar15 = FVar14.ComparisonIndex.Value;
  uVar13 = FVar14.Number;
  if ((FVar15.Value != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_res8[0]._s_0,(char *)pFVar5[2]);
      bVar8 = false;
      bVar10 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar15.Value;
        local_res10.Number = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)pFVar5[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar8 = true;
        bVar10 = true;
      }
    }
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res18[0]._0_4_ = FVar15.Value;
      local_res18[0]._4_4_ = uVar13;
      FThreadStats::AddMessage(FVar14,CycleScopeStart);
      bVar9 = true;
      goto LAB_14d615f4d;
    }
  }
  bVar9 = false;
  FVar14 = local_48;
LAB_14d615f4d:
  iVar3 = *(int *)((this->TaskStorage).Pad + 0x38);
  if ((this->TaskStorage).Pad[0x3c] != '\0') {
    bVar12 = FWindowsPlatformMisc::IsDebuggerPresent();
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  iVar4 = *(int *)((this->TaskStorage).Pad + 0x38);
  if (((char)iVar4 == '\0') && (iVar3 != iVar4)) {
    bVar12 = ::FDebug::CheckVerifyFailedImpl2
                       ("CurrentThread == this->ComponentFilter.GetDesiredThread()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTask.h"
                        ,0x714,L"MovieScene evaluation task is not being run on its desired thread")
    ;
    if (bVar12) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  UE::MovieScene::
  TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
  ::Run((TEntityAllocationTaskBase<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>
         *)&this->TaskStorage,
        (TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>
         *)((this->TaskStorage).Pad + 0x140));
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar9) && (FVar14 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = FVar14.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = FVar14.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(local_res18);
      local_38.StatData.Pad[4] = '\0';
      local_38.StatData.Pad[5] = '\0';
      local_38.StatData.Pad[6] = '\0';
      local_38.StatData.Pad[7] = '\0';
      local_38.StatData.Pad[0] = local_res18[0]._0_1_;
      local_38.StatData.Pad[1] = local_res18[0]._1_1_;
      local_38.StatData.Pad[2] = local_res18[0]._2_1_;
      local_38.StatData.Pad[3] = local_res18[0]._3_1_;
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
  pvVar6 = *(void **)((this->TaskStorage).Pad + 0xb0);
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  if (this != (TGraphTask<UE::MovieScene::TEntityAllocationTask<UE::MovieScene::TSetPartialPropertyValuesImpl<UE::MovieScene::TPropertyTraits<FCameraFramingZone,FCameraFramingZone,1>,UE::MovieScene::TPropertyMetaData<>,TIntegerSequence<int,0,1,2,3>,double,double,double,double>,UE::MovieScene::TReadAccess<UObject_*>,UE::MovieScene::TReadOneOfAccessor<UE::MovieScene::FCustomPropertyIndex,unsigned_short,TSharedPtr<FTrackInstancePropertyBindings,1>_>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>,UE::MovieScene::TOptionalReadAccess<double>_>_>
               *)0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar11 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar11 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

