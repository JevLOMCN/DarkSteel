// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 8

// ComputeAndActuate @ 14a3f2f30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBlendableTokenStack<FControlRigTrackTokenFloat>::ComputeAndActuate
          (TBlendableTokenStack<FControlRigTrackTokenFloat> *this,UObject *param_1,
          FMovieSceneBlendingAccumulator *param_2,FMovieSceneBlendingActuatorID param_3,
          FMovieSceneContext *param_4,FPersistentEvaluationData *param_5,IMovieScenePlayer *param_6)

{
  FMovieScenePreAnimatedState *this_00;
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  IMovieScenePlayer *pIVar5;
  UObject *pUVar6;
  bool bVar7;
  TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *pTVar8;
  TSharedRef<IMovieSceneBlendingActuator,1> *pTVar9;
  FMovieSceneRemoveInitialValueTokenProducer *pFVar10;
  FMovieSceneRemoveInitialGlobalValueTokenProducer *pFVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 auStackY_208 [32];
  undefined1 local_1c8;
  FIdentityFunctor local_1c7;
  undefined1 local_1c6;
  undefined1 local_1c5;
  undefined1 local_1c4 [4];
  int local_1c0;
  IMovieScenePlayer *local_1b8;
  UObject *local_1b0;
  FMovieSceneAnimTypeID local_1a8;
  TMovieSceneInitialValueStore<FControlRigTrackTokenFloat> local_1a0;
  FPersistentEvaluationData *local_180;
  FMovieSceneContext *local_178;
  TWeakPtr<IMovieSceneBlendingActuator,1> local_170;
  TWeakPtr<IMovieSceneBlendingActuator,1> local_160;
  TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *local_150;
  TBlendableTokenStack<FControlRigTrackTokenFloat> *local_148;
  UObject *local_140;
  IMovieScenePlayer *local_138;
  TSharedRef<IMovieSceneBlendingActuator,1> local_128;
  TSharedRef<IMovieSceneBlendingActuator,1> local_118;
  FMovieSceneRemoveInitialValueTokenProducer local_108;
  FMovieSceneRemoveInitialGlobalValueTokenProducer local_f0;
  TMaskedBlendable<float,1> local_d8;
  FScopedPreAnimatedCaptureSource local_b0;
  FScopedPreAnimatedCaptureSource local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_208;
  local_178 = param_4;
  local_180 = param_5;
  local_1b8 = param_6;
  local_1a0.AnimatingObject = param_1;
  pTVar8 = FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenFloat>(param_2,param_3)
  ;
  if (pTVar8 == (TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3831950738951503860>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.inl"
                       ,0xc,"Actuator");
    if (bVar7) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    local_1c0 = 0;
    local_d8.Absolute.Mask = 0;
    local_d8.AbsoluteWeights[0] = 0.0;
    local_d8.Additive.Mask = 0;
    local_d8.Override.Mask = 0;
    local_d8.InitialValue.bIsSet = false;
    local_138 = param_6;
    local_150 = pTVar8;
    local_148 = this;
    local_140 = param_1;
    AlgoImpl::
    IntroSortInternal<TBlendableToken<FControlRigTrackTokenFloat>_const_*,int,FIdentityFunctor,TDereferenceWrapper<TBlendableToken<FControlRigTrackTokenFloat>_const_*,TLess<void>_>_>
              ((TBlendableToken<FControlRigTrackTokenFloat> **)(this->Tokens).AllocatorInstance.Data
               ,(this->Tokens).ArrayNum,local_1c7,(TLess<void> *)&local_1c7);
    pFVar13 = (this->Tokens).AllocatorInstance.Data;
    iVar14 = (this->Tokens).ArrayNum;
    pFVar1 = pFVar13 + (longlong)iVar14 * 8;
    while( true ) {
      if ((this->Tokens).ArrayNum != iVar14) {
        local_1c8 = 0;
        `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenFloat>_const_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_1c8);
      }
      if (pFVar13 == pFVar1) break;
      plVar3 = *(longlong **)pFVar13;
      if ((*(byte *)(plVar3 + 1) & 1) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\BlendableToken.h"
                           ,0x90,L"");
        if (bVar7) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((*(byte *)(plVar3 + 1) & 1) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsValid",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                               ,0x97,
                               L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      plVar12 = plVar3;
      if ((*(byte *)(plVar3 + 1) & 2) == 0) {
        plVar12 = (longlong *)*plVar3;
      }
      (**(code **)(*plVar12 + 8))
                (plVar12,&local_d8,*(undefined4 *)((longlong)plVar3 + 0x24),(char)plVar3[5]);
      pFVar13 = pFVar13 + 8;
    }
    UE::MovieScene::TMaskedBlendable<float,1>::Resolve<FControlRigTrackTokenFloat>
              (&local_d8,&local_1a0);
    pUVar6 = local_1a0.AnimatingObject;
    (**(code **)(pTVar8->_padding_ + 0x20))(pTVar8,local_1a0.AnimatingObject,&local_1a0,this);
    iVar14 = 0;
    if (pUVar6 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      local_1a0.Stack = (TBlendableTokenStack<FControlRigTrackTokenFloat> *)0x0;
      local_1b0 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_1a0.Stack,(FObjectPtr)&local_1b0);
      local_1a0.Player = (IMovieScenePlayer *)local_1a0.Stack;
      pIVar5 = local_1a0.Player;
      local_1a0.Player._4_4_ = (int)((ulonglong)local_1a0.Stack >> 0x20);
      local_1c0 = (int)local_1a0.Stack;
      iVar14 = local_1a0.Player._4_4_;
      local_1a0.Player = pIVar5;
    }
    iVar2 = (pTVar8->InitialValues).ArrayNum;
    pFVar13 = (pTVar8->InitialValues).AllocatorInstance.Data;
    pFVar1 = pFVar13 + (longlong)iVar2 * 0xc;
    while( true ) {
      if ((pTVar8->InitialValues).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TMovieSceneBlendingActuator<FControlRigTrackTokenFloat>::FInitialValue_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_1c6);
      }
      if (pFVar13 == pFVar1) {
        return;
      }
      if ((*(int *)pFVar13 == local_1c0) && (*(int *)(pFVar13 + 4) == iVar14)) break;
      pFVar13 = pFVar13 + 0xc;
    }
    GetInitialValueTypeID();
    FMovieSceneAnimTypeID::Combine
              ((FMovieSceneAnimTypeID)&local_1a8,
               (FMovieSceneAnimTypeID)*(ulong64 *)&pTVar8->ActuatorID);
    if (pUVar6 == (UObject *)0x0) {
      pTVar9 = TSharedFromThis<IMovieSceneBlendingActuator,1>::AsShared
                         ((TSharedFromThis<IMovieSceneBlendingActuator,1> *)&pTVar8->_padding_,
                          &local_118);
      local_160.Object = pTVar9->Object;
      local_160.WeakReferenceCount.ReferenceController =
           (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_160.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_160.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_160.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar11 = FMovieSceneRemoveInitialGlobalValueTokenProducer::
                FMovieSceneRemoveInitialGlobalValueTokenProducer(&local_f0,&local_160);
      pIVar5 = local_1b8;
      pFVar13 = (this->Tokens).AllocatorInstance.Data;
      bVar7 = false;
      iVar14 = (this->Tokens).ArrayNum;
      local_1b0 = (UObject *)&local_1b8->PreAnimatedState;
      pFVar1 = pFVar13 + (longlong)iVar14 * 8;
      while( true ) {
        if ((this->Tokens).ArrayNum != iVar14) {
          `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenFloat>_const_*_const,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_1c4);
        }
        if (pFVar13 == pFVar1) break;
        FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
                  (&local_78,&pIVar5->PreAnimatedState,
                   (FMovieSceneEvaluationKey *)(*(longlong *)pFVar13 + 0x10),true);
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (&pIVar5->PreAnimatedState,local_1a8,
                   (IMovieScenePreAnimatedGlobalTokenProducer *)pFVar11);
        bVar7 = true;
        FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_78);
        pFVar13 = pFVar13 + 8;
      }
      if (!bVar7) {
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  ((FMovieScenePreAnimatedState *)local_1b0,local_1a8,
                   (IMovieScenePreAnimatedGlobalTokenProducer *)pFVar11);
      }
      FMovieSceneRemoveInitialGlobalValueTokenProducer::
      ~FMovieSceneRemoveInitialGlobalValueTokenProducer(&local_f0);
      local_128.SharedReferenceCount.ReferenceController =
           local_118.SharedReferenceCount.ReferenceController;
    }
    else {
      pTVar9 = TSharedFromThis<IMovieSceneBlendingActuator,1>::AsShared
                         ((TSharedFromThis<IMovieSceneBlendingActuator,1> *)&pTVar8->_padding_,
                          &local_128);
      local_170.Object = pTVar9->Object;
      local_170.WeakReferenceCount.ReferenceController =
           (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_170.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_170.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_170.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar10 = FMovieSceneRemoveInitialValueTokenProducer::
                FMovieSceneRemoveInitialValueTokenProducer(&local_108,&local_170);
      pUVar6 = local_1a0.AnimatingObject;
      pFVar13 = (this->Tokens).AllocatorInstance.Data;
      bVar7 = false;
      iVar14 = (this->Tokens).ArrayNum;
      local_1b0 = (UObject *)&local_1b8->PreAnimatedState;
      pFVar1 = pFVar13 + (longlong)iVar14 * 8;
      while( true ) {
        if ((this->Tokens).ArrayNum != iVar14) {
          `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenFloat>_const_*_const,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_1c5);
        }
        if (pFVar13 == pFVar1) break;
        this_00 = &local_1b8->PreAnimatedState;
        FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
                  (&local_b0,this_00,(FMovieSceneEvaluationKey *)(*(longlong *)pFVar13 + 0x10),true)
        ;
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (this_00,pUVar6,local_1a8,(IMovieScenePreAnimatedTokenProducer *)pFVar10);
        bVar7 = true;
        FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_b0);
        pFVar13 = pFVar13 + 8;
      }
      if (!bVar7) {
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  ((FMovieScenePreAnimatedState *)local_1b0,local_1a0.AnimatingObject,local_1a8,
                   (IMovieScenePreAnimatedTokenProducer *)pFVar10);
      }
      FMovieSceneRemoveInitialValueTokenProducer::~FMovieSceneRemoveInitialValueTokenProducer
                (&local_108);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_128.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ComputeAndActuate @ 14a3f33f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBlendableTokenStack<FControlRigTrackTokenTransform>::ComputeAndActuate
          (TBlendableTokenStack<FControlRigTrackTokenTransform> *this,UObject *param_1,
          FMovieSceneBlendingAccumulator *param_2,FMovieSceneBlendingActuatorID param_3,
          FMovieSceneContext *param_4,FPersistentEvaluationData *param_5,IMovieScenePlayer *param_6)

{
  FMovieScenePreAnimatedState *this_00;
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  IMovieScenePlayer *pIVar4;
  FWeakObjectPtr FVar5;
  bool bVar6;
  TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *pTVar7;
  TSharedRef<IMovieSceneBlendingActuator,1> *pTVar8;
  FMovieSceneRemoveInitialValueTokenProducer *pFVar9;
  FMovieSceneRemoveInitialGlobalValueTokenProducer *pFVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  undefined1 auStackY_2f8 [32];
  undefined1 local_2b8;
  FIdentityFunctor local_2b7;
  undefined1 local_2b6;
  undefined1 local_2b5;
  undefined1 local_2b4 [4];
  IMovieScenePlayer *local_2b0;
  int local_2a8;
  FMovieSceneAnimTypeID local_2a0;
  FWeakObjectPtr local_298;
  UObject *local_290;
  FWeakObjectPtr local_288;
  FPersistentEvaluationData *local_280;
  FMovieSceneContext *local_278;
  TWeakPtr<IMovieSceneBlendingActuator,1> local_270;
  TWeakPtr<IMovieSceneBlendingActuator,1> local_260;
  TMovieSceneInitialValueStore<FControlRigTrackTokenTransform> local_250;
  TSharedRef<IMovieSceneBlendingActuator,1> local_228;
  TSharedRef<IMovieSceneBlendingActuator,1> local_218;
  FMovieSceneRemoveInitialValueTokenProducer local_208;
  FMovieSceneRemoveInitialGlobalValueTokenProducer local_1f0;
  FControlRigTrackTokenTransform local_1d8;
  TMaskedBlendable<float,9> local_188;
  FScopedPreAnimatedCaptureSource local_b8;
  FScopedPreAnimatedCaptureSource local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_278 = param_4;
  local_280 = param_5;
  local_2b0 = param_6;
  pTVar7 = FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenTransform>
                     (param_2,param_3);
  if (pTVar7 == (TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *)0x0) {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3831950738951503860>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.inl"
                       ,0xc,"Actuator");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_2a8 = 0;
    local_188.Absolute.Mask = 0;
    local_188.Additive.Mask = 0;
    local_188.Override.Mask = 0;
    local_188.InitialValue.bIsSet = false;
    local_250.Player = param_6;
    local_188.AbsoluteWeights[0] = 0.0;
    local_188.AbsoluteWeights[1] = 0.0;
    local_188.AbsoluteWeights[2] = 0.0;
    local_188.AbsoluteWeights[3] = 0.0;
    local_188.AbsoluteWeights[8] = 0.0;
    local_188.AbsoluteWeights[4] = 0.0;
    local_188.AbsoluteWeights[5] = 0.0;
    local_188.AbsoluteWeights[6] = 0.0;
    local_188.AbsoluteWeights[7] = 0.0;
    local_250.Actuator = pTVar7;
    local_250.Stack = this;
    local_250.AnimatingObject = param_1;
    AlgoImpl::
    IntroSortInternal<TBlendableToken<FControlRigTrackTokenTransform>_const_*,int,FIdentityFunctor,TDereferenceWrapper<TBlendableToken<FControlRigTrackTokenTransform>_const_*,TLess<void>_>_>
              ((TBlendableToken<FControlRigTrackTokenTransform> **)
               (this->Tokens).AllocatorInstance.Data,(this->Tokens).ArrayNum,local_2b7,
               (TLess<void> *)&local_2b7);
    pFVar13 = (this->Tokens).AllocatorInstance.Data;
    iVar14 = (this->Tokens).ArrayNum;
    pFVar12 = pFVar13 + (longlong)iVar14 * 8;
    while( true ) {
      if ((this->Tokens).ArrayNum != iVar14) {
        local_2b8 = 0;
        `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenTransform>_const_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_2b8);
      }
      if (pFVar13 == pFVar12) break;
      plVar2 = *(longlong **)pFVar13;
      if ((*(byte *)(plVar2 + 9) & 1) == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\BlendableToken.h"
                           ,0x90,L"");
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((*(byte *)(plVar2 + 9) & 1) == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsValid",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                               ,0x97,
                               L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar11 = plVar2;
      if ((*(byte *)(plVar2 + 9) & 2) == 0) {
        plVar11 = (longlong *)*plVar2;
      }
      (**(code **)(*plVar11 + 8))
                (plVar11,&local_188,*(undefined4 *)((longlong)plVar2 + 100),(char)plVar2[0xd]);
      pFVar13 = pFVar13 + 8;
    }
    UE::MovieScene::TMaskedBlendable<float,9>::Resolve<FControlRigTrackTokenTransform>
              (&local_188,&local_1d8,&local_250);
    (**(code **)(pTVar7->_padding_ + 0x20))(pTVar7,param_1,&local_1d8,this);
    iVar14 = 0;
    if (param_1 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      local_298.ObjectIndex = 0;
      local_298.ObjectSerialNumber = 0;
      local_290 = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(param_1);
      }
      FWeakObjectPtr::operator=(&local_298,(FObjectPtr)&local_290);
      local_288 = local_298;
      FVar5 = local_288;
      local_288.ObjectSerialNumber = local_298.ObjectSerialNumber;
      local_2a8 = local_298.ObjectIndex;
      iVar14 = local_288.ObjectSerialNumber;
      local_288 = FVar5;
    }
    iVar1 = (pTVar7->InitialValues).ArrayNum;
    pFVar12 = (pTVar7->InitialValues).AllocatorInstance.Data;
    pFVar13 = pFVar12 + (longlong)iVar1 * 0x50;
    while( true ) {
      if ((pTVar7->InitialValues).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TMovieSceneBlendingActuator<FControlRigTrackTokenTransform>::FInitialValue_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_2b6);
      }
      if (pFVar12 == pFVar13) {
        return;
      }
      if ((*(int *)pFVar12 == local_2a8) && (*(int *)(pFVar12 + 4) == iVar14)) break;
      pFVar12 = pFVar12 + 0x50;
    }
    GetInitialValueTypeID();
    FMovieSceneAnimTypeID::Combine
              ((FMovieSceneAnimTypeID)&local_2a0,
               (FMovieSceneAnimTypeID)*(ulong64 *)&pTVar7->ActuatorID);
    if (param_1 == (UObject *)0x0) {
      pTVar8 = TSharedFromThis<IMovieSceneBlendingActuator,1>::AsShared
                         ((TSharedFromThis<IMovieSceneBlendingActuator,1> *)&pTVar7->_padding_,
                          &local_218);
      local_260.Object = pTVar8->Object;
      local_260.WeakReferenceCount.ReferenceController =
           (pTVar8->SharedReferenceCount).ReferenceController;
      if (local_260.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_260.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_260.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar10 = FMovieSceneRemoveInitialGlobalValueTokenProducer::
                FMovieSceneRemoveInitialGlobalValueTokenProducer(&local_1f0,&local_260);
      pIVar4 = local_2b0;
      pFVar13 = (this->Tokens).AllocatorInstance.Data;
      bVar6 = false;
      iVar14 = (this->Tokens).ArrayNum;
      local_290 = (UObject *)&local_2b0->PreAnimatedState;
      pFVar12 = pFVar13 + (longlong)iVar14 * 8;
      while( true ) {
        if ((this->Tokens).ArrayNum != iVar14) {
          `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenTransform>_const_*_const,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_2b4);
        }
        if (pFVar13 == pFVar12) break;
        FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
                  (&local_80,&pIVar4->PreAnimatedState,
                   (FMovieSceneEvaluationKey *)(*(longlong *)pFVar13 + 0x50),true);
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (&pIVar4->PreAnimatedState,local_2a0,
                   (IMovieScenePreAnimatedGlobalTokenProducer *)pFVar10);
        bVar6 = true;
        FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_80);
        pFVar13 = pFVar13 + 8;
      }
      if (!bVar6) {
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  ((FMovieScenePreAnimatedState *)local_290,local_2a0,
                   (IMovieScenePreAnimatedGlobalTokenProducer *)pFVar10);
      }
      FMovieSceneRemoveInitialGlobalValueTokenProducer::
      ~FMovieSceneRemoveInitialGlobalValueTokenProducer(&local_1f0);
      local_228.SharedReferenceCount.ReferenceController =
           local_218.SharedReferenceCount.ReferenceController;
    }
    else {
      pTVar8 = TSharedFromThis<IMovieSceneBlendingActuator,1>::AsShared
                         ((TSharedFromThis<IMovieSceneBlendingActuator,1> *)&pTVar7->_padding_,
                          &local_228);
      local_270.Object = pTVar8->Object;
      local_270.WeakReferenceCount.ReferenceController =
           (pTVar8->SharedReferenceCount).ReferenceController;
      if (local_270.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_270.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_270.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar9 = FMovieSceneRemoveInitialValueTokenProducer::
               FMovieSceneRemoveInitialValueTokenProducer(&local_208,&local_270);
      pFVar13 = (this->Tokens).AllocatorInstance.Data;
      iVar14 = (this->Tokens).ArrayNum;
      bVar6 = false;
      pFVar12 = pFVar13 + (longlong)iVar14 * 8;
      while( true ) {
        if ((this->Tokens).ArrayNum != iVar14) {
          `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenTransform>_const_*_const,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_2b5);
        }
        if (pFVar13 == pFVar12) break;
        this_00 = &local_2b0->PreAnimatedState;
        FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
                  (&local_b8,this_00,(FMovieSceneEvaluationKey *)(*(longlong *)pFVar13 + 0x50),true)
        ;
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (this_00,param_1,local_2a0,(IMovieScenePreAnimatedTokenProducer *)pFVar9);
        bVar6 = true;
        FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_b8);
        pFVar13 = pFVar13 + 8;
      }
      if (!bVar6) {
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (&local_2b0->PreAnimatedState,param_1,local_2a0,
                   (IMovieScenePreAnimatedTokenProducer *)pFVar9);
      }
      FMovieSceneRemoveInitialValueTokenProducer::~FMovieSceneRemoveInitialValueTokenProducer
                (&local_208);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_228.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ComputeAndActuate @ 14a3f38d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBlendableTokenStack<FControlRigTrackTokenVector2D>::ComputeAndActuate
          (TBlendableTokenStack<FControlRigTrackTokenVector2D> *this,UObject *param_1,
          FMovieSceneBlendingAccumulator *param_2,FMovieSceneBlendingActuatorID param_3,
          FMovieSceneContext *param_4,FPersistentEvaluationData *param_5,IMovieScenePlayer *param_6)

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
  TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D> *pTVar9;
  TSharedRef<IMovieSceneBlendingActuator,1> *pTVar10;
  FMovieSceneRemoveInitialValueTokenProducer *pFVar11;
  FMovieSceneRemoveInitialGlobalValueTokenProducer *pFVar12;
  longlong *plVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  undefined1 auStackY_228 [32];
  undefined1 local_1e8;
  FIdentityFunctor local_1e7;
  undefined1 local_1e6;
  undefined1 local_1e5;
  undefined1 local_1e4 [4];
  int local_1e0;
  IMovieScenePlayer *local_1d8;
  UObject *local_1d0;
  FMovieSceneAnimTypeID local_1c8;
  FWeakObjectPtr local_1c0;
  UObject *local_1b8;
  FWeakObjectPtr local_1b0;
  FPersistentEvaluationData *local_1a8;
  FMovieSceneContext *local_1a0;
  TWeakPtr<IMovieSceneBlendingActuator,1> local_198;
  TWeakPtr<IMovieSceneBlendingActuator,1> local_188;
  TMovieSceneInitialValueStore<FControlRigTrackTokenVector2D> local_178;
  FControlRigTrackTokenVector2D local_150;
  TSharedRef<IMovieSceneBlendingActuator,1> local_140;
  TSharedRef<IMovieSceneBlendingActuator,1> local_130;
  FMovieSceneRemoveInitialValueTokenProducer local_120;
  FMovieSceneRemoveInitialGlobalValueTokenProducer local_108;
  TMaskedBlendable<float,2> local_f0;
  FScopedPreAnimatedCaptureSource local_b0;
  FScopedPreAnimatedCaptureSource local_78;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_228;
  local_1a0 = param_4;
  local_1a8 = param_5;
  local_1d8 = param_6;
  local_1b8 = param_1;
  pTVar9 = FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenVector2D>
                     (param_2,param_3);
  if (pTVar9 == (TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D> *)0x0) {
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
    local_1e0 = 0;
    local_f0.Absolute.Mask = 0;
    local_f0.Additive.Mask = 0;
    local_f0.Override.Mask = 0;
    local_f0.InitialValue.bIsSet = false;
    local_178.Player = param_6;
    local_f0.AbsoluteWeights[0] = 0.0;
    local_f0.AbsoluteWeights[1] = 0.0;
    local_178.Actuator = pTVar9;
    local_178.Stack = this;
    local_178.AnimatingObject = param_1;
    AlgoImpl::
    IntroSortInternal<TBlendableToken<FControlRigTrackTokenVector2D>_const_*,int,FIdentityFunctor,TDereferenceWrapper<TBlendableToken<FControlRigTrackTokenVector2D>_const_*,TLess<void>_>_>
              ((TBlendableToken<FControlRigTrackTokenVector2D> **)
               (this->Tokens).AllocatorInstance.Data,(this->Tokens).ArrayNum,local_1e7,
               (TLess<void> *)&local_1e7);
    pFVar14 = (this->Tokens).AllocatorInstance.Data;
    iVar15 = (this->Tokens).ArrayNum;
    pFVar1 = pFVar14 + (longlong)iVar15 * 8;
    while( true ) {
      if ((this->Tokens).ArrayNum != iVar15) {
        local_1e8 = 0;
        `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenVector2D>_const_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_1e8);
      }
      if (pFVar14 == pFVar1) break;
      plVar3 = *(longlong **)pFVar14;
      if ((*(byte *)(plVar3 + 2) & 1) == 0) {
        bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\BlendableToken.h"
                           ,0x90,L"");
        if (bVar8) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (((*(byte *)(plVar3 + 2) & 1) == 0) &&
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
      plVar13 = plVar3;
      if ((*(byte *)(plVar3 + 2) & 2) == 0) {
        plVar13 = (longlong *)*plVar3;
      }
      (**(code **)(*plVar13 + 8))
                (plVar13,&local_f0,*(undefined4 *)((longlong)plVar3 + 0x2c),(char)plVar3[6]);
      pFVar14 = pFVar14 + 8;
    }
    UE::MovieScene::TMaskedBlendable<float,2>::Resolve<FControlRigTrackTokenVector2D>
              (&local_f0,&local_150,&local_178);
    pUVar6 = local_1b8;
    (**(code **)(pTVar9->_padding_ + 0x20))(pTVar9,local_1b8,&local_150,this);
    iVar15 = 0;
    if (pUVar6 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      local_1c0.ObjectIndex = 0;
      local_1c0.ObjectSerialNumber = 0;
      local_1d0 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar6);
      }
      FWeakObjectPtr::operator=(&local_1c0,(FObjectPtr)&local_1d0);
      local_1b0 = local_1c0;
      FVar7 = local_1b0;
      local_1b0.ObjectSerialNumber = local_1c0.ObjectSerialNumber;
      local_1e0 = local_1c0.ObjectIndex;
      iVar15 = local_1b0.ObjectSerialNumber;
      local_1b0 = FVar7;
    }
    iVar2 = (pTVar9->InitialValues).ArrayNum;
    pFVar14 = (pTVar9->InitialValues).AllocatorInstance.Data;
    pFVar1 = pFVar14 + (longlong)iVar2 * 0x18;
    while( true ) {
      if ((pTVar9->InitialValues).ArrayNum != iVar2) {
        `TCheckedPointerIterator<TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D>::FInitialValue_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_1e6);
      }
      if (pFVar14 == pFVar1) {
        return;
      }
      if ((*(int *)pFVar14 == local_1e0) && (*(int *)(pFVar14 + 4) == iVar15)) break;
      pFVar14 = pFVar14 + 0x18;
    }
    GetInitialValueTypeID();
    FMovieSceneAnimTypeID::Combine
              ((FMovieSceneAnimTypeID)&local_1c8,
               (FMovieSceneAnimTypeID)*(ulong64 *)&pTVar9->ActuatorID);
    if (pUVar6 == (UObject *)0x0) {
      pTVar10 = TSharedFromThis<IMovieSceneBlendingActuator,1>::AsShared
                          ((TSharedFromThis<IMovieSceneBlendingActuator,1> *)&pTVar9->_padding_,
                           &local_130);
      local_188.Object = pTVar10->Object;
      local_188.WeakReferenceCount.ReferenceController =
           (pTVar10->SharedReferenceCount).ReferenceController;
      if (local_188.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_188.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_188.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar12 = FMovieSceneRemoveInitialGlobalValueTokenProducer::
                FMovieSceneRemoveInitialGlobalValueTokenProducer(&local_108,&local_188);
      pIVar5 = local_1d8;
      pFVar14 = (this->Tokens).AllocatorInstance.Data;
      bVar8 = false;
      iVar15 = (this->Tokens).ArrayNum;
      local_1d0 = (UObject *)&local_1d8->PreAnimatedState;
      pFVar1 = pFVar14 + (longlong)iVar15 * 8;
      while( true ) {
        if ((this->Tokens).ArrayNum != iVar15) {
          `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenVector2D>_const_*_const,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_1e4);
        }
        if (pFVar14 == pFVar1) break;
        FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
                  (&local_78,&pIVar5->PreAnimatedState,
                   (FMovieSceneEvaluationKey *)(*(longlong *)pFVar14 + 0x18),true);
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (&pIVar5->PreAnimatedState,local_1c8,
                   (IMovieScenePreAnimatedGlobalTokenProducer *)pFVar12);
        bVar8 = true;
        FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_78);
        pFVar14 = pFVar14 + 8;
      }
      if (!bVar8) {
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  ((FMovieScenePreAnimatedState *)local_1d0,local_1c8,
                   (IMovieScenePreAnimatedGlobalTokenProducer *)pFVar12);
      }
      FMovieSceneRemoveInitialGlobalValueTokenProducer::
      ~FMovieSceneRemoveInitialGlobalValueTokenProducer(&local_108);
      local_140.SharedReferenceCount.ReferenceController =
           local_130.SharedReferenceCount.ReferenceController;
    }
    else {
      pTVar10 = TSharedFromThis<IMovieSceneBlendingActuator,1>::AsShared
                          ((TSharedFromThis<IMovieSceneBlendingActuator,1> *)&pTVar9->_padding_,
                           &local_140);
      local_198.Object = pTVar10->Object;
      local_198.WeakReferenceCount.ReferenceController =
           (pTVar10->SharedReferenceCount).ReferenceController;
      if (local_198.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_198.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_198.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar11 = FMovieSceneRemoveInitialValueTokenProducer::
                FMovieSceneRemoveInitialValueTokenProducer(&local_120,&local_198);
      pUVar6 = local_1b8;
      pFVar14 = (this->Tokens).AllocatorInstance.Data;
      bVar8 = false;
      iVar15 = (this->Tokens).ArrayNum;
      local_1d0 = (UObject *)&local_1d8->PreAnimatedState;
      pFVar1 = pFVar14 + (longlong)iVar15 * 8;
      while( true ) {
        if ((this->Tokens).ArrayNum != iVar15) {
          `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenVector2D>_const_*_const,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_1e5);
        }
        if (pFVar14 == pFVar1) break;
        this_00 = &local_1d8->PreAnimatedState;
        FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
                  (&local_b0,this_00,(FMovieSceneEvaluationKey *)(*(longlong *)pFVar14 + 0x18),true)
        ;
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (this_00,pUVar6,local_1c8,(IMovieScenePreAnimatedTokenProducer *)pFVar11);
        bVar8 = true;
        FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_b0);
        pFVar14 = pFVar14 + 8;
      }
      if (!bVar8) {
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  ((FMovieScenePreAnimatedState *)local_1d0,local_1b8,local_1c8,
                   (IMovieScenePreAnimatedTokenProducer *)pFVar11);
      }
      FMovieSceneRemoveInitialValueTokenProducer::~FMovieSceneRemoveInitialValueTokenProducer
                (&local_120);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_140.SharedReferenceCount.ReferenceController);
  }
  return;
}

