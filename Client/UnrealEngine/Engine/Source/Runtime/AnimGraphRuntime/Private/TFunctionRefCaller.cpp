// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AnimGraphRuntime
// Functions: 72

// Call @ 14641e220

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnimationBaseContext::GetMessageChecked<UE::Anim::FAnimSyncGroupScope>'::__l2::<lambda_1>,void,UE::Anim::FAnimSyncGroupScope_&>
::Call(void *param_1,FAnimSyncGroupScope *param_2)

{
  **(undefined8 **)param_1 = param_2;
  return;
}

// Call @ 14641e230

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::Anim::FAnimInertializationSyncScope>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
::Call(void *param_1,IGraphMessage *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014641e23a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1]);
  return;
}

// Call @ 14641e250

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::Anim::FAnimSyncGroupScope>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
::Call(void *param_1,IGraphMessage *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014641e25a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1]);
  return;
}

// Call @ 14641e270

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UE::Anim::FMessageStack::TopMessage<UE::Anim::IInertializationRequester>'::__l2::<lambda_1>,void,UE::Anim::IGraphMessage_&>
::Call(void *param_1,IGraphMessage *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014641e27a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)param_1)((*(undefined8 **)param_1)[1]);
  return;
}

// Call @ 14641e290

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequenceEvaluatorLibrary::AdvanceTime'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
::Call(void *param_1,FAnimNode_SequenceEvaluator *param_2)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  char cVar4;
  FAnimationUpdateContext *pFVar5;
  FStaticBasicLogRecord *pFVar6;
  float fVar7;
  float afStackX_8 [2];
  
  pFVar5 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)param_1);
  if (pFVar5 == (FAnimationUpdateContext *)0x0) {
    if ((byte)LogSequenceEvaluatorLibrary._0_1_ < 3) {
      return;
    }
    pFVar6 = &::LOG_Static;
  }
  else {
    afStackX_8[0] = (float)(**(code **)(*(longlong *)param_2 + 0x178))(param_2);
    fVar7 = (float)(**(code **)(*(longlong *)param_2 + 0xb8))(param_2);
    fVar1 = pFVar5->DeltaTime;
    fVar2 = *(float *)((longlong)param_1 + 8);
    bVar3 = (bool)(**(code **)(*(longlong *)param_2 + 0xd0))(param_2);
    FAnimationRuntime::AdvanceTime(bVar3,fVar1 * fVar2,afStackX_8,fVar7);
    cVar4 = (**(code **)(*(longlong *)param_2 + 0x158))(param_2,afStackX_8[0]);
    if (cVar4 != '\0') {
      return;
    }
    if ((byte)LogSequenceEvaluatorLibrary._0_1_ < 3) {
      return;
    }
    pFVar6 = &::LOG_Static;
  }
  Logging::Private::BasicLog<3>(pFVar6,(FLogCategoryBase *)&LogSequenceEvaluatorLibrary);
  return;
}

// Call @ 14641e2a0

FName __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnimNode_AnimDynamics::FindChainBoneNames'::__l2::<lambda_1>,FName,FName>::Call
          (void *param_1,FName *param_2)

