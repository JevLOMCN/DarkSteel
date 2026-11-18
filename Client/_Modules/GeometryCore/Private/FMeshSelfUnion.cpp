// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 6

// operator() @ 143570f00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`UE::Geometry::FMeshSelfUnion::Compute'::__l63::<lambda_2>::operator()(void *this,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  FDynamicMesh3 *this_00;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *pTVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  TVector<double> *pTVar14;
  TVector<double> *pTVar15;
  longlong *plVar16;
  uint uVar17;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  longlong lVar22;
  undefined1 auStackY_208 [32];
  TVector<double>_u_0 local_1d0;
  undefined1 local_1b8 [8];
  longlong *local_1b0;
  longlong local_1a8;
  longlong lStack_1a0;
  int local_198;
  undefined4 uStack_194;
  code *local_188;
  longlong local_178 [3];
  longlong *local_160;
  TVector<double>_u_0 local_158;
  TVector<double>_u_0 local_138;
  undefined8 local_118 [2];
  code *local_108;
  longlong local_f8 [3];
  longlong *local_e0;
  undefined1 local_d8;
  TVector<double> local_c8 [3];
  ulonglong local_78;
  ulonglong uVar18;
  
  if (param_1 < 0) {
    return;
  }
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_208;
  this_00 = *(FDynamicMesh3 **)(*(longlong *)this + 0x68);
  if ((int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
           (this_00->TriangleRefCounts).RefCounts.CurBlockUsed) <= param_1) {
    return;
  }
  lVar22 = (longlong)param_1;
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance
                                     .Data + (ulonglong)((uint)param_1 >> 9) * 8) +
                                  (ulonglong)(param_1 & 0x1ff) * 2) - 1U)) {
    return;
  }
  UE::Geometry::FDynamicMesh3::GetTriCentroid(this_00,(TVector<double> *)&local_1d0._s_0,param_1);
  pTVar6 = *(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)((longlong)this + 0x30);
  pTVar14 = UE::Geometry::FMeshNormals::operator[]
                      (*(FMeshNormals **)((longlong)this + 0x10),param_1);
  dVar1 = *(double *)(*(longlong *)this + 0x20);
  dVar9 = dVar1 * (pTVar14->field0_0x0)._s_0.X + local_1d0._s_0.X;
  dVar8 = dVar1 * (pTVar14->field0_0x0)._s_0.Y + local_1d0._s_0.Y;
  dVar1 = dVar1 * (pTVar14->field0_0x0)._s_0.Z + local_1d0._s_0.Z;
  UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(pTVar6,false);
  local_158._s_0.X = dVar9;
  local_158._s_0.Y = dVar8;
  local_158._s_0.Z = dVar1;
  dVar1 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::branch_fast_winding_num
                    (pTVar6,pTVar6->Tree->RootIndex,(TVector<double> *)&local_158._s_0);
  bVar11 = dVar1 < *(double *)(*(longlong *)this + 0x28);
  uVar18 = 0;
  uVar20 = 0;
  if (*(char *)(*(longlong *)this + 0x30) != '\0') {
    if (!bVar11) goto LAB_143571454;
    pTVar6 = *(TFastWindingTree<UE::Geometry::FDynamicMesh3> **)((longlong)this + 0x30);
    pTVar14 = UE::Geometry::FMeshNormals::operator[]
                        (*(FMeshNormals **)((longlong)this + 0x10),param_1);
    dVar1 = *(double *)(*(longlong *)this + 0x20);
    local_138._s_0.X = local_1d0._s_0.X - dVar1 * (pTVar14->field0_0x0)._s_0.X;
    local_138._s_0.Y = local_1d0._s_0.Y - dVar1 * (pTVar14->field0_0x0)._s_0.Y;
    local_138._s_0.Z = local_1d0._s_0.Z - dVar1 * (pTVar14->field0_0x0)._s_0.Z;
    dVar1 = UE::Geometry::TFastWindingTree<UE::Geometry::FDynamicMesh3>::FastWindingNumber
                      (pTVar6,(TVector<double> *)&local_138._s_0);
    bVar11 = *(double *)(*(longlong *)this + 0x28) <= dVar1 &&
             dVar1 != *(double *)(*(longlong *)this + 0x28);
  }
  if (bVar11 != false) {
    plVar16 = *(longlong **)((longlong)this + 0x18);
    uVar19 = 0;
    uVar21 = (uint)~param_1 >> 0x1f;
    uVar12 = uVar19;
    if (param_1 < (int)plVar16[1]) {
      uVar12 = uVar21;
    }
    if ((uVar12 == 0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar10)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    local_188 = (code *)0x0;
    iVar5 = *(int *)(*plVar16 + lVar22 * 4);
    local_1a8 = *(longlong *)((longlong)this + 0x10);
    lStack_1a0 = *(longlong *)((longlong)this + 0x18);
    local_198 = iVar5;
    local_160 = FMemory::Malloc(0x20,8);
    *local_160 = (longlong)
                 &UE::Core::Private::Function::
                  TFunction_OwnedObject<``UE::Geometry::FMeshSelfUnion::Compute'::`63'::<lambda_2>::operator()'::`11'::<lambda_1>,0,1>
                  ::_vftable_;
    local_160[1] = local_1a8;
    local_160[2] = lStack_1a0;
    local_160[3] = CONCAT44(uStack_194,local_198);
    if (local_160 + 1 != (longlong *)0x0) {
      local_188 = UE::Core::Private::Function::
                  TFunctionRefCaller<``UE::Geometry::FMeshSelfUnion::Compute'::__l63::<lambda_2>::operator()'::__l11::<lambda_1>,bool,int>
                  ::Call;
    }
    local_118[0] = *(undefined8 *)(*(longlong *)this + 0x18);
    local_108 = local_188;
    local_e0 = (longlong *)0x0;
    if (local_188 != (code *)0x0) {
      plVar16 = local_178;
      if (local_160 != (longlong *)0x0) {
        plVar16 = local_160;
      }
      (**(code **)*plVar16)((int)*(undefined8 *)(*(longlong *)this + 0x18),local_f8);
    }
    local_d8 = 0;
    if (local_188 != (code *)0x0) {
      plVar16 = local_178;
      if (local_160 != (longlong *)0x0) {
        plVar16 = local_160;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
    uVar12 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x20))
                       (*(longlong **)((longlong)this + 8),&local_1d0,local_1b8,local_118);
    if (-1 < (int)uVar12) {
      pTVar14 = UE::Geometry::FMeshNormals::operator[]
                          (*(FMeshNormals **)((longlong)this + 0x10),uVar12);
      pTVar15 = UE::Geometry::FMeshNormals::operator[]
                          (*(FMeshNormals **)((longlong)this + 0x10),param_1);
      dVar1 = (pTVar15->field0_0x0)._s_0.Y;
      dVar8 = (pTVar15->field0_0x0)._s_0.X;
      dVar9 = (pTVar14->field0_0x0)._s_0.Y;
      dVar2 = (pTVar15->field0_0x0)._s_0.Z;
      dVar3 = (pTVar14->field0_0x0)._s_0.X;
      dVar4 = (pTVar14->field0_0x0)._s_0.Z;
      UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (*(FDynamicMesh3 **)(*(longlong *)this + 0x68),param_1,local_c8,local_c8 + 1,
                 local_c8 + 2);
      while( true ) {
        iVar13 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x20))
                           (*(longlong **)((longlong)this + 8),local_c8 + uVar18,local_1b8,local_118
                           );
        if (iVar13 == -1) break;
        uVar17 = (int)uVar18 + 1;
        uVar18 = (ulonglong)uVar17;
        if (2 < (int)uVar17) {
          if (0.0 < dVar1 * dVar9 + dVar8 * dVar3 + dVar2 * dVar4) {
            plVar16 = *(longlong **)((longlong)this + 0x18);
            if ((int)uVar12 < (int)plVar16[1]) {
              uVar20 = ~uVar12 >> 0x1f;
            }
            if ((uVar20 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            iVar13 = *(int *)(*plVar16 + (longlong)(int)uVar12 * 4);
            local_1b0 = *(longlong **)((longlong)this + 0x20);
            uVar20 = uVar19;
            if (param_1 < (int)local_1b0[1]) {
              uVar20 = uVar21;
            }
            if ((uVar20 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(bool *)(lVar22 + *local_1b0) = iVar5 < iVar13;
            if (iVar5 < iVar13) {
              plVar16 = *(longlong **)((longlong)this + 0x28);
              if (param_1 < (int)plVar16[1]) {
                uVar19 = uVar21;
              }
              if ((uVar19 == 0) &&
                 (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar11)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              *(uint *)(*plVar16 + lVar22 * 4) = uVar12;
            }
          }
          else {
            plVar16 = *(longlong **)((longlong)this + 0x20);
            if (param_1 < (int)plVar16[1]) {
              uVar20 = uVar21;
            }
            if ((uVar20 == 0) &&
               (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar11)) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            *(undefined1 *)(lVar22 + *plVar16) = 0;
          }
          if (local_108 == (code *)0x0) {
            return;
          }
          plVar16 = local_f8;
          if (local_e0 != (longlong *)0x0) {
            plVar16 = local_e0;
          }
          (**(code **)(*plVar16 + 0x10))();
          return;
        }
      }
    }
    if (local_108 != (code *)0x0) {
      plVar16 = local_f8;
      if (local_e0 != (longlong *)0x0) {
        plVar16 = local_e0;
      }
      (**(code **)(*plVar16 + 0x10))();
    }
  }
LAB_143571454:
  plVar16 = *(longlong **)((longlong)this + 0x20);
  if (param_1 < (int)plVar16[1]) {
    uVar20 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar20 == 0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  *(bool *)(lVar22 + *plVar16) = bVar11;
  return;
}

// operator() @ 143571500

TAxisAlignedBox3<double> * __thiscall
`UE::Geometry::FMeshSelfUnion::Compute'::__l2::<lambda_3>::operator()
          (void *this,TAxisAlignedBox3<double> *__return_storage_ptr__,int param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  double dVar17;
  double dVar18;
  undefined8 local_38;
  undefined8 local_20;
  
  lVar4 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x68) + 0x10);
  uVar5 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)(*(longlong *)this + 0x68) + 0x1c0) +
             (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 0x10);
  uVar7 = (ulonglong)((uint)uVar5 & 0x1ff);
  lVar6 = *(longlong *)(lVar4 + ((uVar5 & 0xffffffff) >> 9) * 8);
  uVar8 = (ulonglong)((uint)(uVar5 >> 0x20) & 0x1ff);
  auVar2 = *(undefined1 (*) [16])(lVar6 + uVar7 * 0x18);
  dVar1 = *(double *)(lVar6 + 0x10 + uVar7 * 0x18);
  lVar4 = *(longlong *)(lVar4 + (uVar5 >> 0x29) * 8);
  auVar3 = *(undefined1 (*) [16])(lVar4 + uVar8 * 0x18);
  dVar18 = *(double *)(lVar4 + 0x10 + uVar8 * 0x18);
  dVar17 = auVar2._0_8_;
  local_20 = auVar3._0_8_;
  uVar9 = auVar2._0_4_;
  uVar10 = auVar2._4_4_;
  uVar13 = auVar3._0_4_;
  uVar14 = auVar3._4_4_;
  local_38 = dVar17;
  if (local_20 < dVar17) {
    uVar9 = auVar3._0_4_;
    uVar10 = auVar3._4_4_;
    uVar13 = auVar2._0_4_;
    uVar14 = auVar2._4_4_;
    local_38 = local_20;
    local_20 = dVar17;
  }
  uVar11 = auVar2._8_4_;
  uVar12 = auVar2._12_4_;
  uVar15 = auVar3._8_4_;
  uVar16 = auVar3._12_4_;
  if (auVar3._8_8_ < auVar2._8_8_) {
    uVar9 = (undefined4)local_38;
    uVar10 = local_38._4_4_;
    uVar11 = auVar3._8_4_;
    uVar12 = auVar3._12_4_;
    uVar13 = (undefined4)local_20;
    uVar14 = local_20._4_4_;
    uVar15 = auVar2._8_4_;
    uVar16 = auVar2._12_4_;
  }
  dVar17 = dVar1;
  if (dVar18 < dVar1) {
    dVar17 = dVar18;
    dVar18 = dVar1;
  }
  *(undefined4 *)&(__return_storage_ptr__->Min).field0_0x0 = uVar9;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 4) = uVar10;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 8) = uVar11;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Min).field0_0x0 + 0xc) = uVar12;
  *(undefined4 *)&(__return_storage_ptr__->Max).field0_0x0 = uVar13;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 4) = uVar14;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 8) = uVar15;
  *(undefined4 *)((longlong)&(__return_storage_ptr__->Max).field0_0x0 + 0xc) = uVar16;
  (__return_storage_ptr__->Min).field0_0x0._s_0.Z = dVar17;
  (__return_storage_ptr__->Max).field0_0x0._s_0.Z = dVar18;
  return __return_storage_ptr__;
}

// Compute @ 14357e130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall UE::Geometry::FMeshSelfUnion::Compute(FMeshSelfUnion *this)

{
  FMutex *this_00;
  double *pdVar1;
  double *pdVar2;
  undefined8 *puVar3;
  atomic<unsigned_char> aVar4;
  undefined8 uVar5;
  longlong lVar6;
  TBitArray<FDefaultBitArrayAllocator> *pTVar7;
  FDynamicMeshAttributeSet *pFVar8;
  undefined8 *puVar9;
  code *pcVar10;
  double dVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  undefined8 uVar15;
  char cVar16;
  bool bVar17;
  undefined1 uVar18;
  short sVar19;
  int iVar20;
  int iVar21;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *pTVar22;
  TArrayView<int_const_,int> *pTVar23;
  ulonglong uVar24;
  TAxisAlignedBox3<double> *pTVar25;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar26;
  byte bVar27;
  undefined ***pppuVar28;
  longlong *plVar29;
  FDynamicMesh3 *pFVar30;
  ulonglong uVar31;
  uint *puVar32;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar33;
  ForElementType<FSetElementId> FVar34;
  uint *puVar35;
  uint uVar36;
  uint uVar37;
  FRefCountVector *pFVar38;
  FScriptContainerElement *pFVar39;
  uint uVar40;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar41;
  ForAnyElementType FVar42;
  undefined1 *puVar43;
  longlong lVar44;
  ulonglong uVar45;
  uint uVar46;
  undefined4 uVar47;
  uint uVar48;
  FScriptContainerElement *pFVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auStackY_f58 [32];
  char local_f08;
  uint local_f04;
  undefined4 local_f00 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_ef8;
  undefined1 local_ee8;
  undefined1 local_ee7;
  undefined1 local_ee6;
  undefined1 local_ee5;
  undefined1 local_ee4 [4];
  ForAnyElementType local_ee0;
  undefined8 local_ed8;
  TArray<int,TSizedDefaultAllocator<32>_> local_ed0;
  uint local_ec0 [2];
  undefined8 local_eb8;
  uint local_eb0;
  int local_eac;
  TArray<bool,TSizedDefaultAllocator<32>_> local_ea8;
  undefined1 local_e98 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_e90;
  TVector<double>_u_0 local_e80;
  TArray<int,TSizedDefaultAllocator<32>_> local_e68;
  TArray<int,TSizedDefaultAllocator<32>_> local_e58;
  TArray<int,TSizedDefaultAllocator<32>_> local_e48;
  int local_e38;
  uint uStack_e34;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e30;
  uint local_e28;
  uint uStack_e24;
  uint uStack_e20;
  undefined4 uStack_e1c;
  longlong *local_e18;
  undefined8 uStack_e10;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_e08;
  undefined8 uStack_e00;
  undefined8 uStack_df8;
  int local_df0;
  undefined4 uStack_dec;
  longlong *local_de8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_de0;
  undefined8 local_dc0;
  undefined4 local_db8;
  uint local_db4;
  TArray<int,TSizedDefaultAllocator<32>_> local_db0;
  int local_da0 [3];
  int local_d94;
  FDynamicMesh3 *local_d90;
  double local_d88;
  undefined1 local_d80;
  char local_d7f;
  TArray<int,TSizedDefaultAllocator<32>_> local_d78;
  FMeshConnectedComponents local_d68;
  undefined8 local_d50;
  undefined8 local_d48;
  undefined1 local_d38 [4];
  undefined8 local_d34;
  undefined8 local_d2c;
  undefined8 local_d24;
  uint local_d18 [3];
  int local_d0c [5];
  FSparseDynamicOctree3 *local_cf8;
  FMeshSelfUnion *local_cf0;
  FIntersectionsQueryResult local_ce8;
  FMeshNormals local_cb8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_ca0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c80;
  TVector<double>_u_0 local_c60;
  double local_c48;
  double local_c40;
  double local_c38;
  double local_c30;
  double local_c28;
  double local_c20;
  TVector<double>_u_0 local_c18;
  double local_c00;
  undefined1 local_bf8 [8];
  undefined1 local_bf0 [8];
  undefined1 local_be8 [8];
  int local_be0;
  undefined1 local_bdc [20];
  BaseIterator local_bc8;
  int local_bb8 [2];
  ForAnyElementType *local_bb0;
  int local_ba8;
  int local_ba4;
  int local_ba0;
  FSparseDynamicOctree3 *local_b98;
  FMeshSelfUnion *local_b90;
  undefined1 local_b88 [12];
  uint uStack_b7c;
  TBitArray<FDefaultBitArrayAllocator> *local_b78;
  undefined8 uStack_b70;
  longlong local_b68;
  int iStack_b60;
  undefined4 uStack_b5c;
  longlong *local_b58;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_b50;
  undefined8 uStack_b30;
  code *local_b28;
  FMeshSelfUnion **local_b20;
  IndexIterator local_b18;
  IndexIterator local_b08;
  FVector3i *local_af8;
  uint *local_af0;
  FMeshSelfUnion *local_ae8;
  TVector<double>_u_0 *local_ae0;
  code *local_ad8;
  ForAnyElementType **local_ad0;
  code *local_ac8;
  FMeshSelfUnion **local_ac0;
  undefined1 local_ab8 [16];
  uint *local_aa8;
  uint *local_aa0;
  uint *local_a98;
  uint *local_a90;
  uint *local_a88;
  uint *local_a80;
  uint *local_a78;
  uint *local_a70;
  uint *local_a68;
  uint *local_a60;
  uint *local_a58;
  uint *local_a50;
  undefined8 local_a48;
  undefined8 uStack_a40;
  undefined8 local_a38;
  undefined8 uStack_a30;
  double local_a28;
  double dStack_a20;
  double local_a18;
  undefined1 local_a10 [16];
  double local_a00;
  undefined8 local_9f0;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  code *local_9b8 [2];
  undefined **local_9a8;
  FMeshSelfUnion *local_9a0;
  undefined ***local_990;
  FVector3i local_988;
  undefined8 local_978;
  undefined8 uStack_970;
  undefined8 local_968;
  undefined8 uStack_960;
  double local_958;
  double local_950;
  double local_948;
  undefined1 local_940 [16];
  double local_930;
  TVector<double>_u_0 local_928;
  double local_910;
  double dStack_908;
  double local_900;
  FMeshSelfUnion *local_8f8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_8f0;
  FMeshNormals *local_8e8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_8e0;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_8d8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_8d0;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *local_8c8;
  TArrayView<int_const_,int> local_8b8;
  TVector<double>_u_0 local_8a8;
  TVector<double>_u_0 local_888;
  TRangedForIterator local_868;
  double local_838;
  double dStack_830;
  double local_828;
  double local_820;
  double dStack_818;
  double local_810;
  double local_808;
  double dStack_800;
  double local_7f8;
  double local_7f0;
  double dStack_7e8;
  double local_7e0;
  double local_7d8;
  double dStack_7d0;
  double local_7c8;
  double local_7c0;
  double dStack_7b8;
  double local_7b0;
  undefined8 local_798;
  TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> local_790;
  TFunction<bool___cdecl(int,int)> local_778;
  TArrayView<int_const_,int> local_748;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_738;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_700;
  undefined4 local_6c4;
  TAxisAlignedBox3<double> local_6c0;
  TAxisAlignedBox3<double> local_690;
  TAxisAlignedBox3<double> local_660;
  TAxisAlignedBox3<double> local_630;
  undefined1 local_5f8 [32];
  uint *local_5d8;
  uint local_5d0;
  undefined4 local_5cc;
  undefined4 local_5c8;
  int local_5c4;
  undefined1 local_5c0 [8];
  ForElementType<FSetElementId> local_5b8;
  int local_5b0;
  undefined1 local_5a8 [32];
  undefined1 *local_588;
  uint local_580;
  undefined4 local_57c;
  undefined4 local_578;
  int local_574;
  ForElementType<FSetElementId> local_568;
  int local_560;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_558;
  undefined1 local_508 [56];
  longlong *local_4d0;
  bool local_4c8;
  undefined1 local_4b8 [72];
  int local_470;
  TWrapAroundGridIndexer3<double> local_460 [3];
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> local_448;
  FCutWorkingInfo local_388;
  FSparseDynamicOctree3 local_2a8;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_f58;
  FDynamicMesh3::GetBounds(this->Mesh,(TAxisAlignedBox3<double> *)&local_c60._s_0,true);
  dVar14 = __real_3fe0000000000000;
  dVar13 = __real_3ff0000000000000;
  dVar11 = local_c38 - local_c60._s_0.Z;
  dVar50 = local_c48 - local_c60._s_0.X;
  dVar51 = local_c40 - local_c60._s_0.Y;
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  if (dVar50 <= 0.0) {
    dVar50 = 0.0;
  }
  if (dVar51 <= 0.0) {
    dVar51 = 0.0;
  }
  if (dVar51 <= dVar11) {
    dVar51 = dVar11;
  }
  local_a48 = 0;
  uStack_a40 = 0;
  if (dVar51 <= dVar50) {
    dVar51 = dVar50;
  }
  local_a38 = ___xmm_3ff00000000000000000000000000000;
  uStack_a30 = _UNK_15061cbc8;
  if (__real_412e848000000000 <= dVar51) {
    dVar51 = __real_412e848000000000;
  }
  if (dVar51 <= __real_3f847ae147ae147b) {
    dVar51 = __real_3f847ae147ae147b;
  }
  dVar51 = __real_3ff0000000000000 / dVar51;
  local_a28 = (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X -
              (local_c60._s_0.X + local_c48) * __real_3fe0000000000000) * dVar51;
  local_a18 = (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z -
              (local_c60._s_0.Z + local_c38) * __real_3fe0000000000000) * dVar51;
  dStack_a20 = (UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y -
               (local_c60._s_0.Y + local_c40) * __real_3fe0000000000000) * dVar51;
  local_a10._8_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar51,0);
  local_a10._0_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar51;
  local_a10._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar51) >> 0x20);
  local_a00 = dVar51 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  MeshTransformsLocal::
  TransformMeshHelper<_MeshTransforms::ApplyTransform_::__l2::<lambda_1>,_MeshTransforms::ApplyTransform_::__l2::<lambda_2>,_MeshTransforms::ApplyTransform_::__l2::<lambda_3>,_MeshTransforms::ApplyTransform_::__l2::<lambda_4>_>
            (this->Mesh,(TTransformSRT3<double> *)&local_a48,(TTransformSRT3<double> *)&local_a48,
             (TTransformSRT3<double> *)&local_a48,(TTransformSRT3<double> *)&local_a48,All);
  local_978 = 0;
  uStack_970 = 0;
  local_968 = ___xmm_3ff00000000000000000000000000000;
  uStack_960 = _UNK_15061cbc8;
  local_958 = (local_c60._s_0.X + local_c48) * dVar14;
  dVar51 = dVar13 / dVar51;
  local_948 = (local_c60._s_0.Z + local_c38) * dVar14;
  local_950 = (local_c60._s_0.Y + local_c40) * dVar14;
  local_930 = dVar51 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  local_940._8_4_ = SUB84(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar51,0);
  local_940._0_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar51;
  local_940._12_4_ =
       (int)((ulonglong)(UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y * dVar51) >> 0x20);
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
            (&local_448,this->Mesh,true);
  local_448.BoxEps = this->SnapTolerance;
  pTVar41 = (TArray<int,TSizedDefaultAllocator<32>_> *)0x0;
  local_9a8 = &Core::Private::Function::
               TFunction_OwnedObject<`UE::Geometry::FMeshSelfUnion::Compute'::`2'::<lambda_1>,0,0>::
               _vftable_;
  local_508._0_8_ = __real_7fefffffffffffff;
  local_9b8[0] = Core::Private::Function::
                 TFunctionRefCaller<`UE::Geometry::FMeshSelfUnion::Compute'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
                 ::Call;
  local_990 = (undefined ***)0x0;
  local_508._16_8_ = 0;
  local_4d0 = (longlong *)0x0;
  local_4c8 = false;
  local_ce8.Points.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ce8.Points.ArrayNum = 0;
  local_ce8.Points.ArrayMax = 0;
  local_ce8.Segments.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ce8.Segments.ArrayNum = 0;
  local_ce8.Segments.ArrayMax = 0;
  local_ce8.Polygons.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_ce8.Polygons.ArrayNum = 0;
  local_ce8.Polygons.ArrayMax = 0;
  local_9a0 = this;
  pTVar22 = TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>::
            TFunctionRef<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)><TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)>_&>
                      (&local_790,
                       (TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
                       local_9b8);
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::find_self_intersections
            (&local_448,&local_ce8,true,pTVar22,(FQueryOptions *)local_508);
  if (local_9b8[0] != (code *)0x0) {
    pppuVar28 = &local_9a8;
    if (local_990 != (undefined ***)0x0) {
      pppuVar28 = local_990;
    }
    (*(code *)(*pppuVar28)[2])();
  }
  if (local_508._16_8_ != 0) {
    plVar29 = (longlong *)(local_508 + 0x20);
    if (local_4d0 != (longlong *)0x0) {
      plVar29 = local_4d0;
    }
    (**(code **)(*plVar29 + 0x10))();
  }
  cVar16 = (**(code **)(this->_padding_ + 8))(this);
  if (cVar16 != '\0') {
    bVar17 = false;
    goto LAB_143580e57;
  }
  local_d90 = this->Mesh;
  local_d88 = this->SnapTolerance;
  local_d7f = this->bCollapseDegenerateEdgesOnCut;
  local_d80 = 0;
  local_d78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d78.ArrayNum = 0;
  local_d78.ArrayMax = 0;
  MeshCut::FCutWorkingInfo::FCutWorkingInfo(&local_388,local_d90,local_d88);
  MeshCut::FCutWorkingInfo::AddSegments(&local_388,&local_ce8,0);
  MeshCut::FCutWorkingInfo::AddSegments(&local_388,&local_ce8,1);
  MeshCut::FCutWorkingInfo::InsertFaceVertices(&local_388);
  MeshCut::FCutWorkingInfo::InsertEdgeVertices(&local_388);
  pTVar33 = &local_d78;
  if (local_d7f == '\0') {
    pTVar33 = pTVar41;
  }
  MeshCut::FCutWorkingInfo::ConnectEdges
            (&local_388,pTVar33,(TArray<int,TSizedDefaultAllocator<32>_> *)0x0);
  MeshCut::FCutWorkingInfo::~FCutWorkingInfo(&local_388);
  cVar16 = (**(code **)(this->_padding_ + 8))(this);
  if (cVar16 == '\0') {
    if (this->bCollapseDegenerateEdgesOnCut != false) {
      local_ef8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_ef8.ArrayNum = 0;
      local_ef8.ArrayMax = 0;
      dVar11 = this->DegenerateEdgeTolFactor * this->DegenerateEdgeTolFactor *
               this->SnapTolerance * this->SnapTolerance;
      if (0 < local_d78.ArrayNum) {
        do {
          uVar36 = (uint)pTVar41;
          uVar40 = 0;
          if ((int)uVar36 < local_d78.ArrayNum) {
            uVar40 = ~uVar36 >> 0x1f;
          }
          if ((uVar40 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          uVar46 = *(int *)(local_d78.AllocatorInstance.Data + (longlong)(int)uVar36 * 4) + 1 +
                   uVar36;
          uVar40 = uVar36 + 1;
          uVar36 = uVar36 + 2;
          if ((int)uVar36 < (int)uVar46) {
            lVar44 = (longlong)(int)uVar40 << 2;
            do {
              uVar37 = 0;
              if ((int)uVar40 < local_d78.ArrayNum) {
                uVar37 = ~uVar40 >> 0x1f;
              }
              if ((uVar37 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                uVar18 = (*pcVar10)();
                return (bool)uVar18;
              }
              uVar37 = *(uint *)(local_d78.AllocatorInstance.Data + lVar44);
              uVar48 = 0;
              if ((int)uVar36 < local_d78.ArrayNum) {
                uVar48 = ~uVar36 >> 0x1f;
              }
              if ((uVar48 == 0) &&
                 (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar17)) {
                pcVar10 = (code *)swi(3);
                uVar18 = (*pcVar10)();
                return (bool)uVar18;
              }
              lVar44 = lVar44 + 4;
              uVar48 = *(uint *)(local_d78.AllocatorInstance.Data + lVar44);
              pFVar49 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
              lVar6 = *(longlong *)(pFVar49 + (ulonglong)(uVar48 >> 9) * 8);
              pdVar1 = (double *)(lVar6 + (ulonglong)(uVar48 & 0x1ff) * 0x18);
              local_808 = *pdVar1;
              dStack_800 = pdVar1[1];
              local_7f8 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar48 & 0x1ff) * 0x18);
              lVar6 = *(longlong *)(pFVar49 + (ulonglong)(uVar37 >> 9) * 8);
              pdVar1 = (double *)(lVar6 + (ulonglong)(uVar37 & 0x1ff) * 0x18);
              local_7f0 = *pdVar1;
              dStack_7e8 = pdVar1[1];
              local_7e0 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar37 & 0x1ff) * 0x18);
              if ((dStack_800 - dStack_7e8) * (dStack_800 - dStack_7e8) +
                  (local_808 - local_7f0) * (local_808 - local_7f0) +
                  (local_7f8 - local_7e0) * (local_7f8 - local_7e0) < dVar11) {
                local_eac = FDynamicMesh3::FindEdge(this->Mesh,uVar37,uVar48);
                if (((local_ef8.AllocatorInstance.Data <= (FScriptContainerElement *)&local_eac) &&
                    ((FScriptContainerElement *)&local_eac <
                     local_ef8.AllocatorInstance.Data + (longlong)local_ef8.ArrayMax * 4)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  uVar18 = (*pcVar10)();
                  return (bool)uVar18;
                }
                iVar20 = local_ef8.ArrayNum;
                if (local_ef8.ArrayNum == local_ef8.ArrayMax) {
                  iVar20 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_ef8.AllocatorInstance,&local_ef8.ArrayMax);
                }
                local_ef8.ArrayNum = iVar20 + 1;
                *(int *)(local_ef8.AllocatorInstance.Data + (longlong)iVar20 * 4) = local_eac;
              }
              uVar40 = uVar40 + 1;
              uVar36 = uVar36 + 1;
            } while ((int)uVar36 < (int)uVar46);
          }
          pTVar41 = (TArray<int,TSizedDefaultAllocator<32>_> *)(ulonglong)uVar46;
        } while ((int)uVar46 < local_d78.ArrayNum);
      }
      uVar24 = 0;
      pTVar23 = TArrayView<int_const_,int>::
                TArrayView<int_const_,int><TArray<int,TSizedDefaultAllocator<32>_>_&,TArray<int,TSizedDefaultAllocator<32>_>_>
                          (&local_748,&local_ef8);
      local_8b8.DataPtr = pTVar23->DataPtr;
      local_8b8.ArrayNum = pTVar23->ArrayNum;
      local_8b8._12_4_ = *(undefined4 *)&pTVar23->field_0xc;
      local_558.Elements._0_8_ = 0;
      local_558.Elements._8_8_ = 0;
      local_558.Elements._32_8_ = 0;
      local_558.Elements._40_4_ = 0;
      local_558.Elements._44_4_ = 0x80;
      local_558.Elements._48_4_ = 0xffffffff;
      local_558.Elements._52_4_ = 0;
      local_558.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
      local_558.HashSize = 0;
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append(&local_558,&local_8b8);
      uVar12 = _UNK_15060db28;
      uVar5 = ___xmm_ffffffffffffffffffffffffffffffff;
      uVar31 = uVar24;
      if (0 < local_ef8.ArrayNum) {
        do {
          uVar40 = (uint)uVar24;
          uVar36 = 0;
          if ((int)uVar40 < local_ef8.ArrayNum) {
            uVar36 = ~uVar40 >> 0x1f;
          }
          if ((uVar36 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          pFVar30 = this->Mesh;
          uVar36 = *(uint *)(local_ef8.AllocatorInstance.Data + uVar31);
          bVar17 = FRefCountVector::IsValid(&pFVar30->EdgeRefCounts,uVar36);
          if (bVar17) {
            pFVar49 = (pFVar30->Vertices).Blocks.AllocatorInstance.Data;
            pTVar7 = *(TBitArray<FDefaultBitArrayAllocator> **)
                      (*(longlong *)
                        ((pFVar30->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar36 >> 9) * 8) + (ulonglong)(uVar36 & 0x1ff) * 0x10);
            uVar36 = (uint)pTVar7;
            lVar44 = *(longlong *)(pFVar49 + (((ulonglong)pTVar7 & 0xffffffff) >> 9) * 8);
            pdVar1 = (double *)(lVar44 + (ulonglong)(uVar36 & 0x1ff) * 0x18);
            pTStack_e08 = *(TBitArray<FDefaultBitArrayAllocator> **)
                           (lVar44 + 0x10 + (ulonglong)(uVar36 & 0x1ff) * 0x18);
            uVar24 = (ulonglong)((uint)((ulonglong)pTVar7 >> 0x20) & 0x1ff);
            lVar44 = *(longlong *)(pFVar49 + ((ulonglong)pTVar7 >> 0x29) * 8);
            pdVar2 = (double *)(lVar44 + uVar24 * 0x18);
            dVar51 = *pdVar2 - *pdVar1;
            dVar50 = *(double *)(lVar44 + 0x10 + uVar24 * 0x18) - (double)pTStack_e08;
            dVar52 = pdVar2[1] - pdVar1[1];
            if (dVar52 * dVar52 + dVar51 * dVar51 + dVar50 * dVar50 <= dVar11) {
              pFVar8 = (pFVar30->AttributeSet).Ptr;
              local_eb8 = pTVar7;
              if ((pFVar8 == (FDynamicMeshAttributeSet *)0x0) ||
                 (cVar16 = (**(code **)(pFVar8->_padding_ + 0x90))
                                     (pFVar8,(ulonglong)pTVar7 >> 0x20,0), cVar16 == '\0')) {
                uVar47 = (undefined4)local_eb8;
                uVar36 = local_eb8._4_4_;
              }
              else {
                uVar47 = local_eb8._4_4_;
                pFVar8 = (this->Mesh->AttributeSet).Ptr;
                if ((pFVar8 != (FDynamicMeshAttributeSet *)0x0) &&
                   (cVar16 = (**(code **)(pFVar8->_padding_ + 0x90))
                                       (pFVar8,(ulonglong)pTVar7 & 0xffffffff,0), cVar16 != '\0'))
                goto LAB_14357ed8b;
              }
              local_9f0 = 0xffffffffffffffff;
              local_9e0 = uVar5;
              uStack_9d8 = uVar12;
              local_9d0 = 0xffffffffffffffff;
              iVar20 = (**(code **)(this->Mesh->_padding_ + 0x70))(this->Mesh,uVar47,uVar36,dVar14);
              if (iVar20 == 0) {
                if (local_558.Elements._8_4_ != local_558.Elements._52_4_) {
                  FVar34 = (ForElementType<FSetElementId>)&local_558.Hash;
                  if (local_558.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                    FVar34 = local_558.Hash.SecondaryData;
                  }
                  for (iVar20 = *(int *)((longlong)FVar34 +
                                        (ulonglong)(local_558.HashSize - 1U & (uint)uStack_9d8) * 4)
                      ; iVar20 != -1;
                      iVar20 = *(int *)(local_558.Elements._0_8_ + 4 + (longlong)iVar20 * 0xc)) {
                    if (*(uint *)(local_558.Elements._0_8_ + (longlong)iVar20 * 0xc) ==
                        (uint)uStack_9d8) {
                      local_f00[0] = (undefined4)local_9d0;
                      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                                (&local_558,local_da0 + 2,(bool *)local_f00);
                      if (local_f08 == '\0') {
                        if (((local_ef8.AllocatorInstance.Data <=
                              (FScriptContainerElement *)local_f00) &&
                            ((FScriptContainerElement *)local_f00 <
                             local_ef8.AllocatorInstance.Data + (longlong)local_ef8.ArrayMax * 4))
                           && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                  (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar17)) {
                          pcVar10 = (code *)swi(3);
                          uVar18 = (*pcVar10)();
                          return (bool)uVar18;
                        }
                        iVar20 = local_ef8.ArrayNum;
                        if (local_ef8.ArrayNum == local_ef8.ArrayMax) {
                          iVar20 = Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,&local_ef8.AllocatorInstance,&local_ef8.ArrayMax
                                             );
                        }
                        local_ef8.ArrayNum = iVar20 + 1;
                        *(undefined4 *)(local_ef8.AllocatorInstance.Data + (longlong)iVar20 * 4) =
                             local_f00[0];
                      }
                      break;
                    }
                  }
                }
                if (local_558.Elements._8_4_ != local_558.Elements._52_4_) {
                  FVar34 = (ForElementType<FSetElementId>)&local_558.Hash;
                  if (local_558.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                    FVar34 = local_558.Hash.SecondaryData;
                  }
                  for (iVar20 = *(int *)((longlong)FVar34 +
                                        (ulonglong)(local_558.HashSize - 1U & uStack_9d8._4_4_) * 4)
                      ; iVar20 != -1;
                      iVar20 = *(int *)(local_558.Elements._0_8_ + 4 + (longlong)iVar20 * 0xc)) {
                    if (*(uint *)(local_558.Elements._0_8_ + (longlong)iVar20 * 0xc) ==
                        uStack_9d8._4_4_) {
                      local_f00[0] = local_9d0._4_4_;
                      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                                (&local_558,local_da0 + 2,(bool *)local_f00);
                      if (local_f08 == '\0') {
                        if (((local_ef8.AllocatorInstance.Data <=
                              (FScriptContainerElement *)local_f00) &&
                            ((FScriptContainerElement *)local_f00 <
                             local_ef8.AllocatorInstance.Data + (longlong)local_ef8.ArrayMax * 4))
                           && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                                  (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar17)) {
                          pcVar10 = (code *)swi(3);
                          uVar18 = (*pcVar10)();
                          return (bool)uVar18;
                        }
                        iVar20 = local_ef8.ArrayNum;
                        if (local_ef8.ArrayNum == local_ef8.ArrayMax) {
                          iVar20 = Core::Private::
                                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                             (0x404,&local_ef8.AllocatorInstance,&local_ef8.ArrayMax
                                             );
                        }
                        local_ef8.ArrayNum = iVar20 + 1;
                        *(undefined4 *)(local_ef8.AllocatorInstance.Data + (longlong)iVar20 * 4) =
                             local_f00[0];
                      }
                      break;
                    }
                  }
                }
              }
            }
          }
LAB_14357ed8b:
          uVar24 = (ulonglong)(uVar40 + 1);
          uVar31 = uVar31 + 4;
        } while ((int)(uVar40 + 1) < local_ef8.ArrayNum);
      }
      local_558.HashSize = 0;
      if (local_558.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_558.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_558.Elements);
      if (local_ef8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ef8.AllocatorInstance.Data);
      }
    }
    uVar36 = 0;
    cVar16 = (**(code **)(this->_padding_ + 8))(this);
    if (cVar16 != '\0') goto LAB_143580e23;
    local_cb8.Mesh = this->Mesh;
    local_ed0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ed0.ArrayNum = 0;
    local_ed0.ArrayMax = 0;
    local_5a8._0_8_ = 0;
    local_5a8._8_8_ = 0;
    local_588 = (undefined1 *)0x0;
    local_580 = 0;
    local_57c = 0x80;
    local_578 = 0xffffffff;
    local_574 = 0;
    local_568 = (ForElementType<FSetElementId>)0x0;
    local_560 = 0;
    local_cb8.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_cb8.Normals.ArrayNum = 0;
    local_cb8.Normals.ArrayMax = 0;
    FMeshNormals::Compute_Triangle(&local_cb8);
    local_d68.Mesh = this->Mesh;
    local_d68.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_d68.Components.Array.ArrayNum = 0;
    local_d68.Components.Array.ArrayMax = 0;
    local_778._0_8_ = 0;
    local_778._40_8_ = 0;
    FMeshConnectedComponents::FindConnectedTriangles(&local_d68,&local_778);
    local_e68.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e68.ArrayNum = 0;
    local_e68.ArrayMax = 0;
    local_da0[1] = 0xffffffff;
    TArray<int,TSizedDefaultAllocator<32>_>::Init
              (&local_e68,local_da0 + 1,
               (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed +
               (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200);
    if (0 < local_d68.Components.Array.ArrayNum) {
      local_eb8 = (TBitArray<FDefaultBitArrayAllocator> *)0x0;
      do {
        pTVar7 = local_eb8;
        uVar40 = 0;
        if ((int)uVar36 < local_d68.Components.Array.ArrayNum) {
          uVar40 = ~uVar36 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          uVar18 = (*pcVar10)();
          return (bool)uVar18;
        }
        puVar9 = *(undefined8 **)
                  (local_d68.Components.Array.AllocatorInstance.Data + (longlong)pTVar7);
        puVar35 = (uint *)*puVar9;
        iVar20 = *(int *)(puVar9 + 1);
        puVar32 = puVar35 + iVar20;
        while( true ) {
          if (*(int *)(puVar9 + 1) != iVar20) {
            local_ee8 = 0;
            `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_ee8);
          }
          if (puVar35 == puVar32) break;
          uVar40 = *puVar35;
          uVar46 = 0;
          if ((int)uVar40 < local_e68.ArrayNum) {
            uVar46 = ~uVar40 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          puVar35 = puVar35 + 1;
          *(uint *)(local_e68.AllocatorInstance.Data + (longlong)(int)uVar40 * 4) = uVar36;
        }
        uVar36 = uVar36 + 1;
        local_eb8 = (TBitArray<FDefaultBitArrayAllocator> *)
                    ((local_eb8->AllocatorInstance).InlineData + 8);
      } while ((int)uVar36 < local_d68.Components.Array.ArrayNum);
    }
    uVar45 = 0;
    local_e48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e48.ArrayNum = 0;
    local_e48.ArrayMax = 0;
    local_da0[0] = -1;
    TArray<int,TSizedDefaultAllocator<32>_>::Init
              (&local_e48,local_da0,local_d68.Components.Array.ArrayNum);
    pFVar30 = this->Mesh;
    uVar31 = uVar45;
    uVar24 = uVar45;
    if (0 < (int)((pFVar30->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar30->TriangleRefCounts).RefCounts.CurBlockUsed)) {
      do {
        uVar40 = (uint)uVar24;
        uVar36 = 0;
        if ((int)uVar40 < local_e68.ArrayNum) {
          uVar36 = ~uVar40 >> 0x1f;
        }
        if ((uVar36 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          uVar18 = (*pcVar10)();
          return (bool)uVar18;
        }
        uVar36 = *(uint *)(local_e68.AllocatorInstance.Data + uVar45);
        if (uVar36 != 0xffffffff) {
          uVar46 = 0;
          if ((int)uVar36 < local_e48.ArrayNum) {
            uVar46 = ~uVar36 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          if (*(int *)(local_e48.AllocatorInstance.Data + (longlong)(int)uVar36 * 4) == -1) {
            local_eb8 = (TBitArray<FDefaultBitArrayAllocator> *)
                        CONCAT44(local_eb8._4_4_,(int)uVar31);
            uVar31 = (ulonglong)((int)uVar31 + 1);
            uVar46 = 0;
            if ((int)uVar36 < local_e48.ArrayNum) {
              uVar46 = ~uVar36 >> 0x1f;
            }
            if ((uVar46 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
            *(undefined4 *)(local_e48.AllocatorInstance.Data + (longlong)(int)uVar36 * 4) =
                 (undefined4)local_eb8;
          }
        }
        pFVar30 = this->Mesh;
        uVar45 = uVar45 + 4;
        uVar24 = (ulonglong)(uVar40 + 1);
      } while ((int)(uVar40 + 1) <
               (int)((pFVar30->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                    (pFVar30->TriangleRefCounts).RefCounts.CurBlockUsed));
    }
    uVar45 = 0;
    uVar36 = 0;
    uVar31 = uVar45;
    uVar24 = uVar45;
    if (0 < (int)((pFVar30->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar30->TriangleRefCounts).RefCounts.CurBlockUsed)) {
      do {
        uVar46 = (uint)uVar31;
        uVar40 = 0;
        if ((int)uVar46 < local_e68.ArrayNum) {
          uVar40 = ~uVar46 >> 0x1f;
        }
        if ((uVar40 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          uVar18 = (*pcVar10)();
          return (bool)uVar18;
        }
        FVar42.Data = local_e68.AllocatorInstance.Data;
        uVar40 = *(uint *)(local_e68.AllocatorInstance.Data + uVar24);
        if (-1 < (int)uVar40) {
          uVar37 = uVar36;
          if ((int)uVar40 < local_e48.ArrayNum) {
            uVar37 = ~uVar40 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          *(undefined4 *)(FVar42.Data + uVar24) =
               *(undefined4 *)(local_e48.AllocatorInstance.Data + (longlong)(int)uVar40 * 4);
        }
        uVar31 = (ulonglong)(uVar46 + 1);
        uVar24 = uVar24 + 4;
      } while ((int)(uVar46 + 1) <
               (int)((this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                    (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed));
    }
    local_ea8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_ea8.ArrayNum = 0;
    local_ea8.ArrayMax = 0;
    local_db0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_db0.ArrayNum = 0;
    local_db0.ArrayMax = 0;
    TFastWindingTree<UE::Geometry::FDynamicMesh3>::TFastWindingTree<UE::Geometry::FDynamicMesh3>
              (&local_738,&local_448,true);
    iVar20 = (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed +
             (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200;
    TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_ea8,iVar20,Default);
    local_d94 = -1;
    TArray<int,TSizedDefaultAllocator<32>_>::Init(&local_db0,&local_d94,iVar20);
    local_8f0 = &local_448;
    local_8e8 = &local_cb8;
    local_8e0 = &local_e68;
    local_8d8 = &local_ea8;
    local_8d0 = &local_db0;
    local_8c8 = &local_738;
    local_b20 = &local_8f8;
    local_b28 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FMeshSelfUnion::Compute'::__l63::<lambda_2>,void,int>
                ::Call;
    local_8f8 = this;
    ParallelFor(iVar20,(TFunctionRef<void___cdecl(int)> *)&local_b28,None);
    pFVar30 = this->Mesh;
    pFVar38 = &pFVar30->TriangleRefCounts;
    FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)(local_bdc + 4),pFVar38,0,
               (pFVar38->RefCounts).CurBlock * 0x200 +
               (pFVar30->TriangleRefCounts).RefCounts.CurBlockUsed);
    iVar20 = (pFVar38->RefCounts).CurBlock * 0x200 +
             (pFVar30->TriangleRefCounts).RefCounts.CurBlockUsed;
    FRefCountVector::IndexIterator::IndexIterator(&local_b18,pFVar38,iVar20,iVar20);
    uVar40 = 0;
    if ((int)local_bdc._12_8_ != local_b18._8_4_) {
      do {
        uVar37 = (uint)local_bdc._12_8_;
        uVar46 = uVar36;
        if ((int)uVar37 < local_db0.ArrayNum) {
          uVar46 = ~uVar37 >> 0x1f;
        }
        if ((uVar46 == 0) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar17)) {
          pcVar10 = (code *)swi(3);
          uVar18 = (*pcVar10)();
          return (bool)uVar18;
        }
        uVar46 = *(uint *)(local_db0.AllocatorInstance.Data + (longlong)(int)uVar37 * 4);
        if (-1 < (int)uVar46) {
          uVar48 = uVar40;
          if ((int)uVar46 < local_ea8.ArrayNum) {
            uVar48 = ~uVar46 >> 0x1f;
          }
          if ((uVar48 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          if (local_ea8.AllocatorInstance.Data[(int)uVar46] != (FScriptContainerElement)0x0) {
            uVar46 = uVar40;
            if ((int)uVar37 < local_ea8.ArrayNum) {
              uVar46 = ~uVar37 >> 0x1f;
            }
            if ((uVar46 == 0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar17)) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
            local_ea8.AllocatorInstance.Data[(int)uVar37] = (FScriptContainerElement)0x0;
          }
        }
        FRefCountVector::BaseIterator::goto_next((BaseIterator *)(local_bdc + 4));
      } while ((int)local_bdc._12_8_ != local_b18._8_4_);
    }
    pFVar30 = this->Mesh;
    pFVar38 = &pFVar30->EdgeRefCounts;
    FRefCountVector::IndexIterator::IndexIterator
              ((IndexIterator *)&local_bc8,pFVar38,0,
               (pFVar38->RefCounts).CurBlock * 0x200 +
               (pFVar30->EdgeRefCounts).RefCounts.CurBlockUsed);
    iVar20 = (pFVar38->RefCounts).CurBlock * 0x200 + (pFVar30->EdgeRefCounts).RefCounts.CurBlockUsed
    ;
    FRefCountVector::IndexIterator::IndexIterator(&local_b08,pFVar38,iVar20,iVar20);
    if (local_bc8.Index != local_b08._8_4_) {
      do {
        local_eb0 = local_bc8.Index;
        local_eb8 = *(TBitArray<FDefaultBitArrayAllocator> **)
                     (*(longlong *)
                       ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                       ((local_bc8._8_8_ & 0xffffffff) >> 9) * 8) + 8 +
                     (ulonglong)(local_eb0 & 0x1ff) * 0x10);
        uVar46 = (uint)((ulonglong)local_eb8 >> 0x20);
        if (uVar46 != 0xffffffff) {
          uVar48 = (uint)local_eb8;
          uVar37 = uVar40;
          if ((int)uVar48 < local_ea8.ArrayNum) {
            uVar37 = ~uVar48 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          pFVar49 = local_ea8.AllocatorInstance.Data + (int)uVar48;
          uVar37 = uVar40;
          if ((int)uVar46 < local_ea8.ArrayNum) {
            uVar37 = ~uVar46 >> 0x1f;
          }
          if ((uVar37 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          if (*pFVar49 != local_ea8.AllocatorInstance.Data[(int)local_eb8._4_4_]) {
            if (((local_ed0.AllocatorInstance.Data <= (FScriptContainerElement *)&local_eb0) &&
                ((FScriptContainerElement *)&local_eb0 <
                 local_ed0.AllocatorInstance.Data + (longlong)local_ed0.ArrayMax * 4)) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar17)) {
              pcVar10 = (code *)swi(3);
              uVar18 = (*pcVar10)();
              return (bool)uVar18;
            }
            iVar20 = local_ed0.ArrayNum;
            if (local_ed0.ArrayNum == local_ed0.ArrayMax) {
              iVar20 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&local_ed0.AllocatorInstance,&local_ed0.ArrayMax);
            }
            local_ed0.ArrayNum = iVar20 + 1;
            *(uint *)(local_ed0.AllocatorInstance.Data + (longlong)iVar20 * 4) = local_eb0;
            local_d50 = *(undefined8 *)
                         (*(longlong *)
                           ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                           (ulonglong)(local_eb0 >> 9) * 8) + (ulonglong)(local_eb0 & 0x1ff) * 0x10)
            ;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_5a8,&local_ba8
                       ,(bool *)&local_d50);
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_5a8,local_bb8,
                       (bool *)((longlong)&local_d50 + 4));
          }
        }
        FRefCountVector::BaseIterator::goto_next(&local_bc8);
      } while (local_bc8.Index != local_b08._8_4_);
    }
    uVar31 = uVar45;
    if (0 < local_ea8.ArrayNum) {
      do {
        pFVar30 = this->Mesh;
        uVar40 = (uint)uVar45;
        if (((-1 < (int)uVar40) &&
            ((int)uVar40 <
             (int)((pFVar30->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar30->TriangleRefCounts).RefCounts.CurBlockUsed))) &&
           ((ushort)(*(short *)(*(longlong *)
                                 ((pFVar30->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.
                                  Data + (uVar45 >> 9) * 8) + (ulonglong)(uVar40 & 0x1ff) * 2) - 1U)
            < 0xfffe)) {
          uVar46 = uVar36;
          if ((int)uVar40 < local_ea8.ArrayNum) {
            uVar46 = ~uVar40 >> 0x1f;
          }
          if ((uVar46 == 0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          if (local_ea8.AllocatorInstance.Data[uVar31] == (FScriptContainerElement)0x0) {
            FDynamicMesh3::RemoveTriangle(this->Mesh,uVar40,true,false);
          }
        }
        uVar45 = (ulonglong)(uVar40 + 1);
        uVar31 = uVar31 + 1;
      } while ((int)(uVar40 + 1) < local_ea8.ArrayNum);
    }
    if (local_738.FastWindingCache.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_738.FastWindingCache.AllocatorInstance.Data);
    }
    if (local_db0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_db0.AllocatorInstance.Data);
    }
    if (local_ea8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ea8.AllocatorInstance.Data);
    }
    cVar16 = (**(code **)(this->_padding_ + 8))(this);
    if (cVar16 == '\0') {
      pTVar25 = FDynamicMesh3::GetBounds(this->Mesh,&local_690,true);
      dVar51 = (pTVar25->Max).field0_0x0._s_0.Z - (pTVar25->Min).field0_0x0._s_0.Z;
      dVar11 = (pTVar25->Max).field0_0x0._s_0.Y - (pTVar25->Min).field0_0x0._s_0.Y;
      dVar50 = (pTVar25->Max).field0_0x0._s_0.X - (pTVar25->Min).field0_0x0._s_0.X;
      if (dVar51 <= 0.0) {
        dVar51 = 0.0;
      }
      if (dVar11 <= 0.0) {
        dVar11 = 0.0;
      }
      if (dVar50 <= 0.0) {
        dVar50 = 0.0;
      }
      if (dVar51 <= dVar11) {
        dVar51 = dVar11;
      }
      if (dVar51 <= dVar50) {
        dVar51 = dVar50;
      }
      TPointHashGrid3<int,double>::TPointHashGrid3<int,double>
                ((TPointHashGrid3<int,double> *)local_4b8,dVar51 * __real_3f90000000000000,-1);
      local_ca0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_5a8 + 0x10);
      local_ca0._padding_._0_4_ = 0;
      local_ca0._padding_._4_4_ = 1;
      local_ca0.UnvisitedBitMask = 0xffffffff;
      local_ca0.CurrentBitIndex = 0;
      local_ca0.BaseBitIndex = 0;
      if (local_580 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_ca0);
      }
      TStack_de0._padding_ = CONCAT44(local_ca0._padding_._4_4_,(undefined4)local_ca0._padding_);
      local_de8 = (longlong *)local_5a8;
      TStack_de0._16_8_ = CONCAT44(local_ca0.CurrentBitIndex,local_ca0.UnvisitedBitMask);
      TStack_de0._24_8_ = CONCAT44(local_ca0._28_4_,local_ca0.BaseBitIndex);
      TStack_de0.Array = local_ca0.Array;
      local_dc0._0_4_ = local_5a8._8_4_ - local_574;
      local_b78 = local_ca0.Array;
      iStack_b60 = local_5a8._8_4_ - local_574;
      uStack_b5c = local_dc0._4_4_;
      local_b88._0_8_ = local_de8;
      unique0x10004314 = TStack_de0._padding_;
      uStack_b70 = TStack_de0._16_8_;
      local_b68 = TStack_de0._24_8_;
      pTVar26 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                TConstSetBitIterator<FDefaultBitArrayAllocator>
                          (&local_700,(TBitArray<FDefaultBitArrayAllocator> *)(local_5a8 + 0x10),
                           local_580);
      local_de8 = (longlong *)local_5a8;
      TStack_de0._padding_ = pTVar26->_padding_;
      TStack_de0.Array = pTVar26->Array;
      TStack_de0.UnvisitedBitMask = pTVar26->UnvisitedBitMask;
      TStack_de0.CurrentBitIndex = pTVar26->CurrentBitIndex;
      TStack_de0._24_8_ = *(undefined8 *)&pTVar26->BaseBitIndex;
      local_dc0._0_4_ = local_5a8._8_4_ - local_574;
      local_868.InitialNum = local_5a8._8_4_ - local_574;
      local_868._44_4_ = local_dc0._4_4_;
      local_868._padding_ = (longlong)local_de8;
      local_868._padding_ = TStack_de0._padding_;
      local_868._padding_ = (longlong)TStack_de0.Array;
      local_868._padding_ = TStack_de0._16_8_;
      local_868._padding_ = TStack_de0._24_8_;
      bVar17 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_b88,&local_868);
      if (bVar17) {
        local_af8 = &local_988;
        local_af0 = &local_db4;
        do {
          local_db4 = *(uint *)(*(longlong *)local_b88._0_8_ + (longlong)uStack_b70._4_4_ * 0xc);
          lVar44 = *(longlong *)
                    ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)(local_db4 >> 9) * 8);
          pdVar1 = (double *)(lVar44 + (ulonglong)(local_db4 & 0x1ff) * 0x18);
          local_8a8._s_0.X = *pdVar1;
          local_8a8._s_0.Y = pdVar1[1];
          local_8a8._s_0.Z = *(double *)(lVar44 + 0x10 + (ulonglong)(local_db4 & 0x1ff) * 0x18);
          TWrapAroundGridIndexer3<double>::ToGrid
                    (local_460,&local_988,(TVector<double> *)&local_8a8._s_0);
          TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                    ((TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                      *)local_4b8,
                     (TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> *)local_bdc,
                     (bool *)&local_af8);
          uStack_b70 = CONCAT44(uStack_b70._4_4_,(uint)uStack_b70 & ~uStack_b7c);
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_b88 + 8));
          bVar17 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   ::TRangedForIterator::operator!=((TRangedForIterator *)local_b88,&local_868);
        } while (bVar17);
      }
      FSparseDynamicOctree3::FSparseDynamicOctree3(&local_2a8);
      iVar20 = local_ed0.ArrayNum;
      uVar31 = (ulonglong)local_ed0.ArrayNum;
      local_cf8 = &local_2a8;
      local_b98 = &local_2a8;
      pFVar49 = local_ed0.AllocatorInstance.Data + uVar31 * 4;
      local_2a8.RootDimension = __real_3fd0000000000000;
      local_2a8.MaxTreeDepth = 7;
      FVar42.Data = local_ed0.AllocatorInstance.Data;
      local_cf0 = this;
      local_b90 = this;
      while( true ) {
        if ((int)uVar31 != iVar20) {
          local_ee7 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_ee7)
          ;
        }
        if (FVar42.Data == pFVar49) break;
        pTVar25 = `UE::Geometry::FMeshSelfUnion::Compute'::__l2::<lambda_3>::operator()
                            (&local_cf0,&local_660,*(uint *)FVar42.Data);
        FSparseDynamicOctree3::InsertObject(&local_2a8,*(uint *)FVar42.Data,pTVar25);
        uVar31 = local_ed0._8_8_ & 0xffffffff;
        FVar42.Data = FVar42.Data + 4;
      }
      local_c80.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_5a8 + 0x10);
      dVar11 = this->SnapTolerance * this->SnapTolerance;
      local_e58.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e58.ArrayNum = 0;
      local_e58.ArrayMax = 0;
      local_5f8._0_8_ = 0;
      local_5f8._8_8_ = 0;
      local_5d8 = (uint *)0x0;
      local_5d0 = 0;
      local_5cc = 0x80;
      local_5c8 = 0xffffffff;
      local_5c4 = 0;
      local_5b8 = (ForElementType<FSetElementId>)0x0;
      local_5b0 = 0;
      local_e90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_e90.ArrayNum = 0;
      local_e90.ArrayMax = 0;
      local_ee0.Data = (FScriptContainerElement *)0x0;
      local_ed8 = 0;
      local_c80._padding_._0_4_ = 0;
      local_c80._padding_._4_4_ = 1;
      local_c80.UnvisitedBitMask = 0xffffffff;
      local_c80.CurrentBitIndex = 0;
      local_c80.BaseBitIndex = 0;
      if (local_580 != 0) {
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_c80);
      }
      uVar46 = local_580;
      uStack_e10 = CONCAT44(local_c80._padding_._4_4_,(undefined4)local_c80._padding_);
      local_e18 = (longlong *)local_5a8;
      uStack_e00._4_4_ = local_c80.CurrentBitIndex;
      uStack_e00._0_4_ = local_c80.UnvisitedBitMask;
      uStack_df8._4_4_ = local_c80._28_4_;
      uStack_df8._0_4_ = local_c80.BaseBitIndex;
      bVar27 = (byte)local_580 & 0x1f;
      local_df0 = local_5a8._8_4_ - local_574;
      iVar20 = (int)local_580 >> 5;
      pTStack_e08 = local_c80.Array;
      uStack_e34 = 1 << bVar27;
      uVar36 = -1 << bVar27;
      uVar40 = local_580 & 0xffffffe0;
      pTStack_e30 = (TBitArray<FDefaultBitArrayAllocator> *)(local_5a8 + 0x10);
      uStack_e24 = local_580;
      local_dc0 = CONCAT44(uStack_dec,local_df0);
      TStack_de0.Array = local_c80.Array;
      local_e38 = iVar20;
      local_e28 = uVar36;
      uStack_e20 = uVar40;
      local_de8 = local_e18;
      TStack_de0._padding_ = uStack_e10;
      TStack_de0._16_8_ = uStack_e00;
      TStack_de0._24_8_ = uStack_df8;
      if (((int)local_580 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        uVar18 = (*pcVar10)();
        return (bool)uVar18;
      }
      if (uVar46 != local_580) {
        puVar43 = local_5a8 + 0x10;
        if (local_588 != (undefined1 *)0x0) {
          puVar43 = local_588;
        }
        uVar36 = uVar36 & *(uint *)(puVar43 + (longlong)iVar20 * 4);
        while (uVar36 == 0) {
          uStack_e20 = uVar40 + 0x20;
          local_e38 = iVar20 + 1;
          uStack_e24 = local_580;
          if ((int)((local_580 - 1) + ((int)(local_580 - 1) >> 0x1f & 0x1fU)) >> 5 < local_e38)
          goto LAB_14357fd91;
          uVar36 = *(uint *)(puVar43 + (longlong)iVar20 * 4 + 4);
          local_e28 = 0xffffffff;
          iVar20 = local_e38;
          uVar40 = uStack_e20;
        }
        uStack_e34 = -uVar36 & uVar36;
        uVar31 = (ulonglong)uStack_e34 * 2 + 1;
        lVar44 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar44 == 0; lVar44 = lVar44 + -1) {
          }
        }
        local_be0 = (int)lVar44;
        uStack_e24 = (uVar40 - 1) + local_be0;
        if ((int)local_580 < (int)uStack_e24) {
          uStack_e24 = local_580;
        }
      }
LAB_14357fd91:
      uVar36 = uStack_e24;
      uStack_e10 = CONCAT44(uStack_e34,local_e38);
      uStack_e00 = CONCAT44(uStack_e24,local_e28);
      uStack_df8 = CONCAT44(uStack_e1c,uStack_e20);
      pTStack_e08 = pTStack_e30;
      local_eb8 = pTStack_e30;
      while( true ) {
        plVar29 = local_de8;
        if ((int)local_de8[1] - *(int *)((longlong)local_de8 + 0x34) != (int)local_dc0) {
          local_ee6 = 0;
          `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_ee6);
        }
        uVar5 = local_e90._8_8_;
        if (((TStack_de0.CurrentBitIndex == uVar36) && (TStack_de0.Array == local_eb8)) &&
           (plVar29 == (longlong *)local_5a8)) break;
        local_f04 = *(uint *)(*plVar29 + (longlong)TStack_de0.CurrentBitIndex * 0xc);
        if (local_5f8._8_4_ != local_5c4) {
          FVar34 = (ForElementType<FSetElementId>)local_5c0;
          if (local_5b8 != (ForElementType<FSetElementId>)0x0) {
            FVar34 = local_5b8;
          }
          for (iVar20 = *(int *)((longlong)FVar34 + (ulonglong)(local_5b0 - 1U & local_f04) * 4);
              iVar20 != -1; iVar20 = *(int *)(local_5f8._0_8_ + 8 + (longlong)iVar20 * 0x10)) {
            if (*(uint *)(local_5f8._0_8_ + (longlong)iVar20 * 0x10) == local_f04)
            goto LAB_143580916;
          }
        }
        lVar44 = *(longlong *)
                  ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                  (ulonglong)(local_f04 >> 9) * 8);
        pdVar1 = (double *)(lVar44 + (ulonglong)(local_f04 & 0x1ff) * 0x18);
        local_e80._s_0.X = *pdVar1;
        local_e80._s_0.Y = pdVar1[1];
        local_e80._s_0.Z = *(double *)(lVar44 + 0x10 + (ulonglong)(local_f04 & 0x1ff) * 0x18);
        iVar20 = local_e90.ArrayMax;
        local_e90._8_8_ = local_e90._8_8_ & 0xffffffff00000000;
        if (((longlong)uVar5 < 0) && (iVar20 != 0)) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_e90.AllocatorInstance,0,&local_e90.ArrayMax);
        }
        bVar17 = (longlong)local_ed8 < 0;
        local_ed8 = local_ed8 & 0xffffffff00000000;
        iVar20 = 0;
        if (bVar17) {
          Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (4,4,0,&local_ee0,0,(int *)((longlong)&local_ed8 + 4));
          iVar20 = (int)local_ed8;
        }
        if ((local_ee0.Data <= (FScriptContainerElement *)&local_f04) &&
           ((FScriptContainerElement *)&local_f04 < local_ee0.Data + (longlong)local_ed8._4_4_ * 4))
        {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             );
          if (bVar17) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          iVar20 = (int)local_ed8;
        }
        if (iVar20 == local_ed8._4_4_) {
          iVar20 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_ee0,(int *)((longlong)&local_ed8 + 4));
        }
        local_ed8 = CONCAT44(local_ed8._4_4_,iVar20 + 1);
        *(uint *)(local_ee0.Data + (longlong)iVar20 * 4) = local_f04;
        FDynamicMesh3::GetAllVtxBoundaryEdges<TArray<int,TSizedDefaultAllocator<32>_>_>
                  (this->Mesh,local_f04,&local_e90);
        iVar20 = local_e90.ArrayNum;
        uVar31 = (ulonglong)local_e90.ArrayNum;
        pFVar49 = local_e90.AllocatorInstance.Data + uVar31 * 4;
        FVar42.Data = local_e90.AllocatorInstance.Data;
        while( true ) {
          if ((int)uVar31 != iVar20) {
            local_ee5 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_ee5);
          }
          if (FVar42.Data == pFVar49) break;
          local_d48 = *(undefined8 *)
                       (*(longlong *)
                         ((this->Mesh->Edges).Blocks.AllocatorInstance.Data +
                         (ulonglong)(*(uint *)FVar42.Data >> 9) * 8) +
                       (ulonglong)(*(uint *)FVar42.Data & 0x1ff) * 0x10);
          pFVar39 = (FScriptContainerElement *)((longlong)&local_d48 + 4);
          if ((uint)local_d48 != local_f04) {
            pFVar39 = (FScriptContainerElement *)&local_d48;
          }
          if (((local_ee0.Data <= pFVar39) &&
              (pFVar39 < local_ee0.Data + (longlong)local_ed8._4_4_ * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar10 = (code *)swi(3);
            uVar18 = (*pcVar10)();
            return (bool)uVar18;
          }
          iVar21 = (int)local_ed8;
          if ((int)local_ed8 == local_ed8._4_4_) {
            iVar21 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_ee0,(int *)((longlong)&local_ed8 + 4));
          }
          FVar42.Data = FVar42.Data + 4;
          local_ed8 = CONCAT44(local_ed8._4_4_,iVar21 + 1);
          *(uint *)(local_ee0.Data + (longlong)iVar21 * 4) = *(uint *)pFVar39;
          uVar31 = local_e90._8_8_ & 0xffffffff;
        }
        local_bb0 = &local_ee0;
        local_ae0 = &local_e80;
        local_ad8 = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FMeshSelfUnion::Compute'::__l98::<lambda_7>,bool,int_const_&>
                    ::Call;
        local_ad0 = &local_bb0;
        local_ac8 = Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::FMeshSelfUnion::Compute'::__l98::<lambda_6>,double,int_const_&>
                    ::Call;
        local_ac0 = &local_ae8;
        local_ae8 = this;
        TPointHashGrid3<int,double>::FindInRadiusHelper<0>
                  ((TPointHashGrid3<int,double> *)local_4b8,(TTuple<int,double> *)local_ab8,
                   (TVector<double> *)&local_e80._s_0,this->SnapTolerance,
                   (TFunctionRef<double___cdecl(int_const_&)> *)&local_ac8,
                   (TFunctionRef<bool___cdecl(int_const_&)> *)&local_ad8);
        local_ec0[0] = (uint)local_ab8._0_8_;
        if (local_ec0[0] == 0xffffffff) {
LAB_143580351:
          uVar5 = local_e58._8_8_;
          local_900 = this->SnapTolerance;
          iVar20 = local_e58.ArrayMax;
          local_e58._8_8_ = (ulonglong)(uint)local_e58.ArrayMax << 0x20;
          local_910 = local_e80._s_0.X + local_900;
          dStack_908 = local_e80._s_0.Y + local_900;
          local_928._8_4_ = SUB84(local_e80._s_0.Y - local_900,0);
          local_928._0_8_ = local_e80._s_0.X - local_900;
          local_928._12_4_ = (int)((ulonglong)(local_e80._s_0.Y - local_900) >> 0x20);
          local_928._s_0.Z = local_e80._s_0.Z - local_900;
          local_900 = local_900 + local_e80._s_0.Z;
          if (((longlong)uVar5 < 0) && (iVar20 != 0)) {
            Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (4,4,0,&local_e58.AllocatorInstance,0,&local_e58.ArrayMax);
          }
          FSparseDynamicOctree3::RangeQuery
                    (&local_2a8,(TAxisAlignedBox3<double> *)&local_928._s_0,&local_e58);
          local_888._s_0.X = local_e80._s_0.X;
          local_888._s_0.Y = local_e80._s_0.Y;
          local_888._s_0.Z = local_e80._s_0.Z;
          uVar40 = FindNearestEdge(this,&local_e58,&local_e90,(TVector<double> *)&local_888._s_0);
          uVar15 = local_e80._s_0.Z;
          uVar12 = local_e80._s_0.Y;
          uVar5 = local_e80._s_0.X;
          if (uVar40 != 0xffffffff) {
            pFVar30 = this->Mesh;
            pFVar49 = (pFVar30->Vertices).Blocks.AllocatorInstance.Data;
            uVar31 = *(ulonglong *)
                      (*(longlong *)
                        ((pFVar30->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(uVar40 >> 9) * 8) + (ulonglong)(uVar40 & 0x1ff) * 0x10);
            uVar24 = (ulonglong)((uint)uVar31 & 0x1ff);
            lVar44 = *(longlong *)(pFVar49 + ((uVar31 & 0xffffffff) >> 9) * 8);
            pdVar1 = (double *)(lVar44 + uVar24 * 0x18);
            local_838 = *pdVar1;
            dStack_830 = pdVar1[1];
            local_828 = *(double *)(lVar44 + 0x10 + uVar24 * 0x18);
            uVar24 = (ulonglong)((uint)(uVar31 >> 0x20) & 0x1ff);
            lVar44 = *(longlong *)(pFVar49 + (uVar31 >> 0x29) * 8);
            local_810 = *(double *)(lVar44 + 0x10 + uVar24 * 0x18);
            pdVar1 = (double *)(lVar44 + uVar24 * 0x18);
            local_820 = *pdVar1;
            dStack_818 = pdVar1[1];
            if ((dVar11 < (local_e80._s_0.Y - dStack_830) * (local_e80._s_0.Y - dStack_830) +
                          (local_e80._s_0.X - local_838) * (local_e80._s_0.X - local_838) +
                          (local_e80._s_0.Z - local_828) * (local_e80._s_0.Z - local_828)) &&
               (dVar11 < (local_e80._s_0.Y - dStack_818) * (local_e80._s_0.Y - dStack_818) +
                         (local_e80._s_0.X - local_820) * (local_e80._s_0.X - local_820) +
                         (local_e80._s_0.Z - local_810) * (local_e80._s_0.Z - local_810))) {
              local_c00 = 0.0;
              local_c18._s_0.X = local_820 - local_838;
              local_c18._s_0.Y = dStack_818 - dStack_830;
              local_c30 = (local_820 + local_838) * dVar14;
              local_c28 = (dStack_818 + dStack_830) * dVar14;
              local_c18._s_0.Z = local_810 - local_828;
              local_c20 = (local_810 + local_828) * dVar14;
              local_c00 = Normalize<double>((TVector<double> *)&local_c18._s_0,0.0);
              local_c00 = local_c00 * dVar14;
              dVar51 = ((((double)uVar12 - local_c28) * local_c18._s_0.Y +
                         ((double)uVar5 - local_c30) * local_c18._s_0.X +
                        ((double)uVar15 - local_c20) * local_c18._s_0.Z) / local_c00 + dVar13) *
                       dVar14;
              if (0.0 <= dVar51) {
                if (dVar13 <= dVar51) {
                  dVar51 = dVar13;
                }
              }
              else {
                dVar51 = 0.0;
              }
              local_d34 = 0xffffffffffffffff;
              local_d2c = 0xffffffffffffffff;
              local_d24 = 0xffffffffffffffff;
              local_d18[1] = 0xffffffff;
              local_d18[2] = 0xffffffff;
              local_d0c[0] = -1;
              local_d0c[1] = -1;
              local_d0c[2] = 0xffffffff;
              iVar20 = (**(code **)(pFVar30->_padding_ + 0x30))(pFVar30,uVar40,local_d38,dVar51);
              if (iVar20 == 0) {
                local_a68 = local_d18;
                local_a60 = &local_f04;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Emplace<TPairInitializer<int_const_&,int_const_&>_>
                          ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            *)local_5f8,(TPairInitializer<int_const_&,int_const_&> *)(local_bf8 + 4)
                           ,(bool *)&local_a68);
                local_a58 = &local_f04;
                local_a50 = local_d18;
                TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
                Emplace<TPairInitializer<int_const_&,int_const_&>_>
                          ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                            *)local_5f8,(TPairInitializer<int_const_&,int_const_&> *)local_bf8,
                           (bool *)&local_a58);
                pFVar30 = this->Mesh;
                sVar19 = _dclass(SUB84(local_e80._s_0.X,0));
                if (((sVar19 < 1) && (sVar19 = _dclass(SUB84(local_e80._s_0.Y,0)), sVar19 < 1)) &&
                   (sVar19 = _dclass(SUB84(local_e80._s_0.Z,0)), sVar19 < 1)) {
                  lVar44 = *(longlong *)
                            ((pFVar30->Vertices).Blocks.AllocatorInstance.Data +
                            (ulonglong)(local_d18[0] >> 9) * 8);
                  pdVar1 = (double *)(lVar44 + (ulonglong)(local_d18[0] & 0x1ff) * 0x18);
                  *pdVar1 = local_e80._s_0.X;
                  pdVar1[1] = local_e80._s_0.Y;
                  *(double *)(lVar44 + 0x10 + (ulonglong)(local_d18[0] & 0x1ff) * 0x18) =
                       local_e80._s_0.Z;
                  FDynamicMesh3::FChangeStamp::IncrementIfEnabled(&pFVar30->ChangeStampShape);
                }
                if (((local_ed0.AllocatorInstance.Data <= (FScriptContainerElement *)local_d0c) &&
                    ((FScriptContainerElement *)local_d0c <
                     local_ed0.AllocatorInstance.Data + (longlong)local_ed0.ArrayMax * 4)) &&
                   (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar17)) {
                  pcVar10 = (code *)swi(3);
                  uVar18 = (*pcVar10)();
                  return (bool)uVar18;
                }
                iVar20 = local_ed0.ArrayNum;
                if (local_ed0.ArrayNum == local_ed0.ArrayMax) {
                  iVar20 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_ed0.AllocatorInstance,&local_ed0.ArrayMax);
                }
                local_ed0.ArrayNum = iVar20 + 1;
                *(int *)(local_ed0.AllocatorInstance.Data + (longlong)iVar20 * 4) = local_d0c[0];
                pTVar25 = `UE::Geometry::FMeshSelfUnion::Compute'::__l2::<lambda_3>::operator()
                                    (&local_b90,&local_630,uVar40);
                FSparseDynamicOctree3::ReinsertObject(local_b98,uVar40,pTVar25,0xffffffff);
                pTVar25 = `UE::Geometry::FMeshSelfUnion::Compute'::__l2::<lambda_3>::operator()
                                    (&local_cf0,&local_6c0,local_d0c[0]);
                FSparseDynamicOctree3::InsertObject(local_cf8,local_d0c[0],pTVar25);
              }
              else {
                bVar17 = Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<7655880609297858997>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshSelfUnion.cpp"
                                    ,0x1b5,
                                    "EMeshResult::Ok == Mesh->SplitEdge(OtherEID, SplitInfo, Along)"
                                   );
                if (bVar17) {
                  pcVar10 = (code *)swi(3);
                  uVar18 = (*pcVar10)();
                  return (bool)uVar18;
                }
              }
            }
          }
        }
        else {
          if (local_5f8._8_4_ != local_5c4) {
            FVar34 = (ForElementType<FSetElementId>)local_5c0;
            if (local_5b8 != (ForElementType<FSetElementId>)0x0) {
              FVar34 = local_5b8;
            }
            uVar40 = *(uint *)((longlong)FVar34 +
                              ((ulonglong)(local_5b0 - 1) & local_ab8._0_8_ & 0xffffffff) * 4);
            while (uVar40 != 0xffffffff) {
              puVar32 = (uint *)((longlong)(int)uVar40 * 0x10 + local_5f8._0_8_);
              if (*puVar32 == local_ec0[0]) goto LAB_1435801d2;
              uVar40 = puVar32[2];
            }
          }
          puVar32 = (uint *)0x0;
LAB_1435801d2:
          puVar35 = puVar32 + 1;
          if (puVar32 == (uint *)0x0) {
            puVar35 = (uint *)0x0;
          }
          if (puVar35 != (uint *)0x0) {
            uVar40 = *puVar35;
            pFVar49 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
            lVar44 = *(longlong *)(pFVar49 + ((local_ab8._0_8_ & 0xffffffff) >> 9) * 8);
            pdVar1 = (double *)(lVar44 + (ulonglong)(local_ec0[0] & 0x1ff) * 0x18);
            local_7d8 = *pdVar1;
            dStack_7d0 = pdVar1[1];
            local_7c8 = *(double *)(lVar44 + 0x10 + (ulonglong)(local_ec0[0] & 0x1ff) * 0x18);
            lVar44 = *(longlong *)(pFVar49 + (ulonglong)(uVar40 >> 9) * 8);
            pdVar1 = (double *)(lVar44 + (ulonglong)(uVar40 & 0x1ff) * 0x18);
            local_7c0 = *pdVar1;
            dStack_7b8 = pdVar1[1];
            local_7b0 = *(double *)(lVar44 + 0x10 + (ulonglong)(uVar40 & 0x1ff) * 0x18);
            if ((double)local_ab8._8_8_ <
                (dStack_7d0 - dStack_7b8) * (dStack_7d0 - dStack_7b8) +
                (local_7d8 - local_7c0) * (local_7d8 - local_7c0) +
                (local_7c8 - local_7b0) * (local_7c8 - local_7b0)) {
              local_aa8 = local_ec0;
              local_aa0 = &local_f04;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)local_5f8,(TPairInitializer<int_const_&,int_const_&> *)(local_be8 + 4),
                         (bool *)&local_aa8);
              local_a98 = &local_f04;
              local_a90 = local_ec0;
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Emplace<TPairInitializer<int_const_&,int_const_&>_>
                        ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          *)local_5f8,(TPairInitializer<int_const_&,int_const_&> *)local_bf0,
                         (bool *)&local_a98);
              TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
              Remove((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)local_5f8,uVar40);
              local_f04 = uVar40;
              FDynamicMesh3::GetAllVtxBoundaryEdges<TArray<int,TSizedDefaultAllocator<32>_>_>
                        (this->Mesh,uVar40,&local_e90);
              lVar44 = *(longlong *)
                        ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                        (ulonglong)(local_f04 >> 9) * 8);
              pdVar1 = (double *)(lVar44 + (ulonglong)(local_f04 & 0x1ff) * 0x18);
              local_e80._s_0.X = *pdVar1;
              local_e80._s_0.Y = pdVar1[1];
              local_e80._s_0.Z = *(double *)(lVar44 + 0x10 + (ulonglong)(local_f04 & 0x1ff) * 0x18);
            }
            local_ec0[0] = 0xffffffff;
            goto LAB_143580351;
          }
          local_a88 = local_ec0;
          local_a80 = &local_f04;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)local_5f8,(TPairInitializer<int_const_&,int_const_&> *)local_be8,
                     (bool *)&local_a88);
          local_a78 = &local_f04;
          local_a70 = local_ec0;
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
          Emplace<TPairInitializer<int_const_&,int_const_&>_>
                    ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)local_5f8,(TPairInitializer<int_const_&,int_const_&> *)(local_bf0 + 4),
                     (bool *)&local_a78);
          if (local_ec0[0] == 0xffffffff) goto LAB_143580351;
        }
