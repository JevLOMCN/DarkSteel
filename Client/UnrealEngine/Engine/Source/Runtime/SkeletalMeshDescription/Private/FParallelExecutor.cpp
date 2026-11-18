// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SkeletalMeshDescription
// Functions: 8

// ~FParallelExecutor @ 144393aa0

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
ParallelForInternal<`UE::Impl::PoseMesh'::__l20::<lambda_1>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l20::<lambda_1>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
::__l2::FParallelExecutor::~FParallelExecutor(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)this != 0) && (*(char *)((longlong)this + 0xc) != '\0')) {
    ___02c0945b3e82fc612ce7d8f712de7352_(this,*(int *)((longlong)this + 8),true);
  }
  puVar3 = *(undefined8 **)this;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144393aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~FParallelExecutor @ 144393b00

/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::Impl::PoseMesh'::__l23::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l23::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
::__l2::FParallelExecutor::~FParallelExecutor(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)this != 0) && (*(char *)((longlong)this + 0xc) != '\0')) {
    ___1473f98ef73f8a2314cc5ba4292012ca_(this,*(int *)((longlong)this + 8),true);
  }
  puVar3 = *(undefined8 **)this;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144393b4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~FParallelExecutor @ 144393b60

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

void __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::Impl::UnposeMesh'::__l24::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l24::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
::__l2::FParallelExecutor::~FParallelExecutor(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)this != 0) && (*(char *)((longlong)this + 0xc) != '\0')) {
    ___09e39cb29449e999f0e4f3a566e675de_(this,*(int *)((longlong)this + 8),true);
  }
  puVar3 = *(undefined8 **)this;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144393bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// ~FParallelExecutor @ 144393bc0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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
ParallelForInternal<`UE::Impl::UnposeMesh'::__l27::<lambda_3>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l27::<lambda_3>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
::__l2::FParallelExecutor::~FParallelExecutor(void *this)

{
  int *piVar1;
  int iVar2;
  undefined8 *puVar3;
  
  if ((*(longlong *)this != 0) && (*(char *)((longlong)this + 0xc) != '\0')) {
    ___f3d19495511a35e83dc3d145e6103de0_(this,*(int *)((longlong)this + 8),true);
  }
  puVar3 = *(undefined8 **)this;
  if (puVar3 != (undefined8 *)0x0) {
    piVar1 = (int *)(puVar3 + 1);
    LOCK();
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (piVar1 != (int *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000144393c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar3)(puVar3,1);
      return;
    }
  }
  return;
}

// operator() @ 144399bb0

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
ParallelForInternal<`UE::Impl::PoseMesh'::__l20::<lambda_1>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l20::<lambda_1>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong64 uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  double dVar10;
  double dVar11;
  void *this_00;
  void *this_01;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  uint uVar15;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  FMorphProcessContext *pFVar18;
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
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::<lambda_1>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  local_c8;
  longlong local_c0;
  LARGE_INTEGER local_b8;
  void *local_b0;
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
        local_c8.Reference = *(FParallelForData **)this;
        if (local_c8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_c8.Reference)->field_0x8 = *(int *)&(local_c8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_114 = iVar26;
        ___02c0945b3e82fc612ce7d8f712de7352_(&local_c8,iVar24,true);
        local_110 = iVar26;
        local_108 = uVar4;
        if (local_c8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_c8.Reference)->field_0x8;
          LOCK();
          iVar24 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar24 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_c8.Reference != (FParallelForData *)0x0)) {
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
  local_b0 = *(void **)(lVar22 + 0x58);
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
      goto LAB_144399ffe;
      iVar27 = iVar27 * iVar23;
      iVar9 = iVar27;
      iVar26 = local_114;
      iVar24 = local_110;
      iVar25 = iVar19;
      if (iVar27 + iVar23 < iVar19) {
        iVar25 = iVar27 + iVar23;
      }
      for (; local_114 = iVar26, local_110 = iVar24, iVar9 < iVar25; iVar9 = iVar9 + 1) {
        pFVar18 = TArrayView<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,int>::operator[]
                            (this_00,*(int *)((longlong)this + 8));
        `UE::Impl::PoseMesh'::__l20::<lambda_1>::operator()(this_01,pFVar18,iVar9);
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
          goto LAB_14439a005;
        }
      }
      if (iVar19 <= iVar25) goto LAB_144399ffe;
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
LAB_144399ffe:
  bVar12 = false;
