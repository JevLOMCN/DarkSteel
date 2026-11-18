// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 9

// FLateReflectionsFast @ 1444ef8b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLateReflectionsFast * __thiscall
Audio::FLateReflectionsFast::FLateReflectionsFast
          (FLateReflectionsFast *this,float param_1,int param_2,
          FLateReflectionsFastSettings *param_3)

{
  TUniquePtr<Audio::FIntegerDelay,TDefaultDelete<Audio::FIntegerDelay>_> *pTVar1;
  TUniquePtr<Audio::FBufferOnePoleLPF,TDefaultDelete<Audio::FBufferOnePoleLPF>_> *pTVar2;
  TUniquePtr<Audio::FLongDelayAPF,TDefaultDelete<Audio::FLongDelayAPF>_> *pTVar3;
  float *pfVar4;
  TUniquePtr<Audio::FLateReflectionsPlate,TDefaultDelete<Audio::FLateReflectionsPlate>_> *pTVar5;
  TUniquePtr<Audio::FLateReflectionsPlate,TDefaultDelete<Audio::FLateReflectionsPlate>_> *pTVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  FLateReflectionsPlate *pFVar17;
  FAlignedBlockBuffer *pFVar18;
  FBufferOnePoleLPF *pFVar19;
  FScriptContainerElement *pFVar20;
  float fVar21;
  float fVar22;
  FLateReflectionsPlate *pFVar23;
  FIntegerDelay *pFVar24;
  FBufferOnePoleLPF *pFVar25;
  FLongDelayAPF *pFVar26;
  FLongDelayAPF *pFVar27;
  FLongDelayAPF *pFVar28;
  FIntegerDelay *pFVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 local_88;
  longlong local_80;
  longlong local_78;
  longlong local_70;
  longlong local_68 [6];
  
  pTVar1 = &this->PreDelay;
  pTVar2 = &this->InputLPF;
  this->Gain = 1.0;
  this->ModulationPhase = 0.0;
  pTVar3 = &this->APF1;
  this->ModulationQuadPhase = 1.5707964;
  this->ModulationPhaseIncrement = 0.0;
  this->SampleRate = param_1;
  this->NumInternalBufferSamples = 0;
  fVar31 = param_3->LateGainDB;
  fVar30 = param_3->Bandwidth;
  fVar32 = param_3->Diffusion;
  (this->Settings).LateDelayMsec = param_3->LateDelayMsec;
  (this->Settings).LateGainDB = fVar31;
  (this->Settings).Bandwidth = fVar30;
  (this->Settings).Diffusion = fVar32;
  fVar31 = param_3->Decay;
  fVar30 = param_1 * ___real_3a0ceed2;
  (this->Settings).Dampening = param_3->Dampening;
  (this->Settings).Decay = fVar31;
  fVar31 = param_1 * ___real_3cf9ef88;
  (this->Settings).Density = param_3->Density;
  (this->APF2).Ptr = (FLongDelayAPF *)0x0;
  (this->APF3).Ptr = (FLongDelayAPF *)0x0;
  (this->APF4).Ptr = (FLongDelayAPF *)0x0;
  pTVar1->Ptr = (FIntegerDelay *)0x0;
  pTVar2->Ptr = (FBufferOnePoleLPF *)0x0;
  pTVar3->Ptr = (FLongDelayAPF *)0x0;
  (this->LeftPlateDelays).NumSamplesModulatedBase = (int)fVar31;
  (this->LeftPlateDelays).NumSamplesModulatedDelta = (int)fVar30;
  (this->LeftPlateDelays).NumSamplesDelayA = (int)(param_1 * ___real_3c425550);
  (this->LeftPlateDelays).NumSamplesDelayB = (int)(param_1 * ___real_3ce6646a);
  (this->LeftPlateDelays).NumSamplesDelayC = (int)(param_1 * ___real_3da7b3af);
  (this->LeftPlateDelays).NumSamplesDelayD = (int)(param_1 * ___real_3ca26734);
  (this->LeftPlateDelays).NumSamplesAPF = (int)(param_1 * ___real_3db6c5b8);
  (this->LeftPlateDelays).NumSamplesDelayE = (int)(param_1 * ___real_3bcde4e7);
  (this->LeftPlateDelays).NumSamplesDelayF = (int)(param_1 * ___real_3d0f45c9);
  (this->LeftPlateDelays).NumSamplesDelayG = (int)(param_1 * ___real_3d12b69e);
  (this->LeftPlateDelays).NumSamplesDelayH = (int)(param_1 * ___real_3d5d2bca);
  (this->LeftPlateDelays).NumSamplesDelayI = (int)(param_1 * ___real_3c7ee3ee);
  (this->RightPlateDelays).NumSamplesModulatedBase = (int)(param_1 * ___real_3cb8f974);
  (this->RightPlateDelays).NumSamplesModulatedDelta = (int)fVar30;
  pTVar5 = &this->LeftPlate;
  pTVar6 = &this->RightPlate;
  piVar7 = &(this->WorkBufferA).ArrayNum;
  (this->RightPlateDelays).NumSamplesDelayA = (int)(param_1 * ___real_3c127026);
  (this->RightPlateDelays).NumSamplesDelayB = (int)(param_1 * ___real_3d7ded4c);
  (this->RightPlateDelays).NumSamplesDelayC = (int)(param_1 * ___real_3ced8c8b);
  (this->RightPlateDelays).NumSamplesDelayD = (int)(param_1 * ___real_3d4b8df0);
  (this->RightPlateDelays).NumSamplesAPF = (int)(param_1 * ___real_3d77bbcd);
  (this->RightPlateDelays).NumSamplesDelayE = (int)(param_1 * ___real_3c386c85);
  (this->RightPlateDelays).NumSamplesDelayF = (int)(param_1 * ___real_3d592e07);
  (this->RightPlateDelays).NumSamplesDelayG = (int)(param_1 * ___real_3b8539c3);
  (this->RightPlateDelays).NumSamplesDelayH = (int)(param_1 * ___real_3d810726);
  (this->RightPlateDelays).NumSamplesDelayI = (int)(param_1 * ___real_3d6d4614);
  pTVar5->Ptr = (FLateReflectionsPlate *)0x0;
  pTVar6->Ptr = (FLateReflectionsPlate *)0x0;
  (this->LeftPlateOutputs).Taps[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftPlateOutputs).Taps[0].ArrayNum = 0;
  (this->LeftPlateOutputs).Taps[0].ArrayMax = 0;
  (this->LeftPlateOutputs).Taps[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftPlateOutputs).Taps[1].ArrayNum = 0;
  (this->LeftPlateOutputs).Taps[1].ArrayMax = 0;
  (this->LeftPlateOutputs).Taps[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftPlateOutputs).Taps[2].ArrayNum = 0;
  (this->LeftPlateOutputs).Taps[2].ArrayMax = 0;
  (this->LeftPlateOutputs).Taps[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftPlateOutputs).Taps[3].ArrayNum = 0;
  (this->LeftPlateOutputs).Taps[3].ArrayMax = 0;
  (this->LeftPlateOutputs).Taps[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftPlateOutputs).Taps[4].ArrayNum = 0;
  (this->LeftPlateOutputs).Taps[4].ArrayMax = 0;
  (this->LeftPlateOutputs).Taps[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftPlateOutputs).Taps[5].ArrayNum = 0;
  (this->LeftPlateOutputs).Taps[5].ArrayMax = 0;
  (this->LeftPlateOutputs).Taps[6].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftPlateOutputs).Taps[6].ArrayNum = 0;
  (this->LeftPlateOutputs).Taps[6].ArrayMax = 0;
  (this->LeftPlateOutputs).Output.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftPlateOutputs).Output.ArrayNum = 0;
  (this->LeftPlateOutputs).Output.ArrayMax = 0;
  (this->RightPlateOutputs).Taps[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RightPlateOutputs).Taps[0].ArrayNum = 0;
  (this->RightPlateOutputs).Taps[0].ArrayMax = 0;
  (this->RightPlateOutputs).Taps[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RightPlateOutputs).Taps[1].ArrayNum = 0;
  (this->RightPlateOutputs).Taps[1].ArrayMax = 0;
  (this->RightPlateOutputs).Taps[2].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RightPlateOutputs).Taps[2].ArrayNum = 0;
  (this->RightPlateOutputs).Taps[2].ArrayMax = 0;
  (this->RightPlateOutputs).Taps[3].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RightPlateOutputs).Taps[3].ArrayNum = 0;
  (this->RightPlateOutputs).Taps[3].ArrayMax = 0;
  (this->RightPlateOutputs).Taps[4].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RightPlateOutputs).Taps[4].ArrayNum = 0;
  (this->RightPlateOutputs).Taps[4].ArrayMax = 0;
  (this->RightPlateOutputs).Taps[5].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RightPlateOutputs).Taps[5].ArrayNum = 0;
  (this->RightPlateOutputs).Taps[5].ArrayMax = 0;
  (this->RightPlateOutputs).Taps[6].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RightPlateOutputs).Taps[6].ArrayNum = 0;
  (this->RightPlateOutputs).Taps[6].ArrayMax = 0;
  (this->RightPlateOutputs).Output.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RightPlateOutputs).Output.ArrayNum = 0;
  (this->RightPlateOutputs).Output.ArrayMax = 0;
  (this->LeftDelayModSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftDelayModSamples).ArrayNum = 0;
  (this->LeftDelayModSamples).ArrayMax = 0;
  (this->RightDelayModSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RightDelayModSamples).ArrayNum = 0;
  (this->RightDelayModSamples).ArrayMax = 0;
  (this->WorkBufferA).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar22 = __real_3f7fff58;
  fVar21 = __real_3f800000;
  *piVar7 = 0;
  (this->WorkBufferA).ArrayMax = 0;
  (this->WorkBufferB).ArrayMax = 0;
  (this->WorkBufferC).ArrayMax = 0;
  (this->WorkBufferB).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkBufferC).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar8 = &(this->WorkBufferB).ArrayNum;
  *piVar8 = 0;
  piVar9 = &(this->WorkBufferC).ArrayNum;
  *piVar9 = 0;
  fVar31 = param_3->LateGainDB;
  fVar30 = param_3->Bandwidth;
  fVar32 = param_3->Diffusion;
  (this->Settings).LateDelayMsec = param_3->LateDelayMsec;
  (this->Settings).LateGainDB = fVar31;
  (this->Settings).Bandwidth = fVar30;
  (this->Settings).Diffusion = fVar32;
  fVar31 = param_3->Decay;
  (this->Settings).Dampening = param_3->Dampening;
  (this->Settings).Decay = fVar31;
  (this->Settings).Density = param_3->Density;
  fVar31 = (this->Settings).LateDelayMsec;
  if (__real_44fa0000 <= fVar31) {
    fVar31 = __real_44fa0000;
  }
  fVar30 = (this->Settings).Bandwidth;
  if (fVar22 <= fVar30) {
    fVar30 = fVar22;
  }
  if (fVar31 <= 0.0) {
    fVar31 = 0.0;
  }
  if (fVar30 <= 0.0) {
    fVar30 = 0.0;
  }
  (this->Settings).LateDelayMsec = fVar31;
  fVar31 = (this->Settings).LateGainDB;
  if (0.0 <= fVar31) {
    fVar31 = 0.0;
  }
  (this->Settings).Bandwidth = fVar30;
  fVar30 = (this->Settings).Diffusion;
  if (fVar22 <= fVar30) {
    fVar30 = fVar22;
  }
  (this->Settings).LateGainDB = fVar31;
  fVar31 = (this->Settings).Dampening;
  if (fVar22 <= fVar31) {
    fVar31 = fVar22;
  }
  if (fVar30 <= 0.0) {
    fVar30 = 0.0;
  }
  if (fVar31 <= 0.0) {
    fVar31 = 0.0;
  }
  (this->Settings).Diffusion = fVar30;
  (this->Settings).Dampening = fVar31;
  fVar31 = (this->Settings).Decay;
  if (fVar21 <= fVar31) {
    fVar31 = fVar21;
  }
  if (fVar31 <= __real_38d1b717) {
    fVar31 = __real_38d1b717;
  }
  (this->Settings).Decay = fVar31;
  fVar31 = (this->Settings).Density;
  if (fVar21 <= fVar31) {
    fVar31 = fVar21;
  }
  if (fVar31 <= 0.0) {
    fVar31 = 0.0;
  }
  (this->Settings).Density = fVar31;
  pFVar23 = ::operator_new(0xd8);
  if (pFVar23 == (FLateReflectionsPlate *)0x0) {
    pFVar23 = (FLateReflectionsPlate *)0x0;
  }
  else {
    pFVar23 = FLateReflectionsPlate::FLateReflectionsPlate
                        (pFVar23,this->SampleRate,param_2,&this->LeftPlateDelays);
  }
  if (pTVar5 == (TUniquePtr<Audio::FLateReflectionsPlate,TDefaultDelete<Audio::FLateReflectionsPlate>_>
                 *)&local_a0) {
    if (pFVar23 != (FLateReflectionsPlate *)0x0) {
      FLateReflectionsPlate::~FLateReflectionsPlate(pFVar23);
      ::operator_delete(pFVar23,0xd8);
    }
  }
  else {
    pFVar17 = pTVar5->Ptr;
    pTVar5->Ptr = pFVar23;
    if (pFVar17 != (FLateReflectionsPlate *)0x0) {
      FLateReflectionsPlate::~FLateReflectionsPlate(pFVar17);
      ::operator_delete(pFVar17,0xd8);
    }
  }
  pFVar23 = ::operator_new(0xd8);
  if (pFVar23 == (FLateReflectionsPlate *)0x0) {
    pFVar23 = (FLateReflectionsPlate *)0x0;
  }
  else {
    pFVar23 = FLateReflectionsPlate::FLateReflectionsPlate
                        (pFVar23,this->SampleRate,param_2,&this->RightPlateDelays);
  }
  if (pTVar6 == (TUniquePtr<Audio::FLateReflectionsPlate,TDefaultDelete<Audio::FLateReflectionsPlate>_>
                 *)&local_98) {
    if (pFVar23 != (FLateReflectionsPlate *)0x0) {
      FLateReflectionsPlate::~FLateReflectionsPlate(pFVar23);
      goto LAB_1444efdad;
    }
  }
  else {
    pFVar17 = pTVar6->Ptr;
    pTVar6->Ptr = pFVar23;
    if (pFVar17 != (FLateReflectionsPlate *)0x0) {
      FLateReflectionsPlate::~FLateReflectionsPlate(pFVar17);
      pFVar23 = pFVar17;
LAB_1444efdad:
      ::operator_delete(pFVar23,0xd8);
    }
  }
  fVar31 = this->SampleRate * __real_c0000000;
  iVar15 = pTVar6->Ptr->NumInternalBufferSamples;
  if (pTVar5->Ptr->NumInternalBufferSamples < iVar15) {
    iVar15 = pTVar5->Ptr->NumInternalBufferSamples;
  }
  this->NumInternalBufferSamples = iVar15;
  pFVar24 = ::operator_new(0x20);
  if (pFVar24 == (FIntegerDelay *)0x0) {
    pFVar24 = (FIntegerDelay *)0x0;
  }
  else {
    pFVar24 = FIntegerDelay::FIntegerDelay(pFVar24,8 - (int)fVar31,0,this->NumInternalBufferSamples)
    ;
  }
  if (pTVar1 == (TUniquePtr<Audio::FIntegerDelay,TDefaultDelete<Audio::FIntegerDelay>_> *)&local_90)
  {
    if (pFVar24 != (FIntegerDelay *)0x0) {
      pFVar18 = (pFVar24->DelayLine).Ptr;
      pFVar29 = pFVar24;
      if (pFVar18 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar18);
        ::operator_delete(pFVar18,0x48);
      }
      goto LAB_1444efe68;
    }
  }
  else {
    pFVar29 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar24;
    if (pFVar29 != (FIntegerDelay *)0x0) {
      pFVar18 = (pFVar29->DelayLine).Ptr;
      if (pFVar18 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar18);
        ::operator_delete(pFVar18,0x48);
      }
LAB_1444efe68:
      ::operator_delete(pFVar29,0x20);
    }
  }
  fVar31 = (this->Settings).Bandwidth;
  pFVar25 = ::operator_new(0x10);
  if (pFVar25 == (FBufferOnePoleLPF *)0x0) {
    pFVar25 = (FBufferOnePoleLPF *)0x0;
  }
  else {
    pFVar25 = FBufferOnePoleLPF::FBufferOnePoleLPF(pFVar25,fVar21 - fVar31);
  }
  if (pTVar2 != (TUniquePtr<Audio::FBufferOnePoleLPF,TDefaultDelete<Audio::FBufferOnePoleLPF>_> *)
                &local_88) {
    pFVar19 = pTVar2->Ptr;
    pTVar2->Ptr = pFVar25;
    pFVar25 = (FBufferOnePoleLPF *)0x0;
    ::operator_delete(pFVar19,0x10);
  }
  pFVar28 = (FLongDelayAPF *)0x0;
  ::operator_delete(pFVar25,0x10);
  fVar31 = this->SampleRate * ___real_3b9c58f1;
  pFVar26 = ::operator_new(0x28);
  pfVar4 = &(this->Settings).Diffusion;
  pFVar27 = pFVar28;
  if (pFVar26 != (FLongDelayAPF *)0x0) {
    pFVar27 = FLongDelayAPF::FLongDelayAPF
                        (pFVar26,*pfVar4,(int)fVar31,this->NumInternalBufferSamples);
  }
  if (pTVar3 == (TUniquePtr<Audio::FLongDelayAPF,TDefaultDelete<Audio::FLongDelayAPF>_> *)&local_80)
  {
    if (pFVar27 != (FLongDelayAPF *)0x0) {
      pFVar18 = (pFVar27->DelayLine).Ptr;
      if (pFVar18 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar18);
        ::operator_delete(pFVar18,0x48);
      }
      pFVar20 = (pFVar27->WorkBuffer).AllocatorInstance.Data;
      pFVar26 = pFVar27;
      if (pFVar20 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar20);
      }
      goto LAB_1444eff87;
    }
  }
  else {
    pFVar26 = pTVar3->Ptr;
    pTVar3->Ptr = pFVar27;
    if (pFVar26 != (FLongDelayAPF *)0x0) {
      pFVar18 = (pFVar26->DelayLine).Ptr;
      if (pFVar18 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar18);
        ::operator_delete(pFVar18,0x48);
      }
      pFVar20 = (pFVar26->WorkBuffer).AllocatorInstance.Data;
      if (pFVar20 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar20);
      }
