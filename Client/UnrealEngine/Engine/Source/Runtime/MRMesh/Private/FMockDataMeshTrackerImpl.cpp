// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MRMesh
// Functions: 2

// FMockDataMeshTrackerImpl @ 146c65510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FMockDataMeshTrackerImpl * __thiscall
FMockDataMeshTrackerImpl::FMockDataMeshTrackerImpl(FMockDataMeshTrackerImpl *this)

{
  TArray<FMockDataMeshTrackerImpl::FRawMockMeshData,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int *piVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  undefined8 *puVar6;
  double dVar7;
  undefined4 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  ulonglong uVar14;
  FMockDataMeshTrackerImpl *pFVar15;
  ulonglong uVar16;
  int iVar17;
  undefined8 *puVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  longlong lVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  undefined1 auStackY_4d8 [32];
  uint local_488;
  longlong local_470;
  undefined4 local_458 [2];
  undefined8 local_450;
  undefined4 local_448;
  undefined4 local_444;
  undefined4 local_440;
  undefined4 local_43c;
  undefined4 local_438;
  undefined4 local_434;
  undefined4 local_430;
  undefined4 local_42c;
  undefined4 local_428;
  undefined4 local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  double local_378 [15];
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  double local_1f8 [48];
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_4d8;
  uVar16 = 0;
  this->MeshBrickIndex = 0;
  pTVar1 = &this->RawMockMeshData;
  *(undefined8 *)&this->MeshBrickCache = 0;
  piVar2 = &(this->RawMockMeshData).ArrayNum;
  *(undefined8 *)&(this->MeshBrickCache).field_0x8 = 0;
  piVar3 = &(this->RawMockMeshData).ArrayMax;
  *(undefined8 *)&(this->MeshBrickCache).field_0x20 = 0;
  *piVar2 = 0;
  *piVar3 = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *(undefined4 *)&(this->MeshBrickCache).field_0x28 = 0;
  *(undefined4 *)&(this->MeshBrickCache).field_0x2c = 0x80;
  *(undefined4 *)&(this->MeshBrickCache).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MeshBrickCache).field_0x34 = 0;
  *(undefined8 *)&(this->MeshBrickCache).field_0x40 = 0;
  *(undefined4 *)&(this->MeshBrickCache).field_0x48 = 0;
  (this->CachedMeshDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedMeshDatas).ArrayNum = 0;
  (this->CachedMeshDatas).ArrayMax = 0;
  (this->FreeCachedMeshDatas).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FreeCachedMeshDatas).ArrayNum = 0;
  (this->FreeCachedMeshDatas).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->FreeCachedMeshDatasMutex,4000);
  local_378[0] = 0.0;
  local_378[1] = 0.0;
  local_378[4] = 0.0;
  local_378[5] = 0.0;
  local_378[10] = 0.0;
  local_378[0xb] = 0.0;
  local_2f8 = ___xmm_40240000000000004024000000000000;
  uStack_2f0 = _UNK_15104e4d8;
  local_2c8 = ___xmm_00000000000000004024000000000000;
  uStack_2c0 = _UNK_151444f38;
  local_288 = ___xmm_40340000000000004034000000000000;
  uStack_280 = _UNK_151444f88;
  local_2b8 = ___xmm_40340000000000000000000000000000;
  uStack_2b0 = _UNK_151444f78;
  local_378[8] = (double)___xmm_403e0000000000000000000000000000;
  local_378[9] = (double)_UNK_151444f98;
  local_258 = ___xmm_403e0000000000000000000000000000;
  uStack_250 = _UNK_151444f98;
  local_218 = ___xmm_403e0000000000000000000000000000;
  uStack_210 = _UNK_151444f98;
  local_228 = ___xmm_403e0000000000004034000000000000;
  uStack_220 = _UNK_151444fb8;
  local_378[2] = (double)___xmm_40240000000000000000000000000000;
  local_378[3] = (double)_UNK_15076bd28;
  local_378[6] = (double)___xmm_00000000000000004034000000000000;
  local_378[7] = (double)_UNK_151444f48;
  local_378[0xc] = (double)___xmm_40240000000000000000000000000000;
  local_378[0xd] = (double)_UNK_15076bd28;
  local_378[0xe] = (double)___xmm_40240000000000000000000000000000;
  uStack_300 = _UNK_15076bd28;
  local_2e8 = ___xmm_40240000000000004034000000000000;
  uStack_2e0 = _UNK_151444f68;
  local_2d8 = ___xmm_403e0000000000004024000000000000;
  uStack_2d0 = _UNK_151444fa8;
  local_2a8 = ___xmm_40240000000000000000000000000000;
  uStack_2a0 = _UNK_15076bd28;
  local_298 = ___xmm_40240000000000004034000000000000;
  uStack_290 = _UNK_151444f68;
  local_278 = ___xmm_403e0000000000004024000000000000;
  uStack_270 = _UNK_151444fa8;
  local_268 = ___xmm_00000000000000004034000000000000;
  uStack_260 = _UNK_151444f48;
  local_248 = ___xmm_40240000000000000000000000000000;
  uStack_240 = _UNK_15076bd28;
  local_238 = ___xmm_0000000000000000403e000000000000;
  uStack_230 = _UNK_151444f58;
  local_208 = ___xmm_0000000000000000403e000000000000;
  uStack_200 = _UNK_151444f58;
  uVar14 = uVar16;
  do {
    dVar7 = *(double *)((longlong)local_378 + uVar14 + 0x10);
    dVar26 = *(double *)((longlong)local_378 + uVar14 + 8) - __real_3fc3333340000000;
    *(double *)((longlong)local_1f8 + uVar14) =
         *(double *)((longlong)local_378 + uVar14) - __real_3fc3333340000000;
    *(double *)((longlong)local_1f8 + uVar14 + 8) = dVar26;
    *(double *)((longlong)local_1f8 + uVar14 + 0x10) = dVar7;
    dVar25 = *(double *)((longlong)local_1f8 + uVar14);
    dVar24 = dVar26 * dVar26 + dVar25 * dVar25 + dVar7 * dVar7;
    if (__real_3e45798ee0000000 < dVar24) {
      dVar24 = __real_3ff0000000000000 / SQRT(dVar24);
      *(double *)((longlong)local_1f8 + uVar14) = dVar25 * dVar24;
      *(double *)((longlong)local_1f8 + uVar14 + 8) = dVar26 * dVar24;
      *(double *)((longlong)local_1f8 + uVar14 + 0x10) = dVar7 * dVar24;
    }
    dVar26 = *(double *)((longlong)local_378 + uVar14 + 0x20) - __real_3fc3333340000000;
    dVar7 = *(double *)((longlong)local_378 + uVar14 + 0x28);
    dVar24 = *(double *)((longlong)local_378 + uVar14 + 0x18) - __real_3fc3333340000000;
    *(double *)((longlong)local_1f8 + uVar14 + 0x18) = dVar24;
    *(double *)((longlong)local_1f8 + uVar14 + 0x20) = dVar26;
    *(double *)((longlong)local_1f8 + uVar14 + 0x28) = dVar7;
    dVar25 = dVar24 * dVar24 + dVar26 * dVar26 + dVar7 * dVar7;
    if (__real_3e45798ee0000000 < dVar25) {
      dVar25 = __real_3ff0000000000000 / SQRT(dVar25);
      *(double *)((longlong)local_1f8 + uVar14 + 0x18) = dVar24 * dVar25;
      *(double *)((longlong)local_1f8 + uVar14 + 0x20) = dVar26 * dVar25;
      *(double *)((longlong)local_1f8 + uVar14 + 0x28) = dVar7 * dVar25;
    }
    dVar26 = *(double *)((longlong)local_378 + uVar14 + 0x38) - __real_3fc3333340000000;
    dVar7 = *(double *)((longlong)local_378 + uVar14 + 0x40);
    dVar24 = *(double *)((longlong)local_378 + uVar14 + 0x30) - __real_3fc3333340000000;
    *(double *)((longlong)local_1f8 + uVar14 + 0x30) = dVar24;
    *(double *)((longlong)local_1f8 + uVar14 + 0x38) = dVar26;
    *(double *)((longlong)local_1f8 + uVar14 + 0x40) = dVar7;
    dVar25 = dVar24 * dVar24 + dVar26 * dVar26 + dVar7 * dVar7;
    if (__real_3e45798ee0000000 < dVar25) {
      dVar25 = __real_3ff0000000000000 / SQRT(dVar25);
      *(double *)((longlong)local_1f8 + uVar14 + 0x30) = dVar24 * dVar25;
      *(double *)((longlong)local_1f8 + uVar14 + 0x38) = dVar26 * dVar25;
      *(double *)((longlong)local_1f8 + uVar14 + 0x40) = dVar7 * dVar25;
    }
    dVar26 = *(double *)((longlong)local_378 + uVar14 + 0x50) - __real_3fc3333340000000;
    dVar7 = *(double *)((longlong)local_378 + uVar14 + 0x58);
    dVar24 = *(double *)((longlong)local_378 + uVar14 + 0x48) - __real_3fc3333340000000;
    *(double *)((longlong)local_1f8 + uVar14 + 0x48) = dVar24;
    *(double *)((longlong)local_1f8 + uVar14 + 0x50) = dVar26;
    *(double *)((longlong)local_1f8 + uVar14 + 0x58) = dVar7;
    dVar25 = dVar24 * dVar24 + dVar26 * dVar26 + dVar7 * dVar7;
    if (__real_3e45798ee0000000 < dVar25) {
      dVar25 = __real_3ff0000000000000 / SQRT(dVar25);
      *(double *)((longlong)local_1f8 + uVar14 + 0x48) = dVar24 * dVar25;
      *(double *)((longlong)local_1f8 + uVar14 + 0x50) = dVar26 * dVar25;
      *(double *)((longlong)local_1f8 + uVar14 + 0x58) = dVar7 * dVar25;
    }
    uVar14 = uVar14 + 0x60;
  } while ((longlong)uVar14 < 0x180);
  local_458[0] = 0;
  local_458[1] = 4;
  local_450 = 5;
  local_448 = 5;
  local_444 = 1;
  local_440 = 1;
  local_43c = 5;
  local_438 = 6;
  local_434 = 1;
  local_430 = 6;
  local_42c = 2;
  local_428 = 2;
  local_424 = 6;
  local_420 = 7;
  local_41c = 2;
  local_418 = 7;
  local_414 = 3;
  local_410 = 4;
  local_40c = 8;
  local_408 = 9;
  local_404 = 4;
  local_400 = 9;
  local_3fc = 5;
  local_3f8 = 5;
  local_3f4 = 9;
  local_3f0 = 10;
  local_3ec = 5;
  local_3e8 = 10;
  local_3e4 = 6;
  local_3e0 = 6;
  local_3dc = 10;
  local_3d8 = 0xb;
  local_3d4 = 6;
  local_3d0 = 0xb;
  local_3cc = 7;
  local_3c8 = 8;
  local_3c4 = 0xc;
  local_3c0 = 0xd;
  local_3bc = 8;
  local_3b8 = 0xd;
  local_3b4 = 9;
  local_3b0 = 9;
  local_3ac = 0xd;
  local_3a8 = 0xe;
  local_3a4 = 9;
  local_3a0 = 0xe;
  local_39c = 10;
  local_398 = 10;
  local_394 = 0xe;
  local_390 = 0xf;
  local_38c = 10;
  local_388 = 0xf;
  local_384 = 0xb;
  iVar13 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (0x30,8,4,&pTVar1->AllocatorInstance,piVar2,piVar3);
  DefaultConstructItems<FMockDataMeshTrackerImpl::FRawMockMeshData,int>
            ((pTVar1->AllocatorInstance).Data + (longlong)iVar13 * 0x30,4);
  local_488 = 0;
  local_470 = 0;
  do {
    if (((this->RawMockMeshData).ArrayNum <= (int)uVar16) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar12)) {
      pcVar9 = (code *)swi(3);
      pFVar15 = (FMockDataMeshTrackerImpl *)(*pcVar9)();
      return pFVar15;
    }
    pFVar22 = (pTVar1->AllocatorInstance).Data + local_470;
    pFVar4 = pFVar22 + 0xc;
    if (*(int *)(pFVar22 + 0xc) < 0x10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0x10,(ForAnyElementType *)pFVar22,*(int *)(pFVar22 + 8),(int *)pFVar4);
    }
    pFVar5 = pFVar22 + 0x1c;
    lVar23 = 0;
    if (*(int *)(pFVar22 + 0x1c) < 0x10) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x18,8,0x10,(ForAnyElementType *)(pFVar22 + 0x10),*(int *)(pFVar22 + 0x18),
                 (int *)pFVar5);
    }
    do {
      puVar18 = (undefined8 *)((longlong)local_378 + lVar23);
      if (((*(undefined8 **)pFVar22 <= puVar18) &&
          (puVar18 < *(undefined8 **)pFVar22 + (longlong)*(int *)pFVar4 * 3)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FMockDataMeshTrackerImpl *)(*pcVar9)();
        return pFVar15;
      }
      iVar13 = *(int *)(pFVar22 + 8);
      if (iVar13 == *(int *)pFVar4) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)pFVar22,(int *)pFVar4);
        *(int *)(pFVar22 + 8) = iVar13;
      }
      *(int *)(pFVar22 + 8) = iVar13 + 1;
      uVar10 = *(undefined8 *)((longlong)local_378 + lVar23 + 8);
      lVar20 = *(longlong *)pFVar22;
      puVar6 = (undefined8 *)(lVar20 + (longlong)iVar13 * 0x18);
      *puVar6 = *puVar18;
      puVar6[1] = uVar10;
      *(undefined8 *)(lVar20 + 0x10 + (longlong)iVar13 * 0x18) =
           *(undefined8 *)((longlong)local_378 + lVar23 + 0x10);
      puVar18 = (undefined8 *)((longlong)local_1f8 + lVar23);
      if (((*(undefined8 **)(pFVar22 + 0x10) <= puVar18) &&
          (puVar18 < *(undefined8 **)(pFVar22 + 0x10) + (longlong)*(int *)pFVar5 * 3)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FMockDataMeshTrackerImpl *)(*pcVar9)();
        return pFVar15;
      }
      iVar13 = *(int *)(pFVar22 + 0x18);
      if (iVar13 == *(int *)pFVar5) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x818,(ForAnyElementType *)(pFVar22 + 0x10),(int *)pFVar5);
        *(int *)(pFVar22 + 0x18) = iVar13;
      }
      lVar21 = lVar23 + 0x18;
      *(int *)(pFVar22 + 0x18) = iVar13 + 1;
      uVar10 = *(undefined8 *)((longlong)local_1f8 + lVar23 + 8);
      lVar20 = *(longlong *)(pFVar22 + 0x10);
      puVar6 = (undefined8 *)(lVar20 + (longlong)iVar13 * 0x18);
      *puVar6 = *puVar18;
      puVar6[1] = uVar10;
      *(undefined8 *)(lVar20 + 0x10 + (longlong)iVar13 * 0x18) =
           *(undefined8 *)((longlong)local_1f8 + lVar23 + 0x10);
      lVar23 = lVar21;
    } while (lVar21 < 0x180);
    pFVar4 = pFVar22 + 0x20;
    pFVar5 = pFVar22 + 0x2c;
    if (*(int *)(pFVar22 + 0x2c) < 0x36) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0x36,(ForAnyElementType *)pFVar4,*(int *)(pFVar22 + 0x28),(int *)pFVar5);
    }
    pFVar19 = (FScriptContainerElement *)local_458;
    lVar23 = 0x36;
    do {
                    /* WARNING: Load size is inaccurate */
      if (((*pFVar4 <= pFVar19) && (pFVar19 < *pFVar4 + (longlong)*(int *)pFVar5 * 4)) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar12)) {
        pcVar9 = (code *)swi(3);
        pFVar15 = (FMockDataMeshTrackerImpl *)(*pcVar9)();
        return pFVar15;
      }
      iVar13 = *(int *)(pFVar22 + 0x28);
      if (iVar13 == *(int *)pFVar5) {
        iVar13 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,(ForAnyElementType *)pFVar4,(int *)pFVar5);
        *(int *)(pFVar22 + 0x28) = iVar13;
      }
      *(int *)(pFVar22 + 0x28) = iVar13 + 1;
      uVar8 = *(undefined4 *)pFVar19;
      pFVar19 = pFVar19 + 4;
                    /* WARNING: Load size is inaccurate */
      *(undefined4 *)(*pFVar4 + (longlong)iVar13 * 4) = uVar8;
      fVar11 = __real_41f00000;
      lVar23 = lVar23 + -1;
    } while (lVar23 != 0);
    local_488 = local_488 + 1;
    uVar16 = (ulonglong)local_488;
    local_470 = local_470 + 0x30;
    if (3 < (int)local_488) {
      iVar13 = 0;
      lVar23 = 0;
      do {
        if (((this->RawMockMeshData).ArrayNum <= iVar13) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar9 = (code *)swi(3);
          pFVar15 = (FMockDataMeshTrackerImpl *)(*pcVar9)();
          return pFVar15;
        }
        pFVar4 = (this->RawMockMeshData).AllocatorInstance.Data;
        lVar20 = 0;
        iVar17 = 0;
        do {
          if ((*(int *)(pFVar4 + lVar23 + 8) <= iVar17) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar9 = (code *)swi(3);
            pFVar15 = (FMockDataMeshTrackerImpl *)(*pcVar9)();
            return pFVar15;
          }
          lVar21 = *(longlong *)(pFVar4 + lVar23);
          iVar17 = iVar17 + 1;
          *(double *)(lVar20 + lVar21) =
               (double)((float)iVar13 * fVar11) + *(double *)(lVar20 + lVar21);
          lVar20 = lVar20 + 0x18;
        } while (iVar17 < 0x10);
        iVar13 = iVar13 + 1;
        lVar23 = lVar23 + 0x30;
        if (3 < iVar13) {
          return this;
        }
      } while( true );
    }
  } while( true );
}

