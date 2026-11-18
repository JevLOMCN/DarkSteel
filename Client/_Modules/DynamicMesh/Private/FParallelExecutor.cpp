// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 9

// ~FParallelExecutor @ 14c7b7520

void __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh'::__l28::<lambda_1>,`ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,`UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh'::__l28::<lambda_1>_>'::__l5::<lambda_1>,TransferValuesLocals::FTaskContext>'
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
                    /* WARNING: Could not recover jumptable at 0x00014c7b756c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~FParallelExecutor @ 14c7b7580

void __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint'::__l2::<lambda_2>,`ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,`UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint'::__l2::<lambda_2>_>'::__l5::<lambda_1>,TransferValuesLocals::FTaskContext>'
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
                    /* WARNING: Could not recover jumptable at 0x00014c7b75cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 14c7d58a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh'::__l28::<lambda_1>,`ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,`UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh'::__l28::<lambda_1>_>'::__l5::<lambda_1>,TransferValuesLocals::FTaskContext>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  FParallelForData_conflict *pFVar2;
  uint uVar3;
  ulong64 uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  double dVar10;
  double dVar11;
  TArrayView<TransferValuesLocals::FTaskContext,int> *this_00;
  void *this_01;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  uint uVar15;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  FTaskContext *pFVar18;
  int iVar19;
  char cVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  char local_118;
  char local_117;
  int local_114;
  int local_110;
  ulong64 local_108;
  undefined1 local_100 [4];
  int local_fc;
  int local_f8;
  FMemMark local_f0;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_bool___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh(UE::Geometry::FDynamicMesh3_&)_::_28_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh(UE::Geometry::FDynamicMesh3_&)_::_28_::<lambda_1>_>(TArray<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>_>_&,int,_public:_virtual_bool___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh(UE::Geometry::FDynamicMesh3_&)_::_28_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TransferValuesLocals::FTaskContext>(wchar_t_const_*,int,int,_public:_virtual_bool___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh(UE::Geometry::FDynamicMesh3_&)_::_28_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh(UE::Geometry::FDynamicMesh3_&)_::_28_::<lambda_1>_>(TArray<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>_>_&,int,_public:_virtual_bool___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh(UE::Geometry::FDynamicMesh3_&)_::_28_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TransferValuesLocals::FTaskContext,int>_const_&)_::_2_::FParallelForData>
  local_c8;
  longlong local_c0;
  LARGE_INTEGER local_b8;
  TArrayView<TransferValuesLocals::FTaskContext,int> *local_b0;
  void *local_a8;
  LARGE_INTEGER local_a0;
  code *local_98;
  undefined1 *local_90;
  FInheritedContextScope local_88;
  ulonglong local_68;
  undefined1 auVar29 [16];
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_148;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_88);
  puVar16 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_90 = local_100;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar17 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar16);
  local_f0.Mem = (FMemStackBase *)(pFVar17 + 2);
  local_f0.Top = (local_f0.Mem)->Top;
  local_f0.SavedChunk = *(FTaggedMemory **)(pFVar17 + 4);
  local_f0.bPopped = false;
  local_f0.NextTopmostMark = *(FMemMark **)(pFVar17 + 5);
  pFVar17[5] = (FTlsAutoCleanup)&local_f0;
  *(int *)(pFVar17 + 6) = *(int *)(pFVar17 + 6) + 1;
  lVar21 = *(longlong *)this;
  if (param_1) {
    local_110 = *(int *)(lVar21 + 0x54);
    local_108 = 0xffffffffffffffff;
  }
  else {
    uVar3 = *(uint *)((longlong)this + 8);
    uVar15 = 0;
    if ((int)uVar3 < *(int *)(lVar21 + 0x80)) {
      uVar15 = ~uVar3 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (local_128 = (longlong)(int)uVar3, local_120 = (longlong)*(int *)(lVar21 + 0x80),
       bVar12 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    uVar4 = *(ulong64 *)(*(longlong *)(lVar21 + 0x78) + 0x40 + (longlong)(int)uVar3 * 0x48);
    TaskTrace::Started(uVar4);
    iVar26 = *(int *)(*(longlong *)this + 0x54);
    local_110 = iVar26;
    local_108 = uVar4;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar26) {
      lVar21 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar21 + 0x48);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar21 + 0x80) <= iVar24) {
        iVar24 = -1;
      }
      if (iVar24 != -1) {
        local_c8.Reference = *(FParallelForData_conflict **)this;
        if (local_c8.Reference != (FParallelForData_conflict *)0x0) {
          LOCK();
          *(int *)(local_c8.Reference + 8) = *(int *)(local_c8.Reference + 8) + 1;
          UNLOCK();
        }
        local_114 = iVar26;
        LaunchTask(&local_c8,iVar24,true);
        local_110 = iVar26;
        local_108 = uVar4;
        if (local_c8.Reference != (FParallelForData_conflict *)0x0) {
          pFVar2 = local_c8.Reference + 8;
          LOCK();
          iVar24 = *(int *)pFVar2;
          *(int *)pFVar2 = *(int *)pFVar2 + -1;
          UNLOCK();
          if (((iVar24 == 1) && (pFVar2 != (FParallelForData_conflict *)0x0)) &&
             (local_c8.Reference != (FParallelForData_conflict *)0x0)) {
            local_114 = iVar26;
            (*(code *)**(undefined8 **)local_c8.Reference)(local_c8.Reference,1);
            local_110 = iVar26;
            local_108 = uVar4;
          }
        }
      }
    }
  }
  iVar26 = local_110;
  bVar12 = CpuChannel->Enabled < 0;
  local_114 = local_110;
  if (bVar12) {
    local_118 = '\0';
  }
  else {
    local_118 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar11 = __real_42e312d000000010;
  dVar10 = __real_416312d000000000;
  cVar20 = !bVar12;
  lVar21 = 0;
  local_c0 = -0x8000000000000000;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_117 = '\0';
  }
  else {
    local_117 = '\x01';
    QueryPerformanceCounter(&local_b8);
    auVar28._8_8_ = extraout_XMM0_Qb;
    auVar28._0_8_ = extraout_XMM0_Qa;
    iVar24 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      iVar24 = 0;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar10 +
                   dVar11;
    auVar28 = roundpd(auVar28,auVar6,1);
    local_c0 = (longlong)auVar28._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)iVar24 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar28 = roundpd(auVar28,auVar7,1);
    lVar21 = (longlong)auVar28._0_8_;
  }
  lVar22 = *(longlong *)this;
  local_fc = *(int *)(lVar22 + 0x4c);
  local_f8 = *(int *)(lVar22 + 0x50);
  local_b0 = *(TArrayView<TransferValuesLocals::FTaskContext,int> **)(lVar22 + 0x58);
  local_a8 = *(void **)(lVar22 + 0x60);
  lVar22 = local_c0;
  iVar24 = iVar26;
  iVar19 = local_fc;
  iVar23 = local_f8;
  do {
    do {
      this_01 = local_a8;
      this_00 = local_b0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar27 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar26 < iVar19) && (iVar24 + -1 <= iVar27)) && (iVar27 = iVar24 + -1, !param_1))
      goto LAB_14c7d5cee;
      iVar27 = iVar27 * iVar23;
      iVar9 = iVar27;
      iVar26 = local_114;
      iVar24 = local_110;
      iVar25 = iVar19;
      if (iVar27 + iVar23 < iVar19) {
        iVar25 = iVar27 + iVar23;
      }
      for (; local_114 = iVar26, local_110 = iVar24, iVar9 < iVar25; iVar9 = iVar9 + 1) {
        pFVar18 = TArrayView<TransferValuesLocals::FTaskContext,int>::operator[]
                            (this_00,*(int *)((longlong)this + 8));
        `UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh'::__l28::<lambda_1>::
        operator()(this_01,pFVar18,iVar9);
        lVar22 = local_c0;
        cVar20 = local_118;
        iVar26 = local_114;
        iVar24 = local_110;
        iVar19 = local_fc;
        iVar23 = local_f8;
      }
      if (iVar27 < iVar19) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar27 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar27 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar12 = true;
          goto LAB_14c7d5cf5;
        }
      }
      if (iVar19 <= iVar25) goto LAB_14c7d5cee;
    } while (local_117 == '\0');
    QueryPerformanceCounter(&local_a0);
    auVar29._8_8_ = extraout_XMM0_Qb_00;
    auVar29._0_8_ = extraout_XMM0_Qa_00;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar10 +
                   dVar11;
    auVar28 = roundpd(auVar29,auVar8,1);
    iVar19 = local_fc;
    iVar23 = local_f8;
  } while ((longlong)auVar28._0_8_ - lVar22 <= lVar21);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_14c7d5cee:
  bVar12 = false;
LAB_14c7d5cf5:
  if (cVar20 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_108);
  }
  if (local_f0.bPopped == false) {
    if (((local_f0.Mem)->TopMark != &local_f0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    local_f0.bPopped = true;
    (local_f0.Mem)->NumMarks = (local_f0.Mem)->NumMarks + -1;
    if (local_f0.SavedChunk != (local_f0.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_f0.Mem,local_f0.SavedChunk);
    }
    (local_f0.Mem)->Top = local_f0.Top;
    (local_f0.Mem)->TopMark = local_f0.NextTopmostMark;
    local_f0.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_88.MetaScope);
  FMemScope::~FMemScope(&local_88.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_88,local_88.LLMScopes.LLMScopes.ArrayNum);
  return bVar12;
}

// operator() @ 14c7d5df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint'::__l2::<lambda_2>,`ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,`UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint'::__l2::<lambda_2>_>'::__l5::<lambda_1>,TransferValuesLocals::FTaskContext>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  FParallelForData_conflict *pFVar2;
  uint uVar3;
  ulong64 uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  double dVar10;
  double dVar11;
  TArrayView<TransferValuesLocals::FTaskContext,int> *this_00;
  void *this_01;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  uint uVar15;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  FTaskContext *pFVar18;
  int iVar19;
  char cVar20;
  longlong lVar21;
  longlong lVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar28 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_148 [32];
  longlong local_128;
  longlong local_120;
  char local_118;
  char local_117;
  int local_114;
  int local_110;
  ulong64 local_108;
  undefined1 local_100 [4];
  int local_fc;
  int local_f8;
  FMemMark local_f0;
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_protected:_int___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint(UE::Geometry::FDynamicMesh3_&,TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>_const_&)_::_2_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,_protected:_int___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint(UE::Geometry::FDynamicMesh3_&,TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>_const_&)_::_2_::<lambda_2>_>(TArray<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>_>_&,int,_protected:_int___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint(UE::Geometry::FDynamicMesh3_&,TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>_const_&)_::_2_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TransferValuesLocals::FTaskContext>(wchar_t_const_*,int,int,_protected:_int___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint(UE::Geometry::FDynamicMesh3_&,TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>_const_&)_::_2_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,_protected:_int___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint(UE::Geometry::FDynamicMesh3_&,TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>_const_&)_::_2_::<lambda_2>_>(TArray<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>_>_&,int,_protected:_int___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint(UE::Geometry::FDynamicMesh3_&,TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>_const_&)_::_2_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TransferValuesLocals::FTaskContext,int>_const_&)_::_2_::FParallelForData>
  local_c8;
  longlong local_c0;
  LARGE_INTEGER local_b8;
  TArrayView<TransferValuesLocals::FTaskContext,int> *local_b0;
  void *local_a8;
  LARGE_INTEGER local_a0;
  code *local_98;
  undefined1 *local_90;
  FInheritedContextScope local_88;
  ulonglong local_68;
  undefined1 auVar29 [16];
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_148;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_88);
  puVar16 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_90 = local_100;
  local_98 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar17 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,puVar16);
  local_f0.Mem = (FMemStackBase *)(pFVar17 + 2);
  local_f0.Top = (local_f0.Mem)->Top;
  local_f0.SavedChunk = *(FTaggedMemory **)(pFVar17 + 4);
  local_f0.bPopped = false;
  local_f0.NextTopmostMark = *(FMemMark **)(pFVar17 + 5);
  pFVar17[5] = (FTlsAutoCleanup)&local_f0;
  *(int *)(pFVar17 + 6) = *(int *)(pFVar17 + 6) + 1;
  lVar21 = *(longlong *)this;
  if (param_1) {
    local_110 = *(int *)(lVar21 + 0x54);
    local_108 = 0xffffffffffffffff;
  }
  else {
    uVar3 = *(uint *)((longlong)this + 8);
    uVar15 = 0;
    if ((int)uVar3 < *(int *)(lVar21 + 0x80)) {
      uVar15 = ~uVar3 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (local_128 = (longlong)(int)uVar3, local_120 = (longlong)*(int *)(lVar21 + 0x80),
       bVar12 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    uVar4 = *(ulong64 *)(*(longlong *)(lVar21 + 0x78) + 0x40 + (longlong)(int)uVar3 * 0x48);
    TaskTrace::Started(uVar4);
    iVar26 = *(int *)(*(longlong *)this + 0x54);
    local_110 = iVar26;
    local_108 = uVar4;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar26) {
      lVar21 = *(longlong *)this;
      LOCK();
      piVar1 = (int *)(lVar21 + 0x48);
      iVar24 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int *)(lVar21 + 0x80) <= iVar24) {
        iVar24 = -1;
      }
      if (iVar24 != -1) {
        local_c8.Reference = *(FParallelForData_conflict **)this;
        if (local_c8.Reference != (FParallelForData_conflict *)0x0) {
          LOCK();
          *(int *)(local_c8.Reference + 8) = *(int *)(local_c8.Reference + 8) + 1;
          UNLOCK();
        }
        local_114 = iVar26;
        LaunchTask(&local_c8,iVar24,true);
        local_110 = iVar26;
        local_108 = uVar4;
        if (local_c8.Reference != (FParallelForData_conflict *)0x0) {
          pFVar2 = local_c8.Reference + 8;
          LOCK();
          iVar24 = *(int *)pFVar2;
          *(int *)pFVar2 = *(int *)pFVar2 + -1;
          UNLOCK();
          if (((iVar24 == 1) && (pFVar2 != (FParallelForData_conflict *)0x0)) &&
             (local_c8.Reference != (FParallelForData_conflict *)0x0)) {
            local_114 = iVar26;
            (*(code *)**(undefined8 **)local_c8.Reference)(local_c8.Reference,1);
            local_110 = iVar26;
            local_108 = uVar4;
          }
        }
      }
    }
  }
  iVar26 = local_110;
  bVar12 = CpuChannel->Enabled < 0;
  local_114 = local_110;
  if (bVar12) {
    local_118 = '\0';
  }
  else {
    local_118 = '\x01';
    FCpuProfilerTrace::OutputBeginDynamicEvent
              (*(wchar_t **)(*(longlong *)this + 0x38),
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Async\\ParallelFor.h"
               ,0x143);
  }
  dVar11 = __real_42e312d000000010;
  dVar10 = __real_416312d000000000;
  cVar20 = !bVar12;
  lVar21 = 0;
  local_c0 = -0x8000000000000000;
  if ((param_1) || (*(char *)(*(longlong *)this + 0x70) < '\x03')) {
    local_117 = '\0';
  }
  else {
    local_117 = '\x01';
    QueryPerformanceCounter(&local_b8);
    auVar28._8_8_ = extraout_XMM0_Qb;
    auVar28._0_8_ = extraout_XMM0_Qa;
    iVar24 = GParallelForBackgroundYieldingTimeoutMs;
    if (GParallelForBackgroundYieldingTimeoutMs < 0) {
      iVar24 = 0;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (double)local_b8.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar10 +
                   dVar11;
    auVar28 = roundpd(auVar28,auVar6,1);
    local_c0 = (longlong)auVar28._0_8_;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (double)iVar24 * __real_40c3880000000000 + __real_3fe0000000000000;
    auVar28 = roundpd(auVar28,auVar7,1);
    lVar21 = (longlong)auVar28._0_8_;
  }
  lVar22 = *(longlong *)this;
  local_fc = *(int *)(lVar22 + 0x4c);
  local_f8 = *(int *)(lVar22 + 0x50);
  local_b0 = *(TArrayView<TransferValuesLocals::FTaskContext,int> **)(lVar22 + 0x58);
  local_a8 = *(void **)(lVar22 + 0x60);
  lVar22 = local_c0;
  iVar24 = iVar26;
  iVar19 = local_fc;
  iVar23 = local_f8;
  do {
    do {
      this_01 = local_a8;
      this_00 = local_b0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar27 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar26 < iVar19) && (iVar24 + -1 <= iVar27)) && (iVar27 = iVar24 + -1, !param_1))
      goto LAB_14c7d623e;
      iVar27 = iVar27 * iVar23;
      iVar9 = iVar27;
      iVar26 = local_114;
      iVar24 = local_110;
      iVar25 = iVar19;
      if (iVar27 + iVar23 < iVar19) {
        iVar25 = iVar27 + iVar23;
      }
      for (; local_114 = iVar26, local_110 = iVar24, iVar9 < iVar25; iVar9 = iVar9 + 1) {
        pFVar18 = TArrayView<TransferValuesLocals::FTaskContext,int>::operator[]
                            (this_00,*(int *)((longlong)this + 8));
        `UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint'::__l2::<lambda_2>::
        operator()(this_01,pFVar18,iVar9);
        lVar22 = local_c0;
        cVar20 = local_118;
        iVar26 = local_114;
        iVar24 = local_110;
        iVar19 = local_fc;
        iVar23 = local_f8;
      }
      if (iVar27 < iVar19) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar27 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar27 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar12 = true;
          goto LAB_14c7d6245;
        }
      }
      if (iVar19 <= iVar25) goto LAB_14c7d623e;
    } while (local_117 == '\0');
    QueryPerformanceCounter(&local_a0);
    auVar29._8_8_ = extraout_XMM0_Qb_00;
    auVar29._0_8_ = extraout_XMM0_Qa_00;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (double)local_a0.QuadPart * FGenericPlatformTime::SecondsPerCycle * dVar10 +
                   dVar11;
    auVar28 = roundpd(auVar29,auVar8,1);
    iVar19 = local_fc;
    iVar23 = local_f8;
  } while ((longlong)auVar28._0_8_ - lVar22 <= lVar21);
  *(undefined1 *)((longlong)this + 0xc) = 1;
LAB_14c7d623e:
  bVar12 = false;
LAB_14c7d6245:
  if (cVar20 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (!param_1) {
    TaskTrace::Completed(local_108);
  }
  if (local_f0.bPopped == false) {
    if (((local_f0.Mem)->TopMark != &local_f0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mem.TopMark == this",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                            ,0x215,L""), bVar14)) {
      pcVar5 = (code *)swi(3);
      uVar13 = (*pcVar5)();
      return (bool)uVar13;
    }
    local_f0.bPopped = true;
    (local_f0.Mem)->NumMarks = (local_f0.Mem)->NumMarks + -1;
    if (local_f0.SavedChunk != (local_f0.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_f0.Mem,local_f0.SavedChunk);
    }
    (local_f0.Mem)->Top = local_f0.Top;
    (local_f0.Mem)->TopMark = local_f0.NextTopmostMark;
    local_f0.Top = (uchar *)0x0;
  }
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_88.MetaScope);
  FMemScope::~FMemScope(&local_88.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_88,local_88.LLMScopes.LLMScopes.ArrayNum);
  return bVar12;
}

// LaunchTask @ 14c8191e0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh'::__l28::<lambda_1>,`ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,`UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh'::__l28::<lambda_1>_>'::__l5::<lambda_1>,TransferValuesLocals::FTaskContext>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_virtual_bool___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh(UE::Geometry::FDynamicMesh3_&)_::_28_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh(UE::Geometry::FDynamicMesh3_&)_::_28_::<lambda_1>_>(TArray<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>_>_&,int,_public:_virtual_bool___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh(UE::Geometry::FDynamicMesh3_&)_::_28_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TransferValuesLocals::FTaskContext>(wchar_t_const_*,int,int,_public:_virtual_bool___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh(UE::Geometry::FDynamicMesh3_&)_::_28_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,_public:_virtual_bool___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh(UE::Geometry::FDynamicMesh3_&)_::_28_::<lambda_1>_>(TArray<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>_>_&,int,_public:_virtual_bool___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh(UE::Geometry::FDynamicMesh3_&)_::_28_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TransferValuesLocals::FTaskContext,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  FTask *pFVar1;
  FParallelForData_conflict *pFVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  bool bVar6;
  FParallelForData_conflict FVar7;
  uint uVar8;
  ulong64 uVar9;
  FTask *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  FParallelForData_conflict *local_38;
  int local_30;
  undefined1 local_2c;
  FParallelForData_conflict *local_28;
  int local_20;
  undefined1 local_1c;
  
  pFVar2 = param_1->Reference;
  uVar13 = 0;
  uVar8 = 0;
  if (param_2 < *(int *)(pFVar2 + 0x80)) {
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
  lVar3 = *(longlong *)(pFVar2 + 0x78);
  pFVar1 = (FTask *)(lVar3 + (longlong)param_2 * 0x48);
  if (*(longlong *)(lVar3 + 0x40 + (longlong)param_2 * 0x48) != -1) {
    TaskTrace::Destroyed(*(ulong64 *)(pFVar1 + 1));
  }
  pwVar4 = *(wchar_t **)(param_1->Reference + 0x38);
  FVar7 = param_1->Reference[0x70];
  uVar9 = TaskTrace::GenerateTaskId();
  LOCK();
  *(ulong64 *)(pFVar1 + 1) = uVar9;
  UNLOCK();
  TaskTrace::Launched(*(ulong64 *)(pFVar1 + 1),pwVar4,false,AnyNormalThreadNormalTask,0);
  local_28 = param_1->Reference;
  param_1->Reference = (FParallelForData_conflict *)0x0;
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
  local_28 = (FParallelForData_conflict *)0x0;
  (**(code **)(*(longlong *)&pFVar1->field_0x28 + 0x18))(&pFVar1->field_0x28,pFVar1);
  *(undefined ***)&pFVar1->field_0x28 =
       &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh'::`28'::<lambda_1>,`ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,`UE::Geometry::FTransferVertexColorAttribute::TransferColorsToMesh'::`28'::<lambda_1>_>'::`5'::<lambda_1>,TransferValuesLocals::FTaskContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
        ::_vftable_;
  *(FParallelForData_conflict **)pFVar1 = local_38;
  *(int *)&pFVar1->field_0x8 = local_30;
  pFVar1->field_0xc = local_2c;
  local_38 = (FParallelForData_conflict *)0x0;
  ~FParallelExecutor(&local_38);
  pFVar10 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar10 == (FTask *)0x0) {
    if (FVar7 == (FParallelForData_conflict)0x6) {
      FVar7 = (FParallelForData_conflict)0x1;
    }
  }
  else {
    if (FVar7 == (FParallelForData_conflict)0x6) {
      FVar7 = SUB81((ulonglong)*(undefined8 *)&pFVar10->field_0x38 >> 0x3b,0);
    }
    uVar13 = *(undefined8 *)&pFVar10->field_0x30;
  }
  *(undefined8 *)&pFVar1->field_0x30 = uVar13;
  *(ulonglong *)&pFVar1->field_0x38 =
       ((longlong)(char)FVar7 << 0x35 | (ulonglong)pwVar4 & 0x1fffffffffffff | 0xff00000000000000)
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

// LaunchTask @ 14c819450

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint'::__l2::<lambda_2>,`ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,`UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint'::__l2::<lambda_2>_>'::__l5::<lambda_1>,TransferValuesLocals::FTaskContext>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_protected:_int___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint(UE::Geometry::FDynamicMesh3_&,TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>_const_&)_::_2_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,_protected:_int___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint(UE::Geometry::FDynamicMesh3_&,TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>_const_&)_::_2_::<lambda_2>_>(TArray<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>_>_&,int,_protected:_int___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint(UE::Geometry::FDynamicMesh3_&,TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>_const_&)_::_2_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,TransferValuesLocals::FTaskContext>(wchar_t_const_*,int,int,_protected:_int___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint(UE::Geometry::FDynamicMesh3_&,TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>_const_&)_::_2_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,_protected:_int___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint(UE::Geometry::FDynamicMesh3_&,TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>_const_&)_::_2_::<lambda_2>_>(TArray<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>_>_&,int,_protected:_int___cdecl_UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint(UE::Geometry::FDynamicMesh3_&,TUniquePtr<UE::Geometry::FMeshNormals,TDefaultDelete<UE::Geometry::FMeshNormals>_>_const_&)_::_2_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<TransferValuesLocals::FTaskContext,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  FTask *pFVar1;
  FParallelForData_conflict *pFVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  bool bVar6;
  FParallelForData_conflict FVar7;
  uint uVar8;
  ulong64 uVar9;
  FTask *pFVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  undefined8 uVar13;
  FParallelForData_conflict *local_38;
  int local_30;
  undefined1 local_2c;
  FParallelForData_conflict *local_28;
  int local_20;
  undefined1 local_1c;
  
  pFVar2 = param_1->Reference;
  uVar13 = 0;
  uVar8 = 0;
  if (param_2 < *(int *)(pFVar2 + 0x80)) {
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
  lVar3 = *(longlong *)(pFVar2 + 0x78);
  pFVar1 = (FTask *)(lVar3 + (longlong)param_2 * 0x48);
  if (*(longlong *)(lVar3 + 0x40 + (longlong)param_2 * 0x48) != -1) {
    TaskTrace::Destroyed(*(ulong64 *)(pFVar1 + 1));
  }
  pwVar4 = *(wchar_t **)(param_1->Reference + 0x38);
  FVar7 = param_1->Reference[0x70];
  uVar9 = TaskTrace::GenerateTaskId();
  LOCK();
  *(ulong64 *)(pFVar1 + 1) = uVar9;
  UNLOCK();
  TaskTrace::Launched(*(ulong64 *)(pFVar1 + 1),pwVar4,false,AnyNormalThreadNormalTask,0);
  local_28 = param_1->Reference;
  param_1->Reference = (FParallelForData_conflict *)0x0;
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
  local_28 = (FParallelForData_conflict *)0x0;
  (**(code **)(*(longlong *)&pFVar1->field_0x28 + 0x18))(&pFVar1->field_0x28,pFVar1);
  *(undefined ***)&pFVar1->field_0x28 =
       &LowLevelTasks::TTaskDelegate<LowLevelTasks::FTask_*___cdecl(bool),48>::
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint'::`2'::<lambda_2>,`ParallelForWithTaskContext<TransferValuesLocals::FTaskContext,TSizedDefaultAllocator<32>,`UE::Geometry::FTransferVertexColorAttribute::TransferUsingClosestPoint'::`2'::<lambda_2>_>'::`5'::<lambda_1>,TransferValuesLocals::FTaskContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
        ::_vftable_;
  *(FParallelForData_conflict **)pFVar1 = local_38;
  *(int *)&pFVar1->field_0x8 = local_30;
  pFVar1->field_0xc = local_2c;
  local_38 = (FParallelForData_conflict *)0x0;
  ~FParallelExecutor(&local_38);
  pFVar10 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar10 == (FTask *)0x0) {
    if (FVar7 == (FParallelForData_conflict)0x6) {
      FVar7 = (FParallelForData_conflict)0x1;
    }
  }
  else {
    if (FVar7 == (FParallelForData_conflict)0x6) {
      FVar7 = SUB81((ulonglong)*(undefined8 *)&pFVar10->field_0x38 >> 0x3b,0);
    }
    uVar13 = *(undefined8 *)&pFVar10->field_0x30;
  }
  *(undefined8 *)&pFVar1->field_0x30 = uVar13;
  *(ulonglong *)&pFVar1->field_0x38 =
       ((longlong)(char)FVar7 << 0x35 | (ulonglong)pwVar4 & 0x1fffffffffffff | 0xff00000000000000)
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

// ~FParallelExecutor @ 14c89a530

void __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l2::FComponentContext,`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l2::<lambda_3>_>'::__l2::<lambda_1>,`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l2::FComponentContext>'
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
                    /* WARNING: Could not recover jumptable at 0x00014c89a57c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 14c8b4f60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l2::FComponentContext,`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l2::<lambda_3>_>'::__l2::<lambda_1>,`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l2::FComponentContext>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  FParallelForData *pFVar2;
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
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::FComponentContext,_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::<lambda_3>_>(TArrayView<_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::FComponentContext,int>,int,int,_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::FComponentContext>(wchar_t_const_*,int,int,_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::FComponentContext,_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::<lambda_3>_>(TArrayView<_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::FComponentContext,int>,int,int,_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::FComponentContext,int>_const_&)_::_2_::FParallelForData>
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
  FInheritedContextScope local_88;
  ulonglong local_68;
  undefined1 auVar30 [16];
  
  local_68 = __security_cookie.value ^ (ulonglong)auStack_158;
  local_c0 = this;
  UE::FInheritedContextBase::RestoreInheritedContext
            ((FInheritedContextBase *)(*(longlong *)this + 0x10),&local_88);
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
    iVar28 = *(int *)(*(longlong *)this + 0x54);
    local_120 = iVar28;
    local_118 = uVar3;
    if (*(int *)(*(longlong *)this + 0x40) + 2 <= iVar28) {
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
          *(int *)(local_d8.Reference + 8) = *(int *)(local_d8.Reference + 8) + 1;
          UNLOCK();
        }
        local_124 = iVar28;
        LaunchTask(&local_d8,iVar26,true);
        local_120 = iVar28;
        local_118 = uVar3;
        if (local_d8.Reference != (FParallelForData *)0x0) {
          pFVar2 = local_d8.Reference + 8;
          LOCK();
          iVar26 = *(int *)pFVar2;
          *(int *)pFVar2 = *(int *)pFVar2 + -1;
          UNLOCK();
          if (((iVar26 == 1) && (pFVar2 != (FParallelForData *)0x0)) &&
             (local_d8.Reference != (FParallelForData *)0x0)) {
            local_124 = iVar28;
            (*(code *)**(undefined8 **)local_d8.Reference)(local_d8.Reference,1);
            local_120 = iVar28;
            local_118 = uVar3;
          }
        }
      }
    }
  }
  iVar28 = local_120;
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
  iVar26 = iVar28;
  iVar20 = local_10c;
  iVar24 = local_108;
  do {
    do {
      this_00 = local_a8;
      plVar11 = local_b0;
      plVar10 = local_c0;
      LOCK();
      piVar1 = (int *)(*(longlong *)this + 0x40);
      iVar25 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (((iVar28 < iVar20) && (iVar26 + -1 <= iVar25)) && (iVar25 = iVar26 + -1, !param_1))
      goto LAB_14c8b540f;
      iVar25 = iVar25 * iVar24;
      local_104 = iVar25;
      lVar12 = local_130;
      iVar28 = local_124;
      iVar26 = local_120;
      iVar27 = iVar20;
      if (iVar25 + iVar24 < iVar20) {
        iVar27 = iVar25 + iVar24;
      }
      for (; local_124 = iVar28, local_120 = iVar26, iVar25 < iVar27; iVar25 = iVar25 + 1) {
        uVar17 = *(uint *)(plVar10 + 1);
        iVar28 = (int)plVar11[1];
        local_130 = (longlong)iVar28;
        uVar16 = 0;
        if ((int)uVar17 < iVar28) {
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
        `UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l2::
        <lambda_3>::operator()
                  (this_00,(FComponentContext *)((longlong)(int)uVar17 * 0x10 + *plVar11),iVar25);
        lVar22 = local_c8;
        lVar23 = local_d0;
        this = local_c0;
        cVar21 = local_128;
        lVar12 = local_130;
        iVar28 = local_124;
        iVar26 = local_120;
        iVar20 = local_10c;
        iVar24 = local_108;
      }
      local_130 = lVar12;
      if (local_104 < iVar20) {
        LOCK();
        piVar1 = (int *)(*(longlong *)this + 0x44);
        iVar25 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar25 == 1) {
          if (!param_1) {
            (**(code **)(*(longlong *)**(undefined8 **)(*(longlong *)this + 0x68) + 0x10))();
          }
          bVar13 = true;
          goto LAB_14c8b5416;
        }
      }
      if (iVar20 <= iVar27) goto LAB_14c8b540f;
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
LAB_14c8b540f:
  bVar13 = false;
LAB_14c8b5416:
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
  FMetadataRestoreScope::~FMetadataRestoreScope(&local_88.MetaScope);
  FMemScope::~FMemScope(&local_88.MemScope);
  DestructItems<FLLMScope,int>((FLLMScope *)&local_88,local_88.LLMScopes.LLMScopes.ArrayNum);
  return bVar13;
}

// LaunchTask @ 14c902f30

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EQueuePreference": Some values do not have unique names */

