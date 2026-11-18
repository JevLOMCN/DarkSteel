// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Core
// Functions: 13

// FColorSpace @ 14147cb80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FColorSpace * __thiscall
UE::Color::FColorSpace::FColorSpace
          (FColorSpace *this,TVector2<double> *param_1,TVector2<double> *param_2,
          TVector2<double> *param_3,TVector2<double> *param_4)

{
  double dVar1;
  double dVar2;
  bool bVar3;
  TMatrix<double> *pTVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_b8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  dVar2 = __real_3e7ad7f29abcaf48;
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  dVar1 = (param_1->field0_0x0)._s_0.Y;
  (this->Chromaticities).Elements[0].field0_0x0._s_0.X = (param_1->field0_0x0)._s_0.X;
  (this->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_2->field0_0x0)._s_0.Y;
  (this->Chromaticities).Elements[1].field0_0x0._s_0.X = (param_2->field0_0x0)._s_0.X;
  (this->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_3->field0_0x0)._s_0.Y;
  (this->Chromaticities).Elements[2].field0_0x0._s_0.X = (param_3->field0_0x0)._s_0.X;
  (this->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_4->field0_0x0)._s_0.Y;
  (this->Chromaticities).Elements[3].field0_0x0._s_0.X = (param_4->field0_0x0)._s_0.X;
  (this->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->Chromaticities).Elements[0].field0_0x0._s_0.X - ___real_3fe47ae147ae147b;
  uVar5 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  if (((((dVar2 <= (double)CONCAT44(uVar6,uVar5) && (double)CONCAT44(uVar6,uVar5) != dVar2) ||
        (dVar1 = (this->Chromaticities).Elements[0].field0_0x0._s_0.Y - __real_3fd51eb851eb851f,
        uVar5 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
        uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
        dVar2 <= (double)CONCAT44(uVar6,uVar5) && (double)CONCAT44(uVar6,uVar5) != dVar2)) ||
       (dVar1 = (this->Chromaticities).Elements[1].field0_0x0._s_0.X - __real_3fd3333333333333,
       uVar5 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       dVar2 <= (double)CONCAT44(uVar6,uVar5) && (double)CONCAT44(uVar6,uVar5) != dVar2)) ||
      ((dVar1 = (this->Chromaticities).Elements[1].field0_0x0._s_0.Y - __real_3fe3333333333333,
       uVar5 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       dVar2 <= (double)CONCAT44(uVar6,uVar5) && (double)CONCAT44(uVar6,uVar5) != dVar2 ||
       (dVar1 = (this->Chromaticities).Elements[2].field0_0x0._s_0.X - ___real_3fc3333333333333,
       uVar5 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       dVar2 <= (double)CONCAT44(uVar6,uVar5) && (double)CONCAT44(uVar6,uVar5) != dVar2)))) ||
     ((dVar1 = (this->Chromaticities).Elements[2].field0_0x0._s_0.Y - ___real_3faeb851eb851eb8,
      uVar5 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
      uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
      dVar2 <= (double)CONCAT44(uVar6,uVar5) && (double)CONCAT44(uVar6,uVar5) != dVar2 ||
      ((dVar1 = (this->Chromaticities).Elements[3].field0_0x0._s_0.X - ___real_3fd40346dc5d6388,
       uVar5 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       dVar2 <= (double)CONCAT44(uVar6,uVar5) && (double)CONCAT44(uVar6,uVar5) != dVar2 ||
       (dVar1 = (this->Chromaticities).Elements[3].field0_0x0._s_0.Y - ___real_3fd50e5604189375,
       uVar5 = SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff,
       uVar6 = (uint)((ulonglong)dVar1 >> 0x20) & __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
       dVar2 <= (double)CONCAT44(uVar6,uVar5) && (double)CONCAT44(uVar6,uVar5) != dVar2)))))) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  this->bIsSRGB = bVar3;
  pTVar4 = CalcRgbToXYZ(this,&local_98);
  dVar1 = pTVar4->M[0][1];
  (this->RgbToXYZ).M[0][0] = pTVar4->M[0][0];
  (this->RgbToXYZ).M[0][1] = dVar1;
  dVar1 = pTVar4->M[0][3];
  (this->RgbToXYZ).M[0][2] = pTVar4->M[0][2];
  (this->RgbToXYZ).M[0][3] = dVar1;
  dVar1 = pTVar4->M[1][1];
  (this->RgbToXYZ).M[1][0] = pTVar4->M[1][0];
  (this->RgbToXYZ).M[1][1] = dVar1;
  dVar1 = pTVar4->M[1][3];
  (this->RgbToXYZ).M[1][2] = pTVar4->M[1][2];
  (this->RgbToXYZ).M[1][3] = dVar1;
  dVar1 = pTVar4->M[2][1];
  (this->RgbToXYZ).M[2][0] = pTVar4->M[2][0];
  (this->RgbToXYZ).M[2][1] = dVar1;
  dVar1 = pTVar4->M[2][3];
  (this->RgbToXYZ).M[2][2] = pTVar4->M[2][2];
  (this->RgbToXYZ).M[2][3] = dVar1;
  dVar1 = pTVar4->M[3][1];
  (this->RgbToXYZ).M[3][0] = pTVar4->M[3][0];
  (this->RgbToXYZ).M[3][1] = dVar1;
  dVar1 = pTVar4->M[3][3];
  (this->RgbToXYZ).M[3][2] = pTVar4->M[3][2];
  (this->RgbToXYZ).M[3][3] = dVar1;
  pTVar4 = UE::Math::TMatrix<double>::Inverse(&this->RgbToXYZ,&local_98);
  dVar1 = pTVar4->M[0][1];
  (this->XYZToRgb).M[0][0] = pTVar4->M[0][0];
  (this->XYZToRgb).M[0][1] = dVar1;
  dVar1 = pTVar4->M[0][3];
  (this->XYZToRgb).M[0][2] = pTVar4->M[0][2];
  (this->XYZToRgb).M[0][3] = dVar1;
  dVar1 = pTVar4->M[1][1];
  (this->XYZToRgb).M[1][0] = pTVar4->M[1][0];
  (this->XYZToRgb).M[1][1] = dVar1;
  dVar1 = pTVar4->M[1][3];
  (this->XYZToRgb).M[1][2] = pTVar4->M[1][2];
  (this->XYZToRgb).M[1][3] = dVar1;
  dVar1 = pTVar4->M[2][1];
  (this->XYZToRgb).M[2][0] = pTVar4->M[2][0];
  (this->XYZToRgb).M[2][1] = dVar1;
  dVar1 = pTVar4->M[2][3];
  (this->XYZToRgb).M[2][2] = pTVar4->M[2][2];
  (this->XYZToRgb).M[2][3] = dVar1;
  dVar1 = pTVar4->M[3][1];
  (this->XYZToRgb).M[3][0] = pTVar4->M[3][0];
  (this->XYZToRgb).M[3][1] = dVar1;
  dVar1 = pTVar4->M[3][3];
  (this->XYZToRgb).M[3][2] = pTVar4->M[3][2];
  (this->XYZToRgb).M[3][3] = dVar1;
  return this;
}

