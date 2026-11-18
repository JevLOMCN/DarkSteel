// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: PlanarCut
// Functions: 13

// FPlanarCells @ 14c9a1b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlanarCells * __thiscall
FPlanarCells::FPlanarCells(FPlanarCells *this,TBox<double> *param_1,TIntVector3<int> *param_2)

{
  int iVar1;
  TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *this_00;
  int iVar5;
  undefined8 uVar6;
  double dVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  float fVar12;
  undefined8 uVar13;
  ForAnyElementType FVar14;
  TBox<double> *pTVar15;
  int iVar16;
  bool bVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  FPlanarCells *pFVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  FScriptContainerElement *pFVar27;
  int iVar28;
  longlong lVar29;
  longlong lVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auStackY_368 [32];
  int local_318;
  int local_314;
  int local_30c;
  int local_308;
  int local_300;
  ForAnyElementType local_2c8;
  int local_2c0;
  int local_2bc;
  ForAnyElementType local_2b8;
  int local_2b0;
  int local_2ac;
  ForAnyElementType local_2a8;
  int local_2a0;
  int local_29c;
  ForAnyElementType local_298;
  int local_290;
  int local_28c;
  ForAnyElementType local_288;
  int local_280;
  int local_27c;
  ForAnyElementType local_278;
  int local_270;
  int local_26c;
  int local_268;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  int local_254;
  float local_250;
  float local_24c;
  longlong local_248;
  float local_240;
  TBox<double> *local_238;
  double local_230;
  FPlanarCells *local_228;
  undefined8 local_220;
  int local_218;
  double local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  double dStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  double dStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  double dStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double dStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  double dStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  double dStack_150;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int local_128;
  int iStack_124;
  int iStack_120;
  int iStack_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_368;
  pTVar2 = &this->Planes;
  (this->InternalSurfaceMaterials).bGlobalVisibility = true;
  (this->InternalSurfaceMaterials).GlobalUVScale = 1.0;
  pTVar3 = &this->PlaneCells;
  this->AssumeConvexCells = true;
  pTVar4 = &this->PlaneBoundaries;
  (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  this_00 = &this->PlaneBoundaryVertices;
  (this->Planes).ArrayNum = 0;
  (this->Planes).ArrayMax = 0;
  (this->InternalSurfaceMaterials).GlobalMaterialID = 0;
  (this->InternalSurfaceMaterials).NoiseSettings.bIsSet = false;
  (pTVar3->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PlaneCells).ArrayNum = 0;
  (this->PlaneCells).ArrayMax = 0;
  (pTVar4->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PlaneBoundaries).ArrayNum = 0;
  (this->PlaneBoundaries).ArrayMax = 0;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PlaneBoundaryVertices).ArrayNum = 0;
  (this->PlaneBoundaryVertices).ArrayMax = 0;
  this->NumCells =
       (param_2->field0_0x0)._s_0.Y * (param_2->field0_0x0)._s_0.Z * (param_2->field0_0x0)._s_0.X;
  local_218 = (param_2->field0_0x0)._s_0.Z;
  uVar6 = *(undefined8 *)&param_2->field0_0x0;
  local_220._0_4_ = (int)uVar6;
  iVar16 = (int)local_220;
  local_220._4_4_ = (int)((ulonglong)uVar6 >> 0x20);
  iVar1 = local_218 + 1;
  uVar31 = (int)local_220 + 1;
  iVar18 = local_220._4_4_ + 1;
  local_238 = param_1;
  local_228 = this;
  local_220 = uVar6;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
            (this_00,iVar1 * iVar18 * uVar31,Default);
  uVar23 = 0;
  local_300 = 0;
  dVar11 = ((param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X) /
           (double)(param_2->field0_0x0)._s_0.X;
  dVar38 = ((param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y) /
           (double)(param_2->field0_0x0)._s_0.Y;
  dVar10 = ((param_1->Max).field0_0x0._s_0.Z - (param_1->Min).field0_0x0._s_0.Z) /
           (double)(param_2->field0_0x0)._s_0.Z;
  local_230 = dVar38;
  local_210 = dVar11;
  if (0 < iVar1) {
    lVar30 = 0;
    local_318 = 0;
    do {
      local_30c = 0;
      if (0 < iVar18) {
        do {
          pTVar15 = local_238;
          iVar28 = 0;
          if (0 < (int)uVar31) {
            lVar29 = lVar30 * 0x18;
            local_248 = lVar30 + (ulonglong)uVar31;
            dVar39 = (double)local_30c * dVar38;
            do {
              uVar19 = 0;
              if ((int)uVar23 < (this->PlaneBoundaryVertices).ArrayNum) {
                uVar19 = ~uVar23 >> 0x1f;
              }
              dVar38 = (pTVar15->Min).field0_0x0._s_0.Y;
              dVar40 = (pTVar15->Min).field0_0x0._s_0.Z;
              dVar7 = (pTVar15->Min).field0_0x0._s_0.X;
              if ((uVar19 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar9 = (code *)swi(3);
                pFVar22 = (FPlanarCells *)(*pcVar9)();
                return pFVar22;
              }
              pFVar27 = (this_00->AllocatorInstance).Data;
              *(double *)(pFVar27 + lVar29) = (double)iVar28 * dVar11 + dVar7;
              *(double *)(pFVar27 + lVar29 + 8) = dVar39 + dVar38;
              *(double *)(pFVar27 + lVar29 + 0x10) = (double)local_300 * dVar10 + dVar40;
              if ((uVar23 != (local_318 + local_30c) * uVar31 + iVar28) &&
                 (bVar17 = UE::Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<4490104728457314750>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\PlanarCut.cpp"
                                      ,0x1be,"VertIdx == ToIdxUnsafe(VertsPerAxis, Xi, Yi, Zi)"),
                 bVar17)) {
                pcVar9 = (code *)swi(3);
                pFVar22 = (FPlanarCells *)(*pcVar9)();
                return pFVar22;
              }
              uVar23 = uVar23 + 1;
              lVar29 = lVar29 + 0x18;
              iVar28 = iVar28 + 1;
              lVar30 = local_248;
              dVar38 = local_230;
            } while (iVar28 < (int)uVar31);
          }
          local_30c = local_30c + 1;
        } while (local_30c < iVar18);
      }
      local_300 = local_300 + 1;
      local_318 = local_318 + iVar18;
      param_1 = local_238;
    } while (local_300 < iVar1);
  }
  uVar23 = __xmm_80000000800000008000000080000000;
  local_264 = iVar18 * uVar31;
  iVar1 = local_264 + 1;
  local_260 = local_264 + uVar31;
  local_25c = local_260 + 1;
  local_308 = 0;
  if (0 < (param_2->field0_0x0)._s_0.Z) {
    fVar36 = (float)dVar10;
    local_248 = CONCAT44(local_248._4_4_,fVar36);
    fVar12 = (float)(param_1->Min).field0_0x0._s_0.Z;
    do {
      fVar37 = fVar36 + fVar12;
      fVar36 = (float)(param_1->Min).field0_0x0._s_0.Y;
      local_318 = 0;
      if (0 < (param_2->field0_0x0)._s_0.Y) {
        local_24c = (float)dVar38;
        local_240 = fVar37;
        fVar34 = local_24c;
        do {
          uVar13 = _UNK_150689518;
          uVar6 = ___xmm_00000000000000003ff0000000000000;
          iVar32 = local_318 + 1;
          iVar28 = (param_2->field0_0x0)._s_0.X;
          local_314 = 0;
          local_250 = fVar34 + fVar36;
          if (0 < iVar28) {
            local_268 = local_308 + -1;
            fVar35 = (float)dVar11;
            local_258 = local_308 + 1;
            local_254 = local_318 + -1;
            dVar39 = (double)local_250;
            dVar40 = (double)(float)((uint)fVar12 ^ uVar23);
            dVar10 = (double)fVar37;
            dVar38 = (double)(float)((uint)fVar36 ^ uVar23);
            iVar26 = (iVar18 * local_308 + local_318) * uVar31;
            fVar36 = (float)(param_1->Min).field0_0x0._s_0.X;
            do {
              local_298.Data = (FScriptContainerElement *)0x0;
              local_290 = 4;
              iVar5 = iVar26 + 1;
              iStack_140 = iVar26 + iVar16 + 2;
              iStack_13c = iVar26 + uVar31;
              iVar28 = (local_308 * (param_2->field0_0x0)._s_0.Y + local_318) * iVar28 + local_314;
              local_148 = iVar26;
              iStack_144 = iVar5;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,4,0,&local_298,4,&local_28c);
              *(ulonglong *)local_298.Data = CONCAT44(iStack_144,local_148);
              *(ulonglong *)(local_298.Data + 8) = CONCAT44(iStack_13c,iStack_140);
              if (((((local_314 < 0) || (iVar24 = (param_2->field0_0x0)._s_0.X, iVar24 <= local_314)
                    ) || (local_318 < 0)) ||
                  ((iVar20 = (param_2->field0_0x0)._s_0.Y, iVar20 <= local_318 || (local_268 < 0))))
                 || ((param_2->field0_0x0)._s_0.Z <= local_268)) {
                iVar24 = -1;
              }
              else {
                iVar24 = (local_268 * iVar20 + local_318) * iVar24 + local_314;
              }
              pFVar27 = (pTVar2->AllocatorInstance).Data;
              local_1e8 = 0;
              uStack_1e0 = 0;
              local_1d8 = __real_bff0000000000000;
              dStack_1d0 = dVar40;
              if (((pFVar27 <= (FScriptContainerElement *)&local_1e8) &&
                  ((FScriptContainerElement *)&local_1e8 <
                   pFVar27 + (longlong)(this->Planes).ArrayMax * 0x20)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar9 = (code *)swi(3);
                pFVar22 = (FPlanarCells *)(*pcVar9)();
                return pFVar22;
              }
              iVar20 = (this->Planes).ArrayNum;
              if (iVar20 == (this->Planes).ArrayMax) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1020,&pTVar2->AllocatorInstance,&(this->Planes).ArrayMax);
              }
              (this->Planes).ArrayNum = iVar20 + 1;
              pFVar8 = (pTVar2->AllocatorInstance).Data;
              pFVar27 = pFVar8 + (longlong)iVar20 * 0x20;
              *(undefined8 *)pFVar27 = local_1e8;
              *(undefined8 *)(pFVar27 + 8) = uStack_1e0;
              pFVar8 = pFVar8 + (longlong)iVar20 * 0x20 + 0x10;
              *(undefined8 *)pFVar8 = local_1d8;
              *(double *)(pFVar8 + 8) = dStack_1d0;
              iVar20 = (this->PlaneCells).ArrayNum;
              if (iVar20 == (this->PlaneCells).ArrayMax) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&pTVar3->AllocatorInstance,&(this->PlaneCells).ArrayMax);
              }
              (this->PlaneCells).ArrayNum = iVar20 + 1;
              pFVar27 = (pTVar3->AllocatorInstance).Data;
              *(int *)(pFVar27 + (longlong)iVar20 * 8) = iVar28;
              *(int *)(pFVar27 + (longlong)iVar20 * 8 + 4) = iVar24;
              pFVar27 = (pTVar4->AllocatorInstance).Data;
              if (((pFVar27 <= (FScriptContainerElement *)&local_298) &&
                  ((FScriptContainerElement *)&local_298 <
                   pFVar27 + (longlong)(this->PlaneBoundaries).ArrayMax * 0x10)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar9 = (code *)swi(3);
                pFVar22 = (FPlanarCells *)(*pcVar9)();
                return pFVar22;
              }
              iVar24 = (this->PlaneBoundaries).ArrayNum;
              if (iVar24 == (this->PlaneBoundaries).ArrayMax) {
                iVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar4->AllocatorInstance,
                                    &(this->PlaneBoundaries).ArrayMax);
              }
              FVar14.Data = local_298.Data;
              pFVar27 = (pTVar4->AllocatorInstance).Data + (longlong)iVar24 * 0x10;
              (this->PlaneBoundaries).ArrayNum = iVar24 + 1;
              *(undefined8 *)pFVar27 = 0;
              lVar30 = (longlong)local_290;
              *(int *)(pFVar27 + 8) = local_290;
              if (local_290 == 0) {
                *(int *)(pFVar27 + 0xc) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_290,0,(ForAnyElementType *)pFVar27,local_290,
                           (int *)(pFVar27 + 0xc));
                memcpy(*(void **)pFVar27,FVar14.Data,lVar30 << 2);
              }
              if (local_298.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_298.Data);
              }
              iStack_12c = iVar1 + iVar26;
              iVar20 = local_264 + iVar26;
              iVar33 = local_260 + iVar26;
              iVar24 = local_25c + iVar26;
              local_288.Data = (FScriptContainerElement *)0x0;
              local_280 = 4;
              local_138 = iVar20;
              iStack_134 = iVar33;
              iStack_130 = iVar24;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,4,0,&local_288,4,&local_27c);
              *(ulonglong *)local_288.Data = CONCAT44(iStack_134,local_138);
              *(ulonglong *)(local_288.Data + 8) = CONCAT44(iStack_12c,iStack_130);
              if ((((local_314 < 0) || (iVar25 = (param_2->field0_0x0)._s_0.X, iVar25 <= local_314))
                  || ((local_318 < 0 ||
                      ((iVar21 = (param_2->field0_0x0)._s_0.Y, iVar21 <= local_318 ||
                       (local_258 < 0)))))) || ((param_2->field0_0x0)._s_0.Z <= local_258)) {
                iVar25 = -1;
              }
              else {
                iVar25 = (iVar21 * local_258 + local_318) * iVar25 + local_314;
              }
              local_1c8 = 0;
              uStack_1c0 = 0;
              pFVar27 = (pTVar2->AllocatorInstance).Data;
              local_1b8 = __real_3ff0000000000000;
              dStack_1b0 = dVar10;
              if (((pFVar27 <= (FScriptContainerElement *)&local_1c8) &&
                  ((FScriptContainerElement *)&local_1c8 <
                   pFVar27 + (longlong)(this->Planes).ArrayMax * 0x20)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar9 = (code *)swi(3);
                pFVar22 = (FPlanarCells *)(*pcVar9)();
                return pFVar22;
              }
              iVar21 = (this->Planes).ArrayNum;
              if (iVar21 == (this->Planes).ArrayMax) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1020,&pTVar2->AllocatorInstance,&(this->Planes).ArrayMax);
              }
              (this->Planes).ArrayNum = iVar21 + 1;
              pFVar8 = (pTVar2->AllocatorInstance).Data;
              pFVar27 = pFVar8 + (longlong)iVar21 * 0x20;
              *(undefined8 *)pFVar27 = local_1c8;
              *(undefined8 *)(pFVar27 + 8) = uStack_1c0;
              pFVar8 = pFVar8 + (longlong)iVar21 * 0x20 + 0x10;
              *(undefined8 *)pFVar8 = local_1b8;
              *(double *)(pFVar8 + 8) = dStack_1b0;
              iVar21 = (this->PlaneCells).ArrayNum;
              if (iVar21 == (this->PlaneCells).ArrayMax) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&pTVar3->AllocatorInstance,&(this->PlaneCells).ArrayMax);
              }
              (this->PlaneCells).ArrayNum = iVar21 + 1;
              pFVar27 = (pTVar3->AllocatorInstance).Data;
              *(int *)(pFVar27 + (longlong)iVar21 * 8) = iVar28;
              *(int *)(pFVar27 + (longlong)iVar21 * 8 + 4) = iVar25;
              pFVar27 = (pTVar4->AllocatorInstance).Data;
              if (((pFVar27 <= (FScriptContainerElement *)&local_288) &&
                  ((FScriptContainerElement *)&local_288 <
                   pFVar27 + (longlong)(this->PlaneBoundaries).ArrayMax * 0x10)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar9 = (code *)swi(3);
                pFVar22 = (FPlanarCells *)(*pcVar9)();
                return pFVar22;
              }
              iVar25 = (this->PlaneBoundaries).ArrayNum;
              if (iVar25 == (this->PlaneBoundaries).ArrayMax) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar4->AllocatorInstance,
                                    &(this->PlaneBoundaries).ArrayMax);
              }
              FVar14.Data = local_288.Data;
              (this->PlaneBoundaries).ArrayNum = iVar25 + 1;
              pFVar27 = (pTVar4->AllocatorInstance).Data + (longlong)iVar25 * 0x10;
              *(undefined8 *)pFVar27 = 0;
              lVar30 = (longlong)local_280;
              *(int *)(pFVar27 + 8) = local_280;
              if (local_280 == 0) {
                *(int *)(pFVar27 + 0xc) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_280,0,(ForAnyElementType *)pFVar27,local_280,
                           (int *)(pFVar27 + 0xc));
                memcpy(*(void **)pFVar27,FVar14.Data,lVar30 << 2);
              }
              if (local_288.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_288.Data);
              }
              iStack_120 = iVar1 + iVar26;
              local_278.Data = (FScriptContainerElement *)0x0;
              local_270 = 4;
              local_128 = iVar26;
              iStack_124 = iVar20;
              iStack_11c = iVar5;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,4,0,&local_278,4,&local_26c);
              *(ulonglong *)local_278.Data = CONCAT44(iStack_124,local_128);
              *(ulonglong *)(local_278.Data + 8) = CONCAT44(iStack_11c,iStack_120);
              if (((local_314 < 0) || (iVar25 = (param_2->field0_0x0)._s_0.X, iVar25 <= local_314))
                 || ((local_254 < 0 ||
                     (((iVar21 = (param_2->field0_0x0)._s_0.Y, iVar21 <= local_254 ||
                       (local_308 < 0)) || ((param_2->field0_0x0)._s_0.Z <= local_308)))))) {
                iVar25 = -1;
              }
              else {
                iVar25 = (iVar21 * local_308 + local_254) * iVar25 + local_314;
              }
              local_198 = 0;
              pFVar27 = (pTVar2->AllocatorInstance).Data;
              local_1a8 = ___xmm_bff00000000000000000000000000000;
              uStack_1a0 = _UNK_1508ffb28;
              dStack_190 = dVar38;
              if (((pFVar27 <= (FScriptContainerElement *)&local_1a8) &&
                  ((FScriptContainerElement *)&local_1a8 <
                   pFVar27 + (longlong)(this->Planes).ArrayMax * 0x20)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar9 = (code *)swi(3);
                pFVar22 = (FPlanarCells *)(*pcVar9)();
                return pFVar22;
              }
              iVar21 = (this->Planes).ArrayNum;
              if (iVar21 == (this->Planes).ArrayMax) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1020,&pTVar2->AllocatorInstance,&(this->Planes).ArrayMax);
              }
              (this->Planes).ArrayNum = iVar21 + 1;
              pFVar8 = (pTVar2->AllocatorInstance).Data;
              pFVar27 = pFVar8 + (longlong)iVar21 * 0x20;
              *(undefined8 *)pFVar27 = local_1a8;
              *(undefined8 *)(pFVar27 + 8) = uStack_1a0;
              pFVar8 = pFVar8 + (longlong)iVar21 * 0x20 + 0x10;
              *(undefined8 *)pFVar8 = local_198;
              *(double *)(pFVar8 + 8) = dStack_190;
              iVar21 = (this->PlaneCells).ArrayNum;
              if (iVar21 == (this->PlaneCells).ArrayMax) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&pTVar3->AllocatorInstance,&(this->PlaneCells).ArrayMax);
              }
              (this->PlaneCells).ArrayNum = iVar21 + 1;
              pFVar27 = (pTVar3->AllocatorInstance).Data;
              *(int *)(pFVar27 + (longlong)iVar21 * 8) = iVar28;
              *(int *)(pFVar27 + (longlong)iVar21 * 8 + 4) = iVar25;
              pFVar27 = (pTVar4->AllocatorInstance).Data;
              if (((pFVar27 <= (FScriptContainerElement *)&local_278) &&
                  ((FScriptContainerElement *)&local_278 <
                   pFVar27 + (longlong)(this->PlaneBoundaries).ArrayMax * 0x10)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar9 = (code *)swi(3);
                pFVar22 = (FPlanarCells *)(*pcVar9)();
                return pFVar22;
              }
              iVar25 = (this->PlaneBoundaries).ArrayNum;
              if (iVar25 == (this->PlaneBoundaries).ArrayMax) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar4->AllocatorInstance,
                                    &(this->PlaneBoundaries).ArrayMax);
              }
              FVar14.Data = local_278.Data;
              (this->PlaneBoundaries).ArrayNum = iVar25 + 1;
              pFVar27 = (pTVar4->AllocatorInstance).Data + (longlong)iVar25 * 0x10;
              *(undefined8 *)pFVar27 = 0;
              lVar30 = (longlong)local_270;
              *(int *)(pFVar27 + 8) = local_270;
              if (local_270 == 0) {
                *(int *)(pFVar27 + 0xc) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_270,0,(ForAnyElementType *)pFVar27,local_270,
                           (int *)(pFVar27 + 0xc));
                memcpy(*(void **)pFVar27,FVar14.Data,lVar30 << 2);
              }
              if (local_278.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_278.Data);
              }
              local_2c8.Data = (FScriptContainerElement *)0x0;
              local_118 = iVar26 + uVar31;
              local_2c0 = 4;
              iStack_114 = iVar16 + 2 + iVar26;
              iStack_110 = iVar24;
              iStack_10c = iVar33;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,4,0,&local_2c8,4,&local_2bc);
              *(ulonglong *)local_2c8.Data = CONCAT44(iStack_114,local_118);
              *(ulonglong *)(local_2c8.Data + 8) = CONCAT44(iStack_10c,iStack_110);
              if (((((local_314 < 0) || (iVar25 = (param_2->field0_0x0)._s_0.X, iVar25 <= local_314)
                    ) || (iVar32 < 0)) ||
                  ((iVar21 = (param_2->field0_0x0)._s_0.Y, iVar21 <= iVar32 || (local_308 < 0)))) ||
                 ((param_2->field0_0x0)._s_0.Z <= local_308)) {
                iVar25 = -1;
              }
              else {
                iVar25 = (iVar21 * local_308 + iVar32) * iVar25 + local_314;
              }
              local_178 = 0;
              pFVar27 = (pTVar2->AllocatorInstance).Data;
              local_188 = ___xmm_3ff00000000000000000000000000000;
              uStack_180 = _UNK_15061cbc8;
              dStack_170 = dVar39;
              if (((pFVar27 <= (FScriptContainerElement *)&local_188) &&
                  ((FScriptContainerElement *)&local_188 <
                   pFVar27 + (longlong)(this->Planes).ArrayMax * 0x20)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar9 = (code *)swi(3);
                pFVar22 = (FPlanarCells *)(*pcVar9)();
                return pFVar22;
              }
              iVar21 = (this->Planes).ArrayNum;
              if (iVar21 == (this->Planes).ArrayMax) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1020,&pTVar2->AllocatorInstance,&(this->Planes).ArrayMax);
              }
              (this->Planes).ArrayNum = iVar21 + 1;
              pFVar8 = (pTVar2->AllocatorInstance).Data;
              pFVar27 = pFVar8 + (longlong)iVar21 * 0x20;
              *(undefined8 *)pFVar27 = local_188;
              *(undefined8 *)(pFVar27 + 8) = uStack_180;
              pFVar8 = pFVar8 + (longlong)iVar21 * 0x20 + 0x10;
              *(undefined8 *)pFVar8 = local_178;
              *(double *)(pFVar8 + 8) = dStack_170;
              iVar21 = (this->PlaneCells).ArrayNum;
              if (iVar21 == (this->PlaneCells).ArrayMax) {
                iVar21 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&pTVar3->AllocatorInstance,&(this->PlaneCells).ArrayMax);
              }
              (this->PlaneCells).ArrayNum = iVar21 + 1;
              pFVar27 = (pTVar3->AllocatorInstance).Data;
              *(int *)(pFVar27 + (longlong)iVar21 * 8) = iVar28;
              *(int *)(pFVar27 + (longlong)iVar21 * 8 + 4) = iVar25;
              pFVar27 = (pTVar4->AllocatorInstance).Data;
              if (((pFVar27 <= (FScriptContainerElement *)&local_2c8) &&
                  ((FScriptContainerElement *)&local_2c8 <
                   pFVar27 + (longlong)(this->PlaneBoundaries).ArrayMax * 0x10)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar9 = (code *)swi(3);
                pFVar22 = (FPlanarCells *)(*pcVar9)();
                return pFVar22;
              }
              iVar25 = (this->PlaneBoundaries).ArrayNum;
              if (iVar25 == (this->PlaneBoundaries).ArrayMax) {
                iVar25 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar4->AllocatorInstance,
                                    &(this->PlaneBoundaries).ArrayMax);
              }
              FVar14.Data = local_2c8.Data;
              (this->PlaneBoundaries).ArrayNum = iVar25 + 1;
              pFVar27 = (pTVar4->AllocatorInstance).Data + (longlong)iVar25 * 0x10;
              *(undefined8 *)pFVar27 = 0;
              lVar30 = (longlong)local_2c0;
              *(int *)(pFVar27 + 8) = local_2c0;
              if (local_2c0 == 0) {
                *(int *)(pFVar27 + 0xc) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_2c0,0,(ForAnyElementType *)pFVar27,local_2c0,
                           (int *)(pFVar27 + 0xc));
                memcpy(*(void **)pFVar27,FVar14.Data,lVar30 << 2);
              }
              if (local_2c8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2c8.Data);
              }
              iStack_104 = uVar31 + iVar26;
              local_2b8.Data = (FScriptContainerElement *)0x0;
              local_2b0 = 4;
              local_108 = iVar26;
              iStack_100 = iVar33;
              iStack_fc = iVar20;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,4,0,&local_2b8,4,&local_2ac);
              iVar20 = local_314 + -1;
              *(ulonglong *)local_2b8.Data = CONCAT44(iStack_104,local_108);
              *(ulonglong *)(local_2b8.Data + 8) = CONCAT44(iStack_fc,iStack_100);
              if (((iVar20 < 0) || (iVar33 = (param_2->field0_0x0)._s_0.X, iVar33 <= iVar20)) ||
                 (((local_318 < 0 ||
                   ((iVar25 = (param_2->field0_0x0)._s_0.Y, iVar25 <= local_318 || (local_308 < 0)))
                   ) || ((param_2->field0_0x0)._s_0.Z <= local_308)))) {
                iVar20 = -1;
              }
              else {
                iVar20 = (iVar25 * local_308 + local_318) * iVar33 + iVar20;
              }
              local_168 = ___xmm_0000000000000000bff0000000000000;
              uStack_160 = _UNK_15076ad98;
              dStack_150 = (double)(float)((uint)fVar36 ^ uVar23);
              pFVar27 = (pTVar2->AllocatorInstance).Data;
              local_158 = 0;
              if (((pFVar27 <= (FScriptContainerElement *)&local_168) &&
                  ((FScriptContainerElement *)&local_168 <
                   pFVar27 + (longlong)(this->Planes).ArrayMax * 0x20)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar9 = (code *)swi(3);
                pFVar22 = (FPlanarCells *)(*pcVar9)();
                return pFVar22;
              }
              iVar33 = (this->Planes).ArrayNum;
              if (iVar33 == (this->Planes).ArrayMax) {
                iVar33 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1020,&pTVar2->AllocatorInstance,&(this->Planes).ArrayMax);
              }
              (this->Planes).ArrayNum = iVar33 + 1;
              pFVar8 = (pTVar2->AllocatorInstance).Data;
              pFVar27 = pFVar8 + (longlong)iVar33 * 0x20;
              *(undefined8 *)pFVar27 = local_168;
              *(undefined8 *)(pFVar27 + 8) = uStack_160;
              pFVar8 = pFVar8 + (longlong)iVar33 * 0x20 + 0x10;
              *(undefined8 *)pFVar8 = local_158;
              *(double *)(pFVar8 + 8) = dStack_150;
              iVar33 = (this->PlaneCells).ArrayNum;
              if (iVar33 == (this->PlaneCells).ArrayMax) {
                iVar33 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&pTVar3->AllocatorInstance,&(this->PlaneCells).ArrayMax);
              }
              (this->PlaneCells).ArrayNum = iVar33 + 1;
              pFVar27 = (pTVar3->AllocatorInstance).Data;
              *(int *)(pFVar27 + (longlong)iVar33 * 8) = iVar28;
              *(int *)(pFVar27 + (longlong)iVar33 * 8 + 4) = iVar20;
              pFVar27 = (pTVar4->AllocatorInstance).Data;
              if (((pFVar27 <= (FScriptContainerElement *)&local_2b8) &&
                  ((FScriptContainerElement *)&local_2b8 <
                   pFVar27 + (longlong)(this->PlaneBoundaries).ArrayMax * 0x10)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar9 = (code *)swi(3);
                pFVar22 = (FPlanarCells *)(*pcVar9)();
                return pFVar22;
              }
              iVar20 = (this->PlaneBoundaries).ArrayNum;
              if (iVar20 == (this->PlaneBoundaries).ArrayMax) {
                iVar20 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar4->AllocatorInstance,
                                    &(this->PlaneBoundaries).ArrayMax);
              }
              FVar14.Data = local_2b8.Data;
              pFVar27 = (pTVar4->AllocatorInstance).Data + (longlong)iVar20 * 0x10;
              (this->PlaneBoundaries).ArrayNum = iVar20 + 1;
              *(undefined8 *)pFVar27 = 0;
              lVar30 = (longlong)local_2b0;
              *(int *)(pFVar27 + 8) = local_2b0;
              if (local_2b0 == 0) {
                *(int *)(pFVar27 + 0xc) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_2b0,0,(ForAnyElementType *)pFVar27,local_2b0,
                           (int *)(pFVar27 + 0xc));
                memcpy(*(void **)pFVar27,FVar14.Data,lVar30 << 2);
              }
              if (local_2b8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2b8.Data);
              }
              iStack_f4 = iVar1 + iVar26;
              iStack_ec = iVar16 + 2 + iVar26;
              local_2a8.Data = (FScriptContainerElement *)0x0;
              local_2a0 = 4;
              local_f8 = iVar5;
              iStack_f0 = iVar24;
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,4,0,&local_2a8,4,&local_29c);
              *(ulonglong *)local_2a8.Data = CONCAT44(iStack_f4,local_f8);
              *(ulonglong *)(local_2a8.Data + 8) = CONCAT44(iStack_ec,iStack_f0);
              local_314 = local_314 + 1;
              if (((local_314 < 0) || (iVar26 = (param_2->field0_0x0)._s_0.X, iVar26 <= local_314))
                 || ((local_318 < 0 ||
                     (((iVar24 = (param_2->field0_0x0)._s_0.Y, iVar24 <= local_318 ||
                       (local_308 < 0)) || ((param_2->field0_0x0)._s_0.Z <= local_308)))))) {
                iVar26 = -1;
              }
              else {
                iVar26 = (iVar24 * local_308 + local_318) * iVar26 + local_314;
              }
              pFVar27 = (pTVar2->AllocatorInstance).Data;
              local_1f8 = 0;
              local_208 = uVar6;
              uStack_200 = uVar13;
              dStack_1f0 = (double)(fVar35 + fVar36);
              if (((pFVar27 <= (FScriptContainerElement *)&local_208) &&
                  ((FScriptContainerElement *)&local_208 <
                   pFVar27 + (longlong)(this->Planes).ArrayMax * 0x20)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar9 = (code *)swi(3);
                pFVar22 = (FPlanarCells *)(*pcVar9)();
                return pFVar22;
              }
              iVar24 = (this->Planes).ArrayNum;
              if (iVar24 == (this->Planes).ArrayMax) {
                iVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x1020,&pTVar2->AllocatorInstance,&(this->Planes).ArrayMax);
              }
              (this->Planes).ArrayNum = iVar24 + 1;
              pFVar8 = (pTVar2->AllocatorInstance).Data;
              pFVar27 = pFVar8 + (longlong)iVar24 * 0x20;
              *(undefined8 *)pFVar27 = local_208;
              *(undefined8 *)(pFVar27 + 8) = uStack_200;
              pFVar8 = pFVar8 + (longlong)iVar24 * 0x20 + 0x10;
              *(undefined8 *)pFVar8 = local_1f8;
              *(double *)(pFVar8 + 8) = dStack_1f0;
              iVar24 = (this->PlaneCells).ArrayNum;
              if (iVar24 == (this->PlaneCells).ArrayMax) {
                iVar24 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x408,&pTVar3->AllocatorInstance,&(this->PlaneCells).ArrayMax);
              }
              (this->PlaneCells).ArrayNum = iVar24 + 1;
              pFVar27 = (pTVar3->AllocatorInstance).Data;
              *(int *)(pFVar27 + (longlong)iVar24 * 8) = iVar28;
              *(int *)(pFVar27 + (longlong)iVar24 * 8 + 4) = iVar26;
              pFVar27 = (pTVar4->AllocatorInstance).Data;
              if (((pFVar27 <= (FScriptContainerElement *)&local_2a8) &&
                  ((FScriptContainerElement *)&local_2a8 <
                   pFVar27 + (longlong)(this->PlaneBoundaries).ArrayMax * 0x10)) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
                pcVar9 = (code *)swi(3);
                pFVar22 = (FPlanarCells *)(*pcVar9)();
                return pFVar22;
              }
              iVar28 = (this->PlaneBoundaries).ArrayNum;
              if (iVar28 == (this->PlaneBoundaries).ArrayMax) {
                iVar28 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar4->AllocatorInstance,
                                    &(this->PlaneBoundaries).ArrayMax);
              }
              FVar14.Data = local_2a8.Data;
              pFVar27 = (pTVar4->AllocatorInstance).Data + (longlong)iVar28 * 0x10;
              (this->PlaneBoundaries).ArrayNum = iVar28 + 1;
              *(undefined8 *)pFVar27 = 0;
              lVar30 = (longlong)local_2a0;
              *(int *)(pFVar27 + 8) = local_2a0;
              if (local_2a0 == 0) {
                *(int *)(pFVar27 + 0xc) = 0;
              }
              else {
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,local_2a0,0,(ForAnyElementType *)pFVar27,local_2a0,
                           (int *)(pFVar27 + 0xc));
                memcpy(*(void **)pFVar27,FVar14.Data,lVar30 << 2);
              }
              if (local_2a8.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_2a8.Data);
              }
              iVar28 = (param_2->field0_0x0)._s_0.X;
              param_1 = local_238;
              fVar37 = local_240;
              iVar26 = iVar5;
              dVar11 = local_210;
              fVar36 = fVar35 + fVar36;
              fVar34 = local_24c;
            } while (local_314 < iVar28);
          }
          fVar36 = local_250;
          local_318 = iVar32;
        } while (iVar32 < (param_2->field0_0x0)._s_0.Y);
      }
      local_308 = local_308 + 1;
      fVar36 = (float)local_248;
      dVar38 = local_230;
      fVar12 = fVar37;
    } while (local_308 < (param_2->field0_0x0)._s_0.Z);
  }
  return local_228;
}

