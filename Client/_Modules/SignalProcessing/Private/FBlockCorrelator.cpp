// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 9

// FBlockCorrelator @ 1444a2610

/* WARNING: Enum "Type": Some values do not have unique names */

FBlockCorrelator * __thiscall
Audio::FBlockCorrelator::FBlockCorrelator(FBlockCorrelator *this,FBlockCorrelatorSettings *param_1)

{
  int *piVar1;
  int *piVar2;
  TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> *pTVar3;
  EWindowType EVar4;
  FBlockCorrelatorSettings FVar5;
  IFFTAlgorithm *pIVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  byte bVar9;
  float fVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  FBlockCorrelator *pFVar16;
  IFFTAlgorithm IVar17;
  IFFTAlgorithm *pIVar18;
  IFFTAlgorithm *pIVar19;
  ulonglong uVar20;
  ForAnyElementType FVar21;
  ForAnyElementType FVar22;
  uint uVar23;
  ForAnyElementType FVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 local_res8 [8];
  uint local_res10;
  FFFTSettings local_res18;
  IFFTAlgorithm *local_res20;
  undefined4 local_1c8 [2];
  ForAnyElementType local_1c0;
  int local_1b8 [2];
  int *local_1b0;
  TArray<Audio::IFFTAlgorithmFactory_*,TSizedDefaultAllocator<32>_> local_1a8;
  FScriptContainerElement *local_198;
  int *local_190;
  int *local_188;
  int *local_180;
  int *local_178;
  int *local_170;
  int *local_168;
  int *local_160;
  int *local_158;
  int *local_150;
  int *local_148;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  FScriptContainerElement *local_128;
  int iStack_120;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  longlong local_f8 [2];
  TArrayView<float,int> local_e8;
  TArrayView<float_const_,int> local_d8;
  TArrayView<float,int> local_c8;
  TArrayView<float_const_,int> local_b8 [7];
  
  FVar5 = *param_1;
  this->Settings = FVar5;
  piVar1 = &(this->Window).WindowBuffer.ArrayMax;
  pIVar18 = (IFFTAlgorithm *)0x0;
  bVar9 = (byte)FVar5.Log2NumValuesInBlock;
  this->NumValuesInFFTRealBuffer = 0;
  this->NumValuesInFFTComplexBuffer = 0;
  this->NumValuesInBlock = 1 << (bVar9 & 0x1f);
  (this->FFTAlgorithm).Ptr = (IFFTAlgorithm *)0x0;
  (this->Window).WindowType = param_1->WindowType;
  uVar23 = 1 << (bVar9 & 0x1f);
  (this->Window).WindowBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Window).WindowBuffer.ArrayNum = 0;
  *piVar1 = 0;
  (this->Window).NumSamples = uVar23;
  uVar13 = uVar23 & 0x80000003;
  if ((int)uVar13 < 0) {
    uVar13 = (uVar13 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar13 != 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("NumSamples % 4 == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioFFT.cpp"
                          ,0x93,
                          L"For performance reasons, this window\'s length should be a multiple of 4."
                         ), bVar12)) {
    pcVar8 = (code *)swi(3);
    pFVar16 = (FBlockCorrelator *)(*pcVar8)();
    return pFVar16;
  }
  fVar10 = __real_3f800000;
  if ((this->Window).WindowType != None) {
    iVar15 = *piVar1;
    (this->Window).WindowBuffer.ArrayNum = 0;
    if (iVar15 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->Window).WindowBuffer.AllocatorInstance,0,piVar1);
    }
    TArray<float,TAlignedHeapAllocator<16>_>::AddZeroed
              (&(this->Window).WindowBuffer,(this->Window).NumSamples);
    dVar11 = __real_3fe147ae147ae148;
    fVar26 = __real_3eeb851f;
    fVar27 = __real_3f000000;
    EVar4 = (this->Window).WindowType;
    if (EVar4 == Hamming) {
      pFVar7 = (this->Window).WindowBuffer.AllocatorInstance.Data;
      fVar27 = 0.0;
      fVar28 = __real_40c90fdb / (float)(int)(uVar23 - 1);
      pIVar19 = pIVar18;
      if (0 < (int)uVar23) {
        do {
          fVar25 = cosf(fVar27);
          fVar27 = fVar27 + fVar28;
          *(float *)(pFVar7 + (longlong)pIVar19 * 4) = (float)(dVar11 - (double)(fVar25 * fVar26));
          pIVar19 = (IFFTAlgorithm *)&pIVar19->field_0x1;
        } while ((longlong)pIVar19 < (longlong)(int)uVar23);
      }
    }
    else if (EVar4 == Hann) {
      pFVar7 = (this->Window).WindowBuffer.AllocatorInstance.Data;
      fVar26 = 0.0;
      fVar28 = __real_40c90fdb / (float)(int)(uVar23 - 1);
      pIVar19 = pIVar18;
      if (0 < (int)uVar23) {
        do {
          fVar25 = cosf(fVar26);
          fVar26 = fVar26 + fVar28;
          *(float *)(pFVar7 + (longlong)pIVar19 * 4) = (fVar10 - fVar25) * fVar27;
          pIVar19 = (IFFTAlgorithm *)&pIVar19->field_0x1;
        } while ((longlong)pIVar19 < (longlong)(int)uVar23);
      }
    }
    else if (EVar4 == Blackman) {
      GenerateBlackmanWindow
                ((float *)(this->Window).WindowBuffer.AllocatorInstance.Data,uVar23,1,false);
    }
    else {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("false",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\AudioFFT.cpp"
                          ,0xc9,L"Unknown window type!");
      if (bVar12) {
        pcVar8 = (code *)swi(3);
        pFVar16 = (FBlockCorrelator *)(*pcVar8)();
        return pFVar16;
      }
    }
  }
  (this->WindowedBufferA).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_188 = &(this->WindowedBufferA).ArrayNum;
  (this->WindowedBufferB).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_190 = &(this->WindowedBufferA).ArrayMax;
  (this->ComplexBufferA).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->NormalizationBuffer).ArrayNum;
  piVar2 = &(this->NormalizationBuffer).ArrayMax;
  *local_188 = 0;
  *local_190 = 0;
  (this->NormalizationBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178 = &(this->WindowedBufferB).ArrayNum;
  local_180 = &(this->WindowedBufferB).ArrayMax;
  *local_178 = 0;
  *local_180 = 0;
  local_158 = &(this->ComplexBufferA).ArrayNum;
  local_160 = &(this->ComplexBufferA).ArrayMax;
  *local_158 = 0;
  local_1b0 = &(this->ComplexBufferB).ArrayNum;
  *local_160 = 0;
  (this->ComplexCorrelationBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  *local_1b0 = 0;
  local_148 = &(this->ComplexCorrelationBuffer).ArrayNum;
  local_150 = &(this->ComplexCorrelationBuffer).ArrayMax;
  *local_148 = 0;
  *piVar1 = 0;
  *local_150 = 0;
  local_168 = &(this->FullOutputBuffer).ArrayNum;
  (this->FullOutputBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_170 = &(this->FullOutputBuffer).ArrayMax;
  *local_168 = 0;
  *piVar2 = 0;
  *local_170 = 0;
  local_res18.Log2Size = (this->Settings).Log2NumValuesInBlock + 1;
  (this->ComplexBufferB).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ComplexBufferB).ArrayMax = 0;
  local_res18.bArrays128BitAligned = true;
  local_res18.bEnableHardwareAcceleration = true;
  GetPrioritizedSupportingFactories(&local_1a8,&local_res18,&FFFTFactory::AnyAlgorithmFactory);
  local_res10 = local_1a8.ArrayNum;
  uVar20 = (ulonglong)(int)local_res10;
  local_198 = local_1a8.AllocatorInstance.Data + uVar20 * 8;
  FVar24.Data = local_1a8.AllocatorInstance.Data;
  while( true ) {
    pFVar7 = local_198;
    if (local_1a8.ArrayNum != (int)uVar20) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<Audio::IFFTAlgorithmFactory_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (FVar24.Data == pFVar7) {
      pIVar19 = pIVar18;
      if (2 < (byte)LogSignalProcessing._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
      }
      goto LAB_1444a2a34;
    }
    (**(code **)(**(longlong **)FVar24.Data + 0x28))(*(longlong **)FVar24.Data,&local_res20);
    pIVar19 = local_res20;
    if (local_res20 != (IFFTAlgorithm *)0x0) break;
    if (2 < (byte)LogSignalProcessing._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
    }
    if (local_res20 != (IFFTAlgorithm *)0x0) {
      (**(code **)*local_res20)(local_res20,1);
    }
    FVar24.Data = FVar24.Data + 8;
    uVar20 = (ulonglong)local_res10;
  }
  local_res20 = (IFFTAlgorithm *)0x0;
LAB_1444a2a34:
  if (local_1a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1a8.AllocatorInstance.Data);
  }
  pTVar3 = &this->FFTAlgorithm;
  if (pTVar3 == (TUniquePtr<Audio::IFFTAlgorithm,TDefaultDelete<Audio::IFFTAlgorithm>_> *)local_f8)
  {
    if (pIVar19 == (IFFTAlgorithm *)0x0) goto LAB_1444a2a72;
    IVar17 = *pIVar19;
  }
  else {
    pIVar6 = pTVar3->Ptr;
    pTVar3->Ptr = pIVar19;
    if (pIVar6 == (IFFTAlgorithm *)0x0) goto LAB_1444a2a72;
    IVar17 = *pIVar6;
    pIVar19 = pIVar6;
  }
  (**(code **)IVar17)(pIVar19,1);
LAB_1444a2a72:
  if (pTVar3->Ptr == (IFFTAlgorithm *)0x0) {
    if (2 < (byte)LogSignalProcessing._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
    }
    iVar15 = this->NumValuesInBlock;
    this->NumValuesInFFTRealBuffer = iVar15 * 2;
  }
  else {
    iVar15 = (**(code **)((longlong)*pTVar3->Ptr + 8))();
    pIVar19 = pTVar3->Ptr;
    this->NumValuesInFFTRealBuffer = iVar15;
    iVar15 = (**(code **)((longlong)*pIVar19 + 8))();
  }
  this->NumValuesInFFTComplexBuffer = iVar15 + 2;
  iVar15 = this->NumValuesInFFTRealBuffer;
  if (0 < iVar15) {
    iVar14 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                       (4,4,iVar15,&(this->WindowedBufferA).AllocatorInstance,local_188,local_190);
    memset((this->WindowedBufferA).AllocatorInstance.Data + (longlong)iVar14 * 4,0,
           (longlong)iVar15 << 2);
    iVar15 = this->NumValuesInFFTRealBuffer;
    iVar14 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                       (4,4,iVar15,&(this->WindowedBufferB).AllocatorInstance,local_178,local_180);
    memset((this->WindowedBufferB).AllocatorInstance.Data + (longlong)iVar14 * 4,0,
           (longlong)iVar15 << 2);
    iVar15 = this->NumValuesInFFTRealBuffer;
    iVar14 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                       (4,4,iVar15,&(this->FullOutputBuffer).AllocatorInstance,local_168,local_170);
    memset((this->FullOutputBuffer).AllocatorInstance.Data + (longlong)iVar14 * 4,0,
           (longlong)iVar15 << 2);
  }
  iVar15 = this->NumValuesInFFTComplexBuffer;
  if (0 < iVar15) {
    iVar14 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                       (4,4,iVar15,&(this->ComplexBufferA).AllocatorInstance,local_158,local_160);
    memset((this->ComplexBufferA).AllocatorInstance.Data + (longlong)iVar14 * 4,0,
           (longlong)iVar15 << 2);
    iVar15 = this->NumValuesInFFTComplexBuffer;
    iVar14 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                       (4,4,iVar15,&(this->ComplexBufferB).AllocatorInstance,
                        &(this->ComplexBufferB).ArrayNum,&(this->ComplexBufferB).ArrayMax);
    memset((this->ComplexBufferB).AllocatorInstance.Data + (longlong)iVar14 * 4,0,
           (longlong)iVar15 << 2);
    iVar15 = this->NumValuesInFFTComplexBuffer;
    iVar14 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                       (4,4,iVar15,&(this->ComplexCorrelationBuffer).AllocatorInstance,local_148,
                        local_150);
    memset((this->ComplexCorrelationBuffer).AllocatorInstance.Data + (longlong)iVar14 * 4,0,
           (longlong)iVar15 << 2);
  }
  if ((pTVar3->Ptr != (IFFTAlgorithm *)0x0) && (0 < this->NumValuesInBlock)) {
    *piVar1 = 0;
    if (*piVar2 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->NormalizationBuffer).AllocatorInstance,0,piVar2);
    }
    if (0 < this->NumValuesInFFTRealBuffer) {
      uVar13 = this->NumValuesInBlock;
      if ((int)uVar13 < this->NumValuesInFFTRealBuffer) {
        local_1c8[0] = 0x3f800000;
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar13);
        }
        *piVar1 = 0;
        if (*piVar2 != uVar13) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar13,&(this->NormalizationBuffer).AllocatorInstance,0,piVar2);
        }
        pIVar19 = pIVar18;
        if (0 < (int)uVar13) {
          do {
            pFVar7 = (this->NormalizationBuffer).AllocatorInstance.Data;
            if (((pFVar7 <= (FScriptContainerElement *)local_1c8) &&
                ((FScriptContainerElement *)local_1c8 < pFVar7 + (longlong)*piVar2 * 4)) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar12)) {
              pcVar8 = (code *)swi(3);
              pFVar16 = (FBlockCorrelator *)(*pcVar8)();
              return pFVar16;
            }
            iVar15 = *piVar1;
            if (iVar15 == *piVar2) {
              iVar15 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                                 (0x404,&(this->NormalizationBuffer).AllocatorInstance,piVar2);
            }
            *piVar1 = iVar15 + 1;
            uVar23 = (int)pIVar19 + 1;
            *(undefined4 *)
             ((this->NormalizationBuffer).AllocatorInstance.Data + (longlong)iVar15 * 4) =
                 local_1c8[0];
            pIVar19 = (IFFTAlgorithm *)(ulonglong)uVar23;
          } while ((int)uVar23 < (int)uVar13);
        }
        iVar14 = this->NumValuesInFFTRealBuffer - this->NumValuesInBlock;
        iVar15 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                           (4,4,iVar14,&(this->NormalizationBuffer).AllocatorInstance,piVar1,piVar2)
        ;
        memset((this->NormalizationBuffer).AllocatorInstance.Data + (longlong)iVar15 * 4,0,
               (longlong)iVar14 << 2);
        FWindow::ApplyToBuffer
                  (&this->Window,(float *)(this->NormalizationBuffer).AllocatorInstance.Data);
      }
    }
    local_1c0.Data = (FScriptContainerElement *)0x0;
    local_1b8[0] = 0;
    local_1b8[1] = 0;
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,this->NumValuesInFFTRealBuffer,&local_1c0,local_1b8,local_1b8 + 1);
    if ((*piVar1 != this->NumValuesInFFTRealBuffer) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Input.Num() == NumValuesInFFTRealBuffer",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BlockCorrelator.cpp"
                            ,0x9c,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      pFVar16 = (FBlockCorrelator *)(*pcVar8)();
      return pFVar16;
    }
    if ((local_1b8[0] != this->NumValuesInFFTRealBuffer) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Output.Num() == NumValuesInFFTRealBuffer",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BlockCorrelator.cpp"
                            ,0x9d,L""), bVar12)) {
      pcVar8 = (code *)swi(3);
      pFVar16 = (FBlockCorrelator *)(*pcVar8)();
      return pFVar16;
    }
    pIVar19 = (this->FFTAlgorithm).Ptr;
    FVar21.Data = local_1c0.Data;
    if (pIVar19 != (IFFTAlgorithm *)0x0) {
      (**(code **)((longlong)*pIVar19 + 0x20))
                (pIVar19,(this->NormalizationBuffer).AllocatorInstance.Data,
                 (this->ComplexBufferA).AllocatorInstance.Data);
      local_138 = (this->ComplexBufferB).AllocatorInstance.Data;
      iStack_130 = *local_1b0;
      if ((iStack_130 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pFVar16 = (FBlockCorrelator *)(*pcVar8)();
        return pFVar16;
      }
      local_128 = (this->ComplexBufferA).AllocatorInstance.Data;
      iVar15 = (this->ComplexBufferA).ArrayNum;
      if ((iVar15 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pFVar16 = (FBlockCorrelator *)(*pcVar8)();
        return pFVar16;
      }
      local_e8._12_4_ = uStack_12c;
      local_e8.ArrayNum = iStack_130;
      local_d8._12_4_ = uStack_11c;
      local_d8.ArrayNum = iVar15;
      local_d8.DataPtr = (float *)local_128;
      local_e8.DataPtr = (float *)local_138;
      iStack_120 = iVar15;
      ArrayComplexConjugate(&local_d8,&local_e8);
      local_118 = (this->ComplexBufferA).AllocatorInstance.Data;
      iStack_110 = (this->ComplexBufferA).ArrayNum;
      if ((iStack_110 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pFVar16 = (FBlockCorrelator *)(*pcVar8)();
        return pFVar16;
      }
      local_108 = (this->ComplexBufferB).AllocatorInstance.Data;
      iVar15 = *local_1b0;
      if ((iVar15 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar12)) {
        pcVar8 = (code *)swi(3);
        pFVar16 = (FBlockCorrelator *)(*pcVar8)();
        return pFVar16;
      }
      local_c8._12_4_ = uStack_10c;
      local_c8.ArrayNum = iStack_110;
      local_b8[0]._12_4_ = uStack_fc;
      local_b8[0].ArrayNum = iVar15;
      local_b8[0].DataPtr = (float *)local_108;
      local_c8.DataPtr = (float *)local_118;
      iStack_100 = iVar15;
      ArrayComplexMultiplyInPlace(local_b8,&local_c8);
      FVar21.Data = local_1c0.Data;
      pIVar19 = (this->FFTAlgorithm).Ptr;
      (**(code **)((longlong)*pIVar19 + 0x28))
                (pIVar19,(this->ComplexBufferA).AllocatorInstance.Data,local_1c0.Data);
    }
    fVar27 = __real_322bcc77;
    pFVar7 = (this->NormalizationBuffer).AllocatorInstance.Data;
    FVar22.Data = FVar21.Data;
    pIVar19 = pIVar18;
    if (0 < this->NumValuesInFFTRealBuffer) {
      do {
        if (*(float *)(FVar21.Data + (longlong)&pIVar18->field_0x0) <= fVar27) {
          fVar26 = 0.0;
        }
        else {
          fVar26 = fVar10 / *(float *)(FVar21.Data + (longlong)&pIVar18->field_0x0);
        }
        *(float *)((longlong)&pIVar18->field_0x0 + (longlong)pFVar7) = fVar26;
        uVar13 = (int)pIVar19 + 1;
        pIVar18 = (IFFTAlgorithm *)&pIVar18->field_0x4;
        FVar22.Data = local_1c0.Data;
        pIVar19 = (IFFTAlgorithm *)(ulonglong)uVar13;
      } while ((int)uVar13 < this->NumValuesInFFTRealBuffer);
    }
    if (FVar22.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar22.Data);
    }
  }
  return this;
}

