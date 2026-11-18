// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 16

// FGrainDelay @ 1444ef0b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FGrainDelay * __thiscall
Audio::GrainDelay::FGrainDelay::FGrainDelay(FGrainDelay *this,float param_1,float param_2)

{
  float fVar1;
  
  (this->FreeGrains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeGrains).ArrayNum = 0;
  (this->FreeGrains).ArrayMax = 0;
  (this->ActiveGrains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveGrains).ArrayNum = 0;
  (this->ActiveGrains).ArrayMax = 0;
  (this->GrainPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GrainPool).ArrayNum = 0;
  (this->GrainPool).ArrayMax = 0;
  (this->GrainEnvelope).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GrainEnvelope).ArrayNum = 0;
  (this->GrainEnvelope).ArrayMax = 0;
  this->GrainEnvelopeType = Gaussian;
  (this->DelayPitchShifters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DelayPitchShifters).ArrayNum = 0;
  (this->DelayPitchShifters).ArrayMax = 0;
  FDelay::FDelay(&this->GrainDelayLine);
  this->FeedbackAmount = 0.0;
  this->LastFrame = 0.0;
  FDynamicsProcessor::FDynamicsProcessor(&this->DynamicsProcessor);
  fVar1 = __real_3f800000 / param_1;
  this->MaxGrains = 0x10;
  this->PitchShiftRatioBase = 1.0;
  this->SampleRate = param_1;
  if (param_2 <= 0.0) {
    param_2 = 0.0;
  }
  this->MaxDelaySeconds = param_2;
  FDelay::Init(&this->GrainDelayLine,param_1,fVar1 + param_2 + ___real_3dced917);
  Grain::GenerateEnvelopeData(&this->GrainEnvelope,0x400,this->GrainEnvelopeType);
  InitDynamicsProcessor(this);
  return this;
}

// ~FGrainDelay @ 1444f3830

void __thiscall Audio::GrainDelay::FGrainDelay::~FGrainDelay(FGrainDelay *this)

{
  FScriptContainerElement *pFVar1;
  
  FDynamicsProcessor::~FDynamicsProcessor(&this->DynamicsProcessor);
  FDelay::~FDelay(&this->GrainDelayLine);
  DestructItems<Audio::FTapDelayPitchShifter,int>
            ((FTapDelayPitchShifter *)(this->DelayPitchShifters).AllocatorInstance.Data,
             (this->DelayPitchShifters).ArrayNum);
  pFVar1 = (this->DelayPitchShifters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GrainEnvelope).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::GrainDelay::FGrainDelay::FGrain,int>
            ((FGrain *)(this->GrainPool).AllocatorInstance.Data,(this->GrainPool).ArrayNum);
  pFVar1 = (this->GrainPool).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ActiveGrains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FreeGrains).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// GetGrainDelayClamped @ 144503a90

float __thiscall
Audio::GrainDelay::FGrainDelay::GetGrainDelayClamped(FGrainDelay *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->MaxDelaySeconds * __real_447a0000;
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// GetGrainDelayRatioClamped @ 144503ac0

float __thiscall
Audio::GrainDelay::FGrainDelay::GetGrainDelayRatioClamped(FGrainDelay *this,float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= __real_bf800000) {
    param_1 = __real_bf800000;
  }
  return param_1;
}

// GetGrainDurationClamped @ 144503ae0

float __thiscall
Audio::GrainDelay::FGrainDelay::GetGrainDurationClamped(FGrainDelay *this,float param_1)

