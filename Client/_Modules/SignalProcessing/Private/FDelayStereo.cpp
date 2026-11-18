// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 15

// FDelayStereo @ 1444a3690

FDelayStereo * __thiscall Audio::FDelayStereo::FDelayStereo(FDelayStereo *this)

{
  this->DryLevel = 1.0;
  (this->Delays).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Delays).ArrayNum = 0;
  (this->Delays).ArrayMax = 0;
  (this->BiquadFilters).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BiquadFilters).ArrayNum = 0;
  (this->BiquadFilters).ArrayMax = 0;
  this->DelayMode = Normal;
  this->DelayTimeMsec = 0.0;
  this->Feedback = 0.0;
  this->DelayRatio = 0.0;
  this->WetLevel = 0.0;
  this->NumChannels = 0;
  this->FilterFreq = 20000.0;
  this->FilterQ = 2.0;
  this->FilterType = Lowpass;
  this->bIsInit = true;
  this->bIsFilterEnabled = false;
  return this;
}

// ~FDelayStereo @ 1444a61a0

void __thiscall Audio::FDelayStereo::~FDelayStereo(FDelayStereo *this)

{
  FScriptContainerElement *pFVar1;
  
  DestructItems<Audio::FBiquadFilter,int>
            ((FBiquadFilter *)(this->BiquadFilters).AllocatorInstance.Data,
             (this->BiquadFilters).ArrayNum);
  pFVar1 = (this->BiquadFilters).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<Audio::FDelay,int>
            ((FDelay *)(this->Delays).AllocatorInstance.Data,(this->Delays).ArrayNum);
  pFVar1 = (this->Delays).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// Init @ 1444c2200

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
Audio::FDelayStereo::Init(FDelayStereo *this,float param_1,int param_2,float param_3)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ForAnyElementType _Src;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  FDelay *pFVar21;
  longlong lVar22;
  int *piVar23;
  FDelay *pFVar24;
  longlong lVar25;
  FScriptContainerElement *pFVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 local_res18 [16];
  undefined **local_170;
  undefined4 local_168;
  void *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  FScriptContainerElement local_144;
  ulonglong local_140;
  FDelay local_138 [2];
  
  this->NumChannels = param_2;
  uVar16 = _UNK_150d565f8;
  uVar14 = ___xmm_38d1b7170000000038d1b71700000000;
  uVar12 = _UNK_150d565b8;
  uVar10 = ___xmm_000000003f800000000000003f7ff972;
  fVar9 = __real_4038aa3b;
  fVar8 = __real_3f000000;
  fVar7 = __real_40800000;
  fVar6 = __real_3f800000;
  fVar5 = __real_38d1b717;
  piVar1 = &(this->Delays).ArrayNum;
  if (0 < param_2) {
    fVar29 = param_3 + param_3;
    fVar27 = fVar29 * param_1 + __real_3f800000;
    local_140 = (ulonglong)(uint)param_2;
    do {
      uVar17 = _UNK_150d565f8;
      uVar15 = ___xmm_38d1b7170000000038d1b71700000000;
      uVar13 = _UNK_150d565b8;
      uVar11 = ___xmm_000000003f800000000000003f7ff972;
      piVar23 = &(this->Delays).ArrayMax;
      local_138[0]._padding_ = (longlong)&___7FDelay_Audio__6B_;
      local_138[0].AudioBuffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_138[0].AudioBuffer.ArrayNum = 0;
      local_138[0].AudioBuffer.ArrayMax = 0;
      local_138[0].AudioBufferSize = 0;
      local_138[0].ReadIndex = 0;
      local_138[0].WriteIndex = 0;
      local_138[0].SampleRate = 0.0;
      local_138[0].DelayInSamples = 0.0;
      local_138[0].MaxBufferLengthSamples = 0;
      ___xmm_38d1b7170000000038d1b71700000000 = (float)uVar14;
      _UNK_150d565f4 = SUB84(uVar14,4);
      local_138[0].EaseDelayMsec.CurrentValue = ___xmm_38d1b7170000000038d1b71700000000;
      local_138[0].EaseDelayMsec.Threshold = _UNK_150d565f4;
      _UNK_150d565f8 = (float)uVar16;
      _UNK_150d565fc = SUB84(uVar16,4);
      local_138[0].EaseDelayMsec.TargetValue = _UNK_150d565f8;
      local_138[0].EaseDelayMsec.EaseFactor = _UNK_150d565fc;
      local_138[0].InputAttenuation = 1.0;
      local_138[0].InputFadeGainStep = 0.0;
      ___xmm_000000003f800000000000003f7ff972 = (float)uVar10;
      _UNK_150d565b4 = SUB84(uVar10,4);
      local_138[0].EaseDelayMsec.OneMinusEase = ___xmm_000000003f800000000000003f7ff972;
      local_138[0].EaseDelayMsec.EaseTimesTarget = _UNK_150d565b4;
      _UNK_150d565b8 = (float)uVar12;
      _UNK_150d565bc = SUB84(uVar12,4);
      local_138[0].OutputAttenuation = _UNK_150d565b8;
      local_138[0].OutputAttenuationDB = _UNK_150d565bc;
      ___xmm_000000003f800000000000003f7ff972 = uVar11;
      _UNK_150d565b8 = uVar13;
      ___xmm_38d1b7170000000038d1b71700000000 = uVar15;
      _UNK_150d565f8 = uVar17;
      FDelay::Reset(local_138);
      pFVar21 = (FDelay *)(this->Delays).AllocatorInstance.Data;
      if ((pFVar21 <= local_138) && (local_138 < pFVar21 + *piVar23)) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar18) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar19 = *piVar1;
      if (uVar19 == *piVar23) {
        uVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x858,(ForAnyElementType *)this,piVar23);
      }
      _Src.Data = local_138[0].AudioBuffer.AllocatorInstance.Data;
      pFVar3 = (this->Delays).AllocatorInstance.Data;
      *piVar1 = uVar19 + 1;
      lVar22 = (longlong)(int)uVar19 * 0x58;
      *(undefined ***)(pFVar3 + lVar22) = &___7FDelay_Audio__6B_;
      pFVar26 = pFVar3 + lVar22 + 8;
      *(undefined8 *)&pFVar26->field_0x0 = 0;
      lVar25 = (longlong)local_138[0].AudioBuffer.ArrayNum;
      *(int *)&pFVar26[8].field_0x0 = local_138[0].AudioBuffer.ArrayNum;
      if (local_138[0].AudioBuffer.ArrayNum == 0) {
        *(int *)(pFVar3 + lVar22 + 0x14) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,local_138[0].AudioBuffer.ArrayNum,0,(ForAnyElementType *)pFVar26,
                   local_138[0].AudioBuffer.ArrayNum,(int *)(pFVar3 + lVar22 + 0x14));
        memcpy(*(void **)&pFVar26->field_0x0,_Src.Data,lVar25 << 2);
      }
      *(int *)(pFVar3 + lVar22 + 0x18) = local_138[0].AudioBufferSize;
      *(int *)(pFVar3 + lVar22 + 0x1c) = local_138[0].ReadIndex;
      *(int *)(pFVar3 + lVar22 + 0x20) = local_138[0].WriteIndex;
      *(float *)(pFVar3 + lVar22 + 0x24) = local_138[0].SampleRate;
      *(float *)(pFVar3 + lVar22 + 0x28) = local_138[0].DelayInSamples;
      *(int *)(pFVar3 + lVar22 + 0x2c) = local_138[0].MaxBufferLengthSamples;
      *(undefined8 *)(pFVar3 + lVar22 + 0x30) = local_138[0].EaseDelayMsec._0_8_;
      *(undefined8 *)(pFVar3 + lVar22 + 0x30 + 8) = local_138[0].EaseDelayMsec._8_8_;
      *(undefined8 *)(pFVar3 + lVar22 + 0x40) = local_138[0].EaseDelayMsec._16_8_;
      *(float *)(pFVar3 + lVar22 + 0x48) = local_138[0].OutputAttenuation;
      *(float *)(pFVar3 + lVar22 + 0x4c) = local_138[0].OutputAttenuationDB;
      *(float *)(pFVar3 + lVar22 + 0x50) = local_138[0].InputAttenuation;
      *(float *)(pFVar3 + lVar22 + 0x54) = local_138[0].InputFadeGainStep;
      local_138[0]._padding_ = (longlong)&___7FDelay_Audio__6B_;
      if (local_138[0].AudioBuffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_138[0].AudioBuffer.AllocatorInstance.Data);
      }
      uVar20 = 0;
      if ((int)uVar19 < *piVar1) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if (uVar20 == 0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      pFVar21 = (FDelay *)((this->Delays).AllocatorInstance.Data + lVar22);
      pFVar21->SampleRate = param_1;
      pFVar21->MaxBufferLengthSamples = (int)fVar27;
      fVar28 = fVar29;
      if ((0.0 < FDelayInitialAllocationSecondsCVar) &&
         (FDelayInitialAllocationSecondsCVar <= fVar29)) {
        fVar28 = FDelayInitialAllocationSecondsCVar;
      }
      pFVar21->AudioBufferSize = (int)(fVar28 * param_1) + 1;
      FDelay::Reset(pFVar21);
      pFVar3 = (this->BiquadFilters).AllocatorInstance.Data;
      local_170 = &___7FBiquadFilter_Audio__6B_;
      piVar23 = &(this->BiquadFilters).ArrayMax;
      local_168 = 0;
      local_160 = (void *)0x0;
      local_158 = 0;
      local_150 = 0;
      local_148 = 0;
      local_144 = (FScriptContainerElement)0x1;
      if ((pFVar3 <= (FScriptContainerElement *)&local_170) &&
         ((FScriptContainerElement *)&local_170 < pFVar3 + (longlong)*piVar23 * 0x30)) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar18) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      uVar19 = (this->BiquadFilters).ArrayNum;
      if (uVar19 == *piVar23) {
        uVar19 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x830,&(this->BiquadFilters).AllocatorInstance,piVar23);
      }
      (this->BiquadFilters).ArrayNum = uVar19 + 1;
      pFVar3 = (this->BiquadFilters).AllocatorInstance.Data;
      lVar22 = (longlong)(int)uVar19 * 0x30;
      *(undefined ***)(pFVar3 + lVar22) = &___7FBiquadFilter_Audio__6B_;
      *(undefined4 *)(pFVar3 + lVar22 + 8) = local_168;
      *(void **)(pFVar3 + lVar22 + 0x10) = local_160;
      *(undefined4 *)(pFVar3 + lVar22 + 0x18) = (undefined4)local_158;
      *(undefined4 *)(pFVar3 + lVar22 + 0x1c) = local_158._4_4_;
      *(undefined4 *)(pFVar3 + lVar22 + 0x20) = (undefined4)local_150;
      *(undefined4 *)(pFVar3 + lVar22 + 0x24) = local_150._4_4_;
      *(undefined4 *)(pFVar3 + lVar22 + 0x28) = local_148;
      pFVar3[lVar22 + 0x2c] = local_144;
      local_170 = &___7FBiquadFilter_Audio__6B_;
      if (local_160 != (void *)0x0) {
        operator_delete__(local_160);
      }
      uVar20 = 0;
      if ((int)uVar19 < (this->BiquadFilters).ArrayNum) {
        uVar20 = ~uVar19 >> 0x1f;
      }
      if (uVar20 == 0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      fVar28 = this->FilterQ;
      if (this->FilterQ <= fVar5) {
        fVar28 = fVar5;
      }
      fVar28 = logf(SQRT(fVar6 / (fVar28 * fVar28) + fVar7) * fVar8 + fVar8 / fVar28);
      FBiquadFilter::Init((FBiquadFilter *)((this->BiquadFilters).AllocatorInstance.Data + lVar22),
                          param_1,1,this->FilterType,this->FilterFreq,fVar28 * fVar9,0.0);
      local_140 = local_140 - 1;
    } while (local_140 != 0);
    local_140 = 0;
  }
  this->bIsInit = true;
  pFVar21 = (FDelay *)(this->Delays).AllocatorInstance.Data;
  iVar2 = *piVar1;
  pFVar24 = pFVar21 + iVar2;
  while( true ) {
    if (*piVar1 != iVar2) {
      `TCheckedPointerIterator<Audio::FDelay,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res18);
    }
    if (pFVar21 == pFVar24) break;
    FDelay::Reset(pFVar21);
    pFVar21 = pFVar21 + 1;
  }
  return;
}

// ProcessAudio @ 1444d70f0

void __thiscall
Audio::FDelayStereo::ProcessAudio(FDelayStereo *this,float *param_1,int param_2,float *param_3)

{
  float fVar1;
  Type TVar2;
  FDelay *this_00;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  ulonglong uVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  float *pfVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar15;
  longlong lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float local_res8 [2];
  float local_78 [20];
  ulonglong uVar14;
  
  uVar12 = 0;
  lVar16 = (longlong)param_2;
  this->bIsInit = false;
  if (this->NumChannels == 1) {
    if (((this->Delays).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_00 = (FDelay *)(this->Delays).AllocatorInstance.Data;
    if (this->bIsFilterEnabled == false) {
      if (0 < param_2) {
        lVar15 = (longlong)param_3 - (longlong)param_1;
        do {
          fVar17 = FDelay::Read(this_00);
          fVar17 = (float)(**(code **)(this_00->_padding_ + 8))
                                    (this_00,fVar17 * this->Feedback + *param_1);
          *(float *)((longlong)param_1 + lVar15) =
               fVar17 * this->WetLevel + this->DryLevel * *param_1;
          param_1 = param_1 + 1;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
    }
    else {
      if (((this->BiquadFilters).ArrayNum < 1) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar9 = (this->BiquadFilters).AllocatorInstance.Data;
      if (0 < param_2) {
        lVar15 = (longlong)param_3 - (longlong)param_1;
        do {
          fVar17 = FDelay::Read(this_00);
          local_78[1] = fVar17 * this->Feedback + *param_1;
          if (0 < *(int *)(pFVar9 + 0x1c)) {
            pfVar10 = local_78;
            uVar7 = uVar12;
            uVar14 = uVar12;
            do {
              pfVar10 = pfVar10 + 1;
              lVar3 = *(longlong *)(pFVar9 + 0x10);
              uVar13 = (int)uVar14 + 1;
              uVar14 = (ulonglong)uVar13;
              fVar17 = *pfVar10;
              fVar18 = *(float *)(lVar3 + 0x14 + uVar7);
              fVar19 = *(float *)(lVar3 + 0x1c + uVar7);
              fVar20 = *(float *)(lVar3 + 0x18 + uVar7);
              *(float *)(lVar3 + 0x18 + uVar7) = fVar18;
              *(float *)(lVar3 + 0x14 + uVar7) = fVar17;
              fVar1 = *(float *)(lVar3 + 0x20 + uVar7);
              *(float *)(lVar3 + 0x20 + uVar7) = fVar19;
              fVar17 = ((fVar18 * *(float *)(lVar3 + 4 + uVar7) + fVar17 * *(float *)(lVar3 + uVar7)
                        + *(float *)(lVar3 + 8 + uVar7) * fVar20) -
                       fVar19 * *(float *)(lVar3 + 0xc + uVar7)) -
                       *(float *)(lVar3 + 0x10 + uVar7) * fVar1;
              *(float *)(lVar3 + 0x1c + uVar7) = fVar17;
              uVar7 = uVar7 + 0x24;
              *pfVar10 = fVar17;
            } while ((int)uVar13 < *(int *)(pFVar9 + 0x1c));
          }
          fVar17 = (float)(**(code **)(this_00->_padding_ + 8))(this_00,local_78[1]);
          *(float *)(lVar15 + (longlong)param_1) =
               fVar17 * this->WetLevel + *param_1 * this->DryLevel;
          param_1 = param_1 + 1;
          lVar16 = lVar16 + -1;
        } while (lVar16 != 0);
      }
    }
  }
  else if (this->bIsFilterEnabled == false) {
    if (0 < param_2) {
      do {
        if (((this->Delays).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar17 = FDelay::Read((FDelay *)(this->Delays).AllocatorInstance.Data);
        if (((this->Delays).ArrayNum < 2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar18 = FDelay::Read((FDelay *)((this->Delays).AllocatorInstance.Data + 0x58));
        TVar2 = this->DelayMode;
        fVar20 = 0.0;
        fVar19 = 0.0;
        iVar11 = (int)uVar12;
        if (TVar2 == Normal) {
          fVar20 = this->Feedback * fVar17 + param_1[iVar11];
          fVar19 = this->Feedback * fVar18 + param_1[(longlong)iVar11 + 1];
        }
        else {
          if (TVar2 == Cross) {
            fVar19 = this->Feedback * fVar18;
            fVar17 = this->Feedback * fVar17;
          }
          else {
            if (TVar2 != PingPong) goto LAB_1444d7809;
            fVar19 = this->Feedback * fVar17;
            fVar17 = this->Feedback * fVar18;
          }
          fVar19 = fVar19 + param_1[iVar11];
          fVar20 = fVar17 + param_1[(longlong)iVar11 + 1];
        }
LAB_1444d7809:
        if (((this->Delays).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar9 = (this->Delays).AllocatorInstance.Data;
        fVar17 = (float)(**(code **)(*(longlong *)pFVar9 + 8))(pFVar9,fVar20);
        if (((this->Delays).ArrayNum < 2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar9 = (this->Delays).AllocatorInstance.Data + 0x58;
        fVar18 = (float)(**(code **)(*(longlong *)pFVar9 + 8))(pFVar9,fVar19);
        param_3[iVar11] = param_1[iVar11] * this->DryLevel + fVar17 * this->WetLevel;
        param_3[(longlong)iVar11 + 1] =
             param_1[(longlong)iVar11 + 1] * this->DryLevel + fVar18 * this->WetLevel;
        uVar13 = iVar11 + this->NumChannels;
        uVar12 = (ulonglong)uVar13;
      } while ((int)uVar13 < param_2);
    }
  }
  else {
    if (((this->BiquadFilters).ArrayNum < 1) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar9 = (this->BiquadFilters).AllocatorInstance.Data;
    if (((this->BiquadFilters).ArrayNum < 2) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->BiquadFilters).AllocatorInstance.Data;
    uVar7 = uVar12;
    if (0 < param_2) {
      do {
        if (((this->Delays).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar17 = FDelay::Read((FDelay *)(this->Delays).AllocatorInstance.Data);
        if (((this->Delays).ArrayNum < 2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        fVar18 = FDelay::Read((FDelay *)((this->Delays).AllocatorInstance.Data + 0x58));
        TVar2 = this->DelayMode;
        local_res8[0] = 0.0;
        local_78[0] = 0.0;
        iVar11 = (int)uVar7;
        if (TVar2 == Normal) {
          local_res8[0] = this->Feedback * fVar17 + param_1[iVar11];
          local_78[0] = this->Feedback * fVar18 + param_1[(longlong)iVar11 + 1];
        }
        else {
          if (TVar2 == Cross) {
            fVar19 = this->Feedback * fVar18;
            fVar17 = this->Feedback * fVar17;
          }
          else {
            if (TVar2 != PingPong) goto LAB_1444d74bb;
            fVar19 = this->Feedback * fVar17;
            fVar17 = this->Feedback * fVar18;
          }
          local_78[0] = fVar19 + param_1[iVar11];
          local_res8[0] = fVar17 + param_1[(longlong)iVar11 + 1];
        }
LAB_1444d74bb:
        if (0 < *(int *)(pFVar9 + 0x1c)) {
          pfVar10 = local_res8;
          uVar7 = uVar12;
          uVar14 = uVar12;
          do {
            lVar16 = *(longlong *)(pFVar9 + 0x10);
            uVar13 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar13;
            fVar17 = *pfVar10;
            fVar18 = *(float *)(lVar16 + 0x14 + uVar7);
            fVar19 = *(float *)(lVar16 + 0x1c + uVar7);
            fVar20 = *(float *)(lVar16 + 0x18 + uVar7);
            *(float *)(lVar16 + 0x18 + uVar7) = fVar18;
            *(float *)(lVar16 + 0x14 + uVar7) = fVar17;
            fVar1 = *(float *)(lVar16 + 0x20 + uVar7);
            *(float *)(lVar16 + 0x20 + uVar7) = fVar19;
            fVar17 = ((fVar18 * *(float *)(lVar16 + 4 + uVar7) + fVar17 * *(float *)(lVar16 + uVar7)
                      + *(float *)(lVar16 + 8 + uVar7) * fVar20) -
                     fVar19 * *(float *)(lVar16 + 0xc + uVar7)) -
                     *(float *)(lVar16 + 0x10 + uVar7) * fVar1;
            *(float *)(lVar16 + 0x1c + uVar7) = fVar17;
            uVar7 = uVar7 + 0x24;
            *pfVar10 = fVar17;
            pfVar10 = pfVar10 + 1;
          } while ((int)uVar13 < *(int *)(pFVar9 + 0x1c));
        }
        if (0 < *(int *)(pFVar4 + 0x4c)) {
          pfVar10 = local_78;
          uVar7 = uVar12;
          uVar14 = uVar12;
          do {
            lVar16 = *(longlong *)(pFVar4 + 0x40);
            uVar13 = (int)uVar14 + 1;
            uVar14 = (ulonglong)uVar13;
            fVar17 = *pfVar10;
            fVar18 = *(float *)(uVar7 + 0x14 + lVar16);
            fVar19 = *(float *)(uVar7 + 0x1c + lVar16);
            fVar20 = *(float *)(uVar7 + 0x18 + lVar16);
            *(float *)(uVar7 + 0x18 + lVar16) = fVar18;
            *(float *)(uVar7 + 0x14 + lVar16) = fVar17;
            fVar1 = *(float *)(uVar7 + 0x20 + lVar16);
            *(float *)(uVar7 + 0x20 + lVar16) = fVar19;
            fVar17 = ((fVar18 * *(float *)(uVar7 + 4 + lVar16) + fVar17 * *(float *)(uVar7 + lVar16)
                      + *(float *)(uVar7 + 8 + lVar16) * fVar20) -
                     fVar19 * *(float *)(uVar7 + 0xc + lVar16)) -
                     *(float *)(uVar7 + 0x10 + lVar16) * fVar1;
            *(float *)(uVar7 + 0x1c + lVar16) = fVar17;
            uVar7 = uVar7 + 0x24;
            *pfVar10 = fVar17;
            pfVar10 = pfVar10 + 1;
          } while ((int)uVar13 < *(int *)(pFVar4 + 0x4c));
        }
        if (((this->Delays).ArrayNum < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar8 = (this->Delays).AllocatorInstance.Data;
        fVar17 = (float)(**(code **)(*(longlong *)pFVar8 + 8))(pFVar8,local_res8[0]);
        if (((this->Delays).ArrayNum < 2) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pFVar8 = (this->Delays).AllocatorInstance.Data + 0x58;
        fVar18 = (float)(**(code **)(*(longlong *)pFVar8 + 8))(pFVar8,local_78[0]);
        param_3[iVar11] = param_1[iVar11] * this->DryLevel + fVar17 * this->WetLevel;
        param_3[(longlong)iVar11 + 1] =
             param_1[(longlong)iVar11 + 1] * this->DryLevel + fVar18 * this->WetLevel;
        uVar13 = iVar11 + this->NumChannels;
        uVar7 = (ulonglong)uVar13;
      } while ((int)uVar13 < param_2);
    }
  }
  return;
}

// ProcessAudioFrame @ 1444de510

void __thiscall
Audio::FDelayStereo::ProcessAudioFrame(FDelayStereo *this,float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  Type TVar4;
  FDelay *this_00;
  longlong lVar5;
  code *pcVar6;
  bool bVar7;
  ulonglong uVar8;
  FScriptContainerElement *pFVar9;
  ulonglong uVar10;
  float *pfVar11;
  uint uVar12;
  ulonglong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_res8 [2];
  float local_res20 [2];
  float local_48 [8];
  
  uVar10 = 0;
  this->bIsInit = false;
  iVar3 = (this->Delays).ArrayNum;
  if (this->NumChannels == 1) {
    if ((iVar3 < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    this_00 = (FDelay *)(this->Delays).AllocatorInstance.Data;
    fVar14 = FDelay::Read(this_00);
    local_48[0] = fVar14 * this->Feedback + *param_1;
    if (this->bIsFilterEnabled != false) {
      if (((this->BiquadFilters).ArrayNum < 1) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar9 = (this->BiquadFilters).AllocatorInstance.Data;
      if (0 < *(int *)(pFVar9 + 0x1c)) {
        pfVar11 = local_48;
        uVar8 = uVar10;
        do {
          lVar5 = *(longlong *)(pFVar9 + 0x10);
          uVar12 = (int)uVar8 + 1;
          uVar8 = (ulonglong)uVar12;
          fVar14 = *pfVar11;
          fVar15 = *(float *)(lVar5 + 0x14 + uVar10);
          fVar16 = *(float *)(lVar5 + 0x1c + uVar10);
          fVar1 = *(float *)(lVar5 + 0x18 + uVar10);
          *(float *)(lVar5 + 0x18 + uVar10) = fVar15;
          *(float *)(lVar5 + 0x14 + uVar10) = fVar14;
          fVar2 = *(float *)(lVar5 + 0x20 + uVar10);
          *(float *)(lVar5 + 0x20 + uVar10) = fVar16;
          fVar14 = ((fVar15 * *(float *)(lVar5 + 4 + uVar10) + fVar14 * *(float *)(lVar5 + uVar10) +
                    *(float *)(lVar5 + 8 + uVar10) * fVar1) -
                   fVar16 * *(float *)(lVar5 + 0xc + uVar10)) -
                   *(float *)(lVar5 + 0x10 + uVar10) * fVar2;
          *(float *)(lVar5 + 0x1c + uVar10) = fVar14;
          uVar10 = uVar10 + 0x24;
          *pfVar11 = fVar14;
          pfVar11 = pfVar11 + 1;
        } while ((int)uVar12 < *(int *)(pFVar9 + 0x1c));
      }
    }
    fVar14 = (float)(**(code **)(this_00->_padding_ + 8))(this_00,local_48[0]);
    *param_2 = this->DryLevel * *param_1 + fVar14 * this->WetLevel;
    return;
  }
  if ((iVar3 < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar14 = FDelay::Read((FDelay *)(this->Delays).AllocatorInstance.Data);
  if (((this->Delays).ArrayNum < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  fVar15 = FDelay::Read((FDelay *)((this->Delays).AllocatorInstance.Data + 0x58));
  TVar4 = this->DelayMode;
  local_res8[0] = 0.0;
  local_res20[0] = 0.0;
  if (TVar4 == Normal) {
    local_res20[0] = this->Feedback * fVar15 + param_1[1];
    local_res8[0] = this->Feedback * fVar14 + *param_1;
  }
  else {
    if (TVar4 == Cross) {
      fVar16 = this->Feedback * fVar15;
      fVar14 = this->Feedback * fVar14;
    }
    else {
      if (TVar4 != PingPong) goto LAB_1444de7b8;
      fVar16 = this->Feedback * fVar14;
      fVar14 = this->Feedback * fVar15;
    }
    local_res20[0] = fVar16 + *param_1;
    local_res8[0] = fVar14 + param_1[1];
  }
LAB_1444de7b8:
  if (this->bIsFilterEnabled != false) {
    if (((this->BiquadFilters).ArrayNum < 1) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar9 = (this->BiquadFilters).AllocatorInstance.Data;
    if (0 < *(int *)(pFVar9 + 0x1c)) {
      pfVar11 = local_res8;
      uVar8 = uVar10;
      uVar13 = uVar10;
      do {
        lVar5 = *(longlong *)(pFVar9 + 0x10);
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        fVar14 = *pfVar11;
        fVar15 = *(float *)(uVar8 + 0x14 + lVar5);
        fVar16 = *(float *)(uVar8 + 0x1c + lVar5);
        fVar1 = *(float *)(uVar8 + 0x18 + lVar5);
        *(float *)(uVar8 + 0x18 + lVar5) = fVar15;
        *(float *)(uVar8 + 0x14 + lVar5) = fVar14;
        fVar2 = *(float *)(uVar8 + 0x20 + lVar5);
        *(float *)(uVar8 + 0x20 + lVar5) = fVar16;
        fVar14 = ((fVar15 * *(float *)(uVar8 + 4 + lVar5) + fVar14 * *(float *)(uVar8 + lVar5) +
                  *(float *)(uVar8 + 8 + lVar5) * fVar1) - fVar16 * *(float *)(uVar8 + 0xc + lVar5))
                 - *(float *)(uVar8 + 0x10 + lVar5) * fVar2;
        *(float *)(uVar8 + 0x1c + lVar5) = fVar14;
        uVar8 = uVar8 + 0x24;
        *pfVar11 = fVar14;
        pfVar11 = pfVar11 + 1;
      } while ((int)uVar12 < *(int *)(pFVar9 + 0x1c));
    }
    if (((this->BiquadFilters).ArrayNum < 2) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if (0 < *(int *)(pFVar9 + 0x1c)) {
      pfVar11 = local_res20;
      uVar8 = uVar10;
      do {
        lVar5 = *(longlong *)(pFVar9 + 0x10);
        uVar12 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar12;
        fVar14 = *pfVar11;
        fVar15 = *(float *)(uVar10 + 0x14 + lVar5);
        fVar16 = *(float *)(uVar10 + 0x1c + lVar5);
        fVar1 = *(float *)(uVar10 + 0x18 + lVar5);
        *(float *)(uVar10 + 0x18 + lVar5) = fVar15;
        *(float *)(uVar10 + 0x14 + lVar5) = fVar14;
        fVar2 = *(float *)(uVar10 + 0x20 + lVar5);
        *(float *)(uVar10 + 0x20 + lVar5) = fVar16;
        fVar14 = ((fVar15 * *(float *)(uVar10 + 4 + lVar5) + fVar14 * *(float *)(uVar10 + lVar5) +
                  *(float *)(uVar10 + 8 + lVar5) * fVar1) -
                 fVar16 * *(float *)(uVar10 + 0xc + lVar5)) -
                 *(float *)(uVar10 + 0x10 + lVar5) * fVar2;
        *(float *)(uVar10 + 0x1c + lVar5) = fVar14;
        uVar10 = uVar10 + 0x24;
        *pfVar11 = fVar14;
        pfVar11 = pfVar11 + 1;
      } while ((int)uVar12 < *(int *)(pFVar9 + 0x1c));
    }
  }
  if (((this->Delays).ArrayNum < 1) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar9 = (this->Delays).AllocatorInstance.Data;
  fVar14 = (float)(**(code **)(*(longlong *)pFVar9 + 8))(pFVar9,local_res8[0]);
  if (((this->Delays).ArrayNum < 2) &&
     (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar7)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar9 = (this->Delays).AllocatorInstance.Data + 0x58;
  fVar15 = (float)(**(code **)(*(longlong *)pFVar9 + 8))(pFVar9,local_res20[0]);
  *param_2 = fVar14 * this->WetLevel + this->DryLevel * *param_1;
  param_2[1] = param_1[1] * this->DryLevel + fVar15 * this->WetLevel;
  return;
}

// Reset @ 1444e17b0

void __thiscall Audio::FDelayStereo::Reset(FDelayStereo *this)

{
  int iVar1;
  FDelay *this_00;
  FDelay *pFVar2;
  undefined1 local_res8 [8];
  
  this->bIsInit = true;
  iVar1 = (this->Delays).ArrayNum;
  this_00 = (FDelay *)(this->Delays).AllocatorInstance.Data;
  pFVar2 = this_00 + iVar1;
  while( true ) {
    if ((this->Delays).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FDelay,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (this_00 == pFVar2) break;
    FDelay::Reset(this_00);
    this_00 = this_00 + 1;
  }
  return;
}

// SetDelayRatio @ 1444e3450

void __thiscall Audio::FDelayStereo::SetDelayRatio(FDelayStereo *this,float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= __real_bf800000) {
    param_1 = __real_bf800000;
  }
  this->DelayRatio = param_1;
  UpdateDelays(this);
  return;
}

// SetDelayTimeMsec @ 1444e3510

void __thiscall Audio::FDelayStereo::SetDelayTimeMsec(FDelayStereo *this,float param_1)

{
  this->DelayTimeMsec = param_1;
  UpdateDelays(this);
  return;
}

// SetDryLevel @ 1444e35f0

void __thiscall Audio::FDelayStereo::SetDryLevel(FDelayStereo *this,float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->DryLevel = param_1;
  return;
}

// SetFeedback @ 1444e37c0

void __thiscall Audio::FDelayStereo::SetFeedback(FDelayStereo *this,float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->Feedback = param_1;
  return;
}

// SetFilterEnabled @ 1444e37e0

void __thiscall Audio::FDelayStereo::SetFilterEnabled(FDelayStereo *this,bool param_1)

{
  this->bIsFilterEnabled = param_1;
  return;
}

// SetFilterSettings @ 1444e37f0

void __thiscall
Audio::FDelayStereo::SetFilterSettings(FDelayStereo *this,Type param_1,float param_2,float param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  FBiquadFilter *this_00;
  FBiquadFilter *pFVar11;
  float fVar12;
  float fVar13;
  undefined1 local_res18 [8];
  
  fVar10 = __real_4038aa3b;
  fVar7 = __real_3f000000;
  uVar6 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar5 = __real_40800000;
  fVar4 = __real_3f800000;
  fVar3 = __real_38d1b717;
  fVar2 = __real_322bcc77;
  this->FilterFreq = param_2;
  this->FilterQ = param_3;
  fVar9 = __real_3ee66666;
  fVar8 = __real_40a00000;
  iVar1 = (this->BiquadFilters).ArrayNum;
  this_00 = (FBiquadFilter *)(this->BiquadFilters).AllocatorInstance.Data;
  pFVar11 = this_00 + iVar1;
  while( true ) {
    if ((this->BiquadFilters).ArrayNum != iVar1) {
      `TCheckedPointerIterator<Audio::FBiquadFilter,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res18);
    }
    if (this_00 == pFVar11) break;
    fVar13 = this->FilterQ;
    if (this->FilterQ <= fVar3) {
      fVar13 = fVar3;
    }
    fVar12 = logf(SQRT(fVar4 / (fVar13 * fVar13) + fVar5) * fVar7 + fVar7 / fVar13);
    fVar13 = this_00->SampleRate * fVar9;
    if (param_2 <= fVar13) {
      fVar13 = param_2;
    }
    if (fVar13 <= fVar8) {
      fVar13 = fVar8;
    }
    if ((((this_00->FilterType != param_1) ||
         (fVar2 < (float)((uint)(this_00->Frequency - fVar13) & uVar6))) ||
        (fVar2 < (float)((uint)(this_00->Bandwidth - fVar12 * fVar10) & uVar6))) ||
       (fVar2 < (float)((uint)this_00->GainDB & uVar6))) {
      this_00->Frequency = fVar13;
      this_00->Bandwidth = fVar12 * fVar10;
      this_00->FilterType = param_1;
      this_00->GainDB = 0.0;
      FBiquadFilter::CalculateBiquadCoefficients(this_00);
    }
    this_00 = this_00 + 1;
  }
  return;
}

