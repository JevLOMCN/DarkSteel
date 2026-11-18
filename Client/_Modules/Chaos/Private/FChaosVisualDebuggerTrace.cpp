// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 65

// TraceParticlesView<Chaos::TGeometryParticlesImp<double,3,0>_> @ 1437338c0

void __cdecl
FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TGeometryParticlesImp<double,3,0>_>
          (TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_> *param_1)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint *puVar5;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar6;
  undefined1 local_res10 [8];
  <lambda_1> local_res18 [8];
  <lambda_2> local_res20;
  code *local_38;
  undefined1 *local_30;
  <lambda_1> local_28;
  
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar5 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_30 = local_res10;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar5);
    pFVar6 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar6 == (FChaosVDContext *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2454937056523059895>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVisualDebuggerTrace.h"
                         ,0x2b7,"CVDContextData");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      local_28.CopyContext.OwnerID = pFVar6->OwnerID;
      local_28.CopyContext.Id = pFVar6->Id;
      local_28.CopyContext.Type = pFVar6->Type;
      local_28.CopyContext.Attributes = pFVar6->Attributes;
      local_28.CopyContext.CurrentDataChannel.Object = (pFVar6->CurrentDataChannel).Object;
      pTVar2 = (pFVar6->CurrentDataChannel).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        paVar1 = &pTVar2->SharedReferenceCount;
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      local_res20.Func = &local_28;
      local_28.CopyContext.CurrentDataChannel.SharedReferenceCount.ReferenceController = pTVar2;
      Chaos::
      ParticlesParallelFor<Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>,_Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>::ParallelFor<_FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TGeometryParticlesImp<double,3,0>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>::ParallelFor<_FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TGeometryParticlesImp<double,3,0>_>_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                (param_1,local_res18,&local_res20,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_28.CopyContext.CurrentDataChannel.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  return;
}

// TraceParticlesView<Chaos::TPBDRigidParticles<double,3>_> @ 1437339f0

void __cdecl
FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TPBDRigidParticles<double,3>_>
          (TParticleView<Chaos::TPBDRigidParticles<double,3>_> *param_1)

{
  atomic<int> *paVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint *puVar5;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar6;
  undefined1 local_res10 [8];
  <lambda_1> local_res18 [8];
  <lambda_2> local_res20;
  code *local_38;
  undefined1 *local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  FChaosVDOptionalDataChannel *local_18;
  TReferenceControllerBase<1> *local_10;
  
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar5 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_30 = local_res10;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar5);
    pFVar6 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar6 == (FChaosVDContext *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2454937056523059895>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVisualDebuggerTrace.h"
                         ,0x2b7,"CVDContextData");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else {
      local_28 = pFVar6->OwnerID;
      local_24 = pFVar6->Id;
      local_20 = pFVar6->Type;
      local_1c = pFVar6->Attributes;
      local_18 = (pFVar6->CurrentDataChannel).Object;
      pTVar2 = (pFVar6->CurrentDataChannel).SharedReferenceCount.ReferenceController;
      if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
        paVar1 = &pTVar2->SharedReferenceCount;
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
        LOCK();
        *paVar1 = (atomic<int>)((int)*paVar1 + 1);
        UNLOCK();
      }
      local_res20.Func = (<lambda_1> *)&local_28;
      local_10 = pTVar2;
      Chaos::
      ParticlesParallelFor<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,_Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<_FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TPBDRigidParticles<double,3>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<_FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TPBDRigidParticles<double,3>_>_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                (param_1,local_res18,&local_res20,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_10);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
    }
  }
  return;
}

// operator() @ 14374aa10

void __thiscall
`FChaosVisualDebuggerTrace::TraceCharacterGroundConstraints'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  FCharacterGroundConstraintHandle *pFVar2;
  TGeometryParticleHandleImp<double,3,1> *pTVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint *puVar7;
  FChaosVDThreadContext *pFVar8;
  TArrayView<unsigned_char_const_,int> *pTVar9;
  FTlsAutoCleanup *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FChaosVDScopedTLSBufferAccessor local_res20;
  code *local_288;
  undefined1 *local_280;
  code *local_278;
  undefined1 *local_270;
  code *local_268;
  undefined1 *local_260;
  TStringView<wchar_t> local_258;
  TArrayView<unsigned_char_const_,int> local_248;
  TArrayView<unsigned_char_const_,int> local_238;
  FChaosVDMemoryWriter local_228;
  FChaosVDCharacterGroundConstraint local_168;
  
  puVar7 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_280 = local_res10;
  local_288 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar8 = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_288,puVar7);
  FChaosVDThreadContext::PushContext(pFVar8,(FChaosVDContext *)((longlong)this + 8));
  plVar1 = *(longlong **)this;
  uVar6 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar6 = (uint)~param_1 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  pFVar2 = *(FCharacterGroundConstraintHandle **)(*plVar1 + (longlong)param_1 * 8);
  if (pFVar2 != (FCharacterGroundConstraintHandle *)0x0) {
    pTVar3 = pFVar2->GroundParticle;
    bVar5 = FChaosVisualDebuggerTrace::IsInRelevancyVolume(pFVar2->CharacterParticle);
    if (!bVar5) {
      bVar5 = FChaosVisualDebuggerTrace::IsInRelevancyVolume(pTVar3);
      if (!bVar5) goto LAB_14374abef;
    }
    FChaosVDDataWrapperUtils::BuildCharacterGroundConstraintDataWrapper(&local_168,pFVar2);
    local_168.SolverID = *(int *)((longlong)this + 0xc);
    FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_res20);
    Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
              (&local_228,local_res20.BufferRef,
               &FChaosVisualDebuggerTrace::SessionState.CVDNameTable);
    FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_228,true);
    FChaosVDCharacterGroundConstraint::Serialize(&local_168,(FArchive *)&local_228);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.NameTableInstance.SharedReferenceCount.ReferenceController);
    FArchive::~FArchive((FArchive *)&local_228);
    local_258 = FChaosVDCharacterGroundConstraint::WrapperTypeName;
    pTVar9 = TArrayView<unsigned_char_const_,int>::
             TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                       (&local_238,local_res20.BufferRef);
    local_248.DataPtr = pTVar9->DataPtr;
    local_248.ArrayNum = pTVar9->ArrayNum;
    local_248._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
    FChaosVisualDebuggerTrace::TraceBinaryData(&local_248,&local_258,None);
    (local_res20.BufferRef)->ArrayNum = 0;
    if ((local_res20.BufferRef)->ArrayMax < 0xffff) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0xffff,&(local_res20.BufferRef)->AllocatorInstance,0,
                 &(local_res20.BufferRef)->ArrayMax);
    }
    puVar7 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_270 = local_res8;
    local_278 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar10 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_278,puVar7);
    *(int *)(pFVar10 + 0x45) = *(int *)(pFVar10 + 0x45) + -1;
  }
LAB_14374abef:
  puVar7 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_260 = local_res18;
  local_268 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar8 = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_268,puVar7);
  FChaosVDThreadContext::PopContext(pFVar8);
  return;
}

// operator() @ 14374ac30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FChaosVisualDebuggerTrace::TraceCollisionConstraintView'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  FPBDCollisionConstraint *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint *puVar6;
  FChaosVDThreadContext *pFVar7;
  FChaosVDContext *pFVar8;
  TArrayView<unsigned_char_const_,int> *pTVar9;
  undefined1 auStackY_418 [32];
  undefined1 local_3e8;
  undefined1 local_3e7;
  undefined1 local_3e6 [6];
  FChaosVDScopedTLSBufferAccessor local_3e0;
  TGeometryParticleHandleImp<double,3,1> *local_3d8;
  TGeometryParticleHandleImp<double,3,1> *pTStack_3d0;
  code *local_3c8;
  undefined1 *local_3c0;
  code *local_3b8;
  undefined1 *local_3b0;
  code *local_3a8;
  undefined1 *local_3a0;
  TStringView<wchar_t> local_398;
  TArrayView<unsigned_char_const_,int> local_388;
  TArrayView<unsigned_char_const_,int> local_378;
  FChaosVDMemoryWriter local_368;
  FChaosVDConstraint local_2a8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_418;
  puVar6 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_3c0 = &local_3e8;
  local_3c8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar7 = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_3c8,puVar6);
  FChaosVDThreadContext::PushContext(pFVar7,(FChaosVDContext *)((longlong)this + 8));
  plVar1 = *(longlong **)this;
  uVar5 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar5 = (uint)~param_1 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0x14f,L"Array index out of bounds: %lld from an array of size %lld");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  pFVar2 = *(FPBDCollisionConstraint **)(*plVar1 + (longlong)param_1 * 8);
  if (FChaosVisualDebuggerTrace::SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar6 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_3b0 = &local_3e7;
    local_3b8 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar7 = (FChaosVDThreadContext *)
             FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_3b8,puVar6);
    pFVar8 = FChaosVDThreadContext::GetCurrentContext(pFVar7,Solver);
    if (pFVar8 == (FChaosVDContext *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if ((((pFVar8->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) &&
            (pFVar2 != (FPBDCollisionConstraint *)0x0)) {
      local_3d8 = pFVar2->Particle[0];
      pTStack_3d0 = pFVar2->Particle[1];
      bVar4 = FChaosVisualDebuggerTrace::IsInRelevancyVolume(local_3d8);
      if (!bVar4) {
        bVar4 = FChaosVisualDebuggerTrace::IsInRelevancyVolume(pTStack_3d0);
        if (!bVar4) goto LAB_14374ae74;
      }
      FChaosVDDataWrapperUtils::BuildConstraintDataWrapperFromConstraint(&local_2a8,pFVar2);
      local_2a8.SolverID = pFVar8->Id;
      FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_3e0);
      Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
                (&local_368,local_3e0.BufferRef,
                 &FChaosVisualDebuggerTrace::SessionState.CVDNameTable);
      FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_368,true);
      FChaosVDConstraint::Serialize(&local_2a8,(FArchive *)&local_368);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_368.NameTableInstance.SharedReferenceCount.ReferenceController);
      FArchive::~FArchive((FArchive *)&local_368);
      local_398 = FChaosVDConstraint::WrapperTypeName;
      pTVar9 = TArrayView<unsigned_char_const_,int>::
               TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                         (&local_378,local_3e0.BufferRef);
      local_388.DataPtr = pTVar9->DataPtr;
      local_388.ArrayNum = pTVar9->ArrayNum;
      local_388._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
      FChaosVisualDebuggerTrace::TraceBinaryData(&local_388,&local_398,None);
      FChaosVDScopedTLSBufferAccessor::~FChaosVDScopedTLSBufferAccessor(&local_3e0);
      if (local_2a8.ManifoldPoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.ManifoldPoints.AllocatorInstance.Data);
      }
      if (local_2a8.CollisionMargins.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2a8.CollisionMargins.AllocatorInstance.Data);
      }
    }
  }
LAB_14374ae74:
  puVar6 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_3a0 = local_3e6;
  local_3a8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar7 = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_3a8,puVar6);
  FChaosVDThreadContext::PopContext(pFVar7);
  return;
}

// operator() @ 14374aed0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`FChaosVisualDebuggerTrace::TraceJointsConstraints'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  longlong *plVar1;
  FPBDJointConstraintHandle *this_00;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  FChaosVDThreadContext *pFVar6;
  TArrayView<unsigned_char_const_,int> *pTVar7;
  FTlsAutoCleanup *pFVar8;
  undefined1 auStackY_558 [32];
  undefined1 local_528;
  undefined1 local_527;
  undefined1 local_526 [6];
  FChaosVDScopedTLSBufferAccessor local_520;
  code *local_518;
  undefined1 *local_510;
  TVector<Chaos::TGeometryParticleHandleImp<double,3,1>_*,2> local_508;
  code *local_4f8;
  undefined1 *local_4f0;
  code *local_4e8;
  undefined1 *local_4e0;
  TStringView<wchar_t> local_4d8;
  TArrayView<unsigned_char_const_,int> local_4c8;
  TArrayView<unsigned_char_const_,int> local_4b8;
  FChaosVDMemoryWriter local_4a8;
  FChaosVDJointConstraint local_3e8;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_558;
  puVar5 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_510 = &local_528;
  local_518 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar6 = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_518,puVar5);
  FChaosVDThreadContext::PushContext(pFVar6,(FChaosVDContext *)((longlong)this + 8));
  plVar1 = *(longlong **)this;
  uVar4 = 0;
  if (param_1 < (int)plVar1[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  this_00 = *(FPBDJointConstraintHandle **)(*plVar1 + (longlong)param_1 * 8);
  if (this_00 != (FPBDJointConstraintHandle *)0x0) {
    Chaos::FPBDJointConstraintHandle::GetConstrainedParticles(this_00,&local_508);
    bVar3 = FChaosVisualDebuggerTrace::IsInRelevancyVolume(local_508.V[0]);
    if (!bVar3) {
      bVar3 = FChaosVisualDebuggerTrace::IsInRelevancyVolume(local_508.V[1]);
      if (!bVar3) goto LAB_14374b0ab;
    }
    FChaosVDDataWrapperUtils::BuildJointDataWrapper(&local_3e8,this_00);
    local_3e8.SolverID = *(int *)((longlong)this + 0xc);
    FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_520);
    Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
              (&local_4a8,local_520.BufferRef,&FChaosVisualDebuggerTrace::SessionState.CVDNameTable)
    ;
    FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_4a8,true);
    FChaosVDJointConstraint::Serialize(&local_3e8,(FArchive *)&local_4a8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_4a8.NameTableInstance.SharedReferenceCount.ReferenceController);
    FArchive::~FArchive((FArchive *)&local_4a8);
    local_4d8 = FChaosVDJointConstraint::WrapperTypeName;
    pTVar7 = TArrayView<unsigned_char_const_,int>::
             TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                       (&local_4b8,local_520.BufferRef);
    local_4c8.DataPtr = pTVar7->DataPtr;
    local_4c8.ArrayNum = pTVar7->ArrayNum;
    local_4c8._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
    FChaosVisualDebuggerTrace::TraceBinaryData(&local_4c8,&local_4d8,None);
    (local_520.BufferRef)->ArrayNum = 0;
    if ((local_520.BufferRef)->ArrayMax < 0xffff) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0xffff,&(local_520.BufferRef)->AllocatorInstance,0,
                 &(local_520.BufferRef)->ArrayMax);
    }
    puVar5 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_4f0 = &local_527;
    local_4f8 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar8 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_4f8,puVar5);
    *(int *)(pFVar8 + 0x45) = *(int *)(pFVar8 + 0x45) + -1;
  }
LAB_14374b0ab:
  puVar5 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_4e0 = local_526;
  local_4e8 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar6 = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_4e8,puVar5);
  FChaosVDThreadContext::PopContext(pFVar6);
  return;
}

// operator() @ 14374b110

void __thiscall
`FChaosVisualDebuggerTrace::TraceParticles'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint *puVar5;
  FChaosVDThreadContext *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  code *local_38;
  undefined1 *local_30;
  code *local_28;
  undefined1 *local_20;
  
  puVar5 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_30 = local_res10;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar5);
  FChaosVDThreadContext::PushContext(pFVar6,(FChaosVDContext *)((longlong)this + 8));
  lVar1 = *(longlong *)this;
  uVar4 = 0;
  if (param_1 < *(int *)(lVar1 + 0x30)) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  FChaosVisualDebuggerTrace::TraceParticle
            (*(TGeometryParticleHandleImp<double,3,1> **)
              (*(longlong *)(lVar1 + 0x28) + (longlong)param_1 * 8),
             (FChaosVDContext *)((longlong)this + 8));
  puVar5 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_20 = local_res8;
  local_28 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_28,puVar5);
  FChaosVDThreadContext::PopContext(pFVar6);
  return;
}

// operator() @ 14374b200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`FChaosVisualDebuggerTrace::TraceSceneQueryStart'::__l2::<lambda_1>::operator()
          (void *this,TVector<double> *param_1,TQuat<double> *param_2)

{
  longlong *plVar1;
  bool bVar2;
  TAABB<double,3> *pTVar3;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  double local_98;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  plVar1 = *(longlong **)this;
  if (plVar1 == (longlong *)0x0) {
    local_98 = (param_1->field0_0x0)._s_0.Z;
    local_58 = (param_1->field0_0x0)._s_0.X;
    dStack_50 = (param_1->field0_0x0)._s_0.Y;
    if (FChaosVisualDebuggerTrace::SessionState.TraceRelevancyVolume.IsValid == '\0') {
      return true;
    }
  }
  else {
    local_78 = param_2->X;
    dStack_70 = param_2->Y;
    local_98 = (param_1->field0_0x0)._s_0.Z;
    local_58 = (param_1->field0_0x0)._s_0.X;
    dStack_50 = (param_1->field0_0x0)._s_0.Y;
    local_68 = param_2->Z;
    dStack_60 = param_2->W;
    uStack_40 = 0;
    local_38 = ___xmm_3ff00000000000003ff0000000000000;
    uStack_30 = _UNK_150689688;
    local_28 = ___xmm_00000000000000003ff0000000000000;
    uStack_20 = _UNK_150689518;
    if (FChaosVisualDebuggerTrace::SessionState.TraceRelevancyVolume.IsValid == '\0') {
      return true;
    }
    if (*(char *)((longlong)plVar1 + 0x16) != '\0') {
      local_48 = local_98;
      pTVar3 = (TAABB<double,3> *)(**(code **)(*plVar1 + 0x98))(plVar1,local_a8,&local_78);
      bVar2 = FChaosVisualDebuggerTrace::IsInRelevancyVolume(pTVar3);
      return bVar2;
    }
  }
  if (((((double)FChaosVisualDebuggerTrace::SessionState.TraceRelevancyVolume.Min.field0_0x0._0_8_
         <= local_58) &&
       (local_58 <=
        (double)FChaosVisualDebuggerTrace::SessionState.TraceRelevancyVolume.Max.field0_0x0._0_8_))
      && ((double)FChaosVisualDebuggerTrace::SessionState.TraceRelevancyVolume.Min.field0_0x0._8_8_
          <= dStack_50)) &&
     (((dStack_50 <=
        (double)FChaosVisualDebuggerTrace::SessionState.TraceRelevancyVolume.Max.field0_0x0._8_8_ &&
       ((double)FChaosVisualDebuggerTrace::SessionState.TraceRelevancyVolume.Min.field0_0x0._16_8_
        <= local_98)) &&
      (local_98 <=
       (double)FChaosVisualDebuggerTrace::SessionState.TraceRelevancyVolume.Max.field0_0x0._16_8_)))
     ) {
    return true;
  }
  return false;
}

// CanTraceDebugDrawShape @ 143759710

bool __cdecl FChaosVisualDebuggerTrace::CanTraceDebugDrawShape(int *param_1)

{
  int iVar1;
  uint *puVar2;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar3;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  puVar2 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  this = (FChaosVDThreadContext *)
         FThreadSingletonInitializer::Get
                   ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar2);
  pFVar3 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
  if (pFVar3 != (FChaosVDContext *)0x0) {
    if (((pFVar3->CurrentDataChannel).Object)->bIsEnabled == (atomic<bool>)0x0) {
      return false;
    }
    iVar1 = *param_1;
    if (iVar1 == -1) {
      iVar1 = pFVar3->Id;
    }
    *param_1 = iVar1;
  }
  return true;
}

// GetNameTableInstance @ 143791d90

TSharedRef<Chaos::VisualDebugger::FChaosVDSerializableNameTable,1> * __cdecl
FChaosVisualDebuggerTrace::GetNameTableInstance(void)

{
  return &SessionState.CVDNameTable;
}

// GetSolverID @ 143792cd0

int __cdecl FChaosVisualDebuggerTrace::GetSolverID(FPhysicsSolverBase *param_1)

{
  return (param_1->CVDContextData).Id;
}

// HandleRecordingStart @ 143794620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl FChaosVisualDebuggerTrace::HandleRecordingStart(void)

{
  code *pcVar1;
  bool bVar2;
  wchar_t *pwVar3;
  FChaosVDDataChannelsManager *this;
  undefined1 auStackY_1b8 [32];
  TArray<FString,TSizedDefaultAllocator<32>_> local_188;
  FString local_178;
  FScriptContainerElement *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  FScriptContainerElement *local_158;
  undefined8 uStack_150;
  undefined1 *local_148;
  longlong local_140;
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_1b8;
  Reset();
  local_178.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Data.ArrayNum = 0;
  local_178.Data.ArrayMax = 0;
  pwVar3 = FCommandLine::Get();
  bVar2 = FParse::Value(pwVar3,L"CVDDataChannelsOverride=",&local_178,false,(wchar_t **)0x0);
  if (bVar2) {
    local_188.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_188.ArrayNum = 0;
    local_188.ArrayMax = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,10,&local_188.AllocatorInstance,0,&local_188.ArrayMax);
    ::FString::ParseIntoArray(&local_178,&local_188,L",",true);
    iStack_160 = local_188.ArrayNum;
    local_168 = local_188.AllocatorInstance.Data;
    if (local_188.ArrayNum < 0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    uStack_150 = CONCAT44(uStack_15c,iStack_160);
    local_158 = local_168;
    if (4 < (byte)LogChaos._0_1_) {
      local_138._padding_ = 0;
      TStringConversion<TStringConvert<char,wchar_t>,128>::Init
                (&local_138,"FChaosVisualDebuggerTrace::OverrideDefaultEnabledDataChannels",0x3d,Yes
                );
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
      if ((void *)local_138._padding_ != (void *)0x0) {
        FMemory::Free((void *)local_138._padding_);
      }
    }
    this = Chaos::VisualDebugger::FChaosVDDataChannelsManager::Get();
    Chaos::VisualDebugger::FChaosVDDataChannelsManager::
    EnumerateChannels<_FChaosVisualDebuggerTrace::OverrideDefaultEnabledDataChannels_::__l2::<lambda_1>_>
              (this,(TArrayView<FString_const_,int> *)&local_158);
    DestructItems<FString,int>((FString *)local_188.AllocatorInstance.Data,local_188.ArrayNum);
    if (local_188.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_188.AllocatorInstance.Data);
    }
  }
  TraceArchiveHeader();
  if (-1 < ChaosVDChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDUsesAutoRTFMFields>
              ((TLogScope<0> *)&local_148);
    *local_148 = 0;
    *(undefined8 *)(local_140 + 0x28) = *(undefined8 *)(local_140 + 0x20);
  }
  LOCK();
  SessionState.bIsTracing = (atomic<bool>)0x1;
  UNLOCK();
  if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Data.AllocatorInstance.Data);
  }
  return;
}

// HandleRecordingStop @ 143794830

void __cdecl FChaosVisualDebuggerTrace::HandleRecordingStop(void)

{
  LOCK();
  SessionState.bIsTracing = (atomic<bool>)0x0;
  UNLOCK();
  Reset();
  return;
}

// InvalidateGeometryFromCache @ 143797190

void __cdecl FChaosVisualDebuggerTrace::InvalidateGeometryFromCache(FImplicitObject *param_1)

{
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    Chaos::VD::FCachedObjectTraceIDByPtr<unsigned_int>::
    RemoveCachedTraceObjectID<Chaos::FImplicitObject>(&SessionState.TracedGeometryHashCache,param_1)
    ;
    return;
  }
  return;
}

// InvalidateParticleMetadataFromCache @ 1437971c0