{
  float fVar1;
  
  fVar1 = this->MaxDelaySeconds * __real_447a0000;
  if (param_1 <= fVar1) {
    fVar1 = param_1;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}

// GetGrainPitchShiftClamped @ 144503b10

float __thiscall
Audio::GrainDelay::FGrainDelay::GetGrainPitchShiftClamped(FGrainDelay *this,float param_1)

{
  if (__real_42900000 <= param_1) {
    param_1 = __real_42900000;
  }
  if (param_1 <= __real_c2900000) {
    param_1 = __real_c2900000;
  }
  return param_1;
}

// GetGrainPitchShiftFrameRatio @ 144503b30

float __thiscall
Audio::GrainDelay::FGrainDelay::GetGrainPitchShiftFrameRatio(FGrainDelay *this,float param_1)

{
  float fVar1;
  
  fVar1 = powf(__real_40000000,param_1 * __real_3daaaaab);
  return fVar1;
}

// InitDynamicsProcessor @ 144508380

void __thiscall Audio::GrainDelay::FGrainDelay::InitDynamicsProcessor(FGrainDelay *this)

{
  FDynamicsProcessor *this_00;
  
  this_00 = &this->DynamicsProcessor;
  FDynamicsProcessor::Init(this_00,this->SampleRate,1);
  FDynamicsProcessor::SetLookaheadMsec(this_00,__real_40400000);
  FDynamicsProcessor::SetAttackTime(this_00,0.0);
  FDynamicsProcessor::SetReleaseTime(this_00,__real_41200000);
  FDynamicsProcessor::SetThreshold(this_00,__real_c0c00000);
  FDynamicsProcessor::SetKneeBandwidth(this_00,__real_40400000);
  FDynamicsProcessor::SetInputGain(this_00,0.0);
  FDynamicsProcessor::SetOutputGain(this_00,0.0);
  FDynamicsProcessor::SetAnalogMode(this_00,false);
  FDynamicsProcessor::SetPeakMode(this_00,Peak);
  FDynamicsProcessor::SetProcessingMode(this_00,Limiter);
  return;
}

// Reset @ 144516fc0

void __thiscall Audio::GrainDelay::FGrainDelay::Reset(FGrainDelay *this)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  
  FDelay::Reset(&this->GrainDelayLine);
  InitDynamicsProcessor(this);
  pTVar1 = &this->ActiveGrains;
  if (this == (FGrainDelay *)pTVar1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("(void*)this != (void*)&Source",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x96e,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar2 = (this->ActiveGrains).ArrayNum;
  if (iVar2 != 0) {
    iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,iVar2,(ForAnyElementType *)this,&(this->FreeGrains).ArrayNum,
                       &(this->FreeGrains).ArrayMax);
    memcpy((this->FreeGrains).AllocatorInstance.Data + (longlong)iVar5 * 4,
           (pTVar1->AllocatorInstance).Data,(longlong)iVar2 << 2);
  }
  (this->ActiveGrains).ArrayNum = 0;
  if ((this->ActiveGrains).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,&(this->ActiveGrains).ArrayMax);
  }
  return;
}

// SetFeedbackAmount @ 144519f30

void __thiscall Audio::GrainDelay::FGrainDelay::SetFeedbackAmount(FGrainDelay *this,float param_1)