// FPlanarCells @ 14c9a3180

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPlanarCells * __thiscall
FPlanarCells::FPlanarCells
          (FPlanarCells *this,TBox<double> *param_1,TArrayView<FColor_const_,int> *param_2,
          int param_3,int param_4)

{
  int *piVar1;
  TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar3;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  ForAnyElementType FVar14;
  TBox<double> *pTVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  FPlanarCells *pFVar19;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  FScriptContainerElement *pFVar26;
  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
  *pTVar27;
  ulonglong uVar28;
  uint uVar29;
  longlong lVar30;
  uint uVar31;
  uint uVar32;
  TBox<double> *pTVar33;
  longlong lVar34;
  longlong lVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined1 auStackY_3e8 [32];
  int local_398;
  uint local_394;
  uint local_38c;
  undefined1 local_388 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_380;
  ForAnyElementType local_370;
  int local_368 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_360;
  int local_350;
  int local_34c;
  TArray<TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
  local_348;
  ForAnyElementType local_338;
  undefined8 local_330;
  ForAnyElementType local_328;
  int local_320 [2];
  TBox<double> *local_318;
  FPlanarCells *local_310;
  longlong local_308;
  uint local_300;
  ForAnyElementType local_2f8;
  uint local_2f0 [2];
  longlong local_2e8;
  longlong local_2e0;
  longlong local_2d8;
  ForAnyElementType local_2d0;
  int local_2c8;
  int local_2c4;
  ForAnyElementType local_2c0;
  int local_2b8;
  int local_2b4;
  uint local_2b0 [2];
  ForAnyElementType *local_2a8;
  uint local_2a0;
  int iStack_29c;
  ForAnyElementType local_298;
  int local_290 [2];
  longlong local_288;
  double local_280;
  double dStack_278;
  double local_270;
  double local_268;
  double dStack_260;
  double local_258;
  double local_248;
  double dStack_240;
  undefined8 local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  undefined8 local_218;
  double dStack_210;
  TPairInitializer<int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&> local_208;
  longlong local_1f8;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  double dStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  FScriptContainerElement *local_178;
  TArray<int,TSizedDefaultAllocator<32>_> *local_170;
  undefined8 local_168;
  undefined8 uStack_160;
  double local_158;
  double local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int local_f8;
  uint uStack_f4;
  int iStack_f0;
  int iStack_ec;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_3e8;
  this->AssumeConvexCells = false;
  local_208.Value = (TArray<int,TSizedDefaultAllocator<32>_> *)&(this->PlaneBoundaries).ArrayMax;
  uVar31 = 0;
  uVar25 = param_3 * param_4;
  (this->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Planes).ArrayNum = 0;
  (this->Planes).ArrayMax = 0;
  (this->PlaneCells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlaneCells).ArrayNum = 0;
  (this->PlaneCells).ArrayMax = 0;
  (this->PlaneBoundaries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlaneBoundaries).ArrayNum = 0;
  *(int *)local_208.Value = 0;
  (this->PlaneBoundaryVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlaneBoundaryVertices).ArrayNum = 0;
  (this->PlaneBoundaryVertices).ArrayMax = 0;
  (this->InternalSurfaceMaterials).GlobalMaterialID = 0;
  (this->InternalSurfaceMaterials).bGlobalVisibility = true;
  (this->InternalSurfaceMaterials).GlobalUVScale = 1.0;
  (this->InternalSurfaceMaterials).NoiseSettings.bIsSet = false;
  local_318 = param_1;
  local_310 = this;
  if ((param_2->ArrayNum != uVar25) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("Image.Num() == NumPix",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\PlanarCut.cpp"
                          ,0x1e6,L""), bVar16)) {
    pcVar7 = (code *)swi(3);
    pFVar19 = (FPlanarCells *)(*pcVar7)();
    return pFVar19;
  }
  local_370.Data = (FScriptContainerElement *)0x0;
  local_368[0] = 0;
  local_368[1] = 0;
  local_380.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_380.ArrayNum = 0;
  local_380.ArrayMax = 0;
  if ((int)uVar25 < 1) {
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
    }
  }
  else {
    UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,uVar25,&local_370,local_368,local_368 + 1);
  }
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_380,uVar25,Default);
  lVar34 = (longlong)(int)uVar25;
  local_308 = lVar34;
  if (0 < (int)uVar25) {
    lVar35 = 0;
    do {
      uVar29 = ~uVar31 >> 0x1f;
      uVar25 = 0;
      if ((int)uVar31 < param_2->ArrayNum) {
        uVar25 = uVar29;
      }
      if ((uVar25 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      if (param_2->DataPtr[lVar35].field0_0x0.Bits == 0xff000000) {
        uVar25 = 0;
        if ((int)uVar31 < local_368[0]) {
          uVar25 = uVar29;
        }
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FPlanarCells *)(*pcVar7)();
          return pFVar19;
        }
        *(undefined4 *)(local_370.Data + lVar35 * 8) = 0xffffffff;
        uVar25 = 0;
        if ((int)uVar31 < local_368[0]) {
          uVar25 = uVar29;
        }
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FPlanarCells *)(*pcVar7)();
          return pFVar19;
        }
        *(undefined4 *)(local_370.Data + lVar35 * 8 + 4) = 0;
        uVar25 = 0;
        if ((int)uVar31 < local_380.ArrayNum) {
          uVar25 = uVar29;
        }
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FPlanarCells *)(*pcVar7)();
          return pFVar19;
        }
        *(undefined4 *)(local_380.AllocatorInstance.Data + lVar35 * 4) = 0xffffffff;
      }
      else {
        uVar25 = 0;
        if ((int)uVar31 < local_368[0]) {
          uVar25 = uVar29;
        }
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FPlanarCells *)(*pcVar7)();
          return pFVar19;
        }
        *(uint *)(local_370.Data + lVar35 * 8) = uVar31;
        uVar25 = 0;
        if ((int)uVar31 < local_368[0]) {
          uVar25 = uVar29;
        }
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FPlanarCells *)(*pcVar7)();
          return pFVar19;
        }
        *(undefined4 *)(local_370.Data + lVar35 * 8 + 4) = 1;
        uVar25 = 0;
        if ((int)uVar31 < local_380.ArrayNum) {
          uVar25 = uVar29;
        }
        if ((uVar25 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FPlanarCells *)(*pcVar7)();
          return pFVar19;
        }
        *(undefined4 *)(local_380.AllocatorInstance.Data + lVar35 * 4) = 0xfffffffe;
      }
      uVar31 = uVar31 + 1;
      lVar35 = lVar35 + 1;
    } while (lVar35 < lVar34);
  }
  local_2a8 = &local_370;
  local_394 = 0;
  local_188 = ___xmm_000000010000000000000000ffffffff;
  uStack_180 = _UNK_150ae1758;
  local_168 = ___xmm_0000000000000001ffffffff00000000;
  uStack_160 = _UNK_1528da5c8;
  if (0 < param_4) {
    lVar35 = (longlong)param_3;
    local_38c = 0;
    local_350 = 0;
    local_2e0 = 0;
    local_2e8 = lVar35;
    do {
      lVar34 = local_2e0;
      iVar21 = local_350;
      uVar25 = local_38c;
      iVar17 = local_350;
      if (0 < param_3) {
        do {
          uVar31 = 0;
          if ((int)uVar25 < local_380.ArrayNum) {
            uVar31 = ~uVar25 >> 0x1f;
          }
          local_2d8 = lVar34;
          if ((uVar31 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            pFVar19 = (FPlanarCells *)(*pcVar7)();
            return pFVar19;
          }
          iVar21 = iVar17;
          if (*(int *)(local_380.AllocatorInstance.Data + lVar34 * 4) != -1) {
            lVar35 = 0;
            do {
              iVar21 = *(int *)((longlong)&local_188 + lVar35) + local_394;
              iVar22 = *(int *)((longlong)&local_168 + lVar35) + uVar25 + iVar17;
              uVar31 = iVar21 * param_3 + iVar22;
              if ((((-1 < iVar22) && (iVar22 < param_3)) && (-1 < iVar21)) && (iVar21 < param_4)) {
                uVar29 = 0;
                if ((int)uVar31 < local_380.ArrayNum) {
                  uVar29 = ~uVar31 >> 0x1f;
                }
                if ((uVar29 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar7 = (code *)swi(3);
                  pFVar19 = (FPlanarCells *)(*pcVar7)();
                  return pFVar19;
                }
                if (*(int *)(local_380.AllocatorInstance.Data + (longlong)(int)uVar31 * 4) != -1) {
                  uVar29 = `FPlanarCells::FPlanarCells'::__l2::<lambda_1>::operator()
                                     (&local_2a8,uVar25);
                  uVar31 = `FPlanarCells::FPlanarCells'::__l2::<lambda_1>::operator()
                                     (&local_2a8,uVar31);
                  if (uVar29 != uVar31) {
                    uVar32 = 0;
                    if ((int)uVar31 < local_368[0]) {
                      uVar32 = ~uVar31 >> 0x1f;
                    }
                    if (uVar32 == 0) {
                      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar16) {
                        pcVar7 = (code *)swi(3);
                        pFVar19 = (FPlanarCells *)(*pcVar7)();
                        return pFVar19;
                      }
                    }
                    FVar14.Data = local_370.Data;
                    uVar32 = 0;
                    if ((int)uVar29 < local_368[0]) {
                      uVar32 = ~uVar29 >> 0x1f;
                    }
                    iVar21 = local_368[0];
                    if (uVar32 == 0) {
                      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar16) {
                        pcVar7 = (code *)swi(3);
                        pFVar19 = (FPlanarCells *)(*pcVar7)();
                        return pFVar19;
                      }
                      iVar21 = local_368[0];
                    }
                    uVar32 = uVar29;
                    if (*(int *)(FVar14.Data + (longlong)(int)uVar31 * 8 + 4) <
                        *(int *)(local_370.Data + (longlong)(int)uVar29 * 8 + 4)) {
                      uVar32 = uVar31;
                      uVar31 = uVar29;
                    }
                    uVar29 = 0;
                    if ((int)uVar32 < iVar21) {
                      uVar29 = ~uVar32 >> 0x1f;
                    }
                    if ((uVar29 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar16)) {
                      pcVar7 = (code *)swi(3);
                      pFVar19 = (FPlanarCells *)(*pcVar7)();
                      return pFVar19;
                    }
                    *(uint *)(local_370.Data + (longlong)(int)uVar32 * 8) = uVar31;
                    uVar29 = 0;
                    if ((int)uVar32 < local_368[0]) {
                      uVar29 = ~uVar32 >> 0x1f;
                    }
                    if (uVar29 == 0) {
                      bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar16) {
                        pcVar7 = (code *)swi(3);
                        pFVar19 = (FPlanarCells *)(*pcVar7)();
                        return pFVar19;
                      }
                    }
                    iVar21 = *(int *)(local_370.Data + (longlong)(int)uVar32 * 8 + 4);
                    uVar29 = 0;
                    if ((int)uVar31 < local_368[0]) {
                      uVar29 = ~uVar31 >> 0x1f;
                    }
                    if ((uVar29 == 0) &&
                       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar16)) {
                      pcVar7 = (code *)swi(3);
                      pFVar19 = (FPlanarCells *)(*pcVar7)();
                      return pFVar19;
                    }
                    *(int *)(local_370.Data + (longlong)(int)uVar31 * 8 + 4) =
                         *(int *)(local_370.Data + (longlong)(int)uVar31 * 8 + 4) + iVar21;
                  }
                }
              }
              lVar35 = lVar35 + 4;
              lVar34 = local_2d8;
              iVar21 = local_350;
            } while (lVar35 < 0x10);
          }
          uVar25 = uVar25 + 1;
          local_2d8 = lVar34 + 1;
          lVar35 = local_2e8;
          lVar34 = local_2d8;
          iVar17 = iVar21;
        } while ((int)(iVar21 + uVar25) < param_3);
      }
      local_394 = local_394 + 1;
      local_38c = local_38c + param_3;
      local_2e0 = local_2e0 + lVar35;
      local_350 = iVar21 - param_3;
      this = local_310;
      lVar34 = local_308;
    } while ((int)local_394 < param_4);
  }
  uVar25 = 0;
  this->NumCells = 0;
  if (0 < lVar34) {
    lVar35 = 0;
    do {
      uVar31 = 0;
      if ((int)uVar25 < local_380.ArrayNum) {
        uVar31 = ~uVar25 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      if (*(int *)(local_380.AllocatorInstance.Data + lVar35 * 4) != -1) {
        uVar29 = `FPlanarCells::FPlanarCells'::__l2::<lambda_1>::operator()(&local_2a8,uVar25);
        lVar30 = (longlong)(int)uVar29;
        uVar32 = ~uVar29 >> 0x1f;
        uVar31 = 0;
        if ((int)uVar29 < local_380.ArrayNum) {
          uVar31 = uVar32;
        }
        if (uVar31 == 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            pFVar19 = (FPlanarCells *)(*pcVar7)();
            return pFVar19;
          }
        }
        iVar21 = local_380.ArrayNum;
        if (*(int *)(local_380.AllocatorInstance.Data + lVar30 * 4) == -2) {
          iVar21 = local_310->NumCells;
          local_310->NumCells = iVar21 + 1;
          uVar31 = 0;
          if ((int)uVar29 < local_380.ArrayNum) {
            uVar31 = uVar32;
          }
          if ((uVar31 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            pFVar19 = (FPlanarCells *)(*pcVar7)();
            return pFVar19;
          }
          *(int *)(local_380.AllocatorInstance.Data + lVar30 * 4) = iVar21;
          lVar34 = local_308;
          iVar21 = local_380.ArrayNum;
        }
        uVar31 = 0;
        if ((int)uVar29 < iVar21) {
          uVar31 = uVar32;
        }
        if (uVar31 == 0) {
          bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar16) {
            pcVar7 = (code *)swi(3);
            pFVar19 = (FPlanarCells *)(*pcVar7)();
            return pFVar19;
          }
          iVar21 = local_380.ArrayNum;
        }
        uVar43 = *(undefined4 *)(local_380.AllocatorInstance.Data + lVar30 * 4);
        uVar31 = 0;
        if ((int)uVar25 < iVar21) {
          uVar31 = ~uVar25 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar7 = (code *)swi(3);
          pFVar19 = (FPlanarCells *)(*pcVar7)();
          return pFVar19;
        }
        *(undefined4 *)(local_380.AllocatorInstance.Data + lVar35 * 4) = uVar43;
      }
      uVar25 = uVar25 + 1;
      lVar35 = lVar35 + 1;
      this = local_310;
    } while (lVar35 < lVar34);
  }
  local_298.Data = (FScriptContainerElement *)0x0;
  local_290[0] = 0;
  local_290[1] = 0;
  iVar21 = param_3 + 1;
  uVar25 = (param_4 + 1) * iVar21;
  if ((int)uVar25 < 1) {
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
    }
  }
  else {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (4,4,uVar25,&local_298,local_290,local_290 + 1);
    memset(local_298.Data + (longlong)iVar17 * 4,0,(longlong)(int)uVar25 << 2);
  }
  uVar25 = this->NumCells;
  local_328.Data = (FScriptContainerElement *)0x0;
  local_320[0] = 0;
  local_320[1] = 0;
  local_348.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_348.ArrayNum = 0;
  local_348.ArrayMax = 0;
  if ((int)uVar25 < 1) {
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
    }
  }
  else {
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x50,8,uVar25,&local_328,local_320,local_320 + 1);
    DefaultConstructItems<TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,int>
              (local_328.Data + (longlong)iVar17 * 0x50,uVar25);
  }
  uVar25 = this->NumCells;
  if (local_348.ArrayNum < (int)uVar25) {
    iVar22 = uVar25 - local_348.ArrayNum;
    iVar17 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x10,8,iVar22,&local_348.AllocatorInstance,&local_348.ArrayNum,
                        &local_348.ArrayMax);
    memset(local_348.AllocatorInstance.Data + (longlong)iVar17 * 0x10,0,(longlong)iVar22 << 4);
  }
  else {
    if ((int)uVar25 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar25);
    }
    if ((int)uVar25 < local_348.ArrayNum) {
      uVar31 = local_348.ArrayNum - uVar25;
      if (((int)(uVar25 | uVar31) < 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      if (uVar31 != 0) {
        TArray<TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>
        ::RemoveAtImpl(&local_348,uVar25,uVar31);
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,&local_348.AllocatorInstance,local_348.ArrayNum,&local_348.ArrayMax);
      }
    }
  }
  local_350 = 0;
  local_118 = ___xmm_00000000000000010000000000000001;
  uStack_110 = _UNK_15071d228;
  local_148 = ___xmm_00000001000000000000000100000000;
  uStack_140 = _UNK_15076b018;
  local_138 = ___xmm_00000001000000010000000000000000;
  uStack_130 = _UNK_150df0138;
  local_128 = ___xmm_00000001000000010000000000000000;
  uStack_120 = _UNK_150df0138;
  if (0 < param_4) {
    local_38c = 0;
    local_288 = 0;
    local_2e8 = 0;
    lVar34 = (longlong)param_3 * 4;
    local_1f8 = lVar34;
    do {
      local_394 = 0;
      lVar35 = local_2e8;
      lVar30 = local_288;
      iVar17 = local_350;
      if (0 < param_3) {
        do {
          local_300 = ~(local_394 + local_38c) >> 0x1f;
          uVar25 = 0;
          if ((int)(local_394 + local_38c) < local_380.ArrayNum) {
            uVar25 = local_300;
          }
          local_308 = lVar30;
          local_2d8 = lVar35;
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            pFVar19 = (FPlanarCells *)(*pcVar7)();
            return pFVar19;
          }
          uVar25 = *(uint *)(local_380.AllocatorInstance.Data + lVar35);
          if (uVar25 != 0xffffffff) {
            local_2e0 = 0;
            do {
              lVar34 = local_2e0;
              iVar23 = *(int *)((longlong)&local_188 + local_2e0) + iVar17;
              iVar22 = *(int *)((longlong)&local_168 + local_2e0) + local_394;
              uVar31 = iVar23 * param_3 + iVar22;
              if ((((iVar22 < 0) || (param_3 <= iVar22)) || (iVar23 < 0)) || (param_4 <= iVar23)) {
LAB_14c9a3ebf:
                local_360.ArrayNum = 2;
                local_2a0 = (*(int *)((longlong)&local_148 + lVar34) + iVar17) * iVar21 +
                            *(int *)((longlong)&local_138 + lVar34) + local_394;
                iStack_29c = (*(int *)((longlong)&local_128 + lVar34) + iVar17) * iVar21 +
                             *(int *)((longlong)&local_118 + lVar34) + local_394;
                local_360.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                UE::Core::Private::
                ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (4,4,2,0,&local_360.AllocatorInstance,2,&local_360.ArrayMax);
                uVar31 = ~uVar25 >> 0x1f;
                *(ulonglong *)local_360.AllocatorInstance.Data = CONCAT44(iStack_29c,local_2a0);
                lVar34 = (longlong)(int)uVar25 * 0x50;
                while( true ) {
                  uVar32 = 0;
                  uVar29 = uVar32;
                  if ((int)uVar25 < local_320[0]) {
                    uVar29 = uVar31;
                  }
                  if ((uVar29 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar7 = (code *)swi(3);
                    pFVar19 = (FPlanarCells *)(*pcVar7)();
                    return pFVar19;
                  }
                  FVar14.Data = local_328.Data;
                  uVar29 = uVar32;
                  if ((int)(local_360.ArrayNum - 1U) < local_360.ArrayNum) {
                    uVar29 = ~(local_360.ArrayNum - 1U) >> 0x1f;
                  }
                  if ((uVar29 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar7 = (code *)swi(3);
                    pFVar19 = (FPlanarCells *)(*pcVar7)();
                    return pFVar19;
                  }
                  uVar29 = *(uint *)(local_360.AllocatorInstance.Data +
                                    (longlong)(local_360.ArrayNum + -1) * 4);
                  if (*(int *)(FVar14.Data + lVar34 + 8) == *(int *)(FVar14.Data + lVar34 + 0x34))
                  break;
                  pFVar26 = *(FScriptContainerElement **)(FVar14.Data + lVar34 + 0x38 + 8);
                  pFVar24 = FVar14.Data + lVar34 + 0x38;
                  if (pFVar26 != (FScriptContainerElement *)0x0) {
                    pFVar24 = pFVar26;
                  }
                  iVar17 = *(int *)(pFVar24 +
                                   (ulonglong)(*(int *)(FVar14.Data + lVar34 + 0x48) - 1U & uVar29)
                                   * 4);
                  if (iVar17 == -1) break;
                  while (*(uint *)((longlong)iVar17 * 0x20 + *(longlong *)(FVar14.Data + lVar34)) !=
                         uVar29) {
                    iVar17 = *(int *)((longlong)iVar17 * 0x20 + 0x18 +
                                     *(longlong *)(FVar14.Data + lVar34));
                    if (iVar17 == -1) goto LAB_14c9a4058;
                  }
                  if ((local_360.ArrayNum < 1) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar7 = (code *)swi(3);
                    pFVar19 = (FPlanarCells *)(*pcVar7)();
                    return pFVar19;
                  }
                  iVar17 = (local_360.ArrayNum - (local_360.ArrayNum + -1)) + -1;
                  if (iVar17 != 0) {
                    memmove(local_360.AllocatorInstance.Data +
                            (longlong)(local_360.ArrayNum + -1) * 4,
                            local_360.AllocatorInstance.Data +
                            (longlong)(local_360.ArrayNum + -1) * 4 + 4,(longlong)iVar17 << 2);
                  }
                  local_360.ArrayNum = local_360.ArrayNum + -1;
                  if ((int)uVar25 < local_320[0]) {
                    uVar32 = uVar31;
                  }
                  if ((uVar32 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar7 = (code *)swi(3);
                    pFVar19 = (FPlanarCells *)(*pcVar7)();
                    return pFVar19;
                  }
                  pTVar20 = TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                            ::FindChecked((TMapBase<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
                                           *)(local_328.Data + lVar34),uVar29);
                  if ((&local_360 == pTVar20) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(void*)this != (void*)&Source",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x96e,L""), bVar16)) {
                    pcVar7 = (code *)swi(3);
                    pFVar19 = (FPlanarCells *)(*pcVar7)();
                    return pFVar19;
                  }
                  iVar17 = pTVar20->ArrayNum;
                  if (iVar17 != 0) {
                    iVar22 = UE::Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (4,4,iVar17,&local_360.AllocatorInstance,&local_360.ArrayNum,
                                        &local_360.ArrayMax);
                    memcpy(local_360.AllocatorInstance.Data + (longlong)iVar22 * 4,
                           (pTVar20->AllocatorInstance).Data,(longlong)iVar17 << 2);
                  }
                  uVar32 = 0;
                  if ((int)uVar25 < local_320[0]) {
                    uVar32 = uVar31;
                  }
                  if ((uVar32 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar7 = (code *)swi(3);
                    pFVar19 = (FPlanarCells *)(*pcVar7)();
                    return pFVar19;
                  }
                  pTVar27 = (TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                             *)(local_328.Data + lVar34);
                  local_2b0[0] = uVar29;
                  if (*(int *)&(pTVar27->Elements).field_0x8 !=
                      *(int *)&(pTVar27->Elements).field_0x34) {
                    TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                    ::RemoveImpl<int>(pTVar27,uVar29,(int *)local_2b0);
                  }
                }
LAB_14c9a4058:
                if (uVar29 == local_2a0) {
                  if ((int)uVar25 < local_348.ArrayNum) {
                    uVar32 = uVar31;
                  }
                  if ((uVar32 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar7 = (code *)swi(3);
                    pFVar19 = (FPlanarCells *)(*pcVar7)();
                    return pFVar19;
                  }
                  pFVar26 = local_348.AllocatorInstance.Data + (longlong)(int)uVar25 * 0x10;
                  if (((*(TArray<int,TSizedDefaultAllocator<32>_> **)&pFVar26->field_0x0 <=
                        &local_360) &&
                      (&local_360 <
                       *(TArray<int,TSizedDefaultAllocator<32>_> **)&pFVar26->field_0x0 +
                       *(int *)(pFVar26 + 0xc))) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x7a5,
                                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                         ), bVar16)) {
                    pcVar7 = (code *)swi(3);
                    pFVar19 = (FPlanarCells *)(*pcVar7)();
                    return pFVar19;
                  }
                  iVar17 = *(int *)(pFVar26 + 8);
                  if (iVar17 == *(int *)(pFVar26 + 0xc)) {
                    iVar17 = UE::Core::Private::
                             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (0x810,(ForAnyElementType *)pFVar26,(int *)(pFVar26 + 0xc));
                  }
                  FVar14.Data = local_360.AllocatorInstance.Data;
                  *(int *)(pFVar26 + 8) = iVar17 + 1;
                  pFVar26 = *(FScriptContainerElement **)&pFVar26->field_0x0 +
                            (longlong)iVar17 * 0x10;
                  *(undefined8 *)pFVar26 = 0;
                  lVar34 = (longlong)local_360.ArrayNum;
                  *(int *)(pFVar26 + 8) = local_360.ArrayNum;
                  if (local_360.ArrayNum == 0) {
                    *(int *)(pFVar26 + 0xc) = 0;
                  }
                  else {
                    UE::Core::Private::
                    ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                              (4,4,local_360.ArrayNum,0,(ForAnyElementType *)pFVar26,
                               local_360.ArrayNum,(int *)(pFVar26 + 0xc));
                    memcpy(*(void **)pFVar26,FVar14.Data,lVar34 << 2);
                  }
                }
                else {
                  if ((int)uVar25 < local_320[0]) {
                    uVar32 = uVar31;
                  }
                  if ((uVar32 == 0) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar7 = (code *)swi(3);
                    pFVar19 = (FPlanarCells *)(*pcVar7)();
                    return pFVar19;
                  }
                  pTVar27 = (TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                             *)(local_328.Data + lVar34);
                  if ((local_360.ArrayNum < 1) &&
                     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar16)) {
                    pcVar7 = (code *)swi(3);
                    pFVar19 = (FPlanarCells *)(*pcVar7)();
                    return pFVar19;
                  }
                  local_178 = local_360.AllocatorInstance.Data;
                  local_170 = &local_360;
                  TSet<TTuple<int,TArray<int,TSizedDefaultAllocator<32>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>,FDefaultSetAllocator>
                  ::
                  Emplace<TPairInitializer<int_const_&,TArray<int,TSizedDefaultAllocator<32>_>_const_&>_>
                            (pTVar27,&local_208,(bool *)&local_178);
                }
                lVar34 = local_2e0;
                iVar17 = local_350;
                if (local_360.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_360.AllocatorInstance.Data);
                  lVar34 = local_2e0;
                  iVar17 = local_350;
                }
              }
              else {
                uVar29 = 0;
                if ((int)uVar31 < local_380.ArrayNum) {
                  uVar29 = ~uVar31 >> 0x1f;
                }
                if ((uVar29 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar7 = (code *)swi(3);
                  pFVar19 = (FPlanarCells *)(*pcVar7)();
                  return pFVar19;
                }
                FVar14.Data = local_380.AllocatorInstance.Data;
                uVar29 = 0;
                if ((int)(local_38c + local_394) < local_380.ArrayNum) {
                  uVar29 = local_300;
                }
                if ((uVar29 == 0) &&
                   (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar16)) {
                  pcVar7 = (code *)swi(3);
                  pFVar19 = (FPlanarCells *)(*pcVar7)();
                  return pFVar19;
                }
                if (*(int *)(FVar14.Data + (longlong)(int)uVar31 * 4) !=
                    *(int *)(local_380.AllocatorInstance.Data + local_2d8)) goto LAB_14c9a3ebf;
              }
              local_2e0 = lVar34 + 4;
              lVar35 = local_2d8;
            } while (local_2e0 < 0x10);
          }
          local_394 = local_394 + 1;
          local_308 = local_308 + 1;
          local_2d8 = lVar35 + 4;
          lVar35 = local_2d8;
          lVar34 = local_1f8;
          lVar30 = local_308;
        } while ((int)local_394 < param_3);
      }
      local_350 = iVar17 + 1;
      local_38c = local_38c + param_3;
      local_288 = local_288 + param_3;
      local_2e8 = local_2e8 + lVar34;
      this = local_310;
    } while (local_350 < param_4);
  }
  dVar13 = __real_3eb0c6f7a0b5ed8d;
  dVar9 = (local_318->Max).field0_0x0._s_0.X - (local_318->Min).field0_0x0._s_0.X;
  dVar10 = (local_318->Max).field0_0x0._s_0.Y - (local_318->Min).field0_0x0._s_0.Y;
  local_394 = 0;
  if (0 < this->NumCells) {
    uVar43 = SUB84(__real_3ff0000000000000,0);
    uVar44 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    local_2e8 = 0;
    dVar11 = __real_3ff0000000000000 / (double)param_3;
    dVar12 = __real_3ff0000000000000 / (double)param_4;
    uVar25 = (uint)__xmm_80000000000000008000000000000000;
    uVar31 = __xmm_80000000000000008000000000000000._4_4_;
    do {
      lVar34 = local_2e8;
      uVar32 = ~local_394 >> 0x1f;
      uVar29 = 0;
      if ((int)local_394 < local_348.ArrayNum) {
        uVar29 = uVar32;
      }
      if ((uVar29 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      if ((*(int *)(local_348.AllocatorInstance.Data + lVar34 * 0x10 + 8) < 1) &&
         (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4490104728457314950>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\PlanarCut.cpp"
                              ,0x286,"CellBoundaryCorners[CellIdx].Num() > 0"), bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      uVar29 = 0;
      if ((int)local_394 < local_320[0]) {
        uVar29 = uVar32;
      }
      if ((uVar29 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      if ((*(int *)(local_328.Data + lVar34 * 0x50 + 8) !=
           *(int *)(local_328.Data + lVar34 * 0x50 + 0x34)) &&
         (bVar16 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<4490104728457314951>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\PlanarCut.cpp"
                              ,0x287,"PerCellBoundaryEdgeArrays[CellIdx].Num() == 0"), bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      uVar29 = 0;
      if ((int)local_394 < local_348.ArrayNum) {
        uVar29 = uVar32;
      }
      if ((uVar29 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      if (*(int *)(local_348.AllocatorInstance.Data + lVar34 * 0x10 + 8) != 1) {
        local_388[0] = 0;
        `FPlanarCells::FPlanarCells'::__l57::<lambda_3>::operator()(local_388);
      }
      uVar29 = (this->PlaneBoundaryVertices).ArrayNum;
      uVar18 = 0;
      if ((int)local_394 < local_348.ArrayNum) {
        uVar18 = uVar32;
      }
      local_300 = uVar29;
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      FVar14.Data = local_348.AllocatorInstance.Data;
      if ((*(int *)(local_348.AllocatorInstance.Data + lVar34 * 0x10 + 8) < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      plVar5 = *(longlong **)&FVar14.Data[lVar34 * 0x10].field_0x0;
      if (((int)plVar5[1] < 1) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      uVar32 = 1;
      lVar34 = 1;
      iVar22 = 0;
      local_398 = 0;
      local_338.Data = (FScriptContainerElement *)0x0;
      local_330 = 0;
      iVar17 = (int)plVar5[1];
      dVar40 = (double)(*(int *)*plVar5 % iVar21) * dVar9 * dVar11 +
               (local_318->Min).field0_0x0._s_0.X;
      dVar41 = (double)(*(int *)*plVar5 / iVar21) * dVar10 * dVar12 +
               (local_318->Min).field0_0x0._s_0.Y;
      pTVar33 = local_318;
      if (1 < iVar17) {
        iVar23 = uVar29 + 1;
        do {
          uVar25 = 0;
          if ((int)uVar32 < iVar17) {
            uVar25 = ~uVar32 >> 0x1f;
          }
          if ((uVar25 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            pFVar19 = (FPlanarCells *)(*pcVar7)();
            return pFVar19;
          }
          pTVar15 = local_318;
          iVar17 = *(int *)(*plVar5 + lVar34 * 4);
          dVar37 = (double)(iVar17 % iVar21) * dVar9 * dVar11 + (pTVar33->Min).field0_0x0._s_0.X;
          dVar8 = (double)(iVar17 / iVar21) * dVar10 * dVar12 + (pTVar33->Min).field0_0x0._s_0.Y;
          dVar40 = dVar37 - dVar40;
          dVar41 = dVar8 - dVar41;
          dVar36 = dVar41 * dVar41 + dVar40 * dVar40;
          if (dVar36 <= __real_3e45798ee0000000) {
            dVar36 = 0.0;
            dVar42 = 0.0;
          }
          else {
            local_158 = __real_3ff0000000000000 / SQRT(dVar36);
            dVar36 = local_158 * dVar40;
            dVar42 = local_158 * dVar41;
          }
          iVar17 = (int)plVar5[1];
          uVar25 = uVar32 + 1;
          dVar40 = dVar37;
          dVar41 = dVar8;
          if ((int)uVar25 < iVar17) {
            do {
              lVar35 = lVar34 + 1;
              uVar31 = 0;
              if ((int)uVar25 < iVar17) {
                uVar31 = ~uVar25 >> 0x1f;
              }
              if ((uVar31 == 0) &&
                 (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar16)) {
                pcVar7 = (code *)swi(3);
                pFVar19 = (FPlanarCells *)(*pcVar7)();
                return pFVar19;
              }
              iVar17 = *(int *)(*plVar5 + lVar35 * 4);
              dVar38 = (double)(iVar17 % iVar21) * dVar9 * dVar11 + (pTVar15->Min).field0_0x0._s_0.X
              ;
              dVar39 = (double)(iVar17 / iVar21) * dVar10 * dVar12 +
                       (pTVar15->Min).field0_0x0._s_0.Y;
              dVar40 = dVar37;
              dVar41 = dVar8;
              if ((dVar39 - dVar8) * dVar42 + (dVar38 - dVar37) * dVar36 < dVar13) break;
              iVar17 = (int)plVar5[1];
              uVar31 = uVar25 + 1;
              lVar34 = lVar35;
              uVar32 = uVar25;
              dVar40 = dVar38;
              dVar41 = dVar39;
              dVar37 = dVar38;
              dVar8 = dVar39;
              uVar25 = uVar31;
            } while ((int)uVar31 < iVar17);
          }
          pFVar19 = local_310;
          pTVar33 = local_318;
          pFVar26 = (local_310->PlaneBoundaryVertices).AllocatorInstance.Data;
          local_270 = (local_318->Min).field0_0x0._s_0.Z;
          local_280 = dVar40;
          dStack_278 = dVar41;
          if (((pFVar26 <= (FScriptContainerElement *)&local_280) &&
              ((FScriptContainerElement *)&local_280 <
               pFVar26 + (longlong)(local_310->PlaneBoundaryVertices).ArrayMax * 0x18)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar7 = (code *)swi(3);
            pFVar19 = (FPlanarCells *)(*pcVar7)();
            return pFVar19;
          }
          iVar17 = (pFVar19->PlaneBoundaryVertices).ArrayNum;
          piVar1 = &(pFVar19->PlaneBoundaryVertices).ArrayMax;
          if (iVar17 == *piVar1) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&(pFVar19->PlaneBoundaryVertices).AllocatorInstance,piVar1);
          }
          (pFVar19->PlaneBoundaryVertices).ArrayNum = iVar17 + 1;
          pFVar24 = (pFVar19->PlaneBoundaryVertices).AllocatorInstance.Data;
          pFVar26 = pFVar24 + (longlong)iVar17 * 0x18;
          *(double *)pFVar26 = local_280;
          *(double *)(pFVar26 + 8) = dStack_278;
          *(double *)(pFVar24 + (longlong)iVar17 * 0x18 + 0x10) = local_270;
          pFVar26 = (pFVar19->PlaneBoundaryVertices).AllocatorInstance.Data;
          local_258 = (pTVar33->Max).field0_0x0._s_0.Z;
          local_268 = dVar40;
          dStack_260 = dVar41;
          if (((pFVar26 <= (FScriptContainerElement *)&local_268) &&
              ((FScriptContainerElement *)&local_268 <
               pFVar26 + (longlong)(pFVar19->PlaneBoundaryVertices).ArrayMax * 0x18)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar7 = (code *)swi(3);
            pFVar19 = (FPlanarCells *)(*pcVar7)();
            return pFVar19;
          }
          iVar17 = (pFVar19->PlaneBoundaryVertices).ArrayNum;
          if (iVar17 == (pFVar19->PlaneBoundaryVertices).ArrayMax) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&(pFVar19->PlaneBoundaryVertices).AllocatorInstance,
                                &(pFVar19->PlaneBoundaryVertices).ArrayMax);
          }
          (pFVar19->PlaneBoundaryVertices).ArrayNum = iVar17 + 1;
          pFVar24 = (pFVar19->PlaneBoundaryVertices).AllocatorInstance.Data;
          pFVar26 = pFVar24 + (longlong)iVar17 * 0x18;
          *(double *)pFVar26 = local_268;
          *(double *)(pFVar26 + 8) = dStack_260;
          *(double *)(pFVar24 + (longlong)iVar17 * 0x18 + 0x10) = local_258;
          local_34c = iVar23 + -1;
          if (((local_338.Data <= (FScriptContainerElement *)&local_34c) &&
              ((FScriptContainerElement *)&local_34c <
               local_338.Data + (longlong)local_330._4_4_ * 4)) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar16)) {
            pcVar7 = (code *)swi(3);
            pFVar19 = (FPlanarCells *)(*pcVar7)();
            return pFVar19;
          }
          iVar17 = (int)local_330;
          if ((int)local_330 == local_330._4_4_) {
            iVar17 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_338,(int *)((longlong)&local_330 + 4));
          }
          local_330 = CONCAT44(local_330._4_4_,iVar17 + 1);
          *(int *)(local_338.Data + (longlong)iVar17 * 4) = local_34c;
          if (0 < local_398) {
            iStack_104 = local_34c;
            iStack_100 = local_34c + -2;
            iStack_fc = iVar23 + -2;
            local_2d0.Data = (FScriptContainerElement *)0x0;
            local_2c8 = 4;
            local_108 = iVar23;
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,4,0,&local_2d0,4,&local_2c4);
            dVar37 = (double)CONCAT44((uint)((ulonglong)dVar36 >> 0x20) ^
                                      __xmm_80000000000000008000000000000000._4_4_,
                                      SUB84(dVar36,0) ^ (uint)__xmm_80000000000000008000000000000000
                                     );
            *(ulonglong *)local_2d0.Data = CONCAT44(iStack_104,local_108);
            *(ulonglong *)(local_2d0.Data + 8) = CONCAT44(iStack_fc,iStack_100);
            iVar17 = (pFVar19->PlaneBoundaryVertices).ArrayNum;
            uVar31 = iVar17 - 1;
            uVar25 = 0;
            if ((int)uVar31 < iVar17) {
              uVar25 = ~uVar31 >> 0x1f;
            }
            if ((uVar25 == 0) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar16)) {
              pcVar7 = (code *)swi(3);
              pFVar19 = (FPlanarCells *)(*pcVar7)();
              return pFVar19;
            }
            lVar35 = (longlong)(pFVar19->PlaneBoundaryVertices).ArrayNum;
            pFVar24 = (pFVar19->Planes).AllocatorInstance.Data;
            pFVar6 = (pFVar19->PlaneBoundaryVertices).AllocatorInstance.Data;
            pFVar26 = pFVar6 + lVar35 * 0x18 + -0x18;
            local_1b8 = *(double *)(pFVar6 + lVar35 * 0x18 + -8);
            local_238 = 0;
            dStack_230 = dVar37 * *(double *)(pFVar26 + 8) + *(double *)pFVar26 * dVar42;
            local_248 = dVar42;
            dStack_240 = dVar37;
            if (((pFVar24 <= (FScriptContainerElement *)&local_248) &&
                ((FScriptContainerElement *)&local_248 <
                 pFVar24 + (longlong)(pFVar19->Planes).ArrayMax * 0x20)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar7 = (code *)swi(3);
              pFVar19 = (FPlanarCells *)(*pcVar7)();
              return pFVar19;
            }
            iVar17 = (pFVar19->Planes).ArrayNum;
            if (iVar17 == (pFVar19->Planes).ArrayMax) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1020,&(pFVar19->Planes).AllocatorInstance,
                                  &(pFVar19->Planes).ArrayMax);
            }
            (pFVar19->Planes).ArrayNum = iVar17 + 1;
            pFVar24 = (pFVar19->Planes).AllocatorInstance.Data;
            pFVar26 = pFVar24 + (longlong)iVar17 * 0x20;
            *(double *)pFVar26 = local_248;
            *(double *)(pFVar26 + 8) = dStack_240;
            pFVar24 = pFVar24 + (longlong)iVar17 * 0x20 + 0x10;
            *(undefined8 *)pFVar24 = local_238;
            *(double *)(pFVar24 + 8) = dStack_230;
            iVar17 = (pFVar19->PlaneCells).ArrayNum;
            if (iVar17 == (pFVar19->PlaneCells).ArrayMax) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&(pFVar19->PlaneCells).AllocatorInstance,
                                  &(pFVar19->PlaneCells).ArrayMax);
            }
            (pFVar19->PlaneCells).ArrayNum = iVar17 + 1;
            pFVar26 = (pFVar19->PlaneCells).AllocatorInstance.Data;
            *(uint *)(pFVar26 + (longlong)iVar17 * 8) = local_394;
            *(undefined4 *)(pFVar26 + (longlong)iVar17 * 8 + 4) = 0xffffffff;
            pFVar26 = (pFVar19->PlaneBoundaries).AllocatorInstance.Data;
            if (((pFVar26 <= (FScriptContainerElement *)&local_2d0) &&
                ((FScriptContainerElement *)&local_2d0 <
                 pFVar26 + (longlong)(pFVar19->PlaneBoundaries).ArrayMax * 0x10)) &&
               (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar16)) {
              pcVar7 = (code *)swi(3);
              pFVar19 = (FPlanarCells *)(*pcVar7)();
              return pFVar19;
            }
            iVar17 = (pFVar19->PlaneBoundaries).ArrayNum;
            if (iVar17 == (pFVar19->PlaneBoundaries).ArrayMax) {
              iVar17 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(pFVar19->PlaneBoundaries).AllocatorInstance,
                                  &(pFVar19->PlaneBoundaries).ArrayMax);
            }
            FVar14.Data = local_2d0.Data;
            (pFVar19->PlaneBoundaries).ArrayNum = iVar17 + 1;
            pFVar26 = (pFVar19->PlaneBoundaries).AllocatorInstance.Data + (longlong)iVar17 * 0x10;
            *(undefined8 *)&pFVar26->field_0x0 = 0;
            lVar35 = (longlong)local_2c8;
            *(int *)&pFVar26[8].field_0x0 = local_2c8;
            if (local_2c8 == 0) {
              *(int *)(pFVar26 + 0xc) = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,local_2c8,0,(ForAnyElementType *)pFVar26,local_2c8,
                         (int *)(pFVar26 + 0xc));
              memcpy(*(void **)&pFVar26->field_0x0,FVar14.Data,lVar35 << 2);
            }
            pTVar33 = local_318;
            if (local_2d0.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_2d0.Data);
              pTVar33 = local_318;
            }
          }
          iVar17 = (int)plVar5[1];
          iVar22 = local_398 + 1;
          iVar23 = iVar23 + 2;
          uVar32 = uVar32 + 1;
          lVar34 = lVar34 + 1;
          local_398 = iVar22;
        } while ((int)uVar32 < iVar17);
        uVar43 = SUB84(__real_3ff0000000000000,0);
        uVar44 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
        uVar25 = (uint)__xmm_80000000000000008000000000000000;
        uVar31 = __xmm_80000000000000008000000000000000._4_4_;
        uVar29 = local_300;
      }
      if ((iVar17 < 2) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      dVar40 = ((double)(*(int *)(*plVar5 + 4) % iVar21) * dVar9 * dVar11 +
               (pTVar33->Min).field0_0x0._s_0.X) - dVar40;
      dVar41 = ((double)(*(int *)(*plVar5 + 4) / iVar21) * dVar10 * dVar12 +
               (pTVar33->Min).field0_0x0._s_0.Y) - dVar41;
      dVar37 = dVar41 * dVar41 + dVar40 * dVar40;
      if (dVar37 <= __real_3e45798ee0000000) {
        dVar40 = 0.0;
        dVar41 = 0.0;
      }
      else {
        local_150 = (double)CONCAT44(uVar44,uVar43) / SQRT(dVar37);
        dVar40 = local_150 * dVar40;
        dVar41 = local_150 * dVar41;
      }
      iStack_ec = uVar29 + iVar22 * 2;
      local_f8 = uVar29 + 1;
      local_2b8 = 4;
      iStack_f0 = iStack_ec + -2;
      iStack_ec = iStack_ec + -1;
      local_2c0.Data = (FScriptContainerElement *)0x0;
      uStack_f4 = uVar29;
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,4,0,&local_2c0,4,&local_2b4);
      pFVar19 = local_310;
      dVar40 = (double)CONCAT44((uint)((ulonglong)dVar40 >> 0x20) ^ uVar31,SUB84(dVar40,0) ^ uVar25)
      ;
      *(ulonglong *)local_2c0.Data = CONCAT44(uStack_f4,local_f8);
      *(ulonglong *)(local_2c0.Data + 8) = CONCAT44(iStack_ec,iStack_f0);
      iVar17 = (local_310->PlaneBoundaryVertices).ArrayNum;
      uVar32 = iVar17 - 1;
      uVar29 = 0;
      if ((int)uVar32 < iVar17) {
        uVar29 = ~uVar32 >> 0x1f;
      }
      if ((uVar29 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      lVar34 = (longlong)(pFVar19->PlaneBoundaryVertices).ArrayNum;
      pTVar2 = &pFVar19->Planes;
      pFVar24 = (pFVar19->PlaneBoundaryVertices).AllocatorInstance.Data;
      pFVar26 = pFVar24 + lVar34 * 0x18 + -0x18;
      local_1b8 = *(double *)(pFVar24 + lVar34 * 0x18 + -8);
      pFVar24 = (pTVar2->AllocatorInstance).Data;
      local_218 = 0;
      dStack_210 = *(double *)pFVar26 * dVar41 + dVar40 * *(double *)(pFVar26 + 8);
      local_228 = dVar41;
      dStack_220 = dVar40;
      if (((pFVar24 <= (FScriptContainerElement *)&local_228) &&
          ((FScriptContainerElement *)&local_228 <
           pFVar24 + (longlong)(pFVar19->Planes).ArrayMax * 0x20)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      iVar17 = (pFVar19->Planes).ArrayNum;
      if (iVar17 == (pFVar19->Planes).ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1020,&pTVar2->AllocatorInstance,&(pFVar19->Planes).ArrayMax);
      }
      (pFVar19->Planes).ArrayNum = iVar17 + 1;
      pTVar3 = &pFVar19->PlaneCells;
      pFVar24 = (pTVar2->AllocatorInstance).Data;
      pFVar26 = pFVar24 + (longlong)iVar17 * 0x20;
      *(double *)pFVar26 = local_228;
      *(double *)(pFVar26 + 8) = dStack_220;
      pFVar24 = pFVar24 + (longlong)iVar17 * 0x20 + 0x10;
      *(undefined8 *)pFVar24 = local_218;
      *(double *)(pFVar24 + 8) = dStack_210;
      iVar17 = (pFVar19->PlaneCells).ArrayNum;
      if (iVar17 == (pFVar19->PlaneCells).ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar3->AllocatorInstance,&(pFVar19->PlaneCells).ArrayMax);
      }
      (pFVar19->PlaneCells).ArrayNum = iVar17 + 1;
      pTVar4 = &pFVar19->PlaneBoundaries;
      pFVar26 = (pTVar3->AllocatorInstance).Data;
      *(uint *)(pFVar26 + (longlong)iVar17 * 8) = local_394;
      *(undefined4 *)(pFVar26 + (longlong)iVar17 * 8 + 4) = 0xffffffff;
      pFVar26 = (pTVar4->AllocatorInstance).Data;
      if (((pFVar26 <= (FScriptContainerElement *)&local_2c0) &&
          ((FScriptContainerElement *)&local_2c0 <
           pFVar26 + (longlong)(pFVar19->PlaneBoundaries).ArrayMax * 0x10)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      iVar17 = (pFVar19->PlaneBoundaries).ArrayNum;
      if (iVar17 == (pFVar19->PlaneBoundaries).ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar4->AllocatorInstance,&(pFVar19->PlaneBoundaries).ArrayMax);
      }
      FVar14.Data = local_2c0.Data;
      pFVar26 = (pTVar4->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
      (pFVar19->PlaneBoundaries).ArrayNum = iVar17 + 1;
      *(undefined8 *)pFVar26 = 0;
      lVar34 = (longlong)local_2b8;
      *(int *)(pFVar26 + 8) = local_2b8;
      if (local_2b8 == 0) {
        *(int *)(pFVar26 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_2b8,0,(ForAnyElementType *)pFVar26,local_2b8,(int *)(pFVar26 + 0xc));
        memcpy(*(void **)pFVar26,FVar14.Data,lVar34 << 2);
      }
      if (local_2c0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2c0.Data);
      }
      pFVar26 = (pTVar2->AllocatorInstance).Data;
      local_198 = __real_bff0000000000000;
      local_1b8 = (local_318->Min).field0_0x0._s_0.Z;
      local_1c8 = (local_318->Min).field0_0x0._s_0.X;
      dStack_1c0 = (local_318->Min).field0_0x0._s_0.Y;
      dStack_190 = local_1b8 * __real_bff0000000000000;
      local_1a8 = 0;
      uStack_1a0 = 0;
      if (((pFVar26 <= (FScriptContainerElement *)&local_1a8) &&
          ((FScriptContainerElement *)&local_1a8 <
           pFVar26 + (longlong)(pFVar19->Planes).ArrayMax * 0x20)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      iVar17 = (pFVar19->Planes).ArrayNum;
      if (iVar17 == (pFVar19->Planes).ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1020,&pTVar2->AllocatorInstance,&(pFVar19->Planes).ArrayMax);
      }
      (pFVar19->Planes).ArrayNum = iVar17 + 1;
      pFVar24 = (pTVar2->AllocatorInstance).Data;
      pFVar26 = pFVar24 + (longlong)iVar17 * 0x20;
      *(undefined8 *)pFVar26 = local_1a8;
      *(undefined8 *)(pFVar26 + 8) = uStack_1a0;
      pFVar24 = pFVar24 + (longlong)iVar17 * 0x20 + 0x10;
      *(double *)pFVar24 = local_198;
      *(double *)(pFVar24 + 8) = dStack_190;
      iVar17 = (pFVar19->PlaneCells).ArrayNum;
      if (iVar17 == (pFVar19->PlaneCells).ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&pTVar3->AllocatorInstance,&(pFVar19->PlaneCells).ArrayMax);
      }
      (pFVar19->PlaneCells).ArrayNum = iVar17 + 1;
      pFVar26 = (pTVar3->AllocatorInstance).Data;
      *(uint *)(pFVar26 + (longlong)iVar17 * 8) = local_394;
      *(undefined4 *)(pFVar26 + (longlong)iVar17 * 8 + 4) = 0xffffffff;
      pFVar26 = (pTVar4->AllocatorInstance).Data;
      if (((pFVar26 <= (FScriptContainerElement *)&local_338) &&
          ((FScriptContainerElement *)&local_338 <
           pFVar26 + (longlong)(pFVar19->PlaneBoundaries).ArrayMax * 0x10)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      iVar17 = (pFVar19->PlaneBoundaries).ArrayNum;
      if (iVar17 == *(int *)&((local_208.Value)->AllocatorInstance).Data) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar4->AllocatorInstance,(int *)local_208.Value);
      }
      FVar14.Data = local_338.Data;
      (pFVar19->PlaneBoundaries).ArrayNum = iVar17 + 1;
      pFVar26 = (pTVar4->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
      *(undefined8 *)pFVar26 = 0;
      lVar34 = (longlong)(int)local_330;
      *(int *)(pFVar26 + 8) = (int)local_330;
      if ((int)local_330 == 0) {
        *(int *)(pFVar26 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,(int)local_330,0,(ForAnyElementType *)pFVar26,(int)local_330,
                   (int *)(pFVar26 + 0xc));
        memcpy(*(void **)pFVar26,FVar14.Data,lVar34 << 2);
      }
      iVar17 = (int)local_330;
      uVar28 = local_330 & 0xffffffff;
      local_2f8.Data = (FScriptContainerElement *)0x0;
      local_2f0[0] = 0;
      local_2f0[1] = 0;
      if ((int)local_330 < 1) {
        if ((int)local_330 < 0) {
                    /* WARNING: Subroutine does not return */
          UE::Core::Private::OnInvalidArrayNum(uVar28);
        }
      }
      else {
        iVar22 = UE::Core::Private::
                 ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (4,4,(int)local_330,&local_2f8,(int *)local_2f0,(int *)(local_2f0 + 1));
        memset(local_2f8.Data + (longlong)iVar22 * 4,0,(longlong)iVar17 << 2);
        uVar28 = local_330 & 0xffffffff;
      }
      lVar34 = (longlong)(int)local_2f0[0];
      uVar29 = 0;
      lVar35 = 0;
      if (0 < (int)local_2f0[0]) {
        lVar30 = lVar34 * 4;
        uVar32 = local_2f0[0];
        while( true ) {
          uVar32 = uVar32 - 1;
          lVar30 = lVar30 + -4;
          uVar18 = 0;
          if ((int)uVar32 < (int)uVar28) {
            uVar18 = ~uVar32 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            pFVar19 = (FPlanarCells *)(*pcVar7)();
            return pFVar19;
          }
          iVar17 = *(int *)(local_338.Data + lVar30);
          uVar18 = 0;
          if ((int)uVar29 < (int)local_2f0[0]) {
            uVar18 = ~uVar29 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar16)) {
            pcVar7 = (code *)swi(3);
            pFVar19 = (FPlanarCells *)(*pcVar7)();
            return pFVar19;
          }
          uVar29 = uVar29 + 1;
          *(int *)(local_2f8.Data + lVar35 * 4) = iVar17 + 1;
          lVar35 = lVar35 + 1;
          if (lVar34 <= lVar35) break;
          uVar28 = local_330 & 0xffffffff;
        }
      }
      this = local_310;
      local_1d8 = CONCAT44(uVar44,uVar43);
      local_1e8 = 0;
      uStack_1e0 = 0;
      dStack_1d0 = (local_318->Max).field0_0x0._s_0.Z;
      local_1c8 = (local_318->Max).field0_0x0._s_0.X;
      dStack_1c0 = (local_318->Max).field0_0x0._s_0.Y;
      pFVar26 = (local_310->Planes).AllocatorInstance.Data;
      local_1b8 = dStack_1d0;
      if (((pFVar26 <= (FScriptContainerElement *)&local_1e8) &&
          ((FScriptContainerElement *)&local_1e8 <
           pFVar26 + (longlong)(local_310->Planes).ArrayMax * 0x20)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      iVar17 = (this->Planes).ArrayNum;
      if (iVar17 == (this->Planes).ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x1020,&(this->Planes).AllocatorInstance,&(this->Planes).ArrayMax);
      }
      (this->Planes).ArrayNum = iVar17 + 1;
      pFVar24 = (this->Planes).AllocatorInstance.Data;
      pFVar26 = pFVar24 + (longlong)iVar17 * 0x20;
      *(undefined8 *)pFVar26 = local_1e8;
      *(undefined8 *)(pFVar26 + 8) = uStack_1e0;
      pFVar24 = pFVar24 + (longlong)iVar17 * 0x20 + 0x10;
      *(undefined8 *)pFVar24 = local_1d8;
      *(double *)(pFVar24 + 8) = dStack_1d0;
      iVar17 = (this->PlaneCells).ArrayNum;
      if (iVar17 == (this->PlaneCells).ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&(this->PlaneCells).AllocatorInstance,&(this->PlaneCells).ArrayMax
                           );
      }
      (this->PlaneCells).ArrayNum = iVar17 + 1;
      pFVar26 = (this->PlaneCells).AllocatorInstance.Data;
      *(uint *)(pFVar26 + (longlong)iVar17 * 8) = local_394;
      *(undefined4 *)(pFVar26 + (longlong)iVar17 * 8 + 4) = 0xffffffff;
      pFVar26 = (pTVar4->AllocatorInstance).Data;
      if (((pFVar26 <= (FScriptContainerElement *)&local_2f8) &&
          ((FScriptContainerElement *)&local_2f8 <
           pFVar26 + (longlong)(pFVar19->PlaneBoundaries).ArrayMax * 0x10)) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar16)) {
        pcVar7 = (code *)swi(3);
        pFVar19 = (FPlanarCells *)(*pcVar7)();
        return pFVar19;
      }
      iVar17 = (pFVar19->PlaneBoundaries).ArrayNum;
      if (iVar17 == (pFVar19->PlaneBoundaries).ArrayMax) {
        iVar17 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar4->AllocatorInstance,&(this->PlaneBoundaries).ArrayMax);
      }
      FVar14.Data = local_2f8.Data;
      pFVar26 = (pTVar4->AllocatorInstance).Data + (longlong)iVar17 * 0x10;
      (pFVar19->PlaneBoundaries).ArrayNum = iVar17 + 1;
      *(undefined8 *)pFVar26 = 0;
      lVar34 = (longlong)(int)local_2f0[0];
      *(uint *)(pFVar26 + 8) = local_2f0[0];
      if (local_2f0[0] == 0) {
        *(int *)(pFVar26 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,local_2f0[0],0,(ForAnyElementType *)pFVar26,local_2f0[0],
                   (int *)(pFVar26 + 0xc));
        memcpy(*(void **)pFVar26,FVar14.Data,lVar34 << 2);
      }
      if (local_2f8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.Data);
      }
      if (local_338.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Data);
      }
      local_2e8 = local_2e8 + 1;
      local_394 = local_394 + 1;
    } while ((int)local_394 < this->NumCells);
  }
  this->AssumeConvexCells = false;
  DestructItems<TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>,int>
            ((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
             local_348.AllocatorInstance.Data,local_348.ArrayNum);
  if ((TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)
      local_348.AllocatorInstance.Data !=
      (TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *)0x0) {
    FMemory::Free(local_348.AllocatorInstance.Data);
  }
  DestructItems<TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>,int>
            ((TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
              *)local_328.Data,local_320[0]);
  if ((TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
       *)local_328.Data !=
      (TMap<int,TArray<int,TSizedDefaultAllocator<32>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TArray<int,TSizedDefaultAllocator<32>_>,0>_>
       *)0x0) {
    FMemory::Free(local_328.Data);
  }
  if (local_298.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_298.Data);
  }
  if (local_380.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_380.AllocatorInstance.Data);
  }
  if (local_370.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_370.Data);
  }
  return this;
}

