// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 2

// InitializeForTriangleSet<UE::Geometry::FDynamicMesh3> @ 1435d77e0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UELocal::FTriangleInfoCache::InitializeForTriangleSet<UE::Geometry::FDynamicMesh3>
          (FTriangleInfoCache *this,FDynamicMesh3 *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  uint uVar9;
  FScriptContainerElement *pFVar10;
  uint uVar11;
  <lambda_1> local_res8 [8];
  int local_res18 [4];
  TArrayView<std::nullptr_t,int> local_78;
  code *local_68;
  FDynamicMesh3 **local_60;
  FDynamicMesh3 *local_58;
  FTriangleInfoCache *local_50;
  int *local_48;
  
  local_res18[0] = param_2;
  TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNumUninitialized
            (&this->TriNormals,
             (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
  piVar1 = &(this->TriAreas).ArrayNum;
  iVar7 = *piVar1;
  uVar9 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
          (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
  if (iVar7 < (int)uVar9) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (8,8,uVar9 - iVar7,&(this->TriAreas).AllocatorInstance,piVar1,
                       &(this->TriAreas).ArrayMax);
    memset((this->TriAreas).AllocatorInstance.Data + (longlong)iVar6 * 8,0,
           (longlong)(int)(uVar9 - iVar7) << 3);
  }
  else {
    if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
    }
    if ((int)uVar9 < iVar7) {
      uVar11 = iVar7 - uVar9;
      if ((int)(uVar11 | uVar9) < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (uVar11 != 0) {
        pFVar8 = (this->TriAreas).AllocatorInstance.Data + (longlong)(int)uVar9 * 8;
        iVar7 = (*piVar1 - uVar11) - uVar9;
        if (iVar7 != 0) {
          memmove(pFVar8,pFVar8 + (longlong)(int)uVar11 * 8,(longlong)iVar7 << 3);
        }
        *piVar1 = *piVar1 - uVar11;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,&(this->TriAreas).AllocatorInstance,*piVar1,&(this->TriAreas).ArrayMax);
      }
    }
  }
  if (local_res18[0] == 0) {
    piVar2 = &(this->Legacy_TriFrames).ArrayNum;
    iVar7 = *piVar2;
    uVar9 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    if (iVar7 < (int)uVar9) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x38,8,uVar9 - iVar7,&(this->Legacy_TriFrames).AllocatorInstance,piVar2,
                 &(this->Legacy_TriFrames).ArrayMax);
    }
    else {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((int)uVar9 < iVar7) {
        uVar11 = iVar7 - uVar9;
        if ((int)(uVar9 | uVar11) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar11 != 0) {
          pFVar8 = (this->Legacy_TriFrames).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x38;
          iVar7 = (*piVar2 - uVar11) - uVar9;
          if (iVar7 != 0) {
            memmove(pFVar8,pFVar8 + (longlong)(int)uVar11 * 0x38,(longlong)iVar7 * 0x38);
          }
          *piVar2 = *piVar2 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x38,8,&(this->Legacy_TriFrames).AllocatorInstance,*piVar2,
                     &(this->Legacy_TriFrames).ArrayMax);
        }
      }
    }
    piVar2 = &(this->Legacy_UVTriangles).ArrayNum;
    iVar7 = *piVar2;
    uVar9 = (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
            (param_1->TriangleRefCounts).RefCounts.CurBlockUsed;
    if (iVar7 < (int)uVar9) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,uVar9 - iVar7,&(this->Legacy_UVTriangles).AllocatorInstance,piVar2,
                 &(this->Legacy_UVTriangles).ArrayMax);
    }
    else {
      if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
      }
      if ((int)uVar9 < iVar7) {
        uVar11 = iVar7 - uVar9;
        if ((int)(uVar9 | uVar11) < 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x458,
                             L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                            );
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
        }
        if (uVar11 != 0) {
          pFVar8 = (this->Legacy_UVTriangles).AllocatorInstance.Data + (longlong)(int)uVar9 * 0x30;
          iVar7 = (*piVar2 - uVar11) - uVar9;
          if (iVar7 != 0) {
            memmove(pFVar8,pFVar8 + (longlong)(int)uVar11 * 0x30,(longlong)iVar7 * 0x30);
          }
          *piVar2 = *piVar2 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x30,8,&(this->Legacy_UVTriangles).AllocatorInstance,*piVar2,
                     &(this->Legacy_UVTriangles).ArrayMax);
        }
      }
    }
  }
  local_48 = local_res18;
  local_68 = UE::Core::Private::Function::
             TFunctionRefCaller<`UELocal::FTriangleInfoCache::InitializeForTriangleSet<UE::Geometry::FDynamicMesh3>'::__l2::<lambda_1>,void,int>
             ::Call;
  local_60 = &local_58;
  local_78.DataPtr = (void **)0x0;
  local_78.ArrayNum = 0;
  local_58 = param_1;
  local_50 = this;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",
             (param_1->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
             (param_1->TriangleRefCounts).RefCounts.CurBlockUsed,1,
             (TFunctionRef<void___cdecl(int)> *)&local_68,local_res8[0],None,&local_78);
  this->TotalArea = 0.0;
  pFVar10 = (this->TriAreas).AllocatorInstance.Data;
  iVar7 = *piVar1;
  pFVar8 = pFVar10 + (longlong)iVar7 * 8;
  while( true ) {
    if (*piVar1 != iVar7) {
      `TCheckedPointerIterator<double,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar8) break;
    dVar3 = *(double *)pFVar10;
    pFVar10 = pFVar10 + 8;
    this->TotalArea = this->TotalArea + dVar3;
  }
  return;
}

