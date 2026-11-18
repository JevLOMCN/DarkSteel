// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 33

// FGranularSynth @ 1444ef1d0

FGranularSynth * __thiscall Audio::FGranularSynth::FGranularSynth(FGranularSynth *this)

{
  (this->GrainEnvelope).CurrentType = Count;
  this->SampleRate = 0;
  this->NumChannels = 0;
  (this->GrainEnvelope).GrainEnvelope.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GrainEnvelope).GrainEnvelope.ArrayNum = 0;
  (this->GrainEnvelope).GrainEnvelope.ArrayMax = 0;
  this->Mode = Synthesis;
  (this->GrainPool).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GrainPool).ArrayNum = 0;
  (this->GrainPool).ArrayMax = 0;
  (this->FreeGrains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeGrains).ArrayNum = 0;
  (this->FreeGrains).ArrayMax = 0;
  (this->ActiveGrains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActiveGrains).ArrayNum = 0;
  (this->ActiveGrains).ArrayMax = 0;
  (this->DeadGrains).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DeadGrains).ArrayNum = 0;
  (this->DeadGrains).ArrayMax = 0;
  this->NextSpawnFrame = 0;
  this->NoteDurationFrameCount = 0;
  this->NoteDurationFrameEnd = 0;
  (this->Pan).Modulation = 0.0;
  (this->Pan).Base = 0.0;
  (this->Volume).Modulation = 0.0;
  (this->Volume).Base = 0.0;
  (this->Pitch).Modulation = 0.0;
  (this->Pitch).Base = 0.0;
  (this->Frequency).Modulation = 0.0;
  (this->Frequency).Base = 0.0;
  (this->Duration).Modulation = 0.0;
  (this->Duration).Base = 0.0;
  this->GrainOscType = NumOscTypes;
  this->GrainEnvelopeType = Count;
  this->GrainsPerSecond = 1.0;
  this->GrainProbability = 1.0;
  this->CurrentSpawnFrameCount = 0;
  FEnvelope::FEnvelope(&this->GainEnv);
  FAmp::FAmp(&this->Amp);
  FDynamicsProcessor::FDynamicsProcessor(&this->DynamicsProcessor);
  (this->SampleBuffer).RawPCMData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SampleBuffer).RawPCMData.ArrayNum = 0;
  (this->SampleBuffer).RawPCMData.ArrayMax = 0;
  (this->SampleBuffer).NumSamples = 0;
  (this->SampleBuffer).NumFrames = 0;
  (this->SampleBuffer).NumChannels = 0;
  (this->SampleBuffer).SampleRate = 0;
  (this->SampleBuffer).SampleDuration = 0.0;
  this->CurrentPlayHeadFrame = 0.0;
  this->PlaybackSpeed = 1.0;
  this->NumActiveGrains = 0;
  this->bScrubMode = false;
  (this->SeekingPlayheadTimeFrame).StartValue = 0.0;
  (this->SeekingPlayheadTimeFrame).CurrentValue = 0.0;
  (this->SeekingPlayheadTimeFrame).DeltaValue = 0.0;
  (this->SeekingPlayheadTimeFrame).SampleRate = 44100.0;
  (this->SeekingPlayheadTimeFrame).DurationTicks = 0;
  (this->SeekingPlayheadTimeFrame).DefaultDurationTicks = 0;
  (this->SeekingPlayheadTimeFrame).CurrentTick = 0;
  (this->SeekingPlayheadTimeFrame).bIsInit = true;
  return this;
}

// ~FGranularSynth @ 1444f38e0

void __thiscall Audio::FGranularSynth::~FGranularSynth(FGranularSynth *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->SampleBuffer).RawPCMData.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FDynamicsProcessor::~FDynamicsProcessor(&this->DynamicsProcessor);
  FAmp::~FAmp(&this->Amp);
  FEnvelope::~FEnvelope(&this->GainEnv);
  pFVar1 = (this->DeadGrains).AllocatorInstance.Data;
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
  }
  DestructItems<Audio::FGrain,int>
            ((FGrain *)(this->GrainPool).AllocatorInstance.Data,(this->GrainPool).ArrayNum);
  pFVar1 = (this->GrainPool).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->GrainEnvelope).GrainEnvelope.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Generate @ 1444fc750

void __thiscall Audio::FGranularSynth::Generate(FGranularSynth *this,float *param_1,int param_2)

