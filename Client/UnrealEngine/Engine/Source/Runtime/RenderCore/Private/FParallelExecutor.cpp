// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: RenderCore
// Functions: 3

// ~FParallelExecutor @ 145d90960

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'
::__l2::FParallelExecutor::~FParallelExecutor(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)this != 0) && (*(char *)((longlong)this + 0xc) != '\0')) {
    LaunchTask(this,*(int *)((longlong)this + 8),true);
  }
  puVar3 = *(undefined8 **)this;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000145d909ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 145d97cd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong lVar13;
  bool bVar14;
  undefined1 uVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  FTlsAutoCleanup *pFVar20;
  longlong lVar21;
  int iVar22;
  int iVar23;
  longlong lVar24;
  char cVar25;
  longlong lVar26;
  int iVar27;
  uint uVar28;
  int iVar30;
  longlong lVar31;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar32 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_168 [32];
  longlong local_148;
  longlong local_140;
  char local_138;
  char local_137;
  int local_134;
  int local_130;
  ulong64 local_128;
  undefined1 local_120 [4];
  int local_11c;
  int local_118;
  uint local_114;
  int local_110;
  longlong local_108;
  FMemMark local_100;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>_&,int,int,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>_&,int,int,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
  local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  LARGE_INTEGER local_b8;
  longlong *local_b0;
  undefined8 *local_a8;
  void *local_a0;
  LARGE_INTEGER local_98;
  code *local_90;
  undefined1 *local_88;
  FInheritedContextScope local_80;
  ulonglong local_60;
  int iVar29;
  undefined1 auVar33 [16];
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_c0 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_80);
  puVar19 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_88 = local_120;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar20 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_90,puVar19);
  local_100.Mem = (FMemStackBase *)(pFVar20 + 2);
  local_100.Top = (local_100.Mem)->Top;
  local_100.SavedChunk = *(FTaggedMemory **)(pFVar20 + 4);
  local_100.bPopped = false;
  local_100.NextTopmostMark = *(FMemMark **)(pFVar20 + 5);
  pFVar20[5] = (FTlsAutoCleanup)&local_100;
  *(int *)(pFVar20 + 6) = *(int *)(pFVar20 + 6) + 1;
  lVar24 = *(longlong *)this;
  if (param_1) {
    local_130 = *(int *)(lVar24 + 0x54);
    local_128 = 0xffffffffffffffff;
  }
  else {
    uVar28 = *(uint *)((longlong)this + 8);
    uVar17 = 0;
    if ((int)uVar28 < *(int *)(lVar24 + 0x80)) {
      uVar17 = ~uVar28 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (local_148 = (longlong)(int)uVar28, local_140 = (longlong)*(int *)(lVar24 + 0x80),
       bVar14 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar4 = (code *)swi(3);
      uVar15 = (*pcVar4)();
      return (bool)uVar15;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar24 + 0x78) + 0x40 + (longlong)(int)uVar28 * 0x48);
    TaskTrace::Started(uVar3);
    iVar30 = *(int *)(*(longlong *)this + 0x54);
    local_130 = iVar30;
    local_128 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar30) {
      lVar24 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar24 + 0x48);
      iVar22 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar24 + 0x80) <= iVar22) {
        iVar22 = -1;
      }
      if (iVar22 != -1) {
        local_d8.Reference = *(FParallelForData **)this;
        if (local_d8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_d8.Reference)->field_0x8 = *(int *)&(local_d8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_134 = iVar30;
        LaunchTask(&local_d8,iVar22,true);
        local_130 = iVar30;
        local_128 = uVar3;
        if (local_d8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_d8.Reference)->field_0x8;
          LOCK();
          iVar22 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar22 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_d8.Reference != (FParallelForData *)0x0)) {
            local_134 = iVar30;
            (*(code *)**(undefined8 **)local_d8.Reference)(local_d8.Reference,1);
            local_130 = iVar30;
            local_128 = uVar3;
          }
        }
      }
    }
  }
  iVar30 = local_130;
  bVar14 = CpuChannel->Enabled < 0;
  local_134 = local_130;
  if (bVar14) {
    local_138 = '\0';
  }
  else {
    local_138 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar9 = __real_42e312d000000010;
  dVar8 = __real_416312d000000000;
  cVar25 = !bVar14;
  local_d0 = -0x8000000000000000;
  local_c8 = 0;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_137 = '\0';
  }
  else {
    local_137 = '\x01';
    QueryPerformanceCounter(&local_b8);
    auVar32._8_8_ = extraout_XMM0_Qb;
    auVar32._0_8_ = extraout_XMM0_Qa;
    uVar28 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar28 = 0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar32 = roundpd(auVar32,auVar5,1);
    local_d0 = (longlong)auVar32._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)(int)uVar28 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar32 = roundpd(auVar32,auVar6,1);
    local_c8 = (longlong)auVar32._0_8_;
  }
  lVar24 = *(longlong *)this;
  local_b0 = *(longlong **)(lVar24 + 0x58);
  local_a8 = *(undefined8 **)(lVar24 + 0x60);
  local_11c = *(int *)(lVar24 + 0x4c);
  local_118 = *(int *)(lVar24 + 0x50);
  lVar24 = local_d0;
  lVar26 = local_c8;
  iVar27 = iVar30;
  iVar22 = local_118;
  iVar23 = local_11c;
  do {
    do {
      puVar12 = local_a8;
      plVar11 = local_b0;
      plVar10 = local_c0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar29 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar30 < iVar23) && (iVar27 + -1 <= iVar29)) && (iVar29 = iVar27 + -1, !param_1))
      goto LAB_145d98207;
      uVar28 = iVar29 * iVar22;
      lVar31 = (longlong)(int)uVar28;
      local_110 = iVar23;
      if ((int)(iVar22 + uVar28) < iVar23) {
        local_110 = iVar22 + uVar28;
      }
      lVar21 = (longlong)local_110;
      local_114 = uVar28;
      lVar13 = local_140;
      iVar30 = local_134;
      iVar27 = local_130;
      for (; local_134 = iVar30, local_130 = iVar27, lVar31 < lVar21; lVar31 = lVar31 + 1) {
        uVar17 = *(uint *)(plVar10 + 1);
        iVar30 = (int)plVar11[1];
        local_140 = (longlong)iVar30;
        uVar18 = 0;
        if ((int)uVar17 < iVar30) {
          uVar18 = ~uVar17 >> 0x1f;
        }
        if ((uVar18 == 0) &&
           (local_148 = (longlong)(int)uVar17,
           bVar14 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , lVar13 = local_140, bVar14)) {
          pcVar4 = (code *)swi(3);
          uVar15 = (*pcVar4)();
          return (bool)uVar15;
        }
        local_140 = lVar13;
        local_a0 = (void *)*puVar12;
        local_108 = puVar12[1];
        lVar24 = *plVar11;
        uVar18 = 0;
        if ((int)uVar28 < *(int *)(local_108 + 0x4b0)) {
          uVar18 = ~uVar28 >> 0x1f;
        }
        if (uVar18 == 0) {
          local_148 = (longlong)(int)uVar28;
          local_140 = (longlong)*(int *)(local_108 + 0x4b0);
          bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar14) {
            pcVar4 = (code *)swi(3);
            uVar15 = (*pcVar4)();
            return (bool)uVar15;
          }
        }
        `FRDGBuilder::CreatePassBarriers'::__l2::<lambda_1>::operator()
                  (local_a0,(FTaskContext *)((longlong)(int)uVar17 * 0x10 + lVar24),
                   *(FRDGBarrierBatchBegin **)(*(longlong *)(local_108 + 0x4a8) + lVar31 * 8));
        uVar28 = uVar28 + 1;
        lVar24 = local_d0;
        lVar26 = local_c8;
        this = local_c0;
        cVar25 = local_138;
        iVar22 = local_118;
        lVar13 = local_140;
        iVar30 = local_134;
        iVar27 = local_130;
        iVar23 = local_11c;
      }
      local_140 = lVar13;
      if ((int)local_114 < iVar23) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar29 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar29 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar14 = true;
          goto LAB_145d9820e;
        }
      }
      if (iVar23 <= local_110) goto LAB_145d98207;
    } while (local_137 == '\0');
    QueryPerformanceCounter(&local_98);
    auVar33._8_8_ = extraout_XMM0_Qb_00;
    auVar33._0_8_ = extraout_XMM0_Qa_00;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar32 = roundpd(auVar33,auVar7,1);
    iVar22 = local_118;
    iVar23 = local_11c;
  } while ((longlong)auVar32._0_8_ - lVar24 <= lVar26);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_145d98207:
  bVar14 = false;
LAB_145d9820e:
  if (cVar25 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_128);
  }
  if (local_100.bPopped == false) {
    if (((local_100.Mem)->TopMark != &local_100) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar16)) {
      pcVar4 = (code *)swi(3);
      uVar15 = (*pcVar4)();
      return (bool)uVar15;
    }
    local_100.bPopped = true;
    (local_100.Mem)->NumMarks = (local_100.Mem)->NumMarks + -1;
    if (local_100.SavedChunk != (local_100.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_100.Mem,local_100.SavedChunk);
    }
    (local_100.Mem)->Top = local_100.Top;
    (local_100.Mem)->TopMark = local_100.NextTopmostMark;
    local_100.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_80.MetaScope);
  FMemScope::~FMemScope(&local_80.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_80,local_80.LLMScopes.LLMScopes.ArrayNum);
  return bVar14;
}

// LaunchTask @ 145dc1a30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::__l2::<lambda_2>_>'::__l5::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::__l2::FTaskContext>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>_&,int,int,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext>(wchar_t_const_*,int,int,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_>(wchar_t_const_*,TArray<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>_>_&,int,int,_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_private:_void___cdecl_FRDGBuilder::CreatePassBarriers(void)_::_2_::FTaskContext,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  FTask *pFVar1;
  FParallelForData *pFVar2;
  FTracedTask_conflict *pFVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  bool bVar6;
  ETaskPriority EVar7;
  uint uVar8;
  ulong64 uVar9;
  FTask *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  FParallelForData *local_38;
  int local_30;
  undefined1 local_2c;
  FParallelForData *local_28;
  int local_20;
  undefined1 local_1c;
  
  pFVar2 = param_1->Reference;
  uVar13 = 0;
  uVar8 = 0;
  if (param_2 < (pFVar2->Tasks).ArrayNum) {
    uVar8 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar8 == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (pFVar2->Tasks).AllocatorInstance.Data;
  pFVar1 = (FTask *)(pFVar3 + (longlong)param_2 * 0x48);
  if (*(longlong *)(pFVar3 + (longlong)param_2 * 0x48 + 0x40) != -1) {
    TaskTrace::Destroyed(*(ulong64 *)(pFVar1 + 1));
  }
  pwVar4 = param_1->Reference->DebugName;
  EVar7 = param_1->Reference->Priority;
  uVar9 = TaskTrace::GenerateTaskId();
  LOCK();
  *(ulong64 *)(pFVar1 + 1) = uVar9;
  UNLOCK();
  TaskTrace::Launched(*(ulong64 *)(pFVar1 + 1),pwVar4,false,AnyNormalThreadNormalTask,0);
  local_28 = param_1->Reference;
  param_1->Reference = (FParallelForData *)0x0;
  local_1c = 0;
  local_20 = param_2;
  if (((*(ulonglong *)&pFVar1->field_0x38 & 0x20) == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_38 = local_28;
  local_30 = local_20;
  local_2c = local_1c;
  local_28 = (FParallelForData *)0x0;
  (**(code **)(*(longlong *)&pFVar1->field_0x28 + 0x18))(&pFVar1->field_0x28,pFVar1);
  *(undefined ***)&pFVar1->field_0x28 =
       &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`FRDGBuilder::CreatePassBarriers'::`2'::<lambda_2>,`ParallelForWithTaskContext<`FRDGBuilder::CreatePassBarriers'::`2'::FTaskContext,TSizedInlineAllocator<1,32,TRDGArrayAllocator<0>_>,`FRDGBuilder::CreatePassBarriers'::`2'::<lambda_2>_>'::`5'::<lambda_1>,`FRDGBuilder::CreatePassBarriers'::`2'::FTaskContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
        ::_vftable_;
  *(FParallelForData **)pFVar1 = local_38;
  *(int *)&pFVar1->field_0x8 = local_30;
  pFVar1->field_0xc = local_2c;
  local_38 = (FParallelForData *)0x0;
  ~FParallelExecutor(&local_38);
  pFVar10 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar10 == (FTask *)0x0) {
    if (EVar7 == Inherit) {
      EVar7 = Default;
    }
  }
  else {
    if (EVar7 == Inherit) {
      EVar7 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar10->field_0x38 >> 0x3b);
    }
    uVar13 = *(undefined8 *)&pFVar10->field_0x30;
  }
  *(undefined8 *)&pFVar1->field_0x30 = uVar13;
  *(ulonglong *)&pFVar1->field_0x38 =
       ((longlong)(char)EVar7 << 0x35 | (ulonglong)pwVar4 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  ~FParallelExecutor(&local_28);
  uVar11 = *(ulonglong *)&pFVar1->field_0x38;
  do {
    LOCK();
    uVar12 = *(ulonglong *)&pFVar1->field_0x38;
    bVar6 = uVar11 == uVar12;
    if (bVar6) {
      *(ulonglong *)&pFVar1->field_0x38 = uVar11 | 2;
      uVar12 = uVar11;
    }
    UNLOCK();
    uVar11 = uVar12;
  } while (!bVar6);
  if ((uVar12 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,pFVar1,GlobalQueuePreference,param_3);
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowLevelTasks::TryLaunch(TracedTask.Task, LowLevelTasks::EQueuePreference::GlobalQueuePreference, bWakeUpWorker)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                       ,0x19d,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

