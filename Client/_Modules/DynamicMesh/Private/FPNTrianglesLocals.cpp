// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DynamicMesh
// Functions: 7

// operator() @ 14c7bcac0

void __thiscall
`FPNTrianglesLocals::DisplaceAndSetQuadraticNormals'::__l2::<lambda_1>::operator()
          (void *this,int param_1)

{
  atomic<unsigned_char> *this_00;
  TVector<double> *pTVar1;
  TVector<double> *pTVar2;
  FMutex FVar3;
  atomic<unsigned_char> aVar4;
  double dVar5;
  int iVar6;
  char *pcVar7;
  code *pcVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  char cVar15;
  bool bVar16;
  short sVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  int iVar21;
  longlong *plVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  int iVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  longlong lVar31;
  uint uVar32;
  float fVar33;
  float fVar35;
  double dVar34;
  float fVar36;
  float fVar37;
  float fVar38;
  double dVar39;
  undefined1 auVar40 [16];
  float fVar41;
  float fVar42;
  double dVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  undefined8 local_138;
  uint local_130;
  TVector<double>_u_0 local_128;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  uint local_f8;
  double local_f0 [3];
  uint *local_d8;
  longlong local_d0;
  undefined8 local_c8;
  float local_c0;
  ulonglong local_bc;
  float local_b4;
  ulonglong local_b0;
  
  pcVar7 = (char *)**(undefined8 **)this;
  if (pcVar7 != (char *)0x0) {
    if (*pcVar7 != '\0') {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)(pcVar7 + 0x70));
    pcVar8 = *(code **)(pcVar7 + 0x70);
    plVar22 = (longlong *)(pcVar7 + 0x80);
    if (*(longlong **)(pcVar7 + 0x98) != (longlong *)0x0) {
      plVar22 = *(longlong **)(pcVar7 + 0x98);
    }
    uVar18 = (**(code **)(*plVar22 + 8))();
    cVar15 = (*pcVar8)(uVar18);
    *pcVar7 = cVar15;
    if (cVar15 != '\0') {
      return;
    }
  }
  plVar22 = *(longlong **)((longlong)this + 8);
  uVar23 = 0;
  if (param_1 < (int)plVar22[1]) {
    uVar23 = (uint)~param_1 >> 0x1f;
  }
  if ((uVar23 == 0) &&
     (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar16)) {
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  lVar27 = *(longlong *)((longlong)this + 0x10);
  lVar26 = *(longlong *)(lVar27 + 0x10);
  uVar20 = *(ulonglong *)(*plVar22 + (longlong)param_1 * 8);
  local_b0 = uVar20 >> 0x20;
  uVar23 = (uint)(uVar20 >> 0x20);
  local_d0 = (longlong)(int)uVar23;
  uVar19 = (ulonglong)(uVar23 & 0x1ff);
  lVar31 = *(longlong *)(*(longlong *)(lVar27 + 0x130) + (uVar20 >> 0x29) * 8);
  uVar29 = (uVar20 & 0xffffffff) >> 9;
  uVar30 = (ulonglong)((uint)uVar20 & 0x1ff);
  local_138 = *(ulonglong *)(lVar31 + uVar19 * 0xc);
  lVar27 = *(longlong *)(*(longlong *)(lVar27 + 0x180) + (uVar20 >> 0x29) * 8);
  local_130 = *(uint *)(lVar31 + 8 + uVar19 * 0xc);
  local_100 = *(undefined8 *)(lVar27 + uVar19 * 0xc);
  local_f8 = *(uint *)(lVar27 + 8 + uVar19 * 0xc);
  pTVar1 = (TVector<double> *)
           (*(longlong *)(lVar26 + (ulonglong)(local_130 >> 9) * 8) +
           (ulonglong)(local_130 & 0x1ff) * 0x18);
  pTVar2 = (TVector<double> *)
           (*(longlong *)(lVar26 + ((local_138 & 0xffffffff) >> 9) * 8) +
           (ulonglong)((uint)local_138 & 0x1ff) * 0x18);
  UE::Geometry::VectorUtil::BarycentricCoords<double>
            ((TVector<double> *)&local_128._s_0,
             (TVector<double> *)
             (*(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x10) + uVar29 * 8)
             + uVar30 * 0x18),pTVar2,
             (TVector<double> *)
             (*(longlong *)(lVar26 + (local_138 >> 0x29) * 8) +
             (ulonglong)((uint)(local_138 >> 0x20) & 0x1ff) * 0x18),pTVar1);
  dVar34 = __real_4008000000000000;
  uVar20 = (ulonglong)(local_138._4_4_ & 0x1ff);
  lVar27 = *(longlong *)(lVar26 + (ulonglong)(local_138._4_4_ >> 9) * 8);
  local_f0[0] = local_128._s_0.X * local_128._s_0.X;
  local_f0[1] = local_128._s_0.Y * local_128._s_0.Y;
  dVar43 = local_128._s_0.X * local_128._s_0.X * local_128._s_0.X;
  local_f0[2] = local_128._s_0.Z * local_128._s_0.Z;
  dVar12 = local_128._s_0.Y * local_128._s_0.Y * local_128._s_0.Y;
  dVar39 = local_128._s_0.Z * local_128._s_0.Z * local_128._s_0.Z;
  local_d8 = (uint *)&local_100;
  dVar13 = dVar12 * *(double *)(lVar27 + uVar20 * 0x18) + dVar43 * (pTVar2->field0_0x0)._s_0.X +
           dVar39 * (pTVar1->field0_0x0)._s_0.X;
  dVar14 = dVar12 * *(double *)(lVar27 + 8 + uVar20 * 0x18) + dVar43 * (pTVar2->field0_0x0)._s_0.Y +
           dVar39 * (pTVar1->field0_0x0)._s_0.Y;
  dVar12 = dVar12 * *(double *)(lVar27 + 0x10 + uVar20 * 0x18) +
           dVar43 * (pTVar2->field0_0x0)._s_0.Z + dVar39 * (pTVar1->field0_0x0)._s_0.Z;
  uVar23 = 0;
  do {
    lVar27 = 0;
    uVar32 = *local_d8;
    plVar22 = *(longlong **)((longlong)this + 0x20);
    uVar18 = *(undefined8 *)
              (*(longlong *)
                (*(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x1c0) +
                (ulonglong)(uVar32 >> 9) * 8) + (ulonglong)(uVar32 & 0x1ff) * 0x10);
    uVar25 = 0;
    if ((int)uVar32 < (int)plVar22[1]) {
      uVar25 = ~uVar32 >> 0x1f;
    }
    if ((uVar25 == 0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar26 = *plVar22;
    lVar31 = (longlong)(int)uVar32 * 0x60;
    iVar28 = 1;
    do {
      iVar21 = *(int *)((longlong)&local_138 + lVar27 * 4);
      iVar6 = *(int *)((longlong)&local_138 +
                      (longlong)
                      (iVar28 + (iVar28 / 3 + (iVar28 >> 0x1f) +
                                (int)(((longlong)iVar28 / 3 + ((longlong)iVar28 >> 0x3f) &
                                      0xffffffffU) >> 0x1f)) * -3) * 4);
      iVar24 = (int)uVar18;
      if (((iVar24 == iVar21) || (bVar16 = iVar24 == iVar6, iVar6 = iVar21, bVar16)) &&
         ((int)((ulonglong)uVar18 >> 0x20) == iVar6)) break;
      iVar28 = iVar28 + 1;
      lVar27 = lVar27 + 1;
      iVar21 = iVar24;
    } while (lVar27 < 3);
    uVar32 = uVar23 + 1;
    if (iVar24 == iVar21) {
      uVar25 = uVar32 + ((int)uVar32 / 3 + ((int)uVar32 >> 0x1f) +
                        (int)(((longlong)(int)uVar32 / 3 + ((longlong)(int)uVar32 >> 0x3f) &
                              0xffffffffU) >> 0x1f)) * -3;
    }
    else {
      uVar25 = uVar23;
      uVar23 = uVar32 + ((int)uVar32 / 3 + ((int)uVar32 >> 0x1f) +
                        (int)(((longlong)(int)uVar32 / 3 + ((longlong)(int)uVar32 >> 0x3f) &
                              0xffffffffU) >> 0x1f)) * -3;
    }
    if ((2 < uVar23) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((2 < uVar25) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    dVar11 = local_f0[(int)uVar23] * dVar34 *
             *(double *)((longlong)&local_128 + (longlong)(int)uVar25 * 8);
    dVar39 = *(double *)(lVar31 + lVar26);
    dVar43 = *(double *)(lVar31 + 8 + lVar26);
    dVar5 = *(double *)(lVar31 + 0x10 + lVar26);
    if ((2 < uVar25) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    if ((2 < uVar23) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValidIndex(Index)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Math\\Vector.h"
                            ,0x7a2,L""), bVar16)) {
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
    lVar27 = local_d0;
    local_d8 = local_d8 + 1;
    dVar10 = local_f0[(int)uVar25] * dVar34 *
             *(double *)((longlong)&local_128 + (longlong)(int)uVar23 * 8);
    dVar13 = dVar13 + dVar10 * *(double *)(lVar31 + 0x18 + lVar26) + dVar11 * dVar39;
    dVar14 = dVar14 + dVar10 * *(double *)(lVar31 + 0x20 + lVar26) + dVar11 * dVar43;
    dVar12 = dVar12 + dVar10 * *(double *)(lVar31 + 0x28 + lVar26) + dVar11 * dVar5;
    uVar23 = uVar32;
    if (2 < (int)uVar32) {
      lVar26 = *(longlong *)((longlong)this + 0x20);
      uVar23 = 0;
      if ((int)(uint)local_b0 < *(int *)(lVar26 + 0x18)) {
        uVar23 = ~(uint)local_b0 >> 0x1f;
      }
      if ((uVar23 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      lVar26 = *(longlong *)(lVar26 + 0x10);
      lVar31 = *(longlong *)((longlong)this + 0x18);
      dVar5 = local_128._s_0.X * __real_4018000000000000 * local_128._s_0.Y * local_128._s_0.Z;
      dVar34 = *(double *)(lVar26 + lVar27 * 0x18);
      dVar39 = *(double *)(lVar26 + 8 + lVar27 * 0x18);
      dVar43 = *(double *)(lVar26 + 0x10 + lVar27 * 0x18);
      sVar17 = _dclass();
      if (((sVar17 < 1) && (sVar17 = _dclass(), sVar17 < 1)) && (sVar17 = _dclass(), sVar17 < 1)) {
        lVar27 = *(longlong *)(*(longlong *)(lVar31 + 0x10) + uVar29 * 8);
        *(double *)(lVar27 + uVar30 * 0x18) = dVar5 * dVar34 + dVar13;
        *(double *)(lVar27 + 8 + uVar30 * 0x18) = dVar5 * dVar39 + dVar14;
        *(double *)(lVar27 + 0x10 + uVar30 * 0x18) = dVar5 * dVar43 + dVar12;
        if (*(char *)(lVar31 + 0x21c) != '\0') {
          this_00 = (atomic<unsigned_char> *)(lVar31 + 0x21d);
          LOCK();
          FVar3.State = *this_00;
          if (FVar3.State == (atomic<unsigned_char>)0x0) {
            *this_00 = (atomic<unsigned_char>)0x1;
          }
          UNLOCK();
          if (FVar3.State != (atomic<unsigned_char>)0x0) {
            UE::FMutex::LockSlow((FMutex *)this_00);
          }
          *(int *)(lVar31 + 0x220) = *(int *)(lVar31 + 0x220) + 1;
          LOCK();
          aVar4 = *this_00;
          *this_00 = (atomic<unsigned_char>)((char)*this_00 + -1);
          UNLOCK();
          if (((byte)aVar4 & 2) != 0) {
            UE::FMutex::WakeWaitingThread((FMutex *)this_00);
          }
        }
      }
      if ((**(char **)((longlong)this + 0x28) != '\0') &&
         (**(char **)((longlong)this + 0x30) != '\0')) {
        fVar44 = (float)local_f0[1];
        fVar41 = (float)local_f0[0];
        if (*(char *)(*(longlong *)((longlong)this + 0x10) + 0x70) == '\0') {
          local_110 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
          local_c8 = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
          fVar46 = fVar44 * (float)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_ +
                   fVar41 * (float)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
          fVar35 = (float)((ulonglong)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_ >> 0x20
                          );
          local_108 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
          local_c0 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
          local_b4 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
          fVar37 = fVar35;
          local_bc = UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
        }
        else {
          lVar27 = *(longlong *)(*(longlong *)((longlong)this + 0x10) + 0x60);
          lVar26 = *(longlong *)(lVar27 + (ulonglong)((uint)local_138 >> 9) * 8);
          local_bc = *(ulonglong *)(lVar26 + (ulonglong)((uint)local_138 & 0x1ff) * 0xc);
          local_b4 = *(float *)(lVar26 + 8 + (ulonglong)((uint)local_138 & 0x1ff) * 0xc);
          lVar26 = *(longlong *)(lVar27 + (ulonglong)(local_138._4_4_ >> 9) * 8);
          local_c8 = *(undefined8 *)(lVar26 + (ulonglong)(local_138._4_4_ & 0x1ff) * 0xc);
          local_c0 = *(float *)(lVar26 + 8 + (ulonglong)(local_138._4_4_ & 0x1ff) * 0xc);
          lVar27 = *(longlong *)(lVar27 + (ulonglong)(local_130 >> 9) * 8);
          local_110 = *(undefined8 *)(lVar27 + (ulonglong)(local_130 & 0x1ff) * 0xc);
          local_108 = *(float *)(lVar27 + 8 + (ulonglong)(local_130 & 0x1ff) * 0xc);
          fVar46 = fVar44 * (float)local_c8 + fVar41 * (float)local_bc;
          fVar35 = (float)((ulonglong)local_c8 >> 0x20);
          fVar37 = (float)(local_bc >> 0x20);
        }
        auVar40._8_8_ = 0;
        auVar40._0_8_ = local_bc;
        lVar27 = (longlong)(int)(uint)local_100;
        plVar22 = *(longlong **)((longlong)this + 0x20);
        fVar38 = (float)local_f0[2];
        fVar45 = fVar44 * local_c0;
        fVar42 = fVar41 * local_b4;
        fVar33 = fVar38 * (float)local_110;
        fVar36 = fVar38 * local_110._4_4_;
        fVar38 = fVar38 * local_108;
        uVar23 = 0;
        if ((int)(uint)local_100 < (int)plVar22[1]) {
          uVar23 = ~(uint)local_100 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar26 = *plVar22;
        dVar34 = local_128._s_0.X * local_128._s_0.Y;
        lVar31 = (longlong)(int)local_100._4_4_;
        plVar22 = *(longlong **)((longlong)this + 0x20);
        lVar27 = lVar27 * 0x60;
        dVar12 = *(double *)(lVar27 + 0x30 + lVar26);
        dVar13 = *(double *)(lVar27 + 0x38 + lVar26);
        dVar14 = *(double *)(lVar27 + 0x40 + lVar26);
        uVar23 = 0;
        if ((int)local_100._4_4_ < (int)plVar22[1]) {
          uVar23 = ~local_100._4_4_ >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        lVar27 = *plVar22;
        dVar11 = local_128._s_0.Y * local_128._s_0.Z;
        lVar26 = (longlong)(int)local_f8;
        plVar22 = *(longlong **)((longlong)this + 0x20);
        lVar31 = lVar31 * 0x60;
        dVar39 = *(double *)(lVar31 + 0x30 + lVar27);
        dVar43 = *(double *)(lVar31 + 0x38 + lVar27);
        dVar5 = *(double *)(lVar31 + 0x40 + lVar27);
        uVar23 = 0;
        if ((int)local_f8 < (int)plVar22[1]) {
          uVar23 = ~local_f8 >> 0x1f;
        }
        if ((uVar23 == 0) &&
           (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar16)) {
          pcVar8 = (code *)swi(3);
          (*pcVar8)();
          return;
        }
        dVar10 = local_128._s_0.X * local_128._s_0.Z;
        lVar27 = *plVar22;
        lVar26 = lVar26 * 0x60;
        dVar14 = (double)(fVar38 + fVar45 + fVar42) + dVar34 * dVar14 + dVar11 * dVar5 +
                 dVar10 * *(double *)(lVar26 + 0x40 + lVar27);
        dVar12 = (double)(fVar33 + fVar46) + dVar34 * dVar12 + dVar11 * dVar39 +
                 dVar10 * *(double *)(lVar26 + 0x30 + lVar27);
        dVar13 = (double)(fVar36 + fVar44 * fVar35 + fVar41 * fVar37) + dVar34 * dVar13 +
                 dVar11 * dVar43 + dVar10 * *(double *)(lVar26 + 0x38 + lVar27);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = dVar13 * dVar13 + dVar12 * dVar12 + dVar14 * dVar14;
        auVar40 = sqrtpd(auVar40,auVar9);
        if (auVar40._0_8_ <= 0.0) {
          dVar14 = 0.0;
          dVar13 = 0.0;
          dVar12 = 0.0;
        }
        else {
          dVar34 = __real_3ff0000000000000 / auVar40._0_8_;
          dVar12 = dVar12 * dVar34;
          dVar13 = dVar13 * dVar34;
          dVar14 = dVar14 * dVar34;
        }
        if (*(char *)(*(longlong *)((longlong)this + 0x18) + 0x70) != '\0') {
          lVar27 = *(longlong *)
                    (*(longlong *)(*(longlong *)((longlong)this + 0x18) + 0x60) + uVar29 * 8);
          *(float *)(lVar27 + uVar30 * 0xc) = (float)dVar12;
          *(float *)(lVar27 + 4 + uVar30 * 0xc) = (float)dVar13;
          *(float *)(lVar27 + 8 + uVar30 * 0xc) = (float)dVar14;
        }
      }
      return;
    }
  } while( true );
}

// operator() @ 14c7cb700

TVector<float> * __thiscall
`FPNTrianglesLocals::ComputeControlPoints'::__l2::<lambda_2>::operator()
          (void *this,TVector<float> *__return_storage_ptr__,TVector<double> *param_1,
          TVector<double> *param_2,TVector<float> *param_3,TVector<float> *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar6 = __real_3f000000;
  dVar2 = (param_2->field0_0x0)._s_0.Z - (param_1->field0_0x0)._s_0.Z;
  fVar8 = (param_3->field0_0x0)._s_0.X + (param_4->field0_0x0)._s_0.X;
  fVar9 = (param_3->field0_0x0)._s_0.Y + (param_4->field0_0x0)._s_0.Y;
  fVar10 = (param_3->field0_0x0)._s_0.Z + (param_4->field0_0x0)._s_0.Z;
  dVar3 = (param_2->field0_0x0)._s_0.X - (param_1->field0_0x0)._s_0.X;
  dVar4 = (param_2->field0_0x0)._s_0.Y - (param_1->field0_0x0)._s_0.Y;
  dVar1 = dVar4 * dVar4 + dVar3 * dVar3 + dVar2 * dVar2;
  if (__real_3e45798ee2308c3a <
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff)) {
    dVar7 = (double)fVar8 * dVar3 + (double)fVar9 * dVar4;
    fVar6 = (float)(((dVar2 + dVar2) * (double)fVar10 + dVar7 + dVar7) / dVar1);
    fVar8 = fVar8 - (float)dVar3 * fVar6;
    fVar9 = fVar9 - (float)dVar4 * fVar6;
    fVar10 = fVar10 - (float)dVar2 * fVar6;
    fVar6 = 0.0;
    fVar5 = SQRT(fVar9 * fVar9 + fVar8 * fVar8 + fVar10 * fVar10);
    if (fVar5 <= 0.0) {
      fVar9 = 0.0;
      fVar5 = 0.0;
    }
    else {
      fVar5 = __real_3f800000 / fVar5;
      fVar6 = fVar5 * fVar8;
      fVar9 = fVar5 * fVar9;
      fVar5 = fVar5 * fVar10;
    }
    *(ulonglong *)&__return_storage_ptr__->field0_0x0 = CONCAT44(fVar9,fVar6);
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar5;
  }
  else {
    fVar9 = fVar9 * __real_3f000000;
    (__return_storage_ptr__->field0_0x0)._s_0.X = fVar8 * __real_3f000000;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = fVar9;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = fVar10 * fVar6;
  }
  return __return_storage_ptr__;
}

