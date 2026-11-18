// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 8

// FInterpolatedHPF @ 1444ef770

FInterpolatedHPF * __thiscall Audio::FInterpolatedHPF::FInterpolatedHPF(FInterpolatedHPF *this)

{
  this->CutoffFrequency = -1.0;
  this->A0Curr = 0.0;
  this->A0Delta = 0.0;
  this->A0Target = 0.0;
  (this->Z1).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Z1).ArrayNum = 0;
  (this->Z1).ArrayMax = 0;
  this->Z1Data = (float *)0x0;
  this->CurrInterpLength = 0;
  this->SampleRate = 0.0;
  this->NyquistLimit = 0.0;
  this->NumChannels = 1;
  this->bIsFirstFrequencyChange = true;
  Reset(this);
  return this;
}

// ArrayCalculateResponseInPlace @ 1444f7060

void __thiscall
Audio::FInterpolatedHPF::ArrayCalculateResponseInPlace
          (FInterpolatedHPF *this,TArrayView<float,int> *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  float fVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  complex<float> local_98;
  float local_90;
  float fStack_8c;
  
  fVar5 = __real_3f800000;
  iVar2 = param_1->ArrayNum;
  fVar1 = this->A0Curr;
  fVar14 = (fVar1 + fVar1) - __real_3f800000;
  if ((((longlong)iVar2 & 1U) != 0) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumFloats % 2 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\InterpolatedOnePole.cpp"
                         ,0x1fa,L""), bVar7)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar6 = __xmm_80000000800000008000000080000000;
  uVar10 = 0;
  if (0 < iVar2) {
    lVar11 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = uVar10 + 1;
      fVar12 = param_1->DataPtr[lVar11];
      uVar9 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fStack_8c = param_1->DataPtr[lVar11 + 1];
      local_90 = fVar12 + fVar14;
      local_98._4_4_ = param_1->DataPtr[lVar11 + 1] * fVar1;
      local_98._0_4_ = fVar12 * fVar1 + fVar1;
      std::complex<float>::operator/=(&local_98,(complex<float> *)&local_90);
      fVar13 = (float)(local_98._4_4_ ^ uVar6);
      fVar12 = fVar5 - (float)local_98._0_4_;
      uVar9 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar9 = ~uVar10 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar3 = param_1->ArrayNum;
      param_1->DataPtr[lVar11] = fVar12;
      uVar9 = 0;
      if ((int)uVar8 < iVar3) {
        uVar9 = ~uVar8 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = uVar10 + 2;
      param_1->DataPtr[lVar11 + 1] = fVar13;
      lVar11 = lVar11 + 2;
    } while (lVar11 < iVar2);
  }
  return;
}

// ClearMemory @ 1444f7d60

void __thiscall Audio::FInterpolatedHPF::ClearMemory(FInterpolatedHPF *this)

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

// Init @ 144505990

void __thiscall Audio::FInterpolatedHPF::Init(FInterpolatedHPF *this,float param_1,int param_2)

{
  float fVar1;
  float local_res10 [6];
  
  this->SampleRate = param_1;
  fVar1 = param_1 * __real_3f000000;
  this->NumChannels = param_2;
  this->CutoffFrequency = -1.0;
  local_res10[0] = 0.0;
  this->NyquistLimit = fVar1 - __real_3f800000;
  TArray<float,TSizedDefaultAllocator<32>_>::Init(&this->Z1,local_res10,param_2);
  this->Z1Data = (float *)(this->Z1).AllocatorInstance.Data;
  Reset(this);
  return;
}

// ProcessAudioBuffer @ 14450f8f0