void __cdecl
`ParallelForImpl::
ParallelForInternal<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l2::<lambda_3>,`ParallelForWithExistingTaskContext<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l2::FComponentContext,`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l2::<lambda_3>_>'::__l2::<lambda_1>,`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::__l2::FComponentContext>'
::__l2::FParallelExecutor::LaunchTask
          (TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::FComponentContext,_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::<lambda_3>_>(TArrayView<_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::FComponentContext,int>,int,int,_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::FComponentContext>(wchar_t_const_*,int,int,_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::<lambda_3>,_void___cdecl_ParallelForWithExistingTaskContext<_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::FComponentContext,_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::<lambda_3>_>(TArrayView<_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::FComponentContext,int>,int,int,_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::<lambda_3>_const_&,EParallelForFlags)_::_2_::<lambda_1>,EParallelForFlags,TArrayView<_public:_bool___cdecl_UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling(int,UE::Geometry::FPolygroupsGenerator::EWeightingType,UE::Math::TVector<double>,UE::Geometry::FPolygroupSet_*)_::_2_::FComponentContext,int>_const_&)_::_2_::FParallelForData>
           *param_1,int param_2,bool param_3)

{
  FTask *pFVar1;
  FParallelForData *pFVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  code *pcVar5;
  bool bVar6;
  FParallelForData FVar7;
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
  if (param_2 < *(int *)(pFVar2 + 0x80)) {
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
  lVar3 = *(longlong *)(pFVar2 + 0x78);
  pFVar1 = (FTask *)(lVar3 + (longlong)param_2 * 0x48);
  if (*(longlong *)(lVar3 + 0x40 + (longlong)param_2 * 0x48) != -1) {
    TaskTrace::Destroyed(*(ulong64 *)(pFVar1 + 1));
  }
  pwVar4 = *(wchar_t **)(param_1->Reference + 0x38);
  FVar7 = param_1->Reference[0x70];
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
        TTaskDelegateImpl<`LowLevelTasks::FTask::Init<`ParallelForImpl::ParallelForInternal<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::`2'::<lambda_3>,`ParallelForWithExistingTaskContext<`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::`2'::FComponentContext,`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::`2'::<lambda_3>_>'::`2'::<lambda_1>,`UE::Geometry::FPolygroupsGenerator::FindPolygroupsFromAreaDensityPointSampling'::`2'::FComponentContext>'::`2'::FParallelExecutor>'::`13'::<lambda_1>,0>
        ::_vftable_;
  *(FParallelForData **)pFVar1 = local_38;
  *(int *)&pFVar1->field_0x8 = local_30;
  pFVar1->field_0xc = local_2c;
  local_38 = (FParallelForData *)0x0;
  ~FParallelExecutor(&local_38);
  pFVar10 = LowLevelTasks::FTask::GetActiveTask();
  if (pFVar10 == (FTask *)0x0) {
    if (FVar7 == (FParallelForData)0x6) {
      FVar7 = (FParallelForData)0x1;
    }
  }
  else {
    if (FVar7 == (FParallelForData)0x6) {
      FVar7 = SUB81((ulonglong)*(undefined8 *)&pFVar10->field_0x38 >> 0x3b,0);
    }
    uVar13 = *(undefined8 *)&pFVar10->field_0x30;
  }
  *(undefined8 *)&pFVar1->field_0x30 = uVar13;
  *(ulonglong *)&pFVar1->field_0x38 =
       ((longlong)(char)FVar7 << 0x35 | (ulonglong)pwVar4 & 0x1fffffffffffff | 0xff00000000000000)
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

