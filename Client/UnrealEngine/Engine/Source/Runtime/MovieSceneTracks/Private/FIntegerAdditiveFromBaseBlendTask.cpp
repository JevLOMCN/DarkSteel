// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// ForEachAllocation @ 146832010

void __thiscall
UE::MovieScene::FIntegerAdditiveFromBaseBlendTask::ForEachAllocation
          (FIntegerAdditiveFromBaseBlendTask *this,FEntityAllocation *param_1,
          TRead<FMovieSceneBlendChannelID> param_2,TRead<__int64> param_3,TRead<__int64> param_4,
          TReadOptional<double> param_5)

{
  longlong *plVar1;
  double dVar2;
  ushort uVar3;
  TArray<UE::MovieScene::FIntegerBlendResult,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TReadOptional<double> TVar8;
  bool bVar9;
  UClass *this_00;
  UMovieSceneBlenderSystem *pUVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  undefined1 local_res10 [8];
  
  TVar8 = param_5;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::MovieScene::FIntegerAdditiveFromBaseBlendTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::MovieScene::FIntegerAdditiveFromBaseBlendTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::MovieScene::FIntegerAdditiveFromBaseBlendTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    this_00 = UMovieScenePiecewiseIntegerBlenderSystem::StaticClass();
    pUVar10 = UClass::GetDefaultObject<UMovieSceneBlenderSystem>(this_00);
    if ((pUVar10 == (UMovieSceneBlenderSystem *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("DefaultObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneBlenderSystem.h"
                           ,0x41,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    `public:_void___cdecl_UE::MovieScene::FIntegerAdditiveFromBaseBlendTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'
    ::__l2::IntegerBlenderSystemID.Value = (pUVar10->SystemID).Value;
    _Init_thread_footer(&`public:_void___cdecl_UE::MovieScene::FIntegerAdditiveFromBaseBlendTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  dVar2 = __real_3ff0000000000000;
  uVar16 = (ulonglong)param_1->Size;
  if (uVar16 != 0) {
    lVar14 = 0;
    if (TVar8 != (TReadOptional<double>)0x0) {
      lVar13 = (longlong)TVar8 - (longlong)param_3;
      lVar15 = (longlong)param_4 - (longlong)param_3;
      while( true ) {
        if (*(uchar *)((longlong)param_2 + lVar14 * 4) !=
            `public:_void___cdecl_UE::MovieScene::FIntegerAdditiveFromBaseBlendTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'
            ::__l2::IntegerBlenderSystemID.Value) {
          param_5._0_1_ = 0;
          `UE::MovieScene::FIntegerAdditiveFromBaseBlendTask::ForEachAllocation'::__l7::<lambda_1>::
          operator()(&param_5);
        }
        pTVar4 = this->AccumulationBuffer;
        uVar3 = *(ushort *)((longlong)param_2 + 2 + lVar14 * 4);
        if ((pTVar4->ArrayNum <= (int)(uint)uVar3) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) break;
        dVar2 = *(double *)(lVar13 + (longlong)param_3);
        lVar12 = *(longlong *)param_3;
        lVar5 = *(longlong *)(lVar15 + (longlong)param_3);
        lVar14 = lVar14 + 1;
        pFVar6 = (pTVar4->AllocatorInstance).Data;
        param_3 = (TRead<__int64>)((longlong)param_3 + 8);
        lVar11 = (ulonglong)uVar3 * 0x10;
        *(double *)(pFVar6 + lVar11 + 8) = dVar2 + *(double *)(pFVar6 + lVar11 + 8);
        *(longlong *)(pFVar6 + lVar11) =
             *(longlong *)(pFVar6 + lVar11) + (longlong)((double)(lVar12 - lVar5) * dVar2);
        if ((longlong)uVar16 <= lVar14) {
          return;
        }
      }
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    lVar13 = (longlong)param_3 - (longlong)param_4;
    do {
      if (*(uchar *)((longlong)param_2 + lVar14 * 4) !=
          `public:_void___cdecl_UE::MovieScene::FIntegerAdditiveFromBaseBlendTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'
          ::__l2::IntegerBlenderSystemID.Value) {
        local_res10[0] = 0;
        `UE::MovieScene::FIntegerAdditiveFromBaseBlendTask::ForEachAllocation'::__l11::<lambda_2>::
        operator()(local_res10);
      }
      pTVar4 = this->AccumulationBuffer;
      uVar3 = *(ushort *)((longlong)param_2 + 2 + lVar14 * 4);
      if ((pTVar4->ArrayNum <= (int)(uint)uVar3) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (pTVar4->AllocatorInstance).Data;
      plVar1 = (longlong *)((longlong)param_4 + lVar13);
      lVar14 = lVar14 + 1;
      lVar15 = *(longlong *)param_4;
      param_4 = (TRead<__int64>)((longlong)param_4 + 8);
      lVar12 = (ulonglong)uVar3 * 0x10;
      *(longlong *)(pFVar6 + lVar12) = *(longlong *)(pFVar6 + lVar12) + (*plVar1 - lVar15);
      *(double *)(pFVar6 + lVar12 + 8) = *(double *)(pFVar6 + lVar12 + 8) + dVar2;
    } while (lVar14 < (longlong)uVar16);
  }
  return;
}

// PreTask @ 146857550

void __thiscall
UE::MovieScene::FIntegerAdditiveFromBaseBlendTask::PreTask(FIntegerAdditiveFromBaseBlendTask *this)

{
  int iVar1;
  
  iVar1 = this->AccumulationBuffer->ArrayNum;
  if (0 < iVar1) {
    memset((this->AccumulationBuffer->AllocatorInstance).Data,0,(longlong)iVar1 << 4);
    return;
  }
  return;
}

// operator() @ 1504f4900

bool __thiscall
`UE::MovieScene::FIntegerAdditiveFromBaseBlendTask::ForEachAllocation'::__l7::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5606940484778852452>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5606940484778852452>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::FIntegerAdditiveFromBaseBlendTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f5250

bool __thiscall
`UE::MovieScene::FIntegerAdditiveFromBaseBlendTask::ForEachAllocation'::__l11::<lambda_2>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5606940484778852467>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5606940484778852467>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::FIntegerAdditiveFromBaseBlendTask::ForEachAllocation(UE::MovieScene::FEntityAllocation_const*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TRead<__int64>,UE::MovieScene::TReadOptional<double>)const___ptr64'::`11'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

