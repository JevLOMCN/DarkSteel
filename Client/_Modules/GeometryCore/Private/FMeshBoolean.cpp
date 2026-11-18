// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 9

// operator() @ 14356e770

void __thiscall
`UE::Geometry::FMeshBoolean::SimplifyAlongNewEdges'::__l67::<lambda_1>::operator()
          (void *this,int param_1)

{
  int local_res10 [6];
  char *local_48;
  int *local_40;
  code *local_38;
  char **local_30;
  longlong local_28;
  code **local_20;
  int local_18;
  
  local_48 = *(char **)this;
  if (((*local_48 != '\0') && (param_1 != **(int **)((longlong)this + 8))) &&
     (local_18 = **(int **)((longlong)this + 0x10), param_1 != local_18)) {
    local_40 = local_res10;
    local_28 = *(longlong *)(**(longlong **)((longlong)this + 0x18) + 8);
    local_30 = &local_48;
    local_38 = UE::Core::Private::Function::
               TFunctionRefCaller<``UE::Geometry::FMeshBoolean::SimplifyAlongNewEdges'::__l67::<lambda_1>::operator()'::__l2::<lambda_1>,void,int>
               ::Call;
    local_20 = &local_38;
    local_res10[0] = param_1;
    UE::Geometry::FSmallListSet::
    Enumerate<_UE::Geometry::FDynamicMesh3::EnumerateVertexVertices_::__l2::<lambda_1>_>
              ((FSmallListSet *)(local_28 + 0xb8),local_18,(<lambda_1> *)&local_28);
  }
  return;
}

// operator() @ 143571730

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

void __thiscall
`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l62::<lambda_3>::operator()
          (void *this,int param_1)

{
  double dVar1;
  char cVar2;
  FDynamicMesh3 *this_00;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  bool bVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  TVector<double> *pTVar13;
  undefined8 uVar14;
  longlong *plVar15;
  uint uVar16;
  longlong lVar18;
  uint uVar19;
  double dVar20;
  double dVar21;
  undefined1 auStackY_1a8 [32];
  TVector<double>_u_0 local_170;
  undefined1 local_158 [8];
  longlong *local_150;
  double local_148;
  double local_140;
  double local_138;
  double local_120;
  TVector<double>_u_0 local_118 [3];
  double local_c8 [2];
  longlong local_b8;
  longlong local_a8 [3];
  longlong *local_90;
  undefined1 local_88;
  ulonglong local_78;
  ulonglong uVar17;
  
  if (-1 < param_1) {
    local_78 = __security_cookie.value ^ (ulonglong)auStackY_1a8;
    this_00 = *(FDynamicMesh3 **)this;
    if ((param_1 < (int)((this_00->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                        (this_00->TriangleRefCounts).RefCounts.CurBlockUsed)) &&
       (lVar18 = (longlong)param_1,
       (ushort)(*(short *)(*(longlong *)
                            ((this_00->TriangleRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                            (ulonglong)((uint)param_1 >> 9) * 8) + (ulonglong)(param_1 & 0x1ff) * 2)
               - 1U) < 0xfffe)) {
      UE::Geometry::FDynamicMesh3::GetTriVertices<UE::Math::TVector<double>_>
                (this_00,param_1,(TVector<double> *)&local_118[0]._s_0,
                 (TVector<double> *)(local_118 + 1),(TVector<double> *)(local_118 + 2));
      local_148 = ((double)local_118[0]._0_8_ + (double)local_118[1]._0_8_ +
                  (double)local_118[2]._0_8_) * __real_3fd5555555555555;
      local_138 = ((double)local_118[0]._16_8_ + (double)local_118[1]._16_8_ +
                  (double)local_118[2]._16_8_) * __real_3fd5555555555555;
      local_140 = ((double)local_118[0]._8_8_ + (double)local_118[1]._8_8_ +
                  (double)local_118[2]._8_8_) * __real_3fd5555555555555;
      iVar11 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x20))
                         (*(longlong **)((longlong)this + 8),&local_148,local_158,
                          *(undefined8 *)((longlong)this + 0x10));
      uVar17 = 0;
      uVar19 = 0;
      if (iVar11 < 0) {
LAB_143571ad0:
        puVar4 = *(undefined8 **)((longlong)this + 0x50);
        uVar5 = *(undefined8 *)((longlong)this + 0x58);
        UE::Core::Private::Function::CheckCallable((void *)*puVar4);
        pcVar6 = (code *)*puVar4;
        plVar15 = puVar4 + 2;
        if ((longlong *)puVar4[5] != (longlong *)0x0) {
          plVar15 = (longlong *)puVar4[5];
        }
        uVar14 = (**(code **)(*plVar15 + 8))();
        cVar10 = (*pcVar6)(uVar14,&local_148,uVar5);
        lVar3 = *(longlong *)((longlong)this + 0x30);
        cVar2 = **(char **)((longlong)this + 0x60);
        iVar11 = **(int **)((longlong)this + 0x28);
        if (param_1 < *(int *)(lVar3 + 8 + (longlong)iVar11 * 0x10)) {
          uVar19 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar19 == 0) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar9)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        *(bool *)(lVar18 + *(longlong *)(lVar3 + (longlong)iVar11 * 0x10)) = cVar10 != cVar2;
      }
      else {
        pTVar13 = UE::Geometry::FMeshNormals::operator[]
                            (*(FMeshNormals **)((longlong)this + 0x18),iVar11);
        dVar21 = (pTVar13->field0_0x0)._s_0.X;
        dVar7 = (pTVar13->field0_0x0)._s_0.Y;
        dVar1 = (pTVar13->field0_0x0)._s_0.Z;
        UE::Geometry::FDynamicMesh3::GetTriNormal
                  (*(FDynamicMesh3 **)this,(TVector<double> *)&local_170._s_0,param_1);
        dVar7 = local_170._s_0.Y * dVar7;
        dVar21 = local_170._s_0.X * dVar21;
        dVar20 = local_170._s_0.Z * dVar1;
        local_120 = dVar1;
        do {
          local_c8[0] = **(double **)((longlong)this + 0x20) + **(double **)((longlong)this + 0x20);
          local_b8 = 0;
          local_90 = (longlong *)0x0;
          local_88 = 0;
          iVar12 = (**(code **)(**(longlong **)((longlong)this + 8) + 0x20))
                             (*(longlong **)((longlong)this + 8),local_118 + uVar17,local_158,
                              local_c8);
          if (local_b8 != 0) {
            plVar15 = local_a8;
            if (local_90 != (longlong *)0x0) {
              plVar15 = local_90;
            }
            (**(code **)(*plVar15 + 0x10))();
          }
          if (iVar12 == -1) goto LAB_143571ad0;
          uVar16 = (int)uVar17 + 1;
          uVar17 = (ulonglong)uVar16;
        } while ((int)uVar16 < 3);
        iVar12 = **(int **)((longlong)this + 0x28);
        if ((iVar12 == 0) &&
           (((local_170._s_0.X != 0.0 || (local_170._s_0.Y != 0.0)) || (local_170._s_0.Z != 0.0))))
        {
          cVar2 = **(char **)((longlong)this + 0x38);
          local_150 = *(longlong **)((longlong)this + 0x30);
          bVar9 = 0.0 < dVar7 + dVar21 + dVar20;
          uVar16 = uVar19;
          if (param_1 < (int)local_150[1]) {
            uVar16 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar16 == 0) &&
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
          *(bool *)(lVar18 + *local_150) = bVar9 == (bool)cVar2;
          if ((1 < **(int **)((longlong)this + 0x40)) && (bVar9 == (bool)cVar2)) {
            plVar15 = *(longlong **)((longlong)this + 0x48);
            if (param_1 < (int)plVar15[1]) {
              uVar19 = (uint)~param_1 >> 0x1f;
            }
            if ((uVar19 == 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar9)) {
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            *(int *)(*plVar15 + lVar18 * 4) = iVar11;
          }
        }
        else {
          lVar3 = *(longlong *)((longlong)this + 0x30);
          if (param_1 < *(int *)(lVar3 + 8 + (longlong)iVar12 * 0x10)) {
            uVar19 = (uint)~param_1 >> 0x1f;
          }
          if ((uVar19 == 0) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar9)) {
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          *(undefined1 *)(lVar18 + *(longlong *)(lVar3 + (longlong)iVar12 * 0x10)) = 0;
        }
      }
    }
  }
  return;
}

// operator() @ 143572980

