// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 1

// Generate @ 1436039d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMeshShapeGenerator * __thiscall
UE::Geometry::FGridBoxMeshGenerator::Generate(FGridBoxMeshGenerator *this)

{
  undefined8 uVar1;
  undefined4 uVar2;
  code *pcVar3;
  TOrientedBox3<double> *pTVar4;
  float fVar5;
  ForAnyElementType FVar6;
  undefined8 uVar7;
  float fVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FMeshShapeGenerator *pFVar13;
  TVector<double> *pTVar14;
  longlong lVar15;
  FScriptContainerElement *pFVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  double *pdVar21;
  uint uVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  FGridBoxMeshGenerator *pFVar29;
  uint uVar30;
  longlong lVar31;
  uint uVar32;
  uint uVar33;
  longlong lVar34;
  double *pdVar35;
  FScriptContainerElement *pFVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  float fVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  uint uVar45;
  uint uVar46;
  undefined1 auStackY_388 [32];
  int local_348;
  int local_340 [4];
  uint local_330;
  ForAnyElementType local_328;
  int local_320 [4];
  longlong local_310;
  longlong local_308;
  uint local_300;
  int local_2fc;
  uint local_2f8;
  FGridBoxMeshGenerator *local_2f0;
  double *local_2e8;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  uint local_2d4;
  longlong local_2d0;
  longlong local_2c8;
  float local_2c0 [2];
  longlong local_2b8;
  int local_2b0;
  uint local_2ac;
  uint local_2a8;
  uint local_2a4;
  int local_2a0 [4];
  undefined8 local_290;
  float local_288;
  uint local_280 [4];
  longlong local_270;
  int local_268;
  longlong local_260;
  int local_258 [4];
  int local_248 [4];
  undefined4 local_238;
  undefined4 uStack_234;
  int local_228;
  int iStack_224;
  int local_218;
  int iStack_214;
  undefined4 local_208;
  undefined4 uStack_204;
  int local_1f8;
  int iStack_1f4;
  int local_1e8;
  int iStack_1e4;
  uint local_1d8 [4];
  int local_1c8 [4];
  int local_1b8 [4];
  double local_1a8 [4];
  double dStack_188;
  double local_180;
  double local_178;
  double dStack_170;
  double local_168;
  double local_160;
  double dStack_158;
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  TVector<double>_u_0 local_130;
  TVector<double>_u_0 local_118;
  TVector<double>_u_0 local_100;
  TVector<double> local_e8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  int local_c0;
  int local_bc;
  ulonglong local_b8;
  
  dVar42 = __real_3ff0000000000000;
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_388;
  uVar1 = *(undefined8 *)&(this->EdgeVertices).field0_0x0;
  iVar11 = (this->EdgeVertices).field0_0x0._s_0.C;
  local_340[0] = (int)uVar1;
  local_340[1] = (int)((ulonglong)uVar1 >> 0x20);
  iVar12 = local_340[0];
  if (local_340[0] < 2) {
    iVar12 = 2;
  }
  iVar25 = local_340[1];
  if (local_340[1] < 2) {
    iVar25 = 2;
  }
  local_258[0] = iVar12 + -1;
  local_340[1] = iVar25;
  local_340[0] = iVar12;
  if (iVar11 < 2) {
    iVar11 = 2;
  }
  local_258[1] = iVar25 + -1;
  local_248[0] = iVar12 + -2;
  local_258[2] = iVar11 + -1;
  local_248[1] = iVar25 + -2;
  local_248[2] = iVar11 + -2;
  local_1a8[0] = __real_3ff0000000000000 / (double)local_258[0];
  local_1a8[1] = __real_3ff0000000000000 / (double)local_258[1];
  local_1a8[2] = __real_3ff0000000000000 / (double)local_258[2];
  iVar24 = ((iVar25 + iVar12) * iVar11 + iVar25 * iVar12) * 2;
  local_340[2] = iVar11;
  local_2f0 = this;
  FMeshShapeGenerator::SetBufferSizes
            ((FMeshShapeGenerator *)this,
             ((local_248[1] + local_248[0]) * local_248[2] +
              (local_248[1] + local_248[0] + iVar11) * 2 + local_248[1] * local_248[0]) * 2,
             ((local_258[1] + local_258[0]) * local_258[2] + local_258[1] * local_258[0]) * 4,iVar24
             ,iVar24);
  local_1d8[0] = iVar11 * iVar25;
  local_1d8[1] = iVar11 * iVar12;
  local_2a0[0] = 1;
  local_2a0[1] = 2;
  local_2a0[2] = 0;
  local_d0 = ___xmm_00000002000000000000000200000001;
  uStack_c8 = _UNK_150aa88a8;
  local_c0 = 0;
  local_bc = 1;
  local_328.Data = (FScriptContainerElement *)0x0;
  local_320[0] = 0;
  local_320[1] = 0;
  local_1d8[2] = iVar25 * iVar12;
  iVar11 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x10,8,6,&local_328,local_320,local_320 + 1);
  pFVar16 = local_328.Data + (longlong)iVar11 * 0x10;
  lVar31 = 0;
  *(undefined8 *)&pFVar16->field_0x0 = 0;
  *(undefined8 *)(pFVar16 + 8) = 0;
  *(undefined8 *)&pFVar16[0x10].field_0x0 = 0;
  *(undefined8 *)(pFVar16 + 0x18) = 0;
  *(undefined8 *)&pFVar16[0x20].field_0x0 = 0;
  *(undefined8 *)(pFVar16 + 0x28) = 0;
  *(undefined8 *)&pFVar16[0x30].field_0x0 = 0;
  *(undefined8 *)(pFVar16 + 0x38) = 0;
  *(undefined8 *)&pFVar16[0x40].field_0x0 = 0;
  *(undefined8 *)(pFVar16 + 0x48) = 0;
  *(undefined8 *)&pFVar16[0x50].field_0x0 = 0;
  *(undefined8 *)(pFVar16 + 0x58) = 0;
  do {
    uVar32 = *(int *)((longlong)local_2a0 + lVar31) * 2;
    uVar18 = *(uint *)((longlong)local_1d8 + lVar31);
    uVar17 = 0;
    if ((int)uVar32 < local_320[0]) {
      uVar17 = ~uVar32 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar13;
    }
    pFVar36 = local_328.Data + (longlong)(int)uVar32 * 0x10;
    iVar11 = *(int *)(pFVar36 + 8);
    pFVar16 = pFVar36 + 8;
    if (iVar11 < (int)uVar18) {
      iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar18 - iVar11,(ForAnyElementType *)pFVar36,(int *)pFVar16,
                          (int *)(pFVar36 + 0xc));
      memset(*(FScriptContainerElement **)&pFVar36->field_0x0 + (longlong)iVar12 * 4,0,
             (longlong)(int)(uVar18 - iVar11) << 2);
    }
    else {
      if ((int)uVar18 < 0) goto LAB_1436060d4;
      if ((int)uVar18 < iVar11) {
        uVar17 = iVar11 - uVar18;
        if (((int)(uVar18 | uVar17) < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar3 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
          return pFVar13;
        }
        if (uVar17 != 0) {
          iVar11 = (*(int *)pFVar16 - uVar17) - uVar18;
          if (iVar11 != 0) {
            memmove(*(FScriptContainerElement **)&pFVar36->field_0x0 + (longlong)(int)uVar18 * 4,
                    *(FScriptContainerElement **)&pFVar36->field_0x0 + (longlong)(int)uVar18 * 4 +
                    (longlong)(int)uVar17 * 4,(longlong)iVar11 << 2);
          }
          *(uint *)pFVar16 = *(int *)pFVar16 - uVar17;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)pFVar36,*(int *)pFVar16,(int *)(pFVar36 + 0xc));
        }
      }
    }
    uVar32 = uVar32 + 1;
    uVar17 = 0;
    if ((int)uVar32 < local_320[0]) {
      uVar17 = ~uVar32 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar9)) {
      pcVar3 = (code *)swi(3);
      pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
      return pFVar13;
    }
    pFVar36 = local_328.Data + (longlong)(int)uVar32 * 0x10;
    iVar11 = *(int *)(pFVar36 + 8);
    pFVar16 = pFVar36 + 8;
    if (iVar11 < (int)uVar18) {
      iVar12 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (4,4,uVar18 - iVar11,(ForAnyElementType *)pFVar36,(int *)pFVar16,
                          (int *)(pFVar36 + 0xc));
      memset(*(FScriptContainerElement **)&pFVar36->field_0x0 + (longlong)iVar12 * 4,0,
             (longlong)(int)(uVar18 - iVar11) << 2);
    }
    else {
      if ((int)uVar18 < 0) {
LAB_1436060d4:
                    /* WARNING: Subroutine does not return */
        Core::Private::OnInvalidArrayNum((ulonglong)uVar18);
      }
      if ((int)uVar18 < iVar11) {
        uVar32 = iVar11 - uVar18;
        if (((int)(uVar18 | uVar32) < 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar9)) {
          pcVar3 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
          return pFVar13;
        }
        if (uVar32 != 0) {
          iVar11 = (*(int *)pFVar16 - uVar32) - uVar18;
          if (iVar11 != 0) {
            memmove(*(FScriptContainerElement **)&pFVar36->field_0x0 + (longlong)(int)uVar18 * 4,
                    *(FScriptContainerElement **)&pFVar36->field_0x0 + (longlong)(int)uVar18 * 4 +
                    (longlong)(int)uVar32 * 4,(longlong)iVar11 << 2);
          }
          *(uint *)pFVar16 = *(int *)pFVar16 - uVar32;
          Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,(ForAnyElementType *)pFVar36,*(int *)pFVar16,(int *)(pFVar36 + 0xc));
        }
      }
    }
    lVar31 = lVar31 + 4;
    if (0xb < lVar31) {
      uVar18 = 0;
      lVar31 = 0;
      uVar32 = (uint)__xmm_80000000000000008000000000000000;
      uVar17 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
      pTVar4 = &local_2f0->Box;
      do {
        local_130._s_0.X = (double)*(undefined8 *)&(local_2f0->Box).Extents.field0_0x0;
        uVar22 = (uint)((uVar18 & 2) != 0);
        if (uVar22 == (uVar18 & 1)) {
          local_130._s_0.X =
               (double)CONCAT44((uint)((ulonglong)local_130._s_0.X >> 0x20) ^ uVar17,
                                SUB84(local_130._s_0.X,0) ^ uVar32);
        }
        local_130._s_0.Y = *(double *)((longlong)&(local_2f0->Box).Extents.field0_0x0 + 8);
        if ((uVar18 & 2) == 0) {
          local_130._s_0.Y =
               (double)CONCAT44((uint)((ulonglong)local_130._s_0.Y >> 0x20) ^ uVar17,
                                SUB84(local_130._s_0.Y,0) ^ uVar32);
        }
        local_130._s_0.Z = *(double *)((longlong)&(local_2f0->Box).Extents.field0_0x0 + 0x10);
        if (uVar18 < 4) {
          local_130._s_0.Z =
               (double)CONCAT44((uint)((ulonglong)local_130._s_0.Z >> 0x20) ^ uVar17,
                                SUB84(local_130._s_0.Z,0) ^ uVar32);
        }
        pTVar14 = operator*<double>(&local_e8,&(pTVar4->Frame).Rotation,
                                    (TVector<double> *)&local_130._s_0);
        dVar41 = (pTVar14->field0_0x0)._s_0.X;
        dVar43 = (pTVar14->field0_0x0)._s_0.Y;
        dVar37 = (pTVar14->field0_0x0)._s_0.Z;
        dVar39 = (local_2f0->Box).Frame.Origin.field0_0x0._s_0.X;
        dVar38 = (local_2f0->Box).Frame.Origin.field0_0x0._s_0.Y;
        dVar44 = (local_2f0->Box).Frame.Origin.field0_0x0._s_0.Z;
        if (((int)local_2f0->_padding_ <= (int)uVar18) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
          return pFVar13;
        }
        local_280[0] = uVar22 ^ uVar18 & 1;
        pFVar16 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                   &local_2f0->_padding_)->AllocatorInstance).Data;
        *(double *)(pFVar16 + lVar31) = dVar41 + dVar39;
        pFVar16 = pFVar16 + lVar31 + 8;
        *(double *)pFVar16 = dVar43 + dVar38;
        *(double *)(pFVar16 + 8) = dVar37 + dVar44;
        local_280[2] = (uint)(3 < uVar18);
        local_280[1] = uVar18 >> 1 & 1;
        uVar22 = local_280[0] + local_2a0[0] * 2;
        uVar33 = (local_340[uStack_c8._4_4_] + -1) * local_280[uStack_c8._4_4_] *
                 local_340[(int)local_d0] +
                 (local_340[(int)local_d0] + -1) * local_280[(int)local_d0];
        uVar30 = 0;
        if ((int)uVar22 < local_320[0]) {
          uVar30 = ~uVar22 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
          return pFVar13;
        }
        FVar6.Data = local_328.Data;
        uVar30 = 0;
        if ((int)uVar33 < *(int *)(local_328.Data + (longlong)(int)uVar22 * 0x10 + 8)) {
          uVar30 = ~uVar33 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
          return pFVar13;
        }
        *(uint *)(*(longlong *)&FVar6.Data[(longlong)(int)uVar22 * 0x10].field_0x0 +
                 (longlong)(int)uVar33 * 4) = uVar18;
        uVar22 = local_280[1] + local_2a0[1] * 2;
        uVar33 = (local_340[local_c0] + -1) * local_280[local_c0] * local_340[local_d0._4_4_] +
                 (local_340[local_d0._4_4_] + -1) * local_280[local_d0._4_4_];
        uVar30 = 0;
        if ((int)uVar22 < local_320[0]) {
          uVar30 = ~uVar22 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
          return pFVar13;
        }
        FVar6.Data = local_328.Data;
        uVar30 = 0;
        if ((int)uVar33 < *(int *)(local_328.Data + (longlong)(int)uVar22 * 0x10 + 8)) {
          uVar30 = ~uVar33 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
          return pFVar13;
        }
        *(uint *)(*(longlong *)&FVar6.Data[(longlong)(int)uVar22 * 0x10].field_0x0 +
                 (longlong)(int)uVar33 * 4) = uVar18;
        uVar22 = local_280[2] + local_2a0[2] * 2;
        uVar33 = (local_340[local_bc] + -1) * local_280[local_bc] * local_340[(int)uStack_c8] +
                 (local_340[(int)uStack_c8] + -1) * local_280[(int)uStack_c8];
        uVar30 = 0;
        if ((int)uVar22 < local_320[0]) {
          uVar30 = ~uVar22 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
          return pFVar13;
        }
        FVar6.Data = local_328.Data;
        uVar30 = 0;
        if ((int)uVar33 < *(int *)(local_328.Data + (longlong)(int)uVar22 * 0x10 + 8)) {
          uVar30 = ~uVar33 >> 0x1f;
        }
        if ((uVar30 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar3 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
          return pFVar13;
        }
        lVar31 = lVar31 + 0x18;
        *(uint *)(*(longlong *)&FVar6.Data[(longlong)(int)uVar22 * 0x10].field_0x0 +
                 (longlong)(int)uVar33 * 4) = uVar18;
        uVar18 = uVar18 + 1;
      } while ((int)uVar18 < 8);
      local_2e8 = local_1a8;
      uVar18 = 8;
      local_260 = 3;
      lVar31 = 8;
      local_310 = 0;
      local_270 = 3;
      do {
        local_2b0 = *(int *)((longlong)local_340 + local_310);
        if (2 < *(int *)((longlong)local_340 + local_310)) {
          uVar32 = *(int *)((longlong)local_2a0 + local_310) * 2;
          local_348 = 0;
          local_2d8 = ~uVar32 >> 0x1f;
          local_2b8 = ((longlong)(int)uVar32 + 1) * 0x10;
          local_2d0 = (longlong)(int)uVar32 << 4;
          local_2a4 = ~(uVar32 + 1) >> 0x1f;
          do {
            local_330 = 0;
            local_2d4 = local_348 + local_2a0[*(int *)((longlong)&local_d0 + local_310)] * 2;
            do {
              lVar34 = local_2d0;
              iVar11 = *(int *)((longlong)&uStack_c8 + local_310 + 4);
              uVar30 = local_330 + local_2a0[iVar11] * 2;
              local_2a8 = uVar30;
              uVar22 = (local_340[iVar11] + -1) *
                       local_340[*(int *)((longlong)&local_d0 + local_310)] * local_330 +
                       (local_340[*(int *)((longlong)&local_d0 + local_310)] + -1) * local_348;
              uVar17 = 0;
              if ((int)uVar32 < local_320[0]) {
                uVar17 = local_2d8;
              }
              if ((uVar17 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar3 = (code *)swi(3);
                pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                return pFVar13;
              }
              FVar6.Data = local_328.Data;
              uVar17 = 0;
              if ((int)uVar22 < *(int *)(local_328.Data + lVar34 + 8)) {
                uVar17 = ~uVar22 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar3 = (code *)swi(3);
                pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                return pFVar13;
              }
              uVar17 = *(uint *)(*(longlong *)(FVar6.Data + local_2d0) + (longlong)(int)uVar22 * 4);
              uVar33 = 0;
              if ((int)uVar17 < (int)local_2f0->_padding_) {
                uVar33 = ~uVar17 >> 0x1f;
              }
              if ((uVar33 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar3 = (code *)swi(3);
                pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                return pFVar13;
              }
              pFVar36 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                         &local_2f0->_padding_)->AllocatorInstance).Data;
              pFVar16 = pFVar36 + (longlong)(int)uVar17 * 0x18;
              local_180 = *(double *)(pFVar36 + (longlong)(int)uVar17 * 0x18 + 0x10);
              local_1a8[3] = *(double *)pFVar16;
              dStack_188 = *(double *)(pFVar16 + 8);
              uVar17 = 0;
              if ((int)(uVar32 + 1) < local_320[0]) {
                uVar17 = local_2a4;
              }
              if ((uVar17 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar3 = (code *)swi(3);
                pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                return pFVar13;
              }
              FVar6.Data = local_328.Data;
              uVar17 = 0;
              if ((int)uVar22 < *(int *)(local_328.Data + local_2b8 + 8)) {
                uVar17 = ~uVar22 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar3 = (code *)swi(3);
                pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                return pFVar13;
              }
              uVar17 = *(uint *)(*(longlong *)(FVar6.Data + local_2b8) + (longlong)(int)uVar22 * 4);
              uVar22 = 0;
              if ((int)uVar17 < (int)local_2f0->_padding_) {
                uVar22 = ~uVar17 >> 0x1f;
              }
              if ((uVar22 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar9)) {
                pcVar3 = (code *)swi(3);
                pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                return pFVar13;
              }
              pFVar36 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                         &local_2f0->_padding_)->AllocatorInstance).Data;
              pFVar16 = pFVar36 + (longlong)(int)uVar17 * 0x18;
              local_2c8 = (longlong)(int)local_2d4;
              local_168 = *(double *)(pFVar36 + (longlong)(int)uVar17 * 0x18 + 0x10);
              local_308 = (longlong)(int)local_2d4 << 4;
              local_2ac = ~uVar30 >> 0x1f;
              lVar34 = lVar31 * 0x18;
              local_178 = *(double *)pFVar16;
              dStack_170 = *(double *)(pFVar16 + 8);
              local_2e0 = ~local_2d4 >> 0x1f;
              iVar11 = 1;
              do {
                uVar17 = local_2e0;
                pFVar29 = local_2f0;
                dVar41 = (double)iVar11 * *local_2e8;
                uVar22 = 0;
                if ((int)uVar18 < (int)local_2f0->_padding_) {
                  uVar22 = ~uVar18 >> 0x1f;
                }
                dVar39 = dVar42 - dVar41;
                dVar37 = dVar41 * local_178;
                dVar44 = dVar39 * local_1a8[3];
                dVar43 = dVar39 * dStack_188;
                dVar39 = dVar39 * local_180;
                dVar38 = dVar41 * dStack_170;
                dVar41 = dVar41 * local_168;
                if ((uVar22 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                  return pFVar13;
                }
                pFVar16 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                           &pFVar29->_padding_)->AllocatorInstance).Data;
                *(double *)(pFVar16 + lVar34) = dVar44 + dVar37;
                *(double *)(pFVar16 + lVar34 + 8) = dVar43 + dVar38;
                *(double *)(pFVar16 + lVar34 + 0x10) = dVar39 + dVar41;
                iVar12 = *(int *)((longlong)&local_d0 +
                                 (longlong)*(int *)((longlong)&local_d0 + local_310) * 4);
                uVar33 = local_330 * local_258[iVar12] + iVar11 * local_340[iVar12];
                uVar22 = 0;
                if ((int)local_2d4 < local_320[0]) {
                  uVar22 = uVar17;
                }
                if ((uVar22 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                  return pFVar13;
                }
                FVar6.Data = local_328.Data;
                uVar17 = 0;
                if ((int)uVar33 < *(int *)(local_328.Data + local_308 + 8)) {
                  uVar17 = ~uVar33 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                  return pFVar13;
                }
                *(uint *)(*(longlong *)(FVar6.Data + local_308) + (longlong)(int)uVar33 * 4) =
                     uVar18;
                lVar15 = (longlong)*(int *)((longlong)&uStack_c8 + local_310 + 4);
                uVar22 = local_258[*(int *)((longlong)&uStack_c8 + lVar15 * 4 + 4)] *
                         local_340[*(int *)((longlong)&local_d0 + lVar15 * 4)] * local_348 + iVar11;
                uVar17 = 0;
                if ((int)local_2a8 < local_320[0]) {
                  uVar17 = local_2ac;
                }
                if ((uVar17 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                  return pFVar13;
                }
                FVar6.Data = local_328.Data;
                uVar17 = 0;
                if ((int)uVar22 < *(int *)(local_328.Data + (longlong)(int)uVar30 * 0x10 + 8)) {
                  uVar17 = ~uVar22 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                  return pFVar13;
                }
                lVar31 = lVar31 + 1;
                lVar34 = lVar34 + 0x18;
                *(uint *)(*(longlong *)&FVar6.Data[(longlong)(int)uVar30 * 0x10].field_0x0 +
                         (longlong)(int)uVar22 * 4) = uVar18;
                uVar18 = uVar18 + 1;
                iVar12 = iVar11 + 2;
                iVar11 = iVar11 + 1;
              } while (iVar12 < local_2b0);
              local_330 = local_330 + 1;
            } while ((int)local_330 < 2);
            local_348 = local_348 + 1;
          } while (local_348 < 2);
        }
        local_2e8 = local_2e8 + 1;
        local_270 = local_270 + -1;
        local_310 = local_310 + 4;
      } while (local_270 != 0);
      lVar34 = (longlong)(int)uVar18;
      lVar31 = 0;
      local_2b8 = lVar34;
      do {
        lVar26 = (longlong)*(int *)((longlong)&local_d0 + lVar31);
        lVar15 = (longlong)*(int *)((longlong)&uStack_c8 + lVar31 + 4);
        uVar32 = *(int *)((longlong)local_2a0 + lVar31) * 2;
        if (0 < local_248[lVar26] * local_248[lVar15]) {
          local_310 = (longlong)(int)uVar32;
          lVar28 = local_310 << 4;
          local_2d0 = 2;
          do {
            local_330 = 1;
            if (2 < local_340[(int)lVar26]) {
              local_2c8 = 4;
              uVar17 = ~uVar32 >> 0x1f;
              do {
                uVar22 = local_330;
                uVar33 = (local_340[(int)lVar15] + -1) *
                         local_340[*(int *)((longlong)&local_d0 + lVar31)] + local_330;
                uVar30 = 0;
                if ((int)uVar32 < local_320[0]) {
                  uVar30 = uVar17;
                }
                if ((uVar30 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                  return pFVar13;
                }
                FVar6.Data = local_328.Data;
                uVar30 = 0;
                if ((int)uVar22 < *(int *)(local_328.Data + lVar28 + 8)) {
                  uVar30 = ~uVar22 >> 0x1f;
                }
                if ((uVar30 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                  return pFVar13;
                }
                uVar30 = *(uint *)(local_2c8 + *(longlong *)(FVar6.Data + lVar28));
                uVar45 = 0;
                if ((int)uVar30 < (int)local_2f0->_padding_) {
                  uVar45 = ~uVar30 >> 0x1f;
                }
                if ((uVar45 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                  return pFVar13;
                }
                pFVar36 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                           &local_2f0->_padding_)->AllocatorInstance).Data;
                pFVar16 = pFVar36 + (longlong)(int)uVar30 * 0x18;
                local_160 = *(double *)pFVar16;
                dStack_158 = *(double *)(pFVar16 + 8);
                uVar45 = 0;
                if ((int)uVar32 < local_320[0]) {
                  uVar45 = uVar17;
                }
                local_150 = *(double *)(pFVar36 + (longlong)(int)uVar30 * 0x18 + 0x10);
                if ((uVar45 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                  return pFVar13;
                }
                FVar6.Data = local_328.Data;
                uVar30 = 0;
                if ((int)uVar33 < *(int *)(local_328.Data + lVar28 + 8)) {
                  uVar30 = ~uVar33 >> 0x1f;
                }
                if ((uVar30 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                  return pFVar13;
                }
                pFVar29 = local_2f0;
                uVar30 = *(uint *)(*(longlong *)(FVar6.Data + lVar28) + (longlong)(int)uVar33 * 4);
                uVar33 = 0;
                if ((int)uVar30 < (int)local_2f0->_padding_) {
                  uVar33 = ~uVar30 >> 0x1f;
                }
                if ((uVar33 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar3 = (code *)swi(3);
                  pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                  return pFVar13;
                }
                pFVar36 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                           &pFVar29->_padding_)->AllocatorInstance).Data;
                lVar15 = (longlong)*(int *)((longlong)&uStack_c8 + lVar31 + 4);
                pFVar16 = pFVar36 + (longlong)(int)uVar30 * 0x18;
                local_148 = *(double *)pFVar16;
                dStack_140 = *(double *)(pFVar16 + 8);
                local_138 = *(double *)(pFVar36 + (longlong)(int)uVar30 * 0x18 + 0x10);
                if (2 < local_340[lVar15]) {
                  lVar26 = lVar34 * 0x18;
                  iVar11 = 1;
                  do {
                    iVar12 = (int)lVar15;
                    if (((iVar12 < 0) || (2 < iVar12)) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("IsValidIndex(Index)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                           ,0x7a2,L""), bVar9)) {
                      pcVar3 = (code *)swi(3);
                      pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                      return pFVar13;
                    }
                    pFVar29 = local_2f0;
                    dVar41 = (double)iVar11 * local_1a8[iVar12];
                    uVar22 = 0;
                    if ((int)uVar18 < (int)local_2f0->_padding_) {
                      uVar22 = ~uVar18 >> 0x1f;
                    }
                    dVar39 = dVar42 - dVar41;
                    dVar37 = dVar41 * local_148;
                    dVar44 = dVar39 * local_160;
                    dVar43 = dVar39 * dStack_158;
                    dVar39 = dVar39 * local_150;
                    dVar38 = dVar41 * dStack_140;
                    dVar41 = dVar41 * local_138;
                    if ((uVar22 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar3 = (code *)swi(3);
                      pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                      return pFVar13;
                    }
                    pFVar16 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                               &pFVar29->_padding_)->AllocatorInstance).Data;
                    *(double *)(pFVar16 + lVar26) = dVar44 + dVar37;
                    *(double *)(pFVar16 + lVar26 + 8) = dVar43 + dVar38;
                    *(double *)(pFVar16 + lVar26 + 0x10) = dVar39 + dVar41;
                    uVar22 = 0;
                    if ((int)uVar32 < local_320[0]) {
                      uVar22 = uVar17;
                    }
                    if ((uVar22 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar3 = (code *)swi(3);
                      pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                      return pFVar13;
                    }
                    FVar6.Data = local_328.Data;
                    uVar30 = iVar11 * local_340[*(int *)((longlong)&local_d0 + lVar31)] + local_330;
                    uVar22 = 0;
                    if ((int)uVar30 < *(int *)(local_328.Data + lVar28 + 8)) {
                      uVar22 = ~uVar30 >> 0x1f;
                    }
                    if ((uVar22 == 0) &&
                       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                          ("(Index >= 0) & (Index < ArrayNum)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x447,
                                           L"Array index out of bounds: %lld into an array of size %lld"
                                          ), bVar9)) {
                      pcVar3 = (code *)swi(3);
                      pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                      return pFVar13;
                    }
                    lVar26 = lVar26 + 0x18;
                    lVar34 = local_2b8 + 1;
                    lVar15 = (longlong)*(int *)((longlong)&uStack_c8 + lVar31 + 4);
                    local_2b8 = lVar34;
                    *(uint *)(*(longlong *)(FVar6.Data + lVar28) + (longlong)(int)uVar30 * 4) =
                         uVar18;
                    uVar18 = uVar18 + 1;
                    iVar12 = iVar11 + 2;
                    iVar11 = iVar11 + 1;
                    uVar22 = local_330;
                  } while (iVar12 < local_340[lVar15]);
                }
                lVar26 = (longlong)*(int *)((longlong)&local_d0 + lVar31);
                local_2c8 = local_2c8 + 4;
                local_330 = uVar22 + 1;
              } while ((int)(uVar22 + 2) < local_340[lVar26]);
            }
            uVar32 = uVar32 + 1;
            local_310 = local_310 + 1;
            lVar28 = lVar28 + 0x10;
            local_2d0 = local_2d0 + -1;
          } while (local_2d0 != 0);
        }
        fVar5 = __real_3f000000;
        uVar17 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        uVar32 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        dVar41 = __real_3fe0000000000000;
        lVar31 = lVar31 + 4;
        local_260 = local_260 + -1;
      } while (local_260 != 0);
      dVar42 = (local_2f0->Box).Extents.field0_0x0._s_0.X;
      dVar39 = (local_2f0->Box).Extents.field0_0x0._s_0.Y;
      dVar43 = (local_2f0->Box).Extents.field0_0x0._s_0.Z;
      fVar40 = __real_3f800000;
      if (local_2f0->bScaleUVByAspectRatio != false) {
        dVar39 = dVar39 + dVar39;
        dVar42 = dVar42 + dVar42;
        dVar43 = dVar43 + dVar43;
        dVar39 = (double)CONCAT44((uint)((ulonglong)dVar39 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar39,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        dVar42 = (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar42,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        if (dVar39 <= dVar42) {
          dVar39 = dVar42;
        }
        dVar42 = (double)CONCAT44((uint)((ulonglong)dVar43 >> 0x20) &
                                  __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                  SUB84(dVar43,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
        if (dVar39 <= dVar42) {
          dVar39 = dVar42;
        }
        fVar40 = __real_3f800000 / (float)dVar39;
      }
      uVar18 = 0;
      local_2f8 = 0;
      local_2e0 = 0;
      local_2d8 = 0;
      local_2c8 = 0;
      local_2d4 = 0;
      local_308 = 0;
      local_2d0 = 0;
      local_2b8 = 0;
      pFVar29 = local_2f0;
      do {
        uVar30 = local_2f8;
        lVar31 = local_308;
        uVar22 = *(uint *)((longlong)&local_d0 + local_308 * 4);
        local_2a4 = local_2a0[local_308] * 2;
        local_1c8[0] = -1;
        local_1c8[1] = 1;
        local_1c8[2] = 1;
        local_1b8[0] = -1;
        local_1b8[1] = -1;
        local_1b8[2] = 1;
        if ((2 < uVar22) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                               ,0x7a2,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
          return pFVar13;
        }
        uVar1 = *(undefined8 *)
                 ((longlong)&(pFVar29->Box).Extents.field0_0x0 + (longlong)(int)uVar22 * 8);
        uVar22 = *(uint *)((longlong)&uStack_c8 + lVar31 * 4 + 4);
        uVar33 = (uint)uVar1 & uVar32;
        uVar45 = (uint)((ulonglong)uVar1 >> 0x20) & uVar17;
        if ((2 < uVar22) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                               ,0x7a2,L""), bVar9)) {
          pcVar3 = (code *)swi(3);
          pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
          return pFVar13;
        }
        uVar1 = *(undefined8 *)
                 ((longlong)&(pFVar29->Box).Extents.field0_0x0 + (longlong)(int)uVar22 * 8);
        pdVar21 = (double *)(longlong)(int)local_2a4;
        uVar22 = (uint)uVar1 & uVar32;
        uVar46 = (uint)((ulonglong)uVar1 >> 0x20) & uVar17;
        local_320[2] = 0;
        local_2a8 = 0;
        pdVar35 = pdVar21;
        do {
          iVar12 = local_320[2];
          local_290 = 0;
          local_288 = 0.0;
          *(float *)((longlong)&local_290 + local_2b8) = (float)(int)(local_2a8 - 1);
          local_118._s_0.X = (double)(float)local_290;
          local_118._s_0.Y = (double)local_290._4_4_;
          local_118._s_0.Z = (double)local_288;
          local_2e8 = pdVar35;
          operator*<double>((TVector<double> *)&local_100._s_0,&(pFVar29->Box).Frame.Rotation,
                            (TVector<double> *)&local_118._s_0);
          uVar27 = (int)pdVar21 + iVar12;
          local_300 = uVar27;
          iVar11 = *(int *)((longlong)&local_d0 + local_308 * 4);
          local_2dc = uVar30;
          local_348 = 0;
          local_290 = CONCAT44((float)local_100._s_0.Y,(float)local_100._s_0.X);
          local_288 = (float)local_100._s_0.Z;
          lVar31 = local_308;
          if (0 < local_340[iVar11]) {
            do {
              pdVar35 = local_2e8;
              iVar11 = 0;
              if (0 < local_340[*(int *)((longlong)&uStack_c8 + lVar31 * 4 + 4)]) {
                local_310 = 0;
                if (local_2d4 == 1) {
                  local_310 = 4;
                }
                local_270 = 0;
                uVar18 = ~uVar27;
                if (local_2d4 != 1) {
                  local_270 = 4;
                }
                lVar34 = local_2d0 * 0xc;
                do {
                  lVar26 = local_270;
                  lVar15 = local_310;
                  uVar30 = *(uint *)((longlong)&local_d0 + lVar31 * 4);
                  if ((2 < uVar30) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValidIndex(Index)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                         ,0x7a2,L""), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  uVar27 = *(uint *)((longlong)&uStack_c8 + local_308 * 4 + 4);
                  *(float *)((longlong)local_2c0 + lVar15) =
                       (float)((double)local_348 * local_1a8[(int)uVar30] - dVar41);
                  if ((2 < uVar27) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("IsValidIndex(Index)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                                         ,0x7a2,L""), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  pFVar29 = local_2f0;
                  iVar12 = local_1c8[local_308];
                  *(float *)((longlong)local_2c0 + lVar26) =
                       (float)((double)iVar11 * local_1a8[(int)uVar27] - dVar41);
                  local_2c0[0] = local_2c0[0] * (float)((local_320[2] * 2 + -1) * iVar12);
                  local_2c0[1] = local_2c0[1] * (float)local_1b8[local_308];
                  *(float *)((longlong)local_2c0 + lVar15) =
                       (float)((double)(*(float *)((longlong)local_2c0 + lVar15) + fVar5) *
                              ((double)CONCAT44(uVar45,uVar33) + (double)CONCAT44(uVar45,uVar33)) *
                              (double)fVar40);
                  lVar31 = local_2f0->_padding_;
                  *(float *)((longlong)local_2c0 + lVar26) =
                       (float)((double)(*(float *)((longlong)local_2c0 + lVar26) + fVar5) *
                              ((double)CONCAT44(uVar46,uVar22) + (double)CONCAT44(uVar46,uVar22)) *
                              (double)fVar40);
                  uVar1 = CONCAT44(local_2c0[1],local_2c0[0]);
                  uVar27 = ~local_2f8 >> 0x1f;
                  uVar30 = 0;
                  if ((int)local_2f8 < (int)lVar31) {
                    uVar30 = uVar27;
                  }
                  if ((uVar30 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  fVar8 = local_288;
                  uVar7 = local_290;
                  *(undefined8 *)
                   ((((TArray<UE::Math::TVector2<float>,TSizedDefaultAllocator<32>_> *)
                     &pFVar29->_padding_)->AllocatorInstance).Data + local_2d0 * 8) = uVar1;
                  uVar30 = 0;
                  if ((int)local_2f8 < (int)pFVar29->_padding_) {
                    uVar30 = uVar27;
                  }
                  if ((uVar30 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  pFVar16 = (((TArray<UE::Math::TVector<float>,TSizedDefaultAllocator<32>_> *)
                             &pFVar29->_padding_)->AllocatorInstance).Data;
                  *(undefined8 *)(pFVar16 + lVar34) = uVar7;
                  *(float *)(pFVar16 + lVar34 + 8) = fVar8;
                  uVar30 = 0;
                  if ((int)local_300 < local_320[0]) {
                    uVar30 = uVar18 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  FVar6.Data = local_328.Data;
                  uVar19 = iVar11 * local_340[*(int *)((longlong)&local_d0 + local_308 * 4)] +
                           local_348;
                  uVar30 = 0;
                  if ((int)uVar19 < *(int *)(local_328.Data + (longlong)pdVar35 * 0x10 + 8)) {
                    uVar30 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  pFVar29 = local_2f0;
                  uVar23 = *(undefined4 *)
                            (*(longlong *)&FVar6.Data[(longlong)pdVar35 * 0x10].field_0x0 +
                            (longlong)(int)uVar19 * 4);
                  uVar30 = 0;
                  if ((int)local_2f8 < (int)local_2f0->_padding_) {
                    uVar30 = uVar27;
                  }
                  if ((uVar30 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  *(undefined4 *)
                   ((((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->
                    AllocatorInstance).Data + local_2d0 * 4) = uVar23;
                  uVar30 = 0;
                  if ((int)local_300 < local_320[0]) {
                    uVar30 = uVar18 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  FVar6.Data = local_328.Data;
                  uVar19 = iVar11 * local_340[*(int *)((longlong)&local_d0 + local_308 * 4)] +
                           local_348;
                  uVar30 = 0;
                  if ((int)uVar19 < *(int *)(local_328.Data + (longlong)pdVar35 * 0x10 + 8)) {
                    uVar30 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar30 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  pFVar29 = local_2f0;
                  uVar23 = *(undefined4 *)
                            (*(longlong *)&FVar6.Data[(longlong)pdVar35 * 0x10].field_0x0 +
                            (longlong)(int)uVar19 * 4);
                  uVar30 = 0;
                  if ((int)local_2f8 < (int)local_2f0->_padding_) {
                    uVar30 = uVar27;
                  }
                  if ((uVar30 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  lVar34 = lVar34 + 0xc;
                  iVar11 = iVar11 + 1;
                  local_2f8 = local_2f8 + 1;
                  *(undefined4 *)
                   ((((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->
                    AllocatorInstance).Data + local_2d0 * 4) = uVar23;
                  local_2d0 = local_2d0 + 1;
                  lVar31 = local_308;
                  uVar27 = local_300;
                } while (iVar11 < local_340[*(int *)((longlong)&uStack_c8 + local_308 * 4 + 4)]);
              }
              iVar11 = *(int *)((longlong)&local_d0 + lVar31 * 4);
              local_348 = local_348 + 1;
              pFVar29 = local_2f0;
              pdVar35 = local_2e8;
              uVar18 = local_2e0;
              iVar12 = local_320[2];
            } while (local_348 < local_340[iVar11]);
          }
          local_2fc = 0;
          lVar31 = local_308;
          if (1 < local_340[iVar11]) {
            iVar11 = iVar12 * 2;
            local_270 = CONCAT44(local_270._4_4_,iVar11);
            local_330 = iVar12 - 1;
            iVar25 = iVar12 * -2 + 1;
            local_2ac = 1;
            do {
              local_348 = 0;
              iVar24 = local_2fc;
              if (1 < local_340[*(int *)((longlong)&uStack_c8 + lVar31 * 4 + 4)]) {
                local_268 = local_2ac + local_330 + iVar25;
                uVar30 = ~uVar27 >> 0x1f;
                local_310 = (longlong)local_2e8 << 4;
                lVar31 = local_2c8 * 0xc;
                local_330 = local_320[2] - 1U;
                local_2b0 = 1 - iVar11;
                local_260 = CONCAT44(local_260._4_4_,local_2fc + 1);
                local_2e0 = local_2fc + 1 + (local_320[2] - 1U);
                do {
                  iVar11 = local_2fc;
                  lVar34 = local_310;
                  uVar19 = 0;
                  if ((int)uVar27 < local_320[0]) {
                    uVar19 = uVar30;
                  }
                  if ((uVar19 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  FVar6.Data = local_328.Data;
                  uVar19 = iVar11 + (local_348 + 1) *
                                    local_340[*(int *)((longlong)&local_d0 + local_308 * 4)] + 1;
                  uVar27 = 0;
                  if ((int)uVar19 < *(int *)(local_328.Data + lVar34 + 8)) {
                    uVar27 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  uVar23 = *(undefined4 *)
                            (*(longlong *)(FVar6.Data + lVar34) + (longlong)(int)uVar19 * 4);
                  uVar27 = 0;
                  if ((int)local_300 < local_320[0]) {
                    uVar27 = uVar30;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  lVar34 = local_310;
                  FVar6.Data = local_328.Data;
                  uVar19 = local_2fc + 1 +
                           ((local_330 + local_348 + 1) *
                            local_340[*(int *)((longlong)&local_d0 + local_308 * 4)] - local_320[2])
                  ;
                  uVar27 = 0;
                  if ((int)uVar19 < *(int *)(local_328.Data + local_310 + 8)) {
                    uVar27 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  uVar2 = *(undefined4 *)
                           (*(longlong *)(FVar6.Data + lVar34) + (longlong)(int)uVar19 * 4);
                  uVar27 = 0;
                  if ((int)local_300 < local_320[0]) {
                    uVar27 = uVar30;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  FVar6.Data = local_328.Data;
                  uVar19 = local_348 * local_340[*(int *)((longlong)&local_d0 + local_308 * 4)] +
                           local_2fc;
                  uVar27 = 0;
                  if ((int)uVar19 < *(int *)(local_328.Data + local_310 + 8)) {
                    uVar27 = ~uVar19 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  uStack_234 = uVar2;
                  uVar2 = *(undefined4 *)
                           (*(longlong *)(FVar6.Data + local_310) + (longlong)(int)uVar19 * 4);
                  if (*(bool *)&pFVar29->_padding_ == false) {
                    local_238 = uVar2;
                  }
                  else {
                    local_238 = uVar23;
                    uVar23 = uVar2;
                  }
                  uVar19 = ~uVar18 >> 0x1f;
                  uVar27 = 0;
                  if ((int)uVar18 < (int)pFVar29->_padding_) {
                    uVar27 = uVar19;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  iVar12 = local_2fc;
                  pFVar16 = (((TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)
                             &pFVar29->_padding_)->AllocatorInstance).Data;
                  *(ulonglong *)(pFVar16 + lVar31) = CONCAT44(uStack_234,local_238);
                  *(undefined4 *)(pFVar16 + lVar31 + 8) = uVar23;
                  iVar11 = local_340[*(int *)((longlong)&uStack_c8 + local_308 * 4 + 4)];
                  iVar25 = local_2dc + 1 + (int)local_260 * iVar11 + local_348;
                  iVar24 = local_2fc * iVar11 + local_348 + local_2dc;
                  iStack_224 = local_320[2] + local_268 * iVar11 + local_348 + local_2dc;
                  if (*(bool *)&pFVar29->_padding_ == false) {
                    local_228 = iVar24;
                  }
                  else {
                    local_228 = iVar25;
                    iVar25 = iVar24;
                  }
                  uVar27 = 0;
                  if ((int)uVar18 < (int)pFVar29->_padding_) {
                    uVar27 = uVar19;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  pFVar16 = (((TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)
                             &pFVar29->_padding_)->AllocatorInstance).Data;
                  *(ulonglong *)(pFVar16 + lVar31) = CONCAT44(iStack_224,local_228);
                  *(int *)(pFVar16 + lVar31 + 8) = iVar25;
                  iVar11 = local_340[*(int *)((longlong)&uStack_c8 + local_308 * 4 + 4)];
                  iVar25 = (iVar12 + 1) * iVar11 + 1 + local_348 + local_2dc;
                  iVar24 = iVar12 * iVar11 + local_348 + local_2dc;
                  iStack_214 = local_320[2] + local_268 * iVar11 + local_348 + local_2dc;
                  if (*(bool *)&pFVar29->_padding_ == false) {
                    local_218 = iVar24;
                  }
                  else {
                    local_218 = iVar25;
                    iVar25 = iVar24;
                  }
                  uVar27 = 0;
                  if ((int)uVar18 < (int)pFVar29->_padding_) {
                    uVar27 = uVar19;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  pFVar16 = (((TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)
                             &pFVar29->_padding_)->AllocatorInstance).Data;
                  *(ulonglong *)(pFVar16 + lVar31) = CONCAT44(iStack_214,local_218);
                  *(int *)(pFVar16 + lVar31 + 8) = iVar25;
                  bVar9 = pFVar29->bPolygroupPerQuad;
                  uVar27 = 0;
                  if ((int)uVar18 < (int)pFVar29->_padding_) {
                    uVar27 = uVar19;
                  }
                  if ((uVar27 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  uVar27 = local_300;
                  if (bVar9 != false) {
                    uVar27 = local_2d8;
                  }
                  uVar19 = uVar18 + 1;
                  *(uint *)((((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->
                            AllocatorInstance).Data + local_2c8 * 4) = uVar27;
                  uVar27 = 0;
                  if ((int)local_300 < local_320[0]) {
                    uVar27 = uVar30;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  lVar34 = local_310;
                  FVar6.Data = local_328.Data;
                  uVar20 = (local_2b0 + 1 + local_330 + local_348) *
                           local_340[*(int *)((longlong)&local_d0 + local_308 * 4)] + iVar12 +
                           local_320[2];
                  uVar27 = 0;
                  if ((int)uVar20 < *(int *)(local_328.Data + local_310 + 8)) {
                    uVar27 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  uVar23 = *(undefined4 *)
                            (*(longlong *)(FVar6.Data + lVar34) + (longlong)(int)uVar20 * 4);
                  uVar27 = 0;
                  if ((int)local_300 < local_320[0]) {
                    uVar27 = uVar30;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  lVar34 = local_310;
                  FVar6.Data = local_328.Data;
                  uVar20 = local_2fc + 1 +
                           (local_348 + 1) *
                           local_340[*(int *)((longlong)&local_d0 + local_308 * 4)];
                  uVar27 = 0;
                  if ((int)uVar20 < *(int *)(local_328.Data + local_310 + 8)) {
                    uVar27 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  uVar2 = *(undefined4 *)
                           (*(longlong *)(FVar6.Data + lVar34) + (longlong)(int)uVar20 * 4);
                  uVar27 = 0;
                  if ((int)local_300 < local_320[0]) {
                    uVar27 = uVar30;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  FVar6.Data = local_328.Data;
                  uVar20 = local_348 * local_340[*(int *)((longlong)&local_d0 + local_308 * 4)] +
                           local_2fc;
                  uVar27 = 0;
                  if ((int)uVar20 < *(int *)(local_328.Data + local_310 + 8)) {
                    uVar27 = ~uVar20 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  uStack_204 = uVar2;
                  uVar2 = *(undefined4 *)
                           (*(longlong *)(FVar6.Data + local_310) + (longlong)(int)uVar20 * 4);
                  if (*(bool *)&pFVar29->_padding_ == false) {
                    local_208 = uVar2;
                  }
                  else {
                    local_208 = uVar23;
                    uVar23 = uVar2;
                  }
                  uVar20 = ~uVar19 >> 0x1f;
                  uVar27 = 0;
                  if ((int)uVar19 < (int)pFVar29->_padding_) {
                    uVar27 = uVar20;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  iVar12 = local_2fc;
                  pFVar16 = (((TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)
                             &pFVar29->_padding_)->AllocatorInstance).Data;
                  *(ulonglong *)(pFVar16 + lVar31 + 0xc) = CONCAT44(uStack_204,local_208);
                  *(undefined4 *)(pFVar16 + lVar31 + 0x14) = uVar23;
                  iVar11 = local_340[*(int *)((longlong)&uStack_c8 + local_308 * 4 + 4)];
                  iVar25 = local_2dc + 1 + (local_2e0 * iVar11 - local_320[2]) + local_348;
                  iVar24 = local_2fc * iVar11 + local_348 + local_2dc;
                  iStack_1f4 = local_2dc + 1 + (int)local_260 * iVar11 + local_348;
                  if (*(bool *)&pFVar29->_padding_ == false) {
                    local_1f8 = iVar24;
                  }
                  else {
                    local_1f8 = iVar25;
                    iVar25 = iVar24;
                  }
                  uVar27 = 0;
                  if ((int)uVar19 < (int)pFVar29->_padding_) {
                    uVar27 = uVar20;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  pFVar16 = (((TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)
                             &pFVar29->_padding_)->AllocatorInstance).Data;
                  *(ulonglong *)(pFVar16 + lVar31 + 0xc) = CONCAT44(iStack_1f4,local_1f8);
                  *(int *)(pFVar16 + lVar31 + 0x14) = iVar25;
                  iVar11 = local_340[*(int *)((longlong)&uStack_c8 + local_308 * 4 + 4)];
                  iVar25 = (local_2e0 * iVar11 - local_320[2]) + 1 + local_348 + local_2dc;
                  iStack_1e4 = (iVar12 + 1) * iVar11 + 1 + local_348 + local_2dc;
                  iVar11 = iVar12 * iVar11 + local_348 + local_2dc;
                  if (*(bool *)&pFVar29->_padding_ == false) {
                    local_1e8 = iVar11;
                  }
                  else {
                    local_1e8 = iVar25;
                    iVar25 = iVar11;
                  }
                  uVar27 = 0;
                  if ((int)uVar19 < (int)pFVar29->_padding_) {
                    uVar27 = uVar20;
                  }
                  if ((uVar27 == 0) &&
                     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar9)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  pFVar16 = (((TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)
                             &pFVar29->_padding_)->AllocatorInstance).Data;
                  *(ulonglong *)(pFVar16 + lVar31 + 0xc) = CONCAT44(iStack_1e4,local_1e8);
                  *(int *)(pFVar16 + lVar31 + 0x14) = iVar25;
                  bVar9 = pFVar29->bPolygroupPerQuad;
                  uVar27 = 0;
                  if ((int)uVar19 < (int)pFVar29->_padding_) {
                    uVar27 = uVar20;
                  }
                  if ((uVar27 == 0) &&
                     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar10)) {
                    pcVar3 = (code *)swi(3);
                    pFVar13 = (FMeshShapeGenerator *)(*pcVar3)();
                    return pFVar13;
                  }
                  uVar27 = local_300;
                  if (bVar9 != false) {
                    uVar27 = local_2d8;
                  }
                  *(uint *)((((TArray<int,TSizedDefaultAllocator<32>_> *)&pFVar29->_padding_)->
                            AllocatorInstance).Data + local_2c8 * 4 + 4) = uVar27;
                  uVar18 = uVar18 + 2;
                  iVar11 = local_348 + 2;
                  local_2d8 = local_2d8 + 1;
                  lVar31 = lVar31 + 0x18;
                  local_2c8 = local_2c8 + 2;
                  uVar27 = local_300;
                  local_348 = local_348 + 1;
                } while (iVar11 < local_340[*(int *)((longlong)&uStack_c8 + local_308 * 4 + 4)]);
                local_2e0 = uVar18;
                lVar31 = local_308;
                iVar24 = local_2fc;
                iVar11 = (int)local_270;
                iVar25 = local_2b0;
              }
              local_2fc = iVar24 + 1;
              local_2ac = local_2ac + 1;
              pdVar35 = local_2e8;
              iVar12 = local_320[2];
            } while (iVar24 + 2 < local_340[*(int *)((longlong)&local_d0 + lVar31 * 4)]);
          }
          pdVar21 = (double *)(ulonglong)local_2a4;
          pdVar35 = (double *)((longlong)pdVar35 + 1);
          local_320[2] = iVar12 + 1;
          local_2a8 = local_2a8 + 2;
          local_2e8 = pdVar35;
          uVar30 = local_2f8;
        } while (iVar12 + 1 < 2);
        local_2b8 = local_2b8 + 4;
        local_2d4 = local_2d4 + 1;
        local_308 = lVar31 + 1;
        if (2 < (int)local_2d4) {
          DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
                    ((TArray<int,TSizedDefaultAllocator<32>_> *)local_328.Data,local_320[0]);
          if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_328.Data !=
              (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
            FMemory::Free(local_328.Data);
          }
          return (FMeshShapeGenerator *)pFVar29;
        }
      } while( true );
    }
  } while( true );
}