// SetMode @ 1444e4660

void __thiscall Audio::FDelayStereo::SetMode(FDelayStereo *this,Type param_1)

{
  this->DelayMode = param_1;
  return;
}

// SetWetLevel @ 1444e5c10

void __thiscall Audio::FDelayStereo::SetWetLevel(FDelayStereo *this,float param_1)

{
  if (__real_3f800000 <= param_1) {
    param_1 = __real_3f800000;
  }
  if (param_1 <= 0.0) {
    param_1 = 0.0;
  }
  this->WetLevel = param_1;
  return;
}

// UpdateDelays @ 1444e81d0

void __thiscall Audio::FDelayStereo::UpdateDelays(FDelayStereo *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDelay *this_00;
  float fVar4;
  
  iVar1 = (this->Delays).ArrayNum;
  if (this->NumChannels == 1) {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    fVar4 = this->DelayRatio + __real_3f800000;
    this_00 = (FDelay *)(this->Delays).AllocatorInstance.Data;
  }
  else {
    if (iVar1 < 1) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    fVar4 = __real_3f800000;
    FDelay::SetEasedDelayMsec
              ((FDelay *)(this->Delays).AllocatorInstance.Data,
               (this->DelayRatio + __real_3f800000) * this->DelayTimeMsec,this->bIsInit);
    if ((this->Delays).ArrayNum < 2) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    fVar4 = fVar4 - this->DelayRatio;
    this_00 = (FDelay *)((this->Delays).AllocatorInstance.Data + 0x58);
  }
  FDelay::SetEasedDelayMsec(this_00,fVar4 * this->DelayTimeMsec,this->bIsInit);
  return;
}

