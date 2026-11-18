// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Chaos
// Functions: 6

// SupportCore @ 1438d7480

TVector<double,3> * __thiscall
Chaos::TGJKShape<Chaos::TBox<double,3>_>::SupportCore
          (TGJKShape<Chaos::TBox<double,3>_> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,double param_2,double *param_3,int *param_4)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TBox<double,3> *pTVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  double dVar9;
  int iVar10;
  TAABB<double,3> *pTVar11;
  int iVar12;
  undefined1 auVar13 [16];
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  double dStack_68;
  double local_60;
  
  pTVar6 = this->Shape;
  dVar1 = *(double *)param_1;
  bVar7 = 0.0 <= dVar1;
  if (bVar7) {
    uVar2 = *(undefined8 *)&(pTVar6->AABB).MMax;
    uVar14 = (undefined4)uVar2;
    uVar15 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  else {
    uVar2 = *(undefined8 *)&(pTVar6->AABB).MMin;
    uVar14 = (undefined4)uVar2;
    uVar15 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  dStack_68 = *(double *)&param_1->field_0x8;
  pTVar11 = &pTVar6->AABB;
  if (bVar7) {
    pTVar11 = (TAABB<double,3> *)&(pTVar6->AABB).MMax;
  }
  dVar3 = *(double *)&pTVar11->MMin;
  if (0.0 <= dStack_68) {
    uVar2 = *(undefined8 *)&(pTVar6->AABB).MMax.field_0x8;
    uVar16 = (undefined4)uVar2;
    uVar17 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  else {
    uVar2 = *(undefined8 *)&(pTVar6->AABB).MMin.field_0x8;
    uVar16 = (undefined4)uVar2;
    uVar17 = (undefined4)((ulonglong)uVar2 >> 0x20);
  }
  dVar4 = *(double *)&param_1->field_0x10;
  iVar10 = 0;
  if (0.0 <= dStack_68) {
    iVar10 = 2;
  }
  if (0.0 <= dVar4) {
    dVar5 = *(double *)&(pTVar6->AABB).MMax.field_0x10;
  }
  else {
    dVar5 = *(double *)&(pTVar6->AABB).MMin.field_0x10;
  }
  iVar12 = 0;
  if (0.0 <= dVar4) {
    iVar12 = 4;
  }
  *param_4 = iVar12 + (uint)bVar7 + iVar10;
  if (param_2 != 0.0) {
    auVar13._0_8_ = dVar1 * dVar1;
    auVar13._8_8_ = 0;
    dVar9 = dStack_68 * dStack_68 + auVar13._0_8_ + dVar4 * dVar4;
    if (__real_0010000000000000 < dVar9) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = dVar9;
      auVar13 = sqrtpd(auVar13,auVar8);
      local_60 = __real_3ff0000000000000 / auVar13._0_8_;
      uVar2 = local_60 * dVar1;
      dStack_68 = local_60 * dStack_68;
      local_60 = local_60 * dVar4;
      dVar1 = dStack_68 * dStack_68 + (double)uVar2 * (double)uVar2 + local_60 * local_60;
      if (dVar1 != __real_3ff0000000000000) {
        if (__real_3e45798ee0000000 <= dVar1) {
          dVar1 = __real_3ff0000000000000 / SQRT(dVar1);
          dStack_68 = dStack_68 * dVar1;
          local_60 = local_60 * dVar1;
          uVar2 = (double)uVar2 * dVar1;
        }
        else {
          dStack_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
          local_60 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
          uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        }
      }
      *(double *)__return_storage_ptr__ = (double)uVar2 * param_2 + dVar3;
      *(double *)&__return_storage_ptr__->field_0x8 =
           dStack_68 * param_2 + (double)CONCAT44(uVar17,uVar16);
      *(double *)&__return_storage_ptr__->field_0x10 = local_60 * param_2 + dVar5;
      return __return_storage_ptr__;
    }
  }
  *(undefined4 *)__return_storage_ptr__ = uVar14;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar15;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar16;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar17;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar5;
  return __return_storage_ptr__;
}

// SupportCore @ 1438d76a0

TVector<double,3> * __thiscall
Chaos::TGJKShape<Chaos::TCoreSegment<double>_>::SupportCore
          (TGJKShape<Chaos::TCoreSegment<double>_> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,double param_2,double *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  TCoreSegment<double> *pTVar6;
  bool bVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  double dVar10;
  undefined1 auVar11 [16];
  double dVar12;
  double dVar13;
  
  pTVar6 = this->Shape;
  dVar13 = *(double *)&(pTVar6->MAxis).field_0x8;
  dVar1 = *(double *)&(pTVar6->MAxis).field_0x10;
  dVar2 = *(double *)&param_1->field_0x10;
  dVar3 = *(double *)param_1;
  dVar4 = *(double *)&param_1->field_0x8;
  bVar7 = 0.0 <= dVar13 * dVar4 + *(double *)&pTVar6->MAxis * dVar3 + dVar1 * dVar2;
  if (bVar7) {
    dVar5 = pTVar6->MLength;
    dVar10 = dVar5 * *(double *)&pTVar6->MAxis + *(double *)&pTVar6->MPoint;
    dVar12 = dVar5 * dVar13 + *(double *)&(pTVar6->MPoint).field_0x8;
    dVar13 = dVar5 * dVar1 + *(double *)&(pTVar6->MPoint).field_0x10;
  }
  else {
    dVar10 = *(double *)&pTVar6->MPoint;
    dVar12 = *(double *)&(pTVar6->MPoint).field_0x8;
    dVar13 = *(double *)&(pTVar6->MPoint).field_0x10;
  }
  auVar11._0_8_ = dVar4 * dVar4;
  auVar11._8_8_ = 0;
  *param_4 = (uint)bVar7;
  dVar1 = dVar3 * dVar3 + auVar11._0_8_ + dVar2 * dVar2;
  if (__real_0010000000000000 < dVar1) {
    auVar9._8_8_ = 0;
    auVar9._0_8_ = dVar1;
    auVar11 = sqrtpd(auVar11,auVar9);
    dVar1 = __real_3ff0000000000000 / auVar11._0_8_;
    *(double *)&__return_storage_ptr__->field_0x10 = dVar1 * dVar2 * param_2 + dVar13;
    *(double *)&__return_storage_ptr__->field_0x8 = dVar1 * dVar4 * param_2 + dVar12;
    *(double *)__return_storage_ptr__ = dVar1 * dVar3 * param_2 + dVar10;
  }
  else {
    auVar8._8_4_ = SUB84(dVar12,0);
    auVar8._0_8_ = dVar10;
    auVar8._12_4_ = (int)((ulonglong)dVar12 >> 0x20);
    *(undefined1 (*) [16])__return_storage_ptr__ = auVar8;
    *(double *)&__return_storage_ptr__->field_0x10 = dVar13;
  }
  return __return_storage_ptr__;
}

// SupportCore @ 1438d7830

TVector<double,3> * __thiscall
Chaos::TGJKShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_>::SupportCore
          (TGJKShape<Chaos::TImplicitObjectInstanced<Chaos::FConvex>_> *this,
          TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,double param_2,
          double *param_3,int *param_4)

{
  int iVar1;
  FConvex *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double,3> *pTVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  
  uVar10 = 0xffffffff;
  uVar9 = 0;
  pFVar2 = (this->Shape->MObject).Reference;
  dVar13 = *(double *)param_1;
  lVar12 = (longlong)(pFVar2->Vertices).ArrayNum;
  dVar15 = *(double *)&param_1->field_0x8;
  dVar16 = *(double *)&param_1->field_0x10;
  if (lVar12 < 1) {
    *param_4 = -1;
  }
  else {
    lVar11 = 0;
    fVar17 = __real_ff7fffff;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (pFVar2->Vertices).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector<double,3> *)(*pcVar4)();
          return pTVar8;
        }
      }
      pFVar3 = (pFVar2->Vertices).AllocatorInstance.Data;
      fVar14 = (float)dVar15 * *(float *)(pFVar3 + lVar11 + 4) +
               (float)dVar13 * *(float *)(pFVar3 + lVar11) +
               (float)dVar16 * *(float *)(pFVar3 + lVar11 + 8);
      if (fVar17 < fVar14) {
        fVar17 = fVar14;
        uVar10 = uVar9;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0xc;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *param_4 = uVar10;
    if (uVar10 != 0xffffffff) {
      iVar1 = (pFVar2->Vertices).ArrayNum;
      if (param_2 == 0.0) {
        uVar9 = 0;
        if ((int)uVar10 < iVar1) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TVector<double,3> *)(*pcVar4)();
            return pTVar8;
          }
        }
        lVar12 = (longlong)(int)uVar10;
        pFVar3 = (pFVar2->Vertices).AllocatorInstance.Data;
        dVar13 = (double)*(float *)(pFVar3 + lVar12 * 0xc + 8);
        dVar15 = (double)*(float *)(pFVar3 + lVar12 * 0xc + 4);
        dVar16 = (double)*(float *)(pFVar3 + lVar12 * 0xc);
      }
      else {
        uVar9 = 0;
        if ((int)uVar10 < iVar1) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TVector<double,3> *)(*pcVar4)();
            return pTVar8;
          }
        }
        lVar12 = (longlong)(int)uVar10;
        dVar16 = *(double *)param_1;
        dVar15 = *(double *)&param_1->field_0x8;
        dVar13 = *(double *)&param_1->field_0x10;
        pFVar3 = (pFVar2->Vertices).AllocatorInstance.Data;
        dVar5 = __real_3ff0000000000000 / SQRT(dVar15 * dVar15 + dVar16 * dVar16 + dVar13 * dVar13);
        dVar13 = (double)((float)(dVar13 * dVar5 * param_2) + *(float *)(pFVar3 + lVar12 * 0xc + 8))
        ;
        dVar15 = (double)((float)(dVar15 * dVar5 * param_2) + *(float *)(pFVar3 + lVar12 * 0xc + 4))
        ;
        dVar16 = (double)((float)(dVar16 * dVar5 * param_2) + *(float *)(pFVar3 + lVar12 * 0xc));
      }
      goto LAB_1438d7abc;
    }
  }
  dVar13 = 0.0;
  dVar15 = 0.0;
  dVar16 = 0.0;