void __cdecl
FChaosVisualDebuggerTrace::InvalidateParticleMetadataFromCache
          (TGeometryParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  longlong lVar4;
  PSRWLOCK SRWLock;
  TGeometryParticleHandleImp<double,3,1> *local_res8;
  
  if (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    uVar3 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
            -0x7a143595;
    uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
    uVar3 = uVar3 >> 0x10 ^ uVar3;
    lVar4 = (ulonglong)(uVar3 & 0x1f) * 0x58;
    SRWLock = (PSRWLOCK)(&SessionState.ParticleMetadataIDsCache.CachedIDsByPtr.field_0x0 + lVar4);
    local_res8 = param_1;
    if ((SRWLock == (PSRWLOCK)0x0) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AcquireSRWLockExclusive(SRWLock);
    if (*(int *)(&SessionState.ParticleMetadataIDsCache.CachedIDsByPtr.field_0x10 + lVar4) !=
        *(int *)(&SessionState.ParticleMetadataIDsCache.CachedIDsByPtr.field_0x3c + lVar4)) {
      TSet<TTuple<void_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FDefaultSetAllocator>
      ::RemoveImpl<void_const_*>
                ((TSet<TTuple<void_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FDefaultSetAllocator>
                  *)(&SessionState.ParticleMetadataIDsCache.CachedIDsByPtr.field_0x8 + lVar4),uVar3,
                 &local_res8);
    }
    if (SRWLock != (PSRWLOCK)0x0) {
      ReleaseSRWLockExclusive(SRWLock);
    }
  }
  return;
}

// IsInRelevancyVolume @ 143797e40

bool __cdecl FChaosVisualDebuggerTrace::IsInRelevancyVolume(TAABB<double,3> *param_1)

{
  if (SessionState.TraceRelevancyVolume.IsValid != '\0') {
    if ((((*(double *)&param_1->MMax < SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.X) ||
         (SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.X < *(double *)&param_1->MMin)) ||
        (*(double *)&(param_1->MMax).field_0x8 <
         SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Y)) ||
       (((SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Y <
          *(double *)&(param_1->MMin).field_0x8 ||
         (*(double *)&(param_1->MMax).field_0x10 <
          SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Z)) ||
        (SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Z <
         *(double *)&(param_1->MMin).field_0x10)))) {
      return false;
    }
  }
  return true;
}

// IsInRelevancyVolume @ 143797ee0

bool __cdecl FChaosVisualDebuggerTrace::IsInRelevancyVolume(TVector<double,3> *param_1)

{
  if ((SessionState.TraceRelevancyVolume.IsValid != '\0') &&
     ((((*(double *)param_1 < SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.X ||
        (SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.X < *(double *)param_1)) ||
       (*(double *)&param_1->field_0x8 < SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Y))
      || (((SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Y < *(double *)&param_1->field_0x8
           || (*(double *)&param_1->field_0x10 <
               SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Z)) ||
          (SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Z < *(double *)&param_1->field_0x10
          )))))) {
    return false;
  }
  return true;
}

// IsInRelevancyVolume @ 143797f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FChaosVisualDebuggerTrace::IsInRelevancyVolume(TGeometryParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  FImplicitObject *pFVar3;
  TRigidTransform<double,3> *pTVar4;
  TAABB<double,3> *pTVar5;
  TVector<double,3> *pTVar6;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [48];
  TRigidTransform<double,3> local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_c8;
  if (param_1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
    bVar2 = false;
  }
  else if (SessionState.TraceRelevancyVolume.IsValid == '\0') {
    bVar2 = true;
  }
  else {
    pFVar3 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetGeometry(param_1);
    if ((pFVar3 == (FImplicitObject *)0x0) || (pFVar3->bHasBoundingBox == false)) {
      pTVar6 = Chaos::TParticles<double,3>::GetX
                         ((TParticles<double,3> *)param_1->_padding_,(int)param_1->_padding_);
      bVar2 = IsInRelevancyVolume(pTVar6);
    }
    else {
      pcVar1 = *(code **)(pFVar3->_padding_ + 0x98);
      pTVar4 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetTransformXR(param_1,&local_78);
      pTVar5 = (TAABB<double,3> *)(*pcVar1)(pFVar3,local_a8,pTVar4);
      bVar2 = IsInRelevancyVolume(pTVar5);
    }
  }
  return bVar2;
}

// IsInRelevancyVolume @ 143798010

bool __cdecl
FChaosVisualDebuggerTrace::IsInRelevancyVolume
          (FImplicitObject *param_1,TRigidTransform<double,3> *param_2)

{
  bool bVar1;
  TAABB<double,3> *pTVar2;
  undefined1 local_38 [56];
  
  if (param_1 == (FImplicitObject *)0x0) {
    return false;
  }
  if (SessionState.TraceRelevancyVolume.IsValid != '\0') {
    if (param_1->bHasBoundingBox != false) {
      pTVar2 = (TAABB<double,3> *)(**(code **)(param_1->_padding_ + 0x98))(param_1,local_38,param_2)
      ;
      bVar1 = IsInRelevancyVolume(pTVar2);
      return bVar1;
    }
    if (*(double *)&param_2->field_0x20 < SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.X) {
      return false;
    }
    if (SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.X < *(double *)&param_2->field_0x20) {
      return false;
    }
    if (*(double *)&param_2->field_0x28 < SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Y) {
      return false;
    }
    if (SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Y < *(double *)&param_2->field_0x28) {
      return false;
    }
    if (*(double *)&param_2->field_0x30 < SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Z) {
      return false;
    }
    if (SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Z < *(double *)&param_2->field_0x30) {
      return false;
    }
  }
  return true;
}

// IsTracing @ 1437983d0

bool __cdecl FChaosVisualDebuggerTrace::IsTracing(void)

{
  return (bool)SessionState.bIsTracing;
}

// OverrideDefaultEnabledDataChannels @ 14379af10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FChaosVisualDebuggerTrace::OverrideDefaultEnabledDataChannels
          (TArrayView<FString_const_,int> *param_1)

{
  FChaosVDDataChannelsManager *this;
  undefined1 auStack_158 [32];
  TStringConversion<TStringConvert<char,wchar_t>,128> local_138;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  if (4 < (byte)LogChaos._0_1_) {
    local_138._padding_ = 0;
    TStringConversion<TStringConvert<char,wchar_t>,128>::Init
              (&local_138,"FChaosVisualDebuggerTrace::OverrideDefaultEnabledDataChannels",0x3d,Yes);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    if ((void *)local_138._padding_ != (void *)0x0) {
      FMemory::Free((void *)local_138._padding_);
    }
  }
  this = Chaos::VisualDebugger::FChaosVDDataChannelsManager::Get();
  Chaos::VisualDebugger::FChaosVDDataChannelsManager::
  EnumerateChannels<_FChaosVisualDebuggerTrace::OverrideDefaultEnabledDataChannels_::__l2::<lambda_1>_>
            (this,(<lambda_1>)param_1);
  return;
}

// PerformFullCapture @ 14379b490

void __cdecl FChaosVisualDebuggerTrace::PerformFullCapture(EChaosVDFullCaptureFlags param_1)

{
  if ((param_1 & Particles) != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append<FDefaultSetAllocator>
              (&SessionState.RequestedFullCaptureSolverIDs,&SessionState.SolverIDsForDeltaRecording)
    ;
    ReleaseSRWLockExclusive((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
  }
  if ((param_1 & Geometry) != 0) {
    Chaos::VD::FCachedObjectTraceIDByPtr<unsigned_int>::Reset(&SessionState.TracedGeometryHashCache)
    ;
    return;
  }
  return;
}

// RegisterEventHandlers @ 1437a0970

void __cdecl FChaosVisualDebuggerTrace::RegisterEventHandlers(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  ulong64 local_res8;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_58;
  FDelegateAllocation local_50;
  FDestructionSentinel local_40;
  FDelegateAllocation *local_28;
  
  AcquireSRWLockExclusive((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
  if (SessionState.RecordingStartedDelegateHandle.ID == 0) {
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      puVar1[3] = HandleRecordingStart;
      *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Add
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FChaosVDRuntimeModule::RecordingStartedDelegate,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_res8);
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    SessionState.RecordingStartedDelegateHandle.ID = local_res8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  }
  if (SessionState.RecordingStoppedDelegateHandle.ID == 0) {
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      puVar1[3] = HandleRecordingStop;
      *puVar1 = &___7__TBaseStaticDelegateInstance___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Add
              ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy> *)
               &FChaosVDRuntimeModule::RecordingStopDelegate,
               (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)&local_res8);
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    SessionState.RecordingStoppedDelegateHandle.ID = local_res8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  }
  if (SessionState.RecordingFullCaptureRequestedHandle.ID == 0) {
    local_58.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_50.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
    local_50.DelegateSize = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_40);
    local_28 = &local_50;
    puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_50);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = &
                ___7__TCommonDelegateInstanceState___A6AXW4EChaosVDFullCaptureFlags___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      uVar2 = FDelegateHandle::GenerateNewID();
      puVar1[2] = uVar2;
      *puVar1 = &
                ___7__TBaseStaticDelegateInstance___A6AXW4EChaosVDFullCaptureFlags___ZUFDefaultDelegateUserPolicy____V__6B_
      ;
      puVar1[3] = PerformFullCapture;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    TMulticastDelegateRegistration<void___cdecl(enum_EChaosVDFullCaptureFlags),FDefaultDelegateUserPolicy>
    ::Add(&FChaosVDRuntimeModule::PerformFullCaptureDelegate,
          (TDelegate<void___cdecl(EChaosVDFullCaptureFlags),FDefaultDelegateUserPolicy> *)
          &local_res8);
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    SessionState.RecordingFullCaptureRequestedHandle.ID = local_res8;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              (&local_58,(FWriteAccessScope *)&local_40);
    if ((local_50.DelegateSize != 0) &&
       (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
      (*(code *)**(undefined8 **)local_50.DelegateAllocator)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                ((ForAnyElementType *)&local_50,0,0,0x10);
      local_50.DelegateSize = 0;
    }
    if (local_40.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_40.Accessor,&local_40);
    }
    if (local_50.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
      FMemory::Free((void *)local_50.DelegateAllocator);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_58.AccessDetector);
  }
                    /* WARNING: Could not recover jumptable at 0x0001437a0cfe. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
  return;
}

// RegisterExternalParticleDebugNameGenerator @ 1437a0d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FChaosVisualDebuggerTrace::RegisterExternalParticleDebugNameGenerator
          (TDelegate<FChaosVDParticleMetadata___cdecl(IPhysicsProxyBase_const_*,Chaos::TGeometryParticleHandleImp<double,3,1>_const_*),FDefaultDelegateUserPolicy>
           *param_1)

{
  longlong *plVar1;
  char cVar2;
  undefined1 local_38 [8];
  ForAnyElementType local_30;
  int local_28;
  FDestructionSentinel local_20;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&SessionState,
             (FReadAccessScope *)&local_20);
  if (((SessionState.ExternalParticleMetadataGenerator._16_4_ != 0) &&
      (SessionState.ExternalParticleMetadataGenerator._8_8_ != 0)) &&
     (cVar2 = (**(code **)(*(longlong *)SessionState.ExternalParticleMetadataGenerator._8_8_ + 0x38)
              )(), cVar2 != '\0')) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    if ((byte)LogChaos._0_1_ < 2) {
      return;
    }
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            ((FReadAccessScope *)&local_20);
  if ((FRecordingSessionState *)param_1 != &SessionState) {
    local_38 = (undefined1  [8])0x0;
    local_30.Data = (FScriptContainerElement *)0x0;
    local_28 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
               (FReadAccessScope *)&local_20);
    if ((*(int *)&param_1->field_0x10 != 0) &&
       (plVar1 = *(longlong **)&param_1->field_0x8, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x50))(plVar1,local_38);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              ((FReadAccessScope *)&local_20);
    TDelegateBase<FNotThreadSafeDelegateMode>::operator=
              ((TDelegateBase<FNotThreadSafeDelegateMode> *)&SessionState,
               (TDelegateBase<FNotThreadSafeDelegateMode> *)local_38);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_38,
               (FWriteAccessScope *)&local_20);
    if ((local_28 != 0) && (local_30.Data != (FScriptContainerElement *)0x0)) {
      (*(code *)**(undefined8 **)local_30.Data)();
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_30,0,0,0x10);
      local_28 = 0;
    }
    if (local_20.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_20.Accessor,&local_20);
    }
    if (local_30.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data);
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
              ((FMRSWRecursiveAccessDetector *)local_38);
  }
  return;
}

// Reset @ 1437a66f0

void __cdecl FChaosVisualDebuggerTrace::Reset(void)

{
  FPlatformRWLock *SRWLock;
  undefined1 *puVar1;
  int iVar2;
  code *pcVar3;
  FChaosVDSerializableNameTable *pFVar4;
  bool bVar5;
  FCachedObjectTraceIDByPtr<unsigned___int64> *SRWLock_00;
  TMap<unsigned___int64,FName,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>_>
  *this;
  
  pFVar4 = SessionState.CVDNameTable.Object;
  SRWLock = &(SessionState.CVDNameTable.Object)->NamesByIDLock;
  if ((SRWLock == (FPlatformRWLock *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Mutex",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                         ,0x43,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  AcquireSRWLockExclusive((PSRWLOCK)SRWLock);
  this = &pFVar4->NamesByID;
  bVar5 = 1 < *(int *)&(pFVar4->NamesByID).field_0x48;
  if (!bVar5) {
    TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
    ::UnhashElements((TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
                      *)this);
  }
  puVar1 = &(pFVar4->NamesByID).field_0xc;
  *(undefined4 *)&(pFVar4->NamesByID).field_0x8 = 0;
  if (*(int *)puVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,0,(ForAnyElementType *)this,0,(int *)puVar1);
  }
  *(undefined4 *)&(pFVar4->NamesByID).field_0x30 = 0xffffffff;
  *(undefined4 *)&(pFVar4->NamesByID).field_0x34 = 0;
  iVar2 = *(int *)&(pFVar4->NamesByID).field_0x2c;
  *(undefined4 *)&(pFVar4->NamesByID).field_0x28 = 0;
  if ((iVar2 < 0) || (0x80 < iVar2)) {
    *(undefined4 *)&(pFVar4->NamesByID).field_0x2c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)&(pFVar4->NamesByID).field_0x10,0);
  }
  if (bVar5) {
    *(undefined4 *)&(pFVar4->NamesByID).field_0x48 = 1;
    TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
    ::Rehash((TSet<TTuple<unsigned___int64,FName>,TDefaultMapHashableKeyFuncs<unsigned___int64,FName,0>,FDefaultSetAllocator>
              *)this);
  }
  if (SRWLock != (FPlatformRWLock *)0x0) {
    ReleaseSRWLockExclusive((PSRWLOCK)SRWLock);
  }
  SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Y = 0.0;
  SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Z = 0.0;
  SessionState.TraceRelevancyVolume.IsValid = '\0';
  SessionState.TraceRelevancyVolume.Pad[0] = '\0';
  SessionState.TraceRelevancyVolume.Pad[1] = '\0';
  SessionState.TraceRelevancyVolume.Pad[2] = '\0';
  SessionState.TraceRelevancyVolume.Pad[3] = '\0';
  SessionState.TraceRelevancyVolume.Pad[4] = '\0';
  SessionState.TraceRelevancyVolume.Pad[5] = '\0';
  SessionState.TraceRelevancyVolume.Pad[6] = '\0';
  SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.X = 0.0;
  SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Y = 0.0;
  SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Z = 0.0;
  SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.X = 0.0;
  AcquireSRWLockExclusive((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
  if (SessionState.RequestedFullCaptureSolverIDs.Elements._8_4_ !=
      SessionState.RequestedFullCaptureSolverIDs.Elements._52_4_) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
              (&SessionState.RequestedFullCaptureSolverIDs);
    SessionState.RequestedFullCaptureSolverIDs.Elements._8_4_ = 0;
    if ((int)SessionState.RequestedFullCaptureSolverIDs.Elements._12_4_ < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&SessionState.RequestedFullCaptureSolverIDs,0,
                 (int *)&SessionState.RequestedFullCaptureSolverIDs.Elements.field_0xc);
    }
    SessionState.RequestedFullCaptureSolverIDs.Elements._48_4_ = 0xffffffff;
    SessionState.RequestedFullCaptureSolverIDs.Elements._52_4_ = 0;
    SessionState.RequestedFullCaptureSolverIDs.Elements._40_4_ = 0;
  }
  if (SessionState.SolverIDsForDeltaRecording.Elements._8_4_ !=
      SessionState.SolverIDsForDeltaRecording.Elements._52_4_) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::UnhashElements
              (&SessionState.SolverIDsForDeltaRecording);
    SessionState.SolverIDsForDeltaRecording.Elements._8_4_ = 0;
    if ((int)SessionState.SolverIDsForDeltaRecording.Elements._12_4_ < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&SessionState.SolverIDsForDeltaRecording,0,
                 (int *)&SessionState.SolverIDsForDeltaRecording.Elements.field_0xc);
    }
    SessionState.SolverIDsForDeltaRecording.Elements._48_4_ = 0xffffffff;
    SessionState.SolverIDsForDeltaRecording.Elements._52_4_ = 0;
    SessionState.SolverIDsForDeltaRecording.Elements._40_4_ = 0;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
  Chaos::VD::FCachedObjectTraceIDByPtr<unsigned_int>::Reset(&SessionState.TracedGeometryHashCache);
  SRWLock_00 = &SessionState.ParticleMetadataIDsCache;
  do {
    if ((SRWLock_00 == (FCachedObjectTraceIDByPtr<unsigned___int64> *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Mutex",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeRWLock.h"
                           ,0x43,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AcquireSRWLockExclusive((PSRWLOCK)SRWLock_00);
    TSet<TTuple<void_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FDefaultSetAllocator>
    ::Reset((TSet<TTuple<void_const_*,unsigned___int64>,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FDefaultSetAllocator>
             *)&(SRWLock_00->CachedIDsByPtr).field_0x8);
    if (SRWLock_00 != (FCachedObjectTraceIDByPtr<unsigned___int64> *)0x0) {
      ReleaseSRWLockExclusive((PSRWLOCK)SRWLock_00);
    }
    SRWLock_00 = (FCachedObjectTraceIDByPtr<unsigned___int64> *)
                 &(SRWLock_00->CachedIDsByPtr).field_0x58;
  } while (SRWLock_00 !=
           (FCachedObjectTraceIDByPtr<unsigned___int64> *)&SessionState.DeltaRecordingStatesLock);
  return;
}

// SetTraceRelevancyVolume @ 1437b0500

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FChaosVisualDebuggerTrace::SetTraceRelevancyVolume(TBox<double> *param_1)

{
  undefined1 auStack_48 [40];
  double *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.X =
       (double)*(undefined8 *)&(param_1->Min).field0_0x0;
  SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Y =
       *(double *)((longlong)&(param_1->Min).field0_0x0 + 8);
  SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Z =
       *(double *)((longlong)&(param_1->Min).field0_0x0 + 0x10);
  SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.X =
       (double)*(undefined8 *)&(param_1->Max).field0_0x0;
  SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Y =
       *(double *)((longlong)&(param_1->Max).field0_0x0 + 8);
  SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Z =
       *(double *)((longlong)&(param_1->Max).field0_0x0 + 0x10);
  SessionState.TraceRelevancyVolume.IsValid = param_1->IsValid;
  SessionState.TraceRelevancyVolume.Pad[0] = param_1->Pad[0];
  SessionState.TraceRelevancyVolume.Pad[1] = param_1->Pad[1];
  SessionState.TraceRelevancyVolume.Pad[2] = param_1->Pad[2];
  SessionState.TraceRelevancyVolume.Pad[3] = param_1->Pad[3];
  SessionState.TraceRelevancyVolume.Pad[4] = param_1->Pad[4];
  SessionState.TraceRelevancyVolume.Pad[5] = param_1->Pad[5];
  SessionState.TraceRelevancyVolume.Pad[6] = param_1->Pad[6];
  if (-1 < ChaosVDChannel->Enabled) {
    UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDTraceRelevancyVolumeFields>
              ((TLogScope<0> *)&local_20);
    *local_20 = (param_1->Min).field0_0x0._s_0.X;
    local_20[1] = (param_1->Min).field0_0x0._s_0.Y;
    local_20[2] = (param_1->Min).field0_0x0._s_0.Z;
    local_20[3] = (param_1->Max).field0_0x0._s_0.X;
    local_20[4] = (param_1->Max).field0_0x0._s_0.Y;
    local_20[5] = (param_1->Max).field0_0x0._s_0.Z;
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// SetupForFullCaptureIfNeeded @ 1437b0880

void __cdecl FChaosVisualDebuggerTrace::SetupForFullCaptureIfNeeded(int param_1,bool *param_2)

{
  int iVar1;
  bool bVar2;
  ForElementType<FSetElementId> FVar3;
  int local_res8 [2];
  
  AcquireSRWLockShared((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
  if (SessionState.RequestedFullCaptureSolverIDs.Elements._8_4_ !=
      SessionState.RequestedFullCaptureSolverIDs.Elements._52_4_) {
    FVar3 = (ForElementType<FSetElementId>)0x15506bc08;
    if (SessionState.RequestedFullCaptureSolverIDs.Hash.SecondaryData !=
        (ForElementType<FSetElementId>)0x0) {
      FVar3 = SessionState.RequestedFullCaptureSolverIDs.Hash.SecondaryData;
    }
    for (iVar1 = *(int *)((longlong)FVar3 +
                         (ulonglong)
                         (SessionState.RequestedFullCaptureSolverIDs.HashSize - 1U & param_1) * 4);
        iVar1 != -1;
        iVar1 = *(int *)(SessionState.RequestedFullCaptureSolverIDs.Elements._0_8_ + 4 +
                        (longlong)iVar1 * 0xc)) {
      if (*(int *)(SessionState.RequestedFullCaptureSolverIDs.Elements._0_8_ + (longlong)iVar1 * 0xc
                  ) == param_1) goto LAB_1437b0949;
    }
  }
  if (SessionState.SolverIDsForDeltaRecording.Elements._8_4_ !=
      SessionState.SolverIDsForDeltaRecording.Elements._52_4_) {
    FVar3 = (ForElementType<FSetElementId>)0x15506bbb8;
    if (SessionState.SolverIDsForDeltaRecording.Hash.SecondaryData !=
        (ForElementType<FSetElementId>)0x0) {
      FVar3 = SessionState.SolverIDsForDeltaRecording.Hash.SecondaryData;
    }
    for (iVar1 = *(int *)((longlong)FVar3 +
                         (ulonglong)
                         (SessionState.SolverIDsForDeltaRecording.HashSize - 1U & param_1) * 4);
        iVar1 != -1;
        iVar1 = *(int *)(SessionState.SolverIDsForDeltaRecording.Elements._0_8_ + 4 +
                        (longlong)iVar1 * 0xc)) {
      if (*(int *)(SessionState.SolverIDsForDeltaRecording.Elements._0_8_ + (longlong)iVar1 * 0xc)
          == param_1) {
        bVar2 = false;
        goto LAB_1437b094b;
      }
    }
  }
LAB_1437b0949:
  bVar2 = true;
LAB_1437b094b:
  *param_2 = bVar2;
  ReleaseSRWLockShared((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
  if (*param_2 != false) {
    AcquireSRWLockExclusive((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
    if (SessionState.SolverIDsForDeltaRecording.Elements._8_4_ !=
        SessionState.SolverIDsForDeltaRecording.Elements._52_4_) {
      local_res8[0] = param_1;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                (&SessionState.SolverIDsForDeltaRecording,param_1,local_res8);
    }
    local_res8[0] = param_1;
    if (SessionState.RequestedFullCaptureSolverIDs.Elements._8_4_ !=
        SessionState.RequestedFullCaptureSolverIDs.Elements._52_4_) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                (&SessionState.RequestedFullCaptureSolverIDs,param_1,local_res8);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
  }
  return;
}

// ShouldPerformFullCapture @ 1437b0cc0

bool __cdecl FChaosVisualDebuggerTrace::ShouldPerformFullCapture(int param_1)

{
  int iVar1;
  longlong lVar2;
  ForElementType<FSetElementId> FVar3;
  
  AcquireSRWLockShared((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
  if (SessionState.SolverIDsForDeltaRecording.Elements._8_4_ !=
      SessionState.SolverIDsForDeltaRecording.Elements._52_4_) {
    FVar3 = (ForElementType<FSetElementId>)0x15506bbb8;
    if (SessionState.SolverIDsForDeltaRecording.Hash.SecondaryData !=
        (ForElementType<FSetElementId>)0x0) {
      FVar3 = SessionState.SolverIDsForDeltaRecording.Hash.SecondaryData;
    }
    iVar1 = *(int *)((longlong)FVar3 +
                    (ulonglong)(SessionState.SolverIDsForDeltaRecording.HashSize - 1U & param_1) * 4
                    );
    while (iVar1 != -1) {
      lVar2 = SessionState.SolverIDsForDeltaRecording.Elements._0_8_ + (longlong)iVar1 * 0xc;
      if (*(int *)(SessionState.SolverIDsForDeltaRecording.Elements._0_8_ + (longlong)iVar1 * 0xc)
          == param_1) goto LAB_1437b0d39;
      iVar1 = *(int *)(lVar2 + 4);
    }
  }
  lVar2 = 0;
LAB_1437b0d39:
  ReleaseSRWLockShared((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
  return lVar2 == 0;
}

// TraceArchiveHeader @ 1437b26e0

/* WARNING: Enum "ECustomVersionSerializationFormat": Some values do not have unique names */

