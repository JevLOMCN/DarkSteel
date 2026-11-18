// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// ~FParallelExecutor @ 143afd6d0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`Chaos::PhysicsParallelForWithContext'::__l2::<lambda_1>,`ParallelForWithTaskContext<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TFunctionRef<int___cdecl(int,int)>,`Chaos::PhysicsParallelForWithContext'::__l2::<lambda_1>_>'::__l5::<lambda_1>,int>'
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
                    /* WARNING: Could not recover jumptable at 0x000143afd71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 143b0d5d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`Chaos::PhysicsParallelForWithContext'::__l2::<lambda_1>,`ParallelForWithTaskContext<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TFunctionRef<int___cdecl(int,int)>,`Chaos::PhysicsParallelForWithContext'::__l2::<lambda_1>_>'::__l5::<lambda_1>,int>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong64 uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  longlong *plVar10;
  longlong *plVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  FTlsAutoCleanup *pFVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  longlong lVar23;
  longlong lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  char cVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auStack_1a8 [32];
  longlong local_188;
  longlong local_180;
  int local_178;
  char local_174;
  char local_173;
  int local_170;
  ulong64 local_168;
  undefined1 local_160;
  undefined1 local_15f;
  undefined1 local_15e;
  undefined1 local_15d;
  undefined1 local_15c [4];
  undefined4 local_158 [2];
  int local_150 [2];
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  FMemMark local_138;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_Chaos::PhysicsParallelForWithContext(int,TFunctionRef<int___cdecl(int,int)>,TFunctionRef<void___cdecl(int,int)>,bool)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TFunctionRef<int___cdecl(int,int)>,_void___cdecl_Chaos::PhysicsParallelForWithContext(int,TFunctionRef<int___cdecl(int,int)>,TFunctionRef<void___cdecl(int,int)>,bool)_::_2_::<lambda_1>_>(wchar_t_const_*,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&,int,int,TFunctionRef<int___cdecl(int,int)>_const_&,_void___cdecl_Chaos::PhysicsParallelForWithContext(int,TFunctionRef<int___cdecl(int,int)>,TFunctionRef<void___cdecl(int,int)>,bool)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,int>(wchar_t_const_*,int,int,_void___cdecl_Chaos::PhysicsParallelForWithContext(int,TFunctionRef<int___cdecl(int,int)>,TFunctionRef<void___cdecl(int,int)>,bool)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TFunctionRef<int___cdecl(int,int)>,_void___cdecl_Chaos::PhysicsParallelForWithContext(int,TFunctionRef<int___cdecl(int,int)>,TFunctionRef<void___cdecl(int,int)>,bool)_::_2_::<lambda_1>_>(wchar_t_const_*,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&,int,int,TFunctionRef<int___cdecl(int,int)>_const_&,_void___cdecl_Chaos::PhysicsParallelForWithContext(int,TFunctionRef<int___cdecl(int,int)>,TFunctionRef<void___cdecl(int,int)>,bool)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<int,int>_const_&)_::_2_::FParallelForData>
  local_110;
  longlong local_108;
  longlong local_100;
  longlong *local_f8;
  LARGE_INTEGER local_f0;
  longlong *local_e8;
  LARGE_INTEGER local_e0;
  code *local_d8;
  undefined1 *local_d0;
  code *local_c8;
  undefined1 *local_c0;
  code *local_b8;
  undefined1 *local_b0;
  code *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  FInheritedContextScope local_88;
  ulonglong local_68;
  undefined1 auVar30 [16];
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_1a8;
  local_f8 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_88);
  puVar18 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_d0 = &local_160;
  local_d8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar19 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d8,puVar18);
  local_138.Mem = (FMemStackBase *)(pFVar19 + 2);
  local_138.Top = (local_138.Mem)->Top;
  local_138.SavedChunk = *(FTaggedMemory **)(pFVar19 + 4);
  local_138.bPopped = false;
  local_138.NextTopmostMark = *(FMemMark **)(pFVar19 + 5);
  pFVar19[5] = (FTlsAutoCleanup)&local_138;
  *(int *)(pFVar19 + 6) = *(int *)(pFVar19 + 6) + 1;
  lVar23 = *(longlong *)this;
  if (param_1) {
    local_170 = *(int *)(lVar23 + 0x54);
    local_168 = 0xffffffffffffffff;
  }
  else {
    uVar3 = *(uint *)((longlong)this + 8);
    uVar16 = 0;
    if ((int)uVar3 < *(int *)(lVar23 + 0x80)) {
      uVar16 = ~uVar3 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (local_188 = (longlong)(int)uVar3, local_180 = (longlong)*(int *)(lVar23 + 0x80),
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar7 = (code *)swi(3);
      uVar14 = (*pcVar7)();
      return (bool)uVar14;
    }
    uVar5 = *(ulong64 *)(*(longlong *)(lVar23 + 0x78) + 0x40 + (longlong)(int)uVar3 * 0x48);
    TaskTrace::Started(uVar5);
    iVar27 = *(int *)(*(longlong *)this + 0x54);
    local_170 = iVar27;
    local_168 = uVar5;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar27) {
      lVar23 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar23 + 0x48);
      iVar21 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar23 + 0x80) <= iVar21) {
        iVar21 = -1;
      }
      if (iVar21 != -1) {
        local_110.Reference = *(FParallelForData **)this;
        if (local_110.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_110.Reference)->field_0x8 = *(int *)&(local_110.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_178 = iVar27;
        LaunchTask(&local_110,iVar21,true);
        local_170 = iVar27;
        local_168 = uVar5;
        if (local_110.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_110.Reference)->field_0x8;
          LOCK();
          iVar21 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar21 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_110.Reference != (FParallelForData *)0x0)) {
            local_178 = iVar27;
            (*(code *)**(undefined8 **)local_110.Reference)(local_110.Reference,1);
            local_170 = iVar27;
            local_168 = uVar5;
          }
        }
      }
    }
  }
  iVar27 = local_170;
  bVar13 = CpuChannel->Enabled < 0;
  local_178 = local_170;
  if (bVar13) {
    local_174 = '\0';
  }
  else {
    local_174 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar9 = __real_42e312d000000010;
  dVar8 = __real_416312d000000000;
  cVar28 = !bVar13;
  local_108 = -0x8000000000000000;
  local_100 = 0;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_173 = '\0';
  }
  else {
    local_173 = '\x01';
    QueryPerformanceCounter(&local_f0);
    auVar29._8_8_ = extraout_XMM0_Qb;
    auVar29._0_8_ = extraout_XMM0_Qa;
    iVar21 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      iVar21 = 0;
    }
    auVar31._0_8_ =
         (double)local_f0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9;
    auVar31._8_8_ = 0;
    auVar29 = roundpd(auVar29,auVar31,1);
    local_108 = (longlong)auVar29._0_8_;
    auVar32._0_8_ = (double)iVar21 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar32._8_8_ = 0;
    auVar29 = roundpd(auVar29,auVar32,1);
    local_100 = (longlong)auVar29._0_8_;
  }
  lVar23 = *(longlong *)this;
  local_e8 = *(longlong **)(lVar23 + 0x58);
  local_144 = *(int *)(lVar23 + 0x4c);
  local_140 = *(int *)(lVar23 + 0x50);
  puVar6 = *(undefined8 **)(lVar23 + 0x60);
  lVar23 = local_100;
  lVar24 = local_108;
  iVar21 = iVar27;
  iVar25 = local_144;
  iVar26 = local_140;
  do {
    do {
      plVar11 = local_e8;
      plVar10 = local_f8;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar20 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar27 < iVar25) && (iVar21 + -1 <= iVar20)) && (iVar20 = iVar21 + -1, !param_1))
      goto LAB_143b0dbe2;
      iVar20 = iVar20 * iVar26;
      iVar17 = iVar20 + iVar26;
      local_13c = iVar20;
      lVar12 = local_180;
      iVar21 = local_178;
      iVar27 = local_170;
      local_148 = iVar25;
      iVar22 = iVar25;
      if (iVar17 < iVar25) {
        local_148 = iVar17;
        iVar22 = iVar17;
      }
      for (; local_178 = iVar21, local_170 = iVar27, iVar20 < iVar22; iVar20 = iVar20 + 1) {
        uVar3 = *(uint *)(plVar10 + 1);
        iVar27 = (int)plVar11[1];
        local_180 = (longlong)iVar27;
        uVar16 = 0;
        if ((int)uVar3 < iVar27) {
          uVar16 = ~uVar3 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_188 = (longlong)(int)uVar3,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , lVar12 = local_180, bVar13)) {
          pcVar7 = (code *)swi(3);
          uVar14 = (*pcVar7)();
          return (bool)uVar14;
        }
        local_180 = lVar12;
        uVar4 = *(undefined4 *)(*plVar11 + (longlong)(int)uVar3 * 4);
        cVar28 = *(char *)(puVar6 + 2);
        if (cVar28 != '\0') {
          puVar18 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
          local_c0 = &local_15f;
          local_c8 = UE::Core::Private::Function::
                     TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                     ::Call;
          pFVar19 = FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_c8,puVar18);
          *(int *)(pFVar19 + 2) = *(int *)(pFVar19 + 2) + 1;
        }
        if (*(char *)((longlong)puVar6 + 0x11) == '\0') {
          local_158[0] = uVar4;
          local_150[0] = iVar20;
          (*(code *)*puVar6)(puVar6[1],local_150,local_158);
        }
        else {
          puVar18 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
          local_b0 = &local_15e;
          local_b8 = UE::Core::Private::Function::
                     TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                     ::Call;
          pFVar19 = FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_b8,puVar18);
          *(int *)&pFVar19[2].field_0x4 = *(int *)&pFVar19[2].field_0x4 + 1;
          local_158[0] = uVar4;
          local_150[0] = iVar20;
          (*(code *)*puVar6)(puVar6[1],local_150,local_158);
          puVar18 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
          local_a0 = &local_15d;
          local_a8 = UE::Core::Private::Function::
                     TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                     ::Call;
          pFVar19 = FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a8,puVar18);
          if ((*(int *)&pFVar19[2].field_0x4 < 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("GameThreadContext > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                                  ,200,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            uVar14 = (*pcVar7)();
            return (bool)uVar14;
          }
          *(int *)&pFVar19[2].field_0x4 = *(int *)&pFVar19[2].field_0x4 + -1;
        }
        if (cVar28 != '\0') {
          puVar18 = TThreadSingleton<Chaos::FPhysicsThreadContext>::GetTlsSlot();
          local_90 = local_15c;
          local_98 = UE::Core::Private::Function::
                     TFunctionRefCaller<`TThreadSingleton<Chaos::FPhysicsThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                     ::Call;
          pFVar19 = FThreadSingletonInitializer::Get
                              ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar18);
          if ((*(int *)(pFVar19 + 2) < 1) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("PhysicsSimContext > 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\Framework\\Threading.h"
                                  ,0xbd,L""), bVar13)) {
            pcVar7 = (code *)swi(3);
            uVar14 = (*pcVar7)();
            return (bool)uVar14;
          }
          *(int *)(pFVar19 + 2) = *(int *)(pFVar19 + 2) + -1;
        }
        lVar23 = local_100;
        lVar24 = local_108;
        this = local_f8;
        cVar28 = local_174;
        lVar12 = local_180;
        iVar21 = local_178;
        iVar27 = local_170;
        iVar25 = local_144;
        iVar26 = local_140;
      }
      local_180 = lVar12;
      if (local_13c < iVar25) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar20 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar20 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar13 = true;
          goto LAB_143b0dbeb;
        }
      }
      if (iVar25 <= local_148) goto LAB_143b0dbe2;
    } while (local_173 == '\0');
    QueryPerformanceCounter(&local_e0);
    auVar30._8_8_ = extraout_XMM0_Qb_00;
    auVar30._0_8_ = extraout_XMM0_Qa_00;
    auVar33._0_8_ =
         (double)local_e0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9;
    auVar33._8_8_ = 0;
    auVar29 = roundpd(auVar30,auVar33,1);
    iVar25 = local_144;
    iVar26 = local_140;
  } while ((longlong)auVar29._0_8_ - lVar24 <= lVar23);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_143b0dbe2:
  bVar13 = false;
LAB_143b0dbeb:
  if (cVar28 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_168);
  }
  if (local_138.bPopped == false) {
    if (((local_138.Mem)->TopMark != &local_138) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar15)) {
      pcVar7 = (code *)swi(3);
      uVar14 = (*pcVar7)();
      return (bool)uVar14;
    }
    local_138.bPopped = true;
    (local_138.Mem)->NumMarks = (local_138.Mem)->NumMarks + -1;
    if (local_138.SavedChunk != (local_138.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_138.Mem,local_138.SavedChunk);
    }
    (local_138.Mem)->Top = local_138.Top;
    (local_138.Mem)->TopMark = local_138.NextTopmostMark;
    local_138.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_88.MetaScope);
  FMemScope::~FMemScope(&local_88.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_88,local_88.LLMScopes.LLMScopes.ArrayNum);
  return bVar13;
}

// LaunchTask @ 143b25bb0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`Chaos::PhysicsParallelForWithContext'::__l2::<lambda_1>,`ParallelForWithTaskContext<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TFunctionRef<int___cdecl(int,int)>,`Chaos::PhysicsParallelForWithContext'::__l2::<lambda_1>_>'::__l5::<lambda_1>,int>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_Chaos::PhysicsParallelForWithContext(int,TFunctionRef<int___cdecl(int,int)>,TFunctionRef<void___cdecl(int,int)>,bool)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TFunctionRef<int___cdecl(int,int)>,_void___cdecl_Chaos::PhysicsParallelForWithContext(int,TFunctionRef<int___cdecl(int,int)>,TFunctionRef<void___cdecl(int,int)>,bool)_::_2_::<lambda_1>_>(wchar_t_const_*,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&,int,int,TFunctionRef<int___cdecl(int,int)>_const_&,_void___cdecl_Chaos::PhysicsParallelForWithContext(int,TFunctionRef<int___cdecl(int,int)>,TFunctionRef<void___cdecl(int,int)>,bool)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,int>(wchar_t_const_*,int,int,_void___cdecl_Chaos::PhysicsParallelForWithContext(int,TFunctionRef<int___cdecl(int,int)>,TFunctionRef<void___cdecl(int,int)>,bool)_::_2_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TFunctionRef<int___cdecl(int,int)>,_void___cdecl_Chaos::PhysicsParallelForWithContext(int,TFunctionRef<int___cdecl(int,int)>,TFunctionRef<void___cdecl(int,int)>,bool)_::_2_::<lambda_1>_>(wchar_t_const_*,TArray<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>_&,int,int,TFunctionRef<int___cdecl(int,int)>_const_&,_void___cdecl_Chaos::PhysicsParallelForWithContext(int,TFunctionRef<int___cdecl(int,int)>,TFunctionRef<void___cdecl(int,int)>,bool)_::_2_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<int,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  undefined1 *puVar1;
  FTracedTask *pFVar2;
  FParallelForData *pFVar3;
  FTracedTask *pFVar4;
  wchar_t *pwVar5;
  code *pcVar6;
  bool bVar7;
  ETaskPriority EVar8;
  uint uVar9;
  atomic<unsigned___int64> aVar10;
  FTask *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  FParallelForData *local_38;
  int local_30;
  undefined1 local_2c;
  FParallelForData *local_28;
  int local_20;
  undefined1 local_1c;
  
  pFVar3 = param_1->Reference;
  uVar14 = 0;
  uVar9 = 0;
  if (param_2 < (pFVar3->Tasks).ArrayNum) {
    uVar9 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar4 = (pFVar3->Tasks).AllocatorInstance.Data;
  pFVar2 = pFVar4 + param_2;
  if (pFVar4[param_2].TraceId != (atomic<unsigned___int64>)0xffffffffffffffff) {
    TaskTrace::Destroyed((ulong64)pFVar2->TraceId);
  }
  pwVar5 = param_1->Reference->DebugName;
  EVar8 = param_1->Reference->Priority;
  aVar10 = (atomic<unsigned___int64>)TaskTrace::GenerateTaskId();
  LOCK();
  pFVar2->TraceId = aVar10;
  UNLOCK();
  TaskTrace::Launched((ulong64)pFVar2->TraceId,pwVar5,false,AnyNormalThreadNormalTask,0);
  local_28 = param_1->Reference;
  param_1->Reference = (FParallelForData *)0x0;
  local_1c = 0;
  local_20 = param_2;
  if (((*(ulonglong *)&(pFVar2->Task).field_0x38 & 0x20) == 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_38 = local_28;
  local_30 = local_20;
  local_2c = local_1c;
  local_28 = (FParallelForData *)0x0;
  (**(code **)(*(longlong *)&(pFVar2->Task).field_0x28 + 0x18))(&(pFVar2->Task).field_0x28,pFVar2);
  *(undefined ***)&(pFVar2->Task).field_0x28 =
       &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`Chaos::PhysicsParallelForWithContext'::`2'::<lambda_1>,`ParallelForWithTaskContext<int,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>,TFunctionRef<int___cdecl(int,int)>,`Chaos::PhysicsParallelForWithContext'::`2'::<lambda_1>_>'::`5'::<lambda_1>,int>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
        ::_vftable_;
  *(FParallelForData **)&pFVar2->Task = local_38;
  *(int *)&(pFVar2->Task).field_0x8 = local_30;
  (pFVar2->Task).field_0xc = local_2c;
  local_38 = (FParallelForData *)0x0;
  ~FParallelExecutor(&local_38);
  pFVar11 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar11 == (FTask *)0x0) {
    if (EVar8 == Inherit) {
      EVar8 = Default;
    }
  }
  else {
    if (EVar8 == Inherit) {
      EVar8 = (ETaskPriority)((ulonglong)*(undefined8 *)&pFVar11->field_0x38 >> 0x3b);
    }
    uVar14 = *(undefined8 *)&pFVar11->field_0x30;
  }
  *(undefined8 *)&(pFVar2->Task).field_0x30 = uVar14;
  *(ulonglong *)&(pFVar2->Task).field_0x38 =
       ((longlong)(char)EVar8 << 0x35 | (ulonglong)pwVar5 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  ~FParallelExecutor(&local_28);
  uVar12 = *(ulonglong *)&(pFVar2->Task).field_0x38;
  do {
    puVar1 = &(pFVar2->Task).field_0x38;
    LOCK();
    uVar13 = *(ulonglong *)puVar1;
    bVar7 = uVar12 == uVar13;
    if (bVar7) {
      *(ulonglong *)puVar1 = uVar12 | 2;
      uVar13 = uVar12;
    }
    UNLOCK();
    uVar12 = uVar13;
  } while (!bVar7);
  if ((uVar13 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,&pFVar2->Task,GlobalQueuePreference,param_3);
  }
  else {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowLevelTasks::TryLaunch(TracedTask.Task, LowLevelTasks::EQueuePreference::GlobalQueuePreference, bWakeUpWorker)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                       ,0x19d,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  return;
}