TAxisAlignedBox3<double> * __thiscall
`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l119::<lambda_4>::operator()
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
  
  lVar4 = *(longlong *)(*(longlong *)this + 0x10);
  uVar5 = *(ulonglong *)
           (*(longlong *)
             (*(longlong *)(*(longlong *)this + 0x1c0) + (ulonglong)((uint)param_1 >> 9) * 8) +
           (ulonglong)(param_1 & 0x1ff) * 0x10);
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

// Compute @ 14357bcf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall UE::Geometry::FMeshBoolean::Compute(FMeshBoolean *this)

{
  bool bVar1;
  undefined ***pppuVar2;
  FFunctionStorage *pFVar3;
  undefined1 auStack_f8 [32];
  code *local_d8 [2];
  undefined **local_c8;
  double local_c0;
  undefined ***local_b0;
  bool local_a8;
  code *local_98 [2];
  code *local_88 [3];
  undefined8 local_70;
  bool local_68;
  code *local_58;
  FFunctionStorage local_48;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_c0 = this->WindingThreshold;
  local_c8 = &Core::Private::Function::
              TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::Compute'::`2'::<lambda_1>,0,0>::
              _vftable_;
  local_d8[0] = Core::Private::Function::
                TFunctionRefCaller<`UE::Geometry::FMeshBoolean::Compute'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Geometry::FMeshBoolean::FCustomInsideTestContext_const_&>
                ::Call;
  local_58 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshBoolean::Compute'::__l2::<lambda_1>,bool,UE::Math::TVector<double>_const_&,UE::Geometry::FMeshBoolean::FCustomInsideTestContext_const_&>
             ::Call;
  local_b0 = (undefined ***)0x0;
  local_48.HeapAllocation = (FFunctionStorage *)0x0;
  Core::Private::Function::
  TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::Compute'::__l2::<lambda_1>,0,0>::
  CloneToEmptyStorage(&local_c8,&local_48);
  local_28 = 1;
  if (local_d8[0] != (code *)0x0) {
    pppuVar2 = &local_c8;
    if (local_b0 != (undefined ***)0x0) {
      pppuVar2 = local_b0;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  local_d8[0] = local_58;
  local_b0 = (undefined ***)0x0;
  if (local_58 != (code *)0x0) {
    pFVar3 = &local_48;
    if (local_48.HeapAllocation != (FFunctionStorage *)0x0) {
      pFVar3 = local_48.HeapAllocation;
    }
    (*(code *)**(undefined8 **)pFVar3->InlineAllocation)(pFVar3,&local_c8);
  }
  local_a8 = (bool)local_28;
  local_98[0] = local_58;
  local_70 = 0;
  if (local_58 != (code *)0x0) {
    pFVar3 = &local_48;
    if (local_48.HeapAllocation != (FFunctionStorage *)0x0) {
      pFVar3 = local_48.HeapAllocation;
    }
    (*(code *)**(undefined8 **)pFVar3->InlineAllocation)(pFVar3,local_98 + 2);
  }
  local_68 = (bool)local_28;
  bVar1 = ComputeWithCustomInside
                    (this,(FCustomInsideMeshTest *)local_98,(FCustomInsideMeshTest *)local_d8);
  if (local_58 != (code *)0x0) {
    pFVar3 = &local_48;
    if (local_48.HeapAllocation != (FFunctionStorage *)0x0) {
      pFVar3 = local_48.HeapAllocation;
    }
    (**(code **)(*(longlong *)pFVar3->InlineAllocation + 0x10))();
  }
  return bVar1;
}

// ComputeWithCustomInside @ 143582230

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FMeshBoolean::ComputeWithCustomInside
          (FMeshBoolean *this,FCustomInsideMeshTest *param_1,FCustomInsideMeshTest *param_2)

{
  FMutex *this_00;
  TTransformSRT3<double> *pTVar1;
  double *pdVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  atomic<unsigned_char> aVar5;
  EBooleanOp EVar6;
  FScriptContainerElement *pFVar7;
  FDynamicMesh3 **ppFVar8;
  FDynamicMeshAttributeSet *pFVar9;
  undefined8 uVar10;
  FDynamicMesh3 *pFVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  <lambda_1> <Var20;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTVar21;
  char cVar22;
  bool bVar23;
  undefined1 uVar24;
  bool bVar25;
  short sVar26;
  uint uVar27;
  uint uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  TAxisAlignedBox3<double> *pTVar32;
  ulong64 uVar33;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar34;
  ulonglong uVar35;
  TArray<signed_char,TSizedDefaultAllocator<32>_> *pTVar36;
  int *piVar37;
  byte bVar38;
  undefined ***pppuVar39;
  uint *puVar40;
  longlong *plVar41;
  longlong *plVar42;
  ForElementType<FSetElementId> FVar43;
  undefined1 *puVar44;
  uint uVar45;
  longlong lVar46;
  FRefCountVector *pFVar47;
  ForAnyElementType *pFVar48;
  uint *puVar49;
  longlong lVar50;
  FMeshBoolean *pFVar51;
  FScriptContainerElement *pFVar52;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar53;
  TBitArray<FDefaultBitArrayAllocator> *pTVar54;
  uint uVar55;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *this_01;
  ulonglong uVar56;
  double *pdVar57;
  TVector<double>_u_0 *pTVar58;
  int iVar59;
  TBitArray<FDefaultBitArrayAllocator> *pTVar60;
  FDynamicMesh3 *pFVar61;
  uint uVar62;
  longlong lVar63;
  FDynamicMesh3 **ppFVar64;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *this_02;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *pTVar65;
  FMeshBoolean *pFVar66;
  double dVar67;
  double dVar68;
  undefined4 uVar69;
  undefined4 uVar70;
  undefined4 uVar71;
  undefined4 uVar72;
  undefined4 uVar73;
  undefined4 uVar74;
  double dVar75;
  double dVar76;
  double dVar77;
  undefined4 uVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined1 auStackY_18d8 [32];
  char local_1888;
  int local_1884;
  uint local_1880;
  undefined1 local_187c;
  <lambda_1> local_187b [3];
  undefined4 local_1878 [2];
  ForAnyElementType local_1870;
  undefined8 local_1868;
  uint local_1860 [2];
  undefined8 local_1858;
  undefined1 local_1850;
  undefined1 local_184f;
  undefined1 local_184e;
  undefined1 local_184d;
  undefined1 local_184c [4];
  FDynamicMesh3 *local_1848 [2];
  int local_1838;
  int local_1834;
  int local_1830;
  uint local_182c;
  uint local_1828;
  uint local_1824;
  int local_1820 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_1818;
  undefined1 local_1808 [2];
  undefined1 local_1806 [6];
  TArray<int,TSizedDefaultAllocator<32>_> local_1800;
  FMeshBoolean *local_17f0;
  longlong local_17e8;
  TArray<int,TSizedDefaultAllocator<32>_> local_17e0;
  uint *local_17d0;
  ulonglong local_17c8;
  TVector<double>_u_0 local_17c0;
  FCustomInsideMeshTest *local_17a8;
  FCustomInsideMeshTest *local_17a0;
  TArray<int,TSizedDefaultAllocator<32>_> local_1798;
  TArray<bool,TSizedDefaultAllocator<32>_> local_1788;
  double local_1778;
  undefined8 local_1770;
  double local_1768;
  double dStack_1760;
  double local_1758;
  double dStack_1750;
  double local_1748;
  double dStack_1740;
  double local_1738;
  double dStack_1730;
  double local_1728;
  double dStack_1720;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1718;
  undefined8 uStack_1710;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1708;
  undefined8 uStack_1700;
  undefined8 uStack_16f8;
  int local_16f0;
  undefined4 uStack_16ec;
  longlong *local_16e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_16e0;
  undefined8 local_16c0;
  int local_16b8;
  int local_16b4;
  uint local_16b0;
  undefined4 local_16ac;
  TArray<int,TSizedDefaultAllocator<32>_> local_16a8;
  undefined4 local_1698 [2];
  TBitArray<FDefaultBitArrayAllocator> *local_1690;
  int local_1688;
  uint uStack_1684;
  TBitArray<FDefaultBitArrayAllocator> *pTStack_1680;
  undefined4 local_1678;
  int iStack_1674;
  int iStack_1670;
  undefined4 uStack_166c;
  FIntersectionsQueryResult local_1668;
  FMeshConnectedComponents local_1638;
  TBitArray<FDefaultBitArrayAllocator> *local_1620;
  longlong local_1618;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1610;
  int iStack_15f0;
  undefined4 uStack_15ec;
  int local_15e8;
  undefined4 uStack_15e4;
  FMeshNormals local_15e0;
  undefined1 local_15c8 [4];
  undefined8 local_15c4;
  undefined8 local_15bc;
  undefined8 local_15b4;
  uint local_15a8;
  undefined4 uStack_15a4;
  undefined4 uStack_15a0;
  undefined8 local_159c;
  undefined4 local_1594;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1588;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_1568;
  TVector<double>_u_0 local_1548;
  double local_1530;
  double local_1528;
  double local_1520;
  double local_1518;
  double local_1510;
  double local_1508;
  TVector<double>_u_0 local_1500;
  double local_14e8;
  int local_14e0;
  int local_14dc;
  int local_14d8;
  undefined1 local_14d4 [8];
  int local_14cc;
  undefined1 local_14c8 [24];
  undefined8 local_14b0;
  undefined8 uStack_14a8;
  BaseIterator local_14a0;
  BaseIterator local_1490;
  undefined1 local_1480 [8];
  FSparseDynamicOctree3 *local_1478;
  FDynamicMesh3 *local_1470;
  FDynamicMesh3 *local_1468;
  int local_1460;
  int local_145c;
  FDynamicMeshEditor local_1458;
  FDynamicMeshEditor local_1450;
  FDynamicMesh3 *local_1448;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1440;
  double local_1438;
  undefined1 local_1430 [12];
  uint uStack_1424;
  TBitArray<FDefaultBitArrayAllocator> *local_1420;
  undefined8 uStack_1418;
  longlong local_1410;
  int iStack_1408;
  undefined4 uStack_1404;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_1400;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_13f8;
  undefined8 uStack_13d8;
  undefined1 local_13d0 [12];
  uint uStack_13c4;
  TBitArray<FDefaultBitArrayAllocator> *local_13c0;
  undefined8 uStack_13b8;
  longlong local_13b0;
  undefined8 uStack_13a8;
  FSparseDynamicOctree3 *local_13a0;
  FDynamicMesh3 *local_1398;
  FDynamicMesh3 *local_1390;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> local_1388;
  IndexIterator local_1350;
  FVector3i *local_1340;
  uint *local_1338;
  TVector<double>_u_0 *local_1330;
  FDynamicMesh3 *local_1328;
  code *local_1320;
  undefined1 *local_1318;
  code *local_1310;
  TVector<double>_u_0 **local_1308;
  undefined1 local_1300 [16];
  uint *local_12f0;
  uint *local_12e8;
  uint *local_12e0;
  uint *local_12d8;
  uint *local_12d0;
  uint *local_12c8;
  undefined4 *local_12c0;
  undefined4 *local_12b8;
  IndexIterator local_12b0;
  FScriptContainerElement *local_1298;
  int iStack_1290;
  undefined4 uStack_128c;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_1288;
  TFastWindingTree<UE::Geometry::FDynamicMesh3> *local_1280;
  TArrayView<std::nullptr_t,int> local_1278;
  code *local_1268;
  FDynamicMesh3 **local_1260;
  IndexIterator local_1258;
  undefined8 local_1240;
  undefined8 local_1230;
  undefined8 uStack_1228;
  undefined8 local_1220;
  FVector3i local_1210;
  undefined1 local_1200 [24];
  longlong lStack_11e8;
  longlong lStack_11e0;
  int local_11d8;
  undefined4 uStack_11d4;
  code *local_11c8 [2];
  undefined **local_11b8;
  FMeshNormals *local_11b0;
  undefined ***local_11a0;
  TVector<double>_u_0 local_1198;
  double local_1180;
  double dStack_1178;
  double local_1170;
  TVector<double>_u_0 local_1168;
  double local_1150;
  double local_1148;
  double local_1140;
  FDynamicMesh3 *local_1138;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *local_1130;
  double *local_1128;
  FMeshNormals *local_1120;
  double *local_1118;
  int *local_1110;
  TArray<bool,TSizedDefaultAllocator<32>_> *local_1108;
  undefined1 *local_1100;
  int *local_10f8;
  TArray<int,TSizedDefaultAllocator<32>_> *local_10f0;
  FCustomInsideMeshTest *local_10e8;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> **local_10e0;
  undefined1 *local_10d8;
  TArrayView<int_const_,int> local_10c8;
  TVector<double>_u_0 local_10b8;
  TVector<double>_u_0 local_1098;
  undefined8 local_1078;
  undefined8 uStack_1070;
  undefined8 local_1068;
  code *local_1058 [2];
  undefined **local_1048;
  FMeshBoolean *local_1040;
  undefined8 local_1030;
  TRangedForIterator local_1028;
  double local_ff8;
  double dStack_ff0;
  double local_fe8;
  double local_fe0;
  double dStack_fd8;
  double local_fd0;
  TRangedForIterator local_fc8;
  undefined8 local_f98;
  undefined8 uStack_f90;
  double local_f88;
  double dStack_f80;
  undefined1 local_f78 [16];
  undefined1 auStack_f68 [16];
  double dStack_f58;
  double dStack_f50;
  double local_f48;
  double dStack_f40;
  double local_f38;
  double local_f30;
  double dStack_f28;
  double local_f20;
  double local_f18;
  double dStack_f10;
  double local_f08;
  double local_f00;
  double dStack_ef8;
  double local_ef0;
  TFunction<bool___cdecl(int,int)> local_ee8;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_eb8;
  TFunction<UE::Math::TVector<double>___cdecl(int,UE::Math::TVector<double>_const_&)> local_e88;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e58;
  undefined4 local_e1c;
  TAxisAlignedBox3<double> local_e18;
  TAxisAlignedBox3<double> local_de8;
  TAxisAlignedBox3<double> local_db8;
  TAxisAlignedBox3<double> local_d88;
  TAxisAlignedBox3<double> local_d58;
  TAxisAlignedBox3<double> local_d28;
  FDynamicMesh3 local_cf8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_ac8;
  FMeshMeshCut local_a78;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_a18;
  undefined1 local_9c8 [64];
  ForElementType<FSetElementId> local_988;
  int local_980;
  FMutex local_978;
  TWrapAroundGridIndexer3<double> local_970;
  int local_968;
  undefined1 local_958 [40];
  longlong *local_930;
  undefined1 local_928 [56];
  longlong *local_8f0;
  bool local_8e8;
  undefined1 local_8d8 [56];
  longlong *local_8a0;
  bool local_898;
  double local_888 [2];
  undefined1 local_878 [48];
  undefined1 local_848;
  undefined1 local_838 [360];
  undefined1 local_6d0 [72];
  undefined4 local_688;
  undefined1 local_668 [208];
  int local_598;
  int local_58c;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> local_518;
  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> local_4c8;
  bool local_478;
  bool local_477;
  undefined1 local_3a8 [80];
  double local_358;
  TDynamicVector<int,512> local_350;
  TDynamicVector<UE::Math::TVector<double>,512> local_338;
  TDynamicVector<UE::Math::TVector<double>,512> local_320;
  TDynamicVector<int,512> local_308;
  int iStack_2ec;
  undefined1 local_2e8 [80];
  double local_298;
  TDynamicVector<int,512> local_290;
  TDynamicVector<UE::Math::TVector<double>,512> local_278;
  TDynamicVector<UE::Math::TVector<double>,512> local_260;
  TDynamicVector<int,512> local_248;
  undefined1 local_228 [32];
  longlong local_208;
  int local_200 [6];
  ForElementType<FSetElementId> local_1e8;
  int local_1e0;
  TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_1d8;
  void *local_198;
  undefined4 local_190;
  undefined1 local_188 [32];
  double local_168;
  uint local_160 [4];
  undefined1 local_150 [8];
  undefined1 *local_148;
  int local_140 [2];
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  local_138;
  void *local_f8;
  undefined4 local_f0;
  ulonglong local_e8;
  
  local_e8 = __security_cookie.value ^ (ulonglong)auStackY_18d8;
  local_17f0 = this;
  local_17a8 = param_2;
  local_17a0 = param_1;
  FDynamicMesh3::FDynamicMesh3(&local_cf8,this->Meshes[1]);
  if (this->Result != this->Meshes[0]) {
    FDynamicMesh3::operator=(this->Result,this->Meshes[0]);
  }
  local_1848[0] = this->Result;
  local_1848[1] = &local_cf8;
  pTVar32 = FDynamicMesh3::GetBounds(local_1848[0],&local_d28,true);
  TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
            ((TAxisAlignedBox3<double> *)&local_1548._s_0,pTVar32,this->Transforms);
  pTVar32 = FDynamicMesh3::GetBounds(local_1848[1],&local_d88,true);
  TAxisAlignedBox3<double>::TAxisAlignedBox3<double>
            ((TAxisAlignedBox3<double> *)&local_1168._s_0,pTVar32,this->Transforms + 1);
  pFVar61 = local_1848[0];
  uVar73 = SUB84(local_1548._s_0.X,0);
  uVar74 = (int)((ulonglong)local_1548._0_8_ >> 0x20);
  if (local_1168._s_0.X <= local_1548._s_0.X) {
    local_1548._s_0.X = local_1168._s_0.X;
    uVar73 = SUB84(local_1168._s_0.X,0);
    uVar74 = (int)((ulonglong)local_1168._0_8_ >> 0x20);
  }
  uVar69 = SUB84(local_1548._s_0.Y,0);
  uVar70 = (int)((ulonglong)local_1548._8_8_ >> 0x20);
  if (local_1168._s_0.Y <= local_1548._s_0.Y) {
    local_1548._s_0.Y = local_1168._s_0.Y;
    uVar69 = SUB84(local_1168._s_0.Y,0);
    uVar70 = (int)((ulonglong)local_1168._8_8_ >> 0x20);
  }
  uVar71 = SUB84(local_1548._s_0.Z,0);
  uVar72 = (int)((ulonglong)local_1548._16_8_ >> 0x20);
  if (local_1168._s_0.Z <= local_1548._s_0.Z) {
    local_1548._s_0.Z = local_1168._s_0.Z;
    uVar71 = SUB84(local_1168._s_0.Z,0);
    uVar72 = (int)((ulonglong)local_1168._16_8_ >> 0x20);
  }
  if (local_1530 <= local_1150) {
    local_1530 = local_1150;
  }
  uVar78 = SUB84(local_1528,0);
  uVar79 = (int)((ulonglong)local_1528 >> 0x20);
  if (local_1528 <= local_1148) {
    local_1528 = local_1148;
    uVar78 = SUB84(local_1148,0);
    uVar79 = (int)((ulonglong)local_1148 >> 0x20);
  }
  uVar80 = SUB84(local_1520,0);
  uVar81 = (int)((ulonglong)local_1520 >> 0x20);
  if (local_1520 <= local_1140) {
    local_1520 = local_1140;
    uVar80 = SUB84(local_1140,0);
    uVar81 = (int)((ulonglong)local_1140 >> 0x20);
  }
  uVar82 = SUB84(__real_3fe0000000000000,0);
  dVar75 = (double)CONCAT44(uVar79,uVar78) - (double)CONCAT44(uVar70,uVar69);
  dVar76 = (double)CONCAT44(uVar81,uVar80) - (double)CONCAT44(uVar72,uVar71);
  dVar67 = local_1530 - (double)CONCAT44(uVar74,uVar73);
  if (dVar75 <= 0.0) {
    dVar75 = 0.0;
  }
  if (dVar76 <= 0.0) {
    dVar76 = 0.0;
  }
  if (dVar67 <= 0.0) {
    dVar67 = 0.0;
  }
  dVar77 = (local_1530 + (double)CONCAT44(uVar74,uVar73)) * __real_3fe0000000000000;
  dVar16 = ((double)CONCAT44(uVar79,uVar78) + (double)CONCAT44(uVar70,uVar69)) *
           __real_3fe0000000000000;
  uVar73 = (undefined4)((ulonglong)dVar16 >> 0x20);
  if (dVar75 <= dVar76) {
    dVar75 = dVar76;
  }
  local_1768 = this->Transforms[0].Rotation.field0_0x0._s_0.X;
  dStack_1760 = this->Transforms[0].Rotation.field0_0x0._s_0.Y;
  dVar76 = ((double)CONCAT44(uVar81,uVar80) + (double)CONCAT44(uVar72,uVar71)) *
           __real_3fe0000000000000;
  if (dVar75 <= dVar67) {
    dVar75 = dVar67;
  }
  local_1758 = this->Transforms[0].Rotation.field0_0x0._s_0.Z;
  dStack_1750 = this->Transforms[0].Rotation.field0_0x0._s_0.W;
  if (__real_412e848000000000 <= dVar75) {
    dVar75 = __real_412e848000000000;
  }
  if (dVar75 <= __real_3f847ae147ae147b) {
    dVar75 = __real_3f847ae147ae147b;
  }
  dVar67 = __real_3ff0000000000000 / dVar75;
  local_1748 = (this->Transforms[0].Translation.field0_0x0._s_0.X - dVar77) * dVar67;
  local_1738 = (this->Transforms[0].Translation.field0_0x0._s_0.Z - dVar76) * dVar67;
  local_1728 = this->Transforms[0].Scale3D.field0_0x0._s_0.Y * dVar67;
  dStack_1740 = (this->Transforms[0].Translation.field0_0x0._s_0.Y - dVar16) * dVar67;
  dStack_1730 = this->Transforms[0].Scale3D.field0_0x0._s_0.X * dVar67;
  dStack_1720 = this->Transforms[0].Scale3D.field0_0x0._s_0.Z * dVar67;
  MeshTransformsLocal::
  TransformMeshHelper<_MeshTransforms::ApplyTransform_::__l2::<lambda_1>,_MeshTransforms::ApplyTransform_::__l2::<lambda_2>,_MeshTransforms::ApplyTransform_::__l2::<lambda_3>,_MeshTransforms::ApplyTransform_::__l2::<lambda_4>_>
            (local_1848[0],(TTransformSRT3<double> *)&local_1768,
             (TTransformSRT3<double> *)&local_1768,(TTransformSRT3<double> *)&local_1768,
             (TTransformSRT3<double> *)&local_1768,All);
  if (dStack_1730 * local_1728 * dStack_1720 < 0.0) {
    FDynamicMesh3::ReverseOrientation(pFVar61,false);
  }
  pFVar61 = local_1848[1];
  local_1768 = this->Transforms[1].Rotation.field0_0x0._s_0.X;
  dStack_1760 = this->Transforms[1].Rotation.field0_0x0._s_0.Y;
  local_1758 = this->Transforms[1].Rotation.field0_0x0._s_0.Z;
  dStack_1750 = this->Transforms[1].Rotation.field0_0x0._s_0.W;
  local_1728 = this->Transforms[1].Scale3D.field0_0x0._s_0.Y * dVar67;
  local_1748 = (this->Transforms[1].Translation.field0_0x0._s_0.X - dVar77) * dVar67;
  local_1738 = (this->Transforms[1].Translation.field0_0x0._s_0.Z - dVar76) * dVar67;
  dStack_1740 = (this->Transforms[1].Translation.field0_0x0._s_0.Y - dVar16) * dVar67;
  dStack_1730 = this->Transforms[1].Scale3D.field0_0x0._s_0.X * dVar67;
  dStack_1720 = this->Transforms[1].Scale3D.field0_0x0._s_0.Z * dVar67;
  MeshTransformsLocal::
  TransformMeshHelper<_MeshTransforms::ApplyTransform_::__l2::<lambda_1>,_MeshTransforms::ApplyTransform_::__l2::<lambda_2>,_MeshTransforms::ApplyTransform_::__l2::<lambda_3>,_MeshTransforms::ApplyTransform_::__l2::<lambda_4>_>
            (local_1848[1],(TTransformSRT3<double> *)&local_1768,
             (TTransformSRT3<double> *)&local_1768,(TTransformSRT3<double> *)&local_1768,
             (TTransformSRT3<double> *)&local_1768,All);
  if (dStack_1730 * local_1728 * dStack_1720 < 0.0) {
    FDynamicMesh3::ReverseOrientation(pFVar61,false);
  }
  dStack_f50 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  uVar10 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  dStack_f80 = _UNK_15061cbc8;
  local_f88 = ___xmm_3ff00000000000000000000000000000;
  dStack_f58 = (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._12_4_,
                                UE::Math::TVector<double>::OneVector.field0_0x0._8_4_);
  (this->ResultTransform).Rotation.field0_0x0._s_0.X = 0.0;
  (this->ResultTransform).Rotation.field0_0x0._s_0.Y = 0.0;
  (this->ResultTransform).Rotation.field0_0x0._s_0.Z = local_f88;
  (this->ResultTransform).Rotation.field0_0x0._s_0.W = dStack_f80;
  local_f98 = 0;
  uStack_f90 = 0;
  auVar13._8_4_ = SUB84(dVar16,0);
  auVar13._0_8_ = dVar77;
  auVar13._12_4_ = uVar73;
  *(undefined1 (*) [16])&(this->ResultTransform).Translation.field0_0x0 = auVar13;
  local_f78._8_4_ = SUB84(dVar16,0);
  local_f78._0_8_ = dVar77;
  local_f78._12_4_ = uVar73;
  auStack_f68._8_4_ = (undefined4)uVar10;
  auStack_f68._12_4_ = (undefined4)((ulonglong)uVar10 >> 0x20);
  auVar14._8_4_ = auStack_f68._8_4_;
  auVar14._0_8_ = dVar76;
  auVar14._12_4_ = auStack_f68._12_4_;
  *(undefined1 (*) [16])((longlong)&(this->ResultTransform).Translation.field0_0x0 + 0x10) = auVar14
  ;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.Y = dStack_f58;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.Z = dStack_f50;
  auStack_f68._0_8_ = dVar76;
  dVar67 = (double)CONCAT44(UE::Math::TVector<double>::OneVector.field0_0x0._12_4_,
                            UE::Math::TVector<double>::OneVector.field0_0x0._8_4_) * dVar75;
  dVar76 = dVar75 * UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  auVar15._8_4_ = SUB84(dVar67,0);
  auVar15._0_8_ = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X * dVar75;
  auVar15._12_4_ = (int)((ulonglong)dVar67 >> 0x20);
  *(undefined1 (*) [16])&(this->ResultTransform).Scale3D.field0_0x0 = auVar15;
  (this->ResultTransform).Scale3D.field0_0x0._s_0.Z = dVar76;
  cVar22 = (**(code **)(this->_padding_ + 8))(this);
  if (cVar22 == '\0') {
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_3a8,local_1848[0],true);
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::TMeshAABBTree3<UE::Geometry::FDynamicMesh3>
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_2e8,local_1848[1],true);
    local_358 = this->SnapTolerance;
    local_1048 = &Core::Private::Function::
                  TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::`2'::<lambda_1>,0,0>
                  ::_vftable_;
    local_1058[0] =
         Core::Private::Function::
         TFunctionRefCaller<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l2::<lambda_1>,bool,UE::Geometry::TIntrTriangle3Triangle3<double>_&>
         ::Call;
    local_8d8._0_8_ = __real_7fefffffffffffff;
    local_928._0_8_ = __real_7fefffffffffffff;
    local_1030 = 0;
    local_8d8._16_8_ = 0;
    local_8a0 = (longlong *)0x0;
    local_898 = false;
    local_928._16_8_ = 0;
    local_8f0 = (longlong *)0x0;
    local_8e8 = false;
    local_958._0_8_ = 0;
    local_930 = (longlong *)0x0;
    local_1040 = this;
    local_298 = local_358;
    TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::FindAllIntersections
              ((TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_3a8,&local_1668,
               (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)local_2e8,
               (TFunction<UE::Math::TVector<double>___cdecl(UE::Math::TVector<double>_const_&)> *)
               local_958,(FQueryOptions *)local_928,(FQueryOptions *)local_8d8,
               (TFunction<bool___cdecl(UE::Geometry::TIntrTriangle3Triangle3<double>_&)> *)
               local_1058);
    if (local_958._0_8_ != 0) {
      plVar41 = (longlong *)(local_958 + 0x10);
      if (local_930 != (longlong *)0x0) {
        plVar41 = local_930;
      }
      (**(code **)(*plVar41 + 0x10))();
    }
    if (local_928._16_8_ != 0) {
      plVar41 = (longlong *)(local_928 + 0x20);
      if (local_8f0 != (longlong *)0x0) {
        plVar41 = local_8f0;
      }
      (**(code **)(*plVar41 + 0x10))();
    }
    if (local_8d8._16_8_ != 0) {
      plVar41 = (longlong *)(local_8d8 + 0x20);
      if (local_8a0 != (longlong *)0x0) {
        plVar41 = local_8a0;
      }
      (**(code **)(*plVar41 + 0x10))();
    }
    cVar22 = (**(code **)(this->_padding_ + 8))();
    if (cVar22 == '\0') {
      lVar63 = 2;
      if ((this->Operation == TrimInside) || (iVar29 = 2, this->Operation - TrimOutside < 3)) {
        local_a78.bMutuallyCut = false;
        iVar29 = 1;
      }
      else {
        local_a78.bMutuallyCut = true;
      }
      local_a78.SnapTolerance = this->SnapTolerance;
      local_a78.Mesh[0] = local_1848[0];
      local_a78.Mesh[1] = local_1848[1];
      local_a78.bTrackInsertedVertices = this->bCollapseDegenerateEdgesOnCut;
      local_a78.bCutCoplanar = false;
      local_a78.VertexChains[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a78.VertexChains[0].ArrayNum = 0;
      local_a78.VertexChains[0].ArrayMax = 0;
      local_a78.VertexChains[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a78.VertexChains[1].ArrayNum = 0;
      local_a78.VertexChains[1].ArrayMax = 0;
      local_a78.SegmentToChain[0].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a78.SegmentToChain[0].ArrayNum = 0;
      local_a78.SegmentToChain[0].ArrayMax = 0;
      local_a78.SegmentToChain[1].AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a78.SegmentToChain[1].ArrayNum = 0;
      local_a78.SegmentToChain[1].ArrayMax = 0;
      FMeshMeshCut::Cut(&local_a78,&local_1668);
      cVar22 = (**(code **)(this->_padding_ + 8))(this);
      uVar17 = _UNK_15060db28;
      uVar10 = ___xmm_ffffffffffffffffffffffffffffffff;
      if (cVar22 == '\0') {
        local_1884 = iVar29;
        if (this->bCollapseDegenerateEdgesOnCut != false) {
          piVar37 = &local_a78.VertexChains[0].ArrayNum;
          local_1858 = local_1848;
          local_1880 = 0;
          dVar76 = this->SnapTolerance * this->SnapTolerance *
                   this->DegenerateEdgeTolFactor * this->DegenerateEdgeTolFactor;
          do {
            iVar29 = *piVar37;
            local_1870.Data = (FScriptContainerElement *)0x0;
            local_1868 = 0;
            uVar45 = 0;
            if (0 < iVar29) {
              do {
                uVar55 = 0;
                if ((int)uVar45 < iVar29) {
                  uVar55 = ~uVar45 >> 0x1f;
                }
                if ((uVar55 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar12 = (code *)swi(3);
                  uVar24 = (*pcVar12)();
                  return (bool)uVar24;
                }
                uVar62 = *(int *)((((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar37 + -2))->
                                  AllocatorInstance).Data + (longlong)(int)uVar45 * 4) + 1 + uVar45;
                uVar55 = uVar45 + 1;
                uVar45 = uVar45 + 2;
                if ((int)uVar45 < (int)uVar62) {
                  lVar63 = (longlong)(int)uVar55 << 2;
                  do {
                    uVar27 = 0;
                    if ((int)uVar55 < *piVar37) {
                      uVar27 = ~uVar55 >> 0x1f;
                    }
                    if ((uVar27 == 0) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar23)) {
                      pcVar12 = (code *)swi(3);
                      uVar24 = (*pcVar12)();
                      return (bool)uVar24;
                    }
                    uVar27 = *(uint *)((((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar37 + -2))
                                       ->AllocatorInstance).Data + lVar63);
                    uVar28 = 0;
                    if ((int)uVar45 < *piVar37) {
                      uVar28 = ~uVar45 >> 0x1f;
                    }
                    if ((uVar28 == 0) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar23)) {
                      pcVar12 = (code *)swi(3);
                      uVar24 = (*pcVar12)();
                      return (bool)uVar24;
                    }
                    lVar63 = lVar63 + 4;
                    uVar28 = *(uint *)((((TArray<int,TSizedDefaultAllocator<32>_> *)(piVar37 + -2))
                                       ->AllocatorInstance).Data + lVar63);
                    pFVar7 = ((*local_1858)->Vertices).Blocks.AllocatorInstance.Data;
                    lVar46 = *(longlong *)(pFVar7 + (ulonglong)(uVar28 >> 9) * 8);
                    pdVar57 = (double *)(lVar46 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
                    local_f18 = *pdVar57;
                    dStack_f10 = pdVar57[1];
                    local_f08 = *(double *)(lVar46 + 0x10 + (ulonglong)(uVar28 & 0x1ff) * 0x18);
                    lVar46 = *(longlong *)(pFVar7 + (ulonglong)(uVar27 >> 9) * 8);
                    pdVar57 = (double *)(lVar46 + (ulonglong)(uVar27 & 0x1ff) * 0x18);
                    local_f00 = *pdVar57;
                    dStack_ef8 = pdVar57[1];
                    local_ef0 = *(double *)(lVar46 + 0x10 + (ulonglong)(uVar27 & 0x1ff) * 0x18);
                    dVar75 = local_f18 - local_f00;
                    dVar67 = local_f08 - local_ef0;
                    dVar16 = dStack_f10 - dStack_ef8;
                    if (dVar16 * dVar16 + dVar75 * dVar75 + dVar67 * dVar67 < dVar76) {
                      local_1830 = FDynamicMesh3::FindEdge(*local_1858,uVar27,uVar28);
                      if (((local_1870.Data <= (FScriptContainerElement *)&local_1830) &&
                          ((FScriptContainerElement *)&local_1830 <
                           local_1870.Data + (longlong)local_1868._4_4_ * 4)) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar23)) {
                        pcVar12 = (code *)swi(3);
                        uVar24 = (*pcVar12)();
                        return (bool)uVar24;
                      }
                      iVar29 = (int)local_1868;
                      if ((int)local_1868 == local_1868._4_4_) {
                        iVar29 = Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,&local_1870,(int *)((longlong)&local_1868 + 4));
                      }
                      local_1868 = CONCAT44(local_1868._4_4_,iVar29 + 1);
                      *(int *)(local_1870.Data + (longlong)iVar29 * 4) = local_1830;
                    }
                    uVar55 = uVar55 + 1;
                    uVar45 = uVar45 + 1;
                  } while ((int)uVar45 < (int)uVar62);
                }
                iVar29 = *piVar37;
                uVar45 = uVar62;
              } while ((int)uVar62 < iVar29);
            }
            ppFVar64 = local_1858;
            uVar45 = local_1880;
            uVar56 = 0;
            iVar29 = (int)local_1868;
            local_1298 = local_1870.Data;
            if (((int)local_1868 < 0) &&
               (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                   ("InCount >= 0",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                    ,0xeb,L""), bVar23)) {
              pcVar12 = (code *)swi(3);
              uVar24 = (*pcVar12)();
              return (bool)uVar24;
            }
            iStack_1290 = iVar29;
            local_10c8._12_4_ = uStack_128c;
            local_10c8.ArrayNum = iVar29;
            local_10c8.DataPtr = (int *)local_1298;
            local_ac8.Elements._0_8_ = 0;
            local_ac8.Elements._8_8_ = 0;
            local_ac8.Elements._32_8_ = 0;
            local_ac8.Elements._40_4_ = 0;
            local_ac8.Elements._44_4_ = 0x80;
            local_ac8.Elements._48_4_ = 0xffffffff;
            local_ac8.Elements._52_4_ = 0;
            local_ac8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_ac8.HashSize = 0;
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Append(&local_ac8,&local_10c8);
            uVar35 = uVar56;
            if (0 < (int)local_1868) {
              do {
                uVar62 = (uint)uVar56;
                uVar55 = 0;
                if ((int)uVar62 < (int)local_1868) {
                  uVar55 = ~uVar62 >> 0x1f;
                }
                if ((uVar55 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar12 = (code *)swi(3);
                  uVar24 = (*pcVar12)();
                  return (bool)uVar24;
                }
                pFVar61 = *ppFVar64;
                uVar55 = *(uint *)(local_1870.Data + uVar35);
                bVar23 = FRefCountVector::IsValid(&pFVar61->EdgeRefCounts,uVar55);
                if (bVar23) {
                  pFVar7 = (pFVar61->Vertices).Blocks.AllocatorInstance.Data;
                  ppFVar8 = *(FDynamicMesh3 ***)
                             (*(longlong *)
                               ((pFVar61->Edges).Blocks.AllocatorInstance.Data +
                               (ulonglong)(uVar55 >> 9) * 8) + (ulonglong)(uVar55 & 0x1ff) * 0x10);
                  uVar55 = (uint)ppFVar8;
                  lVar63 = *(longlong *)(pFVar7 + (((ulonglong)ppFVar8 & 0xffffffff) >> 9) * 8);
                  pdVar57 = (double *)(lVar63 + (ulonglong)(uVar55 & 0x1ff) * 0x18);
                  pTStack_1708 = *(TBitArray<FDefaultBitArrayAllocator> **)
                                  (lVar63 + 0x10 + (ulonglong)(uVar55 & 0x1ff) * 0x18);
                  uVar56 = (ulonglong)((uint)((ulonglong)ppFVar8 >> 0x20) & 0x1ff);
                  lVar63 = *(longlong *)(pFVar7 + ((ulonglong)ppFVar8 >> 0x29) * 8);
                  pdVar2 = (double *)(lVar63 + uVar56 * 0x18);
                  dVar75 = *pdVar2 - *pdVar57;
                  dVar67 = *(double *)(lVar63 + 0x10 + uVar56 * 0x18) - (double)pTStack_1708;
                  dVar16 = pdVar2[1] - pdVar57[1];
                  if (dVar16 * dVar16 + dVar75 * dVar75 + dVar67 * dVar67 <= dVar76) {
                    pFVar9 = (pFVar61->AttributeSet).Ptr;
                    local_1858 = ppFVar8;
                    if ((pFVar9 == (FDynamicMeshAttributeSet *)0x0) ||
                       (cVar22 = (**(code **)(pFVar9->_padding_ + 0x90))
                                           (pFVar9,(ulonglong)ppFVar8 >> 0x20), cVar22 == '\0')) {
                      uVar73 = (undefined4)local_1858;
                      uVar55 = local_1858._4_4_;
                    }
                    else {
                      uVar73 = local_1858._4_4_;
                      pFVar9 = ((*ppFVar64)->AttributeSet).Ptr;
                      if ((pFVar9 != (FDynamicMeshAttributeSet *)0x0) &&
                         (cVar22 = (**(code **)(pFVar9->_padding_ + 0x90))(), cVar22 != '\0'))
                      goto LAB_1435834eb;
                    }
                    local_1240 = 0xffffffffffffffff;
                    local_1230 = uVar10;
                    uStack_1228 = uVar17;
                    local_1220 = 0xffffffffffffffff;
                    iVar29 = (**(code **)((*ppFVar64)->_padding_ + 0x70))
                                       (*ppFVar64,uVar73,uVar55,uVar82);
                    if (iVar29 == 0) {
                      if (local_ac8.Elements._8_4_ != local_ac8.Elements._52_4_) {
                        FVar43 = (ForElementType<FSetElementId>)&local_ac8.Hash;
                        if (local_ac8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                          FVar43 = local_ac8.Hash.SecondaryData;
                        }
                        for (iVar29 = *(int *)((longlong)FVar43 +
                                              (ulonglong)
                                              (local_ac8.HashSize - 1U & (uint)uStack_1228) * 4);
                            iVar29 != -1;
                            iVar29 = *(int *)(local_ac8.Elements._0_8_ + 4 + (longlong)iVar29 * 0xc)
                            ) {
                          if (*(uint *)(local_ac8.Elements._0_8_ + (longlong)iVar29 * 0xc) ==
                              (uint)uStack_1228) {
                            local_1878[0] = (undefined4)local_1220;
                            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                            Emplace<int_const_&>(&local_ac8,&local_16b8,(bool *)local_1878);
                            if (local_1888 == '\0') {
                              if (((local_1870.Data <= (FScriptContainerElement *)local_1878) &&
                                  ((FScriptContainerElement *)local_1878 <
                                   local_1870.Data + (longlong)local_1868._4_4_ * 4)) &&
                                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                     (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar23)) {
                                pcVar12 = (code *)swi(3);
                                uVar24 = (*pcVar12)();
                                return (bool)uVar24;
                              }
                              iVar29 = (int)local_1868;
                              if ((int)local_1868 == local_1868._4_4_) {
                                iVar29 = Core::Private::
                                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                   (0x404,&local_1870,
                                                    (int *)((longlong)&local_1868 + 4));
                              }
                              local_1868 = CONCAT44(local_1868._4_4_,iVar29 + 1);
                              *(undefined4 *)(local_1870.Data + (longlong)iVar29 * 4) =
                                   local_1878[0];
                            }
                            break;
                          }
                        }
                      }
                      if (local_ac8.Elements._8_4_ != local_ac8.Elements._52_4_) {
                        FVar43 = (ForElementType<FSetElementId>)&local_ac8.Hash;
                        if (local_ac8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                          FVar43 = local_ac8.Hash.SecondaryData;
                        }
                        for (iVar29 = *(int *)((longlong)FVar43 +
                                              (ulonglong)
                                              (local_ac8.HashSize - 1U & uStack_1228._4_4_) * 4);
                            iVar29 != -1;
                            iVar29 = *(int *)(local_ac8.Elements._0_8_ + 4 + (longlong)iVar29 * 0xc)
                            ) {
                          if (*(uint *)(local_ac8.Elements._0_8_ + (longlong)iVar29 * 0xc) ==
                              uStack_1228._4_4_) {
                            local_1878[0] = local_1220._4_4_;
                            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                            Emplace<int_const_&>(&local_ac8,&local_16b8,(bool *)local_1878);
                            if (local_1888 == '\0') {
                              if (((local_1870.Data <= (FScriptContainerElement *)local_1878) &&
                                  ((FScriptContainerElement *)local_1878 <
                                   local_1870.Data + (longlong)local_1868._4_4_ * 4)) &&
                                 (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                     (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar23)) {
                                pcVar12 = (code *)swi(3);
                                uVar24 = (*pcVar12)();
                                return (bool)uVar24;
                              }
                              iVar29 = (int)local_1868;
                              if ((int)local_1868 == local_1868._4_4_) {
                                iVar29 = Core::Private::
                                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                                   (0x404,&local_1870,
                                                    (int *)((longlong)&local_1868 + 4));
                              }
                              local_1868 = CONCAT44(local_1868._4_4_,iVar29 + 1);
                              *(undefined4 *)(local_1870.Data + (longlong)iVar29 * 4) =
                                   local_1878[0];
                            }
                            break;
                          }
                        }
                      }
                    }
                  }
                }
LAB_1435834eb:
                uVar56 = (ulonglong)(uVar62 + 1);
                uVar35 = uVar35 + 4;
              } while ((int)(uVar62 + 1) < (int)local_1868);
            }
            local_ac8.HashSize = 0;
            if (local_ac8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_ac8.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_ac8.Elements);
            if (local_1870.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1870.Data);
            }
            local_1880 = uVar45 + 1;
            local_1858 = ppFVar64 + 1;
            piVar37 = piVar37 + 4;
            param_1 = local_17a0;
            this = local_17f0;
            param_2 = local_17a8;
          } while ((int)local_1880 < local_1884);
        }
        lVar63 = 2;
        cVar22 = (**(code **)(this->_padding_ + 8))(this);
        if (cVar22 == '\0') {
          local_17e0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_17e0.ArrayNum = 0;
          local_17e0.ArrayMax = 0;
          local_17d0 = (uint *)0x0;
          local_17c8 = 0;
          local_228._0_8_ = 0;
          local_228._8_8_ = 0;
          local_208 = 0;
          local_200[0] = 0;
          local_200[1] = 0x80;
          local_200[2] = 0xffffffff;
          local_200[3] = 0;
          local_1e8 = (ForElementType<FSetElementId>)0x0;
          local_1e0 = 0;
          local_1d8._0_8_ = 0;
          local_1d8._8_8_ = 0;
          local_1d8._32_8_ = 0;
          local_1d8._40_4_ = 0;
          local_1d8._44_4_ = 0x80;
          local_1d8._48_4_ = 0xffffffff;
          local_1d8._52_4_ = 0;
          local_198 = (void *)0x0;
          local_190 = 0;
          local_1788.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_1788.ArrayNum = 0;
          local_1788.ArrayMax = 0;
          local_1778 = 0.0;
          local_1770 = 0;
          local_16a8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_16a8.ArrayNum = 0;
          local_16a8.ArrayMax = 0;
          if (1 < local_1884) {
            local_16b4 = -1;
            TArray<int,TSizedDefaultAllocator<32>_>::Init
                      (&local_16a8,&local_16b4,
                       (local_1848[0]->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (local_1848[0]->TriangleRefCounts).RefCounts.CurBlockUsed);
          }
          <Var20 = local_187b[0];
          dVar76 = __real_4000000000000000;
          local_1838 = 0;
          if (0 < local_1884) {
            do {
              if (local_1838 == 0) {
                param_1 = param_2;
              }
              lVar63 = (longlong)(1 - local_1838) * 0xc0;
              this_01 = (TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *)(local_3a8 + lVar63);
              if (((&iStack_2ec)[(longlong)(1 - local_1838) * 0x30] < 0) ||
                 (uVar33 = FDynamicMesh3::GetChangeStamp
                                     (*(FDynamicMesh3 **)(local_3a8 + lVar63 + 8)),
                 *(ulong64 *)(local_3a8 + lVar63 + 0x10) != uVar33)) {
                TMeshAABBTree3<UE::Geometry::FDynamicMesh3>::BuildTopDown(this_01,false);
                uVar33 = FDynamicMesh3::GetChangeStamp(*(FDynamicMesh3 **)(local_3a8 + lVar63 + 8));
                *(ulong64 *)(local_3a8 + lVar63 + 0x10) = uVar33;
              }
              local_1388.FWNBeta = dVar76;
              local_1388.FastWindingCache.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1388.FastWindingCache.ArrayNum = 0;
              local_1388.FastWindingCache.ArrayMax = 0;
              local_1388.FastWindingCacheOffset = 0;
              local_1388.FastWindingCacheMeshChangeStamp = 0;
              local_1388.FWNApproxOrder = 2;
              local_1388.Tree = this_01;
              if (param_1->bRequiresWinding != false) {
                TFastWindingTree<UE::Geometry::FDynamicMesh3>::Build(&local_1388,true);
              }
              local_1288 = this_01;
              local_1280 = &local_1388;
              if (param_1->bRequiresWinding == false) {
                local_1280 = (TFastWindingTree<UE::Geometry::FDynamicMesh3> *)0x0;
              }
              pFVar61 = local_1848[local_1838];
              iVar29 = (pFVar61->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                       (pFVar61->TriangleRefCounts).RefCounts.CurBlockUsed;
              TArray<bool,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                        (&local_1788 + local_1838,iVar29,Default);
              EVar6 = this->Operation;
              if ((EVar6 == Difference) || ((EVar6 - TrimInside & 0xfffffffd) == 0)) {
                local_1850 = 0;
              }
              else {
                local_1850 = 1;
              }
              local_187c = 1;
              if ((((EVar6 - Intersect & 0xfffffff9) == 0) && (EVar6 != 8)) ||
                 ((EVar6 == Difference && (local_1838 == 1)))) {
                local_187c = 0;
              }
              local_15e0.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_15e0.Normals.ArrayNum = 0;
              local_15e0.Normals.ArrayMax = 0;
              local_15e0.Mesh = *(FDynamicMesh3 **)(local_3a8 + lVar63 + 8);
              FMeshNormals::Compute_Triangle(&local_15e0);
              local_1438 = this->SnapTolerance;
              local_11a0 = (undefined ***)0x0;
              local_11b8 = &Core::Private::Function::
                            TFunction_OwnedObject<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::`62'::<lambda_2>,0,0>
                            ::_vftable_;
              local_11b0 = &local_15e0;
              local_11c8[0] =
                   Core::Private::Function::
                   TFunctionRefCaller<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l62::<lambda_2>,bool,int>
                   ::Call;
              local_888[0] = local_1438;
              TFunction<bool___cdecl(int)>::TFunction<bool___cdecl(int)>
                        ((TFunction<bool___cdecl(int)> *)local_878,
                         (TFunction<bool___cdecl(int)> *)local_11c8);
              local_848 = 0;
              if (local_11c8[0] != (code *)0x0) {
                pppuVar39 = &local_11b8;
                if (local_11a0 != (undefined ***)0x0) {
                  pppuVar39 = local_11a0;
                }
                (*(code *)(*pppuVar39)[2])();
              }
              local_1128 = local_888;
              local_1278.DataPtr = (void **)0x0;
              local_1120 = &local_15e0;
              local_1278.ArrayNum = 0;
              local_1118 = &local_1438;
              local_1110 = &local_1838;
              local_1108 = &local_1788;
              local_1100 = &local_1850;
              local_10f8 = &local_1884;
              local_10f0 = &local_16a8;
              local_10e0 = &local_1288;
              local_10d8 = &local_187c;
              local_1268 = Core::Private::Function::
                           TFunctionRefCaller<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l62::<lambda_3>,void,int>
                           ::Call;
              local_1260 = &local_1138;
              local_1138 = pFVar61;
              local_1130 = this_01;
              local_10e8 = param_1;
              ParallelForImpl::
              ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                        (L"ParallelFor Task",iVar29,1,(TFunctionRef<void___cdecl(int)> *)&local_1268
                         ,<Var20,None,&local_1278);
              if (local_878._0_8_ != 0) {
                plVar41 = (longlong *)(local_878 + 0x10);
                if ((longlong *)local_878._40_8_ != (longlong *)0x0) {
                  plVar41 = (longlong *)local_878._40_8_;
                }
                (**(code **)(*plVar41 + 0x10))();
              }
              if (local_15e0.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_15e0.Normals.AllocatorInstance.Data);
              }
              if (local_1388.FastWindingCache.AllocatorInstance.Data !=
                  (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1388.FastWindingCache.AllocatorInstance.Data);
              }
              local_1838 = local_1838 + 1;
              param_1 = local_17a0;
              param_2 = local_17a8;
            } while (local_1838 < local_1884);
          }
          pFVar61 = local_1848[0];
          uVar56 = 0;
          uVar45 = 0;
          if (1 < local_1884) {
            pFVar47 = &local_1848[0]->TriangleRefCounts;
            FRefCountVector::IndexIterator::IndexIterator
                      ((IndexIterator *)(local_14c8 + 8),pFVar47,0,
                       (pFVar47->RefCounts).CurBlock * 0x200 +
                       (local_1848[0]->TriangleRefCounts).RefCounts.CurBlockUsed);
            iVar29 = (pFVar47->RefCounts).CurBlock * 0x200 +
                     (pFVar61->TriangleRefCounts).RefCounts.CurBlockUsed;
            FRefCountVector::IndexIterator::IndexIterator(&local_1258,pFVar47,iVar29,iVar29);
            if ((int)local_14c8._16_8_ != local_1258._8_4_) {
              do {
                uVar62 = (uint)local_14c8._16_8_;
                uVar55 = uVar45;
                if ((int)uVar62 < local_16a8.ArrayNum) {
                  uVar55 = ~uVar62 >> 0x1f;
                }
                if ((uVar55 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar12 = (code *)swi(3);
                  uVar24 = (*pcVar12)();
                  return (bool)uVar24;
                }
                uVar55 = *(uint *)(local_16a8.AllocatorInstance.Data + (longlong)(int)uVar62 * 4);
                if (-1 < (int)uVar55) {
                  uVar27 = uVar45;
                  if ((int)uVar55 < (int)local_1770) {
                    uVar27 = ~uVar55 >> 0x1f;
                  }
                  if ((uVar27 == 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar12 = (code *)swi(3);
                    uVar24 = (*pcVar12)();
                    return (bool)uVar24;
                  }
                  if (*(char *)((longlong)(int)uVar55 + (longlong)local_1778) != '\0') {
                    uVar55 = uVar45;
                    if ((int)uVar62 < local_1788.ArrayNum) {
                      uVar55 = ~uVar62 >> 0x1f;
                    }
                    if ((uVar55 == 0) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar23)) {
                      pcVar12 = (code *)swi(3);
                      uVar24 = (*pcVar12)();
                      return (bool)uVar24;
                    }
                    local_1788.AllocatorInstance.Data[(int)uVar62] = (FScriptContainerElement)0x0;
                  }
                }
                FRefCountVector::BaseIterator::goto_next((BaseIterator *)(local_14c8 + 8));
              } while ((int)local_14c8._16_8_ != local_1258._8_4_);
            }
          }
          local_1880 = 0;
          if (0 < local_1884) {
            this_02 = (TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)local_228;
            ppFVar64 = local_1848;
            uVar35 = uVar56;
            do {
              pFVar61 = *ppFVar64;
              FRefCountVector::IndexIterator::IndexIterator
                        ((IndexIterator *)&local_14a0,&pFVar61->EdgeRefCounts,0,
                         (pFVar61->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                         (pFVar61->EdgeRefCounts).RefCounts.CurBlockUsed);
              iVar29 = (pFVar61->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                       (pFVar61->EdgeRefCounts).RefCounts.CurBlockUsed;
              FRefCountVector::IndexIterator::IndexIterator
                        (&local_1350,&pFVar61->EdgeRefCounts,iVar29,iVar29);
              uVar45 = (uint)uVar35;
              if (local_14a0.Index != local_1350._8_4_) {
                do {
                  local_182c = local_14a0.Index;
                  uVar35 = (ulonglong)(local_14a0.Index & 0x1ff);
                  lVar63 = *(longlong *)
                            ((pFVar61->Edges).Blocks.AllocatorInstance.Data +
                            ((local_14a0._8_8_ & 0xffffffff) >> 9) * 8);
                  puVar3 = (undefined8 *)(lVar63 + uVar35 * 0x10);
                  uVar10 = *(undefined8 *)(lVar63 + 8 + uVar35 * 0x10);
                  local_14b0 = *puVar3;
                  uStack_14a8 = puVar3[1];
                  if ((int)((ulonglong)uVar10 >> 0x20) != -1) {
                    uVar55 = (uint)uVar10;
                    uVar45 = 0;
                    if ((int)uVar55 < *(int *)((longlong)&local_1788.ArrayNum + uVar56)) {
                      uVar45 = ~uVar55 >> 0x1f;
                    }
                    if ((uVar45 == 0) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar23)) {
                      pcVar12 = (code *)swi(3);
                      uVar24 = (*pcVar12)();
                      return (bool)uVar24;
                    }
                    lVar46 = (longlong)(int)uStack_14a8._4_4_;
                    lVar63 = *(longlong *)((longlong)&local_1788.AllocatorInstance.Data + uVar56);
                    uVar45 = 0;
                    if ((int)uStack_14a8._4_4_ < *(int *)((longlong)&local_1788.ArrayNum + uVar56))
                    {
                      uVar45 = ~uStack_14a8._4_4_ >> 0x1f;
                    }
                    if ((uVar45 == 0) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar23)) {
                      pcVar12 = (code *)swi(3);
                      uVar24 = (*pcVar12)();
                      return (bool)uVar24;
                    }
                    if (*(char *)((int)uVar55 + lVar63) !=
                        *(char *)(lVar46 + *(longlong *)
                                            ((longlong)&local_1788.AllocatorInstance.Data + uVar56))
                       ) {
                      pFVar48 = (ForAnyElementType *)
                                ((longlong)&local_17e0.AllocatorInstance.Data + uVar56);
                      if (((pFVar48->Data <= (FScriptContainerElement *)&local_182c) &&
                          ((FScriptContainerElement *)&local_182c <
                           pFVar48->Data +
                           (longlong)*(int *)((longlong)&local_17e0.ArrayMax + uVar56) * 4)) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar23)) {
                        pcVar12 = (code *)swi(3);
                        uVar24 = (*pcVar12)();
                        return (bool)uVar24;
                      }
                      iVar29 = *(int *)((longlong)&local_17e0.ArrayNum + uVar56);
                      piVar37 = (int *)((longlong)&local_17e0.ArrayMax + uVar56);
                      if (iVar29 == *piVar37) {
                        iVar29 = Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,pFVar48,piVar37);
                      }
                      *(int *)((longlong)&local_17e0.ArrayNum + uVar56) = iVar29 + 1;
                      *(uint *)(pFVar48->Data + (longlong)iVar29 * 4) = local_182c;
                      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                                (this_02,&local_14e0,(bool *)&local_14b0);
                      TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                                (this_02,&local_14dc,(bool *)((longlong)&local_14b0 + 4));
                    }
                  }
                  FRefCountVector::BaseIterator::goto_next(&local_14a0);
                  uVar45 = local_1880;
                } while (local_14a0.Index != local_1350._8_4_);
              }
              local_1880 = uVar45 + 1;
              uVar35 = (ulonglong)local_1880;
              ppFVar64 = ppFVar64 + 1;
              uVar56 = uVar56 + 0x10;
              this_02 = this_02 + 1;
            } while ((int)local_1880 < local_1884);
          }
          if ((local_17f0->Operation == NewGroupInside) ||
             (local_17f0->Operation == NewGroupOutside)) {
            bVar23 = true;
            local_1818.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1818.ArrayNum = 0;
            local_1818.ArrayMax = 0;
            if ((local_1884 != 1) &&
               (bVar25 = Assert::Private::ExecCheckImplInternal
                                   (&bGEnsureHasExecuted<_3779031055328083454>,false,
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshBoolean.cpp"
                                    ,0x202,"NumMeshesToProcess == 1"), bVar25)) {
              pcVar12 = (code *)swi(3);
              uVar24 = (*pcVar12)();
              return (bool)uVar24;
            }
            iVar29 = local_1848[0]->GroupIDCounter;
            local_1848[0]->GroupIDCounter = iVar29 + 1;
          }
          else {
            bVar23 = false;
            iVar29 = -1;
            local_1818.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1818.ArrayNum = 0;
            local_1818.ArrayMax = 0;
          }
          local_1880 = 0;
          if (0 < local_1884) {
            local_1858 = local_1848;
            piVar37 = &local_1788.ArrayNum;
            iVar31 = local_1884;
            do {
              iVar59 = *piVar37;
              pFVar61 = *local_1858;
              local_1860[0] = 0;
              if (0 < iVar59) {
                do {
                  uVar45 = local_1860[0];
                  bVar25 = FRefCountVector::IsValid(&pFVar61->TriangleRefCounts,local_1860[0]);
                  if (bVar25) {
                    uVar55 = 0;
                    if ((int)uVar45 < iVar59) {
                      uVar55 = ~uVar45 >> 0x1f;
                    }
                    if ((uVar55 == 0) &&
                       (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar25)) {
                      pcVar12 = (code *)swi(3);
                      uVar24 = (*pcVar12)();
                      return (bool)uVar24;
                    }
                    if ((((TArray<bool,TSizedDefaultAllocator<32>_> *)(piVar37 + -2))->
                        AllocatorInstance).Data[(int)uVar45] == (FScriptContainerElement)0x0) {
                      if (bVar23) {
                        if ((pFVar61->TriangleGroups).bIsSet != false) {
                          *(int *)(*(longlong *)
                                    ((pFVar61->TriangleGroups).TypedValue.Blocks.AllocatorInstance.
                                     Data + (ulonglong)(local_1860[0] >> 9) * 8) +
                                  (ulonglong)(local_1860[0] & 0x1ff) * 4) = iVar29;
                          iVar31 = iVar29 + 1;
                          if (iVar29 + 1 < pFVar61->GroupIDCounter) {
                            iVar31 = pFVar61->GroupIDCounter;
                          }
                          pFVar61->GroupIDCounter = iVar31;
                        }
                        if (((local_1818.AllocatorInstance.Data <=
                              (FScriptContainerElement *)local_1860) &&
                            ((FScriptContainerElement *)local_1860 <
                             local_1818.AllocatorInstance.Data + (longlong)local_1818.ArrayMax * 4))
                           && (bVar25 = ::FDebug::CheckVerifyFailedImpl2
                                                  (
                                                  "Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                  ), bVar25)) {
                          pcVar12 = (code *)swi(3);
                          uVar24 = (*pcVar12)();
                          return (bool)uVar24;
                        }
                        if (local_1818.ArrayNum == local_1818.ArrayMax) {
                          local_1818.ArrayNum =
                               Core::Private::
                               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                         (0x404,&local_1818.AllocatorInstance,&local_1818.ArrayMax);
                        }
                        lVar63 = (longlong)local_1818.ArrayNum;
                        local_1818.ArrayNum = local_1818.ArrayNum + 1;
                        *(uint *)(local_1818.AllocatorInstance.Data + lVar63 * 4) = local_1860[0];
                      }
                      else {
                        FDynamicMesh3::RemoveTriangle(pFVar61,local_1860[0],true,false);
                      }
                    }
                  }
                  iVar59 = *piVar37;
                  local_1860[0] = local_1860[0] + 1;
                  iVar31 = local_1884;
                } while ((int)local_1860[0] < iVar59);
              }
              local_1880 = local_1880 + 1;
              local_1858 = local_1858 + 1;
              piVar37 = piVar37 + 4;
            } while ((int)local_1880 < iVar31);
          }
          if (bVar23) {
            local_1638.Mesh = local_1848[0];
            local_1638.Components.Array.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_1638.Components.Array.ArrayNum = 0;
            local_1638.Components.Array.ArrayMax = 0;
            local_ee8._0_8_ = 0;
            local_ee8._40_8_ = 0;
            FMeshConnectedComponents::FindConnectedTriangles(&local_1638,&local_1818,&local_ee8);
            uVar45 = 1;
            if (1 < local_1638.Components.Array.ArrayNum) {
              local_1858 = (FDynamicMesh3 **)&DAT_00000008;
              do {
                ppFVar64 = local_1858;
                iVar31 = local_1848[0]->GroupIDCounter;
                iVar29 = iVar31 + 1;
                local_1848[0]->GroupIDCounter = iVar29;
                uVar55 = 0;
                if ((int)uVar45 < local_1638.Components.Array.ArrayNum) {
                  uVar55 = ~uVar45 >> 0x1f;
                }
                if ((uVar55 == 0) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar23)) {
                  pcVar12 = (code *)swi(3);
                  uVar24 = (*pcVar12)();
                  return (bool)uVar24;
                }
                puVar3 = *(undefined8 **)
                          (local_1638.Components.Array.AllocatorInstance.Data + (longlong)ppFVar64);
                puVar49 = (uint *)*puVar3;
                iVar59 = *(int *)(puVar3 + 1);
                puVar40 = puVar49 + iVar59;
                while( true ) {
                  if (*(int *)(puVar3 + 1) != iVar59) {
                    local_184f = 0;
                    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                              (&local_184f);
                  }
                  if (puVar49 == puVar40) break;
                  if ((local_1848[0]->TriangleGroups).bIsSet != false) {
                    *(int *)(*(longlong *)
                              ((local_1848[0]->TriangleGroups).TypedValue.Blocks.AllocatorInstance.
                               Data + (ulonglong)(*puVar49 >> 9) * 8) +
                            (ulonglong)(*puVar49 & 0x1ff) * 4) = iVar31;
                    iVar30 = iVar29;
                    if (iVar29 < local_1848[0]->GroupIDCounter) {
                      iVar30 = local_1848[0]->GroupIDCounter;
                    }
                    local_1848[0]->GroupIDCounter = iVar30;
                  }
                  puVar49 = puVar49 + 1;
                }
                uVar45 = uVar45 + 1;
                local_1858 = local_1858 + 1;
              } while ((int)uVar45 < local_1638.Components.Array.ArrayNum);
            }
            TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
            ::
            ~TIndirectArray<UE::Geometry::FMeshConnectedComponents::FComponent,TSizedDefaultAllocator<32>_>
                      (&local_1638.Components);
          }
          if (local_1818.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1818.AllocatorInstance.Data);
          }
          if (local_16a8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_16a8.AllocatorInstance.Data);
          }
          lVar46 = 2;
          pdVar57 = &local_1768;
          lVar63 = 2;
          do {
            pdVar2 = pdVar57 + -2;
            pdVar57 = pdVar57 + -2;
            lVar63 = lVar63 + -1;
            if ((void *)*pdVar2 != (void *)0x0) {
              FMemory::Free((void *)*pdVar2);
            }
            pFVar51 = local_17f0;
          } while (lVar63 != 0);
          cVar22 = (**(code **)(local_17f0->_padding_ + 8))(local_17f0);
          dVar75 = __real_3fd0000000000000;
          dVar76 = __real_3e45798ee2308c3a;
          if (cVar22 == '\0') {
            local_a18.Elements._0_8_ = 0;
            local_a18.Elements._8_8_ = 0;
            local_a18.Elements._32_8_ = 0;
            local_a18.Elements._40_4_ = 0;
            local_a18.Elements._44_4_ = 0x80;
            local_a18.Elements._48_4_ = 0xffffffff;
            local_a18.Elements._52_4_ = 0;
            local_a18.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
            local_a18.HashSize = 0;
            if (local_1884 == 2) {
              dVar67 = pFVar51->SnapTolerance;
              uVar73 = (undefined4)__real_3f90000000000000;
              uVar74 = (undefined4)((ulonglong)__real_3f90000000000000 >> 0x20);
              local_188._0_8_ = 0;
              local_188._8_8_ = 0;
              local_168 = 0.0;
              local_160[0] = 0;
              local_160[1] = 0x80;
              local_160[2] = 0xffffffff;
              local_160[3] = 0;
              local_148 = (undefined1 *)0x0;
              local_140[0] = 0;
              local_138._0_8_ = 0;
              local_138._8_8_ = 0;
              local_138._32_8_ = 0;
              local_138._40_4_ = 0;
              local_138._44_4_ = 0x80;
              local_138._48_4_ = 0xffffffff;
              local_138._52_4_ = 0;
              local_f8 = (void *)0x0;
              local_f0 = 0;
              dVar67 = dVar67 * dVar67;
              local_1880 = 0;
              local_17e8 = 0;
              local_1858 = (FDynamicMesh3 **)0x0;
              do {
                lVar63 = local_17e8;
                lVar46 = 1 - local_17e8;
                local_1618 = lVar46;
                pFVar61 = local_1848[lVar46];
                local_1448 = pFVar61;
                pTVar32 = FDynamicMesh3::GetBounds(pFVar61,&local_db8,true);
                dVar77 = (pTVar32->Max).field0_0x0._s_0.Z - (pTVar32->Min).field0_0x0._s_0.Z;
                dVar16 = (pTVar32->Max).field0_0x0._s_0.Y - (pTVar32->Min).field0_0x0._s_0.Y;
                dVar68 = (pTVar32->Max).field0_0x0._s_0.X - (pTVar32->Min).field0_0x0._s_0.X;
                if (dVar77 <= 0.0) {
                  dVar77 = 0.0;
                }
                local_9c8._0_8_ = 0;
                local_9c8._8_8_ = 0;
                if (dVar16 <= 0.0) {
                  dVar16 = 0.0;
                }
                local_9c8._32_8_ = 0;
                local_9c8._40_4_ = 0;
                if (dVar68 <= 0.0) {
                  dVar68 = 0.0;
                }
                local_9c8._44_4_ = 0x80;
                local_9c8._48_4_ = 0xffffffff;
                local_9c8._52_4_ = 0;
                if (dVar77 <= dVar16) {
                  dVar77 = dVar16;
                }
                local_988 = (ForElementType<FSetElementId>)0x0;
                local_980 = 0;
                local_978.State = (atomic<unsigned_char>)0x0;
                if (dVar77 <= dVar68) {
                  dVar77 = dVar68;
                }
                local_970.CellSize = dVar77 * (double)CONCAT44(uVar74,uVar73);
                if (local_970.CellSize <= dVar76) {
                  local_970.CellSize = dVar76;
                }
                if ((local_970.CellSize < dVar76) &&
                   (bVar23 = Assert::Private::ExecCheckImplInternal
                                       (&bGEnsureHasExecuted<_2954325157570674611>,false,
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Util\\GridIndexing3.h"
                                        ,0x4d,"CellSize >= TMathUtil<RealType>::ZeroTolerance"),
                   bVar23)) {
                  pcVar12 = (code *)swi(3);
                  uVar24 = (*pcVar12)();
                  return (bool)uVar24;
                }
                local_1588._padding_._4_4_ = 1;
                lVar50 = lVar46 * 0x50;
                local_968 = -1;
                local_1588._padding_._0_4_ = 0;
                plVar41 = (longlong *)(local_228 + lVar50);
                local_1588.Array =
                     (TBitArray<FDefaultBitArrayAllocator> *)(local_228 + lVar50 + 0x10);
                local_1588.UnvisitedBitMask = 0xffffffff;
                local_1588.CurrentBitIndex = 0;
                local_1588.BaseBitIndex = 0;
                if (local_200[lVar46 * 0x14] != 0) {
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1588);
                }
                TStack_16e0._padding_ =
                     CONCAT44(local_1588._padding_._4_4_,(undefined4)local_1588._padding_);
                TStack_16e0._16_8_ =
                     CONCAT44(local_1588.CurrentBitIndex,local_1588.UnvisitedBitMask);
                TStack_16e0._24_8_ = CONCAT44(local_1588._28_4_,local_1588.BaseBitIndex);
                TStack_16e0.Array = local_1588.Array;
                local_16c0._0_4_ = *(int *)(local_228 + lVar50 + 8) - local_200[lVar46 * 0x14 + 3];
                local_1420 = local_1588.Array;
                iStack_1408 = *(int *)(local_228 + lVar50 + 8) - local_200[lVar46 * 0x14 + 3];
                uStack_1404 = local_16c0._4_4_;
                local_16e8 = plVar41;
                local_1430._0_8_ = plVar41;
                unique0x10009484 = TStack_16e0._padding_;
                uStack_1418 = TStack_16e0._16_8_;
                local_1410 = TStack_16e0._24_8_;
                pTVar34 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                          TConstSetBitIterator<FDefaultBitArrayAllocator>
                                    (&local_e58,
                                     (TBitArray<FDefaultBitArrayAllocator> *)
                                     (local_228 + lVar50 + 0x10),local_200[lVar46 * 0x14]);
                local_16e8 = plVar41;
                TStack_16e0._padding_ = pTVar34->_padding_;
                TStack_16e0.Array = pTVar34->Array;
                TStack_16e0.UnvisitedBitMask = pTVar34->UnvisitedBitMask;
                TStack_16e0.CurrentBitIndex = pTVar34->CurrentBitIndex;
                TStack_16e0._24_8_ = *(undefined8 *)&pTVar34->BaseBitIndex;
                local_16c0._0_4_ = *(int *)(local_228 + lVar50 + 8) - local_200[lVar46 * 0x14 + 3];
                local_1028.InitialNum =
                     *(int *)(local_228 + lVar50 + 8) - local_200[lVar46 * 0x14 + 3];
                local_1028._44_4_ = local_16c0._4_4_;
                local_1028._padding_ = (longlong)plVar41;
                local_1028._padding_ = TStack_16e0._padding_;
                local_1028._padding_ = (longlong)TStack_16e0.Array;
                local_1028._padding_ = TStack_16e0._16_8_;
                local_1028._padding_ = TStack_16e0._24_8_;
                bVar23 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                         ::TRangedForIterator::operator!=
                                   ((TRangedForIterator *)local_1430,&local_1028);
                if (bVar23) {
                  local_1340 = &local_1210;
                  local_1338 = &local_16b0;
                  do {
                    local_16b0 = *(uint *)(*(longlong *)local_1430._0_8_ +
                                          (longlong)uStack_1418._4_4_ * 0xc);
                    lVar50 = *(longlong *)
                              ((pFVar61->Vertices).Blocks.AllocatorInstance.Data +
                              (ulonglong)(local_16b0 >> 9) * 8);
                    pdVar57 = (double *)(lVar50 + (ulonglong)(local_16b0 & 0x1ff) * 0x18);
                    local_10b8._s_0.X = *pdVar57;
                    local_10b8._s_0.Y = pdVar57[1];
                    local_10b8._s_0.Z =
                         *(double *)(lVar50 + 0x10 + (ulonglong)(local_16b0 & 0x1ff) * 0x18);
                    TWrapAroundGridIndexer3<double>::ToGrid
                              (&local_970,&local_1210,(TVector<double> *)&local_10b8._s_0);
                    TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                              ((TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                                *)local_9c8,
                               (TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> *)
                               local_14c8,(bool *)&local_1340);
                    uStack_1418 = CONCAT44(uStack_1418._4_4_,(uint)uStack_1418 & ~uStack_1424);
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                              ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1430 + 8));
                    bVar23 = TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                             ::TRangedForIterator::operator!=
                                       ((TRangedForIterator *)local_1430,&local_1028);
                  } while (bVar23);
                }
                FSparseDynamicOctree3::FSparseDynamicOctree3((FSparseDynamicOctree3 *)local_838);
                local_838._0_8_ = dVar75;
                local_838._16_4_ = 7;
                local_1470 = pFVar61;
                local_1478 = (FSparseDynamicOctree3 *)local_838;
                local_1468 = pFVar61;
                pFVar52 = (&local_17e0)[lVar46].AllocatorInstance.Data;
                iVar29 = (&local_17e0)[lVar46].ArrayNum;
                local_13a0 = (FSparseDynamicOctree3 *)local_838;
                local_1398 = pFVar61;
                local_1390 = pFVar61;
                pFVar7 = pFVar52 + (longlong)iVar29 * 4;
                while( true ) {
                  if ((&local_17e0)[lVar46].ArrayNum != iVar29) {
                    local_184e = 0;
                    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                              (&local_184e);
                  }
                  ppFVar64 = local_1858;
                  if (pFVar52 == pFVar7) break;
                  pTVar32 = `UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l119::
                            <lambda_4>::operator()(&local_1468,&local_d58,*(int *)pFVar52);
                  FSparseDynamicOctree3::InsertObject
                            ((FSparseDynamicOctree3 *)local_838,*(int *)pFVar52,pTVar32);
                  pFVar52 = pFVar52 + 4;
                }
                local_1678 = 0xffffffff;
                local_1798.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
                local_1798.ArrayNum = 0;
                local_1798.ArrayMax = 0;
                lVar46 = lVar63 * 0x50;
                pTStack_1680 = (TBitArray<FDefaultBitArrayAllocator> *)(local_228 + lVar46 + 0x10);
                local_1688 = 0;
                pTVar65 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                           *)(local_188 + (longlong)local_1858);
                pTVar54 = (TBitArray<FDefaultBitArrayAllocator> *)(local_228 + lVar46);
                local_1440 = pTVar65;
                iVar29 = local_200[lVar63 * 0x14];
                local_1690 = pTVar54;
                uStack_1684 = 1;
                iStack_1674 = 0;
                iStack_1670 = 0;
                if (iVar29 != 0) {
                  pTVar60 = pTStack_1680;
                  if ((TBitArray<FDefaultBitArrayAllocator> *)(&local_208)[lVar63 * 10] !=
                      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                    pTVar60 = (TBitArray<FDefaultBitArrayAllocator> *)(&local_208)[lVar63 * 10];
                  }
                  uVar45 = *(uint *)(pTVar60->AllocatorInstance).InlineData;
                  iStack_1670 = 0;
                  local_1688 = 0;
                  while (uVar45 == 0) {
                    iStack_1670 = iStack_1670 + 0x20;
                    lVar50 = (longlong)local_1688;
                    local_1688 = local_1688 + 1;
                    if ((int)(iVar29 + -1 + (iVar29 + -1 >> 0x1f & 0x1fU)) >> 5 < local_1688)
                    goto LAB_143584a9d;
                    uVar45 = *(uint *)((pTVar60->AllocatorInstance).InlineData + lVar50 * 4 + 4);
                    local_1678 = 0xffffffff;
                  }
                  uStack_1684 = -uVar45 & uVar45;
                  uVar56 = (ulonglong)(-uVar45 & uVar45) * 2 + 1;
                  lVar50 = 0x3f;
                  if (uVar56 != 0) {
                    for (; uVar56 >> lVar50 == 0; lVar50 = lVar50 + -1) {
                    }
                  }
                  iStack_1674 = iStack_1670 + -1 + (int)lVar50;
                  local_14d8 = (int)lVar50;
                  if (iVar29 < iStack_1674) {
LAB_143584a9d:
                    iStack_1674 = iVar29;
                  }
                }
                local_1678 = 0xffffffff;
                iVar31 = local_200[lVar63 * 0x14];
                local_15e8 = *(int *)(local_228 + lVar46 + 8) - local_200[lVar63 * 0x14 + 3];
                bVar38 = (byte)iVar31 & 0x1f;
                local_1610._padding_ = CONCAT44(1 << bVar38,iVar31 >> 5);
                iStack_15f0 = iStack_1670;
                uStack_15ec = uStack_166c;
                local_1610.Array = pTStack_1680;
                local_1610.CurrentBitIndex = iVar31;
                local_1610.UnvisitedBitMask = -1 << bVar38;
                local_1610._24_8_ = CONCAT44(iStack_1674,iVar31) & 0xffffffffffffffe0;
                local_16e8 = (longlong *)pTVar54;
                TStack_16e0._padding_ = CONCAT44(uStack_1684,local_1688);
                TStack_16e0.Array = pTStack_1680;
                TStack_16e0.UnvisitedBitMask = 0xffffffff;
                TStack_16e0.CurrentBitIndex = iStack_1674;
                TStack_16e0.BaseBitIndex = iStack_1670;
                TStack_16e0._28_4_ = uStack_166c;
                local_16c0 = CONCAT44(uStack_15e4,
                                      *(int *)(local_228 + lVar46 + 8) -
                                      local_200[lVar63 * 0x14 + 3]);
                if (((iVar31 < 0) || (iVar29 < iVar31)) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x7af,L""), bVar23)) {
                  pcVar12 = (code *)swi(3);
                  uVar24 = (*pcVar12)();
                  return (bool)uVar24;
                }
                if (iVar31 != local_200[lVar63 * 0x14]) {
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1610);
                }
                lVar63 = local_1618;
                dVar16 = __real_3ff0000000000000;
                pTVar53 = &local_17e0 + local_1618;
                uStack_1710 = local_1610._padding_;
                pTStack_1708 = local_1610.Array;
                uStack_1700._0_4_ = local_1610.UnvisitedBitMask;
                uStack_1700._4_4_ = local_1610.CurrentBitIndex;
                uVar10 = uStack_1700;
                uStack_16f8 = local_1610._24_8_;
                uStack_1700._4_4_ = local_1610.CurrentBitIndex;
                iVar29 = uStack_1700._4_4_;
                local_1620 = local_1610.Array;
                uStack_1700 = uVar10;
                while( true ) {
                  plVar41 = local_16e8;
                  if ((int)local_16e8[1] - *(int *)((longlong)local_16e8 + 0x34) != (int)local_16c0)
                  {
                    local_184d = 0;
                    `TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_184d);
                  }
                  pFVar51 = local_17f0;
                  if (((TStack_16e0.CurrentBitIndex == iVar29) && (TStack_16e0.Array == local_1620))
                     && ((TBitArray<FDefaultBitArrayAllocator> *)plVar41 == pTVar54)) break;
                  local_1824 = *(uint *)(*plVar41 + (longlong)TStack_16e0.CurrentBitIndex * 0xc);
                  if ((local_17e8 == 1) && (local_188._8_4_ != local_160[3])) {
                    puVar44 = local_150;
                    if (local_148 != (undefined1 *)0x0) {
                      puVar44 = local_148;
                    }
                    for (iVar31 = *(int *)(puVar44 + (ulonglong)(local_140[0] - 1U & local_1824) * 4
                                          ); iVar31 != -1;
                        iVar31 = *(int *)(local_188._0_8_ + 8 + (longlong)iVar31 * 0x10)) {
                      if (*(uint *)(local_188._0_8_ + (longlong)iVar31 * 0x10) == local_1824)
                      goto LAB_143585435;
                    }
                  }
                  lVar46 = *(longlong *)
                            ((local_1848[local_17e8]->Vertices).Blocks.AllocatorInstance.Data +
                            (ulonglong)(local_1824 >> 9) * 8);
                  pdVar57 = (double *)(lVar46 + (ulonglong)(local_1824 & 0x1ff) * 0x18);
                  local_17c0._s_0.X = *pdVar57;
                  local_17c0._s_0.Y = pdVar57[1];
                  local_17c0._s_0.Z =
                       *(double *)(lVar46 + 0x10 + (ulonglong)(local_1824 & 0x1ff) * 0x18);
                  local_1330 = &local_17c0;
                  local_1318 = local_1808;
                  local_1320 = Core::Private::Function::
                               TFunctionRefCaller<`UE::Geometry::TPointHashGrid3<int,double>::FindNearestInRadius'::__l2::<lambda_1>,bool,int_const_&>
                               ::Call;
                  local_1310 = Core::Private::Function::
                               TFunctionRefCaller<`UE::Geometry::FMeshBoolean::ComputeWithCustomInside'[::D]::<lambda_7>,double,int_const_&>
                               ::Call;
                  local_1308 = &local_1330;
                  local_1328 = pFVar61;
                  TPointHashGrid3<int,double>::FindInRadiusHelper<0>
                            ((TPointHashGrid3<int,double> *)local_9c8,
                             (TTuple<int,double> *)local_1300,(TVector<double> *)&local_17c0._s_0,
                             local_17f0->SnapTolerance,
                             (TFunctionRef<double___cdecl(int_const_&)> *)&local_1310,
                             (TFunctionRef<bool___cdecl(int_const_&)> *)&local_1320);
                  local_1828 = (uint)local_1300._0_8_;
                  if (local_1828 == 0xffffffff) {
LAB_143584eda:
                    uVar10 = local_1798._8_8_;
                    local_1170 = pFVar51->SnapTolerance;
                    iVar31 = local_1798.ArrayMax;
                    local_1798._8_8_ = (ulonglong)(uint)local_1798.ArrayMax << 0x20;
                    local_1180 = local_17c0._s_0.X + local_1170;
                    dStack_1178 = local_17c0._s_0.Y + local_1170;
                    local_1198._8_4_ = SUB84(local_17c0._s_0.Y - local_1170,0);
                    local_1198._0_8_ = local_17c0._s_0.X - local_1170;
                    local_1198._12_4_ = (int)((ulonglong)(local_17c0._s_0.Y - local_1170) >> 0x20);
                    local_1198._s_0.Z = local_17c0._s_0.Z - local_1170;
                    local_1170 = local_1170 + local_17c0._s_0.Z;
                    if (((longlong)uVar10 < 0) && (iVar31 != 0)) {
                      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (4,4,0,&local_1798.AllocatorInstance,0,&local_1798.ArrayMax);
                    }
                    FSparseDynamicOctree3::RangeQuery
                              ((FSparseDynamicOctree3 *)local_838,
                               (TAxisAlignedBox3<double> *)&local_1198._s_0,&local_1798);
                    local_1098._s_0.X = local_17c0._s_0.X;
                    local_1098._s_0.Y = local_17c0._s_0.Y;
                    local_1098._s_0.Z = local_17c0._s_0.Z;
                    uVar45 = FindNearestEdge(pFVar51,pFVar61,&local_1798,
                                             (TVector<double> *)&local_1098._s_0);
                    uVar18 = local_17c0._s_0.Z;
                    uVar17 = local_17c0._s_0.Y;
                    uVar10 = local_17c0._s_0.X;
                    if (uVar45 != 0xffffffff) {
                      pFVar7 = (pFVar61->Vertices).Blocks.AllocatorInstance.Data;
                      uVar56 = *(ulonglong *)
                                (*(longlong *)
                                  ((pFVar61->Edges).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar45 >> 9) * 8) + (ulonglong)(uVar45 & 0x1ff) * 0x10
                                );
                      uVar35 = (ulonglong)((uint)uVar56 & 0x1ff);
                      lVar46 = *(longlong *)(pFVar7 + ((uVar56 & 0xffffffff) >> 9) * 8);
                      pdVar57 = (double *)(lVar46 + uVar35 * 0x18);
                      local_ff8 = *pdVar57;
                      dStack_ff0 = pdVar57[1];
                      local_fe8 = *(double *)(lVar46 + 0x10 + uVar35 * 0x18);
                      uVar35 = (ulonglong)((uint)(uVar56 >> 0x20) & 0x1ff);
                      lVar46 = *(longlong *)(pFVar7 + (uVar56 >> 0x29) * 8);
                      local_fd0 = *(double *)(lVar46 + 0x10 + uVar35 * 0x18);
                      pdVar57 = (double *)(lVar46 + uVar35 * 0x18);
                      local_fe0 = *pdVar57;
                      dStack_fd8 = pdVar57[1];
                      if ((dVar67 < (local_17c0._s_0.Y - dStack_ff0) *
                                    (local_17c0._s_0.Y - dStack_ff0) +
                                    (local_17c0._s_0.X - local_ff8) *
                                    (local_17c0._s_0.X - local_ff8) +
                                    (local_17c0._s_0.Z - local_fe8) *
                                    (local_17c0._s_0.Z - local_fe8)) &&
                         (dVar67 < (local_17c0._s_0.Y - dStack_fd8) *
                                   (local_17c0._s_0.Y - dStack_fd8) +
                                   (local_17c0._s_0.X - local_fe0) * (local_17c0._s_0.X - local_fe0)
                                   + (local_17c0._s_0.Z - local_fd0) *
                                     (local_17c0._s_0.Z - local_fd0))) {
                        local_14e8 = 0.0;
                        local_1500._s_0.Y = dStack_fd8 - dStack_ff0;
                        local_1500._s_0.X = local_fe0 - local_ff8;
                        local_1510 = (dStack_fd8 + dStack_ff0) * __real_3fe0000000000000;
                        local_1518 = (local_fe0 + local_ff8) * __real_3fe0000000000000;
                        local_1500._s_0.Z = local_fd0 - local_fe8;
                        local_1508 = (local_fd0 + local_fe8) * __real_3fe0000000000000;
                        local_14e8 = Normalize<double>((TVector<double> *)&local_1500._s_0,0.0);
                        local_14e8 = local_14e8 * __real_3fe0000000000000;
                        dVar77 = ((((double)uVar17 - local_1510) * local_1500._s_0.Y +
                                   ((double)uVar10 - local_1518) * local_1500._s_0.X +
                                  ((double)uVar18 - local_1508) * local_1500._s_0.Z) / local_14e8 +
                                 dVar16) * __real_3fe0000000000000;
                        if (0.0 <= dVar77) {
                          if (dVar16 <= dVar77) {
                            dVar77 = dVar16;
                          }
                        }
                        else {
                          dVar77 = 0.0;
                        }
                        local_15c4 = 0xffffffffffffffff;
                        local_15bc = 0xffffffffffffffff;
                        local_15b4 = 0xffffffffffffffff;
                        uStack_15a4 = 0xffffffff;
                        uStack_15a0 = 0xffffffff;
                        local_159c = 0xffffffffffffffff;
                        local_1594 = 0xffffffff;
                        iVar31 = (**(code **)(pFVar61->_padding_ + 0x30))
                                           (pFVar61,uVar45,local_15c8,SUB84(dVar77,0));
                        if (iVar31 == 0) {
                          local_12d0 = &local_15a8;
                          local_12c8 = &local_1824;
                          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                          ::Emplace<TPairInitializer<int_const_&,int_const_&>_>
                                    (pTVar65,(TPairInitializer<int_const_&,int_const_&> *)
                                             (local_14d4 + 4),(bool *)&local_12d0);
                          sVar26 = _dclass(SUB84(local_17c0._s_0.X,0));
                          if (((sVar26 < 1) &&
                              (sVar26 = _dclass(SUB84(local_17c0._s_0.Y,0)), sVar26 < 1)) &&
                             (sVar26 = _dclass(SUB84(local_17c0._s_0.Z,0)), sVar26 < 1)) {
                            lVar46 = *(longlong *)
                                      ((pFVar61->Vertices).Blocks.AllocatorInstance.Data +
                                      (ulonglong)(local_15a8 >> 9) * 8);
                            pdVar57 = (double *)(lVar46 + (ulonglong)(local_15a8 & 0x1ff) * 0x18);
                            *pdVar57 = local_17c0._s_0.X;
                            pdVar57[1] = local_17c0._s_0.Y;
                            *(double *)(lVar46 + 0x10 + (ulonglong)(local_15a8 & 0x1ff) * 0x18) =
                                 local_17c0._s_0.Z;
                            FDynamicMesh3::FChangeStamp::IncrementIfEnabled
                                      (&pFVar61->ChangeStampShape);
                          }
                          pFVar7 = (pTVar53->AllocatorInstance).Data;
                          if (((pFVar7 <= (FScriptContainerElement *)&local_159c) &&
                              ((FScriptContainerElement *)&local_159c <
                               pFVar7 + (longlong)(&local_17e0)[lVar63].ArrayMax * 4)) &&
                             (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)"
                                                  ,
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x7a5,
                                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                                 ), bVar23)) {
                            pcVar12 = (code *)swi(3);
                            uVar24 = (*pcVar12)();
                            return (bool)uVar24;
                          }
                          iVar31 = (&local_17e0)[lVar63].ArrayNum;
                          if (iVar31 == (&local_17e0)[lVar63].ArrayMax) {
                            iVar31 = Core::Private::
                                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                               (0x404,&pTVar53->AllocatorInstance,
                                                &(&local_17e0)[lVar63].ArrayMax);
                          }
                          uVar73 = (int)local_159c;
                          (&local_17e0)[lVar63].ArrayNum = iVar31 + 1;
                          *(undefined4 *)((pTVar53->AllocatorInstance).Data + (longlong)iVar31 * 4)
                               = uVar73;
                          pTVar32 = `UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l119::
                                    <lambda_4>::operator()(&local_1390,&local_e18,uVar45);
                          FSparseDynamicOctree3::ReinsertObject
                                    (local_13a0,uVar45,pTVar32,0xffffffff);
                          pTVar32 = `UE::Geometry::FMeshBoolean::ComputeWithCustomInside'::__l119::
                                    <lambda_4>::operator()(&local_1468,&local_de8,(int)local_159c);
                          FSparseDynamicOctree3::InsertObject(local_1478,(int)local_159c,pTVar32);
                        }
                        else {
                          bVar23 = Assert::Private::ExecCheckImplInternal
                                             (&bGEnsureHasExecuted<_3779031055328083290>,false,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshBoolean.cpp"
                                              ,0x2a6,
                                              "EMeshResult::Ok == OtherMesh.SplitEdge(OtherEID, SplitInfo, Along)"
                                             );
                          if (bVar23) {
                            pcVar12 = (code *)swi(3);
                            uVar24 = (*pcVar12)();
                            return (bool)uVar24;
                          }
                        }
                      }
                    }
                  }
                  else {
                    if (*(int *)(local_188 + 8 + (longlong)ppFVar64) !=
                        *(int *)((longlong)(local_160 + 3) + (longlong)ppFVar64)) {
                      puVar44 = local_150 + (longlong)ppFVar64;
                      if (*(undefined1 **)((longlong)&local_148 + (longlong)ppFVar64) !=
                          (undefined1 *)0x0) {
                        puVar44 = *(undefined1 **)((longlong)&local_148 + (longlong)ppFVar64);
                      }
                      uVar45 = *(uint *)(puVar44 +
                                        ((ulonglong)
                                         (*(int *)((longlong)local_140 + (longlong)ppFVar64) - 1) &
                                        local_1300._0_8_ & 0xffffffff) * 4);
                      if (uVar45 != 0xffffffff) {
                        do {
                          puVar40 = (uint *)((longlong)(int)uVar45 * 0x10 +
                                            *(longlong *)&pTVar65->Elements);
                          if (*puVar40 == local_1828) goto LAB_143584db1;
                          uVar45 = puVar40[2];
                        } while (uVar45 != 0xffffffff);
                      }
                    }
                    puVar40 = (uint *)0x0;
LAB_143584db1:
                    puVar49 = puVar40 + 1;
                    if (puVar40 == (uint *)0x0) {
                      puVar49 = (uint *)0x0;
                    }
                    if (puVar49 != (uint *)0x0) {
                      uVar45 = *puVar49;
                      lVar46 = *(longlong *)
                                ((pFVar61->Vertices).Blocks.AllocatorInstance.Data +
                                ((local_1300._0_8_ & 0xffffffff) >> 9) * 8);
                      uVar56 = (ulonglong)(uVar45 & 0x1ff);
                      pdVar57 = (double *)(lVar46 + (ulonglong)(local_1828 & 0x1ff) * 0x18);
                      local_f48 = *pdVar57;
                      dStack_f40 = pdVar57[1];
                      local_f38 = *(double *)
                                   (lVar46 + 0x10 + (ulonglong)(local_1828 & 0x1ff) * 0x18);
                      lVar46 = *(longlong *)
                                ((local_1848[local_17e8]->Vertices).Blocks.AllocatorInstance.Data +
                                (ulonglong)(uVar45 >> 9) * 8);
                      pdVar57 = (double *)(lVar46 + uVar56 * 0x18);
                      local_f30 = *pdVar57;
                      dStack_f28 = pdVar57[1];
                      local_f20 = *(double *)(lVar46 + 0x10 + uVar56 * 0x18);
                      dVar77 = local_f48 - local_f30;
                      dVar68 = dStack_f40 - dStack_f28;
                      if ((double)local_1300._8_8_ <
                          dVar68 * dVar68 + dVar77 * dVar77 +
                          (local_f38 - local_f20) * (local_f38 - local_f20)) {
                        local_12f0 = &local_1828;
                        local_12e8 = &local_1824;
                        TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                        ::Emplace<TPairInitializer<int_const_&,int_const_&>_>
                                  (pTVar65,(TPairInitializer<int_const_&,int_const_&> *)local_14d4,
                                   (bool *)&local_12f0);
                        local_1824 = uVar45;
                        lVar46 = *(longlong *)
                                  ((local_1848[local_17e8]->Vertices).Blocks.AllocatorInstance.Data
                                  + (ulonglong)(uVar45 >> 9) * 8);
                        pdVar57 = (double *)(lVar46 + uVar56 * 0x18);
                        local_17c0._s_0.X = *pdVar57;
                        local_17c0._s_0.Y = pdVar57[1];
                        local_17c0._s_0.Z = *(double *)(lVar46 + 0x10 + uVar56 * 0x18);
                      }
                      local_1828 = 0xffffffff;
                      pFVar51 = local_17f0;
                      pTVar54 = local_1690;
                      goto LAB_143584eda;
                    }
                    local_12e0 = &local_1828;
                    local_12d8 = &local_1824;
                    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                    ::Emplace<TPairInitializer<int_const_&,int_const_&>_>
                              (pTVar65,(TPairInitializer<int_const_&,int_const_&> *)(local_1480 + 4)
                               ,(bool *)&local_12e0);
                    if (local_1828 == 0xffffffff) goto LAB_143584eda;
                  }
LAB_143585435:
                  TStack_16e0.UnvisitedBitMask =
                       TStack_16e0.UnvisitedBitMask & ~TStack_16e0._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_16e0);
                }
                iVar29 = *(int *)((longlong)local_160 + (longlong)ppFVar64);
                pTStack_1708 = (TBitArray<FDefaultBitArrayAllocator> *)
                               (local_188 + 0x10 + (longlong)ppFVar64);
                uVar73 = (undefined4)__real_3f90000000000000;
                uVar74 = (undefined4)((ulonglong)__real_3f90000000000000 >> 0x20);
                iVar31 = 0;
                iVar59 = 0;
                uVar45 = 1;
                TStack_13f8.CurrentBitIndex = iVar31;
                if (iVar29 != 0) {
                  pTVar54 = pTStack_1708;
                  if (*(TBitArray<FDefaultBitArrayAllocator> **)
                       ((longlong)&local_168 + (longlong)ppFVar64) !=
                      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                    pTVar54 = *(TBitArray<FDefaultBitArrayAllocator> **)
                               ((longlong)&local_168 + (longlong)ppFVar64);
                  }
                  uVar55 = *(uint *)(pTVar54->AllocatorInstance).InlineData;
                  while (uVar55 == 0) {
                    lVar63 = (longlong)iVar59;
                    iVar31 = iVar31 + 0x20;
                    iVar59 = iVar59 + 1;
                    TStack_13f8.CurrentBitIndex = iVar29;
                    if ((int)(iVar29 + -1 + (iVar29 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar59)
                    goto LAB_1435854f0;
                    uVar55 = *(uint *)((pTVar54->AllocatorInstance).InlineData + lVar63 * 4 + 4);
                  }
                  uVar45 = -uVar55 & uVar55;
                  uVar56 = (ulonglong)uVar45 * 2 + 1;
                  lVar63 = 0x3f;
                  if (uVar56 != 0) {
                    for (; uVar56 >> lVar63 == 0; lVar63 = lVar63 + -1) {
                    }
                  }
                  TStack_13f8.CurrentBitIndex = iVar31 + -1 + (int)lVar63;
                  local_14cc = (int)lVar63;
                  if (iVar29 < TStack_13f8.CurrentBitIndex) {
                    TStack_13f8.CurrentBitIndex = iVar29;
                  }
                }
LAB_1435854f0:
                uVar55 = *(uint *)((longlong)local_160 + (longlong)ppFVar64);
                pTVar54 = (TBitArray<FDefaultBitArrayAllocator> *)
                          (local_188 + 0x10 + (longlong)ppFVar64);
                uStack_16f8 = CONCAT44(local_e1c,(undefined4)uStack_16f8);
                uStack_1710 = CONCAT44(uVar45,(undefined4)uStack_1710);
                uVar62 = uVar55 & 0xffffffe0;
                uStack_1700 = CONCAT44(TStack_13f8.CurrentBitIndex,(uint)uStack_1700);
                local_16f0 = *(int *)(local_188 + 8 + (longlong)local_1858) -
                             *(int *)((longlong)(local_160 + 3) + (longlong)ppFVar64);
                local_1718 = pTVar65;
                uStack_1710 = CONCAT44(uVar45,iVar59);
                uStack_1700 = CONCAT44(TStack_13f8.CurrentBitIndex,0xffffffff);
                uStack_16f8 = CONCAT44(local_e1c,iVar31);
                local_1400 = pTVar65;
                TStack_13f8._padding_ = uStack_1710;
                iVar31 = (int)uVar55 >> 5;
                local_1690 = pTVar54;
                TStack_13f8._24_8_ = uStack_16f8;
                uStack_13d8 = CONCAT44(uStack_16ec,local_16f0);
                TStack_13f8.Array = pTStack_1708;
                TStack_13f8.UnvisitedBitMask = 0xffffffff;
                if ((((int)uVar55 < 0) || (iVar29 < (int)uVar55)) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                        ,0x7af,L""), bVar23)) {
                  pcVar12 = (code *)swi(3);
                  uVar24 = (*pcVar12)();
                  return (bool)uVar24;
                }
                uVar45 = *(uint *)((longlong)local_160 + (longlong)ppFVar64);
                if (uVar55 != uVar45) {
                  pTVar60 = pTVar54;
                  if (*(TBitArray<FDefaultBitArrayAllocator> **)
                       ((longlong)&local_168 + (longlong)ppFVar64) !=
                      (TBitArray<FDefaultBitArrayAllocator> *)0x0) {
                    pTVar60 = *(TBitArray<FDefaultBitArrayAllocator> **)
                               ((longlong)&local_168 + (longlong)ppFVar64);
                  }
                  uVar55 = -1 << ((byte)uVar55 & 0x1f) &
                           *(uint *)((pTVar60->AllocatorInstance).InlineData + (longlong)iVar31 * 4)
                  ;
                  while (uVar55 == 0) {
                    lVar63 = (longlong)iVar31;
                    uVar62 = uVar62 + 0x20;
                    iVar31 = iVar31 + 1;
                    uVar55 = uVar45;
                    if ((int)((uVar45 - 1) + ((int)(uVar45 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar31)
                    goto LAB_143585632;
                    uVar55 = *(uint *)((pTVar60->AllocatorInstance).InlineData + lVar63 * 4 + 4);
                  }
                  uVar56 = (ulonglong)(-uVar55 & uVar55) * 2 + 1;
                  lVar63 = 0x3f;
                  if (uVar56 != 0) {
                    for (; uVar56 >> lVar63 == 0; lVar63 = lVar63 + -1) {
                    }
                  }
                  local_145c = (int)lVar63;
                  uVar55 = (int)lVar63 + -1 + uVar62;
                  if ((int)uVar45 < (int)uVar55) {
                    uVar55 = uVar45;
                  }
                }
LAB_143585632:
                uVar56 = (ulonglong)local_1880;
                while( true ) {
                  pTVar21 = local_1400;
                  if (*(int *)&(local_1400->Elements).field_0x8 -
                      *(int *)&(local_1400->Elements).field_0x34 != (int)uStack_13d8) {
                    local_184c[0] = 0;
                    `TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_184c);
                  }
                  lVar63 = (longlong)TStack_13f8.CurrentBitIndex;
                  if (((TStack_13f8.CurrentBitIndex == uVar55) && (TStack_13f8.Array == pTVar54)) &&
                     (pTVar21 == pTVar65)) break;
                  lVar46 = *(longlong *)&pTVar21->Elements;
                  uVar45 = *(uint *)(lVar46 + lVar63 * 0x10);
                  pFVar11 = local_1848[local_17e8];
                  uVar56 = (ulonglong)(uVar45 & 0x1ff);
                  uVar62 = *(uint *)(lVar46 + 4 + lVar63 * 0x10);
                  lVar50 = *(longlong *)
                            ((pFVar61->Vertices).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar45 >> 9) * 8);
                  local_1068 = *(undefined8 *)(lVar50 + 0x10 + uVar56 * 0x18);
                  puVar3 = (undefined8 *)(lVar50 + uVar56 * 0x18);
                  local_1078 = *puVar3;
                  uVar10 = puVar3[1];
                  uStack_1070 = uVar10;
                  sVar26 = _dclass((int)local_1078);
                  if (((sVar26 < 1) && (sVar26 = _dclass((int)uVar10), sVar26 < 1)) &&
                     (sVar26 = _dclass((int)local_1068), sVar26 < 1)) {
                    puVar3 = (undefined8 *)(lVar50 + uVar56 * 0x18);
                    uVar17 = puVar3[1];
                    uVar35 = (ulonglong)(uVar62 & 0x1ff);
                    uVar10 = *(undefined8 *)(lVar50 + 0x10 + uVar56 * 0x18);
                    lVar50 = *(longlong *)
                              ((pFVar11->Vertices).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar62 >> 9) * 8);
                    puVar4 = (undefined8 *)(lVar50 + uVar35 * 0x18);
                    *puVar4 = *puVar3;
                    puVar4[1] = uVar17;
                    *(undefined8 *)(lVar50 + 0x10 + uVar35 * 0x18) = uVar10;
                    if ((pFVar11->ChangeStampShape).bIsEnabled != false) {
                      this_00 = &(pFVar11->ChangeStampShape).Mutex;
                      LOCK();
                      bVar23 = this_00->State == (atomic<unsigned_char>)0x0;
                      if (bVar23) {
                        this_00->State = (atomic<unsigned_char>)0x1;
                      }
                      UNLOCK();
                      if (!bVar23) {
                        FMutex::LockSlow(this_00);
                      }
                      puVar40 = &(pFVar11->ChangeStampShape).Value;
                      *puVar40 = *puVar40 + 1;
                      LOCK();
                      aVar5 = this_00->State;
                      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
                      UNLOCK();
                      if (((byte)aVar5 & 2) != 0) {
                        FMutex::WakeWaitingThread(this_00);
                      }
                    }
                  }
                  local_1698[0] = *(undefined4 *)(lVar46 + lVar63 * 0x10);
                  uVar56 = (ulonglong)local_1880;
                  local_1698[1] = *(undefined4 *)(lVar46 + 4 + lVar63 * 0x10);
                  local_12c0 = local_1698 + local_1618;
                  local_12b8 = local_1698 + uVar56;
                  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                  ::Emplace<TPairInitializer<int_const_&,int_const_&>_>
                            (&local_a18,(TPairInitializer<int_const_&,int_const_&> *)local_1480,
                             (bool *)&local_12c0);
                  TStack_13f8.UnvisitedBitMask =
                       TStack_13f8.UnvisitedBitMask & ~TStack_13f8._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_13f8);
                  pFVar61 = local_1448;
                  pTVar54 = local_1690;
                  pTVar65 = local_1440;
                }
                if (local_1798.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_1798.AllocatorInstance.Data);
                }
                TSparseGrid3<unsigned_int>::FreeAll((TSparseGrid3<unsigned_int> *)local_6d0);
                local_688 = 0;
                if ((void *)local_6d0._64_8_ != (void *)0x0) {
                  FMemory::Free((void *)local_6d0._64_8_);
                }
                TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,unsigned_int_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_6d0);
                if ((ForElementType<unsigned_int>)local_838._336_8_ !=
                    (ForElementType<unsigned_int>)0x0) {
                  FMemory::Free((void *)local_838._336_8_);
                }
                TDynamicVector<unsigned_int,512>::~TDynamicVector<unsigned_int,512>
                          ((TDynamicVector<unsigned_int,512> *)(local_838 + 0x128));
                local_838._288_4_ = 0;
                if ((ForElementType<FSetElementId>)local_838._280_8_ !=
                    (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_838._280_8_);
                }
                TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)(local_838 + 0xd8));
                FSmallListSet::~FSmallListSet((FSmallListSet *)(local_838 + 0x68));
                TDynamicVector<UE::Geometry::FSparseOctreeCell,512>::
                ~TDynamicVector<UE::Geometry::FSparseOctreeCell,512>
                          ((TDynamicVector<UE::Geometry::FSparseOctreeCell,512> *)(local_838 + 0x50)
                          );
                TDynamicVector<int,512>::Empty((TDynamicVector<int,512> *)(local_838 + 0x30),0);
                if ((FScriptContainerElement *)local_838._56_8_ != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_838._56_8_);
                }
                TDynamicVector<unsigned_short,512>::Empty
                          ((TDynamicVector<unsigned_short,512> *)(local_838 + 0x18),0);
                if ((FScriptContainerElement *)local_838._32_8_ != (FScriptContainerElement *)0x0) {
                  FMemory::Free((void *)local_838._32_8_);
                }
                local_980 = 0;
                if (local_988 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)local_988);
                }
                TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)local_9c8);
                local_1858 = local_1858 + 10;
                local_1880 = (int)uVar56 + 1;
                local_17e8 = local_17e8 + 1;
              } while ((int)local_1880 < 2);
              local_f0 = 0;
              if (local_f8 != (void *)0x0) {
                FMemory::Free(local_f8);
              }
              TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_138);
              local_140[0] = 0;
              if (local_148 != (undefined1 *)0x0) {
                FMemory::Free(local_148);
              }
              TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_188);
              pFVar51 = local_17f0;
            }
            lVar63 = 2;
            if (pFVar51->bSimplifyAlongNewEdges != false) {
              SimplifyAlongNewEdges
                        (pFVar51,local_1884,local_1848,&local_17e0,
                         (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                          *)&local_a18);
            }
            pFVar61 = local_1848[1];
            if (pFVar51->Operation == Difference) {
              pFVar47 = &local_1848[1]->TriangleRefCounts;
              local_1800.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
              local_1800.ArrayNum = 0;
              local_1800.ArrayMax = 0;
              FRefCountVector::IndexIterator::IndexIterator
                        ((IndexIterator *)&local_1490,pFVar47,0,
                         (pFVar47->RefCounts).CurBlock * 0x200 +
                         (local_1848[1]->TriangleRefCounts).RefCounts.CurBlockUsed);
              iVar29 = (pFVar47->RefCounts).CurBlock * 0x200 +
                       (pFVar61->TriangleRefCounts).RefCounts.CurBlockUsed;
              FRefCountVector::IndexIterator::IndexIterator(&local_12b0,pFVar47,iVar29,iVar29);
              iVar29 = local_1490.Index;
              while (iVar29 != local_12b0._8_4_) {
                local_1820[0] = local_1490.Index;
                if (((local_1800.AllocatorInstance.Data <= (FScriptContainerElement *)local_1820) &&
                    ((FScriptContainerElement *)local_1820 <
                     local_1800.AllocatorInstance.Data + (longlong)local_1800.ArrayMax * 4)) &&
                   (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar23)) {
                  pcVar12 = (code *)swi(3);
                  uVar24 = (*pcVar12)();
                  return (bool)uVar24;
                }
                iVar29 = local_1800.ArrayNum;
                if (local_1800.ArrayNum == local_1800.ArrayMax) {
                  iVar29 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                     (0x404,&local_1800.AllocatorInstance,&local_1800.ArrayMax);
                }
                local_1800.ArrayNum = iVar29 + 1;
                *(int *)(local_1800.AllocatorInstance.Data + (longlong)iVar29 * 4) = local_1820[0];
                FRefCountVector::BaseIterator::goto_next(&local_1490);
                iVar29 = local_1490.Index;
              }
              local_1450.Mesh = local_1848[1];
              FDynamicMeshEditor::ReverseTriangleOrientations(&local_1450,&local_1800,true);
              if (local_1800.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1800.AllocatorInstance.Data);
              }
            }
            cVar22 = (**(code **)(pFVar51->_padding_ + 8))(pFVar51);
            if (cVar22 == '\0') {
              bVar23 = true;
              if (local_1884 < 2) {
                if ((pFVar51->Operation != NewGroupInside) &&
                   (pFVar51->Operation != NewGroupOutside)) {
                  TArray<int,TSizedDefaultAllocator<32>_>::operator=
                            (&pFVar51->CreatedBoundaryEdges,&local_17e0);
                }
              }
              else {
                local_1458.Mesh = pFVar51->Result;
                FMeshIndexMappings::FMeshIndexMappings((FMeshIndexMappings *)local_668);
                local_e88._0_8_ = 0;
                local_e88._40_8_ = 0;
                local_eb8._0_8_ = 0;
                local_eb8._40_8_ = 0;
                FDynamicMeshEditor::AppendMesh
                          (&local_1458,local_1848[1],(FMeshIndexMappings *)local_668,&local_eb8,
                           &local_e88,false);
                if ((pFVar51->TrackPerTriangleSourceMesh).field0_0x0.TypedValue.ArrayMax != -1) {
                  pTVar36 = TOptional<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::GetValue
                                      (&pFVar51->TrackPerTriangleSourceMesh);
                  uVar45 = (pFVar51->Result->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                           (pFVar51->Result->TriangleRefCounts).RefCounts.CurBlockUsed;
                  iVar29 = pTVar36->ArrayNum;
                  if (iVar29 < (int)uVar45) {
                    iVar31 = Core::Private::
                             ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                       (1,1,uVar45 - iVar29,&pTVar36->AllocatorInstance,
                                        &pTVar36->ArrayNum,&pTVar36->ArrayMax);
                    memset((pTVar36->AllocatorInstance).Data + iVar31,0,
                           (longlong)(int)(uVar45 - iVar29));
                  }
                  else {
                    if ((int)uVar45 < 0) {
                    /* WARNING: Subroutine does not return */
                      Core::Private::OnInvalidArrayNum((ulonglong)uVar45);
                    }
                    if ((int)uVar45 < iVar29) {
                      uVar55 = iVar29 - uVar45;
                      if (((int)(uVar45 | uVar55) < 0) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)"
                                              ,
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x458,
                                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                                             ), bVar23)) {
                        pcVar12 = (code *)swi(3);
                        uVar24 = (*pcVar12)();
                        return (bool)uVar24;
                      }
                      if (uVar55 != 0) {
                        TArray<signed_char,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                                  (pTVar36,uVar45,uVar55);
                        Core::Private::
                        ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (1,1,&pTVar36->AllocatorInstance,pTVar36->ArrayNum,
                                   &pTVar36->ArrayMax);
                      }
                    }
                  }
                  local_1568._padding_._4_4_ = 1;
                  local_1568.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_668 + 0xb8);
                  local_1568._padding_._0_4_ = 0;
                  local_1568.UnvisitedBitMask = 0xffffffff;
                  local_1568.CurrentBitIndex = 0;
                  local_1568.BaseBitIndex = 0;
                  if (local_598 != 0) {
                    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_1568);
                  }
                  unique0x10004941 =
                       (TBitArray<FDefaultBitArrayAllocator> *)
                       CONCAT44(local_1568._padding_._4_4_,(undefined4)local_1568._padding_);
                  local_13d0._0_8_ = local_668 + 0xa8;
                  uStack_13b8 = CONCAT44(local_1568.CurrentBitIndex,local_1568.UnvisitedBitMask);
                  local_13b0 = CONCAT44(local_1568._28_4_,local_1568.BaseBitIndex);
                  local_11d8 = local_668._176_4_ - local_58c;
                  local_1200._16_8_ = local_1568.Array;
                  uStack_13a8._4_4_ = uStack_11d4;
                  uStack_13a8._0_4_ = local_11d8;
                  local_13c0 = local_1568.Array;
                  local_1200._0_8_ = local_13d0._0_8_;
                  local_1200._8_8_ = unique0x10004941;
                  lStack_11e8 = uStack_13b8;
                  lStack_11e0 = local_13b0;
                  pTVar34 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
                            TConstSetBitIterator<FDefaultBitArrayAllocator>
                                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)local_1200
                                       ,(TBitArray<FDefaultBitArrayAllocator> *)(local_668 + 0xb8),
                                       local_598);
                  local_1718 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                                *)(local_668 + 0xa8);
                  uStack_1710 = pTVar34->_padding_;
                  pTStack_1708 = pTVar34->Array;
                  uStack_1700._0_4_ = pTVar34->UnvisitedBitMask;
                  uStack_1700._4_4_ = pTVar34->CurrentBitIndex;
                  uStack_16f8 = *(ulonglong *)&pTVar34->BaseBitIndex;
                  local_16f0 = local_668._176_4_ - local_58c;
                  local_fc8._44_4_ = uStack_16ec;
                  local_fc8.InitialNum = local_16f0;
                  local_fc8._padding_ = (longlong)local_1718;
                  local_fc8._padding_ = uStack_1710;
                  local_fc8._padding_ = (longlong)pTStack_1708;
                  local_fc8._padding_ = uStack_1700;
                  local_fc8._padding_ = uStack_16f8;
                  bVar23 = TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                           ::TRangedForIterator::operator!=
                                     ((TRangedForIterator *)local_13d0,&local_fc8);
                  if (bVar23) {
                    do {
                      uVar10 = *(undefined8 *)
                                (*(longlong *)local_13d0._0_8_ + (longlong)uStack_13b8._4_4_ * 0x10)
                      ;
                      pTVar36 = TOptional<TArray<signed_char,TSizedDefaultAllocator<32>_>_>::
                                GetValue(&pFVar51->TrackPerTriangleSourceMesh);
                      uVar55 = (uint)((ulonglong)uVar10 >> 0x20);
                      uVar45 = 0;
                      if ((int)uVar55 < pTVar36->ArrayNum) {
                        uVar45 = ~uVar55 >> 0x1f;
                      }
                      if ((uVar45 == 0) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("(Index >= 0) & (Index < ArrayNum)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x447,
                                              L"Array index out of bounds: %lld into an array of size %lld"
                                             ), bVar23)) {
                        pcVar12 = (code *)swi(3);
                        uVar24 = (*pcVar12)();
                        return (bool)uVar24;
                      }
                      (pTVar36->AllocatorInstance).Data[(int)uVar55] = (FScriptContainerElement)0x1;
                      uStack_13b8 = CONCAT44(uStack_13b8._4_4_,(uint)uStack_13b8 & ~uStack_13c4);
                      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_13d0 + 8)
                                );
                      bVar23 = TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                               ::TRangedForIterator::operator!=
                                         ((TRangedForIterator *)local_13d0,&local_fc8);
                    } while (bVar23);
                  }
                }
                if (pFVar51->bPopulateSecondMeshGroupMap != false) {
                  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                  operator=(&(pFVar51->SecondMeshGroupMap).ForwardMap,&local_518);
                  TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::
                  operator=(&(pFVar51->SecondMeshGroupMap).ReverseMap,&local_4c8);
                  (pFVar51->SecondMeshGroupMap).bWantForward = local_478;
                  (pFVar51->SecondMeshGroupMap).bWantReverse = local_477;
                }
                if (pFVar51->bWeldSharedEdges == false) {
                  pTVar53 = &pFVar51->CreatedBoundaryEdges;
                  TArray<int,TSizedDefaultAllocator<32>_>::operator=(pTVar53,&local_17e0);
                  iVar29 = (int)local_17c8;
                  uVar56 = (ulonglong)(int)local_17c8;
                  puVar40 = local_17d0 + uVar56;
                  puVar49 = local_17d0;
                  pFVar66 = pFVar51;
                  while( true ) {
                    if ((int)uVar56 != iVar29) {
                      local_187b[0] = (<lambda_1>)0x0;
                      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                                (local_187b);
                    }
                    if (puVar49 == puVar40) break;
                    uVar45 = *puVar49;
                    if (((int)uVar45 < 0) ||
                       ((int)((local_1848[1]->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                             (local_1848[1]->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)uVar45))
                    {
LAB_143586402:
                      bVar23 = Assert::Private::ExecCheckImplInternal
                                         (&bGEnsureHasExecuted<_3779031055328083207>,false,
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshBoolean.cpp"
                                          ,0x2f9,"false");
                      if (bVar23) {
                        pcVar12 = (code *)swi(3);
                        uVar24 = (*pcVar12)();
                        return (bool)uVar24;
                      }
                      uVar56 = local_17c8 & 0xffffffff;
                      puVar49 = puVar49 + 1;
                    }
                    else {
                      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                        ((local_1848[1]->EdgeRefCounts).RefCounts.
                                                         Blocks.AllocatorInstance.Data +
                                                        (ulonglong)(uVar45 >> 9) * 8) +
                                                      (ulonglong)(uVar45 & 0x1ff) * 2) - 1U))
                      goto LAB_143586402;
                      pFVar61 = pFVar66->Result;
                      uVar10 = *(undefined8 *)
                                (*(longlong *)
                                  ((local_1848[1]->Edges).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar45 >> 9) * 8) + (ulonglong)(uVar45 & 0x1ff) * 0x10
                                );
                      if (((bool)local_668[0xa0] == false) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("bWantForward",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                                              ,0x9a,L""), bVar23)) {
                        pcVar12 = (code *)swi(3);
                        uVar24 = (*pcVar12)();
                        return (bool)uVar24;
                      }
                      piVar37 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                ::Find((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                        *)local_668,(int)((ulonglong)uVar10 >> 0x20));
                      iVar31 = -1;
                      if (piVar37 != (int *)0x0) {
                        iVar31 = *piVar37;
                      }
                      if (((bool)local_668[0xa0] == false) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("bWantForward",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                                              ,0x9a,L""), bVar23)) {
                        pcVar12 = (code *)swi(3);
                        uVar24 = (*pcVar12)();
                        return (bool)uVar24;
                      }
                      piVar37 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                ::Find((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                        *)local_668,(int)uVar10);
                      iVar59 = -1;
                      if (piVar37 != (int *)0x0) {
                        iVar59 = *piVar37;
                      }
                      local_1834 = FDynamicMesh3::FindEdge(pFVar61,iVar59,iVar31);
                      pFVar7 = (pTVar53->AllocatorInstance).Data;
                      if (((pFVar7 <= (FScriptContainerElement *)&local_1834) &&
                          ((FScriptContainerElement *)&local_1834 <
                           pFVar7 + (longlong)(pFVar51->CreatedBoundaryEdges).ArrayMax * 4)) &&
                         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                              ,0x7a5,
                                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                             ), bVar23)) {
                        pcVar12 = (code *)swi(3);
                        uVar24 = (*pcVar12)();
                        return (bool)uVar24;
                      }
                      iVar31 = (pFVar51->CreatedBoundaryEdges).ArrayNum;
                      piVar37 = &(pFVar51->CreatedBoundaryEdges).ArrayMax;
                      if (iVar31 == *piVar37) {
                        iVar31 = Core::Private::
                                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                           (0x404,&pTVar53->AllocatorInstance,piVar37);
                      }
                      (pFVar51->CreatedBoundaryEdges).ArrayNum = iVar31 + 1;
                      puVar49 = puVar49 + 1;
                      *(int *)((pTVar53->AllocatorInstance).Data + (longlong)iVar31 * 4) =
                           local_1834;
                      uVar56 = local_17c8 & 0xffffffff;
                      pFVar66 = local_17f0;
                    }
                  }
                  bVar23 = true;
                  FMeshIndexMappings::~FMeshIndexMappings((FMeshIndexMappings *)local_668);
                  pFVar51 = pFVar66;
                }
                else {
                  bVar23 = MergeEdges(pFVar51,(FMeshIndexMappings *)local_668,local_1848,&local_17e0
                                      ,(TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                                        *)&local_a18);
                  FMeshIndexMappings::~FMeshIndexMappings((FMeshIndexMappings *)local_668);
                }
              }
              if (pFVar51->bTrackAllNewEdges != false) {
                pFVar52 = (pFVar51->CreatedBoundaryEdges).AllocatorInstance.Data;
                iVar29 = (pFVar51->CreatedBoundaryEdges).ArrayNum;
                pFVar7 = pFVar52 + (longlong)iVar29 * 4;
                while( true ) {
                  if ((pFVar51->CreatedBoundaryEdges).ArrayNum != iVar29) {
                    `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                              (local_1806);
                  }
                  if (pFVar52 == pFVar7) break;
                  local_16ac = *(undefined4 *)pFVar52;
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                            (&pFVar51->AllNewEdges,&local_1460,(bool *)&local_16ac);
                  pFVar52 = pFVar52 + 4;
                }
              }
              if (pFVar51->bPutResultInInputSpace != false) {
                pTVar1 = &pFVar51->ResultTransform;
                MeshTransformsLocal::
                TransformMeshHelper<_MeshTransforms::ApplyTransform_::__l2::<lambda_1>,_MeshTransforms::ApplyTransform_::__l2::<lambda_2>,_MeshTransforms::ApplyTransform_::__l2::<lambda_3>,_MeshTransforms::ApplyTransform_::__l2::<lambda_4>_>
                          (pFVar51->Result,(<lambda_1>)pTVar1,(<lambda_2>)pTVar1,(<lambda_3>)pTVar1,
                           (<lambda_4>)pTVar1,All);
                uVar19 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
                uVar70 = UE::Math::TVector<double>::OneVector.field0_0x0._12_4_;
                uVar69 = UE::Math::TVector<double>::OneVector.field0_0x0._8_4_;
                uVar18 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
                uVar74 = UE::Math::TVector<double>::ZeroVector.field0_0x0._20_4_;
                uVar73 = UE::Math::TVector<double>::ZeroVector.field0_0x0._16_4_;
                uVar17 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
                uVar10 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
                dVar75 = _UNK_15061cbc8;
                dVar76 = ___xmm_3ff00000000000000000000000000000;
                (pFVar51->ResultTransform).Rotation.field0_0x0._s_0.X = 0.0;
                (pFVar51->ResultTransform).Rotation.field0_0x0._s_0.Y = 0.0;
                (pFVar51->ResultTransform).Rotation.field0_0x0._s_0.Z = dVar76;
                (pFVar51->ResultTransform).Rotation.field0_0x0._s_0.W = dVar75;
                (pFVar51->ResultTransform).Translation.field0_0x0._s_0.X = (double)uVar10;
                (pFVar51->ResultTransform).Translation.field0_0x0._s_0.Y = (double)uVar17;
                *(undefined4 *)((longlong)&(pFVar51->ResultTransform).Translation.field0_0x0 + 0x10)
                     = uVar73;
                *(undefined4 *)((longlong)&(pFVar51->ResultTransform).Translation.field0_0x0 + 0x14)
                     = uVar74;
                *(int *)&(pFVar51->ResultTransform).Scale3D.field0_0x0 = (int)uVar18;
                *(int *)((longlong)&(pFVar51->ResultTransform).Scale3D.field0_0x0 + 4) =
                     (int)((ulonglong)uVar18 >> 0x20);
                *(undefined4 *)((longlong)&(pFVar51->ResultTransform).Scale3D.field0_0x0 + 8) =
                     uVar69;
                *(undefined4 *)((longlong)&(pFVar51->ResultTransform).Scale3D.field0_0x0 + 0xc) =
                     uVar70;
                *(int *)((longlong)&(pFVar51->ResultTransform).Scale3D.field0_0x0 + 0x10) =
                     (int)uVar19;
                *(int *)((longlong)&(pFVar51->ResultTransform).Scale3D.field0_0x0 + 0x14) =
                     (int)((ulonglong)uVar19 >> 0x20);
              }
              local_a18.HashSize = 0;
              if (local_a18.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_a18.Hash.SecondaryData);
              }
              TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_a18.Elements);
              local_190 = 0;
              if (local_198 != (void *)0x0) {
                FMemory::Free(local_198);
              }
              TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        (&local_1d8);
              local_1e0 = 0;
              if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)local_1e8);
              }
              TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ::
              ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          *)local_228);
              lVar46 = 2;
              pTVar58 = &local_17c0;
              lVar63 = 2;
              do {
                pdVar57 = pTVar58->XYZ + -2;
                pTVar58 = (TVector<double>_u_0 *)(pTVar58->XYZ + -2);
                lVar63 = lVar63 + -1;
                if ((void *)*pdVar57 != (void *)0x0) {
                  FMemory::Free((void *)*pdVar57);
                }
              } while (lVar63 != 0);
              pTVar65 = &local_a18;
              lVar63 = 2;
              do {
                FVar43 = pTVar65[-1].Hash.SecondaryData;
                pTVar65 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                           *)&pTVar65[-1].Hash.SecondaryData;
                lVar63 = lVar63 + -1;
                if (FVar43 != (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)FVar43);
                }
              } while (lVar63 != 0);
              pTVar53 = local_a78.SegmentToChain;
              do {
                pFVar7 = pTVar53[-1].AllocatorInstance.Data;
                pTVar53 = pTVar53 + -1;
                lVar46 = lVar46 + -1;
                if (pFVar7 != (FScriptContainerElement *)0x0) {
                  FMemory::Free(pFVar7);
                }
              } while (lVar46 != 0);
              if (local_1668.Polygons.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1668.Polygons.AllocatorInstance.Data);
              }
              if (local_1668.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1668.Segments.AllocatorInstance.Data);
              }
              if (local_1668.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_1668.Points.AllocatorInstance.Data);
              }
              TDynamicVector<int,512>::Empty(&local_248,0);
              if (local_248.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_248.Blocks.AllocatorInstance.Data);
              }
              TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_260,0);
              if (local_260.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_260.Blocks.AllocatorInstance.Data);
              }
              TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_278,0);
              if (local_278.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_278.Blocks.AllocatorInstance.Data);
              }
              TDynamicVector<int,512>::Empty(&local_290,0);
              if (local_290.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_290.Blocks.AllocatorInstance.Data);
              }
              if (local_2e8._32_8_ != 0) {
                plVar41 = (longlong *)(local_2e8 + 0x30);
                if ((longlong *)local_2e8._72_8_ != (longlong *)0x0) {
                  plVar41 = (longlong *)local_2e8._72_8_;
                }
                (**(code **)(*plVar41 + 0x10))();
              }
              TDynamicVector<int,512>::Empty(&local_308,0);
              if (local_308.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_308.Blocks.AllocatorInstance.Data);
              }
              TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_320,0);
              if (local_320.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_320.Blocks.AllocatorInstance.Data);
              }
              TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_338,0);
              if (local_338.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_338.Blocks.AllocatorInstance.Data);
              }
              TDynamicVector<int,512>::Empty(&local_350,0);
              if (local_350.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_350.Blocks.AllocatorInstance.Data);
              }
              if (local_3a8._32_8_ != 0) {
                plVar41 = (longlong *)(local_3a8 + 0x30);
                if ((longlong *)local_3a8._72_8_ != (longlong *)0x0) {
                  plVar41 = (longlong *)local_3a8._72_8_;
                }
                (**(code **)(*plVar41 + 0x10))();
              }
              FDynamicMesh3::~FDynamicMesh3(&local_cf8);
              if (*(longlong *)&local_17a0->IsPointInsideFn != 0) {
                plVar41 = *(longlong **)&(local_17a0->IsPointInsideFn).field_0x28;
                plVar42 = (longlong *)&(local_17a0->IsPointInsideFn).field_0x10;
                if (plVar41 != (longlong *)0x0) {
                  plVar42 = plVar41;
                }
                (**(code **)(*plVar42 + 0x10))();
              }
              if (*(longlong *)&local_17a8->IsPointInsideFn != 0) {
                plVar41 = *(longlong **)&(local_17a8->IsPointInsideFn).field_0x28;
                plVar42 = (longlong *)&(local_17a8->IsPointInsideFn).field_0x10;
                if (plVar41 != (longlong *)0x0) {
                  plVar42 = plVar41;
                }
                (**(code **)(*plVar42 + 0x10))();
                return bVar23;
              }
              return bVar23;
            }
            local_a18.HashSize = 0;
            if (local_a18.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_a18.Hash.SecondaryData);
            }
            TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_a18.Elements);
            local_190 = 0;
            if (local_198 != (void *)0x0) {
              FMemory::Free(local_198);
            }
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_1d8);
            local_1e0 = 0;
            if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_1e8);
            }
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_228);
            pTVar58 = &local_17c0;
            lVar46 = 2;
            do {
              pdVar57 = pTVar58->XYZ + -2;
              pTVar58 = (TVector<double>_u_0 *)(pTVar58->XYZ + -2);
              lVar46 = lVar46 + -1;
              if ((void *)*pdVar57 != (void *)0x0) {
                FMemory::Free((void *)*pdVar57);
              }
            } while (lVar46 != 0);
            pTVar65 = &local_a18;
            lVar46 = 2;
            do {
              FVar43 = pTVar65[-1].Hash.SecondaryData;
              pTVar65 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                         *)&pTVar65[-1].Hash.SecondaryData;
              lVar46 = lVar46 + -1;
              if (FVar43 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)FVar43);
              }
            } while (lVar46 != 0);
            pTVar53 = local_a78.SegmentToChain;
            do {
              pFVar7 = pTVar53[-1].AllocatorInstance.Data;
              pTVar53 = pTVar53 + -1;
              lVar63 = lVar63 + -1;
              if (pFVar7 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar7);
              }
            } while (lVar63 != 0);
          }
          else {
            local_190 = 0;
            if (local_198 != (void *)0x0) {
              FMemory::Free(local_198);
            }
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      (&local_1d8);
            local_1e0 = 0;
            if (local_1e8 != (ForElementType<FSetElementId>)0x0) {
              FMemory::Free((void *)local_1e8);
            }
            TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ::
            ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                      ((TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                        *)local_228);
            pTVar58 = &local_17c0;
            lVar63 = 2;
            do {
              pdVar57 = pTVar58->XYZ + -2;
              pTVar58 = (TVector<double>_u_0 *)(pTVar58->XYZ + -2);
              lVar63 = lVar63 + -1;
              if ((void *)*pdVar57 != (void *)0x0) {
                FMemory::Free((void *)*pdVar57);
              }
            } while (lVar63 != 0);
            pTVar65 = &local_a18;
            lVar63 = 2;
            do {
              FVar43 = pTVar65[-1].Hash.SecondaryData;
              pTVar65 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                         *)&pTVar65[-1].Hash.SecondaryData;
              lVar63 = lVar63 + -1;
              if (FVar43 != (ForElementType<FSetElementId>)0x0) {
                FMemory::Free((void *)FVar43);
              }
            } while (lVar63 != 0);
            pTVar53 = local_a78.SegmentToChain;
            do {
              pFVar7 = pTVar53[-1].AllocatorInstance.Data;
              pTVar53 = pTVar53 + -1;
              lVar46 = lVar46 + -1;
              if (pFVar7 != (FScriptContainerElement *)0x0) {
                FMemory::Free(pFVar7);
              }
            } while (lVar46 != 0);
          }
          if (local_1668.Polygons.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1668.Polygons.AllocatorInstance.Data);
          }
          if (local_1668.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1668.Segments.AllocatorInstance.Data);
          }
          if (local_1668.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1668.Points.AllocatorInstance.Data);
          }
          TDynamicVector<int,512>::Empty(&local_248,0);
          if (local_248.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_248.Blocks.AllocatorInstance.Data);
          }
          TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_260,0);
          if (local_260.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_260.Blocks.AllocatorInstance.Data);
          }
          TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_278,0);
          if (local_278.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_278.Blocks.AllocatorInstance.Data);
          }
          TDynamicVector<int,512>::Empty(&local_290,0);
          if (local_290.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_290.Blocks.AllocatorInstance.Data);
          }
          if (local_2e8._32_8_ != 0) {
            plVar41 = (longlong *)(local_2e8 + 0x30);
            if ((longlong *)local_2e8._72_8_ != (longlong *)0x0) {
              plVar41 = (longlong *)local_2e8._72_8_;
            }
            (**(code **)(*plVar41 + 0x10))();
          }
          TDynamicVector<int,512>::Empty(&local_308,0);
          if (local_308.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_308.Blocks.AllocatorInstance.Data);
          }
          TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_320,0);
          if (local_320.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_320.Blocks.AllocatorInstance.Data);
          }
          TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_338,0);
          if (local_338.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_338.Blocks.AllocatorInstance.Data);
          }
          TDynamicVector<int,512>::Empty(&local_350,0);
          if (local_350.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_350.Blocks.AllocatorInstance.Data);
          }
          if (local_3a8._32_8_ != 0) {
            plVar41 = (longlong *)(local_3a8 + 0x30);
            if ((longlong *)local_3a8._72_8_ != (longlong *)0x0) {
              plVar41 = (longlong *)local_3a8._72_8_;
            }
            (**(code **)(*plVar41 + 0x10))();
          }
          FDynamicMesh3::~FDynamicMesh3(&local_cf8);
          if (*(longlong *)&local_17a0->IsPointInsideFn != 0) {
            plVar41 = *(longlong **)&(local_17a0->IsPointInsideFn).field_0x28;
            plVar42 = (longlong *)&(local_17a0->IsPointInsideFn).field_0x10;
            if (plVar41 != (longlong *)0x0) {
              plVar42 = plVar41;
            }
            (**(code **)(*plVar42 + 0x10))();
          }
          if (*(longlong *)&local_17a8->IsPointInsideFn == 0) {
            return false;
          }
          plVar41 = *(longlong **)&(local_17a8->IsPointInsideFn).field_0x28;
          plVar42 = (longlong *)&(local_17a8->IsPointInsideFn).field_0x10;
          if (plVar41 != (longlong *)0x0) {
            plVar42 = plVar41;
          }
          (**(code **)(*plVar42 + 0x10))();
          return false;
        }
        pTVar65 = &local_a18;
        lVar46 = 2;
        do {
          FVar43 = pTVar65[-1].Hash.SecondaryData;
          pTVar65 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                     *)&pTVar65[-1].Hash.SecondaryData;
          lVar46 = lVar46 + -1;
          if (FVar43 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)FVar43);
          }
        } while (lVar46 != 0);
        pTVar53 = local_a78.SegmentToChain;
        do {
          pFVar7 = pTVar53[-1].AllocatorInstance.Data;
          pTVar53 = pTVar53 + -1;
          lVar63 = lVar63 + -1;
          if (pFVar7 != (FScriptContainerElement *)0x0) {
            FMemory::Free(pFVar7);
          }
        } while (lVar63 != 0);
        if (local_1668.Polygons.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1668.Polygons.AllocatorInstance.Data);
        }
        if (local_1668.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1668.Segments.AllocatorInstance.Data);
        }
        if (local_1668.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1668.Points.AllocatorInstance.Data);
        }
        TDynamicVector<int,512>::~TDynamicVector<int,512>(&local_248);
        TDynamicVector<UE::Math::TVector<double>,512>::
        ~TDynamicVector<UE::Math::TVector<double>,512>(&local_260);
        TDynamicVector<UE::Math::TVector<double>,512>::
        ~TDynamicVector<UE::Math::TVector<double>,512>(&local_278);
        TDynamicVector<int,512>::~TDynamicVector<int,512>(&local_290);
        if (local_2e8._32_8_ != 0) {
          plVar41 = (longlong *)(local_2e8 + 0x30);
          if ((longlong *)local_2e8._72_8_ != (longlong *)0x0) {
            plVar41 = (longlong *)local_2e8._72_8_;
          }
          (**(code **)(*plVar41 + 0x10))();
        }
        TDynamicVector<int,512>::~TDynamicVector<int,512>(&local_308);
        TDynamicVector<UE::Math::TVector<double>,512>::
        ~TDynamicVector<UE::Math::TVector<double>,512>(&local_320);
        TDynamicVector<UE::Math::TVector<double>,512>::
        ~TDynamicVector<UE::Math::TVector<double>,512>(&local_338);
        TDynamicVector<int,512>::~TDynamicVector<int,512>(&local_350);
        if (local_3a8._32_8_ != 0) {
          plVar41 = (longlong *)(local_3a8 + 0x30);
          if ((longlong *)local_3a8._72_8_ != (longlong *)0x0) {
            plVar41 = (longlong *)local_3a8._72_8_;
          }
          (**(code **)(*plVar41 + 0x10))();
        }
        goto LAB_14358276b;
      }
      pTVar65 = &local_a18;
      lVar46 = 2;
      do {
        FVar43 = pTVar65[-1].Hash.SecondaryData;
        pTVar65 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                   *)&pTVar65[-1].Hash.SecondaryData;
        lVar46 = lVar46 + -1;
        if (FVar43 != (ForElementType<FSetElementId>)0x0) {
          FMemory::Free((void *)FVar43);
        }
      } while (lVar46 != 0);
      pTVar53 = local_a78.SegmentToChain;
      do {
        pFVar7 = pTVar53[-1].AllocatorInstance.Data;
        pTVar53 = pTVar53 + -1;
        lVar63 = lVar63 + -1;
        if (pFVar7 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar7);
        }
      } while (lVar63 != 0);
      if (local_1668.Polygons.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1668.Polygons.AllocatorInstance.Data);
      }
      if (local_1668.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1668.Segments.AllocatorInstance.Data);
      }
      if (local_1668.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1668.Points.AllocatorInstance.Data);
      }
      TDynamicVector<int,512>::~TDynamicVector<int,512>(&local_248);
      TDynamicVector<UE::Math::TVector<double>,512>::~TDynamicVector<UE::Math::TVector<double>,512>
                (&local_260);
      TDynamicVector<UE::Math::TVector<double>,512>::~TDynamicVector<UE::Math::TVector<double>,512>
                (&local_278);
      TDynamicVector<int,512>::~TDynamicVector<int,512>(&local_290);
      if (local_2e8._32_8_ != 0) {
        plVar41 = (longlong *)(local_2e8 + 0x30);
        if ((longlong *)local_2e8._72_8_ != (longlong *)0x0) {
          plVar41 = (longlong *)local_2e8._72_8_;
        }
        (**(code **)(*plVar41 + 0x10))();
      }
      TDynamicVector<int,512>::~TDynamicVector<int,512>(&local_308);
      TDynamicVector<UE::Math::TVector<double>,512>::~TDynamicVector<UE::Math::TVector<double>,512>
                (&local_320);
      TDynamicVector<UE::Math::TVector<double>,512>::~TDynamicVector<UE::Math::TVector<double>,512>
                (&local_338);
      TDynamicVector<int,512>::~TDynamicVector<int,512>(&local_350);
    }
    else {
      if (local_1668.Polygons.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1668.Polygons.AllocatorInstance.Data);
      }
      if (local_1668.Segments.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1668.Segments.AllocatorInstance.Data);
      }
      if (local_1668.Points.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1668.Points.AllocatorInstance.Data);
      }
      TDynamicVector<int,512>::Empty(&local_248,0);
      if (local_248.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_248.Blocks.AllocatorInstance.Data);
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_260,0);
      if (local_260.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_260.Blocks.AllocatorInstance.Data);
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_278,0);
      if (local_278.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Blocks.AllocatorInstance.Data);
      }
      TDynamicVector<int,512>::Empty(&local_290,0);
      if (local_290.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_290.Blocks.AllocatorInstance.Data);
      }
      if (local_2e8._32_8_ != 0) {
        plVar41 = (longlong *)(local_2e8 + 0x30);
        if ((longlong *)local_2e8._72_8_ != (longlong *)0x0) {
          plVar41 = (longlong *)local_2e8._72_8_;
        }
        (**(code **)(*plVar41 + 0x10))();
      }
      TDynamicVector<int,512>::Empty(&local_308,0);
      if (local_308.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_308.Blocks.AllocatorInstance.Data);
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_320,0);
      if (local_320.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_320.Blocks.AllocatorInstance.Data);
      }
      TDynamicVector<UE::Math::TVector<double>,512>::Empty(&local_338,0);
      if (local_338.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_338.Blocks.AllocatorInstance.Data);
      }
      TDynamicVector<int,512>::Empty(&local_350,0);
      if (local_350.Blocks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_350.Blocks.AllocatorInstance.Data);
      }
    }
    if (local_3a8._32_8_ != 0) {
      plVar41 = (longlong *)(local_3a8 + 0x30);
      if ((longlong *)local_3a8._72_8_ != (longlong *)0x0) {
        plVar41 = (longlong *)local_3a8._72_8_;
      }
      (**(code **)(*plVar41 + 0x10))();
    }
    FDynamicMesh3::~FDynamicMesh3(&local_cf8);
    if (*(longlong *)&param_1->IsPointInsideFn != 0) {
      plVar41 = *(longlong **)&(param_1->IsPointInsideFn).field_0x28;
      plVar42 = (longlong *)&(param_1->IsPointInsideFn).field_0x10;
      if (plVar41 != (longlong *)0x0) {
        plVar42 = plVar41;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    if (*(longlong *)&param_2->IsPointInsideFn != 0) {
      plVar41 = *(longlong **)&(param_2->IsPointInsideFn).field_0x28;
      plVar42 = (longlong *)&(param_2->IsPointInsideFn).field_0x10;
      if (plVar41 != (longlong *)0x0) {
        plVar42 = plVar41;
      }
      (**(code **)(*plVar42 + 0x10))();
      return false;
    }
  }
  else {
LAB_14358276b:
    FDynamicMesh3::~FDynamicMesh3(&local_cf8);
    if (*(longlong *)&param_1->IsPointInsideFn != 0) {
      plVar41 = *(longlong **)&(param_1->IsPointInsideFn).field_0x28;
      plVar42 = (longlong *)&(param_1->IsPointInsideFn).field_0x10;
      if (plVar41 != (longlong *)0x0) {
        plVar42 = plVar41;
      }
      (**(code **)(*plVar42 + 0x10))();
    }
    if (*(longlong *)&param_2->IsPointInsideFn != 0) {
      plVar41 = *(longlong **)&(param_2->IsPointInsideFn).field_0x28;
      plVar42 = (longlong *)&(param_2->IsPointInsideFn).field_0x10;
      if (plVar41 != (longlong *)0x0) {
        plVar42 = plVar41;
      }
      (**(code **)(*plVar42 + 0x10))();
      return false;
    }
  }
  return false;
}

// FindNearestEdge @ 143592dc0

int __thiscall
UE::Geometry::FMeshBoolean::FindNearestEdge
          (FMeshBoolean *this,FDynamicMesh3 *param_1,
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
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 local_res8 [8];
  TVector<double>_u_0 local_f0;
  undefined8 local_d8;
  
  dVar12 = __real_bfe0000000000000;
  dVar11 = __real_3fe0000000000000;
  pFVar14 = (param_2->AllocatorInstance).Data;
  iVar3 = param_2->ArrayNum;
  pFVar1 = pFVar14 + (longlong)iVar3 * 4;
  dVar22 = this->SnapTolerance * this->SnapTolerance;
  uVar4 = 0xffffffff;
  while( true ) {
    uVar15 = uVar4;
    dVar10 = dVar22;
    if (param_2->ArrayNum != iVar3) {
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar14 == pFVar1) break;
    pFVar5 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
    uVar4 = *(uint *)pFVar14;
    local_d8 = 0;
    uVar6 = *(ulonglong *)
             (*(longlong *)
               ((param_1->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar4 >> 9) * 8) +
             (ulonglong)(uVar4 & 0x1ff) * 0x10);
    uVar13 = (ulonglong)((uint)uVar6 & 0x1ff);
    lVar7 = *(longlong *)(pFVar5 + ((uVar6 & 0xffffffff) >> 9) * 8);
    pdVar2 = (double *)(lVar7 + uVar13 * 0x18);
    dVar20 = *pdVar2;
    dVar8 = pdVar2[1];
    dVar22 = *(double *)(lVar7 + 0x10 + uVar13 * 0x18);
    uVar13 = (ulonglong)((uint)(uVar6 >> 0x20) & 0x1ff);
    lVar7 = *(longlong *)(pFVar5 + (uVar6 >> 0x29) * 8);
    pdVar2 = (double *)(lVar7 + uVar13 * 0x18);
    dVar9 = *pdVar2;
    dVar17 = pdVar2[1];
    dVar21 = *(double *)(lVar7 + 0x10 + uVar13 * 0x18);
    local_f0._s_0.X = dVar9 - dVar20;
    dVar16 = (dVar20 + dVar9) * dVar11;
    local_f0._s_0.Y = dVar17 - dVar8;
    dVar17 = (dVar8 + dVar17) * dVar11;
    local_f0._s_0.Z = dVar21 - dVar22;
    dVar18 = (dVar22 + dVar21) * dVar11;
    dVar19 = Normalize<double>((TVector<double> *)&local_f0._s_0,0.0);
    dVar22 = (param_3->field0_0x0)._s_0.X;
    dVar21 = (param_3->field0_0x0)._s_0.Y;
    dVar20 = (param_3->field0_0x0)._s_0.Z;
    dVar8 = dVar19 * dVar11;
    dVar9 = (dVar21 - dVar17) * local_f0._s_0.Y + (dVar22 - dVar16) * local_f0._s_0.X +
            (dVar20 - dVar18) * local_f0._s_0.Z;
    if (dVar9 < dVar8) {
      if (dVar19 * dVar12 < dVar9) {
        dVar21 = dVar21 - (local_f0._s_0.Y * dVar9 + dVar17);
        dVar22 = dVar22 - (local_f0._s_0.X * dVar9 + dVar16);
        dVar20 = dVar20 - (local_f0._s_0.Z * dVar9 + dVar18);
        dVar22 = dVar21 * dVar21 + dVar22 * dVar22 + dVar20 * dVar20;
      }
      else {
        dVar22 = (dVar16 - local_f0._s_0.X * dVar8) - dVar22;
        dVar21 = (dVar17 - local_f0._s_0.Y * dVar8) - dVar21;
        dVar20 = (dVar18 - local_f0._s_0.Z * dVar8) - dVar20;
        dVar22 = dVar21 * dVar21 + dVar22 * dVar22 + dVar20 * dVar20;
      }
    }
    else {
      dVar21 = (local_f0._s_0.Y * dVar8 + dVar17) - dVar21;
      dVar22 = (local_f0._s_0.X * dVar8 + dVar16) - dVar22;
      dVar20 = (local_f0._s_0.Z * dVar8 + dVar18) - dVar20;
      dVar22 = dVar21 * dVar21 + dVar22 * dVar22 + dVar20 * dVar20;
    }
    pFVar14 = pFVar14 + 4;
    if (dVar10 <= dVar22) {
      dVar22 = dVar10;
      uVar4 = uVar15;
    }
  }
  return uVar15;
}

// MergeEdges @ 1435bad80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FMeshBoolean::MergeEdges
          (FMeshBoolean *this,FMeshIndexMappings *param_1,FDynamicMesh3 **param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_4)

{
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar1;
  uint *puVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  FDynamicMesh3 *pFVar6;
  FDynamicMesh3 *this_00;
  undefined8 uVar7;
  FDynamicMesh3 **ppFVar8;
  undefined1 *puVar9;
  FScriptContainerElement *pFVar10;
  code *pcVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  FMeshBoolean *pFVar19;
  undefined4 uVar20;
  bool bVar21;
  undefined1 uVar22;
  bool bVar23;
  int iVar24;
  uint uVar25;
  int iVar26;
  int *piVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  atomic<unsigned_char> *paVar30;
  uint *puVar31;
  uint *puVar32;
  longlong lVar33;
  int iVar34;
  uint uVar35;
  longlong *plVar36;
  undefined1 *puVar37;
  uint uVar38;
  uint *puVar39;
  double *pdVar40;
  FMeshBoolean *pFVar41;
  FScriptContainerElement *pFVar42;
  uint *puVar43;
  ForAnyElementType FVar44;
  uint *puVar45;
  ulonglong uVar46;
  double dVar47;
  double dVar48;
  undefined1 auStackY_2c8 [32];
  char *pcVar49;
  ForAnyElementType local_278;
  int local_270;
  int iStack_26c;
  undefined1 local_268;
  undefined1 local_267;
  undefined1 local_266;
  undefined1 local_265 [2];
  undefined1 local_263;
  undefined1 local_262 [2];
  uint local_260 [2];
  TArray<int,TSizedDefaultAllocator<32>_> local_258;
  undefined1 local_248 [4];
  uint local_244;
  uint local_240 [2];
  FMeshBoolean *local_238;
  undefined1 local_230 [32];
  undefined1 local_210 [24];
  TVector<double>_u_0 local_1f8;
  int local_1e0;
  int local_1dc [7];
  TVector<double>_u_0 local_1c0;
  TVector<double>_u_0 local_1a8;
  void *local_180;
  undefined4 local_178;
  undefined4 local_174;
  FProgressCancel *local_160;
  undefined4 local_158;
  undefined4 local_154;
  double local_150;
  undefined1 local_148 [8];
  undefined8 local_140;
  double local_138;
  double dStack_130;
  FDynamicMesh3 *local_128;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined8 local_f0;
  TVector<double>_u_0 local_e8 [7];
  
  local_e8[0]._16_8_ = __security_cookie.value ^ (ulonglong)auStackY_2c8;
  pFVar42 = param_3[1].AllocatorInstance.Data;
  iVar26 = param_3[1].ArrayNum;
  pFVar10 = pFVar42 + (longlong)iVar26 * 4;
  local_258.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_258.ArrayNum = 0;
  local_258.ArrayMax = 0;
  local_1dc._4_8_ = param_4;
  local_238 = this;
  local_210._0_8_ = param_2;
  local_210._16_8_ = param_3;
  while( true ) {
    if (*(int *)(local_210._16_8_ + 0x18) != iVar26) {
      local_268 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_268);
    }
    pFVar19 = local_238;
    if (pFVar42 == pFVar10) break;
    uVar35 = *(uint *)pFVar42;
    pFVar6 = *(FDynamicMesh3 **)(local_210._0_8_ + 8);
    if (((int)uVar35 < 0) ||
       ((int)((pFVar6->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar6->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)uVar35)) {
LAB_1435bb03c:
      pcVar49 = "CutMesh[1]->IsEdge(OldMeshEID)";
      paVar30 = &bGEnsureHasExecuted<_3779031055328082914>;
      iVar24 = 0x41e;
LAB_1435bb04e:
      bVar21 = Assert::Private::ExecCheckImplInternal
                         (paVar30,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshBoolean.cpp"
                          ,iVar24,pcVar49);
      if (bVar21) {
        pcVar11 = (code *)swi(3);
        uVar22 = (*pcVar11)();
        return (bool)uVar22;
      }
    }
    else {
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((pFVar6->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.
                                         Data + (ulonglong)(uVar35 >> 9) * 8) +
                                      (ulonglong)(uVar35 & 0x1ff) * 2) - 1U)) goto LAB_1435bb03c;
      this_00 = local_238->Result;
      uVar7 = *(undefined8 *)
               (*(longlong *)
                 ((pFVar6->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar35 >> 9) * 8) +
               (ulonglong)(uVar35 & 0x1ff) * 0x10);
      if (((param_1->VertexMap).bWantForward == false) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("bWantForward",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                              ,0x9a,L""), bVar21)) {
        pcVar11 = (code *)swi(3);
        uVar22 = (*pcVar11)();
        return (bool)uVar22;
      }
      piVar27 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::Find
                          ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            *)param_1,(int)((ulonglong)uVar7 >> 0x20));
      iVar24 = -1;
      if (piVar27 != (int *)0x0) {
        iVar24 = *piVar27;
      }
      if (((param_1->VertexMap).bWantForward == false) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("bWantForward",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                              ,0x9a,L""), bVar21)) {
        pcVar11 = (code *)swi(3);
        uVar22 = (*pcVar11)();
        return (bool)uVar22;
      }
      piVar27 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::Find
                          ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            *)param_1,(int)uVar7);
      iVar34 = -1;
      if (piVar27 != (int *)0x0) {
        iVar34 = *piVar27;
      }
      local_248 = (undefined1  [4])FDynamicMesh3::FindEdge(this_00,iVar34,iVar24);
      if (*(int *)(*(longlong *)
                    ((local_238->Result->Edges).Blocks.AllocatorInstance.Data +
                    (ulonglong)((uint)local_248 >> 9) * 8) + 0xc +
                  (ulonglong)((uint)local_248 & 0x1ff) * 0x10) != -1) {
        iVar24 = 0x424;
        pcVar49 = "Result->IsBoundaryEdge(MappedEID)";
        paVar30 = &bGEnsureHasExecuted<_3779031055328082908>;
        goto LAB_1435bb04e;
      }
      if (((local_258.AllocatorInstance.Data <= (FMeshBoolean *)local_248) &&
          ((FScriptContainerElement *)local_248 <
           local_258.AllocatorInstance.Data + (longlong)local_258.ArrayMax * 4)) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar21)) {
        pcVar11 = (code *)swi(3);
        uVar22 = (*pcVar11)();
        return (bool)uVar22;
      }
      iVar24 = local_258.ArrayNum;
      if (local_258.ArrayNum == local_258.ArrayMax) {
        iVar24 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x404,&local_258.AllocatorInstance,&local_258.ArrayMax);
      }
      local_258.ArrayNum = iVar24 + 1;
      *(undefined1 (*) [4])(local_258.AllocatorInstance.Data + (longlong)iVar24 * 4) = local_248;
    }
    pFVar42 = pFVar42 + 4;
  }
  puVar43 = *(uint **)local_210._16_8_;
  iVar26 = *(int *)(local_210._16_8_ + 8);
  local_230._0_8_ = (ulonglong *)0x0;
  local_230._8_8_ = 0.0;
  puVar2 = puVar43 + iVar26;
  local_278.Data = (FScriptContainerElement *)0x0;
  local_270 = 0;
  iStack_26c = 0;
  while( true ) {
    puVar32 = (uint *)0x0;
    if (*(int *)(local_210._16_8_ + 8) != iVar26) {
      local_267 = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (&local_267);
    }
    dVar18 = _UNK_15060db28;
    dVar17 = ___xmm_ffffffffffffffffffffffffffffffff;
    if (puVar43 == puVar2) break;
    local_260[0] = *puVar43;
    lVar33 = *(longlong *)
              ((pFVar19->Result->Edges).Blocks.AllocatorInstance.Data +
              (ulonglong)(local_260[0] >> 9) * 8);
    if (*(int *)(lVar33 + 0xc + (ulonglong)(local_260[0] & 0x1ff) * 0x10) == -1) {
      ppFVar8 = *(FDynamicMesh3 ***)(lVar33 + (ulonglong)(local_260[0] & 0x1ff) * 0x10);
      puVar31 = puVar32;
      puVar45 = puVar32;
      if (*(int *)(local_1dc._4_8_ + 8) != *(int *)(local_1dc._4_8_ + 0x34)) {
        plVar36 = (longlong *)(local_1dc._4_8_ + 0x38);
        if (*(longlong **)(local_1dc._4_8_ + 0x40) != (longlong *)0x0) {
          plVar36 = *(longlong **)(local_1dc._4_8_ + 0x40);
        }
        iVar24 = *(int *)((longlong)plVar36 +
                         ((ulonglong)(*(int *)(local_1dc._4_8_ + 0x48) - 1) &
                         (ulonglong)ppFVar8 & 0xffffffff) * 4);
        if (iVar24 != -1) {
          do {
            piVar27 = (int *)((longlong)iVar24 * 0x10 + *(longlong *)local_1dc._4_8_);
            if (*piVar27 == (int)ppFVar8) {
              puVar45 = (uint *)(piVar27 + 1);
              if (piVar27 == (int *)0x0) {
                puVar45 = puVar32;
              }
              goto LAB_1435bb197;
            }
            iVar24 = piVar27[2];
          } while (iVar24 != -1);
        }
      }
      if (*(int *)(local_1dc._4_8_ + 8) != *(int *)(local_1dc._4_8_ + 0x34)) {
LAB_1435bb197:
        local_210._4_4_ = (undefined4)((ulonglong)ppFVar8 >> 0x20);
        plVar36 = (longlong *)(local_1dc._4_8_ + 0x38);
        if (*(longlong **)(local_1dc._4_8_ + 0x40) != (longlong *)0x0) {
          plVar36 = *(longlong **)(local_1dc._4_8_ + 0x40);
        }
        uVar35 = *(uint *)((longlong)plVar36 +
                          (ulonglong)(*(int *)(local_1dc._4_8_ + 0x48) - 1U & local_210._4_4_) * 4);
        if (uVar35 != 0xffffffff) {
          do {
            puVar31 = (uint *)((longlong)(int)uVar35 * 0x10 + *(longlong *)local_1dc._4_8_);
            if (*puVar31 == local_210._4_4_) break;
            uVar35 = puVar31[2];
            puVar31 = puVar32;
          } while (uVar35 != 0xffffffff);
        }
      }
      puVar39 = puVar31 + 1;
      if (puVar31 == (uint *)0x0) {
        puVar39 = puVar32;
      }
      local_210._0_8_ = ppFVar8;
      if ((puVar45 == (uint *)0x0) || (puVar39 == (uint *)0x0)) {
LAB_1435bb3be:
        if (((local_278.Data <= (FScriptContainerElement *)local_260) &&
            ((FScriptContainerElement *)local_260 < local_278.Data + (longlong)iStack_26c * 4)) &&
           (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar21)) {
          pcVar11 = (code *)swi(3);
          uVar22 = (*pcVar11)();
          return (bool)uVar22;
        }
        if (local_270 == iStack_26c) {
          local_270 = Core::Private::
                      ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                (0x404,&local_278,&iStack_26c);
        }
        lVar33 = (longlong)local_270;
        local_270 = local_270 + 1;
        *(uint *)(local_278.Data + lVar33 * 4) = local_260[0];
        goto LAB_1435bb46a;
      }
      uVar35 = *puVar45;
      if (((param_1->VertexMap).bWantForward == false) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("bWantForward",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                              ,0x9a,L""), bVar21)) {
        pcVar11 = (code *)swi(3);
        uVar22 = (*pcVar11)();
        return (bool)uVar22;
      }
      piVar27 = TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>::Find
                          ((TMapBase<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_>
                            *)param_1,uVar35);
      iVar24 = -1;
      if (piVar27 != (int *)0x0) {
        iVar24 = *piVar27;
      }
      uVar35 = *puVar39;
      if (((param_1->VertexMap).bWantForward == false) &&
         (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                             ("bWantForward",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\GeometryTypes.h"
                              ,0x9a,L""), bVar21)) {
        pcVar11 = (code *)swi(3);
        uVar22 = (*pcVar11)();
        return (bool)uVar22;
      }
      if (*(int *)&(param_1->VertexMap).ForwardMap.field_0x8 !=
          *(int *)&(param_1->VertexMap).ForwardMap.field_0x34) {
        puVar9 = *(undefined1 **)&(param_1->VertexMap).ForwardMap.field_0x40;
        puVar37 = &(param_1->VertexMap).ForwardMap.field_0x38;
        if (puVar9 != (undefined1 *)0x0) {
          puVar37 = puVar9;
        }
        uVar25 = *(uint *)(puVar37 +
                          (ulonglong)
                          (*(int *)&(param_1->VertexMap).ForwardMap.field_0x48 - 1U & uVar35) * 4);
        if (uVar25 != 0xffffffff) {
          do {
            puVar32 = (uint *)((longlong)(int)uVar25 * 0x10 +
                              *(longlong *)&(param_1->VertexMap).ForwardMap);
            if (*puVar32 == uVar35) {
              puVar31 = puVar32 + 1;
              if (puVar32 == (uint *)0x0) {
                puVar31 = (uint *)0x0;
              }
              if (puVar31 != (uint *)0x0) {
                uVar35 = *puVar31;
                goto LAB_1435bb2c0;
              }
              break;
            }
            uVar25 = puVar32[2];
          } while (uVar25 != 0xffffffff);
        }
      }
      uVar35 = 0xffffffff;
LAB_1435bb2c0:
      iVar24 = FDynamicMesh3::FindEdge(pFVar19->Result,iVar24,uVar35);
      if (iVar24 == -1) goto LAB_1435bb3be;
      local_230._16_4_ = local_260[0];
      local_230._20_4_ = iVar24;
      if ((((ulonglong)local_230._0_8_ <= local_230 + 0x10) &&
          (local_230 + 0x10 < (ulonglong *)(local_230._0_8_ + (longlong)(int)local_230._12_4_ * 8)))
         && (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar21)) {
        pcVar11 = (code *)swi(3);
        uVar22 = (*pcVar11)();
        return (bool)uVar22;
      }
      iVar24 = local_230._8_4_;
      if (local_230._8_4_ == local_230._12_4_) {
        iVar24 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,(ForAnyElementType *)local_230,(int *)(local_230 + 0xc));
      }
      local_230._8_4_ = iVar24 + 1;
      puVar43 = puVar43 + 1;
      *(ulonglong *)(local_230._0_8_ + (longlong)iVar24 * 8) =
           CONCAT44(local_230._20_4_,local_230._16_4_);
    }
    else {
      bVar21 = Assert::Private::ExecCheckImplInternal
                         (&bGEnsureHasExecuted<_3779031055328082897>,false,
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshBoolean.cpp"
                          ,0x42f,"Result->IsBoundaryEdge(EID)");
      if (bVar21) {
        pcVar11 = (code *)swi(3);
        uVar22 = (*pcVar11)();
        return (bool)uVar22;
      }
LAB_1435bb46a:
      puVar43 = puVar43 + 1;
    }
  }
  uVar20 = local_230._8_4_;
  pdVar3 = (double *)(local_230._0_8_ + (longlong)(int)local_230._8_4_ * 8);
  pdVar40 = (double *)local_230._0_8_;
  while( true ) {
    if (local_230._8_4_ != uVar20) {
      local_266 = 0;
      `TCheckedPointerIterator<UE::Geometry::FIndex2i,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_266);
    }
    if (pdVar40 == pdVar3) break;
    local_230._24_8_ = *pdVar40;
    pFVar6 = pFVar19->Result;
    uVar35 = (uint)local_230._24_8_;
    if ((-1 < (int)uVar35) &&
       ((int)uVar35 <
        (int)((pFVar6->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar6->EdgeRefCounts).RefCounts.CurBlockUsed))) {
      uVar46 = (local_230._24_8_ & 0xffffffff) >> 9;
      if (((ushort)(*(short *)(*(longlong *)
                                ((pFVar6->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                                uVar46 * 8) + (ulonglong)(uVar35 & 0x1ff) * 2) - 1U) < 0xfffe) &&
         (*(int *)(*(longlong *)((pFVar6->Edges).Blocks.AllocatorInstance.Data + uVar46 * 8) + 0xc +
                  (ulonglong)(uVar35 & 0x1ff) * 0x10) == -1)) {
        local_e8[0]._s_0.Y = 0.0;
        local_110 = (void *)0x0;
        local_108 = 0;
        local_f0 = (void *)0x0;
        local_e8[0]._0_4_ = 0;
        local_140._0_1_ = true;
        local_140._1_1_ = true;
        local_140._2_1_ = true;
        local_140._3_1_ = 0xff;
        local_140._4_4_ = -NAN;
        local_138 = dVar17;
        dStack_130 = dVar18;
        local_128 = (FDynamicMesh3 *)0xffffffffffffffff;
        local_104 = 4;
        local_e8[0]._4_4_ = 4;
        iVar26 = (**(code **)(pFVar6->_padding_ + 0x88))
                           (pFVar6,local_230._24_8_,(ulonglong)local_230._24_8_ >> 0x20,local_148);
        if (iVar26 == 0) {
          if (pFVar19->bTrackAllNewEdges != false) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                      (&pFVar19->AllNewEdges,&local_1e0,(bool *)(local_230 + 0x18));
          }
        }
        else {
          if (((local_278.Data <= (FScriptContainerElement *)(local_230 + 0x18)) &&
              ((FScriptContainerElement *)(local_230 + 0x18) <
               local_278.Data + (longlong)iStack_26c * 4)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar11 = (code *)swi(3);
            uVar22 = (*pcVar11)();
            return (bool)uVar22;
          }
          if (local_270 == iStack_26c) {
            local_270 = Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x404,&local_278,&iStack_26c);
          }
          *(undefined4 *)(local_278.Data + (longlong)local_270 * 4) = local_230._24_4_;
          local_270 = local_270 + 1;
        }
        if ((void *)local_f0 != (void *)0x0) {
          FMemory::Free((void *)local_f0);
        }
        if ((void *)local_110 != (void *)0x0) {
          FMemory::Free((void *)local_110);
        }
      }
    }
    pdVar40 = pdVar40 + 1;
  }
  pFVar41 = (FMeshBoolean *)(local_258.AllocatorInstance.Data + (longlong)local_258.ArrayNum * 4);
  FVar44.Data = local_258.AllocatorInstance.Data;