void __cdecl FChaosVisualDebuggerTrace::TraceArchiveHeader(void)

{
  code *pcVar1;
  TStringView<wchar_t> TVar2;
  int iVar3;
  bool bVar4;
  FEngineVersion *pFVar5;
  FCustomVersionContainer *pFVar6;
  ECustomVersionSerializationFormat local_res8 [8];
  undefined8 local_res10;
  FEngineVersion local_148;
  FCustomVersionContainer local_128;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_118;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  TMemoryWriterBase<TSizedDefaultAllocator<32>_> local_f8;
  FCustomVersionContainer local_48;
  TStringView<wchar_t> local_38;
  TArrayView<unsigned_char_const_,int> local_28 [2];
  
  local_118.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_118.ArrayNum = 0;
  local_118.ArrayMax = 0;
  local_res10 = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  local_f8._padding_ = 0;
  FArchiveState::FArchiveState((FArchiveState *)&local_f8);
  local_f8._padding_ = 0;
  local_f8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_f8.Bytes = &local_118;
  local_f8.ArchiveName.ComparisonIndex.Value = 0;
  local_f8.ArchiveName.Number = 0;
  FArchiveState::SetIsSaving((FArchiveState *)&local_f8,true);
  (**(code **)(local_f8._padding_ + 0x108))(&local_f8,0);
  local_f8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  local_148._padding_ = (ulonglong)local_148._padding_._6_2_ << 0x30;
  local_148._padding_._0_4_ = 0;
  local_148.Branch.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_148.Branch.Data.ArrayNum = 0;
  local_148.Branch.Data.ArrayMax = 0;
  local_128.Versions.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_128.Versions.ArrayNum = 0;
  local_128.Versions.ArrayMax = 0;
  pFVar5 = FEngineVersion::Current();
  local_148._padding_ = pFVar5->_padding_;
  local_148._padding_._0_4_ = (undefined4)pFVar5->_padding_;
  ::FString::operator=(&local_148.Branch,&pFVar5->Branch);
  pFVar6 = FCurrentCustomVersions::GetAll(&local_48);
  if (&local_128 != pFVar6) {
    if (local_128.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_128.Versions.AllocatorInstance.Data);
    }
    local_128.Versions.AllocatorInstance.Data = (pFVar6->Versions).AllocatorInstance.Data;
    (pFVar6->Versions).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_128.Versions.ArrayNum = (pFVar6->Versions).ArrayNum;
    local_128.Versions.ArrayMax = (pFVar6->Versions).ArrayMax;
    (pFVar6->Versions).ArrayNum = 0;
    (pFVar6->Versions).ArrayMax = 0;
  }
  if (local_48.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Versions.AllocatorInstance.Data);
  }
  ::operator<<((FArchive *)&local_f8,&local_148);
  local_res8[0] = Latest;
  if (*(ECustomVersionSerializationFormat **)(local_f8._padding_ + 8) <
      *(ECustomVersionSerializationFormat **)local_f8._padding_ + 1) {
    if (*(code **)(local_f8._padding_ + 0x188) ==
        TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize) {
      TMemoryWriterBase<TSizedDefaultAllocator<32>_>::Serialize(&local_f8,local_res8,1);
    }
    else {
      (**(code **)(local_f8._padding_ + 0x188))();
    }
  }
  else {
    local_res8[0] = **(ECustomVersionSerializationFormat **)local_f8._padding_;
    *(longlong *)local_f8._padding_ = *(longlong *)local_f8._padding_ + 1;
  }
  FCustomVersionContainer::Serialize(&local_128,(FArchive *)&local_f8,local_res8[0]);
  if (local_128.Versions.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_128.Versions.AllocatorInstance.Data);
  }
  if (local_148.Branch.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_148.Branch.Data.AllocatorInstance.Data);
  }
  TVar2 = Chaos::VisualDebugger::FChaosVDArchiveHeader::WrapperTypeName;
  iVar3 = local_118.ArrayNum;
  local_108 = local_118.AllocatorInstance.Data;
  if (local_118.ArrayNum < 0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iStack_100 = iVar3;
  local_28[0]._12_4_ = uStack_fc;
  local_28[0].ArrayNum = iVar3;
  local_28[0].DataPtr = (uchar *)local_108;
  local_38 = TVar2;
  TraceBinaryData(local_28,&local_38,ForceTrace);
  FArchive::~FArchive((FArchive *)&local_f8);
  if (local_118.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_118.AllocatorInstance.Data);
  }
  return;
}

// TraceBinaryData @ 1437b2950

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FChaosVisualDebuggerTrace::TraceBinaryData
          (TArrayView<unsigned_char_const_,int> *param_1,TStringView<wchar_t> *param_2,
          EChaosVDTraceBinaryDataOptions param_3)

{
  wchar_t *pwVar1;
  longlong *plVar2;
  wchar_t wVar3;
  DWORD DVar4;
  wchar_t *pwVar5;
  longlong lVar6;
  code *pcVar7;
  atomic<int> aVar8;
  atomic<int> aVar9;
  void *pvVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined1 auStackY_f8 [32];
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_c0;
  LARGE_INTEGER local_b0;
  LARGE_INTEGER local_a8;
  LARGE_INTEGER local_a0;
  undefined8 local_98;
  uint uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  LARGE_INTEGER *local_78;
  longlong local_70;
  LARGE_INTEGER *local_68;
  longlong local_60;
  LARGE_INTEGER *local_58;
  longlong local_50;
  ulonglong local_48;
  
  aVar9 = LastDataID;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  if ((SessionState.bIsTracing != (atomic<bool>)0x0) || ((param_3 & ForceTrace) != None)) {
    LOCK();
    aVar8 = (atomic<int>)((int)LastDataID + 1);
    UNLOCK();
    bVar11 = 0x7ffffffe < (int)LastDataID;
    LastDataID = aVar8;
    if ((bVar11) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_1357626835709459741>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosVisualDebugger\\ChaosVisualDebuggerTrace.cpp"
                            ,0x2e3,"DataID < TNumericLimits<int32>::Max()"), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    bVar11 = Chaos::VisualDebugger::Cvars::bCompressBinaryData;
    local_88 = *(undefined4 *)&param_1->DataPtr;
    uStack_84 = *(undefined4 *)((longlong)&param_1->DataPtr + 4);
    uVar17 = param_1->ArrayNum;
    uStack_7c = *(undefined4 *)&param_1->field_0xc;
    uVar18 = 0;
    local_c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_c0.ArrayNum = 0;
    local_c0.ArrayMax = 0;
    if (Chaos::VisualDebugger::Cvars::bCompressBinaryData != false) {
      uStack_80 = uVar17;
      FOodleCompressedArray::CompressData
                (&local_c0,param_1->DataPtr,param_1->ArrayNum,Kraken,
                 (ECompressionLevel)Chaos::VisualDebugger::Cvars::CompressionMode);
      uVar17 = local_c0.ArrayNum;
      local_98 = local_c0.AllocatorInstance.Data;
      if ((local_c0.ArrayNum < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uStack_90 = uVar17;
      local_88 = (undefined4)local_98;
      uStack_84 = local_98._4_4_;
      uStack_7c = uStack_8c;
    }
    uVar20 = (uVar17 + 0xfffe) / 0xffff;
    uStack_80 = uVar17;
    if (-1 < ChaosVDChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDBinaryDataStartFields>
                ((TLogScope<1> *)&local_78);
      QueryPerformanceCounter(&local_b0);
      iVar19 = param_2->Size;
      pwVar5 = param_2->DataPtr;
      *local_78 = local_b0;
      if (iVar19 < 0) {
        iVar19 = 0;
        wVar3 = *pwVar5;
        pwVar1 = pwVar5;
        while (wVar3 != L'\0') {
          pwVar1 = pwVar1 + 1;
          iVar19 = iVar19 + 1;
          wVar3 = *pwVar1;
        }
      }
      UE::Trace::Private::Field_WriteStringWide(1,pwVar5,iVar19);
      uVar16 = (ulonglong)_tls_index;
      local_78[1].s.LowPart = (DWORD)aVar9;
      DVar4 = param_1->ArrayNum;
      *(uint *)((longlong)local_78 + 0xc) = uVar17;
      local_78[2].s.LowPart = DVar4;
      pvVar10 = ThreadLocalStoragePointer;
      *(bool *)((longlong)local_78 + 0x14) = bVar11;
      lVar6 = *(longlong *)((longlong)pvVar10 + uVar16 * 8);
      if (*(char *)(lVar6 + 0x9d48) == '\0') {
        __dyn_tls_on_demand_init();
      }
      lVar6 = *(longlong *)(lVar6 + 0x20);
      **(undefined1 **)(lVar6 + 0x20) = 6;
      lVar14 = *(longlong *)(lVar6 + 0x20) + 1;
      *(longlong *)(lVar6 + 0x20) = lVar14;
      if (lVar6 != local_70) {
        *(longlong *)(lVar6 + 0x28) = lVar14;
      }
      *(undefined8 *)(local_70 + 0x28) = *(undefined8 *)(local_70 + 0x20);
    }
    if (uVar20 != 0) {
      lVar6 = CONCAT44(uStack_84,local_88);
      plVar2 = (longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
      do {
        uVar13 = 0xffff;
        if (uVar17 < 0xffff) {
          uVar13 = uVar17 & 0xffff;
        }
        if (-1 < ChaosVDChannel->Enabled) {
          UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDBinaryDataContentFields>
                    ((TLogScope<1> *)&local_68);
          QueryPerformanceCounter(&local_a8);
          *local_68 = local_a8;
          local_68[1].s.LowPart = (DWORD)aVar9;
          UE::Trace::Private::Field_WriteAuxData
                    (2,(uchar *)((ulonglong)(uVar18 * 0xffff) + lVar6),uVar13);
          lVar14 = *plVar2;
          if (*(char *)(lVar14 + 0x9d48) == '\0') {
            __dyn_tls_on_demand_init();
          }
          lVar14 = *(longlong *)(lVar14 + 0x20);
          **(undefined1 **)(lVar14 + 0x20) = 6;
          lVar15 = *(longlong *)(lVar14 + 0x20) + 1;
          *(longlong *)(lVar14 + 0x20) = lVar15;
          if (lVar14 != local_60) {
            *(longlong *)(lVar14 + 0x28) = lVar15;
          }
          *(undefined8 *)(local_60 + 0x28) = *(undefined8 *)(local_60 + 0x20);
        }
        uVar17 = uVar17 - uVar13;
        uVar18 = uVar18 + 1;
      } while (uVar18 < uVar20);
    }
    if ((uVar17 != 0) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_1357626835709459699>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosVisualDebugger\\ChaosVisualDebuggerTrace.cpp"
                            ,0x30d,"RemainingSize == 0"), bVar11)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    if (local_c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_c0.AllocatorInstance.Data);
    }
    if (-1 < ChaosVDChannel->Enabled) {
      UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDBinaryDataEndFields>
                ((TLogScope<0> *)&local_58);
      QueryPerformanceCounter(&local_a0);
      *local_58 = local_a0;
      local_58[1].s.LowPart = (DWORD)aVar9;
      *(undefined8 *)(local_50 + 0x28) = *(undefined8 *)(local_50 + 0x20);
    }
  }
  return;
}

// TraceCharacterGroundConstraints @ 1437b2d20

void __cdecl
FChaosVisualDebuggerTrace::TraceCharacterGroundConstraints
          (FCharacterGroundConstraintContainer *param_1)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint *puVar5;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar6;
  <lambda_1> local_res10 [8];
  FScriptContainerElement *local_78;
  int local_70;
  code *local_68;
  <lambda_1> *local_60;
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  undefined8 **local_40;
  FScriptContainerElement **local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  FChaosVDOptionalDataChannel *local_20;
  TReferenceControllerBase<1> *local_18;
  
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar5 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_60 = local_res10;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,puVar5);
    pFVar6 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar6 == (FChaosVDContext *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (((pFVar6->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) {
      pFVar2 = (param_1->Constraints).AllocatorInstance.Data;
      iVar1 = (param_1->Constraints).ArrayNum;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      local_38 = &local_78;
      local_30 = pFVar6->OwnerID;
      local_2c = pFVar6->Id;
      local_28 = pFVar6->Type;
      local_24 = pFVar6->Attributes;
      local_20 = (pFVar6->CurrentDataChannel).Object;
      local_18 = (pFVar6->CurrentDataChannel).SharedReferenceCount.ReferenceController;
      if (local_18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FChaosVisualDebuggerTrace::TraceCharacterGroundConstraints'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_40 = &local_38;
      local_58.DataPtr = (void **)0x0;
      local_58.ArrayNum = 0;
      local_78 = pFVar2;
      local_70 = iVar1;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)&local_48,
                 local_res10[0],None,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return;
}

// TraceCollisionConstraint @ 1437b2f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FChaosVisualDebuggerTrace::TraceCollisionConstraint(FPBDCollisionConstraint *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  undefined1 auStackY_3e8 [32];
  undefined1 local_3b8 [8];
  FChaosVDScopedTLSBufferAccessor local_3b0;
  TGeometryParticleHandleImp<double,3,1> *local_3a8;
  TGeometryParticleHandleImp<double,3,1> *pTStack_3a0;
  code *local_398;
  undefined1 *local_390;
  TStringView<wchar_t> local_388;
  TArrayView<unsigned_char_const_,int> local_378;
  TArrayView<unsigned_char_const_,int> local_368;
  FChaosVDMemoryWriter local_358;
  FChaosVDConstraint local_298;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar3 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_390 = local_3b8;
    local_398 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_398,puVar3);
    pFVar4 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar4 == (FChaosVDContext *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if ((((pFVar4->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) &&
            (param_1 != (FPBDCollisionConstraint *)0x0)) {
      local_3a8 = param_1->Particle[0];
      pTStack_3a0 = param_1->Particle[1];
      bVar2 = IsInRelevancyVolume(local_3a8);
      if ((bVar2) || (bVar2 = IsInRelevancyVolume(pTStack_3a0), bVar2)) {
        FChaosVDDataWrapperUtils::BuildConstraintDataWrapperFromConstraint(&local_298,param_1);
        local_298.SolverID = pFVar4->Id;
        FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_3b0);
        Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
                  (&local_358,local_3b0.BufferRef,&SessionState.CVDNameTable);
        FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_358,true);
        FChaosVDConstraint::Serialize(&local_298,(FArchive *)&local_358);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_358.NameTableInstance.SharedReferenceCount.ReferenceController);
        FArchive::~FArchive((FArchive *)&local_358);
        local_388 = FChaosVDConstraint::WrapperTypeName;
        pTVar5 = TArrayView<unsigned_char_const_,int>::
                 TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                           (&local_368,local_3b0.BufferRef);
        local_378.DataPtr = pTVar5->DataPtr;
        local_378.ArrayNum = pTVar5->ArrayNum;
        local_378._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
        TraceBinaryData(&local_378,&local_388,None);
        FChaosVDScopedTLSBufferAccessor::~FChaosVDScopedTLSBufferAccessor(&local_3b0);
        if (local_298.ManifoldPoints.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.ManifoldPoints.AllocatorInstance.Data);
        }
        if (local_298.CollisionMargins.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_298.CollisionMargins.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// TraceCollisionConstraintView @ 1437b3100

void __cdecl
FChaosVisualDebuggerTrace::TraceCollisionConstraintView
          (TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar4;
  <lambda_1> local_res10 [24];
  code *local_68;
  <lambda_1> *local_60;
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> **local_40;
  TArrayView<Chaos::FPBDCollisionConstraint_*_const,int> *local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  FChaosVDOptionalDataChannel *local_20;
  TReferenceControllerBase<1> *local_18;
  
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar3 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_60 = local_res10;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,puVar3);
    pFVar4 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar4 == (FChaosVDContext *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (((pFVar4->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) {
      local_30 = pFVar4->OwnerID;
      local_2c = pFVar4->Id;
      local_28 = pFVar4->Type;
      local_24 = pFVar4->Attributes;
      local_20 = (pFVar4->CurrentDataChannel).Object;
      local_18 = (pFVar4->CurrentDataChannel).SharedReferenceCount.ReferenceController;
      if (local_18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FChaosVisualDebuggerTrace::TraceCollisionConstraintView'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_40 = &local_38;
      local_58.DataPtr = (void **)0x0;
      local_58.ArrayNum = 0;
      local_38 = param_1;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",param_1->ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_48,local_res10[0],None,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return;
}

// TraceConstraintsContainer @ 1437b3260

void __cdecl
FChaosVisualDebuggerTrace::TraceConstraintsContainer
          (TArrayView<Chaos::FPBDConstraintContainer_*_const,int> *param_1)

{
  undefined8 *puVar1;
  int iVar2;
  FPBDJointConstraints *pFVar3;
  longlong lVar4;
  FName FVar5;
  FName FVar6;
  FName FVar7;
  double dVar8;
  FParticlePairMidPhase *pFVar9;
  code *pcVar10;
  <lambda_1> <Var11;
  bool bVar12;
  FConstraintHandleTypeID *pFVar13;
  uint *puVar14;
  FChaosVDThreadContext *pFVar15;
  FChaosVDContext *pFVar16;
  FPBDConstraintContainer **ppFVar17;
  FPBDConstraintContainer **ppFVar18;
  undefined8 *puVar19;
  <lambda_1> local_res10 [8];
  FChaosCVDScopedDataChannelOverride local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_158;
  FChaosCVDScopedDataChannelOverride local_157;
  undefined1 local_156;
  undefined1 local_155;
  undefined1 local_154;
  undefined1 local_153;
  FChaosCVDScopedDataChannelOverride local_152;
  undefined1 local_151;
  FChaosCVDScopedDataChannelOverride local_150;
  undefined1 local_14f [3];
  FName local_14c;
  FName local_144;
  FPBDConstraintContainer **local_138;
  double local_130;
  int local_128;
  FChaosVDContext local_120;
  double *local_100;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  FChaosVDOptionalDataChannel *local_e8;
  TReferenceControllerBase<1> *local_e0;
  code *local_d8;
  undefined1 *local_d0;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  double **local_b0;
  code *local_a8;
  undefined1 *local_a0;
  code *local_98;
  undefined1 *local_90;
  code *local_88;
  undefined1 *local_80;
  code *local_78;
  undefined1 *local_70;
  code *local_68;
  undefined1 *local_60;
  code *local_58;
  undefined1 *local_50;
  code *local_48;
  undefined1 *local_40;
  
  <Var11 = local_res10[0];
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    ppFVar18 = param_1->DataPtr;
    ppFVar17 = ppFVar18 + param_1->ArrayNum;
    local_138 = ppFVar17;
    if (ppFVar18 != ppFVar17) {
      do {
        pFVar3 = (FPBDJointConstraints *)*ppFVar18;
        if (pFVar3 != (FPBDJointConstraints *)0x0) {
          lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
          if ((*(int *)(lVar4 + 0x9d4c) <
               `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
               ::__l2::_thread_safe_static_guard_0__) &&
             (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                                   ::__l2::_thread_safe_static_guard_0__),
             `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
             ::__l2::_thread_safe_static_guard_0__ == -1)) {
            pFVar13 = Chaos::FIndexedConstraintHandle::StaticType();
            ::FName::FName(&local_14c,L"FJointConstraintHandle");
            `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
            ::__l2::STypeID.TypeName = local_14c;
            `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
            ::__l2::STypeID.BaseType = pFVar13;
            _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                                 ::__l2::_thread_safe_static_guard_0__);
          }
          FVar5.ComparisonIndex.Value = *(uint *)&pFVar3->field_0x8;
          FVar5.Number = *(uint *)&pFVar3->field_0xc;
          if ((`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
               ::__l2::STypeID.TypeName == FVar5) ||
             ((*(FConstraintHandleTypeID **)&pFVar3->field_0x10 != (FConstraintHandleTypeID *)0x0 &&
              (bVar12 = Chaos::FConstraintHandleTypeID::IsA
                                  (*(FConstraintHandleTypeID **)&pFVar3->field_0x10,
                                   &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FPBDJointConstraintHandle::StaticType(void)'
                                    ::__l2::STypeID), bVar12)))) {
            if (pFVar3->bUseLinearSolver == false) {
              FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
                        (&local_150,&CVDDC_JointNonLinearConstraints);
              TraceJointsConstraints(pFVar3);
              puVar14 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
              local_40 = local_14f;
              local_48 = UE::Core::Private::Function::
                         TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                         ::Call;
              pFVar15 = (FChaosVDThreadContext *)
                        FThreadSingletonInitializer::Get
                                  ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,
                                   puVar14);
              FChaosVDThreadContext::PopContext(pFVar15);
            }
            else {
              FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
                        (&local_152,&CVDDC_JointLinearConstraints);
              TraceJointsConstraints(pFVar3);
              puVar14 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
              local_50 = &local_151;
              local_58 = UE::Core::Private::Function::
                         TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                         ::Call;
              pFVar15 = (FChaosVDThreadContext *)
                        FThreadSingletonInitializer::Get
                                  ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_58,
                                   puVar14);
              FChaosVDThreadContext::PopContext(pFVar15);
            }
          }
          else {
            pFVar13 = Chaos::FPBDCollisionConstraintHandle::StaticType();
            FVar6.ComparisonIndex.Value = *(uint *)&pFVar3->field_0x8;
            FVar6.Number = *(uint *)&pFVar3->field_0xc;
            if ((pFVar13->TypeName == FVar6) ||
               ((*(FConstraintHandleTypeID **)&pFVar3->field_0x10 != (FConstraintHandleTypeID *)0x0
                && (bVar12 = Chaos::FConstraintHandleTypeID::IsA
                                       (*(FConstraintHandleTypeID **)&pFVar3->field_0x10,pFVar13),
                   bVar12)))) {
              FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
                        (&local_157,&CVDDC_EndOfEvolutionCollisionConstraints);
              if (SessionState.bIsTracing != (atomic<bool>)0x0) {
                puVar14 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
                local_90 = &local_156;
                local_98 = UE::Core::Private::Function::
                           TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                           ::Call;
                pFVar15 = (FChaosVDThreadContext *)
                          FThreadSingletonInitializer::Get
                                    ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_98,
                                     puVar14);
                pFVar16 = FChaosVDThreadContext::GetCurrentContext(pFVar15,Solver);
                if (pFVar16 == (FChaosVDContext *)0x0) {
                  bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<604040631391617141>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                                      ,0x75,"Context");
                  if (bVar12) {
                    pcVar10 = (code *)swi(3);
                    (*pcVar10)();
                    return;
                  }
                }
                else if (((pFVar16->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) {
                  local_120.OwnerID = pFVar16->OwnerID;
                  local_120.Id = pFVar16->Id;
                  local_120.Type = pFVar16->Type;
                  local_120.Attributes = pFVar16->Attributes;
                  local_120.CurrentDataChannel.Object = (pFVar16->CurrentDataChannel).Object;
                  local_120.CurrentDataChannel.SharedReferenceCount.ReferenceController =
                       (pFVar16->CurrentDataChannel).SharedReferenceCount.ReferenceController;
                  if (local_120.CurrentDataChannel.SharedReferenceCount.ReferenceController !=
                      (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    (local_120.CurrentDataChannel.SharedReferenceCount.ReferenceController)->
                    SharedReferenceCount =
                         (atomic<int>)
                         ((int)(local_120.CurrentDataChannel.SharedReferenceCount.
                               ReferenceController)->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  puVar19 = (undefined8 *)(pFVar3->Settings).MinSolverStiffness;
                  iVar2 = *(int *)&(pFVar3->Settings).MaxSolverStiffness;
                  puVar1 = puVar19 + iVar2;
                  while( true ) {
                    if (*(int *)&(pFVar3->Settings).MaxSolverStiffness != iVar2) {
                      local_res10[0] = (<lambda_1>)0x0;
                      `TCheckedPointerIterator<TUniquePtr<Chaos::FParticlePairMidPhase,TDefaultDelete<Chaos::FParticlePairMidPhase>_>,int,0>
                      ::operator!='::__l2::<lambda_1>::operator()(local_res10);
                    }
                    if (puVar19 == puVar1) break;
                    pFVar9 = (FParticlePairMidPhase *)*puVar19;
                    puVar14 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
                    local_80 = &local_155;
                    local_88 = UE::Core::Private::Function::
                               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                               ::Call;
                    pFVar15 = (FChaosVDThreadContext *)
                              FThreadSingletonInitializer::Get
                                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,
                                         puVar14);
                    FChaosVDThreadContext::PushContext(pFVar15,&local_120);
                    TraceMidPhase(pFVar9);
                    puVar14 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
                    local_70 = &local_154;
                    local_78 = UE::Core::Private::Function::
                               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                               ::Call;
                    pFVar15 = (FChaosVDThreadContext *)
                              FThreadSingletonInitializer::Get
                                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_78,
                                         puVar14);
                    FChaosVDThreadContext::PopContext(pFVar15);
                    puVar19 = puVar19 + 1;
                  }
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline
                            (local_120.CurrentDataChannel.SharedReferenceCount.ReferenceController);
                  ppFVar17 = local_138;
                }
              }
              puVar14 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
              local_60 = &local_153;
              local_68 = UE::Core::Private::Function::
                         TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                         ::Call;
              pFVar15 = (FChaosVDThreadContext *)
                        FThreadSingletonInitializer::Get
                                  ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,
                                   puVar14);
              FChaosVDThreadContext::PopContext(pFVar15);
            }
            else {
              if ((*(int *)(lVar4 + 0x9d4c) <
                   `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
                   ::__l2::_thread_safe_static_guard_0__) &&
                 (_Init_thread_header(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
                                       ::__l2::_thread_safe_static_guard_0__),
                 `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
                 ::__l2::_thread_safe_static_guard_0__ == -1)) {
                pFVar13 = Chaos::FIndexedConstraintHandle::StaticType();
                ::FName::FName(&local_144,L"FCharacterGroundConstraintHandle");
                `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
                ::__l2::STypeID.TypeName = local_144;
                `public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
                ::__l2::STypeID.BaseType = pFVar13;
                _Init_thread_footer(&`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
                                     ::__l2::_thread_safe_static_guard_0__);
              }
              FVar7.ComparisonIndex.Value = *(uint *)&pFVar3->field_0x8;
              FVar7.Number = *(uint *)&pFVar3->field_0xc;
              if ((`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
                   ::__l2::STypeID.TypeName == FVar7) ||
                 ((*(FConstraintHandleTypeID **)&pFVar3->field_0x10 !=
                   (FConstraintHandleTypeID *)0x0 &&
                  (bVar12 = Chaos::FConstraintHandleTypeID::IsA
                                      (*(FConstraintHandleTypeID **)&pFVar3->field_0x10,
                                       &`public:_static_class_Chaos::FConstraintHandleTypeID_const&___ptr64___cdecl_Chaos::FCharacterGroundConstraintHandle::StaticType(void)'
                                        ::__l2::STypeID), bVar12)))) {
                FChaosCVDScopedDataChannelOverride::FChaosCVDScopedDataChannelOverride
                          (local_res18,&CVDDC_CharacterGroundConstraints);
                if (SessionState.bIsTracing != (atomic<bool>)0x0) {
                  puVar14 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
                  local_d0 = local_res20;
                  local_d8 = UE::Core::Private::Function::
                             TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                             ::Call;
                  pFVar15 = (FChaosVDThreadContext *)
                            FThreadSingletonInitializer::Get
                                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_d8,
                                       puVar14);
                  pFVar16 = FChaosVDThreadContext::GetCurrentContext(pFVar15,Solver);
                  if (pFVar16 == (FChaosVDContext *)0x0) {
                    bVar12 = UE::Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<604040631391617141>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                                        ,0x75,"Context");
                    if (bVar12) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                  }
                  else if (((pFVar16->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0)
                  {
                    dVar8 = (pFVar3->Settings).MaxInertiaRatio;
                    iVar2 = *(int *)&(pFVar3->Settings).MinSolverStiffness;
                    if ((iVar2 < 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("InCount >= 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                            ,0xeb,L""), bVar12)) {
                      pcVar10 = (code *)swi(3);
                      (*pcVar10)();
                      return;
                    }
                    local_100 = &local_130;
                    local_f8 = pFVar16->OwnerID;
                    local_f4 = pFVar16->Id;
                    local_f0 = pFVar16->Type;
                    local_ec = pFVar16->Attributes;
                    local_e8 = (pFVar16->CurrentDataChannel).Object;
                    local_e0 = (pFVar16->CurrentDataChannel).SharedReferenceCount.
                               ReferenceController;
                    if (local_e0 != (TReferenceControllerBase<1> *)0x0) {
                      LOCK();
                      local_e0->SharedReferenceCount =
                           (atomic<int>)((int)local_e0->SharedReferenceCount + 1);
                      UNLOCK();
                    }
                    local_b8 = UE::Core::Private::Function::
                               TFunctionRefCaller<`FChaosVisualDebuggerTrace::TraceCharacterGroundConstraints'::__l2::<lambda_1>,void,int>
                               ::Call;
                    local_b0 = &local_100;
                    local_c8.DataPtr = (void **)0x0;
                    local_c8.ArrayNum = 0;
                    local_130 = dVar8;
                    local_128 = iVar2;
                    ParallelForImpl::
                    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                              (L"ParallelFor Task",iVar2,1,
                               (TFunctionRef<void___cdecl(int)> *)&local_b8,<Var11,None,&local_c8);
                    SharedPointerInternals::TReferenceControllerBase<1>::
                    ReleaseSharedReferenceNoInline(local_e0);
                  }
                }
                puVar14 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
                local_a0 = &local_158;
                local_a8 = UE::Core::Private::Function::
                           TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                           ::Call;
                pFVar15 = (FChaosVDThreadContext *)
                          FThreadSingletonInitializer::Get
                                    ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a8,
                                     puVar14);
                FChaosVDThreadContext::PopContext(pFVar15);
              }
            }
          }
        }
        ppFVar18 = ppFVar18 + 1;
      } while (ppFVar18 != ppFVar17);
    }
  }
  return;
}

