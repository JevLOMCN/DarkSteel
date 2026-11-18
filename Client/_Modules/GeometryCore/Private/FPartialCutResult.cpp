// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 8

// FPartialCutResult @ 143367420

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FPartialCutResult * __thiscall
UE::Geometry::`anonymous_namespace'::FPartialCutResult::FPartialCutResult
          (void *this,FConvexPart *param_1,TPlane3<double> *param_2,double param_3,bool param_4,
          double param_5)

{
  TArray<double,TSizedDefaultAllocator<32>_> *this_00;
  int *piVar1;
  FRefCountVector *pFVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  bool bVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  bool bVar14;
  ushort uVar15;
  int iVar16;
  FPartialCutResult *pFVar17;
  ForAnyElementType FVar18;
  FScriptContainerElement *pFVar19;
  double *pdVar20;
  ulonglong uVar21;
  uint uVar22;
  uint uVar23;
  FScriptContainerElement *pFVar24;
  uint uVar25;
  longlong lVar26;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar27;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar28;
  int iVar29;
  ulonglong uVar30;
  uint uVar31;
  uint uVar32;
  longlong lVar33;
  longlong lVar34;
  TPlane3<double> *pTVar35;
  uint uVar36;
  ulonglong uVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  uint uVar46;
  uint uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  uint local_3b8;
  undefined1 local_3b4;
  undefined1 local_3b3 [3];
  uint local_3b0;
  uint local_3ac;
  IndexIterator local_3a8;
  TArray<bool,TSizedDefaultAllocator<32>_> local_398;
  TArray<bool,TSizedDefaultAllocator<32>_> local_388;
  TArray<bool,TSizedDefaultAllocator<32>_> local_378;
  undefined8 local_368;
  TPlane3<double> *local_358;
  FPartialCutResult *local_350;
  int *local_348;
  double local_340;
  double dStack_338;
  undefined8 local_330;
  double local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  double local_310;
  double dStack_308;
  double local_300;
  BaseIterator local_2f8;
  IndexIterator local_2e8;
  IndexIterator local_2d8;
  FPartialCutResult *local_2c8;
  FConvexPart *local_2c0;
  code *local_2b8;
  FPartialCutResult **local_2b0;
  code *local_2a8;
  FPartialCutResult **local_2a0;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_298;
  int local_290;
  code *local_288;
  TArray<bool,TSizedDefaultAllocator<32>_> **local_280;
  TConvexHull3<double> local_278;
  TVector<double>_u_0 local_1c8;
  FPartialCutResult *local_1b0;
  FConvexPart *local_1a8;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_1a0;
  int local_198;
  double local_188;
  double dStack_180;
  double local_178;
  double local_170;
  double dStack_168;
  double local_160;
  double local_148;
  double local_138;
  double dStack_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  
  uVar46 = SUB84(param_3,0);
  uVar47 = (uint)((ulonglong)param_3 >> 0x20);
  *(undefined8 *)this = 0;
  this_00 = (TArray<double,TSizedDefaultAllocator<32>_> *)((longlong)this + 0x40);
  *(undefined8 *)((longlong)this + 8) = 0;
  piVar1 = (int *)((longlong)this + 0x4c);
  *(undefined8 *)((longlong)this + 0x10) = 0;
  *(undefined8 *)((longlong)this + 0x18) = 0;
  local_348 = (int *)((longlong)this + 0x48);
  *(undefined8 *)((longlong)this + 0x20) = 0;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  (this_00->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  *local_348 = 0;
  *piVar1 = 0;
  *(undefined8 *)((longlong)this + 0x50) = 0;
  *(undefined8 *)((longlong)this + 0x58) = 0;
  *(undefined8 *)((longlong)this + 0x60) = 0;
  *(undefined8 *)((longlong)this + 0x68) = 0;
  *(undefined8 *)((longlong)this + 0x70) = 0;
  *(undefined8 *)((longlong)this + 0x78) = 0;
  *(undefined1 *)((longlong)this + 0x80) = 0;
  iVar29 = *local_348;
  uVar22 = (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200 +
           (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed;
  local_358 = param_2;
  local_350 = this;
  if (iVar29 < (int)uVar22) {
    iVar16 = Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (8,8,uVar22 - iVar29,(ForAnyElementType *)this_00,local_348,piVar1);
    memset((this_00->AllocatorInstance).Data + (longlong)iVar16 * 8,0,
           (longlong)(int)(uVar22 - iVar29) << 3);
  }
  else {
    if ((int)uVar22 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar22);
    }
    if ((int)uVar22 < iVar29) {
      uVar25 = iVar29 - uVar22;
      if (((int)(uVar22 | uVar25) < 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar14)) {
        pcVar10 = (code *)swi(3);
        pFVar17 = (FPartialCutResult *)(*pcVar10)();
        return pFVar17;
      }
      if (uVar25 != 0) {
        TArray<double,TSizedDefaultAllocator<32>_>::RemoveAtImpl(this_00,uVar22,uVar25);
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,(ForAnyElementType *)this_00,*(int *)((longlong)this + 0x48),piVar1);
      }
    }
  }
  local_378.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_378.ArrayNum = 0;
  local_378.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&local_378,*(int *)((longlong)this + 0x48),Default);
  local_398.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_398.ArrayNum = 0;
  local_398.ArrayMax = 0;
  local_388.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_388.ArrayNum = 0;
  local_388.ArrayMax = 0;
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&local_398,
             (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200 +
             (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed,Default);
  TArray<bool,TSizedDefaultAllocator<32>_>::SetNumZeroed
            (&local_388,
             (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200 +
             (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed,Default);
  FRefCountVector::IndexIterator::IndexIterator
            ((IndexIterator *)&local_2f8,&(param_1->InternalGeo).VertexRefCounts,0,
             (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200 +
             (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed);
  iVar29 = (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200 +
           (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator
            (&local_2e8,&(param_1->InternalGeo).VertexRefCounts,iVar29,iVar29);
  pTVar35 = local_358;
  uVar22 = (uint)__xmm_80000000000000008000000000000000;
  uVar25 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  pFVar17 = this;
  if (local_2f8.Index != local_2e8._8_4_) {
    do {
      uVar31 = local_2f8.Index;
      if ((-1 < (int)uVar31) &&
         ((int)uVar31 <
          (int)((param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200 +
               (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed))) {
        uVar30 = (local_2f8._8_8_ & 0xffffffff) >> 9;
        uVar37 = (ulonglong)(uVar31 & 0x1ff);
        uVar15 = *(ushort *)
                  (*(longlong *)
                    ((param_1->InternalGeo).VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data
                    + uVar30 * 8) + uVar37 * 2);
        if (uVar15 == 0xffff) {
          uVar15 = 0;
        }
        if (1 < uVar15) {
          uVar36 = ~uVar31 >> 0x1f;
          lVar34 = *(longlong *)
                    ((param_1->InternalGeo).Vertices.Blocks.AllocatorInstance.Data + uVar30 * 8);
          pdVar20 = (double *)(lVar34 + uVar37 * 0x18);
          local_138 = *pdVar20;
          dStack_130 = pdVar20[1];
          local_128 = *(double *)(lVar34 + 0x10 + uVar37 * 0x18);
          uVar23 = 0;
          if ((int)uVar31 < *(int *)((longlong)this + 0x48)) {
            uVar23 = uVar36;
          }
          dVar11 = (dStack_130 * (pTVar35->Normal).field0_0x0._s_0.Y +
                    local_138 * (pTVar35->Normal).field0_0x0._s_0.X +
                   local_128 * (pTVar35->Normal).field0_0x0._s_0.Z) - pTVar35->Constant;
          if ((uVar23 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            pFVar17 = (FPartialCutResult *)(*pcVar10)();
            return pFVar17;
          }
          *(double *)((this_00->AllocatorInstance).Data + (longlong)(int)uVar31 * 8) = dVar11;
          if ((double)CONCAT44(uVar47 ^ uVar25,uVar46 ^ uVar22) <= dVar11) {
            if (dVar11 <= param_3) goto LAB_143367825;
            uVar23 = 0;
            if ((int)uVar31 < local_388.ArrayNum) {
              uVar23 = uVar36;
            }
            FVar18.Data = local_388.AllocatorInstance.Data;
            if ((uVar23 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               FVar18.Data = local_388.AllocatorInstance.Data, bVar14)) {
              pcVar10 = (code *)swi(3);
              pFVar17 = (FPartialCutResult *)(*pcVar10)();
              return pFVar17;
            }
          }
          else {
            uVar23 = 0;
            if ((int)uVar31 < local_398.ArrayNum) {
              uVar23 = uVar36;
            }
            FVar18.Data = local_398.AllocatorInstance.Data;
            if ((uVar23 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               FVar18.Data = local_398.AllocatorInstance.Data, bVar14)) {
              pcVar10 = (code *)swi(3);
              pFVar17 = (FPartialCutResult *)(*pcVar10)();
              return pFVar17;
            }
          }
          FVar18.Data[(int)uVar31] = (FScriptContainerElement)0x1;
        }
      }
LAB_143367825:
      FRefCountVector::BaseIterator::goto_next(&local_2f8);
      pFVar17 = local_350;
    } while (local_2f8.Index != local_2e8._8_4_);
  }
  pFVar2 = &(param_1->InternalGeo).EdgeRefCounts;
  FRefCountVector::IndexIterator::IndexIterator
            (&local_3a8,pFVar2,0,
             (pFVar2->RefCounts).CurBlock * 0x200 +
             (param_1->InternalGeo).EdgeRefCounts.RefCounts.CurBlockUsed);
  iVar29 = (pFVar2->RefCounts).CurBlock * 0x200 +
           (param_1->InternalGeo).EdgeRefCounts.RefCounts.CurBlockUsed;
  FRefCountVector::IndexIterator::IndexIterator(&local_2d8,pFVar2,iVar29,iVar29);
  dVar11 = __real_3ff0000000000000;
  if (local_3a8._8_4_ != local_2d8._8_4_) {
    do {
      uVar48 = local_3a8._8_4_;
      local_3b0 = local_3a8._8_4_;
      uVar37 = *(ulonglong *)
                (*(longlong *)
                  ((param_1->InternalGeo).Edges.Blocks.AllocatorInstance.Data +
                  (ulonglong)((uint)local_3a8._8_4_ >> 9) * 8) +
                (ulonglong)(local_3a8._8_4_ & 0x1ff) * 0x10);
      uVar23 = (uint)uVar37;
      local_368 = (double *)uVar37;
      uVar31 = 0;
      if ((int)uVar23 < *local_348) {
        uVar31 = ~uVar23 >> 0x1f;
      }
      if ((uVar31 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        pFVar17 = (FPartialCutResult *)(*pcVar10)();
        return pFVar17;
      }
      uVar36 = (uint)(uVar37 >> 0x20);
      uVar32 = ~uVar36 >> 0x1f;
      dVar4 = *(double *)((pFVar17->SignDists).AllocatorInstance.Data + (longlong)(int)uVar23 * 8);
      uVar50 = (undefined4)((ulonglong)dVar4 >> 0x20);
      uVar31 = 0;
      if ((int)uVar36 < *local_348) {
        uVar31 = uVar32;
      }
      if ((uVar31 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        pFVar17 = (FPartialCutResult *)(*pcVar10)();
        return pFVar17;
      }
      uVar31 = local_368._4_4_;
      lVar34 = (longlong)(int)local_368._4_4_;
      dVar5 = *(double *)((pFVar17->SignDists).AllocatorInstance.Data + lVar34 * 8);
      uVar44 = (undefined4)((ulonglong)dVar5 >> 0x20);
      uVar38 = SUB84(dVar4,0);
      uVar41 = uVar50;
      uVar40 = SUB84(dVar5,0);
      if (dVar5 < dVar4) {
        uVar38 = SUB84(dVar5,0);
        uVar41 = uVar44;
        uVar40 = SUB84(dVar4,0);
        uVar44 = uVar50;
      }
      bVar13 = (double)CONCAT44(uVar41,uVar38) <= (double)CONCAT44(uVar47 ^ uVar25,uVar46 ^ uVar22)
               && (double)CONCAT44(uVar47 ^ uVar25,uVar46 ^ uVar22) !=
                  (double)CONCAT44(uVar41,uVar38);
      bVar14 = (double)CONCAT44(uVar44,uVar40) == param_3;
      bVar9 = (double)CONCAT44(uVar44,uVar40) < param_3;
      if (bVar13) {
        if (bVar9 || bVar14) goto LAB_1433679e3;
        pFVar19 = (pFVar17->CrossingEdgeIDs).AllocatorInstance.Data;
        if (((pFVar19 <= (FScriptContainerElement *)&local_3b0) &&
            ((FScriptContainerElement *)&local_3b0 <
             pFVar19 + (longlong)(pFVar17->CrossingEdgeIDs).ArrayMax * 4)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar17 = (FPartialCutResult *)(*pcVar10)();
          return pFVar17;
        }
        iVar29 = (pFVar17->CrossingEdgeIDs).ArrayNum;
        if (iVar29 == (pFVar17->CrossingEdgeIDs).ArrayMax) {
          iVar29 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&(pFVar17->CrossingEdgeIDs).AllocatorInstance,
                              &(pFVar17->CrossingEdgeIDs).ArrayMax);
        }
        pFVar19 = (pFVar17->CrossingEdgeIDs).AllocatorInstance.Data;
        (pFVar17->CrossingEdgeIDs).ArrayNum = iVar29 + 1;
        *(uint *)(pFVar19 + (longlong)iVar29 * 4) = local_3b0;
        pFVar19 = (param_1->InternalGeo).Vertices.Blocks.AllocatorInstance.Data;
        dVar4 = dVar4 / (dVar4 - dVar5);
        uVar30 = (ulonglong)(uVar31 & 0x1ff);
        lVar34 = *(longlong *)(pFVar19 + (ulonglong)(uVar31 >> 9) * 8);
        pdVar20 = (double *)(lVar34 + uVar30 * 0x18);
        local_120 = *pdVar20;
        dStack_118 = pdVar20[1];
        local_110 = *(double *)(lVar34 + 0x10 + uVar30 * 0x18);
        dVar5 = dVar11 - dVar4;
        lVar34 = *(longlong *)(pFVar19 + ((uVar37 & 0xffffffff) >> 9) * 8);
        pFVar19 = (pFVar17->CutVertices).AllocatorInstance.Data;
        pdVar20 = (double *)(lVar34 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
        local_108 = *pdVar20;
        dStack_100 = pdVar20[1];
        local_f8 = *(double *)(lVar34 + 0x10 + (ulonglong)(uVar23 & 0x1ff) * 0x18);
        local_310 = dVar4 * local_120 + dVar5 * local_108;
        local_300 = dVar4 * local_110 + dVar5 * local_f8;
        dStack_308 = dVar4 * dStack_118 + dVar5 * dStack_100;
        if (((pFVar19 <= (FScriptContainerElement *)&local_310) &&
            ((FScriptContainerElement *)&local_310 <
             pFVar19 + (longlong)(pFVar17->CutVertices).ArrayMax * 0x18)) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar17 = (FPartialCutResult *)(*pcVar10)();
          return pFVar17;
        }
        iVar29 = (pFVar17->CutVertices).ArrayNum;
        if (iVar29 == (pFVar17->CutVertices).ArrayMax) {
          iVar29 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x818,(ForAnyElementType *)pFVar17,&(pFVar17->CutVertices).ArrayMax);
        }
        (pFVar17->CutVertices).ArrayNum = iVar29 + 1;
        pFVar24 = (pFVar17->CutVertices).AllocatorInstance.Data;
        pFVar19 = pFVar24 + (longlong)iVar29 * 0x18;
        *(double *)pFVar19 = local_310;
        *(double *)(pFVar19 + 8) = dStack_308;
        *(double *)(pFVar24 + (longlong)iVar29 * 0x18 + 0x10) = local_300;
      }
      else if (!bVar9 && !bVar14) {
LAB_1433679e3:
        uVar37 = (ulonglong)bVar13 ^ 1;
        uVar31 = 0;
        if ((int)uVar23 < (&local_398)[uVar37].ArrayNum) {
          uVar31 = ~uVar23 >> 0x1f;
        }
        if ((uVar31 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar17 = (FPartialCutResult *)(*pcVar10)();
          return pFVar17;
        }
        (&local_398)[uVar37].AllocatorInstance.Data[(int)uVar23] = (FScriptContainerElement)0x1;
        uVar31 = 0;
        if ((int)local_368._4_4_ < (&local_398)[uVar37].ArrayNum) {
          uVar31 = uVar32;
        }
        if ((uVar31 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar17 = (FPartialCutResult *)(*pcVar10)();
          return pFVar17;
        }
        (&local_398)[uVar37].AllocatorInstance.Data[lVar34] = (FScriptContainerElement)0x1;
      }
      local_3a8._8_4_ = uVar48 + 1;
      if ((int)local_3a8._8_4_ < (int)local_3a8._12_4_) {
        do {
          pFVar17 = local_350;
          if ((*(short *)(*(longlong *)
                           (*(longlong *)(local_3a8._0_8_ + 8) +
                           (ulonglong)((uint)local_3a8._8_4_ >> 9) * 8) +
                         (ulonglong)(local_3a8._8_4_ & 0x1ff) * 2) != 0) &&
             (*(short *)(*(longlong *)
                          (*(longlong *)(local_3a8._0_8_ + 8) +
                          (ulonglong)((uint)local_3a8._8_4_ >> 9) * 8) +
                        (ulonglong)(local_3a8._8_4_ & 0x1ff) * 2) != -1)) break;
          local_3a8._8_4_ = local_3a8._8_4_ + 1;
        } while ((int)local_3a8._8_4_ < (int)local_3a8._12_4_);
      }
    } while (local_3a8._8_4_ != local_2d8._8_4_);
  }
  if (!param_4) {
    uVar31 = (param_1->InternalGeo).TriangleRefCounts.RefCounts.CurBlockUsed +
             (param_1->InternalGeo).TriangleRefCounts.RefCounts.CurBlock * 0x200;
    uVar37 = 0;
    if ((uVar31 == 0) ||
       (pFVar19 = (param_1->InternalGeo).TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.Data,
       uVar37 = 0, (ushort)(**(short **)pFVar19 - 1U) < 0xfffe)) {
LAB_143367b7c:
      uVar23 = (uint)uVar37;
    }
    else {
      uVar37 = 1;
      uVar23 = 1;
      if (1 < (int)uVar31) {
        do {
          uVar30 = (ulonglong)((uint)uVar37 & 0x1ff);
          lVar34 = *(longlong *)(pFVar19 + (uVar37 >> 9) * 8);
          pFVar17 = local_350;
          if ((*(short *)(lVar34 + uVar30 * 2) != 0) && (*(short *)(lVar34 + uVar30 * 2) != -1))
          break;
          uVar23 = (uint)uVar37 + 1;
          uVar37 = (ulonglong)uVar23;
        } while ((int)uVar23 < (int)uVar31);
        goto LAB_143367b7c;
      }
    }
    if (uVar23 != uVar31) {
      uVar46 = uVar46 ^ uVar22;
      uVar47 = uVar47 ^ uVar25;
LAB_143367b90:
      do {
        uVar36 = (uint)uVar37;
        lVar34 = *(longlong *)
                  ((param_1->InternalGeo).Triangles.Blocks.AllocatorInstance.Data +
                  (uVar37 >> 9) * 8);
        local_368 = *(double **)(lVar34 + (ulonglong)(uVar36 & 0x1ff) * 0xc);
        uVar22 = *(uint *)(lVar34 + 8 + (ulonglong)(uVar36 & 0x1ff) * 0xc);
        uVar25 = (uint)local_368;
        lVar34 = (longlong)(int)(uint)local_368;
        uVar23 = 0;
        if ((int)(uint)local_368 < (pFVar17->SignDists).ArrayNum) {
          uVar23 = ~(uint)local_368 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar17 = (FPartialCutResult *)(*pcVar10)();
          return pFVar17;
        }
        dVar11 = *(double *)((pFVar17->SignDists).AllocatorInstance.Data + lVar34 * 8);
        if (((double)CONCAT44(uVar47,uVar46) <= dVar11) && (dVar11 <= param_3)) {
          uVar23 = local_368._4_4_;
          lVar26 = (longlong)(int)local_368._4_4_;
          uVar32 = 0;
          if ((int)local_368._4_4_ < (pFVar17->SignDists).ArrayNum) {
            uVar32 = ~local_368._4_4_ >> 0x1f;
          }
          if ((uVar32 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            pFVar17 = (FPartialCutResult *)(*pcVar10)();
            return pFVar17;
          }
          dVar11 = *(double *)((pFVar17->SignDists).AllocatorInstance.Data + lVar26 * 8);
          if (((double)CONCAT44(uVar47,uVar46) <= dVar11) && (dVar11 <= param_3)) {
            uVar32 = 0;
            if ((int)uVar22 < (pFVar17->SignDists).ArrayNum) {
              uVar32 = ~uVar22 >> 0x1f;
            }
            if ((uVar32 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar10 = (code *)swi(3);
              pFVar17 = (FPartialCutResult *)(*pcVar10)();
              return pFVar17;
            }
            dVar11 = *(double *)
                      ((pFVar17->SignDists).AllocatorInstance.Data + (longlong)(int)uVar22 * 8);
            if (((double)CONCAT44(uVar47,uVar46) <= dVar11) && (dVar11 <= param_3)) {
              FDynamicMesh3::GetTriNormal
                        (&param_1->InternalGeo,(TVector<double> *)&local_1c8._s_0,uVar36);
              lVar33 = 0;
              if (0.0 < local_1c8._s_0.Y * (local_358->Normal).field0_0x0._s_0.Y +
                        local_1c8._s_0.X * (local_358->Normal).field0_0x0._s_0.X +
                        local_1c8._s_0.Z * (local_358->Normal).field0_0x0._s_0.Z) {
                lVar33 = 0x10;
              }
              uVar32 = 0;
              if ((int)uVar25 < *(int *)((longlong)&local_398.ArrayNum + lVar33)) {
                uVar32 = ~uVar25 >> 0x1f;
              }
              if ((uVar32 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar10 = (code *)swi(3);
                pFVar17 = (FPartialCutResult *)(*pcVar10)();
                return pFVar17;
              }
              *(undefined1 *)
               (lVar34 + *(longlong *)((longlong)&local_398.AllocatorInstance.Data + lVar33)) = 1;
              uVar25 = 0;
              if ((int)uVar23 < *(int *)((longlong)&local_398.ArrayNum + lVar33)) {
                uVar25 = ~uVar23 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar10 = (code *)swi(3);
                pFVar17 = (FPartialCutResult *)(*pcVar10)();
                return pFVar17;
              }
              *(undefined1 *)
               (lVar26 + *(longlong *)((longlong)&local_398.AllocatorInstance.Data + lVar33)) = 1;
              uVar25 = 0;
              if ((int)uVar22 < *(int *)((longlong)&local_398.ArrayNum + lVar33)) {
                uVar25 = ~uVar22 >> 0x1f;
              }
              if ((uVar25 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar10 = (code *)swi(3);
                pFVar17 = (FPartialCutResult *)(*pcVar10)();
                return pFVar17;
              }
              *(undefined1 *)
               ((longlong)(int)uVar22 +
               *(longlong *)((longlong)&local_398.AllocatorInstance.Data + lVar33)) = 1;
            }
          }
        }
        uVar36 = uVar36 + 1;
        uVar37 = (ulonglong)uVar36;
        if ((int)uVar36 < (int)uVar31) {
          do {
            uVar30 = (ulonglong)((uint)uVar37 & 0x1ff);
            lVar34 = *(longlong *)
                      ((param_1->InternalGeo).TriangleRefCounts.RefCounts.Blocks.AllocatorInstance.
                       Data + (uVar37 >> 9) * 8);
            if ((*(short *)(lVar34 + uVar30 * 2) != 0) && (*(short *)(lVar34 + uVar30 * 2) != -1))
            goto LAB_143367b90;
            uVar36 = (uint)uVar37 + 1;
            uVar37 = (ulonglong)uVar36;
          } while ((int)uVar36 < (int)uVar31);
        }
      } while (uVar36 != uVar31);
    }
  }
  uVar37 = 0;
  iVar29 = (param_1->HullTriangles).ArrayNum;
  if (iVar29 == 0) goto LAB_143368568;
  pFVar24 = (param_1->HullTriangles).AllocatorInstance.Data;
  pFVar19 = pFVar24 + (longlong)iVar29 * 0xc;
  uVar48 = 0;
  uVar50 = 0;
  uVar38 = 0;
  uVar41 = 0;
  while( true ) {
    if ((param_1->HullTriangles).ArrayNum != iVar29) {
      local_3b4 = 0;
      `TCheckedPointerIterator<UE::Geometry::FIndex3i_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_3b4);
    }
    uVar22 = 0;
    if (pFVar24 == pFVar19) break;
    uVar46 = *(uint *)pFVar24;
    uVar47 = 0;
    if ((int)uVar46 < local_378.ArrayNum) {
      uVar47 = ~uVar46 >> 0x1f;
    }
    if ((uVar47 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar10 = (code *)swi(3);
      pFVar17 = (FPartialCutResult *)(*pcVar10)();
      return pFVar17;
    }
    local_378.AllocatorInstance.Data[(int)uVar46] = (FScriptContainerElement)0x1;
    uVar46 = *(uint *)(pFVar24 + 4);
    uVar47 = uVar22;
    if ((int)uVar46 < local_378.ArrayNum) {
      uVar47 = ~uVar46 >> 0x1f;
    }
    if ((uVar47 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar10 = (code *)swi(3);
      pFVar17 = (FPartialCutResult *)(*pcVar10)();
      return pFVar17;
    }
    local_378.AllocatorInstance.Data[(int)uVar46] = (FScriptContainerElement)0x1;
    uVar46 = *(uint *)(pFVar24 + 8);
    uVar47 = uVar22;
    if ((int)uVar46 < local_378.ArrayNum) {
      uVar47 = ~uVar46 >> 0x1f;
    }
    if ((uVar47 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar10 = (code *)swi(3);
      pFVar17 = (FPartialCutResult *)(*pcVar10)();
      return pFVar17;
    }
    local_378.AllocatorInstance.Data[(int)uVar46] = (FScriptContainerElement)0x1;
    uVar46 = *(uint *)(pFVar24 + 8);
    uVar47 = uVar22;
    if ((int)uVar46 < (pFVar17->SignDists).ArrayNum) {
      uVar47 = ~uVar46 >> 0x1f;
    }
    if ((uVar47 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar10 = (code *)swi(3);
      pFVar17 = (FPartialCutResult *)(*pcVar10)();
      return pFVar17;
    }
    dVar11 = *(double *)((pFVar17->SignDists).AllocatorInstance.Data + (longlong)(int)uVar46 * 8);
    uVar40 = (undefined4)((ulonglong)dVar11 >> 0x20);
    uVar46 = *(uint *)(pFVar24 + 4);
    if ((int)uVar46 < (pFVar17->SignDists).ArrayNum) {
      uVar22 = ~uVar46 >> 0x1f;
    }
    if ((uVar22 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar10 = (code *)swi(3);
      pFVar17 = (FPartialCutResult *)(*pcVar10)();
      return pFVar17;
    }
    dVar4 = *(double *)((pFVar17->SignDists).AllocatorInstance.Data + (longlong)(int)uVar46 * 8);
    uVar44 = (undefined4)((ulonglong)dVar4 >> 0x20);
    uVar22 = *(uint *)pFVar24;
    uVar46 = 0;
    if ((int)uVar22 < (pFVar17->SignDists).ArrayNum) {
      uVar46 = ~uVar22 >> 0x1f;
    }
    if ((uVar46 == 0) &&
       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar14)) {
      pcVar10 = (code *)swi(3);
      pFVar17 = (FPartialCutResult *)(*pcVar10)();
      return pFVar17;
    }
    dVar5 = *(double *)((pFVar17->SignDists).AllocatorInstance.Data + (longlong)(int)uVar22 * 8);
    uVar42 = (undefined4)((ulonglong)dVar5 >> 0x20);
    uVar39 = SUB84(dVar5,0);
    uVar43 = uVar42;
    if (dVar4 <= dVar5) {
      uVar39 = SUB84(dVar4,0);
      uVar43 = uVar44;
    }
    uVar45 = SUB84(dVar5,0);
    if (dVar5 <= dVar4) {
      uVar45 = SUB84(dVar4,0);
      uVar42 = uVar44;
    }
    if (dVar11 <= (double)CONCAT44(uVar43,uVar39)) {
      uVar39 = SUB84(dVar11,0);
      uVar43 = uVar40;
    }
    if ((double)CONCAT44(uVar42,uVar45) <= dVar11) {
      uVar45 = SUB84(dVar11,0);
      uVar42 = uVar40;
    }
    uVar49 = uVar48;
    uVar51 = uVar50;
    uVar40 = uVar38;
    uVar44 = uVar41;
    if (((double)CONCAT44(uVar43,uVar39) < 0.0 || (double)CONCAT44(uVar43,uVar39) == 0.0) &&
       (0.0 <= (double)CONCAT44(uVar42,uVar45))) {
      uVar40 = uVar39;
      uVar44 = uVar43;
      if ((double)CONCAT44(uVar41,uVar38) <= (double)CONCAT44(uVar43,uVar39)) {
        uVar40 = uVar38;
        uVar44 = uVar41;
      }
      uVar49 = uVar45;
      uVar51 = uVar42;
      if ((double)CONCAT44(uVar42,uVar45) <= (double)CONCAT44(uVar50,uVar48)) {
        uVar49 = uVar48;
        uVar51 = uVar50;
      }
    }
    pFVar24 = pFVar24 + 0xc;
    uVar48 = uVar49;
    uVar50 = uVar51;
    uVar38 = uVar40;
    uVar41 = uVar44;
  }
  uVar46 = (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200 +
           (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed;
  uVar30 = uVar37;
  if ((uVar46 == 0) ||
     (pFVar19 = (param_1->InternalGeo).VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data,
     uVar30 = 0, (ushort)(**(short **)pFVar19 - 1U) < 0xfffe)) {
LAB_1433683aa:
    uVar47 = (uint)uVar30;
  }
  else {
    uVar30 = 1;
    uVar47 = 1;
    if (1 < (int)uVar46) {
      do {
        uVar21 = (ulonglong)((uint)uVar30 & 0x1ff);
        lVar34 = *(longlong *)(pFVar19 + (uVar30 >> 9) * 8);
        pFVar17 = local_350;
        if ((*(short *)(lVar34 + uVar21 * 2) != 0) && (*(short *)(lVar34 + uVar21 * 2) != -1))
        break;
        uVar47 = (uint)uVar30 + 1;
        uVar30 = (ulonglong)uVar47;
      } while ((int)uVar47 < (int)uVar46);
      goto LAB_1433683aa;
    }
  }
joined_r0x0001433683ad:
  if (uVar47 != uVar46) {
    while( true ) {
      uVar47 = (uint)uVar30;
      uVar31 = ~uVar47 >> 0x1f;
      uVar25 = 0;
      if ((int)uVar47 < local_378.ArrayNum) {
        uVar25 = uVar31;
      }
      if ((uVar25 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar14)) {
        pcVar10 = (code *)swi(3);
        pFVar17 = (FPartialCutResult *)(*pcVar10)();
        return pFVar17;
      }
      if (local_378.AllocatorInstance.Data[(int)uVar47] == (FScriptContainerElement)0x0) {
        uVar25 = uVar22;
        if ((int)uVar47 < (pFVar17->SignDists).ArrayNum) {
          uVar25 = uVar31;
        }
        if ((uVar25 == 0) &&
           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar14)) {
          pcVar10 = (code *)swi(3);
          pFVar17 = (FPartialCutResult *)(*pcVar10)();
          return pFVar17;
        }
        dVar11 = *(double *)
                  ((pFVar17->SignDists).AllocatorInstance.Data + (longlong)(int)uVar47 * 8);
        if ((dVar11 < (double)CONCAT44(uVar41,uVar38)) ||
           ((double)CONCAT44(uVar50,uVar48) <= dVar11 && dVar11 != (double)CONCAT44(uVar50,uVar48)))
        {
          uVar25 = uVar22;
          if ((int)uVar47 < local_398.ArrayNum) {
            uVar25 = uVar31;
          }
          if ((uVar25 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            pFVar17 = (FPartialCutResult *)(*pcVar10)();
            return pFVar17;
          }
          local_398.AllocatorInstance.Data[(int)uVar47] = (FScriptContainerElement)0x0;
          uVar25 = uVar22;
          if ((int)uVar47 < local_388.ArrayNum) {
            uVar25 = uVar31;
          }
          if ((uVar25 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            pFVar17 = (FPartialCutResult *)(*pcVar10)();
            return pFVar17;
          }
          local_388.AllocatorInstance.Data[(int)uVar47] = (FScriptContainerElement)0x0;
        }
      }
      uVar47 = uVar47 + 1;
      uVar30 = (ulonglong)uVar47;
      if ((int)uVar46 <= (int)uVar47) break;
      while( true ) {
        uVar21 = (ulonglong)((uint)uVar30 & 0x1ff);
        lVar34 = *(longlong *)
                  ((param_1->InternalGeo).VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar30 >> 9) * 8);
        if ((*(short *)(lVar34 + uVar21 * 2) != 0) && (*(short *)(lVar34 + uVar21 * 2) != -1))
        break;
        uVar47 = (uint)uVar30 + 1;
        uVar30 = (ulonglong)uVar47;
        if ((int)uVar46 <= (int)uVar47) goto joined_r0x0001433683ad;
      }
    }
    goto joined_r0x0001433683ad;
  }
LAB_143368568:
  dVar5 = _UNK_1508ffb58;
  dVar4 = ___xmm_ffefffffffffffffffefffffffffffff;
  dVar11 = __real_3fc5555555555555;
  pdVar20 = pFVar17->HullVolumes;
  pTVar27 = pFVar17->HullTriangles;
  local_3b8 = 0;
  do {
    local_278.bSaveTriangleNeighbors = false;
    local_2a8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::`anonymous_namespace'::FPartialCutResult::FPartialCutResult'::__l57::<lambda_2>,UE::Math::TVector<double>,int>
                ::Call;
    local_1a0 = &local_398;
    local_278.Line.Origin.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_278.Line.Origin.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_2b0 = &local_1b0;
    local_278.Line.Origin.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_2a0 = &local_2c8;
    local_2b8 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::`anonymous_namespace'::FPartialCutResult::FPartialCutResult'::__l57::<lambda_3>,bool,int>
                ::Call;
    local_278.Line.Direction.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z;
    local_278.SimplificationSettings.DegenerateEdgeTolerance = 0.0;
    local_278.SimplificationSettings.MaxHullVertices = -1;
    local_278.SimplificationSettings.SkipAtHullDistanceAbsolute = dVar4;
    local_278.SimplificationSettings.SkipAtHullDistanceAsFraction = dVar5;
    local_278.Progress = (FProgressCancel *)0x0;
    local_278.Line.Direction.field0_0x0._s_0.X =
         UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.X;
    local_278.Line.Direction.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Y;
    local_278.NumHullPoints = 0;
    local_278.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.Hull.ArrayNum = 0;
    local_278.Hull.ArrayMax = 0;
    local_278.HullNeighbors.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_278.HullNeighbors.ArrayNum = 0;
    local_278.HullNeighbors.ArrayMax = 0;
    iVar29 = (int)uVar37;
    local_368 = pdVar20;
    local_2c8 = pFVar17;
    local_2c0 = param_1;
    local_1b0 = pFVar17;
    local_1a8 = param_1;
    local_198 = iVar29;
    bVar14 = TConvexHull3<double>::Solve
                       (&local_278,
                        (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200 +
                        (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed +
                        (pFVar17->CutVertices).ArrayNum,
                        (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_2a8,
                        (TFunctionRef<bool___cdecl(int)> *)&local_2b8);
    if (!bVar14) {
      local_298 = &local_398;
      local_280 = &local_298;
      local_288 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::`anonymous_namespace'::FPartialCutResult::FPartialCutResult'::__l60::<lambda_4>,bool,int>
                  ::Call;
      local_290 = iVar29;
      bVar14 = ComputeThickenedHull
                         (param_5,&local_278,&param_1->InternalGeo,&pFVar17->CutVertices,
                          pFVar17->OffsetVertices + iVar29,
                          (TFunctionRef<bool___cdecl(int)> *)&local_288);
      if (!bVar14) {
        (pFVar17->CutVertices).ArrayNum = 0;
        if ((pFVar17->CutVertices).ArrayMax != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x18,8,0,(ForAnyElementType *)pFVar17,0,&(pFVar17->CutVertices).ArrayMax);
        }
        (pFVar17->CrossingEdgeIDs).ArrayNum = 0;
        if ((pFVar17->CrossingEdgeIDs).ArrayMax != 0) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&(pFVar17->CrossingEdgeIDs).AllocatorInstance,0,
                     &(pFVar17->CrossingEdgeIDs).ArrayMax);
        }
        pFVar17->bSuccess = false;
        if (local_278.HullNeighbors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.HullNeighbors.AllocatorInstance.Data);
        }
        if (local_278.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_278.Hull.AllocatorInstance.Data);
        }
        pTVar28 = &local_378;
        lVar34 = 2;
        do {
          pFVar19 = pTVar28[-1].AllocatorInstance.Data;
          pTVar28 = pTVar28 + -1;
          lVar34 = lVar34 + -1;
          if (pFVar19 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar19);
          }
        } while (lVar34 != 0);
        goto LAB_143368d3a;
      }
    }
    if (pTVar27 != &local_278.Hull) {
      pFVar19 = (pTVar27->AllocatorInstance).Data;
      if (pFVar19 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar19);
      }
      (pTVar27->AllocatorInstance).Data = local_278.Hull.AllocatorInstance.Data;
      pTVar27->ArrayNum = local_278.Hull.ArrayNum;
      pTVar27->ArrayMax = local_278.Hull.ArrayMax;
      local_278.Hull.ArrayNum = 0;
      local_278.Hull.ArrayMax = 0;
      local_278.Hull.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    *pdVar20 = 0.0;
    local_3ac = pTVar27->ArrayNum;
    uVar37 = (ulonglong)(int)local_3ac;
    pTVar35 = (TPlane3<double> *)(pTVar27->AllocatorInstance).Data;
    iVar16 = (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200 +
             (param_1->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed;
    iVar29 = (pFVar17->CutVertices).ArrayNum + iVar16;
    local_358 = (TPlane3<double> *)((longlong)&(pTVar35->Normal).field0_0x0 + uVar37 * 0xc);
    while( true ) {
      if (pTVar27->ArrayNum != (int)uVar37) {
        local_3b3[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_3b3);
      }
      if (pTVar35 == local_358) break;
      uVar22 = *(uint *)&(pTVar35->Normal).field0_0x0;
      if ((int)uVar22 < iVar16) {
        lVar34 = *(longlong *)
                  ((param_1->InternalGeo).Vertices.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar22 >> 9) * 8);
        pdVar3 = (double *)(lVar34 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
        pdVar20 = &local_340;
        local_340 = *pdVar3;
        dStack_338 = pdVar3[1];
        local_330 = *(undefined8 *)(lVar34 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
      }
      else {
        if ((int)uVar22 < iVar29) {
          uVar22 = uVar22 - iVar16;
          uVar46 = 0;
          if ((int)uVar22 < (pFVar17->CutVertices).ArrayNum) {
            uVar46 = ~uVar22 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            pFVar17 = (FPartialCutResult *)(*pcVar10)();
            return pFVar17;
          }
          pFVar19 = (pFVar17->CutVertices).AllocatorInstance.Data;
        }
        else {
          uVar22 = uVar22 - iVar29;
          uVar46 = 0;
          if ((int)uVar22 <
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(pTVar27 + -4))->
              ArrayNum) {
            uVar46 = ~uVar22 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            pFVar17 = (FPartialCutResult *)(*pcVar10)();
            return pFVar17;
          }
          pFVar19 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                     (pTVar27 + -4))->AllocatorInstance).Data;
        }
        pdVar20 = &local_328;
        local_328 = *(double *)(pFVar19 + (longlong)(int)uVar22 * 0x18);
        uStack_320 = *(undefined8 *)(pFVar19 + (longlong)(int)uVar22 * 0x18 + 8);
        local_318 = *(undefined8 *)(pFVar19 + (longlong)(int)uVar22 * 0x18 + 0x10);
      }
      uVar22 = *(uint *)((longlong)&(pTVar35->Normal).field0_0x0 + 4);
      local_188 = *pdVar20;
      dStack_180 = pdVar20[1];
      local_178 = pdVar20[2];
      if ((int)uVar22 < iVar16) {
        lVar34 = *(longlong *)
                  ((param_1->InternalGeo).Vertices.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar22 >> 9) * 8);
        pdVar3 = (double *)(lVar34 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
        pdVar20 = &local_340;
        local_340 = *pdVar3;
        dStack_338 = pdVar3[1];
        local_330 = *(undefined8 *)(lVar34 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
      }
      else {
        if ((int)uVar22 < iVar29) {
          uVar22 = uVar22 - iVar16;
          uVar46 = 0;
          if ((int)uVar22 < (pFVar17->CutVertices).ArrayNum) {
            uVar46 = ~uVar22 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            pFVar17 = (FPartialCutResult *)(*pcVar10)();
            return pFVar17;
          }
          pFVar19 = (pFVar17->CutVertices).AllocatorInstance.Data;
        }
        else {
          uVar22 = uVar22 - iVar29;
          uVar46 = 0;
          if ((int)uVar22 <
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(pTVar27 + -4))->
              ArrayNum) {
            uVar46 = ~uVar22 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            pFVar17 = (FPartialCutResult *)(*pcVar10)();
            return pFVar17;
          }
          pFVar19 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                     (pTVar27 + -4))->AllocatorInstance).Data;
        }
        pdVar20 = &local_328;
        local_328 = *(double *)(pFVar19 + (longlong)(int)uVar22 * 0x18);
        uStack_320 = *(undefined8 *)(pFVar19 + (longlong)(int)uVar22 * 0x18 + 8);
        local_318 = *(undefined8 *)(pFVar19 + (longlong)(int)uVar22 * 0x18 + 0x10);
      }
      uVar22 = *(uint *)((longlong)&(pTVar35->Normal).field0_0x0 + 8);
      local_160 = pdVar20[2];
      local_170 = *pdVar20;
      dStack_168 = pdVar20[1];
      if ((int)uVar22 < iVar16) {
        lVar34 = *(longlong *)
                  ((param_1->InternalGeo).Vertices.Blocks.AllocatorInstance.Data +
                  (ulonglong)(uVar22 >> 9) * 8);
        pdVar3 = (double *)(lVar34 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
        pdVar20 = &local_340;
        local_340 = *pdVar3;
        dStack_338 = pdVar3[1];
        local_330 = *(undefined8 *)(lVar34 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
      }
      else {
        if ((int)uVar22 < iVar29) {
          uVar22 = uVar22 - iVar16;
          uVar46 = 0;
          if ((int)uVar22 < (pFVar17->CutVertices).ArrayNum) {
            uVar46 = ~uVar22 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            pFVar17 = (FPartialCutResult *)(*pcVar10)();
            return pFVar17;
          }
          pFVar19 = (pFVar17->CutVertices).AllocatorInstance.Data;
        }
        else {
          uVar22 = uVar22 - iVar29;
          uVar46 = 0;
          if ((int)uVar22 <
              ((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)(pTVar27 + -4))->
              ArrayNum) {
            uVar46 = ~uVar22 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar14)) {
            pcVar10 = (code *)swi(3);
            pFVar17 = (FPartialCutResult *)(*pcVar10)();
            return pFVar17;
          }
          pFVar19 = (((TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *)
                     (pTVar27 + -4))->AllocatorInstance).Data;
        }
        pdVar20 = &local_328;
        local_328 = *(double *)(pFVar19 + (longlong)(int)uVar22 * 0x18);
        uStack_320 = *(undefined8 *)(pFVar19 + (longlong)(int)uVar22 * 0x18 + 8);
        local_318 = *(undefined8 *)(pFVar19 + (longlong)(int)uVar22 * 0x18 + 0x10);
      }
      pTVar35 = (TPlane3<double> *)((longlong)&(pTVar35->Normal).field0_0x0 + 0xc);
      dVar6 = (param_1->GeoCenter).field0_0x0._s_0.Y;
      dVar7 = (param_1->GeoCenter).field0_0x0._s_0.X;
      dVar8 = (param_1->GeoCenter).field0_0x0._s_0.Z;
      uVar37 = (ulonglong)local_3ac;
      local_148 = pdVar20[2];
      dVar12 = pdVar20[2] - dVar8;
      *local_368 = ((local_170 - dVar7) * dVar12 - (*pdVar20 - dVar7) * (local_160 - dVar8)) *
                   (dStack_180 - dVar6) +
                   ((pdVar20[1] - dVar6) * (local_160 - dVar8) - dVar12 * (dStack_168 - dVar6)) *
                   (local_188 - dVar7) +
                   ((*pdVar20 - dVar7) * (dStack_168 - dVar6) -
                   (local_170 - dVar7) * (pdVar20[1] - dVar6)) * (local_178 - dVar8) + *local_368;
      pdVar20 = local_368;
    }
    *pdVar20 = *pdVar20 * dVar11;
    if (local_278.HullNeighbors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.HullNeighbors.AllocatorInstance.Data);
    }
    if (local_278.Hull.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_278.Hull.AllocatorInstance.Data);
    }
    pdVar20 = pdVar20 + 1;
    local_3b8 = local_3b8 + 1;
    uVar37 = (ulonglong)local_3b8;
    local_368 = pdVar20;
    pTVar27 = pTVar27 + 1;
  } while ((int)local_3b8 < 2);
  pFVar17->bSuccess = true;
  pTVar28 = &local_378;
  lVar34 = 2;
  do {
    pFVar19 = pTVar28[-1].AllocatorInstance.Data;
    pTVar28 = pTVar28 + -1;
    lVar34 = lVar34 + -1;
    if (pFVar19 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar19);
    }
  } while (lVar34 != 0);
LAB_143368d3a:
  if (local_378.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_378.AllocatorInstance.Data);
  }
  return pFVar17;
}

// ~FPartialCutResult @ 14336a670

void __thiscall
UE::Geometry::`anonymous_namespace'::FPartialCutResult::~FPartialCutResult(void *this)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar2 = 2;
  lVar3 = (longlong)this + 0x70;
  lVar4 = 2;
  do {
    puVar1 = (undefined8 *)(lVar3 + -0x10);
    lVar3 = lVar3 + -0x10;
    lVar4 = lVar4 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar4 != 0);
  if (*(void **)((longlong)this + 0x40) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x40));
  }
  lVar3 = (longlong)this + 0x30;
  if (*(void **)((longlong)this + 0x30) != (void *)0x0) {
    FMemory::Free(*(void **)((longlong)this + 0x30));
  }
  do {
    puVar1 = (undefined8 *)(lVar3 + -0x10);
    lVar3 = lVar3 + -0x10;
    lVar2 = lVar2 + -1;
    if ((void *)*puVar1 != (void *)0x0) {
      FMemory::Free((void *)*puVar1);
    }
  } while (lVar2 != 0);
  if (*(void **)this != (void *)0x0) {
    FMemory::Free(*(void **)this);
  }
  return;
}

// operator() @ 14336edf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
`UE::Geometry::`anonymous_namespace'::FPartialCutResult::ApplyToGeo'::__l2::<lambda_1>::operator()
          (void *this)

{
  double *pdVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  FDelaunay2Connectivity *pFVar5;
  code *pcVar6;
  FDelaunay2Connectivity *pFVar7;
  FDelaunay2Connectivity *pFVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  bool bVar18;
  undefined1 uVar19;
  char cVar20;
  bool bVar21;
  int iVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  FScriptContainerElement *pFVar25;
  TPimplPtr<UE::Geometry::FDelaunay2Connectivity,0> TVar26;
  FFunctionStorage *pFVar27;
  undefined ***pppuVar28;
  longlong *plVar29;
  FScriptContainerElement *pFVar30;
  int iVar31;
  longlong lVar32;
  longlong lVar33;
  uint *puVar34;
  int iVar35;
  ulonglong uVar36;
  FScriptContainerElement *pFVar37;
  ulonglong uVar38;
  longlong lVar39;
  ForAnyElementType FVar40;
  ForAnyElementType FVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  undefined1 auStackY_498 [32];
  undefined1 local_444;
  undefined1 local_443 [3];
  ForAnyElementType local_440;
  uint local_438;
  uint local_434;
  ForAnyElementType local_430;
  undefined8 local_428;
  ForAnyElementType local_420;
  undefined8 local_418;
  uint local_410;
  uint local_40c;
  uint local_408 [2];
  ForAnyElementType local_400;
  undefined8 local_3f8;
  FIndex2i_u_0 local_3f0;
  undefined1 local_3e8 [24];
  bool local_3d0;
  EResult local_3cc;
  longlong local_3c8;
  int local_3c0 [2];
  uint local_3b8;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_3b0;
  TVector<double>_u_0 local_3a0;
  uint local_388 [2];
  double local_380;
  double dStack_378;
  FIndex3i_u_0 local_370;
  FScriptContainerElement *local_360;
  longlong local_358;
  FRefCountVector *local_350;
  int local_348;
  int local_344;
  FRefCountVector *local_340;
  int local_338;
  int local_334;
  undefined4 local_330;
  undefined1 local_32c [12];
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_320;
  double local_300;
  double dStack_2f8;
  double local_2f0;
  FIndex2i_u_0 *local_2e8;
  int iStack_2e0;
  undefined4 uStack_2dc;
  uint *local_2d8;
  uint *local_2d0;
  undefined8 local_2c8;
  int iStack_2c0;
  undefined4 uStack_2bc;
  FScriptContainerElement *local_2b8;
  int iStack_2b0;
  undefined4 uStack_2ac;
  TVector<double>_u_0 local_2a8;
  code *local_288;
  undefined **local_278;
  longlong local_270;
  undefined ***local_260;
  code *local_258 [2];
  FFunctionStorage local_248;
  IndexIterator local_228;
  IndexIterator local_218;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_208;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_1f8;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_1e8;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_1d8;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  uint local_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  uint uStack_1a4;
  undefined1 local_198 [40];
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  FScriptContainerElement local_160 [8];
  ForAnyElementType local_158;
  uint local_150;
  undefined1 local_148 [40];
  longlong *local_120;
  FRefCountVector *local_118;
  undefined1 local_108 [48];
  longlong local_d8 [3];
  longlong *local_c0;
  undefined1 local_b8 [80];
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_498;
  bVar21 = true;
  UE::Geometry::VectorUtil::MakePerpVectors<double>
            (*(TVector<double> **)((longlong)this + 8),(TVector<double> *)&local_3a0._s_0,
             (TVector<double> *)&local_2a8._s_0);
  uVar14 = _UNK_15066df7c;
  uVar13 = _UNK_15066df78;
  uVar12 = __xmm_80000000000000008000000000000000._4_4_;
  uVar11 = (uint)__xmm_80000000000000008000000000000000;
  uVar10 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar9 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  local_440.Data = (FScriptContainerElement *)0x0;
  local_434 = 0;
  local_3c8 = 0;
  do {
    lVar33 = local_3c8;
    uVar36 = 0;
    local_438 = 0;
    local_3a0._0_4_ = local_3a0._0_4_ ^ uVar11;
    local_3a0._4_4_ = local_3a0._4_4_ ^ uVar12;
    local_3a0._8_4_ = local_3a0._8_4_ ^ uVar13;
    local_3a0._12_4_ = local_3a0._12_4_ ^ uVar14;
    local_3a0._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)local_3a0._16_8_ >> 0x20) ^ uVar12,
                          SUB84(local_3a0._s_0.Z,0) ^ uVar11);
    if (((int)local_434 < 0) && (local_434 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,0,&local_440,0,(int *)&local_434);
    }
    local_260 = (undefined ***)0x0;
    local_278 = &
                ___7__TFunction_OwnedObject_V<lambda_1>__1__BoundaryEdgeIndicesItr_FDynamicMesh3_Geometry_UE__QEBA_AVFilteredEnumerable_FRefCountVector_45_XZ__0A__0A__Function_Private_Core_UE__6B_
    ;
    local_288 = UE::Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::BoundaryEdgeIndicesItr'::__l2::<lambda_1>,bool,int>
                ::Call;
    lVar32 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + lVar33 * 8);
    local_258[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FDynamicMesh3::BoundaryEdgeIndicesItr'::__l2::<lambda_1>,bool,int>
                   ::Call;
    local_248.HeapAllocation = (FFunctionStorage *)0x0;
    local_270 = lVar32;
    UE::Core::Private::Function::
    TFunction_OwnedObject<`UE::Geometry::FDynamicMesh3::BoundaryEdgeIndicesItr'::__l2::<lambda_1>,0,0>
    ::CloneToEmptyStorage(&local_278,&local_248);
    local_118 = (FRefCountVector *)(lVar32 + 0x1d0);
    local_148._0_8_ = 0;
    local_120 = (longlong *)0x0;
    TFunction<bool___cdecl(int)>::operator=
              ((TFunction<bool___cdecl(int)> *)local_148,(TFunction<bool___cdecl(int)> *)local_258);
    if (local_258[0] != (code *)0x0) {
      pFVar27 = &local_248;
      if (local_248.HeapAllocation != (FFunctionStorage *)0x0) {
        pFVar27 = local_248.HeapAllocation;
      }
      (**(code **)(*(longlong *)pFVar27->InlineAllocation + 0x10))();
    }
    if (local_288 != (code *)0x0) {
      pppuVar28 = &local_278;
      if (local_260 != (undefined ***)0x0) {
        pppuVar28 = local_260;
      }
      (*(code *)(*pppuVar28)[2])();
    }
    iVar35 = (local_118->RefCounts).CurBlockUsed + (local_118->RefCounts).CurBlock * 0x200;
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator(&local_228,local_118,iVar35,iVar35);
    UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
              (&local_218,local_118,0,
               (local_118->RefCounts).CurBlock * 0x200 + (local_118->RefCounts).CurBlockUsed);
    UE::Geometry::FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>
              ((FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_108,
               &local_218,&local_228,(TFunction<bool___cdecl(int)> *)local_148);
    local_350 = local_118;
    local_340 = local_118;
    local_348 = (local_118->RefCounts).CurBlockUsed + (local_118->RefCounts).CurBlock * 0x200;
    local_344 = local_348;
    local_338 = local_348;
    local_334 = local_348;
    UE::Geometry::FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>::
    FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator>
              ((FilteredIterator<int,UE::Geometry::FRefCountVector::IndexIterator> *)local_b8,
               (IndexIterator *)&local_340,(IndexIterator *)&local_350,
               (TFunction<bool___cdecl(int)> *)local_148);
    if ((int)local_108._8_8_ != local_b8._8_4_) {
      do {
        lVar32 = *(longlong *)this;
        local_410 = (uint)local_108._8_8_;
        iVar35 = *(int *)(lVar32 + 0x48);
        puVar34 = (uint *)(*(longlong *)
                            (*(longlong *)
                              (*(longlong *)(*(longlong *)((longlong)this + 0x10) + lVar33 * 8) +
                              0x1c0) + ((local_108._8_8_ & 0xffffffff) >> 9) * 8) +
                          (ulonglong)(local_410 & 0x1ff) * 0x10);
        uVar42 = *puVar34;
        uVar44 = puVar34[1];
        if ((int)uVar42 < iVar35) {
          uVar43 = 0;
          if ((int)uVar42 < iVar35) {
            uVar43 = ~uVar42 >> 0x1f;
          }
          if ((uVar43 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            uVar19 = (*pcVar6)();
            return (bool)uVar19;
          }
          uVar2 = *(undefined8 *)(*(longlong *)(lVar32 + 0x40) + (longlong)(int)uVar42 * 8);
          uVar42 = (uint)uVar2 & uVar9;
          uVar43 = (uint)((ulonglong)uVar2 >> 0x20) & uVar10;
          if ((double)CONCAT44(uVar43,uVar42) < **(double **)((longlong)this + 0x18) ||
              (double)CONCAT44(uVar43,uVar42) == **(double **)((longlong)this + 0x18))
          goto LAB_14336f0f0;
        }
        else {
LAB_14336f0f0:
          lVar32 = *(longlong *)this;
          iVar35 = *(int *)(lVar32 + 0x48);
          if ((int)uVar44 < iVar35) {
            uVar42 = 0;
            if ((int)uVar44 < iVar35) {
              uVar42 = ~uVar44 >> 0x1f;
            }
            if ((uVar42 == 0) &&
               (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar18)) {
              pcVar6 = (code *)swi(3);
              uVar19 = (*pcVar6)();
              return (bool)uVar19;
            }
            uVar2 = *(undefined8 *)(*(longlong *)(lVar32 + 0x40) + (longlong)(int)uVar44 * 8);
            uVar42 = (uint)uVar2 & uVar9;
            uVar44 = (uint)((ulonglong)uVar2 >> 0x20) & uVar10;
            if (**(double **)((longlong)this + 0x18) <= (double)CONCAT44(uVar44,uVar42) &&
                (double)CONCAT44(uVar44,uVar42) != **(double **)((longlong)this + 0x18))
            goto LAB_14336f210;
          }
          if (((local_440.Data <= (FScriptContainerElement *)&local_410) &&
              ((FScriptContainerElement *)&local_410 < local_440.Data + (longlong)(int)local_434 * 4
              )) && (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar18)) {
            pcVar6 = (code *)swi(3);
            uVar19 = (*pcVar6)();
            return (bool)uVar19;
          }
          if (local_438 == local_434) {
            local_438 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_440,(int *)&local_434);
          }
          *(uint *)(local_440.Data + (longlong)(int)local_438 * 4) = local_410;
          local_438 = local_438 + 1;
        }
LAB_14336f210:
        do {
          UE::Geometry::FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_108);
          if ((int)local_108._8_8_ == local_108._24_4_) break;
          local_3c0[0] = (int)local_108._8_8_;
          UE::Core::Private::Function::CheckCallable((void *)local_108._32_8_);
          uVar2 = local_108._32_8_;
          plVar29 = local_d8;
          if (local_c0 != (longlong *)0x0) {
            plVar29 = local_c0;
          }
          uVar23 = (**(code **)(*plVar29 + 8))();
          cVar20 = (*(code *)uVar2)(uVar23,local_3c0);
        } while (cVar20 == '\0');
      } while ((int)local_108._8_8_ != local_b8._8_4_);
    }
    if (local_b8._32_8_ != 0) {
      plVar29 = (longlong *)(local_b8 + 0x30);
      if ((longlong *)local_b8._72_8_ != (longlong *)0x0) {
        plVar29 = (longlong *)local_b8._72_8_;
      }
      (**(code **)(*plVar29 + 0x10))();
    }
    if ((code *)local_108._32_8_ != (code *)0x0) {
      plVar29 = local_d8;
      if (local_c0 != (longlong *)0x0) {
        plVar29 = local_c0;
      }
      (**(code **)(*plVar29 + 0x10))();
    }
    if (local_148._0_8_ != 0) {
      plVar29 = (longlong *)(local_148 + 0x10);
      if (local_120 != (longlong *)0x0) {
        plVar29 = local_120;
      }
      (**(code **)(*plVar29 + 0x10))();
    }
    if (local_438 != 0) {
      if (((int)local_438 < 1) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        uVar19 = (*pcVar6)();
        return (bool)uVar19;
      }
      uVar44 = local_438;
      uVar42 = local_438 * 2;
      lVar32 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + lVar33 * 8);
      puVar34 = (uint *)(*(longlong *)
                          (*(longlong *)(lVar32 + 0x1c0) +
                          (ulonglong)(*(uint *)local_440.Data >> 9) * 8) +
                        (ulonglong)(*(uint *)local_440.Data & 0x1ff) * 0x10);
      local_1b0 = *puVar34;
      uStack_1ac = puVar34[1];
      uStack_1a8 = puVar34[2];
      uStack_1a4 = puVar34[3];
      lVar32 = *(longlong *)(*(longlong *)(lVar32 + 0x10) + (ulonglong)(local_1b0 >> 9) * 8);
      local_2f0 = *(double *)(lVar32 + 0x10 + (ulonglong)(local_1b0 & 0x1ff) * 0x18);
      pdVar1 = (double *)(lVar32 + (ulonglong)(local_1b0 & 0x1ff) * 0x18);
      local_300 = *pdVar1;
      dStack_2f8 = pdVar1[1];
      local_400.Data = (FScriptContainerElement *)0x0;
      local_3f8 = 0;
      if ((int)uVar42 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar42);
      }
      if ((int)uVar42 < 1) {
        local_430.Data = (FScriptContainerElement *)0x0;
        local_428 = 0;
      }
      else {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,8,uVar42,&local_400,0,(int *)((longlong)&local_3f8 + 4));
        local_430.Data = (FScriptContainerElement *)0x0;
        local_428 = 0;
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (4,4,uVar42,&local_430,0,(int *)((longlong)&local_428 + 4));
      }
      local_198._0_8_ = (FScriptContainerElement *)0x0;
      local_198._8_8_ = 0;
      local_198._32_8_ = (ForElementType<unsigned_int>)0x0;
      local_170 = 0;
      local_16c = 0x80;
      local_168 = -1;
      local_164 = 0;
      local_158.Data = (FScriptContainerElement *)0x0;
      local_150 = 0;
      if (uVar42 != 0) {
        TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<16,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)local_198,uVar42);
        if (uVar42 < 4) {
          uVar42 = 1;
        }
        else {
          uVar38 = (ulonglong)((uVar44 & 0x7fffffff) + 7) * 2 + 1;
          lVar32 = 0x3f;
          if (uVar38 != 0) {
            for (; uVar38 >> lVar32 == 0; lVar32 = lVar32 + -1) {
            }
          }
          local_330 = (undefined4)lVar32;
          uVar42 = 1 << ((byte)lVar32 & 0x1f);
        }
        if ((local_150 == 0) || ((int)local_150 < (int)uVar42)) {
          local_150 = uVar42;
          if (local_158.Data != (FScriptContainerElement *)0x0) {
            TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_158,0,0,4);
          }
          if (uVar42 != 0) {
            uVar44 = uVar42;
            if (uVar42 < 2) {
              if (local_158.Data != (FScriptContainerElement *)0x0) {
                uVar44 = 0;
                goto LAB_14336f4fe;
              }
            }
            else {
LAB_14336f4fe:
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        (&local_158,0,uVar44,4);
            }
            if (0 < (int)uVar42) {
              uVar38 = (ulonglong)uVar42;
              do {
                FVar41.Data = local_160;
                if (local_158.Data != (FScriptContainerElement *)0x0) {
                  FVar41.Data = local_158.Data;
                }
                uVar24 = uVar36 & (longlong)(int)uVar42 - 1U;
                uVar36 = uVar36 + 1;
                *(undefined4 *)(FVar41.Data + uVar24 * 4) = 0xffffffff;
                uVar38 = uVar38 - 1;
              } while (uVar38 != 0);
            }
          }
          if ((local_150 != 0) &&
             (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::TConstIterator::TConstIterator
                        ((TConstIterator *)(local_32c + 4),
                         (TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_198), local_320.CurrentBitIndex < (local_320.Array)->NumBits)) {
            do {
              lVar39 = (longlong)local_320.CurrentBitIndex * 0x10;
              lVar32 = *(longlong *)local_32c._4_8_;
              uVar42 = local_150 - 1 & *(uint *)(lVar39 + lVar32);
              *(uint *)(lVar39 + 0xc + lVar32) = uVar42;
              FVar41.Data = local_160;
              if (local_158.Data != (FScriptContainerElement *)0x0) {
                FVar41.Data = local_158.Data;
              }
              uVar36 = (longlong)(int)local_150 - 1U & (longlong)(int)uVar42;
              *(undefined4 *)(lVar39 + 8 + lVar32) = *(undefined4 *)(FVar41.Data + uVar36 * 4);
              *(int *)(FVar41.Data + uVar36 * 4) = local_320.CurrentBitIndex;
              local_320.UnvisitedBitMask = local_320.UnvisitedBitMask & ~local_320._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_320);
            } while (local_320.CurrentBitIndex < (local_320.Array)->NumBits);
          }
        }
      }
      local_420.Data = (FScriptContainerElement *)0x0;
      local_418 = 0;
      if ((int)local_438 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)local_438);
      }
      if (0 < (int)local_438) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,local_438,&local_420,0,(int *)((longlong)&local_418 + 4));
      }
      uVar36 = (ulonglong)(int)local_438;
      pFVar30 = local_440.Data + uVar36 * 4;
      FVar41.Data = local_440.Data;
      local_3b8 = local_438;
      local_360 = pFVar30;
      while( true ) {
        if (local_438 != (uint)uVar36) {
          local_444 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_444)
          ;
        }
        if (FVar41.Data == pFVar30) break;
        UE::Geometry::FDynamicMesh3::GetOrientedBoundaryEdgeV
                  (*(FDynamicMesh3 **)(*(longlong *)((longlong)this + 0x10) + lVar33 * 8),
                   (int)local_388);
        lVar33 = local_3c8;
        puVar34 = local_388;
        lVar32 = 0;
        local_3f0 = (FIndex2i_u_0)0xffffffffffffffff;
        lVar39 = 2;
        pFVar37 = (FScriptContainerElement *)local_198._0_8_;
        FVar40.Data = local_158.Data;
        do {
          local_40c = *(uint *)((longlong)local_388 + lVar32);
          if (local_198._8_4_ != local_164) {
            pFVar30 = local_160;
            if (FVar40.Data != (FScriptContainerElement *)0x0) {
              pFVar30 = FVar40.Data;
            }
            uVar42 = *(uint *)(pFVar30 + (ulonglong)(local_150 - 1 & local_40c) * 4);
            while (uVar42 != 0xffffffff) {
              pFVar30 = pFVar37 + (longlong)(int)uVar42 * 0x10;
              if (*(uint *)pFVar30 == local_40c) {
                pFVar25 = pFVar30 + 4;
                if (pFVar30 == (FScriptContainerElement *)0x0) {
                  pFVar25 = (FScriptContainerElement *)0x0;
                }
                if (pFVar25 != (FScriptContainerElement *)0x0) {
                  local_408[0] = *(uint *)pFVar25;
                  goto LAB_14336f988;
                }
                break;
              }
              uVar42 = *(uint *)(pFVar30 + 8);
            }
          }
          lVar4 = *(longlong *)
                   (*(longlong *)
                     (*(longlong *)(*(longlong *)((longlong)this + 0x10) + lVar33 * 8) + 0x10) +
                   (ulonglong)(local_40c >> 9) * 8);
          pdVar1 = (double *)(lVar4 + (ulonglong)(local_40c & 0x1ff) * 0x18);
          local_1c8 = *pdVar1;
          dStack_1c0 = pdVar1[1];
          local_1b8 = *(double *)(lVar4 + 0x10 + (ulonglong)(local_40c & 0x1ff) * 0x18);
          dStack_378 = (local_1c8 - local_300) * local_2a8._s_0.X +
                       (dStack_1c0 - dStack_2f8) * local_2a8._s_0.Y +
                       (local_1b8 - local_2f0) * local_2a8._s_0.Z;
          local_380 = (local_1c8 - local_300) * (double)CONCAT44(local_3a0._4_4_,local_3a0._0_4_) +
                      (dStack_1c0 - dStack_2f8) * (double)CONCAT44(local_3a0._12_4_,local_3a0._8_4_)
                      + (local_1b8 - local_2f0) * local_3a0._s_0.Z;
          if (((local_400.Data <= (FScriptContainerElement *)&local_380) &&
              ((FScriptContainerElement *)&local_380 <
               local_400.Data + (longlong)(int)local_3f8._4_4_ * 0x10)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar6 = (code *)swi(3);
            uVar19 = (*pcVar6)();
            return (bool)uVar19;
          }
          uVar42 = (uint)local_3f8;
          if ((uint)local_3f8 == local_3f8._4_4_) {
            uVar42 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&local_400,(int *)((longlong)&local_3f8 + 4));
          }
          local_3f8 = CONCAT44(local_3f8._4_4_,uVar42 + 1);
          *(double *)(local_400.Data + (longlong)(int)uVar42 * 0x10) = local_380;
          *(double *)(local_400.Data + (longlong)(int)uVar42 * 0x10 + 8) = dStack_378;
          local_408[0] = uVar42;
          if (((local_430.Data <= (FScriptContainerElement *)&local_40c) &&
              ((FScriptContainerElement *)&local_40c <
               local_430.Data + (longlong)(int)local_428._4_4_ * 4)) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar18)) {
            pcVar6 = (code *)swi(3);
            uVar19 = (*pcVar6)();
            return (bool)uVar19;
          }
          uVar42 = (uint)local_428;
          if ((uint)local_428 == local_428._4_4_) {
            uVar42 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_430,(int *)((longlong)&local_428 + 4));
          }
          local_428 = CONCAT44(local_428._4_4_,uVar42 + 1);
          *(uint *)(local_430.Data + (longlong)(int)uVar42 * 4) = local_40c;
          if ((local_408[0] != uVar42) &&
             (bVar18 = UE::Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_4359859441479187466>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexDecomposition3.cpp"
                                  ,0x3f6,"V2Idx == V2ToVIDMap.Add(VID)"), bVar18)) {
            pcVar6 = (code *)swi(3);
            uVar19 = (*pcVar6)();
            return (bool)uVar19;
          }
          local_2d0 = local_408;
          local_2d8 = puVar34;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)local_198,(TPairInitializer<int_const_&,int_const_&> *)local_32c,
                     (bool *)&local_2d8);
          pFVar37 = (FScriptContainerElement *)local_198._0_8_;
          FVar40.Data = local_158.Data;
LAB_14336f988:
          *(uint *)((longlong)&local_3f0 + lVar32) = local_408[0];
          pFVar30 = local_360;
          puVar34 = puVar34 + 1;
          lVar32 = lVar32 + 4;
          lVar39 = lVar39 + -1;
        } while (lVar39 != 0);
        uVar36 = (ulonglong)local_3b8;
        if (((local_420.Data <= &local_3f0) &&
            (&local_3f0 < (FIndex2i_u_0 *)(local_420.Data + (longlong)local_418._4_4_ * 8))) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar6 = (code *)swi(3);
          uVar19 = (*pcVar6)();
          return (bool)uVar19;
        }
        iVar35 = (int)local_418;
        if ((int)local_418 == local_418._4_4_) {
          iVar35 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_420,(int *)((longlong)&local_418 + 4));
        }
        local_418 = CONCAT44(local_418._4_4_,iVar35 + 1);
        FVar41.Data = FVar41.Data + 4;
        *(FIndex2i_u_0 *)(local_420.Data + (longlong)iVar35 * 8) = local_3f0;
        lVar33 = local_3c8;
      }
      iVar35 = (int)local_418;
      local_3e8._0_4_ = 0;
      local_3e8._4_4_ = 0;
      local_3e8[8] = false;
      local_3e8[9] = true;
      local_3e8._16_8_ = (FDelaunay2Connectivity *)0x0;
      local_3d0 = false;
      local_3cc = NotComputed;
      local_3e8[10] = true;
      local_3b0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_3b0.ArrayNum = 0;
      local_3b0.ArrayMax = 0;
      local_2c8 = (FIndex2i_u_0 *)local_420.Data;
      if (((int)local_418 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar6 = (code *)swi(3);
        uVar19 = (*pcVar6)();
        return (bool)uVar19;
      }
      iVar22 = (uint)local_3f8;
      local_2b8 = local_400.Data;
      iStack_2c0 = iVar35;
      if (((int)(uint)local_3f8 < 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar18)) {
        pcVar6 = (code *)swi(3);
        uVar19 = (*pcVar6)();
        return (bool)uVar19;
      }
      iStack_2b0 = iVar22;
      TVar26 = MakePimpl<UE::Geometry::FDelaunay2Connectivity,0,bool_&>((bool *)&local_358);
      pFVar5 = (FDelaunay2Connectivity *)local_3e8._16_8_;
      if (TVar26.Ptr != (FDelaunay2Connectivity *)(local_3e8 + 0x10)) {
        pFVar5 = *(FDelaunay2Connectivity **)&(TVar26.Ptr)->EdgeToVert;
        *(undefined8 *)&(TVar26.Ptr)->EdgeToVert = 0;
        if ((FDelaunay2Connectivity *)local_3e8._16_8_ != (FDelaunay2Connectivity *)0x0) {
          pFVar7 = (FDelaunay2Connectivity *)(local_3e8._16_8_ + -0xb8);
          pFVar8 = (FDelaunay2Connectivity *)(local_3e8._16_8_ + -0xb8);
          local_3e8._16_8_ = pFVar5;
          (**(code **)&(pFVar7->DuplicateVertices).field_0x40)
                    (&(pFVar8->DuplicateVertices).field_0x40);
          pFVar5 = (FDelaunay2Connectivity *)local_3e8._16_8_;
        }
      }
      local_3e8._16_8_ = pFVar5;
      if (local_358 != 0) {
        (**(code **)(local_358 + -0x10))(local_358 + -0x10);
      }
      uVar17 = uStack_2bc;
      iVar22 = iStack_2c0;
      local_1f8._12_4_ = uStack_2ac;
      local_1f8.ArrayNum = iStack_2b0;
      uVar15 = (undefined4)local_2c8;
      uVar16 = local_2c8._4_4_;
      local_3d0 = 0 < iVar35;
      local_208.DataPtr._0_4_ = (undefined4)local_2c8;
      local_208.DataPtr._4_4_ = local_2c8._4_4_;
      local_208.ArrayNum = iStack_2c0;
      local_208._12_4_ = uStack_2bc;
      local_1f8.DataPtr = (TVector2<double> *)local_2b8;
      bVar18 = UE::Geometry::DelaunayInternal::Triangulate<double>
                         ((FRandomStream *)local_3e8,(FDelaunay2Connectivity *)local_3e8._16_8_,
                          &local_1f8,&local_208,(bool)local_3e8[8],&local_3cc);
      if (bVar18) {
        if ((bool)local_3e8[9] != false) {
          local_1e8.DataPtr._0_4_ = uVar15;
          local_1e8.DataPtr._4_4_ = uVar16;
          local_1e8.ArrayNum = iVar22;
          local_1e8._12_4_ = uVar17;
          bVar18 = UE::Geometry::FDelaunay2::HasEdges((FDelaunay2 *)local_3e8,&local_1e8);
          if (!bVar18) {
            local_3cc = MissingEdges;
            goto LAB_14336fbea;
          }
        }
        iVar35 = (int)local_418;
        local_2e8 = (FIndex2i_u_0 *)local_420.Data;
        if (((int)local_418 < 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("InCount >= 0",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0xeb,L""), bVar18)) {
          pcVar6 = (code *)swi(3);
          uVar19 = (*pcVar6)();
          return (bool)uVar19;
        }
        iStack_2e0 = iVar35;
        if ((FDelaunay2Connectivity *)local_3e8._16_8_ == (FDelaunay2Connectivity *)0x0) {
          bVar21 = UE::Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<6289950407804323500>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\Delaunay2.cpp"
                              ,0x6ac,"Connectivity.IsValid()");
          if (bVar21) {
            pcVar6 = (code *)swi(3);
            uVar19 = (*pcVar6)();
            return (bool)uVar19;
          }
        }
        else {
          local_1d8._12_4_ = uStack_2dc;
          local_1d8.ArrayNum = iVar35;
          local_1d8.DataPtr = (FIndex2i *)local_2e8;
          bVar18 = UE::Geometry::FDelaunay2Connectivity::GetFilledTriangles
                             ((FDelaunay2Connectivity *)local_3e8._16_8_,&local_3b0,&local_1d8,
                              NegativeWinding);
          if (bVar18) goto LAB_14336fbea;
        }
        bVar21 = false;
      }
LAB_14336fbea:
      iVar35 = local_3b0.ArrayNum;
      uVar36 = (ulonglong)local_3b0.ArrayNum;
      if (local_3b0.ArrayNum == 0) {
        bVar21 = false;
      }
      else {
        pFVar30 = local_3b0.AllocatorInstance.Data + uVar36 * 0xc;
        FVar41.Data = local_3b0.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar36 != iVar35) {
            local_443[0] = 0;
            `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
            operator()(local_443);
          }
          if (FVar41.Data == pFVar30) break;
          uVar42 = *(uint *)(FVar41.Data + 8);
          uVar44 = 0;
          if ((int)uVar42 < (int)(uint)local_428) {
            uVar44 = ~uVar42 >> 0x1f;
          }
          if (uVar44 == 0) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar6 = (code *)swi(3);
              uVar19 = (*pcVar6)();
              return (bool)uVar19;
            }
          }
          iVar22 = *(int *)(local_430.Data + (longlong)(int)uVar42 * 4);
          uVar42 = *(uint *)(FVar41.Data + 4);
          uVar44 = 0;
          if ((int)uVar42 < (int)(uint)local_428) {
            uVar44 = ~uVar42 >> 0x1f;
          }
          iVar31 = (uint)local_428;
          if (uVar44 == 0) {
            bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar18) {
              pcVar6 = (code *)swi(3);
              uVar19 = (*pcVar6)();
              return (bool)uVar19;
            }
            iVar31 = (uint)local_428;
          }
          iVar3 = *(int *)(local_430.Data + (longlong)(int)uVar42 * 4);
          uVar42 = *(uint *)FVar41.Data;
          uVar44 = 0;
          if ((int)uVar42 < iVar31) {
            uVar44 = ~uVar42 >> 0x1f;
          }
          if ((uVar44 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar6 = (code *)swi(3);
            uVar19 = (*pcVar6)();
            return (bool)uVar19;
          }
          lVar33 = local_3c8;
          local_370._s_0.A = *(undefined4 *)(local_430.Data + (longlong)(int)uVar42 * 4);
          local_370._s_0.B = iVar3;
          local_370._s_0.C = iVar22;
          iVar22 = UE::Geometry::FDynamicMesh3::AppendTriangle
                             (*(FDynamicMesh3 **)
                               (*(longlong *)((longlong)this + 0x10) + local_3c8 * 8),
                              (FIndex3i *)&local_370._s_0,0);
          uVar36 = local_3b0._8_8_ & 0xffffffff;
          if (iVar22 < 0) {
            bVar21 = false;
          }
          FVar41.Data = FVar41.Data + 0xc;
        }
      }
      if (local_3b0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_3b0.AllocatorInstance.Data);
      }
      if ((FDelaunay2Connectivity *)local_3e8._16_8_ != (FDelaunay2Connectivity *)0x0) {
        (**(code **)&(((FDelaunay2Connectivity *)(local_3e8._16_8_ + -0xb8))->DuplicateVertices).
                     field_0x40)
                  (&(((FDelaunay2Connectivity *)(local_3e8._16_8_ + -0xb8))->DuplicateVertices).
                    field_0x40);
      }
      if ((FIndex2i_u_0 *)local_420.Data != (FIndex2i_u_0 *)0x0) {
        FMemory::Free(local_420.Data);
      }
      local_150 = 0;
      if (local_158.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_158.Data);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_198);
      if (local_430.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_430.Data);
      }
      if (local_400.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_400.Data);
      }
    }
    local_3c8 = lVar33 + 1;
    if (1 < local_3c8) {
      if (local_440.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_440.Data);
      }
      return bVar21;
    }
  } while( true );
}