LAB_143580916:
        TStack_de0.UnvisitedBitMask = TStack_de0.UnvisitedBitMask & ~TStack_de0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_de0);
      }
      if (local_ee0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ee0.Data);
      }
      if (local_e90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e90.AllocatorInstance.Data);
      }
      uVar36 = local_5d0;
      iVar20 = 0;
      uVar40 = 1;
      uStack_df8._0_4_ = 0;
      uStack_e00._4_4_ = 0;
      if (local_5d0 != 0) {
        puVar32 = (uint *)(local_5f8 + 0x10);
        if (local_5d8 != (uint *)0x0) {
          puVar32 = local_5d8;
        }
        uVar46 = *puVar32;
        uStack_df8._0_4_ = 0;
        while (uVar46 == 0) {
          lVar44 = (longlong)iVar20;
          uStack_df8._0_4_ = (int)uStack_df8 + 0x20;
          iVar20 = iVar20 + 1;
          uStack_e00._4_4_ = local_5d0;
          if ((int)((local_5d0 - 1) + ((int)(local_5d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_1435809f3;
          uVar46 = (puVar32 + 1)[lVar44];
        }
        uVar40 = -uVar46 & uVar46;
        uVar31 = (ulonglong)uVar40 * 2 + 1;
        lVar44 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar44 == 0; lVar44 = lVar44 + -1) {
          }
        }
        local_ba0 = (int)lVar44;
        uStack_e00._4_4_ = local_ba0 + -1 + (int)uStack_df8;
        if ((int)local_5d0 < (int)uStack_e00._4_4_) {
          uStack_e00._4_4_ = local_5d0;
        }
      }
LAB_1435809f3:
      local_e18 = (longlong *)local_5f8;
      pTStack_e08 = (TBitArray<FDefaultBitArrayAllocator> *)(local_5f8 + 0x10);
      uVar46 = local_5d0 & 0xffffffe0;
      local_df0 = local_5f8._8_4_ - local_5c4;
      uStack_e00._0_4_ = 0xffffffff;
      uStack_e10 = CONCAT44(uVar40,iVar20);
      uStack_df8._4_4_ = local_6c4;
      TStack_b50._padding_ = uStack_e10;
      iVar20 = (int)local_5d0 >> 5;
      uStack_b30 = CONCAT44(uStack_dec,local_df0);
      bVar27 = (byte)local_5d0;
      TStack_b50.UnvisitedBitMask = 0xffffffff;
      TStack_b50.CurrentBitIndex = uStack_e00._4_4_;
      TStack_b50.BaseBitIndex = (int)uStack_df8;
      TStack_b50._28_4_ = local_6c4;
      local_b58 = local_e18;
      TStack_b50.Array = pTStack_e08;
      if (((int)local_5d0 < 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar17)) {
        pcVar10 = (code *)swi(3);
        uVar18 = (*pcVar10)();
        return (bool)uVar18;
      }
      if (uVar36 != local_5d0) {
        puVar32 = (uint *)(local_5f8 + 0x10);
        if (local_5d8 != (uint *)0x0) {
          puVar32 = local_5d8;
        }
        uVar36 = -1 << (bVar27 & 0x1f) & puVar32[iVar20];
        while (uVar36 == 0) {
          lVar44 = (longlong)iVar20;
          uVar46 = uVar46 + 0x20;
          iVar20 = iVar20 + 1;
          uVar36 = local_5d0;
          if ((int)((local_5d0 - 1) + ((int)(local_5d0 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar20)
          goto LAB_143580b12;
          uVar36 = (puVar32 + 1)[lVar44];
        }
        uVar31 = (ulonglong)(-uVar36 & uVar36) * 2 + 1;
        lVar44 = 0x3f;
        if (uVar31 != 0) {
          for (; uVar31 >> lVar44 == 0; lVar44 = lVar44 + -1) {
          }
        }
        uVar36 = (uVar46 - 1) + (int)lVar44;
        if ((int)local_5d0 < (int)uVar36) {
          uVar36 = local_5d0;
        }
      }
LAB_143580b12:
      while( true ) {
        plVar29 = local_b58;
        if ((int)local_b58[1] - *(int *)((longlong)local_b58 + 0x34) != (int)uStack_b30) {
          `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_ee4);
        }
        if (((TStack_b50.CurrentBitIndex == uVar36) &&
            (TStack_b50.Array == (TBitArray<FDefaultBitArrayAllocator> *)(local_5f8 + 0x10))) &&
           (plVar29 == (longlong *)local_5f8)) break;
        lVar44 = *plVar29;
        uVar40 = *(uint *)(lVar44 + (longlong)TStack_b50.CurrentBitIndex * 0x10);
        uVar46 = *(uint *)(lVar44 + 4 + (longlong)TStack_b50.CurrentBitIndex * 0x10);
        if ((int)uVar40 <= (int)uVar46) {
          pFVar30 = this->Mesh;
          uVar31 = (ulonglong)(uVar40 & 0x1ff);
          pFVar49 = (pFVar30->Vertices).Blocks.AllocatorInstance.Data;
          lVar44 = *(longlong *)(pFVar49 + (ulonglong)(uVar40 >> 9) * 8);
          local_798 = *(undefined8 *)(lVar44 + 0x10 + uVar31 * 0x18);
          puVar9 = (undefined8 *)(lVar44 + uVar31 * 0x18);
          uVar5 = puVar9[1];
          sVar19 = _dclass((int)*puVar9);
          if (((sVar19 < 1) && (sVar19 = _dclass((int)uVar5), sVar19 < 1)) &&
             (sVar19 = _dclass((int)local_798), sVar19 < 1)) {
            puVar9 = (undefined8 *)(lVar44 + uVar31 * 0x18);
            uVar12 = puVar9[1];
            uVar5 = *(undefined8 *)(lVar44 + 0x10 + uVar31 * 0x18);
            lVar44 = *(longlong *)(pFVar49 + (ulonglong)(uVar46 >> 9) * 8);
            puVar3 = (undefined8 *)(lVar44 + (ulonglong)(uVar46 & 0x1ff) * 0x18);
            *puVar3 = *puVar9;
            puVar3[1] = uVar12;
            *(undefined8 *)(lVar44 + 0x10 + (ulonglong)(uVar46 & 0x1ff) * 0x18) = uVar5;
            if ((pFVar30->ChangeStampShape).bIsEnabled != false) {
              this_00 = &(pFVar30->ChangeStampShape).Mutex;
              LOCK();
              bVar17 = this_00->State == (atomic<unsigned_char>)0x0;
              if (bVar17) {
                this_00->State = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (!bVar17) {
                FMutex::LockSlow(this_00);
              }
              puVar32 = &(pFVar30->ChangeStampShape).Value;
              *puVar32 = *puVar32 + 1;
              LOCK();
              aVar4 = this_00->State;
              this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
              UNLOCK();
              if (((byte)aVar4 & 2) != 0) {
                FMutex::WakeWaitingThread(this_00);
              }
            }
          }
        }
        TStack_b50.UnvisitedBitMask = TStack_b50.UnvisitedBitMask & ~TStack_b50._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_b50);
      }
      if (this->bSimplifyAlongNewEdges != false) {
        SimplifyAlongNewEdges
                  (this,&local_ed0,
                   (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                   local_5f8);
      }
      cVar16 = (**(code **)(this->_padding_ + 8))(this);
      if (cVar16 == '\0') {
        bVar17 = true;
        if (this->bWeldSharedEdges != false) {
          bVar17 = MergeEdges(this,&local_ed0,
                              (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                               *)local_5f8);
        }
        if (this->bTrackAllNewEdges != false) {
          pFVar39 = (this->CreatedBoundaryEdges).AllocatorInstance.Data;
          iVar20 = (this->CreatedBoundaryEdges).ArrayNum;
          pFVar49 = pFVar39 + (longlong)iVar20 * 4;
          while( true ) {
            if ((this->CreatedBoundaryEdges).ArrayNum != iVar20) {
              `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                        (local_e98);
            }
            if (pFVar39 == pFVar49) break;
            local_db8 = *(undefined4 *)pFVar39;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&this->AllNewEdges,&local_ba4,(bool *)&local_db8);
            pFVar39 = pFVar39 + 4;
          }
        }
        MeshTransformsLocal::
        TransformMeshHelper<_MeshTransforms::ApplyTransform_::__l2::<lambda_1>,_MeshTransforms::ApplyTransform_::__l2::<lambda_2>,_MeshTransforms::ApplyTransform_::__l2::<lambda_3>,_MeshTransforms::ApplyTransform_::__l2::<lambda_4>_>
                  (this->Mesh,(TTransformSRT3<double> *)&local_978,
                   (TTransformSRT3<double> *)&local_978,(TTransformSRT3<double> *)&local_978,
                   (TTransformSRT3<double> *)&local_978,All);
      }
      else {
        bVar17 = false;
      }
      local_5b0 = 0;
      if (local_5b8 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_5b8);
      }
      TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_5f8);
      if (local_e58.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e58.AllocatorInstance.Data);
      }
      FSparseDynamicOctree3::~FSparseDynamicOctree3(&local_2a8);
      local_470 = 0;
      if ((ForElementType<FSetElementId>)local_4b8._64_8_ != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_4b8._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_4b8);
    }
    else {
      bVar17 = false;
    }
    if (local_e48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e48.AllocatorInstance.Data);
    }
    if (local_e68.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e68.AllocatorInstance.Data);
    }
    TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>::
    ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
              (&local_d68.Components);
    if (local_cb8.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_cb8.Normals.AllocatorInstance.Data);
    }
    local_560 = 0;
    if (local_568 != (ForElementType<FSetElementId>)0x0) {
      FMemory::Free((void *)local_568);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_5a8);
    if (local_ed0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_ed0.AllocatorInstance.Data);
    }
  }
  else {
LAB_143580e23:
    bVar17 = false;
  }
  if (local_d78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_d78.AllocatorInstance.Data);
  }
