// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 7

// Execute @ 14d7a4740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass,`UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy'::__l5::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  FName local_d0;
  FStatMessage local_c0;
  FUniformBufferStaticBindings local_b0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass,`public:_virtual_void___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy(FRDGBuilder&___ptr64,FRDGViewableResource*___ptr64,bool)___ptr64'::`5'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass,`public:_virtual_void___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy(FRDGBuilder&___ptr64,FRDGViewableResource*___ptr64,bool)___ptr64'::`5'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass,`public:_virtual_void___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy(FRDGBuilder&___ptr64,FRDGViewableResource*___ptr64,bool)___ptr64'::`5'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass,`public:_virtual_void___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy(FRDGBuilder&___ptr64,FRDGViewableResource*___ptr64,bool)___ptr64'::`5'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass,`public:_virtual_void___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy(FRDGBuilder&___ptr64,FRDGViewableResource*___ptr64,bool)___ptr64'::`5'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FBufferCaptureFrame::FEnqueueCopyBufferPass,`public:_virtual_void___cdecl_UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy(FRDGBuilder&___ptr64,FRDGViewableResource*___ptr64,bool)___ptr64'::`5'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar10 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_d8.s,(pTVar6->StatDescriptionAnsi).Ptr)
      ;
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.s.LowPart = FVar9.Value;
        local_d8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8.s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8.s.LowPart = FVar9.Value;
      local_d8.s.HighPart = uVar8;
      local_d0 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_d0.ComparisonIndex.Value;
      goto LAB_14d7a48c6;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14d7a48c6:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_b0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b0.Slots.AllocatorInstance.SecondaryData);
  }
  `UE::MediaCaptureData::FBufferCaptureFrame::EnqueueCopy'::__l5::<lambda_1>::operator()
            ((void *)((longlong)this + 0x180),(FRHICommandList *)param_1);
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
      local_c0.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_c0.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_d8);
      local_c0.StatData.Pad[4] = '\0';
      local_c0.StatData.Pad[5] = '\0';
      local_c0.StatData.Pad[6] = '\0';
      local_c0.StatData.Pad[7] = '\0';
      local_c0.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_c0.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_c0.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_c0.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c0);
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

// Execute @ 14d7a4ac0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters,`UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_d0;
  FName local_c0;
  FUniformBufferStaticBindings local_b0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters,`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters,`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters,`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters,`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters,`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_d0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureBufferSyncPassParameters,`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FBufferCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar10 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_d8.s,(pTVar6->StatDescriptionAnsi).Ptr)
      ;
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.s.LowPart = FVar9.Value;
        local_d8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8.s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8.s.LowPart = FVar9.Value;
      local_d8.s.HighPart = uVar8;
      local_c0 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_c0.ComparisonIndex.Value;
      goto LAB_14d7a4c46;
    }
  }
  bVar3 = false;
  FVar10 = local_c0;
LAB_14d7a4c46:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_b0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b0.Slots.AllocatorInstance.SecondaryData);
  }
  local_d0.Object = *(FCaptureFrame **)((longlong)this + 0x188);
  local_d0.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 400);
  if (local_d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::MediaCaptureData::FMediaCaptureHelper::ExecuteSyncPointPass
            ((FRHICommandListImmediate *)param_1,*(UMediaCapture **)((longlong)this + 0x180),
             &local_d0);
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
      local_d0.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           (CONCAT44(FVar10.Number,FVar11.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_d8);
      local_d0.Object = (FCaptureFrame *)(ulonglong)local_d8.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_d0);
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

// Execute @ 14d7a4e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters,`UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1> local_d0;
  FName local_c0;
  FUniformBufferStaticBindings local_b0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters,`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters,`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters,`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters,`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters,`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_d0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCaptureData::FMediaCaptureTextureSyncPassParameters,`public:_static_void___cdecl_UE::MediaCaptureData::FMediaCaptureHelper::AddSyncPointPass<UE::MediaCaptureData::FTextureCaptureFrame>(FRDGBuilder&___ptr64,UMediaCapture*___ptr64,TSharedPtr<UE::MediaCaptureData::FCaptureFrame,1>,FRDGViewableResource*___ptr64)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar10 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  local_c0.ComparisonIndex.Value = 0;
  local_c0.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_d8.s,(pTVar6->StatDescriptionAnsi).Ptr)
      ;
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.s.LowPart = FVar9.Value;
        local_d8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8.s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8.s.LowPart = FVar9.Value;
      local_d8.s.HighPart = uVar8;
      local_c0 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_c0.ComparisonIndex.Value;
      goto LAB_14d7a4fe6;
    }
  }
  bVar3 = false;
  FVar10 = local_c0;