LAB_1444eff87:
      ::operator_delete(pFVar26,0x28);
    }
  }
  fVar31 = this->SampleRate * ___real_3b6b9f47;
  pFVar26 = ::operator_new(0x28);
  pFVar27 = pFVar28;
  if (pFVar26 != (FLongDelayAPF *)0x0) {
    pFVar27 = FLongDelayAPF::FLongDelayAPF
                        (pFVar26,*pfVar4,(int)fVar31,this->NumInternalBufferSamples);
  }
  pTVar3 = &this->APF2;
  if (pTVar3 == (TUniquePtr<Audio::FLongDelayAPF,TDefaultDelete<Audio::FLongDelayAPF>_> *)&local_78)
  {
    if (pFVar27 != (FLongDelayAPF *)0x0) {
      pFVar18 = (pFVar27->DelayLine).Ptr;
      if (pFVar18 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar18);
        ::operator_delete(pFVar18,0x48);
      }
      pFVar20 = (pFVar27->WorkBuffer).AllocatorInstance.Data;
      pFVar26 = pFVar27;
      if (pFVar20 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar20);
      }
      goto LAB_1444f004a;
    }
  }
  else {
    pFVar26 = pTVar3->Ptr;
    pTVar3->Ptr = pFVar27;
    if (pFVar26 != (FLongDelayAPF *)0x0) {
      pFVar18 = (pFVar26->DelayLine).Ptr;
      if (pFVar18 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar18);
        ::operator_delete(pFVar18,0x48);
      }
      pFVar20 = (pFVar26->WorkBuffer).AllocatorInstance.Data;
      if (pFVar20 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar20);
      }