LAB_143580e57:
  if (local_ce8.Polygons.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ce8.Polygons.AllocatorInstance.Data);
  }
  if (local_ce8.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ce8.Segments.AllocatorInstance.Data);
  }
  if (local_ce8.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_ce8.Points.AllocatorInstance.Data);
  }
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::~TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
            (&local_448);
  return bVar17;
}

// FindNearestEdge @ 143593150

int __thiscall
UE::Geometry::FMeshSelfUnion::FindNearestEdge
          (FMeshSelfUnion *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,TVector<double> *param_3)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  int iVar3;
  uint uVar4;
  FScriptContainerElement *pFVar5;
  ulonglong uVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulonglong uVar13;
  FScriptContainerElement *pFVar14;
  uint uVar15;
  FScriptContainerElement *pFVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_100;
  undefined8 local_e8;
  
  dVar12 = __real_bfe0000000000000;
  dVar11 = __real_3fe0000000000000;
  pFVar16 = (param_1->AllocatorInstance).Data;
  iVar3 = param_1->ArrayNum;
  uVar15 = 0xffffffff;
  pFVar1 = pFVar16 + (longlong)iVar3 * 4;
  dVar10 = this->SnapTolerance * this->SnapTolerance;
  do {
    if (param_1->ArrayNum != iVar3) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar16 == pFVar1) {
      return uVar15;
    }
    pFVar14 = (param_2->AllocatorInstance).Data;
    uVar4 = *(uint *)pFVar16;
    pFVar5 = pFVar14 + (longlong)param_2->ArrayNum * 4;
    for (; pFVar14 != pFVar5; pFVar14 = pFVar14 + 4) {
      if (*(uint *)pFVar14 == uVar4) goto LAB_143593472;
    }
    pFVar5 = (this->Mesh->Vertices).Blocks.AllocatorInstance.Data;
    local_e8 = 0;
    uVar6 = *(ulonglong *)
             (*(longlong *)
               ((this->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8) +
             (ulonglong)(uVar4 & 0x1ff) * 0x10);
    uVar13 = (ulonglong)((uint)uVar6 & 0x1ff);
    lVar7 = *(longlong *)(pFVar5 + ((uVar6 & 0xffffffff) >> 9) * 8);
    pdVar2 = (double *)(lVar7 + uVar13 * 0x18);
    dVar21 = *pdVar2;
    dVar8 = pdVar2[1];
    dVar23 = *(double *)(lVar7 + 0x10 + uVar13 * 0x18);
    uVar13 = (ulonglong)((uint)(uVar6 >> 0x20) & 0x1ff);
    lVar7 = *(longlong *)(pFVar5 + (uVar6 >> 0x29) * 8);
    pdVar2 = (double *)(lVar7 + uVar13 * 0x18);
    dVar9 = *pdVar2;
    dVar18 = pdVar2[1];
    dVar22 = *(double *)(lVar7 + 0x10 + uVar13 * 0x18);
    local_100._s_0.X = dVar9 - dVar21;
    dVar17 = (dVar9 + dVar21) * dVar11;
    local_100._s_0.Y = dVar18 - dVar8;
    dVar18 = (dVar18 + dVar8) * dVar11;
    local_100._s_0.Z = dVar22 - dVar23;
    dVar19 = (dVar22 + dVar23) * dVar11;
    dVar20 = Normalize<double>((TVector<double> *)&local_100._s_0,0.0);
    dVar23 = (param_3->field0_0x0)._s_0.X;
    dVar22 = (param_3->field0_0x0)._s_0.Y;
    dVar21 = (param_3->field0_0x0)._s_0.Z;
    dVar8 = dVar20 * dVar11;
    dVar9 = (dVar22 - dVar18) * local_100._s_0.Y + (dVar23 - dVar17) * local_100._s_0.X +
            (dVar21 - dVar19) * local_100._s_0.Z;
    if (dVar9 < dVar8) {
      if (dVar20 * dVar12 < dVar9) {
        dVar22 = dVar22 - (local_100._s_0.Y * dVar9 + dVar18);
        dVar23 = dVar23 - (local_100._s_0.X * dVar9 + dVar17);
        dVar21 = dVar21 - (local_100._s_0.Z * dVar9 + dVar19);
        dVar23 = dVar22 * dVar22 + dVar23 * dVar23 + dVar21 * dVar21;
      }
      else {
        dVar23 = (dVar17 - local_100._s_0.X * dVar8) - dVar23;
        dVar22 = (dVar18 - local_100._s_0.Y * dVar8) - dVar22;
        dVar21 = (dVar19 - local_100._s_0.Z * dVar8) - dVar21;
        dVar23 = dVar22 * dVar22 + dVar23 * dVar23 + dVar21 * dVar21;
      }
    }
    else {
      dVar22 = (local_100._s_0.Y * dVar8 + dVar18) - dVar22;
      dVar23 = (local_100._s_0.X * dVar8 + dVar17) - dVar23;
      dVar21 = (local_100._s_0.Z * dVar8 + dVar19) - dVar21;
      dVar23 = dVar22 * dVar22 + dVar23 * dVar23 + dVar21 * dVar21;
    }
    if (dVar23 < dVar10) {
      dVar10 = dVar23;
      uVar15 = uVar4;
    }
LAB_143593472:
    pFVar16 = pFVar16 + 4;
  } while( true );
}

