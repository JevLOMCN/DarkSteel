// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 9

// FOnePoleFilter @ 1444a5120

FOnePoleFilter * __thiscall Audio::FOnePoleFilter::FOnePoleFilter(FOnePoleFilter *this)

{
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x472c4400;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FOnePoleFilter_Audio__6B_;
  *(undefined4 *)&this->_padding_ = 1;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x468ca000;
  this->_padding_ = 0x468ca000;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0x3fc00000;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0x3fc00000;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  this->_padding_ = -1;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = -1;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined1 *)&this->_padding_ = 0;
  this->A0 = 0.0;
  this->Z1 = (float *)0x0;
  return this;
}

// ~FOnePoleFilter @ 1444a6830

void __thiscall Audio::FOnePoleFilter::~FOnePoleFilter(FOnePoleFilter *this)

{
  this->_padding_ = (longlong)&___7FOnePoleFilter_Audio__6B_;
  if (this->Z1 != (float *)0x0) {
    operator_delete__(this->Z1);
  }
  this->_padding_ = (longlong)&___7IFilter_Audio__6B_;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
    return;
  }
  return;
}

// ArrayCalculateResponseInPlace @ 1444ab460

void __thiscall
Audio::FOnePoleFilter::ArrayCalculateResponseInPlace
          (FOnePoleFilter *this,TArrayView<float,int> *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  complex<float> local_a8;
  undefined8 local_a0;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  
  fVar2 = __real_3f800000;
  uVar11 = (ulonglong)param_1->ArrayNum;
  fVar1 = this->A0;
  fVar14 = (fVar1 + fVar1) - __real_3f800000;
  if (((uVar11 & 1) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumFloats % 2 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\Filter.cpp"
                         ,0x2d3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar8 = __xmm_80000000800000008000000080000000;
  uVar10 = 0;
  if (*(int *)((longlong)&this->_padding_ + 4) == 1) {
    if (0 < (longlong)uVar11) {
      lVar9 = 0;
      do {
        uVar6 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar6 = ~uVar10 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar6 = uVar10 + 1;
        fVar12 = param_1->DataPtr[lVar9];
        uVar7 = 0;
        if ((int)uVar6 < param_1->ArrayNum) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        fStack_94 = param_1->DataPtr[lVar9 + 1];
        local_98 = fVar12 + fVar14;
        local_a8._4_4_ = this->A0 * param_1->DataPtr[lVar9 + 1];
        local_a8._0_4_ = this->A0 * fVar12 + fVar1;
        std::complex<float>::operator/=(&local_a8,(complex<float> *)&local_98);
        fVar13 = (float)(local_a8._4_4_ ^ uVar8);
        fVar12 = fVar2 - (float)local_a8._0_4_;
        uVar7 = 0;
        if ((int)uVar10 < param_1->ArrayNum) {
          uVar7 = ~uVar10 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar3 = param_1->ArrayNum;
        param_1->DataPtr[lVar9] = fVar12;
        uVar7 = 0;
        if ((int)uVar6 < iVar3) {
          uVar7 = ~uVar6 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        uVar10 = uVar10 + 2;
        param_1->DataPtr[lVar9 + 1] = fVar13;
        lVar9 = lVar9 + 2;
      } while (lVar9 < (longlong)uVar11);
    }
  }
  else if (0 < (longlong)uVar11) {
    lVar9 = 0;
    do {
      uVar8 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar8 = ~uVar10 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar8 = uVar10 + 1;
      fVar2 = param_1->DataPtr[lVar9];
      uVar6 = 0;
      if ((int)uVar8 < param_1->ArrayNum) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fStack_8c = param_1->DataPtr[lVar9 + 1];
      local_90 = fVar2 + fVar14;
      local_a0._4_4_ = this->A0 * param_1->DataPtr[lVar9 + 1];
      local_a0._0_4_ = this->A0 * fVar2 + fVar1;
      std::complex<float>::operator/=((complex<float> *)&local_a0,(complex<float> *)&local_90);
      fVar2 = (float)local_a0;
      uVar6 = 0;
      if ((int)uVar10 < param_1->ArrayNum) {
        uVar6 = ~uVar10 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar3 = param_1->ArrayNum;
      param_1->DataPtr[lVar9] = fVar2;
      fVar2 = local_a0._4_4_;
      uVar6 = 0;
      if ((int)uVar8 < iVar3) {
        uVar6 = ~uVar8 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar10 = uVar10 + 2;
      param_1->DataPtr[lVar9 + 1] = fVar2;
      lVar9 = lVar9 + 2;
    } while (lVar9 < (longlong)uVar11);
  }
  return;
}

// Init @ 1444c3790

void __thiscall
Audio::FOnePoleFilter::Init
          (FOnePoleFilter *this,float param_1,int param_2,int param_3,FModulationMatrix *param_4)

{
  undefined1 auVar1 [16];
  ulong64 uVar2;
  float *pfVar3;
  
  IFilter::Init((IFilter *)this,param_1,param_2,param_3,param_4);
  if (this->Z1 != (float *)0x0) {
    operator_delete__(this->Z1);
  }
  auVar1._8_8_ = 0;
  auVar1._0_8_ = (longlong)(int)this->_padding_;
  uVar2 = SUB168(ZEXT816(4) * auVar1,0);
  if (SUB168(ZEXT816(4) * auVar1,8) != 0) {
    uVar2 = 0xffffffffffffffff;
  }
  pfVar3 = operator_new__(uVar2);
  this->Z1 = pfVar3;
                    /* WARNING: Could not recover jumptable at 0x0001444c37ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x50))(this);
  return;
}

// ProcessAudio @ 1444da470

void __thiscall
Audio::FOnePoleFilter::ProcessAudio(FOnePoleFilter *this,float *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  iVar6 = 0;
  if (*(int *)((longlong)&this->_padding_ + 4) == 1) {
    if (0 < param_2) {
      iVar3 = (int)this->_padding_;
      do {
        iVar5 = 0;
        if (0 < iVar3) {
          lVar4 = 0;
          do {
            pfVar2 = this->Z1;
            pfVar1 = (float *)((longlong)param_3 + lVar4 + (longlong)iVar6 * 4);
            fVar7 = *(float *)((longlong)pfVar1 + ((longlong)param_1 - (longlong)param_3));
            iVar5 = iVar5 + 1;
            fVar9 = (fVar7 - *(float *)((longlong)pfVar2 + lVar4)) * this->A0;
            fVar8 = fVar9 + *(float *)((longlong)pfVar2 + lVar4);
            *(float *)((longlong)pfVar2 + lVar4) = fVar8 + fVar9;
            lVar4 = lVar4 + 4;
            *pfVar1 = fVar7 - fVar8;
            iVar3 = (int)this->_padding_;
          } while (iVar5 < iVar3);
        }
        iVar6 = iVar6 + iVar3;
      } while (iVar6 < param_2);
    }
  }
  else if (0 < param_2) {
    iVar3 = (int)this->_padding_;
    do {
      iVar5 = 0;
      if (0 < iVar3) {
        lVar4 = 0;
        do {
          pfVar2 = this->Z1;
          pfVar1 = (float *)((longlong)param_3 + lVar4 + (longlong)iVar6 * 4);
          iVar5 = iVar5 + 1;
          fVar8 = (*(float *)(((longlong)param_1 - (longlong)param_3) + (longlong)pfVar1) -
                  *(float *)((longlong)pfVar2 + lVar4)) * this->A0;
          fVar7 = fVar8 + *(float *)((longlong)pfVar2 + lVar4);
          *(float *)((longlong)pfVar2 + lVar4) = fVar8 + fVar7;
          lVar4 = lVar4 + 4;
          *pfVar1 = fVar7;
          iVar3 = (int)this->_padding_;
        } while (iVar5 < iVar3);
      }
      iVar6 = iVar6 + iVar3;
    } while (iVar6 < param_2);
  }
  return;
}

// ProcessAudio @ 1444da5c0

void __thiscall
Audio::FOnePoleFilter::ProcessAudio
          (FOnePoleFilter *this,float **param_1,int param_2,float **param_3)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
  longlong lVar5;
  float *pfVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  float **ppfVar11;
  longlong lVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  iVar1 = (int)this->_padding_;
  lVar8 = (longlong)param_2;
  if (*(int *)((longlong)&this->_padding_ + 4) == 1) {
    iVar13 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      lVar12 = (longlong)param_1 - (longlong)param_3;
      do {
        ppfVar11 = &this->Z1;
        lVar2 = *(longlong *)((longlong)param_3 + lVar12);
        lVar10 = 0;
        pfVar3 = *param_3;
        if (3 < lVar8) {
          lVar7 = lVar2 - (longlong)pfVar3;
          lVar5 = (lVar8 - 4U >> 2) + 1;
          pfVar6 = pfVar3 + 1;
          lVar10 = lVar5 * 4;
          do {
            fVar15 = *(float *)((longlong)pfVar6 + lVar7 + -4);
            pfVar4 = *ppfVar11;
            fVar16 = (fVar15 - *(float *)(lVar9 + (longlong)pfVar4)) * this->A0;
            fVar14 = fVar16 + *(float *)(lVar9 + (longlong)pfVar4);
            *(float *)(lVar9 + (longlong)pfVar4) = fVar14 + fVar16;
            pfVar6[-1] = fVar15 - fVar14;
            fVar15 = *(float *)((longlong)pfVar6 + lVar7);
            pfVar4 = *ppfVar11;
            fVar16 = (fVar15 - *(float *)(lVar9 + (longlong)pfVar4)) * this->A0;
            fVar14 = fVar16 + *(float *)(lVar9 + (longlong)pfVar4);
            *(float *)(lVar9 + (longlong)pfVar4) = fVar14 + fVar16;
            *pfVar6 = fVar15 - fVar14;
            pfVar4 = *ppfVar11;
            fVar15 = *(float *)((longlong)pfVar6 + lVar7 + 4);
            fVar16 = (fVar15 - *(float *)(lVar9 + (longlong)pfVar4)) * this->A0;
            fVar14 = fVar16 + *(float *)(lVar9 + (longlong)pfVar4);
            *(float *)(lVar9 + (longlong)pfVar4) = fVar14 + fVar16;
            pfVar6[1] = fVar15 - fVar14;
            fVar15 = *(float *)((longlong)pfVar6 + lVar7 + 8);
            pfVar4 = *ppfVar11;
            fVar16 = (fVar15 - *(float *)(lVar9 + (longlong)pfVar4)) * this->A0;
            fVar14 = fVar16 + *(float *)(lVar9 + (longlong)pfVar4);
            *(float *)(lVar9 + (longlong)pfVar4) = fVar14 + fVar16;
            pfVar6[2] = fVar15 - fVar14;
            pfVar6 = pfVar6 + 4;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        if (lVar10 < lVar8) {
          pfVar6 = pfVar3 + lVar10;
          lVar10 = lVar8 - lVar10;
          do {
            fVar15 = *(float *)((longlong)pfVar6 + (lVar2 - (longlong)pfVar3));
            pfVar4 = this->Z1;
            fVar16 = (fVar15 - *(float *)(lVar9 + (longlong)pfVar4)) * this->A0;
            fVar14 = fVar16 + *(float *)(lVar9 + (longlong)pfVar4);
            *(float *)(lVar9 + (longlong)pfVar4) = fVar14 + fVar16;
            *pfVar6 = fVar15 - fVar14;
            pfVar6 = pfVar6 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        iVar13 = iVar13 + 1;
        param_3 = param_3 + 1;
        lVar9 = lVar9 + 4;
      } while (iVar13 < (int)this->_padding_);
    }
  }
  else {
    iVar13 = 0;
    if (0 < iVar1) {
      lVar9 = 0;
      lVar12 = (longlong)param_1 - (longlong)param_3;
      do {
        lVar2 = *(longlong *)(lVar12 + (longlong)param_3);
        lVar10 = 0;
        pfVar3 = *param_3;
        if (3 < lVar8) {
          lVar7 = lVar2 - (longlong)pfVar3;
          lVar5 = (lVar8 - 4U >> 2) + 1;
          pfVar6 = pfVar3 + 1;
          lVar10 = lVar5 * 4;
          do {
            pfVar4 = this->Z1;
            fVar14 = (*(float *)((longlong)pfVar6 + lVar7 + -4) -
                     *(float *)((longlong)pfVar4 + lVar9)) * this->A0;
            fVar15 = fVar14 + *(float *)((longlong)pfVar4 + lVar9);
            *(float *)((longlong)pfVar4 + lVar9) = fVar15 + fVar14;
            pfVar6[-1] = fVar15;
            pfVar4 = this->Z1;
            fVar14 = (*(float *)((longlong)pfVar6 + lVar7) - *(float *)((longlong)pfVar4 + lVar9)) *
                     this->A0;
            fVar15 = fVar14 + *(float *)((longlong)pfVar4 + lVar9);
            *(float *)((longlong)pfVar4 + lVar9) = fVar14 + fVar15;
            *pfVar6 = fVar15;
            pfVar4 = this->Z1;
            fVar14 = (*(float *)((longlong)pfVar6 + lVar7 + 4) -
                     *(float *)((longlong)pfVar4 + lVar9)) * this->A0;
            fVar15 = fVar14 + *(float *)((longlong)pfVar4 + lVar9);
            *(float *)((longlong)pfVar4 + lVar9) = fVar14 + fVar15;
            pfVar6[1] = fVar15;
            pfVar4 = this->Z1;
            fVar14 = (*(float *)((longlong)pfVar6 + lVar7 + 8) -
                     *(float *)((longlong)pfVar4 + lVar9)) * this->A0;
            fVar15 = fVar14 + *(float *)((longlong)pfVar4 + lVar9);
            *(float *)((longlong)pfVar4 + lVar9) = fVar14 + fVar15;
            pfVar6[2] = fVar15;
            pfVar6 = pfVar6 + 4;
            lVar5 = lVar5 + -1;
          } while (lVar5 != 0);
        }
        if (lVar10 < lVar8) {
          pfVar6 = pfVar3 + lVar10;
          lVar10 = lVar8 - lVar10;
          do {
            pfVar4 = this->Z1;
            fVar14 = (*(float *)((lVar2 - (longlong)pfVar3) + (longlong)pfVar6) -
                     *(float *)((longlong)pfVar4 + lVar9)) * this->A0;
            fVar15 = fVar14 + *(float *)((longlong)pfVar4 + lVar9);
            *(float *)((longlong)pfVar4 + lVar9) = fVar15 + fVar14;
            *pfVar6 = fVar15;
            pfVar6 = pfVar6 + 1;
            lVar10 = lVar10 + -1;
          } while (lVar10 != 0);
        }
        iVar13 = iVar13 + 1;
        param_3 = param_3 + 1;
        lVar9 = lVar9 + 4;
      } while (iVar13 < (int)this->_padding_);
    }
  }
  return;
}

// ProcessAudioFrame @ 1444df230

void __thiscall
Audio::FOnePoleFilter::ProcessAudioFrame(FOnePoleFilter *this,float *param_1,float *param_2)

{
  int iVar1;
  float *pfVar2;
  longlong lVar3;
  float *pfVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  float fVar8;
  float fVar9;
  
  iVar1 = (int)this->_padding_;
  uVar5 = 0;
  if (*(int *)((longlong)&this->_padding_ + 4) == 1) {
    if (0 < iVar1) {
      pfVar4 = param_1;
      do {
        pfVar2 = this->Z1;
        lVar3 = (longlong)pfVar4 - (longlong)param_1;
        uVar6 = (int)uVar5 + 1;
        uVar5 = (ulonglong)uVar6;
        fVar8 = (*pfVar4 - *(float *)(lVar3 + (longlong)pfVar2)) * this->A0;
        fVar9 = fVar8 + *(float *)(lVar3 + (longlong)pfVar2);
        *(float *)(lVar3 + (longlong)pfVar2) = fVar9 + fVar8;
        *(float *)((longlong)pfVar4 + ((longlong)param_2 - (longlong)param_1)) = *pfVar4 - fVar9;
        pfVar4 = pfVar4 + 1;
      } while ((int)uVar6 < (int)this->_padding_);
      return;
    }
  }
  else if (0 < iVar1) {
    uVar7 = uVar5;
    do {
      pfVar2 = this->Z1;
      pfVar4 = (float *)(uVar5 + (longlong)param_2);
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      fVar9 = (*(float *)((longlong)pfVar4 + ((longlong)param_1 - (longlong)param_2)) -
              *(float *)(uVar5 + (longlong)pfVar2)) * this->A0;
      fVar8 = fVar9 + *(float *)(uVar5 + (longlong)pfVar2);
      *(float *)(uVar5 + (longlong)pfVar2) = fVar9 + fVar8;
      uVar5 = uVar5 + 4;
      *pfVar4 = fVar8;
    } while ((int)uVar6 < (int)this->_padding_);
  }
  return;
}

// Reset @ 1444e1b10

void __thiscall Audio::FOnePoleFilter::Reset(FOnePoleFilter *this)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 1;
  memset(this->Z1,0,(longlong)(int)lVar1 << 2);
  return;
}

// Update @ 1444e7d40

void __thiscall Audio::FOnePoleFilter::Update(FOnePoleFilter *this)

{
  float fVar1;
  float fVar2;
  
  IFilter::Update((IFilter *)this);
  fVar2 = __real_3f800000 / *(float *)((longlong)&this->_padding_ + 4);
  fVar1 = *(float *)((longlong)&this->_padding_ + 4) * __real_40490fdb * fVar2;
  fVar2 = (((__real_3f800000 -
            (float)((uint)fVar1 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3ea2f983) * fVar1
           ) / ((__real_3f800000 -
                (float)((uint)(fVar1 + __real_3fc90fdb) & __xmm_7fffffff7fffffff7fffffff7fffffff) *
                __real_3ea2f983) * (fVar1 + __real_3fc90fdb))) *
          *(float *)((longlong)&this->_padding_ + 4) * fVar2;
  this->A0 = fVar2 / (fVar2 + __real_3f800000);
  return;
}

