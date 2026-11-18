// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 12

// ProcessAndConsumeAudioInternal<TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_>_> @ 1444eac20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
Audio::FMultichannelLinearResampler::
ProcessAndConsumeAudioInternal<TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_>_>
          (FMultichannelLinearResampler *this,
          TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  void *_Src;
  float *pfVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  TArrayView<float_const_,int> TVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 local_res8 [8];
  TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *local_res10;
  TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *local_res18;
  uint local_res20;
  int local_118;
  longlong local_108;
  undefined4 uStack_dc;
  TArrayView<float,int> local_d8;
  TArrayView<float_const_,int> local_c8;
  undefined4 local_ac;
  
  local_res10 = param_1;
  local_res18 = param_2;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudio.Num() == OutAudio.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                         ,0xbb,L"Input/output channel count mismatch."), bVar8)) {
    pcVar2 = (code *)swi(3);
    iVar9 = (*pcVar2)();
    return iVar9;
  }
  if ((param_1->ArrayNum != this->NumChannels) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudio.Num() == NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                         ,0xbc,L"Incorrect audio channel count."), bVar8)) {
    pcVar2 = (code *)swi(3);
    iVar9 = (*pcVar2)();
    return iVar9;
  }
  fVar19 = __real_3f000000;
  fVar5 = __real_bf000000;
  fVar23 = __real_3f800000;
  iVar9 = param_2->ArrayNum;
  fVar25 = 0.0;
  if (iVar9 < 1) {
    local_118 = 0;
    uVar10 = GetMultichannelBufferNumFrames(param_1);
  }
  else {
    pFVar12 = (param_2->AllocatorInstance).Data;
    pFVar14 = pFVar12 + (longlong)iVar9 * 0x10;
    local_118 = *(int *)(pFVar12 + 8);
    while( true ) {
      if (param_2->ArrayNum != iVar9) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TArray<float,TAlignedHeapAllocator<16>_>_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(local_res8);
      }
      if (pFVar12 == pFVar14) goto LAB_1444ead6a;
      if (local_118 != *(int *)(pFVar12 + 8)) break;
      pFVar12 = pFVar12 + 0x10;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Algo::AllOf(InBuffer, [&NumFrames](const BufferType& Buffer) { return NumFrames == Buffer.Num(); })"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelBuffer.cpp"
                       ,0x16,L"Buffers contain inconsistent frame sizes");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      iVar9 = (*pcVar2)();
      return iVar9;
    }
LAB_1444ead6a:
    uVar10 = GetMultichannelBufferNumFrames(param_1);
    if (0 < local_118) {
      fVar24 = (float)(local_118 + -1);
      iVar9 = local_118 / 100;
      if (local_118 / 100 < 1) {
        iVar9 = 1;
      }
      local_res20 = iVar9 + 1;
      if ((fVar24 < 0.0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InOutputFrameIndex >= 0.f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                             ,0x67,
                             L"Frame index mapping function is only value for outputs frames greater than or equal to 0"
                            ), bVar8)) {
        pcVar2 = (code *)swi(3);
        iVar9 = (*pcVar2)();
        return iVar9;
      }
      if (this->NumFramesToInterpolate < 1) {
        fVar24 = fVar24 * this->TargetFrameRatio;
      }
      else {
        fVar22 = (float)this->NumFramesToInterpolate;
        fVar18 = this->FrameRatioFrameDelta * fVar19;
        if (fVar22 <= fVar24) {
          fVar24 = (fVar22 + fVar23) * fVar22 * fVar18 + fVar22 * this->CurrentFrameRatio +
                   (fVar24 - fVar22) * this->TargetFrameRatio;
        }
        else {
          fVar24 = (fVar24 + fVar23) * fVar24 * fVar18 + fVar24 * this->CurrentFrameRatio;
        }
      }
      fVar24 = fVar24 + this->CurrentInputFrameIndex;
      local_res20 = local_res20 - ((int)ROUND(fVar5 - (fVar24 + fVar24)) >> 1);
      goto LAB_1444eae80;
    }
  }
  local_res20 = 0;
