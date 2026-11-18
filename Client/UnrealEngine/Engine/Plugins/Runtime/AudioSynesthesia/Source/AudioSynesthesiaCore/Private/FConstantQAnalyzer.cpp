// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 3

// FConstantQAnalyzer @ 14d7f5130

FConstantQAnalyzer * __thiscall
Audio::FConstantQAnalyzer::FConstantQAnalyzer
          (FConstantQAnalyzer *this,FConstantQAnalyzerSettings *param_1,float param_2)

{
  TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> *pTVar1;
  TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
  *pTVar2;
  EWindowType EVar3;
  IFFTAlgorithm *pIVar4;
  FContiguousSparse2DKernelTransform *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  ESpectrumType EVar8;
  EConstantQScaling EVar9;
  undefined1 uVar10;
  bool bVar11;
  int iVar12;
  FConstantQAnalyzer *pFVar13;
  TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> TVar14;
  TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
  TVar15;
  FFFTSettings local_res8;
  FFFTSettings local_res10;
  undefined8 *local_res20;
  
  uVar7 = *(undefined8 *)&param_1->field_0x8;
  *(undefined8 *)&this->Settings = *(undefined8 *)param_1;
  *(undefined8 *)&(this->Settings).field_0x8 = uVar7;
  iVar12 = param_1->FFTSize;
  *(undefined4 *)&(this->Settings).field_0x10 = *(undefined4 *)&param_1->field_0x10;
  (this->Settings).FFTSize = iVar12;
  EVar8 = param_1->SpectrumType;
  EVar9 = param_1->Scaling;
  uVar10 = param_1->field_0x1b;
  (this->Settings).WindowType = param_1->WindowType;
  (this->Settings).SpectrumType = EVar8;
  (this->Settings).Scaling = EVar9;
  (this->Settings).field_0x1b = uVar10;
  iVar12 = (this->Settings).FFTSize;
  EVar3 = (this->Settings).WindowType;
  this->SampleRate = param_2;
  this->ActualFFTSize = 0;
  this->NumUsefulFFTBins = 0;
  FWindow::FWindow(&this->Window,EVar3,iVar12,1,false);
  (this->ComplexSpectrum).ArrayNum = 0;
  (this->ComplexSpectrum).ArrayMax = 0;
  (this->FFT).Ptr = (IFFTAlgorithm *)0x0;
  pTVar1 = &this->FFT;
  (this->WindowedSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowedSamples).ArrayNum = 0;
  (this->WindowedSamples).ArrayMax = 0;
  (this->ComplexSpectrum).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RealSpectrum).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RealSpectrum).ArrayNum = 0;
  (this->RealSpectrum).ArrayMax = 0;
  pTVar2 = &this->CQTTransform;
  pTVar2->Ptr = (FContiguousSparse2DKernelTransform *)0x0;
  if ((this->Settings).FFTSize < 8) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("Settings.FFTSize >= 8",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\ConstantQAnalyzer.cpp"
                        ,0x11,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FConstantQAnalyzer *)(*pcVar6)();
      return pFVar13;
    }
  }
  if (this->SampleRate <= 0.0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("SampleRate > 0.f",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\ConstantQAnalyzer.cpp"
                        ,0x12,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FConstantQAnalyzer *)(*pcVar6)();
      return pFVar13;
    }
  }
  local_res8.Log2Size = CeilLog2((this->Settings).FFTSize);
  local_res8.bArrays128BitAligned = true;
  local_res8.bEnableHardwareAcceleration = true;
  iVar12 = 1 << ((byte)local_res8.Log2Size & 0x1f);
  this->ActualFFTSize = iVar12;
  this->NumUsefulFFTBins = iVar12 / 2 + 1;
  bVar11 = FFFTFactory::AreFFTSettingsSupported(&local_res8,&FFFTFactory::AnyAlgorithmFactory);
  if (!bVar11) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("FFFTFactory::AreFFTSettingsSupported(FFTSettings)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\ConstantQAnalyzer.cpp"
                        ,0x1d,L"No fft algorithm supports fft settings.");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FConstantQAnalyzer *)(*pcVar6)();
      return pFVar13;
    }
  }
  TVar14 = FFFTFactory::NewFFTAlgorithm(&local_res10,(FName *)&local_res8);
  if ((IFFTAlgorithm *)pTVar1 != TVar14.Ptr) {
    pIVar4 = pTVar1->Ptr;
    pTVar1->Ptr = (IFFTAlgorithm *)*TVar14.Ptr;
    *TVar14.Ptr = (IFFTAlgorithm)0x0;
    if (pIVar4 != (IFFTAlgorithm *)0x0) {
      (**(code **)*pIVar4)(pIVar4,1);
    }
  }
  if (local_res10 != (FFFTSettings)0x0) {
    (*(code *)**(undefined8 **)local_res10)(local_res10,1);
  }
  TVar15 = NewPseudoConstantQKernelTransform
                     ((FPseudoConstantQKernelSettings *)&local_res20,(int)this,param_2);
  if ((FContiguousSparse2DKernelTransform *)pTVar2 != TVar15.Ptr) {
    pFVar5 = pTVar2->Ptr;
    pTVar2->Ptr = (FContiguousSparse2DKernelTransform *)(TVar15.Ptr)->_padding_;
    (TVar15.Ptr)->_padding_ = 0;
    if (pFVar5 != (FContiguousSparse2DKernelTransform *)0x0) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  if (local_res20 != (undefined8 *)0x0) {
    (**(code **)*local_res20)(local_res20,1);
  }
  if (pTVar1->Ptr != (IFFTAlgorithm *)0x0) {
    iVar12 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&this->WindowedSamples,iVar12);
    iVar12 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar12 + 2,&(this->ComplexSpectrum).AllocatorInstance,
               &(this->ComplexSpectrum).ArrayNum,&(this->ComplexSpectrum).ArrayMax);
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,(this->ComplexSpectrum).ArrayNum / 2,&(this->RealSpectrum).AllocatorInstance,
               &(this->RealSpectrum).ArrayNum,&(this->RealSpectrum).ArrayMax);
  }
  return this;
}

