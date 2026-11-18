// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 5

// FConstantQNRTWorker @ 14d7f5520

FConstantQNRTWorker * __thiscall
Audio::FConstantQNRTWorker::FConstantQNRTWorker
          (FConstantQNRTWorker *this,FAnalyzerNRTParameters *param_1,FConstantQNRTSettings *param_2)

{
  int *piVar1;
  TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_> *pTVar2;
  TUniquePtr<Audio::FConstantQAnalyzer,TDefaultDelete<Audio::FConstantQAnalyzer>_> *pTVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  FScriptContainerElement *pFVar7;
  FContiguousSparse2DKernelTransform *pFVar8;
  IFFTAlgorithm *pIVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  FConstantQNRTWorker *pFVar13;
  TSlidingBuffer<float> *this_00;
  FConstantQAnalyzer *pFVar14;
  FConstantQAnalyzer *pFVar15;
  FConstantQAnalyzer *pFVar16;
  longlong local_48;
  longlong local_40 [3];
  
  pFVar15 = (FConstantQAnalyzer *)0x0;
  this->NumFrames = 0;
  this->_padding_ = (longlong)&___7FConstantQNRTWorker_Audio__6B_;
  piVar1 = &(this->MonoBuffer).ArrayMax;
  pTVar2 = &this->SlidingBuffer;
  this->NumChannels = param_1->NumChannels;
  pTVar3 = &this->ConstantQAnalyzer;
  this->NumBuffers = 0;
  this->SampleRate = param_1->SampleRate;
  this->NumHopFrames = 0;
  this->NumHopSamples = 0;
  this->NumWindowFrames = *(int *)((longlong)&param_2->_padding_ + 4);
  iVar12 = param_1->NumChannels;
  iVar5 = *(int *)((longlong)&param_2->_padding_ + 4);
  this->MonoScaling = 1.0;
  this->NumWindowSamples = iVar12 * iVar5;
  (this->HopBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->HopBuffer).ArrayNum = 0;
  (this->HopBuffer).ArrayMax = 0;
  (this->ChannelBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelBuffer).ArrayNum = 0;
  (this->ChannelBuffer).ArrayMax = 0;
  (this->MonoBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MonoBuffer).ArrayNum = 0;
  *piVar1 = 0;
  (this->CQTSpectrum).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CQTSpectrum).ArrayNum = 0;
  (this->CQTSpectrum).ArrayMax = 0;
  pTVar2->Ptr = (TSlidingBuffer<float> *)0x0;
  pTVar3->Ptr = (FConstantQAnalyzer *)0x0;
  this->bDownmixToMono = param_2->bDownmixToMono;
  if ((param_1->NumChannels < 1) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InParams.NumChannels > 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\ConstantQNRTFactory.cpp"
                          ,0x79,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar13 = (FConstantQNRTWorker *)(*pcVar10)();
    return pFVar13;
  }
  if ((param_1->SampleRate <= 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InParams.SampleRate > 0.f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\ConstantQNRTFactory.cpp"
                          ,0x7a,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar13 = (FConstantQNRTWorker *)(*pcVar10)();
    return pFVar13;
  }
  if ((param_2->AnalysisPeriod <= 0.0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InAnalyzerSettings.AnalysisPeriod > 0.f",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\ConstantQNRTFactory.cpp"
                          ,0x7c,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar13 = (FConstantQNRTWorker *)(*pcVar10)();
    return pFVar13;
  }
  uVar6 = *(uint *)((longlong)&param_2->_padding_ + 4);
  if (((uVar6 & uVar6 - 1) != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("FMath::IsPowerOfTwo(InAnalyzerSettings.FFTSize)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\ConstantQNRTFactory.cpp"
                          ,0x7d,L""), bVar11)) {
    pcVar10 = (code *)swi(3);
    pFVar13 = (FConstantQNRTWorker *)(*pcVar10)();
    return pFVar13;
  }
  iVar12 = (int)ROUND((param_1->SampleRate + param_1->SampleRate) * param_2->AnalysisPeriod +
                      __real_3f000000) >> 1;
  if (iVar12 < 1) {
    iVar12 = 1;
  }
  this->NumHopFrames = iVar12;
  this->NumHopSamples = iVar12 * this->NumChannels;
  if (this->bDownmixToMono != false) {
    uVar6 = this->NumWindowFrames;
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
    }
    piVar4 = &(this->MonoBuffer).ArrayNum;
    *piVar4 = 0;
    if (*piVar1 < (int)uVar6) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar6,&(this->MonoBuffer).AllocatorInstance,0,piVar1);
    }
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,this->NumWindowFrames,&(this->MonoBuffer).AllocatorInstance,piVar4,piVar1);
    this->MonoScaling = __real_3f800000 / SQRT((float)this->NumChannels);
  }
  this_00 = ::operator_new(0x20);
  pFVar14 = pFVar15;
  if (this_00 != (TSlidingBuffer<float> *)0x0) {
    pFVar14 = (FConstantQAnalyzer *)
              TSlidingBuffer<float>::TSlidingBuffer<float>
                        (this_00,this->NumWindowSamples,this->NumHopSamples);
  }
  if (pTVar2 == (TUniquePtr<Audio::TSlidingBuffer<float>,TDefaultDelete<Audio::TSlidingBuffer<float>_>_>
                 *)&local_48) {
    if (pFVar14 == (FConstantQAnalyzer *)0x0) goto LAB_14d7f5793;
    pFVar7 = (((TArray<float,TSizedDefaultAllocator<32>_> *)&(pFVar14->Settings).field_0x8)->
             AllocatorInstance).Data;
    pFVar16 = pFVar14;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
  }
  else {
    pFVar16 = (FConstantQAnalyzer *)pTVar2->Ptr;
    pTVar2->Ptr = (TSlidingBuffer<float> *)pFVar14;
    if (pFVar16 == (FConstantQAnalyzer *)0x0) goto LAB_14d7f5793;
    pFVar7 = (((TArray<float,TSizedDefaultAllocator<32>_> *)&(pFVar16->Settings).field_0x8)->
             AllocatorInstance).Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
  }
  ::operator_delete(pFVar16,0x20);
