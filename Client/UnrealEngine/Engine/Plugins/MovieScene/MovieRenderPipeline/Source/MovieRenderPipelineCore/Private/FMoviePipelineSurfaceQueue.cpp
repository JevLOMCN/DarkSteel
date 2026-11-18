// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 8

// FMoviePipelineSurfaceQueue @ 14dd6a9c0

FMoviePipelineSurfaceQueue * __thiscall
FMoviePipelineSurfaceQueue::FMoviePipelineSurfaceQueue
          (FMoviePipelineSurfaceQueue *this,TIntPoint<int> param_1,EPixelFormat param_2,uint param_3
          ,bool param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  FMoviePipelineSurfaceQueue *pFVar5;
  ulonglong uVar6;
  
  uVar6 = (ulonglong)param_3;
  (this->Surfaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Surfaces).ArrayMax;
  (this->Surfaces).ArrayNum = 0;
  *piVar1 = 0;
  this->CurrentFrameIndex = 0;
  if ((param_3 == 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumSurfaces > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineSurfaceReader.cpp"
                         ,0x102,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FMoviePipelineSurfaceQueue *)(*pcVar2)();
    return pFVar5;
  }
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar6);
  }
  if (*piVar1 < (int)param_3) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x50,0x10,param_3,&(this->Surfaces).AllocatorInstance,(this->Surfaces).ArrayNum,
               piVar1);
  }
  if (param_3 != 0) {
    do {
      iVar4 = (this->Surfaces).ArrayNum;
      if (iVar4 == *piVar1) {
        iVar4 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x1050,&(this->Surfaces).AllocatorInstance,piVar1);
      }
      (this->Surfaces).ArrayNum = iVar4 + 1;
      FResolveSurface::FResolveSurface
                ((FResolveSurface *)
                 ((this->Surfaces).AllocatorInstance.Data + (longlong)iVar4 * 0x50),param_2,param_1,
                 param_4);
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  this->FrameResolveLatency = 1;
  this->LastUsedFrame = GFrameCounter;
  return this;
}

// ~FMoviePipelineSurfaceQueue @ 14dd6bd60

void __thiscall
FMoviePipelineSurfaceQueue::~FMoviePipelineSurfaceQueue(FMoviePipelineSurfaceQueue *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<FMoviePipelineSurfaceQueue::FResolveSurface,int>
            ((FResolveSurface *)(this->Surfaces).AllocatorInstance.Data,(this->Surfaces).ArrayNum);
  pFVar1 = (this->Surfaces).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// BlockUntilAnyAvailable @ 14dd77f00

void __thiscall FMoviePipelineSurfaceQueue::BlockUntilAnyAvailable(FMoviePipelineSurfaceQueue *this)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  
  iVar1 = (this->Surfaces).ArrayNum;
  pFVar8 = (this->Surfaces).AllocatorInstance.Data;
  pFVar9 = pFVar8 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->Surfaces).ArrayNum != iVar1) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FMoviePipelineSurfaceQueue::FResolveSurface,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(local_res8);
    }
    if (pFVar8 == pFVar9) break;
    if (*(longlong *)(*(longlong *)pFVar8 + 0x10) == 0) {
      return;
    }
    pFVar8 = pFVar8 + 0x50;
  }
  iVar1 = (this->Surfaces).ArrayNum;
  uVar7 = (this->CurrentFrameIndex + 1) % iVar1;
  uVar6 = 0;
  if ((int)uVar7 < iVar1) {
    uVar6 = ~uVar7 >> 0x1f;
  }
  if ((uVar6 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  lVar2 = *(longlong *)((this->Surfaces).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x50);
  plVar3 = *(longlong **)(lVar2 + 0x10);
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3,0xffffffff,0);
    FGenericPlatformProcess::ReturnSynchEventToPool(*(FEvent **)(lVar2 + 0x10));
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  return;
}

// IsStale @ 14dd900b0

bool __thiscall FMoviePipelineSurfaceQueue::IsStale(FMoviePipelineSurfaceQueue *this)

{
  return 3 < GFrameCounter - this->LastUsedFrame;
}

