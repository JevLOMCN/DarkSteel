// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 5

// ConnectCloseVertices<UE::Geometry::FDynamicMesh3> @ 1433362e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FVertexConnectedComponents::ConnectCloseVertices<UE::Geometry::FDynamicMesh3>
          (FVertexConnectedComponents *this,FDynamicMesh3 *param_1,double param_2,int param_3)

{
  double *pdVar1;
  undefined4 uVar2;
  code *pcVar3;
  double dVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auStackY_1f8 [32];
  uint local_1c8;
  undefined1 local_1c4 [4];
  undefined4 local_1c0;
  undefined4 local_1bc;
  undefined4 local_1b8;
  TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> local_1b0;
  uint local_1a0;
  int local_19c;
  code *local_198;
  undefined1 *local_190;
  code *local_188;
  int **local_180;
  code *local_178;
  FDynamicMesh3 **local_170;
  undefined4 *local_168;
  uint *local_160;
  TVector<double>_u_0 local_158;
  FDynamicMesh3 *local_140;
  double local_138;
  double dStack_130;
  double local_128;
  undefined1 local_118 [64];
  ForElementType<FSetElementId> local_d8;
  int local_d0;
  FMutex local_c8;
  TWrapAroundGridIndexer3<double> local_c0;
  int local_b8;
  ulonglong local_a8;
  
  local_a8 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  local_c0.CellSize = param_2 * __real_4008000000000000;
  if (param_2 * __real_4008000000000000 <= __real_3e45798ee2308c3a) {
    local_c0.CellSize = __real_3e45798ee2308c3a;
  }
  local_118._0_8_ = 0;
  local_118._8_8_ = 0;
  local_118._32_8_ = 0;
  local_118._40_4_ = 0;
  local_118._44_4_ = 0x80;
  local_118._48_4_ = 0xffffffff;
  local_118._52_4_ = 0;
  local_d8 = (ForElementType<FSetElementId>)0x0;
  local_d0 = 0;
  local_c8.State = (atomic<unsigned_char>)0x0;
  if ((local_c0.CellSize < __real_3e45798ee2308c3a) &&
     (bVar5 = Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<_2954325157570674611>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\GridIndexing3.h"
                         ,0x4d,"CellSize >= TMathUtil<RealType>::ZeroTolerance"), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  dVar4 = __real_41f0000000000000;
  uVar7 = (param_1->VertexRefCounts).RefCounts.CurBlock;
  uVar9 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  local_b8 = -1;
  local_1c8 = 0;
  if (0 < (int)(uVar7 * 0x200 + uVar9)) {
    uVar10 = 0;
    do {
      if (((-1 < (int)local_1c8) && ((int)local_1c8 < (int)(uVar7 * 0x200 + uVar9))) &&
         (uVar7 = local_1c8,
         (ushort)(*(short *)(*(longlong *)
                              ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              (uVar10 >> 9) * 8) + (ulonglong)(local_1c8 & 0x1ff) * 2) - 1U) <
         0xfffe)) {
        while( true ) {
          uVar8 = ~uVar7 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar7 < (this->DisjointSet).Parents.ArrayNum) {
            uVar9 = uVar8;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          lVar11 = (longlong)(int)uVar7;
          if (*(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar11 * 4) == uVar7)
          break;
          uVar9 = 0;
          if ((int)uVar7 < (this->DisjointSet).Parents.ArrayNum) {
            uVar9 = uVar8;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar9 = *(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar11 * 4);
          uVar6 = 0;
          if ((int)uVar9 < (this->DisjointSet).Parents.ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar2 = *(undefined4 *)
                   ((this->DisjointSet).Parents.AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
          uVar9 = 0;
          if ((int)uVar7 < (this->DisjointSet).Parents.ArrayNum) {
            uVar9 = uVar8;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          *(undefined4 *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar11 * 4) = uVar2;
          uVar9 = 0;
          if ((int)uVar7 < (this->DisjointSet).Parents.ArrayNum) {
            uVar9 = uVar8;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          uVar7 = *(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar11 * 4);
        }
        if (0 < param_3) {
          uVar9 = 0;
          if ((int)uVar7 < (this->DisjointSet).Sizes.ArrayNum) {
            uVar9 = uVar8;
          }
          if ((uVar9 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (*(int *)((this->DisjointSet).Sizes.AllocatorInstance.Data + lVar11 * 4) < param_3)
          goto LAB_1433367b9;
        }
        local_198 = Core::Private::Function::
                    TFunctionRefCaller<UE::Geometry::<lambda_32_>,bool,int_const_&>::Call;
        lVar11 = *(longlong *)
                  ((param_1->Vertices).Blocks.AllocatorInstance.Data +
                  (ulonglong)(local_1c8 >> 9) * 8);
        local_190 = local_1c4;
        local_19c = (param_1->VertexRefCounts).UsedCount;
        pdVar1 = (double *)(lVar11 + (ulonglong)(local_1c8 & 0x1ff) * 0x18);
        dVar14 = *pdVar1;
        dVar13 = pdVar1[1];
        local_180 = &local_1b0.Value;
        local_158._s_0.Z = *(double *)(lVar11 + 0x10 + (ulonglong)(local_1c8 & 0x1ff) * 0x18);
        local_188 = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FVertexConnectedComponents::ConnectCloseVertices<UE::Geometry::FDynamicMesh3>'::__l4::<lambda_2>,bool,int,double>
                    ::Call;
        local_170 = &local_140;
        local_178 = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FVertexConnectedComponents::ConnectCloseVertices<UE::Geometry::FDynamicMesh3>'::__l4::<lambda_1>,double,int_const_&>
                    ::Call;
        local_1b0.Value = (int *)this;
        local_1a0 = uVar7;
        local_158._s_0.X = dVar14;
        local_158._s_0.Y = dVar13;
        local_140 = param_1;
        local_138 = dVar14;
        dStack_130 = dVar13;
        local_128 = local_158._s_0.Z;
        TPointHashGrid3<int,double>::EnumeratePointsInBall
                  ((TPointHashGrid3<int,double> *)local_118,(TVector<double> *)&local_158._s_0,
                   param_2,(TFunctionRef<double___cdecl(int_const_&)> *)&local_178,
                   (TFunctionRef<bool___cdecl(int,double)> *)&local_188,
                   (TFunctionRef<bool___cdecl(int_const_&)> *)&local_198);
        dVar12 = FGenericPlatformMath::Fmod(local_158._s_0.Z / local_c0.CellSize,dVar4);
        if (dVar12 < 0.0) {
          dVar12 = dVar12 + dVar4;
        }
        dVar13 = FGenericPlatformMath::Fmod(dVar13 / local_c0.CellSize,dVar4);
        if (dVar13 < 0.0) {
          dVar13 = dVar13 + dVar4;
        }
        dVar14 = FGenericPlatformMath::Fmod(dVar14 / local_c0.CellSize,dVar4);
        if (dVar14 < 0.0) {
          dVar14 = dVar14 + dVar4;
        }
        local_1c0 = (undefined4)(longlong)dVar14;
        local_1bc = (undefined4)(longlong)dVar13;
        local_1b8 = (undefined4)(longlong)dVar12;
        local_168 = &local_1c0;
        local_160 = &local_1c8;
        TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
        ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                  ((TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                    *)local_118,&local_1b0,(bool *)&local_168);
      }
LAB_1433367b9:
      uVar7 = (param_1->VertexRefCounts).RefCounts.CurBlock;
      local_1c8 = local_1c8 + 1;
      uVar9 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
      uVar10 = (ulonglong)local_1c8;
    } while ((int)local_1c8 < (int)(uVar7 * 0x200 + uVar9));
  }
  local_d0 = 0;
  if (local_d8 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_d8);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_118);
  return;
}

// ConnectOverlappingComponents<UE::Geometry::FDynamicMesh3> @ 143336890

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __thiscall
UE::Geometry::FVertexConnectedComponents::ConnectOverlappingComponents<UE::Geometry::FDynamicMesh3>
          (FVertexConnectedComponents *this,FDynamicMesh3 *param_1,int param_2)

{
  double *pdVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  undefined1 auVar8 [12];
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  longlong *plVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  ForElementType<FSetElementId> FVar21;
  longlong lVar22;
  TPairInitializer<int_const_&,UE::Geometry::TAxisAlignedBox3<double>_&&> *pTVar23;
  longlong lVar24;
  longlong lVar25;
  uint *puVar26;
  ulonglong uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined8 extraout_XMM0_Qb;
  undefined8 uVar32;
  undefined1 auVar31 [16];
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auStack_228 [32];
  longlong local_208;
  longlong local_200;
  uint local_1f8;
  int local_1f4;
  int local_1f0 [2];
  FDynamicMesh3 *local_1e8;
  int local_1e0;
  uint uStack_1dc;
  undefined1 *puStack_1d8;
  undefined4 local_1d0;
  int iStack_1cc;
  int iStack_1c8;
  undefined4 uStack_1c4;
  longlong *local_1c0;
  undefined1 auStack_1b8 [16];
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  longlong *local_190;
  undefined1 auStack_188 [8];
  undefined1 local_180 [16];
  undefined8 local_170;
  int local_168;
  ulonglong local_160;
  uint *local_158;
  undefined8 *local_150;
  double local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  double local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  double local_d8;
  double dStack_d0;
  undefined1 local_c8 [32];
  uint *local_a8;
  int local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_94;
  undefined1 local_90 [8];
  ForElementType<FSetElementId> local_88;
  int local_80;
  ulonglong local_78;
  
  uVar15 = _UNK_150a9e6d8;
  uVar14 = ___xmm_ffefffffffffffff7fefffffffffffff;
  uVar13 = _UNK_150a9e648;
  uVar12 = ___xmm_7fefffffffffffff7fefffffffffffff;
  uVar11 = _UNK_1508ffb58;
  uVar32 = ___xmm_ffefffffffffffffffefffffffffffff;
  local_78 = __security_cookie.value ^ (ulonglong)auStack_228;
  uVar29 = (param_1->VertexRefCounts).RefCounts.CurBlock;
  uVar28 = 0;
  uVar19 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  local_c8._0_8_ = 0;
  local_c8._8_8_ = 0;
  local_a8 = (uint *)0x0;
  local_a0 = 0;
  local_9c = 0x80;
  local_98 = 0xffffffff;
  local_94 = 0;
  local_88 = (ForElementType<FSetElementId>)0x0;
  local_80 = 0;
  local_1f4 = param_2;
  local_1e8 = param_1;
  if (0 < (int)(uVar29 * 0x200 + uVar19)) {
    do {
      if ((-1 < (int)uVar28) && ((int)uVar28 < (int)(uVar29 * 0x200 + uVar19))) {
        uVar27 = (ulonglong)(uVar28 & 0x1ff);
        local_160 = (ulonglong)(uVar28 >> 9);
        uVar29 = uVar28;
        if ((ushort)(*(short *)(*(longlong *)
                                 ((local_1e8->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + local_160 * 8) + uVar27 * 2) - 1U) < 0xfffe) {
          while( true ) {
            pTVar23 = (TPairInitializer<int_const_&,UE::Geometry::TAxisAlignedBox3<double>_&&> *)
                      (ulonglong)uVar29;
            iVar2 = (this->DisjointSet).Parents.ArrayNum;
            uVar30 = ~uVar29 >> 0x1f;
            uVar19 = 0;
            if ((int)uVar29 < iVar2) {
              uVar19 = uVar30;
            }
            if (uVar19 == 0) {
              local_208 = (longlong)(int)uVar29;
              local_200 = (longlong)iVar2;
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            iVar2 = local_1f4;
            lVar25 = (longlong)(int)uVar29;
            if (*(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar25 * 4) == uVar29
               ) break;
            iVar2 = (this->DisjointSet).Parents.ArrayNum;
            uVar19 = 0;
            if ((int)uVar29 < iVar2) {
              uVar19 = uVar30;
            }
            if ((uVar19 == 0) &&
               (local_208 = lVar25, local_200 = (longlong)iVar2,
               bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar2 = (this->DisjointSet).Parents.ArrayNum;
            uVar19 = *(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar25 * 4);
            uVar18 = 0;
            if ((int)uVar19 < iVar2) {
              uVar18 = ~uVar19 >> 0x1f;
            }
            if ((uVar18 == 0) &&
               (local_208 = (longlong)(int)uVar19, local_200 = (longlong)iVar2,
               bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar2 = (this->DisjointSet).Parents.ArrayNum;
            uVar3 = *(undefined4 *)
                     ((this->DisjointSet).Parents.AllocatorInstance.Data + (longlong)(int)uVar19 * 4
                     );
            uVar19 = 0;
            if ((int)uVar29 < iVar2) {
              uVar19 = uVar30;
            }
            if ((uVar19 == 0) &&
               (local_208 = lVar25, local_200 = (longlong)iVar2,
               bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined4 *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar25 * 4) = uVar3
            ;
            iVar2 = (this->DisjointSet).Parents.ArrayNum;
            uVar19 = 0;
            if ((int)uVar29 < iVar2) {
              uVar19 = uVar30;
            }
            if ((uVar19 == 0) &&
               (local_208 = lVar25, local_200 = (longlong)iVar2,
               bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            uVar29 = *(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar25 * 4);
          }
          local_1f8 = uVar29;
          if (0 < local_1f4) {
            iVar4 = (this->DisjointSet).Sizes.ArrayNum;
            uVar19 = 0;
            if ((int)uVar29 < iVar4) {
              uVar19 = uVar30;
            }
            if (uVar19 == 0) {
              local_208 = lVar25;
              local_200 = (longlong)iVar4;
              bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar17) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              pTVar23 = (TPairInitializer<int_const_&,UE::Geometry::TAxisAlignedBox3<double>_&&> *)
                        (ulonglong)local_1f8;
            }
            if (*(int *)((this->DisjointSet).Sizes.AllocatorInstance.Data + lVar25 * 4) < iVar2)
            goto LAB_143336cda;
          }
          local_130 = uVar12;
          uStack_128 = uVar13;
          local_120 = uVar14;
          uStack_118 = uVar15;
          local_110 = uVar32;
          uStack_108 = uVar11;
          lVar25 = *(longlong *)
                    ((local_1e8->Vertices).Blocks.AllocatorInstance.Data + local_160 * 8);
          local_138 = *(double *)(lVar25 + 0x10 + uVar27 * 0x18);
          pdVar1 = (double *)(lVar25 + uVar27 * 0x18);
          dVar9 = *pdVar1;
          dVar10 = pdVar1[1];
          if (local_c8._8_4_ != local_94) {
            FVar21 = (ForElementType<FSetElementId>)local_90;
            if (local_88 != (ForElementType<FSetElementId>)0x0) {
              FVar21 = local_88;
            }
            iVar2 = *(int *)((longlong)FVar21 + ((ulonglong)(local_80 - 1) & (ulonglong)pTVar23) * 4
                            );
            while (iVar2 != -1) {
              piVar20 = (int *)((longlong)iVar2 * 0x40 + local_c8._0_8_);
              if (*piVar20 == (int)pTVar23) {
                if (piVar20 != (int *)0x0) goto LAB_143336c7b;
                break;
              }
              iVar2 = piVar20[0xe];
            }
          }
          local_158 = &local_1f8;
          local_208 = 0;
          local_150 = &local_130;
          TSet<TTuple<int,UE::Geometry::TAxisAlignedBox3<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TAxisAlignedBox3<double>,0>,FDefaultSetAllocator>
          ::EmplaceByHash<TPairInitializer<int_const_&,UE::Geometry::TAxisAlignedBox3<double>_&&>_>
                    ((TSet<TTuple<int,UE::Geometry::TAxisAlignedBox3<double>_>,TDefaultMapHashableKeyFuncs<int,UE::Geometry::TAxisAlignedBox3<double>,0>,FDefaultSetAllocator>
                      *)local_c8,(uint)local_1f0,pTVar23,(bool *)&local_158);
          piVar20 = (int *)((longlong)local_1f0[0] * 0x40 + local_c8._0_8_);
LAB_143336c7b:
          if (dVar9 < *(double *)(piVar20 + 2)) {
            *(double *)(piVar20 + 2) = dVar9;
          }
          if (*(double *)(piVar20 + 8) <= dVar9 && dVar9 != *(double *)(piVar20 + 8)) {
            *(double *)(piVar20 + 8) = dVar9;
          }
          if (dVar10 < *(double *)(piVar20 + 4)) {
            *(double *)(piVar20 + 4) = dVar10;
          }
          if (*(double *)(piVar20 + 10) <= dVar10 && dVar10 != *(double *)(piVar20 + 10)) {
            *(double *)(piVar20 + 10) = dVar10;
          }
          if (local_138 < *(double *)(piVar20 + 6)) {
            *(double *)(piVar20 + 6) = local_138;
          }
          if (*(double *)(piVar20 + 0xc) <= local_138 && local_138 != *(double *)(piVar20 + 0xc)) {
            *(double *)(piVar20 + 0xc) = local_138;
          }
        }
      }
LAB_143336cda:
      uVar28 = uVar28 + 1;
      uVar29 = (local_1e8->VertexRefCounts).RefCounts.CurBlock;
      uVar19 = (local_1e8->VertexRefCounts).RefCounts.CurBlockUsed;
    } while ((int)uVar28 < (int)(uVar29 * 0x200 + uVar19));
  }
  uVar29 = 0;
  uStack_1dc = 1;
  local_1e0 = 0;
  puStack_1d8 = local_c8 + 0x10;
  iStack_1cc = 0;
  iStack_1c8 = 0;
  if (local_a0 != 0) {
    puVar26 = (uint *)(local_c8 + 0x10);
    if (local_a8 != (uint *)0x0) {
      puVar26 = local_a8;
    }
    uVar19 = *puVar26;
    while (uVar19 == 0) {
      iStack_1c8 = iStack_1c8 + 0x20;
      lVar25 = (longlong)local_1e0;
      local_1e0 = local_1e0 + 1;
      if ((int)(local_a0 + -1 + (local_a0 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1e0)
      goto LAB_143336de0;
      uVar19 = puVar26[lVar25 + 1];
    }
    uStack_1dc = -uVar19 & uVar19;
    uVar27 = (ulonglong)uStack_1dc * 2 + 1;
    lVar25 = 0x3f;
    if (uVar27 != 0) {
      for (; uVar27 >> lVar25 == 0; lVar25 = lVar25 + -1) {
      }
    }
    local_168 = (int)lVar25;
    iStack_1cc = local_168 + -1 + iStack_1c8;
    if (local_a0 < iStack_1cc) {
LAB_143336de0:
      iStack_1cc = local_a0;
    }
  }
  local_1d0 = 0xffffffff;
  uStack_1a8._4_4_ = iStack_1cc;
  uStack_1a8._0_4_ = 0xffffffff;
  uStack_1a0._4_4_ = uStack_1c4;
  uStack_1a0._0_4_ = iStack_1c8;
  local_1c0 = (longlong *)local_c8;
  auStack_1b8._0_4_ = local_1e0;
  auStack_1b8._4_4_ = uStack_1dc;
  auStack_1b8._8_8_ = puStack_1d8;
  auStack_188._0_4_ = local_1e0;
  auStack_188._4_4_ = uStack_1dc;
  local_180 = stack0xfffffffffffffe50;
  local_170 = uStack_1a0;
  local_190 = local_1c0;
  if (iStack_1cc < local_a0) {
    local_180._0_12_ = auStack_1b8._8_12_;
    local_180._12_4_ = iStack_1cc;
    auVar31 = stack0xfffffffffffffe50;
    plVar16 = local_1c0;
    do {
      local_1c0 = plVar16;
      uStack_1a8._4_4_ = auVar31._12_4_;
      auStack_1b8._8_8_ = auVar31._0_8_;
      uStack_1a8._0_4_ = ~auStack_188._4_4_ & auVar31._8_4_;
      uStack_1a0 = local_170;
      auStack_1b8._0_4_ = auStack_188._0_4_;
      auStack_1b8._4_4_ = auStack_188._4_4_;
      local_190 = local_1c0;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1b8);
      uVar19 = auVar31._8_4_;
      uVar32 = extraout_XMM0_Qb;
      if (uStack_1a8._4_4_ < *(int *)(auStack_1b8._8_8_ + 0x18)) {
        do {
          lVar24 = (longlong)uStack_1a8._4_4_ * 0x40;
          lVar25 = *local_190;
          lVar22 = (longlong)(int)local_180._12_4_ * 0x40;
          lVar5 = *local_1c0;
          local_e8 = *(undefined1 (*) [16])(lVar24 + 0x18 + lVar5);
          pdVar1 = (double *)(lVar24 + 8 + lVar5);
          local_f8 = *pdVar1;
          dStack_f0 = pdVar1[1];
          pdVar1 = (double *)(lVar24 + 0x28 + lVar5);
          local_d8 = *pdVar1;
          dStack_d0 = pdVar1[1];
          auVar8._4_8_ = uVar32;
          auVar8._0_4_ = local_e8._4_4_;
          auVar31._0_8_ = auVar8._0_8_ << 0x20;
          auVar31._8_4_ = local_e8._8_4_;
          auVar31._12_4_ = local_e8._12_4_;
          pdVar1 = (double *)(lVar22 + 8 + lVar25);
          if ((((*pdVar1 <= auVar31._8_8_ && auVar31._8_8_ != *pdVar1) &&
               (local_f8 < *(double *)(lVar22 + 0x20 + lVar25))) &&
              (pdVar1 = (double *)(lVar22 + 0x10 + lVar25),
              *pdVar1 <= local_d8 && local_d8 != *pdVar1)) &&
             (((dStack_f0 < *(double *)(lVar22 + 0x28 + lVar25) &&
               (pdVar1 = (double *)(lVar22 + 0x18 + lVar25),
               *pdVar1 <= dStack_d0 && dStack_d0 != *pdVar1)) &&
              (local_e8._0_8_ < *(double *)(lVar22 + 0x30 + lVar25))))) {
            iVar2 = *(int *)(lVar24 + lVar5);
            uVar28 = FSizedDisjointSet::Find(&this->DisjointSet,*(int *)(lVar22 + lVar25));
            uVar19 = FSizedDisjointSet::Find(&this->DisjointSet,iVar2);
            if (uVar28 != uVar19) {
              iVar2 = (this->DisjointSet).Sizes.ArrayNum;
              uVar30 = uVar29;
              if ((int)uVar19 < iVar2) {
                uVar30 = ~uVar19 >> 0x1f;
              }
              if (uVar30 == 0) {
                local_208 = (longlong)(int)uVar19;
                local_200 = (longlong)iVar2;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar17) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              iVar2 = (this->DisjointSet).Sizes.ArrayNum;
              pFVar6 = (this->DisjointSet).Sizes.AllocatorInstance.Data;
              uVar30 = uVar29;
              if ((int)uVar28 < iVar2) {
                uVar30 = ~uVar28 >> 0x1f;
              }
              if (uVar30 == 0) {
                local_208 = (longlong)(int)uVar28;
                local_200 = (longlong)iVar2;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar17) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              uVar30 = uVar28;
              if (*(int *)(pFVar6 + (longlong)(int)uVar19 * 4) <
                  *(int *)((this->DisjointSet).Sizes.AllocatorInstance.Data +
                          (longlong)(int)uVar28 * 4)) {
                uVar30 = uVar19;
                uVar19 = uVar28;
              }
              iVar2 = (this->DisjointSet).Parents.ArrayNum;
              uVar28 = uVar29;
              if ((int)uVar30 < iVar2) {
                uVar28 = ~uVar30 >> 0x1f;
              }
              if (uVar28 == 0) {
                local_208 = (longlong)(int)uVar30;
                local_200 = (longlong)iVar2;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar17) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              lVar25 = (longlong)(int)uVar30;
              *(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar25 * 4) = uVar19;
              iVar2 = (this->DisjointSet).Sizes.ArrayNum;
              uVar28 = uVar29;
              if ((int)uVar30 < iVar2) {
                uVar28 = ~uVar30 >> 0x1f;
              }
              if (uVar28 == 0) {
                local_208 = lVar25;
                local_200 = (longlong)iVar2;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar17) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              iVar2 = (this->DisjointSet).Sizes.ArrayNum;
              iVar4 = *(int *)((this->DisjointSet).Sizes.AllocatorInstance.Data + lVar25 * 4);
              uVar28 = uVar29;
              if ((int)uVar19 < iVar2) {
                uVar28 = ~uVar19 >> 0x1f;
              }
              if (uVar28 == 0) {
                local_208 = (longlong)(int)uVar19;
                local_200 = (longlong)iVar2;
                bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar17) {
                  pcVar7 = (code *)swi(3);
                  (*pcVar7)();
                  return;
                }
              }
              pFVar6 = (this->DisjointSet).Sizes.AllocatorInstance.Data + (longlong)(int)uVar19 * 4;
              *(int *)pFVar6 = *(int *)pFVar6 + iVar4;
            }
          }
          uStack_1a8._0_4_ = (uint)uStack_1a8 & ~auStack_1b8._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_1b8);
          uVar32 = extraout_XMM0_Qb_00;
        } while (uStack_1a8._4_4_ < *(int *)(auStack_1b8._8_8_ + 0x18));
        uVar19 = local_180._8_4_;
      }
      local_180._8_4_ = uVar19 & ~auStack_188._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)auStack_188);
      auVar31 = local_180;
      plVar16 = local_190;
    } while ((int)local_180._12_4_ < *(int *)(local_180._0_8_ + 0x18));
  }
  local_80 = 0;
  if (local_88 != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88);
  }
  TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TAxisAlignedBox3<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TAxisAlignedBox3<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::TAxisAlignedBox3<double>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_c8);
  return;
}

// HasMultipleComponents<UE::Geometry::FDynamicMesh3> @ 14334f940

bool __thiscall
UE::Geometry::FVertexConnectedComponents::HasMultipleComponents<UE::Geometry::FDynamicMesh3>
          (FVertexConnectedComponents *this,FDynamicMesh3 *param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  uint uVar12;
  
  uVar9 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar7 = (param_1->VertexRefCounts).RefCounts.CurBlock;
  uVar12 = 0;
  uVar10 = 0xffffffff;
  if (0 < (int)(uVar7 * 0x200 + uVar9)) {
    do {
      uVar3 = uVar10;
      if (((-1 < (int)uVar12) && ((int)uVar12 < (int)(uVar7 * 0x200 + uVar9))) &&
         (uVar7 = uVar12,
         (ushort)(*(short *)(*(longlong *)
                              ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 2) - 1U)
         < 0xfffe)) {
        while( true ) {
          uVar8 = ~uVar7 >> 0x1f;
          uVar9 = 0;
          if ((int)uVar7 < (this->DisjointSet).Parents.ArrayNum) {
            uVar9 = uVar8;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          lVar11 = (longlong)(int)uVar7;
          if (*(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar11 * 4) == uVar7)
          break;
          uVar9 = 0;
          if ((int)uVar7 < (this->DisjointSet).Parents.ArrayNum) {
            uVar9 = uVar8;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          uVar9 = *(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar11 * 4);
          uVar6 = 0;
          if ((int)uVar9 < (this->DisjointSet).Parents.ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          uVar1 = *(undefined4 *)
                   ((this->DisjointSet).Parents.AllocatorInstance.Data + (longlong)(int)uVar9 * 4);
          uVar9 = 0;
          if ((int)uVar7 < (this->DisjointSet).Parents.ArrayNum) {
            uVar9 = uVar8;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          *(undefined4 *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar11 * 4) = uVar1;
          uVar9 = 0;
          if ((int)uVar7 < (this->DisjointSet).Parents.ArrayNum) {
            uVar9 = uVar8;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          uVar7 = *(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar11 * 4);
        }
        if (0 < param_2) {
          uVar9 = 0;
          if ((int)uVar7 < (this->DisjointSet).Sizes.ArrayNum) {
            uVar9 = uVar8;
          }
          if ((uVar9 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar2 = (code *)swi(3);
            uVar5 = (*pcVar2)();
            return (bool)uVar5;
          }
          if (*(int *)((this->DisjointSet).Sizes.AllocatorInstance.Data + lVar11 * 4) < param_2)
          goto LAB_14334fbc6;
        }
        uVar3 = uVar7;
        if ((uVar10 != 0xffffffff) && (uVar3 = uVar10, uVar10 != uVar7)) {
          return true;
        }
      }
LAB_14334fbc6:
      uVar10 = uVar3;
      uVar7 = (param_1->VertexRefCounts).RefCounts.CurBlock;
      uVar12 = uVar12 + 1;
      uVar9 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    } while ((int)uVar12 < (int)(uVar7 * 0x200 + uVar9));
  }
  return false;
}

// MakeComponentMap<UE::Geometry::FDynamicMesh3> @ 143356df0

TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> * __thiscall
UE::Geometry::FVertexConnectedComponents::MakeComponentMap<UE::Geometry::FDynamicMesh3>
          (FVertexConnectedComponents *this,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
          *__return_storage_ptr__,FDynamicMesh3 *param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *pTVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  ulonglong uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  uint local_res10 [2];
  int local_res18;
  int local_res20;
  int local_58;
  undefined1 local_54 [4];
  uint *local_50;
  int *local_48;
  
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  uVar12 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  uVar7 = (param_1->VertexRefCounts).RefCounts.CurBlock;
  uVar8 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
  local_res18 = 0;
  local_res20 = param_2;
  if (0 < (int)(uVar7 * 0x200 + uVar8)) {
    do {
      if (((-1 < (int)uVar12) && ((int)uVar12 < (int)(uVar7 * 0x200 + uVar8))) &&
         (uVar7 = uVar12,
         (ushort)(*(short *)(*(longlong *)
                              ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar12 >> 9) * 8) + (ulonglong)(uVar12 & 0x1ff) * 2) - 1U)
         < 0xfffe)) {
        while( true ) {
          uVar10 = (ulonglong)uVar7;
          uVar11 = ~uVar7 >> 0x1f;
          uVar8 = 0;
          if ((int)uVar7 < (this->DisjointSet).Parents.ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                     (*pcVar2)();
            return pTVar6;
          }
          iVar5 = local_res20;
          lVar13 = (longlong)(int)uVar7;
          if (*(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar13 * 4) == uVar7)
          break;
          uVar8 = 0;
          if ((int)uVar7 < (this->DisjointSet).Parents.ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                     (*pcVar2)();
            return pTVar6;
          }
          uVar8 = *(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar13 * 4);
          uVar4 = 0;
          if ((int)uVar8 < (this->DisjointSet).Parents.ArrayNum) {
            uVar4 = ~uVar8 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                     (*pcVar2)();
            return pTVar6;
          }
          uVar1 = *(undefined4 *)
                   ((this->DisjointSet).Parents.AllocatorInstance.Data + (longlong)(int)uVar8 * 4);
          uVar8 = 0;
          if ((int)uVar7 < (this->DisjointSet).Parents.ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                     (*pcVar2)();
            return pTVar6;
          }
          *(undefined4 *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar13 * 4) = uVar1;
          uVar8 = 0;
          if ((int)uVar7 < (this->DisjointSet).Parents.ArrayNum) {
            uVar8 = uVar11;
          }
          if ((uVar8 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                     (*pcVar2)();
            return pTVar6;
          }
          uVar7 = *(uint *)((this->DisjointSet).Parents.AllocatorInstance.Data + lVar13 * 4);
        }
        local_res10[0] = uVar7;
        if (0 < local_res20) {
          uVar8 = 0;
          if ((int)uVar7 < (this->DisjointSet).Sizes.ArrayNum) {
            uVar8 = uVar11;
          }
          if (uVar8 == 0) {
            bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pTVar6 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *
                       )(*pcVar2)();
              return pTVar6;
            }
            uVar10 = (ulonglong)local_res10[0];
          }
          if (*(int *)((this->DisjointSet).Sizes.AllocatorInstance.Data + lVar13 * 4) < iVar5)
          goto LAB_14335714a;
        }
        if (*(int *)&__return_storage_ptr__->field_0x8 !=
            *(int *)&__return_storage_ptr__->field_0x34) {
          puVar9 = &__return_storage_ptr__->field_0x38;
          if (*(undefined1 **)&__return_storage_ptr__->field_0x40 != (undefined1 *)0x0) {
            puVar9 = *(undefined1 **)&__return_storage_ptr__->field_0x40;
          }
          iVar5 = *(int *)(puVar9 + (*(int *)&__return_storage_ptr__->field_0x48 - 1 & uVar10) * 4);
          if (iVar5 != -1) {
            do {
              if (*(int *)(*(longlong *)__return_storage_ptr__ + (longlong)iVar5 * 0x10) ==
                  (int)uVar10) goto LAB_14335714a;
              iVar5 = *(int *)(*(longlong *)__return_storage_ptr__ + 8 + (longlong)iVar5 * 0x10);
            } while (iVar5 != -1);
          }
        }
        local_50 = local_res10;
        local_58 = local_res18;
        local_48 = &local_58;
        local_res18 = local_res18 + 1;
        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
        Emplace<TPairInitializer<int_const_&,int_&&>_>
                  ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    *)__return_storage_ptr__,(TPairInitializer<int_const_&,int_&&> *)local_54,
                   (bool *)(local_54 + 4));
      }
LAB_14335714a:
      uVar7 = (param_1->VertexRefCounts).RefCounts.CurBlock;
      uVar12 = uVar12 + 1;
      uVar8 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed;
    } while ((int)uVar12 < (int)(uVar7 * 0x200 + uVar8));
  }
  return __return_storage_ptr__;
}

// operator() @ 143376080

bool __thiscall
`UE::Geometry::FVertexConnectedComponents::ConnectCloseVertices<UE::Geometry::FDynamicMesh3>'::__l4
::<lambda_2>::operator()(void *this,int *param_1,double param_2)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = UE::Geometry::FSizedDisjointSet::Union
                    (*(FSizedDisjointSet **)this,*(int *)((longlong)this + 8),*param_1);
  lVar1 = *(longlong *)this;
  uVar6 = 0;
  if ((int)uVar5 < *(int *)(lVar1 + 0x18)) {
    uVar6 = ~uVar5 >> 0x1f;
  }
  if (uVar6 == 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
  }
  return *(int *)(*(longlong *)(lVar1 + 0x10) + (longlong)(int)uVar5 * 4) <
         *(int *)((longlong)this + 0xc);
}

