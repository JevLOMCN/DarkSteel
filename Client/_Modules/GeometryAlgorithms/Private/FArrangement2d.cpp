// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryAlgorithms
// Functions: 6

// AttemptTriangulate @ 14950c120

bool __thiscall
UE::Geometry::FArrangement2d::AttemptTriangulate
          (FArrangement2d *this,
          TArray<UE::Math::TIntVector3<int>,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_38;
  
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  bVar8 = TriangulateInternal(this,&local_38,true,param_3,false,-1,true,param_2);
  iVar7 = local_38.ArrayNum;
  uVar13 = (ulonglong)local_38.ArrayNum;
  piVar1 = &param_1->ArrayNum;
  iVar11 = *piVar1;
  if (iVar11 < local_38.ArrayNum) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,local_38.ArrayNum - iVar11,&param_1->AllocatorInstance,piVar1,
               &param_1->ArrayMax);
  }
  else {
    if (local_38.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum(local_38._8_8_ & 0xffffffff);
    }
    uVar14 = uVar13;
    if (iVar11 <= local_38.ArrayNum) goto LAB_14950c256;
    uVar16 = iVar11 - local_38.ArrayNum;
    if ((int)(local_38.ArrayNum | uVar16) < 0) {
      bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x458,
                         L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                        );
      if (bVar9) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      uVar14 = local_38._8_8_ & 0xffffffff;
    }
    if (uVar16 == 0) goto LAB_14950c256;
    pFVar5 = (param_1->AllocatorInstance).Data + uVar13 * 0xc;
    iVar11 = (*piVar1 - iVar7) - uVar16;
    if (iVar11 != 0) {
      memmove(pFVar5,pFVar5 + (longlong)(int)uVar16 * 0xc,(longlong)iVar11 * 0xc);
    }
    *piVar1 = *piVar1 - uVar16;
    Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,&param_1->AllocatorInstance,*piVar1,&param_1->ArrayMax);
  }
  uVar14 = local_38._8_8_ & 0xffffffff;
LAB_14950c256:
  uVar16 = 0;
  if (0 < (int)uVar14) {
    lVar15 = 0;
    do {
      uVar12 = 0;
      if ((int)uVar16 < (int)uVar14) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      uVar2 = *(undefined4 *)(local_38.AllocatorInstance.Data + lVar15);
      uVar3 = *(undefined4 *)(local_38.AllocatorInstance.Data + lVar15 + 4);
      uVar4 = *(undefined4 *)(local_38.AllocatorInstance.Data + lVar15 + 8);
      uVar12 = 0;
      if ((int)uVar16 < param_1->ArrayNum) {
        uVar12 = ~uVar16 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar6 = (code *)swi(3);
        uVar10 = (*pcVar6)();
        return (bool)uVar10;
      }
      pFVar5 = (param_1->AllocatorInstance).Data;
      uVar16 = uVar16 + 1;
      *(undefined4 *)(pFVar5 + lVar15) = uVar2;
      *(undefined4 *)(pFVar5 + lVar15 + 4) = uVar3;
      *(undefined4 *)(pFVar5 + lVar15 + 8) = uVar4;
      lVar15 = lVar15 + 0xc;
      uVar14 = local_38._8_8_ & 0xffffffff;
    } while ((int)uVar16 < local_38.ArrayNum);
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return bVar8;
}

// AttemptTriangulate @ 14950c390

bool __thiscall
UE::Geometry::FArrangement2d::AttemptTriangulate
          (FArrangement2d *this,TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = TriangulateInternal(this,param_1,true,param_3,false,-1,true,param_2);
  return bVar1;
}

// Triangulate @ 14952b8e0

bool __thiscall
UE::Geometry::FArrangement2d::Triangulate
          (FArrangement2d *this,TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1)