// FPlanarCells @ 14c9a5a50

FPlanarCells * __thiscall FPlanarCells::FPlanarCells(FPlanarCells *this,TPlane<double> *param_1)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  FScriptContainerElement *pFVar3;
  longlong lVar4;
  double dVar5;
  int iVar6;
  
  this->AssumeConvexCells = false;
  (this->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  piVar1 = &(this->Planes).ArrayMax;
  (this->Planes).ArrayNum = 0;
  (this->PlaneCells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlaneCells).ArrayNum = 0;
  (this->PlaneCells).ArrayMax = 0;
  (this->PlaneBoundaries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlaneBoundaries).ArrayNum = 0;
  (this->PlaneBoundaries).ArrayMax = 0;
  (this->PlaneBoundaryVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlaneBoundaryVertices).ArrayNum = 0;
  (this->PlaneBoundaryVertices).ArrayMax = 0;
  (this->InternalSurfaceMaterials).GlobalMaterialID = 0;
  (this->InternalSurfaceMaterials).bGlobalVisibility = true;
  (this->InternalSurfaceMaterials).GlobalUVScale = 1.0;
  (this->InternalSurfaceMaterials).NoiseSettings.bIsSet = false;
  this->NumCells = 2;
  *piVar1 = 0;
  iVar6 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x1020,&(this->Planes).AllocatorInstance,piVar1);
  (this->Planes).ArrayNum = iVar6 + 1;
  lVar4 = param_1->_padding_;
  pFVar3 = (this->Planes).AllocatorInstance.Data;
  pFVar2 = pFVar3 + (longlong)iVar6 * 0x20;
  *(longlong *)pFVar2 = param_1->_padding_;
  *(longlong *)(pFVar2 + 8) = lVar4;
  dVar5 = param_1->W;
  pFVar3 = pFVar3 + (longlong)iVar6 * 0x20 + 0x10;
  *(longlong *)pFVar3 = param_1->_padding_;
  *(double *)(pFVar3 + 8) = dVar5;
  iVar6 = (this->PlaneCells).ArrayNum;
  if (iVar6 == (this->PlaneCells).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,&(this->PlaneCells).AllocatorInstance,&(this->PlaneCells).ArrayMax);
  }
  (this->PlaneCells).ArrayNum = iVar6 + 1;
  pFVar2 = (this->PlaneCells).AllocatorInstance.Data;
  *(undefined4 *)(pFVar2 + (longlong)iVar6 * 8) = 0;
  *(undefined4 *)(pFVar2 + (longlong)iVar6 * 8 + 4) = 1;
  iVar6 = (this->PlaneBoundaries).ArrayNum;
  if (iVar6 == (this->PlaneBoundaries).ArrayMax) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x810,&(this->PlaneBoundaries).AllocatorInstance,
                       &(this->PlaneBoundaries).ArrayMax);
  }
  (this->PlaneBoundaries).ArrayNum = iVar6 + 1;
  pFVar2 = (this->PlaneBoundaries).AllocatorInstance.Data;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x10) = 0;
  *(undefined8 *)(pFVar2 + (longlong)iVar6 * 0x10 + 8) = 0;
  return this;
}