LAB_14439a005:
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

// operator() @ 14439a100

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::Impl::PoseMesh'::__l23::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::PoseMesh'::__l23::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::PoseMesh'::__l20::FMorphProcessContext>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong64 uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  double dVar10;
  double dVar11;
  void *this_00;
  void *this_01;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  uint uVar15;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  FMorphProcessContext *pFVar18;
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
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_23_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::PoseMesh(FMeshDescription_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&,bool)_::_20_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  local_c8;
  longlong local_c0;
  LARGE_INTEGER local_b8;
  void *local_b0;
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
        local_c8.Reference = *(FParallelForData **)this;
        if (local_c8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_c8.Reference)->field_0x8 = *(int *)&(local_c8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_114 = iVar26;
        ___1473f98ef73f8a2314cc5ba4292012ca_(&local_c8,iVar24,true);
        local_110 = iVar26;
        local_108 = uVar4;
        if (local_c8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_c8.Reference)->field_0x8;
          LOCK();
          iVar24 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar24 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_c8.Reference != (FParallelForData *)0x0)) {
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
  local_b0 = *(void **)(lVar22 + 0x58);
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
      goto LAB_14439a54e;
      iVar27 = iVar27 * iVar23;
      iVar9 = iVar27;
      iVar26 = local_114;
      iVar24 = local_110;
      iVar25 = iVar19;
      if (iVar27 + iVar23 < iVar19) {
        iVar25 = iVar27 + iVar23;
      }
      for (; local_114 = iVar26, local_110 = iVar24, iVar9 < iVar25; iVar9 = iVar9 + 1) {
        pFVar18 = TArrayView<`UE::Impl::PoseMesh'::__l20::FMorphProcessContext,int>::operator[]
                            (this_00,*(int *)((longlong)this + 8));
        `UE::Impl::PoseMesh'::__l23::<lambda_2>::operator()(this_01,pFVar18,iVar9);
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
          goto LAB_14439a555;
        }
      }
      if (iVar19 <= iVar25) goto LAB_14439a54e;
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
LAB_14439a54e:
  bVar12 = false;
LAB_14439a555:
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

// operator() @ 14439a650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "ETaskPriority": Some values do not have unique names */

