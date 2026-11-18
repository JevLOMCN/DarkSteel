// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Renderer
// Functions: 5

// operator+ @ 14485e8b0

TBoxSphereBounds<double,double> * __thiscall
UE::Math::TBoxSphereBounds<double,double>::operator+
          (TBoxSphereBounds<double,double> *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined1 auVar10 [16];
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  
  dVar11 = (this->BoxExtent).field0_0x0._s_0.X;
  dVar17 = (this->BoxExtent).field0_0x0._s_0.Y;
  dVar1 = (this->BoxExtent).field0_0x0._s_0.Z;
  dVar14 = (this->Origin).field0_0x0._s_0.X - dVar11;
  dVar11 = dVar11 + (this->Origin).field0_0x0._s_0.X;
  dVar16 = (this->Origin).field0_0x0._s_0.Y - dVar17;
  dVar17 = dVar17 + (this->Origin).field0_0x0._s_0.Y;
  dVar13 = (this->Origin).field0_0x0._s_0.Z - dVar1;
  dVar1 = dVar1 + (this->Origin).field0_0x0._s_0.Z;
  dVar15 = dVar14;
  if (dVar11 <= dVar14) {
    dVar15 = dVar11;
  }
  dVar8 = dVar16;
  if (dVar17 <= dVar16) {
    dVar8 = dVar17;
  }
  if (dVar16 <= dVar17) {
    dVar16 = dVar17;
  }
  dVar17 = (param_1->BoxExtent).field0_0x0._s_0.Y;
  if (dVar14 <= dVar11) {
    dVar14 = dVar11;
  }
  dVar11 = (param_1->BoxExtent).field0_0x0._s_0.Z;
  dVar9 = dVar13;
  if (dVar13 <= dVar1) {
    dVar9 = dVar1;
  }
  if (dVar1 <= dVar13) {
    dVar13 = dVar1;
  }
  dVar1 = (param_1->BoxExtent).field0_0x0._s_0.X;
  dVar6 = (param_1->Origin).field0_0x0._s_0.Y - dVar17;
  dVar17 = dVar17 + (param_1->Origin).field0_0x0._s_0.Y;
  dVar5 = (param_1->Origin).field0_0x0._s_0.X - dVar1;
  dVar1 = dVar1 + (param_1->Origin).field0_0x0._s_0.X;
  dVar7 = (param_1->Origin).field0_0x0._s_0.Z - dVar11;
  dVar11 = dVar11 + (param_1->Origin).field0_0x0._s_0.Z;
  if (dVar6 <= dVar8) {
    dVar8 = dVar6;
  }
  if (dVar14 <= dVar5) {
    dVar14 = dVar5;
  }
  if (dVar16 <= dVar6) {
    dVar16 = dVar6;
  }
  if (dVar5 <= dVar15) {
    dVar15 = dVar5;
  }
  if (dVar9 <= dVar7) {
    dVar9 = dVar7;
  }
  dVar5 = dVar17;
  if (dVar8 <= dVar17) {
    dVar5 = dVar8;
  }
  dVar8 = dVar1;
  if (dVar1 <= dVar14) {
    dVar8 = dVar14;
  }
  if (dVar17 <= dVar16) {
    dVar17 = dVar16;
  }
  if (dVar15 <= dVar1) {
    dVar1 = dVar15;
  }
  dVar14 = dVar11;
  if (dVar11 <= dVar9) {
    dVar14 = dVar9;
  }
  if (dVar7 <= dVar13) {
    dVar13 = dVar7;
  }
  auVar18._8_8_ = 0;
  auVar18._0_8_ = dVar13;
  dVar17 = dVar17 - dVar5;
  if (dVar13 <= dVar11) {
    dVar11 = dVar13;
  }
  dVar15 = dVar17 * __real_3fe0000000000000;
  dVar16 = (dVar8 - dVar1) * __real_3fe0000000000000;
  dVar14 = dVar14 - dVar11;
  auVar12._0_8_ = dVar15 + dVar5;
  auVar12._8_8_ = 0;
  dVar13 = dVar14 * __real_3fe0000000000000;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X = dVar16 + dVar1;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = auVar12._0_8_;
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar13 + dVar11;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar16;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar15;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar13;
  dVar11 = (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X;
  auVar10._0_8_ = dVar11 * dVar11;
  auVar10._8_8_ = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (dVar14 * dVar14 + dVar17 * dVar17) * __real_3fd0000000000000 + auVar10._0_8_;
  auVar18 = sqrtpd(auVar18,auVar2);
  dVar15 = auVar18._0_8_;
  __return_storage_ptr__->SphereRadius = dVar15;
  dVar1 = (param_1->Origin).field0_0x0._s_0.Y - (__return_storage_ptr__->Origin).field0_0x0._s_0.Y;
  dVar11 = (this->Origin).field0_0x0._s_0.Y - (__return_storage_ptr__->Origin).field0_0x0._s_0.Y;
  dVar17 = (param_1->Origin).field0_0x0._s_0.X - (__return_storage_ptr__->Origin).field0_0x0._s_0.X;
  dVar16 = (this->Origin).field0_0x0._s_0.X - (__return_storage_ptr__->Origin).field0_0x0._s_0.X;
  dVar13 = (param_1->Origin).field0_0x0._s_0.Z - (__return_storage_ptr__->Origin).field0_0x0._s_0.Z;
  dVar14 = (this->Origin).field0_0x0._s_0.Z - (__return_storage_ptr__->Origin).field0_0x0._s_0.Z;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = dVar1 * dVar1 + dVar17 * dVar17 + dVar13 * dVar13;
  auVar18 = sqrtpd(auVar10,auVar4);
  dVar17 = auVar18._0_8_ + param_1->SphereRadius;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = dVar11 * dVar11 + dVar16 * dVar16 + dVar14 * dVar14;
  auVar18 = sqrtpd(auVar12,auVar3);
  dVar11 = auVar18._0_8_ + this->SphereRadius;
  if (dVar11 <= dVar17) {
    dVar11 = dVar17;
  }
  if (dVar15 <= dVar11) {
    dVar11 = dVar15;
  }
  __return_storage_ptr__->SphereRadius = dVar11;
  return __return_storage_ptr__;
}

// TransformBy @ 1448ab210

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TBoxSphereBounds<double,double> * __thiscall
UE::Math::TBoxSphereBounds<double,double>::TransformBy
          (TBoxSphereBounds<double,double> *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TMatrix<double> *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auVar4 [16];
  double dVar5;
  double dVar6;
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined1 auVar20 [16];
  double dVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined4 local_d0;
  undefined4 uStack_cc;
  
  dVar1 = (this->BoxExtent).field0_0x0._s_0.Z;
  dVar10 = param_1->M[0][0];
  dVar11 = param_1->M[0][1];
  dVar12 = param_1->M[2][0];
  dVar13 = param_1->M[2][1];
  dVar2 = (this->Origin).field0_0x0._s_0.Z;
  dVar14 = param_1->M[0][2];
  dVar15 = param_1->M[2][2];
  dVar16 = param_1->M[1][2];
  dVar17 = param_1->M[1][0];
  dVar18 = param_1->M[1][1];
  dVar3 = (this->BoxExtent).field0_0x0._s_0.X;
  dVar8 = (this->BoxExtent).field0_0x0._s_0.Y;
  auVar23 = *(undefined1 (*) [16])&(this->Origin).field0_0x0;
  dVar21 = auVar23._0_8_;
  dVar9 = auVar23._8_8_;
  dVar5 = (double)CONCAT44((uint)((ulonglong)(dVar8 * dVar17) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar8 * dVar17,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dVar3 * dVar10) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3 * dVar10,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dVar1 * dVar12) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1 * dVar12,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar6 = (double)CONCAT44((uint)((ulonglong)(dVar8 * dVar18) >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar8 * dVar18,0) & _UNK_15061cc88) +
          (double)CONCAT44((uint)((ulonglong)(dVar3 * dVar11) >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar3 * dVar11,0) & _UNK_15061cc88) +
          (double)CONCAT44((uint)((ulonglong)(dVar1 * dVar13) >> 0x20) & _UNK_15061cc8c,
                           SUB84(dVar1 * dVar13,0) & _UNK_15061cc88);
  auVar20._8_4_ = auVar23._8_4_;
  auVar20._0_8_ = dVar9;
  auVar20._12_4_ = auVar23._12_4_;
  auVar22._0_8_ = dVar17 * dVar17 + dVar10 * dVar10 + dVar12 * dVar12;
  auVar22._8_8_ = dVar18 * dVar18 + dVar11 * dVar11 + dVar13 * dVar13;
  auVar23._8_4_ = SUB84(auVar22._8_8_,0);
  auVar23._0_8_ = auVar22._8_8_;
  auVar23._12_4_ = (int)((ulonglong)auVar22._8_8_ >> 0x20);
  auVar23 = maxpd(auVar22,auVar23);
  dVar19 = dVar16 * dVar16 + dVar14 * dVar14 + dVar15 * dVar15;
  dVar8 = (double)CONCAT44((uint)((ulonglong)(dVar8 * dVar16) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar8 * dVar16,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dVar3 * dVar14) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar3 * dVar14,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) +
          (double)CONCAT44((uint)((ulonglong)(dVar1 * dVar15) >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1 * dVar15,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff);
  dVar3 = param_1->M[3][1];
  dVar1 = param_1->M[3][2];
  auVar7._8_4_ = SUB84(dVar19,0);
  auVar7._0_8_ = dVar19;
  auVar7._12_4_ = (int)((ulonglong)dVar19 >> 0x20);
  auVar23 = maxpd(auVar23,auVar7);
  (__return_storage_ptr__->Origin).field0_0x0._s_0.X =
       dVar9 * dVar17 + dVar21 * dVar10 + dVar2 * dVar12 + param_1->M[3][0];
  (__return_storage_ptr__->Origin).field0_0x0._s_0.Y =
       auVar20._8_8_ * dVar18 + dVar21 * dVar11 + dVar2 * dVar13 + dVar3;
  dVar19 = SQRT(dVar8 * dVar8 + dVar5 * dVar5 + dVar6 * dVar6);
  dVar3 = SQRT(auVar23._0_8_) * this->SphereRadius;
  if (dVar3 <= dVar19) {
    dVar19 = dVar3;
  }
  local_d0 = SUB84(dVar5,0);
  uStack_cc = (undefined4)((ulonglong)dVar5 >> 0x20);
  auVar4._8_4_ = local_d0;
  auVar4._0_8_ = dVar9 * dVar16 + dVar21 * dVar14 + dVar2 * dVar15 + dVar1;
  auVar4._12_4_ = uStack_cc;
  *(undefined1 (*) [16])((longlong)&(__return_storage_ptr__->Origin).field0_0x0 + 0x10) = auVar4;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar6;
  (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar8;
  __return_storage_ptr__->SphereRadius = dVar19;
  return __return_storage_ptr__;
}

// Append @ 144a6b480

Builder * __thiscall
UE::Math::TBoxSphereBounds<double,double>::Builder::Append
          (Builder *this,TBoxSphereBounds<double,double> *param_1)

{
  double dVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  TBoxSphereBounds<double,double> *pTVar12;
  Builder *pBVar13;
  TBoxSphereBounds<double,double> local_48;
  
  if ((this->BoxSphereBounds).bIsSet == false) {
    dVar1 = (param_1->Origin).field0_0x0._s_0.Y;
    (this->BoxSphereBounds).TypedValue.Origin.field0_0x0._s_0.X =
         (param_1->Origin).field0_0x0._s_0.X;
    (this->BoxSphereBounds).TypedValue.Origin.field0_0x0._s_0.Y = dVar1;
    dVar1 = (param_1->BoxExtent).field0_0x0._s_0.X;
    (this->BoxSphereBounds).TypedValue.Origin.field0_0x0._s_0.Z =
         (param_1->Origin).field0_0x0._s_0.Z;
    (this->BoxSphereBounds).TypedValue.BoxExtent.field0_0x0._s_0.X = dVar1;
    dVar1 = (param_1->BoxExtent).field0_0x0._s_0.Z;
    (this->BoxSphereBounds).TypedValue.BoxExtent.field0_0x0._s_0.Y =
         (param_1->BoxExtent).field0_0x0._s_0.Y;
    (this->BoxSphereBounds).TypedValue.BoxExtent.field0_0x0._s_0.Z = dVar1;
    (this->BoxSphereBounds).TypedValue.SphereRadius = param_1->SphereRadius;
    (this->BoxSphereBounds).bIsSet = true;
    return this;
  }
  pTVar12 = TBoxSphereBounds<double,double>::operator+
                      ((TBoxSphereBounds<double,double> *)this,&local_48,param_1);
  dVar7 = (pTVar12->Origin).field0_0x0._s_0.Z;
  dVar8 = (pTVar12->BoxExtent).field0_0x0._s_0.X;
  uVar3 = *(undefined4 *)&(pTVar12->Origin).field0_0x0;
  uVar4 = *(undefined4 *)((longlong)&(pTVar12->Origin).field0_0x0 + 4);
  uVar5 = *(undefined4 *)((longlong)&(pTVar12->Origin).field0_0x0 + 8);
  uVar6 = *(undefined4 *)((longlong)&(pTVar12->Origin).field0_0x0 + 0xc);
  dVar9 = (pTVar12->BoxExtent).field0_0x0._s_0.Y;
  dVar10 = (pTVar12->BoxExtent).field0_0x0._s_0.Z;
  dVar1 = pTVar12->SphereRadius;
  if (((this->BoxSphereBounds).bIsSet == false) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsSet()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                          ,0x1bd,
                          L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                         ), bVar11)) {
    pcVar2 = (code *)swi(3);
    pBVar13 = (Builder *)(*pcVar2)();
    return pBVar13;
  }
  *(undefined4 *)&(this->BoxSphereBounds).TypedValue.Origin.field0_0x0 = uVar3;
  *(undefined4 *)((longlong)&(this->BoxSphereBounds).TypedValue.Origin.field0_0x0 + 4) = uVar4;
  *(undefined4 *)((longlong)&(this->BoxSphereBounds).TypedValue.Origin.field0_0x0 + 8) = uVar5;
  *(undefined4 *)((longlong)&(this->BoxSphereBounds).TypedValue.Origin.field0_0x0 + 0xc) = uVar6;
  (this->BoxSphereBounds).TypedValue.Origin.field0_0x0._s_0.Z = dVar7;
  (this->BoxSphereBounds).TypedValue.BoxExtent.field0_0x0._s_0.X = dVar8;
  (this->BoxSphereBounds).TypedValue.BoxExtent.field0_0x0._s_0.Y = dVar9;
  (this->BoxSphereBounds).TypedValue.BoxExtent.field0_0x0._s_0.Z = dVar10;
  (this->BoxSphereBounds).TypedValue.SphereRadius = dVar1;
  return this;
}

// TransformBy @ 144b4b2b0

TBoxSphereBounds<double,double> * __thiscall
UE::Math::TBoxSphereBounds<double,double>::TransformBy
          (TBoxSphereBounds<double,double> *this,
          TBoxSphereBounds<double,double> *__return_storage_ptr__,TTransform<double> *param_1)

{
  TMatrix<double> local_88;
  
  TTransform<double>::ToMatrixWithScale(param_1,&local_88);
  TransformBy(this,__return_storage_ptr__,&local_88);
  return __return_storage_ptr__;
}

// ContainsNaN @ 145425e60

bool __thiscall
UE::Math::TBoxSphereBounds<double,double>::ContainsNaN(TBoxSphereBounds<double,double> *this)

{
  int iVar1;
  
  iVar1 = _finite((this->Origin).field0_0x0._s_0.X);
  if (iVar1 != 0) {
    iVar1 = _finite((this->Origin).field0_0x0._s_0.Y);
    if (iVar1 != 0) {
      iVar1 = _finite((this->Origin).field0_0x0._s_0.Z);
      if (iVar1 != 0) {
        iVar1 = _finite((this->BoxExtent).field0_0x0._s_0.X);
        if (iVar1 != 0) {
          iVar1 = _finite((this->BoxExtent).field0_0x0._s_0.Y);
          if (iVar1 != 0) {
            iVar1 = _finite((this->BoxExtent).field0_0x0._s_0.Z);
            if (iVar1 != 0) {
              iVar1 = _finite(this->SphereRadius);
              if (iVar1 != 0) {
                return false;
              }
            }
          }
        }
      }
    }
  }
  return true;
}

