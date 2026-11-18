// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 3

// FSynesthesiaSpectrumAnalyzer @ 14d7f8ce0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FSynesthesiaSpectrumAnalyzer * __thiscall
Audio::FSynesthesiaSpectrumAnalyzer::FSynesthesiaSpectrumAnalyzer
          (FSynesthesiaSpectrumAnalyzer *this,float param_1,
          FSynesthesiaSpectrumAnalyzerSettings *param_2)

{
  TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> *pTVar1;
  FSynesthesiaSpectrumAnalyzerSettings FVar2;
  IFFTAlgorithm *pIVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  FSynesthesiaSpectrumAnalyzer *pFVar8;
  TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> TVar9;
  float fVar10;
  FName local_res8;
  FFFTSettings local_res18;
  
  FVar2 = *param_2;
  this->SampleRate = param_1;
  this->Settings = FVar2;
  this->FFTScaling = 0.0;
  FWindow::FWindow(&this->Window,param_2->WindowType,param_2->FFTSize,1,false);
  pTVar1 = &this->FFT;
  pTVar1->Ptr = (IFFTAlgorithm *)0x0;
  (this->WindowedBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowedBuffer).ArrayNum = 0;
  (this->WindowedBuffer).ArrayMax = 0;
  (this->FFTOutput).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FFTOutput).ArrayNum = 0;
  (this->FFTOutput).ArrayMax = 0;
  if (this->SampleRate <= 0.0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3024290479765192691>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\SynesthesiaSpectrumAnalyzer.cpp"
                       ,0xd,"SampleRate > 0.f");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pFVar8 = (FSynesthesiaSpectrumAnalyzer *)(*pcVar4)();
      return pFVar8;
    }
    this->SampleRate = 48000.0;
  }
  iVar7 = (this->Settings).FFTSize;
  local_res8.ComparisonIndex.Value = 6;
  if (0x40 < iVar7) {
    do {
      if (0xf < (int)local_res8.ComparisonIndex.Value) break;
      local_res8.ComparisonIndex.Value = local_res8.ComparisonIndex.Value + 1;
    } while (1 << ((byte)local_res8.ComparisonIndex.Value & 0x1f) < iVar7);
  }
  local_res8.Number._0_2_ = 0x101;
  TVar9 = FFFTFactory::NewFFTAlgorithm(&local_res18,&local_res8);
  if ((IFFTAlgorithm *)pTVar1 != TVar9.Ptr) {
    pIVar3 = pTVar1->Ptr;
    pTVar1->Ptr = (IFFTAlgorithm *)*TVar9.Ptr;
    *TVar9.Ptr = (IFFTAlgorithm)0x0;
    if (pIVar3 != (IFFTAlgorithm *)0x0) {
      (**(code **)*pIVar3)(pIVar3,1);
    }
  }
  if (local_res18 != (FFFTSettings)0x0) {
    (*(code *)**(undefined8 **)local_res18)(local_res18,1);
  }
  if ((pTVar1->Ptr == (IFFTAlgorithm *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("FFT.IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\SynesthesiaSpectrumAnalyzer.cpp"
                         ,0x24,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pFVar8 = (FSynesthesiaSpectrumAnalyzer *)(*pcVar4)();
    return pFVar8;
  }
  cVar6 = (**(code **)((longlong)*pTVar1->Ptr + 0x10))();
  fVar10 = __real_3f800000;
  if (cVar6 != '\0') {
    if (cVar6 == '\x01') {
      iVar7 = (this->Settings).FFTSize;
      fVar10 = __real_3f800000 / (float)(iVar7 * iVar7);
    }
    else if (cVar6 == '\x02') {
      fVar10 = __real_3f800000 / (float)(this->Settings).FFTSize;
    }
    else if (cVar6 == '\x03') {
      iVar7 = (this->Settings).FFTSize;
      fVar10 = (float)(iVar7 * iVar7);
    }
    else if (cVar6 == '\x04') {
      fVar10 = (float)(this->Settings).FFTSize;
    }
  }
  this->FFTScaling = fVar10;
  iVar7 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
  TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized(&this->WindowedBuffer,iVar7,Default)
  ;
  iVar7 = (**(code **)((longlong)*pTVar1->Ptr + 8))();
  TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized(&this->FFTOutput,iVar7 + 2,Default);
  return this;
}

// GetSettings @ 14d807ab0

FSynesthesiaSpectrumAnalyzerSettings * __thiscall
Audio::FSynesthesiaSpectrumAnalyzer::GetSettings(FSynesthesiaSpectrumAnalyzer *this)

{
  return &this->Settings;
}

// ProcessAudio @ 14d808f40

void __thiscall
Audio::FSynesthesiaSpectrumAnalyzer::ProcessAudio
          (FSynesthesiaSpectrumAnalyzer *this,TArrayView<float_const_,int> *param_1,
          TArrayView<float,int> *param_2)

{
  ESynesthesiaSpectrumType EVar1;
  IFFTAlgorithm *pIVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TArrayView<float_const_,int> *pTVar6;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float,int> local_48;
  TArrayView<float,int> local_38;
  TArrayView<float,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  iVar5 = (**(code **)((longlong)*(this->FFT).Ptr + 8))();
  if (param_1->ArrayNum == iVar5) {
    iVar5 = (**(code **)((longlong)*(this->FFT).Ptr + 8))();
    if (param_2->ArrayNum == (iVar5 + 2) / 2) {
      memcpy((this->WindowedBuffer).AllocatorInstance.Data,param_1->DataPtr,
             (longlong)(this->Settings).FFTSize << 2);
      FWindow::ApplyToBuffer(&this->Window,(float *)(this->WindowedBuffer).AllocatorInstance.Data);
      pIVar2 = (this->FFT).Ptr;
      (**(code **)((longlong)*pIVar2 + 0x20))
                (pIVar2,(this->WindowedBuffer).AllocatorInstance.Data,
                 (this->FFTOutput).AllocatorInstance.Data);
      local_68.DataPtr = param_2->DataPtr;
      local_68.ArrayNum = param_2->ArrayNum;
      local_68._12_4_ = *(undefined4 *)&param_2->field_0xc;
      pTVar6 = TArrayView<float_const_,int>::
               TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                         (&local_18,&this->FFTOutput);
      local_58.DataPtr = pTVar6->DataPtr;
      local_58.ArrayNum = pTVar6->ArrayNum;
      local_58._12_4_ = *(undefined4 *)&pTVar6->field_0xc;
      ArrayComplexToPower(&local_58,&local_68);
      local_48.DataPtr = param_2->DataPtr;
      local_48.ArrayNum = param_2->ArrayNum;
      local_48._12_4_ = *(undefined4 *)&param_2->field_0xc;
      ArrayMultiplyByConstantInPlace(&local_48,this->FFTScaling);
      EVar1 = (this->Settings).SpectrumType;
      if (EVar1 == MagnitudeSpectrum) {
        local_28.DataPtr = param_2->DataPtr;
        local_28.ArrayNum = param_2->ArrayNum;
        local_28._12_4_ = *(undefined4 *)&param_2->field_0xc;
        ArraySqrtInPlace(&local_28);
      }
      else if (EVar1 != PowerSpectrum) {
        if (EVar1 == Decibel) {
          local_38.DataPtr = param_2->DataPtr;
          local_38.ArrayNum = param_2->ArrayNum;
          local_38._12_4_ = *(undefined4 *)&param_2->field_0xc;
          ArrayPowerToDecibelInPlace(&local_38,__real_c2b40000);
        }
        else {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("false",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\SynesthesiaSpectrumAnalyzer.cpp"
                             ,0x62,L"Unhandled ESynesthesiaSpectrumType");
          if (bVar4) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_3024290479765192635>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\SynesthesiaSpectrumAnalyzer.cpp"
                         ,0x45,"OutSpectrum.Num() == FFT->NumOutputFloats() / 2");
      if (bVar4) goto code_r0x00014d808fe1;
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_3024290479765192635>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\SynesthesiaSpectrumAnalyzer.cpp"
                       ,0x45,"InSampleView.Num() == FFT->NumInputFloats()");
    if (bVar4) {
code_r0x00014d808fe1:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