{
  `FAnimNode_AnimDynamics::FindChainBoneNames'::__l2::<lambda_1>::operator()(param_2,(FName)param_1)
  ;
  return (FName)param_1;
}

// Call @ 14641e2d0

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FMultiBlendData>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>::
Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x430);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    memset(pFVar2 + 1,0,0x428);
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFMultiBlendData____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FMultiBlendData__6B_;
    pFVar2[0x1a] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x1b) = 0;
    *(undefined4 *)&pFVar2[0x1b].field_0x4 = 8;
    pFVar2[0x20] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x21) = 0;
    *(undefined4 *)&pFVar2[0x21].field_0x4 = 8;
    pFVar2[0x42] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x43) = 0;
    *(undefined4 *)&pFVar2[0x43].field_0x4 = 8;
    pFVar2[0x84] = (FTlsAutoCleanup)0x0;
    *(undefined4 *)(pFVar2 + 0x85) = 0;
    *(undefined4 *)&pFVar2[0x85].field_0x4 = 8;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 14641e2e0

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FSimBodiesScratch>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>::
Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFSimBodiesScratch____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FSimBodiesScratch__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 14641e2f0

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FSplineIKScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x40);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_UFSplineIKScratchArea____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FSplineIKScratchArea__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    pFVar2[4] = (FTlsAutoCleanup)0x0;
    pFVar2[5] = (FTlsAutoCleanup)0x0;
    pFVar2[6] = (FTlsAutoCleanup)0x0;
    pFVar2[7] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 14641e300

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FExternalCurveScratchArea>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFExternalCurveScratchArea____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FExternalCurveScratchArea__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 14641e310

FTlsAutoCleanup * __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`TThreadSingleton<FProfilingTimerPerThread>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
::Call(void *param_1)

{
  DWORD DVar1;
  FTlsAutoCleanup *pFVar2;
  
  pFVar2 = ::operator_new(0x20);
  if (pFVar2 != (FTlsAutoCleanup *)0x0) {
    pFVar2[1] = (FTlsAutoCleanup)0x0;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    *pFVar2 = (FTlsAutoCleanup)&___7__TThreadSingleton_VFProfilingTimerPerThread____6B_;
    DVar1 = GetCurrentThreadId();
    *(DWORD *)(pFVar2 + 1) = DVar1;
    *pFVar2 = (FTlsAutoCleanup)&___7FProfilingTimerPerThread__6B_;
    pFVar2[2] = (FTlsAutoCleanup)0x0;
    pFVar2[3] = (FTlsAutoCleanup)0x0;
    return pFVar2;
  }
  return (FTlsAutoCleanup *)0x0;
}

// Call @ 14641e320

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequenceEvaluatorLibrary::GetAccumulatedTime'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
::Call(void *param_1,FAnimNode_SequenceEvaluator *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)param_1;
  uVar2 = (**(code **)(*(longlong *)param_2 + 0xa8))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641e350

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequencePlayerLibrary::GetAccumulatedTime'::__l2::<lambda_1>,void,FAnimNode_SequencePlayer_&>
::Call(void *param_1,FAnimNode_SequencePlayer *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)param_1;
  uVar2 = (**(code **)(param_2->_padding_ + 0xa8))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641e380

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModifyCurveAnimLibrary::GetAlpha'::__l2::<lambda_1>,void,FAnimNode_ModifyCurve_&>
::Call(void *param_1,FAnimNode_ModifyCurve *param_2)

{
  **(float **)param_1 = param_2->Alpha;
  return;
}

// Call @ 14641e3a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USkeletalControlLibrary::GetAlpha'::__l2::<lambda_1>,void,FAnimNode_SkeletalControlBase_&>
::Call(void *param_1,FAnimNode_SkeletalControlBase *param_2)

{
  **(float **)param_1 = param_2->ActualAlpha;
  return;
}

// Call @ 14641e3b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModifyCurveAnimLibrary::GetApplyMode'::__l2::<lambda_1>,void,FAnimNode_ModifyCurve_&>
::Call(void *param_1,FAnimNode_ModifyCurve *param_2)

{
  **(EModifyCurveApplyMode **)param_1 = param_2->ApplyMode;
  return;
}

// Call @ 14641e3d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendSpacePlayerLibrary::GetBlendSpace'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
::Call(void *param_1,FAnimNode_BlendSpacePlayer *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)param_1;
  uVar2 = (**(code **)(param_2->_padding_ + 0x148))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641e400

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendSpaceLibrary::GetFilteredPosition'::__l2::<lambda_1>,void,FAnimNode_BlendSpaceGraph_&>
::Call(void *param_1,FAnimNode_BlendSpaceGraph *param_2)

{
  int iVar1;
  float *pfVar2;
  double *pdVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  iVar1 = *(int *)&param_2->field_0x48;
  if (iVar1 < 3) {
    fVar5 = 0.0;
    fVar6 = 0.0;
    if (iVar1 < 2) {
      if (iVar1 < 1) {
        fVar4 = 0.0;
      }
      else {
        fVar4 = **(float **)&param_2->field_0x40;
      }
    }
    else {
      fVar5 = (*(float **)&param_2->field_0x40)[0xe];
      fVar4 = **(float **)&param_2->field_0x40;
    }
  }
  else {
    pfVar2 = *(float **)&param_2->field_0x40;
    fVar6 = pfVar2[0x1c];
    fVar5 = pfVar2[0xe];
    fVar4 = *pfVar2;
  }
  pdVar3 = *(double **)param_1;
  *pdVar3 = (double)fVar4;
  pdVar3[1] = (double)fVar5;
  pdVar3[2] = (double)fVar6;
  return;
}

// Call @ 14641e470

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ULinkedAnimGraphLibrary::GetLinkedAnimInstance'::__l2::<lambda_1>,void,FAnimNode_LinkedAnimGraph_&>
::Call(void *param_1,FAnimNode_LinkedAnimGraph *param_2)

{
  longlong *this;
  bool bVar1;
  UClass *pUVar2;
  
  this = &param_2->_padding_;
  if ((param_2->_padding_ != 0) && ((*(uint *)(param_2->_padding_ + 8) >> 0x1e & 1) == 0)) {
    if (*this != 0) {
      pUVar2 = Z_Construct_UClass_UAnimInstance_NoRegister();
      bVar1 = FObjectPtr::IsA((FObjectPtr *)this,pUVar2);
      if (bVar1) {
        **(longlong **)param_1 = *this;
        return;
      }
    }
    **(undefined8 **)param_1 = 0;
    return;
  }
  **(undefined8 **)param_1 = 0;
  return;
}

// Call @ 14641e4f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendSpacePlayerLibrary::GetLoop'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
::Call(void *param_1,FAnimNode_BlendSpacePlayer *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = *(undefined1 **)param_1;
  uVar2 = (**(code **)(param_2->_padding_ + 0xd0))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641e520

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequencePlayerLibrary::GetLoopAnimation'::__l2::<lambda_1>,void,FAnimNode_SequencePlayer_&>
::Call(void *param_1,FAnimNode_SequencePlayer *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = *(undefined1 **)param_1;
  uVar2 = (**(code **)(param_2->_padding_ + 0xd0))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641e550

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMirrorAnimLibrary::GetMirror'::__l2::<lambda_1>,void,FAnimNode_MirrorBase_&>::
Call(void *param_1,FAnimNode_MirrorBase *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = *(undefined1 **)param_1;
  uVar2 = (**(code **)(param_2->_padding_ + 0xb0))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641e580

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMirrorAnimLibrary::GetMirrorDataTable'::__l2::<lambda_1>,void,FAnimNode_MirrorBase_&>
::Call(void *param_1,FAnimNode_MirrorBase *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)param_1;
  uVar2 = (**(code **)(param_2->_padding_ + 0xa0))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641e5b0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMirrorAnimLibrary::GetMirrorTransitionBlendTime'::__l2::<lambda_1>,void,FAnimNode_MirrorBase_&>
::Call(void *param_1,FAnimNode_MirrorBase *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)param_1;
  uVar2 = (**(code **)(param_2->_padding_ + 0xb8))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641e5e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ULayeredBoneBlendLibrary::GetNumPoses'::__l2::<lambda_1>,void,FAnimNode_LayeredBoneBlend_&>
::Call(void *param_1,FAnimNode_LayeredBoneBlend *param_2)

{
  **(int **)param_1 = (param_2->BlendPoses).ArrayNum;
  return;
}

// Call @ 14641e5f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendSpacePlayerLibrary::GetPlayRate'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
::Call(void *param_1,FAnimNode_BlendSpacePlayer *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)param_1;
  uVar2 = (**(code **)(param_2->_padding_ + 0x160))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641e620

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequencePlayerLibrary::GetPlayRate'::__l2::<lambda_1>,void,FAnimNode_SequencePlayer_&>
::Call(void *param_1,FAnimNode_SequencePlayer *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)param_1;
  uVar2 = (**(code **)(param_2->_padding_ + 0x170))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641e650

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendSpaceLibrary::GetPosition'::__l2::<lambda_1>,void,FAnimNode_BlendSpaceGraph_&>
::Call(void *param_1,FAnimNode_BlendSpaceGraph *param_2)

{
  float fVar1;
  double *pdVar2;
  
  fVar1 = *(float *)&param_2->field_0x14;
  pdVar2 = *(double **)param_1;
  *pdVar2 = (double)*(float *)&param_2->field_0x10;
  pdVar2[1] = (double)fVar1;
  pdVar2[2] = 0.0;
  return;
}

// Call @ 14641e680

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendSpacePlayerLibrary::GetPosition'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
::Call(void *param_1,FAnimNode_BlendSpacePlayer *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 local_28 [32];
  
  puVar3 = (undefined8 *)(**(code **)(param_2->_padding_ + 0x150))(param_2,local_28);
  puVar1 = *(undefined8 **)param_1;
  uVar2 = puVar3[1];
  *puVar1 = *puVar3;
  puVar1[1] = uVar2;
  puVar1[2] = puVar3[2];
  return;
}

// Call @ 14641e6c0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAnimationStateMachineLibrary::GetRelevantAnimTimeRemaining'::__l2::<lambda_1>,void,FAnimNode_StateResult_&>
::Call(void *param_1,FAnimNode_StateResult *param_2)

{
  int iVar1;
  FAnimInstanceProxy *this;
  float *pfVar2;
  int iVar3;
  FAnimationUpdateContext *this_00;
  IAnimClassInterface *pIVar4;
  longlong lVar5;
  FAnimNode_StateMachine *this_01;
  float fVar6;
  
  this_00 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)param_1);
  if (this_00 != (FAnimationUpdateContext *)0x0) {
    pIVar4 = FAnimationBaseContext::GetAnimClass((FAnimationBaseContext *)this_00);
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
    iVar1 = *(int *)(lVar5 + 8);
    lVar5 = this_00->_padding_;
    iVar3 = FAnimNode_StateResult::GetStateIndex(param_2);
    this = (FAnimInstanceProxy *)this_00->_padding_;
    this_01 = FAnimInstanceProxy::GetStateMachineInstance(this,(iVar1 - (int)lVar5) + -1);
    if (this_01 != (FAnimNode_StateMachine *)0x0) {
      pfVar2 = *(float **)((longlong)param_1 + 8);
      fVar6 = FAnimNode_StateMachine::GetRelevantAnimTimeRemaining(this_01,this,iVar3);
      *pfVar2 = fVar6;
    }
  }
  return;
}

// Call @ 14641e6d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAnimationStateMachineLibrary::GetRelevantAnimTimeRemainingFraction'::__l2::<lambda_1>,void,FAnimNode_StateResult_&>
::Call(void *param_1,FAnimNode_StateResult *param_2)

{
  int iVar1;
  FAnimInstanceProxy *this;
  float *pfVar2;
  int iVar3;
  FAnimationUpdateContext *this_00;
  IAnimClassInterface *pIVar4;
  longlong lVar5;
  FAnimNode_StateMachine *this_01;
  float fVar6;
  
  this_00 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)param_1);
  if (this_00 != (FAnimationUpdateContext *)0x0) {
    pIVar4 = FAnimationBaseContext::GetAnimClass((FAnimationBaseContext *)this_00);
    lVar5 = (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4);
    iVar1 = *(int *)(lVar5 + 8);
    lVar5 = this_00->_padding_;
    iVar3 = FAnimNode_StateResult::GetStateIndex(param_2);
    this = (FAnimInstanceProxy *)this_00->_padding_;
    this_01 = FAnimInstanceProxy::GetStateMachineInstance(this,(iVar1 - (int)lVar5) + -1);
    if (this_01 != (FAnimNode_StateMachine *)0x0) {
      pfVar2 = *(float **)((longlong)param_1 + 8);
      fVar6 = FAnimNode_StateMachine::GetRelevantAnimTimeRemainingFraction(this_01,this,iVar3);
      *pfVar2 = fVar6;
    }
  }
  return;
}

