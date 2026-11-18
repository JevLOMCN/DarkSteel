// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 3

// FillArrayWithConstantQBand @ 1444bd8d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
Audio::FPseudoConstantQ::FillArrayWithConstantQBand
          (FPseudoConstantQBandSettings *param_1,TArray<float,TAlignedHeapAllocator<16>_> *param_2,
          int *param_3)

{
  int iVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  TArrayView<float_const_,int> *pTVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float local_res8 [2];
  undefined4 uStack_9c;
  TArrayView<float_const_,int> local_98;
  TArrayView<float,int> local_88;
  TArrayView<float_const_,int> local_78 [5];
  
  if ((param_1->SampleRate <= 0.0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSettings.SampleRate > 0.f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConstantQ.cpp"
                         ,0x49,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((param_1->FFTSize < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InSettings.FFTSize > 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConstantQ.cpp"
                         ,0x4a,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar8 = param_1->FFTSize;
  *param_3 = 0;
  fVar12 = param_1->BandWidth;
  if (param_1->BandWidth <= __real_322bcc77) {
    fVar12 = __real_322bcc77;
  }
  iVar8 = iVar8 / 2 + 1;
  PseudoConstantQIntrinsics::FillArrayWithTruncatedGaussian
            (param_1->CenterFreq,fVar12,param_1->FFTSize,param_1->SampleRate,param_2,param_3);
  fVar5 = __real_3f800000;
  fVar12 = fVar12 / param_1->SampleRate;
  fVar13 = __real_3f800000 / (float)param_1->FFTSize;
  if (fVar13 <= fVar12) {
    fVar13 = fVar12;
  }
  if (param_2->ArrayNum < 1) goto LAB_1444bdc5e;
  local_res8[0] = 0.0;
  pTVar9 = TArrayView<float_const_,int>::
           TArrayView<float_const_,int><TArray<float,TAlignedHeapAllocator<16>_>_&,TArray<float,TAlignedHeapAllocator<16>_>_>
                     (local_78,param_2);
  local_98.DataPtr = pTVar9->DataPtr;
  local_98.ArrayNum = pTVar9->ArrayNum;
  local_98._12_4_ = *(undefined4 *)&pTVar9->field_0xc;
  ArraySum(&local_98,local_res8);
  if (__real_3f733333 <= local_res8[0]) goto LAB_1444bdc5e;
  memset((param_2->AllocatorInstance).Data,0,(longlong)param_2->ArrayNum << 2);
  fVar12 = ((float)param_1->FFTSize * param_1->CenterFreq) / param_1->SampleRate - (float)*param_3;
  uVar11 = (int)ROUND((fVar12 + fVar12) - __real_3f000000) >> 1;
  uVar10 = uVar11 + 1;
  if ((int)uVar11 < 0) {
LAB_1444bdbe7:
    if (((int)uVar10 < 0) || (param_2->ArrayNum <= (int)uVar10)) goto LAB_1444bdc5e;
    uVar11 = uVar10;
    if (((int)uVar10 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
LAB_1444bdc34:
    *(undefined4 *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 4) = 0x3f800000;
  }
  else {
    iVar1 = param_2->ArrayNum;
    if (iVar1 <= (int)uVar10) {
      if (iVar1 <= (int)uVar11) goto LAB_1444bdbe7;
      if (((int)uVar11 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      goto LAB_1444bdc34;
    }
    uVar7 = 0;
    if ((int)uVar11 < iVar1) {
      uVar7 = ~uVar11 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(float *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 4) =
         fVar5 - (fVar12 - (float)(int)uVar11);
    uVar7 = 0;
    if ((int)uVar11 < param_2->ArrayNum) {
      uVar7 = ~uVar11 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    fVar12 = *(float *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar11 * 4);
    uVar11 = 0;
    if ((int)uVar10 < param_2->ArrayNum) {
      uVar11 = ~uVar10 >> 0x1f;
    }
    if ((uVar11 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    *(float *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4) = fVar5 - fVar12;
  }
  fVar13 = fVar5 / (float)param_1->FFTSize;
LAB_1444bdc5e:
  if (param_1->Normalization != EqualAmplitude) {
    if (param_1->Normalization == EqualEuclideanNorm) {
      fVar12 = SQRT((float)param_1->FFTSize * fVar13 * ___real_40206c99);
    }
    else {
      fVar12 = (float)param_1->FFTSize * fVar13 * ___real_40206c99;
    }
    if ((0.0 < fVar12) && (fVar12 != fVar5)) {
      pFVar3 = (param_2->AllocatorInstance).Data;
      iVar1 = param_2->ArrayNum;
      if ((iVar1 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_88._12_4_ = uStack_9c;
      local_88.ArrayNum = iVar1;
      local_88.DataPtr = (float *)pFVar3;
      ArrayMultiplyByConstantInPlace(&local_88,fVar5 / fVar12);
    }
  }
  iVar1 = *param_3;
  if (iVar1 < iVar8) {
    iVar2 = param_2->ArrayNum;
    if (iVar8 < iVar2 + iVar1) {
      uVar10 = iVar8 - iVar1;
      if (iVar2 < (int)uVar10) {
        iVar8 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                          (4,4,uVar10 - iVar2,&param_2->AllocatorInstance,&param_2->ArrayNum,
                           &param_2->ArrayMax);
        memset((param_2->AllocatorInstance).Data + (longlong)iVar8 * 4,0,
               (longlong)(int)(uVar10 - iVar2) << 2);
        return;
      }
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if ((int)uVar10 < iVar2) {
        uVar11 = iVar2 - uVar10;
        if (((int)(uVar11 | uVar10) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        if (uVar11 != 0) {
          pFVar3 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 4;
          iVar8 = (param_2->ArrayNum - uVar11) - uVar10;
          if (iVar8 != 0) {
            memmove(pFVar3,pFVar3 + (longlong)(int)uVar11 * 4,(longlong)iVar8 << 2);
          }
          iVar8 = param_2->ArrayNum - uVar11;
          param_2->ArrayNum = iVar8;
          UE::Core::Private::ReallocShrink<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,&param_2->AllocatorInstance,iVar8,&param_2->ArrayMax);
        }
      }
    }
  }
  else {
    *param_3 = 0;
    param_2->ArrayNum = 0;
    if (param_2->ArrayMax != 0) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
      return;
    }
  }
  return;
}

// GetConstantQBandWidth @ 1444bfad0

float __cdecl
Audio::FPseudoConstantQ::GetConstantQBandWidth(float param_1,float param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_2 <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBandsPerOctave > 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConstantQ.cpp"
                       ,0x42,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = powf(__real_40000000,__real_3f800000 / param_2);
  return (fVar3 - __real_3f800000) * param_1 * param_3;
}

// GetConstantQCenterFrequency @ 1444bfb70

float __cdecl
Audio::FPseudoConstantQ::GetConstantQCenterFrequency(int param_1,float param_2,float param_3)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (param_3 <= 0.0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("InBandsPerOctave > 0.f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\ConstantQ.cpp"
                       ,0x3c,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = powf(__real_40000000,(float)param_1 / param_3);
  return fVar3 * param_2;
}

