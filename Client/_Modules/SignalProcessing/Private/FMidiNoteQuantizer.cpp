// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignalProcessing
// Functions: 3

// QuantizeMidiNote @ 144514700

float __cdecl
Audio::FMidiNoteQuantizer::QuantizeMidiNote
          (float param_1,float param_2,TArrayView<float,int> *param_3,float param_4)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 unaff_XMM9 [16];
  undefined1 auVar13 [16];
  
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar8 = param_4;
  if (param_4 <= __real_3f800000) {
    fVar8 = __real_3f800000;
  }
  pfVar5 = param_3->DataPtr;
  auVar13 = roundps(unaff_XMM9,ZEXT416((uint)((param_1 - param_2) / fVar8)),1);
  fVar12 = auVar13._0_4_ * param_4;
  fVar11 = (param_1 - param_2) - fVar12;
  iVar4 = (int)*(undefined8 *)&param_3->ArrayNum;
  fVar8 = fVar11;
  if (iVar4 != 0) {
    uVar7 = 0;
    fVar10 = (float)((uint)(fVar11 - __real_41400000) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar8 = __real_41400000;
    if (0 < iVar4) {
      do {
        uVar6 = 0;
        if ((int)uVar7 < iVar4) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          fVar8 = (float)(*pcVar1)();
          return fVar8;
        }
        fVar9 = (float)((uint)(fVar11 - *pfVar5) & uVar2);
        if (fVar9 < fVar10) {
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            fVar8 = (float)(*pcVar1)();
            return fVar8;
          }
          fVar8 = *pfVar5;
          fVar10 = fVar9;
        }
        uVar7 = uVar7 + 1;
        pfVar5 = pfVar5 + 1;
      } while ((int)uVar7 < iVar4);
    }
  }
  return fVar12 + fVar8 + param_2;
}

// QuantizeMidiNote @ 1445148d0

float __cdecl
Audio::FMidiNoteQuantizer::QuantizeMidiNote(float param_1,float param_2,Scale param_3,bool param_4)

{
  code *pcVar1;
  uint uVar2;
  bool bVar3;
  ScaleDegreeSet *pSVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  FScriptContainerElement *pFVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 unaff_XMM8 [16];
  undefined1 auVar14 [16];
  
  pSVar4 = TMapBase<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<enum_Audio::EMusicalScale::Scale,Audio::ScaleDegreeSet,0>_>
           ::FindChecked(&ScaleDegreeSetMap,param_3);
  if ((param_4) && (iVar5 = (pSVar4->ChordTones).ArrayNum, iVar5 != 0)) {
    pFVar8 = (pSVar4->ChordTones).AllocatorInstance.Data;
  }
  else {
    iVar5 = (pSVar4->ScaleDegrees).ArrayNum;
    pFVar8 = (pSVar4->ScaleDegrees).AllocatorInstance.Data;
  }
  if ((iVar5 < 0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    fVar9 = (float)(*pcVar1)();
    return fVar9;
  }
  uVar2 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  auVar14 = roundps(unaff_XMM8,ZEXT416((uint)((param_1 - param_2) * __real_3daaaaab)),1);
  fVar13 = auVar14._0_4_ * __real_41400000;
  fVar12 = (param_1 - param_2) - fVar13;
  fVar9 = fVar12;
  if (iVar5 != 0) {
    uVar7 = 0;
    fVar11 = (float)((uint)(fVar12 - __real_41400000) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar9 = __real_41400000;
    if (0 < iVar5) {
      do {
        uVar6 = 0;
        if ((int)uVar7 < iVar5) {
          uVar6 = ~uVar7 >> 0x1f;
        }
        if ((uVar6 == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar3)) {
          pcVar1 = (code *)swi(3);
          fVar9 = (float)(*pcVar1)();
          return fVar9;
        }
        fVar10 = (float)((uint)(fVar12 - *(float *)pFVar8) & uVar2);
        if (fVar10 < fVar11) {
          if ((uVar6 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar3)) {
            pcVar1 = (code *)swi(3);
            fVar9 = (float)(*pcVar1)();
            return fVar9;
          }
          fVar9 = *(float *)pFVar8;
          fVar11 = fVar10;
        }
        uVar7 = uVar7 + 1;
        pFVar8 = pFVar8 + 4;
      } while ((int)uVar7 < iVar5);
    }
  }
  return fVar13 + fVar9 + param_2;
}

// QuantizeValueToScaleDegree @ 144514ae0

float __cdecl
Audio::FMidiNoteQuantizer::QuantizeValueToScaleDegree
          (float param_1,TArrayView<float,int> *param_2,float param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  uVar3 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar1 = param_2->ArrayNum;
  fVar8 = param_1;
  if (iVar1 != 0) {
    uVar6 = 0;
    fVar10 = (float)((uint)(param_1 - param_3) & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar8 = param_3;
    if (0 < iVar1) {
      lVar7 = 0;
      do {
        uVar5 = 0;
        if ((int)uVar6 < iVar1) {
          uVar5 = ~uVar6 >> 0x1f;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar2 = (code *)swi(3);
          fVar8 = (float)(*pcVar2)();
          return fVar8;
        }
        fVar9 = (float)((uint)(param_1 - *(float *)(lVar7 + (longlong)param_2->DataPtr)) & uVar3);
        if (fVar9 < fVar10) {
          uVar5 = 0;
          if ((int)uVar6 < iVar1) {
            uVar5 = ~uVar6 >> 0x1f;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0x14f,
                                 L"Array index out of bounds: %lld from an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            fVar8 = (float)(*pcVar2)();
            return fVar8;
          }
          fVar8 = *(float *)(lVar7 + (longlong)param_2->DataPtr);
          fVar10 = fVar9;
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 4;
      } while ((int)uVar6 < iVar1);
    }
  }
  return fVar8;
}