// TraceDebugDrawBox @ 1437b3870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FChaosVisualDebuggerTrace::TraceDebugDrawBox
          (TBox<double> *param_1,FName param_2,FColor param_3,int param_4)

{
  double *pdVar1;
  bool bVar2;
  uint *puVar3;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  FTlsAutoCleanup *pFVar6;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1b8;
  undefined1 local_1b7 [7];
  FChaosVDScopedTLSBufferAccessor local_1b0;
  code *local_1a8;
  undefined1 *local_1a0;
  code *local_198;
  undefined1 *local_190;
  TStringView<wchar_t> local_188;
  TArrayView<unsigned_char_const_,int> local_178;
  TArrayView<unsigned_char_const_,int> local_168;
  FChaosVDMemoryWriter local_158;
  undefined1 local_98 [32];
  int local_78;
  TVector<double>_u_0 local_70;
  TVector<double>_u_0 TStack_58;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar3 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_1a0 = &local_1b8;
    local_1a8 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1a8,puVar3);
    pFVar4 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar4 != (FChaosVDContext *)0x0) {
      if (((pFVar4->CurrentDataChannel).Object)->bIsEnabled == (atomic<bool>)0x0) {
        return;
      }
      if (param_4 == -1) {
        param_4 = pFVar4->Id;
      }
    }
    if ((SessionState.TraceRelevancyVolume.IsValid == '\0') ||
       ((((SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.X <
           (param_1->Max).field0_0x0._s_0.X ||
           SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.X ==
           (param_1->Max).field0_0x0._s_0.X &&
          ((param_1->Min).field0_0x0._s_0.X <=
           SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.X)) &&
         (pdVar1 = &(param_1->Max).field0_0x0._s_0.Y,
         SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Y < *pdVar1 ||
         SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Y == *pdVar1)) &&
        ((((param_1->Min).field0_0x0._s_0.Y <=
           SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Y &&
          (pdVar1 = &(param_1->Max).field0_0x0._s_0.Z,
          SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Z < *pdVar1 ||
          SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Z == *pdVar1)) &&
         ((param_1->Min).field0_0x0._s_0.Z <=
          SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Z)))))) {
      local_70._s_0.X = (param_1->Min).field0_0x0._s_0.X;
      local_70._s_0.Y = (param_1->Min).field0_0x0._s_0.Y;
      local_70._s_0.Z = (param_1->Min).field0_0x0._s_0.Z;
      TStack_58._s_0.X = (param_1->Max).field0_0x0._s_0.X;
      local_98._0_8_ = &___7FChaosVDDebugDrawBoxDataWrapper__6B_;
      TStack_58._s_0.Y = (param_1->Max).field0_0x0._s_0.Y;
      TStack_58._s_0.Z = (param_1->Max).field0_0x0._s_0.Z;
      local_40._0_1_ = param_1->IsValid;
      local_40._1_1_ = param_1->Pad[0];
      local_40._2_1_ = param_1->Pad[1];
      local_40._3_1_ = param_1->Pad[2];
      local_40._4_1_ = param_1->Pad[3];
      local_40._5_1_ = param_1->Pad[4];
      local_40._6_1_ = param_1->Pad[5];
      local_40._7_1_ = param_1->Pad[6];
      local_98._16_4_ = param_4;
      local_98._20_8_ = param_2;
      local_98._28_4_ = param_3.field0_0x0;
      bVar2 = IsInGameThread();
      local_98[8] = 1;
      local_78 = (bVar2 ^ 1) + 1;
      FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_1b0);
      Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
                (&local_158,local_1b0.BufferRef,&SessionState.CVDNameTable);
      FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_158,true);
      FChaosVDDebugDrawBoxDataWrapper::Serialize
                ((FChaosVDDebugDrawBoxDataWrapper *)local_98,(FArchive *)&local_158);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_158.NameTableInstance.SharedReferenceCount.ReferenceController);
      FArchive::~FArchive((FArchive *)&local_158);
      local_188 = FChaosVDDebugDrawBoxDataWrapper::WrapperTypeName;
      pTVar5 = TArrayView<unsigned_char_const_,int>::
               TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                         (&local_168,local_1b0.BufferRef);
      local_178.DataPtr = pTVar5->DataPtr;
      local_178.ArrayNum = pTVar5->ArrayNum;
      local_178._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
      TraceBinaryData(&local_178,&local_188,None);
      (local_1b0.BufferRef)->ArrayNum = 0;
      if ((local_1b0.BufferRef)->ArrayMax < 0xffff) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0xffff,&(local_1b0.BufferRef)->AllocatorInstance,0,
                   &(local_1b0.BufferRef)->ArrayMax);
      }
      puVar3 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
      local_190 = local_1b7;
      local_198 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                  ::Call;
      pFVar6 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_198,puVar3);
      *(int *)(pFVar6 + 0x45) = *(int *)(pFVar6 + 0x45) + -1;
    }
  }
  return;
}

// TraceDebugDrawImplicitObject @ 1437b3ae0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FChaosVisualDebuggerTrace::TraceDebugDrawImplicitObject
          (FImplicitObject *param_1,TTransform<double> *param_2,FName param_3,FColor param_4,
          int param_5)

{
  bool bVar1;
  TAABB<double,3> *pTVar2;
  TArrayView<unsigned_char_const_,int> *pTVar3;
  uint *puVar4;
  FTlsAutoCleanup *pFVar5;
  undefined1 auStackY_288 [32];
  undefined1 local_258 [8];
  FChaosVDScopedTLSBufferAccessor local_250;
  code *local_248;
  undefined1 *local_240;
  TStringView<wchar_t> local_238;
  TArrayView<unsigned_char_const_,int> local_228;
  TArrayView<unsigned_char_const_,int> local_218;
  FChaosVDMemoryWriter local_208;
  undefined1 local_148 [48];
  undefined1 local_118 [32];
  int local_f8;
  uint local_f0;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  double dStack_c0;
  double local_b8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_288;
  if (((SessionState.bIsTracing != (atomic<bool>)0x0) && (param_1 != (FImplicitObject *)0x0)) &&
     (bVar1 = CanTraceDebugDrawShape(&param_5), bVar1)) {
    if ((SessionState.TraceRelevancyVolume.IsValid != '\0') && (param_1->bHasBoundingBox != false))
    {
      local_88 = (param_2->Rotation).XY.m128d_f64[0];
      dStack_80 = (param_2->Rotation).XY.m128d_f64[1];
      local_78 = (param_2->Rotation).ZW.m128d_f64[0];
      dStack_70 = (param_2->Rotation).ZW.m128d_f64[1];
      local_68 = (param_2->Translation).XY.m128d_f64[0];
      dStack_60 = (param_2->Translation).XY.m128d_f64[1];
      local_58 = (param_2->Translation).ZW.m128d_f64[0];
      dStack_50 = (param_2->Translation).ZW.m128d_f64[1];
      local_48 = *(undefined4 *)(param_2->Scale3D).XY.m128d_f64;
      uStack_44 = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 4);
      uStack_40 = *(undefined4 *)((param_2->Scale3D).XY.m128d_f64 + 1);
      uStack_3c = *(undefined4 *)((longlong)(param_2->Scale3D).XY.m128d_f64 + 0xc);
      local_38 = *(undefined4 *)(param_2->Scale3D).ZW.m128d_f64;
      uStack_34 = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 4);
      uStack_30 = *(undefined4 *)((param_2->Scale3D).ZW.m128d_f64 + 1);
      uStack_2c = *(undefined4 *)((longlong)(param_2->Scale3D).ZW.m128d_f64 + 0xc);
      pTVar2 = (TAABB<double,3> *)
               (**(code **)(param_1->_padding_ + 0x98))(param_1,local_148,&local_88);
      bVar1 = IsInRelevancyVolume(pTVar2);
      if (!bVar1) {
        return;
      }
    }
    local_e8 = (param_2->Rotation).XY.m128d_f64[0];
    dStack_e0 = (param_2->Rotation).XY.m128d_f64[1];
    local_d8 = (param_2->Rotation).ZW.m128d_f64[0];
    dStack_d0 = (param_2->Rotation).ZW.m128d_f64[1];
    local_c8 = (param_2->Translation).XY.m128d_f64[0];
    dStack_c0 = (param_2->Translation).XY.m128d_f64[1];
    local_b8 = (param_2->Translation).ZW.m128d_f64[0];
    dStack_b0 = (param_2->Translation).ZW.m128d_f64[1];
    local_a8 = (param_2->Scale3D).XY.m128d_f64[0];
    dStack_a0 = (param_2->Scale3D).XY.m128d_f64[1];
    local_98 = (param_2->Scale3D).ZW.m128d_f64[0];
    dStack_90 = (param_2->Scale3D).ZW.m128d_f64[1];
    local_118._0_8_ = &___7FChaosVDDebugDrawImplicitObjectDataWrapper__6B_;
    local_118._16_4_ = param_5;
    local_118._20_8_ = param_3;
    local_118._28_4_ = param_4.field0_0x0;
    bVar1 = IsInGameThread();
    local_f8 = (bVar1 ^ 1) + 1;
    local_f0 = TraceImplicitObject(param_1);
    local_118[8] = 1;
    FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_250);
    Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
              (&local_208,local_250.BufferRef,&SessionState.CVDNameTable);
    FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_208,true);
    FChaosVDDebugDrawImplicitObjectDataWrapper::Serialize
              ((FChaosVDDebugDrawImplicitObjectDataWrapper *)local_118,(FArchive *)&local_208);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_208.NameTableInstance.SharedReferenceCount.ReferenceController);
    FArchive::~FArchive((FArchive *)&local_208);
    local_238 = FChaosVDDebugDrawImplicitObjectDataWrapper::WrapperTypeName;
    pTVar3 = TArrayView<unsigned_char_const_,int>::
             TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                       (&local_218,local_250.BufferRef);
    local_228.DataPtr = pTVar3->DataPtr;
    local_228.ArrayNum = pTVar3->ArrayNum;
    local_228._12_4_ = *(undefined4 *)&pTVar3->field_0xc;
    TraceBinaryData(&local_228,&local_238,None);
    (local_250.BufferRef)->ArrayNum = 0;
    if ((local_250.BufferRef)->ArrayMax < 0xffff) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0xffff,&(local_250.BufferRef)->AllocatorInstance,0,
                 &(local_250.BufferRef)->ArrayMax);
    }
    puVar4 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_240 = local_258;
    local_248 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar5 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_248,puVar4);
    *(int *)(pFVar5 + 0x45) = *(int *)(pFVar5 + 0x45) + -1;
  }
  return;
}

// TraceDebugDrawLine @ 1437b3d60

void __cdecl
FChaosVisualDebuggerTrace::TraceDebugDrawLine
          (TVector<double> *param_1,TVector<double> *param_2,FName param_3,FColor param_4,
          int param_5)

{
  undefined1 auVar1 [16];
  double dVar2;
  bool bVar3;
  uint *puVar4;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar5;
  TArrayView<unsigned_char_const_,int> *pTVar6;
  FTlsAutoCleanup *pFVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar13;
  double dVar12;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 local_1d8;
  undefined1 local_1d7 [7];
  FChaosVDScopedTLSBufferAccessor local_1d0;
  code *local_1c8;
  undefined1 *local_1c0;
  code *local_1b8;
  undefined1 *local_1b0;
  TArrayView<unsigned_char_const_,int> local_1a8;
  double local_198;
  TStringView<wchar_t> local_188;
  TArrayView<unsigned_char_const_,int> local_178;
  double local_168;
  undefined1 local_158 [32];
  int local_138;
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118;
  bool local_100;
  FChaosVDMemoryWriter local_f8;
  
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar4 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_1c0 = &local_1d8;
    local_1c8 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1c8,puVar4);
    pFVar5 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar5 != (FChaosVDContext *)0x0) {
      if (((pFVar5->CurrentDataChannel).Object)->bIsEnabled == (atomic<bool>)0x0) {
        return;
      }
      if (param_5 == -1) {
        param_5 = pFVar5->Id;
      }
    }
    local_198 = (param_2->field0_0x0)._s_0.Z;
    local_118._0_16_ = *(undefined1 (*) [16])&param_2->field0_0x0;
    auVar1 = *(undefined1 (*) [16])&param_1->field0_0x0;
    dVar8 = auVar1._0_8_;
    local_168 = (param_1->field0_0x0)._s_0.Z;
    if (SessionState.TraceRelevancyVolume.IsValid != '\0') {
      dVar9 = auVar1._8_8_;
      dVar12 = local_118._0_8_;
      dVar10 = dVar8;
      if (dVar8 <= dVar12) {
        dVar10 = dVar12;
      }
      uVar11 = SUB84(local_168,0);
      uVar13 = (undefined4)((ulonglong)local_168 >> 0x20);
      if (dVar12 <= dVar8) {
        dVar8 = dVar12;
      }
      if (local_168 <= local_198) {
        uVar11 = SUB84(local_198,0);
        uVar13 = (undefined4)((ulonglong)local_198 >> 0x20);
      }
      dVar12 = local_168;
      if (local_198 <= local_168) {
        dVar12 = local_198;
      }
      dVar2 = local_118._8_8_;
      uVar14 = auVar1._8_4_;
      uVar15 = auVar1._12_4_;
      if (dVar9 <= dVar2) {
        uVar14 = local_118._8_4_;
        uVar15 = local_118._12_4_;
      }
      if (dVar2 <= dVar9) {
        dVar9 = dVar2;
      }
      if (dVar10 < SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.X) {
        return;
      }
      if (SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.X < dVar8) {
        return;
      }
      if ((double)CONCAT44(uVar15,uVar14) <= SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Y
          && SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Y !=
             (double)CONCAT44(uVar15,uVar14)) {
        return;
      }
      if (SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Y < dVar9) {
        return;
      }
      if ((double)CONCAT44(uVar13,uVar11) <= SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Z
          && SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Z !=
             (double)CONCAT44(uVar13,uVar11)) {
        return;
      }
      if (SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Z < dVar12) {
        return;
      }
    }
    local_130._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    local_130._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_130._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_158._0_8_ = &___7FChaosVDDebugDrawLineDataWrapper__6B_;
    local_118._s_0.Z = (param_2->field0_0x0)._s_0.Z;
    local_100 = false;
    local_158._16_4_ = param_5;
    local_158._20_8_ = param_3;
    local_158._28_4_ = param_4.field0_0x0;
    bVar3 = IsInGameThread();
    local_158[8] = 1;
    local_138 = (bVar3 ^ 1) + 1;
    FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_1d0);
    Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
              (&local_f8,local_1d0.BufferRef,&SessionState.CVDNameTable);
    FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_f8,true);
    FChaosVDDebugDrawLineDataWrapper::Serialize
              ((FChaosVDDebugDrawLineDataWrapper *)local_158,(FArchive *)&local_f8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.NameTableInstance.SharedReferenceCount.ReferenceController);
    FArchive::~FArchive((FArchive *)&local_f8);
    local_188 = FChaosVDDebugDrawLineDataWrapper::WrapperTypeName;
    pTVar6 = TArrayView<unsigned_char_const_,int>::
             TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                       (&local_178,local_1d0.BufferRef);
    local_1a8.DataPtr = pTVar6->DataPtr;
    local_1a8.ArrayNum = pTVar6->ArrayNum;
    local_1a8._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
    TraceBinaryData(&local_1a8,&local_188,None);
    (local_1d0.BufferRef)->ArrayNum = 0;
    if ((local_1d0.BufferRef)->ArrayMax < 0xffff) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0xffff,&(local_1d0.BufferRef)->AllocatorInstance,0,
                 &(local_1d0.BufferRef)->ArrayMax);
    }
    puVar4 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_1b0 = local_1d7;
    local_1b8 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar7 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1b8,puVar4);
    *(int *)(pFVar7 + 0x45) = *(int *)(pFVar7 + 0x45) + -1;
  }
  return;
}

// TraceDebugDrawSphere @ 1437b4030

void __cdecl
FChaosVisualDebuggerTrace::TraceDebugDrawSphere
          (TVector<double> *param_1,float param_2,FName param_3,FColor param_4,int param_5)

{
  double dVar1;
  bool bVar2;
  uint *puVar3;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  FTlsAutoCleanup *pFVar6;
  double dVar7;
  undefined8 uVar8;
  undefined1 local_188;
  undefined1 local_187 [7];
  FChaosVDScopedTLSBufferAccessor local_180;
  code *local_178;
  undefined1 *local_170;
  code *local_168;
  undefined1 *local_160;
  undefined1 local_158 [32];
  int local_138;
  TVector<double>_u_0 local_130;
  float local_118;
  TStringView<wchar_t> local_108;
  TArrayView<unsigned_char_const_,int> local_f8;
  TArrayView<unsigned_char_const_,int> local_e8;
  FChaosVDMemoryWriter local_d8;
  
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar3 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_170 = &local_188;
    local_178 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_178,puVar3);
    pFVar4 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar4 != (FChaosVDContext *)0x0) {
      if (((pFVar4->CurrentDataChannel).Object)->bIsEnabled == (atomic<bool>)0x0) {
        return;
      }
      if (param_5 == -1) {
        param_5 = pFVar4->Id;
      }
    }
    if (SessionState.TraceRelevancyVolume.IsValid != '\0') {
      dVar1 = (param_1->field0_0x0)._s_0.X;
      dVar7 = 0.0;
      uVar8 = SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.X;
      if ((dVar1 < SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.X) ||
         (uVar8 = SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.X,
         SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.X < dVar1)) {
        dVar7 = (dVar1 - (double)uVar8) * (dVar1 - (double)uVar8);
      }
      dVar1 = (param_1->field0_0x0)._s_0.Y;
      uVar8 = SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Y;
      if ((dVar1 < SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Y) ||
         (uVar8 = SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Y,
         SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Y < dVar1)) {
        dVar7 = dVar7 + (dVar1 - (double)uVar8) * (dVar1 - (double)uVar8);
      }
      dVar1 = (param_1->field0_0x0)._s_0.Z;
      uVar8 = SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Z;
      if ((dVar1 < SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Z) ||
         (uVar8 = SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Z,
         SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Z < dVar1)) {
        dVar7 = dVar7 + (dVar1 - (double)uVar8) * (dVar1 - (double)uVar8);
      }
      if ((double)(param_2 * param_2) < dVar7) {
        return;
      }
    }
    local_130._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_130._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    local_130._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    local_158._0_8_ = &___7FChaosVDDebugDrawSphereDataWrapper__6B_;
    local_158._16_4_ = param_5;
    local_158._20_8_ = param_3;
    local_158._28_4_ = param_4.field0_0x0;
    local_118 = param_2;
    bVar2 = IsInGameThread();
    local_158[8] = 1;
    local_138 = (bVar2 ^ 1) + 1;
    FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_180);
    Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
              (&local_d8,local_180.BufferRef,&SessionState.CVDNameTable);
    FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_d8,true);
    FChaosVDDebugDrawSphereDataWrapper::Serialize
              ((FChaosVDDebugDrawSphereDataWrapper *)local_158,(FArchive *)&local_d8);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_d8.NameTableInstance.SharedReferenceCount.ReferenceController);
    FArchive::~FArchive((FArchive *)&local_d8);
    local_108 = FChaosVDDebugDrawSphereDataWrapper::WrapperTypeName;
    pTVar5 = TArrayView<unsigned_char_const_,int>::
             TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                       (&local_e8,local_180.BufferRef);
    local_f8.DataPtr = pTVar5->DataPtr;
    local_f8.ArrayNum = pTVar5->ArrayNum;
    local_f8._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    TraceBinaryData(&local_f8,&local_108,None);
    (local_180.BufferRef)->ArrayNum = 0;
    if ((local_180.BufferRef)->ArrayMax < 0xffff) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0xffff,&(local_180.BufferRef)->AllocatorInstance,0,
                 &(local_180.BufferRef)->ArrayMax);
    }
    puVar3 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_160 = local_187;
    local_168 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar6 = FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_168,puVar3);
    *(int *)(pFVar6 + 0x45) = *(int *)(pFVar6 + 0x45) + -1;
  }
  return;
}

