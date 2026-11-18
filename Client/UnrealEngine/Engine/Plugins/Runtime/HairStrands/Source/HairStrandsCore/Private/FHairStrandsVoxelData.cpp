// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: HairStrandsCore
// Functions: 1

// GetData @ 14e013ab0

FData * __thiscall
FHairStrandsVoxelData::GetData
          (FHairStrandsVoxelData *this,FData *__return_storage_ptr__,TVector<float> *param_1)

{
  FScriptContainerElement *pFVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FData *pFVar15;
  ulonglong uVar16;
  int iVar17;
  int iVar18;
  longlong lVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  int local_res18;
  int local_a4;
  int local_a0;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong local_80;
  ulonglong local_78;
  
  uVar2 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
  iVar26 = (this->Resolution).field0_0x0._s_0.Z;
  iVar11 = (this->Resolution).field0_0x0._s_0.Y;
  fVar32 = (param_1->field0_0x0)._s_0.X - (this->MinBound).field0_0x0._s_0.X;
  iVar24 = (this->Resolution).field0_0x0._s_0.X;
  fVar33 = (param_1->field0_0x0)._s_0.Y - (this->MinBound).field0_0x0._s_0.Y;
  iVar22 = iVar11;
  if (iVar11 < iVar24) {
    iVar22 = iVar24;
  }
  fVar34 = (param_1->field0_0x0)._s_0.Z - (this->MinBound).field0_0x0._s_0.Z;
  iVar10 = iVar26;
  if (iVar26 < iVar22) {
    iVar10 = iVar22;
  }
  fVar31 = (float)iVar10 * __real_3f000000;
  iVar28 = (int)ROUND(((fVar32 + fVar32) /
                      ((this->MaxBound).field0_0x0._s_0.X - (this->MinBound).field0_0x0._s_0.X)) *
                      (float)iVar24 - __real_3f000000) >> 1;
  iVar20 = (int)ROUND(((fVar33 + fVar33) /
                      ((this->MaxBound).field0_0x0._s_0.Y - (this->MinBound).field0_0x0._s_0.Y)) *
                      (float)iVar11 - __real_3f000000) >> 1;
  iVar10 = (int)ROUND(((fVar34 + fVar34) /
                      ((this->MaxBound).field0_0x0._s_0.Z - (this->MinBound).field0_0x0._s_0.Z)) *
                      (float)iVar26 - __real_3f000000) >> 1;
  iVar22 = iVar26 + -1;
  if (iVar10 < iVar26 + -1) {
    iVar22 = iVar10;
  }
  iVar26 = iVar11 + -1;
  if (iVar20 < iVar11 + -1) {
    iVar26 = iVar20;
  }
  iVar11 = iVar24 + -1;
  if (iVar28 < iVar24 + -1) {
    iVar11 = iVar28;
  }
  iVar24 = 0;
  if (0 < iVar11) {
    iVar24 = iVar11;
  }
  iVar11 = 0;
  if (0 < iVar26) {
    iVar11 = iVar26;
  }
  iVar26 = 0;
  if (0 < iVar22) {
    iVar26 = iVar22;
  }
  *(undefined8 *)&(__return_storage_ptr__->BaseColor).field0_0x0 =
       UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
  (__return_storage_ptr__->BaseColor).field0_0x0._s_0.Z = (float)uVar2;
  __return_storage_ptr__->GroupIndex = 0xff;
  __return_storage_ptr__->Roughness = 0.0;
  local_res18 = 1;
  iVar22 = (int)(longlong)fVar31;
  if (0 < iVar22) {
    do {
      if (((((iVar24 < 0) || ((this->Resolution).field0_0x0._s_0.X <= iVar24)) || (iVar11 < 0)) ||
          (((this->Resolution).field0_0x0._s_0.Y <= iVar11 || (iVar26 < 0)))) ||
         ((this->Resolution).field0_0x0._s_0.Z <= iVar26)) {
        bVar9 = false;
      }
      else {
        bVar9 = true;
      }
      iVar10 = (this->Resolution).field0_0x0._s_0.Y;
      iVar28 = (this->Resolution).field0_0x0._s_0.Z + -1;
      iVar20 = (this->Resolution).field0_0x0._s_0.X;
      if (iVar26 < iVar28) {
        iVar28 = iVar26;
      }
      iVar17 = iVar10 + -1;
      iVar23 = iVar20 + -1;
      if (iVar11 < iVar17) {
        iVar17 = iVar11;
      }
      if (iVar24 < iVar23) {
        iVar23 = iVar24;
      }
      iVar29 = 0;
      if (0 < iVar23) {
        iVar29 = iVar23;
      }
      iVar23 = 0;
      if (0 < iVar17) {
        iVar23 = iVar17;
      }
      iVar17 = 0;
      if (0 < iVar28) {
        iVar17 = iVar28;
      }
      if (bVar9) {
        uVar25 = (iVar23 + iVar10 * iVar17) * iVar20 + iVar29;
        uVar12 = 0;
        if ((int)uVar25 < (this->Datas).ArrayNum) {
          uVar12 = ~uVar25 >> 0x1f;
        }
        if ((uVar12 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          pFVar15 = (FData *)(*pcVar6)();
          return pFVar15;
        }
        lVar19 = (longlong)(int)uVar25;
        if ((this->Datas).AllocatorInstance.Data[lVar19 * 0x14 + 0x10] !=
            (FScriptContainerElement)0xff) {
          uVar12 = 0;
          if ((int)uVar25 < (this->Datas).ArrayNum) {
            uVar12 = ~uVar25 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            pFVar15 = (FData *)(*pcVar6)();
            return pFVar15;
          }
          pFVar5 = (this->Datas).AllocatorInstance.Data;
          pFVar1 = pFVar5 + lVar19 * 0x14;
          uVar7 = *(undefined8 *)(pFVar1 + 8);
          uVar2 = *(undefined4 *)(pFVar5 + lVar19 * 0x14 + 0x10);
          *(undefined8 *)&(__return_storage_ptr__->BaseColor).field0_0x0 = *(undefined8 *)pFVar1;
          *(undefined8 *)((longlong)&(__return_storage_ptr__->BaseColor).field0_0x0 + 8) = uVar7;
          *(undefined4 *)&__return_storage_ptr__->GroupIndex = uVar2;
        }
      }
      iVar10 = -local_res18;
      if (local_res18 < iVar10) {
        local_a4 = -(local_res18 + -1);
      }
      else {
        iVar20 = iVar24 + iVar10;
        uVar16 = (ulonglong)(local_res18 * 2 + 1);
        local_88 = uVar16;
        do {
          iVar17 = iVar26 + local_res18;
          iVar28 = iVar26 + iVar10;
          iVar23 = iVar11 + iVar10;
          local_80 = uVar16;
          do {
            if ((((iVar20 < 0) || ((this->Resolution).field0_0x0._s_0.X <= iVar20)) || (iVar23 < 0))
               || ((((this->Resolution).field0_0x0._s_0.Y <= iVar23 || (iVar17 < 0)) ||
                   ((this->Resolution).field0_0x0._s_0.Z <= iVar17)))) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            iVar27 = (this->Resolution).field0_0x0._s_0.Z;
            iVar3 = (this->Resolution).field0_0x0._s_0.Y;
            iVar4 = (this->Resolution).field0_0x0._s_0.X;
            iVar29 = iVar27 + -1;
            iVar21 = iVar29;
            if (iVar17 < iVar29) {
              iVar21 = iVar17;
            }
            iVar18 = iVar3 + -1;
            if (iVar23 < iVar3 + -1) {
              iVar18 = iVar23;
            }
            iVar14 = iVar4 + -1;
            if (iVar20 < iVar4 + -1) {
              iVar14 = iVar20;
            }
            iVar13 = 0;
            if (0 < iVar14) {
              iVar13 = iVar14;
            }
            iVar14 = 0;
            if (0 < iVar18) {
              iVar14 = iVar18;
            }
            iVar18 = 0;
            if (0 < iVar21) {
              iVar18 = iVar21;
            }
            if (((iVar20 < 0) || (iVar4 <= iVar20)) ||
               ((iVar23 < 0 || (((iVar3 <= iVar23 || (iVar28 < 0)) || (iVar27 <= iVar28)))))) {
              bVar8 = false;
            }
            else {
              bVar8 = true;
            }
            if (iVar28 < iVar29) {
              iVar29 = iVar28;
            }
            iVar27 = 0;
            if (0 < iVar29) {
              iVar27 = iVar29;
            }
            if (bVar9) {
              uVar25 = (iVar14 + iVar3 * iVar18) * iVar4 + iVar13;
              uVar12 = 0;
              if ((int)uVar25 < (this->Datas).ArrayNum) {
                uVar12 = ~uVar25 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                pFVar15 = (FData *)(*pcVar6)();
                return pFVar15;
              }
              lVar19 = (longlong)(int)uVar25;
              if ((this->Datas).AllocatorInstance.Data[lVar19 * 0x14 + 0x10] !=
                  (FScriptContainerElement)0xff) {
                uVar12 = 0;
                if ((int)uVar25 < (this->Datas).ArrayNum) {
                  uVar12 = ~uVar25 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  pFVar15 = (FData *)(*pcVar6)();
                  return pFVar15;
                }
                pFVar5 = (this->Datas).AllocatorInstance.Data;
                pFVar1 = pFVar5 + lVar19 * 0x14;
                uVar7 = *(undefined8 *)(pFVar1 + 8);
                uVar2 = *(undefined4 *)(pFVar5 + lVar19 * 0x14 + 0x10);
                *(undefined8 *)&(__return_storage_ptr__->BaseColor).field0_0x0 =
                     *(undefined8 *)pFVar1;
                *(undefined8 *)((longlong)&(__return_storage_ptr__->BaseColor).field0_0x0 + 8) =
                     uVar7;
                *(undefined4 *)&__return_storage_ptr__->GroupIndex = uVar2;
              }
            }
            if (bVar8) {
              uVar25 = iVar13 + (iVar27 * (this->Resolution).field0_0x0._s_0.Y + iVar14) *
                                (this->Resolution).field0_0x0._s_0.X;
              uVar12 = 0;
              if ((int)uVar25 < (this->Datas).ArrayNum) {
                uVar12 = ~uVar25 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                pFVar15 = (FData *)(*pcVar6)();
                return pFVar15;
              }
              lVar19 = (longlong)(int)uVar25;
              if ((this->Datas).AllocatorInstance.Data[lVar19 * 0x14 + 0x10] !=
                  (FScriptContainerElement)0xff) {
                uVar12 = 0;
                if ((int)uVar25 < (this->Datas).ArrayNum) {
                  uVar12 = ~uVar25 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  pFVar15 = (FData *)(*pcVar6)();
                  return pFVar15;
                }
                pFVar5 = (this->Datas).AllocatorInstance.Data;
                pFVar1 = pFVar5 + lVar19 * 0x14;
                uVar7 = *(undefined8 *)(pFVar1 + 8);
                uVar2 = *(undefined4 *)(pFVar5 + lVar19 * 0x14 + 0x10);
                *(undefined8 *)&(__return_storage_ptr__->BaseColor).field0_0x0 =
                     *(undefined8 *)pFVar1;
                *(undefined8 *)((longlong)&(__return_storage_ptr__->BaseColor).field0_0x0 + 8) =
                     uVar7;
                *(undefined4 *)&__return_storage_ptr__->GroupIndex = uVar2;
              }
            }
            iVar23 = iVar23 + 1;
            local_80 = local_80 - 1;
          } while (local_80 != 0);
          iVar20 = iVar20 + 1;
          local_88 = local_88 - 1;
        } while (local_88 != 0);
        iVar20 = local_res18 + -1;
        local_a4 = -iVar20;
        iVar28 = iVar24 + iVar10;
        uVar16 = (ulonglong)(local_res18 * 2 + 1);
        do {
          if (local_a4 <= iVar20) {
            iVar17 = iVar26 + local_a4;
            local_78 = (ulonglong)(iVar20 * 2 + 1);
            iVar23 = iVar11 + local_res18;
            iVar29 = iVar11 + iVar10;
            do {
              if (((((iVar28 < 0) || ((this->Resolution).field0_0x0._s_0.X <= iVar28)) ||
                   (iVar23 < 0)) ||
                  (((this->Resolution).field0_0x0._s_0.Y <= iVar23 || (iVar17 < 0)))) ||
                 ((this->Resolution).field0_0x0._s_0.Z <= iVar17)) {
                bVar9 = false;
              }
              else {
                bVar9 = true;
              }
              iVar4 = (this->Resolution).field0_0x0._s_0.Z;
              iVar21 = (this->Resolution).field0_0x0._s_0.Y;
              iVar27 = iVar4 + -1;
              iVar3 = iVar21 + -1;
              if (iVar17 < iVar27) {
                iVar27 = iVar17;
              }
              iVar18 = iVar3;
              if (iVar23 < iVar3) {
                iVar18 = iVar23;
              }
              iVar14 = (this->Resolution).field0_0x0._s_0.X;
              iVar13 = iVar14 + -1;
              if (iVar28 < iVar14 + -1) {
                iVar13 = iVar28;
              }
              iVar30 = 0;
              if (0 < iVar13) {
                iVar30 = iVar13;
              }
              iVar13 = 0;
              if (0 < iVar18) {
                iVar13 = iVar18;
              }
              iVar18 = 0;
              if (0 < iVar27) {
                iVar18 = iVar27;
              }
              if (((iVar28 < 0) || (iVar14 <= iVar28)) ||
                 ((iVar29 < 0 ||
                  (((iVar21 <= iVar29 || (iVar17 < 0)) || (bVar8 = true, iVar4 <= iVar17)))))) {
                bVar8 = false;
              }
              if (iVar29 < iVar3) {
                iVar3 = iVar29;
              }
              iVar27 = 0;
              if (0 < iVar3) {
                iVar27 = iVar3;
              }
              if (bVar9) {
                uVar25 = iVar30 + (iVar21 * iVar18 + iVar13) * iVar14;
                uVar12 = 0;
                if ((int)uVar25 < (this->Datas).ArrayNum) {
                  uVar12 = ~uVar25 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  pFVar15 = (FData *)(*pcVar6)();
                  return pFVar15;
                }
                lVar19 = (longlong)(int)uVar25;
                if ((this->Datas).AllocatorInstance.Data[lVar19 * 0x14 + 0x10] !=
                    (FScriptContainerElement)0xff) {
                  uVar12 = 0;
                  if ((int)uVar25 < (this->Datas).ArrayNum) {
                    uVar12 = ~uVar25 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    pFVar15 = (FData *)(*pcVar6)();
                    return pFVar15;
                  }
                  pFVar5 = (this->Datas).AllocatorInstance.Data;
                  pFVar1 = pFVar5 + lVar19 * 0x14;
                  uVar7 = *(undefined8 *)(pFVar1 + 8);
                  uVar2 = *(undefined4 *)(pFVar5 + lVar19 * 0x14 + 0x10);
                  *(undefined8 *)&(__return_storage_ptr__->BaseColor).field0_0x0 =
                       *(undefined8 *)pFVar1;
                  *(undefined8 *)((longlong)&(__return_storage_ptr__->BaseColor).field0_0x0 + 8) =
                       uVar7;
                  *(undefined4 *)&__return_storage_ptr__->GroupIndex = uVar2;
                }
              }
              if (bVar8) {
                uVar25 = (iVar18 * (this->Resolution).field0_0x0._s_0.Y + iVar27) *
                         (this->Resolution).field0_0x0._s_0.X + iVar30;
                uVar12 = 0;
                if ((int)uVar25 < (this->Datas).ArrayNum) {
                  uVar12 = ~uVar25 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  pFVar15 = (FData *)(*pcVar6)();
                  return pFVar15;
                }
                lVar19 = (longlong)(int)uVar25;
                if ((this->Datas).AllocatorInstance.Data[lVar19 * 0x14 + 0x10] !=
                    (FScriptContainerElement)0xff) {
                  uVar12 = 0;
                  if ((int)uVar25 < (this->Datas).ArrayNum) {
                    uVar12 = ~uVar25 >> 0x1f;
                  }
                  if ((uVar12 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar6 = (code *)swi(3);
                    pFVar15 = (FData *)(*pcVar6)();
                    return pFVar15;
                  }
                  pFVar5 = (this->Datas).AllocatorInstance.Data;
                  pFVar1 = pFVar5 + lVar19 * 0x14;
                  uVar7 = *(undefined8 *)(pFVar1 + 8);
                  uVar2 = *(undefined4 *)(pFVar5 + lVar19 * 0x14 + 0x10);
                  *(undefined8 *)&(__return_storage_ptr__->BaseColor).field0_0x0 =
                       *(undefined8 *)pFVar1;
                  *(undefined8 *)((longlong)&(__return_storage_ptr__->BaseColor).field0_0x0 + 8) =
                       uVar7;
                  *(undefined4 *)&__return_storage_ptr__->GroupIndex = uVar2;
                }
              }
              iVar17 = iVar17 + 1;
              local_78 = local_78 - 1;
            } while (local_78 != 0);
          }
          iVar28 = iVar28 + 1;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      local_a0 = local_res18 + -1;
      if (local_a4 <= local_a0) {
        iVar20 = iVar11 + local_a4;
        local_78 = (ulonglong)((local_a0 - local_a4) + 1);
        do {
          iVar28 = iVar26 + local_a4;
          local_90 = (ulonglong)((local_a0 - local_a4) + 1);
          iVar17 = iVar24 + local_res18;
          iVar23 = iVar24 + iVar10;
          do {
            if ((((iVar17 < 0) || ((this->Resolution).field0_0x0._s_0.X <= iVar17)) || (iVar20 < 0))
               || ((((this->Resolution).field0_0x0._s_0.Y <= iVar20 || (iVar28 < 0)) ||
                   ((this->Resolution).field0_0x0._s_0.Z <= iVar28)))) {
              bVar9 = false;
            }
            else {
              bVar9 = true;
            }
            iVar3 = (this->Resolution).field0_0x0._s_0.Z;
            iVar4 = (this->Resolution).field0_0x0._s_0.Y;
            iVar21 = (this->Resolution).field0_0x0._s_0.X;
            iVar29 = iVar3 + -1;
            iVar27 = iVar21 + -1;
            if (iVar28 < iVar29) {
              iVar29 = iVar28;
            }
            iVar18 = iVar4 + -1;
            if (iVar20 < iVar4 + -1) {
              iVar18 = iVar20;
            }
            iVar14 = iVar27;
            if (iVar17 < iVar27) {
              iVar14 = iVar17;
            }
            iVar13 = 0;
            if (0 < iVar14) {
              iVar13 = iVar14;
            }
            iVar14 = 0;
            if (0 < iVar18) {
              iVar14 = iVar18;
            }
            iVar18 = 0;
            if (0 < iVar29) {
              iVar18 = iVar29;
            }
            if (((iVar23 < 0) || (iVar21 <= iVar23)) ||
               ((iVar20 < 0 ||
                (((iVar4 <= iVar20 || (iVar28 < 0)) || (bVar8 = true, iVar3 <= iVar28)))))) {
              bVar8 = false;
            }
            if (iVar23 < iVar27) {
              iVar27 = iVar23;
            }
            iVar29 = 0;
            if (0 < iVar27) {
              iVar29 = iVar27;
            }
            if (bVar9) {
              uVar25 = iVar13 + (iVar4 * iVar18 + iVar14) * iVar21;
              uVar12 = 0;
              if ((int)uVar25 < (this->Datas).ArrayNum) {
                uVar12 = ~uVar25 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                pFVar15 = (FData *)(*pcVar6)();
                return pFVar15;
              }
              lVar19 = (longlong)(int)uVar25;
              if ((this->Datas).AllocatorInstance.Data[lVar19 * 0x14 + 0x10] !=
                  (FScriptContainerElement)0xff) {
                uVar12 = 0;
                if ((int)uVar25 < (this->Datas).ArrayNum) {
                  uVar12 = ~uVar25 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  pFVar15 = (FData *)(*pcVar6)();
                  return pFVar15;
                }
                pFVar5 = (this->Datas).AllocatorInstance.Data;
                pFVar1 = pFVar5 + lVar19 * 0x14;
                uVar7 = *(undefined8 *)(pFVar1 + 8);
                uVar2 = *(undefined4 *)(pFVar5 + lVar19 * 0x14 + 0x10);
                *(undefined8 *)&(__return_storage_ptr__->BaseColor).field0_0x0 =
                     *(undefined8 *)pFVar1;
                *(undefined8 *)((longlong)&(__return_storage_ptr__->BaseColor).field0_0x0 + 8) =
                     uVar7;
                *(undefined4 *)&__return_storage_ptr__->GroupIndex = uVar2;
              }
            }
            if (bVar8) {
              uVar25 = (iVar14 + iVar18 * (this->Resolution).field0_0x0._s_0.Y) *
                       (this->Resolution).field0_0x0._s_0.X + iVar29;
              uVar12 = 0;
              if ((int)uVar25 < (this->Datas).ArrayNum) {
                uVar12 = ~uVar25 >> 0x1f;
              }
              if ((uVar12 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar6 = (code *)swi(3);
                pFVar15 = (FData *)(*pcVar6)();
                return pFVar15;
              }
              lVar19 = (longlong)(int)uVar25;
              if ((this->Datas).AllocatorInstance.Data[lVar19 * 0x14 + 0x10] !=
                  (FScriptContainerElement)0xff) {
                uVar12 = 0;
                if ((int)uVar25 < (this->Datas).ArrayNum) {
                  uVar12 = ~uVar25 >> 0x1f;
                }
                if ((uVar12 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  pFVar15 = (FData *)(*pcVar6)();
                  return pFVar15;
                }
                pFVar5 = (this->Datas).AllocatorInstance.Data;
                pFVar1 = pFVar5 + lVar19 * 0x14;
                uVar7 = *(undefined8 *)(pFVar1 + 8);
                uVar2 = *(undefined4 *)(pFVar5 + lVar19 * 0x14 + 0x10);
                *(undefined8 *)&(__return_storage_ptr__->BaseColor).field0_0x0 =
                     *(undefined8 *)pFVar1;
                *(undefined8 *)((longlong)&(__return_storage_ptr__->BaseColor).field0_0x0 + 8) =
                     uVar7;
                *(undefined4 *)&__return_storage_ptr__->GroupIndex = uVar2;
              }
            }
            iVar28 = iVar28 + 1;
            local_90 = local_90 - 1;
          } while (local_90 != 0);
          iVar20 = iVar20 + 1;
          local_78 = local_78 - 1;
        } while (local_78 != 0);
      }
      if (__return_storage_ptr__->GroupIndex != 0xff) goto LAB_14e0146d4;
      local_res18 = local_res18 + 1;
    } while (local_res18 <= iVar22);
  }
  bVar9 = ::FDebug::CheckVerifyFailedImpl2
                    ("Out.GroupIndex != FHairStrandsVoxelData::InvalidGroupIndex",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\HairStrands\\Source\\HairStrandsCore\\Private\\GroomBuilder.cpp"
                     ,0xd1f,L"");
  if (bVar9) {
    pcVar6 = (code *)swi(3);
    pFVar15 = (FData *)(*pcVar6)();
    return pFVar15;
  }
LAB_14e0146d4:
  if (__return_storage_ptr__->GroupIndex == 0xff) {
    __return_storage_ptr__->GroupIndex = '\0';
  }
  return __return_storage_ptr__;
}

