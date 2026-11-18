// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 3

// AccumulateResults @ 146818a00

void __thiscall
UE::MovieScene::FAccumulationTask::AccumulateResults
          (FAccumulationTask *this,FEntityAllocation *param_1,double *param_2,
          FMovieSceneBlendChannelID *param_3,double *param_4,
          TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *param_5)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  ushort uVar4;
  code *pcVar5;
  double *pdVar6;
  TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  UClass *this_00;
  UMovieSceneBlenderSystem *pUVar10;
  FScriptContainerElement *pFVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  float fVar18;
  undefined1 local_res10 [8];
  
  pTVar7 = param_5;
  pdVar6 = param_4;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_UE::MovieScene::FAccumulationTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_UE::MovieScene::FAccumulationTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_UE::MovieScene::FAccumulationTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    this_00 = UMovieScenePiecewiseDoubleBlenderSystem::StaticClass();
    pUVar10 = UClass::GetDefaultObject<UMovieSceneBlenderSystem>(this_00);
    if ((pUVar10 == (UMovieSceneBlenderSystem *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("DefaultObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneBlenderSystem.h"
                           ,0x41,L""), bVar8)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    `private:_void___cdecl_UE::MovieScene::FAccumulationTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
    ::__l2::BlenderSystemID.Value = (pUVar10->SystemID).Value;
    _Init_thread_footer(&`private:_void___cdecl_UE::MovieScene::FAccumulationTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  fVar18 = __real_3f800000;
  uVar4 = param_1->Size;
  lVar17 = 0;
  if (uVar4 != 0) {
    puVar12 = &param_3->ChannelID;
    piVar1 = &pTVar7->ArrayNum;
    if (pdVar6 == (double *)0x0) {
      do {
        if ((((FMovieSceneBlendChannelID *)(puVar12 + -1))->SystemID).Value !=
            `private:_void___cdecl_UE::MovieScene::FAccumulationTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
            ::__l2::BlenderSystemID.Value) {
          local_res10[0] = 0;
          `UE::MovieScene::FAccumulationTask::AccumulateResults'::__l14::<lambda_2>::operator()
                    (local_res10);
        }
        iVar14 = *piVar1;
        if (iVar14 <= (int)(uint)*puVar12) {
          uVar13 = *puVar12 + 1;
          if (iVar14 < (int)uVar13) {
            iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,uVar13 - iVar14,&pTVar7->AllocatorInstance,piVar1,
                               &pTVar7->ArrayMax);
            DefaultConstructItems<UE::MovieScene::FBlendResult,int>
                      ((pTVar7->AllocatorInstance).Data + (longlong)iVar9 * 0x10,uVar13 - iVar14);
          }
          else if ((int)uVar13 < iVar14) {
            iVar14 = iVar14 - uVar13;
            if (iVar14 < 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                );
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else if (iVar14 == 0) goto LAB_146818ce3;
            pFVar11 = (pTVar7->AllocatorInstance).Data + (ulonglong)uVar13 * 0x10;
            iVar9 = (*piVar1 - iVar14) - uVar13;
            if (iVar9 != 0) {
              memmove(pFVar11,pFVar11 + (longlong)iVar14 * 0x10,(longlong)iVar9 << 4);
            }
            *piVar1 = *piVar1 - iVar14;
          }
        }
LAB_146818ce3:
        uVar15 = (ulonglong)*puVar12;
        if ((*piVar1 <= (int)(uint)*puVar12) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar11 = (pTVar7->AllocatorInstance).Data;
        dVar2 = param_2[lVar17];
        lVar17 = lVar17 + 1;
        puVar12 = puVar12 + 2;
        dVar3 = *(double *)(pFVar11 + uVar15 * 0x10);
        *(float *)(pFVar11 + uVar15 * 0x10 + 8) = *(float *)(pFVar11 + uVar15 * 0x10 + 8) + fVar18;
        *(double *)(pFVar11 + uVar15 * 0x10) = dVar2 + dVar3;
      } while (lVar17 < (longlong)(ulonglong)uVar4);
    }
    else {
      lVar16 = (longlong)pdVar6 - (longlong)param_2;
      do {
        if ((((FMovieSceneBlendChannelID *)(puVar12 + -1))->SystemID).Value !=
            `private:_void___cdecl_UE::MovieScene::FAccumulationTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
            ::__l2::BlenderSystemID.Value) {
          param_4._0_1_ = 0;
          `UE::MovieScene::FAccumulationTask::AccumulateResults'::__l7::<lambda_1>::operator()
                    (&param_4);
        }
        iVar14 = *piVar1;
        if (iVar14 <= (int)(uint)*puVar12) {
          uVar13 = *puVar12 + 1;
          if (iVar14 < (int)uVar13) {
            iVar9 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x10,8,uVar13 - iVar14,&pTVar7->AllocatorInstance,piVar1,
                               &pTVar7->ArrayMax);
            DefaultConstructItems<UE::MovieScene::FBlendResult,int>
                      ((pTVar7->AllocatorInstance).Data + (longlong)iVar9 * 0x10,uVar13 - iVar14);
          }
          else if ((int)uVar13 < iVar14) {
            iVar14 = iVar14 - uVar13;
            if (iVar14 < 0) {
              bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x458,
                                 L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                );
              if (bVar8) {
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            else if (iVar14 == 0) goto LAB_146818b6f;
            pFVar11 = (pTVar7->AllocatorInstance).Data + (ulonglong)uVar13 * 0x10;
            iVar9 = (*piVar1 - iVar14) - uVar13;
            if (iVar9 != 0) {
              memmove(pFVar11,pFVar11 + (longlong)iVar14 * 0x10,(longlong)iVar9 << 4);
            }
            *piVar1 = *piVar1 - iVar14;
          }
        }
LAB_146818b6f:
        uVar15 = (ulonglong)*puVar12;
        if ((*piVar1 <= (int)(uint)*puVar12) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar11 = (pTVar7->AllocatorInstance).Data;
        fVar18 = (float)*(double *)(lVar16 + (longlong)param_2);
        lVar17 = lVar17 + 1;
        puVar12 = puVar12 + 2;
        dVar2 = *param_2;
        param_2 = param_2 + 1;
        *(float *)(pFVar11 + uVar15 * 0x10 + 8) = fVar18 + *(float *)(pFVar11 + uVar15 * 0x10 + 8);
        *(double *)(pFVar11 + uVar15 * 0x10) =
             (double)fVar18 * dVar2 + *(double *)(pFVar11 + uVar15 * 0x10);
      } while (lVar17 < (longlong)(ulonglong)uVar4);
    }
  }
  return;
}

// operator() @ 1504f4840

bool __thiscall
`UE::MovieScene::FAccumulationTask::AccumulateResults'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2203290773712011157>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2203290773712011157>,
                       &`public:___cdecl_`private:_void___cdecl_UE::MovieScene::FAccumulationTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f52d0

bool __thiscall
`UE::MovieScene::FAccumulationTask::AccumulateResults'::__l14::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2203290773712011137>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2203290773712011137>,
                       &`public:___cdecl_`private:_void___cdecl_UE::MovieScene::FAccumulationTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FBlendResult,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'::`14'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