// AutoCorrelate @ 1444b6150

void __thiscall
Audio::FBlockCorrelator::AutoCorrelate
          (FBlockCorrelator *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  TArrayView<float,int> *pTVar3;
  TArrayView<float_const_,int> *pTVar4;
  int iVar5;
  TArrayView<float,int> local_48;
  TArrayView<float_const_,int> local_38;
  TArrayView<float,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  if (param_1->ArrayNum != this->NumValuesInBlock) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input.Num() == NumValuesInBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BlockCorrelator.cpp"
                       ,0x6d,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (param_2->ArrayNum != this->NumValuesInFFTRealBuffer) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("Output.Num() == NumValuesInFFTRealBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BlockCorrelator.cpp"
                       ,0x6e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  iVar5 = param_1->ArrayNum;
  if (this->NumValuesInBlock < param_1->ArrayNum) {
    iVar5 = this->NumValuesInBlock;
  }
  if (0 < iVar5) {
    memcpy((this->WindowedBufferA).AllocatorInstance.Data,(param_1->AllocatorInstance).Data,
           (longlong)iVar5 << 2);
    FWindow::ApplyToBuffer(&this->Window,(float *)(this->WindowedBufferA).AllocatorInstance.Data);
    CyclicAutoCorrelate(this,&this->WindowedBufferA,param_2);
    if ((this->Settings).bDoNormalize != false) {
      pTVar3 = TArrayView<float,int>::
               TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                         (&local_28,param_2);
      local_48.DataPtr = pTVar3->DataPtr;
      local_48.ArrayNum = pTVar3->ArrayNum;
      local_48._12_4_ = *(undefined4 *)&pTVar3->field_0xc;
      pTVar4 = TArrayView<float_const_,int>::
               TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                         (&local_18,&this->NormalizationBuffer);
      local_38.DataPtr = pTVar4->DataPtr;
      local_38.ArrayNum = pTVar4->ArrayNum;
      local_38._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
      ArrayMultiplyInPlace(&local_38,&local_48);
    }
  }
  return;
}

// CrossCorrelate @ 1444ba1a0

void __thiscall
Audio::FBlockCorrelator::CrossCorrelate
          (FBlockCorrelator *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  int iVar1;
  IFFTAlgorithm *pIVar2;
  code *pcVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  TArrayView<float,int> *pTVar7;
  TArrayView<float_const_,int> *pTVar8;
  TArrayView<float,int> local_a8;
  TArrayView<float,int> local_98;
  TArrayView<float_const_,int> local_88;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<float,int> local_48;
  TArrayView<float_const_,int> local_38;
  TArrayView<float,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  if (param_1->ArrayNum != this->NumValuesInBlock) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputA.Num() == NumValuesInBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BlockCorrelator.cpp"
                       ,0x50,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_2->ArrayNum != this->NumValuesInBlock) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputB.Num() == NumValuesInBlock",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BlockCorrelator.cpp"
                       ,0x51,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_3->ArrayNum != this->NumValuesInFFTRealBuffer) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("Output.Num() == NumValuesInFFTRealBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BlockCorrelator.cpp"
                       ,0x52,L"");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar1 = this->NumValuesInBlock;
  iVar4 = param_1->ArrayNum;
  if (iVar1 < param_1->ArrayNum) {
    iVar4 = iVar1;
  }
  iVar5 = param_2->ArrayNum;
  if (iVar1 < param_2->ArrayNum) {
    iVar5 = iVar1;
  }
  if ((0 < iVar4) && (0 < iVar5)) {
    memcpy((this->WindowedBufferA).AllocatorInstance.Data,(param_1->AllocatorInstance).Data,
           (longlong)iVar4 << 2);
    memcpy((this->WindowedBufferB).AllocatorInstance.Data,(param_2->AllocatorInstance).Data,
           (longlong)iVar5 << 2);
    FWindow::ApplyToBuffer(&this->Window,(float *)(this->WindowedBufferA).AllocatorInstance.Data);
    FWindow::ApplyToBuffer(&this->Window,(float *)(this->WindowedBufferB).AllocatorInstance.Data);
    if ((this->WindowedBufferA).ArrayNum != this->NumValuesInFFTRealBuffer) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputA.Num() == NumValuesInFFTRealBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BlockCorrelator.cpp"
                         ,0x86,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((this->WindowedBufferB).ArrayNum != this->NumValuesInFFTRealBuffer) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputB.Num() == NumValuesInFFTRealBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BlockCorrelator.cpp"
                         ,0x87,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (param_3->ArrayNum != this->NumValuesInFFTRealBuffer) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Output.Num() == NumValuesInFFTRealBuffer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BlockCorrelator.cpp"
                         ,0x88,L"");
      if (bVar6) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pIVar2 = (this->FFTAlgorithm).Ptr;
    if (pIVar2 != (IFFTAlgorithm *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x20))
                (pIVar2,(this->WindowedBufferA).AllocatorInstance.Data,
                 (this->ComplexBufferA).AllocatorInstance.Data);
      pIVar2 = (this->FFTAlgorithm).Ptr;
      (**(code **)((longlong)*pIVar2 + 0x20))
                (pIVar2,(this->WindowedBufferB).AllocatorInstance.Data,
                 (this->ComplexBufferB).AllocatorInstance.Data);
      pTVar7 = TArrayView<float,int>::
               TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                         (&local_58,&this->ComplexBufferB);
      local_a8.DataPtr = pTVar7->DataPtr;
      local_a8.ArrayNum = pTVar7->ArrayNum;
      local_a8._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
      ArrayComplexConjugateInPlace(&local_a8);
      pTVar7 = TArrayView<float,int>::
               TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                         (&local_48,&this->ComplexBufferA);
      local_98.DataPtr = pTVar7->DataPtr;
      local_98.ArrayNum = pTVar7->ArrayNum;
      local_98._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
      pTVar8 = TArrayView<float_const_,int>::
               TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                         (&local_38,&this->ComplexBufferB);
      local_88.DataPtr = pTVar8->DataPtr;
      local_88.ArrayNum = pTVar8->ArrayNum;
      local_88._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
      ArrayComplexMultiplyInPlace(&local_88,&local_98);
      pIVar2 = (this->FFTAlgorithm).Ptr;
      (**(code **)((longlong)*pIVar2 + 0x28))
                (pIVar2,(this->ComplexBufferA).AllocatorInstance.Data,
                 (param_3->AllocatorInstance).Data);
    }
    if ((this->Settings).bDoNormalize != false) {
      pTVar7 = TArrayView<float,int>::
               TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                         (&local_28,param_3);
      local_78.DataPtr = pTVar7->DataPtr;
      local_78.ArrayNum = pTVar7->ArrayNum;
      local_78._12_4_ = *(undefined4 *)&pTVar7->field_0xc;
      pTVar8 = TArrayView<float_const_,int>::
               TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                         (&local_18,&this->NormalizationBuffer);
      local_68.DataPtr = pTVar8->DataPtr;
      local_68.ArrayNum = pTVar8->ArrayNum;
      local_68._12_4_ = *(undefined4 *)&pTVar8->field_0xc;
      ArrayMultiplyInPlace(&local_68,&local_78);
    }
  }
  return;
}