bool __thiscall
`ParallelForImpl::
ParallelForInternal<`UE::Impl::UnposeMesh'::__l24::<lambda_2>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l24::<lambda_2>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong64 uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  double dVar10;
  double dVar11;
  void *this_00;
  void *this_01;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  uint uVar15;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  FMorphProcessContext *pFVar18;
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
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::<lambda_2>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  local_c8;
  longlong local_c0;
  LARGE_INTEGER local_b8;
  void *local_b0;
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
        local_c8.Reference = *(FParallelForData **)this;
        if (local_c8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_c8.Reference)->field_0x8 = *(int *)&(local_c8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_114 = iVar26;
        ___09e39cb29449e999f0e4f3a566e675de_(&local_c8,iVar24,true);
        local_110 = iVar26;
        local_108 = uVar4;
        if (local_c8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_c8.Reference)->field_0x8;
          LOCK();
          iVar24 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar24 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_c8.Reference != (FParallelForData *)0x0)) {
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
  local_b0 = *(void **)(lVar22 + 0x58);
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
      goto LAB_14439aa9e;
      iVar27 = iVar27 * iVar23;
      iVar9 = iVar27;
      iVar26 = local_114;
      iVar24 = local_110;
      iVar25 = iVar19;
      if (iVar27 + iVar23 < iVar19) {
        iVar25 = iVar27 + iVar23;
      }
      for (; local_114 = iVar26, local_110 = iVar24, iVar9 < iVar25; iVar9 = iVar9 + 1) {
        pFVar18 = TArrayView<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,int>::operator[]
                            (this_00,*(int *)((longlong)this + 8));
        `UE::Impl::UnposeMesh'::__l24::<lambda_2>::operator()(this_01,pFVar18,iVar9);
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
          goto LAB_14439aaa5;
        }
      }
      if (iVar19 <= iVar25) goto LAB_14439aa9e;
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
LAB_14439aa9e:
  bVar12 = false;
LAB_14439aaa5:
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

// operator() @ 14439aba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
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
ParallelForInternal<`UE::Impl::UnposeMesh'::__l27::<lambda_3>,`ParallelForWithTaskContext<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,TSizedDefaultAllocator<32>,`UE::Impl::UnposeMesh'::__l27::<lambda_3>_>'::__l5::<lambda_1>,`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext>'
::__l2::FParallelExecutor::operator()(void *this,bool param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong64 uVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  double dVar10;
  double dVar11;
  void *this_00;
  void *this_01;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  uint uVar15;
  uint *puVar16;
  FTlsAutoCleanup *pFVar17;
  FMorphProcessContext *pFVar18;
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
  TRefCountPtr<_void___cdecl_ParallelForImpl::ParallelForInternal<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext>(wchar_t_const_*,int,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>,_void___cdecl_ParallelForWithTaskContext<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_>(TArray<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,TSizedDefaultAllocator<32>_>_&,int,_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_27_::<lambda_3>_const_&,EParallelForFlags)_::_5_::<lambda_1>,EParallelForFlags,TArrayView<_void___cdecl_UE::Impl::UnposeMesh(FMeshDescription_&,FMeshDescription_const_&,TArrayView<UE::Math::TMatrix<float>_const_,int>,FName,TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>_const_&)_::_24_::FMorphProcessContext,int>_const_&)_::_2_::FParallelForData>
  local_c8;
  longlong local_c0;
  LARGE_INTEGER local_b8;
  void *local_b0;
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
        local_c8.Reference = *(FParallelForData **)this;
        if (local_c8.Reference != (FParallelForData *)0x0) {
          LOCK();
          *(int *)&(local_c8.Reference)->field_0x8 = *(int *)&(local_c8.Reference)->field_0x8 + 1;
          UNLOCK();
        }
        local_114 = iVar26;
        ___f3d19495511a35e83dc3d145e6103de0_(&local_c8,iVar24,true);
        local_110 = iVar26;
        local_108 = uVar4;
        if (local_c8.Reference != (FParallelForData *)0x0) {
          puVar2 = &(local_c8.Reference)->field_0x8;
          LOCK();
          iVar24 = *(int *)puVar2;
          *(int *)puVar2 = *(int *)puVar2 + -1;
          UNLOCK();
          if (((iVar24 == 1) && (puVar2 != (undefined1 *)0x0)) &&
             (local_c8.Reference != (FParallelForData *)0x0)) {
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
  local_b0 = *(void **)(lVar22 + 0x58);
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
      goto LAB_14439afee;
      iVar27 = iVar27 * iVar23;
      iVar9 = iVar27;
      iVar26 = local_114;
      iVar24 = local_110;
      iVar25 = iVar19;
      if (iVar27 + iVar23 < iVar19) {
        iVar25 = iVar27 + iVar23;
      }
      for (; local_114 = iVar26, local_110 = iVar24, iVar9 < iVar25; iVar9 = iVar9 + 1) {
        pFVar18 = TArrayView<`UE::Impl::UnposeMesh'::__l24::FMorphProcessContext,int>::operator[]
                            (this_00,*(int *)((longlong)this + 8));
        `UE::Impl::UnposeMesh'::__l27::<lambda_3>::operator()(this_01,pFVar18,iVar9);
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
          goto LAB_14439aff5;
        }
      }
      if (iVar19 <= iVar25) goto LAB_14439afee;
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
LAB_14439afee:
  bVar12 = false;
LAB_14439aff5:
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