LAB_1438d7abc:
  *(double *)__return_storage_ptr__ = dVar16;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar15;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar13;
  return __return_storage_ptr__;
}

// SupportCore @ 1438d7b10

TVector<double,3> * __thiscall
Chaos::TGJKShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_>::SupportCore
          (TGJKShape<Chaos::TImplicitObjectScaled<Chaos::FConvex,1>_> *this,
          TVector<double,3> *__return_storage_ptr__,TVector<double,3> *param_1,double param_2,
          double *param_3,int *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  TImplicitObjectScaled<Chaos::FConvex,1> *pTVar7;
  FConvex *pFVar8;
  FScriptContainerElement *pFVar9;
  code *pcVar10;
  bool bVar11;
  uint uVar12;
  TVector<double,3> *pTVar13;
  double *pdVar14;
  uint uVar15;
  longlong lVar16;
  uint uVar17;
  longlong lVar18;
  undefined8 uVar19;
  float fVar20;
  double dVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  double local_e8;
  double dStack_e0;
  double local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  
  pTVar7 = this->Shape;
  fVar1 = *(float *)&pTVar7->_padding_;
  fVar2 = *(float *)((longlong)&pTVar7->_padding_ + 4);
  uVar17 = 0xffffffff;
  pFVar8 = (pTVar7->MObject).Reference;
  uVar15 = 0;
  lVar16 = (longlong)(pFVar8->Vertices).ArrayNum;
  dVar4 = *(double *)param_1;
  dVar5 = *(double *)&param_1->field_0x8;
  fVar3 = *(float *)&pTVar7->_padding_;
  dVar6 = *(double *)&param_1->field_0x10;
  if (lVar16 < 1) {
    *param_4 = -1;
  }
  else {
    lVar18 = 0;
    fVar24 = __real_ff7fffff;
    do {
      uVar12 = 0;
      if ((int)uVar15 < (pFVar8->Vertices).ArrayNum) {
        uVar12 = ~uVar15 >> 0x1f;
      }
      if ((uVar12 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        pTVar13 = (TVector<double,3> *)(*pcVar10)();
        return pTVar13;
      }
      pFVar9 = (pFVar8->Vertices).AllocatorInstance.Data;
      fVar20 = (float)((double)fVar2 * dVar5) * *(float *)(pFVar9 + lVar18 + 4) +
               (float)((double)fVar1 * dVar4) * *(float *)(pFVar9 + lVar18) +
               (float)((double)fVar3 * dVar6) * *(float *)(pFVar9 + lVar18 + 8);
      if (fVar24 < fVar20) {
        fVar24 = fVar20;
        uVar17 = uVar15;
      }
      uVar15 = uVar15 + 1;
      lVar18 = lVar18 + 0xc;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    *param_4 = uVar17;
    if (uVar17 != 0xffffffff) {
      uVar15 = 0;
      if ((int)uVar17 < (pFVar8->Vertices).ArrayNum) {
        uVar15 = ~uVar17 >> 0x1f;
      }
      if ((uVar15 == 0) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar11)) {
        pcVar10 = (code *)swi(3);
        pTVar13 = (TVector<double,3> *)(*pcVar10)();
        return pTVar13;
      }
      lVar16 = (longlong)(int)uVar17;
      pFVar9 = (pFVar8->Vertices).AllocatorInstance.Data;
      local_d0 = (double)*(float *)(pFVar9 + lVar16 * 0xc);
      local_c8 = (double)*(float *)(pFVar9 + lVar16 * 0xc + 4);
      local_c0 = (double)*(float *)(pFVar9 + lVar16 * 0xc + 8);
      goto LAB_1438d7d04;
    }
  }
  local_d0 = 0.0;
  local_c8 = 0.0;
  local_c0 = 0.0;
LAB_1438d7d04:
  local_c0 = (double)*(float *)&pTVar7->_padding_ * local_c0;
  local_c8 = (double)*(float *)((longlong)&pTVar7->_padding_ + 4) * local_c8;
  local_d0 = (double)*(float *)&pTVar7->_padding_ * local_d0;
  if (param_2 <= 0.0) {
    pdVar14 = &local_d0;
  }
  else {
    dVar4 = *(double *)param_1;
    dVar5 = *(double *)&param_1->field_0x8;
    dVar6 = *(double *)&param_1->field_0x10;
    dVar21 = dVar4 * dVar4 + dVar5 * dVar5 + dVar6 * dVar6;
    if (dVar21 == __real_3ff0000000000000) {
      uVar19 = *(double *)&param_1->field_0x8;
      uVar22 = *(double *)param_1;
      uVar23 = *(double *)&param_1->field_0x10;
    }
    else {
      uVar19 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
      uVar22 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
      uVar23 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
      if (__real_3e45798ee0000000 <= dVar21) {
        dVar21 = __real_3ff0000000000000 / SQRT(dVar21);
        uVar19 = dVar5 * dVar21;
        uVar22 = dVar4 * dVar21;
        uVar23 = dVar6 * dVar21;
      }
    }
    pdVar14 = &local_e8;
    local_e8 = (double)uVar22 * param_2 + local_d0;
    dStack_e0 = (double)uVar19 * param_2 + local_c8;
    local_d8 = (double)uVar23 * param_2 + local_c0;
  }
  dVar5 = pdVar14[1];
  dVar4 = pdVar14[2];
  *(double *)__return_storage_ptr__ = *pdVar14;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar5;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar4;
  return __return_storage_ptr__;
}

// SupportCore @ 1438d7ea0

TVector<double,3> * __thiscall
Chaos::TGJKShape<Chaos::TTriangle<double>_>::SupportCore
          (TGJKShape<Chaos::TTriangle<double>_> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,double param_2,double *param_3,int *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  TTriangle<double> *pTVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  pTVar4 = this->Shape;
  dVar1 = *(double *)param_1;
  dVar2 = *(double *)&param_1->field_0x8;
  dVar3 = *(double *)&param_1->field_0x10;
  dVar11 = dVar2 * *(double *)&pTVar4->ABC[0].field_0x8 + dVar1 * *(double *)pTVar4->ABC +
           dVar3 * *(double *)&pTVar4->ABC[0].field_0x10;
  dVar10 = dVar2 * *(double *)&pTVar4->ABC[1].field_0x8 + dVar1 * *(double *)(pTVar4->ABC + 1) +
           dVar3 * *(double *)&pTVar4->ABC[1].field_0x10;
  dVar12 = dVar2 * *(double *)&pTVar4->ABC[2].field_0x8 + dVar1 * *(double *)(pTVar4->ABC + 2) +
           dVar3 * *(double *)&pTVar4->ABC[2].field_0x10;
  if ((dVar11 < dVar10) || (dVar11 < dVar12)) {
    if ((dVar10 < dVar11) || (dVar10 < dVar12)) {
      *param_4 = 2;
      if (param_2 != 0.0) {
        dVar12 = __real_3ff0000000000000 / SQRT(dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3);
        dVar10 = *(double *)&pTVar4->ABC[2].field_0x8;
        dVar11 = *(double *)&pTVar4->ABC[2].field_0x10;
        *(double *)__return_storage_ptr__ = dVar1 * dVar12 * param_2 + *(double *)(pTVar4->ABC + 2);
        *(double *)&__return_storage_ptr__->field_0x8 = dVar2 * dVar12 * param_2 + dVar10;
        *(double *)&__return_storage_ptr__->field_0x10 = dVar3 * dVar12 * param_2 + dVar11;
        return __return_storage_ptr__;
      }
      uVar5 = *(undefined4 *)(pTVar4->ABC + 2);
      uVar6 = *(undefined4 *)&pTVar4->ABC[2].field_0x4;
      uVar7 = *(undefined4 *)&pTVar4->ABC[2].field_0x8;
      uVar8 = *(undefined4 *)&pTVar4->ABC[2].field_0xc;
      uVar9 = *(undefined8 *)&pTVar4->ABC[2].field_0x10;
    }
    else {
      *param_4 = 1;
      if (param_2 != 0.0) {
        dVar12 = __real_3ff0000000000000 / SQRT(dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3);
        dVar10 = *(double *)&pTVar4->ABC[1].field_0x8;
        dVar11 = *(double *)&pTVar4->ABC[1].field_0x10;
        *(double *)__return_storage_ptr__ = dVar1 * dVar12 * param_2 + *(double *)(pTVar4->ABC + 1);
        *(double *)&__return_storage_ptr__->field_0x8 = dVar2 * dVar12 * param_2 + dVar10;
        *(double *)&__return_storage_ptr__->field_0x10 = dVar3 * dVar12 * param_2 + dVar11;
        return __return_storage_ptr__;
      }
      uVar5 = *(undefined4 *)(pTVar4->ABC + 1);
      uVar6 = *(undefined4 *)&pTVar4->ABC[1].field_0x4;
      uVar7 = *(undefined4 *)&pTVar4->ABC[1].field_0x8;
      uVar8 = *(undefined4 *)&pTVar4->ABC[1].field_0xc;
      uVar9 = *(undefined8 *)&pTVar4->ABC[1].field_0x10;
    }
  }
  else {
    *param_4 = 0;
    if (param_2 != 0.0) {
      dVar12 = __real_3ff0000000000000 / SQRT(dVar2 * dVar2 + dVar1 * dVar1 + dVar3 * dVar3);
      dVar10 = *(double *)&pTVar4->ABC[0].field_0x8;
      dVar11 = *(double *)&pTVar4->ABC[0].field_0x10;
      *(double *)__return_storage_ptr__ = dVar1 * dVar12 * param_2 + *(double *)pTVar4->ABC;
      *(double *)&__return_storage_ptr__->field_0x8 = dVar2 * dVar12 * param_2 + dVar10;
      *(double *)&__return_storage_ptr__->field_0x10 = dVar3 * dVar12 * param_2 + dVar11;
      return __return_storage_ptr__;
    }
    uVar5 = *(undefined4 *)pTVar4->ABC;
    uVar6 = *(undefined4 *)&pTVar4->ABC[0].field_0x4;
    uVar7 = *(undefined4 *)&pTVar4->ABC[0].field_0x8;
    uVar8 = *(undefined4 *)&pTVar4->ABC[0].field_0xc;
    uVar9 = *(undefined8 *)&pTVar4->ABC[0].field_0x10;
  }
  *(undefined4 *)__return_storage_ptr__ = uVar5;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = uVar6;
  *(undefined4 *)&__return_storage_ptr__->field_0x8 = uVar7;
  *(undefined4 *)&__return_storage_ptr__->field_0xc = uVar8;
  *(undefined8 *)&__return_storage_ptr__->field_0x10 = uVar9;
  return __return_storage_ptr__;
}

// SupportCore @ 1438d8170

TVector<double,3> * __thiscall
Chaos::TGJKShape<Chaos::FConvex>::SupportCore
          (TGJKShape<Chaos::FConvex> *this,TVector<double,3> *__return_storage_ptr__,
          TVector<double,3> *param_1,double param_2,double *param_3,int *param_4)

{
  int iVar1;
  FConvex *pFVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  uint uVar7;
  TVector<double,3> *pTVar8;
  uint uVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  double dVar13;
  float fVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  
  pFVar2 = this->Shape;
  uVar10 = 0xffffffff;
  uVar9 = 0;
  lVar12 = (longlong)(pFVar2->Vertices).ArrayNum;
  dVar13 = *(double *)param_1;
  dVar15 = *(double *)&param_1->field_0x8;
  dVar16 = *(double *)&param_1->field_0x10;
  if (lVar12 < 1) {
    *param_4 = -1;
  }
  else {
    lVar11 = 0;
    fVar17 = __real_ff7fffff;
    do {
      uVar7 = 0;
      if ((int)uVar9 < (pFVar2->Vertices).ArrayNum) {
        uVar7 = ~uVar9 >> 0x1f;
      }
      if (uVar7 == 0) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar6) {
          pcVar4 = (code *)swi(3);
          pTVar8 = (TVector<double,3> *)(*pcVar4)();
          return pTVar8;
        }
      }
      pFVar3 = (pFVar2->Vertices).AllocatorInstance.Data;
      fVar14 = (float)dVar15 * *(float *)(pFVar3 + lVar11 + 4) +
               (float)dVar13 * *(float *)(pFVar3 + lVar11) +
               (float)dVar16 * *(float *)(pFVar3 + lVar11 + 8);
      if (fVar17 < fVar14) {
        fVar17 = fVar14;
        uVar10 = uVar9;
      }
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0xc;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *param_4 = uVar10;
    if (uVar10 != 0xffffffff) {
      iVar1 = (pFVar2->Vertices).ArrayNum;
      if (param_2 == 0.0) {
        uVar9 = 0;
        if ((int)uVar10 < iVar1) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TVector<double,3> *)(*pcVar4)();
            return pTVar8;
          }
        }
        lVar12 = (longlong)(int)uVar10;
        pFVar3 = (pFVar2->Vertices).AllocatorInstance.Data;
        dVar13 = (double)*(float *)(pFVar3 + lVar12 * 0xc + 8);
        dVar15 = (double)*(float *)(pFVar3 + lVar12 * 0xc + 4);
        dVar16 = (double)*(float *)(pFVar3 + lVar12 * 0xc);
      }
      else {
        uVar9 = 0;
        if ((int)uVar10 < iVar1) {
          uVar9 = ~uVar10 >> 0x1f;
        }
        if (uVar9 == 0) {
          bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar6) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TVector<double,3> *)(*pcVar4)();
            return pTVar8;
          }
        }
        lVar12 = (longlong)(int)uVar10;
        dVar16 = *(double *)param_1;
        dVar15 = *(double *)&param_1->field_0x8;
        dVar13 = *(double *)&param_1->field_0x10;
        pFVar3 = (pFVar2->Vertices).AllocatorInstance.Data;
        dVar5 = __real_3ff0000000000000 / SQRT(dVar15 * dVar15 + dVar16 * dVar16 + dVar13 * dVar13);
        dVar13 = (double)((float)(dVar13 * dVar5 * param_2) + *(float *)(pFVar3 + lVar12 * 0xc + 8))
        ;
        dVar15 = (double)((float)(dVar15 * dVar5 * param_2) + *(float *)(pFVar3 + lVar12 * 0xc + 4))
        ;
        dVar16 = (double)((float)(dVar16 * dVar5 * param_2) + *(float *)(pFVar3 + lVar12 * 0xc));
      }
      goto LAB_1438d83fb;
    }
  }
  dVar13 = 0.0;
  dVar15 = 0.0;
  dVar16 = 0.0;
LAB_1438d83fb:
  *(double *)__return_storage_ptr__ = dVar16;
  *(double *)&__return_storage_ptr__->field_0x8 = dVar15;
  *(double *)&__return_storage_ptr__->field_0x10 = dVar13;
  return __return_storage_ptr__;
}