// ComputeAndActuate @ 14a3f3d90

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBlendableTokenStack<FControlRigTrackTokenVector>::ComputeAndActuate
          (TBlendableTokenStack<FControlRigTrackTokenVector> *this,UObject *param_1,
          FMovieSceneBlendingAccumulator *param_2,FMovieSceneBlendingActuatorID param_3,
          FMovieSceneContext *param_4,FPersistentEvaluationData *param_5,IMovieScenePlayer *param_6)

{
  FMovieScenePreAnimatedState *this_00;
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  IMovieScenePlayer *pIVar4;
  UObject *pUVar5;
  FWeakObjectPtr FVar6;
  bool bVar7;
  TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *pTVar8;
  TSharedRef<IMovieSceneBlendingActuator,1> *pTVar9;
  FMovieSceneRemoveInitialValueTokenProducer *pFVar10;
  FMovieSceneRemoveInitialGlobalValueTokenProducer *pFVar11;
  longlong *plVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  undefined1 auStackY_248 [32];
  undefined1 local_208;
  FIdentityFunctor local_207;
  undefined1 local_206;
  undefined1 local_205;
  undefined1 local_204 [4];
  int local_200;
  IMovieScenePlayer *local_1f8;
  UObject *local_1f0;
  FMovieSceneAnimTypeID local_1e8;
  FWeakObjectPtr local_1e0;
  UObject *local_1d8;
  FWeakObjectPtr local_1d0;
  FPersistentEvaluationData *local_1c8;
  FMovieSceneContext *local_1c0;
  TWeakPtr<IMovieSceneBlendingActuator,1> local_1b8;
  TWeakPtr<IMovieSceneBlendingActuator,1> local_1a8;
  TMovieSceneInitialValueStore<FControlRigTrackTokenVector> local_198;
  TSharedRef<IMovieSceneBlendingActuator,1> local_170;
  TSharedRef<IMovieSceneBlendingActuator,1> local_160;
  FControlRigTrackTokenVector local_150;
  FMovieSceneRemoveInitialValueTokenProducer local_138;
  FMovieSceneRemoveInitialGlobalValueTokenProducer local_120;
  TMaskedBlendable<float,3> local_108;
  FScopedPreAnimatedCaptureSource local_b8;
  FScopedPreAnimatedCaptureSource local_80;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_248;
  local_1c0 = param_4;
  local_1c8 = param_5;
  local_1f8 = param_6;
  local_1d8 = param_1;
  pTVar8 = FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenVector>
                     (param_2,param_3);
  if (pTVar8 == (TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *)0x0) {
    bVar7 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3831950738951503860>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.inl"
                       ,0xc,"Actuator");
    if (bVar7) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    local_200 = 0;
    local_108.Absolute.Mask = 0;
    local_108.Additive.Mask = 0;
    local_108.Override.Mask = 0;
    local_108.InitialValue.bIsSet = false;
    local_198.Player = param_6;
    local_108.AbsoluteWeights[0] = 0.0;
    local_108.AbsoluteWeights[1] = 0.0;
    local_108.AbsoluteWeights[2] = 0.0;
    local_198.Actuator = pTVar8;
    local_198.Stack = this;
    local_198.AnimatingObject = param_1;
    AlgoImpl::
    IntroSortInternal<TBlendableToken<FControlRigTrackTokenVector>_const_*,int,FIdentityFunctor,TDereferenceWrapper<TBlendableToken<FControlRigTrackTokenVector>_const_*,TLess<void>_>_>
              ((TBlendableToken<FControlRigTrackTokenVector> **)
               (this->Tokens).AllocatorInstance.Data,(this->Tokens).ArrayNum,local_207,
               (TLess<void> *)&local_207);
    pFVar14 = (this->Tokens).AllocatorInstance.Data;
    iVar15 = (this->Tokens).ArrayNum;
    pFVar13 = pFVar14 + (longlong)iVar15 * 8;
    while( true ) {
      if ((this->Tokens).ArrayNum != iVar15) {
        local_208 = 0;
        `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenVector>_const_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_208);
      }
      if (pFVar14 == pFVar13) break;
      plVar2 = *(longlong **)pFVar14;
      if ((*(byte *)(plVar2 + 3) & 1) == 0) {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\BlendableToken.h"
                           ,0x90,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        if (((*(byte *)(plVar2 + 3) & 1) == 0) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("bIsValid",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                               ,0x97,
                               L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                              ), bVar7)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      plVar12 = plVar2;
      if ((*(byte *)(plVar2 + 3) & 2) == 0) {
        plVar12 = (longlong *)*plVar2;
      }
      (**(code **)(*plVar12 + 8))
                (plVar12,&local_108,*(undefined4 *)((longlong)plVar2 + 0x34),(char)plVar2[7]);
      pFVar14 = pFVar14 + 8;
    }
    UE::MovieScene::TMaskedBlendable<float,3>::Resolve<FControlRigTrackTokenVector>
              (&local_108,&local_150,&local_198);
    pUVar5 = local_1d8;
    (**(code **)(pTVar8->_padding_ + 0x20))(pTVar8,local_1d8,&local_150,this);
    iVar15 = 0;
    if (pUVar5 != (UObject *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_1e0.ObjectIndex = 0;
      local_1e0.ObjectSerialNumber = 0;
      local_1f0 = pUVar5;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_1e0,(FObjectPtr)&local_1f0);
      local_1d0 = local_1e0;
      FVar6 = local_1d0;
      local_1d0.ObjectSerialNumber = local_1e0.ObjectSerialNumber;
      local_200 = local_1e0.ObjectIndex;
      iVar15 = local_1d0.ObjectSerialNumber;
      local_1d0 = FVar6;
    }
    iVar1 = (pTVar8->InitialValues).ArrayNum;
    pFVar13 = (pTVar8->InitialValues).AllocatorInstance.Data;
    pFVar14 = pFVar13 + (longlong)iVar1 * 0x20;
    while( true ) {
      if ((pTVar8->InitialValues).ArrayNum != iVar1) {
        `TCheckedPointerIterator<TMovieSceneBlendingActuator<FControlRigTrackTokenVector>::FInitialValue_const_,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(&local_206);
      }
      if (pFVar13 == pFVar14) {
        return;
      }
      if ((*(int *)pFVar13 == local_200) && (*(int *)(pFVar13 + 4) == iVar15)) break;
      pFVar13 = pFVar13 + 0x20;
    }
    GetInitialValueTypeID();
    FMovieSceneAnimTypeID::Combine
              ((FMovieSceneAnimTypeID)&local_1e8,
               (FMovieSceneAnimTypeID)*(ulong64 *)&pTVar8->ActuatorID);
    if (pUVar5 == (UObject *)0x0) {
      pTVar9 = TSharedFromThis<IMovieSceneBlendingActuator,1>::AsShared
                         ((TSharedFromThis<IMovieSceneBlendingActuator,1> *)&pTVar8->_padding_,
                          &local_160);
      local_1a8.Object = pTVar9->Object;
      local_1a8.WeakReferenceCount.ReferenceController =
           (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_1a8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_1a8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar11 = FMovieSceneRemoveInitialGlobalValueTokenProducer::
                FMovieSceneRemoveInitialGlobalValueTokenProducer(&local_120,&local_1a8);
      pIVar4 = local_1f8;
      pFVar14 = (this->Tokens).AllocatorInstance.Data;
      bVar7 = false;
      iVar15 = (this->Tokens).ArrayNum;
      local_1f0 = (UObject *)&local_1f8->PreAnimatedState;
      pFVar13 = pFVar14 + (longlong)iVar15 * 8;
      while( true ) {
        if ((this->Tokens).ArrayNum != iVar15) {
          `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenVector>_const_*_const,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(local_204);
        }
        if (pFVar14 == pFVar13) break;
        FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
                  (&local_80,&pIVar4->PreAnimatedState,
                   (FMovieSceneEvaluationKey *)(*(longlong *)pFVar14 + 0x20),true);
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (&pIVar4->PreAnimatedState,local_1e8,
                   (IMovieScenePreAnimatedGlobalTokenProducer *)pFVar11);
        bVar7 = true;
        FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_80);
        pFVar14 = pFVar14 + 8;
      }
      if (!bVar7) {
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  ((FMovieScenePreAnimatedState *)local_1f0,local_1e8,
                   (IMovieScenePreAnimatedGlobalTokenProducer *)pFVar11);
      }
      FMovieSceneRemoveInitialGlobalValueTokenProducer::
      ~FMovieSceneRemoveInitialGlobalValueTokenProducer(&local_120);
      local_170.SharedReferenceCount.ReferenceController =
           local_160.SharedReferenceCount.ReferenceController;
    }
    else {
      pTVar9 = TSharedFromThis<IMovieSceneBlendingActuator,1>::AsShared
                         ((TSharedFromThis<IMovieSceneBlendingActuator,1> *)&pTVar8->_padding_,
                          &local_170);
      local_1b8.Object = pTVar9->Object;
      local_1b8.WeakReferenceCount.ReferenceController =
           (pTVar9->SharedReferenceCount).ReferenceController;
      if (local_1b8.WeakReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_1b8.WeakReferenceCount.ReferenceController)->WeakReferenceCount =
             (atomic<int>)
             ((int)(local_1b8.WeakReferenceCount.ReferenceController)->WeakReferenceCount + 1);
        UNLOCK();
      }
      pFVar10 = FMovieSceneRemoveInitialValueTokenProducer::
                FMovieSceneRemoveInitialValueTokenProducer(&local_138,&local_1b8);
      pUVar5 = local_1d8;
      pFVar14 = (this->Tokens).AllocatorInstance.Data;
      bVar7 = false;
      iVar15 = (this->Tokens).ArrayNum;
      local_1f0 = (UObject *)&local_1f8->PreAnimatedState;
      pFVar13 = pFVar14 + (longlong)iVar15 * 8;
      while( true ) {
        if ((this->Tokens).ArrayNum != iVar15) {
          `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenVector>_const_*_const,int,0>
          ::operator!='::__l2::<lambda_1>::operator()(&local_205);
        }
        if (pFVar14 == pFVar13) break;
        this_00 = &local_1f8->PreAnimatedState;
        FScopedPreAnimatedCaptureSource::FScopedPreAnimatedCaptureSource
                  (&local_b8,this_00,(FMovieSceneEvaluationKey *)(*(longlong *)pFVar14 + 0x20),true)
        ;
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  (this_00,pUVar5,local_1e8,(IMovieScenePreAnimatedTokenProducer *)pFVar10);
        bVar7 = true;
        FScopedPreAnimatedCaptureSource::~FScopedPreAnimatedCaptureSource(&local_b8);
        pFVar14 = pFVar14 + 8;
      }
      if (!bVar7) {
        FMovieScenePreAnimatedState::SavePreAnimatedState
                  ((FMovieScenePreAnimatedState *)local_1f0,local_1d8,local_1e8,
                   (IMovieScenePreAnimatedTokenProducer *)pFVar10);
      }
      FMovieSceneRemoveInitialValueTokenProducer::~FMovieSceneRemoveInitialValueTokenProducer
                (&local_138);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_170.SharedReferenceCount.ReferenceController);
  }
  return;
}

