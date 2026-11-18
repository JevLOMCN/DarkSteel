// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 8

// FPlateReverbFast @ 1444f1e80

FPlateReverbFast * __thiscall
Audio::FPlateReverbFast::FPlateReverbFast
          (FPlateReverbFast *this,float param_1,int param_2,FPlateReverbFastSettings *param_3)

{
  FIntegerDelay *pFVar1;
  FLongDelayAPF *pFVar2;
  float fVar3;
  bool bVar4;
  EQuadBehavior EVar5;
  undefined1 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  this->SampleRate = param_1;
  FEarlyReflectionsFastSettings::FEarlyReflectionsFastSettings(&(this->Settings).EarlyReflections);
  (this->Settings).LateReflections.Bandwidth = 0.5;
  (this->Settings).LateReflections.LateDelayMsec = 0.0;
  (this->Settings).LateReflections.LateGainDB = 0.0;
  (this->Settings).QuadBehavior = StereoOnly;
  (this->Settings).LateReflections.Diffusion = 0.5;
  (this->Settings).LateReflections.Dampening = 0.5;
  (this->Settings).LateReflections.Decay = 0.5;
  (this->Settings).LateReflections.Density = 0.5;
  (this->Settings).bEnableEarlyReflections = true;
  (this->Settings).bEnableLateReflections = true;
  FEarlyReflectionsFast::FEarlyReflectionsFast
            (&this->EarlyReflections,param_1,param_2,&FEarlyReflectionsFast::DefaultSettings);
  FLateReflectionsFast::FLateReflectionsFast
            (&this->LateReflections,param_1,param_2,&param_3->LateReflections);
  (this->FrontLeftLateReflectionsSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrontLeftLateReflectionsSamples).ArrayNum = 0;
  (this->FrontLeftLateReflectionsSamples).ArrayMax = 0;
  (this->FrontRightLateReflectionsSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrontRightLateReflectionsSamples).ArrayNum = 0;
  (this->FrontRightLateReflectionsSamples).ArrayMax = 0;
  (this->FrontLeftEarlyReflectionsSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrontLeftEarlyReflectionsSamples).ArrayNum = 0;
  (this->FrontLeftEarlyReflectionsSamples).ArrayMax = 0;
  (this->FrontRightEarlyReflectionsSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrontRightEarlyReflectionsSamples).ArrayNum = 0;
  (this->FrontRightEarlyReflectionsSamples).ArrayMax = 0;
  (this->FrontLeftReverbSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrontLeftReverbSamples).ArrayNum = 0;
  (this->FrontLeftReverbSamples).ArrayMax = 0;
  (this->FrontRightReverbSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FrontRightReverbSamples).ArrayNum = 0;
  (this->FrontRightReverbSamples).ArrayMax = 0;
  (this->LeftAttenuatedSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftAttenuatedSamples).ArrayNum = 0;
  (this->LeftAttenuatedSamples).ArrayMax = 0;
  (this->RightAttenuatedSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RightAttenuatedSamples).ArrayNum = 0;
  (this->RightAttenuatedSamples).ArrayMax = 0;
  (this->ScaledInputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ScaledInputBuffer).ArrayNum = 0;
  (this->ScaledInputBuffer).ArrayMax = 0;
  if (((this->Settings).bEnableEarlyReflections != false) &&
     (param_3->bEnableEarlyReflections == false)) {
    FEarlyReflectionsFast::FlushAudio(&this->EarlyReflections);
  }
  if (((this->Settings).bEnableLateReflections != false) &&
     (param_3->bEnableLateReflections == false)) {
    pFVar1 = (this->LateReflections).PreDelay.Ptr;
    FAlignedBlockBuffer::ClearSamples((pFVar1->DelayLine).Ptr);
    FAlignedBlockBuffer::AddZeros((pFVar1->DelayLine).Ptr,pFVar1->MaxNumDelaySamples);
    FBufferOnePoleLPF::FlushAudio((this->LateReflections).InputLPF.Ptr);
    pFVar2 = (this->LateReflections).APF1.Ptr;
    FAlignedBlockBuffer::ClearSamples((pFVar2->DelayLine).Ptr);
    FAlignedBlockBuffer::AddZeros((pFVar2->DelayLine).Ptr,pFVar2->NumDelaySamples);
    pFVar2 = (this->LateReflections).APF2.Ptr;
    FAlignedBlockBuffer::ClearSamples((pFVar2->DelayLine).Ptr);
    FAlignedBlockBuffer::AddZeros((pFVar2->DelayLine).Ptr,pFVar2->NumDelaySamples);
    pFVar2 = (this->LateReflections).APF3.Ptr;
    FAlignedBlockBuffer::ClearSamples((pFVar2->DelayLine).Ptr);
    FAlignedBlockBuffer::AddZeros((pFVar2->DelayLine).Ptr,pFVar2->NumDelaySamples);
    pFVar2 = (this->LateReflections).APF4.Ptr;
    FAlignedBlockBuffer::ClearSamples((pFVar2->DelayLine).Ptr);
    FAlignedBlockBuffer::AddZeros((pFVar2->DelayLine).Ptr,pFVar2->NumDelaySamples);
    FLateReflectionsPlate::FlushAudio((this->LateReflections).LeftPlate.Ptr);
    FLateReflectionsPlate::FlushAudio((this->LateReflections).RightPlate.Ptr);
  }
  fVar8 = (param_3->EarlyReflections).PreDelayMsec;
  fVar9 = (param_3->EarlyReflections).Bandwidth;
  fVar3 = (param_3->EarlyReflections).Decay;
  (this->Settings).EarlyReflections.Gain = (param_3->EarlyReflections).Gain;
  (this->Settings).EarlyReflections.PreDelayMsec = fVar8;
  (this->Settings).EarlyReflections.Bandwidth = fVar9;
  (this->Settings).EarlyReflections.Decay = fVar3;
  fVar8 = (param_3->LateReflections).LateGainDB;
  fVar9 = (param_3->LateReflections).Bandwidth;
  *(undefined8 *)&(this->Settings).EarlyReflections.Absorption =
       *(undefined8 *)&(param_3->EarlyReflections).Absorption;
  (this->Settings).LateReflections.LateGainDB = fVar8;
  (this->Settings).LateReflections.Bandwidth = fVar9;
  fVar8 = (param_3->LateReflections).Dampening;
  fVar9 = (param_3->LateReflections).Decay;
  fVar3 = (param_3->LateReflections).Density;
  (this->Settings).LateReflections.Diffusion = (param_3->LateReflections).Diffusion;
  (this->Settings).LateReflections.Dampening = fVar8;
  (this->Settings).LateReflections.Decay = fVar9;
  (this->Settings).LateReflections.Density = fVar3;
  bVar4 = param_3->bEnableLateReflections;
  EVar5 = param_3->QuadBehavior;
  uVar6 = param_3->field_0x33;
  (this->Settings).bEnableEarlyReflections = param_3->bEnableEarlyReflections;
  (this->Settings).bEnableLateReflections = bVar4;
  (this->Settings).QuadBehavior = EVar5;
  (this->Settings).field_0x33 = uVar6;
  FEarlyReflectionsFast::SetSettings(&this->EarlyReflections,&(this->Settings).EarlyReflections);
  fVar7 = __real_3f7fff58;
  fVar8 = (this->Settings).LateReflections.LateGainDB;
  fVar9 = (this->Settings).LateReflections.Bandwidth;
  fVar3 = (this->Settings).LateReflections.Diffusion;
  (this->LateReflections).Settings.LateDelayMsec = (this->Settings).LateReflections.LateDelayMsec;
  (this->LateReflections).Settings.LateGainDB = fVar8;
  (this->LateReflections).Settings.Bandwidth = fVar9;
  (this->LateReflections).Settings.Diffusion = fVar3;
  fVar8 = (this->Settings).LateReflections.Decay;
  (this->LateReflections).Settings.Dampening = (this->Settings).LateReflections.Dampening;
  (this->LateReflections).Settings.Decay = fVar8;
  (this->LateReflections).Settings.Density = (this->Settings).LateReflections.Density;
  fVar8 = (this->LateReflections).Settings.LateDelayMsec;
  if (__real_44fa0000 <= fVar8) {
    fVar8 = __real_44fa0000;
  }
  fVar9 = (this->LateReflections).Settings.Bandwidth;
  if (fVar7 <= fVar9) {
    fVar9 = fVar7;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  (this->LateReflections).Settings.LateDelayMsec = fVar8;
  fVar8 = (this->LateReflections).Settings.LateGainDB;
  if (0.0 <= fVar8) {
    fVar8 = 0.0;
  }
  (this->LateReflections).Settings.Bandwidth = fVar9;
  fVar9 = (this->LateReflections).Settings.Diffusion;
  if (fVar7 <= fVar9) {
    fVar9 = fVar7;
  }
  (this->LateReflections).Settings.LateGainDB = fVar8;
  fVar8 = (this->LateReflections).Settings.Dampening;
  if (fVar7 <= fVar8) {
    fVar8 = fVar7;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  (this->LateReflections).Settings.Diffusion = fVar9;
  (this->LateReflections).Settings.Dampening = fVar8;
  fVar8 = (this->LateReflections).Settings.Decay;
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= __real_38d1b717) {
    fVar8 = __real_38d1b717;
  }
  (this->LateReflections).Settings.Decay = fVar8;
  fVar8 = (this->LateReflections).Settings.Density;
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  (this->LateReflections).Settings.Density = fVar8;
  FLateReflectionsFast::ApplySettings(&this->LateReflections);
  return this;
}

// ~FPlateReverbFast @ 1444f44c0

void __thiscall Audio::FPlateReverbFast::~FPlateReverbFast(FPlateReverbFast *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->ScaledInputBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RightAttenuatedSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LeftAttenuatedSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrontRightReverbSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrontLeftReverbSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrontRightEarlyReflectionsSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrontLeftEarlyReflectionsSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrontRightLateReflectionsSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FrontLeftLateReflectionsSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FLateReflectionsFast::~FLateReflectionsFast(&this->LateReflections);
  FEarlyReflectionsFast::~FEarlyReflectionsFast(&this->EarlyReflections);
  return;
}

// ApplySettings @ 1444f6f80

void __thiscall Audio::FPlateReverbFast::ApplySettings(FPlateReverbFast *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  FEarlyReflectionsFast::SetSettings(&this->EarlyReflections,&(this->Settings).EarlyReflections);
  fVar2 = __real_3f7fff58;
  fVar3 = (this->Settings).LateReflections.LateGainDB;
  fVar4 = (this->Settings).LateReflections.Bandwidth;
  fVar1 = (this->Settings).LateReflections.Diffusion;
  (this->LateReflections).Settings.LateDelayMsec = (this->Settings).LateReflections.LateDelayMsec;
  (this->LateReflections).Settings.LateGainDB = fVar3;
  (this->LateReflections).Settings.Bandwidth = fVar4;
  (this->LateReflections).Settings.Diffusion = fVar1;
  fVar3 = (this->Settings).LateReflections.Decay;
  (this->LateReflections).Settings.Dampening = (this->Settings).LateReflections.Dampening;
  (this->LateReflections).Settings.Decay = fVar3;
  (this->LateReflections).Settings.Density = (this->Settings).LateReflections.Density;
  fVar3 = (this->LateReflections).Settings.LateDelayMsec;
  if (__real_44fa0000 <= fVar3) {
    fVar3 = __real_44fa0000;
  }
  fVar4 = (this->LateReflections).Settings.Bandwidth;
  if (fVar2 <= fVar4) {
    fVar4 = fVar2;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  (this->LateReflections).Settings.LateDelayMsec = fVar3;
  fVar3 = (this->LateReflections).Settings.LateGainDB;
  if (0.0 <= fVar3) {
    fVar3 = 0.0;
  }
  (this->LateReflections).Settings.Bandwidth = fVar4;
  fVar4 = (this->LateReflections).Settings.Diffusion;
  if (fVar2 <= fVar4) {
    fVar4 = fVar2;
  }
  (this->LateReflections).Settings.LateGainDB = fVar3;
  fVar3 = (this->LateReflections).Settings.Dampening;
  if (fVar2 <= fVar3) {
    fVar3 = fVar2;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  (this->LateReflections).Settings.Diffusion = fVar4;
  (this->LateReflections).Settings.Dampening = fVar3;
  fVar3 = (this->LateReflections).Settings.Decay;
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (fVar3 <= __real_38d1b717) {
    fVar3 = __real_38d1b717;
  }
  (this->LateReflections).Settings.Decay = fVar3;
  fVar3 = (this->LateReflections).Settings.Density;
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  (this->LateReflections).Settings.Density = fVar3;
  FLateReflectionsFast::ApplySettings(&this->LateReflections);
  return;
}

// ClampSettings @ 1444f7790

void __cdecl Audio::FPlateReverbFast::ClampSettings(FPlateReverbFastSettings *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = __real_3f7fff58;
  fVar2 = (param_1->LateReflections).LateDelayMsec;
  if (__real_44fa0000 <= fVar2) {
    fVar2 = __real_44fa0000;
  }
  fVar3 = (param_1->LateReflections).Bandwidth;
  if (__real_3f7fff58 <= fVar3) {
    fVar3 = __real_3f7fff58;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  (param_1->LateReflections).LateDelayMsec = fVar2;
  fVar2 = (param_1->LateReflections).LateGainDB;
  if (0.0 <= fVar2) {
    fVar2 = 0.0;
  }
  (param_1->LateReflections).Bandwidth = fVar3;
  fVar3 = (param_1->LateReflections).Diffusion;
  if (fVar1 <= fVar3) {
    fVar3 = fVar1;
  }
  (param_1->LateReflections).LateGainDB = fVar2;
  fVar2 = (param_1->LateReflections).Dampening;
  if (fVar1 <= fVar2) {
    fVar2 = fVar1;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (param_1->LateReflections).Diffusion = fVar3;
  (param_1->LateReflections).Dampening = fVar2;
  fVar2 = (param_1->LateReflections).Decay;
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= __real_38d1b717) {
    fVar2 = __real_38d1b717;
  }
  (param_1->LateReflections).Decay = fVar2;
  fVar2 = (param_1->LateReflections).Density;
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (param_1->LateReflections).Density = fVar2;
  FEarlyReflectionsFast::ClampSettings(&param_1->EarlyReflections);
  return;
}

// GetSettings @ 144504ab0

FPlateReverbFastSettings * __thiscall Audio::FPlateReverbFast::GetSettings(FPlateReverbFast *this)

{
  return &this->Settings;
}

// InterleaveAndMixOutput @ 1445087b0

void __thiscall
Audio::FPlateReverbFast::InterleaveAndMixOutput
          (FPlateReverbFast *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3,int param_4)

{
  FScriptContainerElement *pFVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  EQuadBehavior EVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  float fVar9;
  bool bVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  FScriptContainerElement *pFVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<float_const_,int> local_48 [2];
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InFrontLeftSamples.Num() == InFrontRightSamples.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ReverbFast.cpp"
                          ,0xa2,L""), bVar10)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  uVar5 = param_1->ArrayNum;
  lVar23 = (longlong)param_4;
  uVar15 = uVar5 * param_4;
  if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
  }
  lVar13 = 0;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < (int)uVar15) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar15,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,uVar15,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
  memset((param_3->AllocatorInstance).Data,0,(longlong)(int)uVar15 << 2);
  if (param_4 == 2) {
    BufferInterleave2ChannelFast
              (&this->FrontLeftReverbSamples,&this->FrontRightReverbSamples,param_3);
    return;
  }
  lVar16 = (longlong)(int)uVar5;
  if ((param_4 < 5) || ((this->Settings).QuadBehavior == StereoOnly)) {
    pFVar12 = (this->FrontLeftReverbSamples).AllocatorInstance.Data;
    pFVar17 = (this->FrontRightReverbSamples).AllocatorInstance.Data;
    pFVar11 = (param_3->AllocatorInstance).Data;
    if (lVar16 < 4) {
      if ((int)uVar5 < 1) {
        return;
      }
      lVar19 = (longlong)pFVar12 - (longlong)pFVar17;
      lVar18 = lVar13;
    }
    else {
      lVar19 = (longlong)pFVar12 - (longlong)pFVar17;
      lVar20 = (lVar16 - 4U >> 2) + 1;
      lVar18 = lVar20 * 4;
      pFVar12 = pFVar17 + 4;
      do {
        pFVar21 = pFVar12 + 0x10;
        *(undefined4 *)(pFVar11 + lVar13 * 4) = *(undefined4 *)(pFVar12 + lVar19 + -4);
        *(undefined4 *)(pFVar11 + lVar13 * 4 + 4) = *(undefined4 *)(pFVar12 + -4);
        lVar13 = lVar13 + lVar23;
        *(undefined4 *)(pFVar11 + lVar13 * 4) = *(undefined4 *)(pFVar21 + lVar19 + -0x10);
        *(undefined4 *)(pFVar11 + lVar13 * 4 + 4) = *(undefined4 *)pFVar12;
        lVar13 = lVar13 + lVar23;
        *(undefined4 *)(pFVar11 + lVar13 * 4) = *(undefined4 *)(pFVar21 + lVar19 + -0xc);
        *(undefined4 *)(pFVar11 + lVar13 * 4 + 4) = *(undefined4 *)(pFVar12 + 4);
        lVar13 = lVar13 + lVar23;
        *(undefined4 *)(pFVar11 + lVar13 * 4) = *(undefined4 *)(pFVar21 + lVar19 + -8);
        *(undefined4 *)(pFVar11 + lVar13 * 4 + 4) = *(undefined4 *)(pFVar12 + 8);
        lVar13 = lVar13 + lVar23;
        lVar20 = lVar20 + -1;
        pFVar12 = pFVar21;
      } while (lVar20 != 0);
      if (lVar16 <= lVar18) {
        return;
      }
    }
    pFVar11 = pFVar11 + lVar13 * 4;
    lVar16 = lVar16 - lVar18;
    pFVar12 = pFVar17 + lVar18 * 4;
    do {
      *(undefined4 *)pFVar11 = *(undefined4 *)(pFVar12 + lVar19);
      *(undefined4 *)(pFVar11 + 4) = *(undefined4 *)pFVar12;
      pFVar11 = pFVar11 + lVar23 * 4;
      lVar16 = lVar16 + -1;
      pFVar12 = pFVar12 + 4;
    } while (lVar16 != 0);
  }
  else {
    pTVar2 = &this->LeftAttenuatedSamples;
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
    }
    (this->LeftAttenuatedSamples).ArrayNum = 0;
    if ((this->LeftAttenuatedSamples).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar5,&pTVar2->AllocatorInstance,0,&(this->LeftAttenuatedSamples).ArrayMax);
    }
    pTVar3 = &this->RightAttenuatedSamples;
    (this->RightAttenuatedSamples).ArrayNum = 0;
    if ((this->RightAttenuatedSamples).ArrayMax < (int)uVar5) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar5,&pTVar3->AllocatorInstance,0,&(this->RightAttenuatedSamples).ArrayMax);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar5,&pTVar2->AllocatorInstance,&(this->LeftAttenuatedSamples).ArrayNum,
               &(this->LeftAttenuatedSamples).ArrayMax);
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar5,&pTVar3->AllocatorInstance,&(this->RightAttenuatedSamples).ArrayNum,
               &(this->RightAttenuatedSamples).ArrayMax);
    pFVar11 = (pTVar2->AllocatorInstance).Data;
    iVar6 = (this->LeftAttenuatedSamples).ArrayNum;
    if ((iVar6 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar12 = (this->FrontLeftReverbSamples).AllocatorInstance.Data;
    iVar7 = (this->FrontLeftReverbSamples).ArrayNum;
    if ((iVar7 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    fVar9 = __real_3f000000;
    local_78._12_4_ = uStack_ac;
    local_78.ArrayNum = iVar6;
    local_68._12_4_ = uStack_9c;
    local_68.ArrayNum = iVar7;
    local_78.DataPtr = (float *)pFVar11;
    local_68.DataPtr = (float *)pFVar12;
    ArrayMultiplyByConstant(&local_68,__real_3f000000,&local_78);
    pFVar11 = (pTVar3->AllocatorInstance).Data;
    iVar6 = (this->RightAttenuatedSamples).ArrayNum;
    if ((iVar6 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar12 = (this->FrontRightReverbSamples).AllocatorInstance.Data;
    iVar7 = (this->FrontRightReverbSamples).ArrayNum;
    if ((iVar7 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    local_58._12_4_ = uStack_8c;
    local_58.ArrayNum = iVar6;
    local_48[0]._12_4_ = uStack_7c;
    local_48[0].ArrayNum = iVar7;
    local_58.DataPtr = (float *)pFVar11;
    local_48[0].DataPtr = (float *)pFVar12;
    ArrayMultiplyByConstant(local_48,fVar9,&local_58);
    EVar4 = (this->Settings).QuadBehavior;
    pFVar11 = (pTVar2->AllocatorInstance).Data;
    pFVar12 = (pTVar3->AllocatorInstance).Data;
    pFVar17 = pFVar11;
    pFVar21 = pFVar12;
    if ((EVar4 != QuadMatched) && (EVar4 == QuadFlipped)) {
      pFVar17 = pFVar12;
      pFVar21 = pFVar11;
    }
    pFVar14 = (param_3->AllocatorInstance).Data;
    if (lVar16 < 4) {
      if (lVar16 < 1) {
        return;
      }
      lVar19 = (longlong)pFVar11 - (longlong)pFVar12;
      lVar20 = (longlong)pFVar17 - (longlong)pFVar12;
      lVar22 = (longlong)pFVar21 - (longlong)pFVar12;
      lVar18 = lVar13;
    }
    else {
      lVar19 = (longlong)pFVar11 - (longlong)pFVar12;
      lVar20 = (longlong)pFVar17 - (longlong)pFVar12;
      pFVar11 = pFVar14 + 0x14;
      lVar22 = (longlong)pFVar21 - (longlong)pFVar12;
      pFVar17 = pFVar14 + 0x10;
      lVar24 = (lVar16 - 4U >> 2) + 1;
      lVar18 = lVar24 * 4;
      pFVar21 = pFVar12 + 4;
      do {
        pFVar1 = pFVar21 + 0x10;
        *(undefined4 *)(pFVar14 + lVar13 * 4) = *(undefined4 *)(pFVar21 + lVar19 + -4);
        *(undefined4 *)(pFVar14 + lVar13 * 4 + 4) = *(undefined4 *)(pFVar21 + -4);
        lVar13 = lVar13 + lVar23;
        *(undefined4 *)pFVar17 = *(undefined4 *)(pFVar1 + lVar20 + -0x14);
        pFVar17 = pFVar17 + lVar23 * 4;
        *(undefined4 *)pFVar11 = *(undefined4 *)(pFVar1 + lVar22 + -0x14);
        pFVar11 = pFVar11 + lVar23 * 4;
        *(undefined4 *)(pFVar14 + lVar13 * 4) = *(undefined4 *)(pFVar1 + lVar19 + -0x10);
        *(undefined4 *)(pFVar14 + lVar13 * 4 + 4) = *(undefined4 *)pFVar21;
        lVar13 = lVar13 + lVar23;
        *(undefined4 *)pFVar17 = *(undefined4 *)(pFVar1 + lVar20 + -0x10);
        pFVar17 = pFVar17 + lVar23 * 4;
        *(undefined4 *)pFVar11 = *(undefined4 *)(pFVar1 + lVar22 + -0x10);
        pFVar11 = pFVar11 + lVar23 * 4;
        *(undefined4 *)(pFVar14 + lVar13 * 4) = *(undefined4 *)(pFVar1 + lVar19 + -0xc);
        *(undefined4 *)(pFVar14 + lVar13 * 4 + 4) = *(undefined4 *)(pFVar21 + 4);
        lVar13 = lVar13 + lVar23;
        *(undefined4 *)pFVar17 = *(undefined4 *)(pFVar1 + lVar20 + -0xc);
        *(undefined4 *)pFVar11 = *(undefined4 *)(pFVar1 + lVar22 + -0xc);
        *(undefined4 *)(pFVar14 + lVar13 * 4) = *(undefined4 *)(pFVar1 + lVar19 + -8);
        *(undefined4 *)(pFVar14 + lVar13 * 4 + 4) = *(undefined4 *)(pFVar21 + 8);
        lVar13 = lVar13 + lVar23;
        *(undefined4 *)(pFVar17 + lVar23 * 4) = *(undefined4 *)(pFVar1 + lVar20 + -8);
        pFVar17 = pFVar17 + lVar23 * 4 + lVar23 * 4;
        *(undefined4 *)(pFVar11 + lVar23 * 4) = *(undefined4 *)(pFVar1 + lVar22 + -8);
        pFVar11 = pFVar11 + lVar23 * 4 + lVar23 * 4;
        lVar24 = lVar24 + -1;
        pFVar21 = pFVar1;
      } while (lVar24 != 0);
      if (lVar16 <= lVar18) {
        return;
      }
    }
    lVar16 = lVar16 - lVar18;
    pFVar14 = pFVar14 + (lVar13 + 4) * 4;
    pFVar11 = pFVar12 + lVar18 * 4;
    do {
      *(undefined4 *)(pFVar14 + -0x10) = *(undefined4 *)(pFVar11 + lVar19);
      *(undefined4 *)(pFVar14 + -0xc) = *(undefined4 *)pFVar11;
      *(undefined4 *)pFVar14 = *(undefined4 *)(pFVar11 + lVar20);
      *(undefined4 *)(pFVar14 + 4) = *(undefined4 *)(pFVar11 + lVar22);
      pFVar14 = pFVar14 + lVar23 * 4;
      lVar16 = lVar16 + -1;
      pFVar11 = pFVar11 + 4;
    } while (lVar16 != 0);
  }
  return;
}

// ProcessAudio @ 14450e2a0

void __thiscall
Audio::FPlateReverbFast::ProcessAudio
          (FPlateReverbFast *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,int param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *this_00;
  uint uVar4;
  int iVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  code *pcVar11;
  bool bVar12;
  int iVar13;
  undefined4 uStack_dc;
  undefined4 uStack_cc;
  undefined4 uStack_bc;
  undefined4 uStack_ac;
  undefined4 uStack_9c;
  undefined4 uStack_8c;
  TArrayView<float,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float_const_,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float_const_,int> local_38;
  
  uVar4 = param_1->ArrayNum;
  if (uVar4 == 0) {
    param_3->ArrayNum = 0;
    if (param_3->ArrayMax < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
      return;
    }
  }
  else {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
    }
    piVar1 = &(this->ScaledInputBuffer).ArrayMax;
    piVar2 = &(this->ScaledInputBuffer).ArrayNum;
    *piVar2 = 0;
    if (*piVar1 < (int)uVar4) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar4,&(this->ScaledInputBuffer).AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_1->ArrayNum,&(this->ScaledInputBuffer).AllocatorInstance,piVar2,piVar1);
    if (((this->ScaledInputBuffer).ArrayNum != param_1->ArrayNum) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("ScaledInputBuffer.Num() == InSamples.Num()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ReverbFast.cpp"
                            ,0x50,L""), bVar12)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    memcpy((this->ScaledInputBuffer).AllocatorInstance.Data,(param_1->AllocatorInstance).Data,
           (longlong)param_1->ArrayNum << 2);
    if ((1 < param_2 - 1U) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(1 == InNumChannels) || (2 == InNumChannels)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ReverbFast.cpp"
                            ,0x54,L"FPlateReverbFast only supports 1 or 2 channel inputs."), bVar12)
       ) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    if ((param_4 < 2) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("OutNumChannels >= 2",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ReverbFast.cpp"
                            ,0x55,L"FPlateReverbFast requires at least 2 output channels."), bVar12)
       ) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    uVar10 = (longlong)param_1->ArrayNum / (longlong)param_2;
    if (param_1->ArrayNum == 0) {
      param_3->ArrayNum = 0;
      if (param_3->ArrayMax < 0) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
      }
    }
    else {
      iVar13 = (int)uVar10;
      if (((this->Settings).bEnableEarlyReflections == false) &&
         ((this->Settings).bEnableLateReflections == false)) {
        TArray<float,TAlignedHeapAllocator<16>_>::Reset(param_3,iVar13 * param_4);
        TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(param_3,iVar13 * param_4);
      }
      else {
        if (iVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar10 & 0xffffffff);
        }
        piVar1 = &(this->FrontLeftReverbSamples).ArrayMax;
        (this->FrontLeftReverbSamples).ArrayNum = 0;
        if (*piVar1 < iVar13) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar13,&(this->FrontLeftReverbSamples).AllocatorInstance,0,piVar1);
        }
        pTVar3 = &this->FrontRightReverbSamples;
        (this->FrontRightReverbSamples).ArrayNum = 0;
        if ((this->FrontRightReverbSamples).ArrayMax < iVar13) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar13,&pTVar3->AllocatorInstance,0,
                     &(this->FrontRightReverbSamples).ArrayMax);
        }
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,iVar13,&(this->FrontLeftReverbSamples).AllocatorInstance,
                   &(this->FrontLeftReverbSamples).ArrayNum,piVar1);
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,iVar13,&pTVar3->AllocatorInstance,&(this->FrontRightReverbSamples).ArrayNum,
                   &(this->FrontRightReverbSamples).ArrayMax);
        bVar12 = (this->Settings).bEnableLateReflections;
        if ((this->Settings).bEnableEarlyReflections == false) {
          if (bVar12 != false) {
            FLateReflectionsFast::ProcessAudio
                      (&this->LateReflections,&this->ScaledInputBuffer,param_2,
                       &this->FrontLeftReverbSamples,pTVar3);
          }
        }
        else if (bVar12 == false) {
          FEarlyReflectionsFast::ProcessAudio
                    (&this->EarlyReflections,&this->ScaledInputBuffer,param_2,
                     &this->FrontLeftReverbSamples,pTVar3);
        }
        else {
          TArray<float,TAlignedHeapAllocator<16>_>::Reset
                    (&this->FrontLeftLateReflectionsSamples,iVar13);
          pTVar3 = &this->FrontRightLateReflectionsSamples;
          TArray<float,TAlignedHeapAllocator<16>_>::Reset(pTVar3,iVar13);
          TArray<float,TAlignedHeapAllocator<16>_>::Reset
                    (&this->FrontLeftEarlyReflectionsSamples,iVar13);
          this_00 = &this->FrontRightEarlyReflectionsSamples;
          TArray<float,TAlignedHeapAllocator<16>_>::Reset(this_00,iVar13);
          piVar1 = &(this->FrontLeftLateReflectionsSamples).ArrayNum;
          UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar13,&(this->FrontLeftLateReflectionsSamples).AllocatorInstance,piVar1,
                     &(this->FrontLeftLateReflectionsSamples).ArrayMax);
          UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar13,&pTVar3->AllocatorInstance,
                     &(this->FrontRightLateReflectionsSamples).ArrayNum,
                     &(this->FrontRightLateReflectionsSamples).ArrayMax);
          piVar2 = &(this->FrontLeftEarlyReflectionsSamples).ArrayNum;
          UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar13,&(this->FrontLeftEarlyReflectionsSamples).AllocatorInstance,piVar2,
                     &(this->FrontLeftEarlyReflectionsSamples).ArrayMax);
          UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar13,&this_00->AllocatorInstance,
                     &(this->FrontRightEarlyReflectionsSamples).ArrayNum,
                     &(this->FrontRightEarlyReflectionsSamples).ArrayMax);
          FEarlyReflectionsFast::ProcessAudio
                    (&this->EarlyReflections,&this->ScaledInputBuffer,param_2,
                     &this->FrontLeftEarlyReflectionsSamples,this_00);
          FLateReflectionsFast::ProcessAudio
                    (&this->LateReflections,&this->ScaledInputBuffer,param_2,
                     &this->FrontLeftLateReflectionsSamples,pTVar3);
          pFVar7 = (this->FrontLeftReverbSamples).AllocatorInstance.Data;
          iVar13 = (this->FrontLeftReverbSamples).ArrayNum;
          if ((iVar13 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar8 = (this->FrontLeftLateReflectionsSamples).AllocatorInstance.Data;
          iVar5 = *piVar1;
          if ((iVar5 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar9 = (this->FrontLeftEarlyReflectionsSamples).AllocatorInstance.Data;
          iVar6 = *piVar2;
          if ((iVar6 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_88._12_4_ = uStack_dc;
          local_88.ArrayNum = iVar13;
          local_78._12_4_ = uStack_cc;
          local_78.ArrayNum = iVar5;
          local_68._12_4_ = uStack_bc;
          local_68.ArrayNum = iVar6;
          local_88.DataPtr = (float *)pFVar7;
          local_78.DataPtr = (float *)pFVar8;
          local_68.DataPtr = (float *)pFVar9;
          ArraySum(&local_68,&local_78,&local_88);
          pFVar7 = (this->FrontRightReverbSamples).AllocatorInstance.Data;
          iVar13 = (this->FrontRightReverbSamples).ArrayNum;
          if ((iVar13 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar8 = (this->FrontRightLateReflectionsSamples).AllocatorInstance.Data;
          iVar5 = (this->FrontRightLateReflectionsSamples).ArrayNum;
          if ((iVar5 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          pFVar9 = (this->FrontRightEarlyReflectionsSamples).AllocatorInstance.Data;
          iVar6 = (this->FrontRightEarlyReflectionsSamples).ArrayNum;
          if ((iVar6 < 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("InCount >= 0",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0xeb,L""), bVar12)) {
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          local_58._12_4_ = uStack_ac;
          local_58.ArrayNum = iVar13;
          local_48._12_4_ = uStack_9c;
          local_48.ArrayNum = iVar5;
          local_38._12_4_ = uStack_8c;
          local_38.ArrayNum = iVar6;
          local_58.DataPtr = (float *)pFVar7;
          local_48.DataPtr = (float *)pFVar8;
          local_38.DataPtr = (float *)pFVar9;
          ArraySum(&local_38,&local_48,&local_58);
        }
        InterleaveAndMixOutput
                  (this,&this->FrontLeftReverbSamples,&this->FrontRightReverbSamples,param_3,param_4
                  );
      }
    }
  }
  return;
}

// SetSettings @ 14451cb60

void __thiscall
Audio::FPlateReverbFast::SetSettings(FPlateReverbFast *this,FPlateReverbFastSettings *param_1)

{
  FIntegerDelay *pFVar1;
  FLongDelayAPF *pFVar2;
  float fVar3;
  bool bVar4;
  EQuadBehavior EVar5;
  undefined1 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  if (((this->Settings).bEnableEarlyReflections != false) &&
     (param_1->bEnableEarlyReflections == false)) {
    FEarlyReflectionsFast::FlushAudio(&this->EarlyReflections);
  }
  if (((this->Settings).bEnableLateReflections != false) &&
     (param_1->bEnableLateReflections == false)) {
    pFVar1 = (this->LateReflections).PreDelay.Ptr;
    FAlignedBlockBuffer::ClearSamples((pFVar1->DelayLine).Ptr);
    FAlignedBlockBuffer::AddZeros((pFVar1->DelayLine).Ptr,pFVar1->MaxNumDelaySamples);
    FBufferOnePoleLPF::FlushAudio((this->LateReflections).InputLPF.Ptr);
    pFVar2 = (this->LateReflections).APF1.Ptr;
    FAlignedBlockBuffer::ClearSamples((pFVar2->DelayLine).Ptr);
    FAlignedBlockBuffer::AddZeros((pFVar2->DelayLine).Ptr,pFVar2->NumDelaySamples);
    pFVar2 = (this->LateReflections).APF2.Ptr;
    FAlignedBlockBuffer::ClearSamples((pFVar2->DelayLine).Ptr);
    FAlignedBlockBuffer::AddZeros((pFVar2->DelayLine).Ptr,pFVar2->NumDelaySamples);
    pFVar2 = (this->LateReflections).APF3.Ptr;
    FAlignedBlockBuffer::ClearSamples((pFVar2->DelayLine).Ptr);
    FAlignedBlockBuffer::AddZeros((pFVar2->DelayLine).Ptr,pFVar2->NumDelaySamples);
    pFVar2 = (this->LateReflections).APF4.Ptr;
    FAlignedBlockBuffer::ClearSamples((pFVar2->DelayLine).Ptr);
    FAlignedBlockBuffer::AddZeros((pFVar2->DelayLine).Ptr,pFVar2->NumDelaySamples);
    FLateReflectionsPlate::FlushAudio((this->LateReflections).LeftPlate.Ptr);
    FLateReflectionsPlate::FlushAudio((this->LateReflections).RightPlate.Ptr);
  }
  fVar8 = (param_1->EarlyReflections).PreDelayMsec;
  fVar9 = (param_1->EarlyReflections).Bandwidth;
  fVar3 = (param_1->EarlyReflections).Decay;
  (this->Settings).EarlyReflections.Gain = (param_1->EarlyReflections).Gain;
  (this->Settings).EarlyReflections.PreDelayMsec = fVar8;
  (this->Settings).EarlyReflections.Bandwidth = fVar9;
  (this->Settings).EarlyReflections.Decay = fVar3;
  fVar8 = (param_1->LateReflections).LateGainDB;
  fVar9 = (param_1->LateReflections).Bandwidth;
  *(undefined8 *)&(this->Settings).EarlyReflections.Absorption =
       *(undefined8 *)&(param_1->EarlyReflections).Absorption;
  (this->Settings).LateReflections.LateGainDB = fVar8;
  (this->Settings).LateReflections.Bandwidth = fVar9;
  fVar8 = (param_1->LateReflections).Dampening;
  fVar9 = (param_1->LateReflections).Decay;
  fVar3 = (param_1->LateReflections).Density;
  (this->Settings).LateReflections.Diffusion = (param_1->LateReflections).Diffusion;
  (this->Settings).LateReflections.Dampening = fVar8;
  (this->Settings).LateReflections.Decay = fVar9;
  (this->Settings).LateReflections.Density = fVar3;
  bVar4 = param_1->bEnableLateReflections;
  EVar5 = param_1->QuadBehavior;
  uVar6 = param_1->field_0x33;
  (this->Settings).bEnableEarlyReflections = param_1->bEnableEarlyReflections;
  (this->Settings).bEnableLateReflections = bVar4;
  (this->Settings).QuadBehavior = EVar5;
  (this->Settings).field_0x33 = uVar6;
  FEarlyReflectionsFast::SetSettings(&this->EarlyReflections,&(this->Settings).EarlyReflections);
  fVar7 = __real_3f7fff58;
  fVar8 = (this->Settings).LateReflections.LateGainDB;
  fVar9 = (this->Settings).LateReflections.Bandwidth;
  fVar3 = (this->Settings).LateReflections.Diffusion;
  (this->LateReflections).Settings.LateDelayMsec = (this->Settings).LateReflections.LateDelayMsec;
  (this->LateReflections).Settings.LateGainDB = fVar8;
  (this->LateReflections).Settings.Bandwidth = fVar9;
  (this->LateReflections).Settings.Diffusion = fVar3;
  fVar8 = (this->Settings).LateReflections.Decay;
  (this->LateReflections).Settings.Dampening = (this->Settings).LateReflections.Dampening;
  (this->LateReflections).Settings.Decay = fVar8;
  (this->LateReflections).Settings.Density = (this->Settings).LateReflections.Density;
  fVar8 = (this->LateReflections).Settings.LateDelayMsec;
  if (__real_44fa0000 <= fVar8) {
    fVar8 = __real_44fa0000;
  }
  fVar9 = (this->LateReflections).Settings.Bandwidth;
  if (fVar7 <= fVar9) {
    fVar9 = fVar7;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  (this->LateReflections).Settings.LateDelayMsec = fVar8;
  fVar8 = (this->LateReflections).Settings.LateGainDB;
  if (0.0 <= fVar8) {
    fVar8 = 0.0;
  }
  (this->LateReflections).Settings.Bandwidth = fVar9;
  fVar9 = (this->LateReflections).Settings.Diffusion;
  if (fVar7 <= fVar9) {
    fVar9 = fVar7;
  }
  (this->LateReflections).Settings.LateGainDB = fVar8;
  fVar8 = (this->LateReflections).Settings.Dampening;
  if (fVar7 <= fVar8) {
    fVar8 = fVar7;
  }
  if (fVar9 <= 0.0) {
    fVar9 = 0.0;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  (this->LateReflections).Settings.Diffusion = fVar9;
  (this->LateReflections).Settings.Dampening = fVar8;
  fVar8 = (this->LateReflections).Settings.Decay;
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= __real_38d1b717) {
    fVar8 = __real_38d1b717;
  }
  (this->LateReflections).Settings.Decay = fVar8;
  fVar8 = (this->LateReflections).Settings.Density;
  if (__real_3f800000 <= fVar8) {
    fVar8 = __real_3f800000;
  }
  if (fVar8 <= 0.0) {
    fVar8 = 0.0;
  }
  (this->LateReflections).Settings.Density = fVar8;
  FLateReflectionsFast::ApplySettings(&this->LateReflections);
  return;
}