// CyclicAutoCorrelate @ 1444ba460

void __thiscall
Audio::FBlockCorrelator::CyclicAutoCorrelate
          (FBlockCorrelator *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2)

{
  IFFTAlgorithm *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float,int> *pTVar4;
  TArrayView<float_const_,int> *pTVar5;
  TArrayView<float,int> local_88;
  TArrayView<float_const_,int> local_78;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58;
  TArrayView<float,int> local_48;
  TArrayView<float_const_,int> local_38;
  TArrayView<float,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  if (param_1->ArrayNum != this->NumValuesInFFTRealBuffer) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Input.Num() == NumValuesInFFTRealBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BlockCorrelator.cpp"
                       ,0x9c,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2->ArrayNum != this->NumValuesInFFTRealBuffer) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Output.Num() == NumValuesInFFTRealBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BlockCorrelator.cpp"
                       ,0x9d,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->FFTAlgorithm).Ptr;
  if (pIVar1 != (IFFTAlgorithm *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x20))
              (pIVar1,(param_1->AllocatorInstance).Data,
               (this->ComplexBufferA).AllocatorInstance.Data);
    pTVar4 = TArrayView<float,int>::
             TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                       (&local_48,&this->ComplexBufferB);
    local_88.DataPtr = pTVar4->DataPtr;
    local_88.ArrayNum = pTVar4->ArrayNum;
    local_88._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
    pTVar5 = TArrayView<float_const_,int>::
             TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                       (&local_38,&this->ComplexBufferA);
    local_78.DataPtr = pTVar5->DataPtr;
    local_78.ArrayNum = pTVar5->ArrayNum;
    local_78._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    ArrayComplexConjugate(&local_78,&local_88);
    pTVar4 = TArrayView<float,int>::
             TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                       (&local_28,&this->ComplexBufferA);
    local_68.DataPtr = pTVar4->DataPtr;
    local_68.ArrayNum = pTVar4->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
    pTVar5 = TArrayView<float_const_,int>::
             TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                       (&local_18,&this->ComplexBufferB);
    local_58.DataPtr = pTVar5->DataPtr;
    local_58.ArrayNum = pTVar5->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    ArrayComplexMultiplyInPlace(&local_58,&local_68);
    pIVar1 = (this->FFTAlgorithm).Ptr;
    (**(code **)((longlong)*pIVar1 + 0x28))
              (pIVar1,(this->ComplexBufferA).AllocatorInstance.Data,
               (param_2->AllocatorInstance).Data);
  }
  return;
}

