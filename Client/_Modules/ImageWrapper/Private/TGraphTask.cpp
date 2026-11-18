// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImageWrapper
// Functions: 2

// TGraphTask<UE::ImageWrapper::Private::TiffImageWrapper::FProcessDecodedDataTask> @ 142664410

TGraphTask<UE::ImageWrapper::Private::TiffImageWrapper::FProcessDecodedDataTask> * __thiscall
TGraphTask<UE::ImageWrapper::Private::TiffImageWrapper::FProcessDecodedDataTask>::
TGraphTask<UE::ImageWrapper::Private::TiffImageWrapper::FProcessDecodedDataTask>
          (TGraphTask<UE::ImageWrapper::Private::TiffImageWrapper::FProcessDecodedDataTask> *this,
          TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  ulong64 uVar3;
  
  this->_padding_ = (longlong)&___7FTaskBase_Private_Tasks_UE__6B_;
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined1 *)((longlong)&this->_padding_ + 5) = 0;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  uVar3 = TaskTrace::GenerateTaskId();
  this->_padding_ = uVar3;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ =
       (longlong)
       &
       ___7TTaskDelegateDummy___TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
  this->_padding_ = 0;
  this->_padding_ = -0x17ffffffffffffe0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 1;
  *(undefined2 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FBaseGraphTask__6B_;
  if (param_1 !=
      (TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
       *)0x0) {
    UE::Tasks::Private::FTaskBase::
    AddPrerequisites<TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>,0>
              ((FTaskBase *)this,param_1,false);
  }
  LOCK();
  plVar1 = &this->_padding_;
  lVar2 = *plVar1;
  *(char *)plVar1 = (char)*plVar1 + -1;
  UNLOCK();
  if ((lVar2 & 2) != 0) {
    UE::FMutex::WakeWaitingThread((FMutex *)&this->_padding_);
  }
  this->_padding_ =
       (longlong)
       &___7__TGraphTask_VFProcessDecodedDataTask_TiffImageWrapper_Private_ImageWrapper_UE____6B_;
  return this;
}

// ExecuteTask @ 14268a0d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TGraphTask<UE::ImageWrapper::Private::TiffImageWrapper::FProcessDecodedDataTask>::ExecuteTask
          (TGraphTask<UE::ImageWrapper::Private::TiffImageWrapper::FProcessDecodedDataTask> *this)

{
  int *piVar1;
  longlong *plVar2;
  FName FVar3;
  code *pcVar4;
  uchar *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks> FVar12;
  undefined8 uVar13;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uchar *puVar14;
  FNameEntryId FVar15;
  uchar *puVar16;
  LARGE_INTEGER local_res8;
  TGraphTask<UE::ImageWrapper::Private::TiffImageWrapper::FProcessDecodedDataTask> *local_res10;
  FName local_res18 [2];
  FName local_48;
  FStatMessage local_38;
  
  if (this != (TGraphTask<UE::ImageWrapper::Private::TiffImageWrapper::FProcessDecodedDataTask> *)
              0x0) {
    LOCK();
    *(int *)&this->_padding_ = (int)this->_padding_ + 1;
    UNLOCK();
  }
  FVar12 = StatPtr_STAT_TaskGraph_OtherTasks;
  local_res10 = this;
  if (StatPtr_STAT_TaskGraph_OtherTasks ==
      (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks>)0x0) {
    pFVar11 = ::FName::FName(local_res18,"STAT_TaskGraph_OtherTasks");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_TaskGraph_OtherTasks>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_TaskGraph_OtherTasks,*pFVar11,
                        L"Other TaskGraph Tasks","STATGROUP_Threading","STATCAT_Advanced",
                        L"Threading",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_48.ComparisonIndex.Value = 0;
  local_48.Number = 0;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  FVar3 = *(FName *)FVar12;
  FVar15 = FVar3.ComparisonIndex.Value;
  uVar10 = FVar3.Number;
  if ((FVar15.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8.s,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.s.LowPart = FVar15.Value;
        local_res8.s.HighPart = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res8.s,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\TaskGraphInterfaces.h"
                   ,0x2b7);
        bVar7 = true;
        bVar6 = true;
      }
    }
    bVar8 = false;
    if ((FThreadStats::bPrimaryDisableForever == false) || (FThreadStats::bPrimaryEnable != false))
    {
      local_res8.s.LowPart = FVar15.Value;
      local_res8.s.HighPart = uVar10;
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar8 = true;
      local_48 = FVar3;
    }
  }
  UE::Core::Private::Function::CheckCallable(*(void **)(this->TaskStorage).Pad);
  pcVar4 = *(code **)(this->TaskStorage).Pad;
  puVar16 = (this->TaskStorage).Pad + 0x10;
  puVar5 = *(uchar **)((this->TaskStorage).Pad + 0x28);
  puVar14 = puVar16;
  if (puVar5 != (uchar *)0x0) {
    puVar14 = puVar5;
  }
  uVar13 = (**(code **)(*(longlong *)puVar14 + 8))();
  (*pcVar4)(uVar13);
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (local_48 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_38.NameAndInfo.Index = local_48.ComparisonIndex.Value;
      local_38.NameAndInfo.Number = local_48.Number & 0xffff6fff | 0x6000;
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
  if (*(longlong *)(this->TaskStorage).Pad != 0) {
    puVar5 = *(uchar **)((this->TaskStorage).Pad + 0x28);
    if (puVar5 != (uchar *)0x0) {
      puVar16 = puVar5;
    }
    (**(code **)(*(longlong *)puVar16 + 0x10))(puVar16);
  }
  if (this != (TGraphTask<UE::ImageWrapper::Private::TiffImageWrapper::FProcessDecodedDataTask> *)
              0x0) {
    LOCK();
    plVar2 = &this->_padding_;
    lVar9 = *plVar2;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)lVar9 == 1) {
      (**(code **)this->_padding_)(this,1);
    }
  }
  return;
}

