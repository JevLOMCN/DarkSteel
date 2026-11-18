// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 9

// FInterpolatedLPF @ 1444ef7c0

FInterpolatedLPF * __thiscall Audio::FInterpolatedLPF::FInterpolatedLPF(FInterpolatedLPF *this)

{
  this->CutoffFrequency = -1.0;
  this->B1Curr = 0.0;
  this->B1Delta = 0.0;
  this->B1Target = 0.0;
  (this->Z1).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Z1).ArrayNum = 0;
  (this->Z1).ArrayMax = 0;
  this->Z1Data = (float *)0x0;
  this->CurrInterpLength = 0;
  this->SampleRate = 0.0;
  this->NumChannels = 1;
  this->bIsFirstFrequencyChange = true;
  Reset(this);
  return this;
}

// ArrayCalculateResponseInPlace @ 1444f7330

void __thiscall
Audio::FInterpolatedLPF::ArrayCalculateResponseInPlace
          (FInterpolatedLPF *this,TArrayView<float,int> *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  float fVar6;
  uint uVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  float fVar14;
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  uint local_8c;
  
  fVar6 = __real_3f800000;
  iVar3 = param_1->ArrayNum;
  fVar1 = this->B1Curr;
  fVar14 = __real_3f800000 - fVar1;
  if ((((longlong)iVar3 & 1U) != 0) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumFloats % 2 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\InterpolatedOnePole.cpp"
                         ,0x129,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar7 = __xmm_80000000800000008000000080000000;
  uVar12 = 0;
  if (0 < iVar3) {
    lVar13 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar10 = uVar12 + 1;
      fVar2 = param_1->DataPtr[lVar13];
      uVar11 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_a8 = (complex<float>)0x3f800000;
      local_94 = param_1->DataPtr[lVar13 + 1];
      local_98 = fVar2;
      std::complex<float>::operator/=((complex<float> *)&local_a8,(complex<float> *)&local_98);
      local_9c = 0.0;
      local_90 = fVar6 - (float)local_a8 * fVar1;
      local_8c = (uint)(local_a8._4_4_ * fVar1) ^ uVar7;
      local_a0 = fVar14;
      std::complex<float>::operator/=((complex<float> *)&local_a0,(complex<float> *)&local_90);
      fVar2 = local_a0;
      uVar11 = 0;
      if ((int)uVar12 < param_1->ArrayNum) {
        uVar11 = ~uVar12 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      fVar8 = local_9c;
      iVar4 = param_1->ArrayNum;
      param_1->DataPtr[lVar13] = fVar2;
      uVar11 = 0;
      if ((int)uVar10 < iVar4) {
        uVar11 = ~uVar10 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar9)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      uVar12 = uVar12 + 2;
      param_1->DataPtr[lVar13 + 1] = fVar8;
      lVar13 = lVar13 + 2;
    } while (lVar13 < iVar3);
  }
  return;
}

// ClearMemory @ 1444f7e00

void __thiscall Audio::FInterpolatedLPF::ClearMemory(FInterpolatedLPF *this)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  pTVar1 = &this->Z1;
  piVar2 = &(this->Z1).ArrayMax;
  piVar3 = &(this->Z1).ArrayNum;
  *piVar3 = 0;
  if ((this->Z1).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&pTVar1->AllocatorInstance,0,piVar2);
  }
  iVar4 = this->NumChannels;
  iVar5 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar4,&pTVar1->AllocatorInstance,piVar3,piVar2);
  memset((pTVar1->AllocatorInstance).Data + (longlong)iVar5 * 4,0,(longlong)iVar4 << 2);
  return;
}

// Init @ 144505a00

void __thiscall Audio::FInterpolatedLPF::Init(FInterpolatedLPF *this,float param_1,int param_2)

{
  float local_res10 [6];
  
  this->SampleRate = param_1;
  this->NumChannels = param_2;
  this->CutoffFrequency = -1.0;
  local_res10[0] = 0.0;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(&this->Z1,local_res10,param_2);
  this->Z1Data = (float *)(this->Z1).AllocatorInstance.Data;
  Reset(this);
  return;
}

// ProcessAudioBuffer @ 14450fe40