// CyclicCrossCorrelate @ 1444ba5c0

void __thiscall
Audio::FBlockCorrelator::CyclicCrossCorrelate
          (FBlockCorrelator *this,TArray<float,TAlignedHeapAllocator<16>_> *param_1,
          TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          TArray<float,TAlignedHeapAllocator<16>_> *param_3)

{
  IFFTAlgorithm *pIVar1;
  code *pcVar2;
  bool bVar3;
  TArrayView<float,int> *pTVar4;
  TArrayView<float_const_,int> *pTVar5;
  TArrayView<float,int> local_68;
  TArrayView<float,int> local_58;
  TArrayView<float_const_,int> local_48;
  TArrayView<float,int> local_38;
  TArrayView<float,int> local_28;
  TArrayView<float_const_,int> local_18;
  
  if (param_1->ArrayNum != this->NumValuesInFFTRealBuffer) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputA.Num() == NumValuesInFFTRealBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BlockCorrelator.cpp"
                       ,0x86,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_2->ArrayNum != this->NumValuesInFFTRealBuffer) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InputB.Num() == NumValuesInFFTRealBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BlockCorrelator.cpp"
                       ,0x87,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (param_3->ArrayNum != this->NumValuesInFFTRealBuffer) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Output.Num() == NumValuesInFFTRealBuffer",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\BlockCorrelator.cpp"
                       ,0x88,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  pIVar1 = (this->FFTAlgorithm).Ptr;
  if (pIVar1 != (IFFTAlgorithm *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x20))
              (pIVar1,(param_1->AllocatorInstance).Data,
               (this->ComplexBufferA).AllocatorInstance.Data);
    pIVar1 = (this->FFTAlgorithm).Ptr;
    (**(code **)((longlong)*pIVar1 + 0x20))
              (pIVar1,(param_2->AllocatorInstance).Data,
               (this->ComplexBufferB).AllocatorInstance.Data);
    pTVar4 = TArrayView<float,int>::
             TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                       (&local_38,&this->ComplexBufferB);
    local_68.DataPtr = pTVar4->DataPtr;
    local_68.ArrayNum = pTVar4->ArrayNum;
    local_68._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
    ArrayComplexConjugateInPlace(&local_68);
    pTVar4 = TArrayView<float,int>::
             TArrayView<float,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                       (&local_28,&this->ComplexBufferA);
    local_58.DataPtr = pTVar4->DataPtr;
    local_58.ArrayNum = pTVar4->ArrayNum;
    local_58._12_4_ = *(undefined4 *)&pTVar4->field_0xc;
    pTVar5 = TArrayView<float_const_,int>::
             TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                       (&local_18,&this->ComplexBufferB);
    local_48.DataPtr = pTVar5->DataPtr;
    local_48.ArrayNum = pTVar5->ArrayNum;
    local_48._12_4_ = *(undefined4 *)&pTVar5->field_0xc;
    ArrayComplexMultiplyInPlace(&local_48,&local_58);
    pIVar1 = (this->FFTAlgorithm).Ptr;
    (**(code **)((longlong)*pIVar1 + 0x28))
              (pIVar1,(this->ComplexBufferA).AllocatorInstance.Data,
               (param_3->AllocatorInstance).Data);
  }
  return;
}