// CalculateCQT @ 14d801ab0

void __thiscall
Audio::FConstantQAnalyzer::CalculateCQT
          (FConstantQAnalyzer *this,float *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  ESpectrumType EVar1;
  IFFTAlgorithm *pIVar2;
  FContiguousSparse2DKernelTransform *this_00;
  code *pcVar3;
  float *pfVar4;
  undefined8 uVar5;
  EFFTScaling EVar6;
  bool bVar7;
  TArrayView<float,int> *pTVar8;
  TArrayView<float_const_,int> *pTVar9;
  TArrayView<float,int> local_118;
  TArrayView<float_const_,int> local_108;
  TArrayView<float,int> local_f8;
  TArrayView<float,int> local_e8;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float,int> local_c8;
  TArrayView<float,int> local_b8;
  TArrayView<float,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float,int> local_48;
  TArrayView<float,int> local_38;
  TArrayView<float,int> local_28 [2];
  
  memcpy((this->WindowedSamples).AllocatorInstance.Data,param_1,
         (longlong)(this->Settings).FFTSize << 2);
  FWindow::ApplyToBuffer(&this->Window,(float *)(this->WindowedSamples).AllocatorInstance.Data);
  pIVar2 = (this->FFT).Ptr;
  if (pIVar2 != (IFFTAlgorithm *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,(this->WindowedSamples).AllocatorInstance.Data);
    pTVar8 = TArrayView<float,int>::
             TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                       (&local_98,&this->RealSpectrum);
    local_118.DataPtr = pTVar8->DataPtr;
    local_118.ArrayNum = pTVar8->ArrayNum;
    local_118._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
    pTVar9 = TArrayView<float_const_,int>::
             TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                       (&local_88,&this->ComplexSpectrum);
    local_108.DataPtr = pTVar9->DataPtr;
    local_108.ArrayNum = pTVar9->ArrayNum;
    local_108._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
    ArrayComplexToPower(&local_108,&local_118);
    pTVar8 = TArrayView<float,int>::
             TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                       (&local_78,&this->RealSpectrum);
    pfVar4 = pTVar8->DataPtr;
    uVar5._0_4_ = pTVar8->ArrayNum;
    uVar5._4_4_ = *(undefined4 *)&pTVar8->field_0xc;
    EVar6 = (**(code **)((longlong)*(this->FFT).Ptr + 0x10))();
    local_f8.DataPtr = pfVar4;
    local_f8._8_8_ = uVar5;
    ScalePowerSpectrumInPlace(this->ActualFFTSize,EVar6,None,&local_f8);
    EVar1 = (this->Settings).SpectrumType;
    if (EVar1 == MagnitudeSpectrum) {
      pTVar8 = TArrayView<float,int>::
               TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                         (&local_68,&this->RealSpectrum);
      local_e8.DataPtr = pTVar8->DataPtr;
      local_e8.ArrayNum = pTVar8->ArrayNum;
      local_e8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
      ArraySqrtInPlace(&local_e8);
    }
    else if (EVar1 != PowerSpectrum) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("ESpectrumType::PowerSpectrum == Settings.SpectrumType",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\ConstantQAnalyzer.cpp"
                         ,0x44,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    this_00 = (this->CQTTransform).Ptr;
    pTVar9 = TArrayView<float_const_,int>::
             TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                       (&local_58,&this->RealSpectrum);
    local_d8.DataPtr = pTVar9->DataPtr;
    local_d8.ArrayNum = pTVar9->ArrayNum;
    local_d8._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
    FContiguousSparse2DKernelTransform::TransformArray(this_00,&local_d8,param_2);
    if ((this->Settings).Scaling == Decibel) {
      EVar1 = (this->Settings).SpectrumType;
      if (EVar1 == MagnitudeSpectrum) {
        pTVar8 = TArrayView<float,int>::
                 TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                           (local_28,param_2);
        local_a8.DataPtr = pTVar8->DataPtr;
        local_a8.ArrayNum = pTVar8->ArrayNum;
        local_a8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
        ArrayMagnitudeToDecibelInPlace(&local_a8,__real_c2b40000);
      }
      else if (EVar1 == PowerSpectrum) {
        pTVar8 = TArrayView<float,int>::
                 TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                           (&local_38,param_2);
        local_b8.DataPtr = pTVar8->DataPtr;
        local_b8.ArrayNum = pTVar8->ArrayNum;
        local_b8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
        ArrayPowerToDecibelInPlace(&local_b8,__real_c2b40000);
      }
      else {
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("false",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\ConstantQAnalyzer.cpp"
                           ,0x59,L"");
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pTVar8 = TArrayView<float,int>::
                 TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                           (&local_48,param_2);
        local_c8.DataPtr = pTVar8->DataPtr;
        local_c8.ArrayNum = pTVar8->ArrayNum;
        local_c8._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
        ArrayPowerToDecibelInPlace(&local_c8,__real_c2b40000);
      }
    }
  }
  return;
}

// GetSettings @ 14d807a70

FConstantQAnalyzerSettings * __thiscall
Audio::FConstantQAnalyzer::GetSettings(FConstantQAnalyzer *this)

{
  return &this->Settings;
}