// MergeEdges @ 1435bc080

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FMeshSelfUnion::MergeEdges
          (FMeshSelfUnion *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_2)

{
  FScriptContainerElement *pFVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  longlong lVar5;
  FDynamicMesh3 *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  FMeshSelfUnion *pFVar15;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar16;
  bool bVar17;
  undefined1 uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  int iVar23;
  int *piVar24;
  uint *puVar25;
  undefined1 *puVar26;
  uint uVar27;
  ForAnyElementType FVar28;
  FScriptContainerElement *pFVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  uint *puVar32;
  ulonglong uVar33;
  int *piVar34;
  uint uVar35;
  double dVar36;
  double dVar37;
  undefined1 auStackY_2a8 [32];
  ForAnyElementType local_258;
  undefined8 local_250;
  undefined1 local_248;
  undefined1 local_247;
  undefined1 local_246;
  undefined1 local_245;
  uint local_244;
  uint local_240 [2];
  ForAnyElementType local_238;
  undefined8 local_230;
  uint local_228;
  uint local_224;
  int iStack_220;
  FMeshSelfUnion *local_218;
  double local_210;
  double dStack_208;
  double local_200;
  int local_1f8;
  int local_1f4;
  undefined8 local_1f0;
  ulonglong local_1e8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  void *local_180;
  undefined4 local_178;
  undefined4 local_174;
  void *local_160;
  undefined4 local_158;
  undefined4 local_154;
  undefined8 local_150;
  undefined1 local_148 [8];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  void *local_110;
  undefined4 local_108;
  undefined4 local_104;
  void *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined8 local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  pFVar29 = (param_1->AllocatorInstance).Data;
  iVar23 = param_1->ArrayNum;
  pFVar1 = pFVar29 + (longlong)iVar23 * 4;
  local_238.Data = (FScriptContainerElement *)0x0;
  local_230 = 0;
  local_218 = this;
  local_1e0 = param_1;
  do {
    if (param_1->ArrayNum != iVar23) {
      local_248 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_248);
    }
    pFVar15 = local_218;
    uVar14 = _UNK_15060db28;
    uVar13 = ___xmm_ffffffffffffffffffffffffffffffff;
    piVar34 = (int *)0x0;
    if (pFVar29 == pFVar1) {
      iVar19 = (int)local_230;
      iVar23 = 0;
      pFVar1 = local_238.Data + (longlong)(int)local_230 * 8;
      FVar28.Data = local_238.Data;
      while( true ) {
        if ((int)local_230 != iVar19) {
          local_247 = 0;
          `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>::
          operator()(&local_247);
        }
        pTVar16 = local_1e0;
        if (FVar28.Data == pFVar1) break;
        local_1e8 = *(ulonglong *)FVar28.Data;
        pFVar6 = pFVar15->Mesh;
        uVar27 = (uint)local_1e8;
        if ((-1 < (int)uVar27) &&
           ((int)uVar27 <
            (int)((pFVar6->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                 (pFVar6->EdgeRefCounts).RefCounts.CurBlockUsed))) {
          uVar33 = (local_1e8 & 0xffffffff) >> 9;
          if (((ushort)(*(short *)(*(longlong *)
                                    ((pFVar6->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                    + uVar33 * 8) + (ulonglong)(uVar27 & 0x1ff) * 2) - 1U) < 0xfffe)
             && (*(int *)(*(longlong *)((pFVar6->Edges).Blocks.AllocatorInstance.Data + uVar33 * 8)
                          + 0xc + (ulonglong)(uVar27 & 0x1ff) * 0x10) == -1)) {
            local_e0 = 0;
            local_140 = 0xffffffffffffffff;
            local_138 = uVar13;
            uStack_130 = uVar14;
            local_128 = 0xffffffffffffffff;
            local_110 = (void *)0x0;
            local_108 = 0;
            local_104 = 4;
            local_f0 = (void *)0x0;
            local_e8 = 0;
            local_e4 = 4;
            iVar20 = (**(code **)(pFVar6->_padding_ + 0x88))
                               (pFVar6,local_1e8,local_1e8 >> 0x20,local_148);
            if ((iVar20 == 0) && (pFVar15->bTrackAllNewEdges != false)) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&pFVar15->AllNewEdges,&local_1f8,(bool *)&local_1e8);
            }
            if (local_f0 != (void *)0x0) {
              FMemory::Free(local_f0);
            }
            if (local_110 != (void *)0x0) {
              FMemory::Free(local_110);
            }
          }
        }
        FVar28.Data = FVar28.Data + 8;
      }
      local_258.Data = (FScriptContainerElement *)0x0;
      local_250 = 0;
      pFVar29 = (local_1e0->AllocatorInstance).Data;
      iVar19 = local_1e0->ArrayNum;
      pFVar1 = pFVar29 + (longlong)iVar19 * 4;
      while( true ) {
        if (pTVar16->ArrayNum != iVar19) {
          local_246 = 0;
          `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (&local_246);
          iVar23 = (int)local_250;
        }
        if (pFVar29 == pFVar1) break;
        local_244 = *(uint *)pFVar29;
        pFVar6 = pFVar15->Mesh;
        if (((-1 < (int)local_244) &&
            ((int)local_244 <
             (int)((pFVar6->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                  (pFVar6->EdgeRefCounts).RefCounts.CurBlockUsed))) &&
           (((ushort)(*(short *)(*(longlong *)
                                  ((pFVar6->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                  (ulonglong)(local_244 >> 9) * 8) +
                                (ulonglong)(local_244 & 0x1ff) * 2) - 1U) < 0xfffe &&
            (*(int *)(*(longlong *)
                       ((pFVar6->Edges).Blocks.AllocatorInstance.Data +
                       (ulonglong)(local_244 >> 9) * 8) + 0xc +
                     (ulonglong)(local_244 & 0x1ff) * 0x10) == -1)))) {
          iVar20 = iVar23;
          if ((local_258.Data <= (FScriptContainerElement *)&local_244) &&
             ((FScriptContainerElement *)&local_244 < local_258.Data + (longlong)local_250._4_4_ * 4
             )) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               );
            if (bVar17) {
              pcVar7 = (code *)swi(3);
              uVar18 = (*pcVar7)();
              return (bool)uVar18;
            }
            iVar20 = (int)local_250;
          }
          if (iVar20 == local_250._4_4_) {
            iVar20 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&local_258,(int *)((longlong)&local_250 + 4));
          }
          iVar23 = iVar20 + 1;
          local_250 = CONCAT44(local_250._4_4_,iVar23);
          *(uint *)(local_258.Data + (longlong)iVar20 * 4) = local_244;
        }
        pFVar29 = pFVar29 + 4;
      }
      uVar31 = 0;
      dVar8 = pFVar15->SnapTolerance * pFVar15->SnapTolerance;
      uVar33 = uVar31;
      if (1 < iVar23) {
        do {
          uVar35 = (uint)uVar31;
          uVar27 = 0;
          if ((int)uVar35 < iVar23) {
            uVar27 = ~uVar35 >> 0x1f;
          }
          if (uVar27 == 0) {
            bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               );
            if (bVar17) {
              pcVar7 = (code *)swi(3);
              uVar18 = (*pcVar7)();
              return (bool)uVar18;
            }
            iVar23 = (int)local_250;
          }
          pFVar6 = pFVar15->Mesh;
          local_228 = *(uint *)(local_258.Data + uVar33);
          if (((-1 < (int)local_228) &&
              ((int)local_228 <
               (int)((pFVar6->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                    (pFVar6->EdgeRefCounts).RefCounts.CurBlockUsed))) &&
             ((ushort)(*(short *)(*(longlong *)
                                   ((pFVar6->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                   + (ulonglong)(local_228 >> 9) * 8) +
                                 (ulonglong)(local_228 & 0x1ff) * 2) - 1U) < 0xfffe)) {
            lVar5 = *(longlong *)
                     ((pFVar6->Edges).Blocks.AllocatorInstance.Data +
                     (ulonglong)(local_228 >> 9) * 8);
            if (*(int *)(lVar5 + 0xc + (ulonglong)(local_228 & 0x1ff) * 0x10) == -1) {
              uVar31 = *(ulonglong *)(lVar5 + (ulonglong)(local_228 & 0x1ff) * 0x10);
              uVar27 = uVar35 + 1;
              pFVar1 = (pFVar6->Vertices).Blocks.AllocatorInstance.Data;
              uVar30 = (ulonglong)((uint)uVar31 & 0x1ff);
              lVar5 = *(longlong *)(pFVar1 + ((uVar31 & 0xffffffff) >> 9) * 8);
              pdVar2 = (double *)(lVar5 + uVar30 * 0x18);
              dVar9 = *pdVar2;
              dVar10 = pdVar2[1];
              dVar3 = *(double *)(lVar5 + 0x10 + uVar30 * 0x18);
              uVar30 = (ulonglong)((uint)(uVar31 >> 0x20) & 0x1ff);
              lVar5 = *(longlong *)(pFVar1 + (uVar31 >> 0x29) * 8);
              dVar4 = *(double *)(lVar5 + 0x10 + uVar30 * 0x18);
              pdVar2 = (double *)(lVar5 + uVar30 * 0x18);
              dVar11 = *pdVar2;
              dVar12 = pdVar2[1];
              uVar31 = uVar33;
              local_210 = dVar9;
              dStack_208 = dVar10;
              local_200 = dVar3;
              local_1d8 = dVar11;
              dStack_1d0 = dVar12;
              local_1c8 = dVar4;
              if ((int)uVar27 < iVar23) {
                do {
                  uVar30 = uVar31 + 4;
                  uVar21 = 0;
                  if ((int)uVar27 < iVar23) {
                    uVar21 = ~uVar27 >> 0x1f;
                  }
                  if (uVar21 == 0) {
                    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       );
                    if (bVar17) {
                      pcVar7 = (code *)swi(3);
                      uVar18 = (*pcVar7)();
                      return (bool)uVar18;
                    }
                    iVar23 = (int)local_250;
                  }
                  pFVar6 = pFVar15->Mesh;
                  uVar21 = *(uint *)(local_258.Data + uVar30);
                  if (((int)uVar21 < 0) ||
                     ((int)((pFVar6->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                           (pFVar6->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)uVar21)) {
LAB_1435bca18:
                    uVar21 = 0;
                    if ((int)uVar27 < iVar23) {
                      uVar21 = ~uVar27 >> 0x1f;
                    }
                    if (uVar21 == 0) {
                      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         );
                      if (bVar17) {
                        pcVar7 = (code *)swi(3);
                        uVar18 = (*pcVar7)();
                        return (bool)uVar18;
                      }
                      iVar23 = (int)local_250;
                    }
                    iVar19 = (iVar23 - uVar27) + -1;
                    if (1 < iVar19) {
                      iVar19 = 1;
                    }
                    if (iVar19 != 0) {
                      memmove(local_258.Data + (longlong)(int)uVar27 * 4,
                              local_258.Data + (longlong)(iVar23 - iVar19) * 4,(longlong)iVar19 << 2
                             );
                      iVar23 = (int)local_250;
                    }
                    iVar23 = iVar23 + -1;
                    uVar27 = uVar27 - 1;
                    local_250 = CONCAT44(local_250._4_4_,iVar23);
                  }
                  else {
                    uVar22 = (ulonglong)(uVar21 & 0x1ff);
                    if ((0xfffd < (ushort)(*(short *)(*(longlong *)
                                                       ((pFVar6->EdgeRefCounts).RefCounts.Blocks.
                                                        AllocatorInstance.Data +
                                                       (ulonglong)(uVar21 >> 9) * 8) + uVar22 * 2) -
                                          1U)) ||
                       (lVar5 = *(longlong *)
                                 ((pFVar6->Edges).Blocks.AllocatorInstance.Data +
                                 (ulonglong)(uVar21 >> 9) * 8),
                       *(int *)(lVar5 + 0xc + uVar22 * 0x10) != -1)) goto LAB_1435bca18;
                    uVar31 = *(ulonglong *)(lVar5 + uVar22 * 0x10);
                    pFVar1 = (pFVar6->Vertices).Blocks.AllocatorInstance.Data;
                    uVar22 = (ulonglong)((uint)uVar31 & 0x1ff);
                    lVar5 = *(longlong *)(pFVar1 + ((uVar31 & 0xffffffff) >> 9) * 8);
                    pdVar2 = (double *)(lVar5 + uVar22 * 0x18);
                    local_1c8 = *(double *)(lVar5 + 0x10 + uVar22 * 0x18);
                    uVar22 = (ulonglong)((uint)(uVar31 >> 0x20) & 0x1ff);
                    dVar36 = dVar9 - *pdVar2;
                    dVar37 = dVar10 - pdVar2[1];
                    lVar5 = *(longlong *)(pFVar1 + (uVar31 >> 0x29) * 8);
                    local_200 = *(double *)(lVar5 + 0x10 + uVar22 * 0x18);
                    pdVar2 = (double *)(lVar5 + uVar22 * 0x18);
                    uVar31 = uVar30;
                    if ((dVar37 * dVar37 + dVar36 * dVar36 +
                         (dVar3 - local_1c8) * (dVar3 - local_1c8) < dVar8) &&
                       (dVar36 = dVar11 - *pdVar2, dVar37 = dVar12 - pdVar2[1],
                       dVar37 * dVar37 + dVar36 * dVar36 + (dVar4 - local_200) * (dVar4 - local_200)
                       < dVar8)) {
                      local_150 = 0;
                      local_180 = (void *)0x0;
                      local_178 = 0;
                      local_160 = (void *)0x0;
                      local_158 = 0;
                      local_1b0 = 0xffffffffffffffff;
                      local_1a8 = uVar13;
                      uStack_1a0 = uVar14;
                      local_198 = 0xffffffffffffffff;
                      local_174 = 4;
                      local_154 = 4;
                      iVar23 = (**(code **)(pFVar6->_padding_ + 0x88))
                                         (pFVar6,local_228,uVar21,local_1b8);
                      if (iVar23 == 0) {
                        uVar21 = 0;
                        if ((int)uVar27 < (int)local_250) {
                          uVar21 = ~uVar27 >> 0x1f;
                        }
                        if (uVar21 == 0) {
                          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             );
                          if (bVar17) {
                            pcVar7 = (code *)swi(3);
                            uVar18 = (*pcVar7)();
                            return (bool)uVar18;
                          }
                        }
                        iVar23 = ((int)local_250 - uVar27) + -1;
                        if (1 < iVar23) {
                          iVar23 = 1;
                        }
                        iVar19 = (int)local_250;
                        if (iVar23 != 0) {
                          memmove(local_258.Data + (longlong)(int)uVar27 * 4,
                                  local_258.Data + (longlong)((int)local_250 - iVar23) * 4,
                                  (longlong)iVar23 << 2);
                          iVar19 = (int)local_250;
                        }
                        local_250 = CONCAT44(local_250._4_4_,iVar19 + -1);
                        iVar23 = iVar19 + -1;
                        if (pFVar15->bTrackAllNewEdges != false) {
                          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                          Emplace<int_const_&>(&pFVar15->AllNewEdges,&local_1f4,(bool *)&local_228);
                          iVar23 = (int)local_250;
                        }
                        if (local_160 != (void *)0x0) {
                          FMemory::Free(local_160);
                          iVar23 = (int)local_250;
                        }
                        if (local_180 != (void *)0x0) {
                          FMemory::Free(local_180);
                          iVar23 = (int)local_250;
                        }
                        break;
                      }
                      if (local_160 != (void *)0x0) {
                        FMemory::Free(local_160);
                      }
                      if (local_180 != (void *)0x0) {
                        FMemory::Free(local_180);
                      }
                      iVar23 = (int)local_250;
                    }
                  }
                  uVar27 = uVar27 + 1;
                } while ((int)uVar27 < iVar23);
              }
            }
          }
          uVar31 = (ulonglong)(uVar35 + 1);
          uVar33 = uVar33 + 4;
        } while ((int)(uVar35 + 2) < iVar23);
      }
      bVar17 = true;
      pFVar1 = local_258.Data + (longlong)iVar23 * 4;
      FVar28.Data = local_258.Data;
      iVar19 = iVar23;
      while( true ) {
        if (iVar19 != iVar23) {
          local_245 = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_245)
          ;
          iVar19 = (int)local_250;
        }
        if (FVar28.Data == pFVar1) break;
        local_240[0] = *(uint *)FVar28.Data;
        pFVar6 = pFVar15->Mesh;
        if ((((-1 < (int)local_240[0]) &&
             ((int)local_240[0] <
              (int)((pFVar6->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar6->EdgeRefCounts).RefCounts.CurBlockUsed))) &&
            ((ushort)(*(short *)(*(longlong *)
                                  ((pFVar6->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                  (ulonglong)(local_240[0] >> 9) * 8) +
                                (ulonglong)(local_240[0] & 0x1ff) * 2) - 1U) < 0xfffe)) &&
           (*(int *)(*(longlong *)
                      ((pFVar6->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)(local_240[0] >> 9) * 8) + 0xc +
                    (ulonglong)(local_240[0] & 0x1ff) * 0x10) == -1)) {
          pFVar29 = (pFVar15->CreatedBoundaryEdges).AllocatorInstance.Data;
          if (((pFVar29 <= (FScriptContainerElement *)local_240) &&
              ((FScriptContainerElement *)local_240 <
               pFVar29 + (longlong)(pFVar15->CreatedBoundaryEdges).ArrayMax * 4)) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar17)) {
            pcVar7 = (code *)swi(3);
            uVar18 = (*pcVar7)();
            return (bool)uVar18;
          }
          iVar19 = (pFVar15->CreatedBoundaryEdges).ArrayNum;
          piVar34 = &(pFVar15->CreatedBoundaryEdges).ArrayMax;
          if (iVar19 == *piVar34) {
            iVar19 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&(pFVar15->CreatedBoundaryEdges).AllocatorInstance,piVar34);
          }
          bVar17 = false;
          (pFVar15->CreatedBoundaryEdges).ArrayNum = iVar19 + 1;
          *(uint *)((pFVar15->CreatedBoundaryEdges).AllocatorInstance.Data + (longlong)iVar19 * 4) =
               local_240[0];
          iVar19 = (int)local_250;
        }
        FVar28.Data = FVar28.Data + 4;
      }
      if (local_258.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_258.Data);
      }
      if (local_238.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_238.Data);
      }
      return bVar17;
    }
    uVar27 = *(uint *)pFVar29;
    lVar5 = *(longlong *)
             ((local_218->Mesh->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar27 >> 9) * 8)
    ;
    if (*(int *)(lVar5 + 0xc + (ulonglong)(uVar27 & 0x1ff) * 0x10) == -1) {
      uVar33 = *(ulonglong *)(lVar5 + (ulonglong)(uVar27 & 0x1ff) * 0x10);
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
        puVar26 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar26 = *(undefined1 **)&param_2->field_0x40;
        }
        iVar19 = *(int *)(puVar26 +
                         ((ulonglong)(*(int *)&param_2->field_0x48 - 1) & uVar33 & 0xffffffff) * 4);
        if (iVar19 != -1) {
          do {
            piVar24 = (int *)((longlong)iVar19 * 0x10 + *(longlong *)param_2);
            if (*piVar24 == (int)uVar33) {
              piVar34 = piVar24 + 1;
              if (piVar24 == (int *)0x0) {
                piVar34 = (int *)0x0;
              }
              goto LAB_1435bc1f3;
            }
            iVar19 = piVar24[2];
          } while (iVar19 != -1);
        }
      }
      if (*(int *)&param_2->field_0x8 != *(int *)&param_2->field_0x34) {
LAB_1435bc1f3:
        local_1f0._4_4_ = (uint)(uVar33 >> 0x20);
        puVar26 = &param_2->field_0x38;
        if (*(undefined1 **)&param_2->field_0x40 != (undefined1 *)0x0) {
          puVar26 = *(undefined1 **)&param_2->field_0x40;
        }
        uVar35 = *(uint *)(puVar26 +
                          (ulonglong)(*(int *)&param_2->field_0x48 - 1U & local_1f0._4_4_) * 4);
        if (uVar35 != 0xffffffff) {
          do {
            puVar25 = (uint *)((longlong)(int)uVar35 * 0x10 + *(longlong *)param_2);
            if (*puVar25 == local_1f0._4_4_) goto LAB_1435bc251;
            uVar35 = puVar25[2];
          } while (uVar35 != 0xffffffff);
        }
      }
      puVar25 = (uint *)0x0;