// GetNumInputValues @ 1444c08b0

int __thiscall Audio::FBlockCorrelator::GetNumInputValues(FBlockCorrelator *this)

{
  return this->NumValuesInBlock;
}

// GetNumOutputValues @ 1444c08e0

int __thiscall Audio::FBlockCorrelator::GetNumOutputValues(FBlockCorrelator *this)

{
  return this->NumValuesInFFTRealBuffer;
}

// GetSettings @ 1444c1350

FBlockCorrelatorSettings * __thiscall Audio::FBlockCorrelator::GetSettings(FBlockCorrelator *this)

{
  return &this->Settings;
}

// InitializeNormalizationBuffer @ 1444c3c50

void __thiscall Audio::FBlockCorrelator::InitializeNormalizationBuffer(FBlockCorrelator *this)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  uint uVar13;
  float fVar14;
  undefined4 local_48 [2];
  TArray<float,TAlignedHeapAllocator<16>_> local_40 [2];
  
  if (((this->FFTAlgorithm).Ptr != (IFFTAlgorithm *)0x0) && (0 < this->NumValuesInBlock)) {
    uVar9 = 0;
    piVar1 = &(this->NormalizationBuffer).ArrayMax;
    piVar2 = &(this->NormalizationBuffer).ArrayNum;
    *piVar2 = 0;
    if (*piVar1 < 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&(this->NormalizationBuffer).AllocatorInstance,0,piVar1);
    }
    fVar6 = __real_3f800000;
    if (0 < this->NumValuesInFFTRealBuffer) {
      uVar11 = this->NumValuesInBlock;
      if ((int)uVar11 < this->NumValuesInFFTRealBuffer) {
        local_48[0] = 0x3f800000;
        if ((int)uVar11 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar11);
        }
        *piVar2 = 0;
        if (*piVar1 != uVar11) {
          UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,uVar11,&(this->NormalizationBuffer).AllocatorInstance,0,piVar1);
        }
        uVar12 = uVar9;
        if (0 < (int)uVar11) {
          do {
            pFVar3 = (this->NormalizationBuffer).AllocatorInstance.Data;
            if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
                ((FScriptContainerElement *)local_48 < pFVar3 + (longlong)*piVar1 * 4)) &&
               (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar7)) {
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            iVar8 = *piVar2;
            if (iVar8 == *piVar1) {
              iVar8 = UE::Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                                (0x404,&(this->NormalizationBuffer).AllocatorInstance,piVar1);
            }
            *piVar2 = iVar8 + 1;
            uVar13 = (int)uVar12 + 1;
            *(undefined4 *)
             ((this->NormalizationBuffer).AllocatorInstance.Data + (longlong)iVar8 * 4) =
                 local_48[0];
            uVar12 = (ulonglong)uVar13;
          } while ((int)uVar13 < (int)uVar11);
        }
        iVar10 = this->NumValuesInFFTRealBuffer - this->NumValuesInBlock;
        iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                          (4,4,iVar10,&(this->NormalizationBuffer).AllocatorInstance,piVar2,piVar1);
        memset((this->NormalizationBuffer).AllocatorInstance.Data + (longlong)iVar8 * 4,0,
               (longlong)iVar10 << 2);
        FWindow::ApplyToBuffer
                  (&this->Window,(float *)(this->NormalizationBuffer).AllocatorInstance.Data);
      }
    }
    local_40[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_40[0].ArrayNum = 0;
    local_40[0].ArrayMax = 0;
    UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,this->NumValuesInFFTRealBuffer,&local_40[0].AllocatorInstance,
               &local_40[0].ArrayNum,&local_40[0].ArrayMax);
    CyclicAutoCorrelate(this,&this->NormalizationBuffer,local_40);
    fVar5 = __real_322bcc77;
    pFVar3 = (this->NormalizationBuffer).AllocatorInstance.Data;
    uVar12 = uVar9;
    if (0 < this->NumValuesInFFTRealBuffer) {
      do {
        if (*(float *)(local_40[0].AllocatorInstance.Data + uVar9) <= fVar5) {
          fVar14 = 0.0;
        }
        else {
          fVar14 = fVar6 / *(float *)(local_40[0].AllocatorInstance.Data + uVar9);
        }
        *(float *)(pFVar3 + uVar9) = fVar14;
        uVar11 = (int)uVar12 + 1;
        uVar9 = uVar9 + 4;
        uVar12 = (ulonglong)uVar11;
      } while ((int)uVar11 < this->NumValuesInFFTRealBuffer);
    }
    if (local_40[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_40[0].AllocatorInstance.Data);
    }
  }
  return;
}