// operator() @ 143373ad0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int __thiscall
`UE::Geometry::`anonymous_namespace'::FPartialCutResult::ApplyToGeo'::__l2::<lambda_2>::operator()
          (void *this,int param_1)

{
  int *piVar1;
  double *pdVar2;
  short sVar3;
  int iVar4;
  longlong *plVar5;
  longlong *plVar6;
  FDynamicMesh3 *this_00;
  ForAnyElementType *pFVar7;
  code *pcVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  FConvexPart *pFVar14;
  FConvexPart *pFVar15;
  byte bVar16;
  longlong lVar17;
  ForElementType<FSetElementId> FVar18;
  FScriptContainerElement *pFVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  FConvexPart **ppFVar23;
  undefined1 *puVar24;
  FConvexPart *pFVar25;
  uint *puVar26;
  uint uVar27;
  uint uVar28;
  <lambda_1> <Var29;
  undefined1 auStack_2d8 [32];
  FConvexPart **local_2b8;
  FScriptContainerElement *local_2b0;
  longlong local_2a8;
  longlong local_2a0;
  undefined8 local_298;
  ForAnyElementType local_288;
  undefined8 local_280;
  undefined1 local_278 [4];
  uint local_274;
  FConvexPart *local_270;
  IndexIterator local_268;
  FConvexPart *local_258;
  FSizedDisjointSet local_250;
  int local_230;
  uint local_22c;
  int local_228;
  uint local_224;
  uint local_220;
  FDynamicMesh3 *local_218;
  undefined8 local_210;
  int local_208;
  FIndex3i_u_0 local_200;
  TPairInitializer<int_const_&,int_const_&> local_1f0;
  longlong *local_1e0;
  undefined8 local_1d8;
  longlong *local_1c8;
  uint uStack_1c0;
  uint uStack_1bc;
  TBitArray<FDefaultBitArrayAllocator> *local_1b8;
  undefined4 uStack_1b0;
  uint uStack_1ac;
  uint local_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  longlong *local_198;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_190;
  undefined8 uStack_170;
  uint *local_168;
  int *local_160;
  IndexIterator local_158;
  TVector<double>_u_0 local_148;
  undefined8 local_130;
  float local_128;
  undefined8 local_124;
  float local_11c;
  TVector2<float>_u_0 local_118;
  undefined2 local_110;
  undefined1 local_10e;
  undefined4 local_ec;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_e8;
  undefined1 local_98 [32];
  uint *local_78;
  uint local_70;
  int local_64;
  undefined1 local_60 [8];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_2d8;
  plVar5 = *(longlong **)this;
  pFVar25 = (FConvexPart *)0x0;
  iVar11 = (int)plVar5[1];
  local_224 = (uint)~param_1 >> 0x1f;
  uVar27 = 0;
  uVar21 = uVar27;
  if (param_1 < iVar11) {
    uVar21 = local_224;
  }
  local_228 = param_1;
  local_1e0 = this;
  if ((uVar21 == 0) &&
     (local_2b8 = (FConvexPart **)(longlong)param_1,
     local_2b0 = (FScriptContainerElement *)(longlong)iVar11,
     bVar10 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar8 = (code *)swi(3);
    iVar11 = (*pcVar8)();
    return iVar11;
  }
  <Var29.Mesh = *(FDynamicMesh3 **)(*plVar5 + (longlong)param_1 * 8);
  local_250.Parents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.Parents.ArrayNum = 0;
  local_250.Parents.ArrayMax = 0;
  local_250.Sizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250.Sizes.ArrayNum = 0;
  local_250.Sizes.ArrayMax = 0;
  local_218 = <Var29.Mesh;
  UE::Geometry::FSizedDisjointSet::Init(&local_250,0);
  UE::Geometry::FSizedDisjointSet::
  Init<_UE::Geometry::FVertexConnectedComponents::Init<UE::Geometry::FDynamicMesh3>_::__l2::<lambda_1>_>
            (&local_250,
             ((<Var29.Mesh)->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             ((<Var29.Mesh)->VertexRefCounts).RefCounts.CurBlockUsed,<Var29);
  uVar21 = ((<Var29.Mesh)->TriangleRefCounts).RefCounts.CurBlock;
  uVar28 = ((<Var29.Mesh)->TriangleRefCounts).RefCounts.CurBlockUsed;
  pFVar15 = pFVar25;
  if (0 < (int)(uVar21 * 0x200 + uVar28)) {
    do {
      uVar12 = (uint)pFVar15;
      if ((-1 < (int)uVar12) && ((int)uVar12 < (int)(uVar21 * 0x200 + uVar28))) {
        uVar22 = (ulonglong)(uVar12 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 (((<Var29.Mesh)->TriangleRefCounts).RefCounts.Blocks.
                                  AllocatorInstance.Data + ((ulonglong)pFVar15 >> 9) * 8) +
                               uVar22 * 2) - 1U) < 0xfffe) {
          lVar17 = *(longlong *)
                    (((<Var29.Mesh)->Triangles).Blocks.AllocatorInstance.Data +
                    ((ulonglong)pFVar15 >> 9) * 8);
          local_210 = *(undefined8 *)(lVar17 + uVar22 * 0xc);
          iVar11 = *(int *)(lVar17 + 8 + uVar22 * 0xc);
          local_208 = iVar11;
          UE::Geometry::FSizedDisjointSet::Union
                    (&local_250,(int)local_210,(int)((ulonglong)local_210 >> 0x20));
          UE::Geometry::FSizedDisjointSet::Union(&local_250,local_210._4_4_,iVar11);
        }
      }
      uVar21 = ((<Var29.Mesh)->TriangleRefCounts).RefCounts.CurBlock;
      pFVar15 = (FConvexPart *)(ulonglong)(uVar12 + 1);
      uVar28 = ((<Var29.Mesh)->TriangleRefCounts).RefCounts.CurBlockUsed;
    } while ((int)(uVar12 + 1) < (int)(uVar21 * 0x200 + uVar28));
  }
  bVar10 = UE::Geometry::FVertexConnectedComponents::
           HasMultipleComponents<UE::Geometry::FDynamicMesh3>
                     ((FVertexConnectedComponents *)&local_250,<Var29.Mesh,3);
  if (bVar10) {
    UE::Geometry::FVertexConnectedComponents::ConnectCloseVertices<UE::Geometry::FDynamicMesh3>
              ((FVertexConnectedComponents *)&local_250,<Var29.Mesh,
               **(double **)((longlong)this + 8),3);
    UE::Geometry::FVertexConnectedComponents::
    ConnectOverlappingComponents<UE::Geometry::FDynamicMesh3>
              ((FVertexConnectedComponents *)&local_250,<Var29.Mesh,3);
    UE::Geometry::FVertexConnectedComponents::MakeComponentMap<UE::Geometry::FDynamicMesh3>
              ((FVertexConnectedComponents *)&local_250,
               (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
               local_98,<Var29.Mesh,3);
    uVar21 = local_98._8_4_ - local_64;
    uVar22 = (ulonglong)uVar21;
    local_220 = uVar21;
    if (1 < (int)uVar21) {
      local_288.Data = (FScriptContainerElement *)0x0;
      local_280 = 0;
      do {
        pFVar14 = ::operator_new(0x2e0);
        pFVar15 = pFVar25;
        if (pFVar14 != (FConvexPart *)0x0) {
          pFVar15 = UE::Geometry::FConvexDecomposition3::FConvexPart::FConvexPart(pFVar14);
        }
        local_270 = pFVar15;
        if (local_288.Data <= (FScriptContainerElement *)&local_270) {
          if ((FScriptContainerElement *)&local_270 < local_288.Data + (longlong)local_280._4_4_ * 8
             ) {
            local_2a0 = (longlong)(int)local_280;
            local_298 = 8;
            local_2b8 = &local_270;
            local_2b0 = local_288.Data;
            local_2a8 = (longlong)local_280._4_4_;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              iVar11 = (*pcVar8)();
              return iVar11;
            }
          }
        }
        iVar11 = (int)local_280;
        if ((int)local_280 == local_280._4_4_) {
          iVar11 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&local_288,(int *)((longlong)&local_280 + 4));
        }
        local_280 = CONCAT44(local_280._4_4_,iVar11 + 1);
        *(FConvexPart **)(local_288.Data + (longlong)iVar11 * 8) = local_270;
        local_270 = (FConvexPart *)0x0;
        uVar22 = uVar22 - 1;
      } while (uVar22 != 0);
      local_e8.Elements._0_8_ = 0;
      local_e8.Elements._8_8_ = 0;
      local_e8.Elements._32_8_ = 0;
      local_e8.Elements._40_4_ = 0;
      local_e8.Elements._44_4_ = 0x80;
      local_e8.Elements._48_4_ = 0xffffffff;
      local_e8.Elements._52_4_ = 0;
      local_e8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_e8.HashSize = 0;
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                (&local_268,&(<Var29.Mesh)->VertexRefCounts,0,
                 ((<Var29.Mesh)->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 ((<Var29.Mesh)->VertexRefCounts).RefCounts.CurBlockUsed);
      iVar11 = ((<Var29.Mesh)->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               ((<Var29.Mesh)->VertexRefCounts).RefCounts.CurBlockUsed;
      UE::Geometry::FRefCountVector::IndexIterator::IndexIterator
                (&local_158,&(<Var29.Mesh)->VertexRefCounts,iVar11,iVar11);
      if (local_268._8_4_ != local_158._8_4_) {
        do {
          uVar9 = local_268._8_4_;
          local_274 = local_268._8_4_;
          if ((-1 < (int)local_268._8_4_) &&
             ((int)local_268._8_4_ <
              (int)(((<Var29.Mesh)->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                   ((<Var29.Mesh)->VertexRefCounts).RefCounts.CurBlockUsed))) {
            uVar21 = (uint)*(ushort *)
                            (*(longlong *)
                              (((<Var29.Mesh)->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                               Data + (ulonglong)((uint)local_268._8_4_ >> 9) * 8) +
                            (ulonglong)(local_268._8_4_ & 0x1ff) * 2);
            if (uVar21 == 0xffff) {
              uVar21 = uVar27;
            }
            if (1 < uVar21) {
              uVar21 = UE::Geometry::FSizedDisjointSet::Find(&local_250,local_268._8_4_);
              pFVar15 = pFVar25;
              if (local_98._8_4_ != local_64) {
                puVar24 = local_60;
                if (local_58 != (undefined1 *)0x0) {
                  puVar24 = local_58;
                }
                uVar28 = *(uint *)(puVar24 + (ulonglong)(local_50 - 1U & uVar21) * 4);
                while (pFVar15 = pFVar25, uVar28 != 0xffffffff) {
                  pFVar15 = (FConvexPart *)((longlong)(int)uVar28 * 0x10 + local_98._0_8_);
                  if ((uint)(pFVar15->InternalGeo)._padding_ == uVar21) {
                    if (pFVar15 != (FConvexPart *)0x0) goto LAB_143373f6c;
                    break;
                  }
                  uVar28 = (pFVar15->InternalGeo).Vertices.CurBlock;
                }
              }
              bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Pair != nullptr",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                                  ,0x288,L"");
              if (bVar10) {
                pcVar8 = (code *)swi(3);
                iVar11 = (*pcVar8)();
                return iVar11;
              }
LAB_143373f6c:
              uVar21 = *(uint *)((longlong)&(pFVar15->InternalGeo)._padding_ + 4);
              uVar28 = uVar27;
              if ((int)uVar21 < (int)local_280) {
                uVar28 = ~uVar21 >> 0x1f;
              }
              if ((uVar28 == 0) &&
                 (local_2b8 = (FConvexPart **)(longlong)(int)uVar21,
                 local_2b0 = (FScriptContainerElement *)(longlong)(int)local_280,
                 bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar10)) {
                pcVar8 = (code *)swi(3);
                iVar11 = (*pcVar8)();
                return iVar11;
              }
              local_110 = 0;
              local_10e = 0;
              lVar17 = *(longlong *)
                        (((<Var29.Mesh)->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(local_274 >> 9) * 8);
              pdVar2 = (double *)(lVar17 + (ulonglong)(local_274 & 0x1ff) * 0x18);
              local_148._s_0.X = *pdVar2;
              local_148._s_0.Y = pdVar2[1];
              local_148._s_0.Z = *(double *)(lVar17 + 0x10 + (ulonglong)(local_274 & 0x1ff) * 0x18);
              local_128 = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              local_11c = UE::Math::TVector<float>::ZeroVector.field0_0x0._s_0.Z;
              local_130 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              local_124 = UE::Math::TVector<float>::ZeroVector.field0_0x0._0_8_;
              local_118 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
              local_230 = UE::Geometry::FDynamicMesh3::AppendVertex
                                    (*(FDynamicMesh3 **)(local_288.Data + (longlong)(int)uVar21 * 8)
                                     ,(FVertexInfo *)&local_148._s_0);
              local_168 = &local_274;
              local_160 = &local_230;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        (&local_e8,&local_1f0,(bool *)&local_168);
            }
          }
          local_268._8_4_ = uVar9 + 1;
          if ((int)local_268._8_4_ < (int)local_268._12_4_) {
            do {
              if ((*(short *)(*(longlong *)
                               (*(longlong *)(local_268._0_8_ + 8) +
                               (ulonglong)((uint)local_268._8_4_ >> 9) * 8) +
                             (ulonglong)(local_268._8_4_ & 0x1ff) * 2) != 0) &&
                 (*(short *)(*(longlong *)
                              (*(longlong *)(local_268._0_8_ + 8) +
                              (ulonglong)((uint)local_268._8_4_ >> 9) * 8) +
                            (ulonglong)(local_268._8_4_ & 0x1ff) * 2) != -1)) break;
              local_268._8_4_ = local_268._8_4_ + 1;
            } while ((int)local_268._8_4_ < (int)local_268._12_4_);
          }
        } while (local_268._8_4_ != local_158._8_4_);
      }
      local_22c = ((<Var29.Mesh)->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  ((<Var29.Mesh)->TriangleRefCounts).RefCounts.CurBlockUsed;
      pFVar15 = pFVar25;
      if ((local_22c != 0) &&
         (pFVar19 = ((<Var29.Mesh)->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
         pFVar15 = (FConvexPart *)0x0, 0xfffd < (ushort)(**(short **)pFVar19 - 1U))) {
        pFVar15 = (FConvexPart *)&DAT_00000001;
        pFVar14 = (FConvexPart *)&DAT_00000001;
        if (1 < (int)local_22c) {
          do {
            pFVar15 = pFVar14;
            sVar3 = *(short *)(*(longlong *)(pFVar19 + ((ulonglong)pFVar15 >> 9) * 8) +
                              (ulonglong)((uint)pFVar15 & 0x1ff) * 2);
            if ((sVar3 != 0) && (sVar3 != -1)) break;
            uVar21 = (uint)pFVar15 + 1;
            pFVar15 = (FConvexPart *)(ulonglong)uVar21;
            pFVar14 = pFVar15;
          } while ((int)uVar21 < (int)local_22c);
        }
      }
      uVar27 = 0;
      if ((uint)pFVar15 != local_22c) {
LAB_143374160:
        do {
          uVar22 = (ulonglong)((uint)pFVar15 & 0x1ff);
          lVar17 = *(longlong *)
                    (((<Var29.Mesh)->Triangles).Blocks.AllocatorInstance.Data +
                    ((ulonglong)pFVar15 >> 9) * 8);
          local_1d8 = *(undefined8 *)(lVar17 + uVar22 * 0xc);
          uVar21 = *(uint *)(lVar17 + 8 + uVar22 * 0xc);
          uVar28 = (uint)local_1d8;
          uVar12 = UE::Geometry::FSizedDisjointSet::Find(&local_250,(uint)local_1d8);
          pFVar14 = pFVar25;
          if (local_98._8_4_ != local_64) {
            puVar24 = local_60;
            if (local_58 != (undefined1 *)0x0) {
              puVar24 = local_58;
            }
            uVar13 = *(uint *)(puVar24 + (ulonglong)(local_50 - 1U & uVar12) * 4);
            while (pFVar14 = pFVar25, uVar13 != 0xffffffff) {
              pFVar14 = (FConvexPart *)((longlong)(int)uVar13 * 0x10 + local_98._0_8_);
              if ((uint)(pFVar14->InternalGeo)._padding_ == uVar12) {
                if (pFVar14 != (FConvexPart *)0x0) goto LAB_143374224;
                break;
              }
              uVar13 = (pFVar14->InternalGeo).Vertices.CurBlock;
            }
          }
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L"");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            iVar11 = (*pcVar8)();
            return iVar11;
          }
LAB_143374224:
          uVar12 = *(uint *)((longlong)&(pFVar14->InternalGeo)._padding_ + 4);
          pFVar14 = pFVar25;
          if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
            FVar18 = (ForElementType<FSetElementId>)&local_e8.Hash;
            if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar18 = local_e8.Hash.SecondaryData;
            }
            uVar13 = *(uint *)((longlong)FVar18 + (ulonglong)(local_e8.HashSize - 1U & uVar21) * 4);
            while (pFVar14 = pFVar25, uVar13 != 0xffffffff) {
              pFVar14 = (FConvexPart *)((longlong)(int)uVar13 * 0x10 + local_e8.Elements._0_8_);
              if ((uint)(pFVar14->InternalGeo)._padding_ == uVar21) {
                if (pFVar14 != (FConvexPart *)0x0) goto LAB_1433742c1;
                break;
              }
              uVar13 = (pFVar14->InternalGeo).Vertices.CurBlock;
            }
          }
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L"");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            iVar11 = (*pcVar8)();
            return iVar11;
          }
LAB_1433742c1:
          iVar11 = *(int *)((longlong)&(pFVar14->InternalGeo)._padding_ + 4);
          pFVar14 = pFVar25;
          if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
            FVar18 = (ForElementType<FSetElementId>)&local_e8.Hash;
            if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar18 = local_e8.Hash.SecondaryData;
            }
            uVar21 = *(uint *)((longlong)FVar18 +
                              (ulonglong)(local_e8.HashSize - 1U & local_1d8._4_4_) * 4);
            while (pFVar14 = pFVar25, uVar21 != 0xffffffff) {
              pFVar14 = (FConvexPart *)((longlong)(int)uVar21 * 0x10 + local_e8.Elements._0_8_);
              if ((uint)(pFVar14->InternalGeo)._padding_ == local_1d8._4_4_) {
                if (pFVar14 != (FConvexPart *)0x0) goto LAB_143374352;
                break;
              }
              uVar21 = (pFVar14->InternalGeo).Vertices.CurBlock;
            }
          }
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L"");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            iVar11 = (*pcVar8)();
            return iVar11;
          }
LAB_143374352:
          iVar4 = *(int *)((longlong)&(pFVar14->InternalGeo)._padding_ + 4);
          pFVar14 = pFVar25;
          if (local_e8.Elements._8_4_ != local_e8.Elements._52_4_) {
            FVar18 = (ForElementType<FSetElementId>)&local_e8.Hash;
            if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar18 = local_e8.Hash.SecondaryData;
            }
            uVar21 = *(uint *)((longlong)FVar18 + (ulonglong)(local_e8.HashSize - 1U & uVar28) * 4);
            while (pFVar14 = pFVar25, uVar21 != 0xffffffff) {
              pFVar14 = (FConvexPart *)((longlong)(int)uVar21 * 0x10 + local_e8.Elements._0_8_);
              if ((uint)(pFVar14->InternalGeo)._padding_ == uVar28) {
                if (pFVar14 != (FConvexPart *)0x0) goto LAB_1433743d4;
                break;
              }
              uVar21 = (pFVar14->InternalGeo).Vertices.CurBlock;
            }
          }
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Pair != nullptr",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                              ,0x288,L"");
          if (bVar10) {
            pcVar8 = (code *)swi(3);
            iVar11 = (*pcVar8)();
            return iVar11;
          }