LAB_1435bc251:
      puVar32 = puVar25 + 1;
      if (puVar25 == (uint *)0x0) {
        puVar32 = (uint *)0x0;
      }
      local_1f0 = uVar33;
      if (((piVar34 != (int *)0x0) && (puVar32 != (uint *)0x0)) &&
         (iVar19 = FDynamicMesh3::FindEdge(local_218->Mesh,*piVar34,*puVar32), (int)uVar27 < iVar19)
         ) {
        local_224 = uVar27;
        iStack_220 = iVar19;
        if (((local_238.Data <= (FScriptContainerElement *)&local_224) &&
            ((FScriptContainerElement *)&local_224 < local_238.Data + (longlong)local_230._4_4_ * 8)
            ) && (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar17)) {
          pcVar7 = (code *)swi(3);
          uVar18 = (*pcVar7)();
          return (bool)uVar18;
        }
        iVar19 = (int)local_230;
        if ((int)local_230 == local_230._4_4_) {
          iVar19 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_238,(int *)((longlong)&local_230 + 4));
        }
        local_230 = CONCAT44(local_230._4_4_,iVar19 + 1);
        *(ulonglong *)(local_238.Data + (longlong)iVar19 * 8) = CONCAT44(iStack_220,local_224);
      }
    }
    else {
      bVar17 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<7655880609297859232>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshSelfUnion.cpp"
                          ,0x2a0,"Mesh->IsBoundaryEdge(EID)");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        uVar18 = (*pcVar7)();
        return (bool)uVar18;
      }
    }
    pFVar29 = pFVar29 + 4;
  } while( true );
}

