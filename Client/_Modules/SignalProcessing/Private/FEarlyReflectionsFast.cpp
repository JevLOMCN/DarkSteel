// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 7

// FEarlyReflectionsFast @ 1444a3d60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FEarlyReflectionsFast * __thiscall
Audio::FEarlyReflectionsFast::FEarlyReflectionsFast
          (FEarlyReflectionsFast *this,float param_1,int param_2,
          FEarlyReflectionsFastSettings *param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  FFDNDelaySettings local_28 [2];
  
  fVar3 = param_3->PreDelayMsec;
  fVar4 = param_3->Bandwidth;
  fVar1 = param_3->Decay;
  (this->Settings).Gain = param_3->Gain;
  (this->Settings).PreDelayMsec = fVar3;
  (this->Settings).Bandwidth = fVar4;
  (this->Settings).Decay = fVar1;
  (this->Settings).Absorption = param_3->Absorption;
  fVar3 = param_1 * ___real_3cc36f2d;
  (this->LeftInputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  fVar4 = param_1 * ___real_3c93438c;
  (this->LeftInputBuffer).ArrayNum = 0;
  (this->LeftInputBuffer).ArrayMax = 0;
  local_28[0].APF0DelayNumSamples = (int)fVar3;
  (this->LeftWorkBufferA).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftWorkBufferA).ArrayNum = 0;
  (this->LeftWorkBufferA).ArrayMax = 0;
  (this->LeftWorkBufferB).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LeftWorkBufferB).ArrayNum = 0;
  (this->LeftWorkBufferB).ArrayMax = 0;
  (this->RightInputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RightInputBuffer).ArrayNum = 0;
  (this->RightInputBuffer).ArrayMax = 0;
  this->SampleRate = param_1;
  fVar3 = param_1 * ___real_3d82677b;
  local_28[0].APF1DelayNumSamples = (int)fVar4;
  (this->RightWorkBufferA).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RightWorkBufferA).ArrayNum = 0;
  (this->RightWorkBufferA).ArrayMax = 0;
  (this->RightWorkBufferB).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RightWorkBufferB).ArrayNum = 0;
  (this->RightWorkBufferB).ArrayMax = 0;
  local_28[0].APF2DelayNumSamples = (int)fVar3;
  local_28[0].APF3DelayNumSamples = (int)(param_1 * ___real_3d3e9e04);
  FFeedbackDelayNetwork::FFeedbackDelayNetwork(&this->LeftFDN,param_2,local_28);
  local_28[0].APF0DelayNumSamples = (int)(param_1 * ___real_3d3ffe59);
  local_28[0].APF1DelayNumSamples = (int)(param_1 * ___real_3cbc8d84);
  local_28[0].APF2DelayNumSamples = (int)(param_1 * ___real_3d129362);
  local_28[0].APF3DelayNumSamples = (int)(param_1 * ___real_3d610652);
  FFeedbackDelayNetwork::FFeedbackDelayNetwork(&this->RightFDN,param_2,local_28);
  iVar2 = (int)((float)(int)param_1 + (float)(int)param_1);
  FIntegerDelay::FIntegerDelay(&this->LeftPreDelay,iVar2,0,param_2);
  FIntegerDelay::FIntegerDelay(&this->RightPreDelay,iVar2,0,param_2);
  (this->LeftInputLPF).CutoffFrequency = 0.0;
  (this->LeftInputLPF).B1 = 0.0;
  (this->LeftInputLPF).A0 = 1.0;
  (this->LeftInputLPF).Z1 = 0.0;
  (this->RightInputLPF).CutoffFrequency = 0.0;
  (this->RightInputLPF).B1 = 0.0;
  (this->RightInputLPF).A0 = 1.0;
  (this->RightInputLPF).Z1 = 0.0;
  (this->LeftCoefficients).InputScale = 0.25;
  (this->RightCoefficients).InputScale = 0.25;
  fVar3 = (this->Settings).Gain;
  if (__real_3f7ff972 <= fVar3) {
    fVar3 = __real_3f7ff972;
  }
  fVar4 = (this->Settings).Bandwidth;
  if (__real_3f7fff58 <= fVar4) {
    fVar4 = __real_3f7fff58;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  (this->Settings).Gain = fVar3;
  fVar3 = (this->Settings).PreDelayMsec;
  if (__real_447a0000 <= fVar3) {
    fVar3 = __real_447a0000;
  }
  (this->Settings).Bandwidth = fVar4;
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  (this->Settings).PreDelayMsec = fVar3;
  fVar3 = (this->Settings).Decay;
  if (__real_3f800000 <= fVar3) {
    fVar3 = __real_3f800000;
  }
  if (fVar3 <= __real_38d1b717) {
    fVar3 = __real_38d1b717;
  }
  (this->Settings).Decay = fVar3;
  fVar3 = (this->Settings).Absorption;
  if (__real_3f7fff58 <= fVar3) {
    fVar3 = __real_3f7fff58;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  (this->Settings).Absorption = fVar3;
  ApplySettings(this);
  return this;
}

// ~FEarlyReflectionsFast @ 1444a6350

void __thiscall Audio::FEarlyReflectionsFast::~FEarlyReflectionsFast(FEarlyReflectionsFast *this)

{
  FScriptContainerElement *pFVar1;
  
  FIntegerDelay::~FIntegerDelay(&this->RightPreDelay);
  FIntegerDelay::~FIntegerDelay(&this->LeftPreDelay);
  FFeedbackDelayNetwork::~FFeedbackDelayNetwork(&this->RightFDN);
  FFeedbackDelayNetwork::~FFeedbackDelayNetwork(&this->LeftFDN);
  pFVar1 = (this->RightWorkBufferB).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RightWorkBufferA).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RightInputBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LeftWorkBufferB).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LeftWorkBufferA).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->LeftInputBuffer).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// ApplySettings @ 1444a9cc0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Audio::FEarlyReflectionsFast::ApplySettings(FEarlyReflectionsFast *this)