LAB_14d7a4fe6:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_b0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b0.Slots.AllocatorInstance.SecondaryData);
  }
  local_d0.Object = *(FCaptureFrame **)((longlong)this + 0x188);
  local_d0.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)((longlong)this + 400);
  if (local_d0.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_d0.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UE::MediaCaptureData::FMediaCaptureHelper::ExecuteSyncPointPass
            ((FRHICommandListImmediate *)param_1,*(UMediaCapture **)((longlong)this + 0x180),
             &local_d0);
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
      local_d0.SharedReferenceCount.ReferenceController =
           (TReferenceControllerBase<1> *)
           (CONCAT44(FVar10.Number,FVar11.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter(&local_d8);
      local_d0.Object = (FCaptureFrame *)(ulonglong)local_d8.s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_d0);
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

// Execute @ 14d7a5200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters,`FPixelShaderUtils::AddFullscreenPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_138 [32];
  LARGE_INTEGER local_d8;
  FName local_d0;
  FStatMessage local_c0;
  FUniformBufferStaticBindings local_b0;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_138;
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::MediaCapture::Resample::FMediaCaptureResamplePS,FShaderMapPointerTable>_const&___ptr64,UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::MediaCapture::Resample::FMediaCaptureResamplePS,FShaderMapPointerTable>_const&___ptr64,UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::MediaCapture::Resample::FMediaCaptureResamplePS,FShaderMapPointerTable>_const&___ptr64,UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_d8.s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::MediaCapture::Resample::FMediaCaptureResamplePS,FShaderMapPointerTable>_const&___ptr64,UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::MediaCapture::Resample::FMediaCaptureResamplePS,FShaderMapPointerTable>_const&___ptr64,UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_c0,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters,`public:_static_void___cdecl_FPixelShaderUtils::AddFullscreenPass<UE::MediaCapture::Resample::FMediaCaptureResamplePS>(FRDGBuilder&___ptr64,FGlobalShaderMap_const*___ptr64,FRDGEventName&&___ptr64,TShaderRefBase<UE::MediaCapture::Resample::FMediaCaptureResamplePS,FShaderMapPointerTable>_const&___ptr64,UE::MediaCapture::Resample::FMediaCaptureResamplePS::FParameters*___ptr64,UE::Math::TIntRect<int>_const&___ptr64,FRHIBlendState*___ptr64,FRHIRasterizerState*___ptr64,FRHIDepthStencilState*___ptr64,unsigned_int,ERDGPassFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar10 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  local_d0.ComparisonIndex.Value = 0;
  local_d0.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_d8.s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_d8.s,(pTVar6->StatDescriptionAnsi).Ptr)
      ;
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_d8.s.LowPart = FVar9.Value;
        local_d8.s.HighPart = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_d8.s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_d8.s.LowPart = FVar9.Value;
      local_d8.s.HighPart = uVar8;
      local_d0 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_d0.ComparisonIndex.Value;
      goto LAB_14d7a5386;
    }
  }
  bVar3 = false;
  FVar10 = local_d0;
LAB_14d7a5386:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_b0);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_b0.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_b0.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_b0.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_b0.Slots.AllocatorInstance.SecondaryData);
  }
  FPixelShaderUtils::DrawFullscreenPixelShader<UE::MediaCapture::Resample::FMediaCaptureResamplePS>
            ((FRHICommandList *)param_1,*(FGlobalShaderMap **)((longlong)this + 0x188),
             (TShaderRefBase<UE::MediaCapture::Resample::FMediaCaptureResamplePS,FShaderMapPointerTable>
              *)((longlong)this + 400),*(FParameters **)((longlong)this + 0x180),
             (TIntRect<int> *)((longlong)this + 0x1a0),*(FRHIBlendState **)((longlong)this + 0x1b0),
             *(FRHIRasterizerState **)((longlong)this + 0x1b8),
             *(FRHIDepthStencilState **)((longlong)this + 0x1c0),*(uint *)((longlong)this + 0x1c8));
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
      local_c0.NameAndInfo.Number = FVar10.Number & 0xffff6fff | 0x6000;
      local_c0.NameAndInfo.Index.Value = FVar11.Value;
      QueryPerformanceCounter(&local_d8);
      local_c0.StatData.Pad[4] = '\0';
      local_c0.StatData.Pad[5] = '\0';
      local_c0.StatData.Pad[6] = '\0';
      local_c0.StatData.Pad[7] = '\0';
      local_c0.StatData.Pad[0] = local_d8.s.LowPart._0_1_;
      local_c0.StatData.Pad[1] = local_d8.s.LowPart._1_1_;
      local_c0.StatData.Pad[2] = local_d8.s.LowPart._2_1_;
      local_c0.StatData.Pad[3] = local_d8.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_c0);
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

// Execute @ 14d7a55c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FModifyAlphaSwizzleRgbaPS::FParameters,`AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_158 [32];
  LARGE_INTEGER local_f8 [2];
  undefined1 local_e8 [16];
  FName local_d8;
  <lambda_1> local_c8;
  FUniformBufferStaticBindings local_a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FModifyAlphaSwizzleRgbaPS::FParameters,`void___cdecl_AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FModifyAlphaSwizzleRgbaPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FModifyAlphaSwizzleRgbaPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FModifyAlphaSwizzleRgbaPS::FParameters,`void___cdecl_AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FModifyAlphaSwizzleRgbaPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FModifyAlphaSwizzleRgbaPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FModifyAlphaSwizzleRgbaPS::FParameters,`void___cdecl_AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FModifyAlphaSwizzleRgbaPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FModifyAlphaSwizzleRgbaPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_f8[0].s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FModifyAlphaSwizzleRgbaPS::FParameters,`void___cdecl_AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FModifyAlphaSwizzleRgbaPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FModifyAlphaSwizzleRgbaPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FModifyAlphaSwizzleRgbaPS::FParameters,`void___cdecl_AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FModifyAlphaSwizzleRgbaPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FModifyAlphaSwizzleRgbaPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_e8,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FModifyAlphaSwizzleRgbaPS::FParameters,`void___cdecl_AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FModifyAlphaSwizzleRgbaPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FModifyAlphaSwizzleRgbaPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar10 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_f8[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8[0].s,(pTVar6->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8[0]._0_4_ = FVar9.Value;
        local_f8[0]._4_4_ = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8[0].s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8[0]._0_4_ = FVar9.Value;
      local_f8[0]._4_4_ = uVar8;
      local_d8 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_d8.ComparisonIndex.Value;
      goto LAB_14d7a5752;
    }
  }
  bVar3 = false;
  FVar10 = local_d8;
LAB_14d7a5752:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_a8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_a8.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_a8.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_a8.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_a8.Slots.AllocatorInstance.SecondaryData);
  }
  local_e8._0_8_ = *(FName *)((longlong)this + 0x180);
  local_e8._8_8_ = *(FStatNameAndInfo *)((longlong)this + 0x188);
  local_c8.PixelShader =
       (TShaderRefBase<FModifyAlphaSwizzleRgbaPS,FShaderMapPointerTable> *)((longlong)this + 0x200);
  local_c8.PixelShaderParameters = (FParameters **)((longlong)this + 0x210);
  local_c8.RHICmdList = (FRHICommandList *)param_1;
  DrawScreenPass<__AddDrawScreenPass<FModifyAlphaSwizzleRgbaPS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            ((FRHICommandList *)param_1,(FScreenPassViewInfo *)local_e8,
             (FScreenPassTextureViewport *)((longlong)this + 400),
             (FScreenPassTextureViewport *)((longlong)this + 0x1a8),
             (FScreenPassPipelineState *)((longlong)this + 0x1c0),
             *(EScreenPassDrawFlags *)((longlong)this + 0x218),&local_c8);
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
      local_e8._8_8_ = CONCAT44(FVar10.Number,FVar11.Value) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(local_f8);
      local_e8._4_4_ = 0;
      local_e8._0_4_ = local_f8[0].s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_e8);
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