LAB_14d7f5793:
  pFVar14 = ::operator_new(0x88);
  if (pFVar14 != (FConstantQAnalyzer *)0x0) {
    pFVar15 = FConstantQAnalyzer::FConstantQAnalyzer
                        (pFVar14,(FConstantQAnalyzerSettings *)&param_2->_padding_,this->SampleRate)
    ;
  }
  if (pTVar3 == (TUniquePtr<Audio::FConstantQAnalyzer,TDefaultDelete<Audio::FConstantQAnalyzer>_> *)
                local_40) {
    if (pFVar15 == (FConstantQAnalyzer *)0x0) {
      return this;
    }
    pFVar8 = (pFVar15->CQTTransform).Ptr;
    if (pFVar8 != (FContiguousSparse2DKernelTransform *)0x0) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
    pIVar9 = (pFVar15->FFT).Ptr;
    if (pIVar9 != (IFFTAlgorithm *)0x0) {
      (**(code **)*pIVar9)(pIVar9,1);
    }
    pFVar7 = (pFVar15->RealSpectrum).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar7 = (pFVar15->ComplexSpectrum).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar7 = (pFVar15->WindowedSamples).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar7 = (pFVar15->Window).WindowBuffer.AllocatorInstance.Data;
    pFVar14 = pFVar15;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
  }
  else {
    pFVar14 = pTVar3->Ptr;
    pTVar3->Ptr = pFVar15;
    if (pFVar14 == (FConstantQAnalyzer *)0x0) {
      return this;
    }
    pFVar8 = (pFVar14->CQTTransform).Ptr;
    if (pFVar8 != (FContiguousSparse2DKernelTransform *)0x0) {
      (**(code **)pFVar8->_padding_)(pFVar8,1);
    }
    pIVar9 = (pFVar14->FFT).Ptr;
    if (pIVar9 != (IFFTAlgorithm *)0x0) {
      (**(code **)*pIVar9)(pIVar9,1);
    }
    pFVar7 = (pFVar14->RealSpectrum).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar7 = (pFVar14->ComplexSpectrum).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar7 = (pFVar14->WindowedSamples).AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
    pFVar7 = (pFVar14->Window).WindowBuffer.AllocatorInstance.Data;
    if (pFVar7 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar7);
    }
  }
  ::operator_delete(pFVar14,0x88);
  return this;
}