// OnRenderTargetReady_RenderThread @ 14dd93ca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FMoviePipelineSurfaceQueue::OnRenderTargetReady_RenderThread
          (FMoviePipelineSurfaceQueue *this,TRefCountPtr<FRHITexture> param_1,
          TSharedRef<FImagePixelDataPayload,1> *param_2,
          TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
          *param_3)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  FMoviePipelineSurfaceReader *this_00;
  code *pcVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  FColor_u_0 FVar14;
  FEvent *pFVar15;
  FName *pFVar16;
  FThreadSafeStaticStat<FStat_STAT_MoviePipeline_SurfaceReadback> FVar17;
  FThreadStats *this_01;
  FThreadStatsPool *this_02;
  uint uVar18;
  uint uVar19;
  FColor_u_0 FVar20;
  FScriptContainerElement *pFVar21;
  FName FVar22;
  FColor_u_0 FVar23;
  FColor_u_0 local_res8;
  uint uStackX_c;
  FColor_u_0 local_res10;
  uint local_res14;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FImagePixelDataPayload *local_78;
  FSharedReferencer<1> local_70;
  FStatMessage local_68;
  TSharedPtr<FImagePixelDataPayload,1> local_58;
  
  bVar13 = IsInRenderingThread();
  if (!bVar13) {
    bVar13 = UE::Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<5183810503029293392>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineSurfaceReader.cpp"
                        ,0x150,"IsInRenderingThread()");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  uVar19 = this->CurrentFrameIndex;
  FVar23.Bits = 0;
  uVar18 = 0;
  if ((int)uVar19 < (this->Surfaces).ArrayNum) {
    uVar18 = ~uVar19 >> 0x1f;
  }
  if (uVar18 == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar21 = (this->Surfaces).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x50;
  if (*(longlong *)(*(longlong *)pFVar21 + 0x10) != 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineSurfaceReader.cpp"
                        ,0x159,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  lVar3 = *(longlong *)pFVar21;
  if (*(longlong *)(lVar3 + 0x10) != 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("!AvailableEvent",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineSurfaceReader.cpp"
                        ,0x25,L"");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar15 = FGenericPlatformProcess::GetSynchEventFromPool(false);
  *(FEvent **)(lVar3 + 0x10) = pFVar15;
  lVar3 = *(longlong *)&param_3->field_0x8;
  lVar5 = *(longlong *)(pFVar21 + 0x10);
  lVar6 = *(longlong *)(pFVar21 + 0x18);
  lVar7 = *(longlong *)(pFVar21 + 0x20);
  lVar8 = *(longlong *)(pFVar21 + 0x28);
  lVar9 = *(longlong *)(pFVar21 + 0x30);
  lVar10 = *(longlong *)(pFVar21 + 0x38);
  *(longlong *)(pFVar21 + 0x10) = *(longlong *)param_3;
  *(longlong *)(pFVar21 + 0x18) = lVar3;
  lVar3 = *(longlong *)&param_3->field_0x18;
  *(longlong *)(pFVar21 + 0x20) = *(longlong *)&param_3->field_0x10;
  *(longlong *)(pFVar21 + 0x28) = lVar3;
  lVar3 = *(longlong *)&param_3->field_0x28;
  *(longlong *)(pFVar21 + 0x30) = *(longlong *)&param_3->field_0x20;
  *(longlong *)(pFVar21 + 0x38) = lVar3;
  *(longlong *)param_3 = lVar5;
  *(longlong *)&param_3->field_0x8 = lVar6;
  *(longlong *)&param_3->field_0x10 = lVar7;
  *(longlong *)&param_3->field_0x18 = lVar8;
  *(longlong *)&param_3->field_0x20 = lVar9;
  *(longlong *)&param_3->field_0x28 = lVar10;
  local_70.ReferenceController = (param_2->SharedReferenceCount).ReferenceController;
  local_78 = param_2->Object;
  if (local_70.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_70.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_70.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pFVar21 + 0x40 != (FScriptContainerElement *)&local_78) {
    *(FImagePixelDataPayload **)(pFVar21 + 0x40) = local_78;
    local_78 = (FImagePixelDataPayload *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              ((FSharedReferencer<1> *)(pFVar21 + 0x48),&local_70);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_70.ReferenceController);
  FMoviePipelineSurfaceReader::ResolveSampleToReadbackTexture_RenderThread
            (*(FMoviePipelineSurfaceReader **)pFVar21,(TRefCountPtr<FRHITexture> *)param_1.Reference
            );
  iVar2 = (this->Surfaces).ArrayNum;
  FVar20.Bits = iVar2 - 1U;
  if (this->FrameResolveLatency < (int)(iVar2 - 1U)) {
    FVar20 = (FColor_u_0)this->FrameResolveLatency;
  }
  FVar14.Bits = FVar23.Bits;
  if (0 < (int)FVar20.Bits) {
    FVar14 = FVar20;
  }
  uVar19 = this->CurrentFrameIndex - FVar14.Bits;
  if ((int)uVar19 < 0) {
    uVar19 = (iVar2 - (int)FVar14) + this->CurrentFrameIndex;
  }
  FVar20.Bits = FVar23.Bits;
  if ((int)uVar19 < iVar2) {
    FVar20.Bits = ~uVar19 >> 0x1f;
  }
  if (FVar20.Bits == 0) {
    bVar13 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar13) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar21 = (this->Surfaces).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x50;
  if (*(char *)(*(longlong *)pFVar21 + 0x2c) == '\0') goto LAB_14dd94145;
  FVar17 = StatPtr_STAT_MoviePipeline_SurfaceReadback;
  if (StatPtr_STAT_MoviePipeline_SurfaceReadback ==
      (FThreadSafeStaticStat<FStat_STAT_MoviePipeline_SurfaceReadback>)0x0) {
    pFVar16 = ::FName::FName(&local_res20,"STAT_MoviePipeline_SurfaceReadback");
    FVar17 = (FThreadSafeStaticStat<FStat_STAT_MoviePipeline_SurfaceReadback>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_MoviePipeline_SurfaceReadback,
                        *pFVar16,L"STAT_MoviePipeline_SurfaceReadback","STATGROUP_MoviePipeline",
                        "STATCAT_Advanced",L"MovieRenderPipeline",true,true,ST_int64,true,false,
                        MCR_Invalid);
  }
  FVar22 = *(FName *)FVar17;
  bVar13 = false;
  bVar12 = false;
  FVar20.Bits = (uint)FVar22.ComparisonIndex.Value;
  uVar19 = FVar22.Number;
  if ((FVar20.Bits == 0) && (uVar19 == 0)) {
LAB_14dd94021:
    bVar11 = false;
    FVar22.ComparisonIndex.Value = 0;
    FVar22.Number = 0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8._s_0,(char *)*(FName *)((longlong)FVar17 + 0x10));
      bVar13 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.Bits = FVar20.Bits;
        local_res14 = uVar19;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_res10._s_0,(wchar_t *)*(FName *)((longlong)FVar17 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MoviePipelineSurfaceReader.cpp"
                   ,0x170);
        bVar13 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dd94021;
    local_res8.Bits = FVar20.Bits;
    uStackX_c = uVar19;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar11 = true;
    FVar23.Bits = FVar20.Bits;
  }
  local_58.Object = *(FImagePixelDataPayload **)(pFVar21 + 0x40);
  this_00 = *(FMoviePipelineSurfaceReader **)pFVar21;
  local_58.SharedReferenceCount.ReferenceController =
       *(TReferenceControllerBase<1> **)(pFVar21 + 0x48);
  if (local_58.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_58.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  FMoviePipelineSurfaceReader::CopyReadbackTexture_RenderThread
            (this_00,(TUniqueFunction<void___cdecl(TUniquePtr<FImagePixelData,TDefaultDelete<FImagePixelData>_>_&&)>
                      *)(pFVar21 + 0x10),&local_58);
  if (bVar12) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar11) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_01 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_01 == (FThreadStats *)0x0) {
      this_02 = FThreadStatsPool::Get();
      this_01 = FThreadStatsPool::GetFromPool(this_02);
    }
    if (this_01->bWaitForExplicitFlush < this_01->ScopeCount) {
      local_68.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      local_68.NameAndInfo.Index.Value = FVar23.Bits;
      QueryPerformanceCounter(&local_res18);
      local_68.StatData.Pad[4] = '\0';
      local_68.StatData.Pad[5] = '\0';
      local_68.StatData.Pad[6] = '\0';
      local_68.StatData.Pad[7] = '\0';
      local_68.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_68.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_68.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_68.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_01,&local_68);
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
LAB_14dd94145:
  this->CurrentFrameIndex = (this->CurrentFrameIndex + 1) % (this->Surfaces).ArrayNum;
  if ((FRHIResource *)(param_1.Reference)->_padding_ != (FRHIResource *)0x0) {
    FRHIResource::Release((FRHIResource *)(param_1.Reference)->_padding_);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// Shutdown @ 14dda5a00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall FMoviePipelineSurfaceQueue::Shutdown(FMoviePipelineSurfaceQueue *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar5;
  undefined ***pppuVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  undefined1 local_b8;
  undefined1 local_b7 [15];
  code *local_a8 [2];
  undefined **local_98;
  FScriptContainerElement *pFStack_90;
  undefined8 local_88;
  undefined ***local_80;
  undefined1 local_78 [16];
  undefined **local_68;
  FScriptContainerElement *pFStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar9 = 0;
  if (0 < (this->Surfaces).ArrayNum) {
    do {
      iVar1 = (this->Surfaces).ArrayNum;
      uVar4 = 0;
      if ((int)uVar9 < iVar1) {
        uVar4 = ~uVar9 >> 0x1f;
      }
      if (uVar4 == 0) {
        local_c8 = (longlong)(int)uVar9;
        local_c0 = (longlong)iVar1;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
      local_80 = (undefined ***)0x0;
      local_98 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`FMoviePipelineSurfaceQueue::Shutdown'::`4'::<lambda_1>,1,0>
                  ::_vftable_;
      local_a8[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`FMoviePipelineSurfaceQueue::Shutdown'::__l4::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      pFStack_90 = (this->Surfaces).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x50;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_FMoviePipelineSurfaceQueue::Shutdown_::__l4::TSTR_PerformReadback302>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_a8);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_78._0_8_ = local_a8[0];
        local_50 = local_80;
        local_80 = (undefined ***)0x0;
        local_68 = local_98;
        pFStack_60 = pFStack_90;
        local_58 = local_88;
        local_a8[0] = (code *)0x0;
        local_48 = 2;
        pFVar5 = (FRenderCommandTag *)
                 TRenderCommandTag<`FMoviePipelineSurfaceQueue::Shutdown'::__l4::TSTR_PerformReadback302>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_78,pFVar5);
        uVar7 = (ulonglong)local_48;
        if ((2 < uVar7) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                               ,0xd4,L""), bVar3)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar7] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_78._0_8_ != (code *)0x0) {
            pppuVar6 = (undefined ***)(local_78 + 0x10);
            if (local_50 != (undefined ***)0x0) {
              pppuVar6 = local_50;
            }
            (*(code *)(*pppuVar6)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar7])(local_78);
        }
      }
      if (local_a8[0] != (code *)0x0) {
        pppuVar6 = &local_98;
        if (local_80 != (undefined ***)0x0) {
          pppuVar6 = local_80;
        }
        (*(code *)(*pppuVar6)[2])();
      }
      uVar9 = uVar9 + 1;
    } while ((int)uVar9 < (this->Surfaces).ArrayNum);
  }
  FlushRenderingCommands();
  iVar1 = (this->Surfaces).ArrayNum;
  pFVar8 = (this->Surfaces).AllocatorInstance.Data;
  pFVar10 = pFVar8 + (longlong)iVar1 * 0x50;
  while( true ) {
    if ((this->Surfaces).ArrayNum != iVar1) {
      `TCheckedPointerIterator<FMoviePipelineSurfaceQueue::FResolveSurface,int,0>::operator!='::__l2
      ::<lambda_1>::operator()(&local_b8);
    }
    if (pFVar8 == pFVar10) break;
    if (*(longlong *)(*(longlong *)pFVar8 + 0x10) != 0) {
      `FMoviePipelineSurfaceQueue::Shutdown'::__l8::<lambda_2>::operator()(local_b7);
    }
    pFVar8 = pFVar8 + 0x50;
  }
  return;
}

// UpdateLastUsedFrame @ 14dda8e30

void __thiscall FMoviePipelineSurfaceQueue::UpdateLastUsedFrame(FMoviePipelineSurfaceQueue *this)

{
  this->LastUsedFrame = GFrameCounter;
  return;
}

// operator() @ 15058ed70

bool __thiscall `FMoviePipelineSurfaceQueue::Shutdown'::__l8::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5183810503029293375>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5183810503029293375>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