LAB_1433743d4:
          local_200._s_0.A = *(int *)((longlong)&(pFVar14->InternalGeo)._padding_ + 4);
          uVar21 = uVar27;
          if ((int)uVar12 < (int)local_280) {
            uVar21 = ~uVar12 >> 0x1f;
          }
          local_200._s_0.B = iVar4;
          local_200._s_0.C = iVar11;
          if ((uVar21 == 0) &&
             (local_2b8 = (FConvexPart **)(longlong)(int)uVar12,
             local_2b0 = (FScriptContainerElement *)(longlong)(int)local_280,
             bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar8 = (code *)swi(3);
            iVar11 = (*pcVar8)();
            return iVar11;
          }
          UE::Geometry::FDynamicMesh3::AppendTriangle
                    (*(FDynamicMesh3 **)(local_288.Data + (longlong)(int)uVar12 * 8),
                     (FIndex3i *)&local_200._s_0,0);
          uVar21 = (uint)pFVar15 + 1;
          pFVar15 = (FConvexPart *)(ulonglong)uVar21;
          <Var29.Mesh = local_218;
          if ((int)uVar21 < (int)local_22c) {
            do {
              uVar22 = (ulonglong)((uint)pFVar15 & 0x1ff);
              lVar17 = *(longlong *)
                        ((local_218->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                        ((ulonglong)pFVar15 >> 9) * 8);
              if ((*(short *)(lVar17 + uVar22 * 2) != 0) && (*(short *)(lVar17 + uVar22 * 2) != -1))
              goto LAB_143374160;
              uVar21 = (uint)pFVar15 + 1;
              pFVar15 = (FConvexPart *)(ulonglong)uVar21;
            } while ((int)uVar21 < (int)local_22c);
          }
        } while (uVar21 != local_22c);
      }
      uVar21 = local_70;
      uVar28 = 1;
      uStack_1bc = 1;
      uStack_1ac = uVar27;
      uStack_1c0 = uVar27;
      local_1a8 = uVar27;
      if (local_70 != 0) {
        puVar26 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar26 = local_78;
        }
        uStack_1bc = *puVar26;
        pFVar15 = pFVar25;
        local_1a8 = 0;
        uStack_1c0 = 0;
        while (uStack_1bc == 0) {
          iVar11 = (int)pFVar25;
          local_1a8 = (int)pFVar15 + 0x20;
          pFVar15 = (FConvexPart *)(ulonglong)local_1a8;
          uStack_1c0 = iVar11 + 1;
          pFVar25 = (FConvexPart *)(ulonglong)uStack_1c0;
          uStack_1bc = 1;
          uStack_1ac = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_1c0)
          goto LAB_143374520;
          uStack_1bc = puVar26[(longlong)iVar11 + 1];
        }
        uStack_1bc = -uStack_1bc & uStack_1bc;
        uVar22 = (ulonglong)uStack_1bc * 2 + 1;
        lVar17 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_1f0.Key._4_4_ = (int)lVar17;
        uStack_1ac = (local_1a8 - 1) + local_1f0.Key._4_4_;
        if ((int)local_70 < (int)uStack_1ac) {
          uStack_1ac = local_70;
        }
      }