// FPlanarCells @ 14c9a5b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FPlanarCells * __thiscall
FPlanarCells::FPlanarCells
          (FPlanarCells *this,TArrayView<UE::Math::TBox<double>_const_,int> *param_1,bool param_2)

{
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar1;
  ulonglong *puVar2;
  void *_Dst;
  undefined8 uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  double dVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  double dVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined8 uVar19;
  int iVar20;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *pTVar21;
  bool bVar22;
  int iVar23;
  FPlanarCells *pFVar24;
  uint *puVar25;
  FIdentityFunctor FVar26;
  ulonglong uVar27;
  ForAnyElementType FVar28;
  uint uVar29;
  int iVar30;
  FScriptContainerElement *pFVar31;
  ulonglong uVar32;
  int *piVar33;
  int *piVar34;
  FScriptContainerElement *pFVar35;
  double *pdVar36;
  ulonglong *puVar37;
  longlong lVar38;
  ForElementType<FSetElementId> FVar39;
  int iVar40;
  int iVar41;
  longlong lVar42;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *pTVar43;
  int iVar44;
  uint uVar45;
  TBox<double> *pTVar46;
  TBox<double> *pTVar47;
  int iVar48;
  uint uVar49;
  TArrayView<UE::Math::TBox<double>_const_,int> *pTVar50;
  TBox<double> *pTVar51;
  undefined4 uVar52;
  double dVar53;
  double dVar54;
  double dVar55;
  uint uVar57;
  double dVar56;
  double dVar58;
  undefined1 auStackY_878 [32];
  FIdentityFunctor local_828 [4];
  uint local_824;
  uint local_820;
  int local_81c;
  int local_818;
  int local_814;
  TBox<double> *local_810;
  FPlanarCells *local_808;
  int local_800;
  undefined1 local_7fc [4];
  int local_7f8;
  int local_7f4;
  FScriptContainerElement *local_7f0;
  TArrayView<UE::Math::TBox<double>_const_,int> *local_7e8;
  ForAnyElementType local_7e0;
  int local_7d8;
  int local_7d4;
  ulonglong local_7d0;
  TArray<int,TSizedDefaultAllocator<32>_> local_7c8;
  double local_7b8;
  double local_7b0;
  undefined8 local_7a8;
  undefined8 local_7a0;
  FScriptContainerElement *local_798;
  undefined8 local_790;
  int local_788;
  int local_784;
  int local_780;
  int local_77c;
  ForAnyElementType local_778;
  int local_770;
  int local_76c;
  int local_768 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_760;
  TArray<int,TSizedDefaultAllocator<32>_> local_750;
  TArray<int,TSizedDefaultAllocator<32>_> local_740;
  TArray<int,TSizedDefaultAllocator<32>_> local_730;
  TArray<int,TSizedDefaultAllocator<32>_> local_720;
  TArray<int,TSizedDefaultAllocator<32>_> local_710;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_700;
  double *local_6f8;
  longlong local_6f0;
  double local_6e8;
  undefined8 uStack_6e0;
  undefined8 local_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 local_6b8;
  undefined8 uStack_6b0;
  undefined8 local_6a8;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined8 local_688;
  undefined8 uStack_680;
  undefined8 local_678;
  undefined8 local_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 local_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  double local_638;
  undefined8 uStack_630;
  undefined8 local_628;
  double dStack_620;
  TPairInitializer<UE::Math::TIntVector4<int>_const_&,int_&&> local_618;
  longlong local_608;
  longlong local_600;
  longlong local_5f8;
  TArray<TTuple<int,int>,TSizedDefaultAllocator<32>_> *local_5f0;
  undefined1 local_5e8 [16];
  double local_5d8;
  undefined1 local_5d0 [16];
  double local_5c0;
  FPlanarCells *local_5b0;
  ForAnyElementType *local_5a8;
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_5a0;
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  *local_598;
  double local_590;
  int *local_588;
  int *local_580;
  TVector<double>_u_0 local_578;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  TPlane<double> local_548;
  TPlane<double> local_528;
  TPlane<double> local_508;
  TPlane<double> local_4e8;
  TPlane<double> local_4c8;
  TPlane<double> local_4a8;
  TVector<double>_u_0 local_488;
  undefined1 local_470 [16];
  double local_460;
  uint local_458;
  int iStack_454;
  int iStack_450;
  int iStack_44c;
  int local_448;
  int iStack_444;
  int iStack_440;
  int iStack_43c;
  uint local_438;
  int iStack_434;
  int iStack_430;
  int iStack_42c;
  int local_428;
  int iStack_424;
  int iStack_420;
  int iStack_41c;
  uint local_418;
  int iStack_414;
  int iStack_410;
  int iStack_40c;
  int local_408;
  int iStack_404;
  int iStack_400;
  int iStack_3fc;
  int local_3f8;
  int iStack_3f4;
  int iStack_3f0;
  int iStack_3ec;
  int local_3e8;
  int iStack_3e4;
  int iStack_3e0;
  int iStack_3dc;
  TSet<TTuple<UE::Math::TIntVector4<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector4<int>,int,0>,FDefaultSetAllocator>
  local_3d8;
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_388;
  void *local_348;
  undefined4 local_340;
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_338;
  void *local_2f8;
  undefined4 local_2f0;
  undefined1 local_2e8;
  undefined8 local_2e0;
  undefined4 local_2d8;
  undefined1 local_2c8 [360];
  undefined1 local_160 [72];
  undefined4 local_118;
  ForAnyElementType local_f8;
  undefined8 local_f0;
  ForAnyElementType local_e8;
  undefined8 local_e0;
  ForAnyElementType local_d8;
  undefined8 local_d0;
  ulonglong local_c8 [18];
  
  local_c8[0] = __security_cookie.value ^ (ulonglong)auStackY_878;
  pTVar47 = param_1->DataPtr;
  local_618.Value = (int *)&this->Planes;
  (this->InternalSurfaceMaterials).bGlobalVisibility = true;
  local_700 = &this->PlaneBoundaries;
  (this->PlaneCells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  pTVar1 = &this->PlaneBoundaryVertices;
  (this->PlaneCells).ArrayNum = 0;
  (this->PlaneCells).ArrayMax = 0;
  (this->InternalSurfaceMaterials).GlobalMaterialID = 0;
  local_5f0 = &this->PlaneCells;
  (this->InternalSurfaceMaterials).NoiseSettings.bIsSet = false;
  local_770 = param_1->ArrayNum;
  lVar38 = (longlong)local_770;
  (this->InternalSurfaceMaterials).GlobalUVScale = 1.0;
  (((TArray<UE::Math::TPlane<double>,TSizedDefaultAllocator<32>_> *)local_618.Value)->
  AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->Planes).ArrayNum = 0;
  (this->Planes).ArrayMax = 0;
  (local_700->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PlaneBoundaries).ArrayNum = 0;
  (this->PlaneBoundaries).ArrayMax = 0;
  (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  (this->PlaneBoundaryVertices).ArrayNum = 0;
  (this->PlaneBoundaryVertices).ArrayMax = 0;
  this->NumCells = local_770;
  this->AssumeConvexCells = true;
  local_778.Data = (FScriptContainerElement *)0x0;
  local_808 = this;
  local_7e8 = param_1;
  if (local_770 == 0) {
    local_76c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x38,8,local_770,0,&local_778,local_770,&local_76c);
    memcpy(local_778.Data,pTVar47,lVar38 * 0x38);
  }
  lVar18 = _UNK_1508ffb28;
  lVar17 = ___xmm_bff00000000000000000000000000000;
  lVar16 = _UNK_15076ad98;
  lVar15 = ___xmm_0000000000000000bff0000000000000;
  lVar14 = _UNK_150689518;
  lVar13 = ___xmm_00000000000000003ff0000000000000;
  uVar3 = __xmm_80000000000000008000000000000000;
  lVar11 = __real_bff0000000000000;
  lVar10 = _UNK_15061cbc8;
  lVar9 = ___xmm_3ff00000000000000000000000000000;
  lVar42 = __real_3ff0000000000000;
  if (param_2) {
    UE::Geometry::FSparseDynamicOctree3::FSparseDynamicOctree3((FSparseDynamicOctree3 *)local_2c8);
    pTVar50 = local_7e8;
    pFVar24 = local_808;
    uVar19 = _UNK_150a9e6d8;
    dVar56 = ___xmm_ffefffffffffffff7fefffffffffffff;
    dVar55 = _UNK_150a9e648;
    dVar12 = ___xmm_7fefffffffffffff7fefffffffffffff;
    uVar8 = _UNK_1508ffb58;
    uVar3 = ___xmm_ffefffffffffffffffefffffffffffff;
    pTVar46 = pTVar47 + lVar38;
    dVar54 = 0.0;
    while (dVar58 = dVar54, pTVar47 != pTVar46) {
      dVar54 = (pTVar47->Max).field0_0x0._s_0.Y - (pTVar47->Min).field0_0x0._s_0.Y;
      dVar7 = (pTVar47->Max).field0_0x0._s_0.X - (pTVar47->Min).field0_0x0._s_0.X;
      dVar53 = (pTVar47->Max).field0_0x0._s_0.Z - (pTVar47->Min).field0_0x0._s_0.Z;
      pTVar47 = pTVar47 + 1;
      if (dVar54 <= dVar7) {
        dVar54 = dVar7;
      }
      if (dVar54 <= dVar53) {
        dVar54 = dVar53;
      }
      if (dVar54 <= dVar58) {
        dVar54 = dVar58;
      }
    }
    uVar27 = 0;
    iVar23 = local_808->NumCells;
    local_2c8._0_8_ = dVar58 * __real_4010000000000000;
    uVar32 = uVar27;
    if (0 < iVar23) {
      do {
        uVar29 = (uint)uVar32;
        uVar49 = 0;
        if ((int)uVar29 < pTVar50->ArrayNum) {
          uVar49 = ~uVar29 >> 0x1f;
        }
        if ((uVar49 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          pFVar24 = (FPlanarCells *)(*pcVar6)();
          return pFVar24;
        }
        pTVar47 = pTVar50->DataPtr;
        if (pTVar47->Pad[uVar27 - 1] == '\0') {
          local_578._s_0.X = dVar12;
          local_578._s_0.Y = dVar55;
          local_578._s_0.Z = dVar56;
          uStack_560 = uVar19;
          uStack_558 = uVar3;
          uStack_550 = uVar8;
        }
        else {
          local_578._s_0.X = (double)*(undefined8 *)(pTVar47->Pad + (uVar27 - 0x31));
          local_578._s_0.Y = (double)*(undefined8 *)(pTVar47->Pad + (uVar27 - 0x31) + 8);
          local_578._s_0.Z = (double)*(undefined8 *)(pTVar47->Pad + (uVar27 - 0x21));
          uStack_560 = *(undefined8 *)(pTVar47->Pad + (uVar27 - 0x19));
          uStack_558 = *(undefined8 *)(pTVar47->Pad + (uVar27 - 0x19) + 8);
          uStack_550 = *(undefined8 *)(pTVar47->Pad + (uVar27 - 9));
        }
        UE::Geometry::FSparseDynamicOctree3::InsertObject
                  ((FSparseDynamicOctree3 *)local_2c8,uVar29,
                   (TAxisAlignedBox3<double> *)&local_578._s_0);
        iVar23 = pFVar24->NumCells;
        uVar27 = uVar27 + 0x38;
        uVar32 = (ulonglong)(uVar29 + 1);
      } while ((int)(uVar29 + 1) < iVar23);
    }
    dVar12 = __real_3f1a36e2eb1c432d;
    local_2e0 = __real_3f50624dd2f1a9fc;
    local_338._0_8_ = 0;
    local_338._8_8_ = 0;
    local_338._32_8_ = 0;
    local_338._40_4_ = 0;
    local_338._44_4_ = 0x80;
    local_338._48_4_ = 0xffffffff;
    local_338._52_4_ = 0;
    local_2f8 = (void *)0x0;
    local_2f0 = 0;
    local_2e8 = 0;
    local_2d8 = 0xffffffff;
    local_3d8.Elements._0_8_ = 0;
    local_3d8.Elements._8_8_ = 0;
    local_3d8.Elements._32_8_ = 0;
    local_3d8.Elements._40_4_ = 0;
    local_3d8.Elements._44_4_ = 0x80;
    local_3d8.Elements._48_4_ = 0xffffffff;
    local_3d8.Elements._52_4_ = 0;
    local_3d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
    local_3d8.HashSize = 0;
    local_7c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_7c8.ArrayNum = 0;
    local_7c8.ArrayMax = 0;
    local_f8.Data = (FScriptContainerElement *)0x0;
    local_f0 = 0;
    local_e8.Data = (FScriptContainerElement *)0x0;
    local_e0 = 0;
    local_d8.Data = (FScriptContainerElement *)0x0;
    local_d0 = 0;
    local_820 = 0;
    if (0 < iVar23) {
      local_6f0 = 0;
      do {
        lVar38 = local_6f0;
        uVar49 = local_820;
        uVar29 = 0;
        if ((int)local_820 < pTVar50->ArrayNum) {
          uVar29 = ~local_820 >> 0x1f;
        }
        if ((uVar29 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          pFVar24 = (FPlanarCells *)(*pcVar6)();
          return pFVar24;
        }
        uVar32 = local_f0;
        local_f0 = local_f0 & 0xffffffff00000000;
        pTVar47 = pTVar50->DataPtr + lVar38;
        local_810 = pTVar47;
        if ((longlong)uVar32 < 0) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_f8,0,(int *)((longlong)&local_f0 + 4));
        }
        bVar22 = (longlong)local_e0 < 0;
        local_e0 = local_e0 & 0xffffffff00000000;
        if (bVar22) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_e8,0,(int *)((longlong)&local_e0 + 4));
        }
        bVar22 = (longlong)local_d0 < 0;
        local_d0 = local_d0 & 0xffffffff00000000;
        if (bVar22) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,0,&local_d8,0,(int *)((longlong)&local_d0 + 4));
        }
        bVar22 = (longlong)local_7c8._8_8_ < 0;
        local_7c8._8_8_ = local_7c8._8_8_ & 0xffffffff00000000;
        if (bVar22) {
          UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_7c8.AllocatorInstance,0,&local_7c8.ArrayMax);
        }
        dVar55 = (pTVar47->Min).field0_0x0._s_0.X - dVar12;
        dVar54 = (pTVar47->Max).field0_0x0._s_0.X + dVar12;
        dVar56 = (pTVar47->Min).field0_0x0._s_0.Y - dVar12;
        dVar58 = (pTVar47->Max).field0_0x0._s_0.Y + dVar12;
        local_5d8 = (pTVar47->Min).field0_0x0._s_0.Z - dVar12;
        local_5c0 = (pTVar47->Max).field0_0x0._s_0.Z + dVar12;
        uVar52 = (undefined4)((ulonglong)dVar56 >> 0x20);
        local_5e8._8_4_ = SUB84(dVar56,0);
        local_5e8._0_8_ = dVar55;
        local_5e8._12_4_ = uVar52;
        local_488._8_4_ = SUB84(dVar56,0);
        local_488._0_8_ = dVar55;
        local_488._12_4_ = uVar52;
        uVar52 = (undefined4)((ulonglong)dVar58 >> 0x20);
        local_5d0._8_4_ = SUB84(dVar58,0);
        local_5d0._0_8_ = dVar54;
        local_5d0._12_4_ = uVar52;
        local_470._8_4_ = SUB84(dVar58,0);
        local_470._0_8_ = dVar54;
        local_470._12_4_ = uVar52;
        local_488._s_0.Z = local_5d8;
        local_460 = local_5c0;
        UE::Geometry::FSparseDynamicOctree3::RangeQuery
                  ((FSparseDynamicOctree3 *)local_2c8,(TAxisAlignedBox3<double> *)&local_488._s_0,
                   &local_7c8);
        iVar23 = local_7c8.ArrayNum;
        local_798 = local_7c8.AllocatorInstance.Data + (longlong)local_7c8.ArrayNum * 4;
        FVar28.Data = local_7c8.AllocatorInstance.Data;
        while( true ) {
          pFVar35 = local_798;
          if (local_7c8.ArrayNum != iVar23) {
            local_828[0] = (FIdentityFunctor)0x0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_828);
          }
          piVar33 = local_618.Value;
          if (FVar28.Data == pFVar35) break;
          uVar29 = *(uint *)FVar28.Data;
          uVar57 = 0;
          if ((int)uVar29 < pTVar50->ArrayNum) {
            uVar57 = ~uVar29 >> 0x1f;
          }
          if ((uVar57 == 0) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                  ,0x14f,
                                  L"Array index out of bounds: %lld from an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            pFVar24 = (FPlanarCells *)(*pcVar6)();
            return pFVar24;
          }
          pTVar51 = pTVar50->DataPtr + (int)uVar29;
          pTVar46 = pTVar47;
          if ((((((uVar49 != uVar29) &&
                 (dVar55 < (pTVar51->Max).field0_0x0._s_0.X ||
                  dVar55 == (pTVar51->Max).field0_0x0._s_0.X)) &&
                ((pTVar51->Min).field0_0x0._s_0.X <= dVar54)) &&
               ((pdVar36 = &(pTVar51->Max).field0_0x0._s_0.Y,
                dVar56 < *pdVar36 || dVar56 == *pdVar36 &&
                ((pTVar51->Min).field0_0x0._s_0.Y <= dVar58)))) &&
              (pdVar36 = &(pTVar51->Max).field0_0x0._s_0.Z,
              local_5d8 < *pdVar36 || local_5d8 == *pdVar36)) &&
             ((pTVar51->Min).field0_0x0._s_0.Z <= local_5c0)) {
            lVar38 = 0;
            piVar33 = (int *)&local_f0;
            do {
              local_7b8 = *(double *)
                           ((longlong)pTVar51 + (longlong)pTVar46 + (lVar38 - (longlong)pTVar47));
              if ((*(double *)(pTVar46->Pad + lVar38 + -0x31) + dVar12 < local_7b8) &&
                 (local_7b8 < *(double *)(pTVar46->Pad + lVar38 + -0x19) - dVar12)) {
                if ((*(double **)(piVar33 + -2) <= &local_7b8) &&
                   ((&local_7b8 < *(double **)(piVar33 + -2) + piVar33[1] &&
                    (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar22)))) {
                  pcVar6 = (code *)swi(3);
                  pFVar24 = (FPlanarCells *)(*pcVar6)();
                  return pFVar24;
                }
                iVar41 = *piVar33;
                if (iVar41 == piVar33[1]) {
                  iVar41 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,(ForAnyElementType *)(piVar33 + -2),piVar33 + 1);
                }
                *piVar33 = iVar41 + 1;
                *(double *)(*(longlong *)(piVar33 + -2) + (longlong)iVar41 * 8) = local_7b8;
                pTVar46 = local_810;
              }
              local_7b0 = *(double *)(pTVar51->Pad + lVar38 + -0x19);
              if ((*(double *)(pTVar46->Pad + lVar38 + -0x31) + dVar12 < local_7b0) &&
                 (local_7b0 < *(double *)(pTVar46->Pad + lVar38 + -0x19) - dVar12)) {
                if ((*(double **)(piVar33 + -2) <= &local_7b0) &&
                   ((&local_7b0 < *(double **)(piVar33 + -2) + piVar33[1] &&
                    (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar22)))) {
                  pcVar6 = (code *)swi(3);
                  pFVar24 = (FPlanarCells *)(*pcVar6)();
                  return pFVar24;
                }
                iVar41 = *piVar33;
                if (iVar41 == piVar33[1]) {
                  iVar41 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x808,(ForAnyElementType *)(piVar33 + -2),piVar33 + 1);
                }
                *piVar33 = iVar41 + 1;
                *(double *)(*(longlong *)(piVar33 + -2) + (longlong)iVar41 * 8) = local_7b0;
                pTVar46 = local_810;
              }
              lVar38 = lVar38 + 8;
              piVar33 = piVar33 + 4;
            } while (lVar38 < 0x18);
            dVar55 = (double)local_5e8._0_8_;
            dVar56 = (double)local_5e8._8_8_;
            dVar54 = (double)local_5d0._0_8_;
            dVar58 = (double)local_5d0._8_8_;
            uVar49 = local_820;
          }
          FVar28.Data = FVar28.Data + 4;
          pTVar47 = pTVar46;
          pTVar50 = local_7e8;
        }
        piVar34 = (int *)&local_f0;
        local_7f0 = (FScriptContainerElement *)0x0;
        pTVar43 = local_700;
        FVar26 = local_828[0];
        do {
          pFVar35 = local_7f0;
          local_7a8 = *(undefined8 *)(local_7f0 + (longlong)(pTVar47->Pad + -0x31));
          if (((*(undefined8 **)(piVar34 + -2) <= &local_7a8) &&
              (&local_7a8 < *(undefined8 **)(piVar34 + -2) + piVar34[1])) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar6 = (code *)swi(3);
            pFVar24 = (FPlanarCells *)(*pcVar6)();
            return pFVar24;
          }
          iVar23 = *piVar34;
          if (iVar23 == piVar34[1]) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)(piVar34 + -2),piVar34 + 1);
          }
          *piVar34 = iVar23 + 1;
          *(undefined8 *)(*(longlong *)(piVar34 + -2) + (longlong)iVar23 * 8) = local_7a8;
          local_7a0 = *(undefined8 *)(pFVar35 + 0x18 + (longlong)local_810);
          if (((*(undefined8 **)(piVar34 + -2) <= &local_7a0) &&
              (&local_7a0 < *(undefined8 **)(piVar34 + -2) + piVar34[1])) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar22)) {
            pcVar6 = (code *)swi(3);
            pFVar24 = (FPlanarCells *)(*pcVar6)();
            return pFVar24;
          }
          iVar23 = *piVar34;
          if (iVar23 == piVar34[1]) {
            iVar23 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,(ForAnyElementType *)(piVar34 + -2),piVar34 + 1);
          }
          *piVar34 = iVar23 + 1;
          *(undefined8 *)(*(longlong *)(piVar34 + -2) + (longlong)iVar23 * 8) = local_7a0;
          AlgoImpl::
          IntroSortInternal<double,int,FIdentityFunctor,TDereferenceWrapper<double,TLess<void>_>_>
                    (*(double **)(piVar34 + -2),*piVar34,FVar26,(TLess<void> *)local_7fc);
          if ((*piVar34 < 1) &&
             (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar22)) {
            pcVar6 = (code *)swi(3);
            pFVar24 = (FPlanarCells *)(*pcVar6)();
            return pFVar24;
          }
          uVar29 = 1;
          iVar23 = *piVar34;
          uVar49 = 1;
          dVar55 = **(double **)(piVar34 + -2);
          if (1 < iVar23) {
            lVar38 = 8;
            lVar42 = 8;
            do {
              uVar45 = ~uVar29 >> 0x1f;
              uVar57 = 0;
              if ((int)uVar29 < iVar23) {
                uVar57 = uVar45;
              }
              if ((uVar57 == 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar22)) {
                pcVar6 = (code *)swi(3);
                pFVar24 = (FPlanarCells *)(*pcVar6)();
                return pFVar24;
              }
              if (dVar12 <= *(double *)(lVar38 + *(longlong *)(piVar34 + -2)) - dVar55) {
                uVar57 = 0;
                if ((int)uVar29 < *piVar34) {
                  uVar57 = uVar45;
                }
                if ((uVar57 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar6 = (code *)swi(3);
                  pFVar24 = (FPlanarCells *)(*pcVar6)();
                  return pFVar24;
                }
                uVar3 = *(undefined8 *)(lVar38 + *(longlong *)(piVar34 + -2));
                uVar57 = 0;
                if ((int)uVar49 < *piVar34) {
                  uVar57 = ~uVar49 >> 0x1f;
                }
                if ((uVar57 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar6 = (code *)swi(3);
                  pFVar24 = (FPlanarCells *)(*pcVar6)();
                  return pFVar24;
                }
                *(undefined8 *)(*(longlong *)(piVar34 + -2) + lVar42) = uVar3;
                uVar57 = 0;
                if ((int)uVar29 < *piVar34) {
                  uVar57 = uVar45;
                }
                if ((uVar57 == 0) &&
                   (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar22)) {
                  pcVar6 = (code *)swi(3);
                  pFVar24 = (FPlanarCells *)(*pcVar6)();
                  return pFVar24;
                }
                uVar49 = uVar49 + 1;
                lVar42 = lVar42 + 8;
                dVar55 = *(double *)(lVar38 + *(longlong *)(piVar34 + -2));
              }
              iVar23 = *piVar34;
              uVar29 = uVar29 + 1;
              lVar38 = lVar38 + 8;
              pTVar43 = local_700;
              FVar26 = local_828[0];
            } while ((int)uVar29 < iVar23);
          }
          if (iVar23 < (int)uVar49) {
            iVar41 = UE::Core::Private::
                     ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (8,8,uVar49 - iVar23,(ForAnyElementType *)(piVar34 + -2),piVar34,
                                piVar34 + 1);
            memset((void *)(*(longlong *)(piVar34 + -2) + (longlong)iVar41 * 8),0,
                   (longlong)(int)(uVar49 - iVar23) << 3);
          }
          else {
            if ((int)uVar49 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar49);
            }
            if ((int)uVar49 < iVar23) {
              uVar29 = iVar23 - uVar49;
              if (((int)(uVar29 | uVar49) < 0) &&
                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x458,
                                      L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                     ), bVar22)) {
                pcVar6 = (code *)swi(3);
                pFVar24 = (FPlanarCells *)(*pcVar6)();
                return pFVar24;
              }
              if (uVar29 != 0) {
                _Dst = (void *)(*(longlong *)(piVar34 + -2) + (longlong)(int)uVar49 * 8);
                iVar23 = (*piVar34 - uVar29) - uVar49;
                if (iVar23 != 0) {
                  memmove(_Dst,(void *)((longlong)_Dst + (longlong)(int)uVar29 * 8),
                          (longlong)iVar23 << 3);
                }
                *piVar34 = *piVar34 - uVar29;
              }
            }
          }
          pFVar35 = local_7f0;
          pTVar47 = local_810;
          iVar23 = *piVar34;
          uVar3 = *(undefined8 *)(local_7f0 + 0x18 + (longlong)local_810);
          if (iVar23 == 1) {
            local_790 = uVar3;
            if (((*(undefined8 **)(piVar34 + -2) <= &local_790) &&
                (&local_790 < *(undefined8 **)(piVar34 + -2) + piVar34[1])) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar22)) {
              pcVar6 = (code *)swi(3);
              pFVar24 = (FPlanarCells *)(*pcVar6)();
              return pFVar24;
            }
            iVar23 = *piVar34;
            if (iVar23 == piVar34[1]) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x808,(ForAnyElementType *)(piVar34 + -2),piVar34 + 1);
            }
            *piVar34 = iVar23 + 1;
            *(undefined8 *)(*(longlong *)(piVar34 + -2) + (longlong)iVar23 * 8) = local_790;
          }
          else {
            uVar49 = 0;
            if ((int)(iVar23 - 1U) < iVar23) {
              uVar49 = ~(iVar23 - 1U) >> 0x1f;
            }
            if ((uVar49 == 0) &&
               (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar22)) {
              pcVar6 = (code *)swi(3);
              pFVar24 = (FPlanarCells *)(*pcVar6)();
              return pFVar24;
            }
            *(undefined8 *)(*(longlong *)(piVar34 + -2) + -8 + (longlong)*piVar34 * 8) = uVar3;
          }
          pTVar21 = local_5f0;
          local_7f0 = pFVar35 + 8;
          piVar34 = piVar34 + 4;
        } while ((longlong)local_7f0 < 0x18);
        pFVar35 = (FScriptContainerElement *)&local_f0;
        pdVar36 = &local_6e8;
        local_5b0 = local_808;
        local_590 = dVar12;
        local_5a8 = &local_f8;
        local_388._0_8_ = 0;
        local_5a0 = &local_388;
        local_598 = &local_338;
        local_810 = (TBox<double> *)((longlong)pTVar47 - (longlong)&local_6e8);
        local_388._8_8_ = 0;
        local_388._32_8_ = 0;
        local_388._40_4_ = 0;
        local_388._44_4_ = 0x80;
        local_388._48_4_ = 0xffffffff;
        local_388._52_4_ = 0;
        local_348 = (void *)0x0;
        local_340 = 0;
        local_824 = 0;
        do {
          iVar41 = 0;
          iVar40 = local_824 + 2;
          local_7d0 = local_7d0 & 0xffffffff00000000;
          iVar23 = local_824 + 1;
          iVar23 = iVar23 + (iVar23 / 3 + (iVar23 >> 0x1f) +
                            (int)(((longlong)iVar23 / 3 + ((longlong)iVar23 >> 0x3f) & 0xffffffffU)
                                 >> 0x1f)) * -3;
          lVar38 = (longlong)iVar23;
          iVar40 = iVar40 + (iVar40 / 3 + (iVar40 >> 0x1f) +
                            (int)(((longlong)iVar40 / 3 + ((longlong)iVar40 >> 0x3f) & 0xffffffffU)
                                 >> 0x1f)) * -3;
          lVar42 = lVar38 << 4;
          local_5f8 = lVar42;
          uVar49 = local_824;
          local_818 = iVar40;
          local_814 = iVar23;
          local_798 = pFVar35;
          local_6f8 = pdVar36;
          do {
            local_6d8 = 0;
            dVar55 = (double)(iVar41 * 2 + -1);
            local_6e8 = 0.0;
            uStack_6e0 = 0;
            *pdVar36 = dVar55;
            if (iVar41 == 1) {
              local_81c = *(int *)pFVar35 + -1;
LAB_14c9a768d:
              dVar56 = *(double *)((longlong)(pdVar36 + 3) + (longlong)local_810);
            }
            else {
              local_81c = 0;
              if (iVar41 != 0) goto LAB_14c9a768d;
              local_81c = 0;
              dVar56 = *(double *)((longlong)pdVar36 + (longlong)local_810);
            }
            dVar56 = dVar56 * dVar55;
            if (1 < *(int *)((longlong)&local_f0 + lVar42)) {
              lVar42 = (longlong)iVar40 << 4;
              lVar38 = lVar38 << 4;
              local_600 = lVar38;
              local_608 = lVar42;
              local_800 = 1;
              iVar41 = local_81c;
              do {
                if (1 < *(int *)((longlong)&local_f0 + lVar42)) {
                  iVar44 = local_800 + -1;
                  local_7f4 = 1;
                  local_7f0 = (FScriptContainerElement *)CONCAT44(local_7f0._4_4_,iVar44);
                  do {
                    iVar20 = local_7f4;
                    iVar48 = local_800;
                    iVar30 = local_7f4 + -1;
                    iVar41 = `FPlanarCells::FPlanarCells'::__l15::<lambda_2>::operator()
                                       (&local_5b0,uVar49,iVar23,iVar40,iVar41,iVar44,iVar30);
                    iVar23 = local_81c;
                    iVar40 = `FPlanarCells::FPlanarCells'::__l15::<lambda_2>::operator()
                                       (&local_5b0,local_824,local_814,local_818,local_81c,iVar48,
                                        iVar30);
                    iVar44 = `FPlanarCells::FPlanarCells'::__l15::<lambda_2>::operator()
                                       (&local_5b0,local_824,local_814,local_818,iVar23,local_800,
                                        iVar20);
                    iVar23 = `FPlanarCells::FPlanarCells'::__l15::<lambda_2>::operator()
                                       (&local_5b0,local_824,local_814,local_818,iVar23,
                                        (int)local_7f0,local_7f4);
                    local_7f8 = iVar23;
                    local_788 = iVar41;
                    local_784 = iVar40;
                    local_780 = iVar44;
                    local_77c = iVar23;
                    uVar49 = (*FCrc::MemCrc32Func)(&local_788,0x10,0);
                    if (local_3d8.Elements._8_4_ != local_3d8.Elements._52_4_) {
                      FVar39 = (ForElementType<FSetElementId>)&local_3d8.Hash;
                      if (local_3d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                        FVar39 = local_3d8.Hash.SecondaryData;
                      }
                      iVar48 = *(int *)((longlong)FVar39 +
                                       (ulonglong)(local_3d8.HashSize - 1U & uVar49) * 4);
                      while (iVar48 != -1) {
                        lVar38 = (longlong)iVar48 * 0x1c;
                        iVar23 = local_7f8;
                        if (((*(int *)(lVar38 + local_3d8.Elements._0_8_) == local_788) &&
                            (*(int *)(lVar38 + 4 + local_3d8.Elements._0_8_) == local_784)) &&
                           ((*(int *)(lVar38 + 8 + local_3d8.Elements._0_8_) == local_780 &&
                            (*(int *)(lVar38 + 0xc + local_3d8.Elements._0_8_) == local_77c)))) {
                          if (iVar48 != -1) {
                            puVar25 = (uint *)(local_3d8.Elements._0_8_ + lVar38 + 0x10);
                            if (local_3d8.Elements._0_8_ + lVar38 == 0) {
                              puVar25 = (uint *)0x0;
                            }
                            if (puVar25 != (uint *)0x0) {
                              uVar49 = *puVar25;
                              uVar29 = 0;
                              if ((int)uVar49 < pTVar21->ArrayNum) {
                                uVar29 = ~uVar49 >> 0x1f;
                              }
                              if ((uVar29 == 0) &&
                                 (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar22)) {
                                pcVar6 = (code *)swi(3);
                                pFVar24 = (FPlanarCells *)(*pcVar6)();
                                return pFVar24;
                              }
                              *(uint *)((pTVar21->AllocatorInstance).Data +
                                       (longlong)(int)uVar49 * 8 + 4) = local_820;
                              goto LAB_14c9a7bcb;
                            }
                          }
                          break;
                        }
                        iVar48 = *(int *)(lVar38 + 0x14 + local_3d8.Elements._0_8_);
                      }
                    }
                    local_7d8 = 4;
                    local_7e0.Data = (FScriptContainerElement *)0x0;
                    local_7d4 = 0;
                    if ((int)local_7d0 == 0) {
                      local_3f8 = iVar41;
                      iStack_3f4 = iVar40;
                      iStack_3f0 = iVar44;
                      iStack_3ec = iVar23;
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,4,0,&local_7e0,4,&local_7d4);
                      iVar23 = local_3f8;
                      iVar41 = iStack_3f4;
                      iVar40 = iStack_3f0;
                      iVar44 = iStack_3ec;
                    }
                    else {
                      local_3e8 = iVar40;
                      iStack_3e4 = iVar41;
                      iStack_3e0 = iVar23;
                      iStack_3dc = iVar44;
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,4,0,&local_7e0,4,&local_7d4);
                      iVar23 = local_3e8;
                      iVar41 = iStack_3e4;
                      iVar40 = iStack_3e0;
                      iVar44 = iStack_3dc;
                    }
                    *(int *)local_7e0.Data = iVar23;
                    *(int *)(local_7e0.Data + 4) = iVar41;
                    *(int *)(local_7e0.Data + 8) = iVar40;
                    *(int *)(local_7e0.Data + 0xc) = iVar44;
                    pFVar35 = ((ForAnyElementType *)piVar33)->Data;
                    local_638 = local_6e8;
                    uStack_630 = uStack_6e0;
                    local_628 = local_6d8;
                    dStack_620 = dVar56;
                    if (((pFVar35 <= (FScriptContainerElement *)&local_638) &&
                        ((FScriptContainerElement *)&local_638 <
                         pFVar35 + (longlong)*(int *)((longlong)piVar33 + 0xc) * 0x20)) &&
                       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar22)) {
                      pcVar6 = (code *)swi(3);
                      pFVar24 = (FPlanarCells *)(*pcVar6)();
                      return pFVar24;
                    }
                    iVar23 = *(int *)((longlong)piVar33 + 8);
                    if (iVar23 == *(int *)((longlong)piVar33 + 0xc)) {
                      iVar23 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x1020,(ForAnyElementType *)piVar33,
                                          (int *)((longlong)piVar33 + 0xc));
                    }
                    *(int *)((longlong)piVar33 + 8) = iVar23 + 1;
                    pFVar4 = ((ForAnyElementType *)piVar33)->Data;
                    pFVar35 = pFVar4 + (longlong)iVar23 * 0x20;
                    *(double *)pFVar35 = local_638;
                    *(undefined8 *)(pFVar35 + 8) = uStack_630;
                    pFVar4 = pFVar4 + (longlong)iVar23 * 0x20 + 0x10;
                    *(undefined8 *)pFVar4 = local_628;
                    *(double *)(pFVar4 + 8) = dStack_620;
                    iVar41 = pTVar21->ArrayNum;
                    if (iVar41 == pTVar21->ArrayMax) {
                      iVar41 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x408,&pTVar21->AllocatorInstance,&pTVar21->ArrayMax);
                    }
                    pTVar21->ArrayNum = iVar41 + 1;
                    pFVar35 = (pTVar21->AllocatorInstance).Data;
                    *(uint *)(pFVar35 + (longlong)iVar41 * 8) = local_820;
                    *(undefined4 *)(pFVar35 + (longlong)iVar41 * 8 + 4) = 0xffffffff;
                    pFVar35 = (pTVar43->AllocatorInstance).Data;
                    if (((pFVar35 <= (FScriptContainerElement *)&local_7e0) &&
                        ((FScriptContainerElement *)&local_7e0 <
                         pFVar35 + (longlong)pTVar43->ArrayMax * 0x10)) &&
                       (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar22)) {
                      pcVar6 = (code *)swi(3);
                      pFVar24 = (FPlanarCells *)(*pcVar6)();
                      return pFVar24;
                    }
                    iVar41 = pTVar43->ArrayNum;
                    if (iVar41 == pTVar43->ArrayMax) {
                      iVar41 = UE::Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x810,&pTVar43->AllocatorInstance,&pTVar43->ArrayMax);
                    }
                    FVar28.Data = local_7e0.Data;
                    pTVar43->ArrayNum = iVar41 + 1;
                    pFVar35 = (pTVar43->AllocatorInstance).Data + (longlong)iVar41 * 0x10;
                    *(undefined8 *)&pFVar35->field_0x0 = 0;
                    lVar38 = (longlong)local_7d8;
                    *(int *)&pFVar35[8].field_0x0 = local_7d8;
                    if (local_7d8 == 0) {
                      *(int *)(pFVar35 + 0xc) = 0;
                    }
                    else {
                      UE::Core::Private::
                      ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,local_7d8,0,(ForAnyElementType *)pFVar35,local_7d8,
                                 (int *)(pFVar35 + 0xc));
                      memcpy(*(void **)&pFVar35->field_0x0,FVar28.Data,lVar38 << 2);
                    }
                    local_588 = &local_788;
                    local_580 = local_768;
                    local_768[0] = iVar23;
                    TSet<TTuple<UE::Math::TIntVector4<int>,int>,TDefaultMapHashableKeyFuncs<UE::Math::TIntVector4<int>,int,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<UE::Math::TIntVector4<int>_const_&,int_&&>_>
                              (&local_3d8,&local_618,(bool *)&local_588);
                    if (local_7e0.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_7e0.Data);
                    }