{
  if (__real_3f733333 <= param_1) {
    param_1 = __real_3f733333;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->FeedbackAmount = param_1;
  return;
}

// SetGrainBasePitchShiftRatio @ 14451a3d0

void __thiscall
Audio::GrainDelay::FGrainDelay::SetGrainBasePitchShiftRatio(FGrainDelay *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  uint uVar14;
  FScriptContainerElement *pFVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  undefined1 local_res10 [8];
  
  fVar12 = __real_42c80000;
  fVar11 = __real_3a83126f;
  uVar10 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar9 = __real_447a0000;
  fVar7 = __real_3f800000;
  fVar6 = __real_322bcc77;
  if (__real_322bcc77 <
      (float)((uint)(param_1 - this->PitchShiftRatioBase) & __xmm_7fffffff7fffffff7fffffff7fffffff))
  {
    this->PitchShiftRatioBase = param_1;
    fVar8 = __real_41200000;
    pFVar15 = (this->ActiveGrains).AllocatorInstance.Data;
    iVar2 = (this->ActiveGrains).ArrayNum;
    pFVar1 = pFVar15 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->ActiveGrains).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar15 == pFVar1) break;
      uVar3 = *(uint *)pFVar15;
      lVar16 = (longlong)(int)uVar3;
      uVar14 = 0;
      if ((int)uVar3 < (this->GrainPool).ArrayNum) {
        uVar14 = ~uVar3 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->GrainPool).AllocatorInstance.Data;
      fVar17 = (*(float *)(pFVar4 + lVar16 * 0x48 + 8) * fVar9) / this->SampleRate;
      fVar18 = fVar17;
      if (fVar12 <= fVar17) {
        fVar18 = fVar12;
      }
      if (fVar18 <= fVar8) {
        fVar18 = fVar8;
      }
      if (fVar6 < (float)((uint)(fVar18 - *(float *)(pFVar4 + lVar16 * 0x48 + 0x34)) & uVar10)) {
        *(float *)(pFVar4 + lVar16 * 0x48 + 0x34) = fVar17;
        *(float *)(pFVar4 + lVar16 * 0x48 + 0x24) = fVar18;
        *(float *)(pFVar4 + lVar16 * 0x48 + 0x30) =
             fVar18 * *(float *)(pFVar4 + lVar16 * 0x48 + 0x28);
        fVar18 = *(float *)(pFVar4 + lVar16 * 0x48 + 0x1c);
        if (*(float *)(pFVar4 + lVar16 * 0x48 + 0x1c) <= fVar7) {
          fVar18 = fVar7;
        }
        *(float *)(pFVar4 + lVar16 * 0x48 + 0x44) =
             (fVar7 - *(float *)(pFVar4 + lVar16 * 0x48 + 0x3c)) /
             (fVar18 * fVar11 * *(float *)(pFVar4 + lVar16 * 0x48 + 0x18));
      }
      fVar18 = param_1 * *(float *)(pFVar4 + lVar16 * 0x48 + 0xc);
      if (fVar6 < (float)((uint)(fVar18 - *(float *)(pFVar4 + lVar16 * 0x48 + 0x3c)) & uVar10)) {
        fVar17 = *(float *)(pFVar4 + lVar16 * 0x48 + 0x1c);
        if (*(float *)(pFVar4 + lVar16 * 0x48 + 0x1c) <= fVar7) {
          fVar17 = fVar7;
        }
        *(float *)(pFVar4 + lVar16 * 0x48 + 0x3c) = fVar18;
        *(float *)(pFVar4 + lVar16 * 0x48 + 0x44) =
             (fVar7 - fVar18) / (fVar17 * fVar11 * *(float *)(pFVar4 + lVar16 * 0x48 + 0x18));
      }
      pFVar15 = pFVar15 + 4;
    }
  }
  return;
}

// SetGrainEnvelope @ 14451a760

void __thiscall
Audio::GrainDelay::FGrainDelay::SetGrainEnvelope(FGrainDelay *this,EEnvelope param_1)

{
  if (this->GrainEnvelopeType != param_1) {
    this->GrainEnvelopeType = param_1;
    Grain::GenerateEnvelopeData(&this->GrainEnvelope,0x400,param_1);
    return;
  }
  return;
}

// SetMaxGrains @ 14451b830

void __thiscall Audio::GrainDelay::FGrainDelay::SetMaxGrains(FGrainDelay *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 100;
  if (param_1 < 100) {
    iVar2 = param_1;
  }
  iVar1 = 1;
  if (1 < iVar2) {
    iVar1 = iVar2;
  }
  this->MaxGrains = iVar1;
  return;
}

// SpawnGrain @ 14451d4f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
Audio::GrainDelay::FGrainDelay::SpawnGrain
          (FGrainDelay *this,float param_1,float param_2,float param_3)

