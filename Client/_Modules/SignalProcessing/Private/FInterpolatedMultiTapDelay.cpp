// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 5

// Advance @ 1444f69f0

void __thiscall
Audio::FInterpolatedMultiTapDelay::Advance
          (FInterpolatedMultiTapDelay *this,TArrayView<float_const_,int> *param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  float *pfVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  uVar5 = param_1->ArrayNum & 0x80000003;
  if ((int)uVar5 < 0) {
    uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar5 != 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InBuffer.Num() % (4) == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Private\\InterpolatedMultiTapDelay.cpp"
                         ,0x17,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar5 = param_1->ArrayNum;
  uVar1 = (this->DelayLine).ArrayNum;
  if (uVar5 != 0) {
    uVar2 = this->WriteIndex;
    if (uVar1 < uVar2 + uVar5) {
      iVar10 = uVar1 - uVar2;
      iVar9 = uVar5 - iVar10;
      if (0 < iVar10) {
        pfVar7 = param_1->DataPtr;
        uVar5 = 0;
        if ((int)uVar2 < (int)uVar1) {
          uVar5 = ~uVar2 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        memcpy((this->DelayLine).AllocatorInstance.Data + (longlong)(int)uVar2 * 4,pfVar7,
               (longlong)iVar10 << 2);
      }
      if (0 < iVar9) {
        pfVar7 = TArrayView<float_const_,int>::operator[](param_1,iVar10);
        memcpy((this->DelayLine).AllocatorInstance.Data,pfVar7,(longlong)iVar9 << 2);
      }
      this->WriteIndex = iVar9;
    }
    else {
      pfVar7 = param_1->DataPtr;
      uVar8 = 0;
      uVar6 = 0;
      if ((int)uVar2 < (int)uVar1) {
        uVar6 = ~uVar2 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      memcpy((this->DelayLine).AllocatorInstance.Data + (longlong)(int)uVar2 * 4,pfVar7,
             (ulonglong)uVar5 << 2);
      uVar1 = (this->DelayLine).ArrayNum;
      if (uVar1 != 0) {
        uVar8 = (this->WriteIndex + uVar5) % uVar1;
      }
      this->WriteIndex = uVar8;
    }
  }
  return;
}

// Init @ 144505a60

void __thiscall
Audio::FInterpolatedMultiTapDelay::Init(FInterpolatedMultiTapDelay *this,int param_1)

{
  int *piVar1;
  int *piVar2;
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar3;
  int iVar4;
  
  this->WriteIndex = 0;
  piVar1 = &(this->DelayLine).ArrayMax;
  piVar2 = &(this->DelayLine).ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&(this->DelayLine).AllocatorInstance,0,piVar1);
  }
  iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,param_1,&(this->DelayLine).AllocatorInstance,piVar2,piVar1);
  memset((this->DelayLine).AllocatorInstance.Data + (longlong)iVar4 * 4,0,(longlong)param_1 << 2);
  pTVar3 = &this->WrapBuffer;
  piVar1 = &(this->WrapBuffer).ArrayMax;
  (this->WrapBuffer).ArrayNum = 0;
  if ((this->WrapBuffer).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
              (4,4,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                    (4,4,param_1,&pTVar3->AllocatorInstance,&(this->WrapBuffer).ArrayNum,piVar1);
  memset((pTVar3->AllocatorInstance).Data + (longlong)iVar4 * 4,0,(longlong)param_1 << 2);
  return;
}

// IsInitialized @ 1445090d0

bool __thiscall Audio::FInterpolatedMultiTapDelay::IsInitialized(FInterpolatedMultiTapDelay *this)

{
  return ((longlong)(this->DelayLine).ArrayMax & 0x3fffffffffffffffU) != 0;
}

// Read @ 144515d30

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

uint __thiscall
Audio::FInterpolatedMultiTapDelay::Read
          (FInterpolatedMultiTapDelay *this,uint param_1,uint param_2,uint param_3,
          TArrayView<float,int> *param_4)

{
  FVectorLinearResampler *this_00;
  uint uVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  float fVar15;
  
  uVar5 = (this->DelayLine).ArrayNum;
  uVar1 = param_4->ArrayNum;
  if ((int)uVar5 < (int)uVar1) {
    uVar5 = uVar1 * 2 + 1;
    TArray<float,TAlignedHeapAllocator<16>_>::SetNumZeroed(&this->DelayLine,uVar5,Default);
    if (2 < (byte)LogSignalProcessing._0_1_) {
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogSignalProcessing);
    }
  }
  if (((int)uVar5 < 1) || ((int)uVar1 < 1)) {
    uVar5 = 0;
  }
  else {
    uVar12 = (ulonglong)(int)(uVar5 - 1);
    uVar8 = uVar12;
    if ((longlong)(ulonglong)param_1 < (longlong)uVar12) {
      uVar8 = (ulonglong)param_1;
    }
    iVar14 = 0;
    if (0 < (longlong)uVar8) {
      iVar14 = (int)uVar8;
    }
    uVar7 = (this->WriteIndex - iVar14) - uVar1;
    if ((longlong)(ulonglong)param_3 < (longlong)uVar12) {
      uVar12 = (ulonglong)param_3;
    }
    iVar14 = 0;
    if (0 < (longlong)uVar12) {
      iVar14 = (int)uVar12;
    }
    fVar15 = (float)(int)((this->WriteIndex - iVar14) - uVar7) / (float)(int)uVar1;
    if (__real_40800000 <= fVar15) {
      fVar15 = __real_40800000;
    }
    if (fVar15 <= __real_3e800000) {
      fVar15 = __real_3e800000;
    }
    fVar15 = fVar15 * __real_47800000;
    if ((int)uVar7 < 0) {
      uVar10 = uVar5 - -uVar7 % uVar5;
      if (-uVar7 % uVar5 == 0) {
        uVar10 = 0;
      }
    }
    else {
      uVar10 = uVar7 % uVar5;
    }
    this_00 = &this->Resampler;
    this_00->CurrentFrameFraction = param_2;
    uVar11 = (uint)(longlong)fVar15;
    uVar9 = ((uVar1 - 1) * uVar11 + param_2 >> 0x10) + 2;
    uVar7 = 0;
    if ((int)uVar10 < (this->DelayLine).ArrayNum) {
      uVar7 = ~uVar10 >> 0x1f;
    }
    if ((uVar7 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return uVar5;
    }
    pFVar13 = (this->DelayLine).AllocatorInstance.Data + (longlong)(int)uVar10 * 4;
    if ((int)uVar5 <= (int)(uVar10 + uVar9)) {
      uVar5 = uVar5 - uVar10;
      iVar14 = uVar9 - uVar5;
      if ((this->WrapBuffer).ArrayNum < (int)uVar9) {
        TArray<float,TAlignedHeapAllocator<16>_>::SetNumUninitialized
                  (&this->WrapBuffer,uVar9,Default);
      }
      uVar7 = 0;
      if ((int)uVar10 < (this->DelayLine).ArrayNum) {
        uVar7 = ~uVar10 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        uVar5 = (*pcVar3)();
        return uVar5;
      }
      lVar6 = (longlong)(int)uVar5;
      memcpy((this->WrapBuffer).AllocatorInstance.Data,
             (this->DelayLine).AllocatorInstance.Data + (longlong)(int)uVar10 * 4,lVar6 * 4);
      pFVar13 = (this->DelayLine).AllocatorInstance.Data;
      iVar2 = (this->WrapBuffer).ArrayNum;
      if ((int)uVar10 < iVar14) {
        uVar7 = 0;
        if ((int)uVar5 < iVar2) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
        memcpy((this->WrapBuffer).AllocatorInstance.Data + lVar6 * 4,pFVar13,
               (longlong)(int)uVar10 * 4);
        if (((this->WrapBuffer).ArrayNum <= (int)uVar9) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
        memset((this->WrapBuffer).AllocatorInstance.Data + (ulonglong)uVar9 * 4,0,
               (longlong)(int)(iVar14 - uVar10) << 2);
      }
      else {
        uVar7 = 0;
        if ((int)uVar5 < iVar2) {
          uVar7 = ~uVar5 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          uVar5 = (*pcVar3)();
          return uVar5;
        }
        memcpy((this->WrapBuffer).AllocatorInstance.Data + lVar6 * 4,pFVar13,(longlong)iVar14 << 2);
      }
      pFVar13 = (this->WrapBuffer).AllocatorInstance.Data;
    }
    FVectorLinearResampler::ResampleMono(this_00,uVar1,uVar11,(float *)pFVar13,param_4->DataPtr);
    uVar5 = this_00->CurrentFrameFraction;
  }
  return uVar5;
}

// Reset @ 144517290

void __thiscall Audio::FInterpolatedMultiTapDelay::Reset(FInterpolatedMultiTapDelay *this)

{
  TArray<float,TAlignedHeapAllocator<16>_> *pTVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = (this->DelayLine).ArrayNum;
  pTVar1 = &this->DelayLine;
  if (-1 < (int)uVar3) {
    piVar2 = &(this->DelayLine).ArrayMax;
    (this->DelayLine).ArrayNum = 0;
    if ((this->DelayLine).ArrayMax < (int)uVar3) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar3,&pTVar1->AllocatorInstance,0,piVar2);
    }
    iVar4 = UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                      (4,4,uVar3,&pTVar1->AllocatorInstance,&(this->DelayLine).ArrayNum,piVar2);
    memset((pTVar1->AllocatorInstance).Data + (longlong)iVar4 * 4,0,(longlong)(int)uVar3 << 2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
}