LAB_1444f004a:
      ::operator_delete(pFVar26,0x28);
    }
  }
  fVar31 = __real_3e000000;
  fVar30 = this->SampleRate * ___real_3c50a591;
  fVar32 = *pfVar4 - __real_3e000000;
  pFVar26 = ::operator_new(0x28);
  pFVar27 = pFVar28;
  if (pFVar26 != (FLongDelayAPF *)0x0) {
    pFVar27 = FLongDelayAPF::FLongDelayAPF
                        (pFVar26,fVar32,(int)fVar30,this->NumInternalBufferSamples);
  }
  pTVar3 = &this->APF3;
  if (pTVar3 == (TUniquePtr<Audio::FLongDelayAPF,TDefaultDelete<Audio::FLongDelayAPF>_> *)&local_70)
  {
    if (pFVar27 != (FLongDelayAPF *)0x0) {
      pFVar18 = (pFVar27->DelayLine).Ptr;
      if (pFVar18 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar18);
        ::operator_delete(pFVar18,0x48);
      }
      pFVar20 = (pFVar27->WorkBuffer).AllocatorInstance.Data;
      pFVar26 = pFVar27;
      if (pFVar20 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar20);
      }
      goto LAB_1444f011c;
    }
  }
  else {
    pFVar26 = pTVar3->Ptr;
    pTVar3->Ptr = pFVar27;
    if (pFVar26 != (FLongDelayAPF *)0x0) {
      pFVar18 = (pFVar26->DelayLine).Ptr;
      if (pFVar18 != (FAlignedBlockBuffer *)0x0) {
        FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar18);
        ::operator_delete(pFVar18,0x48);
      }
      pFVar20 = (pFVar26->WorkBuffer).AllocatorInstance.Data;
      if (pFVar20 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar20);
      }
