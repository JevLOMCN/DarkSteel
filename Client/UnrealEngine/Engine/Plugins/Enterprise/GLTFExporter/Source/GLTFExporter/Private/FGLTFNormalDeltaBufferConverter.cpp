// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GLTFExporter
// Functions: 5

// ConvertBufferView<TGLTFVector3<float>,FPackedNormal> @ 14e5bb0d0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGLTFJsonBufferView * __thiscall
FGLTFNormalDeltaBufferConverter::ConvertBufferView<TGLTFVector3<float>,FPackedNormal>
          (FGLTFNormalDeltaBufferConverter *this,FGLTFMeshSection *param_1,
          TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
          *param_2)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  FGLTFJsonBufferView *pFVar15;
  float *pfVar16;
  undefined1 *puVar17;
  uint uVar18;
  longlong lVar19;
  float fVar20;
  undefined1 auVar21 [16];
  TArray<TGLTFVector3<float>,TSizedDefaultAllocator<32>_> local_98 [7];
  
  uVar2 = (param_1->IndexMap).ArrayNum;
  local_98[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98[0].ArrayNum = 0;
  local_98[0].ArrayMax = 0;
  TArray<TGLTFVector3<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed(local_98,uVar2,Default);
  fVar8 = _UNK_151040078;
  fVar7 = _UNK_151040074;
  fVar6 = ___xmm_3c0102043c0102043c0102043c010204;
  fVar5 = __real_437e0000;
  fVar4 = __real_3f000000;
  if (((param_2 !=
        (TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
         *)0x0) && (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34)) &&
     (pfVar16 = (float *)0x0, uVar2 != 0)) {
    do {
      uVar18 = (uint)pfVar16;
      uVar10 = 0;
      if ((int)uVar18 < (param_1->IndexMap).ArrayNum) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        pFVar15 = (FGLTFJsonBufferView *)(*pcVar3)();
        return pFVar15;
      }
      lVar19 = (longlong)(int)uVar18;
      uVar10 = *(uint *)((param_1->IndexMap).AllocatorInstance.Data + lVar19 * 4);
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar17 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar17 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar11 = *(int *)(puVar17 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & uVar10) * 4);
        if (iVar11 != -1) {
          do {
            lVar1 = *(longlong *)param_2 + (longlong)iVar11 * 0x18;
            if (*(uint *)(*(longlong *)param_2 + (longlong)iVar11 * 0x18) == uVar10) {
              pfVar16 = (float *)(lVar1 + 4);
              if (lVar1 == 0) {
                pfVar16 = (float *)0x0;
              }
              if (pfVar16 != (float *)0x0) {
                uVar12 = (int)ROUND(*pfVar16 * fVar5 + fVar4) >> 1;
                uVar10 = 0x7f;
                if ((int)uVar12 < 0x7f) {
                  uVar10 = uVar12;
                }
                uVar13 = (int)ROUND(pfVar16[1] * fVar5 + fVar4) >> 1;
                uVar12 = 0x7f;
                if ((int)uVar13 < 0x7f) {
                  uVar12 = uVar13;
                }
                fVar20 = pfVar16[2] * fVar5 + fVar4;
                uVar14 = (int)ROUND(fVar20) >> 1;
                uVar13 = 0x7f;
                if ((int)uVar14 < 0x7f) {
                  uVar13 = uVar14;
                }
                uVar14 = 0x80;
                if (-0x80 < (int)uVar13) {
                  uVar14 = uVar13 & 0xff;
                }
                uVar13 = 0x80;
                if (-0x80 < (int)uVar12) {
                  uVar13 = uVar12 & 0xff;
                }
                uVar12 = 0x80;
                if (-0x80 < (int)uVar10) {
                  uVar12 = uVar10 & 0xff;
                }
                uVar10 = 0;
                if ((int)uVar18 < local_98[0].ArrayNum) {
                  uVar10 = ~uVar18 >> 0x1f;
                }
                auVar21 = pmovsxbd(ZEXT416((uint)fVar20),
                                   ZEXT416(((uVar14 | 0x7f00) << 8 | uVar13) << 8 | uVar12));
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  pFVar15 = (FGLTFJsonBufferView *)(*pcVar3)();
                  return pFVar15;
                }
                *(ulonglong *)(local_98[0].AllocatorInstance.Data + lVar19 * 0xc) =
                     CONCAT44((float)auVar21._8_4_ * fVar8,(float)auVar21._0_4_ * fVar6);
                *(float *)(local_98[0].AllocatorInstance.Data + lVar19 * 0xc + 8) =
                     (float)auVar21._4_4_ * fVar7;
              }
              break;
            }
            iVar11 = *(int *)(lVar1 + 0x10);
          } while (iVar11 != -1);
        }
      }
      pfVar16 = (float *)(ulonglong)(uVar18 + 1);
    } while (uVar18 + 1 < uVar2);
  }
  pFVar15 = FGLTFBufferBuilder::AddBufferView
                      (*(FGLTFBufferBuilder **)&this->field_0x58,local_98[0].AllocatorInstance.Data,
                       (longlong)local_98[0].ArrayNum * 0xc,ArrayBuffer,'\x04');
  if (local_98[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98[0].AllocatorInstance.Data);
  }
  return pFVar15;
}

