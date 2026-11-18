// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieScene
// Functions: 2

// ComputeAndActuate @ 1462a6f40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBlendableTokenStack<int>::ComputeAndActuate
          (TBlendableTokenStack<int> *this,UObject *param_1,FMovieSceneBlendingAccumulator *param_2,
          FMovieSceneBlendingActuatorID param_3,FMovieSceneContext *param_4,
          FPersistentEvaluationData *param_5,IMovieScenePlayer *param_6)

{
  FMovieScenePreAnimatedState *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  IMovieScenePlayer *pIVar5;
  UObject *pUVar6;
  FWeakObjectPtr FVar7;
  bool bVar8;
  int iVar9;
  TMovieSceneBlendingActuator<int> *pTVar10;
  TSharedRef<IMovieSceneBlendingActuator,1> *pTVar11;
  FMovieSceneRemoveInitialValueTokenProducer *pFVar12;
  FMovieSceneRemoveInitialGlobalValueTokenProducer *pFVar13;
  longlong *plVar14;
  FScriptContainerElement *pFVar15;
  undefined1 auStackY_238 [32];
  undefined1 local_1f8;
  FIdentityFunctor local_1f7;
  undefined1 local_1f6;
  undefined1 local_1f5;
  undefined1 local_1f4 [4];
  int local_1f0;
  IMovieScenePlayer *local_1e8;
  UObject *local_1e0;
  FMovieSceneAnimTypeID local_1d8;
  FWeakObjectPtr local_1d0;
  UObject *local_1c8;
  FWeakObjectPtr local_1c0;
  FPersistentEvaluationData *local_1b8;
  FMovieSceneContext *local_1b0;
  TWeakPtr<IMovieSceneBlendingActuator,1> local_1a8;
  TWeakPtr<IMovieSceneBlendingActuator,1> local_198;
  TMovieSceneInitialValueStore<int> local_188;
  TSharedRef<IMovieSceneBlendingActuator,1> local_160;
  TSharedRef<IMovieSceneBlendingActuator,1> local_150;
  FMovieSceneRemoveInitialValueTokenProducer local_140;
  FMovieSceneRemoveInitialGlobalValueTokenProducer local_128;
  TMaskedBlendable<double,1> local_108;
  FScopedPreAnimatedCaptureSource local_b8;
  FScopedPreAnimatedCaptureSource local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_238;
  local_1b0 = param_4;
  local_1b8 = param_5;
  local_1e8 = param_6;
  local_1c8 = param_1;
  pTVar10 = FMovieSceneBlendingAccumulator::FindActuator<int>(param_2,param_3);
  if (pTVar10 == (TMovieSceneBlendingActuator<int> *)0x0) {
    bVar8 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3831950738951503860>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.inl"
                       ,0xc,"Actuator");
    if (bVar8) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    local_1f0 = 0;
    local_108.Absolute.Mask = 0;
    local_108.Additive.Mask = 0;
    local_108.Override.Mask = 0;
    local_108.InitialValue.bIsSet = false;
    local_188.Player = param_6;
    local_108.AbsoluteWeights[0] = 0.0;
    local_188.Actuator = pTVar10;
    local_188.Stack = this;
    local_188.AnimatingObject = param_1;
    AlgoImpl::
    IntroSortInternal<TBlendableToken<int>_const_*,int,FIdentityFunctor,TDereferenceWrapper<TBlendableToken<int>_const_*,TLess<void>_>_>
              ((TBlendableToken<int> **)(this->Tokens).AllocatorInstance.Data,
               (this->Tokens).ArrayNum,local_1f7,(TLess<void> *)&local_1f7);
    pFVar15 = (this->Tokens).AllocatorInstance.Data;
    iVar9 = (this->Tokens).ArrayNum;
    pFVar1 = pFVar15 + (longlong)iVar9 * 8;
    while( true ) {
      if ((this->Tokens).ArrayNum != iVar9) {
        local_1f8 = 0;
        `TCheckedPointerIterator<TBlendableToken<int>_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(&local_1f8);
      }
      if (pFVar15 == pFVar1) break;
      plVar3 = *(longlong **)pFVar15;
      if ((*(byte *)(plVar3 + 1) & 1) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\BlendableToken.h"
                           ,0x90,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((*(byte *)(plVar3 + 1) & 1) == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsValid",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                               ,0x97,
                               L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                              ), bVar8)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar14 = plVar3;
      if ((*(byte *)(plVar3 + 1) & 2) == 0) {
        plVar14 = (longlong *)*plVar3;
      }
      (**(code **)(*plVar14 + 8))
                (plVar14,&local_108,*(undefined4 *)((longlong)plVar3 + 0x24),(char)plVar3[5]);
      pFVar15 = pFVar15 + 8;
    }
    iVar9 = UE::MovieScene::TMaskedBlendable<double,1>::Resolve<int>(&local_108,&local_188);
    pUVar6 = local_1c8;
    (**(code **)(pTVar10->_padding_ + 0x20))(pTVar10,local_1c8,iVar9,this);
    iVar9 = 0;
    if (pUVar6 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      local_1d0.ObjectIndex = 0;
      local_1d0.ObjectSerialNumber = 0;
      local_1e0 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=(&local_1d0,(FObjectPtr)&local_1e0);
      local_1c0 = local_1d0;
      FVar7 = local_1c0;
      local_1c0.ObjectSerialNumber = local_1d0.ObjectSerialNumber;
      local_1f0 = local_1d0.ObjectIndex;
      iVar9 = local_1c0.ObjectSerialNumber;
      local_1c0 = FVar7;
    }
    iVar2 = (pTVar10->InitialValues).ArrayNum;
    pFVar15 = (pTVar10->InitialValues).AllocatorInstance.Data;
    pFVar1 = pFVar15 + (longlong)iVar2 * 0xc;
    while( true ) {
      if ((pTVar10->InitialValues).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TMovieSceneBlendingActuator<int>::FInitialValue_const_,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_1f6);
      }
      if (pFVar15 == pFVar1) {
        return;
      }
      if ((*(int *)pFVar15 == local_1f0) && (*(int *)(pFVar15 + 4) == iVar9)) break;
      pFVar15 = pFVar15 + 0xc;
    }
    GetInitialValueTypeID();
    FMovieSceneAnimTypeID::Combine
              ((FMovieSceneAnimTypeID)&local_1d8,
               (FMovieSceneAnimTypeID)*(ulong64 *)&pTVar10->ActuatorID);
    if (pUVar6 == (UObject *)0x0) {
      pTVar11 = TSharedFromThis<IMovieSceneBlendingActuator,1>::AsShared
                          ((TSharedFromThis<IMovieSceneBlendingActuator,1> *)&pTVar10->_padding_,
                           &local_150);
      local_198.Object = pTVar11->Object;
      local_198.WeakReferenceCount.ReferenceController =
           (pTVar11->SharedReferenceCount).ReferenceController;
      if (local_198.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_198.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_198.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar13 = FMovieSceneRemoveInitialGlobalValueTokenProducer::
                FMovieSceneRemoveInitialGlobalValueTokenProducer(&local_128,&local_198);
      pIVar5 = local_1e8;
      pFVar15 = (this->Tokens).AllocatorInstance.Data;
      bVar8 = false;
      iVar9 = (this->Tokens).ArrayNum;
      local_1e0 = (UObject *)&local_1e8->PreAnimatedState;
      pFVar1 = pFVar15 + (longlong)iVar9 * 8;
      while( true ) {
        if ((this->Tokens).ArrayNum != iVar9) {
          `TCheckedPointerIterator<TBlendableToken<int>_const_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_1f4);
        }
        if (pFVar15 == pFVar1) break;
        FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
                  (&local_80,&pIVar5->PreAnimatedState,
                   (FMovieSceneEvaluationKey *)(*(longlong *)pFVar15 + 0x10),true);
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (&pIVar5->PreAnimatedState,local_1d8,
                   (IMovieScenePreAnimatedGlobalTokenProducer *)pFVar13);
        bVar8 = true;
        FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_80);
        pFVar15 = pFVar15 + 8;
      }
      if (!bVar8) {
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  ((FMovieScenePreAnimatedState *)local_1e0,local_1d8,
                   (IMovieScenePreAnimatedGlobalTokenProducer *)pFVar13);
      }
      FMovieSceneRemoveInitialGlobalValueTokenProducer::
      ~FMovieSceneRemoveInitialGlobalValueTokenProducer(&local_128);
      local_160.SharedReferenceCount.ReferenceController =
           local_150.SharedReferenceCount.ReferenceController;
    }
    else {
      pTVar11 = TSharedFromThis<IMovieSceneBlendingActuator,1>::AsShared
                          ((TSharedFromThis<IMovieSceneBlendingActuator,1> *)&pTVar10->_padding_,
                           &local_160);
      local_1a8.Object = pTVar11->Object;
      local_1a8.WeakReferenceCount.ReferenceController =
           (pTVar11->SharedReferenceCount).ReferenceController;
      if (local_1a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_1a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar12 = FMovieSceneRemoveInitialValueTokenProducer::
                FMovieSceneRemoveInitialValueTokenProducer(&local_140,&local_1a8);
      pUVar6 = local_1c8;
      pFVar15 = (this->Tokens).AllocatorInstance.Data;
      bVar8 = false;
      iVar9 = (this->Tokens).ArrayNum;
      local_1e0 = (UObject *)&local_1e8->PreAnimatedState;
      pFVar1 = pFVar15 + (longlong)iVar9 * 8;
      while( true ) {
        if ((this->Tokens).ArrayNum != iVar9) {
          `TCheckedPointerIterator<TBlendableToken<int>_const_*_const,int,0>::operator!='::__l2::
          <lambda_1>::operator()(&local_1f5);
        }
        if (pFVar15 == pFVar1) break;
        this_00 = &local_1e8->PreAnimatedState;
        FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
                  (&local_b8,this_00,(FMovieSceneEvaluationKey *)(*(longlong *)pFVar15 + 0x10),true)
        ;
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (this_00,pUVar6,local_1d8,(IMovieScenePreAnimatedTokenProducer *)pFVar12);
        bVar8 = true;
        FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_b8);
        pFVar15 = pFVar15 + 8;
      }
      if (!bVar8) {
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  ((FMovieScenePreAnimatedState *)local_1e0,local_1c8,local_1d8,
                   (IMovieScenePreAnimatedTokenProducer *)pFVar12);
      }
      FMovieSceneRemoveInitialValueTokenProducer::~FMovieSceneRemoveInitialValueTokenProducer
                (&local_140);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_160.SharedReferenceCount.ReferenceController);
  }
  return;
}

// Interrogate @ 1462b34d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBlendableTokenStack<int>::Interrogate
          (TBlendableTokenStack<int> *this,UObject *param_1,FMovieSceneInterrogationData *param_2,
          FMovieSceneBlendingAccumulator *param_3,FMovieSceneBlendingActuatorID param_4,
          FMovieSceneContext *param_5)

{
  FScriptContainerElement *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TMovieSceneBlendingActuator<int> *pTVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_f8 [32];
  undefined1 local_c8 [8];
  TMovieSceneInitialValueStore<int> local_c0;
  TMaskedBlendable<double,1> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  pTVar6 = FMovieSceneBlendingAccumulator::FindActuator<int>(param_3,param_4);
  if (pTVar6 == (TMovieSceneBlendingActuator<int> *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3831950738951503824>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.inl"
                       ,0x30,"Actuator");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    iVar5 = (this->Tokens).ArrayNum;
    pFVar8 = (this->Tokens).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar5 * 8;
    local_c0.Player = (IMovieScenePlayer *)0x0;
    local_98.Absolute.Mask = 0;
    local_98.Additive.Mask = 0;
    local_98.Override.Mask = 0;
    local_98.InitialValue.bIsSet = false;
    local_98.AbsoluteWeights[0] = 0.0;
    local_c0.Actuator = pTVar6;
    local_c0.Stack = this;
    local_c0.AnimatingObject = param_1;
    while( true ) {
      if ((this->Tokens).ArrayNum != iVar5) {
        local_c8[0] = 0;
        `TCheckedPointerIterator<TBlendableToken<int>_const_*,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_c8);
      }
      if (pFVar8 == pFVar1) break;
      plVar2 = *(longlong **)pFVar8;
      if ((*(byte *)(plVar2 + 1) & 1) == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\BlendableToken.h"
                           ,0x90,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if ((*(byte *)(plVar2 + 1) & 1) == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            );
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
      plVar7 = plVar2;
      if ((*(byte *)(plVar2 + 1) & 2) == 0) {
        plVar7 = (longlong *)*plVar2;
      }
      (**(code **)(*plVar7 + 8))
                (plVar7,&local_98,*(undefined4 *)((longlong)plVar2 + 0x24),(char)plVar2[5]);
      pFVar8 = pFVar8 + 8;
    }
    iVar5 = UE::MovieScene::TMaskedBlendable<double,1>::Resolve<int>(&local_98,&local_c0);
    (**(code **)(pTVar6->_padding_ + 0x18))(pTVar6,param_2,iVar5,this);
  }
  return;
}

