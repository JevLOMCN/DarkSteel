// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: BlendStack
// Functions: 3

// ConditionalCacheBones @ 14a865580

void __thiscall
UE::BlendStack::FBlendStack_SampleGraphExecutionHelper::ConditionalCacheBones
          (FBlendStack_SampleGraphExecutionHelper *this,FAnimationBaseContext *param_1,
          FPoseLink *param_2)

{
  short sVar1;
  FAnimInstanceProxy *pFVar2;
  ulong64 uVar3;
  FAnimationBaseContext local_28;
  
  sVar1 = (this->CacheBoneCounter).Counter;
  pFVar2 = param_1->AnimInstanceProxy;
  if ((((sVar1 == -1) ||
       (uVar3 = (this->CacheBoneCounter).LastSyncronizedFrame, uVar3 == 0xffffffffffffffff)) ||
      (sVar1 != (pFVar2->CachedBonesCounter).Counter)) ||
     (uVar3 != (pFVar2->CachedBonesCounter).LastSyncronizedFrame)) {
    (this->CacheBoneCounter).Counter = (pFVar2->CachedBonesCounter).Counter;
    (this->CacheBoneCounter).LastSyncronizedFrame =
         (pFVar2->CachedBonesCounter).LastSyncronizedFrame;
    (this->CacheBoneCounter).SkipFrames = (pFVar2->CachedBonesCounter).SkipFrames;
    FAnimationBaseContext::FAnimationBaseContext
              (&local_28,param_1->AnimInstanceProxy,(FAnimationUpdateSharedContext *)0x0);
    FPoseLinkBase::CacheBones((FPoseLinkBase *)param_2,(FAnimationCacheBonesContext *)&local_28);
  }
  return;
}

// EvaluatePlayer @ 14a865880

void __thiscall
UE::BlendStack::FBlendStack_SampleGraphExecutionHelper::EvaluatePlayer
          (FBlendStack_SampleGraphExecutionHelper *this,FPoseContext *param_1,
          FBlendStackAnimPlayer *param_2,FPoseLink *param_3)

{
  this->Player = param_2;
  ConditionalCacheBones(this,(FAnimationBaseContext *)param_1,param_3);
  FPoseLink::Evaluate(param_3,param_1);
  return;
}

// SetInputPosePlayer @ 14a869040

void __thiscall
UE::BlendStack::FBlendStack_SampleGraphExecutionHelper::SetInputPosePlayer
          (FBlendStack_SampleGraphExecutionHelper *this,FBlendStackAnimPlayer *param_1)

{
  this->Player = param_1;
  return;
}