LAB_14c9a7bcb:
                    local_7f4 = local_7f4 + 1;
                    iVar44 = local_800 + -1;
                    lVar42 = local_608;
                    lVar38 = local_600;
                    iVar23 = local_814;
                    iVar41 = local_81c;
                    uVar49 = local_824;
                    iVar40 = local_818;
                  } while (local_7f4 < *(int *)((longlong)&local_f0 + local_608));
                }
                local_800 = local_800 + 1;
              } while (local_800 < *(int *)((longlong)&local_f0 + lVar38));
              lVar38 = (longlong)iVar23;
              lVar42 = local_5f8;
              pFVar35 = local_798;
              pdVar36 = local_6f8;
              iVar41 = (int)local_7d0;
            }
            iVar41 = iVar41 + 1;
            local_7d0 = CONCAT44(local_7d0._4_4_,iVar41);
          } while (iVar41 < 2);
          local_824 = uVar49 + 1;
          pdVar36 = pdVar36 + 1;
          pFVar35 = (FScriptContainerElement *)((longlong)pFVar35 + 0x10);
        } while ((int)local_824 < 3);
        local_340 = 0;
        local_798 = pFVar35;
        local_6f8 = pdVar36;
        if (local_348 != (void *)0x0) {
          FMemory::Free(local_348);
        }
        TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FIndex3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  (&local_388);
        local_820 = local_820 + 1;
        local_6f0 = local_6f0 + 1;
        pTVar50 = local_7e8;
      } while ((int)local_820 < local_808->NumCells);
    }
    puVar37 = local_c8;
    lVar38 = 3;
    do {
      puVar2 = puVar37 + -2;
      puVar37 = puVar37 + -2;
      lVar38 = lVar38 + -1;
      if ((void *)*puVar2 != (void *)0x0) {
        FMemory::Free((void *)*puVar2);
      }
    } while (lVar38 != 0);
    if (local_7c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_7c8.AllocatorInstance.Data);
    }
    local_3d8.HashSize = 0;
    if (local_3d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_3d8.Hash.SecondaryData);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector4<int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Math::TIntVector4<int>,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_3d8.Elements);
    local_2f0 = 0;
    if (local_2f8 != (void *)0x0) {
      FMemory::Free(local_2f8);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              (&local_338);
    UE::Geometry::TSparseGrid3<unsigned_int>::FreeAll((TSparseGrid3<unsigned_int> *)local_160);
    local_118 = 0;
    if ((void *)local_160._64_8_ != (void *)0x0) {
      FMemory::Free((void *)local_160._64_8_);
    }
    TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_160);
    if ((ForElementType<unsigned_int>)local_2c8._336_8_ != (ForElementType<unsigned_int>)0x0) {
      FMemory::Free((void *)local_2c8._336_8_);
    }
    UE::Geometry::TDynamicVector<unsigned_int,512>::~TDynamicVector<unsigned_int,512>
              ((TDynamicVector<unsigned_int,512> *)(local_2c8 + 0x128));
    local_2c8._288_4_ = 0;
    if ((ForElementType<FSetElementId>)local_2c8._280_8_ != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_2c8._280_8_);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_2c8 + 0xd8));
    UE::Geometry::FSmallListSet::~FSmallListSet((FSmallListSet *)(local_2c8 + 0x68));
    UE::Geometry::TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::
    ~TDynamicVector<UE::Geometry::FSparseOctreeCell,512>
              ((TDynamicVector<UE::Geometry::FSparseOctreeCell,512> *)(local_2c8 + 0x50));
    UE::Geometry::TDynamicVector<int,512>::Empty((TDynamicVector<int,512> *)(local_2c8 + 0x30),0);
    if ((FScriptContainerElement *)local_2c8._56_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2c8._56_8_);
    }
    UE::Geometry::TDynamicVector<unsigned_short,512>::Empty
              ((TDynamicVector<unsigned_short,512> *)(local_2c8 + 0x18),0);
    if ((FScriptContainerElement *)local_2c8._32_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_2c8._32_8_);
    }
  }
  else {
    local_824 = 0;
    if (0 < local_808->NumCells) {
      local_7d0 = 0;
      pFVar24 = local_808;
      do {
        uVar32 = local_7d0;
        uVar49 = 0;
        if ((int)local_824 < local_7e8->ArrayNum) {
          uVar49 = ~local_824 >> 0x1f;
        }
        if ((uVar49 == 0) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          pFVar24 = (FPlanarCells *)(*pcVar6)();
          return pFVar24;
        }
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        uVar49 = (pFVar24->PlaneBoundaryVertices).ArrayNum;
        pFVar31 = (FScriptContainerElement *)(local_7e8->DataPtr->Pad + (uVar32 - 0x31));
        pFVar35 = pFVar31 + 0x18;
        local_820 = uVar49;
        local_810 = (TBox<double> *)pFVar35;
        local_7f0 = pFVar31;
        if (((pFVar4 <= pFVar31) &&
            (pFVar31 < pFVar4 + (longlong)(this->PlaneBoundaryVertices).ArrayMax * 0x18)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          pFVar24 = (FPlanarCells *)(*pcVar6)();
          return pFVar24;
        }
        iVar23 = (this->PlaneBoundaryVertices).ArrayNum;
        if (iVar23 == (this->PlaneBoundaryVertices).ArrayMax) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar1->AllocatorInstance,
                              &(this->PlaneBoundaryVertices).ArrayMax);
        }
        (this->PlaneBoundaryVertices).ArrayNum = iVar23 + 1;
        uVar8 = *(undefined8 *)(pFVar31 + 8);
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        pFVar4 = pFVar5 + (longlong)iVar23 * 0x18;
        *(undefined8 *)pFVar4 = *(undefined8 *)pFVar31;
        *(undefined8 *)(pFVar4 + 8) = uVar8;
        *(undefined8 *)(pFVar5 + (longlong)iVar23 * 0x18 + 0x10) = *(undefined8 *)(pFVar31 + 0x10);
        local_6d0 = *(undefined8 *)pFVar35;
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        uStack_6c8 = *(undefined8 *)(pFVar31 + 8);
        uStack_6c0 = *(undefined8 *)(pFVar31 + 0x10);
        if (((pFVar4 <= (FScriptContainerElement *)&local_6d0) &&
            ((FScriptContainerElement *)&local_6d0 <
             pFVar4 + (longlong)(this->PlaneBoundaryVertices).ArrayMax * 0x18)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          pFVar24 = (FPlanarCells *)(*pcVar6)();
          return pFVar24;
        }
        iVar23 = (this->PlaneBoundaryVertices).ArrayNum;
        if (iVar23 == (this->PlaneBoundaryVertices).ArrayMax) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar1->AllocatorInstance,
                              &(this->PlaneBoundaryVertices).ArrayMax);
        }
        (this->PlaneBoundaryVertices).ArrayNum = iVar23 + 1;
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        pFVar4 = pFVar5 + (longlong)iVar23 * 0x18;
        *(undefined8 *)pFVar4 = local_6d0;
        *(undefined8 *)(pFVar4 + 8) = uStack_6c8;
        *(undefined8 *)(pFVar5 + (longlong)iVar23 * 0x18 + 0x10) = uStack_6c0;
        local_6b8 = *(undefined8 *)pFVar35;
        uStack_6b0 = *(undefined8 *)(pFVar31 + 0x20);
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        local_6a8 = *(undefined8 *)(pFVar31 + 0x10);
        if (((pFVar4 <= (FScriptContainerElement *)&local_6b8) &&
            ((FScriptContainerElement *)&local_6b8 <
             pFVar4 + (longlong)(this->PlaneBoundaryVertices).ArrayMax * 0x18)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          pFVar24 = (FPlanarCells *)(*pcVar6)();
          return pFVar24;
        }
        iVar23 = (this->PlaneBoundaryVertices).ArrayNum;
        if (iVar23 == (this->PlaneBoundaryVertices).ArrayMax) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar1->AllocatorInstance,
                              &(this->PlaneBoundaryVertices).ArrayMax);
        }
        (this->PlaneBoundaryVertices).ArrayNum = iVar23 + 1;
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        pFVar4 = pFVar5 + (longlong)iVar23 * 0x18;
        *(undefined8 *)pFVar4 = local_6b8;
        *(undefined8 *)(pFVar4 + 8) = uStack_6b0;
        *(undefined8 *)(pFVar5 + (longlong)iVar23 * 0x18 + 0x10) = local_6a8;
        local_6a0 = *(undefined8 *)pFVar31;
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        uStack_698 = *(undefined8 *)(pFVar31 + 0x20);
        local_690 = *(undefined8 *)(pFVar31 + 0x10);
        if (((pFVar4 <= (FScriptContainerElement *)&local_6a0) &&
            ((FScriptContainerElement *)&local_6a0 <
             pFVar4 + (longlong)(this->PlaneBoundaryVertices).ArrayMax * 0x18)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          pFVar24 = (FPlanarCells *)(*pcVar6)();
          return pFVar24;
        }
        iVar23 = (this->PlaneBoundaryVertices).ArrayNum;
        if (iVar23 == (this->PlaneBoundaryVertices).ArrayMax) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar1->AllocatorInstance,
                              &(this->PlaneBoundaryVertices).ArrayMax);
        }
        (this->PlaneBoundaryVertices).ArrayNum = iVar23 + 1;
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        pFVar4 = pFVar5 + (longlong)iVar23 * 0x18;
        *(undefined8 *)pFVar4 = local_6a0;
        *(undefined8 *)(pFVar4 + 8) = uStack_698;
        *(undefined8 *)(pFVar5 + (longlong)iVar23 * 0x18 + 0x10) = local_690;
        local_688 = *(undefined8 *)pFVar31;
        uStack_680 = *(undefined8 *)(pFVar31 + 8);
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        local_678 = *(undefined8 *)(pFVar31 + 0x28);
        if (((pFVar4 <= (FScriptContainerElement *)&local_688) &&
            ((FScriptContainerElement *)&local_688 <
             pFVar4 + (longlong)(this->PlaneBoundaryVertices).ArrayMax * 0x18)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          pFVar24 = (FPlanarCells *)(*pcVar6)();
          return pFVar24;
        }
        iVar23 = (this->PlaneBoundaryVertices).ArrayNum;
        if (iVar23 == (this->PlaneBoundaryVertices).ArrayMax) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar1->AllocatorInstance,
                              &(this->PlaneBoundaryVertices).ArrayMax);
        }
        (this->PlaneBoundaryVertices).ArrayNum = iVar23 + 1;
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        pFVar4 = pFVar5 + (longlong)iVar23 * 0x18;
        *(undefined8 *)pFVar4 = local_688;
        *(undefined8 *)(pFVar4 + 8) = uStack_680;
        *(undefined8 *)(pFVar5 + (longlong)iVar23 * 0x18 + 0x10) = local_678;
        local_670 = *(undefined8 *)pFVar35;
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        uStack_668 = *(undefined8 *)(pFVar31 + 8);
        local_660 = *(undefined8 *)(pFVar31 + 0x28);
        if (((pFVar4 <= (FScriptContainerElement *)&local_670) &&
            ((FScriptContainerElement *)&local_670 <
             pFVar4 + (longlong)(this->PlaneBoundaryVertices).ArrayMax * 0x18)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          pFVar24 = (FPlanarCells *)(*pcVar6)();
          return pFVar24;
        }
        iVar23 = (this->PlaneBoundaryVertices).ArrayNum;
        if (iVar23 == (this->PlaneBoundaryVertices).ArrayMax) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar1->AllocatorInstance,
                              &(this->PlaneBoundaryVertices).ArrayMax);
        }
        (this->PlaneBoundaryVertices).ArrayNum = iVar23 + 1;
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        pFVar4 = pFVar5 + (longlong)iVar23 * 0x18;
        *(undefined8 *)pFVar4 = local_670;
        *(undefined8 *)(pFVar4 + 8) = uStack_668;
        *(undefined8 *)(pFVar5 + (longlong)iVar23 * 0x18 + 0x10) = local_660;
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        if (((pFVar4 <= pFVar35) &&
            (pFVar35 < pFVar4 + (longlong)(this->PlaneBoundaryVertices).ArrayMax * 0x18)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          pFVar24 = (FPlanarCells *)(*pcVar6)();
          return pFVar24;
        }
        iVar23 = (this->PlaneBoundaryVertices).ArrayNum;
        if (iVar23 == (this->PlaneBoundaryVertices).ArrayMax) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar1->AllocatorInstance,
                              &(this->PlaneBoundaryVertices).ArrayMax);
        }
        (this->PlaneBoundaryVertices).ArrayNum = iVar23 + 1;
        uVar8 = *(undefined8 *)(pFVar31 + 0x20);
        pFVar5 = (pTVar1->AllocatorInstance).Data;
        pFVar4 = pFVar5 + (longlong)iVar23 * 0x18;
        *(undefined8 *)pFVar4 = *(undefined8 *)pFVar35;
        *(undefined8 *)(pFVar4 + 8) = uVar8;
        *(undefined8 *)(pFVar5 + (longlong)iVar23 * 0x18 + 0x10) = *(undefined8 *)(pFVar31 + 0x28);
        uStack_650 = *(undefined8 *)(pFVar31 + 0x20);
        uStack_648 = *(undefined8 *)(pFVar31 + 0x28);
        pFVar35 = (pTVar1->AllocatorInstance).Data;
        local_658 = *(undefined8 *)pFVar31;
        if (((pFVar35 <= (FScriptContainerElement *)&local_658) &&
            ((FScriptContainerElement *)&local_658 <
             pFVar35 + (longlong)(this->PlaneBoundaryVertices).ArrayMax * 0x18)) &&
           (bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar22)) {
          pcVar6 = (code *)swi(3);
          pFVar24 = (FPlanarCells *)(*pcVar6)();
          return pFVar24;
        }
        iVar23 = (this->PlaneBoundaryVertices).ArrayNum;
        if (iVar23 == (this->PlaneBoundaryVertices).ArrayMax) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,&pTVar1->AllocatorInstance,
                              &(this->PlaneBoundaryVertices).ArrayMax);
        }
        iVar41 = uVar49 + 3;
        (this->PlaneBoundaryVertices).ArrayNum = iVar23 + 1;
        local_750.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_750.ArrayNum = 4;
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        pFVar35 = pFVar4 + (longlong)iVar23 * 0x18;
        *(undefined8 *)pFVar35 = local_658;
        *(undefined8 *)(pFVar35 + 8) = uStack_650;
        *(undefined8 *)(pFVar4 + (longlong)iVar23 * 0x18 + 0x10) = uStack_648;
        iStack_454 = uVar49 + 1;
        iStack_450 = uVar49 + 2;
        local_458 = uVar49;
        iStack_44c = iVar41;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,4,0,&local_750.AllocatorInstance,4,&local_750.ArrayMax);
        *(ulonglong *)local_750.AllocatorInstance.Data = CONCAT44(iStack_454,local_458);
        *(ulonglong *)(local_750.AllocatorInstance.Data + 8) = CONCAT44(iStack_44c,iStack_450);
        uVar29 = (uint)uVar3;
        uVar57 = (uint)((ulonglong)uVar3 >> 0x20);
        local_548._padding_ = lVar11;
        local_548.W = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(pFVar31 + 0x10) >> 0x20) ^
                                       uVar57,(uint)*(undefined8 *)(pFVar31 + 0x10) ^ uVar29);
        local_548._padding_ = 0;
        local_548._padding_ = 0;
        AddPlane(pFVar24,&local_548,local_824,-1,&local_750);
        if (local_750.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_750.AllocatorInstance.Data);
        }
        local_760.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_760.ArrayNum = 4;
        iVar44 = uVar49 + 4;
        iVar23 = uVar49 + 7;
        iVar48 = uVar49 + 6;
        iVar40 = uVar49 + 5;
        local_448 = iVar44;
        iStack_444 = iVar23;
        iStack_440 = iVar48;
        iStack_43c = iVar40;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,4,0,&local_760.AllocatorInstance,4,&local_760.ArrayMax);
        *(ulonglong *)local_760.AllocatorInstance.Data = CONCAT44(iStack_444,local_448);
        *(ulonglong *)(local_760.AllocatorInstance.Data + 8) = CONCAT44(iStack_43c,iStack_440);
        local_528._padding_ = lVar42;
        local_528._padding_ = 0;
        local_528._padding_ = 0;
        local_528.W = *(double *)((longlong)local_810 + 0x10);
        AddPlane(local_808,&local_528,local_824,-1,&local_760);
        if (local_760.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_760.AllocatorInstance.Data);
        }
        local_438 = local_820;
        iStack_42c = local_820 + 1;
        local_740.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_740.ArrayNum = 4;
        iStack_434 = iVar44;
        iStack_430 = iVar40;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,4,0,&local_740.AllocatorInstance,4,&local_740.ArrayMax);
        *(ulonglong *)local_740.AllocatorInstance.Data = CONCAT44(iStack_434,local_438);
        *(ulonglong *)(local_740.AllocatorInstance.Data + 8) = CONCAT44(iStack_42c,iStack_430);
        local_508._padding_ = 0;
        local_508._padding_ = lVar17;
        local_508._padding_ = lVar18;
        local_508.W = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)(local_7f0 + 8) >> 0x20) ^
                                       uVar57,(uint)*(undefined8 *)(local_7f0 + 8) ^ uVar29);
        AddPlane(local_808,&local_508,local_824,-1,&local_740);
        if (local_740.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_740.AllocatorInstance.Data);
        }
        iStack_424 = local_820 + 2;
        local_730.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_730.ArrayNum = 4;
        local_428 = iVar41;
        iStack_420 = iVar48;
        iStack_41c = iVar23;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,4,0,&local_730.AllocatorInstance,4,&local_730.ArrayMax);
        *(ulonglong *)local_730.AllocatorInstance.Data = CONCAT44(iStack_424,local_428);
        *(ulonglong *)(local_730.AllocatorInstance.Data + 8) = CONCAT44(iStack_41c,iStack_420);
        local_4e8._padding_ = 0;
        local_4e8._padding_ = lVar9;
        local_4e8._padding_ = lVar10;
        local_4e8.W = *(double *)((longlong)local_810 + 8);
        AddPlane(local_808,&local_4e8,local_824,-1,&local_730);
        if (local_730.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_730.AllocatorInstance.Data);
        }
        local_418 = local_820;
        local_720.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_720.ArrayNum = 4;
        iStack_414 = iVar41;
        iStack_410 = iVar23;
        iStack_40c = iVar44;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,4,0,&local_720.AllocatorInstance,4,&local_720.ArrayMax);
        uVar49 = local_824;
        *(ulonglong *)local_720.AllocatorInstance.Data = CONCAT44(iStack_414,local_418);
        *(ulonglong *)(local_720.AllocatorInstance.Data + 8) = CONCAT44(iStack_40c,iStack_410);
        local_4c8._padding_ = 0;
        local_4c8._padding_ = lVar15;
        local_4c8._padding_ = lVar16;
        local_4c8.W = (double)CONCAT44((uint)((ulonglong)*(undefined8 *)local_7f0 >> 0x20) ^ uVar57,
                                       (uint)*(undefined8 *)local_7f0 ^ uVar29);
        AddPlane(local_808,&local_4c8,local_824,-1,&local_720);
        if (local_720.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_720.AllocatorInstance.Data);
        }
        local_710.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_408 = local_820 + 1;
        local_710.ArrayNum = 4;
        iStack_3fc = local_820 + 2;
        iStack_404 = iVar40;
        iStack_400 = iVar48;
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,4,0,&local_710.AllocatorInstance,4,&local_710.ArrayMax);
        pFVar24 = local_808;
        *(ulonglong *)local_710.AllocatorInstance.Data = CONCAT44(iStack_404,local_408);
        *(ulonglong *)(local_710.AllocatorInstance.Data + 8) = CONCAT44(iStack_3fc,iStack_400);
        local_4a8._padding_ = 0;
        local_4a8._padding_ = lVar13;
        local_4a8._padding_ = lVar14;
        local_4a8.W = *(double *)local_810;
        AddPlane(local_808,&local_4a8,uVar49,-1,&local_710);
        if (local_710.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_710.AllocatorInstance.Data);
        }
        local_824 = uVar49 + 1;
        local_7d0 = local_7d0 + 0x38;
      } while ((int)local_824 < pFVar24->NumCells);
    }
  }
  if (local_778.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_778.Data);
  }
  return local_808;
}