// ConvertBufferView<TGLTFVector3<float>,FPackedRGBA16N> @ 14e5bb730

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGLTFJsonBufferView * __thiscall
FGLTFNormalDeltaBufferConverter::ConvertBufferView<TGLTFVector3<float>,FPackedRGBA16N>
          (FGLTFNormalDeltaBufferConverter *this,FGLTFMeshSection *param_1,
          TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
          *param_2)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  bool bVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  FGLTFJsonBufferView *pFVar16;
  undefined1 *puVar17;
  float *pfVar18;
  uint uVar19;
  longlong lVar20;
  float fVar21;
  undefined1 auVar22 [16];
  TArray<TGLTFVector3<float>,TSizedDefaultAllocator<32>_> local_98 [7];
  
  uVar2 = (param_1->IndexMap).ArrayNum;
  local_98[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_98[0].ArrayNum = 0;
  local_98[0].ArrayMax = 0;
  TArray<TGLTFVector3<float>,TSizedDefaultAllocator<32>_>::SetNumZeroed(local_98,uVar2,Default);
  fVar8 = __real_477ffe00;
  fVar7 = _UNK_150d565e8;
  fVar6 = _UNK_150d565e4;
  fVar5 = ___xmm_38000100380001003800010038000100;
  fVar4 = __real_3f000000;
  if (((param_2 !=
        (TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
         *)0x0) && (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34)) &&
     (pfVar18 = (float *)0x0, uVar2 != 0)) {
    do {
      uVar19 = (uint)pfVar18;
      uVar13 = 0;
      if ((int)uVar19 < (param_1->IndexMap).ArrayNum) {
        uVar13 = ~uVar19 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar3 = (code *)swi(3);
        pFVar16 = (FGLTFJsonBufferView *)(*pcVar3)();
        return pFVar16;
      }
      lVar20 = (longlong)(int)uVar19;
      uVar13 = *(uint *)((param_1->IndexMap).AllocatorInstance.Data + lVar20 * 4);
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar17 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar17 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar14 = *(int *)(puVar17 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & uVar13) * 4);
        if (iVar14 != -1) {
          do {
            lVar1 = *(longlong *)param_2 + (longlong)iVar14 * 0x18;
            if (*(uint *)(*(longlong *)param_2 + (longlong)iVar14 * 0x18) == uVar13) {
              pfVar18 = (float *)(lVar1 + 4);
              if (lVar1 == 0) {
                pfVar18 = (float *)0x0;
              }
              if (pfVar18 != (float *)0x0) {
                iVar15 = (int)ROUND(*pfVar18 * fVar8 + fVar4) >> 1;
                iVar14 = 0x7fff;
                if (iVar15 < 0x7fff) {
                  iVar14 = iVar15;
                }
                uVar10 = 0x8000;
                if (-0x8000 < iVar14) {
                  uVar10 = (short)iVar14;
                }
                iVar15 = (int)ROUND(pfVar18[1] * fVar8 + fVar4) >> 1;
                iVar14 = 0x7fff;
                if (iVar15 < 0x7fff) {
                  iVar14 = iVar15;
                }
                fVar21 = pfVar18[2] * fVar8 + fVar4;
                uVar11 = 0x8000;
                if (-0x8000 < iVar14) {
                  uVar11 = (short)iVar14;
                }
                iVar15 = (int)ROUND(fVar21) >> 1;
                iVar14 = 0x7fff;
                if (iVar15 < 0x7fff) {
                  iVar14 = iVar15;
                }
                uVar12 = 0x8000;
                if (-0x8000 < iVar14) {
                  uVar12 = (undefined2)iVar14;
                }
                auVar22 = pmovsxwd(ZEXT416((uint)fVar21),
                                   CONCAT26(0x7fff,CONCAT24(uVar12,CONCAT22(uVar11,uVar10))));
                uVar13 = 0;
                if ((int)uVar19 < local_98[0].ArrayNum) {
                  uVar13 = ~uVar19 >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  pFVar16 = (FGLTFJsonBufferView *)(*pcVar3)();
                  return pFVar16;
                }
                *(ulonglong *)(local_98[0].AllocatorInstance.Data + lVar20 * 0xc) =
                     CONCAT44((float)auVar22._8_4_ * fVar7,(float)auVar22._0_4_ * fVar5);
                *(float *)(local_98[0].AllocatorInstance.Data + lVar20 * 0xc + 8) =
                     (float)auVar22._4_4_ * fVar6;
              }
              break;
            }
            iVar14 = *(int *)(lVar1 + 0x10);
          } while (iVar14 != -1);
        }
      }
      pfVar18 = (float *)(ulonglong)(uVar19 + 1);
    } while (uVar19 + 1 < uVar2);
  }
  pFVar16 = FGLTFBufferBuilder::AddBufferView
                      (*(FGLTFBufferBuilder **)&this->field_0x58,local_98[0].AllocatorInstance.Data,
                       (longlong)local_98[0].ArrayNum * 0xc,ArrayBuffer,'\x04');
  if (local_98[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98[0].AllocatorInstance.Data);
  }
  return pFVar16;
}

