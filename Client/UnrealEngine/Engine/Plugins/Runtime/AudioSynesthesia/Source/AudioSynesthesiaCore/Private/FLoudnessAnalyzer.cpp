// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 12

// FLoudnessAnalyzer @ 14d7f6ec0

FLoudnessAnalyzer * __thiscall
Audio::FLoudnessAnalyzer::FLoudnessAnalyzer
          (FLoudnessAnalyzer *this,float param_1,FLoudnessAnalyzerSettings *param_2)

{
  TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  ELoudnessAnalyzerScalingMethod EVar6;
  uint uVar7;
  IFFTAlgorithm *pIVar8;
  code *pcVar9;
  EWindowType EVar10;
  ELoudnessCurveType EVar11;
  undefined2 uVar12;
  undefined3 uVar13;
  bool bVar14;
  EFFTScaling EVar15;
  int iVar16;
  uint uVar17;
  int *piVar18;
  FLoudnessAnalyzer *pFVar19;
  TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> TVar20;
  int iVar21;
  FScriptContainerElement *pFVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  FFFTSettings local_res8;
  FFFTSettings local_res18;
  int *local_res20;
  
  EVar10 = param_2->WindowType;
  EVar11 = param_2->LoudnessCurveType;
  uVar12 = *(undefined2 *)&param_2->field_0x6;
  fVar24 = param_2->MinAnalysisFrequency;
  fVar25 = param_2->MaxAnalysisFrequency;
  iVar21 = 0;
  (this->Settings).FFTSize = param_2->FFTSize;
  (this->Settings).WindowType = EVar10;
  (this->Settings).LoudnessCurveType = EVar11;
  *(undefined2 *)&(this->Settings).field_0x6 = uVar12;
  (this->Settings).MinAnalysisFrequency = fVar24;
  (this->Settings).MaxAnalysisFrequency = fVar25;
  pTVar1 = &this->FFT;
  EVar6 = param_2->ScalingMethod;
  uVar13 = *(undefined3 *)&param_2->field_0x15;
  piVar4 = &(this->CurveWeights).ArrayNum;
  (this->Settings).WindowSize = param_2->WindowSize;
  (this->Settings).ScalingMethod = EVar6;
  *(undefined3 *)&(this->Settings).field_0x15 = uVar13;
  piVar5 = &(this->CurveWeights).ArrayMax;
  this->EnergyScale = 1.0;
  this->MinFreqIndex = 0;
  this->MaxFreqIndex = 0;
  this->FFTFreqSize = 0;
  this->ActualFFTSize = 0;
  (this->ComplexSpectrum).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComplexSpectrum).ArrayMax = 0;
  (this->Window).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Window).ArrayNum = 0;
  (this->Window).ArrayMax = 0;
  (this->WindowedSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowedSamples).ArrayNum = 0;
  (this->WindowedSamples).ArrayMax = 0;
  piVar2 = &(this->ComplexSpectrum).ArrayNum;
  local_res20 = &(this->ComplexSpectrum).ArrayMax;
  (this->RealSpectrum).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar2 = 0;
  piVar3 = &(this->RealSpectrum).ArrayNum;
  piVar18 = &(this->RealSpectrum).ArrayMax;
  pTVar1->Ptr = (IFFTAlgorithm *)0x0;
  *piVar3 = 0;
  (this->CurveWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar18 = 0;
  *piVar4 = 0;
  *piVar5 = 0;
  uVar7 = (this->Settings).FFTSize;
  if ((uVar7 & uVar7 - 1) != 0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("FMath::IsPowerOfTwo(Settings.FFTSize)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                        ,0x9c,L"FFT size must be a power of two");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      pFVar19 = (FLoudnessAnalyzer *)(*pcVar9)();
      return pFVar19;
    }
  }
  if ((this->Settings).FFTSize < 8) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("Settings.FFTSize >= 8",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                        ,0x9d,L"FFT size must be atleast 8");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      pFVar19 = (FLoudnessAnalyzer *)(*pcVar9)();
      return pFVar19;
    }
  }
  if (param_1 <= 0.0) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("InSampleRate > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                        ,0x9e,L"");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      pFVar19 = (FLoudnessAnalyzer *)(*pcVar9)();
      return pFVar19;
    }
  }
  local_res8.Log2Size = CeilLog2((this->Settings).FFTSize);
  local_res8.bArrays128BitAligned = true;
  local_res8.bEnableHardwareAcceleration = true;
  this->ActualFFTSize = 1 << ((byte)local_res8.Log2Size & 0x1f);
  bVar14 = FFFTFactory::AreFFTSettingsSupported(&local_res8,&FFFTFactory::AnyAlgorithmFactory);
  if (!bVar14) {
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("FFFTFactory::AreFFTSettingsSupported(FFTSettings)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                        ,0xa9,L"No fft algorithm supports fft settings.");
    if (bVar14) {
      pcVar9 = (code *)swi(3);
      pFVar19 = (FLoudnessAnalyzer *)(*pcVar9)();
      return pFVar19;
    }
  }
  TVar20 = FFFTFactory::NewFFTAlgorithm(&local_res18,(FName *)&local_res8);
  if ((IFFTAlgorithm *)pTVar1 != TVar20.Ptr) {
    pIVar8 = pTVar1->Ptr;
    pTVar1->Ptr = (IFFTAlgorithm *)*TVar20.Ptr;
    *TVar20.Ptr = (IFFTAlgorithm)0x0;
    if (pIVar8 != (IFFTAlgorithm *)0x0) {
      (**(code **)*pIVar8)(pIVar8,1);
    }
  }
  if (local_res18 != (FFFTSettings)0x0) {
    (*(code *)**(undefined8 **)local_res18)(local_res18,1);
  }
  if (pTVar1->Ptr != (IFFTAlgorithm *)0x0) {
    if (this->ActualFFTSize < (this->Settings).WindowSize) {
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("Settings.WindowSize <= ActualFFTSize",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                          ,0xad,L"WindowSize %d must be less than or equal to FFTSize %d");
      if (bVar14) {
        pcVar9 = (code *)swi(3);
        pFVar19 = (FLoudnessAnalyzer *)(*pcVar9)();
        return pFVar19;
      }
    }
    iVar16 = (this->Settings).WindowSize;
    if (iVar16 < 1) {
      iVar16 = this->ActualFFTSize;
      (this->Settings).WindowSize = iVar16;
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar16,&(this->Window).AllocatorInstance,&(this->Window).ArrayNum,
               &(this->Window).ArrayMax);
    GenerateWindow((float *)(this->Window).AllocatorInstance.Data,(this->Settings).WindowType,
                   (this->Window).ArrayNum,1,false);
    iVar16 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&this->WindowedSamples,iVar16);
    iVar16 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar16 + 2,&(this->ComplexSpectrum).AllocatorInstance,piVar2,local_res20);
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,(this->ComplexSpectrum).ArrayNum / 2,&(this->RealSpectrum).AllocatorInstance,
               piVar3,piVar18);
    pIVar8 = pTVar1->Ptr;
    this->FFTFreqSize = (this->RealSpectrum).ArrayNum;
    iVar16 = (**(code **)((longlong)*pIVar8 + 8))();
    fVar25 = __real_3f800000;
    fVar26 = __real_3f800000 / (param_1 / (float)(iVar16 + 2));
    fVar23 = FMath::RoundHalfFromZero(fVar26 * (this->Settings).MinAnalysisFrequency);
    fVar24 = (this->Settings).MaxAnalysisFrequency;
    iVar16 = (int)fVar23;
    if ((int)fVar23 < 0) {
      iVar16 = 0;
    }
    this->MinFreqIndex = iVar16;
    fVar24 = FMath::RoundHalfFromZero(fVar26 * fVar24);
    uVar7 = this->FFTFreqSize;
    uVar17 = uVar7;
    if ((int)((int)fVar24 + 1U) < (int)uVar7) {
      uVar17 = (int)fVar24 + 1U;
    }
    this->MaxFreqIndex = uVar17;
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    *piVar4 = 0;
    if (*piVar5 < (int)uVar7) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar7,&(this->CurveWeights).AllocatorInstance,0,piVar5);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,this->FFTFreqSize,&(this->CurveWeights).AllocatorInstance,piVar4,piVar5);
    iVar16 = this->ActualFFTSize;
    if (0 < this->FFTFreqSize) {
      pFVar22 = (this->CurveWeights).AllocatorInstance.Data;
      do {
        fVar24 = GetEqualLoudnessWeightForFrequency
                           (this,(float)iVar21 * param_1 * (fVar25 / (float)iVar16));
        iVar21 = iVar21 + 1;
        *(float *)pFVar22 = fVar24 * fVar24;
        pFVar22 = pFVar22 + 4;
      } while (iVar21 < this->FFTFreqSize);
    }
    EVar6 = (this->Settings).ScalingMethod;
    if (EVar6 == BackCompatible) {
      if ((this->FFT).Ptr == (IFFTAlgorithm *)0x0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("FFT.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                            ,0x13e,L"");
        if (bVar14) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FLoudnessAnalyzer *)(*pcVar9)();
          return pFVar19;
        }
      }
      EVar15 = (**(code **)((longlong)*(this->FFT).Ptr + 0x10))();
      iVar21 = (**(code **)((longlong)*(this->FFT).Ptr + 8))();
      fVar24 = GetPowerSpectrumScaling(iVar21,EVar15,None);
      iVar21 = (this->Settings).FFTSize;
      fVar23 = GetEqualLoudnessWeightForFrequency(this,__real_447a0000);
      if (0.0 < fVar23) {
        fVar25 = (fVar25 / fVar23) * (fVar25 / fVar23);
      }
      fVar25 = (fVar24 / (float)iVar21) * fVar25;
    }
    else {
      if (EVar6 != Corrected) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("!\"Enclosing block should never be called\"",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                            ,0x136,L"");
        if (bVar14) {
          pcVar9 = (code *)swi(3);
          pFVar19 = (FLoudnessAnalyzer *)(*pcVar9)();
          return pFVar19;
        }
      }
      fVar25 = CalculateEnergyScalingCorrected(this);
    }
    this->EnergyScale = fVar25;
  }
  return this;
}