// FPlanarCells @ 14c9a7ea0

FPlanarCells * __thiscall
FPlanarCells::FPlanarCells
          (FPlanarCells *this,TArrayView<UE::Math::TVector<double>_const_,int> *param_1,
          FVoronoiDiagram *param_2)

{
  double *pdVar1;
  TVector<double> *pTVar2;
  TVector<double> *pTVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  ForAnyElementType _Src;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  FPlanarCells *pFVar15;
  longlong lVar16;
  uint uVar17;
  FScriptContainerElement *pFVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  double dVar24;
  double dVar25;
  undefined1 local_res20 [8];
  uint local_158;
  int local_154;
  int local_150;
  ForAnyElementType local_148;
  undefined8 local_140;
  longlong local_138;
  TArray<FVoronoiCellInfo,TSizedDefaultAllocator<32>_> local_130;
  uint local_120;
  uint local_11c;
  longlong local_118;
  longlong local_110;
  longlong local_108;
  longlong local_100;
  FScriptContainerElement *local_f8;
  int *local_f0;
  int *local_e8;
  double local_d0;
  undefined1 local_c8 [16];
  double local_b8;
  double dStack_b0;
  double local_a8;
  
  this->AssumeConvexCells = false;
  (this->Planes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Planes).ArrayNum = 0;
  (this->Planes).ArrayMax = 0;
  (this->PlaneCells).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlaneCells).ArrayNum = 0;
  (this->PlaneCells).ArrayMax = 0;
  (this->PlaneBoundaries).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PlaneBoundaries).ArrayNum = 0;
  (this->PlaneBoundaries).ArrayMax = 0;
  local_f8 = (FScriptContainerElement *)&this->PlaneBoundaryVertices;
  local_e8 = &(this->PlaneBoundaryVertices).ArrayNum;
  *local_e8 = 0;
  local_f0 = &(this->PlaneBoundaryVertices).ArrayMax;
  *local_f0 = 0;
  (this->PlaneBoundaryVertices).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->InternalSurfaceMaterials).GlobalMaterialID = 0;
  (this->InternalSurfaceMaterials).NoiseSettings.bIsSet = false;
  local_130.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_130.ArrayNum = 0;
  local_130.ArrayMax = 0;
  (this->InternalSurfaceMaterials).bGlobalVisibility = true;
  (this->InternalSurfaceMaterials).GlobalUVScale = 1.0;
  FVoronoiDiagram::ComputeAllCells(param_2,&local_130,-1);
  this->AssumeConvexCells = true;
  this->NumCells = local_130.ArrayNum;
  dVar8 = __real_3e45798ee0000000;
  dVar7 = __real_3ff0000000000000;
  local_158 = 0;
  iVar14 = local_130.ArrayNum;
  if (0 < local_130.ArrayNum) {
    local_138 = 0;
    local_110 = 0;
    local_100 = 0;
    do {
      lVar20 = local_100;
      lVar19 = local_110;
      iVar13 = -1;
      local_120 = ~local_158 >> 0x1f;
      local_150 = -1;
      uVar21 = 0;
      if ((int)local_158 < iVar14) {
        uVar21 = local_120;
      }
      if (uVar21 == 0) {
        bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar9) {
          pcVar5 = (code *)swi(3);
          pFVar15 = (FPlanarCells *)(*pcVar5)();
          return pFVar15;
        }
        iVar14 = local_130.ArrayNum;
      }
      pFVar23 = local_130.AllocatorInstance.Data + lVar20;
      uVar22 = 0;
      uVar21 = 0;
      if (0 < *(int *)(pFVar23 + 0x28)) {
        lVar19 = 0;
        local_118 = 0;
        local_108 = 0;
        do {
          uVar10 = 0;
          if ((int)uVar21 < *(int *)(pFVar23 + 0x28)) {
            uVar10 = ~uVar21 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            pFVar15 = (FPlanarCells *)(*pcVar5)();
            return pFVar15;
          }
          uVar10 = *(uint *)(lVar19 + *(longlong *)(pFVar23 + 0x20));
          local_11c = uVar10;
          if ((int)uVar10 <= (int)local_158) {
            uVar11 = 0;
            if ((int)uVar21 < *(int *)(pFVar23 + 0x38)) {
              uVar11 = ~uVar21 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              pFVar15 = (FPlanarCells *)(*pcVar5)();
              return pFVar15;
            }
            pdVar1 = (double *)(*(longlong *)(pFVar23 + 0x30) + local_118);
            dVar6 = *pdVar1;
            dVar25 = pdVar1[1];
            local_d0 = *(double *)(*(longlong *)(pFVar23 + 0x30) + 0x10 + local_118);
            if (((dVar6 == 0.0) && (dVar25 == 0.0)) && (local_d0 == 0.0)) {
              if ((int)uVar10 < 0) goto LAB_14c9a8793;
              uVar11 = 0;
              if ((int)uVar10 < param_1->ArrayNum) {
                uVar11 = ~uVar10 >> 0x1f;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar9)) {
                pcVar5 = (code *)swi(3);
                pFVar15 = (FPlanarCells *)(*pcVar5)();
                return pFVar15;
              }
              pTVar2 = param_1->DataPtr;
              uVar11 = 0;
              if ((int)local_158 < param_1->ArrayNum) {
                uVar11 = local_120;
              }
              if ((uVar11 == 0) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                     ,0x14f,
                                     L"Array index out of bounds: %lld from an array of size %lld"),
                 bVar9)) {
                pcVar5 = (code *)swi(3);
                pFVar15 = (FPlanarCells *)(*pcVar5)();
                return pFVar15;
              }
              pTVar3 = param_1->DataPtr;
              dVar6 = pTVar2[(int)uVar10].field0_0x0._s_0.X -
                      *(double *)((longlong)&pTVar3->field0_0x0 + local_110);
              dVar25 = pTVar2[(int)uVar10].field0_0x0._s_0.Y -
                       *(double *)((longlong)&pTVar3->field0_0x0 + local_110 + 8);
              local_d0 = pTVar2[(int)uVar10].field0_0x0._s_0.Z -
                         *(double *)((longlong)&pTVar3->field0_0x0 + local_110 + 0x10);
              dVar24 = dVar25 * dVar25 + dVar6 * dVar6 + local_d0 * local_d0;
              if (dVar24 <= dVar8) {
                local_res20[0] = 0;
                `FPlanarCells::FPlanarCells'::__l15::<lambda_1>::operator()(local_res20);
              }
              else {
                local_a8 = dVar7 / SQRT(dVar24);
                dVar6 = local_a8 * dVar6;
                dVar25 = local_a8 * dVar25;
                local_d0 = local_a8 * local_d0;
              }
            }
            uVar17 = uVar22 + 1;
            uVar11 = 0;
            if ((int)uVar17 < *(int *)(pFVar23 + 0x18)) {
              uVar11 = ~uVar17 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              pFVar15 = (FPlanarCells *)(*pcVar5)();
              return pFVar15;
            }
            uVar11 = *(uint *)(*(longlong *)(pFVar23 + 0x10) + (longlong)(int)uVar17 * 4);
            lVar19 = (longlong)(int)uVar11;
            uVar12 = 0;
            if ((int)uVar11 < *(int *)(pFVar23 + 8)) {
              uVar12 = ~uVar11 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              pFVar15 = (FPlanarCells *)(*pcVar5)();
              return pFVar15;
            }
            pFVar18 = local_f8;
            lVar20 = *(longlong *)pFVar23;
            local_c8._8_4_ = SUB84(dVar25,0);
            local_c8._0_8_ = dVar6;
            local_c8._12_4_ = (int)((ulonglong)dVar25 >> 0x20);
            dStack_b0 = dVar25 * *(double *)(lVar20 + 8 + lVar19 * 0x18) +
                        dVar6 * *(double *)(lVar20 + lVar19 * 0x18) +
                        local_d0 * *(double *)(lVar20 + 0x10 + lVar19 * 0x18);
            local_b8 = local_d0;
            if (iVar13 < 0) {
              local_150 = (this->PlaneBoundaryVertices).ArrayNum;
              if ((local_f8 == pFVar23) &&
                 (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(void*)this != (void*)&Source",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x96e,L""), bVar9)) {
                pcVar5 = (code *)swi(3);
                pFVar15 = (FPlanarCells *)(*pcVar5)();
                return pFVar15;
              }
              iVar14 = *(int *)(pFVar23 + 8);
              if (iVar14 != 0) {
                iVar13 = UE::Core::Private::
                         ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x18,8,iVar14,(ForAnyElementType *)pFVar18,local_e8,local_f0);
                memcpy((void *)(*(longlong *)pFVar18 + (longlong)iVar13 * 0x18),*(void **)pFVar23,
                       (longlong)iVar14 * 0x18);
              }
            }
            local_148.Data = (FScriptContainerElement *)0x0;
            local_140 = 0;
            uVar11 = 0;
            if ((int)uVar22 < *(int *)(pFVar23 + 0x18)) {
              uVar11 = ~uVar22 >> 0x1f;
            }
            if ((uVar11 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar5 = (code *)swi(3);
              pFVar15 = (FPlanarCells *)(*pcVar5)();
              return pFVar15;
            }
            iVar14 = local_150;
            lVar19 = (longlong)*(int *)(*(longlong *)(pFVar23 + 0x10) + (longlong)(int)uVar22 * 4);
            if (0 < lVar19) {
              lVar20 = (longlong)(int)uVar22 * 4;
              do {
                lVar20 = lVar20 + 4;
                uVar10 = 0;
                if ((int)uVar17 < *(int *)(pFVar23 + 0x18)) {
                  uVar10 = ~uVar17 >> 0x1f;
                }
                if ((uVar10 == 0) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("(Index >= 0) & (Index < ArrayNum)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x447,
                                       L"Array index out of bounds: %lld into an array of size %lld"
                                      ), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  pFVar15 = (FPlanarCells *)(*pcVar5)();
                  return pFVar15;
                }
                local_154 = *(int *)(lVar20 + *(longlong *)(pFVar23 + 0x10)) + iVar14;
                if (((local_148.Data <= (FScriptContainerElement *)&local_154) &&
                    ((FScriptContainerElement *)&local_154 <
                     local_148.Data + (longlong)local_140._4_4_ * 4)) &&
                   (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar9)) {
                  pcVar5 = (code *)swi(3);
                  pFVar15 = (FPlanarCells *)(*pcVar5)();
                  return pFVar15;
                }
                if ((int)local_140 == local_140._4_4_) {
                  iVar13 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_148,(int *)((longlong)&local_140 + 4));
                  local_140 = CONCAT44(local_140._4_4_,iVar13);
                }
                lVar16 = (longlong)(int)local_140;
                uVar17 = uVar17 + 1;
                local_140 = CONCAT44(local_140._4_4_,(int)local_140 + 1);
                *(int *)(local_148.Data + lVar16 * 4) = local_154;
                lVar19 = lVar19 + -1;
                uVar10 = local_11c;
              } while (lVar19 != 0);
            }
            pFVar18 = (this->Planes).AllocatorInstance.Data;
            if (((pFVar18 <= (FScriptContainerElement *)local_c8) &&
                ((FScriptContainerElement *)local_c8 <
                 pFVar18 + (longlong)(this->Planes).ArrayMax * 0x20)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar5 = (code *)swi(3);
              pFVar15 = (FPlanarCells *)(*pcVar5)();
              return pFVar15;
            }
            iVar14 = (this->Planes).ArrayNum;
            if (iVar14 == (this->Planes).ArrayMax) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x1020,&(this->Planes).AllocatorInstance,&(this->Planes).ArrayMax)
              ;
            }
            (this->Planes).ArrayNum = iVar14 + 1;
            pFVar4 = (this->Planes).AllocatorInstance.Data;
            pFVar18 = pFVar4 + (longlong)iVar14 * 0x20;
            *(undefined8 *)pFVar18 = local_c8._0_8_;
            *(undefined8 *)(pFVar18 + 8) = local_c8._8_8_;
            pFVar4 = pFVar4 + (longlong)iVar14 * 0x20 + 0x10;
            *(double *)pFVar4 = local_b8;
            *(double *)(pFVar4 + 8) = dStack_b0;
            iVar14 = (this->PlaneCells).ArrayNum;
            if (iVar14 == (this->PlaneCells).ArrayMax) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x408,&(this->PlaneCells).AllocatorInstance,
                                  &(this->PlaneCells).ArrayMax);
            }
            (this->PlaneCells).ArrayNum = iVar14 + 1;
            pFVar18 = (this->PlaneCells).AllocatorInstance.Data;
            *(uint *)(pFVar18 + (longlong)iVar14 * 8) = local_158;
            *(uint *)(pFVar18 + (longlong)iVar14 * 8 + 4) = uVar10;
            pFVar18 = (this->PlaneBoundaries).AllocatorInstance.Data;
            if (((pFVar18 <= (FScriptContainerElement *)&local_148) &&
                ((FScriptContainerElement *)&local_148 <
                 pFVar18 + (longlong)(this->PlaneBoundaries).ArrayMax * 0x10)) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x7a5,
                                   L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                  ), bVar9)) {
              pcVar5 = (code *)swi(3);
              pFVar15 = (FPlanarCells *)(*pcVar5)();
              return pFVar15;
            }
            iVar14 = (this->PlaneBoundaries).ArrayNum;
            if (iVar14 == (this->PlaneBoundaries).ArrayMax) {
              iVar14 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&(this->PlaneBoundaries).AllocatorInstance,
                                  &(this->PlaneBoundaries).ArrayMax);
            }
            _Src.Data = local_148.Data;
            (this->PlaneBoundaries).ArrayNum = iVar14 + 1;
            pFVar18 = (this->PlaneBoundaries).AllocatorInstance.Data + (longlong)iVar14 * 0x10;
            *(undefined8 *)&pFVar18->field_0x0 = 0;
            lVar19 = (longlong)(int)local_140;
            *(int *)&pFVar18[8].field_0x0 = (int)local_140;
            if ((int)local_140 == 0) {
              *(int *)(pFVar18 + 0xc) = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (4,4,(int)local_140,0,(ForAnyElementType *)pFVar18,(int)local_140,
                         (int *)(pFVar18 + 0xc));
              memcpy(*(void **)&pFVar18->field_0x0,_Src.Data,lVar19 << 2);
            }
            iVar13 = local_150;
            if (local_148.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_148.Data);
              iVar13 = local_150;
            }
          }
LAB_14c9a8793:
          local_118 = local_118 + 0x18;
          lVar19 = local_108 + 4;
          uVar21 = uVar21 + 1;
          uVar10 = 0;
          if ((int)uVar22 < *(int *)(pFVar23 + 0x18)) {
            uVar10 = ~uVar22 >> 0x1f;
          }
          local_108 = lVar19;
          if ((uVar10 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar5 = (code *)swi(3);
            pFVar15 = (FPlanarCells *)(*pcVar5)();
            return pFVar15;
          }
          uVar22 = uVar22 + 1 + *(int *)(*(longlong *)(pFVar23 + 0x10) + (longlong)(int)uVar22 * 4);
        } while ((int)uVar21 < *(int *)(pFVar23 + 0x28));
        lVar19 = local_110;
        iVar14 = local_130.ArrayNum;
      }
      local_158 = local_158 + 1;
      local_100 = local_100 + 0x40;
      local_138 = local_138 + 1;
      local_110 = lVar19 + 0x18;
    } while ((int)local_158 < this->NumCells);
  }
  DestructItems<FVoronoiCellInfo,int>((FVoronoiCellInfo *)local_130.AllocatorInstance.Data,iVar14);
  if ((FVoronoiCellInfo *)local_130.AllocatorInstance.Data != (FVoronoiCellInfo *)0x0) {
    FMemory::Free(local_130.AllocatorInstance.Data);
  }
  return this;
}

// ~FPlanarCells @ 14c9a93c0

void __thiscall FPlanarCells::~FPlanarCells(FPlanarCells *this)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (this->PlaneBoundaryVertices).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
            ((TArray<int,TSizedDefaultAllocator<32>_> *)
             (this->PlaneBoundaries).AllocatorInstance.Data,(this->PlaneBoundaries).ArrayNum);
  pFVar1 = (this->PlaneBoundaries).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->PlaneCells).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->Planes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
    return;
  }
  return;
}

// operator() @ 14c9aa3c0

int __thiscall `FPlanarCells::FPlanarCells'::__l2::<lambda_1>::operator()(void *this,int param_1)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  uint uVar9;
  
  iVar6 = 0;
  while( true ) {
    plVar2 = *(longlong **)this;
    uVar9 = (uint)~param_1 >> 0x1f;
    uVar5 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar5 = uVar9;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    lVar8 = (longlong)param_1;
    if (*(uint *)(*plVar2 + lVar8 * 8) == param_1) break;
    if (9 < iVar6) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<4490104728457314825>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\PlanarCutPlugin\\Source\\PlanarCut\\Private\\PlanarCut.cpp"
                         ,0x209,"findIters++ < 10");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    plVar2 = *(longlong **)this;
    uVar5 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar5 = uVar9;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    uVar5 = *(uint *)(*plVar2 + lVar8 * 8);
    uVar7 = 0;
    if ((int)uVar5 < (int)plVar2[1]) {
      uVar7 = ~uVar5 >> 0x1f;
    }
    if (uVar7 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    uVar1 = *(undefined4 *)(*plVar2 + (longlong)(int)uVar5 * 8);
    plVar2 = *(longlong **)this;
    uVar5 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar5 = uVar9;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    *(undefined4 *)(*plVar2 + lVar8 * 8) = uVar1;
    plVar2 = *(longlong **)this;
    uVar5 = 0;
    if (param_1 < (int)plVar2[1]) {
      uVar5 = uVar9;
    }
    if (uVar5 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        iVar6 = (*pcVar3)();
        return iVar6;
      }
    }
    param_1 = *(uint *)(*plVar2 + lVar8 * 8);
    iVar6 = iVar6 + 1;
  }
  return param_1;
}

// operator() @ 14c9aed70

int __thiscall
`FPlanarCells::FPlanarCells'::__l15::<lambda_2>::operator()
          (void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  longlong *plVar4;
  TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
  *this_00;
  code *pcVar5;
  double dVar6;
  double dVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  longlong *plVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  uint local_f8 [4];
  TVector<double>_u_0 local_e8;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  TVector<double>_u_0 *local_c0;
  undefined8 local_b8;
  code *local_b0;
  int *local_a8;
  code *local_a0;
  TVector<double>_u_0 **local_98;
  uint *local_90;
  int *local_88;
  undefined4 *local_80;
  int *local_78;
  TTuple<int,double> local_70 [5];
  
  plVar4 = *(longlong **)((longlong)this + 0x10);
  local_f8[0] = 0xffffffff;
  local_f8[1] = 0xffffffff;
  local_f8[2] = 0xffffffff;
  local_f8[param_1] = param_4;
  local_f8[param_2] = param_5;
  local_f8[param_3] = param_6;
  uVar9 = FCrc::MemCrc_DEPRECATED(local_f8,0xc,0);
  lVar15 = (longlong)(int)local_f8[2];
  if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
    plVar12 = (longlong *)plVar4[8];
    if ((longlong *)plVar4[8] == (longlong *)0x0) {
      plVar12 = plVar4 + 7;
    }
    iVar10 = *(int *)((longlong)plVar12 + (ulonglong)((int)plVar4[9] - 1U & uVar9) * 4);
    if (iVar10 != -1) {
      do {
        lVar14 = *plVar4 + (longlong)iVar10 * 0x18;
        if (((*(uint *)(*plVar4 + (longlong)iVar10 * 0x18) == local_f8[0]) &&
            (*(uint *)(lVar14 + 4) == local_f8[1])) && (*(uint *)(lVar14 + 8) == local_f8[2])) {
          if (iVar10 != -1) {
            piVar11 = (int *)(lVar14 + 0xc);
            if (lVar14 == 0) {
              piVar11 = (int *)0x0;
            }
            if (piVar11 != (int *)0x0) {
              return *piVar11;
            }
          }
          break;
        }
        iVar10 = *(int *)(lVar14 + 0x10);
      } while (iVar10 != -1);
    }
  }
  lVar14 = *(longlong *)((longlong)this + 8);
  uVar9 = 0;
  if ((int)local_f8[2] < *(int *)(lVar14 + 0x28)) {
    uVar9 = ~local_f8[2] >> 0x1f;
  }
  uVar13 = local_f8[1];
  if (uVar9 == 0) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      iVar10 = (*pcVar5)();
      return iVar10;
    }
    uVar13 = local_f8[1];
  }
  dVar2 = *(double *)(*(longlong *)(lVar14 + 0x20) + lVar15 * 8);
  lVar15 = *(longlong *)((longlong)this + 8);
  uVar9 = 0;
  if ((int)uVar13 < *(int *)(lVar15 + 0x18)) {
    uVar9 = ~uVar13 >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  plVar4 = *(longlong **)((longlong)this + 8);
  lVar14 = (longlong)(int)local_f8[0];
  dVar3 = *(double *)(*(longlong *)(lVar15 + 0x10) + (longlong)(int)uVar13 * 8);
  uVar9 = 0;
  if ((int)local_f8[0] < (int)plVar4[1]) {
    uVar9 = ~local_f8[0] >> 0x1f;
  }
  if ((uVar9 == 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar8)) {
    pcVar5 = (code *)swi(3);
    iVar10 = (*pcVar5)();
    return iVar10;
  }
  local_e8._s_0.X = *(double *)(*plVar4 + lVar14 * 8);
  local_c0 = &local_e8;
  local_b8 = *(undefined8 *)this;
  local_a8 = &param_4;
  local_b0 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::TPointHashGrid3<int,double>::FindNearestInRadius'::__l2::<lambda_1>,bool,int_const_&>
             ::Call;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<``FPlanarCells::FPlanarCells'::__l15::<lambda_2>::operator()'::__l2::<lambda_1>,double,int_const_&>
             ::Call;
  local_98 = &local_c0;
  local_e8._s_0.Y = dVar3;
  local_e8._s_0.Z = dVar2;
  UE::Geometry::TPointHashGrid3<int,double>::FindInRadiusHelper<0>
            (*(TPointHashGrid3<int,double> **)((longlong)this + 0x18),local_70,
             (TVector<double> *)&local_e8._s_0,__real_3f1a36e2eb1c432d,
             (TFunctionRef<double___cdecl(int_const_&)> *)&local_a0,
             (TFunctionRef<bool___cdecl(int_const_&)> *)&local_b0);
  if (local_70[0]._0_4_ == -1) {
    lVar15 = *(longlong *)this;
    if (((*(TVector<double>_u_0 **)(lVar15 + 0x38) <= &local_e8) &&
        (&local_e8 <
         (TVector<double>_u_0 *)
         ((*(TVector<double>_u_0 **)(lVar15 + 0x38))->XYZ + (longlong)*(int *)(lVar15 + 0x44) * 3)))
       && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar8)) {
      pcVar5 = (code *)swi(3);
      iVar10 = (*pcVar5)();
      return iVar10;
    }
    iVar10 = *(int *)(lVar15 + 0x40);
    if (iVar10 == *(int *)(lVar15 + 0x44)) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,(ForAnyElementType *)(lVar15 + 0x38),(int *)(lVar15 + 0x44));
    }
    *(int *)(lVar15 + 0x40) = iVar10 + 1;
    lVar15 = *(longlong *)(lVar15 + 0x38);
    pdVar1 = (double *)(lVar15 + (longlong)iVar10 * 0x18);
    *pdVar1 = local_e8._s_0.X;
    pdVar1[1] = local_e8._s_0.Y;
    *(double *)(lVar15 + 0x10 + (longlong)iVar10 * 0x18) = local_e8._s_0.Z;
    local_90 = local_f8;
    local_88 = &param_5;
    param_5 = iVar10;
    TSet<TTuple<UE::Geometry::FIndex3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::Geometry::FIndex3i_const_&,int_const_&>_>
              (*(TSet<TTuple<UE::Geometry::FIndex3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FIndex3i,int,0>,FDefaultSetAllocator>
                 **)((longlong)this + 0x10),
               (TPairInitializer<UE::Geometry::FIndex3i_const_&,int_const_&> *)&param_6,
               (bool *)&local_90);
    dVar3 = __real_41f0000000000000;
    this_00 = *(TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                **)((longlong)this + 0x18);
    dVar2 = FGenericPlatformMath::Fmod
                      (local_e8._s_0.Z / *(double *)&this_00[1].Elements.field_0x8,
                       __real_41f0000000000000);
    if (dVar2 < 0.0) {
      dVar2 = dVar2 + dVar3;
    }
    dVar6 = FGenericPlatformMath::Fmod
                      (local_e8._s_0.Y / *(double *)&this_00[1].Elements.field_0x8,dVar3);
    if (dVar6 < 0.0) {
      dVar6 = dVar6 + dVar3;
    }
    dVar7 = FGenericPlatformMath::Fmod
                      (local_e8._s_0.X / *(double *)&this_00[1].Elements.field_0x8,dVar3);
    if (dVar7 < 0.0) {
      dVar7 = dVar7 + dVar3;
    }
    local_d0 = (undefined4)(longlong)dVar7;
    local_cc = (undefined4)(longlong)dVar6;
    local_c8 = (undefined4)(longlong)dVar2;
    local_80 = &local_d0;
    local_78 = &param_5;
    TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
              (this_00,(TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> *)
                       &stack0x00000010,(bool *)&local_80);
    local_70[0]._0_4_ = param_5;
  }
  return local_70[0]._0_4_;
}

// AddPlane @ 14c9b2040

int __thiscall
FPlanarCells::AddPlane
          (FPlanarCells *this,TPlane<double> *param_1,int param_2,int param_3,
          TArray<int,TSizedDefaultAllocator<32>_> *param_4)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  TPlane<double> *pTVar3;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar4;
  code *pcVar5;
  longlong lVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  FScriptContainerElement *pFVar11;
  
  pTVar3 = (TPlane<double> *)(this->Planes).AllocatorInstance.Data;
  if ((pTVar3 <= param_1) && (param_1 < pTVar3 + (this->Planes).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      iVar9 = (*pcVar5)();
      return iVar9;
    }
  }
  iVar9 = (this->Planes).ArrayNum;
  piVar1 = &(this->Planes).ArrayMax;
  if (iVar9 == *piVar1) {
    iVar9 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x1020,&(this->Planes).AllocatorInstance,piVar1);
  }
  (this->Planes).ArrayNum = iVar9 + 1;
  piVar1 = &(this->PlaneCells).ArrayMax;
  pFVar11 = (this->Planes).AllocatorInstance.Data;
  lVar6 = param_1->_padding_;
  pFVar2 = pFVar11 + (longlong)iVar9 * 0x20;
  *(longlong *)pFVar2 = param_1->_padding_;
  *(longlong *)(pFVar2 + 8) = lVar6;
  dVar7 = param_1->W;
  pFVar11 = pFVar11 + (longlong)iVar9 * 0x20 + 0x10;
  *(longlong *)pFVar11 = param_1->_padding_;
  *(double *)(pFVar11 + 8) = dVar7;
  iVar10 = (this->PlaneCells).ArrayNum;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x408,&(this->PlaneCells).AllocatorInstance,piVar1);
  }
  (this->PlaneCells).ArrayNum = iVar10 + 1;
  pFVar2 = (this->PlaneCells).AllocatorInstance.Data;
  *(int *)(pFVar2 + (longlong)iVar10 * 8) = param_2;
  *(int *)(pFVar2 + (longlong)iVar10 * 8 + 4) = param_3;
  pTVar4 = (TArray<int,TSizedDefaultAllocator<32>_> *)(this->PlaneBoundaries).AllocatorInstance.Data
  ;
  if ((pTVar4 <= param_4) && (param_4 < pTVar4 + (this->PlaneBoundaries).ArrayMax)) {
    bVar8 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar5 = (code *)swi(3);
      iVar9 = (*pcVar5)();
      return iVar9;
    }
  }
  iVar10 = (this->PlaneBoundaries).ArrayNum;
  piVar1 = &(this->PlaneBoundaries).ArrayMax;
  if (iVar10 == *piVar1) {
    iVar10 = UE::Core::Private::
             ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x810,&(this->PlaneBoundaries).AllocatorInstance,piVar1);
  }
  (this->PlaneBoundaries).ArrayNum = iVar10 + 1;
  pFVar11 = (this->PlaneBoundaries).AllocatorInstance.Data + (longlong)iVar10 * 0x10;
  *(undefined8 *)&pFVar11->field_0x0 = 0;
  iVar10 = param_4->ArrayNum;
  pFVar2 = (param_4->AllocatorInstance).Data;
  *(int *)&pFVar11[8].field_0x0 = iVar10;
  if (iVar10 == 0) {
    *(int *)(pFVar11 + 0xc) = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,iVar10,0,(ForAnyElementType *)pFVar11,iVar10,(int *)(pFVar11 + 0xc));
    memcpy(*(void **)&pFVar11->field_0x0,pFVar2,(longlong)iVar10 << 2);
  }
  return iVar9;
}

// DiscardCells @ 14c9c9d80

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FPlanarCells::DiscardCells(FPlanarCells *this,TFunctionRef<bool___cdecl(int)> *param_1,bool param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  ForAnyElementType FVar10;
  char cVar11;
  bool bVar12;
  char cVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  FScriptContainerElement *pFVar19;
  undefined4 *puVar20;
  uint uVar21;
  uint uVar22;
  FScriptContainerElement *pFVar23;
  uint *puVar24;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *pTVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  FScriptContainerElement *pFVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  uint uVar33;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  longlong local_f8;
  ForAnyElementType local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  uint local_d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_d0;
  int local_c0 [2];
  uint local_b8 [2];
  uint local_b0 [2];
  uint local_a8 [2];
  FScriptContainerElement *local_a0;
  int local_98 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_90 [5];
  
  local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d0.ArrayNum = 0;
  local_d0.ArrayMax = 0;
  local_c0[0] = -1;
  TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_d0,local_c0,this->NumCells);
  iVar28 = this->NumCells;
  iVar26 = 0;
  uVar21 = 0;
  if (0 < iVar28) {
    lVar31 = 0;
    do {
      local_b8[0] = uVar21;
      cVar11 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_b8);
      if (cVar11 != '\0') {
        uVar14 = 0;
        if ((int)uVar21 < local_d0.ArrayNum) {
          uVar14 = ~uVar21 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        *(int *)(local_d0.AllocatorInstance.Data + lVar31) = iVar26;
        iVar26 = iVar26 + 1;
      }
      iVar28 = this->NumCells;
      uVar21 = uVar21 + 1;
      lVar31 = lVar31 + 4;
    } while ((int)uVar21 < iVar28);
  }
  if ((param_2) && (iVar26 < iVar28)) {
    local_d8 = (this->PlaneCells).ArrayNum;
    uVar18 = (ulonglong)(int)local_d8;
    pFVar23 = (this->PlaneCells).AllocatorInstance.Data;
    pFVar29 = pFVar23 + uVar18 * 8;
    while( true ) {
      if ((this->PlaneCells).ArrayNum != (int)uVar18) {
        local_res18[0] = 0;
        `TCheckedPointerIterator<TTuple<int,int>,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res18);
      }
      if (pFVar23 == pFVar29) break;
      if ((-1 < (int)*(uint *)pFVar23) && (-1 < (int)*(uint *)(pFVar23 + 4))) {
        local_b0[0] = *(uint *)pFVar23;
        cVar11 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_b0);
        local_a8[0] = *(uint *)(pFVar23 + 4);
        cVar13 = (**(code **)param_1)(*(undefined8 *)&param_1->field_0x8,local_a8);
        if (cVar11 != cVar13) {
          pFVar19 = pFVar23;
          if (cVar11 != '\0') {
            pFVar19 = pFVar23 + 4;
          }
          uVar21 = *(uint *)pFVar19;
          uVar14 = 0;
          if ((int)uVar21 < local_d0.ArrayNum) {
            uVar14 = ~uVar21 >> 0x1f;
          }
          if ((uVar14 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if (*(int *)(local_d0.AllocatorInstance.Data + (longlong)(int)uVar21 * 4) < 0) {
            local_a0 = (FScriptContainerElement *)CONCAT44(local_a0._4_4_,iVar26);
            iVar26 = iVar26 + 1;
            uVar14 = 0;
            if ((int)uVar21 < local_d0.ArrayNum) {
              uVar14 = ~uVar21 >> 0x1f;
            }
            if ((uVar14 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined4 *)(local_d0.AllocatorInstance.Data + (longlong)(int)uVar21 * 4) =
                 local_a0._0_4_;
          }
        }
      }
      uVar18 = (ulonglong)local_d8;
      pFVar23 = pFVar23 + 8;
    }
  }
  if (iVar26 != this->NumCells) {
    uVar22 = 0;
    this->NumCells = iVar26;
    uVar9 = _UNK_15066df7c;
    uVar17 = _UNK_15066df78;
    uVar14 = __xmm_80000000000000008000000000000000._4_4_;
    uVar21 = (uint)__xmm_80000000000000008000000000000000;
    if (0 < (this->Planes).ArrayNum) {
      lVar30 = 0;
      lVar31 = 0;
      local_f8 = 0;
      do {
        uVar33 = ~uVar22 >> 0x1f;
        uVar27 = 0;
        if ((int)uVar22 < (this->PlaneCells).ArrayNum) {
          uVar27 = uVar33;
        }
        if ((uVar27 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        local_e0 = *(longlong *)((this->PlaneCells).AllocatorInstance.Data + lVar30);
        uVar27 = (uint)local_e0;
        if ((int)uVar27 < 0) {
          iVar28 = -1;
        }
        else {
          uVar15 = 0;
          if ((int)uVar27 < local_d0.ArrayNum) {
            uVar15 = ~uVar27 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar28 = *(int *)(local_d0.AllocatorInstance.Data + (longlong)(int)uVar27 * 4);
        }
        lVar6 = local_e0;
        lVar32 = (longlong)(int)local_e0._4_4_;
        local_e0 = CONCAT44(local_e0._4_4_,iVar28);
        if (lVar6 < 0) {
          iVar26 = -1;
        }
        else {
          uVar27 = 0;
          if ((int)local_e0._4_4_ < local_d0.ArrayNum) {
            uVar27 = ~local_e0._4_4_ >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar26 = *(int *)(local_d0.AllocatorInstance.Data + lVar32 * 4);
        }
        local_e0 = CONCAT44(iVar26,(undefined4)local_e0);
        if ((iVar28 == iVar26) && (iVar28 == -1)) {
          uVar27 = 0;
          if ((int)uVar22 < (this->PlaneCells).ArrayNum) {
            uVar27 = uVar33;
          }
          if ((uVar27 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar26 = (this->PlaneCells).ArrayNum;
          pFVar29 = (this->PlaneCells).AllocatorInstance.Data;
          iVar28 = ~uVar22 + iVar26;
          if (1 < iVar28) {
            iVar28 = 1;
          }
          if (iVar28 != 0) {
            memmove(pFVar29 + (longlong)(int)uVar22 * 8,pFVar29 + (longlong)(iVar26 - iVar28) * 8,
                    (longlong)iVar28 << 3);
          }
          piVar1 = &(this->PlaneCells).ArrayNum;
          *piVar1 = *piVar1 + -1;
          uVar27 = 0;
          if ((int)uVar22 < (this->Planes).ArrayNum) {
            uVar27 = uVar33;
          }
          if ((uVar27 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          iVar26 = (this->Planes).ArrayNum;
          pFVar29 = (this->Planes).AllocatorInstance.Data;
          iVar28 = iVar26 + ~uVar22;
          if (1 < iVar28) {
            iVar28 = 1;
          }
          if (iVar28 != 0) {
            memmove(pFVar29 + (longlong)(int)uVar22 * 0x20,
                    pFVar29 + (longlong)(iVar26 - iVar28) * 0x20,(longlong)iVar28 << 5);
          }
          piVar1 = &(this->Planes).ArrayNum;
          *piVar1 = *piVar1 + -1;
          uVar27 = 0;
          if ((int)uVar22 < (this->PlaneBoundaries).ArrayNum) {
            uVar27 = ~uVar22 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::
          RemoveAtSwapImpl(&this->PlaneBoundaries,uVar22);
          uVar22 = uVar22 - 1;
          local_f8 = local_f8 + -0x10;
          lVar31 = lVar31 + -0x20;
          lVar30 = lVar30 + -8;
        }
        else {
          if (iVar28 < 0) {
            local_e0 = CONCAT44(iVar28,iVar26);
            uVar27 = 0;
            if ((int)uVar22 < (this->PlaneBoundaries).ArrayNum) {
              uVar27 = ~uVar22 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar29 = (this->PlaneBoundaries).AllocatorInstance.Data;
            lVar32 = 0;
            iVar28 = *(int *)(pFVar29 + local_f8 + 8);
            lVar6 = *(longlong *)(pFVar29 + local_f8);
            iVar26 = iVar28 / 2;
            if (0 < iVar26) {
              puVar20 = (undefined4 *)(lVar6 + (longlong)(iVar28 + -1) * 4);
              do {
                uVar5 = *(undefined4 *)(lVar6 + lVar32 * 4);
                *(undefined4 *)(lVar6 + lVar32 * 4) = *puVar20;
                lVar32 = lVar32 + 1;
                *puVar20 = uVar5;
                puVar20 = puVar20 + -1;
              } while (lVar32 < iVar26);
            }
            uVar27 = 0;
            if ((int)uVar22 < (this->Planes).ArrayNum) {
              uVar27 = ~uVar22 >> 0x1f;
            }
            if ((uVar27 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar29 = (this->Planes).AllocatorInstance.Data;
            uVar3 = *(undefined8 *)(pFVar29 + lVar31);
            uVar4 = *(undefined8 *)(pFVar29 + lVar31 + 0x18);
            pFVar29 = pFVar29 + lVar31 + 8;
            uVar27 = *(uint *)pFVar29;
            uVar33 = *(uint *)(pFVar29 + 4);
            uVar15 = *(uint *)(pFVar29 + 8);
            uVar8 = *(uint *)(pFVar29 + 0xc);
            uVar16 = 0;
            if ((int)uVar22 < (this->Planes).ArrayNum) {
              uVar16 = ~uVar22 >> 0x1f;
            }
            if ((uVar16 == 0) &&
               (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar12)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            pFVar23 = (this->Planes).AllocatorInstance.Data;
            *(ulonglong *)(pFVar23 + lVar31) =
                 CONCAT44((uint)((ulonglong)uVar3 >> 0x20) ^ uVar14,(uint)uVar3 ^ uVar21);
            pFVar29 = pFVar23 + lVar31 + 8;
            *(uint *)pFVar29 = uVar27 ^ uVar21;
            *(uint *)(pFVar29 + 4) = uVar33 ^ uVar14;
            *(uint *)(pFVar29 + 8) = uVar15 ^ uVar17;
            *(uint *)(pFVar29 + 0xc) = uVar8 ^ uVar9;
            *(ulonglong *)(pFVar23 + lVar31 + 0x18) =
                 CONCAT44((uint)((ulonglong)uVar4 >> 0x20) ^ uVar14,(uint)uVar4 ^ uVar21);
          }
          uVar27 = 0;
          if ((int)uVar22 < (this->PlaneCells).ArrayNum) {
            uVar27 = ~uVar22 >> 0x1f;
          }
          if ((uVar27 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          *(longlong *)((this->PlaneCells).AllocatorInstance.Data + lVar30) = local_e0;
        }
        local_f8 = local_f8 + 0x10;
        uVar22 = uVar22 + 1;
        lVar31 = lVar31 + 0x20;
        lVar30 = lVar30 + 8;
      } while ((int)uVar22 < (this->Planes).ArrayNum);
    }
    local_90[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_90[0].ArrayNum = 0;
    local_90[0].ArrayMax = 0;
    local_98[0] = -1;
    TArray<int,TSizedDefaultAllocator<32>_>::Init
              (local_90,local_98,(this->PlaneBoundaryVertices).ArrayNum);
    local_d8 = (this->PlaneBoundaries).ArrayNum;
    uVar18 = (ulonglong)(int)local_d8;
    pFVar29 = (this->PlaneBoundaries).AllocatorInstance.Data;
    local_a0 = pFVar29 + uVar18 * 0x10;
    local_f0.Data = (FScriptContainerElement *)0x0;
    local_e8 = 0;
    while( true ) {
      pFVar23 = local_a0;
      if ((this->PlaneBoundaries).ArrayNum != (int)uVar18) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<TArray<int,TSizedDefaultAllocator<32>_>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_res8);
      }
      if (pFVar29 == pFVar23) break;
      puVar24 = *(uint **)pFVar29;
      iVar28 = *(int *)(pFVar29 + 8);
      puVar2 = puVar24 + iVar28;
      while( true ) {
        if (*(int *)(pFVar29 + 8) != iVar28) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (puVar24 == puVar2) break;
        uVar21 = *puVar24;
        uVar14 = 0;
        if ((int)uVar21 < local_90[0].ArrayNum) {
          uVar14 = ~uVar21 >> 0x1f;
        }
        if ((uVar14 == 0) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar12)) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        FVar10.Data = local_90[0].AllocatorInstance.Data;
        uVar14 = *(uint *)(local_90[0].AllocatorInstance.Data + (longlong)(int)uVar21 * 4);
        if ((int)uVar14 < 0) {
          uVar14 = *puVar24;
          uVar17 = 0;
          if ((int)uVar14 < (this->PlaneBoundaryVertices).ArrayNum) {
            uVar17 = ~uVar14 >> 0x1f;
          }
          if ((uVar17 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          pFVar23 = (this->PlaneBoundaryVertices).AllocatorInstance.Data +
                    (longlong)(int)uVar14 * 0x18;
          if (((local_f0.Data <= pFVar23) &&
              (pFVar23 < local_f0.Data + (longlong)local_e8._4_4_ * 0x18)) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar12)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          if ((uint)local_e8 == local_e8._4_4_) {
            iVar26 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x818,&local_f0,(int *)((longlong)&local_e8 + 4));
            local_e8 = CONCAT44(local_e8._4_4_,iVar26);
          }
          uVar14 = (uint)local_e8;
          lVar31 = (longlong)(int)(uint)local_e8;
          local_e8 = CONCAT44(local_e8._4_4_,(uint)local_e8 + 1);
          uVar3 = *(undefined8 *)(pFVar23 + 8);
          *(undefined8 *)(local_f0.Data + lVar31 * 0x18) = *(undefined8 *)pFVar23;
          *(undefined8 *)(local_f0.Data + lVar31 * 0x18 + 8) = uVar3;
          *(undefined8 *)(local_f0.Data + lVar31 * 0x18 + 0x10) = *(undefined8 *)(pFVar23 + 0x10);
          *(uint *)(FVar10.Data + (longlong)(int)uVar21 * 4) = uVar14;
        }
        *puVar24 = uVar14;
        puVar24 = puVar24 + 1;
      }
      uVar18 = (ulonglong)local_d8;
      pFVar29 = pFVar29 + 0x10;
    }
    pTVar25 = &this->PlaneBoundaryVertices;
    if (pTVar25 != (TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)&local_f0) {
      pFVar29 = (pTVar25->AllocatorInstance).Data;
      if (pFVar29 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar29);
      }
      (pTVar25->AllocatorInstance).Data = local_f0.Data;
      (this->PlaneBoundaryVertices).ArrayNum = (uint)local_e8;
      (this->PlaneBoundaryVertices).ArrayMax = local_e8._4_4_;
      local_e8 = 0;
      local_f0.Data = (FScriptContainerElement *)0x0;
    }
    if (local_f0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_f0.Data);
    }
    if (local_90[0].AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_90[0].AllocatorInstance.Data);
    }
  }
  if (local_d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d0.AllocatorInstance.Data);
  }
  return;
}

// IsInfinitePlane @ 14c9d56c0

bool __thiscall FPlanarCells::IsInfinitePlane(FPlanarCells *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  
  if ((this->NumCells == 2) && ((this->Planes).ArrayNum == 1)) {
    if ((this->PlaneBoundaries).ArrayNum < 1) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        uVar3 = (*pcVar1)();
        return (bool)uVar3;
      }
    }
    if (*(int *)((this->PlaneBoundaries).AllocatorInstance.Data + 8) == 0) {
      return true;
    }
  }
  return false;
}

// operator() @ 1505753c0

bool __thiscall `FPlanarCells::FPlanarCells'::__l15::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4490104728457314481>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4490104728457314481>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

// operator() @ 150575440

bool __thiscall `FPlanarCells::FPlanarCells'::__l57::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<4490104728457314952>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<4490104728457314952>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

