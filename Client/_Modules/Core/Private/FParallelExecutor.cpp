// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 15

// ~FParallelExecutor @ 141481330

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'
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
                    /* WARNING: Could not recover jumptable at 0x00014148137c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 141483c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'
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
  void *this_00;
  longlong lVar12;
  bool bVar13;
  undefined1 uVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  FTlsAutoCleanup *pFVar19;
  int iVar20;
  char cVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar29 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_158 [32];
  longlong local_138;
  longlong local_130;
  char local_128;
  char local_127;
  int local_124;
  int local_120;
  ulong64 local_118;
  undefined1 local_110 [4];
  int local_10c;
  int local_108;
  int local_104;
  FMemMark local_100;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext>(wchar_t_const_*,int,int,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,EParallelForFlags,TArrayView<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext,int>_const_&)_::_2_::FParallelForData>
  local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  LARGE_INTEGER local_b8;
  longlong *local_b0;
  void *local_a8;
  LARGE_INTEGER local_a0;
  code *local_98;
  undefined1 *local_90;
  FLLMActiveTagsScope local_88;
  FMemScope local_74;
  FMetadataRestoreScope local_6c [4];
  ulonglong local_68;
  undefined1 auVar30 [16];
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_158;
  lVar22 = *(longlong *)this;
  uVar17 = *(uint *)(lVar22 + 0x34);
  iVar25 = *(int *)(lVar22 + 0x30);
  local_88.LLMScopes.ArrayNum = 0;
  local_88.LLMScopes.ArrayMax = 4;
  local_c0 = this;
  UE::FLLMActiveTagsScope::CaptureLLMScopes(&local_88,(FLLMActiveTagsCapture *)(lVar22 + 0x10));
  FMemScope::FMemScope(&local_74,iVar25,true);
  FMetadataRestoreScope::FMetadataRestoreScope(local_6c,uVar17);
  puVar18 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_90 = local_110;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar19 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar18);
  local_100.Mem = (FMemStackBase *)(pFVar19 + 2);
  local_100.Top = (local_100.Mem)->Top;
  local_100.SavedChunk = *(FTaggedMemory **)(pFVar19 + 4);
  local_100.bPopped = false;
  local_100.NextTopmostMark = *(FMemMark **)(pFVar19 + 5);
  pFVar19[5] = (FTlsAutoCleanup)&local_100;
  *(int *)(pFVar19 + 6) = *(int *)(pFVar19 + 6) + 1;
  lVar22 = *(longlong *)this;
  if (param_1) {
    local_120 = *(int *)(lVar22 + 0x54);
    local_118 = 0xffffffffffffffff;
  }
  else {
    uVar17 = *(uint *)((longlong)this + 8);
    uVar16 = 0;
    if ((int)uVar17 < *(int *)(lVar22 + 0x80)) {
      uVar16 = ~uVar17 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (local_138 = (longlong)(int)uVar17, local_130 = (longlong)*(int *)(lVar22 + 0x80),
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar22 + 0x78) + 0x40 + (longlong)(int)uVar17 * 0x48);
    TaskTrace::Started(uVar3);
    iVar25 = *(int *)(*(longlong *)this + 0x54);
    local_120 = iVar25;
    local_118 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar25) {
      lVar22 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar22 + 0x48);
      iVar26 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar22 + 0x80) <= iVar26) {
        iVar26 = -1;
      }
      if (iVar26 != -1) {
        local_d8.Reference = *(FParallelForData **)this;
        if (local_d8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_d8.Reference)->field_0x8 = *(int *)&(local_d8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_124 = iVar25;
        LaunchTask(&local_d8,iVar26,true);
        local_120 = iVar25;
        local_118 = uVar3;
        if (local_d8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_d8.Reference)->field_0x8;
          LOCK();
          iVar26 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar26 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_d8.Reference != (FParallelForData *)0x0)) {
            local_124 = iVar25;
            (*(code *)**(undefined8 **)local_d8.Reference)(local_d8.Reference,1);
            local_120 = iVar25;
            local_118 = uVar3;
          }
        }
      }
    }
  }
  iVar25 = local_120;
  bVar13 = CpuChannel->Enabled < 0;
  local_124 = local_120;
  if (bVar13) {
    local_128 = '\0';
  }
  else {
    local_128 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar9 = __real_42e312d000000010;
  dVar8 = __real_416312d000000000;
  cVar21 = !bVar13;
  local_d0 = -0x8000000000000000;
  local_c8 = 0;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_127 = '\0';
  }
  else {
    local_127 = '\x01';
    QueryPerformanceCounter(&local_b8);
    auVar29._8_8_ = extraout_XMM0_Qb;
    auVar29._0_8_ = extraout_XMM0_Qa;
    uVar17 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar17 = 0;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar29 = roundpd(auVar29,auVar5,1);
    local_d0 = (longlong)auVar29._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)(int)uVar17 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar29 = roundpd(auVar29,auVar6,1);
    local_c8 = (longlong)auVar29._0_8_;
  }
  lVar22 = *(longlong *)this;
  local_10c = *(int *)(lVar22 + 0x4c);
  local_108 = *(int *)(lVar22 + 0x50);
  local_b0 = *(longlong **)(lVar22 + 0x58);
  local_a8 = *(void **)(lVar22 + 0x60);
  lVar22 = local_c8;
  lVar23 = local_d0;
  iVar26 = iVar25;
  iVar20 = local_10c;
  iVar24 = local_108;
  do {
    do {
      this_00 = local_a8;
      plVar11 = local_b0;
      plVar10 = local_c0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar28 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar25 < iVar20) && (iVar26 + -1 <= iVar28)) && (iVar28 = iVar26 + -1, !param_1))
      goto LAB_141484110;
      iVar28 = iVar28 * iVar24;
      local_104 = iVar28;
      lVar12 = local_130;
      iVar25 = local_124;
      iVar26 = local_120;
      iVar27 = iVar20;
      if (iVar28 + iVar24 < iVar20) {
        iVar27 = iVar28 + iVar24;
      }
      for (; local_124 = iVar25, local_120 = iVar26, iVar28 < iVar27; iVar28 = iVar28 + 1) {
        uVar17 = *(uint *)(plVar10 + 1);
        iVar25 = (int)plVar11[1];
        local_130 = (longlong)iVar25;
        uVar16 = 0;
        if ((int)uVar17 < iVar25) {
          uVar16 = ~uVar17 >> 0x1f;
        }
        if ((uVar16 == 0) &&
           (local_138 = (longlong)(int)uVar17,
           bVar13 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , lVar12 = local_130, bVar13)) {
          pcVar4 = (code *)swi(3);
          uVar14 = (*pcVar4)();
          return (bool)uVar14;
        }
        local_130 = lVar12;
        `UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>::operator()
                  (this_00,(FBlockContext *)(*plVar11 + (longlong)(int)uVar17 * 0x18),iVar28);
        lVar22 = local_c8;
        lVar23 = local_d0;
        this = local_c0;
        cVar21 = local_128;
        lVar12 = local_130;
        iVar25 = local_124;
        iVar26 = local_120;
        iVar20 = local_10c;
        iVar24 = local_108;
      }
      local_130 = lVar12;
      if (local_104 < iVar20) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar28 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar28 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar13 = true;
          goto LAB_141484117;
        }
      }
      if (iVar20 <= iVar27) goto LAB_141484110;
    } while (local_127 == '\0');
    QueryPerformanceCounter(&local_a0);
    auVar30._8_8_ = extraout_XMM0_Qb_00;
    auVar30._0_8_ = extraout_XMM0_Qa_00;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar8 + dVar9
    ;
    auVar29 = roundpd(auVar30,auVar7,1);
    iVar20 = local_10c;
    iVar24 = local_108;
  } while ((longlong)auVar29._0_8_ - lVar23 <= lVar22);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_141484110:
  bVar13 = false;
LAB_141484117:
  if (cVar21 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_118);
  }
  if (local_100.bPopped == false) {
    if (((local_100.Mem)->TopMark != &local_100) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar15)) {
      pcVar4 = (code *)swi(3);
      uVar14 = (*pcVar4)();
      return (bool)uVar14;
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
  FMetadataRestoreScope::~FMetadataRestoreScope(local_6c);
  FMemScope::~FMemScope(&local_74);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_88,local_88.LLMScopes.ArrayNum);
  return bVar13;
}

// LaunchTask @ 1414a20a0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::__l2::FBlockContext>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext>(wchar_t_const_*,int,int,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_2>,_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::<lambda_3>,EParallelForFlags,TArrayView<_public:_virtual_class_FCompositeBuffer___cdecl_UE::CompressedBuffer::Private::FBlockEncoder::Compress(FCompositeBuffer_const_&,unsigned___int64)const_::_2_::FBlockContext,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  FTask *pFVar1;
  FParallelForData *pFVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  atomic<unsigned___int64> aVar6;
  atomic<unsigned___int64> aVar7;
  bool bVar8;
  ETaskPriority EVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  FParallelForData *local_48;
  int local_40;
  undefined1 local_3c;
  FParallelForData *local_38;
  int local_30;
  undefined1 local_2c;
  
  pFVar2 = param_1->Reference;
  uVar13 = 0;
  uVar10 = 0;
  if (param_2 < *(int *)&pFVar2->field_0x80) {
    uVar10 = (uint)~param_2 >> 0x1f;
  }
  if ((uVar10 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar3 = *(longlong *)&pFVar2->Tasks;
  pFVar1 = (FTask *)(lVar3 + (longlong)param_2 * 0x48);
  if (*(longlong *)(lVar3 + 0x40 + (longlong)param_2 * 0x48) != -1) {
    TaskTrace::Destroyed(*(ulong64 *)(pFVar1 + 1));
  }
  aVar7 = UId;
  pwVar4 = param_1->Reference->DebugName;
  EVar9 = param_1->Reference->Priority;
  LOCK();
  aVar6 = (atomic<unsigned___int64>)((longlong)UId + 1);
  UNLOCK();
  bVar8 = UId == (atomic<unsigned___int64>)0xffffffffffffffff;
  UId = aVar6;
  if ((bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Id != InvalidId",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\Async\\TaskTrace.cpp"
                         ,0x50,L"TraceId overflow"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  LOCK();
  *(atomic<unsigned___int64> *)(pFVar1 + 1) = aVar7;
  UNLOCK();
  TaskTrace::Launched(*(ulong64 *)(pFVar1 + 1),pwVar4,false,AnyNormalThreadNormalTask,0);
  local_38 = param_1->Reference;
  param_1->Reference = (FParallelForData *)0x0;
  local_2c = 0;
  local_30 = param_2;
  if (((*(ulonglong *)&pFVar1->field_0x38 & 0x20) == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsCompleted()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\Fundamental\\Task.h"
                         ,0x1dd,L"State: %d"), bVar8)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_48 = local_38;
  local_40 = local_30;
  local_3c = local_2c;
  local_38 = (FParallelForData *)0x0;
  (**(code **)(*(longlong *)&pFVar1->field_0x28 + 0x18))(&pFVar1->field_0x28,pFVar1);
  *(undefined ***)&pFVar1->field_0x28 =
       &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_2>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::<lambda_3>,`UE::CompressedBuffer::Private::FBlockEncoder::Compress'::`2'::FBlockContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
        ::_vftable_;
  *(FParallelForData **)pFVar1 = local_48;
  *(int *)&pFVar1->field_0x8 = local_40;
  pFVar1->field_0xc = local_3c;
  local_48 = (FParallelForData *)0x0;
  ~FParallelExecutor(&local_48);
  lVar3 = *(longlong *)
           (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0x40);
  if (lVar3 == 0) {
    if (EVar9 == Inherit) {
      EVar9 = Default;
    }
  }
  else {
    if (EVar9 == Inherit) {
      EVar9 = (ETaskPriority)((ulonglong)*(undefined8 *)(lVar3 + 0x38) >> 0x3b);
    }
    uVar13 = *(undefined8 *)(lVar3 + 0x30);
  }
  *(undefined8 *)&pFVar1->field_0x30 = uVar13;
  *(ulonglong *)&pFVar1->field_0x38 =
       ((longlong)(char)EVar9 << 0x35 | (ulonglong)pwVar4 & 0x1fffffffffffff | 0xff00000000000000)
       << 6;
  ~FParallelExecutor(&local_38);
  uVar11 = *(ulonglong *)&pFVar1->field_0x38;
  do {
    LOCK();
    uVar12 = *(ulonglong *)&pFVar1->field_0x38;
    bVar8 = uVar11 == uVar12;
    if (bVar8) {
      *(ulonglong *)&pFVar1->field_0x38 = uVar11 | 2;
      uVar12 = uVar11;
    }
    UNLOCK();
    uVar11 = uVar12;
  } while (!bVar8);
  if ((uVar12 & 2) == 0) {
    LowLevelTasks::FScheduler::LaunchInternal
              (&LowLevelTasks::FScheduler::Singleton,pFVar1,GlobalQueuePreference,param_3);
  }
  else {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("LowLevelTasks::TryLaunch(TracedTask.Task, LowLevelTasks::EQueuePreference::GlobalQueuePreference, bWakeUpWorker)"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
                       ,0x19d,L"");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

// ~FParallelExecutor @ 141589f60

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
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
                    /* WARNING: Could not recover jumptable at 0x000141589fac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 1415a6850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  FTlsAutoCleanup *pFVar18;
  int iVar19;
  bool bVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar27 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  char local_108;
  int local_104;
  int local_100;
  ulong64 local_f8;
  undefined1 local_f0 [4];
  int local_ec;
  int local_e8;
  int local_e0 [2];
  FMemMark local_d8;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_b0;
  longlong *local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  code *local_90;
  undefined1 *local_88;
  FInheritedContextScope local_80;
  ulonglong local_60;
  undefined1 auVar28 [16];
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_a8 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_80);
  puVar17 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_88 = local_f0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar18 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_90,puVar17);
  lVar22 = 0;
  local_d8.Mem = (FMemStackBase *)(pFVar18 + 2);
  local_d8.Top = (local_d8.Mem)->Top;
  local_d8.SavedChunk = *(FTaggedMemory **)(pFVar18 + 4);
  local_d8.bPopped = false;
  local_d8.NextTopmostMark = *(FMemMark **)(pFVar18 + 5);
  pFVar18[5] = (FTlsAutoCleanup)&local_d8;
  *(int *)(pFVar18 + 6) = *(int *)(pFVar18 + 6) + 1;
  lVar21 = *(longlong *)this;
  if (param_1) {
    local_100 = *(int *)(lVar21 + 0x54);
    local_f8 = 0xffffffffffffffff;
  }
  else {
    uVar16 = *(uint *)((longlong)this + 8);
    uVar15 = 0;
    if ((int)uVar16 < *(int *)(lVar21 + 0x80)) {
      uVar15 = ~uVar16 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (local_118 = (longlong)(int)uVar16, local_110 = (longlong)*(int *)(lVar21 + 0x80),
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      uVar14 = (*pcVar6)();
      return (bool)uVar14;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar21 + 0x78) + 0x40 + (longlong)(int)uVar16 * 0x48);
    TaskTrace::Started(uVar3);
    iVar24 = *(int *)(*(longlong *)this + 0x54);
    local_100 = iVar24;
    local_f8 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar24) {
      lVar21 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar21 + 0x48);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar21 + 0x80) <= iVar19) {
        iVar19 = -1;
      }
      if (iVar19 != -1) {
        local_b0.Reference = *(FParallelForData **)this;
        if (local_b0.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_b0.Reference)->field_0x8 = *(int *)&(local_b0.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_104 = iVar24;
        LaunchTask(&local_b0,iVar19,true);
        local_100 = iVar24;
        local_f8 = uVar3;
        if (local_b0.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_b0.Reference)->field_0x8;
          LOCK();
          iVar19 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar19 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_b0.Reference != (FParallelForData *)0x0)) {
            local_104 = iVar24;
            (*(code *)**(undefined8 **)local_b0.Reference)(local_b0.Reference,1);
            local_100 = iVar24;
            local_f8 = uVar3;
          }
        }
      }
    }
  }
  iVar24 = local_100;
  bVar13 = -1 < CpuChannel->Enabled;
  local_104 = local_100;
  if (bVar13) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar12 = __real_42e312d000000010;
  dVar11 = __real_416312d000000000;
  lVar21 = -0x8000000000000000;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_108 = '\0';
  }
  else {
    local_108 = '\x01';
    QueryPerformanceCounter(&local_a0);
    auVar27._8_8_ = extraout_XMM0_Qb;
    auVar27._0_8_ = extraout_XMM0_Qa;
    uVar16 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar16 = 0;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar11 +
                   dVar12;
    auVar27 = roundpd(auVar27,auVar7,1);
    lVar21 = (longlong)auVar27._0_8_;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)(int)uVar16 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar27 = roundpd(auVar27,auVar8,1);
    lVar22 = (longlong)auVar27._0_8_;
  }
  lVar4 = *(longlong *)this;
  local_ec = *(int *)(lVar4 + 0x4c);
  local_e8 = *(int *)(lVar4 + 0x50);
  puVar5 = *(undefined8 **)(lVar4 + 0x60);
  iVar19 = local_ec;
  iVar23 = local_e8;
  do {
    do {
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar26 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar24 < iVar19) && (local_100 + -1 <= iVar26)) && (iVar26 = local_100 + -1, !param_1))
      goto LAB_1415a6c47;
      iVar26 = iVar26 * iVar23;
      iVar10 = iVar26;
      iVar24 = local_104;
      this = local_a8;
      iVar25 = iVar19;
      if (iVar26 + iVar23 < iVar19) {
        iVar25 = iVar26 + iVar23;
      }
      for (; local_104 = iVar24, local_a8 = this, iVar10 < iVar25; iVar10 = iVar10 + 1) {
        local_e0[0] = iVar10;
        (*(code *)*puVar5)(puVar5[1],local_e0);
        iVar24 = local_104;
        this = local_a8;
        iVar19 = local_ec;
        iVar23 = local_e8;
      }
      if (iVar26 < iVar19) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar26 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar26 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar20 = true;
          goto LAB_1415a6c4e;
        }
      }
      if (iVar19 <= iVar25) goto LAB_1415a6c47;
    } while (local_108 == '\0');
    QueryPerformanceCounter(&local_98);
    auVar28._8_8_ = extraout_XMM0_Qb_00;
    auVar28._0_8_ = extraout_XMM0_Qa_00;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar11 +
                   dVar12;
    auVar27 = roundpd(auVar28,auVar9,1);
    iVar19 = local_ec;
    iVar23 = local_e8;
  } while ((longlong)auVar27._0_8_ - lVar21 <= lVar22);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_1415a6c47:
  bVar20 = false;
LAB_1415a6c4e:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_f8);
  }
  if (local_d8.bPopped == false) {
    if (((local_d8.Mem)->TopMark != &local_d8) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      uVar14 = (*pcVar6)();
      return (bool)uVar14;
    }
    local_d8.bPopped = true;
    (local_d8.Mem)->NumMarks = (local_d8.Mem)->NumMarks + -1;
    if (local_d8.SavedChunk != (local_d8.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_d8.Mem,local_d8.SavedChunk);
    }
    (local_d8.Mem)->Top = local_d8.Top;
    (local_d8.Mem)->TopMark = local_d8.NextTopmostMark;
    local_d8.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_80.MetaScope);
  FMemScope::~FMemScope(&local_80.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_80,local_80.LLMScopes.LLMScopes.ArrayNum);
  return bVar20;
}

// LaunchTask @ 1415d3a30

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
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
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXPEB_WHHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAX0HH1W4EParallelForFlags___Z_2AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXPEB_WHHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAX0HH2W4EParallelForFlags___Z_3AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
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

// ~FParallelExecutor @ 141621040

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
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
                    /* WARNING: Could not recover jumptable at 0x00014162108c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 141623360

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  bool bVar13;
  undefined1 uVar14;
  char cVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  FTlsAutoCleanup *pFVar20;
  longlong lVar21;
  uint uVar22;
  int iVar24;
  wchar_t *pwVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  longlong *plVar29;
  int iVar30;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar31 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_188 [32];
  longlong local_168;
  longlong local_160;
  char local_158;
  char local_157;
  int local_154;
  int local_150;
  ulong64 local_148;
  undefined1 local_140 [4];
  int local_13c;
  int local_138;
  longlong local_130;
  uint local_128;
  int local_124;
  FMemMark local_120;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>(wchar_t_const_*,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int>_const_&)_::_2_::FParallelForData>
  local_f8;
  code *local_f0;
  longlong *local_e8;
  longlong local_e0;
  longlong local_d8;
  longlong *local_d0;
  LARGE_INTEGER local_c8;
  undefined8 *local_c0;
  LARGE_INTEGER local_b8;
  code *local_b0;
  undefined1 *local_a8;
  undefined **local_a0;
  undefined1 local_98;
  longlong local_90;
  longlong local_88;
  FInheritedContextScope local_80;
  ulonglong local_60;
  int iVar23;
  undefined1 auVar32 [16];
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_188;
  local_d0 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_80);
  puVar19 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_a8 = local_140;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar20 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_b0,puVar19);
  local_120.Mem = (FMemStackBase *)(pFVar20 + 2);
  local_120.Top = (local_120.Mem)->Top;
  local_120.SavedChunk = *(FTaggedMemory **)(pFVar20 + 4);
  local_120.bPopped = false;
  local_120.NextTopmostMark = *(FMemMark **)(pFVar20 + 5);
  pFVar20[5] = (FTlsAutoCleanup)&local_120;
  *(int *)(pFVar20 + 6) = *(int *)(pFVar20 + 6) + 1;
  lVar26 = *(longlong *)this;
  if (param_1) {
    local_150 = *(int *)(lVar26 + 0x54);
    local_148 = 0xffffffffffffffff;
  }
  else {
    uVar22 = *(uint *)((longlong)this + 8);
    uVar17 = 0;
    if ((int)uVar22 < *(int *)(lVar26 + 0x80)) {
      uVar17 = ~uVar22 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (local_168 = (longlong)(int)uVar22, local_160 = (longlong)*(int *)(lVar26 + 0x80),
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar5 = (code *)swi(3);
      uVar14 = (*pcVar5)();
      return (bool)uVar14;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar26 + 0x78) + 0x40 + (longlong)(int)uVar22 * 0x48);
    TaskTrace::Started(uVar3);
    iVar30 = *(int *)(*(longlong *)this + 0x54);
    local_150 = iVar30;
    local_148 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar30) {
      lVar26 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar26 + 0x48);
      iVar28 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar26 + 0x80) <= iVar28) {
        iVar28 = -1;
      }
      if (iVar28 != -1) {
        local_f8.Reference = *(FParallelForData **)this;
        if (local_f8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_f8.Reference)->field_0x8 = *(int *)&(local_f8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_154 = iVar30;
        LaunchTask(&local_f8,iVar28,true);
        local_150 = iVar30;
        local_148 = uVar3;
        if (local_f8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_f8.Reference)->field_0x8;
          LOCK();
          iVar28 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar28 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_f8.Reference != (FParallelForData *)0x0)) {
            local_154 = iVar30;
            (*(code *)**(undefined8 **)local_f8.Reference)(local_f8.Reference,1);
            local_150 = iVar30;
            local_148 = uVar3;
          }
        }
      }
    }
  }
  iVar30 = local_150;
  bVar13 = CpuChannel->Enabled < 0;
  local_154 = local_150;
  if (bVar13) {
    local_158 = '\0';
  }
  else {
    local_158 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar10 = __real_42e312d000000010;
  dVar9 = __real_416312d000000000;
  cVar15 = !bVar13;
  local_e0 = -0x8000000000000000;
  local_d8 = 0;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_157 = '\0';
  }
  else {
    local_157 = '\x01';
    QueryPerformanceCounter(&local_c8);
    auVar31._8_8_ = extraout_XMM0_Qb;
    auVar31._0_8_ = extraout_XMM0_Qa;
    uVar22 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar22 = 0;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)local_c8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar9 +
                   dVar10;
    auVar31 = roundpd(auVar31,auVar6,1);
    local_e0 = (longlong)auVar31._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)(int)uVar22 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar31 = roundpd(auVar31,auVar7,1);
    local_d8 = (longlong)auVar31._0_8_;
  }
  lVar26 = *(longlong *)this;
  plVar29 = *(longlong **)(lVar26 + 0x58);
  local_c0 = *(undefined8 **)(lVar26 + 0x60);
  local_13c = *(int *)(lVar26 + 0x4c);
  local_138 = *(int *)(lVar26 + 0x50);
  lVar26 = local_e0;
  lVar27 = local_d8;
  iVar28 = iVar30;
  local_e8 = plVar29;
  iVar24 = local_13c;
  do {
    do {
      puVar12 = local_c0;
      plVar11 = local_d0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar23 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar30 < iVar24) && (iVar28 + -1 <= iVar23)) && (iVar23 = iVar28 + -1, !param_1))
      goto LAB_141623905;
      uVar22 = iVar23 * local_138;
      local_124 = iVar24;
      if ((int)(uVar22 + local_138) < iVar24) {
        local_124 = uVar22 + local_138;
      }
      lVar21 = (longlong)(int)uVar22;
      local_128 = uVar22;
      if (lVar21 < local_124) {
        local_130 = local_124 - lVar21;
        lVar21 = lVar21 << 4;
        do {
          uVar17 = *(uint *)(plVar11 + 1);
          uVar18 = 0;
          if ((int)uVar17 < (int)plVar29[1]) {
            uVar18 = ~uVar17 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (local_168 = (longlong)(int)uVar17, local_160 = (longlong)(int)plVar29[1],
             bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar13)) {
            pcVar5 = (code *)swi(3);
            uVar14 = (*pcVar5)();
            return (bool)uVar14;
          }
          local_90 = puVar12[1];
          local_98 = *(undefined1 *)(local_90 + 8);
          local_a0 = &`IPlatformFile::IterateDirectoryRecursively'::`2'::FRecurse::_vftable_;
          local_88 = (longlong)(int)uVar17 * 0x10 + *plVar29;
          if (*(char *)puVar12[3] != '\0') {
            plVar29 = (longlong *)*puVar12;
            plVar4 = (longlong *)puVar12[2];
            iVar30 = (int)plVar4[1];
            local_f0 = *(code **)(*plVar29 + 0x140);
            uVar17 = 0;
            if ((int)uVar22 < iVar30) {
              uVar17 = ~uVar22 >> 0x1f;
            }
            if (uVar17 == 0) {
              local_168 = (longlong)(int)uVar22;
              local_160 = (longlong)iVar30;
              bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar13) {
                pcVar5 = (code *)swi(3);
                uVar14 = (*pcVar5)();
                return (bool)uVar14;
              }
            }
            lVar26 = *plVar4;
            if (*(int *)(lVar26 + 8 + lVar21) == 0) {
              pwVar25 = L"";
            }
            else {
              pwVar25 = *(wchar_t **)(lVar26 + lVar21);
            }
            cVar15 = (*local_f0)(plVar29,pwVar25,&local_a0);
            plVar29 = local_e8;
            if (cVar15 == '\0') {
              *(undefined1 *)puVar12[3] = 0;
            }
          }
          uVar22 = uVar22 + 1;
          lVar21 = lVar21 + 0x10;
          local_a0 = &___7FDirectoryVisitor_IPlatformFile__6B_;
          local_130 = local_130 + -1;
        } while (local_130 != 0);
        local_130 = 0;
        lVar26 = local_e0;
        lVar27 = local_d8;
        this = local_d0;
        iVar30 = local_150;
        cVar15 = local_158;
        iVar24 = local_13c;
      }
      iVar28 = local_154;
      if ((int)local_128 < iVar24) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar23 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar23 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar13 = true;
          goto LAB_14162390f;
        }
      }
      if (iVar24 <= local_124) goto LAB_141623905;
    } while (local_157 == '\0');
    QueryPerformanceCounter(&local_b8);
    auVar32._8_8_ = extraout_XMM0_Qb_00;
    auVar32._0_8_ = extraout_XMM0_Qa_00;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar9 +
                   dVar10;
    auVar31 = roundpd(auVar32,auVar8,1);
    iVar24 = local_13c;
  } while ((longlong)auVar31._0_8_ - lVar26 <= lVar27);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_141623905:
  bVar13 = false;
LAB_14162390f:
  if (cVar15 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_148);
  }
  if (local_120.bPopped == false) {
    if (((local_120.Mem)->TopMark != &local_120) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar16)) {
      pcVar5 = (code *)swi(3);
      uVar14 = (*pcVar5)();
      return (bool)uVar14;
    }
    local_120.bPopped = true;
    (local_120.Mem)->NumMarks = (local_120.Mem)->NumMarks + -1;
    if (local_120.SavedChunk != (local_120.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_120.Mem,local_120.SavedChunk);
    }
    (local_120.Mem)->Top = local_120.Top;
    (local_120.Mem)->TopMark = local_120.NextTopmostMark;
    local_120.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_80.MetaScope);
  FMemScope::~FMemScope(&local_80.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_80,local_80.LLMScopes.LLMScopes.ArrayNum);
  return bVar13;
}

// LaunchTask @ 14164ad10

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::__l4::<lambda_1>_>'::__l5::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>(wchar_t_const_*,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_>(wchar_t_const_*,TArray<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>_&,int,int,_public:_virtual_bool___cdecl_IPlatformFile::IterateDirectoryRecursively(wchar_t_const_*,IPlatformFile::FDirectoryVisitor_&)_::_4_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TArray<FString,TSizedDefaultAllocator<32>_>,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  FTask *pFVar1;
  FParallelForData *pFVar2;
  longlong lVar3;
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
  if (param_2 < *(int *)&pFVar2->field_0x80) {
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
  lVar3 = *(longlong *)&pFVar2->Tasks;
  pFVar1 = (FTask *)(lVar3 + (longlong)param_2 * 0x48);
  if (*(longlong *)(lVar3 + 0x40 + (longlong)param_2 * 0x48) != -1) {
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
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>,`ParallelForWithTaskContext<TArray<FString,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>,`IPlatformFile::IterateDirectoryRecursively'::`4'::<lambda_1>_>'::`5'::<lambda_1>,TArray<FString,TSizedDefaultAllocator<32>_>_>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
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

// ~FParallelExecutor @ 1417392c0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
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
                    /* WARNING: Could not recover jumptable at 0x00014173930c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 141740240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  FTlsAutoCleanup *pFVar18;
  int iVar19;
  bool bVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar27 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  char local_108;
  int local_104;
  int local_100;
  ulong64 local_f8;
  undefined1 local_f0 [4];
  int local_ec;
  int local_e8;
  int local_e0 [2];
  FMemMark local_d8;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_b0;
  longlong *local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  code *local_90;
  undefined1 *local_88;
  FInheritedContextScope local_80;
  ulonglong local_60;
  undefined1 auVar28 [16];
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_a8 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_80);
  puVar17 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_88 = local_f0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar18 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_90,puVar17);
  lVar22 = 0;
  local_d8.Mem = (FMemStackBase *)(pFVar18 + 2);
  local_d8.Top = (local_d8.Mem)->Top;
  local_d8.SavedChunk = *(FTaggedMemory **)(pFVar18 + 4);
  local_d8.bPopped = false;
  local_d8.NextTopmostMark = *(FMemMark **)(pFVar18 + 5);
  pFVar18[5] = (FTlsAutoCleanup)&local_d8;
  *(int *)(pFVar18 + 6) = *(int *)(pFVar18 + 6) + 1;
  lVar21 = *(longlong *)this;
  if (param_1) {
    local_100 = *(int *)(lVar21 + 0x54);
    local_f8 = 0xffffffffffffffff;
  }
  else {
    uVar16 = *(uint *)((longlong)this + 8);
    uVar15 = 0;
    if ((int)uVar16 < *(int *)(lVar21 + 0x80)) {
      uVar15 = ~uVar16 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (local_118 = (longlong)(int)uVar16, local_110 = (longlong)*(int *)(lVar21 + 0x80),
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      uVar14 = (*pcVar6)();
      return (bool)uVar14;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar21 + 0x78) + 0x40 + (longlong)(int)uVar16 * 0x48);
    TaskTrace::Started(uVar3);
    iVar24 = *(int *)(*(longlong *)this + 0x54);
    local_100 = iVar24;
    local_f8 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar24) {
      lVar21 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar21 + 0x48);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar21 + 0x80) <= iVar19) {
        iVar19 = -1;
      }
      if (iVar19 != -1) {
        local_b0.Reference = *(FParallelForData **)this;
        if (local_b0.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_b0.Reference)->field_0x8 = *(int *)&(local_b0.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_104 = iVar24;
        LaunchTask(&local_b0,iVar19,true);
        local_100 = iVar24;
        local_f8 = uVar3;
        if (local_b0.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_b0.Reference)->field_0x8;
          LOCK();
          iVar19 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar19 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_b0.Reference != (FParallelForData *)0x0)) {
            local_104 = iVar24;
            (*(code *)**(undefined8 **)local_b0.Reference)(local_b0.Reference,1);
            local_100 = iVar24;
            local_f8 = uVar3;
          }
        }
      }
    }
  }
  iVar24 = local_100;
  bVar13 = -1 < CpuChannel->Enabled;
  local_104 = local_100;
  if (bVar13) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar12 = __real_42e312d000000010;
  dVar11 = __real_416312d000000000;
  lVar21 = -0x8000000000000000;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_108 = '\0';
  }
  else {
    local_108 = '\x01';
    QueryPerformanceCounter(&local_a0);
    auVar27._8_8_ = extraout_XMM0_Qb;
    auVar27._0_8_ = extraout_XMM0_Qa;
    uVar16 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar16 = 0;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar11 +
                   dVar12;
    auVar27 = roundpd(auVar27,auVar7,1);
    lVar21 = (longlong)auVar27._0_8_;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)(int)uVar16 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar27 = roundpd(auVar27,auVar8,1);
    lVar22 = (longlong)auVar27._0_8_;
  }
  lVar4 = *(longlong *)this;
  local_ec = *(int *)(lVar4 + 0x4c);
  local_e8 = *(int *)(lVar4 + 0x50);
  puVar5 = *(undefined8 **)(lVar4 + 0x60);
  iVar19 = local_ec;
  iVar23 = local_e8;
  do {
    do {
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar26 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar24 < iVar19) && (local_100 + -1 <= iVar26)) && (iVar26 = local_100 + -1, !param_1))
      goto LAB_141740637;
      iVar26 = iVar26 * iVar23;
      iVar10 = iVar26;
      iVar24 = local_104;
      this = local_a8;
      iVar25 = iVar19;
      if (iVar26 + iVar23 < iVar19) {
        iVar25 = iVar26 + iVar23;
      }
      for (; local_104 = iVar24, local_a8 = this, iVar10 < iVar25; iVar10 = iVar10 + 1) {
        local_e0[0] = iVar10;
        (*(code *)*puVar5)(puVar5[1],local_e0);
        iVar24 = local_104;
        this = local_a8;
        iVar19 = local_ec;
        iVar23 = local_e8;
      }
      if (iVar26 < iVar19) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar26 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar26 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar20 = true;
          goto LAB_14174063e;
        }
      }
      if (iVar19 <= iVar25) goto LAB_141740637;
    } while (local_108 == '\0');
    QueryPerformanceCounter(&local_98);
    auVar28._8_8_ = extraout_XMM0_Qb_00;
    auVar28._0_8_ = extraout_XMM0_Qa_00;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar11 +
                   dVar12;
    auVar27 = roundpd(auVar28,auVar9,1);
    iVar19 = local_ec;
    iVar23 = local_e8;
  } while ((longlong)auVar27._0_8_ - lVar21 <= lVar22);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_141740637:
  bVar20 = false;
LAB_14174063e:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_f8);
  }
  if (local_d8.bPopped == false) {
    if (((local_d8.Mem)->TopMark != &local_d8) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      uVar14 = (*pcVar6)();
      return (bool)uVar14;
    }
    local_d8.bPopped = true;
    (local_d8.Mem)->NumMarks = (local_d8.Mem)->NumMarks + -1;
    if (local_d8.SavedChunk != (local_d8.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_d8.Mem,local_d8.SavedChunk);
    }
    (local_d8.Mem)->Top = local_d8.Top;
    (local_d8.Mem)->TopMark = local_d8.NextTopmostMark;
    local_d8.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_80.MetaScope);
  FMemScope::~FMemScope(&local_80.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_80,local_80.LLMScopes.LLMScopes.ArrayNum);
  return bVar20;
}

// LaunchTask @ 141767990

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  FTask *pFVar1;
  FParallelForData *pFVar2;
  longlong lVar3;
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
  if (param_2 < *(int *)&pFVar2->field_0x80) {
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
  lVar3 = *(longlong *)&pFVar2->Tasks;
  pFVar1 = (FTask *)(lVar3 + (longlong)param_2 * 0x48);
  if (*(longlong *)(lVar3 + 0x40 + (longlong)param_2 * 0x48) != -1) {
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
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXH1W4EParallelForFlags___Z_2AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1_W4EParallelForFlags___Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAXH2W4EParallelForFlags___Z_3AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
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

// ~FParallelExecutor @ 141b2b0e0

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
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
                    /* WARNING: Could not recover jumptable at 0x000141b2b12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 141b35e90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  ulong64 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  int iVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  FTlsAutoCleanup *pFVar18;
  int iVar19;
  bool bVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar27 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_138 [32];
  longlong local_118;
  longlong local_110;
  char local_108;
  int local_104;
  int local_100;
  ulong64 local_f8;
  undefined1 local_f0 [4];
  int local_ec;
  int local_e8;
  int local_e0 [2];
  FMemMark local_d8;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,bool,bool)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,bool,bool)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
  local_b0;
  longlong *local_a8;
  LARGE_INTEGER local_a0;
  LARGE_INTEGER local_98;
  code *local_90;
  undefined1 *local_88;
  FInheritedContextScope local_80;
  ulonglong local_60;
  undefined1 auVar28 [16];
  
  local_60 = __security_cookie.value ^ (ulonglong)auStack_138;
  local_a8 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_80);
  puVar17 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_88 = local_f0;
  local_90 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar18 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_90,puVar17);
  lVar22 = 0;
  local_d8.Mem = (FMemStackBase *)(pFVar18 + 2);
  local_d8.Top = (local_d8.Mem)->Top;
  local_d8.SavedChunk = *(FTaggedMemory **)(pFVar18 + 4);
  local_d8.bPopped = false;
  local_d8.NextTopmostMark = *(FMemMark **)(pFVar18 + 5);
  pFVar18[5] = (FTlsAutoCleanup)&local_d8;
  *(int *)(pFVar18 + 6) = *(int *)(pFVar18 + 6) + 1;
  lVar21 = *(longlong *)this;
  if (param_1) {
    local_100 = *(int *)(lVar21 + 0x54);
    local_f8 = 0xffffffffffffffff;
  }
  else {
    uVar16 = *(uint *)((longlong)this + 8);
    uVar15 = 0;
    if ((int)uVar16 < *(int *)(lVar21 + 0x80)) {
      uVar15 = ~uVar16 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (local_118 = (longlong)(int)uVar16, local_110 = (longlong)*(int *)(lVar21 + 0x80),
       bVar13 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar13)) {
      pcVar6 = (code *)swi(3);
      uVar14 = (*pcVar6)();
      return (bool)uVar14;
    }
    uVar3 = *(ulong64 *)(*(longlong *)(lVar21 + 0x78) + 0x40 + (longlong)(int)uVar16 * 0x48);
    TaskTrace::Started(uVar3);
    iVar24 = *(int *)(*(longlong *)this + 0x54);
    local_100 = iVar24;
    local_f8 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar24) {
      lVar21 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar21 + 0x48);
      iVar19 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar21 + 0x80) <= iVar19) {
        iVar19 = -1;
      }
      if (iVar19 != -1) {
        local_b0.Reference = *(FParallelForData **)this;
        if (local_b0.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_b0.Reference)->field_0x8 = *(int *)&(local_b0.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_104 = iVar24;
        LaunchTask(&local_b0,iVar19,true);
        local_100 = iVar24;
        local_f8 = uVar3;
        if (local_b0.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_b0.Reference)->field_0x8;
          LOCK();
          iVar19 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar19 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_b0.Reference != (FParallelForData *)0x0)) {
            local_104 = iVar24;
            (*(code *)**(undefined8 **)local_b0.Reference)(local_b0.Reference,1);
            local_100 = iVar24;
            local_f8 = uVar3;
          }
        }
      }
    }
  }
  iVar24 = local_100;
  bVar13 = -1 < CpuChannel->Enabled;
  local_104 = local_100;
  if (bVar13) {
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar12 = __real_42e312d000000010;
  dVar11 = __real_416312d000000000;
  lVar21 = -0x8000000000000000;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_108 = '\0';
  }
  else {
    local_108 = '\x01';
    QueryPerformanceCounter(&local_a0);
    auVar27._8_8_ = extraout_XMM0_Qb;
    auVar27._0_8_ = extraout_XMM0_Qa;
    uVar16 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      uVar16 = 0;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar11 +
                   dVar12;
    auVar27 = roundpd(auVar27,auVar7,1);
    lVar21 = (longlong)auVar27._0_8_;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)(int)uVar16 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar27 = roundpd(auVar27,auVar8,1);
    lVar22 = (longlong)auVar27._0_8_;
  }
  lVar4 = *(longlong *)this;
  local_ec = *(int *)(lVar4 + 0x4c);
  local_e8 = *(int *)(lVar4 + 0x50);
  puVar5 = *(undefined8 **)(lVar4 + 0x60);
  iVar19 = local_ec;
  iVar23 = local_e8;
  do {
    do {
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar26 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar24 < iVar19) && (local_100 + -1 <= iVar26)) && (iVar26 = local_100 + -1, !param_1))
      goto LAB_141b36287;
      iVar26 = iVar26 * iVar23;
      iVar10 = iVar26;
      iVar24 = local_104;
      this = local_a8;
      iVar25 = iVar19;
      if (iVar26 + iVar23 < iVar19) {
        iVar25 = iVar26 + iVar23;
      }
      for (; local_104 = iVar24, local_a8 = this, iVar10 < iVar25; iVar10 = iVar10 + 1) {
        local_e0[0] = iVar10;
        (*(code *)*puVar5)(puVar5[1],local_e0);
        iVar24 = local_104;
        this = local_a8;
        iVar19 = local_ec;
        iVar23 = local_e8;
      }
      if (iVar26 < iVar19) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar26 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar26 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar20 = true;
          goto LAB_141b3628e;
        }
      }
      if (iVar19 <= iVar25) goto LAB_141b36287;
    } while (local_108 == '\0');
    QueryPerformanceCounter(&local_98);
    auVar28._8_8_ = extraout_XMM0_Qb_00;
    auVar28._0_8_ = extraout_XMM0_Qa_00;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (double)local_98.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar11 +
                   dVar12;
    auVar27 = roundpd(auVar28,auVar9,1);
    iVar19 = local_ec;
    iVar23 = local_e8;
  } while ((longlong)auVar27._0_8_ - lVar21 <= lVar22);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_141b36287:
  bVar20 = false;
LAB_141b3628e:
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_f8);
  }
  if (local_d8.bPopped == false) {
    if (((local_d8.Mem)->TopMark != &local_d8) &&
       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar13)) {
      pcVar6 = (code *)swi(3);
      uVar14 = (*pcVar6)();
      return (bool)uVar14;
    }
    local_d8.bPopped = true;
    (local_d8.Mem)->NumMarks = (local_d8.Mem)->NumMarks + -1;
    if (local_d8.SavedChunk != (local_d8.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_d8.Mem,local_d8.SavedChunk);
    }
    (local_d8.Mem)->Top = local_d8.Top;
    (local_d8.Mem)->TopMark = local_d8.NextTopmostMark;
    local_d8.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_80.MetaScope);
  FMemScope::~FMemScope(&local_80.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_80,local_80.LLMScopes.LLMScopes.ArrayNum);
  return bVar20;
}

// LaunchTask @ 141b46800

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<TFunctionRef<void___cdecl(int)>,`ParallelFor'::__l2::<lambda_1>,std::nullptr_t>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,bool,bool)_::_2_::<lambda_1>,std::nullptr_t>(wchar_t_const_*,int,int,TFunctionRef<void___cdecl(int)>,_void___cdecl_ParallelFor(int,TFunctionRef<void___cdecl(int)>,bool,bool)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<std::nullptr_t,int>_const_&)_::_2_::FParallelForData>
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
       &
       ___7__TTaskDelegateImpl_V<lambda_1>__N_____Init_VFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1__N1_Z___T_ParallelForImpl__YAXPEB_WHHV__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXH1_N2_Z_W4EParallelForFlags__AEBV__TArrayView___TH___Z__FTask_LowLevelTasks__QEAAXPEB_WW4ETaskPriority_3___QEAVFParallelExecutor__1____ParallelForInternal_V__TFunctionRef___A6AXH_Z__V<lambda_1>__1__ParallelFor__YAXHV1__N1_Z___T_ParallelForImpl__YAX0HHV__TFunctionRef___A6AXH_Z__V1_1__ParallelFor__YAXH2_N3_Z_W4EParallelForFlags__AEBV__TArrayView___TH___Z_W4ETaskFlags_3__Z__0A____TTaskDelegate___A6APEAVFTask_LowLevelTasks___N_Z_0DA__LowLevelTasks__6B_
  ;
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

