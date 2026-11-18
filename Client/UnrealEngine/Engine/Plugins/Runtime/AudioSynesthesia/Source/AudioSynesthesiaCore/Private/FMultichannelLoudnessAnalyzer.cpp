// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioSynesthesiaCore
// Functions: 7

// FMultichannelLoudnessAnalyzer @ 14d7f7eb0

FMultichannelLoudnessAnalyzer * __thiscall
Audio::FMultichannelLoudnessAnalyzer::FMultichannelLoudnessAnalyzer
          (FMultichannelLoudnessAnalyzer *this,float param_1,FLoudnessAnalyzerSettings *param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = &(this->MonoBuffer).ArrayNum;
  piVar2 = &(this->MonoBuffer).ArrayMax;
  (this->MonoBuffer).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelWeights).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ChannelWeights).ArrayNum = 0;
  (this->ChannelWeights).ArrayMax = 0;
  *piVar1 = 0;
  *piVar2 = 0;
  FLoudnessAnalyzer::FLoudnessAnalyzer(&this->Analyzer,param_1,param_2);
  UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
            (4,4,(this->Analyzer).Settings.WindowSize,(ForAnyElementType *)this,piVar1,piVar2);
  return this;
}

// CalculateLoudness @ 14d8023a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
Audio::FMultichannelLoudnessAnalyzer::CalculateLoudness
          (FMultichannelLoudnessAnalyzer *this,TArrayView<float_const_,int> *param_1,int param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  int iVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  bool bVar10;
  FScriptContainerElement *pFVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  float fVar14;
  float _X;
  float extraout_XMM0_Da;
  float fVar15;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  undefined4 uStack_7c;
  TArrayView<float,int> local_78;
  TArrayView<float_const_,int> local_68 [5];
  
  piVar1 = &param_3->ArrayMax;
  uVar13 = 0;
  piVar2 = &param_3->ArrayNum;
  *piVar2 = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_3->AllocatorInstance,0,piVar1);
  }
  UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (4,4,param_2,&param_3->AllocatorInstance,piVar2,piVar1);
  iVar4 = *piVar2;
  pFVar11 = (param_3->AllocatorInstance).Data;
  if ((iVar4 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar5 = (code *)swi(3);
    fVar14 = (float)(*pcVar5)();
    return fVar14;
  }
  local_68[0].DataPtr = param_1->DataPtr;
  local_68[0].ArrayNum = param_1->ArrayNum;
  local_68[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
  local_78._12_4_ = uStack_7c;
  local_78.ArrayNum = iVar4;
  local_78.DataPtr = (float *)pFVar11;
  _X = CalculatePerceptualEnergy(this,local_68,param_2,&local_78);
  fVar9 = LoudnessAnalyzerPrivate::Log10Scale;
  fVar8 = _UNK_15076c1dc;
  fVar7 = _UNK_15076c1d8;
  fVar15 = _UNK_15076c1d4;
  fVar14 = ___xmm_41200000412000004120000041200000;
  pFVar3 = pFVar11 + (longlong)iVar4 * 4;
  uVar12 = (longlong)iVar4 & 0x3fffffffffffffff;
  if (pFVar3 < pFVar11) {
    uVar12 = uVar13;
  }
  fVar6 = __real_41200000;
  if ((uVar12 != 0) && (3 < uVar12)) {
    do {
      __vdecl_logf4();
      uVar13 = uVar13 + 4;
      *(float *)pFVar11 = extraout_XMM0_Da * fVar9 * fVar14;
      *(float *)(pFVar11 + 4) = extraout_XMM0_Db * fVar9 * fVar15;
      *(float *)(pFVar11 + 8) = extraout_XMM0_Dc * fVar9 * fVar7;
      *(float *)(pFVar11 + 0xc) = extraout_XMM0_Dd * fVar9 * fVar8;
      pFVar11 = pFVar11 + 0x10;
      fVar6 = __real_41200000;
    } while (uVar13 != (uVar12 & 0xfffffffffffffffc));
  }
  for (; fVar14 = __real_41200000, __real_41200000 = fVar6, pFVar11 != pFVar3; pFVar11 = pFVar11 + 4
      ) {
    fVar15 = logf(*(float *)pFVar11);
    *(float *)pFVar11 = fVar15 * fVar14 * fVar9;
    fVar6 = __real_41200000;
    __real_41200000 = fVar14;
  }
  fVar15 = logf(_X);
  return fVar15 * fVar14 * fVar9;
}

// CalculateLoudness @ 14d802580

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
Audio::FMultichannelLoudnessAnalyzer::CalculateLoudness
          (FMultichannelLoudnessAnalyzer *this,TArrayView<float_const_,int> *param_1,int param_2,
          TArrayView<float,int> *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  float *pfVar9;
  float _X;
  float extraout_XMM0_Da;
  float fVar10;
  float extraout_XMM0_Db;
  float extraout_XMM0_Dc;
  float extraout_XMM0_Dd;
  TArrayView<float,int> local_68;
  TArrayView<float_const_,int> local_58 [5];
  
  local_68.DataPtr = param_3->DataPtr;
  local_68.ArrayNum = param_3->ArrayNum;
  local_68._12_4_ = *(undefined4 *)&param_3->field_0xc;
  local_58[0].DataPtr = param_1->DataPtr;
  local_58[0].ArrayNum = param_1->ArrayNum;
  local_58[0]._12_4_ = *(undefined4 *)&param_1->field_0xc;
  _X = CalculatePerceptualEnergy(this,local_58,param_2,&local_68);
  fVar6 = LoudnessAnalyzerPrivate::Log10Scale;
  fVar5 = _UNK_15076c1dc;
  fVar4 = _UNK_15076c1d8;
  fVar10 = _UNK_15076c1d4;
  fVar3 = ___xmm_41200000412000004120000041200000;
  pfVar9 = param_3->DataPtr;
  uVar7 = 0;
  pfVar1 = pfVar9 + param_3->ArrayNum;
  uVar8 = (longlong)param_3->ArrayNum & 0x3fffffffffffffff;
  if (pfVar1 < pfVar9) {
    uVar8 = uVar7;
  }
  fVar2 = __real_41200000;
  if ((uVar8 != 0) && (3 < uVar8)) {
    do {
      __vdecl_logf4();
      uVar7 = uVar7 + 4;
      *pfVar9 = extraout_XMM0_Da * fVar6 * fVar3;
      pfVar9[1] = extraout_XMM0_Db * fVar6 * fVar10;
      pfVar9[2] = extraout_XMM0_Dc * fVar6 * fVar4;
      pfVar9[3] = extraout_XMM0_Dd * fVar6 * fVar5;
      pfVar9 = pfVar9 + 4;
      fVar2 = __real_41200000;
    } while (uVar7 != (uVar8 & 0xfffffffffffffffc));
  }
  for (; fVar3 = __real_41200000, __real_41200000 = fVar2, pfVar9 != pfVar1; pfVar9 = pfVar9 + 1) {
    fVar10 = logf(*pfVar9);
    *pfVar9 = fVar10 * fVar3 * fVar6;
    fVar2 = __real_41200000;
    __real_41200000 = fVar3;
  }
  fVar10 = logf(_X);
  return fVar10 * fVar3 * fVar6;
}

// CalculatePerceptualEnergy @ 14d802900

float __thiscall
Audio::FMultichannelLoudnessAnalyzer::CalculatePerceptualEnergy
          (FMultichannelLoudnessAnalyzer *this,TArrayView<float_const_,int> *param_1,int param_2,
          TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  float fVar5;
  undefined4 uStack_3c;
  TArrayView<float,int> local_38;
  TArrayView<float_const_,int> local_28;
  
  if (param_1->ArrayNum != param_2 * (this->Analyzer).Settings.WindowSize) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("InView.Num() == (InNumChannels * Analyzer.GetSettings().WindowSize)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                       ,0x17f,L"");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      fVar5 = (float)(*pcVar3)();
      return fVar5;
    }
  }
  if (-1 < param_2) {
    piVar1 = &param_3->ArrayNum;
    *piVar1 = 0;
    if (param_3->ArrayMax < param_2) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,param_2,&param_3->AllocatorInstance,0,&param_3->ArrayMax);
    }
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,param_2,&param_3->AllocatorInstance,piVar1,&param_3->ArrayMax);
    local_38.DataPtr = (float *)(param_3->AllocatorInstance).Data;
    iVar2 = *piVar1;
    if (iVar2 < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        fVar5 = (float)(*pcVar3)();
        return fVar5;
      }
    }
    local_28.DataPtr = param_1->DataPtr;
    local_28.ArrayNum = param_1->ArrayNum;
    local_28._12_4_ = *(undefined4 *)&param_1->field_0xc;
    local_38._12_4_ = uStack_3c;
    local_38.ArrayNum = iVar2;
    fVar5 = CalculatePerceptualEnergy(this,&local_28,param_2,&local_38);
    return fVar5;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_2);
}