// Interrogate @ 14a4242f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBlendableTokenStack<FControlRigTrackTokenFloat>::Interrogate
          (TBlendableTokenStack<FControlRigTrackTokenFloat> *this,UObject *param_1,
          FMovieSceneInterrogationData *param_2,FMovieSceneBlendingAccumulator *param_3,
          FMovieSceneBlendingActuatorID param_4,FMovieSceneContext *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *pTVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_c8 [32];
  undefined1 local_98 [4];
  undefined1 local_94 [36];
  TMaskedBlendable<float,1> local_70;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pTVar6 = FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenFloat>(param_3,param_4)
  ;
  if (pTVar6 == (TMovieSceneBlendingActuator<FControlRigTrackTokenFloat> *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3831950738951503824>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.inl"
                       ,0x30,"Actuator");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar2 = (this->Tokens).ArrayNum;
    pFVar8 = (this->Tokens).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    local_94._28_8_ = 0;
    local_70.Absolute.Mask = 0;
    local_70.AbsoluteWeights[0] = 0.0;
    local_70.Additive.Mask = 0;
    local_70.Override.Mask = 0;
    local_70.InitialValue.bIsSet = false;
    local_94._4_8_ = pTVar6;
    local_94._12_8_ = this;
    local_94._20_8_ = param_1;
    while( true ) {
      if ((this->Tokens).ArrayNum != iVar2) {
        local_98[0] = 0;
        `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenFloat>_const_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_98);
      }
      if (pFVar8 == pFVar1) break;
      plVar3 = *(longlong **)pFVar8;
      if ((*(byte *)(plVar3 + 1) & 1) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\BlendableToken.h"
                           ,0x90,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(byte *)(plVar3 + 1) & 1) == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      plVar7 = plVar3;
      if ((*(byte *)(plVar3 + 1) & 2) == 0) {
        plVar7 = (longlong *)*plVar3;
      }
      (**(code **)(*plVar7 + 8))
                (plVar7,&local_70,*(undefined4 *)((longlong)plVar3 + 0x24),(char)plVar3[5]);
      pFVar8 = pFVar8 + 8;
    }
    UE::MovieScene::TMaskedBlendable<float,1>::Resolve<FControlRigTrackTokenFloat>
              (&local_70,(TMovieSceneInitialValueStore<FControlRigTrackTokenFloat> *)local_94);
    (**(code **)(pTVar6->_padding_ + 0x18))(pTVar6,param_2,local_94,this);
  }
  return;
}

// Interrogate @ 14a4244f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBlendableTokenStack<FControlRigTrackTokenTransform>::Interrogate
          (TBlendableTokenStack<FControlRigTrackTokenTransform> *this,UObject *param_1,
          FMovieSceneInterrogationData *param_2,FMovieSceneBlendingAccumulator *param_3,
          FMovieSceneBlendingActuatorID param_4,FMovieSceneContext *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *pTVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_1c8 [32];
  undefined1 local_198 [8];
  TMovieSceneInitialValueStore<FControlRigTrackTokenTransform> local_190;
  FControlRigTrackTokenTransform local_168;
  TMaskedBlendable<float,9> local_118;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_1c8;
  pTVar6 = FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenTransform>
                     (param_3,param_4);
  if (pTVar6 == (TMovieSceneBlendingActuator<FControlRigTrackTokenTransform> *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3831950738951503824>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.inl"
                       ,0x30,"Actuator");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar2 = (this->Tokens).ArrayNum;
    pFVar8 = (this->Tokens).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    local_190.Player = (IMovieScenePlayer *)0x0;
    local_118.Absolute.Mask = 0;
    local_118.Additive.Mask = 0;
    local_118.Override.Mask = 0;
    local_118.InitialValue.bIsSet = false;
    local_118.AbsoluteWeights[0] = 0.0;
    local_118.AbsoluteWeights[1] = 0.0;
    local_118.AbsoluteWeights[2] = 0.0;
    local_118.AbsoluteWeights[3] = 0.0;
    local_118.AbsoluteWeights[8] = 0.0;
    local_118.AbsoluteWeights[4] = 0.0;
    local_118.AbsoluteWeights[5] = 0.0;
    local_118.AbsoluteWeights[6] = 0.0;
    local_118.AbsoluteWeights[7] = 0.0;
    local_190.Actuator = pTVar6;
    local_190.Stack = this;
    local_190.AnimatingObject = param_1;
    while( true ) {
      if ((this->Tokens).ArrayNum != iVar2) {
        local_198[0] = 0;
        `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenTransform>_const_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_198);
      }
      if (pFVar8 == pFVar1) break;
      plVar3 = *(longlong **)pFVar8;
      if ((*(byte *)(plVar3 + 9) & 1) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\BlendableToken.h"
                           ,0x90,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(byte *)(plVar3 + 9) & 1) == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      plVar7 = plVar3;
      if ((*(byte *)(plVar3 + 9) & 2) == 0) {
        plVar7 = (longlong *)*plVar3;
      }
      (**(code **)(*plVar7 + 8))
                (plVar7,&local_118,*(undefined4 *)((longlong)plVar3 + 100),(char)plVar3[0xd]);
      pFVar8 = pFVar8 + 8;
    }
    UE::MovieScene::TMaskedBlendable<float,9>::Resolve<FControlRigTrackTokenTransform>
              (&local_118,&local_168,&local_190);
    (**(code **)(pTVar6->_padding_ + 0x18))(pTVar6,param_2,&local_168,this);
  }
  return;
}