// operator() @ 1435e6410

void __thiscall
`UELocal::FTriangleInfoCache::InitializeForTriangleSet<UE::Geometry::FDynamicMesh3>'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *plVar18;
  code *pcVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  bool bVar36;
  uint uVar37;
  TVector<double> *pTVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  TFrame3<double> *pTVar41;
  longlong lVar42;
  uint uVar43;
  longlong lVar44;
  double dVar45;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  TQuaternion<double>_u_0 TStack_200;
  double local_1e0;
  double dStack_1d8;
  TVector<double>_u_0 local_1d0;
  double local_1a8;
  double local_190;
  double local_178;
  TVector<double> local_170;
  TVector<double> local_158;
  TVector<double> local_140;
  TVector<double> local_128;
  TVector<double> local_110;
  TVector<double> local_f8 [8];
  
  if (-1 < param_1) {
    lVar15 = *(longlong *)this;
    lVar42 = (longlong)param_1;
    if (param_1 < *(int *)(lVar15 + 0x140) * 0x200 + *(int *)(lVar15 + 0x144)) {
      uVar40 = (ulonglong)(param_1 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar15 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8)
                             + uVar40 * 2) - 1U) < 0xfffe) {
        lVar44 = *(longlong *)(lVar15 + 0x10);
        lVar16 = *(longlong *)((longlong)this + 8);
        lVar15 = *(longlong *)(*(longlong *)(lVar15 + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
        uVar37 = *(uint *)(lVar15 + uVar40 * 0xc);
        uVar39 = (ulonglong)(uVar37 & 0x1ff);
        lVar17 = *(longlong *)(lVar44 + (ulonglong)(uVar37 >> 9) * 8);
        local_190 = *(double *)(lVar17 + 0x10 + uVar39 * 0x18);
        pdVar1 = (double *)(lVar17 + uVar39 * 0x18);
        dVar21 = *pdVar1;
        dVar25 = pdVar1[1];
        uVar37 = *(uint *)(lVar15 + 4 + uVar40 * 0xc);
        uVar43 = (uint)~param_1 >> 0x1f;
        uVar39 = (ulonglong)(uVar37 & 0x1ff);
        lVar17 = *(longlong *)(lVar44 + (ulonglong)(uVar37 >> 9) * 8);
        local_1a8 = *(double *)(lVar17 + 0x10 + uVar39 * 0x18);
        auVar48 = *(undefined1 (*) [16])(lVar17 + uVar39 * 0x18);
        uVar37 = *(uint *)(lVar15 + 8 + uVar40 * 0xc);
        uVar40 = (ulonglong)(uVar37 & 0x1ff);
        lVar15 = *(longlong *)(lVar44 + (ulonglong)(uVar37 >> 9) * 8);
        local_178 = *(double *)(lVar15 + 0x10 + uVar40 * 0x18);
        pdVar1 = (double *)(lVar15 + uVar40 * 0x18);
        dVar29 = *pdVar1;
        dVar27 = pdVar1[1];
        uVar37 = 0;
        if (param_1 < *(int *)(lVar16 + 0x18)) {
          uVar37 = uVar43;
        }
        local_1e0 = dVar21;
        dStack_1d8 = dVar25;
        if ((uVar37 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        dVar28 = local_178;
        dVar31 = local_190;
        dVar24 = local_1a8;
        dVar49 = auVar48._0_8_;
        auVar46._0_8_ = auVar48._8_8_;
        auVar46._8_4_ = auVar48._8_4_;
        auVar46._12_4_ = auVar48._12_4_;
        auVar47._8_8_ = auVar46._8_8_;
        auVar47._0_8_ = auVar46._0_8_ - dVar25;
        dVar23 = (dVar27 - dVar25) * (local_1a8 - local_190) -
                 (local_178 - local_190) * auVar47._0_8_;
        dVar22 = (local_178 - local_190) * (dVar49 - dVar21) -
                 (dVar29 - dVar21) * (local_1a8 - local_190);
        dVar21 = (dVar29 - dVar21) * auVar47._0_8_ - (dVar27 - dVar25) * (dVar49 - dVar21);
        auVar48._8_8_ = 0;
        auVar48._0_8_ = dVar22 * dVar22 + dVar23 * dVar23 + dVar21 * dVar21;
        auVar48 = sqrtpd(auVar47,auVar48);
        dVar45 = auVar48._0_8_;
        if (dVar45 <= 0.0) {
          dVar45 = 0.0;
          dVar21 = 0.0;
          dVar22 = 0.0;
          dVar23 = 0.0;
        }
        else {
          dVar20 = __real_3ff0000000000000 / dVar45;
          dVar21 = dVar21 * dVar20;
          dVar22 = dVar22 * dVar20;
          dVar23 = dVar23 * dVar20;
        }
        plVar18 = *(longlong **)((longlong)this + 8);
        *(double *)(*(longlong *)(lVar16 + 0x10) + lVar42 * 8) = dVar45 * __real_3fe0000000000000;
        uVar37 = 0;
        if (param_1 < (int)plVar18[1]) {
          uVar37 = uVar43;
        }
        if ((uVar37 == 0) &&
           (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar36)) {
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        lVar15 = *plVar18;
        *(double *)(lVar15 + lVar42 * 0x18) = dVar23;
        *(double *)(lVar15 + 8 + lVar42 * 0x18) = dVar22;
        *(double *)(lVar15 + 0x10 + lVar42 * 0x18) = dVar21;
        if (**(int **)((longlong)this + 0x10) == 0) {
          plVar18 = *(longlong **)((longlong)this + 8);
          uVar37 = 0;
          if (param_1 < (int)plVar18[1]) {
            uVar37 = uVar43;
          }
          dVar21 = (dVar49 + local_1e0 + dVar29) * __real_3fd5555555555555;
          dVar22 = (auVar46._0_8_ + dVar25 + dVar27) * __real_3fd5555555555555;
          dVar23 = (dVar24 + dVar31 + dVar28) * __real_3fd5555555555555;
          if ((uVar37 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
          TStack_200._s_0.W = __real_3ff0000000000000;
          TStack_200._s_0.X = 0.0;
          local_1d0._s_0.X = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.X;
          local_1d0._s_0.Y = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Y;
          local_1d0._s_0.Z = UE::Math::TVector<double>::ZAxisVector.field0_0x0._s_0.Z;
          TStack_200._s_0.Y = 0.0;
          TStack_200._s_0.Z = 0.0;
          UE::Geometry::TQuaternion<double>::SetFromTo
                    ((TQuaternion<double> *)&TStack_200._s_0,(TVector<double> *)&local_1d0._s_0,
                     (TVector<double> *)(*plVar18 + lVar42 * 0x18));
          uVar35 = TStack_200._s_0.W;
          uVar34 = TStack_200._s_0.Z;
          uVar33 = TStack_200._s_0.Y;
          uVar32 = TStack_200._s_0.X;
          lVar15 = *(longlong *)((longlong)this + 8);
          uVar37 = 0;
          if (param_1 < *(int *)(lVar15 + 0x28)) {
            uVar37 = uVar43;
          }
          if ((uVar37 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
          lVar15 = *(longlong *)(lVar15 + 0x20);
          lVar44 = lVar42 * 0x38;
          *(double *)(lVar44 + lVar15) = dVar21;
          ((double *)(lVar44 + lVar15))[1] = dVar22;
          pdVar1 = (double *)(lVar44 + 0x10 + lVar15);
          *pdVar1 = dVar23;
          pdVar1[1] = (double)uVar32;
          pdVar1 = (double *)(lVar44 + 0x20 + lVar15);
          *pdVar1 = (double)uVar33;
          pdVar1[1] = (double)uVar34;
          *(undefined8 *)(lVar44 + 0x30 + lVar15) = uVar35;
          lVar15 = *(longlong *)((longlong)this + 8);
          uVar37 = 0;
          if (param_1 < *(int *)(lVar15 + 0x28)) {
            uVar37 = uVar43;
          }
          if ((uVar37 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
          pTVar41 = (TFrame3<double> *)(*(longlong *)(lVar15 + 0x20) + lVar44);
          dVar28 = dVar28 - (pTVar41->Origin).field0_0x0._s_0.Z;
          dVar29 = dVar29 - (pTVar41->Origin).field0_0x0._s_0.X;
          dVar27 = dVar27 - (pTVar41->Origin).field0_0x0._s_0.Y;
          pTVar38 = UE::Geometry::TFrame3<double>::GetAxis(pTVar41,&local_170,0);
          dVar21 = (pTVar38->field0_0x0)._s_0.Z;
          dVar22 = (pTVar38->field0_0x0)._s_0.X;
          dVar23 = (pTVar38->field0_0x0)._s_0.Y;
          pTVar38 = UE::Geometry::TFrame3<double>::GetAxis(pTVar41,&local_158,1);
          lVar15 = *(longlong *)((longlong)this + 8);
          dVar45 = (pTVar38->field0_0x0)._s_0.Y;
          dVar20 = (pTVar38->field0_0x0)._s_0.X;
          dVar2 = (pTVar38->field0_0x0)._s_0.Z;
          uVar37 = 0;
          if (param_1 < *(int *)(lVar15 + 0x28)) {
            uVar37 = uVar43;
          }
          if ((uVar37 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
          pTVar41 = (TFrame3<double> *)(*(longlong *)(lVar15 + 0x20) + lVar44);
          dVar49 = dVar49 - (pTVar41->Origin).field0_0x0._s_0.X;
          dVar26 = auVar46._0_8_ - (pTVar41->Origin).field0_0x0._s_0.Y;
          dVar24 = dVar24 - (pTVar41->Origin).field0_0x0._s_0.Z;
          pTVar38 = UE::Geometry::TFrame3<double>::GetAxis(pTVar41,&local_140,0);
          dVar3 = (pTVar38->field0_0x0)._s_0.Z;
          dVar4 = (pTVar38->field0_0x0)._s_0.X;
          dVar5 = (pTVar38->field0_0x0)._s_0.Y;
          pTVar38 = UE::Geometry::TFrame3<double>::GetAxis(pTVar41,&local_128,1);
          lVar15 = *(longlong *)((longlong)this + 8);
          dVar6 = (pTVar38->field0_0x0)._s_0.Y;
          dVar7 = (pTVar38->field0_0x0)._s_0.X;
          dVar8 = (pTVar38->field0_0x0)._s_0.Z;
          uVar37 = 0;
          if (param_1 < *(int *)(lVar15 + 0x28)) {
            uVar37 = uVar43;
          }
          if ((uVar37 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
          pTVar41 = (TFrame3<double> *)(*(longlong *)(lVar15 + 0x20) + lVar44);
          dVar30 = local_1e0 - (pTVar41->Origin).field0_0x0._s_0.X;
          dVar25 = dVar25 - (pTVar41->Origin).field0_0x0._s_0.Y;
          dVar31 = dVar31 - (pTVar41->Origin).field0_0x0._s_0.Z;
          pTVar38 = UE::Geometry::TFrame3<double>::GetAxis(pTVar41,&local_110,0);
          dVar9 = (pTVar38->field0_0x0)._s_0.Z;
          dVar10 = (pTVar38->field0_0x0)._s_0.X;
          dVar11 = (pTVar38->field0_0x0)._s_0.Y;
          pTVar38 = UE::Geometry::TFrame3<double>::GetAxis(pTVar41,local_f8,1);
          lVar15 = *(longlong *)((longlong)this + 8);
          dVar12 = (pTVar38->field0_0x0)._s_0.Y;
          dVar13 = (pTVar38->field0_0x0)._s_0.X;
          dVar14 = (pTVar38->field0_0x0)._s_0.Z;
          uVar37 = 0;
          if (param_1 < *(int *)(lVar15 + 0x38)) {
            uVar37 = uVar43;
          }
          if ((uVar37 == 0) &&
             (bVar36 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(Index >= 0) & (Index < ArrayNum)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x447,
                                  L"Array index out of bounds: %lld into an array of size %lld"),
             bVar36)) {
            pcVar19 = (code *)swi(3);
            (*pcVar19)();
            return;
          }
          lVar15 = *(longlong *)(lVar15 + 0x30);
          *(double *)(lVar15 + lVar42 * 0x30) = dVar25 * dVar11 + dVar30 * dVar10 + dVar31 * dVar9;
          *(double *)(lVar15 + 8 + lVar42 * 0x30) =
               dVar25 * dVar12 + dVar30 * dVar13 + dVar31 * dVar14;
          *(double *)(lVar15 + 0x10 + lVar42 * 0x30) =
               dVar26 * dVar5 + dVar49 * dVar4 + dVar24 * dVar3;
          *(double *)(lVar15 + 0x18 + lVar42 * 0x30) =
               dVar26 * dVar6 + dVar49 * dVar7 + dVar24 * dVar8;
          *(double *)(lVar15 + 0x20 + lVar42 * 0x30) =
               dVar29 * dVar22 + dVar27 * dVar23 + dVar28 * dVar21;
          *(double *)(lVar15 + 0x28 + lVar42 * 0x30) =
               dVar27 * dVar45 + dVar29 * dVar20 + dVar28 * dVar2;
        }
      }
    }
  }
  return;
}