// SimplifyAlongNewEdges @ 1435c6fe0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FMeshSelfUnion::SimplifyAlongNewEdges
          (FMeshSelfUnion *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_2)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  undefined4 uVar3;
  FDynamicMesh3 *pFVar4;
  ForElementType<FSetElementId> FVar5;
  undefined8 uVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  uint uVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  bool bVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  ulonglong uVar22;
  longlong lVar23;
  uint *puVar24;
  ForAnyElementType FVar25;
  ulonglong uVar26;
  uint *puVar27;
  undefined8 *puVar28;
  longlong lVar29;
  uint *puVar30;
  ulonglong uVar31;
  ForElementType<FSetElementId> FVar32;
  FScriptContainerElement *pFVar33;
  ForElementType<unsigned_int> FVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  ulonglong uVar38;
  uint *puVar39;
  FScriptContainerElement *pFVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  undefined1 auStackY_628 [32];
  char local_5d8;
  char local_5d7;
  char local_5d6;
  undefined1 local_5d5;
  undefined1 local_5d4;
  char local_5d3;
  undefined1 local_5d2 [2];
  undefined1 local_5d0 [8];
  undefined1 local_5c8 [8];
  undefined1 local_5c0 [8];
  undefined1 local_5b8 [8];
  undefined1 local_5b0 [8];
  char local_5a8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_5a0;
  FScriptContainerElement *local_590;
  TArray<int,TSizedDefaultAllocator<32>_> *local_588;
  int local_580;
  FScriptContainerElement *local_578;
  uint local_570;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_568;
  uint local_560;
  int local_55c;
  undefined8 local_558;
  uint *local_550;
  longlong local_548;
  int local_540 [2];
  int local_538 [2];
  int local_530;
  longlong local_528;
  undefined4 local_520 [2];
  undefined4 local_518 [2];
  float local_510 [2];
  uint local_508;
  int local_504;
  float local_500 [2];
  uint local_4f8;
  uint local_4f0 [2];
  int local_4e8 [2];
  uint local_4e0;
  uint uStack_4dc;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_4d8;
  undefined4 local_4d0;
  uint uStack_4cc;
  uint uStack_4c8;
  undefined4 uStack_4c4;
  undefined1 local_4c0 [16];
  double local_4b0;
  code *local_4a8;
  FDynamicMesh3 **local_4a0;
  code *local_498;
  FDynamicMesh3 **local_490;
  FDynamicMesh3 *local_488;
  double local_480;
  double *local_478;
  undefined1 *local_470;
  char *local_468;
  FDynamicMesh3 *local_460;
  double local_458;
  double *local_450;
  undefined1 *local_448;
  char *local_440;
  double local_438;
  double local_430;
  double dStack_428;
  undefined4 local_420;
  int local_41c;
  int local_418 [2];
  undefined8 local_410;
  double local_408;
  int local_400;
  longlong *local_3f8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_3f0;
  longlong *local_3d0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_3c8;
  longlong *local_3a8;
  uint uStack_3a0;
  uint uStack_39c;
  TBitArray<FDefaultBitArrayAllocator> *local_398;
  undefined4 uStack_390;
  int iStack_38c;
  uint local_388;
  undefined4 uStack_384;
  code *local_378;
  FDynamicMesh3 **local_370;
  code *local_368;
  FDynamicMesh3 **local_360;
  code *local_358;
  char **local_350;
  FDynamicMesh3 *local_348;
  char *local_340;
  double local_338;
  double local_330;
  double dStack_328;
  double local_320;
  double local_318;
  double dStack_310;
  double local_308;
  undefined8 local_2f8;
  uint local_2ec;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2c0;
  uint local_2b4;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  FDynamicMesh3 *local_290;
  char *local_288;
  double *local_280;
  int local_278;
  undefined4 local_274;
  double *local_270;
  double local_268;
  double *local_260;
  undefined1 local_258;
  char *local_250;
  uint *local_248;
  FDynamicMesh3 *local_240;
  undefined1 *local_238;
  int *local_230;
  int *local_228;
  undefined1 *local_220;
  undefined4 *local_218;
  int *local_210;
  double *local_208;
  double *local_200;
  double *local_1f8;
  double *local_1f0;
  undefined1 *local_1e8;
  undefined4 *local_1e0;
  float *local_1d8;
  undefined1 *local_1d0;
  undefined1 *local_1c8;
  float *local_1c0;
  undefined1 *local_1b8;
  undefined4 local_194;
  undefined1 local_188 [32];
  ForElementType<unsigned_int> local_168;
  uint local_160;
  int local_15c;
  int local_158;
  int local_154;
  FScriptContainerElement local_150 [8];
  ForAnyElementType local_148;
  uint local_140;
  double local_138 [4];
  double dStack_118;
  double local_110;
  double local_108;
  double dStack_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_628;
  local_588 = param_1;
  local_568 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              param_2;
  dVar8 = cos(this->SimplificationAngleTolerance * __real_3f91df46a2529d39);
  iVar36 = param_1->ArrayNum;
  uVar26 = 0;
  pFVar33 = (param_1->AllocatorInstance).Data;
  local_188._0_8_ = (FScriptContainerElement *)0x0;
  local_188._8_8_ = 0;
  local_168 = (ForElementType<unsigned_int>)0x0;
  local_160 = 0;
  local_15c = 0x80;
  local_158 = -1;
  local_154 = 0;
  local_148.Data = (FScriptContainerElement *)0x0;
  local_140 = 0;
  if ((iVar36 < 0) &&
     (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L""), bVar18)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar35 = (local_188._8_4_ - local_154) + iVar36;
  if (uVar35 <= (uint)(local_188._8_4_ - local_154)) goto LAB_1435c7347;
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidSetNum((longlong)(int)uVar35);
  }
  TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
             *)local_188,uVar35);
  if (uVar35 < 4) {
    uVar35 = 1;
  }
  else {
    uVar31 = (ulonglong)((uVar35 >> 1) + 7) * 2 + 1;
    lVar29 = 0x3f;
    if (uVar31 != 0) {
      for (; uVar31 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_420 = (int)lVar29;
    uVar35 = 1 << ((byte)lVar29 & 0x1f);
  }
  if ((local_140 != 0) && ((int)uVar35 <= (int)local_140)) goto LAB_1435c7347;
  local_140 = uVar35;
  if (local_148.Data != (FScriptContainerElement *)0x0) {
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_148,0,0,4);
  }
  if (uVar35 != 0) {
    uVar37 = uVar35;
    if (uVar35 < 2) {
      if (local_148.Data != (FScriptContainerElement *)0x0) {
        uVar37 = 0;
        goto LAB_1435c7162;
      }
    }
    else {
LAB_1435c7162:
      TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_148,0,uVar37,4);
    }
    if (0 < (int)uVar35) {
      uVar38 = (ulonglong)uVar35;
      uVar31 = uVar26;
      do {
        FVar25.Data = local_150;
        if (local_148.Data != (FScriptContainerElement *)0x0) {
          FVar25.Data = local_148.Data;
        }
        uVar22 = (longlong)(int)uVar35 - 1U & uVar31;
        uVar31 = uVar31 + 1;
        *(undefined4 *)(FVar25.Data + uVar22 * 4) = 0xffffffff;
        uVar38 = uVar38 - 1;
      } while (uVar38 != 0);
    }
  }
  if (local_140 != 0) {
    pTStack_4d8 = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
    local_4e0 = 0;
    uStack_4dc = 1;
    local_4d0 = 0xffffffff;
    uStack_4cc = 0;
    uStack_4c8 = 0;
    if (local_160 != 0) {
      FVar34 = (ForElementType<unsigned_int>)((longlong)local_188 + 0x10);
      if (local_168 != (ForElementType<unsigned_int>)0x0) {
        FVar34 = local_168;
      }
      uVar35 = *(uint *)FVar34;
      uVar31 = uVar26;
      while (uVar35 == 0) {
        uStack_4c8 = (int)uVar31 + 0x20;
        uVar31 = (ulonglong)uStack_4c8;
        iVar20 = (int)uVar26;
        local_4e0 = iVar20 + 1;
        uVar26 = (ulonglong)local_4e0;
        if ((int)((local_160 - 1) + ((int)(local_160 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)local_4e0)
        goto LAB_1435c7280;
        uVar35 = ((uint *)((longlong)FVar34 + 4))[iVar20];
        local_4d0 = 0xffffffff;
      }
      uStack_4dc = -uVar35 & uVar35;
      uVar26 = (ulonglong)(-uVar35 & uVar35) * 2 + 1;
      lVar29 = 0x3f;
      if (uVar26 != 0) {
        for (; uVar26 >> lVar29 == 0; lVar29 = lVar29 + -1) {
        }
      }
      local_400 = (int)lVar29;
      uStack_4cc = (int)lVar29 + -1 + uStack_4c8;
      uVar26 = (ulonglong)uStack_4cc;
      if ((int)local_160 < (int)uStack_4cc) {
LAB_1435c7280:
        uVar26 = (ulonglong)local_160;
        uStack_4cc = local_160;
      }
    }
    local_4d0 = 0xffffffff;
    local_3f8 = (longlong *)local_188;
    local_3f0._padding_ = CONCAT44(uStack_4dc,local_4e0);
    local_3f0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
    local_3f0.UnvisitedBitMask = 0xffffffff;
    local_3f0.CurrentBitIndex = uStack_4cc;
    local_3f0.BaseBitIndex = uStack_4c8;
    local_3f0._28_4_ = uStack_4c4;
    if ((int)uVar26 < (int)local_160) {
      do {
        lVar29 = *local_3f8;
        lVar23 = (longlong)(int)uVar26;
        uVar35 = local_140 - 1 & *(uint *)(lVar29 + lVar23 * 0xc);
        *(uint *)(lVar29 + 8 + lVar23 * 0xc) = uVar35;
        FVar25.Data = local_150;
        if (local_148.Data != (FScriptContainerElement *)0x0) {
          FVar25.Data = local_148.Data;
        }
        uVar31 = (longlong)(int)local_140 - 1U & (longlong)(int)uVar35;
        *(undefined4 *)(lVar29 + 4 + lVar23 * 0xc) = *(undefined4 *)(FVar25.Data + uVar31 * 4);
        *(int *)(FVar25.Data + uVar31 * 4) = (int)uVar26;
        local_3f0.UnvisitedBitMask = local_3f0.UnvisitedBitMask & ~local_3f0._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_3f0);
        uVar26 = (ulonglong)(uint)local_3f0.CurrentBitIndex;
      } while (local_3f0.CurrentBitIndex < (local_3f0.Array)->NumBits);
    }
  }
LAB_1435c7347:
  pFVar40 = pFVar33 + (longlong)iVar36 * 4;
  dVar11 = __real_3ff0000000000000;
  uVar12 = ___xmm_ffffffffffffffffffffffffffffffff;
  uVar13 = _UNK_15060db28;
  fVar14 = __real_3c8efa35;
  dVar15 = __real_4000000000000000;
  dVar16 = __real_7fefffffffffffff;
  dVar17 = __real_3fe279a74590331d;
  for (; __real_3ff0000000000000 = dVar11, ___xmm_ffffffffffffffffffffffffffffffff = uVar12,
      _UNK_15060db28 = uVar13, __real_3c8efa35 = fVar14, __real_4000000000000000 = dVar15,
      __real_7fefffffffffffff = dVar16, __real_3fe279a74590331d = dVar17, pFVar33 != pFVar40;
      pFVar33 = pFVar33 + 4) {
    TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
              ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_188,local_418,
               (bool *)pFVar33);
    dVar11 = __real_3ff0000000000000;
    uVar12 = ___xmm_ffffffffffffffffffffffffffffffff;
    uVar13 = _UNK_15060db28;
    fVar14 = __real_3c8efa35;
    dVar15 = __real_4000000000000000;
    dVar16 = __real_7fefffffffffffff;
    dVar17 = __real_3fe279a74590331d;
  }
  local_55c = 0;
  local_530 = 0;