// Call @ 14641e6e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequenceEvaluatorLibrary::GetSequence'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
::Call(void *param_1,FAnimNode_SequenceEvaluator *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)param_1;
  uVar2 = (**(code **)(*(longlong *)param_2 + 0x170))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641e710

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequencePlayerLibrary::GetSequence'::__l2::<lambda_1>,void,FAnimNode_SequencePlayer_&>
::Call(void *param_1,FAnimNode_SequencePlayer *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)param_1;
  uVar2 = (**(code **)(param_2->_padding_ + 0x148))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641e740

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequencePlayerLibrary::GetSequencePure'::__l2::<lambda_1>,void,FAnimNode_SequencePlayer_&>
::Call(void *param_1,FAnimNode_SequencePlayer *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = *(undefined8 **)param_1;
  uVar2 = (**(code **)(param_2->_padding_ + 0x148))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641e770

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendSpacePlayerLibrary::GetStartPosition'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
::Call(void *param_1,FAnimNode_BlendSpacePlayer *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)param_1;
  uVar2 = (**(code **)(param_2->_padding_ + 0x158))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641e7a0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequencePlayerLibrary::GetStartPosition'::__l2::<lambda_1>,void,FAnimNode_SequencePlayer_&>
::Call(void *param_1,FAnimNode_SequencePlayer *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)param_1;
  uVar2 = (**(code **)(param_2->_padding_ + 0x180))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641e7d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAnimationStateMachineLibrary::GetState'::__l2::<lambda_1>,void,FAnimNode_StateMachine_&>
::Call(void *param_1,FAnimNode_StateMachine *param_2)

{
  FAnimationUpdateContext *pFVar1;
  FBakedAnimationState *pFVar2;
  
  pFVar1 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)param_1);
  if (pFVar1 != (FAnimationUpdateContext *)0x0) {
    pFVar2 = FAnimNode_StateMachine::GetStateInfo(param_2,param_2->CurrentState);
    **(FName **)((longlong)param_1 + 8) = pFVar2->StateName;
  }
  return;
}

// Call @ 14641e820

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ULinkedAnimGraphLibrary::HasLinkedAnimInstance'::__l2::<lambda_1>,void,FAnimNode_LinkedAnimGraph_&>
::Call(void *param_1,FAnimNode_LinkedAnimGraph *param_2)

{
  longlong *this;
  bool bVar1;
  UClass *pUVar2;
  longlong lVar3;
  
  this = &param_2->_padding_;
  if (((param_2->_padding_ != 0) && ((*(uint *)(param_2->_padding_ + 8) >> 0x1e & 1) == 0)) &&
     (*this != 0)) {
    pUVar2 = Z_Construct_UClass_UAnimInstance_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)this,pUVar2);
    if (bVar1) {
      lVar3 = *this;
      goto LAB_14641e864;
    }
  }
  lVar3 = 0;
LAB_14641e864:
  *(bool *)*(undefined8 *)param_1 = lVar3 != 0;
  return;
}

// Call @ 14641e880

