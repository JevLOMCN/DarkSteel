// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SlateRHIRenderer
// Functions: 7

// GetFriendlyName @ 14600ca00

FString * __thiscall
TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::GetFriendlyName
          (TSlateElementVertexBuffer<UE::Math::TVector4<double>_> *this,
          FString *__return_storage_ptr__)

{
  ::FString::FString(__return_storage_ptr__,L"SlateElementVertices");
  return __return_storage_ptr__;
}

// Init @ 146019b90

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::Init
          (TSlateElementVertexBuffer<UE::Math::TVector4<double>_> *this,int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  bool bVar1;
  int iVar2;
  
  iVar2 = 100;
  if (100 < param_1) {
    iVar2 = param_1;
  }
  this->MinBufferSize = iVar2 << 5;
  bVar1 = IsInRenderingThread();
  if (bVar1) {
    UNRECOVERED_JUMPTABLE = *(code **)(this->_padding_ + 0x18);
    bVar1 = IsInRenderingThread();
    if (!bVar1) {
      bVar1 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                         ,0x1594,L"");
      if (bVar1) {
        UNRECOVERED_JUMPTABLE = (code *)swi(3);
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000146019c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(this,0x154be5ed0);
    return;
  }
  BeginInitResource((FRenderResource *)this,(FRenderCommandPipe *)0x0);
  return;
}

// InitRHI @ 146019c20

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::InitRHI
          (TSlateElementVertexBuffer<UE::Math::TVector4<double>_> *this,FRHICommandListBase *param_1
          )

{
  longlong *plVar1;
  FRHIResource *this_00;
  code *pcVar2;
  bool bVar3;
  TRefCountPtr<FRHIBuffer> TVar4;
  FRHIResource *local_res8;
  
  plVar1 = &this->_padding_;
  if (this->_padding_ == 0) {
    if (this->MinBufferSize < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("MinBufferSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateElementVertexBuffer.h"
                         ,0x3f,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    SetBufferSize(this,this->MinBufferSize);
    RHIGetDefaultResourceState(VertexBuffer|Dynamic,false);
    TVar4 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res8);
    if ((FRHIBuffer *)plVar1 != TVar4.Reference) {
      this_00 = (FRHIResource *)*plVar1;
      *plVar1 = (TVar4.Reference)->_padding_;
      (TVar4.Reference)->_padding_ = 0;
      if (this_00 != (FRHIResource *)0x0) {
        FRHIResource::Release(this_00);
      }
    }
    if (local_res8 != (FRHIResource *)0x0) {
      FRHIResource::Release(local_res8);
    }
    if (*plVar1 == 0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValidRef(VertexBufferRHI)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateElementVertexBuffer.h"
                         ,0x4b,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  return;
}

// PreFillBuffer @ 14601dc50

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::PreFillBuffer
          (TSlateElementVertexBuffer<UE::Math::TVector4<double>_> *this,FRHICommandListBase *param_1
          ,int param_2,bool param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  FThreadSafeStaticStat<FStat_STAT_SlatePreFullBufferTime> FVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FNameEntryId FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  int iVar11;
  FColor_u_0 local_res18 [2];
  LARGE_INTEGER local_58;
  FStatMessage local_50;
  FName local_40;
  
  FVar10.Value = 0;
  FVar6 = StatPtr_STAT_SlatePreFullBufferTime;
  if (StatPtr_STAT_SlatePreFullBufferTime ==
      (FThreadSafeStaticStat<FStat_STAT_SlatePreFullBufferTime>)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_50,"STAT_SlatePreFullBufferTime");
    FVar6 = (FThreadSafeStaticStat<FStat_STAT_SlatePreFullBufferTime>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlatePreFullBufferTime,*pFVar5,
                       L"PreFill Buffers","STATGROUP_Slate","STATCAT_Advanced",L"Slate",true,true,
                       ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar6;
  bVar2 = false;
  bVar4 = false;
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  FVar8 = FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Value != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(char *)*(FName *)((longlong)FVar6 + 0x10));
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_58.s.LowPart = FVar8.Value;
        local_58.s.HighPart = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_58.s,(wchar_t *)*(FName *)((longlong)FVar6 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateElementVertexBuffer.h"
                   ,0x65);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_58.s.LowPart = FVar8.Value;
      local_58.s.HighPart = uVar7;
      local_40 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = local_40.ComparisonIndex.Value;
      goto LAB_14601ddad;
    }
  }
  bVar3 = false;
  FVar9 = local_40;
LAB_14601ddad:
  if (0 < param_2) {
    iVar11 = param_2 * 0x20;
    if ((this->BufferSize < iVar11) || (param_3)) {
      ResizeBuffer(this,param_1,iVar11);
    }
    this->BufferUsageSize = iVar11;
  }
  if (bVar4) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar2) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar3) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_50.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      local_50.NameAndInfo.Index.Value = FVar10.Value;
      QueryPerformanceCounter(&local_58);
      local_50.StatData.Pad[4] = '\0';
      local_50.StatData.Pad[5] = '\0';
      local_50.StatData.Pad[6] = '\0';
      local_50.StatData.Pad[7] = '\0';
      local_50.StatData.Pad[0] = local_58.s.LowPart._0_1_;
      local_50.StatData.Pad[1] = local_58.s.LowPart._1_1_;
      local_50.StatData.Pad[2] = local_58.s.LowPart._2_1_;
      local_50.StatData.Pad[3] = local_58.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_50);
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

