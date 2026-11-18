// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MovieRenderPipelineCore
// Functions: 4

// AccumulateSinglePlane @ 14dd748e0

void __thiscall
FImageTilePlane::AccumulateSinglePlane
          (FImageTilePlane *this,TArray<float,TSizedDefaultAllocator<64>_> *param_1,int param_2,
          int param_3,float param_4,int param_5,int param_6)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  FScriptContainerElement *pFVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  longlong lVar23;
  int iVar24;
  longlong lVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong local_res8;
  
  if ((param_1->ArrayNum != (longlong)(this->SizeX * this->SizeY)) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InRawData.Num() == SizeX * SizeY",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderTileImage.cpp"
                          ,0x2b,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_2 != this->SizeX) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InRawSizeX == SizeX",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderTileImage.cpp"
                          ,0x2c,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_3 != this->SizeY) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InRawSizeY == SizeY",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderTileImage.cpp"
                          ,0x2d,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_1->ArrayNum != (this->ChannelData).ArrayNum) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("InRawData.Num() == ChannelData.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderTileImage.cpp"
                          ,0x2e,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar2 = this->SizeX;
  uVar3 = this->SizeY;
  local_res8 = (ulonglong)uVar3;
  uVar12 = param_5 + uVar2;
  if (-1 < param_5) {
    uVar12 = uVar2;
  }
  iVar24 = -param_5;
  if (-1 < param_5) {
    iVar24 = 0;
  }
  iVar13 = param_5;
  if (param_5 < 1) {
    iVar13 = 0;
  }
  uVar26 = uVar12 - param_5;
  if (param_5 < 1) {
    uVar26 = uVar12;
  }
  uVar12 = uVar26 & 0x80000003;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
  }
  iVar14 = uVar12 + iVar13;
  if (uVar12 == 0) {
    iVar14 = iVar13;
  }
  uVar7 = uVar26 - uVar12;
  if (uVar12 == 0) {
    uVar7 = uVar26;
  }
  if ((iVar24 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SamplesL >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderTileImage.cpp"
                          ,0x6c,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (((int)uVar7 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SamplesM >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderTileImage.cpp"
                          ,0x6d,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((iVar14 < 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SamplesR >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderTileImage.cpp"
                          ,0x6e,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  uVar12 = uVar7 & 0x80000003;
  if ((int)uVar12 < 0) {
    uVar12 = (uVar12 - 1 | 0xfffffffc) + 1;
  }
  if ((uVar12 != 0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("SamplesM % 4 == 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\MovieScene\\MovieRenderPipeline\\Source\\MovieRenderPipelineCore\\Private\\MovieRenderTileImage.cpp"
                          ,0x6f,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar23 = (longlong)iVar24;
  if (0 < (int)uVar3) {
    lVar18 = (longlong)((int)(uVar7 + ((int)uVar7 >> 0x1f & 3U)) >> 2);
    iVar13 = uVar7 + iVar24;
    lVar22 = (longlong)(int)(uVar7 + iVar14 + iVar24);
    lVar27 = 0;
    do {
      iVar24 = uVar3 - 1;
      if (param_6 < (int)(uVar3 - 1)) {
        iVar24 = param_6;
      }
      lVar19 = 0;
      iVar14 = 0;
      if (0 < iVar24) {
        iVar14 = iVar24;
      }
      lVar21 = (longlong)(iVar14 * param_2);
      uVar26 = 0;
      uVar12 = uVar26;
      if (lVar21 < param_1->ArrayNum) {
        uVar12 = (uint)(iVar14 * param_2 >> 0x1f) >> 0x1f ^ 1;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (param_1->AllocatorInstance).Data;
      uVar12 = uVar26;
      if (lVar27 < (this->ChannelData).ArrayNum) {
        uVar12 = (uint)((ulonglong)lVar27 >> 0x3f) ^ 1;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (this->ChannelData).AllocatorInstance.Data;
      if (3 < lVar23) {
        iVar24 = uVar2 - 1;
        if ((int)(uVar2 - 1) < 0) {
          iVar24 = 0;
        }
        lVar25 = (lVar23 - 4U >> 2) + 1;
        lVar20 = (longlong)iVar24;
        pFVar17 = pFVar5 + lVar27 * 4 + 8;
        lVar19 = lVar25 * 4;
        do {
          *(float *)(pFVar17 + -8) =
               param_4 * *(float *)(pFVar4 + lVar20 * 4 + lVar21 * 4) + *(float *)(pFVar17 + -8);
          *(float *)(pFVar17 + -4) =
               param_4 * *(float *)(pFVar4 + lVar20 * 4 + lVar21 * 4) + *(float *)(pFVar17 + -4);
          *(float *)pFVar17 =
               param_4 * *(float *)(pFVar4 + lVar20 * 4 + lVar21 * 4) + *(float *)pFVar17;
          *(float *)(pFVar17 + 4) =
               param_4 * *(float *)(pFVar4 + lVar20 * 4 + lVar21 * 4) + *(float *)(pFVar17 + 4);
          pFVar17 = pFVar17 + 0x10;
          lVar25 = lVar25 + -1;
        } while (lVar25 != 0);
      }
      if (lVar19 < lVar23) {
        uVar12 = uVar2 - 1;
        if ((int)(uVar2 - 1) < 0) {
          uVar12 = uVar26;
        }
        do {
          *(float *)(pFVar5 + lVar19 * 4 + lVar27 * 4) =
               param_4 * *(float *)(pFVar4 + (longlong)(int)uVar12 * 4 + lVar21 * 4) +
               *(float *)(pFVar5 + lVar19 * 4 + lVar27 * 4);
          lVar19 = lVar19 + 1;
        } while (lVar19 < lVar23);
      }
      pFVar17 = pFVar5 + lVar23 * 4 + lVar27 * 4;
      if (0 < lVar18) {
        lVar19 = ((lVar23 + param_5) * 4 + lVar21 * 4) - (longlong)pFVar17;
        lVar20 = lVar18;
        do {
          pFVar1 = pFVar4 + lVar19 + (longlong)pFVar17;
          fVar8 = *(float *)(pFVar1 + 4);
          fVar9 = *(float *)(pFVar1 + 8);
          fVar10 = *(float *)(pFVar1 + 0xc);
          *(float *)pFVar17 = *(float *)pFVar1 * param_4 + *(float *)pFVar17;
          *(float *)(pFVar17 + 4) = fVar8 * param_4 + *(float *)(pFVar17 + 4);
          *(float *)(pFVar17 + 8) = fVar9 * param_4 + *(float *)(pFVar17 + 8);
          *(float *)(pFVar17 + 0xc) = fVar10 * param_4 + *(float *)(pFVar17 + 0xc);
          pFVar17 = pFVar17 + 0x10;
          lVar20 = lVar20 + -1;
        } while (lVar20 != 0);
      }
      lVar19 = (int)uVar7 + lVar23;
      if (lVar19 < lVar22) {
        iVar24 = iVar13;
        if (3 < lVar22 - lVar19) {
          uVar26 = uVar2 - 1;
          uVar12 = param_5 + 2 + iVar13;
          pFVar17 = pFVar5 + (lVar19 + 2) * 4 + lVar27 * 4;
          lVar20 = (((lVar22 - (int)uVar7) - lVar23) - 4U >> 2) + 1;
          iVar24 = iVar13 + (int)lVar20 * 4;
          lVar19 = lVar19 + lVar20 * 4;
          do {
            uVar15 = uVar26;
            if ((int)(uVar12 - 2) < (int)uVar26) {
              uVar15 = uVar12 - 2;
            }
            uVar16 = uVar2;
            if ((int)(uVar12 - 1) < (int)uVar26) {
              uVar16 = uVar12;
            }
            *(float *)(pFVar17 + -8) =
                 param_4 * *(float *)(pFVar4 + (longlong)(int)uVar15 * 4 + lVar21 * 4) +
                 *(float *)(pFVar17 + -8);
            uVar15 = uVar26;
            if ((int)uVar12 < (int)uVar26) {
              uVar15 = uVar12;
            }
            *(float *)(pFVar17 + -4) =
                 param_4 * *(float *)(pFVar4 + (longlong)(int)uVar16 * 4 + lVar21 * 4 + -4) +
                 *(float *)(pFVar17 + -4);
            uVar16 = uVar26;
            if ((int)(uVar12 + 1) < (int)uVar26) {
              uVar16 = uVar12 + 1;
            }
            uVar12 = uVar12 + 4;
            *(float *)pFVar17 =
                 param_4 * *(float *)(pFVar4 + (longlong)(int)uVar15 * 4 + lVar21 * 4) +
                 *(float *)pFVar17;
            *(float *)(pFVar17 + 4) =
                 param_4 * *(float *)(pFVar4 + (longlong)(int)uVar16 * 4 + lVar21 * 4) +
                 *(float *)(pFVar17 + 4);
            pFVar17 = pFVar17 + 0x10;
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
          if (lVar22 <= lVar19) goto LAB_14dd74e58;
        }
        iVar24 = param_5 + iVar24;
        do {
          iVar14 = uVar2 - 1;
          if (iVar24 < (int)(uVar2 - 1)) {
            iVar14 = iVar24;
          }
          iVar24 = iVar24 + 1;
          *(float *)(pFVar5 + lVar19 * 4 + lVar27 * 4) =
               param_4 * *(float *)(pFVar4 + (longlong)iVar14 * 4 + lVar21 * 4) +
               *(float *)(pFVar5 + lVar19 * 4 + lVar27 * 4);
          lVar19 = lVar19 + 1;
        } while (lVar19 < lVar22);
      }
LAB_14dd74e58:
      lVar27 = lVar27 + (int)uVar2;
      param_6 = param_6 + 1;
      local_res8 = local_res8 - 1;
    } while (local_res8 != 0);
  }
  this->AccumulationWeight = param_4 + this->AccumulationWeight;
  return;
}

// Init @ 14dd8ed50

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall FImageTilePlane::Init(FImageTilePlane *this,int param_1,int param_2)

{
  this->SizeX = param_1;
  this->SizeY = param_2;
  this->AccumulationWeight = 0.0;
  TArray<float,TSizedDefaultAllocator<64>_>::SetNumUninitialized
            (&this->ChannelData,(longlong)(param_1 * param_2),Default);
  return;
}

// Reset @ 14dd9b7b0

void __thiscall FImageTilePlane::Reset(FImageTilePlane *this)

{
  long64 *plVar1;
  
  plVar1 = &(this->ChannelData).ArrayMax;
  this->SizeX = 0;
  this->SizeY = 0;
  this->AccumulationWeight = 0.0;
  (this->ChannelData).ArrayNum = 0;
  if (*plVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
              (4,4,0,(ForAnyElementType *)this,0,plVar1);
  }
  return;
}

// ZeroPlane @ 14dda9e10

void __thiscall FImageTilePlane::ZeroPlane(FImageTilePlane *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  
  iVar3 = this->SizeY * this->SizeX;
  this->AccumulationWeight = 0.0;
  iVar6 = 0;
  if (0 < iVar3) {
    lVar5 = 0;
    do {
      uVar4 = 0;
      if ((longlong)iVar6 < (this->ChannelData).ArrayNum) {
        uVar4 = (uint)(iVar6 >> 0x1f) >> 0x1f ^ 1;
      }
      if ((uVar4 == 0) &&
         (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar2)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar6 = iVar6 + 1;
      *(undefined4 *)((this->ChannelData).AllocatorInstance.Data + lVar5 * 4) = 0;
      lVar5 = lVar5 + 1;
    } while (lVar5 < iVar3);
  }
  return;
}