// Execute @ 14d7a59a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FRGB10toYUVv210ConvertPS::FParameters,`AddDrawScreenPass<FRGB10toYUVv210ConvertPS>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_158 [32];
  LARGE_INTEGER local_f8 [2];
  undefined1 local_e8 [16];
  FName local_d8;
  <lambda_1> local_c8;
  FUniformBufferStaticBindings local_a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FRGB10toYUVv210ConvertPS::FParameters,`void___cdecl_AddDrawScreenPass<FRGB10toYUVv210ConvertPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FRGB10toYUVv210ConvertPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FRGB10toYUVv210ConvertPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FRGB10toYUVv210ConvertPS::FParameters,`void___cdecl_AddDrawScreenPass<FRGB10toYUVv210ConvertPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FRGB10toYUVv210ConvertPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FRGB10toYUVv210ConvertPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FRGB10toYUVv210ConvertPS::FParameters,`void___cdecl_AddDrawScreenPass<FRGB10toYUVv210ConvertPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FRGB10toYUVv210ConvertPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FRGB10toYUVv210ConvertPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_f8[0].s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FRGB10toYUVv210ConvertPS::FParameters,`void___cdecl_AddDrawScreenPass<FRGB10toYUVv210ConvertPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FRGB10toYUVv210ConvertPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FRGB10toYUVv210ConvertPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FRGB10toYUVv210ConvertPS::FParameters,`void___cdecl_AddDrawScreenPass<FRGB10toYUVv210ConvertPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FRGB10toYUVv210ConvertPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FRGB10toYUVv210ConvertPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_e8,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FRGB10toYUVv210ConvertPS::FParameters,`void___cdecl_AddDrawScreenPass<FRGB10toYUVv210ConvertPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FRGB10toYUVv210ConvertPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FRGB10toYUVv210ConvertPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar10 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_f8[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8[0].s,(pTVar6->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8[0]._0_4_ = FVar9.Value;
        local_f8[0]._4_4_ = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8[0].s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8[0]._0_4_ = FVar9.Value;
      local_f8[0]._4_4_ = uVar8;
      local_d8 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_d8.ComparisonIndex.Value;
      goto LAB_14d7a5b32;
    }
  }
  bVar3 = false;
  FVar10 = local_d8;
