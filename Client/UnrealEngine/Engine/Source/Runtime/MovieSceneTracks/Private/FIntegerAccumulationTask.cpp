// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// ForEachAllocation @ 146831dc0

void __thiscall
UE::MovieScene::FIntegerAccumulationTask::ForEachAllocation
          (FIntegerAccumulationTask *this,FEntityAllocation *param_1,
          TRead<FMovieSceneBlendChannelID> param_2,TRead<__int64> param_3,
          TReadOptional<double> param_4)

{
  double dVar1;
  ushort uVar2;
  TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  TReadOptional<double> TVar6;
  bool bVar7;
  UClass *this_00;
  UMovieSceneBlenderSystem *pUVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  undefined1 local_res10 [8];
  
  TVar6 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::MovieScene::FIntegerAccumulationTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::MovieScene::FIntegerAccumulationTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::MovieScene::FIntegerAccumulationTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    this_00 = UMovieScenePiecewiseIntegerBlenderSystem::StaticClass();
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
    `public:_void___cdecl_UE::MovieScene::FIntegerAccumulationTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'
    ::__l2::IntegerBlenderSystemID.Value = (pUVar8->SystemID).Value;
    _Init_thread_footer(&`public:_void___cdecl_UE::MovieScene::FIntegerAccumulationTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  dVar1 = __real_3ff0000000000000;
  uVar13 = (ulonglong)param_1->Size;
  if (uVar13 != 0) {
    lVar11 = 0;
    if (TVar6 == (TReadOptional<double>)0x0) {
      do {
        if (*(uchar *)((longlong)param_2 + lVar11 * 4) !=
            `public:_void___cdecl_UE::MovieScene::FIntegerAccumulationTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'
            ::__l2::IntegerBlenderSystemID.Value) {
          local_res10[0] = 0;
          `UE::MovieScene::FIntegerAccumulationTask::ForEachAllocation'::__l11::<lambda_2>::
          operator()(local_res10);
        }
        pTVar3 = this->AccumulationBuffer;
        uVar2 = *(ushort *)((longlong)param_2 + 2 + lVar11 * 4);
        if ((pTVar3->ArrayNum <= (int)(uint)uVar2) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        lVar12 = lVar11 * 8;
        lVar11 = lVar11 + 1;
        lVar10 = (ulonglong)uVar2 * 0x10;
        *(longlong *)(pFVar4 + lVar10) =
             *(longlong *)(pFVar4 + lVar10) + *(longlong *)((longlong)param_3 + lVar12);
        *(double *)(pFVar4 + lVar10 + 8) = *(double *)(pFVar4 + lVar10 + 8) + dVar1;
      } while (lVar11 < (longlong)uVar13);
    }
    else {
      lVar12 = (longlong)TVar6 - (longlong)param_3;
      do {
        if (*(uchar *)((longlong)param_2 + lVar11 * 4) !=
            `public:_void___cdecl_UE::MovieScene::FIntegerAccumulationTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'
            ::__l2::IntegerBlenderSystemID.Value) {
          param_4._0_1_ = 0;
          `UE::MovieScene::FIntegerAccumulationTask::ForEachAllocation'::__l7::<lambda_1>::
          operator()(&param_4);
        }
        pTVar3 = this->AccumulationBuffer;
        uVar2 = *(ushort *)((longlong)param_2 + 2 + lVar11 * 4);
        if ((pTVar3->ArrayNum <= (int)(uint)uVar2) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar7)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        dVar1 = *(double *)((longlong)param_3 + lVar12);
        lVar10 = *(longlong *)param_3;
        pFVar4 = (pTVar3->AllocatorInstance).Data;
        lVar9 = (ulonglong)uVar2 * 0x10;
        lVar11 = lVar11 + 1;
        param_3 = (TRead<__int64>)((longlong)param_3 + 8);
        *(double *)(pFVar4 + lVar9 + 8) = dVar1 + *(double *)(pFVar4 + lVar9 + 8);
        *(longlong *)(pFVar4 + lVar9) =
             *(longlong *)(pFVar4 + lVar9) + (longlong)((double)lVar10 * dVar1);
      } while (lVar11 < (longlong)uVar13);
    }
  }
  return;
}

// operator() @ 1504f48c0

bool __thiscall
`UE::MovieScene::FIntegerAccumulationTask::ForEachAllocation'::__l7::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5606940484778852395>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5606940484778852395>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::FIntegerAccumulationTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f5210

bool __thiscall
`UE::MovieScene::FIntegerAccumulationTask::ForEachAllocation'::__l11::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5606940484778852410>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5606940484778852410>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::FIntegerAccumulationTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'::`11'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

