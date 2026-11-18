// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ScreenShotComparisonTools
// Functions: 5

// operator() @ 148c3e600

void __thiscall `FImageComparer::Compare'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  FImageTolerance *pFVar5;
  code *pcVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  FColor_u_0 local_res8 [2];
  int local_res10;
  FColor_u_0 local_res18 [2];
  longlong local_res20;
  
  uVar7 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  iVar16 = 0;
  if (0 < **(int **)this) {
    local_res20 = 0;
    local_res10 = param_1;
    do {
      if ((param_1 < **(int **)((longlong)this + 8)) && (iVar16 < **(int **)((longlong)this + 0x10))
         ) {
        piVar15 = (int *)**(undefined8 **)((longlong)this + 0x40);
        lVar12 = (*piVar15 * local_res20 + (longlong)param_1) * 4;
        if (((longlong)piVar15[1] * (longlong)*piVar15 * 4 <= lVar12) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset < ( (int64)Width * Height * 4 )",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Public\\ImageComparer.h"
                               ,199,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar1 = lVar12 + 3;
        uVar11 = 0;
        if (lVar1 < *(longlong *)(piVar15 + 4)) {
          uVar11 = (uint)((ulonglong)lVar1 >> 0x3f) ^ 1;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar2 = *(byte *)(lVar1 + *(longlong *)(piVar15 + 2));
        lVar1 = lVar12 + 2;
        uVar11 = 0;
        if (lVar1 < *(longlong *)(piVar15 + 4)) {
          uVar11 = (uint)((ulonglong)lVar1 >> 0x3f) ^ 1;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar3 = *(byte *)(lVar1 + *(longlong *)(piVar15 + 2));
        lVar1 = lVar12 + 1;
        uVar11 = 0;
        if (lVar1 < *(longlong *)(piVar15 + 4)) {
          uVar11 = (uint)((ulonglong)lVar1 >> 0x3f) ^ 1;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar4 = *(byte *)(lVar1 + *(longlong *)(piVar15 + 2));
        uVar11 = 0;
        if (lVar12 < *(longlong *)(piVar15 + 4)) {
          uVar11 = (uint)((ulonglong)lVar12 >> 0x3f) ^ 1;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_res8[0]._2_1_ = *(byte *)(lVar12 + *(longlong *)(piVar15 + 2));
        piVar15 = (int *)**(undefined8 **)((longlong)this + 0x48);
        lVar12 = (*piVar15 * local_res20 + (longlong)param_1) * 4;
        local_res8[0]._0_1_ = bVar3;
        local_res8[0]._1_1_ = bVar4;
        local_res8[0]._3_1_ = bVar2;
        if (((longlong)piVar15[1] * (longlong)*piVar15 * 4 <= lVar12) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset < ( (int64)Width * Height * 4 )",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Public\\ImageComparer.h"
                               ,199,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        lVar1 = lVar12 + 3;
        uVar11 = 0;
        if (lVar1 < *(longlong *)(piVar15 + 4)) {
          uVar11 = (uint)((ulonglong)lVar1 >> 0x3f) ^ 1;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar2 = *(byte *)(lVar1 + *(longlong *)(piVar15 + 2));
        lVar1 = lVar12 + 2;
        uVar11 = 0;
        if (lVar1 < *(longlong *)(piVar15 + 4)) {
          uVar11 = (uint)((ulonglong)lVar1 >> 0x3f) ^ 1;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar3 = *(byte *)(lVar1 + *(longlong *)(piVar15 + 2));
        lVar1 = lVar12 + 1;
        uVar11 = 0;
        if (lVar1 < *(longlong *)(piVar15 + 4)) {
          uVar11 = (uint)((ulonglong)lVar1 >> 0x3f) ^ 1;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        bVar4 = *(byte *)(lVar1 + *(longlong *)(piVar15 + 2));
        uVar11 = 0;
        if (lVar12 < *(longlong *)(piVar15 + 4)) {
          uVar11 = (uint)((ulonglong)lVar12 >> 0x3f) ^ 1;
        }
        if ((uVar11 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        param_1 = local_res10;
        pFVar5 = *(FImageTolerance **)((longlong)this + 0x50);
        local_res18[0]._2_1_ = *(byte *)(lVar12 + *(longlong *)(piVar15 + 2));
        local_res18[0]._0_1_ = bVar3;
        local_res18[0]._1_1_ = bVar4;
        local_res18[0]._3_1_ = bVar2;
        if (pFVar5->IgnoreColors == false) {
          if (((((float)pFVar5->Red <
                 (float)((uint)((float)(byte)local_res8[0]._2_1_ - (float)(byte)local_res18[0]._2_1_
                               ) & uVar7)) ||
               ((float)pFVar5->Green <
                (float)((uint)((float)(byte)local_res8[0]._1_1_ - (float)bVar4) & uVar7))) ||
              ((float)pFVar5->Blue <
               (float)((uint)((float)(byte)local_res8[0]._0_1_ - (float)bVar3) & uVar7))) ||
             ((float)pFVar5->Alpha <
              (float)((uint)((float)(byte)local_res8[0]._3_1_ - (float)bVar2) & uVar7))) {
            if ((pFVar5->IgnoreAntiAliasing == false) ||
               ((bVar8 = FPixelOperations::IsAntialiased
                                   ((FColor *)&local_res8[0]._s_0,
                                    (FComparableImage *)**(undefined8 **)((longlong)this + 0x40),
                                    local_res10,iVar16,pFVar5), !bVar8 &&
                (bVar8 = FPixelOperations::IsAntialiased
                                   ((FColor *)&local_res18[0]._s_0,
                                    (FComparableImage *)**(undefined8 **)((longlong)this + 0x48),
                                    param_1,iVar16,*(FImageTolerance **)((longlong)this + 0x50)),
                !bVar8)))) {
              piVar15 = *(int **)((longlong)this + 0x18);
              uVar11 = (*piVar15 * iVar16 + param_1) * 4;
              if ((*piVar15 * piVar15[1] * 4 <= (int)uVar11) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Offset < ( Width * Height * 4 )",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Private\\ImageComparer.cpp"
                                     ,0x4f,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar9 = 0;
              if ((int)uVar11 < piVar15[4]) {
                uVar9 = ~uVar11 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar9 = uVar11 + 1;
              *(undefined1 *)((longlong)(int)uVar11 + *(longlong *)(piVar15 + 2)) = 0xff;
              uVar10 = 0;
              if ((int)uVar9 < piVar15[4]) {
                uVar10 = ~uVar9 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar10 = uVar11 + 2;
              *(undefined1 *)((longlong)(int)uVar9 + *(longlong *)(piVar15 + 2)) = 0xff;
              uVar9 = 0;
              if ((int)uVar10 < piVar15[4]) {
                uVar9 = ~uVar10 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
            else {
              piVar15 = *(int **)((longlong)this + 0x18);
              iVar13 = *piVar15;
              iVar14 = piVar15[1];
              bVar8 = FPixelOperations::IsBrightnessSimilar
                                ((FColor *)&local_res8[0]._s_0,(FColor *)&local_res18[0]._s_0,
                                 *(FImageTolerance **)((longlong)this + 0x50));
              iVar14 = iVar14 * iVar13 * 4;
              uVar11 = (iVar13 * iVar16 + param_1) * 4;
              if (bVar8) {
                if ((iVar14 <= (int)uVar11) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Offset < ( Width * Height * 4 )",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Private\\ImageComparer.cpp"
                                       ,0x44,L""), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar9 = 0;
                if ((int)uVar11 < piVar15[4]) {
                  uVar9 = ~uVar11 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar9 = uVar11 + 1;
                *(undefined1 *)((longlong)(int)uVar11 + *(longlong *)(piVar15 + 2)) = 0;
                uVar10 = 0;
                if ((int)uVar9 < piVar15[4]) {
                  uVar10 = ~uVar9 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar10 = uVar11 + 2;
                *(undefined1 *)((longlong)(int)uVar9 + *(longlong *)(piVar15 + 2)) = 0;
                uVar9 = 0;
                if ((int)uVar10 < piVar15[4]) {
                  uVar9 = ~uVar10 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                uVar11 = uVar11 + 3;
                *(undefined1 *)((longlong)(int)uVar10 + *(longlong *)(piVar15 + 2)) = 0;
                uVar9 = 0;
                if ((int)uVar11 < piVar15[4]) {
                  uVar9 = ~uVar11 >> 0x1f;
                }
                if ((uVar9 == 0) &&
                   (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                goto LAB_148c3ebd7;
              }
              if ((iVar14 <= (int)uVar11) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Offset < ( Width * Height * 4 )",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Private\\ImageComparer.cpp"
                                     ,0x4f,L""), bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar9 = 0;
              if ((int)uVar11 < piVar15[4]) {
                uVar9 = ~uVar11 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar9 = uVar11 + 1;
              *(undefined1 *)((longlong)(int)uVar11 + *(longlong *)(piVar15 + 2)) = 0xff;
              uVar10 = 0;
              if ((int)uVar9 < piVar15[4]) {
                uVar10 = ~uVar9 >> 0x1f;
              }
              if ((uVar10 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              uVar10 = uVar11 + 2;
              *(undefined1 *)((longlong)(int)uVar9 + *(longlong *)(piVar15 + 2)) = 0xff;
              uVar9 = 0;
              if ((int)uVar10 < piVar15[4]) {
                uVar9 = ~uVar10 >> 0x1f;
              }
              if ((uVar9 == 0) &&
                 (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
            }
LAB_148c3ed08:
            *(undefined1 *)((longlong)(int)uVar10 + *(longlong *)(piVar15 + 2)) = 0xff;
            goto LAB_148c3f591;
          }
          piVar15 = *(int **)((longlong)this + 0x18);
          uVar11 = (*piVar15 * iVar16 + local_res10) * 4;
          if ((*piVar15 * piVar15[1] * 4 <= (int)uVar11) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Offset < ( Width * Height * 4 )",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Private\\ImageComparer.cpp"
                                 ,0x44,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar9 = 0;
          if ((int)uVar11 < piVar15[4]) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar9 = uVar11 + 1;
          *(undefined1 *)((longlong)(int)uVar11 + *(longlong *)(piVar15 + 2)) = 0;
          uVar10 = 0;
          if ((int)uVar9 < piVar15[4]) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar10 = uVar11 + 2;
          *(undefined1 *)((longlong)(int)uVar9 + *(longlong *)(piVar15 + 2)) = 0;
          uVar9 = 0;
          if ((int)uVar10 < piVar15[4]) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = uVar11 + 3;
          *(undefined1 *)((longlong)(int)uVar10 + *(longlong *)(piVar15 + 2)) = 0;
          uVar9 = 0;
          if ((int)uVar11 < piVar15[4]) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
        else {
          piVar15 = *(int **)((longlong)this + 0x18);
          iVar13 = *piVar15;
          iVar14 = piVar15[1];
          bVar8 = FPixelOperations::IsBrightnessSimilar
                            ((FColor *)&local_res8[0]._s_0,(FColor *)&local_res18[0]._s_0,pFVar5);
          param_1 = local_res10;
          uVar11 = (iVar13 * iVar16 + local_res10) * 4;
          iVar13 = iVar14 * iVar13 * 4;
          if (!bVar8) {
            if ((iVar13 <= (int)uVar11) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Offset < ( Width * Height * 4 )",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Private\\ImageComparer.cpp"
                                   ,0x4f,L""), bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar9 = 0;
            if ((int)uVar11 < piVar15[4]) {
              uVar9 = ~uVar11 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar9 = uVar11 + 1;
            *(undefined1 *)((longlong)(int)uVar11 + *(longlong *)(piVar15 + 2)) = 0xff;
            uVar10 = 0;
            if ((int)uVar9 < piVar15[4]) {
              uVar10 = ~uVar9 >> 0x1f;
            }
            if ((uVar10 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uVar10 = uVar11 + 2;
            *(undefined1 *)((longlong)(int)uVar9 + *(longlong *)(piVar15 + 2)) = 0xff;
            uVar9 = 0;
            if ((int)uVar10 < piVar15[4]) {
              uVar9 = ~uVar10 >> 0x1f;
            }
            if ((uVar9 == 0) &&
               (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar8)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            goto LAB_148c3ed08;
          }
          if ((iVar13 <= (int)uVar11) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Offset < ( Width * Height * 4 )",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Private\\ImageComparer.cpp"
                                 ,0x44,L""), bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar9 = 0;
          if ((int)uVar11 < piVar15[4]) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar9 = uVar11 + 1;
          *(undefined1 *)((longlong)(int)uVar11 + *(longlong *)(piVar15 + 2)) = 0;
          uVar10 = 0;
          if ((int)uVar9 < piVar15[4]) {
            uVar10 = ~uVar9 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar10 = uVar11 + 2;
          *(undefined1 *)((longlong)(int)uVar9 + *(longlong *)(piVar15 + 2)) = 0;
          uVar9 = 0;
          if ((int)uVar10 < piVar15[4]) {
            uVar9 = ~uVar10 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          uVar11 = uVar11 + 3;
          *(undefined1 *)((longlong)(int)uVar10 + *(longlong *)(piVar15 + 2)) = 0;
          uVar9 = 0;
          if ((int)uVar11 < piVar15[4]) {
            uVar9 = ~uVar11 >> 0x1f;
          }
          if ((uVar9 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
        }
LAB_148c3ebd7:
        *(undefined1 *)((longlong)(int)uVar11 + *(longlong *)(piVar15 + 2)) = 0xff;
      }
      else {
        piVar15 = *(int **)((longlong)this + 0x18);
        uVar11 = (*piVar15 * iVar16 + param_1) * 4;
        if ((*piVar15 * piVar15[1] * 4 <= (int)uVar11) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("Offset < ( Width * Height * 4 )",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Private\\ImageComparer.cpp"
                               ,0x4f,L""), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar9 = 0;
        if ((int)uVar11 < piVar15[4]) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar9 = uVar11 + 1;
        *(undefined1 *)((longlong)(int)uVar11 + *(longlong *)(piVar15 + 2)) = 0xff;
        uVar10 = 0;
        if ((int)uVar9 < piVar15[4]) {
          uVar10 = ~uVar9 >> 0x1f;
        }
        if ((uVar10 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar10 = uVar11 + 2;
        *(undefined1 *)((longlong)(int)uVar9 + *(longlong *)(piVar15 + 2)) = 0;
        uVar9 = 0;
        if ((int)uVar10 < piVar15[4]) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined1 *)((longlong)(int)uVar10 + *(longlong *)(piVar15 + 2)) = 0;
LAB_148c3f591:
        uVar11 = uVar11 + 3;
        uVar9 = 0;
        if ((int)uVar11 < piVar15[4]) {
          uVar9 = ~uVar11 >> 0x1f;
        }
        if ((uVar9 == 0) &&
           (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(undefined1 *)((longlong)(int)uVar11 + *(longlong *)(piVar15 + 2)) = 0xff;
        LOCK();
        **(int **)((longlong)this + 0x20) = **(int **)((longlong)this + 0x20) + 1;
        UNLOCK();
        LOCK();
        piVar15 = (int *)(*(longlong *)((longlong)this + 0x38) +
                         (longlong)
                         (param_1 / **(int **)((longlong)this + 0x30) +
                         (iVar16 / **(int **)((longlong)this + 0x28)) * 10) * 4);
        *piVar15 = *piVar15 + 1;
        UNLOCK();
      }
      iVar16 = iVar16 + 1;
      local_res20 = local_res20 + 1;
    } while (iVar16 < **(int **)this);
  }
  return;
}

// Compare @ 148c42180

FImageComparisonResult * __thiscall
FImageComparer::Compare
          (FImageComparer *this,FImageComparisonResult *__return_storage_ptr__,FString *param_1,
          FString *param_2,FImageTolerance *param_3,FString *param_4)

{
  ITextData *pIVar1;
  bool bVar2;
  ITextData IVar3;
  undefined1 local_98 [8];
  FText local_90;
  FText local_80;
  FImageTolerance local_68;
  FComparableImage local_58;
  FComparableImage local_38;
  
  FText::FText(&local_90);
  FText::FText(&local_80);
  local_38.Width = 0;
  local_38.Height = 0;
  local_38.Bytes.ArrayMax = 0;
  local_58.Width = 0;
  local_58.Height = 0;
  local_58.Bytes.ArrayMax = 0;
  local_38.Bytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Bytes.ArrayNum = 0;
  local_58.Bytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_58.Bytes.ArrayNum = 0;
  bVar2 = FComparableImage::LoadFile(&local_38,param_1,&local_90);
  if (bVar2) {
    bVar2 = FComparableImage::LoadFile(&local_58,param_2,&local_80);
    if (bVar2) {
      local_68.Red = param_3->Red;
      local_68.Green = param_3->Green;
      local_68.Blue = param_3->Blue;
      local_68.Alpha = param_3->Alpha;
      local_68.MinBrightness = param_3->MinBrightness;
      local_68.MaxBrightness = param_3->MaxBrightness;
      local_68.IgnoreAntiAliasing = param_3->IgnoreAntiAliasing;
      local_68.IgnoreColors = param_3->IgnoreColors;
      local_68.MaximumLocalError = param_3->MaximumLocalError;
      local_68.MaximumGlobalError = param_3->MaximumGlobalError;
      Compare(this,__return_storage_ptr__,&local_38,&local_58,&local_68,param_4);
      ::FString::operator=(&__return_storage_ptr__->ApprovedFilePath,param_1);
      ::FString::operator=(&__return_storage_ptr__->IncomingFilePath,param_2);
      if (local_58.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Bytes.AllocatorInstance.Data);
      }
    }
    else {
      FImageComparisonResult::FImageComparisonResult(__return_storage_ptr__);
      ::FString::operator=(&__return_storage_ptr__->ApprovedFilePath,param_1);
      ::FString::operator=(&__return_storage_ptr__->IncomingFilePath,param_2);
      pIVar1 = (__return_storage_ptr__->ErrorMessage).TextData.Reference;
      if (pIVar1 != local_80.TextData.Reference) {
        (__return_storage_ptr__->ErrorMessage).TextData.Reference = local_80.TextData.Reference;
        if (local_80.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_80.TextData.Reference + 8))
                    (local_80.TextData.Reference,local_98);
        }
        if (pIVar1 != (ITextData *)0x0) {
          (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
        }
      }
      (__return_storage_ptr__->ErrorMessage).Flags = local_80.Flags;
      if (local_58.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Bytes.AllocatorInstance.Data);
      }
    }
    if (local_38.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Bytes.AllocatorInstance.Data);
    }
    if (local_80.TextData.Reference == (ITextData *)0x0) goto LAB_148c423b9;
    IVar3 = *local_80.TextData.Reference;
  }
  else {
    FImageComparisonResult::FImageComparisonResult(__return_storage_ptr__);
    ::FString::operator=(&__return_storage_ptr__->ApprovedFilePath,param_1);
    ::FString::operator=(&__return_storage_ptr__->IncomingFilePath,param_2);
    pIVar1 = (__return_storage_ptr__->ErrorMessage).TextData.Reference;
    if (pIVar1 != local_90.TextData.Reference) {
      (__return_storage_ptr__->ErrorMessage).TextData.Reference = local_90.TextData.Reference;
      if (local_90.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_90.TextData.Reference + 8))
                  (local_90.TextData.Reference,local_98);
      }
      if (pIVar1 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar1 + 0x10))(pIVar1);
      }
    }
    (__return_storage_ptr__->ErrorMessage).Flags = local_90.Flags;
    if (local_58.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Bytes.AllocatorInstance.Data);
    }
    if (local_38.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Bytes.AllocatorInstance.Data);
    }
    if (local_80.TextData.Reference == (ITextData *)0x0) goto LAB_148c423b9;
    IVar3 = *local_80.TextData.Reference;
  }
  (**(code **)((longlong)IVar3 + 0x10))(local_80.TextData.Reference);
LAB_148c423b9:
  if (local_90.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_90.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// Compare @ 148c423f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */

FImageComparisonResult * __thiscall
FImageComparer::Compare
          (FImageComparer *this,FImageComparisonResult *__return_storage_ptr__,
          FComparableImage *param_1,FComparableImage *param_2,FImageTolerance *param_3,
          FString *param_4)

{
  int iVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  bool bVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  uchar uVar11;
  FComparableImage *pFVar12;
  FComparableImage *pFVar13;
  uint uVar14;
  FString *pFVar15;
  FDateTime FVar16;
  FText *pFVar17;
  FTextFormat *pFVar18;
  TTuple<FString,FFormatArgumentValue> *pTVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  double dVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auStackY_318 [32];
  TArrayView<std::nullptr_t,int> local_2d8;
  <lambda_1> local_2c8;
  int local_2c4;
  int local_2c0;
  int local_2bc;
  int local_2b8;
  FLLMScope local_2b4;
  int local_2b0;
  int local_2ac;
  FComparableImage *local_2a8;
  FComparableImage *local_2a0;
  FImageDelta local_298;
  undefined1 local_270 [16];
  FMemScope local_260;
  FText local_258;
  int *local_248;
  int *local_240;
  int *local_238;
  FImageDelta *local_230;
  int *local_228;
  int *local_220;
  int *local_218;
  uint *local_210;
  FComparableImage **local_208;
  FComparableImage **local_200;
  FImageTolerance *local_1f8;
  FTextFormat local_1f0;
  uint local_1d8 [100];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_318;
  local_2a8 = param_2;
  local_2a0 = param_1;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    ::FName::FName(&LLMScope_Name295,L"AutomationTest/ImageCompare");
    _Init_thread_footer(&::_TSS0);
  }
  FLLMScope::FLLMScope(&local_2b4,LLMScope_Name295,false,None,Default,true);
  FMemScope::FMemScope(&local_260,&LLMScope_Name295,true);
  FImageComparisonResult::FImageComparisonResult(__return_storage_ptr__);
  local_2b0 = local_2a8->Width;
  if (local_2a0->Width < local_2a8->Width) {
    local_2b0 = local_2a0->Width;
  }
  local_2ac = local_2a8->Height;
  if (local_2a0->Height < local_2a8->Height) {
    local_2ac = local_2a0->Height;
  }
  iVar1 = local_2a8->Width;
  if (local_2a8->Width < local_2a0->Width) {
    iVar1 = local_2a0->Width;
  }
  local_2c4 = local_2a8->Height;
  if (local_2a8->Height < local_2a0->Height) {
    local_2c4 = local_2a0->Height;
  }
  uVar20 = 0;
  local_298.Image.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.Image.ArrayNum = 0;
  local_298.Image.ArrayMax = 0;
  uVar14 = local_2c4 * iVar1 * 4;
  local_298.OutputComparisonFile.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_298.OutputComparisonFile.Data.ArrayNum = 0;
  local_298.OutputComparisonFile.Data.ArrayMax = 0;
  iVar22 = local_2c4 * iVar1 * 4;
  local_298.Width = iVar1;
  local_298.Height = local_2c4;
  if (iVar22 < 1) {
    if (iVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar14,&local_298.Image.AllocatorInstance,&local_298.Image.ArrayNum,
               &local_298.Image.ArrayMax);
  }
  local_2b8 = 0;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = (double)iVar1 * __real_3fb999999999999a;
  if (0.0 <= (double)iVar1 * __real_3fb999999999999a) {
    auVar24 = roundpd(auVar24,auVar24,2);
    dVar23 = auVar24._0_8_;
  }
  else {
    auVar24 = roundpd(auVar24,auVar24,1);
    dVar23 = auVar24._0_8_;
  }
  local_2bc = (int)dVar23;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = (double)local_2c4 * __real_3fb999999999999a;
  if (0.0 <= (double)local_2c4 * __real_3fb999999999999a) {
    auVar24 = roundpd(auVar25,auVar25,2);
    dVar23 = auVar24._0_8_;
  }
  else {
    auVar24 = roundpd(auVar25,auVar25,1);
    dVar23 = auVar24._0_8_;
  }
  local_2c0 = (int)dVar23;
  memset(local_1d8,0,400);
  local_248 = &local_2c4;
  local_240 = &local_2b0;
  local_1f8 = param_3;
  local_238 = &local_2ac;
  local_2d8.DataPtr = (void **)0x0;
  local_230 = &local_298;
  local_2d8._8_8_ = (ulonglong)(uint)local_2d8._12_4_ << 0x20;
  local_228 = &local_2b8;
  local_220 = &local_2c0;
  local_218 = &local_2bc;
  local_210 = local_1d8;
  local_208 = &local_2a0;
  local_200 = &local_2a8;
  local_270._0_8_ =
       UE::Core::Private::Function::
       TFunctionRefCaller<`FImageComparer::Compare'::__l2::<lambda_1>,void,int>::Call;
  local_270._8_8_ = &local_248;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",iVar1,1,(TFunctionRef<void___cdecl(int)> *)local_270,local_2c8,None
             ,&local_2d8);
  uVar21 = uVar20;
  if (1 < (param_4->Data).ArrayNum) {
    pFVar15 = ::FString::FString((FString *)&local_258,param_4);
    FImageDelta::Save(&local_298,pFVar15);
  }
  do {
    uVar14 = *(uint *)((longlong)local_1d8 + uVar20);
    if ((int)*(uint *)((longlong)local_1d8 + uVar20) < (int)(uint)uVar21) {
      uVar14 = (uint)uVar21;
    }
    uVar20 = uVar20 + 4;
    uVar21 = (ulonglong)uVar14;
  } while (uVar20 != 400);
  uVar2 = param_3->Green;
  uVar3 = param_3->Blue;
  uVar4 = param_3->Alpha;
  uVar5 = param_3->MinBrightness;
  uVar6 = param_3->MaxBrightness;
  bVar7 = param_3->IgnoreAntiAliasing;
  bVar8 = param_3->IgnoreColors;
  fVar9 = param_3->MaximumLocalError;
  fVar10 = param_3->MaximumGlobalError;
  (__return_storage_ptr__->Tolerance).Red = param_3->Red;
  (__return_storage_ptr__->Tolerance).Green = uVar2;
  (__return_storage_ptr__->Tolerance).Blue = uVar3;
  (__return_storage_ptr__->Tolerance).Alpha = uVar4;
  (__return_storage_ptr__->Tolerance).MinBrightness = uVar5;
  (__return_storage_ptr__->Tolerance).MaxBrightness = uVar6;
  (__return_storage_ptr__->Tolerance).IgnoreAntiAliasing = bVar7;
  (__return_storage_ptr__->Tolerance).IgnoreColors = bVar8;
  (__return_storage_ptr__->Tolerance).MaximumLocalError = fVar9;
  (__return_storage_ptr__->Tolerance).MaximumGlobalError = fVar10;
  iVar22 = local_298.OutputComparisonFile.Data.ArrayNum + -1;
  if (local_298.OutputComparisonFile.Data.ArrayNum == 0) {
    iVar22 = 0;
  }
  __return_storage_ptr__->MaxLocalDifference = (double)(int)uVar14 / (double)(local_2c0 * local_2bc)
  ;
  __return_storage_ptr__->GlobalDifference = (double)local_2b8 / (double)(local_2c4 * iVar1);
  ::FString::AssignRange
            (&__return_storage_ptr__->ComparisonFilePath,
             (wchar_t *)local_298.OutputComparisonFile.Data.AllocatorInstance.Data,iVar22);
  FVar16 = FDateTime::Now();
  pFVar13 = local_2a0;
  pFVar12 = local_2a8;
                    /* WARNING: Load size is inaccurate */
  (__return_storage_ptr__->CreationTime).Ticks = *FVar16.Ticks;
  if ((local_2a0->Width != local_2a8->Width) || (local_2a0->Height != local_2a8->Height)) {
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_258,L"ImageComparer",L"DifferentImageSizes",
                         L"Image comparison failed as sizes do not match, {WidthA}x{HeightA} vs {WidthB}x{HeightB}"
                        );
    pFVar18 = FTextFormat::FTextFormat(&local_1f0,pFVar17,Default);
    local_2d8.DataPtr = (void **)0x0;
    local_2d8._8_8_ = 0;
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,4,(ForAnyElementType *)&local_2d8,0,(int *)&local_2d8.field_0xc);
    pTVar19 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::AllocateMemoryForEmplace<wchar_t_const_(&)[7]>
                        ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                          *)&local_2d8,(wchar_t (*) [7])L"WidthA");
    ::FString::FString((FString *)pTVar19,L"WidthA");
    iVar1 = pFVar13->Width;
    *(undefined4 *)&pTVar19->field_0x10 = 0;
    *(undefined8 *)&pTVar19->field_0x20 = 0;
    *(undefined4 *)&pTVar19->field_0x28 = 0;
    *(longlong *)&pTVar19->field_0x18 = (longlong)iVar1;
    pTVar19 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>
                        ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                          *)&local_2d8,(wchar_t (*) [8])L"HeightA");
    ::FString::FString((FString *)pTVar19,L"HeightA");
    iVar1 = pFVar13->Height;
    *(undefined4 *)&pTVar19->field_0x10 = 0;
    *(undefined8 *)&pTVar19->field_0x20 = 0;
    *(undefined4 *)&pTVar19->field_0x28 = 0;
    *(longlong *)&pTVar19->field_0x18 = (longlong)iVar1;
    pTVar19 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::AllocateMemoryForEmplace<wchar_t_const_(&)[7]>
                        ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                          *)&local_2d8,(wchar_t (*) [7])L"WidthB");
    ::FString::FString((FString *)pTVar19,L"WidthB");
    iVar1 = pFVar12->Width;
    *(undefined4 *)&pTVar19->field_0x10 = 0;
    *(undefined8 *)&pTVar19->field_0x20 = 0;
    *(undefined4 *)&pTVar19->field_0x28 = 0;
    *(longlong *)&pTVar19->field_0x18 = (longlong)iVar1;
    pTVar19 = TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
              ::AllocateMemoryForEmplace<wchar_t_const_(&)[8]>
                        ((TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                          *)&local_2d8,(wchar_t (*) [8])L"HeightB");
    ::FString::FString((FString *)pTVar19,L"HeightB");
    iVar1 = pFVar12->Height;
    *(undefined4 *)&pTVar19->field_0x10 = 0;
    *(undefined8 *)&pTVar19->field_0x20 = 0;
    *(undefined4 *)&pTVar19->field_0x28 = 0;
    *(longlong *)&pTVar19->field_0x18 = (longlong)iVar1;
    FText::FormatNamedImpl
              ((FText *)local_270,pFVar18,
               (TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>
                *)&local_2d8);
    DestructItems<TTuple<FString,FFormatArgumentValue>,int>
              ((TTuple<FString,FFormatArgumentValue> *)local_2d8.DataPtr,local_2d8.ArrayNum);
    if ((TTuple<FString,FFormatArgumentValue> *)local_2d8.DataPtr !=
        (TTuple<FString,FFormatArgumentValue> *)0x0) {
      FMemory::Free(local_2d8.DataPtr);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((pFVar18->TextFormatData).SharedReferenceCount.ReferenceController);
    FText::operator=(&__return_storage_ptr__->ErrorMessage,(FText *)local_270);
    if ((ITextData *)local_270._0_8_ != (ITextData *)0x0) {
      (**(code **)((longlong)*(ITextData *)local_270._0_8_ + 0x10))();
    }
    if (local_258.TextData.Reference != (ITextData *)0x0) {
      (**(code **)((longlong)*local_258.TextData.Reference + 0x10))();
    }
    uVar2 = param_3->Red;
    uVar3 = param_3->Green;
    uVar4 = param_3->Blue;
    uVar5 = param_3->Alpha;
    uVar6 = param_3->MinBrightness;
    uVar11 = param_3->MaxBrightness;
    bVar7 = param_3->IgnoreAntiAliasing;
    bVar8 = param_3->IgnoreColors;
    fVar9 = param_3->MaximumLocalError;
    fVar10 = param_3->MaximumGlobalError;
    __return_storage_ptr__->MaxLocalDifference = 1.0;
    (__return_storage_ptr__->Tolerance).Red = uVar2;
    (__return_storage_ptr__->Tolerance).Green = uVar3;
    (__return_storage_ptr__->Tolerance).Blue = uVar4;
    (__return_storage_ptr__->Tolerance).Alpha = uVar5;
    (__return_storage_ptr__->Tolerance).MinBrightness = uVar6;
    (__return_storage_ptr__->Tolerance).MaxBrightness = uVar11;
    (__return_storage_ptr__->Tolerance).IgnoreAntiAliasing = bVar7;
    (__return_storage_ptr__->Tolerance).IgnoreColors = bVar8;
    (__return_storage_ptr__->Tolerance).MaximumLocalError = fVar9;
    (__return_storage_ptr__->Tolerance).MaximumGlobalError = fVar10;
    __return_storage_ptr__->GlobalDifference = 1.0;
  }
  if (local_298.OutputComparisonFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_298.OutputComparisonFile.Data.AllocatorInstance.Data);
  }
  if (local_298.Image.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Image.AllocatorInstance.Data);
  }
  FMemScope::~FMemScope(&local_260);
  FLLMScope::~FLLMScope(&local_2b4);
  return __return_storage_ptr__;
}