{
  TArray<Audio::GrainDelay::FGrainDelay::FGrain,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FGrain *this_00;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  float fVar10;
  uint local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined **local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  
  iVar7 = 1;
  if (1 < this->MaxGrains) {
    iVar7 = this->MaxGrains;
  }
  if ((this->ActiveGrains).ArrayNum < iVar7) {
    if ((this->FreeGrains).ArrayNum == 0) {
      pTVar1 = &this->GrainPool;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      local_88[0] = (this->GrainPool).ArrayNum;
      local_70 = &___7FTapDelayPitchShifter_Audio__6B_;
      local_80 = ___xmm_3f800000000000000000000000000000;
      uStack_78 = _UNK_150689648;
      local_68 = (undefined4)___xmm_0000000038d1b7170000000000000000;
      uStack_64 = (undefined4)((ulonglong)___xmm_0000000038d1b7170000000000000000 >> 0x20);
      uStack_60 = (undefined4)_UNK_150d5a3f8;
      uStack_5c = (undefined4)((ulonglong)_UNK_150d5a3f8 >> 0x20);
      local_48 = ___xmm_00000000000000003f80000000000000;
      uStack_40 = _UNK_150689508;
      local_58 = (undefined4)___xmm_00000000000000003f7fbe773a83126f;
      uStack_54 = (undefined4)((ulonglong)___xmm_00000000000000003f7fbe773a83126f >> 0x20);
      uStack_50 = (undefined4)_UNK_150d5a3e8;
      uStack_4c = (undefined4)((ulonglong)_UNK_150d5a3e8 >> 0x20);
      if ((pFVar3 <= (FScriptContainerElement *)&local_80) &&
         ((FScriptContainerElement *)&local_80 <
          pFVar3 + (longlong)(this->GrainPool).ArrayMax * 0x48)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      iVar7 = (this->GrainPool).ArrayNum;
      piVar2 = &(this->GrainPool).ArrayMax;
      if (iVar7 == *piVar2) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x848,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->GrainPool).ArrayNum = iVar7 + 1;
      lVar9 = (longlong)iVar7;
      pFVar3 = (pTVar1->AllocatorInstance).Data;
      *(undefined4 *)(pFVar3 + lVar9 * 0x48) = (undefined4)local_80;
      *(undefined4 *)(pFVar3 + lVar9 * 0x48 + 4) = local_80._4_4_;
      *(undefined4 *)(pFVar3 + lVar9 * 0x48 + 8) = (undefined4)uStack_78;
      *(undefined4 *)(pFVar3 + lVar9 * 0x48 + 0xc) = uStack_78._4_4_;
      *(undefined ***)(pFVar3 + lVar9 * 0x48 + 0x10) = &___7FTapDelayPitchShifter_Audio__6B_;
      *(undefined4 *)(pFVar3 + lVar9 * 0x48 + 0x18) = local_68;
      *(ulonglong *)(pFVar3 + lVar9 * 0x48 + 0x1c) = CONCAT44(uStack_60,uStack_64);
      *(ulonglong *)(pFVar3 + lVar9 * 0x48 + 0x1c + 8) = CONCAT44(local_58,uStack_5c);
      *(ulonglong *)(pFVar3 + lVar9 * 0x48 + 0x2c) = CONCAT44(uStack_50,uStack_54);
      *(undefined4 *)(pFVar3 + lVar9 * 0x48 + 0x34) = uStack_4c;
      *(undefined4 *)(pFVar3 + lVar9 * 0x48 + 0x38) = (undefined4)local_48;
      *(undefined4 *)(pFVar3 + lVar9 * 0x48 + 0x3c) = local_48._4_4_;
      *(undefined4 *)(pFVar3 + lVar9 * 0x48 + 0x40) = (undefined4)uStack_40;
      *(undefined4 *)(pFVar3 + lVar9 * 0x48 + 0x44) = uStack_40._4_4_;
      local_70 = &___7FTapDelayPitchShifter_Audio__6B_;
    }
    else {
      local_88[0] = TArray<int,TSizedDefaultAllocator<32>_>::Pop(&this->FreeGrains,Default);
    }
    uVar5 = local_88[0];
    uVar8 = 0;
    if ((int)local_88[0] < (this->GrainPool).ArrayNum) {
      uVar8 = ~local_88[0] >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    lVar9 = (longlong)(int)uVar5;
    fVar10 = param_2 * __real_3a83126f;
    if (__real_42c80000 <= param_2) {
      param_2 = __real_42c80000;
    }
    pFVar3 = (this->GrainPool).AllocatorInstance.Data;
    *(float *)(pFVar3 + lVar9 * 0x48) = param_1;
    *(undefined4 *)(pFVar3 + lVar9 * 0x48 + 4) = 0;
    fVar10 = fVar10 * this->SampleRate;
    this_00 = (FGrain *)(pFVar3 + lVar9 * 0x48);
    if (param_2 <= __real_41200000) {
      param_2 = __real_41200000;
    }
    this_00->PitchShiftRatioOffset = param_3;
    if (fVar10 <= __real_3f800000) {
      fVar10 = __real_3f800000;
    }
    this_00->DurationFrames = fVar10;
    (this_00->PitchShifter).SampleRate = this->SampleRate;
    (this_00->PitchShifter).CurrentDelayLength.CurrentValue = param_2;
    (this_00->PitchShifter).CurrentDelayLength.TargetValue = param_2;
    (this_00->PitchShifter).CurrentDelayLength.EaseFactor = 0.001;
    (this_00->PitchShifter).CurrentDelayLength.OneMinusEase = 0.999;
    (this_00->PitchShifter).CurrentTargetDelayLength = param_2;
    (this_00->PitchShifter).CurrentDelayLength.EaseTimesTarget = param_2 * __real_3a83126f;
    (this_00->PitchShifter).CurrentPitchShift = 0.0;
    (this_00->PitchShifter).CurrentPitchShiftRatio = 1.0;
    (this_00->PitchShifter).PhasorPhaseIncrement = 0.0;
    FGrain::SetGrainPitchShiftRatio(this_00,this->PitchShiftRatioBase,this->SampleRate);
    pFVar3 = (this->ActiveGrains).AllocatorInstance.Data;
    if ((pFVar3 <= (FScriptContainerElement *)local_88) &&
       ((FScriptContainerElement *)local_88 < pFVar3 + (longlong)(this->ActiveGrains).ArrayMax * 4))
    {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    iVar7 = (this->ActiveGrains).ArrayNum;
    piVar2 = &(this->ActiveGrains).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->ActiveGrains).AllocatorInstance,piVar2);
    }
    (this->ActiveGrains).ArrayNum = iVar7 + 1;
    *(uint *)((this->ActiveGrains).AllocatorInstance.Data + (longlong)iVar7 * 4) = local_88[0];
  }
  return;
}