// Analyze @ 14d7fc0d0

void __thiscall
Audio::FConstantQNRTWorker::Analyze
          (FConstantQNRTWorker *this,TArrayView<float_const_,int> *param_1,
          IAnalyzerNRTResult *param_2)

{
  TArrayView<float_const_,int> local_18;
  
  local_18.DataPtr = param_1->DataPtr;
  local_18.ArrayNum = param_1->ArrayNum;
  local_18._12_4_ = *(undefined4 *)&param_1->field_0xc;
  AnalyzeMultichannel(this,&local_18,param_2,false);
  return;
}

// AnalyzeMultichannel @ 14d7fe190

void __thiscall
Audio::FConstantQNRTWorker::AnalyzeMultichannel
          (FConstantQNRTWorker *this,TArrayView<float_const_,int> *param_1,
          IAnalyzerNRTResult *param_2,bool param_3)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  FScriptContainerElement *pFVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  int iVar21;
  int local_1a8;
  int local_198;
  int local_158;
  int local_148;
  TScopedSlidingWindow<float> local_138;
  TArray<float,TAlignedHeapAllocator<16>_> *local_f8;
  FScriptContainerElement *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FScriptContainerElement *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  TArrayView<float_const_,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68 [3];
  
  this->NumFrames = this->NumFrames + param_1->ArrayNum / this->NumChannels;
  if ((param_2 == (IAnalyzerNRTResult *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("nullptr != ConstantQResult",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\ConstantQNRTFactory.cpp"
                         ,0x9f,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  local_a8.DataPtr = param_1->DataPtr;
  local_a8.ArrayNum = param_1->ArrayNum;
  local_a8._12_4_ = *(undefined4 *)&param_1->field_0xc;
  TScopedSlidingWindow<float>::TScopedSlidingWindow<float>
            (&local_138,(this->SlidingBuffer).Ptr,&local_a8,param_3);
  fVar7 = __real_3f800000;
  pTVar1 = &this->HopBuffer;
  local_138._padding_ =
       (longlong)&___7__TAutoSlidingWindow_MV__TAlignedHeapAllocator__0BA____Audio__6B_;
  local_f8 = pTVar1;
  if (this->bDownmixToMono == false) {
    if ((int)local_138._padding_ == -1) {
      local_158 = -1;
      local_148 = -1;
    }
    else {
      local_158 = (int)local_138._padding_;
      local_148 = local_138._padding_._4_4_;
      if ((int)local_138._padding_ < local_138._padding_._4_4_) {
        local_148 = -1;
      }
    }
    while (local_148 != -1) {
      if ((int)(uint)local_138._padding_ < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_138._padding_);
      }
      piVar2 = &(this->HopBuffer).ArrayMax;
      piVar3 = &(this->HopBuffer).ArrayNum;
      *piVar3 = 0;
      if ((this->HopBuffer).ArrayMax < (int)(uint)local_138._padding_) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,(uint)local_138._padding_,&pTVar1->AllocatorInstance,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,(uint)local_138._padding_,&pTVar1->AllocatorInstance,piVar3,piVar2);
      iVar15 = 0;
      if (local_148 < (int)local_138._padding_) {
        iVar15 = (int)local_138._padding_ - local_148;
        memcpy((pTVar1->AllocatorInstance).Data,
               (void *)(local_138._padding_ + (longlong)local_148 * 4),(longlong)iVar15 << 2);
      }
      if (iVar15 < (int)(uint)local_138._padding_) {
        iVar11 = (local_148 - (int)local_138._padding_) + iVar15;
        iVar17 = (int)local_138._padding_ - iVar11;
        if ((int)((uint)local_138._padding_ - iVar15) < iVar17) {
          iVar17 = (uint)local_138._padding_ - iVar15;
        }
        if (0 < iVar17) {
          memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 4,
                 (void *)(CONCAT44(local_138._padding_._4_4_,(undefined4)local_138._padding_) +
                         (longlong)iVar11 * 4),(longlong)iVar17 << 2);
          iVar15 = iVar15 + iVar17;
        }
        if (iVar15 < (int)(uint)local_138._padding_) {
          memset((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 4,0,
                 (longlong)(int)((uint)local_138._padding_ - iVar15) << 2);
        }
      }
      iVar15 = *piVar3;
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      iVar17 = this->NumChannels;
      if ((iVar15 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((iVar15 % iVar17 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterleavedArray.Num() % NumChannels == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\DeinterleaveView.h"
                             ,0x91,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar4 = &this->ChannelBuffer;
      if (0 < iVar17) {
        iVar11 = 0;
        do {
          iVar16 = (int)((longlong)iVar15 / (longlong)iVar17);
          if (iVar16 < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((longlong)iVar15 / (longlong)iVar17 & 0xffffffff);
          }
          piVar2 = &(this->ChannelBuffer).ArrayMax;
          (this->ChannelBuffer).ArrayNum = 0;
          if ((this->ChannelBuffer).ArrayMax < iVar16) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar16,&pTVar4->AllocatorInstance,0,piVar2);
          }
          if (0 < iVar16) {
            UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar16,&pTVar4->AllocatorInstance,&(this->ChannelBuffer).ArrayNum,piVar2)
            ;
          }
          pFVar19 = (pTVar4->AllocatorInstance).Data;
          iVar21 = 0;
          lVar10 = 0;
          iVar14 = iVar11;
          if (3 < iVar16) {
            uVar9 = (iVar16 - 4U >> 2) + 1;
            uVar20 = (ulonglong)uVar9;
            iVar21 = uVar9 * 4;
            lVar10 = (ulonglong)uVar9 * 4;
            pFVar18 = pFVar19 + 8;
            do {
              iVar12 = iVar14 + iVar17 + iVar17;
              *(undefined4 *)(pFVar18 + -8) = *(undefined4 *)(pFVar5 + (longlong)iVar14 * 4);
              iVar13 = iVar12 + iVar17;
              *(undefined4 *)(pFVar18 + -4) =
                   *(undefined4 *)(pFVar5 + (longlong)(iVar14 + iVar17) * 4);
              iVar14 = iVar13 + iVar17;
              *(undefined4 *)pFVar18 = *(undefined4 *)(pFVar5 + (longlong)iVar12 * 4);
              *(undefined4 *)(pFVar18 + 4) = *(undefined4 *)(pFVar5 + (longlong)iVar13 * 4);
              uVar20 = uVar20 - 1;
              pFVar18 = pFVar18 + 0x10;
            } while (uVar20 != 0);
          }
          if (iVar21 < iVar16) {
            uVar20 = (ulonglong)(uint)(iVar16 - iVar21);
            pFVar19 = pFVar19 + lVar10 * 4;
            do {
              lVar10 = (longlong)iVar14;
              iVar14 = iVar14 + iVar17;
              *(undefined4 *)pFVar19 = *(undefined4 *)(pFVar5 + lVar10 * 4);
              uVar20 = uVar20 - 1;
              pFVar19 = pFVar19 + 4;
            } while (uVar20 != 0);
          }
          AnalyzeWindow(this,pTVar4,iVar11,(FConstantQNRTResult *)param_2);
          iVar11 = iVar11 + 1;
        } while ((iVar11 < iVar17) && (iVar11 != -1));
      }
      local_148 = local_148 + local_138._padding_._4_4_;
      this->NumBuffers = this->NumBuffers + 1;
      if (local_158 < local_148) {
        local_148 = -1;
      }
    }
  }
  else {
    if ((int)local_138._padding_ == -1) {
      local_1a8 = -1;
      local_198 = -1;
    }
    else {
      local_1a8 = (int)local_138._padding_;
      local_198 = local_138._padding_._4_4_;
      if ((int)local_138._padding_ < local_138._padding_._4_4_) {
        local_198 = -1;
      }
    }
    while (local_198 != -1) {
      if ((int)(uint)local_138._padding_ < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)local_138._padding_);
      }
      piVar2 = &(this->HopBuffer).ArrayMax;
      (this->HopBuffer).ArrayNum = 0;
      if (*piVar2 < (int)(uint)local_138._padding_) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,(uint)local_138._padding_,&pTVar1->AllocatorInstance,0,piVar2);
      }
      UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,(uint)local_138._padding_,&pTVar1->AllocatorInstance,
                 &(this->HopBuffer).ArrayNum,piVar2);
      iVar15 = 0;
      if (local_198 < (int)local_138._padding_) {
        iVar15 = (int)local_138._padding_ - local_198;
        memcpy((pTVar1->AllocatorInstance).Data,
               (void *)(local_138._padding_ + (longlong)local_198 * 4),(longlong)iVar15 << 2);
      }
      if (iVar15 < (int)(uint)local_138._padding_) {
        iVar11 = (local_198 - (int)local_138._padding_) + iVar15;
        iVar17 = (int)local_138._padding_ - iVar11;
        if ((int)((uint)local_138._padding_ - iVar15) < iVar17) {
          iVar17 = (uint)local_138._padding_ - iVar15;
        }
        if (0 < iVar17) {
          memcpy((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 4,
                 (void *)(CONCAT44(local_138._padding_._4_4_,(undefined4)local_138._padding_) +
                         (longlong)iVar11 * 4),(longlong)iVar17 << 2);
          iVar15 = iVar15 + iVar17;
        }
        if (iVar15 < (int)(uint)local_138._padding_) {
          memset((pTVar1->AllocatorInstance).Data + (longlong)iVar15 * 4,0,
                 (longlong)(int)((uint)local_138._padding_ - iVar15) << 2);
        }
      }
      memset((this->MonoBuffer).AllocatorInstance.Data,0,(longlong)this->NumWindowFrames << 2);
      iVar15 = (this->HopBuffer).ArrayNum;
      iVar17 = this->NumChannels;
      pFVar5 = (pTVar1->AllocatorInstance).Data;
      if ((iVar15 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if ((iVar15 % iVar17 != 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InterleavedArray.Num() % NumChannels == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\DeinterleaveView.h"
                             ,0x91,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pTVar4 = &this->ChannelBuffer;
      iVar11 = (0 < iVar17) - 1;
      if (0 < iVar17) {
        piVar2 = &(this->ChannelBuffer).ArrayNum;
        iVar16 = (int)((longlong)iVar15 / (longlong)iVar17);
        if (iVar11 != -1) goto LAB_14d7fe4be;
        if (iVar16 < 0) {
LAB_14d7feaf0:
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((longlong)iVar15 / (longlong)iVar17 & 0xffffffff);
        }
        *piVar2 = 0;
        if ((this->ChannelBuffer).ArrayMax < iVar16) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,iVar16,&pTVar4->AllocatorInstance,0,&(this->ChannelBuffer).ArrayMax);
        }
        while( true ) {
          local_e8 = (this->MonoBuffer).AllocatorInstance.Data;
          iVar14 = (this->MonoBuffer).ArrayNum;
          if ((iVar14 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_d8 = (pTVar4->AllocatorInstance).Data;
          iVar21 = *piVar2;
          iStack_e0 = iVar14;
          if ((iVar21 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          local_98._12_4_ = uStack_dc;
          local_98.ArrayNum = iStack_e0;
          local_88._12_4_ = uStack_cc;
          local_88.ArrayNum = iVar21;
          local_88.DataPtr = (float *)local_d8;
          local_98.DataPtr = (float *)local_e8;
          iStack_d0 = iVar21;
          ArrayMixIn(&local_88,&local_98);
          if (((iVar11 == -1) || (iVar11 = iVar11 + 1, iVar17 <= iVar11)) || (iVar11 == -1)) break;
LAB_14d7fe4be:
          if (iVar16 < 0) goto LAB_14d7feaf0;
          piVar3 = &(this->ChannelBuffer).ArrayMax;
          *piVar2 = 0;
          if ((this->ChannelBuffer).ArrayMax < iVar16) {
            UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar16,&pTVar4->AllocatorInstance,0,piVar3);
          }
          if (0 < iVar16) {
            UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,iVar16,&pTVar4->AllocatorInstance,piVar2,piVar3);
          }
          lVar10 = 0;
          pFVar19 = (pTVar4->AllocatorInstance).Data;
          iVar21 = 0;
          iVar14 = iVar11;
          if (3 < iVar16) {
            uVar9 = (iVar16 - 4U >> 2) + 1;
            uVar20 = (ulonglong)uVar9;
            iVar21 = uVar9 * 4;
            lVar10 = (ulonglong)uVar9 * 4;
            pFVar18 = pFVar19 + 8;
            do {
              iVar12 = iVar14 + iVar17 + iVar17;
              *(undefined4 *)(pFVar18 + -8) = *(undefined4 *)(pFVar5 + (longlong)iVar14 * 4);
              iVar13 = iVar12 + iVar17;
              *(undefined4 *)(pFVar18 + -4) =
                   *(undefined4 *)(pFVar5 + (longlong)(iVar14 + iVar17) * 4);
              iVar14 = iVar13 + iVar17;
              *(undefined4 *)pFVar18 = *(undefined4 *)(pFVar5 + (longlong)iVar12 * 4);
              *(undefined4 *)(pFVar18 + 4) = *(undefined4 *)(pFVar5 + (longlong)iVar13 * 4);
              uVar20 = uVar20 - 1;
              pFVar18 = pFVar18 + 0x10;
            } while (uVar20 != 0);
          }
          if (iVar21 < iVar16) {
            uVar20 = (ulonglong)(uint)(iVar16 - iVar21);
            pFVar19 = pFVar19 + lVar10 * 4;
            do {
              lVar10 = (longlong)iVar14;
              iVar14 = iVar14 + iVar17;
              *(undefined4 *)pFVar19 = *(undefined4 *)(pFVar5 + lVar10 * 4);
              uVar20 = uVar20 - 1;
              pFVar19 = pFVar19 + 4;
            } while (uVar20 != 0);
          }
        }
      }
      iVar15 = this->NumChannels;
      local_c8 = (this->MonoBuffer).AllocatorInstance.Data;
      iVar17 = (this->MonoBuffer).ArrayNum;
      if ((iVar17 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      local_78._12_4_ = uStack_bc;
      local_78.ArrayNum = iVar17;
      local_78.DataPtr = (float *)local_c8;
      iStack_c0 = iVar17;
      ArrayMultiplyByConstantInPlace(&local_78,fVar7 / SQRT((float)iVar15));
      AnalyzeWindow(this,&this->MonoBuffer,0,(FConstantQNRTResult *)param_2);
      local_198 = local_198 + local_138._padding_._4_4_;
      this->NumBuffers = this->NumBuffers + 1;
      if (local_1a8 < local_198) {
        local_198 = -1;
      }
    }
  }
  TSlidingBuffer<float>::StoreForFutureWindows
            ((TSlidingBuffer<float> *)
             CONCAT44(local_138.SlidingBuffer._4_4_,local_138.SlidingBuffer._0_4_),local_68);
  return;
}

// AnalyzeWindow @ 14d800500

void __thiscall
Audio::FConstantQNRTWorker::AnalyzeWindow
          (FConstantQNRTWorker *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,int param_2,
          FConstantQNRTResult *param_3)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_> *pTVar8;
  FFloatInterval *pFVar9;
  FScriptContainerElement *pFVar10;
  float fVar11;
  float fVar12;
  uint local_res18 [4];
  undefined4 uStack_3c;
  TArrayView<float_const_,int> local_38 [2];
  
  FConstantQAnalyzer::CalculateCQT
            ((this->ConstantQAnalyzer).Ptr,(float *)(param_1->AllocatorInstance).Data,
             &this->CQTSpectrum);
  iVar2 = this->NumHopFrames;
  iVar3 = this->NumBuffers;
  iVar4 = (this->CQTSpectrum).ArrayNum;
  fVar11 = (float)(((this->ConstantQAnalyzer).Ptr)->Settings).FFTSize * __real_3f000000;
  fVar12 = this->SampleRate;
  pFVar10 = (this->CQTSpectrum).AllocatorInstance.Data;
  if (iVar4 < 0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InCount >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                       ,0xeb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  local_res18[0] = param_2;
  pTVar8 = TMapBase<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<Audio::FConstantQFrame,TSizedDefaultAllocator<32>_>,0>_>
                       *)&param_3->ChannelCQTFrames,param_2,(int *)local_res18);
  iVar7 = pTVar8->ArrayNum;
  if (iVar7 == pTVar8->ArrayMax) {
    iVar7 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x818,&pTVar8->AllocatorInstance,&pTVar8->ArrayMax);
  }
  local_38[0]._12_4_ = uStack_3c;
  local_38[0].ArrayNum = iVar4;
  pTVar8->ArrayNum = iVar7 + 1;
  local_38[0].DataPtr = (float *)pFVar10;
  FConstantQFrame::FConstantQFrame
            ((FConstantQFrame *)((pTVar8->AllocatorInstance).Data + (longlong)iVar7 * 0x18),
             local_res18[0],((float)(iVar2 * iVar3) + fVar11) / fVar12,local_38);
  pFVar9 = TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,FFloatInterval,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FFloatInterval,0>_>
                       *)&param_3->ChannelCQTIntervals,local_res18[0],(int *)local_res18);
  pFVar1 = pFVar10 + (longlong)iVar4 * 4;
  if (pFVar10 != pFVar1) {
    fVar12 = *(float *)&pFVar9->field_0x4;
    do {
      fVar11 = *(float *)pFVar10;
      if (*(float *)pFVar9 <= fVar12) {
        if (fVar11 < *(float *)pFVar9) {
          *(float *)pFVar9 = fVar11;
        }
        if (fVar12 < fVar11) goto LAB_14d800651;
      }
      else {
        *(float *)pFVar9 = fVar11;
LAB_14d800651:
        *(float *)&pFVar9->field_0x4 = fVar11;
        fVar12 = fVar11;
      }
      pFVar10 = pFVar10 + 4;
    } while (pFVar10 != pFVar1);
  }
  param_3->bIsSortedChronologically = false;
  return;
}

