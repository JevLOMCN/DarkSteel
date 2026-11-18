// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 40

// FDynamicsProcessor @ 1444a3ac0

FDynamicsProcessor * __thiscall
Audio::FDynamicsProcessor::FDynamicsProcessor(FDynamicsProcessor *this)

{
  int *piVar1;
  TArray<Audio::FDynamicsProcessor::FKneePoint,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  FDynamicsProcessor *pFVar7;
  undefined8 local_18 [2];
  
  (this->InputLowshelfFilter)._padding_ = (longlong)&___7FBiquadFilter_Audio__6B_;
  local_18[0] = 0;
  pTVar2 = &this->KneePoints;
  (this->InputLowshelfFilter).FilterType = Lowpass;
  piVar1 = &(this->KneePoints).ArrayMax;
  (this->InputLowshelfFilter).Biquad = (FBiquadCoeff *)0x0;
  (this->InputLowshelfFilter).SampleRate = 0.0;
  (this->InputLowshelfFilter).NumChannels = 0;
  (this->InputLowshelfFilter).Frequency = 0.0;
  (this->InputLowshelfFilter).Bandwidth = 0.0;
  (this->InputLowshelfFilter).GainDB = 0.0;
  (this->InputHighshelfFilter).FilterType = Lowpass;
  (this->InputHighshelfFilter).Biquad = (FBiquadCoeff *)0x0;
  (this->InputHighshelfFilter).SampleRate = 0.0;
  (this->InputHighshelfFilter).NumChannels = 0;
  (this->InputHighshelfFilter).Frequency = 0.0;
  (this->InputHighshelfFilter).Bandwidth = 0.0;
  (this->InputHighshelfFilter).GainDB = 0.0;
  this->ProcessingMode = Compressor;
  this->SlopeFactor = 0.0;
  (this->LookaheadDelay).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LookaheadDelay).ArrayNum = 0;
  (this->LookaheadDelay).ArrayMax = 0;
  (this->EnvFollower).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->EnvFollower).ArrayNum = 0;
  (this->EnvFollower).ArrayMax = 0;
  (this->DetectorOuts).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DetectorOuts).ArrayNum = 0;
  (this->DetectorOuts).ArrayMax = 0;
  (this->Gain).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Gain).ArrayNum = 0;
  (this->Gain).ArrayMax = 0;
  this->bKeyLowshelfEnabled = false;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *piVar1 = 0;
  (this->KneePoints).ArrayNum = 0;
  (this->InputLowshelfFilter).bEnabled = true;
  (this->InputHighshelfFilter)._padding_ = (longlong)&___7FBiquadFilter_Audio__6B_;
  (this->InputHighshelfFilter).bEnabled = true;
  this->EnvelopeFollowerPeakMode = Peak;
  this->LookaheadDelayMsec = 10.0;
  this->AttackTimeMsec = 20.0;
  this->ReleaseTimeMsec = 1000.0;
  this->ThresholdDb = -6.0;
  this->Ratio = 1.0;
  this->HalfKneeBandwidthDb = 5.0;
  this->InputGain = 1.0;
  this->OutputGain = 1.0;
  this->KeyGain = 1.0;
  this->SampleRate = 48000.0;
  this->LinkMode = Disabled;
  this->bIsAnalogMode = true;
  this->bKeyAuditionEnabled = false;
  this->bKeyHighshelfEnabled = false;
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (8,4,2,&pTVar2->AllocatorInstance,0,piVar1);
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if ((pFVar3 <= (FScriptContainerElement *)local_18) &&
     ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar1 * 8)) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar7 = (FDynamicsProcessor *)(*pcVar4)();
      return pFVar7;
    }
  }
  iVar6 = (this->KneePoints).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->KneePoints).ArrayNum = iVar6 + 1;
  *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  pFVar3 = (pTVar2->AllocatorInstance).Data;
  if (pFVar3 <= (FScriptContainerElement *)local_18) {
    if ((FScriptContainerElement *)local_18 < pFVar3 + (longlong)*piVar1 * 8) {
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        pFVar7 = (FDynamicsProcessor *)(*pcVar4)();
        return pFVar7;
      }
    }
  }
  iVar6 = (this->KneePoints).ArrayNum;
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&pTVar2->AllocatorInstance,piVar1);
  }
  (this->KneePoints).ArrayNum = iVar6 + 1;
  *(undefined8 *)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_18[0];
  CalculateSlope(this);
  return this;
}

// ~FDynamicsProcessor @ 1444a62a0

void __thiscall Audio::FDynamicsProcessor::~FDynamicsProcessor(FDynamicsProcessor *this)

{
  FScriptContainerElement *pFVar1;
  FBiquadCoeff *pFVar2;
  
  pFVar1 = (this->KneePoints).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Gain).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->DetectorOuts).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->EnvFollower).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FIntegerDelay,int>
            ((FIntegerDelay *)(this->LookaheadDelay).AllocatorInstance.Data,
             (this->LookaheadDelay).ArrayNum);
  pFVar1 = (this->LookaheadDelay).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar2 = (this->InputHighshelfFilter).Biquad;
  (this->InputHighshelfFilter)._padding_ = (longlong)&___7FBiquadFilter_Audio__6B_;
  if (pFVar2 != (FBiquadCoeff *)0x0) {
    operator_delete__(pFVar2);
  }
  pFVar2 = (this->InputLowshelfFilter).Biquad;
  (this->InputLowshelfFilter)._padding_ = (longlong)&___7FBiquadFilter_Audio__6B_;
  if (pFVar2 != (FBiquadCoeff *)0x0) {
    operator_delete__(pFVar2);
  }
  return;
}

// CalculateKnee @ 1444b7ac0

