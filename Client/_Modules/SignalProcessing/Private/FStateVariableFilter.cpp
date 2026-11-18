// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 11

// FStateVariableFilter @ 1444a51b0

FStateVariableFilter * __thiscall
Audio::FStateVariableFilter::FStateVariableFilter(FStateVariableFilter *this)

{
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x472c4400;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FStateVariableFilter_Audio__6B_;
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
  this->InputScale = 1.0;
  this->A0 = 1.0;
  this->Feedback = 1.0;
  this->BandStopParam = 0.5;
  (this->FilterState).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FilterState).ArrayNum = 0;
  (this->FilterState).ArrayMax = 0;
  return this;
}

// ~FStateVariableFilter @ 1444a6890

void __thiscall Audio::FStateVariableFilter::~FStateVariableFilter(FStateVariableFilter *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7FStateVariableFilter_Audio__6B_;
  pFVar1 = (this->FilterState).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
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

// ArrayCalculateResponseInPlace @ 1444ab920

void __thiscall
Audio::FStateVariableFilter::ArrayCalculateResponseInPlace
          (FStateVariableFilter *this,TArrayView<float,int> *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
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
  undefined8 local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float fStack_dc;
  FStateVariableFilter *local_d8;
  ulonglong local_d0;
  
  iVar2 = param_1->ArrayNum;
  fVar1 = this->A0;
  fVar22 = fVar1 * fVar1;
  fVar15 = (this->Feedback - fVar1) * fVar1;
  local_d8 = this;
  if ((((longlong)iVar2 & 1U) != 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("NumFloats % 2 == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\Filter.cpp"
                         ,0x3b3,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar9 = 0;
  if (0 < iVar2) {
    iVar10 = 1;
    lVar11 = 0;
    local_e8 = (fVar22 - fVar15) + __real_3f800000;
    local_e4 = fVar15 + fVar22 + __real_3f800000;
    local_d0 = (longlong)iVar2;
    do {
      fVar12 = local_e4;
      fVar16 = __real_40000000;
      fVar15 = __real_3f800000;
      uVar6 = 0;
      if ((int)uVar9 < param_1->ArrayNum) {
        uVar6 = ~uVar9 >> 0x1f;
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
      uVar6 = uVar9 + 1;
      iVar2 = param_1->ArrayNum;
      fVar13 = param_1->DataPtr[lVar11];
      uVar7 = 0;
      if (iVar10 < iVar2) {
        uVar7 = ~uVar6 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_f0 = (complex<float>)0x3f800000;
      fVar18 = param_1->DataPtr[lVar11 + 1];
      fVar20 = fVar13 * fVar22 + fVar22 + fVar22;
      fVar14 = (fVar12 * fVar13 + fVar22 + fVar22) - __real_40000000;
      fVar19 = fVar20 * fVar18 + fVar18 * fVar22 * fVar13;
      fVar17 = ((fVar13 - fVar16) + fVar13) * fVar18;
      fVar21 = (fVar20 * fVar13 - fVar18 * fVar22 * fVar18) + fVar22;
      fVar15 = ((fVar13 - fVar16) * fVar13 - fVar18 * fVar18) + fVar15;
      fVar12 = fVar12 * fVar18;
      fVar16 = fVar13 * fVar1 * fVar18 + fVar18 * fVar1 * fVar13;
      fVar20 = (fVar13 * fVar1 * fVar13 - fVar18 * fVar1 * fVar18) - fVar1;
      fStack_dc = fVar14 * fVar18 + fVar12 * fVar13;
      local_e0 = local_e8 + (fVar14 * fVar13 - fVar12 * fVar18);
      std::complex<float>::operator/=((complex<float> *)&local_f0,(complex<float> *)&local_e0);
      fVar23 = fVar21 * (float)local_f0 - fVar19 * local_f0._4_4_;
      fVar21 = fVar21 * local_f0._4_4_ + fVar19 * (float)local_f0;
      fVar19 = fVar15 * local_f0._4_4_ + fVar17 * (float)local_f0;
      fVar14 = fVar15 * (float)local_f0 - fVar17 * local_f0._4_4_;
      fVar18 = fVar20 * (float)local_f0;
      fVar12 = (float)local_f0 * fVar16;
      fVar16 = local_f0._4_4_ * fVar16;
      fVar20 = fVar20 * local_f0._4_4_;
      fVar15 = local_d8->BandStopParam;
      iVar3 = *(int *)((longlong)&local_d8->_padding_ + 4);
      fVar13 = __real_3f800000 - fVar15;
      if (iVar3 == 0) {
LAB_1444abd62:
        uVar7 = 0;
        if ((int)uVar9 < iVar2) {
          uVar7 = ~uVar9 >> 0x1f;
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
        iVar2 = param_1->ArrayNum;
        param_1->DataPtr[lVar11] = fVar23;
        uVar7 = 0;
        if ((int)uVar6 < iVar2) {
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
        param_1->DataPtr[lVar11 + 1] = fVar21;
      }
      else if (iVar3 == 1) {
        pfVar8 = TArrayView<float,int>::operator[](param_1,uVar9);
        *pfVar8 = fVar14;
        pfVar8 = TArrayView<float,int>::operator[](param_1,uVar6);
        *pfVar8 = fVar19;
      }
      else if (iVar3 == 2) {
        pfVar8 = TArrayView<float,int>::operator[](param_1,uVar9);
        *pfVar8 = fVar18 - fVar16;
        pfVar8 = TArrayView<float,int>::operator[](param_1,uVar6);
        *pfVar8 = fVar20 + fVar12;
      }
      else {
        if (iVar3 != 3) goto LAB_1444abd62;
        pfVar8 = TArrayView<float,int>::operator[](param_1,uVar9);
        *pfVar8 = fVar14 * fVar15 + fVar13 * fVar23;
        pfVar8 = TArrayView<float,int>::operator[](param_1,uVar6);
        *pfVar8 = fVar19 * fVar15 + fVar13 * fVar21;
      }
      uVar9 = uVar9 + 2;
      lVar11 = lVar11 + 2;
      iVar10 = iVar10 + 2;
    } while (lVar11 < (longlong)local_d0);
  }
  return;
}

// Init @ 1444c3800

void __thiscall
Audio::FStateVariableFilter::Init
          (FStateVariableFilter *this,float param_1,int param_2,int param_3,
          FModulationMatrix *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  IFilter::Init((IFilter *)this,param_1,param_2,param_3,param_4);
  piVar1 = &(this->FilterState).ArrayMax;
  piVar2 = &(this->FilterState).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,&(this->FilterState).AllocatorInstance,0,piVar1);
  }
  iVar3 = (int)this->_padding_;
  iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,4,iVar3,&(this->FilterState).AllocatorInstance,piVar2,piVar1);
  DefaultConstructItems<Audio::FStateVariableFilter::FFilterState,int>
            ((this->FilterState).AllocatorInstance.Data + (longlong)iVar4 * 8,iVar3);
                    /* WARNING: Could not recover jumptable at 0x0001444c38c3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(this->_padding_ + 0x50))(this);
  return;
}

// ProcessAudio @ 1444da960

void __thiscall
Audio::FStateVariableFilter::ProcessAudio
          (FStateVariableFilter *this,float *param_1,int param_2,float *param_3,float *param_4,
          float *param_5,float *param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_108;
  
  fVar7 = __real_41d80000;
  fVar6 = __real_c0400000;
  fVar5 = __real_bf800000;
  fVar4 = __real_40400000;
  fVar3 = __real_3f800000;
  if (0 < param_2) {
    local_108 = 0;
    fVar18 = __real_41100000;
    do {
      iVar10 = (int)this->_padding_;
      uVar12 = 0;
      lVar14 = 0;
      if (0 < iVar10) {
        pfVar15 = param_3 + local_108;
        lVar13 = 0;
        do {
          uVar11 = ~uVar12 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar12 < (this->FilterState).ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this->FilterState).AllocatorInstance.Data;
          uVar9 = 0;
          if ((int)uVar12 < (this->FilterState).ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar9 = 0;
          if ((int)uVar12 < (this->FilterState).ArrayNum) {
            uVar9 = uVar11;
          }
          fVar20 = ((*(float *)(((longlong)param_1 - (longlong)param_3) + (longlong)pfVar15) -
                    this->Feedback * *(float *)(pFVar1 + lVar13)) -
                   *(float *)((this->FilterState).AllocatorInstance.Data + lVar14 * 8 + 4)) *
                   this->InputScale;
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          fVar16 = fVar20 * this->A0 +
                   *(float *)((this->FilterState).AllocatorInstance.Data + lVar14 * 8);
          fVar17 = fVar5;
          if ((fVar6 <= fVar16) && (fVar17 = fVar3, fVar16 <= fVar4)) {
            fVar17 = ((fVar16 * fVar16 + fVar7) * fVar16) / (fVar16 * fVar16 * fVar18 + fVar7);
          }
          uVar9 = 0;
          if ((int)uVar12 < (this->FilterState).ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          fVar18 = this->A0;
          fVar16 = this->BandStopParam;
          fVar19 = fVar18 * fVar17 +
                   *(float *)((this->FilterState).AllocatorInstance.Data + lVar14 * 8 + 4);
          uVar9 = 0;
          if ((int)uVar12 < (this->FilterState).ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(float *)((this->FilterState).AllocatorInstance.Data + lVar14 * 8) =
               fVar18 * fVar20 + fVar17;
          fVar18 = this->A0;
          uVar9 = 0;
          if ((int)uVar12 < (this->FilterState).ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar12 = uVar12 + 1;
          lVar13 = lVar13 + 8;
          *(float *)((this->FilterState).AllocatorInstance.Data + lVar14 * 8 + 4) =
               fVar17 * fVar18 + fVar19;
          lVar14 = lVar14 + 1;
          *pfVar15 = fVar19;
          *(float *)(((longlong)param_4 - (longlong)param_3) + (longlong)pfVar15) = fVar20;
          fVar18 = __real_41100000;
          *(float *)(((longlong)param_5 - (longlong)param_3) + (longlong)pfVar15) = fVar17;
          *(float *)(((longlong)param_6 - (longlong)param_3) + (longlong)pfVar15) =
               (fVar3 - fVar16) * fVar19 + fVar16 * fVar20;
          pfVar15 = pfVar15 + 1;
          iVar10 = (int)this->_padding_;
        } while ((int)uVar12 < iVar10);
      }
      local_108 = local_108 + iVar10;
    } while (local_108 < param_2);
  }
  return;
}

// ProcessAudio @ 1444dae40

void __thiscall
Audio::FStateVariableFilter::ProcessAudio
          (FStateVariableFilter *this,float **param_1,int param_2,float **param_3,float **param_4,
          float **param_5,float **param_6)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float *pfVar5;
  code *pcVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  bool bVar13;
  uint uVar14;
  longlong lVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  longlong lVar24;
  float **ppfVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  
  fVar12 = __real_41d80000;
  fVar11 = __real_41100000;
  fVar10 = __real_c0400000;
  fVar9 = __real_bf800000;
  fVar8 = __real_40400000;
  fVar7 = __real_3f800000;
  uVar26 = 0;
  lVar15 = (longlong)param_2;
  if (0 < (int)this->_padding_) {
    ppfVar25 = param_3;
    do {
      pfVar17 = &this->Feedback;
      lVar1 = *(longlong *)(((longlong)param_5 - (longlong)param_3) + (longlong)ppfVar25);
      lVar2 = *(longlong *)(((longlong)param_1 - (longlong)param_3) + (longlong)ppfVar25);
      lVar3 = *(longlong *)(((longlong)param_4 - (longlong)param_3) + (longlong)ppfVar25);
      lVar4 = *(longlong *)(((longlong)param_6 - (longlong)param_3) + (longlong)ppfVar25);
      pfVar5 = *ppfVar25;
      uVar14 = 0;
      if ((int)uVar26 < (this->FilterState).ArrayNum) {
        uVar14 = ~uVar26 >> 0x1f;
      }
      if ((uVar14 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pfVar18 = (float *)(((longlong)(this->FilterState).AllocatorInstance.Data - (longlong)param_3)
                         + (longlong)ppfVar25);
      lVar20 = 0;
      if (3 < lVar15) {
        pfVar16 = pfVar5 + 1;
        lVar21 = lVar3 - (longlong)pfVar5;
        lVar24 = lVar2 - (longlong)pfVar5;
        lVar22 = lVar1 - (longlong)pfVar5;
        lVar23 = lVar4 - (longlong)pfVar5;
        lVar19 = (lVar15 - 4U >> 2) + 1;
        lVar20 = lVar19 * 4;
        do {
          fVar31 = this->A0;
          fVar29 = ((*(float *)(lVar24 + -4 + (longlong)pfVar16) - *pfVar18 * *pfVar17) - pfVar18[1]
                   ) * this->InputScale;
          fVar30 = fVar31 * fVar29;
          fVar27 = *pfVar18 + fVar30;
          fVar28 = fVar9;
          if ((fVar10 <= fVar27) && (fVar28 = fVar7, fVar27 <= fVar8)) {
            fVar28 = ((fVar27 * fVar27 + fVar12) * fVar27) / (fVar27 * fVar27 * fVar11 + fVar12);
          }
          fVar27 = this->BandStopParam;
          *pfVar18 = fVar30 + fVar28;
          fVar31 = fVar31 * fVar28 + pfVar18[1];
          pfVar18[1] = fVar28 * this->A0 + fVar31;
          pfVar16[-1] = fVar31;
          *(float *)(lVar21 + -4 + (longlong)pfVar16) = fVar29;
          *(float *)(lVar22 + -4 + (longlong)pfVar16) = fVar28;
          *(float *)(lVar23 + -4 + (longlong)pfVar16) = (fVar7 - fVar27) * fVar31 + fVar27 * fVar29;
          fVar31 = this->A0;
          fVar29 = ((*(float *)(lVar24 + (longlong)pfVar16) - *pfVar18 * *pfVar17) - pfVar18[1]) *
                   this->InputScale;
          fVar30 = fVar31 * fVar29;
          fVar27 = *pfVar18 + fVar30;
          fVar28 = fVar9;
          if ((fVar10 <= fVar27) && (fVar28 = fVar7, fVar27 <= fVar8)) {
            fVar28 = ((fVar27 * fVar27 + fVar12) * fVar27) / (fVar27 * fVar27 * fVar11 + fVar12);
          }
          fVar27 = this->BandStopParam;
          *pfVar18 = fVar30 + fVar28;
          fVar31 = fVar31 * fVar28 + pfVar18[1];
          pfVar18[1] = fVar28 * this->A0 + fVar31;
          *pfVar16 = fVar31;
          *(float *)(lVar21 + (longlong)pfVar16) = fVar29;
          *(float *)(lVar22 + (longlong)pfVar16) = fVar28;
          *(float *)(lVar23 + (longlong)pfVar16) = (fVar7 - fVar27) * fVar31 + fVar27 * fVar29;
          fVar31 = this->A0;
          fVar29 = ((*(float *)(lVar24 + 4 + (longlong)pfVar16) - *pfVar18 * *pfVar17) - pfVar18[1])
                   * this->InputScale;
          fVar30 = fVar31 * fVar29;
          fVar27 = *pfVar18 + fVar30;
          fVar28 = fVar9;
          if ((fVar10 <= fVar27) && (fVar28 = fVar7, fVar27 <= fVar8)) {
            fVar28 = ((fVar27 * fVar27 + fVar12) * fVar27) / (fVar27 * fVar27 * fVar11 + fVar12);
          }
          fVar27 = this->BandStopParam;
          *pfVar18 = fVar30 + fVar28;
          fVar31 = fVar31 * fVar28 + pfVar18[1];
          pfVar18[1] = fVar28 * this->A0 + fVar31;
          pfVar16[1] = fVar31;
          *(float *)(lVar21 + 4 + (longlong)pfVar16) = fVar29;
          *(float *)(lVar22 + 4 + (longlong)pfVar16) = fVar28;
          *(float *)(lVar23 + 4 + (longlong)pfVar16) = (fVar7 - fVar27) * fVar31 + fVar27 * fVar29;
          fVar31 = this->A0;
          fVar29 = ((*(float *)(lVar24 + 8 + (longlong)pfVar16) - *pfVar18 * *pfVar17) - pfVar18[1])
                   * this->InputScale;
          fVar30 = fVar31 * fVar29;
          fVar27 = *pfVar18 + fVar30;
          fVar28 = fVar9;
          if ((fVar10 <= fVar27) && (fVar28 = fVar7, fVar27 <= fVar8)) {
            fVar28 = ((fVar27 * fVar27 + fVar12) * fVar27) / (fVar27 * fVar27 * fVar11 + fVar12);
          }
          fVar27 = this->BandStopParam;
          *pfVar18 = fVar30 + fVar28;
          fVar31 = fVar31 * fVar28 + pfVar18[1];
          pfVar18[1] = fVar28 * this->A0 + fVar31;
          pfVar16[2] = fVar31;
          *(float *)(lVar21 + 8 + (longlong)pfVar16) = fVar29;
          *(float *)(lVar22 + 8 + (longlong)pfVar16) = fVar28;
          *(float *)(lVar23 + 8 + (longlong)pfVar16) = (fVar7 - fVar27) * fVar31 + fVar27 * fVar29;
          pfVar16 = pfVar16 + 4;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      if (lVar20 < lVar15) {
        pfVar17 = pfVar5 + lVar20;
        lVar20 = lVar15 - lVar20;
        do {
          fVar31 = this->A0;
          fVar27 = ((*(float *)((longlong)pfVar17 + (lVar2 - (longlong)pfVar5)) -
                    *pfVar18 * this->Feedback) - pfVar18[1]) * this->InputScale;
          fVar30 = fVar31 * fVar27;
          fVar29 = fVar30 + *pfVar18;
          fVar28 = fVar9;
          if ((fVar10 <= fVar29) && (fVar28 = fVar7, fVar29 <= fVar8)) {
            fVar28 = ((fVar29 * fVar29 + fVar12) * fVar29) / (fVar29 * fVar29 * fVar11 + fVar12);
          }
          fVar29 = this->BandStopParam;
          *pfVar18 = fVar30 + fVar28;
          fVar31 = fVar31 * fVar28 + pfVar18[1];
          pfVar18[1] = fVar28 * this->A0 + fVar31;
          *pfVar17 = fVar31;
          *(float *)((lVar3 - (longlong)pfVar5) + (longlong)pfVar17) = fVar27;
          *(float *)((longlong)pfVar17 + (lVar1 - (longlong)pfVar5)) = fVar28;
          *(float *)((lVar4 - (longlong)pfVar5) + (longlong)pfVar17) =
               (fVar7 - fVar29) * fVar31 + fVar29 * fVar27;
          pfVar17 = pfVar17 + 1;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      uVar26 = uVar26 + 1;
      ppfVar25 = ppfVar25 + 1;
    } while ((int)uVar26 < (int)this->_padding_);
  }
  return;
}

// ProcessAudio @ 1444db500

void __thiscall
Audio::FStateVariableFilter::ProcessAudio
          (FStateVariableFilter *this,float *param_1,int param_2,float *param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  longlong lVar14;
  float *pfVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int local_e8;
  
  fVar7 = __real_41d80000;
  fVar6 = __real_c0400000;
  fVar5 = __real_bf800000;
  fVar4 = __real_40400000;
  fVar3 = __real_3f800000;
  if (0 < param_2) {
    local_e8 = 0;
    fVar18 = __real_41100000;
    do {
      iVar10 = (int)this->_padding_;
      uVar12 = 0;
      lVar14 = 0;
      if (0 < iVar10) {
        lVar13 = 0;
        pfVar15 = param_3 + local_e8;
        do {
          uVar11 = ~uVar12 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar12 < (this->FilterState).ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          pFVar1 = (this->FilterState).AllocatorInstance.Data;
          uVar9 = 0;
          if ((int)uVar12 < (this->FilterState).ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          uVar9 = 0;
          if ((int)uVar12 < (this->FilterState).ArrayNum) {
            uVar9 = uVar11;
          }
          fVar20 = ((*(float *)((longlong)pfVar15 + ((longlong)param_1 - (longlong)param_3)) -
                    this->Feedback * *(float *)(pFVar1 + lVar13)) -
                   *(float *)((this->FilterState).AllocatorInstance.Data + lVar14 * 8 + 4)) *
                   this->InputScale;
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          fVar16 = fVar20 * this->A0 +
                   *(float *)((this->FilterState).AllocatorInstance.Data + lVar14 * 8);
          fVar17 = fVar5;
          if ((fVar6 <= fVar16) && (fVar17 = fVar3, fVar16 <= fVar4)) {
            fVar17 = ((fVar16 * fVar16 + fVar7) * fVar16) / (fVar16 * fVar16 * fVar18 + fVar7);
          }
          uVar9 = 0;
          if ((int)uVar12 < (this->FilterState).ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          fVar18 = this->A0;
          fVar16 = this->BandStopParam;
          fVar19 = fVar18 * fVar17 +
                   *(float *)((this->FilterState).AllocatorInstance.Data + lVar14 * 8 + 4);
          uVar9 = 0;
          if ((int)uVar12 < (this->FilterState).ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(float *)((this->FilterState).AllocatorInstance.Data + lVar14 * 8) =
               fVar18 * fVar20 + fVar17;
          fVar18 = this->A0;
          uVar9 = 0;
          if ((int)uVar12 < (this->FilterState).ArrayNum) {
            uVar9 = uVar11;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          *(float *)((this->FilterState).AllocatorInstance.Data + lVar14 * 8 + 4) =
               fVar17 * fVar18 + fVar19;
          iVar10 = *(int *)((longlong)&this->_padding_ + 4);
          fVar18 = fVar19;
          if ((((iVar10 != 0) && (fVar18 = fVar20, iVar10 != 1)) && (fVar18 = fVar17, iVar10 != 2))
             && (fVar18 = fVar19, iVar10 == 3)) {
            fVar18 = (fVar3 - fVar16) * fVar19 + fVar16 * fVar20;
          }
          *pfVar15 = fVar18;
          uVar12 = uVar12 + 1;
          iVar10 = (int)this->_padding_;
          pfVar15 = pfVar15 + 1;
          lVar14 = lVar14 + 1;
          lVar13 = lVar13 + 8;
          fVar18 = __real_41100000;
        } while ((int)uVar12 < iVar10);
      }
      local_e8 = local_e8 + iVar10;
    } while (local_e8 < param_2);
  }
  return;
}

// ProcessAudio @ 1444db990

void __thiscall
Audio::FStateVariableFilter::ProcessAudio
          (FStateVariableFilter *this,float **param_1,int param_2,float **param_3)

{
  int iVar1;
  longlong lVar2;
  float *pfVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  longlong lVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  float **ppfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac [29];
  
  fVar10 = __real_41d80000;
  fVar9 = __real_41100000;
  fVar8 = __real_c0400000;
  fVar7 = __real_bf800000;
  fVar6 = __real_40400000;
  fVar5 = __real_3f800000;
  iVar1 = *(int *)((longlong)&this->_padding_ + 4);
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      pfVar16 = &local_b4;
      goto LAB_1444db9d6;
    }
    if (iVar1 == 2) {
      pfVar16 = &local_b0;
      goto LAB_1444db9d6;
    }
    if (iVar1 == 3) {
      pfVar16 = local_ac;
      goto LAB_1444db9d6;
    }
  }
  pfVar16 = &local_b8;
LAB_1444db9d6:
  uVar21 = 0;
  lVar20 = (longlong)param_2;
  if (0 < (int)this->_padding_) {
    ppfVar22 = param_3;
    do {
      pfVar15 = &this->Feedback;
      lVar2 = *(longlong *)(((longlong)param_1 - (longlong)param_3) + (longlong)ppfVar22);
      pfVar3 = *ppfVar22;
      uVar12 = 0;
      if ((int)uVar21 < (this->FilterState).ArrayNum) {
        uVar12 = ~uVar21 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar18 = 0;
      pfVar13 = (float *)((longlong)ppfVar22 +
                         ((longlong)(this->FilterState).AllocatorInstance.Data - (longlong)param_3))
      ;
      if (3 < lVar20) {
        lVar19 = lVar2 - (longlong)pfVar3;
        lVar17 = (lVar20 - 4U >> 2) + 1;
        pfVar14 = pfVar3 + 1;
        lVar18 = lVar17 * 4;
        do {
          fVar24 = this->A0;
          local_b4 = ((*(float *)((longlong)pfVar14 + lVar19 + -4) - *pfVar13 * *pfVar15) -
                     pfVar13[1]) * this->InputScale;
          fVar25 = fVar24 * local_b4;
          fVar23 = *pfVar13 + fVar25;
          local_b0 = fVar7;
          if ((fVar8 <= fVar23) && (local_b0 = fVar5, fVar23 <= fVar6)) {
            local_b0 = ((fVar23 * fVar23 + fVar10) * fVar23) / (fVar23 * fVar23 * fVar9 + fVar10);
          }
          fVar23 = this->BandStopParam;
          *pfVar13 = fVar25 + local_b0;
          local_b8 = fVar24 * local_b0 + pfVar13[1];
          pfVar13[1] = local_b0 * this->A0 + local_b8;
          local_ac[0] = (fVar5 - fVar23) * local_b8 + fVar23 * local_b4;
          pfVar14[-1] = *pfVar16;
          fVar24 = this->A0;
          local_b4 = ((*(float *)((longlong)pfVar14 + lVar19) - *pfVar13 * *pfVar15) - pfVar13[1]) *
                     this->InputScale;
          fVar25 = fVar24 * local_b4;
          fVar23 = *pfVar13 + fVar25;
          local_b0 = fVar7;
          if ((fVar8 <= fVar23) && (local_b0 = fVar5, fVar23 <= fVar6)) {
            local_b0 = ((fVar23 * fVar23 + fVar10) * fVar23) / (fVar23 * fVar23 * fVar9 + fVar10);
          }
          fVar23 = this->BandStopParam;
          *pfVar13 = fVar25 + local_b0;
          local_b8 = fVar24 * local_b0 + pfVar13[1];
          pfVar13[1] = local_b0 * this->A0 + local_b8;
          local_ac[0] = (fVar5 - fVar23) * local_b8 + fVar23 * local_b4;
          *pfVar14 = *pfVar16;
          fVar24 = this->A0;
          local_b4 = ((*(float *)((longlong)pfVar14 + lVar19 + 4) - *pfVar13 * *pfVar15) -
                     pfVar13[1]) * this->InputScale;
          fVar25 = fVar24 * local_b4;
          fVar23 = *pfVar13 + fVar25;
          local_b0 = fVar7;
          if ((fVar8 <= fVar23) && (local_b0 = fVar5, fVar23 <= fVar6)) {
            local_b0 = ((fVar23 * fVar23 + fVar10) * fVar23) / (fVar23 * fVar23 * fVar9 + fVar10);
          }
          fVar23 = this->BandStopParam;
          *pfVar13 = fVar25 + local_b0;
          local_b8 = fVar24 * local_b0 + pfVar13[1];
          pfVar13[1] = local_b0 * this->A0 + local_b8;
          local_ac[0] = (fVar5 - fVar23) * local_b8 + fVar23 * local_b4;
          pfVar14[1] = *pfVar16;
          local_b4 = ((*(float *)(lVar19 + 8 + (longlong)pfVar14) - *pfVar13 * *pfVar15) -
                     pfVar13[1]) * this->InputScale;
          fVar23 = this->A0 * local_b4;
          fVar24 = *pfVar13 + fVar23;
          local_b0 = fVar7;
          if ((fVar8 <= fVar24) && (local_b0 = fVar5, fVar24 <= fVar6)) {
            local_b0 = ((fVar24 * fVar24 + fVar10) * fVar24) / (fVar24 * fVar24 * fVar9 + fVar10);
          }
          fVar24 = this->BandStopParam;
          local_b8 = this->A0 * local_b0 + pfVar13[1];
          *pfVar13 = fVar23 + local_b0;
          pfVar13[1] = local_b0 * this->A0 + local_b8;
          local_ac[0] = (fVar5 - fVar24) * local_b8 + fVar24 * local_b4;
          pfVar14[2] = *pfVar16;
          pfVar14 = pfVar14 + 4;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      if (lVar18 < lVar20) {
        pfVar15 = pfVar3 + lVar18;
        lVar18 = lVar20 - lVar18;
        do {
          local_b4 = ((*(float *)((longlong)pfVar15 + (lVar2 - (longlong)pfVar3)) -
                      *pfVar13 * this->Feedback) - pfVar13[1]) * this->InputScale;
          fVar23 = this->A0 * local_b4;
          fVar24 = *pfVar13 + fVar23;
          local_b0 = fVar7;
          if ((fVar8 <= fVar24) && (local_b0 = fVar5, fVar24 <= fVar6)) {
            local_b0 = ((fVar24 * fVar24 + fVar10) * fVar24) / (fVar24 * fVar24 * fVar9 + fVar10);
          }
          fVar24 = this->BandStopParam;
          local_b8 = this->A0 * local_b0 + pfVar13[1];
          *pfVar13 = fVar23 + local_b0;
          pfVar13[1] = local_b0 * this->A0 + local_b8;
          local_ac[0] = (fVar5 - fVar24) * local_b8 + fVar24 * local_b4;
          *pfVar15 = *pfVar16;
          pfVar15 = pfVar15 + 1;
          lVar18 = lVar18 + -1;
        } while (lVar18 != 0);
      }
      uVar21 = uVar21 + 1;
      ppfVar22 = ppfVar22 + 1;
    } while ((int)uVar21 < (int)this->_padding_);
  }
  return;
}

// Reset @ 1444e1b40

void __thiscall Audio::FStateVariableFilter::Reset(FStateVariableFilter *this)

{
  longlong lVar1;
  
  lVar1 = this->_padding_;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined8 *)((longlong)&this->_padding_ + 4) = 0;
  *(undefined1 *)&this->_padding_ = 1;
  memset((this->FilterState).AllocatorInstance.Data,0,(longlong)(int)lVar1 << 3);
  return;
}

// SetBandStopControl @ 1444e2e90

void __thiscall
Audio::FStateVariableFilter::SetBandStopControl(FStateVariableFilter *this,float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->BandStopParam = param_1;
  return;
}

// Update @ 1444e7e00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall Audio::FStateVariableFilter::Update(FStateVariableFilter *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  IFilter::Update((IFilter *)this);
  fVar1 = __real_3f800000;
  fVar4 = __real_3f800000 / *(float *)((longlong)&this->_padding_ + 4);
  fVar3 = *(float *)((longlong)&this->_padding_ + 4) * __real_40490fdb * fVar4;
  fVar2 = *(float *)((longlong)&this->_padding_ + 4);
  if (__real_41200000 <= fVar2) {
    fVar2 = __real_41200000;
  }
  if (fVar2 <= __real_3f800000) {
    fVar2 = __real_3f800000;
  }
  fVar4 = (((__real_3f800000 -
            (float)((uint)fVar3 & __xmm_7fffffff7fffffff7fffffff7fffffff) * __real_3ea2f983) * fVar3
           ) / ((__real_3f800000 -
                (float)((uint)(fVar3 + __real_3fc90fdb) & __xmm_7fffffff7fffffff7fffffff7fffffff) *
                __real_3ea2f983) * (fVar3 + __real_3fc90fdb))) *
          *(float *)((longlong)&this->_padding_ + 4) * fVar4;
  fVar2 = (fVar2 - __real_3f800000) * ___real_402e38e4 + __real_3f000000;
  this->A0 = fVar4;
  fVar2 = fVar1 / fVar2 + fVar4;
  this->Feedback = fVar2;
  this->InputScale = fVar1 / (fVar2 * fVar4 + fVar1);
  return;
}