// CompareStructuralSimilarity @ 148c45080

double __thiscall
FImageComparer::CompareStructuralSimilarity
          (FImageComparer *this,FString *param_1,FString *param_2,
          EStructuralSimilarityComponent param_3,FString *param_4)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  double dVar3;
  TRefCountPtr<ITextData> TVar4;
  bool bVar5;
  FText *pFVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 local_res10 [8];
  FText local_198;
  FText local_188;
  FComparableImage local_178;
  FComparableImage local_158;
  FText local_138;
  FImageComparisonResult local_128;
  
  FImageComparisonResult::FImageComparisonResult(&local_128);
  if (&local_128.ApprovedFilePath != param_1) {
    iVar1 = (param_1->Data).ArrayNum;
    pFVar2 = (param_1->Data).AllocatorInstance.Data;
    local_128.ApprovedFilePath.Data.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_128.ApprovedFilePath.Data.ArrayMax == 0)) {
      local_128.ApprovedFilePath.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,local_128.ApprovedFilePath.Data.ArrayMax,
                 (ForAnyElementType *)&local_128.ApprovedFilePath,iVar1,
                 &local_128.ApprovedFilePath.Data.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_128.ApprovedFilePath.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
      }
    }
  }
  if (&local_128.IncomingFilePath != param_2) {
    iVar1 = (param_2->Data).ArrayNum;
    pFVar2 = (param_2->Data).AllocatorInstance.Data;
    local_128.IncomingFilePath.Data.ArrayNum = iVar1;
    if ((iVar1 == 0) && (local_128.IncomingFilePath.Data.ArrayMax == 0)) {
      local_128.IncomingFilePath.Data.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar1,local_128.IncomingFilePath.Data.ArrayMax,
                 (ForAnyElementType *)&local_128.IncomingFilePath,iVar1,
                 &local_128.IncomingFilePath.Data.ArrayMax);
      if (iVar1 != 0) {
        memcpy(local_128.IncomingFilePath.Data.AllocatorInstance.Data,pFVar2,(longlong)iVar1 * 2);
      }
    }
  }
  FText::FText(&local_188);
  FText::FText(&local_198);
  local_158.Width = 0;
  local_158.Height = 0;
  local_158.Bytes.ArrayMax = 0;
  local_178.Width = 0;
  local_178.Height = 0;
  local_178.Bytes.ArrayMax = 0;
  local_158.Bytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Bytes.ArrayNum = 0;
  local_178.Bytes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_178.Bytes.ArrayNum = 0;
  bVar5 = FComparableImage::LoadFile(&local_158,param_1,&local_188);
  TVar4.Reference = local_128.ErrorMessage.TextData.Reference;
  if (bVar5) {
    bVar5 = FComparableImage::LoadFile(&local_178,param_2,&local_198);
    TVar4.Reference = local_128.ErrorMessage.TextData.Reference;
    if (bVar5) {
      if ((local_158.Width == local_178.Width) && (local_158.Height == local_178.Height)) {
        dVar3 = CompareStructuralSimilarity(this,&local_158,&local_178,param_3,param_4);
        uVar7 = SUB84(dVar3,0);
        uVar8 = (undefined4)((ulonglong)dVar3 >> 0x20);
        goto LAB_148c452f1;
      }
      pFVar6 = FText::AsLocalizable_Advanced_LocText
                         (&local_138,L"ImageComparer",L"DifferentSizesUnsupported",
                          L"We can not compare images of different sizes at this time.");
      FText::operator=(&local_128.ErrorMessage,pFVar6);
      if (local_138.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_138.TextData.Reference + 0x10))();
      }
    }
    else {
      if (local_128.ErrorMessage.TextData.Reference != local_198.TextData.Reference) {
        local_128.ErrorMessage.TextData.Reference = local_198.TextData.Reference;
        if (local_198.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_198.TextData.Reference + 8))
                    (local_198.TextData.Reference,local_res10);
        }
        if (TVar4.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
        }
      }
      local_128.ErrorMessage.Flags = local_198.Flags;
    }
  }
  else {
    if (local_128.ErrorMessage.TextData.Reference != local_188.TextData.Reference) {
      local_128.ErrorMessage.TextData.Reference = local_188.TextData.Reference;
      if (local_188.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_188.TextData.Reference + 8))
                  (local_188.TextData.Reference,local_res10);
      }
      if (TVar4.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*TVar4.Reference + 0x10))(TVar4.Reference);
      }
    }
    local_128.ErrorMessage.Flags = local_188.Flags;
  }
  uVar7 = 0;
  uVar8 = 0;