// ~FLoudnessAnalyzer @ 14d7f9500

void __thiscall Audio::FLoudnessAnalyzer::~FLoudnessAnalyzer(FLoudnessAnalyzer *this)

{
  FScriptContainerElement *pFVar1;
  IFFTAlgorithm *pIVar2;
  
  pFVar1 = (this->CurveWeights).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RealSpectrum).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ComplexSpectrum).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->WindowedSamples).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Window).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->FFT).Ptr;
  if (pIVar2 != (IFFTAlgorithm *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014d7f9565. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*pIVar2)(pIVar2,1);
    return;
  }
  return;
}

// CalculateEnergyScaling @ 14d801cf0

float __thiscall Audio::FLoudnessAnalyzer::CalculateEnergyScaling(FLoudnessAnalyzer *this)

{
  ELoudnessAnalyzerScalingMethod EVar1;
  code *pcVar2;
  bool bVar3;
  EFFTScaling EVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  EVar1 = (this->Settings).ScalingMethod;
  if (EVar1 == BackCompatible) {
    if ((this->FFT).Ptr == (IFFTAlgorithm *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("FFT.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                         ,0x13e,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar6 = (float)(*pcVar2)();
        return fVar6;
      }
    }
    EVar4 = (**(code **)((longlong)*(this->FFT).Ptr + 0x10))();
    iVar5 = (**(code **)((longlong)*(this->FFT).Ptr + 8))();
    fVar7 = GetPowerSpectrumScaling(iVar5,EVar4,None);
    iVar5 = (this->Settings).FFTSize;
    fVar8 = GetEqualLoudnessWeightForFrequency(this,__real_447a0000);
    fVar6 = __real_3f800000;
    if (0.0 < fVar8) {
      fVar6 = (__real_3f800000 / fVar8) * (__real_3f800000 / fVar8);
    }
    return (fVar7 / (float)iVar5) * fVar6;
  }
  if (EVar1 != Corrected) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                       ,0x136,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar6 = (float)(*pcVar2)();
      return fVar6;
    }
  }
  fVar6 = CalculateEnergyScalingCorrected(this);
  return fVar6;
}

