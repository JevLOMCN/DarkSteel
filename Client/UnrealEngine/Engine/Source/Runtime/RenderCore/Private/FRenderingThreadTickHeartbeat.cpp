// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 5

// <lambda_invoker_cdecl> @ 145ddcb40

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
`FRenderingThreadTickHeartbeat::Run'::__l7::<lambda_1>::<lambda_invoker_cdecl>
          (FRHICommandListImmediate *param_1)

{
  int *piVar1;
  longlong *plVar2;
  FName *pFVar3;
  FName FVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  double dVar8;
  bool bVar9;
  char cVar10;
  uint uVar11;
  longlong *plVar12;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  bool bVar17;
  double dVar18;
  FColor_u_0 aFStackX_10 [4];
  FName FStackX_20;
  LARGE_INTEGER LStack_a0;
  LARGE_INTEGER LStack_98;
  LARGE_INTEGER LStack_90;
  undefined1 auStack_88 [8];
  FName FStack_80;
  FStatMessage aFStack_70 [3];
  
  dVar6 = __real_4170000000000000;
  LOCK();
  OutstandingHeartbeats.Counter = OutstandingHeartbeats.Counter + -1;
  UNLOCK();
  if (GSuspendRenderingTickables != (TAtomic<int>)0x0) {
    return;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    QueryPerformanceCounter(&LStack_a0);
    LastTickTime = (double)LStack_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6;
    _Init_thread_footer(&::_TSS0);
  }
  QueryPerformanceCounter(&LStack_98);
  dVar6 = (double)LStack_98.QuadPart * FGenericPlatformTime::SecondsPerCycle + dVar6;
  dVar18 = dVar6 - LastTickTime;
  TickHighFrequencyTickables(param_1,dVar6);
  dVar8 = LastTickTime;
  if (__real_3f800000 / GRenderingThreadMaxIdleTickFrequency <= (float)dVar18) {
    uVar15 = 0;
    uVar16 = uVar15;
    dVar8 = dVar6;
    if (0 < (int)FTickableObjectRenderThread::RenderingThreadTickableObjects._8_4_) {
      do {
        uVar14 = (uint)uVar15;
        uVar11 = 0;
        if ((int)uVar14 < (int)FTickableObjectRenderThread::RenderingThreadTickableObjects._8_4_) {
          uVar11 = ~uVar14 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar2 = *(longlong **)
                  (uVar16 + FTickableObjectRenderThread::RenderingThreadTickableObjects._0_8_);
        cVar10 = (**(code **)(*plVar2 + 0x18))(plVar2);
        if (cVar10 != '\0') {
          plVar12 = (longlong *)(**(code **)(*plVar2 + 0x10))(plVar2,auStack_88);
          bVar7 = false;
          bVar9 = false;
          FStack_80.ComparisonIndex.Value = 0;
          FStack_80.Number = 0;
          pFVar3 = (FName *)*plVar12;
          FVar4 = *pFVar3;
          if ((FVar4.ComparisonIndex.Value.Value != 0) || (FVar4.Number != 0)) {
            if (GCycleStatsShouldEmitNamedEvents != 0) {
              aFStackX_10[0].Bits = 0;
              FGenericPlatformMisc::BeginNamedEvent
                        ((FColor *)&aFStackX_10[0]._s_0,(char *)pFVar3[2]);
              bVar7 = false;
              bVar9 = true;
              if (-1 < CpuChannel->Enabled) {
                FStackX_20.ComparisonIndex.Value = FVar4.ComparisonIndex.Value.Value;
                FStackX_20.Number = FVar4.Number;
                FCpuProfilerTrace::OutputBeginDynamicEventWithId
                          (&FStackX_20,(wchar_t *)pFVar3[1],
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Private\\TickableObjectRenderThread.cpp"
                           ,0x36);
                bVar7 = true;
                bVar9 = true;
              }
            }
            bVar17 = FThreadStats::bPrimaryEnable != false;
            FVar13 = FStack_80;
            if (bVar17) {
              FStack_80 = FVar4;
              FThreadStats::AddMessage(FVar4,CycleScopeStart);
              bVar7 = false;
              FVar13 = FVar4;
            }
            if (bVar9) {
              FGenericPlatformMisc::EndNamedEvent();
            }
            if (bVar7) {
              FCpuProfilerTrace::OutputEndEvent();
            }
            if ((((bVar17) && (FVar13 != (FName)0x0)) &&
                (FThreadStats::bPrimaryDisableForever == false)) &&
               (FThreadStats::TlsSlot != 0xffffffff)) {
              this = TlsGetValue(FThreadStats::TlsSlot);
              if (this == (FThreadStats *)0x0) {
                this_00 = FThreadStatsPool::Get();
                this = FThreadStatsPool::GetFromPool(this_00);
              }
              if (this->bWaitForExplicitFlush < this->ScopeCount) {
                aFStack_70[0].NameAndInfo.Index = FVar13.ComparisonIndex.Value;
                aFStack_70[0].NameAndInfo.Number = FVar13.Number & 0xffff6fff | 0x6000;
                QueryPerformanceCounter(&LStack_90);
                aFStack_70[0].StatData.Pad[4] = '\0';
                aFStack_70[0].StatData.Pad[5] = '\0';
                aFStack_70[0].StatData.Pad[6] = '\0';
                aFStack_70[0].StatData.Pad[7] = '\0';
                aFStack_70[0].StatData.Pad[0] = LStack_90.s.LowPart._0_1_;
                aFStack_70[0].StatData.Pad[1] = LStack_90.s.LowPart._1_1_;
                aFStack_70[0].StatData.Pad[2] = LStack_90.s.LowPart._2_1_;
                aFStack_70[0].StatData.Pad[3] = LStack_90.s.LowPart._3_1_;
                FThreadStats::AddStatMessage(this,aFStack_70);
                piVar1 = &this->ScopeCount;
                *piVar1 = *piVar1 + -1;
                if (*piVar1 == 0) {
                  FThreadStats::Flush(this,false,false);
                }
                else if (FThreadStats::bIsRawStatsActive != false) {
                  FThreadStats::FlushRawStats(this,false,false);
                }
              }
            }
          }
          (**(code **)(*plVar2 + 8))(plVar2,param_1,(float)dVar18);
        }
        uVar15 = (ulonglong)(uVar14 + 1);
        uVar16 = uVar16 + 8;
      } while ((int)(uVar14 + 1) <
               (int)FTickableObjectRenderThread::RenderingThreadTickableObjects._8_4_);
    }
  }
  LastTickTime = dVar8;
  return;
}

// Exit @ 145e08b20

void __thiscall FRenderingThreadTickHeartbeat::Exit(FRenderingThreadTickHeartbeat *this)

{
  return;
}

// Init @ 145e16920

bool __thiscall FRenderingThreadTickHeartbeat::Init(FRenderingThreadTickHeartbeat *this)

{
  LOCK();
  GSuspendRenderingTickables = (TAtomic<int>)0x0;
  UNLOCK();
  LOCK();
  OutstandingHeartbeats.Counter = 0;
  UNLOCK();
  return true;
}

// Run @ 145e23380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint __thiscall FRenderingThreadTickHeartbeat::Run(FRenderingThreadTickHeartbeat *this)

{
  FRenderCommandList *this_00;
  code *pcVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  uint uVar5;
  FCommandList *this_01;
  FRenderCommandTag *pFVar6;
  undefined ***pppuVar7;
  ulonglong uVar8;
  undefined1 auStack_e8 [32];
  code *local_c8 [2];
  undefined **local_b8;
  code *pcStack_b0;
  undefined8 local_a8;
  undefined ***local_a0;
  undefined1 local_98 [16];
  undefined **local_88;
  code *pcStack_80;
  undefined8 local_78;
  undefined ***local_70;
  byte local_68;
  ulonglong local_58;
  
  fVar3 = __real_40800000;
  fVar2 = __real_3f800000;
  local_58 = __security_cookie.value ^ (ulonglong)auStack_e8;
  do {
    do {
      if (GRunRenderingThreadHeartbeat == (TAtomic<bool>)0x0) {
        return 0;
      }
      FWindowsPlatformProcess::Sleep(fVar2 / (GRenderingThreadMaxIdleTickFrequency * fVar3));
    } while (3 < OutstandingHeartbeats.Counter);
    LOCK();
    OutstandingHeartbeats.Counter = OutstandingHeartbeats.Counter + 1;
    UNLOCK();
    local_a0 = (undefined ***)0x0;
    local_b8 = &
               ___7__TFunction_OwnedObject_P6AXAEAVFRHICommandListImmediate___Z_00_0A__Function_Private_Core_UE__6B_
    ;
    pcStack_b0 = `FRenderingThreadTickHeartbeat::Run'::__l7::<lambda_1>::<lambda_invoker_cdecl>;
    local_c8[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<void_(__cdecl*)(FRHICommandListImmediate_&),void,FRHICommandListImmediate_&>
                  ::Call;
    this_00 = *(FRenderCommandList **)
               (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0xed0);
    if (this_00 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_FRenderingThreadTickHeartbeat::Run_::__l7::TSTR_HeartbeatTickTickables475>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_c8);
    }
    else {
      this_01 = FRenderCommandList::GetRenderThread(this_00);
      local_98._0_8_ = local_c8[0];
      local_70 = local_a0;
      local_a0 = (undefined ***)0x0;
      local_88 = local_b8;
      pcStack_80 = pcStack_b0;
      local_78 = local_a8;
      local_c8[0] = (code *)0x0;
      local_68 = 2;
      pFVar6 = (FRenderCommandTag *)
               TRenderCommandTag<`FRenderingThreadTickHeartbeat::Run'::__l7::TSTR_HeartbeatTickTickables475>
               ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                          *)local_98,pFVar6);
      uVar8 = (ulonglong)local_68;
      if ((2 < uVar8) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        uVar5 = (*pcVar1)();
        return uVar5;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_98._0_8_ != (code *)0x0) {
          pppuVar7 = (undefined ***)(local_98 + 0x10);
          if (local_70 != (undefined ***)0x0) {
            pppuVar7 = local_70;
          }
          (*(code *)(*pppuVar7)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar8])(local_98);
      }
    }
    if (local_c8[0] != (code *)0x0) {
      pppuVar7 = &local_b8;
      if (local_a0 != (undefined ***)0x0) {
        pppuVar7 = local_a0;
      }
      (*(code *)(*pppuVar7)[2])();
    }
  } while( true );
}

// Stop @ 145e31980

void __thiscall FRenderingThreadTickHeartbeat::Stop(FRenderingThreadTickHeartbeat *this)

{
  return;
}