{
  float *pfVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  float fVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  int iVar12;
  FScriptContainerElement *pFVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  int *piVar17;
  float fVar18;
  undefined1 local_res8 [8];
  float *local_res10;
  undefined1 local_res18 [8];
  uint local_res20;
  int local_88;
  uint local_84;
  FScriptContainerElement *local_80;
  longlong local_78;
  FScriptContainerElement *local_70;
  
  lVar11 = (longlong)param_2;
  local_res10 = param_1;
  local_78 = lVar11;
  memset(param_1,0,lVar11 * 4);
  if ((((this->SampleBuffer).RawPCMData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) &&
      (cVar5 = (**(code **)((this->GainEnv)._padding_ + 0x38))(), cVar5 == '\0')) &&
     (this->NumActiveGrains = (this->ActiveGrains).ArrayNum, fVar4 = __real_38000100, 0 < lVar11)) {
    do {
      piVar17 = &(this->DeadGrains).ArrayMax;
      pTVar16 = &this->DeadGrains;
      if ((0.0 < this->GrainsPerSecond) &&
         (iVar9 = this->CurrentSpawnFrameCount, this->CurrentSpawnFrameCount = iVar9 + 1,
         this->NextSpawnFrame <= iVar9)) {
        this->CurrentSpawnFrameCount = 0;
        uVar7 = rand();
        if ((float)(uVar7 & 0x7fff) * fVar4 < this->GrainProbability) {
          SpawnGrain(this);
        }
      }
      (this->DeadGrains).ArrayNum = 0;
      if (*piVar17 < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,0,&pTVar16->AllocatorInstance,0,piVar17);
      }
      pFVar13 = (this->ActiveGrains).AllocatorInstance.Data;
      iVar9 = (this->ActiveGrains).ArrayNum;
      pFVar14 = pFVar13 + (longlong)iVar9 * 4;
      while( true ) {
        if ((this->ActiveGrains).ArrayNum != iVar9) {
          local_res18[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res18);
        }
        if (pFVar13 == pFVar14) break;
        local_84 = *(uint *)pFVar13;
        lVar11 = (longlong)(int)local_84;
        uVar7 = 0;
        if ((int)local_84 < (this->GrainPool).ArrayNum) {
          uVar7 = ~local_84 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        bVar6 = FGrain::GenerateFrame
                          ((FGrain *)((this->GrainPool).AllocatorInstance.Data + lVar11 * 0x250),
                           param_1);
        if (bVar6) {
          pFVar2 = (pTVar16->AllocatorInstance).Data;
          if (((pFVar2 <= (FScriptContainerElement *)&local_84) &&
              ((FScriptContainerElement *)&local_84 < pFVar2 + (longlong)*piVar17 * 4)) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar8 = (this->DeadGrains).ArrayNum;
          if (iVar8 == *piVar17) {
            iVar8 = UE::Core::Private::
                    ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (0x404,&pTVar16->AllocatorInstance,piVar17);
          }
          (this->DeadGrains).ArrayNum = iVar8 + 1;
          *(uint *)((pTVar16->AllocatorInstance).Data + (longlong)iVar8 * 4) = local_84;
        }
        pFVar13 = pFVar13 + 4;
      }
      FAmp::Update(&this->Amp);
      pfVar1 = param_1 + 1;
      FAmp::ProcessAudio(&this->Amp,*param_1,param_1[1],param_1,pfVar1);
      FDynamicsProcessor::ProcessAudio
                (&this->DynamicsProcessor,param_1,2,param_1,(float *)0x0,(float *)0x0);
      fVar18 = (float)(**(code **)((this->GainEnv)._padding_ + 0x50))(&this->GainEnv,0);
      *pfVar1 = fVar18 * *pfVar1;
      *param_1 = fVar18 * *param_1;
      local_res20 = (this->DeadGrains).ArrayNum;
      uVar10 = (ulonglong)(int)local_res20;
      pFVar14 = (pTVar16->AllocatorInstance).Data;
      local_70 = pFVar14 + uVar10 * 4;
      while( true ) {
        pFVar13 = local_70;
        local_80 = pFVar14;
        if ((this->DeadGrains).ArrayNum != (int)uVar10) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
          ;
        }
        if (pFVar14 == pFVar13) break;
        local_88 = *(int *)pFVar14;
        pFVar13 = (this->ActiveGrains).AllocatorInstance.Data;
        if (((pFVar13 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 <
             pFVar13 + (longlong)(this->ActiveGrains).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = (this->ActiveGrains).ArrayNum;
        if (iVar9 != 0) {
          pFVar14 = (this->ActiveGrains).AllocatorInstance.Data;
          iVar15 = 0;
          lVar11 = 0;
          bVar6 = *(int *)pFVar14 != local_88;
          iVar8 = 0;
          do {
            iVar12 = iVar8;
            do {
              lVar11 = lVar11 + 1;
              iVar12 = iVar12 + 1;
              if (iVar9 <= lVar11) break;
            } while (bVar6 == (*(int *)(pFVar14 + lVar11 * 4) != local_88));
            if (bVar6 != false) {
              if (iVar15 != iVar8) {
                memmove(pFVar14 + (longlong)iVar15 * 4,pFVar14 + (longlong)iVar8 * 4,
                        (longlong)(iVar12 - iVar8) << 2);
              }
              iVar15 = iVar15 + (iVar12 - iVar8);
            }
            bVar6 = (bool)(bVar6 ^ 1);
            iVar8 = iVar12;
          } while (lVar11 < iVar9);
          (this->ActiveGrains).ArrayNum = iVar15;
          pFVar14 = local_80;
        }
        pFVar13 = (this->FreeGrains).AllocatorInstance.Data;
        if (((pFVar13 <= (FScriptContainerElement *)&local_88) &&
            ((FScriptContainerElement *)&local_88 <
             pFVar13 + (longlong)(this->FreeGrains).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar9 = (this->FreeGrains).ArrayNum;
        piVar17 = &(this->FreeGrains).ArrayMax;
        if (iVar9 == *piVar17) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(this->FreeGrains).AllocatorInstance,piVar17);
        }
        (this->FreeGrains).ArrayNum = iVar9 + 1;
        pFVar14 = pFVar14 + 4;
        *(int *)((this->FreeGrains).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_88;
        uVar10 = (ulonglong)local_res20;
      }
      if (this->Mode == Granulation) {
        iVar9 = (this->SeekingPlayheadTimeFrame).DurationTicks;
        iVar8 = (this->SeekingPlayheadTimeFrame).CurrentTick;
        if (iVar8 < iVar9) {
          (this->SeekingPlayheadTimeFrame).CurrentTick = iVar8 + 1;
          fVar18 = ((float)iVar8 * (this->SeekingPlayheadTimeFrame).DeltaValue) / (float)iVar9 +
                   (this->SeekingPlayheadTimeFrame).StartValue;
          (this->SeekingPlayheadTimeFrame).CurrentValue = fVar18;
        }
        else {
          if (this->bScrubMode != false) goto LAB_1444fcca7;
          fVar18 = this->PlaybackSpeed + this->CurrentPlayHeadFrame;
          this->CurrentPlayHeadFrame = fVar18;
        }
        fVar18 = GetWrappedPlayheadPosition(this,fVar18);
        this->CurrentPlayHeadFrame = fVar18;
      }
LAB_1444fcca7:
      if ((this->NoteDurationFrameEnd != -1) &&
         (iVar9 = this->NoteDurationFrameCount, this->NoteDurationFrameCount = iVar9 + 1,
         this->NoteDurationFrameEnd <= iVar9)) {
        (**(code **)((this->GainEnv)._padding_ + 0x20))();
      }
      param_1 = local_res10 + 2;
      local_78 = local_78 + -1;
      local_res10 = param_1;
    } while (local_78 != 0);
  }
  return;
}

// GetCurrentPlayheadTime @ 1445037f0

float __thiscall Audio::FGranularSynth::GetCurrentPlayheadTime(FGranularSynth *this)

{
  return this->CurrentPlayHeadFrame;
}

// GetNumActiveGrains @ 144504120

int __thiscall Audio::FGranularSynth::GetNumActiveGrains(FGranularSynth *this)

{
  return this->NumActiveGrains;
}

// GetSampleDuration @ 144504910

float __thiscall Audio::FGranularSynth::GetSampleDuration(FGranularSynth *this)

{
  return (this->SampleBuffer).SampleDuration;
}

// GetWrappedPlayheadPosition @ 144504e00

float __thiscall
Audio::FGranularSynth::GetWrappedPlayheadPosition(FGranularSynth *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  fVar3 = (float)(this->SampleBuffer).NumFrames;
  if ((fVar3 <= 0.0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumFrames > 0.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\Granulator.cpp"
                         ,0x237,L""), bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar3 = (float)(*pcVar1)();
    return fVar3;
  }
  for (; param_1 < 0.0; param_1 = param_1 + fVar3) {
  }
  for (; fVar3 <= param_1; param_1 = param_1 - fVar3) {
  }
  return param_1;
}

// Init @ 1445053c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Audio::FGranularSynth::Init(FGranularSynth *this,int param_1,int param_2)

{
  FEnvelope *this_00;
  FDynamicsProcessor *this_01;
  float fVar1;
  uint uVar2;
  longlong lVar3;
  FGrain *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  undefined8 uVar10;
  double dVar11;
  double dVar12;
  TVector2<double> TVar13;
  int iVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  FGrain *pFVar18;
  FScriptContainerElement *pFVar19;
  undefined1 auVar24 [12];
  undefined1 extraout_var [12];
  undefined8 uVar25;
  undefined1 extraout_var_00 [12];
  undefined1 extraout_var_01 [12];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auStack_328 [32];
  undefined1 local_2d8 [4];
  int local_2d4 [3];
  undefined8 local_2c8;
  double dStack_2c0;
  int local_2b8;
  undefined1 local_2a8 [560];
  ForAnyElementType local_78;
  ForAnyElementType local_68;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStack_328;
  local_2b8 = param_2;
  if ((this->SampleRate != 0) &&
     (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                         ("SampleRate == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\Granulator.cpp"
                          ,0x192,L""), bVar15)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  this_00 = &this->GainEnv;
  this->SampleRate = param_1;
  this->NumChannels = 2;
  this->Mode = Granulation;
  FEnvelope::Init(this_00,(float)param_1,0,(FModulationMatrix *)0x0,true);
  FAmp::Init(&this->Amp,-1,(FModulationMatrix *)0x0);
  FAmp::SetGain(&this->Amp,__real_3f800000);
  this_01 = &this->DynamicsProcessor;
  FDynamicsProcessor::Init(this_01,(float)this->SampleRate,2);
  FDynamicsProcessor::SetLookaheadMsec(this_01,__real_40400000);
  FDynamicsProcessor::SetAttackTime(this_01,__real_40a00000);
  FDynamicsProcessor::SetReleaseTime(this_01,__real_42c80000);
  FDynamicsProcessor::SetThreshold(this_01,__real_c1700000);
  FDynamicsProcessor::SetRatio(this_01,__real_40a00000);
  FDynamicsProcessor::SetKneeBandwidth(this_01,__real_41200000);
  FDynamicsProcessor::SetInputGain(this_01,0.0);
  FDynamicsProcessor::SetOutputGain(this_01,0.0);
  FDynamicsProcessor::SetChannelLinkMode(this_01,Average);
  FDynamicsProcessor::SetAnalogMode(this_01,true);
  FDynamicsProcessor::SetPeakMode(this_01,Peak);
  FDynamicsProcessor::SetProcessingMode(this_01,Compressor);
  this->GrainsPerSecond = 20.0;
  auVar24 = ZEXT812(0);
  this->NextSpawnFrame = (int)((float)this->SampleRate * __real_3d4ccccd);
  this->GrainProbability = 1.0;
  if (this->GrainEnvelopeType != Gaussian) {
    this->GrainEnvelopeType = Gaussian;
    FGrainEnvelope::GenerateEnvelope(&this->GrainEnvelope,Gaussian,0x400);
    auVar24 = extraout_var;
  }
  uVar25 = auVar24._4_8_;
  if (this->GrainOscType != Saw) {
    this->GrainOscType = Saw;
    pFVar19 = (this->ActiveGrains).AllocatorInstance.Data;
    iVar17 = (this->ActiveGrains).ArrayNum;
    pFVar5 = pFVar19 + (longlong)iVar17 * 4;
    while( true ) {
      if ((this->ActiveGrains).ArrayNum != iVar17) {
        local_2d8[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_2d8);
        auVar24 = extraout_var_00;
      }
      uVar25 = auVar24._4_8_;
      if (pFVar19 == pFVar5) break;
      uVar2 = *(uint *)pFVar19;
      uVar16 = 0;
      if ((int)uVar2 < (this->GrainPool).ArrayNum) {
        uVar16 = ~uVar2 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         auVar24 = extraout_var_01, bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar19 = pFVar19 + 4;
      *(undefined4 *)
       ((this->GrainPool).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x250 + 0x200) = 1;
    }
  }
  dVar12 = __real_3fecccccc0000000;
  uVar10 = __real_bf847ae140000000;
  auVar24._4_8_ = uVar25;
  auVar24._0_4_ = local_2c8._4_4_;
  auVar20._0_8_ = auVar24._0_8_ << 0x20;
  auVar20._8_4_ = 0x40000000;
  auVar20._12_4_ = 0x3f847ae1;
  (this->Duration).Base = 0.1;
  *(undefined8 *)&(this->Duration).Range.field0_0x0 = uVar10;
  *(longlong *)((longlong)&(this->Duration).Range.field0_0x0 + 8) = auVar20._8_8_;
  local_2c8._4_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
  auVar7._4_8_ = auVar20._8_8_;
  auVar7._0_4_ = local_2c8._4_4_;
  auVar21._0_8_ = auVar7._0_8_ << 0x20;
  auVar21._8_4_ = 0xa0000000;
  auVar21._12_4_ = 0x3ff19999;
  (this->Pitch).Base = 1.0;
  (this->Pitch).Range.field0_0x0._s_0.X = dVar12;
  *(longlong *)((longlong)&(this->Pitch).Range.field0_0x0 + 8) = auVar21._8_8_;
  TVar13 = UE::Math::TVector2<double>::ZeroVector;
  (this->Frequency).Base = 440.0;
  local_2c8._4_4_ = (undefined4)((ulonglong)dVar12 >> 0x20);
  auVar8._4_8_ = auVar21._8_8_;
  auVar8._0_4_ = local_2c8._4_4_;
  auVar22._0_8_ = auVar8._0_8_ << 0x20;
  auVar22._8_4_ = 0xa0000000;
  auVar22._12_4_ = 0x3ff19999;
  (this->Volume).Base = 1.0;
  dVar11 = __real_bfb99999a0000000;
  lVar3 = this_00->_padding_;
  (this->Volume).Range.field0_0x0._s_0.X = dVar12;
  *(longlong *)((longlong)&(this->Volume).Range.field0_0x0 + 8) = auVar22._8_8_;
  (this->Pan).Base = 0.5;
  auVar9._4_8_ = auVar22._8_8_;
  auVar9._0_4_ = local_2c8._4_4_;
  auVar23._0_8_ = auVar9._0_8_ << 0x20;
  auVar23._8_4_ = 0xa0000000;
  auVar23._12_4_ = 0x3fb99999;
  dStack_2c0 = auVar23._8_8_;
  (this->Frequency).Range.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar13.field0_0x0;
  local_2c8 = dVar11;
  (this->Pan).Range.field0_0x0._s_0.X = dVar11;
  (this->Pan).Range.field0_0x0._s_0.Y = dStack_2c0;
  (**(code **)(lVar3 + 0x60))(this_00);
  (**(code **)(this_00->_padding_ + 0x68))(this_00);
  (**(code **)(this_00->_padding_ + 0x70))(this_00);
  (**(code **)(this_00->_padding_ + 0x78))(this_00);
  iVar14 = local_2b8;
  iVar17 = this->SampleRate;
  fVar1 = this->CurrentPlayHeadFrame;
  (this->SeekingPlayheadTimeFrame).bIsInit = true;
  (this->SeekingPlayheadTimeFrame).SampleRate = (float)iVar17;
  (this->SeekingPlayheadTimeFrame).bIsInit = false;
  (this->SeekingPlayheadTimeFrame).DurationTicks = 0;
  (this->SeekingPlayheadTimeFrame).CurrentValue = fVar1;
  (this->SeekingPlayheadTimeFrame).CurrentTick = 0;
  local_2d4[0] = 0;
  if (0 < local_2b8) {
    do {
      pFVar18 = FGrain::FGrain((FGrain *)local_2a8,local_2d4[0],this);
      pFVar4 = (FGrain *)(this->GrainPool).AllocatorInstance.Data;
      if (((pFVar4 <= pFVar18) && (pFVar18 < pFVar4 + (this->GrainPool).ArrayMax)) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar17 = (this->GrainPool).ArrayNum;
      if (iVar17 == (this->GrainPool).ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x250,8,&(this->GrainPool).AllocatorInstance,&(this->GrainPool).ArrayMax
                           );
      }
      (this->GrainPool).ArrayNum = iVar17 + 1;
      FGrain::FGrain((FGrain *)((this->GrainPool).AllocatorInstance.Data + (longlong)iVar17 * 0x250)
                     ,pFVar18);
      if (local_68.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data);
      }
      if (local_78.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data);
      }
      local_2a8._208_8_ = &___7FOsc_Audio__6B_;
      IOscBase::~IOscBase((IOscBase *)(local_2a8 + 0xd0));
      pFVar5 = (this->FreeGrains).AllocatorInstance.Data;
      if (((pFVar5 <= (FScriptContainerElement *)local_2d4) &&
          ((FScriptContainerElement *)local_2d4 < pFVar5 + (longlong)(this->FreeGrains).ArrayMax * 4
          )) && (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar15)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar17 = (this->FreeGrains).ArrayNum;
      if (iVar17 == (this->FreeGrains).ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&(this->FreeGrains).AllocatorInstance,&(this->FreeGrains).ArrayMax
                           );
      }
      (this->FreeGrains).ArrayNum = iVar17 + 1;
      *(int *)((this->FreeGrains).AllocatorInstance.Data + (longlong)iVar17 * 4) = local_2d4[0];
      local_2d4[0] = local_2d4[0] + 1;
    } while (local_2d4[0] < iVar14);
  }
  return;
}

// LoadSampleBuffer @ 144509150

void __thiscall
Audio::FGranularSynth::LoadSampleBuffer(FGranularSynth *this,TSampleBuffer<short> *param_1)

{
  int *piVar1;
  int *piVar2;
  TSampleBuffer<short> *pTVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = param_1->NumSamples;
  pTVar3 = &this->SampleBuffer;
  (this->SampleBuffer).NumSamples = uVar4;
  (this->SampleBuffer).NumFrames = param_1->NumFrames;
  (this->SampleBuffer).NumChannels = param_1->NumChannels;
  (this->SampleBuffer).SampleRate = param_1->SampleRate;
  (this->SampleBuffer).SampleDuration = param_1->SampleDuration;
  if (-1 < (int)uVar4) {
    iVar5 = (this->SampleBuffer).RawPCMData.ArrayMax;
    piVar1 = &(this->SampleBuffer).RawPCMData.ArrayMax;
    piVar2 = &(this->SampleBuffer).RawPCMData.ArrayNum;
    *piVar2 = 0;
    if (iVar5 < (int)uVar4) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,uVar4,(ForAnyElementType *)pTVar3,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(this->SampleBuffer).NumSamples,(ForAnyElementType *)pTVar3,piVar2,piVar1);
    memcpy((pTVar3->RawPCMData).AllocatorInstance.Data,(param_1->RawPCMData).AllocatorInstance.Data,
           (longlong)(this->SampleBuffer).NumSamples * 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
}

// NoteOff @ 14450b100

void __thiscall Audio::FGranularSynth::NoteOff(FGranularSynth *this,uint param_1,bool param_2)

{
  longlong lVar1;
  
  lVar1 = (this->GainEnv)._padding_;
  if (param_2) {
                    /* WARNING: Could not recover jumptable at 0x00014450b10f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x30))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014450b113. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x20))();
  return;
}

// NoteOn @ 14450b120

void __thiscall
Audio::FGranularSynth::NoteOn(FGranularSynth *this,uint param_1,float param_2,float param_3)

{
  TVector2<double> TVar1;
  int iVar2;
  float fVar3;
  
  (**(code **)((this->GainEnv)._padding_ + 8))();
  FAmp::Reset(&this->Amp);
  fVar3 = __real_3f800000;
  FAmp::SetGain(&this->Amp,__real_3f800000);
  FAmp::SetVelocity(&this->Amp,param_2);
  FAmp::SetGainEnv(&this->Amp,fVar3);
  FAmp::Update(&this->Amp);
  this->CurrentSpawnFrameCount = this->NextSpawnFrame;
  if (param_3 <= 0.0) {
    iVar2 = -1;
  }
  else {
    this->NoteDurationFrameCount = 0;
    iVar2 = (int)((float)this->SampleRate * param_3);
  }
  this->NoteDurationFrameEnd = iVar2;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  fVar3 = powf(__real_40000000,((float)param_1 - __real_428a0000) * __real_3daaaaab);
  fVar3 = fVar3 * __real_43dc0000;
  (this->Frequency).Range.field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->Frequency).Base = fVar3;
  return;
}

// SeekTime @ 144518a90

void __thiscall
Audio::FGranularSynth::SeekTime(FGranularSynth *this,float param_1,float param_2,Type param_3)

{
  float *pfVar1;
  float fVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  
  if ((this->SampleBuffer).RawPCMData.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (param_3 == FromBeginning) {
      fVar6 = (float)this->SampleRate * param_1;
    }
    else if (param_3 == FromEnd) {
      fVar6 = (float)(this->SampleBuffer).NumFrames;
      if ((fVar6 <= 0.0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumFrames > 0.0f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\Granulator.cpp"
                             ,0x217,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar6 = fVar6 - (float)this->SampleRate * param_1;
    }
    else {
      fVar6 = (float)this->SampleRate * param_1 + this->CurrentPlayHeadFrame;
    }
    if (param_2 == 0.0) {
      fVar6 = GetWrappedPlayheadPosition(this,fVar6);
      this->CurrentPlayHeadFrame = fVar6;
      if ((this->SeekingPlayheadTimeFrame).bIsInit != false) {
        (this->SeekingPlayheadTimeFrame).bIsInit = false;
      }
      (this->SeekingPlayheadTimeFrame).DurationTicks = 0;
      (this->SeekingPlayheadTimeFrame).CurrentValue = fVar6;
      (this->SeekingPlayheadTimeFrame).CurrentTick = 0;
    }
    else if ((this->SeekingPlayheadTimeFrame).bIsInit == false) {
      iVar5 = (int)(param_2 * (this->SeekingPlayheadTimeFrame).SampleRate);
      (this->SeekingPlayheadTimeFrame).DurationTicks = iVar5;
      (this->SeekingPlayheadTimeFrame).CurrentTick = 0;
      pfVar1 = &(this->SeekingPlayheadTimeFrame).CurrentValue;
      if (iVar5 == 0) {
        *pfVar1 = fVar6;
      }
      else {
        fVar2 = *pfVar1;
        (this->SeekingPlayheadTimeFrame).StartValue = fVar2;
        (this->SeekingPlayheadTimeFrame).DeltaValue = fVar6 - fVar2;
      }
    }
    else {
      (this->SeekingPlayheadTimeFrame).bIsInit = false;
      (this->SeekingPlayheadTimeFrame).DurationTicks = 0;
      (this->SeekingPlayheadTimeFrame).CurrentTick = 0;
      (this->SeekingPlayheadTimeFrame).CurrentValue = fVar6;
    }
  }
  return;
}

// SetAttackTime @ 144518c70

void __thiscall Audio::FGranularSynth::SetAttackTime(FGranularSynth *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144518c7a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->GainEnv)._padding_ + 0x60))();
  return;
}

// SetDecayTime @ 144519c50

void __thiscall Audio::FGranularSynth::SetDecayTime(FGranularSynth *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000144519c5a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->GainEnv)._padding_ + 0x68))();
  return;
}

// SetGrainDuration @ 14451a630

void __thiscall
Audio::FGranularSynth::SetGrainDuration
          (FGranularSynth *this,float param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  (this->Duration).Base = param_1;
  (this->Duration).Range.field0_0x0._s_0.X = dVar1;
  (this->Duration).Range.field0_0x0._s_0.Y = dVar2;
  return;
}

// SetGrainDurationScale @ 14451a650

void __thiscall Audio::FGranularSynth::SetGrainDurationScale(FGranularSynth *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  float fVar8;
  undefined1 local_res10 [8];
  
  if (param_1 != (this->Duration).Modulation) {
    (this->Duration).Modulation = param_1;
    pFVar7 = (this->ActiveGrains).AllocatorInstance.Data;
    iVar2 = (this->ActiveGrains).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->ActiveGrains).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar7 == pFVar1) break;
      uVar3 = *(uint *)pFVar7;
      uVar6 = 0;
      if ((int)uVar3 < (this->GrainPool).ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar8 = param_1;
      if (param_1 <= 0.0) {
        fVar8 = 0.0;
      }
      pFVar7 = pFVar7 + 4;
      *(float *)((this->GrainPool).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x250 + 0x220) =
           fVar8;
    }
  }
  return;
}

// SetGrainEnvelopeType @ 14451a780

void __thiscall
Audio::FGranularSynth::SetGrainEnvelopeType(FGranularSynth *this,EGrainEnvelopeType param_1)

{
  if (param_1 != this->GrainEnvelopeType) {
    this->GrainEnvelopeType = param_1;
    FGrainEnvelope::GenerateEnvelope(&this->GrainEnvelope,param_1,0x400);
    return;
  }
  return;
}

// SetGrainFrequency @ 14451a7a0

void __thiscall
Audio::FGranularSynth::SetGrainFrequency
          (FGranularSynth *this,float param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  (this->Frequency).Base = param_1;
  (this->Frequency).Range.field0_0x0._s_0.X = dVar1;
  (this->Frequency).Range.field0_0x0._s_0.Y = dVar2;
  return;
}

// SetGrainFrequencyModulation @ 14451a7c0

void __thiscall
Audio::FGranularSynth::SetGrainFrequencyModulation(FGranularSynth *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  longlong lVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  
  if (param_1 != (this->Frequency).Modulation) {
    (this->Frequency).Modulation = param_1;
    iVar2 = (this->ActiveGrains).ArrayNum;
    pFVar9 = (this->ActiveGrains).AllocatorInstance.Data;
    pFVar1 = pFVar9 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->ActiveGrains).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar1) break;
      uVar3 = *(uint *)pFVar9;
      uVar7 = 0;
      if ((int)uVar3 < (this->GrainPool).ArrayNum) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->GrainPool).AllocatorInstance.Data;
      lVar8 = (longlong)(int)uVar3 * 0x250;
      if (param_1 != *(float *)(pFVar4 + lVar8 + 0xf0)) {
        *(float *)(pFVar4 + lVar8 + 0xf0) = param_1;
        pFVar4[lVar8 + 0x1d9] = (FScriptContainerElement)0x1;
      }
      pFVar9 = pFVar9 + 4;
    }
  }
  return;
}

// SetGrainOscType @ 14451a8c0

void __thiscall Audio::FGranularSynth::SetGrainOscType(FGranularSynth *this,Type param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  if (param_1 != this->GrainOscType) {
    this->GrainOscType = param_1;
    iVar2 = (this->ActiveGrains).ArrayNum;
    pFVar7 = (this->ActiveGrains).AllocatorInstance.Data;
    pFVar1 = pFVar7 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->ActiveGrains).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar7 == pFVar1) break;
      uVar3 = *(uint *)pFVar7;
      uVar6 = 0;
      if ((int)uVar3 < (this->GrainPool).ArrayNum) {
        uVar6 = ~uVar3 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar7 = pFVar7 + 4;
      *(Type *)((this->GrainPool).AllocatorInstance.Data + (longlong)(int)uVar3 * 0x250 + 0x200) =
           param_1;
    }
  }
  return;
}

// SetGrainPan @ 14451a9a0

void __thiscall
Audio::FGranularSynth::SetGrainPan(FGranularSynth *this,float param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  (this->Pan).Base = param_1;
  (this->Pan).Range.field0_0x0._s_0.X = dVar1;
  (this->Pan).Range.field0_0x0._s_0.Y = dVar2;
  return;
}

// SetGrainPanModulation @ 14451a9c0

void __thiscall Audio::FGranularSynth::SetGrainPanModulation(FGranularSynth *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  longlong lVar5;
  code *pcVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  bool bVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  float fVar18;
  float fVar19;
  undefined1 local_res10 [8];
  
  fVar13 = __real_4016cbe4;
  fVar12 = __real_3fa2f983;
  fVar11 = __real_3ecf817a;
  fVar10 = __real_3f490fdb;
  fVar9 = __real_bf800000;
  uVar8 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar7 = __real_3f800000;
  if (param_1 != (this->Pan).Modulation) {
    (this->Pan).Modulation = param_1;
    pFVar17 = (this->ActiveGrains).AllocatorInstance.Data;
    iVar2 = (this->ActiveGrains).ArrayNum;
    pFVar1 = pFVar17 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->ActiveGrains).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar17 == pFVar1) break;
      uVar3 = *(uint *)pFVar17;
      uVar15 = 0;
      if ((int)uVar3 < (this->GrainPool).ArrayNum) {
        uVar15 = ~uVar3 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (this->GrainPool).AllocatorInstance.Data;
      lVar16 = (longlong)(int)uVar3 * 0x250;
      fVar18 = (param_1 + fVar7) * *(float *)(pFVar4 + lVar16 + 0x28);
      *(float *)(pFVar4 + lVar16 + 0x21c) = fVar18;
      if (fVar18 < fVar9) {
        fVar18 = fVar18 + fVar7;
        *(float *)(pFVar4 + lVar16 + 0x21c) = fVar18;
      }
      if (fVar7 < fVar18) {
        *(float *)(pFVar4 + lVar16 + 0x21c) = fVar18 - fVar7;
      }
      if ((*(int *)(pFVar4 + lVar16 + 0x238) < 2) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)(pFVar4 + lVar16 + 0x230);
      if ((*(int *)(pFVar4 + lVar16 + 0x238) < 1) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar17 = pFVar17 + 4;
      fVar19 = *(float *)(pFVar4 + lVar16 + 0x21c) * fVar10;
      fVar18 = fVar19 + fVar10;
      fVar19 = fVar19 + fVar13;
      fVar19 = (fVar12 - (float)((uint)fVar19 & uVar8) * fVar11) * fVar19;
      if (fVar7 <= fVar19) {
        fVar19 = fVar7;
      }
      if (fVar19 <= 0.0) {
        fVar19 = 0.0;
      }
      **(float **)(pFVar4 + lVar16 + 0x230) = fVar19;
      fVar18 = (fVar12 - (float)((uint)fVar18 & uVar8) * fVar11) * fVar18;
      if (fVar7 <= fVar18) {
        fVar18 = fVar7;
      }
      if (fVar18 <= 0.0) {
        fVar18 = 0.0;
      }
      *(float *)(lVar5 + 4) = fVar18;
    }
  }
  return;
}

// SetGrainPitch @ 14451acc0

void __thiscall
Audio::FGranularSynth::SetGrainPitch(FGranularSynth *this,float param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  (this->Pitch).Base = param_1;
  (this->Pitch).Range.field0_0x0._s_0.X = dVar1;
  (this->Pitch).Range.field0_0x0._s_0.Y = dVar2;
  return;
}

// SetGrainPitchModulation @ 14451ace0

void __thiscall Audio::FGranularSynth::SetGrainPitchModulation(FGranularSynth *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  float fVar8;
  float _X;
  float fVar9;
  bool bVar10;
  uint uVar11;
  FScriptContainerElement *pFVar12;
  float fVar13;
  undefined1 local_res10 [8];
  
  fVar9 = __real_3daaaaab;
  fVar8 = __real_3f800000;
  if (param_1 != (this->Pitch).Modulation) {
    (this->Pitch).Modulation = param_1;
    _X = __real_40000000;
    pFVar12 = (this->ActiveGrains).AllocatorInstance.Data;
    iVar4 = (this->ActiveGrains).ArrayNum;
    pFVar1 = pFVar12 + (longlong)iVar4 * 4;
    while( true ) {
      if ((this->ActiveGrains).ArrayNum != iVar4) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar12 == pFVar1) break;
      uVar5 = *(uint *)pFVar12;
      uVar11 = 0;
      if ((int)uVar5 < (this->GrainPool).ArrayNum) {
        uVar11 = ~uVar5 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar6 = (this->GrainPool).AllocatorInstance.Data;
      fVar13 = fVar8;
      if (param_1 != 0.0) {
        fVar13 = powf(_X,param_1 * fVar9);
      }
      fVar2 = *(float *)(pFVar6 + (longlong)(int)uVar5 * 0x250 + 0x1c);
      *(float *)(pFVar6 + (longlong)(int)uVar5 * 0x250 + 0x5c) = fVar13 * fVar2;
      fVar3 = *(float *)(pFVar6 + (longlong)(int)uVar5 * 0x250 + 0x58);
      if (pFVar6[(longlong)(int)uVar5 * 0x250 + 0x7c] != (FScriptContainerElement)0x0) {
        pFVar6[(longlong)(int)uVar5 * 0x250 + 0x7c] = (FScriptContainerElement)0x0;
      }
      *(undefined4 *)(pFVar6 + (longlong)(int)uVar5 * 0x250 + 0x70) = 0;
      pFVar12 = pFVar12 + 4;
      *(float *)(pFVar6 + (longlong)(int)uVar5 * 0x250 + 100) = fVar13 * fVar2 * fVar3;
      *(undefined4 *)(pFVar6 + (longlong)(int)uVar5 * 0x250 + 0x78) = 0;
    }
  }
  return;
}

// SetGrainProbability @ 14451af60

void __thiscall Audio::FGranularSynth::SetGrainProbability(FGranularSynth *this,float param_1)

{
  this->GrainProbability = param_1;
  return;
}

// SetGrainVolume @ 14451af70

void __thiscall
Audio::FGranularSynth::SetGrainVolume(FGranularSynth *this,float param_1,TVector2<double> *param_2)

{
  double dVar1;
  double dVar2;
  
  dVar1 = (param_2->field0_0x0)._s_0.X;
  dVar2 = (param_2->field0_0x0)._s_0.Y;
  (this->Volume).Base = param_1;
  (this->Volume).Range.field0_0x0._s_0.X = dVar1;
  (this->Volume).Range.field0_0x0._s_0.Y = dVar2;
  return;
}

// SetGrainVolumeModulation @ 14451af90

void __thiscall Audio::FGranularSynth::SetGrainVolumeModulation(FGranularSynth *this,float param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res10 [8];
  
  if (param_1 != (this->Volume).Modulation) {
    (this->Volume).Modulation = param_1;
    fVar6 = __real_3f800000;
    pFVar9 = (this->ActiveGrains).AllocatorInstance.Data;
    iVar2 = (this->ActiveGrains).ArrayNum;
    pFVar1 = pFVar9 + (longlong)iVar2 * 4;
    while( true ) {
      if ((this->ActiveGrains).ArrayNum != iVar2) {
        local_res10[0] = 0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      if (pFVar9 == pFVar1) break;
      uVar3 = *(uint *)pFVar9;
      uVar8 = 0;
      if ((int)uVar3 < (this->GrainPool).ArrayNum) {
        uVar8 = ~uVar3 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->GrainPool).AllocatorInstance.Data;
      pFVar9 = pFVar9 + 4;
      *(float *)(pFVar4 + (longlong)(int)uVar3 * 0x250 + 0x218) =
           (param_1 + fVar6) * *(float *)(pFVar4 + (longlong)(int)uVar3 * 0x250 + 0x24);
    }
  }
  return;
}

// SetGrainsPerSecond @ 14451b0a0

void __thiscall Audio::FGranularSynth::SetGrainsPerSecond(FGranularSynth *this,float param_1)

{
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->GrainsPerSecond = param_1;
  if (0.0 < param_1) {
    this->NextSpawnFrame = (int)((float)this->SampleRate / param_1);
    return;
  }
  this->NextSpawnFrame = -1;
  return;
}

// SetPlaybackSpeed @ 14451c6d0

void __thiscall Audio::FGranularSynth::SetPlaybackSpeed(FGranularSynth *this,float param_1)

{
  this->PlaybackSpeed = param_1;
  return;
}

// SetReleaseTime @ 14451c720

void __thiscall Audio::FGranularSynth::SetReleaseTime(FGranularSynth *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014451c72a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->GainEnv)._padding_ + 0x78))();
  return;
}

// SetScrubMode @ 14451c800

void __thiscall Audio::FGranularSynth::SetScrubMode(FGranularSynth *this,bool param_1)

{
  this->bScrubMode = param_1;
  return;
}

// SetSustainGain @ 14451cfb0

void __thiscall Audio::FGranularSynth::SetSustainGain(FGranularSynth *this,float param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014451cfba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((this->GainEnv)._padding_ + 0x70))();
  return;
}

// SpawnGrain @ 14451d890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall Audio::FGranularSynth::SpawnGrain(FGranularSynth *this)

{
  TArray<Audio::FGrain,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FGrain *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  FGrain *pFVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStackY_2e8 [32];
  uint local_298 [2];
  FGrainData local_290;
  undefined1 local_268 [560];
  ForAnyElementType local_38;
  ForAnyElementType local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_2e8;
  if ((this->FreeGrains).ArrayNum < 1) {
    pTVar1 = &this->GrainPool;
    pFVar10 = FGrain::FGrain((FGrain *)local_268,(this->GrainPool).ArrayNum,this);
    pFVar3 = (FGrain *)(pTVar1->AllocatorInstance).Data;
    if ((pFVar3 <= pFVar10) && (pFVar10 < pFVar3 + (this->GrainPool).ArrayMax)) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar7) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    local_298[0] = (this->GrainPool).ArrayNum;
    piVar2 = &(this->GrainPool).ArrayMax;
    if (local_298[0] == *piVar2) {
      local_298[0] = UE::Core::Private::
                     ReallocGrow1_DoAlloc<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x250,8,&pTVar1->AllocatorInstance,piVar2);
    }
    (this->GrainPool).ArrayNum = local_298[0] + 1;
    FGrain::FGrain((FGrain *)
                   ((pTVar1->AllocatorInstance).Data + (longlong)(int)local_298[0] * 0x250),pFVar10)
    ;
    if (local_28.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
    local_268._208_8_ = &___7FOsc_Audio__6B_;
    IOscBase::~IOscBase((IOscBase *)(local_268 + 0xd0));
  }
  else {
    iVar9 = (this->FreeGrains).ArrayNum;
    iVar12 = iVar9 + -1;
    uVar8 = *(uint *)((this->FreeGrains).AllocatorInstance.Data + (longlong)iVar9 * 4 + -4);
    (this->FreeGrains).ArrayNum = iVar12;
    UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,&(this->FreeGrains).AllocatorInstance,iVar12,&(this->FreeGrains).ArrayMax);
    local_298[0] = uVar8;
  }
  if (local_298[0] == 0xffffffff) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("FreeGrainId != INDEX_NONE",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\Granulator.cpp"
                       ,0x259,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  lVar11 = (longlong)(int)local_298[0];
  uVar8 = 0;
  if ((int)local_298[0] < (this->GrainPool).ArrayNum) {
    uVar8 = ~local_298[0] >> 0x1f;
  }
  if (uVar8 == 0) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  pFVar4 = (this->ActiveGrains).AllocatorInstance.Data;
  pFVar5 = (this->GrainPool).AllocatorInstance.Data;
  if ((pFVar4 <= (FScriptContainerElement *)local_298) &&
     ((FScriptContainerElement *)local_298 < pFVar4 + (longlong)(this->ActiveGrains).ArrayMax * 4))
  {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  iVar9 = (this->ActiveGrains).ArrayNum;
  piVar2 = &(this->ActiveGrains).ArrayMax;
  if (iVar9 == *piVar2) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x404,&(this->ActiveGrains).AllocatorInstance,piVar2);
  }
  (this->ActiveGrains).ArrayNum = iVar9 + 1;
  *(uint *)((this->ActiveGrains).AllocatorInstance.Data + (longlong)iVar9 * 4) = local_298[0];
  local_290.BufferSeekTime = this->CurrentPlayHeadFrame / (float)this->SampleRate;
  local_290.DurationSeconds = FGrainParam::GetValue(&this->Duration);
  if (local_290.DurationSeconds <= __real_40a00000) {
    local_290.DurationSeconds = __real_40a00000;
  }
  local_290.DurationSeconds = local_290.DurationSeconds * __real_3a83126f;
  local_290.Frequency = FGrainParam::GetValue(&this->Frequency);
  local_290.PitchScale = FGrainParam::GetValue(&this->Pitch);
  local_290.Pan = FGrainParam::GetValue(&this->Pan);
  local_290.Volume = FGrainParam::GetValue(&this->Volume);
  FGrain::Play((FGrain *)(pFVar5 + lVar11 * 0x250),&local_290);
  return;
}

