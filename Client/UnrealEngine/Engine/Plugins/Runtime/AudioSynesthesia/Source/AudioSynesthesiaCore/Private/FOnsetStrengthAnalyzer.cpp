// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 7

// FOnsetStrengthAnalyzer @ 14d7f8360

FOnsetStrengthAnalyzer * __thiscall
Audio::FOnsetStrengthAnalyzer::FOnsetStrengthAnalyzer
          (FOnsetStrengthAnalyzer *this,FOnsetStrengthSettings *param_1,float param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  FMelSpectrumKernelSettings *pFVar4;
  FScriptContainerElement *pFVar5;
  TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *pTVar6;
  TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> *pTVar7;
  TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
  *pTVar8;
  EWindowType EVar9;
  IFFTAlgorithm *pIVar10;
  FContiguousSparse2DKernelTransform *pFVar11;
  code *pcVar12;
  undefined3 uVar13;
  float fVar14;
  EMelNormalization EVar15;
  bool bVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  FOnsetStrengthAnalyzer *pFVar23;
  TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> TVar24;
  TUniquePtr<Audio::FContiguousSparse2DKernelTransform,TDefaultDelete<Audio::FContiguousSparse2DKernelTransform>_>
  TVar25;
  FScriptContainerElement *pFVar26;
  FScriptContainerElement *pFVar27;
  float fVar28;
  FFFTSettings local_res10;
  undefined1 local_res18 [8];
  FFFTSettings local_res20;
  undefined8 *local_68 [5];
  
  iVar17 = param_1->NumWindowFrames;
  iVar18 = param_1->ComparisonLag;
  iVar19 = param_1->FFTSize;
  (this->Settings).NumHopFrames = param_1->NumHopFrames;
  (this->Settings).NumWindowFrames = iVar17;
  (this->Settings).ComparisonLag = iVar18;
  (this->Settings).FFTSize = iVar19;
  uVar13 = *(undefined3 *)&param_1->field_0x11;
  fVar28 = param_1->NoiseFloorDb;
  iVar17 = (param_1->MelSettings).NumBands;
  fVar14 = (param_1->MelSettings).KernelMinCenterFreq;
  (this->Settings).WindowType = param_1->WindowType;
  *(undefined3 *)&(this->Settings).field_0x11 = uVar13;
  (this->Settings).NoiseFloorDb = fVar28;
  (this->Settings).MelSettings.NumBands = iVar17;
  (this->Settings).MelSettings.KernelMinCenterFreq = fVar14;
  EVar15 = (param_1->MelSettings).Normalization;
  uVar13 = *(undefined3 *)&(param_1->MelSettings).field_0xd;
  (this->Settings).MelSettings.KernelMaxCenterFreq = (param_1->MelSettings).KernelMaxCenterFreq;
  (this->Settings).MelSettings.Normalization = EVar15;
  *(undefined3 *)&(this->Settings).MelSettings.field_0xd = uVar13;
  (this->Settings).MelSettings.BandWidthStretch = (param_1->MelSettings).BandWidthStretch;
  this->LagSpectraIndex = 0;
  fVar28 = param_2;
  TSlidingBuffer<float>::TSlidingBuffer<float>
            (&this->SlidingBuffer,param_1->NumWindowFrames,param_1->NumHopFrames);
  EVar9 = (this->Settings).WindowType;
  piVar1 = &(this->RealSpectrum).ArrayNum;
  (this->RealSpectrum).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar20 = &(this->RealSpectrum).ArrayMax;
  *piVar1 = 0;
  pTVar6 = &this->PreviousMelSpectra;
  (this->WorkingBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar20 = 0;
  piVar2 = &(this->MelSpectrum).ArrayNum;
  (this->MelSpectrum).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar21 = &(this->MelSpectrum).ArrayMax;
  *piVar2 = 0;
  *piVar21 = 0;
  piVar3 = &(this->MelSpectrumDifference).ArrayNum;
  (this->MelSpectrumDifference).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *piVar3 = 0;
  piVar22 = &(this->MelSpectrumDifference).ArrayMax;
  (this->WorkingBuffer).ArrayNum = 0;
  (this->WorkingBuffer).ArrayMax = 0;
  (this->WindowedSamples).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WindowedSamples).ArrayNum = 0;
  (this->WindowedSamples).ArrayMax = 0;
  *piVar22 = 0;
  (this->ComplexSpectrum).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComplexSpectrum).ArrayNum = 0;
  (this->ComplexSpectrum).ArrayMax = 0;
  (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PreviousMelSpectra).ArrayNum = 0;
  (this->PreviousMelSpectra).ArrayMax = 0;
  FWindow::FWindow(&this->Window,EVar9,(this->Settings).NumWindowFrames,1,false);
  (this->MelTransform).Ptr = (FContiguousSparse2DKernelTransform *)0x0;
  pTVar7 = &this->FFT;
  pTVar7->Ptr = (IFFTAlgorithm *)0x0;
  if (param_2 <= 0.0) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("InSampleRate > 0.f",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetAnalyzer.cpp"
                        ,0x10,L"");
    if (bVar16) {
      pcVar12 = (code *)swi(3);
      pFVar23 = (FOnsetStrengthAnalyzer *)(*pcVar12)();
      return pFVar23;
    }
  }
  if ((this->Settings).FFTSize < 1) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Settings.FFTSize > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetAnalyzer.cpp"
                        ,0x11,L"");
    if (bVar16) {
      pcVar12 = (code *)swi(3);
      pFVar23 = (FOnsetStrengthAnalyzer *)(*pcVar12)();
      return pFVar23;
    }
  }
  if ((this->Settings).NumHopFrames < 1) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Settings.NumHopFrames > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetAnalyzer.cpp"
                        ,0x12,L"");
    if (bVar16) {
      pcVar12 = (code *)swi(3);
      pFVar23 = (FOnsetStrengthAnalyzer *)(*pcVar12)();
      return pFVar23;
    }
  }
  if ((this->Settings).NumWindowFrames < 1) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Settings.NumWindowFrames > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetAnalyzer.cpp"
                        ,0x13,L"");
    if (bVar16) {
      pcVar12 = (code *)swi(3);
      pFVar23 = (FOnsetStrengthAnalyzer *)(*pcVar12)();
      return pFVar23;
    }
  }
  if ((this->Settings).ComparisonLag < 1) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Settings.ComparisonLag > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetAnalyzer.cpp"
                        ,0x14,L"");
    if (bVar16) {
      pcVar12 = (code *)swi(3);
      pFVar23 = (FOnsetStrengthAnalyzer *)(*pcVar12)();
      return pFVar23;
    }
  }
  pFVar4 = &(this->Settings).MelSettings;
  if ((this->Settings).MelSettings.NumBands < 1) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Settings.MelSettings.NumBands > 0",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetAnalyzer.cpp"
                        ,0x15,L"");
    if (bVar16) {
      pcVar12 = (code *)swi(3);
      pFVar23 = (FOnsetStrengthAnalyzer *)(*pcVar12)();
      return pFVar23;
    }
  }
  if ((this->Settings).FFTSize < (this->Settings).NumWindowFrames) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("Settings.NumWindowFrames <= Settings.FFTSize",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetAnalyzer.cpp"
                        ,0x16,L"");
    if (bVar16) {
      pcVar12 = (code *)swi(3);
      pFVar23 = (FOnsetStrengthAnalyzer *)(*pcVar12)();
      return pFVar23;
    }
  }
  local_res10.Log2Size = CeilLog2((this->Settings).FFTSize);
  local_res10.bArrays128BitAligned = true;
  local_res10.bEnableHardwareAcceleration = true;
  this->ActualFFTSize = 1 << ((byte)local_res10.Log2Size & 0x1f);
  bVar16 = FFFTFactory::AreFFTSettingsSupported(&local_res10,&FFFTFactory::AnyAlgorithmFactory);
  if (!bVar16) {
    bVar16 = ::FDebug::CheckVerifyFailedImpl2
                       ("FFFTFactory::AreFFTSettingsSupported(FFTSettings)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetAnalyzer.cpp"
                        ,0x1f,L"No fft algorithm supports fft settings.");
    if (bVar16) {
      pcVar12 = (code *)swi(3);
      pFVar23 = (FOnsetStrengthAnalyzer *)(*pcVar12)();
      return pFVar23;
    }
  }
  TVar24 = FFFTFactory::NewFFTAlgorithm(&local_res20,(FName *)&local_res10);
  if ((IFFTAlgorithm *)pTVar7 != TVar24.Ptr) {
    pIVar10 = pTVar7->Ptr;
    pTVar7->Ptr = (IFFTAlgorithm *)*TVar24.Ptr;
    *TVar24.Ptr = (IFFTAlgorithm)0x0;
    if (pIVar10 != (IFFTAlgorithm *)0x0) {
      (**(code **)*pIVar10)(pIVar10,1);
    }
  }
  if (local_res20 != (FFFTSettings)0x0) {
    (*(code *)**(undefined8 **)local_res20)(local_res20,1);
  }
  if (pTVar7->Ptr != (IFFTAlgorithm *)0x0) {
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,(this->Settings).NumWindowFrames,&(this->WorkingBuffer).AllocatorInstance,
               &(this->WorkingBuffer).ArrayNum,&(this->WorkingBuffer).ArrayMax);
    iVar17 = (**(code **)((longlong)*pTVar7->Ptr + 8))();
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed(&this->WindowedSamples,iVar17);
    iVar17 = (**(code **)((longlong)*pTVar7->Ptr + 8))();
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,iVar17 + 2,&(this->ComplexSpectrum).AllocatorInstance,
               &(this->ComplexSpectrum).ArrayNum,&(this->ComplexSpectrum).ArrayMax);
    iVar17 = (**(code **)((longlong)*pTVar7->Ptr + 8))();
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,(iVar17 + 2) / 2,&(this->RealSpectrum).AllocatorInstance,piVar1,piVar20);
    iVar17 = (this->Settings).ComparisonLag;
    piVar1 = &(this->PreviousMelSpectra).ArrayNum;
    iVar18 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar17,&pTVar6->AllocatorInstance,piVar1,
                        &(this->PreviousMelSpectra).ArrayMax);
    memset((pTVar6->AllocatorInstance).Data + (longlong)iVar18 * 0x10,0,(longlong)iVar17 << 4);
    iVar17 = *piVar1;
    pFVar26 = (pTVar6->AllocatorInstance).Data;
    pFVar27 = pFVar26 + (longlong)iVar17 * 0x10;
    while( true ) {
      if (*piVar1 != iVar17) {
        `TCheckedPointerIterator<TArray<float,TAlignedHeapAllocator<16>_>,int,0>::operator!='::__l2
        ::<lambda_1>::operator()(local_res18);
      }
      if (pFVar26 == pFVar27) break;
      pFVar5 = pFVar26 + 8;
      if (*(int *)(pFVar26 + 0xc) < 0) {
        *(int *)pFVar5 = 0;
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,0,(ForAnyElementType *)pFVar26,0,(int *)(pFVar26 + 0xc));
      }
      else {
        *(int *)pFVar5 = 0;
      }
      iVar18 = pFVar4->NumBands;
      iVar19 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                         (4,4,iVar18,(ForAnyElementType *)pFVar26,(int *)pFVar5,
                          (int *)(pFVar26 + 0xc));
      memset((void *)(*(longlong *)pFVar26 + (longlong)iVar19 * 4),0,(longlong)iVar18 << 2);
      pFVar26 = pFVar26 + 0x10;
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,pFVar4->NumBands,&(this->MelSpectrum).AllocatorInstance,piVar2,piVar21);
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,pFVar4->NumBands,&(this->MelSpectrumDifference).AllocatorInstance,piVar3,piVar22)
    ;
    TVar25 = NewMelSpectrumKernelTransform
                       ((FMelSpectrumKernelSettings *)local_68,(int)pFVar4,fVar28);
    pTVar8 = &this->MelTransform;
    if ((FContiguousSparse2DKernelTransform *)pTVar8 != TVar25.Ptr) {
      pFVar11 = pTVar8->Ptr;
      pTVar8->Ptr = (FContiguousSparse2DKernelTransform *)(TVar25.Ptr)->_padding_;
      (TVar25.Ptr)->_padding_ = 0;
      if (pFVar11 != (FContiguousSparse2DKernelTransform *)0x0) {
        (**(code **)pFVar11->_padding_)(pFVar11,1);
      }
    }
    if (local_68[0] != (undefined8 *)0x0) {
      (**(code **)*local_68[0])(local_68[0],1);
    }
  }
  return this;
}

// AnalyzeAudio @ 14d7fde20

void __thiscall
Audio::FOnsetStrengthAnalyzer::AnalyzeAudio
          (FOnsetStrengthAnalyzer *this,TArrayView<float_const_,int> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float local_128 [6];
  longlong local_110;
  longlong lStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  int iStack_f8;
  undefined4 uStack_f4;
  uint local_f0;
  int local_ec;
  int local_e8;
  TArray<float,TAlignedHeapAllocator<16>_> *local_e0;
  int local_d8;
  TScopedSlidingWindow<float> local_c8;
  TArray<float,TAlignedHeapAllocator<16>_> *local_88;
  FScriptContainerElement *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  TArrayView<float_const_,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float_const_,int> local_48;
  
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  local_68.DataPtr = param_1->DataPtr;
  local_68.ArrayNum = param_1->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TScopedSlidingWindow<float>::TScopedSlidingWindow<float>
            (&local_c8,&this->SlidingBuffer,&local_68,param_3);
  pTVar1 = &this->WorkingBuffer;
  local_c8._padding_ =
       (longlong)&___7__TAutoSlidingWindow_MV__TAlignedHeapAllocator__0BA____Audio__6B_;
  local_ec = local_c8._padding_._4_4_;
  local_f0 = (uint)local_c8._padding_;
  local_110 = local_c8._padding_;
  lStack_108 = local_c8._padding_;
  lVar8 = lStack_108;
  local_100 = (undefined4)local_c8._padding_;
  uStack_fc = local_c8._padding_._4_4_;
  iStack_f8 = (int)local_c8._padding_;
  uStack_f4 = local_c8._padding_._4_4_;
  if ((int)local_c8._padding_ == -1) {
    local_e8 = -1;
    local_d8 = -1;
  }
  else {
    local_e8 = (int)local_c8._padding_;
    local_d8 = local_c8._padding_._4_4_;
    if ((int)local_c8._padding_ < local_c8._padding_._4_4_) {
      local_d8 = -1;
    }
  }
  local_e0 = pTVar1;
  local_88 = pTVar1;
  if (local_d8 != -1) {
    lStack_108._0_4_ = (int)local_c8._padding_;
    iVar7 = (int)lStack_108;
    lStack_108 = lVar8;
    do {
      iVar9 = local_d8;
      if ((int)(uint)local_c8._padding_ < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_c8._padding_);
      }
      uVar4 = (this->WorkingBuffer).ArrayMax;
      piVar3 = &(this->WorkingBuffer).ArrayMax;
      piVar2 = &(this->WorkingBuffer).ArrayNum;
      if ((int)uVar4 < (int)(uint)local_c8._padding_) {
        *piVar2 = 0;
        if (uVar4 != (uint)local_c8._padding_) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,(uint)local_c8._padding_,&pTVar1->AllocatorInstance,0,piVar3);
        }
      }
      else {
        *piVar2 = 0;
      }
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,(uint)local_c8._padding_,&pTVar1->AllocatorInstance,piVar2,piVar3);
      iVar12 = 0;
      if (iVar9 < iVar7) {
        iVar12 = iVar7 - iVar9;
        memcpy((pTVar1->AllocatorInstance).Data,(void *)(local_110 + (longlong)iVar9 * 4),
               (longlong)iVar12 << 2);
      }
      if (iVar12 < (int)(uint)local_c8._padding_) {
        iVar11 = (iVar9 - iVar7) + iVar12;
        iVar13 = iStack_f8 - iVar11;
        if ((int)((uint)local_c8._padding_ - iVar12) < iVar13) {
          iVar13 = (uint)local_c8._padding_ - iVar12;
        }
        if (0 < iVar13) {
          memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 4,
                 (void *)(CONCAT44(uStack_fc,local_100) + (longlong)iVar11 * 4),
                 (longlong)iVar13 << 2);
          iVar12 = iVar12 + iVar13;
        }
        if (iVar12 < (int)(uint)local_c8._padding_) {
          memset((pTVar1->AllocatorInstance).Data + (longlong)iVar12 * 4,0,
                 (longlong)(int)((uint)local_c8._padding_ - iVar12) << 2);
        }
      }
      local_78 = (pTVar1->AllocatorInstance).Data;
      iVar12 = (this->WorkingBuffer).ArrayNum;
      if ((iVar12 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_58._12_4_ = uStack_6c;
      local_58.ArrayNum = iVar12;
      local_58.DataPtr = (float *)local_78;
      iStack_70 = iVar12;
      local_128[0] = GetNextOnsetStrength(this,&local_58);
      pFVar5 = (param_2->AllocatorInstance).Data;
      piVar3 = &param_2->ArrayMax;
      if (((pFVar5 <= (FScriptContainerElement *)local_128) &&
          ((FScriptContainerElement *)local_128 < pFVar5 + (longlong)*piVar3 * 4)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar10)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      iVar12 = param_2->ArrayNum;
      if (iVar12 == *piVar3) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&param_2->AllocatorInstance,piVar3);
      }
      local_d8 = iVar9 + local_ec;
      param_2->ArrayNum = iVar12 + 1;
      *(float *)((param_2->AllocatorInstance).Data + (longlong)iVar12 * 4) = local_128[0];
      if (local_e8 < local_d8) {
        local_d8 = -1;
      }
    } while (local_d8 != -1);
    local_d8 = -1;
  }
  TSlidingBuffer<float>::StoreForFutureWindows
            ((TSlidingBuffer<float> *)
             CONCAT44(local_c8.SlidingBuffer._4_4_,local_c8.SlidingBuffer._0_4_),&local_48);
  return;
}

// CalculateOnsetStrengths @ 14d8026b0

void __thiscall
Audio::FOnsetStrengthAnalyzer::CalculateOnsetStrengths
          (FOnsetStrengthAnalyzer *this,TArrayView<float_const_,int> *param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  TArrayView<float_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  AnalyzeAudio(this,&local_18,param_2,false);
  return;
}

// FlushAudio @ 14d8068d0

void __thiscall
Audio::FOnsetStrengthAnalyzer::FlushAudio
          (FOnsetStrengthAnalyzer *this,TArray<float,TSizedDefaultAllocator<32>_> *param_1)

{
  TArrayView<float_const_,int> local_18;
  
  local_18._8_8_ = local_18._8_8_ & 0xffffffff00000000;
  local_18.DataPtr = (float *)0x0;
  AnalyzeAudio(this,&local_18,param_1,true);
  return;
}

// GetNextOnsetStrength @ 14d807650

float __thiscall
Audio::FOnsetStrengthAnalyzer::GetNextOnsetStrength
          (FOnsetStrengthAnalyzer *this,TArrayView<float_const_,int> *param_1)

{
  uint uVar1;
  IFFTAlgorithm *pIVar2;
  FContiguousSparse2DKernelTransform *this_00;
  code *pcVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  EFFTScaling EVar7;
  bool bVar8;
  uint uVar9;
  TArrayView<float,int> *pTVar10;
  TArrayView<float_const_,int> *pTVar11;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar12;
  float fVar13;
  float local_res8 [2];
  TArrayView<float,int> local_198;
  TArrayView<float_const_,int> local_188;
  TArrayView<float,int> local_178;
  TArrayView<float_const_,int> local_168;
  TArrayView<float,int> local_158;
  TArrayView<float,int> local_148;
  TArrayView<float,int> local_138;
  TArrayView<float_const_,int> local_128;
  TArrayView<float_const_,int> local_118;
  TArrayView<float,int> local_108;
  TArrayView<float_const_,int> local_f8;
  TArrayView<float,int> local_e8;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float,int> local_c8;
  TArrayView<float_const_,int> local_b8;
  TArrayView<float,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float_const_,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<float_const_,int> local_48 [3];
  
  local_res8[0] = 0.0;
  if (((this->FFT).Ptr != (IFFTAlgorithm *)0x0) &&
     ((this->MelTransform).Ptr != (FContiguousSparse2DKernelTransform *)0x0)) {
    memcpy((this->WindowedSamples).AllocatorInstance.Data,param_1->DataPtr,
           (longlong)(this->Settings).NumWindowFrames << 2);
    FWindow::ApplyToBuffer(&this->Window,(float *)(this->WindowedSamples).AllocatorInstance.Data);
    pIVar2 = (this->FFT).Ptr;
    (**(code **)((longlong)*pIVar2 + 0x20))(pIVar2,(this->WindowedSamples).AllocatorInstance.Data);
    pTVar10 = TArrayView<float,int>::
              TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                        (&local_e8,&this->RealSpectrum);
    local_198.DataPtr = pTVar10->DataPtr;
    local_198.ArrayNum = pTVar10->ArrayNum;
    local_198._12_4_ = *(undefined4 *)&pTVar10->field_0xc;
    pTVar11 = TArrayView<float_const_,int>::
              TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                        (&local_d8,&this->ComplexSpectrum);
    local_188.DataPtr = pTVar11->DataPtr;
    local_188.ArrayNum = pTVar11->ArrayNum;
    local_188._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
    ArrayComplexToPower(&local_188,&local_198);
    pTVar10 = TArrayView<float,int>::
              TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                        (&local_c8,&this->RealSpectrum);
    pfVar4 = pTVar10->DataPtr;
    uVar5._0_4_ = pTVar10->ArrayNum;
    uVar5._4_4_ = *(undefined4 *)&pTVar10->field_0xc;
    EVar7 = (**(code **)((longlong)*(this->FFT).Ptr + 0x10))();
    local_178.DataPtr = pfVar4;
    local_178._8_8_ = uVar5;
    ScalePowerSpectrumInPlace(this->ActualFFTSize,EVar7,None,&local_178);
    this_00 = (this->MelTransform).Ptr;
    pTVar11 = TArrayView<float_const_,int>::
              TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                        (&local_b8,&this->RealSpectrum);
    local_168.DataPtr = pTVar11->DataPtr;
    local_168.ArrayNum = pTVar11->ArrayNum;
    local_168._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
    FContiguousSparse2DKernelTransform::TransformArray(this_00,&local_168,&this->MelSpectrum);
    pTVar10 = TArrayView<float,int>::
              TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                        (&local_a8,&this->MelSpectrum);
    local_158.DataPtr = pTVar10->DataPtr;
    local_158.ArrayNum = pTVar10->ArrayNum;
    local_158._12_4_ = *(undefined4 *)&pTVar10->field_0xc;
    ArrayPowerToDecibelInPlace(&local_158,__real_c2b40000);
    fVar13 = (this->Settings).NoiseFloorDb;
    pTVar10 = TArrayView<float,int>::
              TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                        (&local_98,&this->MelSpectrum);
    local_148.DataPtr = pTVar10->DataPtr;
    local_148.ArrayNum = pTVar10->ArrayNum;
    local_148._12_4_ = *(undefined4 *)&pTVar10->field_0xc;
    ArrayClampMinInPlace(&local_148,fVar13);
    uVar1 = this->LagSpectraIndex;
    uVar9 = 0;
    if ((int)uVar1 < (this->PreviousMelSpectra).ArrayNum) {
      uVar9 = ~uVar1 >> 0x1f;
    }
    if (uVar9 == 0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar8) {
        pcVar3 = (code *)swi(3);
        fVar13 = (float)(*pcVar3)();
        return fVar13;
      }
    }
    pTVar12 = (TArray<float,TAlignedHeapAllocator<16>_> *)
              ((this->PreviousMelSpectra).AllocatorInstance.Data + (longlong)(int)uVar1 * 0x10);
    if (0 < pTVar12->ArrayNum) {
      pTVar10 = TArrayView<float,int>::
                TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                          (&local_88,&this->MelSpectrumDifference);
      pfVar4 = pTVar10->DataPtr;
      uVar6._0_4_ = pTVar10->ArrayNum;
      uVar6._4_4_ = *(undefined4 *)&pTVar10->field_0xc;
      pTVar11 = TArrayView<float_const_,int>::
                TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                          (&local_78,pTVar12);
      local_128.DataPtr = pTVar11->DataPtr;
      local_128.ArrayNum = pTVar11->ArrayNum;
      local_128._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
      local_138.DataPtr = pfVar4;
      local_138._8_8_ = uVar6;
      pTVar11 = TArrayView<float_const_,int>::
                TArrayView<float_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                          (&local_68,&this->MelSpectrum);
      local_118.DataPtr = pTVar11->DataPtr;
      local_118.ArrayNum = pTVar11->ArrayNum;
      local_118._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
      ArraySubtract(&local_118,&local_128,&local_138);
      pTVar10 = TArrayView<float,int>::
                TArrayView<float,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                          (&local_58,&this->MelSpectrumDifference);
      local_108.DataPtr = pTVar10->DataPtr;
      local_108.ArrayNum = pTVar10->ArrayNum;
      local_108._12_4_ = *(undefined4 *)&pTVar10->field_0xc;
      ArrayClampMinInPlace(&local_108,0.0);
      pTVar11 = TArrayView<float_const_,int>::
                TArrayView<float_const_,int><TArray<float,TSizedDefaultAllocator<32>_>_&,TArray<float,TSizedDefaultAllocator<32>_>_>
                          (local_48,&this->MelSpectrumDifference);
      local_f8.DataPtr = pTVar11->DataPtr;
      local_f8.ArrayNum = pTVar11->ArrayNum;
      local_f8._12_4_ = *(undefined4 *)&pTVar11->field_0xc;
      ArrayMean(&local_f8,local_res8);
    }
    memcpy((pTVar12->AllocatorInstance).Data,(this->MelSpectrum).AllocatorInstance.Data,
           (longlong)(this->Settings).MelSettings.NumBands << 2);
    this->LagSpectraIndex = (this->LagSpectraIndex + 1) % (this->Settings).ComparisonLag;
    return local_res8[0];
  }
  return 0.0;
}

// GetTimestampForIndex @ 14d807ac0

float __cdecl
Audio::FOnsetStrengthAnalyzer::GetTimestampForIndex
          (FOnsetStrengthSettings *param_1,float param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_2 <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InSampleRate > 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\OnsetAnalyzer.cpp"
                       ,0x5a,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  return (float)((param_1->NumWindowFrames / 2 +
                 (param_3 * 2 - param_1->ComparisonLag) * param_1->NumHopFrames +
                 param_1->NumWindowFrames) / 2) / param_2;
}

// Reset @ 14d80a0e0

void __thiscall Audio::FOnsetStrengthAnalyzer::Reset(FOnsetStrengthAnalyzer *this)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  
  pFVar5 = (this->PreviousMelSpectra).AllocatorInstance.Data;
  iVar1 = (this->PreviousMelSpectra).ArrayNum;
  pFVar6 = pFVar5 + (longlong)iVar1 * 0x10;
  while( true ) {
    if ((this->PreviousMelSpectra).ArrayNum != iVar1) {
      `TCheckedPointerIterator<TArray<float,TAlignedHeapAllocator<16>_>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar5 == pFVar6) break;
    pFVar3 = pFVar5 + 0xc;
    *(undefined4 *)&pFVar5[8].field_0x0 = 0;
    if (*(int *)pFVar3 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,(ForAnyElementType *)pFVar5,0,(int *)pFVar3);
    }
    iVar2 = (this->Settings).MelSettings.NumBands;
    iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar2,(ForAnyElementType *)pFVar5,(int *)(pFVar5 + 8),(int *)pFVar3);
    memset((void *)(*(longlong *)&pFVar5->field_0x0 + (longlong)iVar4 * 4),0,(longlong)iVar2 << 2);
    pFVar5 = pFVar5 + 0x10;
  }
  iVar1 = (this->SlidingBuffer).StorageBuffer.ArrayMax;
  (this->SlidingBuffer).StorageBuffer.ArrayNum = 0;
  if (iVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->SlidingBuffer).StorageBuffer.AllocatorInstance,0,
               &(this->SlidingBuffer).StorageBuffer.ArrayMax);
  }
  (this->SlidingBuffer).NumUnderflowSamples = 0;
  return;
}