LAB_1435c7410:
  uVar26 = (ulonglong)param_1->ArrayNum;
  pFVar40 = (param_1->AllocatorInstance).Data;
  local_504 = local_55c;
  local_508 = param_1->ArrayNum;
  pFVar33 = pFVar40 + uVar26 * 4;
  local_590 = pFVar33;
LAB_1435c7425:
  puVar30 = (uint *)0x0;
  local_578 = pFVar40;
  if (param_1->ArrayNum != (int)uVar26) {
    local_5d2[0] = 0;
    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_5d2);
  }
  if (pFVar40 == pFVar33) goto LAB_1435c80ba;
  local_4f8 = *(uint *)pFVar40;
  pFVar4 = this->Mesh;
  if (((int)local_4f8 < 0) ||
     ((int)((pFVar4->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar4->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)local_4f8)) goto LAB_1435c80a8;
  if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                    ((pFVar4->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                    + (ulonglong)(local_4f8 >> 9) * 8) +
                                  (ulonglong)(local_4f8 & 0x1ff) * 2) - 1U)) goto LAB_1435c80a8;
  iVar36 = *(int *)&(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                       *)param_2)->Elements).field_0x8;
  iVar20 = *(int *)&(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                       *)param_2)->Elements).field_0x34;
  local_558 = 0xffffffffffffffff;
  auVar2 = *(undefined1 (*) [16])
            (*(longlong *)
              ((pFVar4->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(local_4f8 >> 9) * 8) +
            (ulonglong)(local_4f8 & 0x1ff) * 0x10);
  local_4c0 = auVar2;
  puVar39 = puVar30;
  do {
    if (iVar36 == iVar20) goto LAB_1435c80a8;
    FVar5 = (((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             param_2)->Hash).SecondaryData;
    FVar32 = (ForElementType<FSetElementId>)
             &((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              param_2)->Hash;
    if (FVar5 != (ForElementType<FSetElementId>)0x0) {
      FVar32 = FVar5;
    }
    uVar35 = *(uint *)((longlong)FVar32 +
                      (ulonglong)
                      (((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                         *)param_2)->HashSize - 1U & *(uint *)(local_4c0 + (longlong)puVar39)) * 4);
    if (uVar35 == 0xffffffff) goto LAB_1435c80a8;
    while (puVar27 = (uint *)((longlong)(int)uVar35 * 0x10 +
                             *(longlong *)
                              &((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                                 *)param_2)->Elements),
          *puVar27 != *(uint *)(local_4c0 + (longlong)puVar39)) {
      uVar35 = puVar27[2];
      if (uVar35 == 0xffffffff) {
        uVar26 = (ulonglong)local_508;
        pFVar40 = pFVar40 + 4;
        goto LAB_1435c7425;
      }
    }
    puVar24 = puVar27 + 1;
    if (puVar27 == (uint *)0x0) {
      puVar24 = puVar30;
    }
    if (puVar24 == (uint *)0x0) goto LAB_1435c80a8;
    *(uint *)((longlong)&local_558 + (longlong)puVar39) = *puVar24;
    puVar39 = puVar39 + 1;
  } while ((longlong)puVar39 < 8);
  iVar20 = local_558._4_4_;
  iVar36 = (int)local_558;
  uVar35 = FDynamicMesh3::FindEdge(this->Mesh,(int)local_558,local_558._4_4_);
  local_570 = uVar35;
  pFVar33 = local_590;
  param_1 = local_588;
  if (uVar35 == 0xffffffff) goto LAB_1435c80a8;
  local_478 = local_138;
  local_488 = this->Mesh;
  local_470 = &local_5d5;
  local_468 = &local_5d8;
  local_4a0 = &local_488;
  local_138[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  local_138[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_138[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_138[3] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_5d5 = 0;
  local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  dStack_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_5d8 = '\x01';
  local_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  local_4a8 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::IsFlat'::__l2::<lambda_1>,void,int>
              ::Call;
  local_480 = dVar8;
  FDynamicMesh3::EnumerateVertexTriangles
            (local_488,auVar2._0_4_,(TFunctionRef<void___cdecl(int)> *)&local_4a8);
  if (local_5d8 == '\0') {
LAB_1435c76b9:
    cVar19 = '\0';
  }
  else {
    local_460 = this->Mesh;
    local_450 = local_138 + 3;
    local_448 = &local_5d4;
    local_440 = &local_5d7;
    local_5d4 = 0;
    local_490 = &local_460;
    local_5d7 = '\x01';
    local_498 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::IsFlat'::__l2::<lambda_1>,void,int>
                ::Call;
    local_458 = dVar8;
    FDynamicMesh3::EnumerateVertexTriangles
              (local_460,iVar36,(TFunctionRef<void___cdecl(int)> *)&local_498);
    if (local_5d7 == '\0') goto LAB_1435c76b9;
    cVar19 = '\x01';
  }
  local_488 = this->Mesh;
  local_478 = &local_108;
  local_470 = &local_5d5;
  local_468 = &local_5d8;
  local_4a0 = &local_488;
  local_5d5 = 0;
  local_5d8 = '\x01';
  local_4a8 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::IsFlat'::__l2::<lambda_1>,void,int>
              ::Call;
  local_5a8[0] = cVar19;
  local_480 = dVar8;
  FDynamicMesh3::EnumerateVertexTriangles
            (local_488,auVar2._4_4_,(TFunctionRef<void___cdecl(int)> *)&local_4a8);
  if (local_5d8 == '\0') {
LAB_1435c77ac:
    local_5a8[1] = 0;
  }
  else {
    local_460 = this->Mesh;
    local_450 = &local_f0;
    local_448 = &local_5d4;
    local_440 = &local_5d7;
    local_5d4 = 0;
    local_490 = &local_460;
    local_5d7 = '\x01';
    local_498 = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::IsFlat'::__l2::<lambda_1>,void,int>
                ::Call;
    local_458 = dVar8;
    FDynamicMesh3::EnumerateVertexTriangles
              (local_460,iVar20,(TFunctionRef<void___cdecl(int)> *)&local_498);
    if (local_5d7 == '\0') goto LAB_1435c77ac;
    local_5a8[1] = 1;
    cVar19 = cVar19 + '\x01';
  }
  pFVar33 = local_590;
  param_1 = local_588;
  if (cVar19 != '\0') {
    local_550 = (uint *)(local_4c0 + 4);
    local_580 = 0;
    local_528 = 0;
    local_548 = 1;
    local_560 = 1;
    do {
      iVar36 = 0;
      uVar37 = local_560;
      if (local_5a8[local_528] != '\0') {
        uVar26 = (ulonglong)(*(uint *)(local_4c0 + local_528 * 4) & 0x1ff);
        lVar29 = *(longlong *)
                  ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                  (ulonglong)(*(uint *)(local_4c0 + local_528 * 4) >> 9) * 8);
        pdVar1 = (double *)(lVar29 + uVar26 * 0x18);
        local_330 = *pdVar1;
        dStack_328 = pdVar1[1];
        local_320 = *(double *)(lVar29 + 0x10 + uVar26 * 0x18);
        uVar26 = (ulonglong)(*local_550 & 0x1ff);
        lVar29 = *(longlong *)
                  ((this->Mesh->Vertices).Blocks.AllocatorInstance.Data +
                  (ulonglong)(*local_550 >> 9) * 8);
        pdVar1 = (double *)(lVar29 + uVar26 * 0x18);
        local_318 = *pdVar1;
        dStack_310 = pdVar1[1];
        dVar43 = local_318 - local_330;
        local_308 = *(double *)(lVar29 + 0x10 + uVar26 * 0x18);
        dVar9 = dStack_310 - dStack_328;
        dVar42 = local_308 - local_320;
        dVar41 = SQRT(dVar9 * dVar9 + dVar43 * dVar43 + dVar42 * dVar42);
        if (dVar41 <= 0.0) {
          local_438 = 0.0;
          local_430 = 0.0;
          dStack_428 = 0.0;
          pFVar33 = local_590;
          pFVar40 = local_578;
          param_1 = local_588;
          param_2 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                    local_568;
          if ((this->bCollapseDegenerateEdgesOnCut != false) &&
             (bVar18 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<7655880609297859145>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshSelfUnion.cpp"
                                  ,0x249,"!bCollapseDegenerateEdgesOnCut"), pFVar33 = local_590,
             pFVar40 = local_578, param_1 = local_588,
             param_2 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *
                       )local_568, bVar18)) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
          break;
        }
        dVar41 = dVar11 / dVar41;
        local_438 = dVar41 * dVar43;
        local_430 = dVar41 * dVar9;
        dStack_428 = dVar41 * dVar42;
        while( true ) {
          lVar23 = local_528;
          lVar29 = local_548;
          uVar37 = local_560;
          if (1 < iVar36) {
            local_2c0 = 0xffffffffffffffff;
            local_2b0 = uVar12;
            uStack_2a8 = uVar13;
            iVar36 = *(int *)(local_4c0 + local_528 * 4);
            local_2a0 = 0xffffffffffffffff;
            iVar20 = (**(code **)(this->Mesh->_padding_ + 0x70))
                               (this->Mesh,*(undefined4 *)(local_4c0 + local_548 * 4),iVar36,0);
            pFVar33 = local_590;
            pFVar40 = local_578;
            param_1 = local_588;
            param_2 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                      local_568;
            if (iVar20 != 0) goto LAB_1435c80a8;
            iVar20 = *(int *)((longlong)&local_558 + lVar23 * 4);
            local_2f8 = 0xffffffffffffffff;
            local_2e8 = uVar12;
            uStack_2e0 = uVar13;
            local_2d8 = 0xffffffffffffffff;
            iVar21 = (**(code **)(this->Mesh->_padding_ + 0x70))
                               (this->Mesh,*(undefined4 *)((longlong)&local_558 + lVar29 * 4),iVar20
                                ,0);
            param_2 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                      local_568;
            if (iVar21 != 0) {
              if ((iVar21 != 0x1a) &&
                 (bVar18 = Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<7655880609297859188>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshSelfUnion.cpp"
                                      ,0x274,
                                      "OtherCollapseResult == EMeshResult::Failed_CollapseTriangle")
                 , param_2 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                              *)local_568, bVar18)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              goto LAB_1435c7d53;
            }
            TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
            Remove(local_568,iVar20);
            iVar20 = local_188._8_4_;
            if (local_188._8_4_ == local_154) goto LAB_1435c7ee0;
            FVar25.Data = local_150;
            if (local_148.Data != (FScriptContainerElement *)0x0) {
              FVar25.Data = local_148.Data;
            }
            iVar20 = *(int *)(FVar25.Data + (longlong)(int)(local_140 - 1 & local_2ec) * 4);
            if (iVar20 == -1) goto LAB_1435c7e70;
            goto LAB_1435c7e30;
          }
          pFVar4 = this->Mesh;
          dVar41 = this->TryToImproveTriQualityThreshold;
          puVar28 = &local_558;
          uVar10 = uVar35;
          if (iVar36 == 0) {
            puVar28 = (undefined8 *)local_4c0;
            uVar10 = local_4f8;
          }
          iVar20 = *(int *)((longlong)puVar28 + (longlong)local_580 * 4);
          uVar3 = *(undefined4 *)((longlong)puVar28 + (longlong)(int)local_560 * 4);
          local_288 = &local_5d6;
          local_280 = &local_318;
          local_5d6 = '\0';
          local_270 = local_138 + ((longlong)iVar36 + (longlong)local_580 * 2) * 3;
          local_258 = 0;
          local_260 = &local_4b0;
          local_370 = &local_290;
          local_378 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::CollapseWouldHurtTriangleQuality'::__l2::<lambda_1>,void,int>
                      ::Call;
          local_4b0 = dVar16;
          local_290 = pFVar4;
          local_278 = iVar20;
          local_274 = uVar3;
          local_268 = dVar41;
          FDynamicMesh3::EnumerateVertexTriangles
                    (pFVar4,iVar20,(TFunctionRef<void___cdecl(int)> *)&local_378);
          uVar35 = local_570;
          if (local_5d6 != '\0') break;
          if (local_4b0 * dVar15 * dVar17 < dVar41) {
            local_340 = &local_5d6;
            local_338 = local_4b0;
            local_360 = &local_348;
            local_5d6 = '\x01';
            local_368 = Core::Private::Function::
                        TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::CollapseWouldHurtTriangleQuality'::__l5::<lambda_2>,void,int>
                        ::Call;
            local_348 = pFVar4;
            FDynamicMesh3::EnumerateVertexTriangles
                      (pFVar4,iVar20,(TFunctionRef<void___cdecl(int)> *)&local_368);
            uVar35 = local_570;
            if (local_5d6 != '\0') break;
          }
          local_510[0] = cosf(this->NormalDistortTolerance * fVar14);
          local_5c8[0] = this->bPreserveVertexNormals;
          pFVar4 = this->Mesh;
          local_5b0[0] = this->bPreserveOverlayUVs;
          local_5b8[0] = this->bPreserveVertexUVs;
          local_5d0[0] = this->bPreserveTriangleGroups;
          local_5c0[0] = 1;
          local_5d3 = '\0';
          local_520[0] = 0xffffffff;
          local_500[0] = this->UVDistortTolerance * this->UVDistortTolerance;
          uVar6 = *(undefined8 *)
                   (*(longlong *)
                     ((pFVar4->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar10 >> 9) * 8)
                    + 8 + (ulonglong)(uVar10 & 0x1ff) * 0x10);
          local_538[0] = iVar20;
          local_518[0] = uVar3;
          local_4f0[0] = uVar10;
          local_410 = uVar6;
          local_408 = dVar8;
          local_4e8[0] = FDynamicMesh3::GetTriangleGroup(pFVar4,(int)uVar6);
          local_540[0] = -1;
          if ((int)((ulonglong)uVar6 >> 0x20) != -1) {
            local_540[0] = FDynamicMesh3::GetTriangleGroup(pFVar4,local_410._4_4_);
          }
          local_250 = &local_5d3;
          local_248 = local_4f0;
          local_238 = local_5d0;
          local_230 = local_4e8;
          local_228 = local_540;
          local_220 = local_188;
          local_218 = local_520;
          local_210 = local_538;
          local_208 = &local_330;
          local_200 = &local_438;
          local_1f8 = &local_408;
          local_1f0 = &local_318;
          local_1e8 = local_5c8;
          local_1e0 = local_518;
          local_1d8 = local_510;
          local_1d0 = local_5c0;
          local_1c8 = local_5b8;
          local_1c0 = local_500;
          local_1b8 = local_5b0;
          local_350 = &local_250;
          local_358 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::CollapseWouldChangeShapeOrUVs'::__l2::<lambda_1>,void,int>
                      ::Call;
          local_240 = pFVar4;
          FSmallListSet::Enumerate<TFunctionRef<void___cdecl(int)>_>
                    (&pFVar4->VertexEdgeLists,local_538[0],
                     (TFunctionRef<void___cdecl(int)> *)&local_358);
          uVar35 = local_570;
          uVar37 = local_560;
          if (local_5d3 != '\0') break;
          iVar36 = iVar36 + 1;
        }
      }
      local_580 = local_580 + 1;
      local_550 = local_550 + -1;
      local_560 = uVar37 - 1;
      local_528 = local_528 + 1;
      local_548 = local_548 + -1;
      pFVar33 = local_590;
      pFVar40 = local_578;
      param_1 = local_588;
      param_2 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                local_568;
    } while (uVar37 - 1 < 0x80000000);
  }
  goto LAB_1435c80a8;
LAB_1435c80ba:
  uVar35 = local_188._8_4_ - local_154;
  uVar37 = 0;
  local_5a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_5a0.ArrayNum = 0;
  local_5a0.ArrayMax = 0;
  if ((int)uVar35 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar35);
  }
  puVar39 = puVar30;
  if (0 < (int)uVar35) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar35,&local_5a0.AllocatorInstance,0,&local_5a0.ArrayMax);
    puVar39 = (uint *)(local_5a0._8_8_ & 0xffffffff);
  }
  uStack_39c = 1;
  local_388 = uVar37;
  if (local_160 != 0) {
    FVar34 = (ForElementType<unsigned_int>)((longlong)local_188 + 0x10);
    if (local_168 != (ForElementType<unsigned_int>)0x0) {
      FVar34 = local_168;
    }
    uVar35 = *(uint *)FVar34;
    puVar27 = puVar30;
    while( true ) {
      uVar37 = (uint)puVar30;
      local_388 = (uint)puVar27;
      if (uVar35 != 0) break;
      lVar29 = (longlong)(int)uVar37;
      local_388 = local_388 + 0x20;
      puVar27 = (uint *)(ulonglong)local_388;
      uVar37 = uVar37 + 1;
      puVar30 = (uint *)(ulonglong)uVar37;
      if ((int)((local_160 - 1) + ((int)(local_160 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar37)
      goto LAB_1435c818a;
      uVar35 = ((uint *)((longlong)FVar34 + 4))[lVar29];
    }
    uStack_39c = -uVar35 & uVar35;
    uVar26 = (ulonglong)uStack_39c * 2 + 1;
    lVar29 = 0x3f;
    if (uVar26 != 0) {
      for (; uVar26 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_41c = (int)lVar29;
    uVar35 = (int)lVar29 + -1 + local_388;
    puVar30 = (uint *)(ulonglong)uVar35;
    if ((int)local_160 < (int)uVar35) {
LAB_1435c818a:
      puVar30 = (uint *)(ulonglong)local_160;
    }
  }
  uStack_3a0 = uVar37;
  local_3a8 = (longlong *)local_188;
  local_398 = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
  uStack_390 = 0xffffffff;
  iStack_38c = (int)puVar30;
  uStack_384 = local_194;
  local_3d0 = (longlong *)local_188;
  TStack_3c8._padding_ = CONCAT44(uStack_39c,uVar37);
  TStack_3c8.BaseBitIndex = local_388;
  TStack_3c8._28_4_ = local_194;
  TStack_3c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_188 + 0x10);
  TStack_3c8.UnvisitedBitMask = 0xffffffff;
  TStack_3c8.CurrentBitIndex = iStack_38c;
  iVar36 = (int)puVar39;
  if (iStack_38c < (int)local_160) {
    do {
      pFVar33 = (FScriptContainerElement *)(*local_3d0 + (longlong)(int)puVar30 * 0xc);
      iVar36 = (int)puVar39;
      if ((local_5a0.AllocatorInstance.Data <= pFVar33) &&
         (pFVar33 < local_5a0.AllocatorInstance.Data + (longlong)local_5a0.ArrayMax * 4)) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           );
        if (bVar18) {
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        iVar36 = local_5a0.ArrayNum;
      }
      if (iVar36 == local_5a0.ArrayMax) {
        iVar36 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_5a0.AllocatorInstance,&local_5a0.ArrayMax);
      }
      local_5a0.ArrayNum = iVar36 + 1;
      *(undefined4 *)(local_5a0.AllocatorInstance.Data + (longlong)iVar36 * 4) =
           *(undefined4 *)pFVar33;
      TStack_3c8.UnvisitedBitMask = TStack_3c8.UnvisitedBitMask & ~TStack_3c8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_3c8);
      puVar30 = (uint *)(ulonglong)(uint)TStack_3c8.CurrentBitIndex;
      puVar39 = (uint *)(local_5a0._8_8_ & 0xffffffff);
      iVar36 = local_5a0.ArrayNum;
    } while (TStack_3c8.CurrentBitIndex < (TStack_3c8.Array)->NumBits);
  }
  if (param_1 != &local_5a0) {
    pFVar33 = (param_1->AllocatorInstance).Data;
    if (pFVar33 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar33);
      iVar36 = local_5a0.ArrayNum;
    }
    iVar20 = local_5a0.ArrayMax;
    (param_1->AllocatorInstance).Data = local_5a0.AllocatorInstance.Data;
    local_5a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_5a0.ArrayNum = 0;
    local_5a0.ArrayMax = 0;
    param_1->ArrayNum = iVar36;
    param_1->ArrayMax = iVar20;
  }
  if (local_5a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_5a0.AllocatorInstance.Data);
  }
  if ((local_55c == local_504) || (local_530 = local_530 + 1, 0 < local_530)) {
    local_140 = 0;
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_148.Data);
    }
    TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_188);
    return;
  }
  goto LAB_1435c7410;
  while (iVar20 = *(int *)(local_188._0_8_ + (longlong)iVar20 * 0xc + 4), iVar20 != -1) {
LAB_1435c7e30:
    if (*(uint *)(local_188._0_8_ + (longlong)iVar20 * 0xc) == local_2ec) {
      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex
                ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_188,iVar20);
      break;
    }
  }