LAB_1435bb6b0:
  do {
    if ((FMeshBoolean *)FVar44.Data == pFVar41) {
LAB_1435bb791:
      TArray<int,TSizedDefaultAllocator<32>_>::SetNum
                (&local_258,
                 (int)((longlong)FVar44.Data - (longlong)local_258.AllocatorInstance.Data >> 2),
                 Default);
      bVar21 = true;
      if (0 < local_270) {
        bVar21 = true;
        iVar26 = local_258.ArrayNum;
        pFVar41 = (FMeshBoolean *)
                  (local_258.AllocatorInstance.Data + (longlong)local_258.ArrayNum * 4);
        dVar12 = pFVar19->SnapTolerance * pFVar19->SnapTolerance;
        FVar44.Data = local_258.AllocatorInstance.Data;
        local_238 = pFVar41;
        while( true ) {
          if (local_258.ArrayNum != iVar26) {
            local_265[0] = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_265);
          }
          iVar24 = local_270;
          if ((FMeshBoolean *)FVar44.Data == pFVar41) break;
          uVar35 = (uint)((FMeshBoolean *)FVar44.Data)->_padding_;
          pFVar6 = pFVar19->Result;
          if ((-1 < (int)uVar35) &&
             ((int)uVar35 <
              (int)((pFVar6->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                   (pFVar6->EdgeRefCounts).RefCounts.CurBlockUsed))) {
            uVar46 = (ulonglong)(uVar35 & 0x1ff);
            if (((ushort)(*(short *)(*(longlong *)
                                      ((pFVar6->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.
                                       Data + (ulonglong)(uVar35 >> 9) * 8) + uVar46 * 2) - 1U) <
                 0xfffe) &&
               (lVar33 = *(longlong *)
                          ((pFVar6->Edges).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar35 >> 9) * 8),
               *(int *)(lVar33 + 0xc + uVar46 * 0x10) == -1)) {
              uVar46 = *(ulonglong *)(lVar33 + uVar46 * 0x10);
              pFVar10 = (pFVar6->Vertices).Blocks.AllocatorInstance.Data;
              uVar28 = (ulonglong)((uint)uVar46 & 0x1ff);
              lVar33 = *(longlong *)(pFVar10 + ((uVar46 & 0xffffffff) >> 9) * 8);
              pdVar3 = (double *)(lVar33 + uVar28 * 0x18);
              dVar13 = *pdVar3;
              dVar14 = pdVar3[1];
              dVar4 = *(double *)(lVar33 + 0x10 + uVar28 * 0x18);
              uVar28 = (ulonglong)((uint)(uVar46 >> 0x20) & 0x1ff);
              lVar33 = *(longlong *)(pFVar10 + (uVar46 >> 0x29) * 8);
              uVar29 = 0;
              pdVar3 = (double *)(lVar33 + uVar28 * 0x18);
              dVar15 = *pdVar3;
              dVar16 = pdVar3[1];
              dVar5 = *(double *)(lVar33 + 0x10 + uVar28 * 0x18);
              pFVar41 = local_238;
              uVar46 = uVar29;
              local_1f8._s_0.X = dVar13;
              local_1f8._s_0.Y = dVar14;
              local_1f8._s_0.Z = dVar4;
              local_1dc._12_8_ = dVar15;
              local_1dc._20_8_ = dVar16;
              local_1c0._s_0.X = dVar5;
              if (0 < local_270) {
                do {
                  uVar38 = (uint)uVar29;
                  uVar25 = 0;
                  if ((int)uVar38 < local_270) {
                    uVar25 = ~uVar38 >> 0x1f;
                  }
                  if ((uVar25 == 0) &&
                     (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar23)) {
                    pcVar11 = (code *)swi(3);
                    uVar22 = (*pcVar11)();
                    return (bool)uVar22;
                  }
                  pFVar6 = pFVar19->Result;
                  local_210._8_4_ = *(undefined4 *)(local_278.Data + uVar46);
                  if ((((int)local_210._8_4_ < 0) ||
                      ((int)((pFVar6->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                            (pFVar6->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)local_210._8_4_)
                      ) || (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                          ((pFVar6->EdgeRefCounts).RefCounts.Blocks.
                                                           AllocatorInstance.Data +
                                                          (ulonglong)((uint)local_210._8_4_ >> 9) *
                                                          8) + (ulonglong)(local_210._8_4_ & 0x1ff)
                                                               * 2) - 1U))) {
LAB_1435bbb76:
                    uVar25 = 0;
                    if ((int)uVar38 < local_270) {
                      uVar25 = ~uVar38 >> 0x1f;
                    }
                    if ((uVar25 == 0) &&
                       (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar23)) {
                      pcVar11 = (code *)swi(3);
                      uVar22 = (*pcVar11)();
                      return (bool)uVar22;
                    }
                    iVar24 = (local_270 - uVar38) + -1;
                    if (1 < iVar24) {
                      iVar24 = 1;
                    }
                    if (iVar24 != 0) {
                      memmove(local_278.Data + (longlong)(int)uVar38 * 4,
                              local_278.Data + (longlong)(local_270 - iVar24) * 4,
                              (longlong)iVar24 << 2);
                    }
                    local_270 = local_270 + -1;
                    uVar38 = uVar38 - 1;
                    uVar46 = uVar46 - 4;
                  }
                  else {
                    lVar33 = *(longlong *)
                              ((pFVar6->Edges).Blocks.AllocatorInstance.Data +
                              (ulonglong)((uint)local_210._8_4_ >> 9) * 8);
                    if (*(int *)(lVar33 + 0xc + (ulonglong)(local_210._8_4_ & 0x1ff) * 0x10) != -1)
                    goto LAB_1435bbb76;
                    uVar28 = *(ulonglong *)(lVar33 + (ulonglong)(local_210._8_4_ & 0x1ff) * 0x10);
                    pFVar10 = (pFVar6->Vertices).Blocks.AllocatorInstance.Data;
                    uVar29 = (ulonglong)((uint)uVar28 & 0x1ff);
                    lVar33 = *(longlong *)(pFVar10 + ((uVar28 & 0xffffffff) >> 9) * 8);
                    pdVar3 = (double *)(lVar33 + uVar29 * 0x18);
                    local_1c0._s_0.X = *(double *)(lVar33 + 0x10 + uVar29 * 0x18);
                    uVar29 = (ulonglong)((uint)(uVar28 >> 0x20) & 0x1ff);
                    lVar33 = *(longlong *)(pFVar10 + (uVar28 >> 0x29) * 8);
                    local_1f8._s_0.Z = *(double *)(lVar33 + 0x10 + uVar29 * 0x18);
                    pdVar40 = (double *)(lVar33 + uVar29 * 0x18);
                    dVar47 = *pdVar3 - dVar13;
                    dVar48 = pdVar3[1] - dVar14;
                    if ((dVar48 * dVar48 + dVar47 * dVar47 +
                         (local_1c0._s_0.X - dVar4) * (local_1c0._s_0.X - dVar4) < dVar12) &&
                       (dVar47 = *pdVar40 - dVar15, dVar48 = pdVar40[1] - dVar16,
                       dVar48 * dVar48 + dVar47 * dVar47 +
                       (local_1f8._s_0.Z - dVar5) * (local_1f8._s_0.Z - dVar5) < dVar12)) {
                      local_150 = 0.0;
                      local_180 = (void *)0x0;
                      local_178 = 0;
                      local_160 = (FProgressCancel *)0x0;
                      local_158._0_1_ = false;
                      local_158._1_3_ = 0;
                      local_1c0._s_0.Z = -NAN;
                      local_1a8._s_0.X = dVar17;
                      local_1a8._s_0.Y = dVar18;
                      local_1a8._s_0.Z = -NAN;
                      local_174 = 4;
                      local_154 = 4;
                      iVar24 = (**(code **)(pFVar6->_padding_ + 0x88))
                                         (pFVar6,local_210._8_4_,uVar35);
                      if (iVar24 == 0) {
                        uVar35 = 0;
                        if ((int)uVar38 < local_270) {
                          uVar35 = ~uVar38 >> 0x1f;
                        }
                        if ((uVar35 == 0) &&
                           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar23)) {
                          pcVar11 = (code *)swi(3);
                          uVar22 = (*pcVar11)();
                          return (bool)uVar22;
                        }
                        iVar24 = (local_270 - uVar38) + -1;
                        if (1 < iVar24) {
                          iVar24 = 1;
                        }
                        if (iVar24 != 0) {
                          memmove(local_278.Data + (longlong)(int)uVar38 * 4,
                                  local_278.Data + (longlong)(local_270 - iVar24) * 4,
                                  (longlong)iVar24 << 2);
                        }
                        local_270 = local_270 + -1;
                        if (pFVar19->bTrackAllNewEdges != false) {
                          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::
                          Emplace<int_const_&>
                                    (&pFVar19->AllNewEdges,local_1dc,(bool *)(local_210 + 8));
                        }
                        if (local_160 != (FProgressCancel *)0x0) {
                          FMemory::Free(local_160);
                        }
                        pFVar41 = local_238;
                        if (local_180 != (void *)0x0) {
                          FMemory::Free(local_180);
                          pFVar41 = local_238;
                        }
                        break;
                      }
                      if (local_160 != (FProgressCancel *)0x0) {
                        FMemory::Free(local_160);
                      }
                      if (local_180 != (void *)0x0) {
                        FMemory::Free(local_180);
                      }
                    }
                  }
                  uVar29 = (ulonglong)(uVar38 + 1);
                  uVar46 = uVar46 + 4;
                  pFVar41 = local_238;
                } while ((int)(uVar38 + 1) < local_270);
              }
            }
          }
          FVar44.Data = (FScriptContainerElement *)
                        ((longlong)&((FMeshBoolean *)FVar44.Data)->_padding_ + 4);
        }
        pFVar10 = local_278.Data + (longlong)local_270 * 4;
        FVar44.Data = local_278.Data;
        while( true ) {
          if (local_270 != iVar24) {
            local_263 = 0;
            `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_263);
          }
          if (FVar44.Data == pFVar10) break;
          local_244 = *(uint *)FVar44.Data;
          pFVar6 = pFVar19->Result;
          if ((((-1 < (int)local_244) &&
               ((int)local_244 <
                (int)((pFVar6->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                     (pFVar6->EdgeRefCounts).RefCounts.CurBlockUsed))) &&
              ((ushort)(*(short *)(*(longlong *)
                                    ((pFVar6->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                    + (ulonglong)(local_244 >> 9) * 8) +
                                  (ulonglong)(local_244 & 0x1ff) * 2) - 1U) < 0xfffe)) &&
             (*(int *)(*(longlong *)
                        ((pFVar6->Edges).Blocks.AllocatorInstance.Data +
                        (ulonglong)(local_244 >> 9) * 8) + 0xc +
                      (ulonglong)(local_244 & 0x1ff) * 0x10) == -1)) {
            pTVar1 = &pFVar19->CreatedBoundaryEdges;
            pFVar42 = (pTVar1->AllocatorInstance).Data;
            if (((pFVar42 <= (FScriptContainerElement *)&local_244) &&
                ((FScriptContainerElement *)&local_244 <
                 pFVar42 + (longlong)(pFVar19->CreatedBoundaryEdges).ArrayMax * 4)) &&
               (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                   ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x7a5,
                                    L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                   ), bVar21)) {
              pcVar11 = (code *)swi(3);
              uVar22 = (*pcVar11)();
              return (bool)uVar22;
            }
            iVar26 = (pFVar19->CreatedBoundaryEdges).ArrayNum;
            piVar27 = &(pFVar19->CreatedBoundaryEdges).ArrayMax;
            if (iVar26 == *piVar27) {
              iVar26 = Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x404,&pTVar1->AllocatorInstance,piVar27);
            }
            bVar21 = false;
            (pFVar19->CreatedBoundaryEdges).ArrayNum = iVar26 + 1;
            *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar26 * 4) = local_244;
          }
          FVar44.Data = FVar44.Data + 4;
        }
      }
      iVar26 = local_258.ArrayNum;
      pFVar41 = (FMeshBoolean *)
                (local_258.AllocatorInstance.Data + (longlong)local_258.ArrayNum * 4);
      FVar44.Data = local_258.AllocatorInstance.Data;
      while( true ) {
        if (local_258.ArrayNum != iVar26) {
          local_262[0] = 0;
          `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_262);
        }
        if ((FMeshBoolean *)FVar44.Data == pFVar41) break;
        local_240[0] = (uint)((FMeshBoolean *)FVar44.Data)->_padding_;
        pFVar6 = pFVar19->Result;
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
          pTVar1 = &pFVar19->CreatedBoundaryEdges;
          pFVar10 = (pTVar1->AllocatorInstance).Data;
          if (((pFVar10 <= (FScriptContainerElement *)local_240) &&
              ((FScriptContainerElement *)local_240 <
               pFVar10 + (longlong)(pFVar19->CreatedBoundaryEdges).ArrayMax * 4)) &&
             (bVar21 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar21)) {
            pcVar11 = (code *)swi(3);
            uVar22 = (*pcVar11)();
            return (bool)uVar22;
          }
          iVar24 = (pFVar19->CreatedBoundaryEdges).ArrayNum;
          piVar27 = &(pFVar19->CreatedBoundaryEdges).ArrayMax;
          if (iVar24 == *piVar27) {
            iVar24 = Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x404,&pTVar1->AllocatorInstance,piVar27);
          }
          bVar21 = false;
          (pFVar19->CreatedBoundaryEdges).ArrayNum = iVar24 + 1;
          *(uint *)((pTVar1->AllocatorInstance).Data + (longlong)iVar24 * 4) = local_240[0];
        }
        FVar44.Data = (FScriptContainerElement *)
                      ((longlong)&((FMeshBoolean *)FVar44.Data)->_padding_ + 4);
      }
      if (local_278.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_278.Data);
      }
      if ((ulonglong *)local_230._0_8_ != (ulonglong *)0x0) {
        FMemory::Free((void *)local_230._0_8_);
      }
      if ((FMeshBoolean *)local_258.AllocatorInstance.Data != (FMeshBoolean *)0x0) {
        FMemory::Free(local_258.AllocatorInstance.Data);
      }
      return bVar21;
    }
    uVar35 = (uint)((FMeshBoolean *)FVar44.Data)->_padding_;
    pFVar6 = pFVar19->Result;
    if (((int)uVar35 < 0) ||
       ((int)((pFVar6->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar6->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)uVar35)) {
LAB_1435bb720:
      do {
        do {
          pFVar41 = (FMeshBoolean *)
                    ((longlong)&pFVar41[-1].TrackPerTriangleSourceMesh.field0_0x0 + 0xc);
          if ((FMeshBoolean *)FVar44.Data == pFVar41) goto LAB_1435bb791;
          uVar35 = (uint)pFVar41->_padding_;
        } while (((int)uVar35 < 0) ||
                ((int)((pFVar6->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
                      (pFVar6->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)uVar35));
      } while ((0xfffd < (ushort)(*(short *)(*(longlong *)
                                              ((pFVar6->EdgeRefCounts).RefCounts.Blocks.
                                               AllocatorInstance.Data + (ulonglong)(uVar35 >> 9) * 8
                                              ) + (ulonglong)(uVar35 & 0x1ff) * 2) - 1U)) ||
              (*(int *)(*(longlong *)
                         ((pFVar6->Edges).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar35 >> 9) * 8) + 0xc + (ulonglong)(uVar35 & 0x1ff) * 0x10)
               != -1));
      *(uint *)&((FMeshBoolean *)FVar44.Data)->_padding_ = uVar35;
      FVar44.Data = (FScriptContainerElement *)
                    ((longlong)&((FMeshBoolean *)FVar44.Data)->_padding_ + 4);
      goto LAB_1435bb6b0;
    }
    if ((0xfffd < (ushort)(*(short *)(*(longlong *)
                                       ((pFVar6->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.
                                        Data + (ulonglong)(uVar35 >> 9) * 8) +
                                     (ulonglong)(uVar35 & 0x1ff) * 2) - 1U)) ||
       (*(int *)(*(longlong *)
                  ((pFVar6->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar35 >> 9) * 8) +
                 0xc + (ulonglong)(uVar35 & 0x1ff) * 0x10) != -1)) goto LAB_1435bb720;
    FVar44.Data = (FScriptContainerElement *)
                  ((longlong)&((FMeshBoolean *)FVar44.Data)->_padding_ + 4);
  } while( true );
}

// SimplifyAlongNewEdges @ 1435c5b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
UE::Geometry::FMeshBoolean::SimplifyAlongNewEdges
          (FMeshBoolean *this,int param_1,FDynamicMesh3 **param_2,
          TArray<int,TSizedDefaultAllocator<32>_> *param_3,
          TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *param_4)

{
  double *pdVar1;
  undefined1 auVar2 [16];
  int iVar3;
  FDynamicMesh3 *pFVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  uint uVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  longlong lVar19;
  bool bVar20;
  int iVar21;
  int iVar22;
  uint *puVar23;
  FIndex2i FVar24;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar25;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar26;
  ulonglong uVar27;
  uint *puVar28;
  undefined8 *puVar29;
  ForElementType<FSetElementId> FVar30;
  ForElementType<FSetElementId> FVar31;
  FScriptContainerElement *pFVar32;
  char cVar33;
  int *piVar34;
  char cVar35;
  uint uVar36;
  longlong lVar37;
  uint *puVar38;
  ulonglong uVar39;
  int iVar40;
  int iVar41;
  FScriptContainerElement *pFVar42;
  double dVar43;
  double dVar44;
  undefined1 auStackY_638 [32];
  char local_608;
  char local_607;
  char local_606;
  undefined1 local_605;
  undefined1 local_604;
  char local_603 [3];
  int local_600;
  char local_5fc [4];
  undefined2 local_5f8;
  FScriptContainerElement *local_5f0;
  FDynamicMesh3 **local_5e8;
  int local_5e0;
  undefined1 local_5dc [4];
  undefined1 local_5d8 [8];
  undefined1 local_5d0 [8];
  undefined1 local_5c8 [8];
  undefined1 local_5c0 [8];
  undefined1 local_5b8 [8];
  TArray<int,TSizedDefaultAllocator<32>_> *local_5b0;
  int local_5a8;
  undefined8 local_5a0;
  uint *local_598;
  longlong local_590;
  uint local_588;
  uint local_584;
  longlong local_580;
  int local_578 [2];
  int local_570 [2];
  int local_568;
  uint local_564;
  int local_560;
  int local_55c;
  undefined4 local_558 [2];
  undefined4 local_550 [2];
  float local_548 [2];
  undefined4 local_540;
  int local_53c;
  uint local_538;
  int local_534;
  float local_530 [2];
  undefined8 local_528;
  uint local_520 [2];
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *local_518;
  undefined8 local_510;
  undefined4 local_508;
  double local_500;
  FScriptContainerElement *local_4f8;
  code *local_4f0;
  FDynamicMesh3 **local_4e8;
  code *local_4e0;
  FDynamicMesh3 **local_4d8;
  undefined1 local_4d0 [16];
  FDynamicMesh3 *local_4c0;
  double local_4b8;
  double *local_4b0;
  undefined1 *local_4a8;
  char *local_4a0;
  FDynamicMesh3 *local_498;
  double local_490;
  double *local_488;
  undefined1 *local_480;
  char *local_478;
  double local_470;
  double local_468;
  double dStack_460;
  undefined4 local_458;
  int local_454;
  int local_450;
  int local_44c;
  double local_448;
  ulonglong local_440;
  int *local_438 [2];
  undefined8 local_428;
  uint local_41c;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408 [3];
  undefined8 local_3f0;
  uint local_3e4;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0 [2];
  code *local_3c0;
  char **local_3b8;
  code *local_3b0;
  FDynamicMesh3 **local_3a8;
  code *local_3a0;
  FDynamicMesh3 **local_398;
  code *local_390;
  char **local_388;
  FDynamicMesh3 *local_380;
  char *local_378;
  double local_370;
  double local_368;
  double dStack_360;
  double local_358;
  double local_350;
  double dStack_348;
  double local_340;
  FDynamicMesh3 *local_338;
  code **local_330;
  int local_328;
  char *local_320;
  undefined4 *local_318;
  int *local_310;
  FDynamicMesh3 ***local_308;
  FDynamicMesh3 *local_300;
  char *local_2f8;
  double *local_2f0;
  int local_2e8;
  undefined4 local_2e4;
  double *local_2e0;
  double local_2d8;
  double *local_2d0;
  undefined1 local_2c8;
  char *local_2c0;
  uint *local_2b8;
  FDynamicMesh3 *local_2b0;
  undefined1 *local_2a8;
  int *local_2a0;
  int *local_298;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *local_290;
  undefined4 *local_288;
  int *local_280;
  double *local_278;
  double *local_270;
  double *local_268;
  double *local_260;
  undefined1 *local_258;
  undefined4 *local_250;
  float *local_248;
  undefined1 *local_240;
  undefined1 *local_238;
  float *local_230;
  undefined1 *local_228;
  undefined1 local_220 [8];
  undefined1 local_218 [8];
  TArray<int,TSizedDefaultAllocator<32>_> local_210;
  TArray<int,TSizedDefaultAllocator<32>_> local_200;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_1d8;
  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> local_188;
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
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_638;
  local_518 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> *)
              param_4;
  local_5e8 = param_2;
  local_5e0 = param_1;
  local_5b0 = param_3;
  dVar8 = cos(this->SimplificationAngleTolerance * __real_3f91df46a2529d39);
  local_1d8.Elements._44_4_ = 0x80;
  local_1d8.Elements._0_8_ = 0;
  local_1d8.Elements._8_8_ = 0;
  local_1d8.Elements._32_8_ = 0;
  local_1d8.Elements._40_4_ = 0;
  local_1d8.Elements._48_4_ = 0xffffffff;
  local_1d8.Elements._52_4_ = 0;
  local_1d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_1d8.HashSize = 0;
  local_188.Elements._0_8_ = 0;
  local_188.Elements._8_8_ = 0;
  local_188.Elements._32_8_ = 0;
  local_188.Elements._40_4_ = 0;
  local_188.Elements._44_4_ = 0x80;
  local_188.Elements._48_4_ = 0xffffffff;
  local_188.Elements._52_4_ = 0;
  local_188.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_188.HashSize = 0;
  if (0 < param_1) {
    local_598 = (uint *)0x0;
    piVar34 = &local_1d8.HashSize;
    pTVar25 = param_3;
    do {
      puVar38 = local_598;
      iVar40 = pTVar25->ArrayNum;
      pFVar32 = (pTVar25->AllocatorInstance).Data;
      if ((iVar40 < 0) &&
         (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar20)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar36 = iVar40 + (piVar34[-0x10] - piVar34[-5]);
      if ((uint)(piVar34[-0x10] - piVar34[-5]) < uVar36) {
        if ((int)uVar36 < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidSetNum((longlong)(int)uVar36);
        }
        TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<12,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)(piVar34 + -0x12),uVar36);
        if (uVar36 < 4) {
          iVar21 = 1;
        }
        else {
          uVar27 = (ulonglong)((uVar36 >> 1) + 7) * 2 + 1;
          lVar6 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          local_458 = (int)lVar6;
          iVar21 = 1 << ((byte)lVar6 & 0x1f);
        }
        if ((*piVar34 == 0) || (puVar38 = local_598, *piVar34 < iVar21)) {
          *piVar34 = iVar21;
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(piVar34 + -0x12));
          puVar38 = local_598;
        }
      }
      pFVar42 = pFVar32 + (longlong)iVar40 * 4;
      param_1 = local_5e0;
      param_3 = local_5b0;
      param_4 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                local_518;
      for (; local_5e0 = param_1, local_5b0 = param_3,
          local_518 = (TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                       *)param_4, pFVar32 != pFVar42; pFVar32 = pFVar32 + 4) {
        TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                  ((TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator> *)(piVar34 + -0x12),
                   &local_44c,(bool *)pFVar32);
        param_1 = local_5e0;
        param_3 = local_5b0;
        param_4 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)
                  local_518;
      }
      piVar34 = piVar34 + 0x14;
      local_598 = (uint *)((longlong)puVar38 + 1);
      pTVar25 = pTVar25 + 1;
    } while ((longlong)puVar38 + 1 < (longlong)param_1);
  }
  dVar18 = __real_3fe279a74590331d;
  dVar17 = __real_7fefffffffffffff;
  dVar16 = __real_4000000000000000;
  fVar15 = __real_3c8efa35;
  uVar14 = _UNK_15060db28;
  uVar13 = ___xmm_ffffffffffffffffffffffffffffffff;
  dVar12 = __real_3ff0000000000000;
  iVar40 = 0;
  local_600 = 0;
  local_560 = 0;
  do {
    uVar27 = (ulonglong)param_3->ArrayNum;
    pFVar42 = (param_3->AllocatorInstance).Data;
    local_534 = iVar40;
    local_538 = param_3->ArrayNum;
    pFVar32 = pFVar42 + uVar27 * 4;
    local_5f0 = pFVar32;
LAB_1435c5db7:
    local_4f8 = pFVar42;
    if (param_3->ArrayNum != (int)uVar27) {
      local_5dc[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_5dc);
    }
    if (pFVar42 == pFVar32) goto LAB_1435c6e4f;
    local_564 = *(uint *)pFVar42;
    pFVar4 = *local_5e8;
    if ((((int)local_564 < 0) ||
        ((int)((pFVar4->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
              (pFVar4->EdgeRefCounts).RefCounts.CurBlockUsed) <= (int)local_564)) ||
       (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((pFVar4->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.
                                       Data + (ulonglong)(local_564 >> 9) * 8) +
                                    (ulonglong)(local_564 & 0x1ff) * 2) - 1U))) goto LAB_1435c6e3b;
    if ((1 < (pFVar4->TriangleRefCounts).UsedCount) &&
       ((param_1 != 2 || (1 < (local_5e8[1]->TriangleRefCounts).UsedCount)))) {
      local_5a0 = 0xffffffffffffffff;
      iVar21 = -1;
      iVar22 = -1;
      auVar2 = *(undefined1 (*) [16])
                (*(longlong *)
                  ((pFVar4->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(local_564 >> 9) * 8)
                + (ulonglong)(local_564 & 0x1ff) * 0x10);
      local_4d0 = auVar2;
      if (param_1 == 2) {
        iVar21 = *(int *)&(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                             *)param_4)->Elements).field_0x8;
        iVar22 = *(int *)&(((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                             *)param_4)->Elements).field_0x34;
        puVar38 = (uint *)0x0;
        do {
          pFVar32 = local_5f0;
          iVar40 = local_600;
          if (iVar21 == iVar22) goto LAB_1435c6e3b;
          FVar31 = (((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)param_4)->Hash).SecondaryData;
          FVar30 = (ForElementType<FSetElementId>)
                   &((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                      *)param_4)->Hash;
          if (FVar31 != (ForElementType<FSetElementId>)0x0) {
            FVar30 = FVar31;
          }
          uVar36 = *(uint *)((longlong)FVar30 +
                            (ulonglong)
                            (((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                               *)param_4)->HashSize - 1U & *(uint *)(local_4d0 + (longlong)puVar38))
                            * 4);
          if (uVar36 == 0xffffffff) goto LAB_1435c6e3b;
          while (puVar28 = (uint *)((longlong)(int)uVar36 * 0x10 +
                                   *(longlong *)
                                    &((TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>
                                       *)param_4)->Elements),
                *puVar28 != *(uint *)(local_4d0 + (longlong)puVar38)) {
            uVar36 = puVar28[2];
            if (uVar36 == 0xffffffff) goto LAB_1435c6e3b;
          }
          puVar23 = puVar28 + 1;
          if (puVar28 == (uint *)0x0) {
            puVar23 = (uint *)0x0;
          }
          if (puVar23 == (uint *)0x0) goto LAB_1435c6e3b;
          *(uint *)((longlong)&local_5a0 + (longlong)puVar38) = *puVar23;
          puVar38 = puVar38 + 1;
        } while ((longlong)puVar38 < 8);
        iVar22 = local_5a0._4_4_;
        iVar21 = (int)local_5a0;
        local_584 = FDynamicMesh3::FindEdge(local_5e8[1],(int)local_5a0,local_5a0._4_4_);
        pFVar32 = local_5f0;
        iVar40 = local_600;
        if (local_584 == 0xffffffff) goto LAB_1435c6e3b;
      }
      else {
        local_584 = 0xffffffff;
      }
      local_138[0] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      local_138[1] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      cVar33 = '\0';
      local_138[3] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_118 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      cVar35 = '\0';
      local_5f8 = 0;
      local_108 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_100 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_f0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      dStack_e8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      local_605 = 0;
      local_138[2] = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_110 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_f8 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_e0 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      local_4c0 = *local_5e8;
      local_4b0 = local_138;
      local_4a8 = &local_605;
      local_4a0 = &local_608;
      local_4e8 = &local_4c0;
      local_608 = '\x01';
      local_4f0 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::IsFlat'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_4b8 = dVar8;
      FDynamicMesh3::EnumerateVertexTriangles
                (local_4c0,auVar2._0_4_,(TFunctionRef<void___cdecl(int)> *)&local_4f0);
      if (local_608 != '\0') {
        if (iVar21 == -1) {
LAB_1435c608e:
          cVar35 = '\x01';
        }
        else {
          local_604 = 0;
          local_607 = '\x01';
          local_498 = local_5e8[1];
          local_488 = local_138 + 3;
          local_480 = &local_604;
          local_478 = &local_607;
          local_4d8 = &local_498;
          local_4e0 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::IsFlat'::__l2::<lambda_1>,void,int>
                      ::Call;
          local_490 = dVar8;
          FDynamicMesh3::EnumerateVertexTriangles
                    (local_498,iVar21,(TFunctionRef<void___cdecl(int)> *)&local_4e0);
          if (local_607 != '\0') goto LAB_1435c608e;
        }
        local_5f8 = CONCAT11(local_5f8._1_1_,cVar35);
      }
      local_4c0 = *local_5e8;
      local_4b0 = &local_108;
      local_4a8 = &local_605;
      local_4a0 = &local_608;
      local_4e8 = &local_4c0;
      local_605 = 0;
      local_608 = '\x01';
      local_4f0 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::IsFlat'::__l2::<lambda_1>,void,int>
                  ::Call;
      local_4b8 = dVar8;
      FDynamicMesh3::EnumerateVertexTriangles
                (local_4c0,auVar2._4_4_,(TFunctionRef<void___cdecl(int)> *)&local_4f0);
      if (local_608 != '\0') {
        if (iVar22 == -1) {
LAB_1435c6175:
          cVar33 = '\x01';
        }
        else {
          local_604 = 0;
          local_607 = '\x01';
          local_498 = local_5e8[1];
          local_488 = &local_f0;
          local_480 = &local_604;
          local_478 = &local_607;
          local_4d8 = &local_498;
          local_4e0 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::IsFlat'::__l2::<lambda_1>,void,int>
                      ::Call;
          local_490 = dVar8;
          FDynamicMesh3::EnumerateVertexTriangles
                    (local_498,iVar22,(TFunctionRef<void___cdecl(int)> *)&local_4e0);
          if (local_607 != '\0') goto LAB_1435c6175;
        }
        local_5f8 = CONCAT11(cVar33,(undefined1)local_5f8);
      }
      if (cVar33 != '\0') {
        cVar35 = cVar35 + '\x01';
      }
      pFVar32 = local_5f0;
      param_3 = local_5b0;
      iVar40 = local_600;
      if (cVar35 != '\0') {
        local_590 = 1;
        local_5a8 = 0;
        local_598 = (uint *)(local_4d0 + 4);
        local_580 = 0;
        local_588 = 1;
        do {
          uVar27 = 0;
          uVar36 = local_588;
          if (*(char *)((longlong)&local_5f8 + local_580) != '\0') {
            uVar36 = *(uint *)(local_4d0 + local_580 * 4);
            local_440 = (ulonglong)uVar36;
            lVar6 = *(longlong *)
                     (((*local_5e8)->Vertices).Blocks.AllocatorInstance.Data +
                     (ulonglong)(uVar36 >> 9) * 8);
            pdVar1 = (double *)(lVar6 + (ulonglong)(uVar36 & 0x1ff) * 0x18);
            local_368 = *pdVar1;
            dStack_360 = pdVar1[1];
            local_358 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar36 & 0x1ff) * 0x18);
            uVar39 = (ulonglong)(*local_598 & 0x1ff);
            lVar6 = *(longlong *)
                     (((*local_5e8)->Vertices).Blocks.AllocatorInstance.Data +
                     (ulonglong)(*local_598 >> 9) * 8);
            pdVar1 = (double *)(lVar6 + uVar39 * 0x18);
            local_350 = *pdVar1;
            dStack_348 = pdVar1[1];
            dVar44 = local_350 - local_368;
            local_340 = *(double *)(lVar6 + 0x10 + uVar39 * 0x18);
            dVar10 = dStack_348 - dStack_360;
            dVar43 = local_340 - local_358;
            dVar9 = SQRT(dVar10 * dVar10 + dVar44 * dVar44 + dVar43 * dVar43);
            if (dVar9 <= 0.0) {
              local_470 = 0.0;
              local_468 = 0.0;
              dStack_460 = 0.0;
              pFVar32 = local_5f0;
              param_3 = local_5b0;
              param_1 = local_5e0;
              iVar40 = local_600;
              if ((this->bCollapseDegenerateEdgesOnCut != false) &&
                 (bVar20 = Assert::Private::ExecCheckImplInternal
                                     (&bGEnsureHasExecuted<_3779031055328083070>,false,
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshBoolean.cpp"
                                      ,0x382,"!bCollapseDegenerateEdgesOnCut"), pFVar32 = local_5f0,
                 param_3 = local_5b0, param_1 = local_5e0, iVar40 = local_600, bVar20)) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
              break;
            }
            dVar9 = dVar12 / dVar9;
            local_470 = dVar44 * dVar9;
            local_468 = dVar10 * dVar9;
            dStack_460 = dVar43 * dVar9;
            uVar39 = uVar27;
            while( true ) {
              lVar19 = local_580;
              uVar36 = local_588;
              lVar6 = local_590;
              param_1 = local_5e0;
              iVar40 = (int)uVar27;
              if (local_5e0 <= iVar40) {
                local_603[0] = '\x01';
                if (local_5e0 != 2) goto LAB_1435c6876;
                local_568 = *(int *)((longlong)&local_5a0 + local_590 * 4);
                iVar40 = *(int *)((longlong)&local_5a0 + local_580 * 4);
                uVar36 = FDynamicMesh3::FindEdge(local_5e8[1],iVar40,local_568);
                pFVar4 = local_5e8[1];
                lVar37 = *(longlong *)
                          ((pFVar4->Edges).Blocks.AllocatorInstance.Data +
                          (ulonglong)(uVar36 >> 9) * 8);
                puVar29 = (undefined8 *)(lVar37 + (ulonglong)(uVar36 & 0x1ff) * 0x10);
                uVar27 = *(ulonglong *)(lVar37 + 8 + (ulonglong)(uVar36 & 0x1ff) * 0x10);
                local_1f0 = *puVar29;
                uStack_1e8 = puVar29[1];
                uVar36 = (uint)uVar27;
                if (uVar36 != 0xffffffff) {
                  iVar22 = 1;
                  uVar39 = (ulonglong)(uVar36 & 0x1ff);
                  lVar37 = *(longlong *)
                            ((pFVar4->Triangles).Blocks.AllocatorInstance.Data +
                            ((uVar27 & 0xffffffff) >> 9) * 8);
                  local_508 = *(undefined4 *)(lVar37 + 8 + uVar39 * 0xc);
                  iVar21 = 0;
                  local_510 = *(undefined8 *)(lVar37 + uVar39 * 0xc);
                  lVar37 = 0;
                  goto LAB_1435c6780;
                }
                local_603[0] = '\0';
                pFVar32 = local_5f0;
                param_3 = local_5b0;
                iVar40 = local_600;
                goto LAB_1435c6e3b;
              }
              puVar29 = &local_5a0;
              uVar11 = local_584;
              if (iVar40 == 0) {
                puVar29 = (undefined8 *)local_4d0;
                uVar11 = local_564;
              }
              iVar21 = *(int *)((longlong)puVar29 + (longlong)local_5a8 * 4);
              local_2e4 = *(undefined4 *)((longlong)puVar29 + (longlong)(int)local_588 * 4);
              local_528 = CONCAT44(local_528._4_4_,local_2e4);
              dVar9 = this->TryToImproveTriQualityThreshold;
              local_606 = '\0';
              pFVar4 = *(FDynamicMesh3 **)((longlong)local_5e8 + uVar39);
              local_2f8 = &local_606;
              local_2f0 = &local_350;
              local_2c8 = 0;
              local_500 = dVar17;
              local_2e0 = local_138 + ((longlong)iVar40 + (longlong)local_5a8 * 2) * 3;
              local_2d0 = &local_500;
              local_3a8 = &local_300;
              local_3b0 = Core::Private::Function::
                          TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::CollapseWouldHurtTriangleQuality'::__l2::<lambda_1>,void,int>
                          ::Call;
              local_300 = pFVar4;
              local_2e8 = iVar21;
              local_2d8 = dVar9;
              FDynamicMesh3::EnumerateVertexTriangles
                        (pFVar4,iVar21,(TFunctionRef<void___cdecl(int)> *)&local_3b0);
              if (local_606 != '\0') break;
              if (local_500 * dVar16 * dVar18 < dVar9) {
                local_378 = &local_606;
                local_370 = local_500;
                local_398 = &local_380;
                local_606 = '\x01';
                local_3a0 = Core::Private::Function::
                            TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::CollapseWouldHurtTriangleQuality'::__l5::<lambda_2>,void,int>
                            ::Call;
                local_380 = pFVar4;
                FDynamicMesh3::EnumerateVertexTriangles
                          (pFVar4,iVar21,(TFunctionRef<void___cdecl(int)> *)&local_3a0);
                if (local_606 != '\0') break;
              }
              local_548[0] = cosf(this->NormalDistortTolerance * fVar15);
              local_5d0[0] = this->bPreserveVertexNormals;
              local_5b8[0] = this->bPreserveOverlayUVs;
              local_5c0[0] = this->bPreserveVertexUVs;
              if ((this->PreserveUVsOnlyForMesh == -1) || (iVar40 == this->PreserveUVsOnlyForMesh))
              {
                local_5c8[0] = 1;
              }
              else {
                local_5c8[0] = 0;
              }
              local_5d8[0] = this->bPreserveTriangleGroups;
              pFVar4 = *(FDynamicMesh3 **)((longlong)local_5e8 + uVar39);
              local_550[0] = (undefined4)local_528;
              local_5fc[0] = '\0';
              local_558[0] = 0xffffffff;
              local_530[0] = this->UVDistortTolerance * this->UVDistortTolerance;
              uVar5 = *(undefined8 *)
                       (*(longlong *)
                         ((pFVar4->Edges).Blocks.AllocatorInstance.Data +
                         (ulonglong)(uVar11 >> 9) * 8) + 8 + (ulonglong)(uVar11 & 0x1ff) * 0x10);
              local_570[0] = iVar21;
              local_528 = uVar5;
              local_520[0] = uVar11;
              local_448 = dVar8;
              local_55c = FDynamicMesh3::GetTriangleGroup(pFVar4,(int)uVar5);
              local_578[0] = -1;
              if ((int)((ulonglong)uVar5 >> 0x20) != -1) {
                local_578[0] = FDynamicMesh3::GetTriangleGroup(pFVar4,local_528._4_4_);
              }
              local_2c0 = local_5fc;
              local_2b8 = local_520;
              local_2a8 = local_5d8;
              local_2a0 = &local_55c;
              local_298 = local_578;
              local_290 = &local_1d8 + iVar40;
              local_288 = local_558;
              local_280 = local_570;
              local_278 = &local_368;
              local_270 = &local_470;
              local_268 = &local_448;
              local_260 = &local_350;
              local_258 = local_5d0;
              local_250 = local_550;
              local_248 = local_548;
              local_240 = local_5c8;
              local_238 = local_5c0;
              local_230 = local_530;
              local_228 = local_5b8;
              local_388 = &local_2c0;
              local_390 = Core::Private::Function::
                          TFunctionRefCaller<`UE::Geometry::FLocalPlanarSimplify::CollapseWouldChangeShapeOrUVs'::__l2::<lambda_1>,void,int>
                          ::Call;
              local_2b0 = pFVar4;
              FSmallListSet::Enumerate<TFunctionRef<void___cdecl(int)>_>
                        (&pFVar4->VertexEdgeLists,local_570[0],
                         (TFunctionRef<void___cdecl(int)> *)&local_390);
              uVar36 = local_588;
              if (local_5fc[0] != '\0') break;
              uVar27 = (ulonglong)(iVar40 + 1);
              uVar39 = uVar39 + 8;
            }
          }
          local_5a8 = local_5a8 + 1;
          local_598 = local_598 + -1;
          local_588 = uVar36 - 1;
          local_580 = local_580 + 1;
          local_590 = local_590 + -1;
          pFVar32 = local_5f0;
          param_3 = local_5b0;
          param_1 = local_5e0;
          iVar40 = local_600;
        } while (uVar36 - 1 < 0x80000000);
      }
      goto LAB_1435c6e3b;
    }
LAB_1435c6e4f:
    pTVar25 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_1d8,&local_210);
    if (param_3 != pTVar25) {
      pFVar32 = (param_3->AllocatorInstance).Data;
      if (pFVar32 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar32);
      }
      (param_3->AllocatorInstance).Data = (pTVar25->AllocatorInstance).Data;
      (pTVar25->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      param_3->ArrayNum = pTVar25->ArrayNum;
      param_3->ArrayMax = pTVar25->ArrayMax;
      pTVar25->ArrayNum = 0;
      pTVar25->ArrayMax = 0;
    }
    if (local_210.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_210.AllocatorInstance.Data);
    }
    pTVar26 = TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Array(&local_188,&local_200);
    pTVar25 = param_3 + 1;
    if (pTVar25 != pTVar26) {
      pFVar32 = (pTVar25->AllocatorInstance).Data;
      if (pFVar32 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar32);
      }
      (pTVar25->AllocatorInstance).Data = (pTVar26->AllocatorInstance).Data;
      (pTVar26->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      param_3[1].ArrayNum = pTVar26->ArrayNum;
      param_3[1].ArrayMax = pTVar26->ArrayMax;
      pTVar26->ArrayNum = 0;
      pTVar26->ArrayMax = 0;
    }
    if (local_200.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_200.AllocatorInstance.Data);
    }
    if ((iVar40 == local_534) || (local_560 = local_560 + 1, 0 < local_560)) {
      local_188.HashSize = 0;
      if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_188.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_188.Elements);
      local_1d8.HashSize = 0;
      if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1d8.Hash.SecondaryData);
      }
      TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<int>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_1d8.Elements);
      return;
    }
  } while( true );
  while( true ) {
    iVar21 = iVar21 + 1;
    iVar22 = iVar22 + 1;
    lVar37 = lVar37 + 1;
    if (2 < lVar37) break;
LAB_1435c6780:
    iVar3 = *(int *)((longlong)&local_510 +
                    (longlong)
                    (iVar22 + (iVar22 / 3 + (iVar22 >> 0x1f) +
                              (int)(((longlong)iVar22 / 3 + ((longlong)iVar22 >> 0x3f) & 0xffffffffU
                                    ) >> 0x1f)) * -3) * 4);
    iVar41 = *(int *)((longlong)&local_510 + lVar37 * 4);
    if (((iVar40 == iVar41) || (bVar20 = iVar40 == iVar3, iVar3 = iVar41, bVar20)) &&
       (local_568 == iVar3)) {
      iVar21 = iVar21 + 2;
      local_540 = *(undefined4 *)
                   ((longlong)&local_510 +
                   (longlong)
                   (iVar21 + (iVar21 / 3 + (iVar21 >> 0x1f) +
                             (int)(((longlong)iVar21 / 3 + ((longlong)iVar21 >> 0x3f) & 0xffffffffU)
                                  >> 0x1f)) * -3) * 4);
      goto LAB_1435c67ee;
    }
  }
  local_540 = 0xffffffff;
LAB_1435c67ee:
  local_320 = local_603;
  local_318 = &local_540;
  local_310 = &local_568;
  local_308 = &local_5e8;
  local_3b8 = &local_320;
  local_3c0 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FMeshBoolean::SimplifyAlongNewEdges'::__l67::<lambda_1>,void,int>
              ::Call;
  local_330 = &local_3c0;
  local_338 = pFVar4;
  local_328 = iVar40;
  FSmallListSet::
  Enumerate<_UE::Geometry::FDynamicMesh3::EnumerateVertexVertices_::__l2::<lambda_1>_>
            (&pFVar4->VertexEdgeLists,iVar40,(<lambda_1> *)&local_338);
  pFVar32 = local_5f0;
  param_3 = local_5b0;
  iVar40 = local_600;
  if (local_603[0] != '\0') {
LAB_1435c6876:
    local_3f0 = 0xffffffffffffffff;
    local_3e0 = uVar13;
    uStack_3d8 = uVar14;
    local_3d0[0] = 0xffffffffffffffff;
    pFVar4 = *local_5e8;
    FVar24 = FDynamicMesh3::GetEdgeOpposingV(pFVar4,(int)local_218);
    uVar27 = local_440;
    iVar41 = (int)local_440;
    uVar36 = FDynamicMesh3::FindEdge(pFVar4,iVar41,*(int *)FVar24.field0_0x0);
    iVar21 = *(int *)(*(longlong *)
                       ((pFVar4->Edges).Blocks.AllocatorInstance.Data + (ulonglong)(uVar36 >> 9) * 8
                       ) + 0xc + (ulonglong)(uVar36 & 0x1ff) * 0x10);
    iVar22 = (**(code **)((*local_5e8)->_padding_ + 0x70))
                       (*local_5e8,*(undefined4 *)(local_4d0 + lVar6 * 4),uVar27 & 0xffffffff,0);
    pFVar32 = local_5f0;
    param_3 = local_5b0;
    iVar40 = local_600;
    if (iVar22 == 0) {
      if (iVar21 == -1) {
        if (*(int *)(*(longlong *)
                      (((*local_5e8)->Edges).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)local_3d0[0] >> 9) * 8) + 0xc +
                    (ulonglong)((uint)local_3d0[0] & 0x1ff) * 0x10) == -1) {
          TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                    (&local_1d8,&local_450,(bool *)local_3d0);
        }
        else {
          bVar20 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<_3779031055328082981>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshBoolean.cpp"
                              ,0x3db,"CutMesh[0]->IsBoundaryEdge(CollapseInfo.KeptEdges.A)");
          if (bVar20) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
      }
      if (param_1 == 2) {
        iVar40 = *(int *)((longlong)&local_5a0 + lVar19 * 4);
        pFVar4 = local_5e8[1];
        FVar24 = FDynamicMesh3::GetEdgeOpposingV(pFVar4,(int)local_220);
        uVar36 = FDynamicMesh3::FindEdge(pFVar4,iVar40,*(int *)FVar24.field0_0x0);
        iVar21 = *(int *)(*(longlong *)
                           ((pFVar4->Edges).Blocks.AllocatorInstance.Data +
                           (ulonglong)(uVar36 >> 9) * 8) + 0xc + (ulonglong)(uVar36 & 0x1ff) * 0x10)
        ;
        local_428 = 0xffffffffffffffff;
        local_418 = uVar13;
        uStack_410 = uVar14;
        local_408[0] = 0xffffffffffffffff;
        local_53c = (**(code **)(local_5e8[1]->_padding_ + 0x70))
                              (local_5e8[1],*(undefined4 *)((longlong)&local_5a0 + lVar6 * 4),iVar40
                               ,0);
        if (local_53c == 0) {
          if (iVar21 == -1) {
            if (*(int *)(*(longlong *)
                          ((local_5e8[1]->Edges).Blocks.AllocatorInstance.Data +
                          (ulonglong)((uint)local_408[0] >> 9) * 8) + 0xc +
                        (ulonglong)((uint)local_408[0] & 0x1ff) * 0x10) == -1) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::Emplace<int_const_&>
                        (&local_188,&local_454,(bool *)local_408);
            }
            else {
              bVar20 = Assert::Private::ExecCheckImplInternal
                                 (&bGEnsureHasExecuted<_3779031055328082959>,false,
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Private\\Operations\\MeshBoolean.cpp"
                                  ,0x3f1,"CutMesh[1]->IsBoundaryEdge(OtherCollapseInfo.KeptEdges.A)"
                                 );
              if (bVar20) {
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
          }
          TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::Remove
                    (local_518,iVar41);
          iVar40 = local_188.Elements._8_4_;
          if (local_188.Elements._8_4_ != local_188.Elements._52_4_) {
            FVar31 = (ForElementType<FSetElementId>)&local_188.Hash;
            if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar31 = local_188.Hash.SecondaryData;
            }
            for (iVar40 = *(int *)((longlong)FVar31 +
                                  (longlong)(int)(local_188.HashSize - 1U & local_41c) * 4);
                iVar40 != -1;
                iVar40 = *(int *)(local_188.Elements._0_8_ + 4 + (longlong)iVar40 * 0xc)) {
              if (*(uint *)(local_188.Elements._0_8_ + (longlong)iVar40 * 0xc) == local_41c) {
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex
                          (&local_188,iVar40);
                break;
              }
            }
            iVar40 = local_188.Elements._8_4_;
            if (local_188.Elements._8_4_ != local_188.Elements._52_4_) {
              FVar31 = (ForElementType<FSetElementId>)&local_188.Hash;
              if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
                FVar31 = local_188.Hash.SecondaryData;
              }
              for (iVar21 = *(int *)((longlong)FVar31 +
                                    (longlong)(int)(local_188.HashSize - 1U & (uint)uStack_410) * 4)
                  ; iVar21 != -1;
                  iVar21 = *(int *)(local_188.Elements._0_8_ + 4 + (longlong)iVar21 * 0xc)) {
                if (*(uint *)(local_188.Elements._0_8_ + (longlong)iVar21 * 0xc) == (uint)uStack_410
                   ) {
                  TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex
                            (&local_188,iVar21);
                  iVar40 = local_188.Elements._8_4_;
                  break;
                }
              }
            }
          }
          if ((uStack_410._4_4_ != 0xffffffff) && (iVar40 != local_188.Elements._52_4_)) {
            FVar31 = (ForElementType<FSetElementId>)&local_188.Hash;
            if (local_188.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
              FVar31 = local_188.Hash.SecondaryData;
            }
            for (iVar40 = *(int *)((longlong)FVar31 +
                                  (longlong)(int)(local_188.HashSize - 1U & uStack_410._4_4_) * 4);
                iVar40 != -1;
                iVar40 = *(int *)(local_188.Elements._0_8_ + 4 + (longlong)iVar40 * 0xc)) {
              if (*(uint *)(local_188.Elements._0_8_ + (longlong)iVar40 * 0xc) == uStack_410._4_4_)
              {
                TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex
                          (&local_188,iVar40);
                break;
              }
            }
          }
        }
        else if (local_53c != 0x1a) {
          local_438[0] = &local_53c;
          `UE::Geometry::FMeshBoolean::SimplifyAlongNewEdges'::__l83::<lambda_3>::operator()
                    (local_438);
        }
      }
      iVar40 = local_600 + 1;
      iVar21 = local_1d8.Elements._8_4_;
      local_600 = iVar40;
      if (local_1d8.Elements._8_4_ != local_1d8.Elements._52_4_) {
        FVar31 = (ForElementType<FSetElementId>)&local_1d8.Hash;
        if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar31 = local_1d8.Hash.SecondaryData;
        }
        for (iVar21 = *(int *)((longlong)FVar31 +
                              (longlong)(int)(local_1d8.HashSize - 1U & local_3e4) * 4);
            iVar21 != -1; iVar21 = *(int *)(local_1d8.Elements._0_8_ + 4 + (longlong)iVar21 * 0xc))
        {
          if (*(uint *)(local_1d8.Elements._0_8_ + (longlong)iVar21 * 0xc) == local_3e4) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex(&local_1d8,iVar21);
            break;
          }
        }
        iVar21 = local_1d8.Elements._8_4_;
        if (local_1d8.Elements._8_4_ != local_1d8.Elements._52_4_) {
          FVar31 = (ForElementType<FSetElementId>)&local_1d8.Hash;
          if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
            FVar31 = local_1d8.Hash.SecondaryData;
          }
          for (iVar22 = *(int *)((longlong)FVar31 +
                                (longlong)(int)(local_1d8.HashSize - 1U & (uint)uStack_3d8) * 4);
              iVar22 != -1; iVar22 = *(int *)(local_1d8.Elements._0_8_ + 4 + (longlong)iVar22 * 0xc)
              ) {
            if (*(uint *)(local_1d8.Elements._0_8_ + (longlong)iVar22 * 0xc) == (uint)uStack_3d8) {
              TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex
                        (&local_1d8,iVar22);
              iVar21 = local_1d8.Elements._8_4_;
              break;
            }
          }
        }
      }
      pFVar32 = local_5f0;
      param_3 = local_5b0;
      if ((uStack_3d8._4_4_ != 0xffffffff) && (iVar21 != local_1d8.Elements._52_4_)) {
        FVar31 = (ForElementType<FSetElementId>)&local_1d8.Hash;
        if (local_1d8.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
          FVar31 = local_1d8.Hash.SecondaryData;
        }
        for (iVar21 = *(int *)((longlong)FVar31 +
                              (longlong)(int)(local_1d8.HashSize - 1U & uStack_3d8._4_4_) * 4);
            iVar21 != -1; iVar21 = *(int *)(local_1d8.Elements._0_8_ + 4 + (longlong)iVar21 * 0xc))
        {
          if (*(uint *)(local_1d8.Elements._0_8_ + (longlong)iVar21 * 0xc) == uStack_3d8._4_4_) {
            TSet<int,DefaultKeyFuncs<int,0>,FDefaultSetAllocator>::RemoveByIndex(&local_1d8,iVar21);
            pFVar32 = local_5f0;
            param_3 = local_5b0;
            break;
          }
        }
      }
    }
  }
LAB_1435c6e3b:
  pFVar42 = local_4f8 + 4;
  uVar27 = (ulonglong)local_538;
  param_4 = (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)local_518;
  goto LAB_1435c5db7;
}

// operator() @ 15049fa50

bool __thiscall
`UE::Geometry::FMeshBoolean::SimplifyAlongNewEdges'::__l83::<lambda_3>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_3779031055328082963>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_3779031055328082963>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

