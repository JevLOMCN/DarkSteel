// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 2

// ApplyPositionConstraints @ 143b92f10

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
Chaos::FJointSolver::ApplyPositionConstraints
          (double param_1,TArray<Chaos::FJointSolverJointState,TSizedDefaultAllocator<32>_> *param_2
          ,TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Chaos::FJointSolverConstraintRowState,TSizedDefaultAllocator<32>_> *param_4,
          int param_5,int param_6,int param_7,int param_8)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  int iVar8;
  TMatrix<double> *pTVar9;
  TVector<double,3> *pTVar10;
  longlong lVar11;
  uint uVar12;
  FScriptContainerElement *pFVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  PMatrix<double,3,3> *pPVar19;
  FScriptContainerElement *pFVar20;
  FScriptContainerElement *pFVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  longlong lVar24;
  uint uVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  double dVar30;
  undefined1 auVar32 [16];
  double dVar31;
  double dVar39;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar40;
  double dVar41;
  double dVar42;
  undefined1 auVar43 [16];
  double dVar45;
  undefined1 auVar44 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  double dVar50;
  double dVar51;
  undefined1 auVar52 [16];
  double dVar53;
  uint uVar55;
  undefined1 auVar54 [16];
  double dVar56;
  double dVar57;
  double dVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  undefined4 uVar62;
  uint uVar63;
  undefined4 uVar64;
  undefined4 uVar65;
  undefined1 auStack_4d8 [32];
  ulonglong local_4b8;
  longlong local_4b0;
  uint local_4a8;
  FScriptContainerElement *local_4a0;
  int local_498;
  FScriptContainerElement *local_490;
  PMatrix<double,3,3> *local_488;
  FScriptContainerElement *local_480;
  FScriptContainerElement *local_478;
  TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *local_470;
  FScriptContainerElement *local_468;
  FScriptContainerElement *local_460;
  FScriptContainerElement *local_458;
  longlong local_450;
  FScriptContainerElement *local_448;
  FScriptContainerElement *local_440;
  double local_438;
  double local_430;
  double local_428;
  double local_420;
  double local_418;
  double local_410;
  TVector<double,3> local_408;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  double local_3a8;
  double dStack_3a0;
  double local_398;
  double local_388;
  double dStack_380;
  double local_378;
  double local_348;
  double dStack_340;
  double local_338;
  double local_328;
  double dStack_320;
  double local_318;
  double local_308;
  double dStack_300;
  double local_2f8;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  double dStack_210;
  TVector<double,3> local_208;
  TMatrix<double> local_1e8;
  undefined1 local_168 [16];
  double local_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  undefined1 local_128 [16];
  double local_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double dStack_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStack_4d8;
  uVar17 = (ulonglong)param_7;
  uVar64 = SUB84(__real_3ff0000000000000,0);
  uVar65 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  local_498 = 0;
  pFVar18 = (FScriptContainerElement *)uVar17;
  uVar55 = (uint)__xmm_80000000000000008000000000000000;
  uVar16 = __xmm_80000000000000008000000000000000._4_4_;
  dVar58 = ___xmm_3ff00000000000000000000000000000;
  dVar56 = _UNK_15061cbc8;
  pFVar20 = (FScriptContainerElement *)uVar17;
  local_470 = param_3;
  local_458 = (FScriptContainerElement *)param_1;
  if (param_7 < param_8) {
    do {
      local_490 = pFVar20;
      auVar54 = ___xmm_7fffffffffffffff7fffffffffffffff;
      uVar15 = (uint)uVar17;
      uVar14 = ~uVar15 >> 0x1f;
      uVar25 = 0;
      if ((int)uVar15 < param_3->ArrayNum) {
        uVar25 = uVar14;
      }
      local_4a8 = uVar14;
      if (uVar25 == 0) {
        local_4b8 = (ulonglong)(int)uVar15;
        local_4b0 = (longlong)param_3->ArrayNum;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          iVar8 = (*pcVar2)();
          return iVar8;
        }
      }
      local_480 = (FScriptContainerElement *)((longlong)pFVar18 * 0x30);
      uVar25 = *(uint *)(local_480 + 4 + (longlong)(param_3->AllocatorInstance).Data);
      uVar22 = (ulonglong)(int)uVar25;
      uVar40 = 0;
      if ((int)uVar15 < param_3->ArrayNum) {
        uVar40 = uVar14;
      }
      if (uVar40 == 0) {
        local_4b8 = (ulonglong)(int)uVar15;
        local_4b0 = (longlong)param_3->ArrayNum;
        bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar7) {
          pcVar2 = (code *)swi(3);
          iVar8 = (*pcVar2)();
          return iVar8;
        }
      }
      if (*(int *)(local_480 + 0xc + (longlong)(param_3->AllocatorInstance).Data) == 3) {
        uVar12 = uVar15 + 2;
        local_490 = (FScriptContainerElement *)CONCAT44(local_490._4_4_,~uVar12 >> 0x1f);
        uVar40 = 0;
        if ((int)uVar12 < param_4->ArrayNum) {
          uVar40 = ~uVar12 >> 0x1f;
        }
        if (uVar40 == 0) {
          local_4b8 = (ulonglong)(int)uVar12;
          local_4b0 = (longlong)param_4->ArrayNum;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
        }
        uVar12 = uVar15 + 1;
        local_460 = (FScriptContainerElement *)(((longlong)pFVar18 + 2U) * 0x88);
        dVar47 = *(double *)(local_460 + (longlong)((param_4->AllocatorInstance).Data + 0x78));
        local_478 = (FScriptContainerElement *)CONCAT44(local_478._4_4_,~uVar12 >> 0x1f);
        uVar40 = 0;
        if ((int)uVar12 < param_4->ArrayNum) {
          uVar40 = ~uVar12 >> 0x1f;
        }
        if (uVar40 == 0) {
          local_4b8 = (ulonglong)(int)uVar12;
          local_4b0 = (longlong)param_4->ArrayNum;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
        }
        local_488 = (PMatrix<double,3,3> *)(((longlong)pFVar18 + 1U) * 0x88);
        dVar57 = *(double *)
                  ((FScriptContainerElement *)((longlong)local_488 + 0x78) +
                  (longlong)(param_4->AllocatorInstance).Data);
        uVar40 = 0;
        if ((int)uVar15 < param_4->ArrayNum) {
          uVar40 = uVar14;
        }
        if (uVar40 == 0) {
          local_4b8 = (ulonglong)(int)uVar15;
          local_4b0 = (longlong)param_4->ArrayNum;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
        }
        local_450 = (longlong)pFVar18 * 0x88;
        auVar52._0_8_ = dVar57 * dVar57;
        auVar52._8_8_ = 0;
        dVar57 = *(double *)((param_4->AllocatorInstance).Data + local_450 + 0x78);
        local_4a8 = ~uVar25 >> 0x1f;
        uVar40 = 0;
        if ((int)uVar25 < param_2->ArrayNum) {
          uVar40 = local_4a8;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = dVar57 * dVar57 + auVar52._0_8_ + dVar47 * dVar47;
        auVar54 = sqrtpd(auVar52,auVar3);
        if ((uVar40 == 0) &&
           (local_4b8 = uVar22, local_4b0 = (longlong)param_2->ArrayNum,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar2 = (code *)swi(3);
          iVar8 = (*pcVar2)();
          return iVar8;
        }
        lVar24 = uVar22 * 0x3f0;
        pFVar20 = (param_2->AllocatorInstance).Data + lVar24 + 0x3e0;
        if (*(double *)pFVar20 <= auVar54._0_8_ && auVar54._0_8_ != *(double *)pFVar20) {
          iVar8 = 0;
          if ((int)(uVar15 + 2) < param_4->ArrayNum) {
            iVar8 = (int)local_490;
          }
          if (iVar8 == 0) {
            local_4b8 = (ulonglong)(int)(uVar15 + 2);
            local_4b0 = (longlong)param_4->ArrayNum;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar2 = (code *)swi(3);
              iVar8 = (*pcVar2)();
              return iVar8;
            }
          }
          local_490 = (param_4->AllocatorInstance).Data;
          iVar8 = 0;
          if ((int)(uVar15 + 1) < param_4->ArrayNum) {
            iVar8 = (int)local_478;
          }
          if (iVar8 == 0) {
            local_4b8 = (ulonglong)(int)(uVar15 + 1);
            local_4b0 = (longlong)param_4->ArrayNum;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar2 = (code *)swi(3);
              iVar8 = (*pcVar2)();
              return iVar8;
            }
          }
          local_468 = (param_4->AllocatorInstance).Data;
          uVar40 = 0;
          if ((int)uVar15 < param_4->ArrayNum) {
            uVar40 = uVar14;
          }
          if (uVar40 == 0) {
            local_4b8 = (ulonglong)(int)uVar15;
            local_4b0 = (longlong)param_4->ArrayNum;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar2 = (code *)swi(3);
              iVar8 = (*pcVar2)();
              return iVar8;
            }
          }
          local_478 = (param_4->AllocatorInstance).Data;
          uVar40 = 0;
          if ((int)uVar15 < local_470->ArrayNum) {
            uVar40 = uVar14;
          }
          if ((uVar40 == 0) &&
             (local_4b8 = (ulonglong)pFVar18, local_4b0 = (longlong)local_470->ArrayNum,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
          local_448 = (local_470->AllocatorInstance).Data;
          uVar40 = 0;
          if ((int)uVar25 < param_2->ArrayNum) {
            uVar40 = local_4a8;
          }
          if ((uVar40 == 0) &&
             (local_4b8 = uVar22, local_4b0 = (longlong)param_2->ArrayNum,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
          local_4a0 = (param_2->AllocatorInstance).Data;
          local_148 = 0.0;
          pFVar20 = local_4a0 + lVar24 + 0xf0;
          dVar47 = *(double *)(local_478 + local_450 + 0x78);
          pPVar19 = (PMatrix<double,3,3> *)(local_4a0 + lVar24 + 0x1e0);
          local_168 = ZEXT816(0);
          dStack_140 = 0.0;
          local_128 = ZEXT816(0);
          dVar57 = *(double *)
                    ((FScriptContainerElement *)((longlong)local_488 + 0x78) + (longlong)local_468);
          local_158 = 0.0;
          local_138 = 0.0;
          local_118 = 0.0;
          dVar31 = *(double *)(local_460 + (longlong)(local_490 + 0x78));
          local_490 = local_4a0 + lVar24 + 0x100;
          local_150 = 0.0;
          local_130 = 0.0;
          local_468 = local_4a0 + lVar24 + 0x170;
          local_110 = 0.0;
          local_108 = 0.0;
          dStack_100 = 0.0;
          local_488 = pPVar19;
          local_460 = pFVar20;
          local_f8 = dVar58;
          dStack_f0 = dVar56;
          if (0.0 < *(double *)pFVar20) {
            local_438 = *(double *)local_490 - *(double *)local_468;
            local_430 = *(double *)(local_490 + 8) - *(double *)(local_468 + 8);
            local_428 = *(double *)(local_490 + 0x10) - *(double *)(local_468 + 0x10);
            Utilities::ComputeJointFactorMatrix<double>
                      ((PMatrix<double,3,3> *)&local_3c8,(TVector<double,3> *)&local_438,pPVar19,
                       (double *)pFVar20);
            dVar58 = (double)local_168._8_8_ + dStack_3c0;
            local_148 = local_148 + local_3a8;
            dStack_140 = dStack_140 + dStack_3a0;
            local_168._8_4_ = SUB84(dVar58,0);
            local_168._0_8_ = (double)local_168._0_8_ + local_3c8;
            local_168._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
            local_158 = local_158 + local_3b8;
            local_138 = local_138 + local_398;
            dVar58 = (double)local_128._8_8_ + dStack_380;
            local_128._8_4_ = SUB84(dVar58,0);
            local_128._0_8_ = (double)local_128._0_8_ + local_388;
            local_128._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
            local_118 = local_118 + local_378;
          }
          local_440 = local_4a0 + lVar24 + 0xf8;
          if (0.0 < *(double *)local_440) {
            local_420 = *(double *)(local_4a0 + lVar24 + 0x118) -
                        *(double *)(local_4a0 + lVar24 + 0x188);
            local_418 = *(double *)(local_4a0 + lVar24 + 0x120) -
                        *(double *)(local_4a0 + lVar24 + 400);
            local_410 = *(double *)(local_4a0 + lVar24 + 0x128) -
                        *(double *)(local_4a0 + lVar24 + 0x198);
            Utilities::ComputeJointFactorMatrix<double>
                      ((PMatrix<double,3,3> *)&local_348,(TVector<double,3> *)&local_420,
                       (PMatrix<double,3,3> *)(local_4a0 + lVar24 + 0x260),(double *)local_440);
            dVar58 = (double)local_168._8_8_ + dStack_340;
            local_148 = local_148 + local_328;
            dStack_140 = dStack_140 + dStack_320;
            local_168._8_4_ = SUB84(dVar58,0);
            local_168._0_8_ = (double)local_168._0_8_ + local_348;
            local_168._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
            local_158 = local_158 + local_338;
            local_138 = local_138 + local_318;
            dVar58 = (double)local_128._8_8_ + dStack_300;
            local_128._8_4_ = SUB84(dVar58,0);
            local_128._0_8_ = (double)local_128._0_8_ + local_308;
            local_128._12_4_ = (int)((ulonglong)dVar58 >> 0x20);
            local_118 = local_118 + local_2f8;
          }
          pTVar9 = UE::Math::TMatrix<double>::Inverse((TMatrix<double> *)local_168,&local_1e8);
          local_288 = pTVar9->M[0][0];
          dStack_280 = pTVar9->M[0][1];
          local_268 = pTVar9->M[1][0];
          dStack_260 = pTVar9->M[1][1];
          local_248 = pTVar9->M[2][0];
          dStack_240 = pTVar9->M[2][1];
          local_228 = pTVar9->M[3][0];
          dStack_220 = pTVar9->M[3][1];
          local_218 = pTVar9->M[3][2];
          dStack_210 = pTVar9->M[3][3];
          local_278 = pTVar9->M[0][2];
          dStack_270 = pTVar9->M[0][3];
          local_258 = pTVar9->M[1][2];
          dStack_250 = pTVar9->M[1][3];
          local_238 = pTVar9->M[2][2];
          dStack_230 = pTVar9->M[2][3];
          dVar58 = *(double *)(local_480 + 0x10 + (longlong)local_448);
          dVar56 = *(double *)local_460;
          dVar46 = (dVar47 * local_288 + dVar57 * local_268 + dVar31 * local_248) * dVar58;
          *(double *)(local_478 + local_450) = dVar46 * dVar56;
          dVar39 = (dVar47 * dStack_280 + dVar57 * dStack_260 + dVar31 * dStack_240) * dVar58;
          dVar58 = (dVar47 * local_278 + dVar57 * local_258 + dVar31 * local_238) * dVar58;
          *(double *)(local_478 + local_450 + 8) = dVar39 * dVar56;
          *(double *)(local_478 + local_450 + 0x10) = dVar58 * dVar56;
          uVar40 = SUB84(*(double *)local_440,0) ^ uVar55;
          uVar12 = (uint)((ulonglong)*(double *)local_440 >> 0x20) ^ uVar16;
          *(double *)(local_478 + local_450 + 0x18) = dVar46 * (double)CONCAT44(uVar12,uVar40);
          *(double *)(local_478 + local_450 + 0x20) = dVar39 * (double)CONCAT44(uVar12,uVar40);
          *(double *)(local_478 + local_450 + 0x28) = dVar58 * (double)CONCAT44(uVar12,uVar40);
          uVar61 = SUB84(dVar58,0) ^ uVar55;
          uVar63 = (uint)((ulonglong)dVar58 >> 0x20) ^ uVar16;
          dVar53 = dVar46 * (*(double *)(local_490 + 0x10) - *(double *)(local_468 + 0x10)) -
                   dVar58 * (*(double *)local_490 - *(double *)local_468);
          uVar40 = SUB84(dVar39,0) ^ uVar55;
          uVar12 = (uint)((ulonglong)dVar39 >> 0x20) ^ uVar16;
          dVar50 = dVar58 * (*(double *)(local_490 + 8) - *(double *)(local_468 + 8)) -
                   dVar39 * (*(double *)(local_490 + 0x10) - *(double *)(local_468 + 0x10));
          uVar59 = SUB84(dVar46,0) ^ uVar55;
          uVar60 = (uint)((ulonglong)dVar46 >> 0x20) ^ uVar16;
          dVar58 = *(double *)&local_488->field_0x8;
          dVar46 = dVar39 * (*(double *)local_490 - *(double *)local_468) -
                   dVar46 * (*(double *)(local_490 + 8) - *(double *)(local_468 + 8));
          dVar56 = *(double *)&local_488->field_0x10;
          dVar47 = *(double *)&local_488->field_0x28;
          dVar57 = *(double *)&local_488->field_0x48;
          dVar31 = *(double *)&local_488->field_0x30;
          dVar39 = *(double *)&local_488->field_0x50;
          *(double *)(local_478 + local_450 + 0x30) =
               dVar53 * *(double *)&local_488->field_0x20 + dVar50 * *(double *)local_488 +
               dVar46 * *(double *)&local_488->field_0x40;
          *(double *)(local_478 + local_450 + 0x38) =
               dVar50 * dVar58 + dVar53 * dVar47 + dVar46 * dVar57;
          *(double *)(local_478 + local_450 + 0x40) =
               dVar50 * dVar56 + dVar53 * dVar31 + dVar46 * dVar39;
          dVar46 = (*(double *)(local_4a0 + lVar24 + 0x120) - *(double *)(local_4a0 + lVar24 + 400))
                   * (double)CONCAT44(uVar63,uVar61) -
                   (*(double *)(local_4a0 + lVar24 + 0x128) -
                   *(double *)(local_4a0 + lVar24 + 0x198)) * (double)CONCAT44(uVar12,uVar40);
          dVar53 = (*(double *)(local_4a0 + lVar24 + 0x128) -
                   *(double *)(local_4a0 + lVar24 + 0x198)) * (double)CONCAT44(uVar60,uVar59) -
                   (*(double *)(local_4a0 + lVar24 + 0x118) -
                   *(double *)(local_4a0 + lVar24 + 0x188)) * (double)CONCAT44(uVar63,uVar61);
          dVar58 = *(double *)(local_4a0 + lVar24 + 0x268);
          dVar50 = (*(double *)(local_4a0 + lVar24 + 0x118) -
                   *(double *)(local_4a0 + lVar24 + 0x188)) * (double)CONCAT44(uVar12,uVar40) -
                   (*(double *)(local_4a0 + lVar24 + 0x120) - *(double *)(local_4a0 + lVar24 + 400))
                   * (double)CONCAT44(uVar60,uVar59);
          dVar56 = *(double *)(local_4a0 + lVar24 + 0x288);
          dVar47 = *(double *)(local_4a0 + lVar24 + 0x290);
          dVar57 = *(double *)(local_4a0 + lVar24 + 0x2a8);
          dVar31 = *(double *)(local_4a0 + lVar24 + 0x270);
          dVar39 = *(double *)(local_4a0 + lVar24 + 0x2b0);
          *(double *)(local_478 + local_450 + 0x48) =
               dVar53 * *(double *)(local_4a0 + lVar24 + 0x280) +
               dVar46 * *(double *)(local_4a0 + lVar24 + 0x260) +
               dVar50 * *(double *)(local_4a0 + lVar24 + 0x2a0);
          *(double *)(local_478 + local_450 + 0x50) =
               dVar53 * dVar56 + dVar46 * dVar58 + dVar50 * dVar57;
          *(double *)(local_478 + local_450 + 0x58) =
               dVar53 * dVar47 + dVar46 * dVar31 + dVar50 * dVar39;
          uVar40 = 0;
          if ((int)uVar15 < param_4->ArrayNum) {
            uVar40 = uVar14;
          }
          if ((uVar40 == 0) &&
             (local_4b8 = (ulonglong)pFVar18, local_4b0 = (longlong)param_4->ArrayNum,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
          local_4a0 = (param_4->AllocatorInstance).Data + (longlong)pFVar18 * 0x88;
          uVar40 = 0;
          if ((int)uVar25 < param_2->ArrayNum) {
            uVar40 = local_4a8;
          }
          if ((uVar40 == 0) &&
             (local_4b8 = uVar22, local_4b0 = (longlong)param_2->ArrayNum,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
          pFVar20 = (param_2->AllocatorInstance).Data;
          lVar24 = uVar22 * 0x3f0;
          *(double *)(pFVar20 + lVar24 + 0x380) =
               *(double *)(pFVar20 + lVar24 + 0x380) + *(double *)local_4a0;
          *(double *)(pFVar20 + lVar24 + 0x388) =
               *(double *)(local_4a0 + 8) + *(double *)(pFVar20 + lVar24 + 0x388);
          *(double *)(pFVar20 + lVar24 + 0x390) =
               *(double *)(local_4a0 + 0x10) + *(double *)(pFVar20 + lVar24 + 0x390);
          uVar40 = 0;
          if ((int)uVar15 < param_4->ArrayNum) {
            uVar40 = uVar14;
          }
          if ((uVar40 == 0) &&
             (local_4b8 = (ulonglong)pFVar18, local_4b0 = (longlong)param_4->ArrayNum,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
          local_488 = (PMatrix<double,3,3> *)(param_4->AllocatorInstance).Data;
          local_4a0 = (FScriptContainerElement *)((longlong)pFVar18 * 0x88);
          uVar40 = 0;
          if ((int)uVar25 < param_2->ArrayNum) {
            uVar40 = local_4a8;
          }
          if ((uVar40 == 0) &&
             (local_4b8 = uVar22, local_4b0 = (longlong)param_2->ArrayNum,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
          pFVar20 = (param_2->AllocatorInstance).Data;
          lVar24 = uVar22 * 0x3f0;
          *(double *)(pFVar20 + lVar24 + 0x398) =
               *(double *)((longlong)local_488 + (longlong)local_4a0 + 0x18) +
               *(double *)(pFVar20 + lVar24 + 0x398);
          *(double *)(pFVar20 + lVar24 + 0x3a0) =
               *(double *)((longlong)local_488 + (longlong)local_4a0 + 0x20) +
               *(double *)(pFVar20 + lVar24 + 0x3a0);
          *(double *)(pFVar20 + lVar24 + 0x3a8) =
               *(double *)((longlong)local_488 + (longlong)local_4a0 + 0x28) +
               *(double *)(pFVar20 + lVar24 + 0x3a8);
          uVar40 = 0;
          if ((int)uVar15 < param_4->ArrayNum) {
            uVar40 = uVar14;
          }
          if ((uVar40 == 0) &&
             (local_4b8 = (ulonglong)pFVar18, local_4b0 = (longlong)param_4->ArrayNum,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
          local_488 = (PMatrix<double,3,3> *)(param_4->AllocatorInstance).Data;
          local_4a0 = (FScriptContainerElement *)((longlong)pFVar18 * 0x88);
          uVar40 = 0;
          if ((int)uVar25 < param_2->ArrayNum) {
            uVar40 = local_4a8;
          }
          if ((uVar40 == 0) &&
             (local_4b8 = uVar22, local_4b0 = (longlong)param_2->ArrayNum,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
          pFVar20 = (param_2->AllocatorInstance).Data;
          lVar24 = uVar22 * 0x3f0;
          *(double *)(pFVar20 + lVar24 + 0x3b0) =
               *(double *)((longlong)local_488 + (longlong)local_4a0 + 0x30) +
               *(double *)(pFVar20 + lVar24 + 0x3b0);
          *(double *)(pFVar20 + lVar24 + 0x3b8) =
               *(double *)((longlong)local_488 + (longlong)local_4a0 + 0x38) +
               *(double *)(pFVar20 + lVar24 + 0x3b8);
          *(double *)(pFVar20 + lVar24 + 0x3c0) =
               *(double *)((longlong)local_488 + (longlong)local_4a0 + 0x40) +
               *(double *)(pFVar20 + lVar24 + 0x3c0);
          uVar40 = 0;
          if ((int)uVar15 < param_4->ArrayNum) {
            uVar40 = uVar14;
          }
          if ((uVar40 == 0) &&
             (local_4b8 = (ulonglong)pFVar18, local_4b0 = (longlong)param_4->ArrayNum,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
          local_4a0 = (param_4->AllocatorInstance).Data;
          lVar24 = (longlong)pFVar18 * 0x88;
          uVar14 = 0;
          if ((int)uVar25 < param_2->ArrayNum) {
            uVar14 = local_4a8;
          }
          if ((uVar14 == 0) &&
             (local_4b8 = uVar22, local_4b0 = (longlong)param_2->ArrayNum,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
          dVar56 = _UNK_15061cbc8;
          dVar58 = ___xmm_3ff00000000000000000000000000000;
          pFVar20 = (param_2->AllocatorInstance).Data;
          lVar11 = uVar22 * 0x3f0;
          local_498 = local_498 + 3;
          *(double *)(pFVar20 + lVar11 + 0x3c8) =
               *(double *)(local_4a0 + lVar24 + 0x48) + *(double *)(pFVar20 + lVar11 + 0x3c8);
          *(double *)(pFVar20 + lVar11 + 0x3d0) =
               *(double *)(local_4a0 + lVar24 + 0x50) + *(double *)(pFVar20 + lVar11 + 0x3d0);
          *(double *)(pFVar20 + lVar11 + 0x3d8) =
               *(double *)(local_4a0 + lVar24 + 0x58) + *(double *)(pFVar20 + lVar11 + 0x3d8);
        }
        uVar15 = uVar15 + 3;
        pFVar18 = (FScriptContainerElement *)((longlong)pFVar18 + 3);
LAB_143b94b7d:
        uVar17 = (ulonglong)uVar15;
        param_3 = local_470;
        local_490 = pFVar18;
      }
      else {
        uVar40 = 0;
        if ((int)uVar15 < param_3->ArrayNum) {
          uVar40 = uVar14;
        }
        if (uVar40 == 0) {
          local_4b8 = (ulonglong)(int)uVar15;
          local_4b0 = (longlong)param_3->ArrayNum;
          bVar7 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar7) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
        }
        if (*(int *)(local_480 + 0xc + (longlong)(param_3->AllocatorInstance).Data) == 1) {
          uVar40 = 0;
          if ((int)uVar15 < param_4->ArrayNum) {
            uVar40 = uVar14;
          }
          if (uVar40 == 0) {
            local_4b8 = (ulonglong)(int)uVar15;
            local_4b0 = (longlong)param_4->ArrayNum;
            bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar7) {
              pcVar2 = (code *)swi(3);
              iVar8 = (*pcVar2)();
              return iVar8;
            }
          }
          lVar24 = (longlong)pFVar18 * 0x88;
          local_478 = (FScriptContainerElement *)CONCAT44(local_478._4_4_,~uVar25 >> 0x1f);
          uVar1 = *(undefined8 *)((param_4->AllocatorInstance).Data + lVar24 + 0x78);
          dVar47 = (double)CONCAT44((uint)((ulonglong)uVar1 >> 0x20) & auVar54._4_4_,
                                    (uint)uVar1 & auVar54._0_4_);
          uVar14 = 0;
          if ((int)uVar25 < param_2->ArrayNum) {
            uVar14 = ~uVar25 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (local_4b8 = uVar22, local_4b0 = (longlong)param_2->ArrayNum,
             bVar7 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar7)) {
            pcVar2 = (code *)swi(3);
            iVar8 = (*pcVar2)();
            return iVar8;
          }
          lVar11 = uVar22 * 0x3f0;
          pFVar20 = (param_2->AllocatorInstance).Data + lVar11 + 0x3e0;
          if (*(double *)pFVar20 <= dVar47 && dVar47 != *(double *)pFVar20) {
            uVar55 = 0;
            if ((int)uVar15 < param_4->ArrayNum) {
              uVar55 = local_4a8;
            }
            if (uVar55 == 0) {
              local_4b8 = (ulonglong)(int)uVar15;
              local_4b0 = (longlong)param_4->ArrayNum;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar2 = (code *)swi(3);
                iVar8 = (*pcVar2)();
                return iVar8;
              }
            }
            local_480 = (param_4->AllocatorInstance).Data;
            uVar55 = 0;
            if ((int)uVar15 < local_470->ArrayNum) {
              uVar55 = local_4a8;
            }
            if ((uVar55 == 0) &&
               (local_4b8 = (ulonglong)pFVar18, local_4b0 = (longlong)local_470->ArrayNum,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              iVar8 = (*pcVar2)();
              return iVar8;
            }
            local_4a0 = (local_470->AllocatorInstance).Data + (longlong)pFVar18 * 0x30;
            iVar8 = 0;
            if ((int)uVar25 < param_2->ArrayNum) {
              iVar8 = (int)local_478;
            }
            if ((iVar8 == 0) &&
               (local_4b8 = uVar22, local_4b0 = (longlong)param_2->ArrayNum,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              iVar8 = (*pcVar2)();
              return iVar8;
            }
            pFVar18 = (param_2->AllocatorInstance).Data;
            dVar47 = 0.0;
            dVar31 = 0.0;
            dVar39 = 0.0;
            dVar56 = 0.0;
            dVar50 = 0.0;
            dVar46 = 0.0;
            dVar58 = *(double *)(pFVar18 + lVar11 + 0xf0);
            pFVar13 = pFVar18 + lVar11 + 0x100;
            pFVar21 = pFVar18 + lVar11 + 0x170;
            pFVar20 = pFVar18 + lVar11 + 0x1e0;
            dVar57 = 0.0;
            if (0.0 < dVar58) {
              dVar39 = *(double *)(local_480 + lVar24 + 0x60) *
                       (*(double *)(pFVar13 + 0x10) - *(double *)(pFVar21 + 0x10)) -
                       *(double *)(local_480 + lVar24 + 0x70) *
                       (*(double *)pFVar13 - *(double *)pFVar21);
              dVar56 = *(double *)(local_480 + lVar24 + 0x68) *
                       (*(double *)pFVar13 - *(double *)pFVar21) -
                       *(double *)(local_480 + lVar24 + 0x60) *
                       (*(double *)(pFVar13 + 8) - *(double *)(pFVar21 + 8));
              dVar31 = *(double *)(local_480 + lVar24 + 0x70) *
                       (*(double *)(pFVar13 + 8) - *(double *)(pFVar21 + 8)) -
                       *(double *)(local_480 + lVar24 + 0x68) *
                       (*(double *)(pFVar13 + 0x10) - *(double *)(pFVar21 + 0x10));
              dVar47 = (dVar39 * *(double *)(pFVar20 + 0x28) + dVar31 * *(double *)(pFVar20 + 8) +
                       dVar56 * *(double *)(pFVar20 + 0x48)) * dVar39 +
                       (dVar39 * *(double *)(pFVar20 + 0x20) + dVar31 * *(double *)pFVar20 +
                       dVar56 * *(double *)(pFVar20 + 0x40)) * dVar31 +
                       (dVar39 * *(double *)(pFVar20 + 0x30) + dVar31 * *(double *)(pFVar20 + 0x10)
                       + dVar56 * *(double *)(pFVar20 + 0x50)) * dVar56 + dVar58;
            }
            dVar53 = *(double *)(pFVar18 + lVar11 + 0xf8);
            if (0.0 < dVar53) {
              dVar46 = *(double *)(local_480 + lVar24 + 0x60) *
                       (*(double *)(pFVar18 + lVar11 + 0x128) -
                       *(double *)(pFVar18 + lVar11 + 0x198)) -
                       *(double *)(local_480 + lVar24 + 0x70) *
                       (*(double *)(pFVar18 + lVar11 + 0x118) -
                       *(double *)(pFVar18 + lVar11 + 0x188));
              dVar57 = *(double *)(local_480 + lVar24 + 0x68) *
                       (*(double *)(pFVar18 + lVar11 + 0x118) -
                       *(double *)(pFVar18 + lVar11 + 0x188)) -
                       *(double *)(local_480 + lVar24 + 0x60) *
                       (*(double *)(pFVar18 + lVar11 + 0x120) - *(double *)(pFVar18 + lVar11 + 400))
              ;
              dVar50 = *(double *)(local_480 + lVar24 + 0x70) *
                       (*(double *)(pFVar18 + lVar11 + 0x120) - *(double *)(pFVar18 + lVar11 + 400))
                       - *(double *)(local_480 + lVar24 + 0x68) *
                         (*(double *)(pFVar18 + lVar11 + 0x128) -
                         *(double *)(pFVar18 + lVar11 + 0x198));
              dVar47 = (dVar46 * *(double *)(pFVar18 + lVar11 + 0x288) +
                        dVar50 * *(double *)(pFVar18 + lVar11 + 0x268) +
                       dVar57 * *(double *)(pFVar18 + lVar11 + 0x2a8)) * dVar46 +
                       (dVar46 * *(double *)(pFVar18 + lVar11 + 0x280) +
                        dVar50 * *(double *)(pFVar18 + lVar11 + 0x260) +
                       dVar57 * *(double *)(pFVar18 + lVar11 + 0x2a0)) * dVar50 +
                       (dVar46 * *(double *)(pFVar18 + lVar11 + 0x290) +
                        dVar50 * *(double *)(pFVar18 + lVar11 + 0x270) +
                       dVar57 * *(double *)(pFVar18 + lVar11 + 0x2b0)) * dVar57 + dVar47 + dVar53;
            }
            if (local_4a0[0x29] == (FScriptContainerElement)0x0) {
              dVar47 = (*(double *)(local_480 + lVar24 + 0x78) * *(double *)(local_4a0 + 0x10)) /
                       dVar47;
              dVar56 = dVar47 * *(double *)(local_480 + lVar24 + 0x60);
              dVar57 = dVar47 * *(double *)(local_480 + lVar24 + 0x68);
              dVar47 = dVar47 * *(double *)(local_480 + lVar24 + 0x70);
              *(double *)(local_480 + lVar24) = dVar56 * dVar58;
              *(double *)(local_480 + lVar24 + 8) = dVar57 * dVar58;
              *(double *)(local_480 + lVar24 + 0x10) = dVar47 * dVar58;
              uVar16 = __xmm_80000000000000008000000000000000._4_4_;
              uVar55 = (uint)__xmm_80000000000000008000000000000000;
              uVar14 = (uint)*(undefined8 *)(pFVar18 + lVar11 + 0xf8) ^
                       (uint)__xmm_80000000000000008000000000000000;
              uVar40 = (uint)((ulonglong)*(undefined8 *)(pFVar18 + lVar11 + 0xf8) >> 0x20) ^
                       __xmm_80000000000000008000000000000000._4_4_;
              *(double *)(local_480 + lVar24 + 0x18) = (double)CONCAT44(uVar40,uVar14) * dVar56;
              *(double *)(local_480 + lVar24 + 0x20) = (double)CONCAT44(uVar40,uVar14) * dVar57;
              *(double *)(local_480 + lVar24 + 0x28) = (double)CONCAT44(uVar40,uVar14) * dVar47;
              local_408._8_4_ = SUB84(dVar57,0) ^ uVar55;
              local_408._12_4_ = (uint)((ulonglong)dVar57 >> 0x20) ^ uVar16;
              local_408._0_4_ = SUB84(dVar56,0) ^ uVar55;
              local_408._4_4_ = (uint)((ulonglong)dVar56 >> 0x20) ^ uVar16;
              dVar53 = (*(double *)(pFVar13 + 0x10) - *(double *)(pFVar21 + 0x10)) * dVar56 -
                       (*(double *)pFVar13 - *(double *)pFVar21) * dVar47;
              dVar41 = (*(double *)pFVar13 - *(double *)pFVar21) * dVar57 -
                       (*(double *)(pFVar13 + 8) - *(double *)(pFVar21 + 8)) * dVar56;
              dVar50 = (*(double *)(pFVar13 + 8) - *(double *)(pFVar21 + 8)) * dVar47 -
                       (*(double *)(pFVar13 + 0x10) - *(double *)(pFVar21 + 0x10)) * dVar57;
              dVar58 = *(double *)(pFVar20 + 0x28);
              dVar56 = *(double *)(pFVar20 + 0x48);
              dVar57 = *(double *)(pFVar20 + 8);
              dVar31 = *(double *)(pFVar20 + 0x10);
              dVar39 = *(double *)(pFVar20 + 0x30);
              dVar46 = *(double *)(pFVar20 + 0x50);
              *(double *)(local_480 + lVar24 + 0x30) =
                   dVar53 * *(double *)(pFVar20 + 0x20) + dVar50 * *(double *)pFVar20 +
                   dVar41 * *(double *)(pFVar20 + 0x40);
              *(double *)(local_480 + lVar24 + 0x38) =
                   dVar50 * dVar57 + dVar53 * dVar58 + dVar41 * dVar56;
              *(double *)(local_480 + lVar24 + 0x40) =
                   dVar50 * dVar31 + dVar53 * dVar39 + dVar41 * dVar46;
              local_3f0 = *(double *)(pFVar18 + lVar11 + 0x118) -
                          *(double *)(pFVar18 + lVar11 + 0x188);
              local_3e8 = *(double *)(pFVar18 + lVar11 + 0x120) -
                          *(double *)(pFVar18 + lVar11 + 400);
              local_408._20_4_ = (uint)((ulonglong)dVar47 >> 0x20) ^ uVar16;
              local_408._16_4_ = SUB84(dVar47,0) ^ uVar55;
              local_3e0 = *(double *)(pFVar18 + lVar11 + 0x128) -
                          *(double *)(pFVar18 + lVar11 + 0x198);
              pTVar10 = TVector<double,3>::CrossProduct
                                  (&local_208,(TVector<double,3> *)&local_3f0,&local_408);
              dVar58 = *(double *)pTVar10;
              dVar56 = *(double *)&pTVar10->field_0x8;
              dVar47 = *(double *)&pTVar10->field_0x10;
              dVar57 = *(double *)(pFVar18 + lVar11 + 0x268);
              dVar31 = *(double *)(pFVar18 + lVar11 + 0x288);
              dVar39 = *(double *)(pFVar18 + lVar11 + 0x2a8);
              dVar46 = *(double *)(pFVar18 + lVar11 + 0x290);
              dVar50 = *(double *)(pFVar18 + lVar11 + 0x270);
              dVar53 = *(double *)(pFVar18 + lVar11 + 0x2b0);
              *(double *)(local_480 + lVar24 + 0x48) =
                   dVar56 * *(double *)(pFVar18 + lVar11 + 0x280) +
                   dVar58 * *(double *)(pFVar18 + lVar11 + 0x260) +
                   dVar47 * *(double *)(pFVar18 + lVar11 + 0x2a0);
              *(double *)(local_480 + lVar24 + 0x50) =
                   dVar56 * dVar31 + dVar58 * dVar57 + dVar47 * dVar39;
              *(double *)(local_480 + lVar24 + 0x58) =
                   dVar56 * dVar46 + dVar58 * dVar50 + dVar47 * dVar53;
            }
            else {
              dVar41 = 0.0;
              if (__real_3f1a36e2e0000000 < *(double *)(local_4a0 + 0x18)) {
                dVar41 = ((*(double *)(pFVar13 + 8) - *(double *)(pFVar18 + lVar11 + 0x358)) -
                         (*(double *)(pFVar18 + lVar11 + 0x120) -
                         *(double *)(pFVar18 + lVar11 + 0x370))) *
                         *(double *)(local_480 + lVar24 + 0x68) +
                         ((*(double *)pFVar13 - *(double *)(pFVar18 + lVar11 + 0x350)) -
                         (*(double *)(pFVar18 + lVar11 + 0x118) -
                         *(double *)(pFVar18 + lVar11 + 0x368))) *
                         *(double *)(local_480 + lVar24 + 0x60) +
                         ((*(double *)(pFVar13 + 0x10) - *(double *)(pFVar18 + lVar11 + 0x360)) -
                         (*(double *)(pFVar18 + lVar11 + 0x128) -
                         *(double *)(pFVar18 + lVar11 + 0x378))) *
                         *(double *)(local_480 + lVar24 + 0x70);
              }
              dVar30 = __real_3ff0000000000000;
              if (local_4a0[0x28] != (FScriptContainerElement)0x0) {
                dVar30 = __real_3ff0000000000000 / (dVar58 + dVar53);
              }
              dVar58 = *(double *)(local_480 + lVar24 + 0x80);
              dVar53 = dVar30 * *(double *)(local_4a0 + 0x18) * (double)local_458;
              dVar30 = dVar30 * *(double *)(local_4a0 + 0x10) *
                       (double)local_458 * (double)local_458;
              dVar51 = ((dVar30 * *(double *)(local_480 + lVar24 + 0x78) - dVar53 * dVar41) - dVar58
                       ) / ((dVar53 + dVar30) * dVar47 + __real_3ff0000000000000);
              dVar53 = dVar51 * *(double *)(pFVar18 + lVar11 + 0xf0);
              dVar47 = *(double *)(local_480 + lVar24 + 0x60 + 8) * dVar53;
              auVar54._8_4_ = SUB84(dVar47,0);
              auVar54._0_8_ = *(double *)(local_480 + lVar24 + 0x60) * dVar53;
              auVar54._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
              *(undefined1 (*) [16])(local_480 + lVar24) = auVar54;
              *(double *)(local_480 + lVar24 + 0x10) =
                   dVar53 * *(double *)(local_480 + lVar24 + 0x70);
              uVar16 = __xmm_80000000000000008000000000000000._4_4_;
              uVar55 = (uint)__xmm_80000000000000008000000000000000;
              dVar53 = dVar51 * *(double *)(pFVar18 + lVar11 + 0xf8);
              dVar41 = *(double *)(local_480 + lVar24 + 0x60) * dVar53;
              dVar30 = *(double *)(local_480 + lVar24 + 0x60 + 8) * dVar53;
              dVar47 = *(double *)(local_480 + lVar24 + 0x70);
              uVar14 = (uint)((ulonglong)dVar41 >> 0x20) ^
                       __xmm_80000000000000008000000000000000._4_4_;
              uVar40 = SUB84(dVar30,0) ^ _UNK_15066df78;
              uVar12 = (uint)((ulonglong)dVar30 >> 0x20) ^ _UNK_15066df7c;
              pFVar20 = local_480 + lVar24 + 0x18;
              *(uint *)pFVar20 = SUB84(dVar41,0) ^ (uint)__xmm_80000000000000008000000000000000;
              *(uint *)(pFVar20 + 4) = uVar14;
              *(uint *)(pFVar20 + 8) = uVar40;
              *(uint *)(pFVar20 + 0xc) = uVar12;
              *(ulonglong *)(local_480 + lVar24 + 0x28) =
                   CONCAT44((uint)((ulonglong)(dVar53 * dVar47) >> 0x20) ^ uVar16,
                            SUB84(dVar53 * dVar47,0) ^ uVar55);
              dVar47 = *(double *)(pFVar18 + lVar11 + 0x1e8);
              dVar53 = *(double *)(pFVar18 + lVar11 + 0x208);
              dVar41 = *(double *)(pFVar18 + lVar11 + 0x228);
              dVar30 = *(double *)(pFVar18 + lVar11 + 0x210);
              dVar42 = *(double *)(pFVar18 + lVar11 + 0x1f0);
              dVar45 = *(double *)(pFVar18 + lVar11 + 0x230);
              *(double *)(local_480 + lVar24 + 0x30) =
                   (dVar39 * *(double *)(pFVar18 + lVar11 + 0x200) +
                    dVar31 * *(double *)(pFVar18 + lVar11 + 0x1e0) +
                   dVar56 * *(double *)(pFVar18 + lVar11 + 0x220)) * dVar51;
              *(double *)(local_480 + lVar24 + 0x38) =
                   (dVar39 * dVar53 + dVar31 * dVar47 + dVar56 * dVar41) * dVar51;
              *(double *)(local_480 + lVar24 + 0x40) =
                   (dVar39 * dVar30 + dVar31 * dVar42 + dVar56 * dVar45) * dVar51;
              dVar56 = *(double *)(pFVar18 + lVar11 + 0x268);
              dVar47 = *(double *)(pFVar18 + lVar11 + 0x288);
              dVar31 = *(double *)(pFVar18 + lVar11 + 0x2a8);
              dVar39 = *(double *)(pFVar18 + lVar11 + 0x290);
              dVar53 = *(double *)(pFVar18 + lVar11 + 0x270);
              uVar14 = SUB84(dVar51,0) ^ uVar55;
              uVar40 = (uint)((ulonglong)dVar51 >> 0x20) ^ uVar16;
              dVar41 = *(double *)(pFVar18 + lVar11 + 0x2b0);
              *(double *)(local_480 + lVar24 + 0x48) =
                   (dVar46 * *(double *)(pFVar18 + lVar11 + 0x280) +
                    dVar50 * *(double *)(pFVar18 + lVar11 + 0x260) +
                   dVar57 * *(double *)(pFVar18 + lVar11 + 0x2a0)) * (double)CONCAT44(uVar40,uVar14)
              ;
              *(double *)(local_480 + lVar24 + 0x50) =
                   (double)CONCAT44(uVar40,uVar14) *
                   (dVar46 * dVar47 + dVar50 * dVar56 + dVar57 * dVar31);
              *(double *)(local_480 + lVar24 + 0x58) =
                   (dVar46 * dVar39 + dVar50 * dVar53 + dVar57 * dVar41) *
                   (double)CONCAT44(uVar40,uVar14);
              *(double *)(local_480 + lVar24 + 0x80) = dVar58 + dVar51;
            }
            uVar14 = 0;
            if ((int)uVar15 < param_4->ArrayNum) {
              uVar14 = ~uVar15 >> 0x1f;
            }
            if (uVar14 == 0) {
              local_4b8 = (ulonglong)(int)uVar15;
              local_4b0 = (longlong)param_4->ArrayNum;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar2 = (code *)swi(3);
                iVar8 = (*pcVar2)();
                return iVar8;
              }
            }
            pFVar18 = local_490;
            pFVar20 = (param_4->AllocatorInstance).Data + (longlong)local_490 * 0x88;
            uVar14 = 0;
            if ((int)uVar25 < param_2->ArrayNum) {
              uVar14 = ~uVar25 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (local_4b8 = uVar22, local_4b0 = (longlong)param_2->ArrayNum,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              iVar8 = (*pcVar2)();
              return iVar8;
            }
            pFVar13 = (param_2->AllocatorInstance).Data;
            lVar24 = uVar22 * 0x3f0;
            *(double *)(pFVar13 + lVar24 + 0x380) =
                 *(double *)(pFVar13 + lVar24 + 0x380) + *(double *)pFVar20;
            *(double *)(pFVar13 + lVar24 + 0x388) =
                 *(double *)(pFVar20 + 8) + *(double *)(pFVar13 + lVar24 + 0x388);
            *(double *)(pFVar13 + lVar24 + 0x390) =
                 *(double *)(pFVar20 + 0x10) + *(double *)(pFVar13 + lVar24 + 0x390);
            uVar14 = 0;
            if ((int)uVar15 < param_4->ArrayNum) {
              uVar14 = ~uVar15 >> 0x1f;
            }
            if (uVar14 == 0) {
              local_4b8 = (ulonglong)(int)uVar15;
              local_4b0 = (longlong)param_4->ArrayNum;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar2 = (code *)swi(3);
                iVar8 = (*pcVar2)();
                return iVar8;
              }
            }
            pFVar20 = (param_4->AllocatorInstance).Data;
            lVar24 = (longlong)pFVar18 * 0x88;
            uVar14 = 0;
            if ((int)uVar25 < param_2->ArrayNum) {
              uVar14 = ~uVar25 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (local_4b8 = uVar22, local_4b0 = (longlong)param_2->ArrayNum,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              iVar8 = (*pcVar2)();
              return iVar8;
            }
            pFVar13 = (param_2->AllocatorInstance).Data;
            lVar11 = uVar22 * 0x3f0;
            *(double *)(pFVar13 + lVar11 + 0x398) =
                 *(double *)(pFVar13 + lVar11 + 0x398) + *(double *)(pFVar20 + lVar24 + 0x18);
            *(double *)(pFVar13 + lVar11 + 0x3a0) =
                 *(double *)(pFVar20 + lVar24 + 0x20) + *(double *)(pFVar13 + lVar11 + 0x3a0);
            *(double *)(pFVar13 + lVar11 + 0x3a8) =
                 *(double *)(pFVar20 + lVar24 + 0x28) + *(double *)(pFVar13 + lVar11 + 0x3a8);
            uVar14 = 0;
            if ((int)uVar15 < param_4->ArrayNum) {
              uVar14 = ~uVar15 >> 0x1f;
            }
            if (uVar14 == 0) {
              local_4b8 = (ulonglong)(int)uVar15;
              local_4b0 = (longlong)param_4->ArrayNum;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar2 = (code *)swi(3);
                iVar8 = (*pcVar2)();
                return iVar8;
              }
            }
            pFVar20 = (param_4->AllocatorInstance).Data;
            lVar24 = (longlong)pFVar18 * 0x88;
            uVar14 = 0;
            if ((int)uVar25 < param_2->ArrayNum) {
              uVar14 = ~uVar25 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (local_4b8 = uVar22, local_4b0 = (longlong)param_2->ArrayNum,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              iVar8 = (*pcVar2)();
              return iVar8;
            }
            pFVar13 = (param_2->AllocatorInstance).Data;
            lVar11 = uVar22 * 0x3f0;
            *(double *)(pFVar13 + lVar11 + 0x3b0) =
                 *(double *)(pFVar20 + lVar24 + 0x30) + *(double *)(pFVar13 + lVar11 + 0x3b0);
            *(double *)(pFVar13 + lVar11 + 0x3b8) =
                 *(double *)(pFVar20 + lVar24 + 0x38) + *(double *)(pFVar13 + lVar11 + 0x3b8);
            *(double *)(pFVar13 + lVar11 + 0x3c0) =
                 *(double *)(pFVar20 + lVar24 + 0x40) + *(double *)(pFVar13 + lVar11 + 0x3c0);
            uVar14 = 0;
            if ((int)uVar15 < param_4->ArrayNum) {
              uVar14 = ~uVar15 >> 0x1f;
            }
            if (uVar14 == 0) {
              local_4b8 = (ulonglong)(int)uVar15;
              local_4b0 = (longlong)param_4->ArrayNum;
              bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar7) {
                pcVar2 = (code *)swi(3);
                iVar8 = (*pcVar2)();
                return iVar8;
              }
            }
            pFVar20 = (param_4->AllocatorInstance).Data;
            lVar24 = (longlong)pFVar18 * 0x88;
            uVar14 = 0;
            if ((int)uVar25 < param_2->ArrayNum) {
              uVar14 = ~uVar25 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (local_4b8 = uVar22, local_4b0 = (longlong)param_2->ArrayNum,
               bVar7 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
               bVar7)) {
              pcVar2 = (code *)swi(3);
              iVar8 = (*pcVar2)();
              return iVar8;
            }
            dVar56 = _UNK_15061cbc8;
            dVar58 = ___xmm_3ff00000000000000000000000000000;
            pFVar13 = (param_2->AllocatorInstance).Data;
            lVar11 = uVar22 * 0x3f0;
            local_498 = local_498 + 1;
            *(double *)(pFVar13 + lVar11 + 0x3c8) =
                 *(double *)(pFVar20 + lVar24 + 0x48) + *(double *)(pFVar13 + lVar11 + 0x3c8);
            *(double *)(pFVar13 + lVar11 + 0x3d0) =
                 *(double *)(pFVar20 + lVar24 + 0x50) + *(double *)(pFVar13 + lVar11 + 0x3d0);
            *(double *)(pFVar13 + lVar11 + 0x3d8) =
                 *(double *)(pFVar20 + lVar24 + 0x58) + *(double *)(pFVar13 + lVar11 + 0x3d8);
          }
          uVar15 = uVar15 + 1;
          pFVar18 = (FScriptContainerElement *)((longlong)pFVar18 + 1);
          goto LAB_143b94b7d;
        }
      }
      pFVar20 = local_490;
    } while ((int)uVar17 < param_8);
    uVar64 = SUB84(__real_3ff0000000000000,0);
    uVar65 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
  }
  dVar47 = _UNK_150689678;
  dVar56 = ___xmm_3fe00000000000003fe0000000000000;
  dVar58 = __real_3e45798ee0000000;
  uVar17 = (ulonglong)param_5;
  if (param_5 < param_6) {
    uVar62 = (undefined4)__real_bff0000000000000;
    uVar22 = (ulonglong)__real_bff0000000000000 >> 0x20;
    lVar24 = uVar17 * 0x3f0;
    uVar23 = uVar17;
    do {
      local_4b0 = (longlong)param_2->ArrayNum;
      uVar16 = (uint)uVar17;
      uVar25 = ~uVar16 >> 0x1f;
      uVar55 = 0;
      if ((int)uVar16 < param_2->ArrayNum) {
        uVar55 = uVar25;
      }
      if ((uVar55 == 0) &&
         (local_4b8 = uVar23,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        iVar8 = (*pcVar2)();
        return iVar8;
      }
      local_4b0 = (longlong)param_2->ArrayNum;
      pFVar18 = (param_2->AllocatorInstance).Data;
      uVar55 = 0;
      if ((int)uVar16 < param_2->ArrayNum) {
        uVar55 = uVar25;
      }
      if ((uVar55 == 0) &&
         (local_4b8 = uVar23,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        iVar8 = (*pcVar2)();
        return iVar8;
      }
      local_458 = (param_2->AllocatorInstance).Data;
      local_4b0 = (longlong)param_2->ArrayNum;
      uVar55 = 0;
      if ((int)uVar16 < param_2->ArrayNum) {
        uVar55 = uVar25;
      }
      if ((uVar55 == 0) &&
         (local_4b8 = uVar23,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        iVar8 = (*pcVar2)();
        return iVar8;
      }
      local_4b0 = (longlong)param_2->ArrayNum;
      pFVar20 = (param_2->AllocatorInstance).Data;
      uVar55 = 0;
      if ((int)uVar16 < param_2->ArrayNum) {
        uVar55 = ~uVar16 >> 0x1f;
      }
      if ((uVar55 == 0) &&
         (local_4b8 = uVar23,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        iVar8 = (*pcVar2)();
        return iVar8;
      }
      local_4b0 = (longlong)param_2->ArrayNum;
      pFVar13 = (param_2->AllocatorInstance).Data;
      uVar55 = 0;
      if ((int)uVar16 < param_2->ArrayNum) {
        uVar55 = ~uVar16 >> 0x1f;
      }
      if ((uVar55 == 0) &&
         (local_4b8 = uVar23,
         bVar7 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar7)) {
        pcVar2 = (code *)swi(3);
        iVar8 = (*pcVar2)();
        return iVar8;
      }
      pFVar21 = (param_2->AllocatorInstance).Data;
      if (0.0 < *(double *)(pFVar18 + lVar24 + 0xf0)) {
        local_3d8 = dVar58;
        *(double *)(pFVar18 + lVar24 + 0x170) =
             *(double *)(pFVar18 + lVar24 + 0x170) + *(double *)(pFVar21 + lVar24 + 0x380);
        *(double *)(pFVar18 + lVar24 + 0x178) =
             *(double *)(pFVar21 + lVar24 + 0x388) + *(double *)(pFVar18 + lVar24 + 0x178);
        *(double *)(pFVar18 + lVar24 + 0x180) =
             *(double *)(pFVar21 + lVar24 + 0x390) + *(double *)(pFVar18 + lVar24 + 0x180);
        dVar53 = *(double *)(pFVar18 + lVar24 + 0x1b0);
        dVar50 = *(double *)(pFVar18 + lVar24 + 0x1b0 + 8);
        dVar41 = *(double *)(pFVar18 + lVar24 + 0x1a0);
        dVar30 = *(double *)(pFVar18 + lVar24 + 0x1a0 + 8);
        auVar54 = *(undefined1 (*) [16])(pFVar13 + lVar24 + 0x3b0);
        dVar31 = auVar54._0_8_;
        dVar39 = auVar54._8_8_;
        dVar57 = *(double *)(pFVar13 + lVar24 + 0x3c0);
        auVar43._8_4_ = auVar54._0_4_;
        auVar43._0_8_ = dVar31;
        auVar43._12_4_ = auVar54._4_4_;
        auVar48._8_8_ = dVar39;
        auVar48._0_8_ = dVar39;
        dVar42 = (dVar31 * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                  + dVar41 * 0.0 +
                  dVar53 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                 + dVar57 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]
                 ) * dVar56 + dVar41;
        dVar45 = (auVar43._8_8_ * dVar53 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar30 * 0.0 +
                  dVar50 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                 + dVar57 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
                 ) * dVar47 + dVar30;
        dVar46 = (dVar31 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                  + dVar53 * 0.0 +
                  dVar41 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                 + dVar57 * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]
                 ) * dVar56 + dVar53;
        dVar50 = (dVar31 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                  + dVar50 * 0.0 +
                  dVar30 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                 + dVar57 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
                 ) * dVar47 + dVar50;
        auVar32._8_4_ = SUB84(dVar50,0);
        auVar32._0_8_ = dVar46;
        auVar32._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
        dVar31 = dVar46 * dVar46 + dVar42 * dVar42;
        dVar39 = auVar32._8_8_ * dVar50 + dVar45 * dVar45;
        dVar57 = dVar39 + dVar31;
        dVar31 = dVar31 + dVar39;
        auVar4._8_4_ = SUB84(dVar31,0);
        auVar4._0_8_ = dVar57;
        auVar4._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
        auVar54 = sqrtpd(auVar48,auVar4);
        uVar26 = -(ulonglong)(dVar58 <= dVar57);
        uVar27 = -(ulonglong)(dVar58 <= dVar31);
        auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar54);
        uVar55 = (uint)(uVar26 >> 0x20);
        uVar25 = (uint)(uVar27 >> 0x20);
        auVar33._0_4_ =
             ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar33._4_4_ =
             ~uVar55 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar33._8_4_ =
             ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar33._12_4_ =
             ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        local_2c8._0_8_ = uVar26 & (ulonglong)(auVar52._0_8_ * dVar42);
        uVar17 = uVar27 & (ulonglong)(auVar52._8_8_ * dVar45);
        local_2c8._8_4_ = (undefined4)uVar17;
        local_2c8._12_4_ = (undefined4)(uVar17 >> 0x20);
        local_2c8 = local_2c8 | auVar33;
        auVar54 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar54);
        local_2b8._0_4_ =
             ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        local_2b8._4_4_ =
             ~uVar55 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        local_2b8._8_4_ =
             ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_2b8._12_4_ =
             ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar34._0_8_ = (ulonglong)(auVar54._0_8_ * dVar46) & uVar26;
        uVar27 = (ulonglong)(auVar54._8_8_ * dVar50) & uVar27;
        auVar34._8_4_ = (undefined4)uVar27;
        auVar34._12_4_ = (undefined4)(uVar27 >> 0x20);
        local_2b8 = local_2b8 | auVar34;
        *(undefined1 (*) [16])(pFVar18 + lVar24 + 0x1a0) = local_2c8;
        *(undefined1 (*) [16])(pFVar18 + lVar24 + 0x1b0) = local_2b8;
      }
      if (0.0 < *(double *)(pFVar18 + lVar24 + 0xf8)) {
        local_3d0 = dVar58;
        *(double *)(pFVar18 + lVar24 + 0x188) =
             *(double *)(pFVar20 + lVar24 + 0x398) + *(double *)(pFVar18 + lVar24 + 0x188);
        *(double *)(pFVar18 + lVar24 + 400) =
             *(double *)(pFVar20 + lVar24 + 0x3a0) + *(double *)(pFVar18 + lVar24 + 400);
        *(double *)(pFVar18 + lVar24 + 0x198) =
             *(double *)(pFVar20 + lVar24 + 0x3a8) + *(double *)(pFVar18 + lVar24 + 0x198);
        dVar53 = *(double *)(pFVar18 + lVar24 + 0x1d0);
        dVar50 = *(double *)(pFVar18 + lVar24 + 0x1d0 + 8);
        dVar41 = *(double *)(pFVar18 + lVar24 + 0x1c0);
        dVar30 = *(double *)(pFVar18 + lVar24 + 0x1c0 + 8);
        auVar54 = *(undefined1 (*) [16])(local_458 + lVar24 + 0x3c8);
        dVar31 = auVar54._0_8_;
        dVar39 = auVar54._8_8_;
        dVar57 = *(double *)(local_458 + lVar24 + 0x3d8);
        auVar44._8_4_ = auVar54._0_4_;
        auVar44._0_8_ = dVar31;
        auVar44._12_4_ = auVar54._4_4_;
        auVar49._8_8_ = dVar39;
        auVar49._0_8_ = dVar39;
        dVar42 = (dVar31 * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                  + dVar41 * 0.0 +
                  dVar53 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                 + dVar57 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0]
                 ) * dVar56 + dVar41;
        dVar45 = (auVar44._8_8_ * dVar53 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar30 * 0.0 +
                  dVar50 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                 + dVar57 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
                 ) * dVar47 + dVar30;
        dVar46 = (dVar31 * dVar30 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
                  + dVar53 * 0.0 +
                  dVar41 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
                 + dVar57 * dVar50 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]
                 ) * dVar56 + dVar53;
        dVar50 = (dVar31 * dVar41 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                  + dVar50 * 0.0 +
                  dVar30 * dVar39 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
                 + dVar57 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1]
                 ) * dVar47 + dVar50;
        auVar35._8_4_ = SUB84(dVar50,0);
        auVar35._0_8_ = dVar46;
        auVar35._12_4_ = (int)((ulonglong)dVar50 >> 0x20);
        dVar31 = dVar46 * dVar46 + dVar42 * dVar42;
        dVar39 = auVar35._8_8_ * dVar50 + dVar45 * dVar45;
        dVar57 = dVar39 + dVar31;
        dVar31 = dVar31 + dVar39;
        auVar5._8_4_ = SUB84(dVar31,0);
        auVar5._0_8_ = dVar57;
        auVar5._12_4_ = (int)((ulonglong)dVar31 >> 0x20);
        auVar54 = sqrtpd(auVar49,auVar5);
        uVar26 = -(ulonglong)(dVar58 <= dVar57);
        uVar27 = -(ulonglong)(dVar58 <= dVar31);
        auVar52 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar54);
        uVar55 = (uint)(uVar26 >> 0x20);
        uVar25 = (uint)(uVar27 >> 0x20);
        auVar36._0_4_ =
             ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar36._4_4_ =
             ~uVar55 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar36._8_4_ =
             ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar36._12_4_ =
             ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        local_2a8._0_8_ = uVar26 & (ulonglong)(auVar52._0_8_ * dVar42);
        uVar17 = uVar27 & (ulonglong)(auVar52._8_8_ * dVar45);
        local_2a8._8_4_ = (undefined4)uVar17;
        local_2a8._12_4_ = (undefined4)(uVar17 >> 0x20);
        local_2a8 = local_2a8 | auVar36;
        auVar54 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar54);
        local_298._0_4_ =
             ~(uint)uVar26 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        local_298._4_4_ =
             ~uVar55 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        local_298._8_4_ =
             ~(uint)uVar27 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_298._12_4_ =
             ~uVar25 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        *(undefined1 (*) [16])(pFVar18 + lVar24 + 0x1c0) = local_2a8;
        auVar37._0_8_ = (ulonglong)(auVar54._0_8_ * dVar46) & uVar26;
        uVar27 = (ulonglong)(auVar54._8_8_ * dVar50) & uVar27;
        auVar37._8_4_ = (undefined4)uVar27;
        auVar37._12_4_ = (undefined4)(uVar27 >> 0x20);
        local_298 = local_298 | auVar37;
        *(undefined1 (*) [16])(pFVar18 + lVar24 + 0x1d0) = local_298;
      }
      uVar28 = uVar62;
      uVar29 = (int)uVar22;
      if (0.0 <= *(double *)(pFVar18 + lVar24 + 0x1d8) * *(double *)(pFVar18 + lVar24 + 0x1b8) +
                 *(double *)(pFVar18 + lVar24 + 0x1b0) * *(double *)(pFVar18 + lVar24 + 0x1d0) +
                 *(double *)(pFVar18 + lVar24 + 0x1c8) * *(double *)(pFVar18 + lVar24 + 0x1a8) +
                 *(double *)(pFVar18 + lVar24 + 0x1a0) * *(double *)(pFVar18 + lVar24 + 0x1c0)) {
        uVar28 = uVar64;
        uVar29 = uVar65;
      }
      uVar17 = (ulonglong)(uVar16 + 1);
      dVar57 = *(double *)(pFVar18 + lVar24 + 0x1c0 + 8);
      uVar23 = uVar23 + 1;
      auVar38._0_8_ = (double)CONCAT44(uVar29,uVar28);
      auVar38._8_4_ = uVar28;
      auVar38._12_4_ = uVar29;
      *(double *)(pFVar18 + lVar24 + 0x1c0) = auVar38._0_8_ * *(double *)(pFVar18 + lVar24 + 0x1c0);
      *(double *)(pFVar18 + lVar24 + 0x1c0 + 8) = auVar38._8_8_ * dVar57;
      dVar57 = *(double *)(pFVar18 + lVar24 + 0x1d0 + 8) * (double)CONCAT44(uVar29,uVar28);
      auVar6._8_4_ = SUB84(dVar57,0);
      auVar6._0_8_ = *(double *)(pFVar18 + lVar24 + 0x1d0) * (double)CONCAT44(uVar29,uVar28);
      auVar6._12_4_ = (int)((ulonglong)dVar57 >> 0x20);
      *(undefined1 (*) [16])(pFVar18 + lVar24 + 0x1d0) = auVar6;
      lVar24 = lVar24 + 0x3f0;
    } while ((int)(uVar16 + 1) < param_6);
  }
  return local_498;
}

// ApplyRotationConstraints @ 143b99080

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl
Chaos::FJointSolver::ApplyRotationConstraints
          (double param_1,TArray<Chaos::FJointSolverJointState,TSizedDefaultAllocator<32>_> *param_2
          ,TArray<Chaos::FJointSolverConstraintRowData,TSizedDefaultAllocator<32>_> *param_3,
          TArray<Chaos::FJointSolverConstraintRowState,TSizedDefaultAllocator<32>_> *param_4,
          int param_5,int param_6,int param_7,int param_8)

{
  FScriptContainerElement *pFVar1;
  undefined8 uVar2;
  double dVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  double dVar13;
  bool bVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  uint uVar18;
  longlong lVar19;
  ulonglong uVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined4 uVar34;
  uint uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined1 auVar39 [16];
  double dVar41;
  undefined1 auVar40 [16];
  double dVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  double dVar46;
  double dVar47;
  undefined1 auVar48 [16];
  uint uVar49;
  uint uVar50;
  uint uVar51;
  double dVar52;
  double dVar53;
  undefined4 uVar54;
  int local_178;
  double local_160;
  double local_158;
  double local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_130;
  double local_128;
  undefined1 local_118 [16];
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  undefined1 local_e8 [16];
  
  dVar13 = __real_3ff0000000000000;
  uVar20 = (ulonglong)param_7;
  uVar54 = SUB84(__real_3ff0000000000000,0);
  uVar11 = (ulonglong)__real_3ff0000000000000 >> 0x20;
  local_178 = 0;
  if (param_7 < param_8) {
    lVar16 = uVar20 * 0x88;
    lVar21 = uVar20 * 0x30;
    auVar44 = ___xmm_7fffffffffffffff7fffffffffffffff;
    do {
      uVar18 = (uint)uVar20;
      uVar17 = ~uVar18 >> 0x1f;
      uVar51 = 0;
      if ((int)uVar18 < param_3->ArrayNum) {
        uVar51 = uVar17;
      }
      if ((uVar51 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        iVar15 = (*pcVar6)();
        return iVar15;
      }
      uVar51 = *(uint *)((param_3->AllocatorInstance).Data + lVar21 + 4);
      lVar22 = (longlong)(int)uVar51;
      uVar35 = 0;
      if ((int)uVar18 < param_4->ArrayNum) {
        uVar35 = uVar17;
      }
      if ((uVar35 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        iVar15 = (*pcVar6)();
        return iVar15;
      }
      uVar2 = *(undefined8 *)((param_4->AllocatorInstance).Data + lVar16 + 0x78);
      uVar49 = (uint)uVar2 & auVar44._0_4_;
      uVar50 = (uint)((ulonglong)uVar2 >> 0x20) & auVar44._4_4_;
      uVar35 = 0;
      if ((int)uVar51 < param_2->ArrayNum) {
        uVar35 = ~uVar51 >> 0x1f;
      }
      if ((uVar35 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        iVar15 = (*pcVar6)();
        return iVar15;
      }
      lVar19 = lVar22 * 0x3f0;
      pFVar1 = (param_2->AllocatorInstance).Data + lVar19 + 1000;
      if (*(double *)pFVar1 <= (double)CONCAT44(uVar50,uVar49) &&
          (double)CONCAT44(uVar50,uVar49) != *(double *)pFVar1) {
        uVar35 = 0;
        if ((int)uVar18 < param_4->ArrayNum) {
          uVar35 = uVar17;
        }
        if ((uVar35 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          iVar15 = (*pcVar6)();
          return iVar15;
        }
        pFVar1 = (param_4->AllocatorInstance).Data;
        uVar35 = 0;
        if ((int)uVar18 < param_3->ArrayNum) {
          uVar35 = uVar17;
        }
        if ((uVar35 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          iVar15 = (*pcVar6)();
          return iVar15;
        }
        pFVar4 = (param_3->AllocatorInstance).Data;
        uVar17 = 0;
        if ((int)uVar51 < param_2->ArrayNum) {
          uVar17 = ~uVar51 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          iVar15 = (*pcVar6)();
          return iVar15;
        }
        pFVar5 = (param_2->AllocatorInstance).Data;
        dVar46 = 0.0;
        dVar36 = 0.0;
        dVar47 = 0.0;
        dVar37 = 0.0;
        dVar52 = 0.0;
        if (*(double *)(pFVar5 + lVar19 + 0xf0) <= 0.0) {
          dVar42 = 0.0;
          dVar9 = 0.0;
          dVar10 = 0.0;
        }
        else {
          dVar37 = *(double *)(pFVar1 + lVar16 + 0x60);
          dVar53 = *(double *)(pFVar1 + lVar16 + 0x68);
          dVar3 = *(double *)(pFVar1 + lVar16 + 0x70);
          dVar42 = dVar53 * *(double *)(pFVar5 + lVar19 + 0x200) +
                   dVar37 * *(double *)(pFVar5 + lVar19 + 0x1e0) +
                   dVar3 * *(double *)(pFVar5 + lVar19 + 0x220);
          dVar9 = dVar53 * *(double *)(pFVar5 + lVar19 + 0x208) +
                  dVar37 * *(double *)(pFVar5 + lVar19 + 0x1e8) +
                  dVar3 * *(double *)(pFVar5 + lVar19 + 0x228);
          dVar10 = dVar53 * *(double *)(pFVar5 + lVar19 + 0x210) +
                   dVar37 * *(double *)(pFVar5 + lVar19 + 0x1f0) +
                   dVar3 * *(double *)(pFVar5 + lVar19 + 0x230);
          dVar37 = dVar53 * dVar9 + dVar37 * dVar42 + dVar3 * dVar10;
        }
        if (0.0 < *(double *)(pFVar5 + lVar19 + 0xf8)) {
          dVar52 = *(double *)(pFVar1 + lVar16 + 0x60);
          dVar53 = *(double *)(pFVar1 + lVar16 + 0x68);
          dVar3 = *(double *)(pFVar1 + lVar16 + 0x70);
          dVar46 = dVar53 * *(double *)(pFVar5 + lVar19 + 0x280) +
                   dVar52 * *(double *)(pFVar5 + lVar19 + 0x260) +
                   dVar3 * *(double *)(pFVar5 + lVar19 + 0x2a0);
          dVar36 = dVar53 * *(double *)(pFVar5 + lVar19 + 0x288) +
                   dVar52 * *(double *)(pFVar5 + lVar19 + 0x268) +
                   dVar3 * *(double *)(pFVar5 + lVar19 + 0x2a8);
          dVar47 = dVar53 * *(double *)(pFVar5 + lVar19 + 0x290) +
                   dVar52 * *(double *)(pFVar5 + lVar19 + 0x270) +
                   dVar3 * *(double *)(pFVar5 + lVar19 + 0x2b0);
          dVar52 = dVar53 * dVar36 + dVar52 * dVar46 + dVar3 * dVar47;
        }
        dVar53 = dVar52 + dVar37;
        if (pFVar4[lVar21 + 0x29] == (FScriptContainerElement)0x0) {
          dVar37 = *(double *)(pFVar1 + lVar16 + 0x78) * *(double *)(pFVar4 + lVar21 + 0x10) *
                   (dVar13 / dVar53);
          *(double *)(pFVar1 + lVar16 + 0x30) = dVar42 * dVar37;
          *(double *)(pFVar1 + lVar16 + 0x38) = dVar37 * dVar9;
          *(double *)(pFVar1 + lVar16 + 0x40) = dVar37 * dVar10;
          dVar37 = *(double *)(pFVar1 + lVar16 + 0x78) * *(double *)(pFVar4 + lVar21 + 0x10) *
                   (dVar13 / dVar53);
          dVar37 = (double)CONCAT44((uint)((ulonglong)dVar37 >> 0x20) ^
                                    __xmm_80000000000000008000000000000000._4_4_,
                                    SUB84(dVar37,0) ^ (uint)__xmm_80000000000000008000000000000000);
          *(double *)(pFVar1 + lVar16 + 0x48) = dVar37 * dVar46;
          *(double *)(pFVar1 + lVar16 + 0x50) = dVar37 * dVar36;
          *(double *)(pFVar1 + lVar16 + 0x58) = dVar37 * dVar47;
        }
        else {
          dVar36 = *(double *)(pFVar4 + lVar21 + 0x18);
          uVar34 = SUB84(dVar36,0);
          uVar25 = (undefined4)((ulonglong)dVar36 >> 0x20);
          dVar47 = 0.0;
          if (0.0 < dVar36) {
            TRotation<double,3>::CalculateAngularVelocity1
                      ((TVector<double,3> *)&local_160,
                       (TRotation<double,3> *)(pFVar5 + lVar19 + 0x310),
                       (TRotation<double,3> *)(pFVar5 + lVar19 + 0x1a0),dVar13);
            TRotation<double,3>::CalculateAngularVelocity1
                      ((TVector<double,3> *)&local_148,
                       (TRotation<double,3> *)(pFVar5 + lVar19 + 0x330),
                       (TRotation<double,3> *)(pFVar5 + lVar19 + 0x1c0),dVar13);
            dVar47 = (local_158 * *(double *)(pFVar1 + lVar16 + 0x68) +
                      local_160 * *(double *)(pFVar1 + lVar16 + 0x60) +
                     local_150 * *(double *)(pFVar1 + lVar16 + 0x70)) -
                     (local_140 * *(double *)(pFVar1 + lVar16 + 0x68) +
                      local_148 * *(double *)(pFVar1 + lVar16 + 0x60) +
                     local_138 * *(double *)(pFVar1 + lVar16 + 0x70));
            uVar34 = (undefined4)*(undefined8 *)(pFVar4 + lVar21 + 0x18);
            uVar25 = (undefined4)((ulonglong)*(undefined8 *)(pFVar4 + lVar21 + 0x18) >> 0x20);
          }
          dVar36 = dVar13;
          if (pFVar4[lVar21 + 0x28] != (FScriptContainerElement)0x0) {
            dVar36 = dVar13 / dVar53;
          }
          dVar46 = *(double *)(pFVar1 + lVar16 + 0x80);
          dVar9 = (double)CONCAT44(uVar25,uVar34) * dVar36 * param_1;
          dVar36 = dVar36 * *(double *)(pFVar4 + lVar21 + 0x10) * param_1 * param_1;
          dVar47 = ((dVar36 * *(double *)(pFVar1 + lVar16 + 0x78) - dVar9 * dVar47) - dVar46) /
                   ((dVar9 + dVar36) * dVar53 + dVar13);
          dVar37 = dVar47 * dVar37;
          dVar36 = *(double *)(pFVar1 + lVar16 + 0x60 + 8) * dVar37;
          auVar44._8_4_ = SUB84(dVar36,0);
          auVar44._0_8_ = *(double *)(pFVar1 + lVar16 + 0x60) * dVar37;
          auVar44._12_4_ = (int)((ulonglong)dVar36 >> 0x20);
          *(undefined1 (*) [16])(pFVar1 + lVar16 + 0x30) = auVar44;
          *(double *)(pFVar1 + lVar16 + 0x40) = dVar37 * *(double *)(pFVar1 + lVar16 + 0x70);
          dVar37 = *(double *)(pFVar1 + lVar16 + 0x60 + 8);
          uVar17 = SUB84(dVar47 * dVar52,0) ^ (uint)__xmm_80000000000000008000000000000000;
          uVar35 = (uint)((ulonglong)(dVar47 * dVar52) >> 0x20) ^
                   __xmm_80000000000000008000000000000000._4_4_;
          dVar36 = *(double *)(pFVar1 + lVar16 + 0x70);
          *(double *)(pFVar1 + lVar16 + 0x48) =
               *(double *)(pFVar1 + lVar16 + 0x60) * (double)CONCAT44(uVar35,uVar17);
          *(double *)(pFVar1 + lVar16 + 0x48 + 8) = dVar37 * (double)CONCAT44(uVar35,uVar17);
          *(double *)(pFVar1 + lVar16 + 0x58) = (double)CONCAT44(uVar35,uVar17) * dVar36;
          *(double *)(pFVar1 + lVar16 + 0x80) = dVar46 + dVar47;
        }
        uVar17 = 0;
        if ((int)uVar18 < param_4->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          iVar15 = (*pcVar6)();
          return iVar15;
        }
        pFVar1 = (param_4->AllocatorInstance).Data;
        uVar17 = 0;
        if ((int)uVar51 < param_2->ArrayNum) {
          uVar17 = ~uVar51 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          iVar15 = (*pcVar6)();
          return iVar15;
        }
        pFVar4 = (param_2->AllocatorInstance).Data;
        lVar19 = lVar22 * 0x3f0;
        *(double *)(pFVar4 + lVar19 + 0x3b0) =
             *(double *)(pFVar4 + lVar19 + 0x3b0) + *(double *)(pFVar1 + lVar16 + 0x30);
        *(double *)(pFVar4 + lVar19 + 0x3b8) =
             *(double *)(pFVar1 + lVar16 + 0x38) + *(double *)(pFVar4 + lVar19 + 0x3b8);
        *(double *)(pFVar4 + lVar19 + 0x3c0) =
             *(double *)(pFVar1 + lVar16 + 0x40) + *(double *)(pFVar4 + lVar19 + 0x3c0);
        uVar17 = 0;
        if ((int)uVar18 < param_4->ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          iVar15 = (*pcVar6)();
          return iVar15;
        }
        pFVar1 = (param_4->AllocatorInstance).Data;
        uVar17 = 0;
        if ((int)uVar51 < param_2->ArrayNum) {
          uVar17 = ~uVar51 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar6 = (code *)swi(3);
          iVar15 = (*pcVar6)();
          return iVar15;
        }
        auVar44 = ___xmm_7fffffffffffffff7fffffffffffffff;
        pFVar4 = (param_2->AllocatorInstance).Data;
        lVar22 = lVar22 * 0x3f0;
        *(double *)(pFVar4 + lVar22 + 0x3c8) =
             *(double *)(pFVar1 + lVar16 + 0x48) + *(double *)(pFVar4 + lVar22 + 0x3c8);
        *(double *)(pFVar4 + lVar22 + 0x3d0) =
             *(double *)(pFVar1 + lVar16 + 0x50) + *(double *)(pFVar4 + lVar22 + 0x3d0);
        *(double *)(pFVar4 + lVar22 + 0x3d8) =
             *(double *)(pFVar1 + lVar16 + 0x58) + *(double *)(pFVar4 + lVar22 + 0x3d8);
        local_178 = local_178 + 1;
      }
      uVar20 = (ulonglong)(uVar18 + 1);
      lVar21 = lVar21 + 0x30;
      lVar16 = lVar16 + 0x88;
    } while ((int)(uVar18 + 1) < param_8);
  }
  dVar37 = _UNK_150689678;
  dVar36 = ___xmm_3fe00000000000003fe0000000000000;
  dVar13 = __real_3e45798ee0000000;
  uVar20 = (ulonglong)param_5;
  if (param_5 < param_6) {
    uVar34 = (undefined4)__real_bff0000000000000;
    uVar12 = (ulonglong)__real_bff0000000000000 >> 0x20;
    lVar16 = uVar20 * 0x3f0;
    do {
      uVar17 = (uint)uVar20;
      uVar18 = ~uVar17 >> 0x1f;
      uVar51 = 0;
      if ((int)uVar17 < param_2->ArrayNum) {
        uVar51 = uVar18;
      }
      if ((uVar51 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        iVar15 = (*pcVar6)();
        return iVar15;
      }
      pFVar1 = (param_2->AllocatorInstance).Data;
      uVar51 = 0;
      if ((int)uVar17 < param_2->ArrayNum) {
        uVar51 = uVar18;
      }
      if ((uVar51 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        iVar15 = (*pcVar6)();
        return iVar15;
      }
      pFVar4 = (param_2->AllocatorInstance).Data;
      uVar51 = 0;
      if ((int)uVar17 < param_2->ArrayNum) {
        uVar51 = uVar18;
      }
      if ((uVar51 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar6 = (code *)swi(3);
        iVar15 = (*pcVar6)();
        return iVar15;
      }
      pFVar5 = (param_2->AllocatorInstance).Data;
      if (0.0 < *(double *)(pFVar1 + lVar16 + 0xf0)) {
        dVar42 = *(double *)(pFVar1 + lVar16 + 0x1b0);
        dVar10 = *(double *)(pFVar1 + lVar16 + 0x1b0 + 8);
        dVar53 = *(double *)(pFVar1 + lVar16 + 0x1a0);
        dVar3 = *(double *)(pFVar1 + lVar16 + 0x1a0 + 8);
        auVar44 = *(undefined1 (*) [16])(pFVar5 + lVar16 + 0x3b0);
        dVar46 = auVar44._0_8_;
        dVar52 = auVar44._8_8_;
        dVar47 = *(double *)(pFVar5 + lVar16 + 0x3c0);
        auVar39._8_4_ = auVar44._0_4_;
        auVar39._0_8_ = dVar46;
        auVar39._12_4_ = auVar44._4_4_;
        auVar43._8_8_ = dVar52;
        auVar43._0_8_ = dVar52;
        local_130 = dVar13;
        dVar38 = (dVar46 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                  + dVar53 * 0.0 +
                  dVar42 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                 + dVar47 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0])
                 * dVar36 + dVar53;
        dVar41 = (auVar39._8_8_ * dVar42 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar3 * 0.0 +
                  dVar10 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                 + dVar47 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
                 ) * dVar37 + dVar3;
        dVar9 = (dVar46 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dVar42 * 0.0 +
                 dVar53 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                dVar47 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]) *
                dVar36 + dVar42;
        dVar10 = (dVar46 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                  + dVar10 * 0.0 +
                  dVar3 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar47 * dVar42 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1])
                 * dVar37 + dVar10;
        auVar27._8_4_ = SUB84(dVar10,0);
        auVar27._0_8_ = dVar9;
        auVar27._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        dVar46 = dVar9 * dVar9 + dVar38 * dVar38;
        dVar52 = auVar27._8_8_ * dVar10 + dVar41 * dVar41;
        dVar47 = dVar52 + dVar46;
        dVar46 = dVar46 + dVar52;
        auVar48._8_4_ = SUB84(dVar46,0);
        auVar48._0_8_ = dVar47;
        auVar48._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        auVar44 = sqrtpd(auVar43,auVar48);
        uVar23 = -(ulonglong)(dVar13 <= dVar47);
        uVar24 = -(ulonglong)(dVar13 <= dVar46);
        uVar51 = (uint)(uVar23 >> 0x20);
        uVar18 = (uint)(uVar24 >> 0x20);
        auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar44);
        auVar28._0_4_ =
             ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar28._4_4_ =
             ~uVar51 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar28._8_4_ =
             ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar28._12_4_ =
             ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        local_118._0_8_ = uVar23 & (ulonglong)(auVar48._0_8_ * dVar38);
        uVar20 = uVar24 & (ulonglong)(auVar48._8_8_ * dVar41);
        local_118._8_4_ = (undefined4)uVar20;
        local_118._12_4_ = (undefined4)(uVar20 >> 0x20);
        local_118 = local_118 | auVar28;
        auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar44);
        local_108._0_4_ =
             ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        local_108._4_4_ =
             ~uVar51 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        local_108._8_4_ =
             ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_108._12_4_ =
             ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar29._0_8_ = (ulonglong)(auVar44._0_8_ * dVar9) & uVar23;
        uVar24 = (ulonglong)(auVar44._8_8_ * dVar10) & uVar24;
        auVar29._8_4_ = (undefined4)uVar24;
        auVar29._12_4_ = (undefined4)(uVar24 >> 0x20);
        local_108 = local_108 | auVar29;
        *(undefined1 (*) [16])(pFVar1 + lVar16 + 0x1a0) = local_118;
        *(undefined1 (*) [16])(pFVar1 + lVar16 + 0x1b0) = local_108;
      }
      if (0.0 < *(double *)(pFVar1 + lVar16 + 0xf8)) {
        dVar42 = *(double *)(pFVar1 + lVar16 + 0x1d0);
        dVar10 = *(double *)(pFVar1 + lVar16 + 0x1d0 + 8);
        dVar53 = *(double *)(pFVar1 + lVar16 + 0x1c0);
        dVar3 = *(double *)(pFVar1 + lVar16 + 0x1c0 + 8);
        auVar44 = *(undefined1 (*) [16])(pFVar4 + lVar16 + 0x3c8);
        dVar46 = auVar44._0_8_;
        dVar52 = auVar44._8_8_;
        dVar47 = *(double *)(pFVar4 + lVar16 + 0x3d8);
        auVar40._8_4_ = auVar44._0_4_;
        auVar40._0_8_ = dVar46;
        auVar40._12_4_ = auVar44._4_4_;
        auVar45._8_8_ = dVar52;
        auVar45._0_8_ = dVar52;
        local_128 = dVar13;
        dVar38 = (dVar46 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
                  + dVar53 * 0.0 +
                  dVar42 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
                 + dVar47 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0])
                 * dVar36 + dVar53;
        dVar41 = (auVar40._8_8_ * dVar42 *
                  GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1] + dVar3 * 0.0 +
                  dVar10 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
                 + dVar47 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1]
                 ) * dVar37 + dVar3;
        dVar9 = (dVar46 * dVar3 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0] +
                 dVar42 * 0.0 +
                 dVar53 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0] +
                dVar47 * dVar10 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0]) *
                dVar36 + dVar42;
        dVar10 = (dVar46 * dVar53 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
                  + dVar10 * 0.0 +
                  dVar3 * dVar52 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1] +
                 dVar47 * dVar42 * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1])
                 * dVar37 + dVar10;
        auVar30._8_4_ = SUB84(dVar10,0);
        auVar30._0_8_ = dVar9;
        auVar30._12_4_ = (int)((ulonglong)dVar10 >> 0x20);
        dVar46 = dVar9 * dVar9 + dVar38 * dVar38;
        dVar52 = auVar30._8_8_ * dVar10 + dVar41 * dVar41;
        dVar47 = dVar52 + dVar46;
        dVar46 = dVar46 + dVar52;
        auVar7._8_4_ = SUB84(dVar46,0);
        auVar7._0_8_ = dVar47;
        auVar7._12_4_ = (int)((ulonglong)dVar46 >> 0x20);
        auVar44 = sqrtpd(auVar45,auVar7);
        uVar23 = -(ulonglong)(dVar13 <= dVar47);
        uVar24 = -(ulonglong)(dVar13 <= dVar46);
        uVar51 = (uint)(uVar23 >> 0x20);
        uVar18 = (uint)(uVar24 >> 0x20);
        auVar48 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar44);
        auVar31._0_4_ =
             ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
        auVar31._4_4_ =
             ~uVar51 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >>
                             0x20);
        auVar31._8_4_ =
             ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
        auVar31._12_4_ =
             ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >>
                             0x20);
        local_f8._0_8_ = uVar23 & (ulonglong)(auVar48._0_8_ * dVar38);
        uVar20 = uVar24 & (ulonglong)(auVar48._8_8_ * dVar41);
        local_f8._8_4_ = (undefined4)uVar20;
        local_f8._12_4_ = (undefined4)(uVar20 >> 0x20);
        local_f8 = local_f8 | auVar31;
        auVar44 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar44);
        local_e8._0_4_ =
             ~(uint)uVar23 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
        local_e8._4_4_ =
             ~uVar51 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >>
                             0x20);
        local_e8._8_4_ =
             ~(uint)uVar24 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
        local_e8._12_4_ =
             ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >>
                             0x20);
        auVar32._0_8_ = (ulonglong)(auVar44._0_8_ * dVar9) & uVar23;
        uVar24 = (ulonglong)(auVar44._8_8_ * dVar10) & uVar24;
        auVar32._8_4_ = (undefined4)uVar24;
        auVar32._12_4_ = (undefined4)(uVar24 >> 0x20);
        local_e8 = local_e8 | auVar32;
        *(undefined1 (*) [16])(pFVar1 + lVar16 + 0x1c0) = local_f8;
        *(undefined1 (*) [16])(pFVar1 + lVar16 + 0x1d0) = local_e8;
      }
      uVar25 = uVar34;
      uVar26 = (int)uVar12;
      if (0.0 <= *(double *)(pFVar1 + lVar16 + 0x1d8) * *(double *)(pFVar1 + lVar16 + 0x1b8) +
                 *(double *)(pFVar1 + lVar16 + 0x1b0) * *(double *)(pFVar1 + lVar16 + 0x1d0) +
                 *(double *)(pFVar1 + lVar16 + 0x1c8) * *(double *)(pFVar1 + lVar16 + 0x1a8) +
                 *(double *)(pFVar1 + lVar16 + 0x1a0) * *(double *)(pFVar1 + lVar16 + 0x1c0)) {
        uVar25 = uVar54;
        uVar26 = (int)uVar11;
      }
      uVar20 = (ulonglong)(uVar17 + 1);
      dVar47 = *(double *)(pFVar1 + lVar16 + 0x1c0 + 8);
      auVar33._0_8_ = (double)CONCAT44(uVar26,uVar25);
      auVar33._8_4_ = uVar25;
      auVar33._12_4_ = uVar26;
      *(double *)(pFVar1 + lVar16 + 0x1c0) = auVar33._0_8_ * *(double *)(pFVar1 + lVar16 + 0x1c0);
      *(double *)(pFVar1 + lVar16 + 0x1c0 + 8) = auVar33._8_8_ * dVar47;
      dVar47 = (double)CONCAT44(uVar26,uVar25) * *(double *)(pFVar1 + lVar16 + 0x1d0 + 8);
      auVar8._8_4_ = SUB84(dVar47,0);
      auVar8._0_8_ = (double)CONCAT44(uVar26,uVar25) * *(double *)(pFVar1 + lVar16 + 0x1d0);
      auVar8._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
      *(undefined1 (*) [16])(pFVar1 + lVar16 + 0x1d0) = auVar8;
      lVar16 = lVar16 + 0x3f0;
    } while ((int)(uVar17 + 1) < param_6);
  }
  return local_178;
}