// FColorSpace @ 14147cd70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FColorSpace * __thiscall UE::Color::FColorSpace::FColorSpace(FColorSpace *this,EColorSpace param_1)

{
  double dVar1;
  TMatrix<double> *pTVar2;
  undefined1 auStack_b8 [32];
  TMatrix<double> local_98;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  MakeChromaticities(&this->Chromaticities,param_1);
  this->bIsSRGB = param_1 == sRGB;
  pTVar2 = CalcRgbToXYZ(this,&local_98);
  dVar1 = pTVar2->M[0][1];
  (this->RgbToXYZ).M[0][0] = pTVar2->M[0][0];
  (this->RgbToXYZ).M[0][1] = dVar1;
  dVar1 = pTVar2->M[0][3];
  (this->RgbToXYZ).M[0][2] = pTVar2->M[0][2];
  (this->RgbToXYZ).M[0][3] = dVar1;
  dVar1 = pTVar2->M[1][1];
  (this->RgbToXYZ).M[1][0] = pTVar2->M[1][0];
  (this->RgbToXYZ).M[1][1] = dVar1;
  dVar1 = pTVar2->M[1][3];
  (this->RgbToXYZ).M[1][2] = pTVar2->M[1][2];
  (this->RgbToXYZ).M[1][3] = dVar1;
  dVar1 = pTVar2->M[2][1];
  (this->RgbToXYZ).M[2][0] = pTVar2->M[2][0];
  (this->RgbToXYZ).M[2][1] = dVar1;
  dVar1 = pTVar2->M[2][3];
  (this->RgbToXYZ).M[2][2] = pTVar2->M[2][2];
  (this->RgbToXYZ).M[2][3] = dVar1;
  dVar1 = pTVar2->M[3][1];
  (this->RgbToXYZ).M[3][0] = pTVar2->M[3][0];
  (this->RgbToXYZ).M[3][1] = dVar1;
  dVar1 = pTVar2->M[3][3];
  (this->RgbToXYZ).M[3][2] = pTVar2->M[3][2];
  (this->RgbToXYZ).M[3][3] = dVar1;
  pTVar2 = UE::Math::TMatrix<double>::Inverse(&this->RgbToXYZ,&local_98);
  dVar1 = pTVar2->M[0][1];
  (this->XYZToRgb).M[0][0] = pTVar2->M[0][0];
  (this->XYZToRgb).M[0][1] = dVar1;
  dVar1 = pTVar2->M[0][3];
  (this->XYZToRgb).M[0][2] = pTVar2->M[0][2];
  (this->XYZToRgb).M[0][3] = dVar1;
  dVar1 = pTVar2->M[1][1];
  (this->XYZToRgb).M[1][0] = pTVar2->M[1][0];
  (this->XYZToRgb).M[1][1] = dVar1;
  dVar1 = pTVar2->M[1][3];
  (this->XYZToRgb).M[1][2] = pTVar2->M[1][2];
  (this->XYZToRgb).M[1][3] = dVar1;
  dVar1 = pTVar2->M[2][1];
  (this->XYZToRgb).M[2][0] = pTVar2->M[2][0];
  (this->XYZToRgb).M[2][1] = dVar1;
  dVar1 = pTVar2->M[2][3];
  (this->XYZToRgb).M[2][2] = pTVar2->M[2][2];
  (this->XYZToRgb).M[2][3] = dVar1;
  dVar1 = pTVar2->M[3][1];
  (this->XYZToRgb).M[3][0] = pTVar2->M[3][0];
  (this->XYZToRgb).M[3][1] = dVar1;
  dVar1 = pTVar2->M[3][3];
  (this->XYZToRgb).M[3][2] = pTVar2->M[3][2];
  (this->XYZToRgb).M[3][3] = dVar1;
  return this;
}