// Finalize @ 14d8052a0

void __thiscall
Audio::FConstantQNRTWorker::Finalize(FConstantQNRTWorker *this,IAnalyzerNRTResult *param_1)

{
  TSlidingBuffer<float> *pTVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uStack_1c;
  TArrayView<float_const_,int> local_18;
  
  local_18._8_8_ = (ulonglong)uStack_1c << 0x20;
  local_18.DataPtr = (float *)0x0;
  AnalyzeMultichannel(this,&local_18,param_1,true);
  if (param_1 == (IAnalyzerNRTResult *)0x0) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("nullptr != ConstantQResult",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\ConstantQNRTFactory.cpp"
                       ,0xd3,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    if (this->SampleRate <= 0.0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("SampleRate > 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\ConstantQNRTFactory.cpp"
                         ,0xd8,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    *(float *)(param_1 + 1) = (float)this->NumFrames / this->SampleRate;
    FConstantQNRTResult::SortChronologically((FConstantQNRTResult *)param_1);
  }
  this->NumBuffers = 0;
  this->NumFrames = 0;
  pTVar1 = (this->SlidingBuffer).Ptr;
  if (pTVar1 != (TSlidingBuffer<float> *)0x0) {
    (this->SlidingBuffer).Ptr = (TSlidingBuffer<float> *)0x0;
    pFVar2 = (pTVar1->StorageBuffer).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    ::operator_delete(pTVar1,0x20);
  }
  return;
}