float __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`InterpolativeWeightFunction'::__l2::<lambda_1>,float,FRBFEntry_const_&,FRBFEntry_const_&>
::Call(void *param_1,FRBFEntry *param_2,FRBFEntry *param_3)

{
  float fVar1;
  
  fVar1 = GetDistanceBetweenEntries
                    (param_2,param_3,
                     *(ERBFDistanceMethod *)(*(longlong *)((longlong)param_1 + 0x20) + 0xe),
                     (TVector<double> *)((longlong)param_1 + 8));
  fVar1 = GetWeightedValue(fVar1,*(float *)param_1,
                           *(ERBFFunctionType *)(*(longlong *)((longlong)param_1 + 0x20) + 0xd),
                           false);
  return fVar1;
}

// Call @ 14641e8d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAnimationStateMachineLibrary::IsStateBlendingIn'::__l2::<lambda_1>,void,FAnimNode_StateResult_&>
::Call(void *param_1,FAnimNode_StateResult *param_2)

{
  int iVar1;
  FAnimInstanceProxy *this;
  int iVar2;
  FAnimationUpdateContext *this_00;
  IAnimClassInterface *pIVar3;
  longlong lVar4;
  FAnimNode_StateMachine *pFVar5;
  float fVar6;
  
  this_00 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)param_1);
  if (this_00 != (FAnimationUpdateContext *)0x0) {
    pIVar3 = FAnimationBaseContext::GetAnimClass((FAnimationBaseContext *)this_00);
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3);
    iVar1 = *(int *)(lVar4 + 8);
    lVar4 = this_00->_padding_;
    iVar2 = FAnimNode_StateResult::GetStateIndex(param_2);
    this = (FAnimInstanceProxy *)this_00->_padding_;
    pFVar5 = FAnimInstanceProxy::GetStateMachineInstance(this,(iVar1 - (int)lVar4) + -1);
    if (pFVar5 != (FAnimNode_StateMachine *)0x0) {
      iVar1 = pFVar5->CurrentState;
      fVar6 = FAnimInstanceProxy::GetRecordedStateWeight
                        (this,pFVar5->StateMachineIndexInClass,iVar2);
      if ((fVar6 < __real_3f800000) && (iVar1 == iVar2)) {
        **(undefined1 **)((longlong)param_1 + 8) = 1;
      }
    }
  }
  return;
}

// Call @ 14641e8e0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAnimationStateMachineLibrary::IsStateBlendingOut'::__l2::<lambda_1>,void,FAnimNode_StateResult_&>
::Call(void *param_1,FAnimNode_StateResult *param_2)

{
  int iVar1;
  FAnimInstanceProxy *this;
  int iVar2;
  FAnimationUpdateContext *this_00;
  IAnimClassInterface *pIVar3;
  longlong lVar4;
  FAnimNode_StateMachine *pFVar5;
  float fVar6;
  
  this_00 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)param_1);
  if (this_00 != (FAnimationUpdateContext *)0x0) {
    pIVar3 = FAnimationBaseContext::GetAnimClass((FAnimationBaseContext *)this_00);
    lVar4 = (**(code **)((longlong)*pIVar3 + 0x20))(pIVar3);
    iVar1 = *(int *)(lVar4 + 8);
    lVar4 = this_00->_padding_;
    iVar2 = FAnimNode_StateResult::GetStateIndex(param_2);
    this = (FAnimInstanceProxy *)this_00->_padding_;
    pFVar5 = FAnimInstanceProxy::GetStateMachineInstance(this,(iVar1 - (int)lVar4) + -1);
    if (pFVar5 != (FAnimNode_StateMachine *)0x0) {
      iVar1 = pFVar5->CurrentState;
      fVar6 = FAnimInstanceProxy::GetRecordedStateWeight
                        (this,pFVar5->StateMachineIndexInClass,iVar2);
      if ((0.0 < fVar6) && (iVar1 != iVar2)) {
        **(undefined1 **)((longlong)param_1 + 8) = 1;
      }
    }
  }
  return;
}

// Call @ 14641e8f0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendListBaseLibrary::ResetNode'::__l2::<lambda_1>,void,FAnimNode_BlendListBase_&>
::Call(void *param_1,FAnimNode_BlendListBase *param_2)

{
  FAnimNode_BlendListBase::Initialize(param_2);
  return;
}

// Call @ 14641e900

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequencePlayerLibrary::SetAccumulatedTime'::__l2::<lambda_1>,void,FAnimNode_SequencePlayer_&>
::Call(void *param_1,FAnimNode_SequencePlayer *param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00014641e90a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2->_padding_ + 0xb0))(param_2,*(undefined4 *)param_1);
  return;
}

// Call @ 14641e920

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModifyCurveAnimLibrary::SetAlpha'::__l2::<lambda_1>,void,FAnimNode_ModifyCurve_&>
::Call(void *param_1,FAnimNode_ModifyCurve *param_2)

{
  param_2->Alpha = *(float *)param_1;
  return;
}

// Call @ 14641e930

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USkeletalControlLibrary::SetAlpha'::__l2::<lambda_1>,void,FAnimNode_SkeletalControlBase_&>
::Call(void *param_1,FAnimNode_SkeletalControlBase *param_2)

{
  float fVar1;
  
  fVar1 = *(float *)param_1;
  param_2->Alpha = fVar1;
  param_2->ActualAlpha = fVar1;
  return;
}

// Call @ 14641e950

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModifyCurveAnimLibrary::SetApplyMode'::__l2::<lambda_1>,void,FAnimNode_ModifyCurve_&>
::Call(void *param_1,FAnimNode_ModifyCurve *param_2)

{
  param_2->ApplyMode = *(EModifyCurveApplyMode *)param_1;
  return;
}

// Call @ 14641e960

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`ULayeredBoneBlendLibrary::SetBlendMask'::__l2::<lambda_1>,void,FAnimNode_LayeredBoneBlend_&>
::Call(void *param_1,FAnimNode_LayeredBoneBlend *param_2)

