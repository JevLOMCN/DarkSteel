// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 17

// FDelay @ 1444a35f0

FDelay * __thiscall Audio::FDelay::FDelay(FDelay *this)

{
  (this->EaseDelayMsec).Threshold = 0.0001;
  (this->EaseDelayMsec).TargetValue = 0.0;
  this->_padding_ = (longlong)&___7FDelay_Audio__6B_;
  (this->EaseDelayMsec).EaseFactor = 0.0001;
  (this->AudioBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AudioBuffer).ArrayNum = 0;
  (this->AudioBuffer).ArrayMax = 0;
  this->AudioBufferSize = 0;
  this->ReadIndex = 0;
  this->WriteIndex = 0;
  this->SampleRate = 0.0;
  this->DelayInSamples = 0.0;
  this->MaxBufferLengthSamples = 0;
  (this->EaseDelayMsec).CurrentValue = 0.0;
  (this->EaseDelayMsec).OneMinusEase = 0.9999;
  (this->EaseDelayMsec).EaseTimesTarget = 0.0;
  this->OutputAttenuation = 1.0;
  this->OutputAttenuationDB = 0.0;
  this->InputAttenuation = 1.0;
  this->InputFadeGainStep = 0.0;
  Reset(this);
  return this;
}

// ~FDelay @ 1444a6160

void __thiscall Audio::FDelay::~FDelay(FDelay *this)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  this->_padding_ = (longlong)&___7FDelay_Audio__6B_;
  pFVar1 = (this->AudioBuffer).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// Init @ 1444c21b0

void __thiscall Audio::FDelay::Init(FDelay *this,float param_1,float param_2)

{
  float fVar1;
  
  this->SampleRate = param_1;
  this->MaxBufferLengthSamples = (int)(param_1 * param_2 + __real_3f800000);
  fVar1 = param_2;
  if ((0.0 < FDelayInitialAllocationSecondsCVar) &&
     (fVar1 = FDelayInitialAllocationSecondsCVar, param_2 <= FDelayInitialAllocationSecondsCVar)) {
    fVar1 = param_2;
  }
  this->AudioBufferSize = (int)(fVar1 * param_1) + 1;
  Reset(this);
  return;
}

// ProcessAudioBuffer @ 1444dc9f0

void __thiscall
Audio::FDelay::ProcessAudioBuffer(FDelay *this,float *param_1,int param_2,float *param_3)

