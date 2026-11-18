// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 3

// InverseTransform @ 143b24390

void __cdecl
Chaos::FFFT3::InverseTransform
          (TUniformGrid<double,3> *param_1,TArrayND<Chaos::TVector<double,3>,3> *param_2,
          TArrayND<Chaos::FComplex,3> *param_3,TArrayND<Chaos::FComplex,3> *param_4,
          TArrayND<Chaos::FComplex,3> *param_5,bool param_6)

{
  InverseTransformHelper(param_1,param_2,param_3,0,param_6);
  InverseTransformHelper(param_1,param_2,param_4,1,param_6);
  InverseTransformHelper(param_1,param_2,param_5,2,param_6);
  return;
}

// MakeDivergenceFree @ 143b26740

void __cdecl
Chaos::FFFT3::MakeDivergenceFree
          (TUniformGrid<double,3> *param_1,TArrayND<Chaos::FComplex,3> *param_2,
          TArrayND<Chaos::FComplex,3> *param_3,TArrayND<Chaos::FComplex,3> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  iVar14 = 1;
  dVar19 = __real_401921fb60000000 / (*(double *)&param_1->field_0x18 - *(double *)param_1);
  iVar16 = 0;
  iVar15 = *(int *)&param_1->field_0x30;
  dVar18 = __real_401921fb60000000 /
           (*(double *)&param_1->field_0x28 - *(double *)&param_1->field_0x10);
  dVar7 = __real_401921fb60000000 /
          (*(double *)&param_1->field_0x20 - *(double *)&param_1->field_0x8);
  if (0 < iVar15 / 2) {
    do {
      uVar12 = *(int *)&param_2->field_0x4 * *(int *)&param_2->field_0x8 * iVar14;
      uVar10 = 0;
      if ((int)uVar12 < *(int *)&param_2->field_0x18) {
        uVar10 = ~uVar12 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      lVar5 = *(longlong *)&param_2->field_0x10;
      iVar14 = iVar14 + 1;
      *(undefined8 *)(lVar5 + (longlong)(int)uVar12 * 0x10) = 0;
      *(undefined8 *)(lVar5 + 8 + (longlong)(int)uVar12 * 0x10) = 0;
      iVar15 = *(int *)&param_1->field_0x30;
    } while (iVar14 <= iVar15 / 2);
  }
  dVar8 = __real_3ff0000000000000;
  iVar14 = iVar16;
  if (0 < iVar15) {
    do {
      dVar17 = (double)iVar14;
      if (iVar15 / 2 < iVar14) {
        dVar17 = dVar17 - (double)iVar15;
      }
      iVar15 = 1;
      dVar17 = dVar19 * dVar17;
      if (0 < *(int *)&param_1->field_0x34 / 2) {
        do {
          uVar12 = (iVar14 * *(int *)&param_2->field_0x4 + iVar15) * *(int *)&param_2->field_0x8;
          dVar20 = (double)iVar15 * dVar7;
          uVar10 = 0;
          if ((int)uVar12 < *(int *)&param_2->field_0x18) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          dVar22 = dVar8 / (dVar20 * dVar20 + dVar17 * dVar17);
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          dVar1 = *(double *)(*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar12 * 0x10);
          dVar21 = *(double *)(*(longlong *)&param_2->field_0x10 + 8 + (longlong)(int)uVar12 * 0x10)
          ;
          uVar12 = (iVar14 * *(int *)&param_3->field_0x4 + iVar15) * *(int *)&param_3->field_0x8;
          uVar10 = 0;
          if ((int)uVar12 < *(int *)&param_3->field_0x18) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar13 = (iVar14 * *(int *)&param_2->field_0x4 + iVar15) * *(int *)&param_2->field_0x8;
          dVar1 = (dVar20 * *(double *)
                             (*(longlong *)&param_3->field_0x10 + (longlong)(int)uVar12 * 0x10) +
                  dVar17 * dVar1) * dVar22;
          uVar10 = 0;
          if ((int)uVar13 < *(int *)&param_2->field_0x18) {
            uVar10 = ~uVar13 >> 0x1f;
          }
          dVar22 = (dVar20 * *(double *)
                              (*(longlong *)&param_3->field_0x10 + 8 + (longlong)(int)uVar12 * 0x10)
                   + dVar17 * dVar21) * dVar22;
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar5 = *(longlong *)&param_2->field_0x10;
          lVar11 = (longlong)(int)uVar13;
          *(double *)(lVar5 + lVar11 * 0x10) = *(double *)(lVar5 + lVar11 * 0x10) - dVar1 * dVar17;
          *(double *)(lVar5 + 8 + lVar11 * 0x10) =
               *(double *)(lVar5 + 8 + lVar11 * 0x10) - dVar22 * dVar17;
          uVar12 = (iVar14 * *(int *)&param_3->field_0x4 + iVar15) * *(int *)&param_3->field_0x8;
          uVar10 = 0;
          if ((int)uVar12 < *(int *)&param_3->field_0x18) {
            uVar10 = ~uVar12 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          lVar5 = *(longlong *)&param_3->field_0x10;
          iVar15 = iVar15 + 1;
          lVar11 = (longlong)(int)uVar12;
          *(double *)(lVar5 + lVar11 * 0x10) = *(double *)(lVar5 + lVar11 * 0x10) - dVar1 * dVar20;
          *(double *)(lVar5 + 8 + lVar11 * 0x10) =
               *(double *)(lVar5 + 8 + lVar11 * 0x10) - dVar22 * dVar20;
        } while (iVar15 <= *(int *)&param_1->field_0x34 / 2);
      }
      iVar15 = *(int *)&param_1->field_0x30;
      iVar14 = iVar14 + 1;
    } while (iVar14 < iVar15);
    if (0 < iVar15) {
      do {
        dVar17 = (double)iVar16;
        if (iVar15 / 2 < iVar16) {
          dVar17 = dVar17 - (double)iVar15;
        }
        iVar15 = *(int *)&param_1->field_0x34;
        iVar14 = 0;
        dVar17 = dVar19 * dVar17;
        if (0 < iVar15) {
          do {
            dVar20 = (double)iVar14;
            if (iVar15 / 2 < iVar14) {
              dVar20 = dVar20 - (double)iVar15;
            }
            iVar15 = 1;
            dVar20 = dVar7 * dVar20;
            if (0 < *(int *)&param_1->field_0x38 / 2) {
              do {
                dVar22 = (double)iVar15 * dVar18;
                uVar12 = (iVar16 * *(int *)&param_2->field_0x4 + iVar14) *
                         *(int *)&param_2->field_0x8 + iVar15;
                uVar10 = 0;
                if ((int)uVar12 < *(int *)&param_2->field_0x18) {
                  uVar10 = ~uVar12 >> 0x1f;
                }
                dVar1 = dVar8 / (dVar22 * dVar22 + dVar20 * dVar20 + dVar17 * dVar17);
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                dVar21 = *(double *)
                          (*(longlong *)&param_2->field_0x10 + (longlong)(int)uVar12 * 0x10);
                dVar2 = *(double *)
                         (*(longlong *)&param_2->field_0x10 + 8 + (longlong)(int)uVar12 * 0x10);
                uVar12 = (iVar16 * *(int *)&param_3->field_0x4 + iVar14) *
                         *(int *)&param_3->field_0x8 + iVar15;
                uVar10 = 0;
                if ((int)uVar12 < *(int *)&param_3->field_0x18) {
                  uVar10 = ~uVar12 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                dVar3 = *(double *)
                         (*(longlong *)&param_3->field_0x10 + (longlong)(int)uVar12 * 0x10);
                dVar4 = *(double *)
                         (*(longlong *)&param_3->field_0x10 + 8 + (longlong)(int)uVar12 * 0x10);
                uVar12 = (iVar16 * *(int *)&param_4->field_0x4 + iVar14) *
                         *(int *)&param_4->field_0x8 + iVar15;
                uVar10 = 0;
                if ((int)uVar12 < *(int *)&param_4->field_0x18) {
                  uVar10 = ~uVar12 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar13 = (iVar16 * *(int *)&param_2->field_0x4 + iVar14) *
                         *(int *)&param_2->field_0x8 + iVar15;
                dVar21 = (dVar22 * *(double *)
                                    (*(longlong *)&param_4->field_0x10 +
                                    (longlong)(int)uVar12 * 0x10) + dVar20 * dVar3 + dVar17 * dVar21
                         ) * dVar1;
                uVar10 = 0;
                if ((int)uVar13 < *(int *)&param_2->field_0x18) {
                  uVar10 = ~uVar13 >> 0x1f;
                }
                dVar1 = (dVar22 * *(double *)
                                   (*(longlong *)&param_4->field_0x10 + 8 +
                                   (longlong)(int)uVar12 * 0x10) + dVar20 * dVar4 + dVar17 * dVar2)
                        * dVar1;
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar5 = *(longlong *)&param_2->field_0x10;
                lVar11 = (longlong)(int)uVar13;
                *(double *)(lVar5 + lVar11 * 0x10) =
                     *(double *)(lVar5 + lVar11 * 0x10) - dVar21 * dVar17;
                *(double *)(lVar5 + 8 + lVar11 * 0x10) =
                     *(double *)(lVar5 + 8 + lVar11 * 0x10) - dVar1 * dVar17;
                uVar12 = (iVar16 * *(int *)&param_3->field_0x4 + iVar14) *
                         *(int *)&param_3->field_0x8 + iVar15;
                uVar10 = 0;
                if ((int)uVar12 < *(int *)&param_3->field_0x18) {
                  uVar10 = ~uVar12 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar5 = *(longlong *)&param_3->field_0x10;
                lVar11 = (longlong)(int)uVar12;
                *(double *)(lVar5 + lVar11 * 0x10) =
                     *(double *)(lVar5 + lVar11 * 0x10) - dVar21 * dVar20;
                *(double *)(lVar5 + 8 + lVar11 * 0x10) =
                     *(double *)(lVar5 + 8 + lVar11 * 0x10) - dVar1 * dVar20;
                uVar12 = (iVar16 * *(int *)&param_4->field_0x4 + iVar14) *
                         *(int *)&param_4->field_0x8 + iVar15;
                uVar10 = 0;
                if ((int)uVar12 < *(int *)&param_4->field_0x18) {
                  uVar10 = ~uVar12 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                lVar5 = *(longlong *)&param_4->field_0x10;
                iVar15 = iVar15 + 1;
                lVar11 = (longlong)(int)uVar12;
                *(double *)(lVar5 + lVar11 * 0x10) =
                     *(double *)(lVar5 + lVar11 * 0x10) - dVar21 * dVar22;
                *(double *)(lVar5 + 8 + lVar11 * 0x10) =
                     *(double *)(lVar5 + 8 + lVar11 * 0x10) - dVar1 * dVar22;
              } while (iVar15 <= *(int *)&param_1->field_0x38 / 2);
            }
            iVar15 = *(int *)&param_1->field_0x34;
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar15);
        }
        iVar15 = *(int *)&param_1->field_0x30;
        iVar16 = iVar16 + 1;
      } while (iVar16 < iVar15);
    }
  }
  EnforceSymmetry(param_1,param_2);
  EnforceSymmetry(param_1,param_3);
  EnforceSymmetry(param_1,param_4);
  return;
}

// Transform @ 143b46190

void __cdecl
Chaos::FFFT3::Transform
          (TUniformGrid<double,3> *param_1,TArrayND<Chaos::TVector<double,3>,3> *param_2,
          TArrayND<Chaos::FComplex,3> *param_3,TArrayND<Chaos::FComplex,3> *param_4,
          TArrayND<Chaos::FComplex,3> *param_5)

{
  TransformHelper(param_1,param_2,param_3,0);
  TransformHelper(param_1,param_2,param_4,1);
  TransformHelper(param_1,param_2,param_5,2);
  return;
}