{
  uint uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  FAnimationUpdateContext *pFVar6;
  USkeleton *this;
  UBlendProfile *pUVar7;
  FString FStack_38;
  FString FStack_28;
  FString FStack_18;
  
  pFVar6 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)param_1);
  if (pFVar6 == (FAnimationUpdateContext *)0x0) {
    if ((byte)LogAnimation._0_1_ < 3) {
      return;
    }
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    return;
  }
  this = FAnimInstanceProxy::GetSkeleton((FAnimInstanceProxy *)pFVar6->_padding_);
  if (this == (USkeleton *)0x0) {
    if ((byte)LogAnimation._0_1_ < 3) {
      return;
    }
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    return;
  }
  if (param_2->BlendMode != BlendMask) {
    if ((byte)LogAnimation._0_1_ < 3) {
      return;
    }
    ::FName::ToString((FName *)((longlong)param_1 + 0xc),&FStack_38);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    if (FStack_38.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
      return;
    }
    FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    return;
  }
  if ((*(int *)((longlong)param_1 + 8) < 0) ||
     ((param_2->BlendPoses).ArrayNum <= *(int *)((longlong)param_1 + 8))) {
    if ((byte)LogAnimation._0_1_ < 3) {
      return;
    }
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    return;
  }
  pUVar7 = USkeleton::GetBlendProfile(this,(FName *)((longlong)param_1 + 0xc));
  if (pUVar7 == (UBlendProfile *)0x0) {
    if ((byte)LogAnimation._0_1_ < 3) {
      return;
    }
    ::FName::ToString((FName *)((longlong)param_1 + 0xc),&FStack_28);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
LAB_14640e95f:
    if (FStack_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_28.Data.AllocatorInstance.Data);
    }
    return;
  }
  if (pUVar7->Mode != BlendMask) {
    if ((byte)LogAnimation._0_1_ < 3) {
      return;
    }
    ::FName::ToString((FName *)((longlong)param_1 + 0xc),&FStack_18);
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogAnimation);
    FStack_28.Data.AllocatorInstance.Data = FStack_18.Data.AllocatorInstance.Data;
    goto LAB_14640e95f;
  }
  uVar1 = *(uint *)((longlong)param_1 + 8);
  if ((param_2->BlendMode != BlendMask) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("BlendMode == ELayeredBoneBlendMode::BlendMask",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_LayeredBoneBlend.cpp"
                         ,0x136,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((int)uVar1 < 0) || ((param_2->BlendPoses).ArrayNum <= (int)uVar1)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("BlendPoses.IsValidIndex(InPoseIndex)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_LayeredBoneBlend.cpp"
                       ,0x137,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if (-1 < (int)uVar1) goto LAB_14640ea40;
  }
  else {
LAB_14640ea40:
    if ((int)uVar1 < (param_2->BlendMasks).ArrayNum) goto LAB_14640ea67;
  }
  bVar4 = ::FDebug::CheckVerifyFailedImpl2
                    ("BlendMasks.IsValidIndex(InPoseIndex)",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AnimGraphRuntime\\Private\\AnimNodes\\AnimNode_LayeredBoneBlend.cpp"
                     ,0x138,L"");
  if (bVar4) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_14640ea67:
  uVar5 = 0;
  if ((int)uVar1 < (param_2->BlendMasks).ArrayNum) {
    uVar5 = ~uVar1 >> 0x1f;
  }
  if ((uVar5 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pFVar2 = (param_2->BlendMasks).AllocatorInstance.Data;
  if (GC::GIsIncrementalReachabilityPending != false) {
    GC::MarkAsReachable((UObject *)pUVar7);
  }
  *(UBlendProfile **)(pFVar2 + (longlong)(int)uVar1 * 8) = pUVar7;
  (param_2->SkeletonGuid).A = 0;
  (param_2->SkeletonGuid).B = 0;
  (param_2->SkeletonGuid).C = 0;
  (param_2->SkeletonGuid).D = 0;
  param_2->RequiredBonesSerialNumber = 0;
  (param_2->VirtualBoneGuid).A = 0;
  (param_2->VirtualBoneGuid).B = 0;
  (param_2->VirtualBoneGuid).C = 0;
  (param_2->VirtualBoneGuid).D = 0;
  return;
}

// Call @ 14641e970

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendSpacePlayerLibrary::SetBlendSpace'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
::Call(void *param_1,FAnimNode_BlendSpacePlayer *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_2->_padding_ + 400))(param_2,*(undefined8 *)param_1);
  if ((cVar1 == '\0') && (2 < (byte)LogBlendSpacePlayerLibrary._0_1_)) {
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_b_1512b0750,
               (FLogCategoryBase *)&LogBlendSpacePlayerLibrary);
    return;
  }
  return;
}

// Call @ 14641e9c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendSpacePlayerLibrary::SetBlendSpaceWithInertialBlending'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
::Call(void *param_1,FAnimNode_BlendSpacePlayer *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  FAnimationUpdateContext *this;
  IInertializationRequester *pIVar4;
  FInertializationRequest FStack_68;
  
  lVar3 = (**(code **)(param_2->_padding_ + 0x148))(param_2);
  lVar1 = *(longlong *)param_1;
  cVar2 = (**(code **)(param_2->_padding_ + 400))(param_2,lVar1);
  if ((cVar2 == '\0') && (2 < (byte)LogBlendSpacePlayerLibrary._0_1_)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendSpacePlayerLibrary);
  }
  if ((lVar3 != lVar1) && (0.0 < *(float *)((longlong)param_1 + 0x10))) {
    this = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)((longlong)param_1 + 8));
    if (this == (FAnimationUpdateContext *)0x0) {
      if (2 < (byte)LogBlendSpacePlayerLibrary._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogBlendSpacePlayerLibrary)
        ;
      }
    }
    else {
      pIVar4 = FAnimationBaseContext::GetMessage<UE::Anim::IInertializationRequester>
                         ((FAnimationBaseContext *)this);
      if (pIVar4 != (IInertializationRequester *)0x0) {
        FInertializationRequest::FInertializationRequest(&FStack_68);
        FStack_68.NodeId = *(int *)((longlong)&this->_padding_ + 4);
        FStack_68.Duration = *(float *)((longlong)param_1 + 0x10);
        FStack_68.AnimInstance.field0_0x0 =
             (TObjectPtr<UObject>_u_0)
             ((TObjectPtr<UObject>_u_0 *)(this->_padding_ + 0x140))->DebugPtr;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (FStack_68.AnimInstance.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
          GC::MarkAsReachable((UObject *)FStack_68.AnimInstance.field0_0x0);
        }
        (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,&FStack_68);
        if (FStack_68.DescriptionString.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_68.DescriptionString.Data.AllocatorInstance.Data);
        }
        if (FStack_68.Description_DEPRECATED.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*FStack_68.Description_DEPRECATED.TextData.Reference + 0x10))();
        }
      }
    }
  }
  return;
}

// Call @ 14641e9d0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UModifyCurveAnimLibrary::SetCurveMap'::__l2::<lambda_1>,void,FAnimNode_ModifyCurve_&>
::Call(void *param_1,FAnimNode_ModifyCurve *param_2)

{
  TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_>::
  Append<FDefaultSetAllocator>
            (&param_2->CurveMap,
             *(TMap<FName,float,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,float,0>_> **
              )param_1);
  return;
}

// Call @ 14641e9f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequenceEvaluatorLibrary::SetExplicitFrame'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
::Call(void *param_1,FAnimNode_SequenceEvaluator *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  FName FVar3;
  int iVar4;
  bool bVar5;
  UPackage *pUVar6;
  FNodeDataId *pFVar7;
  undefined4 *puVar8;
  FNodeDataId FStack_28;
  FNodeDataId FStack_18;
  
  uVar1 = *(undefined4 *)param_1;
  if (CachedId_ExplicitFrame.Index == -1) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
      ::FName::FName(&AnimName_ExplicitFrame,"ExplicitFrame");
      _Init_thread_footer(&::_TSS1);
    }
    if (Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton ==
        (UScriptStruct *)0x0) {
      pUVar6 = Z_Construct_UPackage__Script_AnimGraphRuntime();
      Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FAnimNode_SequenceEvaluator,(UObject *)pUVar6,
                           L"AnimNode_SequenceEvaluator");
    }
    pFVar7 = Anim::FNodeDataId::FNodeDataId
                       (&FStack_18,AnimName_ExplicitFrame,(FAnimNode_Base *)param_2,
                        Z_Registration_Info_UScriptStruct_FAnimNode_SequenceEvaluator.OuterSingleton
                       );
    CachedId_ExplicitFrame.Id = pFVar7->Id;
    CachedId_ExplicitFrame.Index = pFVar7->Index;
  }
  iVar4 = CachedId_ExplicitFrame.Index;
  FVar3 = CachedId_ExplicitFrame.Id;
  if ((*(longlong *)&param_2->field_0x8 == 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NodeData",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Classes\\Animation\\AnimNodeBase.h"
                         ,0x407,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FStack_28.Id = FVar3;
  FStack_28.Index = iVar4;
  puVar8 = FAnimNodeData::GetInstanceData
                     (*(FAnimNodeData **)&param_2->field_0x8,&FStack_28,(FAnimNode_Base *)param_2,
                      (UObject *)0x0);
  if (puVar8 == (undefined4 *)0x0) {
    if (2 < (byte)LogSequenceEvaluatorLibrary._0_1_) {
      Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSequenceEvaluatorLibrary);
    }
    return;
  }
  *puVar8 = uVar1;
  return;
}