void __thiscall
Audio::FInterpolatedLPF::ProcessAudioBuffer
          (FInterpolatedLPF *this,float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  float *pfVar9;
  longlong lVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  
  lVar7 = (longlong)param_3;
  iVar5 = this->NumChannels;
  uVar8 = 0;
  if (iVar5 != 1) {
    uVar3 = param_3 & 0xfffffffc;
    if (iVar5 == 2) {
      fVar22 = this->B1Delta;
      pfVar9 = this->Z1Data;
      fVar23 = this->B1Curr;
      fVar15 = fVar22 + fVar22;
      uVar2 = *(undefined8 *)pfVar9;
      fVar20 = (float)uVar2;
      fVar21 = (float)((ulonglong)uVar2 >> 0x20);
      fVar14 = fVar23;
      if (uVar3 != 0) {
        fVar14 = fVar23 + fVar22;
        fVar22 = fVar23 + fVar22;
        uVar8 = 0;
        if (0 < (int)uVar3) {
          lVar7 = ((longlong)(int)uVar3 - 1U >> 2) + 1;
          uVar8 = (ulonglong)(uint)((int)lVar7 * 4);
          pfVar4 = param_2;
          fVar24 = fVar23;
          do {
            fVar24 = fVar24 + fVar15;
            fVar23 = fVar23 + fVar15;
            pfVar1 = (float *)((longlong)pfVar4 + ((longlong)param_1 - (longlong)param_2));
            fVar16 = *pfVar1;
            fVar17 = pfVar1[1];
            fVar12 = (fVar20 - fVar16) * fVar14;
            fVar13 = (fVar21 - fVar17) * fVar22;
            fVar18 = (fVar20 - fVar16) * fVar14;
            fVar19 = (fVar21 - fVar17) * fVar22;
            fVar14 = fVar14 + fVar15;
            fVar22 = fVar22 + fVar15;
            fVar20 = ((fVar12 + fVar16) - pfVar1[2]) * fVar23 + pfVar1[2];
            fVar21 = ((fVar13 + fVar17) - pfVar1[3]) * fVar24 + pfVar1[3];
            *pfVar4 = fVar18 + fVar16;
            pfVar4[1] = fVar19 + fVar17;
            pfVar4[2] = fVar20;
            pfVar4[3] = fVar21;
            pfVar4 = pfVar4 + 4;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
      }
      this->B1Curr = fVar14;
      *pfVar9 = fVar20;
      this->Z1Data[1] = fVar21;
    }
    else if (iVar5 == 4) {
      pfVar9 = this->Z1Data;
      fVar22 = this->B1Curr;
      fVar23 = this->B1Delta;
      fVar14 = *pfVar9;
      fVar15 = pfVar9[1];
      fVar20 = pfVar9[2];
      fVar21 = pfVar9[3];
      if (0 < (int)uVar3) {
        lVar7 = ((longlong)(int)uVar3 - 1U >> 2) + 1;
        uVar8 = (ulonglong)(uint)((int)lVar7 * 4);
        pfVar4 = param_2;
        fVar24 = fVar22;
        fVar16 = fVar22;
        fVar17 = fVar22;
        do {
          pfVar1 = (float *)((longlong)pfVar4 + ((longlong)param_1 - (longlong)param_2));
          fVar22 = fVar22 + fVar23;
          fVar24 = fVar24 + fVar23;
          fVar16 = fVar16 + fVar23;
          fVar17 = fVar17 + fVar23;
          fVar14 = (fVar14 - *pfVar1) * fVar22 + *pfVar1;
          fVar15 = (fVar15 - pfVar1[1]) * fVar24 + pfVar1[1];
          fVar20 = (fVar20 - pfVar1[2]) * fVar16 + pfVar1[2];
          fVar21 = (fVar21 - pfVar1[3]) * fVar17 + pfVar1[3];
          *pfVar4 = fVar14;
          pfVar4[1] = fVar15;
          pfVar4[2] = fVar20;
          pfVar4[3] = fVar21;
          pfVar4 = pfVar4 + 4;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      this->B1Curr = fVar22;
      *pfVar9 = fVar14;
      pfVar9[1] = fVar15;
      pfVar9[2] = fVar20;
      pfVar9[3] = fVar21;
    }
    iVar5 = (int)uVar8;
    if (iVar5 < param_3) {
      lVar7 = (longlong)iVar5;
      if (3 < param_3 - iVar5) {
        iVar11 = iVar5 + 2;
        lVar10 = (longlong)param_1 - (longlong)param_2;
        pfVar9 = param_2 + lVar7 + 1;
        lVar7 = lVar7 + (ulonglong)((((param_3 + -3) - iVar5) - 1U >> 2) + 1) * 4;
        do {
          iVar5 = (int)uVar8 % this->NumChannels;
          fVar22 = (float)(iVar5 == 0) * this->B1Delta + this->B1Curr;
          this->B1Curr = fVar22;
          fVar22 = (this->Z1Data[iVar5] - *(float *)((longlong)pfVar9 + lVar10 + -4)) * fVar22 +
                   *(float *)((longlong)pfVar9 + lVar10 + -4);
          this->Z1Data[iVar5] = fVar22;
          pfVar9[-1] = fVar22;
          iVar5 = (iVar11 + -1) % this->NumChannels;
          fVar22 = (float)(iVar5 == 0) * this->B1Delta + this->B1Curr;
          this->B1Curr = fVar22;
          fVar22 = (this->Z1Data[iVar5] - *(float *)((longlong)pfVar9 + lVar10)) * fVar22 +
                   *(float *)((longlong)pfVar9 + lVar10);
          this->Z1Data[iVar5] = fVar22;
          *pfVar9 = fVar22;
          iVar5 = iVar11 % this->NumChannels;
          fVar22 = (float)(iVar5 == 0) * this->B1Delta + this->B1Curr;
          this->B1Curr = fVar22;
          fVar22 = (this->Z1Data[iVar5] - *(float *)((longlong)pfVar9 + lVar10 + 4)) * fVar22 +
                   *(float *)((longlong)pfVar9 + lVar10 + 4);
          this->Z1Data[iVar5] = fVar22;
          pfVar9[1] = fVar22;
          iVar5 = (iVar11 + 1) % this->NumChannels;
          uVar3 = (int)uVar8 + 4;
          uVar8 = (ulonglong)uVar3;
          iVar11 = iVar11 + 4;
          pfVar4 = this->Z1Data;
          fVar22 = (float)(iVar5 == 0) * this->B1Delta + this->B1Curr;
          this->B1Curr = fVar22;
          fVar22 = (pfVar4[iVar5] - *(float *)((longlong)pfVar9 + lVar10 + 8)) * fVar22 +
                   *(float *)((longlong)pfVar9 + lVar10 + 8);
          pfVar9[2] = fVar22;
          pfVar9 = pfVar9 + 4;
          pfVar4[iVar5] = fVar22;
        } while ((int)uVar3 < param_3 + -3);
        if (param_3 <= (int)uVar3) {
          return;
        }
      }
      pfVar9 = param_2 + lVar7;
      do {
        iVar5 = (int)uVar8 % this->NumChannels;
        uVar3 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar3;
        pfVar4 = this->Z1Data;
        fVar22 = (float)(iVar5 == 0) * this->B1Delta + this->B1Curr;
        this->B1Curr = fVar22;
        fVar22 = (pfVar4[iVar5] -
                 *(float *)(((longlong)param_1 - (longlong)param_2) + (longlong)pfVar9)) * fVar22 +
                 *(float *)(((longlong)param_1 - (longlong)param_2) + (longlong)pfVar9);
        *pfVar9 = fVar22;
        pfVar9 = pfVar9 + 1;
        pfVar4[iVar5] = fVar22;
      } while ((int)uVar3 < param_3);
    }
    return;
  }
  pfVar9 = this->Z1Data;
  fVar22 = this->B1Curr;
  fVar23 = this->B1Delta;
  fVar14 = *pfVar9;
  fVar15 = fVar22;
  if (lVar7 < 4) {
    if (param_3 < 1) goto LAB_14450ff63;
    lVar10 = (longlong)param_1 - (longlong)param_2;
  }
  else {
    lVar10 = (longlong)param_1 - (longlong)param_2;
    pfVar4 = param_2 + 1;
    lVar6 = (lVar7 - 4U >> 2) + 1;
    uVar8 = lVar6 * 4;
    do {
      fVar14 = (fVar14 - *(float *)((longlong)pfVar4 + lVar10 + -4)) * fVar22 +
               *(float *)((longlong)pfVar4 + lVar10 + -4);
      pfVar4[-1] = fVar14;
      fVar15 = fVar23 + fVar15 + fVar23 + fVar23 + fVar23;
      fVar14 = (fVar14 - *(float *)((longlong)pfVar4 + lVar10)) * fVar22 +
               *(float *)((longlong)pfVar4 + lVar10);
      *pfVar4 = fVar14;
      fVar14 = (fVar14 - *(float *)((longlong)pfVar4 + lVar10 + 4)) * fVar22 +
               *(float *)((longlong)pfVar4 + lVar10 + 4);
      pfVar4[1] = fVar14;
      fVar14 = (fVar14 - *(float *)((longlong)pfVar4 + lVar10 + 8)) * fVar22 +
               *(float *)((longlong)pfVar4 + lVar10 + 8);
      pfVar4[2] = fVar14;
      pfVar4 = pfVar4 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    if (lVar7 <= (longlong)uVar8) {
      *pfVar9 = fVar14;
      this->B1Curr = fVar15;
      return;
    }
  }
  pfVar4 = param_2 + uVar8;
  lVar7 = lVar7 - uVar8;
  do {
    fVar15 = fVar15 + fVar23;
    fVar14 = (fVar14 - *(float *)((longlong)pfVar4 + lVar10)) * fVar22 +
             *(float *)((longlong)pfVar4 + lVar10);
    *pfVar4 = fVar14;
    pfVar4 = pfVar4 + 1;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
LAB_14450ff63:
  *pfVar9 = fVar14;
  this->B1Curr = fVar15;
  return;
}

// ProcessAudioFrame @ 144511280

void __thiscall
Audio::FInterpolatedLPF::ProcessAudioFrame(FInterpolatedLPF *this,float *param_1,float *param_2)

{
  float *pfVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = 0;
  this->B1Curr = this->B1Delta + this->B1Curr;
  if (0 < this->NumChannels) {
    lVar2 = 0;
    do {
      pfVar1 = (float *)(lVar2 + (longlong)param_2);
      iVar3 = iVar3 + 1;
      fVar4 = (*(float *)((longlong)this->Z1Data + lVar2) -
              *(float *)((longlong)pfVar1 + ((longlong)param_1 - (longlong)param_2))) * this->B1Curr
              + *(float *)((longlong)pfVar1 + ((longlong)param_1 - (longlong)param_2));
      *(float *)((longlong)this->Z1Data + lVar2) = fVar4;
      lVar2 = lVar2 + 4;
      *pfVar1 = fVar4;
    } while (iVar3 < this->NumChannels);
  }
  return;
}

// ProcessBufferInPlace @ 144513380

void __thiscall
Audio::FInterpolatedLPF::ProcessBufferInPlace(FInterpolatedLPF *this,float *param_1,int param_2)

{
  float *pfVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  iVar8 = this->NumChannels;
  lVar5 = (longlong)param_2;
  iVar6 = 0;
  lVar7 = 0;
  if (iVar8 == 1) {
    fVar12 = this->B1Curr;
    fVar20 = this->B1Delta;
    fVar11 = *this->Z1Data;
    if (3 < lVar5) {
      pfVar1 = param_1 + 2;
      lVar3 = (lVar5 - 4U >> 2) + 1;
      lVar7 = lVar3 * 4;
      do {
        fVar11 = (fVar11 - pfVar1[-2]) * this->B1Curr + pfVar1[-2];
        pfVar1[-2] = fVar11;
        fVar12 = fVar20 + fVar12 + fVar20 + fVar20 + fVar20;
        fVar11 = (fVar11 - pfVar1[-1]) * this->B1Curr + pfVar1[-1];
        pfVar1[-1] = fVar11;
        fVar11 = (fVar11 - *pfVar1) * this->B1Curr + *pfVar1;
        *pfVar1 = fVar11;
        fVar11 = (fVar11 - pfVar1[1]) * this->B1Curr + pfVar1[1];
        pfVar1[1] = fVar11;
        pfVar1 = pfVar1 + 4;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    for (; lVar7 < lVar5; lVar7 = lVar7 + 1) {
      fVar12 = fVar12 + fVar20;
      fVar11 = (fVar11 - param_1[lVar7]) * this->B1Curr + param_1[lVar7];
      param_1[lVar7] = fVar11;
    }
    *this->Z1Data = fVar11;
    this->B1Curr = fVar12;
    return;
  }
  uVar2 = param_2 & 0xfffffffc;
  lVar5 = (longlong)(int)uVar2;
  if (iVar8 == 2) {
    fVar12 = this->B1Delta;
    fVar20 = this->B1Curr;
    fVar13 = fVar12 + fVar12;
    fVar18 = (float)*(undefined8 *)this->Z1Data;
    fVar19 = (float)((ulonglong)*(undefined8 *)this->Z1Data >> 0x20);
    fVar11 = fVar20;
    if (uVar2 != 0) {
      fVar11 = fVar20 + fVar12;
      fVar12 = fVar20 + fVar12;
      if (0 < (int)uVar2) {
        iVar6 = (int)(lVar5 - 1U >> 2) * 4 + 4;
        fVar21 = fVar20;
        do {
          fVar21 = fVar21 + fVar13;
          fVar20 = fVar20 + fVar13;
          pfVar1 = param_1 + lVar7;
          fVar14 = *pfVar1;
          fVar15 = pfVar1[1];
          fVar9 = (fVar18 - fVar14) * fVar11;
          fVar10 = (fVar19 - fVar15) * fVar12;
          fVar16 = (fVar18 - fVar14) * fVar11;
          fVar17 = (fVar19 - fVar15) * fVar12;
          fVar11 = fVar11 + fVar13;
          fVar12 = fVar12 + fVar13;
          fVar18 = ((fVar9 + fVar14) - pfVar1[2]) * fVar20 + pfVar1[2];
          fVar19 = ((fVar10 + fVar15) - pfVar1[3]) * fVar21 + pfVar1[3];
          pfVar1 = param_1 + lVar7;
          *pfVar1 = fVar16 + fVar14;
          pfVar1[1] = fVar17 + fVar15;
          pfVar1[2] = fVar18;
          pfVar1[3] = fVar19;
          lVar7 = lVar7 + 4;
        } while (lVar7 < lVar5);
      }
    }
    this->B1Curr = fVar11;
    *this->Z1Data = fVar18;
    this->Z1Data[1] = fVar19;
  }
  else if (iVar8 == 4) {
    pfVar1 = this->Z1Data;
    fVar12 = this->B1Curr;
    fVar20 = this->B1Delta;
    fVar11 = *pfVar1;
    fVar13 = pfVar1[1];
    fVar18 = pfVar1[2];
    fVar19 = pfVar1[3];
    if (0 < (int)uVar2) {
      iVar6 = (int)(lVar5 - 1U >> 2) * 4 + 4;
      fVar21 = fVar12;
      fVar14 = fVar12;
      fVar15 = fVar12;
      do {
        pfVar1 = param_1 + lVar7;
        fVar12 = fVar12 + fVar20;
        fVar21 = fVar21 + fVar20;
        fVar14 = fVar14 + fVar20;
        fVar15 = fVar15 + fVar20;
        fVar11 = (fVar11 - *pfVar1) * fVar12 + *pfVar1;
        fVar13 = (fVar13 - pfVar1[1]) * fVar21 + pfVar1[1];
        fVar18 = (fVar18 - pfVar1[2]) * fVar14 + pfVar1[2];
        fVar19 = (fVar19 - pfVar1[3]) * fVar15 + pfVar1[3];
        pfVar1 = param_1 + lVar7;
        *pfVar1 = fVar11;
        pfVar1[1] = fVar13;
        pfVar1[2] = fVar18;
        pfVar1[3] = fVar19;
        lVar7 = lVar7 + 4;
      } while (lVar7 < lVar5);
    }
    pfVar1 = this->Z1Data;
    this->B1Curr = fVar12;
    *pfVar1 = fVar11;
    pfVar1[1] = fVar13;
    pfVar1[2] = fVar18;
    pfVar1[3] = fVar19;
  }
  if (iVar6 < param_2) {
    lVar7 = (longlong)iVar6;
    if (3 < param_2 - iVar6) {
      pfVar1 = param_1 + lVar7 + 2;
      iVar8 = iVar6 + 2;
      lVar7 = lVar7 + (ulonglong)((((param_2 + -3) - iVar6) - 1U >> 2) + 1) * 4;
      do {
        iVar4 = iVar6 % this->NumChannels;
        fVar12 = (float)(iVar4 == 0) * this->B1Delta + this->B1Curr;
        this->B1Curr = fVar12;
        fVar12 = (this->Z1Data[iVar4] - pfVar1[-2]) * fVar12 + pfVar1[-2];
        this->Z1Data[iVar4] = fVar12;
        pfVar1[-2] = fVar12;
        iVar4 = (iVar8 + -1) % this->NumChannels;
        fVar12 = (float)(iVar4 == 0) * this->B1Delta + this->B1Curr;
        this->B1Curr = fVar12;
        fVar12 = (this->Z1Data[iVar4] - pfVar1[-1]) * fVar12 + pfVar1[-1];
        this->Z1Data[iVar4] = fVar12;
        pfVar1[-1] = fVar12;
        iVar4 = iVar8 % this->NumChannels;
        fVar12 = (float)(iVar4 == 0) * this->B1Delta + this->B1Curr;
        this->B1Curr = fVar12;
        fVar12 = (this->Z1Data[iVar4] - *pfVar1) * fVar12 + *pfVar1;
        this->Z1Data[iVar4] = fVar12;
        *pfVar1 = fVar12;
        iVar4 = (iVar8 + 1) % this->NumChannels;
        iVar6 = iVar6 + 4;
        iVar8 = iVar8 + 4;
        fVar12 = (float)(iVar4 == 0) * this->B1Delta + this->B1Curr;
        this->B1Curr = fVar12;
        fVar12 = (this->Z1Data[iVar4] - pfVar1[1]) * fVar12 + pfVar1[1];
        this->Z1Data[iVar4] = fVar12;
        pfVar1[1] = fVar12;
        pfVar1 = pfVar1 + 4;
      } while (iVar6 < param_2 + -3);
      if (param_2 <= iVar6) {
        return;
      }
    }
    pfVar1 = param_1 + lVar7;
    do {
      iVar8 = iVar6 % this->NumChannels;
      iVar6 = iVar6 + 1;
      fVar12 = (float)(iVar8 == 0) * this->B1Delta + this->B1Curr;
      this->B1Curr = fVar12;
      fVar12 = (this->Z1Data[iVar8] - *pfVar1) * fVar12 + *pfVar1;
      this->Z1Data[iVar8] = fVar12;
      *pfVar1 = fVar12;
      pfVar1 = pfVar1 + 1;
    } while (iVar6 < param_2);
  }
  return;
}

// Reset @ 1445171d0

void __thiscall Audio::FInterpolatedLPF::Reset(FInterpolatedLPF *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = &(this->Z1).ArrayMax;
  this->B1Curr = 0.0;
  this->B1Delta = 0.0;
  piVar2 = &(this->Z1).ArrayNum;
  this->B1Target = 0.0;
  this->CurrInterpLength = 0;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&(this->Z1).AllocatorInstance,0,piVar1);
  }
  iVar3 = this->NumChannels;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,iVar3,&(this->Z1).AllocatorInstance,piVar2,piVar1);
  memset((this->Z1).AllocatorInstance.Data + (longlong)iVar4 * 4,0,(longlong)iVar3 << 2);
  this->Z1Data = (float *)(this->Z1).AllocatorInstance.Data;
  this->bIsFirstFrequencyChange = true;
  return;
}

// StartFrequencyInterpolation @ 14451e1f0

void __thiscall
Audio::FInterpolatedLPF::StartFrequencyInterpolation
          (FInterpolatedLPF *this,float param_1,int param_2)

{
  float fVar1;
  
  this->CurrInterpLength = param_2;
  if (this->bIsFirstFrequencyChange != false) {
    this->CurrInterpLength = 0;
    param_2 = 0;
    this->bIsFirstFrequencyChange = false;
  }
  if (__real_322bcc77 <
      (float)((uint)(param_1 - this->CutoffFrequency) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    this->CutoffFrequency = param_1;
    fVar1 = (param_1 + param_1) / this->SampleRate;
    if (__real_3f800000 <= fVar1) {
      fVar1 = __real_3f800000;
    }
    if (fVar1 <= 0.0) {
      fVar1 = 0.0;
    }
    fVar1 = expf(fVar1 * __real_c0490fdb);
    this->B1Target = fVar1;
    this->B1Delta = (fVar1 - this->B1Curr) / (float)param_2;
  }
  if (param_2 < 2) {
    this->B1Curr = this->B1Target;
    this->B1Delta = 0.0;
  }
  return;
}