// TraceDebugDrawVector @ 1437b42d0

void __cdecl
FChaosVisualDebuggerTrace::TraceDebugDrawVector
          (TVector<double> *param_1,TVector<double> *param_2,FName param_3,FColor param_4,
          int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  bool bVar6;
  uint *puVar7;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar8;
  TArrayView<unsigned_char_const_,int> *pTVar9;
  FTlsAutoCleanup *pFVar10;
  double dVar11;
  undefined1 local_1f8;
  undefined1 local_1f7 [7];
  FChaosVDScopedTLSBufferAccessor local_1f0;
  code *local_1e8;
  undefined1 *local_1e0;
  code *local_1d8;
  undefined1 *local_1d0;
  undefined1 local_1c8 [32];
  int local_1a8;
  TVector<double>_u_0 local_1a0;
  TVector<double>_u_0 local_188;
  bool local_170;
  TStringView<wchar_t> local_168;
  TArrayView<unsigned_char_const_,int> local_158;
  TArrayView<unsigned_char_const_,int> local_148;
  double local_138;
  FChaosVDMemoryWriter local_128;
  
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar7 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_1e0 = &local_1f8;
    local_1e8 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1e8,puVar7);
    pFVar8 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar8 != (FChaosVDContext *)0x0) {
      if (((pFVar8->CurrentDataChannel).Object)->bIsEnabled == (atomic<bool>)0x0) {
        return;
      }
      if (param_5 == -1) {
        param_5 = pFVar8->Id;
      }
    }
    local_138 = (param_1->field0_0x0)._s_0.Z;
    local_188._s_0.X = (param_1->field0_0x0)._s_0.X + (param_2->field0_0x0)._s_0.X;
    local_188._s_0.Y = (param_1->field0_0x0)._s_0.Y + (param_2->field0_0x0)._s_0.Y;
    local_188._s_0.Z = (param_1->field0_0x0)._s_0.Z + (param_2->field0_0x0)._s_0.Z;
    local_1a0._s_0.X = (param_1->field0_0x0)._s_0.X;
    local_1a0._s_0.Y = (param_1->field0_0x0)._s_0.Y;
    if (SessionState.TraceRelevancyVolume.IsValid != '\0') {
      dVar11 = local_188._s_0.X;
      if (local_188._s_0.X <= local_1a0._s_0.X) {
        dVar11 = local_1a0._s_0.X;
      }
      dVar2 = local_188._s_0.Y;
      if (local_188._s_0.Y <= local_1a0._s_0.Y) {
        dVar2 = local_1a0._s_0.Y;
      }
      dVar3 = local_188._s_0.Z;
      if (local_188._s_0.Z <= local_138) {
        dVar3 = local_138;
      }
      dVar4 = local_188._s_0.Y;
      if (local_1a0._s_0.Y <= local_188._s_0.Y) {
        dVar4 = local_1a0._s_0.Y;
      }
      dVar5 = local_188._s_0.Z;
      if (local_138 <= local_188._s_0.Z) {
        dVar5 = local_138;
      }
      dVar1 = local_188._s_0.X;
      if (local_1a0._s_0.X <= local_188._s_0.X) {
        dVar1 = local_1a0._s_0.X;
      }
      if (dVar11 < SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.X) {
        return;
      }
      if (SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.X < dVar1) {
        return;
      }
      if (dVar2 < SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Y) {
        return;
      }
      if (SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Y < dVar4) {
        return;
      }
      if (dVar3 < SessionState.TraceRelevancyVolume.Min.field0_0x0._s_0.Z) {
        return;
      }
      if (SessionState.TraceRelevancyVolume.Max.field0_0x0._s_0.Z < dVar5) {
        return;
      }
    }
    local_1a0._s_0.Z = (param_1->field0_0x0)._s_0.Z;
    local_1c8._0_8_ = &___7FChaosVDDebugDrawLineDataWrapper__6B_;
    local_170 = true;
    local_1c8._16_4_ = param_5;
    local_1c8._20_8_ = param_3;
    local_1c8._28_4_ = param_4.field0_0x0;
    bVar6 = IsInGameThread();
    local_1c8[8] = 1;
    local_1a8 = (bVar6 ^ 1) + 1;
    FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_1f0);
    Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
              (&local_128,local_1f0.BufferRef,&SessionState.CVDNameTable);
    FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_128,true);
    FChaosVDDebugDrawLineDataWrapper::Serialize
              ((FChaosVDDebugDrawLineDataWrapper *)local_1c8,(FArchive *)&local_128);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.NameTableInstance.SharedReferenceCount.ReferenceController);
    FArchive::~FArchive((FArchive *)&local_128);
    local_168 = FChaosVDDebugDrawLineDataWrapper::WrapperTypeName;
    pTVar9 = TArrayView<unsigned_char_const_,int>::
             TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                       (&local_148,local_1f0.BufferRef);
    local_158.DataPtr = pTVar9->DataPtr;
    local_158.ArrayNum = pTVar9->ArrayNum;
    local_158._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
    TraceBinaryData(&local_158,&local_168,None);
    (local_1f0.BufferRef)->ArrayNum = 0;
    if ((local_1f0.BufferRef)->ArrayMax < 0xffff) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (1,1,0xffff,&(local_1f0.BufferRef)->AllocatorInstance,0,
                 &(local_1f0.BufferRef)->ArrayMax);
    }
    puVar7 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_1d0 = local_1f7;
    local_1d8 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    pFVar10 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1d8,puVar7);
    *(int *)(pFVar10 + 0x45) = *(int *)(pFVar10 + 0x45) + -1;
  }
  return;
}

// TraceImplicitObject @ 1437b45f0

uint __cdecl FChaosVisualDebuggerTrace::TraceImplicitObject(FImplicitObject *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  TUniquePtr<Chaos::FChaosArchiveContext,TDefaultDelete<Chaos::FChaosArchiveContext>_> TVar3;
  uint uVar4;
  FChaosArchiveContext *this;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  uint *puVar6;
  FTlsAutoCleanup *pFVar7;
  char local_res10 [8];
  undefined1 local_res18 [8];
  FImplicitObject *local_res20;
  uint local_208 [2];
  TRefCountPtr<Chaos::FImplicitObject> local_200;
  FImplicitObject *local_1f8;
  FChaosVDScopedTLSBufferAccessor local_1f0;
  FImplicitObject **local_1e8;
  char *local_1e0;
  code *local_1d8;
  undefined1 *local_1d0;
  undefined8 local_1c8;
  FImplicitObject **local_1c0;
  FImplicitObject ***local_1b8;
  TStringView<wchar_t> local_1a8;
  TArrayView<unsigned_char_const_,int> local_198;
  FChaosArchive local_188;
  TArrayView<unsigned_char_const_,int> local_e8;
  FChaosVDMemoryWriter local_d8;
  
  if ((SessionState.bIsTracing != (atomic<bool>)0x0) && (param_1 != (FImplicitObject *)0x0)) {
    local_1e8 = &local_res20;
    local_1e0 = local_res10;
    local_1c0 = &local_1f8;
    local_1b8 = &local_1e8;
    local_res10[0] = '\x01';
    local_1c8 = 0x15506bc70;
    local_res20 = param_1;
    local_1f8 = param_1;
    uVar4 = TStripedMapBase<32,TMap<void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>_>,void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>,FTransactionallySafeStripedMapLockingPolicy>
            ::
            ApplyUnlocked<_TStripedMapBase<32,TMap<void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>_>,void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>,FTransactionallySafeStripedMapLockingPolicy>::FindOrProduce<_Chaos::VD::FCachedObjectTraceIDByPtr<unsigned_int>::FindOrProduceTraceObjectID<Chaos::FImplicitObject,_FChaosVisualDebuggerTrace::TraceImplicitObject_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                      ((TStripedMapBase<32,TMap<void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>_>,void_const_*,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned_int,0>,FTransactionallySafeStripedMapLockingPolicy>
                        *)&SessionState.TracedGeometryHashCache,param_1,(<lambda_1> *)&local_1c8);
    if (local_res10[0] == '\0') {
      LOCK();
      *(int *)&param_1->_padding_ = (int)param_1->_padding_ + 1;
      UNLOCK();
      local_208[0] = uVar4;
      local_200.Reference = param_1;
      FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_1f0);
      Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
                (&local_d8,local_1f0.BufferRef,&SessionState.CVDNameTable);
      FArchiveProxy::FArchiveProxy((FArchiveProxy *)&local_188,(FArchive *)&local_d8);
      local_188._padding_ = (longlong)&___7FChaosArchive_Chaos__6B_;
      this = ::operator_new(0x158);
      local_188.Context.Ptr = (FChaosArchiveContext *)0x0;
      if (this != (FChaosArchiveContext *)0x0) {
        local_188.Context.Ptr = Chaos::FChaosArchiveContext::FChaosArchiveContext(this);
      }
      FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_188,true);
      if (*(uint **)(local_188._padding_ + 8) < *(uint **)local_188._padding_ + 1) {
        if ((local_188._padding_._2_1_ & 1) == 0) {
          if (*(code **)(local_188._padding_ + 0x188) == FArchiveProxy::Serialize) {
            (**(code **)(*(longlong *)local_188._padding_ + 0x188))();
          }
          else {
            (**(code **)(local_188._padding_ + 0x188))(&local_188);
          }
        }
        else {
          FArchive::SerializeByteOrderSwapped((FArchive *)&local_188,local_208);
        }
      }
      else {
        local_208[0] = **(uint **)local_188._padding_;
        *(longlong *)local_188._padding_ = *(longlong *)local_188._padding_ + 4;
      }
      Chaos::FChaosArchive::SerializePtr<Chaos::FImplicitObject>(&local_188,&local_200);
      TVar3.Ptr = local_188.Context.Ptr;
      if (local_188.Context.Ptr != (FChaosArchiveContext *)0x0) {
        Chaos::FChaosArchiveContext::~FChaosArchiveContext(local_188.Context.Ptr);
        ::operator_delete(TVar3.Ptr,0x158);
      }
      FArchiveProxy::~FArchiveProxy((FArchiveProxy *)&local_188);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_d8.NameTableInstance.SharedReferenceCount.ReferenceController);
      FArchive::~FArchive((FArchive *)&local_d8);
      local_1a8 = FChaosVDImplicitObjectDataWrapper<TRefCountPtr<Chaos::FImplicitObject>,Chaos::FChaosArchive>
                  ::WrapperTypeName;
      pTVar5 = TArrayView<unsigned_char_const_,int>::
               TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                         (&local_e8,local_1f0.BufferRef);
      local_198.DataPtr = pTVar5->DataPtr;
      local_198.ArrayNum = pTVar5->ArrayNum;
      local_198._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
      TraceBinaryData(&local_198,&local_1a8,None);
      (local_1f0.BufferRef)->ArrayNum = 0;
      if ((local_1f0.BufferRef)->ArrayMax < 0xffff) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0xffff,&(local_1f0.BufferRef)->AllocatorInstance,0,
                   &(local_1f0.BufferRef)->ArrayMax);
      }
      puVar6 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
      local_1d0 = local_res18;
      local_1d8 = UE::Core::Private::Function::
                  TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                  ::Call;
      pFVar7 = FThreadSingletonInitializer::Get
                         ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_1d8,puVar6);
      *(int *)(pFVar7 + 0x45) = *(int *)(pFVar7 + 0x45) + -1;
      if (local_200.Reference != (FImplicitObject *)0x0) {
        LOCK();
        plVar1 = &(local_200.Reference)->_padding_;
        lVar2 = *plVar1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if (((int)lVar2 == 1) && (*(int *)((longlong)&(local_200.Reference)->_padding_ + 4) == 0)) {
          (**(code **)(local_200.Reference)->_padding_)(local_200.Reference,1);
        }
      }
    }
    return uVar4;
  }
  return 0;
}

// TraceImplicitObject @ 1437b48a0

void __cdecl
FChaosVisualDebuggerTrace::TraceImplicitObject
          (FChaosVDImplicitObjectDataWrapper<TRefCountPtr<Chaos::FImplicitObject>,Chaos::FChaosArchive>
           *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  FImplicitObject *pFVar3;
  undefined1 local_res10 [24];
  
  if (SessionState.bIsTracing == (atomic<bool>)0x0) {
    pFVar3 = (param_1->ImplicitObject).Reference;
  }
  else {
    `FChaosVisualDebuggerTrace::TraceImplicitObject'::__l2::<lambda_1>::operator()(local_res10);
    pFVar3 = (param_1->ImplicitObject).Reference;
  }
  if (pFVar3 != (FImplicitObject *)0x0) {
    LOCK();
    plVar1 = &pFVar3->_padding_;
    lVar2 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if (((int)lVar2 == 1) && (*(int *)((longlong)&pFVar3->_padding_ + 4) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001437b48f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)pFVar3->_padding_)(pFVar3,1);
      return;
    }
  }
  return;
}

// TraceJointsConstraints @ 1437b4910

void __cdecl FChaosVisualDebuggerTrace::TraceJointsConstraints(FPBDJointConstraints *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar4;
  <lambda_1> local_res10 [24];
  code *local_68;
  <lambda_1> *local_60;
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  TArray<Chaos::FPBDJointConstraintHandle_*,TSizedDefaultAllocator<32>_> **local_40;
  TArray<Chaos::FPBDJointConstraintHandle_*,TSizedDefaultAllocator<32>_> *local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  FChaosVDOptionalDataChannel *local_20;
  TReferenceControllerBase<1> *local_18;
  
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar3 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_60 = local_res10;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,puVar3);
    pFVar4 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar4 == (FChaosVDContext *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (((pFVar4->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) {
      local_30 = pFVar4->OwnerID;
      local_38 = &param_1->Handles;
      local_2c = pFVar4->Id;
      local_28 = pFVar4->Type;
      local_24 = pFVar4->Attributes;
      local_20 = (pFVar4->CurrentDataChannel).Object;
      local_18 = (pFVar4->CurrentDataChannel).SharedReferenceCount.ReferenceController;
      if (local_18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FChaosVisualDebuggerTrace::TraceJointsConstraints'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_40 = &local_38;
      local_58.DataPtr = (void **)0x0;
      local_58.ArrayNum = 0;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",(param_1->Handles).ArrayNum,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_48,local_res10[0],None,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return;
}

// TraceMidPhase @ 1437b4a80

void __cdecl FChaosVisualDebuggerTrace::TraceMidPhase(FParticlePairMidPhase *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  undefined1 local_res10 [8];
  FChaosVDScopedTLSBufferAccessor local_res18 [2];
  code *local_138;
  undefined1 *local_130;
  FChaosVDParticlePairMidPhase local_128;
  TStringView<wchar_t> local_f8;
  TArrayView<unsigned_char_const_,int> local_e8;
  TArrayView<unsigned_char_const_,int> local_d8;
  FChaosVDMemoryWriter local_c8;
  
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar3 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_130 = local_res10;
    local_138 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_138,puVar3);
    pFVar4 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar4 == (FChaosVDContext *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if ((((((pFVar4->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) &&
              (param_1->Particle0 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) &&
             (param_1->Particle1 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) &&
            ((bVar2 = IsInRelevancyVolume(param_1->Particle0), bVar2 ||
             (bVar2 = IsInRelevancyVolume(param_1->Particle1), bVar2)))) {
      FChaosVDDataWrapperUtils::BuildMidPhaseDataWrapperFromMidPhase(&local_128,param_1);
      local_128.SolverID = pFVar4->Id;
      FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(local_res18);
      Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
                (&local_c8,local_res18[0].BufferRef,&SessionState.CVDNameTable);
      FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_c8,true);
      FChaosVDParticlePairMidPhase::Serialize(&local_128,(FArchive *)&local_c8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.NameTableInstance.SharedReferenceCount.ReferenceController);
      FArchive::~FArchive((FArchive *)&local_c8);
      local_f8 = FChaosVDParticlePairMidPhase::WrapperTypeName;
      pTVar5 = TArrayView<unsigned_char_const_,int>::
               TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                         (&local_d8,local_res18[0].BufferRef);
      local_e8.DataPtr = pTVar5->DataPtr;
      local_e8.ArrayNum = pTVar5->ArrayNum;
      local_e8._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
      TraceBinaryData(&local_e8,&local_f8,None);
      FChaosVDScopedTLSBufferAccessor::~FChaosVDScopedTLSBufferAccessor(local_res18);
      DestructItems<FChaosVDConstraint,int>
                ((FChaosVDConstraint *)local_128.Constraints.AllocatorInstance.Data,
                 local_128.Constraints.ArrayNum);
      if ((FChaosVDConstraint *)local_128.Constraints.AllocatorInstance.Data !=
          (FChaosVDConstraint *)0x0) {
        FMemory::Free(local_128.Constraints.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// TraceMidPhasesFromCollisionConstraints @ 1437b4c70

void __cdecl
FChaosVisualDebuggerTrace::TraceMidPhasesFromCollisionConstraints(FPBDCollisionConstraints *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FParticlePairMidPhase *pFVar3;
  code *pcVar4;
  bool bVar5;
  uint *puVar6;
  FChaosVDThreadContext *pFVar7;
  FChaosVDContext *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  undefined1 local_88 [8];
  code *local_80;
  undefined1 *local_78;
  code *local_70;
  undefined1 *local_68;
  code *local_60;
  undefined1 *local_58;
  FChaosVDContext local_50;
  
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar6 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_78 = local_res10;
    local_80 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar7 = (FChaosVDThreadContext *)
             FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_80,puVar6);
    pFVar8 = FChaosVDThreadContext::GetCurrentContext(pFVar7,Solver);
    if (pFVar8 == (FChaosVDContext *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (((pFVar8->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) {
      local_50.OwnerID = pFVar8->OwnerID;
      local_50.Id = pFVar8->Id;
      local_50.Type = pFVar8->Type;
      local_50.Attributes = pFVar8->Attributes;
      local_50.CurrentDataChannel.Object = (pFVar8->CurrentDataChannel).Object;
      local_50.CurrentDataChannel.SharedReferenceCount.ReferenceController =
           (pFVar8->CurrentDataChannel).SharedReferenceCount.ReferenceController;
      if (local_50.CurrentDataChannel.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_50.CurrentDataChannel.SharedReferenceCount.ReferenceController)->SharedReferenceCount
             = (atomic<int>)
               ((int)(local_50.CurrentDataChannel.SharedReferenceCount.ReferenceController)->
                     SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar9 = (param_1->ConstraintAllocator).ParticlePairMidPhases.AllocatorInstance.Data;
      iVar2 = (param_1->ConstraintAllocator).ParticlePairMidPhases.ArrayNum;
      pFVar1 = pFVar9 + (longlong)iVar2 * 8;
      while( true ) {
        if ((param_1->ConstraintAllocator).ParticlePairMidPhases.ArrayNum != iVar2) {
          `TCheckedPointerIterator<TUniquePtr<Chaos::FParticlePairMidPhase,TDefaultDelete<Chaos::FParticlePairMidPhase>_>,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (pFVar9 == pFVar1) break;
        pFVar3 = *(FParticlePairMidPhase **)pFVar9;
        puVar6 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_68 = local_res20;
        local_70 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar7 = (FChaosVDThreadContext *)
                 FThreadSingletonInitializer::Get
                           ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_70,puVar6);
        FChaosVDThreadContext::PushContext(pFVar7,&local_50);
        TraceMidPhase(pFVar3);
        puVar6 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_58 = local_88;
        local_60 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar7 = (FChaosVDThreadContext *)
                 FThreadSingletonInitializer::Get
                           ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,puVar6);
        FChaosVDThreadContext::PopContext(pFVar7);
        pFVar9 = pFVar9 + 8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_50.CurrentDataChannel.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// TraceNetworkTickOffset @ 1437b4e60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FChaosVisualDebuggerTrace::TraceNetworkTickOffset(int param_1,int param_2)