{
  uint uVar1;
  code *pcVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  fVar5 = __real_3a83126f;
  uVar4 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar3 = __real_3f800000;
  if (0 < param_2) {
    lVar10 = (longlong)param_3 - (longlong)param_1;
    lVar9 = (longlong)param_2;
    do {
      fVar12 = (this->EaseDelayMsec).CurrentValue;
      if ((this->EaseDelayMsec).Threshold <=
          (float)((uint)((this->EaseDelayMsec).TargetValue - fVar12) & uVar4)) {
        fVar12 = fVar12 * (this->EaseDelayMsec).OneMinusEase + (this->EaseDelayMsec).EaseTimesTarget
        ;
        (this->EaseDelayMsec).CurrentValue = fVar12;
        fVar12 = fVar12 * this->SampleRate * fVar5;
        fVar11 = (float)(this->MaxBufferLengthSamples + -1);
        if (fVar11 <= fVar12) {
          fVar12 = fVar11;
        }
        if (fVar12 <= 0.0) {
          fVar12 = 0.0;
        }
        this->DelayInSamples = fVar12;
        iVar8 = this->WriteIndex - (int)fVar12;
        this->ReadIndex = iVar8;
        if (iVar8 < 0) {
          this->ReadIndex = iVar8 + this->AudioBufferSize;
        }
      }
      if (this->DelayInSamples == 0.0) {
        fVar12 = *param_1;
      }
      else {
        fVar12 = Read(this);
      }
      uVar1 = this->WriteIndex;
      fVar13 = this->InputFadeGainStep + this->InputAttenuation;
      fVar11 = *param_1;
      if (fVar3 <= fVar13) {
        fVar13 = fVar3;
      }
      this->InputAttenuation = fVar13;
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      uVar7 = 0;
      if ((int)uVar1 < (this->AudioBuffer).ArrayNum) {
        uVar7 = ~uVar1 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      *(float *)((this->AudioBuffer).AllocatorInstance.Data + (longlong)(int)uVar1 * 4) =
           fVar13 * fVar11;
      this->WriteIndex = this->WriteIndex + 1;
      if (this->AudioBufferSize <= this->WriteIndex) {
        this->WriteIndex = 0;
      }
      this->ReadIndex = this->ReadIndex + 1;
      if (this->AudioBufferSize <= this->ReadIndex) {
        this->ReadIndex = 0;
      }
      *(float *)((longlong)param_1 + lVar10) = fVar12 * this->OutputAttenuation;
      param_1 = param_1 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
  }
  return;
}

// ProcessAudioSample @ 1444df320

float __thiscall Audio::FDelay::ProcessAudioSample(FDelay *this,float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = (this->EaseDelayMsec).CurrentValue;
  if ((this->EaseDelayMsec).Threshold <=
      (float)((uint)((this->EaseDelayMsec).TargetValue - fVar3) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar3 = fVar3 * (this->EaseDelayMsec).OneMinusEase + (this->EaseDelayMsec).EaseTimesTarget;
    (this->EaseDelayMsec).CurrentValue = fVar3;
    fVar3 = fVar3 * this->SampleRate * __real_3a83126f;
    fVar2 = (float)(this->MaxBufferLengthSamples + -1);
    if (fVar2 <= fVar3) {
      fVar3 = fVar2;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->DelayInSamples = fVar3;
    iVar1 = this->WriteIndex - (int)fVar3;
    this->ReadIndex = iVar1;
    if (iVar1 < 0) {
      this->ReadIndex = iVar1 + this->AudioBufferSize;
    }
  }
  fVar3 = param_1;
  if (this->DelayInSamples != 0.0) {
    fVar3 = Read(this);
  }
  WriteDelayAndInc(this,param_1);
  return fVar3 * this->OutputAttenuation;
}

// Read @ 1444e0a60

float __thiscall Audio::FDelay::Read(FDelay *this)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  
  uVar4 = this->ReadIndex;
  uVar3 = 0;
  if ((int)uVar4 < (this->AudioBuffer).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  fVar5 = *(float *)((this->AudioBuffer).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
  uVar4 = this->ReadIndex - 1;
  if ((int)uVar4 < 0) {
    uVar4 = this->AudioBufferSize - 1;
  }
  uVar3 = 0;
  if ((int)uVar4 < (this->AudioBuffer).ArrayNum) {
    uVar3 = ~uVar4 >> 0x1f;
  }
  if (uVar3 == 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  return (*(float *)((this->AudioBuffer).AllocatorInstance.Data + (longlong)(int)uVar4 * 4) - fVar5)
         * (this->DelayInSamples - (float)(int)this->DelayInSamples) + fVar5;
}

// ReadDelayAt @ 1444e0b70

float __thiscall Audio::FDelay::ReadDelayAt(FDelay *this,float param_1)

{
  float fVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  
  fVar6 = param_1 * this->SampleRate * __real_3a83126f;
  uVar4 = this->WriteIndex - (int)fVar6;
  if ((int)uVar4 < 0) {
    uVar4 = uVar4 + this->AudioBufferSize;
  }
  uVar5 = 0;
  if ((int)uVar4 < (this->AudioBuffer).ArrayNum) {
    uVar5 = ~uVar4 >> 0x1f;
  }
  if (uVar5 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  uVar5 = uVar4 - 1;
  fVar1 = *(float *)((this->AudioBuffer).AllocatorInstance.Data + (longlong)(int)uVar4 * 4);
  if ((int)uVar5 < 0) {
    uVar5 = this->AudioBufferSize - 1;
  }
  uVar4 = 0;
  if ((int)uVar5 < (this->AudioBuffer).ArrayNum) {
    uVar4 = ~uVar5 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  return (*(float *)((this->AudioBuffer).AllocatorInstance.Data + (longlong)(int)uVar5 * 4) - fVar1)
         * (fVar6 - (float)(int)fVar6) + fVar1;
}

// Reset @ 1444e1680

void __thiscall Audio::FDelay::Reset(FDelay *this)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  
  uVar3 = this->AudioBufferSize;
  if (-1 < (int)uVar3) {
    piVar1 = &(this->AudioBuffer).ArrayNum;
    piVar2 = &(this->AudioBuffer).ArrayMax;
    *piVar1 = 0;
    if ((this->AudioBuffer).ArrayMax < (int)uVar3) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar3,&(this->AudioBuffer).AllocatorInstance,0,piVar2);
    }
    iVar4 = this->AudioBufferSize;
    iVar5 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar4,&(this->AudioBuffer).AllocatorInstance,piVar1,piVar2);
    memset((this->AudioBuffer).AllocatorInstance.Data + (longlong)iVar5 * 4,0,(longlong)iVar4 << 2);
    this->ReadIndex = 0;
    this->WriteIndex = 0;
    fVar6 = (this->EaseDelayMsec).CurrentValue;
    if ((this->EaseDelayMsec).Threshold <=
        (float)((uint)((this->EaseDelayMsec).TargetValue - fVar6) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar6 = fVar6 * (this->EaseDelayMsec).OneMinusEase + (this->EaseDelayMsec).EaseTimesTarget;
      (this->EaseDelayMsec).CurrentValue = fVar6;
      this->DelayInSamples = fVar6 * this->SampleRate * __real_3a83126f;
    }
    fVar6 = (float)(this->MaxBufferLengthSamples + -1);
    if (this->DelayInSamples <= fVar6) {
      fVar6 = this->DelayInSamples;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
    this->DelayInSamples = fVar6;
    iVar4 = -(int)fVar6;
    this->ReadIndex = iVar4;
    if (iVar4 < 0) {
      this->ReadIndex = this->AudioBufferSize - (int)fVar6;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

// ResetWithFade @ 1444e1e40

void __thiscall Audio::FDelay::ResetWithFade(FDelay *this)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  TArrayView<float,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<float,int> local_48 [4];
  
  fVar5 = __real_3f800000;
  iVar9 = (int)(this->DelayInSamples - __real_3f800000);
  if (DelayResetFadeLengthSamplesCVar < iVar9) {
    iVar9 = DelayResetFadeLengthSamplesCVar;
  }
  if ((DelayResetFadeLengthSamplesCVar == 0) || (iVar9 < 2)) {
    Reset(this);
  }
  else {
    iVar10 = this->WriteIndex;
    fVar12 = __real_3f800000 / (float)iVar9;
    fVar11 = __real_bf800000 - fVar12;
    this->InputFadeGainStep = fVar12;
    this->InputAttenuation = fVar11;
    iVar7 = this->ReadIndex;
    lVar8 = (longlong)iVar7;
    if (iVar10 < iVar7) {
      iVar7 = this->AudioBufferSize - iVar7;
      pFVar1 = (this->AudioBuffer).AllocatorInstance.Data;
      if (iVar9 < iVar7) {
        if ((iVar7 - iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->AudioBuffer).AllocatorInstance.Data;
        if ((iVar10 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_78._12_4_ = uStack_9c;
        local_78.ArrayNum = iVar9;
        local_78.DataPtr = (float *)(pFVar1 + lVar8 * 4);
        ArrayFade(&local_78,fVar5,0.0);
        memset(pFVar1 + (iVar9 + lVar8) * 4,0,(longlong)(iVar7 - iVar9) << 2);
        memset(pFVar2,0,(longlong)iVar10 << 2);
      }
      else if (iVar7 < iVar9) {
        iVar9 = iVar9 - iVar7;
        if ((iVar7 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->AudioBuffer).AllocatorInstance.Data;
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar3 = (this->AudioBuffer).AllocatorInstance.Data;
        if ((iVar10 - iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_68._12_4_ = uStack_9c;
        local_68.ArrayNum = iVar7;
        local_68.DataPtr = (float *)(pFVar1 + lVar8 * 4);
        ArrayFade(&local_68,fVar5,(float)iVar9 * fVar12);
        local_58._12_4_ = uStack_8c;
        local_58.ArrayNum = iVar9;
        local_58.DataPtr = (float *)pFVar2;
        ArrayFade(&local_58,(float)iVar9 * fVar12,0.0);
        memset(pFVar3 + (longlong)iVar9 * 4,0,(longlong)(iVar10 - iVar9) << 2);
      }
      else {
        if ((iVar7 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar9 = this->WriteIndex;
        pFVar2 = (this->AudioBuffer).AllocatorInstance.Data;
        if ((iVar9 < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        local_48[0]._12_4_ = uStack_8c;
        local_48[0].ArrayNum = iVar7;
        local_48[0].DataPtr = (float *)(pFVar1 + lVar8 * 4);
        ArrayFade(local_48,fVar5,0.0);
        memset(pFVar2,0,(longlong)iVar9 << 2);
      }
    }
    else {
      pFVar1 = (this->AudioBuffer).AllocatorInstance.Data;
      iVar10 = (iVar10 - iVar7) - iVar9;
      if ((iVar10 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("ArrayNum >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xfe,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_88._12_4_ = uStack_9c;
      local_88.ArrayNum = iVar9;
      local_88.DataPtr = (float *)(pFVar1 + lVar8 * 4);
      ArrayFade(&local_88,fVar5,0.0);
      memset(pFVar1 + (iVar9 + lVar8) * 4,0,(longlong)iVar10 << 2);
    }
  }
  return;
}

// ResizeIfNeeded @ 1444e2210

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall Audio::FDelay::ResizeIfNeeded(FDelay *this,int param_1)

{
  TArray<float,TAlignedHeapAllocator<16>_> *this_00;
  int iVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  
  if (this->MaxBufferLengthSamples < param_1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_1909318095005023912>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\Delay.cpp"
                       ,0x158,"InNewNumSamples <= MaxBufferLengthSamples");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = this->AudioBufferSize;
  if (iVar1 < param_1) {
    this_00 = &this->AudioBuffer;
    iVar8 = this->MaxBufferLengthSamples;
    if (iVar1 * 2 < this->MaxBufferLengthSamples) {
      iVar8 = iVar1 * 2;
    }
    this->AudioBufferSize = iVar8;
    TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized(this_00,iVar8,Default);
    if (this->WriteIndex <= this->ReadIndex) {
      iVar8 = iVar1 - this->WriteIndex;
      uVar6 = this->AudioBufferSize - iVar1;
      this->ReadIndex = this->AudioBufferSize - iVar8;
      uVar5 = 0;
      if ((int)uVar6 < (this->AudioBuffer).ArrayNum) {
        uVar5 = ~uVar6 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar2 = (this_00->AllocatorInstance).Data;
      uVar5 = this->WriteIndex;
      uVar7 = 0;
      if ((int)uVar5 < (this->AudioBuffer).ArrayNum) {
        uVar7 = ~uVar5 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      memmove((this_00->AllocatorInstance).Data + (longlong)(int)uVar5 * 4,
              pFVar2 + (longlong)(int)uVar6 * 4,(longlong)iVar8 << 2);
    }
  }
  return;
}

// SetDelayMsec @ 1444e33a0

void __thiscall Audio::FDelay::SetDelayMsec(FDelay *this,float param_1)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_1 * this->SampleRate * __real_3a83126f;
  fVar2 = (float)(this->MaxBufferLengthSamples + -1);
  if (fVar2 <= fVar3) {
    fVar3 = fVar2;
  }
  this->DelayInSamples = fVar3;
  ResizeIfNeeded(this,(int)fVar3);
  fVar3 = (this->EaseDelayMsec).CurrentValue;
  if ((this->EaseDelayMsec).Threshold <=
      (float)((uint)((this->EaseDelayMsec).TargetValue - fVar3) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar3 = fVar3 * (this->EaseDelayMsec).OneMinusEase + (this->EaseDelayMsec).EaseTimesTarget;
    (this->EaseDelayMsec).CurrentValue = fVar3;
    this->DelayInSamples = fVar3 * this->SampleRate * __real_3a83126f;
  }
  fVar3 = (float)(this->MaxBufferLengthSamples + -1);
  if (this->DelayInSamples <= fVar3) {
    fVar3 = this->DelayInSamples;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  this->DelayInSamples = fVar3;
  iVar1 = this->WriteIndex - (int)fVar3;
  this->ReadIndex = iVar1;
  if (iVar1 < 0) {
    this->ReadIndex = iVar1 + this->AudioBufferSize;
  }
  return;
}

// SetDelaySamples @ 1444e3470

void __thiscall Audio::FDelay::SetDelaySamples(FDelay *this,float param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (float)(this->MaxBufferLengthSamples + -1);
  if (param_1 <= fVar2) {
    fVar2 = param_1;
  }
  this->DelayInSamples = fVar2;
  ResizeIfNeeded(this,(int)fVar2);
  fVar2 = (this->EaseDelayMsec).CurrentValue;
  if ((this->EaseDelayMsec).Threshold <=
      (float)((uint)((this->EaseDelayMsec).TargetValue - fVar2) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar2 = fVar2 * (this->EaseDelayMsec).OneMinusEase + (this->EaseDelayMsec).EaseTimesTarget;
    (this->EaseDelayMsec).CurrentValue = fVar2;
    this->DelayInSamples = fVar2 * this->SampleRate * __real_3a83126f;
  }
  fVar2 = (float)(this->MaxBufferLengthSamples + -1);
  if (this->DelayInSamples <= fVar2) {
    fVar2 = this->DelayInSamples;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  this->DelayInSamples = fVar2;
  iVar1 = this->WriteIndex - (int)fVar2;
  this->ReadIndex = iVar1;
  if (iVar1 < 0) {
    this->ReadIndex = iVar1 + this->AudioBufferSize;
  }
  return;
}

// SetEaseFactor @ 1444e3630

void __thiscall Audio::FDelay::SetEaseFactor(FDelay *this,float param_1)

{
  float fVar1;
  
  fVar1 = __real_3f800000 - param_1;
  (this->EaseDelayMsec).EaseFactor = param_1;
  (this->EaseDelayMsec).OneMinusEase = fVar1;
  return;
}

// SetEasedDelayMsec @ 1444e3650

void __thiscall Audio::FDelay::SetEasedDelayMsec(FDelay *this,float param_1,bool param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_1 * this->SampleRate * __real_3a83126f;
  fVar3 = (float)(this->MaxBufferLengthSamples + -1);
  if (fVar2 <= fVar3) {
    fVar3 = fVar2;
  }
  if (__real_322bcc77 < (float)((uint)(fVar3 - fVar2) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    ResizeIfNeeded(this,(int)fVar3);
    (this->EaseDelayMsec).TargetValue = param_1;
    (this->EaseDelayMsec).EaseTimesTarget = param_1 * (this->EaseDelayMsec).EaseFactor;
    if (param_2) {
      (this->EaseDelayMsec).CurrentValue = param_1;
      this->DelayInSamples = fVar3;
    }
    Update(this,param_2);
  }
  else {
    this->DelayInSamples = fVar3;
    ResizeIfNeeded(this,(int)fVar3);
    fVar3 = (this->EaseDelayMsec).CurrentValue;
    if ((this->EaseDelayMsec).Threshold <=
        (float)((uint)((this->EaseDelayMsec).TargetValue - fVar3) &
               __xmm_7fffffff7fffffff7fffffff7fffffff)) {
      fVar3 = fVar3 * (this->EaseDelayMsec).OneMinusEase + (this->EaseDelayMsec).EaseTimesTarget;
      (this->EaseDelayMsec).CurrentValue = fVar3;
      this->DelayInSamples = fVar3 * this->SampleRate * __real_3a83126f;
    }
    fVar3 = (float)(this->MaxBufferLengthSamples + -1);
    if (this->DelayInSamples <= fVar3) {
      fVar3 = this->DelayInSamples;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    this->DelayInSamples = fVar3;
    iVar1 = this->WriteIndex - (int)fVar3;
    this->ReadIndex = iVar1;
    if (iVar1 < 0) {
      this->ReadIndex = iVar1 + this->AudioBufferSize;
    }
  }
  return;
}

// SetOutputAttenuationDB @ 1444e4d60

void __thiscall Audio::FDelay::SetOutputAttenuationDB(FDelay *this,float param_1)

{
  float fVar1;
  
  fVar1 = __real_41200000;
  this->OutputAttenuationDB = param_1;
  fVar1 = powf(fVar1,param_1 * __real_3d4ccccd);
  this->OutputAttenuation = fVar1;
  return;
}

// Update @ 1444e7910

void __thiscall Audio::FDelay::Update(FDelay *this,bool param_1)

{
  int iVar1;
  float fVar2;
  
  fVar2 = (this->EaseDelayMsec).CurrentValue;
  if ((this->EaseDelayMsec).Threshold <=
      (float)((uint)((this->EaseDelayMsec).TargetValue - fVar2) &
             __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar2 = fVar2 * (this->EaseDelayMsec).OneMinusEase + (this->EaseDelayMsec).EaseTimesTarget;
    (this->EaseDelayMsec).CurrentValue = fVar2;
    this->DelayInSamples = fVar2 * this->SampleRate * __real_3a83126f;
  }
  else if (!param_1) {
    return;
  }
  fVar2 = (float)(this->MaxBufferLengthSamples + -1);
  if (this->DelayInSamples <= fVar2) {
    fVar2 = this->DelayInSamples;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  this->DelayInSamples = fVar2;
  iVar1 = this->WriteIndex - (int)fVar2;
  this->ReadIndex = iVar1;
  if (iVar1 < 0) {
    this->ReadIndex = iVar1 + this->AudioBufferSize;
  }
  return;
}

// WriteDelayAndInc @ 1444e84d0

void __thiscall Audio::FDelay::WriteDelayAndInc(FDelay *this,float param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  float fVar5;
  
  uVar1 = this->WriteIndex;
  fVar5 = this->InputFadeGainStep + this->InputAttenuation;
  if (__real_3f800000 <= fVar5) {
    fVar5 = __real_3f800000;
  }
  this->InputAttenuation = fVar5;
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  uVar4 = 0;
  if ((int)uVar1 < (this->AudioBuffer).ArrayNum) {
    uVar4 = ~uVar1 >> 0x1f;
  }
  if (uVar4 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(float *)((this->AudioBuffer).AllocatorInstance.Data + (longlong)(int)uVar1 * 4) =
       fVar5 * param_1;
  this->WriteIndex = this->WriteIndex + 1;
  if (this->AudioBufferSize <= this->WriteIndex) {
    this->WriteIndex = 0;
  }
  this->ReadIndex = this->ReadIndex + 1;
  if (this->AudioBufferSize <= this->ReadIndex) {
    this->ReadIndex = 0;
  }
  return;
}