// CalcRgbToXYZ @ 1414885a0

TMatrix<double> * __thiscall
UE::Color::FColorSpace::CalcRgbToXYZ(FColorSpace *this,TMatrix<double> *__return_storage_ptr__)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  TMatrix<double> local_a8;
  
  dVar9 = __real_3ff0000000000000;
  dVar10 = (this->Chromaticities).Elements[0].field0_0x0._s_0.X;
  dVar1 = (this->Chromaticities).Elements[0].field0_0x0._s_0.Y;
  dVar2 = (this->Chromaticities).Elements[2].field0_0x0._s_0.X;
  dVar3 = (this->Chromaticities).Elements[1].field0_0x0._s_0.X;
  dVar4 = (this->Chromaticities).Elements[1].field0_0x0._s_0.Y;
  dVar5 = (this->Chromaticities).Elements[2].field0_0x0._s_0.Y;
  __return_storage_ptr__->M[0][3] = 0.0;
  __return_storage_ptr__->M[1][3] = 0.0;
  __return_storage_ptr__->M[2][3] = 0.0;
  __return_storage_ptr__->M[3][0] = 0.0;
  __return_storage_ptr__->M[3][1] = 0.0;
  __return_storage_ptr__->M[3][2] = 0.0;
  __return_storage_ptr__->M[0][0] = dVar10;
  __return_storage_ptr__->M[0][1] = dVar1;
  __return_storage_ptr__->M[1][0] = dVar3;
  __return_storage_ptr__->M[1][1] = dVar4;
  __return_storage_ptr__->M[2][0] = dVar2;
  __return_storage_ptr__->M[0][2] = (dVar9 - dVar10) - dVar1;
  __return_storage_ptr__->M[2][1] = dVar5;
  __return_storage_ptr__->M[3][3] = 1.0;
  __return_storage_ptr__->M[1][2] = (dVar9 - dVar3) - dVar4;
  __return_storage_ptr__->M[2][2] = (dVar9 - dVar2) - dVar5;
  UE::Math::TMatrix<double>::Inverse(__return_storage_ptr__,&local_a8);
  dVar10 = (this->Chromaticities).Elements[3].field0_0x0._s_0.Y;
  dVar1 = (this->Chromaticities).Elements[3].field0_0x0._s_0.X / dVar10;
  dVar10 = ((dVar9 - (this->Chromaticities).Elements[3].field0_0x0._s_0.X) - dVar10) / dVar10;
  dVar3 = dVar9 * local_a8.M[1][2] + dVar1 * local_a8.M[0][2] + dVar10 * local_a8.M[2][2] +
          local_a8.M[3][2] * 0.0;
  dVar8 = dVar9 * local_a8.M[1][0] + dVar1 * local_a8.M[0][0] + dVar10 * local_a8.M[2][0] +
          local_a8.M[3][0] * 0.0;
  dVar9 = dVar9 * local_a8.M[1][1] + dVar1 * local_a8.M[0][1] + dVar10 * local_a8.M[2][1] +
          local_a8.M[3][1] * 0.0;
  __return_storage_ptr__->M[0][0] = dVar8 * __return_storage_ptr__->M[0][0];
  __return_storage_ptr__->M[2][0] = dVar3 * __return_storage_ptr__->M[2][0];
  dVar4 = __return_storage_ptr__->M[1][1];
  dVar2 = __return_storage_ptr__->M[1][2];
  __return_storage_ptr__->M[1][0] = dVar9 * __return_storage_ptr__->M[1][0];
  dVar10 = __return_storage_ptr__->M[0][2];
  dVar2 = dVar2 * dVar9;
  __return_storage_ptr__->M[0][1] = dVar8 * __return_storage_ptr__->M[0][1];
  dVar5 = __return_storage_ptr__->M[2][1];
  dVar1 = __return_storage_ptr__->M[2][2];
  __return_storage_ptr__->M[0][2] = dVar8 * dVar10;
  dVar1 = dVar1 * dVar3;
  auVar6._8_4_ = SUB84(dVar1,0);
  auVar6._0_8_ = dVar5 * dVar3;
  auVar6._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[2] + 1) = auVar6;
  auVar7._8_4_ = SUB84(dVar2,0);
  auVar7._0_8_ = dVar4 * dVar9;
  auVar7._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
  *(undefined1 (*) [16])(__return_storage_ptr__->M[1] + 1) = auVar7;
  return __return_storage_ptr__;
}