{
  code *pcVar1;
  undefined8 uVar2;
  float fVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  iVar5 = (int)((float)(int)this->SampleRate * (this->Settings).PreDelayMsec * __real_3a83126f);
  FIntegerDelay::SetDelayLengthSamples(&this->LeftPreDelay,iVar5);
  FIntegerDelay::SetDelayLengthSamples(&this->RightPreDelay,iVar5);
  fVar3 = __real_3f800000;
  fVar6 = (this->Settings).Bandwidth;
  if (0.0 <= fVar6) {
    if ((__real_3f800000 < fVar6) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InLinear <= 1.f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EarlyReflectionsFast.cpp"
                           ,0xd,L""), bVar4)) goto code_r0x0001444a9d7d;
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InLinear >= 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EarlyReflectionsFast.cpp"
                       ,0xc,L"");
    if (bVar4) {
code_r0x0001444a9d7d:
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  fVar6 = logf(fVar6 + fVar3);
  fVar6 = fVar6 * InvLn2;
  (this->LeftInputLPF).B1 = fVar6;
  (this->RightInputLPF).B1 = fVar6;
  fVar12 = __real_3f7ff972;
  (this->LeftInputLPF).A0 = fVar3 - fVar6;
  (this->RightInputLPF).A0 = fVar3 - fVar6;
  fVar6 = (this->Settings).Absorption;
  fVar11 = fVar6 - ___real_3d8f5c29;
  fVar7 = fVar11;
  if (fVar12 <= fVar11) {
    fVar7 = fVar12;
  }
  fVar8 = fVar6 + __real_3dcccccd;
  if (fVar12 <= fVar6 + __real_3dcccccd) {
    fVar8 = fVar12;
  }
  fVar10 = fVar6 - __real_3df5c28f;
  if (fVar12 <= fVar6 - __real_3df5c28f) {
    fVar10 = fVar12;
  }
  fVar9 = fVar6 + __real_3da3d70a;
  if (fVar12 <= fVar6 + __real_3da3d70a) {
    fVar9 = fVar12;
  }
  (this->LeftCoefficients).LPFB[3] = fVar7;
  (this->LeftCoefficients).LPFB[0] = fVar8;
  (this->LeftCoefficients).LPFB[1] = fVar10;
  (this->LeftCoefficients).LPFB[2] = fVar9;
  (this->LeftCoefficients).LPFA[0] = fVar3 - fVar8;
  (this->LeftCoefficients).LPFA[1] = fVar3 - fVar10;
  fVar8 = fVar6 + __real_3d4ccccd;
  (this->LeftCoefficients).LPFA[2] = fVar3 - fVar9;
  fVar12 = __real_3f7fbe77;
  (this->LeftCoefficients).LPFA[3] = fVar3 - fVar7;
  if (fVar12 <= fVar11) {
    fVar11 = fVar12;
  }
  (this->LeftCoefficients).APFG[0] = 0.1;
  if (fVar12 <= fVar8) {
    fVar8 = fVar12;
  }
  (this->LeftCoefficients).APFG[1] = 0.2;
  fVar7 = fVar6 + ___real_3e2e147b;
  fVar6 = fVar6 - __real_3de147ae;
  (this->LeftCoefficients).APFG[2] = 0.3;
  (this->LeftCoefficients).APFG[3] = 0.4;
  (this->RightCoefficients).LPFB[1] = fVar11;
  if (fVar12 <= fVar7) {
    fVar7 = fVar12;
  }
  (this->RightCoefficients).LPFB[2] = fVar8;
  if (fVar12 <= fVar6) {
    fVar6 = fVar12;
  }
  (this->RightCoefficients).LPFB[0] = fVar7;
  (this->RightCoefficients).LPFB[3] = fVar6;
  (this->RightCoefficients).LPFA[0] = fVar3 - fVar7;
  (this->RightCoefficients).LPFA[1] = fVar3 - fVar11;
  (this->RightCoefficients).LPFA[2] = fVar3 - fVar8;
  (this->RightCoefficients).LPFA[3] = fVar3 - fVar6;
  fVar6 = (this->Settings).Decay;
  (this->RightCoefficients).APFG[0] = 0.1;
  (this->RightCoefficients).APFG[1] = 0.2;
  (this->RightCoefficients).APFG[2] = 0.3;
  (this->RightCoefficients).APFG[3] = 0.4;
  fVar12 = (fVar3 - fVar6) * __real_3f000000;
  (this->LeftCoefficients).Feedback = fVar12;
  fVar6 = (this->LeftCoefficients).InputScale;
  fVar3 = (this->LeftCoefficients).APFG[0];
  uVar2 = *(undefined8 *)((this->LeftCoefficients).APFG + 1);
  (this->RightCoefficients).Feedback = fVar12;
  (this->LeftFDN).Coefficients.InputScale = fVar6;
  (this->LeftFDN).Coefficients.APFG[0] = fVar3;
  *(undefined8 *)((this->LeftFDN).Coefficients.APFG + 1) = uVar2;
  uVar2 = *(undefined8 *)((this->LeftCoefficients).LPFA + 1);
  *(undefined8 *)((this->LeftFDN).Coefficients.APFG + 3) =
       *(undefined8 *)((this->LeftCoefficients).APFG + 3);
  *(undefined8 *)((this->LeftFDN).Coefficients.LPFA + 1) = uVar2;
  uVar2 = *(undefined8 *)((this->LeftCoefficients).LPFB + 1);
  *(undefined8 *)((this->LeftFDN).Coefficients.LPFA + 3) =
       *(undefined8 *)((this->LeftCoefficients).LPFA + 3);
  *(undefined8 *)((this->LeftFDN).Coefficients.LPFB + 1) = uVar2;
  *(undefined8 *)((this->LeftFDN).Coefficients.LPFB + 3) =
       *(undefined8 *)((this->LeftCoefficients).LPFB + 3);
  fVar6 = (this->RightCoefficients).APFG[0];
  uVar2 = *(undefined8 *)((this->RightCoefficients).APFG + 1);
  (this->RightFDN).Coefficients.InputScale = (this->RightCoefficients).InputScale;
  (this->RightFDN).Coefficients.APFG[0] = fVar6;
  *(undefined8 *)((this->RightFDN).Coefficients.APFG + 1) = uVar2;
  uVar2 = *(undefined8 *)((this->RightCoefficients).LPFA + 1);
  *(undefined8 *)((this->RightFDN).Coefficients.APFG + 3) =
       *(undefined8 *)((this->RightCoefficients).APFG + 3);
  *(undefined8 *)((this->RightFDN).Coefficients.LPFA + 1) = uVar2;
  uVar2 = *(undefined8 *)((this->RightCoefficients).LPFB + 1);
  *(undefined8 *)((this->RightFDN).Coefficients.LPFA + 3) =
       *(undefined8 *)((this->RightCoefficients).LPFA + 3);
  *(undefined8 *)((this->RightFDN).Coefficients.LPFB + 1) = uVar2;
  *(undefined8 *)((this->RightFDN).Coefficients.LPFB + 3) =
       *(undefined8 *)((this->RightCoefficients).LPFB + 3);
  return;
}