// Call @ 14641ea00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequenceEvaluatorLibrary::SetExplicitTime'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
::Call(void *param_1,FAnimNode_SequenceEvaluator *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)param_2 + 0x158))(param_2,*(undefined4 *)param_1);
  if ((cVar1 == '\0') && (2 < (byte)LogSequenceEvaluatorLibrary._0_1_)) {
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_e_1512b7bb0,
               (FLogCategoryBase *)&LogSequenceEvaluatorLibrary);
    return;
  }
  return;
}

// Call @ 14641ea50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendSpacePlayerLibrary::SetLoop'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
::Call(void *param_1,FAnimNode_BlendSpacePlayer *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_2->_padding_ + 0x1a8))(param_2,*(undefined1 *)param_1);
  if ((cVar1 == '\0') && (2 < (byte)LogBlendSpacePlayerLibrary._0_1_)) {
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_l_1512b0c38,
               (FLogCategoryBase *)&LogBlendSpacePlayerLibrary);
    return;
  }
  return;
}

// Call @ 14641eaa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMirrorAnimLibrary::SetMirror'::__l2::<lambda_1>,void,FAnimNode_MirrorBase_&>::
Call(void *param_1,FAnimNode_MirrorBase *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_2->_padding_ + 0xe0))(param_2,*(undefined1 *)param_1);
  if ((cVar1 == '\0') && (2 < (byte)LogMirrorNodeLibrary._0_1_)) {
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_M_1512b6cc0,
               (FLogCategoryBase *)&LogMirrorNodeLibrary);
    return;
  }
  return;
}

// Call @ 14641eaf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UMirrorAnimLibrary::SetMirrorTransitionBlendTime'::__l2::<lambda_1>,void,FAnimNode_MirrorBase_&>
::Call(void *param_1,FAnimNode_MirrorBase *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_2->_padding_ + 0xe8))(param_2,*(undefined4 *)param_1);
  if ((cVar1 == '\0') && (2 < (byte)LogMirrorNodeLibrary._0_1_)) {
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_M_1512b6e18,
               (FLogCategoryBase *)&LogMirrorNodeLibrary);
    return;
  }
  return;
}

// Call @ 14641eb40

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAnimNodeRigidBodyLibrary::SetOverridePhysicsAsset'::__l2::<lambda_1>,void,FAnimNode_RigidBody_&>
::Call(void *param_1,FAnimNode_RigidBody *param_2)

{
  (param_2->OverridePhysicsAsset).field0_0x0 = *(TObjectPtr<UPhysicsAsset>_u_0 *)param_1;
  return;
}

// Call @ 14641eb60

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendSpacePlayerLibrary::SetPlayRate'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
::Call(void *param_1,FAnimNode_BlendSpacePlayer *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_2->_padding_ + 0x1a0))(param_2,*(undefined4 *)param_1);
  if ((cVar1 == '\0') && (2 < (byte)LogBlendSpacePlayerLibrary._0_1_)) {
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_p_1512b0b40,
               (FLogCategoryBase *)&LogBlendSpacePlayerLibrary);
    return;
  }
  return;
}

// Call @ 14641ebb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequencePlayerLibrary::SetPlayRate'::__l2::<lambda_1>,void,FAnimNode_SequencePlayer_&>
::Call(void *param_1,FAnimNode_SequencePlayer *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_2->_padding_ + 0x198))(param_2,*(undefined4 *)param_1);
  if ((cVar1 == '\0') && (2 < (byte)LogSequencePlayerLibrary._0_1_)) {
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_p_1512b8740,
               (FLogCategoryBase *)&LogSequencePlayerLibrary);
    return;
  }
  return;
}

// Call @ 14641ec00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendSpacePlayerLibrary::SetResetPlayTimeWhenBlendSpaceChanges'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
::Call(void *param_1,FAnimNode_BlendSpacePlayer *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_2->_padding_ + 0x178))(param_2,*(undefined1 *)param_1);
  if ((cVar1 == '\0') && (2 < (byte)LogBlendSpacePlayerLibrary._0_1_)) {
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_r_1512b09c8,
               (FLogCategoryBase *)&LogBlendSpacePlayerLibrary);
    return;
  }
  return;
}

// Call @ 14641ec50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequenceEvaluatorLibrary::SetSequence'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
::Call(void *param_1,FAnimNode_SequenceEvaluator *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(*(longlong *)param_2 + 0x150))(param_2,*(undefined8 *)param_1);
  if ((cVar1 == '\0') && (2 < (byte)LogSequenceEvaluatorLibrary._0_1_)) {
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_s_1512b7f98,
               (FLogCategoryBase *)&LogSequenceEvaluatorLibrary);
    return;
  }
  return;
}

// Call @ 14641eca0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequencePlayerLibrary::SetSequence'::__l2::<lambda_1>,void,FAnimNode_SequencePlayer_&>
::Call(void *param_1,FAnimNode_SequencePlayer *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_2->_padding_ + 0x158))(param_2,*(undefined8 *)param_1);
  if ((cVar1 == '\0') && (2 < (byte)LogSequencePlayerLibrary._0_1_)) {
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_s_1512b8818,
               (FLogCategoryBase *)&LogSequencePlayerLibrary);
    return;
  }
  return;
}

// Call @ 14641ecf0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequenceEvaluatorLibrary::SetSequenceWithInertialBlending'::__l2::<lambda_1>,void,FAnimNode_SequenceEvaluator_&>
::Call(void *param_1,FAnimNode_SequenceEvaluator *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  FAnimationUpdateContext *this;
  IInertializationRequester *pIVar4;
  FInertializationRequest FStack_68;
  
  lVar3 = (**(code **)(*(longlong *)param_2 + 0x170))(param_2);
  lVar1 = *(longlong *)param_1;
  cVar2 = (**(code **)(*(longlong *)param_2 + 0x150))(param_2,lVar1);
  if ((cVar2 == '\0') && (2 < (byte)LogSequenceEvaluatorLibrary._0_1_)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSequenceEvaluatorLibrary);
  }
  if ((lVar3 != lVar1) && (0.0 < *(float *)((longlong)param_1 + 0x10))) {
    this = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)((longlong)param_1 + 8));
    if (this == (FAnimationUpdateContext *)0x0) {
      if (2 < (byte)LogSequenceEvaluatorLibrary._0_1_) {
        Logging::Private::BasicLog<3>
                  (&::LOG_Static,(FLogCategoryBase *)&LogSequenceEvaluatorLibrary);
      }
    }
    else {
      pIVar4 = FAnimationBaseContext::GetMessage<UE::Anim::IInertializationRequester>
                         ((FAnimationBaseContext *)this);
      if (pIVar4 != (IInertializationRequester *)0x0) {
        FInertializationRequest::FInertializationRequest(&FStack_68);
        FStack_68.NodeId = *(int *)((longlong)&this->_padding_ + 4);
        FStack_68.Duration = *(float *)((longlong)param_1 + 0x10);
        FStack_68.AnimInstance.field0_0x0 =
             (TObjectPtr<UObject>_u_0)
             ((TObjectPtr<UObject>_u_0 *)(this->_padding_ + 0x140))->DebugPtr;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (FStack_68.AnimInstance.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
          GC::MarkAsReachable((UObject *)FStack_68.AnimInstance.field0_0x0);
        }
        (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,&FStack_68);
        if (FStack_68.DescriptionString.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_68.DescriptionString.Data.AllocatorInstance.Data);
        }
        if (FStack_68.Description_DEPRECATED.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*FStack_68.Description_DEPRECATED.TextData.Reference + 0x10))();
        }
      }
    }
  }
  return;
}