// ReleaseRHI @ 1460216d0

void __thiscall
TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::ReleaseRHI
          (TSlateElementVertexBuffer<UE::Math::TVector4<double>_> *this)

{
  FRHIResource *this_00;
  
  this_00 = (FRHIResource *)this->_padding_;
  if (this_00 != (FRHIResource *)0x0) {
    this->_padding_ = 0;
    FRHIResource::Release(this_00);
  }
  SetBufferSize(this,0);
  return;
}

// ResizeBuffer @ 146023600

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::ResizeBuffer
          (TSlateElementVertexBuffer<UE::Math::TVector4<double>_> *this,FRHICommandListBase *param_1
          ,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  FRHIResource *pFVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ERHIAccess EVar9;
  FName *pFVar10;
  TStatIdData *pTVar11;
  TRefCountPtr<FRHIBuffer> TVar12;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  byte bVar13;
  FNameEntryId FVar14;
  FName FVar15;
  uint uVar16;
  FName local_res8;
  FColor_u_0 local_res18 [2];
  uint local_res20;
  uint uStackX_24;
  LARGE_INTEGER local_a0;
  FStatMessage local_98;
  FName local_88;
  FName local_80;
  ulonglong local_78;
  undefined8 uStack_70;
  wchar_t *local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::ResizeBuffer(FRHICommandListBase&___ptr64,int)___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::ResizeBuffer(FRHICommandListBase&___ptr64,int)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::ResizeBuffer(FRHICommandListBase&___ptr64,int)___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    _StatPtr_Slate_RTResizeBuffer = (TStatIdData *)0x0;
    pFVar10 = ::FName::FName(&local_88,"Slate_RTResizeBuffer");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &`private:_void___cdecl_TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::ResizeBuffer(FRHICommandListBase&___ptr64,int)___ptr64'
                ::__l2::StatPtr_Slate_RTResizeBuffer,*pFVar10,L"Slate_RTResizeBuffer",
               "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,
               MCR_Invalid);
    _Init_thread_footer(&`private:_void___cdecl_TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::ResizeBuffer(FRHICommandListBase&___ptr64,int)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  pTVar11 = _StatPtr_Slate_RTResizeBuffer;
  if (_StatPtr_Slate_RTResizeBuffer == (TStatIdData *)0x0) {
    pFVar10 = ::FName::FName(&local_80,"Slate_RTResizeBuffer");
    pTVar11 = FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)
                         &`private:_void___cdecl_TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::ResizeBuffer(FRHICommandListBase&___ptr64,int)___ptr64'
                          ::__l2::StatPtr_Slate_RTResizeBuffer,*pFVar10,L"Slate_RTResizeBuffer",
                         "STATGROUP_Quick","STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false
                         ,MCR_Invalid);
  }
  FVar15 = *(FName *)&pTVar11->Name;
  bVar5 = false;
  bVar7 = false;
  FVar14 = FVar15.ComparisonIndex.Value;
  uVar16 = FVar15.Number;
  if ((FVar14.Value != 0) || (uVar16 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res18[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res18[0]._s_0,(pTVar11->StatDescriptionAnsi).Ptr);
      bVar5 = false;
      bVar7 = true;
      if (-1 < CpuChannel->Enabled) {
        local_res8.ComparisonIndex.Value = FVar14.Value;
        local_res8.Number = uVar16;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_res8,(pTVar11->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateElementVertexBuffer.h"
                   ,0x7f);
        bVar5 = true;
        bVar7 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_res20 = FVar14.Value;
      uStackX_24 = uVar16;
      FThreadStats::AddMessage(FVar15,CycleScopeStart);
      bVar6 = true;
      goto LAB_14602376a;
    }
  }
  bVar6 = false;
  FVar15.ComparisonIndex.Value = 0;
  FVar15.Number = 0;
LAB_14602376a:
  uVar16 = this->MinBufferSize;
  if (this->MinBufferSize < param_2) {
    uVar16 = param_2;
  }
  if ((uVar16 != 0) && (uVar16 != this->BufferSize)) {
    pFVar3 = (FRHIResource *)this->_padding_;
    plVar1 = &this->_padding_;
    if (pFVar3 != (FRHIResource *)0x0) {
      *plVar1 = 0;
      FRHIResource::Release(pFVar3);
    }
    bVar13 = (byte)GNumExplicitGPUsForRendering;
    EVar9 = RHIGetDefaultResourceState(VertexBuffer|Dynamic,false);
    local_78 = (ulonglong)uVar16;
    uStack_70 = CONCAT44((1 << (bVar13 & 0x1f)) + -1,0x4002);
    local_58 = (ulonglong)EVar9;
    uStack_50 = 0;
    local_68 = L"SlateElementVertices";
    uStack_60 = 0;
    local_48 = 0;
    TVar12 = FRHICommandListBase::CreateBuffer(param_1,(FRHIBufferCreateDesc *)&local_res20);
    if ((FRHIBuffer *)plVar1 != TVar12.Reference) {
      pFVar3 = (FRHIResource *)*plVar1;
      *plVar1 = (TVar12.Reference)->_padding_;
      (TVar12.Reference)->_padding_ = 0;
      if (pFVar3 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar3);
      }
    }
    if ((FRHIResource *)CONCAT44(uStackX_24,local_res20) != (FRHIResource *)0x0) {
      FRHIResource::Release((FRHIResource *)CONCAT44(uStackX_24,local_res20));
    }
    if ((*plVar1 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidRef(VertexBufferRHI)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SlateRHIRenderer\\Private\\SlateElementVertexBuffer.h"
                           ,0x8e,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    SetBufferSize(this,uVar16);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar6) && (FVar15 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_98.NameAndInfo.Index = FVar15.ComparisonIndex.Value;
      local_98.NameAndInfo.Number = FVar15.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_a0);
      local_98.StatData.Pad[4] = '\0';
      local_98.StatData.Pad[5] = '\0';
      local_98.StatData.Pad[6] = '\0';
      local_98.StatData.Pad[7] = '\0';
      local_98.StatData.Pad[0] = local_a0.s.LowPart._0_1_;
      local_98.StatData.Pad[1] = local_a0.s.LowPart._1_1_;
      local_98.StatData.Pad[2] = local_a0.s.LowPart._2_1_;
      local_98.StatData.Pad[3] = local_a0.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_98);
      piVar2 = &this_00->ScopeCount;
      *piVar2 = *piVar2 + -1;
      if (*piVar2 == 0) {
        FThreadStats::Flush(this_00,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// SetBufferSize @ 1460244e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
TSlateElementVertexBuffer<UE::Math::TVector4<double>_>::SetBufferSize
          (TSlateElementVertexBuffer<UE::Math::TVector4<double>_> *this,int param_1)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_SlateVertexBufferMemory> FVar3;
  FThreadStats *pFVar4;
  FThreadStatsPool *pFVar5;
  uchar auVar6 [8];
  FName local_res8;
  FStatMessage local_38;
  
  auVar6 = (uchar  [8])(longlong)this->BufferSize;
  if (auVar6 != (uchar  [8])0x0) {
    FVar3 = StatPtr_STAT_SlateVertexBufferMemory;
    if (StatPtr_STAT_SlateVertexBufferMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateVertexBufferMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_SlateVertexBufferMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_SlateVertexBufferMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateVertexBufferMemory,*pFVar2,
                         L"Vertex Buffer Memory (GPU)","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar3;
    local_res8 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffbfff | 0xb000;
      local_res8 = FVar1;
      local_38.StatData.Pad = auVar6;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,-(longlong)auVar6);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  this->BufferSize = param_1;
  if (param_1 != 0) {
    FVar3 = StatPtr_STAT_SlateVertexBufferMemory;
    if (StatPtr_STAT_SlateVertexBufferMemory ==
        (FThreadSafeStaticStat<FStat_STAT_SlateVertexBufferMemory>)0x0) {
      pFVar2 = ::FName::FName(&local_res8,"STAT_SlateVertexBufferMemory");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_SlateVertexBufferMemory>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SlateVertexBufferMemory,*pFVar2,
                         L"Vertex Buffer Memory (GPU)","STATGROUP_SlateMemory","STATCAT_Advanced",
                         L"Slate Memory",true,false,ST_int64,false,false,MCR_Physical);
    }
    FVar1 = *(FName *)FVar3;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      local_res8 = FVar1;
      pFVar4 = TlsGetValue(FThreadStats::TlsSlot);
      if (pFVar4 == (FThreadStats *)0x0) {
        pFVar5 = FThreadStatsPool::Get();
        pFVar4 = FThreadStatsPool::GetFromPool(pFVar5);
      }
      local_38.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_res8 = FVar1;
      local_38.StatData.Pad = (uchar  [8])(longlong)param_1;
      local_38.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(pFVar4,&local_38);
      FStatsTrace::Add(&local_res8,(longlong)param_1);
      if (pFVar4->ScopeCount == 0) {
        FThreadStats::Flush(pFVar4,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(pFVar4,false,false);
      }
    }
  }
  return;
}

