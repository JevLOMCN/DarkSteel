// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 2

// Get @ 14734dc00

/* WARNING: Enum "Type": Some values do not have unique names */

FRHICommandListImmediate * __cdecl FRHICommandListImmediate::Get(void)

{
  code *pcVar1;
  bool bVar2;
  FRHICommandListImmediate *pFVar3;
  
  bVar2 = IsInRenderingThread();
  if (!bVar2) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                       ,0x1594,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FRHICommandListImmediate *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &GRHICommandList.CommandListImmediate;
}

// Read3DSurfaceFloatData @ 1488d3f70

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FRHICommandListImmediate::Read3DSurfaceFloatData
          (FRHICommandListImmediate *this,FRHITexture *param_1,TIntRect<int> *param_2,
          TIntPoint<int> param_3,TArray<FFloat16Color,TSizedDefaultAllocator<32>_> *param_4,
          FReadSurfaceDataFlags *param_5)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  FName *pFVar5;
  TStatIdData *pTVar6;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  uint uVar7;
  FColor_u_0 FVar8;
  FName FVar9;
  FNameEntryId FVar10;
  FLLMScope local_res18 [5];
  FColor_u_0 local_88;
  uint uStack_84;
  FMemScope local_80;
  TIntPoint<int>_u_0 local_78;
  TIntPoint<int>_u_0 local_70;
  FName local_68;
  ECubeFace local_58;
  ERangeCompressionMode EStack_54;
  undefined4 uStack_50;
  float fStack_4c;
  undefined8 local_48;
  uint local_40;
  
  FVar10.Value = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) <
      `public:_void___cdecl_FRHICommandListImmediate::Read3DSurfaceFloatData(FRHITexture*___ptr64,UE::Math::TIntRect<int>,UE::Math::TIntPoint<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>&___ptr64,FReadSurfaceDataFlags)___ptr64'
      ::__l2::_thread_safe_static_guard_0__) {
    _Init_thread_header(&`public:_void___cdecl_FRHICommandListImmediate::Read3DSurfaceFloatData(FRHITexture*___ptr64,UE::Math::TIntRect<int>,UE::Math::TIntPoint<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>&___ptr64,FReadSurfaceDataFlags)___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
    if (`public:_void___cdecl_FRHICommandListImmediate::Read3DSurfaceFloatData(FRHITexture*___ptr64,UE::Math::TIntRect<int>,UE::Math::TIntPoint<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>&___ptr64,FReadSurfaceDataFlags)___ptr64'
        ::__l2::_thread_safe_static_guard_0__ == -1) {
      _StatPtr_STAT_RHIMETHOD_Read3DSurfaceFloatData_Flush = (TStatIdData *)0x0;
      pFVar5 = ::FName::FName((FName *)&local_88._s_0,"STAT_RHIMETHOD_Read3DSurfaceFloatData_Flush")
      ;
      FThreadSafeStaticStatBase::DoSetup
                ((FThreadSafeStaticStatBase *)
                 &`public:_void___cdecl_FRHICommandListImmediate::Read3DSurfaceFloatData(FRHITexture*___ptr64,UE::Math::TIntRect<int>,UE::Math::TIntPoint<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>&___ptr64,FReadSurfaceDataFlags)___ptr64'
                  ::__l2::StatPtr_STAT_RHIMETHOD_Read3DSurfaceFloatData_Flush,*pFVar5,
                 L"STAT_RHIMETHOD_Read3DSurfaceFloatData_Flush","STATGROUP_Quick","STATCAT_Advanced"
                 ,L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
      _Init_thread_footer(&`public:_void___cdecl_FRHICommandListImmediate::Read3DSurfaceFloatData(FRHITexture*___ptr64,UE::Math::TIntRect<int>,UE::Math::TIntPoint<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>&___ptr64,FReadSurfaceDataFlags)___ptr64'
                           ::__l2::_thread_safe_static_guard_0__);
    }
  }
  pTVar6 = _StatPtr_STAT_RHIMETHOD_Read3DSurfaceFloatData_Flush;
  if (_StatPtr_STAT_RHIMETHOD_Read3DSurfaceFloatData_Flush == (TStatIdData *)0x0) {
    pFVar5 = ::FName::FName((FName *)&local_78._s_0,"STAT_RHIMETHOD_Read3DSurfaceFloatData_Flush");
    pTVar6 = FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &`public:_void___cdecl_FRHICommandListImmediate::Read3DSurfaceFloatData(FRHITexture*___ptr64,UE::Math::TIntRect<int>,UE::Math::TIntPoint<int>,TArray<FFloat16Color,TSizedDefaultAllocator<32>_>&___ptr64,FReadSurfaceDataFlags)___ptr64'
                         ::__l2::StatPtr_STAT_RHIMETHOD_Read3DSurfaceFloatData_Flush,*pFVar5,
                        L"STAT_RHIMETHOD_Read3DSurfaceFloatData_Flush","STATGROUP_Quick",
                        "STATCAT_Advanced",L"Quick",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)&pTVar6->Name;
  bVar2 = false;
  bVar4 = false;
  local_68.ComparisonIndex.Value = 0;
  local_68.Number = 0;
  FVar8.Bits = (uint)FVar9.ComparisonIndex.Value;
  uVar7 = FVar9.Number;
  if ((FVar8.Bits != 0) || (uVar7 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_88.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_88._s_0,(pTVar6->StatDescriptionAnsi).Ptr);
      bVar2 = false;
      bVar4 = true;
      if (-1 < CpuChannel->Enabled) {
        local_88.Bits = FVar8.Bits;
        uStack_84 = uVar7;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  ((FName *)&local_88._s_0,(pTVar6->StatDescriptionWide).Ptr,
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\RHICommandList.h"
                   ,0x1328);
        bVar2 = true;
        bVar4 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_88.Bits = FVar8.Bits;
      uStack_84 = uVar7;
      local_68 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar3 = true;
      FVar10.Value = local_68.ComparisonIndex.Value;
      goto LAB_1488d40e5;
    }
  }
  bVar3 = false;
  FVar9 = local_68;
LAB_1488d40e5:
  FLLMScope::FLLMScope(local_res18,Textures,false,None,Default,true);
  FMemScope::FMemScope(&local_80,Textures,true);
  ImmediateFlush(this,FlushRHIThread,None);
  local_78 = (param_2->field0_0x0)._s_0.Min.field0_0x0;
  local_70 = (param_2->field0_0x0)._s_0.Max.field0_0x0;
  local_58 = param_5->CubeFace;
  EStack_54 = param_5->CompressionMode;
  uStack_50 = *(undefined4 *)&param_5->bLinearToGamma;
  fStack_4c = param_5->MaxDepthRange;
  local_48._0_1_ = param_5->bOutputStencil;
  local_48._1_1_ = param_5->MipLevel;
  local_48._2_2_ = *(undefined2 *)&param_5->field_0x12;
  local_48._4_4_ = param_5->ArrayIndex;
  local_40 = param_5->GPUIndex;
  (**(code **)(GDynamicRHI->_padding_ + 0x250))
            (GDynamicRHI,param_1,&local_78,param_3.field0_0x0,param_4,&local_58);
  FMemScope::~FMemScope(&local_80);
  FLLMScope::~FLLMScope(local_res18);
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
      local_70 = (TIntPoint<int>_u_0)
                 (CONCAT44(FVar9.Number,FVar10.Value) & 0xffff6fffffffffff | 0x600000000000);
      QueryPerformanceCounter((LARGE_INTEGER *)&param_5);
      local_78 = (TIntPoint<int>_u_0)((ulonglong)param_5 & 0xffffffff);
      FThreadStats::AddStatMessage(this_00,(FStatMessage *)&local_78._s_0);
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

