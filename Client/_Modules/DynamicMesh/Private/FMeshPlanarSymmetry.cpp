// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 25

// operator() @ 14c89dc10

void __thiscall
`UE::Geometry::FMeshPlanarSymmetry::AssignMatches'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  bool bVar17;
  uint uVar18;
  uint uVar19;
  longlong lVar20;
  uint uVar21;
  double dVar22;
  TVector<double>_u_0 local_1b8;
  code *local_1a0;
  undefined8 *local_198;
  code *local_190;
  double *local_188;
  code *local_180;
  undefined8 *local_178;
  code *local_170;
  double *local_168;
  TTuple<int,double> local_160;
  TTuple<int,double> local_150;
  double local_140;
  double dStack_138;
  double local_130;
  undefined8 local_128;
  double local_120;
  double dStack_118;
  double local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  uint local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  uint local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  double local_80;
  
  plVar4 = *(longlong **)this;
  uVar19 = 0;
  if (param_1 < (int)plVar4[1]) {
    uVar19 = (uint)~param_1 >> 0x1f;
  }
  if (uVar19 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  plVar5 = *(longlong **)((longlong)this + 0x18);
  uVar19 = *(uint *)(*plVar4 + (longlong)param_1 * 4);
  lVar20 = (longlong)(int)uVar19;
  uVar21 = ~uVar19 >> 0x1f;
  lVar6 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 8) + 0x10) + (ulonglong)(uVar19 >> 9) * 8
           );
  pdVar1 = (double *)(lVar6 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
  dVar9 = *pdVar1;
  dVar10 = pdVar1[1];
  local_80 = *(double *)(lVar6 + 0x10 + (ulonglong)(uVar19 & 0x1ff) * 0x18);
  lVar6 = *(longlong *)((longlong)this + 0x10);
  dVar8 = local_80 - *(double *)(lVar6 + 0x20);
  dVar22 = (dVar10 - *(double *)(lVar6 + 0x18)) * *(double *)(lVar6 + 0x50) +
           (dVar9 - *(double *)(lVar6 + 0x10)) * *(double *)(lVar6 + 0x48);
  dVar22 = (dVar8 + dVar8) * *(double *)(lVar6 + 0x58) + dVar22 + dVar22;
  uVar18 = 0;
  if ((int)uVar19 < (int)plVar5[1]) {
    uVar18 = uVar21;
  }
  local_1b8._s_0.X = dVar9 - dVar22 * *(double *)(lVar6 + 0x48);
  local_1b8._s_0.Y = dVar10 - dVar22 * *(double *)(lVar6 + 0x50);
  local_1b8._s_0.Z = local_80 - dVar22 * *(double *)(lVar6 + 0x58);
  if (uVar18 == 0) {
    bVar17 = ::FDebug::CheckVerifyFailedImpl2
                       ("(Index >= 0) & (Index < ArrayNum)",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                        ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar17) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  uVar16 = local_1b8._s_0.Z;
  uVar15 = local_1b8._s_0.Y;
  uVar14 = local_1b8._s_0.X;
  uVar13 = __real_3e45798ee2308c3a;
  lVar6 = *plVar5;
  puVar2 = (undefined8 *)(lVar6 + lVar20 * 0x18);
  uVar11 = *puVar2;
  uVar12 = puVar2[1];
  uVar3 = *(undefined8 *)(lVar6 + 0x10 + lVar20 * 0x18);
  local_e0 = *(undefined8 *)((longlong)this + 0x10);
  local_d8 = *(undefined8 *)((longlong)this + 0x18);
  local_d0 = __real_3e45798ee2308c3a;
  local_140 = local_1b8._s_0.X;
  dStack_138 = local_1b8._s_0.Y;
  local_130 = local_1b8._s_0.Z;
  local_128 = **(undefined8 **)((longlong)this + 8);
  local_1a0 = UE::Core::Private::Function::
              TFunctionRefCaller<``UE::Geometry::FMeshPlanarSymmetry::AssignMatches'::__l2::<lambda_1>::operator()'::__l2::<lambda_2>,bool,int_const_&>
              ::Call;
  local_198 = &local_100;
  local_190 = UE::Core::Private::Function::
              TFunctionRefCaller<``UE::Geometry::FMeshPlanarSymmetry::AssignMatches'::__l2::<lambda_1>::operator()'::__l2::<lambda_1>,double,int_const_&>
              ::Call;
  local_188 = &local_140;
  local_100 = uVar11;
  uStack_f8 = uVar12;
  local_f0 = uVar3;
  local_e8 = uVar19;
  UE::Geometry::TPointHashGrid3<int,double>::FindInRadiusHelper<0>
            (*(TPointHashGrid3<int,double> **)((longlong)this + 0x20),&local_160,
             (TVector<double> *)&local_1b8._s_0,**(double **)((longlong)this + 0x28),
             (TFunctionRef<double___cdecl(int_const_&)> *)&local_190,
             (TFunctionRef<bool___cdecl(int_const_&)> *)&local_1a0);
  lVar6 = *(longlong *)((longlong)this + 0x10);
  if (local_160._0_4_ == 0xffffffff) {
    uVar18 = 0;
    if ((int)uVar19 < *(int *)(lVar6 + 0x68)) {
      uVar18 = uVar21;
    }
    if (uVar18 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    pdVar1 = (double *)(*(longlong *)(lVar6 + 0x60) + lVar20 * 0x10);
    if (**(double **)((longlong)this + 0x30) < *pdVar1 ||
        **(double **)((longlong)this + 0x30) == *pdVar1) {
      local_a8 = *(undefined8 *)((longlong)this + 0x10);
      local_a0 = *(undefined8 *)((longlong)this + 0x18);
      local_98 = uVar13;
      local_120 = (double)uVar14;
      dStack_118 = (double)uVar15;
      local_110 = (double)uVar16;
      local_108 = **(undefined8 **)((longlong)this + 8);
      local_180 = UE::Core::Private::Function::
                  TFunctionRefCaller<``UE::Geometry::FMeshPlanarSymmetry::AssignMatches'::__l2::<lambda_1>::operator()'::__l9::<lambda_4>,bool,int_const_&>
                  ::Call;
      local_178 = &local_c8;
      local_170 = UE::Core::Private::Function::
                  TFunctionRefCaller<``UE::Geometry::FMeshPlanarSymmetry::AssignMatches'::__l2::<lambda_1>::operator()'::__l9::<lambda_3>,double,int_const_&>
                  ::Call;
      local_168 = &local_120;
      local_c8 = uVar11;
      uStack_c0 = uVar12;
      local_b8 = uVar3;
      local_b0 = uVar19;
      UE::Geometry::TPointHashGrid3<int,double>::FindInRadiusHelper<0>
                (*(TPointHashGrid3<int,double> **)((longlong)this + 0x20),&local_150,
                 (TVector<double> *)&local_1b8._s_0,**(double **)((longlong)this + 0x28),
                 (TFunctionRef<double___cdecl(int_const_&)> *)&local_170,
                 (TFunctionRef<bool___cdecl(int_const_&)> *)&local_180);
      if (local_150._0_4_ != 0xffffffff) {
        lVar6 = *(longlong *)((longlong)this + 0x10);
        uVar18 = 0;
        if ((int)local_150._0_4_ < *(int *)(lVar6 + 0x68)) {
          uVar18 = (uint)~local_150._0_4_ >> 0x1f;
        }
        if (uVar18 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        *(uint *)(*(longlong *)(lVar6 + 0x60) + 0xc + (longlong)(int)local_150._0_4_ * 0x10) =
             uVar19;
        lVar6 = *(longlong *)((longlong)this + 0x10);
        uVar18 = 0;
        if ((int)uVar19 < *(int *)(lVar6 + 0x68)) {
          uVar18 = uVar21;
        }
        if (uVar18 == 0) {
          bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar17) {
            pcVar7 = (code *)swi(3);
            (*pcVar7)();
            return;
          }
        }
        *(undefined4 *)(*(longlong *)(lVar6 + 0x60) + 0xc + lVar20 * 0x10) = local_150._0_4_;
      }
    }
  }
  else {
    uVar18 = 0;
    if ((int)local_160._0_4_ < *(int *)(lVar6 + 0x68)) {
      uVar18 = (uint)~local_160._0_4_ >> 0x1f;
    }
    if (uVar18 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    *(uint *)(*(longlong *)(lVar6 + 0x60) + 0xc + (longlong)(int)local_160._0_4_ * 0x10) = uVar19;
    lVar6 = *(longlong *)((longlong)this + 0x10);
    uVar18 = 0;
    if ((int)uVar19 < *(int *)(lVar6 + 0x68)) {
      uVar18 = uVar21;
    }
    if (uVar18 == 0) {
      bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar17) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    *(undefined4 *)(*(longlong *)(lVar6 + 0x60) + 0xc + lVar20 * 0x10) = local_160._0_4_;
  }
  return;
}

// operator() @ 14c89f620

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
`UE::Geometry::FMeshPlanarSymmetry::ComputeMeshInfo'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  double *pdVar1;
  FDynamicMesh3 *this_00;
  longlong lVar2;
  double *pdVar3;
  code *pcVar4;
  double dVar5;
  double dVar6;
  bool bVar7;
  TVector<double> *pTVar8;
  longlong *plVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auStack_288 [32];
  longlong local_268;
  longlong local_260;
  undefined8 local_258;
  int local_250;
  double local_238;
  double local_220;
  undefined1 local_218 [48];
  ValueIterator local_1e8;
  ValueIterator local_1c0;
  undefined1 local_198 [144];
  undefined1 local_108 [144];
  ulonglong local_78;
  
  if (-1 < param_1) {
    local_78 = __security_cookie.value ^ (ulonglong)auStack_288;
    lVar10 = (longlong)param_1;
    this_00 = (FDynamicMesh3 *)**(undefined8 **)this;
    if (param_1 < (int)((this_00->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                       (this_00->VertexRefCounts).RefCounts.CurBlockUsed)) {
      uVar13 = (ulonglong)(param_1 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               ((this_00->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                               (ulonglong)((uint)param_1 >> 9) * 8) + uVar13 * 2) - 1U) < 0xfffe) {
        dVar5 = 0.0;
        UE::Geometry::FDynamicMesh3::VtxTrianglesItr
                  (this_00,(TPairExpandEnumerable<UE::Geometry::FSmallListSet::ValueIterator> *)
                           local_218,param_1);
        UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_198,
                   &local_1e8,&local_1c0,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_218
                  );
        UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::
        TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>
                  ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_108,
                   &local_1c0,&local_1c0,(TFunction<UE::Geometry::FIndex2i___cdecl(int)> *)local_218
                  );
        while ((((local_198._0_8_ != local_108._0_8_ || (local_198._8_4_ != local_108._8_4_)) ||
                (local_198._24_4_ != local_108._24_4_)) || (local_198._28_4_ != local_108._28_4_)))
        {
          lVar2 = *(longlong *)
                   ((((FDynamicMesh3 *)**(undefined8 **)this)->Triangles).Blocks.AllocatorInstance.
                    Data + (ulonglong)((uint)local_198._88_4_ >> 9) * 8);
          local_258 = *(undefined8 *)(lVar2 + (ulonglong)(local_198._88_4_ & 0x1ff) * 0xc);
          local_250 = *(int *)(lVar2 + 8 + (ulonglong)(local_198._88_4_ & 0x1ff) * 0xc);
          if ((int)local_258 == param_1) {
            iVar12 = 0;
          }
          else if ((int)((ulonglong)local_258 >> 0x20) == param_1) {
            iVar12 = 1;
          }
          else {
            iVar12 = -1;
            if (local_250 == param_1) {
              iVar12 = 2;
            }
          }
          dVar14 = UE::Geometry::FDynamicMesh3::GetTriInternalAngleR
                             ((FDynamicMesh3 *)**(undefined8 **)this,local_198._88_4_,iVar12);
          dVar5 = dVar5 + dVar14;
          UE::Geometry::TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator>::goto_next
                    ((TPairExpandIterator<UE::Geometry::FSmallListSet::ValueIterator> *)local_198);
        }
        if (local_108._96_8_ != 0) {
          plVar9 = (longlong *)(local_108 + 0x70);
          if ((longlong *)local_108._136_8_ != (longlong *)0x0) {
            plVar9 = (longlong *)local_108._136_8_;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
        if (local_198._96_8_ != 0) {
          plVar9 = (longlong *)(local_198 + 0x70);
          if ((longlong *)local_198._136_8_ != (longlong *)0x0) {
            plVar9 = (longlong *)local_198._136_8_;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
        if (local_218._0_8_ != 0) {
          plVar9 = (longlong *)(local_218 + 0x10);
          if ((longlong *)local_218._40_8_ != (longlong *)0x0) {
            plVar9 = (longlong *)local_218._40_8_;
          }
          (**(code **)(*plVar9 + 0x10))();
        }
        pTVar8 = UE::Geometry::FMeshNormals::operator[]
                           (*(FMeshNormals **)((longlong)this + 8),param_1);
        local_238 = (pTVar8->field0_0x0)._s_0.Z;
        lVar2 = *(longlong *)
                 (*(longlong *)(**(longlong **)this + 0x10) + (ulonglong)((uint)param_1 >> 9) * 8);
        pdVar3 = *(double **)((longlong)this + 0x10);
        local_220 = *(double *)(lVar2 + 0x10 + uVar13 * 0x18);
        pdVar1 = (double *)(lVar2 + uVar13 * 0x18);
        dVar16 = local_220 - pdVar3[2];
        dVar14 = pdVar1[1] - pdVar3[1];
        dVar17 = *pdVar1 - *pdVar3;
        dVar6 = SQRT(dVar14 * dVar14 + dVar17 * dVar17 + dVar16 * dVar16);
        if (__real_3e45798ee2308c3a < dVar6) {
          dVar15 = __real_3ff0000000000000 / dVar6;
          dVar17 = dVar17 * dVar15;
          dVar14 = dVar14 * dVar15;
          dVar16 = dVar16 * dVar15;
        }
        plVar9 = *(longlong **)((longlong)this + 0x18);
        dVar15 = **(double **)((longlong)this + 0x20);
        iVar12 = (int)plVar9[1];
        local_260 = (longlong)iVar12;
        dVar5 = dVar5 * ___real_3f5a1371305e714c;
        uVar11 = 0;
        if (param_1 < iVar12) {
          uVar11 = (uint)~param_1 >> 0x1f;
        }
        dVar14 = (dVar14 * (pTVar8->field0_0x0)._s_0.Y + dVar17 * (pTVar8->field0_0x0)._s_0.X +
                 dVar16 * local_238) * __real_3f50624dd2f1a9fc;
        if ((uVar11 == 0) &&
           (local_268 = lVar10,
           bVar7 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        lVar2 = *plVar9;
        *(double *)(lVar2 + lVar10 * 0x18) = dVar5;
        *(double *)(lVar2 + 8 + lVar10 * 0x18) = dVar14;
        *(double *)(lVar2 + 0x10 + lVar10 * 0x18) = dVar6 * dVar15;
      }
    }
  }
  return;
}

// operator() @ 14c8a05e0

bool __thiscall
`UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l2::<lambda_1>::operator()
          (void *this,int param_1,TArrayView<int_const_,int> *param_2)

{
  int *piVar1;
  uint *puVar2;
  double *pdVar3;
  FScriptContainerElement *pFVar4;
  uint uVar5;
  longlong lVar6;
  double *pdVar7;
  ForAnyElementType *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  double dVar11;
  bool bVar12;
  undefined1 uVar13;
  ulonglong uVar14;
  int iVar15;
  uint *puVar16;
  double dVar17;
  double local_68;
  double dStack_60;
  double local_58;
  double local_50;
  double dStack_48;
  double local_40;
  
  lVar6 = **(longlong **)this;
  if (((-1 < param_1) && (param_1 < *(int *)(lVar6 + 0x20) * 0x200 + *(int *)(lVar6 + 0x24))) &&
     ((ushort)(*(short *)(*(longlong *)
                           (*(longlong *)(lVar6 + 0x28) + (ulonglong)((uint)param_1 >> 9) * 8) +
                         (ulonglong)(param_1 & 0x1ff) * 2) - 1U) < 0xfffe)) {
    puVar16 = (uint *)param_2->DataPtr;
    iVar15 = 0;
    puVar2 = puVar16 + param_2->ArrayNum;
    dStack_60 = 0.0;
    local_68 = 0.0;
    dVar11 = 0.0;
    local_58 = 0.0;
    if (puVar16 != puVar2) {
      pdVar7 = *(double **)((longlong)this + 8);
      do {
        uVar5 = *puVar16;
        iVar15 = iVar15 + 1;
        puVar16 = puVar16 + 1;
        uVar14 = (ulonglong)(uVar5 & 0x1ff);
        lVar6 = *(longlong *)
                 (*(longlong *)(**(longlong **)this + 0x10) + (ulonglong)(uVar5 >> 9) * 8);
        local_40 = *(double *)(lVar6 + 0x10 + uVar14 * 0x18);
        pdVar3 = (double *)(lVar6 + uVar14 * 0x18);
        local_50 = *pdVar3;
        dStack_48 = pdVar3[1];
        dVar17 = __real_3ff0000000000000 / (double)iVar15;
        dStack_60 = dStack_60 + dVar17 * ((dStack_48 - pdVar7[1]) - dStack_60);
        local_68 = local_68 + ((local_50 - *pdVar7) - local_68) * dVar17;
        dVar11 = dVar11 + dVar17 * ((local_40 - pdVar7[2]) - dVar11);
        local_58 = dVar11;
      } while (puVar16 != puVar2);
    }
    pdVar7 = *(double **)((longlong)this + 8);
    pFVar8 = *(ForAnyElementType **)((longlong)this + 0x10);
    local_68 = local_68 + *pdVar7;
    dStack_60 = dStack_60 + pdVar7[1];
    local_58 = local_58 + pdVar7[2];
    if (((pFVar8->Data <= (FScriptContainerElement *)&local_68) &&
        ((FScriptContainerElement *)&local_68 <
         pFVar8->Data + (longlong)*(int *)((longlong)&pFVar8[1].Data + 4) * 0x18)) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar12)) {
      pcVar10 = (code *)swi(3);
      uVar13 = (*pcVar10)();
      return (bool)uVar13;
    }
    iVar15 = *(int *)&pFVar8[1].Data;
    piVar1 = (int *)((longlong)&pFVar8[1].Data + 4);
    if (iVar15 == *piVar1) {
      iVar15 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,pFVar8,piVar1);
    }
    *(int *)&pFVar8[1].Data = iVar15 + 1;
    pFVar9 = pFVar8->Data;
    pFVar4 = pFVar9 + (longlong)iVar15 * 0x18;
    *(double *)pFVar4 = local_68;
    *(double *)(pFVar4 + 8) = dStack_60;
    *(double *)(pFVar9 + (longlong)iVar15 * 0x18 + 0x10) = local_58;
  }
  return true;
}

// operator() @ 14c8aca00

bool __thiscall
`UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l2::<lambda_2>::operator()
          (void *this,TVector<double> *param_1,TVector<double> *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auVar9 [16];
  double dVar10;
  bool bVar11;
  double dVar12;
  double dVar13;
  ulonglong uVar14;
  uint uVar15;
  uint uVar16;
  double dVar17;
  double dVar18;
  undefined1 local_res8 [8];
  code *local_128;
  undefined1 *local_120;
  code *local_118;
  double *local_110;
  TTuple<int,double> local_108;
  TVector<double>_u_0 local_f8;
  double local_e0;
  double local_d8;
  double local_d0;
  void *local_c8;
  
  dVar18 = (param_1->field0_0x0)._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  bVar11 = true;
  dVar10 = 0.0;
  (param_2->field0_0x0)._s_0.X = (param_1->field0_0x0)._s_0.X;
  (param_2->field0_0x0)._s_0.Y = dVar2;
  (param_2->field0_0x0)._s_0.Z = dVar18;
  lVar7 = *(longlong *)this;
  uVar16 = *(int *)(lVar7 + 0x24) + *(int *)(lVar7 + 0x20) * 0x200;
  uVar15 = 0;
  if (((uVar16 != 0) &&
      (uVar15 = 0, 0xfffd < (ushort)(*(short *)**(undefined8 **)(lVar7 + 0x28) - 1U))) &&
     (uVar15 = 1, 1 < (int)uVar16)) {
    do {
      lVar8 = (*(undefined8 **)(lVar7 + 0x28))[uVar15 >> 9];
      if ((*(short *)(lVar8 + (ulonglong)(uVar15 & 0x1ff) * 2) != 0) &&
         (*(short *)(lVar8 + (ulonglong)(uVar15 & 0x1ff) * 2) != -1)) break;
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < (int)uVar16);
  }
  if (uVar15 != uVar16) {
    dVar18 = (param_1->field0_0x0)._s_0.Z;
    dVar2 = (param_1->field0_0x0)._s_0.X;
    dVar3 = (param_1->field0_0x0)._s_0.Y;
    dVar4 = 0.0;
    dVar5 = 0.0;
LAB_14c8acb40:
    do {
      lVar8 = *(longlong *)(*(longlong *)(*(longlong *)this + 0x10) + (ulonglong)(uVar15 >> 9) * 8);
      pdVar1 = (double *)(lVar8 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
      dVar12 = *pdVar1;
      dVar13 = pdVar1[1];
      dVar6 = *(double *)(lVar8 + 0x10 + (ulonglong)(uVar15 & 0x1ff) * 0x18);
      dVar17 = (dVar12 - *(double *)((longlong)this + 8)) * dVar2 +
               (dVar13 - *(double *)((longlong)this + 0x10)) * dVar3 +
               (dVar6 - *(double *)((longlong)this + 0x18)) * dVar18;
      if (*(double *)((longlong)this + 0x30) <= dVar17) {
        local_120 = local_res8;
        local_128 = UE::Core::Private::Function::
                    TFunctionRefCaller<`UE::Geometry::TPointHashGrid3<int,double>::FindNearestInRadius'::__l2::<lambda_1>,bool,int_const_&>
                    ::Call;
        local_118 = UE::Core::Private::Function::
                    TFunctionRefCaller<``UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l2::<lambda_2>::operator()'::__l6::<lambda_1>,double,int_const_&>
                    ::Call;
        local_110 = &local_e0;
        bVar11 = false;
        local_f8._s_0.X = dVar12 - (dVar2 + dVar2) * dVar17;
        local_f8._s_0.Y = dVar13 - (dVar3 + dVar3) * dVar17;
        local_f8._s_0.Z = dVar6 - (dVar18 + dVar18) * dVar17;
        local_e0 = local_f8._s_0.X;
        local_d8 = local_f8._s_0.Y;
        local_d0 = local_f8._s_0.Z;
        local_c8 = this;
        UE::Geometry::TPointHashGrid3<int,double>::FindInRadiusHelper<0>
                  (*(TPointHashGrid3<int,double> **)((longlong)this + 0x20),&local_108,
                   (TVector<double> *)&local_f8._s_0,*(double *)((longlong)this + 0x38),
                   (TFunctionRef<double___cdecl(int_const_&)> *)&local_118,
                   (TFunctionRef<bool___cdecl(int_const_&)> *)&local_128);
        if (local_108._0_4_ == 0xffffffff) {
          return false;
        }
        uVar14 = (ulonglong)(local_108._0_4_ & 0x1ff);
        lVar8 = *(longlong *)
                 (*(longlong *)(*(longlong *)this + 0x10) +
                 ((local_108._0_8_ & 0xffffffff) >> 9) * 8);
        pdVar1 = (double *)(lVar8 + uVar14 * 0x18);
        dVar5 = dVar5 + (dVar12 - *pdVar1);
        dVar10 = dVar10 + (dVar6 - *(double *)(lVar8 + 0x10 + uVar14 * 0x18));
        dVar4 = dVar4 + (dVar13 - pdVar1[1]);
      }
      uVar15 = uVar15 + 1;
      if ((int)uVar15 < (int)uVar16) {
        do {
          lVar8 = *(longlong *)(*(longlong *)(lVar7 + 0x28) + (ulonglong)(uVar15 >> 9) * 8);
          if ((*(short *)(lVar8 + (ulonglong)(uVar15 & 0x1ff) * 2) != 0) &&
             (*(short *)(lVar8 + (ulonglong)(uVar15 & 0x1ff) * 2) != -1)) goto LAB_14c8acb40;
          uVar15 = uVar15 + 1;
        } while ((int)uVar15 < (int)uVar16);
      }
    } while (uVar15 != uVar16);
    if ((!bVar11) &&
       (dVar18 = dVar5 * dVar5 + dVar4 * dVar4 + dVar10 * dVar10, __real_3e45798ee0000000 < dVar18))
    {
      dVar18 = __real_3ff0000000000000 / SQRT(dVar18);
      auVar9._8_4_ = SUB84(dVar4 * dVar18,0);
      auVar9._0_8_ = dVar5 * dVar18;
      auVar9._12_4_ = (int)((ulonglong)(dVar4 * dVar18) >> 0x20);
      *(undefined1 (*) [16])&param_2->field0_0x0 = auVar9;
      (param_2->field0_0x0)._s_0.Z = dVar10 * dVar18;
    }
  }
  return true;
}

// operator() @ 14c8afda0

TVector<double> * __thiscall
`UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l2::<lambda_3>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  
  plVar3 = *(longlong **)this;
  uVar8 = 0;
  if (param_1 < (int)plVar3[1]) {
    uVar8 = (uint)~param_1 >> 0x1f;
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
  lVar4 = *plVar3;
  pdVar1 = (double *)(lVar4 + (longlong)param_1 * 0x18);
  dVar6 = pdVar1[1];
  dVar2 = *(double *)(lVar4 + 0x10 + (longlong)param_1 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// operator() @ 14c8b48b0

TVector<double> * __thiscall
`UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l83::<lambda_7>::operator()
          (void *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  double *pdVar1;
  double dVar2;
  longlong *plVar3;
  longlong lVar4;
  code *pcVar5;
  double dVar6;
  bool bVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  uint uVar10;
  ulonglong uVar11;
  
  plVar3 = *(longlong **)this;
  uVar10 = **(int **)((longlong)this + 8) + param_1;
  uVar8 = 0;
  if ((int)uVar10 < (int)plVar3[1]) {
    uVar8 = ~uVar10 >> 0x1f;
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
  uVar8 = *(uint *)(*plVar3 + (longlong)(int)uVar10 * 4);
  uVar11 = (ulonglong)(uVar8 & 0x1ff);
  lVar4 = *(longlong *)
           (*(longlong *)(**(longlong **)((longlong)this + 0x10) + 0x10) +
           (ulonglong)(uVar8 >> 9) * 8);
  pdVar1 = (double *)(lVar4 + uVar11 * 0x18);
  dVar6 = pdVar1[1];
  dVar2 = *(double *)(lVar4 + 0x10 + uVar11 * 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.X = *pdVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar6;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar2;
  return __return_storage_ptr__;
}

// ApplySymmetryPlaneConstraints @ 14c8ba680

void __thiscall
UE::Geometry::FMeshPlanarSymmetry::ApplySymmetryPlaneConstraints
          (FMeshPlanarSymmetry *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  int iVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  uint uVar17;
  double dVar18;
  double dVar19;
  
  iVar6 = param_1->ArrayNum;
  if ((iVar6 != param_2->ArrayNum) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("N == VertexPositions.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\MeshPlanarSymmetry.cpp"
                          ,0x2a7,L""), bVar11)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  dVar10 = __real_3ff0000000000000;
  uVar14 = 0;
  if (0 < iVar6) {
    lVar15 = 0;
    lVar16 = 0;
    do {
      uVar17 = ~uVar14 >> 0x1f;
      uVar12 = 0;
      if ((int)uVar14 < param_1->ArrayNum) {
        uVar12 = uVar17;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      uVar12 = *(uint *)((param_1->AllocatorInstance).Data + lVar15 * 4);
      uVar13 = 0;
      if ((int)uVar12 < (this->Vertices).ArrayNum) {
        uVar13 = ~uVar12 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      if ((this->Vertices).AllocatorInstance.Data[(longlong)(int)uVar12 * 0x10 + 9] !=
          (FScriptContainerElement)0x0) {
        uVar12 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar12 = uVar17;
        }
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        dVar18 = (this->SymmetryFrame).Rotation.field0_0x0._s_0.X;
        dVar19 = (this->SymmetryFrame).Rotation.field0_0x0._s_0.Y;
        pFVar7 = (param_2->AllocatorInstance).Data;
        dVar1 = (this->SymmetryFrame).Rotation.field0_0x0._s_0.W;
        dVar2 = (this->SymmetryFrame).Rotation.field0_0x0._s_0.Z;
        dVar2 = dVar2 + dVar2;
        dVar3 = *(double *)(pFVar7 + lVar16);
        dVar4 = *(double *)(pFVar7 + lVar16 + 8);
        dVar5 = *(double *)(pFVar7 + lVar16 + 0x10);
        uVar12 = 0;
        if ((int)uVar14 < param_2->ArrayNum) {
          uVar12 = uVar17;
        }
        dVar9 = dVar1 * (dVar19 + dVar19) + dVar2 * dVar18;
        dVar1 = dVar2 * dVar19 - dVar1 * (dVar18 + dVar18);
        dVar19 = dVar10 - (dVar18 * (dVar18 + dVar18) + dVar19 * (dVar19 + dVar19));
        dVar18 = (dVar4 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Y) * dVar1 +
                 (dVar3 - (this->SymmetryFrame).Origin.field0_0x0._s_0.X) * dVar9 +
                 (dVar5 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Z) * dVar19;
        if ((uVar12 == 0) &&
           (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar11)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        pFVar7 = (param_2->AllocatorInstance).Data;
        *(double *)(pFVar7 + lVar16) = dVar3 - dVar18 * dVar9;
        *(double *)(pFVar7 + lVar16 + 8) = dVar4 - dVar18 * dVar1;
        *(double *)(pFVar7 + lVar16 + 0x10) = dVar5 - dVar18 * dVar19;
      }
      uVar14 = uVar14 + 1;
      lVar15 = lVar15 + 1;
      lVar16 = lVar16 + 0x18;
    } while (lVar15 < iVar6);
  }
  return;
}

// AssignMatches @ 14c8bba00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FMeshPlanarSymmetry::AssignMatches
          (FMeshPlanarSymmetry *this,FDynamicMesh3 *param_1,TPointHashGrid3<int,double> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TFrame3<double> *param_4)

{
  TArray<UE::Geometry::FMeshPlanarSymmetry::FSymmetryVertex,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  short sVar12;
  FScriptContainerElement *pFVar13;
  code *pcVar14;
  double dVar15;
  FRefCountVector *pFVar16;
  FDynamicMesh3 *pFVar17;
  bool bVar18;
  undefined1 uVar19;
  int iVar20;
  uint uVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  longlong lVar30;
  double dVar31;
  double local_res8;
  FDynamicMesh3 *local_res10;
  TPointHashGrid3<int,double> *local_res18;
  uint local_f8 [2];
  ForAnyElementType local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  double local_d0;
  TArrayView<std::nullptr_t,int> local_c8;
  code *local_b8;
  ForAnyElementType **local_b0;
  ForAnyElementType *local_a8;
  FDynamicMesh3 **local_a0;
  FMeshPlanarSymmetry *local_98;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_90;
  TPointHashGrid3<int,double> *local_88;
  double *local_80;
  double *local_78;
  double local_60;
  
  pTVar1 = &this->Vertices;
  dVar4 = (param_4->Rotation).field0_0x0._s_0.Y;
  dVar5 = (param_4->Rotation).field0_0x0._s_0.X;
  dVar7 = (param_4->Origin).field0_0x0._s_0.Y;
  dVar8 = (param_4->Origin).field0_0x0._s_0.Z;
  dVar9 = (param_4->Rotation).field0_0x0._s_0.X;
  dVar31 = (param_4->Rotation).field0_0x0._s_0.Z;
  dVar6 = (param_4->Rotation).field0_0x0._s_0.W;
  dVar31 = dVar31 + dVar31;
  (this->SymmetryFrame).Origin.field0_0x0._s_0.X = (param_4->Origin).field0_0x0._s_0.X;
  (this->SymmetryFrame).Origin.field0_0x0._s_0.Y = dVar7;
  dVar10 = (param_4->Rotation).field0_0x0._s_0.Y;
  dVar15 = (param_4->Rotation).field0_0x0._s_0.Z;
  (this->SymmetryFrame).Origin.field0_0x0._s_0.Z = dVar8;
  (this->SymmetryFrame).Rotation.field0_0x0._s_0.X = dVar9;
  dVar7 = (param_4->Rotation).field0_0x0._s_0.W;
  (this->SymmetryFrame).Rotation.field0_0x0._s_0.Y = dVar10;
  (this->SymmetryFrame).Rotation.field0_0x0._s_0.Z = dVar15;
  (this->SymmetryFrame).Rotation.field0_0x0._s_0.W = dVar7;
  (this->CachedSymmetryAxis).field0_0x0._s_0.X = dVar6 * (dVar4 + dVar4) + dVar31 * dVar5;
  (this->CachedSymmetryAxis).field0_0x0._s_0.Y = dVar31 * dVar4 - dVar6 * (dVar5 + dVar5);
  (this->CachedSymmetryAxis).field0_0x0._s_0.Z =
       __real_3ff0000000000000 - ((dVar4 + dVar4) * dVar4 + (dVar5 + dVar5) * dVar5);
  uVar27 = (this->TargetMesh->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (this->TargetMesh->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar29 = (ulonglong)uVar27;
  local_e0 = 0;
  uStack_d8 = 1;
  uStack_d4 = 0xffffffff;
  local_res10 = param_1;
  local_res18 = param_2;
  if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
  }
  piVar2 = &(this->Vertices).ArrayMax;
  (this->Vertices).ArrayNum = 0;
  if (*piVar2 != uVar27) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,uVar27,&pTVar1->AllocatorInstance,0,piVar2);
  }
  if (0 < (int)uVar27) {
    do {
      pFVar13 = (pTVar1->AllocatorInstance).Data;
      if (((pFVar13 <= (FScriptContainerElement *)&local_e0) &&
          ((FScriptContainerElement *)&local_e0 < pFVar13 + (longlong)*piVar2 * 0x10)) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x7a5,
                              L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                             ), bVar18)) {
        pcVar14 = (code *)swi(3);
        uVar19 = (*pcVar14)();
        return (bool)uVar19;
      }
      iVar20 = (this->Vertices).ArrayNum;
      if (iVar20 == *piVar2) {
        iVar20 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x810,&pTVar1->AllocatorInstance,piVar2);
      }
      (this->Vertices).ArrayNum = iVar20 + 1;
      pFVar13 = (pTVar1->AllocatorInstance).Data + (longlong)iVar20 * 0x10;
      *(undefined8 *)pFVar13 = local_e0;
      *(ulonglong *)(pFVar13 + 8) = CONCAT44(uStack_d4,uStack_d8);
      uVar29 = uVar29 - 1;
    } while (uVar29 != 0);
  }
  uVar27 = (this->Vertices).ArrayNum;
  local_f0.Data = (FScriptContainerElement *)0x0;
  local_e8 = 0;
  if ((int)uVar27 < 0) {
                    /* WARNING: Subroutine does not return */
    Core::Private::OnInvalidArrayNum((ulonglong)uVar27);
  }
  if (0 < (int)uVar27) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,uVar27,&local_f0,0,(int *)((longlong)&local_e8 + 4));
  }
  dVar4 = __real_3e45798ee2308c3a;
  uVar27 = (local_res10->VertexRefCounts).RefCounts.CurBlockUsed +
           (local_res10->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar29 = 0;
  if ((uVar27 == 0) ||
     (pFVar13 = (local_res10->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar29 = 0,
     (ushort)(**(short **)pFVar13 - 1U) < 0xfffe)) {
LAB_14c8bbc87:
    uVar24 = (uint)uVar29;
  }
  else {
    uVar29 = 1;
    uVar24 = 1;
    if (1 < (int)uVar27) {
      do {
        sVar12 = *(short *)(*(longlong *)(pFVar13 + (uVar29 >> 9) * 8) +
                           (ulonglong)((uint)uVar29 & 0x1ff) * 2);
        if ((sVar12 != 0) && (sVar12 != -1)) break;
        uVar24 = (uint)uVar29 + 1;
        uVar29 = (ulonglong)uVar24;
      } while ((int)uVar24 < (int)uVar27);
      goto LAB_14c8bbc87;
    }
  }
  if (uVar24 != uVar27) {
    pFVar16 = &local_res10->VertexRefCounts;
LAB_14c8bbca0:
    do {
      uVar25 = (uint)uVar29;
      lVar30 = *(longlong *)
                ((local_res10->Vertices).Blocks.AllocatorInstance.Data + (uVar29 >> 9) * 8);
      pdVar3 = (double *)(lVar30 + (ulonglong)(uVar25 & 0x1ff) * 0x18);
      dVar6 = *pdVar3;
      dVar7 = pdVar3[1];
      local_60 = *(double *)(lVar30 + 0x10 + (ulonglong)(uVar25 & 0x1ff) * 0x18);
      dVar5 = (this->SymmetryFrame).Origin.field0_0x0._s_0.X;
      dVar31 = (this->SymmetryFrame).Origin.field0_0x0._s_0.Y;
      uVar24 = 0;
      if ((int)uVar25 < (this->Vertices).ArrayNum) {
        uVar24 = ~uVar25 >> 0x1f;
      }
      dVar15 = local_60 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Z;
      dVar8 = (this->CachedSymmetryAxis).field0_0x0._s_0.X;
      dVar9 = (this->CachedSymmetryAxis).field0_0x0._s_0.Y;
      dVar10 = (this->CachedSymmetryAxis).field0_0x0._s_0.Z;
      local_f8[0] = uVar25;
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar14 = (code *)swi(3);
        uVar19 = (*pcVar14)();
        return (bool)uVar19;
      }
      *(double *)((pTVar1->AllocatorInstance).Data + (longlong)(int)uVar25 * 0x10) =
           (dVar6 - dVar5) * dVar8 + (dVar7 - dVar31) * dVar9 + dVar15 * dVar10;
      lVar30 = (longlong)(int)local_f8[0];
      uVar24 = 0;
      if ((int)local_f8[0] < (this->Vertices).ArrayNum) {
        uVar24 = ~local_f8[0] >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar14 = (code *)swi(3);
        uVar19 = (*pcVar14)();
        return (bool)uVar19;
      }
      if (*(double *)((pTVar1->AllocatorInstance).Data + lVar30 * 0x10) <= dVar4) {
        lVar30 = (longlong)(int)local_f8[0];
        uVar24 = 0;
        if ((int)local_f8[0] < (this->Vertices).ArrayNum) {
          uVar24 = ~local_f8[0] >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          uVar19 = (*pcVar14)();
          return (bool)uVar19;
        }
        (pTVar1->AllocatorInstance).Data[lVar30 * 0x10 + 8] = (FScriptContainerElement)0x0;
      }
      else {
        if (((local_f0.Data <= (FScriptContainerElement *)local_f8) &&
            ((FScriptContainerElement *)local_f8 < local_f0.Data + (longlong)local_e8._4_4_ * 4)) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          uVar19 = (*pcVar14)();
          return (bool)uVar19;
        }
        iVar20 = (int)local_e8;
        if ((int)local_e8 == local_e8._4_4_) {
          iVar20 = Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x404,&local_f0,(int *)((longlong)&local_e8 + 4));
        }
        local_e8 = CONCAT44(local_e8._4_4_,iVar20 + 1);
        *(uint *)(local_f0.Data + (longlong)iVar20 * 4) = local_f8[0];
        lVar30 = (longlong)(int)local_f8[0];
        uVar24 = 0;
        if ((int)local_f8[0] < (this->Vertices).ArrayNum) {
          uVar24 = ~local_f8[0] >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          uVar19 = (*pcVar14)();
          return (bool)uVar19;
        }
        (pTVar1->AllocatorInstance).Data[lVar30 * 0x10 + 8] = (FScriptContainerElement)0x1;
      }
      uVar25 = uVar25 + 1;
      uVar29 = (ulonglong)uVar25;
      if ((int)uVar25 < (int)uVar27) {
        do {
          uVar22 = (ulonglong)((uint)uVar29 & 0x1ff);
          lVar30 = *(longlong *)
                    ((pFVar16->RefCounts).Blocks.AllocatorInstance.Data + (uVar29 >> 9) * 8);
          if ((*(short *)(lVar30 + uVar22 * 2) != 0) && (*(short *)(lVar30 + uVar22 * 2) != -1))
          goto LAB_14c8bbca0;
          uVar25 = (uint)uVar29 + 1;
          uVar29 = (ulonglong)uVar25;
        } while ((int)uVar25 < (int)uVar27);
      }
    } while (uVar25 != uVar27);
  }
  uVar22 = 0;
  local_a8 = &local_f0;
  local_res8 = this->ErrorScale * ___real_3ea0c6f7a0000000;
  local_a0 = &local_res10;
  local_d0 = this->ErrorScale * __real_3eb0c6f7a0000000;
  local_88 = local_res18;
  local_80 = &local_d0;
  local_78 = &local_res8;
  local_b8 = Core::Private::Function::
             TFunctionRefCaller<`UE::Geometry::FMeshPlanarSymmetry::AssignMatches'::__l2::<lambda_1>,void,int>
             ::Call;
  local_b0 = &local_a8;
  iVar20 = 0;
  local_c8.DataPtr = (void **)0x0;
  local_c8.ArrayNum = 0;
  local_98 = this;
  local_90 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",(int)local_e8,1,(TFunctionRef<void___cdecl(int)> *)&local_b8,
             param_4._0_1_,None,&local_c8);
  pFVar17 = local_res10;
  uVar24 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar27 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  param_4._0_4_ = 0;
  uVar25 = (local_res10->VertexRefCounts).RefCounts.CurBlockUsed +
           (local_res10->VertexRefCounts).RefCounts.CurBlock * 0x200;
  uVar29 = uVar22;
  if ((uVar25 != 0) &&
     (pFVar13 = (local_res10->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar29 = 0,
     0xfffd < (ushort)(**(short **)pFVar13 - 1U))) {
    uVar29 = 1;
    uVar26 = 1;
    if ((int)uVar25 < 2) goto joined_r0x00014c8bc06b;
    do {
      sVar12 = *(short *)(*(longlong *)(pFVar13 + (uVar29 >> 9) * 8) +
                         (ulonglong)((uint)uVar29 & 0x1ff) * 2);
      if ((sVar12 != 0) && (sVar12 != -1)) break;
      uVar26 = (uint)uVar29 + 1;
      uVar29 = (ulonglong)uVar26;
    } while ((int)uVar26 < (int)uVar25);
  }
  uVar26 = (uint)uVar29;
joined_r0x00014c8bc06b:
  do {
    if (uVar26 == uVar25) {
      if (local_f0.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f0.Data);
      }
      return iVar20 == 0;
    }
    while( true ) {
      uVar26 = (uint)uVar29;
      uVar28 = ~uVar26 >> 0x1f;
      uVar21 = 0;
      if ((int)uVar26 < (this->Vertices).ArrayNum) {
        uVar21 = uVar28;
      }
      if (uVar21 == 0) {
        bVar18 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar18) {
          pcVar14 = (code *)swi(3);
          uVar19 = (*pcVar14)();
          return (bool)uVar19;
        }
        uVar22 = (ulonglong)(uint)param_4;
      }
      lVar30 = (longlong)(int)uVar26;
      if (*(int *)((pTVar1->AllocatorInstance).Data + lVar30 * 0x10 + 0xc) < 0) {
        uVar21 = 0;
        if ((int)uVar26 < (this->Vertices).ArrayNum) {
          uVar21 = uVar28;
        }
        if ((uVar21 == 0) &&
           (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar18)) {
          pcVar14 = (code *)swi(3);
          uVar19 = (*pcVar14)();
          return (bool)uVar19;
        }
        uVar11 = *(undefined8 *)((pTVar1->AllocatorInstance).Data + lVar30 * 0x10);
        if (local_res8 <=
            (double)CONCAT44((uint)((ulonglong)uVar11 >> 0x20) & uVar24,(uint)uVar11 & uVar27)) {
          param_4._0_4_ = (uint)param_4 + 1;
          uVar22 = (ulonglong)(uint)param_4;
        }
        else {
          uVar21 = 0;
          if ((int)uVar26 < (this->Vertices).ArrayNum) {
            uVar21 = uVar28;
          }
          if ((uVar21 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar14 = (code *)swi(3);
            uVar19 = (*pcVar14)();
            return (bool)uVar19;
          }
          (pTVar1->AllocatorInstance).Data[lVar30 * 0x10 + 8] = (FScriptContainerElement)0x0;
          uVar21 = 0;
          if ((int)uVar26 < (this->Vertices).ArrayNum) {
            uVar21 = uVar28;
          }
          if ((uVar21 == 0) &&
             (bVar18 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar18)) {
            pcVar14 = (code *)swi(3);
            uVar19 = (*pcVar14)();
            return (bool)uVar19;
          }
          uVar22 = (ulonglong)(uint)param_4;
          (pTVar1->AllocatorInstance).Data[lVar30 * 0x10 + 9] = (FScriptContainerElement)0x1;
        }
      }
      iVar20 = (int)uVar22;
      uVar26 = uVar26 + 1;
      uVar29 = (ulonglong)uVar26;
      if ((int)uVar25 <= (int)uVar26) break;
      while( true ) {
        uVar23 = (ulonglong)((uint)uVar29 & 0x1ff);
        lVar30 = *(longlong *)
                  ((pFVar17->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                  (uVar29 >> 9) * 8);
        if ((*(short *)(lVar30 + uVar23 * 2) != 0) && (*(short *)(lVar30 + uVar23 * 2) != -1))
        break;
        uVar26 = (uint)uVar29 + 1;
        uVar29 = (ulonglong)uVar26;
        if ((int)uVar25 <= (int)uVar26) goto joined_r0x00014c8bc06b;
      }
    }
  } while( true );
}

// ComputeMeshInfo @ 14c8cc240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
UE::Geometry::FMeshPlanarSymmetry::ComputeMeshInfo
          (FMeshPlanarSymmetry *this,FDynamicMesh3 *param_1,TAxisAlignedBox3<double> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TVector<double> *param_4)

{
  FScriptContainerElement *_Dst;
  code *pcVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined1 auStackY_218 [32];
  <lambda_1> local_1d8;
  FDynamicMesh3 *local_1d0;
  int local_1c8 [2];
  TArrayView<std::nullptr_t,int> local_1c0;
  FMeshNormals local_1b0;
  double local_198;
  code *local_190;
  FDynamicMesh3 ***local_188;
  double local_180;
  double local_178;
  double local_170;
  FDynamicMesh3 **local_168;
  FMeshNormals *local_160;
  TVector<double> *local_158;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *local_150;
  double *local_148;
  undefined1 local_138 [32];
  longlong local_118 [3];
  longlong *local_100;
  FRefCountVector *local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8 [40];
  longlong *local_c0;
  undefined1 local_b8 [48];
  IndexEnumerable local_88;
  ulonglong local_78;
  
  uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  local_78 = __security_cookie.value ^ (ulonglong)auStackY_218;
  iVar9 = 0;
  (param_4->field0_0x0)._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (param_4->field0_0x0)._s_0.Y = (double)uVar4;
  (param_4->field0_0x0)._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  dVar11 = ((param_2->Max).field0_0x0._s_0.X + (param_2->Min).field0_0x0._s_0.X) *
           __real_3fe0000000000000;
  dVar12 = ((param_2->Max).field0_0x0._s_0.Y + (param_2->Min).field0_0x0._s_0.Y) *
           __real_3fe0000000000000;
  dVar2 = ((param_2->Max).field0_0x0._s_0.Z + (param_2->Min).field0_0x0._s_0.Z) *
          __real_3fe0000000000000;
  local_1d0 = param_1;
  FDynamicMesh3::VerticesItr(param_1,(MappedEnumerable<UE::Math::TVector<double>_> *)local_b8);
  FRefCountVector::MappedEnumerable<UE::Math::TVector<double>_>::begin
            ((MappedEnumerable<UE::Math::TVector<double>_> *)local_b8,
             (MappedIterator<int,UE::Math::TVector<double>,UE::Geometry::FRefCountVector::IndexIterator>
              *)local_138);
  local_1c0.DataPtr = (void **)local_88.Vector;
  local_1c0.ArrayNum =
       ((local_88.Vector)->RefCounts).CurBlock * 0x200 + ((local_88.Vector)->RefCounts).CurBlockUsed
  ;
  uStack_f0 = CONCAT44(local_1c0.ArrayNum,local_1c0.ArrayNum);
  local_e8._0_8_ = 0;
  local_c0 = (longlong *)0x0;
  local_f8 = local_88.Vector;
  local_1c0._12_4_ = local_1c0.ArrayNum;
  TFunction<UE::Math::TVector<double>___cdecl(int)>::operator=
            ((TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_e8,
             (TFunction<UE::Math::TVector<double>___cdecl(int)> *)local_b8);
  dVar3 = __real_3ff0000000000000;
  if ((int)local_138._8_8_ != (int)uStack_f0) {
    do {
      local_1c8[0] = (int)local_138._8_8_;
      Core::Private::Function::CheckCallable((void *)local_138._16_8_);
      uVar4 = local_138._16_8_;
      plVar7 = local_118;
      if (local_100 != (longlong *)0x0) {
        plVar7 = local_100;
      }
      uVar6 = (**(code **)(*plVar7 + 8))();
      (*(code *)uVar4)(&local_180,uVar6,local_1c8);
      iVar9 = iVar9 + 1;
      dVar13 = dVar3 / (double)iVar9;
      (param_4->field0_0x0)._s_0.X =
           ((local_180 - dVar11) - (param_4->field0_0x0)._s_0.X) * dVar13 +
           (param_4->field0_0x0)._s_0.X;
      (param_4->field0_0x0)._s_0.Y =
           ((local_178 - dVar12) - (param_4->field0_0x0)._s_0.Y) * dVar13 +
           (param_4->field0_0x0)._s_0.Y;
      (param_4->field0_0x0)._s_0.Z =
           ((local_170 - dVar2) - (param_4->field0_0x0)._s_0.Z) * dVar13 +
           (param_4->field0_0x0)._s_0.Z;
      FRefCountVector::BaseIterator::goto_next((BaseIterator *)local_138);
    } while ((int)local_138._8_8_ != (int)uStack_f0);
  }
  if (local_e8._0_8_ != 0) {
    plVar7 = (longlong *)(local_e8 + 0x10);
    if (local_c0 != (longlong *)0x0) {
      plVar7 = local_c0;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if ((code *)local_138._16_8_ != (code *)0x0) {
    plVar7 = local_118;
    if (local_100 != (longlong *)0x0) {
      plVar7 = local_100;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  if (local_b8._0_8_ != 0) {
    plVar7 = (longlong *)(local_b8 + 0x10);
    if ((longlong *)local_b8._40_8_ != (longlong *)0x0) {
      plVar7 = (longlong *)local_b8._40_8_;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  local_1b0.Normals.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (param_4->field0_0x0)._s_0.X = dVar11 + (param_4->field0_0x0)._s_0.X;
  (param_4->field0_0x0)._s_0.Y = dVar12 + (param_4->field0_0x0)._s_0.Y;
  (param_4->field0_0x0)._s_0.Z = dVar2 + (param_4->field0_0x0)._s_0.Z;
  local_1b0.Normals.ArrayNum = 0;
  local_1b0.Normals.ArrayMax = 0;
  local_1b0.Mesh = local_1d0;
  FMeshNormals::Compute_FaceAvg(&local_1b0,false,true);
  uVar8 = (local_1d0->VertexRefCounts).RefCounts.CurBlockUsed +
          (local_1d0->VertexRefCounts).RefCounts.CurBlock * 0x200;
  iVar9 = param_3->ArrayNum;
  if (iVar9 < (int)uVar8) {
    Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x18,8,uVar8 - iVar9,&param_3->AllocatorInstance,&param_3->ArrayNum,
               &param_3->ArrayMax);
  }
  else {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
    }
    if ((int)uVar8 < iVar9) {
      uVar10 = iVar9 - uVar8;
      if (((int)(uVar8 | uVar10) < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            ), bVar5)) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      if (uVar10 != 0) {
        _Dst = (param_3->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x18;
        iVar9 = (param_3->ArrayNum - uVar10) - uVar8;
        if (iVar9 != 0) {
          memmove(_Dst,_Dst + (longlong)(int)uVar10 * 0x18,(longlong)iVar9 * 0x18);
        }
        iVar9 = param_3->ArrayNum - uVar10;
        param_3->ArrayNum = iVar9;
        Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x18,8,&param_3->AllocatorInstance,iVar9,&param_3->ArrayMax);
      }
    }
  }
  local_168 = &local_1d0;
  dVar11 = (param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y;
  local_198 = (param_2->Max).field0_0x0._s_0.Z - (param_2->Min).field0_0x0._s_0.Z;
  dVar12 = (param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X;
  if (dVar11 <= 0.0) {
    dVar11 = 0.0;
  }
  local_158 = param_4;
  if (local_198 <= 0.0) {
    local_198 = 0.0;
  }
  local_190 = Core::Private::Function::
              TFunctionRefCaller<`UE::Geometry::FMeshPlanarSymmetry::ComputeMeshInfo'::__l2::<lambda_1>,void,int>
              ::Call;
  local_160 = &local_1b0;
  if (dVar12 <= 0.0) {
    dVar12 = 0.0;
  }
  local_148 = &local_198;
  local_1c0.DataPtr = (void **)0x0;
  local_188 = &local_168;
  if (local_198 <= dVar11) {
    local_198 = dVar11;
  }
  local_1c0.ArrayNum = 0;
  if (local_198 <= dVar12) {
    local_198 = dVar12;
  }
  local_198 = __real_4000000000000000 / local_198;
  local_150 = param_3;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (local_1d0->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (local_1d0->VertexRefCounts).RefCounts.CurBlockUsed,1,
             (TFunctionRef<void___cdecl(int)> *)&local_190,local_1d8,None,&local_1c0);
  if (local_1b0.Normals.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b0.Normals.AllocatorInstance.Data);
  }
  return;
}

// ComputeSymmetryConstrainedPositions @ 14c8cd5c0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::FMeshPlanarSymmetry::ComputeSymmetryConstrainedPositions
          (FMeshPlanarSymmetry *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  code *pcVar9;
  bool bVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  
  iVar5 = param_1->ArrayNum;
  if ((param_2->ArrayNum != iVar5) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("MirrorVertexROI.Num() == NumV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\MeshPlanarSymmetry.cpp"
                          ,0x319,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  if ((param_3->ArrayNum != iVar5) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("SourceVertexPositions.Num() == NumV",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\MeshPlanarSymmetry.cpp"
                          ,0x31a,L""), bVar10)) {
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum(param_4,iVar5,No);
  uVar14 = 0;
  if (0 < iVar5) {
    lVar18 = 0;
    lVar16 = 0;
    do {
      uVar15 = ~uVar14 >> 0x1f;
      uVar11 = 0;
      if ((int)uVar14 < param_2->ArrayNum) {
        uVar11 = uVar15;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      uVar11 = *(uint *)((param_2->AllocatorInstance).Data + lVar18 * 4);
      if (-1 < (int)uVar11) {
        uVar12 = 0;
        if ((int)uVar14 < param_1->ArrayNum) {
          uVar12 = uVar15;
        }
        if ((uVar12 == 0) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar10)) {
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
        iVar6 = (this->Vertices).ArrayNum;
        uVar12 = *(uint *)((param_1->AllocatorInstance).Data + lVar18 * 4);
        if (uVar12 == uVar11) {
          uVar12 = 0;
          if ((int)uVar11 < iVar6) {
            uVar12 = ~uVar11 >> 0x1f;
          }
          if ((uVar12 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar11 = *(uint *)((this->Vertices).AllocatorInstance.Data +
                            (longlong)(int)uVar11 * 0x10 + 0xc);
          uVar17 = (ulonglong)(uVar11 & 0x1ff);
          lVar7 = *(longlong *)
                   ((this->TargetMesh->Vertices).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar11 >> 9) * 8);
          pdVar1 = (double *)(lVar7 + uVar17 * 0x18);
          dVar3 = *pdVar1;
          dVar4 = pdVar1[1];
          dVar2 = *(double *)(lVar7 + 0x10 + uVar17 * 0x18);
          dVar19 = dVar2 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Z;
          dVar20 = dVar3 - (this->SymmetryFrame).Origin.field0_0x0._s_0.X;
          dVar21 = dVar4 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Y;
          uVar11 = 0;
          if ((int)uVar14 < param_4->ArrayNum) {
            uVar11 = uVar15;
          }
          dVar22 = (dVar21 + dVar21) * (this->CachedSymmetryAxis).field0_0x0._s_0.Y +
                   (dVar20 + dVar20) * (this->CachedSymmetryAxis).field0_0x0._s_0.X +
                   (dVar19 + dVar19) * (this->CachedSymmetryAxis).field0_0x0._s_0.Z;
          dVar19 = (this->CachedSymmetryAxis).field0_0x0._s_0.X;
          dVar20 = (this->CachedSymmetryAxis).field0_0x0._s_0.Y;
          dVar21 = (this->CachedSymmetryAxis).field0_0x0._s_0.Z;
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar8 = (param_4->AllocatorInstance).Data;
          *(double *)(pFVar8 + lVar16) = dVar3 - dVar22 * dVar19;
          *(double *)(pFVar8 + lVar16 + 8) = dVar4 - dVar22 * dVar20;
          *(double *)(pFVar8 + lVar16 + 0x10) = dVar2 - dVar22 * dVar21;
        }
        else {
          uVar13 = 0;
          if ((int)uVar12 < iVar6) {
            uVar13 = ~uVar12 >> 0x1f;
          }
          if ((uVar13 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          if ((*(uint *)((this->Vertices).AllocatorInstance.Data +
                        (longlong)(int)uVar12 * 0x10 + 0xc) != uVar11) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Vertices[SourceVertexID].PairedVertex == MirrorVertexID",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\MeshPlanarSymmetry.cpp"
                                  ,0x32b,L""), bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          uVar11 = 0;
          if ((int)uVar14 < param_3->ArrayNum) {
            uVar11 = uVar15;
          }
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar8 = (param_3->AllocatorInstance).Data;
          dVar2 = (this->CachedSymmetryAxis).field0_0x0._s_0.Y;
          dVar3 = (this->CachedSymmetryAxis).field0_0x0._s_0.X;
          dVar4 = (this->CachedSymmetryAxis).field0_0x0._s_0.Z;
          dVar19 = *(double *)(pFVar8 + lVar16 + 8);
          dVar20 = *(double *)(pFVar8 + lVar16);
          dVar21 = *(double *)(pFVar8 + lVar16 + 0x10);
          uVar11 = 0;
          if ((int)uVar14 < param_4->ArrayNum) {
            uVar11 = uVar15;
          }
          dVar22 = (dVar19 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Y) * (dVar2 + dVar2) +
                   (dVar20 - (this->SymmetryFrame).Origin.field0_0x0._s_0.X) * (dVar3 + dVar3) +
                   (dVar21 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Z) * (dVar4 + dVar4);
          if ((uVar11 == 0) &&
             (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar10)) {
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
          pFVar8 = (param_4->AllocatorInstance).Data;
          *(double *)(pFVar8 + lVar16) = dVar20 - dVar22 * dVar3;
          *(double *)(pFVar8 + lVar16 + 8) = dVar19 - dVar22 * dVar2;
          *(double *)(pFVar8 + lVar16 + 0x10) = dVar21 - dVar22 * dVar4;
        }
      }
      uVar14 = uVar14 + 1;
      lVar18 = lVar18 + 1;
      lVar16 = lVar16 + 0x18;
    } while (lVar18 < iVar5);
  }
  return;
}

// FindPlaneAndInitialize @ 14c8e7240

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __thiscall
UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize
          (FMeshPlanarSymmetry *this,FDynamicMesh3 *param_1,TAxisAlignedBox3<double> *param_2,
          TFrame3<double> *param_3,TArrayView<UE::Math::TVector<double>_const_,int> *param_4)

{
  TTypeCompatibleBytes<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
  *pTVar1;
  uchar *puVar2;
  double *pdVar3;
  undefined8 uVar4;
  short sVar5;
  TVector<double> *pTVar6;
  FScriptContainerElement *pFVar7;
  code *pcVar8;
  double dVar9;
  FDynamicMesh3 *pFVar10;
  FMeshPlanarSymmetry *this_00;
  FClusterInfo *pFVar11;
  bool bVar12;
  undefined1 uVar13;
  bool bVar14;
  uint uVar15;
  ForElementType<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
  *pFVar16;
  ulonglong uVar17;
  TVector<double>_u_0 *pTVar18;
  undefined1 *puVar19;
  int iVar20;
  TTypeCompatibleBytes<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
  *pTVar21;
  TVector<double> *pTVar22;
  ulonglong uVar23;
  longlong lVar24;
  TAxisAlignedBox3<double> *pTVar25;
  uint uVar26;
  uint *puVar27;
  int iVar28;
  uint uVar29;
  uint uVar30;
  longlong lVar31;
  ForAnyElementType FVar32;
  ulonglong uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  undefined1 auVar41 [16];
  double dVar42;
  double dVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  uint uVar47;
  undefined4 uVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  undefined1 auStackY_be8 [32];
  FDynamicMesh3 *local_b98;
  undefined1 local_b90;
  undefined1 local_b8f;
  undefined1 local_b8e;
  FIdentityFunctor local_b8d;
  uint local_b8c;
  ForAnyElementType local_b88;
  int local_b80;
  int local_b7c;
  double local_b78;
  double dStack_b70;
  double local_b68;
  undefined1 local_b60 [4];
  uint local_b5c;
  TVector<double>_u_0 local_b58;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_b40;
  TFrame3<double> *local_b30;
  TArray<int,TSizedDefaultAllocator<32>_> local_b28;
  ForElementType<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
  *local_b18;
  FClusterInfo local_b10;
  FSizedDisjointSet local_b08;
  ForAnyElementType local_ae8;
  undefined8 local_ae0;
  TArrayView<UE::Math::TVector<double>_const_,int> *local_ad8;
  FMeshPlanarSymmetry *local_ad0;
  TAxisAlignedBox3<double> *local_ac8;
  IndexIterator local_ac0;
  uint local_ab0;
  int local_aac;
  double local_aa8;
  double dStack_aa0;
  double local_a98;
  double local_a88;
  double dStack_a80;
  uint local_a78;
  undefined4 uStack_a74;
  TVector<double>_u_0 local_a70;
  TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> local_a58;
  ForAnyElementType *local_a48;
  double local_a40;
  double local_a38;
  double local_a30;
  double local_a28;
  double local_a20;
  ulonglong local_a18;
  ulonglong local_a10;
  FClusterInfo *local_a08;
  BaseIterator local_a00;
  double local_9f0;
  double dStack_9e8;
  double local_9e0;
  TQuaternion<double>_u_0 TStack_9d8;
  double local_9b8;
  double dStack_9b0;
  double local_9a8;
  TVector<double>_u_0 local_9a0;
  TVector<double>_u_0 local_988;
  double local_970;
  double dStack_968;
  double local_960;
  TQuaternion<double>_u_0 TStack_958;
  double local_938;
  double dStack_930;
  double local_928;
  TQuaternion<double>_u_0 TStack_920;
  double local_900;
  double dStack_8f8;
  double local_8f0;
  TQuaternion<double>_u_0 TStack_8e8;
  double local_8c8;
  double dStack_8c0;
  double local_8b8;
  TQuaternion<double>_u_0 TStack_8b0;
  double local_890;
  double dStack_888;
  double local_880;
  TQuaternion<double>_u_0 TStack_878;
  double local_858;
  double dStack_850;
  double local_848;
  TQuaternion<double>_u_0 TStack_840;
  code *local_820;
  FIdentityFunctor *local_818;
  FVector3i *local_810;
  uint *local_808;
  IndexIterator local_800;
  code *local_7f0;
  FDynamicMesh3 ***local_7e8;
  code *local_7e0;
  ForAnyElementType **local_7d8;
  code *local_7d0;
  TArray<int,TSizedDefaultAllocator<32>_> **local_7c8;
  code *local_7c0;
  undefined1 *local_7b8;
  TVector<double>_u_0 local_7b0;
  TArray<int,TSizedDefaultAllocator<32>_> *local_798;
  FClusterInfo *local_790;
  FDynamicMesh3 **local_788;
  FVector3i local_780;
  double local_770;
  double local_768;
  double local_760;
  TVector<double>_u_0 local_758 [2];
  undefined1 local_728 [16];
  double local_718;
  FDynamicMesh3 **local_708;
  double *local_700;
  ForAnyElementType *local_6f8;
  FDynamicMesh3 *local_6e8;
  double local_6e0;
  double dStack_6d8;
  double local_6d0;
  undefined1 *local_6c8;
  FMeshPlanarSymmetry *local_6c0;
  double local_6b8;
  double local_6b0;
  TVector<double>_u_0 local_6a8;
  TVector<double>_u_0 local_690;
  TVector<double>_u_0 local_678;
  TVector<double>_u_0 local_660;
  TVector<double>_u_0 local_648;
  double local_630;
  TVector<double>_u_0 local_628;
  double local_610;
  IndexIterator local_608;
  double local_5f8;
  TVector<double>_u_0 local_5f0;
  TVector<double>_u_0 local_5d8;
  TVector<double>_u_0 local_5c0;
  TVector<double>_u_0 local_5a8;
  TVector<double>_u_0 local_588;
  TVector<double>_u_0 local_568;
  double dStack_550;
  double local_548;
  double dStack_540;
  double local_538;
  TVector<double>_u_0 local_528;
  double dStack_510;
  double local_508;
  double dStack_500;
  double local_4f8;
  TVector<double>_u_0 local_4e8;
  double dStack_4d0;
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  TVector<double>_u_0 local_4a8;
  double dStack_490;
  double local_488;
  double dStack_480;
  double local_478;
  TVector<double>_u_0 local_468;
  double dStack_450;
  double local_448;
  double dStack_440;
  double local_438;
  TVector<double>_u_0 local_428;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  TVector<double>_u_0 local_3e8;
  double dStack_3d0;
  double local_3c8;
  double dStack_3c0;
  double local_3b8;
  TVector<double> local_3a8;
  double local_390;
  double dStack_388;
  double local_380;
  double local_378;
  double dStack_370;
  double local_368;
  undefined1 local_358 [32];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8 [16];
  double local_2e8;
  TVector<double> local_2d8;
  longlong local_2b8;
  undefined8 local_2b0;
  undefined8 local_298;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  int local_284;
  undefined1 local_280 [8];
  undefined1 *local_278;
  int local_270;
  undefined1 local_268 [8];
  int aiStack_260 [4];
  TVector<double>_u_0 TStack_250;
  TVector<double>_u_0 local_238;
  TVector<double>_u_0 TStack_220;
  TVector<double>_u_0 local_208;
  undefined1 local_1e8 [72];
  int local_1a0;
  TWrapAroundGridIndexer3<double> local_190 [3];
  TExtremePoints3<double> local_178;
  ulonglong local_f8;
  
  local_f8 = __security_cookie.value ^ (ulonglong)auStackY_be8;
  local_ad8 = param_4;
  this->TargetMesh = param_1;
  dVar36 = __real_3ff0000000000000;
  if ((param_1 != (FDynamicMesh3 *)0x0) && ((param_1->VertexRefCounts).UsedCount != 0)) {
    dVar42 = (param_2->Max).field0_0x0._s_0.Z - (param_2->Min).field0_0x0._s_0.Z;
    dVar43 = (param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y;
    dVar39 = (param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X;
    uVar34 = SUB84(__real_3ff0000000000000,0);
    uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
    if (dVar42 <= 0.0) {
      dVar42 = 0.0;
    }
    if (dVar43 <= 0.0) {
      dVar43 = 0.0;
    }
    if (dVar39 <= 0.0) {
      dVar39 = 0.0;
    }
    if (dVar42 <= dVar43) {
      dVar42 = dVar43;
    }
    if (dVar42 <= dVar39) {
      dVar42 = dVar39;
    }
    if (dVar42 <= __real_3ff0000000000000) {
      dVar42 = __real_3ff0000000000000;
    }
    this->ErrorScale = dVar42;
    dVar9 = (param_2->Max).field0_0x0._s_0.Z - (param_2->Min).field0_0x0._s_0.Z;
    dVar43 = (param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y;
    dVar39 = (param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X;
    dVar37 = dVar42 * ___real_3ea0c6f7a0000000;
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    dVar40 = dVar42 * __real_3eb0c6f7a0000000;
    if (dVar43 <= 0.0) {
      dVar43 = 0.0;
    }
    if (dVar39 <= 0.0) {
      dVar39 = 0.0;
    }
    if (dVar9 <= dVar43) {
      dVar9 = dVar43;
    }
    if (dVar9 <= dVar39) {
      dVar9 = dVar39;
    }
    local_b98 = param_1;
    local_b30 = param_3;
    local_ad0 = this;
    local_ac8 = param_2;
    local_a40 = dVar40;
    if (dVar37 <= dVar9) {
      uVar33 = 0;
      local_b40.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b40.ArrayNum = 0;
      local_b40.ArrayMax = 0;
      ComputeMeshInfo(this,param_1,param_2,&local_b40,(TVector<double> *)&local_b58._s_0);
      auVar45._0_8_ = dVar42 * __real_3ee4f8b588000000;
      auVar45._8_8_ = 0;
      TPointHashGrid3<int,double>::TPointHashGrid3<int,double>
                ((TPointHashGrid3<int,double> *)local_1e8,auVar45._0_8_,-1);
      TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
      ::Reserve((TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                 *)local_1e8,(local_b98->VertexRefCounts).UsedCount);
      pFVar10 = local_b98;
      FRefCountVector::IndexIterator::IndexIterator
                ((IndexIterator *)&local_a00,&local_b98->VertexRefCounts,0,
                 (local_b98->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (local_b98->VertexRefCounts).RefCounts.CurBlockUsed);
      iVar28 = (pFVar10->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar10->VertexRefCounts).RefCounts.CurBlockUsed;
      FRefCountVector::IndexIterator::IndexIterator
                (&local_608,&pFVar10->VertexRefCounts,iVar28,iVar28);
      if (local_a00.Index != local_608._8_4_) {
        local_810 = &local_780;
        local_808 = &local_ab0;
        do {
          local_ab0 = local_a00.Index;
          lVar24 = *(longlong *)
                    ((local_b98->Vertices).Blocks.AllocatorInstance.Data +
                    ((local_a00._8_8_ & 0xffffffff) >> 9) * 8);
          pdVar3 = (double *)(lVar24 + (ulonglong)(local_ab0 & 0x1ff) * 0x18);
          local_660._s_0.X = *pdVar3;
          local_660._s_0.Y = pdVar3[1];
          local_660._s_0.Z = *(double *)(lVar24 + 0x10 + (ulonglong)(local_ab0 & 0x1ff) * 0x18);
          TWrapAroundGridIndexer3<double>::ToGrid
                    (local_190,&local_780,(TVector<double> *)&local_660._s_0);
          TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                    ((TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                      *)local_1e8,&local_a58,(bool *)&local_810);
          FRefCountVector::BaseIterator::goto_next(&local_a00);
        } while (local_a00.Index != local_608._8_4_);
      }
      iVar28 = (local_b98->VertexRefCounts).RefCounts.CurBlockUsed +
               (local_b98->VertexRefCounts).RefCounts.CurBlock * 0x200;
      local_b08.Parents.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b08.Parents.ArrayNum = 0;
      local_b08.Parents.ArrayMax = 0;
      local_b08.Sizes.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_b08.Sizes.ArrayNum = 0;
      local_b08.Sizes.ArrayMax = 0;
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                (&local_b08.Parents,iVar28,Default);
      TArray<int,TSizedDefaultAllocator<32>_>::SetNumUninitialized(&local_b08.Sizes,iVar28,Default);
      uVar23 = uVar33;
      uVar17 = uVar33;
      if (0 < iVar28) {
        do {
          uVar47 = (uint)uVar17;
          uVar15 = 0;
          if ((int)uVar47 < local_b08.Parents.ArrayNum) {
            uVar15 = ~uVar47 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            uVar13 = (*pcVar8)();
            return (bool)uVar13;
          }
          *(uint *)(local_b08.Parents.AllocatorInstance.Data + uVar23 * 4) = uVar47;
          uVar15 = 0;
          if ((int)uVar47 < local_b08.Sizes.ArrayNum) {
            uVar15 = ~uVar47 >> 0x1f;
          }
          if ((uVar15 == 0) &&
             (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar12)) {
            pcVar8 = (code *)swi(3);
            uVar13 = (*pcVar8)();
            return (bool)uVar13;
          }
          *(undefined4 *)(local_b08.Sizes.AllocatorInstance.Data + uVar23 * 4) = 1;
          uVar23 = uVar23 + 1;
          uVar17 = (ulonglong)(uVar47 + 1);
        } while ((longlong)uVar23 < (longlong)iVar28);
      }
      pFVar10 = local_b98;
      local_2b8 = 0;
      local_2b0 = 0;
      local_298 = 0;
      local_290 = 0;
      local_28c = 0x80;
      local_288 = 0xffffffff;
      local_284 = 0;
      local_278 = (undefined1 *)0x0;
      local_270 = 0;
      FRefCountVector::IndexIterator::IndexIterator
                (&local_ac0,&local_b98->VertexRefCounts,0,
                 (local_b98->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (local_b98->VertexRefCounts).RefCounts.CurBlockUsed);
      iVar28 = (pFVar10->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (pFVar10->VertexRefCounts).RefCounts.CurBlockUsed;
      FRefCountVector::IndexIterator::IndexIterator
                (&local_800,&pFVar10->VertexRefCounts,iVar28,iVar28);
      dVar43 = __real_3fe0000000000000;
      if (local_ac0._8_4_ != local_800._8_4_) {
        dVar39 = __real_3fe5555555555555 / dVar40;
        uVar15 = local_800._8_4_;
        iVar28 = local_ac0._12_4_;
        do {
          uVar50 = local_ac0._8_4_;
          uVar47 = local_ac0._8_4_;
          lVar24 = *(longlong *)
                    ((local_b98->Vertices).Blocks.AllocatorInstance.Data +
                    (ulonglong)((uint)local_ac0._8_4_ >> 9) * 8);
          pdVar3 = (double *)(lVar24 + (ulonglong)(local_ac0._8_4_ & 0x1ff) * 0x18);
          local_390 = *pdVar3;
          dStack_388 = pdVar3[1];
          local_380 = *(double *)(lVar24 + 0x10 + (ulonglong)(local_ac0._8_4_ & 0x1ff) * 0x18);
          auVar46._8_8_ = 0;
          auVar46._0_8_ =
               (local_b58._s_0.Y - dStack_388) * (local_b58._s_0.Y - dStack_388) +
               (local_b58._s_0.X - local_390) * (local_b58._s_0.X - local_390) +
               (local_b58._s_0.Z - local_380) * (local_b58._s_0.Z - local_380);
          auVar46 = sqrtpd(auVar45,auVar46);
          auVar45._8_8_ = auVar46._8_8_;
          auVar45._0_8_ = auVar46._0_8_ + dVar40;
          dVar42 = auVar46._0_8_ - dVar40;
          local_b5c = (int)ROUND(dVar42 * dVar39 - dVar43) >> 1;
          local_b8c = (int)ROUND(auVar45._0_8_ * dVar39 - dVar43) >> 1;
          if ((int)local_b5c <= (int)local_b8c) {
            do {
              if ((int)local_2b0 != local_284) {
                puVar19 = local_280;
                if (local_278 != (undefined1 *)0x0) {
                  puVar19 = local_278;
                }
                uVar15 = *(uint *)(puVar19 + (ulonglong)(local_270 - 1U & local_b5c) * 4);
                while (uVar15 != 0xffffffff) {
                  puVar27 = (uint *)((longlong)(int)uVar15 * 0x78 + local_2b8);
                  if (*puVar27 == local_b5c) {
                    if (puVar27 != (uint *)0x0) goto LAB_14c8e79a6;
                    break;
                  }
                  uVar15 = puVar27[0x1c];
                }
              }
              local_a58.Value = (int *)&local_b5c;
              TSet<TTuple<int,TArray<`UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l2::FRange,TFixedAllocator<4>_>_>,TDefaultMapHashableKeyFuncs<int,TArray<`UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l2::FRange,TFixedAllocator<4>_>,0>,FDefaultSetAllocator>
              ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                        (&local_2b8,(uint)&local_aac,
                         (TKeyInitializer<int_const_&> *)(ulonglong)local_b5c,
                         (bool *)&local_a58.Value);
              puVar27 = (uint *)((longlong)local_aac * 0x78 + local_2b8);
LAB_14c8e79a6:
              uVar15 = puVar27[0x1a];
              pTVar1 = (TTypeCompatibleBytes<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
                        *)(puVar27 + 2);
              bVar12 = false;
              pFVar16 = (ForElementType<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
                         *)(puVar27 + ((longlong)(int)uVar15 * 3 + 1) * 2);
              pTVar21 = pTVar1;
              local_b18 = pFVar16;
              while( true ) {
                if (puVar27[0x1a] != uVar15) {
                  local_b90 = 0;
                  `TCheckedPointerIterator<`UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l2::FRange,int,0>
                  ::operator!='::__l2::<lambda_1>::operator()(&local_b90);
                  pFVar16 = local_b18;
                }
                if ((ForElementType<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
                     *)pTVar21 == pFVar16) break;
                puVar2 = ((TTypeCompatibleBytes<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
                           *)pTVar21->Pad)->Pad + 8;
                if ((dVar42 < *(double *)puVar2 || dVar42 == *(double *)puVar2) &&
                   (*(double *)
                     ((TTypeCompatibleBytes<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
                       *)pTVar21->Pad)->Pad <= auVar45._0_8_)) {
                  bVar12 = true;
                  FSizedDisjointSet::Union
                            (&local_b08,uVar50,
                             *(int *)(((TTypeCompatibleBytes<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
                                        *)pTVar21->Pad)->Pad + 0x10));
                  if (dVar42 < *(double *)
                                ((TTypeCompatibleBytes<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
                                  *)pTVar21->Pad)->Pad) {
                    *(double *)
                     ((TTypeCompatibleBytes<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
                       *)pTVar21->Pad)->Pad = dVar42;
                  }
                  puVar2 = ((TTypeCompatibleBytes<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
                             *)pTVar21->Pad)->Pad + 8;
                  pFVar16 = local_b18;
                  if (*(double *)puVar2 <= auVar45._0_8_ && auVar45._0_8_ != *(double *)puVar2) {
                    *(double *)
                     (((TTypeCompatibleBytes<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
                        *)pTVar21->Pad)->Pad + 8) = auVar45._0_8_;
                  }
                }
                pTVar21 = pTVar21 + 1;
              }
              if (!bVar12) {
                if ((3 < (int)puVar27[0x1a]) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Bucket.Num() < MaxRangesPerBucket",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\MeshPlanarSymmetry.cpp"
                                        ,0xa4,L""), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  uVar13 = (*pcVar8)();
                  return (bool)uVar13;
                }
                local_a88 = dVar42;
                dStack_a80 = auVar45._0_8_;
                local_a78 = uVar47;
                if (((pTVar1 <= &local_a88) && (&local_a88 < pTVar1 + (int)puVar27[0x1b])) &&
                   (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                                       ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x7a5,
                                        L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                       ), bVar12)) {
                  pcVar8 = (code *)swi(3);
                  uVar13 = (*pcVar8)();
                  return (bool)uVar13;
                }
                uVar15 = puVar27[0x1a];
                if (uVar15 == puVar27[0x1b]) {
                  uVar15 = Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<0,TFixedAllocator<4>::ForElementType<_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize_::__l2::FRange>_>
                                     (0x818,(ForElementType<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
                                             *)pTVar1,(int *)(puVar27 + 0x1b));
                }
                puVar27[0x1a] = uVar15 + 1;
                *(double *)pTVar1[(int)uVar15].Pad = local_a88;
                *(double *)(pTVar1[(int)uVar15].Pad + 8) = dStack_a80;
                *(ulonglong *)(puVar27 + (longlong)(int)uVar15 * 6 + 6) =
                     CONCAT44(uStack_a74,local_a78);
              }
              local_b5c = local_b5c + 1;
              uVar15 = local_800._8_4_;
              iVar28 = local_ac0._12_4_;
            } while ((int)local_b5c <= (int)local_b8c);
          }
          local_ac0._8_4_ = local_ac0._8_4_ + 1;
          if ((int)local_ac0._8_4_ < iVar28) {
            do {
              if ((*(short *)(*(longlong *)
                               (*(longlong *)(local_ac0._0_8_ + 8) +
                               (ulonglong)((uint)local_ac0._8_4_ >> 9) * 8) +
                             (ulonglong)(local_ac0._8_4_ & 0x1ff) * 2) != 0) &&
                 (*(short *)(*(longlong *)
                              (*(longlong *)(local_ac0._0_8_ + 8) +
                              (ulonglong)((uint)local_ac0._8_4_ >> 9) * 8) +
                            (ulonglong)(local_ac0._8_4_ & 0x1ff) * 2) != -1)) break;
              local_ac0._8_4_ = local_ac0._8_4_ + 1;
            } while ((int)local_ac0._8_4_ < iVar28);
          }
          param_2 = local_ac8;
          param_3 = local_b30;
        } while (local_ac0._8_4_ != uVar15);
      }
      FVertexConnectedComponents::MakeContiguousComponentsArray
                ((FVertexConnectedComponents *)&local_b08,&local_b28,
                 (local_b98->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (local_b98->VertexRefCounts).RefCounts.CurBlockUsed);
      local_ae8.Data = (FScriptContainerElement *)0x0;
      local_ae0 = 0;
      iVar28 = Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x818,&local_ae8,(int *)((longlong)&local_ae0 + 4));
      local_ae0 = CONCAT44(local_ae0._4_4_,iVar28 + 1);
      *(double *)(local_ae8.Data + (longlong)iVar28 * 0x18) = local_b58._s_0.X;
      *(double *)(local_ae8.Data + (longlong)iVar28 * 0x18 + 8) = local_b58._s_0.Y;
      *(double *)(local_ae8.Data + (longlong)iVar28 * 0x18 + 0x10) = local_b58._s_0.Z;
      local_708 = &local_b98;
      local_700 = &local_770;
      local_770 = ((param_2->Max).field0_0x0._s_0.X + (param_2->Min).field0_0x0._s_0.X) * dVar43;
      local_7e8 = &local_708;
      local_768 = ((param_2->Min).field0_0x0._s_0.Y + (param_2->Max).field0_0x0._s_0.Y) * dVar43;
      local_7f0 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l2::<lambda_1>,bool,int,TArrayView<int_const_,int>_>
                  ::Call;
      local_760 = ((param_2->Max).field0_0x0._s_0.Z + (param_2->Min).field0_0x0._s_0.Z) * dVar43;
      local_6f8 = &local_ae8;
      FVertexConnectedComponents::EnumerateContiguousComponentsFromArray
                ((FVertexConnectedComponents *)&local_b08,&local_b28,
                 (TFunctionRef<bool___cdecl(int,TArrayView<int_const_,int>)> *)&local_7f0);
      this_00 = local_ad0;
      dVar43 = __real_3f1a36e2eb1c432d;
      uVar50 = SUB84(__real_3f1a36e2eb1c432d,0);
      uVar51 = (undefined4)((ulonglong)__real_3f1a36e2eb1c432d >> 0x20);
      local_6e8 = local_b98;
      local_6c8 = local_1e8;
      local_818 = &local_b8d;
      local_820 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l2::<lambda_4>,bool,int>
                  ::Call;
      local_7d8 = &local_a48;
      local_7e0 = Core::Private::Function::
                  TFunctionRefCaller<`UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l2::<lambda_3>,UE::Math::TVector<double>,int>
                  ::Call;
      local_6e0 = local_b58._s_0.X;
      dStack_6d8 = local_b58._s_0.Y;
      local_6c0 = local_ad0;
      local_6d0 = local_b58._s_0.Z;
      local_a48 = &local_ae8;
      local_6b8 = dVar37;
      local_6b0 = dVar40;
      TExtremePoints3<double>::TExtremePoints3<double>
                (&local_178,(int)local_ae0,
                 (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_7e0,
                 (TFunctionRef<bool___cdecl(int)> *)&local_820,__real_3f1a36e2eb1c432d);
      if (local_178.Dimension < 2) {
        local_b68 = 0.0;
        uVar48 = 0;
        uVar49 = 0;
        local_b78 = 0.0;
        dStack_b70 = 0.0;
        bVar12 = local_178.Dimension == 1;
        if (bVar12) {
          uVar48 = SUB84(local_178.Basis[0].field0_0x0._s_0.Z,0);
          uVar49 = (undefined4)((ulonglong)local_178.Basis[0].field0_0x0._16_8_ >> 0x20);
          local_b78 = (double)local_178.Basis[0].field0_0x0._0_8_;
          dStack_b70 = local_178.Basis[0].field0_0x0._s_0.Y;
          local_b68 = (double)local_178.Basis[0].field0_0x0._16_8_;
        }
        auVar41._4_4_ = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
        auVar41._0_4_ = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
        auVar41._8_4_ = _UNK_15061cc88;
        auVar41._12_4_ = _UNK_15061cc8c;
        uVar15 = SUB84(local_b78,0);
        uVar47 = (uint)((ulonglong)local_b78 >> 0x20);
        pTVar22 = local_ad8->DataPtr;
        pTVar6 = pTVar22 + local_ad8->ArrayNum;
        dVar39 = dStack_b70;
        for (; pTVar22 != pTVar6; pTVar22 = pTVar22 + 1) {
          local_7b0._s_0.Z = (pTVar22->field0_0x0)._s_0.Z;
          local_7b0._s_0.X = (pTVar22->field0_0x0)._s_0.X;
          local_7b0._s_0.Y = (pTVar22->field0_0x0)._s_0.Y;
          if ((!bVar12) ||
             (dVar42 = local_7b0._s_0.Y * dVar39 +
                       local_7b0._s_0.X * (double)CONCAT44(uVar47,uVar15) +
                       local_7b0._s_0.Z * (double)CONCAT44(uVar49,uVar48),
             (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) & auVar41._4_4_,
                              SUB84(dVar42,0) & auVar41._0_4_) < dVar43)) {
            local_588._s_0.X = (pTVar22->field0_0x0)._s_0.X;
            local_588._s_0.Y = (pTVar22->field0_0x0)._s_0.Y;
            local_588._s_0.Z = (pTVar22->field0_0x0)._s_0.Z;
            bVar14 = `UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l2::<lambda_2>::
                     operator()(&local_6e8,(TVector<double> *)&local_588._s_0,&local_2d8);
            if (bVar14) {
              local_938 = local_b58._s_0.X;
              dStack_930 = local_b58._s_0.Y;
              TStack_920._s_0.X = 0.0;
              local_6a8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
              local_6a8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
              local_6a8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
              TStack_920._s_0.W = dVar36;
              TStack_920._s_0.Y = 0.0;
              TStack_920._s_0.Z = 0.0;
              local_928 = local_b58._s_0.Z;
              TQuaternion<double>::SetFromTo
                        ((TQuaternion<double> *)&TStack_920._s_0,(TVector<double> *)&local_6a8._s_0,
                         (TVector<double> *)&local_7b0._s_0);
              (local_b30->Origin).field0_0x0._s_0.X = local_938;
              (local_b30->Origin).field0_0x0._s_0.Y = dStack_930;
              (local_b30->Origin).field0_0x0._s_0.Z = local_928;
              (local_b30->Rotation).field0_0x0._s_0.X = TStack_920._s_0.X;
              (local_b30->Rotation).field0_0x0._s_0.Y = TStack_920._s_0.Y;
              (local_b30->Rotation).field0_0x0._s_0.Z = TStack_920._s_0.Z;
              (local_b30->Rotation).field0_0x0._s_0.W = TStack_920._s_0.W;
              local_4e8._s_0.X = local_938;
              local_4e8._s_0.Y = dStack_930;
              local_4e8._s_0.Z = local_928;
              dStack_4d0 = TStack_920._s_0.X;
              local_4c8 = TStack_920._s_0.Y;
              dStack_4c0 = TStack_920._s_0.Z;
              local_4b8 = TStack_920._s_0.W;
              bVar12 = AssignMatches(this_00,local_b98,(TPointHashGrid3<int,double> *)local_1e8,
                                     &local_b40,(TFrame3<double> *)&local_4e8._s_0);
              goto LAB_14c8e93dc;
            }
            uVar48 = SUB84(local_b68,0);
            uVar49 = (undefined4)((ulonglong)local_b68 >> 0x20);
            uVar15 = SUB84(local_b78,0);
            uVar47 = (uint)((ulonglong)local_b78 >> 0x20);
            auVar41._4_4_ = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
            auVar41._0_4_ = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
            auVar41._8_4_ = _UNK_15061cc88;
            auVar41._12_4_ = _UNK_15061cc8c;
            dVar39 = dStack_b70;
          }
        }
        if (bVar12) {
          uVar30 = (local_b98->VertexRefCounts).RefCounts.CurBlockUsed;
          iVar28 = (local_b98->VertexRefCounts).RefCounts.CurBlock * 0x200 + uVar30;
          uVar23 = uVar33;
          if (((iVar28 != 0) &&
              (pFVar7 = (local_b98->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data,
              uVar23 = 0, 0xfffd < (ushort)(**(short **)pFVar7 - 1U))) && (uVar23 = 1, 1 < iVar28))
          {
            do {
              sVar5 = *(short *)(*(longlong *)(pFVar7 + (uVar23 >> 9) * 8) +
                                (ulonglong)((uint)uVar23 & 0x1ff) * 2);
              if ((sVar5 != 0) && (sVar5 != -1)) break;
              uVar29 = (uint)uVar23 + 1;
              uVar23 = (ulonglong)uVar29;
            } while ((int)uVar29 < iVar28);
          }
          iVar20 = (local_b98->VertexRefCounts).RefCounts.CurBlock * 0x200 + uVar30;
          if ((int)uVar23 != iVar20) {
LAB_14c8e8050:
            do {
              uVar17 = (ulonglong)((uint)uVar23 & 0x1ff);
              lVar24 = *(longlong *)
                        ((local_b98->Vertices).Blocks.AllocatorInstance.Data + (uVar23 >> 9) * 8);
              pdVar3 = (double *)(lVar24 + uVar17 * 0x18);
              local_378 = *pdVar3;
              dStack_370 = pdVar3[1];
              local_368 = *(double *)(lVar24 + 0x10 + uVar17 * 0x18);
              dVar36 = dVar39 * (dStack_370 - local_b58._s_0.Y) +
                       (double)CONCAT44(uVar47,uVar15) * (local_378 - local_b58._s_0.X) +
                       (double)CONCAT44(uVar49,uVar48) * (local_368 - local_b58._s_0.Z);
              dVar42 = (local_378 - local_b58._s_0.X) - dVar36 * (double)CONCAT44(uVar47,uVar15);
              dVar43 = (dStack_370 - local_b58._s_0.Y) - dVar36 * dVar39;
              dVar36 = (local_368 - local_b58._s_0.Z) - dVar36 * (double)CONCAT44(uVar49,uVar48);
              uVar34 = SUB84(__real_3ff0000000000000,0);
              uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
              if (dVar37 < dVar43 * dVar43 + dVar42 * dVar42 + dVar36 * dVar36) {
                uVar50 = SUB84(__real_3f1a36e2eb1c432d,0);
                uVar51 = (undefined4)((ulonglong)__real_3f1a36e2eb1c432d >> 0x20);
                goto LAB_14c8e8385;
              }
              uVar30 = (uint)uVar23 + 1;
              uVar23 = (ulonglong)uVar30;
              if ((int)uVar30 < iVar28) {
                do {
                  uVar17 = (ulonglong)((uint)uVar23 & 0x1ff);
                  lVar24 = *(longlong *)
                            ((local_b98->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                            (uVar23 >> 9) * 8);
                  if ((*(short *)(lVar24 + uVar17 * 2) != 0) &&
                     (*(short *)(lVar24 + uVar17 * 2) != -1)) goto LAB_14c8e8050;
                  uVar30 = (uint)uVar23 + 1;
                  uVar23 = (ulonglong)uVar30;
                } while ((int)uVar30 < iVar28);
              }
            } while ((int)uVar23 != iVar20);
          }
          if (this_00->bCanIgnoreDegenerateSymmetries == false) {
            dVar43 = (double)CONCAT44(uVar47,uVar15);
            dVar36 = (double)CONCAT44(uVar47,uVar15);
            dVar42 = (double)CONCAT44(uVar47,uVar15);
            if (0.0 <= (double)CONCAT44(uVar49,uVar48)) {
              uVar15 = uVar15 ^ (uint)__xmm_80000000000000008000000000000000;
              uVar47 = uVar47 ^ __xmm_80000000000000008000000000000000._4_4_;
              dVar37 = (double)CONCAT44(uVar49,uVar48) + (double)CONCAT44(uVar35,uVar34);
            }
            else {
              dVar37 = (double)CONCAT44(uVar35,uVar34) - (double)CONCAT44(uVar49,uVar48);
            }
            dVar37 = (double)CONCAT44(uVar35,uVar34) / dVar37;
            dVar43 = dVar39 * dVar43 * dVar37;
            local_a70._s_0.Z = (double)CONCAT44(uVar47,uVar15);
            local_a70._s_0.X = (double)CONCAT44(uVar35,uVar34) - dVar36 * dVar42 * dVar37;
            TStack_8e8._s_0.X = 0.0;
            TStack_8e8._s_0.W = (double)CONCAT44(uVar35,uVar34);
            local_a70._s_0.Y =
                 (double)CONCAT44((uint)((ulonglong)dVar43 >> 0x20) ^
                                  __xmm_80000000000000008000000000000000._4_4_,
                                  SUB84(dVar43,0) ^ (uint)__xmm_80000000000000008000000000000000);
            TStack_8e8._s_0.Y = 0.0;
            TStack_8e8._s_0.Z = 0.0;
            local_900 = local_b58._s_0.X;
            dStack_8f8 = local_b58._s_0.Y;
            local_8f0 = local_b58._s_0.Z;
            local_690._0_8_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
            local_690._8_8_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
            local_690._16_8_ = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
            TQuaternion<double>::SetFromTo
                      ((TQuaternion<double> *)&TStack_8e8._s_0,(TVector<double> *)&local_690._s_0,
                       (TVector<double> *)&local_a70._s_0);
            (local_b30->Origin).field0_0x0._s_0.X = local_900;
            (local_b30->Origin).field0_0x0._s_0.Y = dStack_8f8;
            (local_b30->Origin).field0_0x0._s_0.Z = local_8f0;
            (local_b30->Rotation).field0_0x0._s_0.X = TStack_8e8._s_0.X;
            (local_b30->Rotation).field0_0x0._s_0.Y = TStack_8e8._s_0.Y;
            (local_b30->Rotation).field0_0x0._s_0.Z = TStack_8e8._s_0.Z;
            (local_b30->Rotation).field0_0x0._s_0.W = TStack_8e8._s_0.W;
            local_4a8._s_0.X = local_900;
            local_4a8._s_0.Y = dStack_8f8;
            local_4a8._s_0.Z = local_8f0;
            dStack_490 = TStack_8e8._s_0.X;
            local_488 = TStack_8e8._s_0.Y;
            dStack_480 = TStack_8e8._s_0.Z;
            local_478 = TStack_8e8._s_0.W;
            bVar12 = AssignMatches(this_00,local_b98,(TPointHashGrid3<int,double> *)local_1e8,
                                   &local_b40,(TFrame3<double> *)&local_4a8._s_0);
          }
          else {
            bVar12 = false;
          }
        }
        else {
LAB_14c8e8385:
          local_b88.Data = (FScriptContainerElement *)0x0;
          local_b80 = 0;
          local_b7c = 0;
          uVar15 = 0;
          uVar23 = uVar33;
          if (0 < local_b28.ArrayNum) {
            do {
              uVar30 = (uint)uVar23;
              uVar47 = uVar15;
              if ((int)uVar30 < local_b28.ArrayNum) {
                uVar47 = ~uVar30 >> 0x1f;
              }
              if ((uVar47 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                uVar13 = (*pcVar8)();
                return (bool)uVar13;
              }
              uVar47 = FSizedDisjointSet::Find
                                 (&local_b08,
                                  *(int *)(local_b28.AllocatorInstance.Data +
                                          (longlong)(int)uVar30 * 4));
              while( true ) {
                uVar26 = ~uVar47 >> 0x1f;
                uVar29 = uVar15;
                if ((int)uVar47 < local_b08.Parents.ArrayNum) {
                  uVar29 = uVar26;
                }
                if ((uVar29 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  uVar13 = (*pcVar8)();
                  return (bool)uVar13;
                }
                lVar24 = (longlong)(int)uVar47;
                if (*(uint *)(local_b08.Parents.AllocatorInstance.Data + lVar24 * 4) == uVar47)
                break;
                uVar29 = uVar15;
                if ((int)uVar47 < local_b08.Parents.ArrayNum) {
                  uVar29 = uVar26;
                }
                if ((uVar29 == 0) &&
                   (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar14)) {
                  pcVar8 = (code *)swi(3);
                  uVar13 = (*pcVar8)();
                  return (bool)uVar13;
                }
                uVar47 = *(uint *)(local_b08.Parents.AllocatorInstance.Data + lVar24 * 4);
              }
              uVar29 = uVar15;
              if ((int)uVar47 < local_b08.Sizes.ArrayNum) {
                uVar29 = uVar26;
              }
              if ((uVar29 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar8 = (code *)swi(3);
                uVar13 = (*pcVar8)();
                return (bool)uVar13;
              }
              local_b10.Size = *(int *)(local_b08.Sizes.AllocatorInstance.Data + lVar24 * 4);
              uVar47 = local_b10.Size + uVar30;
              local_b10.StartIdx = uVar30;
              if (((local_b88.Data <= &local_b10) &&
                  (&local_b10 < (FClusterInfo *)(local_b88.Data + (longlong)local_b7c * 8))) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x7a5,
                                      L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                     ), bVar14)) {
                pcVar8 = (code *)swi(3);
                uVar13 = (*pcVar8)();
                return (bool)uVar13;
              }
              if (local_b80 == local_b7c) {
                local_b80 = Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x408,&local_b88,&local_b7c);
              }
              iVar28 = local_b80 + 1;
              uVar23 = (ulonglong)uVar47;
              *(ulonglong *)(local_b88.Data + (longlong)local_b80 * 8) =
                   CONCAT44(local_b10.Size,local_b10.StartIdx);
              local_b80 = iVar28;
            } while ((int)uVar47 < local_b28.ArrayNum);
          }
          local_b8f = 0;
          AlgoImpl::
          IntroSortInternal<_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize_::__l2::FClusterInfo,int,FIdentityFunctor,TDereferenceWrapper<_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize_::__l2::FClusterInfo,_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize_::__l2::<lambda_5>_>_>
                    ((FClusterInfo *)local_b88.Data,local_b80,local_b8d,(<lambda_5> *)&local_b8f);
          uVar23 = (ulonglong)local_b80;
          local_b18 = (ForElementType<_public:_bool___cdecl_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize(UE::Geometry::FDynamicMesh3_*,UE::Geometry::TAxisAlignedBox3<double>_const_&,UE::Geometry::TFrame3<double>_&,TArrayView<UE::Math::TVector<double>_const_,int>)_::_2_::FRange>
                       *)CONCAT44(local_b18._4_4_,local_b80);
          local_728._8_8_ = local_b58._s_0.Y;
          local_728._0_8_ = local_b58._s_0.X;
          local_a08 = (FClusterInfo *)(local_b88.Data + uVar23 * 8);
          uVar48 = (undefined4)__real_3e45798ee0000000;
          uVar49 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
          dVar9 = dVar9 * __real_3e45798ee2308c3a * dVar9;
          local_718 = local_b58._s_0.Z;
          FVar32.Data = local_b88.Data;
          local_a20 = dVar9;
          while( true ) {
            pFVar11 = local_a08;
            if (local_b80 != (int)uVar23) {
              local_b8e = 0;
              `TCheckedPointerIterator<`UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l2::FClusterInfo,int,0>
              ::operator!='::__l2::<lambda_1>::operator()(&local_b8e);
            }
            if ((FClusterInfo *)FVar32.Data == pFVar11) break;
            uVar47 = ((FClusterInfo *)FVar32.Data)->StartIdx;
            uVar30 = uVar15;
            if ((int)uVar47 < local_b28.ArrayNum) {
              uVar30 = ~uVar47 >> 0x1f;
            }
            if ((uVar30 == 0) &&
               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
               bVar14)) {
              pcVar8 = (code *)swi(3);
              uVar13 = (*pcVar8)();
              return (bool)uVar13;
            }
            uVar47 = *(uint *)(local_b28.AllocatorInstance.Data + (longlong)(int)uVar47 * 4);
            local_b8c = uVar47;
            if ((-1 < (int)uVar47) &&
               ((int)uVar47 <
                (int)((local_b98->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                     (local_b98->VertexRefCounts).RefCounts.CurBlockUsed))) {
              uVar23 = (ulonglong)(uVar47 & 0x1ff);
              local_a10 = (ulonglong)(uVar47 >> 9);
              local_a18 = uVar23;
              if (((ushort)(*(short *)(*(longlong *)
                                        ((local_b98->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + local_a10 * 8) + uVar23 * 2) - 1U)
                   < 0xfffe) && (((FClusterInfo *)FVar32.Data)->Size != 1)) {
                TStack_250._s_0.X = 0.0;
                local_208._s_0.Z = 0.0;
                local_798 = &local_b28;
                local_788 = &local_b98;
                local_7b8 = local_b60;
                local_268._0_4_ = 0;
                local_268._4_4_ = 0;
                aiStack_260[0] = 0;
                aiStack_260[1] = 0;
                aiStack_260[2] = 0;
                local_7d0 = Core::Private::Function::
                            TFunctionRefCaller<`UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l83::<lambda_7>,UE::Math::TVector<double>,int>
                            ::Call;
                local_7c8 = &local_798;
                TStack_250._s_0.Y = 0.0;
                TStack_250._s_0.Z = 0.0;
                local_238._s_0.X = 0.0;
                local_238._s_0.Y = 0.0;
                local_238._s_0.Z = 0.0;
                TStack_220._s_0.X = 0.0;
                TStack_220._s_0.Y = 0.0;
                TStack_220._s_0.Z = 0.0;
                local_208._s_0.X = 0.0;
                local_208._s_0.Y = 0.0;
                local_7c0 = Core::Private::Function::
                            TFunctionRefCaller<`UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l83::<lambda_8>,bool,int>
                            ::Call;
                local_790 = (FClusterInfo *)FVar32.Data;
                TExtremePoints3<double>::Init
                          ((TExtremePoints3<double> *)local_268,((FClusterInfo *)FVar32.Data)->Size,
                           (TFunctionRef<UE::Math::TVector<double>___cdecl(int)> *)&local_7d0,
                           (TFunctionRef<bool___cdecl(int)> *)&local_7c0,
                           (double)CONCAT44(uVar51,uVar50));
                local_358._16_8_ = CONCAT44(aiStack_260[3],aiStack_260[2]);
                local_358._24_8_ = TStack_250._s_0.X;
                local_328 = local_238._s_0.X;
                dStack_320 = local_238._s_0.Y;
                local_338 = TStack_250._s_0.Y;
                dStack_330 = TStack_250._s_0.Z;
                local_308 = TStack_220._s_0.Y;
                dStack_300 = TStack_220._s_0.Z;
                local_318 = local_238._s_0.Z;
                dStack_310 = TStack_220._s_0.X;
                local_2f8._8_8_ = local_208._s_0.Y;
                local_2f8._0_8_ = local_208._s_0.X;
                local_2e8 = local_208._s_0.Z;
                local_358._0_8_ = local_268;
                local_358._8_4_ = aiStack_260[0];
                local_358._12_4_ = aiStack_260[1];
                local_ad8 = (TArrayView<UE::Math::TVector<double>_const_,int> *)
                            ((ulonglong)local_ad8 & 0xffffffff00000000);
                if (0 < local_268._0_4_ + 1) {
                  pTVar25 = (TAxisAlignedBox3<double> *)(local_268 + 4);
                  uVar17 = uVar33;
                  do {
                    uVar30 = ((FClusterInfo *)FVar32.Data)->StartIdx +
                             *(int *)&(pTVar25->Min).field0_0x0;
                    uVar47 = uVar15;
                    if ((int)uVar30 < local_b28.ArrayNum) {
                      uVar47 = ~uVar30 >> 0x1f;
                    }
                    local_ac8 = pTVar25;
                    if ((uVar47 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar8 = (code *)swi(3);
                      uVar13 = (*pcVar8)();
                      return (bool)uVar13;
                    }
                    uVar47 = *(uint *)(local_b28.AllocatorInstance.Data + (longlong)(int)uVar30 * 4)
                    ;
                    lVar24 = *(longlong *)
                              ((local_b98->Vertices).Blocks.AllocatorInstance.Data +
                              (ulonglong)(uVar47 >> 9) * 8);
                    pdVar3 = (double *)(lVar24 + (ulonglong)(uVar47 & 0x1ff) * 0x18);
                    local_9b8 = *pdVar3;
                    dStack_9b0 = pdVar3[1];
                    local_9a8 = *(double *)(lVar24 + 0x10 + (ulonglong)(uVar47 & 0x1ff) * 0x18);
                    uVar30 = uVar15;
                    if ((int)uVar47 < local_b40.ArrayNum) {
                      uVar30 = ~uVar47 >> 0x1f;
                    }
                    if ((uVar30 == 0) &&
                       (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar14)) {
                      pcVar8 = (code *)swi(3);
                      uVar13 = (*pcVar8)();
                      return (bool)uVar13;
                    }
                    dVar39 = local_9a8;
                    dVar43 = dStack_9b0;
                    dVar36 = local_9b8;
                    local_aa8 = *(double *)
                                 (local_b40.AllocatorInstance.Data + (longlong)(int)uVar47 * 0x18);
                    dStack_aa0 = *(double *)
                                  (local_b40.AllocatorInstance.Data + (longlong)(int)uVar47 * 0x18 +
                                  8);
                    local_a98 = *(double *)
                                 (local_b40.AllocatorInstance.Data +
                                 (longlong)(int)uVar47 * 0x18 + 0x10);
                    iVar28 = (int)uVar17;
                    if (0 < ((FClusterInfo *)FVar32.Data)->Size) {
                      lVar24 = (longlong)((int)uVar17 + 1);
                      uVar23 = uVar33;
                      local_a38 = local_aa8;
                      local_a30 = dStack_aa0;
                      local_a28 = local_a98;
                      do {
                        iVar28 = (int)uVar23;
                        uVar23 = uVar33;
                        if (0 < lVar24) {
                          do {
                            if (iVar28 == *(int *)(local_358 + uVar23 * 4 + 4)) goto LAB_14c8e8cab;
                            uVar23 = uVar23 + 1;
                          } while ((longlong)uVar23 < lVar24);
                        }
                        uVar30 = ((FClusterInfo *)FVar32.Data)->StartIdx + iVar28;
                        uVar47 = uVar15;
                        if ((int)uVar30 < local_b28.ArrayNum) {
                          uVar47 = ~uVar30 >> 0x1f;
                        }
                        if ((uVar47 == 0) &&
                           (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                               ("(Index >= 0) & (Index < ArrayNum)",
                                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                ,0x447,
                                                L"Array index out of bounds: %lld into an array of size %lld"
                                               ), bVar14)) {
                          pcVar8 = (code *)swi(3);
                          uVar13 = (*pcVar8)();
                          return (bool)uVar13;
                        }
                        uVar47 = *(uint *)(local_b28.AllocatorInstance.Data +
                                          (longlong)(int)uVar30 * 4);
                        lVar31 = *(longlong *)
                                  ((local_b98->Vertices).Blocks.AllocatorInstance.Data +
                                  (ulonglong)(uVar47 >> 9) * 8);
                        auVar45 = *(undefined1 (*) [16])
                                   (lVar31 + (ulonglong)(uVar47 & 0x1ff) * 0x18);
                        local_a98 = *(double *)(lVar31 + 0x10 + (ulonglong)(uVar47 & 0x1ff) * 0x18);
                        dVar42 = auVar45._0_8_;
                        dVar37 = dVar42 - dVar36;
                        dVar44 = local_a98 - dVar39;
                        dVar9 = auVar45._8_8_;
                        dVar40 = dVar9 - dVar43;
                        dVar38 = dVar40 * dVar40 + dVar37 * dVar37 + dVar44 * dVar44;
                        if ((double)CONCAT44(uVar49,uVar48) <= dVar38 &&
                            dVar38 != (double)CONCAT44(uVar49,uVar48)) {
                          local_5f8 = (double)CONCAT44(uVar35,uVar34) / SQRT(dVar38);
                          dVar37 = local_5f8 * dVar37;
                          dVar40 = local_5f8 * dVar40;
                          dVar44 = local_5f8 * dVar44;
                          if ((!bVar12) ||
                             (dVar42 = (dVar42 * local_b78 + dVar9 * dStack_b70 +
                                       local_a98 * local_b68) -
                                       (dVar36 * local_b78 + dVar43 * dStack_b70 +
                                       dVar39 * local_b68),
                             local_a40 <
                             (double)CONCAT44((uint)((ulonglong)dVar42 >> 0x20) &
                                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                                              SUB84(dVar42,0) &
                                              (uint)__xmm_7fffffffffffffff7fffffffffffffff))) {
                            uVar30 = uVar15;
                            if ((int)uVar47 < local_b40.ArrayNum) {
                              uVar30 = ~uVar47 >> 0x1f;
                            }
                            if ((uVar30 == 0) &&
                               (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                                   ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                        
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar14)) {
                              pcVar8 = (code *)swi(3);
                              uVar13 = (*pcVar8)();
                              return (bool)uVar13;
                            }
                            lVar31 = (longlong)(int)uVar47;
                            if ((*(double *)(local_b40.AllocatorInstance.Data + lVar31 * 0x18 + 8) -
                                local_a30) *
                                (*(double *)(local_b40.AllocatorInstance.Data + lVar31 * 0x18 + 8) -
                                local_a30) +
                                (*(double *)(local_b40.AllocatorInstance.Data + lVar31 * 0x18) -
                                local_a38) *
                                (*(double *)(local_b40.AllocatorInstance.Data + lVar31 * 0x18) -
                                local_a38) +
                                (*(double *)
                                  (local_b40.AllocatorInstance.Data + lVar31 * 0x18 + 0x10) -
                                local_a28) *
                                (*(double *)
                                  (local_b40.AllocatorInstance.Data + lVar31 * 0x18 + 0x10) -
                                local_a28) <= __real_3e45798ee2308c3a) {
                              local_758[0]._0_8_ = dVar37;
                              local_758[0]._8_8_ = dVar40;
                              local_758[0]._16_8_ = dVar44;
                              bVar14 = `UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::
                                       __l2::<lambda_2>::operator()
                                                 (&local_6e8,(TVector<double> *)&local_758[0]._s_0,
                                                  &local_3a8);
                              if (bVar14) {
                                TStack_8b0._24_8_ = __real_3ff0000000000000;
                                TStack_8b0._s_0.X = 0.0;
                                TStack_8b0._s_0.Y = 0.0;
                                TStack_8b0._s_0.Z = 0.0;
                                local_8b8 = local_b58._s_0.Z;
                                local_8c8 = local_b58._s_0.X;
                                dStack_8c0 = local_b58._s_0.Y;
                                local_678._s_0.X =
                                     UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
                                local_678._s_0.Y =
                                     UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
                                local_678._s_0.Z =
                                     UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
                                TQuaternion<double>::SetFromTo
                                          ((TQuaternion<double> *)&TStack_8b0._s_0,
                                           (TVector<double> *)&local_678._s_0,&local_3a8);
                                local_468._s_0.X = local_8c8;
                                local_468._s_0.Y = dStack_8c0;
                                local_468._s_0.Z = local_8b8;
                                dStack_450 = TStack_8b0._s_0.X;
                                local_448 = TStack_8b0._s_0.Y;
                                dStack_440 = TStack_8b0._s_0.Z;
                                local_438 = TStack_8b0._s_0.W;
                                (local_b30->Origin).field0_0x0._s_0.X = local_8c8;
                                (local_b30->Origin).field0_0x0._s_0.Y = dStack_8c0;
                                (local_b30->Origin).field0_0x0._s_0.Z = local_8b8;
                                (local_b30->Rotation).field0_0x0._s_0.X = TStack_8b0._s_0.X;
                                (local_b30->Rotation).field0_0x0._s_0.Y = TStack_8b0._s_0.Y;
                                (local_b30->Rotation).field0_0x0._s_0.Z = TStack_8b0._s_0.Z;
                                (local_b30->Rotation).field0_0x0._s_0.W = TStack_8b0._s_0.W;
                                pTVar18 = &local_468;
                                goto LAB_14c8e9243;
                              }
                            }
                            else {
                              uVar30 = uVar15;
                              if ((int)uVar47 < local_b40.ArrayNum) {
                                uVar30 = ~uVar47 >> 0x1f;
                              }
                              if ((uVar30 == 0) &&
                                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                                     ("(Index >= 0) & (Index < ArrayNum)",
                                                                                                            
                                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                                  ,0x447,
                                                  L"Array index out of bounds: %lld into an array of size %lld"
                                                  ), bVar14)) {
                                pcVar8 = (code *)swi(3);
                                uVar13 = (*pcVar8)();
                                return (bool)uVar13;
                              }
                            }
                          }
                          uVar48 = (undefined4)__real_3e45798ee0000000;
                          uVar49 = (undefined4)((ulonglong)__real_3e45798ee0000000 >> 0x20);
                        }
LAB_14c8e8cab:
                        uVar34 = SUB84(__real_3ff0000000000000,0);
                        uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                        uVar23 = (ulonglong)(iVar28 + 1U);
                      } while ((int)(iVar28 + 1U) < ((FClusterInfo *)FVar32.Data)->Size);
                      pTVar25 = local_ac8;
                      uVar23 = local_a18;
                      iVar28 = (int)local_ad8;
                      dVar9 = local_a20;
                    }
                    lVar24 = *(longlong *)
                              ((local_b98->Vertices).Blocks.AllocatorInstance.Data + local_a10 * 8);
                    local_a98 = *(double *)(lVar24 + 0x10 + uVar23 * 0x18);
                    auVar45 = *(undefined1 (*) [16])(lVar24 + uVar23 * 0x18);
                    dVar36 = local_a98 - local_718;
                    dVar42 = auVar45._8_8_ - (double)local_728._8_8_;
                    dVar43 = auVar45._0_8_ - (double)local_728._0_8_;
                    dVar39 = dVar42 * dVar42 + dVar43 * dVar43 + dVar36 * dVar36;
                    uVar34 = SUB84(__real_3ff0000000000000,0);
                    uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                    if (dVar9 <= dVar39) {
                      if (bVar12) {
                        dVar39 = dVar43 * local_b78 + dVar42 * dStack_b70 + dVar36 * local_b68;
                        dVar37 = dVar42 - dVar39 * dStack_b70;
                        dVar40 = dVar43 - dVar39 * local_b78;
                        dVar39 = dVar36 - dVar39 * local_b68;
                        if (dVar9 < dVar40 * dVar40 + dVar37 * dVar37 + dVar39 * dVar39) {
                          local_9a0._s_0.X = dVar42 * local_b68 - dVar36 * dStack_b70;
                          local_9a0._s_0.Y = dVar36 * local_b78 - dVar43 * local_b68;
                          local_9a0._s_0.Z = dVar43 * dStack_b70 - dVar42 * local_b78;
                          bVar14 = UE::Math::TVector<double>::Normalize
                                             ((TVector<double> *)&local_9a0._s_0,
                                              (double)CONCAT44(uVar49,uVar48));
                          uVar34 = SUB84(__real_3ff0000000000000,0);
                          uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                          if (bVar14) {
                            TStack_878._24_8_ = __real_3ff0000000000000;
                            TStack_878._s_0.X = 0.0;
                            TStack_878._s_0.Y = 0.0;
                            TStack_878._s_0.Z = 0.0;
                            local_880 = local_b58._s_0.Z;
                            local_890 = local_b58._s_0.X;
                            dStack_888 = local_b58._s_0.Y;
                            local_628._s_0.X =
                                 UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
                            local_628._s_0.Y =
                                 UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
                            local_628._s_0.Z =
                                 UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
                            TQuaternion<double>::SetFromTo
                                      ((TQuaternion<double> *)&TStack_878._s_0,
                                       (TVector<double> *)&local_628._s_0,
                                       (TVector<double> *)&local_9a0._s_0);
                            (local_b30->Origin).field0_0x0._s_0.X = local_890;
                            (local_b30->Origin).field0_0x0._s_0.Y = dStack_888;
                            (local_b30->Origin).field0_0x0._s_0.Z = local_880;
                            (local_b30->Rotation).field0_0x0._s_0.X = TStack_878._s_0.X;
                            (local_b30->Rotation).field0_0x0._s_0.Y = TStack_878._s_0.Y;
                            (local_b30->Rotation).field0_0x0._s_0.Z = TStack_878._s_0.Z;
                            *(double *)((longlong)&(local_b30->Rotation).field0_0x0 + 0x18) =
                                 TStack_878._s_0.W;
                            pTVar18 = &local_428;
                            local_428._s_0.X = local_890;
                            local_428._s_0.Y = dStack_888;
                            local_428._s_0.Z = local_880;
                            dStack_410 = TStack_878._s_0.X;
                            local_408 = TStack_878._s_0.Y;
                            dStack_400 = TStack_878._s_0.Z;
                            local_3f8 = TStack_878._s_0.W;
                            goto LAB_14c8e9243;
                          }
                        }
                      }
                      else {
                        local_b78 = dVar43;
                        dStack_b70 = dVar42;
                        local_b68 = dVar36;
                        if (dVar39 < (double)CONCAT44(uVar49,uVar48) ||
                            dVar39 == (double)CONCAT44(uVar49,uVar48)) {
                          bVar12 = false;
                        }
                        else {
                          bVar12 = true;
                          local_630 = __real_3ff0000000000000 / SQRT(dVar39);
                        }
                      }
                    }
                    uVar30 = iVar28 + 1;
                    uVar17 = (ulonglong)uVar30;
                    pTVar25 = (TAxisAlignedBox3<double> *)((longlong)&(pTVar25->Min).field0_0x0 + 4)
                    ;
                    local_ad8 = (TArrayView<UE::Math::TVector<double>_const_,int> *)
                                CONCAT44(local_ad8._4_4_,uVar30);
                    uVar47 = local_b8c;
                    local_ac8 = pTVar25;
                    if (local_268._0_4_ + 1 <= (int)uVar30) goto LAB_14c8e8f84;
                    uVar34 = SUB84(__real_3ff0000000000000,0);
                    uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
                  } while( true );
                }
                uVar34 = SUB84(__real_3ff0000000000000,0);
                uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
LAB_14c8e8f84:
                if (0 < ((FClusterInfo *)FVar32.Data)->Size) {
                  uVar30 = local_b8c & 0x1ff;
                  uVar23 = uVar33;
LAB_14c8e8fb0:
                  iVar28 = (int)uVar23;
                  uVar23 = uVar33;
                  if (0 < local_268._0_4_ + 1) {
                    do {
                      if (iVar28 == *(int *)(local_358 + uVar23 * 4 + 4)) goto LAB_14c8e92bb;
                      uVar23 = uVar23 + 1;
                    } while ((longlong)uVar23 < (longlong)(local_268._0_4_ + 1));
                  }
                  uVar26 = ((FClusterInfo *)FVar32.Data)->StartIdx + iVar28;
                  uVar29 = uVar15;
                  if ((int)uVar26 < local_b28.ArrayNum) {
                    uVar29 = ~uVar26 >> 0x1f;
                  }
                  if ((uVar29 == 0) &&
                     (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar14)) {
                    pcVar8 = (code *)swi(3);
                    uVar13 = (*pcVar8)();
                    return (bool)uVar13;
                  }
                  lVar24 = *(longlong *)
                            ((local_b98->Vertices).Blocks.AllocatorInstance.Data +
                            (ulonglong)(uVar47 >> 9) * 8);
                  local_a98 = *(double *)(lVar24 + 0x10 + (ulonglong)uVar30 * 0x18);
                  auVar45 = *(undefined1 (*) [16])(lVar24 + (ulonglong)uVar30 * 0x18);
                  dVar36 = local_a98 - local_718;
                  dVar42 = auVar45._8_8_ - (double)local_728._8_8_;
                  dVar43 = auVar45._0_8_ - (double)local_728._0_8_;
                  dVar39 = dVar42 * dVar42 + dVar43 * dVar43 + dVar36 * dVar36;
                  if (dVar39 < dVar9) goto LAB_14c8e92bb;
                  if (!bVar12) {
                    local_b78 = dVar43;
                    dStack_b70 = dVar42;
                    local_b68 = dVar36;
                    if (dVar39 < (double)CONCAT44(uVar49,uVar48) ||
                        dVar39 == (double)CONCAT44(uVar49,uVar48)) {
                      bVar12 = false;
                    }
                    else {
                      bVar12 = true;
                      local_610 = (double)CONCAT44(uVar35,uVar34) / SQRT(dVar39);
                    }
                    goto LAB_14c8e92bb;
                  }
                  dVar39 = local_b78 * dVar43 + dStack_b70 * dVar42 + local_b68 * dVar36;
                  dVar40 = dVar43 - local_b78 * dVar39;
                  dVar37 = dVar42 - dStack_b70 * dVar39;
                  dVar39 = dVar36 - local_b68 * dVar39;
                  if (dVar40 * dVar40 + dVar37 * dVar37 + dVar39 * dVar39 <= dVar9)
                  goto LAB_14c8e92bb;
                  local_988._s_0.X = local_b68 * dVar42 - dStack_b70 * dVar36;
                  local_988._s_0.Y = local_b78 * dVar36 - local_b68 * dVar43;
                  local_988._s_0.Z = dStack_b70 * dVar43 - local_b78 * dVar42;
                  bVar14 = UE::Math::TVector<double>::Normalize
                                     ((TVector<double> *)&local_988._s_0,
                                      (double)CONCAT44(uVar49,uVar48));
                  if (!bVar14) goto LAB_14c8e92bb;
                  local_858 = local_b58._s_0.X;
                  dStack_850 = local_b58._s_0.Y;
                  TStack_840._s_0.X = 0.0;
                  local_648._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
                  local_648._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
                  local_648._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
                  TStack_840._s_0.W = (double)CONCAT44(uVar35,uVar34);
                  TStack_840._8_16_ = ZEXT416(0) << 0x40;
                  local_848 = local_b58._s_0.Z;
                  TQuaternion<double>::SetFromTo
                            ((TQuaternion<double> *)&TStack_840._s_0,
                             (TVector<double> *)&local_648._s_0,(TVector<double> *)&local_988._s_0);
                  (local_b30->Origin).field0_0x0._s_0.X = local_858;
                  (local_b30->Origin).field0_0x0._s_0.Y = dStack_850;
                  (local_b30->Origin).field0_0x0._s_0.Z = local_848;
                  (local_b30->Rotation).field0_0x0._s_0.X = TStack_840._s_0.X;
                  (local_b30->Rotation).field0_0x0._s_0.Y = TStack_840._s_0.Y;
                  (local_b30->Rotation).field0_0x0._s_0.Z = TStack_840._s_0.Z;
                  (local_b30->Rotation).field0_0x0._s_0.W = TStack_840._s_0.W;
                  pTVar18 = &local_3e8;
                  local_3e8._s_0.X = local_858;
                  local_3e8._s_0.Y = dStack_850;
                  local_3e8._s_0.Z = local_848;
                  dStack_3d0 = TStack_840._s_0.X;
                  local_3c8 = TStack_840._s_0.Y;
                  dStack_3c0 = TStack_840._s_0.Z;
                  local_3b8 = TStack_840._s_0.W;
LAB_14c8e9243:
                  bVar12 = AssignMatches(local_ad0,local_b98,
                                         (TPointHashGrid3<int,double> *)local_1e8,&local_b40,
                                         (TFrame3<double> *)&pTVar18->_s_0);
                  goto LAB_14c8e93c4;
                }
              }
            }
LAB_14c8e92cf:
            uVar50 = SUB84(__real_3f1a36e2eb1c432d,0);
            uVar51 = (undefined4)((ulonglong)__real_3f1a36e2eb1c432d >> 0x20);
            FVar32.Data = FVar32.Data + 8;
            uVar34 = SUB84(__real_3ff0000000000000,0);
            uVar35 = (undefined4)((ulonglong)__real_3ff0000000000000 >> 0x20);
            uVar23 = (ulonglong)local_b18 & 0xffffffff;
          }
          bVar12 = false;
LAB_14c8e93c4:
          if ((FClusterInfo *)local_b88.Data != (FClusterInfo *)0x0) {
            FMemory::Free(local_b88.Data);
          }
        }
      }
      else {
        local_5c0._s_0.Z = local_178.Basis[2].field0_0x0._s_0.Z;
        local_5c0._s_0.X = local_178.Basis[2].field0_0x0._s_0.X;
        local_5c0._s_0.Y = local_178.Basis[2].field0_0x0._s_0.Y;
        if (local_178.Dimension == 3) {
          bVar12 = false;
        }
        else {
          local_970 = local_b58._s_0.X;
          dStack_968 = local_b58._s_0.Y;
          TStack_958._s_0.X = 0.0;
          local_5a8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
          local_5a8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
          local_5a8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
          TStack_958._s_0.W = dVar36;
          TStack_958._s_0.Y = 0.0;
          TStack_958._s_0.Z = 0.0;
          local_960 = local_b58._s_0.Z;
          TQuaternion<double>::SetFromTo
                    ((TQuaternion<double> *)&TStack_958._s_0,(TVector<double> *)&local_5a8._s_0,
                     (TVector<double> *)&local_5c0._s_0);
          (param_3->Origin).field0_0x0._s_0.X = local_970;
          (param_3->Origin).field0_0x0._s_0.Y = dStack_968;
          (param_3->Origin).field0_0x0._s_0.Z = local_960;
          (param_3->Rotation).field0_0x0._s_0.X = TStack_958._s_0.X;
          (param_3->Rotation).field0_0x0._s_0.Y = TStack_958._s_0.Y;
          (param_3->Rotation).field0_0x0._s_0.Z = TStack_958._s_0.Z;
          (param_3->Rotation).field0_0x0._s_0.W = TStack_958._s_0.W;
          local_568._s_0.X = local_970;
          local_568._s_0.Y = dStack_968;
          local_568._s_0.Z = local_960;
          dStack_550 = TStack_958._s_0.X;
          local_548 = TStack_958._s_0.Y;
          dStack_540 = TStack_958._s_0.Z;
          local_538 = TStack_958._s_0.W;
          bVar12 = AssignMatches(this_00,local_b98,(TPointHashGrid3<int,double> *)local_1e8,
                                 &local_b40,(TFrame3<double> *)&local_568._s_0);
        }
      }
LAB_14c8e93dc:
      if (local_ae8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_ae8.Data);
      }
      if (local_b28.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b28.AllocatorInstance.Data);
      }
      local_270 = 0;
      if (local_278 != (undefined1 *)0x0) {
        FMemory::Free(local_278);
      }
      TSparseArray<TSparseSetElement<TTuple<int,TArray<`UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize'::__l2::FRange,TFixedAllocator<4>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<int,TArray<_UE::Geometry::FMeshPlanarSymmetry::FindPlaneAndInitialize_::__l2::FRange,TFixedAllocator<4>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&local_2b8);
      if (local_b08.Sizes.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b08.Sizes.AllocatorInstance.Data);
      }
      if (local_b08.Parents.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_b08.Parents.AllocatorInstance.Data);
      }
      local_1a0 = 0;
      if ((ForElementType<FSetElementId>)local_1e8._64_8_ != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)local_1e8._64_8_);
      }
      TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)local_1e8);
      if (local_b40.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return bVar12;
      }
      FMemory::Free(local_b40.AllocatorInstance.Data);
      return bVar12;
    }
    if (this->bCanIgnoreDegenerateSymmetries == false) {
      if (param_4->ArrayNum == 0) {
        uVar34 = SUB84(UE::Math::TVector<double>::XAxisVector.field0_0x0._s_0.Z,0);
        uVar35 = (undefined4)
                 ((ulonglong)UE::Math::TVector<double>::XAxisVector.field0_0x0._16_8_ >> 0x20);
        local_5f0._0_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._0_4_;
        local_5f0._4_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._4_4_;
        local_5f0._8_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._8_4_;
        local_5f0._12_4_ = UE::Math::TVector<double>::XAxisVector.field0_0x0._12_4_;
      }
      else {
        if ((param_4->ArrayNum < 1) &&
           (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                                ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"
                               ), bVar12)) {
          pcVar8 = (code *)swi(3);
          uVar13 = (*pcVar8)();
          return (bool)uVar13;
        }
        pTVar6 = param_4->DataPtr;
        uVar4 = *(undefined8 *)((longlong)&pTVar6->field0_0x0 + 0x10);
        uVar34 = (undefined4)uVar4;
        uVar35 = (undefined4)((ulonglong)uVar4 >> 0x20);
        local_5f0._0_4_ = *(undefined4 *)&pTVar6->field0_0x0;
        local_5f0._4_4_ = *(undefined4 *)((longlong)&pTVar6->field0_0x0 + 4);
        local_5f0._8_4_ = *(undefined4 *)((longlong)&pTVar6->field0_0x0 + 8);
        local_5f0._12_4_ = *(undefined4 *)((longlong)&pTVar6->field0_0x0 + 0xc);
      }
      local_5f0._s_0.Z = (double)CONCAT44(uVar35,uVar34);
      TStack_9d8._s_0.X = 0.0;
      local_9f0 = ((param_2->Max).field0_0x0._s_0.X + (param_2->Min).field0_0x0._s_0.X) *
                  __real_3fe0000000000000;
      TStack_9d8._s_0.W = dVar36;
      local_9e0 = ((param_2->Max).field0_0x0._s_0.Z + (param_2->Min).field0_0x0._s_0.Z) *
                  __real_3fe0000000000000;
      TStack_9d8._s_0.Y = 0.0;
      TStack_9d8._s_0.Z = 0.0;
      dStack_9e8 = ((param_2->Min).field0_0x0._s_0.Y + (param_2->Max).field0_0x0._s_0.Y) *
                   __real_3fe0000000000000;
      local_5d8._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
      local_5d8._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
      local_5d8._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
      TQuaternion<double>::SetFromTo
                ((TQuaternion<double> *)&TStack_9d8._s_0,(TVector<double> *)&local_5d8._s_0,
                 (TVector<double> *)&local_5f0._s_0);
      (param_3->Origin).field0_0x0._s_0.X = local_9f0;
      (param_3->Origin).field0_0x0._s_0.Y = dStack_9e8;
      (param_3->Origin).field0_0x0._s_0.Z = local_9e0;
      (param_3->Rotation).field0_0x0._s_0.X = TStack_9d8._s_0.X;
      (param_3->Rotation).field0_0x0._s_0.Y = TStack_9d8._s_0.Y;
      (param_3->Rotation).field0_0x0._s_0.Z = TStack_9d8._s_0.Z;
      (param_3->Rotation).field0_0x0._s_0.W = TStack_9d8._s_0.W;
      local_528._s_0.X = local_9f0;
      local_528._s_0.Y = dStack_9e8;
      local_528._s_0.Z = local_9e0;
      dStack_510 = TStack_9d8._s_0.X;
      local_508 = TStack_9d8._s_0.Y;
      dStack_500 = TStack_9d8._s_0.Z;
      local_4f8 = TStack_9d8._s_0.W;
      bVar12 = Initialize(this,local_b98,param_2,(TFrame3<double> *)&local_528._s_0);
      return bVar12;
    }
  }
  return false;
LAB_14c8e92bb:
  uVar23 = (ulonglong)(iVar28 + 1U);
  if (((FClusterInfo *)FVar32.Data)->Size <= (int)(iVar28 + 1U)) goto LAB_14c8e92cf;
  goto LAB_14c8e8fb0;
}

// FullSymmetryUpdate @ 14c8f04a0

void __thiscall UE::Geometry::FMeshPlanarSymmetry::FullSymmetryUpdate(FMeshPlanarSymmetry *this)

{
  FMutex *this_00;
  uint *puVar1;
  double *pdVar2;
  atomic<unsigned_char> aVar3;
  double dVar4;
  double dVar5;
  FDynamicMesh3 *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  FDynamicMesh3 *pFVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  bool bVar15;
  short sVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  ulonglong uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  dVar14 = __real_3ff0000000000000;
  pFVar6 = this->TargetMesh;
  uVar19 = (pFVar6->VertexRefCounts).RefCounts.CurBlock * 0x200 +
           (pFVar6->VertexRefCounts).RefCounts.CurBlockUsed;
  uVar18 = 0;
  if ((uVar19 != 0) &&
     (pFVar7 = (pFVar6->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar18 = 0,
     0xfffd < (ushort)(**(short **)pFVar7 - 1U))) {
    uVar17 = 1;
    uVar18 = 1;
    if (1 < (int)uVar19) {
      do {
        lVar8 = *(longlong *)(pFVar7 + (ulonglong)(uVar17 >> 9) * 8);
        if ((*(short *)(lVar8 + (ulonglong)(uVar17 & 0x1ff) * 2) != 0) &&
           (uVar18 = uVar17, *(short *)(lVar8 + (ulonglong)(uVar17 & 0x1ff) * 2) != -1)) break;
        uVar17 = uVar17 + 1;
        uVar18 = uVar17;
      } while ((int)uVar17 < (int)uVar19);
    }
  }
joined_r0x00014c8f0518:
  do {
    if (uVar18 == uVar19) {
      return;
    }
    while( true ) {
      uVar17 = 0;
      if ((int)uVar18 < (this->Vertices).ArrayNum) {
        uVar17 = ~uVar18 >> 0x1f;
      }
      if ((uVar17 == 0) &&
         (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar15)) {
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      if ((this->Vertices).AllocatorInstance.Data[(longlong)(int)uVar18 * 0x10 + 8] ==
          (FScriptContainerElement)0x0) {
        uVar17 = 0;
        if ((int)uVar18 < (this->Vertices).ArrayNum) {
          uVar17 = ~uVar18 >> 0x1f;
        }
        if ((uVar17 == 0) &&
           (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar15)) {
          pcVar10 = (code *)swi(3);
          (*pcVar10)();
          return;
        }
        if ((this->Vertices).AllocatorInstance.Data[(longlong)(int)uVar18 * 0x10 + 9] !=
            (FScriptContainerElement)0x0) {
          dVar21 = (this->SymmetryFrame).Rotation.field0_0x0._s_0.X;
          uVar20 = (ulonglong)(uVar18 & 0x1ff);
          dVar23 = (this->SymmetryFrame).Rotation.field0_0x0._s_0.Y;
          dVar22 = (this->SymmetryFrame).Rotation.field0_0x0._s_0.Z;
          dVar4 = (this->SymmetryFrame).Rotation.field0_0x0._s_0.W;
          dVar22 = dVar22 + dVar22;
          pFVar9 = this->TargetMesh;
          lVar8 = *(longlong *)
                   ((pFVar9->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar18 >> 9) * 8)
          ;
          pdVar2 = (double *)(lVar8 + uVar20 * 0x18);
          dVar13 = *pdVar2;
          dVar11 = pdVar2[1];
          dVar5 = *(double *)(lVar8 + 0x10 + uVar20 * 0x18);
          dVar12 = dVar23 * dVar22 - dVar4 * (dVar21 + dVar21);
          dVar22 = dVar4 * (dVar23 + dVar23) + dVar21 * dVar22;
          dVar23 = dVar14 - (dVar21 * (dVar21 + dVar21) + dVar23 * (dVar23 + dVar23));
          dVar21 = (dVar11 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Y) * dVar12 +
                   (dVar13 - (this->SymmetryFrame).Origin.field0_0x0._s_0.X) * dVar22 +
                   (dVar5 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Z) * dVar23;
          dVar13 = dVar13 - dVar21 * dVar22;
          dVar11 = dVar11 - dVar21 * dVar12;
          dVar5 = dVar5 - dVar21 * dVar23;
          sVar16 = _dclass(dVar13);
          if (((sVar16 < 1) && (sVar16 = _dclass(dVar11), sVar16 < 1)) &&
             (sVar16 = _dclass(dVar5), sVar16 < 1)) {
            *(double *)(lVar8 + uVar20 * 0x18) = dVar13;
            *(double *)(lVar8 + 8 + uVar20 * 0x18) = dVar11;
            *(double *)(lVar8 + 0x10 + uVar20 * 0x18) = dVar5;
            if ((pFVar9->ChangeStampShape).bIsEnabled != false) {
              this_00 = &(pFVar9->ChangeStampShape).Mutex;
              LOCK();
              bVar15 = this_00->State == (atomic<unsigned_char>)0x0;
              if (bVar15) {
                this_00->State = (atomic<unsigned_char>)0x1;
              }
              UNLOCK();
              if (!bVar15) {
                FMutex::LockSlow(this_00);
              }
              puVar1 = &(pFVar9->ChangeStampShape).Value;
              *puVar1 = *puVar1 + 1;
              LOCK();
              aVar3 = this_00->State;
              this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
              UNLOCK();
              if (((byte)aVar3 & 2) != 0) {
                FMutex::WakeWaitingThread(this_00);
              }
            }
          }
        }
      }
      else {
        UpdateSourceVertex(this,uVar18);
      }
      uVar18 = uVar18 + 1;
      if ((int)uVar19 <= (int)uVar18) break;
      while( true ) {
        lVar8 = *(longlong *)
                 ((pFVar6->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                 (ulonglong)(uVar18 >> 9) * 8);
        if ((*(short *)(lVar8 + (ulonglong)(uVar18 & 0x1ff) * 2) != 0) &&
           (*(short *)(lVar8 + (ulonglong)(uVar18 & 0x1ff) * 2) != -1)) break;
        uVar18 = uVar18 + 1;
        if ((int)uVar19 <= (int)uVar18) goto joined_r0x00014c8f0518;
      }
    }
  } while( true );
}

// GetMirrorVertexROI @ 14c8f4970

void __thiscall
UE::Geometry::FMeshPlanarSymmetry::GetMirrorVertexROI
          (FMeshPlanarSymmetry *this,TArray<int,TSizedDefaultAllocator<32>_> *param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2,bool param_3)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res20 [8];
  uint local_48;
  uint local_44;
  uint local_40 [2];
  
  piVar1 = &param_2->ArrayMax;
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax < 0) {
    Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (4,4,0,&param_2->AllocatorInstance,0,piVar1);
  }
  if (param_3) {
    uVar9 = param_1->ArrayNum;
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if (*piVar1 < (int)uVar9) {
      Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (4,4,uVar9,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
    }
  }
  iVar3 = param_1->ArrayNum;
  pFVar12 = (param_1->AllocatorInstance).Data;
  pFVar2 = pFVar12 + (longlong)iVar3 * 4;
  do {
    if (param_1->ArrayNum != iVar3) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res20);
    }
    if (pFVar12 == pFVar2) {
      return;
    }
    uVar9 = *(uint *)pFVar12;
    uVar7 = 0;
    if ((int)uVar9 < (this->Vertices).ArrayNum) {
      uVar7 = ~uVar9 >> 0x1f;
    }
    local_44 = uVar9;
    if (uVar7 == 0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar6) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    pFVar4 = (this->Vertices).AllocatorInstance.Data;
    if (pFVar4[(longlong)(int)uVar9 * 0x10 + 8] == (FScriptContainerElement)0x0) {
      if ((pFVar4[(longlong)(int)uVar9 * 0x10 + 9] == (FScriptContainerElement)0x0) &&
         (-1 < *(int *)(pFVar4 + (longlong)(int)uVar9 * 0x10 + 0xc))) {
        pFVar4 = (param_2->AllocatorInstance).Data;
        if ((pFVar4 <= (FScriptContainerElement *)&local_44) &&
           ((FScriptContainerElement *)&local_44 < pFVar4 + (longlong)*piVar1 * 4)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar8 = param_2->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,piVar1);
        }
        iVar10 = iVar8 + 1;
        lVar11 = (longlong)iVar8;
        uVar9 = local_44;
        goto LAB_14c8f4c6d;
      }
      if (param_3) {
        pFVar4 = (param_2->AllocatorInstance).Data;
        local_40[0] = 0xffffffff;
        if ((pFVar4 <= (FScriptContainerElement *)local_40) &&
           ((FScriptContainerElement *)local_40 < pFVar4 + (longlong)*piVar1 * 4)) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            );
          if (bVar6) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        iVar8 = param_2->ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x404,&param_2->AllocatorInstance,piVar1);
        }
        iVar10 = iVar8 + 1;
        lVar11 = (longlong)iVar8;
        uVar9 = local_40[0];
        goto LAB_14c8f4c6d;
      }
    }
    else {
      local_48 = *(uint *)(pFVar4 + (longlong)(int)uVar9 * 0x10 + 0xc);
      pFVar4 = (param_2->AllocatorInstance).Data;
      if ((pFVar4 <= (FScriptContainerElement *)&local_48) &&
         ((FScriptContainerElement *)&local_48 < pFVar4 + (longlong)*piVar1 * 4)) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          );
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      iVar8 = param_2->ArrayNum;
      if (iVar8 == *piVar1) {
        iVar8 = Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&param_2->AllocatorInstance,piVar1);
      }
      iVar10 = iVar8 + 1;
      lVar11 = (longlong)iVar8;
      uVar9 = local_48;
LAB_14c8f4c6d:
      param_2->ArrayNum = iVar10;
      *(uint *)((param_2->AllocatorInstance).Data + lVar11 * 4) = uVar9;
    }
    pFVar12 = pFVar12 + 4;
  } while( true );
}

// GetMirroredAxis @ 14c8f4cc0

TVector<double> * __thiscall
UE::Geometry::FMeshPlanarSymmetry::GetMirroredAxis
          (FMeshPlanarSymmetry *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar6 = (this->CachedSymmetryAxis).field0_0x0._s_0.Y * dVar2 +
          (this->CachedSymmetryAxis).field0_0x0._s_0.X * dVar1;
  dVar6 = (dVar3 + dVar3) * (this->CachedSymmetryAxis).field0_0x0._s_0.Z + dVar6 + dVar6;
  dVar4 = (this->CachedSymmetryAxis).field0_0x0._s_0.Z;
  dVar5 = (this->CachedSymmetryAxis).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y =
       dVar2 - dVar6 * (this->CachedSymmetryAxis).field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar3 - dVar6 * dVar4;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 - dVar6 * dVar5;
  return __return_storage_ptr__;
}

// GetMirroredOrientation @ 14c8f4d60

TQuaternion<double> * __thiscall
UE::Geometry::FMeshPlanarSymmetry::GetMirroredOrientation
          (FMeshPlanarSymmetry *this,TQuaternion<double> *__return_storage_ptr__,
          TQuaternion<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  
  dVar1 = (this->CachedSymmetryAxis).field0_0x0._s_0.Z;
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  dVar4 = (param_1->field0_0x0)._s_0.Z;
  dVar8 = (this->CachedSymmetryAxis).field0_0x0._s_0.Y * dVar3 +
          (this->CachedSymmetryAxis).field0_0x0._s_0.X * dVar2;
  dVar8 = (dVar1 + dVar1) * dVar4 + dVar8 + dVar8;
  dVar1 = (this->CachedSymmetryAxis).field0_0x0._s_0.X;
  dVar5 = (this->CachedSymmetryAxis).field0_0x0._s_0.Y;
  dVar6 = (this->CachedSymmetryAxis).field0_0x0._s_0.Z;
  uVar7 = *(undefined8 *)((longlong)&param_1->field0_0x0 + 0x18);
  (__return_storage_ptr__->field0_0x0)._s_0.W =
       (double)CONCAT44((uint)((ulonglong)uVar7 >> 0x20) ^
                        __xmm_80000000000000008000000000000000._4_4_,
                        (uint)uVar7 ^ (uint)__xmm_80000000000000008000000000000000);
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar2 - dVar8 * dVar1;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar3 - dVar8 * dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar4 - dVar8 * dVar6;
  return __return_storage_ptr__;
}

// GetMirroredPosition @ 14c8f4e10

TVector<double> * __thiscall
UE::Geometry::FMeshPlanarSymmetry::GetMirroredPosition
          (FMeshPlanarSymmetry *this,TVector<double> *__return_storage_ptr__,
          TVector<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  dVar1 = (param_1->field0_0x0)._s_0.X;
  dVar2 = (param_1->field0_0x0)._s_0.Y;
  dVar3 = (param_1->field0_0x0)._s_0.Z;
  dVar5 = dVar3 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Z;
  dVar6 = (dVar2 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Y) *
          (this->CachedSymmetryAxis).field0_0x0._s_0.Y +
          (dVar1 - (this->SymmetryFrame).Origin.field0_0x0._s_0.X) *
          (this->CachedSymmetryAxis).field0_0x0._s_0.X;
  dVar6 = (dVar5 + dVar5) * (this->CachedSymmetryAxis).field0_0x0._s_0.Z + dVar6 + dVar6;
  dVar5 = (this->CachedSymmetryAxis).field0_0x0._s_0.Y;
  dVar4 = (this->CachedSymmetryAxis).field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       dVar3 - dVar6 * (this->CachedSymmetryAxis).field0_0x0._s_0.Z;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar2 - dVar6 * dVar5;
  (__return_storage_ptr__->field0_0x0)._s_0.X = dVar1 - dVar6 * dVar4;
  return __return_storage_ptr__;
}

// GetPositiveSideFrame @ 14c8f52a0

TFrame3<double> * __thiscall
UE::Geometry::FMeshPlanarSymmetry::GetPositiveSideFrame
          (FMeshPlanarSymmetry *this,TFrame3<double> *__return_storage_ptr__,
          TFrame3<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  double dVar13;
  
  dVar1 = (param_1->Origin).field0_0x0._s_0.X;
  dVar2 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar3 = (this->CachedSymmetryAxis).field0_0x0._s_0.Z;
  dVar4 = (this->CachedSymmetryAxis).field0_0x0._s_0.X;
  dVar5 = (this->CachedSymmetryAxis).field0_0x0._s_0.Y;
  dVar13 = (param_1->Origin).field0_0x0._s_0.Z;
  dVar11 = dVar13 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Z;
  dVar10 = (dVar2 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Y) * dVar5 +
           (dVar1 - (this->SymmetryFrame).Origin.field0_0x0._s_0.X) * dVar4;
  if (dVar3 * dVar11 + dVar10 < 0.0) {
    dVar10 = (dVar11 + dVar11) * dVar3 + dVar10 + dVar10;
    (param_1->Origin).field0_0x0._s_0.X = dVar1 - dVar10 * dVar4;
    (param_1->Origin).field0_0x0._s_0.Y = dVar2 - dVar10 * dVar5;
    (param_1->Origin).field0_0x0._s_0.Z = dVar13 - dVar10 * dVar3;
    dVar1 = (param_1->Rotation).field0_0x0._s_0.Z;
    dVar2 = (param_1->Rotation).field0_0x0._s_0.X;
    dVar13 = (param_1->Rotation).field0_0x0._s_0.Y;
    dVar11 = dVar13 * dVar5 + dVar2 * dVar4;
    dVar11 = (dVar1 + dVar1) * dVar3 + dVar11 + dVar11;
    uVar6 = *(undefined8 *)((longlong)&(param_1->Rotation).field0_0x0 + 0x18);
    uVar9 = (uint)uVar6 ^ (uint)__xmm_80000000000000008000000000000000;
    uVar12 = (uint)((ulonglong)uVar6 >> 0x20) ^ __xmm_80000000000000008000000000000000._4_4_;
    dVar13 = dVar13 - dVar11 * dVar5;
    auVar7._8_4_ = SUB84(dVar13,0);
    auVar7._0_8_ = dVar2 - dVar11 * dVar4;
    auVar7._12_4_ = (int)((ulonglong)dVar13 >> 0x20);
    *(undefined1 (*) [16])&(param_1->Rotation).field0_0x0 = auVar7;
    auVar8._8_4_ = uVar9;
    auVar8._0_8_ = dVar1 - dVar11 * dVar3;
    auVar8._12_4_ = uVar12;
    *(undefined1 (*) [16])((longlong)&(param_1->Rotation).field0_0x0 + 0x10) = auVar8;
  }
  dVar1 = (param_1->Origin).field0_0x0._s_0.Y;
  dVar2 = (param_1->Origin).field0_0x0._s_0.Z;
  dVar3 = (param_1->Rotation).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = (param_1->Origin).field0_0x0._s_0.X;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar1;
  dVar4 = (param_1->Rotation).field0_0x0._s_0.Y;
  dVar5 = (param_1->Rotation).field0_0x0._s_0.Z;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar2;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.X = dVar3;
  dVar1 = (param_1->Rotation).field0_0x0._s_0.W;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Y = dVar4;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.Z = dVar5;
  (__return_storage_ptr__->Rotation).field0_0x0._s_0.W = dVar1;
  return __return_storage_ptr__;
}

// Initialize @ 14c8fc470

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FMeshPlanarSymmetry::Initialize
          (FMeshPlanarSymmetry *this,FDynamicMesh3 *param_1,TAxisAlignedBox3<double> *param_2,
          TFrame3<double> *param_3)

{
  ForElementType<unsigned_int> FVar1;
  void *pvVar2;
  double *pdVar3;
  double dVar4;
  short sVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  ulonglong uVar13;
  int iVar14;
  ForAnyElementType FVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ForElementType<unsigned_int> FVar19;
  double dVar20;
  uint uVar21;
  uint uVar22;
  undefined1 auStackY_218 [32];
  uint local_1e8 [2];
  uint local_1e0;
  uint uStack_1dc;
  ForElementType<unsigned_int> FStack_1d8;
  undefined4 local_1d0;
  uint uStack_1cc;
  uint uStack_1c8;
  undefined4 uStack_1c4;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_> local_1c0;
  int local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined1 local_198 [24];
  TQuaternion<double>_u_0 TStack_180;
  TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&> local_158;
  uint *local_148;
  TVector<double>_u_0 local_140;
  undefined1 local_128 [40];
  uint local_100;
  int local_f4;
  FScriptContainerElement local_f0 [8];
  ForAnyElementType local_e8;
  uint local_e0;
  TWrapAroundGridIndexer3<double> local_d0;
  ulonglong local_b8;
  
  FVar1 = (ForElementType<unsigned_int>)((longlong)local_128 + 0x10);
  local_b8 = __security_cookie.value ^ (ulonglong)auStackY_218;
  this->TargetMesh = param_1;
  dVar11 = __real_3ff0000000000000;
  if ((param_1 == (FDynamicMesh3 *)0x0) || ((param_1->VertexRefCounts).UsedCount == 0)) {
    return false;
  }
  dVar20 = (param_2->Max).field0_0x0._s_0.Z - (param_2->Min).field0_0x0._s_0.Z;
  dVar8 = (param_2->Max).field0_0x0._s_0.Y - (param_2->Min).field0_0x0._s_0.Y;
  dVar10 = (param_2->Max).field0_0x0._s_0.X - (param_2->Min).field0_0x0._s_0.X;
  uVar16 = 0;
  if (dVar20 <= 0.0) {
    dVar20 = 0.0;
  }
  if (dVar8 <= 0.0) {
    dVar8 = 0.0;
  }
  if (dVar10 <= 0.0) {
    dVar10 = 0.0;
  }
  local_1c0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1c0.ArrayNum = 0;
  local_1c0.ArrayMax = 0;
  if (dVar20 <= dVar8) {
    dVar20 = dVar8;
  }
  if (dVar20 <= dVar10) {
    dVar20 = dVar10;
  }
  if (dVar20 <= __real_3ff0000000000000) {
    dVar20 = __real_3ff0000000000000;
  }
  this->ErrorScale = dVar20;
  ComputeMeshInfo(this,param_1,param_2,&local_1c0,(TVector<double> *)&local_140._s_0);
  dVar8 = (param_3->Rotation).field0_0x0._s_0.X;
  dVar10 = (param_3->Rotation).field0_0x0._s_0.Y;
  dVar20 = (param_3->Rotation).field0_0x0._s_0.Z;
  dVar4 = (param_3->Rotation).field0_0x0._s_0.W;
  dVar20 = dVar20 + dVar20;
  dVar9 = this->ErrorScale * ___real_3ea0c6f7a0000000;
  dVar11 = (dVar20 * dVar10 - dVar4 * (dVar8 + dVar8)) *
           (local_140._s_0.Y - (param_3->Origin).field0_0x0._s_0.Y) +
           (dVar4 * (dVar10 + dVar10) + dVar20 * dVar8) *
           (local_140._s_0.X - (param_3->Origin).field0_0x0._s_0.X) +
           (dVar11 - ((dVar10 + dVar10) * dVar10 + (dVar8 + dVar8) * dVar8)) *
           (local_140._s_0.Z - (param_3->Origin).field0_0x0._s_0.Z);
  uVar21 = SUB84(dVar11,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar22 = (uint)((ulonglong)dVar11 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (dVar9 <= (double)CONCAT44(uVar22,uVar21) && (double)CONCAT44(uVar22,uVar21) != dVar9) {
    bVar12 = false;
    goto LAB_14c8fca58;
  }
  TPointHashGrid3<int,double>::TPointHashGrid3<int,double>
            ((TPointHashGrid3<int,double> *)local_128,this->ErrorScale * __real_3ee4f8b588000000,-1)
  ;
  uVar21 = (param_1->VertexRefCounts).UsedCount;
  if ((uint)(local_128._8_4_ - local_f4) < uVar21) {
    if ((int)uVar21 < 0) {
                    /* WARNING: Subroutine does not return */
      Core::Private::OnInvalidSetNum((longlong)(int)uVar21);
    }
    TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::Reserve((TSparseArrayBase<24,4,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               *)local_128,uVar21);
    if (uVar21 < 4) {
      uVar21 = 1;
    }
    else {
      uVar17 = (ulonglong)((uVar21 >> 1) + 7) * 2 + 1;
      lVar7 = 0x3f;
      if (uVar17 != 0) {
        for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      uVar21 = 1 << ((byte)lVar7 & 0x1f);
    }
    if ((local_e0 == 0) || ((int)local_e0 < (int)uVar21)) {
      local_e0 = uVar21;
      if (local_e8.Data != (FScriptContainerElement *)0x0) {
        TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,0,4);
      }
      if (uVar21 != 0) {
        uVar22 = uVar21;
        if (uVar21 < 2) {
          if (local_e8.Data != (FScriptContainerElement *)0x0) {
            uVar22 = 0;
            goto LAB_14c8fc6c3;
          }
        }
        else {
LAB_14c8fc6c3:
          TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&local_e8,0,uVar22,4)
          ;
        }
        if (0 < (int)uVar21) {
          uVar18 = (ulonglong)uVar21;
          uVar17 = uVar16;
          do {
            FVar15.Data = local_f0;
            if (local_e8.Data != (FScriptContainerElement *)0x0) {
              FVar15.Data = local_e8.Data;
            }
            uVar13 = uVar17 & (longlong)(int)uVar21 - 1U;
            uVar17 = uVar17 + 1;
            *(undefined4 *)(FVar15.Data + uVar13 * 4) = 0xffffffff;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
      if (local_e0 != 0) {
        local_1e0 = 0;
        uStack_1dc = 1;
        uStack_1cc = 0;
        uStack_1c8 = 0;
        uVar17 = uVar16;
        if (local_100 != 0) {
          FVar19 = FVar1;
          if ((ForElementType<unsigned_int>)local_128._32_8_ != (ForElementType<unsigned_int>)0x0) {
            FVar19 = (ForElementType<unsigned_int>)local_128._32_8_;
          }
          uVar21 = *(uint *)FVar19;
          uVar18 = uVar16;
          while (uVar21 == 0) {
            uStack_1c8 = (int)uVar18 + 0x20;
            uVar18 = (ulonglong)uStack_1c8;
            iVar14 = (int)uVar17;
            local_1e0 = iVar14 + 1;
            uVar17 = (ulonglong)local_1e0;
            if ((int)(((int)(local_100 - 1) >> 0x1f & 0x1fU) + (local_100 - 1)) >> 5 <
                (int)local_1e0) goto LAB_14c8fc7cd;
            uVar21 = ((uint *)((longlong)FVar19 + 4))[iVar14];
          }
          uStack_1dc = -uVar21 & uVar21;
          uVar17 = (ulonglong)uStack_1dc * 2 + 1;
          lVar7 = 0x3f;
          if (uVar17 != 0) {
            for (; uVar17 >> lVar7 == 0; lVar7 = lVar7 + -1) {
            }
          }
          uStack_1cc = (int)lVar7 + -1 + uStack_1c8;
          uVar17 = (ulonglong)uStack_1cc;
          if ((int)local_100 < (int)uStack_1cc) {
LAB_14c8fc7cd:
            uVar17 = (ulonglong)local_100;
            uStack_1cc = local_100;
          }
        }
        local_1d0 = 0xffffffff;
        local_198._0_8_ = local_128;
        local_198._8_8_ = CONCAT44(uStack_1dc,local_1e0);
        TStack_180._s_0.X = (double)CONCAT44(uStack_1cc,0xffffffff);
        TStack_180._s_0.Y = (double)CONCAT44(uStack_1c4,uStack_1c8);
        FStack_1d8 = FVar1;
        local_198._16_8_ = FVar1;
        if ((int)uVar17 < (int)local_100) {
          do {
            pvVar2 = (void *)(*(longlong *)local_198._0_8_ + (longlong)(int)uVar17 * 0x18);
            uVar21 = FCrc::MemCrc_DEPRECATED(pvVar2,0xc,0);
            uVar21 = local_e0 - 1 & uVar21;
            *(uint *)((longlong)pvVar2 + 0x14) = uVar21;
            FVar15.Data = local_f0;
            if (local_e8.Data != (FScriptContainerElement *)0x0) {
              FVar15.Data = local_e8.Data;
            }
            uVar18 = (longlong)(int)local_e0 - 1U & (longlong)(int)uVar21;
            *(undefined4 *)((longlong)pvVar2 + 0x10) = *(undefined4 *)(FVar15.Data + uVar18 * 4);
            *(int *)(FVar15.Data + uVar18 * 4) = (int)uVar17;
            TStack_180._0_4_ = TStack_180._0_4_ & ~local_198._12_4_;
            TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                      ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_198 + 8));
            uVar17 = (ulonglong)(uint)TStack_180._4_4_;
          } while ((int)TStack_180._4_4_ < (int)*(uint *)(local_198._16_8_ + 0x18));
        }
      }
    }
  }
  dVar11 = __real_41f0000000000000;
  uVar21 = (param_1->VertexRefCounts).RefCounts.CurBlockUsed +
           (param_1->VertexRefCounts).RefCounts.CurBlock * 0x200;
  if ((uVar21 == 0) ||
     (pFVar6 = (param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data, uVar16 = 0,
     (ushort)(**(short **)pFVar6 - 1U) < 0xfffe)) {
LAB_14c8fc8d7:
    uVar22 = (uint)uVar16;
  }
  else {
    uVar16 = 1;
    uVar22 = 1;
    if (1 < (int)uVar21) {
      do {
        sVar5 = *(short *)(*(longlong *)(pFVar6 + (uVar16 >> 9) * 8) +
                          (ulonglong)((uint)uVar16 & 0x1ff) * 2);
        if ((sVar5 != 0) && (sVar5 != -1)) break;
        uVar22 = (uint)uVar16 + 1;
        uVar16 = (ulonglong)uVar22;
      } while ((int)uVar22 < (int)uVar21);
      goto LAB_14c8fc8d7;
    }
  }
  if (uVar22 != uVar21) {
    local_158.Value = &local_1b0;
    local_148 = local_1e8;
LAB_14c8fc900:
    do {
      uVar22 = (uint)uVar16;
      lVar7 = *(longlong *)((param_1->Vertices).Blocks.AllocatorInstance.Data + (uVar16 >> 9) * 8);
      pdVar3 = (double *)(lVar7 + (ulonglong)(uVar22 & 0x1ff) * 0x18);
      dVar10 = *pdVar3;
      dVar20 = pdVar3[1];
      local_1e8[0] = uVar22;
      dVar8 = FGenericPlatformMath::Fmod
                        (*(double *)(lVar7 + 0x10 + (ulonglong)(uVar22 & 0x1ff) * 0x18) /
                         local_d0.CellSize,dVar11);
      if (dVar8 < 0.0) {
        dVar8 = dVar8 + dVar11;
      }
      dVar20 = FGenericPlatformMath::Fmod(dVar20 / local_d0.CellSize,dVar11);
      if (dVar20 < 0.0) {
        dVar20 = dVar20 + dVar11;
      }
      dVar10 = FGenericPlatformMath::Fmod(dVar10 / local_d0.CellSize,dVar11);
      if (dVar10 < 0.0) {
        dVar10 = dVar10 + dVar11;
      }
      local_1b0 = (int)(longlong)dVar10;
      local_1ac = (undefined4)(longlong)dVar20;
      local_1a8 = (undefined4)(longlong)dVar8;
      TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UE::Geometry::FVector3i_const_&,int_const_&>_>
                ((TSet<TTuple<UE::Geometry::FVector3i,int>,TDefaultMapHashableKeyFuncs<UE::Geometry::FVector3i,int,1>,FDefaultSetAllocator>
                  *)local_128,&local_158,(bool *)&local_158.Value);
      uVar22 = uVar22 + 1;
      uVar16 = (ulonglong)uVar22;
      if ((int)uVar22 < (int)uVar21) {
        do {
          uVar17 = (ulonglong)((uint)uVar16 & 0x1ff);
          lVar7 = *(longlong *)
                   ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.Data +
                   (uVar16 >> 9) * 8);
          if ((*(short *)(lVar7 + uVar17 * 2) != 0) && (*(short *)(lVar7 + uVar17 * 2) != -1))
          goto LAB_14c8fc900;
          uVar22 = (uint)uVar16 + 1;
          uVar16 = (ulonglong)uVar22;
        } while ((int)uVar22 < (int)uVar21);
      }
    } while (uVar22 != uVar21);
  }
  local_198._0_8_ = (param_3->Origin).field0_0x0._s_0.X;
  local_198._8_8_ = (param_3->Origin).field0_0x0._s_0.Y;
  local_198._16_8_ = (param_3->Origin).field0_0x0._s_0.Z;
  TStack_180._s_0.X = (param_3->Rotation).field0_0x0._s_0.X;
  TStack_180._s_0.Y = (param_3->Rotation).field0_0x0._s_0.Y;
  TStack_180._s_0.Z = (param_3->Rotation).field0_0x0._s_0.Z;
  TStack_180._s_0.W = (param_3->Rotation).field0_0x0._s_0.W;
  bVar12 = AssignMatches(this,param_1,(TPointHashGrid3<int,double> *)local_128,&local_1c0,
                         (TFrame3<double> *)local_198);
  local_e0 = 0;
  if (local_e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.Data);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::Geometry::FVector3i,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)local_128);
LAB_14c8fca58:
  if (local_1c0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1c0.AllocatorInstance.Data);
  }
  return bVar12;
}

// Initialize @ 14c8fcaf0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FMeshPlanarSymmetry::Initialize
          (FMeshPlanarSymmetry *this,FDynamicMesh3 *param_1,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_2,TFrame3<double> *param_3)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  bool bVar13;
  undefined1 uVar14;
  ulonglong uVar15;
  TVector<double>_u_0 local_c8;
  double dStack_b0;
  double local_a8;
  double dStack_a0;
  TVector<double>_u_0 local_98;
  double dStack_80;
  double local_78;
  double dStack_70;
  double local_68;
  
  dVar7 = (param_3->Origin).field0_0x0._s_0.X;
  dVar8 = (param_3->Origin).field0_0x0._s_0.Y;
  dVar9 = (param_3->Origin).field0_0x0._s_0.Z;
  dVar10 = (param_3->Rotation).field0_0x0._s_0.X;
  dVar11 = (param_3->Rotation).field0_0x0._s_0.Y;
  dVar12 = (param_3->Rotation).field0_0x0._s_0.Z;
  uVar3 = param_2->RootIndex;
  dVar1 = (param_3->Rotation).field0_0x0._s_0.W;
  if ((int)uVar3 < 0) {
    bVar13 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2828200105734045879>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                        ,0xb7,"RootIndex >= 0");
    if (bVar13) {
      pcVar6 = (code *)swi(3);
      uVar14 = (*pcVar6)();
      return (bool)uVar14;
    }
    local_c8._s_0.X = ___xmm_7fefffffffffffff7fefffffffffffff;
    local_c8._s_0.Y = _UNK_150a9e648;
    local_a8 = ___xmm_ffefffffffffffffffefffffffffffff;
    dStack_a0 = _UNK_1508ffb58;
    local_c8._s_0.Z = ___xmm_ffefffffffffffff7fefffffffffffff;
    dStack_b0 = _UNK_150a9e6d8;
  }
  else {
    uVar15 = (ulonglong)(uVar3 & 0x1ff);
    lVar4 = *(longlong *)
             ((param_2->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8);
    dVar2 = *(double *)(lVar4 + 0x10 + uVar15 * 0x18);
    lVar5 = *(longlong *)
             ((param_2->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar3 >> 9) * 8);
    dStack_b0 = *(double *)(lVar4 + uVar15 * 0x18);
    local_a8 = *(double *)(lVar4 + 8 + uVar15 * 0x18);
    local_c8._s_0.X = dStack_b0 - *(double *)(lVar5 + uVar15 * 0x18);
    local_c8._s_0.Y = local_a8 - *(double *)(lVar5 + 8 + uVar15 * 0x18);
    dStack_b0 = dStack_b0 + *(double *)(lVar5 + uVar15 * 0x18);
    local_a8 = local_a8 + *(double *)(lVar5 + 8 + uVar15 * 0x18);
    dStack_a0 = dVar2 + *(double *)(lVar5 + 0x10 + uVar15 * 0x18);
    local_c8._s_0.Z = dVar2 - *(double *)(lVar5 + 0x10 + uVar15 * 0x18);
  }
  local_98._s_0.X = dVar7;
  local_98._s_0.Y = dVar8;
  local_98._s_0.Z = dVar9;
  dStack_80 = dVar10;
  local_78 = dVar11;
  dStack_70 = dVar12;
  local_68 = dVar1;
  bVar13 = Initialize(this,param_1,(TAxisAlignedBox3<double> *)&local_c8._s_0,
                      (TFrame3<double> *)&local_98._s_0);
  return bVar13;
}

// SetErrorScale @ 14c916a10

void __thiscall
UE::Geometry::FMeshPlanarSymmetry::SetErrorScale
          (FMeshPlanarSymmetry *this,TAxisAlignedBox3<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (param_1->Max).field0_0x0._s_0.Z - (param_1->Min).field0_0x0._s_0.Z;
  dVar1 = (param_1->Max).field0_0x0._s_0.Y - (param_1->Min).field0_0x0._s_0.Y;
  dVar2 = (param_1->Max).field0_0x0._s_0.X - (param_1->Min).field0_0x0._s_0.X;
  if (dVar3 <= 0.0) {
    dVar3 = 0.0;
  }
  if (dVar1 <= 0.0) {
    dVar1 = 0.0;
  }
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  if (dVar3 <= dVar1) {
    dVar3 = dVar1;
  }
  if (dVar3 <= dVar2) {
    dVar3 = dVar2;
  }
  if (dVar3 <= __real_3ff0000000000000) {
    dVar3 = __real_3ff0000000000000;
  }
  this->ErrorScale = dVar3;
  return;
}

// UpdatePlaneVertex @ 14c9233d0

void __thiscall
UE::Geometry::FMeshPlanarSymmetry::UpdatePlaneVertex(FMeshPlanarSymmetry *this,int param_1)

{
  FMutex *this_00;
  uint *puVar1;
  double *pdVar2;
  atomic<unsigned_char> aVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  FDynamicMesh3 *pFVar7;
  longlong lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  short sVar12;
  ulonglong uVar13;
  bool bVar14;
  double dVar15;
  double dVar16;
  
  dVar15 = (this->SymmetryFrame).Rotation.field0_0x0._s_0.Y;
  dVar16 = (this->SymmetryFrame).Rotation.field0_0x0._s_0.X;
  dVar4 = (this->SymmetryFrame).Rotation.field0_0x0._s_0.W;
  pFVar7 = this->TargetMesh;
  dVar5 = (this->SymmetryFrame).Rotation.field0_0x0._s_0.Z;
  dVar5 = dVar5 + dVar5;
  uVar13 = (ulonglong)(param_1 & 0x1ff);
  lVar8 = *(longlong *)
           ((pFVar7->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)((uint)param_1 >> 9) * 8);
  dVar9 = dVar4 * (dVar15 + dVar15) + dVar5 * dVar16;
  pdVar2 = (double *)(lVar8 + uVar13 * 0x18);
  dVar11 = *pdVar2;
  dVar10 = pdVar2[1];
  dVar6 = *(double *)(lVar8 + 0x10 + uVar13 * 0x18);
  dVar4 = dVar5 * dVar15 - dVar4 * (dVar16 + dVar16);
  dVar16 = __real_3ff0000000000000 - ((dVar15 + dVar15) * dVar15 + (dVar16 + dVar16) * dVar16);
  dVar15 = (dVar10 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Y) * dVar4 +
           (dVar11 - (this->SymmetryFrame).Origin.field0_0x0._s_0.X) * dVar9 +
           (dVar6 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Z) * dVar16;
  dVar11 = dVar11 - dVar15 * dVar9;
  dVar10 = dVar10 - dVar15 * dVar4;
  dVar6 = dVar6 - dVar15 * dVar16;
  sVar12 = _dclass(dVar11);
  if (((sVar12 < 1) && (sVar12 = _dclass(dVar10), sVar12 < 1)) &&
     (sVar12 = _dclass(dVar6), sVar12 < 1)) {
    *(double *)(lVar8 + uVar13 * 0x18) = dVar11;
    *(double *)(lVar8 + 8 + uVar13 * 0x18) = dVar10;
    *(double *)(lVar8 + 0x10 + uVar13 * 0x18) = dVar6;
    if ((pFVar7->ChangeStampShape).bIsEnabled != false) {
      this_00 = &(pFVar7->ChangeStampShape).Mutex;
      LOCK();
      bVar14 = this_00->State == (atomic<unsigned_char>)0x0;
      if (bVar14) {
        this_00->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar14) {
        FMutex::LockSlow(this_00);
      }
      puVar1 = &(pFVar7->ChangeStampShape).Value;
      *puVar1 = *puVar1 + 1;
      LOCK();
      aVar3 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        FMutex::WakeWaitingThread(this_00);
      }
    }
  }
  return;
}

// UpdateSourceVertex @ 14c9239e0

void __thiscall
UE::Geometry::FMeshPlanarSymmetry::UpdateSourceVertex(FMeshPlanarSymmetry *this,int param_1)

{
  FMutex *this_00;
  uint *puVar1;
  double *pdVar2;
  atomic<unsigned_char> aVar3;
  double dVar4;
  longlong lVar5;
  FDynamicMesh3 *pFVar6;
  code *pcVar7;
  double dVar8;
  double dVar9;
  bool bVar10;
  short sVar11;
  uint uVar12;
  ulonglong uVar13;
  double dVar14;
  double dVar15;
  
  lVar5 = *(longlong *)
           ((this->TargetMesh->Vertices).Blocks.AllocatorInstance.Data +
           (ulonglong)((uint)param_1 >> 9) * 8);
  dVar4 = *(double *)(lVar5 + 0x10 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  pdVar2 = (double *)(lVar5 + (ulonglong)(param_1 & 0x1ff) * 0x18);
  dVar9 = *pdVar2;
  dVar8 = pdVar2[1];
  uVar12 = 0;
  if (param_1 < (this->Vertices).ArrayNum) {
    uVar12 = (uint)~param_1 >> 0x1f;
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
  pFVar6 = this->TargetMesh;
  uVar12 = *(uint *)((this->Vertices).AllocatorInstance.Data + (longlong)param_1 * 0x10 + 0xc);
  if (((((int)uVar12 < 0) ||
       ((int)((pFVar6->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (pFVar6->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar12)) ||
      (0xfffd < (ushort)(*(short *)(*(longlong *)
                                     ((pFVar6->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                      Data + (ulonglong)(uVar12 >> 9) * 8) +
                                   (ulonglong)(uVar12 & 0x1ff) * 2) - 1U))) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("TargetMesh->IsVertex(MirrorVID)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\GeometryProcessing\\Source\\DynamicMesh\\Private\\Parameterization\\MeshPlanarSymmetry.cpp"
                          ,0x347,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  dVar15 = dVar4 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Z;
  dVar14 = (dVar8 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Y) *
           (this->CachedSymmetryAxis).field0_0x0._s_0.Y +
           (dVar9 - (this->SymmetryFrame).Origin.field0_0x0._s_0.X) *
           (this->CachedSymmetryAxis).field0_0x0._s_0.X;
  dVar14 = (dVar15 + dVar15) * (this->CachedSymmetryAxis).field0_0x0._s_0.Z + dVar14 + dVar14;
  dVar9 = dVar9 - dVar14 * (this->CachedSymmetryAxis).field0_0x0._s_0.X;
  pFVar6 = this->TargetMesh;
  dVar8 = dVar8 - dVar14 * (this->CachedSymmetryAxis).field0_0x0._s_0.Y;
  dVar4 = dVar4 - dVar14 * (this->CachedSymmetryAxis).field0_0x0._s_0.Z;
  sVar11 = _dclass(dVar9);
  if (((sVar11 < 1) && (sVar11 = _dclass(dVar8), sVar11 < 1)) &&
     (sVar11 = _dclass(dVar4), sVar11 < 1)) {
    uVar13 = (ulonglong)(uVar12 & 0x1ff);
    lVar5 = *(longlong *)
             ((pFVar6->Vertices).Blocks.AllocatorInstance.Data + (ulonglong)(uVar12 >> 9) * 8);
    *(double *)(lVar5 + uVar13 * 0x18) = dVar9;
    *(double *)(lVar5 + 8 + uVar13 * 0x18) = dVar8;
    *(double *)(lVar5 + 0x10 + uVar13 * 0x18) = dVar4;
    if ((pFVar6->ChangeStampShape).bIsEnabled != false) {
      this_00 = &(pFVar6->ChangeStampShape).Mutex;
      LOCK();
      bVar10 = this_00->State == (atomic<unsigned_char>)0x0;
      if (bVar10) {
        this_00->State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar10) {
        FMutex::LockSlow(this_00);
      }
      puVar1 = &(pFVar6->ChangeStampShape).Value;
      *puVar1 = *puVar1 + 1;
      LOCK();
      aVar3 = this_00->State;
      this_00->State = (atomic<unsigned_char>)((char)this_00->State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        FMutex::WakeWaitingThread(this_00);
      }
    }
  }
  return;
}

// Validate @ 14c924ba0

bool __thiscall
UE::Geometry::FMeshPlanarSymmetry::Validate(FMeshPlanarSymmetry *this,FDynamicMesh3 *param_1)

{
  if (param_1 != (FDynamicMesh3 *)0x0) {
    return (param_1->VertexRefCounts).UsedCount != 0;
  }
  return false;
}

// ValidateSymmetry @ 14c9259f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FMeshPlanarSymmetry::ValidateSymmetry
          (FMeshPlanarSymmetry *this,FDynamicMesh3 *param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  FScriptContainerElement *pFVar6;
  longlong lVar7;
  code *pcVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  undefined1 uVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  uVar13 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar12 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  iVar4 = (this->Vertices).ArrayNum;
  if ((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
      (param_1->VertexRefCounts).RefCounts.CurBlockUsed == iVar4) {
    dVar2 = this->ErrorScale;
    uVar18 = 0;
    dVar10 = dVar2 * ___real_3ea0c6f7a0000000;
    dVar2 = dVar2 * dVar2 * ___real_3d7197997fb06240;
    if (0 < iVar4) {
      lVar19 = 0;
      do {
        if ((-1 < (int)uVar18) &&
           ((int)uVar18 <
            (int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_1->VertexRefCounts).RefCounts.CurBlockUsed))) {
          uVar17 = (ulonglong)(uVar18 & 0x1ff);
          if ((ushort)(*(short *)(*(longlong *)
                                   ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance.
                                    Data + (ulonglong)(uVar18 >> 9) * 8) + uVar17 * 2) - 1U) <
              0xfffe) {
            uVar16 = 0;
            if ((int)uVar18 < (this->Vertices).ArrayNum) {
              uVar16 = ~uVar18 >> 0x1f;
            }
            if (uVar16 == 0) {
              bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld");
              if (bVar14) {
                pcVar8 = (code *)swi(3);
                uVar15 = (*pcVar8)();
                return (bool)uVar15;
              }
            }
            pFVar5 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
            pFVar6 = (this->Vertices).AllocatorInstance.Data;
            lVar7 = *(longlong *)(pFVar5 + (ulonglong)(uVar18 >> 9) * 8);
            dVar21 = *(double *)(lVar7 + 0x10 + uVar17 * 0x18);
            pdVar1 = (double *)(lVar7 + uVar17 * 0x18);
            dVar9 = *pdVar1;
            dVar11 = pdVar1[1];
            if (pFVar6[lVar19 + 9] == (FScriptContainerElement)0x0) {
              if (pFVar6[lVar19 + 8] == (FScriptContainerElement)0x0) goto LAB_14c925cad;
              uVar16 = *(uint *)(pFVar6 + lVar19 + 0xc);
              if (((int)uVar16 < 0) ||
                 ((int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
                       (param_1->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar16))
              goto LAB_14c925cc0;
              uVar17 = (ulonglong)(uVar16 & 0x1ff);
              if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                                ((param_1->VertexRefCounts).RefCounts.Blocks.
                                                 AllocatorInstance.Data +
                                                (ulonglong)(uVar16 >> 9) * 8) + uVar17 * 2) - 1U))
              goto LAB_14c925cc0;
              dVar3 = (this->CachedSymmetryAxis).field0_0x0._s_0.Y;
              dVar22 = (this->CachedSymmetryAxis).field0_0x0._s_0.X;
              lVar7 = *(longlong *)(pFVar5 + (ulonglong)(uVar16 >> 9) * 8);
              dVar23 = dVar21 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Z;
              pdVar1 = (double *)(lVar7 + uVar17 * 0x18);
              dVar23 = (dVar11 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Y) * (dVar3 + dVar3) +
                       (dVar9 - (this->SymmetryFrame).Origin.field0_0x0._s_0.X) * (dVar22 + dVar22)
                       + (dVar23 + dVar23) * (this->CachedSymmetryAxis).field0_0x0._s_0.Z;
              dVar22 = *pdVar1 - (dVar9 - dVar23 * dVar22);
              dVar21 = *(double *)(lVar7 + 0x10 + uVar17 * 0x18) -
                       (dVar21 - dVar23 * (this->CachedSymmetryAxis).field0_0x0._s_0.Z);
              dVar9 = pdVar1[1] - (dVar11 - dVar23 * dVar3);
              dVar21 = dVar9 * dVar9 + dVar22 * dVar22 + dVar21 * dVar21;
              bVar14 = dVar21 == dVar2;
              bVar20 = dVar21 < dVar2;
            }
            else {
              dVar21 = (dVar11 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Y) *
                       (this->CachedSymmetryAxis).field0_0x0._s_0.Y +
                       (dVar9 - (this->SymmetryFrame).Origin.field0_0x0._s_0.X) *
                       (this->CachedSymmetryAxis).field0_0x0._s_0.X +
                       (dVar21 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Z) *
                       (this->CachedSymmetryAxis).field0_0x0._s_0.Z;
              dVar21 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar13,
                                        SUB84(dVar21,0) & uVar12);
              bVar14 = dVar21 == dVar10;
              bVar20 = dVar21 < dVar10;
            }
            if (!bVar20 && !bVar14) goto LAB_14c925cc0;
          }
        }
LAB_14c925cad:
        uVar18 = uVar18 + 1;
        lVar19 = lVar19 + 0x10;
      } while ((int)uVar18 < (this->Vertices).ArrayNum);
    }
    bVar14 = true;
  }
  else {
LAB_14c925cc0:
    bVar14 = false;
  }
  return bVar14;
}

// ValidateSymmetry @ 14c925d20

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __thiscall
UE::Geometry::FMeshPlanarSymmetry::ValidateSymmetry
          (FMeshPlanarSymmetry *this,FDynamicMesh3 *param_1,TArrayView<int_const_,int> *param_2)

{
  uint *puVar1;
  double *pdVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  longlong lVar8;
  code *pcVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 uVar16;
  uint uVar17;
  ulonglong uVar18;
  uint *puVar19;
  bool bVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  
  uVar14 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar13 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  puVar19 = (uint *)param_2->DataPtr;
  dVar3 = this->ErrorScale;
  dVar11 = dVar3 * ___real_3ea0c6f7a0000000;
  puVar1 = puVar19 + param_2->ArrayNum;
  dVar3 = dVar3 * dVar3 * ___real_3d7197997fb06240;
  while( true ) {
    if (puVar19 == puVar1) {
      return true;
    }
    uVar5 = *puVar19;
    if (((int)uVar5 < 0) ||
       ((int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar5)) {
      return false;
    }
    uVar18 = (ulonglong)(uVar5 & 0x1ff);
    if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                      ((param_1->VertexRefCounts).RefCounts.Blocks.AllocatorInstance
                                       .Data + (ulonglong)(uVar5 >> 9) * 8) + uVar18 * 2) - 1U)) {
      return false;
    }
    if ((this->Vertices).ArrayNum <= (int)uVar5) break;
    uVar17 = 0;
    if ((int)uVar5 < (this->Vertices).ArrayNum) {
      uVar17 = ~uVar5 >> 0x1f;
    }
    if ((uVar17 == 0) &&
       (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar15)) {
      pcVar9 = (code *)swi(3);
      uVar16 = (*pcVar9)();
      return (bool)uVar16;
    }
    pFVar6 = (param_1->Vertices).Blocks.AllocatorInstance.Data;
    pFVar7 = (this->Vertices).AllocatorInstance.Data;
    lVar8 = *(longlong *)(pFVar6 + (ulonglong)(uVar5 >> 9) * 8);
    dVar21 = *(double *)(lVar8 + 0x10 + uVar18 * 0x18);
    pdVar2 = (double *)(lVar8 + uVar18 * 0x18);
    dVar10 = *pdVar2;
    dVar12 = pdVar2[1];
    if (pFVar7[(longlong)(int)uVar5 * 0x10 + 9] == (FScriptContainerElement)0x0) {
      uVar5 = *(uint *)(pFVar7 + (longlong)(int)uVar5 * 0x10 + 0xc);
      if ((int)uVar5 < 0) {
        return false;
      }
      if ((int)((param_1->VertexRefCounts).RefCounts.CurBlock * 0x200 +
               (param_1->VertexRefCounts).RefCounts.CurBlockUsed) <= (int)uVar5) {
        return false;
      }
      uVar18 = (ulonglong)(uVar5 & 0x1ff);
      if (0xfffd < (ushort)(*(short *)(*(longlong *)
                                        ((param_1->VertexRefCounts).RefCounts.Blocks.
                                         AllocatorInstance.Data + (ulonglong)(uVar5 >> 9) * 8) +
                                      uVar18 * 2) - 1U)) {
        return false;
      }
      dVar4 = (this->CachedSymmetryAxis).field0_0x0._s_0.Y;
      dVar22 = (this->CachedSymmetryAxis).field0_0x0._s_0.X;
      lVar8 = *(longlong *)(pFVar6 + (ulonglong)(uVar5 >> 9) * 8);
      dVar23 = dVar21 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Z;
      pdVar2 = (double *)(lVar8 + uVar18 * 0x18);
      dVar23 = (dVar12 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Y) * (dVar4 + dVar4) +
               (dVar10 - (this->SymmetryFrame).Origin.field0_0x0._s_0.X) * (dVar22 + dVar22) +
               (dVar23 + dVar23) * (this->CachedSymmetryAxis).field0_0x0._s_0.Z;
      dVar22 = *pdVar2 - (dVar10 - dVar23 * dVar22);
      dVar21 = *(double *)(lVar8 + 0x10 + uVar18 * 0x18) -
               (dVar21 - dVar23 * (this->CachedSymmetryAxis).field0_0x0._s_0.Z);
      dVar10 = pdVar2[1] - (dVar12 - dVar23 * dVar4);
      dVar21 = dVar10 * dVar10 + dVar22 * dVar22 + dVar21 * dVar21;
      bVar15 = dVar21 == dVar3;
      bVar20 = dVar21 < dVar3;
    }
    else {
      dVar21 = (dVar12 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Y) *
               (this->CachedSymmetryAxis).field0_0x0._s_0.Y +
               (dVar10 - (this->SymmetryFrame).Origin.field0_0x0._s_0.X) *
               (this->CachedSymmetryAxis).field0_0x0._s_0.X +
               (dVar21 - (this->SymmetryFrame).Origin.field0_0x0._s_0.Z) *
               (this->CachedSymmetryAxis).field0_0x0._s_0.Z;
      dVar21 = (double)CONCAT44((uint)((ulonglong)dVar21 >> 0x20) & uVar14,SUB84(dVar21,0) & uVar13)
      ;
      bVar15 = dVar21 == dVar11;
      bVar20 = dVar21 < dVar11;
    }
    if (!bVar20 && !bVar15) {
      return false;
    }
    puVar19 = puVar19 + 1;
  }
  return false;
}

