// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 3

// ~FRenderProxy @ 145fe9e10

void __thiscall FSlateUpdatableInstanceBuffer::FRenderProxy::~FRenderProxy(FRenderProxy *this)

{
  bool bVar1;
  
  this->_padding_ = (longlong)&___7FRenderProxy_FSlateUpdatableInstanceBuffer__6B_;
  bVar1 = IsInRenderingThread();
  if (bVar1) {
    (**(code **)((this->InstanceBufferResource)._padding_ + 0x20))();
  }
  else {
    BeginReleaseResource((FRenderResource *)&this->InstanceBufferResource,(FRenderCommandPipe *)0x0)
    ;
  }
  (this->InstanceBufferResource)._padding_ =
       (longlong)&___7__TSlateElementVertexBuffer_U__TVector4_N_Math_UE____6B_;
  FVertexBuffer::~FVertexBuffer((FVertexBuffer *)&this->InstanceBufferResource);
  this->_padding_ = (longlong)&___7ISlateUpdatableInstanceBufferRenderProxy__6B_;
  return;
}

// GetRHI @ 14600d790

FRHIBuffer * __thiscall FSlateUpdatableInstanceBuffer::FRenderProxy::GetRHI(FRenderProxy *this)

{
  return (FRHIBuffer *)(this->InstanceBufferResource)._padding_;
}

// Update @ 14602d970

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FSlateUpdatableInstanceBuffer::FRenderProxy::Update
          (FRenderProxy *this,FRHICommandListImmediate *param_1,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  byte bVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  FName *pFVar9;
  FThreadSafeStaticStat<FStat_STAT_SlateUpdateInstanceBuffer> FVar10;
  void *_Dst;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar11;
  FNameEntryId FVar12;
  FName FVar13;
  int iVar14;
  FColor_u_0 local_res8 [2];
  FName local_res10;
  LARGE_INTEGER local_res18;
  FName local_res20;
  FStatMessage local_58;
  
  FVar10 = StatPtr_STAT_SlateUpdateInstanceBuffer;
  if (StatPtr_STAT_SlateUpdateInstanceBuffer ==
      (FThreadSafeStaticStat<FStat_STAT_SlateUpdateInstanceBuffer>)0x0) {
    pFVar9 = ::FName::FName(&local_res20,"STAT_SlateUpdateInstanceBuffer");
    FVar10 = (FThreadSafeStaticStat<FStat_STAT_SlateUpdateInstanceBuffer>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateUpdateInstanceBuffer,*pFVar9
                        ,L"UpdateInstanceBuffer Time","STATGROUP_Slate","STATCAT_Advanced",L"Slate",
                        true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar13 = *(FName *)FVar10;
  bVar5 = false;
  bVar7 = false;
  FVar12 = FVar13.ComparisonIndex.Value;
  uVar11 = FVar13.Number;
  if ((FVar12.Value != 0) || (uVar11 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res8[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res8[0]._s_0,(char *)*(FName *)((longlong)FVar10 + 0x10));
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res10.ComparisonIndex.Value = FVar12.Value;
        local_res10.Number = uVar11;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res10,(wchar_t *)*(FName *)((longlong)FVar10 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateUpdatableBuffer.cpp"
                   ,0x2b);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res18.s.LowPart = FVar12.Value;
      local_res18.s.HighPart = uVar11;
      FThreadStats::AddMessage(FVar13,CycleScopeStart);
      bVar6 = true;
      goto LAB_14602daca;
    }
  }
  bVar6 = false;
  FVar13.ComparisonIndex.Value = 0;
  FVar13.Number = 0;
LAB_14602daca:
  TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::PreFillBuffer
            (&this->InstanceBufferResource,(FRHICommandListBase *)param_1,param_2->ArrayNum,false);
  lVar3 = (this->InstanceBufferResource)._padding_;
  iVar14 = param_2->ArrayNum << 4;
  if ((((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
      (param_1->field_0x64 != '\0')) &&
     ((GRHICommandList.bLatchedBypass == false || ((param_1->field_0x29b & 0x20) == 0)))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTopOfPipe() || Bypass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2ed,
                       L"Buffers may only be locked while recording RHI command lists, not during RHI command list execution."
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar2 = param_1->field_0x6a;
  if ((bVar2 != 0) && ((bVar2 & bVar2 - 1) != 0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar8 = param_1->field_0x6a == '\0';
  if (bVar8) {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,Graphics);
  }
  _Dst = (void *)(**(code **)(GDynamicRHI->_padding_ + 0x148))(GDynamicRHI,param_1,lVar3,0,iVar14,1)
  ;
  if (bVar8) {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,None);
  }
  memcpy(_Dst,(param_2->AllocatorInstance).Data,(longlong)iVar14);
  if ((((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) &&
      (param_1->field_0x64 != '\0')) &&
     ((GRHICommandList.bLatchedBypass == false || ((param_1->field_0x29b & 0x20) == 0)))) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsTopOfPipe() || Bypass()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2f5,
                       L"Buffers may only be unlocked while recording RHI command lists, not during RHI command list execution."
                      );
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  bVar2 = param_1->field_0x6a;
  if ((bVar2 != 0) && ((bVar2 & bVar2 - 1) != 0)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("ActivePipelines == ERHIPipeline::None || IsSingleRHIPipeline(ActivePipelines)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x2a5,L"");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (param_1->field_0x6a == '\0') {
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,Graphics);
    (**(code **)(GDynamicRHI->_padding_ + 0x158))();
    FRHICommandListBase::SwitchPipeline((FRHICommandListBase *)param_1,None);
  }
  else {
    (**(code **)(GDynamicRHI->_padding_ + 0x158))(GDynamicRHI,param_1);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar13 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_58.NameAndInfo.Index = FVar13.ComparisonIndex.Value;
      local_58.NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_res18);
      local_58.StatData.Pad[4] = '\0';
      local_58.StatData.Pad[5] = '\0';
      local_58.StatData.Pad[6] = '\0';
      local_58.StatData.Pad[7] = '\0';
      local_58.StatData.Pad[0] = local_res18.s.LowPart._0_1_;
      local_58.StatData.Pad[1] = local_res18.s.LowPart._1_1_;
      local_58.StatData.Pad[2] = local_res18.s.LowPart._2_1_;
      local_58.StatData.Pad[3] = local_res18.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_58);
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