// CalculatePerceptualEnergy @ 14d802a40

float __thiscall
Audio::FMultichannelLoudnessAnalyzer::CalculatePerceptualEnergy
          (FMultichannelLoudnessAnalyzer *this,TArrayView<float_const_,int> *param_1,int param_2,
          TArrayView<float,int> *param_3)

{
  int *piVar1;
  int *piVar2;
  longlong lVar3;
  float *pfVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong64 uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  FScriptContainerElement *pFVar15;
  FScriptContainerElement *pFVar16;
  ulonglong uVar17;
  int iVar18;
  float fVar19;
  undefined4 uStack_7c;
  TArrayView<float_const_,int> local_78;
  float *local_68;
  undefined8 uStack_60;
  uint local_54;
  
  if ((param_1->ArrayNum != param_2 * (this->Analyzer).Settings.WindowSize) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InView.Num() == (InNumChannels * Analyzer.GetSettings().WindowSize)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                         ,0x188,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    fVar19 = (float)(*pcVar5)();
    return fVar19;
  }
  if ((param_3->ArrayNum != param_2) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("OutChannelEnergies.Num() == InNumChannels",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                         ,0x189,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    fVar19 = (float)(*pcVar5)();
    return fVar19;
  }
  if ((this->ChannelWeights).ArrayNum != param_2) {
    InitializeChannelWeights(this,param_2);
  }
  local_68 = param_1->DataPtr;
  uStack_60 = *(undefined8 *)&param_1->ArrayNum;
  iVar18 = param_1->ArrayNum;
  if ((iVar18 % param_2 != 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InterleavedArray.Num() % NumChannels == 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\SignalProcessing\\Public\\DSP\\DeinterleaveView.h"
                         ,0x91,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    fVar19 = (float)(*pcVar5)();
    return fVar19;
  }
  uVar17 = (longlong)iVar18 / (longlong)param_2;
  uVar7 = (uint)uVar17;
  uVar11 = uVar17 & 0xffffffff;
  uVar13 = (0 < param_2) - 1;
  if (param_2 < 1) {
    return 0.0;
  }
  piVar1 = &(this->MonoBuffer).ArrayNum;
  local_54 = uVar7;
  if (uVar13 != 0xffffffff) goto LAB_14d802b8c;
  if (-1 < (int)uVar7) {
    *piVar1 = 0;
    uVar11 = uVar17 & 0xffffffff;
    if ((this->MonoBuffer).ArrayMax < (int)uVar7) {
      UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                (4,4,uVar7,(ForAnyElementType *)this,0,&(this->MonoBuffer).ArrayMax);
    }
    while( true ) {
      pFVar16 = (this->MonoBuffer).AllocatorInstance.Data;
      iVar18 = *piVar1;
      if ((iVar18 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
      local_78._12_4_ = uStack_7c;
      local_78.ArrayNum = iVar18;
      local_78.DataPtr = (float *)pFVar16;
      fVar19 = FLoudnessAnalyzer::CalculatePerceptualEnergy(&this->Analyzer,&local_78);
      uVar12 = 0;
      uVar8 = 0;
      if ((int)uVar13 < param_3->ArrayNum) {
        uVar8 = ~uVar13 >> 0x1f;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
      param_3->DataPtr[(int)uVar13] = fVar19;
      if (((uVar13 == 0xffffffff) || (uVar13 = uVar13 + 1, param_2 <= (int)uVar13)) ||
         (uVar13 == 0xffffffff)) {
        lVar14 = 0;
        fVar19 = 0.0;
        while( true ) {
          uVar7 = 0;
          if ((int)uVar12 < (this->ChannelWeights).ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) break;
          pFVar16 = (this->ChannelWeights).AllocatorInstance.Data;
          uVar7 = 0;
          if ((int)uVar12 < param_3->ArrayNum) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar6)) {
            pcVar5 = (code *)swi(3);
            fVar19 = (float)(*pcVar5)();
            return fVar19;
          }
          uVar12 = uVar12 + 1;
          pfVar4 = param_3->DataPtr + lVar14;
          lVar3 = lVar14 * 4;
          lVar14 = lVar14 + 1;
          fVar19 = fVar19 + *pfVar4 * *(float *)(pFVar16 + lVar3);
          if (param_2 <= (int)uVar12) {
            return fVar19;
          }
        }
        pcVar5 = (code *)swi(3);
        fVar19 = (float)(*pcVar5)();
        return fVar19;
      }
LAB_14d802b8c:
      uVar8 = local_54;
      lVar14 = 0;
      if ((int)uVar11 < 0) break;
      piVar2 = &(this->MonoBuffer).ArrayMax;
      iVar18 = 0;
      *piVar1 = 0;
      uVar11 = (ulong64)local_54;
      if ((this->MonoBuffer).ArrayMax < (int)local_54) {
        UE::Core::Private::ReallocTo<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,local_54,(ForAnyElementType *)this,0,piVar2);
      }
      if (0 < (int)uVar8) {
        UE::Core::Private::ReallocGrow<2,TAlignedHeapAllocator<16>::ForAnyElementType>
                  (4,4,uVar8,(ForAnyElementType *)this,piVar1,piVar2);
      }
      pFVar16 = (this->MonoBuffer).AllocatorInstance.Data;
      uVar12 = uVar13;
      if (3 < (int)uVar8) {
        uVar12 = (uVar7 - 4 >> 2) + 1;
        uVar17 = (ulonglong)uVar12;
        iVar18 = uVar12 * 4;
        lVar14 = (ulonglong)uVar12 * 4;
        pFVar15 = pFVar16 + 8;
        uVar12 = uVar13;
        do {
          iVar9 = uVar12 + param_2 + param_2;
          *(float *)(pFVar15 + -8) = local_68[(int)uVar12];
          iVar10 = iVar9 + param_2;
          *(float *)(pFVar15 + -4) = local_68[(int)(uVar12 + param_2)];
          uVar12 = iVar10 + param_2;
          *(float *)pFVar15 = local_68[iVar9];
          *(float *)(pFVar15 + 4) = local_68[iVar10];
          uVar17 = uVar17 - 1;
          pFVar15 = pFVar15 + 0x10;
        } while (uVar17 != 0);
      }
      if (iVar18 < (int)uVar8) {
        uVar17 = (ulonglong)(uVar8 - iVar18);
        pFVar16 = pFVar16 + lVar14 * 4;
        do {
          lVar14 = (longlong)(int)uVar12;
          uVar12 = uVar12 + param_2;
          *(float *)pFVar16 = local_68[lVar14];
          uVar17 = uVar17 - 1;
          pFVar16 = pFVar16 + 4;
        } while (uVar17 != 0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum(uVar11);
}

// GetSettings @ 14d807aa0

FLoudnessAnalyzerSettings * __thiscall
Audio::FMultichannelLoudnessAnalyzer::GetSettings(FMultichannelLoudnessAnalyzer *this)

{
  return &(this->Analyzer).Settings;
}

// InitializeChannelWeights @ 14d807b50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
Audio::FMultichannelLoudnessAnalyzer::InitializeChannelWeights
          (FMultichannelLoudnessAnalyzer *this,int param_1)

{
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  FScriptContainerElement *_Dst;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  undefined4 uVar12;
  Type local_res10 [2];
  
  pTVar1 = &this->ChannelWeights;
  iVar8 = (this->ChannelWeights).ArrayNum;
  piVar2 = &(this->ChannelWeights).ArrayNum;
  if (iVar8 < param_1) {
    iVar7 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,param_1 - iVar8,&pTVar1->AllocatorInstance,piVar2,
                       &(this->ChannelWeights).ArrayMax);
    memset((pTVar1->AllocatorInstance).Data + (longlong)iVar7 * 4,0,(longlong)(param_1 - iVar8) << 2
          );
  }
  else {
    if (param_1 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)(uint)param_1);
    }
    if (param_1 < iVar8) {
      uVar10 = iVar8 - param_1;
      if (((int)(uVar10 | param_1) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (uVar10 != 0) {
        _Dst = (pTVar1->AllocatorInstance).Data + (longlong)param_1 * 4;
        iVar8 = (*piVar2 - uVar10) - param_1;
        if (iVar8 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar10 * 4,(longlong)iVar8 << 2);
        }
        *piVar2 = *piVar2 - uVar10;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,&pTVar1->AllocatorInstance,*piVar2,&(this->ChannelWeights).ArrayMax);
      }
    }
  }
  uVar5 = __real_3fb504f3;
  uVar4 = __real_3f800000;
  uVar10 = 0;
  if (0 < param_1) {
    lVar11 = 0;
    do {
      local_res10[0] = DefaultChannel;
      bVar6 = IAudioMixerPlatformInterface::GetChannelTypeAtIndex(uVar10,local_res10);
      if (bVar6) {
        switch(local_res10[0]) {
        default:
          uVar12 = uVar4;
          break;
        case LowFrequency:
          uVar12 = 0;
          break;
        case BackLeft:
        case BackRight:
        case SideLeft:
        case SideRight:
          uVar12 = uVar5;
        }
        uVar9 = 0;
        if ((int)uVar10 < *piVar2) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar11) = uVar12;
      }
      else {
        bVar6 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<6396811586425586105>,false,
                           "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\AudioSynesthesia\\Source\\AudioSynesthesiaCore\\Private\\LoudnessAnalyzer.cpp"
                           ,0x1b9,
                           "IAudioMixerPlatformInterface::GetChannelTypeAtIndex(ChannelIdx, ChannelType)"
                          );
        if (bVar6) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        uVar9 = 0;
        if ((int)uVar10 < *piVar2) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        *(undefined4 *)((pTVar1->AllocatorInstance).Data + lVar11) = 0x3f800000;
      }
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 4;
    } while ((int)uVar10 < param_1);
  }
  return;
}