// AquireMeshDataCache @ 146c68150

TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> * __thiscall
FMockDataMeshTrackerImpl::AquireMeshDataCache
          (FMockDataMeshTrackerImpl *this,
          TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *__return_storage_ptr__)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  TReferenceControllerBase<1> *pTVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *pTVar6;
  FCachedMeshData *pFVar7;
  FCachedMeshData *pFVar8;
  FCachedMeshData *pFVar9;
  TArray<TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1>,TSizedDefaultAllocator<32>_>
  *pTVar10;
  FScriptContainerElement *pFVar11;
  
  pFVar8 = (FCachedMeshData *)0x0;
  if (0 < (this->FreeCachedMeshDatas).ArrayNum) {
    lpCriticalSection = &this->FreeCachedMeshDatasMutex;
    if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    if (((this->FreeCachedMeshDatas).ArrayNum < 1) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *)(*pcVar3)();
      return pTVar6;
    }
    iVar5 = (this->FreeCachedMeshDatas).ArrayNum;
    pFVar11 = (this->FreeCachedMeshDatas).AllocatorInstance.Data;
    __return_storage_ptr__->Object = *(FCachedMeshData **)(pFVar11 + (longlong)iVar5 * 0x10 + -0x10)
    ;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         *(TReferenceControllerBase<1> **)(pFVar11 + (longlong)iVar5 * 0x10 + -8);
    *(undefined8 *)(pFVar11 + (longlong)iVar5 * 0x10 + -8) = 0;
    *(undefined8 *)(pFVar11 + (longlong)iVar5 * 0x10 + -0x10) = 0;
    iVar5 = (this->FreeCachedMeshDatas).ArrayNum;
    pFVar11 = (this->FreeCachedMeshDatas).AllocatorInstance.Data + (longlong)iVar5 * 0x10;
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)(pFVar11 + -8));
    iVar5 = (this->FreeCachedMeshDatas).ArrayNum - iVar5;
    if (iVar5 != 0) {
      memmove(pFVar11 + -0x10,pFVar11,(longlong)iVar5 << 4);
    }
    piVar1 = &(this->FreeCachedMeshDatas).ArrayNum;
    *piVar1 = *piVar1 + -1;
    if ((__return_storage_ptr__->Object == (FCachedMeshData *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *)(*pcVar3)();
      return pTVar6;
    }
    pFVar8 = __return_storage_ptr__->Object;
    if ((pFVar8->Owner != (FMockDataMeshTrackerImpl *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("!Owner",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MockDataMeshTrackerComponent.cpp"
                           ,0xaa,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pTVar6 = (TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *)(*pcVar3)();
      return pTVar6;
    }
    pFVar8->Owner = this;
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return __return_storage_ptr__;
  }
  pFVar7 = ::operator_new(0x90);
  pFVar9 = pFVar8;
  if (pFVar7 != (FCachedMeshData *)0x0) {
    pFVar7->Owner = (FMockDataMeshTrackerImpl *)0x0;
    pFVar7->BrickId = 0;
    (pFVar7->OffsetVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->OffsetVertices).ArrayNum = 0;
    (pFVar7->OffsetVertices).ArrayMax = 0;
    (pFVar7->WorldVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->WorldVertices).ArrayNum = 0;
    (pFVar7->WorldVertices).ArrayMax = 0;
    (pFVar7->Normals).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Normals).ArrayNum = 0;
    (pFVar7->Normals).ArrayMax = 0;
    (pFVar7->UV0).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->UV0).ArrayNum = 0;
    (pFVar7->UV0).ArrayMax = 0;
    (pFVar7->VertexColors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->VertexColors).ArrayNum = 0;
    (pFVar7->VertexColors).ArrayMax = 0;
    (pFVar7->Tangents).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Tangents).ArrayNum = 0;
    (pFVar7->Tangents).ArrayMax = 0;
    (pFVar7->Triangles).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Triangles).ArrayNum = 0;
    (pFVar7->Triangles).ArrayMax = 0;
    (pFVar7->Confidence).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar7->Confidence).ArrayNum = 0;
    (pFVar7->Confidence).ArrayMax = 0;
    pFVar9 = pFVar7;
  }
  __return_storage_ptr__->Object = pFVar9;
  pFVar7 = ::operator_new(0x18);
  if (pFVar7 != (FCachedMeshData *)0x0) {
    *(undefined4 *)&pFVar7->BrickId = 1;
    pFVar7->Owner =
         (FMockDataMeshTrackerImpl *)
         &
         ___7__TReferenceControllerWithDeleter_UFCachedMeshData_FMockDataMeshTrackerImpl__U__DefaultDeleter_UFCachedMeshData_FMockDataMeshTrackerImpl___SharedPointerInternals___00_SharedPointerInternals__6B_
    ;
    *(undefined4 *)((longlong)&pFVar7->BrickId + 4) = 1;
    (pFVar7->OffsetVertices).AllocatorInstance.Data = (FScriptContainerElement *)pFVar9;
    pFVar8 = pFVar7;
  }
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)pFVar8;
  if ((__return_storage_ptr__->Object == (FCachedMeshData *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *)(*pcVar3)();
    return pTVar6;
  }
  pFVar8 = __return_storage_ptr__->Object;
  if ((pFVar8->Owner != (FMockDataMeshTrackerImpl *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("!Owner",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\MRMesh\\Private\\MockDataMeshTrackerComponent.cpp"
                         ,0xaa,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *)(*pcVar3)();
    return pTVar6;
  }
  pFVar8->Owner = this;
  pTVar10 = &this->CachedMeshDatas;
  pTVar6 = (TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *)
           (pTVar10->AllocatorInstance).Data;
  if (((pTVar6 <= __return_storage_ptr__) &&
      (__return_storage_ptr__ < pTVar6 + (this->CachedMeshDatas).ArrayMax)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TSharedPtr<FMockDataMeshTrackerImpl::FCachedMeshData,1> *)(*pcVar3)();
    return pTVar6;
  }
  iVar5 = (this->CachedMeshDatas).ArrayNum;
  piVar1 = &(this->CachedMeshDatas).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&pTVar10->AllocatorInstance,piVar1);
  }
  (this->CachedMeshDatas).ArrayNum = iVar5 + 1;
  pFVar11 = (pTVar10->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
  *(FCachedMeshData **)pFVar11 = __return_storage_ptr__->Object;
  pTVar2 = (__return_storage_ptr__->SharedReferenceCount).ReferenceController;
  *(TReferenceControllerBase<1> **)(pFVar11 + 8) = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