void __thiscall
Audio::FInterpolatedHPF::ProcessAudioBuffer
          (FInterpolatedHPF *this,float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  float *pfVar11;
  longlong lVar12;
  int iVar13;
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
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  iVar7 = this->NumChannels;
  uVar10 = 0;
  lVar9 = (longlong)param_3;
  if (iVar7 == 1) {
    pfVar11 = this->Z1Data;
    lVar12 = (longlong)param_1 - (longlong)param_2;
    fVar29 = this->A0Curr;
    fVar30 = this->A0Delta;
    fVar14 = *pfVar11;
    if (3 < lVar9) {
      pfVar6 = param_2 + 1;
      lVar8 = (lVar9 - 4U >> 2) + 1;
      uVar10 = lVar8 * 4;
      do {
        fVar15 = *(float *)(lVar12 + -4 + (longlong)pfVar6);
        fVar16 = (fVar15 - fVar14) * (fVar29 + fVar30);
        fVar29 = fVar29 + fVar30 + fVar30;
        fVar14 = fVar16 + fVar14;
        fVar16 = fVar14 + fVar16;
        pfVar6[-1] = fVar15 - fVar14;
        fVar17 = (*(float *)(lVar12 + (longlong)pfVar6) - fVar16) * fVar29;
        fVar29 = fVar29 + fVar30;
        fVar16 = fVar17 + fVar16;
        fVar14 = *(float *)(lVar12 + 4 + (longlong)pfVar6);
        fVar17 = fVar16 + fVar17;
        *pfVar6 = *(float *)(lVar12 + (longlong)pfVar6) - fVar16;
        fVar16 = (fVar14 - fVar17) * fVar29;
        fVar29 = fVar29 + fVar30;
        fVar17 = fVar16 + fVar17;
        fVar15 = *(float *)(lVar12 + 8 + (longlong)pfVar6);
        fVar16 = fVar17 + fVar16;
        pfVar6[1] = fVar14 - fVar17;
        fVar14 = (fVar15 - fVar16) * fVar29;
        fVar16 = fVar14 + fVar16;
        fVar14 = fVar16 + fVar14;
        pfVar6[2] = fVar15 - fVar16;
        pfVar6 = pfVar6 + 4;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    if ((longlong)uVar10 < lVar9) {
      pfVar6 = param_2 + uVar10;
      lVar9 = lVar9 - uVar10;
      do {
        fVar29 = fVar29 + fVar30;
        fVar16 = (*(float *)(lVar12 + (longlong)pfVar6) - fVar14) * fVar29;
        fVar15 = fVar16 + fVar14;
        fVar14 = fVar15 + fVar16;
        *pfVar6 = *(float *)(lVar12 + (longlong)pfVar6) - fVar15;
        pfVar6 = pfVar6 + 1;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    *pfVar11 = fVar14;
    this->A0Curr = fVar29;
    return;
  }
  uVar5 = param_3 & 0xfffffffc;
  if (iVar7 == 2) {
    fVar29 = this->A0Delta;
    pfVar11 = this->Z1Data;
    fVar30 = this->A0Curr;
    fVar15 = fVar29 + fVar29;
    uVar2 = *(undefined8 *)pfVar11;
    fVar16 = (float)uVar2;
    fVar17 = (float)((ulonglong)uVar2 >> 0x20);
    fVar14 = fVar30;
    if (uVar5 != 0) {
      fVar14 = fVar30 + fVar29;
      fVar29 = fVar30 + fVar29;
      uVar10 = 0;
      if (0 < (int)uVar5) {
        lVar9 = ((longlong)(int)uVar5 - 1U >> 2) + 1;
        uVar10 = (ulonglong)(uint)((int)lVar9 * 4);
        pfVar6 = param_2;
        fVar31 = fVar30;
        do {
          fVar31 = fVar31 + fVar15;
          fVar30 = fVar30 + fVar15;
          pfVar1 = (float *)(((longlong)param_1 - (longlong)param_2) + (longlong)pfVar6);
          fVar27 = *pfVar1;
          fVar28 = pfVar1[1];
          fVar3 = pfVar1[2];
          fVar4 = pfVar1[3];
          fVar18 = (fVar27 - fVar16) * fVar14;
          fVar20 = (fVar28 - fVar17) * fVar29;
          fVar18 = fVar18 + fVar16 + fVar18;
          fVar20 = fVar20 + fVar17 + fVar20;
          fVar19 = (fVar27 - fVar16) * fVar14;
          fVar21 = (fVar28 - fVar17) * fVar29;
          fVar23 = (fVar3 - fVar18) * fVar30;
          fVar25 = (fVar4 - fVar20) * fVar31;
          fVar14 = fVar14 + fVar15;
          fVar29 = fVar29 + fVar15;
          fVar19 = fVar16 + fVar19;
          fVar21 = fVar17 + fVar21;
          fVar18 = fVar18 + fVar23;
          fVar20 = fVar20 + fVar25;
          fVar16 = fVar18 + fVar23;
          fVar17 = fVar20 + fVar25;
          *pfVar6 = fVar27 - fVar19;
          pfVar6[1] = fVar28 - fVar21;
          pfVar6[2] = fVar3 - fVar18;
          pfVar6[3] = fVar4 - fVar20;
          pfVar6 = pfVar6 + 4;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
    }
    this->A0Curr = fVar14;
    *pfVar11 = fVar16;
    this->Z1Data[1] = fVar17;
  }
  else if (iVar7 == 4) {
    pfVar11 = this->Z1Data;
    fVar29 = this->A0Curr;
    fVar30 = this->A0Delta;
    fVar14 = *pfVar11;
    fVar15 = pfVar11[1];
    fVar16 = pfVar11[2];
    fVar17 = pfVar11[3];
    if (0 < (int)uVar5) {
      lVar9 = ((longlong)(int)uVar5 - 1U >> 2) + 1;
      uVar10 = (ulonglong)(uint)((int)lVar9 * 4);
      pfVar6 = param_2;
      fVar31 = fVar29;
      fVar27 = fVar29;
      fVar28 = fVar29;
      do {
        pfVar1 = (float *)(((longlong)param_1 - (longlong)param_2) + (longlong)pfVar6);
        fVar3 = pfVar1[1];
        fVar4 = pfVar1[2];
        fVar18 = pfVar1[3];
        fVar29 = fVar29 + fVar30;
        fVar31 = fVar31 + fVar30;
        fVar27 = fVar27 + fVar30;
        fVar28 = fVar28 + fVar30;
        fVar25 = (*pfVar1 - fVar14) * fVar29;
        fVar22 = (fVar3 - fVar15) * fVar31;
        fVar24 = (fVar4 - fVar16) * fVar27;
        fVar26 = (fVar18 - fVar17) * fVar28;
        fVar20 = fVar25 + fVar14;
        fVar19 = fVar22 + fVar15;
        fVar21 = fVar24 + fVar16;
        fVar23 = fVar26 + fVar17;
        fVar14 = fVar20 + fVar25;
        fVar15 = fVar19 + fVar22;
        fVar16 = fVar21 + fVar24;
        fVar17 = fVar23 + fVar26;
        *pfVar6 = *pfVar1 - fVar20;
        pfVar6[1] = fVar3 - fVar19;
        pfVar6[2] = fVar4 - fVar21;
        pfVar6[3] = fVar18 - fVar23;
        pfVar6 = pfVar6 + 4;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    this->A0Curr = fVar29;
    *pfVar11 = fVar14;
    pfVar11[1] = fVar15;
    pfVar11[2] = fVar16;
    pfVar11[3] = fVar17;
  }
  iVar7 = (int)uVar10;
  if (iVar7 < param_3) {
    lVar9 = (longlong)iVar7;
    if (3 < param_3 - iVar7) {
      iVar13 = iVar7 + 2;
      lVar12 = (longlong)param_1 - (longlong)param_2;
      pfVar11 = param_2 + lVar9 + 1;
      lVar9 = lVar9 + (ulonglong)((((param_3 + -3) - iVar7) - 1U >> 2) + 1) * 4;
      do {
        fVar29 = *(float *)((longlong)pfVar11 + lVar12 + -4);
        iVar7 = (int)uVar10 % this->NumChannels;
        pfVar6 = this->Z1Data;
        fVar30 = (float)(iVar7 == 0) * this->A0Delta + this->A0Curr;
        this->A0Curr = fVar30;
        fVar30 = (fVar29 - pfVar6[iVar7]) * fVar30;
        fVar14 = fVar30 + pfVar6[iVar7];
        pfVar6[iVar7] = fVar30 + fVar14;
        pfVar11[-1] = fVar29 - fVar14;
        iVar7 = (iVar13 + -1) % this->NumChannels;
        fVar29 = *(float *)((longlong)pfVar11 + lVar12);
        pfVar6 = this->Z1Data;
        fVar30 = (float)(iVar7 == 0) * this->A0Delta + this->A0Curr;
        this->A0Curr = fVar30;
        fVar30 = (fVar29 - pfVar6[iVar7]) * fVar30;
        fVar14 = fVar30 + pfVar6[iVar7];
        pfVar6[iVar7] = fVar30 + fVar14;
        *pfVar11 = fVar29 - fVar14;
        iVar7 = iVar13 % this->NumChannels;
        fVar29 = *(float *)((longlong)pfVar11 + lVar12 + 4);
        pfVar6 = this->Z1Data;
        fVar30 = (float)(iVar7 == 0) * this->A0Delta + this->A0Curr;
        this->A0Curr = fVar30;
        fVar30 = (fVar29 - pfVar6[iVar7]) * fVar30;
        fVar14 = fVar30 + pfVar6[iVar7];
        pfVar6[iVar7] = fVar30 + fVar14;
        pfVar11[1] = fVar29 - fVar14;
        iVar7 = (iVar13 + 1) % this->NumChannels;
        fVar29 = *(float *)((longlong)pfVar11 + lVar12 + 8);
        fVar30 = (float)(iVar7 == 0) * this->A0Delta + this->A0Curr;
        this->A0Curr = fVar30;
        pfVar6 = this->Z1Data;
        uVar5 = (int)uVar10 + 4;
        uVar10 = (ulonglong)uVar5;
        iVar13 = iVar13 + 4;
        fVar30 = (fVar29 - pfVar6[iVar7]) * fVar30;
        fVar14 = fVar30 + pfVar6[iVar7];
        pfVar11[2] = fVar29 - fVar14;
        pfVar11 = pfVar11 + 4;
        pfVar6[iVar7] = fVar30 + fVar14;
      } while ((int)uVar5 < param_3 + -3);
      if (param_3 <= (int)uVar5) {
        return;
      }
    }
    pfVar11 = param_2 + lVar9;
    do {
      fVar29 = *(float *)(((longlong)param_1 - (longlong)param_2) + (longlong)pfVar11);
      iVar7 = (int)uVar10 % this->NumChannels;
      uVar5 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar5;
      pfVar6 = this->Z1Data;
      fVar30 = (float)(iVar7 == 0) * this->A0Delta + this->A0Curr;
      this->A0Curr = fVar30;
      fVar30 = (fVar29 - pfVar6[iVar7]) * fVar30;
      fVar14 = fVar30 + pfVar6[iVar7];
      *pfVar11 = fVar29 - fVar14;
      pfVar11 = pfVar11 + 1;
      pfVar6[iVar7] = fVar30 + fVar14;
    } while ((int)uVar5 < param_3);
  }
  return;
}

// ProcessAudioFrame @ 144511200

void __thiscall
Audio::FInterpolatedHPF::ProcessAudioFrame(FInterpolatedHPF *this,float *param_1,float *param_2)

{
  float fVar1;
  float *pfVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
  iVar4 = 0;
  this->A0Curr = this->A0Delta + this->A0Curr;
  if (0 < this->NumChannels) {
    lVar3 = 0;
    do {
      pfVar2 = this->Z1Data;
      fVar1 = *(float *)(lVar3 + (longlong)param_2 + ((longlong)param_1 - (longlong)param_2));
      iVar4 = iVar4 + 1;
      fVar6 = (fVar1 - *(float *)((longlong)pfVar2 + lVar3)) * this->A0Curr;
      fVar5 = fVar6 + *(float *)((longlong)pfVar2 + lVar3);
      *(float *)(lVar3 + (longlong)param_2) = fVar1 - fVar5;
      *(float *)((longlong)pfVar2 + lVar3) = fVar5 + fVar6;
      lVar3 = lVar3 + 4;
    } while (iVar4 < this->NumChannels);
  }
  return;
}

// Reset @ 144517110

void __thiscall Audio::FInterpolatedHPF::Reset(FInterpolatedHPF *this)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = &(this->Z1).ArrayMax;
  this->A0Curr = 0.0;
  this->A0Delta = 0.0;
  piVar2 = &(this->Z1).ArrayNum;
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

// StartFrequencyInterpolation @ 14451e110

void __thiscall
Audio::FInterpolatedHPF::StartFrequencyInterpolation
          (FInterpolatedHPF *this,float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  
  this->CurrInterpLength = param_2;
  if (this->bIsFirstFrequencyChange != false) {
    this->CurrInterpLength = 0;
    param_2 = 0;
    this->bIsFirstFrequencyChange = false;
  }
  fVar1 = __real_3f800000;
  if (__real_322bcc77 <
      (float)((uint)(param_1 - this->CutoffFrequency) & __xmm_7fffffff7fffffff7fffffff7fffffff)) {
    fVar2 = this->NyquistLimit;
    if (param_1 <= this->NyquistLimit) {
      fVar2 = param_1;
    }
    if (fVar2 <= 0.0) {
      fVar2 = 0.0;
    }
    this->CutoffFrequency = fVar2;
    fVar2 = (fVar2 * __real_40490fdb) / this->SampleRate;
    fVar2 = ((fVar1 - (float)((uint)fVar2 & __xmm_7fffffff7fffffff7fffffff7fffffff) *
                      __real_3ea2f983) * fVar2) /
            ((fVar1 - (float)((uint)(fVar2 + __real_3fc90fdb) &
                             __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3ea2f983) *
            (fVar2 + __real_3fc90fdb));
    fVar2 = fVar2 / (fVar2 + fVar1);
    this->A0Target = fVar2;
    this->A0Delta = (fVar2 - this->A0Curr) / (float)param_2;
  }
  if (param_2 < 2) {
    this->A0Delta = 0.0;
    this->A0Curr = this->A0Target;
  }
  return;
}

