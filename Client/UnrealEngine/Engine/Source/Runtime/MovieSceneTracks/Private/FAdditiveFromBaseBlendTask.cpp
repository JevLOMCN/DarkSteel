// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// AccumulateResults @ 146819130

void __thiscall
UE::MovieScene::FAdditiveFromBaseBlendTask::AccumulateResults
          (FAdditiveFromBaseBlendTask *this,FEntityAllocation *param_1,double *param_2,
          double *param_3,FMovieSceneBlendChannelID *param_4,double *param_5,
          TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *param_6)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *pTVar6;
  bool bVar7;
  UClass *this_00;
  UMovieSceneBlenderSystem *pUVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  float fVar14;
  undefined1 local_res10 [8];
  
  pTVar6 = param_6;
  pdVar1 = param_5;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_UE::MovieScene::FAdditiveFromBaseBlendTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_UE::MovieScene::FAdditiveFromBaseBlendTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_UE::MovieScene::FAdditiveFromBaseBlendTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    this_00 = UMovieScenePiecewiseDoubleBlenderSystem::StaticClass();
    pUVar8 = UClass::GetDefaultObject<UMovieSceneBlenderSystem>(this_00);
    if ((pUVar8 == (UMovieSceneBlenderSystem *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("DefaultObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneBlenderSystem.h"
                           ,0x41,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    `private:_void___cdecl_UE::MovieScene::FAdditiveFromBaseBlendTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
    ::__l2::BlenderSystemID.Value = (pUVar8->SystemID).Value;
    _Init_thread_footer(&`private:_void___cdecl_UE::MovieScene::FAdditiveFromBaseBlendTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  fVar14 = __real_3f800000;
  uVar13 = (ulonglong)param_1->Size;
  if (uVar13 != 0) {
    lVar9 = 0;
    if (pdVar1 == (double *)0x0) {
      lVar10 = (longlong)param_2 - (longlong)param_3;
      do {
        if (param_4[lVar9].SystemID.Value !=
            `private:_void___cdecl_UE::MovieScene::FAdditiveFromBaseBlendTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
            ::__l2::BlenderSystemID.Value) {
          local_res10[0] = 0;
          `UE::MovieScene::FAdditiveFromBaseBlendTask::AccumulateResults'::__l11::<lambda_2>::
          operator()(local_res10);
        }
        uVar11 = (ulonglong)param_4[lVar9].ChannelID;
        if ((pTVar6->ArrayNum <= (int)(uint)param_4[lVar9].ChannelID) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pdVar1 = (double *)(lVar10 + (longlong)param_3);
        dVar2 = *param_3;
        pFVar4 = (pTVar6->AllocatorInstance).Data;
        lVar9 = lVar9 + 1;
        param_3 = param_3 + 1;
        *(double *)(pFVar4 + uVar11 * 0x10) =
             (*pdVar1 - dVar2) + *(double *)(pFVar4 + uVar11 * 0x10);
        *(float *)(pFVar4 + uVar11 * 0x10 + 8) = *(float *)(pFVar4 + uVar11 * 0x10 + 8) + fVar14;
      } while (lVar9 < (longlong)uVar13);
    }
    else {
      lVar12 = (longlong)pdVar1 - (longlong)param_2;
      lVar10 = (longlong)param_3 - (longlong)param_2;
      do {
        if (param_4[lVar9].SystemID.Value !=
            `private:_void___cdecl_UE::MovieScene::FAdditiveFromBaseBlendTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
            ::__l2::BlenderSystemID.Value) {
          param_5._0_1_ = 0;
          `UE::MovieScene::FAdditiveFromBaseBlendTask::AccumulateResults'::__l7::<lambda_1>::
          operator()(&param_5);
        }
        uVar11 = (ulonglong)param_4[lVar9].ChannelID;
        if ((pTVar6->ArrayNum <= (int)(uint)param_4[lVar9].ChannelID) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        dVar2 = *param_2;
        dVar3 = *(double *)((longlong)param_2 + lVar10);
        pFVar4 = (pTVar6->AllocatorInstance).Data;
        lVar9 = lVar9 + 1;
        fVar14 = (float)*(double *)((longlong)param_2 + lVar12);
        param_2 = param_2 + 1;
        *(float *)(pFVar4 + uVar11 * 0x10 + 8) = fVar14 + *(float *)(pFVar4 + uVar11 * 0x10 + 8);
        *(double *)(pFVar4 + uVar11 * 0x10) =
             (dVar2 - dVar3) * (double)fVar14 + *(double *)(pFVar4 + uVar11 * 0x10);
      } while (lVar9 < (longlong)uVar13);
    }
  }
  return;
}

// ForEachAllocation @ 14682ebd0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FAdditiveFromBaseBlendTask::ForEachAllocation
          (FAdditiveFromBaseBlendTask *this,FEntityAllocationProxy *param_1,
          TRead<FMovieSceneBlendChannelID> param_2,TReadOptional<double> param_3)

{
  EComponentHeaderLockMode EVar1;
  EComponentHeaderLockMode EVar2;
  TArray<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  double *pdVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  FEntityAllocation *pFVar8;
  FComponentHeader *pFVar9;
  TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *pTVar10;
  uint uVar11;
  FComponentHeader *pFVar12;
  atomic<int> *paVar13;
  FComponentHeader *pFVar14;
  FKeyForward local_58;
  FComponentHeader *local_38;
  
  pFVar8 = FEntityAllocationProxy::GetAllocation(param_1);
  FEntityAllocationProxy::GetAllocationType(param_1);
  local_38 = pFVar8->ComponentHeaders;
  pFVar9 = local_38 + pFVar8->NumComponents;
  if (local_38 != pFVar9) {
    paVar13 = &local_38->ScheduledAccessCount;
    do {
      pTVar3 = &this->AccumulationBuffers->Pairs;
      uVar7 = Algo::
              BinarySearchBy<TArray<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FComponentTypeID,TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveFromBaseBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                        (pTVar3,(FComponentTypeID *)&paVar13[1].field_0x2,local_58,
                         (TLess<UE::MovieScene::FComponentTypeID_const_&>)local_58);
      if (uVar7 == 0xffffffff) {
        pTVar10 = (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)0x0;
      }
      else {
        uVar11 = 0;
        if ((int)uVar7 < pTVar3->ArrayNum) {
          uVar11 = ~uVar7 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pTVar10 = (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)
                  ((pTVar3->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x20 + 8);
      }
      if (pTVar10 != (TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *)0x0) {
        pFVar14 = pFVar8->ComponentHeaders;
        pFVar12 = pFVar14 + pFVar8->NumComponents;
        for (; pFVar14 != pFVar12; pFVar14 = pFVar14 + 1) {
          if ((pFVar14->ComponentType).Value == *(ushort *)&pTVar10[1].AllocatorInstance.Data)
          goto LAB_14682ed31;
        }
        pFVar14 = (FComponentHeader *)0x0;
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Header",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneEntitySystemTypes.h"
                           ,0x2cd,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
LAB_14682ed31:
        EVar1 = pFVar8->LockMode;
        if (EVar1 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
        }
        LOCK();
        pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + 1);
        UNLOCK();
        EVar2 = pFVar8->LockMode;
        pdVar4 = (double *)pFVar14->Components;
        if (EVar2 == Mutex) {
          AcquireSRWLockShared((PSRWLOCK)(paVar13 + -4));
        }
        LOCK();
        *paVar13 = (atomic<int>)((int)*paVar13 + 1);
        UNLOCK();
        AccumulateResults(this,pFVar8,*(double **)(paVar13 + -6),pdVar4,
                          (FMovieSceneBlendChannelID *)param_2,(double *)param_3,pTVar10);
        LOCK();
        *paVar13 = (atomic<int>)((int)*paVar13 + -1);
        UNLOCK();
        if (EVar2 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)(paVar13 + -4));
        }
        LOCK();
        pFVar14->ScheduledAccessCount = (atomic<int>)((int)pFVar14->ScheduledAccessCount + -1);
        UNLOCK();
        if (EVar1 == Mutex) {
          ReleaseSRWLockShared((PSRWLOCK)&pFVar14->ReadWriteLock);
        }
      }
      paVar13 = paVar13 + 0xe;
      local_38 = local_38 + 1;
    } while (local_38 != pFVar9);
  }
  return;
}

// operator() @ 1504f4880

bool __thiscall
`UE::MovieScene::FAdditiveFromBaseBlendTask::AccumulateResults'::__l7::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2203290773712011082>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2203290773712011082>,
                       &`public:___cdecl_`private:_void___cdecl_UE::MovieScene::FAdditiveFromBaseBlendTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f51d0

bool __thiscall
`UE::MovieScene::FAdditiveFromBaseBlendTask::AccumulateResults'::__l11::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2203290773712011067>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2203290773712011067>,
                       &`public:___cdecl_`private:_void___cdecl_UE::MovieScene::FAdditiveFromBaseBlendTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'::`11'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

