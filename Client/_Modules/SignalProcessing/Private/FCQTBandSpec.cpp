// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 2

// ExtractFromPowerSpectrum @ 1444fb470

float __thiscall
Audio::FSpectrumBandExtractor::FCQTBandSpec::ExtractFromPowerSpectrum
          (FCQTBandSpec *this,float *param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  bool bVar4;
  TArrayView<float,int> *pTVar5;
  TArrayView<float_const_,int> *pTVar6;
  int iVar7;
  float fVar8;
  float local_res18 [4];
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float,int> local_48;
  TArrayView<float_const_,int> local_38;
  TArrayView<float_const_,int> local_28;
  
  iVar1 = (this->Weights).ArrayNum;
  iVar3 = param_2;
  if (this->StartIndex < param_2) {
    iVar3 = this->StartIndex;
  }
  iVar7 = 0;
  if (0 < iVar3) {
    iVar7 = iVar3;
  }
  if (param_2 < iVar1 + iVar7) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1833407021949387025>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                       ,0x111,"(SafeStartIndex + Weights.Num()) <= InNum");
    if (bVar4) {
      pcVar2 = (code *)swi(3);
      fVar8 = (float)(*pcVar2)();
      return fVar8;
    }
    fVar8 = 0.0;
  }
  else {
    local_res18[0] = 0.0;
    fVar8 = 0.0;
    if (0 < iVar1) {
      if (iVar1 != (this->WorkBuffer).ArrayNum) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumWeights == WorkBuffer.Num()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\SpectrumAnalyzer.cpp"
                           ,0x119,L"");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          fVar8 = (float)(*pcVar2)();
          return fVar8;
        }
      }
      memcpy((this->WorkBuffer).AllocatorInstance.Data,param_1 + iVar7,(longlong)iVar1 << 2);
      pTVar5 = TArrayView<float,int>::
               TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                         (&local_48,&this->WorkBuffer);
      local_78.DataPtr = pTVar5->DataPtr;
      local_78.ArrayNum = pTVar5->ArrayNum;
      local_78._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
      pTVar6 = TArrayView<float_const_,int>::
               TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_const_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                         (&local_38,&this->Weights);
      local_68.DataPtr = pTVar6->DataPtr;
      local_68.ArrayNum = pTVar6->ArrayNum;
      local_68._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
      ArrayMultiplyInPlace(&local_68,&local_78);
      pTVar6 = TArrayView<float_const_,int>::
               TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                         (&local_28,&this->WorkBuffer);
      local_58.DataPtr = pTVar6->DataPtr;
      local_58.ArrayNum = pTVar6->ArrayNum;
      local_58._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
      ArraySum(&local_58,local_res18);
      fVar8 = local_res18[0];
    }
  }
  return fVar8;
}

// Update @ 14451f3b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Audio::FSpectrumBandExtractor::FCQTBandSpec::Update
          (FCQTBandSpec *this,FSpectrumBandExtractorSettings *param_1,
          FSpectrumBandExtractorSpectrumSettings *param_2)

{
  int *piVar1;
  EFFTScaling EVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStackY_78 [32];
  FPseudoConstantQBandSettings local_48;
  ulonglong local_30;
  
  fVar4 = __real_3f800000;
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_78;
  *(undefined4 *)&this->_padding_ = 0x3f800000;
  EVar2 = param_2->FFTScaling;
  fVar6 = (float)param_2->FFTSize;
  if ((float)param_2->FFTSize <= fVar4) {
    fVar6 = fVar4;
  }
  if (EVar2 != None) {
    if (EVar2 == MultipliedByFFTSize) {
      fVar6 = fVar4 / (fVar6 * fVar6);
      goto LAB_14451f420;
    }
    if (EVar2 == MultipliedBySqrtFFTSize) {
      fVar6 = fVar4 / fVar6;
      goto LAB_14451f420;
    }
    if (EVar2 == DividedByFFTSize) {
      fVar6 = fVar6 * fVar6;
      goto LAB_14451f420;
    }
    if (EVar2 == DividedBySqrtFFTSize) goto LAB_14451f420;
  }
  fVar6 = fVar4;
LAB_14451f420:
  piVar1 = &(this->Weights).ArrayMax;
  fVar5 = *(float *)&this->_padding_;
  if (*(float *)&this->_padding_ <= __real_322bcc77) {
    fVar5 = __real_322bcc77;
  }
  local_48.CenterFreq = *(float *)((longlong)&this->_padding_ + 4);
  *(float *)&this->_padding_ = fVar6;
  local_48.FFTSize = param_2->FFTSize;
  local_48.Normalization = EqualEnergy;
  local_48.SampleRate = param_2->SampleRate;
  local_48.BandWidth = local_48.CenterFreq / fVar5;
  if (local_48.CenterFreq / fVar5 <= __real_322bcc77) {
    local_48.BandWidth = __real_322bcc77;
  }
  this->StartIndex = 0;
  if (local_48.SampleRate <= fVar4) {
    local_48.SampleRate = fVar4;
  }
  (this->Weights).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->Weights).AllocatorInstance,0,piVar1);
  }
  piVar1 = &(this->WorkBuffer).ArrayMax;
  (this->WorkBuffer).ArrayNum = 0;
  if ((this->WorkBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->WorkBuffer).AllocatorInstance,0,piVar1);
  }
  FPseudoConstantQ::FillArrayWithConstantQBand(&local_48,&this->Weights,&this->StartIndex);
  iVar3 = (this->Weights).ArrayNum;
  if (0 < iVar3) {
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar3,&(this->WorkBuffer).AllocatorInstance,&(this->WorkBuffer).ArrayNum,piVar1);
  }
  return;
}