// CalculateEnergyScalingBackCompatible @ 14d801e00

float __thiscall
Audio::FLoudnessAnalyzer::CalculateEnergyScalingBackCompatible(FLoudnessAnalyzer *this)

{
  code *pcVar1;
  bool bVar2;
  EFFTScaling EVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if ((this->FFT).Ptr == (IFFTAlgorithm *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("FFT.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                       ,0x13e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar5 = (float)(*pcVar1)();
      return fVar5;
    }
  }
  EVar3 = (**(code **)((longlong)*(this->FFT).Ptr + 0x10))();
  iVar4 = (**(code **)((longlong)*(this->FFT).Ptr + 8))();
  fVar6 = GetPowerSpectrumScaling(iVar4,EVar3,None);
  iVar4 = (this->Settings).FFTSize;
  fVar7 = GetEqualLoudnessWeightForFrequency(this,__real_447a0000);
  fVar5 = __real_3f800000;
  if (0.0 < fVar7) {
    fVar5 = (__real_3f800000 / fVar7) * (__real_3f800000 / fVar7);
  }
  return (fVar6 / (float)iVar4) * fVar5;
}

// CalculateEnergyScalingCorrected @ 14d801ec0

float __thiscall Audio::FLoudnessAnalyzer::CalculateEnergyScalingCorrected(FLoudnessAnalyzer *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  EFFTScaling EVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 local_res8 [8];
  
  if ((this->FFT).Ptr == (IFFTAlgorithm *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("FFT.IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                       ,0x150,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  EVar4 = (**(code **)((longlong)*(this->FFT).Ptr + 0x10))();
  iVar5 = (**(code **)((longlong)*(this->FFT).Ptr + 8))();
  fVar7 = GetPowerSpectrumScaling(iVar5,EVar4,None);
  if ((this->Window).ArrayNum < 1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Window.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                       ,0x15f,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar7 = (float)(*pcVar2)();
      return fVar7;
    }
  }
  pFVar6 = (this->Window).AllocatorInstance.Data;
  iVar5 = (this->Window).ArrayNum;
  fVar9 = 0.0;
  pFVar1 = pFVar6 + (longlong)iVar5 * 4;
  while( true ) {
    if ((this->Window).ArrayNum != iVar5) {
      `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar6 == pFVar1) break;
    fVar8 = *(float *)pFVar6;
    pFVar6 = pFVar6 + 4;
    fVar9 = fVar9 + fVar8 * fVar8;
  }
  fVar8 = __real_3f800000;
  if (fVar9 != 0.0) {
    fVar8 = __real_3f800000 / fVar9;
  }
  return (fVar7 + fVar7) * fVar8;
}

// CalculateLoudness @ 14d802360

float __thiscall
Audio::FLoudnessAnalyzer::CalculateLoudness
          (FLoudnessAnalyzer *this,TArrayView<float_const_,int> *param_1)

{
  float fVar1;
  TArrayView<float_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  fVar1 = CalculatePerceptualEnergy(this,&local_18);
  fVar1 = logf(fVar1);
  return fVar1 * __real_41200000 * LoudnessAnalyzerPrivate::Log10Scale;
}

// CalculatePerceptualEnergy @ 14d8026e0

float __thiscall
Audio::FLoudnessAnalyzer::CalculatePerceptualEnergy
          (FLoudnessAnalyzer *this,TArrayView<float_const_,int> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  float fVar8;
  int iVar9;
  IFFTAlgorithm *pIVar10;
  code *pcVar11;
  bool bVar12;
  TArrayView<float_const_,int> *pTVar13;
  TArrayView<float,int> *pTVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  float fVar21;
  undefined4 uStack_9c;
  TArrayView<float,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float,int> local_38;
  TArrayView<float_const_,int> local_28 [2];
  
  if ((param_1->ArrayNum != (this->Window).ArrayNum) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("InView.Num() == Window.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                          ,0xe1,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    fVar21 = (float)(*pcVar11)();
    return fVar21;
  }
  fVar21 = 0.0;
  if ((this->FFT).Ptr == (IFFTAlgorithm *)0x0) {
    return 0.0;
  }
  pFVar16 = (this->WindowedSamples).AllocatorInstance.Data;
  iVar9 = (this->Window).ArrayNum;
  if ((iVar9 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar11 = (code *)swi(3);
    fVar21 = (float)(*pcVar11)();
    return fVar21;
  }
  local_98._12_4_ = uStack_9c;
  local_98.ArrayNum = iVar9;
  local_98.DataPtr = (float *)pFVar16;
  pTVar13 = TArrayView<float_const_,int>::
            TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                      (&local_48,&this->Window);
  local_78.DataPtr = param_1->DataPtr;
  local_78.ArrayNum = param_1->ArrayNum;
  local_78._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_88.DataPtr = pTVar13->DataPtr;
  local_88.ArrayNum = pTVar13->ArrayNum;
  local_88._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
  ArrayMultiply(&local_78,&local_88,&local_98);
  pIVar10 = (this->FFT).Ptr;
  (**(code **)((longlong)*pIVar10 + 0x20))
            (pIVar10,(this->WindowedSamples).AllocatorInstance.Data,
             (this->ComplexSpectrum).AllocatorInstance.Data);
  pTVar14 = TArrayView<float,int>::
            TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                      (&local_38,&this->RealSpectrum);
  local_68.DataPtr = pTVar14->DataPtr;
  local_68.ArrayNum = pTVar14->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&pTVar14->field_0xc;
  pTVar13 = TArrayView<float_const_,int>::
            TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                      (local_28,&this->ComplexSpectrum);
  local_58.DataPtr = pTVar13->DataPtr;
  local_58.ArrayNum = pTVar13->ArrayNum;
  local_58._12_4_ = *(undefined4 *)&pTVar13->field_0xc;
  ArrayComplexToPower(&local_58,&local_68);
  lVar20 = (longlong)this->MinFreqIndex;
  lVar19 = (longlong)this->MaxFreqIndex;
  pFVar16 = (this->RealSpectrum).AllocatorInstance.Data;
  if (lVar20 < lVar19) {
    lVar17 = (longlong)(this->CurveWeights).AllocatorInstance.Data - (longlong)pFVar16;
    if (3 < lVar19 - lVar20) {
      pFVar15 = pFVar16 + (lVar20 + 1) * 4;
      lVar18 = ((lVar19 - lVar20) - 4U >> 2) + 1;
      lVar20 = lVar20 + lVar18 * 4;
      do {
        pFVar5 = pFVar15 + lVar17 + -4;
        pFVar1 = pFVar15 + -4;
        pFVar4 = pFVar15 + lVar17;
        fVar8 = *(float *)pFVar15;
        pFVar6 = pFVar15 + lVar17 + 4;
        pFVar2 = pFVar15 + 4;
        pFVar7 = pFVar15 + lVar17 + 8;
        pFVar3 = pFVar15 + 8;
        pFVar15 = pFVar15 + 0x10;
        fVar21 = *(float *)pFVar5 * *(float *)pFVar1 + fVar21 + *(float *)pFVar4 * fVar8 +
                 *(float *)pFVar6 * *(float *)pFVar2 + *(float *)pFVar7 * *(float *)pFVar3;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
      if (lVar19 <= lVar20) goto LAB_14d8028ca;
    }
    pFVar16 = pFVar16 + lVar20 * 4;
    lVar19 = lVar19 - lVar20;
    do {
      pFVar15 = pFVar16 + lVar17;
      fVar8 = *(float *)pFVar16;
      pFVar16 = pFVar16 + 4;
      fVar21 = fVar21 + *(float *)pFVar15 * fVar8;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
LAB_14d8028ca:
  return fVar21 * this->EnergyScale;
}

// CalculateWindowEnergyScaling @ 14d803180

float __thiscall Audio::FLoudnessAnalyzer::CalculateWindowEnergyScaling(FLoudnessAnalyzer *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  FScriptContainerElement *pFVar5;
  float fVar6;
  float fVar7;
  undefined1 local_res8 [8];
  
  if ((this->Window).ArrayNum < 1) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Window.Num() > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                       ,0x15f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar6 = (float)(*pcVar3)();
      return fVar6;
    }
  }
  pFVar5 = (this->Window).AllocatorInstance.Data;
  iVar2 = (this->Window).ArrayNum;
  fVar6 = 0.0;
  pFVar1 = pFVar5 + (longlong)iVar2 * 4;
  while( true ) {
    if ((this->Window).ArrayNum != iVar2) {
      `TCheckedPointerIterator<float_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar5 == pFVar1) break;
    fVar7 = *(float *)pFVar5;
    pFVar5 = pFVar5 + 4;
    fVar6 = fVar6 + fVar7 * fVar7;
  }
  fVar7 = __real_3f800000;
  if (fVar6 != 0.0) {
    fVar7 = __real_3f800000 / fVar6;
  }
  return fVar7;
}

// ConvertPerceptualEnergyToLKFS @ 14d8033e0

float __cdecl Audio::FLoudnessAnalyzer::ConvertPerceptualEnergyToLKFS(float param_1)

{
  float fVar1;
  
  fVar1 = logf(param_1);
  return fVar1 * __real_41200000 * LoudnessAnalyzerPrivate::Log10Scale - __real_3f30e560;
}

// ConvertPerceptualEnergyToLoudness @ 14d803410

float __cdecl Audio::FLoudnessAnalyzer::ConvertPerceptualEnergyToLoudness(float param_1)

{
  float fVar1;
  
  fVar1 = logf(param_1);
  return fVar1 * __real_41200000 * LoudnessAnalyzerPrivate::Log10Scale;
}

// GetEqualLoudnessWeightForFrequency @ 14d807000

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
Audio::FLoudnessAnalyzer::GetEqualLoudnessWeightForFrequency(FLoudnessAnalyzer *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  
  switch((this->Settings).LoudnessCurveType) {
  case A:
    fVar4 = param_1 * param_1;
    return ((fVar4 * ___real_4d0df1e4 * fVar4) /
           (SQRT((fVar4 + ___real_46353d29) * (fVar4 + ___real_4904ef07)) *
           (fVar4 + ___real_43d42e14) * (fVar4 + ___real_4d0df1e4))) * ___real_3fa12478;
  case B:
    fVar4 = param_1 * param_1;
    return ((param_1 * ___real_4d0df1e4 * fVar4) /
           (SQRT(fVar4 + ___real_46c44480) * (fVar4 + ___real_43d42e14) * (fVar4 + ___real_4d0df1e4)
           )) * ___real_3f8287a7;
  case C:
    fVar4 = param_1 * param_1;
    return (fVar4 * ___real_4d0eedc6) / ((fVar4 + ___real_43d42e14) * (fVar4 + ___real_4d0df1e4));
  case D:
    fVar4 = param_1 * param_1;
    return SQRT(((__real_497d65e8 - fVar4) + fVar4 * ___real_4983ee01) /
                (((__real_4b161b10 - fVar4) + fVar4 * ___real_4b32e400) *
                (fVar4 + ___real_479c17a5) * (fVar4 + ___real_49a44200))) *
           param_1 * ___real_46628ed9;
  case K:
    fVar4 = 0.0;
    if ((param_1 <= __real_46bb8000) && (0.0 <= param_1)) {
      fVar3 = cosf(param_1 * ___real_3909421f);
      dVar5 = (double)fVar3;
      fVar3 = (float)((__real_4007706d00000000 - dVar5 * ___real_40176ea9c0000000) +
                     dVar5 * ___real_4007707b80000000 * dVar5);
      if (fVar3 == 0.0) {
        fVar3 = 0.0;
      }
      else {
        fVar3 = (float)((__real_401d6f3940000000 - dVar5 * ___real_402d6e62e0000000) +
                       dVar5 * ___real_401d6f5720000000 * dVar5) / fVar3;
      }
      fVar6 = (float)((__real_400faedf80000000 - dVar5 * ___real_401faec5c0000000) +
                     dVar5 * ___real_400faeac00000000 * dVar5);
      if (fVar6 != 0.0) {
        fVar4 = (float)((__real_4010000000000000 - dVar5 * __real_4020000000000000) +
                       dVar5 * __real_4010000000000000 * dVar5) / fVar6;
      }
      fVar4 = SQRT((float)((uint)(fVar4 * fVar3) & __xmm_7fffffff7fffffff7fffffff7fffffff));
    }
    return fVar4;
  case None:
    goto switchD_14d807025_caseD_5;
  default:
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                       ,0x124,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar4 = (float)(*pcVar1)();
      return fVar4;
    }
switchD_14d807025_caseD_5:
    return __real_3f800000;
  }
}

// GetSettings @ 14d807a80

FLoudnessAnalyzerSettings * __thiscall
Audio::FLoudnessAnalyzer::GetSettings(FLoudnessAnalyzer *this)

{
  return &this->Settings;
}

