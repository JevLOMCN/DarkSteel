// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 5

// operator() @ 14dd6e940

void __thiscall
`FImageOverlappedPlane::AccumulateSinglePlane'::__l107::<lambda_1>::operator()
          (void *this,int param_1)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong lVar15;
  code *pcVar16;
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
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  bool bVar48;
  uint uVar49;
  longlong lVar50;
  longlong lVar51;
  uint uVar52;
  int iVar53;
  int iVar54;
  uint uVar55;
  int iVar56;
  longlong lVar57;
  longlong lVar58;
  longlong lVar59;
  longlong lVar60;
  longlong lVar61;
  uint uVar62;
  int iVar63;
  int iVar64;
  ulonglong uVar65;
  uint uVar66;
  ulonglong uVar67;
  ulonglong uVar68;
  
  iVar63 = *(int *)this;
  plVar13 = *(longlong **)((longlong)this + 0xc0);
  uVar55 = (iVar63 + param_1) - *(int *)((longlong)this + 4);
  uVar62 = 0;
  if (0 < (int)(uVar55 - 1)) {
    uVar62 = uVar55 - 1;
  }
  uVar66 = 0;
  if (0 < (int)uVar55) {
    uVar66 = uVar55;
  }
  lVar58 = (longlong)*(int *)((longlong)this + 8) * (longlong)(int)uVar62;
  uVar55 = 0;
  if (lVar58 < plVar13[1]) {
    uVar55 = (uint)((ulonglong)lVar58 >> 0x3f) ^ 1;
  }
  if ((uVar55 == 0) &&
     (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar48)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  plVar14 = *(longlong **)((longlong)this + 0xc0);
  lVar58 = *plVar13 + lVar58 * 4;
  lVar59 = (longlong)*(int *)((longlong)this + 8) * (longlong)(int)uVar66;
  uVar55 = 0;
  if (lVar59 < plVar14[1]) {
    uVar55 = (uint)((ulonglong)lVar59 >> 0x3f) ^ 1;
  }
  if ((uVar55 == 0) &&
     (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar48)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  lVar59 = *plVar14 + lVar59 * 4;
  lVar15 = **(longlong **)((longlong)this + 200);
  plVar13 = *(longlong **)((longlong)this + 0xd0);
  uVar55 = 0;
  if ((int)uVar62 < (int)plVar13[1]) {
    uVar55 = ~uVar62 >> 0x1f;
  }
  if ((uVar55 == 0) &&
     (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar48)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  fVar9 = *(float *)(*plVar13 + (longlong)(int)uVar62 * 4);
  plVar13 = *(longlong **)((longlong)this + 0xd0);
  uVar62 = 0;
  if ((int)uVar66 < (int)plVar13[1]) {
    uVar62 = ~uVar66 >> 0x1f;
  }
  if ((uVar62 == 0) &&
     (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar48)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  plVar14 = *(longlong **)((longlong)this + 0xb8);
  fVar10 = *(float *)(*plVar13 + (longlong)(int)uVar66 * 4);
  uVar67 = 0;
  lVar60 = (longlong)*(int *)((longlong)this + 0xb0) * (longlong)(iVar63 + param_1);
  uVar55 = 0;
  uVar62 = uVar55;
  if (lVar60 < plVar14[1]) {
    uVar62 = (uint)((ulonglong)lVar60 >> 0x3f) ^ 1;
  }
  if ((uVar62 == 0) &&
     (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar48)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  lVar60 = *plVar14 + lVar60 * 4;
  if ((*(int *)((longlong)this + 0x10) - *(int *)((longlong)this + 0x18) < 0) &&
     (bVar48 = ::FDebug::CheckVerifyFailedImpl2
                         ("ActualDstX0 - StartX >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                          ,0xfc,L""), bVar48)) {
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
  uVar66 = (uint)(*(int *)((longlong)this + 0x10) == *(int *)((longlong)this + 0x18));
  uVar62 = (*(int *)((longlong)this + 0x14) - *(int *)((longlong)this + 0x10)) - uVar66;
  if ((int)uVar62 < 0) {
    uVar62 = uVar55;
  }
  uVar49 = (int)(uVar62 + ((int)uVar62 >> 0x1f & 3U)) >> 2;
  iVar63 = uVar62 + uVar49 * -4;
  uVar68 = uVar67;
  if (uVar66 != 0) {
    do {
      iVar56 = *(int *)((longlong)this + 0x10) + (int)uVar68;
      uVar52 = iVar56 - *(int *)((longlong)this + 0x18);
      uVar62 = uVar52 - 1;
      if ((int)(uVar52 - 1) < 0) {
        uVar62 = uVar55;
      }
      lVar61 = (longlong)(int)uVar62;
      if ((int)uVar52 < 0) {
        uVar52 = uVar55;
      }
      uVar62 = (int)uVar68 + 1;
      uVar68 = (ulonglong)uVar62;
      lVar50 = (longlong)(int)uVar52;
      fVar11 = *(float *)(lVar15 + lVar61 * 4);
      fVar12 = *(float *)(lVar15 + lVar50 * 4);
      *(float *)(lVar60 + (longlong)iVar56 * 4) =
           fVar12 * *(float *)(lVar59 + lVar50 * 4) * fVar10 * *(float *)((longlong)this + 0x1c) +
           fVar11 * *(float *)(lVar59 + lVar61 * 4) * fVar10 * *(float *)((longlong)this + 0x20) +
           fVar12 * *(float *)(lVar58 + lVar50 * 4) * fVar9 * *(float *)((longlong)this + 0x24) +
           fVar11 * *(float *)(lVar58 + lVar61 * 4) * fVar9 * *(float *)((longlong)this + 0x28) +
           *(float *)(lVar60 + (longlong)iVar56 * 4);
    } while ((int)uVar62 < (int)uVar66);
  }
  if (0 < (int)uVar49) {
    uVar65 = (ulonglong)uVar49;
    uVar68 = uVar67;
    do {
      iVar56 = (int)uVar68;
      uVar68 = (ulonglong)(iVar56 + 4);
      iVar56 = *(int *)((longlong)this + 0x10) + iVar56 + uVar66;
      lVar61 = (longlong)(iVar56 - *(int *)((longlong)this + 0x18));
      pfVar1 = (float *)(lVar60 + (longlong)iVar56 * 4);
      fVar11 = pfVar1[1];
      fVar12 = pfVar1[2];
      fVar17 = pfVar1[3];
      pfVar5 = (float *)(lVar15 + -4 + lVar61 * 4);
      fVar18 = pfVar5[1];
      fVar19 = pfVar5[2];
      fVar20 = pfVar5[3];
      pfVar8 = (float *)(lVar15 + lVar61 * 4);
      fVar21 = pfVar8[1];
      fVar22 = pfVar8[2];
      fVar23 = pfVar8[3];
      pfVar6 = (float *)(lVar58 + -4 + lVar61 * 4);
      fVar24 = pfVar6[1];
      fVar25 = pfVar6[2];
      fVar26 = pfVar6[3];
      pfVar2 = (float *)(lVar58 + lVar61 * 4);
      fVar27 = pfVar2[1];
      fVar28 = pfVar2[2];
      fVar29 = pfVar2[3];
      pfVar7 = (float *)(lVar59 + -4 + lVar61 * 4);
      fVar30 = pfVar7[1];
      fVar31 = pfVar7[2];
      fVar32 = pfVar7[3];
      pfVar3 = (float *)(lVar59 + lVar61 * 4);
      fVar33 = pfVar3[1];
      fVar34 = pfVar3[2];
      fVar35 = pfVar3[3];
      dVar36 = *(double *)((longlong)this + 0x98);
      dVar37 = *(double *)((longlong)this + 0x78);
      dVar38 = *(double *)((longlong)this + 0x58);
      dVar39 = *(double *)((longlong)this + 0x38);
      dVar40 = *(double *)((longlong)this + 0xa0);
      dVar41 = *(double *)((longlong)this + 0xa8);
      dVar42 = *(double *)((longlong)this + 0x80);
      dVar43 = *(double *)((longlong)this + 0x88);
      dVar44 = *(double *)((longlong)this + 0x60);
      dVar45 = *(double *)((longlong)this + 0x68);
      dVar46 = *(double *)((longlong)this + 0x40);
      dVar47 = *(double *)((longlong)this + 0x48);
      pfVar4 = (float *)(lVar60 + (longlong)iVar56 * 4);
      *pfVar4 = (float)((double)(*pfVar6 * *pfVar5) * (double)fVar9 *
                        *(double *)((longlong)this + 0x90) + (double)*pfVar1 +
                        (double)(*pfVar2 * *pfVar8) * (double)fVar9 *
                        *(double *)((longlong)this + 0x70) +
                        (double)(*pfVar7 * *pfVar5) * (double)fVar10 *
                        *(double *)((longlong)this + 0x50) +
                       (double)(*pfVar3 * *pfVar8) * (double)fVar10 *
                       *(double *)((longlong)this + 0x30));
      pfVar4[1] = (float)((double)(fVar24 * fVar18) * (double)fVar9 * dVar36 + (double)fVar11 +
                          (double)(fVar27 * fVar21) * (double)fVar9 * dVar37 +
                          (double)(fVar30 * fVar18) * (double)fVar10 * dVar38 +
                         (double)(fVar33 * fVar21) * (double)fVar10 * dVar39);
      pfVar4[2] = (float)((double)(fVar25 * fVar19) * (double)fVar9 * dVar40 + (double)fVar12 +
                          (double)(fVar28 * fVar22) * (double)fVar9 * dVar42 +
                          (double)(fVar31 * fVar19) * (double)fVar10 * dVar44 +
                         (double)(fVar34 * fVar22) * (double)fVar10 * dVar46);
      pfVar4[3] = (float)((double)(fVar26 * fVar20) * (double)fVar9 * dVar41 + (double)fVar17 +
                          (double)(fVar29 * fVar23) * (double)fVar9 * dVar43 +
                          (double)(fVar32 * fVar20) * (double)fVar10 * dVar45 +
                         (double)(fVar35 * fVar23) * (double)fVar10 * dVar47);
      uVar65 = uVar65 - 1;
    } while (uVar65 != 0);
  }
  iVar56 = 0;
  if (3 < iVar63) {
    lVar61 = (longlong)(int)uVar49 * 4;
    uVar62 = (iVar63 - 4U >> 2) + 1;
    uVar68 = (ulonglong)uVar62;
    iVar64 = 0;
    iVar56 = uVar62 * 4;
    do {
      lVar50 = (int)(*(int *)((longlong)this + 0x10) + uVar66) + lVar61 + uVar67;
      iVar53 = (int)lVar50 - *(int *)((longlong)this + 0x18);
      iVar54 = iVar53 + -1;
      if (iVar53 + -1 < 0) {
        iVar54 = iVar64;
      }
      lVar57 = (longlong)iVar54;
      if (iVar53 < 0) {
        iVar53 = iVar64;
      }
      lVar51 = (longlong)iVar53;
      fVar11 = *(float *)(lVar15 + lVar57 * 4);
      fVar12 = *(float *)(lVar15 + lVar51 * 4);
      *(float *)(lVar60 + lVar50 * 4) =
           fVar12 * *(float *)(lVar59 + lVar51 * 4) * fVar10 * *(float *)((longlong)this + 0x1c) +
           fVar11 * *(float *)(lVar59 + lVar57 * 4) * fVar10 * *(float *)((longlong)this + 0x20) +
           fVar12 * *(float *)(lVar58 + lVar51 * 4) * fVar9 * *(float *)((longlong)this + 0x24) +
           fVar11 * *(float *)(lVar58 + lVar57 * 4) * fVar9 * *(float *)((longlong)this + 0x28) +
           *(float *)(lVar60 + lVar50 * 4);
      lVar50 = (int)(*(int *)((longlong)this + 0x10) + uVar66) + lVar61 + uVar67;
      iVar53 = ((int)lVar50 + 1) - *(int *)((longlong)this + 0x18);
      iVar54 = iVar53 + -1;
      if (iVar53 + -1 < 0) {
        iVar54 = iVar64;
      }
      lVar57 = (longlong)iVar54;
      if (iVar53 < 0) {
        iVar53 = iVar64;
      }
      lVar51 = (longlong)iVar53;
      fVar11 = *(float *)(lVar15 + lVar57 * 4);
      fVar12 = *(float *)(lVar15 + lVar51 * 4);
      *(float *)(lVar60 + 4 + lVar50 * 4) =
           fVar12 * *(float *)(lVar59 + lVar51 * 4) * fVar10 * *(float *)((longlong)this + 0x1c) +
           fVar11 * *(float *)(lVar59 + lVar57 * 4) * fVar10 * *(float *)((longlong)this + 0x20) +
           fVar12 * *(float *)(lVar58 + lVar51 * 4) * fVar9 * *(float *)((longlong)this + 0x24) +
           fVar11 * *(float *)(lVar58 + lVar57 * 4) * fVar9 * *(float *)((longlong)this + 0x28) +
           *(float *)(lVar60 + 4 + lVar50 * 4);
      lVar50 = (int)(*(int *)((longlong)this + 0x10) + uVar66) + lVar61 + uVar67;
      iVar53 = ((int)lVar50 + 2) - *(int *)((longlong)this + 0x18);
      iVar54 = iVar53 + -1;
      if (iVar53 + -1 < 0) {
        iVar54 = iVar64;
      }
      lVar57 = (longlong)iVar54;
      if (iVar53 < 0) {
        iVar53 = iVar64;
      }
      lVar51 = (longlong)iVar53;
      fVar11 = *(float *)(lVar15 + lVar57 * 4);
      fVar12 = *(float *)(lVar15 + lVar51 * 4);
      *(float *)(lVar60 + 8 + lVar50 * 4) =
           fVar12 * *(float *)(lVar59 + lVar51 * 4) * fVar10 * *(float *)((longlong)this + 0x1c) +
           fVar11 * *(float *)(lVar59 + lVar57 * 4) * fVar10 * *(float *)((longlong)this + 0x20) +
           fVar12 * *(float *)(lVar58 + lVar51 * 4) * fVar9 * *(float *)((longlong)this + 0x24) +
           fVar11 * *(float *)(lVar58 + lVar57 * 4) * fVar9 * *(float *)((longlong)this + 0x28) +
           *(float *)(lVar60 + 8 + lVar50 * 4);
      lVar50 = (int)(*(int *)((longlong)this + 0x10) + uVar66) + lVar61 + uVar67;
      iVar54 = ((int)lVar50 + 3) - *(int *)((longlong)this + 0x18);
      iVar53 = iVar54 + -1;
      if (iVar54 + -1 < 0) {
        iVar53 = iVar64;
      }
      lVar57 = (longlong)iVar53;
      if (iVar54 < 0) {
        iVar54 = iVar64;
      }
      uVar67 = uVar67 + 4;
      lVar51 = (longlong)iVar54;
      fVar11 = *(float *)(lVar15 + lVar57 * 4);
      fVar12 = *(float *)(lVar15 + lVar51 * 4);
      *(float *)(lVar60 + 0xc + lVar50 * 4) =
           fVar12 * *(float *)(lVar59 + lVar51 * 4) * fVar10 * *(float *)((longlong)this + 0x1c) +
           fVar11 * *(float *)(lVar59 + lVar57 * 4) * fVar10 * *(float *)((longlong)this + 0x20) +
           fVar12 * *(float *)(lVar58 + lVar51 * 4) * fVar9 * *(float *)((longlong)this + 0x24) +
           fVar11 * *(float *)(lVar58 + lVar57 * 4) * fVar9 * *(float *)((longlong)this + 0x28) +
           *(float *)(lVar60 + 0xc + lVar50 * 4);
      uVar68 = uVar68 - 1;
    } while (uVar68 != 0);
  }
  if (iVar56 < iVar63) {
    uVar67 = (ulonglong)(uint)(iVar63 - iVar56);
    lVar61 = (longlong)iVar56;
    do {
      lVar50 = (longlong)(int)(*(int *)((longlong)this + 0x10) + uVar66) + (longlong)(int)uVar49 * 4
               + lVar61;
      iVar56 = (int)lVar50 - *(int *)((longlong)this + 0x18);
      iVar63 = iVar56 + -1;
      if (iVar56 + -1 < 0) {
        iVar63 = 0;
      }
      lVar57 = (longlong)iVar63;
      if (iVar56 < 0) {
        iVar56 = 0;
      }
      lVar61 = lVar61 + 1;
      lVar51 = (longlong)iVar56;
      fVar11 = *(float *)(lVar15 + lVar57 * 4);
      fVar12 = *(float *)(lVar15 + lVar51 * 4);
      *(float *)(lVar60 + lVar50 * 4) =
           fVar12 * *(float *)(lVar59 + lVar51 * 4) * fVar10 * *(float *)((longlong)this + 0x1c) +
           fVar11 * *(float *)(lVar59 + lVar57 * 4) * fVar10 * *(float *)((longlong)this + 0x20) +
           fVar12 * *(float *)(lVar58 + lVar51 * 4) * fVar9 * *(float *)((longlong)this + 0x24) +
           fVar11 * *(float *)(lVar58 + lVar57 * 4) * fVar9 * *(float *)((longlong)this + 0x28) +
           *(float *)(lVar60 + lVar50 * 4);
      uVar67 = uVar67 - 1;
    } while (uVar67 != 0);
  }
  return;
}

// AccumulateSinglePlane @ 14dd73490

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FImageOverlappedPlane::AccumulateSinglePlane
          (FImageOverlappedPlane *this,TArray<float,TSizedDefaultAllocator<64>_> *param_1,
          TIntPoint<int> param_2,TIntPoint<int> param_3,float param_4,float param_5,
          TIntPoint<int> param_6,TIntPoint<int> param_7,
          TArray<float,TSizedDefaultAllocator<32>_> *param_8,
          TArray<float,TSizedDefaultAllocator<32>_> *param_9)

{
  float fVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  int iVar4;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar5;
  bool bVar6;
  uint uVar7;
  FName *pFVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined7 extraout_var_04;
  undefined7 extraout_var_05;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  TIntPoint<int>_u_0 TVar21;
  float *pfVar22;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar23;
  longlong lVar24;
  longlong lVar25;
  int iVar26;
  FScriptContainerElement *pFVar27;
  FScriptContainerElement *pFVar28;
  longlong lVar29;
  FName FVar30;
  float fVar31;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  uint uStackX_1c;
  int iStackX_24;
  undefined1 auStackY_2f8 [32];
  <lambda_1> local_298;
  longlong local_290;
  longlong local_288;
  float local_280 [4];
  uint local_270;
  uint local_26c;
  FName local_268;
  longlong local_260;
  TArray<float,TSizedDefaultAllocator<32>_> *local_258;
  FScriptContainerElement *local_250;
  uint local_248;
  TArray<float,TSizedDefaultAllocator<32>_> *local_240;
  longlong local_238;
  uint local_230;
  int local_22c;
  longlong local_228;
  longlong local_220;
  TArray<float,TSizedDefaultAllocator<32>_> *local_218;
  FScriptContainerElement *local_210;
  FColor_u_0 local_208 [2];
  TIntPoint<int>_u_0 local_200;
  FName local_1f8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  longlong local_1d8;
  FName local_1d0;
  TArrayView<std::nullptr_t,int> local_1c0;
  code *local_1b0;
  int *local_1a8;
  FName local_1a0;
  int local_198;
  int local_194;
  TIntPoint<int>_u_0 local_190;
  uint local_188;
  uint local_184;
  int local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  double local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double dStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  TIntPoint<int>_u_0 local_e8;
  FImageOverlappedPlane *local_e0;
  TArray<float,TSizedDefaultAllocator<64>_> *local_d8;
  TArray<float,TSizedDefaultAllocator<32>_> *local_d0;
  TArray<float,TSizedDefaultAllocator<32>_> *local_c8;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  local_200 = param_3.field0_0x0;
  local_218 = param_8;
  local_258 = param_9;
  local_268 = (FName)StatPtr_STAT_AccumulateSinglePlane;
  if (StatPtr_STAT_AccumulateSinglePlane ==
      (FThreadSafeStaticStat<FStat_STAT_AccumulateSinglePlane>)0x0) {
    pFVar8 = ::FName::FName(&local_1a0,"STAT_AccumulateSinglePlane");
    local_268 = (FName)FThreadSafeStaticStatBase::DoSetup
                                 ((FThreadSafeStaticStatBase *)&StatPtr_STAT_AccumulateSinglePlane,
                                  *pFVar8,L"OverlapAccumulator_AccumulateSinglePlane",
                                  "STATGROUP_MoviePipeline","STATCAT_Advanced",
                                  L"MovieRenderPipeline",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_1d0.ComparisonIndex.Value = 0;
  local_1d0.Number = 0;
  local_298 = (<lambda_1>)0x0;
  FVar30 = *(FName *)local_268;
  if ((FVar30.ComparisonIndex.Value.Value == 0) && (FVar30.Number == 0)) {
LAB_14dd73651:
    local_268 = local_1d0;
    FVar30 = local_1d0;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_208[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_208[0]._s_0,(char *)*(FName *)((longlong)local_268 + 0x10));
      local_298 = (<lambda_1>)0x1;
      if (-1 < CpuChannel->Enabled) {
        local_1f8.ComparisonIndex.Value = FVar30.ComparisonIndex.Value.Value;
        local_1f8.Number = FVar30.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1f8,(wchar_t *)*(FName *)((longlong)local_268 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                   ,0x32);
        local_298 = (<lambda_1>)0x3;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14dd73651;
    local_268 = FVar30;
    FThreadStats::AddMessage(FVar30,CycleScopeStart);
    local_298 = (<lambda_1>)((byte)local_298 | 4);
  }
  uStackX_1c = param_2.field0_0x0._4_4_;
  iVar26 = param_2.field0_0x0._0_4_;
  local_220 = (longlong)iVar26;
  if ((param_1->ArrayNum != (longlong)iVar26 * (longlong)(int)uStackX_1c) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InRawData.Num() == InSize.X * (int64)InSize.Y",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                         ,0x34,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((param_8->ArrayNum != iVar26) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("WeightDataX.Num() == InSize.X",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                         ,0x35,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar7 = uStackX_1c;
  if (param_9->ArrayNum != uStackX_1c) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("WeightDataY.Num() == InSize.Y",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                       ,0x36,L"");
    uVar7 = (uint)CONCAT71(extraout_var,bVar6);
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  fVar35 = __real_3f800000;
  if (0.0 <= param_4) {
    if (__real_3f800000 < param_4) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubpixelOffsetX <= 1.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                         ,0x39,L"");
      uVar7 = (uint)CONCAT71(extraout_var_01,bVar6);
      if (bVar6) goto code_r0x00014dd73762;
    }
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubpixelOffsetX >= 0.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                       ,0x38,L"");
    uVar7 = (uint)CONCAT71(extraout_var_00,bVar6);
    if (bVar6) {
code_r0x00014dd73762:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (0.0 <= param_5) {
    if (fVar35 < param_5) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("SubpixelOffsetY <= 1.0f",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                         ,0x3b,L"");
      uVar7 = (uint)CONCAT71(extraout_var_03,bVar6);
      if (bVar6) goto code_r0x00014dd737c1;
    }
  }
  else {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubpixelOffsetY >= 0.0f",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                       ,0x3a,L"");
    uVar7 = (uint)CONCAT71(extraout_var_02,bVar6);
    if (bVar6) {
code_r0x00014dd737c1:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_7.field0_0x0._s_0.X < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubRectSize.X >= 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                       ,0x3d,L"");
    uVar7 = (uint)CONCAT71(extraout_var_04,bVar6);
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (param_7.field0_0x0._s_0.Y < 1) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("SubRectSize.Y >= 1",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderOverlappedImage.cpp"
                       ,0x3e,L"");
    uVar7 = (uint)CONCAT71(extraout_var_05,bVar6);
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  TVar21 = param_3.field0_0x0;
  if (param_4 < __real_3f000000) {
    TVar21._0_4_ = param_3.field0_0x0._0_4_ - 1;
    TVar21._s_0.Y = 0;
    local_200._s_0 = TVar21._s_0;
  }
  iStackX_24 = param_3.field0_0x0._4_4_;
  if (param_5 < __real_3f000000) {
    iStackX_24 = iStackX_24 + -1;
  }
  fVar37 = param_4 + __real_3f000000;
  iVar9 = (int)fVar37;
  fVar31 = fVar37;
  if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar37)) {
    auVar32._4_4_ = fVar37;
    auVar32._0_4_ = fVar37;
    auVar32._8_8_ = 0;
    uVar7 = movmskps(uVar7,auVar32);
    uVar7 = uVar7 & 1;
    fVar31 = (float)(int)(iVar9 - uVar7);
  }
  fVar34 = param_5 + __real_3f000000;
  fVar37 = fVar37 - fVar31;
  iVar9 = (int)fVar34;
  fVar31 = fVar34;
  if ((iVar9 != -0x80000000) && ((float)iVar9 != fVar34)) {
    auVar33._4_4_ = fVar34;
    auVar33._0_4_ = fVar34;
    auVar33._8_8_ = 0;
    uVar7 = movmskps(uVar7,auVar33);
    fVar31 = (float)(int)(iVar9 - (uVar7 & 1));
  }
  fVar34 = fVar34 - fVar31;
  fVar31 = (fVar35 - fVar34) * fVar37;
  fVar36 = (fVar35 - fVar34) * (fVar35 - fVar37);
  fVar35 = (fVar35 - fVar37) * fVar34;
  fVar34 = fVar34 * fVar37;
  local_280[1] = fVar31;
  local_280[3] = fVar34;
  local_280[2] = fVar35;
  iVar9 = TVar21._s_0.X;
  if (bSlowReference == false) {
    uVar10 = param_6.field0_0x0._s_0.X + iVar9;
    iVar26 = param_6.field0_0x0._s_0.Y + iStackX_24;
    uVar7 = (this->Size).field0_0x0._s_0.X;
    uVar19 = uVar7;
    if ((int)uVar10 < (int)uVar7) {
      uVar19 = uVar10;
    }
    iVar11 = (this->Size).field0_0x0._s_0.Y;
    local_248 = 0;
    if (0 < (int)uVar19) {
      local_248 = uVar19;
    }
    if ((int)(uVar10 + param_7.field0_0x0._s_0.X) < (int)uVar7) {
      uVar7 = uVar10 + param_7.field0_0x0._s_0.X;
    }
    uVar19 = 0;
    if (0 < (int)uVar7) {
      uVar19 = uVar7;
    }
    iVar4 = iVar11;
    if (iVar26 < iVar11) {
      iVar4 = iVar26;
    }
    iVar15 = 0;
    if (0 < iVar4) {
      iVar15 = iVar4;
    }
    if (iVar26 + param_7.field0_0x0._s_0.Y < iVar11) {
      iVar11 = iVar26 + param_7.field0_0x0._s_0.Y;
    }
    iVar26 = 0;
    if (0 < iVar11) {
      iVar26 = iVar11;
    }
    if (bRunVectorized == false) {
      lVar16 = (longlong)(int)uVar19;
      local_240 = (TArray<float,TSizedDefaultAllocator<32>_> *)(longlong)iVar26;
      local_260 = (longlong)iVar15;
      if (local_260 < (longlong)local_240) {
        local_270 = iVar15 - iStackX_24;
        do {
          uVar7 = 0;
          local_26c = local_270 - 1;
          if ((int)(local_270 - 1) < 0) {
            local_26c = uVar7;
          }
          uVar19 = local_270;
          if ((int)local_270 < 0) {
            uVar19 = uVar7;
          }
          local_210 = (FScriptContainerElement *)(longlong)(int)local_26c;
          lVar12 = (longlong)local_210 * local_220;
          if (lVar12 < param_1->ArrayNum) {
            uVar7 = (uint)((ulonglong)lVar12 >> 0x3f) ^ 1;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar28 = (param_1->AllocatorInstance).Data;
          lVar24 = (int)uVar19 * local_220;
          uVar7 = 0;
          if (lVar24 < param_1->ArrayNum) {
            uVar7 = (uint)((ulonglong)lVar24 >> 0x3f) ^ 1;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar2 = (param_1->AllocatorInstance).Data;
          local_250 = (param_8->AllocatorInstance).Data;
          uVar7 = 0;
          if ((int)local_26c < param_9->ArrayNum) {
            uVar7 = ~local_26c >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          fVar37 = *(float *)((param_9->AllocatorInstance).Data + (longlong)local_210 * 4);
          uVar7 = 0;
          if ((int)uVar19 < param_9->ArrayNum) {
            uVar7 = ~uVar19 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          local_238 = (this->Size).field0_0x0._s_0.X * local_260;
          fVar1 = *(float *)((param_9->AllocatorInstance).Data + (longlong)(int)uVar19 * 4);
          uVar7 = 0;
          if (local_238 < (this->ChannelData).ArrayNum) {
            uVar7 = (uint)((ulonglong)local_238 >> 0x3f) ^ 1;
          }
          if ((uVar7 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar13 = (longlong)(int)local_248;
          local_210 = (this->ChannelData).AllocatorInstance.Data + local_238 * 4;
          if (lVar13 < lVar16) {
            uVar7 = local_248;
            param_8 = local_218;
            if (3 < lVar16 - lVar13) {
              pFVar27 = local_210 + (lVar13 + 2) * 4;
              lVar29 = ((lVar16 - lVar13) - 4U >> 2) + 1;
              iVar26 = (local_248 - TVar21._s_0.X) + 1;
              uVar7 = local_248 + (int)lVar29 * 4;
              lVar13 = lVar13 + lVar29 * 4;
              do {
                iVar11 = 0;
                iVar9 = iVar26 + -2;
                if (iVar26 + -2 < 0) {
                  iVar9 = iVar11;
                }
                lVar17 = (longlong)iVar9;
                iVar9 = iVar26 + -1;
                if (iVar26 + -1 < 0) {
                  iVar9 = iVar11;
                }
                lVar25 = (longlong)iVar9;
                iVar9 = iVar26;
                if (iVar26 < 0) {
                  iVar9 = iVar11;
                }
                lVar14 = (longlong)iVar9;
                iVar9 = iVar26 + 1;
                if (iVar26 + 1 < 0) {
                  iVar9 = iVar11;
                }
                lVar18 = (longlong)iVar9;
                *(float *)(pFVar27 + -8) =
                     fVar1 * *(float *)(local_250 + lVar17 * 4) * fVar31 *
                     *(float *)(pFVar2 + lVar17 * 4 + lVar24 * 4) +
                     fVar1 * *(float *)(local_250 + lVar25 * 4) * fVar36 *
                     *(float *)(pFVar2 + lVar25 * 4 + lVar24 * 4) +
                     fVar37 * *(float *)(local_250 + lVar25 * 4) * fVar35 *
                     *(float *)(pFVar28 + lVar25 * 4 + lVar12 * 4) +
                     fVar37 * *(float *)(local_250 + lVar17 * 4) * fVar34 *
                     *(float *)(pFVar28 + lVar17 * 4 + lVar12 * 4) + *(float *)(pFVar27 + -8);
                *(float *)(pFVar27 + -4) =
                     *(float *)(local_250 + lVar14 * 4) * fVar1 * fVar36 *
                     *(float *)(pFVar2 + lVar14 * 4 + lVar24 * 4) +
                     fVar1 * *(float *)(local_250 + lVar25 * 4) * fVar31 *
                     *(float *)(pFVar2 + lVar25 * 4 + lVar24 * 4) +
                     *(float *)(local_250 + lVar14 * 4) * fVar37 * fVar35 *
                     *(float *)(pFVar28 + lVar14 * 4 + lVar12 * 4) +
                     fVar37 * *(float *)(local_250 + lVar25 * 4) * fVar34 *
                     *(float *)(pFVar28 + lVar25 * 4 + lVar12 * 4) + *(float *)(pFVar27 + -4);
                *(float *)pFVar27 =
                     *(float *)(local_250 + lVar14 * 4) * fVar1 * fVar31 *
                     *(float *)(pFVar2 + lVar14 * 4 + lVar24 * 4) +
                     *(float *)(local_250 + lVar18 * 4) * fVar1 * fVar36 *
                     *(float *)(pFVar2 + lVar18 * 4 + lVar24 * 4) +
                     *(float *)(local_250 + lVar18 * 4) * fVar37 * fVar35 *
                     *(float *)(pFVar28 + lVar18 * 4 + lVar12 * 4) +
                     *(float *)(local_250 + lVar14 * 4) * fVar37 * fVar34 *
                     *(float *)(pFVar28 + lVar14 * 4 + lVar12 * 4) + *(float *)pFVar27;
                iVar9 = iVar26 + 2;
                if (iVar26 + 2 < 0) {
                  iVar9 = iVar11;
                }
                iVar26 = iVar26 + 4;
                lVar17 = (longlong)iVar9;
                *(float *)(pFVar27 + 4) =
                     *(float *)(local_250 + lVar17 * 4) * fVar1 * fVar36 *
                     *(float *)(pFVar2 + lVar17 * 4 + lVar24 * 4) +
                     *(float *)(local_250 + lVar18 * 4) * fVar1 * fVar31 *
                     *(float *)(pFVar2 + lVar18 * 4 + lVar24 * 4) +
                     *(float *)(local_250 + lVar17 * 4) * fVar37 * fVar35 *
                     *(float *)(pFVar28 + lVar17 * 4 + lVar12 * 4) +
                     *(float *)(local_250 + lVar18 * 4) * fVar37 * fVar34 *
                     *(float *)(pFVar28 + lVar18 * 4 + lVar12 * 4) + *(float *)(pFVar27 + 4);
                pFVar27 = pFVar27 + 0x10;
                lVar29 = lVar29 + -1;
              } while (lVar29 != 0);
              TVar21 = local_200;
              param_9 = local_258;
              if (lVar16 <= lVar13) goto LAB_14dd746da;
            }
            iVar26 = uVar7 - TVar21._s_0.X;
            do {
              iVar9 = iVar26 + -1;
              if (iVar26 + -1 < 0) {
                iVar9 = 0;
              }
              lVar29 = (longlong)iVar9;
              iVar9 = iVar26;
              if (iVar26 < 0) {
                iVar9 = 0;
              }
              iVar26 = iVar26 + 1;
              lVar17 = (longlong)iVar9;
              *(float *)(local_210 + lVar13 * 4) =
                   *(float *)(local_250 + lVar17 * 4) * fVar1 * fVar36 *
                   *(float *)(pFVar2 + lVar17 * 4 + lVar24 * 4) +
                   *(float *)(local_250 + lVar29 * 4) * fVar1 * fVar31 *
                   *(float *)(pFVar2 + lVar29 * 4 + lVar24 * 4) +
                   *(float *)(local_250 + lVar17 * 4) * fVar37 * fVar35 *
                   *(float *)(pFVar28 + lVar17 * 4 + lVar12 * 4) +
                   *(float *)(local_250 + lVar29 * 4) * fVar37 * fVar34 *
                   *(float *)(pFVar28 + lVar29 * 4 + lVar12 * 4) +
                   *(float *)(local_210 + lVar13 * 4);
              lVar13 = lVar13 + 1;
            } while (lVar13 < lVar16);
          }
LAB_14dd746da:
          local_270 = local_270 + 1;
          local_260 = local_260 + 1;
          FVar30 = local_268;
        } while (local_260 < (longlong)local_240);
      }
    }
    else {
      local_e8 = (this->Size).field0_0x0;
      local_168 = (double)fVar36;
      dStack_160 = (double)fVar36;
      local_1b0 = UE::Core::Private::Function::
                  TFunctionRefCaller<`FImageOverlappedPlane::AccumulateSinglePlane'::__l107::<lambda_1>,void,int>
                  ::Call;
      local_1a8 = &local_198;
      local_158 = (double)fVar36;
      dStack_150 = (double)fVar36;
      local_1c0.DataPtr = (void **)0x0;
      local_148 = (double)fVar31;
      dStack_140 = (double)fVar31;
      local_1c0.ArrayNum = 0;
      local_128 = (double)fVar35;
      dStack_120 = (double)fVar35;
      local_d0 = param_8;
      local_c8 = param_9;
      local_138 = (double)fVar31;
      dStack_130 = (double)fVar31;
      local_118 = (double)fVar35;
      dStack_110 = (double)fVar35;
      local_108 = (double)fVar34;
      dStack_100 = (double)fVar34;
      local_f8 = (double)fVar34;
      dStack_f0 = (double)fVar34;
      local_198 = iVar15;
      local_194 = iStackX_24;
      local_190 = param_2.field0_0x0;
      local_188 = local_248;
      local_184 = uVar19;
      local_180 = iVar9;
      local_17c = fVar36;
      local_178 = fVar31;
      local_174 = fVar35;
      local_170 = fVar34;
      local_e0 = this;
      local_d8 = param_1;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",iVar26 - iVar15,1,(TFunctionRef<void___cdecl(int)> *)&local_1b0
                 ,local_298,None,&local_1c0);
    }
  }
  else {
    lVar16 = (longlong)iStackX_24;
    local_228 = lVar16;
    local_238 = (longlong)iVar9;
    if (bReversedReference == false) {
      local_290 = 0;
      lVar16 = local_220;
      if (0 < (int)uStackX_1c) {
        do {
          local_258 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
          if (0 < lVar16) {
            uVar7 = (uint)local_290;
            local_250 = (FScriptContainerElement *)(longlong)(int)uVar7;
            pTVar23 = (TArray<float,TSizedDefaultAllocator<32>_> *)(lVar16 * local_290);
            local_26c = ~uVar7 >> 0x1f;
            local_240 = pTVar23;
            do {
              pTVar5 = local_258;
              uVar19 = local_26c;
              uVar10 = 0;
              if ((longlong)pTVar23 < param_1->ArrayNum) {
                uVar10 = (uint)((ulonglong)pTVar23 >> 0x3f) ^ 1;
              }
              local_240 = pTVar23;
              if ((uVar10 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              uVar20 = (uint)pTVar5;
              fVar35 = *(float *)((param_1->AllocatorInstance).Data + (longlong)pTVar23 * 4);
              uVar10 = 0;
              if ((int)uVar20 < param_8->ArrayNum) {
                uVar10 = ~uVar20 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              fVar31 = *(float *)((param_8->AllocatorInstance).Data + (longlong)(int)uVar20 * 4);
              uVar10 = 0;
              if ((int)uVar7 < param_8->ArrayNum) {
                uVar10 = uVar19;
              }
              if ((uVar10 == 0) &&
                 (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar6)) {
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pfVar22 = local_280 + 1;
              lVar24 = (longlong)&(pTVar5->AllocatorInstance).Data + local_238;
              lVar12 = local_228 + local_290;
              fVar31 = fVar31 * *(float *)((param_8->AllocatorInstance).Data +
                                          (longlong)local_250 * 4);
              local_288 = 2;
              lVar16 = lVar24 + 1;
              do {
                fVar37 = pfVar22[-1];
                if ((((-1 < lVar24) && (-1 < lVar12)) &&
                    (lVar13 = (longlong)(this->Size).field0_0x0._s_0.X, lVar24 < lVar13)) &&
                   (lVar12 < (this->Size).field0_0x0._s_0.Y)) {
                  lVar13 = lVar12 * lVar13 + lVar24;
                  uVar19 = 0;
                  if (lVar13 < (this->ChannelData).ArrayNum) {
                    uVar19 = (uint)((ulonglong)lVar13 >> 0x3f) ^ 1;
                  }
                  if ((uVar19 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pFVar28 = (this->ChannelData).AllocatorInstance.Data;
                  *(float *)(pFVar28 + lVar13 * 4) =
                       fVar31 * fVar37 * fVar35 + *(float *)(pFVar28 + lVar13 * 4);
                }
                fVar37 = *pfVar22;
                if (((-1 < lVar16) && (-1 < lVar12)) &&
                   ((lVar13 = (longlong)(this->Size).field0_0x0._s_0.X, lVar16 < lVar13 &&
                    (lVar12 < (this->Size).field0_0x0._s_0.Y)))) {
                  lVar13 = lVar12 * lVar13 + lVar16;
                  uVar19 = 0;
                  if (lVar13 < (this->ChannelData).ArrayNum) {
                    uVar19 = (uint)((ulonglong)lVar13 >> 0x3f) ^ 1;
                  }
                  if ((uVar19 == 0) &&
                     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar6)) {
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pFVar28 = (this->ChannelData).AllocatorInstance.Data;
                  *(float *)(pFVar28 + lVar13 * 4) =
                       fVar31 * fVar37 * fVar35 + *(float *)(pFVar28 + lVar13 * 4);
                }
                lVar12 = lVar12 + 1;
                pfVar22 = pfVar22 + 2;
                local_288 = local_288 + -1;
              } while (local_288 != 0);
              local_258 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                          ((longlong)&(local_258->AllocatorInstance).Data + 1);
              pTVar23 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                        ((longlong)&(local_240->AllocatorInstance).Data + 1);
              local_240 = pTVar23;
              lVar16 = local_220;
              param_8 = local_218;
            } while ((longlong)local_258 < local_220);
          }
          local_290 = local_290 + 1;
          FVar30 = local_268;
        } while (local_290 < (int)uStackX_1c);
      }
    }
    else if (0 < (int)uStackX_1c) {
      local_250 = (FScriptContainerElement *)(ulonglong)uStackX_1c;
      local_270 = 0xffffffff;
      lVar12 = (longlong)iVar9;
      do {
        local_22c = 0;
        lVar24 = lVar12;
        uVar7 = local_270;
        if (0 < iVar26) {
          local_258 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
          local_228 = lVar16;
          do {
            if ((((-1 < lVar12) && (-1 < lVar16)) &&
                (local_22c + TVar21._s_0.X < (this->Size).field0_0x0._s_0.X)) &&
               ((int)(uVar7 + 1 + iStackX_24) < (this->Size).field0_0x0._s_0.Y)) {
              pTVar23 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                        ((longlong)&local_258[-1].ArrayMax + 3);
              local_1d8 = 2;
              pfVar22 = local_280 + 2;
              local_240 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
              if (0 < (longlong)pTVar23) {
                local_240 = pTVar23;
              }
              local_230 = uVar7;
              local_248 = ~(uint)local_240 >> 0x1f;
              local_1f0 = (TArray<float,TSizedDefaultAllocator<32>_> *)0x0;
              if (0 < (longlong)local_258) {
                local_1f0 = local_258;
              }
              local_260 = (longlong)(int)(uint)local_240;
              local_26c = ~(uint)local_1f0 >> 0x1f;
              local_1e8 = (longlong)(int)(uint)local_1f0;
              do {
                lVar16 = 0;
                if (0 < (int)local_230) {
                  lVar16 = (longlong)(int)local_230;
                }
                local_210 = (FScriptContainerElement *)(local_220 * lVar16);
                pFVar28 = (FScriptContainerElement *)
                          ((longlong)&(local_240->AllocatorInstance).Data + local_220 * lVar16);
                uVar7 = 0;
                if ((longlong)pFVar28 < param_1->ArrayNum) {
                  uVar7 = (uint)((ulonglong)pFVar28 >> 0x3f) ^ 1;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                fVar35 = *(float *)((param_1->AllocatorInstance).Data + (longlong)pFVar28 * 4);
                uVar7 = 0;
                if ((int)local_240 < param_8->ArrayNum) {
                  uVar7 = local_248;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                uVar19 = (uint)lVar16;
                fVar31 = *(float *)((param_8->AllocatorInstance).Data + local_260 * 4);
                uVar7 = 0;
                if ((int)uVar19 < param_9->ArrayNum) {
                  uVar7 = ~uVar19 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                lVar16 = (this->Size).field0_0x0._s_0.X * local_228 + lVar12;
                local_1e0 = (longlong)(int)uVar19;
                fVar37 = *(float *)((param_9->AllocatorInstance).Data + (longlong)(int)uVar19 * 4);
                fVar34 = pfVar22[1];
                uVar7 = 0;
                if (lVar16 < (this->ChannelData).ArrayNum) {
                  uVar7 = (uint)((ulonglong)lVar16 >> 0x3f) ^ 1;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar28 = (this->ChannelData).AllocatorInstance.Data;
                *(float *)(pFVar28 + lVar16 * 4) =
                     fVar31 * fVar37 * fVar34 * fVar35 + *(float *)(pFVar28 + lVar16 * 4);
                pFVar28 = (FScriptContainerElement *)
                          ((longlong)&(local_1f0->AllocatorInstance).Data + (longlong)local_210);
                uVar7 = 0;
                if ((longlong)pFVar28 < param_1->ArrayNum) {
                  uVar7 = (uint)((ulonglong)pFVar28 >> 0x3f) ^ 1;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                param_8 = local_218;
                fVar35 = *(float *)((param_1->AllocatorInstance).Data + (longlong)pFVar28 * 4);
                uVar7 = 0;
                if ((int)local_1f0 < local_218->ArrayNum) {
                  uVar7 = local_26c;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                lVar16 = local_1e0;
                fVar31 = *(float *)((param_8->AllocatorInstance).Data + local_1e8 * 4);
                uVar7 = 0;
                if ((int)uVar19 < param_9->ArrayNum) {
                  uVar7 = ~uVar19 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                fVar37 = *(float *)((param_9->AllocatorInstance).Data + lVar16 * 4);
                fVar34 = *pfVar22;
                lVar16 = (this->Size).field0_0x0._s_0.X * local_228 + lVar12;
                uVar7 = 0;
                if (lVar16 < (this->ChannelData).ArrayNum) {
                  uVar7 = (uint)((ulonglong)lVar16 >> 0x3f) ^ 1;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pFVar28 = (this->ChannelData).AllocatorInstance.Data;
                pfVar22 = pfVar22 + -2;
                local_230 = local_230 + 1;
                local_1d8 = local_1d8 + -1;
                *(float *)(pFVar28 + lVar16 * 4) =
                     fVar31 * fVar37 * fVar34 * fVar35 + *(float *)(pFVar28 + lVar16 * 4);
                lVar16 = local_228;
                TVar21 = local_200;
                uVar7 = local_270;
              } while (local_1d8 != 0);
            }
            local_22c = local_22c + 1;
            lVar12 = lVar12 + 1;
            local_258 = (TArray<float,TSizedDefaultAllocator<32>_> *)
                        ((longlong)&(local_258->AllocatorInstance).Data + 1);
            lVar24 = local_238;
          } while (local_22c < iVar26);
        }
        lVar16 = lVar16 + 1;
        local_250 = local_250 + -1;
        local_270 = uVar7 + 1;
        local_228 = lVar16;
        lVar12 = lVar24;
        FVar30 = local_268;
      } while (local_250 != (FScriptContainerElement *)0x0);
    }
  }
  if (((byte)local_298 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (((byte)local_298 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (((byte)local_298 & 4) != 0) {
    FThreadStats::AddMessage(FVar30,CycleScopeEnd);
  }
  return;
}

// Init @ 14dd8ed20

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FImageOverlappedPlane::Init(FImageOverlappedPlane *this,TIntPoint<int> param_1)

{
  (this->Size).field0_0x0._s_0 = (TIntPoint<int>_u_0_s_0)param_1.field0_0x0;
  TArray<float,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            (&this->ChannelData,
             (longlong)param_1.field0_0x0._0_4_ * (longlong)param_1.field0_0x0._4_4_,Default);
  return;
}

// Reset @ 14dd9b700

void __thiscall FImageOverlappedPlane::Reset(FImageOverlappedPlane *this)

{
  long64 *plVar1;
  
  plVar1 = &(this->ChannelData).ArrayMax;
  (this->Size).field0_0x0 = (TIntPoint<int>_u_0)0x0;
  (this->ChannelData).ArrayNum = 0;
  if (*plVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,plVar1);
  }
  return;
}

// ZeroPlane @ 14dda9df0

void __thiscall FImageOverlappedPlane::ZeroPlane(FImageOverlappedPlane *this)

{
  memset((this->ChannelData).AllocatorInstance.Data,0,(this->ChannelData).ArrayNum << 2);
  return;
}