// ConvertBufferView<TGLTFVector4<signed_char>,FPackedNormal> @ 14e5bbe40

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGLTFJsonBufferView * __thiscall
FGLTFNormalDeltaBufferConverter::ConvertBufferView<TGLTFVector4<signed_char>,FPackedNormal>
          (FGLTFNormalDeltaBufferConverter *this,FGLTFMeshSection *param_1,
          TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
          *param_2)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  FGLTFJsonBufferView *pFVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  float *pfVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined4 local_res8;
  TArray<TGLTFVector4<signed_char>,TSizedDefaultAllocator<32>_> local_58 [3];
  
  uVar2 = (param_1->IndexMap).ArrayNum;
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  TArray<TGLTFVector4<signed_char>,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (local_58,uVar2,Default);
  fVar5 = __real_437e0000;
  fVar4 = __real_3f000000;
  if (((param_2 !=
        (TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
         *)0x0) && (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34)) &&
     (pfVar16 = (float *)0x0, uVar2 != 0)) {
    do {
      uVar18 = (uint)pfVar16;
      uVar7 = 0;
      if ((int)uVar18 < (param_1->IndexMap).ArrayNum) {
        uVar7 = ~uVar18 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar12 = (FGLTFJsonBufferView *)(*pcVar3)();
        return pFVar12;
      }
      uVar7 = *(uint *)((param_1->IndexMap).AllocatorInstance.Data + (longlong)(int)uVar18 * 4);
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar17 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar17 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar8 = *(int *)(puVar17 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & uVar7) * 4);
        if (iVar8 != -1) {
          do {
            lVar1 = *(longlong *)param_2 + (longlong)iVar8 * 0x18;
            if (*(uint *)(*(longlong *)param_2 + (longlong)iVar8 * 0x18) == uVar7) {
              pfVar16 = (float *)(lVar1 + 4);
              if (lVar1 == 0) {
                pfVar16 = (float *)0x0;
              }
              if (pfVar16 != (float *)0x0) {
                iVar9 = (int)ROUND(*pfVar16 * fVar5 + fVar4) >> 1;
                iVar8 = 0x7f;
                if (iVar9 < 0x7f) {
                  iVar8 = iVar9;
                }
                iVar10 = (int)ROUND(pfVar16[1] * fVar5 + fVar4) >> 1;
                iVar9 = 0x7f;
                if (iVar10 < 0x7f) {
                  iVar9 = iVar10;
                }
                iVar11 = (int)ROUND(pfVar16[2] * fVar5 + fVar4) >> 1;
                iVar10 = 0x7f;
                if (iVar11 < 0x7f) {
                  iVar10 = iVar11;
                }
                uVar13 = 0x80;
                if (-0x80 < iVar8) {
                  uVar13 = (char)iVar8;
                }
                uVar14 = 0x80;
                if (-0x80 < iVar10) {
                  uVar14 = (char)iVar10;
                }
                uVar15 = 0x80;
                if (-0x80 < iVar9) {
                  uVar15 = (char)iVar9;
                }
                local_res8 = (uint)CONCAT12(uVar15,CONCAT11(uVar14,uVar13));
                uVar7 = 0;
                if ((int)uVar18 < local_58[0].ArrayNum) {
                  uVar7 = ~uVar18 >> 0x1f;
                }
                if ((uVar7 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  pFVar12 = (FGLTFJsonBufferView *)(*pcVar3)();
                  return pFVar12;
                }
                *(uint *)(local_58[0].AllocatorInstance.Data + (longlong)(int)uVar18 * 4) =
                     local_res8;
              }
              break;
            }
            iVar8 = *(int *)(lVar1 + 0x10);
          } while (iVar8 != -1);
        }
      }
      pfVar16 = (float *)(ulonglong)(uVar18 + 1);
    } while (uVar18 + 1 < uVar2);
  }
  pFVar12 = FGLTFBufferBuilder::AddBufferView
                      (*(FGLTFBufferBuilder **)&this->field_0x58,local_58[0].AllocatorInstance.Data,
                       (longlong)local_58[0].ArrayNum << 2,ArrayBuffer,'\x04');
  if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  return pFVar12;
}

