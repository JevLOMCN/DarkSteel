// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 19

// ProcessCircularBufferGeneric<TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_>,TArray<float,TAlignedHeapAllocator<16>_>_> @ 1444ec430

int __thiscall
Audio::FRuntimeResampler::
ProcessCircularBufferGeneric<TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_>,TArray<float,TAlignedHeapAllocator<16>_>_>
          (FRuntimeResampler *this,
          TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ForElementType<float_const_*> FVar9;
  ForElementType<float_*> FVar10;
  uint uVar11;
  ForElementType<float_const_*> FVar12;
  ForElementType<float_*> FVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  int local_res20;
  int local_b8;
  undefined4 uStack_a4;
  longlong local_a0;
  ResamplingParameters local_88;
  
  iVar6 = (this->PreviousFrame).ArrayNum;
  lVar15 = (longlong)iVar6;
  if (((param_1->ArrayNum != iVar6) || (param_2->ArrayNum != iVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudio.Num() == NumChannels && OutAudio.Num() == NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                         ,0xc1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  FVar9 = (this->TempInputPointers).AllocatorInstance.SecondaryData;
  local_88.NumInputFrames = 0xffffffff;
  local_88.NumOutputFrames = -1;
  local_88.OutNumInputFramesConsumed = 0;
  local_88.OutNumOutputFramesProduced = 0;
  if (FVar9 == (ForElementType<float_const_*>)0x0) {
    FVar9 = (ForElementType<float_const_*>)&this->TempInputPointers;
  }
  iVar6 = (this->TempInputPointers).ArrayNum;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  FVar10 = (this->TempOutputPointers).AllocatorInstance.SecondaryData;
  local_88.InputAudio._12_4_ = uStack_a4;
  local_88.InputAudio.ArrayNum = iVar6;
  local_88.InputStride = 1;
  if (FVar10 == (ForElementType<float_*>)0x0) {
    FVar10 = (ForElementType<float_*>)&this->TempOutputPointers;
  }
  iVar6 = (this->TempOutputPointers).ArrayNum;
  local_88.InputAudio.DataPtr = (float **)FVar9;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  local_88.OutputAudio._12_4_ = uStack_a4;
  local_88.OutputAudio.ArrayNum = iVar6;
  local_88.OutputStride = 1;
  local_res20 = 0;
  local_b8 = 0;
  local_88.OutputAudio.DataPtr = (float **)FVar10;
  do {
    uVar16 = 0;
    if (lVar15 < 1) {
      ProcessAudioInternal(this,&local_88);
      iVar6 = local_88.OutNumOutputFramesProduced;
    }
    else {
      lVar21 = 0;
      local_a0 = 0;
      uVar20 = uVar16;
      do {
        uVar8 = (uint)uVar16;
        uVar23 = ~uVar8 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar19 = (param_1->AllocatorInstance).Data + lVar21;
        uVar18 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        iVar6 = *(int *)(pFVar3 + lVar21 + 0x14);
        if (*(int *)(pFVar3 + lVar21 + 0x18) < iVar6) {
          iVar6 = *(int *)(pFVar3 + lVar21 + 0x10) - iVar6;
        }
        else {
          iVar6 = -iVar6;
        }
        uVar11 = *(int *)(pFVar3 + lVar21 + 0x18) + iVar6;
        uVar18 = *(uint *)(pFVar19 + 0x14);
        lVar22 = *(longlong *)pFVar19;
        iVar6 = *(int *)(pFVar19 + 0x14);
        if (*(int *)(pFVar19 + 0x18) < iVar6) {
          iVar6 = *(int *)(pFVar19 + 0x10) - iVar6;
        }
        else {
          iVar6 = -iVar6;
        }
        uVar14 = *(int *)(pFVar19 + 0x18) + iVar6;
        if ((int)uVar11 < (int)uVar14) {
          uVar14 = uVar11;
        }
        uVar17 = *(int *)(pFVar19 + 0x10) - uVar18;
        if ((int)uVar14 < (int)uVar17) {
          uVar17 = uVar14;
        }
        if ((0x7ffffffe < uVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x406,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        if (((int)(uVar14 - uVar17) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        if (((int)uVar17 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        uVar11 = uVar17;
        if (((uVar8 != 0) && (uVar11 = local_88.NumInputFrames, local_88.NumInputFrames != uVar17))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Parameters.NumInputFrames == InputView.FirstBuffer.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                                  ,0xda,L""), uVar11 = local_88.NumInputFrames, bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        local_88.NumInputFrames = uVar11;
        uVar11 = 0;
        if ((int)uVar8 < (this->TempInputPointers).ArrayNum) {
          uVar11 = uVar23;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        FVar9 = (this->TempInputPointers).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<float_const_*>)&this->TempInputPointers;
        if (FVar9 != (ForElementType<float_const_*>)0x0) {
          FVar12 = FVar9;
        }
        *(ulonglong *)((longlong)FVar12 + uVar20 * 8) = lVar22 + (ulonglong)uVar18 * 4;
        uVar18 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar19 = (param_2->AllocatorInstance).Data;
        lVar22 = *(longlong *)(pFVar19 + local_a0);
        uVar18 = 0;
        if ((int)uVar8 < (this->TempOutputPointers).ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        FVar10 = (this->TempOutputPointers).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<float_*>)&this->TempOutputPointers;
        if (FVar10 != (ForElementType<float_*>)0x0) {
          FVar13 = FVar10;
        }
        *(longlong *)((longlong)FVar13 + uVar20 * 8) = (longlong)local_res20 * 4 + lVar22;
        iVar7 = *(int *)(pFVar19 + local_a0 + 8) - local_res20;
        iVar6 = iVar7;
        if (((uVar8 != 0) && (iVar6 = local_88.NumOutputFrames, local_88.NumOutputFrames != iVar7))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Parameters.NumOutputFrames == OutputChannel.Num() - NumFramesProduced"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                                  ,0xe7,L""), iVar6 = local_88.NumOutputFrames, bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        local_88.NumOutputFrames = iVar6;
        local_a0 = local_a0 + 0x10;
        uVar16 = (ulonglong)(uVar8 + 1);
        uVar20 = uVar20 + 1;
        lVar21 = lVar21 + 0x20;
      } while ((longlong)uVar20 < lVar15);
      ProcessAudioInternal(this,&local_88);
      uVar18 = 0;
      iVar6 = local_88.OutNumOutputFramesProduced;
      lVar21 = lVar15;
      lVar22 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar19 = (param_1->AllocatorInstance).Data;
        iVar7 = local_88.OutNumInputFramesConsumed;
        if ((0x7ffffffe < (uint)local_88.OutNumInputFramesConsumed) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x43e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar1 = *(int *)(pFVar19 + lVar22 + 0x14);
        iVar2 = *(int *)(pFVar19 + lVar22 + 0x18);
        if (iVar2 < iVar1) {
          uVar8 = (iVar2 - iVar1) + *(int *)(pFVar19 + lVar22 + 0x10);
        }
        else {
          uVar8 = iVar2 - iVar1;
        }
        if (iVar7 < (int)uVar8) {
          uVar8 = iVar7;
        }
        uVar18 = uVar18 + 1;
        LOCK();
        *(uint *)(pFVar19 + lVar22 + 0x14) =
             (uVar8 + *(int *)(pFVar19 + lVar22 + 0x14)) % *(uint *)(pFVar19 + lVar22 + 0x10);
        UNLOCK();
        lVar21 = lVar21 + -1;
        lVar22 = lVar22 + 0x20;
      } while (lVar21 != 0);
    }
    local_res20 = local_res20 + iVar6;
    if ((param_2->ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    if (local_res20 == *(int *)((param_2->AllocatorInstance).Data + 8)) {
      return local_res20;
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    pFVar19 = (param_1->AllocatorInstance).Data;
    iVar6 = *(int *)(pFVar19 + 0x14);
    if (*(int *)(pFVar19 + 0x18) < iVar6) {
      iVar6 = *(int *)(pFVar19 + 0x10) - iVar6;
    }
    else {
      iVar6 = -iVar6;
    }
    if (*(int *)(pFVar19 + 0x18) + iVar6 == 0) {
      return local_res20;
    }
    local_b8 = local_b8 + 1;
    if (1 < local_b8) {
      return local_res20;
    }
  } while( true );
}

// ProcessCircularBufferGeneric<TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_>,TArrayView<float,int>_> @ 1444ecb00

int __thiscall
Audio::FRuntimeResampler::
ProcessCircularBufferGeneric<TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_>,TArrayView<float,int>_>
          (FRuntimeResampler *this,
          TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ForElementType<float_const_*> FVar9;
  ForElementType<float_*> FVar10;
  uint uVar11;
  ForElementType<float_const_*> FVar12;
  ForElementType<float_*> FVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  int local_res20;
  int local_b8;
  undefined4 uStack_a4;
  longlong local_a0;
  ResamplingParameters local_88;
  
  iVar6 = (this->PreviousFrame).ArrayNum;
  lVar15 = (longlong)iVar6;
  if (((param_1->ArrayNum != iVar6) || (param_2->ArrayNum != iVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudio.Num() == NumChannels && OutAudio.Num() == NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                         ,0xc1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  FVar9 = (this->TempInputPointers).AllocatorInstance.SecondaryData;
  local_88.NumInputFrames = 0xffffffff;
  local_88.NumOutputFrames = -1;
  local_88.OutNumInputFramesConsumed = 0;
  local_88.OutNumOutputFramesProduced = 0;
  if (FVar9 == (ForElementType<float_const_*>)0x0) {
    FVar9 = (ForElementType<float_const_*>)&this->TempInputPointers;
  }
  iVar6 = (this->TempInputPointers).ArrayNum;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  FVar10 = (this->TempOutputPointers).AllocatorInstance.SecondaryData;
  local_88.InputAudio._12_4_ = uStack_a4;
  local_88.InputAudio.ArrayNum = iVar6;
  local_88.InputStride = 1;
  if (FVar10 == (ForElementType<float_*>)0x0) {
    FVar10 = (ForElementType<float_*>)&this->TempOutputPointers;
  }
  iVar6 = (this->TempOutputPointers).ArrayNum;
  local_88.InputAudio.DataPtr = (float **)FVar9;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  local_88.OutputAudio._12_4_ = uStack_a4;
  local_88.OutputAudio.ArrayNum = iVar6;
  local_88.OutputStride = 1;
  local_res20 = 0;
  local_b8 = 0;
  local_88.OutputAudio.DataPtr = (float **)FVar10;
  do {
    uVar16 = 0;
    if (lVar15 < 1) {
      ProcessAudioInternal(this,&local_88);
      iVar6 = local_88.OutNumOutputFramesProduced;
    }
    else {
      lVar21 = 0;
      local_a0 = 0;
      uVar20 = uVar16;
      do {
        uVar8 = (uint)uVar16;
        uVar23 = ~uVar8 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar19 = (param_1->AllocatorInstance).Data + lVar21;
        uVar18 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        iVar6 = *(int *)(pFVar3 + lVar21 + 0x14);
        if (*(int *)(pFVar3 + lVar21 + 0x18) < iVar6) {
          iVar6 = *(int *)(pFVar3 + lVar21 + 0x10) - iVar6;
        }
        else {
          iVar6 = -iVar6;
        }
        uVar11 = *(int *)(pFVar3 + lVar21 + 0x18) + iVar6;
        uVar18 = *(uint *)(pFVar19 + 0x14);
        lVar22 = *(longlong *)pFVar19;
        iVar6 = *(int *)(pFVar19 + 0x14);
        if (*(int *)(pFVar19 + 0x18) < iVar6) {
          iVar6 = *(int *)(pFVar19 + 0x10) - iVar6;
        }
        else {
          iVar6 = -iVar6;
        }
        uVar14 = *(int *)(pFVar19 + 0x18) + iVar6;
        if ((int)uVar11 < (int)uVar14) {
          uVar14 = uVar11;
        }
        uVar17 = *(int *)(pFVar19 + 0x10) - uVar18;
        if ((int)uVar14 < (int)uVar17) {
          uVar17 = uVar14;
        }
        if ((0x7ffffffe < uVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x406,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        if (((int)(uVar14 - uVar17) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        if (((int)uVar17 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        uVar11 = uVar17;
        if (((uVar8 != 0) && (uVar11 = local_88.NumInputFrames, local_88.NumInputFrames != uVar17))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Parameters.NumInputFrames == InputView.FirstBuffer.Num()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                                  ,0xda,L""), uVar11 = local_88.NumInputFrames, bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        local_88.NumInputFrames = uVar11;
        uVar11 = 0;
        if ((int)uVar8 < (this->TempInputPointers).ArrayNum) {
          uVar11 = uVar23;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        FVar9 = (this->TempInputPointers).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<float_const_*>)&this->TempInputPointers;
        if (FVar9 != (ForElementType<float_const_*>)0x0) {
          FVar12 = FVar9;
        }
        *(ulonglong *)((longlong)FVar12 + uVar20 * 8) = lVar22 + (ulonglong)uVar18 * 4;
        uVar18 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar19 = (param_2->AllocatorInstance).Data;
        lVar22 = *(longlong *)(pFVar19 + local_a0);
        uVar18 = 0;
        if ((int)uVar8 < (this->TempOutputPointers).ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        FVar10 = (this->TempOutputPointers).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<float_*>)&this->TempOutputPointers;
        if (FVar10 != (ForElementType<float_*>)0x0) {
          FVar13 = FVar10;
        }
        *(longlong *)((longlong)FVar13 + uVar20 * 8) = (longlong)local_res20 * 4 + lVar22;
        iVar7 = *(int *)(pFVar19 + local_a0 + 8) - local_res20;
        iVar6 = iVar7;
        if (((uVar8 != 0) && (iVar6 = local_88.NumOutputFrames, local_88.NumOutputFrames != iVar7))
           && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Parameters.NumOutputFrames == OutputChannel.Num() - NumFramesProduced"
                                  ,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                                  ,0xe7,L""), iVar6 = local_88.NumOutputFrames, bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        local_88.NumOutputFrames = iVar6;
        local_a0 = local_a0 + 0x10;
        uVar16 = (ulonglong)(uVar8 + 1);
        uVar20 = uVar20 + 1;
        lVar21 = lVar21 + 0x20;
      } while ((longlong)uVar20 < lVar15);
      ProcessAudioInternal(this,&local_88);
      uVar18 = 0;
      iVar6 = local_88.OutNumOutputFramesProduced;
      lVar21 = lVar15;
      lVar22 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar19 = (param_1->AllocatorInstance).Data;
        iVar7 = local_88.OutNumInputFramesConsumed;
        if ((0x7ffffffe < (uint)local_88.OutNumInputFramesConsumed) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x43e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar1 = *(int *)(pFVar19 + lVar22 + 0x14);
        iVar2 = *(int *)(pFVar19 + lVar22 + 0x18);
        if (iVar2 < iVar1) {
          uVar8 = (iVar2 - iVar1) + *(int *)(pFVar19 + lVar22 + 0x10);
        }
        else {
          uVar8 = iVar2 - iVar1;
        }
        if (iVar7 < (int)uVar8) {
          uVar8 = iVar7;
        }
        uVar18 = uVar18 + 1;
        LOCK();
        *(uint *)(pFVar19 + lVar22 + 0x14) =
             (uVar8 + *(int *)(pFVar19 + lVar22 + 0x14)) % *(uint *)(pFVar19 + lVar22 + 0x10);
        UNLOCK();
        lVar21 = lVar21 + -1;
        lVar22 = lVar22 + 0x20;
      } while (lVar21 != 0);
    }
    local_res20 = local_res20 + iVar6;
    if ((param_2->ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    if (local_res20 == *(int *)((param_2->AllocatorInstance).Data + 8)) {
      return local_res20;
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    pFVar19 = (param_1->AllocatorInstance).Data;
    iVar6 = *(int *)(pFVar19 + 0x14);
    if (*(int *)(pFVar19 + 0x18) < iVar6) {
      iVar6 = *(int *)(pFVar19 + 0x10) - iVar6;
    }
    else {
      iVar6 = -iVar6;
    }
    if (*(int *)(pFVar19 + 0x18) + iVar6 == 0) {
      return local_res20;
    }
    local_b8 = local_b8 + 1;
    if (1 < local_b8) {
      return local_res20;
    }
  } while( true );
}

// FRuntimeResampler @ 1444f2260

FRuntimeResampler * __thiscall
Audio::FRuntimeResampler::FRuntimeResampler(FRuntimeResampler *this,int param_1)

{
  this->CurrentInputFrameIndexFP = 0;
  this->CurrentFrameRatioFP = 0;
  this->TargetFrameRatioFP = 0;
  this->FrameRatioFrameDeltaFP = 0;
  this->NumFramesToInterpolate = 0;
  (this->PreviousFrame).AllocatorInstance.SecondaryData = (ForElementType<float>)0x0;
  (this->PreviousFrame).ArrayNum = 0;
  (this->PreviousFrame).ArrayMax = 2;
  (this->TempInputPointers).AllocatorInstance.SecondaryData = (ForElementType<float_const_*>)0x0;
  (this->TempInputPointers).ArrayNum = 0;
  (this->TempInputPointers).ArrayMax = 2;
  (this->TempOutputPointers).AllocatorInstance.SecondaryData = (ForElementType<float_*>)0x0;
  (this->TempOutputPointers).ArrayNum = 0;
  (this->TempOutputPointers).ArrayMax = 2;
  Reset(this,param_1);
  return this;
}

// DoDirectCopy @ 1444fa0a0

bool __thiscall
Audio::FRuntimeResampler::DoDirectCopy(FRuntimeResampler *this,ResamplingParameters *param_1)

{
  int iVar1;
  float **ppfVar2;
  bool bVar3;
  float **ppfVar4;
  float **ppfVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  
  iVar1 = (this->PreviousFrame).ArrayNum;
  lVar7 = (longlong)iVar1;
  ppfVar2 = (param_1->InputAudio).DataPtr;
  ppfVar5 = (param_1->OutputAudio).DataPtr;
  if ((param_1->InputStride == 1) && (param_1->OutputStride == 1)) {
    iVar6 = param_1->NumOutputFrames;
    if (param_1->NumInputFrames < param_1->NumOutputFrames) {
      iVar6 = param_1->NumInputFrames;
    }
    if (0 < iVar1) {
      lVar8 = (longlong)ppfVar2 - (longlong)ppfVar5;
      do {
        memcpy(*ppfVar5,*(void **)((longlong)ppfVar5 + lVar8),(longlong)(iVar6 * 4));
        ppfVar5 = ppfVar5 + 1;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    param_1->OutNumInputFramesConsumed = iVar6;
    bVar3 = true;
    param_1->OutNumOutputFramesProduced = iVar6;
  }
  else if ((param_1->InputStride == iVar1) && (param_1->OutputStride == iVar1)) {
    iVar6 = 0;
    if (0 < iVar1) {
      lVar8 = 0;
      ppfVar4 = ppfVar5;
      do {
        if ((*(float **)((longlong)ppfVar4 + ((longlong)ppfVar2 - (longlong)ppfVar5)) !=
             *ppfVar2 + iVar6) || (*ppfVar4 != *ppfVar5 + iVar6)) goto LAB_1444fa1ac;
        iVar6 = iVar6 + 1;
        lVar8 = lVar8 + 1;
        ppfVar4 = ppfVar4 + 1;
      } while (lVar8 < lVar7);
    }
    iVar6 = param_1->NumOutputFrames;
    if (param_1->NumInputFrames < param_1->NumOutputFrames) {
      iVar6 = param_1->NumInputFrames;
    }
    memcpy(*ppfVar5,*ppfVar2,(longlong)(iVar6 * iVar1 * 4));
    bVar3 = true;
    param_1->OutNumInputFramesConsumed = iVar6;
    param_1->OutNumOutputFramesProduced = iVar6;
  }
  else {
LAB_1444fa1ac:
    bVar3 = false;
  }
  return bVar3;
}

// GenericResamplingCore @ 1445031c0

void __thiscall
Audio::FRuntimeResampler::GenericResamplingCore
          (FRuntimeResampler *this,ResamplingParameters *param_1,int *param_2,uint *param_3,
          int param_4,int param_5)

{
  float **ppfVar1;
  int iVar2;
  float **ppfVar3;
  float **ppfVar4;
  longlong lVar5;
  float *pfVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  float **ppfVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  uint uVar24;
  float fVar25;
  
  fVar7 = __real_37800000;
  iVar2 = param_1->InputStride;
  iVar9 = param_1->OutputStride;
  lVar10 = (longlong)iVar9;
  ppfVar3 = (param_1->InputAudio).DataPtr;
  ppfVar4 = (param_1->OutputAudio).DataPtr;
  uVar16 = (ulonglong)param_4;
  uVar24 = *param_3;
  uVar17 = *param_2;
  lVar15 = (longlong)(this->PreviousFrame).ArrayNum;
  iVar12 = iVar9 * this->NumFramesToInterpolate + param_4;
  if (param_5 < iVar12) {
    iVar12 = param_5;
  }
  if ((longlong)uVar16 < (longlong)iVar12) {
    lVar19 = uVar16 * 4;
    uVar20 = uVar16;
    do {
      lVar14 = 0;
      iVar8 = ((int)(uVar17 + ((int)uVar17 >> 0x1f & 0xffffU)) >> 0x10) * iVar2;
      fVar25 = (float)(uVar17 & 0xffff) * fVar7;
      if (lVar15 < 4) {
        if (0 < lVar15) {
          lVar18 = (longlong)ppfVar3 - (longlong)ppfVar4;
          goto LAB_144503356;
        }
      }
      else {
        lVar22 = (longlong)(iVar8 + iVar2);
        ppfVar11 = ppfVar4 + 1;
        lVar21 = (longlong)iVar8;
        lVar18 = (longlong)ppfVar3 - (longlong)ppfVar4;
        lVar13 = (lVar15 - 4U >> 2) + 1;
        lVar14 = lVar13 * 4;
        do {
          lVar23 = *(longlong *)(lVar18 + -8 + (longlong)ppfVar11);
          *(float *)(lVar19 + (longlong)ppfVar11[-1]) =
               (*(float *)(lVar23 + lVar22 * 4) - *(float *)(lVar23 + lVar21 * 4)) * fVar25 +
               *(float *)(lVar23 + lVar21 * 4);
          lVar23 = *(longlong *)(lVar18 + (longlong)ppfVar11);
          (*ppfVar11)[uVar20] =
               (*(float *)(lVar23 + lVar22 * 4) - *(float *)(lVar23 + lVar21 * 4)) * fVar25 +
               *(float *)(lVar23 + lVar21 * 4);
          lVar23 = *(longlong *)(lVar18 + 8 + (longlong)ppfVar11);
          ppfVar11[1][uVar20] =
               (*(float *)(lVar23 + lVar22 * 4) - *(float *)(lVar23 + lVar21 * 4)) * fVar25 +
               *(float *)(lVar23 + lVar21 * 4);
          lVar23 = *(longlong *)(lVar18 + 0x10 + (longlong)ppfVar11);
          ppfVar1 = ppfVar11 + 2;
          ppfVar11 = ppfVar11 + 4;
          (*ppfVar1)[uVar20] =
               (*(float *)(lVar23 + lVar22 * 4) - *(float *)(lVar23 + lVar21 * 4)) * fVar25 +
               *(float *)(lVar23 + lVar21 * 4);
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
        if (lVar14 < lVar15) {
LAB_144503356:
          ppfVar11 = ppfVar4 + lVar14;
          lVar14 = lVar15 - lVar14;
          do {
            lVar13 = *(longlong *)((longlong)ppfVar11 + lVar18);
            pfVar6 = *ppfVar11;
            ppfVar11 = ppfVar11 + 1;
            pfVar6[uVar20] =
                 (*(float *)(lVar13 + (longlong)(iVar8 + iVar2) * 4) -
                 *(float *)(lVar13 + (longlong)iVar8 * 4)) * fVar25 +
                 *(float *)(lVar13 + (longlong)iVar8 * 4);
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
      lVar19 = lVar19 + lVar10 * 4;
      param_4 = (int)uVar16 + iVar9;
      uVar16 = (ulonglong)(uint)param_4;
      uVar20 = uVar20 + lVar10;
      uVar24 = uVar24 + this->FrameRatioFrameDeltaFP;
      uVar17 = uVar17 + uVar24;
    } while ((longlong)uVar20 < (longlong)iVar12);
  }
  lVar19 = (longlong)param_4;
  if (lVar19 < param_5) {
    lVar14 = lVar19 * 4;
    do {
      lVar18 = 0;
      iVar9 = ((int)(uVar17 + ((int)uVar17 >> 0x1f & 0xffffU)) >> 0x10) * iVar2;
      fVar25 = (float)(uVar17 & 0xffff) * fVar7;
      if (lVar15 < 4) {
        if (0 < lVar15) goto LAB_1445034f2;
      }
      else {
        lVar22 = (longlong)(iVar9 + iVar2);
        lVar13 = (longlong)ppfVar3 - (longlong)ppfVar4;
        lVar21 = (longlong)iVar9;
        lVar23 = (lVar15 - 4U >> 2) + 1;
        ppfVar11 = ppfVar4 + 1;
        lVar18 = lVar23 * 4;
        do {
          lVar5 = *(longlong *)((longlong)ppfVar11 + lVar13 + -8);
          *(float *)(lVar14 + (longlong)ppfVar11[-1]) =
               (*(float *)(lVar5 + lVar22 * 4) - *(float *)(lVar5 + lVar21 * 4)) * fVar25 +
               *(float *)(lVar5 + lVar21 * 4);
          lVar5 = *(longlong *)((longlong)ppfVar11 + lVar13);
          (*ppfVar11)[lVar19] =
               (*(float *)(lVar5 + lVar22 * 4) - *(float *)(lVar5 + lVar21 * 4)) * fVar25 +
               *(float *)(lVar5 + lVar21 * 4);
          lVar5 = *(longlong *)((longlong)ppfVar11 + lVar13 + 8);
          ppfVar11[1][lVar19] =
               (*(float *)(lVar5 + lVar22 * 4) - *(float *)(lVar5 + lVar21 * 4)) * fVar25 +
               *(float *)(lVar5 + lVar21 * 4);
          lVar5 = *(longlong *)((longlong)ppfVar11 + lVar13 + 0x10);
          ppfVar1 = ppfVar11 + 2;
          ppfVar11 = ppfVar11 + 4;
          (*ppfVar1)[lVar19] =
               (*(float *)(lVar5 + lVar22 * 4) - *(float *)(lVar5 + lVar21 * 4)) * fVar25 +
               *(float *)(lVar5 + lVar21 * 4);
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
        if (lVar18 < lVar15) {
LAB_1445034f2:
          ppfVar11 = ppfVar4 + lVar18;
          lVar18 = lVar15 - lVar18;
          do {
            lVar13 = *(longlong *)(((longlong)ppfVar3 - (longlong)ppfVar4) + (longlong)ppfVar11);
            pfVar6 = *ppfVar11;
            ppfVar11 = ppfVar11 + 1;
            pfVar6[lVar19] =
                 (*(float *)(lVar13 + (longlong)(iVar9 + iVar2) * 4) -
                 *(float *)(lVar13 + (longlong)iVar9 * 4)) * fVar25 +
                 *(float *)(lVar13 + (longlong)iVar9 * 4);
            lVar18 = lVar18 + -1;
          } while (lVar18 != 0);
        }
      }
      lVar14 = lVar14 + lVar10 * 4;
      lVar19 = lVar19 + lVar10;
      uVar17 = uVar17 + this->TargetFrameRatioFP;
    } while (lVar19 < param_5);
    *param_2 = uVar17;
    *param_3 = uVar24;
  }
  else {
    *param_2 = uVar17;
    *param_3 = uVar24;
  }
  return;
}

// GetNumInputFramesNeededToProduceOutputFrames @ 1445042f0

int __thiscall
Audio::FRuntimeResampler::GetNumInputFramesNeededToProduceOutputFrames
          (FRuntimeResampler *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  long64 lVar4;
  
  if (param_1 < 0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumOutputFrames >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                       ,0x7c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  else if (0 < param_1) {
    lVar4 = MapOutputFrameToInputFrameFP(this,param_1 + -1);
    return (int)(lVar4 + (ulonglong)(ushort)(lVar4 >> 0x3f) >> 0x10) + 2;
  }
  return 0;
}

// GetNumOutputFramesProducedByInputFrames @ 144504370

int __thiscall
Audio::FRuntimeResampler::GetNumOutputFramesProducedByInputFrames
          (FRuntimeResampler *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long64 lVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumInputFrames >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                       ,0x8a,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      iVar4 = (*pcVar1)();
      return iVar4;
    }
  }
  else if (0 < param_1) {
    lVar9 = (longlong)param_1 * 0x10000 + -0x10000;
    lVar7 = lVar9 - this->CurrentInputFrameIndexFP;
    if (lVar7 < 1) {
      return 0;
    }
    if (0 < this->NumFramesToInterpolate) {
      lVar6 = MapOutputFrameToInputFrameFP(this,this->NumFramesToInterpolate);
      if (lVar6 < lVar9) {
        return (int)(((lVar9 - lVar6) + -1) / (longlong)(ulonglong)this->TargetFrameRatioFP) +
               this->NumFramesToInterpolate + 1;
      }
      iVar8 = 0;
      iVar4 = this->NumFramesToInterpolate;
      if (1 < iVar4) {
        do {
          iVar5 = (iVar4 + iVar8) / 2;
          lVar6 = MapOutputFrameToInputFrameFP(this,iVar5);
          iVar2 = iVar5;
          if (lVar9 <= lVar6) {
            iVar2 = iVar8;
            iVar4 = iVar5;
          }
          iVar8 = iVar2;
        } while (iVar8 + 1 < iVar4);
      }
      return iVar8 + 1;
    }
    return (int)((lVar7 + -1) / (longlong)(ulonglong)this->TargetFrameRatioFP) + 1;
  }
  return 0;
}

// MapOutputFrameToInputFrameFP @ 144509950

long64 __thiscall
Audio::FRuntimeResampler::MapOutputFrameToInputFrameFP(FRuntimeResampler *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  long64 lVar4;
  longlong lVar5;
  
  lVar5 = (longlong)param_1;
  if (param_1 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("InOutputFrameIndex >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                       ,0x5c,
                       L"Frame index mapping function is only value for outputs frames greater than or equal to 0"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      lVar4 = (*pcVar2)();
      return lVar4;
    }
  }
  iVar1 = this->NumFramesToInterpolate;
  if (0 < iVar1) {
    if (param_1 < iVar1) {
      return (longlong)this->CurrentInputFrameIndexFP +
             (((lVar5 + 1) * lVar5) / 2) * (longlong)this->FrameRatioFrameDeltaFP +
             (ulonglong)this->CurrentFrameRatioFP * lVar5;
    }
    return (longlong)this->CurrentInputFrameIndexFP +
           (longlong)(param_1 - iVar1) * (ulonglong)this->TargetFrameRatioFP +
           (((longlong)(iVar1 + 1) * (longlong)iVar1) / 2) * (longlong)this->FrameRatioFrameDeltaFP
           + (ulonglong)this->CurrentFrameRatioFP * (longlong)iVar1;
  }
  return (longlong)this->CurrentInputFrameIndexFP + (ulonglong)this->TargetFrameRatioFP * lVar5;
}

// MonoResamplingCore @ 144509e90

void __thiscall
Audio::FRuntimeResampler::MonoResamplingCore
          (FRuntimeResampler *this,float *param_1,float *param_2,int *param_3,uint *param_4,
          int param_5,int param_6)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  
  fVar1 = __real_37800000;
  lVar10 = (longlong)param_5;
  iVar7 = this->NumFramesToInterpolate + param_5;
  uVar9 = *param_3;
  if (param_6 < iVar7) {
    iVar7 = param_6;
  }
  uVar4 = *param_4;
  lVar8 = (longlong)iVar7;
  if (lVar10 < lVar8) {
    if (3 < lVar8 - lVar10) {
      pfVar5 = param_2 + lVar10 + 2;
      lVar6 = ((lVar8 - lVar10) - 4U >> 2) + 1;
      param_5 = param_5 + (int)lVar6 * 4;
      lVar10 = lVar10 + lVar6 * 4;
      do {
        uVar2 = uVar9;
        if ((int)uVar9 < 0) {
          uVar2 = uVar9 + 0xffff;
        }
        pfVar5[-2] = (param_1[(longlong)((int)uVar2 >> 0x10) + 1] - param_1[(int)uVar2 >> 0x10]) *
                     (float)(uVar9 & 0xffff) * fVar1 + param_1[(int)uVar2 >> 0x10];
        iVar3 = uVar4 + this->FrameRatioFrameDeltaFP;
        uVar9 = uVar9 + iVar3;
        uVar4 = uVar9;
        if ((int)uVar9 < 0) {
          uVar4 = uVar9 + 0xffff;
        }
        pfVar5[-1] = (param_1[(longlong)((int)uVar4 >> 0x10) + 1] - param_1[(int)uVar4 >> 0x10]) *
                     (float)(uVar9 & 0xffff) * fVar1 + param_1[(int)uVar4 >> 0x10];
        iVar3 = iVar3 + this->FrameRatioFrameDeltaFP;
        uVar9 = uVar9 + iVar3;
        uVar4 = uVar9;
        if ((int)uVar9 < 0) {
          uVar4 = uVar9 + 0xffff;
        }
        *pfVar5 = (param_1[(longlong)((int)uVar4 >> 0x10) + 1] - param_1[(int)uVar4 >> 0x10]) *
                  (float)(uVar9 & 0xffff) * fVar1 + param_1[(int)uVar4 >> 0x10];
        iVar3 = iVar3 + this->FrameRatioFrameDeltaFP;
        uVar9 = uVar9 + iVar3;
        uVar4 = uVar9;
        if ((int)uVar9 < 0) {
          uVar4 = uVar9 + 0xffff;
        }
        pfVar5[1] = (param_1[(longlong)((int)uVar4 >> 0x10) + 1] - param_1[(int)uVar4 >> 0x10]) *
                    (float)(uVar9 & 0xffff) * fVar1 + param_1[(int)uVar4 >> 0x10];
        pfVar5 = pfVar5 + 4;
        uVar4 = iVar3 + this->FrameRatioFrameDeltaFP;
        uVar9 = uVar9 + uVar4;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (lVar8 <= lVar10) goto LAB_14450a097;
    }
    param_5 = param_5 + (iVar7 - (int)lVar10);
    do {
      uVar2 = uVar9;
      if ((int)uVar9 < 0) {
        uVar2 = uVar9 + 0xffff;
      }
      param_2[lVar10] =
           (param_1[(longlong)((int)uVar2 >> 0x10) + 1] - param_1[(int)uVar2 >> 0x10]) *
           (float)(uVar9 & 0xffff) * fVar1 + param_1[(int)uVar2 >> 0x10];
      lVar10 = lVar10 + 1;
      uVar4 = uVar4 + this->FrameRatioFrameDeltaFP;
      uVar9 = uVar9 + uVar4;
    } while (lVar10 < lVar8);
  }
LAB_14450a097:
  lVar8 = (longlong)param_6;
  lVar10 = (longlong)param_5;
  if (lVar10 < lVar8) {
    if (3 < lVar8 - lVar10) {
      pfVar5 = param_2 + lVar10 + 2;
      lVar6 = ((lVar8 - lVar10) - 4U >> 2) + 1;
      lVar10 = lVar10 + lVar6 * 4;
      do {
        uVar2 = uVar9;
        if ((int)uVar9 < 0) {
          uVar2 = uVar9 + 0xffff;
        }
        pfVar5[-2] = (param_1[(longlong)((int)uVar2 >> 0x10) + 1] - param_1[(int)uVar2 >> 0x10]) *
                     (float)(uVar9 & 0xffff) * fVar1 + param_1[(int)uVar2 >> 0x10];
        uVar9 = uVar9 + this->TargetFrameRatioFP;
        uVar2 = uVar9;
        if ((int)uVar9 < 0) {
          uVar2 = uVar9 + 0xffff;
        }
        pfVar5[-1] = (param_1[(longlong)((int)uVar2 >> 0x10) + 1] - param_1[(int)uVar2 >> 0x10]) *
                     (float)(uVar9 & 0xffff) * fVar1 + param_1[(int)uVar2 >> 0x10];
        uVar9 = uVar9 + this->TargetFrameRatioFP;
        uVar2 = uVar9;
        if ((int)uVar9 < 0) {
          uVar2 = uVar9 + 0xffff;
        }
        *pfVar5 = (param_1[(longlong)((int)uVar2 >> 0x10) + 1] - param_1[(int)uVar2 >> 0x10]) *
                  (float)(uVar9 & 0xffff) * fVar1 + param_1[(int)uVar2 >> 0x10];
        uVar9 = uVar9 + this->TargetFrameRatioFP;
        uVar2 = uVar9;
        if ((int)uVar9 < 0) {
          uVar2 = uVar9 + 0xffff;
        }
        pfVar5[1] = (param_1[(longlong)((int)uVar2 >> 0x10) + 1] - param_1[(int)uVar2 >> 0x10]) *
                    (float)(uVar9 & 0xffff) * fVar1 + param_1[(int)uVar2 >> 0x10];
        pfVar5 = pfVar5 + 4;
        uVar9 = uVar9 + this->TargetFrameRatioFP;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (lVar8 <= lVar10) goto LAB_14450a23a;
    }
    do {
      uVar2 = uVar9;
      if ((int)uVar9 < 0) {
        uVar2 = uVar9 + 0xffff;
      }
      param_2[lVar10] =
           (param_1[(longlong)((int)uVar2 >> 0x10) + 1] - param_1[(int)uVar2 >> 0x10]) *
           (float)(uVar9 & 0xffff) * fVar1 + param_1[(int)uVar2 >> 0x10];
      lVar10 = lVar10 + 1;
      uVar9 = uVar9 + this->TargetFrameRatioFP;
    } while (lVar10 < lVar8);
  }
LAB_14450a23a:
  *param_3 = uVar9;
  *param_4 = uVar4;
  return;
}

// ProcessAudioInBatches @ 144512680

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
Audio::FRuntimeResampler::ProcessAudioInBatches
          (FRuntimeResampler *this,ResamplingParameters *param_1,int param_2)

{
  longlong *plVar1;
  float **ppfVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  ForElementType<float_const_*> FVar8;
  ForElementType<float_*> FVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStackY_178 [32];
  ResamplingParameters local_130;
  FRuntimeResampler *local_f8;
  undefined4 local_ec;
  ForElementType<float_*> local_e8;
  int local_a0;
  int local_9c;
  ForElementType<float_const_*> local_98;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_178;
  lVar11 = (longlong)(this->PreviousFrame).ArrayNum;
  iVar13 = param_1->NumInputFrames;
  param_1->OutNumInputFramesConsumed = 0;
  param_1->OutNumOutputFramesProduced = 0;
  local_130.InputAudio.DataPtr = (param_1->InputAudio).DataPtr;
  local_130.InputAudio.ArrayNum = (param_1->InputAudio).ArrayNum;
  local_130.InputAudio._12_4_ = *(undefined4 *)&(param_1->InputAudio).field_0xc;
  local_50 = (param_1->InputAudio).ArrayNum;
  lVar10 = (longlong)local_50;
  ppfVar2 = (param_1->InputAudio).DataPtr;
  local_98.SecondaryData = (ForElementType<float_const_*>)0x0;
  local_130.InputStride = param_1->InputStride;
  local_130.NumInputFrames = param_1->NumInputFrames;
  local_130.OutputAudio.DataPtr = (param_1->OutputAudio).DataPtr;
  local_130.OutputAudio.ArrayNum = (param_1->OutputAudio).ArrayNum;
  local_130.OutputAudio._12_4_ = *(undefined4 *)&(param_1->OutputAudio).field_0xc;
  local_130.OutputStride = param_1->OutputStride;
  local_130.NumOutputFrames = param_1->NumOutputFrames;
  local_130.OutNumInputFramesConsumed = param_1->OutNumInputFramesConsumed;
  local_130.OutNumOutputFramesProduced = param_1->OutNumOutputFramesProduced;
  local_f8 = this;
  if (local_50 == 0) {
    local_4c = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float_const_*>_>
              (8,8,local_50,0,&local_98,local_50,&local_4c);
    FVar8 = (ForElementType<float_const_*>)&local_98;
    if (local_98.SecondaryData != (ForElementType<float_const_*>)0x0) {
      FVar8 = local_98.SecondaryData;
    }
    memcpy((void *)FVar8,ppfVar2,lVar10 << 3);
  }
  local_a0 = (param_1->OutputAudio).ArrayNum;
  lVar10 = (longlong)local_a0;
  ppfVar2 = (param_1->OutputAudio).DataPtr;
  local_e8.SecondaryData = (ForElementType<float_*>)0x0;
  if (local_a0 == 0) {
    local_9c = 8;
  }
  else {
    UE::Core::Private::
    ReallocForCopy<2,TSizedInlineAllocator<8,32,TSizedDefaultAllocator<32>_>::ForElementType<float_*>_>
              (8,8,local_a0,0,&local_e8,local_a0,&local_9c);
    FVar9 = (ForElementType<float_*>)&local_e8;
    if (local_e8.SecondaryData != (ForElementType<float_*>)0x0) {
      FVar9 = local_e8.SecondaryData;
    }
    memcpy((void *)FVar9,ppfVar2,lVar10 << 3);
  }
  iVar7 = local_50;
  FVar8 = (ForElementType<float_const_*>)&local_98;
  if (local_98.SecondaryData != (ForElementType<float_const_*>)0x0) {
    FVar8 = local_98.SecondaryData;
  }
  if ((local_50 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = local_a0;
  FVar9 = (ForElementType<float_*>)&local_e8;
  if (local_e8.SecondaryData != (ForElementType<float_*>)0x0) {
    FVar9 = local_e8.SecondaryData;
  }
  local_130.InputAudio._12_4_ = local_ec;
  local_130.InputAudio.ArrayNum = iVar7;
  local_130.InputAudio.DataPtr = (float **)FVar8;
  if ((local_a0 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  local_130.OutputAudio._12_4_ = local_ec;
  local_130.OutputAudio.ArrayNum = iVar4;
  local_130.OutputAudio.DataPtr = (float **)FVar9;
  do {
    do {
      if ((iVar13 < 1) || (local_130.NumOutputFrames < 1)) {
        if (local_e8.SecondaryData != (ForElementType<float_*>)0x0) {
          FMemory::Free((void *)local_e8.SecondaryData);
        }
        if (local_98.SecondaryData != (ForElementType<float_const_*>)0x0) {
          FMemory::Free((void *)local_98.SecondaryData);
        }
        return;
      }
      iVar7 = iVar13;
      if (param_2 < iVar13) {
        iVar7 = param_2;
      }
      local_130.NumInputFrames = iVar7;
      ProcessAudioInternal(local_f8,&local_130);
      uVar12 = 0;
      iVar13 = iVar13 - local_130.OutNumInputFramesConsumed;
      param_1->OutNumInputFramesConsumed =
           param_1->OutNumInputFramesConsumed + local_130.OutNumInputFramesConsumed;
      lVar10 = 0;
      param_1->OutNumOutputFramesProduced =
           param_1->OutNumOutputFramesProduced + local_130.OutNumOutputFramesProduced;
      local_130.NumOutputFrames = local_130.NumOutputFrames - local_130.OutNumOutputFramesProduced;
    } while (lVar11 < 1);
    while( true ) {
      iVar7 = local_130.OutNumInputFramesConsumed * param_1->InputStride;
      uVar6 = 0;
      if ((int)uVar12 < local_50) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar8 = (ForElementType<float_const_*>)&local_98;
      if (local_98.SecondaryData != (ForElementType<float_const_*>)0x0) {
        FVar8 = local_98.SecondaryData;
      }
      plVar1 = (longlong *)((longlong)FVar8 + lVar10 * 8);
      *plVar1 = *plVar1 + (longlong)iVar7 * 4;
      iVar7 = local_130.OutNumOutputFramesProduced * param_1->OutputStride;
      uVar6 = 0;
      if ((int)uVar12 < local_a0) {
        uVar6 = ~uVar12 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FVar9 = (ForElementType<float_*>)&local_e8;
      if (local_e8.SecondaryData != (ForElementType<float_*>)0x0) {
        FVar9 = local_e8.SecondaryData;
      }
      uVar12 = uVar12 + 1;
      plVar1 = (longlong *)((longlong)FVar9 + lVar10 * 8);
      *plVar1 = *plVar1 + (longlong)iVar7 * 4;
      lVar10 = lVar10 + 1;
      if (lVar11 <= lVar10) break;
    }
  } while( true );
}

// ProcessAudioInternal @ 1445129e0

void __thiscall
Audio::FRuntimeResampler::ProcessAudioInternal
          (FRuntimeResampler *this,ResamplingParameters *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float **ppfVar4;
  float *pfVar5;
  ForElementType<float> FVar6;
  float *pfVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  long64 lVar14;
  longlong lVar15;
  ForElementType<float> FVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  uint uVar22;
  float **ppfVar23;
  ulonglong uVar24;
  int iVar25;
  float **ppfVar26;
  longlong lVar27;
  ulonglong uVar28;
  uint uVar29;
  uint uVar30;
  float fVar31;
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_b8;
  int local_b4;
  longlong local_98;
  
  if (((((param_1->InputStride < 1) || (param_1->NumInputFrames < 0)) || (param_1->OutputStride < 1)
       ) || (param_1->NumOutputFrames < 0)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("Parameters.InputStride > 0 && Parameters.NumInputFrames >= 0 && Parameters.OutputStride > 0 && Parameters.NumOutputFrames >= 0"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                         ,0x122,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar12 = (this->PreviousFrame).ArrayNum;
  if ((((iVar12 < 1) || (iVar12 != (param_1->InputAudio).ArrayNum)) ||
      (iVar12 != (param_1->OutputAudio).ArrayNum)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumChannels > 0 && NumChannels == Parameters.InputAudio.Num() && NumChannels == Parameters.OutputAudio.Num()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                         ,0x125,L""), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  iVar11 = param_1->NumInputFrames;
  if (30000 < iVar11) {
    ProcessAudioInBatches(this,param_1,30000);
    return;
  }
  local_b4 = param_1->NumOutputFrames;
  if ((local_b4 < 1) || (iVar11 < 1)) {
    param_1->OutNumInputFramesConsumed = 0;
    param_1->OutNumOutputFramesProduced = 0;
    return;
  }
  ppfVar4 = (param_1->InputAudio).DataPtr;
  iVar2 = param_1->OutputStride;
  iVar3 = param_1->InputStride;
  uVar22 = this->CurrentInputFrameIndexFP;
  ppfVar26 = (param_1->OutputAudio).DataPtr;
  uVar29 = this->CurrentFrameRatioFP;
  uVar21 = 0;
  local_res18[0] = uVar22;
  local_res20[0] = uVar29;
  if (((uVar22 == 0) && (this->TargetFrameRatioFP == 0x10000)) &&
     (this->NumFramesToInterpolate == 0)) {
    iVar25 = (this->PreviousFrame).ArrayNum;
    lVar13 = (longlong)iVar25;
    if ((iVar3 == 1) && (iVar2 == 1)) {
      if (iVar11 < local_b4) {
        local_b4 = iVar11;
      }
      if (0 < lVar13) {
        lVar27 = (longlong)ppfVar4 - (longlong)ppfVar26;
        local_res18[0] = 0;
        do {
          memcpy(*ppfVar26,*(void **)((longlong)ppfVar26 + lVar27),(longlong)(local_b4 * 4));
          ppfVar26 = ppfVar26 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      param_1->OutNumInputFramesConsumed = local_b4;
      param_1->OutNumOutputFramesProduced = local_b4;
      return;
    }
    if ((iVar3 == iVar25) && (iVar2 == iVar25)) {
      if (0 < iVar25) {
        ppfVar23 = ppfVar26;
        uVar24 = uVar21;
        do {
          iVar19 = (int)uVar21;
          if ((*(float **)(((longlong)ppfVar4 - (longlong)ppfVar26) + (longlong)ppfVar23) !=
               *ppfVar4 + iVar19) || (*ppfVar23 != *ppfVar26 + iVar19)) goto LAB_144512c56;
          uVar21 = (ulonglong)(iVar19 + 1);
          uVar24 = uVar24 + 1;
          ppfVar23 = ppfVar23 + 1;
        } while ((longlong)uVar24 < lVar13);
      }
      if (iVar11 < local_b4) {
        local_b4 = iVar11;
      }
      memcpy(*ppfVar26,*ppfVar4,(longlong)(local_b4 * iVar25 * 4));
      param_1->OutNumInputFramesConsumed = local_b4;
      param_1->OutNumOutputFramesProduced = local_b4;
      return;
    }
  }
LAB_144512c56:
  if (((int)uVar22 < -0x10000) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InputFrameIndexFP >= -FPScale",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                         ,0x14b,L"Input frame index references discarded data"), bVar9)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar14 = MapOutputFrameToInputFrameFP(this,local_b4 + -1);
  iVar11 = param_1->NumInputFrames;
  if (iVar11 < (int)(lVar14 + (ulonglong)(ushort)(lVar14 >> 0x3f) >> 0x10) + 2) {
    local_b4 = 0;
    if (iVar11 < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("InNumInputFrames >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                         ,0x8a,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
    }
    else if (0 < iVar11) {
      lVar27 = (longlong)(iVar11 + -1) * 0x10000;
      lVar13 = lVar27 - this->CurrentInputFrameIndexFP;
      if (lVar13 < 1) {
        iVar11 = -1;
      }
      else if (this->NumFramesToInterpolate < 1) {
        iVar11 = (int)((lVar13 + -1) / (longlong)(ulonglong)this->TargetFrameRatioFP);
      }
      else {
        lVar14 = MapOutputFrameToInputFrameFP(this,this->NumFramesToInterpolate);
        iVar25 = this->NumFramesToInterpolate;
        if (lVar14 < lVar27) {
          iVar11 = (int)(((lVar27 - lVar14) + -1) / (longlong)(ulonglong)this->TargetFrameRatioFP) +
                   iVar25;
        }
        else {
          iVar11 = 0;
          if (1 < iVar25) {
            iVar11 = 0;
            do {
              iVar10 = (iVar25 + iVar11) / 2;
              lVar14 = MapOutputFrameToInputFrameFP(this,iVar10);
              iVar19 = iVar10;
              if (lVar27 <= lVar14) {
                iVar19 = iVar11;
                iVar25 = iVar10;
              }
              iVar11 = iVar19;
            } while (iVar11 + 1 < iVar25);
          }
        }
      }
      local_b4 = iVar11 + 1;
    }
  }
  fVar1 = __real_37800000;
  uVar21 = 0;
  iVar11 = this->NumFramesToInterpolate;
  uVar30 = 0;
  uVar17 = uVar30;
  if (0 < iVar11 - local_b4) {
    uVar17 = iVar11 - local_b4;
  }
  iVar25 = local_b4 * param_1->OutputStride;
  lVar13 = (longlong)iVar12;
  local_b8 = 0;
  uVar24 = uVar21;
  if ((int)uVar22 < 0) {
    local_98 = 0;
    do {
      if (iVar25 <= local_98) break;
      uVar20 = uVar22;
      uVar18 = (uint)uVar24;
      if (0 < lVar13) {
        uVar24 = uVar21;
        ppfVar23 = ppfVar26;
        uVar28 = uVar21;
        do {
          pfVar5 = *(float **)(((longlong)ppfVar4 - (longlong)ppfVar26) + (longlong)ppfVar23);
          uVar20 = (uint)uVar24;
          uVar29 = uVar30;
          if ((int)uVar20 < (this->PreviousFrame).ArrayNum) {
            uVar29 = ~uVar20 >> 0x1f;
          }
          if ((uVar29 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          FVar6 = (this->PreviousFrame).AllocatorInstance.SecondaryData;
          FVar16 = (ForElementType<float>)&this->PreviousFrame;
          if (FVar6 != (ForElementType<float>)0x0) {
            FVar16 = FVar6;
          }
          uVar24 = (ulonglong)(uVar20 + 1);
          lVar27 = uVar28 * 4;
          pfVar7 = *ppfVar23;
          ppfVar23 = ppfVar23 + 1;
          lVar15 = uVar28 * 4;
          uVar28 = uVar28 + 1;
          pfVar7[local_98] =
               (*pfVar5 - *(float *)((longlong)FVar16 + lVar27)) *
               (float)(int)(uVar22 + 0x10000) * fVar1 + *(float *)((longlong)FVar16 + lVar15);
          uVar20 = local_res18[0];
          uVar29 = local_res20[0];
          uVar18 = local_b8;
        } while ((longlong)uVar28 < lVar13);
      }
      local_b8 = uVar18 + iVar2;
      uVar24 = (ulonglong)local_b8;
      local_98 = local_98 + iVar2;
      iVar11 = this->NumFramesToInterpolate;
      if (0 < iVar11) {
        iVar11 = iVar11 + -1;
        this->NumFramesToInterpolate = iVar11;
        if (iVar11 == 0) {
          uVar29 = this->TargetFrameRatioFP;
          this->FrameRatioFrameDeltaFP = 0;
          local_res20[0] = uVar29;
        }
        else {
          uVar29 = uVar29 + this->FrameRatioFrameDeltaFP;
          local_res20[0] = uVar29;
        }
      }
      uVar22 = uVar20 + uVar29;
      local_res18[0] = uVar22;
    } while ((int)uVar22 < 0);
  }
  iVar19 = (int)uVar24;
  if (iVar12 == 1) {
    if ((iVar3 == 1) && (iVar2 == 1)) {
      MonoResamplingCore(this,*ppfVar4,*ppfVar26,(int *)local_res18,local_res20,iVar19,iVar25);
      goto LAB_144513165;
    }
LAB_144513149:
    GenericResamplingCore(this,param_1,(int *)local_res18,local_res20,iVar19,iVar25);
  }
  else {
    if (iVar12 != 2) goto LAB_144513149;
    if (iVar3 == 2) {
      if (iVar2 != 2) goto LAB_144513149;
      pfVar5 = *ppfVar26;
      lVar27 = (longlong)iVar19;
      pfVar7 = *ppfVar4;
      iVar12 = iVar19 + iVar11 * 2;
      if (iVar25 < iVar12) {
        iVar12 = iVar25;
      }
      if (lVar27 < iVar12) {
        iVar19 = iVar19 + ((iVar12 - iVar19) - 1U & 0xfffffffe) + 2;
        do {
          lVar15 = (longlong)(((int)(uVar22 + ((int)uVar22 >> 0x1f & 0xffffU)) >> 0x10) * 2);
          fVar31 = (float)(uVar22 & 0xffff) * fVar1;
          pfVar5[lVar27] = (pfVar7[lVar15 + 2] - pfVar7[lVar15]) * fVar31 + pfVar7[lVar15];
          pfVar5[lVar27 + 1] =
               (pfVar7[lVar15 + 3] - pfVar7[lVar15 + 1]) * fVar31 + pfVar7[lVar15 + 1];
          lVar27 = lVar27 + 2;
          uVar29 = uVar29 + this->FrameRatioFrameDeltaFP;
          uVar22 = uVar22 + uVar29;
        } while (lVar27 < iVar12);
      }
      local_res18[0] = uVar22;
      for (lVar27 = (longlong)iVar19; local_res20[0] = uVar29, lVar27 < iVar25; lVar27 = lVar27 + 2)
      {
        lVar15 = (longlong)
                 (((int)(local_res18[0] + ((int)local_res18[0] >> 0x1f & 0xffffU)) >> 0x10) * 2);
        fVar31 = (float)(local_res18[0] & 0xffff) * fVar1;
        pfVar5[lVar27] = (pfVar7[lVar15 + 2] - pfVar7[lVar15]) * fVar31 + pfVar7[lVar15];
        pfVar5[lVar27 + 1] = (pfVar7[lVar15 + 3] - pfVar7[lVar15 + 1]) * fVar31 + pfVar7[lVar15 + 1]
        ;
        local_res18[0] = local_res18[0] + this->TargetFrameRatioFP;
      }
    }
    else {
      if ((iVar3 != 1) || (iVar2 != 1)) goto LAB_144513149;
      StereoDeinterleavedResamplingCore
                (this,*ppfVar4,ppfVar4[1],*ppfVar26,ppfVar26[1],(int *)local_res18,local_res20,
                 iVar19,iVar25);
    }
  }
LAB_144513165:
  this->NumFramesToInterpolate = uVar17;
  uVar24 = uVar21;
  if (-1 < (int)local_res18[0]) {
    uVar22 = ((int)(local_res18[0] + ((int)local_res18[0] >> 0x1f & 0xffffU)) >> 0x10) + 1;
    uVar24 = (ulonglong)(uint)param_1->NumInputFrames;
    if ((int)uVar22 < param_1->NumInputFrames) {
      uVar24 = (ulonglong)uVar22;
    }
  }
  iVar12 = (int)uVar24;
  param_1->OutNumInputFramesConsumed = iVar12;
  param_1->OutNumOutputFramesProduced = local_b4;
  if (local_b4 < 1) {
    if (iVar12 == 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumOutputFrames > 0 || NumInputFramesConsumed > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                         ,0x18d,L"");
      if (bVar9) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      goto LAB_144513295;
    }
  }
  else if (iVar12 == 0) goto LAB_144513295;
  local_res18[0] = local_res18[0] + iVar12 * -0x10000;
  if (((int)local_res18[0] < 0) && (0 < lVar13)) {
    uVar24 = uVar21;
    do {
      uVar29 = (uint)uVar24;
      fVar1 = ppfVar4[uVar21][(iVar12 + -1) * iVar3];
      uVar22 = uVar30;
      if ((int)uVar29 < (this->PreviousFrame).ArrayNum) {
        uVar22 = ~uVar29 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      FVar6 = (this->PreviousFrame).AllocatorInstance.SecondaryData;
      FVar16 = (ForElementType<float>)&this->PreviousFrame;
      if (FVar6 != (ForElementType<float>)0x0) {
        FVar16 = FVar6;
      }
      uVar24 = (ulonglong)(uVar29 + 1);
      *(float *)((longlong)FVar16 + uVar21 * 4) = fVar1;
      uVar21 = uVar21 + 1;
    } while ((longlong)uVar21 < lVar13);
  }
LAB_144513295:
  if (this->NumFramesToInterpolate < 1) {
    if ((this->NumFramesToInterpolate != 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("NumFramesToInterpolate == 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                           ,0x1a1,L""), bVar9)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    this->CurrentFrameRatioFP = this->TargetFrameRatioFP;
    this->CurrentInputFrameIndexFP = local_res18[0];
    this->FrameRatioFrameDeltaFP = 0;
  }
  else {
    this->CurrentFrameRatioFP = local_res20[0];
    this->CurrentInputFrameIndexFP = local_res18[0];
  }
  return;
}

// ProcessCircularBuffer @ 144513c00

int __thiscall
Audio::FRuntimeResampler::ProcessCircularBuffer
          (FRuntimeResampler *this,
          TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArray<float,TAlignedHeapAllocator<16>_>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ForElementType<float_const_*> FVar9;
  ForElementType<float_*> FVar10;
  uint uVar11;
  ForElementType<float_const_*> FVar12;
  ForElementType<float_*> FVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  int iStackX_20;
  int iStack_b8;
  undefined4 uStack_a4;
  longlong lStack_a0;
  ResamplingParameters RStack_88;
  
  iVar6 = (this->PreviousFrame).ArrayNum;
  lVar15 = (longlong)iVar6;
  if (((param_1->ArrayNum != iVar6) || (param_2->ArrayNum != iVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudio.Num() == NumChannels && OutAudio.Num() == NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                         ,0xc1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  FVar9 = (this->TempInputPointers).AllocatorInstance.SecondaryData;
  RStack_88.NumInputFrames = 0xffffffff;
  RStack_88.NumOutputFrames = -1;
  RStack_88.OutNumInputFramesConsumed = 0;
  RStack_88.OutNumOutputFramesProduced = 0;
  if (FVar9 == (ForElementType<float_const_*>)0x0) {
    FVar9 = (ForElementType<float_const_*>)&this->TempInputPointers;
  }
  iVar6 = (this->TempInputPointers).ArrayNum;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  FVar10 = (this->TempOutputPointers).AllocatorInstance.SecondaryData;
  RStack_88.InputAudio._12_4_ = uStack_a4;
  RStack_88.InputAudio.ArrayNum = iVar6;
  RStack_88.InputStride = 1;
  if (FVar10 == (ForElementType<float_*>)0x0) {
    FVar10 = (ForElementType<float_*>)&this->TempOutputPointers;
  }
  iVar6 = (this->TempOutputPointers).ArrayNum;
  RStack_88.InputAudio.DataPtr = (float **)FVar9;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  RStack_88.OutputAudio._12_4_ = uStack_a4;
  RStack_88.OutputAudio.ArrayNum = iVar6;
  RStack_88.OutputStride = 1;
  iStackX_20 = 0;
  iStack_b8 = 0;
  RStack_88.OutputAudio.DataPtr = (float **)FVar10;
  do {
    uVar16 = 0;
    if (lVar15 < 1) {
      ProcessAudioInternal(this,&RStack_88);
      iVar6 = RStack_88.OutNumOutputFramesProduced;
    }
    else {
      lVar21 = 0;
      lStack_a0 = 0;
      uVar20 = uVar16;
      do {
        uVar8 = (uint)uVar16;
        uVar23 = ~uVar8 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar19 = (param_1->AllocatorInstance).Data + lVar21;
        uVar18 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        iVar6 = *(int *)(pFVar3 + lVar21 + 0x14);
        if (*(int *)(pFVar3 + lVar21 + 0x18) < iVar6) {
          iVar6 = *(int *)(pFVar3 + lVar21 + 0x10) - iVar6;
        }
        else {
          iVar6 = -iVar6;
        }
        uVar11 = *(int *)(pFVar3 + lVar21 + 0x18) + iVar6;
        uVar18 = *(uint *)(pFVar19 + 0x14);
        lVar22 = *(longlong *)pFVar19;
        iVar6 = *(int *)(pFVar19 + 0x14);
        if (*(int *)(pFVar19 + 0x18) < iVar6) {
          iVar6 = *(int *)(pFVar19 + 0x10) - iVar6;
        }
        else {
          iVar6 = -iVar6;
        }
        uVar14 = *(int *)(pFVar19 + 0x18) + iVar6;
        if ((int)uVar11 < (int)uVar14) {
          uVar14 = uVar11;
        }
        uVar17 = *(int *)(pFVar19 + 0x10) - uVar18;
        if ((int)uVar14 < (int)uVar17) {
          uVar17 = uVar14;
        }
        if ((0x7ffffffe < uVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x406,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        if (((int)(uVar14 - uVar17) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        if (((int)uVar17 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        uVar11 = uVar17;
        if (((uVar8 != 0) && (uVar11 = RStack_88.NumInputFrames, RStack_88.NumInputFrames != uVar17)
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Parameters.NumInputFrames == InputView.FirstBuffer.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                                     ,0xda,L""), uVar11 = RStack_88.NumInputFrames, bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        RStack_88.NumInputFrames = uVar11;
        uVar11 = 0;
        if ((int)uVar8 < (this->TempInputPointers).ArrayNum) {
          uVar11 = uVar23;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        FVar9 = (this->TempInputPointers).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<float_const_*>)&this->TempInputPointers;
        if (FVar9 != (ForElementType<float_const_*>)0x0) {
          FVar12 = FVar9;
        }
        *(ulonglong *)((longlong)FVar12 + uVar20 * 8) = lVar22 + (ulonglong)uVar18 * 4;
        uVar18 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar19 = (param_2->AllocatorInstance).Data;
        lVar22 = *(longlong *)(pFVar19 + lStack_a0);
        uVar18 = 0;
        if ((int)uVar8 < (this->TempOutputPointers).ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        FVar10 = (this->TempOutputPointers).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<float_*>)&this->TempOutputPointers;
        if (FVar10 != (ForElementType<float_*>)0x0) {
          FVar13 = FVar10;
        }
        *(longlong *)((longlong)FVar13 + uVar20 * 8) = (longlong)iStackX_20 * 4 + lVar22;
        iVar7 = *(int *)(pFVar19 + lStack_a0 + 8) - iStackX_20;
        iVar6 = iVar7;
        if (((uVar8 != 0) && (iVar6 = RStack_88.NumOutputFrames, RStack_88.NumOutputFrames != iVar7)
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Parameters.NumOutputFrames == OutputChannel.Num() - NumFramesProduced"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                                     ,0xe7,L""), iVar6 = RStack_88.NumOutputFrames, bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        RStack_88.NumOutputFrames = iVar6;
        lStack_a0 = lStack_a0 + 0x10;
        uVar16 = (ulonglong)(uVar8 + 1);
        uVar20 = uVar20 + 1;
        lVar21 = lVar21 + 0x20;
      } while ((longlong)uVar20 < lVar15);
      ProcessAudioInternal(this,&RStack_88);
      uVar18 = 0;
      iVar6 = RStack_88.OutNumOutputFramesProduced;
      lVar21 = lVar15;
      lVar22 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar19 = (param_1->AllocatorInstance).Data;
        iVar7 = RStack_88.OutNumInputFramesConsumed;
        if ((0x7ffffffe < (uint)RStack_88.OutNumInputFramesConsumed) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x43e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar1 = *(int *)(pFVar19 + lVar22 + 0x14);
        iVar2 = *(int *)(pFVar19 + lVar22 + 0x18);
        if (iVar2 < iVar1) {
          uVar8 = (iVar2 - iVar1) + *(int *)(pFVar19 + lVar22 + 0x10);
        }
        else {
          uVar8 = iVar2 - iVar1;
        }
        if (iVar7 < (int)uVar8) {
          uVar8 = iVar7;
        }
        uVar18 = uVar18 + 1;
        LOCK();
        *(uint *)(pFVar19 + lVar22 + 0x14) =
             (uVar8 + *(int *)(pFVar19 + lVar22 + 0x14)) % *(uint *)(pFVar19 + lVar22 + 0x10);
        UNLOCK();
        lVar21 = lVar21 + -1;
        lVar22 = lVar22 + 0x20;
      } while (lVar21 != 0);
    }
    iStackX_20 = iStackX_20 + iVar6;
    if ((param_2->ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    if (iStackX_20 == *(int *)((param_2->AllocatorInstance).Data + 8)) {
      return iStackX_20;
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    pFVar19 = (param_1->AllocatorInstance).Data;
    iVar6 = *(int *)(pFVar19 + 0x14);
    if (*(int *)(pFVar19 + 0x18) < iVar6) {
      iVar6 = *(int *)(pFVar19 + 0x10) - iVar6;
    }
    else {
      iVar6 = -iVar6;
    }
    if (*(int *)(pFVar19 + 0x18) + iVar6 == 0) {
      return iStackX_20;
    }
    iStack_b8 = iStack_b8 + 1;
    if (1 < iStack_b8) {
      return iStackX_20;
    }
  } while( true );
}

// ProcessCircularBuffer @ 144513c10

int __thiscall
Audio::FRuntimeResampler::ProcessCircularBuffer
          (FRuntimeResampler *this,
          TArray<Audio::TCircularAudioBuffer<float,16>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TArrayView<float,int>,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ForElementType<float_const_*> FVar9;
  ForElementType<float_*> FVar10;
  uint uVar11;
  ForElementType<float_const_*> FVar12;
  ForElementType<float_*> FVar13;
  uint uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  uint uVar23;
  int iStackX_20;
  int iStack_b8;
  undefined4 uStack_a4;
  longlong lStack_a0;
  ResamplingParameters RStack_88;
  
  iVar6 = (this->PreviousFrame).ArrayNum;
  lVar15 = (longlong)iVar6;
  if (((param_1->ArrayNum != iVar6) || (param_2->ArrayNum != iVar6)) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InAudio.Num() == NumChannels && OutAudio.Num() == NumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                         ,0xc1,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  FVar9 = (this->TempInputPointers).AllocatorInstance.SecondaryData;
  RStack_88.NumInputFrames = 0xffffffff;
  RStack_88.NumOutputFrames = -1;
  RStack_88.OutNumInputFramesConsumed = 0;
  RStack_88.OutNumOutputFramesProduced = 0;
  if (FVar9 == (ForElementType<float_const_*>)0x0) {
    FVar9 = (ForElementType<float_const_*>)&this->TempInputPointers;
  }
  iVar6 = (this->TempInputPointers).ArrayNum;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  FVar10 = (this->TempOutputPointers).AllocatorInstance.SecondaryData;
  RStack_88.InputAudio._12_4_ = uStack_a4;
  RStack_88.InputAudio.ArrayNum = iVar6;
  RStack_88.InputStride = 1;
  if (FVar10 == (ForElementType<float_*>)0x0) {
    FVar10 = (ForElementType<float_*>)&this->TempOutputPointers;
  }
  iVar6 = (this->TempOutputPointers).ArrayNum;
  RStack_88.InputAudio.DataPtr = (float **)FVar9;
  if ((iVar6 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    iVar6 = (*pcVar4)();
    return iVar6;
  }
  RStack_88.OutputAudio._12_4_ = uStack_a4;
  RStack_88.OutputAudio.ArrayNum = iVar6;
  RStack_88.OutputStride = 1;
  iStackX_20 = 0;
  iStack_b8 = 0;
  RStack_88.OutputAudio.DataPtr = (float **)FVar10;
  do {
    uVar16 = 0;
    if (lVar15 < 1) {
      ProcessAudioInternal(this,&RStack_88);
      iVar6 = RStack_88.OutNumOutputFramesProduced;
    }
    else {
      lVar21 = 0;
      lStack_a0 = 0;
      uVar20 = uVar16;
      do {
        uVar8 = (uint)uVar16;
        uVar23 = ~uVar8 >> 0x1f;
        uVar18 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar19 = (param_1->AllocatorInstance).Data + lVar21;
        uVar18 = 0;
        if ((int)uVar8 < param_1->ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar3 = (param_1->AllocatorInstance).Data;
        iVar6 = *(int *)(pFVar3 + lVar21 + 0x14);
        if (*(int *)(pFVar3 + lVar21 + 0x18) < iVar6) {
          iVar6 = *(int *)(pFVar3 + lVar21 + 0x10) - iVar6;
        }
        else {
          iVar6 = -iVar6;
        }
        uVar11 = *(int *)(pFVar3 + lVar21 + 0x18) + iVar6;
        uVar18 = *(uint *)(pFVar19 + 0x14);
        lVar22 = *(longlong *)pFVar19;
        iVar6 = *(int *)(pFVar19 + 0x14);
        if (*(int *)(pFVar19 + 0x18) < iVar6) {
          iVar6 = *(int *)(pFVar19 + 0x10) - iVar6;
        }
        else {
          iVar6 = -iVar6;
        }
        uVar14 = *(int *)(pFVar19 + 0x18) + iVar6;
        if ((int)uVar11 < (int)uVar14) {
          uVar14 = uVar11;
        }
        uVar17 = *(int *)(pFVar19 + 0x10) - uVar18;
        if ((int)uVar14 < (int)uVar17) {
          uVar17 = uVar14;
        }
        if ((0x7ffffffe < uVar11) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x406,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        if (((int)(uVar14 - uVar17) < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        if (((int)uVar17 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("ArrayNum >= 0",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0xfe,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        uVar11 = uVar17;
        if (((uVar8 != 0) && (uVar11 = RStack_88.NumInputFrames, RStack_88.NumInputFrames != uVar17)
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Parameters.NumInputFrames == InputView.FirstBuffer.Num()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                                     ,0xda,L""), uVar11 = RStack_88.NumInputFrames, bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        RStack_88.NumInputFrames = uVar11;
        uVar11 = 0;
        if ((int)uVar8 < (this->TempInputPointers).ArrayNum) {
          uVar11 = uVar23;
        }
        if ((uVar11 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        FVar9 = (this->TempInputPointers).AllocatorInstance.SecondaryData;
        FVar12 = (ForElementType<float_const_*>)&this->TempInputPointers;
        if (FVar9 != (ForElementType<float_const_*>)0x0) {
          FVar12 = FVar9;
        }
        *(ulonglong *)((longlong)FVar12 + uVar20 * 8) = lVar22 + (ulonglong)uVar18 * 4;
        uVar18 = 0;
        if ((int)uVar8 < param_2->ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar19 = (param_2->AllocatorInstance).Data;
        lVar22 = *(longlong *)(pFVar19 + lStack_a0);
        uVar18 = 0;
        if ((int)uVar8 < (this->TempOutputPointers).ArrayNum) {
          uVar18 = uVar23;
        }
        if ((uVar18 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        FVar10 = (this->TempOutputPointers).AllocatorInstance.SecondaryData;
        FVar13 = (ForElementType<float_*>)&this->TempOutputPointers;
        if (FVar10 != (ForElementType<float_*>)0x0) {
          FVar13 = FVar10;
        }
        *(longlong *)((longlong)FVar13 + uVar20 * 8) = (longlong)iStackX_20 * 4 + lVar22;
        iVar7 = *(int *)(pFVar19 + lStack_a0 + 8) - iStackX_20;
        iVar6 = iVar7;
        if (((uVar8 != 0) && (iVar6 = RStack_88.NumOutputFrames, RStack_88.NumOutputFrames != iVar7)
            ) && (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Parameters.NumOutputFrames == OutputChannel.Num() - NumFramesProduced"
                                     ,
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                                     ,0xe7,L""), iVar6 = RStack_88.NumOutputFrames, bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        RStack_88.NumOutputFrames = iVar6;
        lStack_a0 = lStack_a0 + 0x10;
        uVar16 = (ulonglong)(uVar8 + 1);
        uVar20 = uVar20 + 1;
        lVar21 = lVar21 + 0x20;
      } while ((longlong)uVar20 < lVar15);
      ProcessAudioInternal(this,&RStack_88);
      uVar18 = 0;
      iVar6 = RStack_88.OutNumOutputFramesProduced;
      lVar21 = lVar15;
      lVar22 = 0;
      do {
        uVar8 = 0;
        if ((int)uVar18 < param_1->ArrayNum) {
          uVar8 = ~uVar18 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        pFVar19 = (param_1->AllocatorInstance).Data;
        iVar7 = RStack_88.OutNumInputFramesConsumed;
        if ((0x7ffffffe < (uint)RStack_88.OutNumInputFramesConsumed) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("NumSamples < ((uint32)TNumericLimits<int32>::Max())",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\Dsp.h"
                               ,0x43e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          iVar6 = (*pcVar4)();
          return iVar6;
        }
        iVar1 = *(int *)(pFVar19 + lVar22 + 0x14);
        iVar2 = *(int *)(pFVar19 + lVar22 + 0x18);
        if (iVar2 < iVar1) {
          uVar8 = (iVar2 - iVar1) + *(int *)(pFVar19 + lVar22 + 0x10);
        }
        else {
          uVar8 = iVar2 - iVar1;
        }
        if (iVar7 < (int)uVar8) {
          uVar8 = iVar7;
        }
        uVar18 = uVar18 + 1;
        LOCK();
        *(uint *)(pFVar19 + lVar22 + 0x14) =
             (uVar8 + *(int *)(pFVar19 + lVar22 + 0x14)) % *(uint *)(pFVar19 + lVar22 + 0x10);
        UNLOCK();
        lVar21 = lVar21 + -1;
        lVar22 = lVar22 + 0x20;
      } while (lVar21 != 0);
    }
    iStackX_20 = iStackX_20 + iVar6;
    if ((param_2->ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    if (iStackX_20 == *(int *)((param_2->AllocatorInstance).Data + 8)) {
      return iStackX_20;
    }
    if ((param_1->ArrayNum < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      iVar6 = (*pcVar4)();
      return iVar6;
    }
    pFVar19 = (param_1->AllocatorInstance).Data;
    iVar6 = *(int *)(pFVar19 + 0x14);
    if (*(int *)(pFVar19 + 0x18) < iVar6) {
      iVar6 = *(int *)(pFVar19 + 0x10) - iVar6;
    }
    else {
      iVar6 = -iVar6;
    }
    if (*(int *)(pFVar19 + 0x18) + iVar6 == 0) {
      return iStackX_20;
    }
    iStack_b8 = iStack_b8 + 1;
    if (1 < iStack_b8) {
      return iStackX_20;
    }
  } while( true );
}

// ProcessInterleaved @ 144513cc0

void __thiscall
Audio::FRuntimeResampler::ProcessInterleaved
          (FRuntimeResampler *this,TArrayView<float_const_,int> *param_1,
          TArrayView<float,int> *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  ForElementType<float_const_*> FVar8;
  ForElementType<float_*> FVar9;
  ForElementType<float_const_*> FVar10;
  ForElementType<float_*> FVar11;
  uint uVar12;
  longlong lVar13;
  ResamplingParameters local_80;
  
  iVar1 = (this->PreviousFrame).ArrayNum;
  uVar12 = 0;
  if (0 < iVar1) {
    lVar13 = 0;
    do {
      pfVar4 = param_1->DataPtr;
      uVar7 = 0;
      if ((int)uVar12 < (this->TempInputPointers).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar10 = (this->TempInputPointers).AllocatorInstance.SecondaryData;
      FVar8 = (ForElementType<float_const_*>)&this->TempInputPointers;
      if (FVar10 != (ForElementType<float_const_*>)0x0) {
        FVar8 = FVar10;
      }
      *(float **)((longlong)FVar8 + lVar13 * 8) = pfVar4 + (int)uVar12;
      pfVar4 = param_2->DataPtr;
      uVar7 = 0;
      if ((int)uVar12 < (this->TempOutputPointers).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      FVar11 = (this->TempOutputPointers).AllocatorInstance.SecondaryData;
      FVar9 = (ForElementType<float_*>)&this->TempOutputPointers;
      if (FVar11 != (ForElementType<float_*>)0x0) {
        FVar9 = FVar11;
      }
      uVar12 = uVar12 + 1;
      *(float **)((longlong)FVar9 + lVar13 * 8) = pfVar4 + lVar13;
      lVar13 = lVar13 + 1;
    } while (lVar13 < iVar1);
  }
  FVar10 = (this->TempInputPointers).AllocatorInstance.SecondaryData;
  iVar2 = (this->TempInputPointers).ArrayNum;
  local_80.OutNumInputFramesConsumed = 0;
  local_80.OutNumOutputFramesProduced = 0;
  if (FVar10 == (ForElementType<float_const_*>)0x0) {
    FVar10 = (ForElementType<float_const_*>)&this->TempInputPointers;
  }
  if ((iVar2 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar11 = (this->TempOutputPointers).AllocatorInstance.SecondaryData;
  local_80.NumInputFrames = param_1->ArrayNum / iVar1;
  iVar3 = (this->TempOutputPointers).ArrayNum;
  if (FVar11 == (ForElementType<float_*>)0x0) {
    FVar11 = (ForElementType<float_*>)&this->TempOutputPointers;
  }
  local_80.InputAudio.DataPtr = (float **)FVar10;
  local_80.InputAudio.ArrayNum = iVar2;
  local_80.InputStride = iVar1;
  if ((iVar3 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_80.NumOutputFrames = param_2->ArrayNum / iVar1;
  local_80.OutputAudio.DataPtr = (float **)FVar11;
  local_80.OutputAudio.ArrayNum = iVar3;
  local_80.OutputStride = iVar1;
  ProcessAudioInternal(this,&local_80);
  *param_3 = local_80.OutNumInputFramesConsumed;
  *param_4 = local_80.OutNumOutputFramesProduced;
  return;
}

// Reset @ 144517660

void __thiscall Audio::FRuntimeResampler::Reset(FRuntimeResampler *this,int param_1)

{
  TArray<float,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  TArray<float_const_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<float_*,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  size_t _Size;
  code *pcVar6;
  bool bVar7;
  int iVar8;
  ForElementType<float> FVar9;
  ForElementType<float_const_*> FVar10;
  ForElementType<float_*> FVar11;
  
  if (param_1 < 1) {
    bVar7 = ::FDebug::CheckVerifyFailedImpl2
                      ("InNumChannels > 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                       ,0x1b,L"");
    if (bVar7) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  this->CurrentFrameRatioFP = 0x10000;
  pTVar1 = &this->PreviousFrame;
  this->CurrentInputFrameIndexFP = 0;
  this->TargetFrameRatioFP = 0x10000;
  this->FrameRatioFrameDeltaFP = 0;
  piVar2 = &(this->PreviousFrame).ArrayMax;
  this->NumFramesToInterpolate = 0;
  piVar3 = &(this->PreviousFrame).ArrayNum;
  *piVar3 = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
              (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar8 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<float>_>
                    (4,4,param_1,&pTVar1->AllocatorInstance,piVar3,piVar2);
  FVar9 = (this->PreviousFrame).AllocatorInstance.SecondaryData;
  if (FVar9 == (ForElementType<float>)0x0) {
    FVar9 = (ForElementType<float>)pTVar1;
  }
  memset((void *)((longlong)FVar9 + (longlong)iVar8 * 4),0,(longlong)param_1 * 4);
  pTVar4 = &this->TempInputPointers;
  piVar2 = &(this->TempInputPointers).ArrayMax;
  (this->TempInputPointers).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<float_const_*>_>
              (8,8,0,&pTVar4->AllocatorInstance,0,piVar2);
  }
  iVar8 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<float_const_*>_>
                    (8,8,param_1,&pTVar4->AllocatorInstance,&(this->TempInputPointers).ArrayNum,
                     piVar2);
  FVar10 = (this->TempInputPointers).AllocatorInstance.SecondaryData;
  _Size = (longlong)param_1 * 8;
  if (FVar10 == (ForElementType<float_const_*>)0x0) {
    FVar10 = (ForElementType<float_const_*>)pTVar4;
  }
  memset((void *)((longlong)FVar10 + (longlong)iVar8 * 8),0,_Size);
  pTVar5 = &this->TempOutputPointers;
  piVar2 = &(this->TempOutputPointers).ArrayMax;
  (this->TempOutputPointers).ArrayNum = 0;
  if (*piVar2 != 0) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<float_*>_>
              (8,8,0,&pTVar5->AllocatorInstance,0,piVar2);
  }
  iVar8 = UE::Core::Private::
          ReallocGrow<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<float_*>_>
                    (8,8,param_1,&pTVar5->AllocatorInstance,&(this->TempOutputPointers).ArrayNum,
                     piVar2);
  FVar11 = (this->TempOutputPointers).AllocatorInstance.SecondaryData;
  if (FVar11 == (ForElementType<float_*>)0x0) {
    FVar11 = (ForElementType<float_*>)pTVar5;
  }
  memset((void *)((longlong)FVar11 + (longlong)iVar8 * 8),0,_Size);
  return;
}

// SetFrameRatio @ 14451a060

void __thiscall
Audio::FRuntimeResampler::SetFrameRatio(FRuntimeResampler *this,float param_1,int param_2)

{
  ulonglong uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float local_res10 [4];
  float *local_res20;
  
  local_res10[0] = param_1;
  if ((param_1 < __real_3c23d70a) || (__real_42c80000 < param_1)) {
    local_res20 = local_res10;
    bVar3 = `Audio::FRuntimeResampler::SetFrameRatio'::__l3::<lambda_1>::operator()(&local_res20);
    if (!bVar3) {
      return;
    }
  }
  uVar8 = (int)ROUND(local_res10[0] * __real_47800000 + local_res10[0] * __real_47800000 +
                     __real_3f000000) >> 1;
  if ((param_2 < 1) || (uVar8 == this->CurrentFrameRatioFP)) {
    this->CurrentFrameRatioFP = uVar8;
    this->FrameRatioFrameDeltaFP = 0;
    this->NumFramesToInterpolate = 0;
    this->TargetFrameRatioFP = uVar8;
  }
  else {
    uVar4 = uVar8 - this->CurrentFrameRatioFP;
    this->TargetFrameRatioFP = uVar8;
    uVar7 = -uVar4;
    if ((int)uVar7 < 0) {
      uVar7 = uVar4;
    }
    uVar1 = (ulonglong)(param_2 + -1 + uVar7) / (ulonglong)(uint)param_2;
    iVar5 = (int)uVar1;
    if ((iVar5 == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("FrameDeltaAbsolute > 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                           ,0x44,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar6 = (int)(uVar7 / uVar1);
    this->NumFramesToInterpolate = iVar6;
    if (iVar6 < 1) {
      this->CurrentFrameRatioFP = uVar8;
      this->TargetFrameRatioFP = uVar8;
      this->FrameRatioFrameDeltaFP = 0;
      if ((iVar6 != 0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("NumFramesToInterpolate == 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\RuntimeResampler.cpp"
                             ,0x54,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      this->FrameRatioFrameDeltaFP = iVar5;
      if (this->TargetFrameRatioFP < this->CurrentFrameRatioFP) {
        this->FrameRatioFrameDeltaFP = -iVar5;
        return;
      }
    }
  }
  return;
}

// StereoDeinterleavedResamplingCore @ 14451e320

void __thiscall
Audio::FRuntimeResampler::StereoDeinterleavedResamplingCore
          (FRuntimeResampler *this,float *param_1,float *param_2,float *param_3,float *param_4,
          int *param_5,uint *param_6,int param_7,int param_8)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  float *pfVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  
  fVar1 = __real_37800000;
  lVar11 = (longlong)param_7;
  uVar10 = *param_5;
  iVar9 = this->NumFramesToInterpolate + param_7;
  uVar3 = *param_6;
  if (param_8 < iVar9) {
    iVar9 = param_8;
  }
  lVar8 = (longlong)iVar9;
  if (lVar11 < lVar8) {
    if (3 < lVar8 - lVar11) {
      lVar7 = (longlong)param_3 - (longlong)param_4;
      lVar6 = ((lVar8 - lVar11) - 4U >> 2) + 1;
      pfVar5 = param_4 + lVar11 + 1;
      param_7 = param_7 + (int)lVar6 * 4;
      lVar11 = lVar11 + lVar6 * 4;
      do {
        fVar12 = (float)(uVar10 & 0xffff) * fVar1;
        uVar2 = uVar10;
        if ((int)uVar10 < 0) {
          uVar2 = uVar10 + 0xffff;
        }
        lVar4 = (longlong)((int)uVar2 >> 0x10);
        *(float *)((longlong)pfVar5 + lVar7 + -4) =
             (param_1[lVar4 + 1] - param_1[lVar4]) * fVar12 + param_1[lVar4];
        pfVar5[-1] = (param_2[lVar4 + 1] - param_2[lVar4]) * fVar12 + param_2[lVar4];
        iVar9 = uVar3 + this->FrameRatioFrameDeltaFP;
        uVar10 = iVar9 + uVar10;
        fVar12 = (float)(uVar10 & 0xffff) * fVar1;
        uVar3 = uVar10;
        if ((int)uVar10 < 0) {
          uVar3 = uVar10 + 0xffff;
        }
        lVar4 = (longlong)((int)uVar3 >> 0x10);
        *(float *)((longlong)pfVar5 + lVar7) =
             (param_1[lVar4 + 1] - param_1[lVar4]) * fVar12 + param_1[lVar4];
        *pfVar5 = (param_2[lVar4 + 1] - param_2[lVar4]) * fVar12 + param_2[lVar4];
        iVar9 = iVar9 + this->FrameRatioFrameDeltaFP;
        uVar10 = iVar9 + uVar10;
        fVar12 = (float)(uVar10 & 0xffff) * fVar1;
        uVar3 = uVar10;
        if ((int)uVar10 < 0) {
          uVar3 = uVar10 + 0xffff;
        }
        lVar4 = (longlong)((int)uVar3 >> 0x10);
        *(float *)((longlong)pfVar5 + lVar7 + 4) =
             (param_1[lVar4 + 1] - param_1[lVar4]) * fVar12 + param_1[lVar4];
        pfVar5[1] = (param_2[lVar4 + 1] - param_2[lVar4]) * fVar12 + param_2[lVar4];
        iVar9 = iVar9 + this->FrameRatioFrameDeltaFP;
        uVar10 = uVar10 + iVar9;
        fVar12 = (float)(uVar10 & 0xffff) * fVar1;
        uVar3 = uVar10;
        if ((int)uVar10 < 0) {
          uVar3 = uVar10 + 0xffff;
        }
        lVar4 = (longlong)((int)uVar3 >> 0x10);
        *(float *)((longlong)pfVar5 + lVar7 + 8) =
             (param_1[lVar4 + 1] - param_1[lVar4]) * fVar12 + param_1[lVar4];
        pfVar5[2] = (param_2[lVar4 + 1] - param_2[lVar4]) * fVar12 + param_2[lVar4];
        pfVar5 = pfVar5 + 4;
        uVar3 = iVar9 + this->FrameRatioFrameDeltaFP;
        uVar10 = uVar10 + uVar3;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      if (lVar8 <= lVar11) goto LAB_14451e5dd;
    }
    lVar8 = lVar8 - lVar11;
    param_7 = param_7 + (int)lVar8;
    pfVar5 = param_4 + lVar11;
    do {
      fVar12 = (float)(uVar10 & 0xffff) * fVar1;
      uVar2 = uVar10;
      if ((int)uVar10 < 0) {
        uVar2 = uVar10 + 0xffff;
      }
      lVar11 = (longlong)((int)uVar2 >> 0x10);
      *(float *)(((longlong)param_3 - (longlong)param_4) + (longlong)pfVar5) =
           (param_1[lVar11 + 1] - param_1[lVar11]) * fVar12 + param_1[lVar11];
      *pfVar5 = (param_2[lVar11 + 1] - param_2[lVar11]) * fVar12 + param_2[lVar11];
      pfVar5 = pfVar5 + 1;
      uVar3 = uVar3 + this->FrameRatioFrameDeltaFP;
      uVar10 = uVar10 + uVar3;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
LAB_14451e5dd:
  lVar8 = (longlong)param_8;
  lVar11 = (longlong)param_7;
  if (lVar8 <= lVar11) {
    *param_5 = uVar10;
    *param_6 = uVar3;
    return;
  }
  if (3 < lVar8 - lVar11) {
    pfVar5 = param_4 + lVar11 + 1;
    lVar6 = (longlong)param_3 - (longlong)param_4;
    lVar7 = ((lVar8 - lVar11) - 4U >> 2) + 1;
    lVar11 = lVar11 + lVar7 * 4;
    do {
      fVar12 = (float)(uVar10 & 0xffff) * fVar1;
      uVar2 = uVar10;
      if ((int)uVar10 < 0) {
        uVar2 = uVar10 + 0xffff;
      }
      lVar4 = (longlong)((int)uVar2 >> 0x10);
      *(float *)(lVar6 + -4 + (longlong)pfVar5) =
           (param_1[lVar4 + 1] - param_1[lVar4]) * fVar12 + param_1[lVar4];
      pfVar5[-1] = (param_2[lVar4 + 1] - param_2[lVar4]) * fVar12 + param_2[lVar4];
      uVar10 = uVar10 + this->TargetFrameRatioFP;
      fVar12 = (float)(uVar10 & 0xffff) * fVar1;
      uVar2 = uVar10;
      if ((int)uVar10 < 0) {
        uVar2 = uVar10 + 0xffff;
      }
      lVar4 = (longlong)((int)uVar2 >> 0x10);
      *(float *)(lVar6 + (longlong)pfVar5) =
           (param_1[lVar4 + 1] - param_1[lVar4]) * fVar12 + param_1[lVar4];
      *pfVar5 = (param_2[lVar4 + 1] - param_2[lVar4]) * fVar12 + param_2[lVar4];
      uVar10 = uVar10 + this->TargetFrameRatioFP;
      fVar12 = (float)(uVar10 & 0xffff) * fVar1;
      uVar2 = uVar10;
      if ((int)uVar10 < 0) {
        uVar2 = uVar10 + 0xffff;
      }
      lVar4 = (longlong)((int)uVar2 >> 0x10);
      *(float *)(lVar6 + 4 + (longlong)pfVar5) =
           (param_1[lVar4 + 1] - param_1[lVar4]) * fVar12 + param_1[lVar4];
      pfVar5[1] = (param_2[lVar4 + 1] - param_2[lVar4]) * fVar12 + param_2[lVar4];
      uVar10 = uVar10 + this->TargetFrameRatioFP;
      fVar12 = (float)(uVar10 & 0xffff) * fVar1;
      uVar2 = uVar10;
      if ((int)uVar10 < 0) {
        uVar2 = uVar10 + 0xffff;
      }
      lVar4 = (longlong)((int)uVar2 >> 0x10);
      *(float *)(lVar6 + 8 + (longlong)pfVar5) =
           (param_1[lVar4 + 1] - param_1[lVar4]) * fVar12 + param_1[lVar4];
      pfVar5[2] = (param_2[lVar4 + 1] - param_2[lVar4]) * fVar12 + param_2[lVar4];
      pfVar5 = pfVar5 + 4;
      uVar10 = uVar10 + this->TargetFrameRatioFP;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
    if (lVar8 <= lVar11) goto LAB_14451e81b;
  }
  pfVar5 = param_4 + lVar11;
  lVar8 = lVar8 - lVar11;
  do {
    fVar12 = (float)(uVar10 & 0xffff) * fVar1;
    uVar2 = uVar10;
    if ((int)uVar10 < 0) {
      uVar2 = uVar10 + 0xffff;
    }
    lVar11 = (longlong)((int)uVar2 >> 0x10);
    *(float *)((longlong)pfVar5 + ((longlong)param_3 - (longlong)param_4)) =
         (param_1[lVar11 + 1] - param_1[lVar11]) * fVar12 + param_1[lVar11];
    *pfVar5 = (param_2[lVar11 + 1] - param_2[lVar11]) * fVar12 + param_2[lVar11];
    pfVar5 = pfVar5 + 1;
    uVar10 = uVar10 + this->TargetFrameRatioFP;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
LAB_14451e81b:
  *param_5 = uVar10;
  *param_6 = uVar3;
  return;
}

// StereoInterleavedResamplingCore @ 14451e850

void __thiscall
Audio::FRuntimeResampler::StereoInterleavedResamplingCore
          (FRuntimeResampler *this,float *param_1,float *param_2,int *param_3,uint *param_4,
          int param_5,int param_6)

{
  float fVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  
  fVar1 = __real_37800000;
  lVar4 = (longlong)param_5;
  uVar6 = *param_3;
  iVar5 = param_5 + this->NumFramesToInterpolate * 2;
  uVar3 = *param_4;
  if (param_6 < iVar5) {
    iVar5 = param_6;
  }
  if (lVar4 < iVar5) {
    param_5 = param_5 + ((iVar5 - param_5) - 1U & 0xfffffffe) + 2;
    do {
      lVar2 = (longlong)(((int)(uVar6 + ((int)uVar6 >> 0x1f & 0xffffU)) >> 0x10) * 2);
      fVar7 = (float)(uVar6 & 0xffff) * fVar1;
      param_2[lVar4] = (param_1[lVar2 + 2] - param_1[lVar2]) * fVar7 + param_1[lVar2];
      param_2[lVar4 + 1] = (param_1[lVar2 + 3] - param_1[lVar2 + 1]) * fVar7 + param_1[lVar2 + 1];
      lVar4 = lVar4 + 2;
      uVar3 = uVar3 + this->FrameRatioFrameDeltaFP;
      uVar6 = uVar6 + uVar3;
    } while (lVar4 < iVar5);
  }
  for (lVar4 = (longlong)param_5; lVar4 < param_6; lVar4 = lVar4 + 2) {
    lVar2 = (longlong)(((int)(uVar6 + ((int)uVar6 >> 0x1f & 0xffffU)) >> 0x10) * 2);
    fVar7 = (float)(uVar6 & 0xffff) * fVar1;
    param_2[lVar4] = (param_1[lVar2 + 2] - param_1[lVar2]) * fVar7 + param_1[lVar2];
    param_2[lVar4 + 1] = (param_1[lVar2 + 3] - param_1[lVar2 + 1]) * fVar7 + param_1[lVar2 + 1];
    uVar6 = uVar6 + this->TargetFrameRatioFP;
  }
  *param_3 = uVar6;
  *param_4 = uVar3;
  return;
}

// operator() @ 1504bf950

bool __thiscall `Audio::FRuntimeResampler::SetFrameRatio'::__l3::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_8891365228013420498>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_8891365228013420498>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  return false;
}