// ClampSettings @ 1444b8320

void __cdecl Audio::FEarlyReflectionsFast::ClampSettings(FEarlyReflectionsFastSettings *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_1->Gain;
  if (__real_3f7ff972 <= param_1->Gain) {
    fVar1 = __real_3f7ff972;
  }
  fVar2 = param_1->Bandwidth;
  if (__real_3f7fff58 <= param_1->Bandwidth) {
    fVar2 = __real_3f7fff58;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  param_1->Gain = fVar1;
  fVar1 = param_1->PreDelayMsec;
  if (__real_447a0000 <= param_1->PreDelayMsec) {
    fVar1 = __real_447a0000;
  }
  param_1->Bandwidth = fVar2;
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_1->PreDelayMsec = fVar1;
  fVar1 = param_1->Decay;
  if (__real_3f800000 <= param_1->Decay) {
    fVar1 = __real_3f800000;
  }
  if (fVar1 <= __real_38d1b717) {
    fVar1 = __real_38d1b717;
  }
  param_1->Decay = fVar1;
  fVar1 = param_1->Absorption;
  if (__real_3f7fff58 <= param_1->Absorption) {
    fVar1 = __real_3f7fff58;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  param_1->Absorption = fVar1;
  return;
}

// FlushAudio @ 1444beab0

void __thiscall Audio::FEarlyReflectionsFast::FlushAudio(FEarlyReflectionsFast *this)

{
  FIntegerDelay::Reset(&this->LeftPreDelay);
  FIntegerDelay::Reset(&this->RightPreDelay);
  (this->LeftInputLPF).Z1 = 0.0;
  (this->RightInputLPF).Z1 = 0.0;
  FFeedbackDelayNetwork::FlushAudio(&this->LeftFDN);
  FFeedbackDelayNetwork::FlushAudio(&this->RightFDN);
  return;
}

// ProcessAudio @ 1444d8300

void __thiscall
Audio::FEarlyReflectionsFast::ProcessAudio
          (FEarlyReflectionsFast *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,int param_2
          ,TArray<float,TAlignedHeapAllocator<16>_> *param_3,
          TArray<float,TAlignedHeapAllocator<16>_> *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  float fVar7;
  ulonglong uVar8;
  code *pcVar9;
  bool bVar10;
  int iVar11;
  size_t sVar12;
  undefined4 uStack_7c;
  undefined4 uStack_6c;
  TArrayView<float,int> local_68;
  TArrayView<float,int> local_58 [2];
  
  if ((1 < param_2 - 1U) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(InNumChannels == 1) || (InNumChannels == 2)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\EarlyReflectionsFast.cpp"
                          ,0xa0,L"EarlyReflections only supports one or two channel input samples.")
     , bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  uVar8 = (longlong)param_1->ArrayNum / (longlong)param_2;
  iVar11 = (int)uVar8;
  if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum(uVar8 & 0xffffffff);
  }
  (this->LeftInputBuffer).ArrayNum = 0;
  if ((this->LeftInputBuffer).ArrayMax < iVar11) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar11,&(this->LeftInputBuffer).AllocatorInstance,0,
               &(this->LeftInputBuffer).ArrayMax);
  }
  (this->LeftWorkBufferA).ArrayNum = 0;
  if ((this->LeftWorkBufferA).ArrayMax < iVar11) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar11,&(this->LeftWorkBufferA).AllocatorInstance,0,
               &(this->LeftWorkBufferA).ArrayMax);
  }
  piVar1 = &(this->LeftWorkBufferB).ArrayMax;
  piVar2 = &(this->LeftWorkBufferB).ArrayNum;
  *piVar2 = 0;
  if ((this->LeftWorkBufferB).ArrayMax < iVar11) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar11,&(this->LeftWorkBufferB).AllocatorInstance,0,piVar1);
  }
  (this->RightInputBuffer).ArrayNum = 0;
  if ((this->RightInputBuffer).ArrayMax < iVar11) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar11,&(this->RightInputBuffer).AllocatorInstance,0,
               &(this->RightInputBuffer).ArrayMax);
  }
  piVar3 = &(this->RightWorkBufferA).ArrayMax;
  piVar4 = &(this->RightWorkBufferA).ArrayNum;
  *piVar4 = 0;
  if ((this->RightWorkBufferA).ArrayMax < iVar11) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar11,&(this->RightWorkBufferA).AllocatorInstance,0,piVar3);
  }
  piVar5 = &(this->RightWorkBufferB).ArrayMax;
  piVar6 = &(this->RightWorkBufferB).ArrayNum;
  *piVar6 = 0;
  if ((this->RightWorkBufferB).ArrayMax < iVar11) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar11,&(this->RightWorkBufferB).AllocatorInstance,0,piVar5);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar11,&(this->LeftInputBuffer).AllocatorInstance,&(this->LeftInputBuffer).ArrayNum
             ,&(this->LeftInputBuffer).ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar11,&(this->LeftWorkBufferA).AllocatorInstance,&(this->LeftWorkBufferA).ArrayNum
             ,&(this->LeftWorkBufferA).ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar11,&(this->LeftWorkBufferB).AllocatorInstance,piVar2,piVar1);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar11,&(this->RightInputBuffer).AllocatorInstance,
             &(this->RightInputBuffer).ArrayNum,&(this->RightInputBuffer).ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar11,&(this->RightWorkBufferA).AllocatorInstance,piVar4,piVar3);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar11,&(this->RightWorkBufferB).AllocatorInstance,piVar6,piVar5);
  param_3->ArrayNum = 0;
  if (param_3->ArrayMax < iVar11) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar11,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
  }
  param_4->ArrayNum = 0;
  if (param_4->ArrayMax < iVar11) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar11,&param_4->AllocatorInstance,0,&param_4->ArrayMax);
  }
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar11,&param_3->AllocatorInstance,&param_3->ArrayNum,&param_3->ArrayMax);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,iVar11,&param_4->AllocatorInstance,&param_4->ArrayNum,&param_4->ArrayMax);
  if (param_2 == 1) {
    sVar12 = (longlong)iVar11 << 2;
    memcpy((this->LeftInputBuffer).AllocatorInstance.Data,(param_1->AllocatorInstance).Data,sVar12);
    memcpy((this->RightInputBuffer).AllocatorInstance.Data,(param_1->AllocatorInstance).Data,sVar12)
    ;
  }
  else {
    if (param_2 != 2) {
      sVar12 = (longlong)iVar11 << 2;
      memset((param_3->AllocatorInstance).Data,0,sVar12);
      memset((param_4->AllocatorInstance).Data,0,sVar12);
      return;
    }
    BufferDeinterleave2ChannelFast(param_1,&this->LeftInputBuffer,&this->RightInputBuffer);
  }
  FIntegerDelay::ProcessAudio(&this->LeftPreDelay,&this->LeftInputBuffer,&this->LeftWorkBufferB);
  FIntegerDelay::ProcessAudio(&this->RightPreDelay,&this->RightInputBuffer,&this->RightWorkBufferB);
  FBufferOnePoleLPF::ProcessAudio(&this->LeftInputLPF,&this->LeftWorkBufferB,&this->LeftWorkBufferA)
  ;
  FBufferOnePoleLPF::ProcessAudio
            (&this->RightInputLPF,&this->RightWorkBufferB,&this->RightWorkBufferA);
  FFeedbackDelayNetwork::ProcessAudio(&this->LeftFDN,&this->LeftWorkBufferA,param_3);
  FFeedbackDelayNetwork::ProcessAudio(&this->RightFDN,&this->RightWorkBufferA,param_4);
  local_68.DataPtr = (float *)(param_3->AllocatorInstance).Data;
  iVar11 = param_3->ArrayNum;
  fVar7 = (this->Settings).Gain;
  if ((iVar11 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_68._12_4_ = uStack_7c;
  local_68.ArrayNum = iVar11;
  ArrayMultiplyByConstantInPlace(&local_68,fVar7);
  local_58[0].DataPtr = (float *)(param_4->AllocatorInstance).Data;
  iVar11 = param_4->ArrayNum;
  fVar7 = (this->Settings).Gain;
  if ((iVar11 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  local_58[0]._12_4_ = uStack_6c;
  local_58[0].ArrayNum = iVar11;
  ArrayMultiplyByConstantInPlace(local_58,fVar7);
  return;
}

// SetSettings @ 1444e59d0

void __thiscall
Audio::FEarlyReflectionsFast::SetSettings
          (FEarlyReflectionsFast *this,FEarlyReflectionsFastSettings *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = param_1->PreDelayMsec;
  fVar3 = param_1->Bandwidth;
  fVar1 = param_1->Decay;
  (this->Settings).Gain = param_1->Gain;
  (this->Settings).PreDelayMsec = fVar2;
  (this->Settings).Bandwidth = fVar3;
  (this->Settings).Decay = fVar1;
  (this->Settings).Absorption = param_1->Absorption;
  fVar2 = (this->Settings).Gain;
  if (__real_3f7ff972 <= fVar2) {
    fVar2 = __real_3f7ff972;
  }
  fVar3 = (this->Settings).Bandwidth;
  if (__real_3f7fff58 <= fVar3) {
    fVar3 = __real_3f7fff58;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  (this->Settings).Gain = fVar2;
  fVar2 = (this->Settings).PreDelayMsec;
  if (__real_447a0000 <= fVar2) {
    fVar2 = __real_447a0000;
  }
  (this->Settings).Bandwidth = fVar3;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (this->Settings).PreDelayMsec = fVar2;
  fVar2 = (this->Settings).Decay;
  if (__real_3f800000 <= fVar2) {
    fVar2 = __real_3f800000;
  }
  if (fVar2 <= __real_38d1b717) {
    fVar2 = __real_38d1b717;
  }
  (this->Settings).Decay = fVar2;
  fVar2 = (this->Settings).Absorption;
  if (__real_3f7fff58 <= fVar2) {
    fVar2 = __real_3f7fff58;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  (this->Settings).Absorption = fVar2;
  ApplySettings(this);
  return;
}

