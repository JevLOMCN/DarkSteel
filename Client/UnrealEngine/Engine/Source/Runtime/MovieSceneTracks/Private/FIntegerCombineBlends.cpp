// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// BlendResultsWithInitial @ 14681ec50

void __thiscall
UE::MovieScene::FIntegerCombineBlends::BlendResultsWithInitial
          (FIntegerCombineBlends *this,ushort param_1,long64 param_2,long64 *param_3)

{
  FScriptContainerElement *pFVar1;
  undefined1 auVar2 [16];
  int iVar3;
  FIntegerAccumulationBuffers *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  longlong local_res8;
  
  pFVar4 = this->AccumulationBuffers;
  lVar10 = 0;
  iVar3 = (pFVar4->Absolute).ArrayNum;
  uVar7 = (uint)param_1;
  if (iVar3 < 1) {
    uVar16 = 0;
    uVar17 = 0;
    lVar8 = lVar10;
  }
  else {
    if ((iVar3 <= (int)uVar7) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    auVar2 = *(undefined1 (*) [16])
              ((pFVar4->Absolute).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10);
    uVar16 = auVar2._8_4_;
    uVar17 = auVar2._12_4_;
    lVar8 = auVar2._0_8_;
  }
  pFVar4 = this->AccumulationBuffers;
  iVar3 = (pFVar4->Relative).ArrayNum;
  if (iVar3 < 1) {
    uVar14 = 0;
    uVar15 = 0;
    lVar11 = lVar10;
  }
  else {
    if ((iVar3 <= (int)uVar7) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    auVar2 = *(undefined1 (*) [16])
              ((pFVar4->Relative).AllocatorInstance.Data + (longlong)(int)uVar7 * 0x10);
    uVar14 = auVar2._8_4_;
    uVar15 = auVar2._12_4_;
    lVar11 = auVar2._0_8_;
  }
  lVar9 = (longlong)(int)uVar7 * 0x10;
  pFVar4 = this->AccumulationBuffers;
  iVar3 = (pFVar4->Additive).ArrayNum;
  if (iVar3 < 1) {
    local_res8 = 0;
    uVar18 = 0;
    uVar19 = 0;
  }
  else {
    if ((iVar3 <= (int)uVar7) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar1 = (pFVar4->Additive).AllocatorInstance.Data + lVar9;
    local_res8 = *(longlong *)pFVar1;
    uVar18 = *(undefined4 *)(pFVar1 + 8);
    uVar19 = *(undefined4 *)(pFVar1 + 0xc);
  }
  pFVar4 = this->AccumulationBuffers;
  iVar3 = (pFVar4->AdditiveFromBase).ArrayNum;
  if (iVar3 < 1) {
    dVar13 = 0.0;
  }
  else {
    if ((iVar3 <= (int)uVar7) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar1 = (pFVar4->AdditiveFromBase).AllocatorInstance.Data + lVar9;
    lVar10 = *(longlong *)pFVar1;
    dVar13 = *(double *)(pFVar1 + 8);
  }
  if ((double)CONCAT44(uVar15,uVar14) != 0.0) {
    lVar11 = (longlong)((double)param_2 * (double)CONCAT44(uVar15,uVar14) + (double)lVar11);
  }
  dVar12 = (double)CONCAT44(uVar15,uVar14) + (double)CONCAT44(uVar17,uVar16);
  if (dVar12 == 0.0) {
    if (dVar13 + (double)CONCAT44(uVar19,uVar18) == 0.0) {
      *param_3 = param_2;
    }
    else {
      *param_3 = local_res8 + lVar10 + param_2;
    }
  }
  else {
    if ((0.0 <= (double)CONCAT44(uVar17,uVar16) && (double)CONCAT44(uVar17,uVar16) != 0.0) &&
       ((double)CONCAT44(uVar17,uVar16) < __real_3ff0000000000000)) {
      dVar12 = (__real_3ff0000000000000 - (double)CONCAT44(uVar17,uVar16)) + dVar12;
      lVar8 = lVar8 - (longlong)
                      (((double)CONCAT44(uVar17,uVar16) - __real_3ff0000000000000) * (double)param_2
                      );
    }
    *param_3 = (longlong)((double)(lVar11 + lVar8) / dVar12) + local_res8 + lVar10;
  }
  return;
}

// ForEachAllocation @ 1468322a0

void __thiscall
UE::MovieScene::FIntegerCombineBlends::ForEachAllocation
          (FIntegerCombineBlends *this,FEntityAllocation *param_1,
          TRead<FMovieSceneBlendChannelID> param_2,TReadOptional<__int64> param_3,
          TWrite<__int64> param_4)

{
  FScriptContainerElement *pFVar1;
  ushort uVar2;
  int iVar3;
  FIntegerAccumulationBuffers *pFVar4;
  code *pcVar5;
  bool bVar6;
  UClass *this_00;
  UMovieSceneBlenderSystem *pUVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined1 local_res20 [8];
  undefined1 local_68 [8];
  longlong local_60;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_void___cdecl_UE::MovieScene::FIntegerCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TReadOptional<__int64>,UE::MovieScene::TWrite<__int64>)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_void___cdecl_UE::MovieScene::FIntegerCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TReadOptional<__int64>,UE::MovieScene::TWrite<__int64>)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_void___cdecl_UE::MovieScene::FIntegerCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TReadOptional<__int64>,UE::MovieScene::TWrite<__int64>)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    this_00 = UMovieScenePiecewiseIntegerBlenderSystem::StaticClass();
    pUVar7 = UClass::GetDefaultObject<UMovieSceneBlenderSystem>(this_00);
    if ((pUVar7 == (UMovieSceneBlenderSystem *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("DefaultObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneBlenderSystem.h"
                           ,0x41,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    `public:_void___cdecl_UE::MovieScene::FIntegerCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TReadOptional<__int64>,UE::MovieScene::TWrite<__int64>)const___ptr64'
    ::__l2::IntegerBlenderSystemID.Value = (pUVar7->SystemID).Value;
    _Init_thread_footer(&`public:_void___cdecl_UE::MovieScene::FIntegerCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TReadOptional<__int64>,UE::MovieScene::TWrite<__int64>)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar10 = 0;
  if (param_3 == (TReadOptional<__int64>)0x0) {
    uVar12 = uVar10;
    if (param_1->Size != 0) {
      do {
        if (*(uchar *)param_2 !=
            `public:_void___cdecl_UE::MovieScene::FIntegerCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TReadOptional<__int64>,UE::MovieScene::TWrite<__int64>)const___ptr64'
            ::__l2::IntegerBlenderSystemID.Value) {
          local_res20[0] = 0;
          `UE::MovieScene::FIntegerCombineBlends::ForEachAllocation'::__l11::<lambda_2>::operator()
                    (local_res20);
        }
        pFVar4 = this->AccumulationBuffers;
        uVar2 = *(ushort *)((longlong)param_2 + 2);
        iVar3 = (pFVar4->Absolute).ArrayNum;
        if (iVar3 < 1) {
          local_60 = 0;
          uVar14 = 0;
          uVar15 = 0;
        }
        else {
          if ((iVar3 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pFVar1 = (pFVar4->Absolute).AllocatorInstance.Data + (ulonglong)uVar2 * 0x10;
          local_60 = *(longlong *)pFVar1;
          uVar14 = *(undefined4 *)(pFVar1 + 8);
          uVar15 = *(undefined4 *)(pFVar1 + 0xc);
        }
        pFVar4 = this->AccumulationBuffers;
        iVar3 = (pFVar4->Additive).ArrayNum;
        if (iVar3 < 1) {
          lVar11 = (longlong)(int)(uint)uVar2;
          uVar13 = uVar10;
        }
        else {
          if ((iVar3 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          lVar11 = (longlong)(int)(uint)uVar2;
          uVar13 = *(ulonglong *)((pFVar4->Additive).AllocatorInstance.Data + lVar11 * 0x10);
        }
        pFVar4 = this->AccumulationBuffers;
        iVar3 = (pFVar4->AdditiveFromBase).ArrayNum;
        uVar8 = uVar10;
        if (0 < iVar3) {
          if ((iVar3 <= (int)(uint)uVar2) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          uVar8 = *(ulonglong *)((pFVar4->AdditiveFromBase).AllocatorInstance.Data + lVar11 * 0x10);
        }
        if ((double)CONCAT44(uVar15,uVar14) != 0.0) {
          *(ulonglong *)param_4 =
               (longlong)((double)local_60 / (double)CONCAT44(uVar15,uVar14)) + uVar8 + uVar13;
        }
        uVar9 = (int)uVar12 + 1;
        param_4 = (TWrite<__int64>)((longlong)param_4 + 8);
        param_2 = (TRead<FMovieSceneBlendChannelID>)((longlong)param_2 + 4);
        uVar12 = (ulonglong)uVar9;
      } while ((int)uVar9 < (int)(uint)param_1->Size);
    }
  }
  else if (param_1->Size != 0) {
    do {
      if (*(uchar *)param_2 !=
          `public:_void___cdecl_UE::MovieScene::FIntegerCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TReadOptional<__int64>,UE::MovieScene::TWrite<__int64>)const___ptr64'
          ::__l2::IntegerBlenderSystemID.Value) {
        `UE::MovieScene::FIntegerCombineBlends::ForEachAllocation'::__l7::<lambda_1>::operator()
                  (local_68);
      }
      BlendResultsWithInitial
                (this,*(ushort *)((longlong)param_2 + 2),*(long64 *)param_3,
                 (long64 *)((longlong)param_4 + (longlong)(int)uVar10 * 8));
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
      param_3 = (TReadOptional<__int64>)((longlong)param_3 + 8);
      param_2 = (TRead<FMovieSceneBlendChannelID>)((longlong)param_2 + 4);
    } while ((int)uVar9 < (int)(uint)param_1->Size);
  }
  return;
}

// operator() @ 1504f4940

bool __thiscall
`UE::MovieScene::FIntegerCombineBlends::ForEachAllocation'::__l7::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5606940484778852495>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5606940484778852495>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::FIntegerCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TReadOptional<__int64>,UE::MovieScene::TWrite<__int64>)const___ptr64'::`7'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f5290

bool __thiscall
`UE::MovieScene::FIntegerCombineBlends::ForEachAllocation'::__l11::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<5606940484778852503>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<5606940484778852503>,
                       &`public:___cdecl_`public:_void___cdecl_UE::MovieScene::FIntegerCombineBlends::ForEachAllocation(UE::MovieScene::FEntityAllocation*___ptr64,UE::MovieScene::TRead<FMovieSceneBlendChannelID>,UE::MovieScene::TReadOptional<__int64>,UE::MovieScene::TWrite<__int64>)const___ptr64'::`11'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