// operator() @ 14c7cf620

void __thiscall
`FPNTrianglesLocals::ComputeControlPoints'::__l2::<lambda_3>::operator()(void *this,int param_1)

{
  char *pcVar1;
  code *pcVar2;
  FDynamicMesh3 *this_00;
  longlong lVar3;
  FScriptContainerElement *pFVar4;
  undefined8 uVar5;
  FDynamicMeshAttributeSet *pFVar6;
  TDynamicMeshOverlay<float,3> *this_01;
  undefined1 auVar7 [16];
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  int iVar18;
  char cVar19;
  bool bVar20;
  double *pdVar21;
  TVector<double> *pTVar22;
  TVector<float> *pTVar23;
  longlong *plVar24;
  undefined1 (*pauVar25) [16];
  uint uVar26;
  ulonglong uVar27;
  TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *this_02;
  uint uVar28;
  uint uVar29;
  undefined4 uVar30;
  float fVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  float fVar38;
  uint uStackX_c;
  int iStackX_1c;
  float local_218;
  float fStack_214;
  undefined4 local_210;
  float local_208;
  float fStack_204;
  undefined4 local_200;
  TVector<double>_u_0 local_1f8;
  double local_1e0;
  float local_1d8;
  double local_1d0;
  float local_1c8;
  undefined8 local_1c0;
  float local_1b8;
  undefined8 local_1b0;
  float local_1a8;
  TVector<double>_u_0 local_1a0;
  double local_188;
  double local_180;
  double local_178;
  double local_170;
  double local_168;
  double local_160;
  double local_158;
  double local_140;
  double local_128;
  TVector<float> local_120;
  TVector<double> local_110;
  TVector<double> local_f8 [8];
  
  pcVar1 = (char *)**(undefined8 **)this;
  if (pcVar1 != (char *)0x0) {
    if (*pcVar1 != '\0') {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)(pcVar1 + 0x70));
    pcVar2 = *(code **)(pcVar1 + 0x70);
    plVar24 = (longlong *)(pcVar1 + 0x80);
    if (*(longlong **)(pcVar1 + 0x98) != (longlong *)0x0) {
      plVar24 = *(longlong **)(pcVar1 + 0x98);
    }
    (**(code **)(*plVar24 + 8))();
    cVar19 = (*pcVar2)();
    *pcVar1 = cVar19;
    if (cVar19 != '\0') {
      return;
    }
  }
  this_00 = *(FDynamicMesh3 **)((longlong)this + 8);
  if (((param_1 < 0) ||
      ((int)((this_00->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
            (this_00->EdgeRefCounts).RefCounts.CurBlockUsed) <= param_1)) ||
     (uVar27 = (ulonglong)((uint)param_1 >> 9),
     0xfffd < (ushort)(*(short *)(*(longlong *)
                                   ((this_00->EdgeRefCounts).RefCounts.Blocks.AllocatorInstance.Data
                                   + uVar27 * 8) + (ulonglong)(param_1 & 0x1ff) * 2) - 1U))) {
    bVar20 = false;
    uVar27 = (ulonglong)((uint)param_1 >> 9);
  }
  else {
    bVar20 = true;
  }
  if (bVar20) {
    this_02 = (TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)0x0;
    lVar3 = *(longlong *)((this_00->Edges).Blocks.AllocatorInstance.Data + uVar27 * 8);
    pFVar4 = (this_00->Vertices).Blocks.AllocatorInstance.Data;
    uVar27 = *(ulonglong *)(lVar3 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    uVar5 = *(undefined8 *)(lVar3 + 8 + (ulonglong)(param_1 & 0x1ff) * 0x10);
    uVar26 = (uint)uVar27;
    uStackX_c = (uint)(uVar27 >> 0x20);
    lVar3 = *(longlong *)(pFVar4 + ((uVar27 & 0xffffffff) >> 9) * 8);
    pdVar21 = (double *)(lVar3 + (ulonglong)(uVar26 & 0x1ff) * 0x18);
    local_1a0._s_0.Z = *(double *)(lVar3 + 0x10 + (ulonglong)(uVar26 & 0x1ff) * 0x18);
    local_1a0._s_0.X = *pdVar21;
    local_1a0._s_0.Y = pdVar21[1];
    lVar3 = *(longlong *)(pFVar4 + (uVar27 >> 0x29) * 8);
    pdVar21 = (double *)(lVar3 + (ulonglong)(uStackX_c & 0x1ff) * 0x18);
    local_1f8._s_0.X = *pdVar21;
    local_1f8._s_0.Y = pdVar21[1];
    local_1f8._s_0.Z = *(double *)(lVar3 + 0x10 + (ulonglong)(uStackX_c & 0x1ff) * 0x18);
    pFVar6 = (this_00->AttributeSet).Ptr;
    if (pFVar6 == (FDynamicMeshAttributeSet *)0x0) {
      if ((FMeshNormals *)**(undefined8 **)((longlong)this + 0x10) == (FMeshNormals *)0x0) {
        uVar30 = (undefined4)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
        uVar32 = (undefined4)
                 ((ulonglong)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_ >> 0x20);
        if ((this_00->VertexNormals).bIsSet == false) {
          local_1d0 = (double)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
          local_1c8 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
        }
        else {
          lVar3 = *(longlong *)
                   ((this_00->VertexNormals).TypedValue.Blocks.AllocatorInstance.Data +
                   ((uVar27 & 0xffffffff) >> 9) * 8);
          local_1d0 = *(double *)(lVar3 + (ulonglong)(uVar26 & 0x1ff) * 0xc);
          local_1c8 = *(float *)(lVar3 + 8 + (ulonglong)(uVar26 & 0x1ff) * 0xc);
        }
        pdVar21 = &local_1d0;
      }
      else {
        pTVar22 = UE::Geometry::FMeshNormals::operator[]
                            ((FMeshNormals *)**(undefined8 **)((longlong)this + 0x10),uVar26);
        pdVar21 = (double *)&local_1b0;
        local_1b0 = (double)CONCAT44((float)(pTVar22->field0_0x0)._s_0.Y,
                                     (float)(pTVar22->field0_0x0)._s_0.X);
        uVar30 = (undefined4)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_;
        uVar32 = (undefined4)
                 ((ulonglong)UE::Math::TVector<float>::YAxisVector.field0_0x0._0_8_ >> 0x20);
        local_1a8 = (float)(pTVar22->field0_0x0)._s_0.Z;
      }
      _local_208 = *pdVar21;
      local_200 = *(undefined4 *)(pdVar21 + 1);
      if ((FMeshNormals *)**(undefined8 **)((longlong)this + 0x10) == (FMeshNormals *)0x0) {
        if (*(char *)(*(longlong *)((longlong)this + 8) + 0x70) == '\0') {
          local_1e0 = (double)CONCAT44(uVar32,uVar30);
          local_1d8 = UE::Math::TVector<float>::YAxisVector.field0_0x0._s_0.Z;
        }
        else {
          lVar3 = *(longlong *)
                   (*(longlong *)(*(longlong *)((longlong)this + 8) + 0x60) +
                   (ulonglong)(uStackX_c >> 9) * 8);
          local_1e0 = *(double *)(lVar3 + (ulonglong)(uStackX_c & 0x1ff) * 0xc);
          local_1d8 = *(float *)(lVar3 + 8 + (ulonglong)(uStackX_c & 0x1ff) * 0xc);
        }
        pdVar21 = &local_1e0;
      }
      else {
        pTVar22 = UE::Geometry::FMeshNormals::operator[]
                            ((FMeshNormals *)**(undefined8 **)((longlong)this + 0x10),uStackX_c);
        pdVar21 = (double *)&local_1c0;
        local_1c0 = (double)CONCAT44((float)(pTVar22->field0_0x0)._s_0.Y,
                                     (float)(pTVar22->field0_0x0)._s_0.X);
        local_1b8 = (float)(pTVar22->field0_0x0)._s_0.Z;
      }
      _local_218 = *pdVar21;
      local_210 = *(undefined4 *)(pdVar21 + 1);
    }
    else {
      if (0 < (pFVar6->NormalLayers).Array.ArrayNum) {
        this_02 = *(TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> **)
                   (pFVar6->NormalLayers).Array.AllocatorInstance.Data;
      }
      iVar18 = (int)uVar5;
      if (*(int *)(*(longlong *)
                    (*(longlong *)&this_02->field_0x78 + (ulonglong)((uint)(iVar18 * 3) >> 9) * 8) +
                  (ulonglong)(iVar18 * 3 & 0x1ff) * 4) < 0) {
        pTVar22 = UE::Geometry::FDynamicMesh3::GetTriNormal(this_00,&local_110,iVar18);
        local_208 = (float)(pTVar22->field0_0x0)._s_0.X;
        fStack_204 = (float)(pTVar22->field0_0x0)._s_0.Y;
        local_210 = (undefined4)(pTVar22->field0_0x0)._s_0.Z;
        fStack_214 = fStack_204;
        local_218 = local_208;
        local_200 = local_210;
      }
      else {
        UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::
        GetElementAtVertex(this_02,iVar18,uVar26,(TVector<float> *)&local_208);
        UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::
        GetElementAtVertex(this_02,iVar18,uStackX_c,(TVector<float> *)&local_218);
      }
    }
    uVar30 = local_210;
    plVar24 = *(longlong **)((longlong)this + 0x18);
    uVar28 = 0;
    if (param_1 < (int)plVar24[1]) {
      uVar28 = (uint)~param_1 >> 0x1f;
    }
    if ((uVar28 == 0) &&
       (bVar20 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar20)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pauVar25 = (undefined1 (*) [16])((longlong)param_1 * 0x60 + *plVar24);
    if (**(char **)((longlong)this + 0x20) != '\0') {
      dVar36 = local_1f8._s_0.X - local_1a0._s_0.X;
      dVar10 = local_1f8._s_0.Y - local_1a0._s_0.Y;
      dVar8 = local_1f8._s_0.Z - local_1a0._s_0.Z;
      fVar33 = local_218 + local_208;
      fVar34 = fStack_214 + fStack_204;
      fVar38 = (float)uVar30 + (float)local_200;
      dVar35 = dVar10 * dVar10 + dVar36 * dVar36 + dVar8 * dVar8;
      uVar28 = SUB84(dVar35,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
      uVar29 = (uint)((ulonglong)dVar35 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
      if (__real_3e45798ee2308c3a <= (double)CONCAT44(uVar29,uVar28) &&
          (double)CONCAT44(uVar29,uVar28) != __real_3e45798ee2308c3a) {
        dVar37 = (double)fVar33 * dVar36 + (double)fVar34 * dVar10;
        fVar31 = (float)(((dVar8 + dVar8) * (double)fVar38 + dVar37 + dVar37) / dVar35);
        fVar33 = fVar33 - (float)dVar36 * fVar31;
        fVar34 = fVar34 - (float)dVar10 * fVar31;
        fVar38 = fVar38 - (float)dVar8 * fVar31;
        fVar31 = SQRT(fVar34 * fVar34 + fVar33 * fVar33 + fVar38 * fVar38);
        if (fVar31 <= 0.0) {
          fVar38 = 0.0;
          fVar34 = 0.0;
          fVar33 = 0.0;
        }
        else {
          fVar31 = __real_3f800000 / fVar31;
          fVar38 = fVar38 * fVar31;
          fVar34 = fVar34 * fVar31;
          fVar33 = fVar33 * fVar31;
        }
      }
      else {
        fVar33 = fVar33 * __real_3f000000;
        fVar34 = fVar34 * __real_3f000000;
        fVar38 = fVar38 * __real_3f000000;
      }
      *(double *)pauVar25[3] = (double)fVar33;
      *(double *)(pauVar25[3] + 8) = (double)fVar34;
      *(double *)pauVar25[4] = (double)fVar38;
      uVar30 = local_210;
    }
    dVar8 = local_1f8._s_0.X - local_1a0._s_0.X;
    local_188 = local_1f8._s_0.Z - local_1a0._s_0.Z;
    dVar13 = local_1f8._s_0.Y - local_1a0._s_0.Y;
    dVar36 = (double)fStack_204 * dVar13 + (double)local_208 * dVar8 +
             (double)(float)local_200 * local_188;
    local_178 = local_1a0._s_0.X * __real_4000000000000000 + local_1f8._s_0.X;
    local_168 = local_1a0._s_0.Y * __real_4000000000000000 + local_1f8._s_0.Y;
    local_158 = local_1a0._s_0.Z * __real_4000000000000000 + local_1f8._s_0.Z;
    local_170 = local_178 - dVar36 * (double)local_208;
    dVar14 = local_1a0._s_0.X - local_1f8._s_0.X;
    local_160 = local_168 - dVar36 * (double)fStack_204;
    local_1c0 = local_158 - dVar36 * (double)(float)local_200;
    dVar36 = local_1a0._s_0.Z - local_1f8._s_0.Z;
    local_140 = local_1c0 * __real_3fd5555555555555;
    local_180 = local_1a0._s_0.Y - local_1f8._s_0.Y;
    dVar16 = local_170 * __real_3fd5555555555555;
    dVar17 = local_160 * __real_3fd5555555555555;
    dVar37 = (double)fStack_214 * local_180 + (double)local_218 * dVar14 +
             (double)(float)uVar30 * dVar36;
    lVar3 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x208);
    dVar10 = local_1f8._s_0.X * __real_4000000000000000 + local_1a0._s_0.X;
    local_1b0 = local_1f8._s_0.Y * __real_4000000000000000 + local_1a0._s_0.Y;
    dVar11 = local_1f8._s_0.Z * __real_4000000000000000 + local_1a0._s_0.Z;
    dVar12 = dVar10 - dVar37 * (double)local_218;
    dVar35 = dVar12 * __real_3fd5555555555555;
    local_1e0 = local_1b0 - dVar37 * (double)fStack_214;
    local_1d0 = dVar11 - dVar37 * (double)(float)uVar30;
    dVar37 = local_1e0 * __real_3fd5555555555555;
    local_128 = local_1d0 * __real_3fd5555555555555;
    if (((lVar3 != 0) && (0 < *(int *)(lVar3 + 0x38))) && (**(longlong **)(lVar3 + 0x30) != 0)) {
      iStackX_1c = (int)((ulonglong)uVar5 >> 0x20);
      this_01 = (TDynamicMeshOverlay<float,3> *)**(longlong **)(lVar3 + 0x30);
      if ((iStackX_1c != -1) &&
         (bVar20 = UE::Geometry::TDynamicMeshOverlay<float,3>::IsSeamEdge
                             (this_01,param_1,(bool *)0x0), bVar20)) {
        if (*(int *)(*(longlong *)
                      ((this_01->ElementTriangles).Blocks.AllocatorInstance.Data +
                      (ulonglong)((uint)(iStackX_1c * 3) >> 9) * 8) +
                    (ulonglong)(iStackX_1c * 3 & 0x1ff) * 4) < 0) {
          pTVar22 = UE::Geometry::FDynamicMesh3::GetTriNormal
                              (*(FDynamicMesh3 **)((longlong)this + 8),local_f8,iStackX_1c);
          fVar31 = (float)(pTVar22->field0_0x0)._s_0.X;
          fVar33 = (float)(pTVar22->field0_0x0)._s_0.Y;
          local_210 = (undefined4)(pTVar22->field0_0x0)._s_0.Z;
          fStack_204 = fVar33;
          local_208 = fVar31;
          fStack_214 = fVar33;
          local_218 = fVar31;
          fVar34 = fVar31;
          fVar38 = fVar33;
          local_200 = local_210;
        }
        else {
          UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::
          GetElementAtVertex((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)this_01
                             ,iStackX_1c,uVar26,(TVector<float> *)&local_208);
          UE::Geometry::TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_>::
          GetElementAtVertex((TDynamicMeshVectorOverlay<float,3,UE::Math::TVector<float>_> *)this_01
                             ,iStackX_1c,uStackX_c,(TVector<float> *)&local_218);
          fVar31 = local_208;
          fVar33 = fStack_204;
          fVar34 = local_218;
          fVar38 = fStack_214;
        }
        dVar8 = dVar13 * (double)fVar33 + dVar8 * (double)fVar31 +
                local_188 * (double)(float)local_200;
        dVar36 = dVar14 * (double)fVar34 + local_180 * (double)fVar38 +
                 dVar36 * (double)(float)local_210;
        dVar16 = ((local_178 - dVar8 * (double)fVar31) + local_170) * __real_3fc5555555555555;
        dVar17 = ((local_168 - dVar8 * (double)fVar33) + local_160) * __real_3fc5555555555555;
        local_140 = ((local_158 - dVar8 * (double)(float)local_200) + local_1c0) *
                    __real_3fc5555555555555;
        dVar35 = ((dVar10 - dVar36 * (double)fVar34) + dVar12) * __real_3fc5555555555555;
        local_128 = ((dVar11 - dVar36 * (double)(float)local_210) + local_1d0) *
                    __real_3fc5555555555555;
        dVar37 = ((local_1b0 - dVar36 * (double)fVar38) + local_1e0) * __real_3fc5555555555555;
        if (**(char **)((longlong)this + 0x20) != '\0') {
          pTVar23 = __l2::<lambda_2>::operator()
                              (*(void **)((longlong)this + 0x28),&local_120,
                               (TVector<double> *)&local_1a0._s_0,(TVector<double> *)&local_1f8._s_0
                               ,(TVector<float> *)&local_208,(TVector<float> *)&local_218);
          uVar5 = *(undefined8 *)((longlong)&pTVar23->field0_0x0 + 4);
          dVar8 = (double)(float)((ulonglong)uVar5 >> 0x20);
          *(double *)(pauVar25[4] + 8) = (double)(pTVar23->field0_0x0)._s_0.X;
          auVar7._8_4_ = SUB84(dVar8,0);
          auVar7._0_8_ = (double)(float)uVar5;
          auVar7._12_4_ = (int)((ulonglong)dVar8 >> 0x20);
          pauVar25[5] = auVar7;
        }
      }
    }
    auVar15._8_4_ = SUB84(dVar17,0);
    auVar15._0_8_ = dVar16;
    auVar15._12_4_ = (int)((ulonglong)dVar17 >> 0x20);
    *pauVar25 = auVar15;
    auVar9._8_4_ = SUB84(dVar37,0);
    auVar9._0_8_ = dVar35;
    auVar9._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
    *(undefined1 (*) [16])(pauVar25[1] + 8) = auVar9;
    *(double *)pauVar25[1] = local_140;
    *(double *)(pauVar25[2] + 8) = local_128;
  }
  return;
}

// operator() @ 14c7d2180

void __thiscall
`FPNTrianglesLocals::ComputeControlPoints'::__l2::<lambda_4>::operator()(void *this,int param_1)