// SynthesizeAudio @ 14451eb00

void __thiscall
Audio::GrainDelay::FGrainDelay::SynthesizeAudio
          (FGrainDelay *this,int param_1,int param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  longlong lVar2;
  float *pfVar3;
  float fVar4;
  
  lVar1 = (longlong)param_1;
  if (lVar1 < param_2 + 1) {
    lVar2 = (param_2 + 1) - lVar1;
    pfVar3 = param_4 + lVar1;
    do {
      FDelay::WriteDelayAndInc
                (&this->GrainDelayLine,
                 this->FeedbackAmount * this->LastFrame +
                 *(float *)(((longlong)param_3 - (longlong)param_4) + (longlong)pfVar3));
      fVar4 = SynthesizeFrame(this,&this->GrainDelayLine);
      this->LastFrame = fVar4;
      *pfVar3 = fVar4;
      pfVar3 = pfVar3 + 1;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
  }
  return;
}

// SynthesizeFrame @ 14451ebb0

float __thiscall Audio::GrainDelay::FGrainDelay::SynthesizeFrame(FGrainDelay *this,FDelay *param_1)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  uint uVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  int iVar16;
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res8 [2];
  uint local_78 [20];
  
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar7 = __real_3f800000;
  fVar18 = __real_322bcc77;
  uVar15 = (this->ActiveGrains).ArrayNum - 1;
  local_res8[0] = 0.0;
  if (-1 < (int)uVar15) {
    lVar13 = (longlong)(int)uVar15;
    lVar17 = lVar13 * 4;
    do {
      uVar10 = 0;
      if ((int)uVar15 < (this->ActiveGrains).ArrayNum) {
        uVar10 = ~uVar15 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        fVar18 = (float)(*pcVar6)();
        return fVar18;
      }
      local_78[0] = *(uint *)((this->ActiveGrains).AllocatorInstance.Data + lVar17);
      lVar14 = (longlong)(int)local_78[0];
      uVar10 = 0;
      if ((int)local_78[0] < (this->GrainPool).ArrayNum) {
        uVar10 = ~local_78[0] >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        fVar18 = (float)(*pcVar6)();
        return fVar18;
      }
      pFVar4 = (this->GrainPool).AllocatorInstance.Data;
      if (((float)(*(uint *)(pFVar4 + lVar14 * 0x48 + 8) & uVar8) <= fVar18) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("!FMath::IsNearlyZero(Grain.DurationFrames)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\GrainDelay.cpp"
                             ,0x9c,L""), bVar9)) {
        pcVar6 = (code *)swi(3);
        fVar18 = (float)(*pcVar6)();
        return fVar18;
      }
      iVar11 = (this->GrainEnvelope).ArrayNum;
      pFVar5 = (this->GrainEnvelope).AllocatorInstance.Data;
      fVar20 = *(float *)(pFVar4 + lVar14 * 0x48 + 4) / *(float *)(pFVar4 + lVar14 * 0x48 + 8);
      if (fVar7 <= *(float *)(pFVar4 + lVar14 * 0x48 + 4) / *(float *)(pFVar4 + lVar14 * 0x48 + 8))
      {
        fVar20 = fVar7;
      }
      fVar20 = fVar20 * (float)(iVar11 + -1);
      iVar16 = (int)fVar20;
      fVar2 = *(float *)(pFVar5 + (longlong)iVar16 * 4);
      iVar12 = iVar16 + 1;
      if (iVar11 < iVar16 + 1) {
        iVar12 = iVar11;
      }
      fVar3 = *(float *)(pFVar5 + (longlong)iVar12 * 4);
      fVar19 = FTapDelayPitchShifter::ReadDopplerShiftedTapFromDelay
                         ((FTapDelayPitchShifter *)(pFVar4 + lVar14 * 0x48 + 0x10),param_1,
                          *(float *)(pFVar4 + lVar14 * 0x48));
      local_res8[0] = local_res8[0] + ((fVar3 - fVar2) * (fVar20 - (float)iVar16) + fVar2) * fVar19;
      fVar20 = *(float *)(pFVar4 + lVar14 * 0x48 + 4);
      *(float *)(pFVar4 + lVar14 * 0x48 + 4) = fVar20 + fVar7;
      if (*(float *)(pFVar4 + lVar14 * 0x48 + 8) <= fVar20 + fVar7) {
        pFVar4 = (this->FreeGrains).AllocatorInstance.Data;
        if (((pFVar4 <= (FScriptContainerElement *)local_78) &&
            ((FScriptContainerElement *)local_78 <
             pFVar4 + (longlong)(this->FreeGrains).ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          fVar18 = (float)(*pcVar6)();
          return fVar18;
        }
        iVar11 = (this->FreeGrains).ArrayNum;
        piVar1 = &(this->FreeGrains).ArrayMax;
        if (iVar11 == *piVar1) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,(ForAnyElementType *)this,piVar1);
        }
        (this->FreeGrains).ArrayNum = iVar11 + 1;
        *(uint *)((this->FreeGrains).AllocatorInstance.Data + (longlong)iVar11 * 4) = local_78[0];
        uVar10 = 0;
        if ((int)uVar15 < (this->ActiveGrains).ArrayNum) {
          uVar10 = ~uVar15 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          fVar18 = (float)(*pcVar6)();
          return fVar18;
        }
        iVar11 = (this->ActiveGrains).ArrayNum;
        pFVar4 = (this->ActiveGrains).AllocatorInstance.Data;
        iVar12 = ~uVar15 + iVar11;
        if (1 < iVar12) {
          iVar12 = 1;
        }
        if (iVar12 != 0) {
          memmove(pFVar4 + lVar13 * 4,pFVar4 + (longlong)(iVar11 - iVar12) * 4,(longlong)iVar12 << 2
                 );
        }
        piVar1 = &(this->ActiveGrains).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      lVar13 = lVar13 + -1;
      lVar17 = lVar17 + -4;
      uVar15 = uVar15 - 1;
    } while (-1 < (int)uVar15);
  }
  FDynamicsProcessor::ProcessAudio
            (&this->DynamicsProcessor,local_res8,1,local_res8,(float *)0x0,(float *)0x0);
  return local_res8[0];
}

