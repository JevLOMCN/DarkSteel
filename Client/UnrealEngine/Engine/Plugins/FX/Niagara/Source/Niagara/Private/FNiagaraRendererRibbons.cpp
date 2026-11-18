// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 46

// AppendToIndexBufferCPU<unsigned_short> @ 1493188c0

ushort * __cdecl
FNiagaraRendererRibbons::AppendToIndexBufferCPU<unsigned_short>
          (ushort *param_1,FNiagaraIndexGenerationInput *param_2,
          FNiagaraRibbonShapeGeometryData *param_3,TArrayView<unsigned_int,int> *param_4,
          bool param_5)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ForElementType<unsigned_int> FVar5;
  code *pcVar6;
  byte bVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  int iVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar19;
  int iVar20;
  ushort uVar21;
  ushort uVar22;
  ForElementType<unsigned_int> *pFVar23;
  uint local_54;
  ushort uVar10;
  
  uVar1 = param_4->ArrayNum;
  if (uVar1 == 0) {
    return param_1;
  }
  uVar2 = (param_3->SliceTriangleToVertexIds).ArrayNum;
  uVar18 = 0;
  iVar14 = 1;
  if (param_5) {
    iVar14 = -1;
    uVar18 = uVar1 - 1;
    uVar1 = 0xffffffff;
  }
  uVar15 = 2;
  if (2 < (int)uVar2 / 2) {
    uVar15 = (int)uVar2 / 2;
  }
  if ((int)uVar15 < (int)uVar2) {
    uVar2 = uVar15;
  }
  do {
    if (uVar18 == uVar1) {
      return param_1;
    }
    uVar15 = 0;
    if ((int)uVar18 < param_4->ArrayNum) {
      uVar15 = ~uVar18 >> 0x1f;
    }
    if ((uVar15 == 0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar6 = (code *)swi(3);
      puVar13 = (ushort *)(*pcVar6)();
      return puVar13;
    }
    local_54 = 0;
    uVar15 = param_4->DataPtr[(int)uVar18];
    uVar17 = param_2->SubSegmentCount;
    if (uVar17 != 0) {
      do {
        pFVar23 = &(param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
        uVar21 = (ushort)(local_54 << ((byte)param_2->SubSegmentBitShift & 0x1f)) |
                 (ushort)(uVar15 << ((byte)param_2->SegmentBitShift & 0x1f));
        iVar20 = 0;
        if (local_54 != uVar17 - 1) {
          iVar20 = local_54 + 1;
        }
        bVar7 = (byte)param_2->SegmentBitShift & 0x1f;
        uVar19 = (ushort)(iVar20 << ((byte)param_2->SubSegmentBitShift & 0x1f)) |
                 (ushort)((local_54 == uVar17 - 1) + uVar15 << bVar7);
        uVar11 = 0 << bVar7;
        uVar17 = uVar11;
        if (uVar2 != 0) {
          do {
            if ((int)uVar17 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
              uVar11 = ~uVar17 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              puVar13 = (ushort *)(*pcVar6)();
              return puVar13;
            }
            FVar5 = *pFVar23;
            uVar11 = uVar17 + 1;
            FVar16 = (ForElementType<unsigned_int>)param_3;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar5;
            }
            uVar3 = *(undefined4 *)((longlong)FVar16 + (longlong)(int)uVar17 * 4);
            uVar12 = 0;
            if ((int)uVar11 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
              uVar12 = ~uVar11 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              puVar13 = (ushort *)(*pcVar6)();
              return puVar13;
            }
            FVar5 = *pFVar23;
            FVar16 = (ForElementType<unsigned_int>)param_3;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar5;
            }
            uVar17 = uVar17 + 2;
            uVar4 = *(undefined4 *)((longlong)FVar16 + (longlong)(int)uVar11 * 4);
            uVar9 = (ushort)uVar3;
            uVar22 = uVar9 | uVar19;
            *param_1 = uVar9 | uVar21;
            uVar10 = (ushort)uVar4;
            uVar9 = uVar10 | uVar21;
            param_1[2] = uVar22;
            param_1[1] = uVar9;
            param_1[3] = uVar9;
            uVar11 = 0;
            param_1[4] = uVar10 | uVar19;
            param_1[5] = uVar22;
            param_1 = param_1 + 6;
          } while (uVar17 < uVar2);
        }
        pFVar23 = &(param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
        uVar12 = (param_3->SliceTriangleToVertexIds).ArrayNum;
        if (uVar17 < uVar12) {
          while( true ) {
            if ((int)uVar17 < (int)uVar12) {
              uVar11 = ~uVar17 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              puVar13 = (ushort *)(*pcVar6)();
              return puVar13;
            }
            FVar5 = *pFVar23;
            uVar11 = uVar17 + 1;
            FVar16 = (ForElementType<unsigned_int>)param_3;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar5;
            }
            uVar3 = *(undefined4 *)((longlong)FVar16 + (longlong)(int)uVar17 * 4);
            uVar12 = 0;
            if ((int)uVar11 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
              uVar12 = ~uVar11 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              puVar13 = (ushort *)(*pcVar6)();
              return puVar13;
            }
            FVar5 = *pFVar23;
            FVar16 = (ForElementType<unsigned_int>)param_3;
            if (FVar5 != (ForElementType<unsigned_int>)0x0) {
              FVar16 = FVar5;
            }
            uVar17 = uVar17 + 2;
            uVar4 = *(undefined4 *)((longlong)FVar16 + (longlong)(int)uVar11 * 4);
            uVar10 = (ushort)uVar3;
            uVar9 = uVar10 | uVar21;
            *param_1 = uVar9;
            uVar22 = (ushort)uVar4;
            param_1[3] = uVar9;
            uVar9 = uVar22 | uVar19;
            param_1[1] = uVar21 | uVar22;
            param_1[2] = uVar9;
            param_1[4] = uVar9;
            param_1[5] = uVar10 | uVar19;
            param_1 = param_1 + 6;
            uVar12 = (param_3->SliceTriangleToVertexIds).ArrayNum;
            if (uVar12 <= uVar17) break;
            uVar11 = 0;
          }
        }
        uVar17 = param_2->SubSegmentCount;
        local_54 = local_54 + 1;
      } while (local_54 < uVar17);
    }
    uVar18 = uVar18 + iVar14;
  } while( true );
}

// AppendToIndexBufferCPU<unsigned_int> @ 149318d00

uint * __cdecl
FNiagaraRendererRibbons::AppendToIndexBufferCPU<unsigned_int>
          (uint *param_1,FNiagaraIndexGenerationInput *param_2,
          FNiagaraRibbonShapeGeometryData *param_3,TArrayView<unsigned_int,int> *param_4,
          bool param_5)

{
  uint uVar1;
  uint uVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ForElementType<unsigned_int> FVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  ForElementType<unsigned_int> *pFVar20;
  uint local_54;
  
  uVar1 = param_4->ArrayNum;
  if (uVar1 == 0) {
    return param_1;
  }
  uVar2 = (param_3->SliceTriangleToVertexIds).ArrayNum;
  uVar15 = 0;
  iVar9 = 1;
  if (param_5) {
    iVar9 = -1;
    uVar15 = uVar1 - 1;
    uVar1 = 0xffffffff;
  }
  uVar10 = 2;
  if (2 < (int)uVar2 / 2) {
    uVar10 = (int)uVar2 / 2;
  }
  if ((int)uVar10 < (int)uVar2) {
    uVar2 = uVar10;
  }
  do {
    if (uVar15 == uVar1) {
      return param_1;
    }
    uVar10 = 0;
    if ((int)uVar15 < param_4->ArrayNum) {
      uVar10 = ~uVar15 >> 0x1f;
    }
    if ((uVar10 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      puVar8 = (uint *)(*pcVar4)();
      return puVar8;
    }
    local_54 = 0;
    uVar10 = param_4->DataPtr[(int)uVar15];
    uVar14 = param_2->SubSegmentCount;
    if (uVar14 != 0) {
      do {
        pFVar20 = &(param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
        uVar19 = local_54 << ((byte)param_2->SubSegmentBitShift & 0x1f) |
                 uVar10 << ((byte)param_2->SegmentBitShift & 0x1f);
        iVar17 = 0;
        if (local_54 != uVar14 - 1) {
          iVar17 = local_54 + 1;
        }
        bVar5 = (byte)param_2->SegmentBitShift & 0x1f;
        uVar18 = iVar17 << ((byte)param_2->SubSegmentBitShift & 0x1f) |
                 (local_54 == uVar14 - 1) + uVar10 << bVar5;
        uVar7 = 0 << bVar5;
        uVar14 = uVar7;
        if (uVar2 != 0) {
          do {
            if ((int)uVar14 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
              uVar7 = ~uVar14 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              puVar8 = (uint *)(*pcVar4)();
              return puVar8;
            }
            FVar3 = *pFVar20;
            uVar7 = uVar14 + 1;
            FVar12 = (ForElementType<unsigned_int>)param_3;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar12 = FVar3;
            }
            uVar13 = *(uint *)((longlong)FVar12 + (longlong)(int)uVar14 * 4);
            uVar11 = 0;
            if ((int)uVar7 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
              uVar11 = ~uVar7 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              puVar8 = (uint *)(*pcVar4)();
              return puVar8;
            }
            FVar3 = *pFVar20;
            FVar12 = (ForElementType<unsigned_int>)param_3;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar12 = FVar3;
            }
            uVar14 = uVar14 + 2;
            uVar11 = *(uint *)((longlong)FVar12 + (longlong)(int)uVar7 * 4);
            uVar16 = uVar13 | uVar18;
            *param_1 = uVar13 | uVar19;
            uVar7 = uVar11 | uVar19;
            param_1[2] = uVar16;
            param_1[1] = uVar7;
            param_1[3] = uVar7;
            uVar7 = 0;
            param_1[4] = uVar11 | uVar18;
            param_1[5] = uVar16;
            param_1 = param_1 + 6;
          } while (uVar14 < uVar2);
        }
        pFVar20 = &(param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
        uVar13 = (param_3->SliceTriangleToVertexIds).ArrayNum;
        if (uVar14 < uVar13) {
          while( true ) {
            if ((int)uVar14 < (int)uVar13) {
              uVar7 = ~uVar14 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              puVar8 = (uint *)(*pcVar4)();
              return puVar8;
            }
            FVar3 = *pFVar20;
            uVar7 = uVar14 + 1;
            FVar12 = (ForElementType<unsigned_int>)param_3;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar12 = FVar3;
            }
            uVar13 = *(uint *)((longlong)FVar12 + (longlong)(int)uVar14 * 4);
            uVar11 = 0;
            if ((int)uVar7 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
              uVar11 = ~uVar7 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar4 = (code *)swi(3);
              puVar8 = (uint *)(*pcVar4)();
              return puVar8;
            }
            FVar3 = *pFVar20;
            FVar12 = (ForElementType<unsigned_int>)param_3;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar12 = FVar3;
            }
            uVar14 = uVar14 + 2;
            uVar7 = *(uint *)((longlong)FVar12 + (longlong)(int)uVar7 * 4);
            uVar16 = uVar7 | uVar18;
            uVar11 = uVar13 | uVar19;
            param_1[2] = uVar16;
            *param_1 = uVar11;
            param_1[1] = uVar7 | uVar19;
            param_1[3] = uVar11;
            param_1[4] = uVar16;
            param_1[5] = uVar13 | uVar18;
            param_1 = param_1 + 6;
            uVar13 = (param_3->SliceTriangleToVertexIds).ArrayNum;
            if (uVar13 <= uVar14) break;
            uVar7 = 0;
          }
        }
        uVar14 = param_2->SubSegmentCount;
        local_54 = local_54 + 1;
      } while (local_54 < uVar14);
    }
    uVar15 = uVar15 + iVar9;
  } while( true );
}

// CalculateUVScaleAndOffsets<unsigned_int> @ 14931b040

void __cdecl
FNiagaraRendererRibbons::CalculateUVScaleAndOffsets<unsigned_int>
          (FNiagaraRibbonUVSettings *param_1,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *param_3,
          FNiagaraDataSetReaderFloat<float> *param_4,int param_5,int param_6,int param_7,
          float param_8,float *param_9,float *param_10,float *param_11)

{
  ENiagaraRibbonUVDistributionMode EVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (param_1->LeadingEdgeMode == SmoothTransition) {
    uVar5 = 0;
    if (param_5 < param_2->ArrayNum) {
      uVar5 = (uint)~param_5 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((param_4->bIsValid == false) ||
       (iVar2 = *(int *)((param_2->AllocatorInstance).Data + (longlong)param_5 * 4),
       param_4->NumInstances <= iVar2)) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = FNiagaraDataSetReaderFloat<float>::Get(param_4,iVar2);
    }
    uVar7 = param_5 + 1;
    uVar5 = 0;
    if ((int)uVar7 < param_2->ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((param_4->bIsValid == false) ||
       (iVar2 = *(int *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 4),
       param_4->NumInstances <= iVar2)) {
      fVar9 = 0.0;
    }
    else {
      fVar9 = FNiagaraDataSetReaderFloat<float>::Get(param_4,iVar2);
    }
    fVar9 = fVar9 - fVar8;
    if (fVar9 <= fVar8) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = fVar9 - fVar8;
    }
    if (fVar9 <= 0.0) {
      fVar8 = 0.0;
    }
    else {
      fVar8 = fVar8 / fVar9;
    }
  }
  else {
    fVar8 = 0.0;
    if (param_1->LeadingEdgeMode != Locked) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                         ,0x5c0,L"Unsupported ribbon uv edge mode");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  fVar9 = __real_3f800000;
  fVar12 = 0.0;
  if (param_1->TrailingEdgeMode == SmoothTransition) {
    uVar7 = param_6 - 1;
    uVar5 = 0;
    if ((int)uVar7 < param_2->ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((param_4->bIsValid == false) ||
       (iVar2 = *(int *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar7 * 4),
       param_4->NumInstances <= iVar2)) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = FNiagaraDataSetReaderFloat<float>::Get(param_4,iVar2);
    }
    uVar5 = 0;
    if (param_6 < param_2->ArrayNum) {
      uVar5 = (uint)~param_6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((param_4->bIsValid == false) ||
       (iVar2 = *(int *)((param_2->AllocatorInstance).Data + (longlong)param_6 * 4),
       param_4->NumInstances <= iVar2)) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = FNiagaraDataSetReaderFloat<float>::Get(param_4,iVar2);
    }
    fVar10 = fVar11 - fVar10;
    if (fVar10 <= fVar9 - fVar11) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = fVar10 - (fVar9 - fVar11);
    }
    if (fVar10 <= 0.0) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = fVar11 / fVar10;
    }
  }
  else {
    fVar11 = 0.0;
    if (param_1->TrailingEdgeMode != Locked) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("false",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                         ,0x5d5,L"Unsupported ribbon uv edge mode");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
  }
  EVar1 = param_1->DistributionMode;
  if (EVar1 == ScaledUniformly) {
    fVar12 = (float)param_7;
    *param_11 = fVar9 / fVar12;
    fVar11 = fVar12 / (fVar12 - (fVar11 + fVar8));
    fVar12 = (float)((uint)((fVar9 / fVar12) * fVar8 * fVar11) ^
                    __xmm_80000000800000008000000080000000);
    fVar9 = fVar11;
  }
  else if (EVar1 == ScaledUsingRibbonSegmentLength) {
    uVar7 = param_5 + 1;
    uVar5 = 0;
    if ((int)uVar7 < param_3->ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar6 = param_6 - 1;
    fVar8 = fVar8 * *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x10 + 0xc
                              );
    uVar5 = 0;
    if ((int)uVar6 < param_3->ArrayNum) {
      uVar5 = ~uVar6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    fVar12 = *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar6 * 0x10 + 0xc);
    uVar5 = 0;
    if (param_6 < param_3->ArrayNum) {
      uVar5 = (uint)~param_6 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    fVar10 = *(float *)((param_3->AllocatorInstance).Data + (longlong)param_6 * 0x10 + 0xc);
    *param_11 = fVar9 / param_8;
    fVar11 = param_8 / (param_8 - ((fVar10 - fVar12) * fVar11 + fVar8));
    fVar12 = (float)((uint)(fVar8 * (fVar9 / param_8) * fVar11) ^
                    __xmm_80000000800000008000000080000000);
    fVar9 = fVar11;
  }
  else if (EVar1 == TiledOverRibbonLength) {
    uVar7 = param_5 + 1;
    uVar5 = 0;
    if ((int)uVar7 < param_3->ArrayNum) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    fVar11 = fVar9 / param_1->TilingLength;
    fVar12 = *(float *)((param_3->AllocatorInstance).Data + (longlong)(int)uVar7 * 0x10 + 0xc);
    *param_11 = fVar9 / param_8;
    fVar12 = (float)((uint)(fVar8 * fVar12 * fVar11) ^ __xmm_80000000800000008000000080000000);
    fVar9 = fVar11 * param_8;
  }
  else if (EVar1 == TiledFromStartOverRibbonLength) {
    fVar8 = param_1->TilingLength;
    *param_11 = fVar9 / param_8;
    fVar9 = param_8 / fVar8;
  }
  else {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("false",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                       ,0x603,L"Unsupported ribbon distribution mode");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  *param_9 = (float)((double)fVar9 * (param_1->Scale).field0_0x0._s_0.X);
  *param_10 = (float)((double)fVar12 * (param_1->Scale).field0_0x0._s_0.X +
                     (param_1->Offset).field0_0x0._s_0.X);
  return;
}

// GenerateIndexBufferCPU<unsigned_short> @ 14931f0c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FNiagaraRendererRibbons::GenerateIndexBufferCPU<unsigned_short>
          (FNiagaraIndexGenerationInput *param_1,FNiagaraDynamicDataRibbon *param_2,
          FNiagaraRibbonShapeGeometryData *param_3,ushort *param_4,FSceneView *param_5,
          TVector<double> *param_6,Type param_7,ENiagaraRibbonDrawDirection param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FMaterialRenderProxy *this;
  FNiagaraRibbonCPUGeneratedVertexData *pFVar6;
  ForElementType<unsigned_int> FVar7;
  code *pcVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  ForElementType<FRibbonMultiRibbonInfo> FVar12;
  bool bVar13;
  bool bVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  FName *pFVar18;
  FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenIndiciesCPU> FVar19;
  FMaterial *pFVar20;
  byte bVar21;
  byte bVar22;
  ushort uVar23;
  ForElementType<unsigned_int> FVar24;
  ushort uVar25;
  ushort uVar26;
  ForElementType<FRibbonMultiRibbonInfo> FVar27;
  FName FVar28;
  ushort *puVar29;
  uint uVar30;
  ulonglong uVar31;
  uint uVar32;
  int iVar33;
  ForElementType<unsigned_int> *pFVar34;
  FScriptContainerElement *pFVar35;
  ushort uVar36;
  int iVar37;
  uint uVar38;
  ushort uVar39;
  undefined1 local_f7 [3];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  FName local_d8;
  int local_d0;
  FColor_u_0 local_cc;
  int local_c8;
  uint local_c4;
  ForElementType<FRibbonMultiRibbonInfo> local_c0;
  FName local_b8;
  ForElementType<FRibbonMultiRibbonInfo> local_b0;
  FName local_a8;
  FScriptContainerElement *local_98;
  TArray<FRibbonMultiRibbonInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *local_90;
  FName local_88 [10];
  
  FVar19 = StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesCPU;
  if (StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesCPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenIndiciesCPU>)0x0) {
    pFVar18 = ::FName::FName(local_88,"STAT_NiagaraRenderRibbonsGenIndiciesCPU");
    FVar19 = (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenIndiciesCPU>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesCPU,*pFVar18,
                        L"Generate Indices CPU [GT]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar28 = *(FName *)FVar19;
  bVar10 = false;
  bVar11 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  bVar13 = false;
  bVar14 = false;
  if ((FVar28.ComparisonIndex.Value.Value == 0) && (FVar28.Number == 0)) {
LAB_14931f259:
    bVar11 = bVar14;
    bVar10 = bVar13;
    bVar13 = false;
    local_d8 = local_a8;
    FVar28 = local_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_cc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_cc._s_0,(char *)*(FName *)((longlong)FVar19 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar28.ComparisonIndex.Value.Value;
        local_b8.Number = FVar28.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar19 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                   ,0x805);
        bVar10 = true;
        bVar11 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14931f259;
    local_d8 = FVar28;
    FThreadStats::AddMessage(FVar28,CycleScopeStart);
    bVar13 = true;
  }
  this = param_2->Material;
  if ((this == (FMaterialRenderProxy *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaterialRenderProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                          ,0x808,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar20 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback(this,param_7);
  bVar14 = IsTranslucentBlendMode(pFVar20);
  puVar29 = param_4;
  if (bVar14) {
    if (((param_2->GenerationOutput).Object == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    pFVar6 = (param_2->GenerationOutput).Object;
    if ((pFVar6->RibbonInfoLookup).ArrayNum != 0) {
      if ((pFVar6 == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pFVar6 = (param_2->GenerationOutput).Object;
      local_90 = &pFVar6->RibbonInfoLookup;
      FVar27 = (pFVar6->RibbonInfoLookup).AllocatorInstance.SecondaryData;
      local_e0 = (pFVar6->RibbonInfoLookup).ArrayNum;
      uVar31 = (ulonglong)(int)local_e0;
      if (FVar27 == (ForElementType<FRibbonMultiRibbonInfo>)0x0) {
        FVar27 = (ForElementType<FRibbonMultiRibbonInfo>)local_90;
      }
      local_c0 = (ForElementType<FRibbonMultiRibbonInfo>)((longlong)FVar27 + uVar31 * 0x58);
      while( true ) {
        FVar12 = local_c0;
        local_b0 = FVar27;
        if (local_90->ArrayNum != (int)uVar31) {
          local_f7[0] = 0;
          `TCheckedPointerIterator<FRibbonMultiRibbonInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_f7);
        }
        if (FVar27 == FVar12) break;
        uVar38 = *(uint *)((longlong)FVar27 + 0x34);
        local_c4 = uVar38;
        if (((param_2->GenerationOutput).Object == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar35 = (((param_2->GenerationOutput).Object)->SegmentData).AllocatorInstance.Data +
                  (longlong)*(int *)((longlong)FVar27 + 0x30) * 4;
        local_98 = pFVar35;
        if (((int)uVar38 < 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar14)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        dVar1 = (param_5->ViewMatrices).ViewMatrix.M[0][2];
        dVar2 = (param_5->ViewMatrices).ViewMatrix.M[1][2];
        dVar3 = (param_5->ViewMatrices).ViewMatrix.M[2][2];
        dVar9 = (*(double *)((longlong)FVar27 + 8) - (param_6->field0_0x0)._s_0.Y) * dVar2 +
                (*(double *)FVar27 - (param_6->field0_0x0)._s_0.X) * dVar1 +
                (*(double *)((longlong)FVar27 + 0x10) - (param_6->field0_0x0)._s_0.Z) * dVar3;
        dVar1 = (*(double *)((longlong)FVar27 + 0x20) - (param_6->field0_0x0)._s_0.Y) * dVar2 +
                (*(double *)((longlong)FVar27 + 0x18) - (param_6->field0_0x0)._s_0.X) * dVar1 +
                (*(double *)((longlong)FVar27 + 0x28) - (param_6->field0_0x0)._s_0.Z) * dVar3;
        if (dVar9 < dVar1) {
LAB_14931f4d2:
          if (param_8 == FrontToBack) goto LAB_14931f4d7;
LAB_14931f4db:
          bVar14 = false;
        }
        else {
          if (param_8 != BackToFront) {
            if (dVar9 < dVar1) goto LAB_14931f4d2;
            goto LAB_14931f4db;
          }
LAB_14931f4d7:
          bVar14 = true;
        }
        if (uVar38 != 0) {
          local_e8 = (param_3->SliceTriangleToVertexIds).ArrayNum;
          if (bVar14) {
            local_f4 = uVar38 - 1;
            local_d0 = -1;
            uVar32 = 2;
            if (2 < (int)local_e8 / 2) {
              uVar32 = (int)local_e8 / 2;
            }
            local_ec = 0xffffffff;
            if ((int)uVar32 < (int)local_e8) {
              local_e8 = uVar32;
            }
            if (local_f4 == 0xffffffff) goto LAB_14931f907;
          }
          else {
            local_d0 = 1;
            uVar32 = 2;
            if (2 < (int)local_e8 / 2) {
              uVar32 = (int)local_e8 / 2;
            }
            if ((int)uVar32 < (int)local_e8) {
              local_e8 = uVar32;
            }
            local_f4 = 0;
            local_ec = uVar38;
          }
          do {
            uVar32 = local_f4;
            uVar16 = 0;
            if ((int)local_f4 < (int)uVar38) {
              uVar16 = ~local_f4 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            local_e4 = 0;
            local_c8 = *(int *)(pFVar35 + (longlong)(int)uVar32 * 4);
            uVar38 = param_1->SubSegmentCount;
            uVar16 = local_e8;
            if (uVar38 != 0) {
              do {
                pFVar34 = &(param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
                bVar21 = (byte)param_1->SubSegmentBitShift;
                bVar22 = (byte)param_1->SegmentBitShift;
                uVar32 = local_e4 << (bVar21 & 0x1f) | local_c8 << (bVar22 & 0x1f);
                iVar37 = 0;
                if (local_e4 != uVar38 - 1) {
                  iVar37 = local_e4 + 1;
                }
                uVar30 = 0;
                uVar36 = (ushort)(iVar37 << (bVar21 & 0x1f)) |
                         (ushort)((uint)(local_e4 == uVar38 - 1) + local_c8 << (bVar22 & 0x1f));
                local_f0 = uVar32;
                if (uVar16 != 0) {
                  do {
                    uVar38 = 0;
                    if ((int)uVar30 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
                      uVar38 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar38 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), uVar32 = local_f0, bVar14)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    FVar7 = *pFVar34;
                    uVar38 = uVar30 + 1;
                    FVar24 = (ForElementType<unsigned_int>)param_3;
                    if (FVar7 != (ForElementType<unsigned_int>)0x0) {
                      FVar24 = FVar7;
                    }
                    uVar4 = *(undefined4 *)((longlong)FVar24 + (longlong)(int)uVar30 * 4);
                    uVar17 = 0;
                    if ((int)uVar38 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
                      uVar17 = ~uVar38 >> 0x1f;
                    }
                    if ((uVar17 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), uVar32 = local_f0, bVar14)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    FVar7 = *pFVar34;
                    FVar24 = (ForElementType<unsigned_int>)param_3;
                    if (FVar7 != (ForElementType<unsigned_int>)0x0) {
                      FVar24 = FVar7;
                    }
                    uVar30 = uVar30 + 2;
                    uVar5 = *(undefined4 *)((longlong)FVar24 + (longlong)(int)uVar38 * 4);
                    uVar23 = (ushort)uVar4;
                    *puVar29 = (ushort)uVar32 | uVar23;
                    uVar23 = uVar36 | uVar23;
                    puVar29[2] = uVar23;
                    uVar25 = (ushort)uVar5;
                    uVar15 = (ushort)uVar32 | uVar25;
                    puVar29[5] = uVar23;
                    puVar29[1] = uVar15;
                    puVar29[3] = uVar15;
                    puVar29[4] = uVar36 | uVar25;
                    puVar29 = puVar29 + 6;
                  } while (uVar30 < uVar16);
                }
                uVar32 = local_f0;
                pFVar34 = &(param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
                uVar38 = (param_3->SliceTriangleToVertexIds).ArrayNum;
                if (uVar30 < uVar38) {
                  do {
                    uVar16 = 0;
                    if ((int)uVar30 < (int)uVar38) {
                      uVar16 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar16 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    FVar7 = *pFVar34;
                    uVar38 = uVar30 + 1;
                    FVar24 = (ForElementType<unsigned_int>)param_3;
                    if (FVar7 != (ForElementType<unsigned_int>)0x0) {
                      FVar24 = FVar7;
                    }
                    uVar4 = *(undefined4 *)((longlong)FVar24 + (longlong)(int)uVar30 * 4);
                    uVar16 = 0;
                    if ((int)uVar38 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
                      uVar16 = ~uVar38 >> 0x1f;
                    }
                    if ((uVar16 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar8 = (code *)swi(3);
                      (*pcVar8)();
                      return;
                    }
                    FVar7 = *pFVar34;
                    FVar24 = (ForElementType<unsigned_int>)param_3;
                    if (FVar7 != (ForElementType<unsigned_int>)0x0) {
                      FVar24 = FVar7;
                    }
                    uVar30 = uVar30 + 2;
                    uVar26 = (ushort)uVar4;
                    uVar15 = (ushort)uVar32 | uVar26;
                    uVar23 = (ushort)*(undefined4 *)((longlong)FVar24 + (longlong)(int)uVar38 * 4);
                    *puVar29 = uVar15;
                    uVar25 = uVar23 | uVar36;
                    puVar29[1] = (ushort)uVar32 | uVar23;
                    puVar29[2] = uVar25;
                    puVar29[4] = uVar25;
                    puVar29[5] = uVar26 | uVar36;
                    puVar29[3] = uVar15;
                    puVar29 = puVar29 + 6;
                    uVar38 = (param_3->SliceTriangleToVertexIds).ArrayNum;
                    uVar16 = local_e8;
                  } while (uVar30 < uVar38);
                }
                local_e4 = local_e4 + 1;
                uVar38 = param_1->SubSegmentCount;
                pFVar35 = local_98;
                uVar32 = local_f4;
              } while (local_e4 < uVar38);
            }
            local_f4 = uVar32 + local_d0;
            FVar28 = local_d8;
            FVar27 = local_b0;
            uVar38 = local_c4;
          } while (local_f4 != local_ec);
        }
LAB_14931f907:
        FVar27 = (ForElementType<FRibbonMultiRibbonInfo>)((longlong)FVar27 + 0x58);
        uVar31 = (ulonglong)local_e0;
      }
      goto LAB_14931fd6d;
    }
  }
  if (((param_2->GenerationOutput).Object == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar6 = (param_2->GenerationOutput).Object;
  uVar38 = (pFVar6->SegmentData).ArrayNum;
  local_e0 = uVar38;
  if ((pFVar6 == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  FVar27 = (ForElementType<FRibbonMultiRibbonInfo>)
           (((param_2->GenerationOutput).Object)->SegmentData).AllocatorInstance.Data;
  local_c0 = FVar27;
  if (((int)uVar38 < 0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (uVar38 != 0) {
    uVar32 = (param_3->SliceTriangleToVertexIds).ArrayNum;
    uVar16 = 2;
    if (2 < (int)uVar32 / 2) {
      uVar16 = (int)uVar32 / 2;
    }
    if ((int)uVar16 < (int)uVar32) {
      uVar32 = uVar16;
    }
    local_ec = 0;
    do {
      uVar16 = local_ec;
      uVar30 = 0;
      if ((int)local_ec < (int)uVar38) {
        uVar30 = ~local_ec >> 0x1f;
      }
      if ((uVar30 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      local_f4 = 0;
      iVar37 = *(int *)((longlong)FVar27 + (longlong)(int)uVar16 * 4);
      uVar30 = param_1->SubSegmentCount;
      if (uVar30 != 0) {
        do {
          bVar21 = (byte)param_1->SubSegmentBitShift;
          bVar22 = (byte)param_1->SegmentBitShift;
          uVar36 = (ushort)(local_f4 << (bVar21 & 0x1f)) | (ushort)(iVar37 << (bVar22 & 0x1f));
          iVar33 = 0;
          if (local_f4 != uVar30 - 1) {
            iVar33 = local_f4 + 1;
          }
          uVar38 = 0;
          uVar15 = (ushort)(iVar33 << (bVar21 & 0x1f)) |
                   (ushort)((uint)(local_f4 == uVar30 - 1) + iVar37 << (bVar22 & 0x1f));
          if (uVar32 != 0) {
            do {
              uVar16 = 0;
              if ((int)uVar38 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
                uVar16 = ~uVar38 >> 0x1f;
              }
              if ((uVar16 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar7 = (param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
              uVar16 = uVar38 + 1;
              FVar24 = (ForElementType<unsigned_int>)param_3;
              if (FVar7 != (ForElementType<unsigned_int>)0x0) {
                FVar24 = FVar7;
              }
              uVar4 = *(undefined4 *)((longlong)FVar24 + (longlong)(int)uVar38 * 4);
              uVar30 = 0;
              if ((int)uVar16 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
                uVar30 = ~uVar16 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar7 = (param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
              FVar24 = (ForElementType<unsigned_int>)param_3;
              if (FVar7 != (ForElementType<unsigned_int>)0x0) {
                FVar24 = FVar7;
              }
              uVar38 = uVar38 + 2;
              uVar5 = *(undefined4 *)((longlong)FVar24 + (longlong)(int)uVar16 * 4);
              uVar25 = (ushort)uVar4;
              *puVar29 = uVar36 | uVar25;
              uVar25 = uVar15 | uVar25;
              puVar29[2] = uVar25;
              uVar26 = (ushort)uVar5;
              uVar23 = uVar36 | uVar26;
              puVar29[5] = uVar25;
              puVar29[1] = uVar23;
              puVar29[3] = uVar23;
              puVar29[4] = uVar15 | uVar26;
              puVar29 = puVar29 + 6;
            } while (uVar38 < uVar32);
          }
          uVar16 = (param_3->SliceTriangleToVertexIds).ArrayNum;
          if (uVar38 < uVar16) {
            do {
              uVar30 = 0;
              if ((int)uVar38 < (int)uVar16) {
                uVar30 = ~uVar38 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar7 = (param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
              uVar16 = uVar38 + 1;
              FVar24 = (ForElementType<unsigned_int>)param_3;
              if (FVar7 != (ForElementType<unsigned_int>)0x0) {
                FVar24 = FVar7;
              }
              uVar4 = *(undefined4 *)((longlong)FVar24 + (longlong)(int)uVar38 * 4);
              uVar30 = 0;
              if ((int)uVar16 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
                uVar30 = ~uVar16 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                (*pcVar8)();
                return;
              }
              FVar7 = (param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
              FVar24 = (ForElementType<unsigned_int>)param_3;
              if (FVar7 != (ForElementType<unsigned_int>)0x0) {
                FVar24 = FVar7;
              }
              uVar38 = uVar38 + 2;
              uVar39 = (ushort)uVar4;
              uVar23 = uVar36 | uVar39;
              uVar25 = (ushort)*(undefined4 *)((longlong)FVar24 + (longlong)(int)uVar16 * 4);
              *puVar29 = uVar23;
              uVar26 = uVar25 | uVar15;
              puVar29[1] = uVar36 | uVar25;
              puVar29[2] = uVar26;
              puVar29[4] = uVar26;
              puVar29[5] = uVar39 | uVar15;
              puVar29[3] = uVar23;
              puVar29 = puVar29 + 6;
              uVar16 = (param_3->SliceTriangleToVertexIds).ArrayNum;
            } while (uVar38 < uVar16);
          }
          local_f4 = local_f4 + 1;
          uVar30 = param_1->SubSegmentCount;
          FVar27 = local_c0;
          uVar38 = local_e0;
          uVar16 = local_ec;
        } while (local_f4 < uVar30);
      }
      local_ec = uVar16 + 1;
      FVar28 = local_d8;
    } while (local_ec != uVar38);
  }
LAB_14931fd6d:
  param_1->CPUTriangleCount = (uint)(((longlong)puVar29 - (longlong)param_4 >> 1 & 0xffffffffU) / 3)
  ;
  if ((param_4 + param_1->TotalNumIndices < puVar29) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentIndexBuffer <= StartIndexBuffer + GeneratedData.TotalNumIndices",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                          ,0x81c,L""), bVar14)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(FVar28,CycleScopeEnd);
  }
  return;
}

// GenerateIndexBufferCPU<unsigned_int> @ 14931fe60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
FNiagaraRendererRibbons::GenerateIndexBufferCPU<unsigned_int>
          (FNiagaraIndexGenerationInput *param_1,FNiagaraDynamicDataRibbon *param_2,
          FNiagaraRibbonShapeGeometryData *param_3,uint *param_4,FSceneView *param_5,
          TVector<double> *param_6,Type param_7,ENiagaraRibbonDrawDirection param_8)

{
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FMaterialRenderProxy *this;
  FNiagaraRibbonCPUGeneratedVertexData *pFVar5;
  ForElementType<unsigned_int> FVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  FName *pFVar14;
  FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenIndiciesCPU> FVar15;
  FMaterial *pFVar16;
  byte bVar17;
  byte bVar18;
  ForElementType<unsigned_int> FVar19;
  ForElementType<FRibbonMultiRibbonInfo> FVar20;
  FName FVar21;
  uint *puVar22;
  uint uVar23;
  ulonglong uVar24;
  uint uVar25;
  ForElementType<unsigned_int> *pFVar26;
  FScriptContainerElement *pFVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  ForElementType<FRibbonMultiRibbonInfo> FVar32;
  uint uVar33;
  undefined1 local_f7 [3];
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  FName local_d8;
  int local_d0;
  FColor_u_0 local_cc;
  uint local_c8;
  FScriptContainerElement *local_c0;
  FName local_b8;
  ForElementType<FRibbonMultiRibbonInfo> local_b0;
  FName local_a8;
  FScriptContainerElement *local_98;
  ForElementType<FRibbonMultiRibbonInfo> local_90;
  FName local_88 [10];
  
  FVar15 = StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesCPU;
  if (StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesCPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenIndiciesCPU>)0x0) {
    pFVar14 = ::FName::FName(local_88,"STAT_NiagaraRenderRibbonsGenIndiciesCPU");
    FVar15 = (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenIndiciesCPU>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesCPU,*pFVar14,
                        L"Generate Indices CPU [GT]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar15;
  bVar9 = false;
  bVar10 = false;
  local_a8.ComparisonIndex.Value = 0;
  local_a8.Number = 0;
  bVar11 = false;
  bVar12 = false;
  if ((FVar21.ComparisonIndex.Value.Value == 0) && (FVar21.Number == 0)) {
LAB_14931fff9:
    bVar10 = bVar12;
    bVar9 = bVar11;
    bVar11 = false;
    local_d8 = local_a8;
    FVar21 = local_a8;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_cc.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_cc._s_0,(char *)*(FName *)((longlong)FVar15 + 0x10));
      bVar9 = false;
      bVar10 = true;
      bVar11 = false;
      bVar12 = true;
      if (-1 < CpuChannel->Enabled) {
        local_b8.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_b8.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar15 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                   ,0x805);
        bVar9 = true;
        bVar10 = true;
        bVar11 = true;
        bVar12 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14931fff9;
    local_d8 = FVar21;
    FThreadStats::AddMessage(FVar21,CycleScopeStart);
    bVar11 = true;
  }
  this = param_2->Material;
  if ((this == (FMaterialRenderProxy *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaterialRenderProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                          ,0x808,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar16 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback(this,param_7);
  bVar12 = IsTranslucentBlendMode(pFVar16);
  puVar22 = param_4;
  if (bVar12) {
    if (((param_2->GenerationOutput).Object == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (param_2->GenerationOutput).Object;
    if ((pFVar5->RibbonInfoLookup).ArrayNum != 0) {
      if ((pFVar5 == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar5 = (param_2->GenerationOutput).Object;
      local_c0 = (FScriptContainerElement *)&pFVar5->RibbonInfoLookup;
      FVar20 = (pFVar5->RibbonInfoLookup).AllocatorInstance.SecondaryData;
      local_e0 = (pFVar5->RibbonInfoLookup).ArrayNum;
      uVar24 = (ulonglong)(int)local_e0;
      if (FVar20 == (ForElementType<FRibbonMultiRibbonInfo>)0x0) {
        FVar20 = (ForElementType<FRibbonMultiRibbonInfo>)local_c0;
      }
      FVar32 = (ForElementType<FRibbonMultiRibbonInfo>)((longlong)FVar20 + uVar24 * 0x58);
      local_90 = FVar32;
      while( true ) {
        local_b0 = FVar20;
        if (*(int *)(local_c0 + 0x60) != (int)uVar24) {
          local_f7[0] = 0;
          `TCheckedPointerIterator<FRibbonMultiRibbonInfo,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_f7);
        }
        if (FVar20 == FVar32) break;
        uVar25 = *(uint *)((longlong)FVar20 + 0x34);
        local_c8 = uVar25;
        if (((param_2->GenerationOutput).Object == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("IsValid()",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                ,0x458,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pFVar27 = (((param_2->GenerationOutput).Object)->SegmentData).AllocatorInstance.Data +
                  (longlong)*(int *)((longlong)FVar20 + 0x30) * 4;
        local_98 = pFVar27;
        if (((int)uVar25 < 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("ArrayNum >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xfe,L""), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        dVar1 = (param_5->ViewMatrices).ViewMatrix.M[0][2];
        dVar2 = (param_5->ViewMatrices).ViewMatrix.M[1][2];
        dVar3 = (param_5->ViewMatrices).ViewMatrix.M[2][2];
        dVar8 = (*(double *)((longlong)FVar20 + 8) - (param_6->field0_0x0)._s_0.Y) * dVar2 +
                (*(double *)FVar20 - (param_6->field0_0x0)._s_0.X) * dVar1 +
                (*(double *)((longlong)FVar20 + 0x10) - (param_6->field0_0x0)._s_0.Z) * dVar3;
        dVar1 = (*(double *)((longlong)FVar20 + 0x18) - (param_6->field0_0x0)._s_0.X) * dVar1 +
                (*(double *)((longlong)FVar20 + 0x20) - (param_6->field0_0x0)._s_0.Y) * dVar2 +
                (*(double *)((longlong)FVar20 + 0x28) - (param_6->field0_0x0)._s_0.Z) * dVar3;
        if (dVar8 < dVar1) {
LAB_149320279:
          if (param_8 == FrontToBack) goto LAB_14932027e;
LAB_149320282:
          bVar12 = false;
        }
        else {
          if (param_8 != BackToFront) {
            if (dVar8 < dVar1) goto LAB_149320279;
            goto LAB_149320282;
          }
LAB_14932027e:
          bVar12 = true;
        }
        if (uVar25 != 0) {
          local_e8 = (param_3->SliceTriangleToVertexIds).ArrayNum;
          if (bVar12) {
            local_f4 = uVar25 - 1;
            local_d0 = -1;
            uVar23 = 2;
            if (2 < (int)local_e8 / 2) {
              uVar23 = (int)local_e8 / 2;
            }
            local_ec = 0xffffffff;
            if ((int)uVar23 < (int)local_e8) {
              local_e8 = uVar23;
            }
            FVar32 = local_90;
            if (local_f4 == 0xffffffff) goto LAB_14932068a;
          }
          else {
            local_d0 = 1;
            uVar23 = 2;
            if (2 < (int)local_e8 / 2) {
              uVar23 = (int)local_e8 / 2;
            }
            if ((int)uVar23 < (int)local_e8) {
              local_e8 = uVar23;
            }
            local_f4 = 0;
            local_ec = uVar25;
          }
          do {
            uVar33 = local_e8;
            uVar23 = local_f4;
            uVar29 = 0;
            if ((int)local_f4 < (int)uVar25) {
              uVar29 = ~local_f4 >> 0x1f;
            }
            if ((uVar29 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0x14f,
                                    L"Array index out of bounds: %lld from an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            local_e4 = 0;
            iVar4 = *(int *)(pFVar27 + (longlong)(int)uVar23 * 4);
            uVar29 = param_1->SubSegmentCount;
            if (uVar29 != 0) {
              do {
                pFVar26 = &(param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
                bVar17 = (byte)param_1->SubSegmentBitShift;
                bVar18 = (byte)param_1->SegmentBitShift;
                uVar25 = local_e4 << (bVar17 & 0x1f) | iVar4 << (bVar18 & 0x1f);
                iVar28 = 0;
                if (local_e4 != uVar29 - 1) {
                  iVar28 = local_e4 + 1;
                }
                uVar23 = 0;
                uVar29 = iVar28 << (bVar17 & 0x1f) |
                         (uint)(local_e4 == uVar29 - 1) + iVar4 << (bVar18 & 0x1f);
                local_f0 = uVar25;
                if (uVar33 != 0) {
                  do {
                    uVar33 = 0;
                    if ((int)uVar23 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
                      uVar33 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar33 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), uVar25 = local_f0, bVar12)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FVar6 = *pFVar26;
                    uVar33 = uVar23 + 1;
                    FVar19 = (ForElementType<unsigned_int>)param_3;
                    if (FVar6 != (ForElementType<unsigned_int>)0x0) {
                      FVar19 = FVar6;
                    }
                    uVar13 = *(uint *)((longlong)FVar19 + (longlong)(int)uVar23 * 4);
                    uVar30 = 0;
                    if ((int)uVar33 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
                      uVar30 = ~uVar33 >> 0x1f;
                    }
                    if ((uVar30 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), uVar25 = local_f0, bVar12)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FVar6 = *pFVar26;
                    FVar19 = (ForElementType<unsigned_int>)param_3;
                    if (FVar6 != (ForElementType<unsigned_int>)0x0) {
                      FVar19 = FVar6;
                    }
                    uVar23 = uVar23 + 2;
                    uVar33 = *(uint *)((longlong)FVar19 + (longlong)(int)uVar33 * 4);
                    uVar30 = uVar13 | uVar29;
                    *puVar22 = uVar13 | uVar25;
                    uVar13 = uVar33 | uVar25;
                    puVar22[2] = uVar30;
                    puVar22[1] = uVar13;
                    puVar22[3] = uVar13;
                    puVar22[4] = uVar33 | uVar29;
                    puVar22[5] = uVar30;
                    puVar22 = puVar22 + 6;
                  } while (uVar23 < local_e8);
                }
                pFVar26 = &(param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
                uVar25 = (param_3->SliceTriangleToVertexIds).ArrayNum;
                if (uVar23 < uVar25) {
                  do {
                    uVar33 = 0;
                    if ((int)uVar23 < (int)uVar25) {
                      uVar33 = ~uVar23 >> 0x1f;
                    }
                    if ((uVar33 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FVar6 = *pFVar26;
                    uVar25 = uVar23 + 1;
                    FVar19 = (ForElementType<unsigned_int>)param_3;
                    if (FVar6 != (ForElementType<unsigned_int>)0x0) {
                      FVar19 = FVar6;
                    }
                    uVar33 = *(uint *)((longlong)FVar19 + (longlong)(int)uVar23 * 4);
                    uVar13 = 0;
                    if ((int)uVar25 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
                      uVar13 = ~uVar25 >> 0x1f;
                    }
                    if ((uVar13 == 0) &&
                       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar12)) {
                      pcVar7 = (code *)swi(3);
                      (*pcVar7)();
                      return;
                    }
                    FVar6 = *pFVar26;
                    FVar19 = (ForElementType<unsigned_int>)param_3;
                    if (FVar6 != (ForElementType<unsigned_int>)0x0) {
                      FVar19 = FVar6;
                    }
                    uVar23 = uVar23 + 2;
                    uVar25 = *(uint *)((longlong)FVar19 + (longlong)(int)uVar25 * 4);
                    uVar13 = uVar25 | uVar29;
                    puVar22[1] = uVar25 | local_f0;
                    uVar25 = uVar33 | local_f0;
                    *puVar22 = uVar25;
                    puVar22[3] = uVar25;
                    puVar22[2] = uVar13;
                    puVar22[4] = uVar13;
                    puVar22[5] = uVar33 | uVar29;
                    puVar22 = puVar22 + 6;
                    uVar25 = (param_3->SliceTriangleToVertexIds).ArrayNum;
                  } while (uVar23 < uVar25);
                }
                local_e4 = local_e4 + 1;
                uVar29 = param_1->SubSegmentCount;
                pFVar27 = local_98;
                uVar25 = local_c8;
                uVar23 = local_f4;
                uVar33 = local_e8;
              } while (local_e4 < uVar29);
            }
            local_f4 = uVar23 + local_d0;
            FVar21 = local_d8;
            FVar20 = local_b0;
            FVar32 = local_90;
          } while (local_f4 != local_ec);
        }
LAB_14932068a:
        FVar20 = (ForElementType<FRibbonMultiRibbonInfo>)((longlong)FVar20 + 0x58);
        uVar24 = (ulonglong)local_e0;
      }
      goto LAB_149320b1f;
    }
  }
  if (((param_2->GenerationOutput).Object == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar5 = (param_2->GenerationOutput).Object;
  uVar25 = (pFVar5->SegmentData).ArrayNum;
  local_e0 = uVar25;
  if ((pFVar5 == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pFVar27 = (((param_2->GenerationOutput).Object)->SegmentData).AllocatorInstance.Data;
  local_c0 = pFVar27;
  if (((int)uVar25 < 0) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("ArrayNum >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xfe,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (uVar25 != 0) {
    uVar23 = (param_3->SliceTriangleToVertexIds).ArrayNum;
    uVar33 = 2;
    if (2 < (int)uVar23 / 2) {
      uVar33 = (int)uVar23 / 2;
    }
    if ((int)uVar33 < (int)uVar23) {
      uVar23 = uVar33;
    }
    local_ec = 0;
    do {
      uVar33 = local_ec;
      uVar29 = 0;
      if ((int)local_ec < (int)uVar25) {
        uVar29 = ~local_ec >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_f4 = 0;
      iVar4 = *(int *)(pFVar27 + (longlong)(int)uVar33 * 4);
      uVar29 = param_1->SubSegmentCount;
      if (uVar29 != 0) {
        do {
          bVar17 = (byte)param_1->SubSegmentBitShift;
          bVar18 = (byte)param_1->SegmentBitShift;
          uVar25 = local_f4 << (bVar17 & 0x1f) | iVar4 << (bVar18 & 0x1f);
          iVar28 = 0;
          if (local_f4 != uVar29 - 1) {
            iVar28 = local_f4 + 1;
          }
          uVar33 = 0;
          uVar29 = iVar28 << (bVar17 & 0x1f) |
                   (uint)(local_f4 == uVar29 - 1) + iVar4 << (bVar18 & 0x1f);
          if (uVar23 != 0) {
            do {
              uVar13 = 0;
              if ((int)uVar33 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
                uVar13 = ~uVar33 >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar6 = (param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
              uVar13 = uVar33 + 1;
              FVar19 = (ForElementType<unsigned_int>)param_3;
              if (FVar6 != (ForElementType<unsigned_int>)0x0) {
                FVar19 = FVar6;
              }
              uVar30 = *(uint *)((longlong)FVar19 + (longlong)(int)uVar33 * 4);
              uVar31 = 0;
              if ((int)uVar13 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
                uVar31 = ~uVar13 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar6 = (param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
              FVar19 = (ForElementType<unsigned_int>)param_3;
              if (FVar6 != (ForElementType<unsigned_int>)0x0) {
                FVar19 = FVar6;
              }
              uVar33 = uVar33 + 2;
              uVar13 = *(uint *)((longlong)FVar19 + (longlong)(int)uVar13 * 4);
              uVar31 = uVar30 | uVar29;
              *puVar22 = uVar30 | uVar25;
              uVar30 = uVar25 | uVar13;
              puVar22[2] = uVar31;
              puVar22[1] = uVar30;
              puVar22[3] = uVar30;
              puVar22[5] = uVar31;
              puVar22[4] = uVar29 | uVar13;
              puVar22 = puVar22 + 6;
            } while (uVar33 < uVar23);
          }
          uVar13 = (param_3->SliceTriangleToVertexIds).ArrayNum;
          if (uVar33 < uVar13) {
            do {
              uVar30 = 0;
              if ((int)uVar33 < (int)uVar13) {
                uVar30 = ~uVar33 >> 0x1f;
              }
              if ((uVar30 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar6 = (param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
              uVar13 = uVar33 + 1;
              FVar19 = (ForElementType<unsigned_int>)param_3;
              if (FVar6 != (ForElementType<unsigned_int>)0x0) {
                FVar19 = FVar6;
              }
              uVar30 = *(uint *)((longlong)FVar19 + (longlong)(int)uVar33 * 4);
              uVar31 = 0;
              if ((int)uVar13 < (param_3->SliceTriangleToVertexIds).ArrayNum) {
                uVar31 = ~uVar13 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar12)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              FVar6 = (param_3->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
              FVar19 = (ForElementType<unsigned_int>)param_3;
              if (FVar6 != (ForElementType<unsigned_int>)0x0) {
                FVar19 = FVar6;
              }
              uVar33 = uVar33 + 2;
              uVar13 = *(uint *)((longlong)FVar19 + (longlong)(int)uVar13 * 4);
              uVar31 = uVar30 | uVar25;
              *puVar22 = uVar31;
              puVar22[3] = uVar31;
              puVar22[1] = uVar25 | uVar13;
              uVar13 = uVar29 | uVar13;
              puVar22[5] = uVar30 | uVar29;
              puVar22[2] = uVar13;
              puVar22[4] = uVar13;
              puVar22 = puVar22 + 6;
              uVar13 = (param_3->SliceTriangleToVertexIds).ArrayNum;
            } while (uVar33 < uVar13);
          }
          local_f4 = local_f4 + 1;
          uVar29 = param_1->SubSegmentCount;
          pFVar27 = local_c0;
          uVar25 = local_e0;
          uVar33 = local_ec;
        } while (local_f4 < uVar29);
      }
      local_ec = uVar33 + 1;
      FVar21 = local_d8;
    } while (local_ec != uVar25);
  }
LAB_149320b1f:
  param_1->CPUTriangleCount = (uint)(((longlong)puVar22 - (longlong)param_4 >> 2 & 0xffffffffU) / 3)
  ;
  if ((param_4 + param_1->TotalNumIndices < puVar22) &&
     (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentIndexBuffer <= StartIndexBuffer + GeneratedData.TotalNumIndices",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                          ,0x81c,L""), bVar12)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if (bVar10) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar9) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar11) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return;
}

// GenerateVertexBufferForMultiRibbon<unsigned_int,FNiagaraDataSetReaderInt32<int>_> @ 149320bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraRendererRibbons::
GenerateVertexBufferForMultiRibbon<unsigned_int,FNiagaraDataSetReaderInt32<int>_>
          (FNiagaraRendererRibbons *this,FNiagaraGenerationInputDataCPUAccessors *param_1,
          FNiagaraDataSetReaderInt32<int> *param_2,FNiagaraRibbonCPUGeneratedVertexData *param_3)

{
  int *piVar1;
  undefined1 *puVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  byte bVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  int iVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  uint *puVar21;
  ulonglong uVar22;
  undefined1 auStackY_228 [32];
  FIdentityFunctor FStack_1d8;
  undefined1 auStack_1d7 [3];
  uint uStack_1d4;
  uint uStack_1d0;
  int iStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  undefined4 uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  int iStack_1a8;
  int iStack_1a4;
  int iStack_1a0;
  uint *puStack_198;
  FIdentityFunctor *pFStack_190;
  FIdentityFunctor **ppFStack_188;
  FNiagaraGenerationInputDataCPUAccessors *pFStack_180;
  FNiagaraGenerationInputDataCPUAccessors *pFStack_178;
  FNiagaraRendererRibbons *pFStack_170;
  longlong *plStack_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_160;
  longlong *plStack_140;
  uint uStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  longlong *plStack_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  uint *puStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<unsigned_int_const_,int> aTStack_c8 [2];
  undefined4 uStack_9c;
  undefined1 auStack_98 [32];
  ForElementType<unsigned_int> FStack_78;
  uint uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 auStack_60 [8];
  ForAnyElementType FStack_58;
  uint uStack_50;
  ulonglong uStack_48;
  
  if ((this->GenerationConfig).bWantsAutomaticTessellation == 0) {
    GenerateVertexBufferForMultiRibbonInternal<unsigned_int,FNiagaraDataSetReaderInt32<int>,0,0>
              (this,param_1,param_2,param_3);
    return;
  }
  if ((this->GenerationConfig).bHasTwist == 0) {
    GenerateVertexBufferForMultiRibbonInternal<unsigned_int,FNiagaraDataSetReaderInt32<int>,1,0>
              (this,param_1,param_2,param_3);
    return;
  }
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar22 = 0;
  auStack_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0;
  auStack_98._8_8_ = 0;
  FStack_78 = (ForElementType<unsigned_int>)0x0;
  uStack_70 = 0;
  iStack_6c = 0x80;
  iStack_68 = -1;
  iStack_64 = 0;
  FStack_58.Data = (FScriptContainerElement *)0x0;
  uStack_50 = 0;
  uStack_1d4 = 0;
  uVar20 = uVar22;
  pFStack_170 = this;
  if (param_1->TotalNumParticles != 0) {
    do {
      if (((param_2->bIsValid == false) || (param_2->NumInstances < (int)uVar20)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid && Index <= NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                             ,0x17f,L""), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uStack_1d0 = *(uint *)(param_2->ComponentData[0] + (longlong)(int)uVar20 * 4);
      if (auStack_98._8_4_ != iStack_64) {
        FVar11.Data = (FScriptContainerElement *)auStack_60;
        if ((ForElementType<FSetElementId>)FStack_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar11.Data = FStack_58.Data;
        }
        iVar7 = *(int *)((longlong)FVar11.Data + (ulonglong)(uStack_50 - 1 & uStack_1d0) * 4);
        while (iVar7 != -1) {
          pFVar13 = (FScriptContainerElement *)(auStack_98._0_8_ + (longlong)iVar7 * 0x20);
          if (*(uint *)&pFVar13->field_0x0 == uStack_1d0) {
            if (pFVar13 != (FScriptContainerElement *)0x0) goto LAB_149320db5;
            break;
          }
          iVar7 = *(int *)(pFVar13 + 0x18);
        }
      }
      puStack_198 = &uStack_1d0;
      TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
                  *)auStack_98,(uint)&iStack_1cc,
                 (TKeyInitializer<unsigned_int_&&> *)(ulonglong)uStack_1d0,(bool *)&puStack_198);
      pFVar13 = (FScriptContainerElement *)(auStack_98._0_8_ + (longlong)iStack_1cc * 0x20);
LAB_149320db5:
      if (((*(uint **)(pFVar13 + 8) <= &uStack_1d4) &&
          (&uStack_1d4 < *(uint **)(pFVar13 + 8) + *(int *)(pFVar13 + 0x14))) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar7 = *(int *)(pFVar13 + 0x10);
      if (iVar7 == *(int *)(pFVar13 + 0x14)) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<unsigned_int>_>
                          (0x404,(ForElementType<unsigned_int> *)(pFVar13 + 8),
                           (int *)(pFVar13 + 0x14));
      }
      *(int *)(pFVar13 + 0x10) = iVar7 + 1;
      (*(uint **)(pFVar13 + 8))[iVar7] = uStack_1d4;
      uStack_1d4 = uStack_1d4 + 1;
      uVar20 = (ulonglong)uStack_1d4;
    } while (uStack_1d4 < param_1->TotalNumParticles);
  }
  iVar14 = auStack_98._8_4_ - iStack_64;
  TArray<FRibbonMultiRibbonInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddZeroed
            (&param_3->RibbonInfoLookup,iVar14);
  iVar7 = (param_3->SortedIndices).ArrayNum;
  uVar17 = param_1->TotalNumParticles + iVar7 + iVar14;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if ((param_3->SortedIndices).ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,&(param_3->SortedIndices).AllocatorInstance,iVar7,
               &(param_3->SortedIndices).ArrayMax);
  }
  iVar7 = (param_3->TangentAndDistances).ArrayNum;
  uVar17 = param_1->TotalNumParticles + iVar14 + iVar7;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if ((param_3->TangentAndDistances).ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar17,&(param_3->TangentAndDistances).AllocatorInstance,iVar7,
               &(param_3->TangentAndDistances).ArrayMax);
  }
  iVar7 = (param_3->MultiRibbonIndices).ArrayNum;
  uVar17 = param_1->TotalNumParticles + iVar14 + iVar7;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if ((param_3->MultiRibbonIndices).ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,&(param_3->MultiRibbonIndices).AllocatorInstance,iVar7,
               &(param_3->MultiRibbonIndices).ArrayMax);
  }
  iVar7 = (param_3->SegmentData).ArrayNum;
  uVar17 = param_1->TotalNumParticles + iVar14 + iVar7;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar1 = &(param_3->SegmentData).ArrayMax;
  if (*piVar1 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,(ForAnyElementType *)param_3,iVar7,piVar1);
  }
  pFStack_190 = &FStack_1d8;
  ppFStack_188 = &pFStack_190;
  if (0 < auStack_98._8_4_ - iStack_64) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)auStack_98);
    uVar5 = auStack_98._0_8_;
    iVar7 = auStack_98._8_4_ - iStack_64;
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)uVar5,iVar7,FStack_1d8,
               (FElementCompareClass<TSortableMapBase<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>
                *)&ppFStack_188);
  }
  uVar17 = uStack_50;
  uVar20 = (ulonglong)uStack_50;
  if ((ForElementType<FSetElementId>)FStack_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,4);
  }
  if (uVar17 == 0) goto LAB_149321089;
  uVar8 = uVar17;
  if (uVar17 < 2) {
    if ((ForElementType<FSetElementId>)FStack_58.Data != (ForElementType<FSetElementId>)0x0) {
      uVar8 = 0;
      goto LAB_14932102d;
    }
  }
  else {
LAB_14932102d:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,uVar8,4);
  }
  if (0 < (int)uVar17) {
    uVar19 = uVar22;
    do {
      FVar11.Data = (FScriptContainerElement *)auStack_60;
      if ((ForElementType<FSetElementId>)FStack_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar11.Data = FStack_58.Data;
      }
      uVar9 = uVar19 & (longlong)(int)uVar17 - 1U;
      uVar19 = uVar19 + 1;
      *(undefined4 *)((longlong)FVar11.Data + uVar9 * 4) = 0xffffffff;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
LAB_149321089:
  uVar8 = 1;
  uVar17 = 0;
  if (uStack_50 != 0) {
    uStack_1c4 = 1;
    uStack_1c8 = 0;
    pTStack_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10);
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uVar20 = uVar22;
    if (uStack_70 != 0) {
      FVar16 = (ForElementType<unsigned_int>)((longlong)auStack_98 + 0x10);
      if (FStack_78 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = FStack_78;
      }
      uVar18 = *(uint *)FVar16;
      uVar19 = uVar22;
      while (uVar18 == 0) {
        uStack_1b0 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uStack_1b0;
        iVar7 = (int)uVar20;
        uStack_1c8 = iVar7 + 1;
        uVar20 = (ulonglong)uStack_1c8;
        if ((int)((uStack_70 - 1) + ((int)(uStack_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1c8)
        goto LAB_14932114e;
        uVar18 = ((uint *)((longlong)FVar16 + 4))[iVar7];
      }
      uStack_1c4 = -uVar18 & uVar18;
      uVar20 = (ulonglong)uStack_1c4 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iStack_1a8 = (int)lVar12;
      uStack_1b4 = iStack_1a8 + -1 + uStack_1b0;
      uVar20 = (ulonglong)uStack_1b4;
      if ((int)uStack_70 < (int)uStack_1b4) {
LAB_14932114e:
        uVar20 = (ulonglong)uStack_70;
        uStack_1b4 = uStack_70;
      }
    }
    uStack_1b8 = 0xffffffff;
    plStack_168 = (longlong *)auStack_98;
    TStack_160._padding_ = CONCAT44(uStack_1c4,uStack_1c8);
    TStack_160.CurrentBitIndex = uStack_1b4;
    TStack_160.UnvisitedBitMask = 0xffffffff;
    TStack_160._28_4_ = uStack_1ac;
    TStack_160.BaseBitIndex = uStack_1b0;
    TStack_160.Array = pTStack_1c0;
    if ((int)uVar20 < (int)uStack_70) {
      do {
        puVar21 = (uint *)((longlong)(int)uVar20 * 0x20 + *plStack_168);
        uVar18 = uStack_50 - 1 & *puVar21;
        puVar21[7] = uVar18;
        FVar11.Data = (FScriptContainerElement *)auStack_60;
        if ((ForElementType<FSetElementId>)FStack_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar11.Data = FStack_58.Data;
        }
        uVar19 = (longlong)(int)uStack_50 - 1U & (longlong)(int)uVar18;
        puVar21[6] = *(uint *)((longlong)FVar11.Data + uVar19 * 4);
        *(int *)((longlong)FVar11.Data + uVar19 * 4) = (int)uVar20;
        TStack_160.UnvisitedBitMask = TStack_160.UnvisitedBitMask & ~TStack_160._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_160);
        uVar20 = (ulonglong)(uint)TStack_160.CurrentBitIndex;
      } while (TStack_160.CurrentBitIndex < (TStack_160.Array)->NumBits);
    }
  }
  uVar18 = uStack_70;
  uStack_124 = uVar17;
  uStack_120 = uVar17;
  if (uStack_70 != 0) {
    FVar16 = (ForElementType<unsigned_int>)((longlong)auStack_98 + 0x10);
    if (FStack_78 != (ForElementType<unsigned_int>)0x0) {
      FVar16 = FStack_78;
    }
    uVar15 = *(uint *)FVar16;
    uVar20 = uVar22;
    uVar19 = uVar22;
    uStack_120 = 0;
    uVar17 = 0;
    while (uVar15 == 0) {
      iVar7 = (int)uVar20;
      uStack_120 = (int)uVar19 + 0x20;
      uVar19 = (ulonglong)uStack_120;
      uVar17 = iVar7 + 1;
      uVar20 = (ulonglong)uVar17;
      uStack_124 = uStack_70;
      if ((int)((uStack_70 - 1) + ((int)(uStack_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
      goto LAB_14932126f;
      uVar15 = ((uint *)((longlong)FVar16 + 4))[iVar7];
    }
    uVar8 = -uVar15 & uVar15;
    uVar20 = (ulonglong)uVar8 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_1a4 = (int)lVar12;
    uStack_124 = (uStack_120 - 1) + iStack_1a4;
    if ((int)uStack_70 < (int)uStack_124) {
      uStack_124 = uStack_70;
    }
  }
LAB_14932126f:
  plStack_140 = (longlong *)auStack_98;
  uStack_11c = uStack_9c;
  pTStack_130 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10);
  iStack_118 = auStack_98._8_4_ - iStack_64;
  uVar15 = uStack_70 & 0xffffffe0;
  uStack_128 = 0xffffffff;
  TStack_108.CurrentBitIndex = uStack_124;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uVar8,uVar17);
  iVar7 = (int)uStack_70 >> 5;
  TStack_108._28_4_ = uStack_9c;
  TStack_108.BaseBitIndex = uStack_120;
  uStack_e8 = CONCAT44(uStack_114,iStack_118);
  bVar10 = (byte)uStack_70;
  uStack_138 = uVar17;
  uStack_134 = uVar8;
  plStack_110 = plStack_140;
  TStack_108.Array = pTStack_130;
  if (((int)uStack_70 < 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (uVar18 != uStack_70) {
    FVar16 = (ForElementType<unsigned_int>)((longlong)auStack_98 + 0x10);
    if (FStack_78 != (ForElementType<unsigned_int>)0x0) {
      FVar16 = FStack_78;
    }
    uVar17 = -1 << (bVar10 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar7 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar7;
      uVar15 = uVar15 + 0x20;
      iVar7 = iVar7 + 1;
      uVar18 = uStack_70;
      if ((int)((uStack_70 - 1) + ((int)(uStack_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar7)
      goto LAB_149321390;
      uVar17 = ((uint *)((longlong)FVar16 + 4))[lVar12];
    }
    uVar20 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_1a0 = (int)lVar12;
    uVar18 = iStack_1a0 + -1 + uVar15;
    if ((int)uStack_70 < (int)uVar18) {
      uVar18 = uStack_70;
    }
  }
LAB_149321390:
  while( true ) {
    plVar4 = plStack_110;
    if ((int)plStack_110[1] - *(int *)((longlong)plStack_110 + 0x34) != (int)uStack_e8) {
      auStack_1d7[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_1d7);
    }
    if (((TStack_108.CurrentBitIndex == uVar18) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10))) &&
       (plVar4 == (longlong *)auStack_98)) break;
    lVar12 = *plVar4 + (longlong)TStack_108.CurrentBitIndex * 0x20;
    if ((param_1->RibbonLinkOrderFloatData).bIsValid == false) {
      pFStack_178 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l7::<lambda_2>_>_>
                (*(uint **)(lVar12 + 8),*(int *)(lVar12 + 0x10),FStack_1d8,
                 (<lambda_2> *)&pFStack_178);
    }
    else {
      pFStack_180 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l5::<lambda_1>_>_>
                (*(uint **)(lVar12 + 8),*(int *)(lVar12 + 0x10),FStack_1d8,
                 (<lambda_1> *)&pFStack_180);
    }
    puStack_d8 = *(uint **)(lVar12 + 8);
    iVar7 = *(int *)(lVar12 + 0x10);
    if ((iVar7 < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    aTStack_c8[0]._12_4_ = uStack_cc;
    aTStack_c8[0].ArrayNum = iVar7;
    aTStack_c8[0].DataPtr = puStack_d8;
    iStack_d0 = iVar7;
    GenerateVertexBufferForRibbonPart<1,1,1>(pFStack_170,param_1,aTStack_c8,(uint)uVar22,param_3);
    uVar22 = (ulonglong)((uint)uVar22 + 1);
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  uStack_50 = 0;
  if ((ForElementType<FSetElementId>)FStack_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(FStack_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_98);
  return;
}

// GenerateVertexBufferForMultiRibbon<FNiagaraID,FNiagaraDataSetReaderStruct<FNiagaraID>_> @ 149320c20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraRendererRibbons::
GenerateVertexBufferForMultiRibbon<FNiagaraID,FNiagaraDataSetReaderStruct<FNiagaraID>_>
          (FNiagaraRendererRibbons *this,FNiagaraGenerationInputDataCPUAccessors *param_1,
          FNiagaraDataSetReaderStruct<FNiagaraID> *param_2,
          FNiagaraRibbonCPUGeneratedVertexData *param_3)

{
  undefined1 *puVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ForElementType<unsigned_int> FVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int *piVar21;
  uint uVar22;
  ulonglong uVar23;
  undefined1 auStackY_228 [32];
  FIdentityFunctor FStack_1d8;
  undefined1 auStack_1d7 [3];
  uint uStack_1d4;
  int iStack_1d0;
  uint uStack_1cc;
  int aiStack_1c8 [2];
  uint uStack_1c0;
  uint uStack_1bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int iStack_198;
  int *piStack_190;
  FIdentityFunctor *pFStack_188;
  FIdentityFunctor **ppFStack_180;
  FNiagaraGenerationInputDataCPUAccessors *pFStack_178;
  FNiagaraGenerationInputDataCPUAccessors *pFStack_170;
  FNiagaraRendererRibbons *pFStack_168;
  longlong *plStack_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  longlong *plStack_138;
  uint uStack_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_128;
  undefined4 uStack_120;
  uint uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  longlong *plStack_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  uint *puStack_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<unsigned_int_const_,int> aTStack_c8 [2];
  undefined4 uStack_9c;
  undefined1 auStack_98 [32];
  ForElementType<unsigned_int> FStack_78;
  uint uStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 auStack_60 [8];
  ForAnyElementType FStack_58;
  uint uStack_50;
  ulonglong uStack_48;
  
  if ((this->GenerationConfig).bWantsAutomaticTessellation == 0) {
    GenerateVertexBufferForMultiRibbonInternal<FNiagaraID,FNiagaraDataSetReaderStruct<FNiagaraID>,0,0>
              (this,param_1,param_2,param_3);
    return;
  }
  if ((this->GenerationConfig).bHasTwist == 0) {
    GenerateVertexBufferForMultiRibbonInternal<FNiagaraID,FNiagaraDataSetReaderStruct<FNiagaraID>,1,0>
              (this,param_1,param_2,param_3);
    return;
  }
  uStack_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar23 = 0;
  auStack_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0;
  auStack_98._8_8_ = 0;
  FStack_78 = (ForElementType<unsigned_int>)0x0;
  uStack_70 = 0;
  iStack_6c = 0x80;
  iStack_68 = -1;
  iStack_64 = 0;
  FStack_58.Data = (FScriptContainerElement *)0x0;
  uStack_50 = 0;
  uStack_1d4 = 0;
  uVar20 = uVar23;
  pFStack_168 = this;
  if (param_1->TotalNumParticles != 0) {
    do {
      iVar6 = (int)uVar20;
      if (((param_2->bIsValid == false) || (param_2->NumInstances < iVar6)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid && Index <= NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                             ,0x235,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar15 = param_2->Int32Components[iVar6];
      uVar17 = param_2->Int32Components[param_2->ComponentStride + iVar6];
      _iStack_1d0 = CONCAT44(uVar17,iVar15);
      uVar13 = iVar15 - uVar17 ^ uVar17 >> 0xd;
      uVar10 = (-0x61c88647 - uVar13) - uVar17 ^ uVar13 << 8;
      uVar22 = (uVar17 - uVar10) - uVar13 ^ uVar10 >> 0xd;
      uVar13 = (uVar13 - uVar22) - uVar10 ^ uVar22 >> 0xc;
      uVar10 = (uVar10 - uVar13) - uVar22 ^ uVar13 << 0x10;
      uVar22 = (uVar22 - uVar10) - uVar13 ^ uVar10 >> 5;
      uVar13 = (uVar13 - uVar22) - uVar10 ^ uVar22 >> 3;
      uVar10 = (uVar10 - uVar13) - uVar22 ^ uVar13 << 10;
      uVar10 = (uVar22 - uVar10) - uVar13 ^ uVar10 >> 0xf;
      if (auStack_98._8_4_ != iStack_64) {
        FVar11.Data = (FScriptContainerElement *)auStack_60;
        if ((ForElementType<FSetElementId>)FStack_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar11.Data = FStack_58.Data;
        }
        iVar6 = *(int *)((longlong)FVar11.Data + (ulonglong)(uStack_50 - 1 & uVar10) * 4);
        while (iVar6 != -1) {
          pFVar7 = (FScriptContainerElement *)(auStack_98._0_8_ + (longlong)iVar6 * 0x20);
          if ((*(int *)&pFVar7->field_0x0 == iVar15) && (*(uint *)(pFVar7 + 4) == uVar17)) {
            if ((iVar6 != -1) && (pFVar7 != (FScriptContainerElement *)0x0)) goto LAB_1493228c9;
            break;
          }
          iVar6 = *(int *)(pFVar7 + 0x18);
        }
      }
      piStack_190 = &iStack_1d0;
      TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FNiagaraID_&&>_>
                ((TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
                  *)auStack_98,(uint)aiStack_1c8,(TKeyInitializer<FNiagaraID_&&> *)(ulonglong)uVar10
                 ,(bool *)&piStack_190);
      pFVar7 = (FScriptContainerElement *)(auStack_98._0_8_ + (longlong)aiStack_1c8[0] * 0x20);
LAB_1493228c9:
      if (((*(uint **)(pFVar7 + 8) <= &uStack_1d4) &&
          (&uStack_1d4 < *(uint **)(pFVar7 + 8) + *(int *)(pFVar7 + 0x14))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = *(int *)(pFVar7 + 0x10);
      if (iVar6 == *(int *)(pFVar7 + 0x14)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<unsigned_int>_>
                          (0x404,(ForElementType<unsigned_int> *)(pFVar7 + 8),(int *)(pFVar7 + 0x14)
                          );
      }
      *(int *)(pFVar7 + 0x10) = iVar6 + 1;
      (*(uint **)(pFVar7 + 8))[iVar6] = uStack_1d4;
      uStack_1d4 = uStack_1d4 + 1;
      uVar20 = (ulonglong)uStack_1d4;
    } while (uStack_1d4 < param_1->TotalNumParticles);
  }
  iVar15 = auStack_98._8_4_ - iStack_64;
  TArray<FRibbonMultiRibbonInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddZeroed
            (&param_3->RibbonInfoLookup,iVar15);
  iVar6 = (param_3->SortedIndices).ArrayNum;
  uVar17 = iVar6 + iVar15 + param_1->TotalNumParticles;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if ((param_3->SortedIndices).ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,&(param_3->SortedIndices).AllocatorInstance,iVar6,
               &(param_3->SortedIndices).ArrayMax);
  }
  iVar6 = (param_3->TangentAndDistances).ArrayNum;
  uVar17 = iVar15 + iVar6 + param_1->TotalNumParticles;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if ((param_3->TangentAndDistances).ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar17,&(param_3->TangentAndDistances).AllocatorInstance,iVar6,
               &(param_3->TangentAndDistances).ArrayMax);
  }
  iVar6 = (param_3->MultiRibbonIndices).ArrayNum;
  uVar17 = iVar15 + iVar6 + param_1->TotalNumParticles;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  if ((param_3->MultiRibbonIndices).ArrayMax < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,&(param_3->MultiRibbonIndices).AllocatorInstance,iVar6,
               &(param_3->MultiRibbonIndices).ArrayMax);
  }
  iVar6 = (param_3->SegmentData).ArrayNum;
  uVar17 = iVar15 + iVar6 + param_1->TotalNumParticles;
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar21 = &(param_3->SegmentData).ArrayMax;
  if (*piVar21 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar17,(ForAnyElementType *)param_3,iVar6,piVar21);
  }
  pFStack_188 = &FStack_1d8;
  ppFStack_180 = &pFStack_188;
  if (0 < auStack_98._8_4_ - iStack_64) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)auStack_98);
    uVar4 = auStack_98._0_8_;
    iVar6 = auStack_98._8_4_ - iStack_64;
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)uVar4,iVar6,FStack_1d8,
               (FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>
                *)&ppFStack_180);
  }
  uVar17 = uStack_50;
  uVar20 = (ulonglong)uStack_50;
  if ((ForElementType<FSetElementId>)FStack_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,0,4);
  }
  if (uVar17 == 0) goto LAB_149322b8a;
  uVar10 = uVar17;
  if (uVar17 < 2) {
    if ((ForElementType<FSetElementId>)FStack_58.Data != (ForElementType<FSetElementId>)0x0) {
      uVar10 = 0;
      goto LAB_149322b34;
    }
  }
  else {
LAB_149322b34:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_58,0,uVar10,4);
  }
  if (0 < (int)uVar17) {
    uVar19 = uVar23;
    do {
      FVar11.Data = (FScriptContainerElement *)auStack_60;
      if ((ForElementType<FSetElementId>)FStack_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar11.Data = FStack_58.Data;
      }
      uVar8 = (longlong)(int)uVar17 - 1U & uVar19;
      uVar19 = uVar19 + 1;
      *(undefined4 *)((longlong)FVar11.Data + uVar8 * 4) = 0xffffffff;
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
  }
LAB_149322b8a:
  uVar10 = 1;
  uVar17 = 0;
  if (uStack_50 != 0) {
    uStack_1bc = 1;
    uStack_1c0 = 0;
    pTStack_1b8 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10);
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar20 = uVar23;
    if (uStack_70 != 0) {
      FVar16 = (ForElementType<unsigned_int>)((longlong)auStack_98 + 0x10);
      if (FStack_78 != (ForElementType<unsigned_int>)0x0) {
        FVar16 = FStack_78;
      }
      uVar13 = *(uint *)FVar16;
      uVar19 = uVar23;
      while (uVar13 == 0) {
        uStack_1a8 = (int)uVar19 + 0x20;
        uVar19 = (ulonglong)uStack_1a8;
        iVar6 = (int)uVar20;
        uStack_1c0 = iVar6 + 1;
        uVar20 = (ulonglong)uStack_1c0;
        if ((int)((uStack_70 - 1) + ((int)(uStack_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1c0)
        goto LAB_149322c4d;
        uVar13 = ((uint *)((longlong)FVar16 + 4))[iVar6];
      }
      uStack_1bc = -uVar13 & uVar13;
      uVar20 = (ulonglong)uStack_1bc * 2 + 1;
      lVar12 = 0x3f;
      if (uVar20 != 0) {
        for (; uVar20 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iStack_1a0 = (int)lVar12;
      uStack_1ac = (uStack_1a8 - 1) + iStack_1a0;
      uVar20 = (ulonglong)uStack_1ac;
      if ((int)uStack_70 < (int)uStack_1ac) {
LAB_149322c4d:
        uVar20 = (ulonglong)uStack_70;
        uStack_1ac = uStack_70;
      }
    }
    uStack_1b0 = 0xffffffff;
    plStack_160 = (longlong *)auStack_98;
    TStack_158._padding_ = CONCAT44(uStack_1bc,uStack_1c0);
    TStack_158.CurrentBitIndex = uStack_1ac;
    TStack_158.UnvisitedBitMask = 0xffffffff;
    TStack_158._28_4_ = uStack_1a4;
    TStack_158.BaseBitIndex = uStack_1a8;
    TStack_158.Array = pTStack_1b8;
    if ((int)uVar20 < (int)uStack_70) {
      do {
        piVar21 = (int *)((longlong)(int)uVar20 * 0x20 + *plStack_160);
        uVar13 = piVar21[1];
        uVar14 = *piVar21 - uVar13 ^ uVar13 >> 0xd;
        uVar22 = (-0x61c88647 - uVar14) - uVar13 ^ uVar14 << 8;
        uVar18 = (uVar13 - uVar22) - uVar14 ^ uVar22 >> 0xd;
        uVar14 = (uVar14 - uVar18) - uVar22 ^ uVar18 >> 0xc;
        uVar13 = (uVar22 - uVar14) - uVar18 ^ uVar14 << 0x10;
        uVar18 = (uVar18 - uVar13) - uVar14 ^ uVar13 >> 5;
        uVar22 = (uVar14 - uVar18) - uVar13 ^ uVar18 >> 3;
        uVar13 = (uVar13 - uVar22) - uVar18 ^ uVar22 << 10;
        uVar13 = ((uVar18 - uVar13) - uVar22 ^ uVar13 >> 0xf) & uStack_50 - 1;
        piVar21[7] = uVar13;
        FVar11.Data = (FScriptContainerElement *)auStack_60;
        if ((ForElementType<FSetElementId>)FStack_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar11.Data = FStack_58.Data;
        }
        uVar19 = (longlong)(int)uStack_50 - 1U & (longlong)(int)uVar13;
        piVar21[6] = *(int *)((longlong)FVar11.Data + uVar19 * 4);
        *(int *)((longlong)FVar11.Data + uVar19 * 4) = (int)uVar20;
        TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
        uVar20 = (ulonglong)(uint)TStack_158.CurrentBitIndex;
      } while (TStack_158.CurrentBitIndex < (TStack_158.Array)->NumBits);
    }
  }
  uVar13 = uStack_70;
  uStack_11c = uVar17;
  uStack_118 = uVar17;
  if (uStack_70 != 0) {
    FVar16 = (ForElementType<unsigned_int>)((longlong)auStack_98 + 0x10);
    if (FStack_78 != (ForElementType<unsigned_int>)0x0) {
      FVar16 = FStack_78;
    }
    uVar22 = *(uint *)FVar16;
    uVar20 = uVar23;
    uVar19 = uVar23;
    uStack_118 = 0;
    uVar17 = 0;
    while (uVar22 == 0) {
      iVar6 = (int)uVar20;
      uStack_118 = (int)uVar19 + 0x20;
      uVar19 = (ulonglong)uStack_118;
      uVar17 = iVar6 + 1;
      uVar20 = (ulonglong)uVar17;
      uStack_11c = uStack_70;
      if ((int)((uStack_70 - 1) + ((int)(uStack_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar17)
      goto LAB_149322def;
      uVar22 = ((uint *)((longlong)FVar16 + 4))[iVar6];
    }
    uVar10 = -uVar22 & uVar22;
    uVar20 = (ulonglong)uVar10 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_19c = (int)lVar12;
    uStack_11c = (uStack_118 - 1) + iStack_19c;
    if ((int)uStack_70 < (int)uStack_11c) {
      uStack_11c = uStack_70;
    }
  }
LAB_149322def:
  plStack_138 = (longlong *)auStack_98;
  uStack_114 = uStack_9c;
  pTStack_128 = (TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10);
  iStack_110 = auStack_98._8_4_ - iStack_64;
  uVar22 = uStack_70 & 0xffffffe0;
  uStack_120 = 0xffffffff;
  TStack_100.CurrentBitIndex = uStack_11c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uVar10,uVar17);
  iVar6 = (int)uStack_70 >> 5;
  TStack_100._28_4_ = uStack_9c;
  TStack_100.BaseBitIndex = uStack_118;
  uStack_e0 = CONCAT44(uStack_10c,iStack_110);
  bVar9 = (byte)uStack_70;
  uStack_130 = uVar17;
  uStack_12c = uVar10;
  plStack_108 = plStack_138;
  TStack_100.Array = pTStack_128;
  if (((int)uStack_70 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar13 != uStack_70) {
    FVar16 = (ForElementType<unsigned_int>)((longlong)auStack_98 + 0x10);
    if (FStack_78 != (ForElementType<unsigned_int>)0x0) {
      FVar16 = FStack_78;
    }
    uVar17 = -1 << (bVar9 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar6 * 4);
    while (uVar17 == 0) {
      lVar12 = (longlong)iVar6;
      uVar22 = uVar22 + 0x20;
      iVar6 = iVar6 + 1;
      uVar13 = uStack_70;
      if ((int)((uStack_70 - 1) + ((int)(uStack_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
      goto LAB_149322f10;
      uVar17 = ((uint *)((longlong)FVar16 + 4))[lVar12];
    }
    uVar20 = (ulonglong)(-uVar17 & uVar17) * 2 + 1;
    lVar12 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iStack_198 = (int)lVar12;
    uVar13 = (uVar22 - 1) + iStack_198;
    if ((int)uStack_70 < (int)uVar13) {
      uVar13 = uStack_70;
    }
  }
LAB_149322f10:
  while( true ) {
    plVar3 = plStack_108;
    if ((int)plStack_108[1] - *(int *)((longlong)plStack_108 + 0x34) != (int)uStack_e0) {
      auStack_1d7[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(auStack_1d7);
    }
    if (((TStack_100.CurrentBitIndex == uVar13) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)(auStack_98 + 0x10))) &&
       (plVar3 == (longlong *)auStack_98)) break;
    lVar12 = *plVar3 + (longlong)TStack_100.CurrentBitIndex * 0x20;
    if ((param_1->RibbonLinkOrderFloatData).bIsValid == false) {
      pFStack_170 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l7::<lambda_2>_>_>
                (*(uint **)(lVar12 + 8),*(int *)(lVar12 + 0x10),FStack_1d8,
                 (<lambda_2> *)&pFStack_170);
    }
    else {
      pFStack_178 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l5::<lambda_1>_>_>
                (*(uint **)(lVar12 + 8),*(int *)(lVar12 + 0x10),FStack_1d8,
                 (<lambda_1> *)&pFStack_178);
    }
    puStack_d8 = *(uint **)(lVar12 + 8);
    iVar6 = *(int *)(lVar12 + 0x10);
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    aTStack_c8[0]._12_4_ = uStack_cc;
    aTStack_c8[0].ArrayNum = iVar6;
    aTStack_c8[0].DataPtr = puStack_d8;
    iStack_d0 = iVar6;
    GenerateVertexBufferForRibbonPart<1,1,1>(pFStack_168,param_1,aTStack_c8,(uint)uVar23,param_3);
    uVar23 = (ulonglong)((uint)uVar23 + 1);
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  uStack_50 = 0;
  if ((ForElementType<FSetElementId>)FStack_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(FStack_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)auStack_98);
  return;
}

// GenerateVertexBufferForMultiRibbonInternal<unsigned_int,FNiagaraDataSetReaderInt32<int>,1,1> @ 149320c50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraRendererRibbons::
GenerateVertexBufferForMultiRibbonInternal<unsigned_int,FNiagaraDataSetReaderInt32<int>,1,1>
          (FNiagaraRendererRibbons *this,FNiagaraGenerationInputDataCPUAccessors *param_1,
          FNiagaraDataSetReaderInt32<int> *param_2,FNiagaraRibbonCPUGeneratedVertexData *param_3)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint *puVar20;
  ulonglong uVar21;
  undefined1 auStackY_228 [32];
  FIdentityFunctor local_1d8;
  undefined1 local_1d7 [3];
  uint local_1d4;
  uint local_1d0;
  int local_1cc;
  uint local_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  uint *local_198;
  FIdentityFunctor *local_190;
  FIdentityFunctor **local_188;
  FNiagaraGenerationInputDataCPUAccessors *local_180;
  FNiagaraGenerationInputDataCPUAccessors *local_178;
  FNiagaraRendererRibbons *local_170;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  longlong *local_140;
  uint uStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  uint *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<unsigned_int_const_,int> local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar21 = 0;
  local_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_1d4 = 0;
  uVar19 = uVar21;
  local_170 = this;
  if (param_1->TotalNumParticles != 0) {
    do {
      if (((param_2->bIsValid == false) || (param_2->NumInstances < (int)uVar19)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid && Index <= NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                             ,0x17f,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_1d0 = *(uint *)(param_2->ComponentData[0] + (longlong)(int)uVar19 * 4);
      if (local_98._8_4_ != local_64) {
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        iVar6 = *(int *)((longlong)FVar10.Data + (ulonglong)(local_50 - 1 & local_1d0) * 4);
        while (iVar6 != -1) {
          pFVar12 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar6 * 0x20);
          if (*(uint *)&pFVar12->field_0x0 == local_1d0) {
            if (pFVar12 != (FScriptContainerElement *)0x0) goto LAB_149320db5;
            break;
          }
          iVar6 = *(int *)(pFVar12 + 0x18);
        }
      }
      local_198 = &local_1d0;
      TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
                  *)local_98,(uint)&local_1cc,
                 (TKeyInitializer<unsigned_int_&&> *)(ulonglong)local_1d0,(bool *)&local_198);
      pFVar12 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_1cc * 0x20);
LAB_149320db5:
      if (((*(uint **)(pFVar12 + 8) <= &local_1d4) &&
          (&local_1d4 < *(uint **)(pFVar12 + 8) + *(int *)(pFVar12 + 0x14))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = *(int *)(pFVar12 + 0x10);
      if (iVar6 == *(int *)(pFVar12 + 0x14)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<unsigned_int>_>
                          (0x404,(ForElementType<unsigned_int> *)(pFVar12 + 8),
                           (int *)(pFVar12 + 0x14));
      }
      *(int *)(pFVar12 + 0x10) = iVar6 + 1;
      (*(uint **)(pFVar12 + 8))[iVar6] = local_1d4;
      local_1d4 = local_1d4 + 1;
      uVar19 = (ulonglong)local_1d4;
    } while (local_1d4 < param_1->TotalNumParticles);
  }
  iVar13 = local_98._8_4_ - local_64;
  TArray<FRibbonMultiRibbonInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddZeroed
            (&param_3->RibbonInfoLookup,iVar13);
  iVar6 = (param_3->SortedIndices).ArrayNum;
  uVar16 = param_1->TotalNumParticles + iVar6 + iVar13;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->SortedIndices).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(param_3->SortedIndices).AllocatorInstance,iVar6,
               &(param_3->SortedIndices).ArrayMax);
  }
  iVar6 = (param_3->TangentAndDistances).ArrayNum;
  uVar16 = param_1->TotalNumParticles + iVar13 + iVar6;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->TangentAndDistances).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar16,&(param_3->TangentAndDistances).AllocatorInstance,iVar6,
               &(param_3->TangentAndDistances).ArrayMax);
  }
  iVar6 = (param_3->MultiRibbonIndices).ArrayNum;
  uVar16 = param_1->TotalNumParticles + iVar13 + iVar6;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->MultiRibbonIndices).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(param_3->MultiRibbonIndices).AllocatorInstance,iVar6,
               &(param_3->MultiRibbonIndices).ArrayMax);
  }
  iVar6 = (param_3->SegmentData).ArrayNum;
  uVar16 = param_1->TotalNumParticles + iVar13 + iVar6;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &(param_3->SegmentData).ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,(ForAnyElementType *)param_3,iVar6,piVar1);
  }
  local_190 = &local_1d8;
  local_188 = &local_190;
  if (0 < local_98._8_4_ - local_64) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98);
    uVar4 = local_98._0_8_;
    iVar6 = local_98._8_4_ - local_64;
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)uVar4,iVar6,local_1d8,
               (FElementCompareClass<TSortableMapBase<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>
                *)&local_188);
  }
  uVar16 = local_50;
  uVar19 = (ulonglong)local_50;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar16 == 0) goto LAB_149321089;
  uVar7 = uVar16;
  if (uVar16 < 2) {
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      uVar7 = 0;
      goto LAB_14932102d;
    }
  }
  else {
LAB_14932102d:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar7,4);
  }
  if (0 < (int)uVar16) {
    uVar18 = uVar21;
    do {
      FVar10.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar10.Data = local_58.Data;
      }
      uVar8 = uVar18 & (longlong)(int)uVar16 - 1U;
      uVar18 = uVar18 + 1;
      *(undefined4 *)((longlong)FVar10.Data + uVar8 * 4) = 0xffffffff;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
LAB_149321089:
  uVar7 = 1;
  uVar16 = 0;
  if (local_50 != 0) {
    uStack_1c4 = 1;
    local_1c8 = 0;
    pTStack_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uVar19 = uVar21;
    if (local_70 != 0) {
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_78;
      }
      uVar17 = *(uint *)FVar15;
      uVar18 = uVar21;
      while (uVar17 == 0) {
        uStack_1b0 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_1b0;
        iVar6 = (int)uVar19;
        local_1c8 = iVar6 + 1;
        uVar19 = (ulonglong)local_1c8;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1c8)
        goto LAB_14932114e;
        uVar17 = ((uint *)((longlong)FVar15 + 4))[iVar6];
      }
      uStack_1c4 = -uVar17 & uVar17;
      uVar19 = (ulonglong)uStack_1c4 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_1a8 = (int)lVar11;
      uStack_1b4 = local_1a8 + -1 + uStack_1b0;
      uVar19 = (ulonglong)uStack_1b4;
      if ((int)local_70 < (int)uStack_1b4) {
LAB_14932114e:
        uVar19 = (ulonglong)local_70;
        uStack_1b4 = local_70;
      }
    }
    local_1b8 = 0xffffffff;
    local_168 = (longlong *)local_98;
    local_160._padding_ = CONCAT44(uStack_1c4,local_1c8);
    local_160.CurrentBitIndex = uStack_1b4;
    local_160.UnvisitedBitMask = 0xffffffff;
    local_160._28_4_ = uStack_1ac;
    local_160.BaseBitIndex = uStack_1b0;
    local_160.Array = pTStack_1c0;
    if ((int)uVar19 < (int)local_70) {
      do {
        puVar20 = (uint *)((longlong)(int)uVar19 * 0x20 + *local_168);
        uVar17 = local_50 - 1 & *puVar20;
        puVar20[7] = uVar17;
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
        puVar20[6] = *(uint *)((longlong)FVar10.Data + uVar18 * 4);
        *(int *)((longlong)FVar10.Data + uVar18 * 4) = (int)uVar19;
        local_160.UnvisitedBitMask = local_160.UnvisitedBitMask & ~local_160._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
        uVar19 = (ulonglong)(uint)local_160.CurrentBitIndex;
      } while (local_160.CurrentBitIndex < (local_160.Array)->NumBits);
    }
  }
  uVar17 = local_70;
  uStack_124 = uVar16;
  local_120 = uVar16;
  if (local_70 != 0) {
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    uVar14 = *(uint *)FVar15;
    uVar19 = uVar21;
    uVar18 = uVar21;
    local_120 = 0;
    uVar16 = 0;
    while (uVar14 == 0) {
      iVar6 = (int)uVar19;
      local_120 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)local_120;
      uVar16 = iVar6 + 1;
      uVar19 = (ulonglong)uVar16;
      uStack_124 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_14932126f;
      uVar14 = ((uint *)((longlong)FVar15 + 4))[iVar6];
    }
    uVar7 = -uVar14 & uVar14;
    uVar19 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1a4 = (int)lVar11;
    uStack_124 = (local_120 - 1) + local_1a4;
    if ((int)local_70 < (int)uStack_124) {
      uStack_124 = local_70;
    }
  }
LAB_14932126f:
  local_140 = (longlong *)local_98;
  uStack_11c = local_9c;
  local_130 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_118 = local_98._8_4_ - local_64;
  uVar14 = local_70 & 0xffffffe0;
  uStack_128 = 0xffffffff;
  TStack_108.CurrentBitIndex = uStack_124;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uVar7,uVar16);
  iVar6 = (int)local_70 >> 5;
  TStack_108._28_4_ = local_9c;
  TStack_108.BaseBitIndex = local_120;
  uStack_e8 = CONCAT44(uStack_114,iStack_118);
  bVar9 = (byte)local_70;
  uStack_138 = uVar16;
  uStack_134 = uVar7;
  local_110 = local_140;
  TStack_108.Array = local_130;
  if (((int)local_70 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar17 != local_70) {
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    uVar16 = -1 << (bVar9 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar6 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar6;
      uVar14 = uVar14 + 0x20;
      iVar6 = iVar6 + 1;
      uVar17 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
      goto LAB_149321390;
      uVar16 = ((uint *)((longlong)FVar15 + 4))[lVar11];
    }
    uVar19 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1a0 = (int)lVar11;
    uVar17 = local_1a0 + -1 + uVar14;
    if ((int)local_70 < (int)uVar17) {
      uVar17 = local_70;
    }
  }
LAB_149321390:
  while( true ) {
    plVar3 = local_110;
    if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
      local_1d7[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d7);
    }
    if (((TStack_108.CurrentBitIndex == uVar17) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar3 == (longlong *)local_98)) break;
    lVar11 = *plVar3 + (longlong)TStack_108.CurrentBitIndex * 0x20;
    if ((param_1->RibbonLinkOrderFloatData).bIsValid == false) {
      local_178 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l7::<lambda_2>_>_>
                (*(uint **)(lVar11 + 8),*(int *)(lVar11 + 0x10),local_1d8,(<lambda_2> *)&local_178);
    }
    else {
      local_180 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l5::<lambda_1>_>_>
                (*(uint **)(lVar11 + 8),*(int *)(lVar11 + 0x10),local_1d8,(<lambda_1> *)&local_180);
    }
    local_d8 = *(uint **)(lVar11 + 8);
    iVar6 = *(int *)(lVar11 + 0x10);
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_c8[0]._12_4_ = uStack_cc;
    local_c8[0].ArrayNum = iVar6;
    local_c8[0].DataPtr = local_d8;
    iStack_d0 = iVar6;
    GenerateVertexBufferForRibbonPart<1,1,1>(local_170,param_1,local_c8,(uint)uVar21,param_3);
    uVar21 = (ulonglong)((uint)uVar21 + 1);
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// GenerateVertexBufferForMultiRibbonInternal<unsigned_int,FNiagaraDataSetReaderInt32<int>,1,0> @ 149321520

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraRendererRibbons::
GenerateVertexBufferForMultiRibbonInternal<unsigned_int,FNiagaraDataSetReaderInt32<int>,1,0>
          (FNiagaraRendererRibbons *this,FNiagaraGenerationInputDataCPUAccessors *param_1,
          FNiagaraDataSetReaderInt32<int> *param_2,FNiagaraRibbonCPUGeneratedVertexData *param_3)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint *puVar20;
  ulonglong uVar21;
  undefined1 auStackY_228 [32];
  FIdentityFunctor local_1d8;
  undefined1 local_1d7 [3];
  uint local_1d4;
  uint local_1d0;
  int local_1cc;
  uint local_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  uint *local_198;
  FIdentityFunctor *local_190;
  FIdentityFunctor **local_188;
  FNiagaraGenerationInputDataCPUAccessors *local_180;
  FNiagaraGenerationInputDataCPUAccessors *local_178;
  FNiagaraRendererRibbons *local_170;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  longlong *local_140;
  uint uStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  uint *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<unsigned_int_const_,int> local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar21 = 0;
  local_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_1d4 = 0;
  uVar19 = uVar21;
  local_170 = this;
  if (param_1->TotalNumParticles != 0) {
    do {
      if (((param_2->bIsValid == false) || (param_2->NumInstances < (int)uVar19)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid && Index <= NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                             ,0x17f,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_1d0 = *(uint *)(param_2->ComponentData[0] + (longlong)(int)uVar19 * 4);
      if (local_98._8_4_ != local_64) {
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        iVar6 = *(int *)((longlong)FVar10.Data + (ulonglong)(local_50 - 1 & local_1d0) * 4);
        while (iVar6 != -1) {
          pFVar12 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar6 * 0x20);
          if (*(uint *)&pFVar12->field_0x0 == local_1d0) {
            if (pFVar12 != (FScriptContainerElement *)0x0) goto LAB_149321685;
            break;
          }
          iVar6 = *(int *)(pFVar12 + 0x18);
        }
      }
      local_198 = &local_1d0;
      TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
                  *)local_98,(uint)&local_1cc,
                 (TKeyInitializer<unsigned_int_&&> *)(ulonglong)local_1d0,(bool *)&local_198);
      pFVar12 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_1cc * 0x20);
LAB_149321685:
      if (((*(uint **)(pFVar12 + 8) <= &local_1d4) &&
          (&local_1d4 < *(uint **)(pFVar12 + 8) + *(int *)(pFVar12 + 0x14))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = *(int *)(pFVar12 + 0x10);
      if (iVar6 == *(int *)(pFVar12 + 0x14)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<unsigned_int>_>
                          (0x404,(ForElementType<unsigned_int> *)(pFVar12 + 8),
                           (int *)(pFVar12 + 0x14));
      }
      *(int *)(pFVar12 + 0x10) = iVar6 + 1;
      (*(uint **)(pFVar12 + 8))[iVar6] = local_1d4;
      local_1d4 = local_1d4 + 1;
      uVar19 = (ulonglong)local_1d4;
    } while (local_1d4 < param_1->TotalNumParticles);
  }
  iVar13 = local_98._8_4_ - local_64;
  TArray<FRibbonMultiRibbonInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddZeroed
            (&param_3->RibbonInfoLookup,iVar13);
  iVar6 = (param_3->SortedIndices).ArrayNum;
  uVar16 = param_1->TotalNumParticles + iVar6 + iVar13;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->SortedIndices).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(param_3->SortedIndices).AllocatorInstance,iVar6,
               &(param_3->SortedIndices).ArrayMax);
  }
  iVar6 = (param_3->TangentAndDistances).ArrayNum;
  uVar16 = param_1->TotalNumParticles + iVar13 + iVar6;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->TangentAndDistances).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar16,&(param_3->TangentAndDistances).AllocatorInstance,iVar6,
               &(param_3->TangentAndDistances).ArrayMax);
  }
  iVar6 = (param_3->MultiRibbonIndices).ArrayNum;
  uVar16 = param_1->TotalNumParticles + iVar13 + iVar6;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->MultiRibbonIndices).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(param_3->MultiRibbonIndices).AllocatorInstance,iVar6,
               &(param_3->MultiRibbonIndices).ArrayMax);
  }
  iVar6 = (param_3->SegmentData).ArrayNum;
  uVar16 = param_1->TotalNumParticles + iVar13 + iVar6;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &(param_3->SegmentData).ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,(ForAnyElementType *)param_3,iVar6,piVar1);
  }
  local_190 = &local_1d8;
  local_188 = &local_190;
  if (0 < local_98._8_4_ - local_64) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98);
    uVar4 = local_98._0_8_;
    iVar6 = local_98._8_4_ - local_64;
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)uVar4,iVar6,local_1d8,
               (FElementCompareClass<TSortableMapBase<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>
                *)&local_188);
  }
  uVar16 = local_50;
  uVar19 = (ulonglong)local_50;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar16 == 0) goto LAB_149321959;
  uVar7 = uVar16;
  if (uVar16 < 2) {
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      uVar7 = 0;
      goto LAB_1493218fd;
    }
  }
  else {
LAB_1493218fd:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar7,4);
  }
  if (0 < (int)uVar16) {
    uVar18 = uVar21;
    do {
      FVar10.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar10.Data = local_58.Data;
      }
      uVar8 = uVar18 & (longlong)(int)uVar16 - 1U;
      uVar18 = uVar18 + 1;
      *(undefined4 *)((longlong)FVar10.Data + uVar8 * 4) = 0xffffffff;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
LAB_149321959:
  uVar7 = 1;
  uVar16 = 0;
  if (local_50 != 0) {
    uStack_1c4 = 1;
    local_1c8 = 0;
    pTStack_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uVar19 = uVar21;
    if (local_70 != 0) {
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_78;
      }
      uVar17 = *(uint *)FVar15;
      uVar18 = uVar21;
      while (uVar17 == 0) {
        uStack_1b0 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_1b0;
        iVar6 = (int)uVar19;
        local_1c8 = iVar6 + 1;
        uVar19 = (ulonglong)local_1c8;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1c8)
        goto LAB_149321a1e;
        uVar17 = ((uint *)((longlong)FVar15 + 4))[iVar6];
      }
      uStack_1c4 = -uVar17 & uVar17;
      uVar19 = (ulonglong)uStack_1c4 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_1a8 = (int)lVar11;
      uStack_1b4 = local_1a8 + -1 + uStack_1b0;
      uVar19 = (ulonglong)uStack_1b4;
      if ((int)local_70 < (int)uStack_1b4) {
LAB_149321a1e:
        uVar19 = (ulonglong)local_70;
        uStack_1b4 = local_70;
      }
    }
    local_1b8 = 0xffffffff;
    local_168 = (longlong *)local_98;
    local_160._padding_ = CONCAT44(uStack_1c4,local_1c8);
    local_160.CurrentBitIndex = uStack_1b4;
    local_160.UnvisitedBitMask = 0xffffffff;
    local_160._28_4_ = uStack_1ac;
    local_160.BaseBitIndex = uStack_1b0;
    local_160.Array = pTStack_1c0;
    if ((int)uVar19 < (int)local_70) {
      do {
        puVar20 = (uint *)((longlong)(int)uVar19 * 0x20 + *local_168);
        uVar17 = local_50 - 1 & *puVar20;
        puVar20[7] = uVar17;
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
        puVar20[6] = *(uint *)((longlong)FVar10.Data + uVar18 * 4);
        *(int *)((longlong)FVar10.Data + uVar18 * 4) = (int)uVar19;
        local_160.UnvisitedBitMask = local_160.UnvisitedBitMask & ~local_160._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
        uVar19 = (ulonglong)(uint)local_160.CurrentBitIndex;
      } while (local_160.CurrentBitIndex < (local_160.Array)->NumBits);
    }
  }
  uVar17 = local_70;
  uStack_124 = uVar16;
  local_120 = uVar16;
  if (local_70 != 0) {
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    uVar14 = *(uint *)FVar15;
    uVar19 = uVar21;
    uVar18 = uVar21;
    local_120 = 0;
    uVar16 = 0;
    while (uVar14 == 0) {
      iVar6 = (int)uVar19;
      local_120 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)local_120;
      uVar16 = iVar6 + 1;
      uVar19 = (ulonglong)uVar16;
      uStack_124 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_149321b3f;
      uVar14 = ((uint *)((longlong)FVar15 + 4))[iVar6];
    }
    uVar7 = -uVar14 & uVar14;
    uVar19 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1a4 = (int)lVar11;
    uStack_124 = (local_120 - 1) + local_1a4;
    if ((int)local_70 < (int)uStack_124) {
      uStack_124 = local_70;
    }
  }
LAB_149321b3f:
  local_140 = (longlong *)local_98;
  uStack_11c = local_9c;
  local_130 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_118 = local_98._8_4_ - local_64;
  uVar14 = local_70 & 0xffffffe0;
  uStack_128 = 0xffffffff;
  TStack_108.CurrentBitIndex = uStack_124;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uVar7,uVar16);
  iVar6 = (int)local_70 >> 5;
  TStack_108._28_4_ = local_9c;
  TStack_108.BaseBitIndex = local_120;
  uStack_e8 = CONCAT44(uStack_114,iStack_118);
  bVar9 = (byte)local_70;
  uStack_138 = uVar16;
  uStack_134 = uVar7;
  local_110 = local_140;
  TStack_108.Array = local_130;
  if (((int)local_70 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar17 != local_70) {
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    uVar16 = -1 << (bVar9 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar6 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar6;
      uVar14 = uVar14 + 0x20;
      iVar6 = iVar6 + 1;
      uVar17 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
      goto LAB_149321c60;
      uVar16 = ((uint *)((longlong)FVar15 + 4))[lVar11];
    }
    uVar19 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1a0 = (int)lVar11;
    uVar17 = local_1a0 + -1 + uVar14;
    if ((int)local_70 < (int)uVar17) {
      uVar17 = local_70;
    }
  }
LAB_149321c60:
  while( true ) {
    plVar3 = local_110;
    if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
      local_1d7[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d7);
    }
    if (((TStack_108.CurrentBitIndex == uVar17) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar3 == (longlong *)local_98)) break;
    lVar11 = *plVar3 + (longlong)TStack_108.CurrentBitIndex * 0x20;
    if ((param_1->RibbonLinkOrderFloatData).bIsValid == false) {
      local_178 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l7::<lambda_2>_>_>
                (*(uint **)(lVar11 + 8),*(int *)(lVar11 + 0x10),local_1d8,(<lambda_2> *)&local_178);
    }
    else {
      local_180 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l5::<lambda_1>_>_>
                (*(uint **)(lVar11 + 8),*(int *)(lVar11 + 0x10),local_1d8,(<lambda_1> *)&local_180);
    }
    local_d8 = *(uint **)(lVar11 + 8);
    iVar6 = *(int *)(lVar11 + 0x10);
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_c8[0]._12_4_ = uStack_cc;
    local_c8[0].ArrayNum = iVar6;
    local_c8[0].DataPtr = local_d8;
    iStack_d0 = iVar6;
    GenerateVertexBufferForRibbonPart<1,0,1>(local_170,param_1,local_c8,(uint)uVar21,param_3);
    uVar21 = (ulonglong)((uint)uVar21 + 1);
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// GenerateVertexBufferForMultiRibbonInternal<unsigned_int,FNiagaraDataSetReaderInt32<int>,0,0> @ 149321df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraRendererRibbons::
GenerateVertexBufferForMultiRibbonInternal<unsigned_int,FNiagaraDataSetReaderInt32<int>,0,0>
          (FNiagaraRendererRibbons *this,FNiagaraGenerationInputDataCPUAccessors *param_1,
          FNiagaraDataSetReaderInt32<int> *param_2,FNiagaraRibbonCPUGeneratedVertexData *param_3)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined8 uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  byte bVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  int iVar13;
  uint uVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  uint *puVar20;
  ulonglong uVar21;
  undefined1 auStackY_228 [32];
  FIdentityFunctor local_1d8;
  undefined1 local_1d7 [3];
  uint local_1d4;
  uint local_1d0;
  int local_1cc;
  uint local_1c8;
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1c0;
  undefined4 local_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  undefined4 uStack_1ac;
  int local_1a8;
  int local_1a4;
  int local_1a0;
  uint *local_198;
  FIdentityFunctor *local_190;
  FIdentityFunctor **local_188;
  FNiagaraGenerationInputDataCPUAccessors *local_180;
  FNiagaraGenerationInputDataCPUAccessors *local_178;
  FNiagaraRendererRibbons *local_170;
  longlong *local_168;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_160;
  longlong *local_140;
  uint uStack_138;
  uint uStack_134;
  TBitArray<FDefaultBitArrayAllocator> *local_130;
  undefined4 uStack_128;
  uint uStack_124;
  uint local_120;
  undefined4 uStack_11c;
  int iStack_118;
  undefined4 uStack_114;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  uint *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<unsigned_int_const_,int> local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar21 = 0;
  local_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_1d4 = 0;
  uVar19 = uVar21;
  local_170 = this;
  if (param_1->TotalNumParticles != 0) {
    do {
      if (((param_2->bIsValid == false) || (param_2->NumInstances < (int)uVar19)) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid && Index <= NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                             ,0x17f,L""), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_1d0 = *(uint *)(param_2->ComponentData[0] + (longlong)(int)uVar19 * 4);
      if (local_98._8_4_ != local_64) {
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        iVar6 = *(int *)((longlong)FVar10.Data + (ulonglong)(local_50 - 1 & local_1d0) * 4);
        while (iVar6 != -1) {
          pFVar12 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar6 * 0x20);
          if (*(uint *)&pFVar12->field_0x0 == local_1d0) {
            if (pFVar12 != (FScriptContainerElement *)0x0) goto LAB_149321f55;
            break;
          }
          iVar6 = *(int *)(pFVar12 + 0x18);
        }
      }
      local_198 = &local_1d0;
      TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<unsigned_int_&&>_>
                ((TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
                  *)local_98,(uint)&local_1cc,
                 (TKeyInitializer<unsigned_int_&&> *)(ulonglong)local_1d0,(bool *)&local_198);
      pFVar12 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_1cc * 0x20);
LAB_149321f55:
      if (((*(uint **)(pFVar12 + 8) <= &local_1d4) &&
          (&local_1d4 < *(uint **)(pFVar12 + 8) + *(int *)(pFVar12 + 0x14))) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar6 = *(int *)(pFVar12 + 0x10);
      if (iVar6 == *(int *)(pFVar12 + 0x14)) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<unsigned_int>_>
                          (0x404,(ForElementType<unsigned_int> *)(pFVar12 + 8),
                           (int *)(pFVar12 + 0x14));
      }
      *(int *)(pFVar12 + 0x10) = iVar6 + 1;
      (*(uint **)(pFVar12 + 8))[iVar6] = local_1d4;
      local_1d4 = local_1d4 + 1;
      uVar19 = (ulonglong)local_1d4;
    } while (local_1d4 < param_1->TotalNumParticles);
  }
  iVar13 = local_98._8_4_ - local_64;
  TArray<FRibbonMultiRibbonInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddZeroed
            (&param_3->RibbonInfoLookup,iVar13);
  iVar6 = (param_3->SortedIndices).ArrayNum;
  uVar16 = param_1->TotalNumParticles + iVar6 + iVar13;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->SortedIndices).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(param_3->SortedIndices).AllocatorInstance,iVar6,
               &(param_3->SortedIndices).ArrayMax);
  }
  iVar6 = (param_3->TangentAndDistances).ArrayNum;
  uVar16 = param_1->TotalNumParticles + iVar13 + iVar6;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->TangentAndDistances).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar16,&(param_3->TangentAndDistances).AllocatorInstance,iVar6,
               &(param_3->TangentAndDistances).ArrayMax);
  }
  iVar6 = (param_3->MultiRibbonIndices).ArrayNum;
  uVar16 = param_1->TotalNumParticles + iVar13 + iVar6;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->MultiRibbonIndices).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(param_3->MultiRibbonIndices).AllocatorInstance,iVar6,
               &(param_3->MultiRibbonIndices).ArrayMax);
  }
  iVar6 = (param_3->SegmentData).ArrayNum;
  uVar16 = param_1->TotalNumParticles + iVar13 + iVar6;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar1 = &(param_3->SegmentData).ArrayMax;
  if (*piVar1 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,(ForAnyElementType *)param_3,iVar6,piVar1);
  }
  local_190 = &local_1d8;
  local_188 = &local_190;
  if (0 < local_98._8_4_ - local_64) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98);
    uVar4 = local_98._0_8_;
    iVar6 = local_98._8_4_ - local_64;
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)uVar4,iVar6,local_1d8,
               (FElementCompareClass<TSortableMapBase<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<unsigned_int>_>_>
                *)&local_188);
  }
  uVar16 = local_50;
  uVar19 = (ulonglong)local_50;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar16 == 0) goto LAB_149322229;
  uVar7 = uVar16;
  if (uVar16 < 2) {
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      uVar7 = 0;
      goto LAB_1493221cd;
    }
  }
  else {
LAB_1493221cd:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar7,4);
  }
  if (0 < (int)uVar16) {
    uVar18 = uVar21;
    do {
      FVar10.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar10.Data = local_58.Data;
      }
      uVar8 = uVar18 & (longlong)(int)uVar16 - 1U;
      uVar18 = uVar18 + 1;
      *(undefined4 *)((longlong)FVar10.Data + uVar8 * 4) = 0xffffffff;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
LAB_149322229:
  uVar7 = 1;
  uVar16 = 0;
  if (local_50 != 0) {
    uStack_1c4 = 1;
    local_1c8 = 0;
    pTStack_1c0 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uStack_1b4 = 0;
    uStack_1b0 = 0;
    uVar19 = uVar21;
    if (local_70 != 0) {
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_78;
      }
      uVar17 = *(uint *)FVar15;
      uVar18 = uVar21;
      while (uVar17 == 0) {
        uStack_1b0 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_1b0;
        iVar6 = (int)uVar19;
        local_1c8 = iVar6 + 1;
        uVar19 = (ulonglong)local_1c8;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1c8)
        goto LAB_1493222ee;
        uVar17 = ((uint *)((longlong)FVar15 + 4))[iVar6];
      }
      uStack_1c4 = -uVar17 & uVar17;
      uVar19 = (ulonglong)uStack_1c4 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_1a8 = (int)lVar11;
      uStack_1b4 = local_1a8 + -1 + uStack_1b0;
      uVar19 = (ulonglong)uStack_1b4;
      if ((int)local_70 < (int)uStack_1b4) {
LAB_1493222ee:
        uVar19 = (ulonglong)local_70;
        uStack_1b4 = local_70;
      }
    }
    local_1b8 = 0xffffffff;
    local_168 = (longlong *)local_98;
    local_160._padding_ = CONCAT44(uStack_1c4,local_1c8);
    local_160.CurrentBitIndex = uStack_1b4;
    local_160.UnvisitedBitMask = 0xffffffff;
    local_160._28_4_ = uStack_1ac;
    local_160.BaseBitIndex = uStack_1b0;
    local_160.Array = pTStack_1c0;
    if ((int)uVar19 < (int)local_70) {
      do {
        puVar20 = (uint *)((longlong)(int)uVar19 * 0x20 + *local_168);
        uVar17 = local_50 - 1 & *puVar20;
        puVar20[7] = uVar17;
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar17;
        puVar20[6] = *(uint *)((longlong)FVar10.Data + uVar18 * 4);
        *(int *)((longlong)FVar10.Data + uVar18 * 4) = (int)uVar19;
        local_160.UnvisitedBitMask = local_160.UnvisitedBitMask & ~local_160._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_160);
        uVar19 = (ulonglong)(uint)local_160.CurrentBitIndex;
      } while (local_160.CurrentBitIndex < (local_160.Array)->NumBits);
    }
  }
  uVar17 = local_70;
  uStack_124 = uVar16;
  local_120 = uVar16;
  if (local_70 != 0) {
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    uVar14 = *(uint *)FVar15;
    uVar19 = uVar21;
    uVar18 = uVar21;
    local_120 = 0;
    uVar16 = 0;
    while (uVar14 == 0) {
      iVar6 = (int)uVar19;
      local_120 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)local_120;
      uVar16 = iVar6 + 1;
      uVar19 = (ulonglong)uVar16;
      uStack_124 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_14932240f;
      uVar14 = ((uint *)((longlong)FVar15 + 4))[iVar6];
    }
    uVar7 = -uVar14 & uVar14;
    uVar19 = (ulonglong)uVar7 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1a4 = (int)lVar11;
    uStack_124 = (local_120 - 1) + local_1a4;
    if ((int)local_70 < (int)uStack_124) {
      uStack_124 = local_70;
    }
  }
LAB_14932240f:
  local_140 = (longlong *)local_98;
  uStack_11c = local_9c;
  local_130 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_118 = local_98._8_4_ - local_64;
  uVar14 = local_70 & 0xffffffe0;
  uStack_128 = 0xffffffff;
  TStack_108.CurrentBitIndex = uStack_124;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uVar7,uVar16);
  iVar6 = (int)local_70 >> 5;
  TStack_108._28_4_ = local_9c;
  TStack_108.BaseBitIndex = local_120;
  uStack_e8 = CONCAT44(uStack_114,iStack_118);
  bVar9 = (byte)local_70;
  uStack_138 = uVar16;
  uStack_134 = uVar7;
  local_110 = local_140;
  TStack_108.Array = local_130;
  if (((int)local_70 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (uVar17 != local_70) {
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    uVar16 = -1 << (bVar9 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar6 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar6;
      uVar14 = uVar14 + 0x20;
      iVar6 = iVar6 + 1;
      uVar17 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar6)
      goto LAB_149322530;
      uVar16 = ((uint *)((longlong)FVar15 + 4))[lVar11];
    }
    uVar19 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_1a0 = (int)lVar11;
    uVar17 = local_1a0 + -1 + uVar14;
    if ((int)local_70 < (int)uVar17) {
      uVar17 = local_70;
    }
  }
LAB_149322530:
  while( true ) {
    plVar3 = local_110;
    if ((int)local_110[1] - *(int *)((longlong)local_110 + 0x34) != (int)uStack_e8) {
      local_1d7[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d7);
    }
    if (((TStack_108.CurrentBitIndex == uVar17) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar3 == (longlong *)local_98)) break;
    lVar11 = *plVar3 + (longlong)TStack_108.CurrentBitIndex * 0x20;
    if ((param_1->RibbonLinkOrderFloatData).bIsValid == false) {
      local_178 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l7::<lambda_2>_>_>
                (*(uint **)(lVar11 + 8),*(int *)(lVar11 + 0x10),local_1d8,(<lambda_2> *)&local_178);
    }
    else {
      local_180 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l5::<lambda_1>_>_>
                (*(uint **)(lVar11 + 8),*(int *)(lVar11 + 0x10),local_1d8,(<lambda_1> *)&local_180);
    }
    local_d8 = *(uint **)(lVar11 + 8);
    iVar6 = *(int *)(lVar11 + 0x10);
    if ((iVar6 < 0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar5)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_c8[0]._12_4_ = uStack_cc;
    local_c8[0].ArrayNum = iVar6;
    local_c8[0].DataPtr = local_d8;
    iStack_d0 = iVar6;
    GenerateVertexBufferForRibbonPart<0,0,1>(local_170,param_1,local_c8,(uint)uVar21,param_3);
    uVar21 = (ulonglong)((uint)uVar21 + 1);
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<unsigned_int,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// GenerateVertexBufferForMultiRibbonInternal<FNiagaraID,FNiagaraDataSetReaderStruct<FNiagaraID>,1,1> @ 1493226c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraRendererRibbons::
GenerateVertexBufferForMultiRibbonInternal<FNiagaraID,FNiagaraDataSetReaderStruct<FNiagaraID>,1,1>
          (FNiagaraRendererRibbons *this,FNiagaraGenerationInputDataCPUAccessors *param_1,
          FNiagaraDataSetReaderStruct<FNiagaraID> *param_2,
          FNiagaraRibbonCPUGeneratedVertexData *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int *piVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStackY_228 [32];
  FIdentityFunctor local_1d8;
  undefined1 local_1d7 [3];
  uint local_1d4;
  int local_1d0;
  uint uStack_1cc;
  int local_1c8 [2];
  uint local_1c0;
  uint uStack_1bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b8;
  undefined4 local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int *local_190;
  FIdentityFunctor *local_188;
  FIdentityFunctor **local_180;
  FNiagaraGenerationInputDataCPUAccessors *local_178;
  FNiagaraGenerationInputDataCPUAccessors *local_170;
  FNiagaraRendererRibbons *local_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_158;
  longlong *local_138;
  uint uStack_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  uint local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  uint *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<unsigned_int_const_,int> local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar22 = 0;
  local_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_1d4 = 0;
  uVar19 = uVar22;
  local_168 = this;
  if (param_1->TotalNumParticles != 0) {
    do {
      iVar5 = (int)uVar19;
      if (((param_2->bIsValid == false) || (param_2->NumInstances < iVar5)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid && Index <= NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                             ,0x235,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar14 = param_2->Int32Components[iVar5];
      uVar16 = param_2->Int32Components[param_2->ComponentStride + iVar5];
      _local_1d0 = CONCAT44(uVar16,iVar14);
      uVar12 = iVar14 - uVar16 ^ uVar16 >> 0xd;
      uVar9 = (-0x61c88647 - uVar12) - uVar16 ^ uVar12 << 8;
      uVar21 = (uVar16 - uVar9) - uVar12 ^ uVar9 >> 0xd;
      uVar12 = (uVar12 - uVar21) - uVar9 ^ uVar21 >> 0xc;
      uVar9 = (uVar9 - uVar12) - uVar21 ^ uVar12 << 0x10;
      uVar21 = (uVar21 - uVar9) - uVar12 ^ uVar9 >> 5;
      uVar12 = (uVar12 - uVar21) - uVar9 ^ uVar21 >> 3;
      uVar9 = (uVar9 - uVar12) - uVar21 ^ uVar12 << 10;
      uVar9 = (uVar21 - uVar9) - uVar12 ^ uVar9 >> 0xf;
      if (local_98._8_4_ != local_64) {
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        iVar5 = *(int *)((longlong)FVar10.Data + (ulonglong)(local_50 - 1 & uVar9) * 4);
        while (iVar5 != -1) {
          pFVar6 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar5 * 0x20);
          if ((*(int *)&pFVar6->field_0x0 == iVar14) && (*(uint *)(pFVar6 + 4) == uVar16)) {
            if ((iVar5 != -1) && (pFVar6 != (FScriptContainerElement *)0x0)) goto LAB_1493228c9;
            break;
          }
          iVar5 = *(int *)(pFVar6 + 0x18);
        }
      }
      local_190 = &local_1d0;
      TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FNiagaraID_&&>_>
                ((TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
                  *)local_98,(uint)local_1c8,(TKeyInitializer<FNiagaraID_&&> *)(ulonglong)uVar9,
                 (bool *)&local_190);
      pFVar6 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_1c8[0] * 0x20);
LAB_1493228c9:
      if (((*(uint **)(pFVar6 + 8) <= &local_1d4) &&
          (&local_1d4 < *(uint **)(pFVar6 + 8) + *(int *)(pFVar6 + 0x14))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar5 = *(int *)(pFVar6 + 0x10);
      if (iVar5 == *(int *)(pFVar6 + 0x14)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<unsigned_int>_>
                          (0x404,(ForElementType<unsigned_int> *)(pFVar6 + 8),(int *)(pFVar6 + 0x14)
                          );
      }
      *(int *)(pFVar6 + 0x10) = iVar5 + 1;
      (*(uint **)(pFVar6 + 8))[iVar5] = local_1d4;
      local_1d4 = local_1d4 + 1;
      uVar19 = (ulonglong)local_1d4;
    } while (local_1d4 < param_1->TotalNumParticles);
  }
  iVar14 = local_98._8_4_ - local_64;
  TArray<FRibbonMultiRibbonInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddZeroed
            (&param_3->RibbonInfoLookup,iVar14);
  iVar5 = (param_3->SortedIndices).ArrayNum;
  uVar16 = iVar5 + iVar14 + param_1->TotalNumParticles;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->SortedIndices).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(param_3->SortedIndices).AllocatorInstance,iVar5,
               &(param_3->SortedIndices).ArrayMax);
  }
  iVar5 = (param_3->TangentAndDistances).ArrayNum;
  uVar16 = iVar14 + iVar5 + param_1->TotalNumParticles;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->TangentAndDistances).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar16,&(param_3->TangentAndDistances).AllocatorInstance,iVar5,
               &(param_3->TangentAndDistances).ArrayMax);
  }
  iVar5 = (param_3->MultiRibbonIndices).ArrayNum;
  uVar16 = iVar14 + iVar5 + param_1->TotalNumParticles;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->MultiRibbonIndices).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(param_3->MultiRibbonIndices).AllocatorInstance,iVar5,
               &(param_3->MultiRibbonIndices).ArrayMax);
  }
  iVar5 = (param_3->SegmentData).ArrayNum;
  uVar16 = iVar14 + iVar5 + param_1->TotalNumParticles;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar20 = &(param_3->SegmentData).ArrayMax;
  if (*piVar20 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,(ForAnyElementType *)param_3,iVar5,piVar20);
  }
  local_188 = &local_1d8;
  local_180 = &local_188;
  if (0 < local_98._8_4_ - local_64) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98);
    uVar3 = local_98._0_8_;
    iVar5 = local_98._8_4_ - local_64;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)uVar3,iVar5,local_1d8,
               (FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>
                *)&local_180);
  }
  uVar16 = local_50;
  uVar19 = (ulonglong)local_50;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar16 == 0) goto LAB_149322b8a;
  uVar9 = uVar16;
  if (uVar16 < 2) {
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      uVar9 = 0;
      goto LAB_149322b34;
    }
  }
  else {
LAB_149322b34:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,4);
  }
  if (0 < (int)uVar16) {
    uVar18 = uVar22;
    do {
      FVar10.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar10.Data = local_58.Data;
      }
      uVar7 = (longlong)(int)uVar16 - 1U & uVar18;
      uVar18 = uVar18 + 1;
      *(undefined4 *)((longlong)FVar10.Data + uVar7 * 4) = 0xffffffff;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
LAB_149322b8a:
  uVar9 = 1;
  uVar16 = 0;
  if (local_50 != 0) {
    uStack_1bc = 1;
    local_1c0 = 0;
    pTStack_1b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar19 = uVar22;
    if (local_70 != 0) {
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_78;
      }
      uVar12 = *(uint *)FVar15;
      uVar18 = uVar22;
      while (uVar12 == 0) {
        uStack_1a8 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_1a8;
        iVar5 = (int)uVar19;
        local_1c0 = iVar5 + 1;
        uVar19 = (ulonglong)local_1c0;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1c0)
        goto LAB_149322c4d;
        uVar12 = ((uint *)((longlong)FVar15 + 4))[iVar5];
      }
      uStack_1bc = -uVar12 & uVar12;
      uVar19 = (ulonglong)uStack_1bc * 2 + 1;
      lVar11 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_1a0 = (int)lVar11;
      uStack_1ac = (uStack_1a8 - 1) + local_1a0;
      uVar19 = (ulonglong)uStack_1ac;
      if ((int)local_70 < (int)uStack_1ac) {
LAB_149322c4d:
        uVar19 = (ulonglong)local_70;
        uStack_1ac = local_70;
      }
    }
    local_1b0 = 0xffffffff;
    local_160 = (longlong *)local_98;
    local_158._padding_ = CONCAT44(uStack_1bc,local_1c0);
    local_158.CurrentBitIndex = uStack_1ac;
    local_158.UnvisitedBitMask = 0xffffffff;
    local_158._28_4_ = uStack_1a4;
    local_158.BaseBitIndex = uStack_1a8;
    local_158.Array = pTStack_1b8;
    if ((int)uVar19 < (int)local_70) {
      do {
        piVar20 = (int *)((longlong)(int)uVar19 * 0x20 + *local_160);
        uVar12 = piVar20[1];
        uVar13 = *piVar20 - uVar12 ^ uVar12 >> 0xd;
        uVar21 = (-0x61c88647 - uVar13) - uVar12 ^ uVar13 << 8;
        uVar17 = (uVar12 - uVar21) - uVar13 ^ uVar21 >> 0xd;
        uVar13 = (uVar13 - uVar17) - uVar21 ^ uVar17 >> 0xc;
        uVar12 = (uVar21 - uVar13) - uVar17 ^ uVar13 << 0x10;
        uVar17 = (uVar17 - uVar12) - uVar13 ^ uVar12 >> 5;
        uVar21 = (uVar13 - uVar17) - uVar12 ^ uVar17 >> 3;
        uVar12 = (uVar12 - uVar21) - uVar17 ^ uVar21 << 10;
        uVar12 = ((uVar17 - uVar12) - uVar21 ^ uVar12 >> 0xf) & local_50 - 1;
        piVar20[7] = uVar12;
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
        piVar20[6] = *(int *)((longlong)FVar10.Data + uVar18 * 4);
        *(int *)((longlong)FVar10.Data + uVar18 * 4) = (int)uVar19;
        local_158.UnvisitedBitMask = local_158.UnvisitedBitMask & ~local_158._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_158);
        uVar19 = (ulonglong)(uint)local_158.CurrentBitIndex;
      } while (local_158.CurrentBitIndex < (local_158.Array)->NumBits);
    }
  }
  uVar12 = local_70;
  uStack_11c = uVar16;
  local_118 = uVar16;
  if (local_70 != 0) {
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    uVar21 = *(uint *)FVar15;
    uVar19 = uVar22;
    uVar18 = uVar22;
    local_118 = 0;
    uVar16 = 0;
    while (uVar21 == 0) {
      iVar5 = (int)uVar19;
      local_118 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)local_118;
      uVar16 = iVar5 + 1;
      uVar19 = (ulonglong)uVar16;
      uStack_11c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_149322def;
      uVar21 = ((uint *)((longlong)FVar15 + 4))[iVar5];
    }
    uVar9 = -uVar21 & uVar21;
    uVar19 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_19c = (int)lVar11;
    uStack_11c = (local_118 - 1) + local_19c;
    if ((int)local_70 < (int)uStack_11c) {
      uStack_11c = local_70;
    }
  }
LAB_149322def:
  local_138 = (longlong *)local_98;
  uStack_114 = local_9c;
  local_128 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_110 = local_98._8_4_ - local_64;
  uVar21 = local_70 & 0xffffffe0;
  uStack_120 = 0xffffffff;
  TStack_100.CurrentBitIndex = uStack_11c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uVar9,uVar16);
  iVar5 = (int)local_70 >> 5;
  TStack_100._28_4_ = local_9c;
  TStack_100.BaseBitIndex = local_118;
  uStack_e0 = CONCAT44(uStack_10c,iStack_110);
  bVar8 = (byte)local_70;
  uStack_130 = uVar16;
  uStack_12c = uVar9;
  local_108 = local_138;
  TStack_100.Array = local_128;
  if (((int)local_70 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (uVar12 != local_70) {
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    uVar16 = -1 << (bVar8 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar5 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar5;
      uVar21 = uVar21 + 0x20;
      iVar5 = iVar5 + 1;
      uVar12 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar5)
      goto LAB_149322f10;
      uVar16 = ((uint *)((longlong)FVar15 + 4))[lVar11];
    }
    uVar19 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_198 = (int)lVar11;
    uVar12 = (uVar21 - 1) + local_198;
    if ((int)local_70 < (int)uVar12) {
      uVar12 = local_70;
    }
  }
LAB_149322f10:
  while( true ) {
    plVar2 = local_108;
    if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
      local_1d7[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d7);
    }
    if (((TStack_100.CurrentBitIndex == uVar12) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar2 == (longlong *)local_98)) break;
    lVar11 = *plVar2 + (longlong)TStack_100.CurrentBitIndex * 0x20;
    if ((param_1->RibbonLinkOrderFloatData).bIsValid == false) {
      local_170 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l7::<lambda_2>_>_>
                (*(uint **)(lVar11 + 8),*(int *)(lVar11 + 0x10),local_1d8,(<lambda_2> *)&local_170);
    }
    else {
      local_178 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l5::<lambda_1>_>_>
                (*(uint **)(lVar11 + 8),*(int *)(lVar11 + 0x10),local_1d8,(<lambda_1> *)&local_178);
    }
    local_d8 = *(uint **)(lVar11 + 8);
    iVar5 = *(int *)(lVar11 + 0x10);
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_c8[0]._12_4_ = uStack_cc;
    local_c8[0].ArrayNum = iVar5;
    local_c8[0].DataPtr = local_d8;
    iStack_d0 = iVar5;
    GenerateVertexBufferForRibbonPart<1,1,1>(local_168,param_1,local_c8,(uint)uVar22,param_3);
    uVar22 = (ulonglong)((uint)uVar22 + 1);
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// GenerateVertexBufferForMultiRibbonInternal<FNiagaraID,FNiagaraDataSetReaderStruct<FNiagaraID>,1,0> @ 1493230a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraRendererRibbons::
GenerateVertexBufferForMultiRibbonInternal<FNiagaraID,FNiagaraDataSetReaderStruct<FNiagaraID>,1,0>
          (FNiagaraRendererRibbons *this,FNiagaraGenerationInputDataCPUAccessors *param_1,
          FNiagaraDataSetReaderStruct<FNiagaraID> *param_2,
          FNiagaraRibbonCPUGeneratedVertexData *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int *piVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStackY_228 [32];
  FIdentityFunctor local_1d8;
  undefined1 local_1d7 [3];
  uint local_1d4;
  int local_1d0;
  uint uStack_1cc;
  int local_1c8 [2];
  uint local_1c0;
  uint uStack_1bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b8;
  undefined4 local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int *local_190;
  FIdentityFunctor *local_188;
  FIdentityFunctor **local_180;
  FNiagaraGenerationInputDataCPUAccessors *local_178;
  FNiagaraGenerationInputDataCPUAccessors *local_170;
  FNiagaraRendererRibbons *local_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_158;
  longlong *local_138;
  uint uStack_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  uint local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  uint *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<unsigned_int_const_,int> local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar22 = 0;
  local_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_1d4 = 0;
  uVar19 = uVar22;
  local_168 = this;
  if (param_1->TotalNumParticles != 0) {
    do {
      iVar5 = (int)uVar19;
      if (((param_2->bIsValid == false) || (param_2->NumInstances < iVar5)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid && Index <= NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                             ,0x235,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar14 = param_2->Int32Components[iVar5];
      uVar16 = param_2->Int32Components[param_2->ComponentStride + iVar5];
      _local_1d0 = CONCAT44(uVar16,iVar14);
      uVar12 = iVar14 - uVar16 ^ uVar16 >> 0xd;
      uVar9 = (-0x61c88647 - uVar12) - uVar16 ^ uVar12 << 8;
      uVar21 = (uVar16 - uVar9) - uVar12 ^ uVar9 >> 0xd;
      uVar12 = (uVar12 - uVar21) - uVar9 ^ uVar21 >> 0xc;
      uVar9 = (uVar9 - uVar12) - uVar21 ^ uVar12 << 0x10;
      uVar21 = (uVar21 - uVar9) - uVar12 ^ uVar9 >> 5;
      uVar12 = (uVar12 - uVar21) - uVar9 ^ uVar21 >> 3;
      uVar9 = (uVar9 - uVar12) - uVar21 ^ uVar12 << 10;
      uVar9 = (uVar21 - uVar9) - uVar12 ^ uVar9 >> 0xf;
      if (local_98._8_4_ != local_64) {
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        iVar5 = *(int *)((longlong)FVar10.Data + (ulonglong)(local_50 - 1 & uVar9) * 4);
        while (iVar5 != -1) {
          pFVar6 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar5 * 0x20);
          if ((*(int *)&pFVar6->field_0x0 == iVar14) && (*(uint *)(pFVar6 + 4) == uVar16)) {
            if ((iVar5 != -1) && (pFVar6 != (FScriptContainerElement *)0x0)) goto LAB_1493232a9;
            break;
          }
          iVar5 = *(int *)(pFVar6 + 0x18);
        }
      }
      local_190 = &local_1d0;
      TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FNiagaraID_&&>_>
                ((TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
                  *)local_98,(uint)local_1c8,(TKeyInitializer<FNiagaraID_&&> *)(ulonglong)uVar9,
                 (bool *)&local_190);
      pFVar6 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_1c8[0] * 0x20);
LAB_1493232a9:
      if (((*(uint **)(pFVar6 + 8) <= &local_1d4) &&
          (&local_1d4 < *(uint **)(pFVar6 + 8) + *(int *)(pFVar6 + 0x14))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar5 = *(int *)(pFVar6 + 0x10);
      if (iVar5 == *(int *)(pFVar6 + 0x14)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<unsigned_int>_>
                          (0x404,(ForElementType<unsigned_int> *)(pFVar6 + 8),(int *)(pFVar6 + 0x14)
                          );
      }
      *(int *)(pFVar6 + 0x10) = iVar5 + 1;
      (*(uint **)(pFVar6 + 8))[iVar5] = local_1d4;
      local_1d4 = local_1d4 + 1;
      uVar19 = (ulonglong)local_1d4;
    } while (local_1d4 < param_1->TotalNumParticles);
  }
  iVar14 = local_98._8_4_ - local_64;
  TArray<FRibbonMultiRibbonInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddZeroed
            (&param_3->RibbonInfoLookup,iVar14);
  iVar5 = (param_3->SortedIndices).ArrayNum;
  uVar16 = iVar5 + iVar14 + param_1->TotalNumParticles;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->SortedIndices).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(param_3->SortedIndices).AllocatorInstance,iVar5,
               &(param_3->SortedIndices).ArrayMax);
  }
  iVar5 = (param_3->TangentAndDistances).ArrayNum;
  uVar16 = iVar14 + iVar5 + param_1->TotalNumParticles;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->TangentAndDistances).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar16,&(param_3->TangentAndDistances).AllocatorInstance,iVar5,
               &(param_3->TangentAndDistances).ArrayMax);
  }
  iVar5 = (param_3->MultiRibbonIndices).ArrayNum;
  uVar16 = iVar14 + iVar5 + param_1->TotalNumParticles;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->MultiRibbonIndices).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(param_3->MultiRibbonIndices).AllocatorInstance,iVar5,
               &(param_3->MultiRibbonIndices).ArrayMax);
  }
  iVar5 = (param_3->SegmentData).ArrayNum;
  uVar16 = iVar14 + iVar5 + param_1->TotalNumParticles;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar20 = &(param_3->SegmentData).ArrayMax;
  if (*piVar20 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,(ForAnyElementType *)param_3,iVar5,piVar20);
  }
  local_188 = &local_1d8;
  local_180 = &local_188;
  if (0 < local_98._8_4_ - local_64) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98);
    uVar3 = local_98._0_8_;
    iVar5 = local_98._8_4_ - local_64;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)uVar3,iVar5,local_1d8,
               (FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>
                *)&local_180);
  }
  uVar16 = local_50;
  uVar19 = (ulonglong)local_50;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar16 == 0) goto LAB_14932356a;
  uVar9 = uVar16;
  if (uVar16 < 2) {
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      uVar9 = 0;
      goto LAB_149323514;
    }
  }
  else {
LAB_149323514:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,4);
  }
  if (0 < (int)uVar16) {
    uVar18 = uVar22;
    do {
      FVar10.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar10.Data = local_58.Data;
      }
      uVar7 = (longlong)(int)uVar16 - 1U & uVar18;
      uVar18 = uVar18 + 1;
      *(undefined4 *)((longlong)FVar10.Data + uVar7 * 4) = 0xffffffff;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
LAB_14932356a:
  uVar9 = 1;
  uVar16 = 0;
  if (local_50 != 0) {
    uStack_1bc = 1;
    local_1c0 = 0;
    pTStack_1b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar19 = uVar22;
    if (local_70 != 0) {
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_78;
      }
      uVar12 = *(uint *)FVar15;
      uVar18 = uVar22;
      while (uVar12 == 0) {
        uStack_1a8 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_1a8;
        iVar5 = (int)uVar19;
        local_1c0 = iVar5 + 1;
        uVar19 = (ulonglong)local_1c0;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1c0)
        goto LAB_14932362d;
        uVar12 = ((uint *)((longlong)FVar15 + 4))[iVar5];
      }
      uStack_1bc = -uVar12 & uVar12;
      uVar19 = (ulonglong)uStack_1bc * 2 + 1;
      lVar11 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_1a0 = (int)lVar11;
      uStack_1ac = (uStack_1a8 - 1) + local_1a0;
      uVar19 = (ulonglong)uStack_1ac;
      if ((int)local_70 < (int)uStack_1ac) {
LAB_14932362d:
        uVar19 = (ulonglong)local_70;
        uStack_1ac = local_70;
      }
    }
    local_1b0 = 0xffffffff;
    local_160 = (longlong *)local_98;
    local_158._padding_ = CONCAT44(uStack_1bc,local_1c0);
    local_158.CurrentBitIndex = uStack_1ac;
    local_158.UnvisitedBitMask = 0xffffffff;
    local_158._28_4_ = uStack_1a4;
    local_158.BaseBitIndex = uStack_1a8;
    local_158.Array = pTStack_1b8;
    if ((int)uVar19 < (int)local_70) {
      do {
        piVar20 = (int *)((longlong)(int)uVar19 * 0x20 + *local_160);
        uVar12 = piVar20[1];
        uVar13 = *piVar20 - uVar12 ^ uVar12 >> 0xd;
        uVar21 = (-0x61c88647 - uVar13) - uVar12 ^ uVar13 << 8;
        uVar17 = (uVar12 - uVar21) - uVar13 ^ uVar21 >> 0xd;
        uVar13 = (uVar13 - uVar17) - uVar21 ^ uVar17 >> 0xc;
        uVar12 = (uVar21 - uVar13) - uVar17 ^ uVar13 << 0x10;
        uVar17 = (uVar17 - uVar12) - uVar13 ^ uVar12 >> 5;
        uVar21 = (uVar13 - uVar17) - uVar12 ^ uVar17 >> 3;
        uVar12 = (uVar12 - uVar21) - uVar17 ^ uVar21 << 10;
        uVar12 = ((uVar17 - uVar12) - uVar21 ^ uVar12 >> 0xf) & local_50 - 1;
        piVar20[7] = uVar12;
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
        piVar20[6] = *(int *)((longlong)FVar10.Data + uVar18 * 4);
        *(int *)((longlong)FVar10.Data + uVar18 * 4) = (int)uVar19;
        local_158.UnvisitedBitMask = local_158.UnvisitedBitMask & ~local_158._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_158);
        uVar19 = (ulonglong)(uint)local_158.CurrentBitIndex;
      } while (local_158.CurrentBitIndex < (local_158.Array)->NumBits);
    }
  }
  uVar12 = local_70;
  uStack_11c = uVar16;
  local_118 = uVar16;
  if (local_70 != 0) {
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    uVar21 = *(uint *)FVar15;
    uVar19 = uVar22;
    uVar18 = uVar22;
    local_118 = 0;
    uVar16 = 0;
    while (uVar21 == 0) {
      iVar5 = (int)uVar19;
      local_118 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)local_118;
      uVar16 = iVar5 + 1;
      uVar19 = (ulonglong)uVar16;
      uStack_11c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_1493237cf;
      uVar21 = ((uint *)((longlong)FVar15 + 4))[iVar5];
    }
    uVar9 = -uVar21 & uVar21;
    uVar19 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_19c = (int)lVar11;
    uStack_11c = (local_118 - 1) + local_19c;
    if ((int)local_70 < (int)uStack_11c) {
      uStack_11c = local_70;
    }
  }
LAB_1493237cf:
  local_138 = (longlong *)local_98;
  uStack_114 = local_9c;
  local_128 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_110 = local_98._8_4_ - local_64;
  uVar21 = local_70 & 0xffffffe0;
  uStack_120 = 0xffffffff;
  TStack_100.CurrentBitIndex = uStack_11c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uVar9,uVar16);
  iVar5 = (int)local_70 >> 5;
  TStack_100._28_4_ = local_9c;
  TStack_100.BaseBitIndex = local_118;
  uStack_e0 = CONCAT44(uStack_10c,iStack_110);
  bVar8 = (byte)local_70;
  uStack_130 = uVar16;
  uStack_12c = uVar9;
  local_108 = local_138;
  TStack_100.Array = local_128;
  if (((int)local_70 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (uVar12 != local_70) {
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    uVar16 = -1 << (bVar8 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar5 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar5;
      uVar21 = uVar21 + 0x20;
      iVar5 = iVar5 + 1;
      uVar12 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar5)
      goto LAB_1493238f0;
      uVar16 = ((uint *)((longlong)FVar15 + 4))[lVar11];
    }
    uVar19 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_198 = (int)lVar11;
    uVar12 = (uVar21 - 1) + local_198;
    if ((int)local_70 < (int)uVar12) {
      uVar12 = local_70;
    }
  }
LAB_1493238f0:
  while( true ) {
    plVar2 = local_108;
    if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
      local_1d7[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d7);
    }
    if (((TStack_100.CurrentBitIndex == uVar12) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar2 == (longlong *)local_98)) break;
    lVar11 = *plVar2 + (longlong)TStack_100.CurrentBitIndex * 0x20;
    if ((param_1->RibbonLinkOrderFloatData).bIsValid == false) {
      local_170 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l7::<lambda_2>_>_>
                (*(uint **)(lVar11 + 8),*(int *)(lVar11 + 0x10),local_1d8,(<lambda_2> *)&local_170);
    }
    else {
      local_178 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l5::<lambda_1>_>_>
                (*(uint **)(lVar11 + 8),*(int *)(lVar11 + 0x10),local_1d8,(<lambda_1> *)&local_178);
    }
    local_d8 = *(uint **)(lVar11 + 8);
    iVar5 = *(int *)(lVar11 + 0x10);
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_c8[0]._12_4_ = uStack_cc;
    local_c8[0].ArrayNum = iVar5;
    local_c8[0].DataPtr = local_d8;
    iStack_d0 = iVar5;
    GenerateVertexBufferForRibbonPart<1,0,1>(local_168,param_1,local_c8,(uint)uVar22,param_3);
    uVar22 = (ulonglong)((uint)uVar22 + 1);
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// GenerateVertexBufferForMultiRibbonInternal<FNiagaraID,FNiagaraDataSetReaderStruct<FNiagaraID>,0,0> @ 149323a80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FNiagaraRendererRibbons::
GenerateVertexBufferForMultiRibbonInternal<FNiagaraID,FNiagaraDataSetReaderStruct<FNiagaraID>,0,0>
          (FNiagaraRendererRibbons *this,FNiagaraGenerationInputDataCPUAccessors *param_1,
          FNiagaraDataSetReaderStruct<FNiagaraID> *param_2,
          FNiagaraRibbonCPUGeneratedVertexData *param_3)

{
  code *pcVar1;
  longlong *plVar2;
  undefined8 uVar3;
  bool bVar4;
  int iVar5;
  FScriptContainerElement *pFVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ForElementType<unsigned_int> FVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  int *piVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStackY_228 [32];
  FIdentityFunctor local_1d8;
  undefined1 local_1d7 [3];
  uint local_1d4;
  int local_1d0;
  uint uStack_1cc;
  int local_1c8 [2];
  uint local_1c0;
  uint uStack_1bc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1b8;
  undefined4 local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  undefined4 uStack_1a4;
  int local_1a0;
  int local_19c;
  int local_198;
  int *local_190;
  FIdentityFunctor *local_188;
  FIdentityFunctor **local_180;
  FNiagaraGenerationInputDataCPUAccessors *local_178;
  FNiagaraGenerationInputDataCPUAccessors *local_170;
  FNiagaraRendererRibbons *local_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_158;
  longlong *local_138;
  uint uStack_130;
  uint uStack_12c;
  TBitArray<FDefaultBitArrayAllocator> *local_128;
  undefined4 uStack_120;
  uint uStack_11c;
  uint local_118;
  undefined4 uStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  longlong *local_108;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_100;
  undefined8 uStack_e0;
  uint *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  TArrayView<unsigned_int_const_,int> local_c8 [2];
  undefined4 local_9c;
  undefined1 local_98 [32];
  ForElementType<unsigned_int> local_78;
  uint local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined1 local_60 [8];
  ForAnyElementType local_58;
  uint local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_228;
  uVar22 = 0;
  local_98._0_8_ = (TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)0x0;
  local_98._8_8_ = 0;
  local_78 = (ForElementType<unsigned_int>)0x0;
  local_70 = 0;
  local_6c = 0x80;
  local_68 = -1;
  local_64 = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  local_1d4 = 0;
  uVar19 = uVar22;
  local_168 = this;
  if (param_1->TotalNumParticles != 0) {
    do {
      iVar5 = (int)uVar19;
      if (((param_2->bIsValid == false) || (param_2->NumInstances < iVar5)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("bIsValid && Index <= NumInstances",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataSetAccessor.h"
                             ,0x235,L""), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar14 = param_2->Int32Components[iVar5];
      uVar16 = param_2->Int32Components[param_2->ComponentStride + iVar5];
      _local_1d0 = CONCAT44(uVar16,iVar14);
      uVar12 = iVar14 - uVar16 ^ uVar16 >> 0xd;
      uVar9 = (-0x61c88647 - uVar12) - uVar16 ^ uVar12 << 8;
      uVar21 = (uVar16 - uVar9) - uVar12 ^ uVar9 >> 0xd;
      uVar12 = (uVar12 - uVar21) - uVar9 ^ uVar21 >> 0xc;
      uVar9 = (uVar9 - uVar12) - uVar21 ^ uVar12 << 0x10;
      uVar21 = (uVar21 - uVar9) - uVar12 ^ uVar9 >> 5;
      uVar12 = (uVar12 - uVar21) - uVar9 ^ uVar21 >> 3;
      uVar9 = (uVar9 - uVar12) - uVar21 ^ uVar12 << 10;
      uVar9 = (uVar21 - uVar9) - uVar12 ^ uVar9 >> 0xf;
      if (local_98._8_4_ != local_64) {
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        iVar5 = *(int *)((longlong)FVar10.Data + (ulonglong)(local_50 - 1 & uVar9) * 4);
        while (iVar5 != -1) {
          pFVar6 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)iVar5 * 0x20);
          if ((*(int *)&pFVar6->field_0x0 == iVar14) && (*(uint *)(pFVar6 + 4) == uVar16)) {
            if ((iVar5 != -1) && (pFVar6 != (FScriptContainerElement *)0x0)) goto LAB_149323c89;
            break;
          }
          iVar5 = *(int *)(pFVar6 + 0x18);
        }
      }
      local_190 = &local_1d0;
      TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
      ::EmplaceByHash<TKeyInitializer<FNiagaraID_&&>_>
                ((TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>
                  *)local_98,(uint)local_1c8,(TKeyInitializer<FNiagaraID_&&> *)(ulonglong)uVar9,
                 (bool *)&local_190);
      pFVar6 = (FScriptContainerElement *)(local_98._0_8_ + (longlong)local_1c8[0] * 0x20);
LAB_149323c89:
      if (((*(uint **)(pFVar6 + 8) <= &local_1d4) &&
          (&local_1d4 < *(uint **)(pFVar6 + 8) + *(int *)(pFVar6 + 0x14))) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      iVar5 = *(int *)(pFVar6 + 0x10);
      if (iVar5 == *(int *)(pFVar6 + 0x14)) {
        iVar5 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<unsigned_int>_>
                          (0x404,(ForElementType<unsigned_int> *)(pFVar6 + 8),(int *)(pFVar6 + 0x14)
                          );
      }
      *(int *)(pFVar6 + 0x10) = iVar5 + 1;
      (*(uint **)(pFVar6 + 8))[iVar5] = local_1d4;
      local_1d4 = local_1d4 + 1;
      uVar19 = (ulonglong)local_1d4;
    } while (local_1d4 < param_1->TotalNumParticles);
  }
  iVar14 = local_98._8_4_ - local_64;
  TArray<FRibbonMultiRibbonInfo,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>::AddZeroed
            (&param_3->RibbonInfoLookup,iVar14);
  iVar5 = (param_3->SortedIndices).ArrayNum;
  uVar16 = iVar5 + iVar14 + param_1->TotalNumParticles;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->SortedIndices).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(param_3->SortedIndices).AllocatorInstance,iVar5,
               &(param_3->SortedIndices).ArrayMax);
  }
  iVar5 = (param_3->TangentAndDistances).ArrayNum;
  uVar16 = iVar14 + iVar5 + param_1->TotalNumParticles;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->TangentAndDistances).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,0x10,uVar16,&(param_3->TangentAndDistances).AllocatorInstance,iVar5,
               &(param_3->TangentAndDistances).ArrayMax);
  }
  iVar5 = (param_3->MultiRibbonIndices).ArrayNum;
  uVar16 = iVar14 + iVar5 + param_1->TotalNumParticles;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  if ((param_3->MultiRibbonIndices).ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,&(param_3->MultiRibbonIndices).AllocatorInstance,iVar5,
               &(param_3->MultiRibbonIndices).ArrayMax);
  }
  iVar5 = (param_3->SegmentData).ArrayNum;
  uVar16 = iVar14 + iVar5 + param_1->TotalNumParticles;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  piVar20 = &(param_3->SegmentData).ArrayMax;
  if (*piVar20 < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar16,(ForAnyElementType *)param_3,iVar5,piVar20);
  }
  local_188 = &local_1d8;
  local_180 = &local_188;
  if (0 < local_98._8_4_ - local_64) {
    TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Compact((TSparseArrayBase<32,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_98);
    uVar3 = local_98._0_8_;
    iVar5 = local_98._8_4_ - local_64;
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("ArrayNum >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xfe,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    AlgoImpl::
    IntroSortInternal<TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_>,int,FIdentityFunctor,TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>::FElementCompareClass<TSet<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>,FDefaultSetAllocator>::FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>_>_>
              ((TSparseArrayElementOrFreeListLink<TAlignedBytes<32,8>_> *)uVar3,iVar5,local_1d8,
               (FElementCompareClass<TSortableMapBase<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>,0>_>::FKeyComparisonClass<TLess<FNiagaraID>_>_>
                *)&local_180);
  }
  uVar16 = local_50;
  uVar19 = (ulonglong)local_50;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,0,4);
  }
  if (uVar16 == 0) goto LAB_149323f4a;
  uVar9 = uVar16;
  if (uVar16 < 2) {
    if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
      uVar9 = 0;
      goto LAB_149323ef4;
    }
  }
  else {
LAB_149323ef4:
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_58,0,uVar9,4);
  }
  if (0 < (int)uVar16) {
    uVar18 = uVar22;
    do {
      FVar10.Data = (FScriptContainerElement *)local_60;
      if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
        FVar10.Data = local_58.Data;
      }
      uVar7 = (longlong)(int)uVar16 - 1U & uVar18;
      uVar18 = uVar18 + 1;
      *(undefined4 *)((longlong)FVar10.Data + uVar7 * 4) = 0xffffffff;
      uVar19 = uVar19 - 1;
    } while (uVar19 != 0);
  }
LAB_149323f4a:
  uVar9 = 1;
  uVar16 = 0;
  if (local_50 != 0) {
    uStack_1bc = 1;
    local_1c0 = 0;
    pTStack_1b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
    uStack_1ac = 0;
    uStack_1a8 = 0;
    uVar19 = uVar22;
    if (local_70 != 0) {
      FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
      if (local_78 != (ForElementType<unsigned_int>)0x0) {
        FVar15 = local_78;
      }
      uVar12 = *(uint *)FVar15;
      uVar18 = uVar22;
      while (uVar12 == 0) {
        uStack_1a8 = (int)uVar18 + 0x20;
        uVar18 = (ulonglong)uStack_1a8;
        iVar5 = (int)uVar19;
        local_1c0 = iVar5 + 1;
        uVar19 = (ulonglong)local_1c0;
        if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_1c0)
        goto LAB_14932400d;
        uVar12 = ((uint *)((longlong)FVar15 + 4))[iVar5];
      }
      uStack_1bc = -uVar12 & uVar12;
      uVar19 = (ulonglong)uStack_1bc * 2 + 1;
      lVar11 = 0x3f;
      if (uVar19 != 0) {
        for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      local_1a0 = (int)lVar11;
      uStack_1ac = (uStack_1a8 - 1) + local_1a0;
      uVar19 = (ulonglong)uStack_1ac;
      if ((int)local_70 < (int)uStack_1ac) {
LAB_14932400d:
        uVar19 = (ulonglong)local_70;
        uStack_1ac = local_70;
      }
    }
    local_1b0 = 0xffffffff;
    local_160 = (longlong *)local_98;
    local_158._padding_ = CONCAT44(uStack_1bc,local_1c0);
    local_158.CurrentBitIndex = uStack_1ac;
    local_158.UnvisitedBitMask = 0xffffffff;
    local_158._28_4_ = uStack_1a4;
    local_158.BaseBitIndex = uStack_1a8;
    local_158.Array = pTStack_1b8;
    if ((int)uVar19 < (int)local_70) {
      do {
        piVar20 = (int *)((longlong)(int)uVar19 * 0x20 + *local_160);
        uVar12 = piVar20[1];
        uVar13 = *piVar20 - uVar12 ^ uVar12 >> 0xd;
        uVar21 = (-0x61c88647 - uVar13) - uVar12 ^ uVar13 << 8;
        uVar17 = (uVar12 - uVar21) - uVar13 ^ uVar21 >> 0xd;
        uVar13 = (uVar13 - uVar17) - uVar21 ^ uVar17 >> 0xc;
        uVar12 = (uVar21 - uVar13) - uVar17 ^ uVar13 << 0x10;
        uVar17 = (uVar17 - uVar12) - uVar13 ^ uVar12 >> 5;
        uVar21 = (uVar13 - uVar17) - uVar12 ^ uVar17 >> 3;
        uVar12 = (uVar12 - uVar21) - uVar17 ^ uVar21 << 10;
        uVar12 = ((uVar17 - uVar12) - uVar21 ^ uVar12 >> 0xf) & local_50 - 1;
        piVar20[7] = uVar12;
        FVar10.Data = (FScriptContainerElement *)local_60;
        if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
          FVar10.Data = local_58.Data;
        }
        uVar18 = (longlong)(int)local_50 - 1U & (longlong)(int)uVar12;
        piVar20[6] = *(int *)((longlong)FVar10.Data + uVar18 * 4);
        *(int *)((longlong)FVar10.Data + uVar18 * 4) = (int)uVar19;
        local_158.UnvisitedBitMask = local_158.UnvisitedBitMask & ~local_158._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_158);
        uVar19 = (ulonglong)(uint)local_158.CurrentBitIndex;
      } while (local_158.CurrentBitIndex < (local_158.Array)->NumBits);
    }
  }
  uVar12 = local_70;
  uStack_11c = uVar16;
  local_118 = uVar16;
  if (local_70 != 0) {
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    uVar21 = *(uint *)FVar15;
    uVar19 = uVar22;
    uVar18 = uVar22;
    local_118 = 0;
    uVar16 = 0;
    while (uVar21 == 0) {
      iVar5 = (int)uVar19;
      local_118 = (int)uVar18 + 0x20;
      uVar18 = (ulonglong)local_118;
      uVar16 = iVar5 + 1;
      uVar19 = (ulonglong)uVar16;
      uStack_11c = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar16)
      goto LAB_1493241af;
      uVar21 = ((uint *)((longlong)FVar15 + 4))[iVar5];
    }
    uVar9 = -uVar21 & uVar21;
    uVar19 = (ulonglong)uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_19c = (int)lVar11;
    uStack_11c = (local_118 - 1) + local_19c;
    if ((int)local_70 < (int)uStack_11c) {
      uStack_11c = local_70;
    }
  }
LAB_1493241af:
  local_138 = (longlong *)local_98;
  uStack_114 = local_9c;
  local_128 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
  iStack_110 = local_98._8_4_ - local_64;
  uVar21 = local_70 & 0xffffffe0;
  uStack_120 = 0xffffffff;
  TStack_100.CurrentBitIndex = uStack_11c;
  TStack_100.UnvisitedBitMask = 0xffffffff;
  TStack_100._padding_ = CONCAT44(uVar9,uVar16);
  iVar5 = (int)local_70 >> 5;
  TStack_100._28_4_ = local_9c;
  TStack_100.BaseBitIndex = local_118;
  uStack_e0 = CONCAT44(uStack_10c,iStack_110);
  bVar8 = (byte)local_70;
  uStack_130 = uVar16;
  uStack_12c = uVar9;
  local_108 = local_138;
  TStack_100.Array = local_128;
  if (((int)local_70 < 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar4)) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (uVar12 != local_70) {
    FVar15 = (ForElementType<unsigned_int>)((longlong)local_98 + 0x10);
    if (local_78 != (ForElementType<unsigned_int>)0x0) {
      FVar15 = local_78;
    }
    uVar16 = -1 << (bVar8 & 0x1f) & *(uint *)((longlong)FVar15 + (longlong)iVar5 * 4);
    while (uVar16 == 0) {
      lVar11 = (longlong)iVar5;
      uVar21 = uVar21 + 0x20;
      iVar5 = iVar5 + 1;
      uVar12 = local_70;
      if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar5)
      goto LAB_1493242d0;
      uVar16 = ((uint *)((longlong)FVar15 + 4))[lVar11];
    }
    uVar19 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar19 != 0) {
      for (; uVar19 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_198 = (int)lVar11;
    uVar12 = (uVar21 - 1) + local_198;
    if ((int)local_70 < (int)uVar12) {
      uVar12 = local_70;
    }
  }
LAB_1493242d0:
  while( true ) {
    plVar2 = local_108;
    if ((int)local_108[1] - *(int *)((longlong)local_108 + 0x34) != (int)uStack_e0) {
      local_1d7[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1d7);
    }
    if (((TStack_100.CurrentBitIndex == uVar12) &&
        (TStack_100.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) &&
       (plVar2 == (longlong *)local_98)) break;
    lVar11 = *plVar2 + (longlong)TStack_100.CurrentBitIndex * 0x20;
    if ((param_1->RibbonLinkOrderFloatData).bIsValid == false) {
      local_170 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l7::<lambda_2>_>_>
                (*(uint **)(lVar11 + 8),*(int *)(lVar11 + 0x10),local_1d8,(<lambda_2> *)&local_170);
    }
    else {
      local_178 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l5::<lambda_1>_>_>
                (*(uint **)(lVar11 + 8),*(int *)(lVar11 + 0x10),local_1d8,(<lambda_1> *)&local_178);
    }
    local_d8 = *(uint **)(lVar11 + 8);
    iVar5 = *(int *)(lVar11 + 0x10);
    if ((iVar5 < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    local_c8[0]._12_4_ = uStack_cc;
    local_c8[0].ArrayNum = iVar5;
    local_c8[0].DataPtr = local_d8;
    iStack_d0 = iVar5;
    GenerateVertexBufferForRibbonPart<0,0,1>(local_168,param_1,local_c8,(uint)uVar22,param_3);
    uVar22 = (ulonglong)((uint)uVar22 + 1);
    TStack_100.UnvisitedBitMask = TStack_100.UnvisitedBitMask & ~TStack_100._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_100);
  }
  local_50 = 0;
  if ((ForElementType<FSetElementId>)local_58.Data != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free(local_58.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FNiagaraID,TArray<unsigned_int,TMemStackAllocator<0>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_98);
  return;
}

// GenerateVertexBufferForRibbonPart<1,1,1> @ 149324460

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FNiagaraRendererRibbons::GenerateVertexBufferForRibbonPart<1,1,1>
          (FNiagaraRendererRibbons *this,FNiagaraGenerationInputDataCPUAccessors *param_1,
          TArrayView<unsigned_int_const_,int> *param_2,uint param_3,
          FNiagaraRibbonCPUGeneratedVertexData *param_4)

{
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *this_00;
  int *piVar1;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  FNiagaraDataSetReaderFloat<float> *this_01;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ForElementType<FRibbonMultiRibbonInfo> FVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  uint local_res20 [2];
  uint local_204;
  float local_200;
  float local_1fc;
  longlong local_1f8;
  float local_1f0;
  float local_1e8;
  float local_1e0;
  float fStack_1dc;
  float local_1d8;
  float local_1d0;
  float fStack_1cc;
  float local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float local_150;
  float local_14c;
  float fStack_148;
  float local_144;
  FNiagaraDataSetReaderFloat<float> *local_140;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *local_138;
  FNiagaraDataSetReaderFloat<float> *local_130;
  undefined8 local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  FNiagaraDataSetReaderFloat<float> *local_100;
  undefined1 local_f8 [184];
  
  this_00 = &param_1->PosData;
  this_01 = &param_1->SizeData;
  local_130 = &param_1->AgeData;
  local_140 = &param_1->TwistData;
  uVar3 = (param_4->SortedIndices).ArrayNum;
  local_res20[0] = param_3;
  local_138 = this_00;
  local_100 = this_01;
  if ((param_2->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
            (this_00,(FNiagaraPosition *)local_f8,*param_2->DataPtr);
  fVar20 = __real_3f800000;
  uVar15 = 1;
  iVar8 = param_2->ArrayNum;
  fVar24 = 0.0;
  _local_1d0 = local_f8._0_8_;
  uVar5 = _local_1d0;
  _local_1e0 = local_f8._0_8_;
  local_1f8 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
  local_1c8 = (float)local_f8._8_4_;
  local_1d8 = (float)local_f8._8_4_;
  local_1e8 = 0.0;
  local_200 = 0.0;
  local_1fc = 0.0;
  local_1f0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar29 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  uVar30 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar31 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (1 < iVar8) {
    lVar18 = 4;
    fStack_1cc = SUB84(local_f8._0_8_,4);
    fVar23 = fStack_1cc;
    local_1d0 = (float)local_f8._0_8_;
    fVar27 = local_1d0;
    _local_1d0 = uVar5;
    do {
      uVar19 = 0;
      if ((int)uVar15 < iVar8) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = *(int *)(lVar18 + (longlong)param_2->DataPtr);
      FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                (this_00,(FNiagaraPosition *)&local_158,iVar8);
      uVar29 = local_158 - fVar27;
      fStack_1dc = fStack_154;
      local_1e0 = local_158;
      uVar30 = fStack_154 - fVar23;
      uVar31 = local_150 - (float)local_f8._8_4_;
      local_1d8 = local_150;
      fVar24 = SQRT((float)uVar30 * (float)uVar30 + (float)uVar29 * (float)uVar29 +
                    (float)uVar31 * (float)uVar31);
      local_200 = FNiagaraDataSetReaderFloat<float>::Get(local_140,iVar8);
      local_1fc = FNiagaraDataSetReaderFloat<float>::Get(this_01,iVar8);
      if (GNiagaraRibbonMinSegmentLength < fVar24) {
        fVar27 = fVar20 / fVar24;
        uVar29 = fVar27 * (float)uVar29;
        uVar30 = fVar27 * (float)uVar30;
        uVar31 = fVar27 * (float)uVar31;
        pFVar9 = (FScriptContainerElement *)
                 TArrayView<unsigned_int_const_,int>::operator[](param_2,0);
        pFVar14 = (param_4->SortedIndices).AllocatorInstance.Data;
        if (((pFVar14 <= pFVar9) &&
            (pFVar9 < pFVar14 + (longlong)(param_4->SortedIndices).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->SortedIndices).ArrayNum;
        piVar1 = &(param_4->SortedIndices).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_4->SortedIndices).AllocatorInstance,piVar1);
        }
        (param_4->SortedIndices).ArrayNum = iVar8 + 1;
        *(uint *)((param_4->SortedIndices).AllocatorInstance.Data + (longlong)iVar8 * 4) =
             *(uint *)pFVar9;
        pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data;
        uStack_17c = 0;
        local_188 = (float)uVar29;
        fStack_184 = (float)uVar30;
        fStack_180 = (float)uVar31;
        if (((pFVar14 <= (FScriptContainerElement *)&local_188) &&
            ((FScriptContainerElement *)&local_188 <
             pFVar14 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->TangentAndDistances).ArrayNum;
        piVar1 = &(param_4->TangentAndDistances).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
        }
        (param_4->TangentAndDistances).ArrayNum = iVar8 + 1;
        pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
        *(ulonglong *)pFVar14 = CONCAT44(fStack_184,local_188);
        *(ulonglong *)(pFVar14 + 8) = CONCAT44(uStack_17c,fStack_180);
        pFVar14 = (param_4->MultiRibbonIndices).AllocatorInstance.Data;
        if (((pFVar14 <= (FScriptContainerElement *)local_res20) &&
            ((FScriptContainerElement *)local_res20 <
             pFVar14 + (longlong)(param_4->MultiRibbonIndices).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->MultiRibbonIndices).ArrayNum;
        piVar1 = &(param_4->MultiRibbonIndices).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_4->MultiRibbonIndices).AllocatorInstance,piVar1);
        }
        (param_4->MultiRibbonIndices).ArrayNum = iVar8 + 1;
        *(uint *)((param_4->MultiRibbonIndices).AllocatorInstance.Data + (longlong)iVar8 * 4) =
             local_res20[0];
        break;
      }
      iVar8 = param_2->ArrayNum;
      uVar15 = uVar15 + 1;
      lVar18 = lVar18 + 4;
      fVar24 = 0.0;
    } while ((int)uVar15 < iVar8);
  }
  fVar27 = 0.0;
  iVar8 = param_2->ArrayNum;
  uVar19 = uVar15 + 1;
  fVar23 = 0.0;
  if ((int)uVar19 < iVar8) {
    lVar18 = (longlong)(int)uVar19 * 4;
    lVar11 = (longlong)(int)uVar15 * 4;
    fVar22 = local_1d8;
    fVar27 = 0.0;
    do {
      uVar7 = 0;
      if ((int)uVar19 < iVar8) {
        uVar7 = ~uVar19 >> 0x1f;
      }
      local_1f8 = lVar18;
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar17 = *(int *)(lVar18 + (longlong)param_2->DataPtr);
      FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                (local_138,(FNiagaraPosition *)&local_14c,iVar17);
      fVar23 = local_14c - local_1e0;
      fVar25 = fStack_148 - fStack_1dc;
      fStack_1cc = fStack_148;
      local_1d0 = local_14c;
      fVar26 = local_144 - fVar22;
      local_1a4 = local_144;
      fVar33 = fVar25 * fVar25 + fVar23 * fVar23 + fVar26 * fVar26;
      fVar32 = SQRT(fVar33);
      local_1ac = FNiagaraDataSetReaderFloat<float>::Get(local_140,iVar17);
      local_1a8 = FNiagaraDataSetReaderFloat<float>::Get(local_100,iVar17);
      if ((GNiagaraRibbonMinSegmentLength < fVar32) || (uVar19 == iVar8 - 1U)) {
        fVar28 = fVar32;
        if (fVar32 <= GNiagaraRibbonMinSegmentLength) {
          fVar28 = GNiagaraRibbonMinSegmentLength;
        }
        fVar28 = fVar20 / fVar28;
        local_1b0 = fVar28 * fVar25;
        local_1b4 = fVar28 * fVar23;
        fVar25 = local_1b0 + (float)uVar30;
        fVar28 = fVar28 * fVar26;
        fVar22 = local_1b4 + (float)uVar29;
        local_120 = fVar28 + (float)uVar31;
        fVar23 = fVar25 * fVar25 + fVar22 * fVar22 + local_120 * local_120;
        if (fVar23 == fVar20) {
          local_1c0 = CONCAT44(fVar25,fVar22);
          uVar21 = fVar22;
          local_1b8 = local_120;
        }
        else if (__real_322bcc77 <= fVar23) {
          fVar23 = __real_3f800000 / SQRT(fVar23);
          local_1b8 = fVar23 * local_120;
          uVar21 = fVar23 * fVar22;
          local_1c0 = CONCAT44(fVar23 * fVar25,(undefined4)local_1c0);
        }
        else {
          local_1c0 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
          local_1b8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar21 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
        local_128 = CONCAT44(fVar25,fVar22);
        pTVar13 = &param_4->SortedIndices;
        fVar23 = (this->GenerationConfig).CurveTension;
        if (__real_3f7d70a4 <= fVar23) {
          fVar23 = __real_3f7d70a4;
        }
        uVar7 = 0;
        if ((int)uVar15 < iVar8) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        fVar23 = fVar20 - fVar23;
        fVar27 = fVar27 + fVar24;
        fVar22 = local_1c0._4_4_ * fVar23;
        fVar24 = fVar23 * (float)uVar21;
        fVar23 = local_1b8 * fVar23;
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = (pTVar13->AllocatorInstance).Data;
        pFVar9 = (FScriptContainerElement *)((longlong)param_2->DataPtr + lVar11);
        if (((pFVar14 <= pFVar9) &&
            (pFVar9 < pFVar14 + (longlong)(param_4->SortedIndices).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->SortedIndices).ArrayNum;
        piVar1 = &(param_4->SortedIndices).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,piVar1);
        }
        (param_4->SortedIndices).ArrayNum = iVar8 + 1;
        *(undefined4 *)((pTVar13->AllocatorInstance).Data + (longlong)iVar8 * 4) =
             *(undefined4 *)pFVar9;
        pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data;
        local_178 = fVar24;
        fStack_174 = fVar22;
        fStack_170 = fVar23;
        fStack_16c = fVar27;
        if (((pFVar14 <= (FScriptContainerElement *)&local_178) &&
            ((FScriptContainerElement *)&local_178 <
             pFVar14 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->TangentAndDistances).ArrayNum;
        piVar1 = &(param_4->TangentAndDistances).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
        }
        (param_4->TangentAndDistances).ArrayNum = iVar8 + 1;
        pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
        *(ulonglong *)pFVar14 = CONCAT44(fStack_174,local_178);
        *(ulonglong *)(pFVar14 + 8) = CONCAT44(fStack_16c,fStack_170);
        pFVar14 = (param_4->MultiRibbonIndices).AllocatorInstance.Data;
        if (((pFVar14 <= (FScriptContainerElement *)local_res20) &&
            ((FScriptContainerElement *)local_res20 <
             pFVar14 + (longlong)(param_4->MultiRibbonIndices).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->MultiRibbonIndices).ArrayNum;
        piVar1 = &(param_4->MultiRibbonIndices).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_4->MultiRibbonIndices).AllocatorInstance,piVar1);
        }
        uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        (param_4->MultiRibbonIndices).ArrayNum = iVar8 + 1;
        *(uint *)((param_4->MultiRibbonIndices).AllocatorInstance.Data + (longlong)iVar8 * 4) =
             local_res20[0];
        param_4->TotalSegmentLength = fVar32 + param_4->TotalSegmentLength;
        param_4->AverageSegmentLength = fVar33 + param_4->AverageSegmentLength;
        fVar22 = local_1b4 * (float)uVar29 + local_1b0 * (float)uVar30 + fVar28 * (float)uVar31;
        fVar23 = (float)((uint)fVar22 & uVar15);
        fVar24 = fVar20 - fVar23;
        if (fVar24 <= local_1e8) {
          fVar24 = local_1e8;
        }
        fVar24 = SQRT(fVar24) * (__real_3fc90fdb - fVar23 * ___real_3e20574b);
        if (fVar22 < local_1e8) {
          fVar24 = __real_40490fdb - fVar24;
        }
        fVar23 = local_1ac - local_200;
        local_200 = local_1ac;
        param_4->AverageSegmentAngle = fVar24 * fVar32 + param_4->AverageSegmentAngle;
        param_4->AverageTwistAngle =
             (float)((uint)fVar23 & uVar15) * fVar32 + param_4->AverageTwistAngle;
        fVar24 = fVar32 * local_1fc;
        local_1fc = local_1a8;
        param_4->AverageWidth = fVar24 + param_4->AverageWidth;
        _local_1e0 = _local_1d0;
        lVar11 = local_1f8;
        fVar24 = fVar32;
        fVar22 = local_1a4;
        uVar29 = local_1b4;
        uVar30 = local_1b0;
        uVar15 = uVar19;
        uVar31 = fVar28;
      }
      iVar8 = param_2->ArrayNum;
      lVar18 = local_1f8 + 4;
      uVar19 = uVar19 + 1;
      fVar23 = local_1e8;
      local_1f8 = lVar18;
    } while ((int)uVar19 < iVar8);
  }
  pTVar13 = &param_4->SortedIndices;
  if (fVar23 < fVar24) {
    fVar27 = fVar27 + fVar24;
    pFVar9 = (FScriptContainerElement *)
             TArrayView<unsigned_int_const_,int>::operator[](param_2,uVar15);
    pFVar14 = (pTVar13->AllocatorInstance).Data;
    if (((pFVar14 <= pFVar9) && (pFVar9 < pFVar14 + (longlong)(param_4->SortedIndices).ArrayMax * 4)
        ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (param_4->SortedIndices).ArrayNum;
    piVar1 = &(param_4->SortedIndices).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar13->AllocatorInstance,piVar1);
      (param_4->SortedIndices).ArrayNum = iVar8;
    }
    (param_4->SortedIndices).ArrayNum = iVar8 + 1;
    *(uint *)((pTVar13->AllocatorInstance).Data + (longlong)iVar8 * 4) = *(uint *)pFVar9;
    pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data;
    local_168 = (float)uVar29;
    fStack_164 = (float)uVar30;
    fStack_160 = (float)uVar31;
    fStack_15c = fVar27;
    if (((pFVar14 <= (FScriptContainerElement *)&local_168) &&
        ((FScriptContainerElement *)&local_168 <
         pFVar14 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (param_4->TangentAndDistances).ArrayNum;
    piVar1 = &(param_4->TangentAndDistances).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
    }
    (param_4->TangentAndDistances).ArrayNum = iVar8 + 1;
    pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(ulonglong *)pFVar14 = CONCAT44(fStack_164,local_168);
    *(ulonglong *)(pFVar14 + 8) = CONCAT44(fStack_15c,fStack_160);
    pFVar14 = (param_4->MultiRibbonIndices).AllocatorInstance.Data;
    if (((pFVar14 <= (FScriptContainerElement *)local_res20) &&
        ((FScriptContainerElement *)local_res20 <
         pFVar14 + (longlong)(param_4->MultiRibbonIndices).ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (param_4->MultiRibbonIndices).ArrayNum;
    piVar1 = &(param_4->MultiRibbonIndices).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(param_4->MultiRibbonIndices).AllocatorInstance,piVar1);
    }
    (param_4->MultiRibbonIndices).ArrayNum = iVar8 + 1;
    *(uint *)((param_4->MultiRibbonIndices).AllocatorInstance.Data + (longlong)iVar8 * 4) =
         local_res20[0];
  }
  iVar8 = (param_4->SortedIndices).ArrayNum;
  uVar15 = iVar8 - 1;
  iVar17 = uVar15 - uVar3;
  if (0 < iVar17) {
    lVar18 = (longlong)(int)local_res20[0];
    uVar19 = 0;
    if ((int)local_res20[0] < (param_4->RibbonInfoLookup).ArrayNum) {
      uVar19 = ~local_res20[0] >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar16 = (param_4->RibbonInfoLookup).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<FRibbonMultiRibbonInfo>)0x0) {
      FVar16 = (ForElementType<FRibbonMultiRibbonInfo>)&param_4->RibbonInfoLookup;
    }
    lVar18 = lVar18 * 0x58;
    puVar10 = TArrayView<unsigned_int_const_,int>::operator[](param_2,0);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
              (local_138,(FNiagaraPosition *)&local_11c,*puVar10);
    *(double *)((longlong)FVar16 + lVar18) = (double)local_11c;
    *(double *)((uchar *)((longlong)FVar16 + 8) + lVar18) = (double)local_118;
    *(double *)((uchar *)((longlong)FVar16 + 0x10) + lVar18) = (double)local_114;
    puVar10 = TArrayView<unsigned_int_const_,int>::Last(param_2,0);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
              (local_138,(FNiagaraPosition *)&local_110,*puVar10);
    *(double *)((uchar *)((longlong)FVar16 + 0x18) + lVar18) = (double)local_110;
    *(double *)((uchar *)((longlong)FVar16 + 0x20) + lVar18) = (double)local_10c;
    *(double *)((uchar *)((longlong)FVar16 + 0x28) + lVar18) = (double)local_108;
    *(int *)((uchar *)((longlong)FVar16 + 0x30) + lVar18) = (param_4->SegmentData).ArrayNum;
    *(int *)((uchar *)((longlong)FVar16 + 0x34) + lVar18) = iVar17;
    uVar19 = uVar3;
    if (1 < iVar17) {
      pTVar2 = &param_4->TangentAndDistances;
      uVar7 = 0;
      if ((int)uVar3 < (param_4->TangentAndDistances).ArrayNum) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x10;
      uVar12 = uVar3 + 1;
      uVar7 = 0;
      if ((int)uVar12 < (param_4->TangentAndDistances).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      fVar24 = *(float *)(pFVar14 + 8);
      lVar11 = (longlong)(int)uVar12;
      fVar22 = *(float *)(pFVar9 + lVar11 * 0x10 + 4);
      fVar25 = *(float *)(pFVar9 + lVar11 * 0x10 + 8);
      fVar26 = fVar22 * *(float *)(pFVar14 + 4) +
               *(float *)(pFVar9 + lVar11 * 0x10) * *(float *)pFVar14;
      fVar26 = (fVar24 + fVar24) * fVar25 + fVar26 + fVar26;
      *(float *)pFVar14 = fVar26 * *(float *)pFVar14 - *(float *)(pFVar9 + lVar11 * 0x10);
      *(float *)(pFVar14 + 4) = fVar26 * *(float *)(pFVar14 + 4) - fVar22;
      *(float *)(pFVar14 + 8) = fVar26 * fVar24 - fVar25;
      uVar7 = 0;
      if ((int)uVar15 < (param_4->TangentAndDistances).ArrayNum) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x10;
      uVar7 = iVar8 - 2;
      uVar12 = 0;
      if ((int)uVar7 < (param_4->TangentAndDistances).ArrayNum) {
        uVar12 = ~uVar7 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar24 = *(float *)(pFVar14 + 8);
      lVar11 = (longlong)(int)uVar7;
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      fVar22 = *(float *)(pFVar9 + lVar11 * 0x10 + 4);
      fVar25 = *(float *)(pFVar9 + lVar11 * 0x10 + 8);
      fVar26 = fVar22 * *(float *)(pFVar14 + 4) +
               *(float *)(pFVar9 + lVar11 * 0x10) * *(float *)pFVar14;
      fVar26 = (fVar24 + fVar24) * fVar25 + fVar26 + fVar26;
      *(float *)pFVar14 = fVar26 * *(float *)pFVar14 - *(float *)(pFVar9 + lVar11 * 0x10);
      *(float *)(pFVar14 + 4) = fVar26 * *(float *)(pFVar14 + 4) - fVar22;
      *(float *)(pFVar14 + 8) = fVar26 * fVar24 - fVar25;
    }
    for (; (int)uVar19 < (int)uVar15; uVar19 = uVar19 + 1) {
      pFVar14 = (param_4->SegmentData).AllocatorInstance.Data;
      local_204 = uVar19;
      if (((pFVar14 <= (FScriptContainerElement *)&local_204) &&
          ((FScriptContainerElement *)&local_204 <
           pFVar14 + (longlong)(param_4->SegmentData).ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (param_4->SegmentData).ArrayNum;
      if (iVar8 == (param_4->SegmentData).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)param_4,&(param_4->SegmentData).ArrayMax);
        (param_4->SegmentData).ArrayNum = iVar8;
      }
      (param_4->SegmentData).ArrayNum = iVar8 + 1;
      *(uint *)((param_4->SegmentData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_204;
    }
    fVar22 = fVar20;
    fVar25 = fVar20;
    fVar24 = fVar23;
    if ((this->GenerationConfig).bHasCustomU0Data == 0) {
      CalculateUVScaleAndOffsets<unsigned_int>
                (&this->UV0Settings,&param_4->SortedIndices,&param_4->TangentAndDistances,local_130,
                 uVar3,uVar15,iVar17,fVar27,&local_19c,&local_1a0,&local_198);
      fVar22 = local_19c;
      fVar25 = local_198;
      fVar24 = local_1a0;
    }
    fVar26 = fVar20;
    if ((this->GenerationConfig).bHasCustomU1Data == 0) {
      CalculateUVScaleAndOffsets<unsigned_int>
                (&this->UV1Settings,&param_4->SortedIndices,&param_4->TangentAndDistances,local_130,
                 uVar3,uVar15,iVar17,fVar27,&local_190,&local_194,&local_18c);
      fVar20 = local_18c;
      fVar26 = local_190;
      fVar23 = local_194;
    }
    *(float *)((uchar *)((longlong)FVar16 + 0x38) + lVar18) = fVar22;
    *(float *)((uchar *)((longlong)FVar16 + 0x3c) + lVar18) = fVar24;
    *(float *)((uchar *)((longlong)FVar16 + 0x40) + lVar18) = fVar25;
    *(float *)((uchar *)((longlong)FVar16 + 0x44) + lVar18) = fVar26;
    *(float *)((uchar *)((longlong)FVar16 + 0x48) + lVar18) = fVar23;
    *(float *)((uchar *)((longlong)FVar16 + 0x4c) + lVar18) = fVar20;
    *(uint *)((uchar *)((longlong)FVar16 + 0x50) + lVar18) = uVar3;
    *(uint *)((uchar *)((longlong)FVar16 + 0x54) + lVar18) = uVar15;
  }
  return;
}

// GenerateVertexBufferForRibbonPart<1,1,0> @ 149325770

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FNiagaraRendererRibbons::GenerateVertexBufferForRibbonPart<1,1,0>
          (FNiagaraRendererRibbons *this,FNiagaraGenerationInputDataCPUAccessors *param_1,
          TArrayView<unsigned_int_const_,int> *param_2,uint param_3,
          FNiagaraRibbonCPUGeneratedVertexData *param_4)

{
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *this_00;
  int *piVar1;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  FNiagaraDataSetReaderFloat<float> *this_01;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  ForElementType<FRibbonMultiRibbonInfo> FVar16;
  int iVar17;
  longlong lVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  uint local_214;
  float local_210;
  float local_20c;
  longlong local_208;
  float local_200;
  float local_1f8;
  float local_1f0;
  float fStack_1ec;
  float local_1e8;
  float local_1e0;
  float fStack_1dc;
  float local_1d8;
  undefined8 local_1d0;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *local_198;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float local_150;
  float local_14c;
  float fStack_148;
  float local_144;
  FNiagaraDataSetReaderFloat<float> *local_140;
  FNiagaraDataSetReaderFloat<float> *local_138;
  undefined8 local_130;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  FNiagaraDataSetReaderFloat<float> *local_108;
  undefined1 local_100 [192];
  
  this_00 = &param_1->PosData;
  this_01 = &param_1->SizeData;
  local_138 = &param_1->AgeData;
  local_140 = &param_1->TwistData;
  uVar3 = (param_4->SortedIndices).ArrayNum;
  local_198 = this_00;
  local_108 = this_01;
  if ((param_2->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
            (this_00,(FNiagaraPosition *)local_100,*param_2->DataPtr);
  fVar20 = __real_3f800000;
  uVar15 = 1;
  iVar8 = param_2->ArrayNum;
  fVar23 = 0.0;
  _local_1e0 = local_100._0_8_;
  uVar5 = _local_1e0;
  _local_1f0 = local_100._0_8_;
  local_208 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
  local_1d8 = (float)local_100._8_4_;
  local_1e8 = (float)local_100._8_4_;
  local_1f8 = 0.0;
  local_210 = 0.0;
  local_20c = 0.0;
  local_200 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar27 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar29 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (1 < iVar8) {
    lVar18 = 4;
    fStack_1dc = SUB84(local_100._0_8_,4);
    fVar24 = fStack_1dc;
    local_1e0 = (float)local_100._0_8_;
    fVar26 = local_1e0;
    _local_1e0 = uVar5;
    do {
      uVar19 = 0;
      if ((int)uVar15 < iVar8) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = *(int *)(lVar18 + (longlong)param_2->DataPtr);
      FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                (this_00,(FNiagaraPosition *)&local_158,iVar8);
      uVar27 = local_158 - fVar26;
      fStack_1ec = fStack_154;
      local_1f0 = local_158;
      uVar28 = fStack_154 - fVar24;
      uVar29 = local_150 - (float)local_100._8_4_;
      local_1e8 = local_150;
      fVar23 = SQRT((float)uVar28 * (float)uVar28 + (float)uVar27 * (float)uVar27 +
                    (float)uVar29 * (float)uVar29);
      local_210 = FNiagaraDataSetReaderFloat<float>::Get(local_140,iVar8);
      local_20c = FNiagaraDataSetReaderFloat<float>::Get(this_01,iVar8);
      if (GNiagaraRibbonMinSegmentLength < fVar23) {
        fVar26 = fVar20 / fVar23;
        uVar27 = fVar26 * (float)uVar27;
        uVar28 = fVar26 * (float)uVar28;
        uVar29 = fVar26 * (float)uVar29;
        pFVar9 = (FScriptContainerElement *)
                 TArrayView<unsigned_int_const_,int>::operator[](param_2,0);
        pFVar14 = (param_4->SortedIndices).AllocatorInstance.Data;
        if (((pFVar14 <= pFVar9) &&
            (pFVar9 < pFVar14 + (longlong)(param_4->SortedIndices).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->SortedIndices).ArrayNum;
        piVar1 = &(param_4->SortedIndices).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_4->SortedIndices).AllocatorInstance,piVar1);
        }
        (param_4->SortedIndices).ArrayNum = iVar8 + 1;
        *(uint *)((param_4->SortedIndices).AllocatorInstance.Data + (longlong)iVar8 * 4) =
             *(uint *)pFVar9;
        pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data;
        uStack_17c = 0;
        local_188 = (float)uVar27;
        fStack_184 = (float)uVar28;
        fStack_180 = (float)uVar29;
        if (((pFVar14 <= (FScriptContainerElement *)&local_188) &&
            ((FScriptContainerElement *)&local_188 <
             pFVar14 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->TangentAndDistances).ArrayNum;
        piVar1 = &(param_4->TangentAndDistances).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
        }
        (param_4->TangentAndDistances).ArrayNum = iVar8 + 1;
        pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
        *(ulonglong *)pFVar14 = CONCAT44(fStack_184,local_188);
        *(ulonglong *)(pFVar14 + 8) = CONCAT44(uStack_17c,fStack_180);
        break;
      }
      iVar8 = param_2->ArrayNum;
      uVar15 = uVar15 + 1;
      lVar18 = lVar18 + 4;
      fVar23 = 0.0;
    } while ((int)uVar15 < iVar8);
  }
  fVar26 = 0.0;
  iVar8 = param_2->ArrayNum;
  uVar19 = uVar15 + 1;
  fVar24 = 0.0;
  if ((int)uVar19 < iVar8) {
    lVar18 = (longlong)(int)uVar19 * 4;
    lVar11 = (longlong)(int)uVar15 * 4;
    fVar21 = local_1e8;
    fVar26 = 0.0;
    do {
      uVar7 = 0;
      if ((int)uVar19 < iVar8) {
        uVar7 = ~uVar19 >> 0x1f;
      }
      local_208 = lVar18;
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar17 = *(int *)(lVar18 + (longlong)param_2->DataPtr);
      FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                (local_198,(FNiagaraPosition *)&local_14c,iVar17);
      fVar32 = local_14c - local_1f0;
      fVar24 = fStack_148 - fStack_1ec;
      fStack_1dc = fStack_148;
      local_1e0 = local_14c;
      fVar25 = local_144 - fVar21;
      local_1b4 = local_144;
      fVar31 = fVar24 * fVar24 + fVar32 * fVar32 + fVar25 * fVar25;
      fVar30 = SQRT(fVar31);
      local_1bc = FNiagaraDataSetReaderFloat<float>::Get(local_140,iVar17);
      local_1b8 = FNiagaraDataSetReaderFloat<float>::Get(local_108,iVar17);
      if ((GNiagaraRibbonMinSegmentLength < fVar30) || (uVar19 == iVar8 - 1U)) {
        fVar21 = fVar30;
        if (fVar30 <= GNiagaraRibbonMinSegmentLength) {
          fVar21 = GNiagaraRibbonMinSegmentLength;
        }
        fVar21 = fVar20 / fVar21;
        local_1c4 = fVar24 * fVar21;
        local_1c0 = fVar25 * fVar21;
        fVar32 = fVar32 * fVar21;
        fVar25 = local_1c4 + (float)uVar28;
        local_128 = local_1c0 + (float)uVar29;
        fVar21 = fVar32 + (float)uVar27;
        fVar24 = fVar25 * fVar25 + fVar21 * fVar21 + local_128 * local_128;
        if (fVar24 == fVar20) {
          local_1d0 = CONCAT44(fVar25,fVar21);
          uVar22 = fVar21;
          local_1c8 = local_128;
        }
        else if (__real_322bcc77 <= fVar24) {
          fVar24 = __real_3f800000 / SQRT(fVar24);
          local_1c8 = fVar24 * local_128;
          uVar22 = fVar24 * fVar21;
          local_1d0 = CONCAT44(fVar24 * fVar25,(undefined4)local_1d0);
        }
        else {
          local_1d0 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
          local_1c8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar22 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
        local_130 = CONCAT44(fVar25,fVar21);
        pTVar13 = &param_4->SortedIndices;
        fVar24 = (this->GenerationConfig).CurveTension;
        if (__real_3f7d70a4 <= fVar24) {
          fVar24 = __real_3f7d70a4;
        }
        uVar7 = 0;
        if ((int)uVar15 < iVar8) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        fVar24 = fVar20 - fVar24;
        fVar26 = fVar26 + fVar23;
        fVar21 = local_1d0._4_4_ * fVar24;
        fVar23 = fVar24 * (float)uVar22;
        fVar24 = local_1c8 * fVar24;
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar14 = (pTVar13->AllocatorInstance).Data;
        pFVar9 = (FScriptContainerElement *)((longlong)param_2->DataPtr + lVar11);
        if (((pFVar14 <= pFVar9) &&
            (pFVar9 < pFVar14 + (longlong)(param_4->SortedIndices).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->SortedIndices).ArrayNum;
        piVar1 = &(param_4->SortedIndices).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,piVar1);
        }
        (param_4->SortedIndices).ArrayNum = iVar8 + 1;
        *(undefined4 *)((pTVar13->AllocatorInstance).Data + (longlong)iVar8 * 4) =
             *(undefined4 *)pFVar9;
        pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data;
        local_178 = fVar23;
        fStack_174 = fVar21;
        fStack_170 = fVar24;
        fStack_16c = fVar26;
        if (((pFVar14 <= (FScriptContainerElement *)&local_178) &&
            ((FScriptContainerElement *)&local_178 <
             pFVar14 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->TangentAndDistances).ArrayNum;
        piVar1 = &(param_4->TangentAndDistances).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
        }
        uVar15 = __xmm_7fffffff7fffffff7fffffff7fffffff;
        (param_4->TangentAndDistances).ArrayNum = iVar8 + 1;
        pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
        *(ulonglong *)pFVar14 = CONCAT44(fStack_174,local_178);
        *(ulonglong *)(pFVar14 + 8) = CONCAT44(fStack_16c,fStack_170);
        param_4->TotalSegmentLength = fVar30 + param_4->TotalSegmentLength;
        param_4->AverageSegmentLength = fVar31 + param_4->AverageSegmentLength;
        fVar21 = fVar32 * (float)uVar27 + local_1c4 * (float)uVar28 + local_1c0 * (float)uVar29;
        fVar24 = (float)((uint)fVar21 & uVar15);
        fVar23 = fVar20 - fVar24;
        if (fVar23 <= local_1f8) {
          fVar23 = local_1f8;
        }
        fVar23 = SQRT(fVar23) * (__real_3fc90fdb - fVar24 * ___real_3e20574b);
        if (fVar21 < local_1f8) {
          fVar23 = __real_40490fdb - fVar23;
        }
        fVar24 = local_1bc - local_210;
        local_210 = local_1bc;
        param_4->AverageSegmentAngle = fVar23 * fVar30 + param_4->AverageSegmentAngle;
        param_4->AverageTwistAngle =
             (float)((uint)fVar24 & uVar15) * fVar30 + param_4->AverageTwistAngle;
        fVar23 = fVar30 * local_20c;
        local_20c = local_1b8;
        param_4->AverageWidth = fVar23 + param_4->AverageWidth;
        _local_1f0 = _local_1e0;
        lVar11 = local_208;
        fVar23 = fVar30;
        uVar27 = fVar32;
        uVar28 = local_1c4;
        uVar15 = uVar19;
        fVar21 = local_1b4;
        uVar29 = local_1c0;
      }
      iVar8 = param_2->ArrayNum;
      lVar18 = local_208 + 4;
      uVar19 = uVar19 + 1;
      fVar24 = local_1f8;
      local_208 = lVar18;
    } while ((int)uVar19 < iVar8);
  }
  pTVar13 = &param_4->SortedIndices;
  if (fVar24 < fVar23) {
    fVar26 = fVar26 + fVar23;
    pFVar9 = (FScriptContainerElement *)
             TArrayView<unsigned_int_const_,int>::operator[](param_2,uVar15);
    pFVar14 = (pTVar13->AllocatorInstance).Data;
    if (((pFVar14 <= pFVar9) && (pFVar9 < pFVar14 + (longlong)(param_4->SortedIndices).ArrayMax * 4)
        ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (param_4->SortedIndices).ArrayNum;
    piVar1 = &(param_4->SortedIndices).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar13->AllocatorInstance,piVar1);
      (param_4->SortedIndices).ArrayNum = iVar8;
    }
    (param_4->SortedIndices).ArrayNum = iVar8 + 1;
    *(uint *)((pTVar13->AllocatorInstance).Data + (longlong)iVar8 * 4) = *(uint *)pFVar9;
    pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data;
    local_168 = (float)uVar27;
    fStack_164 = (float)uVar28;
    fStack_160 = (float)uVar29;
    fStack_15c = fVar26;
    if (((pFVar14 <= (FScriptContainerElement *)&local_168) &&
        ((FScriptContainerElement *)&local_168 <
         pFVar14 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (param_4->TangentAndDistances).ArrayNum;
    piVar1 = &(param_4->TangentAndDistances).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
    }
    (param_4->TangentAndDistances).ArrayNum = iVar8 + 1;
    pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(ulonglong *)pFVar14 = CONCAT44(fStack_164,local_168);
    *(ulonglong *)(pFVar14 + 8) = CONCAT44(fStack_15c,fStack_160);
  }
  iVar8 = (param_4->SortedIndices).ArrayNum;
  uVar15 = iVar8 - 1;
  iVar17 = uVar15 - uVar3;
  if (0 < iVar17) {
    uVar19 = 0;
    if ((int)param_3 < (param_4->RibbonInfoLookup).ArrayNum) {
      uVar19 = ~param_3 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar16 = (param_4->RibbonInfoLookup).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<FRibbonMultiRibbonInfo>)0x0) {
      FVar16 = (ForElementType<FRibbonMultiRibbonInfo>)&param_4->RibbonInfoLookup;
    }
    lVar18 = (longlong)(int)param_3 * 0x58;
    puVar10 = TArrayView<unsigned_int_const_,int>::operator[](param_2,0);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
              (local_198,(FNiagaraPosition *)&local_124,*puVar10);
    *(double *)((longlong)FVar16 + lVar18) = (double)local_124;
    *(double *)((uchar *)((longlong)FVar16 + 8) + lVar18) = (double)local_120;
    *(double *)((uchar *)((longlong)FVar16 + 0x10) + lVar18) = (double)local_11c;
    puVar10 = TArrayView<unsigned_int_const_,int>::Last(param_2,0);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
              (local_198,(FNiagaraPosition *)&local_118,*puVar10);
    *(double *)((uchar *)((longlong)FVar16 + 0x18) + lVar18) = (double)local_118;
    *(double *)((uchar *)((longlong)FVar16 + 0x20) + lVar18) = (double)local_114;
    *(double *)((uchar *)((longlong)FVar16 + 0x28) + lVar18) = (double)local_110;
    *(int *)((uchar *)((longlong)FVar16 + 0x30) + lVar18) = (param_4->SegmentData).ArrayNum;
    *(int *)((uchar *)((longlong)FVar16 + 0x34) + lVar18) = iVar17;
    uVar19 = uVar3;
    if (1 < iVar17) {
      pTVar2 = &param_4->TangentAndDistances;
      uVar7 = 0;
      if ((int)uVar3 < (param_4->TangentAndDistances).ArrayNum) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x10;
      uVar12 = uVar3 + 1;
      uVar7 = 0;
      if ((int)uVar12 < (param_4->TangentAndDistances).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      fVar23 = *(float *)(pFVar14 + 8);
      lVar11 = (longlong)(int)uVar12;
      fVar21 = *(float *)(pFVar9 + lVar11 * 0x10 + 4);
      fVar25 = *(float *)(pFVar9 + lVar11 * 0x10 + 8);
      fVar30 = *(float *)(pFVar14 + 4) * fVar21 +
               *(float *)pFVar14 * *(float *)(pFVar9 + lVar11 * 0x10);
      fVar30 = (fVar23 + fVar23) * fVar25 + fVar30 + fVar30;
      *(float *)pFVar14 = *(float *)pFVar14 * fVar30 - *(float *)(pFVar9 + lVar11 * 0x10);
      *(float *)(pFVar14 + 4) = *(float *)(pFVar14 + 4) * fVar30 - fVar21;
      *(float *)(pFVar14 + 8) = fVar23 * fVar30 - fVar25;
      uVar7 = 0;
      if ((int)uVar15 < (param_4->TangentAndDistances).ArrayNum) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar14 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x10;
      uVar7 = iVar8 - 2;
      uVar12 = 0;
      if ((int)uVar7 < (param_4->TangentAndDistances).ArrayNum) {
        uVar12 = ~uVar7 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar23 = *(float *)(pFVar14 + 8);
      lVar11 = (longlong)(int)uVar7;
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      fVar21 = *(float *)(pFVar9 + lVar11 * 0x10 + 4);
      fVar25 = *(float *)(pFVar9 + lVar11 * 0x10 + 8);
      fVar30 = *(float *)(pFVar14 + 4) * fVar21 +
               *(float *)pFVar14 * *(float *)(pFVar9 + lVar11 * 0x10);
      fVar30 = (fVar23 + fVar23) * fVar25 + fVar30 + fVar30;
      *(float *)pFVar14 = *(float *)pFVar14 * fVar30 - *(float *)(pFVar9 + lVar11 * 0x10);
      *(float *)(pFVar14 + 4) = *(float *)(pFVar14 + 4) * fVar30 - fVar21;
      *(float *)(pFVar14 + 8) = fVar23 * fVar30 - fVar25;
    }
    for (; (int)uVar19 < (int)uVar15; uVar19 = uVar19 + 1) {
      pFVar14 = (param_4->SegmentData).AllocatorInstance.Data;
      local_214 = uVar19;
      if (((pFVar14 <= (FScriptContainerElement *)&local_214) &&
          ((FScriptContainerElement *)&local_214 <
           pFVar14 + (longlong)(param_4->SegmentData).ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (param_4->SegmentData).ArrayNum;
      if (iVar8 == (param_4->SegmentData).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)param_4,&(param_4->SegmentData).ArrayMax);
        (param_4->SegmentData).ArrayNum = iVar8;
      }
      (param_4->SegmentData).ArrayNum = iVar8 + 1;
      *(uint *)((param_4->SegmentData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_214;
    }
    fVar25 = fVar20;
    fVar23 = fVar24;
    fVar21 = fVar20;
    if ((this->GenerationConfig).bHasCustomU0Data == 0) {
      CalculateUVScaleAndOffsets<unsigned_int>
                (&this->UV0Settings,&param_4->SortedIndices,&param_4->TangentAndDistances,local_138,
                 uVar3,uVar15,iVar17,fVar26,&local_1ac,&local_1b0,&local_1a8);
      fVar25 = local_1ac;
      fVar23 = local_1b0;
      fVar21 = local_1a8;
    }
    fVar30 = fVar20;
    if ((this->GenerationConfig).bHasCustomU1Data == 0) {
      CalculateUVScaleAndOffsets<unsigned_int>
                (&this->UV1Settings,&param_4->SortedIndices,&param_4->TangentAndDistances,local_138,
                 uVar3,uVar15,iVar17,fVar26,&local_1a0,&local_1a4,&local_19c);
      fVar20 = local_19c;
      fVar30 = local_1a0;
      fVar24 = local_1a4;
    }
    *(float *)((uchar *)((longlong)FVar16 + 0x38) + lVar18) = fVar25;
    *(float *)((uchar *)((longlong)FVar16 + 0x3c) + lVar18) = fVar23;
    *(float *)((uchar *)((longlong)FVar16 + 0x40) + lVar18) = fVar21;
    *(float *)((uchar *)((longlong)FVar16 + 0x44) + lVar18) = fVar30;
    *(float *)((uchar *)((longlong)FVar16 + 0x48) + lVar18) = fVar24;
    *(float *)((uchar *)((longlong)FVar16 + 0x4c) + lVar18) = fVar20;
    *(uint *)((uchar *)((longlong)FVar16 + 0x50) + lVar18) = uVar3;
    *(uint *)((uchar *)((longlong)FVar16 + 0x54) + lVar18) = uVar15;
  }
  return;
}

// GenerateVertexBufferForRibbonPart<1,0,1> @ 1493268a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FNiagaraRendererRibbons::GenerateVertexBufferForRibbonPart<1,0,1>
          (FNiagaraRendererRibbons *this,FNiagaraGenerationInputDataCPUAccessors *param_1,
          TArrayView<unsigned_int_const_,int> *param_2,uint param_3,
          FNiagaraRibbonCPUGeneratedVertexData *param_4)

{
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *this_00;
  int *piVar1;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  longlong lVar13;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  int iVar17;
  ForElementType<FRibbonMultiRibbonInfo> FVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint local_res20 [2];
  uint local_1e8;
  float local_1e4;
  longlong local_1e0;
  float local_1d8;
  float local_1d0;
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  undefined4 uStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float local_140;
  float local_13c;
  float fStack_138;
  float local_134;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *local_130;
  FNiagaraDataSetReaderFloat<float> *local_128;
  undefined8 local_120;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  undefined1 local_fc [188];
  
  this_00 = &param_1->PosData;
  local_128 = &param_1->AgeData;
  uVar3 = (param_4->SortedIndices).ArrayNum;
  local_res20[0] = param_3;
  local_130 = this_00;
  if ((param_2->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
            (this_00,(FNiagaraPosition *)local_fc,*param_2->DataPtr);
  uVar15 = 1;
  iVar8 = param_2->ArrayNum;
  fVar31 = 0.0;
  fVar25 = 0.0;
  _local_1b8 = local_fc._0_8_;
  uVar5 = _local_1b8;
  _local_1c8 = local_fc._0_8_;
  local_1e0 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
  local_1b0 = (float)local_fc._8_4_;
  local_1c0 = (float)local_fc._8_4_;
  local_1d0 = 0.0;
  local_1e4 = __real_3f800000;
  local_1d8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar20 = __real_3f800000;
  uVar27 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar29 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (1 < iVar8) {
    lVar13 = 4;
    fStack_1b4 = SUB84(local_fc._0_8_,4);
    fVar26 = fStack_1b4;
    local_1b8 = (float)local_fc._0_8_;
    fVar21 = local_1b8;
    _local_1b8 = uVar5;
    do {
      uVar19 = 0;
      if ((int)uVar15 < iVar8) {
        uVar19 = ~uVar15 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                (this_00,(FNiagaraPosition *)&local_148,
                 *(int *)((longlong)param_2->DataPtr + lVar13));
      fVar20 = local_1e4;
      uVar27 = local_148 - fVar21;
      local_1c0 = local_140;
      uVar28 = fStack_144 - fVar26;
      fStack_1c4 = fStack_144;
      local_1c8 = local_148;
      uVar29 = local_140 - (float)local_fc._8_4_;
      fVar25 = SQRT((float)uVar28 * (float)uVar28 + (float)uVar27 * (float)uVar27 +
                    (float)uVar29 * (float)uVar29);
      if (GNiagaraRibbonMinSegmentLength < fVar25) {
        fVar21 = local_1e4 / fVar25;
        uVar27 = fVar21 * (float)uVar27;
        uVar28 = fVar21 * (float)uVar28;
        uVar29 = fVar21 * (float)uVar29;
        pFVar9 = (FScriptContainerElement *)
                 TArrayView<unsigned_int_const_,int>::operator[](param_2,0);
        pFVar16 = (param_4->SortedIndices).AllocatorInstance.Data;
        if (((pFVar16 <= pFVar9) &&
            (pFVar9 < pFVar16 + (longlong)(param_4->SortedIndices).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->SortedIndices).ArrayNum;
        piVar1 = &(param_4->SortedIndices).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_4->SortedIndices).AllocatorInstance,piVar1);
        }
        (param_4->SortedIndices).ArrayNum = iVar8 + 1;
        *(uint *)((param_4->SortedIndices).AllocatorInstance.Data + (longlong)iVar8 * 4) =
             *(uint *)pFVar9;
        pFVar16 = (param_4->TangentAndDistances).AllocatorInstance.Data;
        uStack_16c = 0;
        local_178 = (float)uVar27;
        fStack_174 = (float)uVar28;
        fStack_170 = (float)uVar29;
        if (((pFVar16 <= (FScriptContainerElement *)&local_178) &&
            ((FScriptContainerElement *)&local_178 <
             pFVar16 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->TangentAndDistances).ArrayNum;
        piVar1 = &(param_4->TangentAndDistances).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
        }
        (param_4->TangentAndDistances).ArrayNum = iVar8 + 1;
        pFVar16 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
        *(ulonglong *)pFVar16 = CONCAT44(fStack_174,local_178);
        *(ulonglong *)(pFVar16 + 8) = CONCAT44(uStack_16c,fStack_170);
        pFVar16 = (param_4->MultiRibbonIndices).AllocatorInstance.Data;
        if (((pFVar16 <= (FScriptContainerElement *)local_res20) &&
            ((FScriptContainerElement *)local_res20 <
             pFVar16 + (longlong)(param_4->MultiRibbonIndices).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->MultiRibbonIndices).ArrayNum;
        piVar1 = &(param_4->MultiRibbonIndices).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_4->MultiRibbonIndices).AllocatorInstance,piVar1);
        }
        (param_4->MultiRibbonIndices).ArrayNum = iVar8 + 1;
        *(uint *)((param_4->MultiRibbonIndices).AllocatorInstance.Data + (longlong)iVar8 * 4) =
             local_res20[0];
        break;
      }
      iVar8 = param_2->ArrayNum;
      uVar15 = uVar15 + 1;
      lVar13 = lVar13 + 4;
      fVar25 = 0.0;
    } while ((int)uVar15 < iVar8);
  }
  iVar8 = param_2->ArrayNum;
  uVar19 = uVar15 + 1;
  fVar21 = 0.0;
  if ((int)uVar19 < iVar8) {
    lVar13 = (longlong)(int)uVar19 * 4;
    lVar11 = (longlong)(int)uVar15 * 4;
    fVar26 = __real_322bcc77;
    fVar33 = local_1c0;
    fVar31 = 0.0;
    do {
      uVar7 = 0;
      if ((int)uVar19 < iVar8) {
        uVar7 = ~uVar19 >> 0x1f;
      }
      local_1e0 = lVar13;
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                (local_130,(FNiagaraPosition *)&local_13c,
                 *(int *)((longlong)param_2->DataPtr + lVar13));
      fVar21 = local_13c - local_1c8;
      fVar23 = fStack_138 - fStack_1c4;
      fStack_1b4 = fStack_138;
      local_1b8 = local_13c;
      fVar24 = local_134 - fVar33;
      local_194 = local_134;
      fVar30 = fVar23 * fVar23 + fVar21 * fVar21 + fVar24 * fVar24;
      fVar32 = SQRT(fVar30);
      if ((GNiagaraRibbonMinSegmentLength < fVar32) || (uVar19 == iVar8 - 1U)) {
        fVar33 = fVar32;
        if (fVar32 <= GNiagaraRibbonMinSegmentLength) {
          fVar33 = GNiagaraRibbonMinSegmentLength;
        }
        fVar33 = fVar20 / fVar33;
        local_19c = fVar33 * fVar21;
        local_198 = fVar33 * fVar23;
        fVar33 = fVar33 * fVar24;
        fVar23 = local_19c + (float)uVar27;
        fVar24 = local_198 + (float)uVar28;
        local_118 = fVar33 + (float)uVar29;
        fVar21 = fVar24 * fVar24 + fVar23 * fVar23 + local_118 * local_118;
        if (fVar21 == fVar20) {
          local_1a8 = CONCAT44(fVar24,fVar23);
          uVar22 = fVar23;
          local_1a0 = local_118;
        }
        else if (fVar26 <= fVar21) {
          fVar21 = __real_3f800000 / SQRT(fVar21);
          local_1a0 = fVar21 * local_118;
          uVar22 = fVar21 * fVar23;
          local_1a8 = CONCAT44(fVar21 * fVar24,(undefined4)local_1a8);
        }
        else {
          local_1a8 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
          local_1a0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar22 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
        local_120 = CONCAT44(fVar24,fVar23);
        pTVar14 = &param_4->SortedIndices;
        fVar21 = (this->GenerationConfig).CurveTension;
        if (__real_3f7d70a4 <= fVar21) {
          fVar21 = __real_3f7d70a4;
        }
        uVar7 = 0;
        if ((int)uVar15 < iVar8) {
          uVar7 = ~uVar15 >> 0x1f;
        }
        fVar20 = fVar20 - fVar21;
        fVar31 = fVar31 + fVar25;
        fVar21 = local_1a8._4_4_ * fVar20;
        fVar25 = fVar20 * (float)uVar22;
        fVar20 = local_1a0 * fVar20;
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar16 = (pTVar14->AllocatorInstance).Data;
        pFVar9 = (FScriptContainerElement *)((longlong)param_2->DataPtr + lVar11);
        if (((pFVar16 <= pFVar9) &&
            (pFVar9 < pFVar16 + (longlong)(param_4->SortedIndices).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->SortedIndices).ArrayNum;
        piVar1 = &(param_4->SortedIndices).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar14->AllocatorInstance,piVar1);
        }
        (param_4->SortedIndices).ArrayNum = iVar8 + 1;
        *(undefined4 *)((pTVar14->AllocatorInstance).Data + (longlong)iVar8 * 4) =
             *(undefined4 *)pFVar9;
        pFVar16 = (param_4->TangentAndDistances).AllocatorInstance.Data;
        local_168 = fVar25;
        fStack_164 = fVar21;
        fStack_160 = fVar20;
        fStack_15c = fVar31;
        if (((pFVar16 <= (FScriptContainerElement *)&local_168) &&
            ((FScriptContainerElement *)&local_168 <
             pFVar16 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->TangentAndDistances).ArrayNum;
        piVar1 = &(param_4->TangentAndDistances).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
        }
        (param_4->TangentAndDistances).ArrayNum = iVar8 + 1;
        pFVar16 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
        *(ulonglong *)pFVar16 = CONCAT44(fStack_164,local_168);
        *(ulonglong *)(pFVar16 + 8) = CONCAT44(fStack_15c,fStack_160);
        pFVar16 = (param_4->MultiRibbonIndices).AllocatorInstance.Data;
        if (((pFVar16 <= (FScriptContainerElement *)local_res20) &&
            ((FScriptContainerElement *)local_res20 <
             pFVar16 + (longlong)(param_4->MultiRibbonIndices).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->MultiRibbonIndices).ArrayNum;
        piVar1 = &(param_4->MultiRibbonIndices).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_4->MultiRibbonIndices).AllocatorInstance,piVar1);
        }
        (param_4->MultiRibbonIndices).ArrayNum = iVar8 + 1;
        *(uint *)((param_4->MultiRibbonIndices).AllocatorInstance.Data + (longlong)iVar8 * 4) =
             local_res20[0];
        param_4->TotalSegmentLength = fVar32 + param_4->TotalSegmentLength;
        param_4->AverageSegmentLength = fVar30 + param_4->AverageSegmentLength;
        fVar26 = __real_322bcc77;
        fVar21 = local_19c * (float)uVar27 + local_198 * (float)uVar28 + fVar33 * (float)uVar29;
        fVar25 = (float)((uint)fVar21 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar20 = local_1e4 - fVar25;
        if (fVar20 <= local_1d0) {
          fVar20 = local_1d0;
        }
        fVar20 = SQRT(fVar20) * (__real_3fc90fdb - fVar25 * ___real_3e20574b);
        if (fVar21 < local_1d0) {
          fVar20 = __real_40490fdb - fVar20;
        }
        _local_1c8 = _local_1b8;
        param_4->AverageSegmentAngle = fVar20 * fVar32 + param_4->AverageSegmentAngle;
        lVar11 = local_1e0;
        fVar25 = fVar32;
        fVar20 = local_1e4;
        uVar27 = local_19c;
        uVar28 = local_198;
        uVar15 = uVar19;
        fVar33 = local_194;
        uVar29 = fVar33;
      }
      iVar8 = param_2->ArrayNum;
      lVar13 = local_1e0 + 4;
      uVar19 = uVar19 + 1;
      fVar21 = local_1d0;
      local_1e0 = lVar13;
    } while ((int)uVar19 < iVar8);
  }
  pTVar14 = &param_4->SortedIndices;
  if (fVar21 < fVar25) {
    fVar31 = fVar31 + fVar25;
    pFVar9 = (FScriptContainerElement *)
             TArrayView<unsigned_int_const_,int>::operator[](param_2,uVar15);
    pFVar16 = (pTVar14->AllocatorInstance).Data;
    if (((pFVar16 <= pFVar9) && (pFVar9 < pFVar16 + (longlong)(param_4->SortedIndices).ArrayMax * 4)
        ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (param_4->SortedIndices).ArrayNum;
    piVar1 = &(param_4->SortedIndices).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar14->AllocatorInstance,piVar1);
      (param_4->SortedIndices).ArrayNum = iVar8;
    }
    (param_4->SortedIndices).ArrayNum = iVar8 + 1;
    *(uint *)((pTVar14->AllocatorInstance).Data + (longlong)iVar8 * 4) = *(uint *)pFVar9;
    pFVar16 = (param_4->TangentAndDistances).AllocatorInstance.Data;
    local_158 = (float)uVar27;
    fStack_154 = (float)uVar28;
    fStack_150 = (float)uVar29;
    fStack_14c = fVar31;
    if (((pFVar16 <= (FScriptContainerElement *)&local_158) &&
        ((FScriptContainerElement *)&local_158 <
         pFVar16 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (param_4->TangentAndDistances).ArrayNum;
    piVar1 = &(param_4->TangentAndDistances).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
    }
    (param_4->TangentAndDistances).ArrayNum = iVar8 + 1;
    pFVar16 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(ulonglong *)pFVar16 = CONCAT44(fStack_154,local_158);
    *(ulonglong *)(pFVar16 + 8) = CONCAT44(fStack_14c,fStack_150);
    pFVar16 = (param_4->MultiRibbonIndices).AllocatorInstance.Data;
    if (((pFVar16 <= (FScriptContainerElement *)local_res20) &&
        ((FScriptContainerElement *)local_res20 <
         pFVar16 + (longlong)(param_4->MultiRibbonIndices).ArrayMax * 4)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (param_4->MultiRibbonIndices).ArrayNum;
    piVar1 = &(param_4->MultiRibbonIndices).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(param_4->MultiRibbonIndices).AllocatorInstance,piVar1);
    }
    (param_4->MultiRibbonIndices).ArrayNum = iVar8 + 1;
    *(uint *)((param_4->MultiRibbonIndices).AllocatorInstance.Data + (longlong)iVar8 * 4) =
         local_res20[0];
  }
  iVar8 = (param_4->SortedIndices).ArrayNum;
  uVar15 = iVar8 - 1;
  iVar17 = uVar15 - uVar3;
  if (0 < iVar17) {
    lVar13 = (longlong)(int)local_res20[0];
    uVar19 = 0;
    if ((int)local_res20[0] < (param_4->RibbonInfoLookup).ArrayNum) {
      uVar19 = ~local_res20[0] >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar18 = (param_4->RibbonInfoLookup).AllocatorInstance.SecondaryData;
    if (FVar18 == (ForElementType<FRibbonMultiRibbonInfo>)0x0) {
      FVar18 = (ForElementType<FRibbonMultiRibbonInfo>)&param_4->RibbonInfoLookup;
    }
    lVar13 = lVar13 * 0x58;
    puVar10 = TArrayView<unsigned_int_const_,int>::operator[](param_2,0);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
              (local_130,(FNiagaraPosition *)&local_114,*puVar10);
    *(double *)((longlong)FVar18 + lVar13) = (double)local_114;
    *(double *)((uchar *)((longlong)FVar18 + 8) + lVar13) = (double)local_110;
    *(double *)((uchar *)((longlong)FVar18 + 0x10) + lVar13) = (double)local_10c;
    puVar10 = TArrayView<unsigned_int_const_,int>::Last(param_2,0);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
              (local_130,(FNiagaraPosition *)&local_108,*puVar10);
    *(double *)((uchar *)((longlong)FVar18 + 0x18) + lVar13) = (double)local_108;
    *(double *)((uchar *)((longlong)FVar18 + 0x20) + lVar13) = (double)local_104;
    *(double *)((uchar *)((longlong)FVar18 + 0x28) + lVar13) = (double)local_100;
    *(int *)((uchar *)((longlong)FVar18 + 0x30) + lVar13) = (param_4->SegmentData).ArrayNum;
    *(int *)((uchar *)((longlong)FVar18 + 0x34) + lVar13) = iVar17;
    uVar19 = uVar3;
    if (1 < iVar17) {
      pTVar2 = &param_4->TangentAndDistances;
      uVar7 = 0;
      if ((int)uVar3 < (param_4->TangentAndDistances).ArrayNum) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x10;
      uVar12 = uVar3 + 1;
      uVar7 = 0;
      if ((int)uVar12 < (param_4->TangentAndDistances).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      fVar25 = *(float *)(pFVar16 + 8);
      lVar11 = (longlong)(int)uVar12;
      fVar26 = *(float *)(pFVar9 + lVar11 * 0x10 + 4);
      fVar33 = *(float *)(pFVar9 + lVar11 * 0x10 + 8);
      fVar23 = fVar26 * *(float *)(pFVar16 + 4) +
               *(float *)(pFVar9 + lVar11 * 0x10) * *(float *)pFVar16;
      fVar23 = (fVar25 + fVar25) * fVar33 + fVar23 + fVar23;
      *(float *)pFVar16 = fVar23 * *(float *)pFVar16 - *(float *)(pFVar9 + lVar11 * 0x10);
      *(float *)(pFVar16 + 4) = fVar23 * *(float *)(pFVar16 + 4) - fVar26;
      *(float *)(pFVar16 + 8) = fVar23 * fVar25 - fVar33;
      uVar7 = 0;
      if ((int)uVar15 < (param_4->TangentAndDistances).ArrayNum) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar16 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar15 * 0x10;
      uVar7 = iVar8 - 2;
      uVar12 = 0;
      if ((int)uVar7 < (param_4->TangentAndDistances).ArrayNum) {
        uVar12 = ~uVar7 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar25 = *(float *)(pFVar16 + 8);
      lVar11 = (longlong)(int)uVar7;
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      fVar26 = *(float *)(pFVar9 + lVar11 * 0x10 + 4);
      fVar33 = *(float *)(pFVar9 + lVar11 * 0x10 + 8);
      fVar23 = fVar26 * *(float *)(pFVar16 + 4) +
               *(float *)(pFVar9 + lVar11 * 0x10) * *(float *)pFVar16;
      fVar23 = (fVar25 + fVar25) * fVar33 + fVar23 + fVar23;
      *(float *)pFVar16 = fVar23 * *(float *)pFVar16 - *(float *)(pFVar9 + lVar11 * 0x10);
      *(float *)(pFVar16 + 4) = fVar23 * *(float *)(pFVar16 + 4) - fVar26;
      *(float *)(pFVar16 + 8) = fVar23 * fVar25 - fVar33;
    }
    for (; (int)uVar19 < (int)uVar15; uVar19 = uVar19 + 1) {
      pFVar16 = (param_4->SegmentData).AllocatorInstance.Data;
      local_1e8 = uVar19;
      if (((pFVar16 <= (FScriptContainerElement *)&local_1e8) &&
          ((FScriptContainerElement *)&local_1e8 <
           pFVar16 + (longlong)(param_4->SegmentData).ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (param_4->SegmentData).ArrayNum;
      if (iVar8 == (param_4->SegmentData).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)param_4,&(param_4->SegmentData).ArrayMax);
        (param_4->SegmentData).ArrayNum = iVar8;
      }
      (param_4->SegmentData).ArrayNum = iVar8 + 1;
      *(uint *)((param_4->SegmentData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_1e8;
    }
    fVar26 = fVar20;
    fVar33 = fVar20;
    fVar25 = fVar21;
    if ((this->GenerationConfig).bHasCustomU0Data == 0) {
      CalculateUVScaleAndOffsets<unsigned_int>
                (&this->UV0Settings,&param_4->SortedIndices,&param_4->TangentAndDistances,local_128,
                 uVar3,uVar15,iVar17,fVar31,&local_18c,&local_190,&local_188);
      fVar26 = local_18c;
      fVar33 = local_188;
      fVar25 = local_190;
    }
    fVar23 = fVar20;
    if ((this->GenerationConfig).bHasCustomU1Data == 0) {
      CalculateUVScaleAndOffsets<unsigned_int>
                (&this->UV1Settings,&param_4->SortedIndices,&param_4->TangentAndDistances,local_128,
                 uVar3,uVar15,iVar17,fVar31,&local_180,&local_184,&local_17c);
      fVar20 = local_17c;
      fVar23 = local_180;
      fVar21 = local_184;
    }
    *(float *)((uchar *)((longlong)FVar18 + 0x38) + lVar13) = fVar26;
    *(float *)((uchar *)((longlong)FVar18 + 0x3c) + lVar13) = fVar25;
    *(float *)((uchar *)((longlong)FVar18 + 0x40) + lVar13) = fVar33;
    *(float *)((uchar *)((longlong)FVar18 + 0x44) + lVar13) = fVar23;
    *(float *)((uchar *)((longlong)FVar18 + 0x48) + lVar13) = fVar21;
    *(float *)((uchar *)((longlong)FVar18 + 0x4c) + lVar13) = fVar20;
    *(uint *)((uchar *)((longlong)FVar18 + 0x50) + lVar13) = uVar3;
    *(uint *)((uchar *)((longlong)FVar18 + 0x54) + lVar13) = uVar15;
  }
  return;
}

// GenerateVertexBufferForRibbonPart<1,0,0> @ 149327b00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FNiagaraRendererRibbons::GenerateVertexBufferForRibbonPart<1,0,0>
          (FNiagaraRendererRibbons *this,FNiagaraGenerationInputDataCPUAccessors *param_1,
          TArrayView<unsigned_int_const_,int> *param_2,uint param_3,
          FNiagaraRibbonCPUGeneratedVertexData *param_4)

{
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *this_00;
  int *piVar1;
  TArray<UE::Math::TVector4<float>,TSizedDefaultAllocator<32>_> *pTVar2;
  uint uVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FScriptContainerElement *pFVar9;
  uint *puVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  ForElementType<FRibbonMultiRibbonInfo> FVar14;
  longlong lVar15;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar16;
  FScriptContainerElement *pFVar17;
  int iVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  uint local_1e8;
  float local_1e4;
  longlong local_1e0;
  float local_1d8;
  float local_1d0;
  float local_1c8;
  float fStack_1c4;
  float local_1c0;
  float local_1b8;
  float fStack_1b4;
  float local_1b0;
  undefined8 local_1a8;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *local_178;
  float local_168;
  float fStack_164;
  float fStack_160;
  undefined4 uStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float fStack_134;
  float local_130;
  float local_12c;
  float fStack_128;
  float local_124;
  FNiagaraDataSetReaderFloat<float> *local_120;
  undefined8 local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined1 local_f4 [180];
  
  this_00 = &param_1->PosData;
  local_120 = &param_1->AgeData;
  uVar3 = (param_4->SortedIndices).ArrayNum;
  local_178 = this_00;
  if ((param_2->ArrayNum < 1) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar6)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
            (this_00,(FNiagaraPosition *)local_f4,*param_2->DataPtr);
  uVar13 = 1;
  iVar8 = param_2->ArrayNum;
  fVar31 = 0.0;
  fVar25 = 0.0;
  _local_1b8 = local_f4._0_8_;
  uVar5 = _local_1b8;
  _local_1c8 = local_f4._0_8_;
  local_1e0 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
  local_1b0 = (float)local_f4._8_4_;
  local_1c0 = (float)local_f4._8_4_;
  local_1d0 = 0.0;
  local_1e4 = __real_3f800000;
  local_1d8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  fVar21 = __real_3f800000;
  uVar27 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  uVar28 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar29 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (1 < iVar8) {
    lVar15 = 4;
    fStack_1b4 = SUB84(local_f4._0_8_,4);
    fVar26 = fStack_1b4;
    local_1b8 = (float)local_f4._0_8_;
    fVar22 = local_1b8;
    _local_1b8 = uVar5;
    do {
      uVar19 = 0;
      if ((int)uVar13 < iVar8) {
        uVar19 = ~uVar13 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                (this_00,(FNiagaraPosition *)&local_138,
                 *(int *)(lVar15 + (longlong)param_2->DataPtr));
      fVar21 = local_1e4;
      uVar27 = local_138 - fVar22;
      local_1c0 = local_130;
      uVar28 = fStack_134 - fVar26;
      fStack_1c4 = fStack_134;
      local_1c8 = local_138;
      uVar29 = local_130 - (float)local_f4._8_4_;
      fVar25 = SQRT((float)uVar28 * (float)uVar28 + (float)uVar27 * (float)uVar27 +
                    (float)uVar29 * (float)uVar29);
      if (GNiagaraRibbonMinSegmentLength < fVar25) {
        fVar22 = local_1e4 / fVar25;
        uVar27 = fVar22 * (float)uVar27;
        uVar28 = fVar22 * (float)uVar28;
        uVar29 = fVar22 * (float)uVar29;
        pFVar9 = (FScriptContainerElement *)
                 TArrayView<unsigned_int_const_,int>::operator[](param_2,0);
        pFVar17 = (param_4->SortedIndices).AllocatorInstance.Data;
        if (((pFVar17 <= pFVar9) &&
            (pFVar9 < pFVar17 + (longlong)(param_4->SortedIndices).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->SortedIndices).ArrayNum;
        piVar1 = &(param_4->SortedIndices).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_4->SortedIndices).AllocatorInstance,piVar1);
        }
        (param_4->SortedIndices).ArrayNum = iVar8 + 1;
        *(uint *)((param_4->SortedIndices).AllocatorInstance.Data + (longlong)iVar8 * 4) =
             *(uint *)pFVar9;
        pFVar17 = (param_4->TangentAndDistances).AllocatorInstance.Data;
        uStack_15c = 0;
        local_168 = (float)uVar27;
        fStack_164 = (float)uVar28;
        fStack_160 = (float)uVar29;
        if (((pFVar17 <= (FScriptContainerElement *)&local_168) &&
            ((FScriptContainerElement *)&local_168 <
             pFVar17 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->TangentAndDistances).ArrayNum;
        piVar1 = &(param_4->TangentAndDistances).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
        }
        (param_4->TangentAndDistances).ArrayNum = iVar8 + 1;
        pFVar17 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
        *(ulonglong *)pFVar17 = CONCAT44(fStack_164,local_168);
        *(ulonglong *)(pFVar17 + 8) = CONCAT44(uStack_15c,fStack_160);
        break;
      }
      iVar8 = param_2->ArrayNum;
      uVar13 = uVar13 + 1;
      lVar15 = lVar15 + 4;
      fVar25 = 0.0;
    } while ((int)uVar13 < iVar8);
  }
  iVar8 = param_2->ArrayNum;
  uVar19 = uVar13 + 1;
  fVar22 = 0.0;
  if ((int)uVar19 < iVar8) {
    lVar15 = (longlong)(int)uVar19 * 4;
    lVar11 = (longlong)(int)uVar13 * 4;
    fVar26 = __real_322bcc77;
    fVar20 = local_1c0;
    fVar31 = 0.0;
    do {
      uVar7 = 0;
      if ((int)uVar19 < iVar8) {
        uVar7 = ~uVar19 >> 0x1f;
      }
      local_1e0 = lVar15;
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                (local_178,(FNiagaraPosition *)&local_12c,
                 *(int *)(lVar15 + (longlong)param_2->DataPtr));
      fVar32 = local_12c - local_1c8;
      fVar33 = fStack_128 - fStack_1c4;
      fStack_1b4 = fStack_128;
      local_1b8 = local_12c;
      fVar22 = local_124 - fVar20;
      local_194 = local_124;
      fVar30 = fVar33 * fVar33 + fVar32 * fVar32 + fVar22 * fVar22;
      local_19c = SQRT(fVar30);
      if ((GNiagaraRibbonMinSegmentLength < local_19c) || (uVar19 == iVar8 - 1U)) {
        fVar20 = local_19c;
        if (local_19c <= GNiagaraRibbonMinSegmentLength) {
          fVar20 = GNiagaraRibbonMinSegmentLength;
        }
        fVar20 = fVar21 / fVar20;
        local_198 = fVar22 * fVar20;
        fVar32 = fVar32 * fVar20;
        fVar33 = fVar33 * fVar20;
        local_110 = local_198 + (float)uVar29;
        fVar20 = fVar32 + (float)uVar27;
        fVar24 = fVar33 + (float)uVar28;
        fVar22 = fVar24 * fVar24 + fVar20 * fVar20 + local_110 * local_110;
        if (fVar22 == fVar21) {
          local_1a8 = CONCAT44(fVar24,fVar20);
          uVar23 = fVar20;
          local_1a0 = local_110;
        }
        else if (fVar26 <= fVar22) {
          fVar22 = __real_3f800000 / SQRT(fVar22);
          local_1a0 = fVar22 * local_110;
          uVar23 = fVar22 * fVar20;
          local_1a8 = CONCAT44(fVar22 * fVar24,(undefined4)local_1a8);
        }
        else {
          local_1a8 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
          local_1a0 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar23 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
        local_118 = CONCAT44(fVar24,fVar20);
        pTVar16 = &param_4->SortedIndices;
        fVar22 = (this->GenerationConfig).CurveTension;
        if (__real_3f7d70a4 <= fVar22) {
          fVar22 = __real_3f7d70a4;
        }
        uVar7 = 0;
        if ((int)uVar13 < iVar8) {
          uVar7 = ~uVar13 >> 0x1f;
        }
        fVar21 = fVar21 - fVar22;
        fVar31 = fVar31 + fVar25;
        fVar22 = local_1a8._4_4_ * fVar21;
        fVar25 = fVar21 * (float)uVar23;
        fVar21 = local_1a0 * fVar21;
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar17 = (pTVar16->AllocatorInstance).Data;
        pFVar9 = (FScriptContainerElement *)((longlong)param_2->DataPtr + lVar11);
        if (((pFVar17 <= pFVar9) &&
            (pFVar9 < pFVar17 + (longlong)(param_4->SortedIndices).ArrayMax * 4)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->SortedIndices).ArrayNum;
        piVar1 = &(param_4->SortedIndices).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar16->AllocatorInstance,piVar1);
        }
        (param_4->SortedIndices).ArrayNum = iVar8 + 1;
        *(undefined4 *)((pTVar16->AllocatorInstance).Data + (longlong)iVar8 * 4) =
             *(undefined4 *)pFVar9;
        pFVar17 = (param_4->TangentAndDistances).AllocatorInstance.Data;
        local_158 = fVar25;
        fStack_154 = fVar22;
        fStack_150 = fVar21;
        fStack_14c = fVar31;
        if (((pFVar17 <= (FScriptContainerElement *)&local_158) &&
            ((FScriptContainerElement *)&local_158 <
             pFVar17 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar8 = (param_4->TangentAndDistances).ArrayNum;
        piVar1 = &(param_4->TangentAndDistances).ArrayMax;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
        }
        (param_4->TangentAndDistances).ArrayNum = iVar8 + 1;
        pFVar17 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
        *(ulonglong *)pFVar17 = CONCAT44(fStack_154,local_158);
        *(ulonglong *)(pFVar17 + 8) = CONCAT44(fStack_14c,fStack_150);
        param_4->TotalSegmentLength = local_19c + param_4->TotalSegmentLength;
        param_4->AverageSegmentLength = fVar30 + param_4->AverageSegmentLength;
        fVar26 = __real_322bcc77;
        fVar22 = fVar32 * (float)uVar27 + fVar33 * (float)uVar28 + local_198 * (float)uVar29;
        fVar25 = (float)((uint)fVar22 & __xmm_7fffffff7fffffff7fffffff7fffffff);
        fVar21 = local_1e4 - fVar25;
        if (fVar21 <= local_1d0) {
          fVar21 = local_1d0;
        }
        fVar21 = SQRT(fVar21) * (__real_3fc90fdb - fVar25 * ___real_3e20574b);
        if (fVar22 < local_1d0) {
          fVar21 = __real_40490fdb - fVar21;
        }
        _local_1c8 = _local_1b8;
        param_4->AverageSegmentAngle = fVar21 * local_19c + param_4->AverageSegmentAngle;
        lVar11 = local_1e0;
        fVar25 = local_19c;
        fVar21 = local_1e4;
        uVar27 = fVar32;
        uVar28 = fVar33;
        uVar13 = uVar19;
        fVar20 = local_194;
        uVar29 = local_198;
      }
      iVar8 = param_2->ArrayNum;
      lVar15 = local_1e0 + 4;
      uVar19 = uVar19 + 1;
      fVar22 = local_1d0;
      local_1e0 = lVar15;
    } while ((int)uVar19 < iVar8);
  }
  pTVar16 = &param_4->SortedIndices;
  if (fVar22 < fVar25) {
    fVar31 = fVar31 + fVar25;
    pFVar9 = (FScriptContainerElement *)
             TArrayView<unsigned_int_const_,int>::operator[](param_2,uVar13);
    pFVar17 = (pTVar16->AllocatorInstance).Data;
    if (((pFVar17 <= pFVar9) && (pFVar9 < pFVar17 + (longlong)(param_4->SortedIndices).ArrayMax * 4)
        ) && (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (param_4->SortedIndices).ArrayNum;
    piVar1 = &(param_4->SortedIndices).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar16->AllocatorInstance,piVar1);
      (param_4->SortedIndices).ArrayNum = iVar8;
    }
    (param_4->SortedIndices).ArrayNum = iVar8 + 1;
    *(uint *)((pTVar16->AllocatorInstance).Data + (longlong)iVar8 * 4) = *(uint *)pFVar9;
    pFVar17 = (param_4->TangentAndDistances).AllocatorInstance.Data;
    local_148 = (float)uVar27;
    fStack_144 = (float)uVar28;
    fStack_140 = (float)uVar29;
    fStack_13c = fVar31;
    if (((pFVar17 <= (FScriptContainerElement *)&local_148) &&
        ((FScriptContainerElement *)&local_148 <
         pFVar17 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar8 = (param_4->TangentAndDistances).ArrayNum;
    piVar1 = &(param_4->TangentAndDistances).ArrayMax;
    if (iVar8 == *piVar1) {
      iVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
    }
    (param_4->TangentAndDistances).ArrayNum = iVar8 + 1;
    pFVar17 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
    *(ulonglong *)pFVar17 = CONCAT44(fStack_144,local_148);
    *(ulonglong *)(pFVar17 + 8) = CONCAT44(fStack_13c,fStack_140);
  }
  iVar8 = (param_4->SortedIndices).ArrayNum;
  uVar13 = iVar8 - 1;
  iVar18 = uVar13 - uVar3;
  if (0 < iVar18) {
    uVar19 = 0;
    if ((int)param_3 < (param_4->RibbonInfoLookup).ArrayNum) {
      uVar19 = ~param_3 >> 0x1f;
    }
    if ((uVar19 == 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FVar14 = (param_4->RibbonInfoLookup).AllocatorInstance.SecondaryData;
    if (FVar14 == (ForElementType<FRibbonMultiRibbonInfo>)0x0) {
      FVar14 = (ForElementType<FRibbonMultiRibbonInfo>)&param_4->RibbonInfoLookup;
    }
    lVar15 = (longlong)(int)param_3 * 0x58;
    puVar10 = TArrayView<unsigned_int_const_,int>::operator[](param_2,0);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
              (local_178,(FNiagaraPosition *)&local_10c,*puVar10);
    *(double *)((longlong)FVar14 + lVar15) = (double)local_10c;
    *(double *)((uchar *)((longlong)FVar14 + 8) + lVar15) = (double)local_108;
    *(double *)((uchar *)((longlong)FVar14 + 0x10) + lVar15) = (double)local_104;
    puVar10 = TArrayView<unsigned_int_const_,int>::Last(param_2,0);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
              (local_178,(FNiagaraPosition *)&local_100,*puVar10);
    *(double *)((uchar *)((longlong)FVar14 + 0x18) + lVar15) = (double)local_100;
    *(double *)((uchar *)((longlong)FVar14 + 0x20) + lVar15) = (double)local_fc;
    *(double *)((uchar *)((longlong)FVar14 + 0x28) + lVar15) = (double)local_f8;
    *(int *)((uchar *)((longlong)FVar14 + 0x30) + lVar15) = (param_4->SegmentData).ArrayNum;
    *(int *)((uchar *)((longlong)FVar14 + 0x34) + lVar15) = iVar18;
    uVar19 = uVar3;
    if (1 < iVar18) {
      pTVar2 = &param_4->TangentAndDistances;
      uVar7 = 0;
      if ((int)uVar3 < (param_4->TangentAndDistances).ArrayNum) {
        uVar7 = ~uVar3 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar17 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x10;
      uVar12 = uVar3 + 1;
      uVar7 = 0;
      if ((int)uVar12 < (param_4->TangentAndDistances).ArrayNum) {
        uVar7 = ~uVar12 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      fVar25 = *(float *)(pFVar17 + 8);
      lVar11 = (longlong)(int)uVar12;
      fVar26 = *(float *)(pFVar9 + lVar11 * 0x10 + 4);
      fVar20 = *(float *)(pFVar9 + lVar11 * 0x10 + 8);
      fVar30 = *(float *)(pFVar17 + 4) * fVar26 +
               *(float *)pFVar17 * *(float *)(pFVar9 + lVar11 * 0x10);
      fVar30 = (fVar25 + fVar25) * fVar20 + fVar30 + fVar30;
      *(float *)pFVar17 = *(float *)pFVar17 * fVar30 - *(float *)(pFVar9 + lVar11 * 0x10);
      *(float *)(pFVar17 + 4) = *(float *)(pFVar17 + 4) * fVar30 - fVar26;
      *(float *)(pFVar17 + 8) = fVar25 * fVar30 - fVar20;
      uVar7 = 0;
      if ((int)uVar13 < (param_4->TangentAndDistances).ArrayNum) {
        uVar7 = ~uVar13 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar17 = (pTVar2->AllocatorInstance).Data + (longlong)(int)uVar13 * 0x10;
      uVar7 = iVar8 - 2;
      uVar12 = 0;
      if ((int)uVar7 < (param_4->TangentAndDistances).ArrayNum) {
        uVar12 = ~uVar7 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar25 = *(float *)(pFVar17 + 8);
      lVar11 = (longlong)(int)uVar7;
      pFVar9 = (pTVar2->AllocatorInstance).Data;
      fVar26 = *(float *)(pFVar9 + lVar11 * 0x10 + 4);
      fVar20 = *(float *)(pFVar9 + lVar11 * 0x10 + 8);
      fVar30 = *(float *)(pFVar17 + 4) * fVar26 +
               *(float *)pFVar17 * *(float *)(pFVar9 + lVar11 * 0x10);
      fVar30 = (fVar25 + fVar25) * fVar20 + fVar30 + fVar30;
      *(float *)pFVar17 = *(float *)pFVar17 * fVar30 - *(float *)(pFVar9 + lVar11 * 0x10);
      *(float *)(pFVar17 + 4) = *(float *)(pFVar17 + 4) * fVar30 - fVar26;
      *(float *)(pFVar17 + 8) = fVar25 * fVar30 - fVar20;
    }
    for (; (int)uVar19 < (int)uVar13; uVar19 = uVar19 + 1) {
      pFVar17 = (param_4->SegmentData).AllocatorInstance.Data;
      local_1e8 = uVar19;
      if (((pFVar17 <= (FScriptContainerElement *)&local_1e8) &&
          ((FScriptContainerElement *)&local_1e8 <
           pFVar17 + (longlong)(param_4->SegmentData).ArrayMax * 4)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      iVar8 = (param_4->SegmentData).ArrayNum;
      if (iVar8 == (param_4->SegmentData).ArrayMax) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)param_4,&(param_4->SegmentData).ArrayMax);
        (param_4->SegmentData).ArrayNum = iVar8;
      }
      (param_4->SegmentData).ArrayNum = iVar8 + 1;
      *(uint *)((param_4->SegmentData).AllocatorInstance.Data + (longlong)iVar8 * 4) = local_1e8;
    }
    fVar26 = fVar21;
    fVar20 = fVar21;
    fVar25 = fVar22;
    if ((this->GenerationConfig).bHasCustomU0Data == 0) {
      CalculateUVScaleAndOffsets<unsigned_int>
                (&this->UV0Settings,&param_4->SortedIndices,&param_4->TangentAndDistances,local_120,
                 uVar3,uVar13,iVar18,fVar31,&local_18c,&local_190,&local_188);
      fVar26 = local_18c;
      fVar20 = local_188;
      fVar25 = local_190;
    }
    fVar30 = fVar21;
    if ((this->GenerationConfig).bHasCustomU1Data == 0) {
      CalculateUVScaleAndOffsets<unsigned_int>
                (&this->UV1Settings,&param_4->SortedIndices,&param_4->TangentAndDistances,local_120,
                 uVar3,uVar13,iVar18,fVar31,&local_180,&local_184,&local_17c);
      fVar21 = local_17c;
      fVar30 = local_180;
      fVar22 = local_184;
    }
    *(float *)((uchar *)((longlong)FVar14 + 0x38) + lVar15) = fVar26;
    *(float *)((uchar *)((longlong)FVar14 + 0x3c) + lVar15) = fVar25;
    *(float *)((uchar *)((longlong)FVar14 + 0x40) + lVar15) = fVar20;
    *(float *)((uchar *)((longlong)FVar14 + 0x44) + lVar15) = fVar30;
    *(float *)((uchar *)((longlong)FVar14 + 0x48) + lVar15) = fVar22;
    *(float *)((uchar *)((longlong)FVar14 + 0x4c) + lVar15) = fVar21;
    *(uint *)((uchar *)((longlong)FVar14 + 0x50) + lVar15) = uVar3;
    *(uint *)((uchar *)((longlong)FVar14 + 0x54) + lVar15) = uVar13;
  }
  return;
}

// GenerateVertexBufferForRibbonPart<0,0,1> @ 149328b70

void __thiscall
FNiagaraRendererRibbons::GenerateVertexBufferForRibbonPart<0,0,1>
          (FNiagaraRendererRibbons *this,FNiagaraGenerationInputDataCPUAccessors *param_1,
          TArrayView<unsigned_int_const_,int> *param_2,uint param_3,
          FNiagaraRibbonCPUGeneratedVertexData *param_4)

{
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *this_00;
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar12;
  FScriptContainerElement *pFVar13;
  longlong lVar14;
  int iVar15;
  ForElementType<FRibbonMultiRibbonInfo> FVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_res10;
  uint local_res20 [2];
  uint local_1e8;
  float local_1e4;
  undefined8 local_1e0;
  float local_1d8;
  undefined8 local_1d0;
  float local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198 [4];
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float local_150;
  undefined8 local_148;
  float local_140;
  float local_138;
  float fStack_134;
  float local_130;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *local_128;
  FNiagaraDataSetReaderFloat<float> *local_120;
  undefined8 local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined1 local_f4 [180];
  
  this_00 = &param_1->PosData;
  local_120 = &param_1->AgeData;
  uVar2 = (param_4->SortedIndices).ArrayNum;
  local_res20[0] = param_3;
  local_128 = this_00;
  if ((param_2->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
            (this_00,(FNiagaraPosition *)local_f4,*param_2->DataPtr);
  fVar20 = __real_3f800000;
  uVar10 = 1;
  iVar6 = param_2->ArrayNum;
  fVar28 = 0.0;
  local_1e0 = local_f4._0_8_;
  lVar14 = local_1e0;
  local_1d0 = local_f4._0_8_;
  local_148 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
  local_1d8 = (float)local_f4._8_4_;
  local_1c8 = (float)local_f4._8_4_;
  local_1b0 = 0.0;
  local_res10 = 0.0;
  local_1e4 = __real_3f800000;
  local_140 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar26 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar25 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  uVar27 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (1 < iVar6) {
    lVar11 = 4;
    local_1e0._4_4_ = SUB84(local_f4._0_8_,4);
    fVar22 = local_1e0._4_4_;
    local_1e0._0_4_ = (float)local_f4._0_8_;
    fVar18 = (float)local_1e0;
    local_1e0 = lVar14;
    do {
      uVar17 = 0;
      if ((int)uVar10 < iVar6) {
        uVar17 = ~uVar10 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                (this_00,(FNiagaraPosition *)&local_158,
                 *(int *)((longlong)param_2->DataPtr + lVar11));
      uVar25 = local_158 - fVar18;
      local_1c8 = local_150;
      uVar26 = fStack_154 - fVar22;
      local_1d0 = CONCAT44(fStack_154,local_158);
      uVar27 = local_150 - (float)local_f4._8_4_;
      fVar28 = SQRT((float)uVar26 * (float)uVar26 + (float)uVar25 * (float)uVar25 +
                    (float)uVar27 * (float)uVar27);
      if (GNiagaraRibbonMinSegmentLength < fVar28) {
        fVar18 = fVar20 / fVar28;
        uVar25 = fVar18 * (float)uVar25;
        uVar26 = fVar18 * (float)uVar26;
        uVar27 = fVar18 * (float)uVar27;
        pFVar7 = (FScriptContainerElement *)
                 TArrayView<unsigned_int_const_,int>::operator[](param_2,0);
        pFVar13 = (param_4->SortedIndices).AllocatorInstance.Data;
        if (((pFVar13 <= pFVar7) &&
            (pFVar7 < pFVar13 + (longlong)(param_4->SortedIndices).ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (param_4->SortedIndices).ArrayNum;
        piVar1 = &(param_4->SortedIndices).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_4->SortedIndices).AllocatorInstance,piVar1);
        }
        (param_4->SortedIndices).ArrayNum = iVar6 + 1;
        *(uint *)((param_4->SortedIndices).AllocatorInstance.Data + (longlong)iVar6 * 4) =
             *(uint *)pFVar7;
        pFVar13 = (param_4->TangentAndDistances).AllocatorInstance.Data;
        uStack_17c = 0;
        local_188 = (float)uVar25;
        fStack_184 = (float)uVar26;
        fStack_180 = (float)uVar27;
        if (((pFVar13 <= (FScriptContainerElement *)&local_188) &&
            ((FScriptContainerElement *)&local_188 <
             pFVar13 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (param_4->TangentAndDistances).ArrayNum;
        piVar1 = &(param_4->TangentAndDistances).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
        }
        (param_4->TangentAndDistances).ArrayNum = iVar6 + 1;
        pFVar13 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        *(ulonglong *)pFVar13 = CONCAT44(fStack_184,local_188);
        *(ulonglong *)(pFVar13 + 8) = CONCAT44(uStack_17c,fStack_180);
        pFVar13 = (param_4->MultiRibbonIndices).AllocatorInstance.Data;
        if (((pFVar13 <= (FScriptContainerElement *)local_res20) &&
            ((FScriptContainerElement *)local_res20 <
             pFVar13 + (longlong)(param_4->MultiRibbonIndices).ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (param_4->MultiRibbonIndices).ArrayNum;
        piVar1 = &(param_4->MultiRibbonIndices).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_4->MultiRibbonIndices).AllocatorInstance,piVar1);
        }
        (param_4->MultiRibbonIndices).ArrayNum = iVar6 + 1;
        *(uint *)((param_4->MultiRibbonIndices).AllocatorInstance.Data + (longlong)iVar6 * 4) =
             local_res20[0];
        break;
      }
      iVar6 = param_2->ArrayNum;
      uVar10 = uVar10 + 1;
      lVar11 = lVar11 + 4;
      fVar28 = 0.0;
    } while ((int)uVar10 < iVar6);
  }
  fVar18 = __real_322bcc77;
  iVar6 = param_2->ArrayNum;
  uVar17 = uVar10 + 1;
  fVar22 = 0.0;
  fVar24 = 0.0;
  if ((int)uVar17 < iVar6) {
    lVar14 = (longlong)(int)uVar17 * 4;
    lVar11 = (longlong)(int)uVar10 * 4;
    fVar19 = local_1c8;
    do {
      uVar5 = 0;
      if ((int)uVar17 < iVar6) {
        uVar5 = ~uVar17 >> 0x1f;
      }
      local_1e0 = lVar14;
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                (local_128,(FNiagaraPosition *)&local_138,
                 *(int *)((longlong)param_2->DataPtr + lVar14));
      fVar20 = local_138 - (float)local_1d0;
      fVar22 = fStack_134 - local_1d0._4_4_;
      lVar14 = CONCAT44(fStack_134,local_138);
      fVar24 = local_130 - fVar19;
      local_1b4 = local_130;
      fVar30 = SQRT(fVar22 * fVar22 + fVar20 * fVar20 + fVar24 * fVar24);
      if ((GNiagaraRibbonMinSegmentLength < fVar30) || (uVar17 == iVar6 - 1U)) {
        fVar29 = fVar30;
        if (fVar30 <= GNiagaraRibbonMinSegmentLength) {
          fVar29 = GNiagaraRibbonMinSegmentLength;
        }
        fVar29 = local_1e4 / fVar29;
        fVar21 = fVar29 * fVar20 + (float)uVar25;
        fVar23 = fVar29 * fVar22 + (float)uVar26;
        local_110 = fVar29 * fVar24 + (float)uVar27;
        fVar19 = fVar23 * fVar23 + fVar21 * fVar21 + local_110 * local_110;
        if (fVar19 == local_1e4) {
          local_1c0 = CONCAT44(fVar23,fVar21);
          uVar26 = fVar21;
          local_1b8 = local_110;
        }
        else if (fVar18 <= fVar19) {
          fVar19 = __real_3f800000 / SQRT(fVar19);
          local_1b8 = fVar19 * local_110;
          uVar26 = fVar19 * fVar21;
          local_1c0 = CONCAT44(fVar19 * fVar23,(undefined4)local_1c0);
        }
        else {
          local_1c0 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
          local_1b8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar26 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
        local_118 = CONCAT44(fVar23,fVar21);
        pTVar12 = &param_4->SortedIndices;
        fVar19 = (this->GenerationConfig).CurveTension;
        if (__real_3f7d70a4 <= fVar19) {
          fVar19 = __real_3f7d70a4;
        }
        uVar5 = 0;
        if ((int)uVar10 < iVar6) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        fVar19 = local_1e4 - fVar19;
        local_res10 = local_res10 + fVar28;
        fVar21 = local_1c0._4_4_ * fVar19;
        fVar28 = fVar19 * (float)uVar26;
        fVar19 = local_1b8 * fVar19;
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar13 = (pTVar12->AllocatorInstance).Data;
        pFVar7 = (FScriptContainerElement *)((longlong)param_2->DataPtr + lVar11);
        if (((pFVar13 <= pFVar7) &&
            (pFVar7 < pFVar13 + (longlong)(param_4->SortedIndices).ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (param_4->SortedIndices).ArrayNum;
        piVar1 = &(param_4->SortedIndices).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar12->AllocatorInstance,piVar1);
        }
        (param_4->SortedIndices).ArrayNum = iVar6 + 1;
        *(undefined4 *)((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 4) =
             *(undefined4 *)pFVar7;
        pFVar13 = (param_4->TangentAndDistances).AllocatorInstance.Data;
        local_178 = fVar28;
        fStack_174 = fVar21;
        fStack_170 = fVar19;
        fStack_16c = local_res10;
        if (((pFVar13 <= (FScriptContainerElement *)&local_178) &&
            ((FScriptContainerElement *)&local_178 <
             pFVar13 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (param_4->TangentAndDistances).ArrayNum;
        piVar1 = &(param_4->TangentAndDistances).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
        }
        (param_4->TangentAndDistances).ArrayNum = iVar6 + 1;
        pFVar13 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        *(ulonglong *)pFVar13 = CONCAT44(fStack_174,local_178);
        *(ulonglong *)(pFVar13 + 8) = CONCAT44(fStack_16c,fStack_170);
        pFVar13 = (param_4->MultiRibbonIndices).AllocatorInstance.Data;
        if (((pFVar13 <= (FScriptContainerElement *)local_res20) &&
            ((FScriptContainerElement *)local_res20 <
             pFVar13 + (longlong)(param_4->MultiRibbonIndices).ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (param_4->MultiRibbonIndices).ArrayNum;
        piVar1 = &(param_4->MultiRibbonIndices).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_4->MultiRibbonIndices).AllocatorInstance,piVar1);
        }
        (param_4->MultiRibbonIndices).ArrayNum = iVar6 + 1;
        *(uint *)((param_4->MultiRibbonIndices).AllocatorInstance.Data + (longlong)iVar6 * 4) =
             local_res20[0];
        param_4->TotalSegmentLength = fVar30 + param_4->TotalSegmentLength;
        lVar11 = local_1e0;
        uVar26 = fVar29 * fVar22;
        fVar28 = fVar30;
        fVar19 = local_1b4;
        uVar10 = uVar17;
        uVar25 = fVar29 * fVar20;
        uVar27 = fVar29 * fVar24;
        local_1d0 = lVar14;
      }
      iVar6 = param_2->ArrayNum;
      lVar14 = local_1e0 + 4;
      uVar17 = uVar17 + 1;
      fVar22 = local_res10;
      fVar20 = local_1e4;
      fVar24 = local_1b0;
      local_1e0 = lVar14;
    } while ((int)uVar17 < iVar6);
  }
  pTVar12 = &param_4->SortedIndices;
  if (fVar24 < fVar28) {
    fVar22 = fVar22 + fVar28;
    pFVar7 = (FScriptContainerElement *)
             TArrayView<unsigned_int_const_,int>::operator[](param_2,uVar10);
    pFVar13 = (pTVar12->AllocatorInstance).Data;
    if (((pFVar13 <= pFVar7) && (pFVar7 < pFVar13 + (longlong)(param_4->SortedIndices).ArrayMax * 4)
        ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (param_4->SortedIndices).ArrayNum;
    piVar1 = &(param_4->SortedIndices).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar12->AllocatorInstance,piVar1);
      (param_4->SortedIndices).ArrayNum = iVar6;
    }
    (param_4->SortedIndices).ArrayNum = iVar6 + 1;
    *(uint *)((pTVar12->AllocatorInstance).Data + (longlong)iVar6 * 4) = *(uint *)pFVar7;
    pFVar13 = (param_4->TangentAndDistances).AllocatorInstance.Data;
    local_168 = (float)uVar25;
    fStack_164 = (float)uVar26;
    fStack_160 = (float)uVar27;
    fStack_15c = fVar22;
    if (((pFVar13 <= (FScriptContainerElement *)&local_168) &&
        ((FScriptContainerElement *)&local_168 <
         pFVar13 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (param_4->TangentAndDistances).ArrayNum;
    piVar1 = &(param_4->TangentAndDistances).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
    }
    (param_4->TangentAndDistances).ArrayNum = iVar6 + 1;
    pFVar13 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
    *(ulonglong *)pFVar13 = CONCAT44(fStack_164,local_168);
    *(ulonglong *)(pFVar13 + 8) = CONCAT44(fStack_15c,fStack_160);
    pFVar13 = (param_4->MultiRibbonIndices).AllocatorInstance.Data;
    if (((pFVar13 <= (FScriptContainerElement *)local_res20) &&
        ((FScriptContainerElement *)local_res20 <
         pFVar13 + (longlong)(param_4->MultiRibbonIndices).ArrayMax * 4)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (param_4->MultiRibbonIndices).ArrayNum;
    piVar1 = &(param_4->MultiRibbonIndices).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(param_4->MultiRibbonIndices).AllocatorInstance,piVar1);
    }
    (param_4->MultiRibbonIndices).ArrayNum = iVar6 + 1;
    *(uint *)((param_4->MultiRibbonIndices).AllocatorInstance.Data + (longlong)iVar6 * 4) =
         local_res20[0];
  }
  iVar6 = (param_4->SortedIndices).ArrayNum;
  uVar10 = iVar6 - 1;
  iVar15 = uVar10 - uVar2;
  if (0 < iVar15) {
    lVar14 = (longlong)(int)local_res20[0];
    uVar17 = 0;
    if ((int)local_res20[0] < (param_4->RibbonInfoLookup).ArrayNum) {
      uVar17 = ~local_res20[0] >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar16 = (param_4->RibbonInfoLookup).AllocatorInstance.SecondaryData;
    if (FVar16 == (ForElementType<FRibbonMultiRibbonInfo>)0x0) {
      FVar16 = (ForElementType<FRibbonMultiRibbonInfo>)&param_4->RibbonInfoLookup;
    }
    lVar14 = lVar14 * 0x58;
    puVar8 = TArrayView<unsigned_int_const_,int>::operator[](param_2,0);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
              (local_128,(FNiagaraPosition *)&local_10c,*puVar8);
    *(double *)((longlong)FVar16 + lVar14) = (double)local_10c;
    *(double *)((uchar *)((longlong)FVar16 + 8) + lVar14) = (double)local_108;
    *(double *)((uchar *)((longlong)FVar16 + 0x10) + lVar14) = (double)local_104;
    puVar8 = TArrayView<unsigned_int_const_,int>::Last(param_2,0);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
              (local_128,(FNiagaraPosition *)&local_100,*puVar8);
    *(double *)((uchar *)((longlong)FVar16 + 0x18) + lVar14) = (double)local_100;
    *(double *)((uchar *)((longlong)FVar16 + 0x20) + lVar14) = (double)local_fc;
    *(double *)((uchar *)((longlong)FVar16 + 0x28) + lVar14) = (double)local_f8;
    *(int *)((uchar *)((longlong)FVar16 + 0x30) + lVar14) = (param_4->SegmentData).ArrayNum;
    *(int *)((uchar *)((longlong)FVar16 + 0x34) + lVar14) = iVar15;
    uVar17 = uVar2;
    if (1 < iVar15) {
      uVar5 = 0;
      if ((int)uVar2 < (param_4->TangentAndDistances).ArrayNum) {
        uVar5 = ~uVar2 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar13 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10;
      uVar9 = uVar2 + 1;
      uVar5 = 0;
      if ((int)uVar9 < (param_4->TangentAndDistances).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = (param_4->TangentAndDistances).AllocatorInstance.Data;
      fVar28 = *(float *)(pFVar13 + 8);
      lVar11 = (longlong)(int)uVar9;
      fVar18 = *(float *)(pFVar7 + lVar11 * 0x10 + 4);
      fVar19 = *(float *)(pFVar7 + lVar11 * 0x10 + 8);
      fVar30 = *(float *)(pFVar13 + 4) * fVar18 +
               *(float *)pFVar13 * *(float *)(pFVar7 + lVar11 * 0x10);
      fVar30 = (fVar28 + fVar28) * fVar19 + fVar30 + fVar30;
      *(float *)pFVar13 = *(float *)pFVar13 * fVar30 - *(float *)(pFVar7 + lVar11 * 0x10);
      *(float *)(pFVar13 + 4) = *(float *)(pFVar13 + 4) * fVar30 - fVar18;
      *(float *)(pFVar13 + 8) = fVar28 * fVar30 - fVar19;
      uVar5 = 0;
      if ((int)uVar10 < (param_4->TangentAndDistances).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = iVar6 - 2;
      pFVar13 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10
      ;
      uVar9 = 0;
      if ((int)uVar5 < (param_4->TangentAndDistances).ArrayNum) {
        uVar9 = ~uVar5 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = (param_4->TangentAndDistances).AllocatorInstance.Data;
      fVar28 = *(float *)(pFVar13 + 8);
      lVar11 = (longlong)(int)uVar5;
      fVar18 = *(float *)(pFVar7 + lVar11 * 0x10 + 4);
      fVar19 = *(float *)(pFVar7 + lVar11 * 0x10 + 8);
      fVar30 = fVar18 * *(float *)(pFVar13 + 4) +
               *(float *)(pFVar7 + lVar11 * 0x10) * *(float *)pFVar13;
      fVar30 = (fVar28 + fVar28) * fVar19 + fVar30 + fVar30;
      *(float *)pFVar13 = fVar30 * *(float *)pFVar13 - *(float *)(pFVar7 + lVar11 * 0x10);
      *(float *)(pFVar13 + 4) = fVar30 * *(float *)(pFVar13 + 4) - fVar18;
      *(float *)(pFVar13 + 8) = fVar30 * fVar28 - fVar19;
    }
    for (; (int)uVar17 < (int)uVar10; uVar17 = uVar17 + 1) {
      pFVar13 = (param_4->SegmentData).AllocatorInstance.Data;
      local_1e8 = uVar17;
      if (((pFVar13 <= (FScriptContainerElement *)&local_1e8) &&
          ((FScriptContainerElement *)&local_1e8 <
           pFVar13 + (longlong)(param_4->SegmentData).ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (param_4->SegmentData).ArrayNum;
      if (iVar6 == (param_4->SegmentData).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)param_4,&(param_4->SegmentData).ArrayMax);
        (param_4->SegmentData).ArrayNum = iVar6;
      }
      (param_4->SegmentData).ArrayNum = iVar6 + 1;
      *(uint *)((param_4->SegmentData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_1e8;
    }
    fVar19 = fVar20;
    fVar28 = fVar24;
    fVar18 = fVar20;
    if ((this->GenerationConfig).bHasCustomU0Data == 0) {
      CalculateUVScaleAndOffsets<unsigned_int>
                (&this->UV0Settings,&param_4->SortedIndices,&param_4->TangentAndDistances,local_120,
                 uVar2,uVar10,iVar15,fVar22,&local_1a8,&local_1ac,&local_1a4);
      fVar19 = local_1a8;
      fVar28 = local_1ac;
      fVar18 = local_1a4;
    }
    fVar30 = fVar20;
    if ((this->GenerationConfig).bHasCustomU1Data == 0) {
      CalculateUVScaleAndOffsets<unsigned_int>
                (&this->UV1Settings,&param_4->SortedIndices,&param_4->TangentAndDistances,local_120,
                 uVar2,uVar10,iVar15,fVar22,&local_19c,&local_1a0,local_198);
      fVar20 = local_198[0];
      fVar30 = local_19c;
      fVar24 = local_1a0;
    }
    *(float *)((uchar *)((longlong)FVar16 + 0x38) + lVar14) = fVar19;
    *(float *)((uchar *)((longlong)FVar16 + 0x3c) + lVar14) = fVar28;
    *(float *)((uchar *)((longlong)FVar16 + 0x40) + lVar14) = fVar18;
    *(float *)((uchar *)((longlong)FVar16 + 0x44) + lVar14) = fVar30;
    *(float *)((uchar *)((longlong)FVar16 + 0x48) + lVar14) = fVar24;
    *(float *)((uchar *)((longlong)FVar16 + 0x4c) + lVar14) = fVar20;
    *(uint *)((uchar *)((longlong)FVar16 + 0x50) + lVar14) = uVar2;
    *(uint *)((uchar *)((longlong)FVar16 + 0x54) + lVar14) = uVar10;
  }
  return;
}

// GenerateVertexBufferForRibbonPart<0,0,0> @ 149329ce0

void __thiscall
FNiagaraRendererRibbons::GenerateVertexBufferForRibbonPart<0,0,0>
          (FNiagaraRendererRibbons *this,FNiagaraGenerationInputDataCPUAccessors *param_1,
          TArrayView<unsigned_int_const_,int> *param_2,uint param_3,
          FNiagaraRibbonCPUGeneratedVertexData *param_4)

{
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *this_00;
  int *piVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *pTVar13;
  FScriptContainerElement *pFVar14;
  longlong lVar15;
  uint uVar16;
  ForElementType<FRibbonMultiRibbonInfo> FVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float local_res10;
  uint local_1e8 [2];
  undefined8 local_1e0;
  float local_1d8;
  undefined8 local_1d0;
  float local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198 [4];
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float local_150;
  undefined8 local_148;
  float local_140;
  float local_138;
  float fStack_134;
  float local_130;
  FNiagaraDataSetReaderFloat<FNiagaraPosition> *local_128;
  FNiagaraDataSetReaderFloat<float> *local_120;
  undefined8 local_118;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  undefined1 local_f4 [180];
  
  this_00 = &param_1->PosData;
  local_120 = &param_1->AgeData;
  uVar2 = (param_4->SortedIndices).ArrayNum;
  local_128 = this_00;
  if ((param_2->ArrayNum < 1) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
            (this_00,(FNiagaraPosition *)local_f4,*param_2->DataPtr);
  fVar18 = __real_3f800000;
  uVar10 = 1;
  iVar6 = param_2->ArrayNum;
  fVar26 = 0.0;
  local_1e0 = local_f4._0_8_;
  lVar15 = local_1e0;
  local_1d0 = local_f4._0_8_;
  local_148 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                       UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
  local_1d8 = (float)local_f4._8_4_;
  local_1c8 = (float)local_f4._8_4_;
  local_1b0 = 0.0;
  local_res10 = 0.0;
  local_140 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  uVar24 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y;
  uVar22 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
  uVar25 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  if (1 < iVar6) {
    lVar12 = 4;
    local_1e0._4_4_ = SUB84(local_f4._0_8_,4);
    fVar28 = local_1e0._4_4_;
    local_1e0._0_4_ = (float)local_f4._0_8_;
    fVar27 = (float)local_1e0;
    local_1e0 = lVar15;
    do {
      uVar16 = 0;
      if ((int)uVar10 < iVar6) {
        uVar16 = ~uVar10 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                (this_00,(FNiagaraPosition *)&local_158,
                 *(int *)(lVar12 + (longlong)param_2->DataPtr));
      uVar22 = local_158 - fVar27;
      local_1c8 = local_150;
      uVar24 = fStack_154 - fVar28;
      local_1d0 = CONCAT44(fStack_154,local_158);
      uVar25 = local_150 - (float)local_f4._8_4_;
      fVar26 = SQRT((float)uVar24 * (float)uVar24 + (float)uVar22 * (float)uVar22 +
                    (float)uVar25 * (float)uVar25);
      if (GNiagaraRibbonMinSegmentLength < fVar26) {
        fVar27 = fVar18 / fVar26;
        uVar22 = fVar27 * (float)uVar22;
        uVar24 = fVar27 * (float)uVar24;
        uVar25 = fVar27 * (float)uVar25;
        pFVar7 = (FScriptContainerElement *)
                 TArrayView<unsigned_int_const_,int>::operator[](param_2,0);
        pFVar14 = (param_4->SortedIndices).AllocatorInstance.Data;
        if (((pFVar14 <= pFVar7) &&
            (pFVar7 < pFVar14 + (longlong)(param_4->SortedIndices).ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (param_4->SortedIndices).ArrayNum;
        piVar1 = &(param_4->SortedIndices).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&(param_4->SortedIndices).AllocatorInstance,piVar1);
        }
        (param_4->SortedIndices).ArrayNum = iVar6 + 1;
        *(uint *)((param_4->SortedIndices).AllocatorInstance.Data + (longlong)iVar6 * 4) =
             *(uint *)pFVar7;
        pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data;
        uStack_17c = 0;
        local_188 = (float)uVar22;
        fStack_184 = (float)uVar24;
        fStack_180 = (float)uVar25;
        if (((pFVar14 <= (FScriptContainerElement *)&local_188) &&
            ((FScriptContainerElement *)&local_188 <
             pFVar14 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (param_4->TangentAndDistances).ArrayNum;
        piVar1 = &(param_4->TangentAndDistances).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
        }
        (param_4->TangentAndDistances).ArrayNum = iVar6 + 1;
        pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        *(ulonglong *)pFVar14 = CONCAT44(fStack_184,local_188);
        *(ulonglong *)(pFVar14 + 8) = CONCAT44(uStack_17c,fStack_180);
        break;
      }
      iVar6 = param_2->ArrayNum;
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 4;
      fVar26 = 0.0;
    } while ((int)uVar10 < iVar6);
  }
  iVar6 = param_2->ArrayNum;
  uVar16 = uVar10 + 1;
  fVar27 = 0.0;
  fVar28 = 0.0;
  if ((int)uVar16 < iVar6) {
    lVar15 = (longlong)(int)uVar16 * 4;
    lVar12 = (longlong)(int)uVar10 * 4;
    fVar20 = local_1c8;
    do {
      uVar5 = 0;
      if ((int)uVar16 < iVar6) {
        uVar5 = ~uVar16 >> 0x1f;
      }
      local_1e0 = lVar15;
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
                (local_128,(FNiagaraPosition *)&local_138,
                 *(int *)(lVar15 + (longlong)param_2->DataPtr));
      fVar27 = local_138 - (float)local_1d0;
      fVar28 = fStack_134 - local_1d0._4_4_;
      lVar15 = CONCAT44(fStack_134,local_138);
      fVar29 = local_130 - fVar20;
      local_1b4 = local_130;
      fVar30 = SQRT(fVar28 * fVar28 + fVar27 * fVar27 + fVar29 * fVar29);
      if ((GNiagaraRibbonMinSegmentLength < fVar30) || (uVar16 == iVar6 - 1U)) {
        fVar19 = fVar30;
        if (fVar30 <= GNiagaraRibbonMinSegmentLength) {
          fVar19 = GNiagaraRibbonMinSegmentLength;
        }
        fVar19 = fVar18 / fVar19;
        fVar23 = fVar27 * fVar19 + (float)uVar22;
        fVar21 = fVar28 * fVar19 + (float)uVar24;
        local_110 = fVar29 * fVar19 + (float)uVar25;
        fVar20 = fVar21 * fVar21 + fVar23 * fVar23 + local_110 * local_110;
        if (fVar20 == fVar18) {
          local_1c0 = CONCAT44(fVar21,fVar23);
          uVar24 = fVar23;
          local_1b8 = local_110;
        }
        else if (__real_322bcc77 <= fVar20) {
          fVar20 = __real_3f800000 / SQRT(fVar20);
          local_1b8 = fVar20 * local_110;
          uVar24 = fVar20 * fVar23;
          local_1c0 = CONCAT44(fVar20 * fVar21,(undefined4)local_1c0);
        }
        else {
          local_1c0 = CONCAT44(UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Y,
                               UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X);
          local_1b8 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
          uVar24 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.X;
        }
        local_118 = CONCAT44(fVar21,fVar23);
        pTVar13 = &param_4->SortedIndices;
        local_res10 = local_res10 + fVar26;
        fVar26 = (this->GenerationConfig).CurveTension;
        if (__real_3f7d70a4 <= fVar26) {
          fVar26 = __real_3f7d70a4;
        }
        uVar5 = 0;
        if ((int)uVar10 < iVar6) {
          uVar5 = ~uVar10 >> 0x1f;
        }
        fVar26 = fVar18 - fVar26;
        fVar20 = (float)uVar24 * fVar26;
        fVar21 = local_1c0._4_4_ * fVar26;
        fVar26 = local_1b8 * fVar26;
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                               ,0x14f,L"Array index out of bounds: %lld from an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pFVar14 = (pTVar13->AllocatorInstance).Data;
        pFVar7 = (FScriptContainerElement *)((longlong)param_2->DataPtr + lVar12);
        if (((pFVar14 <= pFVar7) &&
            (pFVar7 < pFVar14 + (longlong)(param_4->SortedIndices).ArrayMax * 4)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (param_4->SortedIndices).ArrayNum;
        piVar1 = &(param_4->SortedIndices).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&pTVar13->AllocatorInstance,piVar1);
        }
        (param_4->SortedIndices).ArrayNum = iVar6 + 1;
        *(undefined4 *)((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 4) =
             *(undefined4 *)pFVar7;
        pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data;
        local_178 = fVar20;
        fStack_174 = fVar21;
        fStack_170 = fVar26;
        fStack_16c = local_res10;
        if (((pFVar14 <= (FScriptContainerElement *)&local_178) &&
            ((FScriptContainerElement *)&local_178 <
             pFVar14 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        iVar6 = (param_4->TangentAndDistances).ArrayNum;
        piVar1 = &(param_4->TangentAndDistances).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
        }
        (param_4->TangentAndDistances).ArrayNum = iVar6 + 1;
        pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
        *(ulonglong *)pFVar14 = CONCAT44(fStack_174,local_178);
        *(ulonglong *)(pFVar14 + 8) = CONCAT44(fStack_16c,fStack_170);
        param_4->TotalSegmentLength = fVar30 + param_4->TotalSegmentLength;
        lVar12 = local_1e0;
        fVar20 = local_1b4;
        uVar24 = fVar28 * fVar19;
        fVar26 = fVar30;
        uVar10 = uVar16;
        uVar22 = fVar27 * fVar19;
        uVar25 = fVar29 * fVar19;
        local_1d0 = lVar15;
      }
      iVar6 = param_2->ArrayNum;
      lVar15 = local_1e0 + 4;
      uVar16 = uVar16 + 1;
      fVar27 = local_1b0;
      fVar28 = local_res10;
      local_1e0 = lVar15;
    } while ((int)uVar16 < iVar6);
  }
  pTVar13 = &param_4->SortedIndices;
  if (fVar27 < fVar26) {
    fVar28 = fVar28 + fVar26;
    pFVar7 = (FScriptContainerElement *)
             TArrayView<unsigned_int_const_,int>::operator[](param_2,uVar10);
    pFVar14 = (pTVar13->AllocatorInstance).Data;
    if (((pFVar14 <= pFVar7) && (pFVar7 < pFVar14 + (longlong)(param_4->SortedIndices).ArrayMax * 4)
        ) && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (param_4->SortedIndices).ArrayNum;
    piVar1 = &(param_4->SortedIndices).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&pTVar13->AllocatorInstance,piVar1);
      (param_4->SortedIndices).ArrayNum = iVar6;
    }
    (param_4->SortedIndices).ArrayNum = iVar6 + 1;
    *(uint *)((pTVar13->AllocatorInstance).Data + (longlong)iVar6 * 4) = *(uint *)pFVar7;
    pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data;
    local_168 = (float)uVar22;
    fStack_164 = (float)uVar24;
    fStack_160 = (float)uVar25;
    fStack_15c = fVar28;
    if (((pFVar14 <= (FScriptContainerElement *)&local_168) &&
        ((FScriptContainerElement *)&local_168 <
         pFVar14 + (longlong)(param_4->TangentAndDistances).ArrayMax * 0x10)) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar6 = (param_4->TangentAndDistances).ArrayNum;
    piVar1 = &(param_4->TangentAndDistances).ArrayMax;
    if (iVar6 == *piVar1) {
      iVar6 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x1010,&(param_4->TangentAndDistances).AllocatorInstance,piVar1);
    }
    (param_4->TangentAndDistances).ArrayNum = iVar6 + 1;
    pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)iVar6 * 0x10;
    *(ulonglong *)pFVar14 = CONCAT44(fStack_164,local_168);
    *(ulonglong *)(pFVar14 + 8) = CONCAT44(fStack_15c,fStack_160);
  }
  iVar6 = (param_4->SortedIndices).ArrayNum;
  uVar10 = iVar6 - 1;
  iVar11 = uVar10 - uVar2;
  if (0 < iVar11) {
    uVar16 = 0;
    if ((int)param_3 < (param_4->RibbonInfoLookup).ArrayNum) {
      uVar16 = ~param_3 >> 0x1f;
    }
    if ((uVar16 == 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar17 = (param_4->RibbonInfoLookup).AllocatorInstance.SecondaryData;
    if (FVar17 == (ForElementType<FRibbonMultiRibbonInfo>)0x0) {
      FVar17 = (ForElementType<FRibbonMultiRibbonInfo>)&param_4->RibbonInfoLookup;
    }
    lVar15 = (longlong)(int)param_3 * 0x58;
    puVar8 = TArrayView<unsigned_int_const_,int>::operator[](param_2,0);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
              (local_128,(FNiagaraPosition *)&local_10c,*puVar8);
    *(double *)((longlong)FVar17 + lVar15) = (double)local_10c;
    *(double *)((uchar *)((longlong)FVar17 + 8) + lVar15) = (double)local_108;
    *(double *)((uchar *)((longlong)FVar17 + 0x10) + lVar15) = (double)local_104;
    puVar8 = TArrayView<unsigned_int_const_,int>::Last(param_2,0);
    FNiagaraDataSetReaderFloat<FNiagaraPosition>::Get
              (local_128,(FNiagaraPosition *)&local_100,*puVar8);
    *(double *)((uchar *)((longlong)FVar17 + 0x18) + lVar15) = (double)local_100;
    *(double *)((uchar *)((longlong)FVar17 + 0x20) + lVar15) = (double)local_fc;
    *(double *)((uchar *)((longlong)FVar17 + 0x28) + lVar15) = (double)local_f8;
    *(int *)((uchar *)((longlong)FVar17 + 0x30) + lVar15) = (param_4->SegmentData).ArrayNum;
    *(int *)((uchar *)((longlong)FVar17 + 0x34) + lVar15) = iVar11;
    uVar16 = uVar2;
    if (1 < iVar11) {
      uVar5 = 0;
      if ((int)uVar2 < (param_4->TangentAndDistances).ArrayNum) {
        uVar5 = ~uVar2 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)(int)uVar2 * 0x10;
      uVar9 = uVar2 + 1;
      uVar5 = 0;
      if ((int)uVar9 < (param_4->TangentAndDistances).ArrayNum) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = (param_4->TangentAndDistances).AllocatorInstance.Data;
      fVar26 = *(float *)(pFVar14 + 8);
      lVar12 = (longlong)(int)uVar9;
      fVar20 = *(float *)(pFVar7 + lVar12 * 0x10 + 4);
      fVar29 = *(float *)(pFVar7 + lVar12 * 0x10 + 8);
      fVar30 = *(float *)(pFVar14 + 4) * fVar20 +
               *(float *)pFVar14 * *(float *)(pFVar7 + lVar12 * 0x10);
      fVar30 = (fVar26 + fVar26) * fVar29 + fVar30 + fVar30;
      *(float *)pFVar14 = *(float *)pFVar14 * fVar30 - *(float *)(pFVar7 + lVar12 * 0x10);
      *(float *)(pFVar14 + 4) = *(float *)(pFVar14 + 4) * fVar30 - fVar20;
      *(float *)(pFVar14 + 8) = fVar26 * fVar30 - fVar29;
      uVar5 = 0;
      if ((int)uVar10 < (param_4->TangentAndDistances).ArrayNum) {
        uVar5 = ~uVar10 >> 0x1f;
      }
      if ((uVar5 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar5 = iVar6 - 2;
      pFVar14 = (param_4->TangentAndDistances).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x10
      ;
      uVar9 = 0;
      if ((int)uVar5 < (param_4->TangentAndDistances).ArrayNum) {
        uVar9 = ~uVar5 >> 0x1f;
      }
      if ((uVar9 == 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pFVar7 = (param_4->TangentAndDistances).AllocatorInstance.Data;
      fVar26 = *(float *)(pFVar14 + 8);
      lVar12 = (longlong)(int)uVar5;
      fVar20 = *(float *)(pFVar7 + lVar12 * 0x10 + 4);
      fVar29 = *(float *)(pFVar7 + lVar12 * 0x10 + 8);
      fVar30 = *(float *)(pFVar14 + 4) * fVar20 +
               *(float *)pFVar14 * *(float *)(pFVar7 + lVar12 * 0x10);
      fVar30 = (fVar26 + fVar26) * fVar29 + fVar30 + fVar30;
      *(float *)pFVar14 = *(float *)pFVar14 * fVar30 - *(float *)(pFVar7 + lVar12 * 0x10);
      *(float *)(pFVar14 + 4) = *(float *)(pFVar14 + 4) * fVar30 - fVar20;
      *(float *)(pFVar14 + 8) = fVar26 * fVar30 - fVar29;
    }
    for (; (int)uVar16 < (int)uVar10; uVar16 = uVar16 + 1) {
      pFVar14 = (param_4->SegmentData).AllocatorInstance.Data;
      local_1e8[0] = uVar16;
      if (((pFVar14 <= (FScriptContainerElement *)local_1e8) &&
          ((FScriptContainerElement *)local_1e8 <
           pFVar14 + (longlong)(param_4->SegmentData).ArrayMax * 4)) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar4)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar6 = (param_4->SegmentData).ArrayNum;
      if (iVar6 == (param_4->SegmentData).ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,(ForAnyElementType *)param_4,&(param_4->SegmentData).ArrayMax);
        (param_4->SegmentData).ArrayNum = iVar6;
      }
      (param_4->SegmentData).ArrayNum = iVar6 + 1;
      *(uint *)((param_4->SegmentData).AllocatorInstance.Data + (longlong)iVar6 * 4) = local_1e8[0];
    }
    fVar20 = fVar18;
    fVar29 = fVar18;
    fVar26 = fVar27;
    if ((this->GenerationConfig).bHasCustomU0Data == 0) {
      CalculateUVScaleAndOffsets<unsigned_int>
                (&this->UV0Settings,&param_4->SortedIndices,&param_4->TangentAndDistances,local_120,
                 uVar2,uVar10,iVar11,fVar28,&local_1a8,&local_1ac,&local_1a4);
      fVar20 = local_1a8;
      fVar29 = local_1a4;
      fVar26 = local_1ac;
    }
    fVar30 = fVar18;
    if ((this->GenerationConfig).bHasCustomU1Data == 0) {
      CalculateUVScaleAndOffsets<unsigned_int>
                (&this->UV1Settings,&param_4->SortedIndices,&param_4->TangentAndDistances,local_120,
                 uVar2,uVar10,iVar11,fVar28,&local_19c,&local_1a0,local_198);
      fVar18 = local_198[0];
      fVar30 = local_19c;
      fVar27 = local_1a0;
    }
    *(float *)((uchar *)((longlong)FVar17 + 0x38) + lVar15) = fVar20;
    *(float *)((uchar *)((longlong)FVar17 + 0x3c) + lVar15) = fVar26;
    *(float *)((uchar *)((longlong)FVar17 + 0x40) + lVar15) = fVar29;
    *(float *)((uchar *)((longlong)FVar17 + 0x44) + lVar15) = fVar30;
    *(float *)((uchar *)((longlong)FVar17 + 0x48) + lVar15) = fVar27;
    *(float *)((uchar *)((longlong)FVar17 + 0x4c) + lVar15) = fVar18;
    *(uint *)((uchar *)((longlong)FVar17 + 0x50) + lVar15) = uVar2;
    *(uint *)((uchar *)((longlong)FVar17 + 0x54) + lVar15) = uVar10;
  }
  return;
}

// FNiagaraRendererRibbons @ 1493343f0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

FNiagaraRendererRibbons * __thiscall
FNiagaraRendererRibbons::FNiagaraRendererRibbons
          (FNiagaraRendererRibbons *this,Type param_1,UNiagaraRendererProperties *param_2,
          FNiagaraEmitterInstance *param_3)

{
  FNiagaraRibbonShapeGeometryData *pFVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  float fVar4;
  ENiagaraRibbonShapeMode EVar5;
  FNiagaraDataSet *this_00;
  code *pcVar6;
  double dVar7;
  ENiagaraRibbonUVEdgeMode EVar8;
  ENiagaraRibbonUVEdgeMode EVar9;
  undefined1 uVar10;
  bool bVar11;
  UNiagaraRibbonRendererProperties *pUVar12;
  FNiagaraRendererRibbons *pFVar13;
  FNiagaraTypeDefinition *pFVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  int local_res8 [2];
  int local_res20 [2];
  FNiagaraVariableBase local_38;
  
  FNiagaraRenderer::FNiagaraRenderer((FNiagaraRenderer *)this,param_1,param_2,param_3);
  this->_padding_ = (longlong)&___7FNiagaraRendererRibbons__6B_;
  pUVar12 = CastChecked<UNiagaraRibbonRendererProperties_const_,UNiagaraRendererProperties_const_>
                      (param_2);
  FNiagaraRibbonGenerationConfig::FNiagaraRibbonGenerationConfig(&this->GenerationConfig,pUVar12);
  FNiagaraRibbonUVSettings::FNiagaraRibbonUVSettings(&this->UV0Settings);
  FNiagaraRibbonUVSettings::FNiagaraRibbonUVSettings(&this->UV1Settings);
  pFVar1 = &this->ShapeState;
  (this->ShapeState).SliceTriangleToVertexIds.AllocatorInstance.SecondaryData =
       (ForElementType<unsigned_int>)0x0;
  (this->ShapeState).SliceTriangleToVertexIds.ArrayNum = 0;
  (this->ShapeState).SliceTriangleToVertexIds.ArrayMax = 0x20;
  (this->ShapeState).SliceTriangleToVertexIdsBuffer.NumBytes = 0;
  (this->ShapeState).SliceVertexData.ArrayNum = 0;
  (this->ShapeState).SliceVertexData.ArrayMax = 0;
  (this->ShapeState).SliceVertexDataBuffer.NumBytes = 0;
  (this->ShapeState).SliceTriangleToVertexIdsBuffer.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->ShapeState).SliceTriangleToVertexIdsBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->ShapeState).SliceVertexData.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ShapeState).SliceVertexDataBuffer.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->ShapeState).SliceVertexDataBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  this->FacingMode = Screen;
  this->GpuRibbonLinkOrderOffset = 0xffffffff;
  puVar3 = &this->field_0x2d8;
  this->bCastShadows = 1;
  this->bGpuRibbonLinkIsFloat = 0;
  this->bUseGeometryNormals = 0;
  (this->VertexBuffers).SortedIndicesBuffer.DebugName = L"RibbonSortedIndices";
  (this->VertexBuffers).TangentsAndDistancesBuffer.DebugName = L"TangentsAndDistancesBuffer";
  (this->VertexBuffers).MultiRibbonIndicesBuffer.DebugName = L"MultiRibbonIndicesBuffer";
  (this->VertexBuffers).RibbonLookupTableBuffer.DebugName = L"RibbonLookupTableBuffer";
  (this->VertexBuffers).SegmentsBuffer.DebugName = L"SegmentsBuffer";
  (this->VertexBuffers).GPUComputeCommandBuffer.DebugName = L"GPUComputeCommandBuffer";
  (this->VertexBuffersGuard).State = (atomic<unsigned_char>)0x0;
  (this->VertexBuffers).SortedIndicesBuffer.PixelFormat = PF_R32_UINT;
  (this->VertexBuffers).SortedIndicesBuffer.ElementBytes = 4;
  (this->VertexBuffers).SortedIndicesBuffer.NumBytes = 0;
  (this->VertexBuffers).SortedIndicesBuffer.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->VertexBuffers).SortedIndicesBuffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->VertexBuffers).SortedIndicesBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->VertexBuffers).TangentsAndDistancesBuffer.PixelFormat = PF_R32_FLOAT;
  (this->VertexBuffers).TangentsAndDistancesBuffer.ElementBytes = 4;
  (this->VertexBuffers).TangentsAndDistancesBuffer.NumBytes = 0;
  (this->VertexBuffers).TangentsAndDistancesBuffer.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->VertexBuffers).TangentsAndDistancesBuffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->VertexBuffers).TangentsAndDistancesBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->VertexBuffers).MultiRibbonIndicesBuffer.PixelFormat = PF_R32_UINT;
  (this->VertexBuffers).MultiRibbonIndicesBuffer.ElementBytes = 4;
  (this->VertexBuffers).MultiRibbonIndicesBuffer.NumBytes = 0;
  (this->VertexBuffers).MultiRibbonIndicesBuffer.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->VertexBuffers).MultiRibbonIndicesBuffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->VertexBuffers).MultiRibbonIndicesBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->VertexBuffers).RibbonLookupTableBuffer.PixelFormat = PF_R32_UINT;
  (this->VertexBuffers).RibbonLookupTableBuffer.ElementBytes = 4;
  (this->VertexBuffers).RibbonLookupTableBuffer.NumBytes = 0;
  (this->VertexBuffers).RibbonLookupTableBuffer.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->VertexBuffers).RibbonLookupTableBuffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->VertexBuffers).RibbonLookupTableBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->VertexBuffers).SegmentsBuffer.PixelFormat = PF_R32_UINT;
  (this->VertexBuffers).SegmentsBuffer.ElementBytes = 4;
  (this->VertexBuffers).SegmentsBuffer.NumBytes = 0;
  (this->VertexBuffers).SegmentsBuffer.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->VertexBuffers).SegmentsBuffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->VertexBuffers).SegmentsBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->VertexBuffers).GPUComputeCommandBuffer.PixelFormat = PF_R32_UINT;
  (this->VertexBuffers).GPUComputeCommandBuffer.ElementBytes = 4;
  (this->VertexBuffers).GPUComputeCommandBuffer.NumBytes = 0;
  (this->VertexBuffers).GPUComputeCommandBuffer.Buffer.Reference = (FRHIBuffer *)0x0;
  (this->VertexBuffers).GPUComputeCommandBuffer.UAV.Reference = (FRHIUnorderedAccessView *)0x0;
  (this->VertexBuffers).GPUComputeCommandBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
  (this->VertexBuffers).bJustCreatedCommandBuffer = false;
  (this->TessellationSmoothingData).TessellationAngle = 0.0;
  (this->TessellationSmoothingData).TessellationCurvature = 0.0;
  (this->TessellationSmoothingData).TessellationTwistAngle = 0.0;
  (this->TessellationSmoothingData).TessellationTwistCurvature = 0.0;
  (this->TessellationSmoothingData).TessellationTotalSegmentLength = 0.0;
  pUVar12 = CastChecked<UNiagaraRibbonRendererProperties_const_,UNiagaraRendererProperties_const_>
                      (param_2);
  if (param_3->ParticleDataSet == (FNiagaraDataSet *)0x0) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("ParticleDataSet",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraEmitterInstance.h"
                        ,0x3a,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FNiagaraRendererRibbons *)(*pcVar6)();
      return pFVar13;
    }
  }
  this_00 = param_3->ParticleDataSet;
  pFVar14 = FNiagaraTypeDefinitionHandle::Resolve
                      (&(pUVar12->RibbonIdBinding).ParamMapVariable.TypeDefHandle);
  local_38.Name = (pUVar12->RibbonIdBinding).DataSetName;
  local_38.TypeDefHandle.RegisteredTypeIndex =
       FNiagaraTypeDefinitionHandle::Register(&local_38.TypeDefHandle,pFVar14);
  FNiagaraDataSet::GetVariableComponentOffsets
            (this_00,&local_38,local_res20,&this->RibbonIDParamDataSetOffset,local_res8);
  if (((this->GenerationConfig).bHasFullRibbonIDs != 0 ||
       (this->GenerationConfig).bHasSimpleRibbonIDs != 0) &&
     (this->RibbonIDParamDataSetOffset == -1)) {
    bVar11 = ::FDebug::CheckVerifyFailedImpl2
                       ("!GenerationConfig.HasRibbonIDs() || RibbonIDParamDataSetOffset != INDEX_NONE"
                        ,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                        ,0x30e,L"");
    if (bVar11) {
      pcVar6 = (code *)swi(3);
      pFVar13 = (FNiagaraRendererRibbons *)(*pcVar6)();
      return pFVar13;
    }
  }
  EVar8 = (pUVar12->UV0Settings).LeadingEdgeMode;
  EVar9 = (pUVar12->UV0Settings).TrailingEdgeMode;
  uVar10 = (pUVar12->UV0Settings).field_0x3;
  fVar4 = (pUVar12->UV0Settings).TilingLength;
  dVar7 = (pUVar12->UV0Settings).Offset.field0_0x0._s_0.X;
  (this->UV0Settings).DistributionMode = (pUVar12->UV0Settings).DistributionMode;
  (this->UV0Settings).LeadingEdgeMode = EVar8;
  (this->UV0Settings).TrailingEdgeMode = EVar9;
  (this->UV0Settings).field_0x3 = uVar10;
  (this->UV0Settings).TilingLength = fVar4;
  (this->UV0Settings).Offset.field0_0x0._s_0.X = dVar7;
  dVar7 = (pUVar12->UV0Settings).Scale.field0_0x0._s_0.X;
  (this->UV0Settings).Offset.field0_0x0._s_0.Y = (pUVar12->UV0Settings).Offset.field0_0x0._s_0.Y;
  (this->UV0Settings).Scale.field0_0x0._s_0.X = dVar7;
  (this->UV0Settings).Scale.field0_0x0._s_0.Y = (pUVar12->UV0Settings).Scale.field0_0x0._s_0.Y;
  EVar8 = (pUVar12->UV1Settings).LeadingEdgeMode;
  EVar9 = (pUVar12->UV1Settings).TrailingEdgeMode;
  uVar10 = (pUVar12->UV1Settings).field_0x3;
  fVar4 = (pUVar12->UV1Settings).TilingLength;
  dVar7 = (pUVar12->UV1Settings).Offset.field0_0x0._s_0.X;
  (this->UV1Settings).DistributionMode = (pUVar12->UV1Settings).DistributionMode;
  (this->UV1Settings).LeadingEdgeMode = EVar8;
  (this->UV1Settings).TrailingEdgeMode = EVar9;
  (this->UV1Settings).field_0x3 = uVar10;
  (this->UV1Settings).TilingLength = fVar4;
  (this->UV1Settings).Offset.field0_0x0._s_0.X = dVar7;
  dVar7 = (pUVar12->UV1Settings).Scale.field0_0x0._s_0.X;
  (this->UV1Settings).Offset.field0_0x0._s_0.Y = (pUVar12->UV1Settings).Offset.field0_0x0._s_0.Y;
  (this->UV1Settings).Scale.field0_0x0._s_0.X = dVar7;
  (this->UV1Settings).Scale.field0_0x0._s_0.Y = (pUVar12->UV1Settings).Scale.field0_0x0._s_0.Y;
  this->FacingMode = pUVar12->FacingMode;
  this->DrawDirection = pUVar12->DrawDirection;
  this->RendererLayout = &pUVar12->RendererLayout;
  uVar15 = pUVar12->bCastShadows;
  uVar16 = uVar15 | *(uint *)&this->field_0x2d8 & 0xfffffffe;
  this->bCastShadows = uVar15;
  uVar16 = ((byte)pUVar12->field_0x122 >> 1 ^ uVar16) & 2 ^ uVar16;
  *(uint *)&this->field_0x2d8 = uVar16;
  *(uint *)&this->field_0x2d8 = ((uint)pUVar12->bGpuRibbonLinkIsFloat << 2 ^ uVar16) & 4 ^ uVar16;
  this->GpuRibbonLinkOrderOffset = pUVar12->GpuRibbonLinkOrderOffset;
  EVar5 = pUVar12->Shape;
  if (EVar5 == Custom) {
    if (2 < (pUVar12->CustomVertices).ArrayNum) {
      GenerateShapeStateCustom(pFVar1,&pUVar12->CustomVertices,pUVar12->bUseMaterialBackfaceCulling)
      ;
      goto LAB_149334875;
    }
  }
  else if (EVar5 == Tube) {
    if (pUVar12->TubeSubdivisions - 3U < 0xe) {
      GenerateShapeStateTube(pFVar1,pUVar12->TubeSubdivisions,pUVar12->bUseMaterialBackfaceCulling);
      goto LAB_149334875;
    }
  }
  else if ((EVar5 == MultiPlane) && (pUVar12->MultiPlaneCount - 2U < 0xf)) {
    GenerateShapeStateMultiPlane
              (pFVar1,pUVar12->MultiPlaneCount,pUVar12->WidthSegmentationCount,
               pUVar12->bEnableAccurateGeometry,pUVar12->bUseMaterialBackfaceCulling);
    goto LAB_149334875;
  }
  GenerateShapeStatePlane
            (pFVar1,pUVar12->WidthSegmentationCount,pUVar12->bUseMaterialBackfaceCulling);
LAB_149334875:
  (this->TessellationConfig).TessellationMode = pUVar12->TessellationMode;
  (this->TessellationConfig).CustomTessellationFactor = pUVar12->TessellationFactor;
  (this->TessellationConfig).bCustomUseConstantFactor = pUVar12->bUseConstantFactor;
  fVar4 = pUVar12->TessellationAngle;
  if ((fVar4 <= 0.0) || (fVar17 = __real_3f800000, __real_3f800000 <= fVar4)) {
    fVar17 = fVar4;
  }
  (this->TessellationConfig).CustomTessellationMinAngle = fVar17 * __real_3c8efa35;
  (this->TessellationConfig).bCustomUseScreenSpace = pUVar12->bScreenSpaceTessellation;
  return this;
}

// ~FNiagaraRendererRibbons @ 149336810

void __thiscall FNiagaraRendererRibbons::~FNiagaraRendererRibbons(FNiagaraRendererRibbons *this)

{
  undefined8 *puVar1;
  
  this->_padding_ = (longlong)&___7FNiagaraRendererRibbons__6B_;
  FNiagaraRibbonGpuBuffer::~FNiagaraRibbonGpuBuffer(&(this->VertexBuffers).GPUComputeCommandBuffer);
  FNiagaraRibbonGpuBuffer::~FNiagaraRibbonGpuBuffer(&(this->VertexBuffers).SegmentsBuffer);
  FNiagaraRibbonGpuBuffer::~FNiagaraRibbonGpuBuffer(&(this->VertexBuffers).RibbonLookupTableBuffer);
  FNiagaraRibbonGpuBuffer::~FNiagaraRibbonGpuBuffer(&(this->VertexBuffers).MultiRibbonIndicesBuffer)
  ;
  FNiagaraRibbonGpuBuffer::~FNiagaraRibbonGpuBuffer
            (&(this->VertexBuffers).TangentsAndDistancesBuffer);
  FNiagaraRibbonGpuBuffer::~FNiagaraRibbonGpuBuffer(&(this->VertexBuffers).SortedIndicesBuffer);
  FNiagaraRibbonShapeGeometryData::~FNiagaraRibbonShapeGeometryData(&this->ShapeState);
  puVar1 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)&___7FNiagaraRenderer__6B_;
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  FRayTracingGeometry::~FRayTracingGeometry((FRayTracingGeometry *)&this->_padding_);
  FRWBuffer::~FRWBuffer((FRWBuffer *)&this->_padding_);
  return;
}

// operator() @ 149339410

void __thiscall
`FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l9::<lambda_2>::operator()(void *this)

{
  **(uint **)this = **(uint **)this ^ 1;
  if (**(int **)this == 0) {
    *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0xa8) =
         *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x308);
    *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0xa0) =
         *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 0x10);
    return;
  }
  *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0xa8) =
       *(undefined8 *)(*(longlong *)((longlong)this + 0x18) + 8);
  *(undefined8 *)(*(longlong *)((longlong)this + 8) + 0xa0) =
       *(undefined8 *)(*(longlong *)((longlong)this + 0x10) + 0x310);
  return;
}

// operator() @ 149339a90

void __thiscall
`FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l32::<lambda_6>::operator()(void *this)

{
  undefined8 *puVar1;
  FRHIResource *pFVar2;
  FRHIResource *pFVar3;
  
  **(uint **)this = **(uint **)this ^ 1;
  puVar1 = *(undefined8 **)((longlong)this + 8);
  pFVar3 = (FRHIResource *)*puVar1;
  if (**(int **)this == 0) {
    pFVar2 = *(FRHIResource **)(*(longlong *)((longlong)this + 0x10) + 0x90);
    if (pFVar3 != pFVar2) {
      *puVar1 = pFVar2;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar2);
      }
      if (pFVar3 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar3);
      }
    }
    pFVar3 = *(FRHIResource **)(*(longlong *)((longlong)this + 0x10) + 0x68);
  }
  else {
    pFVar2 = *(FRHIResource **)(*(longlong *)((longlong)this + 0x10) + 0x70);
    if (pFVar3 != pFVar2) {
      *puVar1 = pFVar2;
      if (pFVar2 != (FRHIResource *)0x0) {
        FRHIResource::AddRef(pFVar2);
      }
      if (pFVar3 != (FRHIResource *)0x0) {
        FRHIResource::Release(pFVar3);
      }
    }
    pFVar3 = *(FRHIResource **)(*(longlong *)((longlong)this + 0x10) + 0x88);
  }
  pFVar2 = (FRHIResource *)**(undefined8 **)((longlong)this + 0x18);
  if (pFVar2 != pFVar3) {
    **(undefined8 **)((longlong)this + 0x18) = pFVar3;
    if (pFVar3 != (FRHIResource *)0x0) {
      FRHIResource::AddRef(pFVar3);
    }
    if (pFVar2 != (FRHIResource *)0x0) {
      FRHIResource::Release(pFVar2);
    }
  }
  return;
}

// CalculateIndexBufferConfiguration @ 14933eb60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraIndexGenerationInput * __thiscall
FNiagaraRendererRibbons::CalculateIndexBufferConfiguration
          (FNiagaraRendererRibbons *this,FNiagaraIndexGenerationInput *__return_storage_ptr__,
          TSharedPtr<FNiagaraRibbonCPUGeneratedVertexData,1> *param_1,FNiagaraDataBuffer *param_2,
          FNiagaraSceneProxy *param_3,FSceneView *param_4,TVector<double> *param_5,bool param_6,
          bool param_7)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  code *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  FNiagaraIndexGenerationInput *pFVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  
  __return_storage_ptr__->ViewDistance = 0.0;
  __return_storage_ptr__->LODDistanceFactor = 0.0;
  __return_storage_ptr__->MaxSegmentCount = 0;
  __return_storage_ptr__->SubSegmentCount = 0;
  fVar15 = (param_3->DynamicData).LODDistanceOverride;
  __return_storage_ptr__->SegmentBitShift = 0;
  __return_storage_ptr__->SegmentBitMask = 0;
  __return_storage_ptr__->SubSegmentBitShift = 0;
  __return_storage_ptr__->SubSegmentBitMask = 0;
  __return_storage_ptr__->ShapeBitMask = 0;
  __return_storage_ptr__->TotalBitCount = 0;
  __return_storage_ptr__->TotalNumIndices = 0;
  __return_storage_ptr__->CPUTriangleCount = 0;
  if (fVar15 < 0.0) {
    dVar14 = UE::Math::TBoxSphereBounds<double,double>::ComputeSquaredDistanceFromBoxToPoint
                       ((TBoxSphereBounds<double,double> *)&param_3->_padding_,param_5);
    fVar15 = (float)dVar14;
  }
  __return_storage_ptr__->ViewDistance = fVar15;
  __return_storage_ptr__->LODDistanceFactor = param_4->LODDistanceFactor;
  if (param_6) {
    uVar12 = param_2->NumInstances;
  }
  else {
    if (param_1->Object == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pFVar8 = (FNiagaraIndexGenerationInput *)(*pcVar4)();
        return pFVar8;
      }
    }
    uVar12 = (param_1->Object->SortedIndices).ArrayNum;
  }
  __return_storage_ptr__->MaxSegmentCount = uVar12;
  __return_storage_ptr__->SubSegmentCount = 1;
  iVar3 = GNiagaraRibbonMaxTessellation;
  uVar7 = 1;
  if ((this->GenerationConfig).bWantsConstantTessellation != 0 ||
      (this->GenerationConfig).bWantsAutomaticTessellation != 0) {
    if (param_6) {
      if (((this->TessellationConfig).TessellationMode == Custom) &&
         ((this->TessellationConfig).bCustomUseConstantFactor != false)) {
        uVar7 = (this->TessellationConfig).CustomTessellationFactor;
        __return_storage_ptr__->SubSegmentCount = uVar7;
      }
      else {
        __return_storage_ptr__->SubSegmentCount = GNiagaraRibbonMaxTessellation;
        uVar7 = iVar3;
      }
    }
    else {
      uVar7 = CalculateTessellationFactor(this,param_3,param_4,param_5);
      __return_storage_ptr__->SubSegmentCount = uVar7;
    }
  }
  fVar13 = logf((float)uVar12);
  fVar15 = __real_bf000000;
  iVar9 = (int)ROUND(__real_bf000000 - fVar13 * __real_4038aa3b) >> 1;
  fVar13 = logf((float)uVar7);
  uVar11 = (this->ShapeState).BitsNeededForShape;
  iVar3 = (this->ShapeState).TrianglesPerSegment;
  fVar13 = fVar13 * __real_4038aa3b;
  __return_storage_ptr__->SubSegmentBitShift = uVar11;
  __return_storage_ptr__->CPUTriangleCount = 0;
  __return_storage_ptr__->SegmentBitMask = (uint)(0xffffffffL >> ((char)iVar9 + 0x20U & 0x3f));
  __return_storage_ptr__->ShapeBitMask = (this->ShapeState).BitMaskForShape;
  iVar10 = (int)ROUND(fVar15 - fVar13) >> 1;
  uVar11 = uVar11 - iVar10;
  __return_storage_ptr__->SegmentBitShift = uVar11;
  __return_storage_ptr__->TotalBitCount = uVar11 - iVar9;
  __return_storage_ptr__->SubSegmentBitMask = (uint)(0xffffffffL >> ((char)iVar10 + 0x20U & 0x3f));
  __return_storage_ptr__->TotalNumIndices = uVar7 * iVar3 * uVar12 * 3;
  return __return_storage_ptr__;
}

// CalculateTessellationFactor @ 14933ef30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

int __thiscall
FNiagaraRendererRibbons::CalculateTessellationFactor
          (FNiagaraRendererRibbons *this,FNiagaraSceneProxy *param_1,FSceneView *param_2,
          TVector<double> *param_3)

{
  float fVar1;
  ENiagaraRibbonTessellationMode EVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar13 = __real_3f800000;
  EVar2 = (this->TessellationConfig).TessellationMode;
  iVar4 = 1;
  fVar10 = GNiagaraRibbonTessellationScreenPercentage;
  if (EVar2 == Custom) {
    iVar6 = (this->TessellationConfig).CustomTessellationFactor;
    fVar7 = (this->TessellationConfig).CustomTessellationMinAngle;
    if (GNiagaraRibbonMaxTessellation < iVar6) {
      iVar6 = GNiagaraRibbonMaxTessellation;
    }
    bVar3 = (this->TessellationConfig).bCustomUseConstantFactor;
    if ((((this->TessellationConfig).bCustomUseScreenSpace == false) || (bVar3 != false)) &&
       (fVar10 = 0.0, bVar3 != false)) {
      return iVar6;
    }
  }
  else {
    iVar6 = GNiagaraRibbonMaxTessellation;
    fVar7 = GNiagaraRibbonTessellationAngle;
    if (EVar2 == Disabled) {
      iVar6 = 1;
    }
  }
  if (((GNiagaraRibbonTessellationEnabled != 0) && (1 < iVar6)) &&
     (fVar14 = (this->TessellationSmoothingData).TessellationCurvature, __real_322bcc77 < fVar14)) {
    fVar11 = (this->TessellationSmoothingData).TessellationAngle;
    fVar1 = (this->TessellationSmoothingData).TessellationTwistAngle;
    if (fVar7 == 0.0) {
      fVar12 = (float)iVar6;
    }
    else {
      if (fVar7 <= __real_322bcc77) {
        fVar7 = __real_322bcc77;
      }
      fVar9 = fVar1;
      if (fVar1 <= fVar11) {
        fVar9 = fVar11;
      }
      fVar12 = fVar9 / fVar7;
      if (fVar9 / fVar7 <= __real_3f800000) {
        fVar12 = __real_3f800000;
      }
    }
    fVar7 = (param_1->DynamicData).LODDistanceOverride;
    if (fVar7 < 0.0) {
      dVar8 = UE::Math::TBoxSphereBounds<double,double>::ComputeSquaredDistanceFromBoxToPoint
                        ((TBoxSphereBounds<double,double> *)&param_1->_padding_,param_3);
      fVar7 = (float)dVar8;
    }
    fVar10 = (SQRT(fVar7) * fVar10) / param_2->LODDistanceFactor;
    if (fVar10 <= GNiagaraRibbonTessellationMinDisplacementError) {
      fVar10 = GNiagaraRibbonTessellationMinDisplacementError;
    }
    fVar14 = fVar14 / (fVar10 + fVar14);
    fVar9 = (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    fVar7 = fVar13 - fVar9;
    if (fVar7 <= 0.0) {
      fVar7 = 0.0;
    }
    fVar7 = SQRT(fVar7) * (__real_3fc90fdb - fVar9 * ___real_3e20574b);
    if (fVar14 < 0.0) {
      fVar7 = __real_40490fdb - fVar7;
    }
    if (fVar7 <= __real_3b03126f) {
      fVar7 = __real_3b03126f;
    }
    fVar11 = fVar11 / fVar7;
    fVar7 = fVar11;
    if ((0.0 < fVar1) &&
       (fVar14 = (this->TessellationSmoothingData).TessellationTwistCurvature, 0.0 < fVar14)) {
      fVar14 = fVar14 / (fVar14 + fVar10);
      fVar10 = (float)((uint)fVar14 & __xmm_7fffffff7fffffff7fffffff7fffffff);
      fVar13 = fVar13 - fVar10;
      if (fVar13 <= 0.0) {
        fVar13 = 0.0;
      }
      fVar13 = SQRT(fVar13) * (__real_3fc90fdb - fVar10 * ___real_3e20574b);
      if (fVar14 < 0.0) {
        fVar13 = __real_40490fdb - fVar13;
      }
      if (fVar13 <= __real_3b03126f) {
        fVar13 = __real_3b03126f;
      }
      fVar7 = fVar1 / fVar13;
      if (fVar1 / fVar13 <= fVar11) {
        fVar7 = fVar11;
      }
    }
    iVar4 = (int)ROUND(fVar12 + fVar12 + __real_3f000000) >> 1;
    iVar5 = (int)ROUND(fVar7 + fVar7 + __real_3f000000) >> 1;
    if (iVar5 < iVar6) {
      iVar6 = iVar5;
    }
    if (iVar4 < iVar6) {
      iVar4 = iVar6;
    }
  }
  return iVar4;
}

// CreateRenderThreadResources @ 149343dd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EVertexElementType": Some values do not have unique names */

void __thiscall
FNiagaraRendererRibbons::CreateRenderThreadResources
          (FNiagaraRendererRibbons *this,FRHICommandListBase *param_1)

{
  longlong *this_00;
  int iVar1;
  FRHIBuffer *this_01;
  FRayTracingGeometrySegment *pFVar2;
  bool bVar3;
  FDebugName *pFVar4;
  undefined1 auStackY_168 [32];
  FDebugName local_128;
  FRayTracingGeometryInitializer local_118;
  FRHIBuffer *local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined4 local_94;
  ERayTracingGeometryInitializerType local_90;
  FRayTracingGeometrySegment *local_88;
  undefined8 local_80;
  FResourceArrayUploadInterface *local_78;
  uint local_70 [6];
  FRHIRayTracingGeometry *local_58;
  FDebugName local_50;
  FName local_44;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_168;
  local_128.Name = (FName)this;
  FReadBuffer::
  InitializeWithData<_FNiagaraRendererRibbons::CreateRenderThreadResources_::__l3::<lambda_1>_>
            (&(this->ShapeState).SliceTriangleToVertexIdsBuffer,param_1,
             L"SliceTriangleToVertexIdsBuffer",4,
             (this->ShapeState).SliceTriangleToVertexIds.ArrayNum,PF_R32_UINT,Static,
             (<lambda_1> *)&local_128);
  local_128.Name = (FName)this;
  FReadBuffer::
  InitializeWithData<_FNiagaraRendererRibbons::CreateRenderThreadResources_::__l4::<lambda_2>_>
            (&(this->ShapeState).SliceVertexDataBuffer,param_1,L"NiagaraShapeVertexDataBuffer",4,
             (this->ShapeState).SliceVertexData.ArrayNum * 5,PF_R32_FLOAT,Static,
             (<lambda_2> *)&local_128);
  bVar3 = IsRayTracingAllowed();
  if (bVar3) {
    local_a8 = (FRHIBuffer *)0x0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = Rendering;
    local_88 = (FRayTracingGeometrySegment *)0x0;
    local_80 = 0;
    local_78 = (FResourceArrayUploadInterface *)0x0;
    local_58 = (FRHIRayTracingGeometry *)0x0;
    local_94 = 0x10000;
    local_70[0] = 0xffffffff;
    local_70[1] = 0xffffffff;
    local_70[2] = 0xffffffff;
    local_70[3] = 0xffffffff;
    local_70[4] = 0xffffffff;
    local_70[5] = 0xffffffff;
    FDebugName::FDebugName(&local_50);
    local_44.ComparisonIndex.Value = 0;
    local_44.Number = 0;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) < ::_TSS0) {
      _Init_thread_header(&::_TSS0);
      if (::_TSS0 == -1) {
        ::FName::FName(&::DebugName,"FNiagaraRendererRibbons");
        _Init_thread_footer(&::_TSS0);
      }
    }
    iVar1 = DebugNumber;
    DebugNumber = DebugNumber + 1;
    pFVar4 = FDebugName::FDebugName(&local_128,::DebugName,iVar1);
    this_01 = local_a8;
    local_50.Name = pFVar4->Name;
    local_50.Number = pFVar4->Number;
    if ((local_a8 != (FRHIBuffer *)0x0) &&
       (local_a8 = (FRHIBuffer *)0x0, this_01 != (FRHIBuffer *)0x0)) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
    local_a0 = local_a0 & 0xffffffff;
    local_94 = CONCAT22(local_94._2_2_,1);
    local_98 = 0;
    local_118.bFastBuild = true;
    this_00 = &this->_padding_;
    local_118.bAllowUpdate = (bool)0;
    local_118.GeometryType = RTGT_Triangles;
    local_118.IndexBuffer.Reference = local_a8;
    if (local_a8 != (FRHIBuffer *)0x0) {
      FRHIResource::AddRef((FRHIResource *)local_a8);
      local_118.bFastBuild = SUB41(local_94,0);
      local_118.bAllowUpdate = (bool)local_94._1_1_;
      local_118.GeometryType = local_a0._4_4_;
    }
    pFVar2 = local_88;
    iVar1 = (int)local_80;
    local_118.IndexBufferOffset = (uint)local_a0;
    local_118.bAllowCompaction = (bool)local_94._2_1_;
    local_118.bTemplate = (bool)local_94._3_1_;
    local_118.Type = local_90;
    local_118.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_118.Segments.ArrayNum = (int)local_80;
    local_118.TotalPrimitiveCount = local_98;
    if ((int)local_80 == 0) {
      local_118.Segments.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x28,8,(int)local_80,0,&local_118.Segments.AllocatorInstance,(int)local_80,
                 &local_118.Segments.ArrayMax);
      ConstructItems<FRayTracingGeometrySegment,FRayTracingGeometrySegment,int>
                (local_118.Segments.AllocatorInstance.Data,pFVar2,iVar1);
    }
    local_118.OfflineData = local_78;
    local_118.SourceGeometry = local_58;
    local_118.DebugName.Number = local_50.Number;
    local_118.OfflineDataHeader.Reserved[0] = local_70[0];
    local_118.OfflineDataHeader.Reserved[1] = local_70[1];
    local_118.OfflineDataHeader.Reserved[2] = local_70[2];
    local_118.OfflineDataHeader.Reserved[3] = local_70[3];
    local_118.OwnerName = local_44;
    local_118.OfflineDataHeader.Reserved[4] = local_70[4];
    local_118.OfflineDataHeader.Reserved[5] = local_70[5];
    local_118.DebugName.Name = local_50.Name;
    FRayTracingGeometry::SetInitializer((FRayTracingGeometry *)this_00,&local_118);
    (**(code **)(*this_00 + 0x18))(this_00,param_1);
    DestructItems<FRayTracingGeometrySegment,int>(local_88,(int)local_80);
    if (local_88 != (FRayTracingGeometrySegment *)0x0) {
      FMemory::Free(local_88);
    }
    if (local_a8 != (FRHIBuffer *)0x0) {
      FRHIResource::Release((FRHIResource *)local_a8);
    }
  }
  return;
}

// GenerateDynamicData @ 14934af20

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FNiagaraDynamicDataBase * __thiscall
FNiagaraRendererRibbons::GenerateDynamicData
          (FNiagaraRendererRibbons *this,FNiagaraSceneProxy *param_1,
          UNiagaraRendererProperties *param_2,FNiagaraEmitterInstance *param_3)

{
  TRefCountPtr<FNiagaraDataBuffer> *this_00;
  int *piVar1;
  int iVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  uint uVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_NiagaraGenRibbonVertexData> FVar13;
  FNiagaraDynamicDataBase *pFVar14;
  UNiagaraRibbonRendererProperties *pUVar15;
  UObject *pUVar16;
  UClass *pUVar17;
  FNiagaraDataSet *pFVar18;
  FNiagaraDynamicDataBase *this_01;
  longlong lVar19;
  FVersionedNiagaraEmitterData *this_02;
  FNiagaraDataBuffer *pFVar20;
  FNiagaraRibbonCPUGeneratedVertexData *pFVar21;
  FThreadStats *this_03;
  FThreadStatsPool *this_04;
  uint uVar22;
  FNiagaraDynamicDataBase *pFVar23;
  FColor_u_0 local_res20 [2];
  FName local_158;
  undefined4 uStack_13c;
  TSharedPtr<FNiagaraRibbonCPUGeneratedVertexData,1> local_138;
  FName local_128;
  LARGE_INTEGER local_120;
  FStatMessage local_118;
  FName local_108 [2];
  longlong local_f8;
  undefined8 uStack_f0;
  FNiagaraGenerationInputDataCPUAccessors local_e8;
  
  pFVar14 = (FNiagaraDynamicDataBase *)0x0;
  FVar13 = StatPtr_STAT_NiagaraGenRibbonVertexData;
  if (StatPtr_STAT_NiagaraGenRibbonVertexData ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraGenRibbonVertexData>)0x0) {
    pFVar12 = ::FName::FName(local_108,"STAT_NiagaraGenRibbonVertexData");
    FVar13 = (FThreadSafeStaticStat<FStat_STAT_NiagaraGenRibbonVertexData>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraGenRibbonVertexData,
                        *pFVar12,L"Generate Ribbon Vertex Data [GT]","STATGROUP_Niagara",
                        "STATCAT_Niagara",L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_158.ComparisonIndex.Value = 0;
  local_158.Number = 0;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  FVar3 = *(FName *)FVar13;
  if ((FVar3.ComparisonIndex.Value.Value != 0) || (FVar3.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar13 + 0x10));
      bVar6 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar3.ComparisonIndex.Value.Value;
        local_128.Number = FVar3.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar13 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                   ,0x403);
        bVar6 = true;
        bVar5 = true;
      }
    }
    bVar7 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar3,CycleScopeStart);
      bVar7 = true;
      local_158 = FVar3;
    }
  }
  if (((param_3 == (FNiagaraEmitterInstance *)0x0) ||
      (param_3->ParentSystemInstance == (FNiagaraSystemInstance *)0x0)) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("Emitter && Emitter->GetParentSystemInstance()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                         ,0x404,L""), bVar8)) {
    pcVar4 = (code *)swi(3);
    pFVar14 = (FNiagaraDynamicDataBase *)(*pcVar4)();
    return pFVar14;
  }
  pUVar15 = CastChecked<UNiagaraRibbonRendererProperties_const_,UNiagaraRendererProperties_const_>
                      (param_2);
  pFVar23 = pFVar14;
  if ((pUVar15 != (UNiagaraRibbonRendererProperties *)0x0) &&
     (bVar8 = FNiagaraRenderer::IsRendererEnabled
                        ((FNiagaraRenderer *)this,(UNiagaraRendererProperties *)pUVar15,param_3),
     bVar8)) {
    if ((param_2->bAllowInCullProxies == false) &&
       (pUVar16 = FWeakObjectPtr::Get(&(param_3->ParentSystemInstance->AttachComponent).WeakPtr),
       pUVar16 != (UObject *)0x0)) {
      pUVar17 = Z_Construct_UClass_UNiagaraCullProxyComponent_NoRegister();
      iVar2 = (int)pUVar17->_padding_;
      if ((iVar2 <= *(int *)(*(longlong *)&pUVar16->field_0x10 + 0x38)) &&
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar16->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar17->_padding_)) goto LAB_14934b548;
    }
    if ((*(char *)((longlong)&this->_padding_ + 4) != '\x01') || (GNiagaraRibbonGpuEnabled != 0)) {
      pFVar18 = FNiagaraEmitterInstance::GetParticleData(param_3);
      if ((*(char *)((longlong)&this->_padding_ + 4) == '\x01') ||
         ((pFVar18->CurrentData != (FNiagaraDataBuffer *)0x0 &&
          (pFVar23 = (FNiagaraDynamicDataBase *)0x0, 1 < pFVar18->CurrentData->NumInstances)))) {
        this_01 = ::operator_new(0x50);
        pFVar23 = pFVar14;
        if (this_01 != (FNiagaraDynamicDataBase *)0x0) {
          FNiagaraDynamicDataBase::FNiagaraDynamicDataBase(this_01,param_3);
          this_01[1]._padding_ = 0;
          this_01->_padding_ = (longlong)&___7FNiagaraDynamicDataRibbon__6B_;
          this_01[1].CPUParticleData.Reference = (FNiagaraDataBuffer *)0x0;
          this_01[1].ComputeDataBufferInterface = (INiagaraComputeDataBufferInterface *)0x0;
          this_01[1].MaterialRelevance.field0_0x0.Raw = 0;
          *(undefined2 *)&this_01[1].SystemInstanceID = 0;
          pFVar23 = this_01;
        }
        if (((int)this->_padding_ != 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("BaseMaterials_GT.Num() == 1",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                               ,0x423,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pFVar14 = (FNiagaraDynamicDataBase *)(*pcVar4)();
          return pFVar14;
        }
        if (((int)this->_padding_ < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          pFVar14 = (FNiagaraDynamicDataBase *)(*pcVar4)();
          return pFVar14;
        }
        cVar9 = (**(code **)(**(longlong **)this->_padding_ + 0x378))
                          (*(longlong **)this->_padding_,0xb);
        if ((cVar9 == '\0') &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("BaseMaterials_GT[0]->CheckMaterialUsage_Concurrent(MATUSAGE_NiagaraRibbons)"
                               ,
                               "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                               ,0x424,L""), bVar8)) {
          pcVar4 = (code *)swi(3);
          pFVar14 = (FNiagaraDynamicDataBase *)(*pcVar4)();
          return pFVar14;
        }
        if (((int)this->_padding_ < 1) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar4 = (code *)swi(3);
          pFVar14 = (FNiagaraDynamicDataBase *)(*pcVar4)();
          return pFVar14;
        }
        lVar19 = (**(code **)(**(longlong **)this->_padding_ + 0x310))();
        pFVar23[1]._padding_ = lVar19;
        (pFVar23->MaterialRelevance).field0_0x0 = (FMaterialRelevance_u_0)this->_padding_;
        cVar9 = *(char *)((longlong)&this->_padding_ + 4);
        bVar8 = FNiagaraUtilities::AllowComputeShaders();
        if ((((bVar8) && (GNiagaraRibbonGpuInitMode != 2)) && (GNiagaraRibbonGpuEnabled != 0)) &&
           ((pUVar15->bUseGPUInit != '\0' || (GNiagaraRibbonGpuInitMode == 1)))) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        if ((cVar9 == '\x01') || (uVar10 = 0, bVar8)) {
          uVar10 = 1;
        }
        *(undefined1 *)&pFVar23[1].SystemInstanceID = uVar10;
        *(bool *)((longlong)&pFVar23[1].SystemInstanceID + 1) = cVar9 == '\x01';
        pFVar18 = FNiagaraEmitterInstance::GetParticleData(param_3);
        *(uint *)&pFVar23[1].MaterialRelevance.field0_0x0 = pFVar18->MaxAllocationCount;
        *(undefined4 *)((longlong)&pFVar23[1].MaterialRelevance.field0_0x0 + 4) = 0;
        this_02 = FVersionedNiagaraEmitter::GetEmitterData(&param_3->VersionedEmitter);
        if (this_02 != (FVersionedNiagaraEmitterData *)0x0) {
          uVar22 = *(uint *)((longlong)&pFVar23[1].MaterialRelevance.field0_0x0 + 4);
          uVar11 = FVersionedNiagaraEmitterData::GetMaxParticleCountEstimate(this_02);
          if (uVar11 < uVar22) {
            uVar22 = uVar11;
          }
          *(uint *)((longlong)&pFVar23[1].MaterialRelevance.field0_0x0 + 4) = uVar22;
        }
        if ((char)pFVar23[1].SystemInstanceID == '\0') {
          pFVar18 = FNiagaraEmitterInstance::GetParticleData(param_3);
          FNiagaraGenerationInputDataCPUAccessors::FNiagaraGenerationInputDataCPUAccessors
                    (&local_e8,pUVar15,pFVar18);
          if ((local_e8.PosData.bIsValid == false) ||
             (((local_e8.RibbonLinkOrderFloatData.bIsValid == false &&
               (local_e8.RibbonLinkOrderInt32Data.bIsValid == false)) ||
              (local_e8.TotalNumParticles < 2)))) {
            (**(code **)pFVar23->_padding_)(pFVar23,1);
            pFVar23 = pFVar14;
            goto LAB_14934b548;
          }
          local_138.SharedReferenceCount.ReferenceController = ::operator_new(0xd0);
          if ((FNiagaraDynamicDataBase *)local_138.SharedReferenceCount.ReferenceController ==
              (FNiagaraDynamicDataBase *)0x0) {
            local_138.Object = ___xmm_00000000000000000000000000000010;
            pFVar20 = (FNiagaraDataBuffer *)&DAT_00000010;
            local_138.SharedReferenceCount.ReferenceController =
                 (TReferenceControllerBase<1> *)_UNK_150651568;
          }
          else {
            *(undefined4 *)
             &(((FNiagaraDynamicDataBase *)local_138.SharedReferenceCount.ReferenceController)->
              MaterialRelevance).field0_0x0 = 1;
            *(undefined4 *)
             ((longlong)
              &(((FNiagaraDynamicDataBase *)local_138.SharedReferenceCount.ReferenceController)->
               MaterialRelevance).field0_0x0 + 4) = 1;
            ((FNiagaraDynamicDataBase *)local_138.SharedReferenceCount.ReferenceController)->
            _padding_ = (longlong)
                        &
                        ___7__TIntrusiveReferenceController_UFNiagaraRibbonCPUGeneratedVertexData___00_SharedPointerInternals__6B_
            ;
            ((FNiagaraDynamicDataBase *)
            ((longlong)local_138.SharedReferenceCount.ReferenceController + 0x50))->_padding_ = 0;
            (((FNiagaraDynamicDataBase *)
             ((longlong)local_138.SharedReferenceCount.ReferenceController + 0x50))->
            MaterialRelevance).field0_0x0.Raw = 0;
            ((FNiagaraDynamicDataBase *)
            ((longlong)local_138.SharedReferenceCount.ReferenceController + 0x50))->SystemInstanceID
                 = 0;
            (((FNiagaraDynamicDataBase *)
             ((longlong)local_138.SharedReferenceCount.ReferenceController + 0x50))->CPUParticleData
            ).Reference = (FNiagaraDataBuffer *)0x0;
            ((FNiagaraDynamicDataBase *)
            ((longlong)local_138.SharedReferenceCount.ReferenceController + 0x50))->
            ComputeDataBufferInterface = (INiagaraComputeDataBufferInterface *)0x0;
            ((FNiagaraDynamicDataBase *)
            ((longlong)local_138.SharedReferenceCount.ReferenceController + 0x78))->_padding_ = 0;
            (((FNiagaraDynamicDataBase *)
             ((longlong)local_138.SharedReferenceCount.ReferenceController + 0x78))->
            MaterialRelevance).field0_0x0.Raw = 0;
            ((FNiagaraDynamicDataBase *)
            ((longlong)local_138.SharedReferenceCount.ReferenceController + 0x78))->SystemInstanceID
                 = 0;
            (((FNiagaraDynamicDataBase *)
             ((longlong)local_138.SharedReferenceCount.ReferenceController + 0x78))->CPUParticleData
            ).Reference = (FNiagaraDataBuffer *)0x0;
            ((FNiagaraDynamicDataBase *)
            ((longlong)local_138.SharedReferenceCount.ReferenceController + 0x78))->
            ComputeDataBufferInterface = (INiagaraComputeDataBufferInterface *)0x0;
            ((FNiagaraDynamicDataBase *)
            ((longlong)local_138.SharedReferenceCount.ReferenceController + 0xa0))->_padding_ = 0;
            ((FNiagaraDynamicDataBase *)
            ((longlong)local_138.SharedReferenceCount.ReferenceController + 200))->_padding_ = 0;
            pFVar20 = (FNiagaraDataBuffer *)
                      &((FNiagaraDynamicDataBase *)
                       local_138.SharedReferenceCount.ReferenceController)->SystemInstanceID;
            ((FNiagaraDynamicDataBase *)local_138.SharedReferenceCount.ReferenceController)->
            SystemInstanceID = 0;
            (((FNiagaraDynamicDataBase *)local_138.SharedReferenceCount.ReferenceController)->
            CPUParticleData).Reference = (FNiagaraDataBuffer *)0x0;
            ((FNiagaraDynamicDataBase *)local_138.SharedReferenceCount.ReferenceController)->
            ComputeDataBufferInterface = (INiagaraComputeDataBufferInterface *)0x0;
            ((FNiagaraDynamicDataBase *)
            ((longlong)local_138.SharedReferenceCount.ReferenceController + 0x28))->_padding_ = 0;
            (((FNiagaraDynamicDataBase *)
             ((longlong)local_138.SharedReferenceCount.ReferenceController + 0x28))->
            MaterialRelevance).field0_0x0.Raw = 0;
            ((FNiagaraDynamicDataBase *)
            ((longlong)local_138.SharedReferenceCount.ReferenceController + 0x28))->SystemInstanceID
                 = 0;
            (((FNiagaraDynamicDataBase *)
             ((longlong)local_138.SharedReferenceCount.ReferenceController + 0x28))->CPUParticleData
            ).Reference = (FNiagaraDataBuffer *)0x0;
            ((FNiagaraDynamicDataBase *)
            ((longlong)local_138.SharedReferenceCount.ReferenceController + 0x28))->
            ComputeDataBufferInterface = (INiagaraComputeDataBufferInterface *)0x0;
            (((FNiagaraDynamicDataBase *)
             ((longlong)local_138.SharedReferenceCount.ReferenceController + 0xa0))->
            MaterialRelevance).field0_0x0.Raw = 0;
            *(undefined4 *)
             &((FNiagaraDynamicDataBase *)
              ((longlong)local_138.SharedReferenceCount.ReferenceController + 0xa0))->
              SystemInstanceID = 0;
            *(undefined8 *)
             ((longlong)
              &((FNiagaraDynamicDataBase *)
               ((longlong)local_138.SharedReferenceCount.ReferenceController + 0xa0))->
               SystemInstanceID + 4) = 1;
            *(undefined8 *)
             ((longlong)
              &(((FNiagaraDynamicDataBase *)
                ((longlong)local_138.SharedReferenceCount.ReferenceController + 0xa0))->
               CPUParticleData).Reference + 4) = 0;
            *(undefined4 *)
             ((longlong)
              &((FNiagaraDynamicDataBase *)
               ((longlong)local_138.SharedReferenceCount.ReferenceController + 0xa0))->
               ComputeDataBufferInterface + 4) = 0;
            if ((pFVar20 == (FNiagaraDataBuffer *)0x0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("InObject != nullptr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                   ,0x246,L""), bVar8)) {
              pcVar4 = (code *)swi(3);
              pFVar14 = (FNiagaraDynamicDataBase *)(*pcVar4)();
              return pFVar14;
            }
            LOCK();
            *(int *)&(((FNiagaraDynamicDataBase *)local_138.SharedReferenceCount.ReferenceController
                      )->MaterialRelevance).field0_0x0 =
                 *(int *)&(((FNiagaraDynamicDataBase *)
                           local_138.SharedReferenceCount.ReferenceController)->MaterialRelevance).
                          field0_0x0 + 1;
            UNLOCK();
            pFVar14 = (FNiagaraDynamicDataBase *)local_138.SharedReferenceCount.ReferenceController;
            local_138.Object = (FNiagaraRibbonCPUGeneratedVertexData *)pFVar20;
          }
          this_00 = &pFVar23[1].CPUParticleData;
          if ((TSharedPtr<FNiagaraRibbonCPUGeneratedVertexData,1> *)this_00 != &local_138) {
            this_00->Reference = pFVar20;
            local_138.Object = (FNiagaraRibbonCPUGeneratedVertexData *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      ((FSharedReferencer<1> *)&pFVar23[1].ComputeDataBufferInterface,
                       &local_138.SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_138.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)pFVar14);
          pFVar21 = TSharedPtr<FNiagaraRibbonCPUGeneratedVertexData,1>::
                    operator*<FNiagaraRibbonCPUGeneratedVertexData>
                              ((TSharedPtr<FNiagaraRibbonCPUGeneratedVertexData,1> *)this_00);
          GenerateVertexBufferCPU(this,&local_e8,pFVar21);
        }
        if (((0 < (pUVar15->MaterialParameters).AttributeBindings.ArrayNum) ||
            (0 < (pUVar15->MaterialParameters).ScalarParameters.ArrayNum)) ||
           ((0 < (pUVar15->MaterialParameters).VectorParameters.ArrayNum ||
            (0 < (pUVar15->MaterialParameters).TextureParameters.ArrayNum)))) {
          iVar2 = (int)this->_padding_;
          pcVar4 = *(code **)(this->_padding_ + 0x78);
          lVar19 = this->_padding_;
          if ((iVar2 < 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("InCount >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                 ,0xeb,L""), bVar8)) {
            pcVar4 = (code *)swi(3);
            pFVar14 = (FNiagaraDynamicDataBase *)(*pcVar4)();
            return pFVar14;
          }
          uStack_f0 = CONCAT44(uStack_13c,iVar2);
          local_f8 = lVar19;
          (*pcVar4)(this,&pUVar15->MaterialParameters,param_3,&local_f8);
        }
      }
    }
  }
LAB_14934b548:
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar7) && (local_158 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_03 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_03 == (FThreadStats *)0x0) {
      this_04 = FThreadStatsPool::Get();
      this_03 = FThreadStatsPool::GetFromPool(this_04);
    }
    if (this_03->bWaitForExplicitFlush < this_03->ScopeCount) {
      local_118.NameAndInfo.Index = local_158.ComparisonIndex.Value;
      local_118.NameAndInfo.Number = local_158.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_120);
      local_118.StatData.Pad[4] = '\0';
      local_118.StatData.Pad[5] = '\0';
      local_118.StatData.Pad[6] = '\0';
      local_118.StatData.Pad[7] = '\0';
      local_118.StatData.Pad[0] = local_120.s.LowPart._0_1_;
      local_118.StatData.Pad[1] = local_120.s.LowPart._1_1_;
      local_118.StatData.Pad[2] = local_120.s.LowPart._2_1_;
      local_118.StatData.Pad[3] = local_120.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_03,&local_118);
      piVar1 = &this_03->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_03,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_03,false,false);
      }
    }
  }
  return pFVar23;
}

// GenerateIndexBufferForView @ 14934b660

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraRendererRibbons::GenerateIndexBufferForView
          (FNiagaraRendererRibbons *this,FRHICommandListBase *param_1,
          FNiagaraGpuRibbonsDataManager *param_2,FMeshElementCollector *param_3,
          FNiagaraIndexGenerationInput *param_4,FNiagaraDynamicDataRibbon *param_5,
          FNiagaraRibbonRenderingFrameViewResources *param_6,FSceneView *param_7,
          TVector<double> *param_8)

{
  uint uVar1;
  uint uVar2;
  TSharedPtr<FRWBuffer,1> *pTVar3;
  TSharedPtr<FNiagaraRibbonIndexBuffer,1> *pTVar4;
  TSharedRef<FNiagaraRibbonIndexBuffer,1> *pTVar5;
  FGlobalDynamicIndexBuffer *pFVar6;
  FGlobalDynamicIndexBufferAllocation *pFVar7;
  FNiagaraRibbonIndexBuffer *pFVar8;
  TSharedPtr<FNiagaraRibbonIndexBuffer,1> local_88;
  TSharedPtr<FNiagaraRibbonIndexBuffer,1> local_78;
  FGlobalDynamicIndexBufferAllocation local_68;
  FGlobalDynamicIndexBufferAllocationEx local_50;
  
  if (param_4->MaxSegmentCount != 0) {
    if (param_5->bUseGPUInit == false) {
      pTVar5 = MakeShared<FNiagaraRibbonIndexBuffer,1>
                         ((TSharedRef<FNiagaraRibbonIndexBuffer,1> *)&local_78);
      local_88.SharedReferenceCount.ReferenceController =
           (pTVar5->SharedReferenceCount).ReferenceController;
      local_88.Object = pTVar5->Object;
      if (local_88.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_88.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      pTVar4 = &param_6->IndexBuffer;
      if (pTVar4 != &local_88) {
        pTVar4->Object = local_88.Object;
        local_88.Object = (FNiagaraRibbonIndexBuffer *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(param_6->IndexBuffer).SharedReferenceCount,&local_88.SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_88.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      if ((param_4->TotalBitCount < 0x11) && (GNiagaraRibbonForceIndex32 == false)) {
        pFVar6 = FMeshElementCollector::GetDynamicIndexBuffer(param_3);
        uVar1 = param_4->TotalNumIndices;
        pFVar7 = FGlobalDynamicIndexBuffer::Allocate(pFVar6,&local_68,uVar1,2);
        local_50.IndexStride = 2;
        local_50.MaxUsedIndex = 0;
        local_78.Object = (FNiagaraRibbonIndexBuffer *)pFVar7->Buffer;
        local_78.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pFVar7->IndexBuffer;
        local_50._padding_ = *(longlong *)&pFVar7->FirstIndex;
        local_50._padding_ = (longlong)local_78.Object;
        local_50._padding_ = (longlong)local_78.SharedReferenceCount.ReferenceController;
        local_50.NumIndices = uVar1;
        pFVar8 = TSharedPtr<FNiagaraRibbonIndexBuffer,1>::operator->(pTVar4);
        FNiagaraRibbonIndexBuffer::Initialize(pFVar8,param_1,&local_50);
        GenerateIndexBufferCPU<unsigned_short>
                  (param_4,param_5,&this->ShapeState,(ushort *)local_78.Object,param_7,param_8,
                   (Type)this->_padding_,this->DrawDirection);
      }
      else {
        pFVar6 = FMeshElementCollector::GetDynamicIndexBuffer(param_3);
        uVar1 = param_4->TotalNumIndices;
        pFVar7 = FGlobalDynamicIndexBuffer::Allocate(pFVar6,&local_68,uVar1,4);
        local_50.IndexStride = 4;
        local_50.MaxUsedIndex = 0;
        local_78.Object = (FNiagaraRibbonIndexBuffer *)pFVar7->Buffer;
        local_78.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)pFVar7->IndexBuffer;
        local_50._padding_ = *(longlong *)&pFVar7->FirstIndex;
        local_50._padding_ = (longlong)local_78.Object;
        local_50._padding_ = (longlong)local_78.SharedReferenceCount.ReferenceController;
        local_50.NumIndices = uVar1;
        pFVar8 = TSharedPtr<FNiagaraRibbonIndexBuffer,1>::operator->(pTVar4);
        FNiagaraRibbonIndexBuffer::Initialize(pFVar8,param_1,&local_50);
        GenerateIndexBufferCPU<unsigned_int>
                  (param_4,param_5,&this->ShapeState,(uint *)local_78.Object,param_7,param_8,
                   (Type)this->_padding_,this->DrawDirection);
      }
    }
    else {
      pTVar3 = FNiagaraGpuRibbonsDataManager::GetOrAllocateIndirectDrawBuffer
                         (param_2,(TSharedPtr<FRWBuffer,1> *)&local_78,param_1);
      if (&param_6->IndirectDrawBuffer != pTVar3) {
        (param_6->IndirectDrawBuffer).Object = pTVar3->Object;
        pTVar3->Object = (FRWBuffer *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(param_6->IndirectDrawBuffer).SharedReferenceCount,&pTVar3->SharedReferenceCount
                  );
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
      uVar1 = param_4->TotalNumIndices;
      uVar2 = param_5->MaxAllocatedCountEstimate;
      if (param_5->MaxAllocatedCountEstimate < uVar1) {
        uVar2 = uVar1;
      }
      pTVar4 = FNiagaraGpuRibbonsDataManager::GetOrAllocateIndexBuffer
                         (param_2,&local_78,param_1,uVar1,uVar2);
      if (&param_6->IndexBuffer != pTVar4) {
        (param_6->IndexBuffer).Object = pTVar4->Object;
        pTVar4->Object = (FNiagaraRibbonIndexBuffer *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(param_6->IndexBuffer).SharedReferenceCount,&pTVar4->SharedReferenceCount);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_78.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// GenerateShapeStateCustom @ 14934bf80

void __cdecl
FNiagaraRendererRibbons::GenerateShapeStateCustom
          (FNiagaraRibbonShapeGeometryData *param_1,
          TArray<FNiagaraRibbonShapeCustomVertex,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  undefined8 uVar3;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  float fVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ForElementType<unsigned_int> FVar13;
  uint uVar14;
  ulonglong uVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  float fVar19;
  float fVar20;
  undefined8 local_res10;
  float local_res20;
  float fStackX_24;
  int local_98;
  int local_94 [21];
  
  param_1->bDisableBackfaceCulling = !param_3;
  param_1->Shape = Custom;
  param_1->bShouldFlipNormalToView = false;
  param_1->TrianglesPerSegment = param_2->ArrayNum * 2;
  uVar9 = param_2->ArrayNum + 1;
  param_1->NumVerticesInSlice = uVar9;
  fVar19 = logf((float)uVar9);
  uVar9 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar6 = __real_322bcc77;
  uVar17 = 0;
  bVar8 = false;
  iVar10 = (int)ROUND(__real_bf000000 - fVar19 * __real_4038aa3b) >> 1;
  param_1->BitsNeededForShape = -iVar10;
  param_1->BitMaskForShape = (int)(0xffffffffL >> ((char)iVar10 + 0x20U & 0x3f));
  iVar10 = param_2->ArrayNum;
  uVar15 = uVar17;
  uVar18 = uVar17;
  if (0 < iVar10) {
    do {
      uVar14 = (uint)uVar15;
      uVar11 = 0;
      if ((int)uVar14 < iVar10) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (fVar6 < (float)(*(uint *)((param_2->AllocatorInstance).Data + uVar18 + 0x10) & uVar9)) {
        bVar8 = true;
        break;
      }
      iVar10 = param_2->ArrayNum;
      uVar15 = (ulonglong)(uVar14 + 1);
      uVar18 = uVar18 + 0x14;
    } while ((int)(uVar14 + 1) < iVar10);
  }
  fVar19 = __real_38d1b717;
  iVar10 = param_2->ArrayNum;
  if (-1 < iVar10) {
    uVar15 = uVar17;
    do {
      iVar12 = (int)uVar15;
      uVar14 = iVar12 % iVar10;
      lVar16 = (longlong)(int)uVar14;
      uVar11 = 0;
      if ((int)uVar14 < iVar10) {
        uVar11 = ~uVar14 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar2 = (param_2->AllocatorInstance).Data;
      uVar3 = *(undefined8 *)(pFVar2 + lVar16 * 0x14);
      if ((fVar19 < (float)(*(uint *)(pFVar2 + lVar16 * 0x14 + 8) & uVar9)) ||
         (fVar19 < (float)(*(uint *)(pFVar2 + lVar16 * 0x14 + 0xc) & uVar9))) {
        local_res10 = *(ulonglong *)(pFVar2 + lVar16 * 0x14 + 8);
      }
      else {
        fStackX_24 = (float)((ulonglong)uVar3 >> 0x20);
        local_res20 = (float)uVar3;
        fVar20 = fStackX_24 * fStackX_24 + local_res20 * local_res20;
        local_res10 = uVar17;
        if (fVar6 < fVar20) {
          fVar20 = __real_3f800000 / SQRT(fVar20);
          local_res10 = CONCAT44(fVar20 * fStackX_24,fVar20 * local_res20);
        }
      }
      if (bVar8) {
        fVar20 = *(float *)(pFVar2 + lVar16 * 0x14 + 0x10);
      }
      else {
        fVar20 = (float)iVar12 / (float)param_2->ArrayNum;
      }
      iVar10 = (param_1->SliceVertexData).ArrayNum;
      if (iVar10 == (param_1->SliceVertexData).ArrayMax) {
        iVar10 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x414,&(param_1->SliceVertexData).AllocatorInstance,
                            &(param_1->SliceVertexData).ArrayMax);
      }
      uVar15 = (ulonglong)(iVar12 + 1U);
      (param_1->SliceVertexData).ArrayNum = iVar10 + 1;
      lVar16 = (longlong)iVar10;
      pFVar2 = (param_1->SliceVertexData).AllocatorInstance.Data;
      *(float *)(pFVar2 + lVar16 * 0x14 + 0x10) = fVar20;
      *(undefined8 *)(pFVar2 + lVar16 * 0x14) = uVar3;
      *(ulonglong *)(pFVar2 + lVar16 * 0x14 + 8) = local_res10;
      iVar10 = param_2->ArrayNum;
    } while ((int)(iVar12 + 1U) <= iVar10);
  }
  uVar9 = iVar10 * 2;
  if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
  }
  piVar1 = &(param_1->SliceTriangleToVertexIds).ArrayMax;
  if (*piVar1 < (int)uVar9) {
    UE::Core::Private::
    ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
              (4,4,uVar9,(ForElementType<unsigned_int> *)param_1,
               (param_1->SliceTriangleToVertexIds).ArrayNum,piVar1);
  }
  if (0 < param_2->ArrayNum) {
    do {
      FVar4 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
      iVar10 = (int)uVar17;
      FVar13 = (ForElementType<unsigned_int>)param_1;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = FVar4;
      }
      local_98 = iVar10;
      if ((ulonglong)FVar13 <= &local_98) {
        FVar13 = (ForElementType<unsigned_int>)param_1;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar13 = FVar4;
        }
        if ((&local_98 < (int *)((longlong)FVar13 + (longlong)*piVar1 * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar12 = (param_1->SliceTriangleToVertexIds).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                           (0x404,(ForElementType<unsigned_int> *)param_1,piVar1);
        (param_1->SliceTriangleToVertexIds).ArrayNum = iVar12;
      }
      (param_1->SliceTriangleToVertexIds).ArrayNum = iVar12 + 1;
      FVar4 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<unsigned_int>)param_1;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = FVar4;
      }
      *(int *)((longlong)FVar13 + (longlong)iVar12 * 4) = local_98;
      local_94[0] = iVar10 + 1;
      FVar4 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<unsigned_int>)param_1;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = FVar4;
      }
      if ((ulonglong)FVar13 <= local_94) {
        FVar13 = (ForElementType<unsigned_int>)param_1;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar13 = FVar4;
        }
        if ((local_94 < (int *)((longlong)FVar13 + (longlong)*piVar1 * 4)) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar8)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar12 = (param_1->SliceTriangleToVertexIds).ArrayNum;
      if (iVar12 == *piVar1) {
        iVar12 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                           (0x404,(ForElementType<unsigned_int> *)param_1,piVar1);
        (param_1->SliceTriangleToVertexIds).ArrayNum = iVar12;
      }
      (param_1->SliceTriangleToVertexIds).ArrayNum = iVar12 + 1;
      FVar4 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
      FVar13 = (ForElementType<unsigned_int>)param_1;
      if (FVar4 != (ForElementType<unsigned_int>)0x0) {
        FVar13 = FVar4;
      }
      uVar17 = (ulonglong)(iVar10 + 1U);
      *(int *)((longlong)FVar13 + (longlong)iVar12 * 4) = local_94[0];
    } while ((int)(iVar10 + 1U) < param_2->ArrayNum);
  }
  return;
}

// GenerateShapeStateMultiPlane @ 14934c4d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FNiagaraRendererRibbons::GenerateShapeStateMultiPlane
          (FNiagaraRibbonShapeGeometryData *param_1,int param_2,int param_3,bool param_4,
          bool param_5)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  ForElementType<unsigned_int> FVar3;
  code *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ForElementType<unsigned_int> FVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
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
  int local_res10;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  float local_f8;
  float fStack_f4;
  float local_f0;
  float fStack_ec;
  
  uVar17 = (ulonglong)(uint)param_2;
  param_1->Shape = MultiPlane;
  if ((param_4) || (param_5)) {
    bVar9 = false;
  }
  else {
    bVar9 = true;
  }
  param_1->bDisableBackfaceCulling = bVar9;
  param_1->bShouldFlipNormalToView = !param_4;
  uVar18 = (param_4 + 1) * param_2 * param_3;
  param_1->TrianglesPerSegment = uVar18 * 2;
  uVar10 = (param_3 + 1) * (param_4 + 1) * param_2;
  param_1->NumVerticesInSlice = uVar10;
  fVar19 = logf((float)uVar10);
  fVar23 = __real_c0490fdb;
  fVar22 = __real_bfc90fdb;
  fVar25 = __real_40c90fdb;
  fVar26 = __real_3e22f983;
  fVar8 = __real_bf800000;
  fVar7 = __real_40490fdb;
  fVar30 = __real_3fc90fdb;
  fVar6 = __real_3f000000;
  fVar5 = __real_3f800000;
  iVar16 = 0;
  local_res10 = 0;
  iVar11 = (int)ROUND(__real_bf000000 - fVar19 * __real_4038aa3b) >> 1;
  param_1->BitsNeededForShape = -iVar11;
  param_1->BitMaskForShape = (int)(0xffffffffL >> ((char)iVar11 + 0x20U & 0x3f));
  if (0 < param_2) {
    do {
      iVar11 = 0;
      if (-1 < param_3) {
        fVar30 = (float)iVar16 * (fVar5 / (float)param_2) * fVar7;
        fVar19 = fVar30 * fVar26;
        do {
          fVar31 = (float)iVar11 * (fVar5 / (float)param_3);
          fVar28 = fVar19 - fVar6;
          fVar26 = fVar19 + fVar6;
          fStack_f4 = fVar31 - fVar6;
          fVar29 = fVar28;
          if (0.0 <= fVar30) {
            fVar29 = fVar26;
          }
          fVar25 = fVar30 - (float)(longlong)fVar29 * fVar25;
          if (fVar25 <= __real_3fc90fdb) {
            fVar29 = fVar5;
            if (fVar25 < fVar22) {
              fVar25 = fVar23 - fVar25;
              fVar29 = fVar8;
            }
          }
          else {
            fVar25 = fVar7 - fVar25;
            fVar29 = fVar8;
          }
          fVar22 = fVar25 * fVar25;
          local_f8 = (((((__real_37cfb4c2 - fVar22 * ___real_348bdd11) * fVar22 - ___real_3ab609aa)
                        * fVar22 + ___real_3d2aaaa3) * fVar22 - fVar6) * fVar22 + fVar5) * fVar29 *
                     fStack_f4;
          fStack_f4 = (((((__real_3638b88e - fVar22 * __real_32cd365b) * fVar22 - __real_39500bf1) *
                         fVar22 + ___real_3c088886) * fVar22 - __real_3e2aaaab) * fVar22 + fVar5) *
                      fVar25 * fStack_f4;
          if (fVar30 < 0.0) {
            fVar26 = fVar28;
          }
          local_f0 = fVar30 - (float)(longlong)fVar26 * __real_40c90fdb;
          if (local_f0 <= __real_3fc90fdb) {
            fStack_ec = fVar5;
            if (local_f0 < __real_bfc90fdb) {
              local_f0 = __real_c0490fdb - local_f0;
              fStack_ec = fVar8;
            }
          }
          else {
            local_f0 = fVar7 - local_f0;
            fStack_ec = fVar8;
          }
          iVar12 = (param_1->SliceVertexData).ArrayNum;
          fVar26 = local_f0 * local_f0;
          local_f0 = ((__real_3e2aaaab -
                      (((__real_3638b88e - fVar26 * __real_32cd365b) * fVar26 - __real_39500bf1) *
                       fVar26 + ___real_3c088886) * fVar26) * fVar26 - fVar5) * local_f0;
          fStack_ec = (((((__real_37cfb4c2 - fVar26 * ___real_348bdd11) * fVar26 - ___real_3ab609aa)
                         * fVar26 + ___real_3d2aaaa3) * fVar26 - fVar6) * fVar26 + fVar5) *
                      fStack_ec;
          if (iVar12 == (param_1->SliceVertexData).ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x414,&(param_1->SliceVertexData).AllocatorInstance,
                                &(param_1->SliceVertexData).ArrayMax);
          }
          fVar23 = __real_c0490fdb;
          fVar22 = __real_bfc90fdb;
          fVar25 = __real_40c90fdb;
          iVar11 = iVar11 + 1;
          (param_1->SliceVertexData).ArrayNum = iVar12 + 1;
          pFVar2 = (param_1->SliceVertexData).AllocatorInstance.Data;
          lVar13 = (longlong)iVar12;
          *(ulonglong *)(pFVar2 + lVar13 * 0x14) = CONCAT44(fStack_f4,local_f8);
          *(ulonglong *)(pFVar2 + lVar13 * 0x14 + 8) = CONCAT44(fStack_ec,local_f0);
          *(float *)(pFVar2 + lVar13 * 0x14 + 0x10) = fVar31;
          fVar26 = __real_3e22f983;
        } while (iVar11 <= param_3);
      }
      iVar16 = iVar16 + 1;
      fVar30 = __real_3fc90fdb;
    } while (iVar16 < param_2);
  }
  if ((param_4) && (iVar11 = 0, 0 < param_2)) {
    do {
      iVar16 = 0;
      if (-1 < param_3) {
        fVar19 = (float)iVar11 * (fVar5 / (float)param_2) * fVar7;
        fVar26 = fVar19 * fVar26;
        do {
          fVar28 = (float)iVar16 * (fVar5 / (float)param_3);
          fVar29 = fVar28 - fVar6;
          if (fVar19 < 0.0) {
            fVar31 = fVar26 - fVar6;
          }
          else {
            fVar31 = fVar26 + fVar6;
          }
          fVar31 = fVar19 - (float)(longlong)fVar31 * fVar25;
          if (fVar31 <= fVar30) {
            fVar27 = fVar5;
            if (fVar31 < fVar22) {
              fVar31 = fVar23 - fVar31;
              fVar27 = fVar8;
            }
          }
          else {
            fVar31 = fVar7 - fVar31;
            fVar27 = fVar8;
          }
          fVar24 = fVar31 * fVar31;
          fVar20 = ((__real_37cfb4c2 - fVar24 * ___real_348bdd11) * fVar24 - ___real_3ab609aa) *
                   fVar24 + ___real_3d2aaaa3;
          fVar21 = (((__real_3638b88e - fVar24 * __real_32cd365b) * fVar24 - __real_39500bf1) *
                    fVar24 + ___real_3c088886) * fVar24 - __real_3e2aaaab;
          if (fVar19 < 0.0) {
            fVar25 = fVar26 - fVar6;
          }
          else {
            fVar25 = fVar26 + fVar6;
          }
          local_f0 = fVar19 - (float)(longlong)fVar25 * __real_40c90fdb;
          if (local_f0 <= fVar30) {
            fStack_ec = fVar5;
            if (local_f0 < __real_bfc90fdb) {
              local_f0 = __real_c0490fdb - local_f0;
              fStack_ec = fVar8;
            }
          }
          else {
            local_f0 = fVar7 - local_f0;
            fStack_ec = fVar8;
          }
          iVar12 = (param_1->SliceVertexData).ArrayNum;
          fVar25 = local_f0 * local_f0;
          local_f0 = (((((__real_3638b88e - fVar25 * __real_32cd365b) * fVar25 - __real_39500bf1) *
                        fVar25 + ___real_3c088886) * fVar25 - __real_3e2aaaab) * fVar25 + fVar5) *
                     local_f0;
          fStack_ec = ((fVar6 - (((__real_37cfb4c2 - fVar25 * ___real_348bdd11) * fVar25 -
                                 ___real_3ab609aa) * fVar25 + ___real_3d2aaaa3) * fVar25) * fVar25 -
                      fVar5) * fStack_ec;
          if (iVar12 == (param_1->SliceVertexData).ArrayMax) {
            iVar12 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x414,&(param_1->SliceVertexData).AllocatorInstance,
                                &(param_1->SliceVertexData).ArrayMax);
          }
          fVar23 = __real_c0490fdb;
          fVar22 = __real_bfc90fdb;
          fVar25 = __real_40c90fdb;
          iVar16 = iVar16 + 1;
          (param_1->SliceVertexData).ArrayNum = iVar12 + 1;
          pFVar2 = (param_1->SliceVertexData).AllocatorInstance.Data;
          lVar13 = (longlong)iVar12;
          *(ulonglong *)(pFVar2 + lVar13 * 0x14) =
               CONCAT44((fVar21 * fVar24 + fVar5) * fVar31 * fVar29,
                        ((fVar20 * fVar24 - fVar6) * fVar24 + fVar5) * fVar27 * fVar29);
          *(ulonglong *)(pFVar2 + lVar13 * 0x14 + 8) = CONCAT44(fStack_ec,local_f0);
          *(float *)(pFVar2 + lVar13 * 0x14 + 0x10) = fVar28;
        } while (iVar16 <= param_3);
      }
      iVar11 = iVar11 + 1;
      fVar22 = __real_bfc90fdb;
      fVar23 = __real_c0490fdb;
      fVar25 = __real_40c90fdb;
      fVar26 = __real_3e22f983;
    } while (iVar11 < param_2);
  }
  if (-1 < (int)uVar18) {
    piVar1 = &(param_1->SliceTriangleToVertexIds).ArrayMax;
    if (*piVar1 < (int)uVar18) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,uVar18,(ForElementType<unsigned_int> *)param_1,
                 (param_1->SliceTriangleToVertexIds).ArrayNum,piVar1);
    }
    if (0 < param_2) {
      do {
        uVar15 = (ulonglong)(uint)param_3;
        iVar11 = local_res10;
        if (0 < param_3) {
          do {
            FVar3 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
            FVar14 = (ForElementType<unsigned_int>)param_1;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = FVar3;
            }
            local_108 = iVar11;
            if ((ulonglong)FVar14 <= &local_108) {
              FVar14 = (ForElementType<unsigned_int>)param_1;
              if (FVar3 != (ForElementType<unsigned_int>)0x0) {
                FVar14 = FVar3;
              }
              if ((&local_108 < (int *)((longlong)FVar14 + (longlong)*piVar1 * 4)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            iVar16 = (param_1->SliceTriangleToVertexIds).ArrayNum;
            if (iVar16 == *piVar1) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                 (0x404,(ForElementType<unsigned_int> *)param_1,piVar1);
            }
            (param_1->SliceTriangleToVertexIds).ArrayNum = iVar16 + 1;
            FVar3 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
            FVar14 = (ForElementType<unsigned_int>)param_1;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = FVar3;
            }
            *(int *)((longlong)FVar14 + (longlong)iVar16 * 4) = local_108;
            local_104 = iVar11 + 1;
            FVar3 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
            FVar14 = (ForElementType<unsigned_int>)param_1;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = FVar3;
            }
            if ((ulonglong)FVar14 <= &local_104) {
              FVar14 = (ForElementType<unsigned_int>)param_1;
              if (FVar3 != (ForElementType<unsigned_int>)0x0) {
                FVar14 = FVar3;
              }
              if ((&local_104 < (int *)((longlong)FVar14 + (longlong)*piVar1 * 4)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            iVar16 = (param_1->SliceTriangleToVertexIds).ArrayNum;
            if (iVar16 == *piVar1) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                 (0x404,(ForElementType<unsigned_int> *)param_1,piVar1);
            }
            (param_1->SliceTriangleToVertexIds).ArrayNum = iVar16 + 1;
            FVar3 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
            FVar14 = (ForElementType<unsigned_int>)param_1;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = FVar3;
            }
            *(int *)((longlong)FVar14 + (longlong)iVar16 * 4) = local_104;
            uVar15 = uVar15 - 1;
            iVar11 = iVar11 + 1;
          } while (uVar15 != 0);
        }
        if ((param_4) && (0 < param_3)) {
          iVar11 = local_res10 + (param_3 + 1) * param_2;
          uVar15 = (ulonglong)(uint)param_3;
          do {
            FVar3 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
            local_100 = iVar11 + 1;
            FVar14 = (ForElementType<unsigned_int>)param_1;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = FVar3;
            }
            if ((ulonglong)FVar14 <= &local_100) {
              FVar14 = (ForElementType<unsigned_int>)param_1;
              if (FVar3 != (ForElementType<unsigned_int>)0x0) {
                FVar14 = FVar3;
              }
              if ((&local_100 < (int *)((longlong)FVar14 + (longlong)*piVar1 * 4)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            iVar16 = (param_1->SliceTriangleToVertexIds).ArrayNum;
            if (iVar16 == *piVar1) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                 (0x404,(ForElementType<unsigned_int> *)param_1,piVar1);
            }
            (param_1->SliceTriangleToVertexIds).ArrayNum = iVar16 + 1;
            FVar3 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
            FVar14 = (ForElementType<unsigned_int>)param_1;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = FVar3;
            }
            *(int *)((longlong)FVar14 + (longlong)iVar16 * 4) = local_100;
            FVar3 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
            FVar14 = (ForElementType<unsigned_int>)param_1;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = FVar3;
            }
            local_fc = iVar11;
            if ((ulonglong)FVar14 <= &local_fc) {
              FVar14 = (ForElementType<unsigned_int>)param_1;
              if (FVar3 != (ForElementType<unsigned_int>)0x0) {
                FVar14 = FVar3;
              }
              if ((&local_fc < (int *)((longlong)FVar14 + (longlong)*piVar1 * 4)) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar9)) {
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
            }
            iVar16 = (param_1->SliceTriangleToVertexIds).ArrayNum;
            if (iVar16 == *piVar1) {
              iVar16 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                                 (0x404,(ForElementType<unsigned_int> *)param_1,piVar1);
            }
            (param_1->SliceTriangleToVertexIds).ArrayNum = iVar16 + 1;
            FVar3 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
            FVar14 = (ForElementType<unsigned_int>)param_1;
            if (FVar3 != (ForElementType<unsigned_int>)0x0) {
              FVar14 = FVar3;
            }
            iVar11 = iVar11 + 1;
            *(int *)((longlong)FVar14 + (longlong)iVar16 * 4) = local_fc;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        local_res10 = local_res10 + param_3 + 1;
        uVar17 = uVar17 - 1;
      } while (uVar17 != 0);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
}

// GenerateShapeStatePlane @ 14934d150

void __cdecl
FNiagaraRendererRibbons::GenerateShapeStatePlane
          (FNiagaraRibbonShapeGeometryData *param_1,int param_2,bool param_3)

{
  int *piVar1;
  TArray<FNiagaraRibbonShapeGeometryData::FVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ForElementType<unsigned_int> FVar11;
  uint uVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  int local_78;
  int local_74;
  float local_70;
  undefined4 uStack_6c;
  
  uVar12 = param_2 + 1;
  param_1->Shape = Plane;
  uVar6 = param_2 * 2;
  param_1->bShouldFlipNormalToView = false;
  param_1->TrianglesPerSegment = uVar6;
  param_1->bDisableBackfaceCulling = !param_3;
  param_1->NumVerticesInSlice = uVar12;
  fVar14 = logf((float)uVar12);
  pTVar2 = &param_1->SliceVertexData;
  iVar8 = (int)ROUND(__real_bf000000 - fVar14 * __real_4038aa3b) >> 1;
  param_1->BitsNeededForShape = -iVar8;
  param_1->BitMaskForShape = (int)(0xffffffffL >> ((char)iVar8 + 0x20U & 0x3f));
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &(param_1->SliceVertexData).ArrayMax;
  if ((param_1->SliceVertexData).ArrayMax < (int)uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar12,&pTVar2->AllocatorInstance,(param_1->SliceVertexData).ArrayNum,piVar1);
  }
  fVar14 = __real_3f000000;
  iVar13 = 0;
  iVar8 = 0;
  if (-1 < param_2) {
    uStack_6c = 0;
    fVar16 = __real_3f800000 / (float)param_2;
    do {
      iVar9 = (param_1->SliceVertexData).ArrayNum;
      fVar15 = (float)iVar8 * fVar16;
      local_70 = fVar15 - fVar14;
      if (iVar9 == *piVar1) {
        iVar9 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x414,&pTVar2->AllocatorInstance,piVar1);
        (param_1->SliceVertexData).ArrayNum = iVar9;
      }
      iVar8 = iVar8 + 1;
      (param_1->SliceVertexData).ArrayNum = iVar9 + 1;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      lVar10 = (longlong)iVar9;
      *(ulonglong *)(pFVar3 + lVar10 * 0x14) = CONCAT44(uStack_6c,local_70);
      *(float *)(pFVar3 + lVar10 * 0x14 + 0x10) = fVar15;
      *(undefined8 *)(pFVar3 + lVar10 * 0x14 + 8) = 0x3f80000000000000;
    } while (iVar8 <= param_2);
  }
  if (-1 < (int)uVar6) {
    piVar1 = &(param_1->SliceTriangleToVertexIds).ArrayMax;
    if (*piVar1 < (int)uVar6) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,uVar6,(ForElementType<unsigned_int> *)param_1,
                 (param_1->SliceTriangleToVertexIds).ArrayNum,piVar1);
    }
    if (0 < param_2) {
      do {
        FVar4 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<unsigned_int>)param_1;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar11 = FVar4;
        }
        local_78 = iVar13;
        if ((ulonglong)FVar11 <= &local_78) {
          FVar11 = (ForElementType<unsigned_int>)param_1;
          if (FVar4 != (ForElementType<unsigned_int>)0x0) {
            FVar11 = FVar4;
          }
          if ((&local_78 < (int *)((longlong)FVar11 + (longlong)*piVar1 * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar8 = (param_1->SliceTriangleToVertexIds).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                            (0x404,(ForElementType<unsigned_int> *)param_1,piVar1);
          (param_1->SliceTriangleToVertexIds).ArrayNum = iVar8;
        }
        (param_1->SliceTriangleToVertexIds).ArrayNum = iVar8 + 1;
        FVar4 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<unsigned_int>)param_1;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar11 = FVar4;
        }
        *(int *)((longlong)FVar11 + (longlong)iVar8 * 4) = local_78;
        local_74 = iVar13 + 1;
        FVar4 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<unsigned_int>)param_1;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar11 = FVar4;
        }
        if ((ulonglong)FVar11 <= &local_74) {
          FVar11 = (ForElementType<unsigned_int>)param_1;
          if (FVar4 != (ForElementType<unsigned_int>)0x0) {
            FVar11 = FVar4;
          }
          if ((&local_74 < (int *)((longlong)FVar11 + (longlong)*piVar1 * 4)) &&
             (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar8 = (param_1->SliceTriangleToVertexIds).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                            (0x404,(ForElementType<unsigned_int> *)param_1,piVar1);
          (param_1->SliceTriangleToVertexIds).ArrayNum = iVar8;
        }
        (param_1->SliceTriangleToVertexIds).ArrayNum = iVar8 + 1;
        FVar4 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
        FVar11 = (ForElementType<unsigned_int>)param_1;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar11 = FVar4;
        }
        iVar13 = iVar13 + 1;
        *(int *)((longlong)FVar11 + (longlong)iVar8 * 4) = local_74;
      } while (iVar13 < param_2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar6);
}

// GenerateShapeStateTube @ 14934d570

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl
FNiagaraRendererRibbons::GenerateShapeStateTube
          (FNiagaraRibbonShapeGeometryData *param_1,int param_2,bool param_3)

{
  int *piVar1;
  TArray<FNiagaraRibbonShapeGeometryData::FVertex,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  ForElementType<unsigned_int> FVar4;
  code *pcVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  ForElementType<unsigned_int> FVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
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
  int local_e8;
  int local_e4 [43];
  
  uVar17 = param_2 + 1;
  param_1->Shape = Tube;
  uVar19 = param_2 * 2;
  param_1->bShouldFlipNormalToView = false;
  param_1->TrianglesPerSegment = uVar19;
  param_1->bDisableBackfaceCulling = !param_3;
  param_1->NumVerticesInSlice = uVar17;
  fVar20 = logf((float)uVar17);
  fVar23 = __real_bf000000;
  pTVar2 = &param_1->SliceVertexData;
  iVar13 = (int)ROUND(__real_bf000000 - fVar20 * __real_4038aa3b) >> 1;
  param_1->BitsNeededForShape = -iVar13;
  param_1->BitMaskForShape = (int)(0xffffffffL >> ((char)iVar13 + 0x20U & 0x3f));
  if ((int)uVar17 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar17);
  }
  piVar1 = &(param_1->SliceVertexData).ArrayMax;
  if (*piVar1 < (int)uVar17) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x14,4,uVar17,&pTVar2->AllocatorInstance,(param_1->SliceVertexData).ArrayNum,piVar1);
    fVar23 = __real_bf000000;
  }
  fVar11 = __real_c0490fdb;
  fVar10 = __real_bfc90fdb;
  fVar9 = __real_40c90fdb;
  fVar8 = __real_bf800000;
  fVar7 = __real_40490fdb;
  fVar6 = __real_3f000000;
  fVar20 = __real_3f800000;
  iVar13 = 0;
  iVar18 = 0;
  if (-1 < param_2) {
    fVar21 = __real_3f800000 / (float)param_2;
    do {
      fVar30 = (float)iVar18 * fVar21;
      fVar26 = fVar30 * __real_c0c90fdb;
      fVar27 = fVar26 * __real_3e22f983 + fVar6;
      fVar29 = fVar26 * __real_3e22f983 - fVar6;
      fVar28 = fVar29;
      if (0.0 <= fVar26) {
        fVar28 = fVar27;
      }
      fVar28 = fVar26 - (float)(longlong)fVar28 * fVar9;
      if (fVar28 <= __real_3fc90fdb) {
        if (fVar28 < fVar10) {
          fVar28 = fVar11 - fVar28;
          fVar23 = fVar6;
        }
      }
      else {
        fVar28 = fVar7 - fVar28;
        fVar23 = fVar6;
      }
      fVar24 = fVar28 * fVar28;
      fVar22 = (((((__real_37cfb4c2 - fVar24 * ___real_348bdd11) * fVar24 - ___real_3ab609aa) *
                  fVar24 + ___real_3d2aaaa3) * fVar24 - fVar6) * fVar24 + fVar20) * fVar23;
      fVar28 = (((((__real_3638b88e - fVar24 * __real_32cd365b) * fVar24 - __real_39500bf1) * fVar24
                 + ___real_3c088886) * fVar24 - __real_3e2aaaab) * fVar24 + fVar20) * fVar28 *
               __real_bf000000;
      if (fVar26 < 0.0) {
        fVar27 = fVar29;
      }
      fVar26 = fVar26 - (float)(longlong)fVar27 * fVar9;
      if (fVar26 <= __real_3fc90fdb) {
        fVar27 = fVar20;
        if (fVar26 < fVar10) {
          fVar26 = fVar11 - fVar26;
          fVar27 = fVar8;
        }
      }
      else {
        fVar26 = fVar7 - fVar26;
        fVar27 = fVar8;
      }
      iVar14 = (param_1->SliceVertexData).ArrayNum;
      fVar25 = fVar26 * fVar26;
      fVar24 = ((__real_37cfb4c2 - fVar25 * ___real_348bdd11) * fVar25 - ___real_3ab609aa) * fVar25
               + ___real_3d2aaaa3;
      fVar29 = __real_3e2aaaab -
               (((__real_3638b88e - fVar25 * __real_32cd365b) * fVar25 - __real_39500bf1) * fVar25 +
               ___real_3c088886) * fVar25;
      if (iVar14 == *piVar1) {
        iVar14 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x414,&pTVar2->AllocatorInstance,piVar1);
        (param_1->SliceVertexData).ArrayNum = iVar14;
      }
      fVar23 = __real_bf000000;
      iVar18 = iVar18 + 1;
      (param_1->SliceVertexData).ArrayNum = iVar14 + 1;
      pFVar3 = (pTVar2->AllocatorInstance).Data;
      lVar15 = (longlong)iVar14;
      *(ulonglong *)(pFVar3 + lVar15 * 0x14) = CONCAT44(fVar28,fVar22);
      *(ulonglong *)(pFVar3 + lVar15 * 0x14 + 8) =
           CONCAT44((fVar29 * fVar25 - fVar20) * fVar26,
                    ((fVar6 - fVar24 * fVar25) * fVar25 - fVar20) * fVar27);
      *(float *)(pFVar3 + lVar15 * 0x14 + 0x10) = fVar30;
    } while (iVar18 <= param_2);
  }
  if (-1 < (int)uVar19) {
    piVar1 = &(param_1->SliceTriangleToVertexIds).ArrayMax;
    if (*piVar1 < (int)uVar19) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                (4,4,uVar19,(ForElementType<unsigned_int> *)param_1,
                 (param_1->SliceTriangleToVertexIds).ArrayNum,piVar1);
    }
    if (0 < param_2) {
      do {
        FVar4 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<unsigned_int>)param_1;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar16 = FVar4;
        }
        local_e8 = iVar13;
        if ((ulonglong)FVar16 <= &local_e8) {
          FVar16 = (ForElementType<unsigned_int>)param_1;
          if (FVar4 != (ForElementType<unsigned_int>)0x0) {
            FVar16 = FVar4;
          }
          if ((&local_e8 < (int *)((longlong)FVar16 + (longlong)*piVar1 * 4)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar18 = (param_1->SliceTriangleToVertexIds).ArrayNum;
        if (iVar18 == *piVar1) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                             (0x404,(ForElementType<unsigned_int> *)param_1,piVar1);
          (param_1->SliceTriangleToVertexIds).ArrayNum = iVar18;
        }
        (param_1->SliceTriangleToVertexIds).ArrayNum = iVar18 + 1;
        FVar4 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<unsigned_int>)param_1;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar16 = FVar4;
        }
        *(int *)((longlong)FVar16 + (longlong)iVar18 * 4) = local_e8;
        local_e4[0] = iVar13 + 1;
        FVar4 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<unsigned_int>)param_1;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar16 = FVar4;
        }
        if ((ulonglong)FVar16 <= local_e4) {
          FVar16 = (ForElementType<unsigned_int>)param_1;
          if (FVar4 != (ForElementType<unsigned_int>)0x0) {
            FVar16 = FVar4;
          }
          if ((local_e4 < (int *)((longlong)FVar16 + (longlong)*piVar1 * 4)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar18 = (param_1->SliceTriangleToVertexIds).ArrayNum;
        if (iVar18 == *piVar1) {
          iVar18 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<32,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                             (0x404,(ForElementType<unsigned_int> *)param_1,piVar1);
          (param_1->SliceTriangleToVertexIds).ArrayNum = iVar18;
        }
        (param_1->SliceTriangleToVertexIds).ArrayNum = iVar18 + 1;
        FVar4 = (param_1->SliceTriangleToVertexIds).AllocatorInstance.SecondaryData;
        FVar16 = (ForElementType<unsigned_int>)param_1;
        if (FVar4 != (ForElementType<unsigned_int>)0x0) {
          FVar16 = FVar4;
        }
        iVar13 = iVar13 + 1;
        *(int *)((longlong)FVar16 + (longlong)iVar18 * 4) = local_e4[0];
      } while (iVar13 < param_2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar19);
}

// GenerateVertexBufferCPU @ 14934dc50

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
FNiagaraRendererRibbons::GenerateVertexBufferCPU
          (FNiagaraRendererRibbons *this,FNiagaraGenerationInputDataCPUAccessors *param_1,
          FNiagaraRibbonCPUGeneratedVertexData *param_2)

{
  FNiagaraDataSetReaderStruct<FNiagaraID> *pFVar1;
  FNiagaraDataSetReaderInt32<int> *pFVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  FIdentityFunctor FVar6;
  bool bVar7;
  FIdentityFunctor FVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FName *pFVar13;
  FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesCPU> FVar14;
  uint *puVar15;
  FTlsAutoCleanup *pFVar16;
  longlong lVar17;
  byte bVar18;
  ForElementType<FRibbonMultiRibbonInfo> FVar19;
  undefined8 *puVar20;
  FName FVar21;
  uint uVar22;
  ForElementType<unsigned_int> FVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float _X;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined1 local_res10 [8];
  FColor_u_0 local_res20 [2];
  uint local_168 [2];
  ForElementType<unsigned_int> local_160;
  undefined8 local_158;
  FMemMark local_150;
  FName local_128;
  FName local_120;
  FNiagaraGenerationInputDataCPUAccessors *local_110;
  FNiagaraGenerationInputDataCPUAccessors *local_108;
  code *local_100;
  undefined1 *local_f8;
  uint *local_e8;
  int iStack_e0;
  undefined4 uStack_dc;
  uint *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  uint *local_c8;
  int iStack_c0;
  undefined4 uStack_bc;
  FName local_b8 [2];
  TArrayView<unsigned_int_const_,int> local_a8;
  TArrayView<unsigned_int_const_,int> local_98;
  TArrayView<unsigned_int_const_,int> local_88 [5];
  
  FVar14 = StatPtr_STAT_NiagaraRenderRibbonsGenVerticesCPU;
  if (StatPtr_STAT_NiagaraRenderRibbonsGenVerticesCPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesCPU>)0x0) {
    pFVar13 = ::FName::FName(local_b8,"STAT_NiagaraRenderRibbonsGenVerticesCPU");
    FVar14 = (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenVerticesCPU>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NiagaraRenderRibbonsGenVerticesCPU,*pFVar13,
                        L"Generate Vertices CPU [GT]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar21 = *(FName *)FVar14;
  bVar7 = false;
  FVar6 = (FIdentityFunctor)0x0;
  local_120.ComparisonIndex.Value = 0;
  local_120.Number = 0;
  bVar9 = false;
  FVar8 = (FIdentityFunctor)0x0;
  if ((FVar21.ComparisonIndex.Value.Value != 0) || (FVar21.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res20[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res20[0]._s_0,(char *)*(FName *)((longlong)FVar14 + 0x10));
      bVar7 = false;
      FVar6 = (FIdentityFunctor)0x1;
      bVar9 = false;
      FVar8 = (FIdentityFunctor)0x1;
      if (-1 < CpuChannel->Enabled) {
        local_128.ComparisonIndex.Value = FVar21.ComparisonIndex.Value.Value;
        local_128.Number = FVar21.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_128,(wchar_t *)*(FName *)((longlong)FVar14 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                   ,0x715);
        bVar7 = true;
        FVar6 = (FIdentityFunctor)0x1;
        bVar9 = true;
        FVar8 = (FIdentityFunctor)0x1;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(FVar21,CycleScopeStart);
      bVar9 = true;
      goto LAB_14934ddbe;
    }
  }
  bVar7 = bVar9;
  FVar6 = FVar8;
  bVar9 = false;
  FVar21 = local_120;
LAB_14934ddbe:
  if (((param_1->PosData).bIsValid == false) ||
     (((param_1->RibbonLinkOrderFloatData).bIsValid == false &&
      ((param_1->RibbonLinkOrderInt32Data).bIsValid == false)))) {
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("CPUData.PosData.IsValid() && CPUData.HasRibbonLinkOrder()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                        ,0x717,L"");
    if (bVar10) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  puVar15 = TThreadSingleton<FMemStack>::GetTlsSlot();
  local_f8 = local_res10;
  local_100 = UE::Core::Private::Function::
              TFunctionRefCaller<`TThreadSingleton<FMemStack>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
              ::Call;
  pFVar16 = FThreadSingletonInitializer::Get
                      ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_100,puVar15);
  local_150.Mem = (FMemStackBase *)(pFVar16 + 2);
  local_150.Top = (local_150.Mem)->Top;
  local_150.SavedChunk = *(FTaggedMemory **)(pFVar16 + 4);
  local_150.bPopped = false;
  local_150.NextTopmostMark = *(FMemMark **)(pFVar16 + 5);
  pFVar16[5] = (FTlsAutoCleanup)&local_150;
  *(int *)(pFVar16 + 6) = *(int *)(pFVar16 + 6) + 1;
  bVar18 = (this->GenerationConfig).bHasFullRibbonIDs;
  if ((bVar18 == 0) && ((this->GenerationConfig).bHasSimpleRibbonIDs == 0)) {
    local_158._0_4_ = 0;
    uVar22 = param_1->TotalNumParticles + 1;
    local_160.Data = (uint *)0x0;
    local_158 = 0;
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    if (0 < (int)uVar22) {
      UE::Core::Private::ReallocTo<0,TMemStackAllocator<0>::ForElementType<unsigned_int>_>
                (4,4,uVar22,&local_160,0,(int *)((longlong)&local_158 + 4));
    }
    local_168[0] = 0;
    FVar23.Data = local_160.Data;
    iVar11 = (int)local_158;
    if (param_1->TotalNumParticles != 0) {
      do {
        if ((FVar23.Data <= local_168) && (local_168 < FVar23.Data + local_158._4_4_)) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar10) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (iVar11 == local_158._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<0,TMemStackAllocator<0>::ForElementType<unsigned_int>_>
                             (0x404,&local_160,(int *)((longlong)&local_158 + 4));
          FVar23.Data = local_160.Data;
        }
        lVar17 = (longlong)iVar11;
        iVar11 = iVar11 + 1;
        FVar23.Data[lVar17] = local_168[0];
        local_168[0] = local_168[0] + 1;
        local_158 = CONCAT44(local_158._4_4_,iVar11);
      } while (local_168[0] < param_1->TotalNumParticles);
    }
    iVar12 = UE::Core::Private::
             ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRibbonMultiRibbonInfo>_>
                       (0x58,8,1,&(param_2->RibbonInfoLookup).AllocatorInstance,
                        &(param_2->RibbonInfoLookup).ArrayNum,&(param_2->RibbonInfoLookup).ArrayMax)
    ;
    FVar19 = (param_2->RibbonInfoLookup).AllocatorInstance.SecondaryData;
    if (FVar19 == (ForElementType<FRibbonMultiRibbonInfo>)0x0) {
      FVar19 = (ForElementType<FRibbonMultiRibbonInfo>)&param_2->RibbonInfoLookup;
    }
    puVar20 = (undefined8 *)((longlong)FVar19 + (longlong)iVar12 * 0x58);
    *puVar20 = 0;
    puVar20[1] = 0;
    puVar20[2] = 0;
    puVar20[3] = 0;
    puVar20[4] = 0;
    puVar20[5] = 0;
    puVar20[6] = 0;
    puVar20[7] = 0;
    puVar20[8] = 0;
    puVar20[9] = 0;
    puVar20[10] = 0;
    if ((param_1->RibbonLinkOrderFloatData).bIsValid == false) {
      local_108 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l7::<lambda_2>_>_>
                (FVar23.Data,iVar11,FVar6,(<lambda_2> *)&local_108);
    }
    else {
      local_110 = param_1;
      AlgoImpl::
      IntroSortInternal<unsigned_int,int,FIdentityFunctor,TDereferenceWrapper<unsigned_int,_FNiagaraGenerationInputDataCPUAccessors::RibbonLinkOrderSort<TArray<unsigned_int,TMemStackAllocator<0>_>_>_::__l5::<lambda_1>_>_>
                (FVar23.Data,iVar11,FVar6,(<lambda_1> *)&local_110);
    }
    iVar12 = (param_2->SortedIndices).ArrayNum;
    uVar22 = param_1->TotalNumParticles + 1 + iVar12;
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    if ((param_2->SortedIndices).ArrayMax < (int)uVar22) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar22,&(param_2->SortedIndices).AllocatorInstance,iVar12,
                 &(param_2->SortedIndices).ArrayMax);
    }
    iVar12 = (param_2->TangentAndDistances).ArrayNum;
    uVar22 = param_1->TotalNumParticles + 1 + iVar12;
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    if ((param_2->TangentAndDistances).ArrayMax < (int)uVar22) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,0x10,uVar22,&(param_2->TangentAndDistances).AllocatorInstance,iVar12,
                 &(param_2->TangentAndDistances).ArrayMax);
    }
    iVar12 = (param_2->SegmentData).ArrayNum;
    uVar22 = param_1->TotalNumParticles + 1 + iVar12;
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    if ((param_2->SegmentData).ArrayMax < (int)uVar22) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar22,(ForAnyElementType *)param_2,iVar12,&(param_2->SegmentData).ArrayMax);
    }
    if ((this->GenerationConfig).bWantsAutomaticTessellation == 0) {
      local_c8 = FVar23.Data;
      if (iVar11 < 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_88[0]._12_4_ = uStack_bc;
      local_88[0].ArrayNum = iVar11;
      local_88[0].DataPtr = local_c8;
      iStack_c0 = iVar11;
      GenerateVertexBufferForRibbonPart<0,0,0>(this,param_1,local_88,0,param_2);
    }
    else if ((this->GenerationConfig).bHasTwist == 0) {
      local_d8 = FVar23.Data;
      if (iVar11 < 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_98._12_4_ = uStack_cc;
      local_98.ArrayNum = iVar11;
      local_98.DataPtr = local_d8;
      iStack_d0 = iVar11;
      GenerateVertexBufferForRibbonPart<1,0,0>(this,param_1,&local_98,0,param_2);
    }
    else {
      local_e8 = FVar23.Data;
      if (iVar11 < 0) {
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L"");
        if (bVar10) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      local_a8._12_4_ = uStack_dc;
      local_a8.ArrayNum = iVar11;
      local_a8.DataPtr = local_e8;
      iStack_e0 = iVar11;
      GenerateVertexBufferForRibbonPart<1,1,0>(this,param_1,&local_a8,0,param_2);
    }
  }
  else if (bVar18 == 0) {
    if ((this->GenerationConfig).bHasSimpleRibbonIDs == 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("GenerationConfig.HasSimpleRibbonIDs()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                          ,0x724,L"");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar2 = &param_1->SimpleRibbonIDData;
    if ((this->GenerationConfig).bWantsAutomaticTessellation == 0) {
      GenerateVertexBufferForMultiRibbonInternal<unsigned_int,FNiagaraDataSetReaderInt32<int>,0,0>
                (this,param_1,pFVar2,param_2);
    }
    else if ((this->GenerationConfig).bHasTwist == 0) {
      GenerateVertexBufferForMultiRibbonInternal<unsigned_int,FNiagaraDataSetReaderInt32<int>,1,0>
                (this,param_1,pFVar2,param_2);
    }
    else {
      GenerateVertexBufferForMultiRibbonInternal<unsigned_int,FNiagaraDataSetReaderInt32<int>,1,1>
                (this,param_1,pFVar2,param_2);
    }
  }
  else {
    pFVar1 = &param_1->FullRibbonIDData;
    if ((this->GenerationConfig).bWantsAutomaticTessellation == 0) {
      GenerateVertexBufferForMultiRibbonInternal<FNiagaraID,FNiagaraDataSetReaderStruct<FNiagaraID>,0,0>
                (this,param_1,pFVar1,param_2);
    }
    else if ((this->GenerationConfig).bHasTwist == 0) {
      GenerateVertexBufferForMultiRibbonInternal<FNiagaraID,FNiagaraDataSetReaderStruct<FNiagaraID>,1,0>
                (this,param_1,pFVar1,param_2);
    }
    else {
      GenerateVertexBufferForMultiRibbonInternal<FNiagaraID,FNiagaraDataSetReaderStruct<FNiagaraID>,1,1>
                (this,param_1,pFVar1,param_2);
    }
  }
  fVar28 = __real_3f800000;
  fVar25 = param_2->TotalSegmentLength;
  if (fVar25 <= 0.0) {
    (this->TessellationSmoothingData).TessellationAngle = 0.0;
    (this->TessellationSmoothingData).TessellationCurvature = 0.0;
    (this->TessellationSmoothingData).TessellationTwistAngle = 0.0;
    (this->TessellationSmoothingData).TessellationTwistCurvature = 0.0;
    (this->TessellationSmoothingData).TessellationTotalSegmentLength = 0.0;
  }
  else {
    fVar29 = (this->TessellationSmoothingData).TessellationTotalSegmentLength;
    fVar24 = fVar25;
    if (fVar25 <= __real_3f800000) {
      fVar24 = __real_3f800000;
    }
    (this->TessellationSmoothingData).TessellationTotalSegmentLength = fVar25;
    fVar28 = fVar28 / fVar24;
    _X = fVar28 * param_2->AverageSegmentAngle;
    param_2->AverageSegmentAngle = _X;
    fVar27 = fVar28 * param_2->AverageSegmentLength;
    fVar29 = fVar29 / (fVar29 + fVar25);
    param_2->AverageSegmentLength = fVar27;
    fVar24 = sinf(_X);
    fVar25 = (float)((uint)fVar24 & __xmm_7fffffff7fffffff7fffffff7fffffff);
    if ((float)((uint)fVar24 & __xmm_7fffffff7fffffff7fffffff7fffffff) <= __real_322bcc77) {
      fVar25 = __real_322bcc77;
    }
    fVar27 = fVar27 / fVar25;
    fVar25 = (this->TessellationSmoothingData).TessellationAngle;
    if (fVar25 <= _X) {
      fVar25 = _X;
    }
    fVar24 = (this->TessellationSmoothingData).TessellationCurvature;
    fVar26 = fVar27;
    if (fVar27 <= fVar24) {
      fVar26 = fVar24;
    }
    (this->TessellationSmoothingData).TessellationAngle = (fVar25 - _X) * fVar29 + _X;
    (this->TessellationSmoothingData).TessellationCurvature = (fVar26 - fVar27) * fVar29 + fVar27;
    if ((this->GenerationConfig).bHasTwist != 0) {
      fVar24 = fVar28 * param_2->AverageTwistAngle;
      param_2->AverageTwistAngle = fVar24;
      param_2->AverageWidth = fVar28 * param_2->AverageWidth;
      fVar25 = (this->TessellationSmoothingData).TessellationTwistAngle;
      fVar28 = fVar24;
      if (fVar24 <= fVar25) {
        fVar28 = fVar25;
      }
      (this->TessellationSmoothingData).TessellationTwistAngle = (fVar28 - fVar24) * fVar29 + fVar24
      ;
      fVar25 = param_2->AverageWidth;
      fVar28 = (this->TessellationSmoothingData).TessellationTwistCurvature;
      if (fVar28 <= fVar25) {
        fVar28 = fVar25;
      }
      (this->TessellationSmoothingData).TessellationTwistCurvature =
           (fVar28 - fVar25) * fVar29 + fVar25;
    }
  }
  if (local_150.bPopped == false) {
    if ((local_150.Mem)->TopMark != &local_150) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mem.TopMark == this",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\MemStack.h"
                          ,0x215,L"");
      if (bVar10) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    local_150.bPopped = true;
    (local_150.Mem)->NumMarks = (local_150.Mem)->NumMarks + -1;
    if (local_150.SavedChunk != (local_150.Mem)->TopChunk) {
      FMemStackBase::FreeChunks(local_150.Mem,local_150.SavedChunk);
    }
    (local_150.Mem)->Top = local_150.Top;
    (local_150.Mem)->TopMark = local_150.NextTopmostMark;
    local_150.Top = (uchar *)0x0;
  }
  if ((bool)FVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar9) {
    FThreadStats::AddMessage(FVar21,CycleScopeEnd);
  }
  return;
}

// GetDynamicDataSize @ 14934f9a0

int __thiscall FNiagaraRendererRibbons::GetDynamicDataSize(FNiagaraRendererRibbons *this)

{
  return ((this->ShapeState).SliceVertexData.ArrayMax + 4) * 0x14;
}

// GetDynamicMeshElements @ 149351370

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraRendererRibbons::GetDynamicMeshElements
          (FNiagaraRendererRibbons *this,
          TArray<FSceneView_const_*,TSizedDefaultAllocator<32>_> *param_1,FSceneViewFamily *param_2,
          uint param_3,FMeshElementCollector *param_4,FNiagaraSceneProxy *param_5)

{
  ulong64 *puVar1;
  atomic<unsigned_char> *this_00;
  FMutex FVar2;
  atomic<unsigned_char> aVar3;
  char cVar4;
  bool bVar5;
  FNiagaraRibbonRenderingFrameResources *pFVar6;
  undefined8 *puVar7;
  FNiagaraRibbonIndexBuffer *pFVar8;
  FRWBuffer *pFVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  atomic<int> aVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  int *piVar20;
  float fVar21;
  uint uVar22;
  FNiagaraRibbonMeshCollectorResources *pFVar23;
  LARGE_INTEGER LVar24;
  FMeshBatch *pFVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  uint uVar30;
  int iVar31;
  atomic<int> aVar32;
  FName *pFVar33;
  FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbons> FVar34;
  FNiagaraDataBuffer *pFVar35;
  FMaterial *pFVar36;
  FGlobalDynamicReadBuffer *pFVar37;
  FNiagaraRibbonCPUGeneratedVertexData *pFVar38;
  TSharedRef<FNiagaraRibbonRenderingFrameViewResources,1> *pTVar39;
  FNiagaraIndexGenerationInput *pFVar40;
  FScriptContainerElement *pFVar41;
  TReferenceControllerBase<1> *pTVar42;
  uint uVar43;
  FNiagaraIndexGenerationInput *pFVar44;
  FName FVar45;
  FName FVar46;
  longlong lVar47;
  longlong *plVar48;
  FNiagaraDynamicDataRibbon *pFVar49;
  FNiagaraRibbonRenderingFrameViewResources *pFVar50;
  longlong *plVar51;
  FParticlePerfStats *pFVar52;
  longlong *plVar53;
  FSceneView *pFVar54;
  FParticlePerfStats *pFVar55;
  undefined1 local_1e2 [2];
  FNiagaraDataBuffer *local_1e0;
  FName local_1d8;
  uint local_1cc;
  FNiagaraRibbonRenderingFrameViewResources *local_1c8;
  TReferenceControllerBase<1> *local_1c0;
  FColor_u_0 local_1b8;
  FColor_u_0 local_1b4;
  FRHICommandListBase *local_1b0;
  FName local_1a8;
  longlong local_1a0;
  FName local_198;
  FName local_190;
  FNiagaraRibbonMeshCollectorResources *local_188;
  LARGE_INTEGER local_180;
  FName local_178;
  FName local_170;
  FName local_160;
  FParticlePerfStats *local_150;
  FParticlePerfStats *pFStack_148;
  FParticlePerfStats *local_140;
  FSceneView *local_128;
  FNiagaraRibbonRenderingFrameViewResources *local_120;
  FNiagaraDynamicDataRibbon *local_118;
  FMeshBatch *local_110;
  LARGE_INTEGER local_108;
  LARGE_INTEGER local_100;
  TSharedPtr<FNiagaraRibbonRenderingFrameResources,1> local_f8;
  TSharedPtr<FNiagaraRibbonRenderingFrameResources,1> local_e8;
  TSharedPtr<FNiagaraRibbonRenderingFrameResources,1> local_d8;
  TVector<double>_u_0 local_c8;
  FName local_b0;
  TSharedRef<FNiagaraRibbonRenderingFrameViewResources,1> local_a8;
  FNiagaraRibbonIndexBuffer *local_98;
  TReferenceControllerBase<1> *pTStack_90;
  FRWBuffer *local_88;
  TReferenceControllerBase<1> *pTStack_80;
  FNiagaraIndexGenerationInput local_78;
  
  FVar34 = StatPtr_STAT_NiagaraRenderRibbons;
  if (StatPtr_STAT_NiagaraRenderRibbons ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbons>)0x0) {
    pFVar33 = ::FName::FName(&local_b0,"STAT_NiagaraRenderRibbons");
    FVar34 = (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbons>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRenderRibbons,*pFVar33,
                        L"Render Ribbons [RT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar45 = *(FName *)FVar34;
  bVar13 = false;
  bVar19 = false;
  local_170.ComparisonIndex.Value = 0;
  local_170.Number = 0;
  bVar26 = false;
  bVar27 = false;
  if ((FVar45.ComparisonIndex.Value.Value == 0) && (FVar45.Number == 0)) {
LAB_1493514d3:
    bVar19 = bVar27;
    bVar13 = bVar26;
    bVar26 = false;
    local_190 = local_170;
    FVar45 = local_170;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_1b8.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_1b8._s_0,(char *)*(FName *)((longlong)FVar34 + 0x10));
      bVar13 = false;
      bVar19 = true;
      bVar26 = false;
      bVar27 = true;
      if (-1 < CpuChannel->Enabled) {
        local_178.ComparisonIndex.Value = FVar45.ComparisonIndex.Value.Value;
        local_178.Number = FVar45.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_178,(wchar_t *)*(FName *)((longlong)FVar34 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                   ,0x363);
        bVar13 = true;
        bVar19 = true;
        bVar26 = true;
        bVar27 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493514d3;
    local_1d8 = FVar45;
    local_190 = FVar45;
    FThreadStats::AddMessage(FVar45,CycleScopeStart);
    bVar26 = true;
  }
  local_180.QuadPart = -1;
  pFVar55 = (param_5->DynamicData).PerfStatsContext.WorldStats;
  pFStack_148 = (param_5->DynamicData).PerfStatsContext.SystemStats;
  pFVar52 = (param_5->DynamicData).PerfStatsContext.SystemStats;
  local_140 = (param_5->DynamicData).PerfStatsContext.ComponentStats;
  local_150 = pFVar55;
  if (((pFVar55 != (FParticlePerfStats *)0x0) || (pFVar52 != (FParticlePerfStats *)0x0)) ||
     (local_140 != (FParticlePerfStats *)0x0)) {
    QueryPerformanceCounter(&local_100);
    local_180 = local_100;
  }
  pFVar49 = (FNiagaraDynamicDataRibbon *)this->_padding_;
  local_118 = pFVar49;
  if (pFVar49 == (FNiagaraDynamicDataRibbon *)0x0) goto LAB_149351eed;
  if ((param_4->RHICmdList == (FRHICommandList *)0x0) &&
     (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                         ("RHICmdList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                          ,0x46,L""), bVar27)) {
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  plVar51 = (longlong *)pFVar49->_padding_;
  if (plVar51 == (longlong *)0x0) {
    pFVar35 = (FNiagaraDataBuffer *)pFVar49->_padding_;
  }
  else {
    pFVar35 = (FNiagaraDataBuffer *)(**(code **)(*plVar51 + 0x10))(plVar51,param_4->RHICmdList,0);
  }
  local_1e0 = pFVar35;
  if ((GbEnableNiagaraRibbonRendering == false) || (pFVar35 == (FNiagaraDataBuffer *)0x0))
  goto LAB_149351eed;
  cVar4 = *(char *)((longlong)&this->_padding_ + 4);
  if (pFVar49->bIsGPUSystem == false) {
    if ((cVar4 != '\0') &&
       (bVar27 = ::FDebug::CheckVerifyFailedImpl2
                           ("SimTarget == ENiagaraSimTarget::CPUSim",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                            ,0x37e,L""), bVar27)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    if ((pFVar35->NumInstances < 2) ||
       ((pFVar49->bUseGPUInit == false &&
        (((pFVar49->GenerationOutput).Object == (FNiagaraRibbonCPUGeneratedVertexData *)0x0 ||
         (pFVar38 = TSharedPtr<FNiagaraRibbonCPUGeneratedVertexData,1>::operator->
                              (&pFVar49->GenerationOutput), (pFVar38->SegmentData).ArrayNum < 1)))))
       ) goto LAB_149351eed;
  }
  else if ((cVar4 != '\x01') || (pFVar35->NumInstances < 2)) goto LAB_149351eed;
  if (pFVar49->Material == (FMaterialRenderProxy *)0x0) {
LAB_1493516a0:
    bVar27 = false;
  }
  else {
    pFVar36 = FMaterialRenderProxy::GetIncompleteMaterialWithFallback
                        (pFVar49->Material,(Type)this->_padding_);
    bVar27 = IsTranslucentBlendMode(pFVar36);
    if (!bVar27) goto LAB_1493516a0;
    bVar27 = true;
    bVar28 = FNiagaraRenderer::AreViewsRenderingOpaqueOnly
                       (param_1,param_3,(bool)(*(byte *)((longlong)&param_5->_padding_ + 7) & 1));
    if (bVar28) goto LAB_149351eed;
  }
  local_1b0 = (FRHICommandListBase *)FMeshElementCollector::GetRHICommandList(param_4);
  pFVar33 = (FName *)this->_padding_;
  local_160.ComparisonIndex.Value = 0;
  local_160.Number = 0;
  bVar28 = false;
  bVar5 = false;
  FVar46 = *pFVar33;
  if ((FVar46.ComparisonIndex.Value.Value == 0) && (FVar46.Number == 0)) {
LAB_14935177b:
    bVar18 = bVar5;
    bVar15 = bVar28;
    bVar28 = false;
    local_198 = local_160;
    FVar46 = local_160;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents == 0) {
      bVar15 = false;
      bVar18 = false;
    }
    else {
      local_1b4.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent((FColor *)&local_1b4._s_0,(char *)pFVar33[2]);
      bVar28 = false;
      bVar5 = true;
      if (CpuChannel->Enabled < 0) {
        bVar15 = false;
        bVar18 = true;
      }
      else {
        local_1a8.ComparisonIndex.Value = FVar46.ComparisonIndex.Value.Value;
        local_1a8.Number = FVar46.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_1a8,(wchar_t *)pFVar33[1],
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                   ,0x397);
        bVar15 = true;
        bVar18 = true;
        bVar28 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_14935177b;
    local_1d8 = FVar46;
    local_198 = FVar46;
    FThreadStats::AddMessage(FVar46,CycleScopeStart);
    bVar28 = true;
  }
  local_188 = FMeshElementCollector::AllocateOneFrameResource<FNiagaraRibbonMeshCollectorResources>
                        (param_4);
  bVar5 = pFVar49->bUseGPUInit;
  local_f8.Object = (local_188->RibbonResources).Object;
  local_f8.SharedReferenceCount.ReferenceController =
       (local_188->RibbonResources).SharedReferenceCount.ReferenceController;
  if (local_f8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_f8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pFVar37 = FMeshElementCollector::GetDynamicReadBuffer(param_4);
  InitializeVertexBuffersResources(this,local_1b0,pFVar49,local_1e0,pFVar37,&local_f8,bVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_f8.SharedReferenceCount.ReferenceController);
  local_1d8 = (FName)FNiagaraGpuComputeDispatchInterface::
                     GetOrCreateDataManager<FNiagaraGpuRibbonsDataManager>
                               (param_5->ComputeDispatchInterface);
  if ((GNiagaraRibbonShareGeneratedData == false) ||
     ((pFVar49->bUseGPUInit == false && (pFVar49->bIsGPUSystem == false)))) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((GNiagaraRibbonShareGeneratedData == false) ||
     ((((pFVar49->bUseGPUInit == false && (pFVar49->bIsGPUSystem == false)) && (bVar27)) &&
      (((pFVar49->GenerationOutput).Object != (FNiagaraRibbonCPUGeneratedVertexData *)0x0 &&
       (pFVar38 = TSharedPtr<FNiagaraRibbonCPUGeneratedVertexData,1>::operator->
                            (&pFVar49->GenerationOutput), 0 < (pFVar38->RibbonInfoLookup).ArrayNum))
      )))) {
    bVar14 = true;
  }
  else {
    bVar14 = false;
  }
  pFVar23 = local_188;
  bVar17 = false;
  local_1cc = 0;
  iVar31 = param_1->ArrayNum;
  if (0 < iVar31) {
    local_1a0 = 0;
    do {
      lVar47 = local_1a0;
      uVar43 = local_1cc;
      pFVar35 = local_1e0;
      if ((param_3 >> (local_1cc & 0x1f) & 1) != 0) {
        uVar30 = 0;
        if ((int)local_1cc < iVar31) {
          uVar30 = ~local_1cc >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar29)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        pFVar54 = *(FSceneView **)((param_1->AllocatorInstance).Data + lVar47);
        local_128 = pFVar54;
        if ((pFVar54 == (FSceneView *)0x0) &&
           (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                               ("View",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                                ,0x3b7,L""), bVar29)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((((pFVar54->bIsInstancedStereoEnabled == false) ||
             (bVar29 = IStereoRendering::IsStereoEyeView(pFVar54), !bVar29)) ||
            (bVar29 = IStereoRendering::IsAPrimaryView(pFVar54), pFVar35 = local_1e0, bVar29)) &&
           ((!bVar27 ||
            ((pFVar35 = local_1e0, pFVar54->CustomRenderPass == (FCustomRenderPassBase *)0x0 &&
             ((pFVar54->DynamicMeshElementsShadowCullFrustum == (FConvexVolume *)0x0 ||
              ((param_5->_padding_ & 0x100000000000000) != 0)))))))) {
          local_110 = FMeshElementCollector::AllocateMesh(param_4);
          local_c8._s_0.X = (pFVar54->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
          local_c8._s_0.Y = (pFVar54->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
          pFVar6 = (pFVar23->RibbonResources).Object;
          local_c8._s_0.Z = (pFVar54->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
          pTVar39 = MakeShared<FNiagaraRibbonRenderingFrameViewResources,1>(&local_a8);
          local_1c8 = pTVar39->Object;
          local_1c0 = (pTVar39->SharedReferenceCount).ReferenceController;
          if (local_1c0 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_1c0->SharedReferenceCount =
                 (atomic<int>)((int)local_1c0->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar41 = (pFVar6->ViewResources).AllocatorInstance.Data;
          if (((pFVar41 <= (FScriptContainerElement *)&local_1c8) &&
              ((FScriptContainerElement *)&local_1c8 <
               pFVar41 + (longlong)(pFVar6->ViewResources).ArrayMax * 0x10)) &&
             (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar29)) {
            pcVar10 = (code *)swi(3);
            (*pcVar10)();
            return;
          }
          iVar31 = (pFVar6->ViewResources).ArrayNum;
          piVar20 = &(pFVar6->ViewResources).ArrayMax;
          if (iVar31 == *piVar20) {
            iVar31 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)pFVar6,piVar20);
          }
          (pFVar6->ViewResources).ArrayNum = iVar31 + 1;
          pFVar41 = (pFVar6->ViewResources).AllocatorInstance.Data + (longlong)iVar31 * 0x10;
          *(FNiagaraRibbonRenderingFrameViewResources **)pFVar41 = local_1c8;
          *(TReferenceControllerBase<1> **)(pFVar41 + 8) = local_1c0;
          local_1c0 = (TReferenceControllerBase<1> *)0x0;
          local_1c8 = (FNiagaraRibbonRenderingFrameViewResources *)0x0;
          pFVar50 = *(FNiagaraRibbonRenderingFrameViewResources **)pFVar41;
          local_120 = pFVar50;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_a8.SharedReferenceCount.ReferenceController);
          FVar45 = local_1d8;
          if (bVar5) {
            this_00 = (atomic<unsigned_char> *)((longlong)local_1d8 + 0xf8);
            if ((this_00 == (atomic<unsigned_char> *)0x0) &&
               (bVar29 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Mutex",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                                    ,0x1b,L""), bVar29)) {
              pcVar10 = (code *)swi(3);
              (*pcVar10)();
              return;
            }
            LOCK();
            FVar2.State = *this_00;
            if (FVar2.State == (atomic<unsigned_char>)0x0) {
              *this_00 = (atomic<unsigned_char>)0x1;
            }
            UNLOCK();
            if (FVar2.State != (atomic<unsigned_char>)0x0) {
              UE::FMutex::LockSlow((FMutex *)this_00);
            }
            lVar47 = 0x10;
            if (local_1e0->GPUDataReadyStage == Last) {
              lVar47 = 0x20;
            }
            plVar48 = (longlong *)(lVar47 + (longlong)FVar45);
            lVar47 = plVar48[1];
            plVar51 = (longlong *)*plVar48;
            plVar53 = plVar51 + (longlong)(int)lVar47 * 4;
            while( true ) {
              if ((int)plVar48[1] != (int)lVar47) {
                local_1e2[0] = 0;
                `TCheckedPointerIterator<FNiagaraRibbonGPUInitParameters,int,0>::operator!='::__l2::
                <lambda_1>::operator()(local_1e2);
              }
              if (plVar51 == plVar53) {
                if (this_00 != (atomic<unsigned_char> *)0x0) {
                  LOCK();
                  aVar3 = *this_00;
                  *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
                  UNLOCK();
                  if (((byte)aVar3 & 2) != 0) {
                    UE::FMutex::WakeWaitingThread((FMutex *)this_00);
                  }
                }
                lVar47 = 0;
                pFVar49 = local_118;
                pFVar50 = local_120;
                pFVar54 = local_128;
                goto LAB_149351c04;
              }
              if ((FNiagaraRendererRibbons *)*plVar51 == this) break;
              plVar51 = plVar51 + 4;
            }
            pTVar42 = (TReferenceControllerBase<1> *)plVar51[3];
            if (pTVar42 == (TReferenceControllerBase<1> *)0x0) {
LAB_149351b70:
              lVar47 = 0;
            }
            else {
              aVar16 = pTVar42->SharedReferenceCount;
              do {
                if (aVar16 == (atomic<int>)0x0) {
                  pTVar42 = (TReferenceControllerBase<1> *)0x0;
                  goto LAB_149351b70;
                }
                LOCK();
                aVar32 = pTVar42->SharedReferenceCount;
                bVar29 = aVar16 == aVar32;
                if (bVar29) {
                  pTVar42->SharedReferenceCount = (atomic<int>)((int)aVar16 + 1);
                  aVar32 = aVar16;
                }
                UNLOCK();
                aVar16 = aVar32;
              } while (!bVar29);
              puVar7 = (undefined8 *)plVar51[2];
              if ((puVar7 == (undefined8 *)0x0) || (*(int *)(puVar7 + 1) < 1)) goto LAB_149351b70;
              lVar47 = *(longlong *)*puVar7;
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTVar42);
            pFVar49 = local_118;
            pFVar50 = local_120;
            pFVar54 = local_128;
            if (this_00 != (atomic<unsigned_char> *)0x0) {
              LOCK();
              aVar3 = *this_00;
              *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
              UNLOCK();
              if (((byte)aVar3 & 2) != 0) {
                UE::FMutex::WakeWaitingThread((FMutex *)this_00);
                pFVar49 = local_118;
                pFVar50 = local_120;
                pFVar54 = local_128;
              }
            }
LAB_149351c04:
            if (lVar47 == 0) goto LAB_149351ccb;
            pTVar42 = *(TReferenceControllerBase<1> **)(lVar47 + 0x168);
            pFVar8 = *(FNiagaraRibbonIndexBuffer **)(lVar47 + 0x160);
            if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_98 = (pFVar50->IndexBuffer).Object;
            pTStack_90 = (pFVar50->IndexBuffer).SharedReferenceCount.ReferenceController;
            (pFVar50->IndexBuffer).Object = pFVar8;
            (pFVar50->IndexBuffer).SharedReferenceCount.ReferenceController = pTVar42;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_90);
            pTVar42 = *(TReferenceControllerBase<1> **)(lVar47 + 0x178);
            pFVar9 = *(FRWBuffer **)(lVar47 + 0x170);
            if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
              UNLOCK();
            }
            local_88 = (pFVar50->IndirectDrawBuffer).Object;
            pTStack_80 = (pFVar50->IndirectDrawBuffer).SharedReferenceCount.ReferenceController;
            (pFVar50->IndirectDrawBuffer).Object = pFVar9;
            (pFVar50->IndirectDrawBuffer).SharedReferenceCount.ReferenceController = pTVar42;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_80);
            uVar11 = *(undefined8 *)(lVar47 + 0x180);
            uVar12 = *(undefined8 *)(lVar47 + 0x188);
            pFVar44 = &pFVar50->IndexGenerationSettings;
            pFVar44->ViewDistance = (float)(int)uVar11;
            pFVar44->LODDistanceFactor = (float)(int)((ulonglong)uVar11 >> 0x20);
            (pFVar50->IndexGenerationSettings).MaxSegmentCount = (int)uVar12;
            (pFVar50->IndexGenerationSettings).SubSegmentCount = (int)((ulonglong)uVar12 >> 0x20);
            uVar11 = *(undefined8 *)(lVar47 + 400);
            uVar12 = *(undefined8 *)(lVar47 + 0x198);
            (pFVar50->IndexGenerationSettings).SegmentBitShift = (int)uVar11;
            (pFVar50->IndexGenerationSettings).SegmentBitMask = (int)((ulonglong)uVar11 >> 0x20);
            (pFVar50->IndexGenerationSettings).SubSegmentBitShift = (int)uVar12;
            (pFVar50->IndexGenerationSettings).SubSegmentBitMask = (int)((ulonglong)uVar12 >> 0x20);
            uVar11 = *(undefined8 *)(lVar47 + 0x1a0);
            uVar12 = *(undefined8 *)(lVar47 + 0x1a8);
            pFVar50->bNeedsIndexBufferGeneration = false;
            (pFVar50->IndexGenerationSettings).ShapeBitMask = (int)uVar11;
            (pFVar50->IndexGenerationSettings).TotalBitCount = (int)((ulonglong)uVar11 >> 0x20);
            (pFVar50->IndexGenerationSettings).TotalNumIndices = (int)uVar12;
            (pFVar50->IndexGenerationSettings).CPUTriangleCount = (int)((ulonglong)uVar12 >> 0x20);
          }
          else {
            if ((!bVar14) &&
               (pFVar6 = (pFVar23->RibbonResources).Object, 1 < (pFVar6->ViewResources).ArrayNum)) {
              lVar47 = *(longlong *)(pFVar6->ViewResources).AllocatorInstance.Data;
              goto LAB_149351c04;
            }
LAB_149351ccb:
            bVar17 = true;
            pFVar40 = CalculateIndexBufferConfiguration
                                (this,&local_78,&pFVar49->GenerationOutput,local_1e0,param_5,pFVar54
                                 ,(TVector<double> *)&local_c8._s_0,pFVar49->bUseGPUInit,
                                 pFVar49->bIsGPUSystem);
            pFVar44 = &pFVar50->IndexGenerationSettings;
            fVar21 = pFVar40->LODDistanceFactor;
            uVar43 = pFVar40->MaxSegmentCount;
            uVar30 = pFVar40->SubSegmentCount;
            pFVar44->ViewDistance = pFVar40->ViewDistance;
            pFVar44->LODDistanceFactor = fVar21;
            (pFVar50->IndexGenerationSettings).MaxSegmentCount = uVar43;
            (pFVar50->IndexGenerationSettings).SubSegmentCount = uVar30;
            uVar43 = pFVar40->SegmentBitMask;
            uVar30 = pFVar40->SubSegmentBitShift;
            uVar22 = pFVar40->SubSegmentBitMask;
            (pFVar50->IndexGenerationSettings).SegmentBitShift = pFVar40->SegmentBitShift;
            (pFVar50->IndexGenerationSettings).SegmentBitMask = uVar43;
            (pFVar50->IndexGenerationSettings).SubSegmentBitShift = uVar30;
            (pFVar50->IndexGenerationSettings).SubSegmentBitMask = uVar22;
            uVar43 = pFVar40->TotalBitCount;
            uVar30 = pFVar40->TotalNumIndices;
            uVar22 = pFVar40->CPUTriangleCount;
            (pFVar50->IndexGenerationSettings).ShapeBitMask = pFVar40->ShapeBitMask;
            (pFVar50->IndexGenerationSettings).TotalBitCount = uVar43;
            (pFVar50->IndexGenerationSettings).TotalNumIndices = uVar30;
            (pFVar50->IndexGenerationSettings).CPUTriangleCount = uVar22;
            GenerateIndexBufferForView
                      (this,local_1b0,(FNiagaraGpuRibbonsDataManager *)local_1d8,param_4,pFVar44,
                       pFVar49,pFVar50,pFVar54,(TVector<double> *)&local_c8._s_0);
          }
          SetupPerViewUniformBuffer(this,pFVar44,pFVar54,param_2,param_5,&pFVar50->UniformBuffer);
          pFVar25 = local_110;
          pFVar35 = local_1e0;
          local_e8.Object = (pFVar23->RibbonResources).Object;
          bVar29 = pFVar49->bUseGPUInit;
          local_e8.SharedReferenceCount.ReferenceController =
               (pFVar23->RibbonResources).SharedReferenceCount.ReferenceController;
          if (local_e8.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1
                 );
            UNLOCK();
          }
          SetupMeshBatchAndCollectorResourceForView
                    (this,local_1b0,pFVar44,pFVar49,local_1e0,pFVar54,param_2,param_5,&local_e8,
                     pFVar50,local_110,bVar29);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_e8.SharedReferenceCount.ReferenceController);
          uVar43 = local_1cc;
          FMeshElementCollector::AddMesh(param_4,local_1cc,pFVar25);
          lVar47 = local_1a0;
        }
      }
      FVar45 = local_190;
      FVar46 = local_198;
      iVar31 = param_1->ArrayNum;
      local_1cc = uVar43 + 1;
      local_1a0 = lVar47 + 8;
    } while ((int)local_1cc < iVar31);
    pFVar52 = pFStack_148;
    pFVar55 = local_150;
    if ((bVar17) && ((pFVar49->bUseGPUInit != false || (pFVar49->bIsGPUSystem != false)))) {
      pTVar42 = (local_188->RibbonResources).SharedReferenceCount.ReferenceController;
      local_d8.Object = (local_188->RibbonResources).Object;
      if (pTVar42 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar42->SharedReferenceCount = (atomic<int>)((int)pTVar42->SharedReferenceCount + 1);
        UNLOCK();
      }
      local_d8.SharedReferenceCount.ReferenceController = pTVar42;
      FNiagaraGpuRibbonsDataManager::RegisterRenderer
                ((FNiagaraGpuRibbonsDataManager *)local_1d8,this,pFVar35,&local_d8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar42);
      pFVar52 = pFStack_148;
      pFVar55 = local_150;
    }
  }
  if (bVar18) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar28) {
    FThreadStats::AddMessage(FVar46,CycleScopeEnd);
  }
LAB_149351eed:
  LVar24 = local_180;
  if (local_180.QuadPart != -1) {
    QueryPerformanceCounter(&local_108);
    lVar47 = local_108.QuadPart - (longlong)LVar24;
    if (pFVar55 != (FParticlePerfStats *)0x0) {
      puVar1 = &(pFVar55->RenderThreadStats).GetDynamicMeshElementsCycles;
      *puVar1 = *puVar1 + lVar47;
    }
    if (pFVar52 != (FParticlePerfStats *)0x0) {
      puVar1 = &(pFVar52->RenderThreadStats).GetDynamicMeshElementsCycles;
      *puVar1 = *puVar1 + lVar47;
    }
    if (local_140 != (FParticlePerfStats *)0x0) {
      puVar1 = &(local_140->RenderThreadStats).GetDynamicMeshElementsCycles;
      *puVar1 = *puVar1 + lVar47;
    }
  }
  if (bVar19) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar13) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar26) {
    FThreadStats::AddMessage(FVar45,CycleScopeEnd);
  }
  return;
}

// GetDynamicRayTracingInstances @ 149353810

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall
FNiagaraRendererRibbons::GetDynamicRayTracingInstances
          (FNiagaraRendererRibbons *this,FRayTracingInstanceCollector *param_1,
          FNiagaraSceneProxy *param_2)

{
  FNiagaraIndexGenerationInput *pFVar1;
  int iVar2;
  uint uVar3;
  FRHICommandListBase *pFVar4;
  FNiagaraDynamicDataRibbon *pFVar5;
  longlong *plVar6;
  FSceneView *pFVar7;
  FSceneViewFamily *pFVar8;
  FNiagaraRibbonRenderingFrameResources *pFVar9;
  FNiagaraRibbonRenderingFrameViewResources *pFVar10;
  FRHIResource *this_00;
  FRHIResource *this_01;
  FNiagaraRibbonIndexBuffer *pFVar11;
  TReferenceControllerBase<1> *pTVar12;
  code *pcVar13;
  uint uVar14;
  bool bVar15;
  int *piVar16;
  float fVar17;
  double dVar18;
  TConsoleVariableData<int> *pTVar19;
  ForAnyElementType FVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  int iVar26;
  FName *pFVar27;
  FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbons> FVar28;
  FNiagaraDataBuffer *pFVar29;
  FNiagaraRibbonCPUGeneratedVertexData *pFVar30;
  FNiagaraRibbonMeshCollectorResources *pFVar31;
  TSharedRef<FNiagaraRibbonRenderingFrameViewResources,1> *pTVar32;
  FNiagaraIndexGenerationInput *pFVar33;
  longlong lVar34;
  FNiagaraGpuRibbonsDataManager *this_02;
  ForElementType<FMeshBatchElement> FVar35;
  FScriptContainerElement *pFVar36;
  ForAnyElementType FVar37;
  FName FVar38;
  FRWBuffer *pFVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  undefined1 auStackY_4b8 [32];
  int local_450;
  uint local_44c;
  FScriptContainerElement *local_440;
  ForAnyElementType local_400;
  undefined8 local_3f8;
  FMeshBatch *local_3f0;
  int iStack_3e8;
  undefined4 uStack_3e4;
  undefined8 local_3e0;
  FScriptContainerElement *local_3d8;
  undefined8 local_3d0;
  uint *local_3c8;
  int iStack_3c0;
  undefined4 uStack_3bc;
  ForAnyElementType local_3b8;
  undefined8 local_3b0;
  TMatrix<double> *local_3a8;
  int iStack_3a0;
  undefined4 uStack_39c;
  FNiagaraRibbonRenderingFrameViewResources *local_398;
  TReferenceControllerBase<1> *local_390;
  FColor_u_0 local_388 [2];
  FNiagaraSceneProxy *local_380;
  FName local_378;
  FNiagaraRendererRibbons *local_370;
  FName local_368;
  FName local_360;
  FNiagaraGpuComputeDispatchInterface *local_350;
  TSharedPtr<FNiagaraRibbonRenderingFrameResources,1> local_348;
  TSharedPtr<FNiagaraRibbonRenderingFrameResources,1> local_338;
  TSharedPtr<FNiagaraRibbonRenderingFrameResources,1> local_328;
  FRayTracingInstance local_318;
  TVector<double>_u_0 local_2a8;
  FName local_290;
  TSharedRef<FNiagaraRibbonRenderingFrameViewResources,1> local_288;
  FRayTracingDynamicGeometryUpdateParams local_278;
  FNiagaraIndexGenerationInput local_1e8;
  ForAnyElementType local_1b8;
  undefined8 local_1b0;
  char local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  longlong *local_198;
  FRWBuffer *local_190;
  undefined1 local_188;
  undefined4 local_184;
  float local_178 [2];
  float afStack_170 [2];
  float local_168 [2];
  float afStack_160 [2];
  float local_158 [2];
  float afStack_150 [2];
  float local_148 [2];
  float afStack_140 [2];
  undefined1 local_138;
  FRHIResource *local_130;
  FMeshBatch local_128;
  ulonglong local_48;
  
  pTVar19 = CVarRayTracingNiagaraRibbons.Ref;
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_4b8;
  local_380 = param_2;
  local_370 = this;
  bVar22 = IsInParallelRenderingThread();
  if ((!bVar22) &&
     (bVar22 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar22)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if (pTVar19->ShadowedValue[1] == 0) {
    return;
  }
  FVar28 = StatPtr_STAT_NiagaraRenderRibbons;
  if (StatPtr_STAT_NiagaraRenderRibbons ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbons>)0x0) {
    pFVar27 = ::FName::FName(&local_290,"STAT_NiagaraRenderRibbons");
    FVar28 = (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbons>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_NiagaraRenderRibbons,*pFVar27,
                        L"Render Ribbons [RT]","STATGROUP_Niagara","STATCAT_Niagara",L"Niagara",true
                        ,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar38 = *(FName *)FVar28;
  bVar22 = false;
  bVar15 = false;
  local_360.ComparisonIndex.Value = 0;
  local_360.Number = 0;
  bVar21 = false;
  bVar23 = false;
  if ((FVar38.ComparisonIndex.Value.Value == 0) && (FVar38.Number == 0)) {
LAB_1493539df:
    bVar15 = bVar23;
    bVar22 = bVar21;
    bVar21 = false;
    local_368 = local_360;
    FVar38 = local_360;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_388[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_388[0]._s_0,(char *)*(FName *)((longlong)FVar28 + 0x10));
      bVar22 = false;
      bVar15 = true;
      bVar21 = false;
      bVar23 = true;
      if (-1 < CpuChannel->Enabled) {
        local_378.ComparisonIndex.Value = FVar38.ComparisonIndex.Value.Value;
        local_378.Number = FVar38.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_378,(wchar_t *)*(FName *)((longlong)FVar28 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                   ,0x46c);
        bVar22 = true;
        bVar15 = true;
        bVar21 = true;
        bVar23 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1493539df;
    local_368 = FVar38;
    FThreadStats::AddMessage(FVar38,CycleScopeStart);
    bVar21 = true;
  }
  if ((param_2 == (FNiagaraSceneProxy *)0x0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("SceneProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                          ,0x46d,L""), bVar23)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if ((param_1->_padding_ == 0) &&
     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                         ("RHICmdList",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                          ,0x46,L""), bVar23)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  local_350 = param_2->ComputeDispatchInterface;
  pFVar4 = (FRHICommandListBase *)param_1->_padding_;
  pFVar5 = (FNiagaraDynamicDataRibbon *)this->_padding_;
  if ((local_350 == (FNiagaraGpuComputeDispatchInterface *)0x0) ||
     (pFVar5 == (FNiagaraDynamicDataRibbon *)0x0)) goto LAB_1493540b8;
  plVar6 = (longlong *)pFVar5->_padding_;
  if (plVar6 == (longlong *)0x0) {
    pFVar29 = (FNiagaraDataBuffer *)pFVar5->_padding_;
  }
  else {
    pFVar29 = (FNiagaraDataBuffer *)(**(code **)(*plVar6 + 0x10))(plVar6,pFVar4,0);
  }
  if (((GbEnableNiagaraRibbonRendering == false) || (pFVar29 == (FNiagaraDataBuffer *)0x0)) ||
     (pFVar29->NumInstances < 2)) goto LAB_1493540b8;
  if (pFVar5->bUseGPUInit == false) {
    if (((pFVar5->GenerationOutput).Object == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) ||
       (pFVar30 = TSharedPtr<FNiagaraRibbonCPUGeneratedVertexData,1>::operator->
                            (&pFVar5->GenerationOutput), (pFVar30->SegmentData).ArrayNum < 1))
    goto LAB_1493540b8;
    if ((pFVar5->bUseGPUInit != false) || (pFVar5->bIsGPUSystem != false)) goto LAB_149353ae4;
    bVar23 = false;
  }
  else {
LAB_149353ae4:
    bVar23 = true;
  }
  pTVar19 = CVarRayTracingNiagaraRibbonsGPU.Ref;
  bVar24 = IsInParallelRenderingThread();
  if ((!bVar24) &&
     (bVar24 = UE::Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<6409875433831007955>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\HAL\\IConsoleManager.h"
                          ,0x6d3,"IsInParallelRenderingThread()"), bVar24)) {
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  if ((pTVar19->ShadowedValue[1] != 0) || (bVar23 == false)) {
    iVar2 = (param_1->Views).ArrayNum;
    local_440 = (param_1->Views).AllocatorInstance.Data;
    if ((iVar2 < 0) &&
       (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar24)) {
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    uVar3 = param_1->VisibilityMap;
    local_450 = 0;
    if (0 < iVar2) {
      local_44c = 1;
      do {
        if ((uVar3 & local_44c) != 0) {
          if ((local_450 < 0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar24)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pFVar7 = *(FSceneView **)local_440;
          if ((pFVar7 == (FSceneView *)0x0) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("View",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                                  ,0x49b,L""), bVar24)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          local_2a8._s_0.X = (pFVar7->ViewMatrices).ViewOrigin.field0_0x0._s_0.X;
          local_2a8._s_0.Y = (pFVar7->ViewMatrices).ViewOrigin.field0_0x0._s_0.Y;
          pFVar8 = pFVar7->Family;
          local_2a8._s_0.Z = (pFVar7->ViewMatrices).ViewOrigin.field0_0x0._s_0.Z;
          pFVar31 = FMeshElementCollector::
                    AllocateOneFrameResource<FNiagaraRibbonMeshCollectorResources>
                              ((FMeshElementCollector *)param_1);
          pFVar9 = (pFVar31->RibbonResources).Object;
          pTVar32 = MakeShared<FNiagaraRibbonRenderingFrameViewResources,1>(&local_288);
          local_398 = pTVar32->Object;
          local_390 = (pTVar32->SharedReferenceCount).ReferenceController;
          if (local_390 != (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            local_390->SharedReferenceCount =
                 (atomic<int>)((int)local_390->SharedReferenceCount + 1);
            UNLOCK();
          }
          pFVar36 = (pFVar9->ViewResources).AllocatorInstance.Data;
          if (((pFVar36 <= (FScriptContainerElement *)&local_398) &&
              ((FScriptContainerElement *)&local_398 <
               pFVar36 + (longlong)(pFVar9->ViewResources).ArrayMax * 0x10)) &&
             (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar24)) {
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          iVar26 = (pFVar9->ViewResources).ArrayNum;
          piVar16 = &(pFVar9->ViewResources).ArrayMax;
          if (iVar26 == *piVar16) {
            iVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,(ForAnyElementType *)pFVar9,piVar16);
          }
          (pFVar9->ViewResources).ArrayNum = iVar26 + 1;
          pFVar36 = (pFVar9->ViewResources).AllocatorInstance.Data + (longlong)iVar26 * 0x10;
          *(FNiagaraRibbonRenderingFrameViewResources **)pFVar36 = local_398;
          *(TReferenceControllerBase<1> **)(pFVar36 + 8) = local_390;
          local_390 = (TReferenceControllerBase<1> *)0x0;
          local_398 = (FNiagaraRibbonRenderingFrameViewResources *)0x0;
          pFVar10 = *(FNiagaraRibbonRenderingFrameViewResources **)pFVar36;
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    ((TReferenceControllerBase<1> *)0x0);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_288.SharedReferenceCount.ReferenceController);
          pFVar1 = &pFVar10->IndexGenerationSettings;
          pFVar33 = CalculateIndexBufferConfiguration
                              (this,&local_1e8,&pFVar5->GenerationOutput,pFVar29,local_380,pFVar7,
                               (TVector<double> *)&local_2a8._s_0,pFVar5->bUseGPUInit,
                               pFVar5->bIsGPUSystem);
          fVar17 = pFVar33->LODDistanceFactor;
          uVar40 = pFVar33->MaxSegmentCount;
          uVar42 = pFVar33->SubSegmentCount;
          pFVar1->ViewDistance = pFVar33->ViewDistance;
          pFVar1->LODDistanceFactor = fVar17;
          (pFVar10->IndexGenerationSettings).MaxSegmentCount = uVar40;
          (pFVar10->IndexGenerationSettings).SubSegmentCount = uVar42;
          uVar40 = pFVar33->SegmentBitMask;
          uVar42 = pFVar33->SubSegmentBitShift;
          uVar14 = pFVar33->SubSegmentBitMask;
          (pFVar10->IndexGenerationSettings).SegmentBitShift = pFVar33->SegmentBitShift;
          (pFVar10->IndexGenerationSettings).SegmentBitMask = uVar40;
          (pFVar10->IndexGenerationSettings).SubSegmentBitShift = uVar42;
          (pFVar10->IndexGenerationSettings).SubSegmentBitMask = uVar14;
          uVar40 = pFVar33->TotalBitCount;
          uVar42 = pFVar33->TotalNumIndices;
          uVar14 = pFVar33->CPUTriangleCount;
          lVar34 = (pFVar10->VertexFactory)._padding_;
          (pFVar10->IndexGenerationSettings).ShapeBitMask = pFVar33->ShapeBitMask;
          (pFVar10->IndexGenerationSettings).TotalBitCount = uVar40;
          (pFVar10->IndexGenerationSettings).TotalNumIndices = uVar42;
          (pFVar10->IndexGenerationSettings).CPUTriangleCount = uVar14;
          lVar34 = (**(code **)(lVar34 + 0x30))(pFVar10);
          if ((*(uint *)(lVar34 + 0x38) & 0x400) != 0) {
            this_02 = FNiagaraGpuComputeDispatchInterface::
                      GetOrCreateDataManager<FNiagaraGpuRibbonsDataManager>(local_350);
            local_348.Object = (pFVar31->RibbonResources).Object;
            bVar24 = pFVar5->bUseGPUInit;
            local_348.SharedReferenceCount.ReferenceController =
                 (pFVar31->RibbonResources).SharedReferenceCount.ReferenceController;
            if (local_348.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_348.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((param_1->_padding_ == 0) &&
               (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                   ("DynamicReadBuffer",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Public\\MeshElementCollector.h"
                                    ,0x3f,L""), bVar25)) {
              pcVar13 = (code *)swi(3);
              (*pcVar13)();
              return;
            }
            this = local_370;
            InitializeVertexBuffersResources
                      (local_370,pFVar4,pFVar5,pFVar29,
                       (FGlobalDynamicReadBuffer *)param_1->_padding_,&local_348,bVar24);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_348.SharedReferenceCount.ReferenceController);
            GenerateIndexBufferForView
                      (this,pFVar4,this_02,(FMeshElementCollector *)param_1,pFVar1,pFVar5,pFVar10,
                       pFVar7,(TVector<double> *)&local_2a8._s_0);
            SetupPerViewUniformBuffer(this,pFVar1,pFVar7,pFVar8,local_380,&pFVar10->UniformBuffer);
            if ((pFVar10->IndexGenerationSettings).TotalNumIndices != 0) {
              FMeshBatch::FMeshBatch(&local_128);
              local_338.Object = (pFVar31->RibbonResources).Object;
              bVar24 = pFVar5->bUseGPUInit;
              local_338.SharedReferenceCount.ReferenceController =
                   (pFVar31->RibbonResources).SharedReferenceCount.ReferenceController;
              if (local_338.SharedReferenceCount.ReferenceController !=
                  (TReferenceControllerBase<1> *)0x0) {
                LOCK();
                (local_338.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                     (atomic<int>)
                     ((int)(local_338.SharedReferenceCount.ReferenceController)->
                           SharedReferenceCount + 1);
                UNLOCK();
              }
              SetupMeshBatchAndCollectorResourceForView
                        (this,pFVar4,&pFVar10->IndexGenerationSettings,pFVar5,pFVar29,pFVar7,pFVar8,
                         local_380,&local_338,pFVar10,&local_128,bVar24);
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (local_338.SharedReferenceCount.ReferenceController);
              if (bVar23 == false) {
                if ((local_128.Elements.ArrayNum < 1) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                FVar35 = (ForElementType<FMeshBatchElement>)&local_128;
                if (local_128.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FVar35 = local_128.Elements.AllocatorInstance.SecondaryData;
                }
                uVar40 = *(uint *)((longlong)FVar35 + 0x5c) * 3;
                if ((local_128.Elements.ArrayNum < 1) &&
                   (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar24)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                FVar35 = (ForElementType<FMeshBatchElement>)&local_128;
                if (local_128.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FVar35 = local_128.Elements.AllocatorInstance.SecondaryData;
                }
                uVar42 = *(uint *)((longlong)FVar35 + 0x5c);
              }
              else {
                uVar40 = (pFVar10->IndexGenerationSettings).TotalNumIndices;
                uVar42 = uVar40 / 3;
              }
              if (uVar42 == 0) {
                FVar35 = (ForElementType<FMeshBatchElement>)&local_128;
                if (local_128.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FVar35 = local_128.Elements.AllocatorInstance.SecondaryData;
                }
                DestructItems<FMeshBatchElement,int>
                          ((FMeshBatchElement *)FVar35,local_128.Elements.ArrayNum);
                if (local_128.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FMemory::Free((void *)local_128.Elements.AllocatorInstance.SecondaryData);
                }
              }
              else {
                local_3e0 = 0x1000000;
                local_400.Data = (FScriptContainerElement *)0x0;
                local_3f8 = 0;
                local_3f0 = (FMeshBatch *)0x0;
                iStack_3e8 = 0;
                local_3d8 = (FScriptContainerElement *)0x0;
                local_3d0 = 0;
                local_3c8 = (uint *)0x0;
                iStack_3c0 = 0;
                local_3b8.Data = (FScriptContainerElement *)0x0;
                local_3b0 = 0;
                local_3a8 = (TMatrix<double> *)0x0;
                iStack_3a0 = 0;
                plVar6 = &this->_padding_;
                iVar26 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1080,&local_3b8,(int *)((longlong)&local_3b0 + 4));
                dVar18 = UE::Math::TMatrix<double>::Identity.M[0][1];
                local_3b0 = CONCAT44(local_3b0._4_4_,iVar26 + 1);
                lVar34 = (longlong)iVar26 * 0x80;
                *(double *)(local_3b8.Data + lVar34) = UE::Math::TMatrix<double>::Identity.M[0][0];
                *(double *)(local_3b8.Data + lVar34 + 8) = dVar18;
                dVar18 = UE::Math::TMatrix<double>::Identity.M[0][3];
                *(double *)(local_3b8.Data + lVar34 + 0x10) =
                     UE::Math::TMatrix<double>::Identity.M[0][2];
                *(double *)(local_3b8.Data + lVar34 + 0x10 + 8) = dVar18;
                dVar18 = UE::Math::TMatrix<double>::Identity.M[1][1];
                *(double *)(local_3b8.Data + lVar34 + 0x20) =
                     UE::Math::TMatrix<double>::Identity.M[1][0];
                *(double *)(local_3b8.Data + lVar34 + 0x20 + 8) = dVar18;
                dVar18 = UE::Math::TMatrix<double>::Identity.M[1][3];
                *(double *)(local_3b8.Data + lVar34 + 0x30) =
                     UE::Math::TMatrix<double>::Identity.M[1][2];
                *(double *)(local_3b8.Data + lVar34 + 0x30 + 8) = dVar18;
                dVar18 = UE::Math::TMatrix<double>::Identity.M[2][1];
                *(double *)(local_3b8.Data + lVar34 + 0x40) =
                     UE::Math::TMatrix<double>::Identity.M[2][0];
                *(double *)(local_3b8.Data + lVar34 + 0x40 + 8) = dVar18;
                dVar18 = UE::Math::TMatrix<double>::Identity.M[2][3];
                *(double *)(local_3b8.Data + lVar34 + 0x50) =
                     UE::Math::TMatrix<double>::Identity.M[2][2];
                *(double *)(local_3b8.Data + lVar34 + 0x50 + 8) = dVar18;
                dVar18 = UE::Math::TMatrix<double>::Identity.M[3][1];
                *(double *)(local_3b8.Data + lVar34 + 0x60) =
                     UE::Math::TMatrix<double>::Identity.M[3][0];
                *(double *)(local_3b8.Data + lVar34 + 0x60 + 8) = dVar18;
                dVar18 = UE::Math::TMatrix<double>::Identity.M[3][3];
                *(double *)(local_3b8.Data + lVar34 + 0x70) =
                     UE::Math::TMatrix<double>::Identity.M[3][2];
                *(double *)(local_3b8.Data + lVar34 + 0x70 + 8) = dVar18;
                if (bVar23 == false) {
                  if (((pFVar10->IndexBuffer).Object == (FNiagaraRibbonIndexBuffer *)0x0) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar24)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  this_00 = (FRHIResource *)this->_padding_;
                  this_01 = (FRHIResource *)((pFVar10->IndexBuffer).Object)->_padding_;
                  if (this_00 != this_01) {
                    this->_padding_ = (longlong)this_01;
                    if (this_01 != (FRHIResource *)0x0) {
                      FRHIResource::AddRef(this_01);
                    }
                    if (this_00 != (FRHIResource *)0x0) {
                      FRHIResource::Release(this_00);
                    }
                  }
                  if (((pFVar10->IndexBuffer).Object == (FNiagaraRibbonIndexBuffer *)0x0) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar24)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  pFVar11 = (pFVar10->IndexBuffer).Object;
                  if ((pFVar11 == (FNiagaraRibbonIndexBuffer *)0x0) &&
                     (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                         ("IsValid()",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                          ,0x458,L""), bVar24)) {
                    pcVar13 = (code *)swi(3);
                    (*pcVar13)();
                    return;
                  }
                  *(uint *)&this->_padding_ =
                       *(int *)(((pFVar10->IndexBuffer).Object)->_padding_ + 0xdc) *
                       pFVar11->FirstIndex;
                }
                if (((local_400.Data <= &local_128) &&
                    (&local_128 < (FMeshBatch *)(local_400.Data + (longlong)local_3f8._4_4_ * 0xe0))
                    ) && (bVar24 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar24)) {
                  pcVar13 = (code *)swi(3);
                  (*pcVar13)();
                  return;
                }
                iVar26 = (int)local_3f8;
                if ((int)local_3f8 == local_3f8._4_4_) {
                  iVar26 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x8e0,&local_400,(int *)((longlong)&local_3f8 + 4));
                }
                local_3f8 = CONCAT44(local_3f8._4_4_,iVar26 + 1);
                FMeshBatch::FMeshBatch
                          ((FMeshBatch *)(local_400.Data + (longlong)iVar26 * 0xe0),&local_128);
                pFVar39 = (FRWBuffer *)0x0;
                if ((int)this->_padding_ != 0) {
                  pFVar39 = (FRWBuffer *)&this->_padding_;
                }
                if (bVar23 != false) {
                  pTVar12 = (pFVar31->RibbonResources).SharedReferenceCount.ReferenceController;
                  local_328.Object = (pFVar31->RibbonResources).Object;
                  if (pTVar12 != (TReferenceControllerBase<1> *)0x0) {
                    LOCK();
                    pTVar12->SharedReferenceCount =
                         (atomic<int>)((int)pTVar12->SharedReferenceCount + 1);
                    UNLOCK();
                  }
                  local_328.SharedReferenceCount.ReferenceController = pTVar12;
                  FNiagaraGpuRibbonsDataManager::RegisterRenderer(this_02,this,pFVar29,&local_328);
                  SharedPointerInternals::TReferenceControllerBase<1>::
                  ReleaseSharedReferenceNoInline(pTVar12);
                }
                FVar20.Data = local_400.Data;
                iVar26 = (int)local_3f8;
                FVar37.Data = (FScriptContainerElement *)0x0;
                iVar41 = 0;
                local_1b8.Data = (FScriptContainerElement *)0x0;
                local_1b0._0_4_ = (int)local_3f8;
                if ((int)local_3f8 != 0) {
                  UE::Core::Private::
                  ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0xe0,8,(int)local_3f8,0,&local_1b8,(int)local_3f8,
                             (int *)((longlong)&local_1b0 + 4));
                  ConstructItems<FMeshBatch,FMeshBatch,int>
                            (local_1b8.Data,(FMeshBatch *)FVar20.Data,iVar26);
                  FVar37.Data = local_1b8.Data;
                  iVar26 = (int)local_1b0;
                  iVar41 = local_1b0._4_4_;
                }
                this = local_370;
                local_278.VertexBufferSize = uVar40 * 0xc;
                local_278.Geometry = (FRayTracingGeometry *)&local_370->_padding_;
                local_188 = 1;
                local_184 = 0;
                local_178[0] = UE::Math::TMatrix<float>::Identity.M[0][0];
                local_178[1] = UE::Math::TMatrix<float>::Identity.M[0][1];
                afStack_170[0] = UE::Math::TMatrix<float>::Identity.M[0][2];
                afStack_170[1] = UE::Math::TMatrix<float>::Identity.M[0][3];
                local_168[0] = UE::Math::TMatrix<float>::Identity.M[1][0];
                local_168[1] = UE::Math::TMatrix<float>::Identity.M[1][1];
                afStack_160[0] = UE::Math::TMatrix<float>::Identity.M[1][2];
                afStack_160[1] = UE::Math::TMatrix<float>::Identity.M[1][3];
                local_158[0] = UE::Math::TMatrix<float>::Identity.M[2][0];
                local_158[1] = UE::Math::TMatrix<float>::Identity.M[2][1];
                afStack_150[0] = UE::Math::TMatrix<float>::Identity.M[2][2];
                afStack_150[1] = UE::Math::TMatrix<float>::Identity.M[2][3];
                local_148[0] = UE::Math::TMatrix<float>::Identity.M[3][0];
                local_148[1] = UE::Math::TMatrix<float>::Identity.M[3][1];
                afStack_140[0] = UE::Math::TMatrix<float>::Identity.M[3][2];
                afStack_140[1] = UE::Math::TMatrix<float>::Identity.M[3][3];
                local_138 = 0;
                local_1b8.Data = (FScriptContainerElement *)0x0;
                local_1b0 = 0;
                local_278.bApplyWorldPositionOffset = true;
                local_278.InstanceId = 0;
                local_278.WorldToInstance.M[0][0] = UE::Math::TMatrix<float>::Identity.M[0][0];
                local_278.WorldToInstance.M[0][1] = UE::Math::TMatrix<float>::Identity.M[0][1];
                local_278.WorldToInstance.M[0][2] = UE::Math::TMatrix<float>::Identity.M[0][2];
                local_278.WorldToInstance.M[0][3] = UE::Math::TMatrix<float>::Identity.M[0][3];
                local_278.WorldToInstance.M[1][0] = UE::Math::TMatrix<float>::Identity.M[1][0];
                local_278.WorldToInstance.M[1][1] = UE::Math::TMatrix<float>::Identity.M[1][1];
                local_278.WorldToInstance.M[1][2] = UE::Math::TMatrix<float>::Identity.M[1][2];
                local_278.WorldToInstance.M[1][3] = UE::Math::TMatrix<float>::Identity.M[1][3];
                local_278.WorldToInstance.M[2][0] = UE::Math::TMatrix<float>::Identity.M[2][0];
                local_278.WorldToInstance.M[2][1] = UE::Math::TMatrix<float>::Identity.M[2][1];
                local_278.WorldToInstance.M[2][2] = UE::Math::TMatrix<float>::Identity.M[2][2];
                local_278.WorldToInstance.M[2][3] = UE::Math::TMatrix<float>::Identity.M[2][3];
                local_278.WorldToInstance.M[3][0] = UE::Math::TMatrix<float>::Identity.M[3][0];
                local_278.WorldToInstance.M[3][1] = UE::Math::TMatrix<float>::Identity.M[3][1];
                local_278.WorldToInstance.M[3][2] = UE::Math::TMatrix<float>::Identity.M[3][2];
                local_278.WorldToInstance.M[3][3] = UE::Math::TMatrix<float>::Identity.M[3][3];
                local_278.bAlphaMasked = false;
                local_278.IndexBuffer.Reference = (FRHIBuffer *)0x0;
                local_130 = (FRHIResource *)0x0;
                local_278.MeshBatches.AllocatorInstance.Data = FVar37.Data;
                local_278.MeshBatches.ArrayNum = iVar26;
                local_278.MeshBatches.ArrayMax = iVar41;
                local_278.bUsingIndirectDraw = bVar23;
                local_278.NumVertices = uVar40;
                local_278.NumTriangles = uVar42;
                local_278.Buffer = pFVar39;
                local_1a8 = bVar23;
                local_1a4 = uVar40;
                local_1a0 = local_278.VertexBufferSize;
                local_19c = uVar42;
                local_198 = (longlong *)local_278.Geometry;
                local_190 = pFVar39;
                FRayTracingInstanceCollector::AddRayTracingGeometryUpdate
                          (param_1,local_450,&local_278);
                if (local_130 != (FRHIResource *)0x0) {
                  FRHIResource::Release(local_130);
                }
                DestructItems<FMeshBatch,int>((FMeshBatch *)local_1b8.Data,(int)local_1b0);
                if ((FMeshBatch *)local_1b8.Data != (FMeshBatch *)0x0) {
                  FMemory::Free(local_1b8.Data);
                }
                local_318.MaterialsView._12_4_ = uStack_3e4;
                local_318.MaterialsView.ArrayNum = iStack_3e8;
                local_318.Materials.AllocatorInstance.Data = local_400.Data;
                local_318.Materials.ArrayNum = (int)local_3f8;
                local_318.Materials.ArrayMax = local_3f8._4_4_;
                local_318.bApplyLocalBoundsTransform = (bool)(undefined1)local_3e0;
                local_318.bThinGeometry = (bool)local_3e0._1_1_;
                local_318.InstanceLayer = local_3e0._2_1_;
                local_318.bInstanceMaskAndFlagsDirty = (bool)local_3e0._3_1_;
                local_318.NumTransforms = local_3e0._4_4_;
                local_318.PrimitiveInstanceIndices.AllocatorInstance.Data = local_3d8;
                local_318.PrimitiveInstanceIndices.ArrayNum = (int)local_3d0;
                local_318.PrimitiveInstanceIndices.ArrayMax = local_3d0._4_4_;
                local_318.MaterialsView.DataPtr = local_3f0;
                local_318.InstanceTransforms.AllocatorInstance.Data = local_3b8.Data;
                local_318.PrimitiveInstanceIndicesView._12_4_ = uStack_3bc;
                local_318.PrimitiveInstanceIndicesView.ArrayNum = iStack_3c0;
                local_318.PrimitiveInstanceIndicesView.DataPtr = local_3c8;
                local_318.InstanceTransforms.ArrayNum = (int)local_3b0;
                local_318.InstanceTransformsView._12_4_ = uStack_39c;
                local_318.InstanceTransformsView.ArrayNum = iStack_3a0;
                local_318.InstanceTransforms.ArrayMax = local_3b0._4_4_;
                local_3b0 = 0;
                local_400.Data = (FScriptContainerElement *)0x0;
                local_3f8 = 0;
                local_3d8 = (void *)0x0;
                local_3d0 = 0;
                local_3b8.Data = (FScriptContainerElement *)0x0;
                local_318.InstanceTransformsView.DataPtr = local_3a8;
                local_318.Geometry = (FRayTracingGeometry *)plVar6;
                FRayTracingInstanceCollector::AddRayTracingInstance(param_1,local_450,&local_318);
                if (local_3b8.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_3b8.Data);
                }
                if (local_3d8 != (void *)0x0) {
                  FMemory::Free(local_3d8);
                }
                DestructItems<FMeshBatch,int>((FMeshBatch *)local_400.Data,(int)local_3f8);
                if ((FMeshBatch *)local_400.Data != (FMeshBatch *)0x0) {
                  FMemory::Free(local_400.Data);
                }
                FVar35 = (ForElementType<FMeshBatchElement>)&local_128;
                if (local_128.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FVar35 = local_128.Elements.AllocatorInstance.SecondaryData;
                }
                DestructItems<FMeshBatchElement,int>
                          ((FMeshBatchElement *)FVar35,local_128.Elements.ArrayNum);
                if (local_128.Elements.AllocatorInstance.SecondaryData !=
                    (ForElementType<FMeshBatchElement>)0x0) {
                  FMemory::Free((void *)local_128.Elements.AllocatorInstance.SecondaryData);
                }
              }
            }
          }
        }
        local_450 = local_450 + 1;
        local_44c = local_44c << 1 | (uint)((int)local_44c < 0);
        local_440 = local_440 + 8;
        FVar38 = local_368;
      } while (local_450 < iVar2);
    }
  }
LAB_1493540b8:
  if (bVar15) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar22) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar21) {
    FThreadStats::AddMessage(FVar38,CycleScopeEnd);
  }
  return;
}

// InitializeShape @ 149358970

void __thiscall
FNiagaraRendererRibbons::InitializeShape
          (FNiagaraRendererRibbons *this,UNiagaraRibbonRendererProperties *param_1)

{
  ENiagaraRibbonShapeMode EVar1;
  
  EVar1 = param_1->Shape;
  if (EVar1 == Custom) {
    if (2 < (param_1->CustomVertices).ArrayNum) {
      GenerateShapeStateCustom
                (&this->ShapeState,&param_1->CustomVertices,param_1->bUseMaterialBackfaceCulling);
      return;
    }
  }
  else if (EVar1 == Tube) {
    if (param_1->TubeSubdivisions - 3U < 0xe) {
      GenerateShapeStateTube
                (&this->ShapeState,param_1->TubeSubdivisions,param_1->bUseMaterialBackfaceCulling);
      return;
    }
  }
  else if ((EVar1 == MultiPlane) && (param_1->MultiPlaneCount - 2U < 0xf)) {
    GenerateShapeStateMultiPlane
              (&this->ShapeState,param_1->MultiPlaneCount,param_1->WidthSegmentationCount,
               param_1->bEnableAccurateGeometry,param_1->bUseMaterialBackfaceCulling);
    return;
  }
  GenerateShapeStatePlane
            (&this->ShapeState,param_1->WidthSegmentationCount,param_1->bUseMaterialBackfaceCulling)
  ;
  return;
}

// InitializeTessellation @ 1493595f0

void __thiscall
FNiagaraRendererRibbons::InitializeTessellation
          (FNiagaraRendererRibbons *this,UNiagaraRibbonRendererProperties *param_1)

{
  float fVar1;
  float fVar2;
  
  (this->TessellationConfig).TessellationMode = param_1->TessellationMode;
  (this->TessellationConfig).CustomTessellationFactor = param_1->TessellationFactor;
  (this->TessellationConfig).bCustomUseConstantFactor = param_1->bUseConstantFactor;
  fVar1 = param_1->TessellationAngle;
  if ((fVar1 <= 0.0) || (fVar2 = __real_3f800000, __real_3f800000 <= fVar1)) {
    fVar2 = fVar1;
  }
  (this->TessellationConfig).CustomTessellationMinAngle = fVar2 * __real_3c8efa35;
  (this->TessellationConfig).bCustomUseScreenSpace = param_1->bScreenSpaceTessellation;
  return;
}

// InitializeVertexBuffersGPU @ 149359670

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */

void __thiscall
FNiagaraRendererRibbons::InitializeVertexBuffersGPU
          (FNiagaraRendererRibbons *this,FRHICommandListImmediate *param_1,
          FNiagaraGpuComputeDispatchInterface *param_2,FNiagaraRibbonGPUInitParameters *param_3,
          FNiagaraRibbonGPUInitComputeBuffers *param_4,
          TSharedPtr<FNiagaraRibbonRenderingFrameResources,1> *param_5)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  FRHIShaderResourceView *pFVar6;
  FRHIShaderResourceView *pFVar7;
  FRHIBuffer *pFVar8;
  longlong lVar9;
  code *pcVar10;
  FShaderParameterBindings *pFVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  FRHIUnorderedAccessView *this_00;
  uint *puVar14;
  FNiagaraRibbonGPUInitComputeBuffers *pFVar15;
  FNiagaraRibbonAggregationStepCS *pFVar16;
  FShader *pFVar17;
  bool bVar18;
  int iVar19;
  uint uVar20;
  atomic<unsigned_int> aVar21;
  uint uVar22;
  TStatId TVar23;
  IRHIComputeContext *pIVar24;
  undefined8 *puVar25;
  FGlobalShaderMap *pFVar26;
  FShaderType *pFVar27;
  FName FVar28;
  FShaderParametersMetadata *pFVar29;
  FRHIComputeShader *pFVar30;
  FRHIBatchedShaderUnbinds *pFVar31;
  TRefCountPtr<FRHIShaderResourceView> *pTVar32;
  FRHIBreadcrumbAllocator *pFVar33;
  FRHIBreadcrumbNode *pFVar34;
  FString *pFVar35;
  FRHIUnorderedAccessView *pFVar36;
  uint uVar37;
  undefined4 uStack_144c;
  ulonglong local_1428;
  undefined4 uStack_141c;
  FRHIShaderResourceView *local_1410;
  FRHIUnorderedAccessView *local_1408;
  uint local_1400 [2];
  FName local_13f8;
  byte local_13f0;
  FName local_13e8;
  byte local_13e0;
  FName local_13d8;
  byte local_13d0;
  FName local_13c8;
  byte local_13c0;
  FName local_13b8;
  byte local_13b0;
  FName local_13a8;
  byte local_13a0;
  uint *local_1398;
  FRibbonComputeUniformParameters *local_1390;
  FNiagaraRendererRibbons *local_1388;
  FNiagaraRibbonGPUInitComputeBuffers *local_1380;
  uint *local_1378;
  FRHIShaderResourceView **local_1370;
  FNiagaraRibbonGPUInitComputeBuffers *local_1368;
  FRHIUnorderedAccessView **local_1360;
  TShaderRefBase<FNiagaraRibbonSortPhase2CS,FShaderMapPointerTable> local_1358;
  undefined8 local_1348;
  undefined8 uStack_1340;
  FScriptContainerElement *local_1338;
  TShaderRefBase<FNiagaraRibbonAggregationStepCS,FShaderMapPointerTable> local_1328;
  FRHITransitionInfo *local_1318;
  undefined4 uStack_1310;
  undefined4 uStack_130c;
  TIntVector3<int>_u_0 local_1308;
  TIntVector3<int>_u_0 local_12f8;
  TIntVector3<int>_u_0 local_12e8;
  TIntVector3<int>_u_0 local_12d8;
  TIntVector3<int>_u_0 local_12c8;
  TIntVector3<int>_u_0 local_12b8;
  TShaderRefBase<FNiagaraRibbonVertexReductionInitializationCS,FShaderMapPointerTable> local_12a8;
  TShaderRefBase<FNiagaraRibbonAggregationApplyCS,FShaderMapPointerTable> local_1298;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1288;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_1278;
  int local_1268;
  undefined4 local_1264;
  TShaderRefBase<FNiagaraRibbonVertexReductionFinalizeCS,FShaderMapPointerTable> local_1260;
  TShaderRefBase<FNiagaraRibbonUVParamCalculationCS,FShaderMapPointerTable> local_1250;
  TShaderRefBase<FNiagaraRibbonSortPhase1CS,FShaderMapPointerTable> local_1238;
  FRHITransitionInfo local_1228;
  FRHITransitionInfo local_11f8;
  FRHITransitionInfo local_11c8;
  FRHITransitionInfo local_1198;
  FRHITransitionInfo local_1168;
  FRHITransitionInfo local_1138;
  FRHITransitionInfo local_1108;
  FRHITransitionInfo local_10d8;
  FRHITransitionInfo local_10a8;
  FRHITransitionInfo local_1078;
  FRHITransitionInfo local_1048;
  FRHITransitionInfo local_1018;
  FRHITransitionInfo local_fe8;
  FRHITransitionInfo local_fb8;
  FSourceLocation local_f88;
  FSourceLocation local_f68;
  FSourceLocation local_f48;
  FSourceLocation local_f28;
  FSourceLocation local_f08;
  FSourceLocation local_ee8;
  FRHITransitionInfo local_ec8;
  FRHITransitionInfo local_e98;
  FRHITransitionInfo local_e68;
  FRHITransitionInfo local_e38;
  FRHITransitionInfo local_e08;
  FRHITransitionInfo local_dd8;
  FRHITransitionInfo local_da8;
  FRHITransitionInfo local_d78;
  FRHITransitionInfo local_d48;
  FRHITransitionInfo local_d18;
  FRHITransitionInfo local_ce8;
  undefined4 local_cb8;
  undefined2 local_cb4;
  FRHIBuffer *local_cb0;
  undefined1 local_ca8;
  undefined4 local_ca4;
  undefined4 local_ca0;
  undefined1 local_c9c;
  undefined1 local_c90;
  FRHITransitionInfo local_c88;
  undefined4 local_c58;
  undefined2 local_c54;
  FRHIBuffer *local_c50;
  undefined1 local_c48;
  undefined4 local_c44;
  undefined4 local_c40;
  undefined1 local_c3c;
  undefined1 local_c30;
  FRHITransitionInfo local_c28;
  undefined4 local_bf8;
  undefined2 local_bf4;
  FRHIBuffer *local_bf0;
  undefined1 local_be8;
  undefined4 local_be4;
  undefined4 local_be0;
  undefined1 local_bdc;
  undefined1 local_bd0;
  FRHITransitionInfo local_bc8;
  undefined4 local_b98;
  undefined2 local_b94;
  FRHIBuffer *local_b90;
  undefined1 local_b88;
  undefined4 local_b84;
  undefined4 local_b80;
  undefined1 local_b7c;
  undefined1 local_b70;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_b68;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_b58;
  FRHITransitionInfo *local_b48;
  undefined4 uStack_b40;
  undefined4 uStack_b3c;
  FRHITransitionInfo *local_b38;
  undefined4 uStack_b30;
  undefined4 uStack_b2c;
  FRHITransitionInfo *local_b28;
  undefined4 uStack_b20;
  undefined4 uStack_b1c;
  FRHITransitionInfo *local_b18;
  undefined4 uStack_b10;
  undefined4 uStack_b0c;
  char *local_b08;
  undefined4 uStack_b00;
  undefined4 uStack_afc;
  undefined8 local_af8;
  wchar_t *pwStack_af0;
  char *local_ae8;
  undefined4 uStack_ae0;
  undefined4 uStack_adc;
  undefined8 local_ad8;
  wchar_t *pwStack_ad0;
  char *local_ac8;
  undefined4 uStack_ac0;
  undefined4 uStack_abc;
  undefined8 local_ab8;
  wchar_t *pwStack_ab0;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_aa8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a98;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a88;
  TOptional<FRHIBreadcrumbScope> local_a78;
  TOptional<FRHIBreadcrumbScope> local_a60;
  FRHIBreadcrumbScope local_a48;
  char local_a38;
  FRHIBreadcrumbScope local_a30;
  char local_a20;
  FRHIBreadcrumbScope local_a18;
  char local_a08;
  TOptional<FRHIBreadcrumbScope> local_a00;
  TArrayView<FRHITransitionInfo_const_,int> local_9e8;
  TArrayView<FRHITransitionInfo_const_,int> local_9d8;
  TArrayView<FRHITransitionInfo_const_,int> local_9c8;
  TArrayView<FRHITransitionInfo_const_,int> local_9b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_9a8;
  TArrayView<FRHITransitionInfo_const_,int> local_998;
  TArrayView<FRHITransitionInfo_const_,int> local_988;
  TArrayView<FRHITransitionInfo_const_,int> local_978;
  TArrayView<FRHITransitionInfo_const_,int> local_968;
  FString local_958;
  TArrayView<FRHITransitionInfo_const_,int> local_948;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_938;
  TArrayView<FRHITransitionInfo_const_,int> local_928;
  FString local_918;
  TArrayView<FRHITransitionInfo_const_,int> local_908;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_8f8;
  TArrayView<FRHITransitionInfo_const_,int> local_8e8;
  TArrayView<FRHITransitionInfo_const_,int> local_8d8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_8c8;
  TArrayView<FRHITransitionInfo_const_,int> local_8b8;
  TArrayView<FRHITransitionInfo_const_,int> local_8a8;
  TArrayView<FRHITransitionInfo_const_,int> local_898;
  TArrayView<FRHITransitionInfo_const_,int> local_888;
  FString local_878;
  FString local_868;
  TArrayView<FRHITransitionInfo_const_,int> local_858;
  TArrayView<FRHITransitionInfo_const_,int> local_848;
  FString local_838;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_828;
  TArrayView<FRHITransitionInfo_const_,int> local_818;
  FString local_808;
  TArrayView<FRHITransitionInfo_const_,int> local_7f8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_7e8;
  TArrayView<FRHITransitionInfo_const_,int> local_7d8;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_7c8;
  TArrayView<FRHITransitionInfo_const_,int> local_7b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_7a8;
  TArrayView<FRHITransitionInfo_const_,int> local_798;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_788;
  FString local_778;
  tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_> local_768;
  undefined1 local_758 [8];
  undefined1 local_750 [24];
  TArrayView<FRHITransitionInfo_const_,int> local_738;
  undefined1 local_728 [8];
  undefined1 local_720 [8];
  undefined1 local_718 [24];
  undefined1 local_700 [8];
  undefined1 local_6f8 [32];
  TArrayView<FRHITransitionInfo_const_,int> local_6d8;
  FRibbonComputeUniformParameters local_6c8;
  float local_628;
  float local_624;
  float local_620;
  float local_61c;
  float local_618;
  uint local_614;
  uint local_610;
  uint local_60c;
  uint local_608;
  uint local_604;
  undefined8 local_600;
  float local_5f8;
  float local_5f4;
  float local_5f0;
  float local_5ec;
  float local_5e8;
  uint local_5e4;
  uint local_5e0;
  uint local_5dc;
  uint local_5d8;
  uint local_5d4;
  undefined8 local_5d0;
  FRHIShaderResourceView *local_5c8;
  FRHIUnorderedAccessView *local_5c0;
  FRHIUnorderedAccessView *local_5b8;
  FRHIShaderResourceView *local_5b0;
  undefined4 local_5a8;
  undefined8 local_5a4;
  undefined4 local_59c;
  uint uStack_58c;
  undefined4 local_588;
  undefined4 uStack_584;
  uint uStack_56c;
  undefined4 local_568;
  undefined4 uStack_564;
  uint uStack_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  FRibbonComputeUniformParameters local_538;
  FRHIShaderResourceView *local_498;
  undefined8 local_490;
  FRHITransitionInfo_u_8 FStack_488;
  undefined8 local_480;
  FRHITransitionInfo_u_8 local_478;
  undefined8 local_470;
  FRHITransitionInfo_u_8 local_468;
  undefined8 local_460;
  undefined8 uStack_458;
  FRHITransitionInfo_u_8 local_450;
  float local_448;
  undefined8 local_444;
  undefined4 local_43c;
  FRibbonComputeUniformParameters local_438;
  FRHIShaderResourceView *local_398;
  FRHIShaderResourceView *local_390;
  FRHITransitionInfo_u_8 local_388;
  FRHITransitionInfo_u_8 local_380;
  FRHITransitionInfo_u_8 local_378;
  FRHITransitionInfo_u_8 local_370;
  FRibbonComputeUniformParameters local_368;
  FRHIShaderResourceView *local_2c8;
  FRHITransitionInfo_u_8 local_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  FRibbonComputeUniformParameters local_2a8;
  FRHIShaderResourceView *local_208;
  FRHIShaderResourceView *local_200;
  FRHITransitionInfo_u_8 FStack_1f8;
  uint local_1f0;
  undefined4 local_1ec;
  FRibbonComputeUniformParameters local_1e8;
  FRHIShaderResourceView *local_148;
  FRHIShaderResourceView *local_140;
  FRHIShaderResourceView *local_138;
  FRHIShaderResourceView *local_130;
  FRHIShaderResourceView *local_128;
  FRHIShaderResourceView *local_120;
  FRHIUnorderedAccessView *local_118;
  FRHIUnorderedAccessView *local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_100;
  FRibbonComputeUniformParameters local_f8;
  
  TVar23 = FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesGPU,1>::GetStatId
                     ((FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesGPU,1> *
                      )&StatPtr_STAT_NiagaraRenderRibbonsGenVerticesGPU);
  local_ee8.Impl._Line = 0x9fa;
  local_ee8.Impl._Function =
       "void __cdecl FNiagaraRendererRibbons::InitializeVertexBuffersGPU(class FRHICommandListImmediate &,class FNiagaraGpuComputeDispatchInterface *,const struct FNiagaraRibbonGPUInitParameters &,struct FNiagaraRibbonGPUInitComputeBuffers &,const class TSharedPtr<struct FNiagaraRibbonRenderingFrameResources,1> &) const"
  ;
  local_ee8.Impl._Column = 2;
  local_ee8.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_13a8,*(TStatIdData **)&(TVar23.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_ee8);
  SetupComputeVertexGenParams(this,&local_f8,param_2,param_5,param_3);
  uVar22 = param_3->NumInstances;
  if (((int)uVar22 < 2) || ((this->VertexBuffers).bJustCreatedCommandBuffer != false)) {
    if ((this->VertexBuffers).GPUComputeCommandBuffer.NumBytes != 0) {
      local_1228.field1_0x8 =
           (FRHITransitionInfo_u_8)(this->VertexBuffers).GPUComputeCommandBuffer.Buffer.Reference;
      local_1228._padding_._0_4_ = 0xffffffff;
      local_1228._padding_._4_2_ = 0xffff;
      local_1228.Type = Buffer;
      local_1228.AccessBefore = SRVMask|IndirectArgs;
      local_1228.AccessAfter = UAVCompute;
      local_1228.Flags = None;
      local_1228.CommitInfo.bIsSet = false;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_1228,None);
      pFVar36 = (this->VertexBuffers).GPUComputeCommandBuffer.UAV.Reference;
      local_1348 = 0;
      uStack_1340 = 0;
      if ((GRHICommandList.bLatchedBypass == false) || ((param_1->field_0x29b & 0x20) == 0)) {
        puVar25 = FMemStackBase::Alloc((FMemStackBase *)param_1,0x28,8);
        *(int *)&param_1->field_0x60 = *(int *)&param_1->field_0x60 + 1;
        **(undefined8 **)&param_1->field_0x30 = puVar25;
        *(undefined8 **)&param_1->field_0x30 = puVar25 + 1;
        puVar25[1] = 0;
        *puVar25 = &___7FRHICommandClearUAVUint__6B_;
        puVar25[2] = pFVar36;
        puVar25[3] = local_1348;
        puVar25[4] = uStack_1340;
      }
      else {
        pIVar24 = FRHICommandListBase::GetComputeContext((FRHICommandListBase *)param_1);
        (**(code **)(pIVar24->_padding_ + 0x60))(pIVar24,pFVar36);
      }
      local_d18.field1_0x8 =
           (FRHITransitionInfo_u_8)(this->VertexBuffers).GPUComputeCommandBuffer.Buffer.Reference;
      local_d18._padding_._0_4_ = 0xffffffff;
      local_d18._padding_._4_2_ = 0xffff;
      local_d18.Type = Buffer;
      local_d18.AccessBefore = UAVCompute;
      local_d18.AccessAfter = SRVMask|IndirectArgs;
      local_d18.Flags = None;
      local_d18.CommitInfo.bIsSet = false;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_d18,None);
      (this->VertexBuffers).bJustCreatedCommandBuffer = false;
    }
    if ((int)uVar22 < 2) goto LAB_14935c902;
  }
  local_a60.bIsSet = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_588 = 0;
    uStack_584 = 0;
    ::Desc._12_8_ = ZEXT48(uStack_58c);
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_ = (longlong)u_NiagaraRenderRi;
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._0_4_ = 0xa12;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l14::<lambda_1>::operator()<>'
           ::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  local_768._Myfirst._Val = &::Desc;
  TOptional<FRHIBreadcrumbScope>::
  Emplace<FRHIComputeCommandList_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_>_>
            (&local_a60,(FRHIComputeCommandList *)param_1,&local_768);
  TVar23 = FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesSortGPU,1>::
           GetStatId((FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesSortGPU,1>
                      *)&StatPtr_STAT_NiagaraRenderRibbonsGenVerticesSortGPU);
  local_f08.Impl._Line = 0xa13;
  local_f08.Impl._Function =
       "void __cdecl FNiagaraRendererRibbons::InitializeVertexBuffersGPU(class FRHICommandListImmediate &,class FNiagaraGpuComputeDispatchInterface *,const struct FNiagaraRibbonGPUInitParameters &,struct FNiagaraRibbonGPUInitComputeBuffers &,const class TSharedPtr<struct FNiagaraRibbonRenderingFrameResources,1> &) const"
  ;
  local_f08.Impl._Column = 3;
  local_f08.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_13d8,*(TStatIdData **)&(TVar23.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_f08);
  uVar20 = (this->GenerationConfig).bHasFullRibbonIDs;
  pFVar26 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  iVar19 = ((this->GenerationConfig).bHasSimpleRibbonIDs + this->bGpuRibbonLinkIsFloat * 2) * 2;
  pFVar27 = (FShaderType *)FNiagaraRibbonSortPhase1CS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar26,&local_aa8,pFVar27,iVar19 + uVar20);
  local_1338 = (FScriptContainerElement *)0x15060d16c;
  if (local_aa8.ShaderContent == (FShader *)0x0) {
    FVar28 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_6f8);
    ::FName::ToString((FName *)FVar28,&local_778);
    FNiagaraRibbonSortPhase1CS::GetStaticType();
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_778.Data.AllocatorInstance.Data);
    }
    if (bVar18) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FNiagaraRibbonSortPhase1CS::GetStaticType();
  local_1238.ShaderContent = (FNiagaraRibbonSortPhase1CS *)local_aa8.ShaderContent;
  local_1238.ShaderMap = local_aa8.ShaderMap;
  pFVar26 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar27 = (FShaderType *)FNiagaraRibbonSortPhase2CS::GetStaticType();
  FGlobalShaderMap::GetShader(pFVar26,&local_a98,pFVar27,iVar19 + uVar20);
  if (local_a98.ShaderContent == (FShader *)0x0) {
    FVar28 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_700);
    ::FName::ToString((FName *)FVar28,&local_808);
    FNiagaraRibbonSortPhase2CS::GetStaticType();
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_808.Data.AllocatorInstance.Data);
    }
    if (bVar18) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FNiagaraRibbonSortPhase2CS::GetStaticType();
  local_1398 = local_1400;
  local_1358.ShaderContent = (FNiagaraRibbonSortPhase2CS *)local_a98.ShaderContent;
  local_1358.ShaderMap = local_a98.ShaderMap;
  local_2b8 = 0;
  uStack_2b0 = 0;
  local_1390 = &local_368;
  local_368.TotalNumParticlesDirect = local_f8.TotalNumParticlesDirect;
  local_368._4_4_ = local_f8._4_4_;
  local_368.EmitterParticleCountsBuffer = local_f8.EmitterParticleCountsBuffer;
  local_1380 = param_4;
  local_368.EmitterParticleCountsBufferOffset = local_f8.EmitterParticleCountsBufferOffset;
  local_368._20_4_ = local_f8._20_4_;
  local_368.NiagaraParticleDataFloat = local_f8.NiagaraParticleDataFloat;
  local_368.NiagaraParticleDataHalf = local_f8.NiagaraParticleDataHalf;
  local_368.NiagaraParticleDataInt = local_f8.NiagaraParticleDataInt;
  local_368.NiagaraFloatDataStride = local_f8.NiagaraFloatDataStride;
  local_368.NiagaraIntDataStride = local_f8.NiagaraIntDataStride;
  local_368.RibbonIdDataOffset = local_f8.RibbonIdDataOffset;
  local_368.RibbonLinkOrderDataOffset = local_f8.RibbonLinkOrderDataOffset;
  local_368.PositionDataOffset = local_f8.PositionDataOffset;
  local_368.PrevPositionDataOffset = local_f8.PrevPositionDataOffset;
  local_368.VelocityDataOffset = local_f8.VelocityDataOffset;
  local_368.WidthDataOffset = local_f8.WidthDataOffset;
  local_368.PrevWidthDataOffset = local_f8.PrevWidthDataOffset;
  local_368.TwistDataOffset = local_f8.TwistDataOffset;
  local_368.PrevTwistDataOffset = local_f8.PrevTwistDataOffset;
  local_368.ColorDataOffset = local_f8.ColorDataOffset;
  local_368.FacingDataOffset = local_f8.FacingDataOffset;
  local_368.PrevFacingDataOffset = local_f8.PrevFacingDataOffset;
  local_368.NormalizedAgeDataOffset = local_f8.NormalizedAgeDataOffset;
  local_368.MaterialRandomDataOffset = local_f8.MaterialRandomDataOffset;
  local_368.MaterialParamValidMask = local_f8.MaterialParamValidMask;
  local_368.MaterialParamDataOffset = local_f8.MaterialParamDataOffset;
  local_368.MaterialParam1DataOffset = local_f8.MaterialParam1DataOffset;
  local_368.MaterialParam2DataOffset = local_f8.MaterialParam2DataOffset;
  local_2c0 = (FRHITransitionInfo_u_8)(this->VertexBuffers).SortedIndicesBuffer.UAV.Reference;
  local_368.MaterialParam3DataOffset = local_f8.MaterialParam3DataOffset;
  local_368.DistanceFromStartOffset = local_f8.DistanceFromStartOffset;
  local_368.U0OverrideDataOffset = local_f8.U0OverrideDataOffset;
  local_368.V0RangeOverrideDataOffset = local_f8.V0RangeOverrideDataOffset;
  local_368.U1OverrideDataOffset = local_f8.U1OverrideDataOffset;
  local_368.V1RangeOverrideDataOffset = local_f8.V1RangeOverrideDataOffset;
  local_368.U0DistributionMode = local_f8.U0DistributionMode;
  local_368.U1DistributionMode = local_f8.U1DistributionMode;
  pFVar6 = (param_4->SortBuffer).SRV.Reference;
  local_2c8 = (FRHIShaderResourceView *)DummyUIntBuffer._64_8_;
  if (pFVar6 != (FRHIShaderResourceView *)0x0) {
    local_2c8 = pFVar6;
  }
  uVar37 = uVar22 + 0x1f >> 5;
  local_1400[0] = 0;
  uVar20 = 1;
  if (uVar22 + 0x1f >> 5 != 0) {
    uVar20 = uVar37;
  }
  uVar2 = (ulonglong)(uVar20 - 1) * 2 + 1;
  local_1428 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> local_1428 == 0; local_1428 = local_1428 - 1) {
    }
  }
  iVar19 = (int)local_1428;
  local_1388 = this;
  local_1268 = iVar19;
  if ((local_1428 & 1) != 0) {
    `FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l9::<lambda_2>::operator()(&local_1398)
    ;
  }
  local_a00.bIsSet = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_568 = 0;
    uStack_564 = 0;
    ::Desc._12_8_ = ZEXT48(uStack_56c);
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_ = (longlong)u_NiagaraRenderRi;
    ::Desc._padding_._0_4_ = 0xa38;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l23::<lambda_3>::operator()<>'
           ::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  local_788._Myfirst._Val = &::Desc;
  TOptional<FRHIBreadcrumbScope>::
  Emplace<FRHIComputeCommandList_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_>_>
            (&local_a00,(FRHIComputeCommandList *)param_1,&local_788);
  TVar23 = FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesInitialSortGPU,1>::
           GetStatId((FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesInitialSortGPU,1>
                      *)&StatPtr_STAT_NiagaraRenderRibbonsGenVerticesInitialSortGPU);
  local_f28.Impl._Line = 0xa39;
  local_f28.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
  ;
  local_f28.Impl._Column = 4;
  local_f28.Impl._Function =
       "void __cdecl FNiagaraRendererRibbons::InitializeVertexBuffersGPU(class FRHICommandListImmediate &,class FNiagaraGpuComputeDispatchInterface *,const struct FNiagaraRibbonGPUInitParameters &,struct FNiagaraRibbonGPUInitComputeBuffers &,const class TSharedPtr<struct FNiagaraRibbonRenderingFrameResources,1> &) const"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_13f8,*(TStatIdData **)&(TVar23.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_f28);
  local_d48._padding_._4_2_ = 0xffff;
  local_d48.field1_0x8 = local_2c0;
  local_798.DataPtr = &local_d48;
  local_d48._padding_._0_4_ = 0xffffffff;
  local_798._12_4_ = uStack_141c;
  local_798.ArrayNum = 1;
  local_d48.Type = UAV;
  local_d48.AccessBefore = SRVMask|VertexOrIndexBuffer;
  local_d48.AccessAfter = UAVCompute;
  local_d48.Flags = None;
  local_d48.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_798,None);
  pFVar29 = FRibbonOrderSortParameters::FTypeInfo::GetStructMetadata();
  local_12e8._s_0.Y = 1;
  local_12e8._s_0.Z = 1;
  local_12e8._s_0.X = uVar37;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_12e8._s_0);
  pFVar30 = TShaderRefBase<FNiagaraRibbonSortPhase1CS,FShaderMapPointerTable>::GetComputeShader
                      (&local_1238);
  SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar30);
  local_7a8.ShaderContent = local_aa8.ShaderContent;
  local_7a8.ShaderMap = local_aa8.ShaderMap;
  ValidateShaderParameters(&local_7a8,pFVar29,&local_368);
  ::SetShaderParameters
            ((FRHIComputeCommandList *)param_1,pFVar30,&(local_aa8.ShaderContent)->Bindings,pFVar29,
             &local_368);
  FRHIComputeCommandList::DispatchComputeShader((FRHIComputeCommandList *)param_1,uVar37,1,1);
  pFVar30 = TShaderRefBase<FNiagaraRibbonSortPhase1CS,FShaderMapPointerTable>::GetComputeShader
                      (&local_1238);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar31 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((((local_aa8.ShaderContent)->Bindings).RootParameterBufferIndex != 0xffff) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    UnsetShaderUAVs(pFVar31,&(local_aa8.ShaderContent)->Bindings);
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)param_1,pFVar30,pFVar31);
  }
  local_d78.field1_0x8 = local_2c0;
  local_7b8.DataPtr = &local_d78;
  local_7b8._12_4_ = uStack_141c;
  local_7b8.ArrayNum = 1;
  local_d78._padding_._0_4_ = 0xffffffff;
  local_d78._padding_._4_2_ = 0xffff;
  local_d78.Type = UAV;
  local_d78.AccessBefore = UAVCompute;
  local_d78.AccessAfter = SRVMask|VertexOrIndexBuffer;
  local_d78.Flags = None;
  local_d78.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_7b8,None);
  if ((local_13f0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_13f0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_13f0 & 4) != 0) {
    FThreadStats::AddMessage(local_13f8,CycleScopeEnd);
  }
  local_13f0 = 0;
  if (local_a00.bIsSet != false) {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_a00.TypedValue);
  }
  local_a78.bIsSet = false;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    local_548 = 0;
    uStack_544 = 0;
    ::Desc._12_8_ = ZEXT48(uStack_54c);
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_ = (longlong)u_NiagaraRenderRi;
    ::Desc._padding_._0_4_ = 0xa42;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l29::<lambda_4>::operator()<>'
           ::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  local_7c8._Myfirst._Val = &::Desc;
  TOptional<FRHIBreadcrumbScope>::
  Emplace<FRHIComputeCommandList_&,std::tuple<UE::RHI::Breadcrumbs::Private::TRHIBreadcrumbDesc<0>_const_*,std::tuple<>_>_>
            (&local_a78,(FRHIComputeCommandList *)param_1,&local_7c8);
  TVar23 = FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesFinalSortGPU,1>::
           GetStatId((FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesFinalSortGPU,1>
                      *)&StatPtr_STAT_NiagaraRenderRibbonsGenVerticesFinalSortGPU);
  local_f48.Impl._Line = 0xa43;
  local_f48.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
  ;
  local_f48.Impl._Column = 4;
  local_f48.Impl._Function =
       "void __cdecl FNiagaraRendererRibbons::InitializeVertexBuffersGPU(class FRHICommandListImmediate &,class FNiagaraGpuComputeDispatchInterface *,const struct FNiagaraRibbonGPUInitParameters &,struct FNiagaraRibbonGPUInitComputeBuffers &,const class TSharedPtr<struct FNiagaraRibbonRenderingFrameResources,1> &) const"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_13e8,*(TStatIdData **)&(TVar23.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_f48);
  if (iVar19 != 0) {
    local_1428 = local_1428 & 0xffffffff;
    iVar19 = 0x20;
    do {
      local_2b8 = CONCAT44(iVar19 * 2,iVar19);
      local_1400[0] = local_1400[0] ^ 1;
      if (local_1400[0] == 0) {
        local_2c0 = (FRHITransitionInfo_u_8)
                    (local_1388->VertexBuffers).SortedIndicesBuffer.UAV.Reference;
        pTVar32 = &(local_1380->SortBuffer).SRV;
      }
      else {
        local_2c0 = (FRHITransitionInfo_u_8)(local_1380->SortBuffer).UAV.Reference;
        pTVar32 = &(local_1388->VertexBuffers).SortedIndicesBuffer.SRV;
      }
      local_2c8 = pTVar32->Reference;
      local_da8.field1_0x8 = local_2c0;
      local_1318 = &local_da8;
      uStack_1310 = 1;
      local_7d8._12_4_ = uStack_130c;
      local_7d8.ArrayNum = 1;
      local_da8._padding_._0_4_ = 0xffffffff;
      local_da8._padding_._4_2_ = 0xffff;
      local_da8.Type = UAV;
      local_da8.AccessBefore = SRVMask|VertexOrIndexBuffer;
      local_da8.AccessAfter = UAVCompute;
      local_da8.Flags = None;
      local_da8.CommitInfo.bIsSet = false;
      local_7d8.DataPtr = local_1318;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_7d8,None);
      pFVar29 = FRibbonOrderSortParameters::FTypeInfo::GetStructMetadata();
      local_12d8._s_0.Y = 1;
      local_12d8._s_0.Z = 1;
      local_12d8._s_0.X = uVar37;
      FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_12d8._s_0);
      pFVar30 = TShaderRefBase<FNiagaraRibbonSortPhase2CS,FShaderMapPointerTable>::GetComputeShader
                          (&local_1358);
      SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar30);
      local_7e8.ShaderContent = local_a98.ShaderContent;
      local_7e8.ShaderMap = local_a98.ShaderMap;
      ValidateShaderParameters(&local_7e8,pFVar29,&local_368);
      ::SetShaderParameters
                ((FRHIComputeCommandList *)param_1,pFVar30,&(local_a98.ShaderContent)->Bindings,
                 pFVar29,&local_368);
      FRHIComputeCommandList::DispatchComputeShader((FRHIComputeCommandList *)param_1,uVar37,1,1);
      pFVar30 = TShaderRefBase<FNiagaraRibbonSortPhase2CS,FShaderMapPointerTable>::GetComputeShader
                          (&local_1358);
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        pFVar31 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
        if ((((local_a98.ShaderContent)->Bindings).RootParameterBufferIndex != 0xffff) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                                ,0xb3,
                                L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
           bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        UnsetShaderUAVs(pFVar31,&(local_a98.ShaderContent)->Bindings);
        FRHIComputeCommandList::SetBatchedShaderUnbinds
                  ((FRHIComputeCommandList *)param_1,pFVar30,pFVar31);
      }
      local_dd8.field1_0x8 = local_2c0;
      local_7f8.DataPtr = &local_dd8;
      local_7f8._12_4_ = uStack_144c;
      local_7f8.ArrayNum = 1;
      local_dd8._padding_._0_4_ = 0xffffffff;
      local_dd8._padding_._4_2_ = 0xffff;
      local_dd8.Type = UAV;
      local_dd8.AccessBefore = UAVCompute;
      local_dd8.AccessAfter = SRVMask|VertexOrIndexBuffer;
      local_dd8.Flags = None;
      local_dd8.CommitInfo.bIsSet = false;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_7f8,None);
      iVar19 = iVar19 * 2;
      local_1428 = local_1428 - 1;
    } while (local_1428 != 0);
  }
  if ((local_13e0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_13e0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_13e0 & 4) != 0) {
    FThreadStats::AddMessage(local_13e8,CycleScopeEnd);
  }
  local_13e0 = 0;
  if (local_a78.bIsSet != false) {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_a78.TypedValue);
  }
  if ((local_13d0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_13d0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_13d0 & 4) != 0) {
    FThreadStats::AddMessage(local_13d8,CycleScopeEnd);
  }
  local_13d0 = 0;
  if (local_a60.bIsSet != false) {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_a60.TypedValue);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uStack_ae0 = 0xa58;
    local_ae8 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
    ;
    ::Desc._padding_ = CONCAT44(uStack_adc,0xa58);
    local_ad8 = 0;
    pwStack_ad0 = L"NiagaraRenderRibbonsAggregation";
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x51df5250;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l37::<lambda_5>::operator()<>'
           ::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar33 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar34 = FMemStackBase::Alloc(&pFVar33->Inner,0x50,8);
  pFVar34->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar34->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar34->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar34->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar34->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar34->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar34->Allocator = pFVar33;
  pFVar34->TraceCpuSpecId = 0;
  pFVar34->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar20 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar34->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar34->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar34->ID = uVar20;
  pFVar34->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar34[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar18 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar18)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar21 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (char *)::Desc._padding_,(uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar21;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar34->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_a18,(FRHIComputeCommandList *)param_1,pFVar34);
  local_a08 = '\x01';
  pFVar26 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar27 = (FShaderType *)FNiagaraRibbonVertexReductionInitializationCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (pFVar26,&local_a88,pFVar27,
             (this->GenerationConfig).bHasFullRibbonIDs +
             ((this->GenerationConfig).bHasSimpleRibbonIDs +
             ((this->GenerationConfig).bWantsConstantTessellation +
             ((this->GenerationConfig).bWantsAutomaticTessellation +
             (this->GenerationConfig).bHasTwist * 2) * 2) * 2) * 2);
  if (local_a88.ShaderContent == (FShader *)0x0) {
    FVar28 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_718);
    ::FName::ToString((FName *)FVar28,&local_838);
    FNiagaraRibbonVertexReductionInitializationCS::GetStaticType();
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_838.Data.AllocatorInstance.Data);
    }
    if (bVar18) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FNiagaraRibbonVertexReductionInitializationCS::GetStaticType();
  local_12a8.ShaderContent =
       (FNiagaraRibbonVertexReductionInitializationCS *)local_a88.ShaderContent;
  local_12a8.ShaderMap = local_a88.ShaderMap;
  pFVar26 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar27 = (FShaderType *)FNiagaraRibbonAggregationStepCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (pFVar26,&local_b68,pFVar27,
             (this->GenerationConfig).bHasFullRibbonIDs +
             ((this->GenerationConfig).bHasSimpleRibbonIDs +
             ((this->GenerationConfig).bWantsConstantTessellation +
             ((this->GenerationConfig).bWantsAutomaticTessellation +
             (this->GenerationConfig).bHasTwist * 2) * 2) * 2) * 2);
  if (local_b68.ShaderContent == (FShader *)0x0) {
    FVar28 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_720);
    ::FName::ToString((FName *)FVar28,&local_868);
    FNiagaraRibbonAggregationStepCS::GetStaticType();
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_868.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_868.Data.AllocatorInstance.Data);
    }
    if (bVar18) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FNiagaraRibbonAggregationStepCS::GetStaticType();
  local_1328.ShaderContent = (FNiagaraRibbonAggregationStepCS *)local_b68.ShaderContent;
  local_1328.ShaderMap = local_b68.ShaderMap;
  pFVar26 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar27 = (FShaderType *)FNiagaraRibbonAggregationApplyCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (pFVar26,&local_b58,pFVar27,
             (this->GenerationConfig).bHasFullRibbonIDs +
             ((this->GenerationConfig).bHasSimpleRibbonIDs +
             ((this->GenerationConfig).bWantsConstantTessellation +
             ((this->GenerationConfig).bWantsAutomaticTessellation +
             (this->GenerationConfig).bHasTwist * 2) * 2) * 2) * 2);
  if (CONCAT44(local_b58.ShaderContent._4_4_,local_b58.ShaderContent._0_4_) == 0) {
    FVar28 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_758);
    ::FName::ToString((FName *)FVar28,&local_878);
    FNiagaraRibbonAggregationApplyCS::GetStaticType();
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_878.Data.AllocatorInstance.Data);
    }
    if (bVar18) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FNiagaraRibbonAggregationApplyCS::GetStaticType();
  local_1360 = &local_1408;
  local_1408 = (FRHIUnorderedAccessView *)0x0;
  local_1410 = (FRHIShaderResourceView *)0x0;
  uVar20 = 1;
  if (uVar22 != 0) {
    uVar20 = uVar22;
  }
  local_1400[1] = 0;
  local_1298.ShaderContent._0_4_ = local_b58.ShaderContent._0_4_;
  local_1298.ShaderContent._4_4_ = local_b58.ShaderContent._4_4_;
  local_1298.ShaderMap._0_4_ = local_b58.ShaderMap._0_4_;
  local_1298.ShaderMap._4_4_ = local_b58.ShaderMap._4_4_;
  local_1370 = &local_1410;
  uVar2 = (ulonglong)(uVar20 - 1) * 2 + 1;
  lVar9 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  local_1378 = local_1400 + 1;
  local_1264 = (undefined4)lVar9;
  local_1368 = param_4;
  `FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l32::<lambda_6>::operator()(&local_1378);
  local_e08._padding_._0_4_ = 0xffffffff;
  local_480 = 0;
  local_490 = 0;
  local_470 = 0;
  local_460 = 0;
  uStack_458 = 0;
  local_444 = 0;
  local_43c = 0;
  local_e08._padding_._4_2_ = 0xffff;
  local_e08.Type = UAV;
  local_538.TotalNumParticlesDirect = local_f8.TotalNumParticlesDirect;
  local_538._4_4_ = local_f8._4_4_;
  local_538.EmitterParticleCountsBuffer = local_f8.EmitterParticleCountsBuffer;
  local_e08.AccessBefore = SRVMask;
  local_e08.AccessAfter = UAVMask;
  local_538.EmitterParticleCountsBufferOffset = local_f8.EmitterParticleCountsBufferOffset;
  local_538._20_4_ = local_f8._20_4_;
  local_538.NiagaraParticleDataFloat = local_f8.NiagaraParticleDataFloat;
  local_e08.Flags = None;
  local_e08.CommitInfo.bIsSet = false;
  local_538.NiagaraParticleDataHalf = local_f8.NiagaraParticleDataHalf;
  local_538.NiagaraParticleDataInt = local_f8.NiagaraParticleDataInt;
  local_538.NiagaraFloatDataStride = local_f8.NiagaraFloatDataStride;
  local_538.NiagaraIntDataStride = local_f8.NiagaraIntDataStride;
  local_538.RibbonIdDataOffset = local_f8.RibbonIdDataOffset;
  local_538.RibbonLinkOrderDataOffset = local_f8.RibbonLinkOrderDataOffset;
  local_538.PositionDataOffset = local_f8.PositionDataOffset;
  local_538.PrevPositionDataOffset = local_f8.PrevPositionDataOffset;
  local_538.VelocityDataOffset = local_f8.VelocityDataOffset;
  local_538.WidthDataOffset = local_f8.WidthDataOffset;
  local_538.PrevWidthDataOffset = local_f8.PrevWidthDataOffset;
  local_538.TwistDataOffset = local_f8.TwistDataOffset;
  local_538.PrevTwistDataOffset = local_f8.PrevTwistDataOffset;
  local_538.ColorDataOffset = local_f8.ColorDataOffset;
  local_538.FacingDataOffset = local_f8.FacingDataOffset;
  local_538.PrevFacingDataOffset = local_f8.PrevFacingDataOffset;
  local_538.NormalizedAgeDataOffset = local_f8.NormalizedAgeDataOffset;
  local_538.MaterialRandomDataOffset = local_f8.MaterialRandomDataOffset;
  local_538.MaterialParamValidMask = local_f8.MaterialParamValidMask;
  local_538.MaterialParamDataOffset = local_f8.MaterialParamDataOffset;
  local_538.MaterialParam1DataOffset = local_f8.MaterialParam1DataOffset;
  local_538.MaterialParam2DataOffset = local_f8.MaterialParam2DataOffset;
  local_498 = (this->VertexBuffers).SortedIndicesBuffer.SRV.Reference;
  local_538.MaterialParam3DataOffset = local_f8.MaterialParam3DataOffset;
  local_538.DistanceFromStartOffset = local_f8.DistanceFromStartOffset;
  local_538.U0OverrideDataOffset = local_f8.U0OverrideDataOffset;
  local_538.V0RangeOverrideDataOffset = local_f8.V0RangeOverrideDataOffset;
  local_448 = (this->GenerationConfig).CurveTension;
  if (__real_3f7d70a4 <= local_448) {
    local_448 = __real_3f7d70a4;
  }
  local_538.U1OverrideDataOffset = local_f8.U1OverrideDataOffset;
  local_538.V1RangeOverrideDataOffset = local_f8.V1RangeOverrideDataOffset;
  local_538.U0DistributionMode = local_f8.U0DistributionMode;
  local_538.U1DistributionMode = local_f8.U1DistributionMode;
  local_e08.field1_0x8 =
       (FRHITransitionInfo_u_8)(this->VertexBuffers).TangentsAndDistancesBuffer.UAV.Reference;
  local_478 = (FRHITransitionInfo_u_8)(this->VertexBuffers).MultiRibbonIndicesBuffer.UAV.Reference;
  local_468 = (FRHITransitionInfo_u_8)(this->VertexBuffers).SegmentsBuffer.UAV.Reference;
  local_450.UAV = local_1408;
  local_888.DataPtr = &local_e08;
  local_888._12_4_ = uStack_144c;
  local_888.ArrayNum = 1;
  FStack_488 = local_e08.field1_0x8;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_888,None);
  local_e38.field1_0x8 = local_478;
  local_898.DataPtr = &local_e38;
  local_898._12_4_ = uStack_144c;
  local_898.ArrayNum = 1;
  local_e38._padding_._0_4_ = 0xffffffff;
  local_e38._padding_._4_2_ = 0xffff;
  local_e38.Type = UAV;
  local_e38.AccessBefore = SRVMask;
  local_e38.AccessAfter = UAVMask;
  local_e38.Flags = None;
  local_e38.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_898,None);
  local_e68.field1_0x8 = local_468;
  local_8a8.DataPtr = &local_e68;
  local_8a8._12_4_ = uStack_144c;
  local_8a8.ArrayNum = 1;
  local_e68._padding_._0_4_ = 0xffffffff;
  local_e68._padding_._4_2_ = 0xffff;
  local_e68.Type = UAV;
  local_e68.AccessBefore = SRVMask;
  local_e68.AccessAfter = UAVMask;
  local_e68.Flags = None;
  local_e68.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_8a8,None);
  local_e98.field1_0x8 = local_450;
  local_8b8.DataPtr = &local_e98;
  local_8b8._12_4_ = uStack_144c;
  local_8b8.ArrayNum = 1;
  local_e98._padding_._0_4_ = 0xffffffff;
  local_e98._padding_._4_2_ = 0xffff;
  local_e98.Type = UAV;
  local_e98.AccessBefore = SRVMask;
  local_e98.AccessAfter = UAVMask;
  local_e98.Flags = None;
  local_e98.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_8b8,None);
  uVar20 = uVar22 + 0x3f >> 6;
  pFVar29 = FNiagaraRibbonVertexReductionParameters::FTypeInfo::GetStructMetadata();
  local_12c8._s_0.Y = 1;
  local_12c8._s_0.Z = 1;
  local_12c8._s_0.X = uVar20;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_12c8._s_0);
  pFVar30 = TShaderRefBase<FNiagaraRibbonVertexReductionInitializationCS,FShaderMapPointerTable>::
            GetComputeShader(&local_12a8);
  SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar30);
  local_8c8.ShaderContent = local_a88.ShaderContent;
  local_8c8.ShaderMap = local_a88.ShaderMap;
  ValidateShaderParameters(&local_8c8,pFVar29,&local_538);
  ::SetShaderParameters
            ((FRHIComputeCommandList *)param_1,pFVar30,&(local_a88.ShaderContent)->Bindings,pFVar29,
             &local_538);
  FRHIComputeCommandList::DispatchComputeShader((FRHIComputeCommandList *)param_1,uVar20,1,1);
  pFVar30 = TShaderRefBase<FNiagaraRibbonVertexReductionInitializationCS,FShaderMapPointerTable>::
            GetComputeShader(&local_12a8);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar31 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((((local_a88.ShaderContent)->Bindings).RootParameterBufferIndex != 0xffff) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    UnsetShaderUAVs(pFVar31,&(local_a88.ShaderContent)->Bindings);
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)param_1,pFVar30,pFVar31);
  }
  local_ec8.field1_0x8 = FStack_488;
  local_8d8.DataPtr = &local_ec8;
  local_8d8._12_4_ = uStack_144c;
  local_8d8.ArrayNum = 1;
  local_ec8._padding_._0_4_ = 0xffffffff;
  local_ec8._padding_._4_2_ = 0xffff;
  local_ec8.Type = UAV;
  local_ec8.AccessBefore = UAVMask;
  local_ec8.AccessAfter = SRVMask;
  local_ec8.Flags = None;
  local_ec8.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_8d8,None);
  local_10a8.field1_0x8 = local_478;
  local_738.DataPtr = &local_10a8;
  local_738._12_4_ = uStack_144c;
  local_738.ArrayNum = 1;
  local_10a8._padding_._0_4_ = 0xffffffff;
  local_10a8._padding_._4_2_ = 0xffff;
  local_10a8.Type = UAV;
  local_10a8.AccessBefore = UAVMask;
  local_10a8.AccessAfter = SRVMask;
  local_10a8.Flags = None;
  local_10a8.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_738,None);
  local_1108.field1_0x8 = local_468;
  local_858.DataPtr = &local_1108;
  local_858._12_4_ = uStack_144c;
  local_858.ArrayNum = 1;
  local_1108._padding_._0_4_ = 0xffffffff;
  local_1108._padding_._4_2_ = 0xffff;
  local_1108.Type = UAV;
  local_1108.AccessBefore = UAVMask;
  local_1108.AccessAfter = SRVMask;
  local_1108.Flags = None;
  local_1108.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_858,None);
  local_10d8.field1_0x8 = local_450;
  local_848.DataPtr = &local_10d8;
  local_848._12_4_ = uStack_144c;
  local_848.ArrayNum = 1;
  local_10d8._padding_._0_4_ = 0xffffffff;
  local_10d8._padding_._4_2_ = 0xffff;
  local_10d8.Type = UAV;
  local_10d8.AccessBefore = UAVMask;
  local_10d8.AccessAfter = SRVMask;
  local_10d8.Flags = None;
  local_10d8.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_848,None);
  pFVar16 = local_1328.ShaderContent;
  pFVar15 = local_1368;
  local_1ec = 0;
  local_200 = (FRHIShaderResourceView *)0x0;
  FStack_1f8.Resource = (FRHIResource *)0x0;
  local_2a8.TotalNumParticlesDirect = local_f8.TotalNumParticlesDirect;
  local_2a8._4_4_ = local_f8._4_4_;
  local_2a8.EmitterParticleCountsBuffer = local_f8.EmitterParticleCountsBuffer;
  local_2a8.EmitterParticleCountsBufferOffset = local_f8.EmitterParticleCountsBufferOffset;
  local_2a8._20_4_ = local_f8._20_4_;
  local_2a8.NiagaraParticleDataFloat = local_f8.NiagaraParticleDataFloat;
  local_2a8.NiagaraParticleDataHalf = local_f8.NiagaraParticleDataHalf;
  local_2a8.NiagaraParticleDataInt = local_f8.NiagaraParticleDataInt;
  local_2a8.NiagaraFloatDataStride = local_f8.NiagaraFloatDataStride;
  local_2a8.NiagaraIntDataStride = local_f8.NiagaraIntDataStride;
  local_2a8.RibbonIdDataOffset = local_f8.RibbonIdDataOffset;
  local_2a8.RibbonLinkOrderDataOffset = local_f8.RibbonLinkOrderDataOffset;
  local_2a8.PositionDataOffset = local_f8.PositionDataOffset;
  local_2a8.PrevPositionDataOffset = local_f8.PrevPositionDataOffset;
  local_2a8.VelocityDataOffset = local_f8.VelocityDataOffset;
  local_2a8.WidthDataOffset = local_f8.WidthDataOffset;
  local_2a8.PrevWidthDataOffset = local_f8.PrevWidthDataOffset;
  local_2a8.TwistDataOffset = local_f8.TwistDataOffset;
  local_2a8.PrevTwistDataOffset = local_f8.PrevTwistDataOffset;
  local_2a8.ColorDataOffset = local_f8.ColorDataOffset;
  local_2a8.FacingDataOffset = local_f8.FacingDataOffset;
  local_2a8.PrevFacingDataOffset = local_f8.PrevFacingDataOffset;
  local_2a8.NormalizedAgeDataOffset = local_f8.NormalizedAgeDataOffset;
  local_2a8.MaterialRandomDataOffset = local_f8.MaterialRandomDataOffset;
  local_2a8.MaterialParamValidMask = local_f8.MaterialParamValidMask;
  local_2a8.MaterialParamDataOffset = local_f8.MaterialParamDataOffset;
  local_2a8.MaterialParam1DataOffset = local_f8.MaterialParam1DataOffset;
  local_2a8.MaterialParam2DataOffset = local_f8.MaterialParam2DataOffset;
  local_208 = (this->VertexBuffers).SortedIndicesBuffer.SRV.Reference;
  local_2a8.MaterialParam3DataOffset = local_f8.MaterialParam3DataOffset;
  local_2a8.DistanceFromStartOffset = local_f8.DistanceFromStartOffset;
  local_2a8.U0OverrideDataOffset = local_f8.U0OverrideDataOffset;
  local_2a8.V0RangeOverrideDataOffset = local_f8.V0RangeOverrideDataOffset;
  local_2a8.U1OverrideDataOffset = local_f8.U1OverrideDataOffset;
  local_2a8.V1RangeOverrideDataOffset = local_f8.V1RangeOverrideDataOffset;
  local_2a8.U0DistributionMode = local_f8.U0DistributionMode;
  local_2a8.U1DistributionMode = local_f8.U1DistributionMode;
  local_1f0 = 1;
  local_9a8.ShaderMap._0_4_ = local_b58.ShaderMap._0_4_;
  local_9a8.ShaderMap._4_4_ = local_b58.ShaderMap._4_4_;
  if (1 < uVar22) {
    do {
      puVar14 = local_1378;
      pFVar6 = local_1410;
      *local_1378 = *local_1378 ^ 1;
      if (*puVar14 == 0) {
        pFVar7 = pFVar15->TransientAccumulation[1].SRV.Reference;
        if (local_1410 != pFVar7) {
          local_1410 = pFVar7;
          if (pFVar7 != (FRHIShaderResourceView *)0x0) {
            FRHIResource::AddRef((FRHIResource *)pFVar7);
          }
          if (pFVar6 != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)pFVar6);
          }
        }
        pFVar36 = pFVar15->TransientAccumulation[0].UAV.Reference;
      }
      else {
        pFVar7 = pFVar15->TransientAccumulation[0].SRV.Reference;
        if (local_1410 != pFVar7) {
          local_1410 = pFVar7;
          if (pFVar7 != (FRHIShaderResourceView *)0x0) {
            FRHIResource::AddRef((FRHIResource *)pFVar7);
          }
          if (pFVar6 != (FRHIShaderResourceView *)0x0) {
            FRHIResource::Release((FRHIResource *)pFVar6);
          }
        }
        pFVar36 = pFVar15->TransientAccumulation[1].UAV.Reference;
      }
      this_00 = local_1408;
      if (local_1408 != pFVar36) {
        local_1408 = pFVar36;
        if (pFVar36 != (FRHIUnorderedAccessView *)0x0) {
          FRHIResource::AddRef((FRHIResource *)pFVar36);
        }
        if (this_00 != (FRHIUnorderedAccessView *)0x0) {
          FRHIResource::Release((FRHIResource *)this_00);
        }
      }
      local_200 = local_1410;
      FStack_1f8.UAV = local_1408;
      local_1048.field1_0x8.UAV = local_1408;
      local_6d8.DataPtr = &local_1048;
      local_6d8._12_4_ = uStack_144c;
      local_6d8.ArrayNum = 1;
      local_1048._padding_._0_4_ = 0xffffffff;
      local_1048._padding_._4_2_ = 0xffff;
      local_1048.Type = UAV;
      local_1048.AccessBefore = SRVMask;
      local_1048.AccessAfter = UAVCompute;
      local_1048.Flags = None;
      local_1048.CommitInfo.bIsSet = false;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_6d8,None);
      pFVar29 = FNiagaraRibbonAggregationStepParameters::FTypeInfo::GetStructMetadata();
      local_12b8._s_0.Y = 1;
      local_12b8._s_0.Z = 1;
      local_12b8._s_0.X = uVar20;
      FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_12b8._s_0);
      pFVar30 = TShaderRefBase<FNiagaraRibbonAggregationStepCS,FShaderMapPointerTable>::
                GetComputeShader(&local_1328);
      SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar30);
      local_828.ShaderContent = (FShader *)local_1328.ShaderContent;
      local_828.ShaderMap = local_1328.ShaderMap;
      ValidateShaderParameters(&local_828,pFVar29,&local_2a8);
      ::SetShaderParameters
                ((FRHIComputeCommandList *)param_1,pFVar30,(FShaderParameterBindings *)pFVar16,
                 pFVar29,&local_2a8);
      FRHIComputeCommandList::DispatchComputeShader((FRHIComputeCommandList *)param_1,uVar20,1,1);
      pFVar30 = TShaderRefBase<FNiagaraRibbonAggregationStepCS,FShaderMapPointerTable>::
                GetComputeShader(&local_1328);
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        pFVar31 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
        if ((((FShaderParameterBindings *)&pFVar16->field_0x0)->RootParameterBufferIndex != 0xffff)
           && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                                   ,0xb3,
                                   L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.")
              , bVar18)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        UnsetShaderUAVs(pFVar31,(FShaderParameterBindings *)pFVar16);
        FRHIComputeCommandList::SetBatchedShaderUnbinds
                  ((FRHIComputeCommandList *)param_1,pFVar30,pFVar31);
      }
      local_1078.field1_0x8 = FStack_1f8;
      local_1318 = &local_1078;
      uStack_1310 = 1;
      local_818._12_4_ = uStack_130c;
      local_818.ArrayNum = 1;
      local_1078._padding_._0_4_ = 0xffffffff;
      local_1078._padding_._4_2_ = 0xffff;
      local_1078.Type = UAV;
      local_1078.AccessBefore = UAVCompute;
      local_1078.AccessAfter = SRVMask;
      local_1078.Flags = None;
      local_1078.CommitInfo.bIsSet = false;
      local_818.DataPtr = local_1318;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_818,None);
      local_1f0 = local_1f0 * 2;
      local_b58.ShaderContent._0_4_ = local_1298.ShaderContent._0_4_;
      local_b58.ShaderContent._4_4_ = local_1298.ShaderContent._4_4_;
      local_9a8.ShaderMap._0_4_ = local_1298.ShaderMap._0_4_;
      local_9a8.ShaderMap._4_4_ = local_1298.ShaderMap._4_4_;
    } while (local_1f0 < uVar22);
  }
  `FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l32::<lambda_6>::operator()(&local_1378);
  local_1018._padding_._0_4_ = 0xffffffff;
  local_438.TotalNumParticlesDirect = local_f8.TotalNumParticlesDirect;
  local_438._4_4_ = local_f8._4_4_;
  local_438.EmitterParticleCountsBuffer = local_f8.EmitterParticleCountsBuffer;
  local_1018.Type = UAV;
  local_1018.AccessBefore = SRVMask;
  local_438.EmitterParticleCountsBufferOffset = local_f8.EmitterParticleCountsBufferOffset;
  local_438._20_4_ = local_f8._20_4_;
  local_438.NiagaraParticleDataFloat = local_f8.NiagaraParticleDataFloat;
  local_1018.AccessAfter = UAVMask;
  local_1018.Flags = None;
  local_438.NiagaraParticleDataHalf = local_f8.NiagaraParticleDataHalf;
  local_438.NiagaraParticleDataInt = local_f8.NiagaraParticleDataInt;
  local_1018.CommitInfo.bIsSet = false;
  local_438.NiagaraFloatDataStride = local_f8.NiagaraFloatDataStride;
  local_438.NiagaraIntDataStride = local_f8.NiagaraIntDataStride;
  local_438.RibbonIdDataOffset = local_f8.RibbonIdDataOffset;
  local_438.RibbonLinkOrderDataOffset = local_f8.RibbonLinkOrderDataOffset;
  local_438.PositionDataOffset = local_f8.PositionDataOffset;
  local_438.PrevPositionDataOffset = local_f8.PrevPositionDataOffset;
  local_438.VelocityDataOffset = local_f8.VelocityDataOffset;
  local_438.WidthDataOffset = local_f8.WidthDataOffset;
  local_438.PrevWidthDataOffset = local_f8.PrevWidthDataOffset;
  local_438.TwistDataOffset = local_f8.TwistDataOffset;
  local_438.PrevTwistDataOffset = local_f8.PrevTwistDataOffset;
  local_438.ColorDataOffset = local_f8.ColorDataOffset;
  local_438.FacingDataOffset = local_f8.FacingDataOffset;
  local_438.PrevFacingDataOffset = local_f8.PrevFacingDataOffset;
  local_438.NormalizedAgeDataOffset = local_f8.NormalizedAgeDataOffset;
  local_438.MaterialRandomDataOffset = local_f8.MaterialRandomDataOffset;
  local_438.MaterialParamValidMask = local_f8.MaterialParamValidMask;
  local_438.MaterialParamDataOffset = local_f8.MaterialParamDataOffset;
  local_438.MaterialParam1DataOffset = local_f8.MaterialParam1DataOffset;
  local_438.MaterialParam2DataOffset = local_f8.MaterialParam2DataOffset;
  local_398 = (this->VertexBuffers).SortedIndicesBuffer.SRV.Reference;
  local_438.MaterialParam3DataOffset = local_f8.MaterialParam3DataOffset;
  local_438.DistanceFromStartOffset = local_f8.DistanceFromStartOffset;
  local_438.U0OverrideDataOffset = local_f8.U0OverrideDataOffset;
  local_438.V0RangeOverrideDataOffset = local_f8.V0RangeOverrideDataOffset;
  local_438.U1OverrideDataOffset = local_f8.U1OverrideDataOffset;
  local_438.V1RangeOverrideDataOffset = local_f8.V1RangeOverrideDataOffset;
  local_438.U0DistributionMode = local_f8.U0DistributionMode;
  local_438.U1DistributionMode = local_f8.U1DistributionMode;
  local_1018.field1_0x8 =
       (FRHITransitionInfo_u_8)(this->VertexBuffers).TangentsAndDistancesBuffer.UAV.Reference;
  local_390 = local_1410;
  local_380 = (FRHITransitionInfo_u_8)(this->VertexBuffers).MultiRibbonIndicesBuffer.UAV.Reference;
  local_1018._padding_._4_2_ = 0xffff;
  local_378 = (FRHITransitionInfo_u_8)(param_4->TransientTessellationStats).UAV.Reference;
  local_370 = (FRHITransitionInfo_u_8)(this->VertexBuffers).SegmentsBuffer.UAV.Reference;
  local_9e8.DataPtr = &local_1018;
  local_9e8._12_4_ = uStack_144c;
  local_9e8.ArrayNum = 1;
  local_388 = local_1018.field1_0x8;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_9e8,None);
  local_fe8.field1_0x8 = local_380;
  local_9d8.DataPtr = &local_fe8;
  local_9d8._12_4_ = uStack_144c;
  local_9d8.ArrayNum = 1;
  local_fe8._padding_._0_4_ = 0xffffffff;
  local_fe8._padding_._4_2_ = 0xffff;
  local_fe8.Type = UAV;
  local_fe8.AccessBefore = SRVMask;
  local_fe8.AccessAfter = UAVMask;
  local_fe8.Flags = None;
  local_fe8.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_9d8,None);
  local_fb8.field1_0x8 = local_370;
  local_fb8._padding_._0_4_ = 0xffffffff;
  local_fb8._padding_._4_2_ = 0xffff;
  local_fb8.Type = UAV;
  local_9c8.DataPtr = &local_fb8;
  local_9c8._12_4_ = uStack_144c;
  local_9c8.ArrayNum = 1;
  local_fb8.AccessBefore = SRVMask;
  local_fb8.AccessAfter = UAVMask;
  local_fb8.Flags = None;
  local_fb8.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_9c8,None);
  local_1138.field1_0x8 = local_378;
  local_9b8.DataPtr = &local_1138;
  local_9b8._12_4_ = uStack_144c;
  local_9b8.ArrayNum = 1;
  local_1138._padding_._0_4_ = 0xffffffff;
  local_1138._padding_._4_2_ = 0xffff;
  local_1138.Type = UAV;
  local_1138.AccessBefore = SRVMask;
  local_1138.AccessAfter = UAVMask;
  local_1138.Flags = None;
  local_1138.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_9b8,None);
  pFVar29 = FNiagaraRibbonAggregationApplyParameters::FTypeInfo::GetStructMetadata();
  local_1308._s_0.Y = 1;
  local_1308._s_0.Z = 1;
  local_1308._s_0.X = uVar20;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_1308._s_0);
  pFVar30 = TShaderRefBase<FNiagaraRibbonAggregationApplyCS,FShaderMapPointerTable>::
            GetComputeShader(&local_1298);
  SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar30);
  local_9a8.ShaderContent._0_4_ = local_b58.ShaderContent._0_4_;
  local_9a8.ShaderContent._4_4_ = local_b58.ShaderContent._4_4_;
  ValidateShaderParameters(&local_9a8,pFVar29,&local_438);
  pFVar11 = (FShaderParameterBindings *)
            CONCAT44(local_b58.ShaderContent._4_4_,local_b58.ShaderContent._0_4_);
  ::SetShaderParameters((FRHIComputeCommandList *)param_1,pFVar30,pFVar11,pFVar29,&local_438);
  FRHIComputeCommandList::DispatchComputeShader((FRHIComputeCommandList *)param_1,uVar20,1,1);
  pFVar30 = TShaderRefBase<FNiagaraRibbonAggregationApplyCS,FShaderMapPointerTable>::
            GetComputeShader(&local_1298);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar31 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if ((pFVar11->RootParameterBufferIndex != 0xffff) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    UnsetShaderUAVs(pFVar31,pFVar11);
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)param_1,pFVar30,pFVar31);
  }
  local_1168.field1_0x8 = local_388;
  local_998.DataPtr = &local_1168;
  local_998._12_4_ = uStack_144c;
  local_998.ArrayNum = 1;
  local_1168._padding_._0_4_ = 0xffffffff;
  local_1168._padding_._4_2_ = 0xffff;
  local_1168.Type = UAV;
  local_1168.AccessBefore = UAVMask;
  local_1168.AccessAfter = SRVMask;
  local_1168.Flags = None;
  local_1168.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_998,None);
  local_1198.field1_0x8 = local_380;
  local_988.DataPtr = &local_1198;
  local_988._12_4_ = uStack_144c;
  local_988.ArrayNum = 1;
  local_1198._padding_._0_4_ = 0xffffffff;
  local_1198._padding_._4_2_ = 0xffff;
  local_1198.Type = UAV;
  local_1198.AccessBefore = UAVMask;
  local_1198.AccessAfter = SRVMask;
  local_1198.Flags = None;
  local_1198.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_988,None);
  local_11c8.field1_0x8 = local_370;
  local_978.DataPtr = &local_11c8;
  local_978._12_4_ = uStack_144c;
  local_978.ArrayNum = 1;
  local_11c8._padding_._0_4_ = 0xffffffff;
  local_11c8._padding_._4_2_ = 0xffff;
  local_11c8.Type = UAV;
  local_11c8.AccessBefore = UAVMask;
  local_11c8.AccessAfter = SRVMask;
  local_11c8.Flags = None;
  local_11c8.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_978,None);
  local_11f8.field1_0x8 = local_378;
  local_968.DataPtr = &local_11f8;
  local_968._12_4_ = uStack_144c;
  local_968.ArrayNum = 1;
  local_11f8._padding_._0_4_ = 0xffffffff;
  local_11f8._padding_._4_2_ = 0xffff;
  local_11f8.Type = UAV;
  local_11f8.AccessBefore = UAVMask;
  local_11f8.AccessAfter = SRVMask;
  local_11f8.Flags = None;
  local_11f8.CommitInfo.bIsSet = false;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_968,None);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uStack_ac0 = 0xae1;
    local_ac8 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
    ;
    ::Desc._padding_ = CONCAT44(uStack_abc,0xae1);
    pwStack_ab0 = L"NiagaraRenderRibbonsGenVerticesReductionPhase2GPU";
    local_ab8 = 0;
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x51df5290;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l48::<lambda_7>::operator()<>'
           ::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar33 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar34 = FMemStackBase::Alloc(&pFVar33->Inner,0x50,8);
  pFVar34->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar34->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar34->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar34->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar34->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar34->TraceCpuSpecId = 0;
  pFVar34->TraceCpuMetadataId = 0;
  pFVar34->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar34->Allocator = pFVar33;
  LOCK();
  UNLOCK();
  uVar22 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar34->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar34->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar34->ID = uVar22;
  pFVar34->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar34[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar18 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar18)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar21 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (char *)::Desc._padding_,(uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar21;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar34->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_a48,(FRHIComputeCommandList *)param_1,pFVar34);
  local_a38 = '\x01';
  local_100 = 0;
  local_1e8.TotalNumParticlesDirect = local_f8.TotalNumParticlesDirect;
  local_1e8._4_4_ = local_f8._4_4_;
  local_1e8.EmitterParticleCountsBuffer = local_f8.EmitterParticleCountsBuffer;
  local_1e8.EmitterParticleCountsBufferOffset = local_f8.EmitterParticleCountsBufferOffset;
  local_1e8._20_4_ = local_f8._20_4_;
  local_1e8.NiagaraParticleDataFloat = local_f8.NiagaraParticleDataFloat;
  local_1e8.NiagaraParticleDataHalf = local_f8.NiagaraParticleDataHalf;
  local_1e8.NiagaraParticleDataInt = local_f8.NiagaraParticleDataInt;
  local_1e8.NiagaraFloatDataStride = local_f8.NiagaraFloatDataStride;
  local_1e8.NiagaraIntDataStride = local_f8.NiagaraIntDataStride;
  local_1e8.RibbonIdDataOffset = local_f8.RibbonIdDataOffset;
  local_1e8.RibbonLinkOrderDataOffset = local_f8.RibbonLinkOrderDataOffset;
  local_1e8.PositionDataOffset = local_f8.PositionDataOffset;
  local_1e8.PrevPositionDataOffset = local_f8.PrevPositionDataOffset;
  local_1e8.VelocityDataOffset = local_f8.VelocityDataOffset;
  local_1e8.WidthDataOffset = local_f8.WidthDataOffset;
  local_1e8.PrevWidthDataOffset = local_f8.PrevWidthDataOffset;
  local_1e8.TwistDataOffset = local_f8.TwistDataOffset;
  local_1e8.PrevTwistDataOffset = local_f8.PrevTwistDataOffset;
  local_1e8.ColorDataOffset = local_f8.ColorDataOffset;
  local_1e8.FacingDataOffset = local_f8.FacingDataOffset;
  local_1e8.PrevFacingDataOffset = local_f8.PrevFacingDataOffset;
  local_1e8.NormalizedAgeDataOffset = local_f8.NormalizedAgeDataOffset;
  local_1e8.MaterialRandomDataOffset = local_f8.MaterialRandomDataOffset;
  local_1e8.MaterialParamValidMask = local_f8.MaterialParamValidMask;
  local_1e8.MaterialParamDataOffset = local_f8.MaterialParamDataOffset;
  local_1e8.MaterialParam1DataOffset = local_f8.MaterialParam1DataOffset;
  local_1e8.MaterialParam2DataOffset = local_f8.MaterialParam2DataOffset;
  local_148 = (this->VertexBuffers).SortedIndicesBuffer.SRV.Reference;
  local_1e8.MaterialParam3DataOffset = local_f8.MaterialParam3DataOffset;
  local_1e8.DistanceFromStartOffset = local_f8.DistanceFromStartOffset;
  local_1e8.U0OverrideDataOffset = local_f8.U0OverrideDataOffset;
  local_1e8.V0RangeOverrideDataOffset = local_f8.V0RangeOverrideDataOffset;
  local_1e8.U1OverrideDataOffset = local_f8.U1OverrideDataOffset;
  local_1e8.V1RangeOverrideDataOffset = local_f8.V1RangeOverrideDataOffset;
  local_1e8.U0DistributionMode = local_f8.U0DistributionMode;
  local_1e8.U1DistributionMode = local_f8.U1DistributionMode;
  local_140 = (this->VertexBuffers).TangentsAndDistancesBuffer.SRV.Reference;
  local_138 = (this->VertexBuffers).MultiRibbonIndicesBuffer.SRV.Reference;
  local_130 = (this->VertexBuffers).SegmentsBuffer.SRV.Reference;
  local_108 = 0;
  local_104 = 0x40;
  local_128 = (param_4->TransientTessellationStats).SRV.Reference;
  local_120 = local_1410;
  local_118 = (this->VertexBuffers).RibbonLookupTableBuffer.UAV.Reference;
  local_110 = (this->VertexBuffers).GPUComputeCommandBuffer.UAV.Reference;
  pFVar26 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar27 = (FShaderType *)FNiagaraRibbonVertexReductionFinalizeCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (pFVar26,&local_1288,pFVar27,
             (this->GenerationConfig).bHasFullRibbonIDs +
             ((this->GenerationConfig).bHasSimpleRibbonIDs +
             ((this->GenerationConfig).bWantsConstantTessellation +
             ((this->GenerationConfig).bWantsAutomaticTessellation +
             (this->GenerationConfig).bHasTwist * 2) * 2) * 2) * 2);
  if (local_1288.ShaderContent == (FShader *)0x0) {
    FVar28 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_728);
    ::FName::ToString((FName *)FVar28,&local_958);
    FNiagaraRibbonVertexReductionFinalizeCS::GetStaticType();
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_958.Data.AllocatorInstance.Data);
    }
    if (bVar18) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FNiagaraRibbonVertexReductionFinalizeCS::GetStaticType();
  pFVar17 = local_1288.ShaderContent;
  local_1260.ShaderMap = local_1288.ShaderMap;
  local_1260.ShaderContent = (FNiagaraRibbonVertexReductionFinalizeCS *)local_1288.ShaderContent;
  if (((this->GenerationConfig).bHasFullRibbonIDs != 0) ||
     (uVar22 = 1, (this->GenerationConfig).bHasSimpleRibbonIDs != 0)) {
    uVar22 = uVar20;
  }
  local_ce8.field1_0x8 =
       (FRHITransitionInfo_u_8)(this->VertexBuffers).RibbonLookupTableBuffer.Buffer.Reference;
  local_cb0 = (this->VertexBuffers).GPUComputeCommandBuffer.Buffer.Reference;
  local_b48 = &local_ce8;
  local_ce8._padding_._4_2_ = 0xffff;
  local_cb4 = 0xffff;
  uStack_b40 = 2;
  local_948._12_4_ = uStack_b3c;
  local_948.ArrayNum = 2;
  local_ce8._padding_._0_4_ = 0xffffffff;
  local_ce8.Type = Buffer;
  local_ce8.AccessBefore = SRVMask;
  local_ce8.AccessAfter = UAVCompute;
  local_ce8.Flags = None;
  local_ce8.CommitInfo.bIsSet = false;
  local_cb8 = 0xffffffff;
  local_ca8 = 2;
  local_ca4 = 0x74;
  local_ca0 = 0x400;
  local_c9c = 0;
  local_c90 = 0;
  local_948.DataPtr = local_b48;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_948,None);
  pFVar29 = FNiagaraRibbonVertexReductionFinalizationParameters::FTypeInfo::GetStructMetadata();
  local_12f8._s_0.Y = 1;
  local_12f8._s_0.Z = 1;
  local_12f8._s_0.X = uVar22;
  FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_12f8._s_0);
  pFVar30 = TShaderRefBase<FNiagaraRibbonVertexReductionFinalizeCS,FShaderMapPointerTable>::
            GetComputeShader(&local_1260);
  SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar30);
  local_938.ShaderContent = local_1288.ShaderContent;
  local_938.ShaderMap = local_1288.ShaderMap;
  ValidateShaderParameters(&local_938,pFVar29,&local_1e8);
  ::SetShaderParameters
            ((FRHIComputeCommandList *)param_1,pFVar30,&pFVar17->Bindings,pFVar29,&local_1e8);
  FRHIComputeCommandList::DispatchComputeShader((FRHIComputeCommandList *)param_1,uVar22,1,1);
  pFVar30 = TShaderRefBase<FNiagaraRibbonVertexReductionFinalizeCS,FShaderMapPointerTable>::
            GetComputeShader(&local_1260);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar31 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if (((pFVar17->Bindings).RootParameterBufferIndex != 0xffff) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    UnsetShaderUAVs(pFVar31,&pFVar17->Bindings);
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)param_1,pFVar30,pFVar31);
  }
  local_c88.field1_0x8 =
       (FRHITransitionInfo_u_8)(this->VertexBuffers).RibbonLookupTableBuffer.Buffer.Reference;
  local_c50 = (this->VertexBuffers).GPUComputeCommandBuffer.Buffer.Reference;
  local_b38 = &local_c88;
  uStack_b30 = 2;
  local_928._12_4_ = uStack_b2c;
  local_928.ArrayNum = 2;
  local_c88._padding_._0_4_ = 0xffffffff;
  local_c88._padding_._4_2_ = 0xffff;
  local_c88.Type = Buffer;
  local_c88.AccessBefore = UAVCompute;
  local_c88.AccessAfter = UAVCompute;
  local_c88.Flags = None;
  local_c88.CommitInfo.bIsSet = false;
  local_c58 = 0xffffffff;
  local_c54 = 0xffff;
  local_c48 = 2;
  local_c44 = 0x400;
  local_c40 = 0x74;
  local_c3c = 0;
  local_c30 = 0;
  local_928.DataPtr = local_b38;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_928,None);
  if (local_a38 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_a48);
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    uStack_b00 = 0xb0b;
    local_b08 = 
    "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
    ;
    ::Desc._padding_ = CONCAT44(uStack_afc,0xb0b);
    local_af8 = 0;
    pwStack_af0 = L"NiagaraRenderRibbonsGenVerticesMultiRibbonInitGPU";
    ::Desc._padding_ = (longlong)::s_C__Workspace_UnrealEngine_Engin;
    ::Desc._padding_._0_4_ = 0;
    ::Desc._padding_._4_4_ = 0;
    ::Desc._padding_._0_4_ = 0x51df5300;
    ::Desc._padding_._4_4_ = 1;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
    ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
    ::Desc.TraceGpuSpecId = 0;
    ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
    atexit(``FNiagaraRendererRibbons::InitializeVertexBuffersGPU'::__l54::<lambda_8>::operator()<>'
           ::__l2::_dynamic_atexit_destructor_for__Desc__);
    _Init_thread_footer(&::_TSS0);
  }
  pFVar33 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
  pFVar34 = FMemStackBase::Alloc(&pFVar33->Inner,0x50,8);
  pFVar34->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
  pFVar34->Parent = FRHIBreadcrumbNode::Sentinel;
  pFVar34->ListLink = (FRHIBreadcrumbNode *)0x0;
  (pFVar34->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
  (pFVar34->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
  pFVar34->Allocator = pFVar33;
  pFVar34->Data = (FRHIBreadcrumbData *)&::Desc;
  pFVar34->TraceCpuSpecId = 0;
  pFVar34->TraceCpuMetadataId = 0;
  LOCK();
  UNLOCK();
  uVar22 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
  FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
  pFVar34->BeginPipes = (atomic<unsigned_char>)0x0;
  pFVar34->EndPipes = (atomic<unsigned_char>)0x0;
  pFVar34->ID = uVar22;
  pFVar34->_padding_ =
       (longlong)
       &
       ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
  ;
  pFVar34[1]._padding_ = (longlong)&::Desc;
  if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
     (bVar18 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar18)) {
    EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
      aVar21 = (atomic<unsigned_int>)
               FCpuProfilerTrace::OutputEventType
                         ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                          (char *)::Desc._padding_,(uint)::Desc._padding_);
      LOCK();
      ::Desc.TraceCpuSpecId = aVar21;
      UNLOCK();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
  }
  pFVar34->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
  FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_a30,(FRHIComputeCommandList *)param_1,pFVar34);
  local_a20 = '\x01';
  TVar23 = FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitGPU,1>
           ::GetStatId((FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitGPU,1>
                        *)&StatPtr_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitGPU);
  local_f68.Impl._Line = 0xb0c;
  local_f68.Impl._Column = 4;
  local_f68.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
  ;
  local_f68.Impl._Function =
       "void __cdecl FNiagaraRendererRibbons::InitializeVertexBuffersGPU(class FRHICommandListImmediate &,class FNiagaraGpuComputeDispatchInterface *,const struct FNiagaraRibbonGPUInitParameters &,struct FNiagaraRibbonGPUInitComputeBuffers &,const class TSharedPtr<struct FNiagaraRibbonRenderingFrameResources,1> &) const"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_13c8,*(TStatIdData **)&(TVar23.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_f68);
  local_600 = 0;
  local_5d0 = 0;
  local_5a4 = 0;
  local_59c = 0;
  local_6c8.TotalNumParticlesDirect = local_f8.TotalNumParticlesDirect;
  local_6c8._4_4_ = local_f8._4_4_;
  local_6c8.EmitterParticleCountsBuffer = local_f8.EmitterParticleCountsBuffer;
  local_6c8.EmitterParticleCountsBufferOffset = local_f8.EmitterParticleCountsBufferOffset;
  local_6c8._20_4_ = local_f8._20_4_;
  local_6c8.NiagaraParticleDataFloat = local_f8.NiagaraParticleDataFloat;
  local_6c8.NiagaraParticleDataHalf = local_f8.NiagaraParticleDataHalf;
  local_6c8.NiagaraParticleDataInt = local_f8.NiagaraParticleDataInt;
  local_6c8.NiagaraFloatDataStride = local_f8.NiagaraFloatDataStride;
  local_6c8.NiagaraIntDataStride = local_f8.NiagaraIntDataStride;
  local_6c8.RibbonIdDataOffset = local_f8.RibbonIdDataOffset;
  local_6c8.RibbonLinkOrderDataOffset = local_f8.RibbonLinkOrderDataOffset;
  local_6c8.PositionDataOffset = local_f8.PositionDataOffset;
  local_6c8.PrevPositionDataOffset = local_f8.PrevPositionDataOffset;
  local_6c8.VelocityDataOffset = local_f8.VelocityDataOffset;
  local_6c8.WidthDataOffset = local_f8.WidthDataOffset;
  local_6c8.PrevWidthDataOffset = local_f8.PrevWidthDataOffset;
  local_6c8.TwistDataOffset = local_f8.TwistDataOffset;
  local_6c8.PrevTwistDataOffset = local_f8.PrevTwistDataOffset;
  local_6c8.ColorDataOffset = local_f8.ColorDataOffset;
  local_6c8.FacingDataOffset = local_f8.FacingDataOffset;
  local_6c8.PrevFacingDataOffset = local_f8.PrevFacingDataOffset;
  local_6c8.NormalizedAgeDataOffset = local_f8.NormalizedAgeDataOffset;
  local_6c8.MaterialRandomDataOffset = local_f8.MaterialRandomDataOffset;
  local_6c8.MaterialParamValidMask = local_f8.MaterialParamValidMask;
  local_6c8.MaterialParamDataOffset = local_f8.MaterialParamDataOffset;
  local_6c8.MaterialParam1DataOffset = local_f8.MaterialParam1DataOffset;
  local_6c8.MaterialParam2DataOffset = local_f8.MaterialParam2DataOffset;
  local_5c8 = (this->VertexBuffers).SortedIndicesBuffer.SRV.Reference;
  local_6c8.MaterialParam3DataOffset = local_f8.MaterialParam3DataOffset;
  local_6c8.DistanceFromStartOffset = local_f8.DistanceFromStartOffset;
  local_6c8.U0OverrideDataOffset = local_f8.U0OverrideDataOffset;
  local_6c8.V0RangeOverrideDataOffset = local_f8.V0RangeOverrideDataOffset;
  local_6c8.U1OverrideDataOffset = local_f8.U1OverrideDataOffset;
  local_6c8.V1RangeOverrideDataOffset = local_f8.V1RangeOverrideDataOffset;
  local_6c8.U0DistributionMode = local_f8.U0DistributionMode;
  local_6c8.U1DistributionMode = local_f8.U1DistributionMode;
  local_5c0 = (this->VertexBuffers).TangentsAndDistancesBuffer.UAV.Reference;
  local_5b8 = (this->VertexBuffers).RibbonLookupTableBuffer.UAV.Reference;
  local_628 = (float)(this->UV0Settings).Offset.field0_0x0._s_0.X;
  local_5b0 = (this->VertexBuffers).GPUComputeCommandBuffer.SRV.Reference;
  local_614 = (uint)(this->UV0Settings).DistributionMode;
  local_624 = (float)(this->UV0Settings).Offset.field0_0x0._s_0.Y;
  local_610 = (uint)(this->UV0Settings).LeadingEdgeMode;
  local_5a8 = 0;
  local_60c = (uint)(this->UV0Settings).TrailingEdgeMode;
  local_620 = (float)(this->UV0Settings).Scale.field0_0x0._s_0.X;
  local_61c = (float)(this->UV0Settings).Scale.field0_0x0._s_0.Y;
  local_618 = (this->UV0Settings).TilingLength;
  local_608 = (this->UV0Settings).bEnablePerParticleUOverride;
  local_604 = (this->UV0Settings).bEnablePerParticleVRangeOverride;
  local_5f8 = (float)(this->UV1Settings).Offset.field0_0x0._s_0.X;
  local_5e4 = (uint)(this->UV1Settings).DistributionMode;
  local_5e0 = (uint)(this->UV1Settings).LeadingEdgeMode;
  local_5f4 = (float)(this->UV1Settings).Offset.field0_0x0._s_0.Y;
  local_5dc = (uint)(this->UV1Settings).TrailingEdgeMode;
  local_5d8 = (this->UV1Settings).bEnablePerParticleUOverride;
  local_5d4 = (this->UV1Settings).bEnablePerParticleVRangeOverride;
  local_5f0 = (float)(this->UV1Settings).Scale.field0_0x0._s_0.X;
  local_5ec = (float)(this->UV1Settings).Scale.field0_0x0._s_0.Y;
  local_5e8 = (this->UV1Settings).TilingLength;
  TVar23 = FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitComputeGPU,1>
           ::GetStatId((FThreadSafeStaticStatInner<FStat_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitComputeGPU,1>
                        *)&StatPtr_STAT_NiagaraRenderRibbonsGenVerticesMultiRibbonInitComputeGPU);
  local_f88.Impl._Line = 0xb27;
  local_f88.Impl._Column = 5;
  local_f88.Impl._File =
       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
  ;
  local_f88.Impl._Function =
       "void __cdecl FNiagaraRendererRibbons::InitializeVertexBuffersGPU(class FRHICommandListImmediate &,class FNiagaraGpuComputeDispatchInterface *,const struct FNiagaraRibbonGPUInitParameters &,struct FNiagaraRibbonGPUInitComputeBuffers &,const class TSharedPtr<struct FNiagaraRibbonRenderingFrameResources,1> &) const"
  ;
  FScopeCycleCounter::FScopeCycleCounter
            ((FScopeCycleCounter *)&local_13b8,*(TStatIdData **)&(TVar23.StatIdPtr)->Name,
             CycleStat|ClearEveryFrame,false,&local_f88);
  pFVar26 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]);
  pFVar27 = (FShaderType *)FNiagaraRibbonUVParamCalculationCS::GetStaticType();
  FGlobalShaderMap::GetShader
            (pFVar26,&local_1278,pFVar27,
             (this->GenerationConfig).bHasFullRibbonIDs +
             ((this->GenerationConfig).bHasSimpleRibbonIDs +
             ((this->GenerationConfig).bWantsConstantTessellation +
             (this->GenerationConfig).bWantsAutomaticTessellation * 2) * 2) * 2);
  if (local_1278.ShaderContent == (FShader *)0x0) {
    FVar28 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_750);
    pFVar35 = ::FName::ToString((FName *)FVar28,&local_918);
    if ((pFVar35->Data).ArrayNum != 0) {
      local_1338 = (pFVar35->Data).AllocatorInstance.Data;
    }
    FNiagaraRibbonUVParamCalculationCS::GetStaticType();
    bVar18 = ::FDebug::CheckVerifyFailedImpl2
                       ("Shader.IsValid()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                        ,0xc0,L"Failed to find shader type %s in Platform %s");
    if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_918.Data.AllocatorInstance.Data);
    }
    if (bVar18) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  FNiagaraRibbonUVParamCalculationCS::GetStaticType();
  pFVar17 = local_1278.ShaderContent;
  local_1250.ShaderMap = local_1278.ShaderMap;
  local_c28.field1_0x8 =
       (FRHITransitionInfo_u_8)(this->VertexBuffers).RibbonLookupTableBuffer.Buffer.Reference;
  local_bf0 = (this->VertexBuffers).TangentsAndDistancesBuffer.Buffer.Reference;
  local_b28 = &local_c28;
  uStack_b20 = 2;
  local_908._12_4_ = uStack_b1c;
  local_908.ArrayNum = 2;
  local_1250.ShaderContent = (FNiagaraRibbonUVParamCalculationCS *)local_1278.ShaderContent;
  local_c28._padding_._0_4_ = 0xffffffff;
  local_c28._padding_._4_2_ = 0xffff;
  local_c28.Type = Buffer;
  local_c28.AccessBefore = UAVCompute;
  local_c28.AccessAfter = UAVCompute;
  local_c28.Flags = None;
  local_c28.CommitInfo.bIsSet = false;
  local_bf8 = 0xffffffff;
  local_bf4 = 0xffff;
  local_be8 = 2;
  local_be4 = 0x70;
  local_be0 = 0x400;
  local_bdc = 0;
  local_bd0 = 0;
  local_908.DataPtr = local_b28;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_908,None);
  pFVar8 = (this->VertexBuffers).GPUComputeCommandBuffer.Buffer.Reference;
  FComputeShaderUtils::ValidateIndirectArgsBuffer((pFVar8->Desc).Size,0);
  pFVar29 = FNiagaraRibbonVertexFinalizationParameters::FTypeInfo::GetStructMetadata();
  pFVar30 = TShaderRefBase<FNiagaraRibbonUVParamCalculationCS,FShaderMapPointerTable>::
            GetComputeShader(&local_1250);
  SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar30);
  local_8f8.ShaderContent = local_1278.ShaderContent;
  local_8f8.ShaderMap = local_1278.ShaderMap;
  ValidateShaderParameters(&local_8f8,pFVar29,&local_6c8);
  ::SetShaderParameters
            ((FRHIComputeCommandList *)param_1,pFVar30,&pFVar17->Bindings,pFVar29,&local_6c8);
  FRHIComputeCommandList::DispatchIndirectComputeShader((FRHIComputeCommandList *)param_1,pFVar8,0);
  pFVar30 = TShaderRefBase<FNiagaraRibbonUVParamCalculationCS,FShaderMapPointerTable>::
            GetComputeShader(&local_1250);
  if (GRHIGlobals.NeedsShaderUnbinds != false) {
    pFVar31 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
    if (((pFVar17->Bindings).RootParameterBufferIndex != 0xffff) &&
       (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                            ,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                            ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."),
       bVar18)) {
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    UnsetShaderUAVs(pFVar31,&pFVar17->Bindings);
    FRHIComputeCommandList::SetBatchedShaderUnbinds
              ((FRHIComputeCommandList *)param_1,pFVar30,pFVar31);
  }
  local_bc8.field1_0x8 =
       (FRHITransitionInfo_u_8)(this->VertexBuffers).TangentsAndDistancesBuffer.Buffer.Reference;
  local_b90 = (this->VertexBuffers).RibbonLookupTableBuffer.Buffer.Reference;
  local_b18 = &local_bc8;
  uStack_b10 = 2;
  local_8e8._12_4_ = uStack_b0c;
  local_8e8.ArrayNum = 2;
  local_bc8._padding_._0_4_ = 0xffffffff;
  local_bc8._padding_._4_2_ = 0xffff;
  local_bc8.Type = Buffer;
  local_bc8.AccessBefore = UAVCompute;
  local_bc8.AccessAfter = SRVMask;
  local_bc8.Flags = None;
  local_bc8.CommitInfo.bIsSet = false;
  local_b98 = 0xffffffff;
  local_b94 = 0xffff;
  local_b88 = 2;
  local_b84 = 0x400;
  local_b80 = 0x70;
  local_b7c = 0;
  local_b70 = 0;
  local_8e8.DataPtr = local_b18;
  FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_8e8,None);
  if ((local_13b0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_13b0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_13b0 & 4) != 0) {
    FThreadStats::AddMessage(local_13b8,CycleScopeEnd);
  }
  if ((local_13c0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_13c0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_13c0 & 4) != 0) {
    FThreadStats::AddMessage(local_13c8,CycleScopeEnd);
  }
  local_13c0 = 0;
  if (local_a20 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_a30);
  }
  if (local_1410 != (FRHIShaderResourceView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1410);
  }
  if (local_1408 != (FRHIUnorderedAccessView *)0x0) {
    FRHIResource::Release((FRHIResource *)local_1408);
  }
  if (local_a08 != '\0') {
    FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_a18);
  }
LAB_14935c902:
  if ((local_13a0 & 1) != 0) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if ((local_13a0 & 2) != 0) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((local_13a0 & 4) != 0) {
    FThreadStats::AddMessage(local_13a8,CycleScopeEnd);
  }
  return;
}

// InitializeVertexBuffersResources @ 14935c980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraRendererRibbons::InitializeVertexBuffersResources
          (FNiagaraRendererRibbons *this,FRHICommandListBase *param_1,
          FNiagaraDynamicDataRibbon *param_2,FNiagaraDataBuffer *param_3,
          FGlobalDynamicReadBuffer *param_4,
          TSharedPtr<FNiagaraRibbonRenderingFrameResources,1> *param_5,bool param_6)

{
  FMutex *this_00;
  undefined8 *puVar1;
  atomic<unsigned_char> aVar2;
  FNiagaraRibbonCPUGeneratedVertexData *pFVar3;
  ForElementType<FRibbonMultiRibbonInfo> FVar4;
  code *pcVar5;
  uchar *puVar6;
  FDynamicAllocReadBuffer *pFVar7;
  uchar *puVar8;
  FDynamicAllocReadBuffer *pFVar9;
  uchar *puVar10;
  FDynamicAllocReadBuffer *pFVar11;
  FRHIShaderResourceView *pFVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  TSharedPtr<FNiagaraRibbonCPUGeneratedVertexData,1> *pTVar18;
  bool bVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  FNiagaraRibbonRenderingFrameResources *pFVar23;
  ForElementType<unsigned_int> FVar24;
  FParticleRenderData *pFVar25;
  void *pvVar26;
  FRHIShaderResourceView *pFVar27;
  FRHIShaderResourceView *pFVar28;
  ForElementType<FRibbonMultiRibbonInfo> FVar29;
  uint uVar30;
  longlong lVar31;
  longlong lVar32;
  FRHICommandListBase *this_01;
  undefined1 auStackY_1d8 [32];
  undefined1 local_184 [12];
  ForAnyElementType local_178;
  uint local_170 [2];
  FRHICommandListBase *local_168;
  TSharedPtr<FNiagaraRibbonCPUGeneratedVertexData,1> *local_160;
  ForElementType<unsigned_int> local_148;
  int iStack_140;
  undefined4 uStack_13c;
  TArrayView<unsigned_int_const_,int> local_138;
  FParticleRenderData local_128;
  ForElementType<unsigned_int> local_d0;
  int local_c0;
  int local_bc;
  ulonglong local_b8;
  
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  this_00 = &this->VertexBuffersGuard;
  local_168 = param_1;
  if ((this_00 == (FMutex *)0x0) &&
     (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                         ("Mutex",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                          ,0x1b,L""), bVar19)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  LOCK();
  bVar19 = this_00->State == (atomic<unsigned_char>)0x0;
  if (bVar19) {
    this_00->State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar19) {
    UE::FMutex::LockSlow(this_00);
  }
  local_160 = &param_2->GenerationOutput;
  FNiagaraRibbonVertexBuffers::InitializeOrUpdateBuffers
            (&this->VertexBuffers,local_168,&this->GenerationConfig,local_160,param_3,
             param_2->MaxAllocationCount,param_6);
  if (this_00 != (FMutex *)0x0) {
    LOCK();
    aVar2 = this_00->State;
    this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
    UNLOCK();
    if (((byte)aVar2 & 2) != 0) {
      UE::FMutex::WakeWaitingThread(this_00);
    }
  }
  if (param_2->bIsGPUSystem == false) {
    local_d0.SecondaryData = (ForElementType<unsigned_int>)0x0;
    local_c0 = 0;
    local_bc = 2;
    if ((param_6) &&
       (((this->GenerationConfig).bHasFullRibbonIDs != 0 ||
        ((this->GenerationConfig).bHasSimpleRibbonIDs != 0)))) {
      local_184._0_4_ = this->RibbonIDParamDataSetOffset;
      iVar20 = 0;
      if ((&local_d0 <= (ForElementType<unsigned_int> *)local_184) &&
         (iVar20 = 0, local_184 < &local_d0.SecondaryData)) {
        bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar19) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar20 = local_c0;
        if (local_c0 == local_bc) {
          iVar20 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                             (0x404,&local_d0,&local_bc);
        }
      }
      local_c0 = iVar20 + 1;
      FVar24 = (ForElementType<unsigned_int>)&local_d0;
      if (local_d0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
        FVar24 = local_d0.SecondaryData;
      }
      *(undefined4 *)((longlong)FVar24 + (longlong)iVar20 * 4) = local_184._0_4_;
      pFVar23 = TSharedPtr<FNiagaraRibbonRenderingFrameResources,1>::operator->(param_5);
      pFVar23->RibbonIdParamOffset = iVar20;
      if ((this->GenerationConfig).bHasFullRibbonIDs != 0) {
        local_184._4_4_ = this->RibbonIDParamDataSetOffset + 1;
        FVar24 = (ForElementType<unsigned_int>)&local_d0;
        if (local_d0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar24 = local_d0.SecondaryData;
        }
        if ((ulonglong)FVar24 <= (longlong)local_184 + 4U) {
          FVar24 = (ForElementType<unsigned_int>)&local_d0;
          if (local_d0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
            FVar24 = local_d0.SecondaryData;
          }
          if ((local_184 + 4 < (undefined1 *)((longlong)FVar24 + (longlong)local_bc * 4)) &&
             (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar19)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (local_c0 == local_bc) {
          local_c0 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<unsigned_int>_>
                               (0x404,&local_d0,&local_bc);
        }
        lVar31 = (longlong)local_c0;
        FVar24 = (ForElementType<unsigned_int>)&local_d0;
        if (local_d0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
          FVar24 = local_d0.SecondaryData;
        }
        local_c0 = local_c0 + 1;
        *(undefined4 *)((longlong)FVar24 + lVar31 * 4) = local_184._4_4_;
      }
    }
    iVar20 = local_c0;
    local_148 = (ForElementType<unsigned_int>)&local_d0;
    if (local_d0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      local_148 = local_d0.SecondaryData;
    }
    if ((local_c0 < 0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    this_01 = local_168;
    local_138._12_4_ = uStack_13c;
    local_138.ArrayNum = iVar20;
    local_138.DataPtr = (uint *)local_148;
    iStack_140 = iVar20;
    pFVar25 = FNiagaraRenderer::TransferDataToGPU
                        (&local_128,local_168,param_4,this->RendererLayout,&local_138,param_3);
    puVar6 = (pFVar25->FloatData).Buffer;
    pFVar7 = (pFVar25->FloatData).ReadBuffer;
    pFVar28 = (pFVar25->FloatData).SRV;
    puVar8 = (pFVar25->HalfData).Buffer;
    pFVar9 = (pFVar25->HalfData).ReadBuffer;
    pFVar27 = (pFVar25->HalfData).SRV;
    puVar10 = (pFVar25->IntData).Buffer;
    pFVar11 = (pFVar25->IntData).ReadBuffer;
    pFVar12 = (pFVar25->IntData).SRV;
    uVar30 = pFVar25->FloatStride;
    uVar21 = pFVar25->HalfStride;
    uVar22 = pFVar25->IntStride;
    uVar17 = *(undefined4 *)&pFVar25->field_0x54;
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar23 = param_5->Object;
    (pFVar23->ParticleData).FloatData.Buffer = puVar6;
    (pFVar23->ParticleData).FloatData.ReadBuffer = pFVar7;
    (pFVar23->ParticleData).FloatData.SRV = pFVar28;
    (pFVar23->ParticleData).HalfData.Buffer = puVar8;
    (pFVar23->ParticleData).HalfData.ReadBuffer = pFVar9;
    (pFVar23->ParticleData).HalfData.SRV = pFVar27;
    (pFVar23->ParticleData).IntData.Buffer = puVar10;
    (pFVar23->ParticleData).IntData.ReadBuffer = pFVar11;
    (pFVar23->ParticleData).IntData.SRV = pFVar12;
    (pFVar23->ParticleData).FloatStride = uVar30;
    (pFVar23->ParticleData).HalfStride = uVar21;
    (pFVar23->ParticleData).IntStride = uVar22;
    *(undefined4 *)&(pFVar23->ParticleData).field_0x54 = uVar17;
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar23 = param_5->Object;
    pFVar28 = (FRHIShaderResourceView *)DummyFloatBuffer._64_8_;
    if ((pFVar23->ParticleData).FloatData.Buffer != (uchar *)0x0) {
      pFVar28 = (pFVar23->ParticleData).FloatData.SRV;
    }
    if ((pFVar23 == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_5->Object->ParticleFloatSRV = pFVar28;
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar23 = param_5->Object;
    pFVar28 = (FRHIShaderResourceView *)DummyHalfBuffer._64_8_;
    if ((pFVar23->ParticleData).HalfData.Buffer != (uchar *)0x0) {
      pFVar28 = (pFVar23->ParticleData).HalfData.SRV;
    }
    if ((pFVar23 == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_5->Object->ParticleHalfSRV = pFVar28;
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar23 = param_5->Object;
    pFVar28 = (FRHIShaderResourceView *)DummyIntBuffer._64_8_;
    if ((pFVar23->ParticleData).IntData.Buffer != (uchar *)0x0) {
      pFVar28 = (pFVar23->ParticleData).IntData.SRV;
    }
    if ((pFVar23 == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_5->Object->ParticleIntSRV = pFVar28;
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar30 = (param_5->Object->ParticleData).FloatStride;
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_5->Object->ParticleFloatDataStride = uVar30 >> 2;
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar30 = (param_5->Object->ParticleData).HalfStride;
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_5->Object->ParticleHalfDataStride = uVar30 >> 1;
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    uVar30 = (param_5->Object->ParticleData).IntStride;
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_5->Object->ParticleIntDataStride = uVar30 >> 2;
    if (local_d0.SecondaryData != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_d0.SecondaryData);
    }
  }
  else {
    pFVar28 = (param_3->GPUBufferFloat).SRV.Reference;
    pFVar27 = (FRHIShaderResourceView *)DummyFloatBuffer._64_8_;
    if (pFVar28 != (FRHIShaderResourceView *)0x0) {
      pFVar27 = pFVar28;
    }
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_5->Object->ParticleFloatSRV = pFVar27;
    pFVar28 = (param_3->GPUBufferHalf).SRV.Reference;
    pFVar27 = (FRHIShaderResourceView *)DummyHalfBuffer._64_8_;
    if (pFVar28 != (FRHIShaderResourceView *)0x0) {
      pFVar27 = pFVar28;
    }
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_5->Object->ParticleHalfSRV = pFVar27;
    pFVar28 = (param_3->GPUBufferInt).SRV.Reference;
    pFVar27 = (FRHIShaderResourceView *)DummyIntBuffer._64_8_;
    if (pFVar28 != (FRHIShaderResourceView *)0x0) {
      pFVar27 = pFVar28;
    }
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_5->Object->ParticleIntSRV = pFVar27;
    uVar30 = param_3->FloatStride;
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_5->Object->ParticleFloatDataStride = uVar30 >> 2;
    uVar30 = param_3->HalfStride;
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_5->Object->ParticleHalfDataStride = uVar30 >> 1;
    uVar30 = param_3->Int32Stride;
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_5->Object->ParticleIntDataStride = uVar30 >> 2;
    iVar20 = this->RibbonIDParamDataSetOffset;
    if ((param_5->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_5->Object->RibbonIdParamOffset = iVar20;
    this_01 = local_168;
  }
  pTVar18 = local_160;
  if ((local_160->Object != (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
     (0 < (local_160->Object->SegmentData).ArrayNum)) {
    if ((this_00 == (FMutex *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("Mutex",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\ScopeLock.h"
                            ,0x1b,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    LOCK();
    bVar19 = this_00->State == (atomic<unsigned_char>)0x0;
    if (bVar19) {
      this_00->State = (atomic<unsigned_char>)0x1;
    }
    UNLOCK();
    if (!bVar19) {
      UE::FMutex::LockSlow(this_00);
    }
    if ((pTVar18->Object == (FNiagaraRibbonCPUGeneratedVertexData *)0x0) &&
       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x44d,L""), bVar19)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = pTVar18->Object;
    pvVar26 = FRHICommandListBase::LockBuffer
                        (this_01,(this->VertexBuffers).SortedIndicesBuffer.Buffer.Reference,0,
                         (pFVar3->SortedIndices).ArrayNum << 2,RLM_WriteOnly);
    memcpy(pvVar26,(pFVar3->SortedIndices).AllocatorInstance.Data,
           (longlong)(pFVar3->SortedIndices).ArrayNum << 2);
    FRHICommandListBase::UnlockBuffer
              (this_01,(this->VertexBuffers).SortedIndicesBuffer.Buffer.Reference);
    pvVar26 = FRHICommandListBase::LockBuffer
                        (this_01,(this->VertexBuffers).TangentsAndDistancesBuffer.Buffer.Reference,0
                         ,(pFVar3->TangentAndDistances).ArrayNum << 4,RLM_WriteOnly);
    memcpy(pvVar26,(pFVar3->TangentAndDistances).AllocatorInstance.Data,
           (longlong)(pFVar3->TangentAndDistances).ArrayNum << 4);
    FRHICommandListBase::UnlockBuffer
              (this_01,(this->VertexBuffers).TangentsAndDistancesBuffer.Buffer.Reference);
    if (((this->GenerationConfig).bHasFullRibbonIDs != 0) ||
       ((this->GenerationConfig).bHasSimpleRibbonIDs != 0)) {
      pvVar26 = FRHICommandListBase::LockBuffer
                          (this_01,(this->VertexBuffers).MultiRibbonIndicesBuffer.Buffer.Reference,0
                           ,(pFVar3->MultiRibbonIndices).ArrayNum << 2,RLM_WriteOnly);
      memcpy(pvVar26,(pFVar3->MultiRibbonIndices).AllocatorInstance.Data,
             (longlong)(pFVar3->MultiRibbonIndices).ArrayNum << 2);
      FRHICommandListBase::UnlockBuffer
                (this_01,(this->VertexBuffers).MultiRibbonIndicesBuffer.Buffer.Reference);
    }
    local_178.Data = (FScriptContainerElement *)0x0;
    local_170[0] = 0;
    local_170[1] = 0;
    uVar30 = (pFVar3->RibbonInfoLookup).ArrayNum << 3;
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
    }
    if (0 < (int)uVar30) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar30,&local_178,0,(int *)(local_170 + 1));
    }
    uVar30 = 0;
    if (0 < (pFVar3->RibbonInfoLookup).ArrayNum) {
      lVar31 = 0;
      do {
        uVar21 = 0;
        if ((int)uVar30 < (pFVar3->RibbonInfoLookup).ArrayNum) {
          uVar21 = ~uVar30 >> 0x1f;
        }
        if ((uVar21 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FVar4 = (pFVar3->RibbonInfoLookup).AllocatorInstance.SecondaryData;
        uVar21 = local_170[0];
        lVar32 = (longlong)(int)local_170[0];
        FVar29 = (ForElementType<FRibbonMultiRibbonInfo>)&pFVar3->RibbonInfoLookup;
        if (FVar4 != (ForElementType<FRibbonMultiRibbonInfo>)0x0) {
          FVar29 = FVar4;
        }
        UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,8,&local_178,(int *)local_170,(int *)(local_170 + 1));
        puVar1 = (undefined8 *)(lVar31 + 0x38 + (longlong)FVar29);
        uVar13 = *puVar1;
        uVar14 = puVar1[1];
        puVar1 = (undefined8 *)(lVar31 + 0x48 + (longlong)FVar29);
        uVar15 = *puVar1;
        uVar16 = puVar1[1];
        uVar22 = 0;
        if ((int)uVar21 < (int)local_170[0]) {
          uVar22 = ~uVar21 >> 0x1f;
        }
        if ((uVar22 == 0) &&
           (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar19)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        uVar30 = uVar30 + 1;
        lVar31 = lVar31 + 0x58;
        *(undefined8 *)(local_178.Data + lVar32 * 4) = uVar13;
        *(undefined8 *)(local_178.Data + lVar32 * 4 + 8) = uVar14;
        *(undefined8 *)(local_178.Data + lVar32 * 4 + 0x10) = uVar15;
        *(undefined8 *)(local_178.Data + lVar32 * 4 + 0x10 + 8) = uVar16;
        this_01 = local_168;
      } while ((int)uVar30 < (pFVar3->RibbonInfoLookup).ArrayNum);
    }
    pvVar26 = FRHICommandListBase::LockBuffer
                        (this_01,(this->VertexBuffers).RibbonLookupTableBuffer.Buffer.Reference,0,
                         local_170[0] * 4,RLM_WriteOnly);
    memcpy(pvVar26,local_178.Data,(longlong)(int)local_170[0] << 2);
    FRHICommandListBase::UnlockBuffer
              (this_01,(this->VertexBuffers).RibbonLookupTableBuffer.Buffer.Reference);
    if (local_178.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_178.Data);
    }
    if (this_00 != (FMutex *)0x0) {
      LOCK();
      aVar2 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(this_00);
      }
    }
  }
  return;
}

// InitializeViewIndexBuffersGPU @ 14935d580

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */
/* WARNING: Enum "ERHIBindlessSupport": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraRendererRibbons::InitializeViewIndexBuffersGPU
          (FNiagaraRendererRibbons *this,FRHICommandListImmediate *param_1,
          FNiagaraGpuComputeDispatchInterface *param_2,FNiagaraRibbonGPUInitParameters *param_3,
          FNiagaraRibbonRenderingFrameViewResources *param_4)

{
  int *piVar1;
  undefined1 *puVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  int iVar5;
  FRHIShaderResourceView *pFVar6;
  ForAnyElementType FVar7;
  FRHIBuffer *pFVar8;
  code *pcVar9;
  bool bVar10;
  bool bVar11;
  undefined4 uVar12;
  FNiagaraRibbonCreateIndexBufferParamsCS *pFVar13;
  FNiagaraRibbonCreateIndexBufferCS *pFVar14;
  bool bVar15;
  bool bVar16;
  uint uVar17;
  uint uVar18;
  atomic<unsigned_int> aVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenIndiciesGPU> FVar21;
  FRHIBreadcrumbAllocator *pFVar22;
  FRHIBreadcrumbNode *pFVar23;
  FGlobalShaderMap *pFVar24;
  FShaderType *pFVar25;
  FName FVar26;
  FShaderParametersMetadata *pFVar27;
  FRHIComputeShader *pFVar28;
  FRHIBatchedShaderUnbinds *pFVar29;
  FRWBuffer *pFVar30;
  FThreadStats *this_00;
  FThreadStatsPool *this_01;
  int iVar31;
  FNameEntryId FVar32;
  FName FVar33;
  LARGE_INTEGER local_350;
  FRHITransitionInfo *local_348;
  undefined4 uStack_340;
  undefined4 uStack_33c;
  FColor_u_0 local_338 [2];
  FName local_330;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_328;
  FName local_318;
  TIntVector3<int>_u_0 local_308;
  TShaderRefBase<FNiagaraRibbonCreateIndexBufferParamsCS,FShaderMapPointerTable> local_2f8;
  TShaderRefBase<FNiagaraRibbonCreateIndexBufferCS,FShaderMapPointerTable> local_2e8;
  FStatMessage local_2d8;
  FRHIUnorderedAccessView *local_2c8;
  FRHIShaderResourceView *local_2c0;
  uint local_2b8;
  undefined4 local_2b4;
  FRHIShaderResourceView *local_2b0;
  uint local_2a8;
  undefined8 local_2a4;
  undefined4 local_29c;
  int local_298;
  float local_294;
  float local_290;
  uint local_28c;
  uint local_288;
  int local_284;
  float local_280;
  uint local_27c;
  int local_278;
  float local_274;
  float local_270;
  uint local_26c;
  float local_268;
  undefined8 local_264;
  undefined4 local_25c;
  FRHITransitionInfo local_258;
  FRHITransitionInfo local_228;
  FRHITransitionInfo local_1f8;
  undefined1 local_1c8 [16];
  ForAnyElementType local_1b8;
  int local_1b0;
  undefined1 local_1ac;
  undefined1 local_1a0;
  ForAnyElementType local_198;
  FRHIShaderResourceView *local_190;
  ForAnyElementType local_188;
  FRHIShaderResourceView *local_180;
  FRHIShaderResourceView *local_178;
  ForAnyElementType local_170;
  uint local_168;
  int local_164;
  ForAnyElementType local_160;
  uint local_158;
  undefined8 local_154;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_128;
  char *local_118;
  int iStack_110;
  int iStack_10c;
  TIndexedPtrBase<FShaderType,FShaderType_*>_u_0 local_108;
  wchar_t *pwStack_100;
  FRHIBreadcrumbScope local_f8;
  char local_e8;
  FName local_e0;
  undefined1 local_d8 [8];
  undefined1 local_d0 [8];
  FString local_c8;
  TArrayView<FRHITransitionInfo_const_,int> local_b8;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_a8;
  TArrayView<FRHITransitionInfo_const_,int> local_98;
  FString local_88;
  TArrayView<FRHITransitionInfo_const_,int> local_78;
  TShaderRefBase<FShader,FShaderMapPointerTable> local_68;
  TArrayView<FRHITransitionInfo_const_,int> local_58 [2];
  
  FVar21 = StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesGPU;
  if (StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesGPU ==
      (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenIndiciesGPU>)0x0) {
    pFVar20 = ::FName::FName(&local_e0,"STAT_NiagaraRenderRibbonsGenIndiciesGPU");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_NiagaraRenderRibbonsGenIndiciesGPU>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)
                        &StatPtr_STAT_NiagaraRenderRibbonsGenIndiciesGPU,*pFVar20,
                        L"Generate Indices GPU [RT]","STATGROUP_Niagara","STATCAT_Niagara",
                        L"Niagara",true,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar33 = *(FName *)FVar21;
  bVar10 = false;
  bVar11 = false;
  local_318.ComparisonIndex.Value = 0;
  local_318.Number = 0;
  bVar15 = false;
  bVar16 = false;
  FVar32 = FVar33.ComparisonIndex.Value;
  uVar17 = FVar33.Number;
  if ((FVar32.Value != 0) || (uVar17 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_338[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_338[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar10 = false;
      bVar11 = true;
      bVar15 = false;
      bVar16 = true;
      if (-1 < CpuChannel->Enabled) {
        local_330.ComparisonIndex.Value = FVar32.Value;
        local_330.Number = uVar17;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_330,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                   ,0x8ed);
        bVar10 = true;
        bVar11 = true;
        bVar15 = true;
        bVar16 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_350.s.LowPart = FVar32.Value;
      local_350.s.HighPart = uVar17;
      FThreadStats::AddMessage(FVar33,CycleScopeStart);
      bVar15 = true;
      goto LAB_14935d6ee;
    }
  }
  bVar11 = bVar16;
  bVar10 = bVar15;
  bVar15 = false;
  FVar33 = local_318;
LAB_14935d6ee:
  if (((param_4->IndirectDrawBuffer).Object == (FRWBuffer *)0x0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar16)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((((param_4->IndirectDrawBuffer).Object)->Buffer).Reference != (FRHIBuffer *)0x0) {
    uVar17 = param_3->NumInstances;
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
      iStack_110 = 0x8f6;
      local_118 = 
      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
      ;
      pwStack_100 = L"NiagaraRenderRibbonsGenIndiciesGPU";
      local_108.Ptr = (FShaderType *)0x0;
      ::Desc._padding_._0_4_ = 0x51df4b80;
      ::Desc._padding_._4_4_ = 1;
      ::Desc._padding_._0_4_ = 0x8f6;
      ::Desc._padding_._4_4_ = iStack_10c;
      ::Desc._padding_._0_4_ = 0;
      ::Desc._padding_._4_4_ = 0;
      ::Desc._padding_._0_4_ = 0x51df50f0;
      ::Desc._padding_._4_4_ = 1;
      InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&::Desc.Cs,4000);
      ::Desc.FieldNames._Elems[0] = (wchar_t * [1])(wchar_t *)0x0;
      ::Desc.TraceGpuSpecId = 0;
      ::Desc.TraceCpuSpecId = (atomic<unsigned_int>)0x0;
      atexit(``FNiagaraRendererRibbons::InitializeViewIndexBuffersGPU'::__l10::<lambda_1>::
             operator()<>'::__l2::_dynamic_atexit_destructor_for__Desc__);
      _Init_thread_footer(&::_TSS0);
    }
    pFVar22 = FRHIComputeCommandList::GetBreadcrumbAllocator((FRHIComputeCommandList *)param_1);
    pFVar23 = FMemStackBase::Alloc(&pFVar22->Inner,0x50,8);
    pFVar23->_padding_ = (longlong)&___7FRHIBreadcrumbNode__6B_;
    pFVar23->Parent = FRHIBreadcrumbNode::Sentinel;
    pFVar23->ListLink = (FRHIBreadcrumbNode *)0x0;
    (pFVar23->NextPtrs).Elements[0] = (FRHIBreadcrumbNode *)0x0;
    (pFVar23->NextPtrs).Elements[1] = (FRHIBreadcrumbNode *)0x0;
    pFVar23->TraceCpuSpecId = 0;
    pFVar23->TraceCpuMetadataId = 0;
    pFVar23->Data = (FRHIBreadcrumbData *)&::Desc;
    pFVar23->Allocator = pFVar22;
    LOCK();
    UNLOCK();
    uVar18 = (uint)FRHIBreadcrumbNode::NextID | 0x80000000;
    FRHIBreadcrumbNode::NextID = (atomic<unsigned_int>)((int)FRHIBreadcrumbNode::NextID + 1);
    pFVar23->BeginPipes = (atomic<unsigned_char>)0x0;
    pFVar23->EndPipes = (atomic<unsigned_char>)0x0;
    pFVar23->ID = uVar18;
    pFVar23->_padding_ =
         (longlong)
         &
         ___7__TRHIBreadcrumb_V__TRHIBreadcrumbDesc__0A___V_Private_Breadcrumbs_RHI_UE___Private_Breadcrumbs_RHI_UE__6B_
    ;
    pFVar23[1]._padding_ = (longlong)&::Desc;
    if ((::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) &&
       (bVar16 = UE::RHI::GPUProfiler::FGpuProfilerTrace::IsAvailable(), bVar16)) {
      EnterCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
      if (::Desc.TraceCpuSpecId == (atomic<unsigned_int>)0x0) {
        aVar19 = (atomic<unsigned_int>)
                 FCpuProfilerTrace::OutputEventType
                           ((wchar_t *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_)
                            ,(char *)CONCAT44(::Desc._padding_._4_4_,(undefined4)::Desc._padding_),
                            (uint)::Desc._padding_);
        LOCK();
        ::Desc.TraceCpuSpecId = aVar19;
        UNLOCK();
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&::Desc.Cs);
    }
    pFVar23->TraceCpuSpecId = (uint)::Desc.TraceCpuSpecId;
    FRHIBreadcrumbScope::FRHIBreadcrumbScope(&local_f8,(FRHIComputeCommandList *)param_1,pFVar23);
    local_e8 = '\x01';
    pFVar24 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel[(int)GMaxRHIFeatureLevel]
                                );
    pFVar25 = (FShaderType *)FNiagaraRibbonCreateIndexBufferParamsCS::GetStaticType();
    FGlobalShaderMap::GetShader
              (pFVar24,&local_128,pFVar25,
               (this->GenerationConfig).bWantsConstantTessellation +
               (this->GenerationConfig).bWantsAutomaticTessellation * 2);
    if ((ForAnyElementType)local_128.ShaderContent == (ForAnyElementType)0x0) {
      FVar26 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_d8);
      ::FName::ToString((FName *)FVar26,&local_c8);
      FNiagaraRibbonCreateIndexBufferParamsCS::GetStaticType();
      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Shader.IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                          ,0xc0,L"Failed to find shader type %s in Platform %s");
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
      }
      if (bVar16) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    FNiagaraRibbonCreateIndexBufferParamsCS::GetStaticType();
    local_2f8.ShaderContent = (FNiagaraRibbonCreateIndexBufferParamsCS *)local_128.ShaderContent;
    local_2f8.ShaderMap = local_128.ShaderMap;
    local_2b4 = 0;
    local_264 = 0;
    local_25c = 0;
    if (((param_4->IndirectDrawBuffer).Object == (FRWBuffer *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    local_2c8 = (((param_4->IndirectDrawBuffer).Object)->UAV).Reference;
    local_2c0 = (this->VertexBuffers).GPUComputeCommandBuffer.SRV.Reference;
    local_2b8 = uVar17;
    bVar16 = IsInParallelRenderingThread();
    if ((!bVar16) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsInParallelRenderingThread()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                            ,0x6a,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    if (((param_2->GPUInstanceCounterManager).AllocatedInstanceCounts <
         (param_2->GPUInstanceCounterManager).UsedInstanceCounts) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("UsedInstanceCounts <= AllocatedInstanceCounts",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                            ,0x44,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    pFVar6 = (param_2->GPUInstanceCounterManager).CountBuffer.SRV.Reference;
    local_294 = (param_4->IndexGenerationSettings).ViewDistance;
    local_290 = (param_4->IndexGenerationSettings).LODDistanceFactor;
    local_2b0 = (FRHIShaderResourceView *)DummyUIntBuffer._64_8_;
    if (pFVar6 != (FRHIShaderResourceView *)0x0) {
      local_2b0 = pFVar6;
    }
    local_2a8 = param_3->GPUInstanceCountBufferOffset;
    local_280 = (this->TessellationConfig).CustomTessellationMinAngle;
    local_298 = (this->ShapeState).TrianglesPerSegment;
    local_28c = (uint)(this->TessellationConfig).TessellationMode;
    local_288 = (uint)((this->TessellationConfig).bCustomUseConstantFactor != false);
    local_284 = (this->TessellationConfig).CustomTessellationFactor;
    local_274 = GNiagaraRibbonTessellationAngle;
    local_27c = (uint)((this->TessellationConfig).bCustomUseScreenSpace != false);
    local_278 = GNiagaraRibbonMaxTessellation;
    local_270 = GNiagaraRibbonTessellationScreenPercentage;
    local_26c = (uint)(GNiagaraRibbonTessellationEnabled != 0);
    local_268 = GNiagaraRibbonTessellationMinDisplacementError;
    local_2a4 = 0;
    local_29c = 0x40;
    if (((param_4->IndirectDrawBuffer).Object == (FRWBuffer *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStack_340 = 1;
    local_258.field1_0x8 =
         (FRHITransitionInfo_u_8)(((param_4->IndirectDrawBuffer).Object)->UAV).Reference;
    local_258._padding_._4_2_ = 0xffff;
    local_348 = &local_258;
    local_b8._12_4_ = uStack_33c;
    local_b8.ArrayNum = 1;
    local_258._padding_._0_4_ = 0xffffffff;
    local_258.Type = UAV;
    local_258.AccessBefore = SRVMask|IndirectArgs;
    local_258.AccessAfter = UAVCompute;
    local_258.Flags = None;
    local_258.CommitInfo.bIsSet = false;
    local_b8.DataPtr = local_348;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_b8,None);
    pFVar27 = FNiagaraRibbonInitializeIndices::FTypeInfo::GetStructMetadata();
    local_308._s_0.X = 1;
    local_308._s_0.Y = 1;
    local_308._s_0.Z = 1;
    FComputeShaderUtils::ValidateGroupCount((TIntVector3<int> *)&local_308._s_0);
    pFVar28 = TShaderRefBase<FNiagaraRibbonCreateIndexBufferParamsCS,FShaderMapPointerTable>::
              GetComputeShader(&local_2f8);
    SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar28);
    pFVar13 = local_2f8.ShaderContent;
    local_a8.ShaderContent = (FShader *)local_2f8.ShaderContent;
    local_a8.ShaderMap = local_2f8.ShaderMap;
    ValidateShaderParameters(&local_a8,pFVar27,&local_2c8);
    ::SetShaderParameters
              ((FRHIComputeCommandList *)param_1,pFVar28,(FShaderParameterBindings *)pFVar13,pFVar27
               ,&local_2c8);
    FRHIComputeCommandList::DispatchComputeShader((FRHIComputeCommandList *)param_1,1,1,1);
    pFVar28 = TShaderRefBase<FNiagaraRibbonCreateIndexBufferParamsCS,FShaderMapPointerTable>::
              GetComputeShader(&local_2f8);
    if (GRHIGlobals.NeedsShaderUnbinds != false) {
      pFVar29 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
      if ((*(ushort *)((longlong)pFVar13 + 0x54) != 0xffff) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                              ,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                              ,0xb3,L"Can\'t use UnsetShaderUAVs() for root parameter buffer index."
                             ), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      UnsetShaderUAVs(pFVar29,(FShaderParameterBindings *)pFVar13);
      FRHIComputeCommandList::SetBatchedShaderUnbinds
                ((FRHIComputeCommandList *)param_1,pFVar28,pFVar29);
    }
    if (((param_4->IndirectDrawBuffer).Object == (FRWBuffer *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    uStack_340 = 1;
    local_228.field1_0x8 =
         (FRHITransitionInfo_u_8)(((param_4->IndirectDrawBuffer).Object)->UAV).Reference;
    local_228._padding_._4_2_ = 0xffff;
    local_348 = &local_228;
    local_98._12_4_ = uStack_33c;
    local_98.ArrayNum = 1;
    local_228._padding_._0_4_ = 0xffffffff;
    local_228.Type = UAV;
    local_228.AccessBefore = UAVCompute;
    local_228.AccessAfter = SRVMask|IndirectArgs;
    local_228.Flags = None;
    local_228.CommitInfo.bIsSet = false;
    local_98.DataPtr = local_348;
    FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_98,None);
    if (1 < uVar17) {
      iVar5 = (this->ShapeState).TrianglesPerSegment;
      pFVar24 = GetGlobalShaderMap(GRHIGlobals.ShaderPlatformForFeatureLevel
                                   [(int)GMaxRHIFeatureLevel]);
      iVar31 = 0;
      if (0x20 < iVar5) {
        iVar31 = 2;
      }
      pFVar25 = (FShaderType *)FNiagaraRibbonCreateIndexBufferCS::GetStaticType();
      FGlobalShaderMap::GetShader
                (pFVar24,&local_328,pFVar25,
                 (this->GenerationConfig).bHasFullRibbonIDs +
                 (iVar31 + (this->GenerationConfig).bHasSimpleRibbonIDs) * 2);
      if (local_328.ShaderContent == (FShader *)0x0) {
        FVar26 = LegacyShaderPlatformToShaderFormat((EShaderPlatform)local_d0);
        ::FName::ToString((FName *)FVar26,&local_88);
        FNiagaraRibbonCreateIndexBufferCS::GetStaticType();
        bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("Shader.IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\GlobalShader.h"
                            ,0xc0,L"Failed to find shader type %s in Platform %s");
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        if (bVar16) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
      FNiagaraRibbonCreateIndexBufferCS::GetStaticType();
      local_2e8.ShaderMap =
           (FShaderMapBase *)CONCAT44(local_328.ShaderMap._4_4_,local_328.ShaderMap._0_4_);
      local_2e8.ShaderContent = (FNiagaraRibbonCreateIndexBufferCS *)local_328.ShaderContent;
      local_164 = 0;
      if (((param_4->IndexBuffer).Object == (FNiagaraRibbonIndexBuffer *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_198 = (ForAnyElementType)(((param_4->IndexBuffer).Object)->UAV).Reference;
      local_190 = (this->VertexBuffers).SortedIndicesBuffer.SRV.Reference;
      local_188 = (ForAnyElementType)(this->VertexBuffers).MultiRibbonIndicesBuffer.SRV.Reference;
      local_180 = (this->VertexBuffers).SegmentsBuffer.SRV.Reference;
      if (((param_4->IndirectDrawBuffer).Object == (FRWBuffer *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_178 = (((param_4->IndirectDrawBuffer).Object)->SRV).Reference;
      local_170 = (ForAnyElementType)(this->ShapeState).SliceTriangleToVertexIdsBuffer.SRV.Reference
      ;
      local_168 = param_3->NumInstances;
      bVar16 = IsInParallelRenderingThread();
      if ((!bVar16) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsInParallelRenderingThread()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                              ,0x6a,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar30 = FNiagaraGPUInstanceCountManager::GetInstanceCountBuffer
                          (&param_2->GPUInstanceCounterManager);
      FVar7 = (ForAnyElementType)(pFVar30->SRV).Reference;
      local_160 = (ForAnyElementType)DummyUIntBuffer._64_8_;
      if (FVar7 != (ForAnyElementType)0x0) {
        local_160 = FVar7;
      }
      local_158 = param_3->GPUInstanceCountBufferOffset;
      local_14c = (this->ShapeState).SliceTriangleToVertexIds.ArrayNum;
      local_148 = (this->ShapeState).TrianglesPerSegment;
      local_144 = (this->ShapeState).NumVerticesInSlice;
      local_140 = (this->ShapeState).BitsNeededForShape;
      local_13c = (this->ShapeState).BitMaskForShape;
      local_138 = (param_4->IndexGenerationSettings).SegmentBitShift;
      local_134 = (param_4->IndexGenerationSettings).SegmentBitMask;
      local_130 = (param_4->IndexGenerationSettings).SubSegmentBitShift;
      local_12c = (param_4->IndexGenerationSettings).SubSegmentBitMask;
      local_154._0_4_ = 0;
      local_154._4_4_ = 0;
      if (((param_4->IndexBuffer).Object == (FNiagaraRibbonIndexBuffer *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uStack_340 = 1;
      local_1f8.field1_0x8 =
           (FRHITransitionInfo_u_8)(((param_4->IndexBuffer).Object)->UAV).Reference;
      local_348 = &local_1f8;
      local_78._12_4_ = uStack_33c;
      local_78.ArrayNum = 1;
      local_1f8._padding_._0_4_ = 0xffffffff;
      local_1f8._padding_._4_2_ = 0xffff;
      local_1f8.Type = UAV;
      local_1f8.AccessBefore = VertexOrIndexBuffer;
      local_1f8.AccessAfter = UAVCompute;
      local_1f8.Flags = None;
      local_1f8.CommitInfo.bIsSet = false;
      local_78.DataPtr = local_348;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,&local_78,None);
      if (((param_4->IndirectDrawBuffer).Object == (FRWBuffer *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar8 = (((param_4->IndirectDrawBuffer).Object)->Buffer).Reference;
      if (((pFVar8->Desc).Size < 0xc) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(IndirectArgOffset + IndirectArgsSize) <= IndirectArgsBufferSize",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\RenderGraphUtils.h"
                              ,0x1bd,
                              L"Indirect parameters buffer for compute shader indirect dispatch at byte offset %d doesn\'t have enough room for one element."
                             ), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      pFVar27 = FNiagaraRibbonGenerateIndices::FTypeInfo::GetStructMetadata();
      pFVar28 = TShaderRefBase<FNiagaraRibbonCreateIndexBufferCS,FShaderMapPointerTable>::
                GetComputeShader(&local_2e8);
      SetComputePipelineState((FRHIComputeCommandList *)param_1,pFVar28);
      pFVar14 = local_2e8.ShaderContent;
      local_68.ShaderContent = (FShader *)local_2e8.ShaderContent;
      local_68.ShaderMap = local_2e8.ShaderMap;
      ValidateShaderParameters(&local_68,pFVar27,local_1c8 + 0x30);
      ::SetShaderParameters
                ((FRHIComputeCommandList *)param_1,pFVar28,(FShaderParameterBindings *)pFVar14,
                 pFVar27,local_1c8 + 0x30);
      FRHIComputeCommandList::DispatchIndirectComputeShader
                ((FRHIComputeCommandList *)param_1,pFVar8,0);
      pFVar28 = TShaderRefBase<FNiagaraRibbonCreateIndexBufferCS,FShaderMapPointerTable>::
                GetComputeShader(&local_2e8);
      if (GRHIGlobals.NeedsShaderUnbinds != false) {
        pFVar29 = FRHICommandListBase::GetScratchShaderUnbinds((FRHICommandListBase *)param_1);
        if ((((FShaderParameterBindings *)&pFVar14->field_0x0)->RootParameterBufferIndex != 0xffff)
           && (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Bindings.RootParameterBufferIndex == FShaderParameterBindings::kInvalidBufferIndex"
                                   ,
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterStruct.h"
                                   ,0xb3,
                                   L"Can\'t use UnsetShaderUAVs() for root parameter buffer index.")
              , bVar16)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        UnsetShaderUAVs(pFVar29,(FShaderParameterBindings *)pFVar14);
        FRHIComputeCommandList::SetBatchedShaderUnbinds
                  ((FRHIComputeCommandList *)param_1,pFVar28,pFVar29);
      }
      if (((param_4->IndexBuffer).Object == (FNiagaraRibbonIndexBuffer *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      local_328.ShaderMap._0_4_ = 1;
      local_1c8._8_8_ = (((param_4->IndexBuffer).Object)->UAV).Reference;
      local_328.ShaderContent = (FShader *)local_1c8;
      local_58[0]._12_4_ = local_328.ShaderMap._4_4_;
      local_58[0].ArrayNum = 1;
      local_1c8._0_4_ = 0xffffffff;
      local_1c8._4_2_ = 0xffff;
      local_1b8._0_1_ = 3;
      local_1b8._4_4_ = 0x400;
      local_1b0 = 8;
      local_1ac = 0;
      local_1a0 = 0;
      local_58[0].DataPtr = (FRHITransitionInfo *)local_328.ShaderContent;
      FRHIComputeCommandList::Transition((FRHIComputeCommandList *)param_1,local_58,None);
    }
    if (local_e8 != '\0') {
      FRHIBreadcrumbScope::~FRHIBreadcrumbScope(&local_f8);
    }
  }
  if (bVar11) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar15) && (FVar33 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_00 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_00 == (FThreadStats *)0x0) {
      this_01 = FThreadStatsPool::Get();
      this_00 = FThreadStatsPool::GetFromPool(this_01);
    }
    if (this_00->bWaitForExplicitFlush < this_00->ScopeCount) {
      local_2d8.NameAndInfo.Index = FVar33.ComparisonIndex.Value;
      local_2d8.NameAndInfo.Number = FVar33.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_350);
      local_2d8.StatData.Pad[4] = '\0';
      local_2d8.StatData.Pad[5] = '\0';
      local_2d8.StatData.Pad[6] = '\0';
      local_2d8.StatData.Pad[7] = '\0';
      local_2d8.StatData.Pad[0] = local_350.s.LowPart._0_1_;
      local_2d8.StatData.Pad[1] = local_350.s.LowPart._1_1_;
      local_2d8.StatData.Pad[2] = local_350.s.LowPart._2_1_;
      local_2d8.StatData.Pad[3] = local_350.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_00,&local_2d8);
      piVar1 = &this_00->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_00,false,false);
        return;
      }
      if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_00,false,false);
      }
    }
  }
  return;
}

// IsMaterialValid @ 14935f330

bool __thiscall
FNiagaraRendererRibbons::IsMaterialValid(FNiagaraRendererRibbons *this,UMaterialInterface *param_1)

{
  char cVar1;
  
  if (param_1 != (UMaterialInterface *)0x0) {
    cVar1 = (**(code **)(param_1->_padding_ + 0x378))(param_1,0xb);
    if (cVar1 != '\0') {
      return true;
    }
  }
  return false;
}

// ReleaseRenderThreadResources @ 149365640

void __thiscall FNiagaraRendererRibbons::ReleaseRenderThreadResources(FNiagaraRendererRibbons *this)

{
  FRHIBuffer *pFVar1;
  FRHIShaderResourceView *pFVar2;
  FRHIResource *pFVar3;
  bool bVar4;
  
  (this->ShapeState).SliceTriangleToVertexIdsBuffer.NumBytes = 0;
  pFVar1 = (this->ShapeState).SliceTriangleToVertexIdsBuffer.Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->ShapeState).SliceTriangleToVertexIdsBuffer.Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->ShapeState).SliceTriangleToVertexIdsBuffer.SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->ShapeState).SliceTriangleToVertexIdsBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  (this->ShapeState).SliceVertexDataBuffer.NumBytes = 0;
  pFVar1 = (this->ShapeState).SliceVertexDataBuffer.Buffer.Reference;
  if (pFVar1 != (FRHIBuffer *)0x0) {
    (this->ShapeState).SliceVertexDataBuffer.Buffer.Reference = (FRHIBuffer *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar1);
  }
  pFVar2 = (this->ShapeState).SliceVertexDataBuffer.SRV.Reference;
  if (pFVar2 != (FRHIShaderResourceView *)0x0) {
    (this->ShapeState).SliceVertexDataBuffer.SRV.Reference = (FRHIShaderResourceView *)0x0;
    FRHIResource::Release((FRHIResource *)pFVar2);
  }
  bVar4 = IsRayTracingAllowed();
  if (bVar4) {
    (**(code **)(this->_padding_ + 0x20))(&this->_padding_);
    *(undefined4 *)&this->_padding_ = 0;
    pFVar3 = (FRHIResource *)this->_padding_;
    if (pFVar3 != (FRHIResource *)0x0) {
      this->_padding_ = 0;
      FRHIResource::Release(pFVar3);
    }
    pFVar3 = (FRHIResource *)this->_padding_;
    if (pFVar3 != (FRHIResource *)0x0) {
      this->_padding_ = 0;
      FRHIResource::Release(pFVar3);
    }
    pFVar3 = (FRHIResource *)this->_padding_;
    if (pFVar3 != (FRHIResource *)0x0) {
      this->_padding_ = 0;
      FRHIResource::Release(pFVar3);
    }
  }
  return;
}

// SetupComputeVertexGenParams @ 14936bc60

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

FRibbonComputeUniformParameters * __thiscall
FNiagaraRendererRibbons::SetupComputeVertexGenParams
          (FNiagaraRendererRibbons *this,FRibbonComputeUniformParameters *__return_storage_ptr__,
          FNiagaraGpuComputeDispatchInterface *param_1,
          TSharedPtr<FNiagaraRibbonRenderingFrameResources,1> *param_2,
          FNiagaraRibbonGPUInitParameters *param_3)

{
  ENiagaraRibbonUVDistributionMode EVar1;
  undefined1 uVar2;
  ENiagaraRibbonFacingMode EVar3;
  int iVar4;
  FNiagaraRendererLayout *pFVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  bool bVar8;
  uint uVar9;
  FRibbonComputeUniformParameters *pFVar10;
  FNiagaraRibbonRenderingFrameResources *pFVar11;
  uint uVar12;
  FRHIShaderResourceView *pFVar13;
  FRHIShaderResourceView *pFVar14;
  uint uVar15;
  
  *(undefined8 *)&__return_storage_ptr__->field_0x4 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->EmitterParticleCountsBuffer + 4) = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x14 = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->NiagaraParticleDataFloat + 4) = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->NiagaraParticleDataHalf + 4) = 0;
  *(undefined8 *)((longlong)&__return_storage_ptr__->NiagaraParticleDataInt + 4) = 0;
  __return_storage_ptr__->NiagaraIntDataStride = 0;
  __return_storage_ptr__->RibbonIdDataOffset = 0;
  __return_storage_ptr__->RibbonLinkOrderDataOffset = 0;
  __return_storage_ptr__->PositionDataOffset = 0;
  __return_storage_ptr__->PrevPositionDataOffset = 0;
  __return_storage_ptr__->VelocityDataOffset = 0;
  __return_storage_ptr__->WidthDataOffset = 0;
  __return_storage_ptr__->PrevWidthDataOffset = 0;
  __return_storage_ptr__->TwistDataOffset = 0;
  __return_storage_ptr__->PrevTwistDataOffset = 0;
  __return_storage_ptr__->ColorDataOffset = 0;
  __return_storage_ptr__->FacingDataOffset = 0;
  __return_storage_ptr__->PrevFacingDataOffset = 0;
  __return_storage_ptr__->NormalizedAgeDataOffset = 0;
  __return_storage_ptr__->MaterialRandomDataOffset = 0;
  __return_storage_ptr__->MaterialParamValidMask = 0;
  __return_storage_ptr__->MaterialParamDataOffset = 0;
  __return_storage_ptr__->MaterialParam1DataOffset = 0;
  __return_storage_ptr__->MaterialParam2DataOffset = 0;
  __return_storage_ptr__->MaterialParam3DataOffset = 0;
  __return_storage_ptr__->DistanceFromStartOffset = 0;
  __return_storage_ptr__->U0OverrideDataOffset = 0;
  __return_storage_ptr__->V0RangeOverrideDataOffset = 0;
  __return_storage_ptr__->U1OverrideDataOffset = 0;
  __return_storage_ptr__->V1RangeOverrideDataOffset = 0;
  __return_storage_ptr__->U0DistributionMode = 0;
  __return_storage_ptr__->U1DistributionMode = 0;
  __return_storage_ptr__->TotalNumParticlesDirect = param_3->NumInstances;
  bVar8 = IsInParallelRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraGpuComputeDispatchInterface.h"
                         ,0x6a,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  if (((param_1->GPUInstanceCounterManager).AllocatedInstanceCounts <
       (param_1->GPUInstanceCounterManager).UsedInstanceCounts) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("UsedInstanceCounts <= AllocatedInstanceCounts",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraGPUInstanceCountManager.h"
                         ,0x44,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  pFVar13 = (param_1->GPUInstanceCounterManager).CountBuffer.SRV.Reference;
  pFVar14 = (FRHIShaderResourceView *)DummyUIntBuffer._64_8_;
  if (pFVar13 != (FRHIShaderResourceView *)0x0) {
    pFVar14 = pFVar13;
  }
  pFVar11 = param_2->Object;
  uVar12 = param_3->GPUInstanceCountBufferOffset;
  __return_storage_ptr__->EmitterParticleCountsBuffer = pFVar14;
  __return_storage_ptr__->EmitterParticleCountsBufferOffset = uVar12;
  if ((pFVar11 == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  pFVar11 = param_2->Object;
  pFVar13 = pFVar11->ParticleFloatSRV;
  pFVar14 = (FRHIShaderResourceView *)DummyFloatBuffer._64_8_;
  if (pFVar13 != (FRHIShaderResourceView *)0x0) {
    pFVar14 = pFVar13;
  }
  __return_storage_ptr__->NiagaraParticleDataFloat = pFVar14;
  if ((pFVar11 == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  pFVar11 = param_2->Object;
  pFVar13 = (FRHIShaderResourceView *)DummyHalfBuffer._64_8_;
  if (pFVar11->ParticleHalfSRV != (FRHIShaderResourceView *)0x0) {
    if ((pFVar11 == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
      return pFVar10;
    }
    pFVar11 = param_2->Object;
    pFVar13 = pFVar11->ParticleHalfSRV;
  }
  __return_storage_ptr__->NiagaraParticleDataHalf = pFVar13;
  if ((pFVar11 == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  pFVar11 = param_2->Object;
  pFVar13 = pFVar11->ParticleIntSRV;
  pFVar14 = (FRHIShaderResourceView *)DummyIntBuffer._64_8_;
  if (pFVar13 != (FRHIShaderResourceView *)0x0) {
    pFVar14 = pFVar13;
  }
  __return_storage_ptr__->NiagaraParticleDataInt = pFVar14;
  if ((pFVar11 == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  pFVar11 = param_2->Object;
  __return_storage_ptr__->NiagaraFloatDataStride = pFVar11->ParticleFloatDataStride;
  if ((pFVar11 == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  pFVar11 = param_2->Object;
  __return_storage_ptr__->NiagaraIntDataStride = pFVar11->ParticleIntDataStride;
  if ((pFVar11 == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  pFVar5 = this->RendererLayout;
  __return_storage_ptr__->RibbonIdDataOffset = param_2->Object->RibbonIdParamOffset;
  bVar8 = IsInParallelRenderingThread();
  if ((!bVar8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                         ,0x9b,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  iVar4 = (pFVar5->VFVariables_RT).ArrayNum;
  pFVar6 = (pFVar5->VFVariables_RT).AllocatorInstance.Data;
  if ((iVar4 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  if ((iVar4 < 1) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  uVar15 = 0xffffffff;
  uVar9 = 0xffffffff;
  uVar12 = 0xffffffff;
  if (*(ushort *)(pFVar6 + 2) != 0xffff) {
    uVar12 = (uint)*(ushort *)(pFVar6 + 2);
  }
  __return_storage_ptr__->PositionDataOffset =
       -(uint)(pFVar6[7] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  if ((iVar4 < 0x12) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  if (*(ushort *)(pFVar6 + 0x8a) != 0xffff) {
    uVar9 = (uint)*(ushort *)(pFVar6 + 0x8a);
  }
  __return_storage_ptr__->PrevPositionDataOffset =
       -(uint)(pFVar6[0x8f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar9;
  if ((iVar4 < 2) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  uVar9 = 0xffffffff;
  uVar12 = 0xffffffff;
  if (*(ushort *)(pFVar6 + 10) != 0xffff) {
    uVar12 = (uint)*(ushort *)(pFVar6 + 10);
  }
  __return_storage_ptr__->VelocityDataOffset =
       -(uint)(pFVar6[0xf] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  if ((iVar4 < 3) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  uVar12 = uVar9;
  if (*(ushort *)(pFVar6 + 0x12) != 0xffff) {
    uVar12 = (uint)*(ushort *)(pFVar6 + 0x12);
  }
  __return_storage_ptr__->ColorDataOffset =
       -(uint)(pFVar6[0x17] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  if ((iVar4 < 4) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  uVar12 = uVar9;
  if (*(ushort *)(pFVar6 + 0x1a) != 0xffff) {
    uVar12 = (uint)*(ushort *)(pFVar6 + 0x1a);
  }
  __return_storage_ptr__->WidthDataOffset =
       -(uint)(pFVar6[0x1f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  if ((iVar4 < 0x13) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  if (*(ushort *)(pFVar6 + 0x92) != 0xffff) {
    uVar9 = (uint)*(ushort *)(pFVar6 + 0x92);
  }
  __return_storage_ptr__->PrevWidthDataOffset =
       -(uint)(pFVar6[0x97] != (FScriptContainerElement)0x0) & 0x80000000 | uVar9;
  if ((iVar4 < 5) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  uVar9 = 0xffffffff;
  uVar12 = 0xffffffff;
  if (*(ushort *)(pFVar6 + 0x22) != 0xffff) {
    uVar12 = (uint)*(ushort *)(pFVar6 + 0x22);
  }
  __return_storage_ptr__->TwistDataOffset =
       -(uint)(pFVar6[0x27] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  if ((iVar4 < 0x15) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  uVar12 = uVar9;
  if (*(ushort *)(pFVar6 + 0xa2) != 0xffff) {
    uVar12 = (uint)*(ushort *)(pFVar6 + 0xa2);
  }
  __return_storage_ptr__->PrevTwistDataOffset =
       -(uint)(pFVar6[0xa7] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  if ((iVar4 < 7) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  uVar12 = uVar9;
  if (*(ushort *)(pFVar6 + 0x32) != 0xffff) {
    uVar12 = (uint)*(ushort *)(pFVar6 + 0x32);
  }
  __return_storage_ptr__->NormalizedAgeDataOffset =
       -(uint)(pFVar6[0x37] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  if ((iVar4 < 8) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  uVar12 = uVar9;
  if (*(ushort *)(pFVar6 + 0x3a) != 0xffff) {
    uVar12 = (uint)*(ushort *)(pFVar6 + 0x3a);
  }
  __return_storage_ptr__->MaterialRandomDataOffset =
       -(uint)(pFVar6[0x3f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  if ((iVar4 < 9) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  uVar12 = uVar9;
  if (*(ushort *)(pFVar6 + 0x42) != 0xffff) {
    uVar12 = (uint)*(ushort *)(pFVar6 + 0x42);
  }
  __return_storage_ptr__->MaterialParamDataOffset =
       -(uint)(pFVar6[0x47] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  if ((iVar4 < 10) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  uVar12 = uVar9;
  if (*(ushort *)(pFVar6 + 0x4a) != 0xffff) {
    uVar12 = (uint)*(ushort *)(pFVar6 + 0x4a);
  }
  __return_storage_ptr__->MaterialParam1DataOffset =
       -(uint)(pFVar6[0x4f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  if ((iVar4 < 0xb) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  uVar12 = uVar9;
  if (*(ushort *)(pFVar6 + 0x52) != 0xffff) {
    uVar12 = (uint)*(ushort *)(pFVar6 + 0x52);
  }
  __return_storage_ptr__->MaterialParam2DataOffset =
       -(uint)(pFVar6[0x57] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  if ((iVar4 < 0xc) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar8)) {
    pcVar7 = (code *)swi(3);
    pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
    return pFVar10;
  }
  if (*(ushort *)(pFVar6 + 0x5a) != 0xffff) {
    uVar9 = (uint)*(ushort *)(pFVar6 + 0x5a);
  }
  EVar1 = (this->UV0Settings).DistributionMode;
  __return_storage_ptr__->MaterialParam3DataOffset =
       -(uint)(pFVar6[0x5f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar9;
  if ((EVar1 == TiledFromStartOverRibbonLength) ||
     ((this->UV1Settings).DistributionMode == TiledFromStartOverRibbonLength)) {
    if ((iVar4 < 0xd) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
      return pFVar10;
    }
    uVar12 = 0xffffffff;
    if (*(ushort *)(pFVar6 + 0x62) != 0xffff) {
      uVar12 = (uint)*(ushort *)(pFVar6 + 0x62);
    }
    uVar12 = -(uint)(pFVar6[0x67] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  }
  else {
    uVar12 = 0xffffffff;
  }
  __return_storage_ptr__->DistanceFromStartOffset = uVar12;
  if ((this->UV0Settings).bEnablePerParticleUOverride == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    if ((iVar4 < 0xe) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
      return pFVar10;
    }
    uVar12 = 0xffffffff;
    if (*(ushort *)(pFVar6 + 0x6a) != 0xffff) {
      uVar12 = (uint)*(ushort *)(pFVar6 + 0x6a);
    }
    uVar12 = -(uint)(pFVar6[0x6f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  }
  __return_storage_ptr__->U0OverrideDataOffset = uVar12;
  if ((this->UV0Settings).bEnablePerParticleVRangeOverride == '\0') {
    uVar12 = 0xffffffff;
  }
  else {
    if ((iVar4 < 0xf) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
      return pFVar10;
    }
    uVar12 = 0xffffffff;
    if (*(ushort *)(pFVar6 + 0x72) != 0xffff) {
      uVar12 = (uint)*(ushort *)(pFVar6 + 0x72);
    }
    uVar12 = -(uint)(pFVar6[0x77] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  }
  __return_storage_ptr__->V0RangeOverrideDataOffset = uVar12;
  if ((this->UV1Settings).bEnablePerParticleUOverride == 0) {
    uVar12 = 0xffffffff;
  }
  else {
    if ((iVar4 < 0x10) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
      return pFVar10;
    }
    uVar12 = 0xffffffff;
    if (*(ushort *)(pFVar6 + 0x7a) != 0xffff) {
      uVar12 = (uint)*(ushort *)(pFVar6 + 0x7a);
    }
    uVar12 = -(uint)(pFVar6[0x7f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  }
  __return_storage_ptr__->U1OverrideDataOffset = uVar12;
  if ((this->UV1Settings).bEnablePerParticleVRangeOverride == '\0') {
    uVar12 = 0xffffffff;
  }
  else {
    if ((iVar4 < 0x11) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
      return pFVar10;
    }
    uVar12 = 0xffffffff;
    if (*(ushort *)(pFVar6 + 0x82) != 0xffff) {
      uVar12 = (uint)*(ushort *)(pFVar6 + 0x82);
    }
    uVar12 = -(uint)(pFVar6[0x87] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
  }
  __return_storage_ptr__->MaterialParamValidMask = (this->GenerationConfig).MaterialParamValidMask;
  EVar3 = this->FacingMode;
  __return_storage_ptr__->V1RangeOverrideDataOffset = uVar12;
  if ((EVar3 == Custom) || (EVar3 == CustomSideVector)) {
    if ((iVar4 < 6) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
      return pFVar10;
    }
    uVar12 = 0xffffffff;
    if (*(ushort *)(pFVar6 + 0x2a) != 0xffff) {
      uVar12 = (uint)*(ushort *)(pFVar6 + 0x2a);
    }
    __return_storage_ptr__->FacingDataOffset =
         -(uint)(pFVar6[0x2f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar12;
    if ((iVar4 < 0x14) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar8)) {
      pcVar7 = (code *)swi(3);
      pFVar10 = (FRibbonComputeUniformParameters *)(*pcVar7)();
      return pFVar10;
    }
    uVar15 = 0xffffffff;
    if (*(ushort *)(pFVar6 + 0x9a) != 0xffff) {
      uVar15 = (uint)*(ushort *)(pFVar6 + 0x9a);
    }
    uVar15 = -(uint)(pFVar6[0x9f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar15;
  }
  else {
    __return_storage_ptr__->FacingDataOffset = -1;
  }
  __return_storage_ptr__->RibbonLinkOrderDataOffset = this->GpuRibbonLinkOrderOffset;
  __return_storage_ptr__->U0DistributionMode = (uint)(this->UV0Settings).DistributionMode;
  __return_storage_ptr__->U1DistributionMode = (uint)(this->UV1Settings).DistributionMode;
  __return_storage_ptr__->PrevFacingDataOffset = uVar15;
  return __return_storage_ptr__;
}

// SetupMeshBatchAndCollectorResourceForView @ 14936d820

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
FNiagaraRendererRibbons::SetupMeshBatchAndCollectorResourceForView
          (FNiagaraRendererRibbons *this,FRHICommandListBase *param_1,
          FNiagaraIndexGenerationInput *param_2,FNiagaraDynamicDataRibbon *param_3,
          FNiagaraDataBuffer *param_4,FSceneView *param_5,FSceneViewFamily *param_6,
          FNiagaraSceneProxy *param_7,TSharedPtr<FNiagaraRibbonRenderingFrameResources,1> *param_8,
          FNiagaraRibbonRenderingFrameViewResources *param_9,FMeshBatch *param_10,bool param_11)

{
  uchar *puVar1;
  TRefCountPtr<FRHIUniformBuffer> *pTVar2;
  ENiagaraRibbonShapeMode EVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  FRHIShaderResourceView *pFVar7;
  FRHIUniformBufferLayout *pFVar8;
  FRHIUniformBuffer *pFVar9;
  TUniformBufferRef<FNiagaraRibbonUniformParameters> this_00;
  TUniformBufferRef<FNiagaraRibbonUniformParameters> this_01;
  ForElementType<FMeshBatchElement> FVar10;
  code *pcVar11;
  longlong lVar12;
  FRHICommandListBase *pFVar13;
  FNiagaraSceneProxy *this_02;
  FSceneView *this_03;
  bool bVar14;
  uint uVar15;
  ESceneDepthPriorityGroup EVar16;
  FShaderParametersMetadata *pFVar17;
  TRefCountPtr<FRHIUniformBuffer> TVar18;
  UMaterial *pUVar19;
  FMaterialRenderProxy *pFVar20;
  FRHIUniformBuffer *pFVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  wchar_t *pwVar25;
  undefined1 auStack_168 [32];
  FScriptContainerElement *local_148;
  FScriptContainerElement *local_140;
  uint local_138;
  FRHIResource *local_130;
  FRHICommandListBase *local_128;
  FNiagaraSceneProxy *local_120;
  FSceneView *local_118;
  FMaterialRenderProxy *local_110;
  FNiagaraIndexGenerationInput *local_108;
  undefined1 local_f8 [40];
  ForAnyElementType local_d0;
  FRHIShaderResourceView *local_c8;
  ForAnyElementType local_c0;
  FRHIShaderResourceView *local_b8;
  ForAnyElementType local_b0;
  FRHIShaderResourceView *local_a8;
  ForAnyElementType local_a0;
  int local_98;
  longlong local_88;
  TVector<double>_u_0 local_80;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined4 local_4f;
  undefined2 local_4b;
  undefined1 local_49;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_168;
  local_118 = param_5;
  local_120 = param_7;
  uVar24 = *(uint *)&(param_6->EngineShowFlags).field_0x10;
  local_110 = param_3->Material;
  uVar24 = CONCAT31((uint3)(uVar24 >> 9),(char)(uVar24 >> 1)) & 0xffffff01;
  local_138 = uVar24;
  local_128 = param_1;
  local_108 = param_2;
  if ((local_110 == (FMaterialRenderProxy *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("MaterialRenderProxy",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                          ,0x8a5,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  if (((param_9->IndexBuffer).Object == (FNiagaraRibbonIndexBuffer *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  pFVar7 = (((param_9->IndexBuffer).Object)->SRV).Reference;
  local_f8._20_4_ = ZEXT14(param_11);
  local_f8._24_8_ = DummyUIntBuffer._64_8_;
  if (pFVar7 != (FRHIShaderResourceView *)0x0) {
    local_f8._24_8_ = pFVar7;
  }
  local_f8._32_8_ = (this->VertexBuffers).SortedIndicesBuffer.SRV.Reference;
  local_d0.Data =
       (FScriptContainerElement *)(this->VertexBuffers).TangentsAndDistancesBuffer.SRV.Reference;
  pFVar7 = (this->VertexBuffers).MultiRibbonIndicesBuffer.SRV.Reference;
  local_c8 = (FRHIShaderResourceView *)DummyUIntBuffer._64_8_;
  if (pFVar7 != (FRHIShaderResourceView *)0x0) {
    local_c8 = pFVar7;
  }
  local_c0.Data =
       (FScriptContainerElement *)(this->VertexBuffers).RibbonLookupTableBuffer.SRV.Reference;
  local_a8 = (this->ShapeState).SliceVertexDataBuffer.SRV.Reference;
  if ((param_8->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_b8 = param_8->Object->ParticleFloatSRV;
  if ((param_8->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_b0.Data = (FScriptContainerElement *)param_8->Object->ParticleHalfSRV;
  if ((param_8->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar4 = param_8->Object->ParticleHalfDataStride;
  if ((param_8->Object == (FNiagaraRibbonRenderingFrameResources *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  iVar5 = param_8->Object->ParticleFloatDataStride;
  local_f8._0_4_ = iVar4;
  if (iVar4 < iVar5) {
    local_f8._0_4_ = iVar5;
  }
  local_f8._4_4_ = ZEXT14(this->FacingMode);
  EVar3 = (this->ShapeState).Shape;
  local_f8._12_4_ = (this->GenerationConfig).bNeedsPreciseMotionVectors;
  local_f8._8_4_ = ZEXT14(EVar3);
  if ((EVar3 != Plane) || (local_f8._16_4_ = 0, this->bUseGeometryNormals != 0)) {
    local_f8._16_4_ = 1;
  }
  if (param_11) {
    if (((param_9->IndirectDrawBuffer).Object == (FRWBuffer *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    local_a0.Data =
         (FScriptContainerElement *)(((param_9->IndirectDrawBuffer).Object)->SRV).Reference;
  }
  else {
    local_a0.Data = (FScriptContainerElement *)DummyUIntBuffer._64_8_;
  }
  local_98 = param_11 - 1;
  pFVar17 = FNiagaraRibbonVFLooseParameters::GetStructMetadata();
  if (((pFVar17->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsLayoutInitialized()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                          ,0x17c,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  local_148 = (FScriptContainerElement *)CONCAT44(local_148._4_4_,1);
  TVar18 = RHICreateUniformBuffer
                     (&local_130,(FRHIUniformBufferLayout *)local_f8,
                      (EUniformBufferUsage)(pFVar17->Layout).Reference,ValidateResources);
  pFVar21 = (FRHIUniformBuffer *)(TVar18.Reference)->_padding_;
  if (pFVar21 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::AddRef((FRHIResource *)pFVar21);
    pFVar17 = FNiagaraRibbonVFLooseParameters::GetStructMetadata();
    if (((pFVar17->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsLayoutInitialized()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                            ,0x17c,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    pFVar8 = (pFVar21->Layout).Reference;
    if ((pFVar17->Layout).Reference != pFVar8) {
      if ((pFVar8->Name).Data.ArrayNum == 0) {
        pwVar25 = L"";
      }
      else {
        pwVar25 = (wchar_t *)(pFVar8->Name).Data.AllocatorInstance.Data;
      }
      pFVar17 = FNiagaraRibbonVFLooseParameters::GetStructMetadata();
      if (((pFVar17->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsLayoutInitialized()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                              ,0x177,L""), bVar14)) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
      pFVar8 = (pFVar17->Layout).Reference;
      if ((pFVar8->Name).Data.ArrayNum == 0) {
        local_148 = (FScriptContainerElement *)0x15060d16c;
      }
      else {
        local_148 = (pFVar8->Name).Data.AllocatorInstance.Data;
      }
      local_140 = (FScriptContainerElement *)pwVar25;
      bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                          ,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                          ,0x96,
                          L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                         );
      uVar24 = local_138;
      if (bVar14) {
        pcVar11 = (code *)swi(3);
        (*pcVar11)();
        return;
      }
    }
  }
  if (local_130 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_130);
  }
  pTVar2 = &(param_9->VertexFactory).LooseParameterUniformBuffer;
  if (pTVar2 != (TRefCountPtr<FRHIUniformBuffer> *)&local_88) {
    pFVar9 = pTVar2->Reference;
    pTVar2->Reference = pFVar21;
    pFVar21 = pFVar9;
  }
  if (pFVar21 != (FRHIUniformBuffer *)0x0) {
    FRHIResource::Release((FRHIResource *)pFVar21);
  }
  pFVar13 = local_128;
  (**(code **)((param_9->VertexFactory)._padding_ + 0x18))(param_9,local_128);
  this_00 = param_9->UniformBuffer;
  if (this_00 != (TUniformBufferRef<FNiagaraRibbonUniformParameters>)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
  }
  this_01 = (param_9->VertexFactory).NiagaraRibbonUniformBuffer;
  if (this_01 != this_00) {
    (param_9->VertexFactory).NiagaraRibbonUniformBuffer = this_00;
    if (this_00 != (TUniformBufferRef<FNiagaraRibbonUniformParameters>)0x0) {
      FRHIResource::AddRef((FRHIResource *)this_00);
    }
    if (this_01 != (TUniformBufferRef<FNiagaraRibbonUniformParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
    }
  }
  if (this_00 != (TUniformBufferRef<FNiagaraRibbonUniformParameters>)0x0) {
    FRHIResource::Release((FRHIResource *)this_00);
  }
  this_03 = local_118;
  this_02 = local_120;
  param_10->VertexFactory = (FVertexFactory *)param_9;
  if (((local_120->_padding_ & 0x20000000000) == 0) || (this->bCastShadows == 0)) {
    uVar23 = 0;
  }
  else {
    uVar23 = 4;
  }
  uVar6 = *(uint *)&param_10->field_0xd4;
  param_10->CastShadow = uVar23 >> 2;
  if (((local_120->_padding_ & 0x20000000000) == 0) || (this->bCastShadows == 0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = 0x800000;
  }
  uVar15 = uVar6 & 0xff7fffdb | uVar23 | uVar15;
  *(uint *)&param_10->field_0xd4 = uVar15;
  uVar15 = ((byte)local_120->_padding_ ^ uVar15) & 1 ^ uVar15;
  *(uint *)&param_10->field_0xd4 = uVar15;
  *(uint *)&param_10->field_0xd4 =
       (((this->ShapeState).bDisableBackfaceCulling & 1) * 2 ^ uVar15 & 0xfffffffd) & 0xfffffc7f;
  EVar16 = FPrimitiveSceneProxy::GetDepthPriorityGroup((FPrimitiveSceneProxy *)local_120,local_118);
  uVar23 = (EVar16 << 10 ^ *(uint *)&param_10->field_0xd4) & 0x1c00 ^ *(uint *)&param_10->field_0xd4
  ;
  *(uint *)&param_10->field_0xd4 = uVar23 | 0x2000;
  lVar12 = this_02->_padding_;
  param_10->SegmentIndex = 0;
  *(uint *)&param_10->field_0xd4 =
       -(uint)((lVar12 & 0x600) != 0) & 0x4000 | uVar23 & 0xffffbfff | 0x2000;
  pFVar20 = local_110;
  if ((char)uVar24 != '\0') {
    pUVar19 = UMaterial::GetDefaultMaterial(MD_Surface);
    pFVar20 = (FMaterialRenderProxy *)(**(code **)(pUVar19->_padding_ + 0x310))(pUVar19);
  }
  param_10->MaterialRenderProxy = pFVar20;
  iVar4 = (param_10->Elements).ArrayNum;
  if (iVar4 < 1) {
    local_148 = (FScriptContainerElement *)0x0;
    local_140 = (FScriptContainerElement *)(longlong)iVar4;
    bVar14 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar14) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  FVar10 = (param_10->Elements).AllocatorInstance.SecondaryData;
  if (FVar10 != (ForElementType<FMeshBatchElement>)0x0) {
    param_10 = (FMeshBatch *)FVar10;
  }
  *(FNiagaraRibbonIndexBuffer **)((longlong)param_10 + 0x18) = (param_9->IndexBuffer).Object;
  if (((param_9->IndexBuffer).Object == (FNiagaraRibbonIndexBuffer *)0x0) &&
     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L""), bVar14)) {
    pcVar11 = (code *)swi(3);
    (*pcVar11)();
    return;
  }
  *(uint *)((longlong)param_10 + 0x58) = ((param_9->IndexBuffer).Object)->FirstIndex;
  puVar1 = (uchar *)((longlong)param_10 + 0x60);
  puVar1[0] = '\x01';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1 = (uchar *)((longlong)param_10 + 0x68);
  puVar1[0] = '\0';
  puVar1[1] = '\0';
  puVar1[2] = '\0';
  puVar1[3] = '\0';
  puVar1[4] = '\0';
  puVar1[5] = '\0';
  puVar1[6] = '\0';
  puVar1[7] = '\0';
  if (param_11) {
    puVar1 = (uchar *)((longlong)param_10 + 0x5c);
    puVar1[0] = '\0';
    puVar1[1] = '\0';
    puVar1[2] = '\0';
    puVar1[3] = '\0';
    if (((param_9->IndirectDrawBuffer).Object == (FRWBuffer *)0x0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
    *(FRHIBuffer **)((longlong)param_10 + 0x48) =
         (((param_9->IndirectDrawBuffer).Object)->Buffer).Reference;
    bVar14 = FSceneView::IsInstancedStereoPass(this_03);
    uVar22 = 0xc;
    if (bVar14) {
      uVar22 = 0x20;
    }
    *(undefined4 *)((longlong)param_10 + 0x50) = uVar22;
  }
  else {
    uVar24 = local_108->CPUTriangleCount;
    *(uint *)((longlong)param_10 + 0x5c) = uVar24;
    if ((uVar24 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("MeshElement.NumPrimitives > 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraRendererRibbons.cpp"
                            ,0x8e4,L""), bVar14)) {
      pcVar11 = (code *)swi(3);
      (*pcVar11)();
      return;
    }
  }
  local_50 = 0;
  local_4f = 0;
  local_4b = 0;
  local_49 = 0;
  local_80._s_0.X = 0.0;
  local_80._s_0.Y = 0.0;
  local_80._s_0.Z = 0.0;
  uStack_68._0_2_ = 0;
  uStack_68._2_1_ = '\0';
  uStack_68._3_1_ = 0;
  uStack_68._4_1_ = None;
  uStack_68._5_3_ = 0;
  local_60 = 0;
  uStack_58 = 0;
  pFVar21 = FNiagaraSceneProxy::GetCustomUniformBuffer
                      (this_02,pFVar13,false,(TBox<double> *)&local_80._s_0);
  *(FRHIUniformBuffer **)param_10 = pFVar21;
  return;
}

// SetupPerViewUniformBuffer @ 14936df70

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
FNiagaraRendererRibbons::SetupPerViewUniformBuffer
          (FNiagaraRendererRibbons *this,FNiagaraIndexGenerationInput *param_1,FSceneView *param_2,
          FSceneViewFamily *param_3,FNiagaraSceneProxy *param_4,
          TUniformBufferRef<FNiagaraRibbonUniformParameters> *param_5)

{
  int iVar1;
  FNiagaraRendererLayout *pFVar2;
  FScriptContainerElement *pFVar3;
  TUniformBufferRef<FNiagaraRibbonUniformParameters> this_00;
  TUniformBufferRef<FNiagaraRibbonUniformParameters> this_01;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  TVector<float> *pTVar8;
  FShaderParametersMetadata *pFVar9;
  TRefCountPtr<FRHIUniformBuffer> TVar10;
  uint uVar11;
  FRHIResource *local_res8;
  float local_128;
  float local_124;
  float local_120;
  undefined4 local_11c;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_10c;
  undefined8 local_108;
  ForAnyElementType FStack_100;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  undefined8 local_d8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  float local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  int local_88;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
  uint local_78;
  undefined8 local_74;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float fStack_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  undefined8 local_40;
  TUniformBufferRef<FNiagaraRibbonUniformParameters> local_38 [2];
  
  local_74 = 0;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  fStack_60 = 0.0;
  local_48 = 0;
  local_5c = 0;
  local_40 = 0;
  if (((this->_padding_ & 1) != 0) || ((param_4->DynamicData).bUseCullProxy != false)) {
    local_48 = 1;
  }
  local_44 = (param_3->Time).DeltaWorldTimeSeconds;
  pTVar8 = FNiagaraSceneProxy::GetLWCRenderTile(param_4);
  uStack_68 = (undefined4)*(undefined8 *)&pTVar8->field0_0x0;
  uStack_64 = (undefined4)((ulonglong)*(undefined8 *)&pTVar8->field0_0x0 >> 0x20);
  fStack_60 = (pTVar8->field0_0x0)._s_0.Z;
  local_118 = (float)(param_2->ViewMatrices).ViewMatrix.M[0][1];
  local_a0 = param_1->SubSegmentCount;
  local_10c = 0x3f800000;
  local_11c = 0x3f800000;
  local_114 = (float)(param_2->ViewMatrices).ViewMatrix.M[1][1];
  local_110 = (float)(param_2->ViewMatrices).ViewMatrix.M[2][1];
  local_128 = (float)(param_2->ViewMatrices).ViewMatrix.M[0][0];
  local_124 = (float)(param_2->ViewMatrices).ViewMatrix.M[1][0];
  local_120 = (float)(param_2->ViewMatrices).ViewMatrix.M[2][0];
  local_98 = param_1->SegmentBitShift;
  local_94 = param_1->SegmentBitMask;
  local_90 = param_1->SubSegmentBitShift;
  local_8c = param_1->SubSegmentBitMask;
  local_88 = (this->ShapeState).BitMaskForShape;
  local_9c = __real_3f800000 / (float)local_a0;
  local_84 = (uint)(this->ShapeState).bShouldFlipNormalToView;
  local_108._0_4_ = 0;
  local_108._4_4_ = 0;
  FStack_100.Data = (FScriptContainerElement *)0x0;
  if (((this->GenerationConfig).bHasFullRibbonIDs == 0) &&
     ((this->GenerationConfig).bHasSimpleRibbonIDs == 0)) {
    local_80 = 0;
  }
  else {
    local_80 = 1;
  }
  pFVar2 = this->RendererLayout;
  bVar5 = IsInParallelRenderingThread();
  if ((!bVar5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInParallelRenderingThread()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Public\\NiagaraRendererProperties.h"
                         ,0x9b,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pFVar3 = (pFVar2->VFVariables_RT).AllocatorInstance.Data;
  iVar1 = (pFVar2->VFVariables_RT).ArrayNum;
  if ((iVar1 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if ((iVar1 < 1) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar7 = 0xffffffff;
  uVar11 = 0xffffffff;
  local_f8 = 0xffffffff;
  if (*(ushort *)(pFVar3 + 2) != 0xffff) {
    local_f8 = (uint)*(ushort *)(pFVar3 + 2);
  }
  local_f8 = -(uint)(pFVar3[7] != (FScriptContainerElement)0x0) & 0x80000000 | local_f8;
  if ((iVar1 < 0x12) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(ushort *)(pFVar3 + 0x8a) != 0xffff) {
    uVar11 = (uint)*(ushort *)(pFVar3 + 0x8a);
  }
  local_f4 = -(uint)(pFVar3[0x8f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar11;
  uVar11 = 0xffffffff;
  if (local_f4 == 0xffffffff) {
    if ((iVar1 < 1) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_f4 = uVar11;
    if (*(ushort *)(pFVar3 + 2) != 0xffff) {
      local_f4 = (uint)*(ushort *)(pFVar3 + 2);
    }
    local_f4 = -(uint)(pFVar3[7] != (FScriptContainerElement)0x0) & 0x80000000 | local_f4;
  }
  if ((iVar1 < 2) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_f0 = uVar11;
  if (*(ushort *)(pFVar3 + 10) != 0xffff) {
    local_f0 = (uint)*(ushort *)(pFVar3 + 10);
  }
  local_f0 = -(uint)(pFVar3[0xf] != (FScriptContainerElement)0x0) & 0x80000000 | local_f0;
  if ((iVar1 < 3) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (*(ushort *)(pFVar3 + 0x12) != 0xffff) {
    uVar11 = (uint)*(ushort *)(pFVar3 + 0x12);
  }
  local_dc = -(uint)(pFVar3[0x17] != (FScriptContainerElement)0x0) & 0x80000000 | uVar11;
  if ((iVar1 < 4) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar11 = 0xffffffff;
  local_ec = 0xffffffff;
  if (*(ushort *)(pFVar3 + 0x1a) != 0xffff) {
    local_ec = (uint)*(ushort *)(pFVar3 + 0x1a);
  }
  local_ec = -(uint)(pFVar3[0x1f] != (FScriptContainerElement)0x0) & 0x80000000 | local_ec;
  if ((iVar1 < 0x13) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_e8 = uVar11;
  if (*(ushort *)(pFVar3 + 0x92) != 0xffff) {
    local_e8 = (uint)*(ushort *)(pFVar3 + 0x92);
  }
  local_e8 = -(uint)(pFVar3[0x97] != (FScriptContainerElement)0x0) & 0x80000000 | local_e8;
  if (local_e8 == 0xffffffff) {
    if ((iVar1 < 4) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_e8 = uVar11;
    if (*(ushort *)(pFVar3 + 0x1a) != 0xffff) {
      local_e8 = (uint)*(ushort *)(pFVar3 + 0x1a);
    }
    local_e8 = -(uint)(pFVar3[0x1f] != (FScriptContainerElement)0x0) & 0x80000000 | local_e8;
  }
  if ((iVar1 < 5) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_e4 = uVar11;
  if (*(ushort *)(pFVar3 + 0x22) != 0xffff) {
    local_e4 = (uint)*(ushort *)(pFVar3 + 0x22);
  }
  local_e4 = -(uint)(pFVar3[0x27] != (FScriptContainerElement)0x0) & 0x80000000 | local_e4;
  if ((iVar1 < 0x15) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_e0 = uVar11;
  if (*(ushort *)(pFVar3 + 0xa2) != 0xffff) {
    local_e0 = (uint)*(ushort *)(pFVar3 + 0xa2);
  }
  local_e0 = -(uint)(pFVar3[0xa7] != (FScriptContainerElement)0x0) & 0x80000000 | local_e0;
  if (local_e0 == 0xffffffff) {
    if ((iVar1 < 0x15) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(ushort *)(pFVar3 + 0xa2) != 0xffff) {
      uVar11 = (uint)*(ushort *)(pFVar3 + 0xa2);
    }
    local_e0 = -(uint)(pFVar3[0xa7] != (FScriptContainerElement)0x0) & 0x80000000 | uVar11;
  }
  if ((iVar1 < 7) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  uVar11 = 0xffffffff;
  local_d0 = 0xffffffff;
  if (*(ushort *)(pFVar3 + 0x32) != 0xffff) {
    local_d0 = (uint)*(ushort *)(pFVar3 + 0x32);
  }
  local_d0 = -(uint)(pFVar3[0x37] != (FScriptContainerElement)0x0) & 0x80000000 | local_d0;
  if ((iVar1 < 8) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_cc = uVar11;
  if (*(ushort *)(pFVar3 + 0x3a) != 0xffff) {
    local_cc = (uint)*(ushort *)(pFVar3 + 0x3a);
  }
  local_cc = -(uint)(pFVar3[0x3f] != (FScriptContainerElement)0x0) & 0x80000000 | local_cc;
  if ((iVar1 < 9) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_c4 = uVar11;
  if (*(ushort *)(pFVar3 + 0x42) != 0xffff) {
    local_c4 = (uint)*(ushort *)(pFVar3 + 0x42);
  }
  local_c4 = -(uint)(pFVar3[0x47] != (FScriptContainerElement)0x0) & 0x80000000 | local_c4;
  if ((iVar1 < 10) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_c0 = uVar11;
  if (*(ushort *)(pFVar3 + 0x4a) != 0xffff) {
    local_c0 = (uint)*(ushort *)(pFVar3 + 0x4a);
  }
  local_c0 = -(uint)(pFVar3[0x4f] != (FScriptContainerElement)0x0) & 0x80000000 | local_c0;
  if ((iVar1 < 0xb) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_bc = uVar11;
  if (*(ushort *)(pFVar3 + 0x52) != 0xffff) {
    local_bc = (uint)*(ushort *)(pFVar3 + 0x52);
  }
  local_bc = -(uint)(pFVar3[0x57] != (FScriptContainerElement)0x0) & 0x80000000 | local_bc;
  if ((iVar1 < 0xc) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
     bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_b8 = uVar11;
  if (*(ushort *)(pFVar3 + 0x5a) != 0xffff) {
    local_b8 = (uint)*(ushort *)(pFVar3 + 0x5a);
  }
  local_b8 = -(uint)(pFVar3[0x5f] != (FScriptContainerElement)0x0) & 0x80000000 | local_b8;
  if (((this->UV0Settings).DistributionMode == TiledFromStartOverRibbonLength) ||
     ((this->UV1Settings).DistributionMode == TiledFromStartOverRibbonLength)) {
    if ((iVar1 < 0xd) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_b4 = uVar11;
    if (*(ushort *)(pFVar3 + 0x62) != 0xffff) {
      local_b4 = (uint)*(ushort *)(pFVar3 + 0x62);
    }
    local_b4 = -(uint)(pFVar3[0x67] != (FScriptContainerElement)0x0) & 0x80000000 | local_b4;
  }
  else {
    local_b4 = 0xffffffff;
  }
  if ((this->UV0Settings).bEnablePerParticleUOverride == 0) {
    local_b0 = 0xffffffff;
  }
  else {
    if ((iVar1 < 0xe) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_b0 = uVar11;
    if (*(ushort *)(pFVar3 + 0x6a) != 0xffff) {
      local_b0 = (uint)*(ushort *)(pFVar3 + 0x6a);
    }
    local_b0 = -(uint)(pFVar3[0x6f] != (FScriptContainerElement)0x0) & 0x80000000 | local_b0;
  }
  if ((this->UV0Settings).bEnablePerParticleVRangeOverride == '\0') {
    local_ac = 0xffffffff;
  }
  else {
    if ((iVar1 < 0xf) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_ac = uVar11;
    if (*(ushort *)(pFVar3 + 0x72) != 0xffff) {
      local_ac = (uint)*(ushort *)(pFVar3 + 0x72);
    }
    local_ac = -(uint)(pFVar3[0x77] != (FScriptContainerElement)0x0) & 0x80000000 | local_ac;
  }
  if ((this->UV1Settings).bEnablePerParticleUOverride == 0) {
    local_a8 = 0xffffffff;
  }
  else {
    if ((iVar1 < 0x10) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_a8 = uVar11;
    if (*(ushort *)(pFVar3 + 0x7a) != 0xffff) {
      local_a8 = (uint)*(ushort *)(pFVar3 + 0x7a);
    }
    local_a8 = -(uint)(pFVar3[0x7f] != (FScriptContainerElement)0x0) & 0x80000000 | local_a8;
  }
  if ((this->UV1Settings).bEnablePerParticleVRangeOverride == '\0') {
    local_a4 = 0xffffffff;
  }
  else {
    if ((iVar1 < 0x11) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    local_a4 = 0xffffffff;
    if (*(ushort *)(pFVar3 + 0x82) != 0xffff) {
      local_a4 = (uint)*(ushort *)(pFVar3 + 0x82);
    }
    local_a4 = -(uint)(pFVar3[0x87] != (FScriptContainerElement)0x0) & 0x80000000 | local_a4;
  }
  local_c8 = (this->GenerationConfig).MaterialParamValidMask;
  if ((this->FacingMode == Custom) || (this->FacingMode == CustomSideVector)) {
    if ((iVar1 < 6) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    uVar6 = uVar11;
    if (*(ushort *)(pFVar3 + 0x2a) != 0xffff) {
      uVar6 = (uint)*(ushort *)(pFVar3 + 0x2a);
    }
    local_d8._0_4_ = -(uint)(pFVar3[0x2f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar6;
    if ((iVar1 < 0x14) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
       bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if (*(ushort *)(pFVar3 + 0x9a) != 0xffff) {
      uVar11 = (uint)*(ushort *)(pFVar3 + 0x9a);
    }
    uVar11 = -(uint)(pFVar3[0x9f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar11;
    if (uVar11 == 0xffffffff) {
      if ((iVar1 < 6) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (*(ushort *)(pFVar3 + 0x2a) != 0xffff) {
        uVar7 = (uint)*(ushort *)(pFVar3 + 0x2a);
      }
      uVar11 = -(uint)(pFVar3[0x2f] != (FScriptContainerElement)0x0) & 0x80000000 | uVar7;
    }
    local_d8._4_4_ = uVar11;
  }
  else {
    local_d8._0_4_ = -1;
    local_d8._4_4_ = -1;
  }
  local_58 = (float)(this->UV0Settings).Scale.field0_0x0._s_0.Y;
  local_7c = (uint)(this->UV0Settings).DistributionMode;
  local_78 = (uint)(this->UV1Settings).DistributionMode;
  local_54 = (float)(this->UV0Settings).Offset.field0_0x0._s_0.Y;
  local_50 = (float)(this->UV1Settings).Scale.field0_0x0._s_0.Y;
  local_4c = (float)(this->UV1Settings).Offset.field0_0x0._s_0.Y;
  pFVar9 = FNiagaraRibbonUniformParameters::GetStructMetadata();
  if (((pFVar9->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsLayoutInitialized()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                         ,0x17c,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  TVar10 = RHICreateUniformBuffer
                     (&local_res8,(FRHIUniformBufferLayout *)&local_128,
                      (EUniformBufferUsage)(pFVar9->Layout).Reference,ValidateResources);
  this_00 = (TUniformBufferRef<FNiagaraRibbonUniformParameters>)(TVar10.Reference)->_padding_;
  if (this_00 != (TUniformBufferRef<FNiagaraRibbonUniformParameters>)0x0) {
    FRHIResource::AddRef((FRHIResource *)this_00);
    pFVar9 = FNiagaraRibbonUniformParameters::GetStructMetadata();
    if (((pFVar9->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsLayoutInitialized()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                           ,0x17c,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((FName)(pFVar9->Layout).Reference != *(FName *)((longlong)this_00 + 0x40)) {
      pFVar9 = FNiagaraRibbonUniformParameters::GetStructMetadata();
      if (((pFVar9->Layout).Reference == (FRHIUniformBufferLayout *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsLayoutInitialized()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMetadata.h"
                             ,0x177,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InRHIRef || TUniformBufferMetadataHelper<TBufferStruct>::GetStructMetadata()->GetLayoutPtr() == InRHIRef->GetLayoutPtr()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RenderCore\\Public\\ShaderParameterMacros.h"
                         ,0x96,
                         L"Attempted to create a uniform buffer of type \'%s\' from uniform buffer pointer of type \'%s\'"
                        );
      if (bVar5) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
  }
  if (local_res8 != (FRHIResource *)0x0) {
    FRHIResource::Release(local_res8);
  }
  if (param_5 == local_38) {
    if (this_00 != (TUniformBufferRef<FNiagaraRibbonUniformParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_00);
    }
  }
  else {
    this_01 = *param_5;
    *param_5 = this_00;
    if (this_01 != (TUniformBufferRef<FNiagaraRibbonUniformParameters>)0x0) {
      FRHIResource::Release((FRHIResource *)this_01);
      return;
    }
  }
  return;
}