LAB_1444eae80:
  uVar13 = local_res20;
  if ((int)uVar10 < (int)local_res20) {
    if ((local_118 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNumOutputFrames > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                           ,0xb4,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      iVar9 = (*pcVar2)();
      return iVar9;
    }
    fVar24 = this->CurrentFrameRatio;
    if (this->CurrentFrameRatio <= this->TargetFrameRatio) {
      fVar24 = this->TargetFrameRatio;
    }
    local_118 = local_118 / 100;
    if (local_118 < 1) {
      local_118 = 1;
    }
    fVar18 = (float)(int)((uVar10 - local_118) + -1);
    iVar9 = ((int)ROUND((fVar18 + fVar18) / fVar24 - fVar19) >> 1) + -1;
    local_118 = 0;
    if (0 < iVar9) {
      local_118 = iVar9;
    }
    fVar24 = (float)(local_118 + -1);
    local_res20 = uVar10;
    if ((fVar24 < 0.0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOutputFrameIndex >= 0.f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                           ,0x67,
                           L"Frame index mapping function is only value for outputs frames greater than or equal to 0"
                          ), bVar8)) {
      pcVar2 = (code *)swi(3);
      iVar9 = (*pcVar2)();
      return iVar9;
    }
    if (this->NumFramesToInterpolate < 1) {
      fVar23 = fVar24 * this->TargetFrameRatio;
    }
    else {
      fVar18 = (float)this->NumFramesToInterpolate;
      fVar19 = this->FrameRatioFrameDelta * fVar19;
      if (fVar18 <= fVar24) {
        fVar23 = (fVar18 + fVar23) * fVar18 * fVar19 + fVar18 * this->CurrentFrameRatio +
                 (fVar24 - fVar18) * this->TargetFrameRatio;
      }
      else {
        fVar23 = (fVar24 + fVar23) * fVar24 * fVar19 + this->CurrentFrameRatio * fVar24;
      }
    }
    fVar23 = fVar23 + this->CurrentInputFrameIndex;
    uVar13 = uVar10;
    if ((int)uVar10 <= -((int)ROUND(fVar5 - (fVar23 + fVar23)) >> 1)) {
      if ((fVar24 < 0.0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InOutputFrameIndex >= 0.f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                             ,0x67,
                             L"Frame index mapping function is only value for outputs frames greater than or equal to 0"
                            ), bVar8)) {
        pcVar2 = (code *)swi(3);
        iVar9 = (*pcVar2)();
        return iVar9;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumInputFramesRequired > FMath::CeilToInt(MapOutputFrameToInputFrame(NumOutputFrames - 1))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                         ,0xcf,
                         L"Invalid calculation. Required input frames (%d) does not satisfy need for input frames (%f)"
                        );
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        iVar9 = (*pcVar2)();
        return iVar9;
      }
    }
  }
  if (0 < local_118) {
    uVar10 = 0;
    TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized(&this->WorkBuffer,uVar13,No);
    pTVar6 = local_res10;
    uVar15 = 0;
    if (0 < this->NumChannels) {
      lVar16 = 0;
      local_108 = 0;
      do {
        uVar17 = ~uVar15 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar15 < pTVar6->ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        pFVar12 = (pTVar6->AllocatorInstance).Data;
        local_res10 = (TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *)
                      (this->WorkBuffer).AllocatorInstance.Data;
        _Src = *(void **)(pFVar12 + lVar16);
        iVar9 = *(int *)(pFVar12 + lVar16 + 0x14);
        if (*(int *)(pFVar12 + lVar16 + 0x18) < iVar9) {
          iVar9 = *(int *)(pFVar12 + lVar16 + 0x10) - iVar9;
        }
        else {
          iVar9 = -iVar9;
        }
        uVar10 = *(int *)(pFVar12 + lVar16 + 0x18) + iVar9;
        if ((int)uVar13 < (int)uVar10) {
          uVar10 = uVar13;
        }
        uVar13 = *(int *)(pFVar12 + lVar16 + 0x10) - *(uint *)(pFVar12 + lVar16 + 0x14);
        if ((int)uVar10 < (int)uVar13) {
          uVar13 = uVar10;
        }
        memcpy(local_res10,
               (void *)((longlong)_Src + (ulonglong)*(uint *)(pFVar12 + lVar16 + 0x14) * 4),
               (longlong)(int)uVar13 * 4);
        memcpy((void *)((longlong)&(local_res10->AllocatorInstance).Data + (longlong)(int)uVar13 * 4
                       ),_Src,(longlong)(int)(uVar10 - uVar13) << 2);
        uVar13 = local_res20;
        if ((0x7ffffffe < local_res20) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x3f7,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        if ((uVar10 != uVar13) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumFramesCopied == NumInputFramesRequired",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                               ,0xde,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        pTVar7 = local_res18;
        uVar10 = 0;
        if ((int)uVar15 < local_res18->ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        pfVar1 = *(float **)((pTVar7->AllocatorInstance).Data + local_108);
        uVar3 = (this->WorkBuffer).AllocatorInstance;
        uVar4 = (this->WorkBuffer).ArrayNum;
        TVar20.ArrayNum = uVar4;
        TVar20.DataPtr = (float *)uVar3;
        if (((this->WorkBuffer).ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        local_d8._12_4_ = local_ac;
        local_d8.ArrayNum = local_118;
        TVar20._12_4_ = uStack_dc;
        local_d8.DataPtr = pfVar1;
        local_c8 = TVar20;
        fVar25 = ProcessChannelAudioInternal(this,&local_c8,&local_d8);
        uVar13 = 0;
        if ((int)uVar15 < pTVar6->ArrayNum) {
          uVar13 = uVar17;
        }
        auVar21 = roundps((undefined1  [16])TVar20,ZEXT416((uint)fVar25),1);
        uVar10 = (uint)auVar21._0_4_;
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        pFVar12 = (pTVar6->AllocatorInstance).Data;
        if ((0x7ffffffe < uVar10) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x43e,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        iVar9 = *(int *)(pFVar12 + lVar16 + 0x14);
        iVar11 = *(int *)(pFVar12 + lVar16 + 0x18);
        if (iVar11 < iVar9) {
          uVar13 = (iVar11 - iVar9) + *(int *)(pFVar12 + lVar16 + 0x10);
        }
        else {
          uVar13 = iVar11 - iVar9;
        }
        if ((int)uVar10 < (int)uVar13) {
          uVar13 = uVar10;
        }
        local_108 = local_108 + 0x10;
        uVar15 = uVar15 + 1;
        LOCK();
        *(uint *)(pFVar12 + lVar16 + 0x14) =
             (uVar13 + *(int *)(pFVar12 + lVar16 + 0x14)) % *(uint *)(pFVar12 + lVar16 + 0x10);
        UNLOCK();
        lVar16 = lVar16 + 0x20;
        uVar13 = local_res20;
      } while ((int)uVar15 < this->NumChannels);
    }
    iVar9 = this->NumFramesToInterpolate;
    if (0 < iVar9) {
      if (local_118 < iVar9) {
        iVar9 = iVar9 - local_118;
        this->NumFramesToInterpolate = iVar9;
        this->CurrentFrameRatio =
             (float)local_118 * this->FrameRatioFrameDelta + this->CurrentFrameRatio;
      }
      else {
        this->CurrentFrameRatio = this->TargetFrameRatio;
        iVar9 = 0;
        this->NumFramesToInterpolate = 0;
      }
    }
    iVar11 = local_118;
    if (iVar9 < local_118) {
      iVar11 = iVar9;
    }
    this->NumFramesToInterpolate = iVar9 - iVar11;
    this->CurrentInputFrameIndex = fVar25 - (float)(int)uVar10;
  }
  return local_118;
}

// ProcessAndConsumeAudioInternal<TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_>_> @ 1444eb4b0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
Audio::FMultichannelLinearResampler::
ProcessAndConsumeAudioInternal<TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_>_>
          (FMultichannelLinearResampler *this,
          TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *_Dst;
  void *_Src;
  float *pfVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  TArrayView<float_const_,int> TVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint local_res8;
  longlong local_110;
  undefined4 uStack_dc;
  TArrayView<float,int> local_d8;
  TArrayView<float_const_,int> local_c8;
  undefined4 local_ac;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudio.Num() == OutAudio.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                         ,0xbb,L"Input/output channel count mismatch."), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  if ((param_1->ArrayNum != this->NumChannels) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudio.Num() == NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                         ,0xbc,L"Incorrect audio channel count."), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  uVar10 = GetMultichannelBufferNumFrames(param_2);
  uVar11 = GetMultichannelBufferNumFrames(param_1);
  fVar18 = __real_3f000000;
  fVar7 = __real_bf000000;
  fVar22 = __real_3f800000;
  uVar14 = 0;
  fVar24 = 0.0;
  uVar13 = 0;
  local_res8 = uVar13;
  if (0 < (int)uVar10) {
    fVar23 = (float)(int)(uVar10 - 1);
    iVar9 = (int)uVar10 / 100;
    if ((int)uVar10 / 100 < 1) {
      iVar9 = 1;
    }
    if ((fVar23 < 0.0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOutputFrameIndex >= 0.f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                           ,0x67,
                           L"Frame index mapping function is only value for outputs frames greater than or equal to 0"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return iVar9;
    }
    if (this->NumFramesToInterpolate < 1) {
      fVar23 = fVar23 * this->TargetFrameRatio;
    }
    else {
      fVar21 = (float)this->NumFramesToInterpolate;
      fVar17 = this->FrameRatioFrameDelta * fVar18;
      if (fVar21 <= fVar23) {
        fVar23 = (fVar21 + fVar22) * fVar21 * fVar17 + fVar21 * this->CurrentFrameRatio +
                 (fVar23 - fVar21) * this->TargetFrameRatio;
      }
      else {
        fVar23 = (fVar23 + fVar22) * fVar23 * fVar17 + fVar23 * this->CurrentFrameRatio;
      }
    }
    fVar23 = fVar23 + this->CurrentInputFrameIndex;
    local_res8 = (iVar9 + 1) - ((int)ROUND(fVar7 - (fVar23 + fVar23)) >> 1);
  }
  if ((int)uVar11 < (int)local_res8) {
    if (((int)uVar10 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNumOutputFrames > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                           ,0xb4,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return iVar9;
    }
    fVar23 = this->CurrentFrameRatio;
    if (this->CurrentFrameRatio <= this->TargetFrameRatio) {
      fVar23 = this->TargetFrameRatio;
    }
    iVar9 = (int)uVar10 / 100;
    if (iVar9 < 1) {
      iVar9 = 1;
    }
    fVar17 = (float)(int)((uVar11 - iVar9) + -1);
    uVar12 = ((int)ROUND((fVar17 + fVar17) / fVar23 - fVar18) >> 1) - 1;
    uVar10 = uVar13;
    if (0 < (int)uVar12) {
      uVar10 = uVar12;
    }
    fVar23 = (float)(int)(uVar10 - 1);
    if ((fVar23 < 0.0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOutputFrameIndex >= 0.f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                           ,0x67,
                           L"Frame index mapping function is only value for outputs frames greater than or equal to 0"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return iVar9;
    }
    if (this->NumFramesToInterpolate < 1) {
      fVar22 = fVar23 * this->TargetFrameRatio;
    }
    else {
      fVar17 = (float)this->NumFramesToInterpolate;
      fVar18 = this->FrameRatioFrameDelta * fVar18;
      if (fVar17 <= fVar23) {
        fVar22 = (fVar17 + fVar22) * fVar17 * fVar18 + fVar17 * this->CurrentFrameRatio +
                 (fVar23 - fVar17) * this->TargetFrameRatio;
      }
      else {
        fVar22 = (fVar23 + fVar22) * fVar23 * fVar18 + this->CurrentFrameRatio * fVar23;
      }
    }
    fVar22 = fVar22 + this->CurrentInputFrameIndex;
    local_res8 = uVar11;
    if ((int)uVar11 <= -((int)ROUND(fVar7 - (fVar22 + fVar22)) >> 1)) {
      if ((fVar23 < 0.0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InOutputFrameIndex >= 0.f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                             ,0x67,
                             L"Frame index mapping function is only value for outputs frames greater than or equal to 0"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumInputFramesRequired > FMath::CeilToInt(MapOutputFrameToInputFrame(NumOutputFrames - 1))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                         ,0xcf,
                         L"Invalid calculation. Required input frames (%d) does not satisfy need for input frames (%f)"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
    }
  }
  if (0 < (int)uVar10) {
    TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized(&this->WorkBuffer,local_res8,No);
    if (0 < this->NumChannels) {
      local_110 = 0;
      uVar15 = uVar14;
      do {
        uVar12 = (uint)uVar14;
        uVar16 = ~uVar12 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        _Dst = (this->WorkBuffer).AllocatorInstance.Data;
        _Src = *(void **)(pFVar2 + uVar15);
        iVar9 = *(int *)(pFVar2 + uVar15 + 0x14);
        if (*(int *)(pFVar2 + uVar15 + 0x18) < iVar9) {
          iVar9 = *(int *)(pFVar2 + uVar15 + 0x10) - iVar9;
        }
        else {
          iVar9 = -iVar9;
        }
        uVar11 = *(int *)(pFVar2 + uVar15 + 0x18) + iVar9;
        if ((int)local_res8 < (int)uVar11) {
          uVar11 = local_res8;
        }
        uVar13 = *(int *)(pFVar2 + uVar15 + 0x10) - *(uint *)(pFVar2 + uVar15 + 0x14);
        if ((int)uVar11 < (int)uVar13) {
          uVar13 = uVar11;
        }
        memcpy(_Dst,(void *)((longlong)_Src + (ulonglong)*(uint *)(pFVar2 + uVar15 + 0x14) * 4),
               (longlong)(int)uVar13 * 4);
        memcpy(_Dst + (longlong)(int)uVar13 * 4,_Src,(longlong)(int)(uVar11 - uVar13) << 2);
        if ((0x7ffffffe < local_res8) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x3f7,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        if ((uVar11 != local_res8) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumFramesCopied == NumInputFramesRequired",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                               ,0xde,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        uVar11 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        pfVar3 = *(float **)((param_2->AllocatorInstance).Data + local_110);
        uVar5 = (this->WorkBuffer).AllocatorInstance;
        uVar6 = (this->WorkBuffer).ArrayNum;
        TVar19.ArrayNum = uVar6;
        TVar19.DataPtr = (float *)uVar5;
        if (((this->WorkBuffer).ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        local_d8._12_4_ = local_ac;
        local_d8.ArrayNum = uVar10;
        TVar19._12_4_ = uStack_dc;
        local_d8.DataPtr = pfVar3;
        local_c8 = TVar19;
        fVar24 = ProcessChannelAudioInternal(this,&local_c8,&local_d8);
        auVar20 = roundps((undefined1  [16])TVar19,ZEXT416((uint)fVar24),1);
        uVar13 = (uint)auVar20._0_4_;
        uVar11 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        if ((0x7ffffffe < uVar13) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x43e,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        iVar9 = *(int *)(pFVar2 + uVar15 + 0x14);
        iVar1 = *(int *)(pFVar2 + uVar15 + 0x18);
        if (iVar1 < iVar9) {
          uVar11 = (iVar1 - iVar9) + *(int *)(pFVar2 + uVar15 + 0x10);
        }
        else {
          uVar11 = iVar1 - iVar9;
        }
        if ((int)uVar13 < (int)uVar11) {
          uVar11 = uVar13;
        }
        local_110 = local_110 + 0x10;
        uVar14 = (ulonglong)(uVar12 + 1);
        LOCK();
        *(uint *)(pFVar2 + uVar15 + 0x14) =
             (uVar11 + *(int *)(pFVar2 + uVar15 + 0x14)) % *(uint *)(pFVar2 + uVar15 + 0x10);
        UNLOCK();
        uVar15 = uVar15 + 0x20;
      } while ((int)(uVar12 + 1) < this->NumChannels);
    }
    uVar11 = this->NumFramesToInterpolate;
    if (0 < (int)uVar11) {
      if ((int)uVar10 < (int)uVar11) {
        this->NumFramesToInterpolate = uVar11 - uVar10;
        this->CurrentFrameRatio =
             (float)(int)uVar10 * this->FrameRatioFrameDelta + this->CurrentFrameRatio;
        uVar11 = uVar11 - uVar10;
      }
      else {
        this->CurrentFrameRatio = this->TargetFrameRatio;
        this->NumFramesToInterpolate = 0;
        uVar11 = 0;
      }
    }
    uVar12 = uVar10;
    if ((int)uVar11 < (int)uVar10) {
      uVar12 = uVar11;
    }
    this->NumFramesToInterpolate = uVar11 - uVar12;
    this->CurrentInputFrameIndex = fVar24 - (float)(int)uVar13;
  }
  return uVar10;
}

// FMultichannelLinearResampler @ 1444f1210

FMultichannelLinearResampler * __thiscall
Audio::FMultichannelLinearResampler::FMultichannelLinearResampler
          (FMultichannelLinearResampler *this,int param_1)

{
  this->CurrentFrameRatio = 1.0;
  (this->WorkBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->WorkBuffer).ArrayNum = 0;
  (this->WorkBuffer).ArrayMax = 0;
  this->CurrentInputFrameIndex = 0.0;
  this->NumFramesToInterpolate = 0;
  this->TargetFrameRatio = 1.0;
  this->FrameRatioFrameDelta = 0.0;
  this->NumChannels = param_1;
  return this;
}

// GetNumBufferFramesToProduceOutputFrames @ 144504170

int __thiscall
Audio::FMultichannelLinearResampler::GetNumBufferFramesToProduceOutputFrames
          (FMultichannelLinearResampler *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (param_1 < 1) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumOutputFrames > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                       ,0xb4,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = param_1 / 100;
  if (param_1 / 100 < 1) {
    iVar3 = 1;
  }
  return iVar3 + 1;
}

// GetNumInputFramesNeededToProduceOutputFrames @ 144504280

int __thiscall
Audio::FMultichannelLinearResampler::GetNumInputFramesNeededToProduceOutputFrames
          (FMultichannelLinearResampler *this,int param_1)

{
  uint uVar1;
  float fVar2;
  
  if (0 < param_1) {
    uVar1 = (uint)param_1 / 100;
    fVar2 = MapOutputFrameToInputFrame(this,(float)(param_1 + -1));
    if (uVar1 == 0) {
      uVar1 = 1;
    }
    return (uVar1 - ((int)ROUND(__real_bf000000 - (fVar2 + fVar2)) >> 1)) + 1;
  }
  return 0;
}

// MapInputFrameToOutputFrame @ 144509710

float __thiscall
Audio::FMultichannelLinearResampler::MapInputFrameToOutputFrame
          (FMultichannelLinearResampler *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  double dVar11;
  
  if (param_1 < __real_bf800000) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InInputFrameIndex >= -1.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                       ,0x86,
                       L"Frame index mapping function is only value for inputs frames greater than or equal to -1"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = 0.0;
  if (this->NumFramesToInterpolate < 1) {
    if (0.0 < this->TargetFrameRatio) {
      return (param_1 - this->CurrentInputFrameIndex) / this->TargetFrameRatio;
    }
  }
  else {
    fVar3 = this->CurrentInputFrameIndex;
    fVar8 = (float)this->NumFramesToInterpolate;
    fVar10 = this->CurrentFrameRatio * fVar8;
    fVar6 = (fVar8 + __real_3f800000) * fVar8 * this->FrameRatioFrameDelta * __real_3f000000;
    if (fVar10 + fVar3 + fVar6 <= param_1) {
      return ((((param_1 - fVar3) - fVar10) - fVar6) + this->TargetFrameRatio * fVar8) /
             this->TargetFrameRatio;
    }
    dVar11 = (double)this->FrameRatioFrameDelta;
    dVar7 = dVar11 * __real_3fe0000000000000;
    dVar9 = (double)this->CurrentFrameRatio + dVar7;
    auVar4._0_8_ = (double)(fVar3 - param_1) * dVar7 * __real_4010000000000000;
    auVar4._8_8_ = 0;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = dVar9 * dVar9 - auVar4._0_8_;
    auVar5 = sqrtpd(auVar4,auVar5);
    fVar3 = (float)((auVar5._0_8_ - dVar9) / dVar11);
  }
  return fVar3;
}

// MapOutputFrameToInputFrame @ 144509860

float __thiscall
Audio::FMultichannelLinearResampler::MapOutputFrameToInputFrame
          (FMultichannelLinearResampler *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  
  if (param_1 < 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOutputFrameIndex >= 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                       ,0x67,
                       L"Frame index mapping function is only value for outputs frames greater than or equal to 0"
                      );
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  if (0 < this->NumFramesToInterpolate) {
    fVar3 = this->FrameRatioFrameDelta * __real_3f000000;
    fVar4 = (float)this->NumFramesToInterpolate;
    if (param_1 < fVar4) {
      return (param_1 + __real_3f800000) * param_1 * fVar3 + this->CurrentFrameRatio * param_1 +
             this->CurrentInputFrameIndex;
    }
    return (fVar4 + __real_3f800000) * fVar4 * fVar3 + this->CurrentFrameRatio * fVar4 +
           (param_1 - fVar4) * this->TargetFrameRatio + this->CurrentInputFrameIndex;
  }
  return param_1 * this->TargetFrameRatio + this->CurrentInputFrameIndex;
}

// ProcessAndConsumeAudio @ 14450cdb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
Audio::FMultichannelLinearResampler::ProcessAndConsumeAudio
          (FMultichannelLinearResampler *this,
          TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  void *_Src;
  float *pfVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  float fVar5;
  TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *pTVar6;
  TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  FScriptContainerElement *pFVar12;
  uint uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  TArrayView<float_const_,int> TVar20;
  undefined1 auVar21 [16];
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStackX_8 [8];
  TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *pTStackX_10;
  TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *pTStackX_18;
  uint uStackX_20;
  int iStack_118;
  longlong lStack_108;
  undefined4 uStack_dc;
  TArrayView<float,int> TStack_d8;
  TArrayView<float_const_,int> TStack_c8;
  undefined4 uStack_ac;
  
  pTStackX_10 = param_1;
  pTStackX_18 = param_2;
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudio.Num() == OutAudio.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                         ,0xbb,L"Input/output channel count mismatch."), bVar8)) {
    pcVar2 = (code *)swi(3);
    iVar9 = (*pcVar2)();
    return iVar9;
  }
  if ((param_1->ArrayNum != this->NumChannels) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudio.Num() == NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                         ,0xbc,L"Incorrect audio channel count."), bVar8)) {
    pcVar2 = (code *)swi(3);
    iVar9 = (*pcVar2)();
    return iVar9;
  }
  fVar19 = __real_3f000000;
  fVar5 = __real_bf000000;
  fVar23 = __real_3f800000;
  iVar9 = param_2->ArrayNum;
  fVar25 = 0.0;
  if (iVar9 < 1) {
    iStack_118 = 0;
    uVar10 = GetMultichannelBufferNumFrames(param_1);
  }
  else {
    pFVar12 = (param_2->AllocatorInstance).Data;
    pFVar14 = pFVar12 + (longlong)iVar9 * 0x10;
    iStack_118 = *(int *)(pFVar12 + 8);
    while( true ) {
      if (param_2->ArrayNum != iVar9) {
        auStackX_8[0] = 0;
        `TCheckedPointerIterator<TArray<float,TAlignedHeapAllocator<16>_>_const_,int,0>::operator!='
        ::__l2::<lambda_1>::operator()(auStackX_8);
      }
      if (pFVar12 == pFVar14) goto LAB_1444ead6a;
      if (iStack_118 != *(int *)(pFVar12 + 8)) break;
      pFVar12 = pFVar12 + 0x10;
    }
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Algo::AllOf(InBuffer, [&NumFrames](const BufferType& Buffer) { return NumFrames == Buffer.Num(); })"
                       ,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelBuffer.cpp"
                       ,0x16,L"Buffers contain inconsistent frame sizes");
    if (bVar8) {
      pcVar2 = (code *)swi(3);
      iVar9 = (*pcVar2)();
      return iVar9;
    }
LAB_1444ead6a:
    uVar10 = GetMultichannelBufferNumFrames(param_1);
    if (0 < iStack_118) {
      fVar24 = (float)(iStack_118 + -1);
      iVar9 = iStack_118 / 100;
      if (iStack_118 / 100 < 1) {
        iVar9 = 1;
      }
      uStackX_20 = iVar9 + 1;
      if ((fVar24 < 0.0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InOutputFrameIndex >= 0.f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                             ,0x67,
                             L"Frame index mapping function is only value for outputs frames greater than or equal to 0"
                            ), bVar8)) {
        pcVar2 = (code *)swi(3);
        iVar9 = (*pcVar2)();
        return iVar9;
      }
      if (this->NumFramesToInterpolate < 1) {
        fVar24 = fVar24 * this->TargetFrameRatio;
      }
      else {
        fVar22 = (float)this->NumFramesToInterpolate;
        fVar18 = this->FrameRatioFrameDelta * fVar19;
        if (fVar22 <= fVar24) {
          fVar24 = (fVar22 + fVar23) * fVar22 * fVar18 + fVar22 * this->CurrentFrameRatio +
                   (fVar24 - fVar22) * this->TargetFrameRatio;
        }
        else {
          fVar24 = (fVar24 + fVar23) * fVar24 * fVar18 + fVar24 * this->CurrentFrameRatio;
        }
      }
      fVar24 = fVar24 + this->CurrentInputFrameIndex;
      uStackX_20 = uStackX_20 - ((int)ROUND(fVar5 - (fVar24 + fVar24)) >> 1);
      goto LAB_1444eae80;
    }
  }
  uStackX_20 = 0;
LAB_1444eae80:
  uVar13 = uStackX_20;
  if ((int)uVar10 < (int)uStackX_20) {
    if ((iStack_118 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNumOutputFrames > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                           ,0xb4,L""), bVar8)) {
      pcVar2 = (code *)swi(3);
      iVar9 = (*pcVar2)();
      return iVar9;
    }
    fVar24 = this->CurrentFrameRatio;
    if (this->CurrentFrameRatio <= this->TargetFrameRatio) {
      fVar24 = this->TargetFrameRatio;
    }
    iStack_118 = iStack_118 / 100;
    if (iStack_118 < 1) {
      iStack_118 = 1;
    }
    fVar18 = (float)(int)((uVar10 - iStack_118) + -1);
    iVar9 = ((int)ROUND((fVar18 + fVar18) / fVar24 - fVar19) >> 1) + -1;
    iStack_118 = 0;
    if (0 < iVar9) {
      iStack_118 = iVar9;
    }
    fVar24 = (float)(iStack_118 + -1);
    uStackX_20 = uVar10;
    if ((fVar24 < 0.0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOutputFrameIndex >= 0.f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                           ,0x67,
                           L"Frame index mapping function is only value for outputs frames greater than or equal to 0"
                          ), bVar8)) {
      pcVar2 = (code *)swi(3);
      iVar9 = (*pcVar2)();
      return iVar9;
    }
    if (this->NumFramesToInterpolate < 1) {
      fVar23 = fVar24 * this->TargetFrameRatio;
    }
    else {
      fVar18 = (float)this->NumFramesToInterpolate;
      fVar19 = this->FrameRatioFrameDelta * fVar19;
      if (fVar18 <= fVar24) {
        fVar23 = (fVar18 + fVar23) * fVar18 * fVar19 + fVar18 * this->CurrentFrameRatio +
                 (fVar24 - fVar18) * this->TargetFrameRatio;
      }
      else {
        fVar23 = (fVar24 + fVar23) * fVar24 * fVar19 + this->CurrentFrameRatio * fVar24;
      }
    }
    fVar23 = fVar23 + this->CurrentInputFrameIndex;
    uVar13 = uVar10;
    if ((int)uVar10 <= -((int)ROUND(fVar5 - (fVar23 + fVar23)) >> 1)) {
      if ((fVar24 < 0.0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InOutputFrameIndex >= 0.f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                             ,0x67,
                             L"Frame index mapping function is only value for outputs frames greater than or equal to 0"
                            ), bVar8)) {
        pcVar2 = (code *)swi(3);
        iVar9 = (*pcVar2)();
        return iVar9;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumInputFramesRequired > FMath::CeilToInt(MapOutputFrameToInputFrame(NumOutputFrames - 1))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                         ,0xcf,
                         L"Invalid calculation. Required input frames (%d) does not satisfy need for input frames (%f)"
                        );
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        iVar9 = (*pcVar2)();
        return iVar9;
      }
    }
  }
  if (0 < iStack_118) {
    uVar10 = 0;
    TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized(&this->WorkBuffer,uVar13,No);
    pTVar6 = pTStackX_10;
    uVar15 = 0;
    if (0 < this->NumChannels) {
      lVar16 = 0;
      lStack_108 = 0;
      do {
        uVar17 = ~uVar15 >> 0x1f;
        uVar10 = 0;
        if ((int)uVar15 < pTVar6->ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        pFVar12 = (pTVar6->AllocatorInstance).Data;
        pTStackX_10 = (TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *)
                      (this->WorkBuffer).AllocatorInstance.Data;
        _Src = *(void **)(pFVar12 + lVar16);
        iVar9 = *(int *)(pFVar12 + lVar16 + 0x14);
        if (*(int *)(pFVar12 + lVar16 + 0x18) < iVar9) {
          iVar9 = *(int *)(pFVar12 + lVar16 + 0x10) - iVar9;
        }
        else {
          iVar9 = -iVar9;
        }
        uVar10 = *(int *)(pFVar12 + lVar16 + 0x18) + iVar9;
        if ((int)uVar13 < (int)uVar10) {
          uVar10 = uVar13;
        }
        uVar13 = *(int *)(pFVar12 + lVar16 + 0x10) - *(uint *)(pFVar12 + lVar16 + 0x14);
        if ((int)uVar10 < (int)uVar13) {
          uVar13 = uVar10;
        }
        memcpy(pTStackX_10,
               (void *)((longlong)_Src + (ulonglong)*(uint *)(pFVar12 + lVar16 + 0x14) * 4),
               (longlong)(int)uVar13 * 4);
        memcpy((void *)((longlong)&(pTStackX_10->AllocatorInstance).Data + (longlong)(int)uVar13 * 4
                       ),_Src,(longlong)(int)(uVar10 - uVar13) << 2);
        uVar13 = uStackX_20;
        if ((0x7ffffffe < uStackX_20) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x3f7,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        if ((uVar10 != uVar13) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumFramesCopied == NumInputFramesRequired",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                               ,0xde,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        pTVar7 = pTStackX_18;
        uVar10 = 0;
        if ((int)uVar15 < pTStackX_18->ArrayNum) {
          uVar10 = uVar17;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        pfVar1 = *(float **)((pTVar7->AllocatorInstance).Data + lStack_108);
        uVar3 = (this->WorkBuffer).AllocatorInstance;
        uVar4 = (this->WorkBuffer).ArrayNum;
        TVar20.ArrayNum = uVar4;
        TVar20.DataPtr = (float *)uVar3;
        if (((this->WorkBuffer).ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        TStack_d8._12_4_ = uStack_ac;
        TStack_d8.ArrayNum = iStack_118;
        TVar20._12_4_ = uStack_dc;
        TStack_d8.DataPtr = pfVar1;
        TStack_c8 = TVar20;
        fVar25 = ProcessChannelAudioInternal(this,&TStack_c8,&TStack_d8);
        uVar13 = 0;
        if ((int)uVar15 < pTVar6->ArrayNum) {
          uVar13 = uVar17;
        }
        auVar21 = roundps((undefined1  [16])TVar20,ZEXT416((uint)fVar25),1);
        uVar10 = (uint)auVar21._0_4_;
        if ((uVar13 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        pFVar12 = (pTVar6->AllocatorInstance).Data;
        if ((0x7ffffffe < uVar10) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x43e,L""), bVar8)) {
          pcVar2 = (code *)swi(3);
          iVar9 = (*pcVar2)();
          return iVar9;
        }
        iVar9 = *(int *)(pFVar12 + lVar16 + 0x14);
        iVar11 = *(int *)(pFVar12 + lVar16 + 0x18);
        if (iVar11 < iVar9) {
          uVar13 = (iVar11 - iVar9) + *(int *)(pFVar12 + lVar16 + 0x10);
        }
        else {
          uVar13 = iVar11 - iVar9;
        }
        if ((int)uVar10 < (int)uVar13) {
          uVar13 = uVar10;
        }
        lStack_108 = lStack_108 + 0x10;
        uVar15 = uVar15 + 1;
        LOCK();
        *(uint *)(pFVar12 + lVar16 + 0x14) =
             (uVar13 + *(int *)(pFVar12 + lVar16 + 0x14)) % *(uint *)(pFVar12 + lVar16 + 0x10);
        UNLOCK();
        lVar16 = lVar16 + 0x20;
        uVar13 = uStackX_20;
      } while ((int)uVar15 < this->NumChannels);
    }
    iVar9 = this->NumFramesToInterpolate;
    if (0 < iVar9) {
      if (iStack_118 < iVar9) {
        iVar9 = iVar9 - iStack_118;
        this->NumFramesToInterpolate = iVar9;
        this->CurrentFrameRatio =
             (float)iStack_118 * this->FrameRatioFrameDelta + this->CurrentFrameRatio;
      }
      else {
        this->CurrentFrameRatio = this->TargetFrameRatio;
        iVar9 = 0;
        this->NumFramesToInterpolate = 0;
      }
    }
    iVar11 = iStack_118;
    if (iVar9 < iStack_118) {
      iVar11 = iVar9;
    }
    this->NumFramesToInterpolate = iVar9 - iVar11;
    this->CurrentInputFrameIndex = fVar25 - (float)(int)uVar10;
  }
  return iStack_118;
}

// ProcessAndConsumeAudio @ 14450cdc0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
Audio::FMultichannelLinearResampler::ProcessAndConsumeAudio
          (FMultichannelLinearResampler *this,
          TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *_Dst;
  void *_Src;
  float *pfVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  TArrayView<float_const_,int> TVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uStackX_8;
  longlong lStack_110;
  undefined4 uStack_dc;
  TArrayView<float,int> TStack_d8;
  TArrayView<float_const_,int> TStack_c8;
  undefined4 uStack_ac;
  
  if ((param_1->ArrayNum != param_2->ArrayNum) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudio.Num() == OutAudio.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                         ,0xbb,L"Input/output channel count mismatch."), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  if ((param_1->ArrayNum != this->NumChannels) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudio.Num() == NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                         ,0xbc,L"Incorrect audio channel count."), bVar8)) {
    pcVar4 = (code *)swi(3);
    iVar9 = (*pcVar4)();
    return iVar9;
  }
  uVar10 = GetMultichannelBufferNumFrames(param_2);
  uVar11 = GetMultichannelBufferNumFrames(param_1);
  fVar18 = __real_3f000000;
  fVar7 = __real_bf000000;
  fVar22 = __real_3f800000;
  uVar14 = 0;
  fVar24 = 0.0;
  uVar13 = 0;
  uStackX_8 = uVar13;
  if (0 < (int)uVar10) {
    fVar23 = (float)(int)(uVar10 - 1);
    iVar9 = (int)uVar10 / 100;
    if ((int)uVar10 / 100 < 1) {
      iVar9 = 1;
    }
    if ((fVar23 < 0.0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOutputFrameIndex >= 0.f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                           ,0x67,
                           L"Frame index mapping function is only value for outputs frames greater than or equal to 0"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return iVar9;
    }
    if (this->NumFramesToInterpolate < 1) {
      fVar23 = fVar23 * this->TargetFrameRatio;
    }
    else {
      fVar21 = (float)this->NumFramesToInterpolate;
      fVar17 = this->FrameRatioFrameDelta * fVar18;
      if (fVar21 <= fVar23) {
        fVar23 = (fVar21 + fVar22) * fVar21 * fVar17 + fVar21 * this->CurrentFrameRatio +
                 (fVar23 - fVar21) * this->TargetFrameRatio;
      }
      else {
        fVar23 = (fVar23 + fVar22) * fVar23 * fVar17 + fVar23 * this->CurrentFrameRatio;
      }
    }
    fVar23 = fVar23 + this->CurrentInputFrameIndex;
    uStackX_8 = (iVar9 + 1) - ((int)ROUND(fVar7 - (fVar23 + fVar23)) >> 1);
  }
  if ((int)uVar11 < (int)uStackX_8) {
    if (((int)uVar10 < 1) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InNumOutputFrames > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                           ,0xb4,L""), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return iVar9;
    }
    fVar23 = this->CurrentFrameRatio;
    if (this->CurrentFrameRatio <= this->TargetFrameRatio) {
      fVar23 = this->TargetFrameRatio;
    }
    iVar9 = (int)uVar10 / 100;
    if (iVar9 < 1) {
      iVar9 = 1;
    }
    fVar17 = (float)(int)((uVar11 - iVar9) + -1);
    uVar12 = ((int)ROUND((fVar17 + fVar17) / fVar23 - fVar18) >> 1) - 1;
    uVar10 = uVar13;
    if (0 < (int)uVar12) {
      uVar10 = uVar12;
    }
    fVar23 = (float)(int)(uVar10 - 1);
    if ((fVar23 < 0.0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("InOutputFrameIndex >= 0.f",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                           ,0x67,
                           L"Frame index mapping function is only value for outputs frames greater than or equal to 0"
                          ), bVar8)) {
      pcVar4 = (code *)swi(3);
      iVar9 = (*pcVar4)();
      return iVar9;
    }
    if (this->NumFramesToInterpolate < 1) {
      fVar22 = fVar23 * this->TargetFrameRatio;
    }
    else {
      fVar17 = (float)this->NumFramesToInterpolate;
      fVar18 = this->FrameRatioFrameDelta * fVar18;
      if (fVar17 <= fVar23) {
        fVar22 = (fVar17 + fVar22) * fVar17 * fVar18 + fVar17 * this->CurrentFrameRatio +
                 (fVar23 - fVar17) * this->TargetFrameRatio;
      }
      else {
        fVar22 = (fVar23 + fVar22) * fVar23 * fVar18 + this->CurrentFrameRatio * fVar23;
      }
    }
    fVar22 = fVar22 + this->CurrentInputFrameIndex;
    uStackX_8 = uVar11;
    if ((int)uVar11 <= -((int)ROUND(fVar7 - (fVar22 + fVar22)) >> 1)) {
      if ((fVar23 < 0.0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InOutputFrameIndex >= 0.f",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                             ,0x67,
                             L"Frame index mapping function is only value for outputs frames greater than or equal to 0"
                            ), bVar8)) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumInputFramesRequired > FMath::CeilToInt(MapOutputFrameToInputFrame(NumOutputFrames - 1))"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                         ,0xcf,
                         L"Invalid calculation. Required input frames (%d) does not satisfy need for input frames (%f)"
                        );
      if (bVar8) {
        pcVar4 = (code *)swi(3);
        iVar9 = (*pcVar4)();
        return iVar9;
      }
    }
  }
  if (0 < (int)uVar10) {
    TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized(&this->WorkBuffer,uStackX_8,No);
    if (0 < this->NumChannels) {
      lStack_110 = 0;
      uVar15 = uVar14;
      do {
        uVar12 = (uint)uVar14;
        uVar16 = ~uVar12 >> 0x1f;
        uVar11 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        _Dst = (this->WorkBuffer).AllocatorInstance.Data;
        _Src = *(void **)(pFVar2 + uVar15);
        iVar9 = *(int *)(pFVar2 + uVar15 + 0x14);
        if (*(int *)(pFVar2 + uVar15 + 0x18) < iVar9) {
          iVar9 = *(int *)(pFVar2 + uVar15 + 0x10) - iVar9;
        }
        else {
          iVar9 = -iVar9;
        }
        uVar11 = *(int *)(pFVar2 + uVar15 + 0x18) + iVar9;
        if ((int)uStackX_8 < (int)uVar11) {
          uVar11 = uStackX_8;
        }
        uVar13 = *(int *)(pFVar2 + uVar15 + 0x10) - *(uint *)(pFVar2 + uVar15 + 0x14);
        if ((int)uVar11 < (int)uVar13) {
          uVar13 = uVar11;
        }
        memcpy(_Dst,(void *)((longlong)_Src + (ulonglong)*(uint *)(pFVar2 + uVar15 + 0x14) * 4),
               (longlong)(int)uVar13 * 4);
        memcpy(_Dst + (longlong)(int)uVar13 * 4,_Src,(longlong)(int)(uVar11 - uVar13) << 2);
        if ((0x7ffffffe < uStackX_8) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x3f7,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        if ((uVar11 != uStackX_8) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumFramesCopied == NumInputFramesRequired",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                               ,0xde,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        uVar11 = 0;
        if ((int)uVar12 < param_2->ArrayNum) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        pfVar3 = *(float **)((param_2->AllocatorInstance).Data + lStack_110);
        uVar5 = (this->WorkBuffer).AllocatorInstance;
        uVar6 = (this->WorkBuffer).ArrayNum;
        TVar19.ArrayNum = uVar6;
        TVar19.DataPtr = (float *)uVar5;
        if (((this->WorkBuffer).ArrayNum < 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("InCount >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xeb,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        TStack_d8._12_4_ = uStack_ac;
        TStack_d8.ArrayNum = uVar10;
        TVar19._12_4_ = uStack_dc;
        TStack_d8.DataPtr = pfVar3;
        TStack_c8 = TVar19;
        fVar24 = ProcessChannelAudioInternal(this,&TStack_c8,&TStack_d8);
        auVar20 = roundps((undefined1  [16])TVar19,ZEXT416((uint)fVar24),1);
        uVar13 = (uint)auVar20._0_4_;
        uVar11 = 0;
        if ((int)uVar12 < param_1->ArrayNum) {
          uVar11 = uVar16;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        pFVar2 = (param_1->AllocatorInstance).Data;
        if ((0x7ffffffe < uVar13) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x43e,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          iVar9 = (*pcVar4)();
          return iVar9;
        }
        iVar9 = *(int *)(pFVar2 + uVar15 + 0x14);
        iVar1 = *(int *)(pFVar2 + uVar15 + 0x18);
        if (iVar1 < iVar9) {
          uVar11 = (iVar1 - iVar9) + *(int *)(pFVar2 + uVar15 + 0x10);
        }
        else {
          uVar11 = iVar1 - iVar9;
        }
        if ((int)uVar13 < (int)uVar11) {
          uVar11 = uVar13;
        }
        lStack_110 = lStack_110 + 0x10;
        uVar14 = (ulonglong)(uVar12 + 1);
        LOCK();
        *(uint *)(pFVar2 + uVar15 + 0x14) =
             (uVar11 + *(int *)(pFVar2 + uVar15 + 0x14)) % *(uint *)(pFVar2 + uVar15 + 0x10);
        UNLOCK();
        uVar15 = uVar15 + 0x20;
      } while ((int)(uVar12 + 1) < this->NumChannels);
    }
    uVar11 = this->NumFramesToInterpolate;
    if (0 < (int)uVar11) {
      if ((int)uVar10 < (int)uVar11) {
        this->NumFramesToInterpolate = uVar11 - uVar10;
        this->CurrentFrameRatio =
             (float)(int)uVar10 * this->FrameRatioFrameDelta + this->CurrentFrameRatio;
        uVar11 = uVar11 - uVar10;
      }
      else {
        this->CurrentFrameRatio = this->TargetFrameRatio;
        this->NumFramesToInterpolate = 0;
        uVar11 = 0;
      }
    }
    uVar12 = uVar10;
    if ((int)uVar11 < (int)uVar10) {
      uVar12 = uVar11;
    }
    this->NumFramesToInterpolate = uVar11 - uVar12;
    this->CurrentInputFrameIndex = fVar24 - (float)(int)uVar13;
  }
  return uVar10;
}

// ProcessChannelAudioInternal @ 1445137d0

float __thiscall
Audio::FMultichannelLinearResampler::ProcessChannelAudioInternal
          (FMultichannelLinearResampler *this,TArrayView<float_const_,int> *param_1,
          TArrayView<float,int> *param_2)

{
  float *_Src;
  float *_Dst;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float *pfVar8;
  int iVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar4 = param_2->ArrayNum;
  lVar10 = (longlong)iVar4;
  if (iVar4 < 1) {
    return 0.0;
  }
  _Src = param_1->DataPtr;
  _Dst = param_2->DataPtr;
  fVar11 = this->CurrentFrameRatio;
  if (((fVar11 == __real_3f800000) && (this->CurrentInputFrameIndex == 0.0)) &&
     (this->NumFramesToInterpolate == 0)) {
    memcpy(_Dst,_Src,lVar10 * 4);
    return (float)iVar4;
  }
  lVar5 = 0;
  iVar3 = 0;
  fVar12 = this->CurrentInputFrameIndex;
  if ((fVar12 < 0.0) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputFrameIndex >= 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                         ,0x120,L"Input frame index references discarded data"), bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar11 = (float)(*pcVar1)();
    return fVar11;
  }
  iVar9 = this->NumFramesToInterpolate;
  if (iVar4 < this->NumFramesToInterpolate) {
    iVar9 = iVar4;
  }
  lVar6 = (longlong)iVar9;
  if (3 < lVar6) {
    pfVar8 = _Dst + 2;
    lVar7 = (lVar6 - 4U >> 2) + 1;
    lVar5 = lVar7 * 4;
    do {
      iVar3 = (int)fVar12;
      pfVar8[-2] = (_Src[(longlong)iVar3 + 1] - _Src[iVar3]) * (fVar12 - (float)iVar3) + _Src[iVar3]
      ;
      fVar11 = fVar11 + this->FrameRatioFrameDelta;
      fVar12 = fVar12 + fVar11;
      iVar3 = (int)fVar12;
      pfVar8[-1] = (_Src[(longlong)iVar3 + 1] - _Src[iVar3]) * (fVar12 - (float)iVar3) + _Src[iVar3]
      ;
      fVar11 = fVar11 + this->FrameRatioFrameDelta;
      fVar12 = fVar12 + fVar11;
      iVar3 = (int)fVar12;
      *pfVar8 = (_Src[(longlong)iVar3 + 1] - _Src[iVar3]) * (fVar12 - (float)iVar3) + _Src[iVar3];
      fVar11 = fVar11 + this->FrameRatioFrameDelta;
      fVar12 = fVar12 + fVar11;
      iVar3 = (int)fVar12;
      pfVar8[1] = (_Src[(longlong)iVar3 + 1] - _Src[iVar3]) * (fVar12 - (float)iVar3) + _Src[iVar3];
      pfVar8 = pfVar8 + 4;
      fVar11 = fVar11 + this->FrameRatioFrameDelta;
      fVar12 = fVar12 + fVar11;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  for (; lVar5 < lVar6; lVar5 = lVar5 + 1) {
    iVar3 = (int)fVar12;
    _Dst[lVar5] = (_Src[(longlong)iVar3 + 1] - _Src[iVar3]) * (fVar12 - (float)iVar3) + _Src[iVar3];
    fVar11 = fVar11 + this->FrameRatioFrameDelta;
    fVar12 = fVar12 + fVar11;
  }
  if (iVar9 < iVar4) {
    fVar11 = this->TargetFrameRatio;
    lVar5 = (longlong)iVar9;
    if (lVar5 < lVar10) {
      fVar13 = fVar12;
      if (3 < lVar10 - lVar5) {
        pfVar8 = _Dst + lVar5 + 2;
        lVar6 = ((lVar10 - iVar9) - 4U >> 2) + 1;
        lVar5 = (longlong)iVar9 + lVar6 * 4;
        do {
          iVar4 = (int)fVar12;
          fVar13 = fVar12 + fVar11;
          iVar3 = (int)fVar13;
          fVar14 = fVar13 + fVar11;
          pfVar8[-2] = (_Src[(longlong)iVar4 + 1] - _Src[iVar4]) * (fVar12 - (float)iVar4) +
                       _Src[iVar4];
          iVar4 = (int)fVar14;
          fVar15 = fVar14 + fVar11;
          pfVar8[-1] = (_Src[(longlong)iVar3 + 1] - _Src[iVar3]) * (fVar13 - (float)iVar3) +
                       _Src[iVar3];
          iVar3 = (int)fVar15;
          fVar12 = fVar15 + fVar11;
          *pfVar8 = (_Src[(longlong)iVar4 + 1] - _Src[iVar4]) * (fVar14 - (float)iVar4) +
                    _Src[iVar4];
          pfVar8[1] = (_Src[(longlong)iVar3 + 1] - _Src[iVar3]) * (fVar15 - (float)iVar3) +
                      _Src[iVar3];
          pfVar8 = pfVar8 + 4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        fVar13 = fVar12;
        if (lVar10 <= lVar5) goto LAB_144513b4b;
      }
      do {
        iVar3 = (int)fVar13;
        fVar12 = fVar13 + fVar11;
        _Dst[lVar5] = (_Src[(longlong)iVar3 + 1] - _Src[iVar3]) * (fVar13 - (float)iVar3) +
                      _Src[iVar3];
        lVar5 = lVar5 + 1;
        fVar13 = fVar12;
      } while (lVar5 < lVar10);
    }
  }
LAB_144513b4b:
  if ((param_1->ArrayNum <= iVar3 + 1) &&
     (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(LowerFrameIndex + 1) < InAudio.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\MultichannelLinearResampler.cpp"
                         ,0x13d,
                         L"Buffer overrun in multichannel linear resampler. Attempt to read index %d of array with %d elements. FrameRatio: %f, FrameRatioDelta: %f, NumFramesToInterpolate: %d"
                        ), bVar2)) {
    pcVar1 = (code *)swi(3);
    fVar11 = (float)(*pcVar1)();
    return fVar11;
  }
  return fVar12;
}

// SetFrameRatio @ 144519f60

void __thiscall
Audio::FMultichannelLinearResampler::SetFrameRatio
          (FMultichannelLinearResampler *this,float param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float local_res10 [4];
  float *local_res20;
  
  fVar2 = __real_3a83126f;
  if ((param_1 < __real_3a83126f) || (__real_42c80000 < param_1)) {
    local_res20 = local_res10;
    local_res10[0] = param_1;
    bVar3 = `Audio::FMultichannelLinearResampler::SetFrameRatio'::__l3::<lambda_1>::operator()
                      (&local_res20);
    param_1 = local_res10[0];
    if (!bVar3) {
      return;
    }
  }
  uVar1 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if ((param_2 < 2) ||
     (fVar5 = param_1 - this->CurrentFrameRatio,
     (float)((uint)fVar5 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77)) {
    this->CurrentFrameRatio = param_1;
    this->FrameRatioFrameDelta = 0.0;
    this->NumFramesToInterpolate = 0;
    this->TargetFrameRatio = param_1;
  }
  else {
    this->TargetFrameRatio = param_1;
    this->NumFramesToInterpolate = param_2;
    fVar4 = fVar5 / (float)param_2;
    this->FrameRatioFrameDelta = fVar4;
    while ((float)((uint)fVar4 & uVar1) < fVar2) {
      param_2 = (uint)param_2 >> 1;
      this->NumFramesToInterpolate = param_2;
      if (param_2 != 0) {
        fVar4 = fVar5 / (float)param_2;
        this->FrameRatioFrameDelta = fVar4;
      }
      if ((uint)param_2 < 2) {
        return;
      }
    }
  }
  return;
}

// operator() @ 1504bf8e0

bool __thiscall
`Audio::FMultichannelLinearResampler::SetFrameRatio'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<6730258600880504855>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<6730258600880504855>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

