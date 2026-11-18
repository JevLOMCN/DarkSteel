// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: AugmentedReality
// Functions: 2

// CalculateVertexNormals<UE::Math::TVector<float>_> @ 14cf37270

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FAccumulatedNormal::CalculateVertexNormals<UE::Math::TVector<float>_>
          (TArray<FAccumulatedNormal,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *param_4,TVector<double> *param_5,
          float param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  bool bVar16;
  double dVar17;
  double dVar18;
  bool bVar19;
  bool bVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  FName *pFVar26;
  FThreadSafeStaticStat<FStat_STAT_CalculateVertexNormals> FVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  uint uVar31;
  longlong lVar32;
  longlong lVar33;
  FScriptContainerElement *pFVar34;
  FScriptContainerElement *pFVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  uint local_164;
  FName local_158;
  longlong local_150;
  FColor_u_0 local_138 [4];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_128;
  FName local_120;
  FName local_118;
  FName local_108;
  double local_100;
  double local_f8;
  double local_f0;
  
  FVar27 = StatPtr_STAT_CalculateVertexNormals;
  local_128 = param_3;
  if (StatPtr_STAT_CalculateVertexNormals ==
      (FThreadSafeStaticStat<FStat_STAT_CalculateVertexNormals>)0x0) {
    pFVar26 = ::FName::FName(&local_108,"STAT_CalculateVertexNormals");
    FVar27 = (FThreadSafeStaticStat<FStat_STAT_CalculateVertexNormals>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CalculateVertexNormals,*pFVar26,
                        L"Calculate Vertex Normals","STATGROUP_ARComponent","STATCAT_Advanced",
                        L"ARComponent",true,true,ST_int64,true,false,MCR_Invalid);
  }
  bVar15 = false;
  bVar16 = false;
  local_118.ComparisonIndex.Value = 0;
  local_118.Number = 0;
  local_158 = *(FName *)FVar27;
  bVar19 = false;
  bVar20 = false;
  if ((local_158.ComparisonIndex.Value.Value != 0) || (local_158.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_138[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_138[0]._s_0,(char *)*(FName *)((longlong)FVar27 + 0x10));
      bVar15 = false;
      bVar16 = true;
      bVar19 = false;
      bVar20 = true;
      if (-1 < CpuChannel->Enabled) {
        local_120.ComparisonIndex.Value = local_158.ComparisonIndex.Value.Value;
        local_120.Number = local_158.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_120,(wchar_t *)*(FName *)((longlong)FVar27 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARComponent.cpp"
                   ,0x246);
        bVar15 = true;
        bVar16 = true;
        bVar19 = true;
        bVar20 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_158,CycleScopeStart);
      bVar19 = true;
      goto LAB_14cf37405;
    }
  }
  bVar16 = bVar20;
  bVar15 = bVar19;
  bVar19 = false;
  local_158 = local_118;
LAB_14cf37405:
  uVar22 = param_2->ArrayNum;
  if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
  }
  param_1->ArrayNum = 0;
  if (param_1->ArrayMax < (int)uVar22) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar22,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  TArray<FAccumulatedNormal,TSizedDefaultAllocator<32>_>::SetNumZeroed(param_1,uVar22,Default);
  dVar18 = __real_3e45798ee0000000;
  dVar17 = __real_3ff0000000000000;
  iVar28 = param_3->ArrayNum;
  if (0 < iVar28) {
    lVar29 = 8;
    dVar13 = (double)param_6;
    uVar31 = 2;
    do {
      uVar23 = 0;
      if ((int)(uVar31 - 2) < iVar28) {
        uVar23 = ~(uVar31 - 2) >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar23 = *(uint *)((param_3->AllocatorInstance).Data + lVar29 + -8);
      lVar30 = (longlong)(int)uVar23;
      uVar24 = 0;
      if ((int)(uVar31 - 1) < param_3->ArrayNum) {
        uVar24 = ~(uVar31 - 1) >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar24 = *(uint *)((param_3->AllocatorInstance).Data + lVar29 + -4);
      lVar32 = (longlong)(int)uVar24;
      uVar25 = 0;
      if ((int)uVar31 < param_3->ArrayNum) {
        uVar25 = ~uVar31 >> 0x1f;
      }
      if ((uVar25 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      uVar25 = *(uint *)((param_3->AllocatorInstance).Data + lVar29);
      uVar21 = 0;
      if ((int)uVar23 < param_2->ArrayNum) {
        uVar21 = ~uVar23 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (param_2->AllocatorInstance).Data;
      fVar2 = *(float *)(pFVar8 + lVar30 * 0xc);
      fVar3 = *(float *)(pFVar8 + lVar30 * 0xc + 4);
      fVar4 = *(float *)(pFVar8 + lVar30 * 0xc + 8);
      uVar21 = 0;
      if ((int)uVar24 < param_2->ArrayNum) {
        uVar21 = ~uVar24 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      lVar33 = (longlong)(int)uVar25;
      pFVar8 = (param_2->AllocatorInstance).Data;
      fVar5 = *(float *)(pFVar8 + lVar32 * 0xc);
      fVar6 = *(float *)(pFVar8 + lVar32 * 0xc + 4);
      fVar7 = *(float *)(pFVar8 + lVar32 * 0xc + 8);
      uVar21 = 0;
      if ((int)uVar25 < param_2->ArrayNum) {
        uVar21 = ~uVar25 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      dVar39 = (double)fVar2 * dVar13 - (double)fVar5 * dVar13;
      dVar37 = (double)fVar4 * dVar13 - (double)fVar7 * dVar13;
      pFVar8 = (param_2->AllocatorInstance).Data;
      dVar42 = (double)fVar3 * dVar13 - (double)fVar6 * dVar13;
      dVar36 = (double)*(float *)(pFVar8 + lVar33 * 0xc + 4) * dVar13 - (double)fVar3 * dVar13;
      dVar12 = (double)*(float *)(pFVar8 + lVar33 * 0xc + 8) * dVar13 - (double)fVar4 * dVar13;
      dVar40 = (double)*(float *)(pFVar8 + lVar33 * 0xc) * dVar13 - (double)fVar2 * dVar13;
      dVar38 = dVar42 * dVar12 - dVar37 * dVar36;
      dVar36 = dVar39 * dVar36 - dVar42 * dVar40;
      dVar12 = dVar37 * dVar40 - dVar39 * dVar12;
      dVar37 = dVar12 * dVar12 + dVar38 * dVar38 + dVar36 * dVar36;
      if (dVar18 < dVar37) {
        local_100 = dVar17 / SQRT(dVar37);
        dVar38 = dVar38 * local_100;
        dVar12 = dVar12 * local_100;
        dVar36 = dVar36 * local_100;
      }
      uVar21 = 0;
      if ((int)uVar23 < param_1->ArrayNum) {
        uVar21 = ~uVar23 >> 0x1f;
      }
      if ((uVar21 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      lVar30 = lVar30 * 0x20;
      *(double *)(pFVar8 + lVar30) = dVar38 + *(double *)(pFVar8 + lVar30);
      *(double *)(pFVar8 + lVar30 + 8) = dVar12 + *(double *)(pFVar8 + lVar30 + 8);
      *(double *)(pFVar8 + lVar30 + 0x10) = dVar36 + *(double *)(pFVar8 + lVar30 + 0x10);
      *(int *)(pFVar8 + lVar30 + 0x18) = *(int *)(pFVar8 + lVar30 + 0x18) + 1;
      uVar23 = 0;
      if ((int)uVar24 < param_1->ArrayNum) {
        uVar23 = ~uVar24 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      lVar32 = lVar32 * 0x20;
      *(double *)(pFVar8 + lVar32) = dVar38 + *(double *)(pFVar8 + lVar32);
      *(double *)(pFVar8 + lVar32 + 8) = dVar12 + *(double *)(pFVar8 + lVar32 + 8);
      *(double *)(pFVar8 + lVar32 + 0x10) = dVar36 + *(double *)(pFVar8 + lVar32 + 0x10);
      *(int *)(pFVar8 + lVar32 + 0x18) = *(int *)(pFVar8 + lVar32 + 0x18) + 1;
      uVar23 = 0;
      if ((int)uVar25 < param_1->ArrayNum) {
        uVar23 = ~uVar25 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      lVar29 = lVar29 + 0xc;
      lVar33 = lVar33 * 0x20;
      *(double *)(pFVar8 + lVar33) = dVar38 + *(double *)(pFVar8 + lVar33);
      *(double *)(pFVar8 + lVar33 + 8) = dVar12 + *(double *)(pFVar8 + lVar33 + 8);
      *(double *)(pFVar8 + lVar33 + 0x10) = dVar36 + *(double *)(pFVar8 + lVar33 + 0x10);
      *(int *)(pFVar8 + lVar33 + 0x18) = *(int *)(pFVar8 + lVar33 + 0x18) + 1;
      iVar1 = uVar31 + 1;
      iVar28 = local_128->ArrayNum;
      param_3 = local_128;
      uVar31 = uVar31 + 3;
    } while (iVar1 < iVar28);
  }
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_4,uVar22 * 2,Default)
  ;
  dVar12 = __real_406fc00000000000;
  dVar13 = __real_3fe0000000000000;
  uVar31 = 0;
  local_128 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(longlong)(int)uVar22;
  if (0 < (int)uVar22) {
    lVar29 = 0;
    local_164 = 0;
    local_150 = 0;
    lVar30 = 0;
    do {
      uVar22 = 0;
      if ((int)uVar31 < param_1->ArrayNum) {
        uVar22 = ~uVar31 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pFVar8 = (param_1->AllocatorInstance).Data;
      if (*(uint *)(pFVar8 + lVar30 + 0x18) == 0) {
        bVar20 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_1932137153169456533>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARComponent.cpp"
                            ,0x26b,"AccumulatedNormal.NumFaces");
        if (bVar20) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        *(undefined8 *)(pFVar8 + lVar30) = 0;
        pFVar34 = pFVar8 + lVar30 + 8;
        pFVar35 = pFVar8 + lVar30 + 0x10;
        *(undefined8 *)&pFVar34->field_0x0 = 0;
        *(double *)pFVar35 = 1.0;
      }
      else {
        pFVar34 = pFVar8 + lVar30 + 8;
        pFVar35 = pFVar8 + lVar30 + 0x10;
        dVar39 = dVar17 / (double)*(uint *)(pFVar8 + lVar30 + 0x18);
        dVar37 = dVar39 * *(double *)&pFVar34->field_0x0;
        dVar36 = dVar39 * *(double *)(pFVar8 + lVar30);
        dVar39 = dVar39 * *(double *)pFVar35;
        *(double *)&pFVar34->field_0x0 = dVar37;
        *(double *)pFVar35 = dVar39;
        *(double *)(pFVar8 + lVar30) = dVar36;
        dVar37 = dVar37 * dVar37 + dVar36 * dVar36 + dVar39 * dVar39;
        if (dVar18 < dVar37) {
          local_f8 = dVar17 / SQRT(dVar37);
          *(double *)(pFVar8 + lVar30) = dVar36 * local_f8;
          auVar11._8_4_ = SUB84(local_f8 * *(double *)(pFVar34 + 8),0);
          auVar11._0_8_ = local_f8 * *(double *)&pFVar34->field_0x0;
          auVar11._12_4_ = (int)((ulonglong)(local_f8 * *(double *)(pFVar34 + 8)) >> 0x20);
          *(undefined1 (*) [16])pFVar34 = auVar11;
        }
      }
      uVar22 = 0;
      if ((int)uVar31 < param_2->ArrayNum) {
        uVar22 = ~uVar31 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      dVar37 = *(double *)&pFVar34->field_0x0;
      dVar39 = *(double *)(pFVar8 + lVar30);
      dVar36 = *(double *)pFVar35;
      pFVar9 = (param_2->AllocatorInstance).Data;
      dVar38 = (param_5->field0_0x0)._s_0.X - (double)*(float *)(pFVar9 + local_150);
      dVar43 = (param_5->field0_0x0)._s_0.Y - (double)*(float *)(pFVar9 + local_150 + 4);
      dVar41 = (param_5->field0_0x0)._s_0.Z - (double)*(float *)(pFVar9 + local_150 + 8);
      dVar40 = dVar37 * dVar38 - dVar39 * dVar43;
      dVar42 = dVar39 * dVar41 - dVar36 * dVar38;
      dVar14 = dVar40 * dVar37 - dVar42 * dVar36;
      dVar38 = dVar36 * dVar43 - dVar37 * dVar41;
      dVar37 = dVar42 * dVar39 - dVar38 * dVar37;
      dVar36 = dVar38 * dVar36 - dVar40 * dVar39;
      dVar39 = dVar36 * dVar36 + dVar14 * dVar14 + dVar37 * dVar37;
      if (dVar18 < dVar39) {
        local_f0 = dVar17 / SQRT(dVar39);
        dVar14 = dVar14 * local_f0;
        dVar36 = dVar36 * local_f0;
        dVar37 = dVar37 * local_f0;
      }
      uVar23 = (int)ROUND(dVar14 * dVar12 + dVar13) >> 1;
      uVar22 = 0x7f;
      if ((int)uVar23 < 0x7f) {
        uVar22 = uVar23;
      }
      uVar24 = (int)ROUND(dVar36 * dVar12 + dVar13) >> 1;
      uVar23 = 0x7f;
      if ((int)uVar24 < 0x7f) {
        uVar23 = uVar24;
      }
      uVar25 = (int)ROUND(dVar37 * dVar12 + dVar13) >> 1;
      uVar24 = 0x7f;
      if ((int)uVar25 < 0x7f) {
        uVar24 = uVar25;
      }
      uVar25 = 0x80;
      if (-0x80 < (int)uVar24) {
        uVar25 = uVar24 & 0xff;
      }
      uVar24 = 0x80;
      if (-0x80 < (int)uVar23) {
        uVar24 = uVar23 & 0xff;
      }
      uVar23 = 0x80;
      if (-0x80 < (int)uVar22) {
        uVar23 = uVar22 & 0xff;
      }
      uVar22 = 0;
      if ((int)local_164 < param_4->ArrayNum) {
        uVar22 = ~local_164 >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      *(uint *)((param_4->AllocatorInstance).Data + lVar29 * 8) =
           ((uVar25 | 0x7f00) << 8 | uVar24) << 8 | uVar23;
      uVar23 = (int)ROUND(*(double *)(pFVar8 + lVar30) * dVar12 + dVar13) >> 1;
      uVar22 = 0x7f;
      if ((int)uVar23 < 0x7f) {
        uVar22 = uVar23;
      }
      uVar24 = (int)ROUND(*(double *)&pFVar34->field_0x0 * dVar12 + dVar13) >> 1;
      uVar23 = 0x7f;
      if ((int)uVar24 < 0x7f) {
        uVar23 = uVar24;
      }
      uVar25 = (int)ROUND(*(double *)pFVar35 * dVar12 + dVar13) >> 1;
      uVar24 = 0x7f;
      if ((int)uVar25 < 0x7f) {
        uVar24 = uVar25;
      }
      uVar25 = 0x80;
      if (-0x80 < (int)uVar24) {
        uVar25 = uVar24 & 0xff;
      }
      uVar24 = 0x80;
      if (-0x80 < (int)uVar23) {
        uVar24 = uVar23 & 0xff;
      }
      uVar23 = 0x80;
      if (-0x80 < (int)uVar22) {
        uVar23 = uVar22 & 0xff;
      }
      uVar22 = 0;
      if ((int)(local_164 + 1) < param_4->ArrayNum) {
        uVar22 = ~(local_164 + 1) >> 0x1f;
      }
      if ((uVar22 == 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar20)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      local_150 = local_150 + 0xc;
      local_164 = local_164 + 2;
      uVar31 = uVar31 + 1;
      lVar30 = lVar30 + 0x20;
      *(uint *)((param_4->AllocatorInstance).Data + lVar29 * 8 + 4) =
           ((uVar25 | 0x7f00) << 8 | uVar24) << 8 | uVar23;
      lVar29 = lVar29 + 1;
    } while (lVar29 < (longlong)local_128);
  }
  if (bVar16) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar15) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar19) {
    FThreadStats::AddMessage(local_158,CycleScopeEnd);
  }
  return;
}

// CalculateVertexNormals<UE::Math::TVector<double>_> @ 14cf37fd0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __cdecl
FAccumulatedNormal::CalculateVertexNormals<UE::Math::TVector<double>_>
          (TArray<FAccumulatedNormal,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<unsigned_int,TSizedDefaultAllocator<32>_> *param_3,
          TArray<FPackedNormal,TSizedDefaultAllocator<32>_> *param_4,TVector<double> *param_5,
          float param_6)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  double dVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  double dVar10;
  double dVar11;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  FName *pFVar20;
  FThreadSafeStaticStat<FStat_STAT_CalculateVertexNormals> FVar21;
  int iVar22;
  ulonglong uVar23;
  longlong lVar24;
  ulonglong uVar25;
  uint uVar26;
  longlong lVar27;
  ulonglong uVar28;
  longlong lVar29;
  longlong lVar30;
  FScriptContainerElement *pFVar31;
  FScriptContainerElement *pFVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  uint local_184;
  FName local_178;
  longlong local_170;
  FColor_u_0 local_160 [2];
  uint local_158;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_150;
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> *local_148;
  FName local_140;
  longlong local_138;
  FName local_130;
  double local_110;
  FName local_108;
  double local_100;
  double local_f8;
  double local_f0;
  
  FVar21 = StatPtr_STAT_CalculateVertexNormals;
  local_150 = param_2;
  local_148 = param_3;
  if (StatPtr_STAT_CalculateVertexNormals ==
      (FThreadSafeStaticStat<FStat_STAT_CalculateVertexNormals>)0x0) {
    pFVar20 = ::FName::FName(&local_108,"STAT_CalculateVertexNormals");
    FVar21 = (FThreadSafeStaticStat<FStat_STAT_CalculateVertexNormals>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_CalculateVertexNormals,*pFVar20,
                        L"Calculate Vertex Normals","STATGROUP_ARComponent","STATCAT_Advanced",
                        L"ARComponent",true,true,ST_int64,true,false,MCR_Invalid);
  }
  local_178 = *(FName *)FVar21;
  bVar8 = false;
  bVar9 = false;
  local_130.ComparisonIndex.Value = 0;
  local_130.Number = 0;
  bVar13 = false;
  bVar14 = false;
  if ((local_178.ComparisonIndex.Value.Value != 0) || (local_178.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_160[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_160[0]._s_0,(char *)*(FName *)((longlong)FVar21 + 0x10));
      bVar8 = false;
      bVar9 = true;
      bVar13 = false;
      bVar14 = true;
      if (-1 < CpuChannel->Enabled) {
        local_140.ComparisonIndex.Value = local_178.ComparisonIndex.Value.Value;
        local_140.Number = local_178.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_140,(wchar_t *)*(FName *)((longlong)FVar21 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARComponent.cpp"
                   ,0x246);
        bVar8 = true;
        bVar9 = true;
        bVar13 = true;
        bVar14 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      FThreadStats::AddMessage(local_178,CycleScopeStart);
      bVar13 = true;
      goto LAB_14cf38162;
    }
  }
  bVar9 = bVar14;
  bVar8 = bVar13;
  bVar13 = false;
  local_178 = local_130;
LAB_14cf38162:
  uVar16 = param_2->ArrayNum;
  if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar16);
  }
  lVar24 = 8;
  param_1->ArrayNum = 0;
  local_138 = 8;
  if (param_1->ArrayMax < (int)uVar16) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x20,8,uVar16,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  TArray<FAccumulatedNormal,TSizedDefaultAllocator<32>_>::SetNumZeroed(param_1,uVar16,Default);
  pTVar12 = local_150;
  dVar11 = __real_3e45798ee0000000;
  dVar10 = __real_3ff0000000000000;
  iVar22 = param_3->ArrayNum;
  if (0 < iVar22) {
    dVar7 = (double)param_6;
    uVar26 = 2;
    do {
      uVar18 = 0;
      uVar17 = uVar18;
      if ((int)(uVar26 - 2) < iVar22) {
        uVar17 = ~(uVar26 - 2) >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar17 = *(uint *)((param_3->AllocatorInstance).Data + lVar24 + -8);
      lVar27 = (longlong)(int)uVar17;
      uVar19 = uVar18;
      if ((int)(uVar26 - 1) < param_3->ArrayNum) {
        uVar19 = ~(uVar26 - 1) >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar19 = *(uint *)((param_3->AllocatorInstance).Data + lVar24 + -4);
      lVar29 = (longlong)(int)uVar19;
      if ((int)uVar26 < param_3->ArrayNum) {
        uVar18 = ~uVar26 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      uVar18 = *(uint *)((param_3->AllocatorInstance).Data + lVar24);
      uVar15 = 0;
      if ((int)uVar17 < pTVar12->ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar31 = (pTVar12->AllocatorInstance).Data;
      pFVar2 = pFVar31 + lVar27 * 0x18;
      local_110 = *(double *)(pFVar31 + lVar27 * 0x18 + 0x10);
      dVar36 = local_110 * dVar7;
      local_158 = ~uVar19 >> 0x1f;
      dVar33 = *(double *)pFVar2 * dVar7;
      uVar15 = 0;
      if ((int)uVar19 < pTVar12->ArrayNum) {
        uVar15 = local_158;
      }
      dVar34 = *(double *)(pFVar2 + 8) * dVar7;
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar31 = (pTVar12->AllocatorInstance).Data;
      lVar30 = (longlong)(int)uVar18;
      pFVar2 = pFVar31 + lVar29 * 0x18;
      dVar6 = *(double *)pFVar2;
      dVar35 = *(double *)(pFVar2 + 8);
      local_110 = *(double *)(pFVar31 + lVar29 * 0x18 + 0x10);
      dVar38 = local_110 * dVar7;
      uVar15 = 0;
      if ((int)uVar18 < pTVar12->ArrayNum) {
        uVar15 = ~uVar18 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (pTVar12->AllocatorInstance).Data;
      dVar35 = dVar34 - dVar35 * dVar7;
      dVar38 = dVar36 - dVar38;
      local_110 = *(double *)(pFVar2 + lVar30 * 0x18 + 0x10);
      dVar39 = dVar33 - dVar6 * dVar7;
      pFVar2 = pFVar2 + lVar30 * 0x18;
      dVar36 = local_110 * dVar7 - dVar36;
      dVar33 = *(double *)pFVar2 * dVar7 - dVar33;
      dVar34 = *(double *)(pFVar2 + 8) * dVar7 - dVar34;
      dVar6 = dVar36 * dVar35 - dVar34 * dVar38;
      dVar38 = dVar33 * dVar38 - dVar36 * dVar39;
      dVar36 = dVar34 * dVar39 - dVar33 * dVar35;
      dVar33 = dVar38 * dVar38 + dVar6 * dVar6 + dVar36 * dVar36;
      if (dVar11 < dVar33) {
        local_100 = dVar10 / SQRT(dVar33);
        dVar6 = dVar6 * local_100;
        dVar38 = dVar38 * local_100;
        dVar36 = dVar36 * local_100;
      }
      uVar15 = 0;
      if ((int)uVar17 < param_1->ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      lVar27 = lVar27 * 0x20;
      *(double *)(pFVar2 + lVar27) = dVar6 + *(double *)(pFVar2 + lVar27);
      *(double *)(pFVar2 + lVar27 + 8) = dVar38 + *(double *)(pFVar2 + lVar27 + 8);
      *(double *)(pFVar2 + lVar27 + 0x10) = dVar36 + *(double *)(pFVar2 + lVar27 + 0x10);
      *(int *)(pFVar2 + lVar27 + 0x18) = *(int *)(pFVar2 + lVar27 + 0x18) + 1;
      uVar17 = 0;
      if ((int)uVar19 < param_1->ArrayNum) {
        uVar17 = local_158;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      lVar29 = lVar29 * 0x20;
      *(double *)(pFVar2 + lVar29) = dVar6 + *(double *)(pFVar2 + lVar29);
      *(double *)(pFVar2 + lVar29 + 8) = dVar38 + *(double *)(pFVar2 + lVar29 + 8);
      *(double *)(pFVar2 + lVar29 + 0x10) = dVar36 + *(double *)(pFVar2 + lVar29 + 0x10);
      *(int *)(pFVar2 + lVar29 + 0x18) = *(int *)(pFVar2 + lVar29 + 0x18) + 1;
      uVar17 = 0;
      if ((int)uVar18 < param_1->ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      lVar24 = local_138 + 0xc;
      lVar30 = lVar30 * 0x20;
      *(double *)(pFVar2 + lVar30) = dVar6 + *(double *)(pFVar2 + lVar30);
      *(double *)(pFVar2 + lVar30 + 8) = dVar38 + *(double *)(pFVar2 + lVar30 + 8);
      *(double *)(pFVar2 + lVar30 + 0x10) = dVar36 + *(double *)(pFVar2 + lVar30 + 0x10);
      *(int *)(pFVar2 + lVar30 + 0x18) = *(int *)(pFVar2 + lVar30 + 0x18) + 1;
      iVar1 = uVar26 + 1;
      iVar22 = local_148->ArrayNum;
      param_3 = local_148;
      uVar26 = uVar26 + 3;
      local_138 = lVar24;
    } while (iVar1 < iVar22);
  }
  uVar23 = 0;
  TArray<FPackedNormal,TSizedDefaultAllocator<32>_>::SetNumUninitialized(param_4,uVar16 * 2,Default)
  ;
  dVar36 = __real_406fc00000000000;
  dVar7 = __real_3fe0000000000000;
  local_148 = (TArray<unsigned_int,TSizedDefaultAllocator<32>_> *)(longlong)(int)uVar16;
  if (0 < (int)uVar16) {
    local_184 = 0;
    local_170 = 0;
    uVar25 = uVar23;
    uVar28 = uVar23;
    do {
      uVar26 = (uint)uVar28;
      uVar16 = 0;
      if ((int)uVar26 < param_1->ArrayNum) {
        uVar16 = ~uVar26 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (param_1->AllocatorInstance).Data;
      if (*(uint *)(pFVar2 + uVar25 + 0x18) == 0) {
        bVar14 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_1932137153169456533>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\AugmentedReality\\Private\\ARComponent.cpp"
                            ,0x26b,"AccumulatedNormal.NumFaces");
        if (bVar14) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        *(undefined8 *)(pFVar2 + uVar25) = 0;
        pFVar31 = pFVar2 + uVar25 + 8;
        *(undefined8 *)&pFVar31->field_0x0 = 0;
        pFVar32 = pFVar2 + uVar25 + 0x10;
        *(double *)pFVar32 = 1.0;
      }
      else {
        pFVar31 = pFVar2 + uVar25 + 8;
        pFVar32 = pFVar2 + uVar25 + 0x10;
        dVar34 = dVar10 / (double)*(uint *)(pFVar2 + uVar25 + 0x18);
        dVar33 = dVar34 * *(double *)&pFVar31->field_0x0;
        dVar38 = dVar34 * *(double *)(pFVar2 + uVar25);
        dVar34 = dVar34 * *(double *)pFVar32;
        *(double *)&pFVar31->field_0x0 = dVar33;
        *(double *)pFVar32 = dVar34;
        *(double *)(pFVar2 + uVar25) = dVar38;
        dVar33 = dVar33 * dVar33 + dVar38 * dVar38 + dVar34 * dVar34;
        if (dVar11 < dVar33) {
          local_f8 = dVar10 / SQRT(dVar33);
          *(double *)(pFVar2 + uVar25) = dVar38 * local_f8;
          auVar5._8_4_ = SUB84(local_f8 * *(double *)(pFVar31 + 8),0);
          auVar5._0_8_ = local_f8 * *(double *)&pFVar31->field_0x0;
          auVar5._12_4_ = (int)((ulonglong)(local_f8 * *(double *)(pFVar31 + 8)) >> 0x20);
          *(undefined1 (*) [16])pFVar31 = auVar5;
        }
      }
      uVar16 = 0;
      if ((int)uVar26 < local_150->ArrayNum) {
        uVar16 = ~uVar26 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      dVar33 = *(double *)&pFVar31->field_0x0;
      dVar34 = *(double *)(pFVar2 + uVar25);
      dVar38 = *(double *)pFVar32;
      pFVar3 = (local_150->AllocatorInstance).Data;
      local_110 = *(double *)(pFVar3 + local_170 + 0x10);
      pFVar3 = pFVar3 + local_170;
      dVar35 = (param_5->field0_0x0)._s_0.X - *(double *)pFVar3;
      dVar37 = (param_5->field0_0x0)._s_0.Z - local_110;
      dVar6 = (param_5->field0_0x0)._s_0.Y - *(double *)(pFVar3 + 8);
      dVar40 = dVar33 * dVar35 - dVar34 * dVar6;
      dVar35 = dVar34 * dVar37 - dVar38 * dVar35;
      dVar39 = dVar40 * dVar33 - dVar35 * dVar38;
      dVar6 = dVar38 * dVar6 - dVar33 * dVar37;
      dVar33 = dVar35 * dVar34 - dVar6 * dVar33;
      dVar38 = dVar6 * dVar38 - dVar40 * dVar34;
      dVar34 = dVar38 * dVar38 + dVar39 * dVar39 + dVar33 * dVar33;
      if (dVar11 < dVar34) {
        local_f0 = dVar10 / SQRT(dVar34);
        dVar39 = dVar39 * local_f0;
        dVar38 = dVar38 * local_f0;
        dVar33 = dVar33 * local_f0;
      }
      uVar17 = (int)ROUND(dVar39 * dVar36 + dVar7) >> 1;
      uVar16 = 0x7f;
      if ((int)uVar17 < 0x7f) {
        uVar16 = uVar17;
      }
      uVar18 = (int)ROUND(dVar38 * dVar36 + dVar7) >> 1;
      uVar17 = 0x7f;
      if ((int)uVar18 < 0x7f) {
        uVar17 = uVar18;
      }
      uVar19 = (int)ROUND(dVar33 * dVar36 + dVar7) >> 1;
      uVar18 = 0x7f;
      if ((int)uVar19 < 0x7f) {
        uVar18 = uVar19;
      }
      uVar19 = 0x80;
      if (-0x80 < (int)uVar18) {
        uVar19 = uVar18 & 0xff;
      }
      uVar18 = 0x80;
      if (-0x80 < (int)uVar17) {
        uVar18 = uVar17 & 0xff;
      }
      uVar17 = 0x80;
      if (-0x80 < (int)uVar16) {
        uVar17 = uVar16 & 0xff;
      }
      uVar16 = 0;
      if ((int)local_184 < param_4->ArrayNum) {
        uVar16 = ~local_184 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(uint *)((param_4->AllocatorInstance).Data + uVar23 * 8) =
           ((uVar19 | 0x7f00) << 8 | uVar18) << 8 | uVar17;
      uVar17 = (int)ROUND(*(double *)(pFVar2 + uVar25) * dVar36 + dVar7) >> 1;
      uVar16 = 0x7f;
      if ((int)uVar17 < 0x7f) {
        uVar16 = uVar17;
      }
      uVar18 = (int)ROUND(*(double *)&pFVar31->field_0x0 * dVar36 + dVar7) >> 1;
      uVar17 = 0x7f;
      if ((int)uVar18 < 0x7f) {
        uVar17 = uVar18;
      }
      uVar19 = (int)ROUND(*(double *)pFVar32 * dVar36 + dVar7) >> 1;
      uVar18 = 0x7f;
      if ((int)uVar19 < 0x7f) {
        uVar18 = uVar19;
      }
      uVar19 = 0x80;
      if (-0x80 < (int)uVar18) {
        uVar19 = uVar18 & 0xff;
      }
      uVar18 = 0x80;
      if (-0x80 < (int)uVar17) {
        uVar18 = uVar17 & 0xff;
      }
      uVar17 = 0x80;
      if (-0x80 < (int)uVar16) {
        uVar17 = uVar16 & 0xff;
      }
      uVar16 = 0;
      if ((int)(local_184 + 1) < param_4->ArrayNum) {
        uVar16 = ~(local_184 + 1) >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      local_170 = local_170 + 0x18;
      local_184 = local_184 + 2;
      uVar28 = (ulonglong)(uVar26 + 1);
      uVar25 = uVar25 + 0x20;
      *(uint *)((param_4->AllocatorInstance).Data + uVar23 * 8 + 4) =
           ((uVar19 | 0x7f00) << 8 | uVar18) << 8 | uVar17;
      uVar23 = uVar23 + 1;
    } while ((longlong)uVar23 < (longlong)local_148);
  }
  if (bVar9) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar8) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar13) {
    FThreadStats::AddMessage(local_178,CycleScopeEnd);
  }
  return;
}