// Interrogate @ 14a424710

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBlendableTokenStack<FControlRigTrackTokenVector2D>::Interrogate
          (TBlendableTokenStack<FControlRigTrackTokenVector2D> *this,UObject *param_1,
          FMovieSceneInterrogationData *param_2,FMovieSceneBlendingAccumulator *param_3,
          FMovieSceneBlendingActuatorID param_4,FMovieSceneContext *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D> *pTVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_e8 [32];
  undefined1 local_b8 [8];
  TMovieSceneInitialValueStore<FControlRigTrackTokenVector2D> local_b0;
  FControlRigTrackTokenVector2D local_90;
  TMaskedBlendable<float,2> local_80;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  pTVar6 = FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenVector2D>
                     (param_3,param_4);
  if (pTVar6 == (TMovieSceneBlendingActuator<FControlRigTrackTokenVector2D> *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3831950738951503824>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.inl"
                       ,0x30,"Actuator");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar2 = (this->Tokens).ArrayNum;
    pFVar8 = (this->Tokens).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    local_b0.Player = (IMovieScenePlayer *)0x0;
    local_80.Absolute.Mask = 0;
    local_80.Additive.Mask = 0;
    local_80.Override.Mask = 0;
    local_80.InitialValue.bIsSet = false;
    local_80.AbsoluteWeights[0] = 0.0;
    local_80.AbsoluteWeights[1] = 0.0;
    local_b0.Actuator = pTVar6;
    local_b0.Stack = this;
    local_b0.AnimatingObject = param_1;
    while( true ) {
      if ((this->Tokens).ArrayNum != iVar2) {
        local_b8[0] = 0;
        `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenVector2D>_const_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_b8);
      }
      if (pFVar8 == pFVar1) break;
      plVar3 = *(longlong **)pFVar8;
      if ((*(byte *)(plVar3 + 2) & 1) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\BlendableToken.h"
                           ,0x90,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(byte *)(plVar3 + 2) & 1) == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      plVar7 = plVar3;
      if ((*(byte *)(plVar3 + 2) & 2) == 0) {
        plVar7 = (longlong *)*plVar3;
      }
      (**(code **)(*plVar7 + 8))
                (plVar7,&local_80,*(undefined4 *)((longlong)plVar3 + 0x2c),(char)plVar3[6]);
      pFVar8 = pFVar8 + 8;
    }
    UE::MovieScene::TMaskedBlendable<float,2>::Resolve<FControlRigTrackTokenVector2D>
              (&local_80,&local_90,&local_b0);
    (**(code **)(pTVar6->_padding_ + 0x18))(pTVar6,param_2,&local_90,this);
  }
  return;
}

// Interrogate @ 14a424920

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
TBlendableTokenStack<FControlRigTrackTokenVector>::Interrogate
          (TBlendableTokenStack<FControlRigTrackTokenVector> *this,UObject *param_1,
          FMovieSceneInterrogationData *param_2,FMovieSceneBlendingAccumulator *param_3,
          FMovieSceneBlendingActuatorID param_4,FMovieSceneContext *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *pTVar6;
  longlong *plVar7;
  FScriptContainerElement *pFVar8;
  undefined1 auStackY_108 [32];
  undefined1 local_d8 [8];
  TMovieSceneInitialValueStore<FControlRigTrackTokenVector> local_d0;
  FControlRigTrackTokenVector local_b0;
  TMaskedBlendable<float,3> local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_108;
  pTVar6 = FMovieSceneBlendingAccumulator::FindActuator<FControlRigTrackTokenVector>
                     (param_3,param_4);
  if (pTVar6 == (TMovieSceneBlendingActuator<FControlRigTrackTokenVector> *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3831950738951503824>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\MovieSceneBlendingAccumulator.inl"
                       ,0x30,"Actuator");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  else {
    iVar2 = (this->Tokens).ArrayNum;
    pFVar8 = (this->Tokens).AllocatorInstance.Data;
    pFVar1 = pFVar8 + (longlong)iVar2 * 8;
    local_d0.Player = (IMovieScenePlayer *)0x0;
    local_98.Absolute.Mask = 0;
    local_98.Additive.Mask = 0;
    local_98.Override.Mask = 0;
    local_98.InitialValue.bIsSet = false;
    local_98.AbsoluteWeights[0] = 0.0;
    local_98.AbsoluteWeights[1] = 0.0;
    local_98.AbsoluteWeights[2] = 0.0;
    local_d0.Actuator = pTVar6;
    local_d0.Stack = this;
    local_d0.AnimatingObject = param_1;
    while( true ) {
      if ((this->Tokens).ArrayNum != iVar2) {
        local_d8[0] = 0;
        `TCheckedPointerIterator<TBlendableToken<FControlRigTrackTokenVector>_const_*,int,0>::
        operator!='::__l2::<lambda_1>::operator()(local_d8);
      }
      if (pFVar8 == pFVar1) break;
      plVar3 = *(longlong **)pFVar8;
      if ((*(byte *)(plVar3 + 3) & 1) == 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("Value.IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MovieScene\\Public\\Evaluation\\Blending\\BlendableToken.h"
                           ,0x90,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if ((*(byte *)(plVar3 + 3) & 1) == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\InlineValue.h"
                             ,0x97,
                             L"It is an error to call GetValue() on an invalid TInlineValue. Please either check IsValid() or use Get(DefaultValue) instead."
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
      }
      plVar7 = plVar3;
      if ((*(byte *)(plVar3 + 3) & 2) == 0) {
        plVar7 = (longlong *)*plVar3;
      }
      (**(code **)(*plVar7 + 8))
                (plVar7,&local_98,*(undefined4 *)((longlong)plVar3 + 0x34),(char)plVar3[7]);
      pFVar8 = pFVar8 + 8;
    }
    UE::MovieScene::TMaskedBlendable<float,3>::Resolve<FControlRigTrackTokenVector>
              (&local_98,&local_b0,&local_d0);
    (**(code **)(pTVar6->_padding_ + 0x18))(pTVar6,param_2,&local_b0,this);
  }
  return;
}