LAB_14d7a5b32:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_a8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_a8.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_a8.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_a8.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_a8.Slots.AllocatorInstance.SecondaryData);
  }
  local_e8._0_8_ = *(FName *)((longlong)this + 0x180);
  local_e8._8_8_ = *(FStatNameAndInfo *)((longlong)this + 0x188);
  local_c8.PixelShader =
       (TShaderRefBase<FRGB10toYUVv210ConvertPS,FShaderMapPointerTable> *)((longlong)this + 0x200);
  local_c8.PixelShaderParameters = (FParameters **)((longlong)this + 0x210);
  local_c8.RHICmdList = (FRHICommandList *)param_1;
  DrawScreenPass<__AddDrawScreenPass<FRGB10toYUVv210ConvertPS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            ((FRHICommandList *)param_1,(FScreenPassViewInfo *)local_e8,
             (FScreenPassTextureViewport *)((longlong)this + 400),
             (FScreenPassTextureViewport *)((longlong)this + 0x1a8),
             (FScreenPassPipelineState *)((longlong)this + 0x1c0),
             *(EScreenPassDrawFlags *)((longlong)this + 0x218),&local_c8);
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
      local_e8._8_8_ = CONCAT44(FVar10.Number,FVar11.Value) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(local_f8);
      local_e8._4_4_ = 0;
      local_e8._0_4_ = local_f8[0].s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_e8);
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