LAB_1444f011c:
      ::operator_delete(pFVar26,0x28);
    }
  }
  fVar32 = this->SampleRate * ___real_3c187e69;
  fVar30 = *pfVar4;
  pFVar27 = ::operator_new(0x28);
  if (pFVar27 != (FLongDelayAPF *)0x0) {
    pFVar28 = FLongDelayAPF::FLongDelayAPF
                        (pFVar27,fVar30 - fVar31,(int)fVar32,this->NumInternalBufferSamples);
  }
  pTVar3 = &this->APF4;
  if (pTVar3 == (TUniquePtr<Audio::FLongDelayAPF,TDefaultDelete<Audio::FLongDelayAPF>_> *)local_68)
  {
    if (pFVar28 == (FLongDelayAPF *)0x0) goto LAB_1444f01f0;
    pFVar18 = (pFVar28->DelayLine).Ptr;
    if (pFVar18 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar18);
      ::operator_delete(pFVar18,0x48);
    }
    pFVar20 = (pFVar28->WorkBuffer).AllocatorInstance.Data;
    pFVar27 = pFVar28;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
  }
  else {
    pFVar27 = pTVar3->Ptr;
    pTVar3->Ptr = pFVar28;
    if (pFVar27 == (FLongDelayAPF *)0x0) goto LAB_1444f01f0;
    pFVar18 = (pFVar27->DelayLine).Ptr;
    if (pFVar18 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar18);
      ::operator_delete(pFVar18,0x48);
    }
    pFVar20 = (pFVar27->WorkBuffer).AllocatorInstance.Data;
    if (pFVar20 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar20);
    }
  }
  ::operator_delete(pFVar27,0x28);
LAB_1444f01f0:
  uVar16 = this->NumInternalBufferSamples;
  this->ModulationPhaseIncrement = __real_40c90fdb / this->SampleRate;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar10 = &(this->WorkBufferA).ArrayMax;
  (this->WorkBufferA).ArrayNum = 0;
  if (*piVar10 < (int)uVar16) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar16,&(this->WorkBufferA).AllocatorInstance,0,piVar10);
  }
  uVar16 = this->NumInternalBufferSamples;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar11 = &(this->WorkBufferB).ArrayMax;
  (this->WorkBufferB).ArrayNum = 0;
  if (*piVar11 < (int)uVar16) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar16,&(this->WorkBufferB).AllocatorInstance,0,piVar11);
  }
  uVar16 = this->NumInternalBufferSamples;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar12 = &(this->WorkBufferC).ArrayMax;
  (this->WorkBufferC).ArrayNum = 0;
  if (*piVar12 < (int)uVar16) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar16,&(this->WorkBufferC).AllocatorInstance,0,piVar12);
  }
  uVar16 = this->NumInternalBufferSamples;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar13 = &(this->LeftDelayModSamples).ArrayMax;
  (this->LeftDelayModSamples).ArrayNum = 0;
  if (*piVar13 < (int)uVar16) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar16,&(this->LeftDelayModSamples).AllocatorInstance,0,piVar13);
  }
  uVar16 = this->NumInternalBufferSamples;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar14 = &(this->RightDelayModSamples).ArrayMax;
  (this->RightDelayModSamples).ArrayNum = 0;
  if (*piVar14 < (int)uVar16) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar16,&(this->RightDelayModSamples).AllocatorInstance,0,piVar14);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->NumInternalBufferSamples,&(this->WorkBufferA).AllocatorInstance,piVar7,
             piVar10);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->NumInternalBufferSamples,&(this->WorkBufferB).AllocatorInstance,piVar8,
             piVar11);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->NumInternalBufferSamples,&(this->WorkBufferC).AllocatorInstance,piVar9,
             piVar12);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->NumInternalBufferSamples,&(this->LeftDelayModSamples).AllocatorInstance,
             &(this->LeftDelayModSamples).ArrayNum,piVar13);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,this->NumInternalBufferSamples,&(this->RightDelayModSamples).AllocatorInstance,
             &(this->RightDelayModSamples).ArrayNum,piVar14);
  FLateReflectionsPlateOutputs::ResizeAndZero
            (&this->LeftPlateOutputs,this->NumInternalBufferSamples);
  FLateReflectionsPlateOutputs::ResizeAndZero
            (&this->RightPlateOutputs,this->NumInternalBufferSamples);
  ApplySettings(this);
  return this;
}

// ~FLateReflectionsFast @ 1444f3a70

void __thiscall Audio::FLateReflectionsFast::~FLateReflectionsFast(FLateReflectionsFast *this)

{
  FScriptContainerElement *pFVar1;
  FLateReflectionsPlate *pFVar2;
  FLongDelayAPF *pFVar3;
  FAlignedBlockBuffer *pFVar4;
  FIntegerDelay *pFVar5;
  longlong lVar6;
  longlong lVar7;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar8;
  
  pFVar1 = (this->WorkBufferC).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkBufferB).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WorkBufferA).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RightDelayModSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LeftDelayModSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pTVar8 = &(this->RightPlateOutputs).Output;
  pFVar1 = (pTVar8->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  lVar6 = 7;
  lVar7 = 7;
  do {
    pFVar1 = pTVar8[-1].AllocatorInstance.Data;
    pTVar8 = pTVar8 + -1;
    lVar7 = lVar7 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar7 != 0);
  pTVar8 = &(this->LeftPlateOutputs).Output;
  pFVar1 = (pTVar8->AllocatorInstance).Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  do {
    pFVar1 = pTVar8[-1].AllocatorInstance.Data;
    pTVar8 = pTVar8 + -1;
    lVar6 = lVar6 + -1;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
  } while (lVar6 != 0);
  pFVar2 = (this->RightPlate).Ptr;
  if (pFVar2 != (FLateReflectionsPlate *)0x0) {
    FLateReflectionsPlate::~FLateReflectionsPlate(pFVar2);
    ::operator_delete(pFVar2,0xd8);
  }
  pFVar2 = (this->LeftPlate).Ptr;
  if (pFVar2 != (FLateReflectionsPlate *)0x0) {
    FLateReflectionsPlate::~FLateReflectionsPlate(pFVar2);
    ::operator_delete(pFVar2,0xd8);
  }
  pFVar3 = (this->APF4).Ptr;
  if (pFVar3 != (FLongDelayAPF *)0x0) {
    pFVar4 = (pFVar3->DelayLine).Ptr;
    if (pFVar4 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar4);
      ::operator_delete(pFVar4,0x48);
    }
    pFVar1 = (pFVar3->WorkBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar3,0x28);
  }
  pFVar3 = (this->APF3).Ptr;
  if (pFVar3 != (FLongDelayAPF *)0x0) {
    pFVar4 = (pFVar3->DelayLine).Ptr;
    if (pFVar4 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar4);
      ::operator_delete(pFVar4,0x48);
    }
    pFVar1 = (pFVar3->WorkBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar3,0x28);
  }
  pFVar3 = (this->APF2).Ptr;
  if (pFVar3 != (FLongDelayAPF *)0x0) {
    pFVar4 = (pFVar3->DelayLine).Ptr;
    if (pFVar4 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar4);
      ::operator_delete(pFVar4,0x48);
    }
    pFVar1 = (pFVar3->WorkBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar3,0x28);
  }
  pFVar3 = (this->APF1).Ptr;
  if (pFVar3 != (FLongDelayAPF *)0x0) {
    pFVar4 = (pFVar3->DelayLine).Ptr;
    if (pFVar4 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar4);
      ::operator_delete(pFVar4,0x48);
    }
    pFVar1 = (pFVar3->WorkBuffer).AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    ::operator_delete(pFVar3,0x28);
  }
  ::operator_delete((this->InputLPF).Ptr,0x10);
  pFVar5 = (this->PreDelay).Ptr;
  if (pFVar5 != (FIntegerDelay *)0x0) {
    pFVar4 = (pFVar5->DelayLine).Ptr;
    if (pFVar4 != (FAlignedBlockBuffer *)0x0) {
      FAlignedBlockBuffer::~FAlignedBlockBuffer(pFVar4);
      ::operator_delete(pFVar4,0x48);
    }
    ::operator_delete(pFVar5,0x20);
  }
  return;
}