// Call @ 14641ed00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequencePlayerLibrary::SetSequenceWithInertialBlending'::__l2::<lambda_1>,void,FAnimNode_SequencePlayer_&>
::Call(void *param_1,FAnimNode_SequencePlayer *param_2)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  FAnimationUpdateContext *this;
  IInertializationRequester *pIVar4;
  FInertializationRequest FStack_68;
  
  lVar3 = (**(code **)(param_2->_padding_ + 0x148))(param_2);
  lVar1 = *(longlong *)param_1;
  cVar2 = (**(code **)(param_2->_padding_ + 0x158))(param_2,lVar1);
  if ((cVar2 == '\0') && (2 < (byte)LogSequencePlayerLibrary._0_1_)) {
    Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSequencePlayerLibrary);
  }
  if ((lVar3 != lVar1) && (0.0 < *(float *)((longlong)param_1 + 0x10))) {
    this = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)((longlong)param_1 + 8));
    if (this == (FAnimationUpdateContext *)0x0) {
      if (2 < (byte)LogSequencePlayerLibrary._0_1_) {
        Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSequencePlayerLibrary);
      }
    }
    else {
      pIVar4 = FAnimationBaseContext::GetMessage<UE::Anim::IInertializationRequester>
                         ((FAnimationBaseContext *)this);
      if (pIVar4 != (IInertializationRequester *)0x0) {
        FInertializationRequest::FInertializationRequest(&FStack_68);
        FStack_68.NodeId = *(int *)((longlong)&this->_padding_ + 4);
        FStack_68.Duration = *(float *)((longlong)param_1 + 0x10);
        FStack_68.AnimInstance.field0_0x0 =
             (TObjectPtr<UObject>_u_0)
             ((TObjectPtr<UObject>_u_0 *)(this->_padding_ + 0x140))->DebugPtr;
        if ((GC::GIsIncrementalReachabilityPending != false) &&
           (FStack_68.AnimInstance.field0_0x0.DebugPtr != (TObjectPtr<UObject>_u_0)0x0)) {
          GC::MarkAsReachable((UObject *)FStack_68.AnimInstance.field0_0x0);
        }
        (**(code **)((longlong)*pIVar4 + 0x20))(pIVar4,&FStack_68);
        if (FStack_68.DescriptionString.Data.AllocatorInstance.Data !=
            (FScriptContainerElement *)0x0) {
          FMemory::Free(FStack_68.DescriptionString.Data.AllocatorInstance.Data);
        }
        if (FStack_68.Description_DEPRECATED.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*FStack_68.Description_DEPRECATED.TextData.Reference + 0x10))();
        }
      }
    }
  }
  return;
}

// Call @ 14641ed10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequencePlayerLibrary::SetStartPosition'::__l2::<lambda_1>,void,FAnimNode_SequencePlayer_&>
::Call(void *param_1,FAnimNode_SequencePlayer *param_2)

{
  char cVar1;
  
  cVar1 = (**(code **)(param_2->_padding_ + 400))(param_2,*(undefined4 *)param_1);
  if ((cVar1 == '\0') && (2 < (byte)LogSequencePlayerLibrary._0_1_)) {
    Logging::Private::BasicLog<3>
              ((FStaticBasicLogRecord *)&PTR_u_Could_not_set_s_1512b85b8,
               (FLogCategoryBase *)&LogSequencePlayerLibrary);
    return;
  }
  return;
}

// Call @ 14641ed60

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UAnimationStateMachineLibrary::SetState'::__l2::<lambda_1>,void,FAnimNode_StateMachine_&>
::Call(void *param_1,FAnimNode_StateMachine *param_2)

{
  int iVar1;
  TObjectPtr<UCurveFloat>_u_0 TVar2;
  TObjectPtr<UBlendProfile>_u_0 TVar3;
  FAnimationUpdateContext *pFVar4;
  FAnimationTransitionBetweenStates FStack_48;
  
  pFVar4 = FAnimUpdateContext::GetContext(*(FAnimUpdateContext **)param_1);
  if (pFVar4 != (FAnimationUpdateContext *)0x0) {
    iVar1 = param_2->CurrentState;
    FStack_48.NextState =
         FAnimNode_StateMachine::GetStateIndex(param_2,*(FName *)((longlong)param_1 + 8));
    if ((iVar1 != -1) && (FStack_48.NextState != -1)) {
      FStack_48.bAllowInertializationForSelfTransitions = '\0';
      FStack_48.CrossfadeDuration = *(float *)((longlong)param_1 + 0x10);
      FStack_48.BlendMode = *(EAlphaBlendOption *)((longlong)param_1 + 0x20);
      TVar2 = (TObjectPtr<UCurveFloat>_u_0)
              ((TObjectPtr<UCurveFloat>_u_0 *)((longlong)param_1 + 0x28))->DebugPtr;
      FStack_48._padding_ = 0;
      FStack_48.MinTimeBeforeReentry = -1.0;
      FStack_48.StartNotify = -1;
      FStack_48.EndNotify = -1;
      FStack_48.InterruptNotify = -1;
      FStack_48.PreviousState = iVar1;
      if ((GC::GIsIncrementalReachabilityPending != false) && (TVar2.DebugPtr != (UCurveFloat *)0x0)
         ) {
        GC::MarkAsReachable((UObject *)TVar2.DebugPtr);
      }
      TVar3 = (TObjectPtr<UBlendProfile>_u_0)
              ((TObjectPtr<UBlendProfile>_u_0 *)((longlong)param_1 + 0x18))->DebugPtr;
      FStack_48.CustomCurve.field0_0x0 = TVar2;
      if ((GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.DebugPtr != (UBlendProfile *)0x0)) {
        GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
      }
      FStack_48.LogicType.Value = *(uchar *)((longlong)param_1 + 0x14);
      FStack_48.BlendProfile.field0_0x0 = TVar3;
      FAnimNode_StateMachine::TransitionToState
                (param_2,pFVar4,&FStack_48,(FAnimationPotentialTransition *)0x0);
    }
  }
  return;
}