void __thiscall Audio::FDynamicsProcessor::CalculateKnee(FDynamicsProcessor *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  
  fVar6 = this->ThresholdDb;
  fVar4 = this->HalfKneeBandwidthDb;
  if (((this->KneePoints).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(float *)(this->KneePoints).AllocatorInstance.Data = fVar6 - fVar4;
  fVar6 = this->ThresholdDb + this->HalfKneeBandwidthDb;
  if (0.0 <= fVar6) {
    fVar6 = 0.0;
  }
  if (((this->KneePoints).ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(float *)((this->KneePoints).AllocatorInstance.Data + 8) = fVar6;
  if (((this->KneePoints).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined4 *)((this->KneePoints).AllocatorInstance.Data + 4) = 0;
  fVar6 = this->SlopeFactor;
  if (((this->KneePoints).ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(float *)((this->KneePoints).AllocatorInstance.Data + 0xc) = fVar6;
  if (((this->KneePoints).ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->KneePoints).AllocatorInstance.Data;
  if (((this->KneePoints).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_322bcc77;
  fVar4 = *(float *)(this->KneePoints).AllocatorInstance.Data - *(float *)(pFVar1 + 8);
  this->Denominator0Minus1 = fVar4;
  if ((float)((uint)fVar4 & uVar5) < fVar6) {
    this->Denominator0Minus1 = 1e-08;
  }
  if (((this->KneePoints).ArrayNum < 1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff, bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pFVar1 = (this->KneePoints).AllocatorInstance.Data;
  if (((this->KneePoints).ArrayNum < 2) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     uVar5 = __xmm_7fffffff7fffffff7fffffff7fffffff, bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  fVar4 = *(float *)((this->KneePoints).AllocatorInstance.Data + 8) - *(float *)pFVar1;
  this->Denominator1Minus0 = fVar4;
  if ((float)((uint)fVar4 & uVar5) < fVar6) {
    this->Denominator1Minus0 = 1e-08;
  }
  return;
}

// CalculateSlope @ 1444b7dc0

void __thiscall Audio::FDynamicsProcessor::CalculateSlope(FDynamicsProcessor *this)

{
  Type TVar1;
  
  TVar1 = this->ProcessingMode;
  if (TVar1 != Compressor) {
    if (TVar1 == Limiter) {
      this->SlopeFactor = __real_3f800000;
      CalculateKnee(this);
      return;
    }
    if (TVar1 == Expander) {
      this->SlopeFactor = __real_3f800000 / this->Ratio - __real_3f800000;
      CalculateKnee(this);
      return;
    }
    if (TVar1 == Gate) {
      this->SlopeFactor = __real_bf800000;
      CalculateKnee(this);
      return;
    }
  }
  this->SlopeFactor = __real_3f800000 - __real_3f800000 / this->Ratio;
  CalculateKnee(this);
  return;
}

// ComputeGain @ 1444b8590

float __thiscall Audio::FDynamicsProcessor::ComputeGain(FDynamicsProcessor *this,float param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  code *pcVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  
  fVar6 = this->HalfKneeBandwidthDb;
  fVar7 = this->SlopeFactor;
  if (this->ProcessingMode == UpwardsCompressor) {
    if (((fVar6 < 0.0) || (this->ThresholdDb - fVar6 <= param_1)) ||
       (param_1 <= this->ThresholdDb + fVar6)) goto LAB_1444b877e;
  }
  else if (((fVar6 < 0.0) || (param_1 <= this->ThresholdDb - fVar6)) ||
          (this->ThresholdDb + fVar6 <= param_1)) goto LAB_1444b877e;
  if (((this->KneePoints).ArrayNum < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar6 = (float)(*pcVar4)();
    return fVar6;
  }
  fVar6 = *(float *)((this->KneePoints).AllocatorInstance.Data + 8);
  fVar7 = this->Denominator0Minus1;
  if (((this->KneePoints).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar6 = (float)(*pcVar4)();
    return fVar6;
  }
  fVar1 = *(float *)((this->KneePoints).AllocatorInstance.Data + 4);
  if (((this->KneePoints).ArrayNum < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar6 = (float)(*pcVar4)();
    return fVar6;
  }
  fVar2 = *(float *)(this->KneePoints).AllocatorInstance.Data;
  fVar3 = this->Denominator1Minus0;
  if (((this->KneePoints).ArrayNum < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    fVar6 = (float)(*pcVar4)();
    return fVar6;
  }
  fVar7 = ((param_1 - fVar6) / fVar7) * fVar1 +
          ((param_1 - fVar2) / fVar3) * *(float *)((this->KneePoints).AllocatorInstance.Data + 0xc);
LAB_1444b877e:
  fVar7 = (this->ThresholdDb - param_1) * fVar7;
  if (this->ProcessingMode == UpwardsCompressor) {
    if (__real_42100000 <= fVar7) {
      fVar7 = __real_42100000;
    }
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
  }
  else if (0.0 <= fVar7) {
    fVar7 = 0.0;
  }
  fVar6 = powf(__real_41200000,fVar7 * __real_3d4ccccd);
  return fVar6;
}

// ComputeGains @ 1444b87e0

void __thiscall
Audio::FDynamicsProcessor::ComputeGains(FDynamicsProcessor *this,float *param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float _X;
  float fVar8;
  float fVar9;
  bool bVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  
  fVar9 = __real_b22bcc77;
  fVar8 = __real_42100000;
  _X = __real_41200000;
  fVar7 = __real_3f800000;
  fVar6 = __real_3d4ccccd;
  if (0 < param_2) {
    lVar11 = 0;
    do {
      fVar12 = param_1[lVar11];
      fVar13 = this->SlopeFactor;
      fVar1 = this->HalfKneeBandwidthDb;
      if (this->ProcessingMode == UpwardsCompressor) {
        if (((0.0 <= fVar1) && (fVar12 < this->ThresholdDb - fVar1)) &&
           (this->ThresholdDb + fVar1 < fVar12)) {
LAB_1444b88ee:
          if (((this->KneePoints).ArrayNum < 2) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar13 = *(float *)((this->KneePoints).AllocatorInstance.Data + 8);
          fVar1 = this->Denominator0Minus1;
          if (((this->KneePoints).ArrayNum < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar2 = *(float *)((this->KneePoints).AllocatorInstance.Data + 4);
          if (((this->KneePoints).ArrayNum < 1) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar3 = *(float *)(this->KneePoints).AllocatorInstance.Data;
          fVar4 = this->Denominator1Minus0;
          if (((this->KneePoints).ArrayNum < 2) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          fVar13 = ((fVar12 - fVar13) / fVar1) * fVar2 +
                   ((fVar12 - fVar3) / fVar4) *
                   *(float *)((this->KneePoints).AllocatorInstance.Data + 0xc);
        }
      }
      else if (((0.0 <= fVar1) && (this->ThresholdDb - fVar1 < fVar12)) &&
              (fVar12 < this->ThresholdDb + fVar1)) goto LAB_1444b88ee;
      fVar13 = (this->ThresholdDb - fVar12) * fVar13;
      if (this->ProcessingMode == UpwardsCompressor) {
        if (fVar8 <= fVar13) {
          fVar13 = fVar8;
        }
        if (fVar13 <= 0.0) {
          fVar13 = 0.0;
        }
LAB_1444b8a54:
        fVar12 = powf(_X,fVar13 * fVar6);
      }
      else {
        fVar12 = fVar7;
        if (fVar13 <= fVar9) goto LAB_1444b8a54;
      }
      param_1[lVar11] = fVar12;
      lVar11 = lVar11 + 1;
    } while (lVar11 < param_2);
  }
  return;
}

// GetKeyNumChannels @ 1444bfdc0

int __thiscall Audio::FDynamicsProcessor::GetKeyNumChannels(FDynamicsProcessor *this)

{
  return (this->EnvFollower).ArrayNum;
}

// GetMaxLookaheadMsec @ 1444bfde0

float __thiscall Audio::FDynamicsProcessor::GetMaxLookaheadMsec(FDynamicsProcessor *this)

{
  return __real_42c80000;
}

// GetNumChannels @ 1444c07e0

int __thiscall Audio::FDynamicsProcessor::GetNumChannels(FDynamicsProcessor *this)

{
  return (this->Gain).ArrayNum;
}

// GetNumDelayFrames @ 1444c0800

int __thiscall Audio::FDynamicsProcessor::GetNumDelayFrames(FDynamicsProcessor *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (__real_42c80000 < this->LookaheadDelayMsec) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("LookaheadDelayMsec <= MaxLookaheadMsec",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                       ,0x2be,L"An lookahead delay of %fms exceeds maximum lookahead delay of %fms")
    ;
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = -((int)ROUND(__real_bf000000 -
                       this->SampleRate * this->LookaheadDelayMsec * __real_3b03126f) >> 1);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  return iVar3;
}

// Init @ 1444c2b00

void __thiscall Audio::FDynamicsProcessor::Init(FDynamicsProcessor *this,float param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  float fVar4;
  float fVar5;
  Type TVar6;
  code *pcVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  FInlineEnvelopeFollower *this_00;
  uint uVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  
  if ((param_1 <= 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InSampleRate > 0.f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                          ,0x29,L""), bVar11)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  this->SampleRate = param_1;
  SetNumChannels(this,param_2);
  SetKeyNumChannels(this,param_2);
  fVar10 = __real_c58fe95d;
  fVar9 = __real_c47a992f;
  fVar8 = __real_40a00000;
  uVar15 = 0;
  if (0 < param_2) {
    lVar16 = 0;
    do {
      uVar13 = 0;
      if ((int)uVar15 < (this->EnvFollower).ArrayNum) {
        uVar13 = ~uVar15 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      fVar18 = this->SampleRate;
      this_00 = (FInlineEnvelopeFollower *)((this->EnvFollower).AllocatorInstance.Data + lVar16);
      TVar6 = this->EnvelopeFollowerPeakMode;
      bVar11 = this->bIsAnalogMode;
      fVar4 = this->AttackTimeMsec;
      fVar5 = this->ReleaseTimeMsec;
      if (0.0 < fVar18) {
        *(float *)&this_00->_padding_ = fVar18;
        if (*(float *)&this_00->_padding_ <= 0.0) {
          fVar17 = 0.0;
        }
        else {
          fVar17 = fVar10;
          if (*(char *)((longlong)&this_00->_padding_ + 4) != '\0') {
            fVar17 = fVar9;
          }
          fVar17 = expf(fVar17 / (fVar18 * *(float *)&this_00->_padding_));
        }
        *(float *)((longlong)&this_00->_padding_ + 4) = fVar17;
        if (*(float *)&this_00->_padding_ <= 0.0) {
          *(undefined4 *)((longlong)&this_00->_padding_ + 4) = 0;
        }
        else {
          fVar17 = fVar10;
          if (*(char *)((longlong)&this_00->_padding_ + 4) != '\0') {
            fVar17 = fVar9;
          }
          fVar18 = expf(fVar17 / (*(float *)&this_00->_padding_ * fVar18));
          *(float *)((longlong)&this_00->_padding_ + 4) = fVar18;
        }
      }
      else {
        bVar12 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<1809353482809901101>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EnvelopeFollower.cpp"
                            ,0x2d,"InSampleRate > 0.f");
        if (bVar12) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
      }
      *(float *)&this_00->_padding_ = fVar4;
      if (fVar4 <= 0.0) {
        fVar18 = 0.0;
      }
      else if (*(char *)((longlong)&this_00->_padding_ + 4) == '\0') {
        fVar18 = expf(fVar10 / (fVar4 * *(float *)&this_00->_padding_));
      }
      else {
        fVar18 = expf(fVar9 / (fVar4 * *(float *)&this_00->_padding_));
      }
      *(float *)((longlong)&this_00->_padding_ + 4) = fVar18;
      *(float *)&this_00->_padding_ = fVar5;
      if (fVar5 <= 0.0) {
        fVar18 = 0.0;
      }
      else if (*(char *)((longlong)&this_00->_padding_ + 4) == '\0') {
        fVar18 = expf(fVar10 / (fVar5 * *(float *)&this_00->_padding_));
      }
      else {
        fVar18 = expf(fVar9 / (fVar5 * *(float *)&this_00->_padding_));
      }
      *(float *)((longlong)&this_00->_padding_ + 4) = fVar18;
      this_00->Mode = TVar6;
      FAttackRelease::SetAnalog((FAttackRelease *)this_00,bVar11);
      FInlineEnvelopeFollower::SetAnalysisWindow(this_00,fVar8);
      uVar15 = uVar15 + 1;
      lVar16 = lVar16 + 0x30;
    } while ((int)uVar15 < param_2);
  }
  fVar9 = __real_469c4000;
  fVar8 = __real_40000000;
  FBiquadFilter::Init(&this->InputLowshelfFilter,this->SampleRate,param_2,LowShelf,__real_469c4000,
                      __real_40000000,0.0);
  FBiquadFilter::Init(&this->InputHighshelfFilter,this->SampleRate,param_2,HighShelf,fVar9,fVar8,0.0
                     );
  piVar1 = &(this->DetectorOuts).ArrayMax;
  piVar2 = &(this->DetectorOuts).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->DetectorOuts).AllocatorInstance,0,piVar1);
  }
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,param_2,&(this->DetectorOuts).AllocatorInstance,piVar2,piVar1);
  memset((this->DetectorOuts).AllocatorInstance.Data + (longlong)iVar14 * 4,0,(longlong)param_2 << 2
        );
  pTVar3 = &this->Gain;
  piVar1 = &(this->Gain).ArrayMax;
  (this->Gain).ArrayNum = 0;
  if ((this->Gain).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  iVar14 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (4,4,param_2,&pTVar3->AllocatorInstance,&(this->Gain).ArrayNum,piVar1);
  memset((pTVar3->AllocatorInstance).Data + (longlong)iVar14 * 4,0,(longlong)param_2 << 2);
  return;
}

// IsInProcessingThreshold @ 1444c40f0

bool __thiscall
Audio::FDynamicsProcessor::IsInProcessingThreshold(FDynamicsProcessor *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->HalfKneeBandwidthDb;
  if (this->ProcessingMode == UpwardsCompressor) {
    if (((0.0 <= fVar1) && (param_1 < this->ThresholdDb - fVar1)) &&
       (this->ThresholdDb + fVar1 < param_1)) {
      return true;
    }
  }
  else if (((0.0 <= fVar1) && (this->ThresholdDb - fVar1 < param_1)) &&
          (param_1 < this->ThresholdDb + fVar1)) {
    return true;
  }
  return false;
}

// ProcessAudio @ 1444d7e60

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Audio::FDynamicsProcessor::ProcessAudio
          (FDynamicsProcessor *this,float *param_1,int param_2,float *param_3,float *param_4,
          float *param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStackY_11c8 [32];
  float **ppfVar15;
  int local_1194;
  float *local_1158 [8];
  float *local_1118 [8];
  float *local_10d8 [8];
  float *local_1098 [8];
  float local_1058 [256];
  float local_c58 [256];
  float local_858 [256];
  float local_458 [256];
  ulonglong local_58;
  undefined8 uStack_48;
  
  uStack_48 = 0x1444d7e77;
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_11c8;
  bVar14 = -1 < CpuChannel->Enabled;
  if (bVar14) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId302,"FDynamicsProcessor::ProcessAudio_Interleaved",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
               ,0x12e);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId302);
  }
  iVar1 = (this->Gain).ArrayNum;
  iVar2 = (this->EnvFollower).ArrayNum;
  iVar5 = (int)((longlong)param_2 / (longlong)iVar1);
  iVar8 = iVar2;
  if (iVar2 < iVar1) {
    iVar8 = iVar1;
  }
  if (iVar8 < 1) {
    iVar8 = 1;
  }
  if ((param_1 == (float *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != InBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                         ,0x148,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_3 == (float *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != OutBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                         ,0x149,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((8 < iVar2) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("KeyNumChannels <= MaxNumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                         ,0x14a,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((8 < iVar1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChannels <= MaxNumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                         ,0x14b,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = (int)(0x100 / (longlong)iVar8);
  if ((iVar8 < 0x20) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumSubbufferFrames >= MinNumSubbufferFrames",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                         ,0x14c,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (0 < iVar1) {
    lVar7 = 0;
    iVar10 = 0;
    do {
      local_1158[lVar7] = local_1058 + iVar10;
      local_10d8[lVar7] = local_c58 + iVar10;
      local_1118[lVar7] = local_858 + iVar10;
      lVar7 = lVar7 + 1;
      iVar10 = iVar10 + iVar8;
    } while (lVar7 < iVar1);
  }
  if (0 < iVar2) {
    lVar7 = 0;
    iVar10 = 0;
    do {
      lVar6 = (longlong)iVar10;
      iVar10 = iVar10 + iVar8;
      local_1098[lVar7] = local_458 + lVar6;
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar2);
  }
  if (0 < iVar5) {
    iVar11 = 0;
    local_1194 = 0;
    uVar13 = (longlong)param_2 / (longlong)iVar1 & 0xffffffff;
    iVar10 = 0;
    do {
      lVar7 = (longlong)local_1194;
      iVar12 = (int)uVar13;
      iVar9 = iVar12;
      if (iVar8 < iVar12) {
        iVar9 = iVar8;
      }
      ArrayDeinterleave(param_1 + lVar7,local_1158,iVar9,iVar1);
      if (param_4 == (float *)0x0) {
        if (((this->Gain).ArrayNum < (this->EnvFollower).ArrayNum) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetKeyNumChannels() <= GetNumChannels()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                               ,0x17b,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ppfVar15 = (float **)0x0;
      }
      else {
        ArrayDeinterleave(param_4 + iVar11,local_1098,iVar9,iVar2);
        if (((this->Gain).ArrayNum < (this->EnvFollower).ArrayNum) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("GetKeyNumChannels() <= GetNumChannels()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                               ,0x17b,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        ppfVar15 = local_1098;
      }
      ProcessAudioDeinterleaveInternal(this,local_1158,iVar9,local_10d8,ppfVar15,local_1118);
      if (param_5 != (float *)0x0) {
        ArrayInterleave(local_1118,param_5 + lVar7,iVar9,iVar1);
      }
      ArrayInterleave(local_10d8,param_3 + lVar7,iVar9,iVar1);
      iVar10 = iVar10 + iVar8;
      local_1194 = local_1194 + iVar8 * iVar1;
      uVar13 = (ulonglong)(uint)(iVar12 - iVar8);
      iVar11 = iVar11 + iVar8 * iVar2;
    } while (iVar10 < iVar5);
  }
  if (bVar14) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ProcessAudio @ 1444d8280

void __thiscall
Audio::FDynamicsProcessor::ProcessAudio
          (FDynamicsProcessor *this,float **param_1,int param_2,float **param_3,float **param_4,
          float **param_5)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->Gain).ArrayNum < (this->EnvFollower).ArrayNum) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("GetKeyNumChannels() <= GetNumChannels()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                       ,0x17b,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  ProcessAudioDeinterleaveInternal(this,param_1,param_2,param_3,param_4,param_5);
  return;
}

// ProcessAudioDeinterleaveInternal @ 1444dd440

void __thiscall
Audio::FDynamicsProcessor::ProcessAudioDeinterleaveInternal
          (FDynamicsProcessor *this,float **param_1,int param_2,float **param_3,float **param_4,
          float **param_5)

{
  undefined8 *puVar1;
  EDynamicsProcessorChannelLinkMode EVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  float **ppfVar14;
  longlong lVar15;
  float **ppfVar16;
  FInlineEnvelopeFollower *this_00;
  longlong lVar17;
  uint uVar18;
  float *pfVar19;
  longlong lVar20;
  longlong lVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  longlong local_res20;
  undefined4 uStack_23c;
  longlong local_230;
  undefined4 uStack_20c;
  longlong local_208;
  TArrayView<float,int> local_1f8;
  float *local_1e8;
  int iStack_1e0;
  undefined4 uStack_1dc;
  float *local_1d8;
  int iStack_1d0;
  undefined4 uStack_1cc;
  TArrayView<float_const_,int> local_1c8;
  TArrayView<float_const_,int> local_1b8;
  float *local_1a8;
  int iStack_1a0;
  undefined4 uStack_19c;
  float *local_198;
  int iStack_190;
  undefined4 uStack_18c;
  float *local_188;
  int iStack_180;
  undefined4 uStack_17c;
  float *local_178;
  int iStack_170;
  undefined4 uStack_16c;
  float *local_168;
  int iStack_160;
  undefined4 uStack_15c;
  TArrayView<float,int> local_158;
  TArrayView<float_const_,int> local_148;
  TArrayView<float,int> local_138;
  TArrayView<float,int> local_128;
  TArrayView<float_const_,int> local_118;
  TArrayView<float_const_,int> local_108;
  TArrayView<float,int> local_f8;
  TArrayView<float_const_,int> local_e8;
  TArrayView<float,int> local_d8;
  TArrayView<float,int> local_c8;
  TArrayView<float,int> local_b8;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float,int> local_78;
  undefined4 local_5c;
  
  lVar17 = (longlong)param_2;
  bVar22 = -1 < CpuChannel->Enabled;
  if (bVar22) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId385,"FDynamicsProcessor::ProcessAudioDeinterleaveInternal",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
               ,0x181);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId385);
  }
  if (((param_1 == (float **)0x0) || (*param_1 == (float *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != InBuffers && nullptr != InBuffers[0]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                         ,0x185,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((param_3 == (float **)0x0) || (*param_3 == (float *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != OutBuffers && nullptr != OutBuffers[0]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                         ,0x186,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((param_5 == (float **)0x0) || (*param_5 == (float *)0x0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != OutEnvelopes && nullptr != OutEnvelopes[0]",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                         ,0x187,L""), bVar9)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar3 = (this->EnvFollower).ArrayNum;
  iVar4 = (this->Gain).ArrayNum;
  ppfVar14 = param_1;
  if (param_4 != (float **)0x0) {
    ppfVar14 = param_4;
  }
  if (this->bKeyLowshelfEnabled != false) {
    FBiquadFilter::ProcessAudio(&this->InputLowshelfFilter,ppfVar14,param_2,param_3);
    ppfVar14 = param_3;
  }
  if (this->bKeyHighshelfEnabled != false) {
    FBiquadFilter::ProcessAudio(&this->InputHighshelfFilter,ppfVar14,param_2,param_3);
    ppfVar14 = param_3;
  }
  if ((param_4 == (float **)0x0) || (param_4 == param_1)) {
    fVar24 = this->InputGain;
  }
  else {
    fVar24 = this->InputGain * this->KeyGain;
  }
  lVar20 = (longlong)iVar3;
  if (this->bKeyAuditionEnabled != false) {
    if ((ppfVar14 != param_3) && (0 < lVar20)) {
      ppfVar16 = param_3;
      lVar21 = lVar20;
      do {
        memcpy(*ppfVar16,*(void **)(((longlong)ppfVar14 - (longlong)param_3) + (longlong)ppfVar16),
               lVar17 * 4);
        ppfVar16 = ppfVar16 + 1;
        lVar21 = lVar21 + -1;
      } while (lVar21 != 0);
    }
    if (lVar20 < iVar4) {
      do {
        memset(param_3[lVar20],0,lVar17 * 4);
        lVar20 = lVar20 + 1;
      } while (lVar20 < iVar4);
    }
    goto LAB_1444ddfe3;
  }
  uVar18 = 0;
  if (0 < lVar20) {
    uStack_23c = local_5c;
    local_230 = 0;
    ppfVar16 = param_3;
    local_208 = lVar20;
    do {
      pfVar5 = *ppfVar16;
      if ((param_2 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      puVar1 = (undefined8 *)(((longlong)param_5 - (longlong)param_3) + (longlong)ppfVar16);
      local_1d8 = *(float **)(((longlong)ppfVar14 - (longlong)param_5) + (longlong)puVar1);
      iStack_1d0 = param_2;
      if ((param_2 < 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_148._12_4_ = uStack_1cc;
      local_148.ArrayNum = iStack_1d0;
      local_158._12_4_ = local_5c;
      local_158.ArrayNum = param_2;
      local_148.DataPtr = local_1d8;
      local_158.DataPtr = pfVar5;
      ArrayMultiplyByConstant(&local_148,fVar24,&local_158);
      uVar11 = 0;
      if ((int)uVar18 < (this->EnvFollower).ArrayNum) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      this_00 = (FInlineEnvelopeFollower *)((this->EnvFollower).AllocatorInstance.Data + local_230);
      pfVar5 = (float *)*puVar1;
      pfVar19 = *ppfVar16;
      if ((pfVar19 == pfVar5) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("InSamples != OutSamples",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                             ,0x186,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      FInlineEnvelopeFollower::NormalizeSamples(this_00,pfVar19,param_2,pfVar5);
      lVar21 = 0;
      if (3 < lVar17) {
        pfVar19 = pfVar5 + 2;
        lVar15 = (lVar17 - 4U >> 2) + 1;
        lVar21 = lVar15 * 4;
        do {
          lVar12 = 0xc;
          fVar23 = this_00->Value - pfVar19[-2];
          if (fVar23 <= 0.0) {
            lVar12 = 4;
          }
          lVar13 = 0xc;
          fVar23 = fVar23 * *(float *)((longlong)&this_00->_padding_ + lVar12) + pfVar19[-2];
          this_00->Value = fVar23;
          pfVar19[-2] = fVar23;
          fVar23 = this_00->Value - pfVar19[-1];
          if (fVar23 <= 0.0) {
            lVar13 = 4;
          }
          lVar12 = 0xc;
          fVar23 = fVar23 * *(float *)((longlong)&this_00->_padding_ + lVar13) + pfVar19[-1];
          this_00->Value = fVar23;
          pfVar19[-1] = fVar23;
          fVar23 = this_00->Value - *pfVar19;
          if (fVar23 <= 0.0) {
            lVar12 = 4;
          }
          lVar13 = 0xc;
          fVar23 = fVar23 * *(float *)((longlong)&this_00->_padding_ + lVar12) + *pfVar19;
          this_00->Value = fVar23;
          *pfVar19 = fVar23;
          fVar23 = this_00->Value - pfVar19[1];
          if (fVar23 <= 0.0) {
            lVar13 = 4;
          }
          fVar23 = fVar23 * *(float *)((longlong)&this_00->_padding_ + lVar13) + pfVar19[1];
          this_00->Value = fVar23;
          pfVar19[1] = fVar23;
          pfVar19 = pfVar19 + 4;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
      }
      for (; lVar21 < lVar17; lVar21 = lVar21 + 1) {
        lVar15 = 0xc;
        fVar23 = this_00->Value - pfVar5[lVar21];
        if (fVar23 <= 0.0) {
          lVar15 = 4;
        }
        fVar23 = fVar23 * *(float *)((longlong)&this_00->_padding_ + lVar15) + pfVar5[lVar21];
        this_00->Value = fVar23;
        pfVar5[lVar21] = fVar23;
      }
      uVar18 = uVar18 + 1;
      local_230 = local_230 + 0x30;
      ppfVar16 = ppfVar16 + 1;
      local_208 = local_208 + -1;
    } while (local_208 != 0);
  }
  EVar2 = this->LinkMode;
  if (EVar2 == Disabled) {
LAB_1444ddc92:
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId493,
                 "FDynamicsProcessor::ProcessAudioDeinterleaveInternal_LinkModeDisabled",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                 ,0x1ed);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId493);
    }
    fVar24 = __real_c2c00000;
    if (0 < lVar20) {
      lVar17 = 0;
      do {
        local_168 = param_5[lVar17];
        iStack_160 = param_2;
        if ((param_2 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_c8._12_4_ = uStack_15c;
        local_c8.ArrayNum = iStack_160;
        local_c8.DataPtr = local_168;
        ArrayMagnitudeToDecibelInPlace(&local_c8,fVar24);
        ComputeGains(this,param_5[lVar17],param_2);
        lVar17 = lVar17 + 1;
      } while (lVar17 < lVar20);
    }
    param_4._0_4_ = iVar3;
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else if (EVar2 == Average) {
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId457,
                 "FDynamicsProcessor::ProcessAudioDeinterleaveInternal_LinkModeAverage",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                 ,0x1c9);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId457);
    }
    pfVar5 = *param_5;
    local_1a8 = pfVar5;
    iStack_1a0 = param_2;
    if ((param_2 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pfVar19 = local_1a8;
    uVar8._4_4_ = uStack_19c;
    uVar8._0_4_ = iStack_1a0;
    if (1 < lVar20) {
      lVar17 = 1;
      do {
        local_188 = param_5[lVar17];
        local_198 = pfVar5;
        iStack_190 = param_2;
        iStack_180 = param_2;
        if ((param_2 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_118._12_4_ = uStack_18c;
        local_118.ArrayNum = iStack_190;
        local_108._12_4_ = uStack_17c;
        local_108.ArrayNum = iStack_180;
        local_118.DataPtr = local_198;
        local_108.DataPtr = local_188;
        local_128.DataPtr = pfVar19;
        local_128._8_8_ = uVar8;
        ArraySum(&local_108,&local_118,&local_128);
        lVar17 = lVar17 + 1;
      } while (lVar17 < lVar20);
    }
    local_e8._12_4_ = uStack_16c;
    local_e8.ArrayNum = param_2;
    local_f8.DataPtr = pfVar19;
    local_178 = pfVar5;
    iStack_170 = param_2;
    local_f8._8_8_ = uVar8;
    local_e8.DataPtr = pfVar5;
    ArrayMultiplyByConstant(&local_e8,__real_3f800000 / (float)iVar3,&local_f8);
    local_d8.DataPtr = pfVar19;
    local_d8._8_8_ = uVar8;
    ArrayMagnitudeToDecibelInPlace(&local_d8,__real_c2c00000);
    ComputeGains(this,*param_5,param_2);
    param_4._0_4_ = 1;
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  else {
    if (EVar2 != Peak) goto LAB_1444ddc92;
    bVar9 = -1 < CpuChannel->Enabled;
    if (bVar9) {
      FCpuProfilerTrace::GetOrCreateSpecId
                (&__CpuProfilerEventSpecId475,
                 "FDynamicsProcessor::ProcessAudioDeinterleaveInternal_LinkModePeak",
                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                 ,0x1db);
      FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId475);
    }
    local_1f8.DataPtr = *param_5;
    local_1f8.ArrayNum = param_2;
    if ((param_2 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("ArrayNum >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xfe,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    param_4._0_4_ = 1;
    if (1 < lVar20) {
      local_res20 = 1;
      do {
        local_1c8.DataPtr = local_1f8.DataPtr;
        local_1c8.ArrayNum = local_1f8.ArrayNum;
        local_1b8.DataPtr = param_5[local_res20];
        local_1b8.ArrayNum = param_2;
        if ((param_2 < 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar10)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        ArrayMax(&local_1b8,&local_1c8,&local_1f8);
        local_res20 = local_res20 + 1;
      } while (local_res20 < lVar20);
    }
    local_138._12_4_ = local_1f8._12_4_;
    local_138.ArrayNum = local_1f8.ArrayNum;
    local_138.DataPtr = local_1f8.DataPtr;
    ArrayMagnitudeToDecibelInPlace(&local_138,__real_c2c00000);
    ComputeGains(this,*param_5,param_2);
    if (bVar9) {
      FCpuProfilerTrace::OutputEndEvent();
    }
  }
  bVar9 = -1 < CpuChannel->Enabled;
  if (bVar9) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId507,
               "FDynamicsProcessor::ProcessAudioDeinterleaveInternal_ApplyGain",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
               ,0x1fb);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId507);
  }
  uVar18 = 0;
  fVar24 = this->OutputGain;
  fVar23 = this->InputGain;
  if (0 < iVar4) {
    lVar17 = (longlong)param_1 - (longlong)param_3;
    lVar20 = (longlong)iVar4;
    do {
      local_1e8 = *(float **)(lVar17 + (longlong)param_3);
      iStack_1e0 = param_2;
      if ((param_2 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pfVar5 = *param_3;
      if ((param_2 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pfVar19 = param_5[(int)uVar18 % (int)param_4];
      if ((param_2 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("ArrayNum >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xfe,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      uVar11 = 0;
      if ((int)uVar18 < (this->LookaheadDelay).ArrayNum) {
        uVar11 = ~uVar18 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_a8._12_4_ = uStack_1dc;
      local_a8.ArrayNum = iStack_1e0;
      uVar7._4_4_ = uStack_23c;
      uVar7._0_4_ = param_2;
      local_a8.DataPtr = local_1e8;
      local_b8.DataPtr = pfVar5;
      local_b8._8_8_ = uVar7;
      FIntegerDelay::ProcessAudio
                ((FIntegerDelay *)
                 ((this->LookaheadDelay).AllocatorInstance.Data + (longlong)(int)uVar18 * 0x20),
                 &local_a8,&local_b8);
      local_88._12_4_ = uStack_20c;
      local_88.ArrayNum = param_2;
      local_98.DataPtr = pfVar5;
      local_98._8_8_ = uVar7;
      local_88.DataPtr = pfVar19;
      ArrayMultiplyInPlace(&local_88,&local_98);
      local_78.DataPtr = pfVar5;
      local_78._8_8_ = uVar7;
      ArrayMultiplyByConstantInPlace(&local_78,fVar24 * fVar23);
      uVar18 = uVar18 + 1;
      param_3 = param_3 + 1;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
LAB_1444ddfe3:
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ProcessAudioFrame @ 1444dea80

void __thiscall
Audio::FDynamicsProcessor::ProcessAudioFrame
          (FDynamicsProcessor *this,float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  undefined4 local_res20 [2];
  longlong local_68;
  longlong local_60;
  
  if ((param_4 == (float *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutGain != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                         ,0x116,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  bVar5 = ProcessKeyFrame(this,param_3,param_2,param_1 == param_3);
  if (bVar5) {
    local_60 = (longlong)(this->Gain).ArrayNum;
    uVar14 = 0;
    if (0 < local_60) {
      local_68 = 0;
      pfVar13 = param_2;
      do {
        uVar12 = ~uVar14 >> 0x1f;
        uVar6 = 0;
        if ((int)uVar14 < (this->LookaheadDelay).ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->LookaheadDelay).AllocatorInstance.Data;
        lVar3 = *(longlong *)(pFVar2 + local_68 + 0x18);
        local_res20[0] =
             *(undefined4 *)(((longlong)param_1 - (longlong)param_2) + (longlong)pfVar13);
        if ((*(int *)(lVar3 + 0x30) < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InNum <= SampleCapacity",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                               ,0x57,L"Input buffer [%d] larger than capacity [%d]"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = *(int *)(lVar3 + 0x30);
        iVar11 = 1;
        if (iVar10 < 2) {
          iVar11 = iVar10;
        }
        *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + iVar11;
        if ((iVar10 < *(int *)(lVar3 + 0x38)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("WriteCount <= SampleCapacity",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                               ,0x5e,L"Buffer overflow"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = *(int *)(lVar3 + 0x30);
        iVar9 = *(int *)(lVar3 + 0x38);
        if (iVar10 < iVar9) {
          *(int *)(lVar3 + 0x38) = iVar10;
          iVar11 = iVar11 + (iVar10 - iVar9);
        }
        iVar10 = iVar10 - *(int *)(lVar3 + 0x3c);
        iVar9 = iVar10 - iVar11;
        if (iVar9 < 1) {
          if (0 < iVar10) {
            memcpy(*(void **)(lVar3 + 0x28),local_res20,(longlong)(iVar10 * 4));
          }
          *(void **)(lVar3 + 0x28) = *(void **)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x3c) = -iVar9;
          if (0 < -iVar9) {
            memcpy(*(void **)(lVar3 + 0x10),local_res20 + iVar10,(longlong)(iVar9 * -4));
          }
          lVar7 = -(longlong)iVar9;
        }
        else {
          if (0 < iVar11) {
            memcpy(*(void **)(lVar3 + 0x28),local_res20,(longlong)(iVar11 * 4));
          }
          *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + iVar11;
          lVar7 = (longlong)iVar11;
        }
        *(longlong *)(lVar3 + 0x28) = *(longlong *)(lVar3 + 0x28) + lVar7 * 4;
        pfVar8 = FAlignedBlockBuffer::InspectSamples
                           (*(FAlignedBlockBuffer **)(pFVar2 + local_68 + 0x18),
                            *(int *)(pFVar2 + local_68 + 0xc) + 1,*(int *)(pFVar2 + local_68 + 8));
        fVar1 = *pfVar8;
        FAlignedBlockBuffer::RemoveSamples(*(FAlignedBlockBuffer **)(pFVar2 + local_68 + 0x18),1);
        uVar6 = 0;
        if ((int)uVar14 < (this->Gain).ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *pfVar13 = fVar1 * *(float *)((longlong)pfVar13 +
                                     ((longlong)(this->Gain).AllocatorInstance.Data -
                                     (longlong)param_2)) * this->OutputGain * this->InputGain;
        uVar6 = 0;
        if ((int)uVar14 < (this->Gain).ArrayNum) {
          uVar6 = uVar12;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_68 = local_68 + 0x20;
        uVar14 = uVar14 + 1;
        *(undefined4 *)(((longlong)param_4 - (longlong)param_2) + (longlong)pfVar13) =
             *(undefined4 *)
              ((longlong)pfVar13 +
              ((longlong)(this->Gain).AllocatorInstance.Data - (longlong)param_2));
        pfVar13 = pfVar13 + 1;
        local_60 = local_60 + -1;
      } while (local_60 != 0);
    }
  }
  return;
}

// ProcessAudioFrame @ 1444dee30

void __thiscall
Audio::FDynamicsProcessor::ProcessAudioFrame
          (FDynamicsProcessor *this,float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  uint uVar13;
  undefined4 local_res20 [2];
  longlong local_68;
  longlong local_60;
  
  bVar5 = ProcessKeyFrame(this,param_3,param_2,param_1 == param_3);
  if (bVar5) {
    local_60 = (longlong)(this->Gain).ArrayNum;
    uVar13 = 0;
    if (0 < local_60) {
      local_68 = 0;
      pfVar12 = param_2;
      do {
        uVar6 = 0;
        if ((int)uVar13 < (this->LookaheadDelay).ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->LookaheadDelay).AllocatorInstance.Data;
        local_res20[0] =
             *(undefined4 *)(((longlong)param_1 - (longlong)param_2) + (longlong)pfVar12);
        lVar3 = *(longlong *)(pFVar2 + local_68 + 0x18);
        if ((*(int *)(lVar3 + 0x30) < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InNum <= SampleCapacity",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                               ,0x57,L"Input buffer [%d] larger than capacity [%d]"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = *(int *)(lVar3 + 0x30);
        iVar11 = 1;
        if (iVar10 < 2) {
          iVar11 = iVar10;
        }
        *(int *)(lVar3 + 0x38) = *(int *)(lVar3 + 0x38) + iVar11;
        if ((iVar10 < *(int *)(lVar3 + 0x38)) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("WriteCount <= SampleCapacity",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AlignedBlockBuffer.cpp"
                               ,0x5e,L"Buffer overflow"), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar10 = *(int *)(lVar3 + 0x30);
        iVar9 = *(int *)(lVar3 + 0x38);
        if (iVar10 < iVar9) {
          *(int *)(lVar3 + 0x38) = iVar10;
          iVar11 = iVar11 + (iVar10 - iVar9);
        }
        iVar10 = iVar10 - *(int *)(lVar3 + 0x3c);
        iVar9 = iVar10 - iVar11;
        if (iVar9 < 1) {
          if (0 < iVar10) {
            memcpy(*(void **)(lVar3 + 0x28),local_res20,(longlong)(iVar10 * 4));
          }
          *(void **)(lVar3 + 0x28) = *(void **)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x3c) = -iVar9;
          if (0 < -iVar9) {
            memcpy(*(void **)(lVar3 + 0x10),local_res20 + iVar10,(longlong)(iVar9 * -4));
          }
          lVar7 = -(longlong)iVar9;
        }
        else {
          if (0 < iVar11) {
            memcpy(*(void **)(lVar3 + 0x28),local_res20,(longlong)(iVar11 * 4));
          }
          *(int *)(lVar3 + 0x3c) = *(int *)(lVar3 + 0x3c) + iVar11;
          lVar7 = (longlong)iVar11;
        }
        *(longlong *)(lVar3 + 0x28) = *(longlong *)(lVar3 + 0x28) + lVar7 * 4;
        pfVar8 = FAlignedBlockBuffer::InspectSamples
                           (*(FAlignedBlockBuffer **)(pFVar2 + local_68 + 0x18),
                            *(int *)(pFVar2 + local_68 + 0xc) + 1,*(int *)(pFVar2 + local_68 + 8));
        fVar1 = *pfVar8;
        FAlignedBlockBuffer::RemoveSamples(*(FAlignedBlockBuffer **)(pFVar2 + local_68 + 0x18),1);
        uVar6 = 0;
        if ((int)uVar13 < (this->Gain).ArrayNum) {
          uVar6 = ~uVar13 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_68 = local_68 + 0x20;
        uVar13 = uVar13 + 1;
        *pfVar12 = fVar1 * *(float *)((longlong)pfVar12 +
                                     ((longlong)(this->Gain).AllocatorInstance.Data -
                                     (longlong)param_2)) * this->OutputGain * this->InputGain;
        pfVar12 = pfVar12 + 1;
        local_60 = local_60 + -1;
      } while (local_60 != 0);
    }
  }
  return;
}

// ProcessKeyFrame @ 1444dfc40

bool __thiscall
Audio::FDynamicsProcessor::ProcessKeyFrame
          (FDynamicsProcessor *this,float *param_1,float *param_2,bool param_3)

{
  float fVar1;
  EDynamicsProcessorChannelLinkMode EVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  int iVar15;
  longlong lVar16;
  float *pfVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  longlong local_res8;
  
  iVar9 = (this->EnvFollower).ArrayNum;
  iVar18 = (this->Gain).ArrayNum;
  lVar20 = (longlong)iVar18;
  if (0 < iVar9) {
    if (this->bKeyLowshelfEnabled != false) {
      FBiquadFilter::ProcessAudioFrame
                (&this->InputLowshelfFilter,param_1,
                 (float *)(this->DetectorOuts).AllocatorInstance.Data);
      param_1 = (float *)(this->DetectorOuts).AllocatorInstance.Data;
    }
    if (this->bKeyHighshelfEnabled != false) {
      FBiquadFilter::ProcessAudioFrame
                (&this->InputHighshelfFilter,param_1,
                 (float *)(this->DetectorOuts).AllocatorInstance.Data);
      param_1 = (float *)(this->DetectorOuts).AllocatorInstance.Data;
    }
  }
  uVar12 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar23 = this->InputGain;
  if (!param_3) {
    fVar23 = fVar23 * this->KeyGain;
  }
  uVar11 = 0;
  if (this->bKeyAuditionEnabled != false) {
    uVar13 = uVar11;
    if (3 < lVar20) {
      iVar18 = 2;
      lVar16 = (lVar20 - 4U >> 2) + 1;
      uVar13 = lVar16 * 4;
      pfVar17 = param_2 + 2;
      do {
        iVar15 = (int)uVar11;
        uVar11 = (ulonglong)(iVar15 + 4);
        pfVar17[-2] = fVar23 * *(float *)((longlong)param_1 + (longlong)(iVar15 % iVar9) * 4);
        iVar8 = iVar18 % iVar9;
        pfVar17[-1] = fVar23 * *(float *)((longlong)param_1 + (longlong)((iVar18 + -1) % iVar9) * 4)
        ;
        iVar15 = iVar18 + 1;
        iVar18 = iVar18 + 4;
        *pfVar17 = fVar23 * *(float *)((longlong)param_1 + (longlong)iVar8 * 4);
        pfVar17[1] = fVar23 * *(float *)((longlong)param_1 + (longlong)(iVar15 % iVar9) * 4);
        lVar16 = lVar16 + -1;
        pfVar17 = pfVar17 + 4;
      } while (lVar16 != 0);
    }
    for (; (longlong)uVar13 < lVar20; uVar13 = uVar13 + 1) {
      iVar18 = (int)uVar11;
      uVar11 = (ulonglong)(iVar18 + 1);
      param_2[uVar13] = fVar23 * *(float *)((longlong)param_1 + (longlong)(iVar18 % iVar9) * 4);
    }
    return false;
  }
  fVar22 = 0.0;
  uVar7 = 0;
  if (0 < iVar9) {
    local_res8 = 0;
    uVar13 = uVar11;
    uVar14 = uVar11;
    do {
      uVar19 = (uint)uVar14;
      uVar10 = 0;
      if ((int)uVar19 < (this->EnvFollower).ArrayNum) {
        uVar10 = ~uVar19 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      pFVar3 = (this->EnvFollower).AllocatorInstance.Data;
      iVar15 = *(int *)(pFVar3 + uVar13 + 0x1c);
      fVar21 = fVar23 * *(float *)((longlong)param_1 + local_res8);
      if (iVar15 == 0) {
        fVar21 = fVar21 * fVar21 * *(float *)(pFVar3 + uVar13 + 0x2c) +
                 *(float *)(pFVar3 + uVar13 + 0x28) * *(float *)(pFVar3 + uVar13 + 0x20);
        *(float *)(pFVar3 + uVar13 + 0x20) = fVar21;
      }
      else if (iVar15 == 1) {
        fVar21 = fVar21 * fVar21 * *(float *)(pFVar3 + uVar13 + 0x2c) +
                 *(float *)(pFVar3 + uVar13 + 0x28) * *(float *)(pFVar3 + uVar13 + 0x20);
        *(float *)(pFVar3 + uVar13 + 0x20) = fVar21;
        fVar21 = SQRT(fVar21);
      }
      else if (iVar15 == 2) {
        fVar21 = (float)((uint)fVar21 & uVar12);
      }
      else {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("!\"Enclosing block should never be called\"",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\EnvelopeFollower.h"
                           ,0x1bf,L"");
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
      }
      if (0.0 < *(float *)(pFVar3 + uVar13 + 0x18) - fVar21) {
        fVar1 = *(float *)(pFVar3 + uVar13 + 0xc);
      }
      else {
        fVar1 = *(float *)(pFVar3 + uVar13 + 4);
      }
      fVar21 = (*(float *)(pFVar3 + uVar13 + 0x18) - fVar21) * fVar1 + fVar21;
      *(float *)(pFVar3 + uVar13 + 0x18) = fVar21;
      uVar10 = uVar7;
      if ((int)uVar19 < (this->DetectorOuts).ArrayNum) {
        uVar10 = ~uVar19 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar14 = (ulonglong)(uVar19 + 1);
      uVar13 = uVar13 + 0x30;
      *(float *)((this->DetectorOuts).AllocatorInstance.Data + local_res8) = fVar21;
      local_res8 = local_res8 + 4;
    } while ((int)(uVar19 + 1) < iVar9);
  }
  fVar21 = __real_410af967;
  fVar23 = __real_322bcc77;
  EVar2 = this->LinkMode;
  if (EVar2 != Disabled) {
    if (EVar2 == Average) {
      uVar13 = uVar11;
      uVar14 = uVar11;
      if (0 < iVar9) {
        do {
          uVar10 = (uint)uVar14;
          uVar12 = uVar7;
          if ((int)uVar10 < (this->DetectorOuts).ArrayNum) {
            uVar12 = ~uVar10 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          fVar22 = fVar22 + *(float *)((this->DetectorOuts).AllocatorInstance.Data + uVar13);
          uVar13 = uVar13 + 4;
          uVar14 = (ulonglong)(uVar10 + 1);
        } while ((int)(uVar10 + 1) < iVar9);
      }
      fVar23 = fVar22 / (float)iVar9;
      if (fVar22 / (float)iVar9 <= __real_322bcc77) {
        fVar23 = __real_322bcc77;
      }
      fVar23 = logf(fVar23);
      fVar23 = ComputeGain(this,fVar23 * __real_410af967);
      uVar13 = uVar11;
      if (lVar20 < 1) {
        return true;
      }
      while( true ) {
        uVar10 = (uint)uVar13;
        uVar12 = uVar7;
        if ((int)uVar10 < (this->Gain).ArrayNum) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) break;
        *(float *)((this->Gain).AllocatorInstance.Data + uVar11 * 4) = fVar23;
        uVar11 = uVar11 + 1;
        uVar13 = (ulonglong)(uVar10 + 1);
        if (lVar20 <= (longlong)uVar11) {
          return true;
        }
      }
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
    if (EVar2 == Peak) {
      iVar9 = (this->DetectorOuts).ArrayNum;
      if (iVar9 != 0) {
        if ((iVar9 < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          uVar6 = (*pcVar4)();
          return (bool)uVar6;
        }
        uVar12 = 1;
        iVar9 = (this->DetectorOuts).ArrayNum;
        fVar22 = *(float *)(this->DetectorOuts).AllocatorInstance.Data;
        if (1 < iVar9) {
          lVar16 = 4;
          do {
            uVar10 = uVar7;
            if ((int)uVar12 < iVar9) {
              uVar10 = ~uVar12 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            uVar12 = uVar12 + 1;
            iVar9 = (this->DetectorOuts).ArrayNum;
            fVar23 = *(float *)((this->DetectorOuts).AllocatorInstance.Data + lVar16);
            lVar16 = lVar16 + 4;
            if (fVar23 <= fVar22) {
              fVar23 = fVar22;
            }
            fVar22 = fVar23;
          } while ((int)uVar12 < iVar9);
        }
      }
      if (fVar22 <= __real_322bcc77) {
        fVar22 = __real_322bcc77;
      }
      fVar23 = logf(fVar22);
      fVar23 = ComputeGain(this,fVar23 * __real_410af967);
      uVar13 = uVar11;
      if (lVar20 < 1) {
        return true;
      }
      while( true ) {
        uVar10 = (uint)uVar13;
        uVar12 = uVar7;
        if ((int)uVar10 < (this->Gain).ArrayNum) {
          uVar12 = ~uVar10 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) break;
        *(float *)((this->Gain).AllocatorInstance.Data + uVar11 * 4) = fVar23;
        uVar11 = uVar11 + 1;
        uVar13 = (ulonglong)(uVar10 + 1);
        if (lVar20 <= (longlong)uVar11) {
          return true;
        }
      }
      pcVar4 = (code *)swi(3);
      uVar6 = (*pcVar4)();
      return (bool)uVar6;
    }
  }
  if (0 < iVar18) {
    do {
      uVar10 = (int)uVar11 % iVar9;
      uVar12 = uVar7;
      if ((int)uVar10 < (this->DetectorOuts).ArrayNum) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      fVar22 = *(float *)((this->DetectorOuts).AllocatorInstance.Data + (longlong)(int)uVar10 * 4);
      if (fVar22 <= fVar23) {
        fVar22 = fVar23;
      }
      fVar22 = logf(fVar22);
      fVar22 = ComputeGain(this,fVar22 * fVar21);
      uVar12 = 0;
      if ((int)uVar10 < (this->Gain).ArrayNum) {
        uVar12 = ~uVar10 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        uVar6 = (*pcVar4)();
        return (bool)uVar6;
      }
      uVar12 = (int)uVar11 + 1;
      uVar11 = (ulonglong)uVar12;
      *(float *)((this->Gain).AllocatorInstance.Data + (longlong)(int)uVar10 * 4) = fVar22;
    } while ((int)uVar12 < iVar18);
  }
  return true;
}

// SetAnalogMode @ 1444e2520

void __thiscall Audio::FDynamicsProcessor::SetAnalogMode(FDynamicsProcessor *this,bool param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = 0;
  this->bIsAnalogMode = param_1;
  if (0 < (this->EnvFollower).ArrayNum) {
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->EnvFollower).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      FAttackRelease::SetAnalog
                ((FAttackRelease *)
                 ((this->EnvFollower).AllocatorInstance.Data + (longlong)(int)uVar4 * 0x30),param_1)
      ;
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < (this->EnvFollower).ArrayNum);
  }
  return;
}

// SetAttackTime @ 1444e2790

void __thiscall Audio::FDynamicsProcessor::SetAttackTime(FDynamicsProcessor *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  
  uVar8 = 0;
  this->AttackTimeMsec = param_1;
  fVar4 = __real_c58fe95d;
  fVar3 = __real_c47a992f;
  if (0 < (this->EnvFollower).ArrayNum) {
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->EnvFollower).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->EnvFollower).AllocatorInstance.Data;
      *(float *)(pFVar1 + lVar7 + 8) = param_1;
      if (param_1 <= 0.0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = fVar4;
        if (pFVar1[lVar7 + 0x14] != (FScriptContainerElement)0x0) {
          fVar9 = fVar3;
        }
        fVar9 = expf(fVar9 / (param_1 * *(float *)(pFVar1 + lVar7)));
      }
      *(float *)(pFVar1 + lVar7 + 4) = fVar9;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x30;
    } while ((int)uVar8 < (this->EnvFollower).ArrayNum);
  }
  return;
}

// SetChannelLinkMode @ 1444e3220

void __thiscall
Audio::FDynamicsProcessor::SetChannelLinkMode
          (FDynamicsProcessor *this,EDynamicsProcessorChannelLinkMode param_1)

{
  this->LinkMode = param_1;
  return;
}

// SetInputGain @ 1444e3da0

void __thiscall Audio::FDynamicsProcessor::SetInputGain(FDynamicsProcessor *this,float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_41200000,param_1 * __real_3d4ccccd);
  this->InputGain = fVar1;
  return;
}

// SetKeyAudition @ 1444e3e00

void __thiscall Audio::FDynamicsProcessor::SetKeyAudition(FDynamicsProcessor *this,bool param_1)

{
  this->bKeyAuditionEnabled = param_1;
  return;
}

// SetKeyGain @ 1444e3e10

void __thiscall Audio::FDynamicsProcessor::SetKeyGain(FDynamicsProcessor *this,float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_41200000,param_1 * __real_3d4ccccd);
  this->KeyGain = fVar1;
  return;
}

// SetKeyHighshelfCutoffFrequency @ 1444e3e50

void __thiscall
Audio::FDynamicsProcessor::SetKeyHighshelfCutoffFrequency(FDynamicsProcessor *this,float param_1)

{
  float fVar1;
  
  fVar1 = (this->InputHighshelfFilter).SampleRate * __real_3ee66666;
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  if (fVar1 <= __real_40a00000) {
    fVar1 = __real_40a00000;
  }
  if (fVar1 != (this->InputHighshelfFilter).Frequency) {
    (this->InputHighshelfFilter).Frequency = fVar1;
    FBiquadFilter::CalculateBiquadCoefficients(&this->InputHighshelfFilter);
    return;
  }
  return;
}

// SetKeyHighshelfEnabled @ 1444e3e90

void __thiscall
Audio::FDynamicsProcessor::SetKeyHighshelfEnabled(FDynamicsProcessor *this,bool param_1)

{
  this->bKeyHighshelfEnabled = param_1;
  return;
}

// SetKeyHighshelfGain @ 1444e3ea0

void __thiscall
Audio::FDynamicsProcessor::SetKeyHighshelfGain(FDynamicsProcessor *this,float param_1)

{
  Type TVar1;
  
  if (param_1 != (this->InputHighshelfFilter).GainDB) {
    TVar1 = (this->InputHighshelfFilter).FilterType;
    (this->InputHighshelfFilter).GainDB = param_1;
    if ((TVar1 == ParametricEQ) || (TVar1 - LowShelf < 2)) {
      FBiquadFilter::CalculateBiquadCoefficients(&this->InputHighshelfFilter);
      return;
    }
  }
  return;
}

// SetKeyLowshelfCutoffFrequency @ 1444e3ed0

void __thiscall
Audio::FDynamicsProcessor::SetKeyLowshelfCutoffFrequency(FDynamicsProcessor *this,float param_1)

{
  float fVar1;
  
  fVar1 = (this->InputLowshelfFilter).SampleRate * __real_3ee66666;
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  if (fVar1 <= __real_40a00000) {
    fVar1 = __real_40a00000;
  }
  if (fVar1 != (this->InputLowshelfFilter).Frequency) {
    (this->InputLowshelfFilter).Frequency = fVar1;
    FBiquadFilter::CalculateBiquadCoefficients(&this->InputLowshelfFilter);
    return;
  }
  return;
}

// SetKeyLowshelfEnabled @ 1444e3f00

void __thiscall
Audio::FDynamicsProcessor::SetKeyLowshelfEnabled(FDynamicsProcessor *this,bool param_1)

{
  this->bKeyLowshelfEnabled = param_1;
  return;
}

// SetKeyLowshelfGain @ 1444e3f10

void __thiscall
Audio::FDynamicsProcessor::SetKeyLowshelfGain(FDynamicsProcessor *this,float param_1)

{
  Type TVar1;
  
  if (param_1 != (this->InputLowshelfFilter).GainDB) {
    TVar1 = (this->InputLowshelfFilter).FilterType;
    (this->InputLowshelfFilter).GainDB = param_1;
    if ((TVar1 == ParametricEQ) || (TVar1 - LowShelf < 2)) {
      FBiquadFilter::CalculateBiquadCoefficients(&this->InputLowshelfFilter);
      return;
    }
  }
  return;
}

// SetKeyNumChannels @ 1444e3f40

void __thiscall Audio::FDynamicsProcessor::SetKeyNumChannels(FDynamicsProcessor *this,int param_1)

{
  int *piVar1;
  TArray<Audio::FInlineEnvelopeFollower,TSizedDefaultAllocator<32>_> *pTVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  Type TVar8;
  float fVar9;
  int iVar10;
  FInlineEnvelopeFollower *this_00;
  ulonglong uVar11;
  
  if (param_1 != (this->EnvFollower).ArrayNum) {
    pTVar2 = &this->EnvFollower;
    piVar1 = &(this->EnvFollower).ArrayMax;
    (this->EnvFollower).ArrayNum = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,4,0,&pTVar2->AllocatorInstance,0,piVar1);
    }
    fVar9 = __real_40a00000;
    if (0 < param_1) {
      uVar11 = (ulonglong)(uint)param_1;
      do {
        iVar10 = (this->EnvFollower).ArrayNum;
        fVar4 = this->SampleRate;
        fVar5 = this->AttackTimeMsec;
        fVar6 = this->ReleaseTimeMsec;
        TVar8 = this->EnvelopeFollowerPeakMode;
        bVar7 = this->bIsAnalogMode;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x430,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->EnvFollower).ArrayNum = iVar10 + 1;
        this_00 = (FInlineEnvelopeFollower *)
                  ((pTVar2->AllocatorInstance).Data + (longlong)iVar10 * 0x30);
        FAttackRelease::FAttackRelease((FAttackRelease *)this_00,fVar4,fVar5,fVar6,bVar7);
        this_00->Mode = TVar8;
        this_00->Value = 0.0;
        this_00->AnalysisValue = 0.0;
        this_00->AnalysisWindowMsec = 5.0;
        this_00->AnalysisFilterAlpha = 0.0;
        this_00->AnalysisFilterBeta = 1.0;
        FInlineEnvelopeFollower::SetAnalysisWindow(this_00,fVar9);
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  fVar4 = __real_469c4000;
  fVar9 = __real_40000000;
  if (param_1 != (this->InputLowshelfFilter).NumChannels) {
    FBiquadFilter::Init(&this->InputLowshelfFilter,this->SampleRate,param_1,LowShelf,__real_469c4000
                        ,__real_40000000,0.0);
  }
  if (param_1 != (this->InputHighshelfFilter).NumChannels) {
    FBiquadFilter::Init(&this->InputHighshelfFilter,this->SampleRate,param_1,HighShelf,fVar4,fVar9,
                        0.0);
  }
  piVar1 = &(this->DetectorOuts).ArrayNum;
  if (param_1 != *piVar1) {
    piVar3 = &(this->DetectorOuts).ArrayMax;
    (this->DetectorOuts).ArrayNum = 0;
    if (*piVar3 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->DetectorOuts).AllocatorInstance,0,piVar3);
    }
    iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,param_1,&(this->DetectorOuts).AllocatorInstance,piVar1,piVar3);
    memset((this->DetectorOuts).AllocatorInstance.Data + (longlong)iVar10 * 4,0,
           (longlong)param_1 << 2);
  }
  return;
}

// SetKneeBandwidth @ 1444e41e0

void __thiscall Audio::FDynamicsProcessor::SetKneeBandwidth(FDynamicsProcessor *this,float param_1)

{
  this->HalfKneeBandwidthDb = param_1 * __real_3f000000;
  CalculateKnee(this);
  return;
}

// SetLookaheadMsec @ 1444e4200

void __thiscall Audio::FDynamicsProcessor::SetLookaheadMsec(FDynamicsProcessor *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  if (__real_42c80000 <= param_1) {
    param_1 = __real_42c80000;
  }
  this->LookaheadDelayMsec = param_1;
  iVar3 = GetNumDelayFrames(this);
  uVar5 = 0;
  if (0 < (this->LookaheadDelay).ArrayNum) {
    do {
      uVar4 = 0;
      if ((int)uVar5 < (this->LookaheadDelay).ArrayNum) {
        uVar4 = ~uVar5 >> 0x1f;
      }
      if (uVar4 == 0) {
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
      }
      FIntegerDelay::SetDelayLengthSamples
                ((FIntegerDelay *)
                 ((this->LookaheadDelay).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x20),iVar3
                );
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (this->LookaheadDelay).ArrayNum);
  }
  return;
}

// SetNumChannels @ 1444e47d0

void __thiscall Audio::FDynamicsProcessor::SetNumChannels(FDynamicsProcessor *this,int param_1)

{
  TArray<Audio::FIntegerDelay,TSizedDefaultAllocator<32>_> *pTVar1;
  FIntegerDelay *pFVar2;
  code *pcVar3;
  float fVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  
  uVar9 = (ulonglong)(uint)param_1;
  if (param_1 != (this->Gain).ArrayNum) {
    piVar7 = &(this->Gain).ArrayMax;
    (this->Gain).ArrayNum = 0;
    if (*piVar7 < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&(this->Gain).AllocatorInstance,0,piVar7);
    }
    TArray<float,TSizedDefaultAllocator<32>_>::AddZeroed(&this->Gain,param_1);
  }
  fVar4 = __real_bf000000;
  if (param_1 != (this->LookaheadDelay).ArrayNum) {
    iVar8 = -((int)ROUND(__real_bf000000 - this->SampleRate * __real_3e4ccccd) >> 1);
    if (iVar8 < 1) {
      iVar8 = 1;
    }
    if ((__real_42c80000 < this->LookaheadDelayMsec) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("LookaheadDelayMsec <= MaxLookaheadMsec",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\DynamicsProcessor.cpp"
                           ,0x2be,
                           L"An lookahead delay of %fms exceeds maximum lookahead delay of %fms"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pTVar1 = &this->LookaheadDelay;
    piVar7 = &(this->LookaheadDelay).ArrayMax;
    pFVar2 = (FIntegerDelay *)(pTVar1->AllocatorInstance).Data;
    iVar6 = (this->LookaheadDelay).ArrayNum;
    iVar10 = -((int)ROUND(fVar4 - this->LookaheadDelayMsec * this->SampleRate * __real_3b03126f) >>
              1);
    if (iVar10 < 0) {
      iVar10 = 0;
    }
    if (*piVar7 < 0) {
      DestructItems<Audio::FIntegerDelay,int>(pFVar2,iVar6);
      (this->LookaheadDelay).ArrayNum = 0;
      if (*piVar7 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x20,8,0,&pTVar1->AllocatorInstance,0,piVar7);
      }
    }
    else {
      DestructItems<Audio::FIntegerDelay,int>(pFVar2,iVar6);
      (this->LookaheadDelay).ArrayNum = 0;
    }
    if (0 < param_1) {
      do {
        iVar6 = (this->LookaheadDelay).ArrayNum;
        if (iVar6 == *piVar7) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x820,&pTVar1->AllocatorInstance,piVar7);
        }
        (this->LookaheadDelay).ArrayNum = iVar6 + 1;
        FIntegerDelay::FIntegerDelay
                  ((FIntegerDelay *)((pTVar1->AllocatorInstance).Data + (longlong)iVar6 * 0x20),
                   iVar8,iVar10,0x20);
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
  }
  return;
}

// SetOutputGain @ 1444e4dc0

void __thiscall Audio::FDynamicsProcessor::SetOutputGain(FDynamicsProcessor *this,float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_41200000,param_1 * __real_3d4ccccd);
  this->OutputGain = fVar1;
  return;
}

// SetPeakMode @ 1444e4ef0

void __thiscall Audio::FDynamicsProcessor::SetPeakMode(FDynamicsProcessor *this,Type param_1)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = 0;
  this->EnvelopeFollowerPeakMode = param_1;
  if (0 < (this->EnvFollower).ArrayNum) {
    lVar5 = 0;
    do {
      uVar3 = 0;
      if ((int)uVar4 < (this->EnvFollower).ArrayNum) {
        uVar3 = ~uVar4 >> 0x1f;
      }
      if ((uVar3 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      uVar4 = uVar4 + 1;
      *(Type *)((this->EnvFollower).AllocatorInstance.Data + lVar5 + 0x1c) =
           this->EnvelopeFollowerPeakMode;
      lVar5 = lVar5 + 0x30;
    } while ((int)uVar4 < (this->EnvFollower).ArrayNum);
  }
  return;
}

// SetProcessingMode @ 1444e4fa0

void __thiscall Audio::FDynamicsProcessor::SetProcessingMode(FDynamicsProcessor *this,Type param_1)

{
  this->ProcessingMode = param_1;
  CalculateSlope(this);
  return;
}

// SetRatio @ 1444e5360

void __thiscall Audio::FDynamicsProcessor::SetRatio(FDynamicsProcessor *this,float param_1)

{
  if (param_1 <= __real_322bcc77) {
    param_1 = __real_322bcc77;
  }
  this->Ratio = param_1;
  CalculateSlope(this);
  return;
}

// SetReleaseTime @ 1444e5450

void __thiscall Audio::FDynamicsProcessor::SetReleaseTime(FDynamicsProcessor *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  float fVar9;
  
  uVar8 = 0;
  this->ReleaseTimeMsec = param_1;
  fVar4 = __real_c58fe95d;
  fVar3 = __real_c47a992f;
  if (0 < (this->EnvFollower).ArrayNum) {
    lVar7 = 0;
    do {
      uVar6 = 0;
      if ((int)uVar8 < (this->EnvFollower).ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pFVar1 = (this->EnvFollower).AllocatorInstance.Data;
      *(float *)(pFVar1 + lVar7 + 0x10) = param_1;
      if (param_1 <= 0.0) {
        fVar9 = 0.0;
      }
      else {
        fVar9 = fVar4;
        if (pFVar1[lVar7 + 0x14] != (FScriptContainerElement)0x0) {
          fVar9 = fVar3;
        }
        fVar9 = expf(fVar9 / (param_1 * *(float *)(pFVar1 + lVar7)));
      }
      *(float *)(pFVar1 + lVar7 + 0xc) = fVar9;
      uVar8 = uVar8 + 1;
      lVar7 = lVar7 + 0x30;
    } while ((int)uVar8 < (this->EnvFollower).ArrayNum);
  }
  return;
}

// SetThreshold @ 1444e5b90

void __thiscall Audio::FDynamicsProcessor::SetThreshold(FDynamicsProcessor *this,float param_1)

{
  this->ThresholdDb = param_1;
  CalculateKnee(this);
  return;
}