{
  bool bVar1;
  
  bVar1 = TriangulateInternal(this,param_1,false,-1,false,-1,false,
                              (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
  return bVar1;
}

// TriangulateInternal @ 14952b920

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FArrangement2d::TriangulateInternal
          (FArrangement2d *this,TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          bool param_2,int param_3,bool param_4,int param_5,bool param_6,
          TArray<int,TSizedDefaultAllocator<32>_> *param_7)

{
  undefined8 uVar1;
  FIndex2i *pFVar2;
  short sVar3;
  FScriptContainerElement *pFVar4;
  undefined8 *puVar5;
  code *pcVar6;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar7;
  bool bVar8;
  undefined1 uVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  longlong lVar22;
  char cVar23;
  uint uVar24;
  ulonglong unaff_RDI;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *pTVar25;
  uint uVar26;
  ulonglong uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined1 local_246 [2];
  uint local_244;
  ForAnyElementType local_240;
  uint local_238;
  uint local_234;
  uint local_230 [2];
  ForAnyElementType local_228;
  undefined8 local_220;
  TArray<int,TSizedDefaultAllocator<32>_> local_218;
  ForAnyElementType local_208;
  undefined8 local_200;
  int local_1f8;
  int local_1f4;
  undefined8 local_1f0;
  int iStack_1e8;
  undefined4 uStack_1e4;
  ForAnyElementType local_1e0;
  undefined8 local_1d8;
  TArray<int,TSizedDefaultAllocator<32>_> local_1d0;
  int local_1c0;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_1b8;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *local_1a8;
  FDelaunay2 local_1a0;
  FArrangement2d *local_180;
  FIndex2i_u_0 local_178;
  TVector2<double>_u_0 local_170;
  TVector2<double>_u_0 local_160;
  TArray<int,TSizedDefaultAllocator<32>_> *local_150;
  TVector2<double>_u_0 *local_148;
  uint uStack_140;
  undefined4 uStack_13c;
  FScriptContainerElement *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  TVector2<double>_u_0 *local_128;
  uint uStack_120;
  undefined4 uStack_11c;
  FScriptContainerElement *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  FScriptContainerElement *local_108;
  int iStack_100;
  undefined4 uStack_fc;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_e8;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_d8;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_c8;
  TArrayView<UE::Math::TVector2<double>_const_,int> local_b8;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_a8;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_98;
  TArrayView<UE::Geometry::FIndex2i_const_,int> local_88;
  TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> local_78;
  undefined4 local_5c;
  
  uVar19 = 0;
  local_150 = param_7;
  param_1->ArrayNum = 0;
  local_1c0 = param_3;
  local_1a8 = param_1;
  local_180 = this;
  if (param_1->ArrayMax != 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0xc,4,0,&param_1->AllocatorInstance,0,&param_1->ArrayMax);
  }
  local_1f4 = (int)(this->Graph)._padding_;
  iVar13 = (int)(this->Graph)._padding_;
  iVar12 = *(int *)((longlong)&(this->Graph)._padding_ + 4);
  local_1f8 = iVar13 * 0x200 + iVar12;
  local_240.Data = (FScriptContainerElement *)0x0;
  local_238 = 0;
  local_234 = 0;
  local_218.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_218.ArrayNum = 0;
  local_218.ArrayMax = 0;
  local_1d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1d0.ArrayNum = 0;
  local_1d0.ArrayMax = 0;
  if (local_1f8 == local_1f4) {
    unaff_RDI = uVar19;
    if (0 < local_1f8) {
      uVar32 = (undefined4)__real_7fefffffffffffff;
      uVar17 = (ulonglong)__real_7fefffffffffffff >> 0x20;
      while( true ) {
        uVar26 = (uint)unaff_RDI;
        if ((((int)uVar26 < 0) || (iVar13 * 0x200 + iVar12 <= (int)uVar26)) ||
           (0xfffd < (ushort)(*(short *)(*(longlong *)
                                          ((this->Graph)._padding_ + (unaff_RDI >> 9) * 8) +
                                        (ulonglong)(uVar26 & 0x1ff) * 2) - 1U))) {
          uVar28 = 0;
          uVar29 = 0;
          uVar30 = uVar32;
          uVar31 = (int)uVar17;
        }
        else {
          pFVar4 = (this->Graph).vertices.Data.Blocks.AllocatorInstance.Data;
          uVar1 = *(undefined8 *)
                   (*(longlong *)(pFVar4 + (ulonglong)((uVar26 & 0x7fffffff) >> 8) * 8) +
                   (ulonglong)(uVar26 * 2 + 1 & 0x1ff) * 8);
          uVar28 = (undefined4)uVar1;
          uVar29 = (undefined4)((ulonglong)uVar1 >> 0x20);
          uVar1 = *(undefined8 *)
                   (*(longlong *)(pFVar4 + (ulonglong)((uVar26 & 0x7fffffff) >> 8) * 8) +
                   (ulonglong)(uVar26 * 2 & 0x1ff) * 8);
          uVar30 = (int)uVar1;
          uVar31 = (int)((ulonglong)uVar1 >> 0x20);
        }
        local_160._s_0.X = (double)CONCAT44(uVar31,uVar30);
        local_160._s_0.Y = (double)CONCAT44(uVar29,uVar28);
        uVar18 = (uint)uVar19;
        if (((local_240.Data <= &local_160) &&
            (&local_160 < (TVector2<double>_u_0 *)(local_240.Data + (longlong)(int)local_234 * 0x10)
            )) && (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), uVar18 = local_238, bVar8)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        if (uVar18 == local_234) {
          uVar18 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x810,&local_240,(int *)&local_234);
        }
        local_238 = uVar18 + 1;
        unaff_RDI = (ulonglong)(uVar26 + 1);
        *(double *)(local_240.Data + (longlong)(int)uVar18 * 0x10) = local_160._s_0.X;
        *(double *)(local_240.Data + (longlong)(int)uVar18 * 0x10 + 8) = local_160._s_0.Y;
        iVar13 = (int)(this->Graph)._padding_;
        iVar12 = *(int *)((longlong)&(this->Graph)._padding_ + 4);
        if (iVar13 * 0x200 + iVar12 <= (int)(uVar26 + 1)) break;
        uVar19 = (ulonglong)local_238;
      }
    }
  }
  else {
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed(&local_218,local_1f8,Default);
    TArray<int,TSizedDefaultAllocator<32>_>::SetNumZeroed
              (&local_1d0,(int)(this->Graph)._padding_,Default);
    iVar13 = (int)(this->Graph)._padding_;
    iVar12 = *(int *)((longlong)&(this->Graph)._padding_ + 4);
    local_244 = 0;
    if (0 < iVar13 * 0x200 + iVar12) {
      uVar32 = (undefined4)__real_7fefffffffffffff;
      uVar17 = (ulonglong)__real_7fefffffffffffff >> 0x20;
      local_1f0 = (FIndex2i *)0x0;
      uVar16 = uVar19;
      uVar27 = uVar19;
      do {
        uVar26 = (uint)uVar19;
        if (((int)uVar26 < 0) || (iVar13 * 0x200 + iVar12 <= (int)uVar26)) {
LAB_14952bc8c:
          uVar18 = 0;
          if ((int)uVar26 < local_218.ArrayNum) {
            uVar18 = ~uVar26 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          local_244 = (int)uVar16 + 1;
          local_1f0 = (FIndex2i *)((longlong)local_1f0 + 1);
          *(undefined4 *)(local_218.AllocatorInstance.Data + uVar27 * 4) = 0xffffffff;
        }
        else {
          this = local_180;
          if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                            ((local_180->Graph)._padding_ + (uVar19 >> 9) * 8) +
                                          (ulonglong)(uVar26 & 0x1ff) * 2) - 1U))
          goto LAB_14952bc8c;
          uVar24 = uVar26 - (int)uVar16;
          unaff_RDI = (ulonglong)uVar24;
          lVar22 = uVar27 - (longlong)local_1f0;
          uVar18 = 0;
          if ((int)uVar24 < local_1d0.ArrayNum) {
            uVar18 = ~uVar24 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          *(uint *)(local_1d0.AllocatorInstance.Data + lVar22 * 4) = uVar26;
          uVar18 = 0;
          if ((int)uVar26 < local_218.ArrayNum) {
            uVar18 = ~uVar26 >> 0x1f;
          }
          if ((uVar18 == 0) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          this = local_180;
          *(uint *)(local_218.AllocatorInstance.Data + uVar27 * 4) = uVar24;
          if (((int)uVar26 <
               (int)(local_180->Graph)._padding_ * 0x200 +
               *(int *)((longlong)&(local_180->Graph)._padding_ + 4)) &&
             ((ushort)(*(short *)(*(longlong *)((local_180->Graph)._padding_ + (uVar19 >> 9) * 8) +
                                 (ulonglong)(uVar26 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            pFVar4 = (local_180->Graph).vertices.Data.Blocks.AllocatorInstance.Data;
            uVar1 = *(undefined8 *)
                     (*(longlong *)(pFVar4 + (ulonglong)((uVar26 & 0x7fffffff) >> 8) * 8) +
                     (ulonglong)(uVar26 * 2 + 1 & 0x1ff) * 8);
            uVar28 = (undefined4)uVar1;
            uVar29 = (undefined4)((ulonglong)uVar1 >> 0x20);
            uVar1 = *(undefined8 *)
                     (*(longlong *)(pFVar4 + (ulonglong)((uVar26 & 0x7fffffff) >> 8) * 8) +
                     (ulonglong)(uVar26 * 2 & 0x1ff) * 8);
            uVar30 = (int)uVar1;
            uVar31 = (int)((ulonglong)uVar1 >> 0x20);
          }
          else {
            uVar28 = 0;
            uVar29 = 0;
            uVar30 = uVar32;
            uVar31 = (int)uVar17;
          }
          local_170._s_0.X = (double)CONCAT44(uVar31,uVar30);
          local_170._s_0.Y = (double)CONCAT44(uVar29,uVar28);
          if (((local_240.Data <= &local_170) &&
              (&local_170 <
               (TVector2<double>_u_0 *)(local_240.Data + (longlong)(int)local_234 * 0x10))) &&
             (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar8)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          if (local_238 == local_234) {
            local_238 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x810,&local_240,(int *)&local_234);
          }
          *(double *)(local_240.Data + (longlong)(int)local_238 * 0x10) = local_170._s_0.X;
          *(double *)(local_240.Data + (longlong)(int)local_238 * 0x10 + 8) = local_170._s_0.Y;
          local_238 = local_238 + 1;
        }
        uVar16 = (ulonglong)local_244;
        iVar13 = (int)(this->Graph)._padding_;
        uVar19 = (ulonglong)(uVar26 + 1);
        iVar12 = *(int *)((longlong)&(this->Graph)._padding_ + 4);
        uVar27 = uVar27 + 1;
      } while ((int)(uVar26 + 1) < iVar13 * 0x200 + iVar12);
    }
  }
  uVar26 = local_238;
  uStack_1e4 = local_5c;
  local_148 = (TVector2<double>_u_0 *)local_240.Data;
  local_1a0.RandomStream.InitialSeed = 0;
  local_1a0.RandomStream.Seed = 0;
  local_1a0.bKeepFastEdgeAdjacencyData = false;
  local_1a0.bValidateEdges = true;
  local_1a0.Connectivity.Ptr = (FDelaunay2Connectivity *)0x0;
  local_1a0.bIsConstrained = false;
  local_1a0.Result = NotComputed;
  local_1a0.bAutomaticallyFixEdgesToDuplicateVertices = false;
  local_1f0 = (FIndex2i *)0x0;
  iStack_1e8 = 0;
  if (((int)local_238 < 0) &&
     (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  local_e8._12_4_ = uStack_1e4;
  local_e8.ArrayNum = iStack_1e8;
  local_d8._12_4_ = uStack_13c;
  local_d8.ArrayNum = uVar26;
  local_e8.DataPtr = local_1f0;
  local_d8.DataPtr = (TVector2<double> *)local_148;
  uStack_140 = uVar26;
  bVar8 = FDelaunay2::Triangulate(&local_1a0,&local_d8,&local_e8);
  if (!bVar8) {
    bVar8 = false;
    goto LAB_14952c9ea;
  }
  local_1a0.bKeepFastEdgeAdjacencyData = true;
  local_1a0.bValidateEdges = false;
  uVar17 = unaff_RDI & 0xffffffffffffff00;
  local_1e0.Data = (FScriptContainerElement *)0x0;
  local_1d8 = 0;
  local_228.Data = (FScriptContainerElement *)0x0;
  local_220 = 0;
  local_208.Data = (FScriptContainerElement *)0x0;
  local_200 = 0;
  bVar8 = false;
  local_244 = (uint)uVar17;
  uVar26 = (int)(this->Graph)._padding_ * 0x200 + *(int *)((longlong)&(this->Graph)._padding_ + 4);
  uVar19 = 0;
  if (((uVar26 != 0) &&
      (puVar5 = (undefined8 *)(this->Graph)._padding_, uVar19 = 0,
      0xfffd < (ushort)(*(short *)*puVar5 - 1U))) && (uVar19 = 1, 1 < (int)uVar26)) {
    do {
      uVar16 = (ulonglong)((uint)uVar19 & 0x1ff);
      lVar22 = puVar5[uVar19 >> 9];
      if ((*(short *)(lVar22 + uVar16 * 2) != 0) && (*(short *)(lVar22 + uVar16 * 2) != -1)) break;
      uVar18 = (uint)uVar19 + 1;
      uVar19 = (ulonglong)uVar18;
    } while ((int)uVar18 < (int)uVar26);
  }
  if ((uint)uVar19 != uVar26) {
LAB_14952bfe1:
    do {
      uVar18 = (uint)uVar19;
      if (((int)uVar18 < 0) ||
         ((int)(this->Graph)._padding_ * 0x200 + *(int *)((longlong)&(this->Graph)._padding_ + 4) <=
          (int)uVar18)) {
LAB_14952c04c:
        uVar21 = 0xffffffff;
        uVar24 = 0xffffffff;
        iVar13 = -1;
      }
      else {
        uVar17 = (ulonglong)(uVar18 & 0x1ff);
        if (0xfffd < (ushort)(*(short *)(*(longlong *)((this->Graph)._padding_ + (uVar19 >> 9) * 8)
                                        + uVar17 * 2) - 1U)) goto LAB_14952c04c;
        lVar22 = *(longlong *)((this->Graph)._padding_ + (uVar19 >> 9) * 8);
        pFVar2 = *(FIndex2i **)(lVar22 + uVar17 * 0xc);
        iVar13 = *(int *)(lVar22 + 8 + uVar17 * 0xc);
        local_1f0._4_4_ = (uint)((ulonglong)pFVar2 >> 0x20);
        local_1f0._0_4_ = (uint)pFVar2;
        uVar21 = local_1f0._4_4_;
        uVar24 = (uint)local_1f0;
        local_1f0 = pFVar2;
      }
      if (local_1f8 != local_1f4) {
        uVar11 = 0;
        if ((int)uVar24 < local_218.ArrayNum) {
          uVar11 = ~uVar24 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        uVar24 = *(uint *)(local_218.AllocatorInstance.Data + (longlong)(int)uVar24 * 4);
        uVar11 = 0;
        if ((int)uVar21 < local_218.ArrayNum) {
          uVar11 = ~uVar21 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        uVar21 = *(uint *)(local_218.AllocatorInstance.Data + (longlong)(int)uVar21 * 4);
      }
      if ((int)local_1d8 == local_1d8._4_4_) {
        iVar12 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&local_1e0,(int *)((longlong)&local_1d8 + 4));
        local_1d8 = CONCAT44(local_1d8._4_4_,iVar12);
      }
      lVar22 = (longlong)(int)local_1d8;
      local_1d8 = CONCAT44(local_1d8._4_4_,(int)local_1d8 + 1);
      *(uint *)(local_1e0.Data + lVar22 * 8) = uVar24;
      *(uint *)(local_1e0.Data + lVar22 * 8 + 4) = uVar21;
      pFVar4 = local_1e0.Data + lVar22 * 8;
      if ((param_2) && (iVar13 == local_1c0)) {
        if ((local_228.Data <= pFVar4) &&
           ((pFVar4 < local_228.Data + (longlong)local_220._4_4_ * 8 &&
            (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)))) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        iVar12 = (int)local_220;
        if ((int)local_220 == local_220._4_4_) {
          iVar12 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_228,(int *)((longlong)&local_220 + 4));
        }
        local_220 = CONCAT44(local_220._4_4_,iVar12 + 1);
        *(undefined8 *)(local_228.Data + (longlong)iVar12 * 8) = *(undefined8 *)pFVar4;
      }
      if ((param_4) && (iVar13 == param_5)) {
        if ((local_208.Data <= pFVar4) &&
           ((pFVar4 < local_208.Data + (longlong)local_200._4_4_ * 8 &&
            (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)))) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        iVar13 = (int)local_200;
        if ((int)local_200 == local_200._4_4_) {
          iVar13 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_208,(int *)((longlong)&local_200 + 4));
        }
        local_200 = CONCAT44(local_200._4_4_,iVar13 + 1);
        *(undefined8 *)(local_208.Data + (longlong)iVar13 * 8) = *(undefined8 *)pFVar4;
      }
      uVar18 = uVar18 + 1;
      uVar19 = (ulonglong)uVar18;
      if ((int)uVar18 < (int)uVar26) {
        do {
          uVar17 = (ulonglong)((uint)uVar19 & 0x1ff);
          lVar22 = *(longlong *)((this->Graph)._padding_ + (uVar19 >> 9) * 8);
          if ((*(short *)(lVar22 + uVar17 * 2) != 0) && (*(short *)(lVar22 + uVar17 * 2) != -1))
          goto LAB_14952bfe1;
          uVar18 = (uint)uVar19 + 1;
          uVar19 = (ulonglong)uVar18;
        } while ((int)uVar18 < (int)uVar26);
      }
    } while (uVar18 != uVar26);
    uVar17 = (ulonglong)local_244;
  }
  uVar19 = 0;
  cVar23 = (char)uVar17;
  iVar13 = (int)local_1d8;
  local_138 = local_1e0.Data;
  if (((int)local_1d8 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  uVar26 = local_238;
  iStack_130 = iVar13;
  local_128 = (TVector2<double>_u_0 *)local_240.Data;
  if (((int)local_238 < 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar10)) {
    pcVar6 = (code *)swi(3);
    uVar9 = (*pcVar6)();
    return (bool)uVar9;
  }
  local_c8._12_4_ = uStack_12c;
  local_c8.ArrayNum = iStack_130;
  uStack_120 = uVar26;
  local_b8._12_4_ = uStack_11c;
  local_b8.ArrayNum = uVar26;
  local_b8.DataPtr = (TVector2<double> *)local_128;
  local_c8.DataPtr = (FIndex2i *)local_138;
  FDelaunay2::ConstrainEdges(&local_1a0,&local_b8,&local_c8);
  iVar13 = local_1f8;
  uVar26 = (int)(this->Graph)._padding_ * 0x200 + *(int *)((longlong)&(this->Graph)._padding_ + 4);
  if ((uVar26 == 0) ||
     (puVar5 = (undefined8 *)(this->Graph)._padding_, (ushort)(*(short *)*puVar5 - 1U) < 0xfffe)) {
LAB_14952c407:
    uVar18 = (uint)uVar19;
  }
  else {
    uVar19 = 1;
    uVar18 = 1;
    if (1 < (int)uVar26) {
      do {
        sVar3 = *(short *)(puVar5[uVar19 >> 9] + (ulonglong)((uint)uVar19 & 0x1ff) * 2);
        if ((sVar3 != 0) && (sVar3 != -1)) break;
        uVar18 = (uint)uVar19 + 1;
        uVar19 = (ulonglong)uVar18;
      } while ((int)uVar18 < (int)uVar26);
      goto LAB_14952c407;
    }
  }
joined_r0x00014952c40e:
  if (uVar18 != uVar26) {
    do {
      uVar18 = (uint)uVar19;
      if (((int)uVar18 < 0) ||
         ((int)(this->Graph)._padding_ * 0x200 + *(int *)((longlong)&(this->Graph)._padding_ + 4) <=
          (int)uVar18)) {
LAB_14952c482:
        uVar24 = 0xffffffff;
        uVar21 = 0xffffffff;
        iVar12 = -1;
      }
      else {
        uVar17 = (ulonglong)(uVar18 & 0x1ff);
        if (0xfffd < (ushort)(*(short *)(*(longlong *)((this->Graph)._padding_ + (uVar19 >> 9) * 8)
                                        + uVar17 * 2) - 1U)) goto LAB_14952c482;
        lVar22 = *(longlong *)((this->Graph)._padding_ + (uVar19 >> 9) * 8);
        pFVar2 = *(FIndex2i **)(lVar22 + uVar17 * 0xc);
        iVar12 = *(int *)(lVar22 + 8 + uVar17 * 0xc);
        local_1f0._4_4_ = (uint)((ulonglong)pFVar2 >> 0x20);
        local_1f0._0_4_ = (uint)pFVar2;
        uVar21 = local_1f0._4_4_;
        uVar24 = (uint)local_1f0;
        local_1f0 = pFVar2;
      }
      local_230[0] = uVar18;
      if (iVar13 != local_1f4) {
        uVar11 = 0;
        if ((int)uVar24 < local_218.ArrayNum) {
          uVar11 = ~uVar24 >> 0x1f;
        }
        if (uVar11 == 0) {
          bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar10) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
        }
        uVar24 = *(uint *)(local_218.AllocatorInstance.Data + (longlong)(int)uVar24 * 4);
        uVar11 = 0;
        if ((int)uVar21 < local_218.ArrayNum) {
          uVar11 = ~uVar21 >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar6 = (code *)swi(3);
          uVar9 = (*pcVar6)();
          return (bool)uVar9;
        }
        uVar21 = *(uint *)(local_218.AllocatorInstance.Data + (longlong)(int)uVar21 * 4);
      }
      local_178._s_0.A = uVar24;
      local_178._s_0.B = uVar21;
      bVar10 = FDelaunay2::HasEdge(&local_1a0,(FIndex2i *)&local_178._s_0,false);
      pTVar7 = local_150;
      if (!bVar10) {
        bVar8 = true;
        if (local_150 != (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
          pFVar4 = (local_150->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)local_230) &&
              ((FScriptContainerElement *)local_230 < pFVar4 + (longlong)local_150->ArrayMax * 4))
             && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                    ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x7a5,
                                     L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                    ), bVar10)) {
            pcVar6 = (code *)swi(3);
            uVar9 = (*pcVar6)();
            return (bool)uVar9;
          }
          iVar14 = pTVar7->ArrayNum;
          if (iVar14 == pTVar7->ArrayMax) {
            iVar14 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar7->AllocatorInstance,&pTVar7->ArrayMax);
          }
          pTVar7->ArrayNum = iVar14 + 1;
          *(uint *)((pTVar7->AllocatorInstance).Data + (longlong)iVar14 * 4) = local_230[0];
        }
        local_244 = local_244 & 0xff;
        if (iVar12 == local_1c0) {
          local_244 = 1;
        }
      }
      cVar23 = (char)local_244;
      uVar18 = uVar18 + 1;
      uVar19 = (ulonglong)uVar18;
      if ((int)uVar26 <= (int)uVar18) goto joined_r0x00014952c40e;
      while( true ) {
        uVar17 = (ulonglong)((uint)uVar19 & 0x1ff);
        lVar22 = *(longlong *)((this->Graph)._padding_ + (uVar19 >> 9) * 8);
        if ((*(short *)(lVar22 + uVar17 * 2) != 0) && (*(short *)(lVar22 + uVar17 * 2) != -1))
        break;
        uVar18 = (uint)uVar19 + 1;
        uVar19 = (ulonglong)uVar18;
        if ((int)uVar26 <= (int)uVar18) goto joined_r0x00014952c40e;
      }
    } while( true );
  }
  if ((!param_2) ||
     ((iVar12 = (int)local_220, param_6 && ((cVar23 != '\0' || ((int)local_220 < 1)))))) {
    pTVar15 = FDelaunay2::GetTriangles(&local_1a0,&local_78);
    pTVar25 = local_1a8;
    if (local_1a8 != pTVar15) {
      pFVar4 = (local_1a8->AllocatorInstance).Data;
      if (pFVar4 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar4);
      }
      (pTVar25->AllocatorInstance).Data = (pTVar15->AllocatorInstance).Data;
      (pTVar15->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      pTVar25->ArrayNum = pTVar15->ArrayNum;
      pTVar25->ArrayMax = pTVar15->ArrayMax;
      pTVar15->ArrayNum = 0;
      pTVar15->ArrayMax = 0;
    }
LAB_14952c86d:
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
  }
  else {
    if (!param_4) {
      local_f8 = local_228.Data;
      if (((int)local_220 < 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      iStack_f0 = iVar12;
      local_88._12_4_ = uStack_ec;
      local_88.ArrayNum = iVar12;
      local_88.DataPtr = (FIndex2i *)local_f8;
      local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_1b8.ArrayNum = 0;
      local_1b8.ArrayMax = 0;
      FDelaunay2::GetFilledTriangles(&local_1a0,&local_1b8,&local_88,Solid);
      pTVar25 = local_1a8;
      local_78.AllocatorInstance.Data = local_1b8.AllocatorInstance.Data;
      if (local_1a8 != &local_1b8) {
        pFVar4 = (local_1a8->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pTVar25->AllocatorInstance).Data = local_1b8.AllocatorInstance.Data;
        pTVar25->ArrayNum = local_1b8.ArrayNum;
        pTVar25->ArrayMax = local_1b8.ArrayMax;
        local_1b8.ArrayNum = 0;
        local_1b8.ArrayMax = 0;
        local_1b8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      }
      goto LAB_14952c86d;
    }
    iVar12 = (int)local_200;
    iVar14 = (int)local_220;
    local_118 = local_208.Data;
    if ((int)local_200 < 0) {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar10) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      iVar14 = (int)local_220;
    }
    local_108 = local_228.Data;
    iStack_110 = iVar12;
    if ((iVar14 < 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InCount >= 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                            ,0xeb,L""), bVar10)) {
      pcVar6 = (code *)swi(3);
      uVar9 = (*pcVar6)();
      return (bool)uVar9;
    }
    pTVar25 = local_1a8;
    local_a8._12_4_ = uStack_10c;
    local_a8.ArrayNum = iStack_110;
    local_98._12_4_ = uStack_fc;
    local_98.ArrayNum = iVar14;
    local_98.DataPtr = (FIndex2i *)local_108;
    local_a8.DataPtr = (FIndex2i *)local_118;
    iStack_100 = iVar14;
    FDelaunay2::GetFilledTriangles(&local_1a0,local_1a8,&local_98,&local_a8);
  }
  if (iVar13 != local_1f4) {
    iVar13 = pTVar25->ArrayNum;
    pFVar20 = (pTVar25->AllocatorInstance).Data;
    pFVar4 = pFVar20 + (longlong)iVar13 * 0xc;
    while( true ) {
      if (pTVar25->ArrayNum != iVar13) {
        local_246[0] = 0;
        `TCheckedPointerIterator<UE::Geometry::FIndex3i,int,0>::operator!='::__l2::<lambda_1>::
        operator()(local_246);
      }
      if (pFVar20 == pFVar4) break;
      uVar26 = *(uint *)pFVar20;
      uVar24 = 0;
      uVar18 = uVar24;
      if ((int)uVar26 < local_1d0.ArrayNum) {
        uVar18 = ~uVar26 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      uVar18 = *(uint *)(pFVar20 + 4);
      *(uint *)pFVar20 = *(uint *)(local_1d0.AllocatorInstance.Data + (longlong)(int)uVar26 * 4);
      uVar26 = uVar24;
      if ((int)uVar18 < local_1d0.ArrayNum) {
        uVar26 = ~uVar18 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      uVar26 = *(uint *)(pFVar20 + 8);
      *(uint *)(pFVar20 + 4) =
           *(uint *)(local_1d0.AllocatorInstance.Data + (longlong)(int)uVar18 * 4);
      if ((int)uVar26 < local_1d0.ArrayNum) {
        uVar24 = ~uVar26 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar6 = (code *)swi(3);
        uVar9 = (*pcVar6)();
        return (bool)uVar9;
      }
      *(uint *)(pFVar20 + 8) =
           *(uint *)(local_1d0.AllocatorInstance.Data + (longlong)(int)uVar26 * 4);
      pFVar20 = pFVar20 + 0xc;
      pTVar25 = local_1a8;
    }
  }
  bVar8 = !bVar8;
  if (local_208.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.Data);
  }
  if (local_228.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_228.Data);
  }
  if (local_1e0.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1e0.Data);
  }
LAB_14952c9ea:
  if (local_1a0.Connectivity.Ptr != (FDelaunay2Connectivity *)0x0) {
    (**(code **)&local_1a0.Connectivity.Ptr[-1].DuplicateVertices.field_0x40)
              (&local_1a0.Connectivity.Ptr[-1].DuplicateVertices.field_0x40);
  }
  if (local_1d0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1d0.AllocatorInstance.Data);
  }
  if (local_218.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_218.AllocatorInstance.Data);
  }
  if ((TVector2<double>_u_0 *)local_240.Data != (TVector2<double>_u_0 *)0x0) {
    FMemory::Free(local_240.Data);
  }
  return bVar8;
}

// TriangulateWithBoundary @ 14952ca70

bool __thiscall
UE::Geometry::FArrangement2d::TriangulateWithBoundary
          (FArrangement2d *this,TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          int param_2)

{
  bool bVar1;
  
  bVar1 = TriangulateInternal(this,param_1,true,param_2,false,-1,false,
                              (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
  return bVar1;
}

// TriangulateWithBoundaryAndHoles @ 14952cab0

bool __thiscall
UE::Geometry::FArrangement2d::TriangulateWithBoundaryAndHoles
          (FArrangement2d *this,TArray<UE::Geometry::FIndex3i,TSizedDefaultAllocator<32>_> *param_1,
          int param_2,int param_3)

{
  bool bVar1;
  
  bVar1 = TriangulateInternal(this,param_1,true,param_2,true,param_3,false,
                              (TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
  return bVar1;
}