// Execute @ 14d7a5d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */

void __thiscall
TRDGLambdaPass<FRGB8toUYVY8ConvertPS::FParameters,`AddDrawScreenPass<FRGB8toUYVY8ConvertPS>'::__l2::<lambda_1>_>
::Execute(void *this,FRHIComputeCommandList *param_1)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FUniformBufferStaticBindings *pFVar7;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar8;
  FNameEntryId FVar9;
  FName FVar10;
  FNameEntryId FVar11;
  undefined1 auStackY_158 [32];
  LARGE_INTEGER local_f8 [2];
  undefined1 local_e8 [16];
  FName local_d8;
  <lambda_1> local_c8;
  FUniformBufferStaticBindings local_a8;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_158;
  FVar11.Value = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_virtual_void___cdecl_TRDGLambdaPass<FRGB8toUYVY8ConvertPS::FParameters,`void___cdecl_AddDrawScreenPass<FRGB8toUYVY8ConvertPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FRGB8toUYVY8ConvertPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FRGB8toUYVY8ConvertPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_virtual_void___cdecl_TRDGLambdaPass<FRGB8toUYVY8ConvertPS::FParameters,`void___cdecl_AddDrawScreenPass<FRGB8toUYVY8ConvertPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FRGB8toUYVY8ConvertPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FRGB8toUYVY8ConvertPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_virtual_void___cdecl_TRDGLambdaPass<FRGB8toUYVY8ConvertPS::FParameters,`void___cdecl_AddDrawScreenPass<FRGB8toUYVY8ConvertPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FRGB8toUYVY8ConvertPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FRGB8toUYVY8ConvertPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_STAT_FRDGPass_Execute = (TStatIdData *)0x0;
    pFVar5 = ::FName::FName((FName *)&local_f8[0].s,"STAT_FRDGPass_Execute");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_virtual_void___cdecl_TRDGLambdaPass<FRGB8toUYVY8ConvertPS::FParameters,`void___cdecl_AddDrawScreenPass<FRGB8toUYVY8ConvertPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FRGB8toUYVY8ConvertPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FRGB8toUYVY8ConvertPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute","STATGROUP_RHI",
               "STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,MCR_Invalid);
    _Init_thread_footer(&`private:_virtual_void___cdecl_TRDGLambdaPass<FRGB8toUYVY8ConvertPS::FParameters,`void___cdecl_AddDrawScreenPass<FRGB8toUYVY8ConvertPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FRGB8toUYVY8ConvertPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FRGB8toUYVY8ConvertPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar6 = _StatPtr_STAT_FRDGPass_Execute;
  if (_StatPtr_STAT_FRDGPass_Execute == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)local_e8,"STAT_FRDGPass_Execute");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`private:_virtual_void___cdecl_TRDGLambdaPass<FRGB8toUYVY8ConvertPS::FParameters,`void___cdecl_AddDrawScreenPass<FRGB8toUYVY8ConvertPS>(FRDGBuilder&___ptr64,FRDGEventName&&___ptr64,FScreenPassViewInfo,FScreenPassTextureViewport_const&___ptr64,FScreenPassTextureViewport_const&___ptr64,TShaderRefBase<FShader,FShaderMapPointerTable>_const&___ptr64,TShaderRefBase<FRGB8toUYVY8ConvertPS,FShaderMapPointerTable>_const&___ptr64,FRHIBlendState*___ptr64,FRHIDepthStencilState*___ptr64,FRGB8toUYVY8ConvertPS::FParameters*___ptr64,EScreenPassDrawFlags)'::`2'::<lambda_1>_>::Execute(FRHIComputeCommandList&___ptr64)___ptr64'
                         ::__l2::StatPtr_STAT_FRDGPass_Execute,*pFVar5,L"FRDGPass Execute",
                        "STATGROUP_RHI","STATCAT_Advanced",L"RHI",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar10 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  local_d8.ComparisonIndex.Value = 0;
  local_d8.Number = 0;
  FVar9 = FVar10.ComparisonIndex.Value;
  uVar8 = FVar10.Number;
  if ((FVar9.Value != 0) || (uVar8 != 0)) {
    if ((GCycleStatsShouldEmitNamedEvents != 0) && (GShouldEmitVerboseNamedEvents != false)) {
      local_f8[0].s.LowPart = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_f8[0].s,(pTVar6->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_f8[0]._0_4_ = FVar9.Value;
        local_f8[0]._4_4_ = uVar8;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_f8[0].s,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphPass.h"
                   ,699);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_f8[0]._0_4_ = FVar9.Value;
      local_f8[0]._4_4_ = uVar8;
      local_d8 = FVar10;
      FThreadStats::AddMessage(FVar10,CycleScopeStart);
      bVar3 = true;
      FVar11.Value = local_d8.ComparisonIndex.Value;
      goto LAB_14d7a5f12;
    }
  }
  bVar3 = false;
  FVar10 = local_d8;