// ConvertBufferView<TGLTFVector4<short>,FPackedRGBA16N> @ 14e5bc850

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FGLTFJsonBufferView * __thiscall
FGLTFNormalDeltaBufferConverter::ConvertBufferView<TGLTFVector4<short>,FPackedRGBA16N>
          (FGLTFNormalDeltaBufferConverter *this,FGLTFMeshSection *param_1,
          TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
          *param_2)

{
  longlong lVar1;
  uint uVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  bool bVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  FGLTFJsonBufferView *pFVar15;
  float *pfVar16;
  undefined1 *puVar17;
  uint uVar18;
  TArray<TGLTFVector4<short>,TSizedDefaultAllocator<32>_> local_58 [3];
  
  uVar2 = (param_1->IndexMap).ArrayNum;
  local_58[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58[0].ArrayNum = 0;
  local_58[0].ArrayMax = 0;
  TArray<TGLTFVector4<short>,TSizedDefaultAllocator<32>_>::SetNumZeroed(local_58,uVar2,Default);
  fVar5 = __real_477ffe00;
  fVar4 = __real_3f000000;
  if (((param_2 !=
        (TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
         *)0x0) && (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34)) &&
     (pfVar16 = (float *)0x0, uVar2 != 0)) {
    do {
      uVar18 = (uint)pfVar16;
      uVar10 = 0;
      if ((int)uVar18 < (param_1->IndexMap).ArrayNum) {
        uVar10 = ~uVar18 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        pFVar15 = (FGLTFJsonBufferView *)(*pcVar3)();
        return pFVar15;
      }
      uVar10 = *(uint *)((param_1->IndexMap).AllocatorInstance.Data + (longlong)(int)uVar18 * 4);
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar17 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar17 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar11 = *(int *)(puVar17 + (ulonglong)(*(int *)&param_2->field_0x48 - 1U & uVar10) * 4);
        if (iVar11 != -1) {
          do {
            lVar1 = *(longlong *)param_2 + (longlong)iVar11 * 0x18;
            if (*(uint *)(*(longlong *)param_2 + (longlong)iVar11 * 0x18) == uVar10) {
              pfVar16 = (float *)(lVar1 + 4);
              if (lVar1 == 0) {
                pfVar16 = (float *)0x0;
              }
              if (pfVar16 != (float *)0x0) {
                iVar12 = (int)ROUND(*pfVar16 * fVar5 + fVar4) >> 1;
                iVar11 = 0x7fff;
                if (iVar12 < 0x7fff) {
                  iVar11 = iVar12;
                }
                iVar13 = (int)ROUND(pfVar16[1] * fVar5 + fVar4) >> 1;
                iVar12 = 0x7fff;
                if (iVar13 < 0x7fff) {
                  iVar12 = iVar13;
                }
                iVar14 = (int)ROUND(pfVar16[2] * fVar5 + fVar4) >> 1;
                iVar13 = 0x7fff;
                if (iVar14 < 0x7fff) {
                  iVar13 = iVar14;
                }
                uVar7 = 0x8000;
                if (-0x8000 < iVar11) {
                  uVar7 = (short)iVar11;
                }
                uVar8 = 0x8000;
                if (-0x8000 < iVar13) {
                  uVar8 = (short)iVar13;
                }
                uVar9 = 0x8000;
                if (-0x8000 < iVar12) {
                  uVar9 = (short)iVar12;
                }
                uVar10 = 0;
                if ((int)uVar18 < local_58[0].ArrayNum) {
                  uVar10 = ~uVar18 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar6)) {
                  pcVar3 = (code *)swi(3);
                  pFVar15 = (FGLTFJsonBufferView *)(*pcVar3)();
                  return pFVar15;
                }
                *(ulonglong *)(local_58[0].AllocatorInstance.Data + (longlong)(int)uVar18 * 8) =
                     (ulonglong)CONCAT24(uVar9,CONCAT22(uVar8,uVar7));
              }
              break;
            }
            iVar11 = *(int *)(lVar1 + 0x10);
          } while (iVar11 != -1);
        }
      }
      pfVar16 = (float *)(ulonglong)(uVar18 + 1);
    } while (uVar18 + 1 < uVar2);
  }
  pFVar15 = FGLTFBufferBuilder::AddBufferView
                      (*(FGLTFBufferBuilder **)&this->field_0x58,local_58[0].AllocatorInstance.Data,
                       (longlong)local_58[0].ArrayNum << 3,ArrayBuffer,'\x04');
  if (local_58[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58[0].AllocatorInstance.Data);
  }
  return pFVar15;
}