LAB_148c452f1:
  if (local_178.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_178.Bytes.AllocatorInstance.Data);
  }
  if (local_158.Bytes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Bytes.AllocatorInstance.Data);
  }
  if (local_198.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_198.TextData.Reference + 0x10))();
  }
  if (local_188.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_188.TextData.Reference + 0x10))();
  }
  FImageComparisonResult::~FImageComparisonResult(&local_128);
  return (double)CONCAT44(uVar8,uVar7);
}

// CompareStructuralSimilarity @ 148c45380

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double __thiscall
FImageComparer::CompareStructuralSimilarity
          (FImageComparer *this,FComparableImage *param_1,FComparableImage *param_2,
          EStructuralSimilarityComponent param_3,FString *param_4)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement FVar2;
  FScriptContainerElement FVar3;
  FScriptContainerElement FVar4;
  FScriptContainerElement FVar5;
  FScriptContainerElement FVar6;
  FScriptContainerElement FVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  longlong lVar18;
  FString *pFVar19;
  longlong lVar20;
  longlong lVar21;
  int iVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  int iVar25;
  longlong lVar26;
  int iVar27;
  longlong lVar28;
  FScriptContainerElement FVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  ForAnyElementType local_1b0;
  undefined8 local_1a8;
  ForAnyElementType local_1a0;
  undefined8 local_198;
  int local_190;
  int local_18c;
  int local_188;
  int local_184;
  uint local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  FImageDelta local_158;
  int local_130;
  int local_12c;
  longlong local_128;
  longlong local_120;
  longlong local_118;
  longlong local_110;
  double local_108;
  longlong local_100;
  ulonglong local_f8;
  longlong local_f0;
  FString local_e8 [11];
  
  local_180 = param_1->Height;
  uVar23 = (ulonglong)(int)local_180;
  iVar16 = param_1->Width;
  dVar30 = 0.0;
  local_108 = 0.0;
  iVar22 = 0;
  local_184 = 0;
  uVar14 = local_180 * iVar16 * 4;
  local_158.Image.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.Image.ArrayNum = 0;
  local_158.Image.ArrayMax = 0;
  local_158.OutputComparisonFile.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_158.OutputComparisonFile.Data.ArrayNum = 0;
  local_158.OutputComparisonFile.Data.ArrayMax = 0;
  iVar25 = local_180 * iVar16 * 4;
  local_158.Width = iVar16;
  local_158.Height = local_180;
  local_12c = iVar16;
  if (iVar25 < 1) {
    if (iVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar14);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,uVar14,&local_158.Image.AllocatorInstance,&local_158.Image.ArrayNum,
               &local_158.Image.ArrayMax);
  }
  dVar12 = __real_3f66f9e501447116;
  dVar11 = __real_3f4b51cbdb6c02bf;
  uVar40 = SUB84(__real_3ff0000000000000,0);
  uVar41 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_188 = 0;
  dVar31 = 0.0;
  local_f8 = uVar23;
  if (0 < iVar16) {
    uVar36 = (undefined4)__real_3f328e41400572d0;
    uVar37 = (undefined4)((ulonglong)__real_3f328e41400572d0 >> 0x20);
    uVar38 = (undefined4)__real_3f70101010101010;
    uVar39 = (undefined4)((ulonglong)__real_3f70101010101010 >> 0x20);
    local_110 = 0;
    uVar24 = uVar23;
    iVar22 = 0;
    do {
      local_18c = 0;
      local_118 = 0;
      if (0 < (longlong)uVar24) {
        local_130 = iVar16 - local_188;
        if (8 < local_130) {
          local_130 = 8;
        }
        local_100 = (longlong)(local_188 + local_130);
        do {
          local_1a0.Data = (FScriptContainerElement *)0x0;
          local_190 = (int)uVar23 - local_18c;
          local_198 = 0;
          local_1b0.Data = (FScriptContainerElement *)0x0;
          dVar30 = 0.0;
          dVar31 = 0.0;
          local_1a8 = 0;
          if (8 < local_190) {
            local_190 = 8;
          }
          lVar18 = (longlong)(local_190 + local_18c);
          lVar28 = local_118;
          lVar21 = local_100;
          lVar26 = local_110;
          dVar10 = dVar30;
          dVar9 = dVar30;
          dVar32 = 0.0;
          dVar34 = 0.0;
          local_120 = local_110;
          local_f0 = lVar18;
          if (local_110 < local_100) {
            do {
              lVar20 = lVar28;
              local_128 = lVar28;
              local_120 = lVar26;
              if (lVar28 < lVar18) {
                do {
                  lVar21 = (param_1->Width * lVar28 + lVar26) * 4;
                  lVar18 = (longlong)param_1->Height * (longlong)param_1->Width * 4;
                  uVar14 = (uint)((ulonglong)lVar21 >> 0x20);
                  local_128 = lVar28;
                  if (param_3 == Luminance) {
                    if ((lVar18 <= lVar21) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Offset < ( (int64)Width * Height * 4 )",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Public\\ImageComparer.h"
                                            ,199,L""), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    lVar18 = lVar21 + 3;
                    uVar15 = 0;
                    if (lVar18 < (param_1->Bytes).ArrayNum) {
                      uVar15 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    FVar29 = (param_1->Bytes).AllocatorInstance.Data[lVar18];
                    lVar18 = lVar21 + 2;
                    uVar15 = 0;
                    if (lVar18 < (param_1->Bytes).ArrayNum) {
                      uVar15 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    FVar2 = (param_1->Bytes).AllocatorInstance.Data[lVar18];
                    lVar18 = lVar21 + 1;
                    uVar15 = 0;
                    if (lVar18 < (param_1->Bytes).ArrayNum) {
                      uVar15 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    FVar3 = (param_1->Bytes).AllocatorInstance.Data[lVar18];
                    uVar15 = 0;
                    if (lVar21 < (param_1->Bytes).ArrayNum) {
                      uVar15 = uVar14 >> 0x1f ^ 1;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    lVar18 = (param_2->Width * local_128 + lVar26) * 4;
                    local_178 = ((double)(byte)(param_1->Bytes).AllocatorInstance.Data[lVar21] *
                                 dVar11 + (double)(byte)FVar3 * dVar12 +
                                (double)(byte)FVar2 * (double)CONCAT44(uVar37,uVar36)) *
                                (double)(byte)FVar29;
                    if (((longlong)param_2->Height * (longlong)param_2->Width * 4 <= lVar18) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Offset < ( (int64)Width * Height * 4 )",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Public\\ImageComparer.h"
                                            ,199,L""), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    lVar28 = lVar18 + 3;
                    uVar14 = 0;
                    if (lVar28 < (param_2->Bytes).ArrayNum) {
                      uVar14 = (uint)((ulonglong)lVar28 >> 0x3f) ^ 1;
                    }
                    if ((uVar14 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    FVar29 = (param_2->Bytes).AllocatorInstance.Data[lVar28];
                    lVar28 = lVar18 + 2;
                    uVar14 = 0;
                    if (lVar28 < (param_2->Bytes).ArrayNum) {
                      uVar14 = (uint)((ulonglong)lVar28 >> 0x3f) ^ 1;
                    }
                    if ((uVar14 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    FVar2 = (param_2->Bytes).AllocatorInstance.Data[lVar28];
                    lVar28 = lVar18 + 1;
                    uVar14 = 0;
                    if (lVar28 < (param_2->Bytes).ArrayNum) {
                      uVar14 = (uint)((ulonglong)lVar28 >> 0x3f) ^ 1;
                    }
                    if ((uVar14 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    FVar3 = (param_2->Bytes).AllocatorInstance.Data[lVar28];
                    uVar14 = 0;
                    if (lVar18 < (param_2->Bytes).ArrayNum) {
                      uVar14 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
                    }
                    if ((uVar14 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    dVar32 = local_178;
                    dVar34 = ((double)(byte)(param_2->Bytes).AllocatorInstance.Data[lVar18] * dVar11
                              + (double)(byte)FVar3 * dVar12 +
                             (double)(byte)FVar2 * (double)CONCAT44(uVar37,uVar36)) *
                             (double)(byte)FVar29;
                    local_170 = dVar34;
                    if (((local_1a0.Data <= (FScriptContainerElement *)&local_178) &&
                        ((FScriptContainerElement *)&local_178 <
                         local_1a0.Data + (longlong)local_198._4_4_ * 8)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    if ((int)local_198 == local_198._4_4_) {
                      iVar16 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,&local_1a0,(int *)((longlong)&local_198 + 4));
                      local_198 = CONCAT44(local_198._4_4_,iVar16);
                    }
                    lVar18 = (longlong)(int)local_198;
                    local_198 = CONCAT44(local_198._4_4_,(int)local_198 + 1);
                    *(double *)(local_1a0.Data + lVar18 * 8) = local_178;
                    if (((local_1b0.Data <= (FScriptContainerElement *)&local_170) &&
                        ((FScriptContainerElement *)&local_170 <
                         local_1b0.Data + (longlong)local_1a8._4_4_ * 8)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    iVar16 = (int)local_1a8;
                    if ((int)local_1a8 == local_1a8._4_4_) {
                      iVar16 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,&local_1b0,(int *)((longlong)&local_1a8 + 4));
                    }
                    dVar35 = local_170;
                  }
                  else {
                    if ((lVar18 <= lVar21) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Offset < ( (int64)Width * Height * 4 )",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Public\\ImageComparer.h"
                                            ,199,L""), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    lVar18 = lVar21 + 3;
                    uVar15 = 0;
                    if (lVar18 < (param_1->Bytes).ArrayNum) {
                      uVar15 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    FVar29 = (param_1->Bytes).AllocatorInstance.Data[lVar18];
                    lVar18 = lVar21 + 2;
                    uVar15 = 0;
                    if (lVar18 < (param_1->Bytes).ArrayNum) {
                      uVar15 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    FVar2 = (param_1->Bytes).AllocatorInstance.Data[lVar18];
                    lVar18 = lVar21 + 1;
                    uVar15 = 0;
                    if (lVar18 < (param_1->Bytes).ArrayNum) {
                      uVar15 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    FVar3 = (param_1->Bytes).AllocatorInstance.Data[lVar18];
                    uVar15 = 0;
                    if (lVar21 < (param_1->Bytes).ArrayNum) {
                      uVar15 = uVar14 >> 0x1f ^ 1;
                    }
                    if ((uVar15 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    FVar4 = (param_1->Bytes).AllocatorInstance.Data[lVar21];
                    lVar18 = (param_2->Width * lVar28 + local_120) * 4;
                    if (((longlong)param_2->Height * (longlong)param_2->Width * 4 <= lVar18) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Offset < ( (int64)Width * Height * 4 )",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Public\\ImageComparer.h"
                                            ,199,L""), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    lVar28 = lVar18 + 3;
                    uVar14 = 0;
                    if (lVar28 < (param_2->Bytes).ArrayNum) {
                      uVar14 = (uint)((ulonglong)lVar28 >> 0x3f) ^ 1;
                    }
                    if ((uVar14 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    FVar5 = (param_2->Bytes).AllocatorInstance.Data[lVar28];
                    lVar28 = lVar18 + 2;
                    uVar14 = 0;
                    if (lVar28 < (param_2->Bytes).ArrayNum) {
                      uVar14 = (uint)((ulonglong)lVar28 >> 0x3f) ^ 1;
                    }
                    if ((uVar14 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    FVar6 = (param_2->Bytes).AllocatorInstance.Data[lVar28];
                    lVar28 = lVar18 + 1;
                    uVar14 = 0;
                    if (lVar28 < (param_2->Bytes).ArrayNum) {
                      uVar14 = (uint)((ulonglong)lVar28 >> 0x3f) ^ 1;
                    }
                    if ((uVar14 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    FVar7 = (param_2->Bytes).AllocatorInstance.Data[lVar28];
                    uVar14 = 0;
                    if (lVar18 < (param_2->Bytes).ArrayNum) {
                      uVar14 = (uint)((ulonglong)lVar18 >> 0x3f) ^ 1;
                    }
                    if ((uVar14 == 0) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    dVar32 = (double)((uint)(byte)FVar3 + (uint)(byte)FVar2 + (uint)(byte)FVar4) *
                             (double)(byte)FVar29 * (double)CONCAT44(uVar39,uVar38);
                    dVar34 = (double)((uint)(byte)FVar7 + (uint)(byte)FVar6 +
                                     (uint)(byte)(param_2->Bytes).AllocatorInstance.Data[lVar18]) *
                             (double)(byte)FVar5 * (double)CONCAT44(uVar39,uVar38);
                    local_168 = dVar32;
                    local_160 = dVar34;
                    if (((local_1a0.Data <= (FScriptContainerElement *)&local_168) &&
                        ((FScriptContainerElement *)&local_168 <
                         local_1a0.Data + (longlong)local_198._4_4_ * 8)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    if ((int)local_198 == local_198._4_4_) {
                      iVar16 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,&local_1a0,(int *)((longlong)&local_198 + 4));
                      local_198 = CONCAT44(local_198._4_4_,iVar16);
                    }
                    lVar18 = (longlong)(int)local_198;
                    local_198 = CONCAT44(local_198._4_4_,(int)local_198 + 1);
                    *(double *)(local_1a0.Data + lVar18 * 8) = local_168;
                    if (((local_1b0.Data <= (FScriptContainerElement *)&local_160) &&
                        ((FScriptContainerElement *)&local_160 <
                         local_1b0.Data + (longlong)local_1a8._4_4_ * 8)) &&
                       (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar13)) {
                      pcVar8 = (code *)swi(3);
                      dVar30 = (double)(*pcVar8)();
                      return dVar30;
                    }
                    iVar16 = (int)local_1a8;
                    if ((int)local_1a8 == local_1a8._4_4_) {
                      iVar16 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x808,&local_1b0,(int *)((longlong)&local_1a8 + 4));
                    }
                    lVar26 = local_120;
                    dVar35 = local_160;
                  }
                  dVar10 = dVar10 + dVar32;
                  dVar9 = dVar9 + dVar34;
                  lVar28 = local_128 + 1;
                  local_1a8 = CONCAT44(local_1a8._4_4_,iVar16 + 1);
                  *(double *)(local_1b0.Data + (longlong)iVar16 * 8) = dVar35;
                  lVar18 = local_f0;
                  lVar20 = local_118;
                  lVar21 = local_100;
                  local_128 = lVar28;
                } while (lVar28 < local_f0);
              }
              local_120 = lVar26 + 1;
              lVar28 = lVar20;
              lVar26 = local_120;
              dVar32 = dVar10;
              dVar34 = dVar9;
            } while (local_120 < lVar21);
          }
          iVar16 = local_190 * local_130;
          dVar9 = __real_3ff0000000000000 / (double)iVar16;
          dVar32 = dVar9 * dVar32;
          dVar34 = dVar9 * dVar34;
          if (((int)local_198 != iVar16) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ComponentA.Num() == WindowComponentCount",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Private\\ImageComparer.cpp"
                                  ,0x207,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            dVar30 = (double)(*pcVar8)();
            return dVar30;
          }
          if (((int)local_1a8 != iVar16) &&
             (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ComponentB.Num() == WindowComponentCount",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Private\\ImageComparer.cpp"
                                  ,0x208,L""), bVar13)) {
            pcVar8 = (code *)swi(3);
            dVar30 = (double)(*pcVar8)();
            return dVar30;
          }
          uVar14 = 0;
          dVar35 = dVar30;
          dVar10 = dVar30;
          if (0 < iVar16) {
            lVar18 = 0;
            dVar30 = 0.0;
            dVar10 = 0.0;
            do {
              uVar15 = 0;
              if ((int)uVar14 < (int)local_198) {
                uVar15 = ~uVar14 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                dVar30 = (double)(*pcVar8)();
                return dVar30;
              }
              dVar35 = *(double *)(local_1a0.Data + lVar18) - dVar32;
              uVar15 = 0;
              if ((int)uVar14 < (int)local_1a8) {
                uVar15 = ~uVar14 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                dVar30 = (double)(*pcVar8)();
                return dVar30;
              }
              uVar14 = uVar14 + 1;
              pFVar1 = local_1b0.Data + lVar18;
              lVar18 = lVar18 + 8;
              dVar33 = *(double *)pFVar1 - dVar34;
              dVar31 = dVar31 + dVar33 * dVar35;
              dVar30 = dVar30 + dVar35 * dVar35;
              dVar10 = dVar10 + dVar33 * dVar33;
              dVar35 = dVar31;
            } while ((int)uVar14 < iVar16);
          }
          iVar16 = local_188;
          uVar40 = SUB84(__real_3ff0000000000000,0);
          uVar41 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
          iVar25 = 0;
          dVar30 = (((dVar32 + dVar32) * dVar34 + ___real_401a028f5c28f5c4) /
                   (dVar32 * dVar32 + dVar34 * dVar34 + ___real_401a028f5c28f5c4)) *
                   (((dVar9 + dVar9) * dVar35 + __real_404d42e147ae147a) /
                   ((dVar10 + dVar30) * dVar9 + __real_404d42e147ae147a));
          dVar31 = dVar30;
          if (__real_3ff0000000000000 <= dVar30) {
            dVar31 = __real_3ff0000000000000;
          }
          if (dVar31 <= __real_0000000000000000) {
            dVar31 = __real_0000000000000000;
          }
          dVar31 = (__real_3ff0000000000000 - dVar31) * __real_3fe0000000000000;
          do {
            iVar27 = 0;
            iVar22 = local_18c;
            do {
              uVar14 = (local_158.Width * iVar22 + iVar25 + iVar16) * 4;
              if ((local_158.Height * local_158.Width * 4 <= (int)uVar14) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Offset < ( Width * Height * 4 )",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Developer\\ScreenShotComparisonTools\\Private\\ImageComparer.cpp"
                                      ,0x4f,L""), bVar13)) {
                pcVar8 = (code *)swi(3);
                dVar30 = (double)(*pcVar8)();
                return dVar30;
              }
              uVar15 = 0;
              if ((int)uVar14 < local_158.Image.ArrayNum) {
                uVar15 = ~uVar14 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                dVar30 = (double)(*pcVar8)();
                return dVar30;
              }
              uVar15 = uVar14 + 1;
              FVar29 = SUB41((int)dVar31,0);
              local_158.Image.AllocatorInstance.Data[(int)uVar14] = FVar29;
              uVar17 = 0;
              if ((int)uVar15 < local_158.Image.ArrayNum) {
                uVar17 = ~uVar15 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                dVar30 = (double)(*pcVar8)();
                return dVar30;
              }
              uVar17 = uVar14 + 2;
              local_158.Image.AllocatorInstance.Data[(int)uVar15] = FVar29;
              uVar15 = 0;
              if ((int)uVar17 < local_158.Image.ArrayNum) {
                uVar15 = ~uVar17 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                dVar30 = (double)(*pcVar8)();
                return dVar30;
              }
              uVar14 = uVar14 + 3;
              local_158.Image.AllocatorInstance.Data[(int)uVar17] = FVar29;
              uVar15 = 0;
              if ((int)uVar14 < local_158.Image.ArrayNum) {
                uVar15 = ~uVar14 >> 0x1f;
              }
              if ((uVar15 == 0) &&
                 (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar13)) {
                pcVar8 = (code *)swi(3);
                dVar30 = (double)(*pcVar8)();
                return dVar30;
              }
              iVar27 = iVar27 + 1;
              iVar22 = iVar22 + 1;
              local_158.Image.AllocatorInstance.Data[(int)uVar14] = (FScriptContainerElement)0xff;
            } while (iVar27 < 8);
            iVar25 = iVar25 + 1;
          } while (iVar25 < 8);
          dVar30 = local_108 + dVar30;
          iVar22 = local_184 + 1;
          local_184 = iVar22;
          local_108 = dVar30;
          if (local_1b0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1b0.Data);
          }
          if (local_1a0.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a0.Data);
          }
          local_18c = local_18c + 8;
          uVar36 = (undefined4)__real_3f328e41400572d0;
          uVar37 = (undefined4)((ulonglong)__real_3f328e41400572d0 >> 0x20);
          local_118 = local_118 + 8;
          uVar38 = (undefined4)__real_3f70101010101010;
          uVar39 = (undefined4)((ulonglong)__real_3f70101010101010 >> 0x20);
          uVar23 = (ulonglong)local_180;
          uVar24 = local_f8;
          iVar16 = local_12c;
        } while (local_118 < (longlong)local_f8);
      }
      local_188 = local_188 + 8;
      local_110 = local_110 + 8;
      dVar31 = dVar30;
    } while (local_110 < iVar16);
  }
  if (1 < (param_4->Data).ArrayNum) {
    pFVar19 = ::FString::FString(local_e8,param_4);
    FImageDelta::Save(&local_158,pFVar19);
  }
  dVar30 = dVar31 / (double)iVar22;
  if ((double)CONCAT44(uVar41,uVar40) <= dVar31 / (double)iVar22) {
    dVar30 = (double)CONCAT44(uVar41,uVar40);
  }
  if (dVar30 <= 0.0) {
    dVar30 = 0.0;
  }
  if (local_158.OutputComparisonFile.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(local_158.OutputComparisonFile.Data.AllocatorInstance.Data);
  }
  if (local_158.Image.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_158.Image.AllocatorInstance.Data);
  }
  return dVar30;
}

