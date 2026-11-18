// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelingOperators
// Functions: 8

// <lambda_invoker_cdecl> @ 14c940f70

bool __cdecl
UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::<lambda_46_>::<lambda_invoker_cdecl>
          (void)

{
  return false;
}

// TCachingMeshSDF<UE::Geometry::FDynamicMesh3> @ 14c945e40

TCachingMeshSDF<UE::Geometry::FDynamicMesh3> * __thiscall
UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::
TCachingMeshSDF<UE::Geometry::FDynamicMesh3>
          (TCachingMeshSDF<UE::Geometry::FDynamicMesh3> *this,FDynamicMesh3 *param_1,float param_2,
          TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *param_3,bool param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  this->Mesh = param_1;
  this->CellSize = param_2;
  this->Spatial = param_3;
  uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  (this->ExpandBounds).field0_0x0._s_0.X = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  (this->ExpandBounds).field0_0x0._s_0.Y = (double)uVar2;
  (this->ExpandBounds).field0_0x0._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  this->MaxOffsetDistance = 0.0;
  this->bUseParallel = true;
  this->bComputeSigns = true;
  this->ApproxMaxCellsPerDimension = 0x1000;
  this->InsideMode = WindingCount;
  this->bWantClosestTriGrid = false;
  this->bWantIntersectionsGrid = false;
  *(undefined8 *)&this->CancelF = 0;
  *(undefined8 *)&(this->CancelF).field_0x28 = 0;
  *(undefined ***)&(this->CancelF).field_0x10 =
       &___7__TFunction_OwnedObject_P6A_NXZ_0A__0A__Function_Private_Core_UE__6B_;
  puVar1 = &(this->CancelF).field_0x18;
  *(code **)puVar1 = <lambda_46_>::<lambda_invoker_cdecl>;
  if (puVar1 != (undefined1 *)0x0) {
    *(code **)&this->CancelF =
         Core::Private::Function::TFunctionRefCaller<bool_(__cdecl*)(void),bool>::Call;
  }
  (this->Grid).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Grid).Buffer.ArrayNum = 0;
  (this->Grid).Buffer.ArrayMax = 0;
  *(undefined8 *)&(this->Grid).Dimensions.field0_0x0 = 0;
  (this->Grid).Dimensions.field0_0x0._s_0.Z = 0;
  (this->ClosestTriGrid).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ClosestTriGrid).Buffer.ArrayNum = 0;
  (this->ClosestTriGrid).Buffer.ArrayMax = 0;
  *(undefined8 *)&(this->ClosestTriGrid).Dimensions.field0_0x0 = 0;
  (this->ClosestTriGrid).Dimensions.field0_0x0._s_0.Z = 0;
  (this->IntersectionsGrid).Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->IntersectionsGrid).Buffer.ArrayNum = 0;
  (this->IntersectionsGrid).Buffer.ArrayMax = 0;
  *(undefined8 *)&(this->IntersectionsGrid).Dimensions.field0_0x0 = 0;
  (this->IntersectionsGrid).Dimensions.field0_0x0._s_0.Z = 0;
  if (param_4) {
    Initialize(this);
  }
  return this;
}

// operator() @ 14c94e5b0