{
  double *pdVar1;
  double *pdVar2;
  double *pdVar3;
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
  double dVar15;
  char *pcVar16;
  code *pcVar17;
  longlong lVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  char cVar22;
  bool bVar23;
  uint uVar24;
  undefined8 uVar25;
  uint uVar26;
  longlong *plVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  ulonglong uVar33;
  longlong lVar34;
  
  lVar34 = (longlong)param_1;
  pcVar16 = (char *)**(undefined8 **)this;
  if (pcVar16 != (char *)0x0) {
    if (*pcVar16 != '\0') {
      return;
    }
    UE::Core::Private::Function::CheckCallable(*(void **)(pcVar16 + 0x70));
    pcVar17 = *(code **)(pcVar16 + 0x70);
    plVar27 = (longlong *)(pcVar16 + 0x80);
    if (*(longlong **)(pcVar16 + 0x98) != (longlong *)0x0) {
      plVar27 = *(longlong **)(pcVar16 + 0x98);
    }
    uVar25 = (**(code **)(*plVar27 + 8))();
    cVar22 = (*pcVar17)(uVar25);
    *pcVar16 = cVar22;
    if (cVar22 != '\0') {
      return;
    }
  }
  uVar21 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  uVar20 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
  uVar25 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
  lVar18 = *(longlong *)((longlong)this + 8);
  if ((-1 < param_1) && (param_1 < *(int *)(lVar18 + 0x140) * 0x200 + *(int *)(lVar18 + 0x144))) {
    uVar32 = (ulonglong)(param_1 & 0x1ff);
    uVar31 = (ulonglong)((uint)param_1 >> 9);
    if ((ushort)(*(short *)(*(longlong *)(*(longlong *)(lVar18 + 0x148) + uVar31 * 8) + uVar32 * 2)
                - 1U) < 0xfffe) {
      lVar18 = *(longlong *)(*(longlong *)(lVar18 + 0x180) + uVar31 * 8);
      plVar27 = *(longlong **)((longlong)this + 0x10);
      uVar24 = *(uint *)(lVar18 + uVar32 * 0xc);
      uVar26 = 0;
      if ((int)uVar24 < (int)plVar27[1]) {
        uVar26 = ~uVar24 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      uVar26 = *(uint *)(lVar18 + 4 + uVar32 * 0xc);
      lVar28 = (longlong)(int)uVar24 * 0x60;
      lVar29 = *plVar27;
      dVar4 = *(double *)(lVar28 + 0x18 + lVar29);
      dVar5 = *(double *)(lVar28 + lVar29);
      dVar6 = *(double *)(lVar28 + 0x20 + lVar29);
      dVar7 = *(double *)(lVar28 + 8 + lVar29);
      dVar8 = *(double *)(lVar28 + 0x28 + lVar29);
      dVar9 = *(double *)(lVar28 + 0x10 + lVar29);
      plVar27 = *(longlong **)((longlong)this + 0x10);
      uVar24 = 0;
      if ((int)uVar26 < (int)plVar27[1]) {
        uVar24 = ~uVar26 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      uVar24 = *(uint *)(lVar18 + 8 + uVar32 * 0xc);
      lVar29 = (longlong)(int)uVar26 * 0x60;
      lVar18 = *plVar27;
      dVar10 = *(double *)(lVar29 + 0x18 + lVar18);
      dVar11 = *(double *)(lVar29 + lVar18);
      dVar12 = *(double *)(lVar29 + 0x20 + lVar18);
      dVar13 = *(double *)(lVar29 + 8 + lVar18);
      dVar14 = *(double *)(lVar29 + 0x28 + lVar18);
      dVar15 = *(double *)(lVar29 + 0x10 + lVar18);
      plVar27 = *(longlong **)((longlong)this + 0x10);
      uVar26 = 0;
      if ((int)uVar24 < (int)plVar27[1]) {
        uVar26 = ~uVar24 >> 0x1f;
      }
      if ((uVar26 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      lVar18 = *(longlong *)((longlong)this + 0x10);
      lVar29 = *plVar27;
      lVar30 = (longlong)(int)uVar24 * 0x60;
      dVar5 = (*(double *)(lVar30 + 0x18 + lVar29) + *(double *)(lVar30 + lVar29) +
              dVar10 + dVar11 + dVar4 + dVar5 + (double)uVar25) * __real_3fc5555555555555;
      lVar28 = *(longlong *)(*(longlong *)((longlong)this + 8) + 0x10);
      dVar8 = (*(double *)(lVar30 + 0x28 + lVar29) + *(double *)(lVar30 + 0x10 + lVar29) +
              dVar14 + dVar15 + dVar8 + dVar9 + (double)uVar21) * __real_3fc5555555555555;
      lVar19 = *(longlong *)(*(longlong *)(*(longlong *)((longlong)this + 8) + 0x130) + uVar31 * 8);
      dVar7 = (*(double *)(lVar30 + 0x20 + lVar29) + *(double *)(lVar30 + 8 + lVar29) +
              dVar12 + dVar13 + dVar6 + dVar7 + (double)uVar20) * __real_3fc5555555555555;
      uVar24 = *(uint *)(lVar19 + uVar32 * 0xc);
      uVar33 = (ulonglong)(uVar24 & 0x1ff);
      lVar29 = *(longlong *)(lVar28 + (ulonglong)(uVar24 >> 9) * 8);
      pdVar1 = (double *)(lVar29 + uVar33 * 0x18);
      uVar24 = *(uint *)(lVar19 + 4 + uVar32 * 0xc);
      uVar31 = (ulonglong)(uVar24 & 0x1ff);
      lVar30 = *(longlong *)(lVar28 + (ulonglong)(uVar24 >> 9) * 8);
      uVar24 = *(uint *)(lVar19 + 8 + uVar32 * 0xc);
      pdVar2 = (double *)(lVar30 + uVar31 * 0x18);
      uVar32 = (ulonglong)(uVar24 & 0x1ff);
      lVar28 = *(longlong *)(lVar28 + (ulonglong)(uVar24 >> 9) * 8);
      pdVar3 = (double *)(lVar28 + uVar32 * 0x18);
      dVar9 = (dVar5 - (*pdVar1 + *pdVar2 + *pdVar3) * __real_3fd5555555555555) *
              __real_3fe0000000000000;
      dVar4 = (dVar8 - (*(double *)(lVar29 + 0x10 + uVar33 * 0x18) +
                        *(double *)(lVar30 + 0x10 + uVar31 * 0x18) +
                       *(double *)(lVar28 + 0x10 + uVar32 * 0x18)) * __real_3fd5555555555555) *
              __real_3fe0000000000000;
      dVar6 = (dVar7 - (pdVar1[1] + pdVar2[1] + pdVar3[1]) * __real_3fd5555555555555) *
              __real_3fe0000000000000;
      uVar24 = 0;
      if (param_1 < *(int *)(lVar18 + 0x18)) {
        uVar24 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar23)) {
        pcVar17 = (code *)swi(3);
        (*pcVar17)();
        return;
      }
      lVar18 = *(longlong *)(lVar18 + 0x10);
      *(double *)(lVar18 + lVar34 * 0x18) = dVar9 + dVar5;
      *(double *)(lVar18 + 8 + lVar34 * 0x18) = dVar6 + dVar7;
      *(double *)(lVar18 + 0x10 + lVar34 * 0x18) = dVar4 + dVar8;
    }
  }
  return;
}

// ComputeControlPoints @ 14c7ef830

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

bool __cdecl
FPNTrianglesLocals::ComputeControlPoints
          (FControlPoints *param_1,FDynamicMesh3 *param_2,FMeshNormals *param_3,bool param_4,
          FProgressCancel *param_5)

{
  int *piVar1;
  code *pcVar2;
  longlong *plVar3;
  FProgressCancel *pFVar4;
  undefined1 uVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  FScriptContainerElement *_Dst;
  longlong *plVar9;
  uint uVar10;
  uint uVar11;
  <lambda_1> local_res10 [8];
  FMeshNormals *local_res18;
  undefined1 local_res20 [8];
  undefined1 local_c8 [8];
  TArrayView<std::nullptr_t,int> local_c0;
  code *local_b0;
  FProgressCancel ***local_a8;
  TArrayView<std::nullptr_t,int> local_a0;
  code *local_90;
  FProgressCancel ***local_88;
  FProgressCancel **local_80;
  FDynamicMesh3 *local_78;
  FControlPoints *local_70;
  FProgressCancel **local_68;
  FDynamicMesh3 *local_60;
  FMeshNormals **local_58;
  FControlPoints *local_50;
  undefined1 *local_48;
  <lambda_1> *local_40;
  undefined1 *local_38;
  
  if ((((param_2->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0) ||
      ((param_2->VertexNormals).bIsSet != false)) || (param_3 != (FMeshNormals *)0x0)) {
    piVar1 = &(param_1->OnEdges).ArrayNum;
    iVar7 = (param_1->OnEdges).ArrayNum;
    uVar10 = (param_2->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
             (param_2->EdgeRefCounts).RefCounts.CurBlockUsed;
    local_res18 = param_3;
    local_res20[0] = param_4;
    if (iVar7 < (int)uVar10) {
      UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x60,8,uVar10 - iVar7,(ForAnyElementType *)param_1,piVar1,
                 &(param_1->OnEdges).ArrayMax);
    }
    else {
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      if ((int)uVar10 < iVar7) {
        uVar11 = iVar7 - uVar10;
        if (((int)(uVar11 | uVar10) < 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x458,
                               L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                              ), bVar6)) {
          pcVar2 = (code *)swi(3);
          uVar5 = (*pcVar2)();
          return (bool)uVar5;
        }
        if (uVar11 != 0) {
          _Dst = (param_1->OnEdges).AllocatorInstance.Data + (longlong)(int)uVar10 * 0x60;
          iVar7 = (*piVar1 - uVar11) - uVar10;
          if (iVar7 != 0) {
            memmove(_Dst,_Dst + (longlong)(int)uVar11 * 0x60,(longlong)iVar7 * 0x60);
          }
          *piVar1 = *piVar1 - uVar11;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x60,8,(ForAnyElementType *)param_1,*piVar1,&(param_1->OnEdges).ArrayMax);
        }
      }
    }
    TArray<UE::Math::TVector<double>,TSizedDefaultAllocator<32>_>::SetNum
              (&param_1->OnTriangles,
               (param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
               (param_2->TriangleRefCounts).RefCounts.CurBlockUsed,Default);
    local_68 = &param_5;
    local_58 = &local_res18;
    local_48 = local_res20;
    local_40 = local_res10;
    local_38 = local_c8;
    local_b0 = UE::Core::Private::Function::
               TFunctionRefCaller<`FPNTrianglesLocals::ComputeControlPoints'::__l2::<lambda_3>,void,int>
               ::Call;
    local_a8 = &local_68;
    local_c0.DataPtr = (void **)0x0;
    local_c0.ArrayNum = 0;
    local_60 = param_2;
    local_50 = param_1;
    ParallelForImpl::
    ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
              (L"ParallelFor Task",
               (param_2->EdgeRefCounts).RefCounts.CurBlock * 0x200 +
               (param_2->EdgeRefCounts).RefCounts.CurBlockUsed,1,
               (TFunctionRef<void___cdecl(int)> *)&local_b0,local_res10[0],None,&local_c0);
    pFVar4 = param_5;
    if (param_5 == (FProgressCancel *)0x0) {
LAB_14c7efa51:
      local_80 = &param_5;
      local_90 = UE::Core::Private::Function::
                 TFunctionRefCaller<`FPNTrianglesLocals::ComputeControlPoints'::__l2::<lambda_4>,void,int>
                 ::Call;
      local_88 = &local_80;
      local_a0.DataPtr = (void **)0x0;
      local_a0.ArrayNum = 0;
      local_78 = param_2;
      local_70 = param_1;
      ParallelForImpl::
      ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
                (L"ParallelFor Task",
                 (param_2->TriangleRefCounts).RefCounts.CurBlock * 0x200 +
                 (param_2->TriangleRefCounts).RefCounts.CurBlockUsed,1,
                 (TFunctionRef<void___cdecl(int)> *)&local_90,local_res10[0],None,&local_a0);
      if (param_5 != (FProgressCancel *)0x0) {
        bVar6 = FProgressCancel::Cancelled(param_5);
        return !bVar6;
      }
      return true;
    }
    if (param_5->WasCancelled == false) {
      UE::Core::Private::Function::CheckCallable(*(void **)&param_5->CancelF);
      pcVar2 = *(code **)&pFVar4->CancelF;
      plVar3 = *(longlong **)&(pFVar4->CancelF).field_0x28;
      plVar9 = (longlong *)&(pFVar4->CancelF).field_0x10;
      if (plVar3 != (longlong *)0x0) {
        plVar9 = plVar3;
      }
      uVar8 = (**(code **)(*plVar9 + 8))();
      bVar6 = (bool)(*pcVar2)(uVar8);
      pFVar4->WasCancelled = bVar6;
      if (bVar6 == false) goto LAB_14c7efa51;
    }
  }
  return false;
}

// DisplaceAndSetQuadraticNormals @ 14c800710

bool __cdecl
FPNTrianglesLocals::DisplaceAndSetQuadraticNormals
          (FDynamicMesh3 *param_1,FControlPoints *param_2,
          TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *param_3,bool param_4,
          FProgressCancel *param_5,FDynamicMesh3 *param_6)

{
  code *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  undefined1 local_res8 [8];
  undefined1 local_res20 [8];
  TArrayView<std::nullptr_t,int> local_68;
  code *local_58;
  FProgressCancel ***local_50;
  FProgressCancel **local_48;
  TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *local_40;
  FDynamicMesh3 *local_38;
  FDynamicMesh3 *local_30;
  FControlPoints *local_28;
  undefined1 *local_20;
  FDynamicMesh3 **local_18;
  undefined1 *local_10;
  
  local_30 = param_6;
  local_res8[0] = (param_6->AttributeSet).Ptr != (FDynamicMeshAttributeSet *)0x0;
  local_48 = &param_5;
  local_20 = local_res20;
  local_18 = &param_6;
  local_10 = local_res8;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`FPNTrianglesLocals::DisplaceAndSetQuadraticNormals'::__l2::<lambda_1>,void,int>
             ::Call;
  local_50 = &local_48;
  local_68.DataPtr = (void **)0x0;
  local_68.ArrayNum = 0;
  local_res20[0] = param_4;
  param_6._0_1_ = (param_6->VertexNormals).bIsSet;
  local_40 = param_3;
  local_38 = param_1;
  local_28 = param_2;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",param_3->ArrayNum,1,(TFunctionRef<void___cdecl(int)> *)&local_58,
             param_5._0_1_,None,&local_68);
  pcVar2 = (char *)CONCAT71(param_5._1_7_,param_5._0_1_);
  if (pcVar2 == (char *)0x0) {
    return true;
  }
  if (*pcVar2 == '\0') {
    UE::Core::Private::Function::CheckCallable(*(void **)(pcVar2 + 0x70));
    pcVar1 = *(code **)(pcVar2 + 0x70);
    plVar5 = (longlong *)(pcVar2 + 0x80);
    if (*(longlong **)(pcVar2 + 0x98) != (longlong *)0x0) {
      plVar5 = *(longlong **)(pcVar2 + 0x98);
    }
    uVar4 = (**(code **)(*plVar5 + 8))();
    cVar3 = (*pcVar1)(uVar4);
    *pcVar2 = cVar3;
    return cVar3 == '\0';
  }
  return false;
}

// TessellateMesh @ 14c83f850

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
FPNTrianglesLocals::TessellateMesh
          (FDynamicMesh3 *param_1,int param_2,FProgressCancel *param_3,
          TArray<UE::Geometry::FIndex2i,TSizedDefaultAllocator<32>_> *param_4,FDynamicMesh3 *param_5
          )

{
  int *piVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  undefined1 auStackY_248 [32];
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  longlong *local_1e8;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1e0;
  int local_1b8;
  int local_1b4;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  longlong *local_188;
  int iStack_180;
  uint uStack_17c;
  TBitArray<FDefaultBitArrayAllocator> *local_178;
  undefined4 uStack_170;
  int iStack_16c;
  int local_168;
  undefined4 uStack_164;
  undefined4 local_13c;
  undefined4 local_11c;
  undefined1 local_118 [48];
  undefined1 local_e8 [32];
  uint *local_c8;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  int local_b4;
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [32];
  uint *local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int local_64;
  void *local_58;
  undefined4 local_50;
  FDynamicMesh3 *local_48;
  bool local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_248;
  if (param_2 < 0) {
    bVar5 = false;
  }
  else if (param_2 == 0) {
    bVar5 = true;
  }
  else {
    iVar14 = 0;
    local_118._0_8_ = &___7FUniformTessellate_Geometry_UE__6B_;
    iVar11 = 0;
    local_58 = (void *)0x0;
    local_40 = false;
    local_118._8_8_ = (FProgressCancel *)0x0;
    local_118[0x14] = true;
    local_118[0x15] = true;
    local_118._24_8_ = param_5;
    local_118._32_8_ = (FScriptContainerElement *)0x0;
    local_118._40_4_ = 0;
    local_118._44_4_ = 0;
    local_e8._0_8_ = 0;
    local_e8._8_8_ = 0;
    local_c8 = (uint *)0x0;
    local_c0 = 0;
    local_bc = 0x80;
    local_b8 = 0xffffffff;
    local_b4 = 0;
    local_a8 = (void *)0x0;
    local_a0 = 0;
    local_98._0_8_ = 0;
    local_98._8_8_ = 0;
    local_78 = (uint *)0x0;
    local_70 = 0;
    local_6c = 0x80;
    local_68 = 0xffffffff;
    local_64 = 0;
    local_50 = 0;
    local_118._16_4_ = param_2;
    local_48 = param_1;
    if (((param_1 == (FDynamicMesh3 *)0x0) || (param_5 == (FDynamicMesh3 *)0x0)) ||
       (bVar5 = UE::Geometry::FUniformTessellate::Compute((FUniformTessellate *)local_118), !bVar5))
    {
      bVar5 = false;
    }
    else {
      uVar10 = ((local_98._8_4_ - local_64) - local_b4) + local_e8._8_4_;
      if ((int)uVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar10);
      }
      piVar1 = &param_4->ArrayMax;
      if (*piVar1 < (int)uVar10) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,4,uVar10,&param_4->AllocatorInstance,param_4->ArrayNum,piVar1);
      }
      uVar7 = 1;
      iVar12 = 0;
      uVar10 = 1;
      TStack_1e0.BaseBitIndex = iVar12;
      iVar8 = iVar14;
      if (local_c0 != 0) {
        puVar13 = (uint *)(local_e8 + 0x10);
        if (local_c8 != (uint *)0x0) {
          puVar13 = local_c8;
        }
        uVar10 = *puVar13;
        TStack_1e0.BaseBitIndex = 0;
        iVar11 = 0;
        while (uVar10 == 0) {
          lVar9 = (longlong)iVar11;
          TStack_1e0.BaseBitIndex = TStack_1e0.BaseBitIndex + 0x20;
          iVar11 = iVar11 + 1;
          uVar10 = 1;
          iVar8 = local_c0;
          if ((int)(local_c0 + -1 + (local_c0 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11)
          goto LAB_14c83fa6f;
          uVar10 = puVar13[lVar9 + 1];
        }
        uVar10 = -uVar10 & uVar10;
        uVar2 = (ulonglong)uVar10 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_1b8 = (int)lVar9;
        iVar8 = local_1b8 + -1 + TStack_1e0.BaseBitIndex;
        if (local_c0 < iVar8) {
          iVar8 = local_c0;
        }
      }
LAB_14c83fa6f:
      local_1e8 = (longlong *)(local_118 + 0x30);
      TStack_1e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_e8 + 0x10);
      TStack_1e0._padding_ = CONCAT44(uVar10,iVar11);
      TStack_1e0.CurrentBitIndex = iVar8;
      TStack_1e0.UnvisitedBitMask = 0xffffffff;
      TStack_1e0._28_4_ = local_13c;
      TStack_1a8._padding_ = TStack_1e0._padding_;
      TStack_1a8.BaseBitIndex = TStack_1e0.BaseBitIndex;
      TStack_1a8._28_4_ = local_13c;
      TStack_1a8.UnvisitedBitMask = 0xffffffff;
      TStack_1a8.CurrentBitIndex = iVar8;
      local_1b0 = local_1e8;
      TStack_1a8.Array = TStack_1e0.Array;
      if (iVar8 < local_c0) {
        do {
          local_1f8 = *(undefined4 *)(*local_1b0 + (longlong)iVar8 * 0x14);
          pFVar3 = (param_4->AllocatorInstance).Data;
          uStack_1f4 = *(undefined4 *)(*local_1b0 + 4 + (longlong)iVar8 * 0x14);
          if (((pFVar3 <= (FScriptContainerElement *)&local_1f8) &&
              ((FScriptContainerElement *)&local_1f8 < pFVar3 + (longlong)*piVar1 * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar11 = param_4->ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&param_4->AllocatorInstance,piVar1);
          }
          param_4->ArrayNum = iVar11 + 1;
          *(ulonglong *)((param_4->AllocatorInstance).Data + (longlong)iVar11 * 8) =
               CONCAT44(uStack_1f4,local_1f8);
          TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
          iVar8 = TStack_1a8.CurrentBitIndex;
        } while (TStack_1a8.CurrentBitIndex < (TStack_1a8.Array)->NumBits);
      }
      local_168 = iVar12;
      iStack_16c = iVar14;
      if (local_70 != 0) {
        puVar13 = (uint *)(local_98 + 0x10);
        if (local_78 != (uint *)0x0) {
          puVar13 = local_78;
        }
        uVar10 = *puVar13;
        iVar12 = iVar14;
        local_168 = iVar14;
        while (uVar10 == 0) {
          lVar9 = (longlong)iVar12;
          local_168 = local_168 + 0x20;
          iVar12 = iVar12 + 1;
          iStack_16c = local_70;
          if ((int)(local_70 + -1 + (local_70 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12)
          goto LAB_14c83fc30;
          uVar10 = puVar13[lVar9 + 1];
        }
        uVar7 = -uVar10 & uVar10;
        uVar2 = (ulonglong)uVar7 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        local_1b4 = (int)lVar9;
        iStack_16c = local_1b4 + -1 + local_168;
        if (local_70 < iStack_16c) {
          iStack_16c = local_70;
        }
      }
LAB_14c83fc30:
      local_1e8 = (longlong *)local_98;
      TStack_1e0.Array = (TBitArray<FDefaultBitArrayAllocator> *)(local_98 + 0x10);
      uStack_170 = 0xffffffff;
      uStack_164 = local_11c;
      TStack_1e0._padding_ = CONCAT44(uVar7,iVar12);
      TStack_1e0.CurrentBitIndex = iStack_16c;
      TStack_1e0.UnvisitedBitMask = 0xffffffff;
      TStack_1e0._28_4_ = local_11c;
      TStack_1e0.BaseBitIndex = local_168;
      local_188 = local_1e8;
      iStack_180 = iVar12;
      uStack_17c = uVar7;
      local_178 = TStack_1e0.Array;
      iVar11 = iStack_16c;
      if (iStack_16c < local_70) {
        do {
          uStack_1ec = *(undefined4 *)(*local_1e8 + 4 + (longlong)iVar11 * 0x10);
          local_1f0 = *(undefined4 *)(*local_1e8 + (longlong)iVar11 * 0x10);
          pFVar3 = (param_4->AllocatorInstance).Data;
          if (((pFVar3 <= (FScriptContainerElement *)&local_1f0) &&
              ((FScriptContainerElement *)&local_1f0 < pFVar3 + (longlong)*piVar1 * 8)) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar5)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          iVar11 = param_4->ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x408,&param_4->AllocatorInstance,piVar1);
          }
          param_4->ArrayNum = iVar11 + 1;
          *(ulonglong *)((param_4->AllocatorInstance).Data + (longlong)iVar11 * 8) =
               CONCAT44(uStack_1ec,local_1f0);
          TStack_1e0.UnvisitedBitMask = TStack_1e0.UnvisitedBitMask & ~TStack_1e0._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1e0);
          iVar11 = TStack_1e0.CurrentBitIndex;
        } while (TStack_1e0.CurrentBitIndex < (TStack_1e0.Array)->NumBits);
      }
      bVar5 = true;
    }
    local_118._0_8_ = &___7FUniformTessellate_Geometry_UE__6B_;
    local_50 = 0;
    if (local_58 != (void *)0x0) {
      FMemory::Free(local_58);
    }
    TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)local_98);
    local_a0 = 0;
    if (local_a8 != (void *)0x0) {
      FMemory::Free(local_a8);
    }
    TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<int,UE::Geometry::FIndex2i>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_118 + 0x30));
    if ((FScriptContainerElement *)local_118._32_8_ != (FScriptContainerElement *)0x0) {
      FMemory::Free((void *)local_118._32_8_);
    }
  }
  return bVar5;
}