// Equals @ 141493c20

bool __thiscall
UE::Color::FColorSpace::Equals(FColorSpace *this,FColorSpace *param_1,double param_2)

{
  double dVar1;
  
  dVar1 = (this->Chromaticities).Elements[0].field0_0x0._s_0.X -
          (param_1->Chromaticities).Elements[0].field0_0x0._s_0.X;
  if ((((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2
         ) && (dVar1 = (this->Chromaticities).Elements[0].field0_0x0._s_0.Y -
                       (param_1->Chromaticities).Elements[0].field0_0x0._s_0.Y,
              (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              param_2)) &&
       (dVar1 = (this->Chromaticities).Elements[1].field0_0x0._s_0.X -
                (param_1->Chromaticities).Elements[1].field0_0x0._s_0.X,
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2))
      && ((dVar1 = (this->Chromaticities).Elements[1].field0_0x0._s_0.Y -
                   (param_1->Chromaticities).Elements[1].field0_0x0._s_0.Y,
          (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2
          && (dVar1 = (this->Chromaticities).Elements[2].field0_0x0._s_0.X -
                      (param_1->Chromaticities).Elements[2].field0_0x0._s_0.X,
             (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             param_2)))) &&
     ((dVar1 = (this->Chromaticities).Elements[2].field0_0x0._s_0.Y -
               (param_1->Chromaticities).Elements[2].field0_0x0._s_0.Y,
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2 &&
      ((dVar1 = (this->Chromaticities).Elements[3].field0_0x0._s_0.X -
                (param_1->Chromaticities).Elements[3].field0_0x0._s_0.X,
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2 &&
       (dVar1 = (this->Chromaticities).Elements[3].field0_0x0._s_0.Y -
                (param_1->Chromaticities).Elements[3].field0_0x0._s_0.Y,
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2)))
      ))) {
    return true;
  }
  return false;
}

// Equals @ 141493cd0

bool __thiscall
UE::Color::FColorSpace::Equals
          (FColorSpace *this,TStaticArray<UE::Math::TVector2<double>,4,4294967295> *param_1,
          double param_2)

{
  double dVar1;
  
  dVar1 = (this->Chromaticities).Elements[0].field0_0x0._s_0.X -
          param_1->Elements[0].field0_0x0._s_0.X;
  if ((((((double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2
         ) && (dVar1 = (this->Chromaticities).Elements[0].field0_0x0._s_0.Y -
                       param_1->Elements[0].field0_0x0._s_0.Y,
              (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                               __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                               SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
              param_2)) &&
       (dVar1 = (this->Chromaticities).Elements[1].field0_0x0._s_0.X -
                param_1->Elements[1].field0_0x0._s_0.X,
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2))
      && ((dVar1 = (this->Chromaticities).Elements[1].field0_0x0._s_0.Y -
                   param_1->Elements[1].field0_0x0._s_0.Y,
          (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                           __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                           SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2
          && (dVar1 = (this->Chromaticities).Elements[2].field0_0x0._s_0.X -
                      param_1->Elements[2].field0_0x0._s_0.X,
             (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                              __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                              SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <=
             param_2)))) &&
     ((dVar1 = (this->Chromaticities).Elements[2].field0_0x0._s_0.Y -
               param_1->Elements[2].field0_0x0._s_0.Y,
      (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                       __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                       SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2 &&
      ((dVar1 = (this->Chromaticities).Elements[3].field0_0x0._s_0.X -
                param_1->Elements[3].field0_0x0._s_0.X,
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2 &&
       (dVar1 = (this->Chromaticities).Elements[3].field0_0x0._s_0.Y -
                param_1->Elements[3].field0_0x0._s_0.Y,
       (double)CONCAT44((uint)((ulonglong)dVar1 >> 0x20) &
                        __xmm_7fffffffffffffff7fffffffffffffff._4_4_,
                        SUB84(dVar1,0) & (uint)__xmm_7fffffffffffffff7fffffffffffffff) <= param_2)))
      ))) {
    return true;
  }
  return false;
}

// GetLuminance @ 141499520

float __thiscall UE::Color::FColorSpace::GetLuminance(FColorSpace *this,FLinearColor *param_1)

{
  return (float)(this->RgbToXYZ).M[1][1] * (param_1->field0_0x0)._s_0.G +
         (float)(this->RgbToXYZ).M[0][1] * (param_1->field0_0x0)._s_0.R +
         (float)(this->RgbToXYZ).M[2][1] * (param_1->field0_0x0)._s_0.B;
}

// GetLuminanceFactors @ 141499560

FLinearColor * __thiscall
UE::Color::FColorSpace::GetLuminanceFactors(FColorSpace *this,FLinearColor *__return_storage_ptr__)

{
  TVector<double>_u_0 local_28;
  
  local_28._s_0.X = (this->RgbToXYZ).M[0][1];
  local_28._s_0.Y = (this->RgbToXYZ).M[1][1];
  local_28._s_0.Z = (this->RgbToXYZ).M[2][1];
  FLinearColor::FLinearColor(__return_storage_ptr__,(TVector<double> *)&local_28._s_0);
  return __return_storage_ptr__;
}

// GetSRGB @ 14149a3b0

FColorSpace * __cdecl UE::Color::FColorSpace::GetSRGB(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      FColorSpace(&ColorSpaceSRGB,sRGB);
      _Init_thread_footer(&::_TSS0);
      return &ColorSpaceSRGB;
    }
  }
  return &ColorSpaceSRGB;
}

// GetWorking @ 14149a9f0

FColorSpace * __cdecl UE::Color::FColorSpace::GetWorking(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      PreloadWorkingColorSpace();
      ThreadSafeOnce21 = 1;
      _Init_thread_footer(&::_TSS0);
    }
  }
  return &WorkingColorSpace;
}

// IsSRGB @ 14149e380

bool __thiscall UE::Color::FColorSpace::IsSRGB(FColorSpace *this)

{
  return this->bIsSRGB;
}

// MakeChromaticities @ 1414a34a0

TStaticArray<UE::Math::TVector2<double>,4,4294967295> * __cdecl
UE::Color::FColorSpace::MakeChromaticities
          (TStaticArray<UE::Math::TVector2<double>,4,4294967295> *__return_storage_ptr__,
          EColorSpace param_1)

{
  code *pcVar1;
  double dVar2;
  TVector2<double> TVar3;
  bool bVar4;
  TVector2<double> *pTVar5;
  TStaticArray<UE::Math::TVector2<double>,4,4294967295> *pTVar6;
  TVector2<double> local_d8;
  TVector2<double> local_c8;
  TVector2<double> local_b8;
  TVector2<double> local_a8;
  TVector2<double> local_98;
  TVector2<double> local_88;
  TVector2<double> local_78;
  TVector2<double> local_68;
  TVector2<double> local_58;
  TVector2<double> local_48;
  TVector2<double> local_38;
  TVector2<double> local_28;
  TVector2<double> local_18;
  
  TVar3.field0_0x0 = UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  __return_storage_ptr__->Elements[0].field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  __return_storage_ptr__->Elements[1].field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar3.field0_0x0;
  __return_storage_ptr__->Elements[2].field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar3.field0_0x0;
  __return_storage_ptr__->Elements[3].field0_0x0._s_0 = (TVector2<double>_u_0_s_0)TVar3.field0_0x0;
  switch(param_1) {
  case None:
    goto switchD_1414a34e4_caseD_0;
  case sRGB:
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.X = 0.64;
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.Y = 0.33;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.X = 0.3;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.Y = 0.6;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.X = 0.15;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.Y = 0.06;
    pTVar5 = GetWhitePoint(&local_d8,CIE1931_D65);
    dVar2 = (pTVar5->field0_0x0)._s_0.Y;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.Y = dVar2;
    return __return_storage_ptr__;
  case Rec2020:
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.X = 0.708;
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.Y = 0.292;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.X = 0.17;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.Y = 0.797;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.X = 0.131;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.Y = 0.046;
    pTVar5 = GetWhitePoint(&local_c8,CIE1931_D65);
    dVar2 = (pTVar5->field0_0x0)._s_0.Y;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.Y = dVar2;
    return __return_storage_ptr__;
  case ACESAP0:
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.X = 0.7347;
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.Y = 0.2653;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.X = 0.0;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.Y = 1.0;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.X = 0.0001;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.Y = -0.077;
    pTVar5 = GetWhitePoint(&local_b8,ACES_D60);
    dVar2 = (pTVar5->field0_0x0)._s_0.Y;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.Y = dVar2;
    return __return_storage_ptr__;
  case ACESAP1:
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.X = 0.713;
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.Y = 0.293;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.X = 0.165;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.Y = 0.83;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.X = 0.128;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.Y = 0.044;
    pTVar5 = GetWhitePoint(&local_a8,ACES_D60);
    dVar2 = (pTVar5->field0_0x0)._s_0.Y;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.Y = dVar2;
    return __return_storage_ptr__;
  case P3DCI:
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.X = 0.68;
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.Y = 0.32;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.X = 0.265;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.Y = 0.69;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.X = 0.15;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.Y = 0.06;
    pTVar5 = GetWhitePoint(&local_98,DCI_CalibrationWhite);
    dVar2 = (pTVar5->field0_0x0)._s_0.Y;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.Y = dVar2;
    return __return_storage_ptr__;
  case P3D65:
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.X = 0.68;
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.Y = 0.32;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.X = 0.265;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.Y = 0.69;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.X = 0.15;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.Y = 0.06;
    pTVar5 = GetWhitePoint(&local_88,CIE1931_D65);
    dVar2 = (pTVar5->field0_0x0)._s_0.Y;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.Y = dVar2;
    return __return_storage_ptr__;
  case REDWideGamut:
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.X = 0.780308;
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.Y = 0.304253;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.X = 0.121595;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.Y = 1.493994;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.X = 0.095612;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.Y = -0.084589;
    pTVar5 = GetWhitePoint(&local_78,CIE1931_D65);
    dVar2 = (pTVar5->field0_0x0)._s_0.Y;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.Y = dVar2;
    return __return_storage_ptr__;
  case SonySGamut3:
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.X = 0.73;
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.Y = 0.28;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.X = 0.14;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.Y = 0.855;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.X = 0.1;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.Y = -0.05;
    pTVar5 = GetWhitePoint(&local_68,CIE1931_D65);
    dVar2 = (pTVar5->field0_0x0)._s_0.Y;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.Y = dVar2;
    return __return_storage_ptr__;
  case SonySGamut3Cine:
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.X = 0.766;
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.Y = 0.275;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.X = 0.225;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.Y = 0.8;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.X = 0.089;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.Y = -0.087;
    pTVar5 = GetWhitePoint(&local_58,CIE1931_D65);
    dVar2 = (pTVar5->field0_0x0)._s_0.Y;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.Y = dVar2;
    return __return_storage_ptr__;
  case AlexaWideGamut:
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.X = 0.684;
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.Y = 0.313;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.X = 0.221;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.Y = 0.848;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.X = 0.0861;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.Y = -0.102;
    pTVar5 = GetWhitePoint(&local_48,CIE1931_D65);
    dVar2 = (pTVar5->field0_0x0)._s_0.Y;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.Y = dVar2;
    return __return_storage_ptr__;
  case CanonCinemaGamut:
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.X = 0.74;
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.Y = 0.27;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.X = 0.17;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.Y = 1.14;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.X = 0.08;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.Y = -0.1;
    pTVar5 = GetWhitePoint(&local_38,CIE1931_D65);
    dVar2 = (pTVar5->field0_0x0)._s_0.Y;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.Y = dVar2;
    return __return_storage_ptr__;
  case GoProProtuneNative:
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.X = 0.698448;
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.Y = 0.193026;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.X = 0.329555;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.Y = 1.024597;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.X = 0.108443;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.Y = -0.034679;
    pTVar5 = GetWhitePoint(&local_28,CIE1931_D65);
    dVar2 = (pTVar5->field0_0x0)._s_0.Y;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.Y = dVar2;
    return __return_storage_ptr__;
  case PanasonicVGamut:
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.X = 0.73;
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.Y = 0.28;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.X = 0.165;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.Y = 0.84;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.X = 0.1;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.Y = -0.03;
    pTVar5 = GetWhitePoint(&local_18,CIE1931_D65);
    dVar2 = (pTVar5->field0_0x0)._s_0.Y;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.X = (pTVar5->field0_0x0)._s_0.X;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.Y = dVar2;
    return __return_storage_ptr__;
  case PLASA_E1_54:
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.X = 0.7347;
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.Y = 0.2653;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.X = 0.1596;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.Y = 0.8404;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.X = 0.0366;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.Y = 0.0001;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.X = 0.4254;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.Y = 0.4044;
    return __return_storage_ptr__;
  case ACESCAM16:
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.X = 0.8336;
    __return_storage_ptr__->Elements[0].field0_0x0._s_0.Y = 0.1735;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.X = 2.3854;
    __return_storage_ptr__->Elements[1].field0_0x0._s_0.Y = -1.4659;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.X = 0.087;
    __return_storage_ptr__->Elements[2].field0_0x0._s_0.Y = -0.125;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.X = 0.333;
    __return_storage_ptr__->Elements[3].field0_0x0._s_0.Y = 0.333;
    return __return_storage_ptr__;
  default:
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("!\"Enclosing block should never be called\"",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Private\\ColorManagement\\ColorSpace.cpp"
                       ,0xd1,L"");
    if (bVar4) {
      pcVar1 = (code *)swi(3);
      pTVar6 = (TStaticArray<UE::Math::TVector2<double>,4,4294967295> *)(*pcVar1)();
      return pTVar6;
    }
switchD_1414a34e4_caseD_0:
    return __return_storage_ptr__;
  }
}

// MakeFromColorTemperature @ 1414a3c30

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

FLinearColor * __thiscall
UE::Color::FColorSpace::MakeFromColorTemperature
          (FColorSpace *this,FLinearColor *__return_storage_ptr__,float param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  
  if (__real_466a6000 <= param_1) {
    param_1 = __real_466a6000;
  }
  if (param_1 <= __real_447a0000) {
    param_1 = __real_447a0000;
  }
  fVar16 = ((param_1 * ___real_340a20a1 + ___real_39219ace) * param_1 + ___real_3f5c30ad) /
           ((param_1 * ___real_353e175d + ___real_3a5cd5dd) * param_1 + __real_3f800000);
  fVar15 = ((param_1 * ___real_33349873 + ___real_3831567a) * param_1 + ___real_3ea28216) /
           ((__real_3f800000 - param_1 * ___real_37f30d95) + param_1 * ___real_342d5cb4 * param_1);
  fVar11 = __real_3f800000 / (((fVar16 + fVar16) - fVar15 * __real_41000000) + __real_40800000);
  fVar16 = fVar16 * __real_40400000 * fVar11;
  fVar11 = (fVar15 + fVar15) * fVar11;
  dVar12 = __real_3ff0000000000000 / (double)fVar11;
  dVar13 = (double)fVar16 * dVar12;
  dVar12 = (double)((__real_3f800000 - fVar16) - fVar11) * dVar12;
  dVar3 = (this->XYZToRgb).M[0][0];
  dVar4 = (this->XYZToRgb).M[0][1];
  dVar5 = (this->XYZToRgb).M[2][0];
  dVar6 = (this->XYZToRgb).M[2][1];
  dVar1 = (this->XYZToRgb).M[1][0] * __real_3ff0000000000000;
  dVar2 = (this->XYZToRgb).M[1][1] * __real_3ff0000000000000;
  dVar7 = (this->XYZToRgb).M[3][0];
  dVar8 = (this->XYZToRgb).M[3][1];
  dVar9 = (this->XYZToRgb).M[0][2];
  dVar14 = (this->XYZToRgb).M[1][2] * __real_3ff0000000000000;
  dVar10 = (this->XYZToRgb).M[2][2];
  (__return_storage_ptr__->field0_0x0)._s_0.A = 1.0;
  fVar11 = (float)(dVar1 + dVar13 * dVar3 + dVar5 * dVar12 + dVar7 * 0.0);
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  fVar15 = (float)(dVar14 + dVar9 * dVar13 + dVar10 * dVar12 + (this->XYZToRgb).M[3][2] * 0.0);
  (__return_storage_ptr__->field0_0x0)._s_0.R = fVar11;
  fVar11 = (float)(dVar2 + dVar13 * dVar4 + dVar6 * dVar12 + dVar8 * 0.0);
  if (fVar15 <= 0.0) {
    fVar15 = 0.0;
  }
  if (fVar11 <= 0.0) {
    fVar11 = 0.0;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.B = fVar15;
  (__return_storage_ptr__->field0_0x0)._s_0.G = fVar11;
  return __return_storage_ptr__;
}

// SetWorking @ 1414b0a30

void __cdecl UE::Color::FColorSpace::SetWorking(FColorSpace *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  FColorSpace *pFVar5;
  FColorSpace *pFVar6;
  FColorSpace *pFVar7;
  longlong lVar8;
  
  lVar8 = 2;
  pFVar5 = &WorkingColorSpace;
  do {
    pFVar7 = param_1;
    pFVar6 = pFVar5;
    pFVar5 = (FColorSpace *)((pFVar6->RgbToXYZ).M + 2);
    dVar1 = (pFVar7->Chromaticities).Elements[0].field0_0x0._s_0.Y;
    dVar2 = (pFVar7->Chromaticities).Elements[1].field0_0x0._s_0.X;
    dVar3 = (pFVar7->Chromaticities).Elements[1].field0_0x0._s_0.Y;
    param_1 = (FColorSpace *)((pFVar7->RgbToXYZ).M + 2);
    (pFVar6->Chromaticities).Elements[0].field0_0x0._s_0.X =
         (pFVar7->Chromaticities).Elements[0].field0_0x0._s_0.X;
    (pFVar6->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar1;
    dVar1 = (pFVar7->Chromaticities).Elements[2].field0_0x0._s_0.X;
    dVar4 = (pFVar7->Chromaticities).Elements[2].field0_0x0._s_0.Y;
    (pFVar6->Chromaticities).Elements[1].field0_0x0._s_0.X = dVar2;
    (pFVar6->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar3;
    dVar2 = (pFVar7->Chromaticities).Elements[3].field0_0x0._s_0.X;
    dVar3 = (pFVar7->Chromaticities).Elements[3].field0_0x0._s_0.Y;
    (pFVar6->Chromaticities).Elements[2].field0_0x0._s_0.X = dVar1;
    (pFVar6->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar4;
    dVar1 = (pFVar7->RgbToXYZ).M[0][0];
    dVar4 = (pFVar7->RgbToXYZ).M[0][1];
    (pFVar6->Chromaticities).Elements[3].field0_0x0._s_0.X = dVar2;
    (pFVar6->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar3;
    dVar2 = (pFVar7->RgbToXYZ).M[0][2];
    dVar3 = (pFVar7->RgbToXYZ).M[0][3];
    (pFVar6->RgbToXYZ).M[0][0] = dVar1;
    (pFVar6->RgbToXYZ).M[0][1] = dVar4;
    dVar1 = (pFVar7->RgbToXYZ).M[1][0];
    dVar4 = (pFVar7->RgbToXYZ).M[1][1];
    (pFVar6->RgbToXYZ).M[0][2] = dVar2;
    (pFVar6->RgbToXYZ).M[0][3] = dVar3;
    dVar2 = (pFVar7->RgbToXYZ).M[1][2];
    dVar3 = (pFVar7->RgbToXYZ).M[1][3];
    (pFVar6->RgbToXYZ).M[1][0] = dVar1;
    (pFVar6->RgbToXYZ).M[1][1] = dVar4;
    (pFVar6->RgbToXYZ).M[1][2] = dVar2;
    (pFVar6->RgbToXYZ).M[1][3] = dVar3;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  dVar1 = (pFVar7->RgbToXYZ).M[2][1];
  bIsWorkingColorSpaceReadyForUse = true;
  dVar2 = (pFVar7->RgbToXYZ).M[2][2];
  dVar3 = (pFVar7->RgbToXYZ).M[2][3];
  (pFVar5->Chromaticities).Elements[0].field0_0x0._s_0.X =
       (param_1->Chromaticities).Elements[0].field0_0x0._s_0.X;
  (pFVar6->RgbToXYZ).M[2][1] = dVar1;
  dVar1 = (pFVar7->RgbToXYZ).M[3][0];
  dVar4 = (pFVar7->RgbToXYZ).M[3][1];
  (pFVar6->RgbToXYZ).M[2][2] = dVar2;
  (pFVar6->RgbToXYZ).M[2][3] = dVar3;
  dVar2 = (pFVar7->RgbToXYZ).M[3][2];
  dVar3 = (pFVar7->RgbToXYZ).M[3][3];
  (pFVar6->RgbToXYZ).M[3][0] = dVar1;
  (pFVar6->RgbToXYZ).M[3][1] = dVar4;
  dVar1 = (pFVar7->XYZToRgb).M[0][0];
  dVar4 = (pFVar7->XYZToRgb).M[0][1];
  (pFVar6->RgbToXYZ).M[3][2] = dVar2;
  (pFVar6->RgbToXYZ).M[3][3] = dVar3;
  (pFVar6->XYZToRgb).M[0][0] = dVar1;
  (pFVar6->XYZToRgb).M[0][1] = dVar4;
  return;
}

