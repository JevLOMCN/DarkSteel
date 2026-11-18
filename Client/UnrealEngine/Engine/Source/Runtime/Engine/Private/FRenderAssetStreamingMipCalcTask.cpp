// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// AllowPerRenderAssetMipBiasChanges @ 148788650

bool __thiscall
FRenderAssetStreamingMipCalcTask::AllowPerRenderAssetMipBiasChanges
          (FRenderAssetStreamingMipCalcTask *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  
  iVar5 = (this->StreamingData).ViewInfos.ArrayNum;
  uVar6 = 0;
  if (0 < iVar5) {
    lVar7 = 0;
    do {
      uVar4 = 0;
      if ((int)uVar6 < iVar5) {
        uVar4 = ~uVar6 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      if ((this->StreamingManager->Settings).PerTextureBiasViewBoostThreshold <
          *(float *)((this->StreamingData).ViewInfos.AllocatorInstance.Data + lVar7 + 0x20)) {
        return false;
      }
      iVar5 = (this->StreamingData).ViewInfos.ArrayNum;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x40;
    } while ((int)uVar6 < iVar5);
  }
  return true;
}

// ApplyPakStateChanges_Async @ 148788710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FRenderAssetStreamingMipCalcTask::ApplyPakStateChanges_Async(FRenderAssetStreamingMipCalcTask *this)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  FRenderAssetStreamingManager *pFVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  ForElementType<FSetElementId> FVar15;
  FWindowsRecursiveMutex *lpCriticalSection;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_98;
  undefined4 uStack_60;
  int iStack_5c;
  ForElementType<FSetElementId> local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_c8;
  local_98._0_8_ = 0;
  local_98._8_8_ = 0;
  local_98._32_8_ = 0;
  local_98._40_8_ = 0x8000000000;
  local_98._48_4_ = 0xffffffff;
  local_98._52_4_ = 0;
  local_58 = (ForElementType<FSetElementId>)0x0;
  iStack_50 = 0;
  lpCriticalSection = &this->StreamingManager->MountedStateDirtyFilesCS;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pFVar4 = this->StreamingManager;
  uVar12 = CONCAT44(local_98._52_4_,local_98._48_4_);
  lVar6 = *(longlong *)&(pFVar4->MountedStateDirtyFiles).Elements;
  uVar7 = *(undefined8 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x8;
  uVar13 = CONCAT44(uStack_4c,iStack_50);
  uVar8 = *(undefined8 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x10;
  uVar9 = *(undefined8 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x18;
  uVar10 = *(undefined8 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x20;
  uVar11 = *(undefined8 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x28;
  local_98._48_4_ = *(undefined4 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x30;
  local_98._52_4_ = *(undefined4 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x34;
  uVar5 = *(undefined4 *)(pFVar4->MountedStateDirtyFiles).Hash.InlineData;
  iVar2 = (pFVar4->MountedStateDirtyFiles).Hash._padding_;
  FVar15 = (pFVar4->MountedStateDirtyFiles).Hash.SecondaryData;
  iStack_50 = (pFVar4->MountedStateDirtyFiles).HashSize;
  uStack_4c = *(undefined4 *)&(pFVar4->MountedStateDirtyFiles).field_0x4c;
  *(undefined4 *)&(pFVar4->MountedStateDirtyFiles).Elements = local_98._0_4_;
  *(undefined4 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x4 = local_98._4_4_;
  *(undefined4 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x8 = local_98._8_4_;
  *(undefined4 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0xc = local_98._12_4_;
  *(undefined4 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x10 = local_98._16_4_;
  *(undefined4 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x14 = local_98._20_4_;
  *(undefined4 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x18 = local_98._24_4_;
  *(undefined4 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x1c = local_98._28_4_;
  *(undefined8 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x20 = local_98._32_8_;
  *(undefined8 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x28 = local_98._40_8_;
  *(undefined8 *)&(pFVar4->MountedStateDirtyFiles).Elements.field_0x30 = uVar12;
  (pFVar4->MountedStateDirtyFiles).Hash.InlineData[0] = (char)uStack_60;
  (pFVar4->MountedStateDirtyFiles).Hash.InlineData[1] = (char)((uint)uStack_60 >> 8);
  (pFVar4->MountedStateDirtyFiles).Hash.InlineData[2] = (char)((uint)uStack_60 >> 0x10);
  (pFVar4->MountedStateDirtyFiles).Hash.InlineData[3] = (char)((uint)uStack_60 >> 0x18);
  (pFVar4->MountedStateDirtyFiles).Hash._padding_ = iStack_5c;
  (pFVar4->MountedStateDirtyFiles).Hash.SecondaryData = local_58;
  *(undefined8 *)&(pFVar4->MountedStateDirtyFiles).HashSize = uVar13;
  bVar1 = this->StreamingManager->bRecacheAllFiles;
  this->StreamingManager->bRecacheAllFiles = false;
  local_98._0_8_ = lVar6;
  local_98._8_8_ = uVar7;
  local_98._16_8_ = uVar8;
  local_98._24_8_ = uVar9;
  local_98._32_8_ = uVar10;
  local_98._40_8_ = uVar11;
  uStack_60 = uVar5;
  iStack_5c = iVar2;
  local_58 = FVar15;
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((bVar1 != false) || (local_98._8_4_ != local_98._52_4_)) {
    pFVar4 = this->StreamingManager;
    iVar2 = (pFVar4->AsyncUnsafeStreamingRenderAssets).ArrayNum;
    pFVar16 = (pFVar4->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data;
    pFVar17 = pFVar16 + (longlong)iVar2 * 0xb8;
    while( true ) {
      if ((pFVar4->AsyncUnsafeStreamingRenderAssets).ArrayNum != iVar2) {
        `TCheckedPointerIterator<FStreamingRenderAsset,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_a8);
      }
      if ((pFVar16 == pFVar17) || (this->bAbort != false)) break;
      uVar3 = *(uint *)(pFVar16 + 0x18);
      if (uVar3 == 0) {
LAB_1487888d6:
        pFVar16 = pFVar16 + 0xb8;
      }
      else {
        if (bVar1 != false) {
LAB_1487888cf:
          pFVar16[0x95] = (FScriptContainerElement)0x0;
          goto LAB_1487888d6;
        }
        if (local_98._8_4_ == local_98._52_4_) goto LAB_1487888d6;
        FVar15 = (ForElementType<FSetElementId>)&uStack_60;
        if (local_58 != (ForElementType<FSetElementId>)0x0) {
          FVar15 = local_58;
        }
        iVar14 = *(int *)((longlong)FVar15 + (ulonglong)(iStack_50 - 1U & uVar3) * 4);
        if (iVar14 == -1) goto LAB_1487888d6;
        do {
          if (*(uint *)(local_98._0_8_ + (longlong)iVar14 * 0xc) == uVar3) goto LAB_1487888cf;
          iVar14 = *(int *)(local_98._0_8_ + 4 + (longlong)iVar14 * 0xc);
        } while (iVar14 != -1);
        pFVar16 = pFVar16 + 0xb8;
      }
    }
  }
  iStack_50 = 0;
  if (local_58 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_58);
  }
  TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<unsigned_int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_98);
  return;
}

// DoWork @ 148794fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FRenderAssetStreamingMipCalcTask::DoWork(FRenderAssetStreamingMipCalcTask *this)

{
  int *piVar1;
  int iVar2;
  FRenderAssetStreamingManager *pFVar3;
  double dVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  FSimpleStreamableAssetManager *lpCriticalSection;
  char cVar8;
  ushort uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<_public:_void___cdecl_FRenderAssetStreamingMipCalcTask::DoWork(void)_::_2_::FStat_STAT_FRenderAssetStreamingMipCalcTask_DoWork>
  FVar11;
  longlong lVar12;
  uint uVar13;
  FColor_u_0 FVar14;
  FName FVar15;
  FStreamingRenderAsset *this_00;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FStreamingRenderAsset *pFVar18;
  FScriptContainerElement *pFVar19;
  char local_res8 [8];
  FColor_u_0 local_res10;
  uint uStackX_14;
  LARGE_INTEGER local_res18;
  LARGE_INTEGER local_res20;
  
  FGenericPlatformMisc::BeginNamedEvent
            (&FColor::Turquoise,"FRenderAssetStreamingMipCalcTask_DoWork");
  if (CpuChannel->Enabled < 0) {
    local_res8[0] = '\0';
  }
  else {
    local_res8[0] = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1026,"FRenderAssetStreamingMipCalcTask_DoWork",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\AsyncTextureStreaming.cpp"
               ,0x402);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1026);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    if (StatPtr_STAT_FRenderAssetStreamingMipCalcTask_DoWork ==
        (FThreadSafeStaticStat<_public:_void___cdecl_FRenderAssetStreamingMipCalcTask::DoWork(void)_::_2_::FStat_STAT_FRenderAssetStreamingMipCalcTask_DoWork>
         )0x0) {
      pFVar10 = ::FName::FName((FName *)&local_res10._s_0,
                               "STAT_FRenderAssetStreamingMipCalcTask_DoWork");
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FRenderAssetStreamingMipCalcTask_DoWork,
                 *pFVar10,L"FRenderAssetStreamingMipCalcTask::DoWork","STATGROUP_StreamingDetails",
                 "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,MCR_Invalid);
    }
    _Init_thread_footer(&::_TSS0);
  }
  FVar11 = StatPtr_STAT_FRenderAssetStreamingMipCalcTask_DoWork;
  if (StatPtr_STAT_FRenderAssetStreamingMipCalcTask_DoWork ==
      (FThreadSafeStaticStat<_public:_void___cdecl_FRenderAssetStreamingMipCalcTask::DoWork(void)_::_2_::FStat_STAT_FRenderAssetStreamingMipCalcTask_DoWork>
       )0x0) {
    pFVar10 = ::FName::FName((FName *)&local_res18.s,"STAT_FRenderAssetStreamingMipCalcTask_DoWork")
    ;
    FVar11 = (FThreadSafeStaticStat<_public:_void___cdecl_FRenderAssetStreamingMipCalcTask::DoWork(void)_::_2_::FStat_STAT_FRenderAssetStreamingMipCalcTask_DoWork>
              )FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)
                          &StatPtr_STAT_FRenderAssetStreamingMipCalcTask_DoWork,*pFVar10,
                          L"FRenderAssetStreamingMipCalcTask::DoWork","STATGROUP_StreamingDetails",
                          "STATCAT_Advanced",L"Streaming Details",true,true,ST_int64,true,true,
                          MCR_Invalid);
  }
  FVar15 = *(FName *)FVar11;
  bVar5 = false;
  bVar7 = false;
  FVar14.Bits = (uint)FVar15.ComparisonIndex.Value;
  uVar13 = FVar15.Number;
  if ((FVar14.Bits != 0) || (uVar13 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10._s_0,(char *)*(FName *)((longlong)FVar11 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar14.Bits;
        uStackX_14 = uVar13;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar11 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\AsyncTextureStreaming.cpp"
                   ,0x403);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res10.Bits = FVar14.Bits;
      uStackX_14 = uVar13;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_14879519e;
    }
  }
  bVar6 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_14879519e:
  pFVar3 = this->StreamingManager;
  FAsyncRenderAssetStreamingData::ComputeViewInfoExtras(&this->StreamingData,&pFVar3->Settings);
  lpCriticalSection = FSimpleStreamableAssetManager::Instance;
  local_res10._s_0.B = FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0;
  if (FSimpleStreamableAssetManager::GUseSimpleStreamableAssetManager != 0) {
    EnterCriticalSection((LPCRITICAL_SECTION)FSimpleStreamableAssetManager::Instance);
  }
  FAsyncRenderAssetStreamingData::UpdateBoundSizes_Async(&this->StreamingData,&pFVar3->Settings);
  ApplyPakStateChanges_Async(this);
  lVar12 = (longlong)(pFVar3->AsyncUnsafeStreamingRenderAssets).ArrayNum;
  if ((__GTraceCounterStreamableAssets.Value != lVar12) &&
     (__GTraceCounterStreamableAssets.Value = lVar12, -1 < CountersChannel->Enabled)) {
    if (__GTraceCounterStreamableAssets.CounterId == (atomic<unsigned_int>)0x0) {
      uVar9 = FCountersTrace::OutputInitCounter
                        (__GTraceCounterStreamableAssets.CounterName,TraceCounterType_Int,
                         __GTraceCounterStreamableAssets.CounterFlags & 0xf);
      LOCK();
      if (__GTraceCounterStreamableAssets.CounterId == (atomic<unsigned_int>)0x0) {
        __GTraceCounterStreamableAssets.CounterId._2_2_ = 0;
        __GTraceCounterStreamableAssets.CounterId._0_2_ = uVar9;
      }
      UNLOCK();
    }
    FCountersTrace::OutputSetValue
              (__GTraceCounterStreamableAssets.CounterId._0_2_,__GTraceCounterStreamableAssets.Value
              );
  }
  QueryPerformanceCounter(&local_res20);
  iVar2 = (pFVar3->AsyncUnsafeStreamingRenderAssets).ArrayNum;
  this_00 = (FStreamingRenderAsset *)
            (pFVar3->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data;
  pFVar18 = this_00 + iVar2;
  while( true ) {
    if ((pFVar3->AsyncUnsafeStreamingRenderAssets).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FStreamingRenderAsset,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_res18);
    }
    if ((this_00 == pFVar18) || (this->bAbort != false)) break;
    FStreamingRenderAsset::UpdateOptionalMipsState_Async(this_00);
    FAsyncRenderAssetStreamingData::UpdatePerfectWantedMips_Async
              (&this->StreamingData,this_00,&pFVar3->Settings,false);
    this_00->DynamicBoostFactor = 1.0;
    this_00 = this_00 + 1;
  }
  QueryPerformanceCounter(&local_res18);
  cVar8 = local_res8[0];
  dVar4 = (double)(ulonglong)(local_res18.QuadPart - (longlong)local_res20) *
          FGenericPlatformTime::SecondsPerCycle64 * __real_408f400000000000;
  if (__CsvProfilerStat1063 == false) {
    FCsvProfilerTrace::OutputInlineStat
              ("RenderAssetStreamingUpdate",_GCsvCategory_TextureStreaming.Index);
    __CsvProfilerStat1063 = true;
  }
  FCsvProfiler::RecordCustomStat
            ("RenderAssetStreamingUpdate",_GCsvCategory_TextureStreaming.Index,(float)dVar4,Set);
  UpdateBudgetedMips_Async(this);
  UpdateBudgetedVirtualTextureMips_Async(this);
  UpdateLoadAndCancelationRequests_Async(this);
  UpdatePendingStreamingStatus_Async(this);
  piVar1 = &(this->StreamingData).DynamicInstancesView.BoundsViewInfo.ArrayMax;
  (this->StreamingData).DynamicInstancesView.BoundsViewInfo.ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&(this->StreamingData).DynamicInstancesView.BoundsViewInfo.AllocatorInstance,
               0,piVar1);
  }
  pFVar17 = (this->StreamingData).StaticInstancesViews.AllocatorInstance.Data;
  iVar2 = (this->StreamingData).StaticInstancesViews.ArrayNum;
  pFVar19 = pFVar17 + (longlong)iVar2 * 0x20;
  pFVar16 = pFVar17 + 0x14;
  while( true ) {
    if ((this->StreamingData).StaticInstancesViews.ArrayNum != iVar2) {
      `TCheckedPointerIterator<FRenderAssetInstanceAsyncView,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar17 == pFVar19) break;
    *(undefined4 *)(pFVar16 + -4) = 0;
    if (*(int *)pFVar16 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)(pFVar16 + -0xc),0,(int *)pFVar16);
    }
    pFVar17 = pFVar17 + 0x20;
    pFVar16 = pFVar16 + 0x20;
  }
  UpdateStats_Async(this);
  if (local_res10._s_0.B != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar6) {
    FThreadStats::AddMessage(FVar15,CycleScopeEnd);
  }
  if (cVar8 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  FGenericPlatformMisc::EndNamedEvent();
  return;
}

// TryDropMaxResolutions @ 1487ca2f0

void __thiscall
FRenderAssetStreamingMipCalcTask::TryDropMaxResolutions
          (FRenderAssetStreamingMipCalcTask *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          long64 *param_2,long64 param_3)

{
  EStreamableRenderAssetType EVar1;
  FRenderAssetStreamingManager *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long64 lVar8;
  char cVar9;
  int iVar10;
  FStreamingRenderAsset *this_00;
  uint uVar11;
  longlong lVar12;
  long64 lVar13;
  longlong lVar14;
  int local_58;
  
  pFVar2 = this->StreamingManager;
  local_58 = 0;
  if (0 < (pFVar2->Settings).GlobalMipBias) {
    while ((param_3 < *param_2 && (this->bAbort == false))) {
      uVar11 = param_1->ArrayNum - 1;
      lVar3 = *param_2;
      if (-1 < (int)uVar11) {
        lVar14 = (longlong)(int)uVar11 * 4;
        lVar12 = 0x7fffffffffffffff;
        do {
          if ((*param_2 <= param_3) || (this->bAbort != false)) break;
          uVar6 = 0;
          if ((int)uVar11 < param_1->ArrayNum) {
            uVar6 = ~uVar11 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar6 = *(uint *)((param_1->AllocatorInstance).Data + lVar14);
          lVar13 = lVar12;
          if (uVar6 != 0xffffffff) {
            uVar7 = 0;
            if ((int)uVar6 < (pFVar2->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
              uVar7 = ~uVar6 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_00 = (FStreamingRenderAsset *)
                      ((pFVar2->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                      (longlong)(int)uVar6 * 0xb8);
            cVar9 = this_00->NumForcedMips;
            if (this_00->NumForcedMips < this_00->MinAllowedMips) {
              cVar9 = this_00->MinAllowedMips;
            }
            if (cVar9 < this_00->BudgetedMips) {
              if ((this_00->MaxAllowedMips - local_58) + this_00->BudgetMipBias <=
                  (int)this_00->BudgetedMips) {
                iVar10 = local_58 - this_00->BudgetMipBias;
                if ((pFVar2->Settings).bPrioritizeMeshLODRetention != false) {
                  EVar1 = this_00->RenderAssetType;
                  lVar8 = FStreamingRenderAsset::GetDropMaxResMemDelta(this_00,iVar10 + 1);
                  if (lVar8 == 0) goto LAB_1487ca4f2;
                  if (EVar1 == Texture) {
                    lVar13 = lVar8;
                    if (lVar12 < lVar8) {
                      lVar13 = lVar12;
                    }
                  }
                  else if ((lVar8 < lVar12) && (lVar12 != 0x7fffffffffffffff)) goto LAB_1487ca4f2;
                }
                lVar8 = FStreamingRenderAsset::DropMaxResolution_Async(this_00,iVar10 + 1);
                *param_2 = *param_2 - lVar8;
              }
            }
            else {
              uVar6 = 0;
              if ((int)uVar11 < param_1->ArrayNum) {
                uVar6 = ~uVar11 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              *(undefined4 *)((param_1->AllocatorInstance).Data + lVar14) = 0xffffffff;
            }
          }
LAB_1487ca4f2:
          lVar14 = lVar14 + -4;
          uVar11 = uVar11 - 1;
          lVar12 = lVar13;
        } while (-1 < (int)uVar11);
      }
      if (lVar3 == *param_2) {
        return;
      }
      local_58 = local_58 + 1;
      if ((pFVar2->Settings).GlobalMipBias <= local_58) {
        return;
      }
    }
  }
  return;
}

// TryDropMips @ 1487ca5f0

void __thiscall
FRenderAssetStreamingMipCalcTask::TryDropMips
          (FRenderAssetStreamingMipCalcTask *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          long64 *param_2,long64 param_3)

{
  EStreamableRenderAssetType EVar1;
  FRenderAssetStreamingManager *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  long64 lVar8;
  char cVar9;
  FStreamingRenderAsset *this_00;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  
  pFVar2 = this->StreamingManager;
  if (param_3 < *param_2) {
    while (this->bAbort == false) {
      uVar12 = param_1->ArrayNum - 1;
      lVar3 = *param_2;
      if (-1 < (int)uVar12) {
        lVar13 = (longlong)(int)uVar12 * 4;
        lVar10 = 0x7fffffffffffffff;
        do {
          if ((*param_2 <= param_3) || (this->bAbort != false)) break;
          uVar6 = 0;
          if ((int)uVar12 < param_1->ArrayNum) {
            uVar6 = ~uVar12 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          uVar6 = *(uint *)((param_1->AllocatorInstance).Data + lVar13);
          lVar11 = lVar10;
          if (uVar6 != 0xffffffff) {
            uVar7 = 0;
            if ((int)uVar6 < (pFVar2->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
              uVar7 = ~uVar6 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            this_00 = (FStreamingRenderAsset *)
                      ((pFVar2->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                      (longlong)(int)uVar6 * 0xb8);
            cVar9 = this_00->NumForcedMips;
            if (this_00->NumForcedMips < this_00->MinAllowedMips) {
              cVar9 = this_00->MinAllowedMips;
            }
            if (cVar9 < this_00->BudgetedMips) {
              EVar1 = this_00->RenderAssetType;
              if (((((pFVar2->Settings).bPrioritizeMeshLODRetention == false) || (EVar1 == Texture))
                  || (lVar8 = FStreamingRenderAsset::GetDropOneMipMemDelta(this_00), lVar10 <= lVar8
                     )) || (lVar10 == 0x7fffffffffffffff)) {
                if (this_00->NumMissingMips < '\x01') {
                  lVar8 = FStreamingRenderAsset::DropOneMip_Async(this_00);
                  *param_2 = *param_2 - lVar8;
                  if ((((pFVar2->Settings).bPrioritizeMeshLODRetention != false) &&
                      (EVar1 == Texture)) && ((0 < lVar8 && (lVar11 = lVar8, lVar10 < lVar8)))) {
                    lVar11 = lVar10;
                  }
                }
                else {
                  this_00->NumMissingMips = this_00->NumMissingMips + -1;
                }
              }
            }
            else {
              uVar6 = 0;
              if ((int)uVar12 < param_1->ArrayNum) {
                uVar6 = ~uVar12 >> 0x1f;
              }
              if ((uVar6 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              *(undefined4 *)((param_1->AllocatorInstance).Data + lVar13) = 0xffffffff;
            }
          }
          lVar13 = lVar13 + -4;
          uVar12 = uVar12 - 1;
          lVar10 = lVar11;
        } while (-1 < (int)uVar12);
      }
      if (lVar3 == *param_2) {
        return;
      }
      if (*param_2 <= param_3) {
        return;
      }
    }
  }
  return;
}

// TryKeepMips @ 1487ca920

void __thiscall
FRenderAssetStreamingMipCalcTask::TryKeepMips
          (FRenderAssetStreamingMipCalcTask *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          long64 *param_2,long64 param_3)

{
  FRenderAssetStreamingManager *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  long64 lVar7;
  uint uVar8;
  FStreamingRenderAsset *this_00;
  longlong lVar9;
  
  pFVar1 = this->StreamingManager;
  bVar3 = true;
  lVar9 = *param_2;
  do {
    if (((param_3 <= lVar9) || (!bVar3)) || (this->bAbort != false)) {
      return;
    }
    bVar3 = false;
    uVar8 = 0;
    if (0 < param_1->ArrayNum) {
      lVar9 = 0;
      do {
        if (param_3 <= *param_2) {
          return;
        }
        if (this->bAbort != false) break;
        uVar5 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar5 = ~uVar8 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar5 = *(uint *)((param_1->AllocatorInstance).Data + lVar9);
        if (uVar5 != 0xffffffff) {
          uVar6 = 0;
          if ((int)uVar5 < (pFVar1->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
            uVar6 = ~uVar5 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this_00 = (FStreamingRenderAsset *)
                    ((pFVar1->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data +
                    (longlong)(int)uVar5 * 0xb8);
          lVar7 = FStreamingRenderAsset::KeepOneMip_Async(this_00);
          if (0 < lVar7) {
            if (lVar7 + *param_2 <= param_3) {
              *param_2 = lVar7 + *param_2;
              bVar3 = true;
              goto LAB_1487caae9;
            }
            FStreamingRenderAsset::DropOneMip_Async(this_00);
          }
          uVar5 = 0;
          if ((int)uVar8 < param_1->ArrayNum) {
            uVar5 = ~uVar8 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(undefined4 *)((param_1->AllocatorInstance).Data + lVar9) = 0xffffffff;
        }
LAB_1487caae9:
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 4;
      } while ((int)uVar8 < param_1->ArrayNum);
    }
    lVar9 = *param_2;
  } while( true );
}

// UpdateBudgetedMips_Async @ 1487cc000

/* WARNING: Removing unreachable block (ram,0x0001487cc318) */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FRenderAssetStreamingMipCalcTask::UpdateBudgetedMips_Async(FRenderAssetStreamingMipCalcTask *this)

{
  code *pcVar1;
  int iVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long64 lVar7;
  FScriptContainerElement FVar8;
  FScriptContainerElement FVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  char cVar14;
  uint uVar15;
  FStreamingRenderAsset *this_00;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  longlong lVar18;
  uint uVar19;
  long64 lVar20;
  longlong lVar21;
  FRenderAssetStreamingManager *pFVar22;
  longlong lVar23;
  FScriptContainerElement *pFVar24;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *pTVar25;
  uint uVar26;
  longlong lVar27;
  FStreamingRenderAsset *pFVar28;
  bool bVar29;
  FIdentityFunctor local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  ulonglong local_res20;
  uint local_d8;
  uint local_d4;
  uint local_d0 [2];
  ulonglong local_c8;
  TArray<int,TSizedDefaultAllocator<32>_> local_c0;
  TArray<int,TSizedDefaultAllocator<32>_> local_b0;
  FRenderAssetStreamingManager *local_a0;
  long64 local_98;
  long64 local_90;
  longlong local_88;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *local_80;
  FStreamingRenderAsset *local_78;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *local_70;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *local_68;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *local_60;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *local_58 [3];
  
  local_a0 = this->StreamingManager;
  lVar18 = 0;
  pTVar25 = &local_a0->AsyncUnsafeStreamingRenderAssets;
  local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c0.ArrayNum = 0;
  local_c0.ArrayMax = 0;
  local_b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b0.ArrayNum = 0;
  local_b0.ArrayMax = 0;
  iVar5 = (local_a0->AsyncUnsafeStreamingRenderAssets).ArrayNum;
  uVar10 = (ulonglong)iVar5;
  this_00 = (FStreamingRenderAsset *)(pTVar25->AllocatorInstance).Data;
  pFVar28 = this_00 + uVar10;
  local_res20 = local_res20 & 0xffffffff00000000;
  local_d4 = 0;
  local_90 = 0;
  local_98 = 0;
  local_88 = 0;
  local_c8 = CONCAT44(local_c8._4_4_,iVar5);
  lVar20 = lVar18;
  lVar23 = lVar18;
  lVar27 = lVar18;
  local_80 = pTVar25;
  local_78 = pFVar28;
  while( true ) {
    if (pTVar25->ArrayNum != (int)uVar10) {
      local_res8[0] = (FIdentityFunctor)0x0;
      `TCheckedPointerIterator<FStreamingRenderAsset,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
      lVar23 = local_88;
    }
    if ((this_00 == pFVar28) || (this->bAbort != false)) break;
    if ((this_00->RenderAssetType != Texture) || (this_00->bIsVirtualTexture == 0)) {
      lVar7 = FStreamingRenderAsset::UpdateRetentionPriority_Async
                        (this_00,(local_a0->Settings).bPrioritizeMeshLODRetention);
      cVar14 = this_00->ResidentMips;
      if ((cVar14 < '\x01') &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InMipCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                             ,0x38,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar10 = 8;
      if (this_00->RenderAssetType == Texture) {
        uVar10 = 0x10;
      }
      if ((uVar10 < ((longlong)cVar14 & 0xffffffffU)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)InMipCount <= (IsTexture() ? (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1) : (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                             ,0x39,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      lVar11 = (longlong)
               *(int *)((longlong)(&(this_00->LevelIndexUsage).AllocatorInstance + -5) +
                       (longlong)cVar14 * 4);
      lVar23 = local_88 + lVar11;
      pTVar25 = local_80;
      pFVar28 = local_78;
      local_88 = lVar23;
      if (this_00->RenderAssetType == Texture) {
        lVar20 = lVar20 + lVar7;
        local_res20 = CONCAT44(local_res20._4_4_,(uint)local_res20 + 1);
        local_90 = lVar20;
      }
      else {
        lVar18 = lVar18 + lVar7;
        lVar27 = lVar27 + lVar11;
        local_d4 = local_d4 + 1;
        local_98 = lVar18;
      }
    }
    uVar10 = local_c8 & 0xffffffff;
    this_00 = this_00 + 1;
  }
  bVar4 = false;
  lVar11 = this->MemoryMargin;
  if (this->TempMemoryBudget + lVar11 <
      (this->PerfectWantedMipsBudgetResetThresold - lVar18) - lVar20) {
    this->PerfectWantedMipsBudgetResetThresold = lVar20;
    bVar4 = true;
  }
  else if (this->PerfectWantedMipsBudgetResetThresold < lVar18 + lVar20) {
    this->PerfectWantedMipsBudgetResetThresold = lVar18 + lVar20;
  }
  lVar27 = (this->AllocatedMemory - lVar23) + lVar27;
  lVar23 = (this->PoolSize - lVar27) - lVar11;
  if ((0 < GRHIGlobals.PoolSizeVRAMPercentage) && (lVar13 = this->TotalGraphicsMemory, 0 < lVar13))
  {
    lVar21 = lVar13 + (longlong)(local_a0->Settings).VRAMPercentageClamp * -0x100000;
    lVar13 = SUB168(SEXT816(-0x5c28f5c28f5c28f5) *
                    SEXT816(GRHIGlobals.PoolSizeVRAMPercentage * lVar13),8) +
             GRHIGlobals.PoolSizeVRAMPercentage * lVar13;
    lVar11 = this->MemoryMargin;
    lVar13 = (lVar13 >> 6) - (lVar13 >> 0x3f);
    if (lVar21 < lVar13) {
      lVar21 = lVar13;
    }
    lVar13 = (lVar21 - lVar11) - (GRHIGlobals.NonStreamingTextureMemorySizeInKB * 0x400 + lVar27);
    lVar27 = this->PoolSize;
    if (lVar13 < this->PoolSize) {
      lVar27 = lVar13;
    }
    if (((local_a0->Settings).bLimitPoolSizeToVRAM != false) || (lVar23 < lVar27)) {
      lVar23 = lVar27;
    }
  }
  if (lVar23 < this->MemoryBudget) {
    lVar7 = 0;
    if (0 < lVar23) {
      lVar7 = lVar23;
    }
    this->MemoryBudget = lVar7;
  }
  else if (this->TempMemoryBudget + lVar11 < lVar23 - this->MemoryBudget) {
    this->MemoryBudget = lVar23;
    bVar4 = true;
  }
  lVar23 = this->MeshMemoryBudget;
  uVar10 = (ulonglong)((local_a0->Settings).MeshPoolSize << 0x14);
  this->MeshMemoryBudget = uVar10;
  local_c8 = uVar10 >> 0x3f;
  if (lVar23 < (longlong)uVar10) {
    bVar4 = true;
  }
  if ((local_a0->Settings).bUsePerTextureBias != false) {
    iVar5 = pTVar25->ArrayNum;
    pFVar16 = (pTVar25->AllocatorInstance).Data;
    pFVar24 = pFVar16 + (longlong)iVar5 * 0xb8;
    pFVar22 = local_a0;
    while( true ) {
      if ((pFVar22->AsyncUnsafeStreamingRenderAssets).ArrayNum != iVar5) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<FStreamingRenderAsset,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res10);
        pFVar22 = local_a0;
      }
      pTVar25 = local_80;
      if ((pFVar16 == pFVar24) || (this->bAbort != false)) break;
      if (((pFVar16[0x94] != (FScriptContainerElement)0x1) || (((byte)pFVar16[0x96] & 1) == 0)) &&
         (0 < *(int *)(pFVar16 + 0x80))) {
        if ((!bVar4) &&
           (((pFVar22->Settings).bFullyLoadMeshes == false ||
            (pFVar16[0x94] == (FScriptContainerElement)0x1)))) {
          iVar12 = (int)(char)pFVar16[0x90] + (int)(char)pFVar16[0x8e];
          if ((int)(char)pFVar16[0x90] + (int)(char)pFVar16[0x8e] < (int)(char)pFVar16[0x8f]) {
            iVar12 = (int)(char)pFVar16[0x8f];
          }
          if ((char)pFVar16[0x8d] <= iVar12) goto LAB_1487cc3e7;
        }
        *(undefined4 *)(pFVar16 + 0x80) = 0;
      }
LAB_1487cc3e7:
      pFVar16 = pFVar16 + 0xb8;
    }
  }
  uVar10 = local_c8;
  cVar14 = (char)local_c8;
  uVar19 = (uint)local_res20;
  uVar26 = local_d4;
  if (((this->MemoryBudget < lVar20) || ((cVar14 == '\0' && (this->MeshMemoryBudget < lVar18)))) &&
     (this->bAbort == false)) {
    if ((int)(uint)local_res20 < 0) goto LAB_1487cccf6;
    uVar17 = 0;
    if (local_c0.ArrayMax != (uint)local_res20) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(uint)local_res20,&local_c0.AllocatorInstance,0,&local_c0.ArrayMax);
    }
    uVar26 = local_d4;
    if ((int)local_d4 < 0) goto LAB_1487ccced;
    if (local_b0.ArrayMax != local_d4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,local_d4,&local_b0.AllocatorInstance,0,&local_b0.ArrayMax);
    }
    pFVar22 = local_a0;
    local_d8 = 0;
    if (0 < pTVar25->ArrayNum) {
      do {
        cVar14 = (char)uVar10;
        if (this->bAbort != false) break;
        lVar18 = (longlong)(int)local_d8;
        uVar19 = 0;
        if ((int)local_d8 < pTVar25->ArrayNum) {
          uVar19 = ~local_d8 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uVar10 = local_c8;
        pFVar16 = (pTVar25->AllocatorInstance).Data;
        lVar18 = lVar18 * 0xb8;
        cVar14 = (char)local_c8;
        if (*(longlong *)(pFVar16 + lVar18) != 0) {
          if ((((pFVar16[lVar18 + 0x94] != (FScriptContainerElement)0x1) ||
               ((((byte)pFVar16[lVar18 + 0x96] & 1) == 0 &&
                (*(int *)(pFVar16 + lVar18 + 0x1c) != 0x1d)))) &&
              (((byte)pFVar16[lVar18 + 0x96] & 4) == 0)) &&
             ((((byte)pFVar16[lVar18 + 0x96] & 0x50) != 0x50 &&
              (((pFVar22->Settings).bFullyLoadMeshes == false ||
               (pFVar16[lVar18 + 0x94] == (FScriptContainerElement)0x1)))))) {
            FVar8 = pFVar16[lVar18 + 0x89];
            if ((char)pFVar16[lVar18 + 0x89] < (char)pFVar16[lVar18 + 0x8c]) {
              FVar8 = pFVar16[lVar18 + 0x8c];
            }
            if ((char)FVar8 < (char)pFVar16[lVar18 + 0x91]) {
              if ((cVar14 == '\0') && (pFVar16[lVar18 + 0x94] != (FScriptContainerElement)0x1)) {
                if (((local_b0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d8) &&
                    ((FScriptContainerElement *)&local_d8 <
                     local_b0.AllocatorInstance.Data + (longlong)local_b0.ArrayMax * 4)) &&
                   (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar4)) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                iVar5 = local_b0.ArrayNum;
                if (local_b0.ArrayNum == local_b0.ArrayMax) {
                  iVar5 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_b0.AllocatorInstance,&local_b0.ArrayMax);
                }
                local_b0.ArrayNum = iVar5 + 1;
                *(uint *)(local_b0.AllocatorInstance.Data + (longlong)iVar5 * 4) = local_d8;
              }
              else {
                if ((local_c0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_d8) &&
                   (((FScriptContainerElement *)&local_d8 <
                     local_c0.AllocatorInstance.Data + (longlong)local_c0.ArrayMax * 4 &&
                    (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar4)))) {
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                iVar5 = local_c0.ArrayNum;
                if (local_c0.ArrayNum == local_c0.ArrayMax) {
                  iVar5 = UE::Core::Private::
                          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                    (0x404,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
                }
                local_c0.ArrayNum = iVar5 + 1;
                *(uint *)(local_c0.AllocatorInstance.Data + (longlong)iVar5 * 4) = local_d8;
              }
            }
          }
        }
        local_d8 = local_d8 + 1;
      } while ((int)local_d8 < pTVar25->ArrayNum);
      lVar18 = local_98;
      uVar19 = (uint)local_res20;
    }
    local_70 = pTVar25;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>
              ((int *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum,local_res8[0],
               (FCompareRenderAssetByRetentionPriority *)&local_70);
    local_68 = pTVar25;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>
              ((int *)local_b0.AllocatorInstance.Data,local_b0.ArrayNum,local_res8[0],
               (FCompareRenderAssetByRetentionPriority *)&local_68);
    if ((local_a0->Settings).bUsePerTextureBias == false) {
LAB_1487cc82c:
      TryDropMips(this,&local_c0,&local_90,this->MemoryBudget);
      lVar20 = local_90;
      if (cVar14 != '\0') goto LAB_1487cc876;
    }
    else {
      iVar5 = (this->StreamingData).ViewInfos.ArrayNum;
      uVar10 = uVar17;
      if (0 < iVar5) {
        do {
          uVar15 = (uint)uVar17;
          uVar6 = 0;
          if ((int)uVar15 < iVar5) {
            uVar6 = ~uVar15 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          lVar18 = local_98;
          if ((this->StreamingManager->Settings).PerTextureBiasViewBoostThreshold <
              *(float *)((this->StreamingData).ViewInfos.AllocatorInstance.Data + uVar10 + 0x20)) {
            cVar14 = (char)local_c8;
            goto LAB_1487cc82c;
          }
          iVar5 = (this->StreamingData).ViewInfos.ArrayNum;
          uVar17 = (ulonglong)(uVar15 + 1);
          uVar10 = uVar10 + 0x40;
        } while ((int)(uVar15 + 1) < iVar5);
      }
      TryDropMaxResolutions(this,&local_c0,&local_90,this->MemoryBudget);
      cVar14 = (char)local_c8;
      if (cVar14 != '\0') goto LAB_1487cc82c;
      TryDropMaxResolutions(this,&local_b0,&local_98,this->MeshMemoryBudget);
      TryDropMips(this,&local_c0,&local_90,this->MemoryBudget);
    }
    TryDropMips(this,&local_b0,&local_98,this->MeshMemoryBudget);
    lVar18 = local_98;
    lVar20 = local_90;
  }
LAB_1487cc876:
  if (((lVar20 < this->MemoryBudget) || ((cVar14 == '\0' && (lVar18 < this->MeshMemoryBudget)))) &&
     (this->bAbort == false)) {
    if ((int)uVar19 < 0) {
LAB_1487cccf6:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
    }
    uVar6 = local_c0.ArrayMax;
    local_c0._8_8_ = local_c0._8_8_ & 0xffffffff00000000;
    if (uVar6 != uVar19) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar19,&local_c0.AllocatorInstance,0,&local_c0.ArrayMax);
    }
    if ((int)uVar26 < 0) {
LAB_1487ccced:
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar26);
    }
    uVar19 = local_b0.ArrayMax;
    local_b0._8_8_ = local_b0._8_8_ & 0xffffffff00000000;
    if (uVar19 != uVar26) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar26,&local_b0.AllocatorInstance,0,&local_b0.ArrayMax);
    }
    lVar23 = this->MemoryBudget;
    local_res20 = this->MeshMemoryBudget - lVar18;
    local_d0[0] = 0;
    if (0 < pTVar25->ArrayNum) {
      do {
        if (this->bAbort != false) break;
        lVar18 = (longlong)(int)local_d0[0];
        uVar19 = 0;
        if ((int)local_d0[0] < pTVar25->ArrayNum) {
          uVar19 = ~local_d0[0] >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pFVar16 = (pTVar25->AllocatorInstance).Data + lVar18 * 0xb8;
        if ((*(longlong *)pFVar16 != 0) &&
           ((pFVar16[0x94] != (FScriptContainerElement)0x1 || (((byte)pFVar16[0x96] & 1) == 0)))) {
          FVar8 = pFVar16[0x91];
          if ((char)FVar8 < (char)pFVar16[0x8a]) {
            if (((char)FVar8 < '\x01') &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InMipCount > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                                   ,0x38,L""), bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar10 = 8;
            if (pFVar16[0x94] == (FScriptContainerElement)0x1) {
              uVar10 = 0x10;
            }
            if ((uVar10 < ((longlong)(char)FVar8 & 0xffffffffU)) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(uint32)InMipCount <= (IsTexture() ? (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1) : (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1))"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                                   ,0x39,L""), bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            FVar9 = pFVar16[0x91];
            iVar5 = *(int *)(pFVar16 + (longlong)(char)FVar8 * 4 + 0x20);
            uVar19 = (int)(char)FVar9 + 1;
            if (((int)uVar19 < 1) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InMipCount > 0",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                                   ,0x38,L""), bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            uVar26 = 8;
            if (pFVar16[0x94] == (FScriptContainerElement)0x1) {
              uVar26 = 0x10;
            }
            if ((uVar26 < uVar19) &&
               (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(uint32)InMipCount <= (IsTexture() ? (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1) : (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1))"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                                   ,0x39,L""), bVar4)) {
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            if (((char)local_c8 == '\0') && (pFVar16[0x94] != (FScriptContainerElement)0x1)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            pTVar3 = &local_c0;
            uVar10 = lVar23 - lVar20;
            if (bVar4) {
              uVar10 = local_res20;
              pTVar3 = &local_b0;
            }
            if ((longlong)(*(int *)(pFVar16 + (longlong)(char)FVar9 * 4 + 0x24) - iVar5) <=
                (longlong)uVar10) {
              pFVar16 = (pTVar3->AllocatorInstance).Data;
              if (((pFVar16 <= (FScriptContainerElement *)local_d0) &&
                  ((FScriptContainerElement *)local_d0 < pFVar16 + (longlong)pTVar3->ArrayMax * 4))
                 && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar4)) {
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              iVar5 = pTVar3->ArrayNum;
              if (iVar5 == pTVar3->ArrayMax) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&pTVar3->AllocatorInstance,&pTVar3->ArrayMax);
              }
              pTVar3->ArrayNum = iVar5 + 1;
              *(uint *)((pTVar3->AllocatorInstance).Data + (longlong)iVar5 * 4) = local_d0[0];
            }
          }
        }
        local_d0[0] = local_d0[0] + 1;
      } while ((int)local_d0[0] < pTVar25->ArrayNum);
      cVar14 = (char)local_c8;
    }
    local_60 = pTVar25;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>
              ((int *)local_c0.AllocatorInstance.Data,local_c0.ArrayNum,local_res8[0],
               (FCompareRenderAssetByRetentionPriority *)&local_60);
    local_58[0] = pTVar25;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>
              ((int *)local_b0.AllocatorInstance.Data,local_b0.ArrayNum,local_res8[0],
               (FCompareRenderAssetByRetentionPriority *)local_58);
    TryKeepMips(this,&local_c0,&local_90,this->MemoryBudget);
    if (cVar14 == '\0') {
      TryKeepMips(this,&local_b0,&local_98,this->MeshMemoryBudget);
    }
  }
  iVar5 = (local_a0->Settings).DropMips;
  if ((0 < iVar5) && (iVar5 != 4)) {
    iVar5 = pTVar25->ArrayNum;
    pFVar16 = (pTVar25->AllocatorInstance).Data;
    pFVar24 = pFVar16 + (longlong)iVar5 * 0xb8;
    while( true ) {
      if (pTVar25->ArrayNum != iVar5) {
        `TCheckedPointerIterator<FStreamingRenderAsset,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_res18);
      }
      if ((pFVar16 == pFVar24) || (this->bAbort != false)) break;
      FVar8 = pFVar16[0x91];
      FVar9 = pFVar16[0x8f];
      iVar12 = (int)(char)FVar9;
      if ((local_a0->Settings).DropMips == 1) {
        iVar2 = (int)(char)pFVar16[0x90];
        if ((char)pFVar16[0x90] < (char)FVar9) {
          iVar2 = iVar12;
        }
        bVar29 = SBORROW4((int)(char)FVar8,iVar2);
        bVar4 = (char)FVar8 - iVar2 < 0;
        iVar12 = iVar2;
      }
      else {
        bVar29 = SBORROW1((char)FVar8,(char)FVar9);
        bVar4 = (char)((char)FVar8 - (char)FVar9) < '\0';
      }
      FVar9 = SUB41(iVar12,0);
      if (bVar29 != bVar4) {
        FVar9 = FVar8;
      }
      pFVar16[0x91] = FVar9;
      pFVar16 = pFVar16 + 0xb8;
    }
  }
  if (local_b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b0.AllocatorInstance.Data);
  }
  if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c0.AllocatorInstance.Data);
  }
  return;
}

// UpdateBudgetedVirtualTextureMips_Async @ 1487ccd10

void __thiscall
FRenderAssetStreamingMipCalcTask::UpdateBudgetedVirtualTextureMips_Async
          (FRenderAssetStreamingMipCalcTask *this)

{
  FRenderAssetStreamingManager *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long64 lVar7;
  char cVar8;
  longlong lVar9;
  FStreamingRenderAsset *this_00;
  longlong lVar10;
  long64 local_res8;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *local_res10;
  uint local_58 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_50;
  
  pFVar1 = this->StreamingManager;
  local_res8 = 0;
  iVar6 = (pFVar1->Settings).VirtualTexturePoolSize;
  local_50.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_50.ArrayNum = 0;
  local_50.ArrayMax = 0;
  iVar4 = 0;
  if (0 < iVar6 << 0x14) {
    iVar4 = iVar6 << 0x14;
  }
  local_58[0] = 0;
  lVar10 = (longlong)iVar4;
  if (0 < (pFVar1->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
    do {
      if (this->bAbort != false) break;
      lVar9 = (longlong)(int)local_58[0];
      uVar5 = 0;
      if ((int)local_58[0] < (pFVar1->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
        uVar5 = ~local_58[0] >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (FStreamingRenderAsset *)
                ((pFVar1->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data + lVar9 * 0xb8);
      if (((this_00->RenderAsset != (UStreamableRenderAsset *)0x0) &&
          (this_00->RenderAssetType == Texture)) && (this_00->bIsVirtualTexture != 0)) {
        if (lVar10 == 0) {
          this_00->BudgetedMips = this_00->MinAllowedMips;
        }
        else {
          lVar7 = FStreamingRenderAsset::UpdateRetentionPriority_Async
                            (this_00,(pFVar1->Settings).bPrioritizeMeshLODRetention);
          iVar6 = FStreamingRenderAsset::GetSize(this_00,(int)this_00->MinAllowedMips);
          local_res8 = local_res8 + (lVar7 - iVar6);
          cVar8 = this_00->NumForcedMips;
          if (this_00->NumForcedMips < this_00->MinAllowedMips) {
            cVar8 = this_00->MinAllowedMips;
          }
          if (cVar8 < this_00->BudgetedMips) {
            if (((local_50.AllocatorInstance.Data <= (FScriptContainerElement *)local_58) &&
                ((FScriptContainerElement *)local_58 <
                 local_50.AllocatorInstance.Data + (longlong)local_50.ArrayMax * 4)) &&
               (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar3)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            iVar6 = local_50.ArrayNum;
            if (local_50.ArrayNum == local_50.ArrayMax) {
              iVar6 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_50.AllocatorInstance,&local_50.ArrayMax);
            }
            local_50.ArrayNum = iVar6 + 1;
            *(uint *)(local_50.AllocatorInstance.Data + (longlong)iVar6 * 4) = local_58[0];
          }
        }
      }
      local_58[0] = local_58[0] + 1;
    } while ((int)local_58[0] < (pFVar1->AsyncUnsafeStreamingRenderAssets).ArrayNum);
  }
  if ((lVar10 < local_res8) && (this->bAbort == false)) {
    local_res10 = &pFVar1->AsyncUnsafeStreamingRenderAssets;
    AlgoImpl::
    IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,FCompareRenderAssetByRetentionPriority>_>
              ((int *)local_50.AllocatorInstance.Data,local_50.ArrayNum,local_res8._0_1_,
               (FCompareRenderAssetByRetentionPriority *)&local_res10);
    TryDropMips(this,&local_50,&local_res8,lVar10);
  }
  if (local_50.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.AllocatorInstance.Data);
  }
  return;
}

// UpdateCSVOnlyStats_Async @ 1487cd050

void __thiscall
FRenderAssetStreamingMipCalcTask::UpdateCSVOnlyStats_Async(FRenderAssetStreamingMipCalcTask *this)

{
  long64 *plVar1;
  int *piVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  FRenderAssetStreamingManager *pFVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  FStreamingRenderAsset *pFVar13;
  int iVar14;
  longlong lVar15;
  FStreamingRenderAsset *this_00;
  float fVar16;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  int local_res20;
  
  pFVar6 = this->StreamingManager;
  iVar7 = 0;
  (pFVar6->GatheredStats).RenderAssetPool = this->PoolSize;
  (pFVar6->GatheredStats).SafetyPool = this->MemoryMargin;
  (pFVar6->GatheredStats).TemporaryPool = this->TempMemoryBudget;
  (pFVar6->GatheredStats).StreamingPool = this->MemoryBudget;
  (pFVar6->GatheredStats).NonStreamingMips = this->AllocatedMemory;
  (pFVar6->GatheredStats).RequiredPool = 0;
  (pFVar6->GatheredStats).CachedMips = 0;
  (pFVar6->GatheredStats).WantedMips = 0;
  (pFVar6->GatheredStats).PendingRequests = 0;
  (pFVar6->GatheredStats).NumStreamedMeshes = 0;
  (pFVar6->GatheredStats).AvgNumStreamedLODs = 0.0;
  (pFVar6->GatheredStats).AvgNumResidentLODs = 0.0;
  (pFVar6->GatheredStats).AvgNumEvictedLODs = 0.0;
  (pFVar6->GatheredStats).StreamedMeshMem = 0;
  (pFVar6->GatheredStats).ResidentMeshMem = 0;
  (pFVar6->GatheredStats).EvictedMeshMem = 0;
  uVar5 = (pFVar6->AsyncUnsafeStreamingRenderAssets).ArrayNum;
  uVar12 = (ulonglong)(int)uVar5;
  this_00 = (FStreamingRenderAsset *)
            (pFVar6->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data;
  pFVar13 = this_00 + uVar12;
  local_res10 = 0;
  local_res18 = 0;
  local_res20 = 0;
  iVar8 = iVar7;
  iVar9 = iVar7;
  do {
    while( true ) {
      if ((pFVar6->AsyncUnsafeStreamingRenderAssets).ArrayNum != (int)uVar12) {
        `TCheckedPointerIterator<FStreamingRenderAsset_const_,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res8);
        iVar7 = local_res10;
        iVar9 = local_res20;
        iVar8 = local_res18;
      }
      if ((this_00 == pFVar13) || (this->bAbort != false)) {
        iVar14 = (pFVar6->GatheredStats).NumStreamedMeshes;
        if (0 < iVar14) {
          fVar16 = __real_3f800000 / (float)iVar14;
          (pFVar6->GatheredStats).AvgNumStreamedLODs = (float)iVar7 * fVar16;
          (pFVar6->GatheredStats).AvgNumResidentLODs = (float)iVar8 * fVar16;
          (pFVar6->GatheredStats).AvgNumEvictedLODs = (float)iVar9 * fVar16;
        }
        return;
      }
      if ((this_00->RenderAsset != (UStreamableRenderAsset *)0x0) &&
         ((this_00->RenderAssetType != Texture || (this_00->bIsVirtualTexture == 0)))) break;
LAB_1487cd33c:
      uVar12 = (ulonglong)uVar5;
      this_00 = this_00 + 1;
    }
    iVar7 = FStreamingRenderAsset::GetSize(this_00,(int)this_00->ResidentMips);
    lVar15 = (longlong)iVar7;
    cVar3 = this_00->HiddenWantedMips;
    if (this_00->HiddenWantedMips < this_00->VisibleWantedMips) {
      cVar3 = this_00->VisibleWantedMips;
    }
    iVar7 = FStreamingRenderAsset::GetSize(this_00,(int)cVar3);
    iVar8 = FStreamingRenderAsset::GetSize(this_00,(int)this_00->BudgetedMips);
    plVar1 = &(pFVar6->GatheredStats).RequiredPool;
    *plVar1 = *plVar1 + (longlong)iVar7;
    lVar11 = 0;
    if (this_00->RenderAssetType == Texture) {
      lVar11 = lVar15;
    }
    plVar1 = &(pFVar6->GatheredStats).NonStreamingMips;
    *plVar1 = *plVar1 - lVar11;
    lVar11 = (longlong)iVar8;
    if (iVar7 < iVar8) {
      lVar11 = (longlong)iVar7;
    }
    lVar10 = lVar15;
    if (lVar11 < lVar15) {
      lVar10 = lVar11;
    }
    plVar1 = &(pFVar6->GatheredStats).WantedMips;
    *plVar1 = *plVar1 + lVar10;
    lVar11 = 0;
    if (0 < lVar15 - lVar10) {
      lVar11 = lVar15 - lVar10;
    }
    plVar1 = &(pFVar6->GatheredStats).CachedMips;
    *plVar1 = *plVar1 + lVar11;
    if (this_00->ResidentMips < this_00->RequestedMips) {
      iVar7 = FStreamingRenderAsset::GetSize(this_00,(int)this_00->RequestedMips);
      plVar1 = &(pFVar6->GatheredStats).PendingRequests;
      *plVar1 = *plVar1 + (iVar7 - lVar15);
    }
    iVar7 = local_res10;
    iVar9 = local_res20;
    iVar8 = local_res18;
    if (this_00->RenderAssetType == Texture) goto LAB_1487cd33c;
    iVar14 = (int)this_00->MaxAllowedMips;
    cVar3 = this_00->MinAllowedMips;
    cVar4 = this_00->ResidentMips;
    iVar7 = FStreamingRenderAsset::GetSize(this_00,iVar14);
    iVar9 = FStreamingRenderAsset::GetSize(this_00,(int)this_00->MinAllowedMips);
    iVar8 = local_res18 + cVar4;
    piVar2 = &(pFVar6->GatheredStats).NumStreamedMeshes;
    *piVar2 = *piVar2 + 1;
    plVar1 = &(pFVar6->GatheredStats).ResidentMeshMem;
    *plVar1 = *plVar1 + lVar15;
    plVar1 = &(pFVar6->GatheredStats).EvictedMeshMem;
    *plVar1 = *plVar1 + (iVar7 - lVar15);
    plVar1 = &(pFVar6->GatheredStats).StreamedMeshMem;
    *plVar1 = *plVar1 + ((longlong)iVar7 - (longlong)iVar9);
    iVar7 = local_res10 + (iVar14 - cVar3);
    uVar12 = (ulonglong)uVar5;
    iVar9 = local_res20 + (iVar14 - cVar4);
    this_00 = this_00 + 1;
    local_res10 = iVar7;
    local_res18 = iVar8;
    local_res20 = iVar9;
  } while( true );
}

// UpdateLoadAndCancelationRequests_Async @ 1487cdb80

void __thiscall
FRenderAssetStreamingMipCalcTask::UpdateLoadAndCancelationRequests_Async
          (FRenderAssetStreamingMipCalcTask *this)

{
  int *piVar1;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  byte bVar5;
  char cVar6;
  FScriptContainerElement FVar7;
  FRenderAssetStreamingManager *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  ulonglong uVar14;
  ulong64 uVar15;
  longlong lVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar20;
  FStreamingRenderAsset *this_00;
  int iVar21;
  uint uVar22;
  longlong lVar23;
  ulonglong uVar24;
  longlong local_res8;
  TArray<FStreamingRenderAsset,TSizedDefaultAllocator<32>_> *local_res18;
  uint local_78;
  uint local_74;
  ForAnyElementType local_70;
  int local_68;
  int iStack_64;
  ForAnyElementType local_60;
  undefined8 local_58;
  ForAnyElementType local_50;
  undefined8 local_48;
  
  pFVar8 = this->StreamingManager;
  pTVar4 = &this->CancelationRequests;
  piVar1 = &(this->CancelationRequests).ArrayMax;
  (this->CancelationRequests).ArrayNum = 0;
  pTVar2 = &pFVar8->AsyncUnsafeStreamingRenderAssets;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar4->AllocatorInstance,0,piVar1);
  }
  lVar23 = this->TempMemoryBudget;
  local_60.Data = (FScriptContainerElement *)0x0;
  local_58 = 0;
  if (this->bAbort == false) {
    uVar22 = (pFVar8->AsyncUnsafeStreamingRenderAssets).ArrayNum;
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    if (uVar22 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar22,&local_60,0,(int *)((longlong)&local_58 + 4));
    }
  }
  local_78 = 0;
  local_res8 = lVar23;
  if (0 < (pFVar8->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
    do {
      if (this->bAbort != false) break;
      lVar18 = (longlong)(int)local_78;
      uVar22 = 0;
      if ((int)local_78 < (pFVar8->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
        uVar22 = ~local_78 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      this_00 = (FStreamingRenderAsset *)((pTVar2->AllocatorInstance).Data + lVar18 * 0xb8);
      bVar5 = this_00->field_0x97;
      bVar11 = FStreamingRenderAsset::UpdateLoadOrderPriority_Async(this_00,&pFVar8->Settings);
      if (bVar11) {
        iVar21 = (int)this_00->ResidentMips;
        cVar6 = this_00->RequestedMips;
        if (cVar6 == this_00->ResidentMips) {
          if (((local_60.Data <= (FScriptContainerElement *)&local_78) &&
              ((FScriptContainerElement *)&local_78 < local_60.Data + (longlong)local_58._4_4_ * 4))
             && (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar21 = (int)local_58;
          if ((int)local_58 == local_58._4_4_) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_60,(int *)((longlong)&local_58 + 4));
          }
          local_58 = CONCAT44(local_58._4_4_,iVar21 + 1);
          *(uint *)(local_60.Data + (longlong)iVar21 * 4) = local_78;
        }
        else {
          iVar17 = (int)this_00->WantedMips;
          iVar13 = ((byte)~bVar5 >> 1 & 1) + iVar17;
          if (iVar13 < iVar21) {
            iVar13 = iVar21;
          }
          if (cVar6 <= iVar13) {
            if ((this_00->bMissingTooManyMips == '\0') && (iVar21 < iVar17)) {
              iVar17 = iVar21;
            }
            if (iVar17 <= cVar6) goto LAB_1487cde44;
          }
          pFVar9 = (pTVar4->AllocatorInstance).Data;
          if (((pFVar9 <= (FScriptContainerElement *)&local_78) &&
              ((FScriptContainerElement *)&local_78 < pFVar9 + (longlong)*piVar1 * 4)) &&
             (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar11)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar21 = (this->CancelationRequests).ArrayNum;
          if (iVar21 == *piVar1) {
            iVar21 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar4->AllocatorInstance,piVar1);
          }
          (this->CancelationRequests).ArrayNum = iVar21 + 1;
          *(uint *)((pTVar4->AllocatorInstance).Data + (longlong)iVar21 * 4) = local_78;
        }
      }
LAB_1487cde44:
      cVar6 = this_00->RequestedMips;
      if ((cVar6 < '\x01') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InMipCount > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                              ,0x38,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar14 = 8;
      if (this_00->RenderAssetType == Texture) {
        uVar14 = 0x10;
      }
      if ((uVar14 < ((longlong)cVar6 & 0xffffffffU)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)InMipCount <= (IsTexture() ? (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1) : (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                              ,0x39,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar18 = (longlong)
               *(int *)((longlong)(&(this_00->LevelIndexUsage).AllocatorInstance + -5) +
                       (longlong)cVar6 * 4);
      if (this_00->RequestedMips < this_00->ResidentMips) {
LAB_1487cded1:
        lVar23 = lVar23 - lVar18;
      }
      else if (this_00->ResidentMips < this_00->RequestedMips) {
        local_res8 = local_res8 - lVar18;
        goto LAB_1487cded1;
      }
      local_78 = local_78 + 1;
    } while ((int)local_78 < (pFVar8->AsyncUnsafeStreamingRenderAssets).ArrayNum);
  }
  uVar14 = 0;
  local_res18 = pTVar2;
  AlgoImpl::
  IntroSortInternal<int,int,FIdentityFunctor,TDereferenceWrapper<int,FCompareRenderAssetByLoadOrderPriority>_>
            ((int *)local_60.Data,(int)local_58,local_res8._0_1_,
             (FCompareRenderAssetByLoadOrderPriority *)&local_res18);
  local_50.Data = (FScriptContainerElement *)0x0;
  local_48 = 0;
  local_70.Data = (FScriptContainerElement *)0x0;
  local_68 = 0;
  iStack_64 = 0;
  if (this->bAbort == false) {
    uVar15 = local_58 & 0xffffffff;
    if ((int)local_58 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar15);
    }
    if (0 < (int)local_58) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,(int)local_58,&local_50,0,(int *)((longlong)&local_48 + 4));
      uVar15 = local_58 & 0xffffffff;
    }
    iVar21 = (int)uVar15;
    if (iVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar15);
    }
    if (iVar21 <= iStack_64) goto LAB_1487cdf8b;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar21,&local_70,local_68,&iStack_64);
  }
  uVar15 = local_58 & 0xffffffff;
LAB_1487cdf8b:
  uVar24 = uVar14;
  if ((int)uVar15 < 1) {
LAB_1487ce26e:
    iVar21 = (int)local_48;
  }
  else {
    do {
      if (this->bAbort != false) goto LAB_1487ce26e;
      uVar19 = (uint)uVar14;
      uVar22 = 0;
      if ((int)uVar19 < (int)local_58) {
        uVar22 = ~uVar19 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar22 = *(uint *)(local_60.Data + uVar24);
      uVar12 = 0;
      if ((int)uVar22 < (pFVar8->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
        uVar12 = ~uVar22 >> 0x1f;
      }
      local_74 = uVar22;
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      FVar7 = pFVar9[(longlong)(int)uVar22 * 0xb8 + 0x88];
      if (((char)FVar7 < '\x01') &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("InMipCount > 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                              ,0x38,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar14 = 8;
      if (pFVar9[(longlong)(int)uVar22 * 0xb8 + 0x94] == (FScriptContainerElement)0x1) {
        uVar14 = 0x10;
      }
      if ((uVar14 < ((longlong)(char)FVar7 & 0xffffffffU)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(uint32)InMipCount <= (IsTexture() ? (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1) : (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1))"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                              ,0x39,L""), bVar11)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar18 = (longlong)
               *(int *)(pFVar9 + (longlong)(char)FVar7 * 4 + (longlong)(int)uVar22 * 0xb8 + 0x20);
      if (((char)pFVar9[(longlong)(int)uVar22 * 0xb8 + 0x88] <
           (char)pFVar9[(longlong)(int)uVar22 * 0xb8 + 0x8a]) &&
         ((lVar18 <= lVar23 || ((int)local_48 == 0)))) {
        iVar21 = (int)local_48;
        if ((local_50.Data <= (FScriptContainerElement *)&local_74) &&
           ((FScriptContainerElement *)&local_74 < local_50.Data + (longlong)local_48._4_4_ * 4)) {
          bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar11) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar21 = (int)local_48;
        }
        if (iVar21 == local_48._4_4_) {
          iVar21 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_50,(int *)((longlong)&local_48 + 4));
        }
        local_48 = CONCAT44(local_48._4_4_,iVar21 + 1);
        lVar23 = lVar23 - lVar18;
        *(uint *)(local_50.Data + (longlong)iVar21 * 4) = local_74;
LAB_1487ce256:
        iVar21 = (int)local_48;
      }
      else {
        iVar21 = (int)local_48;
        if (((char)pFVar9[(longlong)(int)uVar22 * 0xb8 + 0x8a] <
             (char)pFVar9[(longlong)(int)uVar22 * 0xb8 + 0x88]) &&
           ((lVar18 <= local_res8 || (local_68 == 0)))) {
          if ((local_70.Data <= (FScriptContainerElement *)&local_74) &&
             (((FScriptContainerElement *)&local_74 < local_70.Data + (longlong)iStack_64 * 4 &&
              (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar11)))) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          if (local_68 == iStack_64) {
            local_68 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_70,&iStack_64);
          }
          lVar16 = (longlong)local_68;
          local_res8 = local_res8 - lVar18;
          local_68 = local_68 + 1;
          *(uint *)(local_70.Data + lVar16 * 4) = local_74;
          goto LAB_1487ce256;
        }
      }
      uVar14 = (ulonglong)(uVar19 + 1);
      uVar24 = uVar24 + 4;
    } while ((int)(uVar19 + 1) < (int)local_58);
  }
  pTVar4 = &this->LoadRequests;
  uVar22 = local_68 + iVar21;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  piVar1 = &(this->LoadRequests).ArrayMax;
  (this->LoadRequests).ArrayNum = 0;
  piVar3 = &(this->LoadRequests).ArrayNum;
  if ((this->LoadRequests).ArrayMax < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar22,&pTVar4->AllocatorInstance,0,piVar1);
  }
  pTVar20 = &this->LoadRequests;
  if ((pTVar4 == (TArray<int,TSizedDefaultAllocator<32>_> *)&local_50) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar23 = (longlong)(int)local_48;
  if ((int)local_48 != 0) {
    iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,(int)local_48,&pTVar4->AllocatorInstance,piVar3,piVar1);
    memcpy((pTVar4->AllocatorInstance).Data + (longlong)iVar21 * 4,local_50.Data,lVar23 << 2);
  }
  if ((pTVar20 == (TArray<int,TSizedDefaultAllocator<32>_> *)&local_70) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("(void*)this != (void*)&Source",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x96e,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  lVar23 = (longlong)local_68;
  if (local_68 != 0) {
    iVar21 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,local_68,&pTVar20->AllocatorInstance,piVar3,piVar1);
    memcpy((pTVar20->AllocatorInstance).Data + (longlong)iVar21 * 4,local_70.Data,lVar23 << 2);
  }
  if (local_70.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.Data);
  }
  if (local_50.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_50.Data);
  }
  if (local_60.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_60.Data);
  }
  return;
}

// UpdatePendingStreamingStatus_Async @ 1487ce490

void __thiscall
FRenderAssetStreamingMipCalcTask::UpdatePendingStreamingStatus_Async
          (FRenderAssetStreamingMipCalcTask *this)

{
  int *piVar1;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar2;
  bool bVar3;
  FRenderAssetStreamingManager *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  uint local_28 [4];
  
  pFVar4 = this->StreamingManager;
  pTVar2 = &this->PendingUpdateDirties;
  piVar1 = &(this->PendingUpdateDirties).ArrayMax;
  bVar3 = pFVar4->bPauseRenderAssetStreaming;
  (this->PendingUpdateDirties).ArrayNum = 0;
  if ((this->PendingUpdateDirties).ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar2->AllocatorInstance,0,piVar1);
  }
  local_28[0] = 0;
  if (0 < (pFVar4->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
    do {
      uVar7 = local_28[0];
      if (this->bAbort != false) {
        return;
      }
      uVar10 = 0;
      if ((int)local_28[0] < (pFVar4->AsyncUnsafeStreamingRenderAssets).ArrayNum) {
        uVar10 = ~local_28[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (pFVar4->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data;
      if (((this->StreamingData).ViewInfos.ArrayNum < 1) &&
         (((byte)pFVar5[(longlong)(int)uVar7 * 0xb8 + 0x96] & 0x40) == 0)) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
      }
      if ((bVar3 != false) ||
         (((char)pFVar5[(longlong)(int)uVar7 * 0xb8 + 0x91] <=
           (char)pFVar5[(longlong)(int)uVar7 * 0xb8 + 0x8a] && (bVar8)))) {
        bVar9 = 0;
      }
      else {
        bVar9 = 1;
      }
      if (((byte)pFVar5[(longlong)(int)uVar7 * 0xb8 + 0x96] >> 5 & 1) != bVar9) {
        pFVar5 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar5 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 < pFVar5 + (longlong)*piVar1 * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = (this->PendingUpdateDirties).ArrayNum;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->PendingUpdateDirties).ArrayNum = iVar11 + 1;
        *(uint *)((pTVar2->AllocatorInstance).Data + (longlong)iVar11 * 4) = local_28[0];
      }
      local_28[0] = local_28[0] + 1;
    } while ((int)local_28[0] < (pFVar4->AsyncUnsafeStreamingRenderAssets).ArrayNum);
  }
  return;
}

// UpdateStats_Async @ 1487d04d0

void __thiscall
FRenderAssetStreamingMipCalcTask::UpdateStats_Async(FRenderAssetStreamingMipCalcTask *this)

{
  int *piVar1;
  long64 *plVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  FRenderAssetStreamingManager *pFVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  FStreamingRenderAsset *pFVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  longlong lVar19;
  longlong lVar20;
  FStreamingRenderAsset *this_00;
  float fVar21;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  int local_68;
  LARGE_INTEGER local_58 [3];
  
  pFVar7 = this->StreamingManager;
  iVar12 = 0;
  (pFVar7->GatheredStats).RenderAssetPool = this->PoolSize;
  (pFVar7->GatheredStats).UsedStreamingPool = 0;
  (pFVar7->GatheredStats).SafetyPool = this->MemoryMargin;
  (pFVar7->GatheredStats).TemporaryPool = this->TempMemoryBudget;
  (pFVar7->GatheredStats).StreamingPool = this->MemoryBudget;
  (pFVar7->GatheredStats).NonStreamingMips = this->AllocatedMemory;
  (pFVar7->GatheredStats).RequiredPool = 0;
  (pFVar7->GatheredStats).VisibleMips = 0;
  (pFVar7->GatheredStats).HiddenMips = 0;
  (pFVar7->GatheredStats).ForcedMips = 0;
  (pFVar7->GatheredStats).UnkownRefMips = 0;
  (pFVar7->GatheredStats).CachedMips = 0;
  (pFVar7->GatheredStats).WantedMips = 0;
  (pFVar7->GatheredStats).PendingRequests = 0;
  (pFVar7->GatheredStats).OverBudget = 0;
  (pFVar7->GatheredStats).NumStreamedMeshes = 0;
  (pFVar7->GatheredStats).AvgNumStreamedLODs = 0.0;
  (pFVar7->GatheredStats).AvgNumResidentLODs = 0.0;
  (pFVar7->GatheredStats).AvgNumEvictedLODs = 0.0;
  (pFVar7->GatheredStats).StreamedMeshMem = 0;
  (pFVar7->GatheredStats).ResidentMeshMem = 0;
  (pFVar7->GatheredStats).EvictedMeshMem = 0;
  iVar10 = (pFVar7->Settings).VirtualTexturePoolSize;
  (pFVar7->GatheredStats).NumVirtualTextures = 0;
  (pFVar7->GatheredStats).RequiredVirtualTexturePool = 0;
  (pFVar7->GatheredStats).UsedVirtualTexturePool = 0;
  (pFVar7->GatheredStats).VirtualTexturePool = (longlong)(iVar10 << 0x14);
  uVar5 = (pFVar7->AsyncUnsafeStreamingRenderAssets).ArrayNum;
  uVar18 = (ulonglong)(int)uVar5;
  this_00 = (FStreamingRenderAsset *)
            (pFVar7->AsyncUnsafeStreamingRenderAssets).AllocatorInstance.Data;
  pFVar14 = this_00 + uVar18;
  local_res18 = 0;
  local_res20 = 0;
  local_68 = 0;
  iVar10 = iVar12;
  iVar15 = iVar12;
  do {
    if ((pFVar7->AsyncUnsafeStreamingRenderAssets).ArrayNum != (int)uVar18) {
      local_res10[0] = 0;
      `TCheckedPointerIterator<FStreamingRenderAsset,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res10);
      iVar12 = local_res18;
      iVar15 = local_68;
      iVar10 = local_res20;
    }
    if ((this_00 == pFVar14) || (this->bAbort != false)) {
      iVar6 = (pFVar7->GatheredStats).NumStreamedMeshes;
      if (0 < iVar6) {
        fVar21 = __real_3f800000 / (float)iVar6;
        (pFVar7->GatheredStats).AvgNumStreamedLODs = (float)iVar12 * fVar21;
        (pFVar7->GatheredStats).AvgNumResidentLODs = (float)iVar10 * fVar21;
        (pFVar7->GatheredStats).AvgNumEvictedLODs = (float)iVar15 * fVar21;
      }
      lVar16 = (pFVar7->GatheredStats).RequiredPool - (pFVar7->GatheredStats).StreamingPool;
      lVar20 = 0;
      if (0 < lVar16) {
        lVar20 = lVar16;
      }
      plVar2 = &(pFVar7->GatheredStats).OverBudget;
      *plVar2 = *plVar2 + lVar20;
      QueryPerformanceCounter(local_58);
      (pFVar7->GatheredStats).Timestamp =
           (double)local_58[0].QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      return;
    }
    if (this_00->RenderAsset != (UStreamableRenderAsset *)0x0) {
      cVar3 = this_00->ResidentMips;
      if ((cVar3 < '\x01') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InMipCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                             ,0x38,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar18 = 8;
      if (this_00->RenderAssetType == Texture) {
        uVar18 = 0x10;
      }
      if ((uVar18 < ((longlong)cVar3 & 0xffffffffU)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)InMipCount <= (IsTexture() ? (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1) : (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                             ,0x39,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar20 = (longlong)
               *(int *)((longlong)(&(this_00->LevelIndexUsage).AllocatorInstance + -5) +
                       (longlong)cVar3 * 4);
      cVar3 = this_00->HiddenWantedMips;
      if (this_00->HiddenWantedMips < this_00->VisibleWantedMips) {
        cVar3 = this_00->VisibleWantedMips;
      }
      uVar13 = (uint)cVar3;
      if (((int)uVar13 < 1) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InMipCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                             ,0x38,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar11 = 8;
      if (this_00->RenderAssetType == Texture) {
        uVar11 = 0x10;
      }
      if ((uVar11 < uVar13) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)InMipCount <= (IsTexture() ? (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1) : (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                             ,0x39,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      cVar3 = this_00->BudgetedMips;
      lVar16 = (longlong)
               *(int *)((longlong)(&(this_00->LevelIndexUsage).AllocatorInstance + -5) +
                       (longlong)(int)uVar13 * 4);
      if ((cVar3 < '\x01') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InMipCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                             ,0x38,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar18 = 8;
      if (this_00->RenderAssetType == Texture) {
        uVar18 = 0x10;
      }
      if ((uVar18 < ((longlong)cVar3 & 0xffffffffU)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)InMipCount <= (IsTexture() ? (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1) : (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                             ,0x39,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar19 = (longlong)
               *(int *)((longlong)(&(this_00->LevelIndexUsage).AllocatorInstance + -5) +
                       (longlong)cVar3 * 4);
      cVar3 = this_00->MaxAllowedMips;
      if ((cVar3 < '\x01') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InMipCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                             ,0x38,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar18 = 8;
      if (this_00->RenderAssetType == Texture) {
        uVar18 = 0x10;
      }
      if ((uVar18 < ((longlong)cVar3 & 0xffffffffU)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)InMipCount <= (IsTexture() ? (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1) : (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                             ,0x39,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar10 = *(int *)((longlong)(&(this_00->LevelIndexUsage).AllocatorInstance + -5) +
                       (longlong)cVar3 * 4);
      cVar3 = this_00->VisibleWantedMips;
      if ((cVar3 < '\x01') &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InMipCount > 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                             ,0x38,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar18 = 8;
      if (this_00->RenderAssetType == Texture) {
        uVar18 = 0x10;
      }
      if ((uVar18 < ((longlong)cVar3 & 0xffffffffU)) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(uint32)InMipCount <= (IsTexture() ? (sizeof(UEArrayCountHelper(CumulativeLODSizes)) - 1) : (sizeof(UEArrayCountHelper(CumulativeLODSizes_Mesh)) - 1))"
                             ,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Streaming\\StreamingTexture.h"
                             ,0x39,L""), bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar17 = (longlong)
               *(int *)((longlong)(&(this_00->LevelIndexUsage).AllocatorInstance + -5) +
                       (longlong)cVar3 * 4);
      if ((this_00->RenderAssetType == Texture) && (this_00->bIsVirtualTexture != 0)) {
        piVar1 = &(pFVar7->GatheredStats).NumVirtualTextures;
        *piVar1 = *piVar1 + 1;
        plVar2 = &(pFVar7->GatheredStats).RequiredVirtualTexturePool;
        *plVar2 = *plVar2 + lVar16;
        plVar2 = &(pFVar7->GatheredStats).UsedVirtualTexturePool;
        *plVar2 = *plVar2 + lVar20;
        iVar10 = FStreamingRenderAsset::GetSize(this_00,(int)this_00->MinAllowedMips);
        plVar2 = &(pFVar7->GatheredStats).RequiredVirtualTexturePool;
        *plVar2 = *plVar2 - (longlong)iVar10;
        plVar2 = &(pFVar7->GatheredStats).UsedVirtualTexturePool;
        *plVar2 = *plVar2 - (longlong)iVar10;
        iVar12 = local_res18;
        iVar15 = local_68;
        iVar10 = local_res20;
      }
      else {
        plVar2 = &(pFVar7->GatheredStats).RequiredPool;
        *plVar2 = *plVar2 + lVar16;
        if (lVar16 < lVar19) {
          lVar19 = lVar16;
        }
        plVar2 = &(pFVar7->GatheredStats).UsedStreamingPool;
        *plVar2 = *plVar2 + lVar19;
        lVar16 = 0;
        if (this_00->RenderAssetType == Texture) {
          lVar16 = lVar20;
        }
        plVar2 = &(pFVar7->GatheredStats).NonStreamingMips;
        *plVar2 = *plVar2 - lVar16;
        iVar12 = this_00->BudgetMipBias - (pFVar7->Settings).GlobalMipBias;
        if (iVar12 < 0) {
          iVar12 = 0;
        }
        iVar12 = FStreamingRenderAsset::GetSize(this_00,iVar12 + this_00->MaxAllowedMips);
        plVar2 = &(pFVar7->GatheredStats).OverBudget;
        *plVar2 = *plVar2 + ((longlong)iVar12 - (longlong)iVar10);
        lVar16 = lVar20;
        if (lVar19 < lVar20) {
          lVar16 = lVar19;
        }
        plVar2 = &(pFVar7->GatheredStats).WantedMips;
        *plVar2 = *plVar2 + lVar16;
        lVar19 = 0;
        if (0 < lVar20 - lVar16) {
          lVar19 = lVar20 - lVar16;
        }
        plVar2 = &(pFVar7->GatheredStats).CachedMips;
        *plVar2 = *plVar2 + lVar19;
        if ((bool)this_00->bUseUnkownRefHeuristic) {
          plVar2 = &(pFVar7->GatheredStats).UnkownRefMips;
          *plVar2 = *plVar2 + lVar16;
        }
        else {
          lVar19 = (pFVar7->GatheredStats).VisibleMips;
          if (lVar17 < lVar16) {
            (pFVar7->GatheredStats).VisibleMips = lVar19 + lVar17;
            if ((this_00->bForceFullyLoadHeuristic == '\0') &&
               (((this_00->RenderAssetType != Texture || (this_00->LODGroup != 0x1d)) ||
                ((pFVar7->Settings).HLODStrategy < 1)))) {
              plVar2 = &(pFVar7->GatheredStats).HiddenMips;
              *plVar2 = *plVar2 + (lVar16 - lVar17);
            }
            else {
              plVar2 = &(pFVar7->GatheredStats).ForcedMips;
              *plVar2 = *plVar2 + (lVar16 - lVar17);
            }
          }
          else {
            (pFVar7->GatheredStats).VisibleMips = lVar19 + lVar16;
          }
        }
        if (this_00->ResidentMips < this_00->RequestedMips) {
          iVar10 = FStreamingRenderAsset::GetSize(this_00,(int)this_00->RequestedMips);
          plVar2 = &(pFVar7->GatheredStats).PendingRequests;
          *plVar2 = *plVar2 + (iVar10 - lVar20);
        }
        iVar12 = local_res18;
        iVar15 = local_68;
        iVar10 = local_res20;
        if (this_00->RenderAssetType != Texture) {
          iVar15 = (int)this_00->MaxAllowedMips;
          cVar3 = this_00->MinAllowedMips;
          cVar4 = this_00->ResidentMips;
          iVar10 = FStreamingRenderAsset::GetSize(this_00,iVar15);
          iVar12 = FStreamingRenderAsset::GetSize(this_00,(int)this_00->MinAllowedMips);
          local_res20 = local_res20 + cVar4;
          piVar1 = &(pFVar7->GatheredStats).NumStreamedMeshes;
          *piVar1 = *piVar1 + 1;
          plVar2 = &(pFVar7->GatheredStats).ResidentMeshMem;
          *plVar2 = *plVar2 + lVar20;
          plVar2 = &(pFVar7->GatheredStats).StreamedMeshMem;
          *plVar2 = *plVar2 + ((longlong)iVar10 - (longlong)iVar12);
          local_res18 = local_res18 + (iVar15 - cVar3);
          local_68 = local_68 + (iVar15 - cVar4);
          plVar2 = &(pFVar7->GatheredStats).EvictedMeshMem;
          *plVar2 = *plVar2 + (iVar10 - lVar20);
          iVar12 = local_res18;
          iVar15 = local_68;
          iVar10 = local_res20;
        }
      }
    }
    uVar18 = (ulonglong)uVar5;
    this_00 = this_00 + 1;
  } while( true );
}

