// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AudioMixer
// Functions: 1

// IsAudioBufferSilent @ 146560c90

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
Audio::FMixerSubmixPrivate::IsAudioBufferSilent(TArray<float,TAlignedHeapAllocator<16>_> *param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  longlong lVar21;
  bool bVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  uVar13 = _UNK_15061cc7c;
  uVar12 = _UNK_15061cc78;
  uVar18 = _UNK_15061cc74;
  uVar11 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  uVar19 = 0;
  bVar22 = true;
  uVar20 = (longlong)param_1->ArrayNum & 0xfffffffffffffff0;
  if (0 < (longlong)uVar20) {
    fVar23 = GlobalVectorConstants::SmallNumber.m128_f32[0];
    fVar24 = GlobalVectorConstants::SmallNumber.m128_f32[1];
    fVar25 = GlobalVectorConstants::SmallNumber.m128_f32[2];
    fVar26 = GlobalVectorConstants::SmallNumber.m128_f32[3];
    lVar21 = 0;
    do {
      uVar16 = 0;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar16 = ~uVar19 >> 0x1f;
      }
      if (uVar16 == 0) {
        bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar14) {
          pcVar6 = (code *)swi(3);
          uVar15 = (*pcVar6)();
          return (bool)uVar15;
        }
        fVar23 = GlobalVectorConstants::SmallNumber.m128_f32[0];
        fVar24 = GlobalVectorConstants::SmallNumber.m128_f32[1];
        fVar25 = GlobalVectorConstants::SmallNumber.m128_f32[2];
        fVar26 = GlobalVectorConstants::SmallNumber.m128_f32[3];
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      pFVar1 = pFVar5 + lVar21 * 4;
      pFVar2 = pFVar5 + lVar21 * 4 + 0x10;
      pFVar3 = pFVar5 + lVar21 * 4 + 0x20;
      pFVar4 = pFVar5 + lVar21 * 4 + 0x30;
      auVar10._4_4_ = -(uint)(fVar24 < (float)(uVar18 & *(uint *)(pFVar1 + 4)));
      auVar10._0_4_ = -(uint)(fVar23 < (float)(uVar11 & *(uint *)pFVar1));
      auVar10._8_4_ = -(uint)(fVar25 < (float)(uVar12 & *(uint *)(pFVar1 + 8)));
      auVar10._12_4_ = -(uint)(fVar26 < (float)(uVar13 & *(uint *)(pFVar1 + 0xc)));
      iVar17 = movmskps((int)pFVar5,auVar10);
      if ((((iVar17 != 0) ||
           (auVar7._4_4_ = -(uint)(fVar24 < (float)(*(uint *)(pFVar2 + 4) & uVar18)),
           auVar7._0_4_ = -(uint)(fVar23 < (float)(*(uint *)pFVar2 & uVar11)),
           auVar7._8_4_ = -(uint)(fVar25 < (float)(*(uint *)(pFVar2 + 8) & uVar12)),
           auVar7._12_4_ = -(uint)(fVar26 < (float)(*(uint *)(pFVar2 + 0xc) & uVar13)),
           iVar17 = movmskps(0,auVar7), iVar17 != 0)) ||
          (auVar8._4_4_ = -(uint)(fVar24 < (float)(*(uint *)(pFVar3 + 4) & uVar18)),
          auVar8._0_4_ = -(uint)(fVar23 < (float)(*(uint *)pFVar3 & uVar11)),
          auVar8._8_4_ = -(uint)(fVar25 < (float)(*(uint *)(pFVar3 + 8) & uVar12)),
          auVar8._12_4_ = -(uint)(fVar26 < (float)(*(uint *)(pFVar3 + 0xc) & uVar13)),
          iVar17 = movmskps(0,auVar8), iVar17 != 0)) ||
         (auVar9._4_4_ = -(uint)(fVar24 < (float)(*(uint *)(pFVar4 + 4) & uVar18)),
         auVar9._0_4_ = -(uint)(fVar23 < (float)(*(uint *)pFVar4 & uVar11)),
         auVar9._8_4_ = -(uint)(fVar25 < (float)(*(uint *)(pFVar4 + 8) & uVar12)),
         auVar9._12_4_ = -(uint)(fVar26 < (float)(*(uint *)(pFVar4 + 0xc) & uVar13)),
         iVar17 = movmskps(0,auVar9), iVar17 != 0)) {
        bVar22 = false;
        uVar19 = 0x7fffffff;
        break;
      }
      uVar19 = uVar19 + 0x10;
      lVar21 = lVar21 + 0x10;
    } while (lVar21 < (longlong)uVar20);
  }
  fVar23 = __real_322bcc77;
  iVar17 = param_1->ArrayNum;
  if ((int)uVar19 < iVar17) {
    lVar21 = (longlong)(int)uVar19 * 4;
    do {
      uVar18 = 0;
      if ((int)uVar19 < iVar17) {
        uVar18 = ~uVar19 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        uVar15 = (*pcVar6)();
        return (bool)uVar15;
      }
      if (fVar23 < (float)(*(uint *)((param_1->AllocatorInstance).Data + lVar21) & uVar11)) {
        return false;
      }
      iVar17 = param_1->ArrayNum;
      uVar19 = uVar19 + 1;
      lVar21 = lVar21 + 4;
    } while ((int)uVar19 < iVar17);
  }
  return bVar22;
}