LAB_143374520:
      local_1c8 = (longlong *)local_98;
      uStack_1a4 = local_ec;
      local_1b8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uVar12 = local_70 & 0xffffffe0;
      iStack_1a0 = local_98._8_4_ - local_64;
      uStack_1b0 = 0xffffffff;
      TStack_190.CurrentBitIndex = uStack_1ac;
      TStack_190.UnvisitedBitMask = 0xffffffff;
      TStack_190._padding_ = CONCAT44(uStack_1bc,uStack_1c0);
      iVar11 = (int)local_70 >> 5;
      TStack_190._28_4_ = local_ec;
      TStack_190.BaseBitIndex = local_1a8;
      uStack_170 = CONCAT44(uStack_19c,iStack_1a0);
      bVar16 = (byte)local_70;
      local_198 = local_1c8;
      TStack_190.Array = local_1b8;
      if (((int)local_70 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar10)) {
        pcVar8 = (code *)swi(3);
        iVar11 = (*pcVar8)();
        return iVar11;
      }
      plVar5 = local_1e0;
      if (uVar21 != local_70) {
        puVar26 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar26 = local_78;
        }
        uVar21 = -1 << (bVar16 & 0x1f) & puVar26[iVar11];
        while (uVar21 == 0) {
          lVar17 = (longlong)iVar11;
          uVar12 = uVar12 + 0x20;
          iVar11 = iVar11 + 1;
          uVar21 = local_70;
          if ((int)((local_70 - 1) + ((int)(local_70 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_143374640;
          uVar21 = puVar26[lVar17 + 1];
        }
        uVar22 = (ulonglong)(-uVar21 & uVar21) * 2 + 1;
        lVar17 = 0x3f;
        if (uVar22 != 0) {
          for (; uVar22 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        local_1f0.Value._0_4_ = (int)lVar17;
        uVar21 = (uVar12 - 1) + (int)local_1f0.Value;
        if ((int)local_70 < (int)uVar21) {
          uVar21 = local_70;
        }
      }
LAB_143374640:
      plVar6 = local_198;
      if ((int)local_198[1] - *(int *)((longlong)local_198 + 0x34) != (int)uStack_170) {
        local_278[0] = 0;
        `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_278);
      }
      if (((TStack_190.CurrentBitIndex != uVar21) ||
          (TStack_190.Array != (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10))) ||
         (plVar6 != (longlong *)local_98)) {
        uVar12 = *(uint *)(*plVar6 + 4 + (longlong)TStack_190.CurrentBitIndex * 0x10);
        ppFVar23 = (FConvexPart **)(longlong)(int)uVar12;
        uVar13 = uVar27;
        if ((int)uVar12 < (int)local_280) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (local_2b8 = ppFVar23, local_2b0 = (FScriptContainerElement *)(longlong)(int)local_280,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar8 = (code *)swi(3);
          iVar11 = (*pcVar8)();
          return iVar11;
        }
        bVar10 = UE::Geometry::FConvexDecomposition3::FConvexPart::ComputeHull
                           (*(FConvexPart **)(local_288.Data + (longlong)ppFVar23 * 8),true,
                            (double)plVar5[2]);
        if (!bVar10) {
          uVar21 = 1;
          goto LAB_143374a02;
        }
        uVar13 = uVar27;
        if ((int)uVar12 < (int)local_280) {
          uVar13 = ~uVar12 >> 0x1f;
        }
        if ((uVar13 == 0) &&
           (local_2b8 = ppFVar23, local_2b0 = (FScriptContainerElement *)(longlong)(int)local_280,
           bVar10 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar10)) {
          pcVar8 = (code *)swi(3);
          iVar11 = (*pcVar8)();
          return iVar11;
        }
        UE::Geometry::FConvexDecomposition3::FConvexPart::ComputeStats
                  (*(FConvexPart **)(local_288.Data + (longlong)ppFVar23 * 8));
        TStack_190.UnvisitedBitMask = TStack_190.UnvisitedBitMask & ~TStack_190._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_190);
        goto LAB_143374640;
      }
      if ((int)local_280 < 1) {
        local_2b8 = (FConvexPart **)0x0;
        local_2b0 = (FScriptContainerElement *)(longlong)(int)local_280;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          iVar11 = (*pcVar8)();
          return iVar11;
        }
      }
      plVar6 = (longlong *)*plVar5;
      ppFVar23 = (FConvexPart **)(longlong)local_228;
      pFVar25 = *(FConvexPart **)local_288.Data;
      iVar11 = (int)plVar6[1];
      uVar21 = uVar27;
      if (local_228 < iVar11) {
        uVar21 = local_224;
      }
      if ((uVar21 == 0) &&
         (local_2b8 = ppFVar23, local_2b0 = (FScriptContainerElement *)(longlong)iVar11,
         bVar10 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar8 = (code *)swi(3);
        iVar11 = (*pcVar8)();
        return iVar11;
      }
      UE::Geometry::FConvexDecomposition3::FConvexPart::operator=
                (*(FConvexPart **)(*plVar6 + (longlong)ppFVar23 * 8),pFVar25);
      pFVar19 = (FScriptContainerElement *)(longlong)(int)local_280;
      if ((int)local_280 < 1) {
        local_2b8 = (FConvexPart **)0x0;
        local_2b0 = pFVar19;
        bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar10) {
          pcVar8 = (code *)swi(3);
          iVar11 = (*pcVar8)();
          return iVar11;
        }
        pFVar19 = (FScriptContainerElement *)(local_280 & 0xffffffff);
      }
      this_00 = *(FDynamicMesh3 **)local_288.Data;
      if (this_00 != (FDynamicMesh3 *)0x0) {
        *(undefined8 *)local_288.Data = 0;
        pFVar19 = this_00[1].VertexRefCounts.RefCounts.Blocks.AllocatorInstance.Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        pFVar19 = this_00[1].Vertices.Blocks.AllocatorInstance.Data;
        if (pFVar19 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar19);
        }
        if ((void *)this_00[1]._padding_ != (void *)0x0) {
          FMemory::Free((void *)this_00[1]._padding_);
        }
        UE::Geometry::FDynamicMesh3::~FDynamicMesh3(this_00);
        ::operator_delete(this_00,0x2e0);
        pFVar19 = (FScriptContainerElement *)(local_280 & 0xffffffff);
      }
      uVar21 = local_220;
      if (1 < (int)pFVar19) {
        lVar17 = 8;
        do {
          pFVar7 = (ForAnyElementType *)*plVar5;
          uVar21 = uVar27;
          if ((int)uVar28 < (int)pFVar19) {
            uVar21 = ~uVar28 >> 0x1f;
          }
          if (uVar21 == 0) {
            local_2b0 = (FScriptContainerElement *)(longlong)(int)pFVar19;
            local_2b8 = (FConvexPart **)(longlong)(int)uVar28;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              iVar11 = (*pcVar8)();
              return iVar11;
            }
          }
          local_258 = *(FConvexPart **)(local_288.Data + lVar17);
          *(undefined8 *)(local_288.Data + lVar17) = 0;
          pFVar19 = pFVar7->Data;
          if ((pFVar19 <= (FScriptContainerElement *)&local_258) &&
             (lVar20 = (longlong)*(int *)((longlong)&pFVar7[1].Data + 4),
             (FScriptContainerElement *)&local_258 < pFVar19 + lVar20 * 8)) {
            local_2a0 = (longlong)*(int *)&pFVar7[1].Data;
            local_298 = 8;
            local_2b8 = &local_258;
            local_2b0 = pFVar19;
            local_2a8 = lVar20;
            bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar10) {
              pcVar8 = (code *)swi(3);
              iVar11 = (*pcVar8)();
              return iVar11;
            }
          }
          iVar11 = *(int *)&pFVar7[1].Data;
          piVar1 = (int *)((longlong)&pFVar7[1].Data + 4);
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,pFVar7,piVar1);
          }
          uVar28 = uVar28 + 1;
          *(int *)&pFVar7[1].Data = iVar11 + 1;
          lVar17 = lVar17 + 8;
          *(FConvexPart **)(pFVar7->Data + (longlong)iVar11 * 8) = local_258;
          pFVar19 = (FScriptContainerElement *)(local_280 & 0xffffffff);
          uVar21 = local_220;
        } while ((int)uVar28 < (int)local_280);
      }
LAB_143374a02:
      local_e8.HashSize = 0;
      if (local_e8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_e8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_e8.Elements);
      DestructItems<TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>,int>
                ((TUniquePtr<UE::Geometry::FConvexDecomposition3::FConvexPart,TDefaultDelete<UE::Geometry::FConvexDecomposition3::FConvexPart>_>
                  *)local_288.Data,(int)local_280);
      if (local_288.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_288.Data);
      }
    }
    local_50 = 0;
    if (local_58 != (undefined1 *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
  }
  else {
    uVar21 = (uint)(0 < ((<Var29.Mesh)->TriangleRefCounts).UsedCount);
  }
  if (local_250.Sizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Sizes.AllocatorInstance.Data);
  }
  if (local_250.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Parents.AllocatorInstance.Data);
  }
  return uVar21;
}

// operator() @ 143376390

TVector<double> * __thiscall
`UE::Geometry::`anonymous_namespace'::FPartialCutResult::FPartialCutResult'::__l57::<lambda_2>::
operator()(void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  double *pdVar10;
  uint uVar11;
  int iVar12;
  double local_38;
  double dStack_30;
  undefined8 local_28;
  double local_20;
  double dStack_18;
  undefined8 local_10;
  
  lVar3 = *(longlong *)((longlong)this + 8);
  iVar12 = *(int *)(lVar3 + 0x24) + *(int *)(lVar3 + 0x20) * 0x200;
  if (param_1 < iVar12) {
    lVar3 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
    pdVar1 = (double *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0x18);
    pdVar10 = &local_38;
    local_38 = *pdVar1;
    dStack_30 = pdVar1[1];
    local_28 = *(undefined8 *)(lVar3 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  }
  else {
    uVar11 = param_1 - iVar12;
    plVar4 = *(longlong **)this;
    uVar8 = 0;
    if ((int)uVar11 < (int)plVar4[1]) {
      uVar8 = ~uVar11 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar7 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar7) {
        pcVar5 = (code *)swi(3);
        pTVar9 = (TVector<double> *)(*pcVar5)();
        return pTVar9;
      }
    }
    lVar3 = *plVar4;
    pdVar1 = (double *)(lVar3 + (longlong)(int)uVar11 * 0x18);
    pdVar10 = &local_20;
    local_20 = *pdVar1;
    dStack_18 = pdVar1[1];
    local_10 = *(undefined8 *)(lVar3 + 0x10 + (longlong)(int)uVar11 * 0x18);
  }
  dVar6 = pdVar10[1];
  dVar2 = pdVar10[2];
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar10;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// operator() @ 143379dd0

bool __thiscall
`UE::Geometry::`anonymous_namespace'::FPartialCutResult::FPartialCutResult'::__l57::<lambda_3>::
operator()(void *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong *plVar5;
  
  if (*(int *)(*(longlong *)((longlong)this + 8) + 0x20) * 0x200 +
      *(int *)(*(longlong *)((longlong)this + 8) + 0x24) <= param_1) {
    return true;
  }
  plVar5 = (longlong *)
           ((longlong)*(int *)((longlong)this + 0x18) * 0x10 + *(longlong *)((longlong)this + 0x10))
  ;
  uVar4 = 0;
  if (param_1 < (int)plVar5[1]) {
    uVar4 = (uint)~param_1 >> 0x1f;
  }
  if (uVar4 == 0) {
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
  return (bool)*(undefined1 *)((longlong)param_1 + *plVar5);
}

// operator() @ 14337a640

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
`UE::Geometry::`anonymous_namespace'::FPartialCutResult::ApplyToGeo'::__l85::<lambda_4>::operator()
          (void *this,FConvexPart *param_1)

{
  int *piVar1;
  double *pdVar2;
  double dVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  code *pcVar6;
  FConvexPart *pFVar7;
  uint *puVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  FScriptContainerElement *pFVar18;
  uint *puVar19;
  uint uVar20;
  longlong lVar21;
  longlong lVar22;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar23;
  <lambda_1> local_res8 [8];
  FConvexPart *local_res10;
  int local_res18 [2];
  uint *local_res20;
  uint local_d8 [2];
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> local_d0;
  TArrayView<std::nullptr_t,int> local_c0;
  code *local_b0;
  int **local_a8;
  int *local_a0;
  longlong local_98;
  FConvexPart *local_90;
  undefined8 local_88;
  TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_> *local_80;
  TVector<double>_u_0 local_78 [2];
  
  puVar4 = *(undefined8 **)((longlong)this + 8);
  uVar14 = 0;
  iVar11 = *(int *)(puVar4 + 1);
  uVar20 = 0;
  local_res10 = param_1;
  if (iVar11 < 0xc9) {
    puVar19 = (uint *)*puVar4;
    local_res20 = puVar19 + iVar11;
    while( true ) {
      puVar8 = local_res20;
      if (*(int *)(puVar4 + 1) != iVar11) {
        local_res8[0] = (<lambda_1>)0x0;
        `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      if (puVar19 == puVar8) break;
      local_d8[0] = *puVar19;
      lVar21 = (longlong)(int)local_d8[0];
      lVar22 = *(longlong *)this;
      uVar20 = 0;
      if ((int)local_d8[0] < *(int *)(lVar22 + 0x18)) {
        uVar20 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      plVar5 = *(longlong **)this;
      dVar3 = *(double *)(*(longlong *)(lVar22 + 0x10) + lVar21 * 8);
      lVar22 = (longlong)(int)local_d8[0];
      uVar20 = 0;
      if ((int)local_d8[0] < (int)plVar5[1]) {
        uVar20 = ~local_d8[0] >> 0x1f;
      }
      if ((uVar20 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar7 = local_res10;
      lVar21 = *plVar5;
      pdVar2 = (double *)(lVar21 + lVar22 * 0x18);
      local_78[0]._0_8_ = *pdVar2;
      local_78[0]._8_8_ = pdVar2[1];
      local_78[0]._16_8_ = *(double *)(lVar21 + 0x10 + lVar22 * 0x18);
      bVar9 = UE::Geometry::FConvexDecomposition3::ConvexPartVsSphereOverlap
                        (local_res10,(TVector<double> *)&local_78[0]._s_0,dVar3,
                         (TTransform<double> *)0x0,(double *)0x0);
      if (bVar9) {
        pTVar23 = &pFVar7->OverlapsNegativeSpace;
        pFVar18 = (pTVar23->AllocatorInstance).Data;
        if (((pFVar18 <= (FScriptContainerElement *)local_d8) &&
            ((FScriptContainerElement *)local_d8 <
             pFVar18 + (longlong)(pFVar7->OverlapsNegativeSpace).ArrayMax * 4)) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar10 = (pFVar7->OverlapsNegativeSpace).ArrayNum;
        piVar1 = &(pFVar7->OverlapsNegativeSpace).ArrayMax;
        if (iVar10 == *piVar1) {
          iVar10 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&pTVar23->AllocatorInstance,piVar1);
        }
        (pFVar7->OverlapsNegativeSpace).ArrayNum = iVar10 + 1;
        *(uint *)((pTVar23->AllocatorInstance).Data + (longlong)iVar10 * 4) = local_d8[0];
      }
      puVar19 = puVar19 + 1;
    }
  }
  else {
    local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d0.ArrayNum = 0;
    local_d0.ArrayMax = 0;
    iVar11 = iVar11 / 200 + 7;
    TArray<TArray<int,TSizedDefaultAllocator<32>_>,TSizedDefaultAllocator<32>_>::SetNum
              (&local_d0,iVar11,Default);
    local_98 = *(longlong *)((longlong)this + 8);
    local_c0.DataPtr = (void **)0x0;
    local_c0.ArrayNum = 0;
    local_res18[0] = *(int *)(local_98 + 8) / iVar11 + 1;
    local_a0 = local_res18;
    local_88 = *(undefined8 *)this;
    local_80 = &local_d0;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<``UE::Geometry::`anonymous_namespace'::FPartialCutResult::ApplyToGeo'::__l85::<lambda_4>::operator()'::__l5::<lambda_1>,void,int>
               ::Call;
    local_a8 = &local_a0;
    local_90 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",iVar11,1,(TFunctionRef<void___cdecl(int)> *)&local_b0,
               local_res8[0],None,&local_c0);
    lVar21 = (longlong)iVar11;
    uVar13 = uVar14;
    uVar16 = uVar14;
    uVar17 = uVar14;
    lVar22 = lVar21;
    uVar15 = uVar20;
    if (0 < iVar11) {
      do {
        uVar12 = (uint)uVar17;
        uVar15 = uVar20;
        if ((int)uVar12 < local_d0.ArrayNum) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uVar15 = (int)uVar16 + *(int *)(local_d0.AllocatorInstance.Data + uVar13 + 8);
        lVar22 = lVar22 + -1;
        uVar13 = uVar13 + 0x10;
        uVar16 = (ulonglong)uVar15;
        uVar17 = (ulonglong)(uVar12 + 1);
      } while (lVar22 != 0);
    }
    pFVar7 = local_res10;
    pTVar23 = &local_res10->OverlapsNegativeSpace;
    if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
    }
    if ((local_res10->OverlapsNegativeSpace).ArrayMax < (int)uVar15) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar15,&pTVar23->AllocatorInstance,
                 (local_res10->OverlapsNegativeSpace).ArrayNum,
                 &(local_res10->OverlapsNegativeSpace).ArrayMax);
    }
    uVar13 = uVar14;
    if (0 < lVar21) {
      do {
        uVar12 = (uint)uVar14;
        uVar15 = uVar20;
        if ((int)uVar12 < local_d0.ArrayNum) {
          uVar15 = ~uVar12 >> 0x1f;
        }
        if ((uVar15 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pFVar18 = local_d0.AllocatorInstance.Data + uVar13;
        if ((pTVar23 == (TArray<int,TSizedDefaultAllocator<32>_> *)pFVar18) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x96e,L""), bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        iVar11 = *(int *)(pFVar18 + 8);
        if (iVar11 != 0) {
          iVar10 = UE::Core::Private::
                   ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (4,4,iVar11,&pTVar23->AllocatorInstance,
                              &(pFVar7->OverlapsNegativeSpace).ArrayNum,
                              &(pFVar7->OverlapsNegativeSpace).ArrayMax);
          memcpy((pTVar23->AllocatorInstance).Data + (longlong)iVar10 * 4,*(void **)pFVar18,
                 (longlong)iVar11 << 2);
        }
        uVar14 = (ulonglong)(uVar12 + 1);
        lVar21 = lVar21 + -1;
        uVar13 = uVar13 + 0x10;
      } while (lVar21 != 0);
    }
    DestructItems<TArray<int,TSizedDefaultAllocator<32>_>,int>
              ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d0.AllocatorInstance.Data,
               local_d0.ArrayNum);
    if ((TArray<int,TSizedDefaultAllocator<32>_> *)local_d0.AllocatorInstance.Data !=
        (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
      FMemory::Free(local_d0.AllocatorInstance.Data);
    }
  }
  return;
}

// ApplyToGeo @ 1433876c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::`anonymous_namespace'::FPartialCutResult::ApplyToGeo
          (void *this,
          TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
          *param_1,int param_2,TPlane3<double> *param_3,int *param_4,double param_5,double param_6,
          FSphereCovering *param_7,bool param_8,bool param_9,double param_10)

{
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar1;
  double *pdVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  FConvexPart *pFVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  undefined1 auVar10 [16];
  longlong lVar11;
  TPlane3<double> *pTVar12;
  bool bVar13;
  bool bVar14;
  ushort uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  FConvexPart *this_00;
  FConvexPart *pFVar19;
  TVector<double> *pTVar20;
  uint *puVar21;
  int *piVar22;
  TAxisAlignedBox3<double> *pTVar23;
  ulonglong uVar24;
  uint uVar25;
  ulonglong uVar26;
  longlong lVar27;
  longlong *plVar28;
  uint uVar29;
  uint uVar30;
  int iVar31;
  ulonglong uVar32;
  longlong *plVar33;
  int iVar34;
  uint uVar35;
  FConvexPart **ppFVar36;
  TPlane3<double> *pTVar37;
  TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
  *pTVar38;
  undefined4 uVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  undefined1 auStackY_378 [32];
  undefined1 local_327;
  char local_326;
  longlong *local_320;
  uint local_318;
  uint local_314;
  uint local_310;
  uint local_30c;
  FConvexPart *local_308;
  int local_300;
  TArray<int,TSizedDefaultAllocator<32>_> local_2f8;
  FConvexPart *local_2e8 [2];
  TPlane3<double> *local_2d8;
  uint local_2d0;
  uint local_2cc;
  uint local_2c8;
  uint local_2c4;
  int local_2c0;
  int local_2bc;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  double local_2a8;
  FConvexPart *local_2a0;
  TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
  *local_298;
  FCompactMaps local_290;
  FConvexPart *local_270;
  int local_268 [2];
  uint *local_260;
  FScriptContainerElement *local_258;
  int local_250;
  int local_24c;
  undefined1 local_248 [8];
  undefined1 local_240 [12];
  undefined1 local_234 [20];
  undefined1 local_220 [20];
  undefined8 local_20c;
  undefined8 local_204;
  undefined4 local_1f8;
  undefined8 local_1f4;
  undefined8 local_1ec;
  undefined4 local_1e4;
  uint *local_1d8;
  uint *local_1d0;
  uint *local_1c8;
  uint *local_1c0;
  uint *local_1b8;
  uint *local_1b0;
  uint *local_1a8;
  int *local_1a0;
  uint *local_198;
  int *local_190;
  uint *local_188;
  uint *local_180;
  TIndirectArray<UE::Geometry::FConvexDecomposition3::FConvexPart,TSizedDefaultAllocator<32>_>
  *local_178;
  double *local_170;
  double local_168;
  TVector<double>_u_0 local_158;
  longlong *local_138;
  TPlane3<double> *local_130;
  FConvexPart **local_128;
  double *local_120;
  TVector<double> local_118;
  TAxisAlignedBox3<double> local_100;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_c8;
  ulonglong local_78;
  
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_378;
  pFVar19 = (FConvexPart *)0x0;
  local_260 = (uint *)param_4;
  uVar29 = 0;
  if (param_2 < (param_1->Array).ArrayNum) {
    uVar29 = (uint)~param_2 >> 0x1f;
  }
  local_320 = this;
  local_2d8 = param_3;
  local_298 = param_1;
  if ((uVar29 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  pFVar6 = *(FConvexPart **)((param_1->Array).AllocatorInstance.Data + (longlong)param_2 * 8);
  local_326 = pFVar6->bGeometryVolumeUnreliable;
  local_258 = (pFVar6->OverlapsNegativeSpace).AllocatorInstance.Data;
  (pFVar6->OverlapsNegativeSpace).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_250 = (pFVar6->OverlapsNegativeSpace).ArrayNum;
  local_24c = (pFVar6->OverlapsNegativeSpace).ArrayMax;
  (pFVar6->OverlapsNegativeSpace).ArrayNum = 0;
  (pFVar6->OverlapsNegativeSpace).ArrayMax = 0;
  local_308 = pFVar6;
  this_00 = ::operator_new(0x2e0);
  if (this_00 != (FConvexPart *)0x0) {
    pFVar19 = FConvexDecomposition3::FConvexPart::FConvexPart(this_00);
  }
  pFVar7 = (param_1->Array).AllocatorInstance.Data;
  local_2a0 = pFVar19;
  if (((pFVar7 <= (FScriptContainerElement *)&local_2a0) &&
      ((FScriptContainerElement *)&local_2a0 < pFVar7 + (longlong)(param_1->Array).ArrayMax * 8)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x7a5,
                          L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                         ), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_268[1] = (param_1->Array).ArrayNum;
  piVar22 = &(param_1->Array).ArrayMax;
  if (local_268[1] == *piVar22) {
    local_318 = local_268[1];
    local_268[1] = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,(ForAnyElementType *)param_1,piVar22);
  }
  pFVar7 = (param_1->Array).AllocatorInstance.Data;
  (param_1->Array).ArrayNum = local_268[1] + 1;
  *(FConvexPart **)(pFVar7 + (longlong)local_268[1] * 8) = local_2a0;
  uVar29 = 0;
  if (local_268[1] < (param_1->Array).ArrayNum) {
    uVar29 = (uint)~local_268[1] >> 0x1f;
  }
  local_318 = local_268[1];
  if ((uVar29 == 0) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_270 = *(FConvexPart **)
               ((param_1->Array).AllocatorInstance.Data + (longlong)local_268[1] * 8);
  local_268[0] = param_2;
  if ((*(int *)((longlong)this + 0x38) != *(int *)((longlong)this + 8)) &&
     (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                         ("CrossingEdgeIDs.Num() == CutVertices.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexDecomposition3.cpp"
                          ,0x34a,L""), bVar13)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  local_2f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_2f8.ArrayNum = 0;
  local_2f8.ArrayMax = 0;
  local_300 = (pFVar6->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200 +
              (pFVar6->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed;
  TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&local_2f8,*(int *)((longlong)this + 0x38),Default);
  uVar26 = 0;
  uVar24 = uVar26;
  pFVar19 = pFVar6;
  if (0 < *(int *)((longlong)this + 0x38)) {
    do {
      uVar35 = (uint)uVar26;
      uVar30 = ~uVar35 >> 0x1f;
      uVar29 = 0;
      if ((int)uVar35 < *(int *)((longlong)this + 0x38)) {
        uVar29 = uVar30;
      }
      if ((uVar29 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar29 = *(uint *)(uVar24 + *(longlong *)((longlong)this + 0x30));
      puVar21 = (uint *)(*(longlong *)
                          ((pFVar6->InternalGeo).Edges.Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar29 >> 9) * 8) + (ulonglong)(uVar29 & 0x1ff) * 0x10);
      uVar17 = *puVar21;
      uVar25 = puVar21[1];
      local_220._12_8_ = 0xffffffffffffffff;
      local_20c = 0xffffffffffffffff;
      local_204 = 0xffffffffffffffff;
      local_1f4 = 0xffffffffffffffff;
      local_1ec = 0xffffffffffffffff;
      local_1e4 = 0xffffffff;
      uVar16 = 0;
      if ((int)uVar17 < *(int *)((longlong)this + 0x48)) {
        uVar16 = ~uVar17 >> 0x1f;
      }
      if ((uVar16 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      dVar3 = *(double *)(*(longlong *)((longlong)this + 0x40) + (longlong)(int)uVar17 * 8);
      uVar17 = 0;
      if ((int)uVar25 < *(int *)((longlong)this + 0x48)) {
        uVar17 = ~uVar25 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar13)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar18 = (**(code **)((pFVar6->InternalGeo)._padding_ + 0x30))
                         (pFVar6,uVar29,local_220 + 8,
                          dVar3 / (dVar3 - *(double *)
                                            (*(longlong *)((longlong)this + 0x40) +
                                            (longlong)(int)uVar25 * 8)));
      if (iVar18 == 0) {
        uVar29 = 0;
        if ((int)uVar35 < local_2f8.ArrayNum) {
          uVar29 = uVar30;
        }
        if ((uVar29 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined4 *)(local_2f8.AllocatorInstance.Data + uVar24) = local_1f8;
      }
      else {
        bVar13 = Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<_4359859441479187624>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexDecomposition3.cpp"
                            ,0x358,"SplitResult == EMeshResult::Ok");
        if (bVar13) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        uVar29 = 0;
        if ((int)uVar35 < local_2f8.ArrayNum) {
          uVar29 = uVar30;
        }
        if ((uVar29 == 0) &&
           (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar13)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        *(undefined4 *)(local_2f8.AllocatorInstance.Data + uVar24) = 0xffffffff;
      }
      uVar26 = (ulonglong)(uVar35 + 1);
      param_3 = local_2d8;
      uVar24 = uVar24 + 4;
      pFVar19 = local_308;
    } while ((int)(uVar35 + 1) < *(int *)((longlong)this + 0x38));
  }
  pFVar6 = local_308;
  plVar33 = local_320;
  uVar35 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar29 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar24 = 0;
  if ((param_8 != false) &&
     (iVar18 = (pFVar19->InternalGeo).TriangleRefCounts.RefCounts.CurBlock * 0x200 +
               (local_308->InternalGeo).TriangleRefCounts.RefCounts.CurBlockUsed, uVar26 = uVar24,
     0 < iVar18)) {
    do {
      iVar34 = (int)uVar24;
      if (iVar34 < (int)((pFVar6->InternalGeo).TriangleRefCounts.RefCounts.CurBlock * 0x200 +
                        (pFVar6->InternalGeo).TriangleRefCounts.RefCounts.CurBlockUsed)) {
        uVar32 = (ulonglong)((uint)uVar26 & 0x1ff);
        if ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar6->InternalGeo).TriangleRefCounts.RefCounts.Blocks.
                                  AllocatorInstance.Data + (uVar24 >> 9) * 8) + uVar32 * 2) - 1U) <
            0xfffe) {
          lVar27 = *(longlong *)
                    ((pFVar6->InternalGeo).Triangles.Blocks.AllocatorInstance.Data +
                    (uVar24 >> 9) * 8);
          local_2b8 = *(FConvexPart **)(lVar27 + uVar32 * 0xc);
          uVar30 = *(uint *)(lVar27 + 8 + uVar32 * 0xc);
          lVar27 = (longlong)(int)(uint)local_2b8;
          if ((int)(uint)local_2b8 < (int)plVar33[9]) {
            uVar17 = 0;
            if ((int)(uint)local_2b8 < (int)plVar33[9]) {
              uVar17 = ~(uint)local_2b8 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar4 = *(undefined8 *)(plVar33[8] + lVar27 * 8);
            if (param_5 < (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) & uVar35,
                                           (uint)uVar4 & uVar29)) goto LAB_143387dc3;
          }
          lVar27 = (longlong)(int)local_2b8._4_4_;
          if ((int)local_2b8._4_4_ < (int)plVar33[9]) {
            uVar17 = 0;
            if ((int)local_2b8._4_4_ < (int)plVar33[9]) {
              uVar17 = ~local_2b8._4_4_ >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar4 = *(undefined8 *)(plVar33[8] + lVar27 * 8);
            if (param_5 < (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) & uVar35,
                                           (uint)uVar4 & uVar29)) goto LAB_143387dc3;
          }
          if ((int)uVar30 < (int)plVar33[9]) {
            uVar17 = 0;
            if ((int)uVar30 < (int)plVar33[9]) {
              uVar17 = ~uVar30 >> 0x1f;
            }
            if ((uVar17 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar4 = *(undefined8 *)(plVar33[8] + (longlong)(int)uVar30 * 8);
            if (param_5 < (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) & uVar35,
                                           (uint)uVar4 & uVar29)) goto LAB_143387dc3;
          }
          FDynamicMesh3::RemoveTriangle(&pFVar6->InternalGeo,iVar34,true,false);
        }
      }
LAB_143387dc3:
      uVar24 = (ulonglong)(iVar34 + 1U);
      param_3 = local_2d8;
      uVar26 = uVar26 + 1;
    } while ((int)(iVar34 + 1U) < iVar18);
  }
  pFVar6 = local_270;
  pFVar19 = local_308;
  bVar13 = param_8;
  FDynamicMesh3::operator=(&local_270->InternalGeo,&local_308->InternalGeo);
  uVar24 = 0;
  local_2e8[1] = pFVar6;
  local_2e8[0] = pFVar19;
  lVar27 = local_320[9];
  plVar33 = local_320;
  if (0 < (longlong)(int)lVar27) {
    uVar30 = (uint)__xmm_80000000000000008000000000000000;
    uVar26 = (ulonglong)__xmm_80000000000000008000000000000000 >> 0x20;
    uVar32 = uVar24;
    do {
      uVar25 = (uint)uVar24;
      uVar17 = 0;
      if ((int)uVar25 < (int)plVar33[9]) {
        uVar17 = ~uVar25 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         plVar33 = local_320, bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      dVar3 = *(double *)(plVar33[8] + uVar32 * 8);
      if (((((param_5 < dVar3) && (-1 < (int)uVar25)) &&
           ((int)uVar25 <
            (int)((local_2e8[0]->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200 +
                 (local_2e8[0]->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed))) &&
          (pFVar19 = local_2e8[0],
          (ushort)(*(short *)(*(longlong *)
                               ((local_2e8[0]->InternalGeo).VertexRefCounts.RefCounts.Blocks.
                                AllocatorInstance.Data + (uVar24 >> 9) * 8) +
                             (ulonglong)(uVar25 & 0x1ff) * 2) - 1U) < 0xfffe)) ||
         (((dVar3 < (double)CONCAT44((uint)((ulonglong)param_5 >> 0x20) ^ (uint)uVar26,
                                     SUB84(param_5,0) ^ uVar30) && (-1 < (int)uVar25)) &&
          (((int)uVar25 <
            (int)((local_2e8[1]->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200 +
                 (local_2e8[1]->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed) &&
           (pFVar19 = local_2e8[1],
           (ushort)(*(short *)(*(longlong *)
                                ((local_2e8[1]->InternalGeo).VertexRefCounts.RefCounts.Blocks.
                                 AllocatorInstance.Data + (uVar24 >> 9) * 8) +
                              (ulonglong)(uVar25 & 0x1ff) * 2) - 1U) < 0xfffe)))))) {
        FDynamicMesh3::RemoveVertex(&pFVar19->InternalGeo,uVar25,false);
        plVar33 = local_320;
      }
      uVar24 = (ulonglong)(uVar25 + 1);
      uVar32 = uVar32 + 1;
    } while ((longlong)uVar32 < (longlong)(int)lVar27);
  }
  iVar18 = 0;
  if (bVar13 == false) {
    ppFVar36 = local_2e8;
    do {
      uVar26 = 0;
      iVar34 = ((*ppFVar36)->InternalGeo).TriangleRefCounts.RefCounts.CurBlock * 0x200 +
               ((*ppFVar36)->InternalGeo).TriangleRefCounts.RefCounts.CurBlockUsed;
      uVar24 = uVar26;
      if (0 < iVar34) {
        do {
          pFVar19 = *ppFVar36;
          iVar31 = (int)uVar26;
          if (iVar31 < (int)((pFVar19->InternalGeo).TriangleRefCounts.RefCounts.CurBlock * 0x200 +
                            (pFVar19->InternalGeo).TriangleRefCounts.RefCounts.CurBlockUsed)) {
            uVar32 = (ulonglong)((uint)uVar24 & 0x1ff);
            if ((ushort)(*(short *)(*(longlong *)
                                     ((pFVar19->InternalGeo).TriangleRefCounts.RefCounts.Blocks.
                                      AllocatorInstance.Data + (uVar26 >> 9) * 8) + uVar32 * 2) - 1U
                        ) < 0xfffe) {
              lVar27 = *(longlong *)
                        ((pFVar19->InternalGeo).Triangles.Blocks.AllocatorInstance.Data +
                        (uVar26 >> 9) * 8);
              local_2b8 = *(FConvexPart **)(lVar27 + uVar32 * 0xc);
              uVar30 = *(uint *)(lVar27 + 8 + uVar32 * 0xc);
              uVar4 = local_2b8;
              lVar27 = (longlong)(int)(uint)local_2b8;
              if ((int)(uint)local_2b8 < (int)plVar33[9]) {
                uVar17 = 0;
                if ((int)(uint)local_2b8 < (int)plVar33[9]) {
                  uVar17 = ~(uint)local_2b8 >> 0x1f;
                }
                local_2b8 = (FConvexPart *)uVar4;
                if ((uVar17 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar5 = *(undefined8 *)(local_320[8] + lVar27 * 8);
                uVar4 = local_2b8;
                if (param_5 < (double)CONCAT44((uint)((ulonglong)uVar5 >> 0x20) & uVar35,
                                               (uint)uVar5 & uVar29)) goto LAB_1433881a0;
              }
              local_2b8 = (FConvexPart *)uVar4;
              lVar27 = (longlong)(int)local_2b8._4_4_;
              if ((int)local_2b8._4_4_ < (int)local_320[9]) {
                uVar17 = 0;
                if ((int)local_2b8._4_4_ < (int)local_320[9]) {
                  uVar17 = ~local_2b8._4_4_ >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar4 = *(undefined8 *)(local_320[8] + lVar27 * 8);
                if (param_5 < (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) & uVar35,
                                               (uint)uVar4 & uVar29)) goto LAB_1433881a0;
              }
              plVar33 = local_320;
              if ((int)uVar30 < (int)local_320[9]) {
                uVar17 = 0;
                if ((int)uVar30 < (int)local_320[9]) {
                  uVar17 = ~uVar30 >> 0x1f;
                }
                if ((uVar17 == 0) &&
                   (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar13)) {
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
                uVar4 = *(undefined8 *)(plVar33[8] + (longlong)(int)uVar30 * 8);
                if (param_5 < (double)CONCAT44((uint)((ulonglong)uVar4 >> 0x20) & uVar35,
                                               (uint)uVar4 & uVar29)) goto LAB_1433881a0;
              }
              pTVar20 = FDynamicMesh3::GetTriNormal(&(*ppFVar36)->InternalGeo,&local_118,iVar31);
              if (0.0 < (pTVar20->field0_0x0)._s_0.Y * (local_2d8->Normal).field0_0x0._s_0.Y +
                        (pTVar20->field0_0x0)._s_0.X * (local_2d8->Normal).field0_0x0._s_0.X +
                        (pTVar20->field0_0x0)._s_0.Z * (local_2d8->Normal).field0_0x0._s_0.Z !=
                  (iVar18 != 0)) {
                FDynamicMesh3::RemoveTriangle(&(*ppFVar36)->InternalGeo,iVar31,true,false);
              }
            }
          }
LAB_1433881a0:
          uVar26 = (ulonglong)(iVar31 + 1U);
          plVar33 = local_320;
          uVar24 = uVar24 + 1;
        } while ((int)(iVar31 + 1U) < iVar34);
      }
      iVar18 = iVar18 + 1;
      ppFVar36 = ppFVar36 + 1;
      plVar33 = local_320;
      param_3 = local_2d8;
    } while (iVar18 < 2);
  }
  ppFVar36 = local_2e8;
  lVar27 = 2;
  do {
    uVar26 = 0;
    iVar18 = ((*ppFVar36)->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200 +
             ((*ppFVar36)->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed;
    uVar24 = uVar26;
    if (0 < iVar18) {
      do {
        pFVar19 = *ppFVar36;
        uVar29 = (pFVar19->InternalGeo).VertexRefCounts.RefCounts.CurBlock;
        iVar34 = (int)uVar26;
        if (iVar34 < (int)(uVar29 * 0x200 +
                          (pFVar19->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed)) {
          uVar32 = (ulonglong)((uint)uVar24 & 0x1ff);
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar19->InternalGeo).VertexRefCounts.RefCounts.Blocks.
                                    AllocatorInstance.Data + (uVar26 >> 9) * 8) + uVar32 * 2) - 1U)
              < 0xfffe) {
            if (iVar34 < (int)(uVar29 * 0x200 +
                              (pFVar19->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed)) {
              uVar15 = *(ushort *)
                        (*(longlong *)
                          ((pFVar19->InternalGeo).VertexRefCounts.RefCounts.Blocks.AllocatorInstance
                           .Data + (uVar26 >> 9) * 8) + uVar32 * 2);
              if (uVar15 == 0xffff) {
                uVar15 = 0;
              }
              if (1 < uVar15) goto LAB_143388271;
            }
            FDynamicMesh3::RemoveVertex(&pFVar19->InternalGeo,iVar34,false);
          }
        }
LAB_143388271:
        uVar26 = (ulonglong)(iVar34 + 1U);
        uVar24 = uVar24 + 1;
      } while ((int)(iVar34 + 1U) < iVar18);
    }
    plVar33 = local_320;
    ppFVar36 = ppFVar36 + 1;
    lVar27 = lVar27 + -1;
  } while (lVar27 != 0);
  local_128 = local_2e8;
  local_120 = &param_5;
  local_138 = local_320;
  local_130 = param_3;
  if (param_8 != false) {
    bVar14 = `UE::Geometry::`anonymous_namespace'::FPartialCutResult::ApplyToGeo'::__l2::<lambda_1>
             ::operator()(&local_138);
    bVar13 = false;
    if (bVar14) goto LAB_1433882d7;
  }
  bVar13 = true;
LAB_1433882d7:
  dVar3 = __real_3ff0000000000000;
  uVar35 = 0;
  local_170 = &param_6;
  local_168 = param_10;
  local_178 = local_298;
  *local_260 = local_318;
  pTVar38 = local_298;
  uVar29 = local_318;
  do {
    pFVar19 = local_270;
    if (uVar35 == 0) {
      pFVar19 = local_308;
    }
    local_2b8 = pFVar19;
    uVar30 = *(uint *)(plVar33 + (longlong)(int)uVar35 * 2 + 0xb);
    if ((int)uVar30 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar30);
    }
    piVar22 = &(pFVar19->HullTriangles).ArrayMax;
    if (*piVar22 < (int)uVar30) {
      (pFVar19->HullTriangles).ArrayNum = 0;
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,uVar30,&(pFVar19->HullTriangles).AllocatorInstance,0,piVar22);
    }
    (pFVar19->HullTriangles).ArrayNum = 0;
    if (*piVar22 < 0) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,&(pFVar19->HullTriangles).AllocatorInstance,0,piVar22);
    }
    if ((param_9 == false) ||
       (iVar18 = `UE::Geometry::`anonymous_namespace'::FPartialCutResult::ApplyToGeo'::__l2::
                 <lambda_2>::operator()(&local_178,local_268[uVar35]), iVar18 < 2)) {
      local_290.VertMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_290.VertMap.ArrayNum = 0;
      local_290.VertMap.ArrayMax = 0;
      local_290.TriMap.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_290.TriMap.ArrayNum = 0;
      local_290.TriMap.ArrayMax = 0;
      FDynamicMesh3::CompactInPlace(&local_2e8[uVar35]->InternalGeo,&local_290);
      lVar27 = (ulonglong)uVar35 + 5;
      local_c8.Elements._0_8_ = 0;
      local_c8.Elements._8_8_ = 0;
      local_c8.Elements._32_8_ = 0;
      local_c8.Elements._40_4_ = 0;
      local_c8.Elements._44_4_ = 0x80;
      local_c8.Elements._48_4_ = 0xffffffff;
      local_c8.Elements._52_4_ = 0;
      local_c8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_c8.HashSize = 0;
      uVar24 = (ulonglong)(int)plVar33[lVar27 * 2 + 1];
      pTVar37 = (TPlane3<double> *)plVar33[lVar27 * 2];
      local_320 = (longlong *)CONCAT44(local_320._4_4_,(int)plVar33[lVar27 * 2 + 1]);
      local_2d8 = (TPlane3<double> *)((longlong)&(pTVar37->Normal).field0_0x0 + uVar24 * 0xc);
      while( true ) {
        pTVar12 = local_2d8;
        uVar26 = 0;
        if ((int)plVar33[lVar27 * 2 + 1] != (int)uVar24) {
          local_327 = 0;
          `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_327);
        }
        pFVar19 = local_2b8;
        if (pTVar37 == pTVar12) break;
        iVar18 = *(int *)&(pTVar37->Normal).field0_0x0;
        if (iVar18 < local_300) {
          uVar29 = FCompactMaps::GetVertexMapping(&local_290,iVar18);
          if ((0x7fffffff < uVar29) &&
             (bVar14 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_4359859441479187234>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexDecomposition3.cpp"
                                  ,0x4de,"Idx > -1"), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else {
          uVar29 = iVar18 - local_300;
          lVar11 = plVar33[1];
          local_314 = uVar29;
          if ((int)uVar29 < (int)lVar11) {
            uVar30 = 0;
            if ((int)uVar29 < local_2f8.ArrayNum) {
              uVar30 = ~uVar29 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar30 = local_314;
            if (*(int *)(local_2f8.AllocatorInstance.Data + (longlong)(int)uVar29 * 4) == -1) {
              puVar21 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                ::Find((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                        *)&local_c8,local_314);
              if (puVar21 != (uint *)0x0) goto LAB_143388642;
              pFVar19 = local_2e8[uVar35];
              uVar29 = 0;
              if ((int)uVar30 < (int)plVar33[1]) {
                uVar29 = ~uVar30 >> 0x1f;
              }
              if ((uVar29 == 0) &&
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
              local_2cc = FDynamicMesh3::AppendVertex
                                    (&pFVar19->InternalGeo,
                                     (TVector<double> *)(*plVar33 + (longlong)(int)uVar30 * 0x18));
              local_1d8 = &local_314;
              local_1d0 = &local_2cc;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        (&local_c8,(TPairInitializer<int_const_&,int_const_&> *)local_220,
                         (bool *)&local_1d8);
              uVar29 = local_2cc;
            }
            else {
              uVar29 = FCompactMaps::GetVertexMapping
                                 (&local_290,
                                  *(int *)(local_2f8.AllocatorInstance.Data +
                                          (longlong)(int)uVar29 * 4));
            }
          }
          else {
            puVar21 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                              ::Find((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                      *)&local_c8,uVar29);
            if (puVar21 == (uint *)0x0) {
              uVar29 = uVar29 - (int)lVar11;
              pFVar19 = local_2e8[uVar35];
              lVar11 = (ulonglong)uVar35 + 1;
              uVar30 = 0;
              if ((int)uVar29 < (int)plVar33[lVar11 * 2 + 1]) {
                uVar30 = ~uVar29 >> 0x1f;
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
              local_2d0 = FDynamicMesh3::AppendVertex
                                    (&pFVar19->InternalGeo,
                                     (TVector<double> *)
                                     (plVar33[lVar11 * 2] + (longlong)(int)uVar29 * 0x18));
              local_188 = &local_314;
              local_180 = &local_2d0;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        (&local_c8,(TPairInitializer<int_const_&,int_const_&> *)local_234,
                         (bool *)&local_188);
              uVar29 = local_2d0;
            }
            else {
LAB_143388642:
              uVar29 = *puVar21;
            }
          }
        }
        *(uint *)&(pTVar37->Normal).field0_0x0 = uVar29;
        iVar18 = *(int *)((longlong)&(pTVar37->Normal).field0_0x0 + 4);
        if (iVar18 < local_300) {
          uVar29 = FCompactMaps::GetVertexMapping(&local_290,iVar18);
          if ((0x7fffffff < uVar29) &&
             (bVar14 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_4359859441479187234>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexDecomposition3.cpp"
                                  ,0x4de,"Idx > -1"), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        else {
          uVar29 = iVar18 - local_300;
          lVar11 = plVar33[1];
          local_310 = uVar29;
          if ((int)uVar29 < (int)lVar11) {
            uVar30 = 0;
            if ((int)uVar29 < local_2f8.ArrayNum) {
              uVar30 = ~uVar29 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar30 = local_310;
            if (*(int *)(local_2f8.AllocatorInstance.Data + (longlong)(int)uVar29 * 4) == -1) {
              puVar21 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                ::Find((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                        *)&local_c8,local_310);
              if (puVar21 != (uint *)0x0) goto LAB_14338889d;
              pFVar19 = local_2e8[uVar35];
              uVar29 = 0;
              if ((int)uVar30 < (int)plVar33[1]) {
                uVar29 = ~uVar30 >> 0x1f;
              }
              if ((uVar29 == 0) &&
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
              local_2c4 = FDynamicMesh3::AppendVertex
                                    (&pFVar19->InternalGeo,
                                     (TVector<double> *)(*plVar33 + (longlong)(int)uVar30 * 0x18));
              local_1b8 = &local_310;
              local_1b0 = &local_2c4;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        (&local_c8,(TPairInitializer<int_const_&,int_const_&> *)local_248,
                         (bool *)&local_1b8);
              uVar29 = local_2c4;
            }
            else {
              uVar29 = FCompactMaps::GetVertexMapping
                                 (&local_290,
                                  *(int *)(local_2f8.AllocatorInstance.Data +
                                          (longlong)(int)uVar29 * 4));
            }
          }
          else {
            puVar21 = (uint *)TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                              ::Find((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                      *)&local_c8,uVar29);
            if (puVar21 == (uint *)0x0) {
              uVar29 = uVar29 - (int)lVar11;
              pFVar19 = local_2e8[uVar35];
              lVar11 = (ulonglong)uVar35 + 1;
              uVar30 = 0;
              if ((int)uVar29 < (int)plVar33[lVar11 * 2 + 1]) {
                uVar30 = ~uVar29 >> 0x1f;
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
              local_2c8 = FDynamicMesh3::AppendVertex
                                    (&pFVar19->InternalGeo,
                                     (TVector<double> *)
                                     (plVar33[lVar11 * 2] + (longlong)(int)uVar29 * 0x18));
              local_1c8 = &local_310;
              local_1c0 = &local_2c8;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        (&local_c8,(TPairInitializer<int_const_&,int_const_&> *)(local_240 + 4),
                         (bool *)&local_1c8);
              uVar29 = local_2c8;
            }
            else {
LAB_14338889d:
              uVar29 = *puVar21;
            }
          }
        }
        *(uint *)((longlong)&(pTVar37->Normal).field0_0x0 + 4) = uVar29;
        iVar18 = *(int *)((longlong)&(pTVar37->Normal).field0_0x0 + 8);
        if (iVar18 < local_300) {
          uVar29 = FCompactMaps::GetVertexMapping(&local_290,iVar18);
          if ((0x7fffffff < uVar29) &&
             (bVar14 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_4359859441479187234>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\CompGeom\\ConvexDecomposition3.cpp"
                                  ,0x4de,"Idx > -1"), bVar14)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          uVar24 = (ulonglong)local_320 & 0xffffffff;
          *(uint *)((longlong)&(pTVar37->Normal).field0_0x0 + 8) = uVar29;
          pTVar37 = (TPlane3<double> *)((longlong)&(pTVar37->Normal).field0_0x0 + 0xc);
        }
        else {
          uVar29 = iVar18 - local_300;
          lVar11 = plVar33[1];
          local_30c = uVar29;
          if ((int)uVar29 < (int)lVar11) {
            uVar30 = 0;
            if ((int)uVar29 < local_2f8.ArrayNum) {
              uVar30 = ~uVar29 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar30 = local_30c;
            if (*(int *)(local_2f8.AllocatorInstance.Data + (longlong)(int)uVar29 * 4) == -1) {
              piVar22 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                        ::Find((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                *)&local_c8,local_30c);
              if (piVar22 == (int *)0x0) {
                pFVar19 = local_2e8[uVar35];
                uVar29 = 0;
                if ((int)uVar30 < (int)plVar33[1]) {
                  uVar29 = ~uVar30 >> 0x1f;
                }
                if ((uVar29 == 0) &&
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
                local_2bc = FDynamicMesh3::AppendVertex
                                      (&pFVar19->InternalGeo,
                                       (TVector<double> *)(*plVar33 + (longlong)(int)uVar30 * 0x18))
                ;
                local_198 = &local_30c;
                local_190 = &local_2bc;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Emplace<TPairInitializer<int_const_&,int_const_&>_>
                          (&local_c8,(TPairInitializer<int_const_&,int_const_&> *)local_240,
                           (bool *)&local_198);
                uVar24 = (ulonglong)local_320 & 0xffffffff;
                *(int *)((longlong)&(pTVar37->Normal).field0_0x0 + 8) = local_2bc;
                pTVar37 = (TPlane3<double> *)((longlong)&(pTVar37->Normal).field0_0x0 + 0xc);
              }
              else {
                uVar24 = (ulonglong)local_320 & 0xffffffff;
                *(int *)((longlong)&(pTVar37->Normal).field0_0x0 + 8) = *piVar22;
                pTVar37 = (TPlane3<double> *)((longlong)&(pTVar37->Normal).field0_0x0 + 0xc);
              }
            }
            else {
              iVar18 = FCompactMaps::GetVertexMapping
                                 (&local_290,
                                  *(int *)(local_2f8.AllocatorInstance.Data +
                                          (longlong)(int)uVar29 * 4));
              uVar24 = (ulonglong)local_320 & 0xffffffff;
              *(int *)((longlong)&(pTVar37->Normal).field0_0x0 + 8) = iVar18;
              pTVar37 = (TPlane3<double> *)((longlong)&(pTVar37->Normal).field0_0x0 + 0xc);
            }
          }
          else {
            piVar22 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                      ::Find((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                              *)&local_c8,uVar29);
            if (piVar22 == (int *)0x0) {
              uVar29 = uVar29 - (int)lVar11;
              pFVar19 = local_2e8[uVar35];
              lVar11 = (ulonglong)uVar35 + 1;
              uVar30 = 0;
              if ((int)uVar29 < (int)plVar33[lVar11 * 2 + 1]) {
                uVar30 = ~uVar29 >> 0x1f;
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
              local_2c0 = FDynamicMesh3::AppendVertex
                                    (&pFVar19->InternalGeo,
                                     (TVector<double> *)
                                     (plVar33[lVar11 * 2] + (longlong)(int)uVar29 * 0x18));
              local_1a8 = &local_30c;
              local_1a0 = &local_2c0;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        (&local_c8,(TPairInitializer<int_const_&,int_const_&> *)(local_248 + 4),
                         (bool *)&local_1a8);
              uVar24 = (ulonglong)local_320 & 0xffffffff;
              *(int *)((longlong)&(pTVar37->Normal).field0_0x0 + 8) = local_2c0;
              pTVar37 = (TPlane3<double> *)((longlong)&(pTVar37->Normal).field0_0x0 + 0xc);
            }
            else {
              uVar24 = (ulonglong)local_320 & 0xffffffff;
              *(int *)((longlong)&(pTVar37->Normal).field0_0x0 + 8) = *piVar22;
              pTVar37 = (TPlane3<double> *)((longlong)&(pTVar37->Normal).field0_0x0 + 0xc);
            }
          }
        }
      }
      plVar28 = plVar33 + ((ulonglong)uVar35 + 5) * 2;
      pTVar1 = &local_2b8->HullTriangles;
      if (pTVar1 != (TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *)plVar28) {
        pFVar7 = (pTVar1->AllocatorInstance).Data;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
        (pTVar1->AllocatorInstance).Data = (FScriptContainerElement *)*plVar28;
        *plVar28 = 0;
        (pFVar19->HullTriangles).ArrayNum = (int)plVar28[1];
        (pFVar19->HullTriangles).ArrayMax = *(int *)((longlong)plVar28 + 0xc);
        plVar28[1] = 0;
      }
      FConvexDecomposition3::FConvexPart::ComputeHullPlanes(pFVar19);
      uVar39 = 0;
      uVar40 = 0;
      uVar41 = 0;
      uVar42 = 0;
      dVar46 = 0.0;
      iVar18 = (pFVar19->InternalGeo).VertexRefCounts.RefCounts.CurBlockUsed +
               (pFVar19->InternalGeo).VertexRefCounts.RefCounts.CurBlock * 0x200;
      local_2a8 = 0.0;
      local_2b8 = (FConvexPart *)0x0;
      uStack_2b0 = 0;
      if (iVar18 < 1) {
        dVar43 = 0.0;
        dVar45 = 0.0;
      }
      else {
        dVar43 = 0.0;
        dVar45 = 0.0;
        uVar24 = uVar26;
        do {
          uVar32 = (ulonglong)((uint)uVar24 & 0x1ff);
          if ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar19->InternalGeo).VertexRefCounts.RefCounts.Blocks.
                                    AllocatorInstance.Data + (uVar26 >> 9) * 8) + uVar32 * 2) - 1U)
              < 0xfffe) {
            lVar27 = *(longlong *)
                      ((pFVar19->InternalGeo).Vertices.Blocks.AllocatorInstance.Data +
                      (uVar26 >> 9) * 8);
            pdVar2 = (double *)(lVar27 + uVar32 * 0x18);
            dVar45 = dVar45 + *pdVar2;
            dVar46 = dVar46 + *(double *)(lVar27 + 0x10 + uVar32 * 0x18);
            dVar43 = dVar43 + pdVar2[1];
          }
          uVar29 = (int)uVar26 + 1;
          uVar26 = (ulonglong)uVar29;
          uVar24 = uVar24 + 1;
        } while ((int)uVar29 < iVar18);
        uVar39 = SUB84(dVar45,0);
        uVar40 = (undefined4)((ulonglong)dVar45 >> 0x20);
        uVar41 = SUB84(dVar43,0);
        uVar42 = (undefined4)((ulonglong)dVar43 >> 0x20);
        local_2a8 = dVar46;
      }
      dVar44 = (double)CONCAT44(uVar42,uVar41);
      dVar46 = (double)CONCAT44(uVar40,uVar39);
      iVar18 = (pFVar19->InternalGeo).VertexRefCounts.UsedCount;
      if (0 < iVar18) {
        dVar9 = dVar3 / (double)iVar18;
        dVar46 = dVar45 * dVar9;
        dVar44 = dVar43 * dVar9;
        local_2a8 = local_2a8 * dVar9;
      }
      uVar39 = (undefined4)((ulonglong)dVar44 >> 0x20);
      auVar10._8_4_ = SUB84(dVar44,0);
      auVar10._0_8_ = dVar46;
      auVar10._12_4_ = uVar39;
      *(undefined1 (*) [16])&(pFVar19->GeoCenter).field0_0x0 = auVar10;
      local_158._8_4_ = SUB84(dVar44,0);
      local_158._0_8_ = dVar46;
      local_158._12_4_ = uVar39;
      (pFVar19->GeoCenter).field0_0x0._s_0.Z = local_2a8;
      local_158._s_0.Z = local_2a8;
      dVar46 = GetVolumeUsingReferencePoint<UE::Geometry::FDynamicMesh3>
                         (&pFVar19->InternalGeo,(TVector<double> *)&local_158._s_0,dVar3);
      pFVar19->GeoVolume = dVar46;
      if (dVar46 < 0.0) {
        pFVar19->bGeometryVolumeUnreliable = true;
        pFVar19->GeoVolume = 0.0;
      }
      pFVar19->HullVolume = (double)plVar33[(ulonglong)uVar35 + 0xe];
      pTVar23 = FDynamicMesh3::GetBounds(&pFVar19->InternalGeo,&local_100,false);
      dVar46 = (pTVar23->Min).field0_0x0._s_0.Y;
      (pFVar19->Bounds).Min.field0_0x0._s_0.X = (pTVar23->Min).field0_0x0._s_0.X;
      (pFVar19->Bounds).Min.field0_0x0._s_0.Y = dVar46;
      dVar46 = (pTVar23->Max).field0_0x0._s_0.X;
      (pFVar19->Bounds).Min.field0_0x0._s_0.Z = (pTVar23->Min).field0_0x0._s_0.Z;
      (pFVar19->Bounds).Max.field0_0x0._s_0.X = dVar46;
      dVar46 = pFVar19->HullVolume;
      dVar45 = (pTVar23->Max).field0_0x0._s_0.Z;
      local_c8.HashSize = 0;
      dVar43 = pFVar19->GeoVolume;
      (pFVar19->Bounds).Max.field0_0x0._s_0.Y = (pTVar23->Max).field0_0x0._s_0.Y;
      (pFVar19->Bounds).Max.field0_0x0._s_0.Z = dVar45;
      pFVar19->HullError = dVar46 - dVar43;
      if (local_c8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_c8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_c8.Elements);
      if (local_290.TriMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.TriMap.AllocatorInstance.Data);
      }
      pTVar38 = local_298;
      uVar29 = local_318;
      if (local_290.VertMap.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.VertMap.AllocatorInstance.Data);
        pTVar38 = local_298;
        uVar29 = local_318;
      }
    }
    else if (uVar35 == 0) {
      iVar18 = (pTVar38->Array).ArrayNum;
      uVar30 = iVar18 - 1;
      if ((((int)uVar29 < 0) || ((int)uVar30 < 0)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(FirstIndexToSwap >= 0) && (SecondIndexToSwap >= 0)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0xce6,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      iVar34 = (pTVar38->Array).ArrayNum;
      if (((iVar34 <= (int)uVar29) || (iVar34 <= (int)uVar30)) &&
         (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                             ("(ArrayNum > FirstIndexToSwap) && (ArrayNum > SecondIndexToSwap)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0xce7,L""), bVar14)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if (uVar29 != uVar30) {
        pFVar7 = (pTVar38->Array).AllocatorInstance.Data;
        uVar4 = *(undefined8 *)(pFVar7 + (longlong)(int)uVar29 * 8);
        *(undefined8 *)(pFVar7 + (longlong)(int)uVar29 * 8) =
             *(undefined8 *)(pFVar7 + (longlong)iVar18 * 8 + -8);
        *(undefined8 *)(pFVar7 + (longlong)iVar18 * 8 + -8) = uVar4;
      }
      *local_260 = uVar30;
      uVar29 = uVar30;
      local_318 = uVar30;
    }
    uVar35 = uVar35 + 1;
    if (1 < (int)uVar35) {
      if ((local_326 != '\0') || (bVar13)) {
        local_308->bGeometryVolumeUnreliable = true;
        iVar18 = (pTVar38->Array).ArrayNum;
        if ((int)uVar29 < iVar18) {
          lVar27 = (longlong)(int)uVar29 * 8;
          uVar35 = uVar29;
          do {
            uVar30 = 0;
            if ((int)uVar35 < iVar18) {
              uVar30 = ~uVar35 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar35 = uVar35 + 1;
            pFVar7 = (pTVar38->Array).AllocatorInstance.Data + lVar27;
            lVar27 = lVar27 + 8;
            *(undefined1 *)(*(longlong *)pFVar7 + 0x2c8) = 1;
            iVar18 = (pTVar38->Array).ArrayNum;
          } while ((int)uVar35 < iVar18);
        }
      }
      if ((0 < (param_7->Position).ArrayNum) && (local_250 != 0)) {
        local_234._4_8_ = param_7;
        local_234._12_8_ = &local_258;
        `UE::Geometry::`anonymous_namespace'::FPartialCutResult::ApplyToGeo'::__l85::<lambda_4>::
        operator()(local_234 + 4,local_308);
        iVar18 = (pTVar38->Array).ArrayNum;
        if ((int)uVar29 < iVar18) {
          lVar27 = (longlong)(int)uVar29 * 8;
          do {
            uVar35 = 0;
            if ((int)uVar29 < iVar18) {
              uVar35 = ~uVar29 >> 0x1f;
            }
            if ((uVar35 == 0) &&
               (bVar13 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar13)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            `UE::Geometry::`anonymous_namespace'::FPartialCutResult::ApplyToGeo'::__l85::<lambda_4>
            ::operator()(local_234 + 4,
                         *(FConvexPart **)((pTVar38->Array).AllocatorInstance.Data + lVar27));
            iVar18 = (pTVar38->Array).ArrayNum;
            uVar29 = uVar29 + 1;
            lVar27 = lVar27 + 8;
          } while ((int)uVar29 < iVar18);
        }
      }
      if (local_2f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_2f8.AllocatorInstance.Data);
      }
      if (local_258 != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258);
      }
      return;
    }
  } while( true );
}