// ApplySettings @ 1444f6d60

void __thiscall Audio::FLateReflectionsFast::ApplySettings(FLateReflectionsFast *this)

{
  float fVar1;
  FIntegerDelay *this_00;
  FLateReflectionsPlate *pFVar2;
  float fVar3;
  
  fVar3 = powf(__real_41200000,(this->Settings).LateGainDB * __real_3d4ccccd);
  fVar1 = (this->Settings).LateDelayMsec;
  this_00 = (this->PreDelay).Ptr;
  this->Gain = fVar3;
  FIntegerDelay::SetDelayLengthSamples(this_00,(int)(fVar1 * this->SampleRate * __real_3a83126f));
  FBufferOnePoleLPF::SetG((this->InputLPF).Ptr,__real_3f800000 - (this->Settings).Bandwidth);
  ((this->APF1).Ptr)->G = (this->Settings).Diffusion;
  ((this->APF2).Ptr)->G = (this->Settings).Diffusion;
  ((this->APF3).Ptr)->G = (this->Settings).Diffusion - __real_3e000000;
  ((this->APF4).Ptr)->G = (this->Settings).Diffusion - __real_3e000000;
  FLateReflectionsPlate::SetDensity((this->LeftPlate).Ptr,(this->Settings).Density);
  pFVar2 = (this->LeftPlate).Ptr;
  fVar1 = (this->Settings).Dampening;
  pFVar2->Dampening = fVar1;
  FBufferOnePoleLPF::SetG((pFVar2->LPF).Ptr,fVar1);
  ((this->LeftPlate).Ptr)->Decay = (this->Settings).Decay;
  FLateReflectionsPlate::SetDensity((this->RightPlate).Ptr,(this->Settings).Density);
  pFVar2 = (this->RightPlate).Ptr;
  fVar1 = (this->Settings).Dampening;
  pFVar2->Dampening = fVar1;
  FBufferOnePoleLPF::SetG((pFVar2->LPF).Ptr,fVar1);
  ((this->RightPlate).Ptr)->Decay = (this->Settings).Decay;
  return;
}

// ClampSettings @ 1444f76f0