void __thiscall
`UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::__l2::
<lambda_1>::operator()(void *this,int param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  uint uVar9;
  longlong lVar10;
  code *pcVar11;
  longlong lVar12;
  longlong lVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  bool bVar17;
  char cVar18;
  bool bVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  undefined8 uVar24;
  int *piVar25;
  longlong *plVar26;
  ulonglong uVar27;
  ulonglong uVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  
  if (param_1 == (param_1 / 100) * 100) {
    lVar10 = *(longlong *)this;
    UE::Core::Private::Function::CheckCallable(*(void **)(lVar10 + 0x50));
    pcVar11 = *(code **)(lVar10 + 0x50);
    plVar26 = (longlong *)(lVar10 + 0x60);
    if (*(longlong **)(lVar10 + 0x78) != (longlong *)0x0) {
      plVar26 = *(longlong **)(lVar10 + 0x78);
    }
    uVar24 = (**(code **)(*plVar26 + 8))();
    cVar18 = (*pcVar11)(uVar24);
    if (cVar18 == '\x01') {
      **(undefined1 **)((longlong)this + 0x58) = 1;
    }
  }
  if (**(char **)((longlong)this + 0x58) == '\0') {
    lVar10 = **(longlong **)this;
    if ((-1 < param_1) && (param_1 < *(int *)(lVar10 + 0x140) * 0x200 + *(int *)(lVar10 + 0x144))) {
      uVar28 = (ulonglong)(param_1 & 0x1ff);
      if ((ushort)(*(short *)(*(longlong *)
                               (*(longlong *)(lVar10 + 0x148) + (ulonglong)((uint)param_1 >> 9) * 8)
                             + uVar28 * 2) - 1U) < 0xfffe) {
        lVar12 = *(longlong *)(lVar10 + 0x10);
        bVar17 = false;
        lVar10 = *(longlong *)(*(longlong *)(lVar10 + 0x130) + (ulonglong)((uint)param_1 >> 9) * 8);
        uVar9 = *(uint *)(lVar10 + uVar28 * 0xc);
        uVar27 = (ulonglong)(uVar9 & 0x1ff);
        lVar13 = *(longlong *)(lVar12 + (ulonglong)(uVar9 >> 9) * 8);
        auVar6 = *(undefined1 (*) [16])(lVar13 + uVar27 * 0x18);
        dVar1 = *(double *)(lVar13 + 0x10 + uVar27 * 0x18);
        uVar9 = *(uint *)(lVar10 + 4 + uVar28 * 0xc);
        uVar27 = (ulonglong)(uVar9 & 0x1ff);
        lVar13 = *(longlong *)(lVar12 + (ulonglong)(uVar9 >> 9) * 8);
        uVar9 = *(uint *)(lVar10 + 8 + uVar28 * 0xc);
        auVar7 = *(undefined1 (*) [16])(lVar13 + uVar27 * 0x18);
        dVar2 = *(double *)(lVar13 + 0x10 + uVar27 * 0x18);
        uVar28 = (ulonglong)(uVar9 & 0x1ff);
        lVar10 = *(longlong *)(lVar12 + (ulonglong)(uVar9 >> 9) * 8);
        auVar8 = *(undefined1 (*) [16])(lVar10 + uVar28 * 0x18);
        dVar3 = *(double *)(lVar10 + 0x10 + uVar28 * 0x18);
        dVar16 = auVar6._8_8_;
        dVar35 = auVar7._8_8_;
        dVar32 = auVar8._8_8_;
        if (*(int *)((longlong)*(longlong **)this + 0x3c) == 1) {
          bVar17 = 0.0 < (dVar2 - dVar1) * (dVar32 - dVar16) - (dVar35 - dVar16) * (dVar3 - dVar1);
        }
        dVar4 = **(double **)((longlong)this + 0x38);
        dVar5 = **(double **)((longlong)this + 0x50);
        dVar36 = **(double **)((longlong)this + 0x40);
        dVar15 = (auVar8._0_8_ - dVar4) * dVar5;
        dVar37 = **(double **)((longlong)this + 0x48);
        dVar35 = (dVar35 - dVar36) * dVar5;
        dVar32 = (dVar32 - dVar36) * dVar5;
        iVar29 = **(int **)((longlong)this + 0x20) + -1;
        dVar16 = (dVar16 - dVar36) * dVar5;
        dVar2 = (dVar2 - dVar37) * dVar5;
        dVar1 = (dVar1 - dVar37) * dVar5;
        dVar36 = dVar35;
        if (dVar16 <= dVar35) {
          dVar36 = dVar16;
        }
        dVar3 = (dVar3 - dVar37) * dVar5;
        if (dVar32 <= dVar36) {
          dVar36 = dVar32;
        }
        dVar37 = dVar35;
        if (dVar35 <= dVar16) {
          dVar37 = dVar16;
        }
        if (dVar37 <= dVar32) {
          dVar37 = dVar32;
        }
        iVar20 = -((int)ROUND(__real_bfe0000000000000 - (dVar36 + dVar36)) >> 1);
        iVar21 = iVar29;
        if (iVar20 < iVar29) {
          iVar21 = iVar20;
        }
        iVar20 = 0;
        if (0 < iVar21) {
          iVar20 = iVar21;
        }
        iVar21 = (int)ROUND((dVar37 + dVar37) - __real_3fe0000000000000) >> 1;
        dVar36 = dVar2;
        if (dVar1 <= dVar2) {
          dVar36 = dVar1;
        }
        if (iVar21 < iVar29) {
          iVar29 = iVar21;
        }
        if (dVar3 <= dVar36) {
          dVar36 = dVar3;
        }
        iVar21 = 0;
        if (0 < iVar29) {
          iVar21 = iVar29;
        }
        iVar29 = **(int **)((longlong)this + 0x28) + -1;
        dVar37 = dVar2;
        if (dVar2 <= dVar1) {
          dVar37 = dVar1;
        }
        if (dVar37 <= dVar3) {
          dVar37 = dVar3;
        }
        iVar22 = -((int)ROUND(__real_bfe0000000000000 - (dVar36 + dVar36)) >> 1);
        iVar31 = iVar29;
        if (iVar22 < iVar29) {
          iVar31 = iVar22;
        }
        iVar22 = (int)ROUND((dVar37 + dVar37) - __real_3fe0000000000000) >> 1;
        if (iVar22 < iVar29) {
          iVar29 = iVar22;
        }
        iVar22 = 0;
        if (0 < iVar29) {
          iVar22 = iVar29;
        }
        iVar29 = 0;
        if (0 < iVar31) {
          iVar29 = iVar31;
        }
        for (; iVar29 <= iVar22; iVar29 = iVar29 + 1) {
          if (iVar20 <= iVar21) {
            dVar33 = (double)iVar29;
            dVar36 = dVar1 - dVar33;
            dVar37 = dVar2 - dVar33;
            dVar33 = dVar3 - dVar33;
            iVar31 = iVar20;
            do {
              dVar34 = (double)iVar31;
              dVar38 = dVar32 - dVar34;
              dVar39 = dVar35 - dVar34;
              dVar34 = dVar16 - dVar34;
              dVar40 = dVar38 * dVar37 - dVar39 * dVar33;
              if (dVar40 <= 0.0) {
                if (dVar40 < 0.0) {
LAB_14c94ea07:
                  iVar30 = -1;
                  goto LAB_14c94ea0c;
                }
                if (dVar37 < dVar33) {
                  iVar30 = 1;
                  goto LAB_14c94ea0c;
                }
                if (dVar33 < dVar37) goto LAB_14c94ea07;
                if (dVar38 < dVar39) {
                  iVar30 = 1;
                  goto LAB_14c94ea0c;
                }
                if (dVar39 < dVar38) goto LAB_14c94ea07;
              }
              else {
                iVar30 = 1;
LAB_14c94ea0c:
                dVar14 = dVar34 * dVar33 - dVar36 * dVar38;
                if (dVar14 <= 0.0) {
                  if (0.0 <= dVar14) {
                    if (dVar36 <= dVar33) {
                      if (dVar33 <= dVar36) {
                        if (dVar38 <= dVar34) {
                          iVar23 = (dVar34 <= dVar38) - 1;
                        }
                        else {
                          iVar23 = 1;
                        }
                      }
                      else {
                        iVar23 = -1;
                      }
                    }
                    else {
                      iVar23 = 1;
                    }
                  }
                  else {
                    iVar23 = -1;
                  }
                }
                else {
                  iVar23 = 1;
                }
                if (iVar23 == iVar30) {
                  dVar38 = dVar36 * dVar39 - dVar34 * dVar37;
                  if (dVar38 <= 0.0) {
                    if (0.0 <= dVar38) {
                      if (dVar37 <= dVar36) {
                        if (dVar36 <= dVar37) {
                          if (dVar34 <= dVar39) {
                            iVar23 = (dVar39 <= dVar34) - 1;
                          }
                          else {
                            iVar23 = 1;
                          }
                        }
                        else {
                          iVar23 = -1;
                        }
                      }
                      else {
                        iVar23 = 1;
                      }
                    }
                    else {
                      iVar23 = -1;
                    }
                  }
                  else {
                    iVar23 = 1;
                  }
                  if (iVar23 == iVar30) {
                    dVar34 = dVar40 + dVar14 + dVar38;
                    if ((dVar34 == 0.0) &&
                       (bVar19 = ::FDebug::CheckVerifyFailedImpl2
                                           ("sum != 0",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\CachingMeshSDF.h"
                                            ,0x1da,
                                            L"TCachingMeshSDF::PointInTriangle2d: impossible config?"
                                           ), bVar19)) {
                      pcVar11 = (code *)swi(3);
                      (*pcVar11)();
                      return;
                    }
                    dVar34 = __real_3ff0000000000000 / dVar34;
                    dVar40 = dVar34 * dVar14 * (auVar7._0_8_ - dVar4) * dVar5 +
                             dVar34 * dVar40 * (auVar6._0_8_ - dVar4) * dVar5;
                    iVar30 = -((int)ROUND(__real_bfe0000000000000 -
                                          ((dVar15 + dVar15) * dVar34 * dVar38 + dVar40 + dVar40))
                              >> 1);
                    if (iVar30 < 0) {
                      iVar30 = 0;
                    }
                    else if (**(int **)((longlong)this + 0x18) <= iVar30) goto LAB_14c94eb8e;
                    piVar25 = UE::Geometry::TDenseGrid3<int>::At
                                        (*(TDenseGrid3<int> **)((longlong)this + 0x30),iVar30,iVar31
                                         ,iVar29);
                    if (bVar17) {
                      LOCK();
                      *piVar25 = *piVar25 + -1;
                      UNLOCK();
                    }
                    else {
                      LOCK();
                      *piVar25 = *piVar25 + 1;
                      UNLOCK();
                    }
                  }
                }
              }
LAB_14c94eb8e:
              iVar31 = iVar31 + 1;
            } while (iVar31 <= iVar21);
          }
        }
      }
    }
  }
  return;
}

// operator() @ 14c950680

void __thiscall
`UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::compute_signs'::__l5::<lambda_1>::
operator()(void *this,int param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  
  lVar1 = *(longlong *)this;
  UE::Core::Private::Function::CheckCallable(*(void **)(lVar1 + 0x50));
  pcVar2 = *(code **)(lVar1 + 0x50);
  plVar9 = (longlong *)(lVar1 + 0x60);
  if (*(longlong **)(lVar1 + 0x78) != (longlong *)0x0) {
    plVar9 = *(longlong **)(lVar1 + 0x78);
  }
  uVar8 = (**(code **)(*plVar9 + 8))();
  cVar5 = (*pcVar2)(uVar8);
  uVar4 = __xmm_80000000800000008000000080000000;
  if (cVar5 == '\0') {
    uVar11 = 0;
    iVar10 = 0;
    iVar14 = param_1 / **(int **)((longlong)this + 0x10);
    iVar15 = param_1 % **(int **)((longlong)this + 0x10);
    if (0 < **(int **)((longlong)this + 8)) {
      do {
        plVar9 = *(longlong **)((longlong)this + 0x28);
        uVar12 = (iVar14 * *(int *)((longlong)plVar9 + 0x14) + iVar15) * (int)plVar9[2] + iVar10;
        uVar7 = 0;
        if ((int)uVar12 < (int)plVar9[1]) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if ((uVar7 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        uVar11 = uVar11 + *(int *)(*plVar9 + (longlong)(int)uVar12 * 4);
        if (*(int *)(*(longlong *)this + 0x3c) == 1) {
          if (0 < (int)uVar11) {
LAB_14c9507ab:
            plVar9 = *(longlong **)((longlong)this + 0x20);
            uVar12 = (iVar14 * *(int *)((longlong)plVar9 + 0x14) + iVar15) * (int)plVar9[2] + iVar10
            ;
            uVar7 = 0;
            if ((int)uVar12 < (int)plVar9[1]) {
              uVar7 = ~uVar12 >> 0x1f;
            }
            if ((uVar7 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            plVar3 = *(longlong **)((longlong)this + 0x20);
            uVar7 = *(uint *)(*plVar9 + (longlong)(int)uVar12 * 4);
            uVar13 = (iVar14 * *(int *)((longlong)plVar3 + 0x14) + iVar15) * (int)plVar3[2] + iVar10
            ;
            uVar12 = 0;
            if ((int)uVar13 < (int)plVar3[1]) {
              uVar12 = ~uVar13 >> 0x1f;
            }
            if ((uVar12 == 0) &&
               (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar6)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            *(uint *)(*plVar3 + (longlong)(int)uVar13 * 4) = uVar7 ^ uVar4;
          }
        }
        else if (*(int *)(*(longlong *)this + 0x3c) == 0) {
          uVar7 = uVar11 & 0x80000001;
          if ((int)uVar7 < 0) {
            uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
          }
          if (uVar7 == 1) goto LAB_14c9507ab;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < **(int **)((longlong)this + 8));
    }
  }
  return;
}

// GetValue @ 14c980af0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

float __thiscall
UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::GetValue
          (TCachingMeshSDF<UE::Geometry::FDynamicMesh3> *this,FVector3i *param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  uint uVar7;
  float fVar8;
  undefined1 auVar9 [16];
  float fVar10;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  ulonglong local_d8 [2];
  undefined8 local_c8;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_98 [2];
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_108;
  local_d8[0] = *(ulonglong *)&param_1->field0_0x0;
  iVar4 = (this->Grid).Buffer.ArrayNum;
  uVar7 = ((param_1->field0_0x0)._s_0.Z * (this->Grid).Dimensions.field0_0x0._s_0.Y +
          (int)(local_d8[0] >> 0x20)) * (this->Grid).Dimensions.field0_0x0._s_0.X + (int)local_d8[0]
  ;
  uVar5 = 0;
  if ((int)uVar7 < iVar4) {
    uVar5 = ~uVar7 >> 0x1f;
  }
  if (uVar5 == 0) {
    local_e8 = (longlong)(int)uVar7;
    local_e0 = (longlong)iVar4;
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("(Index >= 0) & (Index < ArrayNum)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar8 = (float)(*pcVar2)();
      return fVar8;
    }
  }
  fVar8 = *(float *)((this->Grid).Buffer.AllocatorInstance.Data + (longlong)(int)uVar7 * 4);
  if ((fVar8 == this->UpperBoundDistance) ||
     (fVar8 == (float)((uint)this->UpperBoundDistance ^ __xmm_80000000800000008000000080000000))) {
    fVar10 = this->CellSize;
    local_b8 = (double)((float)(param_1->field0_0x0)._s_0.X * fVar10 +
                       (this->GridOrigin).field0_0x0._s_0.X);
    local_b0 = (double)((float)(param_1->field0_0x0)._s_0.Y * fVar10 +
                       (this->GridOrigin).field0_0x0._s_0.Y);
    local_a8 = (double)((float)(param_1->field0_0x0)._s_0.Z * fVar10 +
                       (this->GridOrigin).field0_0x0._s_0.Z);
    fVar10 = __real_3f800000;
    if ((fVar8 <= 0.0) && (fVar10 = 0.0, fVar8 < 0.0)) {
      fVar10 = __real_bf800000;
    }
    local_98[0] = this->MaxDistQueryDist;
    local_88 = 0;
    local_60 = (longlong *)0x0;
    local_58 = 0;
    iVar4 = (**(code **)(this->Spatial->_padding_ + 0x20))
                      (this->Spatial,&local_b8,local_d8,local_98);
    if (local_88 != 0) {
      plVar6 = local_78;
      if (local_60 != (longlong *)0x0) {
        plVar6 = local_60;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (iVar4 == -1) {
      fVar8 = fVar8 + __real_38d1b717;
    }
    else {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = local_d8[0];
      auVar9 = sqrtpd(auVar9,auVar9);
      fVar8 = (float)auVar9._0_8_ * fVar10;
    }
    local_c8 = *(undefined8 *)&param_1->field0_0x0;
    iVar1 = (this->Grid).Buffer.ArrayNum;
    local_e0 = (longlong)iVar1;
    uVar7 = ((param_1->field0_0x0)._s_0.Z * (this->Grid).Dimensions.field0_0x0._s_0.Y +
            (int)((ulonglong)local_c8 >> 0x20)) * (this->Grid).Dimensions.field0_0x0._s_0.X +
            (int)local_c8;
    uVar5 = 0;
    if ((int)uVar7 < iVar1) {
      uVar5 = ~uVar7 >> 0x1f;
    }
    if (uVar5 == 0) {
      local_e8 = (longlong)(int)uVar7;
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar8 = (float)(*pcVar2)();
        return fVar8;
      }
    }
    *(float *)((this->Grid).Buffer.AllocatorInstance.Data + (longlong)(int)uVar7 * 4) = fVar8;
    if (this->bWantClosestTriGrid != false) {
      local_c8 = *(undefined8 *)&param_1->field0_0x0;
      iVar1 = (this->ClosestTriGrid).Buffer.ArrayNum;
      local_e0 = (longlong)iVar1;
      uVar7 = ((param_1->field0_0x0)._s_0.Z * (this->ClosestTriGrid).Dimensions.field0_0x0._s_0.Y +
              (int)((ulonglong)local_c8 >> 0x20)) *
              (this->ClosestTriGrid).Dimensions.field0_0x0._s_0.X + (int)local_c8;
      uVar5 = 0;
      if ((int)uVar7 < iVar1) {
        uVar5 = ~uVar7 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_e8 = (longlong)(int)uVar7;
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          fVar8 = (float)(*pcVar2)();
          return fVar8;
        }
      }
      *(int *)((this->ClosestTriGrid).Buffer.AllocatorInstance.Data + (longlong)(int)uVar7 * 4) =
           iVar4;
    }
  }
  return fVar8;
}

// Initialize @ 14c980f70

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

void __thiscall
UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::Initialize
          (TCachingMeshSDF<UE::Geometry::FDynamicMesh3> *this)

{
  TDenseGrid3<float> *pTVar1;
  TDenseGrid3<int> *pTVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TMeshAABBTree3<UE::Geometry::FDynamicMesh3> *pTVar7;
  longlong lVar8;
  longlong lVar9;
  FScriptContainerElement *pFVar10;
  longlong *plVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
  bool bVar14;
  char cVar15;
  int iVar16;
  uint uVar17;
  char *pcVar18;
  undefined8 uVar19;
  atomic<unsigned_char> *paVar20;
  longlong *plVar21;
  int iVar22;
  ulonglong uVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  int iVar27;
  float fVar28;
  float fVar29;
  double dVar30;
  double dVar31;
  float fVar32;
  double dVar33;
  double dVar34;
  float fVar35;
  double dVar36;
  TDenseGrid3<int> *local_res8;
  undefined1 local_res10 [8];
  float local_res18 [2];
  int local_res20 [2];
  TDenseGrid3<float> local_1a8;
  int local_188 [2];
  int local_180 [2];
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  undefined8 local_158;
  float local_150;
  TArrayView<std::nullptr_t,int> local_148;
  code *local_138;
  TCachingMeshSDF<UE::Geometry::FDynamicMesh3> **local_130;
  TCachingMeshSDF<UE::Geometry::FDynamicMesh3> *local_128;
  undefined8 *local_120;
  float *local_118;
  int *local_110;
  int *local_108;
  int *local_100;
  TDenseGrid3<int> *local_f8;
  double *local_f0;
  double *local_e8;
  double *local_e0;
  double *local_d8;
  undefined1 *local_d0;
  
  pTVar7 = this->Spatial;
  uVar17 = pTVar7->RootIndex;
  if ((int)uVar17 < 0) {
    bVar14 = Assert::Private::ExecCheckImplInternal
                       (&bGEnsureHasExecuted<2828200105734045879>,false,
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                        ,0xb7,"RootIndex >= 0");
    if (bVar14) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
  else {
    uVar23 = (ulonglong)(uVar17 & 0x1ff);
    lVar8 = *(longlong *)
             ((pTVar7->BoxCenters).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8);
    dVar3 = *(double *)(lVar8 + uVar23 * 0x18);
    lVar9 = *(longlong *)
             ((pTVar7->BoxExtents).Blocks.AllocatorInstance.Data + (ulonglong)(uVar17 >> 9) * 8);
    dVar4 = *(double *)(lVar8 + 8 + uVar23 * 0x18);
    dVar36 = *(double *)(lVar8 + 0x10 + uVar23 * 0x18);
    dVar34 = dVar3 + *(double *)(lVar9 + uVar23 * 0x18);
    dVar3 = dVar3 - *(double *)(lVar9 + uVar23 * 0x18);
    dVar33 = dVar4 + *(double *)(lVar9 + 8 + uVar23 * 0x18);
    dVar4 = dVar4 - *(double *)(lVar9 + 8 + uVar23 * 0x18);
    dVar30 = dVar36 + *(double *)(lVar9 + 0x10 + uVar23 * 0x18);
    dVar36 = dVar36 - *(double *)(lVar9 + 0x10 + uVar23 * 0x18);
    if (((dVar3 <= dVar34) && (dVar4 <= dVar33)) && (dVar36 <= dVar30)) {
      dVar30 = dVar30 - dVar36;
      dVar36 = 0.0;
      dVar33 = dVar33 - dVar4;
      dVar34 = dVar34 - dVar3;
      if (dVar30 <= 0.0) {
        dVar30 = dVar36;
      }
      if (dVar33 <= 0.0) {
        dVar33 = dVar36;
      }
      if (dVar34 <= 0.0) {
        dVar34 = dVar36;
      }
      if (dVar30 <= dVar33) {
        dVar30 = dVar33;
      }
      if (dVar30 <= dVar34) {
        dVar30 = dVar34;
      }
      iVar16 = _finite(dVar30);
      if (((iVar16 != 0) && (0.0 < this->CellSize)) &&
         ((iVar16 = _finite((double)this->CellSize), iVar16 != 0 &&
          (4 < this->ApproxMaxCellsPerDimension)))) {
        pTVar7 = this->Spatial;
        uVar17 = pTVar7->RootIndex;
        if ((int)uVar17 < 0) {
          bVar14 = Assert::Private::ExecCheckImplInternal
                             (&bGEnsureHasExecuted<2828200105734045879>,false,
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\MeshAABBTree3.h"
                              ,0xb7,"RootIndex >= 0");
          dVar33 = __real_ffefffffffffffff;
          dVar3 = __real_7fefffffffffffff;
          dVar34 = __real_ffefffffffffffff;
          dVar4 = __real_7fefffffffffffff;
          dVar30 = __real_ffefffffffffffff;
          dVar36 = __real_7fefffffffffffff;
          if (bVar14) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
        }
        else {
          uVar23 = (ulonglong)(uVar17 & 0x1ff);
          lVar8 = *(longlong *)
                   ((pTVar7->BoxCenters).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar17 >> 9) * 8);
          dVar3 = *(double *)(lVar8 + uVar23 * 0x18);
          lVar9 = *(longlong *)
                   ((pTVar7->BoxExtents).Blocks.AllocatorInstance.Data +
                   (ulonglong)(uVar17 >> 9) * 8);
          dVar4 = *(double *)(lVar8 + 8 + uVar23 * 0x18);
          dVar36 = *(double *)(lVar8 + 0x10 + uVar23 * 0x18);
          dVar33 = dVar3 + *(double *)(lVar9 + uVar23 * 0x18);
          dVar3 = dVar3 - *(double *)(lVar9 + uVar23 * 0x18);
          dVar34 = dVar4 + *(double *)(lVar9 + 8 + uVar23 * 0x18);
          dVar4 = dVar4 - *(double *)(lVar9 + 8 + uVar23 * 0x18);
          dVar30 = dVar36 + *(double *)(lVar9 + 0x10 + uVar23 * 0x18);
          dVar36 = dVar36 - *(double *)(lVar9 + 0x10 + uVar23 * 0x18);
        }
        dVar5 = (this->ExpandBounds).field0_0x0._s_0.Y;
        dVar31 = (this->ExpandBounds).field0_0x0._s_0.X;
        dVar6 = (this->ExpandBounds).field0_0x0._s_0.Z;
        dVar5 = (dVar34 - dVar4) + dVar5 + dVar5;
        dVar31 = (dVar33 - dVar3) + dVar31 + dVar31;
        if (dVar5 <= dVar31) {
          dVar5 = dVar31;
        }
        dVar31 = (dVar30 - dVar36) + dVar6 + dVar6;
        if (dVar5 <= dVar31) {
          dVar5 = dVar31;
        }
        dVar5 = dVar5 + (double)this->MaxOffsetDistance * __real_4010000000000000;
        if (dVar5 / (double)this->CellSize <= (double)(this->ApproxMaxCellsPerDimension + -4)) {
LAB_14c9812bf:
          fVar32 = this->CellSize;
          fVar35 = this->MaxOffsetDistance + this->MaxOffsetDistance + fVar32 + fVar32;
          if (fVar35 <= fVar32 * __real_40800000) {
            fVar35 = fVar32 * __real_40800000;
          }
          dVar5 = (this->ExpandBounds).field0_0x0._s_0.Y;
          fVar28 = fVar35 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y;
          fVar29 = fVar35 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z;
          dVar31 = (this->ExpandBounds).field0_0x0._s_0.Z;
          (this->GridOrigin).field0_0x0._s_0.X =
               ((float)dVar3 - fVar35 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X) -
               (float)(this->ExpandBounds).field0_0x0._s_0.X;
          (this->GridOrigin).field0_0x0._s_0.Y = ((float)dVar4 - fVar28) - (float)dVar5;
          (this->GridOrigin).field0_0x0._s_0.Z = ((float)dVar36 - fVar29) - (float)dVar31;
          fVar28 = __real_3f800000 / fVar32;
          iVar27 = (int)(((fVar35 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.X +
                           (float)dVar33 + (float)(this->ExpandBounds).field0_0x0._s_0.X) -
                         (this->GridOrigin).field0_0x0._s_0.X) * fVar28) + 1;
          iVar16 = (int)(((fVar35 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Y +
                           (float)dVar34 + (float)(this->ExpandBounds).field0_0x0._s_0.Y) -
                         (this->GridOrigin).field0_0x0._s_0.Y) * fVar28) + 1;
          iVar26 = (int)(((fVar35 * UE::Math::TVector<float>::OneVector.field0_0x0._s_0.Z +
                           (float)dVar30 + (float)(this->ExpandBounds).field0_0x0._s_0.Z) -
                         (this->GridOrigin).field0_0x0._s_0.Z) * fVar28) + 1;
          uVar23 = 0;
          local_1a8.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          fVar32 = (float)(iVar16 + iVar26 + iVar27) * fVar32;
          this->UpperBoundDistance = fVar32;
          local_1a8._8_16_ = ZEXT416(0);
          local_1a8.Dimensions.field0_0x0._s_0.Z = 0;
          if ((0x7ffffffe < (longlong)iVar26 * (longlong)iVar16 * (longlong)iVar27) &&
             (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                 ("(int64)DimX * (int64)DimY * (int64)DimZ < 2147483647",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Spatial\\DenseGrid3.h"
                                  ,0x3f,L""), bVar14)) {
            pcVar12 = (code *)swi(3);
            (*pcVar12)();
            return;
          }
          TArray<float,TSizedDefaultAllocator<32>_>::SetNumUninitialized
                    (&local_1a8.Buffer,iVar26 * iVar16 * iVar27,Default);
          iVar22 = local_1a8.Buffer.ArrayNum;
          local_1a8.Dimensions.field0_0x0._s_0.X = iVar27;
          local_1a8.Dimensions.field0_0x0._s_0.Y = iVar16;
          uVar25 = uVar23;
          local_1a8.Dimensions.field0_0x0._s_0.Z = iVar26;
          if (0 < iVar22) {
            do {
              uVar24 = (uint)uVar23;
              uVar17 = 0;
              if ((int)uVar24 < iVar22) {
                uVar17 = ~uVar24 >> 0x1f;
              }
              if ((uVar17 == 0) &&
                 (bVar14 = ::FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                 , bVar14)) {
                pcVar12 = (code *)swi(3);
                (*pcVar12)();
                return;
              }
              uVar23 = (ulonglong)(uVar24 + 1);
              *(float *)(local_1a8.Buffer.AllocatorInstance.Data + uVar25) = fVar32;
              uVar25 = uVar25 + 4;
              iVar22 = local_1a8.Buffer.ArrayNum;
            } while ((int)(uVar24 + 1) < local_1a8.Buffer.ArrayNum);
          }
          pTVar1 = &this->Grid;
          if (pTVar1 != &local_1a8) {
            pFVar10 = (pTVar1->Buffer).AllocatorInstance.Data;
            if (pFVar10 != (FScriptContainerElement *)0x0) {
              FMemory::Free(pFVar10);
              iVar22 = local_1a8.Buffer.ArrayNum;
            }
            (pTVar1->Buffer).AllocatorInstance.Data = local_1a8.Buffer.AllocatorInstance.Data;
            (this->Grid).Buffer.ArrayMax = local_1a8.Buffer.ArrayMax;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = local_1a8.Dimensions.field0_0x0._0_8_;
            local_1a8._8_16_ = auVar13 << 0x40;
            local_1a8.Buffer.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            (this->Grid).Buffer.ArrayNum = iVar22;
          }
          *(undefined8 *)&(this->Grid).Dimensions.field0_0x0 = local_1a8.Dimensions.field0_0x0._0_8_
          ;
          (this->Grid).Dimensions.field0_0x0._s_0.Z = local_1a8.Dimensions.field0_0x0._s_0.Z;
          if (local_1a8.Buffer.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1a8.Buffer.AllocatorInstance.Data);
          }
          this->MaxDistQueryDist =
               (double)(this->CellSize * __real_403504f3 + this->MaxOffsetDistance);
          if (this->bWantClosestTriGrid != false) {
            TDenseGrid3<int>::Resize(&this->ClosestTriGrid,iVar27,iVar16,iVar26,Default);
            TDenseGrid3<int>::Assign(&this->ClosestTriGrid,-1);
          }
          if (this->bComputeSigns != true) {
            return;
          }
          pTVar2 = &this->IntersectionsGrid;
          local_res8 = pTVar2;
          TDenseGrid3<int>::Resize(pTVar2,iVar27,iVar16,iVar26,Default);
          TDenseGrid3<int>::Assign(pTVar2,0);
          local_158 = *(undefined8 *)&(this->GridOrigin).field0_0x0;
          local_150 = (this->GridOrigin).field0_0x0._s_0.Z;
          local_res18[0] = this->CellSize;
          local_178 = (double)(float)local_158;
          local_res10[0] = 0;
          local_170 = (double)(float)((ulonglong)local_158 >> 0x20);
          local_138 = Core::Private::Function::
                      TFunctionRefCaller<`UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::compute_intersections'::__l2::<lambda_1>,void,int>
                      ::Call;
          local_130 = &local_128;
          local_148.DataPtr = (void **)0x0;
          local_120 = &local_158;
          local_118 = local_res18;
          local_110 = local_res20;
          local_108 = local_188;
          local_100 = local_180;
          local_f0 = &local_178;
          local_e8 = &local_170;
          local_e0 = &local_168;
          local_d8 = &local_160;
          local_d0 = local_res10;
          local_168 = (double)local_150;
          local_148.ArrayNum = 0;
          local_160 = __real_3ff0000000000000 / (double)local_res18[0];
          local_res20[0] = iVar27;
          local_188[0] = iVar16;
          local_180[0] = iVar26;
          local_128 = this;
          local_f8 = pTVar2;
          ParallelForImpl::
          ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                    (L"ParallelFor Task",
                     (this->Mesh->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                     (this->Mesh->TriangleRefCounts).RefCounts.CurBlockUsed,1,
                     (TFunctionRef<void___cdecl(int)> *)&local_138,local_res8._0_1_,
                     (uint)(this->bUseParallel == false),&local_148);
          Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
          plVar11 = *(longlong **)&(this->CancelF).field_0x28;
          pcVar12 = *(code **)&this->CancelF;
          plVar21 = (longlong *)&(this->CancelF).field_0x10;
          if (plVar11 != (longlong *)0x0) {
            plVar21 = plVar11;
          }
          uVar19 = (**(code **)(*plVar21 + 8))();
          cVar15 = (*pcVar12)(uVar19);
          if (cVar15 == '\0') {
            compute_signs(this,iVar27,iVar16,iVar26,pTVar1,&this->IntersectionsGrid);
            Core::Private::Function::
            TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>::
            operator()((TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,bool___cdecl(void)>
                        *)&this->CancelF);
            cVar15 = this->bWantIntersectionsGrid;
            pTVar2 = &this->IntersectionsGrid;
          }
          else {
            cVar15 = this->bWantIntersectionsGrid;
            pTVar2 = local_res8;
          }
          if (cVar15 != '\0') {
            return;
          }
          TDenseGrid3<int>::Resize(pTVar2,0,0,0,Default);
          return;
        }
        local_res8 = (TDenseGrid3<int> *)((ulonglong)local_res8 & 0xffffffffffffff00);
        bVar14 = `UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::Initialize'::__l6::
                 <lambda_1>::operator()(&local_res8);
        if (bVar14) goto LAB_14c9812bf;
        fVar32 = (float)(dVar5 / (double)(this->ApproxMaxCellsPerDimension + -4));
        this->CellSize = fVar32;
        if ((0.0 < fVar32) && (iVar16 = _finite((double)fVar32), iVar16 != 0)) goto LAB_14c9812bf;
        pcVar18 = "CellSize > 0 && FMath::IsFinite(CellSize)";
        iVar16 = 0x92;
        paVar20 = &bGEnsureHasExecuted<8493452244799193234>;
        goto LAB_14c98100d;
      }
    }
  }
  pcVar18 = "Validate()";
  iVar16 = 0x86;
  paVar20 = &bGEnsureHasExecuted<8493452244799193222>;
LAB_14c98100d:
  bVar14 = Assert::Private::ExecCheckImplInternal
                     (paVar20,false,
                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryCore\\Public\\Implicit\\CachingMeshSDF.h"
                      ,iVar16,pcVar18);
  if (!bVar14) {
    return;
  }
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

// compute_signs @ 14c988c50

void __thiscall
UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::compute_signs
          (TCachingMeshSDF<UE::Geometry::FDynamicMesh3> *this,int param_1,int param_2,int param_3,
          TDenseGrid3<float> *param_4,TDenseGrid3<int> *param_5)

{
  longlong *plVar1;
  code *pcVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  <lambda_1> local_res8;
  int local_res10 [2];
  int local_res18 [2];
  int local_res20 [2];
  int local_c8;
  TArrayView<std::nullptr_t,int> local_c0;
  code *local_b0;
  TCachingMeshSDF<UE::Geometry::FDynamicMesh3> **local_a8;
  TCachingMeshSDF<UE::Geometry::FDynamicMesh3> *local_a0;
  int *local_98;
  int *local_90;
  int *local_88;
  TDenseGrid3<float> *local_80;
  TDenseGrid3<int> *local_78;
  
  uVar3 = __xmm_80000000800000008000000080000000;
  uVar15 = 0;
  uVar16 = 0;
  local_res10[0] = param_1;
  local_res18[0] = param_2;
  local_res20[0] = param_3;
  if (this->bUseParallel != false) {
    local_98 = local_res10;
    local_90 = local_res18;
    local_88 = local_res20;
    local_c0.DataPtr = (void **)0x0;
    local_80 = param_4;
    local_78 = param_5;
    local_b0 = Core::Private::Function::
               TFunctionRefCaller<`UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::compute_signs'::__l5::<lambda_1>,void,int>
               ::Call;
    local_a8 = &local_a0;
    local_res8 = SUB81(this,0);
    local_c0.ArrayNum = 0;
    local_a0 = this;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",param_2 * param_3,1,(TFunctionRef<void___cdecl(int)> *)&local_b0,
               local_res8,None,&local_c0);
    return;
  }
  local_c8 = 0;
  if (0 < param_3) {
    do {
      Core::Private::Function::CheckCallable(*(void **)&this->CancelF);
      plVar1 = *(longlong **)&(this->CancelF).field_0x28;
      pcVar2 = *(code **)&this->CancelF;
      plVar9 = (longlong *)&(this->CancelF).field_0x10;
      if (plVar1 != (longlong *)0x0) {
        plVar9 = plVar1;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      cVar4 = (*pcVar2)(uVar8);
      if (cVar4 != '\0') {
        return;
      }
      iVar6 = local_res18[0];
      uVar14 = uVar15;
      if (0 < local_res18[0]) {
        do {
          uVar12 = uVar15;
          uVar13 = uVar15;
          if (0 < local_res10[0]) {
            do {
              uVar10 = (local_c8 * (param_5->Dimensions).field0_0x0._s_0.Y + uVar14) *
                       (param_5->Dimensions).field0_0x0._s_0.X + uVar13;
              uVar7 = uVar16;
              if ((int)uVar10 < (param_5->Buffer).ArrayNum) {
                uVar7 = ~uVar10 >> 0x1f;
              }
              if ((uVar7 == 0) &&
                 (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                    ("(Index >= 0) & (Index < ArrayNum)",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                     ,0x447,
                                     L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar5)) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
              uVar12 = uVar12 + *(int *)((param_5->Buffer).AllocatorInstance.Data +
                                        (longlong)(int)uVar10 * 4);
              if (this->InsideMode == WindingCount) {
                if (0 < (int)uVar12) {
LAB_14c988e63:
                  uVar10 = (local_c8 * (param_4->Dimensions).field0_0x0._s_0.Y + uVar14) *
                           (param_4->Dimensions).field0_0x0._s_0.X + uVar13;
                  uVar7 = uVar16;
                  if ((int)uVar10 < (param_4->Buffer).ArrayNum) {
                    uVar7 = ~uVar10 >> 0x1f;
                  }
                  if ((uVar7 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  uVar7 = *(uint *)((param_4->Buffer).AllocatorInstance.Data +
                                   (longlong)(int)uVar10 * 4);
                  uVar11 = (local_c8 * (param_4->Dimensions).field0_0x0._s_0.Y + uVar14) *
                           (param_4->Dimensions).field0_0x0._s_0.X + uVar13;
                  uVar10 = uVar16;
                  if ((int)uVar11 < (param_4->Buffer).ArrayNum) {
                    uVar10 = ~uVar11 >> 0x1f;
                  }
                  if ((uVar10 == 0) &&
                     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                        ("(Index >= 0) & (Index < ArrayNum)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x447,
                                         L"Array index out of bounds: %lld into an array of size %lld"
                                        ), bVar5)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  *(uint *)((param_4->Buffer).AllocatorInstance.Data + (longlong)(int)uVar11 * 4) =
                       uVar7 ^ uVar3;
                }
              }
              else if (this->InsideMode == CrossingCount) {
                uVar7 = uVar12 & 0x80000001;
                if ((int)uVar7 < 0) {
                  uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
                }
                if (uVar7 == 1) goto LAB_14c988e63;
              }
              uVar13 = uVar13 + 1;
              iVar6 = local_res18[0];
            } while ((int)uVar13 < local_res10[0]);
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < iVar6);
      }
      local_c8 = local_c8 + 1;
    } while (local_c8 < local_res20[0]);
  }
  return;
}

// operator() @ 150574ef0

bool __thiscall
`UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::Initialize'::__l6::<lambda_1>::
operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<8493452244799193231>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<8493452244799193231>,
                       &`public:___cdecl_`public:_void___cdecl_UE::Geometry::TCachingMeshSDF<UE::Geometry::FDynamicMesh3>::Initialize(void)___ptr64'::`6'::<lambda_1>::operator()(void)const___ptr64'
                        ::__l2::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

