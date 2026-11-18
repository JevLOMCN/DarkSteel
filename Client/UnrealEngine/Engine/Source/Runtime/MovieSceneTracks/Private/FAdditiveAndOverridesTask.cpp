// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieSceneTracks
// Functions: 4

// AccumulateResults @ 146818e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::MovieScene::FAdditiveAndOverridesTask::AccumulateResults
          (FAdditiveAndOverridesTask *this,FEntityAllocation *param_1,double *param_2,int *param_3,
          FMovieSceneBlendChannelID *param_4,double *param_5,
          TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_> *param_6)

{
  ushort uVar1;
  code *pcVar2;
  undefined1 uVar3;
  double *pdVar4;
  bool bVar5;
  FBuiltInComponentTypes *pFVar6;
  UClass *this_00;
  UMovieSceneBlenderSystem *pUVar7;
  FComponentHeader *pFVar8;
  FComponentHeader *pFVar9;
  FComponentHeader *pFVar10;
  FComponentHeader *pFVar11;
  ulonglong uVar12;
  FComponentHeader *pFVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_b8 [32];
  ulonglong local_98;
  longlong local_90;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86 [6];
  double *local_80;
  FAdditveAndOverrideData local_78;
  FAdditveAndOverrideData local_60;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_b8;
  local_80 = param_2;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `private:_void___cdecl_UE::MovieScene::FAdditiveAndOverridesTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,int_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`private:_void___cdecl_UE::MovieScene::FAdditiveAndOverridesTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,int_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
                           ::__l2::_thread_safe_static_guard_0__),
     `private:_void___cdecl_UE::MovieScene::FAdditiveAndOverridesTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,int_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    this_00 = UMovieScenePiecewiseDoubleBlenderSystem::StaticClass();
    pUVar7 = UClass::GetDefaultObject<UMovieSceneBlenderSystem>(this_00);
    if ((pUVar7 == (UMovieSceneBlenderSystem *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("DefaultObject",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\EntitySystem\\MovieSceneBlenderSystem.h"
                           ,0x41,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    `private:_void___cdecl_UE::MovieScene::FAdditiveAndOverridesTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,int_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
    ::__l2::BlenderSystemID.Value = (pUVar7->SystemID).Value;
    _Init_thread_footer(&`private:_void___cdecl_UE::MovieScene::FAdditiveAndOverridesTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,int_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  uVar12 = (ulonglong)param_1->Size;
  pFVar6 = FBuiltInComponentTypes::Get();
  pFVar10 = param_1->ComponentHeaders;
  pFVar13 = (FComponentHeader *)0x0;
  pFVar8 = pFVar10 + param_1->NumComponents;
  for (; (pFVar11 = pFVar13, pFVar10 != pFVar8 &&
         (pFVar11 = pFVar10, (pFVar10->ComponentType).Value != (pFVar6->Tags).AdditiveBlend.Value));
      pFVar10 = pFVar10 + 1) {
  }
  local_88 = pFVar11 != (FComponentHeader *)0x0;
  pFVar6 = FBuiltInComponentTypes::Get();
  pdVar4 = local_80;
  uVar3 = local_88;
  pFVar10 = param_1->ComponentHeaders;
  pFVar8 = pFVar10 + param_1->NumComponents;
  for (; (pFVar9 = pFVar13, pFVar10 != pFVar8 &&
         (pFVar9 = pFVar10, (pFVar10->ComponentType).Value != (pFVar6->Tags).OverrideBlend.Value));
      pFVar10 = pFVar10 + 1) {
  }
  if ((pFVar11 != (FComponentHeader *)0x0) || (pFVar9 != (FComponentHeader *)0x0)) {
    if (param_5 == (double *)0x0) {
      if (uVar12 != 0) {
        lVar14 = (longlong)param_3 - (longlong)param_4;
        do {
          if ((param_4->SystemID).Value !=
              `private:_void___cdecl_UE::MovieScene::FAdditiveAndOverridesTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,int_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
              ::__l2::BlenderSystemID.Value) {
            local_86[0] = 0;
            `UE::MovieScene::FAdditiveAndOverridesTask::AccumulateResults'::__l14::<lambda_2>::
            operator()(local_86);
          }
          uVar1 = param_4->ChannelID;
          if ((param_6->ArrayNum <= (int)(uint)uVar1) &&
             (local_98 = (ulonglong)uVar1, local_90 = (longlong)param_6->ArrayNum,
             bVar5 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar5)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          local_60.Value = pdVar4[(longlong)pFVar13];
          local_60.BlendingOrder = *(int *)((longlong)param_4 + lVar14);
          local_60.bIsAdditive = (bool)uVar3;
          local_60.Weight = 1.0;
          TSortedMap<int,UE::MovieScene::FAdditveAndOverrideData,TSizedDefaultAllocator<32>,TLess<int_const_>_>
          ::Emplace<int_const_&,UE::MovieScene::FAdditveAndOverrideData_const_&>
                    ((TSortedMap<int,UE::MovieScene::FAdditveAndOverrideData,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                      *)((param_6->AllocatorInstance).Data + (ulonglong)uVar1 * 0x10),
                     &local_60.BlendingOrder,&local_60);
          pFVar13 = (FComponentHeader *)((longlong)&pFVar13->_padding_ + 1);
          param_4 = param_4 + 1;
        } while ((longlong)pFVar13 < (longlong)uVar12);
      }
    }
    else if (uVar12 != 0) {
      lVar15 = (longlong)param_3 - (longlong)param_4;
      lVar14 = (longlong)local_80 - (longlong)param_5;
      do {
        if ((param_4->SystemID).Value !=
            `private:_void___cdecl_UE::MovieScene::FAdditiveAndOverridesTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,int_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'
            ::__l2::BlenderSystemID.Value) {
          local_87 = 0;
          `UE::MovieScene::FAdditiveAndOverridesTask::AccumulateResults'::__l10::<lambda_1>::
          operator()(&local_87);
        }
        uVar1 = param_4->ChannelID;
        if ((param_6->ArrayNum <= (int)(uint)uVar1) &&
           (local_98 = (ulonglong)uVar1, local_90 = (longlong)param_6->ArrayNum,
           bVar5 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        local_78.Value = *(double *)((longlong)param_5 + lVar14);
        local_78.BlendingOrder = *(int *)((longlong)param_4 + lVar15);
        local_78.Weight = (float)*param_5;
        local_78.bIsAdditive = (bool)uVar3;
        TSortedMap<int,UE::MovieScene::FAdditveAndOverrideData,TSizedDefaultAllocator<32>,TLess<int_const_>_>
        ::Emplace<int_const_&,UE::MovieScene::FAdditveAndOverrideData_const_&>
                  ((TSortedMap<int,UE::MovieScene::FAdditveAndOverrideData,TSizedDefaultAllocator<32>,TLess<int_const_>_>
                    *)((param_6->AllocatorInstance).Data + (ulonglong)uVar1 * 0x10),
                   &local_78.BlendingOrder,&local_78);
        param_5 = param_5 + 1;
        param_4 = param_4 + 1;
        uVar12 = uVar12 - 1;
      } while (uVar12 != 0);
    }
  }
  return;
}

// ForEachAllocation @ 14682ea10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UE::MovieScene::FAdditiveAndOverridesTask::ForEachAllocation
          (FAdditiveAndOverridesTask *this,FEntityAllocationProxy *param_1,
          TRead<FMovieSceneBlendChannelID> param_2,TRead<int> param_3,TReadOptional<double> param_4)

{
  EComponentHeaderLockMode EVar1;
  TArray<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer>,TSizedDefaultAllocator<32>_>
  *pTVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FEntityAllocation *pFVar6;
  FComponentHeader *pFVar7;
  TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_> *pTVar8;
  uint uVar9;
  FComponentHeader *pFVar10;
  atomic<int> *paVar11;
  FKeyForward local_48;
  
  pFVar6 = FEntityAllocationProxy::GetAllocation(param_1);
  FEntityAllocationProxy::GetAllocationType(param_1);
  pFVar10 = pFVar6->ComponentHeaders;
  pFVar7 = pFVar10 + pFVar6->NumComponents;
  if (pFVar10 != pFVar7) {
    paVar11 = &pFVar10->ScheduledAccessCount;
    do {
      pTVar2 = &this->AccumulationBuffers->Pairs;
      uVar5 = Algo::
              BinarySearchBy<TArray<TTuple<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer>,TSizedDefaultAllocator<32>_>,UE::MovieScene::FComponentTypeID,TSortedMap<UE::MovieScene::FComponentTypeID,UE::MovieScene::FAdditiveAndOverrideBuffer,TSizedDefaultAllocator<32>,TLess<UE::MovieScene::FComponentTypeID_const_&>_>::FKeyForward,TLess<UE::MovieScene::FComponentTypeID_const_&>_>
                        (pTVar2,(FComponentTypeID *)&paVar11[1].field_0x2,local_48,
                         (TLess<UE::MovieScene::FComponentTypeID_const_&>)local_48);
      if (uVar5 != 0xffffffff) {
        uVar9 = 0;
        if ((int)uVar5 < pTVar2->ArrayNum) {
          uVar9 = ~uVar5 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar8 = (TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_> *)
                 ((pTVar2->AllocatorInstance).Data + (longlong)(int)uVar5 * 0x18 + 8);
        if (pTVar8 != (TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_> *)
                      0x0) {
          EVar1 = pFVar6->LockMode;
          if (EVar1 == Mutex) {
            AcquireSRWLockShared((PSRWLOCK)(paVar11 + -4));
          }
          LOCK();
          *paVar11 = (atomic<int>)((int)*paVar11 + 1);
          UNLOCK();
          AccumulateResults(this,pFVar6,*(double **)(paVar11 + -6),(int *)param_3,
                            (FMovieSceneBlendChannelID *)param_2,(double *)param_4,pTVar8);
          LOCK();
          *paVar11 = (atomic<int>)((int)*paVar11 + -1);
          UNLOCK();
          if (EVar1 == Mutex) {
            ReleaseSRWLockShared((PSRWLOCK)(paVar11 + -4));
          }
        }
      }
      pFVar10 = pFVar10 + 1;
      paVar11 = paVar11 + 0xe;
    } while (pFVar10 != pFVar7);
  }
  return;
}

// operator() @ 1504f4a90

bool __thiscall
`UE::MovieScene::FAdditiveAndOverridesTask::AccumulateResults'::__l10::<lambda_1>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2203290773712011014>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2203290773712011014>,
                       &`public:___cdecl_`private:_void___cdecl_UE::MovieScene::FAdditiveAndOverridesTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,int_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'::`10'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 1504f5310

bool __thiscall
`UE::MovieScene::FAdditiveAndOverridesTask::AccumulateResults'::__l14::<lambda_2>::operator()
          (void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_2203290773712010997>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_2203290773712010997>,
                       &`public:___cdecl_`private:_void___cdecl_UE::MovieScene::FAdditiveAndOverridesTask::AccumulateResults(UE::MovieScene::FEntityAllocation_const*___ptr64,double_const*___ptr64,int_const*___ptr64,FMovieSceneBlendChannelID_const*___ptr64,double_const*___ptr64,TArray<UE::MovieScene::FAdditiveAndOverrides,TSizedDefaultAllocator<32>_>&___ptr64)const___ptr64'::`14'::<lambda_2>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