LAB_1435c7e70:
  iVar20 = local_188._8_4_;
  if (local_188._8_4_ != local_154) {
    FVar25.Data = local_150;
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FVar25.Data = local_148.Data;
    }
    for (iVar21 = *(int *)(FVar25.Data + (longlong)(int)(local_140 - 1 & (uint)uStack_2e0) * 4);
        iVar21 != -1; iVar21 = *(int *)(local_188._0_8_ + (longlong)iVar21 * 0xc + 4)) {
      if (*(uint *)(local_188._0_8_ + (longlong)iVar21 * 0xc) == (uint)uStack_2e0) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_188,iVar21);
        iVar20 = local_188._8_4_;
        break;
      }
    }
  }
LAB_1435c7ee0:
  if ((uStack_2e0._4_4_ != 0xffffffff) && (iVar20 != local_154)) {
    FVar25.Data = local_150;
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FVar25.Data = local_148.Data;
    }
    for (iVar20 = *(int *)(FVar25.Data + (longlong)(int)(local_140 - 1 & uStack_2e0._4_4_) * 4);
        iVar20 != -1; iVar20 = *(int *)(local_188._0_8_ + (longlong)iVar20 * 0xc + 4)) {
      if (*(uint *)(local_188._0_8_ + (longlong)iVar20 * 0xc) == uStack_2e0._4_4_) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_188,iVar20);
        break;
      }
    }
  }
LAB_1435c7d53:
  local_55c = local_55c + 1;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Remove
            ((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
             param_2,iVar36);
  if (local_188._8_4_ != local_154) {
    FVar25.Data = local_150;
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FVar25.Data = local_148.Data;
    }
    for (iVar36 = *(int *)(FVar25.Data + (longlong)(int)(local_140 - 1 & local_2b4) * 4);
        iVar36 != -1; iVar36 = *(int *)(local_188._0_8_ + (longlong)iVar36 * 0xc + 4)) {
      if (*(uint *)(local_188._0_8_ + (longlong)iVar36 * 0xc) == local_2b4) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_188,iVar36);
        break;
      }
    }
  }
  if (local_188._8_4_ != local_154) {
    FVar25.Data = local_150;
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FVar25.Data = local_148.Data;
    }
    for (iVar36 = *(int *)(FVar25.Data + (longlong)(int)(local_140 - 1 & (uint)uStack_2a8) * 4);
        iVar36 != -1; iVar36 = *(int *)(local_188._0_8_ + (longlong)iVar36 * 0xc + 4)) {
      if (*(uint *)(local_188._0_8_ + (longlong)iVar36 * 0xc) == (uint)uStack_2a8) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_188,iVar36);
        break;
      }
    }
  }
  pFVar33 = local_590;
  pFVar40 = local_578;
  param_1 = local_588;
  if ((uStack_2a8._4_4_ != 0xffffffff) && (local_188._8_4_ != local_154)) {
    FVar25.Data = local_150;
    if (local_148.Data != (FScriptContainerElement *)0x0) {
      FVar25.Data = local_148.Data;
    }
    for (iVar36 = *(int *)(FVar25.Data + (longlong)(int)(local_140 - 1 & uStack_2a8._4_4_) * 4);
        iVar36 != -1; iVar36 = *(int *)(local_188._0_8_ + (longlong)iVar36 * 0xc + 4)) {
      if (*(uint *)(local_188._0_8_ + (longlong)iVar36 * 0xc) == uStack_2a8._4_4_) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_188,iVar36);
        pFVar33 = local_590;
        pFVar40 = local_578;
        param_1 = local_588;
        break;
      }
    }
  }
LAB_1435c80a8:
  uVar26 = (ulonglong)local_508;
  pFVar40 = pFVar40 + 4;
  goto LAB_1435c7425;
}