void __cdecl Audio::FLateReflectionsFast::ClampSettings(FLateReflectionsFastSettings *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = __real_3f7fff58;
  fVar1 = param_1->LateDelayMsec;
  if (__real_44fa0000 <= param_1->LateDelayMsec) {
    fVar1 = __real_44fa0000;
  }
  fVar3 = param_1->Bandwidth;
  if (__real_3f7fff58 <= param_1->Bandwidth) {
    fVar3 = __real_3f7fff58;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  param_1->LateDelayMsec = fVar1;
  fVar1 = param_1->LateGainDB;
  if (0.0 <= fVar1) {
    fVar1 = 0.0;
  }
  param_1->Bandwidth = fVar3;
  fVar3 = param_1->Diffusion;
  if (fVar2 <= param_1->Diffusion) {
    fVar3 = fVar2;
  }
  param_1->LateGainDB = fVar1;
  fVar1 = param_1->Dampening;
  if (fVar2 <= param_1->Dampening) {
    fVar1 = fVar2;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_1->Diffusion = fVar3;
  param_1->Dampening = fVar1;
  fVar2 = param_1->Decay;
  if (__real_3f800000 <= param_1->Decay) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= __real_38d1b717) {
    fVar2 = __real_38d1b717;
  }
  param_1->Decay = fVar2;
  fVar2 = param_1->Density;
  if (__real_3f800000 <= param_1->Density) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  param_1->Density = fVar2;
  return;
}

// FlushAudio @ 1444fbbe0

void __thiscall Audio::FLateReflectionsFast::FlushAudio(FLateReflectionsFast *this)

{
  FIntegerDelay *pFVar1;
  FLongDelayAPF *pFVar2;
  
  pFVar1 = (this->PreDelay).Ptr;
  FAlignedBlockBuffer::ClearSamples((pFVar1->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((pFVar1->DelayLine).Ptr,pFVar1->MaxNumDelaySamples);
  FBufferOnePoleLPF::FlushAudio((this->InputLPF).Ptr);
  pFVar2 = (this->APF1).Ptr;
  FAlignedBlockBuffer::ClearSamples((pFVar2->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((pFVar2->DelayLine).Ptr,pFVar2->NumDelaySamples);
  pFVar2 = (this->APF2).Ptr;
  FAlignedBlockBuffer::ClearSamples((pFVar2->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((pFVar2->DelayLine).Ptr,pFVar2->NumDelaySamples);
  pFVar2 = (this->APF3).Ptr;
  FAlignedBlockBuffer::ClearSamples((pFVar2->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((pFVar2->DelayLine).Ptr,pFVar2->NumDelaySamples);
  pFVar2 = (this->APF4).Ptr;
  FAlignedBlockBuffer::ClearSamples((pFVar2->DelayLine).Ptr);
  FAlignedBlockBuffer::AddZeros((pFVar2->DelayLine).Ptr,pFVar2->NumDelaySamples);
  FLateReflectionsPlate::FlushAudio((this->LeftPlate).Ptr);
  FLateReflectionsPlate::FlushAudio((this->RightPlate).Ptr);
  return;
}

// GeneraterPlateModulations @ 144502c30

void __thiscall
Audio::FLateReflectionsFast::GeneraterPlateModulations
          (FLateReflectionsFast *this,int param_1,TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  FScriptContainerElement *pFVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong lVar16;
  float fVar17;
  
  uVar15 = (ulonglong)param_1;
  if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
  }
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (*piVar1 < param_1) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_1,&param_2->AllocatorInstance,0,piVar1);
  }
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < param_1) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_1,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_1,&param_2->AllocatorInstance,&param_2->ArrayNum,piVar1);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_1,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
  fVar11 = __real_3e4f817a;
  fVar10 = __real_3f22f983;
  fVar9 = __real_40c90fdb;
  fVar8 = __real_40490fdb;
  fVar7 = __real_3f000000;
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  pFVar4 = (param_2->AllocatorInstance).Data;
  pFVar5 = (param_3->AllocatorInstance).Data;
  if (uVar15 < 4) {
    lVar14 = 0;
  }
  else {
    lVar16 = (longlong)pFVar4 - (longlong)pFVar5;
    lVar13 = (uVar15 - 4 >> 2) + 1;
    pFVar12 = pFVar5 + 4;
    lVar14 = lVar13 * 4;
    do {
      fVar2 = this->ModulationPhase;
      fVar3 = this->ModulationQuadPhase;
      fVar17 = this->ModulationPhaseIncrement + fVar2;
      this->ModulationPhase = fVar17;
      if (fVar8 < fVar17) {
        this->ModulationPhase = fVar17 - fVar9;
      }
      fVar17 = fVar3 + this->ModulationPhaseIncrement;
      this->ModulationQuadPhase = fVar17;
      if (fVar8 < fVar17) {
        this->ModulationQuadPhase = fVar17 - fVar9;
      }
      *(float *)(pFVar12 + lVar16 + -4) =
           (float)(this->LeftPlateDelays).NumSamplesModulatedDelta *
           ((fVar10 - (float)((uint)fVar2 & uVar6) * fVar11) * fVar2 + fVar7) +
           (float)(this->LeftPlateDelays).NumSamplesModulatedBase;
      *(float *)(pFVar12 + -4) =
           (float)(this->RightPlateDelays).NumSamplesModulatedDelta *
           ((fVar10 - (float)((uint)fVar3 & uVar6) * fVar11) * fVar3 + fVar7) +
           (float)(this->RightPlateDelays).NumSamplesModulatedBase;
      fVar2 = this->ModulationPhase;
      fVar3 = this->ModulationQuadPhase;
      fVar17 = this->ModulationPhaseIncrement + fVar2;
      this->ModulationPhase = fVar17;
      if (fVar8 < fVar17) {
        this->ModulationPhase = fVar17 - fVar9;
      }
      fVar17 = fVar3 + this->ModulationPhaseIncrement;
      this->ModulationQuadPhase = fVar17;
      if (fVar8 < fVar17) {
        this->ModulationQuadPhase = fVar17 - fVar9;
      }
      *(float *)(pFVar12 + lVar16) =
           (float)(this->LeftPlateDelays).NumSamplesModulatedDelta *
           ((fVar10 - (float)((uint)fVar2 & uVar6) * fVar11) * fVar2 + fVar7) +
           (float)(this->LeftPlateDelays).NumSamplesModulatedBase;
      *(float *)pFVar12 =
           (float)(this->RightPlateDelays).NumSamplesModulatedDelta *
           ((fVar10 - (float)((uint)fVar3 & uVar6) * fVar11) * fVar3 + fVar7) +
           (float)(this->RightPlateDelays).NumSamplesModulatedBase;
      fVar2 = this->ModulationPhase;
      fVar3 = this->ModulationQuadPhase;
      fVar17 = this->ModulationPhaseIncrement + fVar2;
      this->ModulationPhase = fVar17;
      if (fVar8 < fVar17) {
        this->ModulationPhase = fVar17 - fVar9;
      }
      fVar17 = fVar3 + this->ModulationPhaseIncrement;
      this->ModulationQuadPhase = fVar17;
      if (fVar8 < fVar17) {
        this->ModulationQuadPhase = fVar17 - fVar9;
      }
      *(float *)(pFVar12 + lVar16 + 4) =
           (float)(this->LeftPlateDelays).NumSamplesModulatedDelta *
           ((fVar10 - (float)((uint)fVar2 & uVar6) * fVar11) * fVar2 + fVar7) +
           (float)(this->LeftPlateDelays).NumSamplesModulatedBase;
      *(float *)(pFVar12 + 4) =
           (float)(this->RightPlateDelays).NumSamplesModulatedDelta *
           ((fVar10 - (float)((uint)fVar3 & uVar6) * fVar11) * fVar3 + fVar7) +
           (float)(this->RightPlateDelays).NumSamplesModulatedBase;
      fVar2 = this->ModulationPhase;
      fVar3 = this->ModulationQuadPhase;
      fVar17 = this->ModulationPhaseIncrement + fVar2;
      this->ModulationPhase = fVar17;
      if (fVar8 < fVar17) {
        this->ModulationPhase = fVar17 - fVar9;
      }
      fVar17 = fVar3 + this->ModulationPhaseIncrement;
      this->ModulationQuadPhase = fVar17;
      if (fVar8 < fVar17) {
        this->ModulationQuadPhase = fVar17 - fVar9;
      }
      *(float *)(pFVar12 + lVar16 + 8) =
           (float)(this->LeftPlateDelays).NumSamplesModulatedDelta *
           ((fVar10 - (float)((uint)fVar2 & uVar6) * fVar11) * fVar2 + fVar7) +
           (float)(this->LeftPlateDelays).NumSamplesModulatedBase;
      *(float *)(pFVar12 + 8) =
           (float)(this->RightPlateDelays).NumSamplesModulatedDelta *
           ((fVar10 - (float)((uint)fVar3 & uVar6) * fVar11) * fVar3 + fVar7) +
           (float)(this->RightPlateDelays).NumSamplesModulatedBase;
      pFVar12 = pFVar12 + 0x10;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  if (lVar14 < (longlong)uVar15) {
    pFVar12 = pFVar5 + lVar14 * 4;
    lVar14 = uVar15 - lVar14;
    do {
      fVar2 = this->ModulationPhase;
      fVar3 = this->ModulationQuadPhase;
      fVar17 = this->ModulationPhaseIncrement + fVar2;
      this->ModulationPhase = fVar17;
      if (fVar8 < fVar17) {
        this->ModulationPhase = fVar17 - fVar9;
      }
      fVar17 = fVar3 + this->ModulationPhaseIncrement;
      this->ModulationQuadPhase = fVar17;
      if (fVar8 < fVar17) {
        this->ModulationQuadPhase = fVar17 - fVar9;
      }
      *(float *)(pFVar12 + ((longlong)pFVar4 - (longlong)pFVar5)) =
           (float)(this->LeftPlateDelays).NumSamplesModulatedDelta *
           ((fVar10 - (float)((uint)fVar2 & uVar6) * fVar11) * fVar2 + fVar7) +
           (float)(this->LeftPlateDelays).NumSamplesModulatedBase;
      *(float *)pFVar12 =
           (float)(this->RightPlateDelays).NumSamplesModulatedDelta *
           ((fVar10 - (float)((uint)fVar3 & uVar6) * fVar11) * fVar3 + fVar7) +
           (float)(this->RightPlateDelays).NumSamplesModulatedBase;
      pFVar12 = pFVar12 + 4;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  return;
}

// ProcessAudio @ 14450d180

void __thiscall
Audio::FLateReflectionsFast::ProcessAudio
          (FLateReflectionsFast *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,int param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3,
          TArray<float,TAlignedHeapAllocator<16>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  
  if ((1 < param_2 - 1U) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(InNumChannels == 1) || (InNumChannels == 2)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\LateReflectionsFast.cpp"
                         ,0x174,L"FLateReflections only supports 1 or 2 channel input audio"), bVar5
     )) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar10 = (longlong)param_1->ArrayNum / (longlong)param_2;
  uVar9 = (uint)uVar10;
  uVar10 = uVar10 & 0xffffffff;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar10);
  }
  iVar7 = 0;
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < (int)uVar9) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar9,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < (int)uVar9) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,uVar9,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,uVar9,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,uVar9,&param_4->AllocatorInstance,&param_4->ArrayNum,&param_4->ArrayMax);
  pFVar1 = (param_4->AllocatorInstance).Data;
  iVar11 = 0;
  pFVar2 = (param_3->AllocatorInstance).Data;
  pFVar3 = (param_1->AllocatorInstance).Data;
  while (0 < (int)uVar9) {
    iVar8 = (int)uVar10;
    iVar6 = iVar8;
    if (this->NumInternalBufferSamples < iVar8) {
      iVar6 = this->NumInternalBufferSamples;
    }
    ProcessAudioBuffer(this,(float *)(pFVar3 + (longlong)iVar7 * 4),iVar6,param_2,
                       (float *)(pFVar2 + (longlong)iVar11 * 4),
                       (float *)(pFVar1 + (longlong)iVar11 * 4));
    uVar9 = iVar8 - iVar6;
    uVar10 = (ulonglong)uVar9;
    iVar11 = iVar11 + iVar6;
    iVar7 = iVar7 + iVar6 * param_2;
  }
  return;
}

// ProcessAudioBuffer @ 1445102e0

void __thiscall
Audio::FLateReflectionsFast::ProcessAudioBuffer
          (FLateReflectionsFast *this,float *param_1,int param_2,int param_3,float *param_4,
          float *param_5)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  undefined8 uVar10;
  float *pfVar11;
  undefined8 uVar12;
  bool bVar13;
  longlong lVar14;
  undefined4 uStack_1cc;
  TArrayView<float_const_,int> local_1c8;
  TArrayView<float_const_,int> local_1b8;
  TArrayView<float_const_,int> local_1a8;
  TArrayView<float_const_,int> local_198;
  TArrayView<float_const_,int> local_188;
  TArrayView<float_const_,int> local_178;
  TArrayView<float,int> local_168;
  TArrayView<float_const_,int> local_158;
  TArrayView<float_const_,int> local_148;
  TArrayView<float_const_,int> local_138;
  TArrayView<float_const_,int> local_128;
  TArrayView<float_const_,int> local_118;
  TArrayView<float,int> local_108;
  TArrayView<float,int> local_f8;
  TArrayView<float,int> local_e8;
  TArrayView<float,int> local_d8;
  TArrayView<float,int> local_c8;
  TArrayView<float,int> local_b8;
  TArrayView<float,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float,int> local_48 [2];
  
  lVar14 = (longlong)param_2;
  if ((1 < param_3 - 1U) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(1 == InNumChannels) || (2 == InNumChannels)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\LateReflectionsFast.cpp"
                          ,0x1a4,L"FLateReflections only supports 1 and 2 channel input audio"),
     bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  pTVar1 = &this->WorkBufferA;
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
  }
  (this->WorkBufferA).ArrayNum = 0;
  if ((this->WorkBufferA).ArrayMax < param_2) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_2,&pTVar1->AllocatorInstance,0,&(this->WorkBufferA).ArrayMax);
  }
  pTVar2 = &this->WorkBufferB;
  (this->WorkBufferB).ArrayNum = 0;
  if ((this->WorkBufferB).ArrayMax < param_2) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_2,&pTVar2->AllocatorInstance,0,&(this->WorkBufferB).ArrayMax);
  }
  pTVar3 = &this->LeftDelayModSamples;
  (this->LeftDelayModSamples).ArrayNum = 0;
  if ((this->LeftDelayModSamples).ArrayMax < param_2) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_2,&pTVar3->AllocatorInstance,0,&(this->LeftDelayModSamples).ArrayMax);
  }
  pTVar4 = &this->RightDelayModSamples;
  (this->RightDelayModSamples).ArrayNum = 0;
  if ((this->RightDelayModSamples).ArrayMax < param_2) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,param_2,&pTVar4->AllocatorInstance,0,&(this->RightDelayModSamples).ArrayMax);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_2,&pTVar1->AllocatorInstance,&(this->WorkBufferA).ArrayNum,
             &(this->WorkBufferA).ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_2,&pTVar2->AllocatorInstance,&(this->WorkBufferB).ArrayNum,
             &(this->WorkBufferB).ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_2,&pTVar3->AllocatorInstance,&(this->LeftDelayModSamples).ArrayNum,
             &(this->LeftDelayModSamples).ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,param_2,&pTVar4->AllocatorInstance,&(this->RightDelayModSamples).ArrayNum,
             &(this->RightDelayModSamples).ArrayMax);
  if (param_3 == 1) {
    memcpy((pTVar1->AllocatorInstance).Data,param_1,lVar14 * 4);
  }
  else {
    if (param_3 != 2) {
      memset(param_4,0,lVar14 << 2);
      memset(param_5,0,lVar14 << 2);
      return;
    }
    BufferSum2ChannelToMonoFast(param_1,(float *)(pTVar1->AllocatorInstance).Data,param_2);
  }
  pFVar8 = (pTVar1->AllocatorInstance).Data;
  fVar5 = (this->Settings).Bandwidth;
  fVar6 = this->Gain;
  iVar7 = (this->WorkBufferA).ArrayNum;
  if ((iVar7 < 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar13)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_108._12_4_ = uStack_1cc;
  local_108.DataPtr = (float *)pFVar8;
  local_108.ArrayNum = iVar7;
  ArrayMultiplyByConstantInPlace(&local_108,(fVar5 * fVar6) / (float)param_3);
  FIntegerDelay::ProcessAudio((this->PreDelay).Ptr,pTVar1,pTVar2);
  FBufferOnePoleLPF::ProcessAudio((this->InputLPF).Ptr,pTVar2,pTVar1);
  FLongDelayAPF::ProcessAudio((this->APF1).Ptr,pTVar1,pTVar2);
  FLongDelayAPF::ProcessAudio((this->APF2).Ptr,pTVar2,pTVar1);
  FLongDelayAPF::ProcessAudio((this->APF3).Ptr,pTVar1,pTVar2);
  FLongDelayAPF::ProcessAudio((this->APF4).Ptr,pTVar2,pTVar1);
  FLateReflectionsPlate::PeekDelayLine((this->LeftPlate).Ptr,param_2,pTVar2);
  FLateReflectionsPlate::PeekDelayLine((this->RightPlate).Ptr,param_2,&this->WorkBufferC);
  GeneraterPlateModulations(this,param_2,pTVar3,pTVar4);
  FLateReflectionsPlate::ProcessAudioFrames
            ((this->LeftPlate).Ptr,pTVar1,&this->WorkBufferC,pTVar3,&this->LeftPlateOutputs);
  FLateReflectionsPlate::ProcessAudioFrames
            ((this->RightPlate).Ptr,pTVar1,pTVar2,&this->RightDelayModSamples,
             &this->RightPlateOutputs);
  local_198.DataPtr = (float *)(this->LeftPlateOutputs).Taps[1].AllocatorInstance.Data;
  local_158.DataPtr = (float *)(this->LeftPlateOutputs).Taps[2].AllocatorInstance.Data;
  local_188.DataPtr = (float *)(this->LeftPlateOutputs).Taps[3].AllocatorInstance.Data;
  local_148.DataPtr = (float *)(this->LeftPlateOutputs).Taps[4].AllocatorInstance.Data;
  local_178.DataPtr = (float *)(this->LeftPlateOutputs).Taps[5].AllocatorInstance.Data;
  local_138.DataPtr = (float *)(this->LeftPlateOutputs).Taps[6].AllocatorInstance.Data;
  local_168.DataPtr = param_5;
  local_168.ArrayNum = param_2;
  local_198.ArrayNum = param_2;
  local_158.ArrayNum = param_2;
  local_188.ArrayNum = param_2;
  local_148.ArrayNum = param_2;
  local_178.ArrayNum = param_2;
  local_138.ArrayNum = param_2;
  local_128.DataPtr = (float *)(this->RightPlateOutputs).Taps[1].AllocatorInstance.Data;
  local_1c8.DataPtr = (float *)(this->RightPlateOutputs).Taps[2].AllocatorInstance.Data;
  local_118.DataPtr = (float *)(this->RightPlateOutputs).Taps[3].AllocatorInstance.Data;
  local_1b8.DataPtr = (float *)(this->RightPlateOutputs).Taps[4].AllocatorInstance.Data;
  local_108.DataPtr = (float *)(this->RightPlateOutputs).Taps[5].AllocatorInstance.Data;
  local_1a8.DataPtr = (float *)(this->RightPlateOutputs).Taps[6].AllocatorInstance.Data;
  local_128.ArrayNum = param_2;
  local_1c8.ArrayNum = param_2;
  local_118.ArrayNum = param_2;
  local_1b8.ArrayNum = param_2;
  local_108.ArrayNum = param_2;
  local_1a8.ArrayNum = param_2;
  memcpy(param_4,(this->RightPlateOutputs).Taps[0].AllocatorInstance.Data,lVar14 * 4);
  uVar10._4_4_ = uStack_1cc;
  uVar10._0_4_ = param_2;
  local_f8.DataPtr = param_4;
  local_f8._8_8_ = uVar10;
  ArrayMixIn(&local_1c8,&local_f8);
  local_e8.DataPtr = param_4;
  local_e8._8_8_ = uVar10;
  ArraySubtractInPlace2(&local_e8,&local_1b8);
  local_d8.DataPtr = param_4;
  local_d8._8_8_ = uVar10;
  ArrayMixIn(&local_1a8,&local_d8);
  local_c8.DataPtr = param_4;
  local_c8._8_8_ = uVar10;
  ArraySubtractInPlace2(&local_c8,&local_198);
  local_b8.DataPtr = param_4;
  local_b8._8_8_ = uVar10;
  ArraySubtractInPlace2(&local_b8,&local_188);
  local_a8.DataPtr = param_4;
  local_a8._8_8_ = uVar10;
  ArraySubtractInPlace2(&local_a8,&local_178);
  memcpy(param_5,(this->LeftPlateOutputs).Taps[0].AllocatorInstance.Data,lVar14 * 4);
  uVar10 = local_168._8_8_;
  pfVar11 = local_168.DataPtr;
  ArrayMixIn(&local_158,&local_168);
  uVar12 = local_168._8_8_;
  local_98.DataPtr = pfVar11;
  local_168.ArrayNum = (int)uVar10;
  local_168._12_4_ = SUB84(uVar10,4);
  local_98.ArrayNum = local_168.ArrayNum;
  local_98._12_4_ = local_168._12_4_;
  local_168._8_8_ = uVar12;
  ArraySubtractInPlace2(&local_98,&local_148);
  uVar12 = local_168._8_8_;
  local_88.DataPtr = pfVar11;
  local_168.ArrayNum = (int)uVar10;
  local_168._12_4_ = SUB84(uVar10,4);
  local_88.ArrayNum = local_168.ArrayNum;
  local_88._12_4_ = local_168._12_4_;
  local_168._8_8_ = uVar12;
  ArrayMixIn(&local_138,&local_88);
  uVar12 = local_168._8_8_;
  local_78.DataPtr = pfVar11;
  local_168.ArrayNum = (int)uVar10;
  local_168._12_4_ = SUB84(uVar10,4);
  local_78.ArrayNum = local_168.ArrayNum;
  local_78._12_4_ = local_168._12_4_;
  local_168._8_8_ = uVar12;
  ArraySubtractInPlace2(&local_78,&local_128);
  uVar12 = local_168._8_8_;
  local_68.DataPtr = pfVar11;
  local_168.ArrayNum = (int)uVar10;
  local_168._12_4_ = SUB84(uVar10,4);
  local_68.ArrayNum = local_168.ArrayNum;
  local_68._12_4_ = local_168._12_4_;
  local_168._8_8_ = uVar12;
  ArraySubtractInPlace2(&local_68,&local_118);
  uVar12 = local_168._8_8_;
  local_58.DataPtr = local_108.DataPtr;
  local_58.ArrayNum = local_108.ArrayNum;
  local_58._12_4_ = local_108._12_4_;
  local_48[0].DataPtr = pfVar11;
  local_168.ArrayNum = (int)uVar10;
  local_168._12_4_ = SUB84(uVar10,4);
  local_48[0].ArrayNum = local_168.ArrayNum;
  local_48[0]._12_4_ = local_168._12_4_;
  local_168._8_8_ = uVar12;
  ArraySubtractInPlace2(local_48,&local_58);
  return;
}