LAB_14d7a5f12:
  pFVar7 = FRDGParameterStruct::GetStaticUniformBuffers
                     ((FRDGParameterStruct *)((longlong)this + 0x30),&local_a8);
  FRHIComputeCommandList::SetStaticUniformBuffers(param_1,pFVar7);
  if (local_a8.UniformBuffers.AllocatorInstance.SecondaryData !=
      (ForElementType<FRHIUniformBuffer_*>)0x0) {
    FMemory::Free((void *)local_a8.UniformBuffers.AllocatorInstance.SecondaryData);
  }
  if (local_a8.Slots.AllocatorInstance.SecondaryData != (ForElementType<unsigned_char>)0x0) {
    FMemory::Free((void *)local_a8.Slots.AllocatorInstance.SecondaryData);
  }
  local_e8._0_8_ = *(FName *)((longlong)this + 0x180);
  local_e8._8_8_ = *(FStatNameAndInfo *)((longlong)this + 0x188);
  local_c8.PixelShader =
       (TShaderRefBase<FRGB8toUYVY8ConvertPS,FShaderMapPointerTable> *)((longlong)this + 0x200);
  local_c8.PixelShaderParameters = (FParameters **)((longlong)this + 0x210);
  local_c8.RHICmdList = (FRHICommandList *)param_1;
  DrawScreenPass<__AddDrawScreenPass<FRGB8toUYVY8ConvertPS>_::__l2::<lambda_1>::operator()_::__l2::<lambda_1>_>
            ((FRHICommandList *)param_1,(FScreenPassViewInfo *)local_e8,
             (FScreenPassTextureViewport *)((longlong)this + 400),
             (FScreenPassTextureViewport *)((longlong)this + 0x1a8),
             (FScreenPassPipelineState *)((longlong)this + 0x1c0),
             *(EScreenPassDrawFlags *)((longlong)this + 0x218),&local_c8);
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
      local_e8._8_8_ = CONCAT44(FVar10.Number,FVar11.Value) & 0xffff6fffffffffff | 0x600000000000;
      QueryPerformanceCounter(local_f8);
      local_e8._4_4_ = 0;
      local_e8._0_4_ = local_f8[0].s.LowPart;
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)local_e8);
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