{
  undefined1 auStack_48 [32];
  int *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((SessionState.bIsTracing != (atomic<bool>)0x0) && (-1 < ChaosVDChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDNetworkTickOffsetFields>
              ((TLogScope<0> *)&local_28);
    *local_28 = param_1;
    local_28[1] = param_2;
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// TraceNonSolverLocation @ 1437b4ee0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FChaosVisualDebuggerTrace::TraceNonSolverLocation
          (TVector<double> *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_48 [32];
  LARGE_INTEGER local_28;
  LARGE_INTEGER *local_20;
  longlong local_18;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_48;
  if ((SessionState.bIsTracing != (atomic<bool>)0x0) && (-1 < ChaosVDChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDNonSolverLocationFields>
              ((TLogScope<1> *)&local_20);
    QueryPerformanceCounter(&local_28);
    iVar6 = param_2->Size;
    pwVar2 = param_2->DataPtr;
    *local_20 = local_28;
    local_20[1].s = (_struct_19)(param_1->field0_0x0)._s_0.X;
    local_20[2] = (LARGE_INTEGER)(param_1->field0_0x0)._s_0.Y;
    local_28 = (LARGE_INTEGER)(param_1->field0_0x0)._s_0.Z;
    local_20[3] = local_28;
    if (iVar6 < 0) {
      iVar6 = 0;
      wVar1 = *pwVar2;
      pwVar4 = pwVar2;
      while (wVar1 != L'\0') {
        pwVar4 = pwVar4 + 1;
        iVar6 = iVar6 + 1;
        wVar1 = *pwVar4;
      }
    }
    UE::Trace::Private::Field_WriteStringWide(4,pwVar2,iVar6);
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
    **(undefined1 **)(lVar3 + 0x20) = 6;
    lVar5 = *(longlong *)(lVar3 + 0x20) + 1;
    *(longlong *)(lVar3 + 0x20) = lVar5;
    if (lVar3 != local_18) {
      *(longlong *)(lVar3 + 0x28) = lVar5;
    }
    *(undefined8 *)(local_18 + 0x28) = *(undefined8 *)(local_18 + 0x20);
  }
  return;
}

// TraceNonSolverTransform @ 1437b5040

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FChaosVisualDebuggerTrace::TraceNonSolverTransform
          (TTransform<double> *param_1,TStringView<wchar_t> *param_2)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  wchar_t *pwVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58 [6];
  LARGE_INTEGER *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_78;
  if ((SessionState.bIsTracing != (atomic<bool>)0x0) && (-1 < ChaosVDChannel->Enabled)) {
    UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDNonSolverTransformFields>
              ((TLogScope<1> *)&local_28);
    QueryPerformanceCounter(local_58);
    iVar6 = param_2->Size;
    pwVar3 = param_2->DataPtr;
    *local_28 = local_58[0];
    local_28[1] = (LARGE_INTEGER)(param_1->Translation).XY.m128d_f64[0];
    local_28[2] = *(LARGE_INTEGER *)((param_1->Translation).XY.m128d_f64 + 1);
    local_28[3] = (LARGE_INTEGER)(param_1->Translation).ZW.m128d_f64[0];
    local_28[4] = (LARGE_INTEGER)(param_1->Scale3D).XY.m128d_f64[0];
    local_28[5] = *(LARGE_INTEGER *)((param_1->Scale3D).XY.m128d_f64 + 1);
    local_28[6] = (LARGE_INTEGER)(param_1->Scale3D).ZW.m128d_f64[0];
    local_28[7].s = (_struct_19)(param_1->Rotation).XY.m128d_f64[0];
    local_28[8] = *(LARGE_INTEGER *)((param_1->Rotation).XY.m128d_f64 + 1);
    local_28[9] = (LARGE_INTEGER)(param_1->Rotation).ZW.m128d_f64[0];
    local_58[0] = *(LARGE_INTEGER *)((param_1->Rotation).ZW.m128d_f64 + 1);
    local_28[10] = local_58[0];
    if (iVar6 < 0) {
      iVar6 = 0;
      wVar2 = *pwVar3;
      pwVar1 = pwVar3;
      while (wVar2 != L'\0') {
        pwVar1 = pwVar1 + 1;
        iVar6 = iVar6 + 1;
        wVar2 = *pwVar1;
      }
    }
    UE::Trace::Private::Field_WriteStringWide(0xb,pwVar3,iVar6);
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    lVar4 = *(longlong *)(lVar4 + 0x20);
    **(undefined1 **)(lVar4 + 0x20) = 6;
    lVar5 = *(longlong *)(lVar4 + 0x20) + 1;
    *(longlong *)(lVar4 + 0x20) = lVar5;
    if (lVar4 != local_20) {
      *(longlong *)(lVar4 + 0x28) = lVar5;
    }
    *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
  }
  return;
}

// TraceParticle @ 1437b5230

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FChaosVisualDebuggerTrace::TraceParticle
          (TGeometryParticleHandleImp<double,3,1> *param_1,FChaosVDContext *param_2)

{
  int *piVar1;
  ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_> FVar2;
  code *pcVar3;
  bool bVar4;
  FImplicitObject *pFVar5;
  IPhysicsProxyBase *pIVar6;
  TArrayView<unsigned_char_const_,int> *pTVar7;
  ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_> FVar8;
  uint *puVar9;
  FTlsAutoCleanup *pFVar10;
  longlong lVar11;
  uint uVar12;
  undefined1 auStackY_748 [32];
  char local_6f8 [8];
  FChaosVDShapeCollisionData local_6f0;
  FChaosVDScopedTLSBufferAccessor local_6c0;
  FChaosVDScopedTLSBufferAccessor local_6b8;
  TGeometryParticleHandleImp<double,3,1> *local_6b0;
  FChaosVDParticleMetadata local_6a8;
  TGeometryParticleHandleImp<double,3,1> *local_658;
  FChaosVDParticleMetadata *local_650;
  TGeometryParticleHandleImp<double,3,1> **local_648;
  char *local_640;
  FScriptContainerElement *local_638;
  int iStack_630;
  undefined4 uStack_62c;
  code *local_628;
  char *local_620;
  undefined8 local_618;
  TGeometryParticleHandleImp<double,3,1> **local_610;
  TGeometryParticleHandleImp<double,3,1> ***local_608;
  TStringView<wchar_t> local_5f8;
  TArrayView<unsigned_char_const_,int> local_5e8;
  TStringView<wchar_t> local_5d8;
  TArrayView<unsigned_char_const_,int> local_5c8;
  TArrayView<unsigned_char_const_,int> local_5b8;
  FChaosVDMemoryWriter local_5a8;
  FChaosVDMemoryWriter local_4e8;
  FChaosVDParticleDataWrapper local_428;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_748;
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    if (param_1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if (2 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
      }
    }
    else {
      bVar4 = IsInRelevancyVolume(param_1);
      if (bVar4) {
        pFVar5 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetGeometry(param_1);
        FChaosVDDataWrapperUtils::BuildParticleDataWrapperFromParticle(&local_428,param_1);
        local_428.GeometryHash = TraceImplicitObject(pFVar5);
        if (SessionState.bIsTracing == (atomic<bool>)0x0) {
          local_428.MetadataId = 0;
        }
        else {
          pIVar6 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                             ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                              (int)param_1->_padding_);
          if (pIVar6 == (IPhysicsProxyBase *)0x0) {
            local_428.MetadataId = 0;
          }
          else {
            local_650 = &local_6a8;
            local_6a8.OwnerName.ComparisonIndex.Value = 0;
            local_6a8.OwnerName.Number = 0;
            local_648 = &local_658;
            local_6a8.ComponentName.ComparisonIndex.Value = 0;
            local_6a8.ComponentName.Number = 0;
            local_640 = local_6f8;
            local_6a8.BoneName.ComparisonIndex.Value = 0;
            local_6a8.BoneName.Number = 0;
            local_610 = &local_6b0;
            local_6a8.Index = -1;
            local_6a8.MapAssetPath.PackageName.ComparisonIndex.Value = 0;
            local_6a8.MapAssetPath.PackageName.Number = 0;
            local_6a8.MapAssetPath.AssetName.ComparisonIndex.Value = 0;
            local_6a8.MapAssetPath.AssetName.Number = 0;
            local_6a8.OwnerAssetPath.PackageName.ComparisonIndex.Value = 0;
            local_6a8.OwnerAssetPath.PackageName.Number = 0;
            local_6a8.OwnerAssetPath.AssetName.ComparisonIndex.Value = 0;
            local_6a8.OwnerAssetPath.AssetName.Number = 0;
            local_6a8.MetadataID = 0;
            local_6f8[0] = '\x01';
            local_618 = 0x15506c770;
            local_6b0 = param_1;
            local_658 = param_1;
            local_608 = &local_648;
            local_428.MetadataId =
                 TStripedMapBase<32,TMap<void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>_>,void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FTransactionallySafeStripedMapLockingPolicy>
                 ::
                 ApplyUnlocked<_TStripedMapBase<32,TMap<void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>_>,void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FTransactionallySafeStripedMapLockingPolicy>::FindOrProduce<_Chaos::VD::FCachedObjectTraceIDByPtr<unsigned___int64>::FindOrProduceTraceObjectID<Chaos::TGeometryParticleHandleImp<double,3,1>,_FChaosVisualDebuggerTrace::TraceParticleMetadata_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                           ((TStripedMapBase<32,TMap<void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>_>,void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FTransactionallySafeStripedMapLockingPolicy>
                             *)&SessionState.ParticleMetadataIDsCache,param_1,
                            (<lambda_1> *)&local_618);
            if (local_6f8[0] == '\0') {
              FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_6c0);
              Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
                        (&local_5a8,local_6c0.BufferRef,&SessionState.CVDNameTable);
              FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_5a8,true);
              FChaosVDParticleMetadata::Serialize(&local_6a8,(FArchive *)&local_5a8);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_5a8.NameTableInstance.SharedReferenceCount.ReferenceController);
              FArchive::~FArchive((FArchive *)&local_5a8);
              local_5f8 = FChaosVDParticleMetadata::WrapperTypeName;
              pTVar7 = TArrayView<unsigned_char_const_,int>::
                       TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                                 (&local_5b8,local_6c0.BufferRef);
              local_5e8.DataPtr = pTVar7->DataPtr;
              local_5e8.ArrayNum = pTVar7->ArrayNum;
              local_5e8._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
              TraceBinaryData(&local_5e8,&local_5f8,None);
              FChaosVDScopedTLSBufferAccessor::~FChaosVDScopedTLSBufferAccessor(&local_6c0);
            }
          }
        }
        local_428.SolverID = param_2->Id;
        FVar8 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                 )Chaos::TGeometryParticleHandleImp<double,3,1>::ShapeInstances(param_1);
        uVar12 = *(int *)((longlong)FVar8 + 0x10);
        piVar1 = (int *)((longlong)FVar8 + 0x10);
        if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
        }
        if (local_428.CollisionDataPerShape.ArrayMax < (int)uVar12) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x2c,4,uVar12,&local_428.CollisionDataPerShape.AllocatorInstance,
                     local_428.CollisionDataPerShape.ArrayNum,
                     &local_428.CollisionDataPerShape.ArrayMax);
          uVar12 = *piVar1;
        }
        if (*(ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
              *)((longlong)FVar8 + 8) !=
            (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
             )0x0) {
          FVar8 = *(ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                    *)((longlong)FVar8 + 8);
        }
        FVar2 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                 )((longlong)FVar8 + (longlong)(int)uVar12 * 8);
        while( true ) {
          if (*piVar1 != uVar12) {
            local_6f8[1] = 0;
            `TCheckedPointerIterator<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_const_,int,0>
            ::operator!='::__l2::<lambda_1>::operator()(local_6f8 + 1);
          }
          if (FVar8 == FVar2) break;
          local_6f0.bIsProbe = '\0';
          local_6f0.bQueryCollision = '\0';
          local_6f0.bSimCollision = '\0';
          local_6f0.CollisionTraceType = UseDefault;
          local_6f0.QueryData.Word0 = 0;
          local_6f0.QueryData.Word1 = 0;
          local_6f0.QueryData.Word2 = 0;
          local_6f0.QueryData.Word3 = 0;
          local_6f0.SimData.Word0 = 0;
          local_6f0.SimData.Word1 = 0;
          local_6f0.SimData.Word2 = 0;
          local_6f0.SimData.Word3 = 0;
          local_6f0._40_4_ = local_6f0._40_4_ & 0xffff0000;
          FChaosVDDataWrapperUtils::CopyShapeDataToWrapper
                    ((TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_> *)
                     FVar8,&local_6f0);
          if (((local_428.CollisionDataPerShape.AllocatorInstance.Data <= &local_6f0) &&
              (&local_6f0 <
               (FChaosVDShapeCollisionData *)
               (local_428.CollisionDataPerShape.AllocatorInstance.Data +
               (longlong)local_428.CollisionDataPerShape.ArrayMax * 0x2c))) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (local_428.CollisionDataPerShape.ArrayNum == local_428.CollisionDataPerShape.ArrayMax)
          {
            local_428.CollisionDataPerShape.ArrayNum =
                 UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x42c,&local_428.CollisionDataPerShape.AllocatorInstance,
                            &local_428.CollisionDataPerShape.ArrayMax);
          }
          lVar11 = (longlong)local_428.CollisionDataPerShape.ArrayNum * 0x2c;
          FVar8 = (ForElementType<TUniquePtr<Chaos::FShapeInstance,TDefaultDelete<Chaos::FShapeInstance>_>_>
                   )((longlong)FVar8 + 8);
          *(ulonglong *)(local_428.CollisionDataPerShape.AllocatorInstance.Data + lVar11) =
               CONCAT44(local_6f0._4_4_,local_6f0.CollisionTraceType);
          *(undefined8 *)(local_428.CollisionDataPerShape.AllocatorInstance.Data + lVar11 + 8) =
               local_6f0.QueryData._0_8_;
          *(undefined8 *)(local_428.CollisionDataPerShape.AllocatorInstance.Data + lVar11 + 0x10) =
               local_6f0.QueryData._8_8_;
          *(undefined8 *)
           (local_428.CollisionDataPerShape.AllocatorInstance.Data + lVar11 + 0x10 + 8) =
               local_6f0.SimData._0_8_;
          *(undefined8 *)(local_428.CollisionDataPerShape.AllocatorInstance.Data + lVar11 + 0x20) =
               local_6f0.SimData._8_8_;
          *(undefined4 *)(local_428.CollisionDataPerShape.AllocatorInstance.Data + lVar11 + 0x28) =
               local_6f0._40_4_;
          local_428.CollisionDataPerShape.ArrayNum = local_428.CollisionDataPerShape.ArrayNum + 1;
        }
        FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_6b8);
        Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
                  (&local_4e8,local_6b8.BufferRef,&SessionState.CVDNameTable);
        FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_4e8,true);
        FChaosVDParticleDataWrapper::Serialize(&local_428,(FArchive *)&local_4e8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_4e8.NameTableInstance.SharedReferenceCount.ReferenceController);
        FArchive::~FArchive((FArchive *)&local_4e8);
        local_5d8 = FChaosVDParticleDataWrapper::WrapperTypeName;
        local_638 = ((local_6b8.BufferRef)->AllocatorInstance).Data;
        iStack_630 = (local_6b8.BufferRef)->ArrayNum;
        if ((iStack_630 < 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_5c8._12_4_ = uStack_62c;
        local_5c8.ArrayNum = iStack_630;
        local_5c8.DataPtr = (uchar *)local_638;
        TraceBinaryData(&local_5c8,&local_5d8,None);
        (local_6b8.BufferRef)->ArrayNum = 0;
        if ((local_6b8.BufferRef)->ArrayMax < 0xffff) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0xffff,&(local_6b8.BufferRef)->AllocatorInstance,0,
                     &(local_6b8.BufferRef)->ArrayMax);
        }
        puVar9 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_620 = local_6f8 + 2;
        local_628 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar10 = FThreadSingletonInitializer::Get
                            ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_628,puVar9);
        *(int *)(pFVar10 + 0x45) = *(int *)(pFVar10 + 0x45) + -1;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_428.ParticleMetadataInstance.SharedReferenceCount.ReferenceController);
        if ((FChaosVDShapeCollisionData *)local_428.CollisionDataPerShape.AllocatorInstance.Data !=
            (FChaosVDShapeCollisionData *)0x0) {
          FMemory::Free(local_428.CollisionDataPerShape.AllocatorInstance.Data);
        }
        if (local_428.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(local_428.ParticleCluster.ConnectivityEdges.AllocatorInstance.Data);
        }
      }
    }
  }
  return;
}

// TraceParticle @ 1437b5790

void __cdecl
FChaosVisualDebuggerTrace::TraceParticle(TGeometryParticleHandleImp<double,3,1> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar4;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar3 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_10 = local_res10;
    local_18 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,puVar3);
    pFVar4 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar4 == (FChaosVDContext *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (((pFVar4->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) {
      TraceParticle(param_1,pFVar4);
      return;
    }
  }
  return;
}

// TraceParticleClusterChildData @ 1437b5840

void __cdecl
FChaosVisualDebuggerTrace::TraceParticleClusterChildData
          (TParticleView<Chaos::TPBDRigidParticles<double,3>_> *param_1,FRigidClustering *param_2,
          FChaosVDContext *param_3)

{
  <lambda_1> local_res20 [8];
  <lambda_2> local_38;
  <lambda_1> local_30;
  FRigidClustering *local_10;
  
  if (((SessionState.bIsTracing != (atomic<bool>)0x0) && (param_2 != (FRigidClustering *)0x0)) &&
     ((CVDDC_ClusterParticlesChildData.Object)->bIsEnabled != (atomic<bool>)0x0)) {
    local_30.CopyContext.OwnerID = param_3->OwnerID;
    local_30.CopyContext.Id = param_3->Id;
    local_30.CopyContext.Type = param_3->Type;
    local_30.CopyContext.Attributes = param_3->Attributes;
    local_30.CopyContext.CurrentDataChannel.Object = (param_3->CurrentDataChannel).Object;
    local_30.CopyContext.CurrentDataChannel.SharedReferenceCount.ReferenceController =
         (param_3->CurrentDataChannel).SharedReferenceCount.ReferenceController;
    if (local_30.CopyContext.CurrentDataChannel.SharedReferenceCount.ReferenceController !=
        (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_30.CopyContext.CurrentDataChannel.SharedReferenceCount.ReferenceController)->
      SharedReferenceCount =
           (atomic<int>)
           ((int)(local_30.CopyContext.CurrentDataChannel.SharedReferenceCount.ReferenceController)
                 ->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_38.Func = &local_30;
    local_10 = param_2;
    Chaos::
    ParticlesParallelFor<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,_Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<_FChaosVisualDebuggerTrace::TraceParticleClusterChildData_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<_FChaosVisualDebuggerTrace::TraceParticleClusterChildData_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
              (param_1,local_res20,&local_38,false);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_30.CopyContext.CurrentDataChannel.SharedReferenceCount.ReferenceController);
  }
  return;
}

// TraceParticleDestroyed @ 1437b58e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
FChaosVisualDebuggerTrace::TraceParticleDestroyed(TGeometryParticleHandleImp<double,3,1> *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FImplicitObject *pFVar5;
  uint *puVar6;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar7;
  FUniqueIdx *pFVar8;
  undefined1 auStackY_78 [32];
  undefined1 local_48 [8];
  LARGE_INTEGER local_40;
  code *local_38;
  undefined1 *local_30;
  int *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    if (param_1 == (TGeometryParticleHandleImp<double,3,1> *)0x0) {
      if (2 < (byte)LogChaos._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
        return;
      }
    }
    else {
      pFVar5 = Chaos::TGeometryParticleHandleImp<double,3,1>::GetGeometry(param_1);
      Chaos::VD::FCachedObjectTraceIDByPtr<unsigned_int>::
      RemoveCachedTraceObjectID<Chaos::FImplicitObject>
                (&SessionState.TracedGeometryHashCache,pFVar5);
      puVar6 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
      local_30 = local_48;
      local_38 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      this = (FChaosVDThreadContext *)
             FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar6);
      pFVar7 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
      if (pFVar7 == (FChaosVDContext *)0x0) {
        bVar4 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<604040631391617141>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                           ,0x75,"Context");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      else if (((pFVar7->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) {
        pFVar8 = Chaos::TGeometryParticlesImp<double,3,0>::UniqueIdx
                           ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                            (int)param_1->_padding_);
        iVar1 = pFVar7->Id;
        iVar2 = pFVar8->Idx;
        QueryPerformanceCounter(&local_40);
        if (-1 < ChaosVDChannel->Enabled) {
          UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDParticleDestroyedFields>
                    ((TLogScope<0> *)&local_28);
          *local_28 = iVar1;
          *(LARGE_INTEGER *)(local_28 + 1) = local_40;
          local_28[3] = iVar2;
          *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
        }
      }
    }
  }
  return;
}

// TraceParticleMetadata @ 1437b5a60

ulong64 __cdecl
FChaosVisualDebuggerTrace::TraceParticleMetadata(TGeometryParticleHandleImp<double,3,1> *param_1)

{
  IPhysicsProxyBase *pIVar1;
  ulong64 uVar2;
  TArrayView<unsigned_char_const_,int> *pTVar3;
  FChaosVDScopedTLSBufferAccessor local_res10;
  TGeometryParticleHandleImp<double,3,1> *local_res18;
  undefined1 local_168 [16];
  FChaosVDParticleMetadata local_158;
  undefined1 local_108 [16];
  undefined1 *local_f8;
  TGeometryParticleHandleImp<double,3,1> *local_f0;
  FChaosVDParticleMetadata *local_e8;
  TArrayView<unsigned_char_const_,int> local_d8;
  FChaosVDMemoryWriter local_c8;
  
  if ((SessionState.bIsTracing != (atomic<bool>)0x0) &&
     (param_1 != (TGeometryParticleHandleImp<double,3,1> *)0x0)) {
    pIVar1 = Chaos::TGeometryParticlesImp<double,3,0>::PhysicsProxy
                       ((TGeometryParticlesImp<double,3,0> *)param_1->_padding_,
                        (int)param_1->_padding_);
    if (pIVar1 != (IPhysicsProxyBase *)0x0) {
      local_158.OwnerName.ComparisonIndex.Value = 0;
      local_158.OwnerName.Number = 0;
      local_158.ComponentName.ComparisonIndex.Value = 0;
      local_158.ComponentName.Number = 0;
      local_158.BoneName.ComparisonIndex.Value = 0;
      local_158.BoneName.Number = 0;
      local_158.MapAssetPath.PackageName.ComparisonIndex.Value = 0;
      local_158.MapAssetPath.PackageName.Number = 0;
      local_158.MapAssetPath.AssetName.ComparisonIndex.Value = 0;
      local_158.MapAssetPath.AssetName.Number = 0;
      local_158.OwnerAssetPath.PackageName.ComparisonIndex.Value = 0;
      local_158.OwnerAssetPath.PackageName.Number = 0;
      local_158.OwnerAssetPath.AssetName.ComparisonIndex.Value = 0;
      local_158.OwnerAssetPath.AssetName.Number = 0;
      local_158.MetadataID = 0;
      local_e8 = &local_158;
      local_168._8_8_ = &local_res10;
      local_168._0_8_ = &local_f0;
      local_108._8_8_ = &local_res18;
      local_f8 = local_168;
      local_158.Index = -1;
      local_res10.BufferRef._0_1_ = '\x01';
      local_108._0_8_ = &SessionState.ParticleMetadataIDsCache;
      local_res18 = param_1;
      local_f0 = param_1;
      uVar2 = TStripedMapBase<32,TMap<void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>_>,void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FTransactionallySafeStripedMapLockingPolicy>
              ::
              ApplyUnlocked<_TStripedMapBase<32,TMap<void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>_>,void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FTransactionallySafeStripedMapLockingPolicy>::FindOrProduce<_Chaos::VD::FCachedObjectTraceIDByPtr<unsigned___int64>::FindOrProduceTraceObjectID<Chaos::TGeometryParticleHandleImp<double,3,1>,_FChaosVisualDebuggerTrace::TraceParticleMetadata_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>_>
                        ((TStripedMapBase<32,TMap<void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>_>,void_const_*,unsigned___int64,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<void_const_*,unsigned___int64,0>,FTransactionallySafeStripedMapLockingPolicy>
                          *)&SessionState.ParticleMetadataIDsCache,param_1,(<lambda_1> *)local_108);
      if ((char)local_res10.BufferRef == '\0') {
        FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_res10);
        Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
                  (&local_c8,
                   (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                   CONCAT71(local_res10.BufferRef._1_7_,(char)local_res10.BufferRef),
                   &SessionState.CVDNameTable);
        FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_c8,true);
        FChaosVDParticleMetadata::Serialize(&local_158,(FArchive *)&local_c8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_c8.NameTableInstance.SharedReferenceCount.ReferenceController);
        FArchive::~FArchive((FArchive *)&local_c8);
        local_168._0_8_ = FChaosVDParticleMetadata::WrapperTypeName.DataPtr;
        local_168._8_4_ = FChaosVDParticleMetadata::WrapperTypeName.Size;
        local_168._12_4_ = FChaosVDParticleMetadata::WrapperTypeName._12_4_;
        pTVar3 = TArrayView<unsigned_char_const_,int>::
                 TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                           ((TArrayView<unsigned_char_const_,int> *)local_108,
                            (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)
                            CONCAT71(local_res10.BufferRef._1_7_,(char)local_res10.BufferRef));
        local_d8.DataPtr = pTVar3->DataPtr;
        local_d8.ArrayNum = pTVar3->ArrayNum;
        local_d8._12_4_ = *(undefined4 *)&pTVar3->field_0xc;
        TraceBinaryData(&local_d8,(TStringView<wchar_t> *)local_168,None);
        FChaosVDScopedTLSBufferAccessor::~FChaosVDScopedTLSBufferAccessor(&local_res10);
      }
      return uVar2;
    }
  }
  return 0;
}

// TraceParticles @ 1437b5c10

void __cdecl FChaosVisualDebuggerTrace::TraceParticles(TGeometryParticleHandles<double,3> *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar4;
  <lambda_1> local_res10 [24];
  code *local_68;
  <lambda_1> *local_60;
  TArrayView<std::nullptr_t,int> local_58;
  code *local_48;
  TGeometryParticleHandles<double,3> **local_40;
  TGeometryParticleHandles<double,3> *local_38;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  FChaosVDOptionalDataChannel *local_20;
  TReferenceControllerBase<1> *local_18;
  
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar3 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_60 = local_res10;
    local_68 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_68,puVar3);
    pFVar4 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar4 == (FChaosVDContext *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (((pFVar4->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) {
      local_30 = pFVar4->OwnerID;
      local_2c = pFVar4->Id;
      local_28 = pFVar4->Type;
      local_24 = pFVar4->Attributes;
      local_20 = (pFVar4->CurrentDataChannel).Object;
      local_18 = (pFVar4->CurrentDataChannel).SharedReferenceCount.ReferenceController;
      if (local_18 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        local_18->SharedReferenceCount = (atomic<int>)((int)local_18->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_48 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FChaosVisualDebuggerTrace::TraceParticles'::__l2::<lambda_1>,void,int>
                 ::Call;
      local_40 = &local_38;
      local_58.DataPtr = (void **)0x0;
      local_58.ArrayNum = 0;
      local_38 = param_1;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",(int)param_1->_padding_,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_48,local_res10[0],None,&local_58);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_18);
    }
  }
  return;
}

// TraceParticlesSoA @ 1437b5d70

void __cdecl
FChaosVisualDebuggerTrace::TraceParticlesSoA(FPBDRigidsSOAs *param_1,FRigidClustering *param_2)

{
  atomic<int> *paVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  TReferenceControllerBase<1> *pTVar5;
  code *pcVar6;
  bool bVar7;
  uint *puVar8;
  FChaosVDThreadContext *pFVar9;
  FChaosVDContext *pFVar10;
  FChaosVDContext *pFVar11;
  FSharedReferencer<1> FVar12;
  ForElementType<FSetElementId> FVar13;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  <lambda_1> local_e8;
  <lambda_1> local_e7;
  undefined1 local_e6;
  <lambda_1> local_e5 [5];
  <lambda_2> local_e0;
  <lambda_2> local_d8;
  <lambda_2> local_d0;
  undefined1 local_c8 [36];
  int local_a4;
  int local_a0;
  int local_9c;
  FChaosVDOptionalDataChannel *local_98;
  TReferenceControllerBase<1> *local_90;
  <lambda_1> local_88;
  FRigidClustering *local_68;
  code *local_60;
  undefined1 *local_58;
  code *local_50;
  undefined1 *local_48;
  code *local_40;
  undefined1 *local_38;
  
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar8 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_58 = local_res18;
    local_60 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar9 = (FChaosVDThreadContext *)
             FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_60,puVar8);
    pFVar10 = FChaosVDThreadContext::GetCurrentContext(pFVar9,Solver);
    if (pFVar10 == (FChaosVDContext *)0x0) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (bVar7) {
code_r0x0001437b5f1c:
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    else if (((pFVar10->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) {
      uVar3 = pFVar10->Id;
      AcquireSRWLockShared((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
      if (SessionState.SolverIDsForDeltaRecording.Elements._8_4_ !=
          SessionState.SolverIDsForDeltaRecording.Elements._52_4_) {
        FVar13 = (ForElementType<FSetElementId>)0x15506bbb8;
        if (SessionState.SolverIDsForDeltaRecording.Hash.SecondaryData !=
            (ForElementType<FSetElementId>)0x0) {
          FVar13 = SessionState.SolverIDsForDeltaRecording.Hash.SecondaryData;
        }
        iVar4 = *(int *)((longlong)FVar13 +
                        (ulonglong)(SessionState.SolverIDsForDeltaRecording.HashSize - 1U & uVar3) *
                        4);
        while (iVar4 != -1) {
          lVar2 = SessionState.SolverIDsForDeltaRecording.Elements._0_8_ + (longlong)iVar4 * 0xc;
          if (*(uint *)(SessionState.SolverIDsForDeltaRecording.Elements._0_8_ +
                       (longlong)iVar4 * 0xc) == uVar3) {
            ReleaseSRWLockShared((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
            if (lVar2 == 0) goto LAB_1437b5ea8;
            if (SessionState.bIsTracing != (atomic<bool>)0x0) {
              puVar8 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
              local_48 = local_res20;
              local_50 = UE::Core::Private::Function::
                         TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                         ::Call;
              pFVar9 = (FChaosVDThreadContext *)
                       FThreadSingletonInitializer::Get
                                 ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_50,puVar8)
              ;
              pFVar11 = FChaosVDThreadContext::GetCurrentContext(pFVar9,Solver);
              if (pFVar11 == (FChaosVDContext *)0x0) {
                bVar7 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<2454937056523059895>,false,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVisualDebuggerTrace.h"
                                   ,0x2b7,"CVDContextData");
                if (bVar7) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
              }
              else {
                pTVar5 = (pFVar11->CurrentDataChannel).SharedReferenceCount.ReferenceController;
                local_c8._0_4_ = pFVar11->OwnerID;
                local_c8._4_4_ = pFVar11->Id;
                local_c8._8_4_ = pFVar11->Type;
                local_c8._12_4_ = pFVar11->Attributes;
                local_c8._16_8_ = (pFVar11->CurrentDataChannel).Object;
                if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
                  paVar1 = &pTVar5->SharedReferenceCount;
                  LOCK();
                  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
                  UNLOCK();
                  LOCK();
                  *paVar1 = (atomic<int>)((int)*paVar1 + 1);
                  UNLOCK();
                }
                local_e0.Func = (<lambda_1> *)local_c8;
                local_c8._24_8_ = pTVar5;
                Chaos::
                ParticlesParallelFor<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,_Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<_FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TPBDRigidParticles<double,3>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<_FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TPBDRigidParticles<double,3>_>_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                          (&param_1->DirtyParticlesView,&local_e8,&local_e0,false);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          ((TReferenceControllerBase<1> *)local_c8._24_8_);
                SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                          (pTVar5);
              }
            }
            if (SessionState.bIsTracing == (atomic<bool>)0x0) {
              return;
            }
            if (param_2 == (FRigidClustering *)0x0) {
              return;
            }
            if ((CVDDC_ClusterParticlesChildData.Object)->bIsEnabled == (atomic<bool>)0x0) {
              return;
            }
            local_88.CopyContext.OwnerID = pFVar10->OwnerID;
            local_88.CopyContext.Id = pFVar10->Id;
            local_88.CopyContext.Type = pFVar10->Type;
            local_88.CopyContext.Attributes = pFVar10->Attributes;
            local_88.CopyContext.CurrentDataChannel.Object = (pFVar10->CurrentDataChannel).Object;
            local_88.CopyContext.CurrentDataChannel.SharedReferenceCount.ReferenceController =
                 (pFVar10->CurrentDataChannel).SharedReferenceCount.ReferenceController;
            if (local_88.CopyContext.CurrentDataChannel.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_88.CopyContext.CurrentDataChannel.SharedReferenceCount.ReferenceController)->
              SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_88.CopyContext.CurrentDataChannel.SharedReferenceCount.
                         ReferenceController)->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_d8.Func = &local_88;
            local_68 = param_2;
            Chaos::
            ParticlesParallelFor<Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>,_Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<_FChaosVisualDebuggerTrace::TraceParticleClusterChildData_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_Chaos::TParticleView<Chaos::TPBDRigidParticles<double,3>_>::ParallelFor<_FChaosVisualDebuggerTrace::TraceParticleClusterChildData_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                      (&param_1->DirtyParticlesView,&local_e7,&local_d8,false);
            FVar12.ReferenceController =
                 local_88.CopyContext.CurrentDataChannel.SharedReferenceCount.ReferenceController;
            goto LAB_1437b6118;
          }
          iVar4 = *(int *)(lVar2 + 4);
        }
      }
      ReleaseSRWLockShared((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
LAB_1437b5ea8:
      if (SessionState.bIsTracing != (atomic<bool>)0x0) {
        puVar8 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_38 = &local_e6;
        local_40 = UE::Core::Private::Function::
                   TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                   ::Call;
        pFVar9 = (FChaosVDThreadContext *)
                 FThreadSingletonInitializer::Get
                           ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_40,puVar8);
        pFVar10 = FChaosVDThreadContext::GetCurrentContext(pFVar9,Solver);
        if (pFVar10 == (FChaosVDContext *)0x0) {
          bVar7 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<2454937056523059895>,false,
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVisualDebuggerTrace.h"
                             ,0x2b7,"CVDContextData");
          if (bVar7) goto code_r0x0001437b5f1c;
        }
        else {
          FVar12.ReferenceController =
               (pFVar10->CurrentDataChannel).SharedReferenceCount.ReferenceController;
          local_c8._32_4_ = pFVar10->OwnerID;
          local_a4 = pFVar10->Id;
          local_a0 = pFVar10->Type;
          local_9c = pFVar10->Attributes;
          local_98 = (pFVar10->CurrentDataChannel).Object;
          if (FVar12.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
            paVar1 = &(FVar12.ReferenceController)->SharedReferenceCount;
            LOCK();
            *paVar1 = (atomic<int>)((int)*paVar1 + 1);
            UNLOCK();
            LOCK();
            *paVar1 = (atomic<int>)((int)*paVar1 + 1);
            UNLOCK();
          }
          local_d0.Func = (<lambda_1> *)(local_c8 + 0x20);
          local_90 = FVar12.ReferenceController;
          Chaos::
          ParticlesParallelFor<Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>,_Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>::ParallelFor<_FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TGeometryParticlesImp<double,3,0>_>_::__l2::<lambda_1>_>_::__l2::<lambda_1>,_Chaos::TParticleView<Chaos::TGeometryParticlesImp<double,3,0>_>::ParallelFor<_FChaosVisualDebuggerTrace::TraceParticlesView<Chaos::TGeometryParticlesImp<double,3,0>_>_::__l2::<lambda_1>_>_::__l2::<lambda_2>_>
                    (&param_1->AllParticlesView,local_e5,&local_d0,false);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_90);
LAB_1437b6118:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (FVar12.ReferenceController);
        }
      }
    }
  }
  return;
}

// TraceSceneAccelerationStructures @ 1437b6150

void __cdecl
FChaosVisualDebuggerTrace::TraceSceneAccelerationStructures
          (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *param_1)

{
  int iVar1;
  code *pcVar2;
  TStringView<wchar_t> TVar3;
  int iVar4;
  FChaosVDScopedTLSBufferAccessor FVar5;
  bool bVar6;
  uint *puVar7;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar8;
  FTlsAutoCleanup *pFVar9;
  ForAnyElementType this_00;
  FChaosVDAABBTreeDataWrapper *pFVar10;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<FChaosVDAABBTreeDataWrapper,TSizedDefaultAllocator<32>_> local_178;
  FChaosVDScopedTLSBufferAccessor local_168;
  code *local_160;
  undefined1 *local_158;
  FScriptContainerElement *local_148;
  int iStack_140;
  undefined4 uStack_13c;
  code *local_138;
  undefined1 *local_130;
  TStringView<wchar_t> local_128;
  TArrayView<unsigned_char_const_,int> local_118;
  FChaosVDMemoryWriter local_108;
  
  if ((SessionState.bIsTracing != (atomic<bool>)0x0) &&
     (param_1 != (ISpatialAccelerationCollection<Chaos::FAccelerationStructureHandle,double,3> *)0x0
     )) {
    puVar7 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_158 = local_res18;
    local_160 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_160,puVar7);
    pFVar8 = FChaosVDThreadContext::GetCurrentContext(this);
    if (pFVar8 == (FChaosVDContext *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (bVar6) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else if (((pFVar8->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) {
      local_178.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_178.ArrayNum = 0;
      local_178.ArrayMax = 0;
      FChaosVDDataWrapperUtils::BuildDataWrapperFromAABBStructure(param_1,pFVar8->Id,&local_178);
      iVar4 = local_178.ArrayNum;
      pFVar10 = (FChaosVDAABBTreeDataWrapper *)
                (local_178.AllocatorInstance.Data + (longlong)local_178.ArrayNum * 0x70);
      this_00.Data = local_178.AllocatorInstance.Data;
      while( true ) {
        if (local_178.ArrayNum != iVar4) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FChaosVDAABBTreeDataWrapper,int,0>::operator!='::__l2::<lambda_1>
          ::operator()(local_res10);
        }
        if ((FChaosVDAABBTreeDataWrapper *)this_00.Data == pFVar10) break;
        FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_168);
        FVar5.BufferRef = local_168.BufferRef;
        Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
                  (&local_108,local_168.BufferRef,&SessionState.CVDNameTable);
        FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_108,true);
        FChaosVDAABBTreeDataWrapper::Serialize
                  ((FChaosVDAABBTreeDataWrapper *)this_00.Data,(FArchive *)&local_108);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_108.NameTableInstance.SharedReferenceCount.ReferenceController);
        FArchive::~FArchive((FArchive *)&local_108);
        TVar3 = FChaosVDAABBTreeDataWrapper::WrapperTypeName;
        local_148 = ((FVar5.BufferRef)->AllocatorInstance).Data;
        iVar1 = (FVar5.BufferRef)->ArrayNum;
        if ((iVar1 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_118._12_4_ = uStack_13c;
        local_118.ArrayNum = iVar1;
        local_118.DataPtr = (uchar *)local_148;
        local_128 = TVar3;
        iStack_140 = iVar1;
        TraceBinaryData(&local_118,&local_128,None);
        (FVar5.BufferRef)->ArrayNum = 0;
        if ((FVar5.BufferRef)->ArrayMax < 0xffff) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0xffff,&(local_168.BufferRef)->AllocatorInstance,0,
                     &(FVar5.BufferRef)->ArrayMax);
        }
        puVar7 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_130 = local_res20;
        local_138 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar9 = FThreadSingletonInitializer::Get
                           ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_138,puVar7);
        *(int *)(pFVar9 + 0x45) = *(int *)(pFVar9 + 0x45) + -1;
        this_00.Data = this_00.Data + 0x70;
      }
      DestructItems<FChaosVDAABBTreeDataWrapper,int>
                ((FChaosVDAABBTreeDataWrapper *)local_178.AllocatorInstance.Data,local_178.ArrayNum)
      ;
      if ((FChaosVDAABBTreeDataWrapper *)local_178.AllocatorInstance.Data !=
          (FChaosVDAABBTreeDataWrapper *)0x0) {
        FMemory::Free(local_178.AllocatorInstance.Data);
      }
    }
  }
  return;
}

// TraceSceneQueryStart @ 1437b6410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FChaosVisualDebuggerTrace::TraceSceneQueryStart
          (FImplicitObject *param_1,TQuat<double> *param_2,TVector<double> *param_3,
          TVector<double> *param_4,ECollisionChannel param_5,FChaosVDCollisionQueryParams *param_6,
          FChaosVDCollisionResponseParams *param_7,FChaosVDCollisionObjectQueryParams *param_8,
          EChaosVDSceneQueryType param_9,EChaosVDSceneQueryMode param_10,int param_11,bool param_12)

{
  code *pcVar1;
  FChaosVDScopedTLSBufferAccessor FVar2;
  bool bVar3;
  bool bVar4;
  uint *puVar5;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar6;
  TArrayView<unsigned_char_const_,int> *pTVar7;
  FTlsAutoCleanup *pFVar8;
  undefined1 auStackY_338 [32];
  undefined1 local_308;
  undefined1 local_307 [7];
  FImplicitObject *local_300;
  FChaosVDScopedTLSBufferAccessor local_2f8;
  FChaosVDCollisionResponseParams *local_2f0;
  undefined1 *local_2e8;
  code *local_2e0;
  undefined1 *local_2d8;
  TStringView<wchar_t> local_2c8;
  TArrayView<unsigned_char_const_,int> local_2b8;
  TArrayView<unsigned_char_const_,int> local_2a8;
  FChaosVDMemoryWriter local_298;
  FChaosVDQueryDataWrapper local_1d8;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_338;
  local_2f8.BufferRef = (TArray<unsigned_char,TSizedDefaultAllocator<32>_> *)param_6;
  local_2f0 = param_7;
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar5 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_2d8 = &local_308;
    local_2e0 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2e0,puVar5);
    pFVar6 = FChaosVDThreadContext::GetCurrentContext(this);
    if (pFVar6 == (FChaosVDContext *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (bVar3) {
code_r0x0001437b652c:
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if (((pFVar6->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) {
      if ((pFVar6->Type == 2) || (pFVar6->Type == 3)) {
        local_300 = param_1;
        bVar3 = `FChaosVisualDebuggerTrace::TraceSceneQueryStart'::__l2::<lambda_1>::operator()
                          (&local_300,param_3,param_2);
        if (param_9 != Overlap) {
          bVar4 = `FChaosVisualDebuggerTrace::TraceSceneQueryStart'::__l2::<lambda_1>::operator()
                            (&local_300,param_4,param_2);
          bVar3 = bVar4 || bVar3;
          param_7 = local_2f0;
        }
        if (bVar3 == false) {
          pFVar6->Id = -1;
        }
        else {
          local_1d8.CollisionQueryParams._padding_ =
               (longlong)&___7FChaosVDCollisionQueryParams__6B_;
          local_1d8.CollisionQueryParams.bReplaceHitWithSubComponents = 0;
          local_1d8.CollisionQueryParams.bTraceIntoSubComponents = 0;
          local_1d8.CollisionQueryParams.bSkipNarrowPhase = 0;
          local_1d8.CollisionQueryParams.bIgnoreTouches = 0;
          local_1d8.CollisionQueryParams.bIgnoreBlocks = 0;
          local_1d8.CollisionQueryParams.bReturnPhysicalMaterial = 0;
          local_1d8.CollisionQueryParams.bReturnFaceIndex = 0;
          local_1d8.CollisionQueryParams.bFindInitialOverlaps = 0;
          local_1d8.CollisionQueryParams.bTraceComplex = 0;
          local_1d8.GeometryOrientation.Z = UE::Math::TQuat<double>::Identity.Z;
          local_1d8.GeometryOrientation.W = UE::Math::TQuat<double>::Identity.W;
          local_1d8.CollisionResponseParams._padding_ =
               (longlong)&___7FChaosVDCollisionResponseParams__6B_;
          local_1d8.GeometryOrientation.X = UE::Math::TQuat<double>::Identity.X;
          local_1d8.GeometryOrientation.Y = UE::Math::TQuat<double>::Identity.Y;
          local_1d8.CollisionObjectQueryParams._padding_ =
               (longlong)&___7FChaosVDCollisionObjectQueryParams__6B_;
          local_1d8.InputGeometryKey = 0;
          local_1d8.Type = Invalid;
          local_1d8.Mode = Invalid;
          local_1d8.StartLocation.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_1d8.EndLocation.field0_0x0._s_0.Z =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          local_1d8.CollisionQueryParams._padding_._0_1_ = 0;
          local_1d8.CollisionQueryParams.TraceTag.ComparisonIndex.Value = 0;
          local_1d8.CollisionQueryParams.TraceTag.Number = 0;
          local_1d8.CollisionQueryParams.OwnerTag.ComparisonIndex.Value = 0;
          local_1d8.CollisionQueryParams.OwnerTag.Number = 0;
          local_1d8.CollisionQueryParams.IgnoreMask = '\0';
          local_1d8.CollisionQueryParams.IgnoredComponentsIDs.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_1d8.CollisionQueryParams.IgnoredComponentsIDs.ArrayNum = 0;
          local_1d8.CollisionQueryParams.IgnoredComponentsIDs.ArrayMax = 0;
          local_1d8.CollisionQueryParams.IgnoredActorsIDs.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_1d8.CollisionQueryParams.IgnoredActorsIDs.ArrayNum = 0;
          local_1d8.CollisionQueryParams.IgnoredActorsIDs.ArrayMax = 0;
          local_1d8.CollisionQueryParams.IgnoredActorsNames.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_1d8.CollisionQueryParams.IgnoredActorsNames.ArrayNum = 0;
          local_1d8.CollisionQueryParams.IgnoredActorsNames.ArrayMax = 0;
          local_1d8.CollisionQueryParams.IgnoredComponentsNames.AllocatorInstance.Data =
               (FScriptContainerElement *)0x0;
          local_1d8.CollisionQueryParams.IgnoredComponentsNames.ArrayNum = 0;
          local_1d8.CollisionQueryParams.IgnoredComponentsNames.ArrayMax = 0;
          local_1d8.CollisionResponseParams._padding_._0_1_ = 0;
          local_1d8.CollisionResponseParams.FlagsPerChannel.AllocatorInstance.SecondaryData =
               (ForElementType<unsigned_char>)0x0;
          local_1d8.CollisionResponseParams.FlagsPerChannel.ArrayNum = 0;
          local_1d8.CollisionResponseParams.FlagsPerChannel.ArrayMax = 0x20;
          local_1d8.CollisionObjectQueryParams._padding_._0_1_ = 0;
          local_1d8.CollisionObjectQueryParams.ObjectTypesToQuery = '\0';
          local_1d8.CollisionObjectQueryParams.IgnoreMask = '\0';
          local_1d8.SQVisitData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d8.SQVisitData.ArrayNum = 0;
          local_1d8.SQVisitData.ArrayMax = 0;
          local_1d8.Hits.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d8.Hits.ArrayNum = 0;
          local_1d8.Hits.ArrayMax = 0;
          local_1d8.SubQueriesIDs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1d8.SubQueriesIDs.ArrayNum = 0;
          local_1d8.SubQueriesIDs.ArrayMax = 0;
          local_1d8.CurrentVisitIndex = 0;
          local_1d8.EndLocation.field0_0x0._s_0.X =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_1d8.EndLocation.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_1d8.StartLocation.field0_0x0._s_0.X =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
          local_1d8.StartLocation.field0_0x0._s_0.Y =
               UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          if (param_1 != (FImplicitObject *)0x0) {
            local_1d8.InputGeometryKey = TraceImplicitObject(param_1);
          }
          local_1d8.ID = pFVar6->Id;
          local_1d8.GeometryOrientation.X = param_2->X;
          local_1d8.GeometryOrientation.Y = param_2->Y;
          local_1d8.GeometryOrientation.Z = param_2->Z;
          local_1d8.GeometryOrientation.W = param_2->W;
          local_1d8.ParentQueryID = pFVar6->OwnerID;
          local_1d8.StartLocation.field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
          local_1d8.StartLocation.field0_0x0._s_0.Y = (param_3->field0_0x0)._s_0.Y;
          local_1d8.WorldSolverID = param_11;
          local_1d8.StartLocation.field0_0x0._s_0.Z = (param_3->field0_0x0)._s_0.Z;
          local_1d8.bIsRetryQuery = param_12;
          local_1d8.EndLocation.field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
          local_1d8.EndLocation.field0_0x0._s_0.Y = (param_4->field0_0x0)._s_0.Y;
          local_1d8.EndLocation.field0_0x0._s_0.Z = (param_4->field0_0x0)._s_0.Z;
          local_1d8.CollisionChannel = param_5;
          FChaosVDCollisionQueryParams::operator=
                    (&local_1d8.CollisionQueryParams,
                     (FChaosVDCollisionQueryParams *)local_2f8.BufferRef);
          local_1d8.CollisionResponseParams._padding_._0_1_ = (undefined1)param_7->_padding_;
          if (&local_1d8.CollisionResponseParams.FlagsPerChannel != &param_7->FlagsPerChannel) {
            if ((param_7->FlagsPerChannel).AllocatorInstance.SecondaryData ==
                (ForElementType<unsigned_char>)0x0) {
              local_1d8.CollisionResponseParams.FlagsPerChannel.AllocatorInstance.InlineData._0_8_ =
                   *(undefined8 *)(param_7->FlagsPerChannel).AllocatorInstance.InlineData;
              local_1d8.CollisionResponseParams.FlagsPerChannel.AllocatorInstance.InlineData._8_8_ =
                   *(undefined8 *)((param_7->FlagsPerChannel).AllocatorInstance.InlineData + 8);
              local_1d8.CollisionResponseParams.FlagsPerChannel.AllocatorInstance.InlineData._16_8_
                   = *(undefined8 *)((param_7->FlagsPerChannel).AllocatorInstance.InlineData + 0x10)
              ;
              local_1d8.CollisionResponseParams.FlagsPerChannel.AllocatorInstance.InlineData._24_8_
                   = *(undefined8 *)((param_7->FlagsPerChannel).AllocatorInstance.InlineData + 0x18)
              ;
            }
            if (local_1d8.CollisionResponseParams.FlagsPerChannel.AllocatorInstance.SecondaryData !=
                (ForElementType<unsigned_char>)0x0) {
              FMemory::Free((void *)local_1d8.CollisionResponseParams.FlagsPerChannel.
                                    AllocatorInstance.SecondaryData);
            }
            local_1d8.CollisionResponseParams.FlagsPerChannel.AllocatorInstance.SecondaryData =
                 (param_7->FlagsPerChannel).AllocatorInstance.SecondaryData;
            (param_7->FlagsPerChannel).AllocatorInstance.SecondaryData =
                 (ForElementType<unsigned_char>)0x0;
            local_1d8.CollisionResponseParams.FlagsPerChannel.ArrayNum =
                 (param_7->FlagsPerChannel).ArrayNum;
            local_1d8.CollisionResponseParams.FlagsPerChannel.ArrayMax =
                 (param_7->FlagsPerChannel).ArrayMax;
            (param_7->FlagsPerChannel).ArrayMax = 0x20;
            (param_7->FlagsPerChannel).ArrayNum = 0;
          }
          local_1d8.Type = param_9;
          local_1d8.CollisionObjectQueryParams._padding_._0_1_ = (undefined1)param_8->_padding_;
          local_1d8.CollisionObjectQueryParams.ObjectTypesToQuery = param_8->ObjectTypesToQuery;
          local_1d8.CollisionObjectQueryParams.IgnoreMask = param_8->IgnoreMask;
          local_1d8.Mode = param_10;
          FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_2f8);
          FVar2.BufferRef = local_2f8.BufferRef;
          Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
                    (&local_298,local_2f8.BufferRef,&SessionState.CVDNameTable);
          FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_298,true);
          FChaosVDQueryDataWrapper::Serialize(&local_1d8,(FArchive *)&local_298);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_298.NameTableInstance.SharedReferenceCount.ReferenceController);
          FArchive::~FArchive((FArchive *)&local_298);
          local_2c8 = FChaosVDQueryDataWrapper::WrapperTypeName;
          pTVar7 = TArrayView<unsigned_char_const_,int>::
                   TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                             (&local_2a8,FVar2.BufferRef);
          local_2b8.DataPtr = pTVar7->DataPtr;
          local_2b8.ArrayNum = pTVar7->ArrayNum;
          local_2b8._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
          TraceBinaryData(&local_2b8,&local_2c8,None);
          (FVar2.BufferRef)->ArrayNum = 0;
          if ((FVar2.BufferRef)->ArrayMax < 0xffff) {
            UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (1,1,0xffff,&(FVar2.BufferRef)->AllocatorInstance,0,
                       &(FVar2.BufferRef)->ArrayMax);
          }
          puVar5 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
          local_2e8 = local_307;
          local_2f0 = (FChaosVDCollisionResponseParams *)
                      UE::Core::Private::Function::
                      TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                      ::Call;
          pFVar8 = FThreadSingletonInitializer::Get
                             ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_2f0,puVar5);
          *(int *)(pFVar8 + 0x45) = *(int *)(pFVar8 + 0x45) + -1;
          if (local_1d8.SubQueriesIDs.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.SubQueriesIDs.AllocatorInstance.Data);
          }
          if (local_1d8.Hits.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.Hits.AllocatorInstance.Data);
          }
          if (local_1d8.SQVisitData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.SQVisitData.AllocatorInstance.Data);
          }
          if (local_1d8.CollisionResponseParams.FlagsPerChannel.AllocatorInstance.SecondaryData !=
              (ForElementType<unsigned_char>)0x0) {
            FMemory::Free((void *)local_1d8.CollisionResponseParams.FlagsPerChannel.
                                  AllocatorInstance.SecondaryData);
          }
          if (local_1d8.CollisionQueryParams.IgnoredComponentsNames.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.CollisionQueryParams.IgnoredComponentsNames.AllocatorInstance.
                          Data);
          }
          if (local_1d8.CollisionQueryParams.IgnoredActorsNames.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.CollisionQueryParams.IgnoredActorsNames.AllocatorInstance.Data);
          }
          if (local_1d8.CollisionQueryParams.IgnoredActorsIDs.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.CollisionQueryParams.IgnoredActorsIDs.AllocatorInstance.Data);
          }
          if (local_1d8.CollisionQueryParams.IgnoredComponentsIDs.AllocatorInstance.Data !=
              (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1d8.CollisionQueryParams.IgnoredComponentsIDs.AllocatorInstance.Data
                         );
          }
        }
      }
      else {
        bVar3 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1357626835709459527>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosVisualDebugger\\ChaosVisualDebuggerTrace.cpp"
                           ,0x3b9,"bIsQueryContext");
        if (bVar3) goto code_r0x0001437b652c;
      }
    }
  }
  return;
}

// TraceSceneQueryVisit @ 1437b69a0

void __cdecl FChaosVisualDebuggerTrace::TraceSceneQueryVisit(FChaosVDQueryVisitStep *param_1)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar4;
  TArrayView<unsigned_char_const_,int> *pTVar5;
  FTlsAutoCleanup *pFVar6;
  undefined1 local_res10 [8];
  undefined1 local_res18 [8];
  FChaosVDScopedTLSBufferAccessor local_res20;
  code *local_128;
  undefined1 *local_120;
  code *local_118;
  undefined1 *local_110;
  TStringView<wchar_t> local_108;
  TArrayView<unsigned_char_const_,int> local_f8;
  TArrayView<unsigned_char_const_,int> local_e8;
  FChaosVDMemoryWriter local_d8;
  
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar3 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_120 = local_res10;
    local_128 = UE::Core::Private::Function::
                TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_128,puVar3);
    pFVar4 = FChaosVDThreadContext::GetCurrentContext(this);
    if (pFVar4 == (FChaosVDContext *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (!bVar2) {
        return;
      }
code_r0x0001437b6a93:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    if ((((pFVar4->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) &&
       (pFVar4->Id != -1)) {
      if ((pFVar4->Type == 2) || (pFVar4->Type == 3)) {
        param_1->OwningQueryID = pFVar4->Id;
        FChaosVDScopedTLSBufferAccessor::FChaosVDScopedTLSBufferAccessor(&local_res20);
        Chaos::VisualDebugger::FChaosVDMemoryWriter::FChaosVDMemoryWriter
                  (&local_d8,local_res20.BufferRef,&SessionState.CVDNameTable);
        FArchiveState::SetShouldSkipUpdateCustomVersion((FArchiveState *)&local_d8,true);
        FChaosVDQueryVisitStep::Serialize(param_1,(FArchive *)&local_d8);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_d8.NameTableInstance.SharedReferenceCount.ReferenceController);
        FArchive::~FArchive((FArchive *)&local_d8);
        local_108 = FChaosVDQueryVisitStep::WrapperTypeName;
        pTVar5 = TArrayView<unsigned_char_const_,int>::
                 TArrayView<unsigned_char_const_,int><TArray<unsigned_char,TSizedDefaultAllocator<32>_>_&,TArray<unsigned_char,TSizedDefaultAllocator<32>_>_>
                           (&local_e8,local_res20.BufferRef);
        local_f8.DataPtr = pTVar5->DataPtr;
        local_f8.ArrayNum = pTVar5->ArrayNum;
        local_f8._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
        TraceBinaryData(&local_f8,&local_108,None);
        (local_res20.BufferRef)->ArrayNum = 0;
        if ((local_res20.BufferRef)->ArrayMax < 0xffff) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,0xffff,&(local_res20.BufferRef)->AllocatorInstance,0,
                     &(local_res20.BufferRef)->ArrayMax);
        }
        puVar3 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
        local_110 = local_res18;
        local_118 = UE::Core::Private::Function::
                    TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                    ::Call;
        pFVar6 = FThreadSingletonInitializer::Get
                           ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_118,puVar3);
        *(int *)(pFVar6 + 0x45) = *(int *)(pFVar6 + 0x45) + -1;
      }
      else {
        bVar2 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<_1357626835709459451>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosVisualDebugger\\ChaosVisualDebuggerTrace.cpp"
                           ,0x405,"bIsQueryContext");
        if (bVar2) goto code_r0x0001437b6a93;
      }
    }
  }
  return;
}

// TraceSolverFrameEnd @ 1437b6bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FChaosVisualDebuggerTrace::TraceSolverFrameEnd(FChaosVDContext *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint *puVar4;
  FChaosVDThreadContext *this;
  ForElementType<FSetElementId> FVar5;
  undefined1 auStackY_78 [32];
  undefined1 local_48 [4];
  int local_44;
  LARGE_INTEGER local_40;
  code *local_38;
  undefined1 *local_30;
  int *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar4 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_30 = local_48;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar4);
    FChaosVDThreadContext::PopContext(this);
    if (param_1->Id == -1) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1357626835709459850>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosVisualDebugger\\ChaosVisualDebuggerTrace.cpp"
                         ,0x276,"ContextData.Id != INDEX_NONE");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      AcquireSRWLockExclusive((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
      if (SessionState.SolverIDsForDeltaRecording.Elements._8_4_ !=
          SessionState.SolverIDsForDeltaRecording.Elements._52_4_) {
        FVar5 = (ForElementType<FSetElementId>)0x15506bbb8;
        if (SessionState.SolverIDsForDeltaRecording.Hash.SecondaryData !=
            (ForElementType<FSetElementId>)0x0) {
          FVar5 = SessionState.SolverIDsForDeltaRecording.Hash.SecondaryData;
        }
        for (iVar1 = *(int *)((longlong)FVar5 +
                             (ulonglong)
                             (SessionState.SolverIDsForDeltaRecording.HashSize - 1U & param_1->Id) *
                             4); iVar1 != -1;
            iVar1 = *(int *)(SessionState.SolverIDsForDeltaRecording.Elements._0_8_ + 4 +
                            (longlong)iVar1 * 0xc)) {
          if (*(uint *)(SessionState.SolverIDsForDeltaRecording.Elements._0_8_ +
                       (longlong)iVar1 * 0xc) == param_1->Id) goto LAB_1437b6ced;
        }
      }
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                (&SessionState.SolverIDsForDeltaRecording,&local_44,(bool *)&param_1->Id);
LAB_1437b6ced:
      ReleaseSRWLockExclusive((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
      if (-1 < ChaosVDChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDSolverFrameEndFields>
                  ((TLogScope<0> *)&local_28);
        *local_28 = param_1->Id;
        QueryPerformanceCounter(&local_40);
        *(LARGE_INTEGER *)(local_28 + 1) = local_40;
        *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
      }
    }
  }
  return;
}

// TraceSolverFrameStart @ 1437b6d70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FChaosVisualDebuggerTrace::TraceSolverFrameStart
          (FChaosVDContext *param_1,FString *param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  bool bVar7;
  uint *puVar8;
  FChaosVDThreadContext *this;
  ForElementType<FSetElementId> FVar9;
  wchar_t *pwVar10;
  undefined1 uVar11;
  int iVar12;
  undefined1 auStackY_a8 [32];
  undefined1 local_78 [8];
  uint local_70 [2];
  uint local_68 [2];
  LARGE_INTEGER local_60;
  code *local_58;
  undefined1 *local_50;
  FLogScope local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    if (param_1->Id == -1) {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1357626835709459889>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosVisualDebugger\\ChaosVisualDebuggerTrace.cpp"
                         ,0x24f,"ContextData.Id != INDEX_NONE");
      if (bVar7) {
code_r0x0001437b6e10:
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if (param_1->Type == 1) {
      puVar8 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
      local_50 = local_78;
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
                 ::Call;
      this = (FChaosVDThreadContext *)
             FThreadSingletonInitializer::Get
                       ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_58,puVar8);
      FChaosVDThreadContext::PushContext(this,param_1);
      iVar6 = param_1->Attributes;
      uVar2 = param_1->Id;
      AcquireSRWLockShared((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
      if (SessionState.RequestedFullCaptureSolverIDs.Elements._8_4_ !=
          SessionState.RequestedFullCaptureSolverIDs.Elements._52_4_) {
        FVar9 = (ForElementType<FSetElementId>)0x15506bc08;
        if (SessionState.RequestedFullCaptureSolverIDs.Hash.SecondaryData !=
            (ForElementType<FSetElementId>)0x0) {
          FVar9 = SessionState.RequestedFullCaptureSolverIDs.Hash.SecondaryData;
        }
        for (iVar12 = *(int *)((longlong)FVar9 +
                              (ulonglong)
                              (SessionState.RequestedFullCaptureSolverIDs.HashSize - 1U & uVar2) * 4
                              ); iVar12 != -1;
            iVar12 = *(int *)(SessionState.RequestedFullCaptureSolverIDs.Elements._0_8_ + 4 +
                             (longlong)iVar12 * 0xc)) {
          if (*(uint *)(SessionState.RequestedFullCaptureSolverIDs.Elements._0_8_ +
                       (longlong)iVar12 * 0xc) == uVar2) goto LAB_1437b6f29;
        }
      }
      if (SessionState.SolverIDsForDeltaRecording.Elements._8_4_ !=
          SessionState.SolverIDsForDeltaRecording.Elements._52_4_) {
        FVar9 = (ForElementType<FSetElementId>)0x15506bbb8;
        if (SessionState.SolverIDsForDeltaRecording.Hash.SecondaryData !=
            (ForElementType<FSetElementId>)0x0) {
          FVar9 = SessionState.SolverIDsForDeltaRecording.Hash.SecondaryData;
        }
        for (iVar12 = *(int *)((longlong)FVar9 +
                              (ulonglong)
                              (SessionState.SolverIDsForDeltaRecording.HashSize - 1U & uVar2) * 4);
            iVar12 != -1;
            iVar12 = *(int *)(SessionState.SolverIDsForDeltaRecording.Elements._0_8_ + 4 +
                             (longlong)iVar12 * 0xc)) {
          if (*(uint *)(SessionState.SolverIDsForDeltaRecording.Elements._0_8_ +
                       (longlong)iVar12 * 0xc) == uVar2) {
            uVar11 = 0;
            ReleaseSRWLockShared((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
            goto LAB_1437b6f9d;
          }
        }
      }
LAB_1437b6f29:
      uVar11 = 1;
      ReleaseSRWLockShared((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
      AcquireSRWLockExclusive((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
      local_70[0] = uVar2;
      if (SessionState.SolverIDsForDeltaRecording.Elements._8_4_ !=
          SessionState.SolverIDsForDeltaRecording.Elements._52_4_) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                  (&SessionState.SolverIDsForDeltaRecording,uVar2,(int *)local_70);
      }
      local_68[0] = uVar2;
      if (SessionState.RequestedFullCaptureSolverIDs.Elements._8_4_ !=
          SessionState.RequestedFullCaptureSolverIDs.Elements._52_4_) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveImpl<int>
                  (&SessionState.RequestedFullCaptureSolverIDs,uVar2,(int *)local_68);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
LAB_1437b6f9d:
      if (-1 < ChaosVDChannel->Enabled) {
        UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDSolverFrameStartFields>
                  ((TLogScope<1> *)&local_48);
        *(int *)local_48.Ptr = param_1->Id;
        QueryPerformanceCounter(&local_60);
        *(LARGE_INTEGER *)((longlong)local_48.Ptr + 4) = local_60;
        iVar3 = (param_2->Data).ArrayNum;
        iVar12 = iVar3 + -1;
        if (iVar3 == 0) {
          iVar12 = 0;
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
        }
        if (iVar12 < 0) {
          iVar12 = 0;
          sVar1 = *pwVar10;
          pFVar5 = (FScriptContainerElement *)pwVar10;
          while (sVar1 != 0) {
            pFVar5 = pFVar5 + 2;
            iVar12 = iVar12 + 1;
            sVar1 = *(short *)pFVar5;
          }
        }
        UE::Trace::Private::Field_WriteStringWide(2,pwVar10,iVar12);
        *(undefined1 *)((longlong)local_48.Ptr + 0xc) = uVar11;
        *(byte *)((longlong)local_48.Ptr + 0xd) = (byte)iVar6 & 1;
        *(int *)((longlong)local_48.Ptr + 0xe) = param_3;
        UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_48,&local_48);
      }
    }
    else {
      bVar7 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_1357626835709459884>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Private\\ChaosVisualDebugger\\ChaosVisualDebuggerTrace.cpp"
                         ,0x254,
                         "ContextData.Type == static_cast<int32>(EChaosVDContextType::Solver)");
      if (bVar7) goto code_r0x0001437b6e10;
    }
  }
  return;
}

// TraceSolverSimulationSpace @ 1437b7090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
FChaosVisualDebuggerTrace::TraceSolverSimulationSpace(TRigidTransform<double,3> *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  bool bVar3;
  uint *puVar4;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar5;
  undefined1 auStackY_c8 [32];
  LARGE_INTEGER local_98;
  undefined1 local_90 [8];
  code *local_88;
  undefined1 *local_80;
  int *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar4 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_80 = local_90;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,puVar4);
    pFVar5 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar5 == (FChaosVDContext *)0x0) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if ((((pFVar5->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) &&
            (-1 < ChaosVDChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDSolverSimulationSpaceFields>
                ((TLogScope<0> *)&local_28);
      QueryPerformanceCounter(&local_98);
      *(LARGE_INTEGER *)(local_28 + 1) = local_98;
      *local_28 = pFVar5->Id;
      uVar2 = *(undefined4 *)&param_1->field_0x24;
      local_28[3] = *(undefined4 *)&param_1->field_0x20;
      local_28[4] = uVar2;
      uVar2 = *(undefined4 *)&param_1->field_0x2c;
      local_28[5] = *(undefined4 *)&param_1->field_0x28;
      local_28[6] = uVar2;
      uVar2 = *(undefined4 *)&param_1->field_0x34;
      local_28[7] = *(undefined4 *)&param_1->field_0x30;
      local_28[8] = uVar2;
      uVar2 = *(undefined4 *)&param_1->field_0x4;
      local_28[9] = *(undefined4 *)&param_1->field_0x0;
      local_28[10] = uVar2;
      uVar2 = *(undefined4 *)&param_1->field_0xc;
      local_28[0xb] = *(undefined4 *)&param_1->field_0x8;
      local_28[0xc] = uVar2;
      uVar2 = *(undefined4 *)&param_1->field_0x14;
      local_28[0xd] = *(undefined4 *)&param_1->field_0x10;
      local_28[0xe] = uVar2;
      uVar2 = *(undefined4 *)&param_1->field_0x1c;
      local_28[0xf] = *(undefined4 *)&param_1->field_0x18;
      local_28[0x10] = uVar2;
      *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
    }
  }
  return;
}

// TraceSolverStepEnd @ 1437b7260

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FChaosVisualDebuggerTrace::TraceSolverStepEnd(void)

{
  code *pcVar1;
  bool bVar2;
  uint *puVar3;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar4;
  undefined1 auStackY_78 [32];
  undefined1 local_48 [8];
  LARGE_INTEGER local_40;
  code *local_38;
  undefined1 *local_30;
  int *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar3 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_30 = local_48;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar3);
    pFVar4 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar4 == (FChaosVDContext *)0x0) {
      bVar2 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else if ((((pFVar4->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) &&
            (-1 < ChaosVDChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDSolverStepEndFields>
                ((TLogScope<0> *)&local_28);
      QueryPerformanceCounter(&local_40);
      *(LARGE_INTEGER *)(local_28 + 1) = local_40;
      *local_28 = pFVar4->Id;
      *(undefined8 *)(local_20 + 0x28) = *(undefined8 *)(local_20 + 0x20);
    }
  }
  return;
}

// TraceSolverStepStart @ 1437b7380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl FChaosVisualDebuggerTrace::TraceSolverStepStart(TStringView<wchar_t> *param_1)

{
  wchar_t wVar1;
  undefined8 uVar2;
  wchar_t *pwVar3;
  code *pcVar4;
  wchar_t *pwVar5;
  bool bVar6;
  uint *puVar7;
  FChaosVDThreadContext *this;
  FChaosVDContext *pFVar8;
  int iVar9;
  undefined1 auStackY_78 [32];
  undefined1 local_48 [8];
  LARGE_INTEGER local_40;
  code *local_38;
  undefined1 *local_30;
  FLogScope local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_78;
  if (SessionState.bIsTracing != (atomic<bool>)0x0) {
    puVar7 = TThreadSingleton<FChaosVDThreadContext>::GetTlsSlot();
    local_30 = local_48;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FChaosVDThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    this = (FChaosVDThreadContext *)
           FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_38,puVar7);
    pFVar8 = FChaosVDThreadContext::GetCurrentContext(this,Solver);
    if (pFVar8 == (FChaosVDContext *)0x0) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<604040631391617141>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Experimental\\Chaos\\Public\\ChaosVisualDebugger\\ChaosVDContextProvider.h"
                         ,0x75,"Context");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    else if ((((pFVar8->CurrentDataChannel).Object)->bIsEnabled != (atomic<bool>)0x0) &&
            (-1 < ChaosVDChannel->Enabled)) {
      UE::Trace::Private::FLogScope::Enter<FChaosVDLoggerChaosVDSolverStepStartFields>
                ((TLogScope<1> *)&local_28);
      QueryPerformanceCounter(&local_40);
      uVar2 = *(undefined8 *)&param_1->Size;
      pwVar3 = param_1->DataPtr;
      *(LARGE_INTEGER *)((longlong)local_28.Ptr + 4) = local_40;
      *(int *)local_28.Ptr = pFVar8->Id;
      iVar9 = (int)uVar2;
      if (iVar9 < 0) {
        iVar9 = 0;
        wVar1 = *pwVar3;
        pwVar5 = pwVar3;
        while (wVar1 != L'\0') {
          pwVar5 = pwVar5 + 1;
          iVar9 = iVar9 + 1;
          wVar1 = *pwVar5;
        }
      }
      UE::Trace::Private::Field_WriteStringWide(2,pwVar3,iVar9);
      UE::Trace::Private::TLogScope<1>::operator+=((TLogScope<1> *)&local_28,&local_28);
    }
  }
  return;
}

// UnregisterEventHandlers @ 1437b8410

void __cdecl FChaosVisualDebuggerTrace::UnregisterEventHandlers(void)

{
  AcquireSRWLockExclusive((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
  if (SessionState.RecordingStartedDelegateHandle.ID != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    if (SessionState.RecordingStartedDelegateHandle.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FChaosVDRuntimeModule::RecordingStartedDelegate,
                 SessionState.RecordingStartedDelegateHandle);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  }
  if (SessionState.RecordingStoppedDelegateHandle.ID != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    if (SessionState.RecordingStoppedDelegateHandle.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FChaosVDRuntimeModule::RecordingStopDelegate,
                 SessionState.RecordingStoppedDelegateHandle);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  }
  if (SessionState.RecordingFullCaptureRequestedHandle.ID != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
    if (SessionState.RecordingFullCaptureRequestedHandle.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &FChaosVDRuntimeModule::PerformFullCaptureDelegate,
                 SessionState.RecordingFullCaptureRequestedHandle);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)&FChaosVDRuntimeModule::DelegatesRWLock);
  }
  LOCK();
  SessionState.bIsTracing = (atomic<bool>)0x0;
  UNLOCK();
                    /* WARNING: Could not recover jumptable at 0x0001437b84e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ReleaseSRWLockExclusive((PSRWLOCK)&SessionState.DeltaRecordingStatesLock);
  return;
}

// GetCVDContext<Chaos::FPhysicsSolverBase> @ 143ac6be0

void __cdecl
FChaosVisualDebuggerTrace::GetCVDContext<Chaos::FPhysicsSolverBase>
          (FPhysicsSolverBase *param_1,FChaosVDContext *param_2)

{
  TReferenceControllerBase<1> *pTVar1;
  FChaosVDOptionalDataChannel *pFVar2;
  TReferenceControllerBase<1> *pTVar3;
  
  param_2->OwnerID = (param_1->CVDContextData).OwnerID;
  param_2->Id = (param_1->CVDContextData).Id;
  param_2->Type = (param_1->CVDContextData).Type;
  param_2->Attributes = (param_1->CVDContextData).Attributes;
  pTVar1 = (param_1->CVDContextData).CurrentDataChannel.SharedReferenceCount.ReferenceController;
  pFVar2 = (param_1->CVDContextData).CurrentDataChannel.Object;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar3 = (param_2->CurrentDataChannel).SharedReferenceCount.ReferenceController;
  (param_2->CurrentDataChannel).Object = pFVar2;
  (param_2->CurrentDataChannel).SharedReferenceCount.ReferenceController = pTVar1;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return;
}

// GetDebugName<Chaos::FPhysicsSolverBase> @ 143ac6c40

FString * __cdecl
FChaosVisualDebuggerTrace::GetDebugName<Chaos::FPhysicsSolverBase>
          (FString *__return_storage_ptr__,FPhysicsSolverBase *param_1)

{
  FName local_res8 [4];
  
  local_res8[0] = param_1->DebugName;
  ::FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// operator() @ 1504a29f0

bool __thiscall
`FChaosVisualDebuggerTrace::TraceImplicitObject'::__l2::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_1357626835709459667>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_1357626835709459667>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