// Call @ 14641ed70

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendSpacePlayerLibrary::ShouldResetPlayTimeWhenBlendSpaceChanges'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
::Call(void *param_1,FAnimNode_BlendSpacePlayer *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  
  puVar1 = *(undefined1 **)param_1;
  uVar2 = (**(code **)(param_2->_padding_ + 0x170))(param_2);
  *puVar1 = uVar2;
  return;
}

// Call @ 14641eda0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendSpaceLibrary::SnapToPosition'::__l2::<lambda_1>,void,FAnimNode_BlendSpaceGraph_&>
::Call(void *param_1,FAnimNode_BlendSpaceGraph *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar1 = *(longlong *)param_1;
  uVar7 = 0;
  iVar5 = 3;
  if (*(int *)&param_2->field_0x48 < 3) {
    iVar5 = *(int *)&param_2->field_0x48;
  }
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < *(int *)&param_2->field_0x48) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = *(longlong *)&param_2->field_0x40;
      if ((2 < uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7ab,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FFIRFilterTimeBased::SetToValue
                ((FFIRFilterTimeBased *)((longlong)(int)uVar7 * 0x38 + lVar2),
                 (float)*(double *)(lVar1 + lVar8 * 8));
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar5);
  }
  return;
}

// Call @ 14641edb0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`UBlendSpacePlayerLibrary::SnapToPosition'::__l2::<lambda_1>,void,FAnimNode_BlendSpacePlayer_&>
::Call(void *param_1,FAnimNode_BlendSpacePlayer *param_2)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  lVar1 = *(longlong *)param_1;
  uVar7 = 0;
  iVar5 = 3;
  if ((int)param_2->_padding_ < 3) {
    iVar5 = (int)param_2->_padding_;
  }
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar7 < (int)param_2->_padding_) {
        uVar6 = ~uVar7 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar2 = param_2->_padding_;
      if ((2 < uVar7) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValidIndex(Index)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                             ,0x7ab,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FFIRFilterTimeBased::SetToValue
                ((FFIRFilterTimeBased *)((longlong)(int)uVar7 * 0x38 + lVar2),
                 (float)*(double *)(lVar1 + lVar8 * 8));
      uVar7 = uVar7 + 1;
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar5);
  }
  return;
}

// Call @ 14641edc0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnimationBaseContext::GetMessage<UE::Anim::FAnimInertializationSyncScope>'::__l5::<lambda_1>,void,UE::Anim::FAnimInertializationSyncScope_&>
::Call(void *param_1,FAnimInertializationSyncScope *param_2)

{
  **(undefined8 **)param_1 = param_2;
  return;
}

// Call @ 14641edd0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnimationBaseContext::GetMessage<UE::Anim::IInertializationRequester>'::__l5::<lambda_1>,void,UE::Anim::IInertializationRequester_&>
::Call(void *param_1,IInertializationRequester *param_2)

{
  **(undefined8 **)param_1 = param_2;
  return;
}

// Call @ 14641ede0

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`USequencePlayerLibrary::ComputePlayRateFromDuration'::__l5::<lambda_1>,void,FAnimNode_SequencePlayer_&>
::Call(void *param_1,FAnimNode_SequencePlayer *param_2)

{
  longlong *plVar1;
  float fVar2;
  
  plVar1 = (longlong *)(**(code **)(param_2->_padding_ + 0x148))(param_2);
  if (plVar1 != (longlong *)0x0) {
    fVar2 = (float)(**(code **)(*plVar1 + 0x2c0))(plVar1);
    **(float **)param_1 = fVar2 / *(float *)((longlong)param_1 + 8);
  }
  return;
}

// Call @ 14641ee20

void __cdecl
UE::Core::Private::Function::
TFunctionRefCaller<`FAnimNode_LayeredBoneBlend::UpdateCachedBoneData'::__l14::<lambda_1>,void,FName,FCurveMetaData_const_&>
::Call(void *param_1,FName *param_2,FCurveMetaData *param_3)

{
  undefined4 uVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  FBoneReference *this;
  FBoneReference *pFVar8;
  longlong lVar9;
  undefined1 auStackX_18 [8];
  uint uStackX_20;
  
  iVar6 = (param_3->LinkedBones).ArrayNum;
  this = (FBoneReference *)(param_3->LinkedBones).AllocatorInstance.Data;
  pFVar8 = this + iVar6;
  do {
    if ((param_3->LinkedBones).ArrayNum != iVar6) {
      auStackX_18[0] = 0;
      `TCheckedPointerIterator<FBoneReference_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(auStackX_18);
    }
    if (this == pFVar8) {
      return;
    }
    FBoneReference::GetCompactPoseIndex(this,(FBoneContainer *)&uStackX_20);
    lVar9 = (longlong)(int)uStackX_20;
    if (uStackX_20 != 0xffffffff) {
      lVar7 = *(longlong *)param_1;
      uVar5 = 0;
      if ((int)uStackX_20 < *(int *)(lVar7 + 0x70)) {
        uVar5 = ~uStackX_20 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (0.0 < *(float *)(*(longlong *)(lVar7 + 0x68) + 4 + lVar9 * 8)) {
        lVar9 = *(longlong *)param_1;
        uVar5 = 0;
        if ((int)uStackX_20 < *(int *)(lVar9 + 0x70)) {
          uVar5 = ~uStackX_20 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = *(int *)(lVar9 + 0xa0);
        lVar7 = *(longlong *)(lVar9 + 0x68);
        if (iVar6 == *(int *)(lVar9 + 0xa4)) {
          iVar6 = ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x414,(ForAnyElementType *)(lVar9 + 0x98),(int *)(lVar9 + 0xa4));
        }
        pFVar2 = ((ForAnyElementType *)(lVar9 + 0x98))->Data;
        *(int *)(lVar9 + 0xa0) = iVar6 + 1;
        uVar1 = *(undefined4 *)(lVar7 + (longlong)(int)uStackX_20 * 8);
        lVar7 = (longlong)iVar6;
        *(FName *)(pFVar2 + lVar7 * 0x14) = *param_2;
        *(undefined4 *)(pFVar2 + lVar7 * 0x14 + 8) = 0;
        pFVar2[lVar7 * 0x14 + 0xc] = (FScriptContainerElement)0x0;
        *(undefined4 *)(pFVar2 + lVar7 * 0x14 + 0x10) = uVar1;
        *(undefined1 *)(lVar9 + 0xa8) = 0;
        return;
      }
    }
    this = this + 1;
  } while( true );
}