// SetSettings @ 14451c920

void __thiscall
Audio::FLateReflectionsFast::SetSettings
          (FLateReflectionsFast *this,FLateReflectionsFastSettings *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = __real_3f7fff58;
  fVar3 = param_1->LateGainDB;
  fVar4 = param_1->Bandwidth;
  fVar1 = param_1->Diffusion;
  (this->Settings).LateDelayMsec = param_1->LateDelayMsec;
  (this->Settings).LateGainDB = fVar3;
  (this->Settings).Bandwidth = fVar4;
  (this->Settings).Diffusion = fVar1;
  fVar3 = param_1->Decay;
  (this->Settings).Dampening = param_1->Dampening;
  (this->Settings).Decay = fVar3;
  (this->Settings).Density = param_1->Density;
  fVar3 = (this->Settings).LateDelayMsec;
  if (__real_44fa0000 <= fVar3) {
    fVar3 = __real_44fa0000;
  }
  fVar4 = (this->Settings).Bandwidth;
  if (fVar2 <= fVar4) {
    fVar4 = fVar2;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  (this->Settings).LateDelayMsec = fVar3;
  fVar3 = (this->Settings).LateGainDB;
  if (0.0 <= fVar3) {
    fVar3 = 0.0;
  }
  (this->Settings).Bandwidth = fVar4;
  fVar4 = (this->Settings).Diffusion;
  if (fVar2 <= fVar4) {
    fVar4 = fVar2;
  }
  (this->Settings).LateGainDB = fVar3;
  fVar3 = (this->Settings).Dampening;
  if (fVar2 <= fVar3) {
    fVar3 = fVar2;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  (this->Settings).Diffusion = fVar4;
  (this->Settings).Dampening = fVar3;
  fVar3 = (this->Settings).Decay;
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (fVar3 <= __real_38d1b717) {
    fVar3 = __real_38d1b717;
  }
  (this->Settings).Decay = fVar3;
  fVar3 = (this->Settings).Density;
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  (this->Settings).Density = fVar3;
  ApplySettings(this);
  return;
}