// Convert @ 14e5e8a10

FGLTFJsonAccessor * __thiscall
FGLTFNormalDeltaBufferConverter::Convert
          (FGLTFNormalDeltaBufferConverter *this,FGLTFMeshSection *param_1,
          TMap<unsigned_int,UE::Math::TVector<float>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<unsigned_int,UE::Math::TVector<float>,0>_>
          *param_2,bool param_3)

{
  bool bVar1;
  longlong lVar2;
  FGLTFJsonBufferView *pFVar3;
  FGLTFJsonAccessor *pFVar4;
  EGLTFJsonComponentType EVar5;
  bool local_res8 [8];
  EGLTFJsonExtension local_res10 [2];
  
  lVar2 = *(longlong *)&this->field_0x58;
  bVar1 = *(bool *)(*(longlong *)(lVar2 + 0x18) + 0xa0);
  if (bVar1 == false) {
    EVar5 = Float;
    if (param_3) {
      pFVar3 = ConvertBufferView<TGLTFVector3<float>,FPackedRGBA16N>(this,param_1,param_2);
    }
    else {
      pFVar3 = ConvertBufferView<TGLTFVector3<float>,FPackedNormal>(this,param_1,param_2);
    }
  }
  else {
    local_res8[0] = true;
    local_res8[1] = false;
    local_res8[2] = false;
    local_res8[3] = false;
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>((void *)(lVar2 + 0x158),local_res10,local_res8);
    TSet<enum_EGLTFJsonExtension,DefaultKeyFuncs<enum_EGLTFJsonExtension,0>,FDefaultSetAllocator>::
    Emplace<enum_EGLTFJsonExtension_const_&>((void *)(lVar2 + 0x1a8),local_res10,local_res8);
    if (param_3) {
      EVar5 = Int16;
      pFVar3 = ConvertBufferView<TGLTFVector4<short>,FPackedRGBA16N>(this,param_1,param_2);
      pFVar3->ByteStride = 8;
    }
    else {
      EVar5 = Int8;
      pFVar3 = ConvertBufferView<TGLTFVector4<signed_char>,FPackedNormal>(this,param_1,param_2);
      pFVar3->ByteStride = 4;
    }
  }
  pFVar4 = FGLTFJsonBuilder::AddAccessor(*(FGLTFJsonBuilder **)&this->field_0x58);
  pFVar4->BufferView = pFVar3;
  pFVar4->ComponentType = EVar5;
  pFVar4->Count = (param_1->IndexMap).ArrayNum;
  pFVar4->Type = Vec3;
  pFVar4->bNormalized = bVar1;
  return pFVar4;
}

